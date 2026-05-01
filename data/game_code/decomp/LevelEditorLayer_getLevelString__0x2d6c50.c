// LevelEditorLayer_getLevelString @ 0x2d6c50
// Body: 860 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1402d6c50(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  CCDictionary *this;
  undefined8 *puVar7;
  CCObject *pCVar8;
  CCInteger *pCVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 ***pppuVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 *local_90;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_88 [32];
  undefined8 **local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1406ba040 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_a0 = param_1;
  local_90 = param_2;
  FUN_14021dfb0();
  FUN_14020e0b0(param_1);
  iVar16 = 1;
  this = cocos2d::CCDictionary::create();
  *(undefined1 *)(param_1 + 0x37b9) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  local_a8 = 1;
  puVar7 = (undefined8 *)FUN_1402eaf70(*(undefined8 *)(param_1 + 0xdb0),local_88);
  puVar11 = puVar7;
  if (0xf < (ulonglong)puVar7[3]) {
    puVar11 = (undefined8 *)*puVar7;
  }
  FUN_140041270(param_2,puVar11,puVar7[2]);
  FUN_14003a830(local_88);
  FUN_140041270(param_2,&DAT_140554c94,1);
  puVar2 = *(uint **)(*(longlong *)(param_1 + 0xdb8) + 0x38);
  qsort(*(void **)(puVar2 + 4),(ulonglong)*puVar2,8,FUN_1400df370);
  if (*(longlong *)(param_1 + 0xdb8) != 0) {
    puVar2 = *(uint **)(*(longlong *)(param_1 + 0xdb8) + 0x38);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      plVar15 = *(longlong **)(puVar2 + 4);
      plVar10 = plVar15 + ((ulonglong)uVar1 - 1);
      local_98 = plVar10;
      if (plVar15 <= plVar10) {
        do {
          plVar3 = (longlong *)*plVar15;
          if (plVar3 == (longlong *)0x0) {
            return param_2;
          }
          if (*(char *)((longlong)plVar3 + 0x51f) == '\0') {
            lVar4 = plVar3[0x8a];
            lVar5 = plVar3[0x8b];
            if (lVar4 != 0) {
              if ((((*(float *)(lVar4 + 0x10) == DAT_1406ba148) &&
                   (*(float *)(lVar4 + 0x14) == DAT_1406ba14c)) &&
                  (*(float *)(lVar4 + 0x18) == DAT_1406ba150)) &&
                 ((*(char *)(lVar4 + 0x1c) == DAT_1406ba154 &&
                  (*(char *)(lVar4 + 0x1d) == DAT_1406ba155)))) {
                uVar6 = 0;
              }
              else {
                uVar6 = 1;
              }
              *(undefined1 *)(lVar4 + 0x20) = uVar6;
            }
            if (lVar5 != 0) {
              if (((*(float *)(lVar5 + 0x10) == DAT_1406ba148) &&
                  (*(float *)(lVar5 + 0x14) == DAT_1406ba14c)) &&
                 ((*(float *)(lVar5 + 0x18) == DAT_1406ba150 &&
                  ((*(char *)(lVar5 + 0x1c) == DAT_1406ba154 &&
                   (*(char *)(lVar5 + 0x1d) == DAT_1406ba155)))))) {
                uVar6 = 0;
              }
              else {
                uVar6 = 1;
              }
              *(undefined1 *)(lVar5 + 0x20) = uVar6;
            }
            lVar4 = plVar3[0x70];
            iVar13 = 0;
            do {
              FUN_14019cd30(plVar3,local_88,iVar13 == 0,1);
              pCVar8 = cocos2d::CCDictionary::objectForKey(this,local_88);
              if (pCVar8 == (CCObject *)0x0) {
                pCVar9 = cocos2d::CCInteger::create(iVar16);
                cocos2d::CCDictionary::setObject(this,(CCObject *)pCVar9,local_88);
                iVar14 = iVar16;
                iVar16 = iVar16 + 1;
              }
              else {
                pCVar8 = cocos2d::CCDictionary::objectForKey(this,local_88);
                iVar14 = *(int *)(pCVar8 + 0x38);
              }
              if (iVar13 == 0) {
                *(int *)(plVar3 + 0xa6) = iVar14;
              }
              else {
                *(int *)((longlong)plVar3 + 0x534) = iVar14;
              }
              FUN_14003a830(local_88);
              lVar5 = local_a0;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)((lVar4 != 0) + 1));
            (**(code **)(*plVar3 + 0x4c8))(plVar3,local_68,local_a0);
            pppuVar12 = local_68;
            if (0xf < local_50) {
              pppuVar12 = (undefined8 ***)local_68[0];
            }
            FUN_140041270(param_2,pppuVar12,local_58);
            FUN_140041270(param_2,&DAT_140554c94,1);
            if (*(char *)(lVar5 + 0x37b9) == '\0') {
              *(undefined1 *)(lVar5 + 0x37b9) = *(undefined1 *)((longlong)plVar3 + 0x4f3);
            }
            FUN_14003a830(local_68);
            plVar10 = local_98;
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 <= plVar10);
      }
    }
  }
  return param_2;
}

