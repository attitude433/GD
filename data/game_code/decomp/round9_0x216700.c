// FUN_140216700 @ 0x216700


bool FUN_140216700(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(int *)(*(longlong *)(param_1 + 0x878) + 0x454) != 2) {
    uVar4 = FUN_14016cda0(*(longlong *)(param_1 + 0x878),(int)param_2[0xe2]);
    if (*(int *)(*(longlong *)(param_1 + 0x878) + 0x454) == 1) {
      if (DAT_1406c2ee8 == (longlong *)0x0) {
        uVar5 = FUN_1404d0770(0x3e0);
        DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(uVar5);
        (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
      }
      uVar1 = FUN_1401dff20(DAT_1406c2ee8,uVar4);
      return (bool)uVar1;
    }
    if (DAT_1406c2ee8 == (longlong *)0x0) {
      uVar5 = FUN_1404d0770(0x3e0);
      DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(uVar5);
      (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
    }
    cVar2 = FUN_1401dfce0(DAT_1406c2ee8,uVar4);
    if (cVar2 == '\0') {
      if (DAT_1406c2ee8 == (longlong *)0x0) {
        uVar5 = FUN_1404d0770(0x3e0);
        DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(uVar5);
        (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
      }
      cVar2 = FUN_1401dfe60(DAT_1406c2ee8,uVar4);
      if (cVar2 == '\0') {
        return false;
      }
    }
    return true;
  }
  iVar3 = (**(code **)(*param_2 + 0x660))(param_2);
  if (iVar3 == 0x1f) {
    iVar3 = (int)param_2[0xe2];
    if (iVar3 == 1) {
      return *(int *)(*(longlong *)(param_1 + 0x878) + 0x3c4) -
             *(int *)(*(longlong *)(param_1 + 0x878) + 0x3c8) == 1;
    }
    if (iVar3 == 2) {
      return *(int *)(*(longlong *)(param_1 + 0x878) + 0x3d0) -
             *(int *)(*(longlong *)(param_1 + 0x878) + 0x3d4) == 1;
    }
    if (iVar3 == 3) {
      return *(int *)(*(longlong *)(param_1 + 0x878) + 0x3dc) -
             *(int *)(*(longlong *)(param_1 + 0x878) + 0x3e0) == 1;
    }
  }
  return false;
}

