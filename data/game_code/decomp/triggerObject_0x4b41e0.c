// triggerObject @ 0x4b41e0
// Function: FUN_1404b41e0


void FUN_1404b41e0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  int iVar4;
  void *_Memory;
  undefined4 uVar5;
  bool bVar6;
  float fVar7;
  void *local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined1 local_20 [24];
  
  if (*(int *)(param_1 + 0x40c) == 0x814) {
    iVar4 = 0;
    for (lVar1 = *(longlong *)(param_1 + 0x740); lVar1 != *(longlong *)(param_1 + 0x748);
        lVar1 = lVar1 + 0x10) {
      iVar4 = iVar4 + *(int *)(lVar1 + 8);
    }
    DAT_1406c2e90 = DAT_1406c2e90 * 0x343fd + 0x269ec3;
    fVar7 = (float)roundf(((float)((uint)((ulonglong)DAT_1406c2e90 >> 0x10) & 0x7fff) /
                          DAT_140623644) * (float)iVar4);
    iVar4 = 0;
    for (puVar2 = *(undefined4 **)(param_1 + 0x740); puVar2 != *(undefined4 **)(param_1 + 0x748);
        puVar2 = puVar2 + 4) {
      iVar4 = iVar4 + puVar2[2];
      if ((int)fVar7 <= iVar4) {
        uVar5 = *puVar2;
        goto LAB_1404b42ab;
      }
    }
    uVar5 = 0;
LAB_1404b42ab:
    bVar6 = param_4 == 0;
    if (bVar6) {
      local_38 = (void *)0x0;
      uStack_30 = 0;
      local_28 = 0;
      ppvVar3 = &local_38;
    }
    else {
      ppvVar3 = (void **)FUN_14024b270(local_20,param_4);
    }
    (**(code **)(*(longlong *)(param_2 + 0x198) + 8))
              ((longlong *)(param_2 + 0x198),uVar5,0,DAT_1406236b0,ppvVar3,
               *(undefined4 *)(param_1 + 0x39c),*(undefined4 *)(param_1 + 0x698));
    if ((bVar6) && (local_38 != (void *)0x0)) {
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
    if (!bVar6) {
      FUN_14005e430(local_20);
    }
  }
  else {
    FUN_1404a5f30();
  }
  return;
}

