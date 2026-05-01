// Snap, BPM, position 관련 + Level header 읽는 함수

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;

public class DumpEditorRules extends GhidraScript {
    static final Object[][] TARGETS = {
        // Snap to grid
        {"EditorUI_findSnapObject_123340",  0x123340L, 240},
        {"EditorUI_findSnapObject_123240",  0x123240L, 240},
        {"EditorUI_isSpecialSnapObject",    0x129060L, 240},
        {"GameManager_gridNodeSizeForKey",  0x370ba0L, 240},
        {"EditorUI_toggleEditorGrid",       0xdd410L,  240},
        {"EditorUI_updateGridNodeSize",     0xe2c00L,  240},

        // BPM trigger
        {"BPMTrigger_onBPM",                0x494500L, 240},

        // Level setting save/load (header keys kS, kA)
        {"GJEffectManager_getString",       0x2eaf70L, 600},  // 추정 - getLevelString 에서 호출
        {"LevelEditorLayer_updateColor",    0x2dda10L, 240},  // 이미 dump 되어 있을 수 있음
        {"LevelEditorLayer_levelSettingsUpdated", 0x2d3720L, 240},

        // Color channel 관리
        {"LevelEditorLayer_updateGameObjects", 0x2dc110L, 360},
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        for (Object[] t : TARGETS) {
            String name = (String) t[0];
            long offset = (Long) t[1];
            int timeout = (Integer) t[2];
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace()
                              .getAddress(imageBase + offset);
            Function fn = getFunctionContaining(addr);
            if (fn == null) {
                println("[FAIL] " + name + " not found");
                continue;
            }
            DecompileResults res = decomp.decompileFunction(fn, timeout, monitor);
            if (!res.decompileCompleted()) {
                println("[FAIL] " + name + ": " + res.getErrorMessage());
                continue;
            }
            String code = res.getDecompiledFunction().getC();
            File out = new File(outDir, name + "__0x" + Long.toHexString(offset) + ".c");
            try (FileWriter fw = new FileWriter(out)) {
                fw.write("// " + name + " @ 0x" + Long.toHexString(offset) + "\n");
                fw.write("// Body: " + fn.getBody().getNumAddresses() + " bytes\n\n");
                fw.write(code);
            }
            int lines = code.split("\n").length;
            println("[OK] " + name + " -> lines=" + lines);
        }
    }
}
