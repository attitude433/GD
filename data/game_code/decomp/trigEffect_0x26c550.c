// Called from triggerObject base / 0x4bc180
// Function: FUN_14026c550 @ 0x26c550


undefined1 *
FUN_14026c550(longlong *param_1,longlong param_2,undefined4 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 *param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  void *_Memory;
  undefined1 *puVar14;
  
  lVar12 = *param_1;
  lVar11 = (param_2 - lVar12) / 6 + (param_2 - lVar12 >> 0x3f);
  lVar10 = (param_1[1] - lVar12) / 0x30;
  if (lVar10 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_140062a20();
  }
  uVar1 = lVar10 + 1;
  uVar2 = (param_1[2] - lVar12) / 0x30;
  if (0x555555555555555 - (uVar2 >> 1) < uVar2) {
    uVar9 = 0x555555555555555;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar9 = uVar1;
    if (uVar1 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x555555555555555 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140007ab0();
    }
  }
  puVar8 = (undefined1 *)FUN_14003aa10(uVar9 * 0x30);
  puVar14 = puVar8 + ((lVar11 >> 3) - (lVar11 >> 0x3f)) * 0x30;
  uVar4 = *param_7;
  uVar5 = *param_6;
  uVar3 = *param_4;
  uVar6 = *param_3;
  *puVar14 = 0;
  *(undefined8 *)(puVar14 + 0x18) = 0;
  *(undefined8 *)(puVar14 + 0x20) = 0;
  *(undefined8 *)(puVar14 + 0x28) = 0;
  *(undefined4 *)(puVar14 + 4) = uVar6;
  puVar14[8] = uVar3;
  *(undefined4 *)(puVar14 + 0xc) = uVar5;
  *(undefined4 *)(puVar14 + 0x10) = uVar4;
  FUN_1400846d0(puVar14 + 0x18,param_5,uVar5,uVar4,puVar14 + 0x30,puVar8,puVar14);
  lVar12 = param_1[1];
  lVar10 = *param_1;
  puVar13 = puVar8;
  if (param_2 != lVar12) {
    FUN_14026e0b0(*param_1,param_2,puVar8);
    lVar12 = param_1[1];
    lVar10 = param_2;
    puVar13 = puVar14 + 0x30;
  }
  FUN_14026e0b0(lVar10,lVar12,puVar13);
  lVar12 = *param_1;
  if (lVar12 != 0) {
    lVar10 = param_1[1];
    for (; lVar12 != lVar10; lVar12 = lVar12 + 0x30) {
      FUN_14005e430(lVar12 + 0x18);
    }
    pvVar7 = (void *)*param_1;
    _Memory = pvVar7;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar7) / 0x30) * 0x30)) &&
       (_Memory = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 0x30);
  param_1[2] = (longlong)(puVar8 + uVar9 * 0x30);
  return puVar14;
}

