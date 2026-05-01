// Function: FUN_14018b7d0
// Original target: GameObject_createWithKey @ 0x18b7d0
// Ghidra entry: 14018b7d0
// Signature: undefined FUN_14018b7d0(void)
// Body size: 6830 bytes


CCObject * FUN_14018b7d0(int param_1)

{
  CCObject *pCVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  CCString *this;
  CCTextureCache *this_00;
  CCTexture2D *pCVar7;
  code *pcVar8;
  CCObject *this_01;
  uint uVar9;
  longlong lVar10;
  int local_res8 [2];
  CCObject *local_res10;
  CCObject *local_res18;
  
  local_res8[0] = param_1;
  lVar5 = FUN_140348cb0();
  pcVar6 = (char *)FUN_1401d0660(lVar5 + 0x140,local_res8);
  if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
    pcVar6 = *(char **)pcVar6;
  }
  if (param_1 == 0) {
    return (CCObject *)0x0;
  }
  lVar10 = -1;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (pcVar6[lVar5] != '\0');
  if (lVar5 == 0) {
    return (CCObject *)0x0;
  }
  if (param_1 < 0x11f) {
    if (param_1 != 0x11e) {
      switch(param_1) {
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0x1d:
      case 0x1e:
      case 0x20:
      case 0x21:
      case 0x23:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x43:
      case 99:
      case 0x65:
      case 0x69:
      case 0x6f:
      case 0x8c:
      case 0x8e:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
        break;
      default:
        goto switchD_14018b86f_caseD_e;
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
        goto switchD_14018b86f_caseD_16;
      case 0x1f:
        this_01 = (CCObject *)FUN_1404d0770(0x748);
        local_res10 = this_01;
        FUN_140495720(this_01);
        *(undefined ***)this_01 = StartPosObject::vftable;
        *(undefined ***)(this_01 + 0x140) = StartPosObject::vftable;
        *(undefined ***)(this_01 + 0x158) = StartPosObject::vftable;
        *(longlong *)(this_01 + 0x740) = 0;
        pcVar8 = (code *)PTR_FUN_140612d38;
        if ((code *)PTR_FUN_140612d38 != FUN_1404b1fa0) goto LAB_14018b8d6;
        cVar4 = FUN_1404b1fa0();
        goto LAB_14018b8d8;
      case 0x24:
      case 0x54:
      case 0x8d:
        goto switchD_14018b86f_caseD_24;
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x61:
      case 0x62:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x9a:
      case 0x9b:
      case 0x9c:
      case 0xb4:
      case 0xb5:
      case 0xb6:
      case 0xb7:
      case 0xb8:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbc:
      case 0xde:
      case 0xdf:
      case 0xe0:
        goto switchD_14018b86f_caseD_55;
      }
    }
switchD_14018b86f_caseD_a:
    local_res10 = (CCObject *)FUN_1404d0770(0x740);
    this_01 = (CCObject *)FUN_140495720(local_res10);
    if (this_01 == (CCObject *)0x0) goto LAB_14018c2ab;
    cVar4 = FUN_1404a5880(this_01,pcVar6);
    if (cVar4 != '\0') {
      cocos2d::CCObject::autorelease(this_01);
      goto LAB_14018c2ab;
    }
    goto LAB_14018bf63;
  }
  if (param_1 < 0x295) {
    if (param_1 != 0x294) {
      switch(param_1) {
      case 0x11f:
        break;
      default:
        goto switchD_14018b86f_caseD_e;
      case 0x177:
      case 0x178:
      case 0x179:
      case 0x17a:
      case 0x18a:
      case 0x18b:
      case 0x18c:
      case 0x18d:
      case 0x18e:
      case 399:
        goto switchD_14018b86f_caseD_55;
      }
    }
    goto switchD_14018b86f_caseD_a;
  }
  if (param_1 < 0x3e6) {
    if (param_1 != 0x3e5) {
      switch(param_1) {
      case 0x2a3:
      case 0x2a4:
      case 0x2a5:
      case 0x2a6:
      case 0x2a7:
      case 0x2a8:
      case 0x2e4:
      case 0x2e5:
      case 0x2e6:
      case 0x398:
      case 0x399:
      case 0x39b:
      case 0x39c:
        break;
      default:
        goto switchD_14018b86f_caseD_e;
      case 0x2e8:
      case 0x2e9:
      case 899:
      case 900:
      case 0x393:
        goto switchD_14018b86f_caseD_a;
      case 0x2eb:
      case 0x2ed:
        goto switchD_14018b96a_caseD_2eb;
      case 0x385:
switchD_14018b96a_caseD_385:
        this_01 = (CCObject *)FUN_1404d0770(0x750);
        local_res10 = this_01;
        FUN_140495720(this_01);
        *(undefined ***)this_01 = EnhancedTriggerObject::vftable;
        *(undefined ***)(this_01 + 0x140) = EnhancedTriggerObject::vftable;
        *(undefined ***)(this_01 + 0x158) = EnhancedTriggerObject::vftable;
        *(longlong *)(this_01 + 0x740) = 0;
        *(longlong *)(this_01 + 0x748) = 0;
        cVar4 = FUN_1404a5880(this_01,pcVar6);
        goto LAB_14018b8d8;
      case 0x392:
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          local_res10 = (CCObject *)FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res10);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
        }
        plVar2 = DAT_1406c2ed8;
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          local_res10 = (CCObject *)FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res10);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
        }
        uVar9 = 0x3b;
        if ((int)*(uint *)((longlong)plVar2 + 0x3cc) < 0x3b) {
          uVar9 = *(uint *)((longlong)plVar2 + 0x3cc);
        }
        if ((int)uVar9 < 1) {
          FUN_1401827f0(DAT_1406c2ed8,0);
          pcVar6 = "bigFont.png";
        }
        else {
          FUN_1401827f0(DAT_1406c2ed8,uVar9);
          this = cocos2d::CCString::createWithFormat("gjFont%02d.png",(ulonglong)uVar9);
          pcVar6 = cocos2d::CCString::getCString(this);
        }
        this_00 = cocos2d::CCTextureCache::sharedTextureCache();
        pCVar7 = cocos2d::CCTextureCache::addImage(this_00,pcVar6,false);
        this_01 = (CCObject *)FUN_1401a74b0(pCVar7);
        goto LAB_14018c2ab;
      case 0x396:
      case 0x397:
        goto switchD_14018b96a_caseD_396;
      }
    }
