// PlayerObject_updateSlopeRotation @ 0x390bc0
// Function: FUN_140390bc0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140390bc0(longlong param_1,undefined4 param_2)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = *(double *)(param_1 + 0x930) * _DAT_140622f50;
  uVar2 = FUN_14038d100(dVar1,(float)dVar1);
  if (((*(char *)(param_1 + 0xb70) != '\0') && (DAT_140622f70 < *(double *)(param_1 + 0xb60))) &&
     ((*(char *)(param_1 + 0xb59) != '\0' || (*(char *)(param_1 + 0xb5a) != '\0')))) {
    uVar2 = 0;
  }
  FUN_140391260(param_1,param_2,uVar2);
  return;
}

