// 실제 collision check / trigger fire 함수들

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpCollisionCheck extends GhidraScript {
    static final Object[][] TARGETS = {
        // ⭐ collision trigger 진짜 fire 함수들
        {"GJBaseGameLayer_updateCollisionBlocks",   0x2187d0L},
        {"GJBaseGameLayer_checkCollisionBlocks",    0x218ec0L},
        {"GJBaseGameLayer_collisionCheckObjects",   0x214960L},
        {"GJBaseGameLayer_postCollisionCheck",      0x25c2e0L},
        {"GJBaseGameLayer_createPlayerCollisionBlock", 0x218370L},
        {"PlayerObject_updateCollide",              0x393ff0L},
        // 1302줄 0x4bc180 도 한번도 안 봤음 → 이미 dump 됨
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        int ok = 0;
        for (Object[] t : TARGETS) {
            String name = (String) t[0];
            long offset = (Long) t[1];
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(imageBase + offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) fn = getFunctionContaining(addr);
            if (fn == null) {
                println("[FAIL] " + name);
                continue;
            }
            DecompileResults res = decomp.decompileFunction(fn, 240, monitor);
            if (!res.decompileCompleted()) {
                println("[FAIL] " + name + " (decomp)");
                continue;
            }
            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, name + "__0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// " + name + " @ 0x" + Long.toHexString(offset) + "\n\n");
                fw.write(code);
            }
            int lines = code.split("\n").length;
            println("[OK] " + name + " (" + lines + " lines)");
            ok++;
        }
        println("Done: " + ok + " / " + TARGETS.length);
    }
}
