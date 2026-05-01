// ObjectToolbox::init() — 디스어셈블리 직접 파싱.
// 패턴: 함수 본문에서 'MOV reg, immediate_int' (key) + 'LEA reg, [string_address]' (texture) 를 모두 추출.
// 디컴파일 timeout 회피 — listing 만 walk.

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Data;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.lang.Register;

import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.List;

public class DumpObjectToolboxDictAsm extends GhidraScript {

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        long offset = 0x348d70L;
        Address fnAddr = currentProgram.getAddressFactory().getDefaultAddressSpace()
                              .getAddress(imageBase + offset);
        Function fn = getFunctionAt(fnAddr);
        if (fn == null) fn = getFunctionContaining(fnAddr);
        if (fn == null) {
            println("[FAIL] init function not found");
            return;
        }
        AddressSetView body = fn.getBody();
        long bodyBytes = body.getNumAddresses();
        println("init function body: " + bodyBytes + " bytes");

        // 두 패스로 처리:
        //   1) 함수 안의 모든 int immediate (1..5000 범위) 수집 — key 후보
        //   2) 함수 안의 모든 데이터 reference 가 가리키는 ASCII 문자열 수집 — texture 후보
        //   3) 명령 순서대로 stream 하면서 (key 등장, 직후 첫 string ref) pair 매칭

        StringBuilder log = new StringBuilder();
        log.append("// ObjectToolbox::init disassembly trace\n");
        log.append("// fn @ 0x").append(Long.toHexString(offset))
           .append(", body=").append(bodyBytes).append(" bytes\n\n");

        Instruction inst = getInstructionAt(fn.getEntryPoint());
        int insnCount = 0;
        int totalKeyHits = 0;
        int totalStringHits = 0;

        // pair 추출용
        List<int[]> keyTrace = new ArrayList<>();          // [insnIdx, intValue]
        List<Object[]> stringTrace = new ArrayList<>();    // [insnIdx, stringValue, addr]

        while (inst != null && body.contains(inst.getAddress())) {
            insnCount++;
            String mnem = inst.getMnemonicString();

            // ── int immediate 추출 ──
            // MOV reg, imm  /  PUSH imm  /  CMP reg, imm  등
            for (int i = 0; i < inst.getNumOperands(); i++) {
                Object[] objs = inst.getOpObjects(i);
                for (Object o : objs) {
                    if (o instanceof Scalar) {
                        Scalar s = (Scalar) o;
                        long v = s.getUnsignedValue();
                        if (v >= 1 && v <= 5000) {
                            // key 후보
                            keyTrace.add(new int[]{insnCount, (int) v});
                            totalKeyHits++;
                        }
                    }
                }
            }

            // ── string reference 추출 ──
            Reference[] refs = inst.getReferencesFrom();
            for (Reference r : refs) {
                if (r.getReferenceType().isData()) {
                    Address tgt = r.getToAddress();
                    String s = readAsciiAt(tgt);
                    if (s != null && s.length() > 0 && s.length() < 200
                        && (s.endsWith(".png") || s.contains("_") || s.contains("."))) {
                        stringTrace.add(new Object[]{insnCount, s, tgt});
                        totalStringHits++;
                    }
                }
            }

            inst = inst.getNext();
            if (insnCount > 200000) break; // 안전장치
        }

        println("Walked " + insnCount + " instructions. key hits=" + totalKeyHits
                + ", string hits=" + totalStringHits);

        // ── 페어링: 각 string 에 대해 직전(가장 가까운) key 매칭 ──
        // init 패턴: 보통 'mov key' → 'lea string' → 'call map_set'
        // 따라서 string insnIdx 기준으로 같은 idx 또는 직전 idx 의 key 를 짝지음.
        log.append("// === ID → texture pairs ===\n");
        log.append("// format: <id>\t<texture>\n\n");

        int keyCursor = 0;
        int paired = 0;
        for (Object[] str : stringTrace) {
            int sIdx = (int) str[0];
            String sVal = (String) str[1];
            // 가장 가까운 직전 key (sIdx 보다 작거나 같은 idx)
            int chosenKey = -1;
            int bestDelta = Integer.MAX_VALUE;
            for (int[] k : keyTrace) {
                int kIdx = k[0];
                int delta = sIdx - kIdx;
                if (delta >= 0 && delta < bestDelta && delta < 30) {
                    bestDelta = delta;
                    chosenKey = k[1];
                }
            }
            if (chosenKey > 0) {
                log.append(chosenKey).append("\t").append(sVal).append("\n");
                paired++;
            }
        }
        println("Paired entries: " + paired);

        File out = new File(outDir, "ObjectToolbox_init_pairs.txt");
        try (FileWriter fw = new FileWriter(out)) {
            fw.write(log.toString());
        }
        println("Wrote " + out.getAbsolutePath());

        // 추가: 함수 안에서 reference 된 모든 ASCII 문자열 dump
        File outAll = new File(outDir, "ObjectToolbox_init_strings.txt");
        try (FileWriter fw = new FileWriter(outAll)) {
            fw.write("// All ASCII strings referenced from ObjectToolbox::init\n");
            for (Object[] str : stringTrace) {
                fw.write(str[2] + "\t" + str[1] + "\n");
            }
        }
        println("Wrote " + outAll.getAbsolutePath() + " (" + stringTrace.size() + " strings)");

        // 추가: 모든 key 후보 dump
        File outKeys = new File(outDir, "ObjectToolbox_init_keys.txt");
        try (FileWriter fw = new FileWriter(outKeys)) {
            fw.write("// All int immediates 1..5000 in ObjectToolbox::init\n");
            for (int[] k : keyTrace) {
                fw.write(k[0] + "\t" + k[1] + "\n");
            }
        }
        println("Wrote " + outKeys.getAbsolutePath() + " (" + keyTrace.size() + " keys)");
    }

    String readAsciiAt(Address addr) {
        try {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < 200; i++) {
                byte b = currentProgram.getMemory().getByte(addr.add(i));
                if (b == 0) {
                    return sb.length() > 0 ? sb.toString() : null;
                }
                if (b < 0x20 || b > 0x7e) return null;
                sb.append((char) b);
            }
            return null;
        } catch (Exception e) {
            return null;
        }
    }
}
