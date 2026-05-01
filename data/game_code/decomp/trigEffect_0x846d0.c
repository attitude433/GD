// Called from triggerObject base / 0x4bc180
// Function: FUN_1400846d0 @ 0x846d0


undefined8 * FUN_1400846d0(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  if (param_1 != param_2) {
    pvVar2 = (void *)*param_1;
    _Src = (void *)*param_2;
    uVar1 = param_2[1] - (longlong)_Src >> 2;
    if ((ulonglong)(param_1[2] - (longlong)pvVar2 >> 2) < uVar1) {
      FUN_1400847d0(param_1,uVar1);
      pvVar2 = (void *)*param_1;
      memmove(pvVar2,_Src,uVar1 * 4);
      param_1[1] = (void *)(uVar1 * 4 + (longlong)pvVar2);
    }
    else {
      uVar3 = param_1[1] - (longlong)pvVar2 >> 2;
      if (uVar3 < uVar1) {
        memmove(pvVar2,_Src,uVar3 * 4);
        pvVar2 = (void *)param_1[1];
        _Src = (void *)(uVar3 * 4 + (longlong)_Src);
        uVar1 = uVar1 - uVar3;
      }
      memmove(pvVar2,_Src,uVar1 * 4);
      param_1[1] = (void *)(uVar1 * 4 + (longlong)pvVar2);
    }
    return param_1;
  }
  return param_1;
}

