// EffectGameObject_getSaveString @ 0x4abc20
// Body: 22299 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1404abc20(longlong param_1,undefined *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined8 *puVar4;
  char *pcVar5;
  float fVar6;
  undefined1 auStack_2d8 [32];
  undefined *local_2b8;
  undefined8 uStack_2b0;
  BasicStringRef<char> local_2a0 [24];
  BasicWriter<char> local_288 [528];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_1406ba040 ^ (ulonglong)auStack_2d8;
  iVar2 = *(int *)(param_1 + 0x5c8);
  if (iVar2 < 9999) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 9999;
  }
  *(int *)(param_1 + 0x5c8) = iVar2;
  iVar2 = *(int *)(param_1 + 0x5cc);
  if (iVar2 < 9999) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 9999;
  }
  *(int *)(param_1 + 0x5cc) = iVar2;
  local_2b8 = param_2;
  fmt::BasicWriter<char>::BasicWriter<char>(local_288);
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_1401a6bd0(param_1,local_78,param_3);
  puVar4 = (undefined8 *)fmt::BasicStringRef<char>::BasicStringRef<char>(local_2a0,pbVar3);
  local_2b8 = (undefined *)*puVar4;
  uStack_2b0 = puVar4[1];
  fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
  FUN_14003a830(local_78);
  if (*(char *)(param_1 + 0x5d0) != '\0') {
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0xb);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5d0));
  }
  if (*(char *)(param_1 + 0x5d2) != '\0') {
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x171);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5d2));
  }
  if (*(char *)(param_1 + 0x5d1) != '\0') {
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x3e);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5d1));
  }
  if (*(char *)(param_1 + 0x690) != '\0') {
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x57);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x690));
  }
  if (*(char *)(param_1 + 0x6dc) != '\0') {
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x11c);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6dc));
  }
  if (*(char *)(param_1 + 0x6f8) != '\0') {
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0xd);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6f8));
  }
  if (*(int *)(param_1 + 0x6fc) != 0) {
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x73);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x6fc));
  }
  if (*(int *)(param_1 + 0x700) != 0) {
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0xaa);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x700));
  }
  if (*(char *)(param_1 + 0x704) != '\0') {
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x75);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x704));
  }
  local_2b8 = &DAT_140533704;
  uStack_2b0 = 0;
  fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
  fmt::BasicWriter<char>::operator<<(local_288,0x24);
  local_2b8 = &DAT_140533704;
  uStack_2b0 = 0;
  fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
  fmt::BasicWriter<char>::operator<<(local_288,1);
  if (*(int *)(param_1 + 0x698) != 0) {
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x216);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x698));
  }
  if (*(char *)(param_1 + 0x738) != '\0') {
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x118);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x738));
  }
  if (*(char *)(param_1 + 0x739) != '\0') {
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x119);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x739));
  }
  if (*(int *)(param_1 + 0x3a0) == 0x1e) {
    if (*(int *)(param_1 + 0x5c8) != 0) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x33);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
    }
    if (*(char *)(param_1 + 0x6a7) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x4e);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a7));
    }
    if (*(char *)(param_1 + 0x6a8) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x17d);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a8));
    }
    if (*(char *)(param_1 + 0x6a9) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x17e);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a9));
    }
    if (*(char *)(param_1 + 0x675) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x38);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x675));
    }
    if (*(int *)(param_1 + 0x6a0) != 0) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x50);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x6a0));
    }
    if (*(int *)(param_1 + 0x6b0) != 0) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x17f);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x6b0));
    }
    if (*(int *)(param_1 + 0x6ac) != 0) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x1b8);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x6ac));
    }
    if (*(char *)(param_1 + 0x6b4) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x1cf);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6b4));
    }
  }
  iVar2 = *(int *)(param_1 + 0x40c);
  if (iVar2 < 0x543) {
    if (iVar2 == 0x542) {
      if (*(int *)(param_1 + 0x5c8) != 0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x33);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
      }
      if (*(int *)(param_1 + 0x5cc) != 0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x47);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5cc));
      }
      if (*(float *)(param_1 + 0x5bc) != 0.0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,10);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5bc));
      }
      if (*(int *)(param_1 + 0x5e8) != 0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x1e);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5e8));
      }
      if (*(float *)(param_1 + 0x5ec) != 0.0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x55);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5ec));
      }
      if (*(float *)(param_1 + 0x618) != 0.0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x44);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x618));
      }
      if (*(int *)(param_1 + 0x61c) != 0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x45);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x61c));
      }
      if (*(char *)(param_1 + 0x620) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x46);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x620));
      }
      if (*(char *)(param_1 + 0x6a4) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x8a);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a4));
      }
      if (*(char *)(param_1 + 0x6a5) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,200);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a5));
      }
      if (*(char *)(param_1 + 0x5f4) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,100);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5f4));
      }
      if (*(char *)(param_1 + 0x605) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x18a);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x605));
      }
      if (*(char *)(param_1 + 0x610) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x18d);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x610));
      }
      if (*(int *)(param_1 + 0x624) != 0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x191);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x624));
      }
      if (*(float *)(param_1 + 0x628) != 0.0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x192);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x628));
      }
      if (*(int *)(param_1 + 0x62c) != 0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x193);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x62c));
      }
      goto switchD_1404ac75f_caseD_e;
    }
    if (iVar2 < 0x2cf) {
      if (iVar2 != 0x2ce) {
        if (iVar2 < 0x70) {
          if (iVar2 != 0x6f) {
            switch(iVar2) {
            case 0xc:
            case 0xd:
            case 0x2f:
              break;
            default:
              goto switchD_1404ac75f_caseD_e;
            case 0x1d:
            case 0x1e:
            case 0x69:
              goto switchD_1404ac75f_caseD_1d;
            }
          }
        }
        else if (iVar2 < 0x120) {
          if (iVar2 != 0x11f) {
            if (iVar2 == 0x8e) {
LAB_1404adca6:
              if (*(int *)(param_1 + 0x710) != 0) {
                local_2b8 = &DAT_140533704;
                uStack_2b0 = 0;
                fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
                fmt::BasicWriter<char>::operator<<(local_288,0xc);
                local_2b8 = &DAT_140533704;
                uStack_2b0 = 0;
                fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
                fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x710));
              }
              goto LAB_1404add1a;
            }
            if (iVar2 == 0xdd) goto switchD_1404ac75f_caseD_1d;
            if (iVar2 != 0x11e) goto switchD_1404ac75f_caseD_e;
          }
        }
        else if (iVar2 != 0x294) {
          if (iVar2 != 0x2cd) goto switchD_1404ac75f_caseD_e;
          goto switchD_1404ac75f_caseD_1d;
        }
