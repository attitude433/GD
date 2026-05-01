// Function: FUN_140391a70
// Original target: REAL_collidedWithObjectVariant @ 0x391a70
// Ghidra entry: 140391a70
// Signature: undefined FUN_140391a70(void)


undefined8
FUN_140391a70(longlong *param_1,float param_2,longlong *param_3,CCRect *param_4,char param_5)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  CCRect *pCVar22;
  float *pfVar23;
  longlong lVar24;
  CCPoint *pCVar25;
  longlong lVar26;
  undefined8 uVar27;
  CCPoint CVar28;
  CCPoint CVar29;
  longlong *plVar30;
  longlong *plVar31;
  bool bVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  double dVar45;
  double dVar46;
  char local_res8;
  undefined8 local_res18;
  char local_1ad;
  char local_1ac;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  uint local_18c;
  float local_188;
  float local_180;
  float local_17c;
  float local_178 [2];
  float local_170;
  undefined8 local_168;
  float local_160;
  double local_158;
  CCPoint local_150 [16];
  double local_140;
  double local_138;
  CCPoint local_130 [16];
  double local_120;
  CCRect local_118 [16];
  CCPoint local_108 [8];
  CCRect local_100 [16];
  CCRect local_f0 [184];
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  
  local_1ac = *(char *)((longlong)param_1 + 0xb01);
  local_1ad = (char)param_1[0x160];
  if ((local_1ac != '\0') && (local_1ad != '\0')) {
    if (*(char *)((longlong)param_1 + 0xb02) == '\0') {
      local_1ac = '\0';
    }
    else {
      local_1ad = '\0';
    }
  }
  bVar14 = cocos2d::CCRect::equals(param_4,(CCRect *)&DAT_1406c2458);
  if (bVar14) {
    pCVar22 = (CCRect *)(**(code **)(*param_1 + 0x490))(param_1);
    cocos2d::CCRect::CCRect((CCRect *)&local_1a0,pCVar22);
    plVar31 = param_3;
    if (param_3 != (longlong *)0x0) {
      param_4 = (CCRect *)(**(code **)(*param_3 + 0x490))(param_3);
    }
  }
  else {
    pCVar22 = (CCRect *)(**(code **)(*param_1 + 0x490))();
    cocos2d::CCRect::CCRect((CCRect *)&local_1a0,pCVar22);
    plVar31 = (longlong *)0x0;
  }
  cocos2d::CCRect::CCRect((CCRect *)local_178,param_4);
  local_188 = DAT_140623010;
  fVar33 = DAT_14062307c;
  if ((((char)param_1[0x16e] != '\0') && (*(char *)((longlong)param_1 + 0x9b1) == '\0')) &&
     ((char)param_1[0x136] == '\0')) {
    fVar33 = DAT_140623010;
  }
  local_140 = (double)fVar33;
  if (0 < (int)param_1[0x15e]) {
    local_140 = DAT_140622ef0;
  }
  cVar2 = *(char *)((longlong)param_1 + 0x9bf);
  iVar21 = -1;
  if (cVar2 == '\0') {
    iVar21 = 1;
  }
  dVar46 = (double)iVar21 * local_140;
  if ((((*(char *)((longlong)param_1 + 0x9b9) != '\0') ||
       (*(char *)((longlong)param_1 + 0x9ba) != '\0')) ||
      ((*(char *)((longlong)param_1 + 0x9bc) != '\0' ||
       (*(char *)((longlong)param_1 + 0x9c4) != '\0')))) && ((char)param_1[0x16e] == '\0')) {
    iVar21 = -1;
    if (cVar2 == '\0') {
      iVar21 = 1;
    }
    dVar46 = (double)((float)iVar21 * DAT_140623028);
  }
  if (*(char *)((longlong)param_1 + 0x9b1) != '\0') {
    iVar21 = -1;
    if (cVar2 == '\0') {
      iVar21 = 1;
    }
    dVar46 = dVar46 + (double)iVar21 * (double)param_1[0xd0];
  }
  if (plVar31 == (longlong *)0x0) {
    local_res8 = '\0';
  }
  else {
    local_res8 = *(char *)((longlong)plVar31 + 0x515);
  }
  local_18c = (uint)param_4 & 0xffffff00;
  bVar14 = false;
  bVar7 = false;
  local_160 = 0.0;
  local_190 = 0.0;
  if ((param_3 != (longlong *)0x0) && (0.0 < param_2)) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_180,(CCPoint *)(param_3 + 0x9a));
    (**(code **)(*param_3 + 0x4a8))(param_3,&local_res18);
    fVar43 = local_17c;
    fVar33 = local_180;
    if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
      fVar1 = local_res18._4_4_;
      lVar24 = (**(code **)(*param_1 + 200))(param_1);
      fVar44 = *(float *)(lVar24 + 4);
    }
    else {
      fVar1 = (float)local_res18;
      pfVar23 = (float *)(**(code **)(*param_1 + 200))();
      fVar44 = *pfVar23;
      fVar43 = fVar33;
    }
    if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
      lVar24 = FUN_14019c5a0(param_3,&local_138);
      fVar33 = *(float *)(lVar24 + 4);
    }
    else {
      pfVar23 = (float *)FUN_14019c5a0(param_3,&local_158);
      fVar33 = *pfVar23;
    }
    if (fVar33 != 0.0) {
      if (fVar1 <= fVar44) {
        fVar43 = fVar43 - fVar33;
      }
      else {
        fVar43 = fVar43 + fVar33;
      }
    }
    if (((float)local_res18 != local_180) || (local_res18._4_4_ != local_17c)) {
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        if (fVar1 <= fVar43) {
          bVar32 = fVar43 < fVar1;
LAB_140391e24:
          if (!bVar32 && fVar1 != fVar43) {
            bVar7 = true;
          }
          goto LAB_140391e2b;
        }
      }
      else if (fVar43 <= fVar1) {
        bVar32 = fVar1 < fVar43;
        goto LAB_140391e24;
      }
      local_190 = (fVar1 - fVar43) / param_2;
      local_18c = (uint)(DAT_140622e98 < (double)(float)((uint)local_190 & DAT_1406243c0));
      iVar21 = -1;
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        iVar21 = 1;
      }
      dVar46 = dVar46 + (double)iVar21 * (double)(float)((uint)local_190 & DAT_1406243c0);
      if ((char)param_1[0x16e] == '\0') {
        param_1[0xc6] = (longlong)(double)local_190;
      }
      bVar14 = true;
    }
  }
