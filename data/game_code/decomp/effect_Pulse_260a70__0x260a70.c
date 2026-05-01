// effect_Pulse_260a70 @ 0x260a70
// Function: FUN_140260a70


longlong FUN_140260a70(longlong param_1,int param_2,float param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  int local_res10 [6];
  undefined1 local_78 [16];
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  ushort local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  local_res10[0] = param_2;
  if (9999 < param_2) {
    local_res10[0] = 9999;
  }
  uVar2 = FUN_140260b80();
  param_1 = param_1 + 0x1b0;
  FUN_14024ac30(param_1,local_res10);
  local_54 = local_res10[0];
  local_4c = param_5;
  local_48 = param_6;
  local_58 = 0;
  local_44 = 0;
  local_50 = uVar2;
  if (param_3 <= 0.0) {
    local_50 = param_4;
  }
  local_5c = (ushort)(param_3 <= 0.0);
  local_68 = param_3;
  local_64 = uVar2;
  local_60 = param_4;
  FUN_140266bc0(param_1,local_78,local_res10,&local_68);
  plVar1 = (longlong *)FUN_140268bb0(param_1,local_78,local_res10);
  return *plVar1 + 0x14;
}

