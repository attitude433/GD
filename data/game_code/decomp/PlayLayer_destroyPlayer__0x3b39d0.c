// Function: FUN_1403b39d0
// Original target: PlayLayer_destroyPlayer @ 0x3b39d0
// Ghidra entry: 1403b39d0
// Signature: undefined FUN_1403b39d0(void)


void FUN_1403b39d0(CCNode *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  char cVar8;
  undefined1 uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  ChannelControl *this;
  undefined8 uVar13;
  CCCallFunc *pCVar14;
  CCDelayTime *pCVar15;
  CCSequence *pCVar16;
  CCNode *this_00;
  CCDirector *pCVar17;
  CCPoint *pCVar18;
  CCMoveTo *pCVar19;
  CCEaseElasticOut *pCVar20;
  CCFadeTo *pCVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  int iVar28;
  char cVar29;
  CCNode *pCVar30;
  int iVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined8 local_res8;
  char *local_res10;
  uint in_stack_ffffffffffffff28;
  ulonglong in_stack_ffffffffffffff30;
  char local_b8 [8];
  char local_b0 [4];
  char local_ac [2];
  undefined2 local_aa;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0xda0);
  }
  if (*(char *)(*(longlong *)(param_1 + 0xda0) + 0xa2a) != '\0') {
    return;
  }
  if (param_1[0x324a] != (CCNode)0x0) {
    return;
  }
  if (((param_3 != 0) && (*(longlong *)(param_1 + 0x3788) != 0)) &&
     (*(int *)(param_3 + 0x39c) == *(int *)(*(longlong *)(param_1 + 0x3788) + 0x39c))) {
    param_1[0x37c0] = (CCNode)0x1;
    return;
  }
  cocos2d::CCNode::stopActionByTag(param_1,0x14);
  fVar3 = DAT_140622c24;
  (**(code **)(*(longlong *)param_1 + 0x4f0))(param_1,DAT_140622c24);
  FUN_1403b9de0(param_1);
  lVar25 = *(longlong *)(param_1 + 0x950);
  iVar31 = 0;
  if ((*(longlong *)(lVar25 + 0x140) != 0) &&
     (lVar24 = *(longlong *)(lVar25 + 0x260), lVar23 = *(longlong *)(lVar25 + 0x268) - lVar24,
     lVar27 = lVar23 >> 0x3f, lVar23 / 0x30 + lVar27 != lVar27)) {
    lVar27 = 0;
    do {
      if (*(char *)(lVar27 + lVar24) == '\0') {
        FUN_14024b270(local_b8,lVar24 + 0x18 + lVar27);
        in_stack_ffffffffffffff30 =
             CONCAT44((int)(in_stack_ffffffffffffff30 >> 0x20),
                      *(undefined4 *)(lVar27 + 0x10 + lVar24));
        in_stack_ffffffffffffff28 = *(uint *)(lVar27 + 0xc + lVar24);
        (**(code **)**(undefined8 **)(lVar25 + 0x140))
                  (*(undefined8 **)(lVar25 + 0x140),*(undefined4 *)(lVar27 + 4 + lVar24),
                   *(undefined1 *)(lVar27 + 8 + lVar24),local_b8,in_stack_ffffffffffffff28,
                   in_stack_ffffffffffffff30);
        FUN_14005e430(local_b8);
      }
      iVar31 = iVar31 + 1;
      lVar27 = lVar27 + 0x30;
      lVar24 = *(longlong *)(lVar25 + 0x260);
    } while ((ulonglong)(longlong)iVar31 <
             (ulonglong)((*(longlong *)(lVar25 + 0x268) - lVar24) / 0x30));
  }
  iVar31 = 0;
  *(undefined4 *)(param_1 + 0x86c) = 0;
  if (param_1[0x31f0] == (CCNode)0x0) {
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      local_res8 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    cVar8 = FUN_140183110(DAT_1406c2ed8,&DAT_140562948);
    if (cVar8 == '\0') {
      FUN_14023bc50(param_1,DAT_140622a50,fVar3,0);
    }
  }
  param_1[0x3248] = (CCNode)0x1;
  if (param_1[0x38e9] == (CCNode)0x0) {
    iVar22 = *(int *)(*(longlong *)(param_1 + 0x878) + 0x148) -
             *(int *)(*(longlong *)(param_1 + 0x878) + 0x14c);
    if (((iVar22 == 1) || (iVar22 == 0x3e9)) &&
       ((*(char *)(*(longlong *)(param_1 + 0xda0) + 0xa88) == '\0' &&
        (1 < *(int *)(param_1 + 0x3084))))) {
      FUN_1403b4770(param_1);
    }
    if (((param_1[0x38e9] == (CCNode)0x0) &&
        (((iVar22 = *(int *)(*(longlong *)(param_1 + 0x878) + 0x148) -
                    *(int *)(*(longlong *)(param_1 + 0x878) + 0x14c), iVar22 == 3 ||
          (iVar22 == 0x3eb)) && (*(char *)(*(longlong *)(param_1 + 0xda0) + 0xa89) == '\0')))) &&
       (1 < *(int *)(param_1 + 0x3084))) {
      FUN_1403b4770(param_1);
    }
  }
  param_1[0x324a] = (CCNode)0x1;
  if ((param_1[0x3782] != (CCNode)0x0) &&
     (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x3770) + 0x148))(), cVar8 == '\0')) {
    FUN_1403a7900(param_1);
  }
  FUN_140397d40(param_2,0);
  if (param_1[0x422] != (CCNode)0x0) {
    lVar25 = *(longlong *)(param_1 + 0xda0);
    if (*(int *)(param_2 + 0x39c) == *(int *)(lVar25 + 0x39c)) {
      lVar25 = *(longlong *)(param_1 + 0xda8);
    }
    FUN_140216e80(param_1,lVar25);
    FUN_140397d40(lVar25,1);
  }
  bVar1 = false;
  local_res8 = local_res8 & 0xffffffffffffff00;
  iVar28 = 0;
  iVar12 = 0;
  fVar32 = (float)FUN_1403b3950(param_1);
  fVar32 = floorf(fVar32);
  iVar22 = (int)fVar32;
  if ((int)fVar32 < 0) {
    iVar22 = 0;
  }
  if (99 < iVar22) {
    iVar22 = 99;
  }
  bVar4 = false;
  iVar11 = iVar31;
  if ((param_1[0x3230] == (CCNode)0x0) && (param_1[0x309e] == (CCNode)0x0)) {
    bVar4 = false;
    if (param_1[0x31f0] == (CCNode)0x0) {
      lVar25 = *(longlong *)(param_1 + 0x878);
      bVar1 = *(int *)(lVar25 + 0x330) - *(int *)(lVar25 + 0x32c) < iVar22;
      if (*(int *)(lVar25 + 0x334) - *(int *)(lVar25 + 0x338) < iVar22) {
        bVar4 = true;
      }
    }
    if ((((param_1[0x397c] != (CCNode)0x0) && (param_1[0x31f0] == (CCNode)0x0)) && (!bVar1)) &&
       ((!bVar4 &&
        (*(int *)(*(longlong *)(param_1 + 0x878) + 0x340) -
         *(int *)(*(longlong *)(param_1 + 0x878) + 0x344) < iVar22)))) {
      bVar1 = true;
      local_res8 = CONCAT71(local_res8._1_7_,1);
    }
    dVar2 = (double)FUN_14003cf30();
    in_stack_ffffffffffffff28 =
         (uint)((dVar2 - *(double *)(param_1 + 0x39d8)) - *(double *)(param_1 + 0x39e0));
    in_stack_ffffffffffffff30 = CONCAT71((int7)(in_stack_ffffffffffffff30 >> 8),param_1[0x37c0]);
    uVar33 = FUN_14016c8b0(*(undefined8 *)(param_1 + 0x878),iVar22,param_1[0x31f0],
                           *(undefined4 *)(param_1 + 0x3080),in_stack_ffffffffffffff28,
                           in_stack_ffffffffffffff30);
    if (*(int *)(*(longlong *)(param_1 + 0x878) + 0x454) == 1) {
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_res10 = (char *)FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res10);
        uVar33 = (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      FUN_14017d610(uVar33,*(int *)(*(longlong *)(param_1 + 0x878) + 0x148) -
                           *(int *)(*(longlong *)(param_1 + 0x878) + 0x14c),iVar22,param_1[0x31f0]);
    }
    bVar4 = bVar1;
    iVar31 = iVar28;
    iVar11 = iVar12;
    if (((param_1[0x31f0] == (CCNode)0x0) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x878) + 0x388) -
             *(int *)(*(longlong *)(param_1 + 0x878) + 0x38c))) && (param_1[0x309e] == (CCNode)0x0))
    {
      if (DAT_1406c2ee8 == (longlong *)0x0) {
        local_res10 = (char *)FUN_1404d0770(0x3e0);
        DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(local_res10);
        (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
      }
      pCVar30 = param_1 + 0x878;
      iVar31 = FUN_1401e0960(DAT_1406c2ee8,*(longlong *)pCVar30);
      lVar25 = *(longlong *)pCVar30;
      if ((0 < *(int *)(lVar25 + 0x36c) - *(int *)(lVar25 + 0x370)) ||
         (*(char *)(lVar25 + 0x2c9) != '\0')) {
        if (DAT_1406c2ee8 == (longlong *)0x0) {
          local_res10 = (char *)FUN_1404d0770(0x3e0);
          DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(local_res10);
          (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
        }
        iVar11 = FUN_1401e1140(DAT_1406c2ee8,*(longlong *)pCVar30);
      }
    }
  }
  iVar22 = iVar11 + iVar31;
  if (param_1[0x31f0] == (CCNode)0x0) {
    fVar32 = (float)FUN_1403b3950(param_1);
    fVar32 = floorf(fVar32);
    *(int *)(param_1 + 0x3980) = (int)fVar32;
  }
  if (param_1[0x516] == (CCNode)0x0) {
    if ((param_1[0x31f0] == (CCNode)0x0) || (param_1[0x31f1] != (CCNode)0x0)) {
      if (DAT_1406c2e88 == (longlong *)0x0) {
        local_res10 = (char *)FUN_1404d0770(0x888);
        DAT_1406c2e88 = (longlong *)FUN_140053100(local_res10);
        (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
      }
      plVar7 = DAT_1406c2e88;
      plVar26 = *(longlong **)DAT_1406c2e88[0x29];
      if (plVar26 != (longlong *)DAT_1406c2e88[0x29]) {
        do {
          if ((*(char *)((longlong)plVar26 + 0x49) == '\0') &&
             (this = (ChannelControl *)FUN_1400584b0(plVar7,(int)plVar26[3]),
             this != (ChannelControl *)0x0)) {
            FMOD::ChannelControl::setPaused(this,true);
          }
          plVar26 = (longlong *)*plVar26;
        } while (plVar26 != (longlong *)plVar7[0x29]);
      }
    }
    if (DAT_1406c2e88 == (longlong *)0x0) {
      local_res10 = (char *)FUN_1404d0770(0x888);
      DAT_1406c2e88 = (longlong *)FUN_140053100(local_res10);
      (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
    }
    FUN_1400598e0(DAT_1406c2e88);
  }
  if (param_1[0x51c] == (CCNode)0x0) {
    local_res10 = local_b8;
    local_aa = 0;
    local_a8 = 0xe;
    local_a0 = 0xf;
    local_b8[0] = s_explode_11_ogg_140532e50[0];
    local_b8[1] = s_explode_11_ogg_140532e50[1];
    local_b8[2] = s_explode_11_ogg_140532e50[2];
    local_b8[3] = s_explode_11_ogg_140532e50[3];
    local_b8[4] = s_explode_11_ogg_140532e50[4];
    local_b8[5] = s_explode_11_ogg_140532e50[5];
    local_b8[6] = s_explode_11_ogg_140532e50[6];
    local_b8[7] = s_explode_11_ogg_140532e50[7];
    local_b0[0] = s_explode_11_ogg_140532e50[8];
    local_b0[1] = s_explode_11_ogg_140532e50[9];
    local_b0[2] = s_explode_11_ogg_140532e50[10];
    local_b0[3] = s_explode_11_ogg_140532e50[0xb];
    local_ac[0] = s_explode_11_ogg_140532e50[0xc];
    local_ac[1] = s_explode_11_ogg_140532e50[0xd];
    if (DAT_1406c2e88 == (longlong *)0x0) {
      uVar13 = FUN_1404d0770(0x888);
      DAT_1406c2e88 = (longlong *)FUN_140053100(uVar13);
      (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
    }
    in_stack_ffffffffffffff28 = DAT_140622b5c;
    FUN_140056e40(DAT_1406c2e88,local_b8,fVar3,0,DAT_140622b5c);
  }
  if (DAT_1406c2ed8 == (longlong *)0x0) {
    local_res10 = (char *)FUN_1404d0770(0x668);
    DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res10);
    (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
  }
  cVar8 = FUN_140183110(DAT_1406c2ed8,&DAT_14055d65c);
  if ((cVar8 == '\0') && (param_1[0x31f0] == (CCNode)0x0)) {
    if (((bVar4) || (0 < iVar22)) && (0 < iVar11 + iVar31)) {
      FUN_1403a9550(param_1,!bVar4,iVar31,iVar11,in_stack_ffffffffffffff28 & 0xffffff00,
                    in_stack_ffffffffffffff30 & 0xffffffffffffff00,0);
    }
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      local_res8 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    plVar26 = *(longlong **)(*(longlong *)(DAT_1406c2ed8[0x41] + 0x3540) + 0x238);
    (**(code **)(*plVar26 + 0x398))(plVar26,0);
    fVar3 = DAT_140622b08;
    if (DAT_140622b08 < *(float *)(param_1 + 0x518)) {
      fVar3 = *(float *)(param_1 + 0x518);
    }
    pCVar14 = cocos2d::CCCallFunc::create((CCObject *)param_1,FUN_1403ac900);
    pCVar15 = cocos2d::CCDelayTime::create(fVar3);
    pCVar16 = cocos2d::CCSequence::create((CCFiniteTimeAction *)pCVar15,pCVar14,0);
    goto LAB_1403b46f7;
  }
  param_1[0x397e] = (CCNode)0x1;
  if (DAT_1406c2ed8 == (longlong *)0x0) {
    local_res10 = (char *)FUN_1404d0770(0x668);
    DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res10);
    (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
  }
  cVar8 = FUN_140183110(DAT_1406c2ed8,&DAT_1405c2d9c);
  fVar32 = fVar3;
  if (cVar8 != '\0') {
    fVar32 = DAT_140622b08;
  }
  fVar34 = *(float *)(param_1 + 0x518);
  if (*(float *)(param_1 + 0x518) <= fVar32) {
    fVar34 = fVar32;
  }
  if ((bVar4) || (0 < iVar22)) {
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      local_res10 = (char *)FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res10);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    cVar8 = FUN_1401834a0(DAT_1406c2ed8,&DAT_140544450);
    if (cVar8 != '\0') goto LAB_1403b432a;
    if (DAT_1406c2ee8 == (longlong *)0x0) {
      local_res10 = (char *)FUN_1404d0770(0x3e0);
      DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(local_res10);
      (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
    }
    iVar12 = FUN_1401d51b0(DAT_1406c2ee8,&DAT_1405441b4);
    if (iVar12 < 0x1f5) goto LAB_1403b432a;
    cVar8 = '\x01';
  }
  else {
LAB_1403b432a:
    cVar8 = '\0';
  }
  cVar29 = cVar8;
  if ((bVar4) || (0 < iVar22)) {
    if (DAT_1406c2ee8 == (longlong *)0x0) {
      local_res10 = (char *)FUN_1404d0770(0x3e0);
      DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(local_res10);
      (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
    }
    uVar9 = FUN_1401f19f0(DAT_1406c2ee8);
    in_stack_ffffffffffffff28 = CONCAT31((int3)(in_stack_ffffffffffffff28 >> 8),uVar9);
    FUN_1403a9550(param_1,!bVar4,iVar31,iVar11,in_stack_ffffffffffffff28,cVar8,local_res8._0_1_);
    if (fVar34 <= DAT_140622cd8) {
      fVar34 = DAT_140622cd8;
    }
    if (0 < iVar11 + iVar31) {
      cVar29 = '\x01';
    }
  }
  if (cVar8 != '\0') {
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      local_res8 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    FUN_140183340(DAT_1406c2ed8,&DAT_140544450,1);
    local_res8._3_5_ = (undefined5)((ulonglong)&local_98 >> 0x18);
    local_res8._0_3_ = CONCAT12(DAT_140529bba,DAT_140529bb8);
    local_98 = (char *)0x0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0xf;
    local_98 = (char *)FUN_14003aa10(0x50);
    uVar13 = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250._8_8_;
    local_88 = 0x47;
    local_80 = 0x4f;
    *(undefined8 *)local_98 = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250._0_8_;
    *(undefined8 *)(local_98 + 8) = uVar13;
    uVar13 = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250._24_8_;
    *(undefined8 *)(local_98 + 0x10) = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250._16_8_;
    *(undefined8 *)(local_98 + 0x18) = uVar13;
    uVar13 = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250._40_8_;
    *(undefined8 *)(local_98 + 0x20) = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250._32_8_;
    *(undefined8 *)(local_98 + 0x28) = uVar13;
    uVar6 = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250._60_4_;
    uVar5 = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250._56_4_;
    uVar33 = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250._52_4_;
    *(undefined4 *)(local_98 + 0x30) = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250._48_4_;
    *(undefined4 *)(local_98 + 0x34) = uVar33;
    *(undefined4 *)(local_98 + 0x38) = uVar5;
    *(undefined4 *)(local_98 + 0x3c) = uVar6;
    *(undefined4 *)(local_98 + 0x40) = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250._64_4_;
    *(undefined2 *)(local_98 + 0x44) = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250._68_2_;
    local_98[0x46] = s_I_see_you_have_a_lot_of_<cl>orbs_1405c9250[0x46];
    local_98[0x47] = '\0';
    local_aa = 0;
    local_a8 = 0xe;
    local_a0 = 0xf;
    local_b8[0] = s_The_Shopkeeper_14053de20[0];
    local_b8[1] = s_The_Shopkeeper_14053de20[1];
    local_b8[2] = s_The_Shopkeeper_14053de20[2];
    local_b8[3] = s_The_Shopkeeper_14053de20[3];
    local_b8[4] = s_The_Shopkeeper_14053de20[4];
    local_b8[5] = s_The_Shopkeeper_14053de20[5];
    local_b8[6] = s_The_Shopkeeper_14053de20[6];
    local_b8[7] = s_The_Shopkeeper_14053de20[7];
    local_b0[0] = s_The_Shopkeeper_14053de20[8];
    local_b0[1] = s_The_Shopkeeper_14053de20[9];
    local_b0[2] = s_The_Shopkeeper_14053de20[10];
    local_b0[3] = s_The_Shopkeeper_14053de20[0xb];
    local_ac[0] = s_The_Shopkeeper_14053de20[0xc];
    local_ac[1] = s_The_Shopkeeper_14053de20[0xd];
    uVar13 = FUN_1400d32d0(local_b8,&local_98,5,fVar3,in_stack_ffffffffffffff28 & 0xffffff00,
                           &local_res8);
    this_00 = (CCNode *)FUN_1400d3490(uVar13,0,1);
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,this_00,100);
    pCVar30 = this_00 + 0x198;
    (**(code **)(*(longlong *)pCVar30 + 0x28))(pCVar30,0);
    *(CCNode **)(this_00 + 0x270) = param_1 + 0x37b0;
    pCVar17 = cocos2d::CCDirector::sharedDirector();
    cocos2d::CCDirector::getWinSize(pCVar17);
    lVar25 = **(longlong **)(this_00 + 0x230);
    uVar13 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&local_res10,(float)local_res8 * DAT_140622b08,
                        (local_res8._4_4_ - DAT_1406231e0) - DAT_140623120);
    (**(code **)(lVar25 + 0xb8))(*(undefined8 *)(this_00 + 0x230),uVar13);
    (**(code **)(*(longlong *)this_00 + 0x140))(this_00,1);
    dVar2 = (double)FUN_14003cf30();
    *(float *)(this_00 + 0x228) = (float)dVar2;
    pCVar18 = (CCPoint *)(**(code **)(**(longlong **)(this_00 + 0x230) + 200))();
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,pCVar18);
    lVar25 = **(longlong **)(this_00 + 0x230);
    pCVar17 = cocos2d::CCDirector::sharedDirector();
    fVar32 = cocos2d::CCDirector::getScreenTop(pCVar17);
    uVar13 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&local_res10,(float)local_res8,fVar32 + DAT_1406231e0 + fVar3);
    (**(code **)(lVar25 + 0xb8))(*(undefined8 *)(this_00 + 0x230),uVar13);
    pCVar19 = cocos2d::CCMoveTo::create(DAT_140622b08,(CCPoint *)&local_res8);
    pCVar20 = cocos2d::CCEaseElasticOut::create((CCActionInterval *)pCVar19,DAT_140622b38);
    cocos2d::CCNode::runAction(*(CCNode **)(this_00 + 0x230),(CCAction *)pCVar20);
    bVar10 = (**(code **)(*(longlong *)pCVar30 + 0x20))(pCVar30);
    if (0.0 < (float)bVar10) {
      (**(code **)(*(longlong *)pCVar30 + 0x28))(pCVar30,0);
      pCVar21 = cocos2d::CCFadeTo::create(DAT_140622a38,(uchar)(int)(float)bVar10);
      cocos2d::CCNode::runAction(this_00,(CCAction *)pCVar21);
    }
  }
  cocos2d::CCNode::stopActionByTag(param_1,0x10);
  if (cVar29 != '\0') {
    return;
  }
  pCVar14 = cocos2d::CCCallFunc::create((CCObject *)param_1,(_func_void *)&LAB_1403b8cf0);
  pCVar15 = cocos2d::CCDelayTime::create(fVar34);
  pCVar16 = cocos2d::CCSequence::create((CCFiniteTimeAction *)pCVar15,pCVar14,0);
  (**(code **)(*(longlong *)pCVar16 + 0x40))(pCVar16,0x10);
LAB_1403b46f7:
  cocos2d::CCNode::runAction(param_1,(CCAction *)pCVar16);
  return;
}