LAB_140391e2b:
  if ((char)param_1[0x16e] == '\0') {
    local_188 = 0.0;
  }
  if ((((*(int *)((longlong)param_1 + 0xb7c) < 1) && ((char)param_1[0x16e] == '\0')) &&
      ((int)param_1[0x170] < 1)) || (bVar32 = true, local_res8 != '\0')) {
    bVar32 = false;
  }
  if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
    lVar24 = (**(code **)(*param_1 + 200))(param_1);
    fVar33 = *(float *)(lVar24 + 4) - *(float *)((longlong)param_1 + 0x4d4);
  }
  else {
    pfVar23 = (float *)(**(code **)(*param_1 + 200))();
    fVar33 = *pfVar23 - *(float *)(param_1 + 0x9a);
  }
  dVar45 = (double)fVar33;
  (**(code **)(*param_1 + 200))(param_1);
  iVar21 = -1;
  if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
    iVar21 = 1;
  }
  lVar24 = (**(code **)(*param_1 + 200))(param_1);
  dVar38 = (double)(*(float *)(lVar24 + 4) - local_194 * DAT_140622b08 * (float)iVar21) + dVar46;
  dVar5 = dVar38 - dVar45;
  cVar2 = *(char *)((longlong)param_1 + 0x9bf);
  lVar24 = (**(code **)(*param_1 + 200))(param_1);
  iVar21 = 1;
  if (cVar2 == '\0') {
    iVar21 = -1;
  }
  dVar46 = (double)(*(float *)(lVar24 + 4) - (float)iVar21 * local_194 * DAT_140622b08) - dVar46;
  (**(code **)(*param_1 + 200))(param_1);
  if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
    if (0.0 < dVar45) goto LAB_140391f7e;
