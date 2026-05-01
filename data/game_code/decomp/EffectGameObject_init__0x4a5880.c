// EffectGameObject_init @ 0x4a5880
// Body: 100 bytes


undefined1 FUN_1404a5880(CCSprite *param_1,char *param_2)

{
  bool bVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0xd;
  bVar1 = cocos2d::CCSprite::initWithSpriteFrameName(param_1,param_2);
  if (bVar1) {
    FUN_14018dcf0(param_1);
    param_1[0x139] = (CCSprite)0x0;
    *(undefined4 *)(param_1 + 0x4e8) = 1;
    *(undefined2 *)(param_1 + 0x5b9) = 0xffff;
    param_1[0x5bb] = (CCSprite)0xff;
    *(undefined4 *)(param_1 + 0x5bc) = 0x3f000000;
    param_1[0x674] = (CCSprite)0x1;
    return 1;
  }
  return 0;
}

