// TeleportPortalObject_create @ 0x4b21c0
// Body: 273 bytes


CCObject * FUN_1404b21c0(undefined8 param_1,char param_2)

{
  char cVar1;
  CCObject *this;
  CCObject *pCVar2;
  
  this = (CCObject *)FUN_1404d0770(0x788);
  FUN_140495720(this);
  *(undefined2 *)(this + 0x740) = 0;
  *(undefined ***)this = TeleportPortalObject::vftable;
  *(undefined ***)(this + 0x140) = TeleportPortalObject::vftable;
  *(undefined ***)(this + 0x158) = TeleportPortalObject::vftable;
  pCVar2 = (CCObject *)0x0;
  *(undefined8 *)(this + 0x748) = 0;
  this[0x750] = (CCObject)0x0;
  *(undefined4 *)(this + 0x754) = 0;
  *(undefined2 *)(this + 0x758) = 0;
  *(undefined4 *)(this + 0x75c) = 0;
  this[0x760] = (CCObject)0x0;
  *(undefined8 *)(this + 0x764) = 0x3f800000;
  *(undefined4 *)(this + 0x76c) = 0;
  *(undefined2 *)(this + 0x770) = 0;
  this[0x772] = (CCObject)0x0;
  *(undefined8 *)(this + 0x774) = 0;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x77c));
  cVar1 = FUN_1404a5880(this,param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(longlong *)this + 8))(this,1);
  }
  else {
    if (param_2 == '\0') {
      this[0x5d0] = (CCObject)0x1;
    }
    cocos2d::CCObject::autorelease(this);
    pCVar2 = this;
  }
  return pCVar2;
}

