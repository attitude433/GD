// Function: FUN_14021ab80
// Original target: GJBaseGameLayer_spawnGroup @ 0x21ab80
// Ghidra entry: 14021ab80
// Signature: undefined FUN_14021ab80(void)


void FUN_14021ab80(longlong *param_1,int param_2,char param_3,undefined4 param_4,longlong *param_5,
                  int param_6,undefined4 param_7)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  iVar12 = 0;
  iVar6 = param_2;
  if (param_2 < 0) {
    iVar6 = iVar12;
  }
  if (9999 < iVar6) {
    iVar6 = 9999;
  }
  if ((*(uint *)(*(longlong *)(param_1[0xf7] + 0x4f8) + ((ulonglong)(longlong)iVar6 >> 5) * 4) &
      1 << ((byte)iVar6 & 0x1f)) != 0) {
    iVar6 = iVar12;
    if (*param_5 != param_5[1]) {
      iVar6 = -*(int *)(param_5[1] + -4);
    }
    if (*(char *)((longlong)param_1 + 0x6ef) != '\0') {
      iVar12 = param_6;
    }
    puVar11 = (undefined8 *)param_1[0x1e4];
    cVar2 = *(char *)((longlong)puVar11[1] + 0x19);
    puVar4 = (undefined8 *)puVar11[1];
    while (cVar2 == '\0') {
      if ((*(int *)((longlong)puVar4 + 0x24) < param_2) ||
         ((*(int *)((longlong)puVar4 + 0x24) <= param_2 &&
          ((*(int *)(puVar4 + 4) < iVar12 ||
           ((*(int *)(puVar4 + 4) <= iVar12 && (*(int *)((longlong)puVar4 + 0x1c) < iVar6)))))))) {
        puVar7 = (undefined8 *)puVar4[2];
      }
      else {
        puVar7 = (undefined8 *)*puVar4;
        puVar11 = puVar4;
      }
      puVar4 = puVar7;
      cVar2 = *(char *)((longlong)puVar7 + 0x19);
    }
    if (((*(char *)((longlong)puVar11 + 0x19) != '\0') ||
        (param_2 < *(int *)((longlong)puVar11 + 0x24))) ||
       ((param_2 <= *(int *)((longlong)puVar11 + 0x24) &&
        ((iVar12 < *(int *)(puVar11 + 4) ||
         ((iVar12 <= *(int *)(puVar11 + 4) && (iVar6 < *(int *)((longlong)puVar11 + 0x1c))))))))) {
      plVar1 = param_1 + 0x1e4;
      plVar9 = (longlong *)*plVar1;
      plVar8 = (longlong *)plVar9[1];
      uStack_50 = 0;
      cVar2 = *(char *)((longlong)plVar8 + 0x19);
      local_58 = plVar8;
      while (plVar5 = plVar8, cVar2 == '\0') {
        if ((*(int *)((longlong)plVar5 + 0x24) < param_2) ||
           ((*(int *)((longlong)plVar5 + 0x24) <= param_2 &&
            (((int)plVar5[4] < iVar12 ||
             (((int)plVar5[4] <= iVar12 && (*(int *)((longlong)plVar5 + 0x1c) < iVar6)))))))) {
          uStack_50 = 0;
          plVar8 = (longlong *)plVar5[2];
        }
        else {
          uStack_50 = 1;
          plVar8 = (longlong *)*plVar5;
          plVar9 = plVar5;
        }
        cVar2 = *(char *)((longlong)plVar8 + 0x19);
        local_58 = plVar5;
      }
      if (((*(char *)((longlong)plVar9 + 0x19) != '\0') ||
          (param_2 < *(int *)((longlong)plVar9 + 0x24))) ||
         ((param_2 <= *(int *)((longlong)plVar9 + 0x24) &&
          ((iVar12 < (int)plVar9[4] ||
           ((iVar12 <= (int)plVar9[4] && (iVar6 < *(int *)((longlong)plVar9 + 0x1c))))))))) {
        if (param_1[0x1e5] == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
          FUN_140052e40();
        }
        lVar10 = *plVar1;
        uStack_60 = 0;
        local_68 = plVar1;
        plVar9 = (longlong *)FUN_1404d0770(0x28);
        *(int *)((longlong)plVar9 + 0x1c) = iVar6;
        *(int *)(plVar9 + 4) = iVar12;
        *(int *)((longlong)plVar9 + 0x24) = param_2;
        *plVar9 = lVar10;
        plVar9[1] = lVar10;
        plVar9[2] = lVar10;
        *(undefined2 *)(plVar9 + 3) = 0;
        local_68 = local_58;
        uStack_60 = CONCAT44(uStack_4c,uStack_50);
        FUN_1400636d0(plVar1,&local_68,plVar9);
      }
      lVar10 = FUN_140224280(param_1 + -0x33,param_2);
      if (param_3 == '\0') {
        if (lVar10 != 0) {
          uVar3 = **(uint **)(lVar10 + 0x38);
          if (uVar3 != 0) {
            plVar9 = *(longlong **)(*(uint **)(lVar10 + 0x38) + 4);
            plVar1 = plVar9 + ((ulonglong)uVar3 - 1);
            for (; (plVar9 <= plVar1 && (*plVar9 != 0)); plVar9 = plVar9 + 1) {
              (**(code **)(*param_1 + 0x10))(param_1,*plVar9,param_4,param_5);
            }
          }
        }
      }
      else {
        FUN_14021ae00(param_1 + -0x33,lVar10,param_4,param_5,param_6,param_7);
      }
    }
  }
  return;
}

