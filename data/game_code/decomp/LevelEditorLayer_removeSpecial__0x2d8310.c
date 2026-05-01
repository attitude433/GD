// LevelEditorLayer_removeSpecial @ 0x2d8310
// Body: 1505 bytes


void FUN_1402d8310(longlong param_1,CCObject *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  CCObject *pCVar6;
  longlong lVar7;
  longlong lVar8;
  CCObject *pCVar9;
  longlong *plVar10;
  CCArray *this;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_28 [16];
  
  if (param_2[0x4f2] == (CCObject)0x0) {
    iVar11 = (*(int *)(param_1 + 0x38b8) - *(int *)(param_1 + 0x38bc)) + -1;
    *(int *)(param_1 + 0x38c0) = iVar11;
    iVar4 = rand();
    iVar4 = (int)(((float)iVar4 / DAT_140623644) * DAT_14062350c);
    *(int *)(param_1 + 0x38bc) = iVar4;
    *(int *)(param_1 + 0x38b8) = iVar4 + iVar11;
  }
  iVar4 = *(int *)(param_2 + 0x40c);
  if (iVar4 == 0x2eb) {
    pCVar6 = *(CCObject **)(param_2 + 0x748);
    if (pCVar6 != (CCObject *)0x0) {
      cocos2d::CCObject::retain(pCVar6);
      lVar7 = (**(code **)(*(longlong *)pCVar6 + 0x670))(pCVar6,local_res10);
      lVar8 = (**(code **)(*(longlong *)param_2 + 0x670))(param_2,local_res18);
      *(float *)(param_2 + 0x754) = *(float *)(lVar7 + 4) - *(float *)(lVar8 + 4);
      if (*(char *)(param_1 + 0x3a88) == '\0') {
        FUN_1402d6180(param_1,pCVar6,1);
      }
      *(undefined8 *)(param_2 + 0x748) = 0;
      cocos2d::CCObject::release(pCVar6);
    }
  }
  else if (iVar4 == 0x531) {
    iVar11 = (*(int *)(param_1 + 0x3844) - *(int *)(param_1 + 0x3848)) + -1;
    *(int *)(param_1 + 0x384c) = iVar11;
    iVar4 = rand();
    iVar4 = (int)(((float)iVar4 / DAT_140623644) * DAT_14062350c);
    *(int *)(param_1 + 0x3848) = iVar4;
    *(int *)(param_1 + 0x3844) = iVar4 + iVar11;
  }
  else if (iVar4 == 0x811) {
    cocos2d::CCArray::removeObject(*(CCArray **)(param_1 + 0x3800),param_2,true);
  }
  else if (iVar4 == 0xbd8) {
    pCVar6 = cocos2d::CCDictionary::objectForKey
                       (*(CCDictionary **)(param_1 + 0x3530),(longlong)*(int *)(param_2 + 0x750));
    if (pCVar6 != (CCObject *)0x0) {
      cocos2d::CCArray::removeObject((CCArray *)pCVar6,param_2,true);
      FUN_140233c10(param_1,*(undefined4 *)(param_2 + 0x750));
    }
    cocos2d::CCArray::removeObject(*(CCArray **)(param_1 + 0x3808),param_2,true);
  }
  if (param_2[0x4ef] != (CCObject)0x0) {
    cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x718),(CCPoint *)&DAT_1406c2128);
  }
  if (param_2[0x4ec] != (CCObject)0x0) {
    lVar7 = *(longlong *)(param_1 + 0x38c8);
    cocos2d::CCArray::removeObject(*(CCArray **)(lVar7 + 0x240),param_2,true);
    *(undefined1 *)(lVar7 + 0x204) = 1;
  }
  if (*(int *)(param_2 + 0x4e8) == 1) {
    FUN_1402d8900(param_1,param_2,1);
  }
  iVar4 = *(int *)(param_2 + 0x40c);
  if (iVar4 < 0x717) {
    if (iVar4 != 0x716) {
      if (iVar4 < 0x4f5) {
        if (iVar4 == 0x4f4) goto LAB_1402d878d;
        if (iVar4 != 0x385) {
          if (iVar4 == 0x3ee) {
            this = *(CCArray **)(param_1 + 0x37d0);
          }
          else {
            if (iVar4 != 0x3ef) goto LAB_1402d87ad;
            this = *(CCArray **)(param_1 + 0x37e0);
          }
          goto LAB_1402d858c;
        }
      }
      else if ((iVar4 != 0x542) && (iVar4 != 0x543)) goto LAB_1402d87ad;
    }
LAB_1402d8585:
    this = *(CCArray **)(param_1 + 0x37f0);
  }
  else if (iVar4 < 0x815) {
    if ((iVar4 != 0x814) && (iVar4 != 0x778)) {
      if (iVar4 == 0x7e0) {
        this = *(CCArray **)(param_1 + 0x37f8);
        goto LAB_1402d858c;
      }
      if (iVar4 != 0x813) goto LAB_1402d87ad;
      goto LAB_1402d8585;
    }
LAB_1402d878d:
    this = *(CCArray **)(param_1 + 0x37e8);
  }
  else {
    if (iVar4 == 0xbc8) goto LAB_1402d8585;
    if (iVar4 == 0xe3a) {
      uVar5 = *(uint *)(param_2 + 0x39c);
      lVar7 = *(longlong *)(param_1 + 0x38c8);
      uVar13 = *(ulonglong *)(lVar7 + 0x1e0) &
               ((((ulonglong)(uVar5 >> 8 & 0xff) ^
                 ((ulonglong)(uVar5 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
                (ulonglong)(uVar5 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar5 >> 0x18)) *
               0x100000001b3;
      lVar8 = *(longlong *)(lVar7 + 0x1c8);
      plVar10 = *(longlong **)(lVar8 + 8 + uVar13 * 0x10);
      if (plVar10 == *(longlong **)(lVar7 + 0x1b8)) {
LAB_1402d8885:
        plVar10 = (longlong *)0x0;
      }
      else {
        uVar12 = *(uint *)(plVar10 + 2);
        while (uVar5 != uVar12) {
          if (plVar10 == *(longlong **)(lVar8 + uVar13 * 0x10)) goto LAB_1402d8885;
          plVar10 = (longlong *)plVar10[1];
          uVar12 = *(uint *)(plVar10 + 2);
        }
      }
      if (plVar10 != (longlong *)0x0) {
        plVar1 = *(longlong **)(lVar8 + uVar13 * 0x10);
        if (*(longlong **)(lVar8 + 8 + uVar13 * 0x10) == plVar10) {
          if (plVar1 == plVar10) {
            uVar2 = *(undefined8 *)(lVar7 + 0x1b8);
            *(undefined8 *)(lVar8 + uVar13 * 0x10) = uVar2;
            *(undefined8 *)(lVar8 + 8 + uVar13 * 0x10) = uVar2;
          }
          else {
            *(longlong *)(lVar8 + 8 + uVar13 * 0x10) = plVar10[1];
          }
        }
        else if (plVar1 == plVar10) {
          *(longlong *)(lVar8 + uVar13 * 0x10) = *plVar10;
        }
        lVar8 = *plVar10;
        *(longlong *)(lVar7 + 0x1c0) = *(longlong *)(lVar7 + 0x1c0) + -1;
        *(longlong *)plVar10[1] = lVar8;
        *(longlong *)(lVar8 + 8) = plVar10[1];
        free(plVar10);
      }
      goto LAB_1402d8598;
    }
LAB_1402d87ad:
    if (iVar4 < 0x2e9) {
      if (((iVar4 != 0x2e8) && (iVar4 != 0x1d)) && ((iVar4 != 0x1e && (iVar4 != 0x69))))
      goto LAB_1402d8598;
    }
    else if (((iVar4 != 899) && (iVar4 != 900)) && (iVar4 != 0x393)) goto LAB_1402d8598;
    this = *(CCArray **)(param_1 + 0x37d8);
  }
LAB_1402d858c:
  cocos2d::CCArray::removeObject(this,param_2,true);
LAB_1402d8598:
  if (param_2[0x4ed] != (CCObject)0x0) {
    cocos2d::CCArray::removeObject(*(CCArray **)(param_1 + 0x3858),param_2,true);
    *(undefined1 *)(param_1 + 0x3860) = 1;
  }
  if ((param_2[0x4f1] != (CCObject)0x0) ||
     (cVar3 = (**(code **)(*(longlong *)param_2 + 0x5f0))(param_2), cVar3 != '\0')) {
    cocos2d::CCArray::removeObject(*(CCArray **)(param_1 + 0x3818),param_2,true);
  }
  if (param_2[0x4ef] != (CCObject)0x0) {
    cocos2d::CCArray::removeObject(*(CCArray **)(param_1 + 0x37c8),param_2,true);
  }
  if ((*(longlong *)(param_1 + 0x3a90) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x3a90) + 0x39c) == *(int *)(param_2 + 0x39c))) {
    *(undefined8 *)(param_1 + 0x3a90) = 0;
  }
  cocos2d::CCArray::removeObject(*(CCArray **)(param_1 + 0xdb8),param_2,true);
  if ((param_2[0x49a] != (CCObject)0x0) &&
     (pCVar6 = cocos2d::CCDictionary::objectForKey
                         (*(CCDictionary **)(param_1 + 0xf68),(ulonglong)*(uint *)(param_2 + 0x39c))
     , pCVar6 != (CCObject *)0x0)) {
    uVar12 = 0;
    uVar5 = cocos2d::CCArray::count((CCArray *)pCVar6);
    if (uVar5 != 0) {
      do {
        pCVar9 = cocos2d::CCArray::objectAtIndex((CCArray *)pCVar6,uVar12);
        cocos2d::CCDictionary::removeObjectForKey
                  (*(CCDictionary **)(param_1 + 0xf60),(longlong)*(int *)(pCVar9 + 0x38));
        uVar12 = uVar12 + 1;
        uVar5 = cocos2d::CCArray::count((CCArray *)pCVar6);
      } while (uVar12 < uVar5);
    }
    cocos2d::CCDictionary::setObject
              (*(CCDictionary **)(param_1 + 0xf70),pCVar6,(ulonglong)*(uint *)(param_2 + 0x39c));
    cocos2d::CCDictionary::removeObjectForKey
              (*(CCDictionary **)(param_1 + 0xf68),(ulonglong)*(uint *)(param_2 + 0x39c));
  }
  FUN_1402240c0(param_1,param_2);
  if (*(int *)(param_2 + 0x370) != 0) {
    pCVar6 = cocos2d::CCDictionary::objectForKey
                       (*(CCDictionary **)(param_1 + 0xfc0),(longlong)*(int *)(param_2 + 0x370));
    if (pCVar6 != (CCObject *)0x0) {
      cocos2d::CCArray::removeObject((CCArray *)pCVar6,param_2,true);
    }
    local_res10[0] = *(undefined4 *)(param_2 + 0x39c);
    plVar10 = (longlong *)FUN_1401795b0(param_1 + 14000,local_28,local_res10);
    *(undefined4 *)(*plVar10 + 0x14) = *(undefined4 *)(param_2 + 0x370);
    *(undefined4 *)(param_2 + 0x370) = 0;
  }
  *(undefined1 *)(param_1 + 0x3b22) = 1;
  return;
}

