// FUN_140261ff0 @ 0x261ff0


void FUN_140261ff0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)(param_1 + 0x558);
  plVar3 = (longlong *)*plVar1;
  plVar5 = (longlong *)plVar3[1];
  uStack_20 = 0;
  cVar2 = *(char *)((longlong)plVar5 + 0x19);
  plVar6 = plVar3;
  local_28 = plVar5;
  while (plVar4 = plVar5, cVar2 == '\0') {
    if ((*(int *)((longlong)plVar4 + 0x1c) < param_2) ||
       ((*(int *)((longlong)plVar4 + 0x1c) <= param_2 && ((int)plVar4[4] < param_3)))) {
      uStack_20 = 0;
      plVar5 = (longlong *)plVar4[2];
    }
    else {
      uStack_20 = 1;
      plVar5 = (longlong *)*plVar4;
      plVar6 = plVar4;
    }
    cVar2 = *(char *)((longlong)plVar5 + 0x19);
    local_28 = plVar4;
  }
  if (((*(char *)((longlong)plVar6 + 0x19) != '\0') || (param_2 < *(int *)((longlong)plVar6 + 0x1c))
      ) || ((param_2 <= *(int *)((longlong)plVar6 + 0x1c) && (param_3 < (int)plVar6[4])))) {
    if (*(longlong *)(param_1 + 0x560) == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
      FUN_140052e40();
    }
    uStack_30 = 0;
    local_38 = plVar1;
    plVar5 = (longlong *)FUN_1404d0770(0x28);
    *(ulonglong *)((longlong)plVar5 + 0x1c) = CONCAT44(param_3,param_2);
    *plVar5 = (longlong)plVar3;
    plVar5[1] = (longlong)plVar3;
    plVar5[2] = (longlong)plVar3;
    *(undefined2 *)(plVar5 + 3) = 0;
    local_38 = local_28;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    FUN_1400636d0(plVar1,&local_38,plVar5);
  }
  return;
}

