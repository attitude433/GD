// LevelEditorLayer_updateObjectLabel @ 0x2d7660
// Body: 1252 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d7660(longlong *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  CCString *pCVar5;
  char *pcVar6;
  char *******pppppppcVar7;
  CCLabelBMFont *this;
  longlong lVar8;
  float *pfVar9;
  undefined8 uVar10;
  char *******_Memory;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  CCPoint local_88 [8];
  char ******local_80;
  char *****pppppcStack_78;
  char *****local_70;
  char *****pppppcStack_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_1406ba040 ^ (ulonglong)auStack_a8;
  iVar2 = *(int *)((longlong)param_1 + 0x40c);
  if (iVar2 < 0x632) {
    if (iVar2 != 0x631) {
      if (iVar2 < 0x41a) {
        if ((((iVar2 != 0x419) && (iVar2 != 899)) && (iVar2 != 0x385)) &&
           ((iVar2 != 0x3ee && (iVar2 != 0x3ef)))) {
          return;
        }
      }
      else if (((iVar2 != 0x4f4) && (iVar2 != 0x542)) && (iVar2 != 0x543)) {
        return;
      }
    }
  }
  else if (iVar2 < 0x714) {
    if (((iVar2 != 0x713) && (iVar2 != 0x63b)) && ((iVar2 != 0x64b && (iVar2 != 0x650)))) {
      return;
    }
  }
  else if (iVar2 < 0x80f) {
    if (iVar2 != 0x80e) {
      switch(iVar2) {
      case 0x714:
      case 0x716:
      case 0x717:
      case 0x718:
      case 0x719:
      case 0x778:
        break;
      default:
        goto switchD_1402d7768_caseD_715;
      }
    }
  }
  else if (iVar2 < 0xe1a) {
    if ((((iVar2 != 0xe19) && (iVar2 != 0x813)) && (iVar2 != 0xbc8)) && (iVar2 != 0xbd9)) {
      return;
    }
  }
  else if ((iVar2 != 0xe38) && (iVar2 != 0xe4c)) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0xb9);
  fVar13 = DAT_1406237c0;
  if (iVar2 == 899) {
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x81);
  }
  else if (iVar2 == 0x713) {
LAB_1402d77ce:
    uVar11 = (ulonglong)*(uint *)(param_1 + 0xd4);
  }
  else if (iVar2 == 0x718) {
    uVar11 = (ulonglong)*(uint *)(param_1 + 0xd4);
    fVar13 = 0.0;
  }
  else {
    uVar11 = (ulonglong)uVar3;
    if (iVar2 == 0x719) goto LAB_1402d77ce;
  }
  pppppcStack_78 = (char *****)0x0;
  local_70 = (char *****)_DAT_140623f30;
  pppppcStack_68 = (char *****)_UNK_140623f38;
  local_80 = (char ******)0x0;
  if (iVar2 == 0x718) {
    if (*(char *)((longlong)param_1 + 0x69d) == '\0') {
      pCVar5 = cocos2d::CCString::createWithFormat("%i",(ulonglong)*(uint *)(param_1 + 0xd4));
      pcVar6 = cocos2d::CCString::getCString(pCVar5);
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (pcVar6[lVar12] != '\0');
      FUN_14003cce0(&local_80,pcVar6);
    }
    else {
      pCVar5 = cocos2d::CCString::createWithFormat("%i.",(ulonglong)*(uint *)(param_1 + 0xd4));
      pcVar6 = cocos2d::CCString::getCString(pCVar5);
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (pcVar6[lVar12] != '\0');
      FUN_14003cce0(&local_80,pcVar6);
    }
  }
  else if (iVar2 == 0xe38) {
    pCVar5 = cocos2d::CCString::createWithFormat
                       ("%i\n%i",(ulonglong)uVar3,(ulonglong)*(uint *)((longlong)param_1 + 0x5cc));
    pcVar6 = cocos2d::CCString::getCString(pCVar5);
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (pcVar6[lVar12] != '\0');
    FUN_14003cce0(&local_80,pcVar6);
    fVar13 = 0.0;
  }
  else if (iVar2 == 0x778) {
    pCVar5 = cocos2d::CCString::createWithFormat
                       ("%i/%i",(ulonglong)uVar3,(ulonglong)*(uint *)((longlong)param_1 + 0x5cc));
    pcVar6 = cocos2d::CCString::getCString(pCVar5);
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (pcVar6[lVar12] != '\0');
    FUN_14003cce0(&local_80,pcVar6);
  }
  else if (((int)uVar11 < 1000) ||
          ((iVar2 != 899 && ((iVar2 != 0x3ee || ((int)param_1[0xcb] != 0)))))) {
    pppppppcVar7 = (char *******)FUN_140069090(local_60,uVar11);
    if (&local_80 != pppppppcVar7) {
      if ((char ******)0xf < pppppcStack_68) {
        _Memory = (char *******)local_80;
        if ((0xfff < (longlong)pppppcStack_68 + 1U) &&
           (_Memory = (char *******)local_80[-1],
           (char *)0x1f < (char *)((longlong)local_80 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      local_80 = *pppppppcVar7;
      pppppcStack_78 = (char *****)pppppppcVar7[1];
      local_70 = (char *****)pppppppcVar7[2];
      pppppcStack_68 = (char *****)pppppppcVar7[3];
      pppppppcVar7[2] = (char ******)0x0;
      pppppppcVar7[3] = (char ******)0xf;
      *(undefined1 *)pppppppcVar7 = 0;
    }
    FUN_14003a830(local_60);
  }
  else {
    lVar12 = FUN_1402b8a80(uVar11);
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(lVar12 + lVar8) != '\0');
    FUN_14003cce0(&local_80,lVar12);
  }
  this = (CCLabelBMFont *)(**(code **)(*param_1 + 0x600))(param_1);
  fVar4 = DAT_140622b08;
  if (this == (CCLabelBMFont *)0x0) {
    pppppppcVar7 = &local_80;
    if ((char ******)0xf < pppppcStack_68) {
      pppppppcVar7 = (char *******)local_80;
    }
    this = cocos2d::CCLabelBMFont::create((char *)pppppppcVar7,"bigFont.fnt");
    (**(code **)(*(longlong *)this + 0xa0))(this);
    (**(code **)(*param_1 + 0x1b8))(param_1,this,1);
    (**(code **)(*param_1 + 0x608))(param_1,this);
  }
  else {
    pppppppcVar7 = &local_80;
    if ((char ******)0xf < pppppcStack_68) {
      pppppppcVar7 = (char *******)local_80;
    }
    (*(code *)**(undefined8 **)(this + 0x168))(this + 0x168,pppppppcVar7);
  }
  lVar12 = *(longlong *)this;
  lVar8 = (**(code **)(*param_1 + 0x130))(param_1);
  fVar1 = *(float *)(lVar8 + 4);
  pfVar9 = (float *)(**(code **)(*param_1 + 0x130))(param_1);
  uVar10 = cocos2d::CCPoint::CCPoint(local_88,*pfVar9 * fVar4,fVar1 * fVar4 + fVar13);
  (**(code **)(lVar12 + 0xb8))(this,uVar10);
  cocos2d::CCLabelBMFont::limitLabelWidth(this,DAT_140623164,fVar4,0.0);
  FUN_14003a830(&local_80);
switchD_1402d7768_caseD_715:
  return;
}

