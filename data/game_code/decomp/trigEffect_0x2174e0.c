// Called from triggerObject base / 0x4bc180
// Function: FUN_1402174e0 @ 0x2174e0


void FUN_1402174e0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  char cVar7;
  undefined4 local_res10 [2];
  
  cVar7 = *(char *)(param_2 + 0x6a5);
  cVar1 = *(char *)(param_2 + 0x740);
  cVar2 = *(char *)(param_2 + 0x741);
  cVar3 = *(char *)(param_2 + 0x742);
  if (*(char *)(param_2 + 0x6a4) == '\0') {
    if (cVar7 != '\0') goto LAB_1402176e8;
    cVar7 = '\x01';
  }
  if (cVar1 != '\0') {
    lVar4 = *(longlong *)(param_1 + 0xda0);
    if (*(char *)(lVar4 + 0xbc8) == '\0') {
      local_res10[0] = 1;
      puVar6 = (undefined1 *)FUN_1400cdbf0(lVar4 + 3000,local_res10);
      *puVar6 = 0;
    }
    if (*(char *)(lVar4 + 0xa2b) == '\0') {
      if (*(char *)(lVar4 + 0x985) != '\0') {
        FUN_1403a0680(lVar4);
      }
      *(undefined2 *)(lVar4 + 0x985) = 0;
      *(undefined1 *)(lVar4 + 0x99c) = 1;
      if (*(char *)(lVar4 + 0x9e4) != '\0') {
        FUN_140396650(lVar4);
      }
    }
  }
  if ((*(char *)(param_1 + 0x309e) != '\0') && (cVar2 != '\0')) {
    uVar5 = *(undefined8 *)(param_1 + 0xda0);
    FUN_1403981d0(uVar5,2);
    FUN_1403981d0(uVar5,3);
    lVar4 = *(longlong *)(param_1 + 0xda0);
    if (*(char *)(lVar4 + 0xbc8) == '\0') {
      local_res10[0] = 2;
      puVar6 = (undefined1 *)FUN_1400cdbf0(lVar4 + 3000,local_res10);
      *puVar6 = 0;
    }
    if (*(char *)(lVar4 + 0xa2b) == '\0') {
      if (*(char *)(lVar4 + 0x985) != '\0') {
        FUN_1403a0680(lVar4);
      }
      *(undefined1 *)(lVar4 + 0xb01) = 0;
      if (*(double *)(lVar4 + 0xaf8) <= 0.0 && *(double *)(lVar4 + 0xaf8) != 0.0) {
        *(undefined1 *)(lVar4 + 0xb58) = 0;
      }
    }
    lVar4 = *(longlong *)(param_1 + 0xda0);
    if (*(char *)(lVar4 + 0xbc8) == '\0') {
      local_res10[0] = 3;
      puVar6 = (undefined1 *)FUN_1400cdbf0(lVar4 + 3000,local_res10);
      *puVar6 = 0;
    }
    if (*(char *)(lVar4 + 0xa2b) == '\0') {
      if (*(char *)(lVar4 + 0x985) != '\0') {
        FUN_1403a0680(lVar4);
      }
      *(undefined1 *)(lVar4 + 0xb00) = 0;
      if (0.0 < *(double *)(lVar4 + 0xaf8)) {
        *(undefined1 *)(lVar4 + 0xb58) = 0;
      }
    }
  }
  if (cVar3 != '\0') {
    lVar4 = *(longlong *)(param_1 + 0xda0);
    *(undefined2 *)(lVar4 + 0x728) = 0;
    *(undefined1 *)(lVar4 + 0x668) = 0;
    *(undefined4 *)(lVar4 + 0x720) = 0;
  }
  if (*(char *)(param_2 + 0x743) != '\0') {
    lVar4 = *(longlong *)(param_1 + 0xda0);
    *(undefined1 *)(lVar4 + 0x952) = 0;
    *(undefined1 *)(lVar4 + 0xb94) = 0;
  }
  if (cVar7 == '\0') {
    return;
  }
LAB_1402176e8:
  if (cVar1 != '\0') {
    lVar4 = *(longlong *)(param_1 + 0xda8);
    if (*(char *)(lVar4 + 0xbc8) == '\0') {
      local_res10[0] = 1;
      puVar6 = (undefined1 *)FUN_1400cdbf0(lVar4 + 3000,local_res10);
      *puVar6 = 0;
    }
    if (*(char *)(lVar4 + 0xa2b) == '\0') {
      if (*(char *)(lVar4 + 0x985) != '\0') {
        FUN_1403a0680(lVar4);
      }
      *(undefined2 *)(lVar4 + 0x985) = 0;
      *(undefined1 *)(lVar4 + 0x99c) = 1;
      if (*(char *)(lVar4 + 0x9e4) != '\0') {
        FUN_140396650(lVar4);
      }
    }
  }
  if ((*(char *)(param_1 + 0x309e) != '\0') && (cVar2 != '\0')) {
    lVar4 = *(longlong *)(param_1 + 0xda8);
    FUN_1403981d0(lVar4,2);
    FUN_1403981d0(lVar4,3);
    lVar4 = *(longlong *)(param_1 + 0xda8);
    if (*(char *)(lVar4 + 0xbc8) == '\0') {
      local_res10[0] = 2;
      puVar6 = (undefined1 *)FUN_1400cdbf0(lVar4 + 3000,local_res10);
      *puVar6 = 0;
    }
    if (*(char *)(lVar4 + 0xa2b) == '\0') {
      if (*(char *)(lVar4 + 0x985) != '\0') {
        FUN_1403a0680(lVar4);
      }
      *(undefined1 *)(lVar4 + 0xb01) = 0;
      if (*(double *)(lVar4 + 0xaf8) <= 0.0 && *(double *)(lVar4 + 0xaf8) != 0.0) {
        *(undefined1 *)(lVar4 + 0xb58) = 0;
      }
    }
    lVar4 = *(longlong *)(param_1 + 0xda8);
    if (*(char *)(lVar4 + 0xbc8) == '\0') {
      local_res10[0] = 3;
      puVar6 = (undefined1 *)FUN_1400cdbf0(lVar4 + 3000,local_res10);
      *puVar6 = 0;
    }
    if (*(char *)(lVar4 + 0xa2b) == '\0') {
      if (*(char *)(lVar4 + 0x985) != '\0') {
        FUN_1403a0680(lVar4);
      }
      *(undefined1 *)(lVar4 + 0xb00) = 0;
      if (0.0 < *(double *)(lVar4 + 0xaf8)) {
        *(undefined1 *)(lVar4 + 0xb58) = 0;
      }
    }
  }
  if (cVar3 != '\0') {
    lVar4 = *(longlong *)(param_1 + 0xda8);
    *(undefined2 *)(lVar4 + 0x728) = 0;
    *(undefined1 *)(lVar4 + 0x668) = 0;
    *(undefined4 *)(lVar4 + 0x720) = 0;
  }
  if (*(char *)(param_2 + 0x743) != '\0') {
    lVar4 = *(longlong *)(param_1 + 0xda8);
    *(undefined1 *)(lVar4 + 0x952) = 0;
    *(undefined1 *)(lVar4 + 0xb94) = 0;
  }
  return;
}