switchD_1404ac75f_caseD_c:
        if (*(char *)(param_1 + 0x6e4) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x6f);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6e4));
        }
        if (*(char *)(param_1 + 0x6e5) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x70);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6e5));
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x71);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x6e8));
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x72);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x6ec));
        }
        if (*(char *)(param_1 + 0x6f0) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x172);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6f0));
        }
        goto switchD_1404ac75f_caseD_e;
      }
      goto switchD_1404ac75f_caseD_1d;
    }
    if (0x393 < iVar2) {
      if (iVar2 != 0x3ee) {
        if (iVar2 == 0x3ef) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x33);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,10);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5bc));
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x23);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fVar6 = *(float *)(param_1 + 0x5c0);
          goto LAB_1404b12df;
        }
        if (iVar2 == 0x419) goto LAB_1404af536;
        if (iVar2 == 0x531) goto LAB_1404adca6;
        if (iVar2 != 0x533) goto switchD_1404ac75f_caseD_e;
        goto switchD_1404ac75f_caseD_c;
      }
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x33);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
      if (*(float *)(param_1 + 0x648) != 0.0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x2d);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x648));
      }
      if (*(float *)(param_1 + 0x64c) != 0.0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x2e);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x64c));
      }
      if (*(float *)(param_1 + 0x650) != 0.0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x2f);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x650));
      }
      if (*(int *)(param_1 + 0x654) != 0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x30);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x654));
      }
      if (*(int *)(param_1 + 0x658) != 0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x34);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x658));
      }
      if (*(char *)(param_1 + 0x671) == '\0') {
        if (*(char *)(param_1 + 0x672) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x42);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          bVar1 = *(byte *)(param_1 + 0x672);
          goto LAB_1404ae282;
        }
      }
      else {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x41);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        bVar1 = *(byte *)(param_1 + 0x671);
