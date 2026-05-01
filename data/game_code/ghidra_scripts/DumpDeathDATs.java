// Death-related DAT constants

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;

import java.io.File;
import java.io.FileWriter;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;

public class DumpDeathDATs extends GhidraScript {
    @Override
    public void run() throws Exception {
        long imageBase = currentProgram.getImageBase().getOffset();
        long[] targets = {
            0x622ca0L, 0x622cf0L, 0x622d18L, 0x622e60L, 0x622e18L, 0x622e98L,
            0x623028L, 0x622bd8L, 0x622ca8L, 0x622c08L, 0x6231e0L, 0x6243c0L,
            // Bonus
            0x622a74L, 0x6235a0L, 0x623294L, 0x622e90L, 0x622ee0L, 0x622f00L,
            0x622b08L, 0x622c24L, 0x622c54L, 0x622b74L,
            // Lap timer thresholds + landing
            0x623770L, 0x6232fcL, 0x623164L,
        };
        StringBuilder out = new StringBuilder();
        out.append("# Death-related DAT constants\n\n");

        for (long off : targets) {
            try {
                Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace()
                                    .getAddress(imageBase + off);
                byte[] bytes = new byte[8];
                for (int i = 0; i < 8; i++) {
                    bytes[i] = currentProgram.getMemory().getByte(addr.add(i));
                }
                ByteBuffer bb = ByteBuffer.wrap(bytes).order(ByteOrder.LITTLE_ENDIAN);
                float fVal = bb.getFloat(0);
                double dVal = bb.getDouble(0);
                int iVal = bb.getInt(0);
                out.append(String.format("DAT_140%06x  float=%g  double=%g  i32=%d\n",
                                          off, fVal, dVal, iVal));
            } catch (Exception e) {
                out.append(String.format("DAT_140%06x  ERROR: %s\n", off, e.getMessage()));
            }
        }

        File file = new File("D:/GhidraProjects/decomp/_DAT_death.txt");
        try (FileWriter fw = new FileWriter(file)) {
            fw.write(out.toString());
        }
        println("Wrote " + file.getAbsolutePath());
        println(out.toString());
    }
}
