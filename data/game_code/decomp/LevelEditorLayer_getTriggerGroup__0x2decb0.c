// LevelEditorLayer_getTriggerGroup @ 0x2decb0
// Body: 95 bytes


CCArray * FUN_1402decb0(longlong param_1,int param_2)

{
  CCArray *pCVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2;
  pCVar1 = *(CCArray **)(*(longlong *)(param_1 + 0x3930) + lVar2 * 8);
  if (pCVar1 == (CCArray *)0x0) {
    pCVar1 = cocos2d::CCArray::create();
    *(CCArray **)(*(longlong *)(param_1 + 0x3930) + lVar2 * 8) = pCVar1;
    cocos2d::CCDictionary::setObject(*(CCDictionary **)(param_1 + 0x3928),(CCObject *)pCVar1,lVar2);
  }
  return pCVar1;
}

