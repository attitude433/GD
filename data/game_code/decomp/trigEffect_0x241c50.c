// Called from triggerObject base / 0x4bc180
// Function: FUN_140241c50 @ 0x241c50


int FUN_140241c50(float param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *in_RCX;
  undefined8 local_res8;
  longlong local_res10;
  int local_res18 [2];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  longlong local_28;
  
  if (((*(char *)((longlong)in_RCX + 0x31f1) != '\0') || ((char)in_RCX[0x63e] == '\0')) &&
     (0 < *(int *)(param_2 + 0x760))) {
    local_res10 = param_2;
    if (*(char *)((longlong)in_RCX + 0x3764) == '\0') {
      if (*(char *)((longlong)in_RCX + 0x88a) != '\0') {
        plVar5 = (longlong *)in_RCX[0x113];
        if (plVar5 == (longlong *)in_RCX[0x114]) {
          FUN_14012d2a0(in_RCX + 0x112,plVar5,&local_res10);
          return 0;
        }
        *plVar5 = param_2;
        in_RCX[0x113] = in_RCX[0x113] + 8;
        return 0;
      }
      if ((*(char *)(param_2 + 0x7ae) == '\0') && (0 < *(int *)(param_2 + 0x5c8))) {
        local_30 = *(undefined4 *)(param_2 + 0x698);
        local_34 = *(undefined4 *)(param_2 + 0x5cc);
        local_38 = *(int *)(param_2 + 0x5c8);
        local_28 = param_2;
        param_1 = (float)FUN_1402425f0(in_RCX,&local_38);
        if (param_1 <= 0.0) {
          return 0;
        }
      }
      uVar1 = *(undefined1 *)(param_2 + 0x7ad);
      *(undefined1 *)(param_2 + 0x7ad) = 0;
      if (*(char *)(param_2 + 0x7c8) != '\0') {
        if (DAT_1406c2e88 == (longlong *)0x0) {
          local_res8 = FUN_1404d0770(0x888);
          DAT_1406c2e88 = (longlong *)FUN_140053100(local_res8);
          (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
        }
        param_1 = (float)FUN_140054430(DAT_1406c2e88,*(undefined4 *)(param_2 + 0x7c4),0);
      }
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_res8 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
        param_1 = (float)(**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      iVar4 = FUN_14017bcc0(param_1,param_2);
      *(undefined1 *)(param_2 + 0x7ad) = uVar1;
      if (0 < iVar4) {
        local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(param_2 + 0x39c));
        local_res18[0] = iVar4;
        plVar5 = (longlong *)FUN_140250040(in_RCX + 0xed,&local_38,&local_res8);
        lVar2 = *plVar5;
        piVar3 = *(int **)(lVar2 + 0x20);
        if (piVar3 == *(int **)(lVar2 + 0x28)) {
          FUN_140063270(lVar2 + 0x18,piVar3,local_res18);
        }
        else {
          *piVar3 = iVar4;
          *(longlong *)(lVar2 + 0x20) = *(longlong *)(lVar2 + 0x20) + 4;
        }
        if (0 < *(int *)(param_2 + 0x5c8)) {
          FUN_140242430(in_RCX,iVar4,0,param_2);
        }
      }
      return iVar4;
    }
    (**(code **)(*in_RCX + 0x528))();
  }
  return 0;
}

