// EnhancedGameObject + RingObject 의 customSetup chain dump

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpEnhancedAndRing extends GhidraScript {
    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        Object[][] targets = {
            {"EnhancedGameObject_customSetup",  0x1a4f70L, 240},
            {"EndPortalObject_create",          0x39c380L, 120}, // mac addr — fallback to win equivalent
            {"GameObject_getObjectRect_1",      0x1976a0L, 120},
            {"GameObject_getObjectTextureRect", 0x1978f0L, 120},
        };
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        for (Object[] t : targets) {
            String name = (String) t[0];
            long offset = (Long) t[1];
            int timeout = (Integer) t[2];

            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace()
                              .getAddress(imageBase + offset);
            Function fn = getFunctionContaining(addr);
            if (fn == null) {
                println("[FAIL] " + name + " not found");
                continue;
            }

            DecompileResults res = decomp.decompileFunction(fn, timeout, monitor);
            if (!res.decompileCompleted()) {
                println("[FAIL] " + name + " decompile error");
                continue;
            }

            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, name + "__0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// " + name + " @ 0x" + Long.toHexString(offset) + "\n");
                fw.write("// Body: " + fn.getBody().getNumAddresses() + " bytes\n\n");
                fw.write(code);
            }
            int lines = code.split("\n").length;
            println("[OK] " + name + " -> lines=" + lines);
        }
    }
}
