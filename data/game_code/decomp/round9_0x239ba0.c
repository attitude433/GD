// FUN_140239ba0 @ 0x239ba0


void FUN_140239ba0(longlong param_1,longlong *param_2,float param_3)

{
  CCDirector *this;
  longlong lVar1;
  undefined4 local_resc;
  
  if ((*(float *)(param_1 + 0x23c) == 0.0) && (*(char *)((longlong)param_2 + 0x9c3) == '\0')) {
    this = cocos2d::CCDirector::sharedDirector();
    cocos2d::CCDirector::getWinSize(this);
    lVar1 = (**(code **)(*param_2 + 200))(param_2);
    if ((local_resc + *(float *)(param_1 + 0x414) + param_3 < *(float *)(lVar1 + 4)) ||
       (lVar1 = (**(code **)(*param_2 + 200))(param_2),
       param_3 = *(float *)(param_1 + 0x414) - param_3,
       *(float *)(lVar1 + 4) <= param_3 && param_3 != *(float *)(lVar1 + 4))) {
      *(undefined1 *)(param_1 + 0x761) = 1;
      FUN_14023bcf0(param_1,0);
    }
  }
  return;
}

