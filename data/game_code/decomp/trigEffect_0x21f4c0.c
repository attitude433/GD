// Called from triggerObject base / 0x4bc180
// Function: FUN_14021f4c0 @ 0x21f4c0


void FUN_14021f4c0(double param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  longlong in_RCX;
  double dVar16;
  double dVar17;
  
  dVar14 = DAT_140622e18;
  dVar13 = (double)*(float *)(param_2 + 0x740);
  if ((double)*(float *)(param_2 + 0x740) == 0.0) {
    dVar13 = DAT_140622e18;
  }
  dVar12 = (double)*(float *)(param_2 + 0x744);
  if ((double)*(float *)(param_2 + 0x744) == 0.0) {
    dVar12 = DAT_140622e18;
  }
  if (*(char *)(param_2 + 0x751) != '\0') {
    param_1 = DAT_140622e18 / dVar13;
    dVar13 = param_1;
  }
  if (*(char *)(param_2 + 0x752) != '\0') {
    param_1 = DAT_140622e18 / dVar12;
    dVar12 = param_1;
  }
  if ((*(char *)(param_2 + 0x754) != '\0') &&
     (lVar15 = FUN_140224520(param_1,*(undefined4 *)(param_2 + 0x5cc)), lVar15 != 0)) {
    dVar17 = (double)(*(float *)(lVar15 + 0x488) / *(float *)(lVar15 + 0x3dc));
    dVar16 = (double)(*(float *)(lVar15 + 0x48c) / *(float *)(lVar15 + 0x3e0));
    if (dVar17 != 0.0) {
      dVar13 = (dVar13 - dVar14) / dVar17 + dVar14;
    }
    if (dVar16 != 0.0) {
      dVar12 = (dVar12 - dVar14) / dVar16 + dVar14;
    }
  }
  lVar15 = *(longlong *)(in_RCX + 0x950);
  uVar5 = *(undefined1 *)(param_2 + 0x750);
  fVar1 = *(float *)(param_2 + 0x74c);
  fVar2 = *(float *)(param_2 + 0x748);
  uVar7 = *(undefined4 *)(param_2 + 0x698);
  uVar8 = *(undefined4 *)(param_2 + 0x39c);
  uVar6 = *(undefined1 *)(param_2 + 0x753);
  fVar3 = *(float *)(param_2 + 0x5ec);
  uVar9 = *(undefined4 *)(param_2 + 0x5e8);
  uVar10 = *(undefined4 *)(param_2 + 0x5cc);
  uVar11 = *(undefined4 *)(param_2 + 0x5c8);
  fVar4 = *(float *)(param_2 + 0x5bc);
  if (*(longlong *)(lVar15 + 0x610) == *(longlong *)(lVar15 + 0x618)) {
    FUN_14026b310(lVar15 + 0x608);
  }
  else {
    FUN_140257690(*(longlong *)(lVar15 + 0x610));
    *(longlong *)(lVar15 + 0x610) = *(longlong *)(lVar15 + 0x610) + 0x208;
  }
  lVar15 = *(longlong *)(lVar15 + 0x610);
  *(undefined1 *)(lVar15 + -0xe8) = uVar5;
  *(undefined4 *)(lVar15 + -0xb0) = uVar8;
  *(undefined4 *)(lVar15 + -0xac) = uVar7;
  *(undefined8 *)(lVar15 + -0x70) = 0x3ff0000000000000;
  *(undefined4 *)(lVar15 + -0x1e0) = uVar11;
  *(undefined4 *)(lVar15 + -0x1dc) = uVar10;
  *(undefined1 *)(lVar15 + -0xe7) = 0;
  *(undefined1 *)(lVar15 + -0xe6) = uVar6;
  *(double *)(lVar15 + -0x118) = dVar13;
  *(double *)(lVar15 + -0x110) = dVar12;
  *(double *)(lVar15 + -0x108) = (double)fVar2;
  *(double *)(lVar15 + -0x100) = (double)fVar1;
  *(double *)(lVar15 + -0x1f0) = (double)fVar4;
  *(double *)(lVar15 + -0x1f8) = (double)fVar3;
  *(undefined4 *)(lVar15 + -0x138) = 4;
  *(undefined4 *)(lVar15 + -0x1fc) = uVar9;
  *(undefined4 *)(lVar15 + -0x78) = 4;
  return;
}

