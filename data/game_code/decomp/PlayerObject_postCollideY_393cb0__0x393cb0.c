// Function: FUN_140393cb0
// Original target: PlayerObject_postCollideY_393cb0 @ 0x393cb0
// Ghidra entry: 140393cb0
// Signature: undefined FUN_140393cb0(void)


void FUN_140393cb0(longlong *param_1,longlong *param_2)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  undefined8 uVar10;
  float *pfVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  CCPoint local_res20 [8];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  plVar2 = (longlong *)param_1[0x111];
  if (((plVar2 == (longlong *)0x0) ||
      (*(int *)((longlong)plVar2 + 0x39c) == *(int *)((longlong)param_2 + 0x39c))) ||
     (iVar6 = (**(code **)(*plVar2 + 0x660))(), iVar6 != 0)) goto LAB_140393fa1;
  (**(code **)(*(longlong *)param_1[0x111] + 0x4a8))((longlong *)param_1[0x111],&local_res10);
  (**(code **)(*param_2 + 0x4a8))(param_2,&local_res18);
  fVar1 = *(float *)((longlong)param_1 + 0x9f4);
  fVar15 = DAT_140622c24;
  fVar17 = DAT_140623358;
  fVar19 = DAT_140623294;
  fVar5 = DAT_1406232fc;
  if (fVar1 == DAT_140622bd8) {
LAB_140393de2:
    fVar12 = fVar5;
    fVar16 = fVar15;
    fVar18 = fVar17;
    fVar20 = fVar19;
    if (*(float *)(param_1 + 0x13e) != DAT_140622c24) {
LAB_140393df1:
      fVar16 = fVar15;
      fVar18 = fVar17;
      fVar20 = fVar19;
      fVar12 = DAT_140623294;
    }
  }
  else {
    fVar17 = DAT_1406232fc;
    fVar19 = DAT_140623210;
    if (fVar1 == DAT_140622b74) goto LAB_140393df1;
    fVar15 = DAT_140622e58;
    fVar17 = DAT_1406233c8;
    fVar19 = DAT_1406232fc;
    fVar5 = DAT_140623358;
    if ((fVar1 == DAT_140622c54) ||
       (fVar16 = DAT_140622c24, fVar17 = DAT_1406233fc, fVar18 = DAT_140623358,
       fVar19 = DAT_140623324, fVar20 = DAT_140623294, fVar12 = DAT_1406232fc, fVar5 = DAT_1406233a4
       , fVar1 == DAT_140622ca8)) goto LAB_140393de2;
  }
  iVar6 = 1;
  if (fVar16 < (float)((uint)(local_res18 - (local_res10 + fVar12)) & DAT_1406243c0)) {
LAB_140393e70:
    if ((float)((uint)(local_res18 - (local_res10 + fVar18)) & DAT_1406243c0) <= fVar16) {
      iVar7 = -1;
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        iVar7 = iVar6;
      }
      if ((float)((uint)(local_res1c - (local_res14 - (float)iVar7 * DAT_140623164)) & DAT_1406243c0
                 ) <= fVar16) goto LAB_140393f01;
    }
    if (fVar16 < (float)((uint)(local_res18 - (local_res10 + fVar20)) & DAT_1406243c0))
    goto LAB_140393fa1;
    iVar7 = -1;
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      iVar7 = iVar6;
    }
    if (fVar16 < (float)((uint)(local_res1c - ((float)iVar7 * DAT_140623210 + local_res14)) &
                        DAT_1406243c0)) goto LAB_140393fa1;
  }
  else {
    iVar7 = -1;
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      iVar7 = iVar6;
    }
    if (fVar16 < (float)((uint)(local_res1c - ((float)iVar7 * DAT_140623164 + local_res14)) &
                        DAT_1406243c0)) goto LAB_140393e70;
  }
LAB_140393f01:
  pfVar8 = (float *)(**(code **)(*param_2 + 200))(param_2);
  dVar4 = (double)*pfVar8 + (double)param_1[0x107];
  pfVar8 = (float *)(**(code **)(*param_1 + 200))(param_1);
  dVar14 = (double)fVar16;
  dVar13 = (double)*pfVar8;
  if (dVar14 < (double)CONCAT44((uint)((ulonglong)(dVar4 - dVar13) >> 0x20) & DAT_1406243d0._4_4_,
                                SUB84(dVar4 - dVar13,0) & (uint)DAT_1406243d0)) {
    if (dVar4 <= dVar13) {
      dVar4 = dVar13 - dVar14;
    }
    else {
      dVar4 = dVar14 + dVar13;
    }
  }
  lVar3 = *param_1;
  lVar9 = (**(code **)(lVar3 + 200))(param_1);
  uVar10 = cocos2d::CCPoint::CCPoint(local_res20,(float)dVar4,*(float *)(lVar9 + 4));
  (**(code **)(lVar3 + 0xb8))(param_1,uVar10);
LAB_140393fa1:
  param_1[0x111] = (longlong)param_2;
  pfVar8 = (float *)(**(code **)(*param_1 + 200))(param_1);
  pfVar11 = (float *)(**(code **)(*param_2 + 200))(param_2);
  param_1[0x107] = (longlong)(double)(*pfVar8 - *pfVar11);
  return;
}

