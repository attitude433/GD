// V4: 정확한 패턴 매칭
//   MOV dword ptr [stack/rbp+off], <KEY>     ; key immediate
//   ...
//   CALL 0x1401d0660                          ; map::operator[]
//   MOV RCX, RAX
//   LEA RDX, [string_addr]                    ; texture string
//   CALL 0x14003ccc0                          ; string::assign
//
// 알고리즘: MOV imm 발견 → 이후 LEA RDX, [data] (with ASCII png string) 의 string 매칭

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;

import java.io.File;
import java.io.FileWriter;
import java.util.*;

public class DumpObjectToolboxDictV4 extends GhidraScript {

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

        Listing listing = currentProgram.getListing();
        InstructionIterator it = listing.getInstructions(fn.getBody(), true);

        // 함수 전체 명령어 리스트 (순서대로)
        List<Instruction> insns = new ArrayList<>();
        while (it.hasNext()) insns.add(it.next());
        println("Instructions: " + insns.size());

        List<int[]> pairs = new ArrayList<>();
        List<String> stringTable = new ArrayList<>();

        // MOV dword ptr [stack offset], imm32 패턴 찾기
        for (int i = 0; i < insns.size(); i++) {
            Instruction ins = insns.get(i);
            if (!ins.getMnemonicString().equals("MOV")) continue;
            if (ins.getNumOperands() < 2) continue;

            // op0 = memory address (stack offset)
            // op1 = scalar (immediate)
            Object[] op0 = ins.getOpObjects(0);
            Object[] op1 = ins.getOpObjects(1);

            // op0 should reference a register-relative address (stack)
            boolean isStackTarget = false;
            for (Object o : op0) {
                if (o instanceof Register) {
                    String rn = ((Register) o).getName();
                    if (rn.equals("RSP") || rn.equals("RBP")) {
                        isStackTarget = true;
                        break;
                    }
                }
            }
            if (!isStackTarget) continue;

            // immediate
            Long key = null;
            for (Object o : op1) {
                if (o instanceof Scalar) {
                    long v = ((Scalar) o).getUnsignedValue();
                    if (v >= 1 && v <= 5000) {
                        key = v;
                        break;
                    }
                }
            }
            if (key == null) continue;

            // 이 MOV 이후 30 명령어 안에서 첫 LEA reg, [data_addr] 찾기 (ASCII png string)
            String strVal = null;
            int lookahead = Math.min(insns.size(), i + 30);
            for (int j = i + 1; j < lookahead; j++) {
                Instruction p = insns.get(j);
                String pm = p.getMnemonicString();
                // 다음 MOV dword ptr [stack], imm 만나면 stop
                if (pm.equals("MOV") && p.getNumOperands() >= 2) {
                    Object[] po0 = p.getOpObjects(0);
                    Object[] po1 = p.getOpObjects(1);
                    boolean nextIsStack = false;
                    for (Object o : po0) {
                        if (o instanceof Register) {
                            String rn = ((Register) o).getName();
                            if (rn.equals("RSP") || rn.equals("RBP")) {
                                nextIsStack = true;
                                break;
                            }
                        }
                    }
                    boolean nextHasImm = false;
                    for (Object o : po1) {
                        if (o instanceof Scalar) {
                            long v = ((Scalar) o).getUnsignedValue();
                            if (v >= 1 && v <= 5000) { nextHasImm = true; break; }
                        }
                    }
                    if (nextIsStack && nextHasImm) break; // 다음 entry 시작
                }
                if (pm.equals("LEA")) {
                    // LEA RDX, [string_addr]
                    Reference[] refs = p.getReferencesFrom();
                    for (Reference r : refs) {
                        if (r.getReferenceType().isData()) {
                            String s = readAsciiAt(r.getToAddress());
                            if (s != null && s.length() > 0 && s.length() < 200) {
                                strVal = s;
                                break;
                            }
                        }
                    }
                    if (strVal != null) break;
                }
            }

            if (strVal != null) {
                stringTable.add(strVal);
                pairs.add(new int[]{key.intValue(), stringTable.size()-1});
            }
        }

        println("Pairs found: " + pairs.size());

        File out = new File("D:/GhidraProjects/decomp/ObjectToolbox_init_pairs_v4.txt");
        try (FileWriter fw = new FileWriter(out)) {
            fw.write("// (id, texture) pairs from ObjectToolbox::init — V4 (precise pattern match)\n");
            for (int[] p : pairs) {
                fw.write(p[0] + "\t" + stringTable.get(p[1]) + "\n");
            }
        }
        println("Wrote " + out.getAbsolutePath());
    }
}
