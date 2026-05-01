// PlayerObject_updatePlayerArt @ 0x398860


void FUN_140398860(longlong param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  CCPoint *pCVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  CCPoint local_res18 [8];
  
  (**(code **)(**(longlong **)(param_1 + 0x558) + 0x78))();
  (**(code **)(**(longlong **)(param_1 + 0x558) + 0x88))();
  (**(code **)(**(longlong **)(param_1 + 0x558) + 0x150))();
  (**(code **)(**(longlong **)(param_1 + 0x8b8) + 0x3d8))();
  (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x3d8))();
  (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x3d8))();
  iVar3 = 300;
  if (*(char *)(param_1 + 0x9bf) == '\0') {
    iVar3 = -300;
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,0.0,(float)iVar3);
  uVar2 = local_res10;
  if (*(char *)(param_1 + 0x9c3) != '\0') {
    local_res10 = local_res14;
    local_res14 = uVar2;
  }
  (**(code **)(**(longlong **)(param_1 + 0x8b8) + 0x400))
            (*(longlong **)(param_1 + 0x8b8),&local_res10);
  (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x400))
            (*(longlong **)(param_1 + 0x8c0),&local_res10);
  (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x400))
            (*(longlong **)(param_1 + 0x8c8),&local_res10);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,0.0,DAT_140622e58);
  uVar2 = local_res8;
  if (*(char *)(param_1 + 0x9c3) != '\0') {
    local_res8 = local_resc;
    local_resc = uVar2;
  }
  (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x3a8))
            (*(longlong **)(param_1 + 0x8c0),&local_res8);
  (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x3a8))
            (*(longlong **)(param_1 + 0x8c8),&local_res8);
  (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x3d8))();
  (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x3d8))();
  fVar1 = DAT_140623010;
  pCVar4 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_res18,DAT_140623010,DAT_140622c24);
  cocos2d::CCPoint::operator=((CCPoint *)&local_res8,pCVar4);
  uVar2 = local_res8;
  if (*(char *)(param_1 + 0x9c3) != '\0') {
    local_res8 = local_resc;
    local_resc = uVar2;
  }
  (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x3a8))
            (*(longlong **)(param_1 + 0x8d8),&local_res8);
  (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x3a8))
            (*(longlong **)(param_1 + 0x8e0),&local_res8);
  pCVar4 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_res18,fVar1,DAT_140622c24);
  cocos2d::CCPoint::operator=((CCPoint *)&local_res8,pCVar4);
  if ((*(char *)(param_1 + 0x9bd) != '\0') || (*(char *)(param_1 + 0x9be) != '\0')) {
    pCVar4 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_res18,DAT_1406230e0,0.0);
    cocos2d::CCPoint::operator=((CCPoint *)&local_res8,pCVar4);
  }
  uVar2 = local_res8;
  if (*(char *)(param_1 + 0x9c3) != '\0') {
    local_res8 = local_resc;
    local_resc = uVar2;
  }
  (**(code **)(**(longlong **)(param_1 + 0x8b8) + 0x3a8))
            (*(longlong **)(param_1 + 0x8b8),&local_res8);
  return;
}

