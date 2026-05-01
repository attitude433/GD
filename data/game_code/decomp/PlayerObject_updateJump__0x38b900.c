// Function: FUN_14038b900
// Original target: PlayerObject_updateJump @ 0x38b900
// Ghidra entry: 14038b900
// Signature: undefined FUN_14038b900(void)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14038b900(CCNode *param_1,float param_2)

{
  CCNode CVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  CCCallFunc *pCVar5;
  CCDelayTime *pCVar6;
  CCSequence *pCVar7;
  CCNode CVar8;
  undefined8 uVar9;
  uint uVar10;
  CCNode CVar11;
  int iVar12;
  undefined4 uVar13;
  CCNode CVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_108 [32];
  char local_e8 [8];
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8 [2];
  ushort local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1406ba040 ^ (ulonglong)auStack_108;
  CVar14 = param_1[0xb01];
  CVar11 = param_1[0xb00];
  if ((CVar14 != (CCNode)0x0) && (CVar11 != (CCNode)0x0)) {
    if (param_1[0xb02] == (CCNode)0x0) {
      CVar14 = (CCNode)0x0;
    }
    else {
      CVar11 = (CCNode)0x0;
    }
  }
  if (((param_1[0xb70] != (CCNode)0x0) && (param_1[0x9b0] != (CCNode)0x0)) &&
     ((fVar17 = (float)((uint)(*(float *)(param_1 + 0x698) * DAT_140623200) & DAT_1406243c0),
      DAT_14062326c <= fVar17 ||
      ((DAT_1406231b0 <= fVar17 && (*(char *)(*(longlong *)(param_1 + 0x678) + 0x519) != '\0'))))))
  {
    param_1[0x9c1] = (CCNode)0x0;
  }
  uVar10 = -(uint)(param_1[0x9c1] != (CCNode)0x0) & 0xd5;
  *(uint *)(param_1 + 0x998) = uVar10;
  iVar3 = rand();
  iVar12 = (int)(((float)iVar3 / DAT_140623644) * DAT_14062350c);
  *(int *)(param_1 + 0x994) = iVar12;
  iVar3 = iVar12 + uVar10;
  *(int *)(param_1 + 0x990) = iVar3;
  uVar10 = DAT_1406243f0;
  fVar17 = DAT_140623068;
  fVar24 = DAT_140622c24;
  fVar21 = DAT_140622ba4;
  CVar8 = param_1[0x985];
  if (param_1[0x9bd] != (CCNode)0x0) {
    if ((param_1[0x986] == (CCNode)0x0) || (CVar8 == (CCNode)0x0)) {
      CVar8 = (CCNode)0x0;
    }
    else {
      CVar8 = (CCNode)0x1;
    }
  }
  if (((((param_1[0x9bb] != (CCNode)0x0) || (param_1[0x9b9] != (CCNode)0x0)) ||
       (param_1[0x9ba] != (CCNode)0x0)) ||
      ((param_1[0x9bc] != (CCNode)0x0 || (param_1[0x9c4] != (CCNode)0x0)))) ||
     (fVar22 = (float)*(double *)(param_1 + 0x7c8), param_1[0x9be] != (CCNode)0x0)) {
    fVar22 = DAT_140622bf8;
  }
  fVar26 = fVar22;
  if (*(float *)(param_1 + 0xb84) != DAT_140622c24) {
    fVar26 = fVar22 * *(float *)(param_1 + 0xb84);
  }
  fVar25 = DAT_140622c24;
  if (*(float *)(param_1 + 0x9f0) != DAT_140622c24) {
    fVar25 = DAT_140622ba4;
  }
  if (((param_1[0x9b9] != (CCNode)0x0) || (param_1[0x9ba] != (CCNode)0x0)) ||
     ((param_1[0x9bc] != (CCNode)0x0 || (param_1[0x9c4] != (CCNode)0x0)))) {
    if (*(float *)(param_1 + 0x9f0) != DAT_140622c24) {
      fVar25 = DAT_140622bc4;
    }
    if (param_1[0x9bf] == (CCNode)0x0) {
      dVar18 = *(double *)(param_1 + 0x9a0);
      if (((0.0 <= dVar18) && (dVar18 < (double)(DAT_140623068 / fVar25))) ||
         ((dVar18 <= 0.0 && ((double)(DAT_1406237d4 / fVar25) < dVar18)))) {
LAB_14038c59e:
        param_1[0x952] = (CCNode)0x0;
      }
    }
    else {
      dVar18 = *(double *)(param_1 + 0x9a0);
      if (((dVar18 <= 0.0) &&
          ((double)(float)((uint)(DAT_140623068 / fVar25) ^ DAT_1406243f0) < dVar18)) ||
         ((0.0 <= dVar18 &&
          (dVar18 < (double)(float)((uint)(DAT_1406237d4 / fVar25) ^ DAT_1406243f0)))))
      goto LAB_14038c59e;
    }
    if (param_1[0x9b9] == (CCNode)0x0) {
      if (param_1[0x9ba] == (CCNode)0x0) {
        if (param_1[0x9c4] == (CCNode)0x0) {
          iVar3 = -1;
          if (param_1[0x9bf] == (CCNode)0x0) {
            iVar3 = 1;
          }
          iVar12 = -1;
          if (param_1[0x985] != (CCNode)0x0) {
            iVar12 = 1;
          }
          FUN_140388d10(param_1,(double)((float)iVar3 * fVar17 * (float)iVar12));
          iVar12 = -1;
          iVar3 = -1;
          if (param_1[0x9bf] == (CCNode)0x0) {
            iVar3 = 1;
          }
          if (param_1[0x985] != (CCNode)0x0) {
            iVar12 = 1;
          }
          FUN_140388d10(param_1,(double)*(float *)(param_1 + 0x9f4) * *(double *)(param_1 + 0x7b8) *
                                (double)iVar3 * (double)iVar12);
          lVar4 = *(longlong *)(param_1 + 0xc20);
          if ((lVar4 != 0) && (param_1[0x987] != param_1[0x985])) {
            uVar13 = *(undefined4 *)(param_1 + 0x39c);
            uVar9 = 0x15;
            if (param_1[0x985] == (CCNode)0x0) {
              uVar9 = 0x16;
            }
            goto LAB_14038ca9a;
          }
          goto LAB_14038ca9f;
        }
        fVar22 = fVar24;
        if ((param_1[0x986] != (CCNode)0x0) && (param_1[0x985] != (CCNode)0x0)) {
          param_1[0x986] = (CCNode)0x0;
          dVar18 = *(double *)(param_1 + 0x9a0);
          FUN_14039a1d0(param_1,param_1[0x9bf] == (CCNode)0x0,
                        CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1));
          FUN_140388d10(param_1,(double)((float)dVar18 * fVar21));
          if (*(longlong *)(param_1 + 0xc20) != 0) {
            FUN_140231ff0(*(longlong *)(param_1 + 0xc20),0x14,0,*(undefined4 *)(param_1 + 0x39c));
          }
        }
      }
      else {
        if ((param_1[0x986] != (CCNode)0x0) && (param_1[0x985] != (CCNode)0x0)) {
          param_1[0x986] = (CCNode)0x0;
          fVar22 = DAT_140623038;
          if (*(float *)(param_1 + 0x9f0) != fVar24) {
            fVar22 = fVar17;
          }
          if (param_1[0x9bf] == (CCNode)0x0) {
            bVar15 = (double)(fVar25 * fVar22) == *(double *)(param_1 + 0x9a0);
            bVar16 = (double)(fVar25 * fVar22) < *(double *)(param_1 + 0x9a0);
          }
          else {
            dVar18 = (double)(fVar22 * DAT_1406236f0 * fVar25);
            bVar15 = *(double *)(param_1 + 0x9a0) == dVar18;
            bVar16 = *(double *)(param_1 + 0x9a0) < dVar18;
          }
          if ((!bVar16 && !bVar15) &&
             (((FUN_140388d10(param_1), param_1[0x9b1] != (CCNode)0x0 ||
               (param_1[0x9b0] != (CCNode)0x0)) && (0.0 < *(float *)(param_1 + 0x9b4))))) {
            dVar18 = *(double *)(param_1 + 0x9a0) * _DAT_140622e40;
            FUN_140388d10(param_1,(double)(*(float *)(param_1 + 0x9b4) * DAT_140622b08) +
                                  *(double *)(param_1 + 0x9a0));
            dVar19 = (double)(float)dVar18;
            dVar18 = *(double *)(param_1 + 0x9a0);
            if (dVar19 <= *(double *)(param_1 + 0x9a0)) {
              dVar18 = dVar19;
            }
            FUN_140388d10(param_1,dVar18);
          }
          cVar2 = FUN_14039b4f0(param_1);
          if ((cVar2 == '\0') && (param_1[0x72b] == (CCNode)0x0)) {
            cocos2d::CCParticleSystem::resumeSystem(*(CCParticleSystem **)(param_1 + 0x8d8));
            cocos2d::CCNode::stopActionByTag(param_1,7);
            pCVar5 = cocos2d::CCCallFunc::create((CCObject *)param_1,(_func_void *)&LAB_14039b4e0);
            pCVar6 = cocos2d::CCDelayTime::create(DAT_140622a28);
            pCVar7 = cocos2d::CCSequence::create((CCFiniteTimeAction *)pCVar6,pCVar5,0);
            (**(code **)(*(longlong *)pCVar7 + 0x40))(pCVar7,7);
            cocos2d::CCNode::runAction(param_1,(CCAction *)pCVar7);
          }
          if (*(longlong *)(param_1 + 0xc20) != 0) {
            FUN_140231ff0(*(longlong *)(param_1 + 0xc20),0xf,0,*(undefined4 *)(param_1 + 0x39c));
          }
        }
        FUN_14039a430(param_1);
        fVar24 = fVar25;
        fVar22 = fVar21;
      }
      fVar21 = fVar22;
      FUN_140388d10();
      fVar25 = fVar24;
      if (param_1[0x985] != (CCNode)0x0) {
        param_1[0xa0c] = (CCNode)0x0;
      }
    }
    else {
      fVar24 = fVar21;
      if (param_1[0x985] == (CCNode)0x0) {
        if (param_1[0x952] != (CCNode)0x0) goto LAB_14038c5e1;
        goto LAB_14038c60c;
      }
      if (param_1[0x952] == (CCNode)0x0) {
        CVar14 = param_1[0x985];
        fVar24 = DAT_1406236f0;
      }
      else {
LAB_14038c5e1:
        if (param_1[0x9bf] == (CCNode)0x0) {
          if (*(double *)(param_1 + 0x9a0) <= 0.0 && *(double *)(param_1 + 0x9a0) != 0.0) {
LAB_14038c604:
            fVar24 = DAT_1406236f0;
          }
        }
        else if (0.0 < *(double *)(param_1 + 0x9a0)) goto LAB_14038c604;
LAB_14038c60c:
        CVar14 = param_1[0x985];
        if ((CVar14 == (CCNode)0x0) && (cVar2 = FUN_14039a430(param_1), cVar2 == '\0')) {
          fVar24 = DAT_140622c84;
        }
      }
      if (param_1[0xb70] != (CCNode)0x0) {
        fVar26 = fVar26 * fVar21;
      }
      if (0.0 <= fVar24) {
        fVar22 = fVar26;
      }
      fVar26 = DAT_140622ad0;
      if ((CVar14 != (CCNode)0x0) && (cVar2 = FUN_14039a430(param_1), cVar2 != '\0')) {
        fVar26 = DAT_140622b08;
      }
      iVar3 = -1;
      if (param_1[0x9bf] == (CCNode)0x0) {
        iVar3 = 1;
      }
      FUN_140388d10(param_1,(double)(float)((uint)(((float)iVar3 * param_2 * fVar22 * fVar24 *
                                                   fVar26) / fVar25) ^ uVar10) +
                            *(double *)(param_1 + 0x9a0));
      CVar14 = param_1[0x985];
      if (CVar14 != (CCNode)0x0) {
        param_1[0xa0c] = (CCNode)0x0;
      }
      lVar4 = *(longlong *)(param_1 + 0xc20);
      if ((lVar4 != 0) && (param_1[0x987] != CVar14)) {
        uVar13 = *(undefined4 *)(param_1 + 0x39c);
        if (CVar14 == (CCNode)0x0) {
          uVar9 = 0x11;
        }
        else {
          uVar9 = 0x10;
        }
LAB_14038ca9a:
        FUN_140231ff0(lVar4,uVar9,0,uVar13);
      }
    }
LAB_14038ca9f:
    if ((param_1[0x952] == (CCNode)0x0) && (param_1[0x9bc] == (CCNode)0x0)) {
      dVar18 = *(double *)(param_1 + 0x9a0);
      if (param_1[0x9bf] == (CCNode)0x0) {
        dVar19 = (double)((fVar21 * DAT_1406237fc) / fVar25);
        if (dVar18 <= dVar19) {
          dVar18 = dVar19;
        }
        FUN_140388d10(param_1,dVar18);
      }
      else {
        if (dVar18 <= (double)(DAT_1406237fc / fVar25)) {
          dVar18 = (double)(DAT_1406237fc / fVar25);
        }
        FUN_140388d10(param_1,dVar18);
        fVar17 = fVar21 * fVar17;
      }
      dVar18 = *(double *)(param_1 + 0x9a0);
      if ((double)(fVar17 / fVar25) <= *(double *)(param_1 + 0x9a0)) {
        dVar18 = (double)(fVar17 / fVar25);
      }
      FUN_140388d10(param_1,dVar18);
    }
    cVar2 = FUN_14039a430(param_1);
    if (cVar2 != '\0') {
      param_1[0xa1c] = (CCNode)0x0;
    }
    goto LAB_14038cb36;
  }
  fVar17 = DAT_140622b38;
  if (((param_1[0x9bb] == (CCNode)0x0) && (param_1[0x9be] == (CCNode)0x0)) &&
     (fVar17 = DAT_140622c24, param_1[0x9bd] != (CCNode)0x0)) {
    fVar17 = DAT_140622bd8;
  }
  CVar1 = param_1[0xb59];
  if (((CVar1 == (CCNode)0x0) || (CVar14 != (CCNode)0x0)) &&
     ((param_1[0xb5a] == (CCNode)0x0 || (CVar11 != (CCNode)0x0)))) {
    bVar15 = false;
LAB_14038bb80:
    bVar16 = true;
  }
  else {
    bVar15 = true;
    if ((param_1[0xb5b] != CVar1) && (param_1[0x5fc] == (CCNode)0x0)) {
      *(undefined4 *)(param_1 + 0xb3c) = 0;
    }
    if (*(int *)(param_1 + 0xb3c) < 2) goto LAB_14038bb80;
    bVar16 = false;
  }
  fVar21 = DAT_140622a10;
  if ((CVar8 != (CCNode)0x0) && (param_1[0x9c1] != (CCNode)0x0)) {
    if (param_1[0x9be] == (CCNode)0x0) {
      if ((param_1[0x9e4] == (CCNode)0x0) && ((param_1[0xb70] == (CCNode)0x0 || (bVar16)))) {
        param_1[0xa1c] = (CCNode)0x1;
        param_1[0xa0c] = (CCNode)0x0;
        param_1[0x9c1] = (CCNode)0x0;
        param_1[0x986] = (CCNode)0x0;
        param_1[0x99c] = (CCNode)0x0;
        *(undefined8 *)(param_1 + 0x830) = 0;
        if ((CVar1 == (CCNode)0x0) &&
           ((param_1[0xb5a] == (CCNode)0x0 && (0 < *(int *)(param_1 + 0xb3c))))) {
          *(undefined4 *)(param_1 + 0xb3c) = 0;
          *(undefined8 *)(param_1 + 0xb40) = *(undefined8 *)(param_1 + 0xaa0);
        }
        fVar17 = DAT_140623610;
        fVar21 = (float)*(double *)(param_1 + 0x7c0);
        if (param_1[0x9bd] != (CCNode)0x0) {
          fVar21 = fVar21 * DAT_140622b08;
        }
        if (iVar3 - iVar12 != 0xd5) {
          param_1[0x952] = (CCNode)0x1;
          fVar21 = fVar17;
        }
        uVar10 = (uint)DAT_1406243d0;
        uVar23 = (uint)((ulonglong)DAT_1406243d0 >> 0x20);
        if ((param_1[0xb70] != (CCNode)0x0) && (bVar15)) {
          if (param_1[0xb58] == (CCNode)0x0) {
LAB_14038bcb5:
            if (0 < *(int *)(param_1 + 0xb3c)) {
              fVar21 = fVar21 * (fVar24 - (float)*(int *)(param_1 + 0xb3c) * DAT_140622aa0);
            }
          }
          else {
            dVar18 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(param_1 + 0xaf8) >> 0x20) &
                                      uVar23,(uint)*(undefined8 *)(param_1 + 0xaf8) & uVar10);
            if (dVar18 <= (double)*(float *)(param_1 + 0x9f4) * *(double *)(param_1 + 0x7b8))
            goto LAB_14038bcb5;
            fVar21 = (float)(dVar18 / ((double)*(float *)(param_1 + 0x9f4) *
                                      *(double *)(param_1 + 0x7b8)) + (double)fVar21);
          }
          *(int *)(param_1 + 0xb3c) = *(int *)(param_1 + 0xb3c) + 1;
        }
        iVar12 = -1;
        iVar3 = -1;
        if (param_1[0x9bf] == (CCNode)0x0) {
          iVar3 = 1;
        }
        FUN_140388d10(param_1,(double)((float)iVar3 * fVar21 * fVar25));
        if ((param_1[0x9b1] != (CCNode)0x0) || (param_1[0x9b0] != (CCNode)0x0)) {
          fVar17 = *(float *)(param_1 + 0x9b4);
          if (param_1[0x9bf] == (CCNode)0x0) {
            iVar12 = 1;
          }
          if ((0.0 < (float)iVar12 * fVar17) &&
             ((param_1[0xb70] == (CCNode)0x0 ||
              (DAT_140622e90 <
               (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(param_1 + 0xaf8) >> 0x20) & uVar23
                                ,(uint)*(undefined8 *)(param_1 + 0xaf8) & uVar10))))) {
            dVar19 = *(double *)(param_1 + 0x9a0) * _DAT_140622e40;
            dVar18 = DAT_140622e18;
            if ((*(double *)(param_1 + 0xaa0) - *(double *)(param_1 + 0x598) < DAT_140622cf0) &&
               (dVar20 = (*(double *)(param_1 + 0xaa0) - *(double *)(param_1 + 0x598)) *
                         DAT_140622ec8, dVar18 = DAT_140622d78, DAT_140622d78 <= dVar20)) {
              dVar18 = dVar20;
            }
            fVar21 = (float)((double)fVar17 * dVar18);
            if (param_1[0x9bb] != (CCNode)0x0) {
              fVar21 = fVar17;
            }
            FUN_140388d10(param_1,(double)(fVar21 * DAT_140622a88) + *(double *)(param_1 + 0x9a0));
            dVar19 = (double)(float)dVar19;
            dVar18 = *(double *)(param_1 + 0x9a0);
            if (param_1[0x9bf] == (CCNode)0x0) {
              if (dVar19 <= dVar18) {
                dVar18 = dVar19;
              }
            }
            else if (dVar18 <= dVar19) {
              dVar18 = dVar19;
            }
            FUN_140388d10(param_1,dVar18);
          }
        }
        param_1[0x7e3] = (CCNode)0x1;
        _ftime64(local_c8);
        *(double *)(param_1 + 0x7f8) =
             (double)((local_c8[0] & 0xfffff) * 1000 + (uint)local_c0) / DAT_140623000;
        FUN_14038cba0(param_1);
        if (param_1[0x9bb] == (CCNode)0x0) {
          if (param_1[0x9bd] == (CCNode)0x0) {
            if (((param_1[0x9be] == (CCNode)0x0) && (param_1[0xa2a] == (CCNode)0x0)) &&
               (param_1[0x9e4] == (CCNode)0x0)) {
              *(undefined2 *)(param_1 + 0x728) = 0;
              param_1[0x668] = (CCNode)0x0;
              *(undefined4 *)(param_1 + 0x720) = 0;
              FUN_14038d220(param_1,0,fVar24);
            }
            goto LAB_14038beee;
          }
LAB_14038bef7:
          local_d8 = 9;
          local_d0 = 0xf;
          local_e8[0] = s_jump_loop_1405c7a18[0];
          local_e8[1] = s_jump_loop_1405c7a18[1];
          local_e8[2] = s_jump_loop_1405c7a18[2];
          local_e8[3] = s_jump_loop_1405c7a18[3];
          local_e8[4] = s_jump_loop_1405c7a18[4];
          local_e8[5] = s_jump_loop_1405c7a18[5];
          local_e8[6] = s_jump_loop_1405c7a18[6];
          local_e8[7] = s_jump_loop_1405c7a18[7];
          uStack_e0 = (ulonglong)(byte)s_jump_loop_1405c7a18[8];
          FUN_140040d60(*(undefined8 *)(param_1 + 0x8a0),local_e8,DAT_140622a10);
        }
        else {
          FUN_14039a1d0(param_1,param_1[0x9bf] == (CCNode)0x0,1);
          *(double *)(param_1 + 0x9a0) = *(double *)(param_1 + 0x9a0) * _DAT_140622db0;
          param_1[0x7e8] = (CCNode)0x0;
          param_1[0x985] = (CCNode)0x0;
LAB_14038beee:
          if (param_1[0x9bd] != (CCNode)0x0) goto LAB_14038bef7;
        }
        if (*(longlong *)(param_1 + 0xc20) != 0) {
          if (((param_1[0x9b9] == (CCNode)0x0) && (param_1[0x9ba] == (CCNode)0x0)) &&
             ((param_1[0x9bc] == (CCNode)0x0 &&
              ((param_1[0x9c4] == (CCNode)0x0 && (param_1[0x9bb] == (CCNode)0x0)))))) {
            if (param_1[0x9bd] != (CCNode)0x0) goto LAB_14038bfa8;
            if (param_1[0x9be] != (CCNode)0x0) goto LAB_14038bf9f;
            uVar9 = 0xc;
            lVar4 = *(longlong *)(param_1 + 0xc20);
LAB_14038bfd5:
            FUN_140231ff0(lVar4,uVar9,0,*(undefined4 *)(param_1 + 0x39c));
          }
          else {
LAB_14038bf9f:
            if (param_1[0x9bd] == (CCNode)0x0) {
              if ((param_1[0x9bb] != (CCNode)0x0) &&
                 (lVar4 = *(longlong *)(param_1 + 0xc20), lVar4 != 0)) {
                uVar9 = 0x13;
                goto LAB_14038bfd5;
              }
            }
            else {
LAB_14038bfa8:
              lVar4 = *(longlong *)(param_1 + 0xc20);
              if (lVar4 != 0) {
                uVar9 = 0xd;
                goto LAB_14038bfd5;
              }
            }
          }
        }
        if (param_1[0xb70] != (CCNode)0x0) {
          FUN_14038cc80(param_1);
        }
        goto LAB_14038cb36;
      }
    }
    else if (param_1[0x9e4] == (CCNode)0x0) {
      FUN_140394340(param_1);
      goto LAB_14038cb36;
    }
  }
  if (param_1[0xa1c] != (CCNode)0x0) {
    if ((((param_1[0x9bd] != (CCNode)0x0) && (param_1[0x985] != (CCNode)0x0)) &&
        (param_1[0x99c] == (CCNode)0x0)) && (*(double *)(param_1 + 0x830) < DAT_140622e48)) {
      *(double *)(param_1 + 0x830) =
           (double)(param_2 * DAT_140622a10) + *(double *)(param_1 + 0x830);
      iVar3 = -1;
      if (param_1[0x9bf] == (CCNode)0x0) {
        iVar3 = 1;
      }
      FUN_140388d10(param_1,(double)((float)iVar3 * param_2 * fVar26 * fVar17) +
                            *(double *)(param_1 + 0x9a0));
    }
    iVar3 = -1;
    if (param_1[0x9bf] == (CCNode)0x0) {
      iVar3 = 1;
    }
    FUN_140388d10(param_1,*(double *)(param_1 + 0x9a0) -
                          (double)((float)iVar3 * param_2 * fVar26 * fVar17));
    if (((param_1[0x9bd] != (CCNode)0x0) && (param_1[0x99c] != (CCNode)0x0)) &&
       ((param_1[0x988] == (CCNode)0x0 && (*(longlong *)(param_1 + 0xc20) != 0)))) {
      FUN_140231ff0(*(longlong *)(param_1 + 0xc20),0xe,0,*(undefined4 *)(param_1 + 0x39c));
    }
    cVar2 = FUN_14039a430(param_1);
    if (cVar2 == '\0') {
      if (param_1[0xb70] == (CCNode)0x0) goto LAB_14038cb36;
      dVar18 = *(double *)(param_1 + 0x9a0);
      if (param_1[0x9bf] == (CCNode)0x0) {
        bVar15 = dVar18 < 0.0;
      }
      else {
        bVar15 = 0.0 < dVar18;
      }
      if (!bVar15 && dVar18 != 0.0) goto LAB_14038cb36;
    }
    param_1[0xa1c] = (CCNode)0x0;
    param_1[0x7e2] = (CCNode)0x1;
    param_1[0xa0c] = (CCNode)0x0;
    lVar4 = (**(code **)(*(longlong *)param_1 + 200))();
    *(undefined4 *)(param_1 + 0xc3c) = *(undefined4 *)(lVar4 + 4);
    if (param_1[0x9bd] == (CCNode)0x0) {
      if (param_1[0x9be] != (CCNode)0x0) {
        local_d8 = 9;
        local_d0 = 0xf;
        local_e8[0] = s_fall_loop_1405c7a28[0];
        local_e8[1] = s_fall_loop_1405c7a28[1];
        local_e8[2] = s_fall_loop_1405c7a28[2];
        local_e8[3] = s_fall_loop_1405c7a28[3];
        local_e8[4] = s_fall_loop_1405c7a28[4];
        local_e8[5] = s_fall_loop_1405c7a28[5];
        local_e8[6] = s_fall_loop_1405c7a28[6];
        local_e8[7] = s_fall_loop_1405c7a28[7];
        uStack_e0 = (ulonglong)(byte)s_fall_loop_1405c7a28[8];
        FUN_140040d60(*(undefined8 *)(param_1 + 0x8a8),local_e8,fVar21);
      }
    }
    else {
      local_d8 = 9;
      local_d0 = 0xf;
      local_e8[0] = s_fall_loop_1405c7a28[0];
      local_e8[1] = s_fall_loop_1405c7a28[1];
      local_e8[2] = s_fall_loop_1405c7a28[2];
      local_e8[3] = s_fall_loop_1405c7a28[3];
      local_e8[4] = s_fall_loop_1405c7a28[4];
      local_e8[5] = s_fall_loop_1405c7a28[5];
      local_e8[6] = s_fall_loop_1405c7a28[6];
      local_e8[7] = s_fall_loop_1405c7a28[7];
      uStack_e0 = (ulonglong)(byte)s_fall_loop_1405c7a28[8];
      FUN_140040d60(*(undefined8 *)(param_1 + 0x8a0),local_e8,fVar21);
      if ((param_1[0x99c] == (CCNode)0x0) && (*(longlong *)(param_1 + 0xc20) != 0)) {
        FUN_140231ff0(*(longlong *)(param_1 + 0xc20),0xe,0,*(undefined4 *)(param_1 + 0x39c));
      }
    }
    goto LAB_14038cb36;
  }
  if (param_1[0x9c1] != (CCNode)0x0) {
    lVar4 = (**(code **)(*(longlong *)param_1 + 200))(param_1);
    *(undefined4 *)(param_1 + 0xc3c) = *(undefined4 *)(lVar4 + 4);
  }
  cVar2 = FUN_14039a430(param_1);
  if ((cVar2 != '\0') &&
     (((param_1[0xb70] == (CCNode)0x0 ||
       (_DAT_140622cb8 <= *(double *)(param_1 + 0xaa0) - *(double *)(param_1 + 0xa10))) || (!bVar16)
      ))) {
    param_1[0x9c1] = (CCNode)0x0;
  }
  iVar3 = -1;
  if (param_1[0x9bf] == (CCNode)0x0) {
    iVar3 = 1;
  }
  dVar18 = (double)((float)iVar3 * param_2 * fVar26 * fVar17);
  FUN_140388d10(dVar18,*(double *)(param_1 + 0x9a0) - dVar18);
  dVar18 = *(double *)(param_1 + 0x9a0);
  if (param_1[0x9bf] == (CCNode)0x0) {
    if (dVar18 <= DAT_140623778) {
      dVar18 = DAT_140623778;
    }
  }
  else if (DAT_140622ef0 <= dVar18) {
    dVar18 = DAT_140622ef0;
  }
  if (dVar18 != (double)(int)dVar18) {
    dVar19 = (double)round();
    dVar18 = dVar19 / DAT_140623000 + (double)(int)dVar18;
  }
  *(double *)(param_1 + 0x9a0) = dVar18;
  if (param_1[0x9bf] == (CCNode)0x0) {
    bVar15 = DAT_140623710 < dVar18;
    dVar19 = DAT_140623710;
  }
  else {
    bVar15 = dVar18 < DAT_140622d30;
    dVar19 = DAT_140622d30;
  }
  if (((((!bVar15 && dVar19 != dVar18) && (param_1[0x9bb] == (CCNode)0x0)) &&
       ((param_1[0x9be] == (CCNode)0x0 &&
        ((param_1[0x9bd] == (CCNode)0x0 && (param_1[0x728] == (CCNode)0x0)))))) &&
      (param_1[0x9b0] == (CCNode)0x0)) &&
     (((param_1[0x658] == (CCNode)0x0 &&
       (((param_1[0xb70] == (CCNode)0x0 || (param_1[0xa0c] == (CCNode)0x0)) &&
        (param_1[0xa2a] == (CCNode)0x0)))) && (param_1[0x9e4] == (CCNode)0x0)))) {
    *(undefined2 *)(param_1 + 0x728) = 0;
    param_1[0x668] = (CCNode)0x0;
    *(undefined4 *)(param_1 + 0x720) = 0;
    if (param_1[0x9bb] == (CCNode)0x0) {
      FUN_14038d220(param_1,0,fVar24);
    }
    else {
      FUN_14038d350(param_1);
    }
  }
  cVar2 = FUN_14039a430(param_1);
  if (cVar2 == '\0') goto LAB_14038cb36;
  dVar18 = *(double *)(param_1 + 0x9a0);
  if (param_1[0x9bf] == (CCNode)0x0) {
    bVar15 = DAT_140623748 < dVar18;
    dVar19 = DAT_140623748;
  }
  else {
    bVar15 = dVar18 < DAT_140622e90;
    dVar19 = DAT_140622e90;
  }
  if (bVar15 || dVar19 == dVar18) goto LAB_14038cb36;
  if (((param_1[0x9bd] == (CCNode)0x0) || (param_1[0xa0c] == (CCNode)0x0)) ||
     (param_1[0x8b0] != (CCNode)0x0)) {
    if (((param_1[0x9be] != (CCNode)0x0) && (param_1[0xa0c] != (CCNode)0x0)) &&
       (param_1[0x8b0] == (CCNode)0x0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x8a8);
      goto LAB_14038c4a4;
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x8a0);
LAB_14038c4a4:
    local_d8 = 9;
    local_d0 = 0xf;
    local_e8[0] = s_fall_loop_1405c7a28[0];
    local_e8[1] = s_fall_loop_1405c7a28[1];
    local_e8[2] = s_fall_loop_1405c7a28[2];
    local_e8[3] = s_fall_loop_1405c7a28[3];
    local_e8[4] = s_fall_loop_1405c7a28[4];
    local_e8[5] = s_fall_loop_1405c7a28[5];
    local_e8[6] = s_fall_loop_1405c7a28[6];
    local_e8[7] = s_fall_loop_1405c7a28[7];
    uStack_e0 = (ulonglong)(byte)s_fall_loop_1405c7a28[8];
    FUN_140040d60(uVar9,local_e8,DAT_140622a10);
  }
  param_1[0xa0c] = (CCNode)0x0;
LAB_14038cb36:
  param_1[0x987] = param_1[0x985];
  param_1[0x988] = param_1[0x99c];
  return;
}

