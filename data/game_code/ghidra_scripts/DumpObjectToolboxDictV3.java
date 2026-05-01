// V3: SymbolicPropogator 로 init 함수 안의 모든 CALL 시점에서
// EDX/RDX/R8 의 상수 값을 추출.

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.*;
import ghidra.program.util.SymbolicPropogator;
import ghidra.program.util.ContextEvaluatorAdapter;
import ghidra.program.util.VarnodeContext;

import java.io.File;
import java.io.FileWriter;
import java.util.*;

public class DumpObjectToolboxDictV3 extends GhidraScript {

    String readAsciiAt(Address addr) {
        try {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < 200; i++) {
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
        long imageBase = currentProgram.getImageBase().getOffset();
        Address fnAddr = currentProgram.getAddressFactory().getDefaultAddressSpace()
                              .getAddress(imageBase + 0x348d70L);
        Function fn = getFunctionContaining(fnAddr);
        println("init body: " + fn.getBody().getNumAddresses() + " bytes");

        SymbolicPropogator prop = new SymbolicPropogator(currentProgram, false);
        prop.setParamRefCheck(false);
        prop.setReturnRefCheck(false);
        prop.setStoredRefCheck(false);

        prop.flowConstants(fn.getEntryPoint(), fn.getBody(), new ContextEvaluatorAdapter(), true, monitor);

        Register edx = currentProgram.getLanguage().getRegister("EDX");
        Register r8  = currentProgram.getLanguage().getRegister("R8");
        Register rdx = currentProgram.getLanguage().getRegister("RDX");

        Listing listing = currentProgram.getListing();
        InstructionIterator it = listing.getInstructions(fn.getBody(), true);

        List<int[]> pairs = new ArrayList<>();
        List<String> stringTable = new ArrayList<>();

        int callsSeen = 0, paired = 0;
        while (it.hasNext()) {
            Instruction ins = it.next();
            if (!ins.getMnemonicString().equals("CALL")) continue;
            callsSeen++;

            SymbolicPropogator.Value edxVal = prop.getRegisterValue(ins.getAddress(), edx);
            Long key = (edxVal != null && !edxVal.isRegisterRelativeValue()) ? edxVal.getValue() : null;

            String strVal = null;
            for (Register r : new Register[]{r8, rdx}) {
                SymbolicPropogator.Value v = prop.getRegisterValue(ins.getAddress(), r);
                if (v != null && !v.isRegisterRelativeValue()) {
                    long addrVal = v.getValue();
                    try {
                        Address strAddr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(addrVal);
                        String s = readAsciiAt(strAddr);
                        if (s != null && (s.endsWith(".png") || s.contains("_001"))) {
                            strVal = s;
                            break;
                        }
                    } catch (Exception e) {}
                }
            }

            if (key != null && key >= 1 && key <= 5000 && strVal != null) {
                stringTable.add(strVal);
                pairs.add(new int[]{key.intValue(), stringTable.size()-1});
                paired++;
            }
        }

        println("CALLs: " + callsSeen + ", paired: " + paired);

        File out = new File("D:/GhidraProjects/decomp/ObjectToolbox_init_pairs_v3.txt");
        try (FileWriter fw = new FileWriter(out)) {
            fw.write("// (key, texture) — V3 (SymbolicPropogator)\n");
            for (int[] p : pairs) {
                fw.write(p[0] + "\t" + stringTable.get(p[1]) + "\n");
            }
        }
        println("Wrote " + out.getAbsolutePath());
    }
}
