// Function: FUN_140398c00
// Original target: PlayerObject_ringJump @ 0x398c00
// Ghidra entry: 140398c00
// Signature: undefined FUN_140398c00(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140398c00(longlong *param_1,CCObject *param_2,undefined1 param_3)

{
  uint uVar1;
  CCObject CVar2;
  uint uVar3;
  CCObject *pCVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  CCPoint *pCVar12;
  undefined8 uVar13;
  undefined2 *puVar14;
  CCNode *pCVar15;
  longlong lVar16;
  longlong *plVar17;
  void *pvVar18;
  undefined2 uVar19;
  ulonglong uVar20;
  CCNode CVar21;
  float fVar22;
  undefined8 extraout_XMM0_Qa;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined4 local_res18 [4];
  undefined8 in_stack_ffffffffffffff38;
  void *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  void *local_90;
  ulonglong uStack_88;
  longlong local_80;
  undefined8 local_78;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  if ((char)param_1[0x138] != '\0') {
    return;
  }
  if (param_2 == (CCObject *)0x0) {
    return;
  }
  uVar3 = *(uint *)(param_2 + 0x39c);
  uVar20 = param_1[0x10f] &
           ((((ulonglong)(uVar3 >> 8) & 0xff ^
             ((ulonglong)uVar3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
            (ulonglong)(uVar3 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar3 >> 0x18)) *
           0x100000001b3;
  lVar16 = *(longlong *)(param_1[0x10c] + 8 + uVar20 * 0x10);
  if (lVar16 == param_1[0x10a]) {
LAB_140398ce4:
    lVar16 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar16 + 0x10);
    while (uVar3 != uVar1) {
      if (lVar16 == *(longlong *)(param_1[0x10c] + uVar20 * 0x10)) goto LAB_140398ce4;
      lVar16 = *(longlong *)(lVar16 + 8);
      uVar1 = *(uint *)(lVar16 + 0x10);
    }
  }
  if (lVar16 != 0) {
    return;
  }
  CVar2 = param_2[0x41c];
  iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
  iVar9 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
  if ((iVar8 == 0x24) || (iVar9 == 0x2e)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (*(char *)((longlong)param_1 + 0x98a) == '\0') {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x9e4) != '\0') {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x989) == '\0') {
    return;
  }
  if (((*(char *)((longlong)param_1 + 0x98b) != '\0') || (!bVar5)) &&
     ((*(char *)((longlong)param_1 + 0x98c) != '\0' || (iVar8 != 0x24)))) {
    if (*(char *)((longlong)param_1 + 0x98d) != '\0') {
      return;
    }
    if (iVar9 != 0x2e) {
      return;
    }
  }
  if (param_2[0x704] != (CCObject)0x0) {
    FUN_140398430(param_1,param_2);
  }
  *(undefined1 *)(param_1 + 0x108) = 1;
  local_res18[0] = *(undefined4 *)(param_2 + 0x39c);
  FUN_140060d70(param_1 + 0x109,&local_a8,local_res18);
  if (param_1[0x184] != 0) {
    FUN_140231ff0(param_1[0x184],8,0,*(undefined4 *)((longlong)param_1 + 0x39c));
    uVar10 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
    uVar10 = FUN_140232560(extraout_XMM0_Qa,uVar10);
    if (param_1[0x184] != 0) {
      FUN_140231ff0(param_1[0x184],uVar10,0,*(undefined4 *)((longlong)param_1 + 0x39c));
    }
  }
  if (iVar8 == 0x24) {
    *(undefined1 *)((longlong)param_1 + 0x98c) = 1;
  }
  else if (iVar9 == 0x2e) {
    *(undefined1 *)((longlong)param_1 + 0x98d) = 1;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x98b) = 1;
  }
  cocos2d::CCArray::removeObject((CCArray *)param_1[0x147],param_2,true);
  if (bVar5) {
    *(undefined1 *)(param_1 + 0xfc) = 1;
  }
  iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
  if (iVar8 == 0x24) {
    plVar17 = (longlong *)(param_1[0x184] + 0x198);
    if (param_2[0x741] == (CCObject)0x0) {
      local_90 = (void *)0x0;
      uStack_88 = 0;
      local_80 = 0;
      (**(code **)*plVar17)
                (plVar17,*(undefined4 *)(param_2 + 0x5c8),param_2[0x675],&local_90,
                 CONCAT44(uVar11,*(undefined4 *)(param_2 + 0x39c)),*(undefined4 *)(param_2 + 0x698))
      ;
      if (local_90 != (void *)0x0) {
        pvVar18 = local_90;
        if ((0xfff < (ulonglong)((local_80 - (longlong)local_90 >> 2) * 4)) &&
           (pvVar18 = *(void **)((longlong)local_90 + -8),
           0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar18);
        local_90 = (void *)0x0;
        uStack_88 = 0;
        local_80 = 0;
      }
    }
    else {
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      (*(code *)((undefined8 *)*plVar17)[1])
                (plVar17,*(undefined4 *)(param_2 + 0x5c8),0,0,&local_a8,
                 *(undefined4 *)(param_2 + 0x39c),*(undefined4 *)(param_2 + 0x698));
      if (local_a8 != (void *)0x0) {
        pvVar18 = local_a8;
        if ((0xfff < (ulonglong)((local_98 - (longlong)local_a8 >> 2) * 4)) &&
           (pvVar18 = *(void **)((longlong)local_a8 + -8),
           0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar18);
        local_a8 = (void *)0x0;
        uStack_a0 = 0;
        local_98 = 0;
      }
    }
    if (*(char *)((longlong)param_1 + 0xc45) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x986) = 0;
    }
    goto LAB_1403999a2;
  }
  iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
  if (iVar8 == 0x2e) {
    FUN_14020fdb0(param_1[0x184],param_2,param_1);
    *(undefined1 *)((longlong)param_1 + 0x986) = 0;
    goto LAB_1403999a2;
  }
  iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
  if (iVar8 == 0x2b) {
    if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
LAB_140399017:
      cVar7 = *(char *)((longlong)param_1 + 0x9bf);
      cVar6 = FUN_1401a1910(param_2);
      if (cVar6 != cVar7) {
LAB_14039902a:
        FUN_14039a1d0(param_1,cVar7 == '\0',1);
      }
    }
    else {
      cVar7 = *(char *)((longlong)param_1 + 0x9bf);
      cVar6 = FUN_1401a19d0(param_2);
      if (cVar6 != cVar7) goto LAB_14039902a;
      if (*(char *)((longlong)param_1 + 0x9c3) == '\0') goto LAB_140399017;
    }
    FUN_140394340(param_1);
    goto LAB_1403999a2;
  }
  iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
  if (iVar8 == 0x25) {
    lVar16 = param_1[0x184];
    if (lVar16 != 0) {
      uVar11 = 0x29;
LAB_1403991c0:
      FUN_140231ff0(lVar16,uVar11,0,*(undefined4 *)((longlong)param_1 + 0x39c));
    }
  }
  else {
    iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
    if (iVar8 != 0x26) {
      iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
      *(undefined1 *)((longlong)param_1 + 0x986) = 0;
      if (iVar8 == 0x20) {
        iVar9 = -1;
        iVar8 = -1;
        if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
          iVar8 = 1;
        }
        fVar22 = (float)iVar8 * DAT_140623880;
        if ((((*(char *)((longlong)param_1 + 0x9b9) == '\0') &&
             (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
            (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
           (*(char *)((longlong)param_1 + 0x9c4) == '\0')) {
          if ((*(char *)((longlong)param_1 + 0x9bd) == '\0') &&
             (*(char *)((longlong)param_1 + 0x9be) != '\0')) {
            fVar22 = fVar22 * DAT_140622c54;
          }
        }
        else {
          if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
            iVar9 = 1;
          }
          fVar22 = (float)iVar9 * DAT_140623864;
          if (*(char *)((longlong)param_1 + 0x9ba) != '\0') {
            fVar22 = fVar22 * DAT_140622ba4;
          }
        }
        FUN_140388d10(param_1,(double)fVar22);
        if (*(char *)((longlong)param_1 + 0x9bb) == '\0') {
          if ((*(char *)((longlong)param_1 + 0xa2a) == '\0') &&
             (*(char *)((longlong)param_1 + 0x9e4) == '\0')) {
            *(undefined2 *)(param_1 + 0xe5) = 0;
            *(undefined1 *)(param_1 + 0xcd) = 0;
            *(undefined4 *)(param_1 + 0xe4) = 0;
            FUN_14038d220(param_1,0,DAT_140622c24);
          }
        }
        else {
          FUN_14038d480(param_1);
        }
        FUN_1403a0090(param_1);
        *(undefined1 *)((longlong)param_1 + 0xa89) = 1;
        *(undefined1 *)((longlong)param_1 + 0x952) = 1;
        if ((*(char *)((longlong)param_1 + 0x9bb) != '\0') ||
           (*(char *)((longlong)param_1 + 0x9c4) != '\0')) {
          *(undefined1 *)((longlong)param_1 + 0x985) = 0;
        }
        goto LAB_1403999a2;
      }
      *(undefined1 *)((longlong)param_1 + 0xa1c) = 1;
      *(undefined1 *)((longlong)param_1 + 0xa0c) = 0;
      *(undefined1 *)((longlong)param_1 + 0x9c1) = 0;
      fVar22 = DAT_140622c24;
      fVar25 = DAT_140622c24;
      if (*(float *)(param_1 + 0x13e) != DAT_140622c24) {
        fVar25 = DAT_140622ba4;
      }
      fVar24 = (float)(double)param_1[0xf8];
      iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
      if (iVar8 == 0xd) {
        fVar24 = fVar24 * DAT_140622ba4;
      }
      else {
        iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
        if (iVar8 == 0x1d) {
          if (*(char *)((longlong)param_1 + 0x9b9) != '\0') {
            fVar24 = fVar24 * DAT_140622b74;
          }
        }
        else {
          iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
          if (iVar8 == 0xc) {
            if (*(char *)((longlong)param_1 + 0x9b9) == '\0') {
              if (*(char *)((longlong)param_1 + 0x9ba) == '\0') {
                if (*(char *)((longlong)param_1 + 0x9bb) == '\0') {
                  fVar24 = fVar24 * DAT_140622b80;
                }
                else {
                  fVar24 = fVar24 * DAT_140622b94;
                }
              }
              else {
                fVar24 = fVar24 * DAT_140622ad4;
              }
            }
            else {
              fVar24 = fVar24 * _DAT_140622ac4;
            }
          }
          else {
            iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
            if (iVar8 == 0x23) {
              if (*(char *)((longlong)param_1 + 0x9b9) == '\0') {
                if (*(char *)((longlong)param_1 + 0x9ba) == '\0') {
                  if (*(char *)((longlong)param_1 + 0x9bb) == '\0') {
                    if (*(char *)((longlong)param_1 + 0x9bd) == '\0') {
                      if (*(char *)((longlong)param_1 + 0x9be) == '\0') {
                        fVar24 = fVar24 * _DAT_140622cd4;
                      }
                      else {
                        fVar24 = fVar24 * _DAT_140622cc4;
                      }
                    }
                    else {
                      fVar24 = fVar24 * _DAT_140622c9c;
                    }
                  }
                  else {
                    fVar24 = fVar24 * _DAT_140622cc4;
                  }
                }
                else if (*(float *)(param_1 + 0x13e) == fVar22) {
                  fVar24 = fVar24 * _DAT_140622c2c;
                }
                else {
                  fVar24 = fVar24 * _DAT_140622cd0;
                }
              }
              else if (*(float *)(param_1 + 0x13e) != fVar22) {
                fVar24 = fVar24 * DAT_140622cd8;
              }
            }
            else if (*(char *)((longlong)param_1 + 0x9bd) != '\0') {
              fVar24 = fVar24 * DAT_140622bd8;
            }
          }
        }
      }
      iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
      if (iVar8 == 0x1d) {
        if (*(char *)((longlong)param_1 + 0x7e4) == '\0') {
          if (DAT_1406c2ed8 == (longlong *)0x0) {
            uVar13 = FUN_1404d0770(0x668);
            DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar13);
            (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
          }
          if (DAT_1406c2ed8[0x42] == 0) {
            FUN_14039a1d0(param_1,*(char *)((longlong)param_1 + 0x9bf) == '\0',1);
          }
          else {
            FUN_140212b00(DAT_1406c2ed8[0x42],param_1,*(char *)((longlong)param_1 + 0x9bf) == '\0',1
                         );
          }
        }
        else {
          if (DAT_1406c2ed8 == (longlong *)0x0) {
            uVar13 = FUN_1404d0770(0x668);
            DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar13);
            (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
          }
          FUN_140212b00(DAT_1406c2ed8[0x41],param_1,*(char *)((longlong)param_1 + 0x9bf) == '\0',1);
          if (CVar2 == (CCObject)0x0) {
            if (DAT_1406c2ed8 == (longlong *)0x0) {
              uVar13 = FUN_1404d0770(0x668);
              DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar13);
              (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
            }
            (**(code **)(*(longlong *)DAT_1406c2ed8[0x41] + 0x500))
                      ((longlong *)DAT_1406c2ed8[0x41],*(undefined1 *)((longlong)param_1 + 0x9bf));
          }
        }
      }
      iVar8 = -1;
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        iVar8 = 1;
      }
      FUN_140388d10(param_1,(double)((float)iVar8 * fVar24 * fVar25));
      if (*(char *)((longlong)param_1 + 0x9bb) == '\0') {
        if ((*(char *)((longlong)param_1 + 0xa2a) == '\0') &&
           (*(char *)((longlong)param_1 + 0x9e4) == '\0')) {
          *(undefined2 *)(param_1 + 0xe5) = 0;
          *(undefined1 *)(param_1 + 0xcd) = 0;
          *(undefined4 *)(param_1 + 0xe4) = 0;
          FUN_14038d220(param_1,0,fVar22);
        }
      }
      else {
        FUN_14038d480(param_1);
      }
      if (((char)param_1[0x16e] != '\0') && ((char)param_1[0xe5] == '\0')) {
        FUN_14038cc80(param_1,fVar22);
      }
      pCVar12 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
      cocos2d::CCPoint::operator=((CCPoint *)((longlong)param_1 + 0xa2c),pCVar12);
      FUN_1403a0090(param_1);
      *(undefined1 *)((longlong)param_1 + 0xa89) = 1;
      if (*(char *)((longlong)param_1 + 0x9bb) == '\0') {
        if (*(char *)((longlong)param_1 + 0x9c4) != '\0') {
          dVar23 = (double)param_1[0x134] * _DAT_140622db0;
          goto LAB_1403995f9;
        }
        if (*(char *)((longlong)param_1 + 0x9be) != '\0') goto LAB_1403995e9;
      }
      else {
LAB_1403995e9:
        dVar23 = (double)param_1[0x134] * DAT_140622dd0;
LAB_1403995f9:
        param_1[0x134] = (longlong)dVar23;
        *(undefined1 *)((longlong)param_1 + 0x985) = 0;
      }
      iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
      if (iVar8 == 0xd) {
        if (*(char *)((longlong)param_1 + 0x7e4) == '\0') {
          if (DAT_1406c2ed8 == (longlong *)0x0) {
            uVar13 = FUN_1404d0770(0x668);
            DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar13);
            (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
          }
          if (DAT_1406c2ed8[0x42] == 0) {
            FUN_14039a1d0(param_1,*(char *)((longlong)param_1 + 0x9bf) == '\0',1);
          }
          else {
            FUN_140212b00(DAT_1406c2ed8[0x42],param_1,*(char *)((longlong)param_1 + 0x9bf) == '\0',1
                         );
          }
        }
        else {
          if (DAT_1406c2ed8 == (longlong *)0x0) {
            uVar13 = FUN_1404d0770(0x668);
            DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar13);
            (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
          }
          FUN_140212b00(DAT_1406c2ed8[0x41],param_1,*(char *)((longlong)param_1 + 0x9bf) == '\0',1);
          if (CVar2 == (CCObject)0x0) {
            if (DAT_1406c2ed8 == (longlong *)0x0) {
              uVar13 = FUN_1404d0770(0x668);
              DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar13);
              (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
            }
            (**(code **)(*(longlong *)DAT_1406c2ed8[0x41] + 0x500))
                      ((longlong *)DAT_1406c2ed8[0x41],*(undefined1 *)((longlong)param_1 + 0x9bf));
          }
        }
      }
      if (*(char *)((longlong)param_1 + 0x9bd) == '\0') {
        if (*(char *)((longlong)param_1 + 0x9be) != '\0') {
          pCVar15 = (CCNode *)param_1[0x115];
          cocos2d::CCNode::stopAllActions(*(CCNode **)(pCVar15 + 0x2b0));
          cocos2d::CCNode::stopActionByTag(pCVar15,1);
          FUN_14003cce0(pCVar15 + 0x278,&DAT_140518980,0);
          lVar16 = *(longlong *)(param_1[0x115] + 0x298);
          FUN_140074450(lVar16);
          pCVar15 = *(CCNode **)(*(longlong *)(lVar16 + 0x140) + 0x2b0);
          if (pCVar15 != (CCNode *)0x0) {
            cocos2d::CCNode::stopAllActions(pCVar15);
          }
          pCVar15 = *(CCNode **)(*(longlong *)(lVar16 + 0x140) + 0x2a8);
          if (pCVar15 != (CCNode *)0x0) {
            cocos2d::CCNode::stopAllActions(pCVar15);
          }
          uStack_88 = 0;
          local_80 = 4;
          local_78 = 0xf;
          local_90 = (void *)(ulonglong)DAT_1405c7a70;
          FUN_140040d60(param_1[0x115],&local_90,DAT_1406229f4);
        }
      }
      else {
        local_80 = 10;
        local_78 = 0xf;
        local_90 = (void *)s_jump_start_1405c7a78._0_8_;
        uStack_88 = (ulonglong)(ushort)s_jump_start_1405c7a78._8_2_;
        FUN_140040cf0(param_1[0x114],&local_90);
      }
      iVar8 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
      if (iVar8 == 0x23) {
        *(undefined1 *)((longlong)param_1 + 0x952) = 1;
      }
      goto LAB_1403999a2;
    }
    if (*(char *)((longlong)param_1 + 0x7e4) == '\0') {
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        uVar13 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar13);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      if (DAT_1406c2ed8[0x42] == 0) {
        FUN_14039a1d0(param_1,*(char *)((longlong)param_1 + 0x9bf) == '\0',1);
      }
      else {
        FUN_140212b00(DAT_1406c2ed8[0x42],param_1,*(char *)((longlong)param_1 + 0x9bf) == '\0',1);
      }
    }
    else {
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        uVar13 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar13);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      FUN_140212b00(DAT_1406c2ed8[0x41],param_1,*(char *)((longlong)param_1 + 0x9bf) == '\0',1);
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        uVar13 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar13);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      (**(code **)(*(longlong *)DAT_1406c2ed8[0x41] + 0x500))
                ((longlong *)DAT_1406c2ed8[0x41],*(undefined1 *)((longlong)param_1 + 0x9bf));
    }
    lVar16 = param_1[0x184];
    if (lVar16 != 0) {
      uVar11 = 0x2a;
      goto LAB_1403991c0;
    }
  }
  FUN_140395910(param_1,param_2);
