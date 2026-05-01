// ObjectToolbox::init() dump — 여기서 ID → 텍스처 dictionary 가 채워짐

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpObjectToolboxInit extends GhidraScript {
    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        if (!outDir.exists()) outDir.mkdirs();

        long offset = 0x348d70L;
        String name = "ObjectToolbox_init";

        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        long imageBase = currentProgram.getImageBase().getOffset();
        Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
        Function fn = getFunctionAt(addr);
        if (fn == null) fn = getFunctionContaining(addr);
        if (fn == null) {
            println("[FAIL] " + name + " not found");
            return;
        }

        // 거대할 가능성 높음 — 1200초
        DecompileResults res = decomp.decompileFunction(fn, 1200, monitor);
        if (!res.decompileCompleted()) {
            println("[FAIL] decompile error: " + res.getErrorMessage());
            return;
        }

        String code = res.getDecompiledFunction().getC();
        File out = new File(outDir, name + "__0x" + Long.toHexString(offset) + ".c");
        try (FileWriter fw = new FileWriter(out)) {
            fw.write("// Function: " + fn.getName() + "\n");
            fw.write("// Target: " + name + " @ 0x" + Long.toHexString(offset) + "\n");
            fw.write("// Signature: " + fn.getSignature() + "\n");
            fw.write("// Body size: " + fn.getBody().getNumAddresses() + " bytes\n\n");
            fw.write(code);
        }
        int lines = code.split("\n").length;
        println("[OK] " + name + " -> lines=" + lines + ", body=" + fn.getBody().getNumAddresses());
    }
}
