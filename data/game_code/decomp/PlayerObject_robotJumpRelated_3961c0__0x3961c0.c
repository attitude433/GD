// PlayerObject_robotJumpRelated_3961c0 @ 0x3961c0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403961c0(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  CCRotateBy *pCVar6;
  CCRepeatForever *pCVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  CCPoint local_res8 [8];
  char local_48 [8];
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (*(char *)((longlong)param_1 + 0x9e4) == '\0') {
    return;
  }
  cocos2d::CCNode::stopActionByTag((CCNode *)param_1[0xe7],0xc);
  cocos2d::CCNode::stopActionByTag((CCNode *)param_1[0xea],0xc);
  (**(code **)(*(longlong *)param_1[0xe7] + 0x150))((longlong *)param_1[0xe7],0);
  (**(code **)(*(longlong *)param_1[0xea] + 0x150))((longlong *)param_1[0xea],0);
  (**(code **)(*param_1 + 0x150))(param_1);
  cocos2d::CCNode::stopAllActions((CCNode *)param_1[0xcc]);
  fVar11 = DAT_140622c24;
  uVar3 = DAT_140622bd8;
  lVar1 = *(longlong *)param_1[0xcc];
  if (*(char *)((longlong)param_1 + 0x9b9) == '\0') {
    if (*(char *)((longlong)param_1 + 0x9ba) == '\0') {
      if (*(char *)((longlong)param_1 + 0x9bd) != '\0') {
        uVar4 = cocos2d::CCPoint::CCPoint(local_res8,DAT_140622c24,0.0);
        (**(code **)(lVar1 + 0xb8))(param_1[0xcc],uVar4);
        (**(code **)(*(longlong *)param_1[0xcc] + 0x78))((longlong *)param_1[0xcc],uVar3);
        (**(code **)(*(longlong *)param_1[0xcc] + 0x88))((longlong *)param_1[0xcc],DAT_140622bc4);
        local_38 = 9;
        local_48[0] = s_fall_loop_1405c7a28[0];
        local_48[1] = s_fall_loop_1405c7a28[1];
        local_48[2] = s_fall_loop_1405c7a28[2];
        local_48[3] = s_fall_loop_1405c7a28[3];
        local_48[4] = s_fall_loop_1405c7a28[4];
        local_48[5] = s_fall_loop_1405c7a28[5];
        local_48[6] = s_fall_loop_1405c7a28[6];
        local_48[7] = s_fall_loop_1405c7a28[7];
        local_30 = 0xf;
        uStack_40 = (ulonglong)(byte)s_fall_loop_1405c7a28[8];
        FUN_140040cf0(param_1[0x114],local_48);
        goto LAB_14039649e;
      }
      if (*(char *)((longlong)param_1 + 0x9be) != '\0') {
        uVar4 = cocos2d::CCPoint::CCPoint(local_res8,DAT_140622c24,0.0);
        (**(code **)(lVar1 + 0xb8))(param_1[0xcc],uVar4);
        (**(code **)(*(longlong *)param_1[0xcc] + 0x78))((longlong *)param_1[0xcc],DAT_140622bf4);
        (**(code **)(*(longlong *)param_1[0xcc] + 0x88))((longlong *)param_1[0xcc],DAT_140622ba4);
        local_38 = 9;
        local_48[0] = s_fall_loop_1405c7a28[0];
        local_48[1] = s_fall_loop_1405c7a28[1];
        local_48[2] = s_fall_loop_1405c7a28[2];
        local_48[3] = s_fall_loop_1405c7a28[3];
        local_48[4] = s_fall_loop_1405c7a28[4];
        local_48[5] = s_fall_loop_1405c7a28[5];
        local_48[6] = s_fall_loop_1405c7a28[6];
        local_48[7] = s_fall_loop_1405c7a28[7];
        local_30 = 0xf;
        uStack_40 = (ulonglong)(byte)s_fall_loop_1405c7a28[8];
        FUN_140040cf0(param_1[0x115],local_48);
        goto LAB_14039649e;
      }
      uVar4 = cocos2d::CCPoint::CCPoint(local_res8,0.0,0.0);
      (**(code **)(lVar1 + 0xb8))(param_1[0xcc],uVar4);
      (**(code **)(*(longlong *)param_1[0xcc] + 0x78))((longlong *)param_1[0xcc],uVar3);
      uVar9 = DAT_140622ba4;
    }
    else {
      uVar4 = cocos2d::CCPoint::CCPoint(local_res8,0.0,0.0);
      (**(code **)(lVar1 + 0xb8))(param_1[0xcc],uVar4);
      (**(code **)(*(longlong *)param_1[0xcc] + 0x78))((longlong *)param_1[0xcc],DAT_140622bf4);
      uVar9 = uVar3;
    }
  }
  else {
    uVar4 = cocos2d::CCPoint::CCPoint(local_res8,0.0,DAT_140623730);
    (**(code **)(lVar1 + 0xb8))(param_1[0xcc],uVar4);
    (**(code **)(*(longlong *)param_1[0xcc] + 0x78))((longlong *)param_1[0xcc],fVar11);
    uVar9 = DAT_140622bc4;
  }
  (**(code **)(*(longlong *)param_1[0xcc] + 0x88))((longlong *)param_1[0xcc],uVar9);
