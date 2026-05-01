// EditorUI_createObject @ 0x10ff20
// Body: 147 bytes


longlong FUN_14010ff20(longlong param_1,undefined4 param_2,CCPoint *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  CCPoint local_res8 [8];
  
  uVar1 = cocos2d::CCPoint::CCPoint(local_res8,param_3);
  lVar2 = FUN_1402d46a0(*(undefined8 *)(param_1 + 0x500),param_2,uVar1,0);
  if (lVar2 != 0) {
    if ((*(float *)(lVar2 + 0x528) != DAT_140622c24) || (*(float *)(lVar2 + 0x52c) != DAT_140622c24)
       ) {
      FUN_140198650(lVar2,*(float *)(lVar2 + 0x528));
      FUN_1401986e0(lVar2,*(undefined4 *)(lVar2 + 0x52c));
    }
    return lVar2;
  }
  return 0;
}

