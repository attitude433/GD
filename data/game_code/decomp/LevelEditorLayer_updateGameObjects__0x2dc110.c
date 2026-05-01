// LevelEditorLayer_updateGameObjects @ 0x2dc110
// Body: 3617 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc110(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  double dVar11;
  undefined1 uVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  CCDirector *this;
  float *pfVar16;
  undefined4 *puVar17;
  CCPoint *pCVar18;
  undefined8 uVar19;
  longlong lVar20;
  CCObject *pCVar21;
  undefined2 uVar22;
  float *pfVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  uint uVar27;
  uint uVar28;
  longlong *plVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  char cVar33;
  ulonglong uVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 local_res8;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined4 local_res20;
  uint in_stack_fffffffffffffeb0;
  uint local_128 [2];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  CCPoint local_110 [8];
  longlong *local_108;
  undefined8 uStack_100;
  longlong local_f8;
  ulonglong uStack_f0;
  
  if (*(int *)(param_1 + 0x880) == 0) {
    lVar20 = *(longlong *)(param_1 + 0x3a90);
    uVar32 = 0;
    if (lVar20 == 0) {
      local_res18[0] = 0;
      local_res10[0] = 0;
      local_res20 = 0;
      local_res8 = (CCObject *)CONCAT71(local_res8._1_7_,1);
      uVar34 = uVar32;
    }
    else {
      if (*(int *)(lVar20 + 0x40c) == 0x1f) {
        uVar15 = *(uint *)(*(longlong *)(lVar20 + 0x740) + 0x174);
        uVar28 = *(uint *)(*(longlong *)(lVar20 + 0x740) + 0x178);
      }
      else {
        uVar15 = *(uint *)(lVar20 + 0x6fc);
        uVar28 = *(uint *)(lVar20 + 0x700);
      }
      uVar36 = *(undefined4 *)(lVar20 + 0x39c);
      local_res8 = (CCObject *)CONCAT71(local_res8._1_7_,1);
      if (*(int *)(lVar20 + 0x40c) == 0xb54) {
        if ((*(char *)(lVar20 + 0x755) == '\0') &&
           ((local_res10[0] = uVar28, local_res18[0] = uVar15, local_res20 = uVar36,
            iVar14 = FUN_14019c520(lVar20), iVar14 == 1 ||
            (iVar14 = FUN_14019c520(lVar20), iVar14 == 2)))) {
          local_res8 = (CCObject *)((ulonglong)local_res8 & 0xffffffffffffff00);
        }
        else {
          local_res8 = (CCObject *)CONCAT71(local_res8._1_7_,1);
        }
      }
      uVar32 = (ulonglong)uVar15;
      uVar34 = (ulonglong)uVar28;
      local_res10[0] = uVar28;
      local_res18[0] = uVar15;
      local_res20 = uVar36;
    }
    uVar24 = 0;
    if (*(char *)(param_1 + 0x38d1) != '\0') {
      FUN_14025b0a0(*(undefined8 *)(param_1 + 0x950));
    }
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    local_128[0] = 0x14;
    FUN_14024ac30(param_1 + 0x428,local_128);
    *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_1 + 0x2c0);
    pfVar16 = *(float **)(param_1 + 0x3a70);
    pfVar23 = *(float **)(param_1 + 0x3a68);
    uVar31 = (ulonglong)((longlong)pfVar16 + (3 - (longlong)pfVar23)) >> 2;
    if (pfVar16 < pfVar23) {
      uVar31 = uVar24;
    }
    if ((uVar31 != 0) && (0xf < uVar31)) {
      fVar35 = (float)_DAT_140624400;
      fVar37 = (float)_UNK_140624404;
      fVar38 = (float)_UNK_140624408;
      fVar39 = (float)_UNK_14062440c;
      uVar25 = uVar24;
      do {
        *pfVar23 = fVar35;
        pfVar23[1] = fVar37;
        pfVar23[2] = fVar38;
        pfVar23[3] = fVar39;
        pfVar23[4] = fVar35;
        pfVar23[5] = fVar37;
        pfVar23[6] = fVar38;
        pfVar23[7] = fVar39;
        pfVar23[8] = fVar35;
        pfVar23[9] = fVar37;
        pfVar23[10] = fVar38;
        pfVar23[0xb] = fVar39;
        pfVar23[0xc] = fVar35;
        pfVar23[0xd] = fVar37;
        pfVar23[0xe] = fVar38;
        pfVar23[0xf] = fVar39;
        pfVar23 = pfVar23 + 0x10;
        uVar25 = uVar25 + 0x10;
      } while (uVar25 != (uVar31 & 0xfffffffffffffff0));
    }
    for (; pfVar23 != pfVar16; pfVar23 = pfVar23 + 1) {
      *pfVar23 = -1.0;
    }
    local_108 = *(longlong **)(param_1 + 0x3990);
    uVar31 = *(ulonglong *)(param_1 + 0x39a8);
    if (((longlong)uVar31 < 0) && (uVar31 != 0)) {
      local_f8 = -((~uVar31 >> 5) * 4 + 4);
    }
    else {
      local_f8 = (uVar31 >> 5) * 4;
    }
    local_f8 = (longlong)local_108 + local_f8;
    uStack_f0 = (ulonglong)((uint)uVar31 & 0x1f);
    uStack_100 = 0;
    FUN_140253550(&local_108,&local_f8,0);
    this = cocos2d::CCDirector::sharedDirector();
    cocos2d::CCDirector::getWinSize(this);
    if (*(longlong *)(param_1 + 0x38a0) == 0) {
      fVar35 = 0.0;
    }
    else {
      fVar35 = *(float *)(*(longlong *)(param_1 + 0x38a0) + 0x318);
    }
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&local_108,local_120 * DAT_140622b08,
               local_11c * DAT_140622b08 + fVar35 * DAT_140622b08);
    cocos2d::CCNode::convertToNodeSpace(*(CCNode **)(param_1 + 0xfe8),(CCPoint *)&local_118);
    *(undefined1 *)(param_1 + 0x3b20) = 0;
    fVar35 = local_114;
    if (*(int *)(param_1 + 0x880) == 1) {
      pfVar16 = (float *)(**(code **)(**(longlong **)(param_1 + 0xda0) + 200))();
      fVar37 = *pfVar16;
    }
    else {
      fVar37 = local_118;
      if (*(int *)(param_1 + 0x880) == 0) {
        if ((*(longlong *)(param_1 + 0x38a0) == 0) ||
           (*(char *)(*(longlong *)(param_1 + 0x38a0) + 0x284) == '\0')) {
          if ((*(float *)(param_1 + 0x3a08) != 0.0) || (*(float *)(param_1 + 0x3a0c) != 0.0)) {
            fVar35 = *(float *)(param_1 + 0x3a0c);
            fVar37 = *(float *)(param_1 + 0x3a08);
          }
        }
        else {
          fVar37 = *(float *)(*(longlong *)(param_1 + 0x38c8) + 0x1fc);
          fVar35 = *(float *)(*(longlong *)(param_1 + 0x38c8) + 0x200);
          local_res18[0] = 0;
          local_res10[0] = 0;
          *(undefined1 *)(param_1 + 0x3b20) = 1;
          uVar32 = uVar24;
          uVar34 = uVar24;
        }
      }
    }
    uVar15 = (uint)uVar34;
    if (*(longlong *)(param_1 + 0x3858) != 0) {
      puVar1 = *(uint **)(*(longlong *)(param_1 + 0x3858) + 0x38);
      uVar28 = *puVar1;
      if (uVar28 != 0) {
        plVar29 = *(longlong **)(puVar1 + 4);
        plVar26 = plVar29 + ((ulonglong)uVar28 - 1);
        for (; (plVar29 <= plVar26 && (plVar2 = (longlong *)*plVar29, plVar2 != (longlong *)0x0));
            plVar29 = plVar29 + 1) {
          *(undefined4 *)(plVar2 + 0x98) = 0;
          *(undefined1 *)((longlong)plVar2 + 0x28e) = 0;
          if (*(char *)((longlong)plVar2 + 0x5d1) != '\0') {
            *(undefined2 *)((longlong)plVar2 + 0x5b4) = 0;
            puVar17 = (undefined4 *)(**(code **)(*plVar2 + 200))(plVar2);
            *(undefined4 *)(plVar2 + 0xd1) = *puVar17;
          }
        }
      }
    }
    if ((*(char *)(param_1 + 0x3860) != '\0') ||
       (((*(longlong *)(param_1 + 0x38a0) != 0 &&
         (*(char *)(*(longlong *)(param_1 + 0x38a0) + 0x325) != '\0')) ||
        (*(char *)(*(longlong *)(param_1 + 0x38c8) + 0x279) != '\0')))) {
      *(undefined1 *)(param_1 + 0x3860) = 0;
      if (*(longlong *)(param_1 + 0x38a0) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x38a0) + 0x325) = 0;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x38c8) + 0x279) = 0;
      if (*(longlong *)(param_1 + 0x3858) != 0) {
        puVar1 = *(uint **)(*(longlong *)(param_1 + 0x3858) + 0x38);
        uVar28 = *puVar1;
        if (uVar28 != 0) {
          plVar29 = *(longlong **)(puVar1 + 4);
          plVar26 = plVar29 + ((ulonglong)uVar28 - 1);
          for (; (plVar29 <= plVar26 && (plVar2 = (longlong *)*plVar29, plVar2 != (longlong *)0x0));
              plVar29 = plVar29 + 1) {
            pCVar18 = (CCPoint *)(**(code **)(*plVar2 + 0x670))(plVar2,&local_108);
            cocos2d::CCPoint::operator=((CCPoint *)(plVar2 + 0xe1),pCVar18);
          }
        }
      }
      lVar20 = *(longlong *)(param_1 + 0x38c8);
      *(undefined2 *)(lVar20 + 0x278) = 1;
      FUN_14032d930(*(undefined8 *)(lVar20 + 0x250),*(undefined8 *)(lVar20 + 0x208));
      uVar19 = FUN_14003bdb0(&local_f8,lVar20 + 0x210);
      FUN_1402e8cd0(lVar20,uVar19);
      FUN_14032d6b0(*(undefined8 *)(param_1 + 0x3858),0,1);
      if (*(longlong *)(param_1 + 0x3858) != 0) {
        puVar1 = *(uint **)(*(longlong *)(param_1 + 0x3858) + 0x38);
        uVar28 = *puVar1;
        if (uVar28 != 0) {
          plVar26 = *(longlong **)(puVar1 + 4);
          local_108 = plVar26 + ((ulonglong)uVar28 - 1);
          if (plVar26 <= local_108) {
            do {
              plVar29 = (longlong *)*plVar26;
              if (plVar29 == (longlong *)0x0) break;
              local_128[0] = (int)uVar24 + 1;
              cocos2d::CCPoint::CCPoint(local_110,(CCPoint *)(plVar29 + 0xe1));
              lVar10 = plVar29[0xe0];
              uVar36 = *(undefined4 *)((longlong)plVar29 + 0x6fc);
              lVar20 = *(longlong *)(param_1 + 0x38c8);
              lVar3 = *(longlong *)(*(longlong *)(lVar20 + 0x208) + 0xdb0);
              uVar19 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_f8,local_110);
              in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffff00;
              uVar36 = FUN_14032c1c0(uVar19,*(undefined8 *)(lVar20 + 0x250),
                                     *(undefined4 *)(lVar3 + 0x14c),uVar36,(int)lVar10,
                                     in_stack_fffffffffffffeb0,*(undefined1 *)(lVar3 + 0x155),1,0,0)
              ;
              *(undefined4 *)(plVar29 + 0xe4) = uVar36;
              (**(code **)(*plVar29 + 0x40))(plVar29,local_128[0]);
              plVar26 = plVar26 + 1;
              uVar24 = (ulonglong)local_128[0];
            } while (plVar26 <= local_108);
            uVar32 = (ulonglong)local_res18[0];
            uVar15 = local_res10[0];
          }
        }
      }
      puVar1 = *(uint **)(*(longlong *)(param_1 + 0x3858) + 0x38);
      qsort(*(void **)(puVar1 + 4),(ulonglong)*puVar1,8,FUN_1402d13e0);
    }
    uVar28 = 0;
    if (*(char *)(param_1 + 0x38d1) != '\0') {
      FUN_1402dbde0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xdb0) + 0x140),
                    *(undefined8 *)(param_1 + 0x950));
    }
    if (*(char *)(param_1 + 0x3b20) == '\0') {
      pCVar18 = (CCPoint *)cocos2d::CCPoint::CCPoint((CCPoint *)local_res10,fVar37,fVar35);
      lVar20 = *(longlong *)(param_1 + 0x38c8);
      lVar3 = *(longlong *)(*(longlong *)(lVar20 + 0x208) + 0xdb0);
      uVar19 = cocos2d::CCPoint::CCPoint((CCPoint *)local_res18,pCVar18);
      fVar35 = (float)FUN_14032c1c0(uVar19,*(undefined8 *)(lVar20 + 0x250),
                                    *(undefined4 *)(lVar3 + 0x14c),uVar32,uVar15,
                                    in_stack_fffffffffffffeb0 & 0xffffff00,
                                    *(undefined1 *)(lVar3 + 0x155),1,(undefined1)local_res8,
                                    local_res20);
    }
    else {
      fVar35 = *(float *)(*(longlong *)(param_1 + 0x38c8) + 500);
    }
    dVar6 = DAT_1406236c8;
    dVar8 = (double)fVar35;
    if (*(char *)(param_1 + 0x38d1) != '\0') {
      FUN_14025bea0(*(undefined8 *)(param_1 + 0x950),0);
      FUN_14025b340(*(undefined8 *)(param_1 + 0x950));
      lVar20 = FUN_14025bcc0(*(undefined8 *)(param_1 + 0x950),0x3ed);
      uVar12 = DAT_140529ab2;
      uVar22 = DAT_140529ab0;
      if (lVar20 != 0) {
        uVar12 = *(undefined1 *)(lVar20 + 0x149);
        uVar22 = *(undefined2 *)(lVar20 + 0x147);
      }
      local_res8._0_3_ = CONCAT12(uVar12,uVar22);
      FUN_1402639f0(*(undefined8 *)(param_1 + 0x950),&local_res8);
    }
    FUN_140245e20(param_1);
    *(undefined4 *)(param_1 + 0x33c) = 0;
    if (*(longlong *)(param_1 + 0x3178) != 0) {
      FUN_1404895d0();
      *(undefined1 *)(*(longlong *)(param_1 + 0x3178) + 0x460) = 1;
      if (*(char *)(*(longlong *)(param_1 + 0x38c8) + 0x204) != '\0') {
        *(undefined8 *)(*(longlong *)(param_1 + 0x3178) + 0x220) = 0xbff0000000000000;
      }
    }
    FUN_140220fa0(param_1);
    if (*(longlong *)(param_1 + 0x3858) != 0) {
      puVar1 = *(uint **)(*(longlong *)(param_1 + 0x3858) + 0x38);
      uVar15 = *puVar1;
      if (uVar15 != 0) {
        plVar29 = *(longlong **)(puVar1 + 4);
        plVar26 = plVar29 + ((ulonglong)uVar15 - 1);
        for (; (plVar29 <= plVar26 && (lVar20 = *plVar29, lVar20 != 0)); plVar29 = plVar29 + 1) {
          if (*(char *)(lVar20 + 0x5d0) != '\0') {
            *(undefined1 *)(lVar20 + 0x5b4) = *(undefined1 *)(lVar20 + 0x6f8);
          }
        }
      }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x3ab8);
    for (puVar30 = *(undefined8 **)(param_1 + 0x3ab0); puVar30 != puVar4; puVar30 = puVar30 + 1) {
      local_res8 = (CCObject *)*puVar30;
      puVar5 = *(undefined8 **)(param_1 + 0x3ad0);
      if (puVar5 == *(undefined8 **)(param_1 + 0x3ad8)) {
        FUN_140063110(param_1 + 0x3ac8,puVar5,&local_res8);
      }
      else {
        *puVar5 = local_res8;
        *(longlong *)(param_1 + 0x3ad0) = *(longlong *)(param_1 + 0x3ad0) + 8;
      }
    }
    dVar9 = DAT_140622ec8;
    dVar11 = DAT_140622ec8;
    if (*(longlong *)(param_1 + 0x3ab0) != *(longlong *)(param_1 + 0x3ab8)) {
      *(longlong *)(param_1 + 0x3ab8) = *(longlong *)(param_1 + 0x3ab0);
      dVar9 = DAT_140622ec8;
      dVar11 = DAT_140622ec8;
    }
    while (DAT_140622ec8 = dVar11, dVar11 = DAT_140622ec8, dVar6 < dVar8) {
      dVar6 = dVar6 + DAT_140622ec8;
      dVar7 = DAT_140622ec8;
      if (dVar8 < dVar6) {
        dVar7 = DAT_140622ec8 - (dVar6 - dVar8);
        dVar6 = dVar8;
      }
      uVar15 = uVar28;
      if ((*(char *)(param_1 + 0x3b20) == '\0') ||
         (dVar6 <= (double)*(float *)(*(longlong *)(param_1 + 0x38c8) + 0x1f8))) {
        cVar33 = '\0';
        DAT_140622ec8 = dVar9;
      }
      else {
        cVar33 = '\x01';
        DAT_140622ec8 = dVar9;
      }
      do {
        do {
          while( true ) {
            uVar27 = uVar15;
            if (*(char *)(param_1 + 0x3861) != '\0') {
              *(undefined1 *)(param_1 + 0x3861) = 0;
              FUN_140251360(*(longlong *)(param_1 + 0x3ab0),*(longlong *)(param_1 + 0x3ab8),
                            *(longlong *)(param_1 + 0x3ab8) - *(longlong *)(param_1 + 0x3ab0) >> 3,
                            &LAB_1402d13c0);
            }
            uVar15 = cocos2d::CCArray::count(*(CCArray **)(param_1 + 0x3858));
            pCVar21 = (CCObject *)0x0;
            if (uVar27 < uVar15) {
              pCVar21 = cocos2d::CCArray::objectAtIndex(*(CCArray **)(param_1 + 0x3858),uVar27);
            }
            local_res8 = (CCObject *)0x0;
            if (*(longlong *)(param_1 + 0x3ab0) != *(longlong *)(param_1 + 0x3ab8)) {
              local_res8 = *(CCObject **)(*(longlong *)(param_1 + 0x3ab8) + -8);
            }
            if (pCVar21 != (CCObject *)0x0) break;
            if (local_res8 == (CCObject *)0x0) goto LAB_1402dccea;
LAB_1402dcaf6:
            fVar37 = *(float *)(local_res8 + 8);
            if (dVar6 < (double)fVar37) goto LAB_1402dccea;
            plVar26 = *(longlong **)local_res8;
            puVar4 = *(undefined8 **)(param_1 + 0x3ad0);
            if (puVar4 == *(undefined8 **)(param_1 + 0x3ad8)) {
              FUN_140063110(param_1 + 0x3ac8,puVar4,&local_res8);
            }
            else {
              *puVar4 = local_res8;
              *(longlong *)(param_1 + 0x3ad0) = *(longlong *)(param_1 + 0x3ad0) + 8;
            }
            *(longlong *)(param_1 + 0x3ab8) = *(longlong *)(param_1 + 0x3ab8) + -8;
            uVar15 = uVar27;
            if (*(int *)((longlong)plVar26 + 0x40c) == 0x4f4) {
              lVar20 = plVar26[0xb9];
              uVar36 = (**(code **)(*plVar26 + 0x5b0))(plVar26);
              FUN_1402ddf40(param_1,(int)lVar20,uVar36,fVar37,(float)dVar6,fVar35,(float)dVar7,
                            *(undefined1 *)((longlong)plVar26 + 0x692),cVar33);
            }
            else {
              *(float *)(plVar26 + 0xe4) = fVar37;
              if ((cVar33 == '\0') ||
                 (pfVar16 = (float *)(*(longlong *)(param_1 + 0x38c8) + 0x1f8),
                 fVar37 < *pfVar16 || fVar37 == *pfVar16)) {
                uVar12 = 0;
              }
              else {
                uVar12 = 1;
              }
              FUN_1402dcf40(param_1,plVar26,(float)dVar6,fVar35,(float)dVar7,uVar12);
              puVar17 = (undefined4 *)(**(code **)(*plVar26 + 200))(plVar26);
              (**(code **)(*plVar26 + 0x528))(plVar26,*puVar17);
            }
          }
          if ((local_res8 != (CCObject *)0x0) &&
             (*(float *)(local_res8 + 8) <= *(float *)(pCVar21 + 0x720) &&
              *(float *)(pCVar21 + 0x720) != *(float *)(local_res8 + 8))) goto LAB_1402dcaf6;
          fVar37 = *(float *)(pCVar21 + 0x720);
          if ((dVar6 < (double)fVar37) && (uVar28 = uVar27, pCVar21[0x5d1] == (CCObject)0x0))
          goto LAB_1402dccea;
          if ((cVar33 == '\0') ||
             (pfVar16 = (float *)(*(longlong *)(param_1 + 0x38c8) + 0x1f8),
             fVar37 < *pfVar16 || fVar37 == *pfVar16)) {
            uVar12 = 0;
          }
          else {
            uVar12 = 1;
          }
          uVar28 = uVar27 + 1;
          uVar15 = uVar28;
        } while (pCVar21[0x5d1] != (CCObject)0x0);
        if (*(int *)(param_1 + 0x3aa8) < *(int *)(pCVar21 + 0x6fc)) {
          *(int *)(param_1 + 0x3aa8) = *(int *)(pCVar21 + 0x6fc);
        }
      } while ((*(int *)(param_1 + 0x33c) != *(int *)(pCVar21 + 0x700)) ||
              (cVar13 = FUN_1402dcf40(param_1,pCVar21,(float)dVar6,fVar35,(float)dVar7,uVar12),
              cVar13 != '\0'));
      dVar7 = dVar7 - (dVar6 - (double)*(float *)(pCVar21 + 0x720));
      dVar6 = (double)*(float *)(pCVar21 + 0x720);
      uVar28 = uVar27;
LAB_1402dccea:
      dVar9 = DAT_140622ec8;
      if (*(char *)(param_1 + 0x38d1) != '\0') {
        FUN_14025bea0(*(undefined8 *)(param_1 + 0x950),(float)dVar7);
        FUN_14025b340(*(undefined8 *)(param_1 + 0x950));
        dVar9 = DAT_140622ec8;
      }
    }
    lVar20 = *(longlong *)(param_1 + 0x3178);
    DAT_140622ec8 = dVar9;
    if (lVar20 != 0) {
      *(double *)(lVar20 + 0x218) = dVar8 + *(double *)(lVar20 + 0x228);
      lVar20 = *(longlong *)(param_1 + 0x3178);
      puVar4 = *(undefined8 **)(lVar20 + 0x1e0);
      for (puVar30 = (undefined8 *)*puVar4; puVar30 != puVar4; puVar30 = (undefined8 *)*puVar30) {
        FUN_140481ba0(lVar20 + 0x198,*(undefined4 *)(puVar30 + 2));
      }
      FUN_1402222b0(param_1,0);
      *(undefined1 *)(*(longlong *)(param_1 + 0x3178) + 0x460) = 0;
    }
    if (*(char *)(param_1 + 0x38d1) != '\0') {
      FUN_14020c490(param_1);
    }
    FUN_1402de4e0(param_1);
    FUN_1402de6b0(param_1);
    if (*(char *)(param_1 + 0x3b21) != '\0') {
      *(undefined1 *)(param_1 + 0x3b21) = 0;
      if (*(char *)(param_1 + 0x3b20) == '\0') {
        return;
      }
      FUN_140243970(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x38a0) + 0x28c));
      FUN_140249d70(param_1 + 0x7b8);
      FUN_140249c30(param_1 + 0x7f8);
      if (*(longlong *)(param_1 + 0x838) != *(longlong *)(param_1 + 0x840)) {
        *(longlong *)(param_1 + 0x840) = *(longlong *)(param_1 + 0x838);
      }
    }
    if (*(char *)(param_1 + 0x3b20) != '\0') {
      plVar26 = (longlong *)**(longlong **)(param_1 + 0x7a8);
      cVar33 = *(char *)((longlong)plVar26 + 0x19);
      while (cVar33 == '\0') {
        lVar20 = plVar26[4];
        uVar36 = *(undefined4 *)((longlong)plVar26 + 0x24);
        if (DAT_1406c2e88 == (longlong *)0x0) {
          local_res8 = (CCObject *)FUN_1404d0770(0x888);
          DAT_1406c2e88 = (longlong *)FUN_140053100(local_res8);
          (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
        }
        FUN_140058fb0(DAT_1406c2e88,(int)lVar20,uVar36,0);
        plVar29 = (longlong *)plVar26[2];
        if (*(char *)((longlong)plVar29 + 0x19) == '\0') {
          cVar33 = *(char *)(*plVar29 + 0x19);
          plVar26 = plVar29;
          plVar29 = (longlong *)*plVar29;
          while (cVar33 == '\0') {
            cVar33 = *(char *)(*plVar29 + 0x19);
            plVar26 = plVar29;
            plVar29 = (longlong *)*plVar29;
          }
        }
        else {
          cVar33 = *(char *)(plVar26[1] + 0x19);
          plVar2 = (longlong *)plVar26[1];
          plVar29 = plVar26;
          while ((plVar26 = plVar2, cVar33 == '\0' && (plVar29 == (longlong *)plVar26[2]))) {
            cVar33 = *(char *)(plVar26[1] + 0x19);
            plVar2 = (longlong *)plVar26[1];
            plVar29 = plVar26;
          }
        }
        cVar33 = *(char *)((longlong)plVar26 + 0x19);
      }
    }
  }
  return;
}

