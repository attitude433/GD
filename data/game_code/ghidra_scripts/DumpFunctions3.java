// 3차 — 진짜 트리거 case 분기 + collision loop + 멤버 변수 처리

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.List;

public class DumpFunctions3 extends GhidraScript {
    static final Object[][] TARGETS = {
        // ⭐ 진짜 트리거 분기 (triggerObjectDispatch 의 sub) — 80개 case 가 여기 있을 가능성
        {"PlayerObject_triggerCheck_3981d0",       0x3981d0L},
        {"PlayerObject_triggerCheck_397f40",       0x397f40L},

        // GJBaseGameLayer::update 가 호출하는 초기 함수들 (트리거 발동 큐)
        {"GJBaseGameLayer_updateGroups_21fbe0",    0x21fbe0L},
        {"GJBaseGameLayer_updateColors_2222b0",    0x2222b0L},
        {"GJBaseGameLayer_updateMoveTriggers_2466c0", 0x2466c0L},
        {"GJBaseGameLayer_updateRotTriggers_248880",  0x248880L},

        // collision detection 메인 루프 (update 가 호출)
        {"GJBaseGameLayer_collisionLoop_213770",   0x213770L},
        {"GJBaseGameLayer_collisionInner_2137f0",  0x2137f0L},

        // PlayerObject 매 프레임 업데이트 (update 가 호출)
        {"PlayerObject_perFrameUpdate_3a3f10",     0x3a3f10L},

        // FUN_140183110 — DAT_140557780 lookup (settings 같은 거?)
        {"GJSomething_lookupSetting_183110",       0x183110L},

        // collidedWithObjectVariant 가 호출하는 잔여
        {"PlayerObject_setupCollideEvent_239c60",  0x239c60L},  // 이미 있지만 재확인
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        if (!outDir.exists()) outDir.mkdirs();

        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        int success = 0;
        List<String> failed = new ArrayList<>();

        for (Object[] t : TARGETS) {
            String name = (String) t[0];
            long offset = (Long) t[1];

            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) {
                Address addr2 = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
                fn = getFunctionAt(addr2);
                if (fn == null) fn = getFunctionContaining(addr2);
            }
            if (fn == null) fn = getFunctionContaining(addr);

            if (fn == null) {
                println("[FAIL] " + name + " not found");
                failed.add(name);
                continue;
            }

            DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
            if (!res.decompileCompleted()) {
                println("[FAIL] " + name + " decompile error");
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
            println("[OK] " + name + " -> lines=" + lines);
            success++;
        }

        println("");
        println("Done: " + success + " / " + TARGETS.length);
        if (!failed.isEmpty()) {
            println("Failed:");
            for (String f : failed) println("  " + f);
        }
    }
}
