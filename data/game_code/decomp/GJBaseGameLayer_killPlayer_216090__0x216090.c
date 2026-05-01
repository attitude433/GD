// Function: FUN_140216090
// Original target: GJBaseGameLayer_killPlayer_216090 @ 0x216090
// Ghidra entry: 140216090
// Signature: undefined FUN_140216090(void)


void FUN_140216090(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  CCPoint *pCVar3;
  undefined8 uVar4;
  CCPoint local_res10 [8];
  
  iVar2 = (**(code **)(*param_2 + 0x660))(param_2);
  if ((((iVar2 == 0x1e) && (*(char *)((longlong)param_2 + 0x41c) == '\0')) &&
      (*(char *)((longlong)param_2 + 0x3ef) == '\0')) &&
     ((cVar1 = (**(code **)(param_2[0x28] + 0x20))(), cVar1 != '\0' ||
      ((param_2[0x70] != 0 &&
       (cVar1 = (**(code **)(*(longlong *)(param_2[0x70] + 0x140) + 0x20))(), cVar1 != '\0')))))) {
    iVar2 = *(int *)((longlong)param_2 + 0x6ac);
    if (iVar2 < 1) {
      FUN_1401aa260(param_2,param_1);
    }
    else {
      pCVar3 = (CCPoint *)(**(code **)(*param_2 + 200))();
      uVar4 = cocos2d::CCPoint::CCPoint(local_res10,pCVar3);
      FUN_14023feb0(param_1,iVar2,uVar4,0,DAT_140622c24);
    }
  }
  FUN_1401aa4a0(param_2,param_1);
  *(undefined1 *)((longlong)param_2 + 0x3d2) = 1;
  *(undefined1 *)((longlong)param_2 + 0x306) = 1;
  (**(code **)(param_2[0x28] + 0x28))(param_2 + 0x28,0);
  iVar2 = (**(code **)(*param_2 + 0x660))(param_2);
  if (iVar2 != 0x15) {
    return;
  }
  FUN_140231ff0(param_1,0x3d,0,0);
  return;
}

