// V2: 매 CALL 명령마다 직전 N개 명령에서 ECX(int key) 와 RDX/R8(string ptr) 추출.
// x64 calling convention: arg1=RCX/ECX, arg2=RDX, arg3=R8.
// std::map<int,string>::operator[] 호출 시 RCX=this(map), EDX=key, R8=value_str

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.lang.Register;

import java.io.File;
import java.io.FileWriter;
import java.util.*;

public class DumpObjectToolboxDictV2 extends GhidraScript {

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
        long offset = 0x348d70L;
        Address fnAddr = currentProgram.getAddressFactory().getDefaultAddressSpace()
                              .getAddress(imageBase + offset);
        Function fn = getFunctionAt(fnAddr);
        if (fn == null) fn = getFunctionContaining(fnAddr);
        AddressSetView body = fn.getBody();
        println("init body: " + body.getNumAddresses() + " bytes");

        // 함수 전체 명령어 리스트 (순서대로)
        List<Instruction> insns = new ArrayList<>();
        Instruction inst = getInstructionAt(fn.getEntryPoint());
        while (inst != null && body.contains(inst.getAddress())) {
            insns.add(inst);
            inst = inst.getNext();
        }
        println("Instructions: " + insns.size());

        // 매 CALL 마다 직전 50개 명령에서 ECX/EDX/RDX/R8 의 마지막 값 찾기
        List<int[]> pairs = new ArrayList<>(); // [key, stringRefIdx]
        List<String> stringTable = new ArrayList<>();

        Set<String> intRegs = new HashSet<>(Arrays.asList(
            "ECX","EDX","R8D","R9D","RCX","RDX","R8","R9","EAX","RAX"));

        int callsProcessed = 0;
        int pairsFound = 0;

        for (int i = 0; i < insns.size(); i++) {
            Instruction ins = insns.get(i);
            String mnem = ins.getMnemonicString();
            if (!mnem.equals("CALL")) continue;
            callsProcessed++;

            // 50 명령어 뒤로 스캔
            Integer key = null;
            String strVal = null;
            int from = Math.max(0, i - 50);
            // 가장 가까운 (=index 큰) 매칭 우선이 되도록 i-1 → from 순으로 스캔
            for (int j = i - 1; j >= from; j--) {
                Instruction p = insns.get(j);
                String pm = p.getMnemonicString();
                int nOps = p.getNumOperands();

                // key: MOV r32/r64, imm  where dst is an int-arg register
                if (key == null && (pm.equals("MOV") || pm.equals("LEA")) && nOps >= 2) {
                    Object[] op0 = p.getOpObjects(0);
                    Object[] op1 = p.getOpObjects(1);
                    if (op0.length >= 1 && op0[0] instanceof Register) {
                        Register r = (Register) op0[0];
                        String rn = r.getName();
                        if (intRegs.contains(rn) || rn.equals("EDX") || rn.equals("ECX") || rn.equals("R8D")) {
                            for (Object o : op1) {
                                if (o instanceof Scalar) {
                                    long v = ((Scalar)o).getUnsignedValue();
                                    if (v >= 1 && v <= 5000) {
                                        key = (int) v;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }

                // string: LEA reg, [datA] where data is ASCII
                if (strVal == null) {
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
                }
                if (key != null && strVal != null) break;
            }

            if (key != null && strVal != null) {
                stringTable.add(strVal);
                pairs.add(new int[]{key, stringTable.size()-1});
                pairsFound++;
            }
        }

        println("CALLs scanned: " + callsProcessed);
        println("Pairs found: " + pairsFound);

        // 출력
        File out = new File("D:/GhidraProjects/decomp/ObjectToolbox_init_pairs_v2.txt");
        try (FileWriter fw = new FileWriter(out)) {
            fw.write("// (key, texture) pairs — V2 (call-site backward scan)\n");
            for (int[] p : pairs) {
                fw.write(p[0] + "\t" + stringTable.get(p[1]) + "\n");
            }
        }
        println("Wrote " + out.getAbsolutePath());
    }
}