LAB_14039649e:
  if ((((*(char *)((longlong)param_1 + 0x9b9) == '\0') &&
       (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
      (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
     (((*(char *)((longlong)param_1 + 0x9c4) == '\0' &&
       (*(char *)((longlong)param_1 + 0x9bd) == '\0')) &&
      (*(char *)((longlong)param_1 + 0x9be) == '\0')))) {
    (**(code **)(*(longlong *)param_1[0xe7] + 0xa0))((longlong *)param_1[0xe7],uVar3);
    (**(code **)(*(longlong *)param_1[0xea] + 0xa0))((longlong *)param_1[0xea],uVar3);
    fVar2 = DAT_140622aa0;
    if (*(char *)((longlong)param_1 + 0x9c3) != *(char *)((longlong)param_1 + 0x9bf)) {
      fVar11 = DAT_1406236f0;
    }
    fVar11 = fVar11 * _DAT_140623430 * *(float *)((longlong)param_1 + 0xb84);
    if ((char)param_1[0x16e] != '\0') {
      pfVar5 = (float *)cocos2d::CCPoint::CCPoint
                                  (local_res8,(float)(double)param_1[0xae],
                                   (float)(double)param_1[0xaf]);
      fVar10 = *pfVar5 * *pfVar5 + pfVar5[1] * pfVar5[1];
      if (fVar10 < 0.0) {
        fVar10 = sqrtf(fVar10);
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      fVar8 = DAT_140622e58;
      if (fVar10 <= DAT_140623104) {
        fVar8 = (fVar10 / DAT_140623104) * DAT_140622d80 + fVar2;
      }
      fVar11 = fVar11 * fVar8;
    }
    pCVar6 = cocos2d::CCRotateBy::create(fVar2,fVar11);
    pCVar7 = cocos2d::CCRepeatForever::create((CCActionInterval *)pCVar6);
    (**(code **)(*(longlong *)pCVar7 + 0x40))(pCVar7,0xc);
    cocos2d::CCNode::runAction((CCNode *)param_1[0xe7],(CCAction *)pCVar7);
    pCVar6 = cocos2d::CCRotateBy::create(fVar2,fVar11);
    pCVar7 = cocos2d::CCRepeatForever::create((CCActionInterval *)pCVar6);
    (**(code **)(*(longlong *)pCVar7 + 0x40))(pCVar7,0xc);
    cocos2d::CCNode::runAction((CCNode *)param_1[0xea],(CCAction *)pCVar7);
  }
  return;
}

