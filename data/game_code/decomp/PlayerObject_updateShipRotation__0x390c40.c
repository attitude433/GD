// PlayerObject_updateShipRotation @ 0x390c40
// Function: FUN_140390c40


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140390c40(longlong *param_1,float param_2)

{
  longlong lVar1;
  bool bVar2;
  CCPoint *pCVar3;
  float fVar4;
  float local_res8;
  float local_resc;
  
  if (((char)param_1[0x136] == '\0') && (*(char *)((longlong)param_1 + 0x9e4) == '\0')) {
    pCVar3 = (CCPoint *)(**(code **)(*param_1 + 200))();
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,pCVar3);
    if ((*(char *)((longlong)param_1 + 0x9ba) == '\0') &&
       (((*(char *)((longlong)param_1 + 0x9b9) == '\0' &&
         (*(char *)((longlong)param_1 + 0x9c4) == '\0')) &&
        (*(char *)((longlong)param_1 + 0x9bc) == '\0')))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
      if ((bVar2) && (*(char *)((longlong)param_1 + 0x9c2) != '\0')) {
        fVar4 = (float)((uint)(local_res8 - *(float *)(param_1 + 0x13f)) & DAT_1406243c0);
      }
      else {
        fVar4 = local_res8 - *(float *)(param_1 + 0x13f);
      }
      local_res8 = (float)((uint)(local_resc - *(float *)((longlong)param_1 + 0x9fc)) ^
                          DAT_1406243f0);
    }
    else {
      if ((bVar2) && (*(char *)((longlong)param_1 + 0x9c2) != '\0')) {
        fVar4 = (float)((uint)(local_resc - *(float *)((longlong)param_1 + 0x9fc)) & DAT_1406243c0);
      }
      else {
        fVar4 = local_resc - *(float *)((longlong)param_1 + 0x9fc);
      }
      local_res8 = local_res8 - *(float *)(param_1 + 0x13f);
    }
    if ((param_2 * DAT_140622c84 <=
         (fVar4 - 0.0) * (fVar4 - 0.0) + (local_res8 - 0.0) * (local_res8 - 0.0)) ||
       (((char)param_1[0x16e] != '\0' &&
        ((*(char *)((longlong)param_1 + 0x9b9) != '\0' ||
         (*(char *)((longlong)param_1 + 0x9ba) != '\0')))))) {
      atan2f(local_res8,fVar4);
      (**(code **)(*param_1 + 0x158))(param_1);
      lVar1 = *param_1;
      fVar4 = (float)FUN_140071ef0();
      (**(code **)(lVar1 + 0x150))(param_1,fVar4 * DAT_140623200);
    }
  }
  return;
}

