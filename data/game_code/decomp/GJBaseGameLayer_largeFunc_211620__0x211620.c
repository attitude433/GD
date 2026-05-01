// GJBaseGameLayer_largeFunc_211620 @ 0x211620


CCArray * FUN_140211620(longlong param_1,CCRect *param_2,undefined1 param_3)

{
  float *pfVar1;
  longlong *plVar2;
  CCObject *pCVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  CCPoint *pCVar8;
  CCArray *this;
  CCRect *pCVar9;
  CCRect *pCVar10;
  CCPoint *pCVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_res8;
  float local_resc;
  CCRect *local_res10;
  int local_res18;
  longlong local_res20;
  CCPoint local_130 [8];
  longlong local_128;
  longlong local_120;
  longlong local_118;
  CCRect local_110 [16];
  CCPoint local_100 [8];
  CCPoint local_f8 [8];
  CCPoint local_f0 [8];
  CCPoint local_e8 [8];
  CCPoint local_e0 [8];
  CCRect local_d8 [152];
  
  local_res18 = CONCAT31(local_res18._1_3_,param_3);
  local_res10 = param_2;
  pCVar8 = (CCPoint *)cocos2d::CCRect::CCRect(local_110,param_2);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&local_res20,*(float *)(pCVar8 + 8) * DAT_140622b08,
             *(float *)(pCVar8 + 0xc) * DAT_140622b08);
  cocos2d::CCPoint::operator+(pCVar8,(CCPoint *)&local_res8);
  FUN_14006da80(*(undefined8 *)(param_1 + 0x8f0),&local_res8,*(undefined4 *)(pCVar8 + 8),
                *(undefined4 *)(pCVar8 + 0xc),0);
  this = cocos2d::CCArray::create();
  uVar5 = DAT_1406243c0;
  fVar4 = DAT_140622c24;
  fVar22 = *(float *)local_res10;
  if (0.0 < fVar22) {
    if (fVar22 < DAT_14062369c) {
      fVar23 = fVar22 * *(float *)(param_1 + 0x36a0);
    }
    else {
      fVar23 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
    }
  }
  else {
    fVar23 = 0.0;
  }
  if (0.0 <= fVar23 - DAT_140622c24) {
    if (0.0 < fVar22) {
      if (fVar22 < DAT_14062369c) {
        fVar23 = fVar22 * *(float *)(param_1 + 0x36a0);
      }
      else {
        fVar23 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
      }
    }
    else {
      fVar23 = 0.0;
    }
    fVar23 = fVar23 - DAT_140622c24;
  }
  else {
    fVar23 = 0.0;
  }
  fVar22 = fVar22 + *(float *)(local_res10 + 8);
  if (0.0 < fVar22) {
    if (fVar22 < DAT_14062369c) {
      fVar24 = *(float *)(param_1 + 0x36a0) * fVar22;
    }
    else {
      fVar24 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
    }
  }
  else {
    fVar24 = 0.0;
  }
  fVar19 = (float)((*(longlong *)(param_1 + 0x35b8) - *(longlong *)(param_1 + 0x35b0) >> 3) - 1);
  if (fVar24 + DAT_140622c24 < fVar19) {
    if (0.0 < fVar22) {
      if (fVar22 < DAT_14062369c) {
        fVar19 = *(float *)(param_1 + 0x36a0) * fVar22;
      }
      else {
        fVar19 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
      }
    }
    else {
      fVar19 = 0.0;
    }
    fVar19 = fVar19 + DAT_140622c24;
  }
  fVar22 = *(float *)(local_res10 + 4);
  pfVar1 = (float *)(param_1 + 0x36a4);
  if (0.0 < fVar22) {
    if (fVar22 < DAT_14062369c) {
      fVar24 = fVar22 * *pfVar1;
    }
    else {
      fVar24 = *pfVar1 * DAT_14062369c;
    }
  }
  else {
    fVar24 = 0.0;
  }
  if (0.0 <= fVar24 - DAT_140622c24) {
    if (0.0 < fVar22) {
      if (fVar22 < DAT_14062369c) {
        fVar24 = fVar22 * *pfVar1;
      }
      else {
        fVar24 = *pfVar1 * DAT_14062369c;
      }
    }
    else {
      fVar24 = 0.0;
    }
    fVar24 = fVar24 - DAT_140622c24;
  }
  else {
    fVar24 = 0.0;
  }
  fVar22 = fVar22 + *(float *)(local_res10 + 0xc);
  if (0.0 < fVar22) {
    if (fVar22 < DAT_14062369c) {
      fVar22 = *pfVar1 * fVar22;
    }
    else {
      fVar22 = *pfVar1 * DAT_14062369c;
    }
  }
  else {
    fVar22 = 0.0;
  }
  iVar17 = (int)(fVar22 + DAT_140622c24);
  if (*(longlong *)(param_1 + 0x35b0) != *(longlong *)(param_1 + 0x35b8)) {
    lVar15 = (longlong)(int)fVar23;
    local_118 = (longlong)(int)fVar19;
    if (lVar15 <= local_118) {
      local_120 = (longlong)(int)fVar24;
      pCVar10 = local_res10;
      local_res20 = local_120;
      local_res18 = iVar17;
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x35b0) + lVar15 * 8);
        if (plVar2 == (longlong *)0x0) {
          iVar13 = -1;
        }
        else {
          lVar14 = plVar2[1] - *plVar2 >> 3;
          iVar13 = iVar17;
          if (lVar14 - 1U <= (ulonglong)(longlong)iVar17) {
            iVar13 = (int)lVar14 + -1;
          }
        }
        local_128 = (longlong)iVar13;
        lVar14 = local_res20;
        if (local_res20 <= local_128) {
          do {
            plVar2 = *(longlong **)
                      (**(longlong **)(*(longlong *)(param_1 + 0x35b0) + lVar15 * 8) +
                      local_res20 * 8);
            if (plVar2 != (longlong *)0x0) {
              lVar14 = 0;
              lVar18 = (longlong)
                       *(int *)(**(longlong **)(*(longlong *)(param_1 + 0x3658) + lVar15 * 8) +
                               local_res20 * 4);
              if (0 < lVar18) {
                do {
                  pCVar3 = *(CCObject **)(*plVar2 + lVar14 * 8);
                  iVar17 = (**(code **)(*(longlong *)pCVar3 + 0x660))(pCVar3);
                  if (((iVar17 == 2) ||
                      (iVar17 = (**(code **)(*(longlong *)pCVar3 + 0x660))(pCVar3), iVar17 == 0x2f))
                     && ((pCVar3[0x305] != (CCObject)0x0 || (pCVar3[0x28e] == (CCObject)0x0)))) {
                    pCVar9 = (CCRect *)(**(code **)(*(longlong *)pCVar3 + 0x490))(pCVar3);
                    cocos2d::CCRect::CCRect(local_110,pCVar9);
                    fVar22 = *(float *)(pCVar3 + 0x38c);
                    if (fVar22 <= 0.0) {
                      bVar6 = cocos2d::CCRect::intersectsRect(pCVar10,local_110);
                      if (bVar6) {
                        if (pCVar3[0x2e8] != (CCObject)0x0) {
                          uVar12 = (**(code **)(*(longlong *)pCVar3 + 0x570))(pCVar3);
                          uVar16 = *(undefined8 *)(param_1 + 0x8f0);
                          cVar7 = FUN_14006e130(uVar12,uVar16,uVar12);
                          if ((cVar7 == '\0') ||
                             (cVar7 = FUN_14006e130(uVar16,uVar12), cVar7 == '\0'))
                          goto LAB_140211c0f;
                        }
                        cocos2d::CCArray::addObject(this,pCVar3);
                      }
                    }
                    else {
                      fVar23 = *(float *)(pCVar3 + 0x488);
                      if ((fVar23 != fVar4) || (*(float *)(pCVar3 + 0x48c) != fVar4)) {
                        if (fVar23 <= *(float *)(pCVar3 + 0x48c)) {
                          fVar23 = *(float *)(pCVar3 + 0x48c);
                        }
                        fVar22 = fVar23 * fVar22;
                      }
                      (**(code **)(*(longlong *)pCVar3 + 0x4a8))(pCVar3,local_130);
                      pCVar8 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_100,local_130);
                      pCVar10 = (CCRect *)cocos2d::CCRect::CCRect(local_d8,pCVar10);
                      fVar23 = cocos2d::CCRect::getMaxX(pCVar10);
                      fVar24 = cocos2d::CCRect::getMinX(pCVar10);
                      fVar19 = cocos2d::CCRect::getMaxY(pCVar10);
                      fVar20 = cocos2d::CCRect::getMinY(pCVar10);
                      bVar6 = cocos2d::CCRect::containsPoint(pCVar10,pCVar8);
                      if (!bVar6) {
                        pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_f8,fVar23,fVar19);
                        fVar21 = cocos2d::ccpDistance(pCVar11,pCVar8);
                        if (fVar22 <= (float)((uint)fVar21 & uVar5)) {
                          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_f0,fVar23,fVar20);
                          fVar21 = cocos2d::ccpDistance(pCVar11,pCVar8);
                          if (fVar22 <= (float)((uint)fVar21 & uVar5)) {
                            pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_e8,fVar24,fVar20);
                            fVar21 = cocos2d::ccpDistance(pCVar11,pCVar8);
                            if (fVar22 <= (float)((uint)fVar21 & uVar5)) {
                              pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_e0,fVar24,fVar19)
                              ;
                              fVar21 = cocos2d::ccpDistance(pCVar11,pCVar8);
                              if (fVar22 <= (float)((uint)fVar21 & uVar5)) {
                                cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,pCVar8);
                                if (fVar23 < local_res8) {
                                  local_res8 = fVar23;
                                }
                                if (local_res8 < fVar24) {
                                  local_res8 = fVar24;
                                }
                                if (local_resc < fVar20) {
                                  local_resc = fVar20;
                                }
                                if (fVar19 < local_resc) {
                                  local_resc = fVar19;
                                }
                                fVar23 = cocos2d::ccpDistance((CCPoint *)&local_res8,pCVar8);
                                pCVar10 = local_res10;
                                if (fVar22 <= fVar23) goto LAB_140211c0f;
                              }
                            }
                          }
                        }
                      }
                      cocos2d::CCArray::addObject(this,pCVar3);
                      pCVar10 = local_res10;
                    }
                  }
LAB_140211c0f:
                  lVar14 = lVar14 + 1;
                } while (lVar14 < lVar18);
              }
            }
            local_res20 = local_res20 + 1;
            lVar14 = local_120;
            iVar17 = local_res18;
          } while (local_res20 <= local_128);
        }
        lVar15 = lVar15 + 1;
        local_res20 = lVar14;
      } while (lVar15 <= local_118);
    }
  }
  return this;
}

