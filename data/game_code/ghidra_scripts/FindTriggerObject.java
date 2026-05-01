// EffectGameObject 의 vtable 에서 triggerObject (vfunc 0x688) 함수 주소 추출
// + 그 함수와 인근 함수들 디컴파일

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.program.model.mem.Memory;

import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.List;

public class FindTriggerObject extends GhidraScript {
    @Override
    public void run() throws Exception {
        long imageBase = currentProgram.getImageBase().getOffset();
        Memory mem = currentProgram.getMemory();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        // 우리가 아는 EffectGameObject 함수들 → 그 클래스의 vtable 찾기
        // triggerActivated 가 vfunc 인지 메서드인지 확인. 그 주변 함수도 vtable 안에 있을 것.
        // 일단 EffectGameObject vtable 후보를 찾기 위해
        // triggerActivated (0x4a8790) 의 주소를 vtable 에서 검색.

        long triggerActivatedAddr = imageBase + 0x4a8790L;
        println("Searching for vtable containing triggerActivated @ 0x" + Long.toHexString(triggerActivatedAddr));

        // .rdata 섹션 (보통 vtable 들어있음) 스캔
        List<Long> vtableHits = new ArrayList<>();
        long start = imageBase;
        long end = imageBase + 0x800000L;  // 8MB 만 스캔 (보통 충분)
        for (long off = start; off < end; off += 8) {
            try {
                long val = mem.getLong(currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(off));
                if (val == triggerActivatedAddr) {
                    vtableHits.add(off);
                }
            } catch (Exception e) {}
        }
        println("Found " + vtableHits.size() + " references to triggerActivated in memory");
        for (long hit : vtableHits) {
            println("  Reference at: 0x" + Long.toHexString(hit));
        }

        // 첫 hit 가 vtable 일 가능성 큼. vtable 에서 vfunc 0x688 슬롯 = hit + (0x688 - X) 에 있는 함수
        // — 그러나 triggerActivated 가 vtable 의 어느 슬롯인지 모르므로 hit 주변을 dump

        if (vtableHits.isEmpty()) {
            println("vtable 못 찾음. 직접 0x4a8000 ~ 0x4a9000 부근 vtable 후보 확인 필요");
            return;
        }

        // vtable 추출 — 첫 hit 부터 64개 슬롯 (= 함수 포인터 64개) dump
        long vtableBase = vtableHits.get(0);
        // vtable 시작은 hit 보다 앞에 있을 수 있음. -0x100 부터 +0x200 까지 스캔
        File outDir = new File("D:/GhidraProjects/decomp");
        File vtOut = new File(outDir, "_vtable_EffectGameObject.txt");
        try (FileWriter fw = new FileWriter(vtOut)) {
            fw.write("# EffectGameObject vtable 후보 (triggerActivated 주변 ±0x300)\n");
            fw.write("# triggerActivated = 0x" + Long.toHexString(triggerActivatedAddr) + " @ vtable offset 0x" + Long.toHexString(vtableHits.get(0) - vtableBase + 0x100) + "\n\n");

            for (long off = vtableBase - 0x300; off < vtableBase + 0x500; off += 8) {
                try {
                    Address slotAddr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(off);
                    long val = mem.getLong(slotAddr);
                    // 유효한 함수 주소 범위 내인지 (.text section 추정 0x140000000 ~ 0x141000000)
                    if (val >= imageBase && val < imageBase + 0x1000000) {
                        Address fnAddr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(val);
                        Function fn = getFunctionAt(fnAddr);
                        if (fn == null) fn = getFunctionContaining(fnAddr);
                        String name = (fn != null) ? fn.getName() : "?";
                        long slotOffset = off - vtableBase + 0x100;  // triggerActivated 가 0x100 슬롯이라 가정
                        String marker = (val == triggerActivatedAddr) ? " ★ triggerActivated" : "";
                        if (slotOffset == 0x688) marker += " ★★★ vfunc 0x688 = triggerObject!";
                        fw.write(String.format("vt+0x%-4x  -> 0x%x  %s%s\n", slotOffset, val, name, marker));
                    } else {
                        fw.write(String.format("vt+0x%-4x  -> 0x%x  (not a code addr)\n", off - vtableBase + 0x100, val));
                    }
                } catch (Exception e) {}
            }
        }
        println("vtable dump -> " + vtOut.getAbsolutePath());

        // vfunc 0x688 만 직접 찾기 — vtableBase 기준으로 (0x688 - 0x100) 만큼 더한 위치
        long offsetFromHit = 0x688 - 0x100;
        long vfunc688Slot = vtableBase + offsetFromHit;
        try {
            long target = mem.getLong(currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(vfunc688Slot));
            println("⭐ vfunc 0x688 (=triggerObject) candidate: 0x" + Long.toHexString(target));
            // 디컴파일
            Address fnAddr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(target);
            Function fn = getFunctionAt(fnAddr);
            if (fn == null) fn = getFunctionContaining(fnAddr);
            if (fn != null) {
                println("  Function: " + fn.getName() + " @ " + fn.getEntryPoint());
                DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
                if (res.decompileCompleted()) {
                    String code = res.getDecompiledFunction().getC();
                    File out = new File(outDir, "EffectGameObject_triggerObject_VFUNC__0x" + Long.toHexString(target - imageBase) + ".c");
                    try (FileWriter fw = new FileWriter(out)) {
                        fw.write("// vfunc 0x688 of EffectGameObject — triggerObject(layer)\n");
                        fw.write("// Resolved from vtable @ 0x" + Long.toHexString(vfunc688Slot) + "\n");
                        fw.write("// Function: " + fn.getName() + "\n\n");
                        fw.write(code);
                    }
                    println("  Decompiled -> " + out.getName() + " (" + code.split("\n").length + " lines)");
                }
            }
        } catch (Exception e) {
            println("vfunc 0x688 lookup failed: " + e.getMessage());
        }
    }
}
