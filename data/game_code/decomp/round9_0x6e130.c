// FUN_14006e130 @ 0x6e130


ulonglong FUN_14006e130(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  ulonglong uVar5;
  float *pfVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar5 = 0;
  pfVar6 = (float *)(param_1 + 0x180);
  while( true ) {
    fVar1 = pfVar6[1];
    fVar2 = *pfVar6;
    dVar7 = (double)(fVar2 * *(float *)(param_2 + 0x140) + fVar1 * *(float *)(param_2 + 0x144));
    dVar9 = (double)(fVar1 * *(float *)(param_2 + 0x14c) + fVar2 * *(float *)(param_2 + 0x148));
    dVar8 = dVar9;
    dVar3 = dVar7;
    if ((dVar7 <= dVar9) && (dVar8 = dVar7, dVar3 = dVar9, dVar9 <= dVar7)) {
      dVar3 = dVar7;
    }
    dVar10 = (double)(fVar1 * *(float *)(param_2 + 0x154) + fVar2 * *(float *)(param_2 + 0x150));
    dVar9 = dVar10;
    dVar7 = dVar3;
    if ((dVar8 <= dVar10) && (dVar9 = dVar8, dVar7 = dVar10, dVar10 <= dVar3)) {
      dVar7 = dVar3;
    }
    dVar10 = (double)(fVar1 * *(float *)(param_2 + 0x15c) + fVar2 * *(float *)(param_2 + 0x158));
    dVar8 = dVar10;
    dVar3 = dVar7;
    if ((dVar9 <= dVar10) && (dVar8 = dVar9, dVar3 = dVar10, dVar10 <= dVar7)) {
      dVar3 = dVar7;
    }
    if ((*(double *)(pfVar6 + 8) + DAT_140622e18 < dVar8) || (dVar3 < *(double *)(pfVar6 + 8)))
    break;
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    pfVar6 = pfVar6 + 2;
    if (1 < (int)uVar4) {
      return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}

