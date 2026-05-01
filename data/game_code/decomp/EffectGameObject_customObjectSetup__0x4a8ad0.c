// Function: FUN_1404a8ad0
// Original target: EffectGameObject_customObjectSetup @ 0x4a8ad0
// Ghidra entry: 1404a8ad0
// Signature: undefined FUN_1404a8ad0(void)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404a8ad0(longlong param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  float fVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  CCPoint *pCVar9;
  void **ppvVar10;
  undefined4 *puVar11;
  char *pcVar12;
  void *_Memory;
  undefined1 uVar13;
  uint uVar14;
  undefined1 uVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_f8 [32];
  uint local_d8 [2];
  undefined1 local_d0 [16];
  void *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 local_a0 [32];
  ulonglong local_80;
  
  local_80 = DAT_1406ba040 ^ (ulonglong)auStack_f8;
  iVar5 = 0;
  local_d8[0] = 0;
  FUN_1401a4c40();
  uVar13 = 0;
  iVar4 = 0;
  if (*(char *)(param_1 + 0x5d0) == '\0') {
    iVar6 = iVar4;
    if (*(longlong *)(*param_3 + 0x58) != 0) {
      pcVar12 = (char *)(*param_2 + 0x160);
      if (0xf < *(ulonglong *)(*param_2 + 0x178)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar6 = atoi(pcVar12);
    }
    *(bool *)(param_1 + 0x5d0) = iVar6 != 0;
  }
  iVar6 = iVar4;
  if (*(longlong *)(*param_3 + 0xb88) != 0) {
    pcVar12 = (char *)(*param_2 + 0x2e20);
    if (0xf < *(ulonglong *)(*param_2 + 0x2e38)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar6 = atoi(pcVar12);
  }
  *(bool *)(param_1 + 0x5d2) = iVar6 != 0;
  iVar6 = iVar4;
  if (*(longlong *)(*param_3 + 0x1f0) != 0) {
    pcVar12 = (char *)(*param_2 + 0x7c0);
    if (0xf < *(ulonglong *)(*param_2 + 0x7d8)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar6 = atoi(pcVar12);
  }
  *(bool *)(param_1 + 0x5d1) = iVar6 != 0;
  iVar6 = iVar4;
  if (*(longlong *)(*param_3 + 0x2b8) != 0) {
    pcVar12 = (char *)(*param_2 + 0xae0);
    if (0xf < *(ulonglong *)(*param_2 + 0xaf8)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar6 = atoi(pcVar12);
  }
  *(bool *)(param_1 + 0x690) = iVar6 != 0;
  iVar6 = iVar4;
  if (*(longlong *)(*param_3 + 0x8e0) != 0) {
    pcVar12 = (char *)(*param_2 + 0x2380);
    if (0xf < *(ulonglong *)(*param_2 + 0x2398)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar6 = atoi(pcVar12);
  }
  *(bool *)(param_1 + 0x6dc) = iVar6 != 0;
  iVar6 = iVar4;
  if (*(longlong *)(*param_3 + 0x68) != 0) {
    pcVar12 = (char *)(*param_2 + 0x1a0);
    if (0xf < *(ulonglong *)(*param_2 + 0x1b8)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar6 = atoi(pcVar12);
  }
  *(bool *)(param_1 + 0x6f8) = iVar6 != 0;
  iVar6 = iVar4;
  if (*(longlong *)(*param_3 + 0x398) != 0) {
    pcVar12 = (char *)(*param_2 + 0xe60);
    if (0xf < *(ulonglong *)(*param_2 + 0xe78)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar6 = atoi(pcVar12);
  }
  *(int *)(param_1 + 0x6fc) = iVar6;
  iVar6 = iVar4;
  if (*(longlong *)(*param_3 + 0x550) != 0) {
    pcVar12 = (char *)(*param_2 + 0x1540);
    if (0xf < *(ulonglong *)(*param_2 + 0x1558)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar6 = atoi(pcVar12);
  }
  *(int *)(param_1 + 0x700) = iVar6;
  iVar6 = iVar4;
  if (*(longlong *)(*param_3 + 0x3a8) != 0) {
    pcVar12 = (char *)(*param_2 + 0xea0);
    if (0xf < *(ulonglong *)(*param_2 + 0xeb8)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar6 = atoi(pcVar12);
  }
  *(bool *)(param_1 + 0x704) = iVar6 != 0;
  iVar6 = iVar4;
  if (*(longlong *)(*param_3 + 0x10b0) != 0) {
    pcVar12 = (char *)(*param_2 + 0x42c0);
    if (0xf < *(ulonglong *)(*param_2 + 0x42d8)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar6 = atoi(pcVar12);
  }
  *(int *)(param_1 + 0x698) = iVar6;
  iVar6 = iVar4;
  if (*(longlong *)(*param_3 + 0x8c0) != 0) {
    pcVar12 = (char *)(*param_2 + 0x2300);
    if (0xf < *(ulonglong *)(*param_2 + 0x2318)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar6 = atoi(pcVar12);
  }
  *(bool *)(param_1 + 0x738) = iVar6 != 0;
  iVar6 = iVar4;
  if (*(longlong *)(*param_3 + 0x8c8) != 0) {
    pcVar12 = (char *)(*param_2 + 0x2320);
    if (0xf < *(ulonglong *)(*param_2 + 0x2338)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar6 = atoi(pcVar12);
  }
  *(bool *)(param_1 + 0x739) = iVar6 != 0;
  iVar6 = 0;
  if (*(int *)(param_1 + 0x3a0) == 0x1e) {
    iVar7 = iVar4;
    if (*(longlong *)(*param_3 + 0x198) != 0) {
      pcVar12 = (char *)(*param_2 + 0x660);
      if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar7 = atoi(pcVar12);
    }
    *(int *)(param_1 + 0x5c8) = iVar7;
    iVar7 = iVar4;
    if (*(longlong *)(*param_3 + 0x270) != 0) {
      pcVar12 = (char *)(*param_2 + 0x9c0);
      if (0xf < *(ulonglong *)(*param_2 + 0x9d8)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar7 = atoi(pcVar12);
    }
    *(bool *)(param_1 + 0x6a7) = iVar7 != 0;
    iVar7 = iVar4;
    if (*(longlong *)(*param_3 + 0xbe8) != 0) {
      pcVar12 = (char *)(*param_2 + 0x2fa0);
      if (0xf < *(ulonglong *)(*param_2 + 0x2fb8)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar7 = atoi(pcVar12);
    }
    *(bool *)(param_1 + 0x6a8) = iVar7 != 0;
    if (*(longlong *)(*param_3 + 0xbf0) != 0) {
      pcVar12 = (char *)(*param_2 + 0x2fc0);
      if (0xf < *(ulonglong *)(*param_2 + 0x2fd8)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar4 = atoi(pcVar12);
    }
    *(bool *)(param_1 + 0x6a9) = iVar4 != 0;
    iVar4 = iVar6;
    if (*(longlong *)(*param_3 + 0xbf8) != 0) {
      pcVar12 = (char *)(*param_2 + 0x2fe0);
      if (0xf < *(ulonglong *)(*param_2 + 0x2ff8)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar4 = atoi(pcVar12);
    }
    *(int *)(param_1 + 0x6b0) = iVar4;
    iVar4 = iVar6;
    if (*(longlong *)(*param_3 + 0xdc0) != 0) {
      pcVar12 = (char *)(*param_2 + 0x3700);
      if (0xf < *(ulonglong *)(*param_2 + 0x3718)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar4 = atoi(pcVar12);
    }
    *(int *)(param_1 + 0x6ac) = iVar4;
    iVar4 = iVar6;
    if (*(longlong *)(*param_3 + 0xe78) != 0) {
      pcVar12 = (char *)(*param_2 + 0x39e0);
      if (0xf < *(ulonglong *)(*param_2 + 0x39f8)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar4 = atoi(pcVar12);
    }
    *(bool *)(param_1 + 0x6b4) = iVar4 != 0;
    if (*(longlong *)(*param_3 + 0x278) != 0) {
      pcVar12 = (char *)(*param_2 + 0x9e0);
      if (0xf < *(ulonglong *)(*param_2 + 0x9f8)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar4 = atoi(pcVar12);
      if (iVar4 == 1) {
        *(undefined1 *)(param_1 + 0x6a8) = 1;
      }
      else if (iVar4 == 2) {
        *(undefined1 *)(param_1 + 0x6a9) = 1;
      }
    }
    iVar4 = iVar6;
    if (*(longlong *)(*param_3 + 0x280) != 0) {
      pcVar12 = (char *)(*param_2 + 0xa00);
      if (0xf < *(ulonglong *)(*param_2 + 0xa18)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar4 = atoi(pcVar12);
    }
    *(int *)(param_1 + 0x6a0) = iVar4;
    iVar4 = iVar5;
    if (*(longlong *)(*param_3 + 0x1c0) != 0) {
      pcVar12 = (char *)(*param_2 + 0x700);
      if (0xf < *(ulonglong *)(*param_2 + 0x718)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar4 = atoi(pcVar12);
    }
    *(bool *)(param_1 + 0x675) = iVar4 != 0;
  }
  iVar4 = *(int *)(param_1 + 0x40c);
  iVar7 = 0;
  if (0x5f0 < iVar4) {
    if (0x714 < iVar4) {
      if (0xb55 < iVar4) {
        if (iVar4 < 0xe1a) {
          if (iVar4 == 0xe19) {
            iVar4 = iVar6;
            if (*(longlong *)(*param_3 + 0x280) != 0) {
              pcVar12 = (char *)(*param_2 + 0xa00);
              if (0xf < *(ulonglong *)(*param_2 + 0xa18)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x6a0) = iVar4;
            iVar4 = iVar6;
            if (*(longlong *)(*param_3 + 0x2f8) != 0) {
              pcVar12 = (char *)(*param_2 + 0xbe0);
              if (0xf < *(ulonglong *)(*param_2 + 0xbf8)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x694) = iVar4;
            iVar4 = iVar6;
            if (*(longlong *)(*param_3 + 0x198) != 0) {
              pcVar12 = (char *)(*param_2 + 0x660);
              if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x5c8) = iVar4;
            iVar4 = iVar6;
            if (*(longlong *)(*param_3 + 0x238) != 0) {
              pcVar12 = (char *)(*param_2 + 0x8e0);
              if (0xf < *(ulonglong *)(*param_2 + 0x8f8)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x5cc) = iVar4;
            iVar4 = iVar6;
            if (*(longlong *)(*param_3 + 0x1c0) != 0) {
              pcVar12 = (char *)(*param_2 + 0x700);
              if (0xf < *(ulonglong *)(*param_2 + 0x718)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x675) = iVar4 != 0;
            iVar4 = iVar6;
            if (*(longlong *)(*param_3 + 0x450) != 0) {
              pcVar12 = (char *)(*param_2 + 0x1140);
              if (0xf < *(ulonglong *)(*param_2 + 0x1158)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x6a4) = iVar4 != 0;
            if (*(longlong *)(*param_3 + 0x640) != 0) {
              pcVar12 = (char *)(*param_2 + 0x1900);
              if (0xf < *(ulonglong *)(*param_2 + 0x1918)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar6 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x6a5) = iVar6 != 0;
            if (*(longlong *)(*param_3 + 0x648) != 0) {
              pcVar12 = (char *)(*param_2 + 0x1920);
              if (0xf < *(ulonglong *)(*param_2 + 0x1938)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar7 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x6a6) = iVar7 != 0;
            if (*(longlong *)(*param_3 + 0x12c0) == 0) {
              *(undefined1 *)(param_1 + 0x716) = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x4b00);
              if (0xf < *(ulonglong *)(*param_2 + 0x4b18)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
              *(bool *)(param_1 + 0x716) = iVar4 != 0;
            }
            goto switchD_1404a9020_caseD_e;
          }
          if (iVar4 == 0xb6d) goto switchD_1404a9020_caseD_c;
          if (iVar4 == 2999) {
            uVar23 = 0;
            uVar24 = 0;
            if (*(longlong *)(*param_3 + 0xe8) == 0) {
              uVar20 = 0;
              uVar22 = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x3a0);
              if (0xf < *(ulonglong *)(*param_2 + 0x3b8)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar20 = SUB84(dVar1,0);
              uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            if (*(longlong *)(*param_3 + 0x2a8) == 0) {
              uVar18 = 0;
              uVar21 = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0xaa0);
              if (0xf < *(ulonglong *)(*param_2 + 0xab8)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar18 = SUB84(dVar1,0);
              uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            fVar19 = (float)(double)CONCAT44(uVar21,uVar18);
            if ((float)(double)CONCAT44(uVar21,uVar18) <= 0.0) {
              fVar19 = DAT_140622e58;
            }
            pCVar9 = (CCPoint *)
                     cocos2d::CCPoint::CCPoint
                               ((CCPoint *)local_d8,0.0,(float)(double)CONCAT44(uVar22,uVar20));
            cocos2d::CCPoint::operator=((CCPoint *)(param_1 + 0x5e0),pCVar9);
            if (*(longlong *)(*param_3 + 0x50) != 0) {
              pcVar12 = (char *)(*param_2 + 0x140);
              if (0xf < *(ulonglong *)(*param_2 + 0x158)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar23 = SUB84(dVar1,0);
              uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            *(float *)(param_1 + 0x5bc) = (float)(double)CONCAT44(uVar24,uVar23);
            if (*(longlong *)(*param_3 + 0xf0) == 0) {
              *(undefined4 *)(param_1 + 0x5e8) = 0;
              *(float *)(param_1 + 0x5ec) = fVar19;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x3c0);
              if (0xf < *(ulonglong *)(*param_2 + 0x3d8)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
              *(int *)(param_1 + 0x5e8) = iVar4;
              *(float *)(param_1 + 0x5ec) = fVar19;
            }
            goto switchD_1404a9020_caseD_e;
          }
          if (iVar4 == 0xbd9) {
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x198) != 0) {
              pcVar12 = (char *)(*param_2 + 0x660);
              if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x5c8) = iVar4;
            if (*(longlong *)(*param_3 + 0x238) != 0) {
              pcVar12 = (char *)(*param_2 + 0x8e0);
              if (0xf < *(ulonglong *)(*param_2 + 0x8f8)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar7 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x5cc) = iVar7;
            if (*(longlong *)(*param_3 + 0x260) == 0) {
              *(undefined4 *)(param_1 + 0x684) = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x980);
              if (0xf < *(ulonglong *)(*param_2 + 0x998)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
              *(int *)(param_1 + 0x684) = iVar4;
            }
            goto switchD_1404a9020_caseD_e;
          }
          if (iVar4 != 0xe16) goto switchD_1404a9020_caseD_e;
        }
        else if (iVar4 != 0xe1c) {
          if (iVar4 == 0xe22) {
            if (*(longlong *)(*param_3 + 0x198) == 0) {
              *(undefined4 *)(param_1 + 0x5c8) = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x660);
              if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
              *(int *)(param_1 + 0x5c8) = iVar4;
            }
          }
          else if (iVar4 == 0xe38) {
            if (*(longlong *)(*param_3 + 0x198) != 0) {
              pcVar12 = (char *)(*param_2 + 0x660);
              if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar7 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x5c8) = iVar7;
            if (*(longlong *)(*param_3 + 0x238) == 0) {
              *(undefined4 *)(param_1 + 0x5cc) = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x8e0);
              if (0xf < *(ulonglong *)(*param_2 + 0x8f8)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
              *(int *)(param_1 + 0x5cc) = iVar4;
            }
          }
          else if (iVar4 == 0xe4e) {
            if (*(longlong *)(*param_3 + 0x198) == 0) {
              *(undefined4 *)(param_1 + 0x5c8) = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x660);
              if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
              *(int *)(param_1 + 0x5c8) = iVar4;
            }
          }
          goto switchD_1404a9020_caseD_e;
        }
        uVar23 = 0;
        uVar24 = 0;
        if (*(longlong *)(*param_3 + 0x478) == 0) {
          uVar20 = 0;
          uVar22 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x11e0);
          if (0xf < *(ulonglong *)(*param_2 + 0x11f8)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar20 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(float *)(param_1 + 0x5fc) = (float)(double)CONCAT44(uVar22,uVar20);
        if (*(longlong *)(*param_3 + 0x480) != 0) {
          pcVar12 = (char *)(*param_2 + 0x1200);
          if (0xf < *(ulonglong *)(*param_2 + 0x1218)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar23 = SUB84(dVar1,0);
          uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        fVar19 = (float)(double)CONCAT44(uVar24,uVar23);
LAB_1404ab6b6:
        *(float *)(param_1 + 0x600) = fVar19;
        goto switchD_1404a9020_caseD_e;
      }
      if (iVar4 == 0xb55) {
        uVar23 = 0;
        uVar24 = 0;
        if (*(longlong *)(*param_3 + 0xe0) == 0) {
          uVar20 = 0;
          uVar22 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x380);
          if (0xf < *(ulonglong *)(*param_2 + 0x398)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar20 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        if (*(longlong *)(*param_3 + 0xe8) != 0) {
          pcVar12 = (char *)(*param_2 + 0x3a0);
          if (0xf < *(ulonglong *)(*param_2 + 0x3b8)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar23 = SUB84(dVar1,0);
          uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        pCVar9 = (CCPoint *)
                 cocos2d::CCPoint::CCPoint
                           ((CCPoint *)local_d8,(float)(double)CONCAT44(uVar22,uVar20),
                            (float)(double)CONCAT44(uVar24,uVar23));
        cocos2d::CCPoint::operator=((CCPoint *)(param_1 + 0x5e0),pCVar9);
        iVar4 = iVar6;
        if (*(longlong *)(*param_3 + 0x1d0) != 0) {
          pcVar12 = (char *)(*param_2 + 0x740);
          if (0xf < *(ulonglong *)(*param_2 + 0x758)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x5f0) = iVar4 != 0;
        if (*(longlong *)(*param_3 + 0x1d8) != 0) {
          pcVar12 = (char *)(*param_2 + 0x760);
          if (0xf < *(ulonglong *)(*param_2 + 0x778)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar6 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x5f1) = iVar6 != 0;
        if (*(longlong *)(*param_3 + 0x328) == 0) {
          *(undefined4 *)(param_1 + 0x5f8) = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0xca0);
          if (0xf < *(ulonglong *)(*param_2 + 0xcb8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          *(int *)(param_1 + 0x5f8) = iVar4;
        }
        goto switchD_1404a9020_caseD_e;
      }
      switch(iVar4) {
      case 0x716:
        iVar4 = iVar6;
        if (*(longlong *)(*param_3 + 0x198) != 0) {
          pcVar12 = (char *)(*param_2 + 0x660);
          if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        uVar23 = 0;
        uVar24 = 0;
        if (*(longlong *)(*param_3 + 0x50) == 0) {
          uVar20 = 0;
          uVar22 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x140);
          if (0xf < *(ulonglong *)(*param_2 + 0x158)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar20 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        if (*(longlong *)(*param_3 + 0x2d0) == 0) {
          uVar18 = 0;
          uVar21 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0xb40);
          if (0xf < *(ulonglong *)(*param_2 + 0xb58)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar18 = SUB84(dVar1,0);
          uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(float *)(param_1 + 0x638) = (float)(double)CONCAT44(uVar21,uVar18);
        if (*(longlong *)(*param_3 + 0x2d8) == 0) {
          uVar18 = 0;
          uVar21 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0xb60);
          if (0xf < *(ulonglong *)(*param_2 + 0xb78)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar18 = SUB84(dVar1,0);
          uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(float *)(param_1 + 0x63c) = (float)(double)CONCAT44(uVar21,uVar18);
        if (*(longlong *)(*param_3 + 0x2e0) != 0) {
          pcVar12 = (char *)(*param_2 + 0xb80);
          if (0xf < *(ulonglong *)(*param_2 + 0xb98)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar6 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x640) = iVar6;
        if (*(longlong *)(*param_3 + 0x348) != 0) {
          pcVar12 = (char *)(*param_2 + 0xd20);
          if (0xf < *(ulonglong *)(*param_2 + 0xd38)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar23 = SUB84(dVar1,0);
          uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(float *)(param_1 + 0x644) = (float)(double)CONCAT44(uVar24,uVar23);
        *(int *)(param_1 + 0x5c8) = iVar4;
        *(float *)(param_1 + 0x5bc) = (float)(double)CONCAT44(uVar22,uVar20);
        break;
      case 0x717:
        iVar4 = iVar6;
        if (*(longlong *)(*param_3 + 0x280) != 0) {
          pcVar12 = (char *)(*param_2 + 0xa00);
          if (0xf < *(ulonglong *)(*param_2 + 0xa18)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x6a0) = iVar4;
        iVar4 = iVar6;
        if (*(longlong *)(*param_3 + 0x2f8) != 0) {
          pcVar12 = (char *)(*param_2 + 0xbe0);
          if (0xf < *(ulonglong *)(*param_2 + 0xbf8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x694) = iVar4;
        iVar4 = iVar6;
        if (*(longlong *)(*param_3 + 0x198) != 0) {
          pcVar12 = (char *)(*param_2 + 0x660);
          if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x5c8) = iVar4;
        if (*(longlong *)(*param_3 + 0x50) == 0) {
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x140);
          if (0xf < *(ulonglong *)(*param_2 + 0x158)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar23 = SUB84(dVar1,0);
          uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(float *)(param_1 + 0x5bc) = (float)(double)CONCAT44(uVar24,uVar23);
        iVar4 = iVar6;
        if (*(longlong *)(*param_3 + 0x2e8) != 0) {
          pcVar12 = (char *)(*param_2 + 0xba0);
          if (0xf < *(ulonglong *)(*param_2 + 3000)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x693) = iVar4 != 0;
        iVar4 = iVar6;
        if (*(longlong *)(*param_3 + 0x1c0) != 0) {
          pcVar12 = (char *)(*param_2 + 0x700);
          if (0xf < *(ulonglong *)(*param_2 + 0x718)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x675) = iVar4 != 0;
        iVar4 = iVar6;
        if (*(longlong *)(*param_3 + 0x450) != 0) {
          pcVar12 = (char *)(*param_2 + 0x1140);
          if (0xf < *(ulonglong *)(*param_2 + 0x1158)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x6a4) = iVar4 != 0;
        if (*(longlong *)(*param_3 + 0x640) != 0) {
          pcVar12 = (char *)(*param_2 + 0x1900);
          if (0xf < *(ulonglong *)(*param_2 + 0x1918)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar6 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x6a5) = iVar6 != 0;
        if (*(longlong *)(*param_3 + 0x648) == 0) {
          *(undefined1 *)(param_1 + 0x6a6) = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x1920);
          if (0xf < *(ulonglong *)(*param_2 + 0x1938)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          *(bool *)(param_1 + 0x6a6) = iVar4 != 0;
        }
        break;
      case 0x718:
        if (*(longlong *)(*param_3 + 0x280) != 0) {
          pcVar12 = (char *)(*param_2 + 0xa00);
          if (0xf < *(ulonglong *)(*param_2 + 0xa18)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar7 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x6a0) = iVar7;
        if (*(longlong *)(*param_3 + 0x2f0) == 0) {
          *(undefined1 *)(param_1 + 0x69d) = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0xbc0);
          if (0xf < *(ulonglong *)(*param_2 + 0xbd8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          *(bool *)(param_1 + 0x69d) = iVar4 != 0;
        }
        break;
      case 0x778:
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x198) != 0) {
          pcVar12 = (char *)(*param_2 + 0x660);
          if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x5c8) = iVar4;
        if (*(longlong *)(*param_3 + 0x238) != 0) {
          pcVar12 = (char *)(*param_2 + 0x8e0);
          if (0xf < *(ulonglong *)(*param_2 + 0x8f8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar7 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x5cc) = iVar7;
        if (*(longlong *)(*param_3 + 0x50) == 0) {
          *(undefined4 *)(param_1 + 0x5bc) = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x140);
          if (0xf < *(ulonglong *)(*param_2 + 0x158)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          *(float *)(param_1 + 0x5bc) = (float)dVar1;
        }
        break;
      case 0x779:
        uVar23 = 0;
        uVar24 = 0;
        if (*(longlong *)(*param_3 + 0xb98) == 0) {
          uVar20 = 0;
          uVar22 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x2e60);
          if (0xf < *(ulonglong *)(*param_2 + 0x2e78)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar20 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(float *)(param_1 + 0x6e0) = (float)(double)CONCAT44(uVar22,uVar20);
        if ((float)(double)CONCAT44(uVar22,uVar20) <= 0.0) {
          iVar4 = iVar7;
          if (*(longlong *)(*param_3 + 0x368) != 0) {
            pcVar12 = (char *)(*param_2 + 0xda0);
            if (0xf < *(ulonglong *)(*param_2 + 0xdb8)) {
              pcVar12 = *(char **)pcVar12;
            }
            iVar4 = atoi(pcVar12);
            if (8 < iVar4) {
              iVar4 = 8;
            }
            if (iVar4 < -4) {
              iVar4 = -4;
            }
          }
          *(float *)(param_1 + 0x6e0) =
               DAT_14062343c / ((float)iVar4 * DAT_140623164 + DAT_14062343c);
        }
        if (*(longlong *)(*param_3 + 0x50) == 0) {
          uVar20 = 0;
          uVar22 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x140);
          if (0xf < *(ulonglong *)(*param_2 + 0x158)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar20 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(float *)(param_1 + 0x5bc) = (float)(double)CONCAT44(uVar22,uVar20);
        if (*(longlong *)(*param_3 + 0xf0) != 0) {
          pcVar12 = (char *)(*param_2 + 0x3c0);
          if (0xf < *(ulonglong *)(*param_2 + 0x3d8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar7 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x5e8) = iVar7;
        if (*(longlong *)(*param_3 + 0x2a8) != 0) {
          pcVar12 = (char *)(*param_2 + 0xaa0);
          if (0xf < *(ulonglong *)(*param_2 + 0xab8)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar23 = SUB84(dVar1,0);
          uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        fVar19 = (float)(double)CONCAT44(uVar24,uVar23);
        if ((float)(double)CONCAT44(uVar24,uVar23) <= 0.0) {
          fVar19 = DAT_140622e58;
        }
        *(float *)(param_1 + 0x5ec) = fVar19;
        break;
      case 0x78b:
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x198) != 0) {
          pcVar12 = (char *)(*param_2 + 0x660);
          if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x5c8) = iVar4;
        if (*(longlong *)(*param_3 + 0x3b0) != 0) {
          pcVar12 = (char *)(*param_2 + 0xec0);
          if (0xf < *(ulonglong *)(*param_2 + 0xed8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar7 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x6f1) = iVar7 != 0;
        if (*(longlong *)(*param_3 + 0x1d8) == 0) {
          *(undefined1 *)(param_1 + 0x5f1) = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x760);
          if (0xf < *(ulonglong *)(*param_2 + 0x778)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          *(bool *)(param_1 + 0x5f1) = iVar4 != 0;
        }
        break;
      case 0x78c:
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x450) != 0) {
          pcVar12 = (char *)(*param_2 + 0x1140);
          if (0xf < *(ulonglong *)(*param_2 + 0x1158)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x6a4) = iVar4 != 0;
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x640) != 0) {
          pcVar12 = (char *)(*param_2 + 0x1900);
          if (0xf < *(ulonglong *)(*param_2 + 0x1918)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x6a5) = iVar4 != 0;
        if (*(longlong *)(*param_3 + 0x1d0) != 0) {
          pcVar12 = (char *)(*param_2 + 0x740);
          if (0xf < *(ulonglong *)(*param_2 + 0x758)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar7 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x5f0) = iVar7 != 0;
        if (*(longlong *)(*param_3 + 0x1d8) != 0) {
          pcVar12 = (char *)(*param_2 + 0x760);
          if (0xf < *(ulonglong *)(*param_2 + 0x778)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar6 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x5f1) = iVar6 != 0;
        if (*(longlong *)(*param_3 + 0x468) == 0) {
          *(undefined1 *)(param_1 + 0x5f2) = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x11a0);
          if (0xf < *(ulonglong *)(*param_2 + 0x11b8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          *(bool *)(param_1 + 0x5f2) = iVar4 != 0;
        }
        break;
      case 0x78d:
        goto switchD_1404a9020_caseD_c;
      case 0x78f:
        if (*(longlong *)(*param_3 + 0x3c0) == 0) {
          *(undefined4 *)(param_1 + 0x6f4) = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0xf00);
          if (0xf < *(ulonglong *)(*param_2 + 0xf18)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          *(float *)(param_1 + 0x6f4) = (float)dVar1;
        }
        break;
      case 0x812:
        if (*(longlong *)(*param_3 + 0x4a0) == 0) {
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x1280);
          if (0xf < *(ulonglong *)(*param_2 + 0x1298)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar23 = SUB84(dVar1,0);
          uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        fVar19 = (float)(double)CONCAT44(uVar24,uVar23);
        if (fVar19 < 0.0) {
          fVar2 = DAT_1406236c0;
          if (fVar19 <= DAT_1406236c0) {
            fVar2 = fVar19;
          }
          bVar17 = DAT_140623730 == fVar2;
          bVar16 = DAT_140623730 < fVar2;
          fVar19 = DAT_140623730;
        }
        else {
          fVar2 = DAT_140622a10;
          if (DAT_140622a10 <= fVar19) {
            fVar2 = fVar19;
          }
          bVar17 = fVar2 == DAT_140622e58;
          bVar16 = fVar2 < DAT_140622e58;
          fVar19 = DAT_140622e58;
        }
        if (bVar16 || bVar17) {
          fVar19 = fVar2;
        }
        *(float *)(param_1 + 0x6d8) = fVar19;
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x450) != 0) {
          pcVar12 = (char *)(*param_2 + 0x1140);
          if (0xf < *(ulonglong *)(*param_2 + 0x1158)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x6a4) = iVar4 != 0;
        if (*(longlong *)(*param_3 + 0x640) != 0) {
          pcVar12 = (char *)(*param_2 + 0x1900);
          if (0xf < *(ulonglong *)(*param_2 + 0x1918)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar7 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x6a5) = iVar7 != 0;
        if (*(longlong *)(*param_3 + 0x648) == 0) {
          *(undefined1 *)(param_1 + 0x6a6) = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x1920);
          if (0xf < *(ulonglong *)(*param_2 + 0x1938)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          *(bool *)(param_1 + 0x6a6) = iVar4 != 0;
        }
      }
      goto switchD_1404a9020_caseD_e;
    }
    if (iVar4 != 0x714) {
      if (iVar4 == 0x631) {
        if (*(longlong *)(*param_3 + 0x198) != 0) {
          pcVar12 = (char *)(*param_2 + 0x660);
          if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar6 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x5c8) = iVar6;
        if (*(longlong *)(*param_3 + 0x260) == 0) {
          *(undefined4 *)(param_1 + 0x684) = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x980);
          if (0xf < *(ulonglong *)(*param_2 + 0x998)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          *(int *)(param_1 + 0x684) = iVar4;
        }
      }
      else if (iVar4 == 0x63b) {
        iVar4 = iVar6;
        if (*(longlong *)(*param_3 + 0x198) != 0) {
          pcVar12 = (char *)(*param_2 + 0x660);
          if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x5c8) = iVar4;
        if (*(longlong *)(*param_3 + 0x1c0) != 0) {
          pcVar12 = (char *)(*param_2 + 0x700);
          if (0xf < *(ulonglong *)(*param_2 + 0x718)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar6 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x675) = iVar6 != 0;
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x288) != 0) {
          pcVar12 = (char *)(*param_2 + 0xa20);
          if (0xf < *(ulonglong *)(*param_2 + 0xa38)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x676) = iVar4 != 0;
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x290) != 0) {
          pcVar12 = (char *)(*param_2 + 0xa40);
          if (0xf < *(ulonglong *)(*param_2 + 0xa58)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x678) = iVar4;
        if (*(longlong *)(*param_3 + 0x630) != 0) {
          pcVar12 = (char *)(*param_2 + 0x18c0);
          if (0xf < *(ulonglong *)(*param_2 + 0x18d8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar7 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x67c) = iVar7;
        if (*(longlong *)(*param_3 + 0x2c8) == 0) {
          *(undefined1 *)(param_1 + 0x680) = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0xb20);
          if (0xf < *(ulonglong *)(*param_2 + 0xb38)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          *(bool *)(param_1 + 0x680) = iVar4 != 0;
        }
      }
      goto switchD_1404a9020_caseD_e;
    }
LAB_1404aa55a:
    if (*(longlong *)(*param_3 + 0x198) != 0) {
      pcVar12 = (char *)(*param_2 + 0x660);
      if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar6 = atoi(pcVar12);
    }
    *(int *)(param_1 + 0x5c8) = iVar6;
    if (*(longlong *)(*param_3 + 0x1c0) == 0) {
      *(undefined1 *)(param_1 + 0x675) = 0;
    }
    else {
      pcVar12 = (char *)(*param_2 + 0x700);
      if (0xf < *(ulonglong *)(*param_2 + 0x718)) {
        pcVar12 = *(char **)pcVar12;
      }
      iVar4 = atoi(pcVar12);
      *(bool *)(param_1 + 0x675) = iVar4 != 0;
    }
    goto switchD_1404a9020_caseD_e;
  }
  if (iVar4 == 0x5f0) {
    uVar23 = 0;
    uVar24 = 0;
    if (*(longlong *)(*param_3 + 0x50) == 0) {
      uVar20 = 0;
      uVar22 = 0;
    }
    else {
      pcVar12 = (char *)(*param_2 + 0x140);
      if (0xf < *(ulonglong *)(*param_2 + 0x158)) {
        pcVar12 = *(char **)pcVar12;
      }
      dVar1 = atof(pcVar12);
      uVar20 = SUB84(dVar1,0);
      uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    *(float *)(param_1 + 0x5bc) = (float)(double)CONCAT44(uVar22,uVar20);
    if (*(longlong *)(*param_3 + 600) == 0) {
      uVar20 = 0;
      uVar22 = 0;
    }
    else {
      pcVar12 = (char *)(*param_2 + 0x960);
      if (0xf < *(ulonglong *)(*param_2 + 0x978)) {
        pcVar12 = *(char **)pcVar12;
      }
      dVar1 = atof(pcVar12);
      uVar20 = SUB84(dVar1,0);
      uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    *(float *)(param_1 + 0x5d4) = (float)(double)CONCAT44(uVar22,uVar20);
    if (*(longlong *)(*param_3 + 0x2a0) != 0) {
      pcVar12 = (char *)(*param_2 + 0xa80);
      if (0xf < *(ulonglong *)(*param_2 + 0xa98)) {
        pcVar12 = *(char **)pcVar12;
      }
      dVar1 = atof(pcVar12);
      uVar23 = SUB84(dVar1,0);
      uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    *(float *)(param_1 + 0x5d8) = (float)(double)CONCAT44(uVar24,uVar23);
    goto switchD_1404a9020_caseD_e;
  }
  if (iVar4 < 0x2ea) {
    if (iVar4 != 0x2e9) {
      if (iVar4 < 0x70) {
        if (iVar4 != 0x6f) {
          switch(iVar4) {
          case 0xc:
          case 0xd:
          case 0x2f:
            break;
          default:
            goto switchD_1404a9020_caseD_e;
          case 0x1d:
          case 0x1e:
          case 0x69:
            goto switchD_1404a9020_caseD_1d;
          }
        }
      }
      else {
        if (iVar4 == 0x8e) {
LAB_1404aa263:
          if (*(longlong *)(*param_3 + 0x198) != 0) {
            pcVar12 = (char *)(*param_2 + 0x660);
            if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
              pcVar12 = *(char **)pcVar12;
            }
            iVar6 = atoi(pcVar12);
          }
          *(int *)(param_1 + 0x5c8) = iVar6;
          if (*(longlong *)(*param_3 + 0x60) == 0) {
            *(undefined4 *)(param_1 + 0x710) = 0;
          }
          else {
            pcVar12 = (char *)(*param_2 + 0x180);
            if (0xf < *(ulonglong *)(*param_2 + 0x198)) {
              pcVar12 = *(char **)pcVar12;
            }
            iVar4 = atoi(pcVar12);
            *(int *)(param_1 + 0x710) = iVar4;
          }
          goto switchD_1404a9020_caseD_e;
        }
        if (((iVar4 != 0x11e) && (iVar4 != 0x11f)) && (iVar4 != 0x294)) {
          if (iVar4 != 0x2e8) goto switchD_1404a9020_caseD_e;
          goto switchD_1404a9020_caseD_1d;
        }
      }
    }
  }
  else {
    if (iVar4 < 0x3f0) {
      uVar23 = 0;
      uVar24 = 0;
      if (iVar4 == 0x3ef) {
LAB_1404a937b:
        if (*(longlong *)(*param_3 + 0x198) != 0) {
          pcVar12 = (char *)(*param_2 + 0x660);
          if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar7 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x5c8) = iVar7;
        if (*(longlong *)(*param_3 + 0x50) == 0) {
          uVar20 = 0;
          uVar22 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x140);
          if (0xf < *(ulonglong *)(*param_2 + 0x158)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar20 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(float *)(param_1 + 0x5bc) = (float)(double)CONCAT44(uVar22,uVar20);
        if (*(longlong *)(*param_3 + 0x118) != 0) {
          pcVar12 = (char *)(*param_2 + 0x460);
          if (0xf < *(ulonglong *)(*param_2 + 0x478)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar23 = SUB84(dVar1,0);
          uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(float *)(param_1 + 0x5c0) = (float)(double)CONCAT44(uVar24,uVar23);
      }
      else {
        if ((iVar4 != 899) && (iVar4 != 900)) {
          if (iVar4 == 0x385) {
            lVar8 = *param_3;
            uVar20 = 0;
            uVar22 = 0;
            if (*(longlong *)(lVar8 + 0x2a8) == 0) {
              uVar18 = 0;
              uVar21 = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0xaa0);
              if (0xf < *(ulonglong *)(*param_2 + 0xab8)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar18 = SUB84(dVar1,0);
              uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
              lVar8 = *param_3;
            }
            fVar19 = (float)(double)CONCAT44(uVar21,uVar18);
            if ((float)(double)CONCAT44(uVar21,uVar18) <= 0.0) {
              fVar19 = DAT_140622e58;
            }
            iVar4 = iVar7;
            if (*(longlong *)(lVar8 + 0x198) != 0) {
              pcVar12 = (char *)(*param_2 + 0x660);
              if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x5c8) = iVar4;
            if (*(longlong *)(*param_3 + 0xe8) != 0) {
              pcVar12 = (char *)(*param_2 + 0x3a0);
              if (0xf < *(ulonglong *)(*param_2 + 0x3b8)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar23 = SUB84(dVar1,0);
              uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            if (*(longlong *)(*param_3 + 0xe0) == 0) {
              uVar18 = 0;
              uVar21 = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x380);
              if (0xf < *(ulonglong *)(*param_2 + 0x398)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar18 = SUB84(dVar1,0);
              uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            pCVar9 = (CCPoint *)
                     cocos2d::CCPoint::CCPoint
                               ((CCPoint *)local_d8,(float)(double)CONCAT44(uVar21,uVar18),
                                (float)(double)CONCAT44(uVar24,uVar23));
            cocos2d::CCPoint::operator=((CCPoint *)(param_1 + 0x5e0),pCVar9);
            if (*(longlong *)(*param_3 + 0x50) == 0) {
              uVar23 = 0;
              uVar24 = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x140);
              if (0xf < *(ulonglong *)(*param_2 + 0x158)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar23 = SUB84(dVar1,0);
              uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            *(float *)(param_1 + 0x5bc) = (float)(double)CONCAT44(uVar24,uVar23);
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0xf0) != 0) {
              pcVar12 = (char *)(*param_2 + 0x3c0);
              if (0xf < *(ulonglong *)(*param_2 + 0x3d8)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x5e8) = iVar4;
            *(float *)(param_1 + 0x5ec) = fVar19;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x1d0) != 0) {
              pcVar12 = (char *)(*param_2 + 0x740);
              if (0xf < *(ulonglong *)(*param_2 + 0x758)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x5f0) = iVar4 != 0;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x1d8) != 0) {
              pcVar12 = (char *)(*param_2 + 0x760);
              if (0xf < *(ulonglong *)(*param_2 + 0x778)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x5f1) = iVar4 != 0;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x468) != 0) {
              pcVar12 = (char *)(*param_2 + 0x11a0);
              if (0xf < *(ulonglong *)(*param_2 + 0x11b8)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x5f2) = iVar4 != 0;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x470) != 0) {
              pcVar12 = (char *)(*param_2 + 0x11c0);
              if (0xf < *(ulonglong *)(*param_2 + 0x11d8)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x5f3) = iVar4 != 0;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0xc48) != 0) {
              pcVar12 = (char *)(*param_2 + 0x3120);
              if (0xf < *(ulonglong *)(*param_2 + 0x3138)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x604) = iVar4 != 0;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0xc50) != 0) {
              pcVar12 = (char *)(*param_2 + 0x3140);
              if (0xf < *(ulonglong *)(*param_2 + 0x3158)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x605) = iVar4 != 0;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 800) != 0) {
              pcVar12 = (char *)(*param_2 + 0xc80);
              if (0xf < *(ulonglong *)(*param_2 + 0xc98)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x5f4) = iVar4 != 0;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x238) != 0) {
              pcVar12 = (char *)(*param_2 + 0x8e0);
              if (0xf < *(ulonglong *)(*param_2 + 0x8f8)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x5cc) = iVar4;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x328) != 0) {
              pcVar12 = (char *)(*param_2 + 0xca0);
              if (0xf < *(ulonglong *)(*param_2 + 0xcb8)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x5f8) = iVar4;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0xc58) != 0) {
              pcVar12 = (char *)(*param_2 + 0x3160);
              if (0xf < *(ulonglong *)(*param_2 + 0x3178)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x608) = iVar4;
            if (*(longlong *)(*param_3 + 0xc60) == 0) {
              uVar23 = 0;
              uVar24 = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x3180);
              if (0xf < *(ulonglong *)(*param_2 + 0x3198)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar23 = SUB84(dVar1,0);
              uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            *(float *)(param_1 + 0x60c) = (float)(double)CONCAT44(uVar24,uVar23);
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0xc68) != 0) {
              pcVar12 = (char *)(*param_2 + 0x31a0);
              if (0xf < *(ulonglong *)(*param_2 + 0x31b8)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x610) = iVar4 != 0;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x1100) != 0) {
              pcVar12 = (char *)(*param_2 + 0x4400);
              if (0xf < *(ulonglong *)(*param_2 + 0x4418)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x611) = iVar4 != 0;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x450) != 0) {
              pcVar12 = (char *)(*param_2 + 0x1140);
              if (0xf < *(ulonglong *)(*param_2 + 0x1158)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x6a4) = iVar4 != 0;
            if (*(longlong *)(*param_3 + 0x640) != 0) {
              pcVar12 = (char *)(*param_2 + 0x1900);
              if (0xf < *(ulonglong *)(*param_2 + 0x1918)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar7 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x6a5) = iVar7 != 0;
            if ((*(char *)(param_1 + 0x5f0) != '\0') || (*(char *)(param_1 + 0x5f2) != '\0')) {
              if (*(longlong *)(*param_3 + 0x478) == 0) {
                uVar23 = 0;
                uVar24 = 0;
              }
              else {
                pcVar12 = (char *)(*param_2 + 0x11e0);
                if (0xf < *(ulonglong *)(*param_2 + 0x11f8)) {
                  pcVar12 = *(char **)pcVar12;
                }
                dVar1 = atof(pcVar12);
                uVar23 = SUB84(dVar1,0);
                uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
              }
              if ((float)(double)CONCAT44(uVar24,uVar23) != 0.0) {
                *(float *)(param_1 + 0x5fc) = (float)(double)CONCAT44(uVar24,uVar23);
              }
            }
            if ((*(char *)(param_1 + 0x5f1) == '\0') && (*(char *)(param_1 + 0x5f3) == '\0'))
            goto switchD_1404a9020_caseD_e;
            if (*(longlong *)(*param_3 + 0x480) != 0) {
              pcVar12 = (char *)(*param_2 + 0x1200);
              if (0xf < *(ulonglong *)(*param_2 + 0x1218)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar20 = SUB84(dVar1,0);
              uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            fVar19 = (float)(double)CONCAT44(uVar22,uVar20);
            if (fVar19 == 0.0) goto switchD_1404a9020_caseD_e;
            goto LAB_1404ab6b6;
          }
          if (iVar4 != 0x393) {
            if (iVar4 != 0x3ee) goto switchD_1404a9020_caseD_e;
            iVar4 = iVar6;
            if (*(longlong *)(*param_3 + 0x198) != 0) {
              pcVar12 = (char *)(*param_2 + 0x660);
              if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x5c8) = iVar4;
            if (*(longlong *)(*param_3 + 0x168) == 0) {
              uVar20 = 0;
              uVar22 = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x5a0);
              if (0xf < *(ulonglong *)(*param_2 + 0x5b8)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar20 = SUB84(dVar1,0);
              uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            *(float *)(param_1 + 0x648) = (float)(double)CONCAT44(uVar22,uVar20);
            if (*(longlong *)(*param_3 + 0x170) == 0) {
              uVar20 = 0;
              uVar22 = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x5c0);
              if (0xf < *(ulonglong *)(*param_2 + 0x5d8)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar20 = SUB84(dVar1,0);
              uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            *(float *)(param_1 + 0x64c) = (float)(double)CONCAT44(uVar22,uVar20);
            if (*(longlong *)(*param_3 + 0x178) == 0) {
              uVar20 = 0;
              uVar22 = 0;
            }
            else {
              pcVar12 = (char *)(*param_2 + 0x5e0);
              if (0xf < *(ulonglong *)(*param_2 + 0x5f8)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar20 = SUB84(dVar1,0);
              uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            *(float *)(param_1 + 0x650) = (float)(double)CONCAT44(uVar22,uVar20);
            if (*(longlong *)(*param_3 + 0x180) != 0) {
              pcVar12 = (char *)(*param_2 + 0x600);
              if (0xf < *(ulonglong *)(*param_2 + 0x618)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar6 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x654) = iVar6;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x208) != 0) {
              pcVar12 = (char *)(*param_2 + 0x820);
              if (0xf < *(ulonglong *)(*param_2 + 0x838)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x671) = iVar4 != 0;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x210) != 0) {
              pcVar12 = (char *)(*param_2 + 0x840);
              if (0xf < *(ulonglong *)(*param_2 + 0x858)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x672) = iVar4 != 0;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x1a0) != 0) {
              pcVar12 = (char *)(*param_2 + 0x680);
              if (0xf < *(ulonglong *)(*param_2 + 0x698)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(int *)(param_1 + 0x658) = iVar4;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x2b0) != 0) {
              pcVar12 = (char *)(*param_2 + 0xac0);
              if (0xf < *(ulonglong *)(*param_2 + 0xad8)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x673) = iVar4 != 0;
            iVar4 = iVar7;
            if (*(longlong *)(*param_3 + 0x690) != 0) {
              pcVar12 = (char *)(*param_2 + 0x1a40);
              if (0xf < *(ulonglong *)(*param_2 + 0x1a58)) {
                pcVar12 = *(char **)pcVar12;
              }
              iVar4 = atoi(pcVar12);
            }
            *(bool *)(param_1 + 0x674) = iVar4 != 0;
            if (*(int *)(param_1 + 0x654) == 0) {
              if (*(longlong *)(*param_3 + 0x38) != 0) {
                pcVar12 = (char *)(*param_2 + 0xe0);
                if (0xf < *(ulonglong *)(*param_2 + 0xf8)) {
                  pcVar12 = *(char **)pcVar12;
                }
                iVar4 = atoi(pcVar12);
                uVar13 = (undefined1)iVar4;
              }
              uVar3 = 0;
              uVar15 = uVar3;
              if (*(longlong *)(*param_3 + 0x40) != 0) {
                pcVar12 = (char *)(*param_2 + 0x100);
                if (0xf < *(ulonglong *)(*param_2 + 0x118)) {
                  pcVar12 = *(char **)pcVar12;
                }
                iVar4 = atoi(pcVar12);
                uVar15 = (char)iVar4;
              }
              if (*(longlong *)(*param_3 + 0x48) != 0) {
                pcVar12 = (char *)(*param_2 + 0x120);
                if (0xf < *(ulonglong *)(*param_2 + 0x138)) {
                  pcVar12 = *(char **)pcVar12;
                }
                iVar4 = atoi(pcVar12);
                uVar3 = (undefined1)iVar4;
              }
              *(undefined1 *)(param_1 + 0x5b9) = uVar13;
              *(undefined1 *)(param_1 + 0x5ba) = uVar15;
              *(undefined1 *)(param_1 + 0x5bb) = uVar3;
            }
            else {
              if (*(longlong *)(*param_3 + 0x188) == 0) {
                uStack_b8 = 0;
                local_b0 = 0;
                local_a8 = 0xf;
                local_c0 = (void *)0x0;
                ppvVar10 = &local_c0;
                uVar14 = 4;
              }
              else {
                ppvVar10 = (void **)FUN_14003bdb0(local_a0,*param_2 + 0x620);
                uVar14 = 8;
              }
              local_d8[0] = uVar14;
              puVar11 = (undefined4 *)FUN_140065510(local_d0,ppvVar10);
              uVar20 = puVar11[1];
              uVar22 = puVar11[2];
              uVar18 = puVar11[3];
              *(undefined4 *)(param_1 + 0x65c) = *puVar11;
              *(undefined4 *)(param_1 + 0x660) = uVar20;
              *(undefined4 *)(param_1 + 0x664) = uVar22;
              *(undefined4 *)(param_1 + 0x668) = uVar18;
              if ((uVar14 & 8) != 0) {
                uVar14 = uVar14 & 0xfffffff7;
                FUN_14003a830(local_a0);
              }
              if ((uVar14 & 4) != 0) {
                FUN_14003a830(&local_c0);
              }
              if (*(longlong *)(*param_3 + 400) == 0) {
                *(undefined4 *)(param_1 + 0x66c) = 0;
              }
              else {
                pcVar12 = (char *)(*param_2 + 0x640);
                if (0xf < *(ulonglong *)(*param_2 + 0x658)) {
                  pcVar12 = *(char **)pcVar12;
                }
                iVar4 = atoi(pcVar12);
                *(int *)(param_1 + 0x66c) = iVar4;
              }
            }
            goto LAB_1404a937b;
          }
        }
switchD_1404a9020_caseD_1d:
        if (*(longlong *)(*param_3 + 0x38) != 0) {
          pcVar12 = (char *)(*param_2 + 0xe0);
          if (0xf < *(ulonglong *)(*param_2 + 0xf8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar5 = atoi(pcVar12);
        }
        if (*(longlong *)(*param_3 + 0x40) == 0) {
          uVar13 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x100);
          if (0xf < *(ulonglong *)(*param_2 + 0x118)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          uVar13 = (undefined1)iVar4;
        }
        if (*(longlong *)(*param_3 + 0x48) == 0) {
          uVar15 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x120);
          if (0xf < *(ulonglong *)(*param_2 + 0x138)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          uVar15 = (undefined1)iVar4;
        }
        uVar23 = 0;
        uVar24 = 0;
        if (*(longlong *)(*param_3 + 0x50) == 0) {
          uVar20 = 0;
          uVar22 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x140);
          if (0xf < *(ulonglong *)(*param_2 + 0x158)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar20 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(char *)(param_1 + 0x5b9) = (char)iVar5;
        *(undefined1 *)(param_1 + 0x5ba) = uVar13;
        *(undefined1 *)(param_1 + 0x5bb) = uVar15;
        *(float *)(param_1 + 0x5bc) = (float)(double)CONCAT44(uVar22,uVar20);
        if (*(longlong *)(*param_3 + 0x70) == 0) {
          iVar4 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x1c0);
          if (0xf < *(ulonglong *)(*param_2 + 0x1d8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x5dc) = iVar4 != 0;
        iVar5 = 0;
        iVar4 = iVar5;
        if (*(longlong *)(*param_3 + 0x78) != 0) {
          pcVar12 = (char *)(*param_2 + 0x1e0);
          if (0xf < *(ulonglong *)(*param_2 + 0x1f8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x5dd) = iVar4 != 0;
        iVar4 = iVar5;
        if (*(longlong *)(*param_3 + 0x80) != 0) {
          pcVar12 = (char *)(*param_2 + 0x200);
          if (0xf < *(ulonglong *)(*param_2 + 0x218)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x5de) = iVar4 != 0;
        iVar4 = iVar5;
        if (*(longlong *)(*param_3 + 0x88) != 0) {
          pcVar12 = (char *)(*param_2 + 0x220);
          if (0xf < *(ulonglong *)(*param_2 + 0x238)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x5df) = iVar4 != 0;
        iVar4 = iVar5;
        if (*(longlong *)(*param_3 + 0x1e0) != 0) {
          pcVar12 = (char *)(*param_2 + 0x780);
          if (0xf < *(ulonglong *)(*param_2 + 0x798)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x670) = iVar4 != 0;
        if (*(longlong *)(*param_3 + 0xb8) != 0) {
          pcVar12 = (char *)(*param_2 + 0x2e0);
          if (0xf < *(ulonglong *)(*param_2 + 0x2f8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          if (1 < iVar4) {
            *(int *)(param_1 + 0x408) = iVar4;
          }
        }
        fVar19 = DAT_140622c24;
        if (*(longlong *)(*param_3 + 0x120) != 0) {
          pcVar12 = (char *)(*param_2 + 0x480);
          if (0xf < *(ulonglong *)(*param_2 + 0x498)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          fVar19 = DAT_140622c24;
          if (0 < iVar4) {
            if (*(longlong *)(*param_3 + 0x118) != 0) {
              pcVar12 = (char *)(*param_2 + 0x460);
              if (0xf < *(ulonglong *)(*param_2 + 0x478)) {
                pcVar12 = *(char **)pcVar12;
              }
              dVar1 = atof(pcVar12);
              uVar23 = SUB84(dVar1,0);
              uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            fVar19 = (float)(double)CONCAT44(uVar24,uVar23);
          }
        }
        *(float *)(param_1 + 0x5c0) = fVar19;
        if (*(longlong *)(*param_3 + 0x188) == 0) {
          uStack_b8 = 0;
          local_b0 = 0;
          local_a8 = 0xf;
          local_c0 = (void *)0x0;
          ppvVar10 = &local_c0;
          uVar14 = 1;
        }
        else {
          ppvVar10 = (void **)FUN_14003bdb0(local_a0,*param_2 + 0x620);
          uVar14 = 2;
        }
        local_d8[0] = uVar14;
        puVar11 = (undefined4 *)FUN_140065510(local_d0,ppvVar10);
        uVar23 = puVar11[1];
        uVar24 = puVar11[2];
        uVar20 = puVar11[3];
        *(undefined4 *)(param_1 + 0x65c) = *puVar11;
        *(undefined4 *)(param_1 + 0x660) = uVar23;
        *(undefined4 *)(param_1 + 0x664) = uVar24;
        *(undefined4 *)(param_1 + 0x668) = uVar20;
        if ((uVar14 & 2) != 0) {
          uVar14 = uVar14 & 0xfffffffd;
          FUN_14003a830(local_a0);
        }
        if (((uVar14 & 1) != 0) && (0xf < local_a8)) {
          _Memory = local_c0;
          if ((0xfff < local_a8 + 1) &&
             (_Memory = *(void **)((longlong)local_c0 + -8),
             0x1f < (ulonglong)((longlong)local_c0 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
        iVar4 = iVar5;
        if (*(longlong *)(*param_3 + 400) != 0) {
          pcVar12 = (char *)(*param_2 + 0x640);
          if (0xf < *(ulonglong *)(*param_2 + 0x658)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x66c) = iVar4;
        if (*(longlong *)(*param_3 + 0x690) != 0) {
          pcVar12 = (char *)(*param_2 + 0x1a40);
          if (0xf < *(ulonglong *)(*param_2 + 0x1a58)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar5 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x674) = iVar5 != 0;
        iVar4 = *(int *)(param_1 + 0x40c);
        if (((iVar4 == 0x1d) || (iVar4 == 0x1e)) || ((iVar4 == 0x69 || (iVar4 == 900)))) {
          *(undefined1 *)(param_1 + 0x5df) = 0;
          *(undefined4 *)(param_1 + 0x5c0) = 0x3f800000;
        }
      }
      goto switchD_1404a9020_caseD_e;
    }
    if (iVar4 == 0x419) goto LAB_1404aa55a;
    if (iVar4 == 0x531) goto LAB_1404aa263;
    if (iVar4 != 0x533) {
      if (iVar4 == 0x542) {
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x198) != 0) {
          pcVar12 = (char *)(*param_2 + 0x660);
          if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x5c8) = iVar4;
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x238) != 0) {
          pcVar12 = (char *)(*param_2 + 0x8e0);
          if (0xf < *(ulonglong *)(*param_2 + 0x8f8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x5cc) = iVar4;
        uVar23 = 0;
        uVar24 = 0;
        if (*(longlong *)(*param_3 + 0x50) == 0) {
          uVar20 = 0;
          uVar22 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x140);
          if (0xf < *(ulonglong *)(*param_2 + 0x158)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar20 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(float *)(param_1 + 0x5bc) = (float)(double)CONCAT44(uVar22,uVar20);
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0xf0) != 0) {
          pcVar12 = (char *)(*param_2 + 0x3c0);
          if (0xf < *(ulonglong *)(*param_2 + 0x3d8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x5e8) = iVar4;
        if (*(longlong *)(*param_3 + 0x2a8) == 0) {
          uVar20 = 0;
          uVar22 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0xaa0);
          if (0xf < *(ulonglong *)(*param_2 + 0xab8)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar20 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        fVar19 = (float)(double)CONCAT44(uVar22,uVar20);
        if ((float)(double)CONCAT44(uVar22,uVar20) <= 0.0) {
          fVar19 = DAT_140622e58;
        }
        *(float *)(param_1 + 0x5ec) = fVar19;
        if (*(longlong *)(*param_3 + 0x220) == 0) {
          uVar20 = 0;
          uVar22 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x880);
          if (0xf < *(ulonglong *)(*param_2 + 0x898)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar20 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(float *)(param_1 + 0x618) = (float)(double)CONCAT44(uVar22,uVar20);
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x228) != 0) {
          pcVar12 = (char *)(*param_2 + 0x8a0);
          if (0xf < *(ulonglong *)(*param_2 + 0x8b8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x61c) = iVar4;
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x230) != 0) {
          pcVar12 = (char *)(*param_2 + 0x8c0);
          if (0xf < *(ulonglong *)(*param_2 + 0x8d8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x620) = iVar4 != 0;
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x450) != 0) {
          pcVar12 = (char *)(*param_2 + 0x1140);
          if (0xf < *(ulonglong *)(*param_2 + 0x1158)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x6a4) = iVar4 != 0;
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x640) != 0) {
          pcVar12 = (char *)(*param_2 + 0x1900);
          if (0xf < *(ulonglong *)(*param_2 + 0x1918)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x6a5) = iVar4 != 0;
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 800) != 0) {
          pcVar12 = (char *)(*param_2 + 0xc80);
          if (0xf < *(ulonglong *)(*param_2 + 0xc98)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x5f4) = iVar4 != 0;
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0xc50) != 0) {
          pcVar12 = (char *)(*param_2 + 0x3140);
          if (0xf < *(ulonglong *)(*param_2 + 0x3158)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x605) = iVar4 != 0;
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0xc68) != 0) {
          pcVar12 = (char *)(*param_2 + 0x31a0);
          if (0xf < *(ulonglong *)(*param_2 + 0x31b8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        *(bool *)(param_1 + 0x610) = iVar4 != 0;
        if (*(longlong *)(*param_3 + 0xc88) != 0) {
          pcVar12 = (char *)(*param_2 + 0x3220);
          if (0xf < *(ulonglong *)(*param_2 + 0x3238)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar7 = atoi(pcVar12);
        }
        *(int *)(param_1 + 0x624) = iVar7;
        if (*(longlong *)(*param_3 + 0xc90) != 0) {
          pcVar12 = (char *)(*param_2 + 0x3240);
          if (0xf < *(ulonglong *)(*param_2 + 0x3258)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar23 = SUB84(dVar1,0);
          uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(float *)(param_1 + 0x628) = (float)(double)CONCAT44(uVar24,uVar23);
        if (*(longlong *)(*param_3 + 0xc98) == 0) {
          *(undefined4 *)(param_1 + 0x62c) = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x3260);
          if (0xf < *(ulonglong *)(*param_2 + 0x3278)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
          *(int *)(param_1 + 0x62c) = iVar4;
        }
      }
      else if (iVar4 == 0x543) {
        iVar4 = iVar7;
        if (*(longlong *)(*param_3 + 0x198) != 0) {
          pcVar12 = (char *)(*param_2 + 0x660);
          if (0xf < *(ulonglong *)(*param_2 + 0x678)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar4 = atoi(pcVar12);
        }
        if (*(longlong *)(*param_3 + 0x238) != 0) {
          pcVar12 = (char *)(*param_2 + 0x8e0);
          if (0xf < *(ulonglong *)(*param_2 + 0x8f8)) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar7 = atoi(pcVar12);
        }
        uVar23 = 0;
        uVar24 = 0;
        if (*(longlong *)(*param_3 + 0x50) == 0) {
          uVar20 = 0;
          uVar22 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x140);
          if (0xf < *(ulonglong *)(*param_2 + 0x158)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar20 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        if (*(longlong *)(*param_3 + 0x240) == 0) {
          uVar18 = 0;
          uVar21 = 0;
        }
        else {
          pcVar12 = (char *)(*param_2 + 0x900);
          if (0xf < *(ulonglong *)(*param_2 + 0x918)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar18 = SUB84(dVar1,0);
          uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        if (*(longlong *)(*param_3 + 0x248) != 0) {
          pcVar12 = (char *)(*param_2 + 0x920);
          if (0xf < *(ulonglong *)(*param_2 + 0x938)) {
            pcVar12 = *(char **)pcVar12;
          }
          dVar1 = atof(pcVar12);
          uVar23 = SUB84(dVar1,0);
          uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        *(int *)(param_1 + 0x5c8) = iVar4;
        *(int *)(param_1 + 0x5cc) = iVar7;
        *(float *)(param_1 + 0x5bc) = (float)(double)CONCAT44(uVar22,uVar20);
        *(float *)(param_1 + 0x630) = (float)(double)CONCAT44(uVar21,uVar18);
        *(float *)(param_1 + 0x634) = (float)(double)CONCAT44(uVar24,uVar23);
      }
      goto switchD_1404a9020_caseD_e;
    }
  }
switchD_1404a9020_caseD_c:
  iVar4 = iVar7;
  if (*(longlong *)(*param_3 + 0x378) != 0) {
    pcVar12 = (char *)(*param_2 + 0xde0);
    if (0xf < *(ulonglong *)(*param_2 + 0xdf8)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar4 = atoi(pcVar12);
  }
  *(bool *)(param_1 + 0x6e4) = iVar4 != 0;
  if (*(longlong *)(*param_3 + 0x380) != 0) {
    pcVar12 = (char *)(*param_2 + 0xe00);
    if (0xf < *(ulonglong *)(*param_2 + 0xe18)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar7 = atoi(pcVar12);
  }
  *(bool *)(param_1 + 0x6e5) = iVar7 != 0;
  uVar23 = 0;
  uVar24 = 0;
  if (*(longlong *)(*param_3 + 0x388) == 0) {
    uVar20 = 0;
    uVar22 = 0;
  }
  else {
    pcVar12 = (char *)(*param_2 + 0xe20);
    if (0xf < *(ulonglong *)(*param_2 + 0xe38)) {
      pcVar12 = *(char **)pcVar12;
    }
    dVar1 = atof(pcVar12);
    uVar20 = SUB84(dVar1,0);
    uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  *(float *)(param_1 + 0x6e8) = (float)(double)CONCAT44(uVar22,uVar20);
  if (*(longlong *)(*param_3 + 0x390) != 0) {
    pcVar12 = (char *)(*param_2 + 0xe40);
    if (0xf < *(ulonglong *)(*param_2 + 0xe58)) {
      pcVar12 = *(char **)pcVar12;
    }
    dVar1 = atof(pcVar12);
    uVar23 = SUB84(dVar1,0);
    uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  *(float *)(param_1 + 0x6ec) = (float)(double)CONCAT44(uVar24,uVar23);
  if (*(longlong *)(*param_3 + 0xb90) == 0) {
    *(undefined1 *)(param_1 + 0x6f0) = 0;
  }
  else {
    pcVar12 = (char *)(*param_2 + 0x2e40);
    if (0xf < *(ulonglong *)(*param_2 + 0x2e58)) {
      pcVar12 = *(char **)pcVar12;
    }
    iVar4 = atoi(pcVar12);
    *(bool *)(param_1 + 0x6f0) = iVar4 != 0;
  }
switchD_1404a9020_caseD_e:
  if (*(float *)(param_1 + 0x5ec) <= 0.0) {
    *(undefined4 *)(param_1 + 0x5ec) = 0x40000000;
  }
  iVar4 = *(int *)(param_1 + 0x5c8);
  if (iVar4 < 9999) {
    if (iVar4 < 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 9999;
  }
  *(int *)(param_1 + 0x5c8) = iVar4;
  iVar4 = *(int *)(param_1 + 0x5cc);
  if (iVar4 < 9999) {
    if (iVar4 < 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 9999;
  }
  *(int *)(param_1 + 0x5cc) = iVar4;
  return;
}

