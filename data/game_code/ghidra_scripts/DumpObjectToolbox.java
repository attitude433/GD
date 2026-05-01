// ID → 텍스처 매핑 dump — ObjectToolbox + GameObject::createWithKey

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.List;

public class DumpObjectToolbox extends GhidraScript {
    static final Object[][] TARGETS = {
        // ID → 텍스처 (애니메이션 프레임 이름) lookup
        {"ObjectToolbox_intKeyToFrame",   0x370b70L},
        // ObjectToolbox 싱글톤 (init/dictionary 접근)
        {"ObjectToolbox_sharedState",     0x348cb0L},
        // GameObject 팩토리 (subclass 분기 — 큰 switch 가능성)
        {"GameObject_createWithKey",      0x18b7d0L},
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        if (!outDir.exists()) outDir.mkdirs();

        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        int success = 0;
        List<String> failed = new ArrayList<>();

        for (Object[] t : TARGETS) {
            String name = (String) t[0];
            long offset = (Long) t[1];

            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) {
                Address addr2 = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
                fn = getFunctionAt(addr2);
                if (fn == null) fn = getFunctionContaining(addr2);
            }
            if (fn == null) fn = getFunctionContaining(addr);

            if (fn == null) {
                println("[FAIL] " + name + " not found");
                failed.add(name);
                continue;
            }

            // intKeyToFrame은 거대할 수 있음 → 600초 timeout
            int timeout = name.contains("intKeyToFrame") || name.contains("createWithKey") ? 600 : 240;
            DecompileResults res = decomp.decompileFunction(fn, timeout, monitor);
            if (!res.decompileCompleted()) {
                println("[FAIL] " + name + " decompile error: " + res.getErrorMessage());
                failed.add(name);
                continue;
            }

            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, name + "__0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// Function: " + fn.getName() + "\n");
                fw.write("// Original target: " + name + " @ 0x" + Long.toHexString(offset) + "\n");
                fw.write("// Ghidra entry: " + fn.getEntryPoint() + "\n");
                fw.write("// Signature: " + fn.getSignature() + "\n");
                fw.write("// Body size: " + fn.getBody().getNumAddresses() + " bytes\n\n");
                fw.write(code);
            }
            int lines = code.split("\n").length;
            println("[OK] " + name + " -> " + out.getName() + " (lines=" + lines + ", body=" + fn.getBody().getNumAddresses() + ")");
            success++;
        }

        println("");
        println("Done: " + success + " / " + TARGETS.length);
        if (!failed.isEmpty()) {
            println("Failed:");
            for (String f : failed) println("  " + f);
        }
    }
}
