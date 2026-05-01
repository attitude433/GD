// Called from triggerObject base / 0x4bc180
// Function: FUN_14025cae0 @ 0x25cae0


void FUN_14025cae0(longlong param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x610) == *(longlong *)(param_1 + 0x618)) {
    FUN_14026b310(param_1 + 0x608);
  }
  else {
    FUN_140257690(*(longlong *)(param_1 + 0x610));
    *(longlong *)(param_1 + 0x610) = *(longlong *)(param_1 + 0x610) + 0x208;
  }
  lVar1 = *(longlong *)(param_1 + 0x610);
  FUN_140257700(lVar1 + -0x208);
  *(undefined4 *)(lVar1 + -0x1e0) = param_5;
  *(undefined4 *)(lVar1 + -0x1dc) = param_6;
  *(undefined4 *)(lVar1 + -0xb0) = param_7;
  *(undefined4 *)(lVar1 + -0xac) = param_8;
  *(undefined4 *)(lVar1 + -0x138) = 2;
  *(double *)(lVar1 + -0x148) = (double)param_2;
  *(double *)(lVar1 + -0x140) = (double)param_3;
  *(double *)(lVar1 + -0x1f0) = (double)param_4;
  if (((double)param_2 == 0.0) && ((double)param_3 == 0.0)) {
    *(undefined1 *)(lVar1 + -0x198) = 1;
    *(undefined1 *)(lVar1 + -0x196) = 1;
  }
  return;
}

