// LevelEditorLayer_getObjectRect @ 0x2d5800
// Body: 1179 bytes


CCRect * FUN_1402d5800(longlong param_1,CCRect *param_2,CCNode *param_3)

{
  CCSize *pCVar1;
  CCRect *pCVar2;
  longlong lVar3;
  longlong lVar4;
  CCPoint *pCVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float local_res8;
  float local_resc;
  float local_res18;
  float local_res1c;
  float local_88;
  float local_84;
  CCSize local_80 [4];
  float local_7c;
  float local_78 [2];
  CCSize local_70 [56];
  
  *(undefined1 *)(param_1 + 0x389d) = 0;
  cocos2d::CCSize::CCSize((CCSize *)&local_res8);
  cocos2d::CCSize::CCSize((CCSize *)&local_88);
  if (param_3[0x4c5] == (CCNode)0x0) {
    if (param_3[0x4c4] != (CCNode)0x0) {
      pCVar2 = (CCRect *)(**(code **)(*(longlong *)param_3 + 0x490))(param_3);
      cocos2d::CCRect::CCRect(param_2,pCVar2);
      return param_2;
    }
    if ((param_3[0x510] == (CCNode)0x0) &&
       (((*(longlong *)(param_3 + 0x380) != 0 || (param_3[0x37e] != (CCNode)0x0)) ||
        (param_3[0x37f] != (CCNode)0x0)))) {
      pCVar1 = (CCSize *)(**(code **)(*(longlong *)param_3 + 0x130))(param_3);
      cocos2d::CCSize::operator=((CCSize *)&local_88,pCVar1);
      lVar3 = (**(code **)(*(longlong *)param_3 + 0x130))(param_3);
      lVar4 = *(longlong *)param_3;
      fVar8 = *(float *)(lVar3 + 4);
      pfVar7 = (float *)(**(code **)(lVar4 + 0x130))(param_3);
      fVar9 = (float)(**(code **)(lVar4 + 0x518))(param_3);
      fVar10 = (float)(**(code **)(lVar4 + 0x510))(param_3);
      pCVar1 = (CCSize *)cocos2d::CCSize::CCSize(local_70,fVar10 * *pfVar7,fVar9 * fVar8);
      cocos2d::CCSize::operator=((CCSize *)&local_res8,pCVar1);
    }
    else {
      cocos2d::CCSize::operator=((CCSize *)&local_88,(CCSize *)(param_3 + 0x1b0));
      fVar9 = (float)(**(code **)(*(longlong *)param_3 + 0x518))(param_3);
      fVar8 = *(float *)(param_3 + 0x1b4);
      fVar10 = (float)(**(code **)(*(longlong *)param_3 + 0x510))(param_3);
      pCVar1 = (CCSize *)
               cocos2d::CCSize::CCSize(local_70,fVar10 * *(float *)(param_3 + 0x1b0),fVar9 * fVar8);
      cocos2d::CCSize::operator=((CCSize *)&local_res8,pCVar1);
    }
  }
  else {
    cocos2d::CCSize::CCSize(local_80,(CCSize *)(param_3 + 0x4c8));
    cocos2d::CCSize::operator=((CCSize *)&local_88,local_80);
    cocos2d::CCSize::CCSize(local_80,(CCSize *)(param_3 + 0x4c8));
    cocos2d::CCSize::CCSize((CCSize *)local_78,(CCSize *)(param_3 + 0x4c8));
    fVar8 = (float)(**(code **)(*(longlong *)param_3 + 0x518))(param_3);
    fVar9 = (float)(**(code **)(*(longlong *)param_3 + 0x510))(param_3);
    pCVar1 = (CCSize *)cocos2d::CCSize::CCSize(local_70,fVar9 * local_78[0],fVar8 * local_7c);
    cocos2d::CCSize::operator=((CCSize *)&local_res8,pCVar1);
  }
  fVar8 = DAT_14062304c;
  if (DAT_14062304c <= local_res8) {
    fVar8 = local_res8;
  }
  fVar9 = DAT_14062304c;
  if (DAT_14062304c <= local_resc) {
    fVar9 = local_resc;
  }
  local_res8 = fVar8;
  local_resc = fVar9;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_res18,(CCPoint *)&DAT_1406c2128);
  if (param_3[0x4c5] == (CCNode)0x0) {
    fVar8 = (float)(**(code **)(*(longlong *)param_3 + 0x158))(param_3);
    if (((int)fVar8 != ((int)fVar8 / 0x5a) * 0x5a) &&
       (lVar4 = (**(code **)(*(longlong *)param_3 + 0x1e8))(param_3), lVar4 != 0)) {
      if (((*(longlong *)(param_3 + 0x380) == 0) && (param_3[0x37e] == (CCNode)0x0)) ||
         (param_3[0x510] != (CCNode)0x0)) {
        cocos2d::CCPoint::operator=((CCPoint *)&local_res18,(CCPoint *)(param_3 + 0x1bc));
      }
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)local_70,local_88 * DAT_140622b08 + local_res18,
                 local_84 * DAT_140622b08 + local_res1c);
      cocos2d::CCNode::convertToWorldSpace(param_3,(CCPoint *)local_80);
      pCVar5 = (CCPoint *)
               cocos2d::CCNode::convertToNodeSpace
                         (*(CCNode **)(param_1 + 0xfe8),(CCPoint *)local_70);
      cocos2d::CCPoint::operator=((CCPoint *)local_80,pCVar5);
      uVar11 = (**(code **)(*(longlong *)param_3 + 0x158))(param_3);
      fVar8 = (float)(uVar11 ^ DAT_1406243f0) * DAT_1406229bc;
      uVar6 = cocos2d::CCPoint::CCPoint((CCPoint *)local_70,(CCPoint *)local_80);
      FUN_14006da80(*(undefined8 *)(param_1 + 0x3880),uVar6,local_res8,local_resc,fVar8);
      *(undefined1 *)(param_1 + 0x389d) = 1;
      FUN_14006e270(*(undefined8 *)(param_1 + 0x3880),param_2);
      return param_2;
    }
    fVar8 = local_res8;
    if (param_3[0x390] != (CCNode)0x0) {
      local_res8 = local_resc;
      local_resc = fVar8;
    }
  }
  if (((*(longlong *)(param_3 + 0x380) == 0) && (param_3[0x37e] == (CCNode)0x0)) ||
     (param_3[0x510] != (CCNode)0x0)) {
    uVar6 = cocos2d::CCPoint::CCPoint((CCPoint *)local_70,(CCPoint *)(param_3 + 0x1c4));
    FUN_1400649a0(local_78,param_3,uVar6);
    cocos2d::CCPoint::operator=((CCPoint *)&local_res18,(CCPoint *)local_78);
  }
  lVar4 = (**(code **)(*(longlong *)param_3 + 200))(param_3);
  fVar9 = local_resc * DAT_140622b08;
  fVar8 = *(float *)(lVar4 + 4);
  pfVar7 = (float *)(**(code **)(*(longlong *)param_3 + 200))(param_3);
  cocos2d::CCRect::CCRect
            (param_2,(local_res18 + *pfVar7) - local_res8 * DAT_140622b08,
             (fVar8 + local_res1c) - fVar9,local_res8,local_resc);
  return param_2;
}

