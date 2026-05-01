// FUN_140211260 @ 0x211260


CCArray * FUN_140211260(longlong param_1,CCRect *param_2,char param_3)

{
  float *pfVar1;
  longlong *plVar2;
  CCObject *pCVar3;
  bool bVar4;
  int iVar5;
  CCArray *this;
  CCRect *pCVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  CCRect local_48 [16];
  
  this = cocos2d::CCArray::create();
  fVar14 = *(float *)param_2;
  fVar13 = 0.0;
  if (0.0 < fVar14) {
    if (fVar14 < DAT_14062369c) {
      fVar15 = fVar14 * *(float *)(param_1 + 0x36a0);
    }
    else {
      fVar15 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
    }
  }
  else {
    fVar15 = 0.0;
  }
  if (0.0 <= fVar15 - DAT_140622c24) {
    if (0.0 < fVar14) {
      if (fVar14 < DAT_14062369c) {
        fVar15 = fVar14 * *(float *)(param_1 + 0x36a0);
      }
      else {
        fVar15 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
      }
    }
    else {
      fVar15 = 0.0;
    }
    fVar15 = fVar15 - DAT_140622c24;
  }
  else {
    fVar15 = 0.0;
  }
  fVar14 = fVar14 + *(float *)(param_2 + 8);
  if (0.0 < fVar14) {
    if (fVar14 < DAT_14062369c) {
      fVar16 = fVar14 * *(float *)(param_1 + 0x36a0);
    }
    else {
      fVar16 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
    }
  }
  else {
    fVar16 = 0.0;
  }
  fVar12 = (float)((*(longlong *)(param_1 + 0x35b8) - *(longlong *)(param_1 + 0x35b0) >> 3) - 1);
  if (fVar16 + DAT_140622c24 < fVar12) {
    if (0.0 < fVar14) {
      if (fVar14 < DAT_14062369c) {
        fVar12 = fVar14 * *(float *)(param_1 + 0x36a0);
      }
      else {
        fVar12 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
      }
    }
    else {
      fVar12 = 0.0;
    }
    fVar12 = fVar12 + DAT_140622c24;
  }
  fVar14 = *(float *)(param_2 + 4);
  pfVar1 = (float *)(param_1 + 0x36a4);
  if (0.0 < fVar14) {
    if (fVar14 < DAT_14062369c) {
      fVar16 = fVar14 * *pfVar1;
    }
    else {
      fVar16 = *pfVar1 * DAT_14062369c;
    }
  }
  else {
    fVar16 = 0.0;
  }
  if (0.0 <= fVar16 - DAT_140622c24) {
    if (0.0 < fVar14) {
      if (fVar14 < DAT_14062369c) {
        fVar16 = fVar14 * *pfVar1;
      }
      else {
        fVar16 = *pfVar1 * DAT_14062369c;
      }
    }
    else {
      fVar16 = 0.0;
    }
    fVar16 = fVar16 - DAT_140622c24;
  }
  else {
    fVar16 = 0.0;
  }
  fVar14 = fVar14 + *(float *)(param_2 + 0xc);
  if (0.0 < fVar14) {
    if (fVar14 < DAT_14062369c) {
      fVar13 = *pfVar1 * fVar14;
    }
    else {
      fVar13 = *pfVar1 * DAT_14062369c;
    }
  }
  fVar13 = fVar13 + DAT_140622c24;
  if (*(longlong *)(param_1 + 0x35b0) == *(longlong *)(param_1 + 0x35b8)) {
    return this;
  }
  lVar11 = (longlong)(int)fVar15;
  if (lVar11 <= (int)fVar12) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x35b0) + lVar11 * 8);
      if (plVar2 == (longlong *)0x0) {
        iVar7 = -1;
      }
      else {
        lVar8 = plVar2[1] - *plVar2 >> 3;
        iVar7 = (int)fVar13;
        if (lVar8 - 1U <= (ulonglong)(longlong)(int)fVar13) {
          iVar7 = (int)lVar8 + -1;
        }
      }
      for (lVar8 = (longlong)(int)fVar16; lVar8 <= iVar7; lVar8 = lVar8 + 1) {
        plVar2 = *(longlong **)
                  (**(longlong **)(*(longlong *)(param_1 + 0x35b0) + lVar11 * 8) + lVar8 * 8);
        if (plVar2 != (longlong *)0x0) {
          lVar10 = 0;
          lVar9 = (longlong)
                  *(int *)(**(longlong **)(*(longlong *)(param_1 + 0x3658) + lVar11 * 8) + lVar8 * 4
                          );
          if (0 < lVar9) {
            do {
              pCVar3 = *(CCObject **)(*plVar2 + lVar10 * 8);
              if (((pCVar3[0x305] != (CCObject)0x0) ||
                  ((param_3 != '\0' && (pCVar3[0x28e] == (CCObject)0x0)))) &&
                 ((iVar5 = (**(code **)(*(longlong *)pCVar3 + 0x660))(pCVar3), iVar5 == 0 ||
                  ((iVar5 = (**(code **)(*(longlong *)pCVar3 + 0x660))(pCVar3), iVar5 == 0x19 ||
                   (iVar5 = (**(code **)(*(longlong *)pCVar3 + 0x660))(pCVar3), iVar5 == 0x15))))))
              {
                pCVar6 = (CCRect *)(**(code **)(*(longlong *)pCVar3 + 0x490))(pCVar3);
                cocos2d::CCRect::CCRect(local_48,pCVar6);
                bVar4 = cocos2d::CCRect::intersectsRect(param_2,local_48);
                if (bVar4) {
                  cocos2d::CCArray::addObject(this,pCVar3);
                }
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < lVar9);
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 <= (int)fVar12);
  }
  return this;
}

