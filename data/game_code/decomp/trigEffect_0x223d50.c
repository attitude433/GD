// Called from triggerObject base / 0x4bc180
// Function: FUN_140223d50 @ 0x223d50


void FUN_140223d50(longlong *param_1,longlong param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  if ((*(int *)(param_2 + 0x740) != 0) &&
     (bVar1 = *(int *)(param_2 + 0x740) == 1, bVar1 != (bool)*(char *)((longlong)param_1 + 0x32c)))
  {
    *(bool *)((longlong)param_1 + 0x32c) = bVar1;
    FUN_140388ca0(param_1[0x1b4],bVar1);
    FUN_140388ca0(param_1[0x1b5],bVar1);
  }
  if (*(int *)(param_2 + 0x744) != 0) {
    *(bool *)(param_1 + 0x10c) = *(int *)(param_2 + 0x744) == 1;
  }
  if (*(int *)(param_2 + 0x748) != 0) {
    (**(code **)(*param_1 + 0x4a0))(param_1,*(int *)(param_2 + 0x748) != 1);
  }
  if (*(int *)(param_2 + 0x75c) != 0) {
    (**(code **)(*param_1 + 0x4a8))(param_1,*(int *)(param_2 + 0x75c) != 1);
  }
  if (*(int *)(param_2 + 0x74c) != 0) {
    FUN_14038b440(param_1[0x1b4],*(int *)(param_2 + 0x74c) != 1);
  }
  if ((*(int *)(param_2 + 0x750) != 0) && (*(char *)((longlong)param_1 + 0x422) != '\0')) {
    FUN_14038b440(param_1[0x1b5],*(int *)(param_2 + 0x750) != 1);
  }
  if (*(int *)(param_2 + 0x754) != 0) {
    if (*(int *)(param_2 + 0x754) == 1) {
      FUN_14039f3b0();
    }
    else {
      FUN_14039f500(param_1[0x1b4]);
    }
  }
  if (*(int *)(param_2 + 0x758) != 0) {
    if (*(int *)(param_2 + 0x758) == 1) {
      FUN_14039f3b0();
    }
    else {
      FUN_14039f500(param_1[0x1b5]);
    }
  }
  if (*(int *)(param_2 + 0x760) != 0) {
    (**(code **)(*param_1 + 0x4b0))(param_1,*(int *)(param_2 + 0x760) == 1);
  }
  if (*(int *)(param_2 + 0x76c) != 0) {
    *(bool *)((longlong)param_1 + 0x516) = *(int *)(param_2 + 0x76c) == 1;
  }
  if (*(int *)(param_2 + 0x770) != 0) {
    *(bool *)((longlong)param_1 + 0x51c) = *(int *)(param_2 + 0x770) == 1;
  }
  if (*(int *)(param_2 + 0x774) != 0) {
    *(bool *)(param_1[0x1b4] + 0xa28) = *(int *)(param_2 + 0x774) == 1;
    *(bool *)(param_1[0x1b5] + 0xa28) = *(int *)(param_2 + 0x774) == 1;
  }
  if (*(int *)(param_2 + 0x764) != 0) {
    fVar2 = 0.0;
    if (*(int *)(param_2 + 0x764) == 1) {
      fVar3 = DAT_140622c24;
      if (DAT_140622c24 <= *(float *)(param_2 + 0x768)) {
        fVar3 = *(float *)(param_2 + 0x768);
      }
      fVar2 = DAT_14062307c;
      if (fVar3 <= DAT_14062307c) {
        fVar2 = fVar3;
      }
    }
    *(float *)(param_1 + 0xa3) = fVar2;
  }
  return;
}

