// Called from triggerObject base / 0x4bc180
// Function: FUN_14024b270 @ 0x24b270


undefined8 * FUN_14024b270(undefined8 *param_1,longlong *param_2)

{
  void *_Dst;
  ulonglong uVar1;
  size_t _Size;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1] - *param_2 >> 2;
  if (uVar1 != 0) {
    if (0x3fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_140062a20();
    }
    _Dst = (void *)FUN_14003aa10(uVar1 * 4);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    param_1[2] = (void *)(uVar1 * 4 + (longlong)_Dst);
    _Size = param_2[1] - *param_2;
    memmove(_Dst,(void *)*param_2,_Size);
    param_1[1] = (void *)((longlong)_Dst + ((longlong)_Size >> 2) * 4);
  }
  return param_1;
}

