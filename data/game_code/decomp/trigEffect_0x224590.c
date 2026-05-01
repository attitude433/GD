// Called from triggerObject base / 0x4bc180
// Function: FUN_140224590 @ 0x224590


CCObject * FUN_140224590(undefined8 param_1,int param_2)

{
  uint uVar1;
  CCObject *pCVar2;
  CCArray *this;
  float fVar3;
  
  if (param_2 < 1) {
    return (CCObject *)0x0;
  }
  pCVar2 = (CCObject *)FUN_140224520();
  if (pCVar2 == (CCObject *)0x0) {
    this = (CCArray *)FUN_140224280(param_1,param_2);
    uVar1 = cocos2d::CCArray::count(this);
    if (uVar1 != 0) {
      DAT_1406c2e90 = DAT_1406c2e90 * 0x343fd + 0x269ec3;
      fVar3 = (float)((uint)((ulonglong)DAT_1406c2e90 >> 0x10) & 0x7fff) / DAT_140623644;
      if (fVar3 == DAT_140622c24) {
        fVar3 = 0.0;
      }
      uVar1 = cocos2d::CCArray::count(this);
                    /* WARNING: Could not recover jumptable at 0x000140224658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pCVar2 = cocos2d::CCArray::objectAtIndex(this,(int)((float)uVar1 * fVar3));
      return pCVar2;
    }
  }
  return pCVar2;
}

