// triggerObject base + 0x4bc180 가 호출하는 모든 미디컴파일 FUN_xxx 일괄 dump

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpEffectsAll extends GhidraScript {
    static final long[] ADDRS = {
        0x5e430L, 0x60b20L, 0x846d0L, 0x17ab00L, 0x1993b0L,
        0x20e400L, 0x20e760L, 0x20fdb0L, 0x2174e0L, 0x217bc0L,
        0x219090L, 0x21efb0L, 0x21f2a0L, 0x21f4c0L, 0x21f750L,
        0x221030L, 0x223d50L, 0x224280L, 0x224590L, 0x2271c0L,
        0x22eac0L, 0x233ec0L, 0x235cf0L, 0x2360b0L, 0x23bc50L,
        0x23feb0L, 0x2415c0L, 0x241940L, 0x241c50L, 0x241e50L,
        0x24a470L, 0x24b270L, 0x2505b0L, 0x2508a0L, 0x250c90L,
        0x251cb0L, 0x25c430L, 0x25c9b0L, 0x25cae0L, 0x25cbf0L,
        0x2620e0L, 0x2623f0L, 0x2624b0L, 0x26c2b0L, 0x26c550L,
        0x38b440L, 0x39ee30L, 0x4a5200L, 0x4d0770L,
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        int ok = 0, fail = 0;
        for (long offset : ADDRS) {
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) fn = getFunctionContaining(addr);
            if (fn == null) {
                println("[FAIL] @ 0x" + Long.toHexString(offset));
                fail++;
                continue;
            }
            DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
            if (!res.decompileCompleted()) {
                println("[FAIL] @ 0x" + Long.toHexString(offset) + " (decomp err)");
                fail++;
                continue;
            }
            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, "trigEffect_0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// Called from triggerObject base / 0x4bc180\n");
                fw.write("// Function: " + fn.getName() + " @ 0x" + Long.toHexString(offset) + "\n\n");
                fw.write(code);
            }
            int lines = code.split("\n").length;
            println("[OK] 0x" + Long.toHexString(offset) + " " + fn.getName() + " (" + lines + " lines)");
            ok++;
        }
        println("Done: " + ok + " ok / " + fail + " fail / " + ADDRS.length + " total");
    }
}
