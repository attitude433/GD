// LevelEditorLayer_createObjectsFromString @ 0x2d4020
// Body: 1649 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

CCArray * FUN_1402d4020(longlong *param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  short sVar2;
  ulonglong uVar3;
  bool bVar4;
  void *pvVar5;
  int iVar6;
  CCArray *pCVar7;
  void *pvVar8;
  undefined8 *puVar9;
  CCObject *pCVar10;
  longlong lVar11;
  char ******_Str;
  undefined8 *puVar12;
  size_t _MaxCount;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_118 [32];
  char local_f8;
  int local_f4;
  int local_f0;
  ulonglong local_e8;
  CCArray *local_e0;
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  longlong local_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  ulonglong local_a8;
  void *local_a0;
  void *pvStack_98;
  longlong local_90;
  ulonglong local_88;
  char *****local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1406ba040 ^ (ulonglong)auStack_118;
  local_f0 = 0;
  uStack_78 = 0;
  uVar15 = 1;
  local_e8 = 1;
  local_70 = 1;
  local_68 = 0xf;
  local_80 = (char *****)((ulonglong)DAT_140518984 & 0xffffffffffff00ff);
  uVar13 = param_2[3];
  puVar12 = param_2;
  if (0xf < uVar13) {
    puVar12 = (undefined8 *)*param_2;
  }
  uVar3 = param_2[2];
  uVar14 = uVar3;
  if (1 < uVar3) {
    uVar14 = 1;
  }
  local_f8 = param_4;
  iVar6 = memcmp(puVar12,&local_80,uVar14);
  if (((iVar6 == 0) && (uVar3 != 0)) && (uVar3 < 2)) {
    bVar4 = true;
    uVar14 = local_48;
  }
  else {
    uStack_58 = 0;
    local_50 = 0;
    uVar14 = 0xf;
    local_48 = 0xf;
    local_60 = (void *)0x0;
    uVar15 = 3;
    local_e8 = 3;
    puVar12 = param_2;
    if (0xf < uVar13) {
      puVar12 = (undefined8 *)*param_2;
    }
    iVar6 = memcmp(puVar12,&local_60,0);
    if ((iVar6 == 0) && (uVar3 == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  }
  if (((uVar15 & 2) != 0) &&
     (uVar15 = (ulonglong)((uint)uVar15 & 0xfffffffd), local_e8 = uVar15, 0xf < uVar14)) {
    pvVar8 = local_60;
    if ((0xfff < uVar14 + 1) &&
       (pvVar8 = *(void **)((longlong)local_60 + -8),
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar8);
  }
  if ((uVar15 & 1) != 0) {
    local_e8 = (ulonglong)((uint)uVar15 & 0xfffffffe);
  }
  if (bVar4) {
    pCVar7 = (CCArray *)0x0;
  }
  else {
    *(undefined1 *)(param_1 + 0x6a5) = 1;
    cocos2d::CCArray::removeAllObjects((CCArray *)param_1[0x716]);
    pCVar7 = cocos2d::CCArray::create();
    local_a0 = (void *)0x0;
    pvStack_98 = (void *)0x0;
    local_90 = 0;
    local_e0 = pCVar7;
    FUN_1402f2ec0(&local_a0);
    local_c0 = (undefined8 *)0x0;
    uStack_b8 = 0;
    local_b0 = 0;
    FUN_1402f2990(&local_c0);
    local_f4 = 0;
    local_d8 = (undefined8 *)0x0;
    puStack_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1400de660(param_2,&DAT_140554c94,&local_d8);
    local_f0 = 0;
    local_88 = (longlong)puStack_d0 - (longlong)local_d8 >> 5;
    puVar12 = local_d8;
    if (local_88 != 0) {
      do {
        uVar13 = 0;
        if (((local_f8 == '\0') && ((char)param_1[0x70f] == '\0')) &&
           (79999 < (int)param_1[0x717] - *(int *)((longlong)param_1 + 0x38bc))) {
          if (param_1[0x714] != 0) {
            FUN_140112a10();
          }
          break;
        }
        lVar11 = 0x4b;
        puVar9 = local_c0;
        do {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar1 = puVar9 + 8;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          lVar11 = lVar11 + -1;
          puVar9 = puVar1;
        } while (lVar11 != 0);
        *puVar1 = 0;
        puVar9 = puVar12;
        if (0xf < (ulonglong)puVar12[3]) {
          puVar9 = (undefined8 *)*puVar12;
        }
        _MaxCount = puVar12[2];
        if ((_MaxCount == 0) || (pvVar8 = memchr(puVar9,0x2c,_MaxCount), pvVar8 == (void *)0x0)) {
          lVar11 = -1;
        }
        else {
          lVar11 = (longlong)pvVar8 - (longlong)puVar9;
        }
        bVar4 = true;
        local_a8 = (ulonglong)(int)_MaxCount;
        while( true ) {
          if (uVar13 != local_a8) {
            if (bVar4) {
              local_80 = (char *****)0x0;
              uStack_78 = 0;
              local_70 = 0;
              local_68 = 0;
              if (_MaxCount < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_14003bcc0();
              }
              uVar15 = lVar11 - uVar13;
              if (_MaxCount - uVar13 < lVar11 - uVar13) {
                uVar15 = _MaxCount - uVar13;
              }
              puVar9 = puVar12;
              if (0xf < (ulonglong)puVar12[3]) {
                puVar9 = (undefined8 *)*puVar12;
              }
              FUN_14003a930(&local_80,(longlong)puVar9 + uVar13,uVar15);
              local_e8 = local_e8 | 4;
              _Str = &local_80;
              if (0xf < local_68) {
                _Str = (char ******)local_80;
              }
              local_f4 = atoi((char *)_Str);
              FUN_14003a830(&local_80);
            }
            else {
              lVar16 = (longlong)local_f4;
              if (0 < local_f4) {
                local_60 = (void *)0x0;
                uStack_58 = 0;
                local_50 = 0;
                local_48 = 0;
                if (_MaxCount < uVar13) {
                    /* WARNING: Subroutine does not return */
                  FUN_14003bcc0();
                }
                uVar15 = lVar11 - uVar13;
                if (_MaxCount - uVar13 < lVar11 - uVar13) {
                  uVar15 = _MaxCount - uVar13;
                }
                puVar9 = puVar12;
                if (0xf < (ulonglong)puVar12[3]) {
                  puVar9 = (undefined8 *)*puVar12;
                }
                FUN_14003a930(&local_60,(longlong)puVar9 + uVar13,uVar15);
                local_e8 = local_e8 | 8;
                FUN_140051590((void *)(lVar16 * 0x20 + (longlong)local_a0),&local_60);
                FUN_14003a830(&local_60);
                local_c0[lVar16] = param_1;
              }
            }
            bVar4 = !bVar4;
          }
          if (lVar11 == -1) break;
          uVar13 = lVar11 + 1;
          puVar9 = puVar12;
          if (0xf < (ulonglong)puVar12[3]) {
            puVar9 = (undefined8 *)*puVar12;
          }
          _MaxCount = puVar12[2];
          if ((uVar13 < _MaxCount) &&
             (pvVar8 = memchr((void *)((longlong)puVar9 + uVar13),0x2c,_MaxCount - uVar13),
             pvVar8 != (void *)0x0)) {
            lVar11 = (longlong)pvVar8 - (longlong)puVar9;
          }
          else {
            lVar11 = -1;
          }
        }
        pCVar10 = (CCObject *)FUN_14019d1e0(&local_a0,&local_c0,param_1,0);
        pCVar7 = local_e0;
        if (pCVar10 != (CCObject *)0x0) {
          if (*(int *)(pCVar10 + 0x40c) == 0x531) {
            if (*(int *)((longlong)param_1 + 0x3844) - (int)param_1[0x709] < 3) {
LAB_1402d4517:
              (**(code **)(*(longlong *)pCVar10 + 0x140))(pCVar10,0);
              (**(code **)(*param_1 + 0x478))(param_1,pCVar10);
              FUN_1402d7bc0(param_1,pCVar10);
              pCVar7 = local_e0;
              sVar2 = *(short *)((longlong)param_1 + 0x387a);
              if (((sVar2 != -1) && ((char)param_1[0x708] == '\0')) &&
                 ((*(short *)(pCVar10 + 0x4ba) != sVar2 && (*(short *)(pCVar10 + 0x4bc) != sVar2))))
              {
                *(short *)(pCVar10 + 0x4ba) = sVar2;
              }
              cocos2d::CCArray::addObject(local_e0,pCVar10);
            }
          }
          else if (*(int *)(pCVar10 + 0x40c) != 0x8e) goto LAB_1402d4517;
        }
        puVar12[2] = 0;
        puVar9 = puVar12;
        if (0xf < (ulonglong)puVar12[3]) {
          puVar9 = (undefined8 *)*puVar12;
        }
        *(undefined1 *)puVar9 = 0;
        local_f0 = local_f0 + 1;
        puVar12 = puVar12 + 4;
      } while ((ulonglong)(longlong)local_f0 < local_88);
    }
    puVar1 = puStack_d0;
    puVar9 = local_d8;
    *(undefined1 *)(param_1 + 0x6a5) = 0;
    puVar12 = local_d8;
    if (local_d8 != (undefined8 *)0x0) {
      for (; puVar12 != puVar1; puVar12 = puVar12 + 4) {
        FUN_14003a830(puVar12);
      }
      puVar12 = puVar9;
      if ((0xfff < (local_c8 - (longlong)puVar9 & 0xffffffffffffffe0U)) &&
         (puVar12 = (undefined8 *)puVar9[-1],
         0x1f < (ulonglong)((longlong)puVar9 + (-8 - (longlong)puVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(puVar12);
    }
    if (local_c0 != (undefined8 *)0x0) {
      puVar12 = local_c0;
      if ((0xfff < (ulonglong)((local_b0 - (longlong)local_c0 >> 3) * 8)) &&
         (puVar12 = (undefined8 *)local_c0[-1],
         0x1f < (ulonglong)((longlong)local_c0 + (-8 - (longlong)puVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(puVar12);
      local_c0 = (undefined8 *)0x0;
      uStack_b8 = 0;
      local_b0 = 0;
    }
    pvVar5 = pvStack_98;
    pvVar8 = local_a0;
    if (local_a0 != (void *)0x0) {
      for (; pvVar8 != pvVar5; pvVar8 = (void *)((longlong)pvVar8 + 0x20)) {
        FUN_14003a830(pvVar8);
      }
      pvVar8 = local_a0;
      if ((0xfff < (local_90 - (longlong)local_a0 & 0xffffffffffffffe0U)) &&
         (pvVar8 = *(void **)((longlong)local_a0 + -8),
         0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar8);
    }
  }
  return pCVar7;
}

