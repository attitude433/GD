// PlayerObject_incrementJumps @ 0x38cba0


void FUN_14038cba0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x7e4) != '\0') {
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      uVar3 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar3);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    lVar1 = DAT_1406c2ed8[0x41];
    *(undefined1 *)(lVar1 + 0x3974) = 1;
    *(int *)(lVar1 + 0x3978) = *(int *)(lVar1 + 0x3978) + 1;
    *(int *)(lVar1 + 0x3970) = *(int *)(lVar1 + 0x3970) + 1;
    lVar1 = *(longlong *)(lVar1 + 0x878);
    iVar4 = (*(int *)(lVar1 + 0x2fc) - *(int *)(lVar1 + 0x300)) + 1;
    *(int *)(lVar1 + 0x304) = iVar4;
    iVar2 = rand();
    iVar2 = (int)(((float)iVar2 / DAT_140623644) * DAT_14062350c);
    *(int *)(lVar1 + 0x300) = iVar2;
    *(int *)(lVar1 + 0x2fc) = iVar2 + iVar4;
    *(undefined1 *)(param_1 + 0xa88) = 1;
  }
  return;
}

