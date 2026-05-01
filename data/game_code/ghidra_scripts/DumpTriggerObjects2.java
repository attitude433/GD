// 나머지 10개 파생 클래스 triggerObject + 0x4b9e10 재시도

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpTriggerObjects2 extends GhidraScript {
    static final long[] ADDRS = {
        0x4bccd0L, 0x4b88a0L, 0x4bfcf0L, 0x4b41e0L, 0x4b4870L,
        0x4b91f0L, 0x4bf1e0L, 0x4bc180L, 0x4c3320L,
        0x4b9e10L,  // 1차 실패 — 재시도
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        int ok = 0;
        for (long offset : ADDRS) {
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) fn = getFunctionContaining(addr);
            if (fn == null) {
                println("[FAIL] @ 0x" + Long.toHexString(offset) + " — function not found");
                continue;
            }
            DecompileResults res = decomp.decompileFunction(fn, 300, monitor);
            if (!res.decompileCompleted()) {
                println("[FAIL] @ 0x" + Long.toHexString(offset) + " — decomp error");
                continue;
            }
            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, "triggerObject_0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// triggerObject @ 0x" + Long.toHexString(offset) + "\n");
                fw.write("// Function: " + fn.getName() + "\n\n");
                fw.write(code);
            }
            println("[OK] 0x" + Long.toHexString(offset) + " (" + code.split("\n").length + " lines)");
            ok++;
        }
        println("Done: " + ok + " / " + ADDRS.length);
    }
}
