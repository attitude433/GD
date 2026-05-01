// Function: FUN_1404a87b0
// Original target: EffectGameObject_firstSetup @ 0x4a87b0
// Ghidra entry: 1404a87b0
// Signature: undefined FUN_1404a87b0(void)


void FUN_1404a87b0(longlong param_1)

{
  if (*(int *)(param_1 + 0x40c) == 0x80f) {
    *(undefined1 *)(param_1 + 0x5d0) = 1;
  }
  else if (*(int *)(param_1 + 0x40c) == 0xe19) {
    *(undefined1 *)(param_1 + 0x716) = 1;
    return;
  }
  return;
}

