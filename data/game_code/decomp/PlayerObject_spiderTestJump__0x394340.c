// PlayerObject_spiderTestJump @ 0x394340


void FUN_140394340(longlong *param_1)

{
  FUN_1403943f0(param_1,0);
  if (param_1[0x184] != 0) {
    FUN_140231ff0(param_1[0x184],0x12,0,*(undefined4 *)((longlong)param_1 + 0x39c));
  }
  if ((((*(char *)((longlong)param_1 + 0x9b9) == '\0') &&
       (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
      (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
     (((*(char *)((longlong)param_1 + 0x9c4) == '\0' &&
       (*(char *)((longlong)param_1 + 0x9bb) == '\0')) &&
      (*(char *)((longlong)param_1 + 0x9be) == '\0')))) {
                    /* WARNING: Could not recover jumptable at 0x0001403943e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  return;
}

