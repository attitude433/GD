// LevelEditorLayer_addToGroup @ 0x2dea00
// Body: 341 bytes


void FUN_1402dea00(longlong param_1,CCObject *param_2,int param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  CCArray *pCVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)param_3;
  if (9999 < param_3) {
    return;
  }
  pCVar3 = (CCArray *)FUN_140224280(param_1,param_3);
  cocos2d::CCArray::addObject(pCVar3,param_2);
  if (param_2[0x512] == (CCObject)0x0) {
    iVar2 = 0;
    if (-1 < param_3) {
      iVar2 = param_3;
    }
    lVar6 = (longlong)iVar2;
    pCVar3 = *(CCArray **)(*(longlong *)(param_1 + 0xf30) + lVar6 * 8);
    if (pCVar3 != (CCArray *)0x0) goto LAB_1402deac9;
    pCVar3 = cocos2d::CCArray::create();
    cocos2d::CCDictionary::setObject(*(CCDictionary **)(param_1 + 0xf08),(CCObject *)pCVar3,lVar6);
    lVar4 = *(longlong *)(param_1 + 0xf30);
  }
  else {
    iVar2 = 0;
    if (-1 < param_3) {
      iVar2 = param_3;
    }
    lVar6 = (longlong)iVar2;
    pCVar3 = *(CCArray **)(*(longlong *)(param_1 + 0xf48) + lVar6 * 8);
    if (pCVar3 != (CCArray *)0x0) goto LAB_1402deac9;
    pCVar3 = cocos2d::CCArray::create();
    cocos2d::CCDictionary::setObject(*(CCDictionary **)(param_1 + 0xf10),(CCObject *)pCVar3,lVar6);
    lVar4 = *(longlong *)(param_1 + 0xf48);
  }
  *(CCArray **)(lVar4 + lVar6 * 8) = pCVar3;
LAB_1402deac9:
  cocos2d::CCArray::addObject(pCVar3,param_2);
  if (param_2[0x4ed] != (CCObject)0x0) {
    pCVar3 = *(CCArray **)(*(longlong *)(param_1 + 0x3930) + lVar5 * 8);
    if (pCVar3 == (CCArray *)0x0) {
      pCVar3 = cocos2d::CCArray::create();
      *(CCArray **)(*(longlong *)(param_1 + 0x3930) + lVar5 * 8) = pCVar3;
      cocos2d::CCDictionary::setObject
                (*(CCDictionary **)(param_1 + 0x3928),(CCObject *)pCVar3,lVar5);
    }
    if ((param_4 != '\0') || (bVar1 = cocos2d::CCArray::containsObject(pCVar3,param_2), !bVar1)) {
      cocos2d::CCArray::addObject(pCVar3,param_2);
    }
  }
  *(undefined1 *)(param_1 + 0x3b22) = 1;
  return;
}

