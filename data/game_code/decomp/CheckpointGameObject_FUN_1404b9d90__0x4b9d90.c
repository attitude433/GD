// CheckpointGameObject_FUN_1404b9d90 @ 0x4b9d90
// Body: 124 bytes


undefined1 FUN_1404b9d90(CCSprite *param_1)

{
  bool bVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0xd;
  bVar1 = cocos2d::CCSprite::initWithSpriteFrameName(param_1,"checkpoint_d_01_001.png");
  if (bVar1) {
    FUN_14018dcf0(param_1);
    param_1[0x139] = (CCSprite)0x0;
    *(undefined4 *)(param_1 + 0x4e8) = 1;
    *(undefined2 *)(param_1 + 0x5b9) = 0xffff;
    param_1[0x5bb] = (CCSprite)0xff;
    *(undefined4 *)(param_1 + 0x5bc) = 0x3f000000;
    param_1[0x674] = (CCSprite)0x1;
    *(undefined4 *)(param_1 + 0x3a0) = 0x14;
    param_1[0x57a] = (CCSprite)0x1;
    return 1;
  }
  return 0;
}

