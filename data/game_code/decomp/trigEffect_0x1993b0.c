// Called from triggerObject base / 0x4bc180
// Function: FUN_1401993b0 @ 0x1993b0


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1401993b0(CCSprite *param_1)

{
  float fVar1;
  char *pcVar2;
  longlong *plVar3;
  float fVar4;
  CCObject *pCVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  void *pvVar12;
  char **ppcVar13;
  CCObject *pCVar14;
  longlong *plVar15;
  undefined8 uVar16;
  CCObject *pCVar17;
  longlong lVar18;
  float *pfVar19;
  CCArray *this;
  CCFadeIn *pCVar20;
  CCFadeOut *pCVar21;
  CCCallFunc *pCVar22;
  CCCallFunc *pCVar23;
  CCSequence *pCVar24;
  CCNode *this_00;
  undefined8 *******pppppppuVar25;
  char *******pppppppcVar26;
  byte bVar27;
  ulonglong uVar28;
  int iVar29;
  char *_Buf2;
  char **_Src;
  int iVar30;
  undefined4 uVar31;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  CCNode local_1a8;
  char local_1a7;
  undefined4 local_1a4;
  CCObject *local_1a0;
  CCObject *local_198;
  CCSprite *local_190;
  char *local_188;
  undefined8 local_180;
  CCObject *local_178;
  undefined8 *******local_170;
  undefined8 uStack_168;
  char *local_160;
  ulonglong local_158;
  char local_150 [8];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  char *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  char *******local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  char *******local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  char *******local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  ulonglong local_98;
  char *******local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  ulonglong local_78;
  char *******local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1406ba040 ^ (ulonglong)auStack_1d8;
  uVar28 = 0;
  local_1a4 = 0;
  local_190 = param_1;
  cVar8 = (**(code **)(*(longlong *)param_1 + 0x568))();
  if (cVar8 != '\0') {
    return;
  }
  cVar8 = (**(code **)(*(longlong *)(param_1 + 0x140) + 0x20))();
  if (cVar8 == '\0') {
    return;
  }
  if (param_1[0x41c] != (CCSprite)0x0) {
    return;
  }
  if (param_1[0x28d] != (CCSprite)0x0) {
    return;
  }
  lVar11 = (**(code **)(*(longlong *)param_1 + 0x1e8))(param_1);
  if (lVar11 == 0) {
    return;
  }
  uStack_128 = 0;
  local_120 = 0;
  local_118 = 0xf;
  local_130 = (char *)0x0;
  uStack_108 = 0;
  local_100 = 0;
  local_f8 = 0xf;
  local_110 = (char *)0x0;
  local_1a7 = '\0';
  iVar30 = *(int *)(param_1 + 0x40c);
  if (0x11e < iVar30) {
    if (iVar30 < 0x534) {
      if (iVar30 != 0x533) {
        if (iVar30 == 0x11f) goto LAB_140199eea;
        if ((iVar30 != 0x294) && (iVar30 != 0x2e9)) {
          if ((iVar30 != 0x2eb) && (iVar30 != 0x2ed)) goto switchD_1401994c9_caseD_e;
LAB_140199e50:
          bVar27 = 1;
          local_130 = (char *)FUN_14003aa10(0x20);
          uVar16 = s_portalshine_06_front_001_png_14055d990._8_8_;
          local_120 = 0x1c;
          local_118 = 0x1f;
          *(undefined8 *)local_130 = s_portalshine_06_front_001_png_14055d990._0_8_;
          *(undefined8 *)(local_130 + 8) = uVar16;
          *(undefined8 *)(local_130 + 0x10) = s_portalshine_06_front_001_png_14055d990._16_8_;
          *(undefined4 *)(local_130 + 0x18) = s_portalshine_06_front_001_png_14055d990._24_4_;
          local_130[0x1c] = '\0';
          local_110 = (char *)FUN_14003aa10(0x20);
          uVar16 = s_portalshine_06_back_001_png_14055d930._8_8_;
          local_100 = 0x1b;
          local_f8 = 0x1f;
          *(undefined8 *)local_110 = s_portalshine_06_back_001_png_14055d930._0_8_;
          *(undefined8 *)(local_110 + 8) = uVar16;
          *(undefined8 *)(local_110 + 0x10) = s_portalshine_06_back_001_png_14055d930._16_8_;
          *(undefined2 *)(local_110 + 0x18) = s_portalshine_06_back_001_png_14055d930._24_2_;
          local_110[0x1a] = s_portalshine_06_back_001_png_14055d930[0x1a];
          local_110[0x1b] = '\0';
          goto LAB_14019a321;
        }
      }
    }
    else {
      if (iVar30 == 0x536) {
        local_d0 = (char *******)0x0;
        uStack_c8 = 0;
        local_c0 = 0;
        local_b8 = 0xf;
        local_d0 = (char *******)FUN_14003aa10(0x20);
        uVar16 = s_boost_05_001_png_14055d808._8_8_;
        local_c0 = 0x10;
        local_b8 = 0x1f;
        *local_d0 = (char ******)s_boost_05_001_png_14055d808._0_8_;
        local_d0[1] = (char ******)uVar16;
        *(char *)(local_d0 + 2) = '\0';
        local_1a4 = 1;
        local_140 = 8;
        local_138 = 0xf;
        local_1a0 = (CCObject *)s__001_png_14055d768._0_8_;
        local_150[0] = s__001_png_14055d768[0];
        local_150[1] = s__001_png_14055d768[1];
        local_150[2] = s__001_png_14055d768[2];
        local_150[3] = s__001_png_14055d768[3];
        local_150[4] = s__001_png_14055d768[4];
        local_150[5] = s__001_png_14055d768[5];
        local_150[6] = s__001_png_14055d768[6];
        local_150[7] = s__001_png_14055d768[7];
        local_148 = 0;
        local_160 = (char *)0xe;
        local_158 = 0xf;
        local_170 = (undefined8 *******)s__shine_001_png_14055d7f8._0_8_;
        uStack_168._0_6_ =
             CONCAT24(s__shine_001_png_14055d7f8._12_2_,s__shine_001_png_14055d7f8._8_4_);
        uStack_168 = (char *)(ulonglong)(uint6)uStack_168;
        local_1a8 = (CCNode)0x0;
        while( true ) {
          uVar7 = local_c0;
          uVar6 = local_158;
          pcVar2 = local_160;
          pCVar14 = (CCObject *)local_150;
          if (local_1a8 != (CCNode)0x0) {
            pCVar14 = local_1a0;
          }
          pppppppcVar26 = (char *******)&local_d0;
          if (0xf < local_b8) {
            pppppppcVar26 = local_d0;
          }
          local_198 = (CCObject *)pppppppcVar26;
          if ((local_c0 < 8) || (local_c0 - 8 < uVar28)) break;
          cVar8 = *(char *)pCVar14;
          pvVar12 = memchr((char *)((longlong)pppppppcVar26 + uVar28),(int)cVar8,
                           (size_t)((longlong)pppppppcVar26 +
                                   ((local_c0 - 7) - (longlong)((longlong)pppppppcVar26 + uVar28))))
          ;
          while( true ) {
            if (pvVar12 == (void *)0x0) goto LAB_14019a21f;
            iVar30 = memcmp(pvVar12,pCVar14,8);
            if (iVar30 == 0) break;
            pvVar12 = memchr((void *)((longlong)pvVar12 + 1),(int)cVar8,
                             (size_t)((longlong)pppppppcVar26 +
                                     ((uVar7 - 7) - ((longlong)pvVar12 + 1))));
          }
          lVar11 = (longlong)pvVar12 - (longlong)local_198;
          if (lVar11 == -1) break;
          pppppppuVar25 = &local_170;
          if (0xf < uVar6) {
            pppppppuVar25 = local_170;
          }
          local_1b8 = (longlong)pcVar2;
          FUN_140041ff0(&local_d0,lVar11,8,pppppppuVar25);
          uVar28 = lVar11 + (longlong)local_160;
        }
LAB_14019a21f:
        param_1 = local_190;
        if (0xf < uVar6) {
          pppppppuVar25 = local_170;
          if ((0xfff < local_158 + 1) &&
             (pppppppuVar25 = (undefined8 *******)local_170[-1],
             0x1f < (ulonglong)((longlong)local_170 + (-8 - (longlong)pppppppuVar25)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pppppppuVar25);
        }
        pppppppcVar26 = (char *******)&local_d0;
        if (0xf < local_b8) {
          pppppppcVar26 = local_d0;
        }
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (*(char *)((longlong)pppppppcVar26 + lVar11) != '\0');
        FUN_14003cce0(&local_130);
        if (0xf < local_b8) {
          pppppppcVar26 = local_d0;
          if ((0xfff < local_b8 + 1) &&
             (pppppppcVar26 = (char *******)local_d0[-1],
             (char *)0x1f < (char *)((longlong)local_d0 + (-8 - (longlong)pppppppcVar26)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          goto LAB_14019a313;
        }
        goto LAB_14019a318;
      }
      if (iVar30 != 0x78d) {
        if ((iVar30 == 0x810) || (iVar30 == 0xb56)) goto LAB_140199e50;
        if (iVar30 != 0xb6e) goto switchD_1401994c9_caseD_e;
        goto switchD_1401994c9_caseD_a;
      }
    }
switchD_1401994c9_caseD_c:
    bVar27 = 1;
    local_130 = (char *)FUN_14003aa10(0x20);
    uVar16 = s_portalshine_02_front_001_png_14055da50._8_8_;
    local_120 = 0x1c;
    local_118 = 0x1f;
    *(undefined8 *)local_130 = s_portalshine_02_front_001_png_14055da50._0_8_;
    *(undefined8 *)(local_130 + 8) = uVar16;
    *(undefined8 *)(local_130 + 0x10) = s_portalshine_02_front_001_png_14055da50._16_8_;
    *(undefined4 *)(local_130 + 0x18) = s_portalshine_02_front_001_png_14055da50._24_4_;
    local_130[0x1c] = '\0';
    local_110 = (char *)FUN_14003aa10(0x20);
    uVar16 = s_portalshine_02_back_001_png_14055d9f0._8_8_;
    local_100 = 0x1b;
    local_f8 = 0x1f;
    *(undefined8 *)local_110 = s_portalshine_02_back_001_png_14055d9f0._0_8_;
    *(undefined8 *)(local_110 + 8) = uVar16;
    *(undefined8 *)(local_110 + 0x10) = s_portalshine_02_back_001_png_14055d9f0._16_8_;
    *(undefined2 *)(local_110 + 0x18) = s_portalshine_02_back_001_png_14055d9f0._24_2_;
    local_110[0x1a] = s_portalshine_02_back_001_png_14055d9f0[0x1a];
    local_110[0x1b] = '\0';
    goto LAB_14019a321;
  }
  if (iVar30 == 0x11e) {
LAB_140199eea:
    bVar27 = 1;
    local_130 = (char *)FUN_14003aa10(0x20);
    uVar16 = s_portalshine_05_front_001_png_14055da90._8_8_;
    local_120 = 0x1c;
    local_118 = 0x1f;
    *(undefined8 *)local_130 = s_portalshine_05_front_001_png_14055da90._0_8_;
    *(undefined8 *)(local_130 + 8) = uVar16;
    *(undefined8 *)(local_130 + 0x10) = s_portalshine_05_front_001_png_14055da90._16_8_;
    *(undefined4 *)(local_130 + 0x18) = s_portalshine_05_front_001_png_14055da90._24_4_;
    local_130[0x1c] = '\0';
    local_110 = (char *)FUN_14003aa10(0x20);
    uVar16 = s_portalshine_05_back_001_png_14055d970._8_8_;
    local_100 = 0x1b;
    local_f8 = 0x1f;
    *(undefined8 *)local_110 = s_portalshine_05_back_001_png_14055d970._0_8_;
    *(undefined8 *)(local_110 + 8) = uVar16;
    *(undefined8 *)(local_110 + 0x10) = s_portalshine_05_back_001_png_14055d970._16_8_;
    *(undefined2 *)(local_110 + 0x18) = s_portalshine_05_back_001_png_14055d970._24_2_;
    local_110[0x1a] = s_portalshine_05_back_001_png_14055d970[0x1a];
    local_110[0x1b] = '\0';
    goto LAB_14019a321;
  }
  switch(iVar30) {
  case 10:
  case 0xb:
switchD_1401994c9_caseD_a:
    bVar27 = 1;
    local_130 = (char *)FUN_14003aa10(0x20);
    uVar16 = s_portalshine_01_front_001_png_14055d820._8_8_;
    local_120 = 0x1c;
    local_118 = 0x1f;
    *(undefined8 *)local_130 = s_portalshine_01_front_001_png_14055d820._0_8_;
    *(undefined8 *)(local_130 + 8) = uVar16;
    *(undefined8 *)(local_130 + 0x10) = s_portalshine_01_front_001_png_14055d820._16_8_;
    *(undefined4 *)(local_130 + 0x18) = s_portalshine_01_front_001_png_14055d820._24_4_;
    local_130[0x1c] = '\0';
    local_110 = (char *)FUN_14003aa10(0x20);
    uVar16 = s_portalshine_01_back_001_png_14055da30._8_8_;
    local_100 = 0x1b;
    local_f8 = 0x1f;
    *(undefined8 *)local_110 = s_portalshine_01_back_001_png_14055da30._0_8_;
    *(undefined8 *)(local_110 + 8) = uVar16;
    *(undefined8 *)(local_110 + 0x10) = s_portalshine_01_back_001_png_14055da30._16_8_;
    *(undefined2 *)(local_110 + 0x18) = s_portalshine_01_back_001_png_14055da30._24_2_;
    local_110[0x1a] = s_portalshine_01_back_001_png_14055da30[0x1a];
    local_110[0x1b] = '\0';
    goto LAB_14019a321;
  case 0xc:
  case 0xd:
  case 0x2f:
  case 0x6f:
    goto switchD_1401994c9_caseD_c;
  default:
    goto switchD_1401994c9_caseD_e;
  case 0x2d:
  case 0x2e:
    bVar27 = 1;
    local_130 = (char *)FUN_14003aa10(0x20);
    uVar16 = s_portalshine_03_front_001_png_14055da10._8_8_;
    local_120 = 0x1c;
    local_118 = 0x1f;
    *(undefined8 *)local_130 = s_portalshine_03_front_001_png_14055da10._0_8_;
    *(undefined8 *)(local_130 + 8) = uVar16;
    *(undefined8 *)(local_130 + 0x10) = s_portalshine_03_front_001_png_14055da10._16_8_;
    *(undefined4 *)(local_130 + 0x18) = s_portalshine_03_front_001_png_14055da10._24_4_;
    local_130[0x1c] = '\0';
    local_110 = (char *)FUN_14003aa10(0x20);
    uVar16 = s_portalshine_03_back_001_png_14055dab0._8_8_;
    local_100 = 0x1b;
    local_f8 = 0x1f;
    *(undefined8 *)local_110 = s_portalshine_03_back_001_png_14055dab0._0_8_;
    *(undefined8 *)(local_110 + 8) = uVar16;
    *(undefined8 *)(local_110 + 0x10) = s_portalshine_03_back_001_png_14055dab0._16_8_;
    *(undefined2 *)(local_110 + 0x18) = s_portalshine_03_back_001_png_14055dab0._24_2_;
    local_110[0x1a] = s_portalshine_03_back_001_png_14055dab0[0x1a];
    local_110[0x1b] = '\0';
    goto LAB_14019a321;
  case 99:
  case 0x65:
    bVar27 = 1;
    local_130 = (char *)FUN_14003aa10(0x20);
    uVar16 = s_portalshine_04_front_001_png_14055dad0._8_8_;
    local_120 = 0x1c;
    local_118 = 0x1f;
    *(undefined8 *)local_130 = s_portalshine_04_front_001_png_14055dad0._0_8_;
    *(undefined8 *)(local_130 + 8) = uVar16;
    *(undefined8 *)(local_130 + 0x10) = s_portalshine_04_front_001_png_14055dad0._16_8_;
    *(undefined4 *)(local_130 + 0x18) = s_portalshine_04_front_001_png_14055dad0._24_4_;
    local_130[0x1c] = '\0';
    local_110 = (char *)FUN_14003aa10(0x20);
    uVar16 = s_portalshine_04_back_001_png_14055da70._8_8_;
    local_100 = 0x1b;
    local_f8 = 0x1f;
    *(undefined8 *)local_110 = s_portalshine_04_back_001_png_14055da70._0_8_;
    *(undefined8 *)(local_110 + 8) = uVar16;
    *(undefined8 *)(local_110 + 0x10) = s_portalshine_04_back_001_png_14055da70._16_8_;
    *(undefined2 *)(local_110 + 0x18) = s_portalshine_04_back_001_png_14055da70._24_2_;
    local_110[0x1a] = s_portalshine_04_back_001_png_14055da70[0x1a];
    local_110[0x1b] = '\0';
    goto LAB_14019a321;
  case 200:
    local_f0 = (char *******)0x0;
    uStack_e8 = 0;
    local_e0 = 0;
    local_d8 = 0xf;
    local_f0 = (char *******)FUN_14003aa10(0x20);
    uVar16 = s_boost_01_001_png_14055d7b0._8_8_;
    local_e0 = 0x10;
    local_d8 = 0x1f;
    *local_f0 = (char ******)s_boost_01_001_png_14055d7b0._0_8_;
    local_f0[1] = (char ******)uVar16;
    *(char *)(local_f0 + 2) = '\0';
    local_1a4 = 2;
    local_140 = 8;
    local_138 = 0xf;
    local_1a0 = (CCObject *)s__001_png_14055d768._0_8_;
    local_150[0] = s__001_png_14055d768[0];
    local_150[1] = s__001_png_14055d768[1];
    local_150[2] = s__001_png_14055d768[2];
    local_150[3] = s__001_png_14055d768[3];
    local_150[4] = s__001_png_14055d768[4];
    local_150[5] = s__001_png_14055d768[5];
    local_150[6] = s__001_png_14055d768[6];
    local_150[7] = s__001_png_14055d768[7];
    local_148 = 0;
    local_160 = (char *)0xe;
    local_158 = 0xf;
    local_170 = (undefined8 *******)s__shine_001_png_14055d7f8._0_8_;
    uStack_168._0_6_ = CONCAT24(s__shine_001_png_14055d7f8._12_2_,s__shine_001_png_14055d7f8._8_4_);
    uStack_168 = (char *)(ulonglong)(uint6)uStack_168;
    local_1a8 = (CCNode)0x0;
    while( true ) {
      uVar7 = local_e0;
      uVar6 = local_158;
      pcVar2 = local_160;
      pCVar14 = (CCObject *)local_150;
      if (local_1a8 != (CCNode)0x0) {
        pCVar14 = local_1a0;
      }
      pppppppcVar26 = (char *******)&local_f0;
      if (0xf < local_d8) {
        pppppppcVar26 = local_f0;
      }
      local_198 = (CCObject *)pppppppcVar26;
      if ((local_e0 < 8) || (local_e0 - 8 < uVar28)) break;
      cVar8 = *(char *)pCVar14;
      pvVar12 = memchr((char *)((longlong)pppppppcVar26 + uVar28),(int)cVar8,
                       (size_t)((longlong)pppppppcVar26 +
                               ((local_e0 - 7) - (longlong)((longlong)pppppppcVar26 + uVar28))));
      while( true ) {
        if (pvVar12 == (void *)0x0) goto LAB_1401995ff;
        iVar30 = memcmp(pvVar12,pCVar14,8);
        if (iVar30 == 0) break;
        pvVar12 = memchr((void *)((longlong)pvVar12 + 1),(int)cVar8,
                         (size_t)((longlong)pppppppcVar26 + ((uVar7 - 7) - ((longlong)pvVar12 + 1)))
                        );
      }
      lVar11 = (longlong)pvVar12 - (longlong)local_198;
      if (lVar11 == -1) break;
      pppppppuVar25 = &local_170;
      if (0xf < uVar6) {
        pppppppuVar25 = local_170;
      }
      local_1b8 = (longlong)pcVar2;
      FUN_140041ff0(&local_f0,lVar11,8,pppppppuVar25);
      uVar28 = lVar11 + (longlong)local_160;
    }
LAB_1401995ff:
    param_1 = local_190;
    if (0xf < uVar6) {
      pppppppuVar25 = local_170;
      if ((0xfff < local_158 + 1) &&
         (pppppppuVar25 = (undefined8 *******)local_170[-1],
         0x1f < (ulonglong)((longlong)local_170 + (-8 - (longlong)pppppppuVar25)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppppppuVar25);
    }
    pppppppcVar26 = (char *******)&local_f0;
    if (0xf < local_d8) {
      pppppppcVar26 = local_f0;
    }
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)((longlong)pppppppcVar26 + lVar11) != '\0');
    FUN_14003cce0(&local_130);
    if (0xf < local_d8) {
      pppppppcVar26 = local_f0;
      if ((0xfff < local_d8 + 1) &&
         (pppppppcVar26 = (char *******)local_f0[-1],
         (char *)0x1f < (char *)((longlong)local_f0 + (-8 - (longlong)pppppppcVar26)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
LAB_14019a313:
      free(pppppppcVar26);
    }
    break;
  case 0xc9:
    local_b0 = (char *******)0x0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 0xf;
    local_b0 = (char *******)FUN_14003aa10(0x20);
    uVar16 = s_boost_02_001_png_14055d7c8._8_8_;
    local_a0 = 0x10;
    local_98 = 0x1f;
    *local_b0 = (char ******)s_boost_02_001_png_14055d7c8._0_8_;
    local_b0[1] = (char ******)uVar16;
    *(char *)(local_b0 + 2) = '\0';
    local_1a4 = 4;
    local_140 = 8;
    local_138 = 0xf;
    local_1a0 = (CCObject *)s__001_png_14055d768._0_8_;
    local_150[0] = s__001_png_14055d768[0];
    local_150[1] = s__001_png_14055d768[1];
    local_150[2] = s__001_png_14055d768[2];
    local_150[3] = s__001_png_14055d768[3];
    local_150[4] = s__001_png_14055d768[4];
    local_150[5] = s__001_png_14055d768[5];
    local_150[6] = s__001_png_14055d768[6];
    local_150[7] = s__001_png_14055d768[7];
    local_148 = 0;
    local_160 = (char *)0xe;
    local_158 = 0xf;
    local_170 = (undefined8 *******)s__shine_001_png_14055d7f8._0_8_;
    uStack_168._0_6_ = CONCAT24(s__shine_001_png_14055d7f8._12_2_,s__shine_001_png_14055d7f8._8_4_);
    uStack_168 = (char *)(ulonglong)(uint6)uStack_168;
    local_1a8 = (CCNode)0x0;
    while( true ) {
      uVar7 = local_a0;
      uVar6 = local_158;
      pcVar2 = local_160;
      pCVar14 = (CCObject *)local_150;
      if (local_1a8 != (CCNode)0x0) {
        pCVar14 = local_1a0;
      }
      pppppppcVar26 = (char *******)&local_b0;
      if (0xf < local_98) {
        pppppppcVar26 = local_b0;
      }
      local_198 = (CCObject *)pppppppcVar26;
      if ((local_a0 < 8) || (local_a0 - 8 < uVar28)) break;
      cVar8 = *(char *)pCVar14;
      pvVar12 = memchr((char *)((longlong)pppppppcVar26 + uVar28),(int)cVar8,
                       (size_t)((longlong)pppppppcVar26 +
                               ((local_a0 - 7) - (longlong)((longlong)pppppppcVar26 + uVar28))));
      while( true ) {
        if (pvVar12 == (void *)0x0) goto LAB_14019982f;
        iVar30 = memcmp(pvVar12,pCVar14,8);
        if (iVar30 == 0) break;
        pvVar12 = memchr((void *)((longlong)pvVar12 + 1),(int)cVar8,
                         (size_t)((longlong)pppppppcVar26 + ((uVar7 - 7) - ((longlong)pvVar12 + 1)))
                        );
      }
      lVar11 = (longlong)pvVar12 - (longlong)local_198;
      if (lVar11 == -1) break;
      pppppppuVar25 = &local_170;
      if (0xf < uVar6) {
        pppppppuVar25 = local_170;
      }
      local_1b8 = (longlong)pcVar2;
      FUN_140041ff0(&local_b0,lVar11,8,pppppppuVar25);
      uVar28 = lVar11 + (longlong)local_160;
    }
LAB_14019982f:
    param_1 = local_190;
    if (0xf < uVar6) {
      pppppppuVar25 = local_170;
      if ((0xfff < local_158 + 1) &&
         (pppppppuVar25 = (undefined8 *******)local_170[-1],
         0x1f < (ulonglong)((longlong)local_170 + (-8 - (longlong)pppppppuVar25)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppppppuVar25);
    }
    pppppppcVar26 = (char *******)&local_b0;
    if (0xf < local_98) {
      pppppppcVar26 = local_b0;
    }
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)((longlong)pppppppcVar26 + lVar11) != '\0');
    FUN_14003cce0(&local_130);
    FUN_14003a830(&local_b0);
    break;
  case 0xca:
    local_90 = (char *******)0x0;
    uStack_88 = 0;
    local_80 = 0;
    local_78 = 0xf;
    local_90 = (char *******)FUN_14003aa10(0x20);
    uVar16 = s_boost_03_001_png_14055d840._8_8_;
    local_80 = 0x10;
    local_78 = 0x1f;
    *local_90 = (char ******)s_boost_03_001_png_14055d840._0_8_;
    local_90[1] = (char ******)uVar16;
    *(char *)(local_90 + 2) = '\0';
    local_1a4 = 8;
    local_140 = 8;
    local_138 = 0xf;
    local_1a0 = (CCObject *)s__001_png_14055d768._0_8_;
    local_150[0] = s__001_png_14055d768[0];
    local_150[1] = s__001_png_14055d768[1];
    local_150[2] = s__001_png_14055d768[2];
    local_150[3] = s__001_png_14055d768[3];
    local_150[4] = s__001_png_14055d768[4];
    local_150[5] = s__001_png_14055d768[5];
    local_150[6] = s__001_png_14055d768[6];
    local_150[7] = s__001_png_14055d768[7];
    local_148 = 0;
    local_160 = (char *)0xe;
    local_158 = 0xf;
    local_170 = (undefined8 *******)s__shine_001_png_14055d7f8._0_8_;
    uStack_168._0_6_ = CONCAT24(s__shine_001_png_14055d7f8._12_2_,s__shine_001_png_14055d7f8._8_4_);
    uStack_168 = (char *)(ulonglong)(uint6)uStack_168;
    local_1a8 = (CCNode)0x0;
    while( true ) {
      uVar7 = local_80;
      uVar6 = local_158;
      pcVar2 = local_160;
      pCVar14 = (CCObject *)local_150;
      if (local_1a8 != (CCNode)0x0) {
        pCVar14 = local_1a0;
      }
      pppppppcVar26 = (char *******)&local_90;
      if (0xf < local_78) {
        pppppppcVar26 = local_90;
      }
      local_198 = (CCObject *)pppppppcVar26;
      if ((local_80 < 8) || (local_80 - 8 < uVar28)) break;
      cVar8 = *(char *)pCVar14;
      pvVar12 = memchr((char *)((longlong)pppppppcVar26 + uVar28),(int)cVar8,
                       (size_t)((longlong)pppppppcVar26 +
                               ((local_80 - 7) - (longlong)((longlong)pppppppcVar26 + uVar28))));
      while( true ) {
        if (pvVar12 == (void *)0x0) goto LAB_140199a1f;
        iVar30 = memcmp(pvVar12,pCVar14,8);
        if (iVar30 == 0) break;
        pvVar12 = memchr((void *)((longlong)pvVar12 + 1),(int)cVar8,
                         (size_t)((longlong)pppppppcVar26 + ((uVar7 - 7) - ((longlong)pvVar12 + 1)))
                        );
      }
      lVar11 = (longlong)pvVar12 - (longlong)local_198;
      if (lVar11 == -1) break;
      pppppppuVar25 = &local_170;
      if (0xf < uVar6) {
        pppppppuVar25 = local_170;
      }
      local_1b8 = (longlong)pcVar2;
      FUN_140041ff0(&local_90,lVar11,8,pppppppuVar25);
      uVar28 = lVar11 + (longlong)local_160;
    }
LAB_140199a1f:
    param_1 = local_190;
    if (0xf < uVar6) {
      pppppppuVar25 = local_170;
      if ((0xfff < local_158 + 1) &&
         (pppppppuVar25 = (undefined8 *******)local_170[-1],
         0x1f < (ulonglong)((longlong)local_170 + (-8 - (longlong)pppppppuVar25)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppppppuVar25);
    }
    pppppppcVar26 = (char *******)&local_90;
    if (0xf < local_78) {
      pppppppcVar26 = local_90;
    }
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)((longlong)pppppppcVar26 + lVar11) != '\0');
    FUN_14003cce0(&local_130);
    FUN_14003a830(&local_90);
    break;
  case 0xcb:
    local_70 = (char *******)0x0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0xf;
    local_70 = (char *******)FUN_14003aa10(0x20);
    uVar16 = s_boost_04_001_png_14055d858._8_8_;
    local_60 = 0x10;
    local_58 = 0x1f;
    *local_70 = (char ******)s_boost_04_001_png_14055d858._0_8_;
    local_70[1] = (char ******)uVar16;
    *(char *)(local_70 + 2) = '\0';
    local_1a4 = 0x10;
    local_140 = 8;
    local_138 = 0xf;
    local_188 = (char *)s__001_png_14055d768._0_8_;
    local_150[0] = s__001_png_14055d768[0];
    local_150[1] = s__001_png_14055d768[1];
    local_150[2] = s__001_png_14055d768[2];
    local_150[3] = s__001_png_14055d768[3];
    local_150[4] = s__001_png_14055d768[4];
    local_150[5] = s__001_png_14055d768[5];
    local_150[6] = s__001_png_14055d768[6];
    local_150[7] = s__001_png_14055d768[7];
    local_148 = 0;
    local_160 = (char *)0xe;
    local_158 = 0xf;
    local_170 = (undefined8 *******)s__shine_001_png_14055d7f8._0_8_;
    uStack_168._0_6_ = CONCAT24(s__shine_001_png_14055d7f8._12_2_,s__shine_001_png_14055d7f8._8_4_);
    uStack_168 = (char *)(ulonglong)(uint6)uStack_168;
    local_1a8 = (CCNode)0x0;
    while( true ) {
      uVar7 = local_60;
      uVar6 = local_158;
      pcVar2 = local_160;
      _Buf2 = local_150;
      if (local_1a8 != (CCNode)0x0) {
        _Buf2 = local_188;
      }
      pppppppcVar26 = (char *******)&local_70;
      if (0xf < local_58) {
        pppppppcVar26 = local_70;
      }
      local_198 = (CCObject *)pppppppcVar26;
      if ((local_60 < 8) || (local_60 - 8 < uVar28)) break;
      cVar8 = *_Buf2;
      pvVar12 = memchr((char *)((longlong)pppppppcVar26 + uVar28),(int)cVar8,
                       (size_t)((longlong)pppppppcVar26 +
                               ((local_60 - 7) - (longlong)((longlong)pppppppcVar26 + uVar28))));
      while( true ) {
        if (pvVar12 == (void *)0x0) goto LAB_140199c33;
        iVar30 = memcmp(pvVar12,_Buf2,8);
        if (iVar30 == 0) break;
        pvVar12 = memchr((void *)((longlong)pvVar12 + 1),(int)cVar8,
                         (size_t)((longlong)pppppppcVar26 + ((uVar7 - 7) - ((longlong)pvVar12 + 1)))
                        );
      }
      lVar11 = (longlong)pvVar12 - (longlong)local_198;
      if (lVar11 == -1) break;
      pppppppuVar25 = &local_170;
      if (0xf < uVar6) {
        pppppppuVar25 = local_170;
      }
      local_1b8 = (longlong)pcVar2;
      FUN_140041ff0(&local_70,lVar11,8,pppppppuVar25);
      uVar28 = lVar11 + (longlong)local_160;
    }
LAB_140199c33:
    param_1 = local_190;
    if (0xf < uVar6) {
      FUN_14003a8f0();
    }
    FUN_14003a830(local_150);
    pppppppcVar26 = (char *******)&local_70;
    if (0xf < local_58) {
      pppppppcVar26 = local_70;
    }
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)((longlong)pppppppcVar26 + lVar11) != '\0');
    FUN_14003cce0(&local_130);
    FUN_14003a830(&local_70);
  }
LAB_14019a318:
  bVar27 = 0;
  local_1a7 = '\x01';
LAB_14019a321:
  iVar29 = 0;
  iVar30 = *(int *)(param_1 + 0x40c);
  if (iVar30 == 200) {
    local_1a4 = CONCAT22(local_1a4._2_2_,DAT_140529a68);
    local_1a8 = DAT_140529a6a;
  }
  else if (iVar30 == 0xc9) {
LAB_14019a348:
    local_1a8 = (CCNode)0xff;
    local_1a4 = CONCAT22(local_1a4._2_2_,0x9600);
  }
  else if (iVar30 == 0xca) {
    local_1a8 = (CCNode)0x96;
    local_1a4 = CONCAT22(local_1a4._2_2_,0xff00);
  }
  else if (iVar30 == 0xcb) {
    local_1a8 = (CCNode)0xff;
    local_1a4 = CONCAT22(local_1a4._2_2_,0xff);
  }
  else {
    if (iVar30 != 0x536) goto LAB_14019a348;
    local_1a8 = (CCNode)0x32;
    local_1a4 = CONCAT22(local_1a4._2_2_,0x32ff);
  }
  local_178 = (CCObject *)0x0;
  local_198 = (CCObject *)0x0;
  local_1a0 = (CCObject *)0x0;
  iVar30 = bVar27 + 1;
  local_190 = (CCSprite *)CONCAT44(local_190._4_4_,iVar30);
  do {
    ppcVar13 = &local_130;
    if (iVar29 != 0) {
      ppcVar13 = &local_110;
    }
    local_170 = (undefined8 *******)0x0;
    uStack_168 = (char *)0x0;
    local_160 = (char *)0x0;
    local_158 = 0;
    _Src = ppcVar13;
    if ((char *)0xf < ppcVar13[3]) {
      _Src = (char **)*ppcVar13;
    }
    pcVar2 = ppcVar13[2];
    if ((char *)0x7fffffffffffffff < pcVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_140007b50();
    }
    local_158 = 0xf;
    if (pcVar2 < (char *)0x10) {
      local_170 = (undefined8 *******)*_Src;
      uStack_168 = _Src[1];
      local_160 = pcVar2;
    }
    else {
      uVar28 = (ulonglong)pcVar2 | 0xf;
      if (uVar28 < 0x8000000000000000) {
        if (uVar28 < 0x16) {
          uVar28 = 0x16;
        }
      }
      else {
        uVar28 = 0x7fffffffffffffff;
      }
      local_170 = (undefined8 *******)FUN_14003aa10(uVar28 + 1);
      local_160 = pcVar2;
      local_158 = uVar28;
      memcpy(local_170,_Src,(size_t)(pcVar2 + 1));
    }
    pppppppuVar25 = &local_170;
    if (0xf < local_158) {
      pppppppuVar25 = local_170;
    }
    pCVar14 = (CCObject *)FUN_140047d80(pppppppuVar25);
    if (iVar29 == 0) {
      plVar15 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x1e8))(param_1);
      iVar10 = (**(code **)(*plVar15 + 0x60))(plVar15);
      iVar10 = iVar10 + 1;
    }
    else {
      iVar10 = 5;
    }
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      local_188 = (char *)FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_188);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    (**(code **)(**(longlong **)(DAT_1406c2ed8[0x41] + 0xfe8) + 0x1b8))
              (*(longlong **)(DAT_1406c2ed8[0x41] + 0xfe8),pCVar14,iVar10);
    lVar11 = *(longlong *)pCVar14;
    uVar16 = (**(code **)(*(longlong *)param_1 + 0x4a8))(param_1,&local_180);
    (**(code **)(lVar11 + 0xb8))(pCVar14,uVar16);
    lVar11 = *(longlong *)pCVar14;
    uVar31 = (**(code **)(*(longlong *)param_1 + 0x158))(param_1);
    (**(code **)(lVar11 + 0x150))(pCVar14,uVar31);
    lVar11 = *(longlong *)pCVar14;
    bVar9 = cocos2d::CCSprite::isFlipX(param_1);
    (**(code **)(lVar11 + 0x430))(pCVar14,bVar9);
    lVar11 = *(longlong *)pCVar14;
    bVar9 = cocos2d::CCSprite::isFlipY(param_1);
    (**(code **)(lVar11 + 0x438))(pCVar14,bVar9);
    lVar11 = *(longlong *)pCVar14;
    uVar31 = (**(code **)(*(longlong *)param_1 + 0x80))(param_1);
    (**(code **)(lVar11 + 0x78))(pCVar14,uVar31);
    lVar11 = *(longlong *)pCVar14;
    uVar31 = (**(code **)(*(longlong *)param_1 + 0x90))(param_1);
    (**(code **)(lVar11 + 0x88))(pCVar14,uVar31);
    pCVar17 = pCVar14;
    if (iVar29 == 0) {
      pCVar17 = local_198;
      local_178 = pCVar14;
    }
    local_198 = pCVar17;
    pCVar14 = local_178;
    FUN_14003a830(&local_170);
    iVar29 = iVar29 + 1;
  } while (iVar29 < iVar30);
  plVar15 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x1c8))(param_1,0x5b);
  pCVar17 = local_1a0;
  if (plVar15 != (longlong *)0x0) {
    pCVar17 = (CCObject *)FUN_140047d80("portal_extra_shine_001.png");
    lVar11 = *(longlong *)pCVar17;
    local_1a0 = pCVar17;
    lVar18 = (**(code **)(*plVar15 + 0x130))(plVar15);
    fVar1 = *(float *)(lVar18 + 4);
    pfVar19 = (float *)(**(code **)(*plVar15 + 0x130))(plVar15);
    uVar16 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&local_180,*pfVar19 * DAT_140622b08,fVar1 * DAT_140622b08);
    (**(code **)(lVar11 + 0xb8))(pCVar17,uVar16);
    (**(code **)(*plVar15 + 0x1b8))(plVar15,pCVar17,1);
    local_190 = (CCSprite *)CONCAT44(local_190._4_4_,bVar27 + 2);
  }
  fVar4 = DAT_140622ad0;
  fVar1 = DAT_1406229ec;
  iVar30 = 0;
  local_188 = (char *)0x100000302;
  do {
    pCVar5 = local_198;
    if (iVar30 == 0) {
      (**(code **)(*(longlong *)(pCVar14 + 0x140) + 0x28))();
      pCVar17 = pCVar14;
LAB_14019a709:
      *(CCSprite **)(pCVar17 + 0x260) = param_1;
      param_1[0x268] = (CCSprite)0x1;
      if (*(longlong *)(param_1 + 600) == 0) {
        this = cocos2d::CCArray::create();
        *(CCArray **)(param_1 + 600) = this;
        cocos2d::CCObject::retain((CCObject *)this);
      }
      cocos2d::CCArray::addObject(*(CCArray **)(param_1 + 600),pCVar17);
    }
    else {
      if (iVar30 == 1) {
        (**(code **)(*(longlong *)(local_198 + 0x140) + 0x28))();
        pCVar17 = pCVar5;
        goto LAB_14019a709;
      }
      (**(code **)(*(longlong *)(pCVar17 + 0x140) + 0x28))(pCVar17 + 0x140,0);
      if (iVar30 != 2) goto LAB_14019a709;
    }
    (*(code *)**(undefined8 **)(pCVar17 + 0x158))(pCVar17 + 0x158,0x100000302);
    pCVar20 = cocos2d::CCFadeIn::create(fVar1);
    pCVar21 = cocos2d::CCFadeOut::create(fVar4);
    pCVar22 = cocos2d::CCCallFunc::create(pCVar17,FUN_1400483e0);
    pCVar23 = cocos2d::CCCallFunc::create(pCVar17,(_func_void *)&LAB_14003be70);
    local_1b8 = 0;
    pCVar24 = cocos2d::CCSequence::create((CCFiniteTimeAction *)pCVar20,pCVar21,pCVar22,pCVar23);
    cocos2d::CCNode::runAction((CCNode *)pCVar17,(CCAction *)pCVar24);
    iVar30 = iVar30 + 1;
    pCVar17 = local_1a0;
    pCVar14 = local_178;
  } while (iVar30 < (int)local_190);
  if (local_1a7 != '\0') {
    iVar30 = *(int *)(param_1 + 0x40c);
    uVar31 = DAT_140623210;
    if ((((iVar30 != 200) && (uVar31 = DAT_140623228, iVar30 != 0xc9)) &&
        (uVar31 = DAT_140623244, iVar30 != 0xca)) &&
       ((uVar31 = DAT_14062326c, iVar30 != 0xcb && (uVar31 = DAT_140623244, iVar30 == 0x536)))) {
      uVar31 = DAT_140623294;
    }
    local_1b8 = CONCAT71(local_1b8._1_7_,1);
    this_00 = (CCNode *)FUN_140042870(DAT_140623010,uVar31,DAT_140622aa0,0);
    *(undefined2 *)(this_00 + 0x154) = (undefined2)local_1a4;
    this_00[0x156] = local_1a8;
    lVar11 = *(longlong *)this_00;
    uVar16 = (**(code **)(*(longlong *)param_1 + 200))(param_1);
    (**(code **)(lVar11 + 0xb8))(this_00,uVar16);
    lVar11 = (**(code **)(*(longlong *)param_1 + 0x1e8))(param_1);
    if (lVar11 != 0) {
      plVar15 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x1e8))(param_1);
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_180 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_180);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      plVar3 = *(longlong **)(DAT_1406c2ed8[0x41] + 0xfe8);
      lVar11 = *plVar3;
      iVar30 = (**(code **)(*plVar15 + 0x60))(plVar15);
      (**(code **)(lVar11 + 0x1b8))(plVar3,this_00,iVar30 + -1);
    }
    *(undefined4 *)(this_00 + 0x160) = 1;
    *(undefined4 *)(this_00 + 0x164) = 6;
    if (*(CCObject **)(this_00 + 0x140) != (CCObject *)0x0) {
      cocos2d::CCObject::release(*(CCObject **)(this_00 + 0x140));
    }
    *(CCSprite **)(this_00 + 0x140) = param_1;
    cocos2d::CCObject::retain((CCObject *)param_1);
    cocos2d::CCNode::unschedule(this_00,FUN_140042ba0);
    lVar11 = *(longlong *)this_00;
    uVar16 = (**(code **)(**(longlong **)(this_00 + 0x140) + 200))();
    (**(code **)(lVar11 + 0xb8))(this_00,uVar16);
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      local_180 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_180);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    plVar15 = DAT_1406c2ed8;
    lVar11 = DAT_1406c2ed8[0x41] + 0x37a0;
    if (DAT_1406c2ed8[0x41] == 0) {
      lVar11 = 0;
    }
    *(longlong *)(this_00 + 0x170) = lVar11;
    cocos2d::CCArray::addObject(*(CCArray **)(plVar15[0x41] + 0x38b8),(CCObject *)this_00);
  }
switchD_1401994c9_caseD_e:
  FUN_14003a830(&local_110);
  FUN_14003a830(&local_130);
  return;
}

