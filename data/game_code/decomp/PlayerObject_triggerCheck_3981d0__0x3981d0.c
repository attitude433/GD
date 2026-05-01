// Function: FUN_1403981d0
// Original target: PlayerObject_triggerCheck_3981d0 @ 0x3981d0
// Ghidra entry: 1403981d0
// Signature: undefined FUN_1403981d0(void)


bool FUN_1403981d0(longlong param_1,int param_2)

{
  double dVar1;
  undefined1 *puVar2;
  bool bVar3;
  int local_res10 [6];
  
  if (param_2 == 5) {
    FUN_1403981d0(param_1,2);
    FUN_1403981d0(param_1,3);
    return *(char *)(param_1 + 0xa2b) == '\0';
  }
  if (*(char *)(param_1 + 0xbc8) == '\0') {
    local_res10[0] = param_2;
    puVar2 = (undefined1 *)FUN_1400cdbf0(param_1 + 3000,local_res10);
    *puVar2 = 0;
  }
  if (*(char *)(param_1 + 0xa2b) == '\0') {
    if (*(char *)(param_1 + 0x985) != '\0') {
      FUN_1403a0680(param_1);
    }
    if (param_2 == 1) {
      *(undefined2 *)(param_1 + 0x985) = 0;
      *(undefined1 *)(param_1 + 0x99c) = 1;
      if (*(char *)(param_1 + 0x9e4) != '\0') {
        FUN_140396650(param_1);
        return true;
      }
    }
    else {
      if (param_2 == 2) {
        *(undefined1 *)(param_1 + 0xb01) = 0;
        dVar1 = *(double *)(param_1 + 0xaf8);
        bVar3 = 0.0 < *(double *)(param_1 + 0xaf8);
      }
      else {
        if (param_2 != 3) {
          return true;
        }
        dVar1 = *(double *)(param_1 + 0xaf8);
        bVar3 = dVar1 < 0.0;
        *(undefined1 *)(param_1 + 0xb00) = 0;
      }
      if (!bVar3 && dVar1 != 0.0) {
        *(undefined1 *)(param_1 + 0xb58) = 0;
      }
    }
    return true;
  }
  return false;
}