LAB_1404ae282:
        fmt::BasicWriter<char>::operator<<(local_288,(uint)bVar1);
      }
      if (*(char *)(param_1 + 0x673) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x56);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x673));
      }
      if (*(char *)(param_1 + 0x674) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0xd2);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x674));
      }
      if (*(int *)(param_1 + 0x654) == 0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,7);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5b9));
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,8);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5ba));
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,9);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5bb));
      }
      else if (*(int *)(param_1 + 0x654) == 1) {
        if ((((*(float *)(param_1 + 0x65c) != _DAT_1406ba270) ||
             (*(float *)(param_1 + 0x660) != _DAT_1406ba274)) ||
            (*(float *)(param_1 + 0x664) != _DAT_1406ba278)) ||
           ((*(char *)(param_1 + 0x668) != DAT_1406ba27c ||
            (*(char *)(param_1 + 0x669) != DAT_1406ba27d)))) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x31);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          local_2b8 = *(undefined **)(param_1 + 0x65c);
          uStack_2b0 = *(undefined8 *)(param_1 + 0x664);
          pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   FUN_140065720(local_78,&local_2b8,&DAT_140531e8c);
          puVar4 = (undefined8 *)fmt::BasicStringRef<char>::BasicStringRef<char>(local_2a0,pbVar3);
          local_2b8 = (undefined *)*puVar4;
          uStack_2b0 = puVar4[1];
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          FUN_14003a830(local_78);
        }
        if (*(int *)(param_1 + 0x66c) != 0) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x32);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x66c));
        }
      }
      goto switchD_1404ac75f_caseD_e;
    }
    if (iVar2 == 0x393) {
switchD_1404ac75f_caseD_1d:
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,7);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5b9));
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,8);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5ba));
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,9);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5bb));
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,10);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5bc));
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x23);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5c0));
      if (*(char *)(param_1 + 0x5dc) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0xe);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,1);
      }
      if (*(char *)(param_1 + 0x5dd) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0xf);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,1);
      }
      if (*(char *)(param_1 + 0x5de) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x10);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,1);
      }
      if (*(char *)(param_1 + 0x5df) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x11);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,1);
      }
      if (*(char *)(param_1 + 0x670) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x3c);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,1);
      }
      if (1 < *(int *)(param_1 + 0x408)) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x17);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x408));
      }
      if (*(int *)(param_1 + 0x66c) != 0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x32);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x66c));
        if (((*(float *)(param_1 + 0x65c) != _DAT_1406ba270) ||
            (*(float *)(param_1 + 0x660) != _DAT_1406ba274)) ||
           ((*(float *)(param_1 + 0x664) != _DAT_1406ba278 ||
            ((*(char *)(param_1 + 0x668) != DAT_1406ba27c ||
             (*(char *)(param_1 + 0x669) != DAT_1406ba27d)))))) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x31);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          local_2b8 = *(undefined **)(param_1 + 0x65c);
          uStack_2b0 = *(undefined8 *)(param_1 + 0x664);
          pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   FUN_140065720(local_78,&local_2b8,&DAT_140531e8c);
          puVar4 = (undefined8 *)fmt::BasicStringRef<char>::BasicStringRef<char>(local_2a0,pbVar3);
          local_2b8 = (undefined *)*puVar4;
          uStack_2b0 = puVar4[1];
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          FUN_14003a830(local_78);
        }
        if (*(char *)(param_1 + 0x674) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0xd2);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x674));
        }
      }
    }
    else {
      switch(iVar2) {
      case 0x2e7:
      case 0x2e8:
      case 899:
      case 900:
        goto switchD_1404ac75f_caseD_1d;
      case 0x2e9:
        goto switchD_1404ac75f_caseD_c;
      case 0x385:
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x33);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x1c);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5e0));
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x1d);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5e4));
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,10);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5bc));
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x1e);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5e8));
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x55);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5ec));
        if (*(char *)(param_1 + 0x5f0) == '\0') {
          if (*(char *)(param_1 + 0x5f2) != '\0') {
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,0x8d);
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,1);
          }
        }
        else {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x3a);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,1);
        }
        if (*(char *)(param_1 + 0x5f1) == '\0') {
          if (*(char *)(param_1 + 0x5f3) != '\0') {
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,0x8e);
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,1);
          }
        }
        else {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x3b);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,1);
        }
        if (((*(char *)(param_1 + 0x5f0) != '\0') || (*(char *)(param_1 + 0x5f2) != '\0')) &&
           ((*(float *)(param_1 + 0x5fc) != DAT_140622c24 && (*(float *)(param_1 + 0x5fc) != 0.0))))
        {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x8f);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5fc));
        }
        if ((((*(char *)(param_1 + 0x5f1) != '\0') || (*(char *)(param_1 + 0x5f3) != '\0')) &&
            (*(float *)(param_1 + 0x600) != DAT_140622c24)) && (*(float *)(param_1 + 0x600) != 0.0))
        {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x90);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x600));
        }
        if ((*(char *)(param_1 + 0x5f4) != '\0') || (*(char *)(param_1 + 0x605) != '\0')) {
          if (*(int *)(param_1 + 0x5cc) != 0) {
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,0x47);
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5cc));
          }
          if (*(int *)(param_1 + 0x608) != 0) {
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,0x18b);
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x608));
          }
          if (*(char *)(param_1 + 0x6a4) != '\0') {
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,0x8a);
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a4));
          }
          if (*(char *)(param_1 + 0x6a5) != '\0') {
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,200);
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a5));
          }
          if (*(char *)(param_1 + 0x5f4) == '\0') {
            if (*(char *)(param_1 + 0x605) != '\0') {
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,0x18a);
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x605));
              if (*(float *)(param_1 + 0x60c) != 0.0) {
                local_2b8 = &DAT_140533704;
                uStack_2b0 = 0;
                fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
                fmt::BasicWriter<char>::operator<<(local_288,0x18c);
                local_2b8 = &DAT_140533704;
                uStack_2b0 = 0;
                fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
                fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x60c));
              }
            }
          }
          else {
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,100);
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5f4));
            if (*(int *)(param_1 + 0x5f8) != 0) {
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,0x65);
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5f8));
            }
          }
        }
        if (*(char *)(param_1 + 0x604) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x189);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x604));
        }
        if (*(char *)(param_1 + 0x605) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x18a);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x605));
        }
        if (*(char *)(param_1 + 0x610) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x18d);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x610));
        }
        if (*(char *)(param_1 + 0x611) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x220);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x611));
        }
      }
    }
    goto switchD_1404ac75f_caseD_e;
  }
  if (iVar2 < 0x715) {
    if (iVar2 == 0x714) {
LAB_1404af536:
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x33);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
      if (*(char *)(param_1 + 0x675) != '\0') {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x38);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x675));
      }
      goto switchD_1404ac75f_caseD_e;
    }
    if (iVar2 == 0x543) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x33);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x47);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5cc));
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,10);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5bc));
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x48);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x630));
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x49);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fVar6 = *(float *)(param_1 + 0x634);
    }
    else {
      if (iVar2 != 0x5f0) {
        if (iVar2 != 0x631) {
          if (iVar2 == 0x63b) {
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,0x33);
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
            if (*(char *)(param_1 + 0x675) != '\0') {
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,0x38);
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x675));
            }
            if (*(char *)(param_1 + 0x676) != '\0') {
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,0x51);
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x676));
            }
            if (0 < *(int *)(param_1 + 0x678)) {
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,0x52);
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x678));
            }
            if (0 < *(int *)(param_1 + 0x67c)) {
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,0xc6);
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x67c));
            }
            if (*(char *)(param_1 + 0x680) != '\0') {
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,0x59);
              local_2b8 = &DAT_140533704;
              uStack_2b0 = 0;
              fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
              fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x680));
            }
          }
          goto switchD_1404ac75f_caseD_e;
        }
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x33);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
LAB_1404af141:
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x4c);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x684));
        goto switchD_1404ac75f_caseD_e;
      }
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,10);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5bc));
      if (0.0 < *(float *)(param_1 + 0x5d4)) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x4b);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5d4));
      }
      if (*(float *)(param_1 + 0x5d8) <= 0.0) goto switchD_1404ac75f_caseD_e;
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x54);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fVar6 = *(float *)(param_1 + 0x5d8);
    }
    goto LAB_1404b12df;
  }
  if (0xb55 < iVar2) {
    if (iVar2 < 0xe1a) {
      if (iVar2 == 0xe19) {
        if (*(int *)(param_1 + 0x5c8) != 0) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x33);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
        }
        if (*(int *)(param_1 + 0x5cc) != 0) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x47);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5cc));
        }
        if (*(int *)(param_1 + 0x6a0) != 0) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x50);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x6a0));
        }
        if (*(int *)(param_1 + 0x694) != 0) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x5f);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x694));
        }
        if (*(char *)(param_1 + 0x6a4) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x8a);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a4));
        }
        if (*(char *)(param_1 + 0x6a5) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,200);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a5));
        }
        if (*(char *)(param_1 + 0x6a6) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0xc9);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a6));
        }
        if (*(char *)(param_1 + 0x716) != '\0') {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,600);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x716));
        }
        goto switchD_1404ac75f_caseD_e;
      }
      if (iVar2 == 0xb6d) goto switchD_1404ac75f_caseD_c;
      if (iVar2 == 2999) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x1d);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fVar6 = *(float *)(param_1 + 0x5e4);
        goto LAB_1404aff23;
      }
      if (iVar2 == 0xbd9) {
        if (*(int *)(param_1 + 0x5c8) != 0) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x33);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
        }
        if (*(int *)(param_1 + 0x5cc) != 0) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x47);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5cc));
        }
        if (*(int *)(param_1 + 0x684) == 0) goto switchD_1404ac75f_caseD_e;
        goto LAB_1404af141;
      }
      if (iVar2 != 0xe16) {
        if (iVar2 != 0xe18) goto switchD_1404ac75f_caseD_e;
        if (*(int *)(param_1 + 0x5c8) != 0) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x33);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
        }
        if (*(int *)(param_1 + 0x5cc) != 0) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x47);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5cc));
        }
        if (*(float *)(param_1 + 0x5e0) != 0.0) {
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,0x1c);
          local_2b8 = &DAT_140533704;
          uStack_2b0 = 0;
          fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
          fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5e0));
        }
        if (*(float *)(param_1 + 0x5e4) == 0.0) goto switchD_1404ac75f_caseD_e;
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x1d);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fVar6 = *(float *)(param_1 + 0x5e4);
        goto LAB_1404b12df;
      }
    }
    else if (iVar2 != 0xe1c) {
      if (iVar2 != 0xe22) {
        if (iVar2 == 0xe38) {
          if (*(int *)(param_1 + 0x5c8) != 0) {
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,0x33);
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
          }
          if (*(int *)(param_1 + 0x5cc) != 0) {
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,0x47);
            local_2b8 = &DAT_140533704;
            uStack_2b0 = 0;
            fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
            fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5cc));
          }
          goto switchD_1404ac75f_caseD_e;
        }
        if (iVar2 != 0xe4e) goto switchD_1404ac75f_caseD_e;
      }
