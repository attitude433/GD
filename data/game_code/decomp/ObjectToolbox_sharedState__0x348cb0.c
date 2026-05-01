// Function: FUN_140348cb0
// Original target: ObjectToolbox_sharedState @ 0x348cb0
// Ghidra entry: 140348cb0
// Signature: undefined FUN_140348cb0(void)
// Body size: 185 bytes


longlong * FUN_140348cb0(void)

{
  CCNode *this;
  longlong lVar1;
  
  if (DAT_1406c2f38 == (longlong *)0x0) {
    this = (CCNode *)FUN_1404d0770(0x150);
    cocos2d::CCNode::CCNode(this);
    *(undefined ***)this = ObjectToolbox::vftable;
    *(undefined8 *)(this + 0x140) = 0;
    *(undefined8 *)(this + 0x148) = 0;
    lVar1 = FUN_1404d0770(0x48);
    *(longlong *)lVar1 = lVar1;
    *(longlong *)(lVar1 + 8) = lVar1;
    *(longlong *)(lVar1 + 0x10) = lVar1;
    *(undefined2 *)(lVar1 + 0x18) = 0x101;
    *(longlong *)(this + 0x140) = lVar1;
    DAT_1406c2f38 = (longlong *)this;
    if (*(code **)(*(longlong *)this + 0x48) == FUN_140348d70) {
      FUN_140348d70();
      return DAT_1406c2f38;
    }
    (**(code **)(*(longlong *)this + 0x48))(this);
  }
  return DAT_1406c2f38;
}

