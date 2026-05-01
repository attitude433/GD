// PlayerObject_spiderTestJumpInternal @ 0x3943f0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403943f0(longlong *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  CCRect *pCVar11;
  undefined8 uVar12;
  CCArray *this;
  CCArray *this_00;
  code *pcVar13;
  CCPoint *pCVar14;
  CCObject *pCVar15;
  longlong lVar16;
  float *pfVar17;
  undefined8 uVar18;
  uint uVar19;
  code *_PtFuncCompare;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  char local_res10;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  CCRect local_158 [8];
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  CCPoint local_140 [8];
  CCPoint local_138 [8];
  float local_130;
  float local_12c;
  CCRect local_120 [16];
  CCRect local_110 [16];
  CCRect local_100 [192];
  
  if ((char)param_1[0x138] != '\0') {
    return;
  }
  if (*(char *)((longlong)param_1 + 0xa2a) != '\0') {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x7e1) != '\0') {
    return;
  }
  cVar1 = *(char *)((longlong)param_1 + 0x9c3);
  fVar27 = *(float *)(param_1 + 0x13e) * DAT_140623068;
  if (((cVar1 == '\0') && (*(char *)(param_1[0x184] + 0x311) == '\0')) &&
     ((*(char *)((longlong)param_1 + 0x9b9) != '\0' ||
      ((((*(char *)((longlong)param_1 + 0x9ba) != '\0' ||
         (*(char *)((longlong)param_1 + 0x9bc) != '\0')) ||
        (*(char *)((longlong)param_1 + 0x9c4) != '\0')) ||
       ((*(char *)((longlong)param_1 + 0x9bb) != '\0' ||
        (*(char *)((longlong)param_1 + 0x9be) != '\0')))))))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  fVar25 = 0.0;
  uVar10 = 0;
  pCVar11 = (CCRect *)(**(code **)(*param_1 + 0x490))();
  cocos2d::CCRect::CCRect((CCRect *)&local_188,pCVar11);
  cocos2d::CCRect::CCRect((CCRect *)&local_198,(CCRect *)&local_188);
  if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
    if (bVar2) {
      lVar16 = (**(code **)(*param_1 + 200))(param_1);
      fVar22 = *(float *)(lVar16 + 4) - _DAT_1406235a0;
      fVar21 = DAT_140623294;
      if (DAT_140623294 <= fVar22) {
        fVar21 = fVar22;
      }
      lVar16 = (**(code **)(*param_1 + 200))(param_1);
      fVar22 = *(float *)(lVar16 + 4) + _DAT_1406235a0;
    }
    else {
      fVar21 = (float)FUN_140213690(param_1[0x184]);
      fVar22 = (float)FUN_140213770(param_1[0x184]);
    }
  }
  else {
    pfVar17 = (float *)(**(code **)(*param_1 + 200))(param_1);
    fVar22 = *pfVar17 + _DAT_1406235a0;
    pfVar17 = (float *)(**(code **)(*param_1 + 200))(param_1);
    fVar21 = 0.0;
    if (0.0 <= *pfVar17 - _DAT_1406235a0) {
      fVar21 = *pfVar17 - _DAT_1406235a0;
    }
  }
  fVar3 = DAT_140622e58;
  if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
    if (cVar1 == '\0') {
      local_194 = local_194 + (local_18c - DAT_140622e58);
      local_18c = fVar22 - local_194;
      goto LAB_140394700;
    }
    local_198 = local_198 + (local_190 - DAT_140622e58);
    local_190 = fVar22 - local_198;
