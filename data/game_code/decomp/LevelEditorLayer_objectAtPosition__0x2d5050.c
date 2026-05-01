// LevelEditorLayer_objectAtPosition @ 0x2d5050
// Body: 956 bytes


longlong FUN_1402d5050(longlong param_1,CCPoint *param_2)

{
  int iVar1;
  float fVar2;
  short sVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  CCPoint *this;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  int local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  CCRect local_68 [40];
  
  this = (CCPoint *)
         cocos2d::CCRect::CCRect
                   (local_68,*(float *)param_2,*(float *)(param_2 + 4),DAT_140622c24,DAT_140622c24);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&local_res10,*(float *)(this + 8) * DAT_140622b08,
             *(float *)(this + 0xc) * DAT_140622b08);
  cocos2d::CCPoint::operator+(this,(CCPoint *)local_res8);
  fVar21 = 0.0;
  FUN_14006da80(*(undefined8 *)(param_1 + 0x8f0),local_res8,*(undefined4 *)(this + 8),
                *(undefined4 *)(this + 0xc),0);
  fVar20 = *(float *)param_2;
  if (0.0 < fVar20) {
    if (fVar20 < DAT_14062369c) {
      fVar20 = fVar20 * *(float *)(param_1 + 0x36a0);
    }
    else {
      fVar20 = *(float *)(param_1 + 0x36a0) * DAT_14062369c;
    }
  }
  else {
    fVar20 = 0.0;
  }
  fVar2 = *(float *)(param_2 + 4);
  if (0.0 < fVar2) {
    if (fVar2 < DAT_14062369c) {
      fVar21 = fVar2 * *(float *)(param_1 + 0x36a4);
    }
    else {
      fVar21 = *(float *)(param_1 + 0x36a4) * DAT_14062369c;
    }
  }
  iVar15 = (int)fVar20 + -1;
  iVar19 = 0;
  if (-1 < iVar15) {
    iVar19 = iVar15;
  }
  lVar12 = *(longlong *)(param_1 + 0x35a0) - *(longlong *)(param_1 + 0x3598) >> 3;
  iVar15 = (int)fVar20 + 1;
  if (lVar12 - 1U <= (ulonglong)(longlong)iVar15) {
    iVar15 = (int)lVar12 + -1;
  }
  iVar1 = (int)fVar21 + -1;
  iVar9 = 0;
  if (-1 < iVar1) {
    iVar9 = iVar1;
  }
  local_res8[0] = (int)fVar21 + 1;
  if (*(longlong *)(param_1 + 0x3598) != *(longlong *)(param_1 + 0x35a0)) {
    local_res20 = (longlong)iVar15;
    lVar12 = (longlong)iVar19;
    if (lVar12 <= local_res20) {
      lVar17 = (longlong)iVar9;
      local_res18 = lVar17;
      iVar15 = local_res8[0];
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x3598) + lVar12 * 8);
        if (plVar4 == (longlong *)0x0) {
          iVar19 = -1;
        }
        else {
          lVar13 = plVar4[1] - *plVar4 >> 3;
          iVar19 = iVar15;
          if (lVar13 - 1U <= (ulonglong)(longlong)iVar15) {
            iVar19 = (int)lVar13 + -1;
          }
        }
        local_res10 = (longlong)iVar19;
        lVar13 = lVar17;
        if (lVar17 <= local_res10) {
          do {
            plVar4 = *(longlong **)
                      (**(longlong **)(*(longlong *)(param_1 + 0x3598) + lVar12 * 8) + lVar13 * 8);
            if (plVar4 != (longlong *)0x0) {
              lVar17 = 0;
              lVar14 = (longlong)
                       *(int *)(**(longlong **)(*(longlong *)(param_1 + 0x3640) + lVar12 * 8) +
                               lVar13 * 4);
              if (0 < lVar14) {
                do {
                  sVar3 = *(short *)(param_1 + 0x387a);
                  lVar5 = *(longlong *)(*plVar4 + lVar17 * 8);
                  uVar8 = (uint)*(short *)(lVar5 + 0x4bc);
                  uVar16 = (uint)*(short *)(lVar5 + 0x4ba);
                  if (*(short *)(lVar5 + 0x4bc) == 0) {
                    uVar8 = 0xffffffff;
                  }
                  if (((sVar3 == -1) || ((int)sVar3 == uVar16)) || ((int)sVar3 == uVar8)) {
                    bVar6 = true;
                  }
                  else {
                    bVar6 = false;
                  }
                  uVar10 = 9999;
                  if ((int)uVar16 < 9999) {
                    uVar10 = uVar16;
                  }
                  uVar11 = (ulonglong)uVar10;
                  if ((int)uVar10 < 0) {
                    uVar11 = 0;
                  }
                  uVar16 = 9999;
                  if ((int)uVar8 < 9999) {
                    uVar16 = uVar8;
                  }
                  if ((int)uVar16 < -1) {
                    uVar16 = 0xffffffff;
                  }
                  if (((bVar6) &&
                      ((*(uint *)(*(longlong *)(param_1 + 0x39d0) + (uVar11 >> 5) * 4) >>
                        ((byte)uVar11 & 0x1f) & 1) == 0)) &&
                     ((uVar16 == 0xffffffff ||
                      ((*(uint *)(*(longlong *)(param_1 + 0x39d0) +
                                 ((ulonglong)(longlong)(int)uVar16 >> 5) * 4) >>
                        ((byte)uVar16 & 0x1f) & 1) == 0)))) {
                    FUN_1402d5800(param_1,local_68,lVar5);
                    if (*(char *)(param_1 + 0x389d) == '\0') {
                      bVar6 = cocos2d::CCRect::containsPoint(local_68,param_2);
                      if (bVar6) {
                        return lVar5;
                      }
                      if (*(char *)(param_1 + 0x389d) == '\0') goto LAB_1402d53a2;
                    }
                    uVar18 = *(undefined8 *)(param_1 + 0x8f0);
                    cVar7 = FUN_14006e130(*(undefined8 *)(param_1 + 0x3880));
                    if ((cVar7 != '\0') && (cVar7 = FUN_14006e130(uVar18), cVar7 != '\0')) {
                      return lVar5;
                    }
                  }
LAB_1402d53a2:
                  lVar17 = lVar17 + 1;
                } while (lVar17 < lVar14);
              }
            }
            lVar13 = lVar13 + 1;
            lVar17 = local_res18;
            iVar15 = local_res8[0];
          } while (lVar13 <= local_res10);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 <= local_res20);
    }
  }
  return 0;
}

