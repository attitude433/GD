// Function: FUN_1402137f0
// Original target: GJBaseGameLayer_collisionInner_2137f0 @ 0x2137f0
// Ghidra entry: 1402137f0
// Signature: undefined FUN_1402137f0(void)


undefined8 FUN_1402137f0(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  CCRect *this;
  CCRect *pCVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined8 local_res8;
  float local_res10;
  float local_res14;
  float local_res18;
  char local_res20;
  float in_stack_fffffffffffffef8;
  longlong local_f0 [2];
  undefined8 local_e0;
  float local_d4;
  
  fVar17 = (float)param_3;
  uVar25 = (undefined4)((ulonglong)param_3 >> 0x20);
  lVar9 = param_2[0xac];
  *(undefined1 *)(param_2 + 0xac) = 0;
  *(undefined1 *)(param_2 + 0x108) = 0;
  param_2[299] = 0;
  param_2[300] = 0;
  param_2[0x12d] = 0;
  param_2[0x12e] = 0;
  *(char *)((longlong)param_2 + 0x9b1) = (char)param_2[0x136];
  *(undefined1 *)(param_2 + 0x136) = 0;
  *(char *)(param_2 + 0x167) = *(char *)((longlong)param_2 + 0xa0c);
  if ((((*(char *)((longlong)param_2 + 0xa0c) != '\0') &&
       (*(char *)((longlong)param_2 + 0xb59) == '\0')) &&
      (*(char *)((longlong)param_2 + 0xb5a) == '\0')) && (0 < *(int *)((longlong)param_2 + 0xb3c)))
  {
    *(undefined4 *)((longlong)param_2 + 0xb3c) = 0;
    param_2[0x168] = param_2[0x154];
  }
  if (*(char *)((longlong)param_2 + 0x669) == '\0') {
    *(undefined1 *)((longlong)param_2 + 0x669) = 1;
  }
  else {
    param_2[0xce] = 0;
  }
  local_res18 = fVar17;
  local_res20 = param_4;
  FUN_14005d290(param_2 + 0xdc);
  lVar7 = param_2[0xce];
  if (lVar7 != 0) {
    local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(lVar7 + 0x39c));
    plVar5 = (longlong *)FUN_14024e530(param_2 + 0xdc,&local_e0,&local_res8);
    *(longlong *)(*plVar5 + 0x18) = lVar7;
  }
  lVar7 = param_2[0xcf];
  if (lVar7 != 0) {
    local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(lVar7 + 0x39c));
    plVar5 = (longlong *)FUN_14024e530(param_2 + 0xdc,&local_e0,&local_res8);
    *(longlong *)(*plVar5 + 0x18) = lVar7;
  }
  fVar20 = 0.0;
  fVar15 = *(float *)(param_2 + 0x156);
  if (*(float *)(param_2 + 0x13e) != DAT_140622c24) {
    fVar20 = (DAT_140622c24 - *(float *)(param_2 + 0x13e)) * fVar15 * DAT_140622b08;
  }
  fVar23 = fVar15 * DAT_140622b08;
  fVar21 = (fVar23 + DAT_140623294) - fVar20;
  if ((*(char *)((longlong)param_1 + 0x311) == '\0') &&
     (((((*(char *)((longlong)param_2 + 0x9b9) != '\0' ||
         (*(char *)((longlong)param_2 + 0x9ba) != '\0')) ||
        ((*(char *)((longlong)param_2 + 0x9bc) != '\0' ||
         ((*(char *)((longlong)param_2 + 0x9c4) != '\0' ||
          (*(char *)((longlong)param_2 + 0x9bb) != '\0')))))) ||
       (*(char *)((longlong)param_2 + 0x9be) != '\0')) ||
      (*(char *)((longlong)param_1 + 0x422) != '\0')))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  local_res10 = (float)CONCAT31(local_res10._1_3_,(char)param_2[0x187]);
  *(undefined1 *)(param_2 + 0x187) = 0;
  cVar4 = '\0';
  if (*(char *)((longlong)param_1 + 0x309e) == '\0') {
    if ((*(char *)((longlong)param_2 + 0x9c2) != '\0') &&
       (pfVar6 = (float *)(**(code **)(*param_2 + 200))(param_2),
       *pfVar6 <= DAT_1406238d8 && DAT_1406238d8 != *pfVar6)) {
      cVar4 = '\x01';
    }
  }
  else {
    pfVar6 = (float *)(**(code **)(*param_2 + 200))(param_2);
    fVar24 = DAT_1406238d8;
    if (*pfVar6 <= DAT_1406238d8 && DAT_1406238d8 != *pfVar6) {
      param_2[0x15f] = 0;
      lVar7 = *param_2;
      lVar12 = (**(code **)(lVar7 + 200))(param_2);
      uVar8 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,fVar24,*(float *)(lVar12 + 4));
      (**(code **)(lVar7 + 0xb8))(param_2,uVar8);
    }
  }
  lVar7 = (**(code **)(*param_2 + 200))(param_2);
  if ((fVar21 < *(float *)(lVar7 + 4) || fVar21 == *(float *)(lVar7 + 4)) ||
     ((bVar3 && ((((*(char *)((longlong)param_2 + 0x9b9) != '\0' ||
                   (*(char *)((longlong)param_2 + 0x9ba) != '\0')) ||
                  (*(char *)((longlong)param_2 + 0x9bc) != '\0')) ||
                 (((*(char *)((longlong)param_2 + 0x9c4) != '\0' ||
                   (*(char *)((longlong)param_2 + 0x9bb) != '\0')) ||
                  ((*(char *)((longlong)param_1 + 0x422) != '\0' ||
                   (*(char *)((longlong)param_2 + 0x9be) != '\0')))))))))) {
    lVar7 = (**(code **)(*param_2 + 200))(param_2);
    if (fVar20 + *(float *)(param_1 + 0x6d5) < *(float *)(lVar7 + 4)) {
      cVar4 = '\x01';
    }
  }
  else if (*(char *)((longlong)param_2 + 0x9bf) == '\0') {
    if (*(char *)((longlong)param_2 + 0xa1c) == '\0') {
      pfVar6 = (float *)(**(code **)(*param_2 + 200))(param_2);
      lVar7 = *param_2;
      uVar8 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,*pfVar6,fVar21);
      (**(code **)(lVar7 + 0xb8))(param_2,uVar8);
      FUN_14039bf30(param_2,0,0);
      FUN_140393ff0(param_2,1);
    }
  }
  else {
    if (((double)param_2[0x100] != 0.0) &&
       ((double)param_2[0x154] - (double)param_2[0x100] < DAT_140622cf0)) {
      pfVar6 = (float *)(**(code **)(*param_2 + 200))(param_2);
      lVar9 = *param_2;
      uVar8 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,*pfVar6,fVar21);
      (**(code **)(lVar9 + 0xb8))(param_2,uVar8);
      FUN_14039bf30(param_2,0,1);
      FUN_140393ff0(param_2,0,0);
      *(undefined1 *)((longlong)param_2 + 0xa0c) = 0;
      return 0;
    }
    cVar4 = '\x01';
  }
  if ((!bVar3) || ((char)lVar9 != '\0')) goto LAB_140214168;
  fVar17 = (float)FUN_140213770(param_1);
  fVar21 = (float)FUN_140213690(param_1);
  fVar24 = fVar17 - *(float *)((longlong)param_1 + 0x764);
  if (*(char *)((longlong)param_2 + 0x9b9) == '\0') {
LAB_140213c6e:
    local_res8 = local_res8 & 0xffffffffffffff00;
  }
  else {
    local_res8 = CONCAT71(local_res8._1_7_,1);
    if (*(char *)((longlong)param_2 + 0x985) == '\0') goto LAB_140213c6e;
  }
  fVar17 = (fVar17 - fVar23) + fVar20;
  fVar20 = (fVar23 + fVar21) - fVar20;
  lVar9 = (**(code **)(*param_2 + 200))(param_2);
  if (*(float *)(lVar9 + 4) <= fVar17) {
    lVar9 = (**(code **)(*param_2 + 200))(param_2);
    if (*(float *)(lVar9 + 4) <= fVar20 && fVar20 != *(float *)(lVar9 + 4)) {
      if ((*(char *)((longlong)param_2 + 0x9b1) == '\0') ||
         (lVar9 = (**(code **)(*param_2 + 200))(param_2), fVar17 = fVar20 - fVar15 * DAT_140622b08,
         fVar17 < *(float *)(lVar9 + 4) || fVar17 == *(float *)(lVar9 + 4))) {
        if ((((*(char *)((longlong)param_2 + 0x9b9) == '\0') &&
             (((*(char *)((longlong)param_2 + 0x9ba) == '\0' &&
               (*(char *)((longlong)param_2 + 0x9bc) == '\0')) &&
              (*(char *)((longlong)param_2 + 0x9c4) == '\0')))) &&
            (((*(char *)((longlong)param_2 + 0x9bb) == '\0' &&
              (*(char *)((longlong)param_2 + 0x9be) == '\0')) &&
             (*(int *)((longlong)param_2 + 0xb7c) < 1)))) &&
           (*(char *)((longlong)param_2 + 0x9bf) != '\0')) {
          if (((double)param_2[0x100] == 0.0) ||
             (DAT_140622d18 <= (double)param_2[0x154] - (double)param_2[0x100])) {
            if ((double)param_2[0xfb] == 0.0) goto LAB_140213d89;
            if (DAT_140622d18 <= (double)param_2[0x154] - (double)param_2[0xfb]) {
              cVar4 = '\x01';
              goto LAB_140214162;
            }
          }
          fVar17 = (float)(double)param_2[0x134];
          bVar2 = true;
LAB_140213fff:
          bVar3 = bVar2;
          bVar2 = false;
        }
        else {
          bVar2 = false;
          fVar17 = (float)(double)param_2[0x134];
          bVar3 = false;
          if ((*(char *)((longlong)param_2 + 0x9bf) != '\0') ||
             ((((*(char *)((longlong)param_2 + 0x9b9) != '\0' ||
                (*(char *)((longlong)param_2 + 0x9bc) != '\0')) &&
               (*(char *)((longlong)param_2 + 0x986) != '\0')) || (fVar24 == 0.0))))
          goto LAB_140213fff;
          bVar2 = true;
        }
        fVar15 = 0.0;
        if ((!bVar3) &&
           ((((*(char *)((longlong)param_2 + 0x9b9) != '\0' ||
              (*(char *)((longlong)param_2 + 0x9bc) != '\0')) &&
             (*(char *)((longlong)param_2 + 0x986) != '\0')) &&
            (*(float *)(param_1 + 0x35) != *(float *)((longlong)param_1 + 0x1ac))))) {
          fVar15 = DAT_140622c24;
        }
        pfVar6 = (float *)(**(code **)(*param_2 + 200))(param_2);
        lVar9 = *param_2;
        uVar8 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_e0,*pfVar6,fVar15 + fVar20);
        (**(code **)(lVar9 + 0xb8))(param_2,uVar8);
        if (bVar3) {
          param_2[0x134] = 0;
          *(undefined1 *)((longlong)param_2 + 0xa0c) = 0;
          *(undefined1 *)((longlong)param_2 + 0x9c1) = 0;
        }
        else if (((*(char *)((longlong)param_2 + 0x9b9) == '\0') &&
                 (*(char *)((longlong)param_2 + 0x9c4) == '\0')) ||
                ((double)param_2[0x134] <= 0.0 && (double)param_2[0x134] != 0.0)) {
          FUN_14039bf30(param_2,0,*(undefined1 *)((longlong)param_2 + 0x9bf));
        }
        FUN_140393ff0(param_2,*(char *)((longlong)param_2 + 0x9bf) == '\0',0);
        if (((bVar2) && ((double)fVar17 < (double)param_2[0x134])) ||
           ((*(char *)((longlong)param_2 + 0x9bf) != '\0' &&
            ((local_res8._0_1_ != (CCPoint)0x0 && (fVar24 < 0.0)))))) {
          FUN_140388d10(param_2,(double)fVar17);
        }
        goto LAB_14021415b;
      }
      cVar4 = '\x01';
    }
  }
  else {
    if ((*(char *)((longlong)param_2 + 0x9b1) != '\0') &&
       (lVar9 = (**(code **)(*param_2 + 200))(param_2), fVar23 + fVar17 < *(float *)(lVar9 + 4))) {
      cVar4 = '\x01';
      goto LAB_140214162;
    }
    if ((((*(char *)((longlong)param_2 + 0x9b9) == '\0') &&
         (*(char *)((longlong)param_2 + 0x9ba) == '\0')) &&
        (*(char *)((longlong)param_2 + 0x9bc) == '\0')) &&
       (((*(char *)((longlong)param_2 + 0x9c4) == '\0' &&
         (*(char *)((longlong)param_2 + 0x9bb) == '\0')) &&
        ((*(char *)((longlong)param_2 + 0x9be) == '\0' &&
         ((*(int *)((longlong)param_2 + 0xb7c) < 1 && (*(char *)((longlong)param_2 + 0x9bf) == '\0')
          ))))))) {
      if ((((double)param_2[0x100] == 0.0) ||
          (DAT_140622d18 <= (double)param_2[0x154] - (double)param_2[0x100])) &&
         (((double)param_2[0xfb] == 0.0 ||
          (DAT_140622d18 <= (double)param_2[0x154] - (double)param_2[0xfb])))) {
LAB_140213d89:
        cVar4 = '\x01';
        goto LAB_140214162;
      }
      fVar15 = (float)(double)param_2[0x134];
      bVar2 = true;
LAB_140213d9e:
      bVar3 = bVar2;
      bVar2 = false;
    }
    else {
      bVar2 = false;
      fVar15 = (float)(double)param_2[0x134];
      bVar3 = false;
      if (((*(char *)((longlong)param_2 + 0x9bf) == '\0') ||
          (((*(char *)((longlong)param_2 + 0x9b9) != '\0' ||
            (*(char *)((longlong)param_2 + 0x9bc) != '\0')) &&
           (*(char *)((longlong)param_2 + 0x986) != '\0')))) || (fVar24 == 0.0)) goto LAB_140213d9e;
      bVar2 = true;
    }
    pfVar6 = (float *)(**(code **)(*param_2 + 200))(param_2);
    lVar9 = *param_2;
    uVar8 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_e0,*pfVar6,fVar17);
    (**(code **)(lVar9 + 0xb8))(param_2,uVar8);
    if (bVar3) {
      param_2[0x134] = 0;
      *(undefined1 *)((longlong)param_2 + 0xa0c) = 0;
      *(undefined1 *)((longlong)param_2 + 0x9c1) = 0;
    }
    else if (0.0 < (double)param_2[0x134]) {
      FUN_14039bf30(param_2,0,*(char *)((longlong)param_2 + 0x9bf) == '\0');
    }
    FUN_140393ff0(param_2,*(char *)((longlong)param_2 + 0x9bf) != '\0',0);
    if (((bVar2) &&
        ((double)param_2[0x134] <= (double)fVar15 && (double)fVar15 != (double)param_2[0x134])) ||
       ((*(char *)((longlong)param_2 + 0x9bf) == '\0' &&
        ((local_res8._0_1_ != (CCPoint)0x0 && (0.0 < fVar24)))))) {
      dVar19 = (double)fVar15;
      dVar22 = (double)(int)fVar15;
      if (dVar19 != dVar22) {
        dVar19 = (double)round((dVar19 - dVar22) * DAT_140623000);
        dVar19 = dVar19 / DAT_140623000 + dVar22;
      }
      param_2[0x134] = (longlong)dVar19;
    }
