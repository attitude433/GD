// Function: FUN_1402338e0
// Original target: REAL_triggerObjectDispatch @ 0x2338e0
// Ghidra entry: 1402338e0
// Signature: undefined FUN_1402338e0(void)


void FUN_1402338e0(longlong param_1,char param_2,int param_3,byte param_4)

{
  char cVar1;
  ulonglong *puVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 local_28;
  undefined8 uStack_20;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0xdb0) + 0x154);
  if ((*(char *)(param_1 + 0x309e) == '\0') && (*(char *)(param_1 + 0x3190) == '\0')) {
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      uVar6 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar6);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    cVar4 = FUN_140183110(DAT_1406c2ed8,&DAT_140557780);
    if (cVar4 != '\0') {
      param_4 = param_4 ^ 1;
    }
  }
  for (pcVar7 = *(char **)(*(longlong *)(param_1 + 0x950) + 0x1f0);
      pcVar7 != *(char **)(*(longlong *)(param_1 + 0x950) + 0x1f8); pcVar7 = pcVar7 + 0x38) {
    if ((pcVar7[0x1c] != '\0') && (*pcVar7 == '\0')) {
      cVar4 = '\x01';
      goto LAB_1402339a6;
    }
  }
  cVar4 = '\0';
LAB_1402339a6:
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x307c) == '\0') {
      cVar4 = '\0';
    }
  }
  else {
    *(char *)(param_1 + 0x307c) = cVar4;
  }
  cVar5 = '\0';
  bVar3 = false;
  if (param_4 == 0) {
    if (cVar4 != '\0') goto LAB_140233aa3;
    if (cVar1 == '\0') goto LAB_1402339d9;
  }
  else {
LAB_1402339d9:
    if (param_2 == '\0') {
      cVar5 = FUN_1403981d0(*(undefined8 *)(param_1 + 0xda0),param_3);
    }
    else {
      cVar5 = FUN_140397f40();
    }
  }
  if (((*(char *)(param_1 + 0x307c) == '\0') && (*(char *)(param_1 + 0x422) != '\0')) &&
     ((param_4 == 0 || (cVar1 == '\0')))) {
    bVar3 = true;
    if (param_2 == '\0') {
      cVar5 = FUN_1403981d0(*(undefined8 *)(param_1 + 0xda8),param_3);
    }
    else {
      cVar5 = FUN_140397f40();
    }
  }
  if (cVar5 != '\0') {
    if ((cVar1 == '\0') || (!bVar3)) {
      iVar10 = 0;
    }
    else {
      iVar10 = 1;
    }
    if (param_2 == '\0') {
      if (param_3 == 1) {
        uVar8 = 0x46;
      }
      else if (param_3 == 2) {
        uVar8 = 0x48;
      }
      else {
        if (param_3 != 3) goto LAB_140233aa3;
        uVar8 = 0x4a;
      }
    }
    else if (param_3 == 1) {
      uVar8 = 0x45;
    }
    else if (param_3 == 2) {
      uVar8 = 0x47;
    }
    else {
      if (param_3 != 3) goto LAB_140233aa3;
      uVar8 = 0x49;
    }
    FUN_140231ff0(param_1,uVar8,0,iVar10 + 1);
  }
LAB_140233aa3:
  if (*(char *)(*(longlong *)(param_1 + 0xda0) + 0x9c0) == '\0') {
    FUN_140262190(*(undefined8 *)(param_1 + 0x950),param_2);
  }
  if (*(char *)(param_1 + 0x3190) == '\0') {
    if ((cVar1 == '\0') || (param_4 != 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    if (*(char *)(param_1 + 0x32a8) != '\0') {
      puVar2 = *(ulonglong **)(param_1 + 0x3320);
      if ((ulonglong)((longlong)puVar2 - *(longlong *)(param_1 + 0x3318) >> 4) < 100000) {
        local_28 = (ulonglong)CONCAT15(uVar9,CONCAT14(param_2,param_3));
        uStack_20 = 0;
        if (puVar2 == *(ulonglong **)(param_1 + 0x3328)) {
          FUN_140252ef0((longlong *)(param_1 + 0x3318),puVar2,&local_28);
        }
        else {
          *puVar2 = local_28;
          puVar2[1] = 0;
          *(longlong *)(param_1 + 0x3320) = *(longlong *)(param_1 + 0x3320) + 0x10;
        }
      }
    }
  }
  if (param_2 != '\0') {
    *(int *)(param_1 + 0x3080) = *(int *)(param_1 + 0x3080) + 1;
    *(int *)(param_1 + 0x356c) = *(int *)(param_1 + 0x356c) + 1;
  }
  if ((param_3 == 1) && (param_2 != '\0')) {
    *(undefined1 *)(param_1 + 0x3088) = 1;
  }
  return;
}

