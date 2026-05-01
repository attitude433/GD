// Function: FUN_1402222b0
// Original target: GJBaseGameLayer_updateColors_2222b0 @ 0x2222b0
// Ghidra entry: 1402222b0
// Signature: undefined FUN_1402222b0(void)


void FUN_1402222b0(longlong *param_1,float param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  CCObject *pCVar3;
  CCObject *pCVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined2 *puVar14;
  CCPoint *pCVar15;
  undefined4 *puVar16;
  longlong lVar17;
  float *pfVar18;
  longlong *plVar19;
  longlong *plVar20;
  CCArray *pCVar21;
  CCArray *pCVar22;
  CCArray *pCVar23;
  CCArray *pCVar24;
  longlong *plVar25;
  undefined2 uVar26;
  undefined1 uVar27;
  undefined8 uVar28;
  undefined1 uVar29;
  undefined8 *puVar30;
  float fVar31;
  undefined4 extraout_XMM0_Da;
  float fVar32;
  float fVar33;
  float fVar34;
  int local_res8 [2];
  longlong *local_90;
  
  if (param_1[0x62f] == 0) goto LAB_1402234b5;
  iVar12 = *(int *)(param_1[0x62f] + 0x40c);
  uVar26 = DAT_140529a98;
  uVar27 = DAT_140529a9a;
  if ((((0 < iVar12) && (uVar26 = DAT_140529aac, uVar27 = DAT_140529aae, iVar12 != 0x3f2)) &&
      (uVar26 = DAT_140529ab0, uVar27 = DAT_140529ab2, iVar12 != 0x3f3)) &&
     (lVar13 = FUN_14025bcc0(param_1[0x12a],iVar12), uVar26 = DAT_140529ab0, uVar27 = DAT_140529ab2,
     lVar13 != 0)) {
    uVar26 = *(undefined2 *)(lVar13 + 0x147);
    uVar27 = *(undefined1 *)(lVar13 + 0x149);
  }
  lVar13 = param_1[0x62f];
  *(undefined2 *)(lVar13 + 0x410) = uVar26;
  *(undefined1 *)(lVar13 + 0x412) = uVar27;
  lVar13 = param_1[0x62f];
  iVar12 = *(int *)(lVar13 + 0x240);
  if (iVar12 < 1) {
    puVar14 = (undefined2 *)(**(code **)(*(longlong *)(param_1[0x200] + 0x140) + 8))();
    *(undefined2 *)(lVar13 + 0x238) = *puVar14;
    *(undefined1 *)(lVar13 + 0x23a) = *(undefined1 *)(puVar14 + 1);
  }
  else {
    uVar27 = DAT_140529aae;
    uVar26 = DAT_140529aac;
    if (((iVar12 != 0x3f2) && (uVar27 = DAT_140529ab2, uVar26 = DAT_140529ab0, iVar12 != 0x3f3)) &&
       (lVar13 = FUN_14025bcc0(param_1[0x12a]), uVar27 = DAT_140529ab2, uVar26 = DAT_140529ab0,
       lVar13 != 0)) {
      uVar27 = *(undefined1 *)(lVar13 + 0x149);
      uVar26 = *(undefined2 *)(lVar13 + 0x147);
    }
    lVar13 = param_1[0x62f];
    *(undefined2 *)(lVar13 + 0x238) = uVar26;
    *(undefined1 *)(lVar13 + 0x23a) = uVar27;
  }
  lVar13 = param_1[0x62f];
  if ((*(char *)(lVar13 + 0x374) != '\0') && (*(int *)(lVar13 + 0x378) != 0)) {
    pCVar15 = (CCPoint *)FUN_140223550(param_1,local_res8);
    cocos2d::CCPoint::operator=((CCPoint *)(lVar13 + 0x37c),pCVar15);
  }
  lVar13 = param_1[0x62f];
  if ((*(char *)(lVar13 + 0x3d8) != '\0') && (*(int *)(lVar13 + 0x3dc) != 0)) {
    puVar16 = (undefined4 *)FUN_140223550(param_1,local_res8);
    *(undefined4 *)(lVar13 + 0x3e4) = *puVar16;
  }
  lVar13 = param_1[0x62f];
  if ((*(char *)(lVar13 + 0x3d9) != '\0') && (*(int *)(lVar13 + 0x3e0) != 0)) {
    lVar17 = FUN_140223550(param_1,local_res8);
    *(undefined4 *)(lVar13 + 1000) = *(undefined4 *)(lVar17 + 4);
  }
  if (*(int *)(param_1[0x62f] + 0x278) != 0) {
    pCVar15 = (CCPoint *)FUN_140223550(param_1,local_res8);
    lVar13 = param_1[0x62f];
    if (*(char *)(lVar13 + 0x28c) != '\0') {
      if (*(char *)(lVar13 + 0x27d) == '\0') {
        *(undefined1 *)(lVar13 + 0x28c) = 0;
      }
      cocos2d::CCPoint::operator=((CCPoint *)(lVar13 + 0x290),pCVar15);
    }
  }
  if (*(int *)(param_1[0x62f] + 0x2c8) != 0) {
    pCVar15 = (CCPoint *)FUN_140223550(param_1,local_res8);
    lVar13 = param_1[0x62f];
    if (*(char *)(lVar13 + 0x2dc) != '\0') {
      if (*(char *)(lVar13 + 0x2cd) == '\0') {
        *(undefined1 *)(lVar13 + 0x2dc) = 0;
      }
      cocos2d::CCPoint::operator=((CCPoint *)(lVar13 + 0x2e0),pCVar15);
    }
  }
  lVar13 = param_1[0x62f];
  if (*(int *)(lVar13 + 0x34c) != 0) {
    pCVar15 = (CCPoint *)FUN_140223550(param_1,local_res8);
    cocos2d::CCPoint::operator=((CCPoint *)(lVar13 + 0x35c),pCVar15);
  }
  lVar13 = param_1[0x62f];
  if (*(int *)(lVar13 + 0x3b8) != 0) {
    pCVar15 = (CCPoint *)FUN_140223550(param_1,local_res8);
    cocos2d::CCPoint::operator=((CCPoint *)(lVar13 + 0x3c0),pCVar15);
  }
  lVar13 = param_1[0x62f];
  uVar27 = 0;
  iVar10 = 0;
  iVar12 = *(int *)(lVar13 + 0x350);
  uVar26 = DAT_140529a94;
  uVar29 = DAT_140529a96;
  if (0 < iVar12) {
    uVar26 = DAT_140529aac;
    uVar29 = DAT_140529aae;
    if (((iVar12 != 0x3f2) && (uVar26 = DAT_140529ab0, uVar29 = DAT_140529ab2, iVar12 != 0x3f3)) &&
       (lVar13 = FUN_14025bcc0(param_1[0x12a]), uVar26 = DAT_140529ab0, uVar29 = DAT_140529ab2,
       lVar13 != 0)) {
      uVar26 = *(undefined2 *)(lVar13 + 0x147);
      uVar29 = *(undefined1 *)(lVar13 + 0x149);
    }
    lVar13 = param_1[0x62f];
    iVar12 = *(int *)(lVar13 + 0x350);
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    if (0x44d < iVar12) {
      iVar12 = 0x44d;
    }
    lVar17 = *(longlong *)(*(longlong *)(param_1[0x12a] + 0x2e0) + (longlong)iVar12 * 8);
    uVar27 = 0;
    if (lVar17 != 0) {
      uVar27 = *(undefined1 *)(lVar17 + 0x54);
    }
  }
  *(undefined2 *)(lVar13 + 0x356) = uVar26;
  *(undefined1 *)(lVar13 + 0x358) = uVar29;
  fVar34 = 0.0;
  fVar33 = 0.0;
  *(undefined1 *)(param_1[0x62f] + 0x355) = uVar27;
  if (*(int *)(param_1[0x62f] + 0x3a4) != 0) {
    pfVar18 = (float *)FUN_140223600(param_1,local_res8);
    fVar34 = *pfVar18;
  }
  if (*(int *)(param_1[0x62f] + 0x3a8) != 0) {
    lVar13 = FUN_140223600(param_1,local_res8);
    fVar33 = *(float *)(lVar13 + 4);
  }
  fVar6 = DAT_140622c24;
  lVar13 = param_1[0x62f];
  fVar32 = param_2 * DAT_140623210;
  fVar31 = *(float *)(lVar13 + 0x39c);
  if (DAT_140622c24 < fVar31) {
    if (0.0 < fVar32) {
      fVar31 = fVar31 / fVar32;
    }
    fVar34 = (fVar34 - *(float *)(lVar13 + 0x394)) / fVar31 + *(float *)(lVar13 + 0x394);
  }
  *(float *)(lVar13 + 0x394) = fVar34;
  lVar13 = param_1[0x62f];
  fVar34 = *(float *)(lVar13 + 0x3a0);
  if (fVar6 < fVar34) {
    if (0.0 < fVar32) {
      fVar34 = fVar34 / fVar32;
    }
    fVar33 = (fVar33 - *(float *)(lVar13 + 0x398)) / fVar34 + *(float *)(lVar13 + 0x398);
  }
  *(float *)(lVar13 + 0x398) = fVar33;
  (**(code **)(*(longlong *)param_1[0x62f] + 0x20))((longlong *)param_1[0x62f],param_2);
  FUN_1404880b0(param_1[0x62f]);
  pcVar2 = *(code **)(*(longlong *)param_1[0x62f] + 0x1e8);
  if (*(char *)(param_1[0x62f] + 0x45e) == '\0') {
    lVar13 = (*pcVar2)();
    if (lVar13 != 0) {
      pCVar21 = (CCArray *)(**(code **)(*(longlong *)param_1[0x1fb] + 0x1d0))();
      pCVar3 = (CCObject *)param_1[0x1fe];
      if (pCVar21 != (CCArray *)0x0) {
        pCVar22 = cocos2d::CCArray::create();
        cocos2d::CCArray::addObjectsFromArray(pCVar22,pCVar21);
        if (pCVar22 != (CCArray *)0x0) {
          uVar11 = **(uint **)(pCVar22 + 0x38);
          if (uVar11 != 0) {
            puVar30 = *(undefined8 **)(*(uint **)(pCVar22 + 0x38) + 4);
            puVar1 = puVar30 + ((ulonglong)uVar11 - 1);
            for (; (puVar30 <= puVar1 && (pCVar4 = (CCObject *)*puVar30, pCVar4 != (CCObject *)0x0))
                ; puVar30 = puVar30 + 1) {
              if (pCVar4 != pCVar3) {
                plVar19 = (longlong *)param_1[0x1fa];
                plVar20 = (longlong *)(**(code **)(*(longlong *)pCVar4 + 0x1e8))(pCVar4);
                if ((plVar20 != plVar19) &&
                   (iVar12 = (**(code **)(*(longlong *)pCVar4 + 0x38))(pCVar4), iVar12 != -9999)) {
                  cocos2d::CCObject::retain(pCVar4);
                  (**(code **)(*(longlong *)pCVar4 + 0x1f8))(pCVar4,0);
                  if (plVar19 != (longlong *)0x0) {
                    lVar13 = *plVar19;
                    uVar8 = (**(code **)(*(longlong *)pCVar4 + 0x60))(pCVar4);
                    (**(code **)(lVar13 + 0x1b8))(plVar19,pCVar4,uVar8);
                  }
                  cocos2d::CCObject::release(pCVar4);
                }
              }
            }
          }
        }
      }
      pCVar21 = (CCArray *)(**(code **)(*(longlong *)param_1[0x1fc] + 0x1d0))();
      pCVar3 = (CCObject *)param_1[0x1ff];
      iVar12 = 0;
      if (pCVar21 != (CCArray *)0x0) {
        pCVar22 = cocos2d::CCArray::create();
        cocos2d::CCArray::addObjectsFromArray(pCVar22,pCVar21);
        iVar12 = iVar10;
        if (pCVar22 != (CCArray *)0x0) {
          uVar11 = **(uint **)(pCVar22 + 0x38);
          if (uVar11 != 0) {
            puVar30 = *(undefined8 **)(*(uint **)(pCVar22 + 0x38) + 4);
            puVar1 = puVar30 + ((ulonglong)uVar11 - 1);
            for (; (puVar30 <= puVar1 && (pCVar4 = (CCObject *)*puVar30, pCVar4 != (CCObject *)0x0))
                ; puVar30 = puVar30 + 1) {
              if (pCVar4 != pCVar3) {
                plVar19 = (longlong *)param_1[0x1fa];
                plVar20 = (longlong *)(**(code **)(*(longlong *)pCVar4 + 0x1e8))(pCVar4);
                if ((plVar20 != plVar19) &&
                   (iVar10 = (**(code **)(*(longlong *)pCVar4 + 0x38))(pCVar4), iVar10 != -9999)) {
                  cocos2d::CCObject::retain(pCVar4);
                  (**(code **)(*(longlong *)pCVar4 + 0x1f8))(pCVar4,0);
                  if (plVar19 != (longlong *)0x0) {
                    lVar13 = *plVar19;
                    uVar8 = (**(code **)(*(longlong *)pCVar4 + 0x60))(pCVar4);
                    (**(code **)(lVar13 + 0x1b8))(plVar19,pCVar4,uVar8);
                  }
                  cocos2d::CCObject::release(pCVar4);
                }
              }
            }
          }
        }
      }
      do {
        if (iVar12 == 0) {
          plVar19 = (longlong *)param_1[0x1fe];
        }
        else {
          plVar19 = (longlong *)param_1[0x1ff];
        }
        pCVar21 = (CCArray *)(**(code **)(*plVar19 + 0x1d0))();
        if (pCVar21 != (CCArray *)0x0) {
          pCVar22 = cocos2d::CCArray::create();
          cocos2d::CCArray::addObjectsFromArray(pCVar22,pCVar21);
          if (pCVar22 != (CCArray *)0x0) {
            uVar11 = **(uint **)(pCVar22 + 0x38);
            if (uVar11 != 0) {
              puVar30 = *(undefined8 **)(*(uint **)(pCVar22 + 0x38) + 4);
              puVar1 = puVar30 + ((ulonglong)uVar11 - 1);
              for (; (puVar30 <= puVar1 &&
                     (pCVar3 = (CCObject *)*puVar30, pCVar3 != (CCObject *)0x0));
                  puVar30 = puVar30 + 1) {
                plVar19 = (longlong *)param_1[0x1fd];
                plVar20 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3);
                if ((plVar20 != plVar19) &&
                   (iVar10 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar10 != -9999)) {
                  cocos2d::CCObject::retain(pCVar3);
                  (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3,0);
                  if (plVar19 != (longlong *)0x0) {
                    lVar13 = *plVar19;
                    uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
                    (**(code **)(lVar13 + 0x1b8))(plVar19,pCVar3,uVar8);
                  }
                  cocos2d::CCObject::release(pCVar3);
                }
              }
            }
          }
        }
        if (iVar12 == -1) {
          plVar19 = (longlong *)param_1[0x1fe];
        }
        else {
          plVar19 = (longlong *)param_1[0x1ff];
        }
        pCVar21 = (CCArray *)(**(code **)(*plVar19 + 0x1d0))();
        if (pCVar21 != (CCArray *)0x0) {
          pCVar22 = cocos2d::CCArray::create();
          cocos2d::CCArray::addObjectsFromArray(pCVar22,pCVar21);
          if (pCVar22 != (CCArray *)0x0) {
            uVar11 = **(uint **)(pCVar22 + 0x38);
            if (uVar11 != 0) {
              puVar30 = *(undefined8 **)(*(uint **)(pCVar22 + 0x38) + 4);
              puVar1 = puVar30 + ((ulonglong)uVar11 - 1);
              for (; (puVar30 <= puVar1 &&
                     (pCVar3 = (CCObject *)*puVar30, pCVar3 != (CCObject *)0x0));
                  puVar30 = puVar30 + 1) {
                plVar19 = (longlong *)param_1[0x1fd];
                plVar20 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3);
                if ((plVar20 != plVar19) &&
                   (iVar10 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar10 != -9999)) {
                  cocos2d::CCObject::retain(pCVar3);
                  (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3,0);
                  if (plVar19 != (longlong *)0x0) {
                    lVar13 = *plVar19;
                    uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
                    (**(code **)(lVar13 + 0x1b8))(plVar19,pCVar3,uVar8);
                  }
                  cocos2d::CCObject::release(pCVar3);
                }
              }
            }
          }
        }
        iVar12 = iVar12 + 2;
      } while (iVar12 < 2);
      pCVar3 = (CCObject *)param_1[0x1fa];
      plVar19 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3);
      if ((plVar19 != param_1) &&
         (iVar12 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar12 != -9999)) {
        cocos2d::CCObject::retain(pCVar3);
        (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3,0);
        lVar13 = *param_1;
        uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
        (**(code **)(lVar13 + 0x1b8))(param_1,pCVar3,uVar8);
        cocos2d::CCObject::release(pCVar3);
      }
      pCVar3 = (CCObject *)param_1[0x1fb];
      plVar19 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3);
      if ((plVar19 != param_1) &&
         (iVar12 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar12 != -9999)) {
        cocos2d::CCObject::retain(pCVar3);
        (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3,0);
        lVar13 = *param_1;
        uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
        (**(code **)(lVar13 + 0x1b8))(param_1,pCVar3,uVar8);
        cocos2d::CCObject::release(pCVar3);
      }
      (**(code **)(*(longlong *)param_1[0x62f] + 0x1f8))((longlong *)param_1[0x62f],0);
    }
  }
  else {
    lVar13 = (*pcVar2)();
    if ((lVar13 == 0) || (*(char *)(param_1[0x62f] + 0x45c) != '\0')) {
      plVar19 = (longlong *)param_1[0x62f];
      pCVar3 = (CCObject *)param_1[0x1fa];
      iVar12 = *(int *)((longlong)plVar19 + 0x454);
      iVar10 = (int)plVar19[0x8b];
      plVar20 = param_1;
      if (iVar12 < 2) {
        plVar20 = plVar19;
      }
      plVar19 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3);
      if ((plVar19 != plVar20) &&
         (iVar7 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar7 != -9999)) {
        cocos2d::CCObject::retain(pCVar3);
        (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3,0);
        if (plVar20 != (longlong *)0x0) {
          lVar13 = *plVar20;
          uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
          (**(code **)(lVar13 + 0x1b8))(plVar20,pCVar3,uVar8);
        }
        cocos2d::CCObject::release(pCVar3);
      }
      plVar19 = param_1;
      if (1 < iVar12) {
        plVar19 = (longlong *)param_1[0x62f];
      }
      pCVar3 = (CCObject *)param_1[0x1fb];
      plVar20 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3);
      if ((plVar20 != plVar19) &&
         (iVar7 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar7 != -9999)) {
        cocos2d::CCObject::retain(pCVar3);
        (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3,0);
        if (plVar19 != (longlong *)0x0) {
          lVar13 = *plVar19;
          uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
          (**(code **)(lVar13 + 0x1b8))(plVar19,pCVar3,uVar8);
        }
        cocos2d::CCObject::release(pCVar3);
      }
      pCVar3 = (CCObject *)param_1[0x204];
      if (pCVar3 != (CCObject *)0x0) {
        if ((iVar12 == 2) && (1 < iVar10)) {
          plVar19 = (longlong *)param_1[0x1fb];
        }
        else {
          plVar19 = (longlong *)param_1[0x1fa];
        }
        plVar20 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3);
        if ((plVar20 != plVar19) &&
           (iVar7 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar7 != -9999)) {
          cocos2d::CCObject::retain(pCVar3);
          (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3,0);
          if (plVar19 != (longlong *)0x0) {
            lVar13 = *plVar19;
            uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
            (**(code **)(lVar13 + 0x1b8))(plVar19,pCVar3,uVar8);
          }
          cocos2d::CCObject::release(pCVar3);
        }
      }
      plVar19 = (longlong *)param_1[0x1fa];
      if (iVar12 < 2) {
        if (iVar10 < 0xd) {
LAB_1402229c0:
          plVar19 = (longlong *)param_1[0x1fb];
        }
      }
      else if (iVar10 < 0xd) {
        plVar19 = (longlong *)param_1[0x1fc];
      }
      else if (iVar12 < 0xe) goto LAB_1402229c0;
      pCVar3 = (CCObject *)param_1[0x202];
      if (((pCVar3 != (CCObject *)0x0) &&
          (plVar20 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3),
          plVar20 != plVar19)) &&
         (iVar7 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar7 != -9999)) {
        cocos2d::CCObject::retain(pCVar3);
        (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3,0);
        if (plVar19 != (longlong *)0x0) {
          lVar13 = *plVar19;
          uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
          (**(code **)(lVar13 + 0x1b8))(plVar19,pCVar3,uVar8);
        }
        cocos2d::CCObject::release(pCVar3);
      }
      pCVar3 = (CCObject *)param_1[0x203];
      if (((pCVar3 != (CCObject *)0x0) &&
          (plVar20 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3),
          plVar20 != plVar19)) &&
         (iVar7 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar7 != -9999)) {
        cocos2d::CCObject::retain(pCVar3);
        (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3,0);
        if (plVar19 != (longlong *)0x0) {
          lVar13 = *plVar19;
          uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
          (**(code **)(lVar13 + 0x1b8))(plVar19,pCVar3,uVar8);
        }
        cocos2d::CCObject::release(pCVar3);
      }
      plVar19 = (longlong *)param_1[0x1fa];
      if (iVar10 < 0xe) {
        if (iVar12 < 2) {
LAB_140222aca:
          plVar19 = (longlong *)param_1[0x1fb];
        }
        else {
          plVar19 = (longlong *)param_1[0x1fc];
        }
      }
      else if ((iVar12 - 2U < 0xd) && (0xd < iVar10)) goto LAB_140222aca;
      pCVar3 = (CCObject *)param_1[0x6ab];
      plVar20 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3);
      if ((plVar20 != plVar19) &&
         (iVar7 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar7 != -9999)) {
        cocos2d::CCObject::retain(pCVar3);
        (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3,0);
        if (plVar19 != (longlong *)0x0) {
          lVar13 = *plVar19;
          uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
          (**(code **)(lVar13 + 0x1b8))(plVar19,pCVar3,uVar8);
        }
        cocos2d::CCObject::release(pCVar3);
      }
      iVar7 = FUN_140223700();
      iVar9 = FUN_1402237b0(extraout_XMM0_Da,iVar10);
      if (*(char *)(param_1[0x62f] + 0x45d) != '\0') {
        if (iVar12 == 8) {
          iVar7 = 0x28;
        }
        if (iVar10 == 8) {
          iVar9 = 0x3c;
        }
      }
      if (iVar12 < 2) {
        local_90 = (longlong *)param_1[0x1fe];
        plVar19 = (longlong *)param_1[0x1fd];
      }
      else {
        local_90 = (longlong *)param_1[0x1ff];
        plVar19 = (longlong *)param_1[0x1fe];
      }
      pCVar21 = cocos2d::CCArray::create();
      lVar13 = (**(code **)(*(longlong *)param_1[0x1fd] + 0x1d0))();
      if (lVar13 != 0) {
        pCVar22 = (CCArray *)(**(code **)(*(longlong *)param_1[0x1fd] + 0x1d0))();
        cocos2d::CCArray::addObjectsFromArray(pCVar21,pCVar22);
      }
      pCVar22 = cocos2d::CCArray::create();
      lVar13 = (**(code **)(*(longlong *)param_1[0x1fe] + 0x1d0))();
      if (lVar13 != 0) {
        pCVar23 = (CCArray *)(**(code **)(*(longlong *)param_1[0x1fe] + 0x1d0))();
        cocos2d::CCArray::addObjectsFromArray(pCVar22,pCVar23);
      }
      pCVar23 = cocos2d::CCArray::create();
      lVar13 = (**(code **)(*(longlong *)param_1[0x1ff] + 0x1d0))();
      if (lVar13 != 0) {
        pCVar24 = (CCArray *)(**(code **)(*(longlong *)param_1[0x1ff] + 0x1d0))();
        cocos2d::CCArray::addObjectsFromArray(pCVar23,pCVar24);
      }
      local_res8[0] = 0;
      do {
        pCVar24 = pCVar21;
        if ((local_res8[0] != 0) && (pCVar24 = pCVar23, local_res8[0] == 1)) {
          pCVar24 = pCVar22;
        }
        if (pCVar24 != (CCArray *)0x0) {
          uVar11 = **(uint **)(pCVar24 + 0x38);
          if (uVar11 != 0) {
            puVar30 = *(undefined8 **)(*(uint **)(pCVar24 + 0x38) + 4);
            puVar1 = puVar30 + ((ulonglong)uVar11 - 1);
            for (; (puVar30 <= puVar1 && (pCVar3 = (CCObject *)*puVar30, pCVar3 != (CCObject *)0x0))
                ; puVar30 = puVar30 + 1) {
              iVar10 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
              if (iVar10 < iVar7) {
                plVar20 = (longlong *)param_1[0x1fd];
              }
              else {
                plVar20 = plVar19;
                if (iVar9 < iVar10) {
                  plVar20 = local_90;
                }
              }
              plVar25 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3);
              if ((plVar25 != plVar20) &&
                 (iVar10 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar10 != -9999)) {
                cocos2d::CCObject::retain(pCVar3);
                (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3,0);
                if (plVar20 != (longlong *)0x0) {
                  lVar13 = *plVar20;
                  uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
                  (**(code **)(lVar13 + 0x1b8))(plVar20,pCVar3,uVar8);
                }
                cocos2d::CCObject::release(pCVar3);
              }
            }
          }
        }
        pCVar24 = pCVar21;
        if ((local_res8[0] != -1) && (pCVar24 = pCVar23, local_res8[0] == 0)) {
          pCVar24 = pCVar22;
        }
        if (pCVar24 != (CCArray *)0x0) {
          uVar11 = **(uint **)(pCVar24 + 0x38);
          if (uVar11 != 0) {
            puVar30 = *(undefined8 **)(*(uint **)(pCVar24 + 0x38) + 4);
            puVar1 = puVar30 + ((ulonglong)uVar11 - 1);
            for (; (puVar30 <= puVar1 && (pCVar3 = (CCObject *)*puVar30, pCVar3 != (CCObject *)0x0))
                ; puVar30 = puVar30 + 1) {
              iVar10 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
              if (iVar10 < iVar7) {
                plVar20 = (longlong *)param_1[0x1fd];
              }
              else {
                plVar20 = plVar19;
                if (iVar9 < iVar10) {
                  plVar20 = local_90;
                }
              }
              plVar25 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3);
              if ((plVar25 != plVar20) &&
                 (iVar10 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar10 != -9999)) {
                cocos2d::CCObject::retain(pCVar3);
                (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3);
                if (plVar20 != (longlong *)0x0) {
                  lVar13 = *plVar20;
                  uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
                  (**(code **)(lVar13 + 0x1b8))(plVar20,pCVar3,uVar8);
                }
                cocos2d::CCObject::release(pCVar3);
              }
            }
          }
        }
        pCVar24 = pCVar21;
        if ((local_res8[0] != -2) && (pCVar24 = pCVar23, local_res8[0] == -1)) {
          pCVar24 = pCVar22;
        }
        if (pCVar24 != (CCArray *)0x0) {
          uVar11 = **(uint **)(pCVar24 + 0x38);
          if (uVar11 != 0) {
            puVar30 = *(undefined8 **)(*(uint **)(pCVar24 + 0x38) + 4);
            puVar1 = puVar30 + ((ulonglong)uVar11 - 1);
            for (; (puVar30 <= puVar1 && (pCVar3 = (CCObject *)*puVar30, pCVar3 != (CCObject *)0x0))
                ; puVar30 = puVar30 + 1) {
              iVar10 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
              if (iVar10 < iVar7) {
                plVar20 = (longlong *)param_1[0x1fd];
              }
              else {
                plVar20 = plVar19;
                if (iVar9 < iVar10) {
                  plVar20 = local_90;
                }
              }
              plVar25 = (longlong *)(**(code **)(*(longlong *)pCVar3 + 0x1e8))(pCVar3);
              if ((plVar25 != plVar20) &&
                 (iVar10 = (**(code **)(*(longlong *)pCVar3 + 0x38))(pCVar3), iVar10 != -9999)) {
                cocos2d::CCObject::retain(pCVar3);
                (**(code **)(*(longlong *)pCVar3 + 0x1f8))(pCVar3);
                if (plVar20 != (longlong *)0x0) {
                  lVar13 = *plVar20;
                  uVar8 = (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3);
                  (**(code **)(lVar13 + 0x1b8))(plVar20,pCVar3,uVar8);
                }
                cocos2d::CCObject::release(pCVar3);
              }
            }
          }
        }
        local_res8[0] = local_res8[0] + 3;
      } while (local_res8[0] < 3);
      bVar5 = 1 < iVar12;
      lVar13 = (**(code **)(*(longlong *)param_1[0x62f] + 0x1e8))();
      if (lVar13 == 0) {
        (**(code **)(*param_1 + 0x1b8))(param_1,param_1[0x62f],bVar5);
      }
      else {
        uVar11 = (**(code **)(*(longlong *)param_1[0x62f] + 0x60))();
        if (uVar11 != bVar5) {
          (**(code **)(*(longlong *)param_1[0x62f] + 0x50))((longlong *)param_1[0x62f],bVar5);
        }
      }
    }
  }
  *(undefined1 *)(param_1[0x62f] + 0x45c) = 0;
LAB_1402234b5:
  uVar11 = (**(code **)(*(longlong *)param_1[0x1fb] + 0x1d8))();
  if ((uVar11 < 2) && (iVar12 = (**(code **)(*(longlong *)param_1[0x1fe] + 0x1d8))(), iVar12 == 0))
  {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (**(code **)(*(longlong *)param_1[0x1fb] + 0x140))((longlong *)param_1[0x1fb],uVar28);
  uVar11 = (**(code **)(*(longlong *)param_1[0x1fc] + 0x1d8))();
  if ((uVar11 < 2) && (iVar12 = (**(code **)(*(longlong *)param_1[0x1ff] + 0x1d8))(), iVar12 == 0))
  {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014022353c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x1fc] + 0x140))((longlong *)param_1[0x1fc],uVar28);
  return;
}

