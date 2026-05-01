// Called from triggerObject base / 0x4bc180
// Function: FUN_1402620e0 @ 0x2620e0


void FUN_1402620e0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *local_18;
  undefined8 *local_10;
  
  plVar1 = (longlong *)(param_1 + 0x558);
  local_10 = (undefined8 *)*plVar1;
  cVar2 = *(char *)((longlong)local_10[1] + 0x19);
  local_18 = local_10;
  puVar5 = (undefined8 *)local_10[1];
  while (cVar2 == '\0') {
    iVar3 = *(int *)((longlong)puVar5 + 0x1c);
    if ((iVar3 < param_2) || ((iVar3 <= param_2 && (*(int *)(puVar5 + 4) < param_3)))) {
      puVar4 = (undefined8 *)puVar5[2];
    }
    else {
      if ((*(char *)((longlong)local_10 + 0x19) != '\0') &&
         ((param_2 < iVar3 || (param_3 < *(int *)(puVar5 + 4))))) {
        local_10 = puVar5;
      }
      puVar4 = (undefined8 *)*puVar5;
      local_18 = puVar5;
    }
    puVar5 = puVar4;
    cVar2 = *(char *)((longlong)puVar4 + 0x19);
  }
  puVar5 = local_10;
  if (*(char *)((longlong)local_10 + 0x19) != '\0') {
    puVar5 = (undefined8 *)(*plVar1 + 8);
  }
  cVar2 = *(char *)((longlong)*puVar5 + 0x19);
  puVar5 = (undefined8 *)*puVar5;
  while (puVar4 = puVar5, cVar2 == '\0') {
    if ((param_2 < *(int *)((longlong)puVar4 + 0x1c)) ||
       ((param_2 <= *(int *)((longlong)puVar4 + 0x1c) && (param_3 < *(int *)(puVar4 + 4))))) {
      puVar5 = (undefined8 *)*puVar4;
    }
    else {
      puVar5 = (undefined8 *)puVar4[2];
      puVar4 = local_10;
    }
    cVar2 = *(char *)((longlong)puVar5 + 0x19);
    local_10 = puVar4;
  }
  FUN_14018b180(plVar1,&local_18);
  return;
}

