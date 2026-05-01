// Ghidra Java 스크립트 — 핵심 함수 디컴파일 결과를 텍스트로 export
//
// 헤드리스 실행:
//   analyzeHeadless.bat D:\GhidraProjects GD -process GeometryDash.exe \
//     -scriptPath D:\GhidraProjects -postScript DumpFunctions.java -noanalysis
//
// 출력: D:\GhidraProjects\decomp\<name>__0xADDR.c

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.List;

public class DumpFunctions extends GhidraScript {

    // (이름, Windows 주소) — bindings 헤더에서 추출
    static final Object[][] TARGETS = {
        // Trigger processing
        {"EffectGameObject_triggerActivated",   0x4a8790L}, // 80개 트리거 case 분기
        {"EffectGameObject_customSetup",        0x4a87e0L},
        {"EffectGameObject_customObjectSetup",  0x4a8ad0L}, // .gmd 키 → 멤버 매핑
        {"EffectGameObject_firstSetup",         0x4a87b0L},
        // Player physics / collision
        {"PlayerObject_collidedWithObject",     0x3919b0L}, // 충돌 처리
        {"PlayerObject_propellPlayer",          0x39f850L}, // 점프 패드
        {"PlayerObject_ringJump",               0x398c00L}, // 점프 오브
        {"PlayerObject_bumpPlayer",             0x39f6a0L},
        {"PlayerObject_boostPlayer",            0x39fee0L},
        {"PlayerObject_updateJump",             0x38b900L},
        {"PlayerObject_updatePlayerFrame",      0x39dc50L},
        // Game layer / triggers
        {"GJBaseGameLayer_update",              0x237850L}, // 메인 루프
        {"GJBaseGameLayer_processCommands",     0x239c60L},
        {"GJBaseGameLayer_spawnGroup",          0x21ab80L},
        {"GJBaseGameLayer_toggleGroup",         0x223bc0L},
        {"GJBaseGameLayer_addToGroup",          0x223fd0L},
        // PlayLayer
        {"PlayLayer_destroyPlayer",             0x3b39d0L},
        {"PlayLayer_addObject",                 0x3add70L},

        // 디컴파일 결과로 발견한 진짜 처리 함수들 (wrapper 가 호출함)
        {"REAL_processTriggers",                0x231d10L}, // processCommands → 호출
        {"REAL_collidedWithObjectInternal",     0x38f140L}, // collidedWithObject → 분기 1
        {"REAL_collidedWithObjectVariant",      0x391a70L}, // collidedWithObject → 분기 2
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        if (!outDir.exists()) outDir.mkdirs();

        long imageBase = currentProgram.getImageBase().getOffset();
        println("Image base: 0x" + Long.toHexString(imageBase));

        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        int success = 0;
        List<String> failed = new ArrayList<>();

        for (Object[] t : TARGETS) {
            String name = (String) t[0];
            long offset = (Long) t[1];

            // 시도 1: 그대로
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset);
            Function fn = getFunctionAt(addr);
            // 시도 2: image base 더하기
            if (fn == null) {
                Address addr2 = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
                fn = getFunctionAt(addr2);
                if (fn == null) fn = getFunctionContaining(addr2);
            }
            // 시도 3: containing
            if (fn == null) fn = getFunctionContaining(addr);

            if (fn == null) {
                println("[FAIL] " + name + " @ 0x" + Long.toHexString(offset) + " (function not found)");
                failed.add(name + " @ 0x" + Long.toHexString(offset));
                continue;
            }

            DecompileResults res = decomp.decompileFunction(fn, 120, monitor);
            if (!res.decompileCompleted()) {
                println("[FAIL] " + name + " decompile: " + res.getErrorMessage());
                failed.add(name);
                continue;
            }

            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, name + "__0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// Function: " + fn.getName() + "\n");
                fw.write("// Original target: " + name + " @ 0x" + Long.toHexString(offset) + "\n");
                fw.write("// Ghidra entry: " + fn.getEntryPoint() + "\n");
                fw.write("// Signature: " + fn.getSignature() + "\n\n");
                fw.write(code);
            }
            int lines = code.split("\n").length;
            println("[OK] " + name + " -> " + out.getName() + " (lines=" + lines + ")");
            success++;
        }

        println("");
        println("======================================");
        println("Done: " + success + " / " + TARGETS.length + " functions");
        if (!failed.isEmpty()) {
            println("Failed:");
            for (String f : failed) println("  " + f);
        }
        println("Output: D:/GhidraProjects/decomp/");
    }
}
