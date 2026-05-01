// Called from triggerObject base / 0x4bc180
// Function: FUN_14038b440 @ 0x38b440


void FUN_14038b440(CCNode *param_1,byte param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  if (param_1[0x72b] != (CCNode)(param_2 ^ 1)) {
    if (param_2 == 0) {
      cocos2d::CCNode::stopActionByTag(param_1,0xb);
      param_1[0x72b] = (CCNode)0x1;
      (**(code **)(*(longlong *)param_1 + 0x140))(param_1,0);
      cocos2d::CCMotionStreak::stopStroke(*(CCMotionStreak **)(param_1 + 0x7a0));
      if (param_1[0x978] != (CCNode)0x0) {
        param_1[0x978] = (CCNode)0x0;
        uVar2 = DAT_140622b38;
        if (param_1[0x7e4] != (CCNode)0x0) {
          uVar2 = DAT_140622a74;
        }
        FUN_1403a0190(param_1,uVar2);
      }
      plVar1 = *(longlong **)(param_1 + 0x7a8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x140))(plVar1,0);
      }
      FUN_14038b7e0(param_1);
      return;
    }
    param_1[0x72b] = (CCNode)(param_2 ^ 1);
    (**(code **)(*(longlong *)param_1 + 0x140))();
    if ((((param_1[0x9b9] == (CCNode)0x0) && (param_1[0x9ba] == (CCNode)0x0)) &&
        (param_1[0x9bc] == (CCNode)0x0)) && (param_1[0x9c4] == (CCNode)0x0)) {
      if (param_1[0x929] != (CCNode)0x0) {
        FUN_14038b5e0(param_1);
        FUN_1403a0090(param_1);
        return;
      }
    }
    else {
      FUN_14038b5e0(param_1);
      FUN_1403a0090(param_1);
      cocos2d::CCParticleSystem::resetSystem(*(CCParticleSystem **)(param_1 + 0x8c0));
      if (param_1[0x9bc] != (CCNode)0x0) {
        FUN_1403a0680(param_1);
        return;
      }
      if (((param_1[0x9b9] != (CCNode)0x0) && (param_1[0xb70] == (CCNode)0x0)) &&
         (plVar1 = *(longlong **)(param_1 + 0x7a8), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x140))(plVar1,1);
      }
    }
  }
  return;
}

