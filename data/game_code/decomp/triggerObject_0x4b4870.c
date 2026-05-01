// triggerObject @ 0x4b4870
// Function: FUN_1404b4870


void FUN_1404b4870(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  uint *puVar6;
  void *pvVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  void **ppvVar11;
  int iVar12;
  ulonglong uVar13;
  size_t _Size;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  undefined4 local_res8;
  longlong local_res10;
  void *local_90;
  void *pvStack_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  longlong local_68;
  
  uVar14 = 0;
  local_res8 = 0;
  uVar13 = uVar14;
  if (((*(char *)(param_1 + 0x7ec) != '\0') && (uVar13 = 0, param_4 != (longlong *)0x0)) &&
     (*param_4 != param_4[1])) {
    local_res8 = -*(int *)(param_4[1] + -4);
    uVar13 = (ulonglong)local_res8;
  }
  uVar10 = *(ulonglong *)(param_1 + 0x788) &
           ((((uVar13 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)local_res8._1_1_) *
             0x100000001b3 ^ (ulonglong)local_res8._2_1_) * 0x100000001b3 ^
           (ulonglong)local_res8._3_1_) * 0x100000001b3;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x770) + 8 + uVar10 * 0x10);
  if (lVar8 == *(longlong *)(param_1 + 0x760)) {
LAB_1404b4951:
    lVar8 = 0;
  }
  else {
    iVar12 = *(int *)(lVar8 + 0x10);
    while ((int)uVar13 != iVar12) {
      if (lVar8 == *(longlong *)(*(longlong *)(param_1 + 0x770) + uVar10 * 0x10))
      goto LAB_1404b4951;
      lVar8 = *(longlong *)(lVar8 + 8);
      iVar12 = *(int *)(lVar8 + 0x10);
    }
  }
  fVar16 = DAT_1406236f0;
  local_res10 = param_2;
  if (lVar8 != 0) {
    plVar5 = (longlong *)FUN_140060b20(param_1 + 0x758,&local_90,&local_res8);
    fVar16 = *(float *)(*plVar5 + 0x14);
  }
  plVar5 = (longlong *)FUN_140060b20(param_1 + 0x798,&local_90,&local_res8);
  iVar12 = *(int *)(*plVar5 + 0x14);
  fVar15 = (float)(*(double *)(param_2 + 0x3d8) - (double)fVar16);
  if (((*(float *)(param_1 + 0x7d8) <= 0.0) || (fVar16 < 0.0)) ||
     (*(float *)(param_1 + 0x7d8) <= fVar15)) {
    if (((0 < iVar12) && (fVar1 = *(float *)(param_1 + 0x7e4), 0.0 < fVar1)) &&
       ((0.0 <= fVar16 && (fVar1 < fVar15)))) {
      if (*(int *)(param_1 + 0x7e0) == 0) {
        iVar12 = 0;
      }
      else {
        fVar15 = floorf(fVar15 / fVar1);
        fVar16 = 0.0;
        if (0.0 <= (float)iVar12 - fVar15) {
          fVar16 = (float)iVar12 - fVar15;
        }
        iVar12 = (int)fVar16;
      }
    }
    plVar5 = (longlong *)FUN_140060b20(param_1 + 0x758,&local_90,&local_res8);
    *(float *)(*plVar5 + 0x14) = (float)*(double *)(param_2 + 0x3d8);
    iVar9 = *(int *)(param_1 + 0x7e8);
    if (iVar9 == -1) {
      *(undefined4 *)(param_1 + 0x7e8) = 0;
      iVar9 = 0;
      for (lVar8 = *(longlong *)(param_1 + 0x740); lVar8 != *(longlong *)(param_1 + 0x748);
          lVar8 = lVar8 + 0x10) {
        iVar9 = iVar9 + *(int *)(lVar8 + 8);
        *(int *)(param_1 + 0x7e8) = iVar9;
      }
    }
    iVar12 = iVar12 + 1;
    bVar4 = true;
    bVar3 = false;
    if (iVar9 < iVar12) {
      iVar2 = *(int *)(param_1 + 0x7dc);
      if (iVar2 == 0) {
        return;
      }
      if (iVar2 == 1) {
        iVar12 = 1;
      }
      else if (iVar2 == 2) {
        iVar12 = iVar9;
      }
    }
    iVar9 = 0;
    for (puVar6 = *(uint **)(param_1 + 0x740); puVar6 != *(uint **)(param_1 + 0x748);
        puVar6 = puVar6 + 4) {
      iVar9 = iVar9 + puVar6[2];
      if (iVar12 <= iVar9) {
        uVar14 = (ulonglong)*puVar6;
        break;
      }
    }
    plVar5 = (longlong *)FUN_140060b20(param_1 + 0x798,&local_90,&local_res8);
    *(int *)(*plVar5 + 0x14) = iVar12;
    if (param_4 == (longlong *)0x0) {
      local_78 = (void *)0x0;
      uStack_70 = 0;
      local_68 = 0;
      ppvVar11 = &local_78;
      bVar4 = false;
      bVar3 = true;
    }
    else {
      local_90 = (void *)0x0;
      pvStack_88 = (void *)0x0;
      local_80 = (void *)0x0;
      uVar13 = param_4[1] - *param_4 >> 2;
      if (uVar13 != 0) {
        if (0x3fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_140062a20();
        }
        pvVar7 = (void *)FUN_14003aa10(uVar13 * 4);
        local_80 = (void *)(uVar13 * 4 + (longlong)pvVar7);
        _Size = param_4[1] - *param_4;
        local_90 = pvVar7;
        pvStack_88 = pvVar7;
        memmove(pvVar7,(void *)*param_4,_Size);
        pvStack_88 = (void *)((longlong)pvVar7 + ((longlong)_Size >> 2) * 4);
      }
      ppvVar11 = &local_90;
    }
    (**(code **)(*(longlong *)(local_res10 + 0x198) + 8))
              ((longlong *)(local_res10 + 0x198),uVar14,0,DAT_1406236b0,ppvVar11,
               *(undefined4 *)(param_1 + 0x39c),*(undefined4 *)(param_1 + 0x698));
    if ((bVar3) && (local_78 != (void *)0x0)) {
      pvVar7 = local_78;
      if ((0xfff < (ulonglong)((local_68 - (longlong)local_78 >> 2) * 4)) &&
         (pvVar7 = *(void **)((longlong)local_78 + -8),
         0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar7);
      local_78 = (void *)0x0;
      uStack_70 = 0;
      local_68 = 0;
    }
    if ((bVar4) && (local_90 != (void *)0x0)) {
      pvVar7 = local_90;
      if ((0xfff < ((longlong)local_80 - (longlong)local_90 & 0xfffffffffffffffcU)) &&
         (pvVar7 = *(void **)((longlong)local_90 + -8),
         0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar7);
    }
  }
  return;
}

