// GameObject_initWithTexture @ 0x18dcb0
// Body: 55 bytes


undefined1 FUN_14018dcb0(CCSprite *param_1,CCTexture2D *param_2)

{
  bool bVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0xd;
  bVar1 = cocos2d::CCSprite::initWithTexture(param_1,param_2,(CCRect *)&DAT_1406c13d0);
  if (!bVar1) {
    return 0;
  }
  FUN_14018dcf0(param_1);
  return 1;
}

