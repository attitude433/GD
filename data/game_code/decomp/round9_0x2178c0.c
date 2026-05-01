// FUN_1402178c0 @ 0x2178c0


bool FUN_1402178c0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int local_res10;
  int local_res14;
  
  cVar2 = (**(code **)(*param_3 + 0x628))(param_3,*(undefined1 *)(param_2 + 0xb70));
  if (cVar2 != '\0') {
    puVar5 = *(undefined8 **)(param_1 + 0x4f0);
    local_res10 = *(int *)((longlong)param_3 + 0x39c);
    local_res14 = *(int *)(param_2 + 0x39c);
    cVar2 = *(char *)((longlong)puVar5[1] + 0x19);
    puVar1 = (undefined8 *)puVar5[1];
    while (cVar2 == '\0') {
      if ((*(int *)((longlong)puVar1 + 0x1c) < local_res10) ||
         ((*(int *)((longlong)puVar1 + 0x1c) <= local_res10 && (*(int *)(puVar1 + 4) < local_res14))
         )) {
        puVar3 = (undefined8 *)puVar1[2];
      }
      else {
        puVar3 = (undefined8 *)*puVar1;
        puVar5 = puVar1;
      }
      puVar1 = puVar3;
      cVar2 = *(char *)((longlong)puVar3 + 0x19);
    }
    if (((*(char *)((longlong)puVar5 + 0x19) == '\0') &&
        (*(int *)((longlong)puVar5 + 0x1c) <= local_res10)) &&
       ((*(int *)((longlong)puVar5 + 0x1c) < local_res10 || (*(int *)(puVar5 + 4) <= local_res14))))
    {
      puVar4 = (undefined4 *)FUN_1401d0800(param_1 + 0x4f0,&local_res10);
      *puVar4 = *(undefined4 *)(param_1 + 0x3e0);
      return false;
    }
  }
  local_res10 = *(int *)((longlong)param_3 + 0x39c);
  local_res14 = *(undefined4 *)(param_2 + 0x39c);
  puVar4 = (undefined4 *)FUN_1401d0800(param_1 + 0x4f0,&local_res10);
  *puVar4 = *(undefined4 *)(param_1 + 0x3e0);
  cVar2 = (**(code **)(*param_3 + 0x560))(param_3,param_2);
  return cVar2 == '\0';
}

