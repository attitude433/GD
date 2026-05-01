// GameObject_customSetup @ 0x190e20
// Body: 3118 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140190e20(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_a8 [88];
  ulonglong local_50;
  
  local_50 = DAT_1406ba040 ^ (ulonglong)auStack_a8;
  uVar4 = *(int *)(param_1 + 0x40c) - 5;
  if (uVar4 < 0x11b7) {
                    /* WARNING: Could not recover jumptable at 0x000140190e92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
              *(uint *)(&DAT_1401948dc + (ulonglong)(byte)(&DAT_140194b44)[(int)uVar4] * 4)))
              (IMAGE_DOS_HEADER_140000000.e_magic +
               *(uint *)(&DAT_1401948dc + (ulonglong)(byte)(&DAT_140194b44)[(int)uVar4] * 4));
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x40c);
  if ((int)uVar4 < 0x2ce) {
    if (uVar4 != 0x2cd) {
      switch(uVar4) {
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x2c:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x69:
      case 0xdd:
        break;
      default:
        goto switchD_140193d61_caseD_23;
      }
    }
    goto switchD_140193d61_caseD_16;
  }
  if ((int)uVar4 < 0xb54) {
    if (uVar4 == 0xb53) {
switchD_140193d61_caseD_16:
      *(undefined1 *)(param_1 + 0x424) = 1;
      goto switchD_140193d61_caseD_23;
    }
    if (0x631 < (int)uVar4) {
      if (0x778 < (int)uVar4) {
        switch(uVar4) {
        case 0x779:
        case 0x77a:
        case 0x77b:
        case 0x77c:
        case 0x77d:
        case 0x78b:
        case 0x78c:
        case 0x78e:
        case 0x78f:
        case 0x7df:
        case 0x7e0:
        case 0x80e:
        case 0x811:
        case 0x812:
        case 0x813:
        case 0x814:
          goto switchD_140193d61_caseD_16;
        default:
          goto switchD_140193d61_caseD_23;
        }
      }
      if (uVar4 != 0x778) {
        switch(uVar4) {
        case 0x63b:
        case 0x64b:
        case 0x64c:
        case 0x64d:
        case 0x650:
        case 0x713:
        case 0x714:
        case 0x716:
        case 0x717:
        case 0x718:
        case 0x719:
        case 0x71a:
        case 0x71b:
          break;
        default:
          goto switchD_140193d61_caseD_23;
        }
      }
      goto switchD_140193d61_caseD_16;
    }
    if (uVar4 == 0x631) goto switchD_140193d61_caseD_16;
    if ((int)uVar4 < 0x3ef) {
      if (uVar4 != 0x3ee) {
        switch(uVar4) {
        case 0x2ce:
        case 0x2e7:
        case 0x2e8:
        case 899:
        case 900:
        case 0x385:
        case 0x393:
          break;
        default:
          goto switchD_140193d61_caseD_23;
        }
      }
      goto switchD_140193d61_caseD_16;
    }
    if ((int)uVar4 < 0x543) {
      if ((((uVar4 != 0x542) && (uVar4 != 0x3ef)) && (uVar4 != 0x419)) && (uVar4 != 0x4f4))
      goto switchD_140193d61_caseD_23;
      goto switchD_140193d61_caseD_16;
    }
    if ((uVar4 == 0x543) || (uVar4 == 0x5f0)) goto switchD_140193d61_caseD_16;
LAB_140193e20:
    if (uVar4 < 0x5f1) {
      if (uVar4 != 0x5f0) {
        switch(uVar4) {
        case 0x488:
        case 0x489:
        case 0x4df:
        case 0x4e0:
        case 0x4e1:
        case 0x4e2:
        case 0x4e3:
        case 0x4e4:
        case 0x4e5:
        case 0x4e6:
        case 0x4e7:
        case 0x4e8:
        case 0x4e9:
        case 0x4ea:
        case 0x4eb:
        case 0x4f2:
        case 0x4f3:
        case 0x4fd:
        case 0x4fe:
        case 0x4ff:
        case 0x500:
        case 0x501:
        case 0x502:
        case 0x503:
        case 0x504:
        case 0x505:
        case 0x506:
        case 0x507:
        case 0x508:
        case 0x509:
        case 0x50a:
          goto switchD_140193fc4_caseD_349;
        default:
          goto switchD_140193e0e_caseD_e;
        case 0x4f4:
        case 0x533:
        case 0x534:
        case 0x535:
        case 0x542:
        case 0x543:
          break;
        }
      }
      goto switchD_140193e0e_caseD_a;
    }
    switch(uVar4) {
    case 0x631:
    case 0x63b:
    case 0x64b:
    case 0x64c:
    case 0x64d:
    case 0x650:
      goto switchD_140193e0e_caseD_a;
    case 0x6b3:
    case 0x6b4:
    case 0x6b5:
    case 0x6b6:
    case 0x6b7:
    case 0x6b8:
    case 0x6b9:
    case 0x6ba:
    case 0x6bb:
    case 0x6bc:
    case 0x6bd:
    case 0x6be:
    case 0x6bf:
    case 0x6c0:
    case 0x6c1:
    case 0x6c2:
    case 0x6c3:
    case 0x6c4:
    case 0x6c5:
switchD_14019406e_caseD_6b3:
      puVar1 = *(undefined4 **)(param_1 + 0x450);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 0x3f2;
        *puVar1 = 0;
      }
    }
  }
  else {
    if ((int)uVar4 < 0xe11) {
      if (uVar4 != 0xe10) {
        switch(uVar4) {
        case 0xb54:
        case 0xb55:
        case 0xb57:
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
        case 0xb6d:
        case 2999:
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
        case 0xbc8:
        case 0xbc9:
        case 0xbca:
        case 0xbcb:
        case 0xbcc:
        case 0xbcd:
        case 0xbce:
        case 0xbcf:
        case 0xbd0:
        case 0xbd5:
        case 0xbd6:
        case 0xbd7:
        case 0xbd8:
        case 0xbd9:
          break;
        default:
          goto switchD_140193d61_caseD_23;
        }
      }
      goto switchD_140193d61_caseD_16;
    }
    switch(uVar4) {
    case 0xe12:
    case 0xe13:
    case 0xe14:
    case 0xe15:
    case 0xe16:
    case 0xe17:
    case 0xe18:
    case 0xe19:
    case 0xe1c:
    case 0xe1d:
    case 0xe1e:
    case 0xe1f:
    case 0xe21:
    case 0xe22:
    case 0xe23:
    case 0xe24:
    case 0xe38:
    case 0xe39:
    case 0xe3a:
    case 0xe3b:
    case 0xe47:
    case 0xe4c:
    case 0xe4d:
    case 0xe4e:
      goto switchD_140193d61_caseD_16;
    }
switchD_140193d61_caseD_23:
    if ((int)uVar4 < 0x108) {
      if (uVar4 != 0x107) {
        switch(uVar4) {
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x26:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x43:
        case 0x54:
        case 99:
        case 0x65:
        case 0x69:
        case 0x6f:
        case 0x8c:
        case 0x8d:
        case 0x8e:
        case 0xdd:
          goto switchD_140193e0e_caseD_a;
        default:
          goto switchD_140193e0e_caseD_e;
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x50:
        case 0x51:
        case 0x52:
          break;
        }
      }
switchD_140193e0e_caseD_45:
      *(undefined4 *)(param_1 + 0x2fc) = 0x41f00000;
      *(undefined4 *)(param_1 + 0x300) = 0x41f00000;
      goto switchD_140193e0e_caseD_e;
    }
    if ((int)uVar4 < 0x295) {
      if (uVar4 != 0x294) {
        switch(uVar4) {
        case 0x108:
        case 0x109:
        case 0x10a:
        case 0x10b:
        case 0x10c:
        case 0x131:
        case 0x15d:
        case 0x1d5:
        case 0x1d7:
          goto switchD_140193e0e_caseD_45;
        case 0x11e:
        case 0x11f:
          goto switchD_140193e0e_caseD_a;
        case 0x133:
        case 0x15f:
          *(undefined4 *)(param_1 + 0x2fc) = 0x42700000;
          *(undefined4 *)(param_1 + 0x300) = 0x41f00000;
        }
        goto switchD_140193e0e_caseD_e;
      }
    }
    else if ((int)uVar4 < 0x3ef) {
      if (uVar4 != 0x3ee) {
        switch(uVar4) {
        case 0x2cd:
        case 0x2ce:
        case 0x2e7:
        case 0x2e8:
        case 0x2e9:
        case 0x2eb:
        case 0x2ed:
        case 899:
        case 900:
        case 0x385:
        case 0x393:
          break;
        default:
          goto switchD_140193e0e_caseD_e;
        case 0x349:
        case 0x34a:
        case 0x34b:
        case 0x34c:
        case 0x34d:
        case 0x34e:
        case 0x34f:
        case 0x350:
        case 0x352:
        case 0x355:
        case 0x356:
        case 0x357:
        case 0x358:
        case 0x359:
        case 0x35b:
        case 0x35d:
        case 0x35e:
        case 0x35f:
        case 0x363:
        case 0x364:
        case 0x365:
        case 0x366:
        case 0x367:
        case 0x368:
        case 0x369:
        case 0x36a:
        case 0x36d:
        case 0x36e:
        case 0x370:
        case 0x371:
        case 0x372:
        case 0x373:
        case 0x374:
        case 0x375:
        case 0x378:
        case 0x379:
        case 0x37a:
        case 0x37b:
        case 0x37d:
        case 0x37e:
        case 0x37f:
        case 0x380:
          goto switchD_140193fc4_caseD_349;
        }
      }
    }
    else if ((int)uVar4 < 0x714) {
      if (uVar4 != 0x713) {
        if (0x487 < (int)uVar4) goto LAB_140193e20;
        if (uVar4 == 0x487) {
switchD_140193fc4_caseD_349:
          *(undefined1 *)(param_1 + 0x425) = 1;
          *(undefined4 *)(param_1 + 0x420) = 0xfffffff9;
        }
        else {
          if (uVar4 == 0x3ef) goto switchD_140193e0e_caseD_a;
          if (uVar4 == 0x419) {
            *(undefined4 *)(param_1 + 0x2fc) = 0x41f00000;
            *(undefined4 *)(param_1 + 0x300) = 0x41f00000;
            if (*(undefined8 **)(param_1 + 0x450) != (undefined8 *)0x0) {
              **(undefined8 **)(param_1 + 0x450) = 0;
            }
            *(undefined1 *)(param_1 + 0x4c4) = 1;
          }
          else if (uVar4 == 0x426) goto switchD_140193fc4_caseD_349;
        }
        goto switchD_140193e0e_caseD_e;
      }
    }
    else if ((int)uVar4 < 0x80f) {
      if (uVar4 != 0x80e) {
        switch(uVar4) {
        case 0x714:
        case 0x716:
        case 0x717:
        case 0x718:
        case 0x719:
        case 0x71a:
        case 0x71b:
        case 0x778:
        case 0x779:
        case 0x77a:
        case 0x77b:
        case 0x77c:
        case 0x77d:
        case 0x78b:
        case 0x78c:
        case 0x78d:
        case 0x78e:
        case 0x78f:
        case 0x7df:
        case 0x7e0:
          break;
        default:
          goto switchD_140193e0e_caseD_e;
        case 0x761:
        case 0x762:
        case 0x763:
        case 0x764:
          goto switchD_14019406e_caseD_6b3;
        }
      }
    }
    else if ((int)uVar4 < 0xb54) {
      if (((uVar4 != 0xb53) && (uVar4 != 0x810)) &&
         ((uVar4 != 0x812 && ((uVar4 != 0x813 && (uVar4 != 0x814))))))
      goto switchD_140193e0e_caseD_e;
    }
    else {
      if (0xe10 < (int)uVar4) {
        switch(uVar4) {
        case 0xe12:
        case 0xe13:
        case 0xe14:
        case 0xe15:
        case 0xe16:
        case 0xe17:
        case 0xe18:
        case 0xe19:
        case 0xe1c:
        case 0xe1d:
        case 0xe1e:
        case 0xe1f:
        case 0xe21:
        case 0xe22:
        case 0xe23:
        case 0xe24:
        case 0xe38:
        case 0xe39:
        case 0xe3a:
        case 0xe47:
        case 0xe4c:
        case 0xe4d:
        case 0xe4e:
          goto switchD_140193e0e_caseD_a;
        default:
          goto switchD_140193e0e_caseD_e;
        }
      }
      if (uVar4 != 0xe10) {
        switch(uVar4) {
        case 0xb54:
        case 0xb55:
        case 0xb56:
        case 0xb6d:
        case 0xb6e:
        case 2999:
        case 0xbbc:
        case 0xbbd:
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
        case 0xbc8:
        case 0xbc9:
        case 0xbca:
        case 0xbcb:
        case 0xbcc:
        case 0xbcd:
        case 0xbce:
        case 0xbcf:
        case 0xbd0:
        case 0xbd3:
        case 0xbd5:
        case 0xbd6:
        case 0xbd7:
        case 0xbd8:
        case 0xbd9:
          break;
        default:
          goto switchD_140193e0e_caseD_e;
        }
      }
    }
switchD_140193e0e_caseD_a:
    if (*(undefined8 **)(param_1 + 0x450) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x450) = 0;
    }
  }
switchD_140193e0e_caseD_e:
  cVar3 = *(char *)(param_1 + 0x28d);
  if (cVar3 == '\0') goto switchD_14019422d_caseD_63c;
  iVar6 = *(int *)(param_1 + 0x40c);
  if (iVar6 < 0x779) {
    if (iVar6 == 0x778) goto switchD_14019422d_caseD_63b;
    if (0x631 < iVar6) {
      switch(iVar6) {
      case 0x63b:
      case 0x64b:
      case 0x650:
      case 0x713:
      case 0x714:
      case 0x716:
      case 0x717:
      case 0x718:
      case 0x719:
        goto switchD_14019422d_caseD_63b;
      default:
        goto switchD_14019422d_caseD_63c;
      }
    }
    if (iVar6 == 0x631) goto switchD_14019422d_caseD_63b;
    if (iVar6 < 0x41a) {
      if (((iVar6 == 0x419) || (iVar6 == 899)) ||
         ((iVar6 == 0x385 || ((iVar6 == 0x3ee || (iVar6 == 0x3ef))))))
      goto switchD_14019422d_caseD_63b;
    }
    else if ((((iVar6 == 0x4f4) || (iVar6 == 0x542)) || (iVar6 == 0x543)) || (iVar6 == 0x5f0))
    goto switchD_14019422d_caseD_63b;
  }
  else {
    if (iVar6 < 0xb55) {
      if (iVar6 != 0xb54) {
        switch(iVar6) {
        case 0x779:
        case 0x77a:
        case 0x77c:
        case 0x77d:
        case 0x78b:
        case 0x78c:
        case 0x78e:
        case 0x78f:
        case 0x7df:
        case 0x7e0:
        case 0x80e:
        case 0x811:
        case 0x813:
        case 0x814:
          break;
        default:
          goto switchD_14019422d_caseD_63c;
        }
      }
    }
    else {
      if (0xe10 < iVar6) {
        switch(iVar6) {
        case 0xe12:
        case 0xe13:
        case 0xe14:
        case 0xe15:
        case 0xe16:
        case 0xe17:
        case 0xe18:
        case 0xe19:
        case 0xe1c:
        case 0xe1d:
        case 0xe1e:
        case 0xe1f:
        case 0xe21:
        case 0xe22:
        case 0xe23:
        case 0xe24:
        case 0xe38:
        case 0xe39:
        case 0xe47:
        case 0xe4c:
        case 0xe4d:
        case 0xe4e:
          goto switchD_14019422d_caseD_63b;
        default:
          goto switchD_14019422d_caseD_63c;
        }
      }
      if (iVar6 != 0xe10) {
        switch(iVar6) {
        case 0xb55:
        case 0xb6d:
        case 2999:
        case 0xbc8:
        case 0xbd8:
        case 0xbd9:
          break;
        default:
          goto switchD_14019422d_caseD_63c;
        }
      }
    }
switchD_14019422d_caseD_63b:
    *(undefined1 *)(param_1 + 0x304) = 1;
  }
switchD_14019422d_caseD_63c:
  uVar7 = (ulonglong)*(int *)(param_1 + 0x3a0);
  switch(*(int *)(param_1 + 0x3a0)) {
  case 1:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x1d:
  case 0x20:
  case 0x23:
  case 0x25:
  case 0x26:
  case 0x2b:
  case 0x2e:
switchD_140194172_caseD_1:
    *(undefined4 *)(param_1 + 0x2fc) = 0x41f00000;
    *(undefined4 *)(param_1 + 0x300) = 0x41f00000;
    break;
  default:
    if (*(int *)(param_1 + 0x40c) == 8) goto switchD_140194172_caseD_1;
  }
  if (*(char *)(param_1 + 0x468) != '\0') {
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  uVar2 = FUN_140196e40(param_1);
  *(undefined1 *)(param_1 + 0x2c8) = uVar2;
  uVar4 = (uint)uVar7;
  if ((uVar4 < 0x30) && ((0x800002200005U >> (uVar7 & 0x3f) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x415) = 1;
  }
  if ((*(int *)(param_1 + 0x464) == 5) && (*(int *)(param_1 + 0x420) < 0)) {
    *(undefined4 *)(param_1 + 0x464) = 1;
  }
  iVar6 = *(int *)(param_1 + 0x40c);
  *(bool *)(param_1 + 0x4f2) = iVar6 == 0x1f;
  uVar2 = FUN_1401a2240(param_1);
  *(undefined1 *)(param_1 + 0x4ec) = uVar2;
  if (iVar6 < 0x718) {
    if (iVar6 == 0x717) goto LAB_1401944c8;
    if (iVar6 < 0x3f0) {
      if (iVar6 != 0x3ef) {
        if (iVar6 < 900) {
          if ((((iVar6 != 899) && (iVar6 != 0x1d)) && (iVar6 != 0x1e)) && (iVar6 != 0x69)) {
            bVar8 = iVar6 == 0x2e8;
            goto LAB_1401944c2;
          }
        }
        else if (((iVar6 != 900) && (iVar6 != 0x385)) && (iVar6 != 0x393)) {
          bVar8 = iVar6 == 0x3ee;
          goto LAB_1401944c2;
        }
      }
      goto LAB_1401944c8;
    }
    if (0x64b < iVar6) {
      if ((iVar6 != 0x64f) && (iVar6 != 0x714)) {
        bVar8 = iVar6 == 0x716;
        goto LAB_1401944c2;
      }
      goto LAB_1401944c8;
    }
    if (((iVar6 == 0x64b) || (iVar6 == 0x4f4)) || ((iVar6 == 0x542 || (iVar6 == 0x543))))
    goto LAB_1401944c8;
    bVar8 = iVar6 == 0x63b;
LAB_1401944c2:
    if (bVar8) goto LAB_1401944c8;
    uVar2 = 0;
  }
  else {
    if (iVar6 < 0xbc1) {
      if (iVar6 != 0xbc0) {
        if (iVar6 < 0xb58) {
          if (((iVar6 != 0xb57) && (iVar6 != 0x779)) && ((iVar6 != 0x77c && (iVar6 != 0x7df)))) {
            bVar8 = iVar6 == 0x813;
            goto LAB_1401944c2;
          }
        }
        else if (iVar6 != 2999) {
          iVar5 = iVar6 + -0xbbe;
          goto LAB_1401944bd;
        }
      }
    }
    else if (iVar6 < 0xe13) {
      if ((((iVar6 != 0xe12) && (iVar6 != 0xbc1)) && (iVar6 != 0xbc2)) && (iVar6 != 0xbc8)) {
        bVar8 = iVar6 == 0xbd9;
        goto LAB_1401944c2;
      }
    }
    else if (iVar6 != 0xe14) {
      iVar5 = iVar6 + -0xe1e;
LAB_1401944bd:
      if (iVar5 != 0) {
        bVar8 = iVar5 == 1;
        goto LAB_1401944c2;
      }
    }
LAB_1401944c8:
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x4f0) = uVar2;
  if (cVar3 != '\0') {
    if (iVar6 < 0xb54) {
      if (iVar6 == 0xb53) goto switchD_1401945c1_caseD_779;
      if (iVar6 < 0x64d) {
        if (iVar6 != 0x64c) {
          if (iVar6 < 0x394) {
            if (iVar6 == 0x393) {
LAB_14019452b:
              *(undefined2 *)(param_1 + 0x4ed) = 0x101;
            }
            else if (iVar6 < 0x2e9) {
              if ((iVar6 == 0x2e8) || (((iVar6 == 0x1d || (iVar6 == 0x1e)) || (iVar6 == 0x69))))
              goto LAB_14019452b;
            }
            else if ((iVar6 == 899) || (iVar6 == 900)) goto LAB_14019452b;
            goto switchD_1401945c1_caseD_77b;
          }
          if (((iVar6 != 0x3ee) && (iVar6 != 0x3ef)) &&
             ((iVar6 != 0x419 && ((iVar6 != 0x4f4 && (iVar6 != 0x631))))))
          goto switchD_1401945c1_caseD_77b;
        }
        goto switchD_1401945c1_caseD_779;
      }
      if (iVar6 < 0x779) {
        if (((iVar6 == 0x778) || (iVar6 == 0x64d)) || (iVar6 == 0x650))
        goto switchD_1401945c1_caseD_779;
      }
      else {
        switch(iVar6) {
        case 0x779:
        case 0x77a:
        case 0x77c:
        case 0x77d:
        case 0x78b:
        case 0x78c:
        case 0x78e:
        case 0x78f:
        case 0x7df:
        case 0x7e0:
        case 0x80e:
        case 0x812:
        case 0x814:
          goto switchD_1401945c1_caseD_779;
        }
      }
    }
    else {
      if (0xe10 < iVar6) {
        switch(iVar6) {
        case 0xe12:
        case 0xe13:
        case 0xe14:
        case 0xe15:
        case 0xe16:
        case 0xe17:
        case 0xe18:
        case 0xe1c:
        case 0xe1d:
        case 0xe47:
        case 0xe4e:
          goto switchD_1401945c1_caseD_779;
        default:
          goto switchD_1401945c1_caseD_77b;
        }
      }
      if (iVar6 != 0xe10) {
        switch(iVar6) {
        case 0xb54:
        case 0xb55:
        case 0xb57:
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
        case 0xb6d:
        case 2999:
        case 0xbce:
        case 0xbd9:
          break;
        default:
          goto switchD_1401945c1_caseD_77b;
        }
      }
switchD_1401945c1_caseD_779:
      *(undefined1 *)(param_1 + 0x4ed) = 1;
    }
switchD_1401945c1_caseD_77b:
    if ((*(int *)(param_1 + 0x4e8) == 1) && (cVar3 = FUN_1401a3100(param_1), cVar3 == '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(undefined1 *)(param_1 + 0x4ef) = uVar2;
    if (iVar6 < 0xb54) {
      if (iVar6 != 0xb53) {
        if (iVar6 < 0x632) {
          if (iVar6 != 0x631) {
            if (iVar6 < 0x394) {
              if (iVar6 != 0x393) {
                if (iVar6 < 0x2e9) {
                  if (((iVar6 != 0x2e8) && (iVar6 != 0x1d)) && (iVar6 != 0x1e)) {
                    bVar8 = iVar6 == 0x69;
                    goto LAB_140194688;
                  }
                }
                else if (iVar6 != 899) {
                  iVar6 = iVar6 + -900;
                  goto LAB_14019473d;
                }
              }
            }
            else if (iVar6 < 0x4f5) {
              if (((iVar6 != 0x4f4) && (iVar6 != 0x3ee)) && (iVar6 != 0x3ef)) {
                bVar8 = iVar6 == 0x419;
                goto LAB_140194688;
              }
            }
            else {
              iVar6 = iVar6 + -0x542;
LAB_14019473d:
              if (iVar6 != 0) {
                bVar8 = iVar6 == 1;
LAB_140194688:
                if (!bVar8) goto switchD_1401947ba_caseD_718;
              }
            }
          }
        }
        else {
          if (0x713 < iVar6) {
            switch(iVar6) {
            case 0x716:
            case 0x717:
            case 0x719:
            case 0x778:
            case 0x779:
            case 0x77a:
            case 0x77c:
            case 0x77d:
            case 0x78c:
            case 0x78e:
            case 0x78f:
            case 0x7df:
            case 0x80e:
            case 0x812:
            case 0x813:
            case 0x814:
              goto switchD_1401947ba_caseD_716;
            default:
              goto switchD_1401947ba_caseD_718;
            }
          }
          if (((iVar6 != 0x713) && (iVar6 != 0x63b)) &&
             ((iVar6 != 0x64b && ((iVar6 != 0x64c && (iVar6 != 0x64d)))))) {
            bVar8 = iVar6 == 0x650;
            goto LAB_140194688;
          }
        }
      }
switchD_1401947ba_caseD_716:
      uVar2 = 1;
    }
    else {
      if (iVar6 < 0xe13) {
        if (iVar6 != 0xe12) {
          switch(iVar6) {
          case 0xb54:
          case 0xb55:
          case 0xb57:
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
          case 0xb6d:
          case 2999:
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
          case 0xbc8:
          case 0xbce:
          case 0xbd0:
          case 0xbd5:
          case 0xbd6:
          case 0xbd7:
          case 0xbd9:
            break;
          default:
            goto switchD_1401947ba_caseD_718;
          }
        }
        goto switchD_1401947ba_caseD_716;
      }
      switch(iVar6) {
      case 0xe13:
      case 0xe14:
      case 0xe15:
      case 0xe16:
      case 0xe17:
      case 0xe18:
      case 0xe19:
      case 0xe1c:
      case 0xe1d:
      case 0xe1e:
      case 0xe1f:
      case 0xe21:
      case 0xe22:
      case 0xe23:
      case 0xe24:
      case 0xe38:
      case 0xe39:
      case 0xe47:
      case 0xe4c:
      case 0xe4d:
      case 0xe4e:
        goto switchD_1401947ba_caseD_716;
      default:
switchD_1401947ba_caseD_718:
        uVar2 = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x4f1) = uVar2;
  }
  if (*(char *)(param_1 + 0x3d0) != '\0') {
    *(undefined1 *)(param_1 + 0x33c) = 1;
  }
  if (uVar4 != 7) {
    FUN_1401a36a0(param_1);
  }
  iVar6 = *(int *)(param_1 + 0x40c);
  if (iVar6 < 0x11f) {
    if (iVar6 != 0x11e) {
      switch(iVar6) {
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0x23:
      case 0x24:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x43:
      case 0x54:
      case 99:
      case 0x65:
      case 0x6f:
      case 0x8c:
      case 0x8d:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
        break;
      default:
        goto switchD_1401946f2_caseD_e;
      }
    }
  }
  else if (iVar6 < 0x63b) {
    if (iVar6 != 0x63a) {
      if (iVar6 < 0x533) {
        if ((((iVar6 != 0x532) && (iVar6 != 0x11f)) && (iVar6 != 0x294)) &&
           (((iVar6 != 0x2e9 && (iVar6 != 0x2eb)) && (iVar6 != 0x3fe)))) {
          return;
        }
      }
      else if (((iVar6 != 0x533) && (iVar6 != 0x534)) && ((iVar6 != 0x535 && (iVar6 != 0x536)))) {
        return;
      }
    }
  }
  else if (iVar6 < 0xb57) {
    if ((((iVar6 != 0xb56) && (iVar6 != 0x6a8)) && (iVar6 != 0x6d7)) &&
       ((iVar6 != 0x78d && (iVar6 != 0x80f)))) {
      return;
    }
  }
  else if (((iVar6 != 0xb6e) && (iVar6 != 0xbbc)) && ((iVar6 != 0xbbd && (iVar6 != 0xbd3)))) {
    return;
  }
  *(undefined1 *)(param_1 + 0x54a) = 1;
switchD_1401946f2_caseD_e:
  return;
}

