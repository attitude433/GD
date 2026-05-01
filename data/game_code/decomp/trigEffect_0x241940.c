// Called from triggerObject base / 0x4bc180
// Function: FUN_140241940 @ 0x241940


void FUN_140241940(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_res8;
  
  if ((*(char *)((longlong)param_1 + 0x31f1) != '\0') || ((char)param_1[0x63e] == '\0')) {
    (**(code **)(*param_1 + 0x528))();
    if (*(char *)((longlong)param_1 + 0x3764) == '\0') {
      if (*(char *)((longlong)param_1 + 0x88a) != '\0') {
        plVar1 = (longlong *)param_1[0x113];
        if (plVar1 != (longlong *)param_1[0x114]) {
          *plVar1 = param_2;
          param_1[0x113] = param_1[0x113] + 8;
          return;
        }
        local_res8 = param_2;
        FUN_14012d2a0(param_1 + 0x112,plVar1,&local_res8);
        return;
      }
      FUN_140242130(param_1,*(undefined4 *)(param_2 + 0x7ec),2,param_2);
      if (0 < *(int *)(param_2 + 0x5c8)) {
        FUN_140242430(param_1,*(undefined4 *)(param_2 + 0x7ec),2,param_2);
      }
    }
  }
  return;
}

