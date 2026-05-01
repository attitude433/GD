// vfunc 0x688 (triggerObject) 만 정확히 dump

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;

import java.io.File;
import java.io.FileWriter;

public class DumpVfunc688 extends GhidraScript {
    @Override
    public void run() throws Exception {
        long imageBase = currentProgram.getImageBase().getOffset();
        Memory mem = currentProgram.getMemory();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        // 33개 vtable hit 모두 (각 derived class), vfunc 0x688 슬롯 추출
        long triggerActivatedAddr = imageBase + 0x4a8790L;

        // .rdata 스캔으로 모든 hit 찾기
        java.util.List<Long> vtableHits = new java.util.ArrayList<>();
        long start = imageBase;
        long end = imageBase + 0x800000L;
        for (long off = start; off < end; off += 8) {
            try {
                Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(off);
                long val = mem.getLong(addr);
                if (val == triggerActivatedAddr) vtableHits.add(off);
            } catch (Exception e) {}
        }

        File outDir = new File("D:/GhidraProjects/decomp");
        File listOut = new File(outDir, "_triggerObject_per_vtable.txt");
        try (FileWriter fw = new FileWriter(listOut)) {
            fw.write("# 33개 EffectGameObject 파생 클래스 vtable의 vfunc 0x688 (triggerObject)\n");
            fw.write("# triggerActivated 슬롯 = base + 0x100, triggerObject = base + 0x688 (offset +0x588)\n\n");

            int decompCount = 0;
            java.util.Set<Long> uniqueTargets = new java.util.HashSet<>();
            for (int idx = 0; idx < vtableHits.size(); idx++) {
                long hit = vtableHits.get(idx);  // = vtableBase + 0x100
                long vfunc688Slot = hit + 0x588;  // vtableBase + 0x688
                try {
                    Address slotAddr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(vfunc688Slot);
                    long target = mem.getLong(slotAddr);
                    Address fnAddr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(target);
                    Function fn = getFunctionAt(fnAddr);
                    if (fn == null) fn = getFunctionContaining(fnAddr);
                    String name = (fn != null) ? fn.getName() : "?";
                    long offset = target - imageBase;
                    fw.write(String.format("vtable[%2d] @ 0x%x  ->  triggerObject @ 0x%x  (%s)\n",
                            idx, hit - 0x100, target, name));
                    uniqueTargets.add(target);
                } catch (Exception e) {
                    fw.write(String.format("vtable[%2d] @ 0x%x  ->  ERROR: %s\n", idx, hit - 0x100, e.getMessage()));
                }
            }

            fw.write("\n# Unique triggerObject 구현: " + uniqueTargets.size() + "\n");

            // 고유 함수만 디컴파일
            for (long target : uniqueTargets) {
                Address fnAddr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(target);
                Function fn = getFunctionAt(fnAddr);
                if (fn == null) fn = getFunctionContaining(fnAddr);
                if (fn == null) continue;

                DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
                if (!res.decompileCompleted()) continue;
                String code = res.getDecompiledFunction().getC();
                long offset = target - imageBase;
                File out = new File(outDir, String.format("triggerObject_VFUNC__0x%x.c", offset));
                try (FileWriter fw2 = new FileWriter(out)) {
                    fw2.write("// vfunc 0x688 = triggerObject(layer)\n");
                    fw2.write("// Function: " + fn.getName() + " @ 0x" + Long.toHexString(offset) + "\n\n");
                    fw2.write(code);
                }
                int lines = code.split("\n").length;
                println("[OK] triggerObject @ 0x" + Long.toHexString(offset) + " (" + fn.getName() + ", " + lines + " lines)");
                decompCount++;
            }
            fw.write("\n# Decompiled: " + decompCount + " functions\n");
        }
        println("List -> " + listOut.getName());
    }
}
