// FUN_140211df0 @ 0x211df0


bool FUN_140211df0(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  bool bVar2;
  CCPoint *pCVar3;
  CCPoint *pCVar4;
  longlong lVar5;
  CCRect *pCVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  CCPoint local_res8 [8];
  CCPoint local_res20 [8];
  CCPoint local_a8 [8];
  CCPoint local_a0 [8];
  CCPoint local_98 [8];
  CCRect local_90 [120];
  
  if (*(char *)(*(longlong *)(param_1 + 0xdb0) + 0x1cf) == '\0') {
    pCVar6 = (CCRect *)(**(code **)(*param_2 + 0x490))(param_2);
    cocos2d::CCRect::CCRect(local_90,pCVar6);
    fVar12 = *(float *)(param_3 + 0x91);
    if ((fVar12 == DAT_140622c24) && (*(float *)((longlong)param_3 + 0x48c) == DAT_140622c24)) {
      fVar12 = *(float *)((longlong)param_3 + 0x38c);
    }
    else {
      if (fVar12 <= *(float *)((longlong)param_3 + 0x48c)) {
        fVar12 = *(float *)((longlong)param_3 + 0x48c);
      }
      fVar12 = fVar12 * *(float *)((longlong)param_3 + 0x38c);
    }
    (**(code **)(*param_3 + 0x4a8))(param_3,local_res8);
    fVar7 = cocos2d::CCRect::getMaxX(local_90);
    fVar8 = cocos2d::CCRect::getMinX(local_90);
    fVar9 = cocos2d::CCRect::getMaxY(local_90);
    fVar10 = cocos2d::CCRect::getMinY(local_90);
    bVar2 = cocos2d::CCRect::containsPoint(local_90,local_res8);
    if (!bVar2) {
      pCVar3 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_res20,fVar7,fVar9);
      fVar11 = cocos2d::ccpDistance(pCVar3,local_res8);
      uVar1 = DAT_1406243c0;
      if (fVar12 <= (float)((uint)fVar11 & DAT_1406243c0)) {
        pCVar3 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_a8,fVar7,fVar10);
        fVar7 = cocos2d::ccpDistance(pCVar3,local_res8);
        if (fVar12 <= (float)((uint)fVar7 & uVar1)) {
          pCVar3 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_a0,fVar8,fVar10);
          fVar7 = cocos2d::ccpDistance(pCVar3,local_res8);
          if (fVar12 <= (float)((uint)fVar7 & uVar1)) {
            pCVar3 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_98,fVar8,fVar9);
            fVar7 = cocos2d::ccpDistance(pCVar3,local_res8);
            if (fVar12 <= (float)((uint)fVar7 & uVar1)) {
              return false;
            }
          }
        }
      }
    }
    bVar2 = true;
  }
  else {
    pCVar3 = (CCPoint *)(**(code **)(*param_3 + 0x4a8))(param_3,local_res8);
    pCVar4 = (CCPoint *)(**(code **)(*param_2 + 200))(param_2);
    fVar7 = cocos2d::ccpDistance(pCVar4,pCVar3);
    fVar12 = *(float *)(param_3 + 0x91);
    if ((fVar12 == DAT_140622c24) && (*(float *)((longlong)param_3 + 0x48c) == DAT_140622c24)) {
      fVar12 = *(float *)((longlong)param_3 + 0x38c);
    }
    else {
      if (fVar12 <= *(float *)((longlong)param_3 + 0x48c)) {
        fVar12 = *(float *)((longlong)param_3 + 0x48c);
      }
      fVar12 = fVar12 * *(float *)((longlong)param_3 + 0x38c);
    }
    lVar5 = (**(code **)(*param_2 + 0x490))(param_2);
    bVar2 = fVar7 <= *(float *)(lVar5 + 8) * DAT_140622b08 + fVar12;
  }
  return bVar2;
}

