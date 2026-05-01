// Function: FUN_1403919b0
// Original target: PlayerObject_collidedWithObject @ 0x3919b0
// Ghidra entry: 1403919b0
// Signature: undefined FUN_1403919b0(void)


void FUN_1403919b0(longlong param_1,undefined4 param_2,undefined8 param_3,CCRect *param_4,
                  undefined1 param_5)

{
  CCRect *pCVar1;
  undefined8 uVar2;
  CCRect local_38 [16];
  CCRect local_28 [32];
  
  if (*(char *)(param_1 + 0x9c3) != '\0') {
    pCVar1 = (CCRect *)cocos2d::CCRect::CCRect(local_38,param_4);
    uVar2 = cocos2d::CCRect::CCRect(local_28,pCVar1);
    FUN_14038f140(param_1,param_2,param_3,uVar2,param_5,0,0);
    return;
  }
  uVar2 = cocos2d::CCRect::CCRect(local_28,param_4);
  FUN_140391a70(param_1,param_2,param_3,uVar2,param_5);
  return;
}

