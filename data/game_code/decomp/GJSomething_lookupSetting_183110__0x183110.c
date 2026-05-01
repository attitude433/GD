// Function: FUN_140183110
// Original target: GJSomething_lookupSetting_183110 @ 0x183110
// Ghidra entry: 140183110
// Signature: undefined FUN_140183110(void)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140183110(longlong param_1,longlong param_2)

{
  bool bVar1;
  CCString *this;
  void *_Memory;
  undefined8 ****ppppuVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 ***local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1406ba040 ^ (ulonglong)auStack_78;
  uStack_50 = 0;
  local_48 = 3;
  local_40 = 0xf;
  local_58 = (undefined8 ***)(ulonglong)(uint3)DAT_14055d048;
  lVar3 = -1;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  FUN_140041270(&local_58);
  ppppuVar2 = &local_58;
  if (0xf < local_40) {
    ppppuVar2 = (undefined8 ****)local_58;
  }
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)((longlong)ppppuVar2 + lVar3) != '\0');
  FUN_14003a930(&local_38,0,lVar3);
  this = cocos2d::CCDictionary::valueForKey
                   (*(CCDictionary **)(param_1 + 0x198),
                    (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    &local_38);
  bVar1 = cocos2d::CCString::boolValue(this);
  if (0xf < uStack_20) {
    _Memory = local_38;
    if ((0xfff < uStack_20 + 1) &&
       (_Memory = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  local_28 = _DAT_140623f30;
  uStack_20 = _UNK_140623f38;
  local_38 = (void *)((ulonglong)local_38 & 0xffffffffffffff00);
  if (0xf < local_40) {
    ppppuVar2 = (undefined8 ****)local_58;
    if ((0xfff < local_40 + 1) &&
       (ppppuVar2 = (undefined8 ****)local_58[-1],
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppuVar2);
  }
  return bVar1;
}

