
void FUN_1404bc180(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  char cVar5;
  longlong *plVar6;
  uint3 uVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 **ppuVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  CCArray *pCVar24;
  CCObject *pCVar25;
  CCPoint *pCVar26;
  undefined1 *puVar27;
  longlong *plVar28;
  ulonglong uVar29;
  byte bVar30;
  longlong lVar31;
  undefined4 uVar32;
  CCPoint CVar33;
  int iVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  ulonglong uVar38;
  bool bVar39;
  char cVar40;
  bool bVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined8 uStackX_8;
  longlong *plStackX_10;
  undefined8 in_stack_fffffffffffffe88;
  undefined8 in_stack_fffffffffffffe90;
  undefined8 in_stack_fffffffffffffe98;
  undefined8 in_stack_fffffffffffffea0;
  undefined4 uVar45;
  undefined8 in_stack_fffffffffffffea8;
  CCPoint aCStack_110 [8];
  undefined1 *puStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  undefined1 auStack_e8 [8];
  undefined4 auStack_e0 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong *plStack_c0;
  undefined1 auStack_b8 [24];
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined1 auStack_90 [88];
  
  uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffffe90 >> 0x20);
  uVar45 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
  if (*(int *)((longlong)param_1 + 0x40c) == 0x813) {
    FUN_14021f4c0(param_2,param_1);
    return;
  }
  uVar36 = 0;
  plStackX_10 = param_2;
  if ((int)param_1[0x74] == 0x1e) {
    if ((char)param_1[0xd5] != '\0') {
      iVar34 = (int)param_1[0xd4];
      lVar17 = param_2[0x12a];
      if (*(char *)((longlong)param_1 + 0x6a7) == '\0') {
        if (iVar34 < 0) {
          iVar34 = 0;
        }
        if (9999 < iVar34) {
          iVar34 = 9999;
        }
        uStackX_8 = (undefined1 *)CONCAT44(uStackX_8._4_4_,iVar34);
        plVar15 = (longlong *)FUN_140060b20(lVar17 + 0x330,&puStack_108,&uStackX_8);
        iVar34 = *(int *)(*plVar15 + 0x14) + 1;
      }
      else {
        if (iVar34 < 0) {
          iVar34 = 0;
        }
        if (9999 < iVar34) {
          iVar34 = 9999;
        }
        uStackX_8 = (undefined1 *)CONCAT44(uStackX_8._4_4_,iVar34);
        plVar15 = (longlong *)FUN_140060b20(lVar17 + 0x330,&puStack_108,&uStackX_8);
        iVar34 = *(int *)(*plVar15 + 0x14) + -1;
      }
      FUN_1402624b0(lVar17,(ulonglong)uStackX_8 & 0xffffffff,iVar34);
      uVar36 = (ulonglong)*(uint *)(param_1 + 0xd4);
      uVar12 = FUN_1402623f0(param_2[0x12a],uVar36);
      FUN_140233ec0(param_2,uVar36 & 0xffffffff,uVar12);
    }
    uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
    if (*(char *)((longlong)param_1 + 0x6a9) != '\0') {
      bVar39 = param_4 == 0;
      if (bVar39) {
        puStack_108 = (undefined1 *)0x0;
        uStack_100 = 0;
        lStack_f8 = 0;
        ppuVar16 = &puStack_108;
      }
      else {
        ppuVar16 = (undefined1 **)FUN_14024b270(&uStack_d8,param_4);
      }
      (**(code **)param_2[0x33])
                (param_2 + 0x33,(int)param_1[0xb9],*(undefined1 *)((longlong)param_1 + 0x675),
                 ppuVar16,CONCAT44(uVar12,*(undefined4 *)((longlong)param_1 + 0x39c)),
                 CONCAT44(uVar42,(int)param_1[0xd3]));
      if ((bVar39) && (puStack_108 != (undefined1 *)0x0)) {
        puVar27 = puStack_108;
        if ((0xfff < (ulonglong)((lStack_f8 - (longlong)puStack_108 >> 2) * 4)) &&
           (puVar27 = *(undefined1 **)(puStack_108 + -8),
           (undefined1 *)0x1f < puStack_108 + (-8 - (longlong)puVar27))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(puVar27);
        puStack_108 = (undefined1 *)0x0;
        uStack_100 = 0;
        lStack_f8 = 0;
      }
      if (!bVar39) {
        FUN_14005e430(&uStack_d8);
      }
    }
    lVar17 = param_1[0xd6];
    if ((int)lVar17 != 0) {
      *(undefined1 *)(param_2 + 0x10d) = 1;
      *(int *)((longlong)param_2 + 0x864) = *(int *)((longlong)param_2 + 0x864) + (int)lVar17;
      return;
    }
    return;
  }
  iVar34 = *(int *)((longlong)param_1 + 0x40c);
  uVar7 = (uint3)((uint)iVar34 >> 8);
  if (0x2e8 < iVar34) {
    if (0xb53 < iVar34) {
      if (0xe12 < iVar34) {
        switch(iVar34) {
        case 0xe13:
          FUN_140241e50(param_2,param_1);
          return;
        default:
          return;
        case 0xe15:
          FUN_140241940(param_2,param_1);
          return;
        case 0xe16:
          uVar13 = *(uint *)((longlong)param_1 + 0x5fc);
          if (DAT_140623508 < (float)(*(uint *)((longlong)param_1 + 0x5fc) & DAT_1406243c0)) {
            uVar13 = DAT_140622a10;
          }
          uVar37 = *(uint *)(param_1 + 0xc0);
          if (DAT_140623508 < (float)(*(uint *)(param_1 + 0xc0) & DAT_1406243c0)) {
            uVar37 = DAT_140622a10;
          }
          *(uint *)((longlong)param_2 + 0x314) = uVar13;
          *(uint *)(param_2 + 99) = uVar37;
          return;
        case 0xe18:
          iVar34 = rand();
          fVar11 = DAT_140623644;
          fVar10 = DAT_140622c24;
          uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
          fVar44 = (((float)iVar34 / DAT_140623644 + (float)iVar34 / DAT_140623644) - DAT_140622c24)
                   * *(float *)(param_1 + 0xeb) + *(float *)((longlong)param_1 + 0x754);
          iVar34 = rand();
          fVar2 = *(float *)(param_1 + 0xec);
          fVar3 = *(float *)((longlong)param_1 + 0x75c);
          pCVar26 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
          cocos2d::CCPoint::CCPoint((CCPoint *)&uStackX_8,pCVar26);
          if ((0 < *(int *)((longlong)param_1 + 0x5cc)) &&
             (plVar15 = (longlong *)FUN_140224590(param_2), plVar15 != (longlong *)0x0)) {
            pCVar26 = (CCPoint *)(**(code **)(*plVar15 + 200))(plVar15);
            cocos2d::CCPoint::operator=((CCPoint *)&uStackX_8,pCVar26);
            if ((char)param_1[0xea] != '\0') {
              fVar43 = (float)(**(code **)(*plVar15 + 0x158))(plVar15);
              fVar44 = fVar44 + fVar43;
            }
          }
          iVar14 = rand();
          uStackX_8._0_4_ =
               (float)uStackX_8 +
               (((float)iVar14 / fVar11 + (float)iVar14 / fVar11) - fVar10) *
               *(float *)(param_1 + 0xe9) + *(float *)(param_1 + 0xe8);
          iVar14 = rand();
          uStackX_8 = (undefined1 *)
                      CONCAT44(uStackX_8._4_4_ +
                               (((float)iVar14 / fVar11 + (float)iVar14 / fVar11) - fVar10) *
                               *(float *)((longlong)param_1 + 0x74c) +
                               *(float *)((longlong)param_1 + 0x744),(float)uStackX_8);
          lVar17 = param_1[0xb9];
          uVar19 = cocos2d::CCPoint::CCPoint((CCPoint *)&puStack_108,(CCPoint *)&uStackX_8);
          FUN_14023feb0(param_2,(int)lVar17,uVar19,fVar44,
                        CONCAT44(uVar42,(((float)iVar34 / fVar11 + (float)iVar34 / fVar11) - fVar10)
                                        * fVar2 + fVar3));
          return;
        case 0xe19:
          goto switchD_1404a79fd_caseD_e19;
        case 0xe1c:
          uVar13 = *(uint *)((longlong)param_1 + 0x5fc);
          if (DAT_140623508 < (float)(*(uint *)((longlong)param_1 + 0x5fc) & DAT_1406243c0)) {
            uVar13 = DAT_140622aa0;
          }
          uVar37 = *(uint *)(param_1 + 0xc0);
          if (DAT_140623508 < (float)(*(uint *)(param_1 + 0xc0) & DAT_1406243c0)) {
            uVar37 = DAT_140622b08;
          }
          *(uint *)((longlong)param_2 + 0x31c) = uVar13;
          *(uint *)(param_2 + 100) = uVar37;
          return;
        case 0xe22:
          pCVar24 = (CCArray *)FUN_140224280(param_2,(int)param_1[0xb9]);
          if (pCVar24 == (CCArray *)0x0) {
            return;
          }
          uVar13 = cocos2d::CCArray::count(pCVar24);
          if (uVar13 == 0) {
            return;
          }
          uVar13 = **(uint **)(pCVar24 + 0x38);
          if (uVar13 == 0) {
            return;
          }
          plVar28 = *(longlong **)(*(uint **)(pCVar24 + 0x38) + 4);
          plVar15 = plVar28 + ((ulonglong)uVar13 - 1);
          do {
            if (plVar15 < plVar28) {
              return;
            }
            plVar6 = (longlong *)*plVar28;
            if (plVar6 == (longlong *)0x0) {
              return;
            }
            if (*(int *)((longlong)plVar6 + 0x40c) == 0x80f) {
              FUN_1402620e0(param_2[0x12a],*(undefined4 *)((longlong)plVar6 + 0x39c),
                            *(undefined4 *)(param_2[0x1b4] + 0x39c));
              uVar42 = *(undefined4 *)(param_2[0x1b5] + 0x39c);
LAB_1404a7f5e:
              FUN_1402620e0(param_2[0x12a],*(undefined4 *)((longlong)plVar6 + 0x39c),uVar42);
              (**(code **)(*plVar6 + 0x540))(plVar6);
            }
            else {
              iVar34 = (**(code **)(*plVar6 + 0x660))(plVar6);
              if ((iVar34 == 0x1e) ||
                 (iVar34 = (**(code **)(*plVar6 + 0x660))(plVar6), iVar34 == 0x15)) {
                uVar42 = 0;
                goto LAB_1404a7f5e;
              }
            }
            plVar28 = plVar28 + 1;
          } while( true );
        case 0xe38:
          bVar39 = param_4 == 0;
          if (bVar39) {
            puStack_108 = (undefined1 *)0x0;
            uStack_100 = 0;
            lStack_f8 = 0;
            ppuVar16 = &puStack_108;
          }
          else {
            ppuVar16 = (undefined1 **)FUN_14024b270(auStack_90,param_4);
          }
          (**(code **)(param_2[0x33] + 8))
                    (param_2 + 0x33,(int)param_1[0xb9],0,0,ppuVar16,
                     *(undefined4 *)((longlong)param_1 + 0x39c),(int)param_1[0xd3]);
          if ((bVar39) && (puStack_108 != (undefined1 *)0x0)) {
            puVar27 = puStack_108;
            if ((0xfff < (ulonglong)((lStack_f8 - (longlong)puStack_108 >> 2) * 4)) &&
               (puVar27 = *(undefined1 **)(puStack_108 + -8),
               (undefined1 *)0x1f < puStack_108 + (-8 - (longlong)puVar27))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(puVar27);
            puStack_108 = (undefined1 *)0x0;
            uStack_100 = 0;
            lStack_f8 = 0;
          }
          if (!bVar39) {
            FUN_14005e430(auStack_90);
          }
          uStackX_8 = (undefined1 *)
                      CONCAT44(uStackX_8._4_4_,*(undefined4 *)((longlong)param_1 + 0x39c));
          plVar15 = (longlong *)FUN_1402505b0(param_2 + 0xa9,&puStack_108,&uStackX_8);
          *(longlong **)(*plVar15 + 0x18) = param_1;
          return;
        case 0xe4c:
        case 0xe4d:
          FUN_14022eac0(param_2,param_1);
          return;
        }
      }
      if (iVar34 == 0xe12) {
        FUN_140241c50(param_2,param_1);
        return;
      }
      switch(iVar34) {
      case 0xb54:
        (**(code **)(*param_2 + 0x4e0))(param_2,param_1);
        return;
      case 0xb55:
        if ((int)param_1[0xbf] != 2) {
          lVar17 = param_1[0xbe];
          *(int *)((longlong)param_2 + 0x2a4) = (int)*(float *)(param_1 + 0xbc);
          *(char *)(param_2 + 0x55) = (char)lVar17;
        }
        if ((int)param_1[0xbf] != 1) {
          uVar4 = *(undefined1 *)((longlong)param_1 + 0x5f1);
          *(int *)((longlong)param_2 + 0x2ac) = (int)*(float *)((longlong)param_1 + 0x5e4);
          *(undefined1 *)(param_2 + 0x56) = uVar4;
          return;
        }
        return;
      default:
        return;
      case 0xb57:
        FUN_14021f750(param_2,param_1);
        return;
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
        FUN_140221030(param_2,param_1);
        return;
      case 2999:
        FUN_1402360b0(param_2,&IMAGE_DOS_HEADER_140000000,*(undefined4 *)((longlong)param_1 + 0x5bc)
                      ,(int)param_1[0xbd],*(undefined4 *)((longlong)param_1 + 0x5ec),
                      *(undefined4 *)((longlong)param_1 + 0x39c),(int)param_1[0xd3]);
        return;
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
        FUN_1402271c0(param_2,param_1);
        return;
      case 0xbc8:
        goto switchD_1404a73e5_caseD_bc8;
      case 0xbc9:
      case 0xbca:
      case 0xbcb:
      case 0xbcc:
      case 0xbcd:
        goto switchD_1404a6182_caseD_16;
      case 0xbce:
        FUN_14020fdb0(param_2,param_1,0);
        return;
      case 0xbcf:
        if (((int)param_1[0xe8] == 1) || ((int)param_1[0xe8] == 0)) {
          FUN_14020e760(param_2,param_1,CONCAT71((uint7)uVar7,1));
        }
        if (((int)param_1[0xe8] != 2) && ((int)param_1[0xe8] != 0)) {
          return;
        }
        FUN_14020e760(param_2,param_1,0);
        return;
      case 0xbd0:
        iVar34 = (int)param_1[0xb9];
        puStack_108 = (undefined1 *)CONCAT44(puStack_108._4_4_,iVar34);
        uStackX_8 = (undefined1 *)((ulonglong)(uint)uStackX_8._4_4_ << 0x20);
        uVar29 = uVar36;
        do {
          iVar14 = (int)uVar29;
          if (iVar14 == 0) {
            lVar17 = 0x658;
LAB_1404a78a5:
            plVar15 = (longlong *)((longlong)param_2 + lVar17);
            if (plVar15 != (longlong *)0x0) {
              lVar17 = plVar15[1];
              lVar18 = *plVar15;
              lVar31 = lVar17 - lVar18 >> 0x3f;
              uVar29 = uVar36;
              uVar38 = uVar36;
              if ((lVar17 - lVar18) / 0xe8 + lVar31 != lVar31) {
                do {
                  if (*(int *)(*(longlong *)(uVar38 + 0xa0 + lVar18) + 0x7d8) == iVar34) {
                    lVar18 = (longlong)(int)uVar29 * 0xe8 + lVar18;
                    lVar31 = lVar18 + 0xe8;
                    if (lVar31 != lVar17) {
                      lVar18 = lVar18 - lVar31;
                      do {
                        FUN_140250c90(lVar31 + lVar18,lVar31);
                        lVar31 = lVar31 + 0xe8;
                      } while (lVar31 != lVar17);
                    }
                    lVar17 = plVar15[1];
                    FUN_14005e430(lVar17 + -0x20);
                    FUN_1402508a0(lVar17 + -0xe8,lVar17 + -0xe8);
                    lVar17 = plVar15[1] + -0xe8;
                    plVar15[1] = lVar17;
                    param_2 = plStackX_10;
                    iVar34 = (int)puStack_108;
                    if (0 < (int)puStack_108) break;
                  }
                  else {
                    uVar29 = (ulonglong)((int)uVar29 + 1);
                    uVar38 = uVar38 + 0xe8;
                  }
                  lVar18 = *plVar15;
                  param_2 = plStackX_10;
                } while ((ulonglong)(longlong)(int)uVar29 < (ulonglong)((lVar17 - lVar18) / 0xe8));
              }
            }
          }
          else {
            if (iVar14 == 1) {
              lVar17 = 0x670;
              goto LAB_1404a78a5;
            }
            if (iVar14 == 2) {
              lVar17 = 0x688;
              goto LAB_1404a78a5;
            }
            if (iVar14 == 3) {
              lVar17 = 0x6a0;
              goto LAB_1404a78a5;
            }
            if (iVar14 == 4) {
              lVar17 = 0x6b8;
              goto LAB_1404a78a5;
            }
          }
          uVar13 = (int)(float)uStackX_8 + 1;
          uVar29 = (ulonglong)uVar13;
          uStackX_8 = (undefined1 *)CONCAT44(uStackX_8._4_4_,uVar13);
          if (4 < (int)uVar13) {
            return;
          }
        } while( true );
      case 0xbd9:
        if (param_4 == 0) {
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          puVar23 = &uStack_d8;
          bVar30 = 0x80;
        }
        else {
          puVar23 = (undefined8 *)FUN_14024b270(auStack_b8,param_4);
          bVar30 = 0x40;
        }
        FUN_140217bc0(param_2,param_1,puVar23);
        if ((char)bVar30 < '\0') {
          bVar30 = bVar30 & 0x7f;
          FUN_14005e430(&uStack_d8);
        }
        if ((bVar30 & 0x40) != 0) {
          FUN_14005e430(auStack_b8);
          return;
        }
        return;
      }
    }
    if (iVar34 == 0xb53) {
      FUN_140223d50(param_2,param_1);
      return;
    }
    if (0x64c < iVar34) {
      if (0x714 < iVar34) {
        switch(iVar34) {
        case 0x716:
          FUN_14025cbf0(param_2[0x12a],&IMAGE_DOS_HEADER_140000000,
                        *(undefined4 *)((longlong)param_1 + 0x63c),(int)param_1[200],
                        *(undefined4 *)((longlong)param_1 + 0x644),
                        *(undefined4 *)((longlong)param_1 + 0x5bc),(int)param_1[0xb9],
                        CONCAT44(uVar32,*(undefined4 *)((longlong)param_1 + 0x39c)),
                        (int)param_1[0xd3]);
          return;
        case 0x717:
          if (*(char *)((longlong)param_1 + 0x6a6) != '\0') {
            bVar39 = param_4 == 0;
            if (bVar39) {
              puStack_108 = (undefined1 *)0x0;
              uStack_100 = 0;
              lStack_f8 = 0;
              ppuVar16 = &puStack_108;
            }
            else {
              ppuVar16 = (undefined1 **)FUN_14024b270(auStack_b8,param_4);
            }
            FUN_14025c430(param_2[0x12a],(int)param_1[0xb9],10000,0x2711,
                          *(undefined1 *)((longlong)param_1 + 0x693),
                          *(undefined1 *)((longlong)param_1 + 0x675),ppuVar16,
                          *(undefined4 *)((longlong)param_1 + 0x39c),(int)param_1[0xd3]);
            if ((bVar39) && (puStack_108 != (undefined1 *)0x0)) {
              puVar27 = puStack_108;
              if ((0xfff < (ulonglong)((lStack_f8 - (longlong)puStack_108 >> 2) * 4)) &&
                 (puVar27 = *(undefined1 **)(puStack_108 + -8),
                 (undefined1 *)0x1f < puStack_108 + (-8 - (longlong)puVar27))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(puVar27);
            }
            if (!bVar39) {
              FUN_14005e430(auStack_b8);
              return;
            }
            return;
          }
          if (*(char *)((longlong)param_1 + 0x6a4) == '\0') {
            uVar42 = 0x2711;
            if (*(char *)((longlong)param_1 + 0x6a5) == '\0') {
              uVar42 = (undefined4)param_1[0xd4];
            }
          }
          else {
            uVar42 = 10000;
          }
          if (param_4 == 0) {
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            puVar23 = &uStack_d8;
          }
          else {
            puVar23 = (undefined8 *)FUN_14024b270(auStack_b8,param_4);
          }
          uVar20 = CONCAT44(uVar45,(int)param_1[0xd3]);
          uVar19 = CONCAT44(uVar32,*(undefined4 *)((longlong)param_1 + 0x39c));
          FUN_14025c430(param_2[0x12a],(int)param_1[0xb9],uVar42,
                        *(undefined4 *)((longlong)param_1 + 0x694),
                        *(undefined1 *)((longlong)param_1 + 0x693),
                        *(undefined1 *)((longlong)param_1 + 0x675),puVar23,uVar19,uVar20);
          uVar42 = (undefined4)((ulonglong)uVar19 >> 0x20);
          uVar12 = (undefined4)((ulonglong)uVar20 >> 0x20);
          if (param_4 == 0) {
            FUN_14005e430(&uStack_d8);
          }
          else {
            FUN_14005e430(auStack_b8);
          }
          if (*(char *)((longlong)param_1 + 0x6a4) != '\0') {
            if (*(char *)((longlong)param_1 + 0x6a5) == '\0') {
              return;
            }
            bVar39 = param_4 == 0;
            if (bVar39) {
              puStack_108 = (undefined1 *)0x0;
              uStack_100 = 0;
              lStack_f8 = 0;
              ppuVar16 = &puStack_108;
            }
            else {
              ppuVar16 = (undefined1 **)FUN_14024b270(auStack_b8,param_4);
            }
            FUN_14025c430(param_2[0x12a],(int)param_1[0xb9],0x2711,
                          *(undefined4 *)((longlong)param_1 + 0x694),
                          *(undefined1 *)((longlong)param_1 + 0x693),
                          *(undefined1 *)((longlong)param_1 + 0x675),ppuVar16,
                          CONCAT44(uVar42,*(undefined4 *)((longlong)param_1 + 0x39c)),
                          CONCAT44(uVar12,(int)param_1[0xd3]));
            if ((bVar39) && (puStack_108 != (undefined1 *)0x0)) {
              puVar27 = puStack_108;
              if ((0xfff < (ulonglong)((lStack_f8 - (longlong)puStack_108 >> 2) * 4)) &&
                 (puVar27 = *(undefined1 **)(puStack_108 + -8),
                 (undefined1 *)0x1f < puStack_108 + (-8 - (longlong)puVar27))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(puVar27);
            }
            if (!bVar39) {
              FUN_14005e430(auStack_b8);
              return;
            }
            return;
          }
          return;
        default:
          return;
        case 0x71a:
          if (*(char *)((longlong)param_1 + 0x28d) != '\0') {
            return;
          }
          if (DAT_1406c2ed8 == (longlong *)0x0) {
            uStackX_8 = (undefined1 *)FUN_1404d0770(0x668);
            DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uStackX_8);
            (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
          }
          lVar17 = DAT_1406c2ed8[0x41];
          *(undefined1 *)(lVar17 + 0x39ed) = 0;
          if (*(char *)(lVar17 + 0x39ec) != '\0') {
            cocos2d::CCParticleSystem::resumeSystem(*(CCParticleSystem **)(lVar17 + 0x3240));
            return;
          }
          return;
        case 0x71b:
          if (*(char *)((longlong)param_1 + 0x28d) == '\0') {
            if (DAT_1406c2ed8 == (longlong *)0x0) {
              uStackX_8 = (undefined1 *)FUN_1404d0770(0x668);
              DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uStackX_8);
              (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
            }
            lVar17 = DAT_1406c2ed8[0x41];
            *(undefined1 *)(lVar17 + 0x39ed) = 1;
            cocos2d::CCParticleSystem::stopSystem(*(CCParticleSystem **)(lVar17 + 0x3240));
            return;
          }
          return;
        case 0x778:
          DAT_1406c2e90 = DAT_1406c2e90 * 0x343fd + 0x269ec3;
          if (*(float *)((longlong)param_1 + 0x5bc) <
              ((float)((uint)((ulonglong)DAT_1406c2e90 >> 0x10) & 0x7fff) / DAT_140623644) *
              DAT_1406232bc) {
            uVar42 = *(undefined4 *)((longlong)param_1 + 0x5cc);
          }
          else {
            uVar42 = (undefined4)param_1[0xb9];
          }
          if (param_4 == 0) {
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            puVar23 = &uStack_d8;
          }
          else {
            puVar23 = (undefined8 *)FUN_14024b270(auStack_b8,param_4);
          }
          (**(code **)(param_2[0x33] + 8))
                    (param_2 + 0x33,uVar42,0,DAT_1406236b0,puVar23,
                     *(undefined4 *)((longlong)param_1 + 0x39c),(int)param_1[0xd3]);
          if (param_4 == 0) {
            FUN_14005e430(&uStack_d8);
            return;
          }
          FUN_14005e430(auStack_b8);
          return;
        case 0x779:
          FUN_140235cf0(param_2,&IMAGE_DOS_HEADER_140000000,
                        *(undefined4 *)((longlong)param_1 + 0x5bc),(int)param_1[0xbd],
                        *(undefined4 *)((longlong)param_1 + 0x5ec),
                        *(undefined4 *)((longlong)param_1 + 0x39c),(int)param_1[0xd3]);
          return;
        case 0x77b:
          goto switchD_1404a6182_caseD_16;
        case 0x77d:
          (**(code **)(*param_2 + 0x4d8))(param_2,param_1);
          return;
        case 0x78b:
          (**(code **)(*param_2 + 0x450))
                    (param_2,(int)param_1[0xb9],*(undefined1 *)((longlong)param_1 + 0x6f1),
                     *(undefined1 *)((longlong)param_1 + 0x5f1));
          return;
        case 0x78c:
          FUN_1402174e0(param_2,param_1);
          return;
        case 0x78e:
          FUN_1402415c0(param_2,param_1);
          return;
        case 0x78f:
          *(undefined4 *)((longlong)param_2 + 0x334) = *(undefined4 *)((longlong)param_1 + 0x6f4);
          return;
        case 0x812:
          if (*(char *)((longlong)param_1 + 0x6a6) == '\0') {
            if (*(char *)((longlong)param_1 + 0x6a5) == '\0') {
              *(int *)(param_2[0x1b4] + 0xb84) = (int)param_1[0xdb];
            }
            if (*(char *)((longlong)param_1 + 0x6a4) == '\0') {
              *(int *)(param_2[0x1b5] + 0xb84) = (int)param_1[0xdb];
              return;
            }
            return;
          }
          if (param_3 == 1) {
            *(int *)(param_2[0x1b4] + 0xb84) = (int)param_1[0xdb];
            return;
          }
          if (param_3 == 2) {
            *(int *)(param_2[0x1b5] + 0xb84) = (int)param_1[0xdb];
            return;
          }
          return;
        }
      }
      if (iVar34 == 0x714) {
        if (*(char *)((longlong)param_1 + 0x28d) != '\0') {
          return;
        }
        if (param_4 == 0) {
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          puVar23 = &uStack_d8;
        }
        else {
          puVar23 = (undefined8 *)FUN_14024b270(auStack_b8,param_4);
        }
        lVar17 = param_1[0xd3];
        puStack_108 = (undefined1 *)CONCAT44(puStack_108._4_4_,(int)lVar17);
        uVar42 = *(undefined4 *)((longlong)param_1 + 0x39c);
        aCStack_110[0] = *(CCPoint *)((longlong)param_1 + 0x675);
        uStackX_8 = (undefined1 *)CONCAT71(uStackX_8._1_7_,aCStack_110[0]);
        lVar18 = param_1[0xb9];
        plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,(int)lVar18);
        auStack_e0[0] = uVar42;
        CVar33 = aCStack_110[0];
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          uStack_98 = FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uStack_98);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
          CVar33 = uStackX_8._0_1_;
        }
        lVar31 = *(longlong *)(DAT_1406c2ed8[0x41] + 0x950);
        puVar27 = *(undefined1 **)(lVar31 + 0x268);
        if (puVar27 == *(undefined1 **)(lVar31 + 0x270)) {
          FUN_14026c550(lVar31 + 0x260,puVar27,&plStack_c0,aCStack_110,puVar23,auStack_e0,
                        &puStack_108);
        }
        else {
          *puVar27 = 0;
          *(undefined8 *)(puVar27 + 0x18) = 0;
          *(undefined8 *)(puVar27 + 0x20) = 0;
          *(undefined8 *)(puVar27 + 0x28) = 0;
          *(int *)(puVar27 + 4) = (int)lVar18;
          *(CCPoint *)(puVar27 + 8) = CVar33;
          *(undefined4 *)(puVar27 + 0xc) = uVar42;
          *(int *)(puVar27 + 0x10) = (int)lVar17;
          uStackX_8 = puVar27;
          FUN_1400846d0(puVar27 + 0x18,puVar23);
          *(longlong *)(lVar31 + 0x268) = *(longlong *)(lVar31 + 0x268) + 0x30;
        }
        if (param_4 == 0) {
          FUN_14005e430(&uStack_d8);
          return;
        }
        FUN_14005e430(auStack_b8);
        return;
      }
      if (iVar34 != 0x64d) {
        return;
      }
      FUN_14038b440(param_2[0x1b4],1);
      if (*(char *)((longlong)param_2 + 0x422) != '\0') {
        FUN_14038b440(param_2[0x1b5],1);
        return;
      }
      return;
    }
    if (iVar34 == 0x64c) {
      FUN_14038b440(param_2[0x1b4],0);
      if (*(char *)((longlong)param_2 + 0x422) != '\0') {
        FUN_14038b440(param_2[0x1b5],0);
        return;
      }
      return;
    }
    if (iVar34 < 0x532) {
      if (iVar34 != 0x531) {
        switch(iVar34) {
        case 899:
        case 900:
        case 0x393:
          goto switchD_1404a6182_caseD_1d;
        case 0x385:
          FUN_14021ea40(param_2,param_1);
          return;
        default:
          return;
        case 0x3ee:
          puStack_108 = *(undefined1 **)((longlong)param_1 + 0x65c);
          uStack_100 = *(undefined8 *)((longlong)param_1 + 0x664);
          uStackX_8 = (undefined1 *)
                      CONCAT53(uStackX_8._3_5_,*(undefined3 *)((longlong)param_1 + 0x5b9));
          FUN_140260c40(param_2[0x12a],(int)param_1[0xb9],CONCAT31(uVar7,(int)param_1[0xcb] == 1),
                        (int)param_1[0xc9],*(undefined4 *)((longlong)param_1 + 0x64c),
                        (int)param_1[0xca],2 - (uint)(*(int *)((longlong)param_1 + 0x654) != 0),
                        &uStackX_8,&puStack_108,*(undefined4 *)((longlong)param_1 + 0x66c),
                        *(undefined1 *)((longlong)param_1 + 0x671),
                        *(undefined1 *)((longlong)param_1 + 0x672),
                        *(undefined1 *)((longlong)param_1 + 0x673),
                        *(undefined1 *)((longlong)param_1 + 0x674),
                        *(undefined4 *)((longlong)param_1 + 0x39c),(int)param_1[0xd3],0);
          return;
        case 0x3ef:
          FUN_140260a70(param_2[0x12a],(int)param_1[0xb9],*(undefined4 *)((longlong)param_1 + 0x5bc)
                        ,(int)param_1[0xb8],*(undefined4 *)((longlong)param_1 + 0x39c),
                        (int)param_1[0xd3]);
          return;
        case 0x419:
          FUN_140223bc0(param_2,(int)param_1[0xb9],*(undefined1 *)((longlong)param_1 + 0x675));
          return;
        }
      }
      goto switchD_1404a6182_caseD_8e;
    }
    if (0x5f0 < iVar34) {
      if (iVar34 == 0x631) {
        uVar42 = *(undefined4 *)((longlong)param_1 + 0x684);
        if ((int)param_1[0xb9] < 1) {
          return;
        }
        pCVar24 = (CCArray *)FUN_140224280(param_2);
        uVar13 = cocos2d::CCArray::count(pCVar24);
        if (uVar13 != 0) {
          do {
            pCVar25 = cocos2d::CCArray::objectAtIndex(pCVar24,(uint)uVar36);
            if (*(int *)(pCVar25 + 0x4e8) == 2) {
              FUN_1404a5200(pCVar25,uVar42);
            }
            else {
              (**(code **)(*(longlong *)pCVar25 + 0x548))(pCVar25);
            }
            uVar37 = (uint)uVar36 + 1;
            uVar36 = (ulonglong)uVar37;
            uVar13 = cocos2d::CCArray::count(pCVar24);
          } while (uVar37 < uVar13);
          return;
        }
        return;
      }
      if (iVar34 != 0x63b) {
        return;
      }
      if (param_4 == 0) {
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        puVar23 = &uStack_d8;
      }
      else {
        puVar23 = (undefined8 *)FUN_14024b270(auStack_b8,param_4);
      }
      auStack_a0[0] = (undefined4)param_1[0xd3];
      uVar42 = *(undefined4 *)((longlong)param_1 + 0x39c);
      uStack_98 = CONCAT44(uStack_98._4_4_,uVar42);
      auStack_e8[0] = (undefined1)param_1[0xd0];
      uVar12 = *(undefined4 *)((longlong)param_1 + 0x67c);
      plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,uVar12);
      auStack_e0[0] = (undefined4)param_1[0xcf];
      aCStack_110[0] = *(CCPoint *)((longlong)param_1 + 0x676);
      uStackX_8 = (undefined1 *)CONCAT71(uStackX_8._1_7_,aCStack_110[0]);
      lVar18 = param_1[0xb9];
      puStack_108 = (undefined1 *)CONCAT44(puStack_108._4_4_,(int)lVar18);
      lVar17 = param_2[0x12a];
      puVar27 = *(undefined1 **)(lVar17 + 0x1f8);
      if (puVar27 == *(undefined1 **)(lVar17 + 0x200)) {
        FUN_14026c2b0(lVar17 + 0x1f0,puVar27,&puStack_108,aCStack_110,auStack_e0,&plStack_c0,
                      auStack_e8,puVar23,&uStack_98,auStack_a0);
      }
      else {
        *puVar27 = 0;
        *(undefined8 *)(puVar27 + 0x20) = 0;
        *(undefined8 *)(puVar27 + 0x28) = 0;
        *(undefined8 *)(puVar27 + 0x30) = 0;
        *(int *)(puVar27 + 4) = (int)lVar18;
        *(CCPoint *)(puVar27 + 8) = aCStack_110[0];
        *(undefined4 *)(puVar27 + 0xc) = auStack_e0[0];
        *(undefined4 *)(puVar27 + 0x10) = uVar12;
        puVar27[0x1c] = auStack_e8[0];
        *(undefined4 *)(puVar27 + 0x14) = uVar42;
        *(undefined4 *)(puVar27 + 0x18) = auStack_a0[0];
        puStack_108 = puVar27;
        FUN_1400846d0(puVar27 + 0x20,puVar23);
        *(longlong *)(lVar17 + 0x1f8) = *(longlong *)(lVar17 + 0x1f8) + 0x38;
      }
      if (param_4 == 0) {
        FUN_14005e430(&uStack_d8);
        return;
      }
      FUN_14005e430(auStack_b8);
      return;
    }
    if (iVar34 == 0x5f0) {
      if (*(float *)((longlong)param_1 + 0x5bc) <= 0.0) {
        return;
      }
      if (0.0 < *(float *)((longlong)param_1 + 0x5d4)) {
        FUN_14023bc50(param_2,param_2,0x5f0,(int)param_1[0xbb]);
        return;
      }
      return;
    }
    if (iVar34 == 0x536) goto switchD_1404a6182_caseD_c8;
    if (iVar34 != 0x542) {
      if (iVar34 == 0x543) {
        FUN_14025cae0(param_2[0x12a],param_2,*(undefined4 *)((longlong)param_1 + 0x634),
                      *(undefined4 *)((longlong)param_1 + 0x5bc),(int)param_1[0xb9],
                      *(undefined4 *)((longlong)param_1 + 0x5cc),
                      *(undefined4 *)((longlong)param_1 + 0x39c),CONCAT44(uVar32,(int)param_1[0xd3])
                     );
        return;
      }
      return;
    }
    if ((((char)param_1[0xc2] != '\0') && (*(float *)((longlong)param_1 + 0x5bc) != 0.0)) &&
       ((*(char *)((longlong)param_1 + 0x5f4) != '\0' ||
        (*(char *)((longlong)param_1 + 0x605) != '\0')))) {
      FUN_14021f2a0(param_2,param_1);
      return;
    }
    if ((*(char *)((longlong)param_1 + 0x5f4) == '\0') &&
       (*(char *)((longlong)param_1 + 0x605) == '\0')) goto LAB_1404a682b;
    iVar34 = *(int *)((longlong)param_1 + 0x5cc);
    if (iVar34 == 0) {
      iVar34 = (int)param_1[0xb9];
    }
    lVar17 = FUN_140224590(param_2,iVar34);
    uStackX_8 = (undefined1 *)FUN_140224590(param_2,(int)param_1[0xb9]);
    if (*(char *)((longlong)param_1 + 0x6a4) == '\0') {
      if (*(char *)((longlong)param_1 + 0x6a5) == '\0') {
        lVar18 = FUN_140224590(param_2,*(undefined4 *)((longlong)param_1 + 0x624));
      }
      else {
        if (*(char *)((longlong)param_2 + 0x422) == '\0') goto LAB_1404a67a4;
        lVar18 = param_2[0x1b5];
      }
    }
    else {
LAB_1404a67a4:
      lVar18 = param_2[0x1b4];
    }
    if (((lVar17 != 0) && (lVar18 != 0)) && (uStackX_8 != (undefined1 *)0x0)) {
      uVar19 = FUN_140224590(param_2,*(undefined4 *)((longlong)param_1 + 0x74c));
      uVar20 = FUN_140224590(param_2,(int)param_1[0xe9]);
      uVar21 = FUN_140224590(param_2,*(undefined4 *)((longlong)param_1 + 0x744));
      uVar22 = FUN_140224590(param_2,(int)param_1[0xe8]);
      FUN_14021efb0(param_1,lVar17,uStackX_8,lVar18,uVar22,uVar21,uVar20,uVar19);
    }
LAB_1404a682b:
    FUN_14025c9b0(param_2[0x12a]);
    return;
  }
  if (iVar34 == 0x2e8) {
switchD_1404a6182_caseD_1d:
    uVar36 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe88 >> 8),
                      *(undefined1 *)((longlong)param_1 + 0x5df));
    (**(code **)(*param_2 + 0x448))
              (param_2,(longlong)param_1 + 0x5b9,*(undefined4 *)((longlong)param_1 + 0x5bc),
               (int)param_1[0x81],uVar36,(int)param_1[0xb8],(longlong)param_1 + 0x65c,
               CONCAT44(uVar32,*(undefined4 *)((longlong)param_1 + 0x66c)),(char)param_1[0xce],
               param_1,*(undefined4 *)((longlong)param_1 + 0x39c),(int)param_1[0xd3]);
    if ((*(int *)((longlong)param_1 + 0x40c) == 0x1d) &&
       (*(char *)((longlong)param_1 + 0x5dc) != '\0')) {
      (**(code **)(*param_2 + 0x448))
                (param_2,(longlong)param_1 + 0x5b9,*(undefined4 *)((longlong)param_1 + 0x5bc),0x3e9,
                 uVar36 & 0xffffffffffffff00,DAT_140622c24,(longlong)param_1 + 0x65c,
                 *(undefined4 *)((longlong)param_1 + 0x66c),(char)param_1[0xce],param_1,
                 *(undefined4 *)((longlong)param_1 + 0x39c),(int)param_1[0xd3]);
    }
  }
  else {
    switch(iVar34) {
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
switchD_1404a6182_caseD_16:
      iVar14 = -2;
      iVar34 = *(int *)((longlong)param_1 + 0x40c);
      if (iVar34 < 0x77c) {
        if (iVar34 == 0x77b) {
          iVar14 = -0xe;
        }
        else {
          switch(iVar34) {
          case 0x17:
            iVar14 = -6;
            break;
          case 0x18:
            iVar14 = -5;
            break;
          case 0x19:
            iVar14 = -7;
            break;
          case 0x1a:
            iVar14 = -8;
            break;
          case 0x1b:
            iVar14 = -3;
            break;
          case 0x1c:
            iVar14 = -4;
            break;
          case 0x37:
            iVar14 = -0xb;
            break;
          case 0x38:
            iVar14 = -10;
            break;
          case 0x39:
            iVar14 = -9;
            break;
          case 0x3a:
            iVar14 = -0xc;
            break;
          case 0x3b:
            iVar14 = -0xd;
          }
        }
      }
      else if ((((iVar34 == 0xbc9) || (iVar34 == 0xbca)) || (iVar34 == 0xbcb)) ||
              ((iVar34 == 0xbcc || (iVar34 == 0xbcd)))) {
        iVar14 = -0xf;
      }
      if (((int)param_1[0xe8] == 1) || ((int)param_1[0xe8] == 0)) {
        *(int *)(param_2[0xc5] + (longlong)(int)param_1[0x100] * 4) = iVar14;
        if (iVar14 == -0xf) {
          FUN_14020e400(param_2,param_1,CONCAT71((uint7)uVar7,1));
        }
        else {
          uStackX_8 = (undefined1 *)CONCAT44(uStackX_8._4_4_,*(uint *)(param_1 + 0x100));
          if (*(uint *)(param_1 + 0x100) < 0x65) {
            FUN_14024a470(param_2 + 0xb5,&uStackX_8);
          }
        }
      }
      if (((int)param_1[0xe8] != 2) && ((int)param_1[0xe8] != 0)) {
        return;
      }
      *(int *)(param_2[200] + (longlong)(int)param_1[0x100] * 4) = iVar14;
      if (iVar14 == -0xf) {
        FUN_14020e400(param_2,param_1,0);
        return;
      }
      uStackX_8 = (undefined1 *)CONCAT44(uStackX_8._4_4_,*(uint *)(param_1 + 0x100));
      if (100 < *(uint *)(param_1 + 0x100)) {
        return;
      }
      FUN_14024a470(param_2 + 0xbd,&uStackX_8);
      return;
    case 0x1d:
    case 0x1e:
    case 0x69:
      goto switchD_1404a6182_caseD_1d;
    case 0x20:
      if (*(char *)((longlong)param_1 + 0x28d) == '\0') {
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          uStackX_8 = (undefined1 *)FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uStackX_8);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
        }
        lVar17 = DAT_1406c2ed8[0x41];
        FUN_14039ee30(*(undefined8 *)(lVar17 + 0xda0),1);
        if (*(char *)(lVar17 + 0x422) != '\0') {
          FUN_14039ee30(*(undefined8 *)(lVar17 + 0xda8),1);
        }
      }
      break;
    case 0x21:
      if (*(char *)((longlong)param_1 + 0x28d) == '\0') {
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          uStackX_8 = (undefined1 *)FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uStackX_8);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
        }
        lVar17 = DAT_1406c2ed8[0x41];
        FUN_14039ee30(*(undefined8 *)(lVar17 + 0xda0),0);
        if (*(char *)(lVar17 + 0x422) != '\0') {
          FUN_14039ee30(*(undefined8 *)(lVar17 + 0xda8),0);
        }
      }
      break;
    case 0x8e:
