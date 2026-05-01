// LevelEditorLayer_create @ 0x2d1d40
// Body: 131 bytes


CCObject * FUN_1402d1d40(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  CCObject *this;
  
  uVar2 = FUN_1404d0770(0x3b60);
  this = (CCObject *)FUN_1402d0b50(uVar2);
  if (this != (CCObject *)0x0) {
    cVar1 = FUN_1402d1dd0(this,param_1,param_2);
    if (cVar1 != '\0') {
      cocos2d::CCObject::autorelease(this);
      return this;
    }
    (**(code **)(*(longlong *)this + 8))(this,1);
  }
  return (CCObject *)0x0;
}

