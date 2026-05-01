// GJBaseGameLayer_updateDualGround @ 0x213180
// Function: FUN_140213180


void FUN_140213180(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 local_res18 [2];
  
  cVar1 = *(char *)(param_1 + 0x422);
  if (((cVar1 == '\0') ||
      (lVar4 = *(longlong *)(param_1 + 0x408), *(longlong *)(param_1 + 0x408) == 0)) &&
     (lVar4 = 0, *(longlong *)(param_1 + 0x400) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x400);
  }
  if (1 < param_3 - 0x17U) {
    *(int *)(param_1 + 0x540) = param_3;
  }
  lVar2 = param_1;
  fVar5 = (float)FUN_140211d50(param_1,param_3);
  fVar6 = DAT_140623424;
  if (cVar1 != '\0') {
    fVar8 = fVar5;
    if (fVar5 == DAT_140623408) {
      fVar8 = DAT_140623424;
    }
    lVar2 = *(longlong *)(lVar2 + 0xda0);
    if (*(int *)(param_2 + 0x39c) == *(int *)(lVar2 + 0x39c)) {
      lVar2 = *(longlong *)(param_1 + 0xda8);
    }
    if (((*(char *)(lVar2 + 0x9b9) == '\0') && (*(char *)(lVar2 + 0x9ba) == '\0')) &&
       ((*(char *)(lVar2 + 0x9bc) == '\0' && (*(char *)(lVar2 + 0x9c4) == '\0')))) {
      uVar3 = 6;
      if (*(char *)(lVar2 + 0x9bb) != '\0') {
        uVar3 = 0x10;
      }
    }
    else {
      uVar3 = 5;
    }
    fVar5 = (float)FUN_140211d50(param_1,uVar3);
    if (fVar5 <= fVar8) {
      fVar5 = fVar8;
    }
  }
  if ((*(char *)(param_1 + 0x311) == '\0') &&
     (((fVar5 != fVar6 || (param_3 == 0x21)) || (cVar1 != '\0')))) {
    FUN_140213370(param_1,lVar4);
  }
  else {
    *(undefined1 *)(param_1 + 0x310) = 0;
    if (*(char *)(param_1 + 0x2a0) != '\0') {
      local_res18[0] = 0xb;
      FUN_14024ac30(param_1 + 0x428,local_res18);
      local_res18[0] = 0xd;
      FUN_14024ac30(param_1 + 0x428,local_res18);
      *(undefined4 *)(param_1 + 0x1e4) = 0;
      *(undefined4 *)(param_1 + 500) = 0;
      *(undefined4 *)(param_1 + 0x23c) = 0;
      *(undefined4 *)(param_1 + 0x244) = 0;
      *(undefined4 *)(param_1 + 0x264) = 0;
    }
    uVar7 = DAT_140622ad0;
    if (*(char *)(param_1 + 0x422) != '\0') {
      uVar7 = DAT_140622aa8;
    }
    FUN_1402053a0(param_1 + 0x1a8,*(undefined4 *)(param_1 + 0x424),0,0x19,uVar7,1,DAT_140622d04,
                  0xffffffff,0xffffffff);
  }
  return;
}

