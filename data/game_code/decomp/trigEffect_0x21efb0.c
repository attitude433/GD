// Called from triggerObject base / 0x4bc180
// Function: FUN_14021efb0 @ 0x21efb0


void FUN_14021efb0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8)

{
  double dVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  undefined1 local_res18 [8];
  CCPoint local_res20 [8];
  undefined1 local_78 [80];
  
  (**(code **)(*param_2 + 0x4a8))(param_2,local_res18);
  (**(code **)(*param_4 + 0x4a8))(param_4,&local_res8);
  (**(code **)(*param_3 + 0x4a8))(param_3,local_res20);
  fVar8 = DAT_140623294;
  dVar1 = DAT_140622c40;
  uVar9 = 0;
  if (param_2 == param_3) {
    fVar4 = (float)(**(code **)(*param_2 + 0x158))(param_2);
  }
  else {
    cocos2d::CCPoint::operator-(local_res20,(CCPoint *)&local_res10);
    fVar7 = local_res14;
    fVar4 = local_res10;
    fVar6 = local_res10 * local_res10 + local_res14 * local_res14;
    if (fVar6 < 0.0) {
      fVar6 = sqrtf(fVar6);
    }
    else {
      fVar6 = SQRT(fVar6);
    }
    if (dVar1 <= (double)fVar6) {
      fVar4 = atan2f(fVar7,fVar4);
      fVar4 = fVar8 - fVar4 * DAT_140623200;
    }
    else {
      fVar4 = (float)(**(code **)(*param_3 + 0x158))(param_3);
    }
  }
  if (param_2 != param_4) {
    if (*(char *)(param_1 + 0x5f4) == '\0') {
      uVar5 = (**(code **)(*param_4 + 0x158))(param_4);
      fVar8 = (float)uVar5;
      uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
      goto LAB_14021f260;
    }
    if (param_5 != (longlong *)0x0) {
      pfVar2 = (float *)(**(code **)(*param_5 + 0x4a8))(param_5,local_78);
      if (local_res8 < *pfVar2) {
        pfVar2 = (float *)(**(code **)(*param_5 + 0x4a8))(param_5,local_78);
        local_res8 = *pfVar2;
      }
    }
    if (param_6 != (longlong *)0x0) {
      lVar3 = (**(code **)(*param_6 + 0x4a8))(param_6,local_78);
      if (local_resc < *(float *)(lVar3 + 4)) {
        lVar3 = (**(code **)(*param_6 + 0x4a8))(param_6,local_78);
        local_resc = *(float *)(lVar3 + 4);
      }
    }
    if (param_7 != (longlong *)0x0) {
      pfVar2 = (float *)(**(code **)(*param_7 + 0x4a8))(param_7,local_78);
      if (*pfVar2 <= local_res8 && local_res8 != *pfVar2) {
        pfVar2 = (float *)(**(code **)(*param_7 + 0x4a8))(param_7,local_78);
        local_res8 = *pfVar2;
      }
    }
    if (param_8 != (longlong *)0x0) {
      lVar3 = (**(code **)(*param_8 + 0x4a8))(param_8,local_78);
      if (*(float *)(lVar3 + 4) <= local_resc && local_resc != *(float *)(lVar3 + 4)) {
        lVar3 = (**(code **)(*param_8 + 0x4a8))(param_8,local_78);
        local_resc = *(float *)(lVar3 + 4);
      }
    }
    cocos2d::CCPoint::operator-((CCPoint *)&local_res8,(CCPoint *)&local_res10);
    fVar7 = local_res10 * local_res10 + local_res14 * local_res14;
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    if (dVar1 <= (double)fVar7) {
      fVar7 = atan2f(local_res14,local_res10);
      fVar8 = fVar8 - fVar7 * DAT_140623200;
      goto LAB_14021f260;
    }
  }
  fVar8 = 0.0;
  uVar9 = 0;
LAB_14021f260:
  FUN_14022e8b0(CONCAT44(uVar9,(fVar8 - fVar4) + *(float *)(param_1 + 0x628)),DAT_1406233a4);
  return;
}

