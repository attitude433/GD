// FUN_140217f50 @ 0x217f50


void FUN_140217f50(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  void *_Memory;
  undefined8 *puVar6;
  int local_res18;
  int local_res1c;
  void *local_28;
  undefined8 uStack_20;
  longlong local_18;
  
  if (*(int *)((longlong)param_3 + 0x40c) == 0xe38) {
    (**(code **)(*param_3 + 0x678))(param_3,*(undefined4 *)(param_1 + 0x3e0));
  }
  if ((char)param_3[0xba] != '\0') {
    if (*(char *)((longlong)param_3 + 0x6dc) == '\0') {
      local_res1c = *(int *)(param_2 + 0x39c);
    }
    else {
      local_res1c = 0;
    }
    local_res18 = *(int *)((longlong)param_3 + 0x39c);
    puVar6 = *(undefined8 **)(param_1 + 0x4f0);
    cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
    puVar3 = (undefined8 *)puVar6[1];
    while (cVar1 == '\0') {
      if ((*(int *)((longlong)puVar3 + 0x1c) < local_res18) ||
         ((*(int *)((longlong)puVar3 + 0x1c) <= local_res18 && (*(int *)(puVar3 + 4) < local_res1c))
         )) {
        puVar5 = (undefined8 *)puVar3[2];
      }
      else {
        puVar5 = (undefined8 *)*puVar3;
        puVar6 = puVar3;
      }
      puVar3 = puVar5;
      cVar1 = *(char *)((longlong)puVar5 + 0x19);
    }
    if (((*(char *)((longlong)puVar6 + 0x19) == '\0') &&
        (*(int *)((longlong)puVar6 + 0x1c) <= local_res18)) &&
       ((*(int *)((longlong)puVar6 + 0x1c) < local_res18 || (*(int *)(puVar6 + 4) <= local_res1c))))
    {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((char)param_3[0xd2] != '\0') {
      if (!bVar2) {
        FUN_1402620e0(*(undefined8 *)(param_1 + 0x950),local_res18,local_res1c);
      }
      puVar4 = (undefined4 *)FUN_1401d0800(param_1 + 0x4f0,&local_res18);
      *puVar4 = *(undefined4 *)(param_1 + 0x3e0);
    }
    puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 0x950) + 0x558);
    cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
    puVar3 = (undefined8 *)puVar6[1];
    while (cVar1 == '\0') {
      if ((*(int *)((longlong)puVar3 + 0x1c) < local_res18) ||
         ((*(int *)((longlong)puVar3 + 0x1c) <= local_res18 && (*(int *)(puVar3 + 4) < local_res1c))
         )) {
        puVar5 = (undefined8 *)puVar3[2];
      }
      else {
        puVar5 = (undefined8 *)*puVar3;
        puVar6 = puVar3;
      }
      puVar3 = puVar5;
      cVar1 = *(char *)((longlong)puVar5 + 0x19);
    }
    if (((*(char *)((longlong)puVar6 + 0x19) != '\0') ||
        (local_res18 < *(int *)((longlong)puVar6 + 0x1c))) ||
       ((local_res18 <= *(int *)((longlong)puVar6 + 0x1c) && (local_res1c < *(int *)(puVar6 + 4)))))
    {
      FUN_140261ff0(*(longlong *)(param_1 + 0x950),local_res18,local_res1c);
      if (*(int *)((longlong)param_3 + 0x40c) == 0x4f4) {
        local_28 = (void *)0x0;
        uStack_20 = 0;
        local_18 = 0;
        FUN_1404b90f0(param_3,&local_28);
        if (local_28 != (void *)0x0) {
          _Memory = local_28;
          if ((0xfff < (local_18 - (longlong)local_28 & 0xfffffffffffffffcU)) &&
             (_Memory = *(void **)((longlong)local_28 + -8),
             0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
      }
      (**(code **)(*param_3 + 0x468))(param_3,param_1,*(undefined4 *)(param_2 + 0x39c),0);
    }
    (**(code **)(*param_3 + 0x528))(param_3,0);
  }
  return;
}