LAB_140394663:
    cocos2d::CCRect::CCRect((CCRect *)&local_178,(CCRect *)&local_198);
    local_16c = local_17c;
    local_174 = local_184;
    cocos2d::CCRect::CCRect(local_158,(CCRect *)&local_178);
    local_14c = local_14c + DAT_140622ff0;
    local_174 = local_174 + (local_18c - fVar27) * DAT_140622b08;
    local_16c = fVar27;
  }
  else {
    if (cVar1 != '\0') {
      local_190 = (local_198 - fVar21) + DAT_140622e58;
      local_198 = fVar21;
      goto LAB_140394663;
    }
    local_18c = (local_194 - fVar21) + DAT_140622e58;
    local_194 = fVar21;
LAB_140394700:
    cocos2d::CCRect::CCRect((CCRect *)&local_178,(CCRect *)&local_198);
    local_170 = local_180;
    local_178 = local_188;
    cocos2d::CCRect::CCRect(local_158,(CCRect *)&local_178);
    local_150 = local_150 + DAT_140622ff0;
    local_178 = local_178 + (local_190 - fVar27) * DAT_140622b08;
    local_170 = fVar27;
  }
  fVar27 = DAT_140622b08;
  if ((char)param_1[0x16e] == '\0') {
    if (cVar1 == '\0') {
      local_190 = local_180 * DAT_140622b08 + DAT_140622c24;
    }
    else {
      local_18c = local_17c * DAT_140622b08 + DAT_140622c24;
    }
    if (*(char *)((longlong)param_1 + 0x9c2) == '\0') {
      if (cVar1 == '\0') {
        local_198 = local_180 * DAT_140622b08 + local_188;
      }
      else {
        local_194 = local_17c * DAT_140622b08 + local_184;
      }
    }
    else if (cVar1 == '\0') {
      local_198 = (local_188 - local_180 * DAT_140622b08) - DAT_140622c24;
    }
    else {
      local_194 = (local_184 - local_17c * DAT_140622b08) - DAT_140622c24;
    }
  }
  else if (cVar1 == '\0') {
    local_198 = local_198 + DAT_140622c24;
    local_190 = local_190 + DAT_140623730;
  }
  else {
    local_18c = local_18c + DAT_140623730;
    local_194 = local_194 + DAT_140622c24;
  }
  uVar12 = cocos2d::CCRect::CCRect(local_120,(CCRect *)&local_198);
  this = (CCArray *)FUN_140211260(param_1[0x184],uVar12,1);
  cocos2d::CCRect::CCRect(local_110,(CCRect *)&local_178);
  this_00 = (CCArray *)FUN_140211620(param_1[0x184]);
  if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
    _PtFuncCompare = FUN_140386320;
    pcVar13 = FUN_140386380;
  }
  else {
    _PtFuncCompare = FUN_1403863e0;
    pcVar13 = FUN_140386440;
  }
  if (*(char *)((longlong)param_1 + 0x9bf) != '\0') {
    _PtFuncCompare = pcVar13;
  }
  uVar8 = cocos2d::CCArray::count(this);
  if (((uVar8 == 0) && (uVar8 = cocos2d::CCArray::count(this_00), uVar8 != 0)) ||
     (local_res10 = param_2, param_2 != '\0')) {
    local_res10 = '\x01';
    uVar12 = cocos2d::CCRect::CCRect(local_100,local_158);
    this = (CCArray *)FUN_140211260(param_1[0x184],uVar12,1);
  }
  uVar8 = cocos2d::CCArray::count(this);
  if (uVar8 != 0) {
    qsort(*(void **)(*(uint **)(this + 0x38) + 4),(ulonglong)**(uint **)(this + 0x38),8,
          _PtFuncCompare);
  }
  uVar8 = cocos2d::CCArray::count(this_00);
  if (uVar8 != 0) {
    qsort(*(void **)(*(uint **)(this_00 + 0x38) + 4),(ulonglong)**(uint **)(this_00 + 0x38),8,
          _PtFuncCompare);
  }
  fVar28 = 0.0;
  uVar8 = cocos2d::CCArray::count(this);
  if (uVar8 == 0) {
    uVar8 = cocos2d::CCArray::count(this_00);
    if (uVar8 != 0) {
      uVar10 = 1;
      pCVar15 = cocos2d::CCArray::objectAtIndex(this_00,0);
      pfVar17 = (float *)(**(code **)(*(longlong *)pCVar15 + 0x4a8))(pCVar15);
      if (cVar1 == '\0') {
        fVar25 = pfVar17[1];
      }
      else {
        fVar25 = *pfVar17;
      }
    }
  }
  else {
    cocos2d::CCRect::CCRect((CCRect *)&local_130,(CCRect *)&local_188);
    pCVar14 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_res18,pCVar14);
    uVar10 = 0;
    uVar8 = cocos2d::CCArray::count(this);
    fVar5 = DAT_1406237a8;
    fVar4 = DAT_14062307c;
    if (uVar8 != 0) {
LAB_140394a20:
      pCVar15 = cocos2d::CCArray::objectAtIndex(this,uVar10);
      fVar23 = local_17c;
      fVar26 = local_180;
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        if (cVar1 == '\0') {
          pCVar11 = (CCRect *)(**(code **)(*(longlong *)pCVar15 + 0x490))(pCVar15);
          fVar25 = cocos2d::CCRect::getMinY(pCVar11);
          fVar25 = fVar25 - fVar23 * fVar27;
        }
        else {
          pCVar11 = (CCRect *)(**(code **)(*(longlong *)pCVar15 + 0x490))(pCVar15);
          fVar25 = cocos2d::CCRect::getMinX(pCVar11);
          fVar25 = fVar25 - fVar26 * fVar27;
        }
      }
      else {
        if (cVar1 == '\0') {
          pCVar11 = (CCRect *)(**(code **)(*(longlong *)pCVar15 + 0x490))(pCVar15);
          fVar25 = cocos2d::CCRect::getMaxY(pCVar11);
        }
        else {
          pCVar11 = (CCRect *)(**(code **)(*(longlong *)pCVar15 + 0x490))();
          fVar25 = cocos2d::CCRect::getMaxX(pCVar11);
          fVar23 = fVar26;
        }
        fVar25 = fVar23 * fVar27 + fVar25;
      }
      bVar20 = false;
      iVar9 = (**(code **)(*(longlong *)pCVar15 + 0x660))(pCVar15);
      if (iVar9 == 0x19) {
        (**(code **)(*(longlong *)pCVar15 + 0x4a8))(pCVar15);
        if (*(char *)((longlong)param_1 + 0x9c3) != '\0') {
          FUN_1403913f0(param_1);
        }
        if ((*(uint *)(pCVar15 + 0x444) < 7) &&
           ((0x6aU >> (*(uint *)(pCVar15 + 0x444) & 0x1f) & 1) != 0)) {
          cVar6 = '\x01';
        }
        else {
          cVar6 = '\0';
        }
        if (cVar6 != *(char *)((longlong)param_1 + 0x9bf)) {
          dVar24 = (double)FUN_1401a13b0(pCVar15);
          lVar16 = (**(code **)(*(longlong *)pCVar15 + 0x4a8))(pCVar15);
          iVar9 = -1;
          if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
            iVar9 = 1;
          }
          fVar26 = local_144;
          fVar25 = local_17c;
          if (cVar1 != '\0') {
            fVar26 = local_148;
            fVar25 = local_180;
          }
          bVar20 = true;
          fVar25 = (fVar26 + (float)(dVar24 - (double)*(float *)(lVar16 + 4))) -
                   fVar25 * fVar27 * (float)iVar9;
        }
        if (*(char *)((longlong)param_1 + 0x9c3) != '\0') {
          FUN_1403916e0(param_1);
        }
      }
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        if (cVar1 == '\0') {
          bVar7 = fVar25 < local_res1c - fVar4;
        }
        else {
          bVar7 = fVar25 < local_res18 - fVar4;
        }
      }
      else {
        fVar26 = local_res1c;
        if (cVar1 != '\0') {
          fVar26 = local_res18;
        }
        bVar7 = fVar26 + fVar4 < fVar25;
      }
      if (bVar7) goto LAB_140394e24;
      if ((char)param_1[0x16e] == '\0') {
        if (*(char *)((longlong)param_1 + 0x9c2) == '\0') {
          pCVar11 = (CCRect *)(**(code **)(*(longlong *)pCVar15 + 0x490))(pCVar15);
          if (cVar1 == '\0') {
            fVar23 = cocos2d::CCRect::getMinX(pCVar11);
            fVar26 = local_res18;
          }
          else {
            fVar23 = cocos2d::CCRect::getMinY(pCVar11);
            fVar26 = local_res1c;
          }
          if (fVar26 < fVar23) goto LAB_140394d0e;
          if (*(char *)((longlong)param_1 + 0x9c2) == '\0') goto LAB_140394c38;
        }
        pCVar11 = (CCRect *)(**(code **)(*(longlong *)pCVar15 + 0x490))(pCVar15);
        if (cVar1 == '\0') {
          fVar23 = cocos2d::CCRect::getMaxX(pCVar11);
          fVar26 = local_res18;
        }
        else {
          fVar23 = cocos2d::CCRect::getMaxY(pCVar11);
          fVar26 = local_res1c;
        }
        if (fVar26 <= fVar23) goto LAB_140394c38;
      }
      else if (!bVar20) goto LAB_140394c38;
