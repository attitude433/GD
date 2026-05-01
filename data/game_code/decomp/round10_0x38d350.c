// FUN_14038d350 @ 0x38d350


void FUN_14038d350(longlong param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = DAT_140622c24;
  if ((*(char *)(param_1 + 0x9e4) == '\0') && (*(char *)(param_1 + 0xb70) == '\0')) {
    *(bool *)(param_1 + 0x668) = param_2 != DAT_140622c24;
    *(float *)(param_1 + 0x724) = param_2;
    fVar5 = DAT_140622ba4;
    if (*(float *)(param_1 + 0x9f0) == fVar4) {
      fVar5 = fVar4;
    }
    fVar1 = *(float *)(param_1 + 0x9f4);
    fVar6 = DAT_140622c88;
    if ((((fVar1 != DAT_140622b74) && (fVar6 = DAT_140622ba8, fVar1 != DAT_140622c54)) &&
        (fVar6 = DAT_140622b64, fVar1 != DAT_140622ca8)) && (fVar6 = fVar4, fVar1 == DAT_140622d24))
    {
      fVar6 = DAT_140622b20;
    }
    iVar3 = -0x78;
    if (*(char *)(param_1 + 0x9bf) == '\0') {
      iVar3 = 0x78;
    }
    iVar2 = -1;
    if (*(char *)(param_1 + 0x9c2) == '\0') {
      iVar2 = 1;
    }
    fVar4 = (float)(iVar3 * iVar2) / (fVar5 * DAT_140622a74 * fVar6);
    *(float *)(param_1 + 0x720) = fVar4;
    if (*(char *)(param_1 + 0x9c3) != '\0') {
      *(float *)(param_1 + 0x720) = fVar4 * DAT_1406236f0;
    }
    *(undefined1 *)(param_1 + 0x728) = 1;
  }
  return;
}

