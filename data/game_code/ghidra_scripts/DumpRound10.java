// Round 10 — collidedWithSlopeInternal sub-calls + 새 DAT

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;

import java.io.File;
import java.io.FileWriter;

public class DumpRound10 extends GhidraScript {
    static final long[] FUN_ADDRS = {
        0x38d350L, 0x38f2e0L, 0x3a43c0L, 0x24e530L,
    };
    static final long[] DAT_ADDRS = {
        0x6229bcL, 0x622b74L, 0x622b8cL, 0x622c54L, 0x622cd8L,
        0x622d98L, 0x623120L, 0x6231b0L, 0x623200L, 0x6236f0L,
        0x623738L, 0x6237c0L, 0x6243d0L,
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        Memory mem = currentProgram.getMemory();

        for (long offset : FUN_ADDRS) {
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) fn = getFunctionContaining(addr);
            if (fn == null) { println("[FAIL] 0x" + Long.toHexString(offset)); continue; }
            DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
            if (!res.decompileCompleted()) continue;
            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, "round10_0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// " + fn.getName() + " @ 0x" + Long.toHexString(offset) + "\n\n");
                fw.write(code);
            }
            println("[OK] 0x" + Long.toHexString(offset) + " " + fn.getName() + " (" + code.split("\n").length + " lines)");
        }

        File datOut = new File(outDir, "_DAT_constants_v4.txt");
        try (FileWriter fw = new FileWriter(datOut)) {
            for (long offset : DAT_ADDRS) {
                long fullAddr = imageBase + offset;
                Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(fullAddr);
                int i32 = mem.getInt(addr);
                long i64 = mem.getLong(addr);
                float f = Float.intBitsToFloat(i32);
                double d = Double.longBitsToDouble(i64);
                String line = String.format("DAT_%x  float=%g  double=%g  i32=%d\n", fullAddr, f, d, i32);
                fw.write(line);
                println(line.trim());
            }
        }
    }
}
