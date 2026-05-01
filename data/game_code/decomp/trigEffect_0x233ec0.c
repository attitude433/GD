// Called from triggerObject base / 0x4bc180
// Function: FUN_140233ec0 @ 0x233ec0


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140233ec0(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  longlong ***ppplVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char *pcVar6;
  undefined8 ****ppppuVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong ****pppplVar11;
  longlong lVar12;
  longlong lVar13;
  byte bStackX_11;
  byte bStackX_12;
  byte bStackX_13;
  undefined1 auStack_2c8 [32];
  undefined8 ***local_2a8;
  longlong **pplStack_2a0;
  ulonglong local_298;
  ulonglong local_290;
  longlong *local_288;
  undefined8 ***local_280;
  longlong ***local_278;
  undefined8 uStack_270;
  ulonglong local_268;
  ulonglong local_260;
  BasicWriter<char> local_258 [528];
  ulonglong local_48;
  
  local_48 = DAT_1406ba040 ^ (ulonglong)auStack_2c8;
  bStackX_11 = (byte)(param_2 >> 8);
  bStackX_12 = (byte)(param_2 >> 0x10);
  bStackX_13 = (byte)(param_2 >> 0x18);
  plVar5 = (longlong *)
           (*(longlong *)(param_1 + 0x1050) +
           (*(ulonglong *)(param_1 + 0x1068) &
           (((((ulonglong)(param_2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)bStackX_11) * 0x100000001b3 ^ (ulonglong)bStackX_12) * 0x100000001b3 ^
           (ulonglong)bStackX_13) * 0x100000001b3) * 0x10);
  lVar12 = plVar5[1];
  lVar13 = *(longlong *)(param_1 + 0x1040);
  if (lVar12 == lVar13) {
LAB_140233f82:
    lVar12 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar12 + 0x10);
    while (param_2 != uVar1) {
      if (lVar12 == *plVar5) goto LAB_140233f82;
      lVar12 = *(longlong *)(lVar12 + 8);
      uVar1 = *(uint *)(lVar12 + 0x10);
    }
  }
  if (lVar12 == 0) {
    lVar12 = lVar13;
  }
  if (lVar12 != lVar13) {
    iVar8 = 999999999;
    if (param_3 < 999999999) {
      iVar8 = param_3;
    }
    fmt::BasicWriter<char>::BasicWriter<char>(local_258);
    fmt::BasicWriter<char>::operator<<(local_258,iVar8);
    pcVar6 = fmt::BasicWriter<char>::c_str(local_258);
    local_278 = (longlong ***)0x0;
    uStack_270 = 0;
    local_268 = 0;
    local_260 = 0;
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (pcVar6[lVar13] != '\0');
    FUN_14003a930(&local_278,pcVar6);
    uVar4 = local_260;
    uVar3 = local_268;
    ppplVar2 = local_278;
    plVar5 = *(longlong **)(lVar12 + 0x18);
    plVar10 = *(longlong **)(lVar12 + 0x20);
    local_288 = plVar10;
    if (plVar5 != plVar10) {
      do {
        lVar12 = *plVar5;
        local_2a8 = (undefined8 ***)0x0;
        pplStack_2a0 = (longlong **)0x0;
        local_298 = 0;
        local_290 = 0;
        pppplVar11 = &local_278;
        if (0xf < uVar4) {
          pppplVar11 = (longlong ****)ppplVar2;
        }
        if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_140007b50();
        }
        if (uVar3 < 0x10) {
          local_298 = uVar3;
          local_290 = 0xf;
          local_2a8 = *pppplVar11;
          pplStack_2a0 = (longlong **)pppplVar11[1];
        }
        else {
          local_290 = 0xf;
          uVar9 = uVar3 | 0xf;
          if (uVar9 < 0x8000000000000000) {
            if (uVar9 < 0x16) {
              uVar9 = 0x16;
            }
          }
          else {
            uVar9 = 0x7fffffffffffffff;
          }
          local_2a8 = (undefined8 ***)FUN_14003aa10(uVar9 + 1);
          local_298 = uVar3;
          local_290 = uVar9;
          memcpy(local_2a8,pppplVar11,uVar3 + 1);
          plVar10 = local_288;
        }
        local_280 = &local_2a8;
        if (*(char *)(lVar12 + 0x788) == '\0') {
          if ((undefined8 ****)(lVar12 + 0x750) != &local_2a8) {
            ppppuVar7 = &local_2a8;
            if (0xf < local_290) {
              ppppuVar7 = (undefined8 ****)local_2a8;
            }
            FUN_14003cce0((undefined8 ****)(lVar12 + 0x750),ppppuVar7,local_298);
          }
          *(undefined1 *)(lVar12 + 0x748) = 1;
        }
        FUN_14003a830(&local_2a8);
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar10);
    }
    if (0xf < uVar4) {
      pppplVar11 = (longlong ****)ppplVar2;
      if ((0xfff < uVar4 + 1) &&
         (pppplVar11 = (longlong ****)ppplVar2[-1],
         0x1f < (ulonglong)((longlong)ppplVar2 + (-8 - (longlong)pppplVar11)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppplVar11);
    }
    fmt::BasicWriter<char>::~BasicWriter<char>(local_258);
  }
  return;
}

