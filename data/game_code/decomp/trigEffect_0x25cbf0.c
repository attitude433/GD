// Called from triggerObject base / 0x4bc180
// Function: FUN_14025cbf0 @ 0x25cbf0


void FUN_14025cbf0(longlong param_1,float param_2,float param_3,undefined4 param_4,float param_5,
                  float param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

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
  FUN_140257700(lVar1 + -0x208);
  *(undefined4 *)(lVar1 + -0x1e0) = param_7;
  *(undefined4 *)(lVar1 + -0xb0) = param_8;
  *(undefined4 *)(lVar1 + -0xac) = param_9;
  *(undefined4 *)(lVar1 + -0x138) = 3;
  dVar2 = (double)param_2;
  if (DAT_140622fe8 <= (double)param_2) {
    dVar2 = DAT_140622fe8;
  }
  if (dVar2 < 0.0) {
    dVar2 = 0.0;
  }
  *(undefined4 *)(lVar1 + -0xc0) = param_4;
  *(double *)(lVar1 + -200) = (double)param_3;
  *(double *)(lVar1 + -0xd0) = dVar2;
  *(double *)(lVar1 + -0x1f0) = (double)param_6;
  *(double *)(lVar1 + -0xb8) = (double)param_5;
  if (dVar2 <= 0.0) {
    *(undefined1 *)(lVar1 + -0x198) = 1;
    *(undefined1 *)(lVar1 + -0x196) = 1;
  }
  return;
}

