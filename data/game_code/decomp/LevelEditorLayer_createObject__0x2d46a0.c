// LevelEditorLayer_createObject @ 0x2d46a0
// Body: 935 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402d46a0(longlong *param_1,undefined4 param_2,CCPoint *param_3,char param_4)

{
  undefined8 ***pppuVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  CCObject *this;
  CCObject *this_00;
  uint uVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  undefined1 auStack_c8 [32];
  char local_a8;
  char local_a7;
  undefined8 **local_a0;
  undefined8 **ppuStack_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined4 local_80 [2];
  undefined8 ***local_78;
  CCPoint *local_70;
  undefined8 ***local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1406ba040 ^ (ulonglong)auStack_c8;
  local_a7 = param_4;
  local_70 = param_3;
  plVar5 = (longlong *)FUN_14018b7d0(param_2);
  if (plVar5 != (longlong *)0x0) {
    local_80[0] = param_2;
    lVar6 = FUN_140348cb0();
    puVar7 = (undefined8 *)FUN_1401d0660(lVar6 + 0x140,local_80);
    if (0xf < (ulonglong)puVar7[3]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    local_68 = (undefined8 ****)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)puVar7 + lVar6) != '\0');
    FUN_14003a930(&local_68,puVar7);
    (**(code **)(*plVar5 + 0x140))(plVar5,0);
    if ((*(int *)((longlong)plVar5 + 0x40c) == 9) || (*(int *)((longlong)plVar5 + 0x40c) == 0x6b3))
    {
      *(undefined4 *)(plVar5 + 0x84) = 2;
    }
    (**(code **)(*plVar5 + 0x440))(plVar5);
    (**(code **)(*plVar5 + 0x448))(plVar5);
    uVar3 = local_50;
    uVar2 = local_58;
    pppuVar1 = local_68;
    local_a0 = (undefined8 **)0x0;
    ppuStack_98 = (undefined8 ***)0x0;
    local_90 = 0;
    local_88 = 0;
    local_a8 = 0xf < local_50;
    local_78 = &local_68;
    if (0xf < local_50) {
      local_78 = local_68;
    }
    if (0x7fffffffffffffff < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_140007b50();
    }
    local_88 = 0xf;
    if (local_58 < 0x10) {
      local_90 = local_58;
      local_a0 = *local_78;
      ppuStack_98 = local_78[1];
    }
    else {
      uVar12 = local_58 | 0xf;
      if (uVar12 < 0x8000000000000000) {
        if (uVar12 < 0x16) {
          uVar12 = 0x16;
        }
      }
      else {
        uVar12 = 0x7fffffffffffffff;
      }
      local_a0 = (undefined8 **)FUN_14003aa10(uVar12 + 1);
      local_90 = uVar2;
      local_88 = uVar12;
      memcpy(local_a0,local_78,uVar2 + 1);
    }
    FUN_14018e7b0(plVar5,&local_a0);
    local_a0 = (undefined8 **)0x0;
    ppuStack_98 = (undefined8 ***)0x0;
    local_90 = 0;
    ppppuVar11 = &local_68;
    if (local_a8 != '\0') {
      ppppuVar11 = (undefined8 ****)pppuVar1;
    }
    local_88 = 0xf;
    if (uVar2 < 0x10) {
      local_90 = uVar2;
      local_a0 = *ppppuVar11;
      ppuStack_98 = ppppuVar11[1];
    }
    else {
      uVar8 = uVar2 | 0xf;
      uVar12 = 0x7fffffffffffffff;
      if ((uVar8 < 0x8000000000000000) && (uVar12 = uVar8, uVar8 < 0x16)) {
        uVar12 = 0x16;
      }
      local_a0 = (undefined8 **)FUN_14003aa10(uVar12 + 1);
      local_90 = uVar2;
      local_88 = uVar12;
      memcpy(local_a0,ppppuVar11,uVar2 + 1);
    }
    (**(code **)(*plVar5 + 0x450))(plVar5,&local_a0);
    (**(code **)(*plVar5 + 0x5a8))(plVar5);
    if (*(short *)((longlong)param_1 + 0x387a) != -1) {
      *(short *)((longlong)plVar5 + 0x4ba) = *(short *)((longlong)param_1 + 0x387a);
    }
    lVar6 = *plVar5;
    uVar9 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_70,local_70);
    (**(code **)(lVar6 + 0x4b0))(plVar5,uVar9);
    (**(code **)(*param_1 + 0x478))(param_1,plVar5);
    FUN_1402d7bc0(param_1);
    if (local_a7 == '\0') {
      cocos2d::CCArray::removeAllObjects((CCArray *)param_1[0x716]);
      this = (CCObject *)FUN_1404d0770(0xa0);
      local_70 = (CCPoint *)this;
      cocos2d::CCObject::CCObject(this);
      *(undefined ***)this = UndoObject::vftable;
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x48) = 0;
      *(undefined2 *)(this + 0x50) = 0;
      FUN_1400de960(this + 0x54);
      this_00 = (CCObject *)FUN_1402e8940(plVar5);
      *(CCObject **)(this + 0x38) = this_00;
      cocos2d::CCObject::retain(this_00);
      *(undefined4 *)(this + 0x40) = 2;
      cocos2d::CCObject::autorelease(this);
      cocos2d::CCArray::removeAllObjects((CCArray *)param_1[0x716]);
      uVar10 = 1000;
      if (*(char *)((longlong)param_1 + 0x37ae) == '\0') {
        uVar10 = 200;
      }
      uVar4 = cocos2d::CCArray::count((CCArray *)param_1[0x715]);
      if (uVar10 <= uVar4) {
        cocos2d::CCArray::removeObjectAtIndex((CCArray *)param_1[0x715],0,true);
      }
      cocos2d::CCArray::addObject((CCArray *)param_1[0x715],this);
    }
    if (0xf < uVar3) {
      ppppuVar11 = (undefined8 ****)pppuVar1;
      if ((0xfff < uVar3 + 1) &&
         (ppppuVar11 = (undefined8 ****)pppuVar1[-1],
         0x1f < (ulonglong)((longlong)pppuVar1 + (-8 - (longlong)ppppuVar11)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar11);
    }
  }
  return plVar5;
}

