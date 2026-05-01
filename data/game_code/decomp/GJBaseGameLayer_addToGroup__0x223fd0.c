// Function: FUN_140223fd0
// Original target: GJBaseGameLayer_addToGroup @ 0x223fd0
// Ghidra entry: 140223fd0
// Signature: undefined FUN_140223fd0(void)


void FUN_140223fd0(longlong param_1,CCObject *param_2,int param_3)

{
  int iVar1;
  CCArray *pCVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (9999 < param_3) {
    return;
  }
  pCVar2 = (CCArray *)FUN_140224280(param_1,param_3);
  cocos2d::CCArray::addObject(pCVar2,param_2);
  if (param_2[0x512] == (CCObject)0x0) {
    iVar1 = 0;
    if (-1 < param_3) {
      iVar1 = param_3;
    }
    lVar4 = (longlong)iVar1;
    pCVar2 = *(CCArray **)(*(longlong *)(param_1 + 0xf30) + lVar4 * 8);
    if (pCVar2 != (CCArray *)0x0) goto LAB_140224093;
    pCVar2 = cocos2d::CCArray::create();
    cocos2d::CCDictionary::setObject(*(CCDictionary **)(param_1 + 0xf08),(CCObject *)pCVar2,lVar4);
    lVar3 = *(longlong *)(param_1 + 0xf30);
  }
  else {
    iVar1 = 0;
    if (-1 < param_3) {
      iVar1 = param_3;
    }
    lVar4 = (longlong)iVar1;
    pCVar2 = *(CCArray **)(*(longlong *)(param_1 + 0xf48) + lVar4 * 8);
    if (pCVar2 != (CCArray *)0x0) goto LAB_140224093;
    pCVar2 = cocos2d::CCArray::create();
    cocos2d::CCDictionary::setObject(*(CCDictionary **)(param_1 + 0xf10),(CCObject *)pCVar2,lVar4);
    lVar3 = *(longlong *)(param_1 + 0xf48);
  }
  *(CCArray **)(lVar3 + lVar4 * 8) = pCVar2;
LAB_140224093:
  cocos2d::CCArray::addObject(pCVar2,param_2);
  return;
}

