// Boundary + 추가 DAT 상수

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;

import java.io.File;
import java.io.FileWriter;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;

public class DumpBoundaryDAT extends GhidraScript {
    @Override
    public void run() throws Exception {
        long imageBase = currentProgram.getImageBase().getOffset();
        long[] targets = {
            0x6238d8L,   // out-of-bounds boundary
            0x623000L,   // collision rounding
            0x6234a8L, 0x62343cL, 0x623358L, 0x62304cL, 0x6230d8L,  // velocity tiers
            0x623164L, 0x6232fcL, 0x623210L,  // distances
            0x6235a0L, 0x623294L, 0x623068L,  // spider DATs
            0x622cf0L, 0x622ca0L, 0x622d18L,  // timing
            0x622e98L, 0x622ee0L, 0x622e90L, 0x622e60L, 0x622e18L, 0x622f00L, 0x622e88L,
            0x622f70L, 0x622f30L,
            0x6243d0L, 0x6243c0L,  // masks
            0x622d98L, 0x6231e0L, 0x6231d0L,
            0x6238c0L, 0x6238b8L, 0x6238b0L, 0x6238a8L,  // boundary thresholds
            0x6237c0L, 0x623644L, 0x623750L, 0x623420L,
        };
        StringBuilder out = new StringBuilder();
        out.append("# Death-related boundary + threshold DATs\n\n");
        for (long off : targets) {
            try {
                Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace()
                                  .getAddress(imageBase + off);
                byte[] bytes = new byte[8];
                for (int i = 0; i < 8; i++) bytes[i] = currentProgram.getMemory().getByte(addr.add(i));
                ByteBuffer bb = ByteBuffer.wrap(bytes).order(ByteOrder.LITTLE_ENDIAN);
                out.append(String.format("DAT_140%06x  float=%g  double=%g  i32=%d\n",
                                          off, bb.getFloat(0), bb.getDouble(0), bb.getInt(0)));
            } catch (Exception e) {
                out.append(String.format("DAT_140%06x  ERROR: %s\n", off, e.getMessage()));
            }
        }
        File file = new File("D:/GhidraProjects/decomp/_DAT_boundary.txt");
        try (FileWriter fw = new FileWriter(file)) { fw.write(out.toString()); }
        println(out.toString());
    }
}
