// Called from triggerObject base / 0x4bc180
// Function: FUN_14025c430 @ 0x25c430


void FUN_14025c430(longlong param_1,undefined4 param_2,int param_3,int param_4,byte param_5,
                  undefined1 param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  
  puVar1 = *(undefined1 **)(param_1 + 0x250);
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (puVar1 != *(undefined1 **)(param_1 + 600)) {
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 0x28) = 0;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(undefined4 *)(puVar1 + 0xc) = param_2;
    *(undefined4 *)(puVar1 + 0x18) = param_8;
    *(undefined4 *)(puVar1 + 0x1c) = param_9;
    puVar1[0x14] = param_6;
    *(uint *)(puVar1 + 0x10) = (uint)param_5;
    FUN_1400846d0(puVar1 + 0x20,param_7);
    iVar2 = param_3;
    if (param_3 < param_4) {
      iVar2 = param_4;
    }
    *(int *)(puVar1 + 4) = iVar2;
    if (param_3 < param_4) {
      param_4 = param_3;
    }
    *(int *)(puVar1 + 8) = param_4;
    *(longlong *)(param_1 + 0x250) = *(longlong *)(param_1 + 0x250) + 0x38;
    return;
  }
  FUN_14026b070(param_1 + 0x248,puVar1,local_res10,local_res18,local_res20,&param_6,&param_5,param_7
                ,&param_8,&param_9);
  return;
}

