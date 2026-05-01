// FUN_140217e40 @ 0x217e40


void FUN_140217e40(longlong param_1,longlong param_2,CCObject *param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined4 local_res8 [2];
  undefined1 local_18 [16];
  
  if (param_3[0x2f8] == (CCObject)0x0) {
    local_res8[0] = *(undefined4 *)(param_3 + 0x39c);
    plVar2 = (longlong *)FUN_1402505b0(param_1 + 0x548,local_18,local_res8);
    *(CCObject **)(*plVar2 + 0x18) = param_3;
    FUN_140231ff0(param_1,7,0);
  }
  bVar1 = cocos2d::CCArray::containsObject(*(CCArray **)(param_2 + 0xa38),param_3);
  if (!bVar1) {
    cocos2d::CCArray::addObject(*(CCArray **)(param_2 + 0xa38),param_3);
  }
  local_res8[0] = *(undefined4 *)(param_3 + 0x39c);
  FUN_140060d70(param_2 + 0xa40,local_18,local_res8);
  (**(code **)(*(longlong *)param_3 + 0x678))(param_3,*(undefined4 *)(param_1 + 0x3e0));
  if ((((*(char *)(param_2 + 0x9b9) == '\0') && (*(char *)(param_2 + 0x9ba) == '\0')) &&
      (*(char *)(param_2 + 0x9bc) == '\0')) &&
     ((*(char *)(param_2 + 0x9c4) == '\0' && (param_3[0x740] == (CCObject)0x0)))) {
    FUN_140398c00(param_2,param_3,0);
  }
  return;
}

