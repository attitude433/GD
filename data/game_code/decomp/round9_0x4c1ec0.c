// FUN_1404c1ec0 @ 0x4c1ec0


undefined8 FUN_1404c1ec0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  char cVar2;
  CCRect *pCVar3;
  CCPoint *pCVar4;
  CCPoint *pCVar5;
  float fVar6;
  float extraout_XMM0_Da;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float _X;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  CCRect local_90 [8];
  float local_88;
  float local_84;
  
  pCVar3 = (CCRect *)(**(code **)(*param_1 + 0x490))();
  cocos2d::CCRect::CCRect(local_90,pCVar3);
  fVar1 = DAT_140622c24;
  fVar8 = *(float *)((longlong)param_1 + 0x38c);
  if (fVar8 <= 0.0) {
    if (local_88 <= local_84) {
      local_88 = local_84;
    }
    fVar8 = local_88 * DAT_140622b08;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x91);
    if ((fVar6 != DAT_140622c24) || (*(float *)((longlong)param_1 + 0x48c) != DAT_140622c24)) {
      if (fVar6 <= *(float *)((longlong)param_1 + 0x48c)) {
        fVar6 = *(float *)((longlong)param_1 + 0x48c);
      }
      fVar8 = fVar6 * fVar8;
    }
  }
  if (*(char *)((longlong)param_1 + 0x74c) == '\0') {
    fVar6 = (float)(**(code **)(*param_1 + 0x168))(param_1);
    fVar6 = DAT_140623294 - fVar6;
    cVar2 = (**(code **)(*param_1 + 0x4f0))();
    _X = ((float)(-(cVar2 != '\0') & 0xb4) + fVar6) * DAT_1406229bc;
    fVar6 = extraout_XMM0_Da;
  }
  else {
    (**(code **)(*param_3 + 0x4a8))(param_3,&local_res10);
    pCVar4 = (CCPoint *)(**(code **)(*param_1 + 0x4a8))(param_1,local_res20);
    cocos2d::CCPoint::operator-(pCVar4,(CCPoint *)&local_res8);
    cVar2 = (**(code **)(*param_1 + 0x4f0))(param_1);
    if (cVar2 == '\0') {
      uVar9 = (undefined4)DAT_140622e80;
      uVar10 = (undefined4)((ulonglong)DAT_140622e80 >> 0x20);
    }
    else {
      uVar9 = 0;
      uVar10 = 0;
    }
    fVar6 = atan2f(local_resc,local_res8);
    _X = (float)((double)fVar6 + (double)CONCAT44(uVar10,uVar9));
  }
  if (*(char *)((longlong)param_1 + 0x74d) != '\0') {
    fVar6 = 0.0;
    if (*(char *)((longlong)param_1 + 0x74c) == '\0') {
      fVar6 = sinf(_X);
      fVar7 = cosf(_X);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,fVar7,fVar6);
      (**(code **)(*param_3 + 0x4a8))(param_3,local_res20);
      pCVar4 = (CCPoint *)(**(code **)(*param_1 + 0x4a8))(param_1,local_98);
      cocos2d::CCPoint::operator-(pCVar4,(CCPoint *)&local_res8);
      fVar6 = (float)((double)((local_res10 * local_res8 + local_resc * local_res14 + fVar8) / fVar8
                              ) * DAT_140622d98);
    }
    else {
      pCVar4 = (CCPoint *)(**(code **)(*param_3 + 0x4a8))(param_3,&local_res8);
      pCVar5 = (CCPoint *)(**(code **)(*param_1 + 0x4a8))(param_1,&local_res10);
      fVar7 = cocos2d::ccpDistance(pCVar5,pCVar4);
      if (fVar7 < fVar8) {
        fVar6 = fVar1 - fVar7 / fVar8;
      }
    }
    cocos2d::clampf(fVar6,0.0,fVar1);
    fVar6 = *(float *)((longlong)param_1 + 0x744);
  }
  pCVar4 = (CCPoint *)cocos2d::ccpForAngle(fVar6);
  cocos2d::CCPoint::operator*(pCVar4,_X);
  return param_2;
}

