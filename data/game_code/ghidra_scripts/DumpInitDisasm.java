// init 함수 raw 디스어셈블리 dump — 분석용

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;

import java.io.File;
import java.io.FileWriter;

public class DumpInitDisasm extends GhidraScript {
    @Override
    public void run() throws Exception {
        long imageBase = currentProgram.getImageBase().getOffset();
        Address fnAddr = currentProgram.getAddressFactory().getDefaultAddressSpace()
                              .getAddress(imageBase + 0x348d70L);
        Function fn = getFunctionContaining(fnAddr);
        Listing listing = currentProgram.getListing();
        InstructionIterator it = listing.getInstructions(fn.getBody(), true);

        // 첫 1000줄만 dump
        File out = new File("D:/GhidraProjects/decomp/ObjectToolbox_init_disasm.txt");
        FileWriter fw = new FileWriter(out);
        int count = 0;
        while (it.hasNext() && count < 1500) {
            Instruction ins = it.next();
            fw.write(ins.getAddress() + ": " + ins.toString() + "\n");
            count++;
        }
        fw.close();
        println("Wrote " + count + " instructions to " + out);
    }
}
