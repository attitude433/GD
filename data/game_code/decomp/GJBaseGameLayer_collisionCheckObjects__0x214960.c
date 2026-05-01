// GJBaseGameLayer_collisionCheckObjects @ 0x214960


void FUN_140214960(longlong *param_1,longlong *param_2,longlong *param_3,int param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  CCRect *this;
  CCRect *pCVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  CCPoint *pCVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  void *_Memory;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong *local_res10;
  longlong *local_res18;
  int local_res20 [2];
  CCRect local_198 [16];
  CCPoint local_188 [8];
  undefined1 local_180 [8];
  CCPoint local_178 [8];
  CCPoint local_170 [8];
  longlong local_168;
  void *local_160;
  undefined8 uStack_158;
  longlong local_150;
  CCPoint local_148 [8];
  CCPoint local_140 [8];
  CCPoint local_138 [8];
  CCPoint local_130 [8];
  CCPoint local_128 [8];
  CCPoint local_120 [8];
  CCPoint local_118 [8];
  CCPoint local_110 [8];
  CCPoint local_108 [8];
  CCPoint local_100 [8];
  CCPoint local_f8 [8];
  CCPoint local_f0 [8];
  CCPoint local_e8 [8];
  CCPoint local_e0 [8];
  CCPoint local_d8 [8];
  CCPoint local_d0 [8];
  CCPoint local_c8 [8];
  CCPoint local_c0 [8];
  undefined1 local_b8 [16];
  CCRect local_a8 [112];
  
  local_res18 = param_3;
  this = (CCRect *)(**(code **)(*param_2 + 0x490))(param_2);
  fVar18 = cocos2d::CCRect::getMaxX(this);
  fVar19 = cocos2d::CCRect::getMinX(this);
  fVar20 = cocos2d::CCRect::getMaxY(this);
  fVar21 = cocos2d::CCRect::getMinY(this);
  uVar4 = DAT_140622e58;
  if (0 < param_4) {
    lVar17 = 0;
    local_168 = (longlong)param_4;
    do {
      plVar1 = *(longlong **)(*param_3 + lVar17 * 8);
      iVar7 = (int)plVar1[0x74];
      if (((iVar7 == 7) || (*(char *)((longlong)plVar1 + 0x28e) != '\0')) ||
         (*(char *)((longlong)plVar1 + 0x3d2) != '\0')) goto switchD_140214c45_caseD_7;
      local_res10 = plVar1;
      if (iVar7 == 0) {
LAB_140215f33:
        if (*(int *)((longlong)param_1 + 0x3194) < (int)param_1[0x633]) {
          *(longlong **)(param_1[0x634] + (longlong)*(int *)((longlong)param_1 + 0x3194) * 8) =
               plVar1;
          *(int *)((longlong)param_1 + 0x3194) = *(int *)((longlong)param_1 + 0x3194) + 1;
        }
        else {
          plVar15 = (longlong *)param_1[0x635];
          if (plVar15 == (longlong *)param_1[0x636]) {
            FUN_14012d2a0(param_1 + 0x634,plVar15,&local_res10);
            *(int *)(param_1 + 0x633) = (int)param_1[0x633] + 1;
            *(int *)((longlong)param_1 + 0x3194) = *(int *)((longlong)param_1 + 0x3194) + 1;
          }
          else {
            *plVar15 = (longlong)plVar1;
            param_1[0x635] = param_1[0x635] + 8;
            *(int *)(param_1 + 0x633) = (int)param_1[0x633] + 1;
            *(int *)((longlong)param_1 + 0x3194) = *(int *)((longlong)param_1 + 0x3194) + 1;
          }
        }
        goto switchD_140214c45_caseD_7;
      }
      if (iVar7 == 2) {
LAB_140215ec8:
        if ((int)param_1[0x637] < *(int *)((longlong)param_1 + 0x31bc)) {
          *(longlong **)(param_1[0x638] + (longlong)(int)param_1[0x637] * 8) = plVar1;
          *(int *)(param_1 + 0x637) = (int)param_1[0x637] + 1;
        }
        else {
          plVar15 = (longlong *)param_1[0x639];
          if (plVar15 == (longlong *)param_1[0x63a]) {
            FUN_14012d2a0(param_1 + 0x638,plVar15,&local_res10);
            *(int *)((longlong)param_1 + 0x31bc) = *(int *)((longlong)param_1 + 0x31bc) + 1;
            *(int *)(param_1 + 0x637) = (int)param_1[0x637] + 1;
          }
          else {
            *plVar15 = (longlong)plVar1;
            param_1[0x639] = param_1[0x639] + 8;
            *(int *)((longlong)param_1 + 0x31bc) = *(int *)((longlong)param_1 + 0x31bc) + 1;
            *(int *)(param_1 + 0x637) = (int)param_1[0x637] + 1;
          }
        }
        goto switchD_140214c45_caseD_7;
      }
      if (iVar7 == 0x15) goto LAB_140215f33;
      if (iVar7 == 0x27) goto switchD_140214c45_caseD_7;
      if (iVar7 == 0x2f) goto LAB_140215ec8;
      cVar5 = (**(code **)(*plVar1 + 0x560))(plVar1,param_2);
      if (cVar5 != '\0') goto switchD_140214c45_caseD_7;
      cocos2d::CCRect::CCRect(local_198);
      iVar7 = (**(code **)(*plVar1 + 0x660))(plVar1);
      if (iVar7 == 0x19) {
        pCVar8 = (CCRect *)(**(code **)(*plVar1 + 0x488))(plVar1,local_b8,uVar4,uVar4);
      }
      else {
        pCVar8 = (CCRect *)(**(code **)(*plVar1 + 0x490))(plVar1);
      }
      cocos2d::CCRect::operator=(local_198,pCVar8);
      if (*(float *)((longlong)plVar1 + 0x38c) <= 0.0) {
        fVar22 = cocos2d::CCRect::getMinX(local_198);
        if (((fVar22 <= fVar18) && (fVar22 = cocos2d::CCRect::getMaxX(local_198), fVar19 <= fVar22))
           && ((fVar22 = cocos2d::CCRect::getMinY(local_198), fVar22 <= fVar20 &&
               (fVar22 = cocos2d::CCRect::getMaxY(local_198), fVar21 <= fVar22))))
        goto LAB_140214b5c;
        goto switchD_140214c45_caseD_7;
      }
      cVar5 = FUN_140211df0(param_1,param_2,plVar1);
      if (cVar5 == '\0') goto switchD_140214c45_caseD_7;
LAB_140214b5c:
      bVar2 = true;
      if (((char)plVar1[0x5d] != '\0') &&
         ((*(char *)(param_1[0x1b6] + 0x1cf) == '\0' ||
          (*(float *)((longlong)plVar1 + 0x38c) <= 0.0)))) {
        uVar9 = (**(code **)(*plVar1 + 0x570))(plVar1);
        (**(code **)(*param_2 + 0x578))(param_2);
        uVar10 = (**(code **)(*param_2 + 0x570))(param_2);
        cVar5 = FUN_14006e130(uVar9,uVar10,uVar10);
        if ((cVar5 == '\0') || (cVar5 = FUN_14006e130(uVar10,uVar9), cVar5 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      iVar7 = (**(code **)(*plVar1 + 0x660))(plVar1);
      if (iVar7 == 0x19) {
        pCVar8 = (CCRect *)(**(code **)(*plVar1 + 0x490))(plVar1);
        cocos2d::CCRect::operator=(local_198,pCVar8);
      }
      if ((!bVar2) ||
         ((((*(int *)((longlong)param_1 + 0x33c) != 0 && ((int)plVar1[0x9d] == 1)) &&
           ((int)plVar1[0xe0] != 0)) && ((int)plVar1[0xe0] != *(int *)((longlong)param_1 + 0x33c))))
         ) goto switchD_140214c45_caseD_7;
      switch((int)plVar1[0x74]) {
      case 3:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          if ((*(char *)((longlong)param_2 + 0x9bf) == '\0') &&
             (*(char *)((longlong)plVar1 + 0x41c) == '\0')) {
            (**(code **)(*param_1 + 0x500))(param_1,1);
          }
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_148,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          FUN_140212b00(param_1,param_2,1);
          FUN_1401993b0(plVar1);
          (**(code **)(*plVar1 + 0x558))(plVar1,param_2);
          FUN_140231ff0(param_1,0x32,0);
        }
        break;
      case 4:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          if ((*(char *)((longlong)param_2 + 0x9bf) != '\0') &&
             (*(char *)((longlong)plVar1 + 0x41c) == '\0')) {
            (**(code **)(*param_1 + 0x500))(param_1,0);
          }
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_140,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          FUN_140212b00(param_1,param_2,0);
          FUN_1401993b0(plVar1);
          (**(code **)(*plVar1 + 0x558))(plVar1,param_2);
          FUN_140231ff0(param_1,0x33,0);
        }
        break;
      case 5:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          FUN_140212ef0(param_1,param_2,plVar1);
          FUN_14039be30(param_2,5);
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_128,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          if ((((*(char *)((longlong)param_1 + 0x422) == '\0') ||
               (plVar15 = (longlong *)param_1[0x81], plVar15 == (longlong *)0x0)) &&
              (plVar15 = plVar1, plVar1 == (longlong *)0x0)) ||
             (param_1[0x80] = (longlong)plVar15, *(char *)((longlong)plVar15 + 0x41c) == '\0')) {
            uVar9 = 0;
          }
          else {
            uVar9 = 1;
          }
          FUN_14039a4f0(param_2,1,uVar9);
          (**(code **)(*param_1 + 0x460))(param_1,1);
LAB_140214f45:
          FUN_1401993b0(plVar1);
          (**(code **)(*plVar1 + 0x558))(plVar1,param_2);
        }
        break;
      case 6:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          FUN_140212ef0(param_1,param_2,plVar1);
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_130,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          FUN_14039a4f0(param_2,0,0);
          FUN_14039a820(param_2,0,0);
          FUN_14039b570(param_2,0,0);
          FUN_14039af90(param_2,0,0);
          FUN_14039b6f0(param_2,0,0);
          FUN_14039ba70(param_2,0,0);
          FUN_14039ab20(param_2,0,0);
          FUN_140398860(param_2);
          FUN_1403961c0(param_2);
          goto LAB_140214f45;
        }
        break;
      case 8:
      case 9:
      case 0x22:
      case 0x2c:
        FUN_1402179d0(param_1,param_2,plVar1);
        break;
      case 10:
        if (*(char *)((longlong)param_2 + 0x9c3) == '\0') {
          bVar6 = FUN_1401a1910(plVar1);
        }
        else {
          bVar6 = FUN_1401a19d0();
        }
        bVar6 = bVar6 ^ 1;
        if ((*(byte *)((longlong)param_2 + 0x9bf) != bVar6) &&
           (cVar5 = FUN_1402178c0(param_1,param_2,plVar1), cVar5 != '\0')) {
          if (*(char *)((longlong)plVar1 + 0x704) != '\0') {
            FUN_140398430(param_2,plVar1);
          }
          if (*(char *)((longlong)plVar1 + 0x41c) == '\0') {
            (**(code **)(*param_1 + 0x500))(param_1,bVar6);
          }
          cocos2d::CCPoint::CCPoint(local_c0,0.0,DAT_14062381c);
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          cocos2d::CCPoint::operator+(pCVar11,local_188);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),local_188);
          (**(code **)(*plVar1 + 0x558))(plVar1,param_2);
          param_2[0x150] = (longlong)plVar1;
          FUN_14039f850(param_2,DAT_140622ba4,*(undefined1 *)((longlong)plVar1 + 0x41c),10);
          FUN_140212b00(param_1,param_2,bVar6);
          *(undefined1 *)(param_2 + 0xfc) = 1;
          FUN_140231ff0(param_1,0x30,0);
        }
        break;
      case 0xb:
      case 0xc:
      case 0xd:
      case 0x1d:
      case 0x20:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x2b:
        FUN_140217e40(param_1,param_2,plVar1);
        break;
      case 0xe:
        if ((*(char *)((longlong)param_1 + 0x309c) == '\0') &&
           (cVar5 = FUN_1402178c0(param_1,param_2,plVar1), cVar5 != '\0')) {
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_d8,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          FUN_1402467d0(param_1,1,*(undefined1 *)((longlong)plVar1 + 0x41c));
          FUN_1401993b0(plVar1);
          (**(code **)(*plVar1 + 0x528))(plVar1,0);
          FUN_140231ff0(param_1,0x35,0);
        }
        break;
      case 0xf:
        if ((*(char *)((longlong)param_1 + 0x309c) == '\0') &&
           (cVar5 = FUN_1402178c0(param_1,param_2,plVar1), cVar5 != '\0')) {
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_e0,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          FUN_1402467d0(param_1,0,*(undefined1 *)((longlong)plVar1 + 0x41c));
          FUN_1401993b0(plVar1);
          (**(code **)(*plVar1 + 0x528))(plVar1,0);
          FUN_140231ff0(param_1,0x36,0);
        }
        break;
      case 0x10:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          FUN_140212ef0(param_1,param_2,plVar1);
          FUN_14039a4f0(param_2,0,0);
          FUN_14039a820(param_2,0,0);
          FUN_14039af90(param_2,0,0);
          FUN_14039b6f0(param_2,0,0);
          FUN_14039ba70(param_2,0,0);
          FUN_14039ab20(param_2,0,0);
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_110,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          if ((((*(char *)((longlong)param_1 + 0x422) == '\0') ||
               (plVar15 = (longlong *)param_1[0x81], plVar15 == (longlong *)0x0)) &&
              (plVar15 = plVar1, plVar1 == (longlong *)0x0)) ||
             (param_1[0x80] = (longlong)plVar15, *(char *)((longlong)plVar15 + 0x41c) == '\0')) {
            FUN_14039b570(param_2,1,0);
          }
          else {
            FUN_14039b570(param_2,1);
          }
          goto LAB_140214f45;
        }
        break;
      case 0x11:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_f0,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          FUN_1403a0700(param_2,0,*(undefined1 *)((longlong)plVar1 + 0x41c));
          FUN_1401993b0(plVar1);
          (**(code **)(*plVar1 + 0x558))(plVar1,param_2);
          FUN_140231ff0(param_1,0x37,0);
        }
        break;
      case 0x12:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_e8,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          FUN_1403a0700(param_2,1,*(undefined1 *)((longlong)plVar1 + 0x41c));
          FUN_1401993b0(plVar1);
          (**(code **)(*plVar1 + 0x558))(plVar1,param_2);
          FUN_140231ff0(param_1,0x38,0);
        }
        break;
      case 0x13:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          FUN_140212ef0(param_1,param_2,plVar1);
          FUN_14039be30(param_2,0x13);
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_120,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          if ((((*(char *)((longlong)param_1 + 0x422) == '\0') ||
               (plVar15 = (longlong *)param_1[0x81], plVar15 == (longlong *)0x0)) &&
              (plVar15 = plVar1, plVar1 == (longlong *)0x0)) ||
             (param_1[0x80] = (longlong)plVar15, *(char *)((longlong)plVar15 + 0x41c) == '\0')) {
            uVar9 = 0;
          }
          else {
            uVar9 = 1;
          }
          FUN_14039a820(param_2,1,uVar9);
          (**(code **)(*param_1 + 0x460))(param_1,1);
          goto LAB_140214f45;
        }
        break;
      case 0x14:
      case 0x2d:
        FUN_140217f50(param_1,param_2,plVar1);
        break;
      case 0x16:
        if ((char)param_1[0x63e] == '\0') {
          (**(code **)(*plVar1 + 0x468))(plVar1,param_1,*(undefined4 *)((longlong)param_2 + 0x39c));
          (**(code **)(*plVar1 + 0x528))(plVar1,0);
          FUN_140216090(param_1,plVar1);
          cVar5 = FUN_140216700(param_1,plVar1);
          if (cVar5 == '\0') {
            FUN_1402161b0(param_1,plVar1);
          }
          FUN_140231ff0(param_1,0x3e,0);
        }
        break;
      case 0x17:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_c8,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          *(undefined1 *)(param_1[0x1b5] + 0xaa8) = 1;
          FUN_1402168d0(param_1,plVar1,1,param_2,0);
          *(undefined1 *)(param_1[0x1b5] + 0xaa8) = 0;
          FUN_1401993b0(plVar1);
          (**(code **)(*plVar1 + 0x528))(plVar1,0);
          FUN_140231ff0(param_1,0x39,0);
        }
        break;
      case 0x18:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_d0,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          FUN_1402168d0(param_1,plVar1,0,param_2,0);
          FUN_1401993b0(plVar1);
          (**(code **)(*plVar1 + 0x528))(plVar1,0);
          FUN_140231ff0(param_1,0x3a,0);
        }
        break;
      case 0x19:
        if (*(char *)((longlong)param_2 + 0x9c3) == '\0') {
          FUN_14038f810(param_2,param_5,plVar1);
        }
        else {
          uVar9 = cocos2d::CCRect::CCRect(local_a8,(CCRect *)&DAT_1406c2458);
          FUN_14038f140(param_2,param_5,plVar1,uVar9,0,0,1);
        }
        goto LAB_140215e78;
      case 0x1a:
        if ((*(char *)((longlong)param_1 + 0x309e) == '\0') &&
           (cVar5 = FUN_1402178c0(param_1,param_2,plVar1), cVar5 != '\0')) {
          FUN_140212ef0(param_1,param_2,plVar1);
          FUN_14039be30(param_2,0x1a);
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_108,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          if ((((*(char *)((longlong)param_1 + 0x422) == '\0') ||
               (plVar15 = (longlong *)param_1[0x81], plVar15 == (longlong *)0x0)) &&
              (plVar15 = plVar1, plVar1 == (longlong *)0x0)) ||
             (param_1[0x80] = (longlong)plVar15, *(char *)((longlong)plVar15 + 0x41c) == '\0')) {
            uVar9 = 0;
          }
          else {
            uVar9 = 1;
          }
          FUN_14039af90(param_2,1,uVar9);
          (**(code **)(*param_1 + 0x460))(param_1,1);
          goto LAB_140214f45;
        }
        break;
      case 0x1b:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          FUN_140212ef0(param_1,param_2,plVar1);
          FUN_14039a4f0(param_2,0,0);
          FUN_14039a820(param_2,0,0);
          FUN_14039b570(param_2,0,0);
          FUN_14039af90(param_2,0,0);
          FUN_14039ba70(param_2,0,0);
          FUN_14039ab20(param_2,0,0);
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_100,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          if ((((*(char *)((longlong)param_1 + 0x422) == '\0') ||
               (plVar15 = (longlong *)param_1[0x81], plVar15 == (longlong *)0x0)) &&
              (plVar15 = plVar1, plVar1 == (longlong *)0x0)) ||
             (param_1[0x80] = (longlong)plVar15, *(char *)((longlong)plVar15 + 0x41c) == '\0')) {
            FUN_14039b6f0(param_2,1,0);
          }
          else {
            FUN_14039b6f0(param_2,1);
          }
          goto LAB_140214f45;
        }
        break;
      case 0x1c:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          FUN_140231ff0(param_1,0x3b,0);
          FUN_14020fdb0(param_1,plVar1,param_2);
          goto LAB_140215e78;
        }
        break;
      case 0x1e:
        iVar7 = *(int *)((longlong)plVar1 + 0x39c);
        puVar16 = *(undefined8 **)(param_1[0x12a] + 0x558);
        cVar5 = *(char *)((longlong)puVar16[1] + 0x19);
        puVar3 = (undefined8 *)puVar16[1];
        while (cVar5 == '\0') {
          if ((*(int *)((longlong)puVar3 + 0x1c) < iVar7) ||
             ((*(int *)((longlong)puVar3 + 0x1c) <= iVar7 && (*(int *)(puVar3 + 4) < 0)))) {
            puVar14 = (undefined8 *)puVar3[2];
          }
          else {
            puVar14 = (undefined8 *)*puVar3;
            puVar16 = puVar3;
          }
          puVar3 = puVar14;
          cVar5 = *(char *)((longlong)puVar14 + 0x19);
        }
        if (((*(char *)((longlong)puVar16 + 0x19) != '\0') ||
            (iVar7 < *(int *)((longlong)puVar16 + 0x1c))) ||
           ((iVar7 <= *(int *)((longlong)puVar16 + 0x1c) && (0 < *(int *)(puVar16 + 4))))) {
          FUN_140261ff0(param_1[0x12a],iVar7,0);
          if (*(int *)((longlong)plVar1 + 0x40c) == 0x4f4) {
            local_160 = (void *)0x0;
            uStack_158 = 0;
            local_150 = 0;
            FUN_1404b90f0(plVar1,&local_160);
            if (local_160 != (void *)0x0) {
              _Memory = local_160;
              if ((0xfff < (local_150 - (longlong)local_160 & 0xfffffffffffffffcU)) &&
                 (_Memory = *(void **)((longlong)local_160 + -8),
                 0x1f < (ulonglong)((longlong)local_160 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(_Memory);
            }
          }
          (**(code **)(*plVar1 + 0x468))(plVar1,param_1,*(undefined4 *)((longlong)param_2 + 0x39c));
          uVar9 = 0x3f;
LAB_140215d08:
          FUN_140231ff0(param_1,uVar9,0);
        }
LAB_140215d16:
        (**(code **)(*plVar1 + 0x528))(plVar1,0);
        FUN_140216090(param_1,plVar1);
        break;
      case 0x1f:
        if ((char)param_1[0x63e] == '\0') {
          iVar7 = *(int *)((longlong)plVar1 + 0x39c);
          puVar16 = *(undefined8 **)(param_1[0x12a] + 0x558);
          cVar5 = *(char *)((longlong)puVar16[1] + 0x19);
          puVar3 = (undefined8 *)puVar16[1];
          while (cVar5 == '\0') {
            if ((*(int *)((longlong)puVar3 + 0x1c) < iVar7) ||
               ((*(int *)((longlong)puVar3 + 0x1c) <= iVar7 && (*(int *)(puVar3 + 4) < 0)))) {
              puVar14 = (undefined8 *)puVar3[2];
            }
            else {
              puVar14 = (undefined8 *)*puVar3;
              puVar16 = puVar3;
            }
            puVar3 = puVar14;
            cVar5 = *(char *)((longlong)puVar14 + 0x19);
          }
          if (((*(char *)((longlong)puVar16 + 0x19) != '\0') ||
              (iVar7 < *(int *)((longlong)puVar16 + 0x1c))) ||
             ((iVar7 <= *(int *)((longlong)puVar16 + 0x1c) && (0 < *(int *)(puVar16 + 4))))) {
            FUN_140261ff0(param_1[0x12a],iVar7,0);
            (**(code **)(*plVar1 + 0x468))
                      (plVar1,param_1,*(undefined4 *)((longlong)param_2 + 0x39c));
            cVar5 = FUN_140216700(param_1,plVar1);
            if (cVar5 == '\0') {
              FUN_1402161b0(param_1,plVar1);
            }
            uVar9 = 0x3e;
            goto LAB_140215d08;
          }
          goto LAB_140215d16;
        }
        break;
      case 0x21:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          FUN_140212ef0(param_1,param_2,plVar1);
          FUN_14039a4f0(param_2,0,0);
          FUN_14039a820(param_2,0,0);
          FUN_14039b570(param_2,0,0);
          FUN_14039af90(param_2,0,0);
          FUN_14039b6f0(param_2,0,0);
          FUN_14039ab20(param_2,0,0);
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_f8,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          if ((((*(char *)((longlong)param_1 + 0x422) == '\0') ||
               (plVar15 = (longlong *)param_1[0x81], plVar15 == (longlong *)0x0)) &&
              (plVar15 = plVar1, plVar1 == (longlong *)0x0)) ||
             (param_1[0x80] = (longlong)plVar15, *(char *)((longlong)plVar15 + 0x41c) == '\0')) {
            FUN_14039ba70(param_2,1,0);
          }
          else {
            FUN_14039ba70(param_2,1);
          }
          goto LAB_140214f45;
        }
        break;
      case 0x28:
        iVar7 = *(int *)((longlong)plVar1 + 0x40c);
        if (iVar7 < 0x744) {
          if (iVar7 == 0x743) {
            *(undefined4 *)((longlong)param_2 + 0xb7c) = 2;
          }
          else if (iVar7 == 0x6db) {
            *(undefined4 *)(param_2 + 0x16f) = 2;
          }
          else if (iVar7 == 0x715) {
            *(undefined4 *)((longlong)param_2 + 0xb74) = 2;
          }
          else if ((iVar7 == 0x725) && (*(char *)((longlong)param_2 + 0x9e4) != '\0')) {
            FUN_140396650(param_2);
            *(undefined1 *)((longlong)param_2 + 0x985) = 0;
          }
        }
        else if (iVar7 == 0x815) {
LAB_140215af6:
          *(undefined4 *)(param_2 + 0x171) = 2;
          local_res20[0] = (int)plVar1[0xea];
          if (0 < local_res20[0]) {
            pcVar12 = (char *)FUN_1400cdbf0(param_2 + 0x173,local_res20);
            if (*pcVar12 != '\0') break;
            puVar13 = (undefined1 *)FUN_1400cdbf0(param_2 + 0x173,local_res20);
            *puVar13 = 1;
          }
          FUN_1404c1ec0(plVar1,local_180,param_2);
          pCVar11 = (CCPoint *)((longlong)param_2 + 0xb8c);
          cocos2d::CCPoint::operator+(pCVar11,local_178);
          cocos2d::CCPoint::operator=(pCVar11,local_178);
          fVar22 = *(float *)pCVar11 * *(float *)pCVar11 +
                   *(float *)(param_2 + 0x172) * *(float *)(param_2 + 0x172);
          if (fVar22 < 0.0) {
            fVar23 = sqrtf(fVar22);
          }
          else {
            fVar23 = SQRT(fVar22);
          }
          if (DAT_140623610 < fVar23) {
            cocos2d::CCPoint::operator*(pCVar11,fVar22);
            cocos2d::CCPoint::operator=(pCVar11,local_170);
          }
        }
        else if (iVar7 == 0xb32) {
          *(undefined4 *)(param_2 + 0x170) = 2;
        }
        else if (iVar7 == 0xe3d) goto LAB_140215af6;
        break;
      case 0x29:
        if ((*(char *)((longlong)param_1 + 0x309e) == '\0') &&
           (cVar5 = FUN_1402178c0(param_1,param_2,plVar1), cVar5 != '\0')) {
          FUN_140212ef0(param_1,param_2,plVar1);
          FUN_14039be30(param_2,0x29);
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_118,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          if ((((*(char *)((longlong)param_1 + 0x422) == '\0') ||
               (plVar15 = (longlong *)param_1[0x81], plVar15 == (longlong *)0x0)) &&
              (plVar15 = plVar1, plVar1 == (longlong *)0x0)) ||
             (param_1[0x80] = (longlong)plVar15, *(char *)((longlong)plVar15 + 0x41c) == '\0')) {
            uVar9 = 0;
          }
          else {
            uVar9 = 1;
          }
          FUN_14039ab20(param_2,1,uVar9);
          (**(code **)(*param_1 + 0x460))(param_1,1);
          goto LAB_140214f45;
        }
        break;
      case 0x2a:
        cVar5 = FUN_1402178c0(param_1,param_2,plVar1);
        if (cVar5 != '\0') {
          if (*(char *)((longlong)plVar1 + 0x41c) == '\0') {
            (**(code **)(*param_1 + 0x500))(param_1,*(char *)((longlong)param_2 + 0x9bf) == '\0');
          }
          pCVar11 = (CCPoint *)(**(code **)(*plVar1 + 200))(plVar1);
          pCVar11 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_138,pCVar11);
          cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x140),pCVar11);
          param_2[0x150] = (longlong)plVar1;
          if ((*(char *)((longlong)plVar1 + 0x41c) == '\0') &&
             (*(char *)((longlong)plVar1 + 0x516) == '\0')) {
            uVar9 = 0;
          }
          else {
            uVar9 = 1;
          }
          FUN_140212b00(param_1,param_2,*(char *)((longlong)param_2 + 0x9bf) == '\0',uVar9);
          FUN_1401993b0(plVar1);
          (**(code **)(*plVar1 + 0x558))(plVar1,param_2);
          FUN_140231ff0(param_1,0x34,0);
        }
        break;
      case 0x2e:
        FUN_140217e40(param_1,param_2,plVar1);
LAB_140215e78:
        pCVar8 = (CCRect *)(**(code **)(*param_2 + 0x490))(param_2);
        cocos2d::CCRect::operator=(this,pCVar8);
        fVar18 = cocos2d::CCRect::getMaxX(this);
        fVar19 = cocos2d::CCRect::getMinX(this);
        fVar20 = cocos2d::CCRect::getMaxY(this);
        fVar21 = cocos2d::CCRect::getMinY(this);
      }
switchD_140214c45_caseD_7:
      lVar17 = lVar17 + 1;
      param_3 = local_res18;
    } while (lVar17 < local_168);
  }
  return;
}

