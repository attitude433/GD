// PlayerObject_toggleSpiderMode @ 0x39ba70
// Function: FUN_14039ba70


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14039ba70(longlong *param_1,char param_2,char param_3)

{
  longlong *plVar1;
  CCNode *pCVar2;
  uint uVar3;
  CCString *this;
  char *pcVar4;
  CCSpriteFrameCache *this_00;
  CCSpriteFrame *pCVar5;
  char ****ppppcVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  char ***local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1406ba040 ^ (ulonglong)auStack_98;
  if (*(char *)((longlong)param_1 + 0x9be) != param_2) {
    param_1[0xfb] = param_1[0x154];
    *(char *)((longlong)param_1 + 0x9be) = param_2;
    plVar1 = (longlong *)param_1[0xab];
    if (param_2 == '\0') {
      (**(code **)(*plVar1 + 0x208))(plVar1,param_1[0x180],0);
      (**(code **)(*(longlong *)param_1[0xe7] + 0x140))((longlong *)param_1[0xe7],1);
      lVar9 = *(longlong *)(param_1[0x115] + 0x298);
      FUN_140074450(lVar9);
      pCVar2 = *(CCNode **)(*(longlong *)(lVar9 + 0x140) + 0x2b0);
      if (pCVar2 != (CCNode *)0x0) {
        cocos2d::CCNode::stopAllActions(pCVar2);
      }
      pCVar2 = *(CCNode **)(*(longlong *)(lVar9 + 0x140) + 0x2a8);
      if (pCVar2 != (CCNode *)0x0) {
        cocos2d::CCNode::stopAllActions(pCVar2);
      }
      uVar8 = 0;
      if ((*(float *)(param_1 + 0x13e) == DAT_140622c24) || ((char)param_1[0x157] == '\0')) {
        uVar8 = (undefined4)param_1[0xc4];
      }
      FUN_14039dc50(param_1,uVar8);
      FUN_14039b2e0(param_1);
      FUN_1403a02a0(param_1);
      *(undefined2 *)(param_1 + 0xe5) = 0;
      *(undefined1 *)(param_1 + 0xcd) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x1b8))(plVar1,param_1[0x180],2);
      FUN_14039be30(param_1,0x21);
      *(undefined4 *)(param_1 + 0x156) = 0x41d80000;
      *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x41d80000;
      *(undefined4 *)(param_1 + 0x60) = 0x41d80000;
      param_1[0x106] = 0x3ff8000000000000;
      *(undefined2 *)(param_1 + 0xe5) = 0;
      *(undefined1 *)(param_1 + 0xcd) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      (**(code **)(*param_1 + 0x150))(param_1,0);
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_68 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_68);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      uVar3 = *(int *)((longlong)DAT_1406c2ed8 + 0x30c) - (int)DAT_1406c2ed8[0x62];
      uVar7 = 0x45;
      if ((int)uVar3 < 0x45) {
        uVar7 = uVar3;
      }
      if ((int)uVar7 < 1) {
        uVar7 = 1;
      }
      this = cocos2d::CCString::createWithFormat("spider_%02d_01_001.png",(ulonglong)uVar7);
      pcVar4 = cocos2d::CCString::getCString(this);
      local_40 = (char ***)0x0;
      uStack_38 = 0;
      local_30 = 0;
      local_28 = 0;
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (pcVar4[lVar9] != '\0');
      FUN_14003a930(&local_40,pcVar4);
      ppppcVar6 = &local_40;
      if (0xf < local_28) {
        ppppcVar6 = (char ****)local_40;
      }
      lVar9 = *(longlong *)param_1[0xe7];
      this_00 = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
      pCVar5 = cocos2d::CCSpriteFrameCache::spriteFrameByName(this_00,(char *)ppppcVar6);
      (**(code **)(lVar9 + 0x3e0))(param_1[0xe7],pCVar5);
      if (((char)param_1[0x16e] == '\0') || ((double)param_1[0x15f] != 0.0)) {
        FUN_1403a14d0(param_1);
      }
      else {
        uStack_58 = 0;
        local_50 = 6;
        local_48 = 0xf;
        local_60 = (ulonglong)CONCAT24(DAT_14057db84,DAT_14057db80);
        FUN_140040cf0(param_1[0x115],&local_60);
      }
      (**(code **)(*(longlong *)param_1[0xe7] + 0x140))((longlong *)param_1[0xe7],0);
      if (param_3 == '\0') {
        local_78 = 0x32ff;
        local_76 = 0x32;
        FUN_140397760(param_1,&local_78,DAT_1406231e0);
      }
      FUN_1403a0220(param_1);
      if (0xf < local_28) {
        ppppcVar6 = (char ****)local_40;
        if ((0xfff < local_28 + 1) &&
           (ppppcVar6 = (char ****)local_40[-1],
           0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)ppppcVar6)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(ppppcVar6);
      }
      FUN_1403a02a0(param_1);
      *(undefined2 *)(param_1 + 0xe5) = 0;
      *(undefined1 *)(param_1 + 0xcd) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      FUN_140398860(param_1);
      FUN_1403961c0(param_1);
    }
  }
  return;
}

