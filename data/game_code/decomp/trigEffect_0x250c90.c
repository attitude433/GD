// Called from triggerObject base / 0x4bc180
// Function: FUN_140250c90 @ 0x250c90


longlong * FUN_140250c90(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *_Memory;
  
  if (param_1 != param_2) {
    lVar2 = *param_1;
    cVar1 = *(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19);
    _Memory = *(longlong **)(lVar2 + 8);
    while (cVar1 == '\0') {
      FUN_140061dc0(param_1,param_1,_Memory[2]);
      plVar3 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar3;
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
    }
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    param_1[1] = 0;
    lVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar2;
    lVar2 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = lVar2;
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 7) = (int)param_2[7];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(int *)(param_1 + 9) = (int)param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 10) = (int)param_2[10];
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(int *)(param_1 + 0xd) = (int)param_2[0xd];
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(int *)(param_1 + 0xe) = (int)param_2[0xe];
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x84);
  lVar2 = param_2[0x11];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar4;
  *(int *)(param_1 + 0x11) = (int)lVar2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  param_1[0x14] = param_2[0x14];
  *(char *)(param_1 + 0x15) = (char)param_2[0x15];
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  *(int *)(param_1 + 0x16) = (int)param_2[0x16];
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(int *)(param_1 + 0x17) = (int)param_2[0x17];
  *(undefined1 *)((longlong)param_1 + 0xbc) = *(undefined1 *)((longlong)param_2 + 0xbc);
  *(undefined1 *)((longlong)param_1 + 0xbd) = *(undefined1 *)((longlong)param_2 + 0xbd);
  *(undefined1 *)((longlong)param_1 + 0xbe) = *(undefined1 *)((longlong)param_2 + 0xbe);
  *(int *)(param_1 + 0x18) = (int)param_2[0x18];
  FUN_14024b1d0(param_1 + 0x19,param_2 + 0x19);
  *(int *)(param_1 + 0x1c) = (int)param_2[0x1c];
  return param_1;
}

