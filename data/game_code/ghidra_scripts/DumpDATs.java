// DAT 상수 추가 dump (landGround / slopeYPos / processCommands 등에서 본 것)

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;

import java.io.File;
import java.io.FileWriter;

public class DumpDATs extends GhidraScript {
    @Override
    public void run() throws Exception {
        long imageBase = currentProgram.getImageBase().getOffset();
        Memory mem = currentProgram.getMemory();

        long[] addrs = {
            // landGround 에서 본 추가 DAT (착지 속도 임계값 — Y velocity)
            0x622e90L, 0x622ec0L, 0x622ee0L, 0x622f50L,
            0x623728L, 0x623748L, 0x623768L, 0x623770L,
            0x62304cL, 0x623358L, 0x62343cL, 0x6234a8L,
            // processCommands 에서 본 DAT
            0x62350cL,
            // slopeSnap / squish 비주얼
            0x622a10L, 0x622c24L, 0x622e58L,
            // GameObject_getRectMember
            0x623614L, 0x6c1c08L,
            // collidedWithObjectVariant 에서 빠진 거 추가
            0x622f00L, 0x622f10L, 0x622e80L, 0x622e88L,
        };

        File outDir = new File("D:/GhidraProjects/decomp");
        File datOut = new File(outDir, "_DAT_constants_v2.txt");
        try (FileWriter fw = new FileWriter(datOut)) {
            fw.write("# Additional DAT constants (landing/slope/visual)\n\n");
            for (long offset : addrs) {
                long fullAddr = imageBase + offset;
                Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(fullAddr);
                StringBuilder sb = new StringBuilder();
                sb.append("DAT_").append(String.format("%x", fullAddr));
                try {
                    int i32 = mem.getInt(addr);
                    long i64 = mem.getLong(addr);
                    float f = Float.intBitsToFloat(i32);
                    double d = Double.longBitsToDouble(i64);
                    sb.append(" float=").append(f).append("  double=").append(d);
                    sb.append("  i32=").append(i32);
                } catch (Exception e) {
                    sb.append("  ERROR");
                }
                sb.append("\n");
                fw.write(sb.toString());
                println(sb.toString());
            }
        }
        println("Done -> " + datOut.getAbsolutePath());
    }
}