switchD_1404a6182_caseD_8e:
      if (0 < (int)param_1[0xb9]) {
        bVar39 = param_4 == 0;
        if (bVar39) {
          puStack_108 = (undefined1 *)0x0;
          uStack_100 = 0;
          lStack_f8 = 0;
          ppuVar16 = &puStack_108;
        }
        else {
          ppuVar16 = (undefined1 **)FUN_14024b270(&uStack_d8,param_4);
        }
        (**(code **)(param_2[0x33] + 8))
                  (param_2 + 0x33,(int)param_1[0xb9],0,0,ppuVar16,
                   *(undefined4 *)((longlong)param_1 + 0x39c),(int)param_1[0xd3]);
        if ((bVar39) && (puStack_108 != (undefined1 *)0x0)) {
          puVar27 = puStack_108;
          if ((0xfff < (ulonglong)((lStack_f8 - (longlong)puStack_108 >> 2) * 4)) &&
             (puVar27 = *(undefined1 **)(puStack_108 + -8),
             (undefined1 *)0x1f < puStack_108 + (-8 - (longlong)puVar27))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(puVar27);
          puStack_108 = (undefined1 *)0x0;
          uStack_100 = 0;
          lStack_f8 = 0;
        }
        if (!bVar39) {
          FUN_14005e430(&uStack_d8);
        }
      }
      break;
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
switchD_1404a6182_caseD_c8:
      uVar42 = DAT_140622b74;
      if (((iVar34 != 200) && (uVar42 = DAT_140622c54, iVar34 != 0xca)) &&
         ((uVar42 = DAT_140622ca8, iVar34 != 0xcb && (uVar42 = DAT_140622bd8, iVar34 == 0x536)))) {
        uVar42 = DAT_140622d24;
      }
      uVar4 = *(undefined1 *)((longlong)param_1 + 0x41c);
      *(undefined4 *)(param_2 + 0x9d) = uVar42;
      *(undefined1 *)((longlong)param_2 + 0x4ec) = uVar4;
      FUN_1401993b0(param_1);
      (**(code **)(*param_2 + 0x438))(param_2,param_1);
    }
  }
  return;
