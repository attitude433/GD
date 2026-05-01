// Move/Color/Pulse 효과 함수 + 파생 클래스 triggerObject

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpEffects extends GhidraScript {
    static final Object[][] TARGETS = {
        // Move/Color/Pulse 효과 함수 (triggerObject base 가 호출)
        {"effect_Move_21ea40",     0x21ea40L},
        {"effect_Color_260c40",    0x260c40L},
        {"effect_Pulse_260a70",    0x260a70L},
        // 파생 클래스 triggerObject 들 (Geode binding 에서 확인)
        {"triggerObject_4b9e10",   0x4b9e10L},
        {"triggerObject_4bb210",   0x4bb210L},
        {"triggerObject_4bd820",   0x4bd820L},
        {"triggerObject_4c23f0",   0x4c23f0L},
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        for (Object[] t : TARGETS) {
            String name = (String) t[0];
            long offset = (Long) t[1];
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
            File out = new File(outDir, name + "__0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// " + name + " @ 0x" + Long.toHexString(offset) + "\n");
                fw.write("// Function: " + fn.getName() + "\n\n");
                fw.write(code);
            }
            println("[OK] " + name + " (" + code.split("\n").length + " lines)");
        }
    }
}
