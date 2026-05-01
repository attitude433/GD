// GameObject_getObjectTextureRect @ 0x1978f0
// Body: 558 bytes


float * FUN_1401978f0(longlong *param_1)

{
  float fVar1;
  CCRect *pCVar2;
  CCSize *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res8;
  float local_resc;
  
  if ((char)param_1[0x6a] == '\0') {
    if (*(char *)((longlong)param_1 + 0x351) != '\0') {
      fVar4 = *(float *)(param_1 + 0x69) * DAT_140622b08;
      *(undefined1 *)((longlong)param_1 + 0x351) = 0;
      fVar5 = *(float *)((longlong)param_1 + 0x34c) * DAT_140622b08;
      *(float *)(param_1 + 0x68) = (float)((double)param_1[0x77] - (double)fVar4);
      *(float *)((longlong)param_1 + 0x344) = (float)((double)param_1[0x78] - (double)fVar5);
      return (float *)(param_1 + 0x68);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x6a) = 0;
    if (*(char *)((longlong)param_1 + 0x4c4) != '\0') {
      *(undefined1 *)(param_1 + 0x6d) = 1;
      pCVar2 = (CCRect *)(**(code **)(*param_1 + 0x490))();
      cocos2d::CCRect::operator=((CCRect *)(param_1 + 0x68),pCVar2);
      return (float *)(param_1 + 0x68);
    }
    if (*(char *)((longlong)param_1 + 0x4c5) == '\0') {
      pCVar3 = (CCSize *)(**(code **)(*param_1 + 0x130))();
    }
    else {
      pCVar3 = (CCSize *)(param_1 + 0x99);
    }
    cocos2d::CCSize::CCSize((CCSize *)&local_res8,pCVar3);
    if (*(float *)(param_1 + 0x91) != DAT_140622c24) {
      local_res8 = local_res8 * (float)((uint)*(float *)(param_1 + 0x91) & DAT_1406243c0);
    }
    if (*(float *)((longlong)param_1 + 0x48c) != DAT_140622c24) {
      local_resc = local_resc * (float)((uint)*(float *)((longlong)param_1 + 0x48c) & DAT_1406243c0)
      ;
    }
    fVar4 = local_res8;
    fVar5 = local_resc;
    if ((((char)param_1[0x72] == '\0') &&
        (fVar4 = local_resc, fVar5 = local_res8, *(float *)(param_1 + 7) != 0.0)) &&
       ((float)((uint)*(float *)(param_1 + 7) & DAT_1406243c0) != DAT_1406233a4)) {
      fVar5 = local_resc * local_resc + local_res8 * local_res8;
      if (fVar5 < 0.0) {
        fVar4 = sqrtf(fVar5);
        fVar5 = fVar4;
      }
      else {
        fVar4 = SQRT(fVar5);
        fVar5 = SQRT(fVar5);
      }
    }
    fVar1 = DAT_140623164;
    fVar6 = fVar5 * DAT_140622b08;
    *(float *)(param_1 + 0x69) = fVar5;
    *(float *)((longlong)param_1 + 0x34c) = fVar4;
    fVar4 = fVar4 * DAT_140622b08;
    *(float *)(param_1 + 0x68) = (float)((double)param_1[0x77] - (double)fVar6);
    *(float *)((longlong)param_1 + 0x344) = (float)((double)param_1[0x78] - (double)fVar4);
    if (fVar1 < fVar5) {
      *(float *)((longlong)param_1 + 0x354) = fVar6 - DAT_1406230e0;
    }
  }
  return (float *)(param_1 + 0x68);
}