switchD_1404a79fd_caseD_e19:
  if (*(char *)((longlong)param_1 + 0x6a6) == '\0') {
    cVar5 = *(char *)((longlong)param_1 + 0x6a4);
    if (cVar5 == '\0') {
      uVar32 = 0x2711;
      if (*(char *)((longlong)param_1 + 0x6a5) == '\0') {
        uVar32 = (undefined4)param_1[0xd4];
      }
    }
    else {
      uVar32 = 10000;
    }
    lVar17 = 0x6a5;
    cVar40 = FUN_140219090(param_2,uVar32,*(undefined4 *)((longlong)param_1 + 0x694));
    if (((cVar40 == '\0') && (cVar5 != '\0')) && (*(char *)(lVar17 + (longlong)param_1) != '\0')) {
      cVar40 = FUN_140219090(param_2,0x2711,*(undefined4 *)((longlong)param_1 + 0x694));
    }
  }
  else {
    lVar17 = param_2[0x12a];
    uVar35 = *(ulonglong *)(lVar17 + 0x2d0) & 0x9ed7c49c29d3da32;
    uVar29 = *(ulonglong *)(*(longlong *)(lVar17 + 0x2b8) + 8 + uVar35 * 0x10);
    uVar38 = uVar36;
    if ((uVar29 == *(ulonglong *)(lVar17 + 0x2a8)) ||
       (uVar38 = uVar29, *(int *)(uVar29 + 0x10) == 0x68ec5a0)) {
LAB_1404a7c0e:
      cVar40 = uVar38 != 0;
    }
    else {
      do {
        uVar38 = uVar36;
        if (uVar29 == *(ulonglong *)(*(longlong *)(lVar17 + 0x2b8) + uVar35 * 0x10))
        goto LAB_1404a7c0e;
        uVar29 = *(ulonglong *)(uVar29 + 8);
      } while (*(int *)(uVar29 + 0x10) != 0x68ec5a0);
      cVar40 = uVar29 != 0;
    }
  }
  if (*(char *)((longlong)param_1 + 0x716) == '\0') {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    puVar23 = &uStack_d8;
    bVar9 = false;
    bVar41 = false;
    bVar8 = false;
    bVar39 = true;
  }
  else {
    bVar41 = param_4 == 0;
    if (bVar41) {
      puStack_108 = (undefined1 *)0x0;
      uStack_100 = 0;
      lStack_f8 = 0;
      ppuVar16 = &puStack_108;
    }
    else {
      ppuVar16 = (undefined1 **)FUN_14024b270(auStack_90,param_4);
    }
    bVar9 = !bVar41;
    puVar23 = (undefined8 *)FUN_14024b270(auStack_b8,ppuVar16);
    bVar8 = true;
    bVar39 = false;
  }
  if (cVar40 == '\0') {
    uVar32 = *(undefined4 *)((longlong)param_1 + 0x5cc);
  }
  else {
    uVar32 = (undefined4)param_1[0xb9];
  }
  (**(code **)(param_2[0x33] + 8))
            (param_2 + 0x33,uVar32,0,0,puVar23,
             CONCAT44(uVar42,*(undefined4 *)((longlong)param_1 + 0x39c)),
             CONCAT44(uVar12,(int)param_1[0xd3]));
  if (bVar39) {
    FUN_14005e430(&uStack_d8);
  }
  if (bVar8) {
    FUN_14005e430(auStack_b8);
  }
  if (bVar41) {
    FUN_14005e430(&puStack_108);
  }
  if (bVar9) {
    FUN_14005e430(auStack_90);
    return;
  }
  return;