LAB_140394d0e:
      uVar19 = 0;
      uVar8 = cocos2d::CCArray::count(this);
      if (uVar8 != 0) {
        do {
          pCVar15 = cocos2d::CCArray::objectAtIndex(this,uVar19);
          if (uVar10 != uVar19) {
            if (cVar1 == '\0') {
              local_12c = fVar25 - local_17c * fVar27;
            }
            else {
              local_130 = fVar25 - local_180 * fVar27;
            }
            pCVar11 = (CCRect *)(**(code **)(*(longlong *)pCVar15 + 0x490))(pCVar15);
            cocos2d::CCRect::CCRect((CCRect *)&local_168,pCVar11);
            if (!bVar20) {
              if (cVar1 == '\0') {
                local_15c = local_15c + fVar5;
                local_164 = local_164 + fVar3;
              }
              else {
                local_160 = local_160 + fVar5;
                local_168 = local_168 + fVar3;
              }
            }
            bVar7 = cocos2d::CCRect::intersectsRect((CCRect *)&local_168,(CCRect *)&local_130);
            if (bVar7) goto LAB_140394dfc;
          }
          uVar19 = uVar19 + 1;
          uVar8 = cocos2d::CCArray::count(this);
          if (uVar8 <= uVar19) break;
        } while( true );
      }
      goto LAB_140394c38;
    }
  }
