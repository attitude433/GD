// 9차 — Spider + collisionCheckObjects 가 호출하는 29 함수 + 15 DAT 값

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;

import java.io.File;
import java.io.FileWriter;

public class DumpRound9 extends GhidraScript {
    static final long[] FUN_ADDRS = {
        0x6e130L, 0xcdbf0L, 0x12d2a0L, 0x1a1910L, 0x1a19d0L,
        0x211260L, 0x211620L, 0x211df0L, 0x212b00L, 0x212ef0L,
        0x213690L, 0x2161b0L, 0x216700L, 0x2168d0L, 0x2178c0L,
        0x2179d0L, 0x217e40L, 0x217f50L, 0x239ba0L, 0x2467d0L,
        0x261ff0L, 0x38f810L, 0x398430L, 0x39a1d0L, 0x39a820L,
        0x39af90L, 0x3a0700L, 0x4b90f0L, 0x4c1ec0L,
    };
    static final long[] DAT_ADDRS = {
        0x622b08L, 0x622ba4L, 0x622c24L, 0x622e58L, 0x622ff0L,
        0x623068L, 0x62307cL, 0x623210L, 0x623294L, 0x6235a0L,
        0x623610L, 0x623730L, 0x6237a8L, 0x62381cL, 0x6c2458L,
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        Memory mem = currentProgram.getMemory();

        int ok = 0;
        for (long offset : FUN_ADDRS) {
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) fn = getFunctionContaining(addr);
            if (fn == null) {
                println("[FAIL] 0x" + Long.toHexString(offset));
                continue;
            }
            DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
            if (!res.decompileCompleted()) continue;
            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, "round9_0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// " + fn.getName() + " @ 0x" + Long.toHexString(offset) + "\n\n");
                fw.write(code);
            }
            int lines = code.split("\n").length;
            println("[OK] 0x" + Long.toHexString(offset) + " " + fn.getName() + " (" + lines + " lines)");
            ok++;
        }

        File datOut = new File(outDir, "_DAT_constants_v3.txt");
        try (FileWriter fw = new FileWriter(datOut)) {
            fw.write("# Round 9 DAT constants\n\n");
            for (long offset : DAT_ADDRS) {
                long fullAddr = imageBase + offset;
                Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(fullAddr);
                try {
                    int i32 = mem.getInt(addr);
                    long i64 = mem.getLong(addr);
                    float f = Float.intBitsToFloat(i32);
                    double d = Double.longBitsToDouble(i64);
                    String line = String.format("DAT_%x  float=%g  double=%g  i32=%d\n",
                            fullAddr, f, d, i32);
                    fw.write(line);
                    println(line.trim());
                } catch (Exception e) {}
            }
        }
        println("Done: " + ok + " / " + FUN_ADDRS.length);
    }
}
