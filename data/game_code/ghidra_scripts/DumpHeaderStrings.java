// GJEffectManager::getString 안의 string DATs 추출 → kS/kA 키 매핑

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;

import java.io.File;
import java.io.FileWriter;
import java.util.LinkedHashSet;
import java.util.Set;

public class DumpHeaderStrings extends GhidraScript {

    String readAsciiAt(Address addr) {
        try {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < 100; i++) {
                byte b = currentProgram.getMemory().getByte(addr.add(i));
                if (b == 0) return sb.length() > 0 ? sb.toString() : null;
                if (b < 0x20 || b > 0x7e) return null;
                sb.append((char) b);
            }
            return null;
        } catch (Exception e) { return null; }
    }

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        long fnOff = 0x2eaf70L;
        Address fnAddr = currentProgram.getAddressFactory().getDefaultAddressSpace()
                              .getAddress(imageBase + fnOff);
        Function fn = getFunctionContaining(fnAddr);
        AddressSetView body = fn.getBody();

        Set<String> stringsSet = new LinkedHashSet<>();
        Instruction inst = getInstructionAt(fn.getEntryPoint());
        while (inst != null && body.contains(inst.getAddress())) {
            for (Reference r : inst.getReferencesFrom()) {
                if (r.getReferenceType().isData()) {
                    String s = readAsciiAt(r.getToAddress());
                    if (s != null && s.length() > 0 && s.length() < 50) {
                        stringsSet.add(s + "  @ " + r.getToAddress());
                    }
                }
            }
            inst = inst.getNext();
        }

        StringBuilder out = new StringBuilder();
        out.append("# Level header strings (kS/kA keys + others)\n");
        out.append("# Source: GJEffectManager::getString @ 0x2eaf70\n\n");
        for (String s : stringsSet) {
            out.append(s).append("\n");
        }
        File f = new File(outDir, "_level_header_strings.txt");
        try (FileWriter fw = new FileWriter(f)) { fw.write(out.toString()); }
        println("Wrote " + f.getAbsolutePath() + " (" + stringsSet.size() + " strings)");

        // Also print sample
        int n = 0;
        for (String s : stringsSet) {
            if (n++ < 50) println("  " + s);
        }
    }
}
