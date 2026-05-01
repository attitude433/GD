// Called from triggerObject base / 0x4bc180
// Function: FUN_14021f750 @ 0x21f750


void FUN_14021f750(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  CCObject *pCVar6;
  CCLayerGradient *this;
  longlong *plVar7;
  longlong *plVar8;
  CCLayerGradient *pCVar9;
  CCObject CVar10;
  undefined4 uVar11;
  undefined8 local_res10;
  
  if (*(char *)(param_2 + 0x75e) != '\0') {
    FUN_140220fa0();
    return;
  }
  iVar4 = *(int *)(param_2 + 0x748);
  if (999 < iVar4) {
    iVar4 = 999;
  }
  pCVar6 = cocos2d::CCDictionary::objectForKey(*(CCDictionary **)(param_1 + 0x3168),(longlong)iVar4)
  ;
  pCVar9 = (CCLayerGradient *)0x0;
  if (pCVar6 == (CCObject *)0x0) {
    this = (CCLayerGradient *)FUN_1404d0770(0x260);
    cocos2d::CCLayerGradient::CCLayerGradient(this);
    *(undefined ***)this = GJGradientLayer::vftable;
    *(undefined ***)(this + 0x140) = GJGradientLayer::vftable;
    *(undefined ***)(this + 0x148) = GJGradientLayer::vftable;
    *(undefined ***)(this + 0x150) = GJGradientLayer::vftable;
    *(undefined ***)(this + 0x158) = GJGradientLayer::vftable;
    *(undefined ***)(this + 0x160) = GJGradientLayer::vftable;
    *(undefined ***)(this + 0x198) = GJGradientLayer::vftable;
    *(undefined ***)(this + 0x1b0) = GJGradientLayer::vftable;
    *(undefined8 *)(this + 0x238) = 0;
    cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x240));
    *(undefined8 *)(this + 0x248) = 0;
    this[0x250] = (CCLayerGradient)0x0;
    *(undefined8 *)(this + 0x254) = 0;
    *(undefined4 *)(this + 0x25c) = 0;
    if (*(code **)(*(longlong *)this + 0x48) == FUN_140248da0) {
      cVar3 = FUN_140248da0();
    }
    else {
      cVar3 = (**(code **)(*(longlong *)this + 0x48))(this);
    }
    if (cVar3 == '\0') {
      (**(code **)(*(longlong *)this + 8))(this,1);
    }
    else {
      cocos2d::CCObject::autorelease((CCObject *)this);
      pCVar9 = this;
    }
    *(int *)(pCVar9 + 0x25c) = iVar4;
    cocos2d::CCDictionary::setObject
              (*(CCDictionary **)(param_1 + 0x3168),(CCObject *)pCVar9,(longlong)iVar4);
    pCVar6 = (CCObject *)pCVar9;
  }
  if (*(char *)(param_2 + 0x75d) != '\0') {
    (**(code **)(*(longlong *)pCVar6 + 0x1f8))(pCVar6,0);
    *(longlong *)(pCVar6 + 0x248) = 0;
    return;
  }
  *(longlong *)(pCVar6 + 0x248) = param_2;
  piVar2 = *(int **)(param_2 + 0x450);
  iVar4 = 0;
  if (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
    if ((piVar2[1] == iVar4) || (iVar4 == 0)) {
      iVar4 = piVar2[1];
    }
  }
  *(int *)(pCVar6 + 0x238) = iVar4;
  piVar2 = *(int **)(param_2 + 0x458);
  iVar4 = 0;
  if (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
    if ((piVar2[1] == iVar4) || (iVar4 == 0)) {
      iVar4 = piVar2[1];
    }
  }
  *(int *)(pCVar6 + 0x23c) = iVar4;
  iVar4 = *(int *)(param_2 + 0x744);
  *(int *)(pCVar6 + 0x254) = iVar4;
  CVar10 = (CCObject)0x0;
  if (iVar4 == 1) {
    local_res10._4_4_ = 1;
LAB_14021f98c:
    local_res10 = CONCAT44(local_res10._4_4_,0x302);
  }
  else if (iVar4 == 2) {
    local_res10 = 0x30300000306;
    CVar10 = (CCObject)0x1;
  }
  else {
    if (iVar4 != 3) {
      local_res10._4_4_ = 0x303;
      goto LAB_14021f98c;
    }
    local_res10 = 0x30100000307;
    CVar10 = (CCObject)0x1;
  }
  (*(code *)**(undefined8 **)(pCVar6 + 0x1b0))(pCVar6 + 0x1b0,local_res10);
  pCVar6[0x231] = CVar10;
  *(undefined4 *)(pCVar6 + 600) = *(undefined4 *)(param_2 + 0x740);
  uVar11 = *(undefined4 *)(param_2 + 0x740);
  iVar4 = FUN_1402237b0();
  switch(uVar11) {
  case 1:
    plVar7 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x1000) + 0x1e8))();
    goto LAB_14021fa19;
  case 2:
    plVar7 = *(longlong **)(param_1 + 0x1020);
    if (plVar7 == (longlong *)0x0) goto switchD_14021f9e6_default;
    break;
  case 3:
    plVar7 = *(longlong **)(param_1 + 0xd48);
    break;
  case 4:
    plVar7 = *(longlong **)(param_1 + 0xcd8);
    break;
  case 5:
    plVar7 = *(longlong **)(param_1 + 0xc68);
    break;
  case 6:
    plVar7 = *(longlong **)(param_1 + 0xbf8);
    break;
  case 7:
    plVar7 = *(longlong **)(param_1 + 0xb88);
    break;
  case 8:
    plVar7 = *(longlong **)(param_1 + 0xda0);
    break;
  case 9:
    plVar7 = *(longlong **)(param_1 + 0xae8);
    break;
  case 10:
    plVar7 = *(longlong **)(param_1 + 0xa78);
    break;
  case 0xb:
    plVar7 = *(longlong **)(param_1 + 0xa08);
    break;
  case 0xc:
    plVar7 = *(longlong **)(param_1 + 0x998);
    break;
  case 0xd:
    plVar7 = *(longlong **)(param_1 + 0x1010);
    break;
  case 0xe:
    plVar7 = *(longlong **)(param_1 + 0x3558);
    break;
  case 0xf:
    plVar7 = *(longlong **)(param_1 + 0xfe0);
    goto LAB_14021fa19;
  default:
