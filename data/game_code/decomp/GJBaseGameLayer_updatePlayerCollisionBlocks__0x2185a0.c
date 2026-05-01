// GJBaseGameLayer_updatePlayerCollisionBlocks @ 0x2185a0
// Function: FUN_1402185a0


void FUN_1402185a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int local_res10;
  undefined1 local_48 [16];
  
  local_res10 = 0;
  do {
    plVar3 = param_1 + 0x1b5;
    plVar4 = param_1 + 0x614;
    plVar5 = param_1 + 0x1b4;
    if (local_res10 != 0) {
      plVar4 = param_1 + 0x615;
      plVar5 = plVar3;
    }
    plVar5 = (longlong *)*plVar5;
    plVar4 = (longlong *)*plVar4;
    lVar1 = *plVar4;
    uVar2 = (**(code **)(*plVar5 + 0x4a8))(plVar5,local_48);
    (**(code **)(lVar1 + 0x4b0))(plVar4,uVar2);
    uVar6 = (**(code **)(*plVar5 + 0x158))(plVar5);
    *(undefined4 *)((longlong)plVar4 + 0x3d4) = uVar6;
    uVar6 = (**(code **)(*plVar5 + 0x158))(plVar5);
    *(undefined4 *)(plVar4 + 0x7b) = uVar6;
    *(undefined4 *)((longlong)plVar4 + 0x394) = *(undefined4 *)((longlong)plVar5 + 0x394);
    *(int *)(plVar4 + 0x91) = (int)plVar5[0x91];
    *(int *)(plVar4 + 0x73) = (int)plVar5[0x73];
    *(undefined4 *)((longlong)plVar4 + 0x48c) = *(undefined4 *)((longlong)plVar5 + 0x48c);
    *(undefined1 *)((longlong)plVar4 + 0x369) = 1;
    *(undefined1 *)(plVar4 + 0x5d) = 1;
    (**(code **)(*plVar4 + 0x578))(plVar4);
    (**(code **)(*plVar4 + 0x490))(plVar4);
    FUN_140226d60(param_1,plVar4);
    (**(code **)(*param_1 + 0x478))(param_1,plVar4);
    if (local_res10 == -1) {
      plVar5 = (longlong *)param_1[0x614];
      plVar3 = param_1 + 0x1b4;
    }
    else {
      plVar5 = (longlong *)param_1[0x615];
    }
    plVar3 = (longlong *)*plVar3;
    lVar1 = *plVar5;
    uVar2 = (**(code **)(*plVar3 + 0x4a8))(plVar3,local_48);
    (**(code **)(lVar1 + 0x4b0))(plVar5,uVar2);
    uVar6 = (**(code **)(*plVar3 + 0x158))(plVar3);
    *(undefined4 *)((longlong)plVar5 + 0x3d4) = uVar6;
    uVar6 = (**(code **)(*plVar3 + 0x158))(plVar3);
    *(undefined4 *)(plVar5 + 0x7b) = uVar6;
    *(undefined4 *)((longlong)plVar5 + 0x394) = *(undefined4 *)((longlong)plVar3 + 0x394);
    *(int *)(plVar5 + 0x91) = (int)plVar3[0x91];
    *(int *)(plVar5 + 0x73) = (int)plVar3[0x73];
    *(undefined4 *)((longlong)plVar5 + 0x48c) = *(undefined4 *)((longlong)plVar3 + 0x48c);
    *(undefined1 *)((longlong)plVar5 + 0x369) = 1;
    *(undefined1 *)(plVar5 + 0x5d) = 1;
    (**(code **)(*plVar5 + 0x578))(plVar5);
    (**(code **)(*plVar5 + 0x490))(plVar5);
    FUN_140226d60(param_1,plVar5);
    (**(code **)(*param_1 + 0x478))(param_1,plVar5);
    local_res10 = local_res10 + 2;
  } while (local_res10 < 2);
  return;
}

