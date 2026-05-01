// triggerObject_4bb210 @ 0x4bb210
// Function: FUN_1404bb210


void FUN_1404bb210(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  void **ppvVar8;
  longlong lVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  int local_res8 [2];
  undefined8 in_stack_fffffffffffffef8;
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar16;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  uint local_b8;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0 [2];
  undefined4 local_98 [2];
  undefined4 local_90 [2];
  undefined4 local_88 [2];
  void *local_80;
  undefined8 uStack_78;
  longlong local_70;
  void *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined1 *local_50 [2];
  void *local_40 [3];
  
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  local_b8 = 0;
  iVar13 = *(int *)(param_1 + 0x40c);
  if (iVar13 == 0x64b) {
    if (param_4 == 0) {
      local_68 = (void *)0x0;
      uStack_60 = 0;
      local_58 = 0;
      ppvVar8 = &local_68;
      uVar11 = 2;
    }
    else {
      ppvVar8 = (void **)FUN_14024b270(local_40,param_4);
      uVar11 = 1;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x698);
    uVar16 = *(undefined4 *)(param_1 + 0x39c);
    uVar1 = *(undefined1 *)(param_1 + 0x675);
    local_a8 = *(undefined4 *)(param_1 + 0x5c8);
    local_50[0] = (undefined1 *)CONCAT44(local_50[0]._4_4_,local_a8);
    local_c8[0] = *(undefined1 *)(param_1 + 0x748);
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,local_c8[0]);
    local_a4 = *(undefined4 *)(param_1 + 0x740);
    local_b0[0] = *(undefined4 *)(param_1 + 0x6a0);
    lVar9 = *(longlong *)(param_2 + 0x950);
    local_c0[0] = uVar1;
    local_b8 = uVar11;
    local_a0[0] = uVar5;
    local_98[0] = uVar16;
    local_88[0] = local_a4;
    uVar6 = FUN_1402623f0(lVar9);
    local_90[0] = uVar6;
    plVar7 = (longlong *)FUN_140268e10(lVar9 + 0x208,&local_80);
    lVar9 = *plVar7;
    puVar3 = *(undefined1 **)(lVar9 + 0x20);
    if (puVar3 == *(undefined1 **)(lVar9 + 0x28)) {
      FUN_14026c7b0(lVar9 + 0x18,puVar3,local_50,local_88,local_c0,local_c8,local_b0,local_90,
                    ppvVar8,local_98,local_a0);
    }
    else {
      *puVar3 = 0;
      *(undefined8 *)(puVar3 + 0x28) = 0;
      *(undefined8 *)(puVar3 + 0x30) = 0;
      *(undefined8 *)(puVar3 + 0x38) = 0;
      *(undefined4 *)(puVar3 + 0xc) = local_a8;
      *(undefined4 *)(puVar3 + 8) = local_a4;
      puVar3[0x10] = uVar1;
      puVar3[0x20] = (undefined1)local_res8[0];
      *(undefined4 *)(puVar3 + 0x1c) = local_b0[0];
      *(undefined4 *)(puVar3 + 4) = uVar6;
      *(undefined4 *)(puVar3 + 0x14) = uVar16;
      *(undefined4 *)(puVar3 + 0x18) = uVar5;
      local_50[0] = puVar3;
      FUN_1400846d0(puVar3 + 0x28,ppvVar8);
      *(longlong *)(lVar9 + 0x20) = *(longlong *)(lVar9 + 0x20) + 0x40;
    }
    if (((uVar11 & 2) != 0) && (uVar11 = uVar11 & 0xfffffffd, local_68 != (void *)0x0)) {
      pvVar10 = local_68;
      if ((0xfff < (ulonglong)((local_58 - (longlong)local_68 >> 2) * 4)) &&
         (pvVar10 = *(void **)((longlong)local_68 + -8),
         0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar10);
    }
    if ((uVar11 & 1) == 0) {
      return;
    }
    ppvVar8 = local_40;
    goto LAB_1404bb651;
  }
  if (iVar13 != 0x713) {
    if (iVar13 != 0x719) {
      FUN_1404a5f30(param_1,param_2);
      return;
    }
    iVar13 = *(int *)(param_1 + 0x6a0);
    iVar4 = iVar13;
    if (*(int *)(param_1 + 0x744) == 1) {
      iVar12 = FUN_1402623f0(*(undefined8 *)(param_2 + 0x950),iVar13);
      fVar15 = (float)iVar12 * *(float *)(param_1 + 0x74c);
LAB_1404bb337:
      fVar15 = (float)roundf(fVar15);
      lVar9 = *(longlong *)(param_2 + 0x950);
      iVar12 = (int)fVar15;
    }
    else {
      if (*(int *)(param_1 + 0x744) == 2) {
        iVar12 = FUN_1402623f0(*(undefined8 *)(param_2 + 0x950),iVar13);
        if (*(float *)(param_1 + 0x74c) == 0.0) goto LAB_1404bb350;
        fVar15 = (float)iVar12 / *(float *)(param_1 + 0x74c);
        goto LAB_1404bb337;
      }
      iVar12 = *(int *)(param_1 + 0x740);
      lVar9 = *(longlong *)(param_2 + 0x950);
      if (*(char *)(param_1 + 0x749) == '\0') {
        if (iVar13 < 0) {
          iVar4 = 0;
        }
        local_res8[0] = 9999;
        if ((iVar4 < 10000) && (local_res8[0] = iVar13, iVar13 < 0)) {
          local_res8[0] = 0;
        }
        plVar7 = (longlong *)FUN_140060b20(lVar9 + 0x330,local_50,local_res8);
        iVar12 = *(int *)(*plVar7 + 0x14) + iVar12;
        iVar4 = local_res8[0];
      }
    }
    FUN_1402624b0(lVar9,iVar4,iVar12);
LAB_1404bb350:
    uVar5 = FUN_1402623f0(*(undefined8 *)(param_2 + 0x950),iVar13);
    FUN_140233ec0(param_2,iVar13,uVar5);
    return;
  }
  if (param_4 == 0) {
    local_80 = (void *)0x0;
    uStack_78 = 0;
    local_70 = 0;
    ppvVar8 = &local_80;
    uVar11 = 8;
  }
  else {
    ppvVar8 = (void **)FUN_14024b270(&local_68,param_4);
    uVar11 = 4;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x698);
  uVar2 = *(undefined4 *)(param_1 + 0x39c);
  iVar13 = *(int *)(param_1 + 0x744);
  iVar4 = *(int *)(param_1 + 0x740);
  local_b8 = uVar11;
  iVar12 = FUN_1402623f0(*(undefined8 *)(param_2 + 0x950),*(undefined4 *)(param_1 + 0x6a0));
  if (iVar13 == 0) {
    bVar14 = iVar12 == iVar4;
LAB_1404bb3f8:
    if (bVar14) {
      (*(code *)**(undefined8 **)(param_2 + 0x198))
                ((undefined8 *)(param_2 + 0x198),*(undefined4 *)(param_1 + 0x5c8),
                 *(undefined1 *)(param_1 + 0x675),ppvVar8,CONCAT44(uVar5,uVar2),
                 CONCAT44(uVar16,uVar6));
    }
  }
  else {
    if (iVar13 == 1) {
      bVar14 = iVar4 < iVar12;
      goto LAB_1404bb3f8;
    }
    if (iVar13 == 2) {
      bVar14 = iVar12 < iVar4;
      goto LAB_1404bb3f8;
    }
  }
  if (((uVar11 & 8) != 0) && (uVar11 = uVar11 & 0xfffffff7, local_80 != (void *)0x0)) {
    pvVar10 = local_80;
    if ((0xfff < (ulonglong)((local_70 - (longlong)local_80 >> 2) * 4)) &&
       (pvVar10 = *(void **)((longlong)local_80 + -8),
       0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar10);
    local_80 = (void *)0x0;
    uStack_78 = 0;
    local_70 = 0;
  }
  if ((uVar11 & 4) == 0) {
    return;
  }
  ppvVar8 = &local_68;
LAB_1404bb651:
  FUN_14005e430(ppvVar8);
  return;
}