LAB_140391f85:
    bVar10 = false;
  }
  else {
    if (0.0 <= dVar45) goto LAB_140391f85;
LAB_140391f7e:
    bVar10 = true;
  }
  fVar33 = cocos2d::CCRect::getMinX((CCRect *)local_178);
  local_138 = (double)fVar33;
  fVar33 = cocos2d::CCRect::getMaxX((CCRect *)local_178);
  local_158 = (double)fVar33;
  fVar33 = cocos2d::CCRect::getMaxY((CCRect *)local_178);
  dVar6 = (double)fVar33;
  fVar43 = cocos2d::CCRect::getMinY((CCRect *)local_178);
  uVar13 = local_res18;
  dVar39 = DAT_140622e60;
  dVar40 = (double)fVar43;
  local_120 = (double)(local_170 * DAT_140622b08 + local_178[0]);
  local_res18 = local_res18 & 0xffffffffffffff00;
  bVar17 = true;
  if ((*(char *)((longlong)param_1 + 0x9bc) != '\0') &&
     (fVar44 = DAT_140622b08, (int)param_1[0x16f] < 1)) goto LAB_140392906;
  if (((char)param_1[0x136] == '\0') &&
     ((*(char *)((longlong)param_1 + 0x9b1) == '\0' && (param_1[0xde] == 0)))) {
    bVar12 = false;
    bVar9 = false;
    bVar11 = false;
  }
  else {
    bVar18 = false;
    bVar9 = false;
    bVar11 = false;
    local_res18._1_7_ = SUB87(uVar13,1);
    if (((char)param_1[0x136] == '\0') &&
       ((*(char *)((longlong)param_1 + 0x9b1) == '\0' && (plVar31 != (longlong *)0x0)))) {
      local_res18 = (ulonglong)local_res18._1_7_ << 8;
    }
    else {
      local_res18 = CONCAT71(local_res18._1_7_,1);
    }
    bVar12 = false;
    local_168 = (longlong *)param_1[0xdd];
    plVar30 = (longlong *)*local_168;
    if (plVar30 != local_168) {
      CVar29 = local_res18._0_1_;
      do {
        plVar3 = (longlong *)plVar30[3];
        if ((CVar29 == (CCPoint)0x0) && (plVar3 != (longlong *)param_1[0xcf])) {
          lVar24 = *plVar3;
          pfVar23 = (float *)(**(code **)(*plVar31 + 200))(plVar31);
          pCVar22 = (CCRect *)(**(code **)(lVar24 + 0x490))(plVar3);
          fVar44 = cocos2d::CCRect::getMinX(pCVar22);
          bVar18 = bVar9;
          if (fVar44 < *pfVar23) {
            lVar24 = *plVar3;
            pfVar23 = (float *)(**(code **)(*plVar31 + 200))(plVar31);
            pCVar22 = (CCRect *)(**(code **)(lVar24 + 0x490))(plVar3);
            fVar44 = cocos2d::CCRect::getMaxX(pCVar22);
            if (*pfVar23 <= fVar44 && fVar44 != *pfVar23) goto LAB_14039213d;
          }
        }
        else {
LAB_14039213d:
          pCVar22 = (CCRect *)(**(code **)(*plVar3 + 0x488))(plVar3,local_118);
          bVar15 = cocos2d::CCRect::intersectsRect((CCRect *)local_178,pCVar22);
          if (bVar15) {
            pCVar22 = (CCRect *)(**(code **)(*plVar3 + 0x488))(plVar3,local_150);
            bVar15 = cocos2d::CCRect::intersectsRect((CCRect *)&local_1a0,pCVar22);
            if (bVar15) {
              bVar12 = true;
              pCVar22 = (CCRect *)cocos2d::CCRect::CCRect(local_100,(CCRect *)local_178);
              iVar21 = *(int *)((longlong)plVar3 + 0x444);
              if ((iVar21 == 1) || (((iVar21 - 3U & 0xfffffffc) == 0 && (iVar21 != 4)))) {
                bVar15 = true;
              }
              else {
                bVar15 = false;
              }
              if ((char)plVar3[0x88] == '\0') {
                if (bVar15) goto LAB_14039221d;
LAB_1403921df:
                auVar41._0_4_ = cocos2d::CCRect::getMaxX(pCVar22);
                auVar41._4_12_ = extraout_var;
                uVar27 = auVar41._0_8_;
              }
              else {
                if (bVar15) goto LAB_1403921df;
LAB_14039221d:
                auVar42._0_4_ = cocos2d::CCRect::getMinX(pCVar22);
                auVar42._4_12_ = extraout_var_00;
                uVar27 = auVar42._0_8_;
              }
              dVar34 = (double)FUN_1401a13b0(plVar3,uVar27);
              iVar21 = *(int *)((longlong)plVar3 + 0x444);
              if ((iVar21 == 1) || (((iVar21 - 3U & 0xfffffffc) == 0 && (iVar21 != 4)))) {
                bVar15 = true;
              }
              else {
                bVar15 = false;
              }
              if ((dVar6 <= dVar34 + dVar39) && ((!bVar15 || ((longlong *)param_1[0xcf] == plVar3)))
                 ) {
                bVar18 = true;
                bVar9 = true;
              }
              if ((dVar34 - dVar39 <= dVar40) && ((bVar15 || ((longlong *)param_1[0xcf] == plVar3)))
                 ) {
                bVar11 = true;
              }
            }
          }
        }
      } while (((!bVar18) || (!bVar11)) && (plVar30 = (longlong *)*plVar30, plVar30 != local_168));
    }
  }
  fVar44 = DAT_140622b08;
  iVar21 = 0;
  if ((plVar31 == (longlong *)0x0) ||
     (iVar19 = (**(code **)(*plVar31 + 0x660))(plVar31), iVar19 != 0x15)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
  }
  cocos2d::CCRect::CCRect
            (local_f0,local_188 * fVar44 + local_1a0,local_19c,local_198 - local_188,local_194);
  if ((((*(char *)((longlong)param_1 + 0x9b9) != '\0') ||
       (*(char *)((longlong)param_1 + 0x9ba) != '\0')) ||
      ((*(char *)((longlong)param_1 + 0x9bc) != '\0' ||
       (((*(char *)((longlong)param_1 + 0x9c4) != '\0' ||
         (*(char *)((longlong)param_1 + 0x9bb) != '\0')) ||
        (*(char *)((longlong)param_1 + 0x9bd) != '\0')))))) ||
     (bVar15 = true, *(char *)((longlong)param_1 + 0x9be) != '\0')) {
    bVar15 = false;
  }
  if ((*(char *)((longlong)param_1 + 0x9bf) == '\0') ||
     ((((*(char *)((longlong)param_1 + 0x9b9) != '\0' ||
        (*(char *)((longlong)param_1 + 0x9ba) != '\0')) ||
       ((*(char *)((longlong)param_1 + 0x9bc) != '\0' ||
        ((*(char *)((longlong)param_1 + 0x9c4) != '\0' ||
         (*(char *)((longlong)param_1 + 0x9bb) != '\0')))))) && (local_res8 == '\0')))) {
    bVar8 = true;
    if (*(char *)((longlong)param_1 + 0x9bf) != '\0') goto LAB_14039239b;
    if ((dVar40 < dVar38) && (dVar40 < dVar5)) goto LAB_1403923f3;
LAB_1403923ab:
    CVar29 = (CCPoint)0x1;
    local_res18 = CONCAT71(local_res18._1_7_,1);
    if (((((char)param_1[0x16e] == '\0') || (!bVar18)) || (!bVar10)) ||
       (*(char *)((longlong)param_1 + 0x98e) != '\0')) goto LAB_1403923f5;
    bVar10 = true;
LAB_14039240a:
    if (((char)param_1[0x136] != '\0') || (*(char *)((longlong)param_1 + 0x9b1) != '\0')) {
      if (CVar29 == (CCPoint)0x0) {
        if ((char)param_1[0x137] != '\0') goto LAB_140392434;
      }
      else if ((char)param_1[0x137] == '\0') {
LAB_140392434:
        bVar12 = false;
      }
    }
    if ((param_5 == '\0') &&
       (bVar16 = cocos2d::CCRect::intersectsRect(local_f0,(CCRect *)local_178), !bVar16))
    goto LAB_140392906;
  }
  else {
    bVar8 = false;
LAB_14039239b:
    if ((dVar6 <= dVar38) || (dVar6 <= dVar5)) goto LAB_1403923ab;
LAB_1403923f3:
    CVar29 = (CCPoint)0x0;
LAB_1403923f5:
    local_res18 = CONCAT71(local_res18._1_7_,CVar29);
    bVar10 = false;
    if ((char)param_1[0x16e] != '\0') goto LAB_14039240a;
  }
  dVar39 = DAT_140622e18;
  iVar19 = 0;
  CVar28 = CVar29;
  if ((bVar8) || (bVar32)) {
    cVar2 = *(char *)((longlong)param_1 + 0x9bf);
    dVar37 = dVar5;
    dVar34 = dVar38;
    if (cVar2 != '\0') {
      dVar37 = dVar46 - dVar45;
      dVar34 = dVar46;
    }
    if ((dVar34 < dVar6) && (dVar37 < dVar6)) goto LAB_14039289b;
    if ((cVar2 == '\0') ||
       (((*(char *)((longlong)param_1 + 0x9ba) == '\0' || (!bVar18)) ||
        ((char)param_1[0x16e] != '\0')))) {
      dVar34 = (double)param_1[0x134];
      if ((((0.0 < dVar34) && (*(char *)((longlong)param_1 + 0x9b1) == '\0')) &&
          ((char)local_18c == '\0')) || ((bVar12 && (bVar9)))) {
        if (cVar2 == '\0') {
          if ((CVar29 == (CCPoint)0x0) && (bVar14)) {
            lVar24 = *param_1;
            fVar44 = local_194 * DAT_140622b08;
            pfVar23 = (float *)(**(code **)(lVar24 + 200))(param_1);
            uVar27 = cocos2d::CCPoint::CCPoint
                               ((CCPoint *)&local_168,*pfVar23,(float)((double)fVar44 + dVar6));
            (**(code **)(lVar24 + 0xb8))(param_1,uVar27);
            if ((*(char *)((longlong)param_1 + 0x9bf) == '\0') ||
               ((((*(char *)((longlong)param_1 + 0x9b9) == '\0' &&
                  (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
                 (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
                (*(char *)((longlong)param_1 + 0x9c4) == '\0')))) {
              uVar27 = 0;
            }
            else {
              uVar27 = 1;
            }
            FUN_14039bf30(param_1,plVar31,uVar27);
            iVar20 = iVar19;
            if (plVar31 != (longlong *)0x0) {
              iVar20 = *(int *)((longlong)plVar31 + 0x39c);
            }
            dVar37 = (double)param_1[300];
            dVar35 = (double)fVar33;
            dVar36 = dVar35;
            if (dVar37 != 0.0) {
              dVar36 = dVar37;
              if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
                if (dVar37 <= dVar35) {
                  dVar36 = dVar35;
                }
              }
              else if (dVar35 <= dVar37) {
                dVar36 = dVar35;
              }
            }
            param_1[300] = (longlong)dVar36;
            if ((iVar20 != 0) && (iVar20 != (int)param_1[0xba])) {
              *(int *)(param_1 + 0xba) = iVar20;
              if ((CCDictionary *)param_1[0xb7] != (CCDictionary *)0x0) {
                cocos2d::CCDictionary::setObject
                          ((CCDictionary *)param_1[0xb7],(CCObject *)param_1[0xb5],(longlong)iVar20)
                ;
              }
            }
            if (param_3 != (longlong *)0x0) {
              param_1[0xc1] = (longlong)param_3;
              if (*(char *)((longlong)param_3 + 0x51d) != '\0') {
                *(undefined4 *)((longlong)param_1 + 0xae4) = 2;
              }
              if (*(char *)((longlong)param_3 + 0x51e) != '\0') {
                *(undefined4 *)(param_1 + 0x15d) = 2;
              }
            }
            param_1[0xc6] = (longlong)(double)local_190;
            FUN_140388d10(param_1,dVar34);
            dVar34 = (double)param_1[0x134];
            if ((double)param_1[0x134] <= (double)param_1[0xc6]) {
              dVar34 = (double)param_1[0xc6];
            }
            FUN_140388d10(param_1,dVar34);
LAB_140392884:
            CVar28 = local_res18._0_1_;
          }
        }
        else if ((CVar29 != (CCPoint)0x0) && (bVar7)) {
          dVar34 = (double)param_1[0x134];
          lVar24 = *param_1;
          fVar44 = local_194 * DAT_140622b08;
          pfVar23 = (float *)(**(code **)(lVar24 + 200))(param_1);
          uVar27 = cocos2d::CCPoint::CCPoint
                             ((CCPoint *)&local_168,*pfVar23,(float)((double)fVar44 + dVar6));
          (**(code **)(lVar24 + 0xb8))(param_1,uVar27);
          FUN_14039bed0(param_1);
          if ((!bVar18) && (local_res8 == '\0')) {
            iVar20 = iVar19;
            if (plVar31 != (longlong *)0x0) {
              iVar20 = *(int *)((longlong)plVar31 + 0x39c);
            }
            dVar37 = (double)param_1[299];
            dVar35 = (double)fVar33;
            dVar36 = dVar35;
            if (dVar37 != 0.0) {
              dVar36 = dVar37;
              if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
                if (dVar35 <= dVar37) {
                  dVar36 = dVar35;
                }
              }
              else if (dVar37 <= dVar35) {
                dVar36 = dVar35;
              }
            }
            param_1[299] = (longlong)dVar36;
            if ((iVar20 != 0) && (iVar20 != *(int *)((longlong)param_1 + 0x5d4))) {
              *(int *)((longlong)param_1 + 0x5d4) = iVar20;
              if ((CCDictionary *)param_1[0xb6] != (CCDictionary *)0x0) {
                cocos2d::CCDictionary::setObject
                          ((CCDictionary *)param_1[0xb6],(CCObject *)param_1[0xb5],(longlong)iVar20)
                ;
              }
            }
          }
          FUN_140388d10(param_1,(double)(float)dVar34);
          dVar37 = (double)param_1[0xc6] + dVar39;
          dVar34 = (double)param_1[0x134];
          if ((double)param_1[0x134] <= dVar37) {
            dVar34 = dVar37;
          }
          FUN_140388d10(param_1,dVar34);
          FUN_140393c30(param_1);
          if (bVar10) {
            *(undefined1 *)((longlong)param_1 + 0x98e) = 1;
            if (param_1[0x184] == 0) {
              *(undefined1 *)((longlong)plVar31 + 0x3d2) = 1;
              *(undefined1 *)((longlong)plVar31 + 0x306) = 1;
              (**(code **)(plVar31[0x28] + 0x28))(plVar31 + 0x28,0);
            }
            else {
              FUN_140216090(param_1[0x184],plVar31);
            }
          }
          goto LAB_140392884;
        }
LAB_140392893:
        bVar9 = false;
        bVar17 = false;
        goto LAB_14039289d;
      }
      if (CVar29 != (CCPoint)0x0) {
        iVar19 = 1;
        if (*(char *)((longlong)param_1 + 0x9bf) != '\0') {
          iVar19 = -1;
        }
        if ((0.0 < (double)iVar19 * dVar34) && (param_1[0x184] != 0)) {
          FUN_140231ff0(param_1[0x184],6,0,*(undefined4 *)((longlong)param_1 + 0x39c));
        }
      }
      lVar24 = *param_1;
      fVar44 = local_194 * DAT_140622b08;
      pfVar23 = (float *)(**(code **)(lVar24 + 200))(param_1);
      uVar27 = cocos2d::CCPoint::CCPoint(local_150,*pfVar23,(float)((double)fVar44 + dVar6));
      (**(code **)(lVar24 + 0xb8))(param_1,uVar27);
      if (bVar15) {
        FUN_140393cb0(param_1,plVar31);
      }
      CVar29 = local_res18._0_1_;
      if ((!bVar32) || (bVar8)) {
        if ((*(char *)((longlong)param_1 + 0x9bf) == '\0') ||
           ((((*(char *)((longlong)param_1 + 0x9b9) == '\0' &&
              (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
             (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
            (*(char *)((longlong)param_1 + 0x9c4) == '\0')))) {
          uVar27 = 0;
        }
        else {
          uVar27 = 1;
        }
        if (local_res18._0_1_ == (CCPoint)0x0) {
          FUN_14039bf30(param_1,plVar31,uVar27);
        }
        else {
          FUN_14039bed0();
        }
      }
      else {
        param_1[0x134] = 0;
      }
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        if (CVar29 != (CCPoint)0x0) {
          if ((!bVar18) && (local_res8 == '\0')) {
            if (plVar31 != (longlong *)0x0) {
              iVar21 = *(int *)((longlong)plVar31 + 0x39c);
            }
            dVar46 = (double)param_1[299];
            dVar38 = (double)fVar43;
            dVar45 = dVar38;
            if ((dVar46 != 0.0) && (dVar45 = dVar46, dVar38 <= dVar46)) {
              dVar45 = dVar38;
            }
LAB_140393a0b:
            param_1[299] = (longlong)dVar45;
            if ((iVar21 != 0) && (iVar21 != *(int *)((longlong)param_1 + 0x5d4))) {
              *(int *)((longlong)param_1 + 0x5d4) = iVar21;
              if ((CCDictionary *)param_1[0xb6] != (CCDictionary *)0x0) {
                cocos2d::CCDictionary::setObject
                          ((CCDictionary *)param_1[0xb6],(CCObject *)param_1[0xb5],(longlong)iVar21)
                ;
              }
            }
          }
          goto LAB_140393a44;
        }
        if (plVar31 != (longlong *)0x0) {
          iVar21 = *(int *)((longlong)plVar31 + 0x39c);
        }
        dVar46 = (double)param_1[300];
        dVar38 = (double)fVar33;
        dVar45 = dVar38;
        if ((dVar46 != 0.0) && (dVar45 = dVar46, dVar46 <= dVar38)) {
          dVar45 = dVar38;
        }
LAB_140393a8f:
        param_1[300] = (longlong)dVar45;
        if ((iVar21 != 0) && (iVar21 != (int)param_1[0xba])) {
          *(int *)(param_1 + 0xba) = iVar21;
          if ((CCDictionary *)param_1[0xb7] != (CCDictionary *)0x0) {
            cocos2d::CCDictionary::setObject
                      ((CCDictionary *)param_1[0xb7],(CCObject *)param_1[0xb5],(longlong)iVar21);
          }
        }
        if (param_3 != (longlong *)0x0) {
          param_1[0xc1] = (longlong)param_3;
          if (*(char *)((longlong)param_3 + 0x51d) != '\0') {
            *(undefined4 *)((longlong)param_1 + 0xae4) = 2;
          }
          if (*(char *)((longlong)param_3 + 0x51e) != '\0') {
            *(undefined4 *)(param_1 + 0x15d) = 2;
          }
        }
        param_1[0xc6] = (longlong)(double)local_190;
      }
      else {
        if (CVar29 == (CCPoint)0x0) {
          if (plVar31 != (longlong *)0x0) {
            iVar21 = *(int *)((longlong)plVar31 + 0x39c);
          }
          dVar46 = (double)param_1[300];
          dVar38 = (double)fVar43;
          dVar45 = dVar38;
          if ((dVar46 != 0.0) && (dVar45 = dVar46, dVar38 <= dVar46)) {
            dVar45 = dVar38;
          }
          goto LAB_140393a8f;
        }
        if ((!bVar18) && (local_res8 == '\0')) {
          if (plVar31 != (longlong *)0x0) {
            iVar21 = *(int *)((longlong)plVar31 + 0x39c);
          }
          dVar46 = (double)param_1[299];
          dVar38 = (double)fVar33;
          dVar45 = dVar38;
          if ((dVar46 != 0.0) && (dVar45 = dVar46, dVar46 <= dVar38)) {
            dVar45 = dVar38;
          }
          goto LAB_140393a0b;
        }
LAB_140393a44:
        if ((char)param_1[0x16e] != '\0') {
          FUN_14038cf30(param_1);
        }
      }
      if (((bVar15) && (0 < *(int *)((longlong)param_1 + 0xb74))) && ((char)param_1[0xfc] != '\0'))
      {
        *(undefined1 *)((longlong)param_1 + 0x985) = 0;
      }
      if ((((*(char *)((longlong)param_1 + 0x9b9) == '\0') &&
           (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
          ((*(char *)((longlong)param_1 + 0x9bc) == '\0' &&
           (*(char *)((longlong)param_1 + 0x9c4) == '\0')))) || (!bVar14)) {
LAB_140393b7d:
        if (CVar29 == (CCPoint)0x0) goto LAB_140393b89;
      }
      else {
        if (CVar29 == (CCPoint)0x0) goto LAB_140393b89;
        FUN_140388d10(param_1,param_1[0xc6]);
      }
LAB_140393b81:
      FUN_140393c30(param_1);
LAB_140393b89:
      if (!bVar10) goto LAB_140393bcd;
      *(undefined1 *)((longlong)param_1 + 0x98e) = 1;
    }
    else {
      pCVar22 = (CCRect *)(**(code **)(*param_1 + 0x488))(param_1,local_118);
      bVar17 = cocos2d::CCRect::intersectsRect((CCRect *)local_178,pCVar22);
      if (!bVar17) goto LAB_140392893;
    }
LAB_140393b98:
    if (param_1[0x184] == 0) {
      *(undefined1 *)((longlong)plVar31 + 0x3d2) = 1;
      *(undefined1 *)((longlong)plVar31 + 0x306) = 1;
      (**(code **)(plVar31[0x28] + 0x28))(plVar31 + 0x28,0);
    }
    else {
      FUN_140216090(param_1[0x184],plVar31);
    }
LAB_140393bcd:
    uVar27 = 1;
  }
  else {
LAB_14039289b:
    bVar9 = true;
LAB_14039289d:
    fVar44 = DAT_140622b08;
    if ((*(char *)((longlong)param_1 + 0x9bf) == '\0') &&
       ((((*(char *)((longlong)param_1 + 0x9b9) == '\0' &&
          (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
         ((*(char *)((longlong)param_1 + 0x9bc) == '\0' &&
          ((*(char *)((longlong)param_1 + 0x9c4) == '\0' &&
           (*(char *)((longlong)param_1 + 0x9bb) == '\0')))))) || (local_res8 != '\0')))) {
      bVar8 = false;
      if (!bVar32) goto LAB_140392906;
    }
    else {
      bVar8 = true;
    }
    if (bVar9) {
      cVar2 = *(char *)((longlong)param_1 + 0x9bf);
      dVar45 = dVar46 - dVar45;
      if (cVar2 != '\0') {
        dVar46 = dVar38;
        dVar45 = dVar5;
      }
      iVar20 = iVar19;
      if (plVar31 != (longlong *)0x0) {
        iVar20 = *(int *)((longlong)plVar31 + 0x39c);
      }
      if ((dVar46 <= dVar40) || (dVar45 <= dVar40)) {
LAB_140392b6e:
        if ((((cVar2 == '\0') && (*(char *)((longlong)param_1 + 0x9ba) != '\0')) && (bVar18)) &&
           ((char)param_1[0x16e] == '\0')) {
          pCVar22 = (CCRect *)(**(code **)(*param_1 + 0x488))(param_1,local_130);
          bVar14 = cocos2d::CCRect::intersectsRect((CCRect *)local_178,pCVar22);
          if (bVar14) goto LAB_140393b98;
        }
        else {
LAB_140392a60:
          if (((((0.0 <= (double)param_1[0x134]) ||
                (((char)param_1[0x16e] != '\0' && (0.0 < (double)param_1[199])))) ||
               (*(char *)((longlong)param_1 + 0x9b1) != '\0')) || ((char)local_18c != '\0')) &&
             ((!bVar12 || (!bVar11)))) {
            if (CVar28 != (CCPoint)0x0) {
              iVar19 = -1;
              if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
                iVar19 = 1;
              }
              if ((0.0 < (double)iVar19 * (double)param_1[0x134]) && (param_1[0x184] != 0)) {
                FUN_140231ff0(param_1[0x184],6,0,*(undefined4 *)((longlong)param_1 + 0x39c));
              }
            }
            lVar24 = *param_1;
            fVar44 = local_194 * DAT_140622b08;
            pfVar23 = (float *)(**(code **)(lVar24 + 200))(param_1);
            uVar27 = cocos2d::CCPoint::CCPoint
                               ((CCPoint *)&local_158,*pfVar23,(float)(dVar40 - (double)fVar44));
            (**(code **)(lVar24 + 0xb8))(param_1,uVar27);
            if (bVar15) {
              FUN_140393cb0(param_1,plVar31);
            }
            CVar29 = local_res18._0_1_;
            if ((!bVar32) || (bVar8)) {
              if ((*(char *)((longlong)param_1 + 0x9bf) == '\0') &&
                 ((((*(char *)((longlong)param_1 + 0x9b9) != '\0' ||
                    (*(char *)((longlong)param_1 + 0x9ba) != '\0')) ||
                   (*(char *)((longlong)param_1 + 0x9bc) != '\0')) ||
                  (*(char *)((longlong)param_1 + 0x9c4) != '\0')))) {
                uVar27 = 1;
              }
              else {
                uVar27 = 0;
              }
              if (local_res18._0_1_ == (CCPoint)0x0) {
                FUN_14039bf30(param_1,plVar31,uVar27);
              }
              else {
                FUN_14039bed0();
              }
            }
            else {
              param_1[0x134] = 0;
            }
            if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
              if (CVar29 != (CCPoint)0x0) {
                if ((!bVar18) && (local_res8 == '\0')) {
                  if (plVar31 != (longlong *)0x0) {
                    iVar21 = *(int *)((longlong)plVar31 + 0x39c);
                  }
                  dVar46 = (double)param_1[299];
                  dVar38 = (double)fVar43;
                  dVar45 = dVar38;
                  if ((dVar46 != 0.0) && (dVar45 = dVar46, dVar38 <= dVar46)) {
                    dVar45 = dVar38;
                  }
                  param_1[299] = (longlong)dVar45;
LAB_1403930cf:
                  if ((iVar21 != 0) && (iVar21 != *(int *)((longlong)param_1 + 0x5d4))) {
                    *(int *)((longlong)param_1 + 0x5d4) = iVar21;
                    if ((CCDictionary *)param_1[0xb6] != (CCDictionary *)0x0) {
                      cocos2d::CCDictionary::setObject
                                ((CCDictionary *)param_1[0xb6],(CCObject *)param_1[0xb5],
                                 (longlong)iVar21);
                    }
                  }
                }
                goto LAB_140393100;
              }
              if (plVar31 != (longlong *)0x0) {
                iVar21 = *(int *)((longlong)plVar31 + 0x39c);
              }
              dVar46 = (double)param_1[300];
              dVar38 = (double)fVar33;
              dVar45 = dVar38;
              if ((dVar46 != 0.0) && (dVar45 = dVar46, dVar46 <= dVar38)) {
                dVar45 = dVar38;
              }
LAB_14039314b:
              param_1[300] = (longlong)dVar45;
              if ((iVar21 != 0) && (iVar21 != (int)param_1[0xba])) {
                *(int *)(param_1 + 0xba) = iVar21;
                if ((CCDictionary *)param_1[0xb7] != (CCDictionary *)0x0) {
                  cocos2d::CCDictionary::setObject
                            ((CCDictionary *)param_1[0xb7],(CCObject *)param_1[0xb5],
                             (longlong)iVar21);
                }
              }
              if (param_3 != (longlong *)0x0) {
                param_1[0xc1] = (longlong)param_3;
                if (*(char *)((longlong)param_3 + 0x51d) != '\0') {
                  *(undefined4 *)((longlong)param_1 + 0xae4) = 2;
                }
                if (*(char *)((longlong)param_3 + 0x51e) != '\0') {
                  *(undefined4 *)(param_1 + 0x15d) = 2;
                }
              }
              param_1[0xc6] = (longlong)(double)local_190;
            }
            else {
              if (CVar29 == (CCPoint)0x0) {
                if (plVar31 != (longlong *)0x0) {
                  iVar21 = *(int *)((longlong)plVar31 + 0x39c);
                }
                dVar46 = (double)param_1[300];
                dVar38 = (double)fVar43;
                dVar45 = dVar38;
                if ((dVar46 != 0.0) && (dVar45 = dVar46, dVar38 <= dVar46)) {
                  dVar45 = dVar38;
                }
                goto LAB_14039314b;
              }
              if ((!bVar18) && (local_res8 == '\0')) {
                if (plVar31 != (longlong *)0x0) {
                  iVar21 = *(int *)((longlong)plVar31 + 0x39c);
                }
                dVar46 = (double)param_1[299];
                dVar38 = (double)fVar33;
                dVar45 = dVar38;
                if ((dVar46 != 0.0) && (dVar45 = dVar46, dVar46 <= dVar38)) {
                  dVar45 = dVar38;
                }
                param_1[299] = (longlong)dVar45;
                goto LAB_1403930cf;
              }
LAB_140393100:
              if ((char)param_1[0x16e] != '\0') {
                FUN_14038cf30(param_1);
              }
            }
            if (((bVar15) && (0 < *(int *)((longlong)param_1 + 0xb74))) &&
               ((char)param_1[0xfc] != '\0')) {
              *(undefined1 *)((longlong)param_1 + 0x985) = 0;
            }
            if ((((*(char *)((longlong)param_1 + 0x9b9) == '\0') &&
                 (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
                ((*(char *)((longlong)param_1 + 0x9bc) == '\0' &&
                 (*(char *)((longlong)param_1 + 0x9c4) == '\0')))) || (!bVar14)) goto LAB_140393b7d;
            if (CVar29 != (CCPoint)0x0) {
              dVar46 = (double)param_1[0xc6];
              dVar45 = (double)(int)dVar46;
              if (dVar46 == dVar45) {
                param_1[0x134] = (longlong)dVar46;
              }
              else {
                dVar46 = (double)round((dVar46 - dVar45) * DAT_140623000);
                param_1[0x134] = (longlong)(dVar46 / DAT_140623000 + dVar45);
              }
              goto LAB_140393b81;
            }
            goto LAB_140393b89;
          }
          if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
            local_res18 = CONCAT71(local_res18._1_7_,CVar29);
            if ((CVar29 != (CCPoint)0x0) &&
               (local_res18 = CONCAT71(local_res18._1_7_,CVar29), bVar7)) {
              lVar24 = param_1[0x134];
              lVar26 = *param_1;
              fVar33 = local_194 * DAT_140622b08;
              pfVar23 = (float *)(**(code **)(lVar26 + 200))(param_1);
              uVar27 = cocos2d::CCPoint::CCPoint
                                 ((CCPoint *)&local_res18,*pfVar23,(float)(dVar40 - (double)fVar33))
              ;
              (**(code **)(lVar26 + 0xb8))(param_1,uVar27);
              FUN_14039bed0(param_1);
              if ((!bVar18) && (local_res8 == '\0')) {
                if (plVar31 != (longlong *)0x0) {
                  iVar19 = *(int *)((longlong)plVar31 + 0x39c);
                }
                dVar46 = (double)param_1[299];
                dVar38 = (double)fVar43;
                dVar45 = dVar38;
                if (dVar46 != 0.0) {
                  dVar45 = dVar46;
                  if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
                    if (dVar38 <= dVar46) {
                      dVar45 = dVar38;
                    }
                  }
                  else if (dVar46 <= dVar38) {
                    dVar45 = dVar38;
                  }
                }
                param_1[299] = (longlong)dVar45;
                if ((iVar19 != 0) && (iVar19 != *(int *)((longlong)param_1 + 0x5d4))) {
                  *(int *)((longlong)param_1 + 0x5d4) = iVar19;
                  if ((CCDictionary *)param_1[0xb6] != (CCDictionary *)0x0) {
                    cocos2d::CCDictionary::setObject
                              ((CCDictionary *)param_1[0xb6],(CCObject *)param_1[0xb5],
                               (longlong)iVar19);
                  }
                }
              }
              FUN_140388d10(param_1,lVar24);
              dVar39 = (double)param_1[0xc6] - dVar39;
              dVar46 = (double)param_1[0x134];
              if (dVar39 <= (double)param_1[0x134]) {
                dVar46 = dVar39;
              }
              FUN_140388d10(param_1,dVar46);
              FUN_140393c30(param_1);
              local_res18 = CONCAT71(local_res18._1_7_,CVar29);
              if (bVar10) {
                *(undefined1 *)((longlong)param_1 + 0x98e) = 1;
                if (param_1[0x184] == 0) {
                  *(undefined1 *)((longlong)plVar31 + 0x3d2) = 1;
                  *(undefined1 *)((longlong)plVar31 + 0x306) = 1;
                  (**(code **)(plVar31[0x28] + 0x28))(plVar31 + 0x28,0);
                }
                else {
                  FUN_140216090(param_1[0x184],plVar31);
                }
                local_res18 = CONCAT71(local_res18._1_7_,CVar29);
              }
            }
          }
          else if ((CVar28 == (CCPoint)0x0) && (bVar14)) {
            lVar24 = param_1[0x134];
            lVar26 = *param_1;
            fVar33 = local_194 * DAT_140622b08;
            pfVar23 = (float *)(**(code **)(lVar26 + 200))(param_1);
            uVar27 = cocos2d::CCPoint::CCPoint(local_130,*pfVar23,(float)(dVar40 - (double)fVar33));
            (**(code **)(lVar26 + 0xb8))(param_1,uVar27);
            if ((*(char *)((longlong)param_1 + 0x9bf) == '\0') ||
               ((((*(char *)((longlong)param_1 + 0x9b9) == '\0' &&
                  (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
                 (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
                (*(char *)((longlong)param_1 + 0x9c4) == '\0')))) {
              uVar27 = 0;
            }
            else {
              uVar27 = 1;
            }
            FUN_14039bf30(param_1,plVar31,uVar27);
            if (plVar31 != (longlong *)0x0) {
              iVar19 = *(int *)((longlong)plVar31 + 0x39c);
            }
            dVar46 = (double)param_1[300];
            dVar38 = (double)fVar43;
            dVar45 = dVar38;
            if (dVar46 != 0.0) {
              dVar45 = dVar46;
              if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
                if (dVar46 <= dVar38) {
                  dVar45 = dVar38;
                }
              }
              else if (dVar38 <= dVar46) {
                dVar45 = dVar38;
              }
            }
            param_1[300] = (longlong)dVar45;
            if ((iVar19 != 0) && (iVar19 != (int)param_1[0xba])) {
              *(int *)(param_1 + 0xba) = iVar19;
              if ((CCDictionary *)param_1[0xb7] != (CCDictionary *)0x0) {
                cocos2d::CCDictionary::setObject
                          ((CCDictionary *)param_1[0xb7],(CCObject *)param_1[0xb5],(longlong)iVar19)
                ;
              }
            }
            if (param_3 != (longlong *)0x0) {
              param_1[0xc1] = (longlong)param_3;
              if (*(char *)((longlong)param_3 + 0x51d) != '\0') {
                *(undefined4 *)((longlong)param_1 + 0xae4) = 2;
              }
              if (*(char *)((longlong)param_3 + 0x51e) != '\0') {
                *(undefined4 *)(param_1 + 0x15d) = 2;
              }
            }
            param_1[0xc6] = (longlong)(double)local_190;
            FUN_140388d10(param_1,lVar24);
            dVar46 = (double)param_1[0x134];
            if ((double)param_1[0xc6] <= (double)param_1[0x134]) {
              dVar46 = (double)param_1[0xc6];
            }
            FUN_140388d10(param_1,dVar46);
            bVar17 = false;
            goto LAB_140392906;
          }
        }
        bVar17 = false;
        fVar44 = DAT_140622b08;
      }
      else if (cVar2 == '\0') {
        if (iVar20 == *(int *)((longlong)param_1 + 0x5e4)) goto LAB_140392b6e;
      }
      else if (iVar20 == (int)param_1[0xbc]) goto LAB_140392a60;
    }
LAB_140392906:
    if ((char)param_1[0x16e] != '\0') {
      pCVar25 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
      cocos2d::CCPoint::CCPoint(local_108,pCVar25);
      (**(code **)(*param_1 + 200))(param_1);
      (**(code **)(*param_1 + 200))(param_1);
      lVar24 = (**(code **)(*param_1 + 200))(param_1);
      dVar46 = (double)(local_194 * fVar44 + *(float *)(lVar24 + 4)) - local_140;
      lVar24 = (**(code **)(*param_1 + 200))(param_1);
      fVar33 = local_160;
      dVar45 = (double)(*(float *)(lVar24 + 4) - local_194 * fVar44) + local_140;
      bVar14 = false;
      bVar7 = false;
      if ((param_3 != (longlong *)0x0) && (local_160 < param_2)) {
        cocos2d::CCPoint::CCPoint((CCPoint *)&local_180,(CCPoint *)(param_3 + 0x9a));
        (**(code **)(*param_3 + 0x4a8))(param_3,&local_168);
        if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
          lVar24 = (**(code **)(*param_1 + 200))(param_1);
          fVar43 = *(float *)(lVar24 + 4);
        }
        else {
          pfVar23 = (float *)(**(code **)(*param_1 + 200))();
          fVar43 = *pfVar23;
        }
        if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
          fVar44 = (float)local_168;
          pfVar23 = (float *)FUN_14019c5a0(param_3,local_150);
          local_17c = local_180;
        }
        else {
          fVar44 = local_168._4_4_;
          lVar24 = FUN_14019c5a0(param_3,local_100);
          pfVar23 = (float *)(lVar24 + 4);
        }
        fVar1 = *pfVar23;
        bVar14 = (fVar44 - local_17c) + fVar1 < fVar33;
        bVar7 = fVar33 < (fVar44 - local_17c) - fVar1;
        if (fVar44 <= fVar43) {
          local_17c = local_17c - fVar1;
        }
        else {
          local_17c = local_17c + fVar1;
        }
        fVar33 = (fVar44 - local_17c) / param_2;
        fVar44 = DAT_140622b08;
      }
      if ((((char)param_1[0x136] != '\0') || (*(char *)((longlong)param_1 + 0x9b1) != '\0')) ||
         ((double)param_1[0x154] - (double)param_1[0x16a] < DAT_140622d18)) {
        iVar21 = -1;
        if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
          iVar21 = 1;
        }
        lVar24 = (**(code **)(*param_1 + 200))(param_1);
        dVar46 = (double)(local_194 * fVar44 * (float)iVar21 + *(float *)(lVar24 + 4));
        lVar24 = (**(code **)(*param_1 + 200))(param_1);
        dVar45 = (double)*(float *)(lVar24 + 4);
      }
      if ((param_3 == (longlong *)0x0) || (param_3 != (longlong *)param_1[0xc2])) {
        bVar32 = false;
        if (param_3 != (longlong *)0x0) goto LAB_1403933c7;
LAB_1403933d4:
        bVar10 = false;
      }
      else {
        bVar32 = true;
LAB_1403933c7:
        if (param_3 != (longlong *)param_1[0xc3]) goto LAB_1403933d4;
        bVar10 = true;
      }
      cocos2d::CCRect::CCRect
                (local_118,local_1a0,local_188 * fVar44 + local_19c,local_198,local_194 - local_188)
      ;
      if (((local_res8 == '\0') &&
          (((bVar18 = cocos2d::CCRect::intersectsRect(local_118,(CCRect *)local_178), bVar18 ||
            (bVar32)) || (bVar10)))) &&
         (((dVar46 < dVar6 && (dVar40 < dVar46)) || ((dVar45 < dVar6 && (dVar40 < dVar45)))))) {
        param_1[0xc9] = (longlong)(double)fVar33;
        if ((bVar32) ||
           ((pfVar23 = (float *)(**(code **)(*param_1 + 200))(param_1), dVar46 = local_138,
            local_120 < (double)*pfVar23 && (!bVar10)))) {
          dVar46 = local_158;
          FUN_140394200(param_1,(float)local_158,plVar31);
          lVar24 = *param_1;
          lVar26 = (**(code **)(lVar24 + 200))(param_1);
          uVar27 = cocos2d::CCPoint::CCPoint
                             (local_150,(float)((double)(local_198 * fVar44) + dVar46),
                              *(float *)(lVar26 + 4));
          (**(code **)(lVar24 + 0xb8))(param_1,uVar27);
          if (((double)param_1[0x15f] <= 0.0 && (double)param_1[0x15f] != 0.0) &&
             ((local_1ac == '\0' || (!bVar14)))) {
            param_1[0x15f] = 0;
          }
          if ((*(char *)((longlong)param_1 + 0x9e4) != '\0') &&
             ((param_1[0xb2] == 0 || (*(char *)(param_1[0xb2] + 0x754) == '\0')))) {
            FUN_140396650(param_1);
            *(undefined1 *)((longlong)param_1 + 0x985) = 0;
          }
          if (*(char *)((longlong)param_1 + 0xb59) != '\0') {
            *(undefined4 *)((longlong)param_1 + 0xb3c) = 0;
          }
        }
        else {
          FUN_1403942a0(param_1,(float)local_138,plVar31);
          lVar24 = *param_1;
          lVar26 = (**(code **)(lVar24 + 200))(param_1);
          uVar27 = cocos2d::CCPoint::CCPoint
                             (local_150,(float)(dVar46 - (double)(local_198 * fVar44)),
                              *(float *)(lVar26 + 4));
          (**(code **)(lVar24 + 0xb8))(param_1,uVar27);
          if ((0.0 < (double)param_1[0x15f]) && ((local_1ad == '\0' || (!bVar7)))) {
            param_1[0x15f] = 0;
          }
          if ((*(char *)((longlong)param_1 + 0x9e4) != '\0') &&
             ((param_1[0xb2] == 0 || (*(char *)(param_1[0xb2] + 0x754) == '\0')))) {
            FUN_140396650(param_1);
            *(undefined1 *)((longlong)param_1 + 0x985) = 0;
          }
          if (*(char *)((longlong)param_1 + 0xb5a) != '\0') {
            *(undefined4 *)((longlong)param_1 + 0xb3c) = 0;
          }
        }
      }
    }
    if (((bVar17) && ((char)param_1[0x16e] == '\0')) && (local_res8 == '\0')) {
      (**(code **)(*param_1 + 0x488))(param_1,local_150);
      bVar14 = cocos2d::CCRect::intersectsRect((CCRect *)local_178,(CCRect *)local_150);
      if (bVar14) {
        if (((local_res18._0_1_ == (CCPoint)0x0) || ((double)param_1[0x100] == 0.0)) ||
           (DAT_140622cf0 <= (double)param_1[0x154] - (double)param_1[0x100])) {
          if (*(char *)((longlong)param_1 + 0x9be) != '\0') {
            fVar33 = cocos2d::CCRect::getMaxX((CCRect *)local_178);
            fVar43 = cocos2d::CCRect::getMaxX((CCRect *)local_150);
            if (((fVar33 < fVar43) && ((double)param_1[0x104] != 0.0)) &&
               ((double)param_1[0x154] - (double)param_1[0x104] < DAT_140622ca0))
            goto LAB_140393bcd;
          }
          if ((plVar31 != (longlong *)0x0) &&
             (iVar21 = (**(code **)(*plVar31 + 0x660))(plVar31), iVar21 == 0x15))
          goto LAB_140393b98;
          if (*(char *)((longlong)param_1 + 0x7e5) == '\0') {
            if (DAT_1406c2ed8 == (longlong *)0x0) {
              local_res18 = FUN_1404d0770(0x668);
              DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res18);
              (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
            }
            (**(code **)(*(longlong *)DAT_1406c2ed8[0x41] + 0x468))
                      ((longlong *)DAT_1406c2ed8[0x41],param_1,0);
          }
          else {
            if (*(char *)((longlong)param_1 + 0xc44) != '\0') goto LAB_14039381a;
            *(undefined1 *)((longlong)param_1 + 0x984) = 1;
          }
        }
        else {
          lVar24 = *param_1;
          pcVar4 = *(code **)(lVar24 + 200);
          if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
            pfVar23 = (float *)(*pcVar4)();
            dVar40 = dVar40 - (double)(local_194 * fVar44);
          }
          else {
            pfVar23 = (float *)(*pcVar4)(param_1);
            dVar40 = (double)(local_194 * fVar44) + dVar6;
          }
          uVar27 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_res18,*pfVar23,(float)dVar40);
          (**(code **)(lVar24 + 0xb8))(param_1,uVar27);
          FUN_14039bf30(param_1,plVar31,1);
          *(undefined1 *)((longlong)param_1 + 0xa0c) = 0;
        }
        goto LAB_140393bcd;
      }
    }
LAB_14039381a:
    uVar27 = 0;
  }
  return uVar27;
}

