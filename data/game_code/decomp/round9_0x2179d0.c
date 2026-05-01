// FUN_1402179d0 @ 0x2179d0


void FUN_1402179d0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CCPoint *this;
  float fVar4;
  CCPoint local_res20 [8];
  CCPoint local_28 [32];
  
  cVar1 = FUN_1402178c0();
  if (cVar1 != '\0') {
    cocos2d::CCPoint::CCPoint(local_28,0.0,DAT_14062381c);
    this = (CCPoint *)(**(code **)(*param_3 + 200))(param_3);
    cocos2d::CCPoint::operator+(this,local_res20);
    cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0xa00),local_res20);
    (**(code **)(*param_3 + 0x558))(param_3,param_2);
    iVar2 = (**(code **)(*param_3 + 0x660))(param_3);
    if (iVar2 == 9) {
      fVar4 = DAT_140622abc;
      if ((((*(char *)(param_2 + 0x9b9) == '\0') &&
           (fVar4 = DAT_140622ad0, *(char *)(param_2 + 0x9ba) == '\0')) &&
          (fVar4 = DAT_140622b74, *(char *)(param_2 + 0x9bb) == '\0')) &&
         (fVar4 = DAT_140622b5c, *(char *)(param_2 + 0x9be) != '\0')) {
        fVar4 = DAT_140622b74;
      }
    }
    else {
      fVar4 = DAT_140622c24;
      if (iVar2 == 0x22) {
        if (*(char *)(param_2 + 0x9b9) == '\0') {
          fVar4 = DAT_140622c8c;
          if ((*(char *)(param_2 + 0x9ba) != '\0') &&
             (fVar4 = DAT_140622b38,
             *(float *)(param_2 + 0x9f0) <= DAT_140622c24 &&
             DAT_140622c24 != *(float *)(param_2 + 0x9f0))) {
            fVar4 = DAT_140622c0c;
          }
        }
        else {
          fVar4 = DAT_140622b54;
          if (*(float *)(param_2 + 0x9f0) <= DAT_140622c24 &&
              DAT_140622c24 != *(float *)(param_2 + 0x9f0)) {
            fVar4 = DAT_140622bf4;
          }
        }
      }
    }
    *(longlong **)(param_2 + 0xa80) = param_3;
    if (*(char *)((longlong)param_3 + 0x704) != '\0') {
      FUN_140398430(param_2,param_3);
    }
    uVar3 = (**(code **)(*param_3 + 0x660))(param_3);
    FUN_14039f6a0(param_2,fVar4,uVar3,*(undefined1 *)((longlong)param_3 + 0x41c),param_3);
    (**(code **)(*param_3 + 0x660))(param_3);
    uVar3 = FUN_140232560();
    FUN_140231ff0(param_1,uVar3,0,0);
    FUN_140231ff0(param_1,9,0);
  }
  return;
}

