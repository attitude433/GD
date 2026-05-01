// FUN_140213690 @ 0x213690


float FUN_140213690(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  if ((*(float *)(param_1 + 0x23c) != 0.0) && (*(char *)(param_1 + 0x2a0) == '\0')) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x1010) + 200))();
    fVar2 = DAT_140623294;
    if (DAT_140623294 <=
        (*(float *)(lVar1 + 4) - DAT_140622c24) / *(float *)(param_1 + 0x1a8) +
        *(float *)(param_1 + 0x510)) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x1010) + 200))();
      fVar2 = (*(float *)(lVar1 + 4) - DAT_140622c24) / *(float *)(param_1 + 0x1a8) +
              *(float *)(param_1 + 0x510);
    }
    return fVar2;
  }
  fVar3 = (*(float *)(param_1 + 0x308) -
          (*(float *)(param_1 + 0x2ec) * DAT_140622b08) / *(float *)(param_1 + 0x1a8)) +
          *(float *)(param_1 + 0x1b4);
  fVar2 = DAT_140623294;
  if (DAT_140623294 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}

