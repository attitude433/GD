// EditorUI_findSnapObject_123240 @ 0x123240
// Body: 253 bytes


void FUN_140123240(longlong param_1,CCPoint *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  CCArray *this;
  CCObject *pCVar3;
  CCRect *this_00;
  uint uVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  uVar2 = cocos2d::CCArray::count(*(CCArray **)(param_1 + 0x340));
  if (uVar2 == 0) {
    this = (CCArray *)0x0;
  }
  else {
    this = cocos2d::CCArray::create();
    uVar4 = 0;
    uVar2 = cocos2d::CCArray::count(*(CCArray **)(param_1 + 0x340));
    if (uVar2 != 0) {
      do {
        pCVar3 = cocos2d::CCArray::objectAtIndex(*(CCArray **)(param_1 + 0x340),uVar4);
        FUN_1402d5800(*(undefined8 *)(param_1 + 0x500),local_38,pCVar3);
        this_00 = (CCRect *)FUN_1402d5800(*(undefined8 *)(param_1 + 0x500),local_28,pCVar3);
        bVar1 = cocos2d::CCRect::containsPoint(this_00,param_2);
        if (bVar1) {
          cocos2d::CCArray::addObject(this,pCVar3);
        }
        uVar4 = uVar4 + 1;
        uVar2 = cocos2d::CCArray::count(*(CCArray **)(param_1 + 0x340));
      } while (uVar4 < uVar2);
    }
  }
  FUN_140123340(param_1,this,param_3);
  return;
}

