// Called from triggerObject base / 0x4bc180
// Function: FUN_14026c2b0 @ 0x26c2b0


undefined1 *
FUN_14026c2b0(longlong *param_1,longlong param_2,undefined4 *param_3,undefined1 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined1 *param_7,undefined8 param_8,
             undefined4 *param_9,undefined4 *param_10)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *pvVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  void *_Memory;
  undefined1 *puVar16;
  
  lVar14 = *param_1;
  lVar13 = (param_1[1] - lVar14) / 0x38;
  if (lVar13 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_140062a20();
  }
  uVar1 = lVar13 + 1;
  uVar2 = (param_1[2] - lVar14) / 0x38;
  if (0x492492492492492 - (uVar2 >> 1) < uVar2) {
    uVar12 = 0x492492492492492;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar12 = uVar1;
    if (uVar1 <= uVar2) {
      uVar12 = uVar2;
    }
    if (0x492492492492492 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_140007ab0();
    }
  }
  puVar11 = (undefined1 *)FUN_14003aa10(uVar12 * 0x38);
  puVar16 = puVar11 + ((param_2 - lVar14) / 0x38) * 0x38;
  uVar5 = *param_10;
  uVar6 = *param_9;
  uVar3 = *param_7;
  uVar7 = *param_6;
  uVar8 = *param_5;
  uVar4 = *param_4;
  uVar9 = *param_3;
  *puVar16 = 0;
  *(undefined8 *)(puVar16 + 0x20) = 0;
  *(undefined8 *)(puVar16 + 0x28) = 0;
  *(undefined8 *)(puVar16 + 0x30) = 0;
  *(undefined4 *)(puVar16 + 4) = uVar9;
  puVar16[8] = uVar4;
  *(undefined4 *)(puVar16 + 0xc) = uVar8;
  *(undefined4 *)(puVar16 + 0x10) = uVar7;
  puVar16[0x1c] = uVar3;
  *(undefined4 *)(puVar16 + 0x14) = uVar6;
  *(undefined4 *)(puVar16 + 0x18) = uVar5;
  FUN_1400846d0(puVar16 + 0x20,param_8);
  lVar14 = param_1[1];
  lVar13 = *param_1;
  puVar15 = puVar11;
  if (param_2 != lVar14) {
    FUN_14026dff0(*param_1,param_2,puVar11);
    lVar14 = param_1[1];
    lVar13 = param_2;
    puVar15 = puVar16 + 0x38;
  }
  FUN_14026dff0(lVar13,lVar14,puVar15);
  lVar14 = *param_1;
  if (lVar14 != 0) {
    lVar13 = param_1[1];
    for (; lVar14 != lVar13; lVar14 = lVar14 + 0x38) {
      FUN_14005e430(lVar14 + 0x20);
    }
    pvVar10 = (void *)*param_1;
    _Memory = pvVar10;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar10) / 0x38) * 0x38)) &&
       (_Memory = *(void **)((longlong)pvVar10 + -8),
       0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + uVar1 * 0x38);
  param_1[2] = (longlong)(puVar11 + uVar12 * 0x38);
  return puVar16;
}