LAB_1404add1a:
      if (*(int *)(param_1 + 0x5c8) != 0) {
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,0x33);
        local_2b8 = &DAT_140533704;
        uStack_2b0 = 0;
        fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
        fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
      }
      goto switchD_1404ac75f_caseD_e;
    }
    if (*(float *)(param_1 + 0x5fc) != 0.0) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x8f);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5fc));
    }
    if (*(float *)(param_1 + 0x600) == 0.0) goto switchD_1404ac75f_caseD_e;
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x90);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fVar6 = *(float *)(param_1 + 0x600);
    goto LAB_1404b12df;
  }
  if (iVar2 == 0xb55) {
    if (*(float *)(param_1 + 0x5e0) != 0.0) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x1c);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5e0));
    }
    if (*(float *)(param_1 + 0x5e4) != 0.0) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x1d);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5e4));
    }
    if (*(int *)(param_1 + 0x5f8) != 0) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x65);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5f8));
    }
    if (*(char *)(param_1 + 0x5f0) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x3a);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5f0));
    }
    if (*(char *)(param_1 + 0x5f1) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x3b);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5f1));
    }
    goto switchD_1404ac75f_caseD_e;
  }
  switch(iVar2) {
  case 0x716:
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x33);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
    if (0.0 < *(float *)(param_1 + 0x5bc)) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,10);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5bc));
    }
    if (0.0 < *(float *)(param_1 + 0x638)) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x5a);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x638));
    }
    if (0.0 < *(float *)(param_1 + 0x63c)) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x5b);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x63c));
    }
    if (*(int *)(param_1 + 0x640) != 0) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x5c);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x640));
    }
    if (*(float *)(param_1 + 0x644) <= 0.0) break;
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x69);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fVar6 = *(float *)(param_1 + 0x644);
    goto LAB_1404b12df;
  case 0x717:
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x33);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,10);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5bc));
    if (*(char *)(param_1 + 0x675) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x38);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x675));
    }
    if (0 < *(int *)(param_1 + 0x6a0)) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x50);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x6a0));
    }
    if (0 < *(int *)(param_1 + 0x694)) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x5f);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x694));
    }
    if (*(char *)(param_1 + 0x693) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x5d);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x693));
    }
    if (*(char *)(param_1 + 0x6a4) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x8a);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a4));
    }
    if (*(char *)(param_1 + 0x6a5) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,200);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a5));
    }
    if (*(char *)(param_1 + 0x6a6) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0xc9);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a6));
    }
    break;
  case 0x718:
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x50);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x6a0));
    if (*(char *)(param_1 + 0x69d) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x5e);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x69d));
    }
    break;
  case 0x778:
    if (*(int *)(param_1 + 0x5c8) != 0) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x33);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
    }
    if (*(int *)(param_1 + 0x5cc) != 0) {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x47);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5cc));
    }
    if (*(float *)(param_1 + 0x5bc) == 0.0) break;
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,10);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fVar6 = *(float *)(param_1 + 0x5bc);
    goto LAB_1404b12df;
  case 0x779:
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x173);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fVar6 = *(float *)(param_1 + 0x6e0);
LAB_1404aff23:
    fmt::BasicWriter<char>::operator<<(local_288,(double)fVar6);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,10);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x5bc));
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x1e);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5e8));
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x55);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fVar6 = *(float *)(param_1 + 0x5ec);
    goto LAB_1404b12df;
  case 0x78b:
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x33);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,*(int *)(param_1 + 0x5c8));
    if (*(char *)(param_1 + 0x6f1) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x76);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6f1));
    }
    if (*(char *)(param_1 + 0x5f1) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x3b);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,1);
    }
    break;
  case 0x78c:
    if (*(char *)(param_1 + 0x6a4) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x8a);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a4));
    }
    if (*(char *)(param_1 + 0x6a5) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,200);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a5));
    }
    if (*(char *)(param_1 + 0x5f0) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x3a);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5f0));
    }
    if (*(char *)(param_1 + 0x5f1) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x3b);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5f1));
    }
    if (*(char *)(param_1 + 0x5f2) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x8d);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x5f2));
    }
    break;
  case 0x78d:
    goto switchD_1404ac75f_caseD_c;
  case 0x78f:
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x78);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fVar6 = *(float *)(param_1 + 0x6f4);
LAB_1404b12df:
    fmt::BasicWriter<char>::operator<<(local_288,(double)fVar6);
    break;
  case 0x812:
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,0x94);
    local_2b8 = &DAT_140533704;
    uStack_2b0 = 0;
    fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
    fmt::BasicWriter<char>::operator<<(local_288,(double)*(float *)(param_1 + 0x6d8));
    if (*(char *)(param_1 + 0x6a4) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0x8a);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a4));
    }
    if (*(char *)(param_1 + 0x6a5) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,200);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a5));
    }
    if (*(char *)(param_1 + 0x6a6) != '\0') {
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,0xc9);
      local_2b8 = &DAT_140533704;
      uStack_2b0 = 0;
      fmt::BasicWriter<char>::operator<<(local_288,&local_2b8);
      fmt::BasicWriter<char>::operator<<(local_288,(uint)*(byte *)(param_1 + 0x6a6));
    }
  }
switchD_1404ac75f_caseD_e:
  pcVar5 = fmt::BasicWriter<char>::c_str(local_288);
  FUN_14003a7f0(param_2,pcVar5);
  fmt::BasicWriter<char>::~BasicWriter<char>(local_288);
  return param_2;
}