LAB_1403999a2:
  if (*(char *)((longlong)param_1 + 0x7e1) == '\0') {
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      uVar13 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar13);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    if ((((*(char *)((longlong)DAT_1406c2ed8 + 0x395) == '\0') &&
         (cVar7 = (**(code **)(*(longlong *)param_2 + 0x568))(param_2), cVar7 == '\0')) &&
        (*(char *)((longlong)param_1 + 0x7e4) != '\0')) &&
       ((CVar2 == (CCObject)0x0 && (*(int *)(param_2 + 0x40c) != 0xe3b)))) {
      local_res18[0] = CONCAT22(local_res18[0]._2_2_,0xc8ff);
      CVar21 = (CCNode)0x0;
      uVar11 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
      uVar19 = 0xc8ff;
      switch(uVar11) {
      case 0xc:
      case 0x26:
        local_res18[0] = CONCAT22(local_res18[0]._2_2_,0xff);
        CVar21 = (CCNode)0xff;
        uVar19 = 0xff;
        break;
      case 0xd:
        local_res18[0] = CONCAT22(local_res18[0]._2_2_,0xff00);
        CVar21 = (CCNode)0xff;
        uVar19 = 0xff00;
        break;
      case 0x1d:
      case 0x25:
        local_res18[0] = CONCAT22(local_res18[0]._2_2_,0xff00);
        uVar19 = 0xff00;
        break;
      case 0x20:
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          uVar13 = FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar13);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
        }
        lVar16 = FUN_14025bcc0(*(undefined8 *)(DAT_1406c2ed8[0x41] + 0x950),0x3ef);
        CVar21 = DAT_140529ab2;
        uVar19 = DAT_140529ab0;
        if (lVar16 != 0) {
          CVar21 = *(CCNode *)(lVar16 + 0x149);
          uVar19 = *(undefined2 *)(lVar16 + 0x147);
        }
        break;
      case 0x23:
        local_res18[0] = CONCAT22(local_res18[0]._2_2_,0x64ff);
        uVar19 = 0x64ff;
        break;
      case 0x24:
        pCVar4 = param_2;
        if (*(CCObject **)(param_2 + 0x380) != (CCObject *)0x0) {
          pCVar4 = *(CCObject **)(param_2 + 0x380);
        }
        puVar14 = (undefined2 *)(**(code **)(*(longlong *)(pCVar4 + 0x140) + 8))();
        CVar21 = *(CCNode *)(puVar14 + 1);
        uVar19 = *puVar14;
        break;
      case 0x2b:
        local_res18[0] = CONCAT22(local_res18[0]._2_2_,0x32ff);
        CVar21 = (CCNode)0xff;
        uVar19 = 0x32ff;
      }
      (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
      pCVar15 = (CCNode *)FUN_140042870();
      *(undefined2 *)(pCVar15 + 0x154) = uVar19;
      pCVar15[0x156] = CVar21;
      lVar16 = *(longlong *)pCVar15;
      uVar13 = (**(code **)(*(longlong *)param_2 + 200))(param_2);
      (**(code **)(lVar16 + 0xb8))(pCVar15,uVar13);
      if (*(CCObject **)(pCVar15 + 0x140) != (CCObject *)0x0) {
        cocos2d::CCObject::release(*(CCObject **)(pCVar15 + 0x140));
      }
      *(CCObject **)(pCVar15 + 0x140) = param_2;
      cocos2d::CCObject::retain(param_2);
      cocos2d::CCNode::unschedule(pCVar15,FUN_140042ba0);
      lVar16 = *(longlong *)pCVar15;
      uVar13 = (**(code **)(**(longlong **)(pCVar15 + 0x140) + 200))();
      (**(code **)(lVar16 + 0xb8))(pCVar15,uVar13);
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        uVar13 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar13);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      plVar17 = DAT_1406c2ed8;
      lVar16 = DAT_1406c2ed8[0x41] + 0x37a0;
      if (DAT_1406c2ed8[0x41] == 0) {
        lVar16 = 0;
      }
      *(longlong *)(pCVar15 + 0x170) = lVar16;
      cocos2d::CCArray::addObject(*(CCArray **)(plVar17[0x41] + 0x38b8),(CCObject *)pCVar15);
      (**(code **)(*(longlong *)param_1[0x185] + 0x1b8))((longlong *)param_1[0x185],pCVar15,0);
    }
  }
  if (*(char *)((longlong)param_1 + 0x28d) == '\0') {
    FUN_1404a5990(param_2);
  }
  (**(code **)(*(longlong *)param_2 + 0x558))(param_2,param_1);
  (**(code **)(*(longlong *)param_2 + 0x680))(param_2);
  FUN_14038cba0(param_1);
  return;
}

