// GJBaseGameLayer_activateItemCompareTrigger @ 0x234630


void FUN_140234630(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  
  fVar14 = DAT_14062350c;
  iVar1 = *(int *)(param_2 + 0x764);
  iVar2 = *(int *)(param_2 + 0x768);
  iVar3 = *(int *)(param_2 + 0x76c);
  iVar4 = *(int *)(param_2 + 0x770);
  uVar5 = *(undefined4 *)(param_2 + 0x6a0);
  iVar6 = *(int *)(param_2 + 0x694);
  iVar7 = *(int *)(param_2 + 0x744);
  uVar8 = *(undefined4 *)(param_2 + 0x75c);
  iVar11 = *(int *)(param_2 + 0x754);
  if (*(int *)(param_2 + 0x754) < 1) {
    iVar11 = 3;
  }
  iVar12 = *(int *)(param_2 + 0x758);
  if (*(int *)(param_2 + 0x758) < 1) {
    iVar12 = 3;
  }
  uVar9 = *(undefined4 *)(param_2 + 0x5c8);
  uVar10 = *(undefined4 *)(param_2 + 0x5cc);
  iVar13 = *(int *)(param_2 + 0x740);
  if (*(int *)(param_2 + 0x740) < 1) {
    iVar13 = 1;
  }
  fVar17 = (float)roundf(*(float *)(param_2 + 0x74c) * DAT_14062350c);
  fVar18 = (float)roundf(*(float *)(param_2 + 0x750) * fVar14);
  fVar19 = (float)roundf(*(float *)(param_2 + 0x760) * fVar14);
  fVar19 = fVar19 / fVar14;
  if ((iVar7 == 0) || ((iVar6 < 1 && (1 < iVar7 - 3U)))) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  dVar20 = (double)FUN_1402341c0(param_1,iVar13,uVar5);
  dVar22 = (double)(fVar17 / fVar14);
  if (iVar11 == 1) {
    dVar20 = dVar20 + dVar22;
  }
  else if (iVar11 == 2) {
    dVar20 = dVar20 - dVar22;
  }
  else if (iVar11 == 3) {
    dVar20 = dVar20 * dVar22;
  }
  else if (iVar11 == 4) {
    if (dVar22 == 0.0) {
      dVar20 = 0.0;
    }
    else {
      dVar20 = dVar20 / dVar22;
    }
  }
  else {
    dVar20 = 0.0;
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      dVar20 = (double)round(dVar20);
    }
    else if (iVar1 == 2) {
      dVar20 = floor(dVar20);
    }
    else if (iVar1 == 3) {
      dVar20 = ceil(dVar20);
    }
  }
  uVar24 = (uint)((ulonglong)dVar20 >> 0x20);
  uVar23 = (uint)DAT_1406243d0;
  uVar25 = (uint)((ulonglong)DAT_1406243d0 >> 0x20);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      dVar20 = (double)CONCAT44(uVar24 & uVar25,SUB84(dVar20,0) & uVar23);
    }
    else if (iVar3 == 2) {
      dVar20 = (double)CONCAT44(uVar24 & uVar25 ^ DAT_1406243e0._4_4_,
                                SUB84(dVar20,0) & uVar23 ^ (uint)DAT_1406243e0);
    }
  }
  dVar22 = (double)(fVar18 / fVar14);
  if (bVar16) {
    dVar21 = (double)FUN_1402341c0(param_1,iVar7,iVar6);
    if (iVar12 == 1) {
      dVar22 = dVar21 + dVar22;
    }
    else if (iVar12 == 2) {
      dVar22 = dVar21 - dVar22;
    }
    else if (iVar12 == 3) {
      dVar22 = dVar21 * dVar22;
    }
    else if (iVar12 == 4) {
      if (dVar22 == 0.0) {
        dVar22 = 0.0;
      }
      else {
        dVar22 = dVar21 / dVar22;
      }
    }
    else {
      dVar22 = 0.0;
    }
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      dVar22 = (double)round(dVar22);
    }
    else if (iVar2 == 2) {
      dVar22 = floor(dVar22);
    }
    else if (iVar2 == 3) {
      dVar22 = ceil(dVar22);
    }
  }
  if (iVar4 != 0) {
    uVar24 = (uint)((ulonglong)dVar22 >> 0x20);
    if (iVar4 == 1) {
      dVar22 = (double)CONCAT44(uVar24 & uVar25,SUB84(dVar22,0) & uVar23);
    }
    else if (iVar4 == 2) {
      dVar22 = (double)CONCAT44(uVar24 & uVar25 ^ DAT_1406243e0._4_4_,
                                SUB84(dVar22,0) & uVar23 ^ (uint)DAT_1406243e0);
    }
  }
  bVar16 = false;
  switch(uVar8) {
  case 0:
    bVar16 = (double)CONCAT44((uint)((ulonglong)(dVar20 - dVar22) >> 0x20) & uVar25,
                              SUB84(dVar20 - dVar22,0) & uVar23) <= (double)fVar19;
    break;
  case 1:
    bVar16 = (double)fVar19 + dVar20 == dVar22;
    bVar15 = (double)fVar19 + dVar20 < dVar22;
    goto LAB_140234998;
  case 2:
    bVar16 = dVar22 <= (double)fVar19 + dVar20;
    break;
  case 3:
    bVar16 = dVar22 == dVar20 - (double)fVar19;
    bVar15 = dVar22 < dVar20 - (double)fVar19;
    goto LAB_140234998;
  case 4:
    bVar16 = dVar20 - (double)fVar19 <= dVar22;
    break;
  case 5:
    uVar23 = SUB84(dVar20 - dVar22,0) & uVar23;
    uVar25 = (uint)((ulonglong)(dVar20 - dVar22) >> 0x20) & uVar25;
    bVar16 = (double)CONCAT44(uVar25,uVar23) == (double)fVar19;
    bVar15 = (double)CONCAT44(uVar25,uVar23) < (double)fVar19;
LAB_140234998:
    bVar16 = !bVar15 && !bVar16;
  }
  if (bVar16) {
    uVar10 = uVar9;
  }
  (**(code **)(*(longlong *)(param_1 + 0x198) + 8))
            ((longlong *)(param_1 + 0x198),uVar10,0,0,param_3,*(undefined4 *)(param_2 + 0x39c),
             *(undefined4 *)(param_2 + 0x698));
  return;
}

