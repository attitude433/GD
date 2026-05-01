// FUN_1400cdbf0 @ 0xcdbf0


longlong * FUN_1400cdbf0(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_1;
  local_28 = (longlong *)plVar1[1];
  uStack_20 = 0;
  plVar4 = plVar1;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar3 = local_28;
    do {
      local_28 = plVar3;
      bVar2 = *param_2 <= *(int *)((longlong)local_28 + 0x1c);
      if (bVar2) {
        plVar3 = (longlong *)*local_28;
        plVar4 = local_28;
      }
      else {
        plVar3 = (longlong *)local_28[2];
      }
      uStack_20 = (uint)bVar2;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar4 + 0x19) != '\0') || (*param_2 < *(int *)((longlong)plVar4 + 0x1c))
     ) {
    if (param_1[1] == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
      FUN_140052e40();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar4 = (longlong *)FUN_1404d0770(0x28);
    *(int *)((longlong)plVar4 + 0x1c) = *param_2;
    *(undefined1 *)(plVar4 + 4) = 0;
    *plVar4 = (longlong)plVar1;
    plVar4[1] = (longlong)plVar1;
    plVar4[2] = (longlong)plVar1;
    *(undefined2 *)(plVar4 + 3) = 0;
    local_38 = local_28;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    plVar4 = (longlong *)FUN_1400636d0(param_1,&local_38);
  }
  return plVar4 + 4;
}

