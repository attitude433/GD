// LevelEditorLayer_removeFromGroup @ 0x2deb60
// Body: 332 bytes


void FUN_1402deb60(longlong param_1,CCObject *param_2,uint param_3)

{
  uint uVar1;
  CCArray *pCVar2;
  longlong lVar3;
  CCObject *pCVar4;
  ulonglong uVar5;
  
  pCVar2 = (CCArray *)FUN_140224280(param_1,param_3);
  cocos2d::CCArray::removeObject(pCVar2,param_2,true);
  if (param_2[0x512] == (CCObject)0x0) {
    uVar1 = param_3;
    if (9999 < (int)param_3) {
      uVar1 = 9999;
    }
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    uVar5 = (ulonglong)uVar1;
    pCVar2 = *(CCArray **)(*(longlong *)(param_1 + 0xf30) + uVar5 * 8);
    if (pCVar2 != (CCArray *)0x0) goto LAB_1402dec32;
    pCVar2 = cocos2d::CCArray::create();
    cocos2d::CCDictionary::setObject(*(CCDictionary **)(param_1 + 0xf08),(CCObject *)pCVar2,uVar5);
    lVar3 = *(longlong *)(param_1 + 0xf30);
  }
  else {
    uVar1 = param_3;
    if (9999 < (int)param_3) {
      uVar1 = 9999;
    }
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    uVar5 = (ulonglong)uVar1;
    pCVar2 = *(CCArray **)(*(longlong *)(param_1 + 0xf48) + uVar5 * 8);
    if (pCVar2 != (CCArray *)0x0) goto LAB_1402dec32;
    pCVar2 = cocos2d::CCArray::create();
    cocos2d::CCDictionary::setObject(*(CCDictionary **)(param_1 + 0xf10),(CCObject *)pCVar2,uVar5);
    lVar3 = *(longlong *)(param_1 + 0xf48);
  }
  *(CCArray **)(lVar3 + uVar5 * 8) = pCVar2;
LAB_1402dec32:
  cocos2d::CCArray::removeObject(pCVar2,param_2,true);
  if (param_2[0x49a] != (CCObject)0x0) {
    pCVar4 = cocos2d::CCDictionary::objectForKey
                       (*(CCDictionary **)(param_1 + 0xf60),(longlong)(int)param_3);
    if (param_2 == pCVar4) {
      FUN_140224790(param_1,param_3);
    }
  }
  if (param_2[0x4ed] != (CCObject)0x0) {
    pCVar2 = (CCArray *)FUN_1402decb0(param_1,param_3);
    cocos2d::CCArray::removeObject(pCVar2,param_2,true);
  }
  *(undefined1 *)(param_1 + 0x3b22) = 1;
  return;
}

