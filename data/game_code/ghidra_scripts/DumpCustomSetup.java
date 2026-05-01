// GameObject::customSetup @ 0x190e20 — per-ID type/flag/rect 조정 함수

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpCustomSetup extends GhidraScript {
    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        Object[][] targets = {
            {"GameObject_customSetup",  0x190e20L, 600},
            {"GameObject_setupCustomSprites", 0x1aef00L, 240},
            {"GameObject_getObjectRect_2", 0x1976c0L, 120},
            {"GameObject_transferObjectRect", 0x197650L, 120},
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
                println("[FAIL] " + name + " decompile error: " + res.getErrorMessage());
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
            println("[OK] " + name + " -> lines=" + lines + ", body=" + fn.getBody().getNumAddresses());
        }
    }
}
