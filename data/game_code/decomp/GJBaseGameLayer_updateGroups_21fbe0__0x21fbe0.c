// Function: FUN_14021fbe0
// Original target: GJBaseGameLayer_updateGroups_21fbe0 @ 0x21fbe0
// Ghidra entry: 14021fbe0
// Signature: undefined FUN_14021fbe0(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14021fbe0(longlong *param_1,float param_2)

{
  int iVar1;
  CCLayerGradient *this;
  longlong *plVar2;
  double dVar3;
  float fVar4;
  uint uVar5;
  undefined2 uVar6;
  char cVar7;
  CCDirector *this_00;
  CCPoint *pCVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float *pfVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined2 local_res10;
  char local_res12;
  undefined2 local_res18;
  char local_res1a;
  undefined1 local_res20 [8];
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  CCPoint local_278 [8];
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  CCPoint local_260 [8];
  CCPoint local_258 [8];
  longlong local_250;
  undefined1 local_248 [8];
  CCPoint local_240 [8];
  CCPoint local_238 [8];
  CCPoint local_230 [8];
  CCPoint local_228 [8];
  CCPoint local_220 [8];
  CCPoint local_218 [8];
  CCPoint local_210 [8];
  CCPoint local_208 [8];
  CCPoint local_200 [8];
  CCPoint local_1f8 [8];
  CCPoint local_1f0 [8];
  CCPoint local_1e8 [8];
  CCPoint local_1e0 [8];
  CCPoint local_1d8 [8];
  CCPoint local_1d0 [8];
  CCPoint local_1c8 [8];
  CCPoint local_1c0 [8];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  CCPoint local_1a8 [8];
  CCPoint local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  CCPoint local_168 [8];
  undefined1 local_160 [8];
  CCPoint local_158 [8];
  CCPoint local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  CCPoint local_128 [8];
  CCPoint local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [184];
  
  this_00 = cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::getWinSize(this_00);
  (**(code **)(*(longlong *)param_1[0x1fd] + 0xa8))();
  fVar4 = DAT_140622c24;
  pCVar8 = (CCPoint *)(**(code **)(*(longlong *)param_1[0x1fd] + 200))();
  cocos2d::CCPoint::operator*(pCVar8,param_2);
  cocos2d::CCPoint::operator-((CCPoint *)&local_res10);
  fVar24 = local_2d8;
  pCVar8 = (CCPoint *)cocos2d::CCPoint::CCPoint((CCPoint *)&local_res18,local_2d8,local_2d4);
  cocos2d::CCPoint::operator*(pCVar8,fVar24);
  cocos2d::CCPoint::operator+((CCPoint *)&local_2b0,(CCPoint *)&local_2a8);
  fVar25 = local_2d8;
  pCVar8 = (CCPoint *)cocos2d::CCPoint::CCPoint((CCPoint *)&local_res18,local_2d8,local_2d4);
  cocos2d::CCPoint::operator*(pCVar8,fVar25);
  cocos2d::CCSize::CCSize((CCSize *)&local_288,(CCPoint *)&local_res10);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,(CCSize *)&local_288);
  fVar24 = DAT_140622b08;
  cocos2d::CCPoint::operator*((CCPoint *)&local_res10,fVar25);
  cocos2d::CCPoint::operator+((CCPoint *)&local_2b0,local_278);
  fVar25 = local_284 * local_284 + local_288 * local_288;
  if (fVar25 < 0.0) {
    fVar25 = sqrtf(fVar25);
  }
  else {
    fVar25 = SQRT(fVar25);
  }
  dVar3 = (double)fVar25 * DAT_140622d98;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,(float)dVar3,fVar25 * fVar24);
  cocos2d::CCPoint::operator-(local_278,(CCPoint *)&local_298);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,(float)dVar3,fVar25 * fVar24);
  cocos2d::CCPoint::operator+(local_278,(CCPoint *)&local_2a0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_290,(CCPoint *)&DAT_1406c1d28);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_280,local_2d8,local_2d4);
  fVar22 = local_2d4;
  fVar25 = local_2d8;
  if (*(float *)((longlong)param_1 + 0x324) != 0.0) {
    fVar26 = local_2d8 * local_2d8 + local_2d4 * local_2d4;
    if (fVar26 < 0.0) {
      fVar26 = sqrtf(fVar26);
    }
    else {
      fVar26 = SQRT(fVar26);
    }
    fVar26 = fVar26 * fVar24;
    pCVar8 = (CCPoint *)
             cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&local_res10,fVar25 * fVar24 - fVar26,fVar22 * fVar24 - fVar26);
    cocos2d::CCPoint::operator=((CCPoint *)&local_290,pCVar8);
    pCVar8 = (CCPoint *)
             cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&local_res10,local_2d8 * fVar24 + fVar26,
                        local_2d4 * fVar24 + fVar26);
    cocos2d::CCPoint::operator=((CCPoint *)&local_280,pCVar8);
  }
  fVar24 = DAT_140623120;
  local_2ac = local_2ac + DAT_14062389c;
  local_2b0 = local_2b0 + DAT_14062389c;
  local_2a4 = local_2a4 + DAT_140623120;
  local_2a8 = local_2a8 + DAT_140623120;
  cocos2d::CCPoint::CCPoint(local_260,DAT_14062389c,DAT_14062389c);
  cocos2d::CCPoint::CCPoint(local_258,local_2d8 + fVar24,local_2d4 + fVar24);
  *(undefined4 *)(param_1 + 0x62e) = 0;
  uVar5 = DAT_1406243f0;
  fVar24 = DAT_140623418;
  if ((param_1[0x62d] == 0) || (local_250 = *(longlong *)(param_1[0x62d] + 0x38), local_250 == 0)) {
    return;
  }
  lVar9 = *(longlong *)(local_250 + 0x120);
  do {
    this = *(CCLayerGradient **)(local_250 + 0x108);
    local_250 = lVar9;
    lVar9 = (**(code **)(*(longlong *)this + 0x1e8))(this);
    if ((lVar9 != 0) && (plVar2 = *(longlong **)(this + 0x248), plVar2 != (longlong *)0x0)) {
      if ((int)plVar2[0xe9] == *(int *)(this + 0x25c)) {
        fVar25 = (float)(**(code **)(*param_1 + 0x430))(param_1,plVar2);
        if ((*(char *)((longlong)param_1 + 0x309c) != '\0') && ((int)param_1[0x110] != 1)) {
          fVar25 = fVar25 * *(float *)(plVar2 + 0xec);
        }
        iVar1 = *(int *)(this + 0x238);
        if (iVar1 == 0) {
LAB_14022011d:
          local_res1a = DAT_140529ab2;
          local_res18 = DAT_140529ab0;
        }
        else if (iVar1 == 0x3f2) {
          local_res18 = DAT_140529aac;
          local_res1a = DAT_140529aae;
        }
        else {
          if ((iVar1 == 0x3f3) || (lVar9 = FUN_14025bcc0(param_1[0x12a]), lVar9 == 0))
          goto LAB_14022011d;
          local_res18 = *(undefined2 *)(lVar9 + 0x147);
          local_res1a = *(char *)(lVar9 + 0x149);
        }
        iVar1 = *(int *)(this + 0x23c);
        uVar6 = DAT_140529ab0;
        cVar7 = DAT_140529ab2;
        if (((iVar1 != 0) && (uVar6 = DAT_140529aac, cVar7 = DAT_140529aae, iVar1 != 0x3f2)) &&
           (uVar6 = DAT_140529ab0, cVar7 = DAT_140529ab2, iVar1 != 0x3f3)) {
          lVar9 = FUN_14025bcc0(param_1[0x12a],iVar1);
          if (lVar9 == 0) {
            local_res10 = DAT_140529ab0;
            local_res12 = DAT_140529ab2;
            uVar6 = local_res10;
            cVar7 = local_res12;
          }
          else {
            uVar6 = *(undefined2 *)(lVar9 + 0x147);
            cVar7 = *(char *)(lVar9 + 0x149);
          }
        }
        local_res12 = cVar7;
        local_res10 = uVar6;
        lVar9 = plVar2[0x8a];
        if ((lVar9 != 0) &&
           (((*(float *)(lVar9 + 0x10) != _DAT_1406ba160 ||
             (*(float *)(lVar9 + 0x14) != _DAT_1406ba164)) ||
            ((*(float *)(lVar9 + 0x18) != _DAT_1406ba168 ||
             ((*(char *)(lVar9 + 0x1c) != DAT_1406ba16c ||
              (*(char *)(lVar9 + 0x1d) != DAT_1406ba16d)))))))) {
          local_1b8 = *(undefined4 *)(lVar9 + 0x10);
          uStack_1b4 = *(undefined4 *)(lVar9 + 0x14);
          uStack_1b0 = *(undefined4 *)(lVar9 + 0x18);
          uStack_1ac = *(undefined4 *)(lVar9 + 0x1c);
          puVar10 = (undefined2 *)FUN_1400652c0(local_res20,&local_res18,&local_1b8);
          local_res18 = *puVar10;
          local_res1a = *(char *)(puVar10 + 1);
        }
        lVar9 = plVar2[0x8b];
        if ((lVar9 != 0) &&
           ((((*(float *)(lVar9 + 0x10) != _DAT_1406ba160 ||
              (*(float *)(lVar9 + 0x14) != _DAT_1406ba164)) ||
             (*(float *)(lVar9 + 0x18) != _DAT_1406ba168)) ||
            ((*(char *)(lVar9 + 0x1c) != DAT_1406ba16c || (*(char *)(lVar9 + 0x1d) != DAT_1406ba16d)
             ))))) {
          local_1b8 = *(undefined4 *)(lVar9 + 0x10);
          uStack_1b4 = *(undefined4 *)(lVar9 + 0x14);
          uStack_1b0 = *(undefined4 *)(lVar9 + 0x18);
          uStack_1ac = *(undefined4 *)(lVar9 + 0x1c);
          puVar10 = (undefined2 *)FUN_1400652c0(local_248,&local_res10,&local_1b8);
          local_res10 = *puVar10;
          local_res12 = *(char *)(puVar10 + 1);
        }
        lVar9 = FUN_14025bcc0(param_1[0x12a],*(undefined4 *)(this + 0x238));
        fVar22 = fVar4;
        if (lVar9 != 0) {
          fVar22 = *(float *)(lVar9 + 0x140) / fVar24;
        }
        fVar26 = fVar22 * fVar24 * fVar25;
        lVar9 = FUN_14025bcc0(param_1[0x12a],*(undefined4 *)(this + 0x23c));
        fVar22 = fVar4;
        if (lVar9 != 0) {
          fVar22 = *(float *)(lVar9 + 0x140) / fVar24;
        }
        fVar25 = fVar22 * fVar24 * fVar25;
        if (((fVar26 != 0.0) || (fVar25 != 0.0)) &&
           ((*(int *)(this + 0x254) != 1 ||
            (((((local_res18._0_1_ != (CCPoint)0x0 || (local_res18._1_1_ != '\0')) ||
               (local_res1a != '\0')) ||
              ((local_res10._0_1_ != (CCPoint)0x0 || (local_res10._1_1_ != '\0')))) ||
             (local_res12 != '\0')))))) {
          uVar21 = (**(code **)(*plVar2 + 0x158))(plVar2);
          fVar29 = (float)(uVar21 ^ uVar5) * DAT_1406229bc;
          fVar22 = sinf(fVar29);
          fVar29 = cosf(fVar29);
          cocos2d::CCPoint::CCPoint(local_240,fVar29,fVar22);
          cocos2d::CCPoint::operator=((CCPoint *)(this + 0x240),local_240);
          plVar11 = (longlong *)FUN_140224520(param_1,*(undefined4 *)((longlong)plVar2 + 0x74c));
          plVar12 = (longlong *)FUN_140224520(param_1,(int)plVar2[0xea]);
          plVar13 = (longlong *)FUN_140224520(param_1,*(undefined4 *)((longlong)plVar2 + 0x754));
          plVar14 = (longlong *)FUN_140224520(param_1,(int)plVar2[0xeb]);
          if (*(char *)((longlong)plVar2 + 0x75c) == '\0') {
            uVar15 = cocos2d::CCPoint::CCPoint(local_168,(CCPoint *)&DAT_1406c1d28);
            uVar16 = cocos2d::CCPoint::CCPoint(local_1a8,(CCPoint *)&DAT_1406c1d28);
            uVar17 = cocos2d::CCPoint::CCPoint(local_1a0,(CCPoint *)&DAT_1406c1d28);
            cocos2d::CCLayerColor::setVertices((CCLayerColor *)this,uVar17,uVar16,uVar15);
            lVar9 = *(longlong *)this;
            uVar15 = (**(code **)(lVar9 + 0x130))(this);
            (**(code **)(lVar9 + 0x128))(this,uVar15);
            cocos2d::CCPoint::CCPoint((CCPoint *)&local_2e0);
            cocos2d::CCPoint::CCPoint((CCPoint *)&local_2d0);
            if (this[0x250] == (CCLayerGradient)0x0) {
              cocos2d::CCPoint::operator=((CCPoint *)&local_2e0,local_260);
              cocos2d::CCPoint::operator=((CCPoint *)&local_2d0,local_258);
              if (plVar12 != (longlong *)0x0) {
                lVar9 = (**(code **)(*plVar12 + 0x4a8))(plVar12,local_178);
                local_2dc = *(float *)(lVar9 + 4);
              }
              if (plVar13 != (longlong *)0x0) {
                pfVar18 = (float *)(**(code **)(*plVar13 + 0x4a8))(plVar13,local_170);
                local_2e0 = *pfVar18;
              }
              if (plVar11 != (longlong *)0x0) {
                lVar9 = (**(code **)(*plVar11 + 0x4a8))(plVar11,local_130);
                local_2cc = *(float *)(lVar9 + 4);
              }
              if (plVar14 != (longlong *)0x0) {
                pfVar18 = (float *)(**(code **)(*plVar14 + 0x4a8))(plVar14,local_160);
                local_2d0 = *pfVar18;
              }
              (**(code **)(*(longlong *)param_1[0x1fd] + 0xa8))();
              cocos2d::CCPoint::operator*((CCPoint *)&local_2e0,fVar29);
              (**(code **)(*(longlong *)param_1[0x1fd] + 200))();
              cocos2d::CCPoint::operator+(local_238,(CCPoint *)&local_270);
              (**(code **)(*(longlong *)param_1[0x1fd] + 0xa8))();
              cocos2d::CCPoint::operator*((CCPoint *)&local_2d0,fVar29);
              (**(code **)(*(longlong *)param_1[0x1fd] + 200))();
              cocos2d::CCPoint::operator+(local_230,(CCPoint *)&local_268);
              if (plVar12 != (longlong *)0x0) {
                local_2dc = local_26c;
              }
              if (plVar13 != (longlong *)0x0) {
                local_2e0 = local_270;
              }
              if (plVar11 != (longlong *)0x0) {
                local_2cc = local_264;
              }
              if (plVar14 != (longlong *)0x0) {
                local_2d0 = local_268;
              }
              (**(code **)(*(longlong *)this + 0xb8))(this,&local_2e0);
              (**(code **)(*(longlong *)this + 0x78))(this,(local_2d0 - local_2e0) / local_2d8);
              (**(code **)(*(longlong *)this + 0x88))(this,(local_2cc - local_2dc) / local_2d4);
              if (((local_2e0 <= local_2d8) && (local_2dc <= local_2d4)) && (0.0 <= local_2d0)) {
                bVar20 = local_2cc == 0.0;
                bVar19 = 0.0 < local_2cc;
                goto LAB_140220e55;
              }
            }
            else {
              cocos2d::CCPoint::operator=((CCPoint *)&local_2e0,(CCPoint *)&local_2b0);
              cocos2d::CCPoint::operator=((CCPoint *)&local_2d0,(CCPoint *)&local_2a8);
              if (plVar12 != (longlong *)0x0) {
                lVar9 = (**(code **)(*plVar12 + 0x4a8))(plVar12,local_198);
                local_2dc = *(float *)(lVar9 + 4);
              }
              if (plVar13 != (longlong *)0x0) {
                pfVar18 = (float *)(**(code **)(*plVar13 + 0x4a8))(plVar13,local_190);
                local_2e0 = *pfVar18;
              }
              if (plVar11 != (longlong *)0x0) {
                lVar9 = (**(code **)(*plVar11 + 0x4a8))(plVar11,local_188);
                local_2cc = *(float *)(lVar9 + 4);
              }
              if (plVar14 != (longlong *)0x0) {
                pfVar18 = (float *)(**(code **)(*plVar14 + 0x4a8))(plVar14,local_180);
                local_2d0 = *pfVar18;
              }
              (**(code **)(*(longlong *)this + 0xb8))(this,&local_2e0);
              (**(code **)(*(longlong *)this + 0x78))(this,(local_2d0 - local_2e0) / local_2d8);
              (**(code **)(*(longlong *)this + 0x88))(this,(local_2cc - local_2dc) / local_2d4);
              if (((local_2e0 <= local_2a0) && (local_2dc <= local_29c)) && (local_298 <= local_2d0)
                 ) {
                bVar20 = local_294 == local_2cc;
                bVar19 = local_294 < local_2cc;
LAB_140220e55:
                if (bVar19 || bVar20) {
                  cocos2d::CCLayerGradient::setValues
                            (this,(_ccColor3B *)&local_res18,(uchar)(int)fVar26,
                             (_ccColor3B *)&local_res10,(uchar)(int)fVar25,(CCPoint *)(this + 0x240)
                            );
                  (**(code **)(*(longlong *)this + 0x140))(this,1);
                  *(int *)(param_1 + 0x62e) = (int)param_1[0x62e] + 1;
                  if ((((*(int *)(this + 0x254) != 3) ||
                       (lVar9 = (**(code **)(*(longlong *)this + 0x1e8))(this), lVar9 == 0)) ||
                      ((lVar9 = param_1[0x62f], lVar9 == 0 ||
                       (((*(char *)(lVar9 + 0x45e) == '\0' ||
                         (iVar1 = *(int *)(this + 600), iVar1 < *(int *)(lVar9 + 0x454))) ||
                        (*(int *)(lVar9 + 0x458) < iVar1)))))) || (0xe < iVar1)) goto LAB_140220f01;
                }
              }
            }
          }
          else {
            cocos2d::CCPoint::CCPoint((CCPoint *)&local_2e8);
            cocos2d::CCPoint::CCPoint((CCPoint *)&local_2c8);
            cocos2d::CCPoint::CCPoint((CCPoint *)&local_2b8);
            cocos2d::CCPoint::CCPoint((CCPoint *)&local_2c0);
            if (this[0x250] == (CCLayerGradient)0x0) {
              cocos2d::CCPoint::operator=((CCPoint *)&local_2e8,local_260);
              cocos2d::CCPoint::operator=((CCPoint *)&local_2c8,local_258);
              pCVar8 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_128,local_2e8,local_2c4);
              cocos2d::CCPoint::operator=((CCPoint *)&local_2b8,pCVar8);
              fVar22 = local_2c8;
              pCVar8 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_120,local_2c8,local_2e4);
              cocos2d::CCPoint::operator=((CCPoint *)&local_2c0,pCVar8);
              if (plVar11 != (longlong *)0x0) {
                pCVar8 = (CCPoint *)(**(code **)(*plVar11 + 0x4a8))(plVar11,local_118);
                cocos2d::CCPoint::operator=((CCPoint *)&local_2e8,pCVar8);
              }
              if (plVar12 != (longlong *)0x0) {
                pCVar8 = (CCPoint *)(**(code **)(*plVar12 + 0x4a8))(plVar12,local_110);
                cocos2d::CCPoint::operator=((CCPoint *)&local_2c0,pCVar8);
              }
              if (plVar13 != (longlong *)0x0) {
                pCVar8 = (CCPoint *)(**(code **)(*plVar13 + 0x4a8))(plVar13,local_108);
                cocos2d::CCPoint::operator=((CCPoint *)&local_2b8,pCVar8);
              }
              if (plVar14 != (longlong *)0x0) {
                pCVar8 = (CCPoint *)(**(code **)(*plVar14 + 0x4a8))(plVar14,local_100);
                cocos2d::CCPoint::operator=((CCPoint *)&local_2c8,pCVar8);
              }
              (**(code **)(*(longlong *)param_1[0x1fd] + 0xa8))();
              cocos2d::CCPoint::operator*((CCPoint *)&local_2e8,fVar22);
              (**(code **)(*(longlong *)param_1[0x1fd] + 200))();
              cocos2d::CCPoint::operator+(local_210,local_1f0);
              (**(code **)(*(longlong *)param_1[0x1fd] + 0xa8))();
              cocos2d::CCPoint::operator*((CCPoint *)&local_2c0,fVar22);
              (**(code **)(*(longlong *)param_1[0x1fd] + 200))();
              cocos2d::CCPoint::operator+(local_208,local_1e8);
              (**(code **)(*(longlong *)param_1[0x1fd] + 0xa8))();
              cocos2d::CCPoint::operator*((CCPoint *)&local_2c8,fVar22);
              (**(code **)(*(longlong *)param_1[0x1fd] + 200))();
              cocos2d::CCPoint::operator+(local_200,local_1d8);
              (**(code **)(*(longlong *)param_1[0x1fd] + 0xa8))();
              cocos2d::CCPoint::operator*((CCPoint *)&local_2b8,fVar22);
              (**(code **)(*(longlong *)param_1[0x1fd] + 200))();
              cocos2d::CCPoint::operator+(local_1f8,local_1e0);
              if (plVar11 != (longlong *)0x0) {
                cocos2d::CCPoint::operator=((CCPoint *)&local_2e8,local_1f0);
              }
              if (plVar12 != (longlong *)0x0) {
                cocos2d::CCPoint::operator=((CCPoint *)&local_2c0,local_1e8);
              }
              if (plVar13 != (longlong *)0x0) {
                cocos2d::CCPoint::operator=((CCPoint *)&local_2b8,local_1e0);
              }
              if (plVar14 != (longlong *)0x0) {
                cocos2d::CCPoint::operator=((CCPoint *)&local_2c8,local_1d8);
              }
              (**(code **)(*(longlong *)this + 0xa0))(this,fVar4);
              (**(code **)(*(longlong *)this + 0xb8))(this,&local_2e8);
              cocos2d::CCPoint::operator-((CCPoint *)&local_2c8,local_1d0);
              cocos2d::CCPoint::operator-((CCPoint *)&local_2b8,local_1c8);
              cocos2d::CCPoint::operator-((CCPoint *)&local_2c0,local_1c0);
              cocos2d::CCLayerColor::setVertices((CCLayerColor *)this,local_1c0,local_1c8,local_1d0)
              ;
              fVar22 = local_2b8;
              if (local_2c8 <= local_2b8) {
                fVar22 = local_2c8;
              }
              fVar29 = fVar22;
              if (local_2c0 < fVar22) {
                fVar29 = local_2c0;
              }
              fVar23 = local_2e8;
              if ((fVar29 <= local_2e8) && (fVar23 = fVar22, local_2c0 < fVar22)) {
                fVar23 = local_2c0;
              }
              if (fVar23 <= local_280) {
                fVar22 = local_2b4;
                if (local_2c4 <= local_2b4) {
                  fVar22 = local_2c4;
                }
                fVar29 = fVar22;
                if (local_2bc < fVar22) {
                  fVar29 = local_2bc;
                }
                fVar23 = local_2e4;
                if ((fVar29 <= local_2e4) && (fVar23 = fVar22, local_2bc < fVar22)) {
                  fVar23 = local_2bc;
                }
                if (fVar23 <= local_27c) {
                  fVar22 = local_2b8;
                  if (local_2b8 <= local_2c8) {
                    fVar22 = local_2c8;
                  }
                  fVar29 = fVar22;
                  if (fVar22 < local_2c0) {
                    fVar29 = local_2c0;
                  }
                  fVar23 = local_2e8;
                  if ((local_2e8 <= fVar29) && (fVar23 = fVar22, fVar22 < local_2c0)) {
                    fVar23 = local_2c0;
                  }
                  if (local_290 <= fVar23) {
                    fVar22 = local_2b4;
                    if (local_2b4 <= local_2c4) {
                      fVar22 = local_2c4;
                    }
                    fVar29 = fVar22;
                    if (fVar22 < local_2bc) {
                      fVar29 = local_2bc;
                    }
                    fVar23 = local_28c;
                    fVar28 = local_2e4;
                    if ((local_2e4 <= fVar29) &&
                       (fVar23 = local_28c, fVar28 = fVar22, fVar22 < local_2bc)) {
                      fVar23 = local_28c;
                      fVar28 = local_2bc;
                    }
                    goto LAB_140220e52;
                  }
                }
              }
            }
            else {
              cocos2d::CCPoint::operator=((CCPoint *)&local_2e8,(CCPoint *)&local_2b0);
              cocos2d::CCPoint::operator=((CCPoint *)&local_2c8,(CCPoint *)&local_2a8);
              pCVar8 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_158,local_2e8,local_2c4);
              cocos2d::CCPoint::operator=((CCPoint *)&local_2b8,pCVar8);
              pCVar8 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_150,local_2c8,local_2e4);
              cocos2d::CCPoint::operator=((CCPoint *)&local_2c0,pCVar8);
              if (plVar11 != (longlong *)0x0) {
                pCVar8 = (CCPoint *)(**(code **)(*plVar11 + 0x4a8))(plVar11,local_148);
                cocos2d::CCPoint::operator=((CCPoint *)&local_2e8,pCVar8);
              }
              if (plVar12 != (longlong *)0x0) {
                pCVar8 = (CCPoint *)(**(code **)(*plVar12 + 0x4a8))(plVar12,local_140);
                cocos2d::CCPoint::operator=((CCPoint *)&local_2c0,pCVar8);
              }
              if (plVar13 != (longlong *)0x0) {
                pCVar8 = (CCPoint *)(**(code **)(*plVar13 + 0x4a8))(plVar13,local_138);
                cocos2d::CCPoint::operator=((CCPoint *)&local_2b8,pCVar8);
              }
              if (plVar14 != (longlong *)0x0) {
                pCVar8 = (CCPoint *)(**(code **)(*plVar14 + 0x4a8))(plVar14,local_f8);
                cocos2d::CCPoint::operator=((CCPoint *)&local_2c8,pCVar8);
              }
              (**(code **)(*(longlong *)this + 0xa0))(this,fVar4);
              (**(code **)(*(longlong *)this + 0xb8))(this,&local_2e8);
              cocos2d::CCPoint::operator-((CCPoint *)&local_2c8,local_228);
              cocos2d::CCPoint::operator-((CCPoint *)&local_2b8,local_220);
              cocos2d::CCPoint::operator-((CCPoint *)&local_2c0,local_218);
              cocos2d::CCLayerColor::setVertices((CCLayerColor *)this,local_218,local_220,local_228)
              ;
              fVar22 = local_2b8;
              if (local_2c8 <= local_2b8) {
                fVar22 = local_2c8;
              }
              fVar29 = fVar22;
              if (local_2c0 < fVar22) {
                fVar29 = local_2c0;
              }
              fVar23 = local_2e8;
              if ((fVar29 <= local_2e8) && (fVar23 = fVar22, local_2c0 < fVar22)) {
                fVar23 = local_2c0;
              }
              if (fVar23 <= local_2a0) {
                fVar22 = local_2b4;
                if (local_2c4 <= local_2b4) {
                  fVar22 = local_2c4;
                }
                fVar29 = fVar22;
                if (local_2bc < fVar22) {
                  fVar29 = local_2bc;
                }
                fVar23 = local_2e4;
                if ((fVar29 <= local_2e4) && (fVar23 = fVar22, local_2bc < fVar22)) {
                  fVar23 = local_2bc;
                }
                if (fVar23 <= local_29c) {
                  fVar22 = local_2b8;
                  if (local_2b8 <= local_2c8) {
                    fVar22 = local_2c8;
                  }
                  fVar29 = fVar22;
                  if (fVar22 < local_2c0) {
                    fVar29 = local_2c0;
                  }
                  fVar23 = local_2e8;
                  if ((local_2e8 <= fVar29) && (fVar23 = fVar22, fVar22 < local_2c0)) {
                    fVar23 = local_2c0;
                  }
                  if (local_298 <= fVar23) {
                    fVar22 = local_2b4;
                    if (local_2b4 <= local_2c4) {
                      fVar22 = local_2c4;
                    }
                    fVar29 = fVar22;
                    if (fVar22 < local_2bc) {
                      fVar29 = local_2bc;
                    }
                    fVar27 = local_2e4;
                    fVar23 = local_294;
                    if ((fVar29 < local_2e4) ||
                       (fVar28 = local_2bc, fVar27 = fVar22, local_2bc <= fVar22)) {
                      fVar28 = fVar27;
                    }
LAB_140220e52:
                    bVar20 = fVar23 == fVar28;
                    bVar19 = fVar23 < fVar28;
                    goto LAB_140220e55;
                  }
                }
              }
            }
          }
        }
        (**(code **)(*(longlong *)this + 0x140))(this,0);
      }
      else {
        (**(code **)(*(longlong *)this + 0x1f8))(this,0);
        *(undefined8 *)(this + 0x248) = 0;
        this[0x250] = (CCLayerGradient)0x0;
      }
    }
LAB_140220f01:
    if (local_250 == 0) {
      return;
    }
    lVar9 = *(longlong *)(local_250 + 0x120);
  } while( true );
}

