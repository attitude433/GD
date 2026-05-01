// triggerObject @ 0x4b88a0
// Function: FUN_1404b88a0


void FUN_1404b88a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  void **ppvVar1;
  void *_Memory;
  bool bVar2;
  void *local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined1 local_20 [24];
  
  bVar2 = param_4 == 0;
  if (bVar2) {
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    ppvVar1 = &local_38;
  }
  else {
    ppvVar1 = (void **)FUN_14024b270(local_20,param_4);
  }
  FUN_140232110(param_2,param_1,ppvVar1);
  if (bVar2) {
    if (local_38 != (void *)0x0) {
      _Memory = local_38;
      if ((0xfff < (ulonglong)((local_28 - (longlong)local_38 >> 2) * 4)) &&
         (_Memory = *(void **)((longlong)local_38 + -8),
         0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
  }
  if (!bVar2) {
    FUN_14005e430(local_20);
  }
  return;
}

