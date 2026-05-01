import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpRound14 extends GhidraScript {
    static final Object[][] TARGETS = {
        {"PlayerObject_update_388d80",      0x388d80L},  // virtual update — main player loop
        {"PlayerObject_updateMove_38a0c0",  0x38a0c0L},  // movement
        {"PlayerObject_updatePlayerArt",    0x398860L},  // 이미 있음, 무관
        // 나머지: collisionCheckObjects 가 호출하는 거대 함수
        {"GJBaseGameLayer_largeFunc_211620",0x211620L},  // 286줄
        {"GJBaseGameLayer_largeFunc_2168d0",0x2168d0L},  // 209줄
        {"PlayerObject_largeFunc_3a0700",   0x3a0700L},  // 192줄
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
            if (fn == null) { println("[FAIL] " + name); continue; }
            DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
            if (!res.decompileCompleted()) { println("[FAIL] " + name + " decomp"); continue; }
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
