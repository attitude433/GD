// Called from triggerObject base / 0x4bc180
// Function: FUN_14024a470 @ 0x24a470


undefined8 FUN_14024a470(longlong param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *_Memory;
  
  plVar3 = (longlong *)
           ((*(ulonglong *)(param_1 + 0x30) &
            (((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1]) *
              0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
            0x100000001b3) * 0x10 + *(longlong *)(param_1 + 0x18));
  _Memory = (longlong *)plVar3[1];
  if (_Memory == *(longlong **)(param_1 + 8)) {
LAB_14024a4fb:
    _Memory = (longlong *)0x0;
  }
  else {
    iVar1 = (int)_Memory[2];
    while (*(int *)param_2 != iVar1) {
      if (_Memory == (longlong *)*plVar3) goto LAB_14024a4fb;
      _Memory = (longlong *)_Memory[1];
      iVar1 = (int)_Memory[2];
    }
  }
  if (_Memory != (longlong *)0x0) {
    if ((longlong *)plVar3[1] == _Memory) {
      if ((longlong *)*plVar3 == _Memory) {
        lVar2 = *(longlong *)(param_1 + 8);
        *plVar3 = lVar2;
        plVar3[1] = lVar2;
      }
      else {
        plVar3[1] = _Memory[1];
      }
    }
    else if ((longlong *)*plVar3 == _Memory) {
      *plVar3 = *_Memory;
    }
    lVar2 = *_Memory;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    *(longlong *)_Memory[1] = lVar2;
    *(longlong *)(lVar2 + 8) = _Memory[1];
    FUN_14024bcb0(_Memory + 3);
    free(_Memory);
    return 1;
  }
  return 0;
}

