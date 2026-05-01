// Function: FUN_140213770
// Original target: GJBaseGameLayer_collisionLoop_213770 @ 0x213770
// Ghidra entry: 140213770
// Signature: undefined FUN_140213770(void)


float FUN_140213770(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if ((*(float *)(param_1 + 0x23c) != 0.0) && (*(char *)(param_1 + 0x2a0) == '\0')) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x1018) + 200))();
    return (*(float *)(lVar1 + 4) + DAT_140622c24) / *(float *)(param_1 + 0x1a8) +
           *(float *)(param_1 + 0x510);
  }
  fVar2 = (float)FUN_140213690();
  return fVar2 + *(float *)(param_1 + 0x2ec) / *(float *)(param_1 + 0x1a8);
}

