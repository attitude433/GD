// Called from triggerObject base / 0x4bc180
// Function: FUN_140224280 @ 0x224280


CCArray * FUN_140224280(longlong param_1,uint param_2)

{
  CCArray *pCVar1;
  ulonglong uVar2;
  
  if (9999 < (int)param_2) {
    param_2 = 9999;
  }
  uVar2 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
    uVar2 = 0;
  }
  pCVar1 = *(CCArray **)(*(longlong *)(param_1 + 0xf18) + uVar2 * 8);
  if (pCVar1 == (CCArray *)0x0) {
    pCVar1 = cocos2d::CCArray::create();
    cocos2d::CCDictionary::setObject(*(CCDictionary **)(param_1 + 0xf00),(CCObject *)pCVar1,uVar2);
    *(CCArray **)(*(longlong *)(param_1 + 0xf18) + uVar2 * 8) = pCVar1;
  }
  return pCVar1;
}

