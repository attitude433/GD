// LevelEditorLayer_removeObject @ 0x2d6180
// Body: 312 bytes


void FUN_1402d6180(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  CCObject *this;
  CCObject *this_00;
  uint uVar2;
  
  if (param_2 != (longlong *)0x0) {
    if (param_3 == '\0') {
      cocos2d::CCArray::removeAllObjects(*(CCArray **)(param_1 + 0x38b0));
      this = (CCObject *)FUN_1404d0770(0xa0);
      cocos2d::CCObject::CCObject(this);
      *(undefined ***)this = UndoObject::vftable;
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x48) = 0;
      *(undefined2 *)(this + 0x50) = 0;
      FUN_1400de960(this + 0x54);
      this_00 = (CCObject *)FUN_1402e8940(param_2);
      *(CCObject **)(this + 0x38) = this_00;
      cocos2d::CCObject::retain(this_00);
      *(undefined4 *)(this + 0x40) = 1;
      cocos2d::CCObject::autorelease(this);
      cocos2d::CCArray::removeAllObjects(*(CCArray **)(param_1 + 0x38b0));
      uVar2 = 1000;
      if (*(char *)(param_1 + 0x37ae) == '\0') {
        uVar2 = 200;
      }
      uVar1 = cocos2d::CCArray::count(*(CCArray **)(param_1 + 0x38a8));
      if (uVar2 <= uVar1) {
        cocos2d::CCArray::removeObjectAtIndex(*(CCArray **)(param_1 + 0x38a8),0,true);
      }
      cocos2d::CCArray::addObject(*(CCArray **)(param_1 + 0x38a8),this);
    }
    (**(code **)(*param_2 + 0x478))(param_2,1);
    FUN_140226d60(param_1,param_2);
    FUN_1402d8310(param_1,param_2);
    *(undefined1 *)(param_1 + 0x3b22) = 1;
  }
  return;
}

