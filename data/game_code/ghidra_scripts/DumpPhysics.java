import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpPhysics extends GhidraScript {
    static final Object[][] TARGETS = {
        {"PlayerObject_spiderTestJump",         0x394340L},
        {"PlayerObject_spiderTestJumpInternal", 0x3943f0L},
        {"PlayLayer_switchToRobotMode",         0x212c20L},
        {"PlayLayer_switchToSpiderMode",        0x212d10L},
        {"PlayerObject_playerJump_init_39be30", 0x39be30L},  // Robot 초기화에서 호출
        {"PlayerObject_robotJumpRelated_398860",0x398860L},  // Robot 토글에서 호출
        {"PlayerObject_robotJumpRelated_3961c0",0x3961c0L},  // Robot 토글에서 호출
        {"PlayerObject_playSpiderDashEffect",   0x395170L},
        {"PlayerObject_playDynamicSpiderRun",   0x3a14d0L},
        {"PlayerObject_updateRobotAnimationSpeed", 0x3a10e0L},
        // updateJump 는 이미 dump 됨 — 0x38b900
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        int ok = 0;
        for (Object[] t : TARGETS) {
            String name = (String) t[0];
            long offset = (Long) t[1];
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) fn = getFunctionContaining(addr);
            if (fn == null) {
                println("[FAIL] " + name);
                continue;
            }
            DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
            if (!res.decompileCompleted()) {
                println("[FAIL] " + name + " (decomp)");
                continue;
            }
            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, name + "__0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// " + name + " @ 0x" + Long.toHexString(offset) + "\n\n");
                fw.write(code);
            }
            int lines = code.split("\n").length;
            println("[OK] " + name + " (" + lines + " lines)");
            ok++;
        }
        println("Done: " + ok + " / " + TARGETS.length);
    }
}
