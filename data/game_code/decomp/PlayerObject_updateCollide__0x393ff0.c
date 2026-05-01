// PlayerObject_updateCollide @ 0x393ff0


void FUN_140393ff0(longlong *param_1,int param_2,longlong param_3)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  CCDictionary *this;
  int iVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = (**(code **)(*param_1 + 0x490))();
  fVar9 = *(float *)(lVar3 + 0xc) * DAT_140622b08;
  lVar3 = (**(code **)(*param_1 + 0x490))(param_1);
  fVar8 = *(float *)(lVar3 + 8) * DAT_140622b08;
  if (param_2 == 0) {
    iVar5 = -1;
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      iVar5 = 1;
    }
    lVar3 = (**(code **)(*param_1 + 200))(param_1);
    if (param_3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_3 + 0x39c);
    }
    dVar1 = (double)param_1[299];
    dVar6 = (double)((float)iVar5 * fVar9 + *(float *)(lVar3 + 4));
    dVar7 = dVar6;
    if (dVar1 != 0.0) {
      dVar7 = dVar1;
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        if (dVar6 <= dVar1) {
          dVar7 = dVar6;
        }
      }
      else if (dVar1 <= dVar6) {
        dVar7 = dVar6;
      }
    }
    param_1[299] = (longlong)dVar7;
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 == *(int *)((longlong)param_1 + 0x5d4)) {
      return;
    }
    this = (CCDictionary *)param_1[0xb6];
    *(int *)((longlong)param_1 + 0x5d4) = iVar2;
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        pfVar4 = (float *)(**(code **)(*param_1 + 200))(param_1);
        FUN_140394200(param_1,*pfVar4 - fVar8,param_3);
        return;
      }
      if (param_2 != 3) {
        return;
      }
      pfVar4 = (float *)(**(code **)(*param_1 + 200))(param_1);
      FUN_1403942a0(param_1,fVar8 + *pfVar4,param_3);
      return;
    }
    iVar5 = -1;
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      iVar5 = 1;
    }
    lVar3 = (**(code **)(*param_1 + 200))(param_1);
    if (param_3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_3 + 0x39c);
    }
    dVar1 = (double)param_1[300];
    dVar6 = (double)(*(float *)(lVar3 + 4) - (float)iVar5 * fVar9);
    dVar7 = dVar6;
    if (dVar1 != 0.0) {
      dVar7 = dVar1;
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        if (dVar1 <= dVar6) {
          dVar7 = dVar6;
        }
      }
      else if (dVar6 <= dVar1) {
        dVar7 = dVar6;
      }
    }
    param_1[300] = (longlong)dVar7;
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 == (int)param_1[0xba]) {
      return;
    }
    this = (CCDictionary *)param_1[0xb7];
    *(int *)(param_1 + 0xba) = iVar2;
  }
  if (this != (CCDictionary *)0x0) {
    cocos2d::CCDictionary::setObject(this,(CCObject *)param_1[0xb5],(longlong)iVar2);
  }
  return;
}

