// Function: FUN_140393c30
// Original target: PlayerObject_postCollideY_393c30 @ 0x393c30
// Ghidra entry: 140393c30
// Signature: undefined FUN_140393c30(void)


void FUN_140393c30(longlong param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0xb80)) {
    FUN_14039a1d0(param_1,*(char *)(param_1 + 0x9bf) == '\0',1);
    iVar1 = 2;
    if (*(char *)(param_1 + 0x9bf) == '\0') {
      iVar1 = -2;
    }
    FUN_140388d10(param_1,(double)iVar1);
    *(undefined1 *)(param_1 + 0xa1c) = 1;
    *(undefined1 *)(param_1 + 0xa0c) = 0;
    if (0 < *(int *)(param_1 + 0xb74)) {
      *(undefined1 *)(param_1 + 0x9c1) = 0;
      *(undefined2 *)(param_1 + 0x985) = 0;
    }
  }
  return;
}

