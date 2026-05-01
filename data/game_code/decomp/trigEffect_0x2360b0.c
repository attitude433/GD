// Called from triggerObject base / 0x4bc180
// Function: FUN_1402360b0 @ 0x2360b0


void FUN_1402360b0(longlong param_1,undefined4 param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_res10 [6];
  
  *(undefined4 *)(param_1 + 0x2c0) = param_2;
  *(float *)(param_1 + 0x2c4) = param_3;
  if (0.0 < param_3) {
    FUN_1402053a0(param_1 + 0x1a8,*(undefined4 *)(param_1 + 700),param_2,0x14,param_3,param_4,
                  param_5,param_6,param_7);
    return;
  }
  local_res10[0] = 0x14;
  FUN_14024ac30(param_1 + 0x428,local_res10);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_1 + 0x2c0);
  return;
}

