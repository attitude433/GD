import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;

import java.io.File;
import java.io.FileWriter;

public class DumpModeDATs extends GhidraScript {
    @Override
    public void run() throws Exception {
        long imageBase = currentProgram.getImageBase().getOffset();
        Memory mem = currentProgram.getMemory();
        // updateMove 의 모드별 가속도 / 속도 multiplier
        long[] addrs = {
            0x6229c0L, 0x6229ecL, 0x622a10L, 0x622a50L, 0x622a74L,
            0x622c38L, 0x622cb0L, 0x622de8L, 0x622dd0L, 0x622e00L,
            0x622e38L, 0x622e90L, 0x622f30L, 0x622f70L, 0x622d78L,
            0x623708L, 0x623710L, 0x623718L,
            0x6243d0L, 0x6243e0L, 0x6243f0L,
        };
        File outDir = new File("D:/GhidraProjects/decomp");
        File datOut = new File(outDir, "_DAT_constants_v5.txt");
        try (FileWriter fw = new FileWriter(datOut)) {
            fw.write("# Round 15 — updateMove 의 mode multipliers + 추가\n\n");
            for (long offset : addrs) {
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
