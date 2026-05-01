
void FUN_140236150(longlong *param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_2;
  if (DAT_140622e58 <= param_2) {
    fVar2 = DAT_140622e58;
  }
  fVar3 = DAT_140622a10;
  if ((DAT_140622a10 <= fVar2) && (fVar3 = DAT_140622e58, param_2 <= DAT_140622e58)) {
    fVar3 = param_2;
  }
  bVar1 = fVar3 != DAT_140622c24;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  *(float *)(param_1 + 0x66) = fVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140236196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4f8))();
  return;
}

