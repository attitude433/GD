// GJBaseGameLayer_getItemValue @ 0x2341c0


double FUN_1402341c0(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  double dVar2;
  
  if (param_2 == 1) {
    iVar1 = FUN_1402623f0(*(undefined8 *)(param_1 + 0x950),param_3);
    return (double)iVar1;
  }
  if (param_2 == 2) {
    dVar2 = (double)FUN_140263930(*(undefined8 *)(param_1 + 0x950),param_3);
    return dVar2;
  }
  if (param_2 == 3) {
    return (double)*(int *)(param_1 + 0x864);
  }
  if (param_2 != 4) {
    if (param_2 != 5) {
      return 0.0;
    }
    return (double)*(int *)(param_1 + 0x3084);
  }
  return *(double *)(param_1 + 0x3560);
}

