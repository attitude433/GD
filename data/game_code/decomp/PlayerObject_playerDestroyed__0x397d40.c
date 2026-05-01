// PlayerObject_playerDestroyed @ 0x397d40
// Function: FUN_140397d40


void FUN_140397d40(longlong *param_1,char param_2)

{
  CCPoint *pCVar1;
  
  if (*(char *)((longlong)param_1 + 0x9bc) != '\0') {
    FUN_1403a0190(param_1,DAT_140622a74);
  }
  FUN_140396650(param_1);
  *(undefined1 *)(param_1 + 0x138) = 1;
  *(undefined2 *)(param_1 + 0xe5) = 0;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  FUN_14038b860(param_1);
  pCVar1 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
  cocos2d::CCPoint::operator=((CCPoint *)(param_1 + 0x9a),pCVar1);
  if ((CCNode *)param_1[0x182] != (CCNode *)0x0) {
    cocos2d::CCNode::stopAllActions((CCNode *)param_1[0x182]);
    (**(code **)(*(longlong *)param_1[0x182] + 0x140))((longlong *)param_1[0x182],0);
  }
  FUN_14039ee30(param_1,0);
  FUN_14039af00(param_1);
  if (((*(char *)((longlong)param_1 + 0x7e4) != '\0') && (param_2 == '\0')) &&
     (*(char *)((longlong)param_1 + 0x72b) == '\0')) {
    FUN_14037ef10(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140397e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x28] + 0x28))(param_1 + 0x28,0);
  return;
}

