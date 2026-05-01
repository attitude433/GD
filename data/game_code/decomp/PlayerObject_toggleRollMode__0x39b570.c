// PlayerObject_toggleRollMode @ 0x39b570
// Function: FUN_14039b570


void FUN_14039b570(longlong *param_1,char param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res8;
  undefined2 local_res10;
  
  if (*(char *)((longlong)param_1 + 0x9bb) != param_2) {
    param_1[0xfb] = param_1[0x154];
    *(char *)((longlong)param_1 + 0x9bb) = param_2;
    if (param_2 != '\0') {
      FUN_14039be30(param_1,0x10);
    }
    if (*(char *)((longlong)param_1 + 0x9bb) == '\0') {
      if ((*(float *)(param_1 + 0x13e) == DAT_140622c24) || ((char)param_1[0x157] == '\0')) {
        uVar2 = (undefined4)param_1[0xc4];
      }
      else {
        uVar2 = 0;
      }
      FUN_14039dc50(param_1,uVar2);
      (**(code **)(*param_1 + 0x150))(param_1);
    }
    else {
      if ((*(float *)(param_1 + 0x13e) == DAT_140622c24) || ((char)param_1[0x157] == '\0')) {
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          local_res8 = FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
        }
        iVar1 = *(int *)((longlong)DAT_1406c2ed8 + 0x2dc) - (int)DAT_1406c2ed8[0x5c];
      }
      else {
        iVar1 = 0;
      }
      FUN_14039e580(param_1,iVar1);
      if (param_3 == '\0') {
        local_res10 = 0x32ff;
        local_res8 = CONCAT53(local_res8._3_5_,0x3232ff);
        FUN_140397760(param_1,&local_res8,DAT_1406231e0);
      }
    }
    *(undefined2 *)(param_1 + 0xe5) = 0;
    *(undefined1 *)(param_1 + 0xcd) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    if (param_2 != '\0') {
      FUN_140398860(param_1);
      FUN_1403961c0(param_1);
    }
  }
  return;
}

