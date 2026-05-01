// FUN_14012d2a0 @ 0x12d2a0


void * FUN_14012d2a0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  void *_Dst;
  ulonglong uVar5;
  void *_Dst_00;
  longlong lVar6;
  ulonglong uVar7;
  size_t _Size;
  
  lVar3 = *param_1;
  lVar6 = (longlong)param_2 - lVar3 >> 3;
  lVar4 = param_1[1] - lVar3 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140062a20();
  }
  uVar5 = param_1[2] - lVar3 >> 3;
  uVar1 = lVar4 + 1;
  if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar7 = 0x1fffffffffffffff;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x1fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140007ab0();
    }
  }
  _Dst = (void *)FUN_14003aa10(uVar7 * 8);
  *(undefined8 *)((longlong)_Dst + lVar6 * 8) = *param_3;
  _Src = (void *)*param_1;
  pvVar2 = (void *)((longlong)_Dst + lVar6 * 8);
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst_00 = _Dst;
    param_2 = _Src;
  }
  else {
    memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst_00 = (void *)((longlong)pvVar2 + 8);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst_00,param_2,_Size);
  FID_conflict__Change_array(param_1,_Dst,uVar1,uVar7);
  return pvVar2;
}

