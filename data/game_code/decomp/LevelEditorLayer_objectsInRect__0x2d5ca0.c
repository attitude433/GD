// LevelEditorLayer_objectsInRect @ 0x2d5ca0
// Body: 1238 bytes


CCArray * FUN_1402d5ca0(longlong param_1,CCRect *param_2,char param_3)

{
  float *pfVar1;
  short sVar2;
  longlong *plVar3;
  CCObject *pCVar4;
  CCRect *this;
  bool bVar5;
  char cVar6;
  uint uVar7;
  CCPoint *this_00;
  CCArray *this_01;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_res8 [2];
  CCRect *local_res10;
  longlong local_res20;
  CCRect local_58 [32];
  
  local_res10 = param_2;
  this_00 = (CCPoint *)cocos2d::CCRect::CCRect(local_58,param_2);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&local_res20,*(float *)(this_00 + 8) * DAT_140622b08,
             *(float *)(this_00 + 0xc) * DAT_140622b08);
  cocos2d::CCPoint::operator+(this_00,(CCPoint *)local_res8);
  fVar21 = 0.0;
  FUN_14006da80(*(undefined8 *)(param_1 + 0x8f0),local_res8,*(undefined4 *)(this_00 + 8),
                *(undefined4 *)(this_00 + 0xc),0);
  this_01 = cocos2d::CCArray::create();
  fVar18 = *(float *)param_2;
  if (0.0 < fVar18) {
    if (fVar18 < DAT_14062369c) {
      fVar19 = fVar18 * *(float *)(param_1 + 0x36a0);
    }
    else {
      fVar19 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
    }
  }
  else {
    fVar19 = 0.0;
  }
  if (0.0 <= fVar19 - DAT_140622c24) {
    if (0.0 < fVar18) {
      if (fVar18 < DAT_14062369c) {
        fVar19 = fVar18 * *(float *)(param_1 + 0x36a0);
      }
      else {
        fVar19 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
      }
    }
    else {
      fVar19 = 0.0;
    }
    fVar19 = fVar19 - DAT_140622c24;
  }
  else {
    fVar19 = 0.0;
  }
  fVar18 = fVar18 + *(float *)(param_2 + 8);
  if (0.0 < fVar18) {
    if (fVar18 < DAT_14062369c) {
      fVar20 = fVar18 * *(float *)(param_1 + 0x36a0);
    }
    else {
      fVar20 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
    }
  }
  else {
    fVar20 = 0.0;
  }
  fVar17 = (float)((*(longlong *)(param_1 + 0x35a0) - *(longlong *)(param_1 + 0x3598) >> 3) - 1);
  if (fVar20 + DAT_140622c24 < fVar17) {
    if (0.0 < fVar18) {
      if (fVar18 < DAT_14062369c) {
        fVar17 = *(float *)(param_1 + 0x36a0) * fVar18;
      }
      else {
        fVar17 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
      }
    }
    else {
      fVar17 = 0.0;
    }
    fVar17 = fVar17 + DAT_140622c24;
  }
  fVar18 = *(float *)(param_2 + 4);
  pfVar1 = (float *)(param_1 + 0x36a4);
  if (0.0 < fVar18) {
    if (fVar18 < DAT_14062369c) {
      fVar20 = fVar18 * *pfVar1;
    }
    else {
      fVar20 = *pfVar1 * DAT_14062369c;
    }
  }
  else {
    fVar20 = 0.0;
  }
  if (0.0 <= fVar20 - DAT_140622c24) {
    if (0.0 < fVar18) {
      if (fVar18 < DAT_14062369c) {
        fVar20 = fVar18 * *pfVar1;
      }
      else {
        fVar20 = *pfVar1 * DAT_14062369c;
      }
    }
    else {
      fVar20 = 0.0;
    }
    fVar20 = fVar20 - DAT_140622c24;
  }
  else {
    fVar20 = 0.0;
  }
  fVar18 = fVar18 + *(float *)(param_2 + 0xc);
  if (0.0 < fVar18) {
    if (fVar18 < DAT_14062369c) {
      fVar21 = fVar18 * *pfVar1;
    }
    else {
      fVar21 = *pfVar1 * DAT_14062369c;
    }
  }
  iVar16 = (int)(fVar21 + DAT_140622c24);
  if (*(longlong *)(param_1 + 0x3598) != *(longlong *)(param_1 + 0x35a0)) {
    lVar14 = (longlong)(int)fVar19;
    if (lVar14 <= (int)fVar17) {
      local_res8[0] = iVar16;
      do {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x3598) + lVar14 * 8);
        if (plVar3 == (longlong *)0x0) {
          iVar10 = -1;
        }
        else {
          lVar11 = plVar3[1] - *plVar3 >> 3;
          iVar10 = iVar16;
          if (lVar11 - 1U <= (ulonglong)(longlong)iVar16) {
            iVar10 = (int)lVar11 + -1;
          }
        }
        this = local_res10;
        for (local_res20 = (longlong)(int)fVar20; local_res10 = this, local_res20 <= iVar10;
            local_res20 = local_res20 + 1) {
          plVar3 = *(longlong **)
                    (**(longlong **)(*(longlong *)(param_1 + 0x3598) + lVar14 * 8) + local_res20 * 8
                    );
          if (plVar3 != (longlong *)0x0) {
            lVar12 = 0;
            lVar11 = (longlong)
                     *(int *)(**(longlong **)(*(longlong *)(param_1 + 0x3640) + lVar14 * 8) +
                             local_res20 * 4);
            if (0 < lVar11) {
              do {
                pCVar4 = *(CCObject **)(*plVar3 + lVar12 * 8);
                if (param_3 == '\0') {
                  uVar7 = (uint)*(short *)(pCVar4 + 0x4bc);
                  sVar2 = *(short *)(param_1 + 0x387a);
                  uVar13 = (uint)*(short *)(pCVar4 + 0x4ba);
                  if (*(short *)(pCVar4 + 0x4bc) == 0) {
                    uVar7 = 0xffffffff;
                  }
                  if (((sVar2 == -1) || ((int)sVar2 == uVar13)) || ((int)sVar2 == uVar7)) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  uVar8 = 9999;
                  if ((int)uVar13 < 9999) {
                    uVar8 = uVar13;
                  }
                  uVar9 = (ulonglong)uVar8;
                  if ((int)uVar8 < 0) {
                    uVar9 = 0;
                  }
                  uVar13 = 9999;
                  if ((int)uVar7 < 9999) {
                    uVar13 = uVar7;
                  }
                  if ((int)uVar13 < -1) {
                    uVar13 = 0xffffffff;
                  }
                  if (((bVar5) &&
                      ((*(uint *)(*(longlong *)(param_1 + 0x39d0) + (uVar9 >> 5) * 4) >>
                        ((byte)uVar9 & 0x1f) & 1) == 0)) &&
                     ((uVar13 == 0xffffffff ||
                      ((*(uint *)(*(longlong *)(param_1 + 0x39d0) +
                                 ((ulonglong)(longlong)(int)uVar13 >> 5) * 4) >>
                        ((byte)uVar13 & 0x1f) & 1) == 0)))) goto LAB_1402d608f;
                }
                else {
LAB_1402d608f:
                  FUN_1402d5800(param_1,local_58,pCVar4);
                  if (*(char *)(param_1 + 0x389d) == '\0') {
                    bVar5 = cocos2d::CCRect::intersectsRect(this,local_58);
                    if (!bVar5) {
                      if (*(char *)(param_1 + 0x389d) == '\0') goto LAB_1402d6103;
                      goto LAB_1402d60c2;
                    }
                  }
                  else {
LAB_1402d60c2:
                    uVar15 = *(undefined8 *)(param_1 + 0x8f0);
                    cVar6 = FUN_14006e130(*(undefined8 *)(param_1 + 0x3880));
                    if ((cVar6 == '\0') || (cVar6 = FUN_14006e130(uVar15), cVar6 == '\0'))
                    goto LAB_1402d6103;
                  }
                  cocos2d::CCArray::addObject(this_01,pCVar4);
                }
LAB_1402d6103:
                lVar12 = lVar12 + 1;
              } while (lVar12 < lVar11);
            }
          }
          iVar16 = local_res8[0];
          this = local_res10;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 <= (int)fVar17);
    }
  }
  return this_01;
}

