// FUN_1402467d0 @ 0x2467d0


void FUN_1402467d0(longlong param_1,char param_2,char param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  undefined2 local_res8;
  char local_resa;
  
  if (*(char *)(param_1 + 0x418) == param_2) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0xda0);
  *(char *)(param_1 + 0x418) = param_2;
  cocos2d::CCMotionStreak::stopStroke(*(CCMotionStreak **)(lVar2 + 0x7a0));
  if (*(char *)(lVar2 + 0x978) != '\0') {
    *(undefined1 *)(lVar2 + 0x978) = 0;
    uVar5 = DAT_140622b38;
    if (*(char *)(lVar2 + 0x7e4) != '\0') {
      uVar5 = DAT_140622a74;
    }
    FUN_1403a0190(lVar2,uVar5);
  }
  fVar3 = DAT_140622c24;
  if (param_3 == '\0') {
    if (param_2 == '\0') {
      local_res8 = 0xff00;
      local_resa = -1;
      FUN_140397760(*(undefined8 *)(param_1 + 0xda0),&local_res8,DAT_1406231e0);
LAB_1402468fd:
      fVar6 = 0.0;
      goto LAB_140246900;
    }
    local_res8 = 0x96ff;
    local_resa = param_3;
    FUN_140397760(*(undefined8 *)(param_1 + 0xda0),&local_res8,DAT_1406231e0);
    *(undefined1 *)(param_1 + 0x420) = 0;
    fVar6 = fVar3;
  }
  else {
    fVar6 = DAT_140622c24;
    if (param_2 == '\0') goto LAB_1402468fd;
LAB_140246900:
    *(undefined1 *)(param_1 + 0x420) = 0;
    if (param_3 != '\0') {
      *(float *)(param_1 + 0x41c) = fVar6;
      return;
    }
  }
  pfVar4 = (float *)(param_1 + 0x41c);
  fVar1 = *pfVar4;
  if ((fVar1 == 0.0) || (fVar1 == fVar3)) {
    if (fVar6 == fVar3) {
      *pfVar4 = DAT_140622990;
    }
    else {
      *pfVar4 = DAT_140622c20;
    }
  }
  else {
    if (*(char *)(param_1 + 0x418) == '\0') {
      if (fVar1 <= DAT_140622b08) goto LAB_140246955;
    }
    else if (DAT_140622b08 <= fVar1) goto LAB_140246955;
    *(undefined1 *)(param_1 + 0x420) = 1;
  }
LAB_140246955:
  FUN_14038b6d0(*(undefined8 *)(param_1 + 0xda0));
  if (*(char *)(param_1 + 0x422) != '\0') {
    FUN_14038b6d0(*(undefined8 *)(param_1 + 0xda8));
  }
  FUN_1402053a0(param_1 + 0x1a8,*pfVar4,fVar6,7,DAT_140622ad0,1,DAT_140622c84,0xffffffff,0xffffffff)
  ;
  *(undefined1 *)(param_1 + 0x421) = 1;
  return;
}

