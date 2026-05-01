// Round 11 — Item/Counter/Timer 시스템

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpItems extends GhidraScript {
    static final Object[][] TARGETS = {
        {"GJBaseGameLayer_processItems",                 0x216290L},
        {"GJBaseGameLayer_pickupItem",                   0x2161b0L},
        {"GJBaseGameLayer_getItemValue",                 0x2341c0L},
        {"GJBaseGameLayer_activateItemCompareTrigger",   0x234630L},
        {"GJBaseGameLayer_activateItemEditTrigger",      0x234250L},
        {"GJBaseGameLayer_activatePersistentItemTrigger",0x234a40L},
        {"GJBaseGameLayer_activateTimerTrigger",         0x234e60L},
        {"PlayerObject_incrementJumps",                  0x38cba0L},
        {"GJBaseGameLayer_processCounter_43230",         0x43230L},
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
