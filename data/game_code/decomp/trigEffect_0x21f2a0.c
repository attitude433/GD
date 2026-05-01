// Called from triggerObject base / 0x4bc180
// Function: FUN_14021f2a0 @ 0x21f2a0


void FUN_14021f2a0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  
  iVar1 = *(int *)(param_2 + 0x5cc);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x5c8);
  }
  local_res10 = param_2;
  lVar3 = FUN_140224590(param_1,iVar1);
  local_48[0] = lVar3;
  lVar4 = FUN_140224590(param_1,*(undefined4 *)(param_2 + 0x5c8));
  local_58 = lVar4;
  if (*(char *)(param_2 + 0x6a4) == '\0') {
    if (*(char *)(param_2 + 0x6a5) == '\0') {
      lVar5 = FUN_140224590(param_1,*(undefined4 *)(param_2 + 0x624));
      goto LAB_14021f329;
    }
    if (*(char *)(param_1 + 0x422) != '\0') {
      lVar5 = *(longlong *)(param_1 + 0xda8);
      goto LAB_14021f329;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xda0);
LAB_14021f329:
  if (((lVar3 != 0) && (lVar5 != 0)) && (lVar4 != 0)) {
    local_50 = lVar5;
    lVar6 = FUN_140224590(param_1,*(undefined4 *)(param_2 + 0x740));
    local_60 = lVar6;
    lVar7 = FUN_140224590(param_1,*(undefined4 *)(param_2 + 0x744));
    local_68 = lVar7;
    lVar8 = FUN_140224590(param_1,*(undefined4 *)(param_2 + 0x748));
    local_res20 = lVar8;
    local_res18 = FUN_140224590(param_1,*(undefined4 *)(param_2 + 0x74c));
    plVar2 = *(longlong **)(param_1 + 0x750);
    if (plVar2 == *(longlong **)(param_1 + 0x758)) {
      FUN_140251a80(param_1 + 0x748,plVar2,&local_res10,local_48,&local_50,&local_58,&local_60,
                    &local_68,&local_res20,&local_res18);
    }
    else {
      *(undefined4 *)((longlong)plVar2 + 0x4c) = 1;
      plVar2[10] = 0;
      plVar2[1] = 0;
      plVar2[2] = 0;
      plVar2[3] = 0;
      plVar2[4] = 0;
      plVar2[5] = 0;
      plVar2[6] = 0;
      plVar2[7] = 0;
      *(undefined4 *)(plVar2 + 0xb) = 0;
      plVar2[8] = 0;
      *(undefined4 *)(plVar2 + 9) = 0;
      *plVar2 = param_2;
      *(undefined4 *)(plVar2 + 10) = *(undefined4 *)(param_2 + 0x698);
      *(undefined4 *)((longlong)plVar2 + 0x54) = *(undefined4 *)(param_2 + 0x5c8);
      *(undefined4 *)(plVar2 + 0xb) = *(undefined4 *)(param_2 + 0x5cc);
      plVar2[1] = lVar3;
      plVar2[2] = lVar5;
      plVar2[3] = lVar4;
      plVar2[4] = lVar6;
      plVar2[5] = lVar7;
      plVar2[6] = lVar8;
      plVar2[7] = local_res18;
      *(longlong *)(param_1 + 0x750) = *(longlong *)(param_1 + 0x750) + 0x60;
    }
  }
  return;
}

