// Function: FUN_140231d10
// Original target: REAL_processTriggers @ 0x231d10
// Ghidra entry: 140231d10
// Signature: undefined FUN_140231d10(void)


void FUN_140231d10(longlong param_1,float param_2,char param_3)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  double dVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x3300);
  lVar2 = *(longlong *)(param_1 + 0x3308) - (longlong)puVar3;
  lVar1 = lVar2 >> 0x3f;
  if (lVar2 / 0x18 + lVar1 != lVar1) {
    do {
      if ((param_3 == '\0') &&
         (dVar4 = (double)param_2 + *(double *)(param_1 + 0x3790),
         dVar4 < *(double *)(puVar3 + 4) || dVar4 == *(double *)(puVar3 + 4))) {
        return;
      }
      FUN_1402338e0(param_1,*(undefined1 *)(puVar3 + 1),*puVar3,
                    *(char *)((longlong)puVar3 + 5) == '\0');
      _Src = (void *)((longlong)*(void **)(param_1 + 0x3300) + 0x18);
      memmove(*(void **)(param_1 + 0x3300),_Src,*(longlong *)(param_1 + 0x3308) - (longlong)_Src);
      *(longlong *)(param_1 + 0x3308) = *(longlong *)(param_1 + 0x3308) + -0x18;
      puVar3 = *(undefined4 **)(param_1 + 0x3300);
      lVar2 = *(longlong *)(param_1 + 0x3308) - (longlong)puVar3;
      lVar1 = lVar2 >> 0x3f;
    } while (lVar2 / 0x18 + lVar1 != lVar1);
  }
  return;
}

