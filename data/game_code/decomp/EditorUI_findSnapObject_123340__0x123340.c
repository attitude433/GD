// EditorUI_findSnapObject_123340 @ 0x123340
// Body: 999 bytes


void FUN_140123340(longlong param_1,CCArray *param_2,float param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  CCObject *pCVar4;
  undefined8 uVar5;
  CCPoint *pCVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res10;
  float local_res14;
  float local_res20;
  float local_res24;
  CCPoint local_c8 [8];
  CCPoint local_c0 [8];
  undefined1 local_b8 [8];
  CCPoint local_b0 [8];
  CCPoint local_a8 [8];
  CCPoint local_a0 [120];
  
  if ((param_2 == (CCArray *)0x0) ||
     (uVar2 = cocos2d::CCArray::count(param_2), fVar12 = DAT_140623508, uVar2 == 0)) {
    if ((*(longlong **)(param_1 + 0x538) != (longlong *)0x0) &&
       (fVar12 = (float)(**(code **)(**(longlong **)(param_1 + 0x538) + 0x158))(),
       (int)fVar12 == ((int)fVar12 / 0x5a) * 0x5a)) {
      plVar1 = *(longlong **)(param_1 + 0x538);
      uVar5 = FUN_1401269a0(param_1,local_a0,*(undefined4 *)((longlong)plVar1 + 0x40c));
      FUN_1400649a0(local_c0,plVar1,uVar5);
      pCVar6 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
      cocos2d::CCPoint::operator-(pCVar6,local_c8);
      uVar5 = cocos2d::CCPoint::CCPoint(local_a8,(CCPoint *)&DAT_1406c1aa8);
      FUN_140122660(param_1,&local_res10,local_c8,*(undefined8 *)(param_1 + 0x538),uVar5);
      pfVar7 = (float *)cocos2d::CCPoint::CCPoint(local_a0,(CCPoint *)&local_res10);
      fVar12 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x500) + 0x38c8) + 0x27c);
      fVar13 = floorf(*pfVar7 / fVar12);
      fVar13 = fVar13 + DAT_140622b08;
      fVar11 = floorf(pfVar7[1] / fVar12);
      uVar5 = cocos2d::CCPoint::CCPoint(local_a8,fVar13 * fVar12,(fVar11 + DAT_140622b08) * fVar12);
      FUN_140120110(param_1,&local_res20,uVar5);
      if ((param_3 <= 0.0) ||
         (((float)((uint)(local_res20 - local_res10) & DAT_1406243c0) <= param_3 &&
          ((float)((uint)(local_res24 - local_res14) & DAT_1406243c0) <= param_3)))) {
        *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_1 + 0x538);
      }
    }
  }
  else {
    uVar8 = 0;
    uVar3 = cocos2d::CCArray::count(param_2);
    uVar2 = DAT_1406243c0;
    fVar13 = DAT_140622b08;
    if (uVar3 != 0) {
      do {
        pCVar4 = cocos2d::CCArray::objectAtIndex(param_2,uVar8);
        FUN_1401905f0(pCVar4);
        uVar5 = FUN_1401269a0(param_1,local_b8,*(undefined4 *)(pCVar4 + 0x40c));
        FUN_1400649a0(local_c8,pCVar4,uVar5);
        pCVar6 = (CCPoint *)(**(code **)(*(longlong *)pCVar4 + 200))(pCVar4);
        cocos2d::CCPoint::operator-(pCVar6,local_c0);
        uVar5 = cocos2d::CCPoint::CCPoint(local_b0,(CCPoint *)&DAT_1406c1aa8);
        FUN_140122660(param_1,&local_res10,local_c0,pCVar4,uVar5);
        pfVar7 = (float *)cocos2d::CCPoint::CCPoint(local_a8,(CCPoint *)&local_res10);
        fVar11 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x500) + 0x38c8) + 0x27c);
        fVar9 = floorf(*pfVar7 / fVar11);
        fVar10 = floorf(pfVar7[1] / fVar11);
        uVar5 = cocos2d::CCPoint::CCPoint
                          (local_a0,(fVar9 + fVar13) * fVar11,(fVar10 + fVar13) * fVar11);
        FUN_140120110(param_1,&local_res20,uVar5);
        fVar11 = (float)((uint)(local_res20 - local_res10) & uVar2);
        fVar9 = (float)((uint)(local_res24 - local_res14) & uVar2);
        if (((param_3 <= 0.0) || ((fVar11 <= param_3 && (fVar9 <= param_3)))) &&
           (fVar9 = fVar9 + fVar11, fVar9 < fVar12)) {
          *(CCObject **)(param_1 + 0x540) = pCVar4;
          fVar11 = (float)(**(code **)(*(longlong *)pCVar4 + 0x158))(pCVar4);
          if ((int)fVar11 == ((int)fVar11 / 0x5a) * 0x5a) {
            fVar12 = fVar9;
          }
        }
        if (fVar12 == 0.0) {
          return;
        }
        uVar8 = uVar8 + 1;
        uVar3 = cocos2d::CCArray::count(param_2);
      } while (uVar8 < uVar3);
    }
  }
  return;
}

