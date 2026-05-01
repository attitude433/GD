// Function: FUN_140248880
// Original target: GJBaseGameLayer_updateRotTriggers_248880 @ 0x248880
// Ghidra entry: 140248880
// Signature: undefined FUN_140248880(void)


void FUN_140248880(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x3700) != '\0') {
    if (DAT_1406c2e88 == (longlong *)0x0) {
      uVar4 = FUN_1404d0770(0x888);
      DAT_1406c2e88 = (longlong *)FUN_140053100(uVar4);
      (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
    }
    plVar1 = DAT_1406c2e88;
    if (DAT_1406c2e88 == (longlong *)0x0) {
      uVar4 = FUN_1404d0770(0x888);
      DAT_1406c2e88 = (longlong *)FUN_140053100(uVar4);
      (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
    }
    plVar2 = DAT_1406c2e88;
    if (DAT_1406c2e88 == (longlong *)0x0) {
      uVar4 = FUN_1404d0770(0x888);
      DAT_1406c2e88 = (longlong *)FUN_140053100(uVar4);
      (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
    }
    plVar3 = DAT_1406c2e88;
    if (DAT_1406c2e88 == (longlong *)0x0) {
      uVar4 = FUN_1404d0770(0x888);
      DAT_1406c2e88 = (longlong *)FUN_140053100(uVar4);
      (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
    }
    FUN_14029ecf0(*(undefined8 *)(param_1 + 0x36f0),*(undefined4 *)((longlong)DAT_1406c2e88 + 0x874)
                  ,(int)plVar3[0x10e],
                  *(float *)((longlong)plVar1 + 0x274) - *(float *)((longlong)plVar2 + 0x86c));
    if (DAT_1406c2e88 == (longlong *)0x0) {
      uVar4 = FUN_1404d0770(0x888);
      DAT_1406c2e88 = (longlong *)FUN_140053100(uVar4);
      (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
    }
    plVar1 = DAT_1406c2e88;
    if (DAT_1406c2e88 == (longlong *)0x0) {
      uVar4 = FUN_1404d0770(0x888);
      DAT_1406c2e88 = (longlong *)FUN_140053100(uVar4);
      (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
    }
    plVar2 = DAT_1406c2e88;
    if (DAT_1406c2e88 == (longlong *)0x0) {
      uVar4 = FUN_1404d0770(0x888);
      DAT_1406c2e88 = (longlong *)FUN_140053100(uVar4);
      (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
    }
    plVar3 = DAT_1406c2e88;
    if (DAT_1406c2e88 == (longlong *)0x0) {
      uVar4 = FUN_1404d0770(0x888);
      DAT_1406c2e88 = (longlong *)FUN_140053100(uVar4);
      (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
    }
    FUN_14029ecf0(*(undefined8 *)(param_1 + 0x36f8),(int)DAT_1406c2e88[0x110],
                  *(undefined4 *)((longlong)plVar3 + 0x87c),
                  *(float *)((longlong)plVar1 + 0x274) - *(float *)(plVar2 + 0x10f));
  }
  return;
}

