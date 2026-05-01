// GJBaseGameLayer_checkCollisionBlocks @ 0x218ec0


void FUN_140218ec0(longlong *param_1,longlong *param_2,longlong *param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  CCRect *pCVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  CCRect local_78 [80];
  
  iVar1 = *(int *)((longlong)param_2 + 0x39c);
  pCVar4 = (CCRect *)(**(code **)(*param_2 + 0x490))(param_2);
  cocos2d::CCRect::CCRect(local_78,pCVar4);
  fVar8 = cocos2d::CCRect::getMaxX(local_78);
  fVar9 = cocos2d::CCRect::getMinX(local_78);
  fVar10 = cocos2d::CCRect::getMaxY(local_78);
  fVar11 = cocos2d::CCRect::getMinY(local_78);
  uVar5 = (**(code **)(*param_2 + 0x570))(param_2);
  if (0 < param_4) {
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(*param_3 + lVar7 * 8);
      if (*(char *)((longlong)plVar2 + 0x28e) == '\0') {
        if ((char)plVar2[0x6d] != '\0') {
          (**(code **)(*plVar2 + 0x490))(plVar2);
        }
        if ((((*(float *)(plVar2 + 0x6b) <= fVar8) &&
             (fVar9 <= *(float *)(plVar2 + 0x6b) + *(float *)(plVar2 + 0x6c))) &&
            (*(float *)((longlong)plVar2 + 0x35c) <= fVar10)) &&
           ((fVar11 <= *(float *)((longlong)plVar2 + 0x35c) + *(float *)((longlong)plVar2 + 0x364)
            && (*(int *)((longlong)plVar2 + 0x39c) != iVar1)))) {
          if (((char)param_2[0x5d] != '\0') || ((char)plVar2[0x5d] != '\0')) {
            uVar6 = (**(code **)(*plVar2 + 0x570))(plVar2);
            cVar3 = FUN_14006e130(uVar5,uVar6,uVar6);
            if ((cVar3 == '\0') || (cVar3 = FUN_14006e130(uVar6,uVar5), cVar3 == '\0'))
            goto LAB_140219045;
          }
          (**(code **)(*param_1 + 0x440))(param_1,(int)param_2[0xd4],(int)plVar2[0xd4]);
        }
      }
LAB_140219045:
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_4);
  }
  return;
}

