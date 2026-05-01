// GameObject_getSaveString @ 0x19ecd0
// Body: 7159 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14019ecd0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  CCObject *this;
  CCObject *pCVar10;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar11;
  void *pvVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_508 [32];
  undefined8 *local_4e8;
  undefined8 uStack_4e0;
  undefined *local_4d8;
  undefined8 uStack_4d0;
  undefined8 *local_4c8;
  BasicStringRef<char> local_4b8 [16];
  void *local_4a8;
  undefined8 uStack_4a0;
  longlong local_498;
  ulonglong uStack_490;
  BasicWriter<char> local_488 [528];
  BasicWriter<char> local_278 [528];
  ulonglong local_68;
  
  local_68 = DAT_1406ba040 ^ (ulonglong)auStack_508;
  lVar14 = 0;
  iVar2 = *(int *)((longlong)param_1 + 0x40c);
  local_4e8 = param_2;
  local_4c8 = param_2;
  fmt::BasicWriter<char>::BasicWriter<char>(local_488);
  fmt::BasicWriter<char>::operator<<(local_488,1);
  local_4e8 = (undefined8 *)&DAT_140533704;
  uStack_4e0 = 0;
  fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
  fmt::BasicWriter<char>::operator<<(local_488,iVar2);
  pfVar6 = (float *)(**(code **)(*param_1 + 200))(param_1);
  fVar15 = *pfVar6;
  lVar7 = (**(code **)(*param_1 + 200))(param_1);
  fVar16 = *(float *)(lVar7 + 4) - DAT_140623294;
  local_4e8 = (undefined8 *)&DAT_140533704;
  uStack_4e0 = 0;
  fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
  fmt::BasicWriter<char>::operator<<(local_488,2);
  local_4e8 = (undefined8 *)&DAT_140533704;
  uStack_4e0 = 0;
  fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
  if ((float)(int)fVar15 == fVar15) {
    fmt::BasicWriter<char>::operator<<(local_488,(int)fVar15);
  }
  else {
    fmt::BasicWriter<char>::operator<<(local_488,(double)fVar15);
  }
  local_4e8 = (undefined8 *)&DAT_140533704;
  uStack_4e0 = 0;
  fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
  fmt::BasicWriter<char>::operator<<(local_488,3);
  local_4e8 = (undefined8 *)&DAT_140533704;
  uStack_4e0 = 0;
  fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
  if ((float)(int)fVar16 == fVar16) {
    fmt::BasicWriter<char>::operator<<(local_488,(int)fVar16);
  }
  else {
    fmt::BasicWriter<char>::operator<<(local_488,(double)fVar16);
  }
  if (*(char *)((longlong)param_1 + 0x404) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x60);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,1);
  }
  if (*(char *)((longlong)param_1 + 0x515) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x86);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x515));
  }
  if (*(char *)((longlong)param_1 + 0x516) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x87);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x516));
  }
  if ((char)param_1[0x50] != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x1ff);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)(param_1 + 0x50));
  }
  if (*(char *)((longlong)param_1 + 0x517) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x88);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x517));
  }
  if ((char)param_1[0xa3] != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x121);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)(param_1 + 0xa3));
  }
  if (*(char *)((longlong)param_1 + 0x51c) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x1ef);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x51c));
  }
  if (*(char *)((longlong)param_1 + 0x51d) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x1f0);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x51d));
  }
  if (*(char *)((longlong)param_1 + 0x51e) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x1fd);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x51e));
  }
  if (*(char *)((longlong)param_1 + 0x51b) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x164);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x51b));
  }
  if (*(char *)((longlong)param_1 + 0x3d1) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x174);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x3d1));
  }
  if ((short)param_1[0x83] != 0) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x1f1);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(int)(short)param_1[0x83]);
  }
  if (*(char *)((longlong)param_1 + 0x519) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x89);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x519));
  }
  if (*(char *)((longlong)param_1 + 0x51a) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0xc1);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x51a));
  }
  if (*(char *)((longlong)param_1 + 0x4c6) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x79);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x4c6));
  }
  if (*(short *)((longlong)param_1 + 0x3fc) != 0) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x157);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(int)*(short *)((longlong)param_1 + 0x3fc));
  }
  if (*(short *)((longlong)param_1 + 0x3fe) != 0) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x1be);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(int)*(short *)((longlong)param_1 + 0x3fe));
  }
  cVar4 = (**(code **)(*param_1 + 0x4e8))(param_1);
  if (cVar4 != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,4);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,1);
  }
  cVar4 = (**(code **)(*param_1 + 0x4f0))(param_1);
  if (cVar4 != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,5);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,1);
  }
  if (0 < (int)param_1[0x6e]) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x6c);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(int)param_1[0x6e]);
  }
  if (*(short *)((longlong)param_1 + 0x4ba) != 0) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x14);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(int)*(short *)((longlong)param_1 + 0x4ba));
  }
  if (*(short *)((longlong)param_1 + 0x4bc) != 0) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x3d);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(int)*(short *)((longlong)param_1 + 0x4bc));
  }
  if (*(char *)((longlong)param_1 + 0x4f3) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x67);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x4f3));
  }
  lVar7 = -1;
  if (0 < (short)param_1[0x93]) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::operator<<(local_488,0x39);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4e8);
    fmt::BasicWriter<char>::BasicWriter<char>(local_278);
    bVar3 = true;
    do {
      sVar1 = *(short *)(lVar14 + param_1[0x92]);
      if (0 < sVar1) {
        if (!bVar3) {
          local_4e8 = (undefined8 *)&DAT_14055d9e4;
          uStack_4e0 = 0;
          local_4d8 = &DAT_14055d9e4;
          uStack_4d0 = 0;
          fmt::BasicWriter<char>::operator<<(local_278,&local_4d8);
        }
        fmt::BasicWriter<char>::operator<<(local_278,(int)sVar1);
        bVar3 = false;
      }
      lVar14 = lVar14 + 2;
    } while (lVar14 < 0x14);
    pcVar8 = fmt::BasicWriter<char>::c_str(local_278);
    param_2 = local_4c8;
    local_4a8 = (void *)0x0;
    uStack_4a0 = 0;
    local_498 = 0;
    uStack_490 = 0;
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (pcVar8[lVar14] != '\0');
    FUN_14003a930(&local_4a8,pcVar8);
    fmt::BasicWriter<char>::~BasicWriter<char>(local_278);
    puVar9 = (undefined8 *)
             fmt::BasicStringRef<char>::BasicStringRef<char>
                       (local_4b8,
                        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)&local_4a8);
    local_4d8 = (undefined *)*puVar9;
    uStack_4d0 = puVar9[1];
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    if (0xf < uStack_490) {
      pvVar12 = local_4a8;
      if ((0xfff < uStack_490 + 1) &&
         (pvVar12 = *(void **)((longlong)local_4a8 + -8),
         0x1f < (ulonglong)((longlong)local_4a8 + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar12);
    }
  }
  if ((*(char *)((longlong)param_1 + 0x49a) != '\0') && (param_3 != 0)) {
    this = cocos2d::CCDictionary::objectForKey
                     (*(CCDictionary **)(param_3 + 0xf68),
                      (ulonglong)*(uint *)((longlong)param_1 + 0x39c));
    if ((this == (CCObject *)0x0) || (uVar5 = cocos2d::CCArray::count((CCArray *)this), uVar5 == 0))
    {
      uStack_4a0 = 0;
      local_498 = 0;
      uStack_490 = 0xf;
      local_4a8 = (void *)0x0;
    }
    else {
      fmt::BasicWriter<char>::BasicWriter<char>(local_278);
      bVar3 = true;
      uVar13 = 0;
      uVar5 = cocos2d::CCArray::count((CCArray *)this);
      if (uVar5 != 0) {
        do {
          pCVar10 = cocos2d::CCArray::objectAtIndex((CCArray *)this,uVar13);
          iVar2 = *(int *)(pCVar10 + 0x38);
          if (0 < iVar2) {
            if (!bVar3) {
              local_4e8 = (undefined8 *)&DAT_14055d9e4;
              uStack_4e0 = 0;
              local_4d8 = &DAT_14055d9e4;
              uStack_4d0 = 0;
              fmt::BasicWriter<char>::operator<<(local_278,&local_4d8);
            }
            fmt::BasicWriter<char>::operator<<(local_278,iVar2);
            bVar3 = false;
          }
          uVar13 = uVar13 + 1;
          uVar5 = cocos2d::CCArray::count((CCArray *)this);
          param_2 = local_4c8;
        } while (uVar13 < uVar5);
      }
      pcVar8 = fmt::BasicWriter<char>::c_str(local_278);
      local_4a8 = (void *)0x0;
      uStack_4a0 = 0;
      local_498 = 0;
      uStack_490 = 0;
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (pcVar8[lVar14] != '\0');
      FUN_14003a930(&local_4a8,pcVar8);
      fmt::BasicWriter<char>::~BasicWriter<char>(local_278);
    }
    if (local_498 != 0) {
      local_4e8 = (undefined8 *)&DAT_140533704;
      uStack_4e0 = 0;
      local_4d8 = &DAT_140533704;
      uStack_4d0 = 0;
      fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
      fmt::BasicWriter<char>::operator<<(local_488,0x112);
      local_4e8 = (undefined8 *)&DAT_140533704;
      uStack_4e0 = 0;
      local_4d8 = &DAT_140533704;
      uStack_4d0 = 0;
      fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
      puVar9 = (undefined8 *)
               fmt::BasicStringRef<char>::BasicStringRef<char>
                         (local_4b8,
                          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)&local_4a8);
      local_4d8 = (undefined *)*puVar9;
      uStack_4d0 = puVar9[1];
      fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    }
    if (0xf < uStack_490) {
      pvVar12 = local_4a8;
      if ((0xfff < uStack_490 + 1) &&
         (pvVar12 = *(void **)((longlong)local_4a8 + -8),
         0x1f < (ulonglong)((longlong)local_4a8 + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar12);
    }
  }
  if (*(char *)((longlong)param_1 + 0x41b) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x40);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,1);
  }
  if (*(char *)((longlong)param_1 + 0x41a) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x43);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,1);
  }
  if (*(char *)((longlong)param_1 + 0x41c) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x74);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x41c));
  }
  if (*(char *)((longlong)param_1 + 0x41d) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x1fb);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x41d));
  }
  if (0 < (int)param_1[0xa6]) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x9b);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,(int)param_1[0xa6]);
  }
  if (0 < *(int *)((longlong)param_1 + 0x534)) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x9c);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,*(int *)((longlong)param_1 + 0x534));
  }
  if (*(int *)((longlong)param_1 + 0x434) != 0) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x35);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,*(int *)((longlong)param_1 + 0x434));
  }
  if ((int)param_1[0x8e] != 0) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x19);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,(int)param_1[0x8e]);
  }
  fVar16 = (float)(**(code **)(*param_1 + 0x168))(param_1);
  fVar15 = (float)(**(code **)(*param_1 + 0x178))(param_1);
  fVar16 = fVar16 - (float)((int)(fVar16 / DAT_14062346c) * 0x168);
  fVar15 = fVar15 - (float)((int)(fVar15 / DAT_14062346c) * 0x168);
  if (fVar16 != (float)(int)fVar16) {
    fVar16 = (float)(int)((double)(fVar16 * DAT_1406232bc) + DAT_140622d98) / DAT_1406232bc;
  }
  if (fVar15 != (float)(int)fVar15) {
    fVar15 = (float)(int)((double)(fVar15 * DAT_1406232bc) + DAT_140622d98) / DAT_1406232bc;
  }
  if (fVar16 == fVar15) {
    if (fVar16 == 0.0) goto LAB_1401a022c;
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,6);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fVar15 = fVar16;
  }
  else {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x83);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,(double)fVar16);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x84);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
  }
  fmt::BasicWriter<char>::operator<<(local_488,(double)fVar15);
