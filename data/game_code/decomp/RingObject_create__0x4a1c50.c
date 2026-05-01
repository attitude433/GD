// RingObject_create @ 0x4a1c50
// Body: 162 bytes


CCObject * FUN_1404a1c50(undefined8 param_1)

{
  char cVar1;
  CCObject *this;
  
  this = (CCObject *)FUN_1404d0770(0x748);
  FUN_140495720(this);
  *(undefined ***)this = RingObject::vftable;
  *(undefined ***)(this + 0x140) = RingObject::vftable;
  *(undefined ***)(this + 0x158) = RingObject::vftable;
  *(undefined2 *)(this + 0x740) = 0;
  cVar1 = FUN_1404a5880(this,param_1);
  if (cVar1 != '\0') {
    this[0x439] = (CCObject)0x1;
    this[0x5d0] = (CCObject)0x1;
    cocos2d::CCObject::autorelease(this);
    return this;
  }
  (**(code **)(*(longlong *)this + 8))(this,1);
  return (CCObject *)0x0;
}

