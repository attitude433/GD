// PlayerObject_toggleRobotMode @ 0x39b6f0
// Function: FUN_14039b6f0


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14039b6f0(longlong *param_1,char param_2,char param_3)

{
  longlong *plVar1;
  CCNode *pCVar2;
  uint uVar3;
  CCString *this;
  char *pcVar4;
  CCSpriteFrameCache *this_00;
  CCSpriteFrame *pCVar5;
  undefined8 *puVar6;
  char ****ppppcVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined2 local_88;
  undefined1 local_86;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  char ***local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1406ba040 ^ (ulonglong)auStack_a8;
  if (*(char *)((longlong)param_1 + 0x9bd) != param_2) {
    param_1[0xfb] = param_1[0x154];
    *(char *)((longlong)param_1 + 0x9bd) = param_2;
    plVar1 = (longlong *)param_1[0xab];
    if (param_2 == '\0') {
      (**(code **)(*plVar1 + 0x208))(plVar1,param_1[0x17f],0);
      (**(code **)(*(longlong *)param_1[0xe7] + 0x140))((longlong *)param_1[0xe7],1);
      lVar10 = *(longlong *)(param_1[0x114] + 0x298);
      FUN_140074450(lVar10);
      pCVar2 = *(CCNode **)(*(longlong *)(lVar10 + 0x140) + 0x2b0);
      if (pCVar2 != (CCNode *)0x0) {
        cocos2d::CCNode::stopAllActions(pCVar2);
      }
      pCVar2 = *(CCNode **)(*(longlong *)(lVar10 + 0x140) + 0x2a8);
      if (pCVar2 != (CCNode *)0x0) {
        cocos2d::CCNode::stopAllActions(pCVar2);
      }
      if ((*(float *)(param_1 + 0x13e) == DAT_140622c24) || ((char)param_1[0x157] == '\0')) {
        uVar9 = (undefined4)param_1[0xc4];
      }
      else {
        uVar9 = 0;
      }
      FUN_14039dc50(param_1,uVar9);
    }
    else {
      (**(code **)(*plVar1 + 0x1b8))(plVar1,param_1[0x17f],2);
      FUN_14039be30(param_1,0x1b);
      param_1[0x106] = 0x3ff8000000000000;
      *(undefined2 *)(param_1 + 0xe5) = 0;
      *(undefined1 *)(param_1 + 0xcd) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      (**(code **)(*param_1 + 0x150))(param_1,0);
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_78 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_78);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      uVar3 = (int)DAT_1406c2ed8[0x60] - *(int *)((longlong)DAT_1406c2ed8 + 0x304);
      uVar8 = 0x44;
      if ((int)uVar3 < 0x44) {
        uVar8 = uVar3;
      }
      if ((int)uVar8 < 1) {
        uVar8 = 1;
      }
      this = cocos2d::CCString::createWithFormat("robot_%02d_01_001.png",(ulonglong)uVar8);
      pcVar4 = cocos2d::CCString::getCString(this);
      local_50 = (char ***)0x0;
      uStack_48 = 0;
      local_40 = 0;
      local_38 = 0;
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (pcVar4[lVar10] != '\0');
      FUN_14003a930(&local_50,pcVar4);
      ppppcVar7 = &local_50;
      if (0xf < local_38) {
        ppppcVar7 = (char ****)local_50;
      }
      lVar10 = *(longlong *)param_1[0xe7];
      this_00 = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
      pCVar5 = cocos2d::CCSpriteFrameCache::spriteFrameByName(this_00,(char *)ppppcVar7);
      (**(code **)(lVar10 + 0x3e0))(param_1[0xe7],pCVar5);
      if (((char)param_1[0x16e] == '\0') || ((double)param_1[0x15f] != 0.0)) {
        puVar6 = (undefined8 *)FUN_14003bdb0(&local_70,param_1 + 0x17a);
      }
      else {
        uStack_68 = 0;
        local_60 = 6;
        local_58 = 0xf;
        local_70 = (ulonglong)CONCAT24(DAT_14057db84,DAT_14057db80);
        puVar6 = &local_70;
      }
      FUN_140040cf0(param_1[0x114],puVar6);
      (**(code **)(*(longlong *)param_1[0xe7] + 0x140))((longlong *)param_1[0xe7],0);
      if (param_3 == '\0') {
        local_88 = 0x32ff;
        local_86 = 0x32;
        FUN_140397760(param_1,&local_88,DAT_1406231e0);
      }
      FUN_1403a0220(param_1);
      if (0xf < local_38) {
        ppppcVar7 = (char ****)local_50;
        if ((0xfff < local_38 + 1) &&
           (ppppcVar7 = (char ****)local_50[-1],
           0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)ppppcVar7)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(ppppcVar7);
      }
    }
    FUN_1403a02a0(param_1);
    *(undefined2 *)(param_1 + 0xe5) = 0;
    *(undefined1 *)(param_1 + 0xcd) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    if (param_2 != '\0') {
      FUN_140398860(param_1);
      FUN_1403961c0(param_1);
    }
  }
  return;
}