switchD_14018b86f_caseD_55:
    local_res10 = (CCObject *)FUN_1404d0770(0x5b8);
    this_01 = (CCObject *)FUN_14018b500(local_res10);
    if (this_01 == (CCObject *)0x0) goto LAB_14018c2ab;
    *(undefined4 *)(this_01 + 0x1c) = 0xd;
    bVar3 = cocos2d::CCSprite::initWithSpriteFrameName((CCSprite *)this_01,pcVar6);
    if (bVar3) {
      FUN_14018dcf0(this_01);
      *(undefined4 *)(this_01 + 0x4e8) = 4;
      *(CCSprite *)(this_01 + 0x139) = (CCSprite)0x0;
      cocos2d::CCObject::autorelease(this_01);
      goto LAB_14018c2ab;
    }
    goto LAB_14018bf63;
  }
  if (param_1 < 0x4f5) {
    if (param_1 != 0x4f4) {
      switch(param_1) {
      case 0x3e6:
      case 999:
      case 1000:
      case 0x3fb:
      case 0x3fc:
      case 0x3fd:
      case 0x41a:
      case 0x41b:
      case 0x41c:
      case 0x41d:
      case 0x41e:
      case 0x41f:
      case 0x420:
      case 0x421:
      case 0x422:
      case 0x423:
      case 0x424:
      case 0x425:
        goto switchD_14018b86f_caseD_55;
      default:
        goto switchD_14018b86f_caseD_e;
      case 0x3ee:
      case 0x3ef:
      case 0x419:
        goto switchD_14018b86f_caseD_a;
      case 0x3fe:
switchD_14018b86f_caseD_24:
        this_01 = (CCObject *)FUN_1404a1c50(pcVar6);
        goto LAB_14018c2ab;
      }
    }
    this_01 = (CCObject *)FUN_1404d0770(0x790);
    local_res10 = this_01;
    FUN_140495720(this_01);
    *(undefined ***)this_01 = SpawnTriggerGameObject::vftable;
    *(undefined ***)(this_01 + 0x140) = SpawnTriggerGameObject::vftable;
    *(undefined ***)(this_01 + 0x158) = SpawnTriggerGameObject::vftable;
    *(longlong *)(this_01 + 0x740) = 0;
    *(longlong *)(this_01 + 0x748) = 0;
    *(longlong *)(this_01 + 0x750) = 0;
    *(undefined4 *)(this_01 + 0x758) = 0;
    *(longlong *)(this_01 + 0x760) = 0;
    *(longlong *)(this_01 + 0x768) = 0;
    *(longlong *)(this_01 + 0x770) = 0;
    *(longlong *)(this_01 + 0x778) = 0;
    *(longlong *)(this_01 + 0x780) = 0;
    this_01[0x788] = (CCObject)0x0;
    pcVar8 = *(code **)(*(longlong *)this_01 + 0x48);
    if (pcVar8 != FUN_1404b9080) goto LAB_14018bb26;
    cVar4 = FUN_1404b9080();
    goto LAB_14018b8d8;
  }
  if (param_1 < 0x62f) {
    if (param_1 != 0x62e) {
      switch(param_1) {
      case 0x4fb:
      case 0x531:
      case 0x533:
      case 0x534:
      case 0x536:
      case 0x543:
      case 0x5f0:
        goto switchD_14018b86f_caseD_a;
      default:
        goto switchD_14018b86f_caseD_e;
      case 0x52f:
      case 0x530:
switchD_14018b96a_caseD_396:
        this_01 = (CCObject *)FUN_1404d0770(0x610);
        local_res10 = this_01;
        FUN_14018b500(this_01);
        *(undefined ***)this_01 = AnimatedGameObject::vftable;
        *(undefined ***)(this_01 + 0x140) = AnimatedGameObject::vftable;
        *(undefined ***)(this_01 + 0x158) = AnimatedGameObject::vftable;
        *(undefined ***)(this_01 + 0x5b8) = AnimatedGameObject::vftable;
        *(undefined ***)(this_01 + 0x5c0) = AnimatedGameObject::vftable;
        *(longlong *)(this_01 + 0x5c8) = 0;
        *(longlong *)(this_01 + 0x5d0) = 0;
        *(longlong *)(this_01 + 0x5d8) = 0;
        *(undefined2 *)(this_01 + 0x5e0) = 0;
        *(longlong *)(this_01 + 0x5e8) = 0;
        *(longlong *)(this_01 + 0x5f0) = 0;
        *(longlong *)(this_01 + 0x5f8) = 0;
        *(longlong *)(this_01 + 0x600) = 0xf;
        this_01[0x5e8] = (CCObject)0x0;
        this_01[0x608] = (CCObject)0x0;
        *(undefined4 *)(this_01 + 0x60c) = 0;
        cVar4 = FUN_1404a2a40(this_01,param_1);
        goto LAB_14018b8d8;
      case 0x532:
      case 0x535:
        goto switchD_14018b86f_caseD_24;
      case 0x542:
        goto switchD_14018b96a_caseD_385;
      case 0x5ec:
      case 0x5ee:
      case 0x5ef:
      case 0x5f1:
      case 0x5f2:
      case 0x5f3:
      case 0x5f4:
      case 0x5f5:
      case 0x5f6:
      case 0x5f7:
      case 0x5f8:
        break;
      }
    }
    goto switchD_14018b86f_caseD_55;
  }
  if (param_1 < 0x714) {
    if (param_1 == 0x713) {
switchD_14018bc0e_caseD_64b:
      this_01 = (CCObject *)FUN_1404d0770(0x750);
      local_res10 = this_01;
      FUN_140495720(this_01);
      *(undefined ***)this_01 = CountTriggerGameObject::vftable;
      *(undefined ***)(this_01 + 0x140) = CountTriggerGameObject::vftable;
      *(undefined ***)(this_01 + 0x158) = CountTriggerGameObject::vftable;
      *(longlong *)(this_01 + 0x740) = 0;
      *(undefined2 *)(this_01 + 0x748) = 0;
      *(undefined4 *)(this_01 + 0x74c) = 0x3f800000;
      cVar4 = FUN_1404a5880(this_01,pcVar6);
      goto LAB_14018b8d8;
    }
    switch(param_1) {
    case 0x62f:
    case 0x637:
    case 0x638:
    case 0x639:
    case 0x652:
    case 0x653:
    case 0x654:
    case 0x6a1:
    case 0x6a2:
    case 0x6a3:
    case 0x6a9:
    case 0x6aa:
    case 0x6ab:
    case 0x6ac:
    case 0x6ad:
    case 0x6ae:
    case 0x6c6:
    case 0x6c7:
    case 0x6c8:
    case 0x6d8:
      goto switchD_14018b86f_caseD_55;
    case 0x630:
      goto switchD_14018b96a_caseD_396;
    case 0x631:
    case 0x633:
    case 0x635:
    case 0x63b:
    case 0x63e:
    case 0x64c:
    case 0x64d:
    case 0x64e:
    case 0x6db:
      goto switchD_14018b86f_caseD_a;
    default:
      goto switchD_14018b86f_caseD_e;
    case 0x63a:
switchD_14018bc0e_caseD_63a:
      this_01 = (CCObject *)FUN_1404a1c50(pcVar6);
      *(undefined4 *)(this_01 + 0x4e8) = 1;
      goto LAB_14018c2ab;
    case 0x64b:
      goto switchD_14018bc0e_caseD_64b;
    case 0x64f:
      this_01 = (CCObject *)FUN_1404d0770(0x790);
      local_res10 = this_01;
      FUN_140495720(this_01);
      *(undefined ***)this_01 = LabelGameObject::vftable;
      *(undefined ***)(this_01 + 0x140) = LabelGameObject::vftable;
      *(undefined ***)(this_01 + 0x158) = LabelGameObject::vftable;
      *(longlong *)(this_01 + 0x740) = 0;
      this_01[0x748] = (CCObject)0x0;
      *(longlong *)(this_01 + 0x750) = 0;
      *(longlong *)(this_01 + 0x758) = 0;
      *(longlong *)(this_01 + 0x760) = 0;
      *(longlong *)(this_01 + 0x768) = 0xf;
      this_01[0x750] = (CCObject)0x0;
      this_01[0x770] = (CCObject)0x0;
      *(undefined4 *)(this_01 + 0x774) = 0;
      this_01[0x778] = (CCObject)0x0;
      *(undefined4 *)(this_01 + 0x77c) = 0;
      this_01[0x780] = (CCObject)0x0;
      *(undefined4 *)(this_01 + 0x784) = 0;
      this_01[0x788] = (CCObject)0x0;
      pcVar8 = *(code **)(*(longlong *)this_01 + 0x48);
      if (pcVar8 != FUN_1404b3450) goto LAB_14018bb26;
      cVar4 = FUN_1404b3450(this_01);
      break;
    case 0x650:
      this_01 = (CCObject *)FUN_1404d0770(0x768);
      local_res10 = this_01;
      FUN_140495720(this_01);
      *(undefined ***)this_01 = TriggerControlGameObject::vftable;
      *(undefined ***)(this_01 + 0x140) = TriggerControlGameObject::vftable;
      *(undefined ***)(this_01 + 0x158) = TriggerControlGameObject::vftable;
      pCVar1 = this_01 + 0x740;
      *(longlong *)pCVar1 = 0;
      *(longlong *)(this_01 + 0x748) = 0;
      *(longlong *)(this_01 + 0x750) = 0;
      *(longlong *)(this_01 + 0x758) = 0xf;
      *pCVar1 = (CCObject)0x0;
      *(undefined4 *)(this_01 + 0x760) = 0;
      do {
        lVar10 = lVar10 + 1;
      } while (pcVar6[lVar10] != '\0');
      FUN_14003cce0(pCVar1,pcVar6,lVar10);
      cVar4 = FUN_1404a5880(this_01,pcVar6);
      break;
    case 0x6a8:
    case 0x6d7:
      this_01 = (CCObject *)FUN_1404d0770(0x758);
      local_res10 = this_01;
      FUN_140495720(this_01);
      *(undefined2 *)(this_01 + 0x740) = 0;
      *(undefined ***)this_01 = DashRingObject::vftable;
      *(undefined ***)(this_01 + 0x140) = DashRingObject::vftable;
      *(undefined ***)(this_01 + 0x158) = DashRingObject::vftable;
      *(undefined4 *)(this_01 + 0x748) = 0x3f800000;
      *(undefined8 *)(this_01 + 0x74c) = 0x3f800000;
      *(undefined2 *)(this_01 + 0x754) = 0;
      cVar4 = FUN_1404a5880(this_01,pcVar6);
      if (cVar4 != '\0') {
        this_01[0x439] = (CCObject)0x1;
        this_01[0x5d0] = (CCObject)0x1;
        cocos2d::CCObject::autorelease(this_01);
        goto LAB_14018c2ab;
      }
      goto LAB_14018c094;
    }
    goto LAB_14018b8d8;
  }
  if (param_1 < 0x7e0) {
    if (param_1 != 0x7df) {
      switch(param_1) {
      case 0x714:
      case 0x715:
      case 0x716:
      case 0x717:
      case 0x718:
      case 0x71a:
      case 0x71b:
      case 0x725:
      case 0x743:
      case 0x778:
      case 0x779:
      case 0x77d:
      case 0x78b:
      case 0x78d:
      case 0x78f:
        goto switchD_14018b86f_caseD_a;
      case 0x719:
        goto switchD_14018bc0e_caseD_64b;
      default:
        goto switchD_14018b86f_caseD_e;
      case 0x727:
      case 0x728:
      case 0x729:
      case 0x72a:
      case 0x72f:
      case 0x730:
      case 0x731:
      case 0x732:
      case 0x739:
      case 0x73a:
      case 0x73b:
      case 0x73c:
      case 0x73d:
      case 0x73e:
      case 0x73f:
      case 0x740:
      case 0x741:
      case 0x742:
      case 0x744:
      case 0x790:
      case 0x791:
      case 0x792:
      case 0x793:
        goto switchD_14018b86f_caseD_55;
      case 0x77a:
      case 0x77c:
        break;
      case 0x77b:
switchD_14018b86f_caseD_16:
        this_01 = (CCObject *)FUN_1404d0770(0x828);
        local_res10 = this_01;
        FUN_140495720(this_01);
        *(undefined ***)this_01 = EnterEffectObject::vftable;
        *(undefined ***)(this_01 + 0x140) = EnterEffectObject::vftable;
        *(undefined ***)(this_01 + 0x158) = EnterEffectObject::vftable;
        *(undefined8 *)(this_01 + 0x740) = 0;
        *(undefined8 *)(this_01 + 0x748) = 0;
        *(undefined8 *)(this_01 + 0x750) = 0;
        *(undefined8 *)(this_01 + 0x758) = 0;
        *(undefined8 *)(this_01 + 0x760) = 0;
        *(undefined8 *)(this_01 + 0x768) = 0;
        *(undefined8 *)(this_01 + 0x770) = 0;
        *(undefined4 *)(this_01 + 0x778) = 0;
        this_01[0x77c] = (CCObject)0x0;
        cocos2d::CCPoint::CCPoint((CCPoint *)(this_01 + 0x780));
        this_01[0x788] = (CCObject)0x0;
        *(undefined8 *)(this_01 + 0x78c) = 0;
        *(undefined8 *)(this_01 + 0x794) = 0x40000000;
        *(undefined4 *)(this_01 + 0x79c) = 0;
        *(undefined8 *)(this_01 + 0x7a0) = 0x40000000;
        *(undefined8 *)(this_01 + 0x7a8) = 0;
        *(undefined8 *)(this_01 + 0x7b0) = 0;
        *(undefined8 *)(this_01 + 0x7b8) = 0;
        *(undefined4 *)(this_01 + 0x7c0) = 0;
        *(undefined2 *)(this_01 + 0x7c4) = 0;
        *(undefined4 *)(this_01 + 0x7c8) = 0x3f800000;
        *(undefined8 *)(this_01 + 0x7cc) = 0x3f800000;
        *(undefined8 *)(this_01 + 0x7d4) = 0;
        *(undefined8 *)(this_01 + 0x7dc) = 0;
        *(undefined8 *)(this_01 + 0x7e4) = 0;
        *(undefined2 *)(this_01 + 0x7ec) = 0;
        *(undefined4 *)(this_01 + 0x7f0) = 0;
        *(undefined2 *)(this_01 + 0x7f4) = 0;
        *(undefined8 *)(this_01 + 0x7f8) = 0;
        *(undefined4 *)(this_01 + 0x800) = 0;
        this_01[0x804] = (CCObject)0x0;
        cocos2d::CCPoint::CCPoint((CCPoint *)(this_01 + 0x808));
        cocos2d::CCPoint::CCPoint((CCPoint *)(this_01 + 0x810));
        this_01[0x818] = (CCObject)0x0;
        *(undefined4 *)(this_01 + 0x820) = 0;
        cVar4 = FUN_1404a5880(this_01,pcVar6);
        if (cVar4 != '\0') {
          *(undefined4 *)(this_01 + 0x3a0) = 0x2d;
          *(undefined4 *)(this_01 + 0x3a8) = 0x2d;
          cocos2d::CCObject::autorelease(this_01);
          goto LAB_14018c2ab;
        }
        goto LAB_14018c094;
      case 0x78c:
        this_01 = (CCObject *)FUN_1404d0770(0x748);
        local_res10 = this_01;
        FUN_140495720(this_01);
        *(undefined ***)this_01 = PlayerControlGameObject::vftable;
        *(undefined ***)(this_01 + 0x140) = PlayerControlGameObject::vftable;
        *(undefined ***)(this_01 + 0x158) = PlayerControlGameObject::vftable;
        *(undefined4 *)(this_01 + 0x740) = 0;
        pcVar8 = (code *)PTR_FUN_1406195b8;
        if ((code *)PTR_FUN_1406195b8 != FUN_1404c27b0) goto LAB_14018bf56;
        cVar4 = FUN_1404c27b0();
        goto LAB_14018bf58;
      case 0x78e:
switchD_14018be35_caseD_78e:
        this_01 = (CCObject *)FUN_1404d0770(0x7f0);
        local_res10 = this_01;
        FUN_140496310(this_01);
        *(undefined ***)this_01 = SongTriggerGameObject::vftable;
        *(undefined ***)(this_01 + 0x140) = SongTriggerGameObject::vftable;
        *(undefined ***)(this_01 + 0x158) = SongTriggerGameObject::vftable;
        *(undefined2 *)(this_01 + 0x7e8) = 0;
        this_01[0x7ea] = (CCObject)0x0;
        *(undefined4 *)(this_01 + 0x7ec) = 0;
        cVar4 = FUN_1404a5880(this_01,pcVar6);
        goto LAB_14018b8d8;
      case 0x7dc:
        goto switchD_14018b96a_caseD_396;
      }
    }
switchD_14018be35_caseD_77a:
    this_01 = (CCObject *)FUN_1404d0770(0x760);
    local_res10 = this_01;
    FUN_140495720(this_01);
    *(undefined ***)this_01 = CameraTriggerGameObject::vftable;
    *(undefined ***)(this_01 + 0x140) = CameraTriggerGameObject::vftable;
    *(undefined ***)(this_01 + 0x158) = CameraTriggerGameObject::vftable;
    *(undefined2 *)(this_01 + 0x740) = 0;
    *(undefined8 *)(this_01 + 0x744) = 0x3f800000;
    this_01[0x74c] = (CCObject)0x0;
    *(undefined4 *)(this_01 + 0x750) = 0;
    this_01[0x754] = (CCObject)0x0;
    *(undefined4 *)(this_01 + 0x758) = 0x3f800000;
    cVar4 = FUN_1404a5880(this_01,pcVar6);
    goto LAB_14018b8d8;
  }
  if (param_1 < 0xa2e) {
    if (param_1 != 0xa2d) {
      switch(param_1) {
      case 0x7e0:
      case 0x80e:
        goto switchD_14018be35_caseD_77a;
      default:
        goto switchD_14018b86f_caseD_e;
      case 0x7e4:
      case 0x7e5:
      case 0x7e6:
      case 0x7e7:
      case 0x7e8:
      case 0x7e9:
      case 0x7ea:
      case 0x7eb:
      case 0x7ec:
      case 0x7ed:
      case 0x7ee:
      case 0x7ef:
      case 0x7f0:
      case 0x7f1:
      case 0x7f2:
      case 0x7f3:
      case 0x7f4:
      case 0x7f5:
      case 0x7f6:
      case 0x7f7:
      case 0x7f8:
      case 0x7f9:
      case 0x7fa:
      case 0x7fb:
      case 0x7fc:
      case 0x7fd:
      case 0x800:
      case 0x801:
      case 0x802:
      case 0x803:
      case 0x804:
      case 0x805:
      case 0x806:
      case 0x8af:
      case 0x8c6:
        goto switchD_14018b86f_caseD_55;
      case 0x7fe:
      case 0x7ff:
      case 0x807:
        this_01 = (CCObject *)FUN_1404d0770(0x5c0);
        local_res10 = this_01;
        FUN_14018b500(this_01);
        *(undefined ***)this_01 = SpecialAnimGameObject::vftable;
        *(undefined ***)(this_01 + 0x140) = SpecialAnimGameObject::vftable;
        *(undefined ***)(this_01 + 0x158) = SpecialAnimGameObject::vftable;
        *(undefined2 *)(this_01 + 0x5b8) = 0;
        *(undefined4 *)(this_01 + 0x1c) = 0xd;
        bVar3 = cocos2d::CCSprite::initWithSpriteFrameName((CCSprite *)this_01,pcVar6);
        if (bVar3) {
          FUN_14018dcf0(this_01);
          *(CCSprite *)(this_01 + 0x139) = (CCSprite)0x1;
          *(undefined4 *)(this_01 + 0x4e8) = 4;
          *(CCSprite *)(this_01 + 0x139) = (CCSprite)0x0;
          *(CCSprite *)(this_01 + 0x139) = (CCSprite)0x0;
          cocos2d::CCObject::autorelease(this_01);
          goto LAB_14018c2ab;
        }
        goto LAB_14018bf63;
      case 0x80f:
        this_01 = (CCObject *)FUN_1404d0770(0x748);
        local_res10 = this_01;
        FUN_140495720(this_01);
        *(undefined ***)this_01 = CheckpointGameObject::vftable;
        *(undefined ***)(this_01 + 0x140) = CheckpointGameObject::vftable;
        *(undefined ***)(this_01 + 0x158) = CheckpointGameObject::vftable;
        this_01[0x740] = (CCObject)0x0;
        *(undefined4 *)(this_01 + 0x744) = 0;
        pcVar8 = (code *)PTR_FUN_140611800;
        if ((code *)PTR_FUN_140611800 != FUN_1404b9d90) goto LAB_14018b8d6;
        cVar4 = FUN_1404b9d90(this_01);
        break;
      case 0x810:
switchD_14018b96a_caseD_2eb:
        this_01 = (CCObject *)FUN_1404b21c0(pcVar6,0);
        goto LAB_14018c2ab;
      case 0x811:
        this_01 = (CCObject *)FUN_14049fb00();
        goto LAB_14018c2ab;
      case 0x812:
        goto switchD_14018b86f_caseD_a;
      case 0x813:
        this_01 = (CCObject *)FUN_1404d0770(0x758);
        local_res10 = this_01;
        FUN_140495720(this_01);
        *(undefined ***)this_01 = TransformTriggerGameObject::vftable;
        *(undefined ***)(this_01 + 0x140) = TransformTriggerGameObject::vftable;
        *(undefined ***)(this_01 + 0x158) = TransformTriggerGameObject::vftable;
        *(undefined4 *)(this_01 + 0x740) = 0x3f800000;
        *(undefined8 *)(this_01 + 0x744) = 0x3f800000;
        *(undefined8 *)(this_01 + 0x74c) = 0;
        this_01[0x754] = (CCObject)0x0;
        cVar4 = FUN_1404a5880(this_01,pcVar6);
        break;
      case 0x814:
        this_01 = (CCObject *)FUN_1404d0770(0x758);
        local_res10 = this_01;
        FUN_140495720(this_01);
        *(undefined8 *)(this_01 + 0x740) = 0;
        *(undefined8 *)(this_01 + 0x748) = 0;
        *(undefined8 *)(this_01 + 0x750) = 0;
        *(undefined ***)this_01 = RandTriggerGameObject::vftable;
        *(undefined ***)(this_01 + 0x140) = RandTriggerGameObject::vftable;
        *(undefined ***)(this_01 + 0x158) = RandTriggerGameObject::vftable;
        if ((code *)PTR_FUN_140618b18 == FUN_1404b41c0) {
          pcVar6 = "edit_eAdvRandomBtn_001.png";
LAB_14018c230:
          cVar4 = FUN_1404a5880(this_01,pcVar6);
        }
        else {
          cVar4 = (*(code *)PTR_FUN_140618b18)(this_01);
        }
        if (cVar4 != '\0') {
          cocos2d::CCObject::autorelease(this_01);
          goto LAB_14018c2ab;
        }
LAB_14018c239:
        (**(code **)(*(longlong *)this_01 + 8))(this_01,1);
        this_01 = (CCObject *)0x0;
        goto LAB_14018c2ab;
      case 0x815:
switchD_14018c020_caseD_815:
        this_01 = (CCObject *)FUN_1404d0770(0x758);
        local_res10 = this_01;
        FUN_140495720(this_01);
        *(undefined ***)this_01 = ForceBlockGameObject::vftable;
        *(undefined ***)(this_01 + 0x140) = ForceBlockGameObject::vftable;
        *(undefined ***)(this_01 + 0x158) = ForceBlockGameObject::vftable;
        *(longlong *)(this_01 + 0x740) = 0;
        *(undefined4 *)(this_01 + 0x748) = 0;
        *(undefined2 *)(this_01 + 0x74c) = 0;
        *(undefined4 *)(this_01 + 0x750) = 0;
        cVar4 = FUN_1404a5880(this_01,pcVar6);
      }
      goto LAB_14018b8d8;
    }
    goto switchD_14018b86f_caseD_55;
  }
  if (0x10cc < param_1) {
    switch(param_1) {
    case 0x1131:
    case 0x1132:
    case 0x1133:
    case 0x1134:
    case 0x1135:
    case 0x1136:
    case 0x1137:
    case 0x1138:
    case 0x1139:
    case 0x113a:
    case 0x113b:
    case 0x113c:
    case 0x113d:
    case 0x113e:
    case 0x113f:
    case 0x1140:
    case 0x1141:
    case 0x1142:
    case 0x1143:
    case 0x1144:
    case 0x1145:
    case 0x1146:
    case 0x1147:
    case 0x1148:
    case 0x1149:
    case 0x114a:
    case 0x114b:
    case 0x114c:
    case 0x114d:
    case 0x114e:
    case 0x114f:
    case 0x1150:
    case 0x1151:
    case 0x1152:
    case 0x1153:
    case 0x1154:
    case 0x1155:
    case 0x1156:
    case 0x1157:
    case 0x1158:
    case 0x1159:
    case 0x115a:
    case 0x115b:
    case 0x115c:
    case 0x115d:
    case 0x115e:
    case 0x115f:
    case 0x1160:
    case 0x1161:
    case 0x1162:
    case 0x1163:
    case 0x1164:
    case 0x1165:
    case 0x1166:
    case 0x1167:
    case 0x1168:
    case 0x1169:
    case 0x116a:
    case 0x116b:
    case 0x116c:
    case 0x116d:
    case 0x116e:
    case 0x116f:
    case 0x1170:
    case 0x1171:
    case 0x1172:
    case 0x1173:
    case 0x1174:
    case 0x1175:
    case 0x1176:
    case 0x1177:
    case 0x1178:
    case 0x1179:
    case 0x117a:
    case 0x117b:
    case 0x117c:
    case 0x117d:
    case 0x117e:
    case 0x117f:
    case 0x1180:
    case 0x1181:
    case 0x1182:
    case 0x1183:
    case 0x1184:
    case 0x1185:
    case 0x1186:
    case 0x1187:
    case 0x1188:
    case 0x1189:
    case 0x118a:
    case 0x118b:
    case 0x118c:
    case 0x118d:
    case 0x118e:
    case 0x118f:
    case 0x1190:
    case 0x1191:
    case 0x1192:
    case 0x1193:
    case 0x1194:
    case 0x1195:
    case 0x1196:
    case 0x1197:
    case 0x1198:
    case 0x1199:
    case 0x119a:
    case 0x119b:
    case 0x119c:
    case 0x119d:
    case 0x119e:
    case 0x119f:
    case 0x11a0:
    case 0x11a1:
    case 0x11a2:
    case 0x11a3:
    case 0x11a4:
    case 0x11a5:
    case 0x11a6:
    case 0x11a7:
    case 0x11a8:
    case 0x11a9:
    case 0x11aa:
    case 0x11ab:
    case 0x11ac:
    case 0x11ad:
    case 0x11ae:
    case 0x11af:
    case 0x11b0:
    case 0x11b1:
    case 0x11b2:
    case 0x11b3:
    case 0x11b4:
    case 0x11b5:
    case 0x11b6:
    case 0x11b7:
    case 0x11b8:
    case 0x11b9:
    case 0x11ba:
    case 0x11bb:
      goto switchD_14018b86f_caseD_a;
    }
    goto switchD_14018b86f_caseD_e;
  }
  if (param_1 == 0x10cc) goto switchD_14018b86f_caseD_55;
  if (param_1 < 0xb31) {
    if (((param_1 != 0xb30) && (param_1 != 0xa45)) && (param_1 != 0xa46)) {
      bVar3 = param_1 == 0xa86;
LAB_14018c29a:
      if (!bVar3) goto switchD_14018b86f_caseD_e;
    }
    goto switchD_14018b86f_caseD_55;
  }
  if (param_1 < 0xc94) {
    if (param_1 == 0xc93) goto switchD_14018b86f_caseD_55;
    switch(param_1) {
    case 0xb31:
    case 0xb33:
    case 0xb34:
    case 0xb35:
    case 0xb36:
    case 0xb37:
    case 0xb38:
    case 0xb39:
    case 0xb3a:
    case 0xb3b:
    case 0xb3c:
    case 0xb3d:
    case 0xb3e:
    case 0xb3f:
    case 0xb40:
    case 0xb41:
    case 0xb42:
    case 0xb43:
    case 0xb44:
    case 0xb45:
    case 0xb46:
    case 0xb47:
    case 0xb48:
    case 0xb49:
    case 0xb4a:
    case 0xb4b:
    case 0xb4c:
    case 0xb4d:
    case 0xb4e:
    case 3000:
    case 0xbb9:
    case 0xbba:
    case 0xc2f:
    case 0xc30:
    case 0xc31:
      goto switchD_14018b86f_caseD_55;
    case 0xb32:
    case 0xb55:
    case 0xb6e:
    case 2999:
    case 0xbbd:
      goto switchD_14018b86f_caseD_a;
    case 0xb4f:
    case 0xb50:
    case 0xb51:
      this_01 = (CCObject *)FUN_1404d0770(0x598);
      local_res10 = this_01;
      FUN_1401377e0(this_01);
      *(undefined ***)this_01 = SmartGameObject::vftable;
      *(undefined ***)(this_01 + 0x140) = SmartGameObject::vftable;
      *(undefined ***)(this_01 + 0x158) = SmartGameObject::vftable;
      *(CCSprite *)(this_01 + 0x550) = (CCSprite)0x0;
      *(undefined8 *)(this_01 + 0x558) = 0;
      *(undefined8 *)(this_01 + 0x560) = 0;
      *(undefined8 *)(this_01 + 0x568) = 0;
      *(undefined8 *)(this_01 + 0x570) = 0xf;
      *(CCSprite *)(this_01 + 0x558) = (CCSprite)0x0;
      *(undefined8 *)(this_01 + 0x578) = 0;
      *(undefined8 *)(this_01 + 0x580) = 0;
      *(undefined8 *)(this_01 + 0x588) = 0;
      *(undefined8 *)(this_01 + 0x590) = 0xf;
      *(CCSprite *)(this_01 + 0x578) = (CCSprite)0x0;
      *(undefined4 *)(this_01 + 0x1c) = 0xd;
      bVar3 = cocos2d::CCSprite::initWithSpriteFrameName((CCSprite *)this_01,pcVar6);
      if (bVar3) {
        FUN_14018dcf0(this_01);
        *(CCSprite *)(this_01 + 0x139) = (CCSprite)0x1;
        do {
          lVar10 = lVar10 + 1;
        } while (pcVar6[lVar10] != '\0');
        FUN_14003cce0((CCSprite *)(this_01 + 0x578),pcVar6,lVar10);
        *(undefined4 *)(this_01 + 0x4e8) = 5;
        *(CCSprite *)(this_01 + 0x139) = (CCSprite)0x0;
        cocos2d::CCObject::autorelease(this_01);
        goto LAB_14018c2ab;
      }
      goto LAB_14018c094;
    default:
      goto switchD_14018b86f_caseD_e;
    case 0xb53:
      this_01 = (CCObject *)FUN_1404d0770(0x778);
      local_res10 = this_01;
      FUN_140495720(this_01);
      *(undefined ***)this_01 = GameOptionsTrigger::vftable;
      *(undefined ***)(this_01 + 0x140) = GameOptionsTrigger::vftable;
      *(undefined ***)(this_01 + 0x158) = GameOptionsTrigger::vftable;
      *(longlong *)(this_01 + 0x740) = 0;
      *(longlong *)(this_01 + 0x748) = 0;
      *(longlong *)(this_01 + 0x750) = 0;
      *(longlong *)(this_01 + 0x758) = 0;
      *(longlong *)(this_01 + 0x760) = 0;
      *(longlong *)(this_01 + 0x768) = 0;
      *(longlong *)(this_01 + 0x770) = 0;
      cVar4 = FUN_1404a5880(this_01,pcVar6);
      break;
    case 0xb54:
      this_01 = (CCObject *)FUN_1404d0770(0x760);
      local_res10 = this_01;
      FUN_140495720(this_01);
      *(undefined ***)this_01 = RotateGameplayGameObject::vftable;
      *(undefined ***)(this_01 + 0x140) = RotateGameplayGameObject::vftable;
      *(undefined ***)(this_01 + 0x158) = RotateGameplayGameObject::vftable;
      *(longlong *)(this_01 + 0x740) = 0;
      *(undefined2 *)(this_01 + 0x748) = 0;
      *(undefined4 *)(this_01 + 0x74c) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x750) = 0x3f800000;
      *(undefined2 *)(this_01 + 0x754) = 0;
      *(undefined4 *)(this_01 + 0x758) = 0;
      *(undefined2 *)(this_01 + 0x75c) = 0;
      pcVar8 = (code *)PTR_FUN_14061b818;
      if ((code *)PTR_FUN_14061b818 == FUN_1404c3ef0) {
        cVar4 = FUN_1404c3ef0(this_01);
      }
      else {
LAB_14018b8d6:
        cVar4 = (*pcVar8)(this_01);
      }
      break;
    case 0xb56:
    case 0xbd3:
      goto switchD_14018b96a_caseD_2eb;
    case 0xb57:
      this_01 = (CCObject *)FUN_1404d0770(0x768);
      local_res10 = this_01;
      FUN_140495720(this_01);
      *(undefined ***)this_01 = GradientTriggerObject::vftable;
      *(undefined ***)(this_01 + 0x140) = GradientTriggerObject::vftable;
      *(undefined ***)(this_01 + 0x158) = GradientTriggerObject::vftable;
      *(longlong *)(this_01 + 0x740) = 0;
      *(longlong *)(this_01 + 0x748) = 0;
      *(longlong *)(this_01 + 0x750) = 0;
      *(undefined4 *)(this_01 + 0x758) = 0;
      *(undefined2 *)(this_01 + 0x75c) = 0;
      this_01[0x75e] = (CCObject)0x0;
      *(undefined4 *)(this_01 + 0x760) = 0x3f800000;
      pcVar8 = (code *)PTR_FUN_14061a308;
      if ((code *)PTR_FUN_14061a308 != FUN_140499220) goto LAB_14018b8d6;
      cVar4 = FUN_140499220(this_01);
      break;
    case 0xb58:
    case 0xb59:
    case 0xb5b:
    case 0xb5d:
    case 0xb5e:
    case 0xb5f:
    case 0xb60:
    case 0xb61:
    case 0xb62:
    case 0xb63:
    case 0xb64:
    case 0xb65:
    case 0xb67:
    case 0xb68:
    case 0xb69:
    case 0xb6a:
    case 0xb6b:
    case 0xb6c:
      this_01 = (CCObject *)FUN_1404d0770(0x790);
      local_res10 = this_01;
      FUN_140495720(this_01);
      *(undefined ***)this_01 = ShaderGameObject::vftable;
      *(undefined ***)(this_01 + 0x140) = ShaderGameObject::vftable;
      *(undefined ***)(this_01 + 0x158) = ShaderGameObject::vftable;
      *(undefined4 *)(this_01 + 0x740) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x744) = 0x3f800000;
      *(longlong *)(this_01 + 0x748) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x750) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x754) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x758) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x75c) = 0x3f800000;
      *(longlong *)(this_01 + 0x760) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x768) = 0;
      this_01[0x76c] = (CCObject)0x0;
      *(longlong *)(this_01 + 0x770) = 0;
      *(longlong *)(this_01 + 0x778) = 0;
      *(undefined2 *)(this_01 + 0x788) = 0;
      this_01[0x78a] = (CCObject)0x0;
      cVar4 = FUN_1404a5880(this_01,pcVar6);
      break;
    case 0xb6d:
      goto switchD_14018be35_caseD_77a;
    case 0xbbc:
      goto switchD_14018b86f_caseD_24;
    case 0xbbe:
    case 0xbbf:
    case 0xbc0:
    case 0xbc1:
    case 0xbc2:
    case 0xbc3:
    case 0xbc4:
    case 0xbc5:
    case 0xbc6:
    case 0xbc7:
    case 0xbc9:
    case 0xbca:
    case 0xbcb:
    case 0xbcc:
    case 0xbcd:
    case 0xbcf:
    case 0xbd0:
      goto switchD_14018b86f_caseD_16;
    case 0xbc8:
      local_res10 = (CCObject *)FUN_1404d0770(0x838);
      this_01 = (CCObject *)FUN_140495bf0(local_res10);
      if (this_01 == (CCObject *)0x0) goto LAB_14018c2ab;
      cVar4 = FUN_1404a5880(this_01,pcVar6);
      if (cVar4 != '\0') {
        cocos2d::CCObject::autorelease(this_01);
        goto LAB_14018c2ab;
      }
      goto LAB_14018bf63;
    case 0xbce:
      this_01 = (CCObject *)FUN_1404b21c0(pcVar6,0x140000001);
      goto LAB_14018c2ab;
    case 0xbd5:
    case 0xbd6:
    case 0xbd7:
      this_01 = (CCObject *)FUN_1404d0770(0x748);
      local_res10 = this_01;
      FUN_140495720(this_01);
      *(undefined ***)this_01 = ArtTriggerGameObject::vftable;
      *(undefined ***)(this_01 + 0x140) = ArtTriggerGameObject::vftable;
      *(undefined ***)(this_01 + 0x158) = ArtTriggerGameObject::vftable;
      *(undefined4 *)(this_01 + 0x740) = 0;
      cVar4 = FUN_1404a5880(this_01,pcVar6);
      break;
    case 0xbd8:
      this_01 = (CCObject *)FUN_1404d0770(0x778);
      local_res10 = this_01;
      FUN_140495720(this_01);
      *(undefined ***)this_01 = KeyframeGameObject::vftable;
      *(undefined ***)(this_01 + 0x140) = KeyframeGameObject::vftable;
      *(undefined ***)(this_01 + 0x158) = KeyframeGameObject::vftable;
      *(longlong *)(this_01 + 0x740) = 0;
      *(longlong *)(this_01 + 0x748) = 0;
      *(longlong *)(this_01 + 0x750) = 0;
      *(undefined4 *)(this_01 + 0x758) = 0;
      *(undefined8 *)(this_01 + 0x75c) = 0;
      *(undefined4 *)(this_01 + 0x764) = 0;
      *(undefined2 *)(this_01 + 0x768) = 0;
      this_01[0x76a] = (CCObject)0x0;
      *(undefined8 *)(this_01 + 0x76c) = 0;
      *(undefined4 *)(this_01 + 0x774) = 0x3f800000;
      pcVar8 = (code *)PTR_FUN_14060ecf0;
      if ((code *)PTR_FUN_14060ecf0 != FUN_1404b5430) goto LAB_14018b8d6;
      cVar4 = FUN_1404b5430(this_01);
      break;
    case 0xbd9:
      this_01 = (CCObject *)FUN_1404d0770(0x758);
      local_res10 = this_01;
      FUN_140495720(this_01);
      *(undefined ***)this_01 = KeyframeAnimTriggerObject::vftable;
      *(undefined ***)(this_01 + 0x140) = KeyframeAnimTriggerObject::vftable;
      *(undefined ***)(this_01 + 0x158) = KeyframeAnimTriggerObject::vftable;
      *(undefined4 *)(this_01 + 0x740) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x744) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x748) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x74c) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x750) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x754) = 0x3f800000;
      pcVar8 = (code *)PTR_FUN_14060f398;
      if ((code *)PTR_FUN_14060f398 != FUN_1404b1590) goto LAB_14018bf56;
      cVar4 = FUN_1404b1590(this_01);
      goto LAB_14018bf58;
    }
    goto LAB_14018b8d8;
  }
  if (param_1 < 0xd9b) {
    if ((param_1 != 0xd9a) && (param_1 != 0xce7)) {
      bVar3 = param_1 == 0xce8;
      goto LAB_14018c29a;
    }
    goto switchD_14018b86f_caseD_55;
  }
  if (0x1073 < param_1) {
switchD_14018b86f_caseD_e:
    this_01 = (CCObject *)FUN_14018dc20(pcVar6);
    goto LAB_14018c2ab;
  }
  if (param_1 == 0x1073) goto switchD_14018b86f_caseD_55;
  switch(param_1) {
  case 0xd9b:
  case 0xd9c:
  case 0xda4:
  case 0xda5:
    goto switchD_14018b86f_caseD_55;
  default:
    goto switchD_14018b86f_caseD_e;
  case 0xe10:
    this_01 = (CCObject *)FUN_1404d0770(0x748);
    local_res10 = this_01;
    FUN_140495720(this_01);
    *(undefined ***)this_01 = EndTriggerGameObject::vftable;
    *(undefined ***)(this_01 + 0x140) = EndTriggerGameObject::vftable;
    *(undefined ***)(this_01 + 0x158) = EndTriggerGameObject::vftable;
    *(undefined2 *)(this_01 + 0x740) = 0;
    this_01[0x742] = (CCObject)0x0;
    pcVar8 = (code *)PTR_FUN_140617d28;
    if ((code *)PTR_FUN_140617d28 == FUN_1404bcc60) {
      cVar4 = FUN_1404bcc60(this_01);
    }
    else {
LAB_14018bf56:
      cVar4 = (*pcVar8)(this_01);
    }
    goto LAB_14018bf58;
  case 0xe11:
  case 0xe16:
  case 0xe19:
  case 0xe1c:
  case 0xe22:
  case 0xe38:
  case 0xe4e:
    goto switchD_14018b86f_caseD_a;
  case 0xe12:
  case 0xe13:
    local_res10 = (CCObject *)FUN_1404d0770(0x7e8);
    this_01 = (CCObject *)FUN_140496310(local_res10);
    if (this_01 == (CCObject *)0x0) goto LAB_14018c2ab;
    cVar4 = FUN_1404a5880(this_01,pcVar6);
    if (cVar4 != '\0') {
      cocos2d::CCObject::autorelease(this_01);
      goto LAB_14018c2ab;
    }
    goto LAB_14018bf63;
  case 0xe14:
    this_01 = (CCObject *)FUN_1404d0770(0x760);
    local_res10 = this_01;
    FUN_140495720(this_01);
    *(undefined ***)this_01 = EventLinkTrigger::vftable;
    *(undefined ***)(this_01 + 0x140) = EventLinkTrigger::vftable;
    *(undefined ***)(this_01 + 0x158) = EventLinkTrigger::vftable;
    pCVar1 = this_01 + 0x740;
    *(longlong *)pCVar1 = 0;
    *(longlong *)(this_01 + 0x748) = 0;
    local_res18 = pCVar1;
    lVar5 = FUN_1404d0770(0x20);
    *(longlong *)lVar5 = lVar5;
    *(longlong *)(lVar5 + 8) = lVar5;
    *(longlong *)(lVar5 + 0x10) = lVar5;
    *(undefined2 *)(lVar5 + 0x18) = 0x101;
    *(longlong *)pCVar1 = lVar5;
    this_01[0x750] = (CCObject)0x0;
    *(undefined8 *)(this_01 + 0x754) = 0;
    pcVar8 = *(code **)(*(longlong *)this_01 + 0x48);
    if (pcVar8 == FUN_1404b8830) {
      cVar4 = FUN_1404b8830(this_01);
    }
    else {
LAB_14018bb26:
      cVar4 = (*pcVar8)(this_01);
    }
    break;
  case 0xe15:
    goto switchD_14018be35_caseD_78e;
  case 0xe17:
    this_01 = (CCObject *)FUN_1404d0770(0x7f0);
    local_res10 = this_01;
    FUN_140495720(this_01);
    *(undefined8 *)(this_01 + 0x740) = 0;
    *(undefined8 *)(this_01 + 0x748) = 0;
    *(undefined8 *)(this_01 + 0x750) = 0;
    *(undefined ***)this_01 = SequenceTriggerGameObject::vftable;
    *(undefined ***)(this_01 + 0x140) = SequenceTriggerGameObject::vftable;
    *(undefined ***)(this_01 + 0x158) = SequenceTriggerGameObject::vftable;
    local_res18 = this_01 + 0x758;
    FUN_14005d660(local_res18);
    FUN_14005d660(this_01 + 0x798);
    *(undefined8 *)(this_01 + 0x7d8) = 0;
    *(undefined8 *)(this_01 + 0x7e0) = 0;
    this_01[0x7ec] = (CCObject)0x0;
    if (*(code **)(*(longlong *)this_01 + 0x48) == FUN_1404b4820) {
      pcVar6 = "edit_eSequenceBtn_001.png";
      goto LAB_14018c230;
    }
    cVar4 = (**(code **)(*(longlong *)this_01 + 0x48))(this_01);
    if (cVar4 != '\0') {
      cocos2d::CCObject::autorelease(this_01);
      goto LAB_14018c2ab;
    }
    goto LAB_14018c239;
  case 0xe18:
    this_01 = (CCObject *)FUN_1404d0770(0x768);
    local_res10 = this_01;
    FUN_140495720(this_01);
    *(undefined ***)this_01 = SpawnParticleGameObject::vftable;
    *(undefined ***)(this_01 + 0x140) = SpawnParticleGameObject::vftable;
    *(undefined ***)(this_01 + 0x158) = SpawnParticleGameObject::vftable;
    cocos2d::CCPoint::CCPoint((CCPoint *)(this_01 + 0x740));
    cocos2d::CCPoint::CCPoint((CCPoint *)(this_01 + 0x748));
    this_01[0x750] = (CCObject)0x0;
    *(undefined8 *)(this_01 + 0x754) = 0;
    *(undefined8 *)(this_01 + 0x75c) = 0x3f800000;
    pcVar8 = *(code **)(*(longlong *)this_01 + 0x48);
    if (pcVar8 != FUN_1404c3530) goto LAB_14018bb26;
    cVar4 = FUN_1404c3530(this_01);
    break;
  case 0xe1d:
    this_01 = (CCObject *)FUN_1404d0770(0x750);
    local_res10 = this_01;
    FUN_140495720(this_01);
    *(undefined ***)this_01 = UISettingsGameObject::vftable;
    *(undefined ***)(this_01 + 0x140) = UISettingsGameObject::vftable;
    *(undefined ***)(this_01 + 0x158) = UISettingsGameObject::vftable;
    *(longlong *)(this_01 + 0x740) = 0;
    *(undefined2 *)(this_01 + 0x748) = 0;
    pcVar8 = (code *)PTR_FUN_1406175b8;
    if ((code *)PTR_FUN_1406175b8 != FUN_1404bd270) goto LAB_14018b8d6;
    cVar4 = FUN_1404bd270(this_01);
    break;
  case 0xe1e:
  case 0xe1f:
  case 0xe21:
    this_01 = (CCObject *)FUN_1404d0770(0x760);
    local_res10 = this_01;
    FUN_140495720(this_01);
    *(undefined ***)this_01 = TimerTriggerGameObject::vftable;
    *(undefined ***)(this_01 + 0x140) = TimerTriggerGameObject::vftable;
    *(undefined ***)(this_01 + 0x158) = TimerTriggerGameObject::vftable;
    *(longlong *)(this_01 + 0x740) = 0;
    *(longlong *)(this_01 + 0x748) = 0;
    *(undefined2 *)(this_01 + 0x750) = 0;
    this_01[0x752] = (CCObject)0x0;
    *(undefined4 *)(this_01 + 0x754) = 0x3f800000;
    *(undefined2 *)(this_01 + 0x758) = 0;
    *(undefined4 *)(this_01 + 0x75c) = 0;
    cVar4 = FUN_1404a5880(this_01,pcVar6);
    break;
  case 0xe23:
  case 0xe24:
  case 0xe39:
    this_01 = (CCObject *)FUN_1404d0770(0x778);
    local_res10 = this_01;
    FUN_140495720(this_01);
    *(undefined ***)this_01 = ItemTriggerGameObject::vftable;
    *(undefined ***)(this_01 + 0x140) = ItemTriggerGameObject::vftable;
    *(undefined ***)(this_01 + 0x158) = ItemTriggerGameObject::vftable;
    *(longlong *)(this_01 + 0x740) = 0;
    *(undefined4 *)(this_01 + 0x748) = 1;
    *(undefined4 *)(this_01 + 0x74c) = 0x3f800000;
    *(longlong *)(this_01 + 0x750) = 0x3f800000;
    *(undefined4 *)(this_01 + 0x758) = 1;
    *(undefined8 *)(this_01 + 0x75c) = 3;
    *(undefined8 *)(this_01 + 0x764) = 0;
    *(undefined8 *)(this_01 + 0x76c) = 0;
    *(undefined4 *)(this_01 + 0x774) = 0;
    cVar4 = FUN_1404a5880(this_01,pcVar6);
    break;
  case 0xe3a:
    this_01 = (CCObject *)FUN_1404d0770(0x750);
    local_res10 = this_01;
    FUN_140495720(this_01);
    *(undefined ***)this_01 = AudioLineGuideGameObject::vftable;
    *(undefined ***)(this_01 + 0x140) = AudioLineGuideGameObject::vftable;
    *(undefined ***)(this_01 + 0x158) = AudioLineGuideGameObject::vftable;
    *(undefined4 *)(this_01 + 0x740) = 100;
    *(undefined8 *)(this_01 + 0x744) = 1;
    this_01[0x74c] = (CCObject)0x0;
    pcVar8 = (code *)PTR_FUN_140615960;
    if ((code *)PTR_FUN_140615960 != FUN_1404c1450) goto LAB_14018b8d6;
    cVar4 = FUN_1404c1450(this_01);
    break;
  case 0xe3b:
    goto switchD_14018bc0e_caseD_63a;
  case 0xe3d:
    goto switchD_14018c020_caseD_815;
  case 0xe47:
    this_01 = (CCObject *)FUN_1404d0770(0x740);
    local_res10 = this_01;
    FUN_140495720(this_01);
    *(undefined ***)this_01 = ObjectControlGameObject::vftable;
    *(undefined ***)(this_01 + 0x140) = ObjectControlGameObject::vftable;
    *(undefined ***)(this_01 + 0x158) = ObjectControlGameObject::vftable;
    pcVar8 = (code *)PTR_FUN_14061d3a8;
    if ((code *)PTR_FUN_14061d3a8 != FUN_1404c2d60) goto LAB_14018bf56;
    cVar4 = FUN_1404c2d60(this_01);
LAB_14018bf58:
    if (cVar4 == '\0') {
LAB_14018bf63:
      (**(code **)(*(longlong *)this_01 + 8))(this_01,1);
      this_01 = (CCObject *)0x0;
      goto LAB_14018c2ab;
    }
    goto LAB_14018b8e3;
  case 0xe4c:
  case 0xe4d:
    this_01 = (CCObject *)FUN_1404d0770(0x850);
    local_res10 = this_01;
    FUN_140495bf0(this_01);
    *(undefined ***)this_01 = AdvancedFollowEditObject::vftable;
    *(undefined ***)(this_01 + 0x140) = AdvancedFollowEditObject::vftable;
    *(undefined ***)(this_01 + 0x158) = AdvancedFollowEditObject::vftable;
    *(longlong *)(this_01 + 0x838) = 0x3f800000;
    *(longlong *)(this_01 + 0x840) = 0x3f800000;
    this_01[0x848] = (CCObject)0x0;
    cVar4 = FUN_1404a5880(this_01,pcVar6);
  }
LAB_14018b8d8:
  if (cVar4 == '\0') {
LAB_14018c094:
    (**(code **)(*(longlong *)this_01 + 8))(this_01,1);
    this_01 = (CCObject *)0x0;
  }
  else {
LAB_14018b8e3:
    cocos2d::CCObject::autorelease(this_01);
  }
LAB_14018c2ab:
  if ((this_01 != (CCObject *)0x0) &&
     (*(int *)(this_01 + 0x40c) = param_1, *(int *)(this_01 + 0x3a8) == 7)) {
    *(undefined4 *)(this_01 + 0x3a8) = *(undefined4 *)(this_01 + 0x3a0);
  }
  return this_01;
}

