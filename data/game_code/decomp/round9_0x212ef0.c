// FUN_140212ef0 @ 0x212ef0


void FUN_140212ef0(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  float fVar5;
  undefined4 extraout_XMM0_Da;
  float fVar6;
  
  if (param_3 != (longlong *)0x0) {
    param_1[0x80] = (longlong)param_3;
    if ((int)param_3[0x9d] == 1) {
      *(undefined1 *)((longlong)param_1 + 0x311) = *(undefined1 *)((longlong)param_3 + 0x6e4);
      *(char *)((longlong)param_1 + 0x312) = (char)param_3[0xde];
      if (*(char *)((longlong)param_3 + 0x6e5) != '\0') {
        fVar5 = *(float *)(param_3 + 0xdd);
        *(float *)(param_1 + 0x5a) = fVar5;
        fVar6 = *(float *)((longlong)param_3 + 0x6ec);
        if (fVar5 <= DAT_140622c24) {
          fVar5 = DAT_140622c24;
        }
        if (DAT_1406231b0 <= fVar5) {
          fVar5 = DAT_1406231b0;
        }
        *(float *)(param_1 + 0x5a) = fVar5;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        if (DAT_140622c24 <= fVar6) {
          fVar6 = DAT_140622c24;
        }
        *(float *)((longlong)param_1 + 0x2cc) = fVar6;
      }
    }
    uVar1 = (**(code **)(*param_3 + 0x660))(param_3);
    FUN_140213180(param_1,param_2,uVar1,0);
    uVar1 = (**(code **)(*param_3 + 0x660))(param_3);
    uVar1 = FUN_140232560(extraout_XMM0_Da,uVar1);
    FUN_140231ff0(param_1,uVar1,0,0);
    uVar2 = (**(code **)(*param_3 + 0x660))(param_3);
    if ((0x29 < (uint)uVar2) || ((0x20004080020U >> (uVar2 & 0x3f) & 1) == 0)) {
      (**(code **)(*param_1 + 0x460))(param_1,0);
    }
    if ((*(char *)((longlong)param_1 + 0x422) != '\0') &&
       (*(char *)(param_1[0x1b6] + 0x154) == '\0')) {
      lVar3 = param_1[0x1b4];
      if (*(int *)(param_2 + 0x39c) == *(int *)(lVar3 + 0x39c)) {
        lVar3 = param_1[0x1b5];
      }
      cVar4 = '\0';
      uVar1 = (**(code **)(*param_3 + 0x660))(param_3);
      switch(uVar1) {
      case 5:
        cVar4 = *(char *)(lVar3 + 0x9b9);
        break;
      case 6:
        if (((((*(char *)(lVar3 + 0x9b9) == '\0') && (*(char *)(lVar3 + 0x9ba) == '\0')) &&
             (*(char *)(lVar3 + 0x9bc) == '\0')) &&
            ((*(char *)(lVar3 + 0x9c4) == '\0' && (*(char *)(lVar3 + 0x9bb) == '\0')))) &&
           ((*(char *)(lVar3 + 0x9bd) == '\0' && (*(char *)(lVar3 + 0x9be) == '\0')))) {
          cVar4 = '\x01';
        }
        break;
      case 0x10:
        cVar4 = *(char *)(lVar3 + 0x9bb);
        break;
      case 0x13:
        cVar4 = *(char *)(lVar3 + 0x9ba);
        break;
      case 0x1b:
        cVar4 = *(char *)(lVar3 + 0x9bd);
        break;
      case 0x21:
        cVar4 = *(char *)(lVar3 + 0x9be);
        break;
      case 0x29:
        cVar4 = *(char *)(lVar3 + 0x9c4);
      }
      if (((char)param_1[0x10c] == '\0') && (cVar4 != '\0')) {
        FUN_14039a1d0(param_2,*(char *)(lVar3 + 0x9bf) == '\0',1);
      }
    }
  }
  return;
}

