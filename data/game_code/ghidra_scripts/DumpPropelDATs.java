import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;

import java.io.File;
import java.io.FileWriter;

public class DumpPropelDATs extends GhidraScript {
    @Override
    public void run() throws Exception {
        long imageBase = currentProgram.getImageBase().getOffset();
        Memory mem = currentProgram.getMemory();
        long[] addrs = {
            0x6230f8L, 0x622db0L,
        };
        for (long offset : addrs) {
            long fullAddr = imageBase + offset;
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(fullAddr);
            int i32 = mem.getInt(addr);
            long i64 = mem.getLong(addr);
            float f = Float.intBitsToFloat(i32);
            double d = Double.longBitsToDouble(i64);
            println(String.format("DAT_%x  float=%g  double=%g  i32=%d", fullAddr, f, d, i32));
        }
    }
}
