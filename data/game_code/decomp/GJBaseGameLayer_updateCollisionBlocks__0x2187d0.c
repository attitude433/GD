// GJBaseGameLayer_updateCollisionBlocks @ 0x2187d0


void FUN_1402187d0(longlong param_1)

{
  CCRect *this;
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  
  uVar9 = cocos2d::CCArray::count(*(CCArray **)(param_1 + 0xdc0));
  if (uVar9 != 0) {
    FUN_1402185a0(param_1);
    fVar8 = DAT_14062369c;
    fVar7 = DAT_140622c24;
    if (*(longlong *)(param_1 + 0xdc0) != 0) {
      puVar3 = *(uint **)(*(longlong *)(param_1 + 0xdc0) + 0x38);
      uVar9 = *puVar3;
      if (uVar9 != 0) {
        plVar14 = *(longlong **)(puVar3 + 4);
        plVar1 = plVar14 + ((ulonglong)uVar9 - 1);
        for (; (plVar14 <= plVar1 && (plVar4 = (longlong *)*plVar14, plVar4 != (longlong *)0x0));
            plVar14 = plVar14 + 1) {
          if (*(char *)((longlong)plVar4 + 0x28e) == '\0') {
            if (*(char *)((longlong)plVar4 + 0x549) == '\0') {
              iVar10 = (int)plVar4[0x4f] + -1;
              iVar15 = (int)plVar4[0x4f] + 1;
              iVar16 = 0;
              if (-1 < iVar10) {
                iVar16 = iVar10;
              }
              lVar11 = *(longlong *)(param_1 + 0x35d0) - *(longlong *)(param_1 + 0x35c8) >> 3;
              if (lVar11 - 1U <= (ulonglong)(longlong)iVar15) {
                iVar15 = (int)lVar11 + -1;
              }
              iVar10 = *(int *)((longlong)plVar4 + 0x27c) + -1;
              iVar13 = *(int *)((longlong)plVar4 + 0x27c) + 1;
              iVar17 = 0;
              if (-1 < iVar10) {
                iVar17 = iVar10;
              }
              if ((char)plVar4[0x50] != '\0') {
                if ((char)plVar4[0x6d] != '\0') {
                  (**(code **)(*plVar4 + 0x490))(plVar4);
                }
                this = (CCRect *)(plVar4 + 0x6b);
                fVar18 = cocos2d::CCRect::getMinX(this);
                if (0.0 < fVar18) {
                  fVar18 = cocos2d::CCRect::getMinX(this);
                  if (fVar18 < fVar8) {
                    fVar18 = cocos2d::CCRect::getMinX(this);
                    fVar18 = fVar18 * *(float *)(param_1 + 0x36a0);
                  }
                  else {
                    fVar18 = *(float *)(param_1 + 0x36a0) * fVar8;
                  }
                }
                else {
                  fVar18 = 0.0;
                }
                if (0.0 <= fVar18 - fVar7) {
                  fVar18 = cocos2d::CCRect::getMinX(this);
                  if (0.0 < fVar18) {
                    fVar18 = cocos2d::CCRect::getMinX(this);
                    if (fVar18 < fVar8) {
                      fVar18 = cocos2d::CCRect::getMinX(this);
                      fVar18 = fVar18 * *(float *)(param_1 + 0x36a0);
                    }
                    else {
                      fVar18 = *(float *)(param_1 + 0x36a0) * fVar8;
                    }
                  }
                  else {
                    fVar18 = 0.0;
                  }
                  fVar18 = fVar18 - fVar7;
                }
                else {
                  fVar18 = 0.0;
                }
                iVar16 = (int)fVar18;
                fVar18 = cocos2d::CCRect::getMaxX(this);
                if (0.0 < fVar18) {
                  fVar18 = cocos2d::CCRect::getMaxX(this);
                  if (fVar18 < fVar8) {
                    fVar18 = cocos2d::CCRect::getMaxX(this);
                    fVar18 = fVar18 * *(float *)(param_1 + 0x36a0);
                  }
                  else {
                    fVar18 = *(float *)(param_1 + 0x36a0) * fVar8;
                  }
                }
                else {
                  fVar18 = 0.0;
                }
                fVar19 = (float)((*(longlong *)(param_1 + 0x35d0) - *(longlong *)(param_1 + 0x35c8)
                                 >> 3) - 1);
                if (fVar18 + fVar7 < fVar19) {
                  fVar18 = cocos2d::CCRect::getMaxX(this);
                  if (0.0 < fVar18) {
                    fVar18 = cocos2d::CCRect::getMaxX(this);
                    if (fVar18 < fVar8) {
                      fVar19 = cocos2d::CCRect::getMaxX(this);
                      fVar19 = fVar19 * *(float *)(param_1 + 0x36a0);
                    }
                    else {
                      fVar19 = *(float *)(param_1 + 0x36a0) * fVar8;
                    }
                  }
                  else {
                    fVar19 = 0.0;
                  }
                  fVar19 = fVar19 + fVar7;
                }
                iVar15 = (int)fVar19;
                fVar18 = cocos2d::CCRect::getMinY(this);
                if (0.0 < fVar18) {
                  fVar18 = cocos2d::CCRect::getMinY(this);
                  if (fVar18 < fVar8) {
                    fVar18 = cocos2d::CCRect::getMinY(this);
                    fVar18 = fVar18 * *(float *)(param_1 + 0x36a4);
                  }
                  else {
                    fVar18 = *(float *)(param_1 + 0x36a4) * fVar8;
                  }
                }
                else {
                  fVar18 = 0.0;
                }
                if (0.0 <= fVar18 - fVar7) {
                  fVar18 = cocos2d::CCRect::getMinY(this);
                  if (0.0 < fVar18) {
                    fVar18 = cocos2d::CCRect::getMinY(this);
                    if (fVar18 < fVar8) {
                      fVar18 = cocos2d::CCRect::getMinY(this);
                      fVar18 = fVar18 * *(float *)(param_1 + 0x36a4);
                    }
                    else {
                      fVar18 = *(float *)(param_1 + 0x36a4) * fVar8;
                    }
                  }
                  else {
                    fVar18 = 0.0;
                  }
                  fVar18 = fVar18 - fVar7;
                }
                else {
                  fVar18 = 0.0;
                }
                iVar17 = (int)fVar18;
                fVar18 = cocos2d::CCRect::getMaxY(this);
                if (0.0 < fVar18) {
                  fVar18 = cocos2d::CCRect::getMaxY(this);
                  if (fVar18 < fVar8) {
                    fVar18 = cocos2d::CCRect::getMaxY(this);
                    fVar18 = fVar18 * *(float *)(param_1 + 0x36a4);
                  }
                  else {
                    fVar18 = *(float *)(param_1 + 0x36a4) * fVar8;
                  }
                }
                else {
                  fVar18 = 0.0;
                }
                iVar13 = (int)(fVar18 + fVar7);
              }
              lVar11 = (longlong)iVar16;
              if (lVar11 <= iVar15) {
                do {
                  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x35c8) + lVar11 * 8);
                  if (plVar5 == (longlong *)0x0) {
                    iVar10 = -1;
                  }
                  else {
                    lVar12 = plVar5[1] - *plVar5 >> 3;
                    iVar10 = iVar13;
                    if (lVar12 - 1U <= (ulonglong)(longlong)iVar13) {
                      iVar10 = (int)lVar12 + -1;
                    }
                  }
                  for (lVar12 = (longlong)iVar17; lVar12 <= iVar10; lVar12 = lVar12 + 1) {
                    lVar6 = *(longlong *)
                             (**(longlong **)(*(longlong *)(param_1 + 0x35c8) + lVar11 * 8) +
                             lVar12 * 8);
                    if (lVar6 != 0) {
                      FUN_140218ec0(param_1,plVar4,lVar6,
                                    *(undefined4 *)
                                     (**(longlong **)(*(longlong *)(param_1 + 0x3670) + lVar11 * 8)
                                     + lVar12 * 4));
                    }
                  }
                  lVar11 = lVar11 + 1;
                } while (lVar11 <= iVar15);
              }
              if (0 < *(int *)(param_1 + 0x3618)) {
                lVar11 = param_1 + 0x3600;
LAB_140218c58:
                FUN_140218ec0(param_1,plVar4,lVar11);
              }
            }
            else if (0 < *(int *)(param_1 + 0x3638)) {
              lVar11 = param_1 + 0x3620;
              goto LAB_140218c58;
            }
          }
          if (*(char *)((longlong)plVar4 + 0x549) == '\0') {
            if ((char)plVar4[0x50] == '\0') {
              lVar12 = (longlong)*(int *)((longlong)plVar4 + 0x27c);
              plVar5 = *(longlong **)
                        (**(longlong **)
                           (*(longlong *)(param_1 + 0x35c8) + (longlong)(int)plVar4[0x4f] * 8) +
                        lVar12 * 8);
              lVar11 = **(longlong **)
                         (*(longlong *)(param_1 + 0x3670) + (longlong)(int)plVar4[0x4f] * 8);
              iVar10 = *(int *)(lVar11 + lVar12 * 4);
              *(int *)(lVar11 + lVar12 * 4) = iVar10 + -1;
              lVar11 = *plVar5;
              *(undefined8 *)(lVar11 + (longlong)*(int *)((longlong)plVar4 + 0x274) * 8) =
                   *(undefined8 *)(lVar11 + -8 + (longlong)iVar10 * 8);
              lVar11 = *plVar5;
            }
            else {
              iVar10 = *(int *)(param_1 + 0x3618);
              *(int *)(param_1 + 0x3618) = iVar10 + -1;
              *(undefined8 *)
               (*(longlong *)(param_1 + 0x3600) + (longlong)*(int *)((longlong)plVar4 + 0x274) * 8)
                   = *(undefined8 *)(*(longlong *)(param_1 + 0x3600) + -8 + (longlong)iVar10 * 8);
              lVar11 = *(longlong *)(param_1 + 0x3600);
            }
          }
          else {
            iVar10 = *(int *)(param_1 + 0x3638);
            *(int *)(param_1 + 0x3638) = iVar10 + -1;
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x3620) + (longlong)*(int *)((longlong)plVar4 + 0x274) * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x3620) + -8 + (longlong)iVar10 * 8);
            lVar11 = *(longlong *)(param_1 + 0x3620);
          }
          *(int *)(*(longlong *)(lVar11 + (longlong)*(int *)((longlong)plVar4 + 0x274) * 8) + 0x274)
               = *(int *)((longlong)plVar4 + 0x274);
        }
      }
    }
    if (*(longlong *)(param_1 + 0xdc0) != 0) {
      puVar3 = *(uint **)(*(longlong *)(param_1 + 0xdc0) + 0x38);
      uVar9 = *puVar3;
      if (uVar9 != 0) {
        plVar14 = *(longlong **)(puVar3 + 4);
        plVar1 = plVar14 + ((ulonglong)uVar9 - 1);
        for (; (plVar14 <= plVar1 && (lVar11 = *plVar14, lVar11 != 0)); plVar14 = plVar14 + 1) {
          if (*(char *)(lVar11 + 0x549) == '\0') {
            if (*(char *)(lVar11 + 0x280) == '\0') {
              *(longlong *)
               (**(longlong **)
                  (**(longlong **)
                     (*(longlong *)(param_1 + 0x35c8) + (longlong)*(int *)(lVar11 + 0x278) * 8) +
                  (longlong)*(int *)(lVar11 + 0x27c) * 8) +
               (longlong)
               *(int *)(**(longlong **)
                          (*(longlong *)(param_1 + 0x3670) + (longlong)*(int *)(lVar11 + 0x278) * 8)
                       + (longlong)*(int *)(lVar11 + 0x27c) * 4) * 8) = lVar11;
              lVar12 = **(longlong **)
                         (*(longlong *)(param_1 + 0x3670) + (longlong)*(int *)(lVar11 + 0x278) * 8);
              *(undefined4 *)(lVar11 + 0x274) =
                   *(undefined4 *)(lVar12 + (longlong)*(int *)(lVar11 + 0x27c) * 4);
              piVar2 = (int *)(lVar12 + (longlong)*(int *)(lVar11 + 0x27c) * 4);
              *piVar2 = *piVar2 + 1;
            }
            else {
              *(longlong *)
               (*(longlong *)(param_1 + 0x3600) + (longlong)*(int *)(param_1 + 0x3618) * 8) = lVar11
              ;
              *(undefined4 *)(lVar11 + 0x274) = *(undefined4 *)(param_1 + 0x3618);
              *(int *)(param_1 + 0x3618) = *(int *)(param_1 + 0x3618) + 1;
            }
          }
          else {
            *(longlong *)
             (*(longlong *)(param_1 + 0x3620) + (longlong)*(int *)(param_1 + 0x3638) * 8) = lVar11;
            *(undefined4 *)(lVar11 + 0x274) = *(undefined4 *)(param_1 + 0x3638);
            *(int *)(param_1 + 0x3638) = *(int *)(param_1 + 0x3638) + 1;
          }
        }
      }
    }
  }
  return;
}

