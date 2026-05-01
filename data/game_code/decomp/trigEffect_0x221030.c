// Called from triggerObject base / 0x4bc180
// Function: FUN_140221030 @ 0x221030


void FUN_140221030(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  fVar3 = DAT_140623b00;
  fVar15 = DAT_140622c24;
  if (*(char *)(param_2 + 0x6a4) == '\0') {
    if (*(char *)(param_2 + 0x6a5) == '\0') {
      iVar13 = *(int *)(param_2 + 0x5c8);
      if (*(char *)(param_2 + 0x6a6) != '\0') {
        iVar13 = -3;
      }
    }
    else {
      iVar13 = -2;
    }
  }
  else {
    iVar13 = -1;
  }
  if (((*(char *)(param_1 + 0x309c) != '\0') && (*(int *)(param_1 + 0x880) == 0)) && (iVar13 < 0)) {
    iVar13 = 0;
  }
  switch(*(undefined4 *)(param_2 + 0x40c)) {
  case 0xb58:
    FUN_140489550(*(undefined8 *)(param_1 + 0x3178),*(undefined4 *)(param_2 + 0x780),
                  *(undefined4 *)(param_2 + 0x784),*(undefined1 *)(param_2 + 0x77b));
    if (*(char *)(param_2 + 0x77f) != '\0') {
      FUN_1404895d0(*(undefined8 *)(param_1 + 0x3178));
    }
    break;
  case 0xb59:
    FUN_140483d90(*(undefined8 *)(param_1 + 0x3178),*(undefined4 *)(param_2 + 0x740),
                  *(undefined4 *)(param_2 + 0x754),*(undefined4 *)(param_2 + 0x744),
                  *(undefined4 *)(param_2 + 0x750),*(undefined4 *)(param_2 + 0x75c),
                  *(undefined4 *)(param_2 + 0x760),*(undefined4 *)(param_2 + 0x74c),
                  *(undefined1 *)(param_2 + 0x76c),*(undefined4 *)(param_2 + 0x770),
                  *(undefined4 *)(param_2 + 0x764),*(undefined4 *)(param_2 + 0x768),iVar13,
                  *(undefined1 *)(param_2 + 0x77b),*(undefined1 *)(param_2 + 0x77c),
                  *(undefined1 *)(param_2 + 0x789),*(undefined4 *)(param_2 + 0x748),
                  *(undefined4 *)(param_2 + 0x774),*(undefined1 *)(param_2 + 0x788),
                  *(undefined4 *)(param_2 + 0x5bc),*(undefined4 *)(param_2 + 0x5e8),
                  *(undefined4 *)(param_2 + 0x5ec));
    break;
  case 0xb5a:
  case 0xb5c:
  case 0xb66:
    break;
  case 0xb5b:
    FUN_1404849f0(*(undefined8 *)(param_1 + 0x3178),*(undefined4 *)(param_2 + 0x740),
                  *(undefined4 *)(param_2 + 0x754),*(undefined1 *)(param_2 + 0x779),
                  *(undefined1 *)(param_2 + 0x778),*(undefined1 *)(param_2 + 0x77a),
                  *(undefined1 *)(param_2 + 0x76c),*(undefined4 *)(param_2 + 0x744),
                  *(undefined4 *)(param_2 + 0x750),*(undefined4 *)(param_2 + 0x75c),
                  *(undefined4 *)(param_2 + 0x760),*(undefined4 *)(param_2 + 0x74c),
                  *(undefined4 *)(param_2 + 0x764),iVar13,*(undefined1 *)(param_2 + 0x77b),
                  *(undefined1 *)(param_2 + 0x77c),*(undefined1 *)(param_2 + 0x789),
                  *(undefined4 *)(param_2 + 0x774),*(undefined1 *)(param_2 + 0x788),
                  *(undefined4 *)(param_2 + 0x5bc),*(undefined4 *)(param_2 + 0x5e8),
                  *(undefined4 *)(param_2 + 0x5ec));
    break;
  case 0xb5d:
    fVar15 = *(float *)(param_2 + 0x744);
    uVar8 = *(undefined1 *)(param_2 + 0x789);
    lVar10 = *(longlong *)(param_1 + 0x3178);
    uVar4 = *(undefined4 *)(param_2 + 0x760);
    uVar9 = *(undefined4 *)(param_2 + 0x75c);
    uVar18 = *(undefined4 *)(param_2 + 0x748);
    uVar17 = *(undefined4 *)(param_2 + 0x750);
    fVar3 = *(float *)(param_2 + 0x740);
    fVar5 = *(float *)(param_2 + 0x5bc);
    if (fVar15 != DAT_140623b00) {
      if (fVar5 <= 0.0) {
        uVar16 = 0;
      }
      else {
        if (*(char *)(lVar10 + 0x460) != '\0') {
          FUN_140481ba0(lVar10 + 0x198,0x31);
        }
        uVar16 = *(undefined4 *)(lVar10 + 0x2e8);
      }
      FUN_140489440(lVar10,uVar16,fVar15,0x31,fVar5,0,0);
    }
    fVar15 = DAT_14062299c;
    if (DAT_14062299c <= fVar3) {
      fVar15 = fVar3;
    }
    *(undefined4 *)(lVar10 + 0x2f0) = uVar17;
    *(undefined4 *)(lVar10 + 0x2f4) = uVar18;
    *(undefined4 *)(lVar10 + 0x2f8) = uVar9;
    *(undefined4 *)(lVar10 + 0x2fc) = uVar4;
    *(undefined1 *)(lVar10 + 0x300) = uVar8;
    *(float *)(lVar10 + 0x2ec) = fVar15;
    break;
  case 0xb5e:
    if (*(char *)(param_2 + 0x77b) != '\0') {
      lVar10 = *(longlong *)(param_1 + 0x3178);
      uVar8 = *(undefined1 *)(param_2 + 0x789);
      FUN_140488d40(lVar10,*(undefined4 *)(param_2 + 0x754),1,*(undefined4 *)(param_2 + 0x5bc),
                    *(undefined4 *)(param_2 + 0x5e8),*(undefined4 *)(param_2 + 0x5ec));
      *(undefined1 *)(lVar10 + 0x30c) = uVar8;
    }
    if (*(char *)(param_2 + 0x77c) != '\0') {
      lVar10 = *(longlong *)(param_1 + 0x3178);
      uVar8 = *(undefined1 *)(param_2 + 0x789);
      FUN_140488d40(lVar10,*(undefined4 *)(param_2 + 0x758),2,*(undefined4 *)(param_2 + 0x5bc),
                    *(undefined4 *)(param_2 + 0x5e8),*(undefined4 *)(param_2 + 0x5ec));
      *(undefined1 *)(lVar10 + 0x30c) = uVar8;
    }
    break;
  case 0xb5f:
    FUN_140485a00(*(undefined8 *)(param_1 + 0x3178),
                  CONCAT71(0xffffff,*(char *)(param_2 + 0x77f) == '\0'),
                  *(undefined4 *)(param_2 + 0x5bc),*(undefined4 *)(param_2 + 0x740),
                  *(undefined4 *)(param_2 + 0x744),*(undefined4 *)(param_2 + 0x754),
                  *(undefined4 *)(param_2 + 0x750),*(undefined4 *)(param_2 + 0x748),
                  *(undefined4 *)(param_2 + 0x758),*(undefined4 *)(param_2 + 0x5e8),
                  *(undefined4 *)(param_2 + 0x5ec),*(undefined1 *)(param_2 + 0x789),
                  *(undefined1 *)(param_2 + 0x77d));
    break;
  case 0xb60:
    if (*(char *)(param_2 + 0x77b) != '\0') {
      lVar10 = *(longlong *)(param_1 + 0x3178);
      uVar4 = *(undefined4 *)(param_2 + 0x5ec);
      uVar9 = *(undefined4 *)(param_2 + 0x5e8);
      bVar11 = DAT_140622c24 != *(float *)(lVar10 + 0x334);
      bVar12 = *(float *)(lVar10 + 0x334) <= DAT_140622c24;
      uVar8 = *(undefined1 *)(param_2 + 0x77e);
      uVar6 = *(undefined1 *)(param_2 + 0x789);
      fVar5 = *(float *)(param_2 + 0x754);
      fVar1 = *(float *)(param_2 + 0x5bc);
      *(undefined1 *)(lVar10 + 0x33c) = *(undefined1 *)(param_2 + 0x77d);
      if (bVar12 && bVar11) {
        *(undefined4 *)(lVar10 + 0x334) = 0x3f800000;
      }
      if (fVar5 != fVar3) {
        if (fVar1 <= 0.0) {
          uVar18 = 0;
        }
        else {
          if (*(char *)(lVar10 + 0x460) != '\0') {
            FUN_140481ba0(lVar10 + 0x198,9);
          }
          uVar18 = *(undefined4 *)(lVar10 + 0x334);
        }
        FUN_140489440(lVar10,uVar18,fVar5,9,fVar1,uVar9,uVar4);
      }
      *(undefined1 *)(lVar10 + 0x33e) = uVar6;
      *(undefined1 *)(lVar10 + 0x33f) = uVar8;
    }
    if (*(char *)(param_2 + 0x77c) != '\0') {
      lVar10 = *(longlong *)(param_1 + 0x3178);
      uVar8 = *(undefined1 *)(param_2 + 0x789);
      uVar4 = *(undefined4 *)(param_2 + 0x5ec);
      uVar9 = *(undefined4 *)(param_2 + 0x5e8);
      uVar6 = *(undefined1 *)(param_2 + 0x77e);
      fVar5 = *(float *)(param_2 + 0x758);
      fVar1 = *(float *)(param_2 + 0x5bc);
      *(undefined1 *)(lVar10 + 0x33c) = *(undefined1 *)(param_2 + 0x77d);
      if (*(float *)(lVar10 + 0x338) <= fVar15 && fVar15 != *(float *)(lVar10 + 0x338)) {
        *(undefined4 *)(lVar10 + 0x338) = 0x3f800000;
      }
      if (fVar5 != fVar3) {
        if (fVar1 <= 0.0) {
          uVar18 = 0;
        }
        else {
          if (*(char *)(lVar10 + 0x460) != '\0') {
            FUN_140481ba0(lVar10 + 0x198,10);
          }
          uVar18 = *(undefined4 *)(lVar10 + 0x338);
        }
        FUN_140489440(lVar10,uVar18,fVar5,10,fVar1,uVar9,uVar4);
      }
      *(undefined1 *)(lVar10 + 0x33e) = uVar8;
      *(undefined1 *)(lVar10 + 0x33f) = uVar6;
    }
    break;
  case 0xb61:
    FUN_1404865c0(*(undefined8 *)(param_1 + 0x3178),*(undefined4 *)(param_2 + 0x5bc),
                  *(undefined4 *)(param_2 + 0x750),*(undefined4 *)(param_2 + 0x75c),
                  *(undefined4 *)(param_2 + 0x744),iVar13,*(undefined4 *)(param_2 + 0x5cc),
                  *(undefined4 *)(param_2 + 0x764),*(undefined4 *)(param_2 + 0x768),
                  *(undefined4 *)(param_2 + 0x5e8),*(undefined4 *)(param_2 + 0x5ec),
                  *(undefined1 *)(param_2 + 0x789));
    break;
  case 0xb62:
    FUN_140486a90(*(undefined8 *)(param_1 + 0x3178),*(undefined4 *)(param_2 + 0x5bc),
                  *(undefined4 *)(param_2 + 0x750),*(undefined4 *)(param_2 + 0x744),
                  *(undefined4 *)(param_2 + 0x75c),*(undefined4 *)(param_2 + 0x5cc),
                  *(undefined4 *)(param_2 + 0x764),*(undefined4 *)(param_2 + 0x768),
                  *(undefined1 *)(param_2 + 0x77b),iVar13,*(undefined4 *)(param_2 + 0x5e8),
                  *(undefined4 *)(param_2 + 0x5ec),*(undefined1 *)(param_2 + 0x77e));
    break;
  case 0xb63:
    if (*(char *)(param_2 + 0x77b) != '\0') {
      uVar8 = *(undefined1 *)(param_2 + 0x77d);
      fVar15 = *(float *)(param_2 + 0x75c);
      bVar11 = fVar15 != DAT_140623b00;
      lVar10 = *(longlong *)(param_1 + 0x3178);
      uVar6 = *(undefined1 *)(param_2 + 0x77e);
      uVar7 = *(undefined1 *)(param_2 + 0x789);
      uVar18 = *(undefined4 *)(param_2 + 0x5e8);
      uVar4 = *(undefined4 *)(param_2 + 0x5ec);
      uVar9 = *(undefined4 *)(param_2 + 0x748);
      fVar5 = *(float *)(param_2 + 0x744);
      fVar1 = *(float *)(param_2 + 0x754);
      fVar2 = *(float *)(param_2 + 0x5bc);
      *(undefined4 *)(lVar10 + 0x240) = *(undefined4 *)(param_2 + 0x5cc);
      if (bVar11) {
        if (fVar2 <= 0.0) {
          uVar17 = 0;
        }
        else {
          if (*(char *)(lVar10 + 0x460) != '\0') {
            FUN_140481ba0(lVar10 + 0x198,0x30);
          }
          uVar17 = *(undefined4 *)(lVar10 + 0x370);
        }
        FUN_140489440(lVar10,uVar17,fVar15,0x30,fVar2,0,0);
      }
      if (fVar5 != fVar3) {
        if (fVar2 <= 0.0) {
          uVar17 = 0;
        }
        else {
          if (*(char *)(lVar10 + 0x460) != '\0') {
            FUN_140481ba0(lVar10 + 0x198,0x2f);
          }
          uVar17 = *(undefined4 *)(lVar10 + 0x23c);
        }
        FUN_140489440(lVar10,uVar17,fVar5,0x2f,fVar2,0,0);
      }
      if (fVar1 != fVar3) {
        if (fVar2 <= 0.0) {
          uVar17 = 0;
        }
        else {
          if (*(char *)(lVar10 + 0x460) != '\0') {
            FUN_140481ba0(lVar10 + 0x198,0x13);
          }
          uVar17 = *(undefined4 *)(lVar10 + 0x38c);
        }
        FUN_140489440(lVar10,uVar17,fVar1,0x13,fVar2,uVar18,uVar4);
      }
      *(undefined1 *)(lVar10 + 0x3ac) = uVar8;
      *(undefined4 *)(lVar10 + 0x39c) = uVar9;
      *(int *)(lVar10 + 0x3a4) = iVar13;
      *(undefined1 *)(lVar10 + 0x3ad) = uVar7;
      *(undefined1 *)(lVar10 + 0x244) = uVar6;
    }
    if (*(char *)(param_2 + 0x77c) != '\0') {
      uVar8 = *(undefined1 *)(param_2 + 0x77d);
      fVar15 = *(float *)(param_2 + 0x75c);
      lVar10 = *(longlong *)(param_1 + 0x3178);
      uVar6 = *(undefined1 *)(param_2 + 0x77e);
      uVar7 = *(undefined1 *)(param_2 + 0x789);
      uVar18 = *(undefined4 *)(param_2 + 0x5e8);
      uVar4 = *(undefined4 *)(param_2 + 0x5ec);
      uVar9 = *(undefined4 *)(param_2 + 0x748);
      fVar5 = *(float *)(param_2 + 0x744);
      fVar1 = *(float *)(param_2 + 0x758);
      fVar2 = *(float *)(param_2 + 0x5bc);
      *(undefined4 *)(lVar10 + 0x240) = *(undefined4 *)(param_2 + 0x5cc);
      if (fVar15 != fVar3) {
        if (fVar2 <= 0.0) {
          uVar17 = 0;
        }
        else {
          if (*(char *)(lVar10 + 0x460) != '\0') {
            FUN_140481ba0(lVar10 + 0x198,0x30);
          }
          uVar17 = *(undefined4 *)(lVar10 + 0x370);
        }
        FUN_140489440(lVar10,uVar17,fVar15,0x30,fVar2,0,0);
      }
      if (fVar5 != fVar3) {
        if (fVar2 <= 0.0) {
          uVar17 = 0;
        }
        else {
          if (*(char *)(lVar10 + 0x460) != '\0') {
            FUN_140481ba0(lVar10 + 0x198,0x2f);
          }
          uVar17 = *(undefined4 *)(lVar10 + 0x23c);
        }
        FUN_140489440(lVar10,uVar17,fVar5,0x2f,fVar2,0,0);
      }
      if (fVar1 != fVar3) {
        if (fVar2 <= 0.0) {
          uVar17 = 0;
        }
        else {
          if (*(char *)(lVar10 + 0x460) != '\0') {
            FUN_140481ba0(lVar10 + 0x198,0x14);
          }
          uVar17 = *(undefined4 *)(lVar10 + 0x390);
        }
        FUN_140489440(lVar10,uVar17,fVar1,0x14,fVar2,uVar18,uVar4);
      }
      *(undefined1 *)(lVar10 + 0x3ac) = uVar8;
      *(undefined4 *)(lVar10 + 0x3a0) = uVar9;
      *(int *)(lVar10 + 0x3a8) = iVar13;
      *(undefined1 *)(lVar10 + 0x3ad) = uVar7;
      *(undefined1 *)(lVar10 + 0x244) = uVar6;
    }
    break;
  case 0xb64:
    iVar14 = 0;
    if (*(char *)(param_2 + 0x77b) != '\0') {
      iVar14 = iVar13;
    }
    FUN_140487040(*(undefined8 *)(param_1 + 0x3178),*(undefined4 *)(param_2 + 0x5bc),
                  *(undefined4 *)(param_2 + 0x744),*(undefined4 *)(param_2 + 0x764),
                  *(undefined4 *)(param_2 + 0x768),*(undefined4 *)(param_2 + 0x754),iVar14,
                  *(undefined4 *)(param_2 + 0x5e8),*(undefined4 *)(param_2 + 0x5ec),
                  *(undefined1 *)(param_2 + 0x789));
    break;
  case 0xb65:
    if (*(char *)(param_2 + 0x77c) != '\0') {
      FUN_140487250(*(undefined8 *)(param_1 + 0x3178),*(undefined4 *)(param_2 + 0x5bc),
                    *(undefined4 *)(param_2 + 0x754),*(undefined4 *)(param_2 + 0x764),
                    *(undefined4 *)(param_2 + 0x774),*(undefined4 *)(param_2 + 0x750),
                    *(undefined1 *)(param_2 + 0x77b),iVar13,*(undefined4 *)(param_2 + 0x5e8),
                    *(undefined4 *)(param_2 + 0x5ec),*(undefined1 *)(param_2 + 0x789));
    }
    if (*(char *)(param_2 + 0x77d) != '\0') {
      FUN_140487470(*(undefined8 *)(param_1 + 0x3178),*(undefined4 *)(param_2 + 0x5bc),
                    *(undefined4 *)(param_2 + 0x758),*(undefined4 *)(param_2 + 0x768),
                    *(undefined4 *)(param_2 + 0x774),*(undefined4 *)(param_2 + 0x750),
                    *(undefined1 *)(param_2 + 0x77b),iVar13,*(undefined4 *)(param_2 + 0x5e8),
                    *(undefined4 *)(param_2 + 0x5ec),*(undefined1 *)(param_2 + 0x789));
    }
    break;
  case 0xb67:
    uVar4 = *(undefined4 *)(param_2 + 0x5ec);
    uVar9 = *(undefined4 *)(param_2 + 0x5e8);
    iVar13 = -1;
    if (*(char *)(param_2 + 0x77c) != '\0') {
      iVar13 = *(int *)(param_2 + 0x5c8);
    }
    uVar8 = *(undefined1 *)(param_2 + 0x77b);
    fVar15 = *(float *)(param_2 + 0x744);
    fVar3 = *(float *)(param_2 + 0x5bc);
    lVar10 = *(longlong *)(param_1 + 0x3178);
    if (-1 < iVar13) {
      *(int *)(lVar10 + 0x40c) = iVar13;
    }
    bVar11 = fVar15 != DAT_140623b00;
    *(undefined1 *)(lVar10 + 0x408) = uVar8;
    if (bVar11) {
      if (fVar3 <= 0.0) {
        FUN_140489440(lVar10,0,fVar15,0x20,fVar3,uVar9,uVar4);
      }
      else {
        if (*(char *)(lVar10 + 0x460) != '\0') {
          FUN_140481ba0(lVar10 + 0x198,0x20);
        }
        FUN_140489440(lVar10,*(undefined4 *)(lVar10 + 0x404),fVar15,0x20,fVar3,uVar9,uVar4);
      }
    }
    break;
  case 0xb68:
    fVar15 = *(float *)(param_2 + 0x744);
    uVar9 = *(undefined4 *)(param_2 + 0x5e8);
    lVar10 = *(longlong *)(param_1 + 0x3178);
    uVar4 = *(undefined4 *)(param_2 + 0x5ec);
    fVar3 = *(float *)(param_2 + 0x5bc);
    if (fVar15 != DAT_140623b00) {
      if (fVar3 <= 0.0) {
        FUN_140489440(lVar10,0xffffffff,fVar15,0x21,fVar3,uVar9,uVar4);
      }
      else {
        if (*(char *)(lVar10 + 0x460) != '\0') {
          FUN_140481ba0(lVar10 + 0x198,0x21);
        }
        FUN_140489440(lVar10,*(undefined4 *)(lVar10 + 0x414),fVar15,0x21,fVar3,uVar9,uVar4);
      }
    }
    break;
  case 0xb69:
    FUN_140487690(*(undefined8 *)(param_1 + 0x3178),*(undefined4 *)(param_2 + 0x5bc),
                  *(undefined4 *)(param_2 + 0x744),*(undefined4 *)(param_2 + 0x750),
                  *(undefined4 *)(param_2 + 0x754),*(undefined4 *)(param_2 + 0x758),
                  *(undefined1 *)(param_2 + 0x77b),*(undefined1 *)(param_2 + 0x77c),
                  *(undefined1 *)(param_2 + 0x77d),*(undefined4 *)(param_2 + 0x5e8),
                  *(undefined4 *)(param_2 + 0x5ec));
    break;
  case 0xb6a:
    fVar15 = *(float *)(param_2 + 0x744);
    uVar9 = *(undefined4 *)(param_2 + 0x5e8);
    lVar10 = *(longlong *)(param_1 + 0x3178);
    uVar4 = *(undefined4 *)(param_2 + 0x5ec);
    fVar3 = *(float *)(param_2 + 0x5bc);
    if (fVar15 != DAT_140623b00) {
      if (fVar3 <= 0.0) {
        FUN_140489440(lVar10,0xffffffff,fVar15,0x26,fVar3,uVar9,uVar4);
      }
      else {
        if (*(char *)(lVar10 + 0x460) != '\0') {
          FUN_140481ba0(lVar10 + 0x198,0x26);
        }
        FUN_140489440(lVar10,*(undefined4 *)(lVar10 + 0x42c),fVar15,0x26,fVar3,uVar9,uVar4);
      }
    }
    break;
  case 0xb6b:
    FUN_140487910(*(undefined8 *)(param_1 + 0x3178),*(undefined4 *)(param_2 + 0x5bc),
                  *(undefined4 *)(param_2 + 0x744),*(undefined4 *)(param_2 + 0x748),
                  *(undefined4 *)(param_2 + 0x740),*(undefined4 *)(param_2 + 0x750),
                  *(undefined4 *)(param_2 + 0x754),*(undefined4 *)(param_2 + 0x758),
                  *(undefined4 *)(param_2 + 0x5e8),*(undefined4 *)(param_2 + 0x5ec));
    break;
  case 0xb6c:
    if (*(char *)(param_2 + 0x77b) != '\0') {
      fVar15 = *(float *)(param_2 + 0x754);
      uVar9 = *(undefined4 *)(param_2 + 0x5e8);
      lVar10 = *(longlong *)(param_1 + 0x3178);
      uVar4 = *(undefined4 *)(param_2 + 0x5ec);
      fVar5 = *(float *)(param_2 + 0x5bc);
      if (fVar15 != DAT_140623b00) {
        if (fVar5 <= 0.0) {
          uVar18 = 0;
        }
        else {
          if (*(char *)(lVar10 + 0x460) != '\0') {
            FUN_140481ba0(lVar10 + 0x198,0x2e);
          }
          uVar18 = *(undefined4 *)(lVar10 + 0x44c);
        }
        FUN_140489440(lVar10,uVar18,fVar15,0x2e,fVar5,uVar9,uVar4);
      }
    }
    if (*(char *)(param_2 + 0x77c) != '\0') {
      fVar15 = *(float *)(param_2 + 0x758);
      uVar9 = *(undefined4 *)(param_2 + 0x5e8);
      lVar10 = *(longlong *)(param_1 + 0x3178);
      uVar4 = *(undefined4 *)(param_2 + 0x5ec);
      fVar5 = *(float *)(param_2 + 0x5bc);
      if (fVar15 != fVar3) {
        if (fVar5 <= 0.0) {
          FUN_140489440(lVar10,0,fVar15,0x2d,fVar5,uVar9,uVar4);
        }
        else {
          if (*(char *)(lVar10 + 0x460) != '\0') {
            FUN_140481ba0(lVar10 + 0x198,0x2d);
          }
          FUN_140489440(lVar10,*(undefined4 *)(lVar10 + 0x448),fVar15,0x2d,fVar5,uVar9,uVar4);
        }
      }
    }
    break;
  default:
    goto switchD_140221117_default;
  }
switchD_140221117_default:
  return;
}

