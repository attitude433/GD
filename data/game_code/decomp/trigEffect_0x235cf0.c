// Called from triggerObject base / 0x4bc180
// Function: FUN_140235cf0 @ 0x235cf0


void FUN_140235cf0(longlong param_1,float param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_res10 [6];
  
  if (param_2 <= 0.0) {
    param_2 = DAT_140622c24;
  }
  fVar3 = DAT_140622f28;
  if (param_2 <= DAT_140622f28) {
    fVar3 = param_2;
  }
  fVar4 = DAT_140622ad0;
  if (DAT_140622ad0 <= fVar3) {
    fVar4 = fVar3;
  }
  *(float *)(param_1 + 0x1ac) = fVar4;
  if (param_3 <= 0.0) {
    local_res10[0] = 0xe;
    FUN_14024ac30(param_1 + 0x428,local_res10);
    *(float *)(param_1 + 0x1a8) = fVar4;
  }
  else {
    FUN_1402053a0(param_1 + 0x1a8,*(undefined4 *)(param_1 + 0x1a8),fVar4,0xe,param_3,param_4,param_5
                  ,param_6,param_7);
  }
  *(float *)(param_1 + 0x2f4) = param_3;
  if ((*(char *)(param_1 + 0x3225) == '\0') && (*(char *)(param_1 + 0x310) != '\0')) {
    lVar1 = *(longlong *)(param_1 + 0xda0);
    if ((*(char *)(lVar1 + 0x9b9) == '\0') &&
       (((*(char *)(lVar1 + 0x9ba) == '\0' && (*(char *)(lVar1 + 0x9bc) == '\0')) &&
        (*(char *)(lVar1 + 0x9c4) == '\0')))) {
      if (*(char *)(lVar1 + 0x9bb) == '\0') {
        uVar2 = 6;
        if (*(char *)(lVar1 + 0x9be) != '\0') {
          uVar2 = 0x21;
        }
      }
      else {
        uVar2 = 0x10;
      }
    }
    else {
      uVar2 = 5;
    }
    FUN_140213180(param_1,lVar1,uVar2,param_3 == 0.0);
  }
  return;
}

