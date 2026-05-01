import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;

import java.io.File;
import java.io.FileWriter;

public class DumpRingDATs extends GhidraScript {
    @Override
    public void run() throws Exception {
        long imageBase = currentProgram.getImageBase().getOffset();
        Memory mem = currentProgram.getMemory();
        // ringJump 의 type별 multiplier
        long[] addrs = {
            0x622ac4L, 0x622ad4L, 0x622b74L, 0x622b80L, 0x622b94L,
            0x622bd8L, 0x622c2cL, 0x622c54L, 0x622c9cL, 0x622cc4L,
            0x622cd0L, 0x622cd4L, 0x622cd8L, 0x6229f4L, 0x623864L,
            0x623880L,
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
