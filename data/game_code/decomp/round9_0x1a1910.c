// FUN_1401a1910 @ 0x1a1910


ulonglong FUN_1401a1910(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  float fVar6;
  
  fVar6 = (float)(**(code **)(*param_1 + 0x580))();
  iVar4 = (int)fVar6;
  cVar3 = (**(code **)(*param_1 + 0x4f0))(param_1);
  bVar5 = 0;
  if (iVar4 != (iVar4 / 0x5a) * 0x5a) {
    if ((iVar4 - 0x5bU < 0xb3) || (iVar4 + 0x10dU < 0xb3)) {
      bVar5 = 1;
    }
    bVar2 = bVar5 ^ 1;
    if (cVar3 == '\0') {
      bVar2 = bVar5;
    }
    return (ulonglong)bVar2;
  }
  iVar1 = -iVar4;
  if (-iVar4 < 0) {
    iVar1 = iVar4;
  }
  if (cVar3 == '\0') {
    if (iVar1 == 0xb4) goto LAB_1401a19b9;
  }
  else if (iVar1 != 0xb4) {
LAB_1401a19b9:
    return CONCAT71((uint7)((ulonglong)((longlong)iVar4 * -0x49f49f49) >> 8) & 0xffffff,1);
  }
  return 0;
}