switchD_14021f9e6_default:
    plVar7 = *(longlong **)(param_1 + 0x1000);
  }
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x1e8))();
LAB_14021fa19:
  iVar5 = *(int *)(param_2 + 0x740);
  if (iVar5 == 1) {
    iVar4 = -0x36;
  }
  else if (iVar5 == 2) {
    iVar4 = -0xe;
  }
  else if (iVar5 == 0xd) {
    iVar4 = 0x2e;
  }
  else if (iVar5 == 0xe) {
    iVar4 = 0x38;
  }
  iVar5 = *(int *)(param_2 + 0x470);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_2 + 0x420);
  }
  if (iVar5 < 6) {
    if (iVar5 < -5) {
      iVar5 = -5;
    }
  }
  else {
    iVar5 = 5;
  }
  pCVar6[0x250] = (CCObject)0x1;
  iVar1 = *(int *)(param_2 + 0x740);
  if ((((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 0xd)) || ((iVar1 == 0xe || (iVar1 == 0xf)))) {
    pCVar6[0x250] = (CCObject)0x0;
  }
  plVar8 = (longlong *)(**(code **)(*(longlong *)pCVar6 + 0x1e8))(pCVar6);
  if (plVar8 == plVar7) {
    (**(code **)(*plVar7 + 0x238))(plVar7,pCVar6,iVar4 + iVar5);
  }
  else {
    (**(code **)(*(longlong *)pCVar6 + 0x1f8))(pCVar6,0);
    (**(code **)(*plVar7 + 0x1b8))(plVar7,pCVar6,iVar4 + iVar5);
  }
  return;
}

