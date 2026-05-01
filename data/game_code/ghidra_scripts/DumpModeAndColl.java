// Mode togglers + updatePlayerCollisionBlocks (real Collision detection)
// + updateJump (이미 있음 — 큰 함수라 다시 안 함)
// + updateDualGround / updateSlopeRotation / playerDestroyed

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpModeAndColl extends GhidraScript {
    static final Object[][] TARGETS = {
        // ⭐⭐ Collision 트리거 진짜 발동 위치 — Spawn 처리도 여기일 가능성
        {"GJBaseGameLayer_updatePlayerCollisionBlocks", 0x2185a0L},
        // 모드 togglers (mode 전환 시 player 멤버 업데이트)
        {"PlayerObject_toggleFlyMode",    0x39a4f0L},
        {"PlayerObject_toggleRollMode",   0x39b570L},   // ball
        {"PlayerObject_toggleRobotMode",  0x39b6f0L},
        {"PlayerObject_toggleSpiderMode", 0x39ba70L},
        {"PlayerObject_toggleSwingMode",  0x39ab20L},
        // 슬로프 회전 (slope 물리)
        {"PlayerObject_updateSlopeRotation", 0x390bc0L},
        {"PlayerObject_updateShipRotation",  0x390c40L},
        // dual ground 업데이트 (dual 모드)
        {"GJBaseGameLayer_updateDualGround", 0x213180L},
        // 사망 처리
        {"PlayerObject_playerDestroyed", 0x397d40L},
        // updatePlatformerTime — 플랫포머 모드 (2.2)
        {"GJBaseGameLayer_updatePlatformerTime", 0x2396c0L},
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        int ok = 0, fail = 0;
        for (Object[] t : TARGETS) {
            String name = (String) t[0];
            long offset = (Long) t[1];
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) fn = getFunctionContaining(addr);
            if (fn == null) {
                println("[FAIL] " + name + " @ 0x" + Long.toHexString(offset));
                fail++;
                continue;
            }
            DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
            if (!res.decompileCompleted()) {
                println("[FAIL] " + name + " (decomp err)");
                fail++;
                continue;
            }
            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, name + "__0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// " + name + " @ 0x" + Long.toHexString(offset) + "\n");
                fw.write("// Function: " + fn.getName() + "\n\n");
                fw.write(code);
            }
            int lines = code.split("\n").length;
            println("[OK] " + name + " (" + lines + " lines)");
            ok++;
        }
        println("Done: " + ok + " ok / " + fail + " fail / " + TARGETS.length);
    }
}
