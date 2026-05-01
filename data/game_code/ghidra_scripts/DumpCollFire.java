// updatePlayerCollisionBlocks 가 호출하는 FUN_140226d60 — 진짜 collision-trigger fire?
// + spawnGroup caller 들 (Spawn 트리거 처리 추적)

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;

import java.io.File;
import java.io.FileWriter;

public class DumpCollFire extends GhidraScript {
    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        // 1. FUN_140226d60 dump
        long off = 0x226d60L;
        Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + off);
        Function fn = getFunctionAt(addr);
        if (fn == null) fn = getFunctionContaining(addr);
        if (fn != null) {
            DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
            if (res.decompileCompleted()) {
                String code = res.getDecompiledFunction().getC();
                File out = new File(outDir, "FUN_140226d60__0x226d60.c");
                try (FileWriter fw = new FileWriter(out)) {
                    fw.write("// Called from updatePlayerCollisionBlocks per player block\n");
                    fw.write("// Function: " + fn.getName() + "\n\n");
                    fw.write(code);
                }
                int lines = code.split("\n").length;
                println("[OK] 0x226d60 (" + lines + " lines)");
            }
        }

        // 2. spawnGroup (0x21ab80) callers 찾기 — Spawn 트리거 처리가 어디서 호출하는지
        Address spawnAddr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + 0x21ab80L);
        Reference[] refs = getReferencesTo(spawnAddr);
        println("\nspawnGroup (0x21ab80) referenced from " + refs.length + " locations:");
        java.util.Set<Long> uniqueCallers = new java.util.HashSet<>();
        for (Reference r : refs) {
            Address from = r.getFromAddress();
            Function caller = getFunctionContaining(from);
            if (caller != null) {
                long callerOff = caller.getEntryPoint().getOffset() - imageBase;
                uniqueCallers.add(callerOff);
            }
        }
        File spawnList = new File(outDir, "_spawnGroup_callers.txt");
        try (FileWriter fw = new FileWriter(spawnList)) {
            fw.write("# spawnGroup (0x21ab80) callers - " + uniqueCallers.size() + " unique\n\n");
            for (Long callerOff : uniqueCallers) {
                Function c = getFunctionContaining(currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + callerOff));
                String cname = c != null ? c.getName() : "?";
                fw.write(String.format("0x%x  %s\n", callerOff, cname));
                println("  caller: 0x" + Long.toHexString(callerOff) + "  " + cname);
            }
        }

        // 3. spawnGroup callers dump (top 5)
        int dumped = 0;
        for (Long callerOff : uniqueCallers) {
            if (dumped >= 8) break;
            Address ca = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + callerOff);
            Function cfn = getFunctionAt(ca);
            if (cfn == null) cfn = getFunctionContaining(ca);
            if (cfn == null) continue;
            DecompileResults res = decomp.decompileFunction(cfn, 240, monitor);
            if (!res.decompileCompleted()) continue;
            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, "spawnGroupCaller_0x" + Long.toHexString(callerOff) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// Calls spawnGroup (0x21ab80)\n");
                fw.write("// Function: " + cfn.getName() + " @ 0x" + Long.toHexString(callerOff) + "\n\n");
                fw.write(code);
            }
            int lines = code.split("\n").length;
            println("  [OK] caller 0x" + Long.toHexString(callerOff) + " " + cfn.getName() + " (" + lines + " lines)");
            dumped++;
        }
    }
}
