// Function: FUN_14039bed0
// Original target: PlayerObject_landCeiling_39bed0 @ 0x39bed0
// Ghidra entry: 14039bed0
// Signature: undefined FUN_14039bed0(void)


void FUN_14039bed0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar2 = *(undefined1 *)(param_1 + 0x9c1);
  uVar3 = *(undefined1 *)(param_1 + 0xa0c);
  uVar1 = *(undefined8 *)(param_1 + 0xa10);
  FUN_14039bf30(param_1,0);
  *(undefined8 *)(param_1 + 0xa10) = uVar1;
  *(undefined1 *)(param_1 + 0xa0c) = uVar3;
  *(undefined1 *)(param_1 + 0x9c1) = uVar2;
  return;
}