switchD_1404a73e5_caseD_bc8:
  iVar34 = *(int *)((longlong)param_1 + 0x5cc);
  if (*(char *)((longlong)param_1 + 0x6a4) == '\0') {
    if (*(char *)((longlong)param_1 + 0x6a5) == '\0') {
      if (*(char *)((longlong)param_1 + 0x6a6) != '\0') {
        iVar34 = -3;
      }
    }
    else {
      iVar34 = -2;
    }
  }
  else {
    iVar34 = -1;
  }
  uStackX_8 = (undefined1 *)CONCAT44(uStackX_8._4_4_,iVar34);
  bVar39 = false;
  plVar15 = (longlong *)param_2[0xe4];
  plVar28 = (longlong *)param_2[0xe3];
  if (plVar28 != plVar15) {
    do {
      if (((((longlong *)*plVar28 == param_1) && ((int)plVar28[1] == (int)param_1[0xb9])) &&
          (*(int *)((longlong)plVar28 + 0xc) == iVar34)) && ((int)plVar28[2] == (int)param_1[0xd3]))
      {
        *(undefined2 *)((longlong)plVar28 + 0x1c) = 0;
        *(int *)((longlong)param_2 + 0x3fc) = *(int *)((longlong)param_2 + 0x3fc) + 1;
        *(undefined4 *)(plVar28 + 3) = *(undefined4 *)((longlong)param_2 + 0x3fc);
        bVar39 = true;
      }
      plVar28 = plVar28 + 4;
    } while (plVar28 != plVar15);
    if (bVar39) goto LAB_1404a7531;
  }
  lVar17 = param_1[0xd3];
  puStack_108 = (undefined1 *)CONCAT44(puStack_108._4_4_,(int)lVar17);
  piVar1 = (int *)((longlong)param_2 + 0x3fc);
  iVar14 = *piVar1;
  *piVar1 = iVar14 + 1;
  auStack_e0[0] = 0;
  puVar23 = (undefined8 *)param_2[0xe4];
  if (puVar23 != (undefined8 *)param_2[0xe5]) {
    lVar18 = param_1[0xb9];
    *puVar23 = param_1;
    *(int *)(puVar23 + 1) = (int)lVar18;
    *(int *)((longlong)puVar23 + 0xc) = iVar34;
    *(int *)(puVar23 + 2) = (int)lVar17;
    *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
    *(int *)(puVar23 + 3) = iVar14 + 1;
    *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
    param_2[0xe4] = param_2[0xe4] + 0x20;
    *(undefined1 *)(param_2 + 0xe2) = 1;
    return;
  }
  plStack_c0 = param_1;
  FUN_140251cb0(param_2 + 0xe3,puVar23,&plStack_c0,param_1 + 0xb9,&uStackX_8,auStack_e0,piVar1,
                &puStack_108);
LAB_1404a7531:
  *(undefined1 *)(param_2 + 0xe2) = 1;
  return;
}

