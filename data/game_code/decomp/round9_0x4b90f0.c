// FUN_1404b90f0 @ 0x4b90f0


void FUN_1404b90f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  int local_res8 [2];
  
  if (*(int *)(param_1 + 0x758) < 1) {
    if (*(char *)(param_1 + 0x788) == '\0') {
      FUN_1400846d0(param_1 + 0x760);
    }
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x760);
    piVar2 = (int *)*puVar1;
    piVar3 = *(int **)(param_1 + 0x768);
    if (piVar2 != *(int **)(param_1 + 0x768)) {
      *(int **)(param_1 + 0x768) = piVar2;
      piVar3 = piVar2;
    }
    if (piVar3 == *(int **)(param_1 + 0x770)) {
      FUN_140063270(puVar1);
    }
    else {
      *piVar3 = *(int *)(param_1 + 0x758);
      *(longlong *)(param_1 + 0x768) = *(longlong *)(param_1 + 0x768) + 4;
    }
    if (*(char *)(param_1 + 0x788) == '\0') {
      FUN_1404c4ae0(puVar1,*(undefined8 *)(param_1 + 0x768),*param_2,param_2[1] - *param_2 >> 2);
    }
    if ((*param_2 == param_2[1]) || (*(char *)(param_1 + 0x788) != '\0')) {
      piVar2 = *(int **)(param_1 + 0x768);
      local_res8[0] = -*(int *)(param_1 + 0x39c);
      if (piVar2 != *(int **)(param_1 + 0x770)) {
        *piVar2 = local_res8[0];
        *(longlong *)(param_1 + 0x768) = *(longlong *)(param_1 + 0x768) + 4;
        return;
      }
      FUN_140063270(param_1 + 0x760,piVar2,local_res8);
      return;
    }
  }
  return;
}

