// Ghidra Java 스크립트 v2 — 추가 함수 디컴파일 + DAT 상수 값 dump
//
// 헤드리스 실행:
//   analyzeHeadless.bat D:\GhidraProjects GD -process GeometryDash.exe \
//     -scriptPath D:\GhidraProjects -postScript DumpFunctions2.java -noanalysis
//
// 출력:
//   D:\GhidraProjects\decomp\<name>__0xADDR.c
//   D:\GhidraProjects\decomp\_DAT_constants.txt

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;

import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.List;

public class DumpFunctions2 extends GhidraScript {

    // 새로 추가하는 함수 (1차 dump 에서 빠진 것들)
    static final Object[][] TARGETS = {
        // ⭐⭐⭐ 진짜 트리거 발동 — processTriggers 가 호출
        {"REAL_triggerObjectDispatch",          0x2338e0L},

        // collidedWithObjectVariant 가 호출하는 sub-function들 (chain)
        {"PlayerObject_setYVelocity_388d10",    0x388d10L}, // FUN_140388d10 — 큐브에 y속도 설정 (큐브)
        {"PlayerObject_postCollideY_393c30",    0x393c30L}, // FUN_140393c30 — 충돌 후 처리
        {"PlayerObject_postCollideY_393cb0",    0x393cb0L}, // FUN_140393cb0 — 충돌 후 처리 (변종)
        {"PlayerObject_landGround_39bf30",      0x39bf30L}, // FUN_14039bf30 — landed (param: source obj)
        {"PlayerObject_landCeiling_39bed0",     0x39bed0L}, // FUN_14039bed0 — ceiling hit
        {"PlayerObject_slopeSnap_38cf30",       0x38cf30L}, // FUN_14038cf30 — 슬로프 처리 (시뮬 0x16e=ship?)
        {"PlayerObject_squishCheckRight_394200",0x394200L}, // FUN_140394200 — X 측 끼임 (오른쪽)
        {"PlayerObject_squishCheckLeft_3942a0", 0x3942a0L}, // FUN_1403942a0 — X 측 끼임 (왼쪽)
        {"PlayerObject_preCollideSetup_3913f0", 0x3913f0L}, // FUN_1403913f0 — 충돌 전 setup
        {"PlayerObject_postCollideTeardown_3916e0", 0x3916e0L}, // FUN_1403916e0 — 충돌 후 teardown
        {"PlayerObject_savePositionState_396650",0x396650L}, // FUN_140396650 — 위치 저장 (체크포인트?)

        // 헬퍼들
        {"GameObject_getRectMember_19c5a0",     0x19c5a0L}, // FUN_14019c5a0 — getRect 변종 (rect 종류 분기)
        {"GameObject_slopeYPos_1a13b0",         0x1a13b0L}, // FUN_1401a13b0 — 슬로프 Y 좌표
        {"GJBaseGameLayer_killPlayer_216090",   0x216090L}, // FUN_140216090 — 플레이어 죽이기 (시뮬은 destroyPlayer)
        {"GJBaseGameLayer_broadcastEvent_231ff0",0x231ff0L}, // FUN_140231ff0 — 이벤트 브로드캐스트 (collision trigger 등)
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

            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) {
                Address addr2 = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
                fn = getFunctionAt(addr2);
                if (fn == null) fn = getFunctionContaining(addr2);
            }
            if (fn == null) fn = getFunctionContaining(addr);

            if (fn == null) {
                println("[FAIL] " + name + " @ 0x" + Long.toHexString(offset) + " (function not found)");
                failed.add(name + " @ 0x" + Long.toHexString(offset));
                continue;
            }

            DecompileResults res = decomp.decompileFunction(fn, 180, monitor);
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

        // ============== DAT 상수 값 dump ==============
        long[] datAddrs = {
            // collidedWithObjectVariant 에서 본 DAT들
            0x622b08L, 0x622ca0L, 0x622cf0L, 0x622d18L,
            0x622e18L, 0x622e60L, 0x622e98L, 0x622ef0L,
            0x623000L, 0x623010L, 0x623028L, 0x62307cL,
            0x6243c0L, 0x6c2458L, 0x6c2ed8L,
            // 다른 함수들에서 본 잠재적 후보들 (더 추가 가능)
        };

        File datOut = new File(outDir, "_DAT_constants.txt");
        try (FileWriter fw = new FileWriter(datOut)) {
            fw.write("# DAT constants used in collidedWithObjectVariant (and friends)\n");
            fw.write("# Format: addr | float | double | int32 | int64 | bytes\n");
            fw.write("# imageBase = 0x" + Long.toHexString(imageBase) + "\n\n");

            Memory mem = currentProgram.getMemory();
            for (long offset : datAddrs) {
                long fullAddr = imageBase + offset;
                Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(fullAddr);
                StringBuilder sb = new StringBuilder();
                sb.append("DAT_").append(String.format("%x", fullAddr)).append("  (offset=0x").append(Long.toHexString(offset)).append(")");

                try {
                    int i32 = mem.getInt(addr);
                    long i64 = mem.getLong(addr);
                    float f = Float.intBitsToFloat(i32);
                    double d = Double.longBitsToDouble(i64);
                    byte[] bytes = new byte[8];
                    mem.getBytes(addr, bytes);
                    StringBuilder bs = new StringBuilder();
                    for (byte b : bytes) bs.append(String.format("%02x ", b & 0xff));
                    sb.append("\n  float=").append(f);
                    sb.append("  double=").append(d);
                    sb.append("  i32=0x").append(String.format("%x", i32 & 0xffffffffL));
                    sb.append(" (").append(i32).append(")");
                    sb.append("  i64=0x").append(String.format("%x", i64));
                    sb.append("\n  bytes=").append(bs.toString());
                } catch (Exception e) {
                    sb.append("  ERROR: ").append(e.getMessage());
                }
                sb.append("\n\n");
                fw.write(sb.toString());
                println(sb.toString());
            }
        }

        println("");
        println("======================================");
        println("Done: " + success + " / " + TARGETS.length + " functions");
        if (!failed.isEmpty()) {
            println("Failed:");
            for (String f : failed) println("  " + f);
        }
        println("Output: D:/GhidraProjects/decomp/");
        println("DAT constants: D:/GhidraProjects/decomp/_DAT_constants.txt");
    }
}
