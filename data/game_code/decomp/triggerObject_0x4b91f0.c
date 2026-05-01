// triggerObject @ 0x4b91f0
// Function: FUN_1404b91f0


void FUN_1404b91f0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x780);
  if (((*(float *)(param_1 + 0x784) != 0.0) && (param_2 != 0)) &&
     ((*(char *)(param_2 + 0x309c) == '\0' || (*(int *)(param_2 + 0x880) == 1)))) {
    DAT_1406c2e90 = DAT_1406c2e90 * 0x343fd + 0x269ec3;
    fVar2 = (float)((uint)((ulonglong)DAT_1406c2e90 >> 0x10) & 0x7fff) / DAT_140623644;
    fVar2 = ((fVar2 + fVar2) - DAT_140622c24) * *(float *)(param_1 + 0x784) + fVar3;
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 0x692);
  fVar3 = (float)((double)fVar3 - *(double *)(param_1 + 0x778));
  if (0.0 < fVar3) {
    FUN_140261cb0(*(undefined8 *)(param_2 + 0x950),*(undefined4 *)(param_1 + 0x5c8),uVar1,uVar1,
                  param_1 + 0x760,*(undefined4 *)(param_1 + 0x39c),*(undefined4 *)(param_1 + 0x698))
    ;
  }
  else {
    (**(code **)(*(longlong *)(param_2 + 0x198) + 8))
              ((longlong *)(param_2 + 0x198),*(undefined4 *)(param_1 + 0x5c8),uVar1,
               (double)(float)((uint)fVar3 ^ DAT_1406243f0));
  }
  *(undefined8 *)(param_1 + 0x778) = 0;
  return;
}

