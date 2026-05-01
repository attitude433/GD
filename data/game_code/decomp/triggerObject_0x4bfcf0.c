// triggerObject @ 0x4bfcf0
// Function: FUN_1404bfcf0


void FUN_1404bfcf0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  void **ppvVar2;
  void *_Memory;
  bool bVar3;
  void *local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined1 local_20 [24];
  
  iVar1 = *(int *)(param_1 + 0x40c);
  if (iVar1 == 0xe23) {
    FUN_140234250(param_2,param_1);
  }
  else {
    if (iVar1 != 0xe24) {
      if (iVar1 != 0xe39) {
        FUN_1404a5f30();
        return;
      }
      FUN_140234a40(param_2,param_1);
      return;
    }
    bVar3 = param_4 == 0;
    if (bVar3) {
      local_38 = (void *)0x0;
      uStack_30 = 0;
      local_28 = 0;
      ppvVar2 = &local_38;
    }
    else {
      ppvVar2 = (void **)FUN_14024b270(local_20,param_4);
    }
    FUN_140234630(param_2,param_1,ppvVar2);
    if (bVar3) {
      if (local_38 != (void *)0x0) {
        _Memory = local_38;
        if ((0xfff < (ulonglong)((local_28 - (longlong)local_38 >> 2) * 4)) &&
           (_Memory = *(void **)((longlong)local_38 + -8),
           0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
        local_38 = (void *)0x0;
        uStack_30 = 0;
        local_28 = 0;
      }
    }
    if (!bVar3) {
      FUN_14005e430(local_20);
      return;
    }
  }
  return;
}

