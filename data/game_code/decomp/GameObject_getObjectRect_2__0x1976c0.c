// GameObject_getObjectRect_2 @ 0x1976c0
// Body: 396 bytes


CCRect * FUN_1401976c0(longlong *param_1,CCRect *param_2,float param_3,float param_4)

{
  CCSize *pCVar1;
  CCPoint *pCVar2;
  float fVar3;
  float fVar4;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  CCPoint local_48 [8];
  CCSize local_40 [8];
  CCSize local_38 [48];
  
  if (*(char *)((longlong)param_1 + 0x36d) == '\0') {
    fVar4 = *(float *)((longlong)param_1 + 0x48c) * *(float *)(param_1 + 0x60);
    fVar3 = *(float *)(param_1 + 0x91) * *(float *)((longlong)param_1 + 0x2fc);
    pCVar1 = local_38;
  }
  else {
    fVar4 = (float)((uint)*(float *)((longlong)param_1 + 0x48c) & DAT_1406243c0) *
            *(float *)(param_1 + 0x60);
    fVar3 = (float)((uint)*(float *)(param_1 + 0x91) & DAT_1406243c0) *
            *(float *)((longlong)param_1 + 0x2fc);
    pCVar1 = local_40;
  }
  pCVar1 = (CCSize *)cocos2d::CCSize::CCSize(pCVar1,fVar3,fVar4);
  cocos2d::CCSize::CCSize((CCSize *)&local_res8,pCVar1);
  local_res8 = local_res8 * param_3;
  local_resc = local_resc * param_4;
  pCVar2 = (CCPoint *)FUN_1401a17d0(param_1);
  cocos2d::CCPoint::CCPoint(local_48,pCVar2);
  fVar3 = local_res8;
  if ((char)param_1[0x72] != '\0') {
    local_res8 = local_resc;
    local_resc = fVar3;
  }
  pCVar2 = (CCPoint *)(**(code **)(*param_1 + 0x4a8))(param_1,local_38);
  cocos2d::CCPoint::operator+(pCVar2,(CCPoint *)&local_res10);
  cocos2d::CCRect::CCRect
            (param_2,local_res10 - local_res8 * DAT_140622b08,
             local_res14 - local_resc * DAT_140622b08,local_res8,local_resc);
  return param_2;
}