LAB_14021415b:
    *(undefined1 *)((longlong)param_2 + 0x9b1) = 0;
  }
LAB_140214162:
  uVar25 = 0;
  fVar17 = local_res18;
LAB_140214168:
  if ((local_res10._0_1_ != (CCPoint)0x0) && (cVar4 != '\0')) {
    if (local_res20 != '\0') {
      return 1;
    }
    (**(code **)(*param_1 + 0x468))(param_1,param_2,0);
    return 1;
  }
  *(char *)(param_2 + 0x187) = cVar4;
  pfVar6 = (float *)(**(code **)(*param_2 + 200))(param_2);
  fVar15 = DAT_14062369c;
  if (0.0 < *pfVar6) {
    pfVar6 = (float *)(**(code **)(*param_2 + 200))(param_2);
    if (*pfVar6 < fVar15) {
      pfVar6 = (float *)(**(code **)(*param_2 + 200))(param_2);
      fVar20 = *pfVar6 * *(float *)(param_1 + 0x6d4);
    }
    else {
      fVar20 = *(float *)(param_1 + 0x6d4) * fVar15;
    }
  }
  else {
    fVar20 = 0.0;
  }
  lVar9 = (**(code **)(*param_2 + 200))(param_2);
  if (0.0 < *(float *)(lVar9 + 4)) {
    lVar9 = (**(code **)(*param_2 + 200))(param_2);
    if (*(float *)(lVar9 + 4) < fVar15) {
      lVar9 = (**(code **)(*param_2 + 200))(param_2);
      fVar15 = *(float *)(lVar9 + 4) * *(float *)((longlong)param_1 + 0x36a4);
    }
    else {
      fVar15 = *(float *)((longlong)param_1 + 0x36a4) * fVar15;
    }
  }
  else {
    fVar15 = 0.0;
  }
  iVar13 = (int)fVar20 + -1;
  iVar16 = 0;
  if (-1 < iVar13) {
    iVar16 = iVar13;
  }
  lVar9 = param_1[0x6b7] - param_1[0x6b6] >> 3;
  iVar13 = (int)fVar20 + 1;
  if (lVar9 - 1U <= (ulonglong)(longlong)iVar13) {
    iVar13 = (int)lVar9 + -1;
  }
  fVar20 = (float)((int)fVar15 + -1);
  local_res10 = 0.0;
  if (-1 < (int)fVar20) {
    local_res10 = fVar20;
  }
  iVar14 = (int)fVar15 + 1;
  local_res8 = CONCAT44(local_res8._4_4_,iVar14);
  *(undefined4 *)((longlong)param_1 + 0x3194) = 0;
  *(undefined4 *)(param_1 + 0x637) = 0;
  if (param_1[0x6b6] != param_1[0x6b7]) {
    lVar9 = (longlong)iVar16;
    local_e0 = (longlong)iVar13;
    if (lVar9 <= local_e0) {
      lVar7 = (longlong)(int)local_res10;
      local_f0[0] = lVar7;
      fVar15 = local_res10;
      do {
        plVar5 = *(longlong **)(param_1[0x6b6] + lVar9 * 8);
        if (plVar5 == (longlong *)0x0) {
          iVar13 = -1;
        }
        else {
          lVar12 = plVar5[1] - *plVar5 >> 3;
          iVar13 = iVar14;
          if (lVar12 - 1U <= (ulonglong)(longlong)iVar14) {
            iVar13 = (int)lVar12 + -1;
          }
        }
        if (lVar7 <= iVar13) {
          do {
            plVar5 = *(longlong **)(**(longlong **)(param_1[0x6b6] + lVar9 * 8) + lVar7 * 8);
            if (plVar5 != (longlong *)0x0) {
              iVar16 = *(int *)(**(longlong **)(param_1[0x6cb] + lVar9 * 8) + lVar7 * 4);
              if ((*(uint *)(**(longlong **)(param_1[0x6d1] + lVar9 * 8) +
                            ((ulonglong)(longlong)(int)fVar15 >> 5) * 4) &
                  1 << (SUB41(fVar15,0) & 0x1f)) != 0) {
                FUN_140251360(*plVar5,*plVar5 + (longlong)iVar16 * 8,(longlong)iVar16,&LAB_140205210
                             );
                iVar14 = 0;
                if (0 < iVar16) {
                  lVar12 = 0;
                  do {
                    *(int *)(*(longlong *)(lVar12 + *plVar5) + 0x274) = iVar14;
                    iVar14 = iVar14 + 1;
                    lVar12 = lVar12 + 8;
                  } while (iVar14 < iVar16);
                }
                puVar1 = (uint *)(**(longlong **)(param_1[0x6d1] + lVar9 * 8) +
                                 ((ulonglong)(longlong)(int)fVar15 >> 5) * 4);
                *puVar1 = *puVar1 & ~(1 << (SUB41(fVar15,0) & 0x1f));
              }
              in_stack_fffffffffffffef8 = fVar17;
              FUN_140214960(param_1,param_2,plVar5,iVar16,fVar17);
            }
            fVar15 = (float)((int)fVar15 + 1);
            lVar7 = lVar7 + 1;
          } while (lVar7 <= iVar13);
          lVar7 = local_f0[0];
          iVar14 = (int)(float)local_res8;
          fVar15 = local_res10;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 <= local_e0);
    }
  }
  if (0 < (int)param_1[0x6bf]) {
    in_stack_fffffffffffffef8 = fVar17;
    FUN_140214960(param_1,param_2,param_1 + 0x6bc,(int)param_1[0x6bf],fVar17);
  }
  if ((param_2[0xc1] == 0) || ((char)param_2[0xcb] == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this = (CCRect *)(**(code **)(*param_2 + 0x490))(param_2);
  fVar20 = cocos2d::CCRect::getMaxX(this);
  fVar21 = cocos2d::CCRect::getMinX(this);
  fVar23 = cocos2d::CCRect::getMaxY(this);
  fVar24 = cocos2d::CCRect::getMinY(this);
  fVar15 = DAT_140623010;
  iVar16 = 0;
  iVar13 = *(int *)((longlong)param_1 + 0x3194);
  if (0 < iVar13) {
    do {
      plVar5 = *(longlong **)(param_1[0x634] + -8 + (longlong)(iVar13 - iVar16) * 8);
      if (*(char *)((longlong)plVar5 + 0x28e) == '\0') {
        if ((char)plVar5[0x6d] != '\0') {
          (**(code **)(*plVar5 + 0x490))(plVar5);
        }
        if ((bVar3) && (0 < (short)plVar5[0x93])) {
          cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,(CCPoint *)(plVar5 + 0x9a));
          (**(code **)(*plVar5 + 0x4a8))(plVar5,&local_res8);
          if (((float)local_res8 != local_res10) || (local_res8._4_4_ != local_res14)) {
            if (*(char *)((longlong)param_2 + 0x9bf) == '\0') {
              if (local_res8._4_4_ < local_res14) {
LAB_1402145a0:
                pCVar10 = (CCRect *)(**(code **)(*plVar5 + 0x490))(plVar5);
                cocos2d::CCRect::CCRect((CCRect *)&local_e0,pCVar10);
                local_d4 = local_d4 + fVar17 * fVar15;
                if (*(char *)((longlong)param_2 + 0x9bf) != '\0') {
                  local_e0 = CONCAT44(local_e0._4_4_ - fVar17 * fVar15,(undefined4)local_e0);
                }
                pCVar10 = (CCRect *)(**(code **)(*param_2 + 0x490))(param_2);
                bVar3 = cocos2d::CCRect::intersectsRect(pCVar10,(CCRect *)&local_e0);
                if (bVar3) {
                  param_2[0xc0] = (longlong)plVar5;
                  bVar3 = false;
                  goto LAB_14021460c;
                }
              }
            }
            else if (local_res14 < local_res8._4_4_) goto LAB_1402145a0;
          }
          bVar3 = true;
        }
LAB_14021460c:
        fVar18 = cocos2d::CCRect::getMinX((CCRect *)(plVar5 + 0x6b));
        if ((((fVar18 <= fVar20) &&
             (fVar18 = cocos2d::CCRect::getMaxX((CCRect *)(plVar5 + 0x6b)), fVar21 <= fVar18)) &&
            (fVar18 = cocos2d::CCRect::getMinY((CCRect *)(plVar5 + 0x6b)), fVar18 <= fVar23)) &&
           (fVar18 = cocos2d::CCRect::getMaxY((CCRect *)(plVar5 + 0x6b)), fVar24 <= fVar18)) {
          uVar8 = cocos2d::CCRect::CCRect((CCRect *)local_f0,(CCRect *)&DAT_1406c2458);
          in_stack_fffffffffffffef8 = (float)((uint)in_stack_fffffffffffffef8 & 0xffffff00);
          FUN_1403919b0(param_2,CONCAT44(uVar25,fVar17),plVar5,uVar8,in_stack_fffffffffffffef8);
          pCVar10 = (CCRect *)(**(code **)(*param_2 + 0x490))(param_2);
          cocos2d::CCRect::operator=(this,pCVar10);
          fVar20 = cocos2d::CCRect::getMaxX(this);
          fVar21 = cocos2d::CCRect::getMinX(this);
          fVar23 = cocos2d::CCRect::getMaxY(this);
          fVar24 = cocos2d::CCRect::getMinY(this);
        }
      }
      iVar16 = iVar16 + 1;
      iVar13 = *(int *)((longlong)param_1 + 0x3194);
    } while (iVar16 < iVar13);
  }
  lVar9 = param_1[0x1b4];
  if ((*(char *)(lVar9 + 0x9c0) != '\0') && (*(char *)(lVar9 + 0x7e9) != '\0')) {
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      local_res8 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    FUN_1403b7f00(DAT_1406c2ed8[0x41],0);
    *(undefined1 *)(lVar9 + 0x7e9) = 0;
  }
  pCVar10 = (CCRect *)(**(code **)(*param_2 + 0x490))(param_2);
  cocos2d::CCRect::operator=(this,pCVar10);
  fVar15 = cocos2d::CCRect::getMaxX(this);
  fVar20 = cocos2d::CCRect::getMinX(this);
  fVar21 = cocos2d::CCRect::getMaxY(this);
  fVar23 = cocos2d::CCRect::getMinY(this);
  (**(code **)(*param_2 + 0x578))(param_2);
  if (0 < (int)param_1[0x637]) {
    iVar13 = 0;
    lVar9 = 0;
    do {
      plVar5 = *(longlong **)(lVar9 + param_1[0x638]);
      if (*(char *)((longlong)plVar5 + 0x28e) == '\0') {
        if ((char)plVar5[0x6d] != '\0') {
          (**(code **)(*plVar5 + 0x490))(plVar5);
        }
        if (*(float *)((longlong)plVar5 + 0x38c) <= 0.0) {
          fVar24 = cocos2d::CCRect::getMinX((CCRect *)(plVar5 + 0x6b));
          if (((fVar24 <= fVar15) &&
              (fVar24 = cocos2d::CCRect::getMaxX((CCRect *)(plVar5 + 0x6b)), fVar20 <= fVar24)) &&
             ((fVar24 = cocos2d::CCRect::getMinY((CCRect *)(plVar5 + 0x6b)), fVar24 <= fVar21 &&
              (fVar24 = cocos2d::CCRect::getMaxY((CCRect *)(plVar5 + 0x6b)), fVar23 <= fVar24))))
          goto LAB_140214865;
        }
        else {
          cVar4 = FUN_140211df0(param_1,param_2,plVar5);
          if (cVar4 != '\0') {
LAB_140214865:
            if (((char)plVar5[0x5d] == '\0') ||
               ((*(char *)(param_1[0x1b6] + 0x1cf) != '\0' &&
                (0.0 < *(float *)((longlong)plVar5 + 0x38c))))) {
LAB_140214937:
              if (local_res20 != '\0') {
                return 1;
              }
              (**(code **)(*param_1 + 0x468))(param_1,param_2,plVar5);
              return 1;
            }
            uVar8 = (**(code **)(*plVar5 + 0x570))(plVar5);
            uVar11 = (**(code **)(*param_2 + 0x570))(param_2);
            cVar4 = FUN_14006e130(uVar8,uVar11,uVar11);
            if ((cVar4 != '\0') && (cVar4 = FUN_14006e130(uVar11,uVar8), cVar4 != '\0'))
            goto LAB_140214937;
          }
        }
      }
      iVar13 = iVar13 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar13 < (int)param_1[0x637]);
  }
  FUN_14038d580(param_2,CONCAT44(uVar25,fVar17),(char)param_1[0x6f3]);
  return 0;
}

