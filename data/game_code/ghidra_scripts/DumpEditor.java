// Editor / Save 함수 dump — 레벨 생성 시 게임이 어떻게 저장하는지

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.List;

public class DumpEditor extends GhidraScript {
    static final Object[][] TARGETS = {
        // ★★★ Save string (.gmd encoding spec)
        {"GameObject_getSaveString",                0x19ecd0L, 600},
        {"EffectGameObject_getSaveString",          0x4abc20L, 600},
        {"LevelEditorLayer_getLevelString",         0x2d6c50L, 600},

        // ★★★ Object 생성 / 로드
        {"LevelEditorLayer_createObject",           0x2d46a0L, 600},
        {"LevelEditorLayer_createObjectsFromString", 0x2d4020L, 600},
        {"LevelEditorLayer_createObjectsFromSetup", 0x2d3800L, 600},
        {"EditorUI_createObject",                   0x10ff20L, 600},

        // ★★ Group / Color channel 관리
        {"LevelEditorLayer_getNextFreeGroupID",     0x2da7a0L, 240},
        {"LevelEditorLayer_getNextColorChannel",    0x2db070L, 240},
        {"LevelEditorLayer_getNextFreeEditorLayer", 0x2dabf0L, 240},
        {"LevelEditorLayer_getNextFreeItemID",      0x2da980L, 240},
        {"LevelEditorLayer_addToGroup",             0x2dea00L, 240},
        {"LevelEditorLayer_removeFromGroup",        0x2deb60L, 240},
        {"LevelEditorLayer_recreateGroups",         0x2ded10L, 360},
        {"LevelEditorLayer_resetUnusedColorChannels", 0x2db440L, 360},
        {"LevelEditorLayer_transferDefaultColors",  0x2dbde0L, 360},
        {"LevelEditorLayer_getTriggerGroup",        0x2decb0L, 240},

        // ★ Object placement / removal
        {"LevelEditorLayer_removeObject",           0x2d6180L, 360},
        {"LevelEditorLayer_objectAtPosition",       0x2d5050L, 240},
        {"LevelEditorLayer_objectsInRect",          0x2d5ca0L, 240},
        {"LevelEditorLayer_getObjectRect",          0x2d5800L, 240},
        {"LevelEditorLayer_addSpecial",             0x2d7bc0L, 240},
        {"LevelEditorLayer_removeSpecial",          0x2d8310L, 240},

        // ★ Update
        {"LevelEditorLayer_updateObjectLabel",      0x2d7660L, 240},
        {"LevelEditorLayer_updateGameObjects",      0x2dc110L, 360},
        {"LevelEditorLayer_updateColor",            0x2dda10L, 240},
        {"LevelEditorLayer_levelSettingsUpdated",   0x2d3720L, 240},
        {"LevelEditorLayer_create",                 0x2d1d40L, 240},
    };

    @Override
    public void run() throws Exception {
        File outDir = new File("D:/GhidraProjects/decomp");
        if (!outDir.exists()) outDir.mkdirs();

        long imageBase = currentProgram.getImageBase().getOffset();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        int success = 0;
        List<String> failed = new ArrayList<>();

        for (Object[] t : TARGETS) {
            String name = (String) t[0];
            long offset = (Long) t[1];
            int timeout = (Integer) t[2];

            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace()
                              .getAddress(imageBase + offset);
            Function fn = getFunctionAt(addr);
            if (fn == null) fn = getFunctionContaining(addr);
            if (fn == null) {
                println("[FAIL] " + name + " not found");
                failed.add(name);
                continue;
            }

            DecompileResults res = decomp.decompileFunction(fn, timeout, monitor);
            if (!res.decompileCompleted()) {
                println("[FAIL] " + name + ": " + res.getErrorMessage());
                failed.add(name);
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
            println("[OK] " + name + " -> " + out.getName() + " (lines=" + lines + ")");
            success++;
        }

        println("");
        println("Done: " + success + " / " + TARGETS.length);
        if (!failed.isEmpty()) {
            println("Failed:");
            for (String f : failed) println("  " + f);
        }
    }
}
