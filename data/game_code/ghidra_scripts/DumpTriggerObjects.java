// Geode bindings 에서 확인한 triggerObject 5개 구현 dump

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpTriggerObjects extends GhidraScript {
    static final long[][] TARGETS = {
        // {address, name}
        {0x4a5f30L, 0}, // EffectGameObject (base) ★
        {0x4b9e10L, 0},
        {0x4bb210L, 0},
        {0x4bd820L, 0},
        {0x4c23f0L, 0},
    };
    static final String[] NAMES = {
        "EffectGameObject_base",
        "Trigger_4b9e10",
        "Trigger_4bb210",
        "Trigger_4bd820",
        "Trigger_4c23f0",
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        for (int i = 0; i < TARGETS.length; i++) {
            long offset = TARGETS[i][0];
            String name = NAMES[i];
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) fn = getFunctionContaining(addr);
            if (fn == null) {
                println("[FAIL] " + name + " @ 0x" + Long.toHexString(offset));
                continue;
            }
            DecompileResults res = decomp.decompileFunction(fn, 300, monitor);
            if (!res.decompileCompleted()) {
                println("[FAIL] " + name + " decompile error");
                continue;
            }
            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, "triggerObject_" + name + "__0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys)\n");
                fw.write("// Class: " + name + " @ 0x" + Long.toHexString(offset) + "\n");
                fw.write("// (Geode 2.2081 bindings)\n\n");
                fw.write(code);
            }
            int lines = code.split("\n").length;
            println("[OK] " + name + " -> " + out.getName() + " (lines=" + lines + ")");
        }
    }
}
