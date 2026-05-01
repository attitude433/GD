// GJBaseGameLayer_activateItemEditTrigger @ 0x234250


void FUN_140234250(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined4 uVar21;
  double dVar20;
  double _X;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  iVar15 = *(int *)(param_2 + 0x6a0);
  iVar1 = *(int *)(param_2 + 0x740);
  iVar2 = *(int *)(param_2 + 0x748);
  iVar3 = *(int *)(param_2 + 0x754);
  iVar4 = *(int *)(param_2 + 0x764);
  iVar5 = *(int *)(param_2 + 0x768);
  iVar6 = *(int *)(param_2 + 0x76c);
  iVar7 = *(int *)(param_2 + 0x694);
  iVar8 = *(int *)(param_2 + 0x5c8);
  iVar9 = *(int *)(param_2 + 0x744);
  iVar11 = *(int *)(param_2 + 0x758);
  if (*(int *)(param_2 + 0x758) < 1) {
    iVar11 = 1;
  }
  iVar12 = *(int *)(param_2 + 0x75c);
  if (*(int *)(param_2 + 0x75c) < 3) {
    iVar12 = 3;
  }
  iVar10 = *(int *)(param_2 + 0x770);
  fVar16 = (float)roundf(*(float *)(param_2 + 0x74c) * DAT_14062350c);
  fVar16 = fVar16 / DAT_14062350c;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if ((0 < iVar8) || (iVar2 == 3)) {
    if ((iVar1 == 0) || ((iVar15 < 1 && (1 < iVar1 - 3U)))) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if ((iVar9 == 0) || ((iVar7 < 1 && (1 < iVar9 - 3U)))) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if ((!bVar14) && (bVar13)) {
      bVar14 = true;
      bVar13 = false;
      iVar1 = iVar9;
      iVar15 = iVar7;
    }
    dVar18 = (double)FUN_1402341c0(param_1,iVar1,iVar15);
    uVar19 = FUN_1402341c0(param_1,iVar9,iVar7);
    uVar17 = (undefined4)uVar19;
    uVar21 = (undefined4)((ulonglong)uVar19 >> 0x20);
    dVar20 = (double)FUN_1402341c0(param_1,iVar2,iVar8);
    if (bVar13) {
      if (iVar11 == 1) {
        dVar18 = dVar18 + (double)CONCAT44(uVar21,uVar17);
      }
      else if (iVar11 == 2) {
        dVar18 = dVar18 - (double)CONCAT44(uVar21,uVar17);
      }
      else if (iVar11 == 3) {
        dVar18 = dVar18 * (double)CONCAT44(uVar21,uVar17);
      }
      else if (iVar11 == 4) {
        if ((double)CONCAT44(uVar21,uVar17) == 0.0) {
          dVar18 = 0.0;
        }
        else {
          dVar18 = dVar18 / (double)CONCAT44(uVar21,uVar17);
        }
      }
      else {
        dVar18 = 0.0;
      }
    }
    _X = (double)fVar16;
    if (bVar14) {
      if (iVar12 == 1) {
        _X = dVar18 + _X;
      }
      else if (iVar12 == 2) {
        _X = dVar18 - _X;
      }
      else if (iVar12 == 3) {
        _X = dVar18 * _X;
      }
      else if (iVar12 == 4) {
        if (_X == 0.0) {
          _X = 0.0;
        }
        else {
          _X = dVar18 / _X;
        }
      }
      else {
        _X = 0.0;
      }
    }
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        _X = (double)round(_X);
      }
      else if (iVar4 == 2) {
        _X = floor(_X);
      }
      else if (iVar4 == 3) {
        _X = ceil(_X);
      }
    }
    uVar23 = (uint)DAT_1406243d0;
    uVar24 = (uint)((ulonglong)DAT_1406243d0 >> 0x20);
    if (iVar6 != 0) {
      uVar22 = (uint)((ulonglong)_X >> 0x20);
      if (iVar6 == 1) {
        _X = (double)CONCAT44(uVar22 & uVar24,SUB84(_X,0) & uVar23);
      }
      else if (iVar6 == 2) {
        _X = (double)CONCAT44(uVar22 & uVar24 ^ DAT_1406243e0._4_4_,
                              SUB84(_X,0) & uVar23 ^ (uint)DAT_1406243e0);
      }
    }
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        _X = _X + dVar20;
      }
      else if (iVar3 == 2) {
        _X = dVar20 - _X;
      }
      else if (iVar3 == 3) {
        _X = _X * dVar20;
      }
      else if (iVar3 == 4) {
        if (_X == 0.0) {
          _X = 0.0;
        }
        else {
          _X = dVar20 / _X;
        }
      }
      else {
        _X = 0.0;
      }
    }
    if (iVar5 != 0) {
      if (iVar5 == 1) {
        _X = (double)round(_X);
      }
      else if (iVar5 == 2) {
        _X = floor(_X);
      }
      else if (iVar5 == 3) {
        _X = ceil(_X);
      }
    }
    if (iVar10 != 0) {
      uVar22 = (uint)((ulonglong)_X >> 0x20);
      if (iVar10 == 1) {
        _X = (double)CONCAT44(uVar22 & uVar24,SUB84(_X,0) & uVar23);
      }
      else if (iVar10 == 2) {
        _X = (double)CONCAT44(uVar22 & uVar24 ^ DAT_1406243e0._4_4_,
                              SUB84(_X,0) & uVar23 ^ (uint)DAT_1406243e0);
      }
    }
    if (iVar2 == 1) {
      FUN_1402624b0(*(undefined8 *)(param_1 + 0x950),iVar8,(int)_X);
      FUN_140233ec0(param_1,iVar8,(int)_X);
    }
    else if (iVar2 == 2) {
      FUN_1402631b0(*(undefined8 *)(param_1 + 0x950),iVar8,SUB84(_X,0));
    }
    else if (iVar2 == 3) {
      *(undefined1 *)(param_1 + 0x868) = 1;
      *(int *)(param_1 + 0x864) = (int)_X;
    }
  }
  return;
}

