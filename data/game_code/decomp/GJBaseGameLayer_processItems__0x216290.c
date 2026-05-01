// GJBaseGameLayer_processItems @ 0x216290


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140216290(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  CCArray *this;
  CCObject *pCVar5;
  char *pcVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1406ba040 ^ (ulonglong)auStack_b8;
  this = cocos2d::CCDictionary::allKeys(*(CCDictionary **)(param_1 + 0x3218));
  uVar10 = 0;
  uVar3 = cocos2d::CCArray::count(this);
  if (uVar3 != 0) {
    do {
      pCVar5 = cocos2d::CCArray::objectAtIndex(this,uVar10);
      pcVar6 = cocos2d::CCString::getCString((CCString *)pCVar5);
      local_58 = (void *)0x0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (pcVar6[lVar11] != '\0');
      FUN_14003a930(&local_58,pcVar6);
      pCVar5 = cocos2d::CCDictionary::objectForKey
                         (*(CCDictionary **)(param_1 + 0x3218),
                          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)&local_58);
      if (0xf < local_40) {
        pvVar8 = local_58;
        if ((0xfff < local_40 + 1) &&
           (pvVar8 = *(void **)((longlong)local_58 + -8),
           0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar8);
      }
      local_48 = 0;
      local_40 = 0xf;
      local_58 = (void *)((ulonglong)local_58 & 0xffffffffffffff00);
      iVar4 = (**(code **)(*(longlong *)pCVar5 + 0x660))(pCVar5);
      if (iVar4 == 0x16) {
        uVar7 = FUN_14016cda0(*(undefined8 *)(param_1 + 0x878),*(undefined4 *)(pCVar5 + 0x710));
        if (DAT_1406c2ee8 == (longlong *)0x0) {
          local_70 = FUN_1404d0770(0x3e0);
          DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(local_70);
          (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
        }
        cVar2 = FUN_1401dff20(DAT_1406c2ee8,uVar7);
        if (cVar2 == '\0') {
          if (DAT_1406c2ee8 == (longlong *)0x0) {
            local_68 = FUN_1404d0770(0x3e0);
            DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(local_68);
            (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
          }
          FUN_1401dfff0(DAT_1406c2ee8,uVar7);
          if (DAT_1406c2ee8 == (longlong *)0x0) {
            local_60 = FUN_1404d0770(0x3e0);
            DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(local_60);
            (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
          }
          puVar9 = &DAT_140531e80;
LAB_1402166a6:
          FUN_1401d44d0(DAT_1406c2ee8,puVar9,1);
        }
      }
      else if (iVar4 == 0x1f) {
        lVar11 = FUN_14016cda0(*(undefined8 *)(param_1 + 0x878),*(undefined4 *)(pCVar5 + 0x710));
        if (*(int *)(*(longlong *)(param_1 + 0x878) + 0x39c) ==
            *(int *)(*(longlong *)(param_1 + 0x878) + 0x3a0)) {
          if (DAT_1406c2ee8 == (longlong *)0x0) {
            local_80 = FUN_1404d0770(0x3e0);
            DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(local_80);
            (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
          }
          cVar2 = FUN_1401dfe60(DAT_1406c2ee8,lVar11);
          if (cVar2 == '\0') {
            if (DAT_1406c2ee8 == (longlong *)0x0) {
              local_78 = FUN_1404d0770(0x3e0);
              DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(local_78);
              (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
            }
            plVar1 = DAT_1406c2ee8;
            local_58 = (void *)0x0;
            uStack_50 = 0;
            local_48 = 0;
            local_40 = 0;
            lVar12 = -1;
            do {
              lVar12 = lVar12 + 1;
            } while (*(char *)(lVar11 + lVar12) != '\0');
            FUN_14003a930(&local_58,lVar11);
            cocos2d::CCDictionary::setObject
                      ((CCDictionary *)plVar1[0x5b],(CCObject *)plVar1[0x29],
                       (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)&local_58);
            if (0xf < local_40) {
              pvVar8 = local_58;
              if ((0xfff < local_40 + 1) &&
                 (pvVar8 = *(void **)((longlong)local_58 + -8),
                 0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar8);
            }
          }
        }
        else {
          if (DAT_1406c2ee8 == (longlong *)0x0) {
            local_98 = FUN_1404d0770(0x3e0);
            DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(local_98);
            (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
          }
          cVar2 = FUN_1401dfce0(DAT_1406c2ee8,lVar11);
          if (cVar2 == '\0') {
            if (DAT_1406c2ee8 == (longlong *)0x0) {
              local_90 = FUN_1404d0770(0x3e0);
              DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(local_90);
              (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
            }
            FUN_1401dfda0(DAT_1406c2ee8,lVar11);
            if (DAT_1406c2ee8 == (longlong *)0x0) {
              local_88 = FUN_1404d0770(0x3e0);
              DAT_1406c2ee8 = (longlong *)FUN_1401d0ae0(local_88);
              (**(code **)(*DAT_1406c2ee8 + 0x48))(DAT_1406c2ee8);
            }
            puVar9 = &DAT_140546f24;
            goto LAB_1402166a6;
          }
        }
      }
      uVar10 = uVar10 + 1;
      uVar3 = cocos2d::CCArray::count(this);
    } while (uVar10 < uVar3);
  }
  return;
}