LAB_140394c45:
  if ((char)param_1[0x16e] == '\0') {
    fVar28 = 0.0;
  }
  else if (fVar28 != 0.0) {
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      if (fVar25 <= fVar28) goto LAB_140394eb1;
    }
    else if (fVar28 <= fVar25) goto LAB_140394eb1;
    fVar25 = fVar28;
  }
LAB_140394eb1:
  if ((fVar25 == 0.0) && (fVar25 = fVar28, fVar28 == 0.0)) {
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      if (cVar1 == '\0') {
        fVar25 = fVar22 - local_17c * fVar27;
      }
      else {
        fVar25 = fVar22 - local_180 * fVar27;
      }
    }
    else if (cVar1 == '\0') {
      fVar25 = local_17c * fVar27 + fVar21;
    }
    else {
      fVar25 = local_180 * fVar27 + fVar21;
    }
  }
  if (((char)uVar10 == '\0') && (uVar10 = cocos2d::CCArray::count(this_00), uVar10 != 0)) {
    pCVar15 = cocos2d::CCArray::objectAtIndex(this_00,0);
    pfVar17 = (float *)(**(code **)(*(longlong *)pCVar15 + 0x4a8))(pCVar15,&local_res18);
    if (cVar1 == '\0') {
      fVar27 = pfVar17[1];
    }
    else {
      fVar27 = *pfVar17;
    }
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      bVar20 = fVar25 < fVar27;
    }
    else {
      bVar20 = fVar27 < fVar25;
    }
    if ((!bVar20 && fVar25 != fVar27) && (fVar25 = fVar27, local_res10 == '\0')) {
      FUN_1403943f0(param_1,1);
      return;
    }
  }
  pCVar14 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
  cocos2d::CCPoint::CCPoint(local_140,pCVar14);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_res20,local_140);
  if (cVar1 != '\0') {
    local_res20 = fVar25;
    fVar25 = local_res24;
  }
  local_res24 = fVar25;
  (**(code **)(*param_1 + 0xb8))(param_1,&local_res20);
  FUN_14039a1d0(param_1,*(char *)((longlong)param_1 + 0x9bf) == '\0',1);
  iVar9 = 1;
  if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
    iVar9 = -1;
  }
  FUN_140388d10(param_1,(double)iVar9);
  *(undefined1 *)(param_1 + 0xfd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x985) = 0;
  cocos2d::CCDictionary::removeAllObjects((CCDictionary *)param_1[0xb6]);
  cocos2d::CCDictionary::removeAllObjects((CCDictionary *)param_1[0xb7]);
  cocos2d::CCDictionary::removeAllObjects((CCDictionary *)param_1[0xb8]);
  cocos2d::CCDictionary::removeAllObjects((CCDictionary *)param_1[0xb9]);
  param_1[0xbc] = -1;
  param_1[0xba] = -1;
  param_1[0xbb] = -1;
  if (cVar1 == '\0') {
    *(float *)((longlong)param_1 + 0xa94) = local_res24;
  }
  else {
    *(float *)(param_1 + 0x152) = local_res20;
  }
  param_1[0x104] = param_1[0x154];
  uVar12 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_res18,(CCPoint *)&local_res20);
  uVar18 = cocos2d::CCPoint::CCPoint(local_138,local_140);
  FUN_140395170(param_1,uVar18,uVar12);
  if ((bVar2) && (param_1[0x184] != 0)) {
    FUN_140239ba0(param_1[0x184],param_1,DAT_140623210);
  }
  return;
LAB_140394dfc:
  if (!bVar20) goto LAB_140394e24;
  if (fVar28 != 0.0) {
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      if (fVar28 <= fVar25) goto LAB_140394e24;
    }
    else if (fVar25 <= fVar28) goto LAB_140394e24;
  }
  fVar28 = fVar25;
LAB_140394e24:
  uVar10 = uVar10 + 1;
  uVar8 = cocos2d::CCArray::count(this);
  fVar25 = 0.0;
  if (uVar8 <= uVar10) goto LAB_140394c38;
  goto LAB_140394a20;
LAB_140394c38:
  uVar10 = 0;
  goto LAB_140394c45;
}

