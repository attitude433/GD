// FUN_1401a4f70_EnhancedGameObject_customSetup @ 0x1a4f70
// Body: 5143 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a4f70(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  CCPoint *pCVar5;
  undefined4 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  fVar9 = DAT_140622c24;
  local_38 = DAT_1406ba040 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 0x40c);
  if ((int)uVar1 < 0x178) {
    if (uVar1 == 0x177) {
switchD_1401a50a4_caseD_178:
      *(undefined4 *)(param_1 + 0x3a0) = 7;
      *(undefined4 *)(param_1 + 0x420) = 9;
      *(undefined4 *)(param_1 + 0x464) = 3;
      if ((int)uVar1 < 0x5f2) {
        if ((uVar1 == 0x5f1) || (uVar1 == 0x177)) {
          puVar6 = *(undefined4 **)(param_1 + 0x450);
          fVar9 = DAT_140622cd8;
          if (puVar6 != (undefined4 *)0x0) {
            puVar6[1] = 0x3ed;
            *puVar6 = 0;
            fVar9 = DAT_140622cd8;
          }
        }
        else if (uVar1 == 0x178) {
          puVar6 = *(undefined4 **)(param_1 + 0x450);
          fVar9 = DAT_140622c84;
          if (puVar6 != (undefined4 *)0x0) {
            puVar6[1] = 0x3ee;
            *puVar6 = 0;
            fVar9 = DAT_140622c84;
          }
        }
        else if (uVar1 == 0x179) {
          puVar6 = *(undefined4 **)(param_1 + 0x450);
          if (puVar6 != (undefined4 *)0x0) {
            puVar6[1] = 0x3ed;
            *puVar6 = 0;
          }
        }
        else if ((uVar1 == 0x17a) &&
                (puVar6 = *(undefined4 **)(param_1 + 0x450), fVar9 = DAT_140622ba4,
                puVar6 != (undefined4 *)0x0)) {
          puVar6[1] = 0x3ee;
          *puVar6 = 0;
          fVar9 = DAT_140622ba4;
        }
      }
      else if (uVar1 - 0x5f2 < 7) {
                    /* WARNING: Could not recover jumptable at 0x0001401a5aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                  *(uint *)(&DAT_1401a66e8 + (longlong)(int)(uVar1 - 0x5f2) * 4)))
                  (IMAGE_DOS_HEADER_140000000.e_magic +
                   *(uint *)(&DAT_1401a66e8 + (longlong)(int)(uVar1 - 0x5f2) * 4));
        return;
      }
      if (*(char *)(param_1 + 0x57c) != '\0') goto LAB_1401a6118;
      iVar3 = rand();
      iVar2 = -1;
      if (DAT_140622b08 < (float)iVar3 / DAT_140623644) {
        iVar2 = 1;
      }
      iVar3 = rand();
      fVar9 = (((float)iVar3 / DAT_140623644) * DAT_140623294 + DAT_140623294) * fVar9 *
              (float)iVar2;
    }
    else {
      switch(uVar1) {
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x61:
      case 0x9a:
      case 0x9b:
      case 0x9c:
      case 0xde:
      case 0xdf:
      case 0xe0:
        goto switchD_1401a4fe0_caseD_55;
      case 0x58:
      case 0x59:
      case 0x62:
        goto switchD_1401a4fe0_caseD_58;
      default:
        goto switchD_1401a4fe0_caseD_5a;
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0xb4:
      case 0xb5:
      case 0xb6:
        puVar6 = *(undefined4 **)(param_1 + 0x450);
        if (puVar6 != (undefined4 *)0x0) {
          puVar6[1] = 0x3ee;
          *puVar6 = 0;
        }
        *(undefined4 *)(param_1 + 0x3a0) = 7;
        *(undefined4 *)(param_1 + 0x420) = 9;
        *(undefined4 *)(param_1 + 0x464) = 3;
        if (*(char *)(param_1 + 0x57c) != '\0') goto LAB_1401a6118;
        iVar2 = rand();
        fVar9 = ((float)iVar2 / DAT_140623644) * DAT_140623294 + DAT_140623294;
        break;
      case 0xb7:
      case 0xb8:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbc:
        goto switchD_1401a4fe0_caseD_b7;
      }
    }
LAB_1401a610d:
    FUN_1401a7280(param_1,fVar9,0);
    goto LAB_1401a6118;
  }
  if (0x727 < (int)uVar1) {
    if ((int)uVar1 < 0x8b0) {
      if (uVar1 != 0x8af) {
        switch(uVar1) {
        case 0x728:
        case 0x729:
        case 0x72a:
          goto switchD_1401a51ad_caseD_422;
        default:
          goto switchD_1401a4fe0_caseD_5a;
        case 0x72f:
        case 0x730:
        case 0x731:
        case 0x732:
          *(undefined1 *)(param_1 + 0x598) = 1;
          goto switchD_1401a51ad_caseD_41d;
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
          puVar6 = *(undefined4 **)(param_1 + 0x450);
          *(undefined4 *)(param_1 + 0x3a0) = 7;
          if (puVar6 != (undefined4 *)0x0) {
            puVar6[1] = 0x3f3;
            *puVar6 = 0;
          }
          *(undefined1 *)(param_1 + 0x57a) = 1;
          if ((*(int *)(param_1 + 0x40c) != 0x741) && (*(int *)(param_1 + 0x40c) != 0x744)) {
            *(undefined1 *)(param_1 + 0x425) = 1;
          }
LAB_1401a5fcc:
          iVar2 = rand();
          fVar9 = DAT_140623644;
          *(undefined1 *)(param_1 + 0x590) = 1;
          *(float *)(param_1 + 0x56c) = ((float)iVar2 / fVar9) * DAT_140622ad0 + DAT_140622ba4;
          iVar2 = rand();
          if ((float)iVar2 / fVar9 <= DAT_140622b74) {
            iVar2 = rand();
            *(float *)(param_1 + 0x558) = ((float)iVar2 / fVar9) * DAT_140622b08;
          }
          else {
            *(undefined1 *)(param_1 + 0x568) = 1;
            *(undefined4 *)(param_1 + 0x55c) = 0xbf800000;
          }
          goto switchD_1401a4fe0_caseD_5a;
        case 0x790:
        case 0x791:
        case 0x792:
        case 0x793:
          goto switchD_1401a50cd_caseD_398;
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
        case 0x7fe:
        case 0x7ff:
        case 0x800:
        case 0x801:
        case 0x802:
        case 0x803:
        case 0x804:
        case 0x805:
        case 0x806:
        case 0x807:
switchD_1401a5f5a_caseD_7e4:
          puVar6 = *(undefined4 **)(param_1 + 0x450);
          *(undefined4 *)(param_1 + 0x3a0) = 7;
          if (puVar6 != (undefined4 *)0x0) {
            puVar6[1] = 1;
            *puVar6 = 0;
          }
          *(undefined1 *)(param_1 + 0x57a) = 1;
          *(undefined1 *)(param_1 + 0x425) = 1;
          iVar2 = rand();
          fVar9 = DAT_140623644;
          *(undefined1 *)(param_1 + 0x590) = 1;
          *(float *)(param_1 + 0x56c) = ((float)iVar2 / fVar9) * DAT_140622ad0 + DAT_140622ba4;
          iVar2 = rand();
          if ((float)iVar2 / fVar9 <= DAT_140622b74) {
            iVar2 = rand();
            *(undefined1 *)(param_1 + 0x425) = 0;
            *(float *)(param_1 + 0x558) = ((float)iVar2 / fVar9) * DAT_140622b08;
          }
          else {
            *(undefined1 *)(param_1 + 0x568) = 1;
            *(undefined4 *)(param_1 + 0x55c) = 0xbf800000;
            *(undefined1 *)(param_1 + 0x425) = 0;
          }
          goto switchD_1401a4fe0_caseD_5a;
        }
      }
    }
    else if ((int)uVar1 < 0xa87) {
      if (((uVar1 != 0xa86) && (uVar1 != 0x8c6)) &&
         ((uVar1 != 0xa2d && ((uVar1 != 0xa45 && (uVar1 != 0xa46))))))
      goto switchD_1401a4fe0_caseD_5a;
    }
    else if ((int)uVar1 < 0xc30) {
      if (uVar1 != 0xc2f) {
        switch(uVar1) {
        case 0xb30:
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
          goto switchD_1401a5f5a_caseD_7e4;
        default:
          goto switchD_1401a4fe0_caseD_5a;
        case 3000:
        case 0xbb9:
        case 0xbba:
          goto switchD_1401a51ad_caseD_41d;
        }
      }
    }
    else if ((int)uVar1 < 0xd9c) {
      if (uVar1 != 0xd9b) {
        if ((int)uVar1 < 0xce8) {
          if ((uVar1 != 0xce7) && (((uVar1 != 0xc30 && (uVar1 != 0xc31)) && (uVar1 != 0xc93))))
          goto switchD_1401a4fe0_caseD_5a;
        }
        else if ((uVar1 != 0xce8) && (uVar1 != 0xd9a)) goto switchD_1401a4fe0_caseD_5a;
      }
    }
    else if ((((uVar1 != 0xd9c) && (uVar1 != 0xda4)) && (uVar1 != 0xda5)) &&
            ((uVar1 != 0x1073 && (uVar1 != 0x10cc)))) goto switchD_1401a4fe0_caseD_5a;
    puVar6 = *(undefined4 **)(param_1 + 0x450);
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 1;
      *puVar6 = 0;
    }
    *(undefined4 *)(param_1 + 0x3a0) = 7;
    *(undefined4 *)(param_1 + 0x420) = 9;
    *(undefined4 *)(param_1 + 0x464) = 3;
    *(undefined1 *)(param_1 + 0x425) = 1;
    *(undefined1 *)(param_1 + 0x57a) = 1;
    if ((*(int *)(param_1 + 0x40c) != 0xa2d) && (*(int *)(param_1 + 0x40c) != 0xa86)) {
      iVar2 = rand();
      *(float *)(param_1 + 0x56c) = ((float)iVar2 / DAT_140623644) * DAT_140622ad0 + DAT_140622ba4;
    }
    FUN_1401c3300(param_1);
    goto switchD_1401a4fe0_caseD_5a;
  }
  if (uVar1 == 0x727) {
switchD_1401a51ad_caseD_422:
    puVar6 = *(undefined4 **)(param_1 + 0x450);
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 0x3ef;
      *puVar6 = 0;
    }
LAB_1401a60c1:
    *(undefined4 *)(param_1 + 0x464) = 3;
    *(undefined4 *)(param_1 + 0x420) = 9;
    *(undefined4 *)(param_1 + 0x3a0) = 7;
    if (*(char *)(param_1 + 0x57c) == '\0') {
      iVar2 = rand();
      fVar9 = ((float)iVar2 / DAT_140623644) * DAT_140623294 + DAT_140623424;
      goto LAB_1401a610d;
    }
    goto LAB_1401a6118;
  }
  if ((int)uVar1 < 0x3e6) {
    if (uVar1 == 0x3e5) {
switchD_1401a4fe0_caseD_55:
      puVar6 = *(undefined4 **)(param_1 + 0x450);
      if (puVar6 != (undefined4 *)0x0) {
        puVar6[1] = 0x3ed;
        *puVar6 = 0;
      }
      fVar9 = DAT_140622c24;
      iVar2 = *(int *)(param_1 + 0x40c);
      *(undefined4 *)(param_1 + 0x3a0) = 7;
      *(undefined4 *)(param_1 + 0x420) = 9;
      *(undefined4 *)(param_1 + 0x464) = 3;
      if (((iVar2 == 0x9a) || (iVar2 == 0x9b)) || (iVar2 == 0x9c)) {
        fVar9 = DAT_140622d04;
      }
      if (*(char *)(param_1 + 0x57c) == '\0') {
        iVar2 = rand();
        fVar9 = (((float)iVar2 / DAT_140623644) * DAT_140623294 + DAT_140623294) * fVar9;
        goto LAB_1401a610d;
      }
      goto LAB_1401a6118;
    }
    if (0x2a3 < (int)uVar1) {
      switch(uVar1) {
      case 0x2a4:
      case 0x2a5:
        goto switchD_1401a4fe0_caseD_58;
      case 0x2a6:
      case 0x2a7:
      case 0x2a8:
        goto switchD_1401a4fe0_caseD_b7;
      case 0x2e4:
      case 0x2e5:
      case 0x2e6:
        *(undefined4 *)(param_1 + 0x3a0) = 2;
        *(undefined4 *)(param_1 + 0x420) = 1;
        *(undefined1 *)(param_1 + 0x438) = 1;
        if (*(char *)(param_1 + 0x57c) == '\0') {
          FUN_1401a7280(param_1,uVar1,0);
        }
        *(undefined1 *)(param_1 + 0x57b) = 1;
        if (*(int *)(param_1 + 0x40c) == 0x2e4) {
          *(undefined4 *)(param_1 + 0x38c) = DAT_140623184;
        }
        else if (*(int *)(param_1 + 0x40c) == 0x2e5) {
          *(float *)(param_1 + 0x38c) = *(float *)(param_1 + 0x2fc) * DAT_140622ac0;
        }
        else {
          *(float *)(param_1 + 0x38c) = *(float *)(param_1 + 0x2fc) * DAT_140622aa0;
        }
        break;
      case 0x398:
      case 0x399:
      case 0x39b:
      case 0x39c:
        goto switchD_1401a50cd_caseD_398;
      }
      goto switchD_1401a4fe0_caseD_5a;
    }
    if (uVar1 != 0x2a3) {
      switch(uVar1) {
      case 0x178:
      case 0x179:
      case 0x17a:
        goto switchD_1401a50a4_caseD_178;
      default:
        goto switchD_1401a4fe0_caseD_5a;
      case 0x18a:
      case 0x18b:
      case 0x18c:
        goto switchD_1401a4fe0_caseD_55;
      case 0x18d:
      case 0x18e:
      case 399:
        break;
      }
    }
switchD_1401a4fe0_caseD_58:
    fVar9 = *(float *)(param_1 + 0x2fc);
    fVar8 = fVar9 * DAT_140622aa0;
    *(undefined4 *)(param_1 + 0x3a0) = 2;
    *(float *)(param_1 + 0x38c) = fVar8;
    if ((int)uVar1 < 0x6aa) {
      uVar7 = uVar1;
      if (uVar1 == 0x6a9) {
LAB_1401a5ccd:
        *(undefined4 *)(param_1 + 0x38c) = 0x42013333;
      }
      else {
        fVar8 = _DAT_140622aa4;
        if ((int)uVar1 < 399) {
          if (uVar1 != 0x18e) {
            uVar7 = 0;
            if (uVar1 == 0x58) goto LAB_1401a5ccd;
            uVar7 = uVar1 - 0x59;
            fVar8 = DAT_140622ac0;
            if (uVar7 != 0) {
              if (uVar7 == 0x134) {
                *(undefined4 *)(param_1 + 0x38c) = 0x41e73333;
              }
              goto LAB_1401a5c7a;
            }
          }
LAB_1401a5c72:
          *(float *)(param_1 + 0x38c) = fVar9 * fVar8;
        }
        else if (uVar1 == 0x2a3) {
          *(undefined4 *)(param_1 + 0x38c) = 0x42000000;
          uVar7 = 0;
        }
        else {
          uVar7 = uVar1 - 0x2a4;
          if (uVar7 == 0) {
            *(float *)(param_1 + 0x38c) = fVar9 * DAT_140622ab8;
          }
          else if (uVar7 == 1) goto LAB_1401a5c72;
        }
      }
    }
    else {
      uVar7 = uVar1 - 0x6aa;
      if (uVar7 < 0x1f) {
                    /* WARNING: Could not recover jumptable at 0x0001401a5d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                  *(uint *)(&DAT_1401a671c + (ulonglong)(byte)(&DAT_1401a6734)[(int)uVar7] * 4)))
                  (IMAGE_DOS_HEADER_140000000.e_magic +
                   *(uint *)(&DAT_1401a671c + (ulonglong)(byte)(&DAT_1401a6734)[(int)uVar7] * 4));
        return;
      }
    }
LAB_1401a5c7a:
    if (*(char *)(param_1 + 0x57c) == '\0') {
      FUN_1401a7280(param_1,uVar7,0);
    }
    *(undefined1 *)(param_1 + 0x57b) = 1;
    *(undefined2 *)(param_1 + 0x439) = 0x101;
    *(undefined4 *)(param_1 + 0x420) = 1;
    switch(*(undefined4 *)(param_1 + 0x40c)) {
    case 0x6a9:
    case 0x6aa:
    case 0x6ab:
    case 0x6ac:
    case 0x6ad:
    case 0x6ae:
      puVar6 = *(undefined4 **)(param_1 + 0x450);
      if (puVar6 != (undefined4 *)0x0) {
        puVar6[1] = 0x3f2;
        *puVar6 = 0;
      }
    }
    goto switchD_1401a4fe0_caseD_5a;
  }
  if ((int)uVar1 < 0x533) {
    if (uVar1 == 0x532) {
      *(undefined4 *)(param_1 + 0x3a0) = 0x20;
      *(undefined1 *)(param_1 + 0x3d0) = 1;
      *(undefined4 *)(param_1 + 0x394) = 0x3f99999a;
      *(undefined4 *)(param_1 + 0x398) = 0x3f99999a;
      *(undefined4 *)(param_1 + 0x420) = 0xc;
      *(undefined4 *)(param_1 + 0x464) = 3;
      if (*(undefined8 **)(param_1 + 0x450) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x450) = 0;
      }
      if (*(char *)(param_1 + 0x28d) == '\0') {
        local_58 = 2;
        plVar4 = (longlong *)
                 FUN_140198b20(param_1,*(undefined4 *)(param_1 + 0x3a0),"ringEffect.plist",4);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x5e8))(plVar4,2);
          local_48 = _DAT_140624360;
          uStack_40 = _UNK_140624368;
          (**(code **)(*plVar4 + 0x538))(plVar4,&local_48);
          local_48 = _DAT_1406240a0;
          uStack_40 = _UNK_1406240a8;
          (**(code **)(*plVar4 + 0x558))(plVar4,&local_48);
        }
      }
      if (*(char *)(param_1 + 0x57c) == '\0') {
        *(undefined4 *)(param_1 + 0x584) = 0x43870000;
        fVar9 = DAT_140623424;
        fVar8 = *(float *)(param_1 + 0x580);
        if (*(float *)(param_1 + 0x580) == 0.0) {
          iVar3 = rand();
          iVar2 = -1;
          if (DAT_140622b08 < (float)iVar3 / DAT_140623644) {
            iVar2 = 1;
          }
        }
        else {
LAB_1401a5597:
          fVar9 = fVar8;
          iVar2 = 1;
        }
LAB_1401a559f:
        *(undefined1 *)(param_1 + 0x57b) = 1;
        *(float *)(param_1 + 0x588) = (float)iVar2 * fVar9;
        goto switchD_1401a4fe0_caseD_5a;
      }
    }
    else {
      switch(uVar1) {
      case 0x3e6:
      case 999:
      case 1000:
        goto switchD_1401a4fe0_caseD_55;
      default:
        goto switchD_1401a4fe0_caseD_5a;
      case 0x3fb:
      case 0x3fc:
      case 0x3fd:
        puVar6 = *(undefined4 **)(param_1 + 0x450);
        if (puVar6 != (undefined4 *)0x0) {
          puVar6[1] = 0x3ed;
          *puVar6 = 0;
        }
        fVar9 = *(float *)(param_1 + 0x300) + *(float *)(param_1 + 0x300);
        *(undefined4 *)(param_1 + 0x3a0) = 7;
        *(undefined4 *)(param_1 + 0x420) = 9;
        *(undefined4 *)(param_1 + 0x464) = 3;
        *(undefined1 *)(param_1 + 0x4c4) = 1;
        *(float *)(param_1 + 0x2fc) = fVar9;
        *(float *)(param_1 + 0x300) = fVar9;
        if (*(char *)(param_1 + 0x57c) == '\0') {
          DAT_1406c2c74 = DAT_1406c2c74 == '\0';
          iVar2 = rand();
          fVar9 = ((float)iVar2 / DAT_140623644) * DAT_140623324 + DAT_1406231d0;
          goto LAB_1401a610d;
        }
        break;
      case 0x3fe:
        *(undefined4 *)(param_1 + 0x3a0) = 0x1d;
        *(undefined1 *)(param_1 + 0x3d0) = 1;
        *(undefined4 *)(param_1 + 0x394) = 0x3f99999a;
        *(undefined4 *)(param_1 + 0x398) = 0x3f99999a;
        *(undefined4 *)(param_1 + 0x420) = 0xc;
        *(undefined4 *)(param_1 + 0x464) = 3;
        if (*(undefined8 **)(param_1 + 0x450) != (undefined8 *)0x0) {
          **(undefined8 **)(param_1 + 0x450) = 0;
        }
        if (*(char *)(param_1 + 0x28d) == '\0') {
          local_58 = 2;
          plVar4 = (longlong *)
                   FUN_140198b20(param_1,*(undefined4 *)(param_1 + 0x3a0),"ringEffect.plist",4);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x5e8))(plVar4,2);
            local_48 = _DAT_1406241c0;
            uStack_40 = _UNK_1406241c8;
            (**(code **)(*plVar4 + 0x538))(plVar4,&local_48);
            local_48 = _DAT_140624150;
            uStack_40 = _UNK_140624158;
            (**(code **)(*plVar4 + 0x558))(plVar4,&local_48);
          }
        }
        if (*(char *)(param_1 + 0x57c) == '\0') {
          *(undefined4 *)(param_1 + 0x584) = 0x43870000;
          fVar9 = DAT_140623424;
          fVar8 = *(float *)(param_1 + 0x580);
          if (*(float *)(param_1 + 0x580) != 0.0) goto LAB_1401a5597;
          iVar3 = rand();
          iVar2 = -1;
          if (DAT_140622b08 < (float)iVar3 / DAT_140623644) {
            iVar2 = 1;
          }
          goto LAB_1401a559f;
        }
        break;
      case 0x41a:
      case 0x41b:
      case 0x41c:
        puVar6 = *(undefined4 **)(param_1 + 0x450);
        if (puVar6 != (undefined4 *)0x0) {
          puVar6[1] = 0x3ef;
          goto LAB_1401a5f76;
        }
        goto LAB_1401a5f7a;
      case 0x41d:
      case 0x41e:
        goto switchD_1401a51ad_caseD_41d;
      case 0x41f:
      case 0x420:
      case 0x421:
        puVar6 = *(undefined4 **)(param_1 + 0x450);
        if (puVar6 != (undefined4 *)0x0) {
          puVar6[1] = 0x3ef;
          *puVar6 = 0;
        }
        *(undefined1 *)(param_1 + 0x3d0) = 1;
        *(undefined4 *)(param_1 + 0x428) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0x42c) = 0x3f99999a;
        *(undefined1 *)(param_1 + 0x426) = 1;
        goto LAB_1401a60c1;
      case 0x422:
      case 0x423:
      case 0x424:
      case 0x425:
        goto switchD_1401a51ad_caseD_422;
      }
    }
    goto LAB_1401a6118;
  }
  switch(uVar1) {
  case 0x5ec:
    puVar6 = *(undefined4 **)(param_1 + 0x450);
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 1;
      *puVar6 = 0;
    }
    *(undefined4 *)(param_1 + 0x3a0) = 7;
    *(undefined4 *)(param_1 + 0x420) = 9;
    *(undefined4 *)(param_1 + 0x464) = 3;
    *(undefined1 *)(param_1 + 0x57a) = 1;
    *(undefined1 *)(param_1 + 0x425) = 1;
    break;
  case 0x5ee:
  case 0x5ef:
switchD_1401a50cd_caseD_398:
    puVar6 = *(undefined4 **)(param_1 + 0x450);
    *(undefined4 *)(param_1 + 0x3a0) = 7;
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 0x3f3;
      *puVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x57a) = 1;
    goto LAB_1401a5fcc;
  case 0x5f1:
  case 0x5f2:
  case 0x5f3:
  case 0x5f4:
  case 0x5f5:
  case 0x5f6:
  case 0x5f7:
  case 0x5f8:
    goto switchD_1401a50a4_caseD_178;
  case 0x62e:
    puVar6 = *(undefined4 **)(param_1 + 0x450);
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 1;
      *puVar6 = 0;
    }
    *(undefined4 *)(param_1 + 0x3a0) = 2;
    *(undefined2 *)(param_1 + 0x425) = 0x101;
    *(undefined4 *)(param_1 + 0x38c) = 0x40800000;
    *(undefined4 *)(param_1 + 0x420) = 9;
    *(undefined4 *)(param_1 + 0x464) = 3;
    *(undefined1 *)(param_1 + 0x3d0) = 1;
    *(undefined4 *)(param_1 + 0x428) = 0x3f666666;
    *(undefined4 *)(param_1 + 0x42c) = 0x3f99999a;
    if (*(char *)(param_1 + 0x57c) == '\0') {
      iVar2 = rand();
      FUN_1401a7280(param_1,(((float)iVar2 / DAT_140623644) * DAT_140622ad0 + DAT_140622ba4) *
                            DAT_140623424,1);
      *(undefined1 *)(param_1 + 0x57b) = 1;
      break;
    }
    goto LAB_1401a6118;
  case 0x62f:
    puVar6 = *(undefined4 **)(param_1 + 0x450);
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 1;
      *puVar6 = 0;
    }
    *(undefined4 *)(param_1 + 0x3a0) = 2;
    *(undefined2 *)(param_1 + 0x425) = 0x101;
    *(undefined4 *)(param_1 + 0x38c) = 0x40800000;
    *(undefined4 *)(param_1 + 0x420) = 9;
    *(undefined4 *)(param_1 + 0x464) = 3;
    *(undefined1 *)(param_1 + 0x3d0) = 1;
    *(undefined4 *)(param_1 + 0x428) = 0x3f666666;
    *(undefined4 *)(param_1 + 0x42c) = 0x3f8ccccd;
    *(undefined1 *)(param_1 + 0x57a) = 1;
    *(undefined1 *)(param_1 + 0x510) = 1;
    iVar2 = rand();
    fVar9 = DAT_140623644;
    *(undefined1 *)(param_1 + 0x590) = 1;
    *(float *)(param_1 + 0x56c) = ((float)iVar2 / fVar9) * DAT_140622ad0 + DAT_140622ba4;
    iVar2 = rand();
    if ((float)iVar2 / fVar9 <= DAT_140622b74) {
      iVar2 = rand();
      *(float *)(param_1 + 0x558) = ((float)iVar2 / fVar9) * DAT_140622b08;
    }
    else {
      *(undefined1 *)(param_1 + 0x568) = 1;
      *(undefined4 *)(param_1 + 0x55c) = 0xbf800000;
    }
    if (*(char *)(param_1 + 0x28d) == '\0') {
      if (*(char *)(param_1 + 0x41c) == '\0') {
        local_58 = 1;
        FUN_140198b20(param_1,*(undefined4 *)(param_1 + 0x3a0),"fireballEffect.plist",0xfffffffe);
      }
      pCVar5 = (CCPoint *)cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,0.0,0.0);
      cocos2d::CCPoint::operator=((CCPoint *)(param_1 + 0x334),pCVar5);
      *(undefined1 *)(param_1 + 0x331) = 1;
      *(undefined1 *)(param_1 + 0x430) = 1;
    }
    break;
  case 0x637:
  case 0x639:
    puVar6 = *(undefined4 **)(param_1 + 0x450);
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 1;
      *puVar6 = 0;
    }
    *(undefined4 *)(param_1 + 0x3a0) = 7;
    *(undefined1 *)(param_1 + 0x425) = 1;
    *(undefined4 *)(param_1 + 0x420) = 9;
    *(undefined4 *)(param_1 + 0x464) = 3;
    *(undefined1 *)(param_1 + 0x57a) = 1;
    iVar2 = rand();
    *(undefined1 *)(param_1 + 0x590) = 1;
    *(undefined4 *)(param_1 + 0x5a4) = 1;
    goto LAB_1401a5720;
  case 0x638:
switchD_1401a51ad_caseD_41d:
    puVar6 = *(undefined4 **)(param_1 + 0x450);
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 1;
LAB_1401a5f76:
      *puVar6 = 0;
    }
LAB_1401a5f7a:
    *(undefined4 *)(param_1 + 0x3a0) = 7;
    *(undefined4 *)(param_1 + 0x420) = 9;
    *(undefined4 *)(param_1 + 0x464) = 3;
    *(undefined1 *)(param_1 + 0x57a) = 1;
    break;
  case 0x64e:
    FUN_140196d80(param_1);
    *(undefined4 *)(param_1 + 0x2fc) = 0x41c80000;
    *(undefined4 *)(param_1 + 0x300) = 0x41a00000;
    *(undefined1 *)(param_1 + 0x57a) = 1;
    break;
  case 0x652:
    puVar6 = *(undefined4 **)(param_1 + 0x450);
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 0x3f3;
      *puVar6 = 0;
    }
    *(undefined4 *)(param_1 + 0x3a0) = 7;
    *(undefined4 *)(param_1 + 0x420) = 9;
    *(undefined4 *)(param_1 + 0x464) = 3;
    *(undefined1 *)(param_1 + 0x57a) = 1;
    iVar2 = rand();
    *(undefined1 *)(param_1 + 0x590) = 1;
LAB_1401a5720:
    *(float *)(param_1 + 0x558) = ((float)iVar2 / DAT_140623644) * DAT_140622b08;
    iVar2 = rand();
    fVar9 = ((float)iVar2 / DAT_140623644) * DAT_140622ad0;
LAB_1401a566c:
    *(float *)(param_1 + 0x56c) = fVar9 + DAT_140622ba4;
    break;
  case 0x653:
  case 0x654:
switchD_1401a4fe0_caseD_b7:
    *(undefined4 *)(param_1 + 0x3a0) = 2;
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x420) = 1;
    *(undefined1 *)(param_1 + 0x57b) = 1;
    if (((uVar1 == 0x2a6) || (uVar1 == 0x2a7)) || (uVar1 == 0x2a8)) {
      *(undefined4 *)(param_1 + 0x420) = 0;
    }
    else if ((uVar1 == 0x653) || (uVar1 == 0x654)) {
      *(undefined1 *)(param_1 + 0x439) = 1;
      *(undefined1 *)(param_1 + 0x425) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x439) = 1;
    }
    if (*(char *)(param_1 + 0x57c) == '\0') {
      if (uVar1 == 0xba) {
        iVar3 = 0;
      }
      else {
        iVar3 = uVar1 - 0x653;
        if (iVar3 == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = 0;
          if (iVar3 == 1) {
            iVar2 = uVar1 - 0x655;
          }
        }
      }
      FUN_1401a7280(param_1,iVar3,iVar2);
    }
    iVar2 = *(int *)(param_1 + 0x40c);
    if (iVar2 < 0x2a7) {
      if (iVar2 == 0x2a6) {
        *(float *)(param_1 + 0x38c) = *(float *)(param_1 + 0x2fc) * _DAT_140622acc;
        *(undefined4 *)(param_1 + 0x38c) = DAT_140623170;
        break;
      }
      if (iVar2 != 0xb7) {
        if (iVar2 == 0xb8) {
          *(float *)(param_1 + 0x38c) = *(float *)(param_1 + 0x2fc) * DAT_140622ab8;
          break;
        }
        if (iVar2 == 0xba) {
          *(undefined4 *)(param_1 + 0x38c) = DAT_140623184;
          break;
        }
        if (iVar2 != 0xbb) goto LAB_1401a5eda;
      }
    }
    else if (iVar2 != 0x2a7) {
      if (iVar2 == 0x653) {
        *(undefined4 *)(param_1 + 0x38c) = DAT_140623144;
        break;
      }
      if (iVar2 == 0x654) {
        *(undefined4 *)(param_1 + 0x38c) = DAT_1406230e0;
        break;
      }
LAB_1401a5eda:
      *(float *)(param_1 + 0x38c) = *(float *)(param_1 + 0x2fc) * DAT_140622aa0;
      break;
    }
    *(float *)(param_1 + 0x38c) = *(float *)(param_1 + 0x2fc) * DAT_140622ac0;
    break;
  case 0x6a1:
  case 0x6a2:
  case 0x6a3:
    puVar6 = *(undefined4 **)(param_1 + 0x450);
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 0x3ee;
      *puVar6 = 0;
    }
    *(undefined4 *)(param_1 + 0x3a0) = 7;
    *(undefined4 *)(param_1 + 0x420) = 9;
    *(undefined4 *)(param_1 + 0x464) = 3;
    *(undefined1 *)(param_1 + 0x57a) = 1;
    iVar2 = rand();
    *(undefined1 *)(param_1 + 0x590) = 1;
    *(float *)(param_1 + 0x558) = ((float)iVar2 / DAT_140623644) * DAT_140622b08;
    iVar2 = rand();
    fVar9 = ((float)iVar2 / DAT_140623644) * DAT_140622b08;
    goto LAB_1401a566c;
  case 0x6a9:
  case 0x6aa:
  case 0x6ab:
  case 0x6ac:
  case 0x6ad:
  case 0x6ae:
  case 0x6c6:
  case 0x6c7:
  case 0x6c8:
    goto switchD_1401a4fe0_caseD_58;
  case 0x6d8:
    puVar6 = *(undefined4 **)(param_1 + 0x450);
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 0x3ef;
      *puVar6 = 0;
    }
    *(undefined4 *)(param_1 + 0x3a0) = 7;
    *(undefined4 *)(param_1 + 0x420) = 9;
    *(undefined4 *)(param_1 + 0x464) = 3;
    if (*(char *)(param_1 + 0x57c) == '\0') {
      iVar2 = rand();
      FUN_1401a7280(param_1,((float)iVar2 / DAT_140623644) * DAT_140623294 + DAT_140623424,1);
      *(undefined1 *)(param_1 + 0x57b) = 1;
      break;
    }
LAB_1401a6118:
    *(undefined1 *)(param_1 + 0x57b) = 1;
  }
switchD_1401a4fe0_caseD_5a:
  FUN_140190e20(param_1);
  return;
}

