import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpFireFunc extends GhidraScript {
    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        long[] addrs = {0x25c540L, 0x4bc180L};   // fire 함수 + 1302줄 base override
        for (long off : addrs) {
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + off);
            Function fn = getFunctionAt(addr);
            if (fn == null) fn = getFunctionContaining(addr);
            if (fn == null) { println("[FAIL] 0x" + Long.toHexString(off)); continue; }
            DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
            if (!res.decompileCompleted()) { println("[FAIL] 0x" + Long.toHexString(off) + " decomp"); continue; }
            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, "fire_0x" + Long.toHexString(off) + ".c");
            try (FileWriter fw = new FileWriter(out)) { fw.write(code); }
            println("[OK] 0x" + Long.toHexString(off) + " " + fn.getName() + " (" + code.split("\n").length + " lines)");
        }
    }
}
