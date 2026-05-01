// FUN_1401a19d0 @ 0x1a19d0


ulonglong FUN_1401a19d0(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint7 uVar4;
  int iVar5;
  byte bVar6;
  float fVar7;
  
  fVar7 = (float)(**(code **)(*param_1 + 0x580))();
  iVar5 = (int)fVar7;
  cVar3 = (**(code **)(*param_1 + 0x4f0))(param_1);
  bVar6 = 0;
  if (iVar5 != (iVar5 / 0x5a) * 0x5a) {
    if ((iVar5 - 0x5bU < 0xb3) || (iVar5 + 0x10dU < 0xb3)) {
      bVar6 = 1;
    }
    bVar2 = bVar6 ^ 1;
    if (cVar3 == '\0') {
      bVar2 = bVar6;
    }
    return (ulonglong)bVar2;
  }
  iVar1 = iVar5 + 0x168;
  if (-1 < iVar5) {
    iVar1 = iVar5;
  }
  uVar4 = (uint7)(uint3)((uint)iVar1 >> 8);
  if (((iVar1 != 0x10e) || (cVar3 != '\0')) && ((iVar1 != 0x5a || (cVar3 == '\0')))) {
    return (ulonglong)uVar4 << 8;
  }
  return CONCAT71(uVar4,1);
}