LAB_1401a022c:
  if (*(int *)param_1[0x8a] != 0) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x15);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,*(int *)param_1[0x8a]);
  }
  if (((int *)param_1[0x8b] != (int *)0x0) && (*(int *)param_1[0x8b] != 0)) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x16);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,*(int *)param_1[0x8b]);
  }
  if (*(int *)((longlong)param_1 + 0x46c) != 0) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x18);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,*(int *)((longlong)param_1 + 0x46c));
  }
  fVar15 = DAT_140622c24;
  if (*(float *)(param_1 + 0x91) != DAT_140622c24) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x80);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,(double)*(float *)(param_1 + 0x91));
  }
  if (*(float *)((longlong)param_1 + 0x48c) != fVar15) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x81);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,(double)*(float *)((longlong)param_1 + 0x48c));
  }
  if (*(char *)((longlong)param_1 + 0x486) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x22);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x486));
  }
  if (*(char *)((longlong)param_1 + 0x487) != '\0') {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x117);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,(uint)*(byte *)((longlong)param_1 + 0x487));
  }
  lVar14 = param_1[0x8a];
  if ((((*(float *)(lVar14 + 0x10) != DAT_1406ba148) || (*(float *)(lVar14 + 0x14) != DAT_1406ba14c)
       ) || (*(float *)(lVar14 + 0x18) != DAT_1406ba150)) ||
     ((*(char *)(lVar14 + 0x1c) != DAT_1406ba154 || (*(char *)(lVar14 + 0x1d) != DAT_1406ba155)))) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x29);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,1);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x2b);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    local_4d8 = *(undefined **)(param_1[0x8a] + 0x10);
    uStack_4d0 = *(undefined8 *)(param_1[0x8a] + 0x18);
    pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              FUN_140065720(&local_4a8,&local_4d8);
    puVar9 = (undefined8 *)fmt::BasicStringRef<char>::BasicStringRef<char>(local_4b8,pbVar11);
    local_4d8 = (undefined *)*puVar9;
    uStack_4d0 = puVar9[1];
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    FUN_14003a830(&local_4a8);
  }
  lVar14 = param_1[0x8b];
  if ((lVar14 != 0) &&
     (((*(float *)(lVar14 + 0x10) != DAT_1406ba148 || (*(float *)(lVar14 + 0x14) != DAT_1406ba14c))
      || ((*(float *)(lVar14 + 0x18) != DAT_1406ba150 ||
          ((*(char *)(lVar14 + 0x1c) != DAT_1406ba154 || (*(char *)(lVar14 + 0x1d) != DAT_1406ba155)
           ))))))) {
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x2a);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,1);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    fmt::BasicWriter<char>::operator<<(local_488,0x2c);
    local_4e8 = (undefined8 *)&DAT_140533704;
    uStack_4e0 = 0;
    local_4d8 = &DAT_140533704;
    uStack_4d0 = 0;
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    local_4d8 = *(undefined **)(param_1[0x8b] + 0x10);
    uStack_4d0 = *(undefined8 *)(param_1[0x8b] + 0x18);
    pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              FUN_140065720(&local_4a8,&local_4d8);
    puVar9 = (undefined8 *)fmt::BasicStringRef<char>::BasicStringRef<char>(local_4b8,pbVar11);
    local_4d8 = (undefined *)*puVar9;
    uStack_4d0 = puVar9[1];
    fmt::BasicWriter<char>::operator<<(local_488,&local_4d8);
    FUN_14003a830(&local_4a8);
  }
  pcVar8 = fmt::BasicWriter<char>::c_str(local_488);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    lVar7 = lVar7 + 1;
  } while (pcVar8[lVar7] != '\0');
  FUN_14003a930(param_2,pcVar8,lVar7);
  fmt::BasicWriter<char>::~BasicWriter<char>(local_488);
  return param_2;
}

