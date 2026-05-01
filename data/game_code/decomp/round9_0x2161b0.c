// FUN_1402161b0 @ 0x2161b0


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402161b0(longlong param_1,CCObject *param_2)

{
  CCString *this;
  char *pcVar1;
  void *_Memory;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1406ba040 ^ (ulonglong)auStack_58;
  this = cocos2d::CCString::createWithFormat("%i",(ulonglong)*(uint *)(param_2 + 0x710));
  pcVar1 = cocos2d::CCString::getCString(this);
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (pcVar1[lVar2] != '\0');
  FUN_14003a930(&local_38,pcVar1);
  cocos2d::CCDictionary::setObject
            (*(CCDictionary **)(param_1 + 0x3218),param_2,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_38);
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
  return;
}

