// LevelEditorLayer_createObjectsFromSetup @ 0x2d3800
// Body: 2068 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402d3800(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong *plVar10;
  char ******ppppppcVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  ulonglong uVar17;
  void *pvVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined8 ******_Buf;
  undefined1 auStack_168 [32];
  char local_148;
  uint local_144;
  int local_140;
  ulonglong local_138;
  undefined8 *****local_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong *local_110;
  ulonglong local_108;
  ulonglong local_100;
  void *local_f8;
  void *pvStack_f0;
  longlong local_e8;
  void *local_e0;
  void *pvStack_d8;
  longlong local_d0;
  char *****local_c8;
  undefined8 ****ppppuStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 *****local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1406ba040 ^ (ulonglong)auStack_168;
  local_140 = 0;
  ppppuStack_c0 = (undefined8 *****)0x0;
  local_108 = 1;
  local_b8 = 1;
  local_b0 = 0xf;
  local_c8 = (char *****)((ulonglong)DAT_140518984 & 0xffffffffffff00ff);
  uVar20 = 1;
  local_144 = 1;
  uVar17 = param_2[3];
  puVar7 = param_2;
  if (0xf < uVar17) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar14 = param_2[2];
  uVar19 = uVar14;
  if (1 < uVar14) {
    uVar19 = 1;
  }
  local_110 = param_1;
  iVar4 = memcmp(puVar7,&local_c8,uVar19);
  if (((iVar4 == 0) && (uVar14 != 0)) && (uVar14 < 2)) {
    bVar16 = true;
    uVar19 = local_70;
  }
  else {
    uStack_80 = 0;
    local_78 = 0;
    uVar19 = 0xf;
    local_70 = 0xf;
    local_88 = (void *)0x0;
    uVar20 = 3;
    local_144 = 3;
    puVar7 = param_2;
    if (0xf < uVar17) {
      puVar7 = (undefined8 *)*param_2;
    }
    iVar4 = memcmp(puVar7,&local_88,0);
    if ((iVar4 == 0) && (uVar14 == 0)) {
      bVar16 = true;
    }
    else {
      bVar16 = false;
    }
  }
  if (((uVar20 & 2) != 0) && (uVar20 = uVar20 & 0xfffffffd, local_144 = uVar20, 0xf < uVar19)) {
    pvVar8 = local_88;
    if ((0xfff < uVar19 + 1) &&
       (pvVar8 = *(void **)((longlong)local_88 + -8),
       0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar8);
  }
  if ((uVar20 & 1) != 0) {
    local_144 = uVar20 & 0xfffffffe;
  }
  if (!bVar16) {
    local_f8 = (void *)0x0;
    pvStack_f0 = (void *)0x0;
    local_e8 = 0;
    FUN_1402f2ec0(&local_f8);
    local_128 = (undefined8 *)0x0;
    uStack_120 = 0;
    local_118 = 0;
    FUN_1402f2990(&local_128);
    local_140 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    local_68 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0xf;
    local_a8 = (undefined8 ******)0x0;
    local_e0 = (void *)0x0;
    pvStack_d8 = (void *)0x0;
    local_d0 = 0;
    FUN_1400de660(param_2,&DAT_140554c94,&local_e0);
    pvVar8 = local_e0;
    param_2[2] = 0;
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    *(undefined1 *)param_2 = 0;
    uVar5 = FUN_140065c60(local_e0);
    lVar6 = FUN_1402eca40(uVar5);
    param_1[0x1b6] = lVar6;
    *(longlong *)(lVar6 + 0x180) = param_1[0x10f];
    cocos2d::CCObject::retain((CCObject *)param_1[0x1b6]);
    FUN_14023ad00(param_1);
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      local_100 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_100);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    FUN_1401827f0(DAT_1406c2ed8,*(undefined4 *)(param_1[0x1b6] + 0x168));
    local_100 = (longlong)pvStack_d8 - (longlong)pvVar8 >> 5;
    if (1 < local_100) {
      ppppppuVar13 = (undefined8 ******)((longlong)pvVar8 + 0x20);
      do {
        uVar17 = 0;
        local_130 = ppppppuVar13;
        if (&local_a8 != ppppppuVar13) {
          ppppppuVar12 = ppppppuVar13;
          if ((undefined8 *****)0xf < ppppppuVar13[3]) {
            ppppppuVar12 = (undefined8 ******)*ppppppuVar13;
          }
          FUN_14003cce0(&local_a8,ppppppuVar12,ppppppuVar13[2]);
        }
        uVar19 = local_90;
        uVar14 = local_98;
        ppppppuVar12 = (undefined8 ******)local_a8;
        lVar6 = 0x4b;
        puVar7 = local_128;
        do {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar1 = puVar7 + 8;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          lVar6 = lVar6 + -1;
          puVar7 = puVar1;
        } while (lVar6 != 0);
        *puVar1 = 0;
        _Buf = &local_a8;
        if (0xf < local_90) {
          _Buf = (undefined8 ******)local_a8;
        }
        if ((local_98 != 0) && (pvVar8 = memchr(_Buf,0x2c,local_98), pvVar8 != (void *)0x0)) {
          bVar16 = true;
          local_148 = '\0';
          ppppppuVar13 = (undefined8 ******)local_130;
          if ((longlong)pvVar8 - (longlong)_Buf != 0xffffffffffffffff) {
            local_138 = (ulonglong)(int)uVar14;
            uVar9 = local_138;
            uVar15 = (longlong)pvVar8 - (longlong)_Buf;
            while( true ) {
              if (uVar17 != uVar9) {
                if (bVar16) {
                  local_c8 = (char *****)0x0;
                  ppppuStack_c0 = (undefined8 *****)0x0;
                  local_b8 = 0;
                  local_b0 = 0;
                  if (uVar14 < uVar17) {
                    /* WARNING: Subroutine does not return */
                    FUN_14003bcc0();
                  }
                  uVar9 = uVar15 - uVar17;
                  if (uVar14 - uVar17 < uVar15 - uVar17) {
                    uVar9 = uVar14 - uVar17;
                  }
                  ppppppuVar13 = &local_a8;
                  if (0xf < uVar19) {
                    ppppppuVar13 = ppppppuVar12;
                  }
                  FUN_14003a930(&local_c8,(longlong)ppppppuVar13 + uVar17,uVar9);
                  local_144 = local_144 | 4;
                  ppppppcVar11 = &local_c8;
                  if (0xf < local_b0) {
                    ppppppcVar11 = (char ******)local_c8;
                  }
                  local_140 = atoi((char *)ppppppcVar11);
                  uVar9 = local_138;
                  uVar14 = local_98;
                  uVar19 = local_90;
                  ppppppuVar12 = (undefined8 ******)local_a8;
                  if (0xf < local_b0) {
                    ppppppcVar11 = (char ******)local_c8;
                    if ((0xfff < local_b0 + 1) &&
                       (ppppppcVar11 = (char ******)local_c8[-1],
                       (char *)0x1f < (char *)((longlong)local_c8 + (-8 - (longlong)ppppppcVar11))))
                    {
                    /* WARNING: Subroutine does not return */
                      _invalid_parameter_noinfo_noreturn();
                    }
                    free(ppppppcVar11);
                    uVar9 = local_138;
                    uVar14 = local_98;
                    uVar19 = local_90;
                    ppppppuVar12 = (undefined8 ******)local_a8;
                  }
                }
                else {
                  lVar6 = (longlong)local_140;
                  if ((0 < local_140) && (local_140 < 0x259)) {
                    local_88 = (void *)0x0;
                    uStack_80 = 0;
                    local_78 = 0;
                    local_70 = 0;
                    if (uVar14 < uVar17) {
                    /* WARNING: Subroutine does not return */
                      FUN_14003bcc0();
                    }
                    uVar9 = uVar15 - uVar17;
                    if (uVar14 - uVar17 < uVar15 - uVar17) {
                      uVar9 = uVar14 - uVar17;
                    }
                    ppppppuVar13 = &local_a8;
                    if (0xf < uVar19) {
                      ppppppuVar13 = ppppppuVar12;
                    }
                    FUN_14003a930(&local_88,(longlong)ppppppuVar13 + uVar17,uVar9);
                    local_144 = local_144 | 8;
                    FUN_140051590((void *)(lVar6 * 0x20 + (longlong)local_f8),&local_88);
                    FUN_14003a830(&local_88);
                    local_128[lVar6] = local_110;
                    uVar9 = local_138;
                    uVar14 = local_98;
                    uVar19 = local_90;
                    ppppppuVar12 = (undefined8 ******)local_a8;
                  }
                }
                bVar16 = !bVar16;
              }
              ppppppuVar13 = (undefined8 ******)local_130;
              if (local_148 != '\0') break;
              uVar17 = uVar15 + 1;
              ppppppuVar13 = &local_a8;
              if (0xf < uVar19) {
                ppppppuVar13 = ppppppuVar12;
              }
              if (((uVar14 <= uVar17) ||
                  (pvVar8 = memchr((void *)((longlong)ppppppuVar13 + uVar17),0x2c,uVar14 - uVar17),
                  uVar9 = local_138, pvVar8 == (void *)0x0)) ||
                 (uVar15 = (longlong)pvVar8 - (longlong)ppppppuVar13,
                 (longlong)pvVar8 - (longlong)ppppppuVar13 == 0xffffffffffffffff)) {
                local_148 = '\x01';
                uVar15 = uVar9;
              }
            }
          }
        }
        plVar2 = local_110;
        plVar10 = (longlong *)FUN_14019d1e0(&local_f8,&local_128,local_110,0);
        if (plVar10 != (longlong *)0x0) {
          if (*(int *)((longlong)plVar10 + 0x40c) == 0x531) {
            if (*(int *)((longlong)plVar2 + 0x3844) - (int)plVar2[0x709] < 3) {
LAB_1402d3e17:
              (**(code **)(*plVar10 + 0x140))(plVar10,0);
              (**(code **)(*plVar2 + 0x478))(plVar2,plVar10);
              FUN_1402d7bc0(plVar2,plVar10);
              uVar17 = local_98;
              if (*(int *)((longlong)plVar10 + 0x40c) == 0x1f) {
                local_c8 = (char *****)0x0;
                ppppuStack_c0 = (undefined8 *****)0x0;
                local_b8 = 0;
                local_b0 = 0;
                ppppppuVar12 = &local_a8;
                if (0xf < local_90) {
                  ppppppuVar12 = (undefined8 ******)local_a8;
                }
                if (0x7fffffffffffffff < local_98) {
                    /* WARNING: Subroutine does not return */
                  FUN_140007b50();
                }
                local_b0 = 0xf;
                if (local_98 < 0x10) {
                  local_b8 = local_98;
                  local_c8 = (char *****)*ppppppuVar12;
                  ppppuStack_c0 = ppppppuVar12[1];
                  FUN_1404b2060(plVar10,&local_c8);
                }
                else {
                  uVar14 = local_98 | 0xf;
                  if (uVar14 < 0x8000000000000000) {
                    if (uVar14 < 0x16) {
                      uVar14 = 0x16;
                    }
                  }
                  else {
                    uVar14 = 0x7fffffffffffffff;
                  }
                  local_c8 = (char *****)FUN_14003aa10(uVar14 + 1);
                  local_b8 = uVar17;
                  local_b0 = uVar14;
                  memcpy(local_c8,ppppppuVar12,uVar17 + 1);
                  FUN_1404b2060(plVar10,&local_c8);
                }
              }
            }
          }
          else if (*(int *)((longlong)plVar10 + 0x40c) != 0x8e) goto LAB_1402d3e17;
        }
        uVar20 = (int)local_108 + 1;
        local_108 = (ulonglong)uVar20;
        ppppppuVar13 = ppppppuVar13 + 4;
        pvVar8 = local_e0;
        local_130 = ppppppuVar13;
      } while ((ulonglong)(longlong)(int)uVar20 < local_100);
    }
    pvVar3 = pvStack_d8;
    pvVar18 = pvVar8;
    if (pvVar8 != (void *)0x0) {
      for (; pvVar18 != pvVar3; pvVar18 = (void *)((longlong)pvVar18 + 0x20)) {
        FUN_14003a830(pvVar18);
      }
      pvVar18 = pvVar8;
      if ((0xfff < (local_d0 - (longlong)pvVar8 & 0xffffffffffffffe0U)) &&
         (pvVar18 = *(void **)((longlong)pvVar8 + -8),
         0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar18);
    }
    FUN_14003a830(&local_a8);
    FUN_14003a830(&local_68);
    if (local_128 != (undefined8 *)0x0) {
      puVar7 = local_128;
      if ((0xfff < (ulonglong)((local_118 - (longlong)local_128 >> 3) * 8)) &&
         (puVar7 = (undefined8 *)local_128[-1],
         0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)puVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(puVar7);
      local_128 = (undefined8 *)0x0;
      uStack_120 = 0;
      local_118 = 0;
    }
    pvVar18 = pvStack_f0;
    pvVar8 = local_f8;
    if (local_f8 != (void *)0x0) {
      for (; pvVar8 != pvVar18; pvVar8 = (void *)((longlong)pvVar8 + 0x20)) {
        FUN_14003a830(pvVar8);
      }
      pvVar8 = local_f8;
      if ((0xfff < (local_e8 - (longlong)local_f8 & 0xffffffffffffffe0U)) &&
         (pvVar8 = *(void **)((longlong)local_f8 + -8),
         0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar8);
    }
  }
  return;
}

