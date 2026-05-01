// Called from triggerObject base / 0x4bc180
// Function: FUN_14025c9b0 @ 0x25c9b0


void FUN_14025c9b0(longlong param_1,float param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,float param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12)

{
  longlong lVar1;
  double dVar2;
  
  if (*(longlong *)(param_1 + 0x610) == *(longlong *)(param_1 + 0x618)) {
    FUN_14026b310(param_1 + 0x608);
  }
  else {
    FUN_140257690(*(longlong *)(param_1 + 0x610));
    *(longlong *)(param_1 + 0x610) = *(longlong *)(param_1 + 0x610) + 0x208;
  }
  lVar1 = *(longlong *)(param_1 + 0x610);
  *(undefined4 *)(lVar1 + -0x1dc) = param_5;
  *(undefined4 *)(lVar1 + -0xb0) = param_11;
  *(double *)(lVar1 + -0x1f0) = (double)param_3;
  *(undefined4 *)(lVar1 + -0xac) = param_12;
  *(undefined4 *)(lVar1 + -0x1fc) = param_6;
  *(undefined4 *)(lVar1 + -0x1e0) = param_4;
  dVar2 = (double)param_2;
  *(undefined4 *)(lVar1 + -0x138) = 1;
  *(undefined1 *)(lVar1 + -0x150) = param_8;
  *(undefined4 *)(lVar1 + -0x14c) = 0;
  *(double *)(lVar1 + -0x1f8) = (double)param_7;
  *(double *)(lVar1 + -0x158) = dVar2;
  if (dVar2 == 0.0) {
    *(undefined1 *)(lVar1 + -0x198) = 1;
    *(undefined1 *)(lVar1 + -0x196) = 1;
  }
  else {
    *(double *)(lVar1 + -0x70) = dVar2;
    *(undefined4 *)(lVar1 + -0x78) = 3;
  }
  return;
}

