// Function: FUN_140388d10
// Original target: PlayerObject_setYVelocity_388d10 @ 0x388d10
// Ghidra entry: 140388d10
// Signature: undefined FUN_140388d10(void)


void FUN_140388d10(longlong param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)(int)param_2;
  if (param_2 != dVar2) {
    dVar1 = (double)round((param_2 - dVar2) * DAT_140623000);
    *(double *)(param_1 + 0x9a0) = dVar1 / DAT_140623000 + dVar2;
    return;
  }
  *(double *)(param_1 + 0x9a0) = param_2;
  return;
}

