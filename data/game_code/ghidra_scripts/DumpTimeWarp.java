import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpTimeWarp extends GhidraScript {
    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        Object[][] T = {
            {"GJBaseGameLayer_updateTimeWarp", 0x236150L},
            {"GJBaseGameLayer_applyTimeWarp",  0x2361a0L},
        };
        for (Object[] t : T) {
            String name = (String) t[0];
            long offset = (Long) t[1];
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) fn = getFunctionContaining(addr);
            if (fn == null) continue;
            DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
            if (!res.decompileCompleted()) continue;
            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, name + "__0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) { fw.write(code); }
            println("[OK] " + name + " (" + code.split("\n").length + " lines)");
        }
    }
}
