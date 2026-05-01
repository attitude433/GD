// Called from triggerObject base / 0x4bc180
// Function: FUN_140251cb0 @ 0x251cb0


undefined8 *
FUN_140251cb0(longlong *param_1,void *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *_Dst;
  ulonglong uVar8;
  undefined8 *_Dst_00;
  void *_Memory;
  longlong lVar9;
  ulonglong uVar10;
  size_t _Size;
  ulonglong uVar11;
  undefined8 *puVar12;
  
  lVar5 = *param_1;
  lVar9 = param_1[1] - lVar5 >> 5;
  if (lVar9 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140062a20();
  }
  uVar10 = lVar9 + 1;
  uVar8 = param_1[2] - lVar5 >> 5;
  if (0x7ffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar11 = 0x7ffffffffffffff;
  }
  else {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar11 = uVar10;
    if (uVar10 <= uVar8) {
      uVar11 = uVar8;
    }
    if (0x7ffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_140007ab0();
    }
  }
  _Dst = (undefined8 *)FUN_14003aa10(uVar11 * 0x20);
  puVar12 = (undefined8 *)(((longlong)param_2 - lVar5 & 0xffffffffffffffe0U) + (longlong)_Dst);
  uVar6 = *param_3;
  uVar1 = *param_8;
  uVar2 = *param_7;
  uVar3 = *param_6;
  uVar4 = *param_5;
  *(undefined4 *)(puVar12 + 1) = *param_4;
  *puVar12 = uVar6;
  *(undefined4 *)((longlong)puVar12 + 0xc) = uVar4;
  *(undefined4 *)(puVar12 + 2) = uVar1;
  *(undefined4 *)((longlong)puVar12 + 0x14) = uVar3;
  *(undefined4 *)(puVar12 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  pvVar7 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar7;
    _Dst_00 = _Dst;
    param_2 = pvVar7;
  }
  else {
    memmove(_Dst,pvVar7,(longlong)param_2 - (longlong)pvVar7);
    _Dst_00 = puVar12 + 4;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst_00,param_2,_Size);
  pvVar7 = (void *)*param_1;
  if (pvVar7 != (void *)0x0) {
    _Memory = pvVar7;
    if ((0xfff < (param_1[2] - (longlong)pvVar7 & 0xffffffffffffffe0U)) &&
       (_Memory = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(_Dst + uVar10 * 4);
  param_1[2] = (longlong)(_Dst + uVar11 * 4);
  return puVar12;
}

