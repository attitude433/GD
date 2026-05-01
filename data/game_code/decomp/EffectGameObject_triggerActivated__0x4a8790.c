// Function: FUN_1404a8790
// Original target: EffectGameObject_triggerActivated @ 0x4a8790
// Ghidra entry: 1404a8790
// Signature: undefined FUN_1404a8790(void)


void FUN_1404a8790(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x688) = param_2;
  if (*(char *)(param_1 + 0x690) == '\0') {
    *(undefined2 *)(param_1 + 0x5b4) = 0x101;
  }
  return;
}

