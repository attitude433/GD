// FUN_140212b00 @ 0x212b00


void FUN_140212b00(longlong param_1,longlong param_2,byte param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(byte *)(param_2 + 0x9bf) != param_3) {
    FUN_14039a1d0(param_2,param_3,param_4);
    if (((*(char *)(param_1 + 0x860) == '\0') && (*(char *)(param_1 + 0x422) != '\0')) &&
       (*(char *)(*(longlong *)(param_1 + 0xdb0) + 0x154) == '\0')) {
      lVar1 = *(longlong *)(param_1 + 0xda8);
      lVar2 = *(longlong *)(param_1 + 0xda0);
      if ((((*(char *)(lVar2 + 0x9b9) == *(char *)(lVar1 + 0x9b9)) &&
           (*(char *)(lVar2 + 0x9bb) == *(char *)(lVar1 + 0x9bb))) &&
          ((*(char *)(lVar2 + 0x9ba) == *(char *)(lVar1 + 0x9ba) &&
           ((*(char *)(lVar2 + 0x9be) == *(char *)(lVar1 + 0x9be) &&
            (*(char *)(lVar2 + 0x9bd) == *(char *)(lVar1 + 0x9bd))))))) &&
         (*(char *)(lVar2 + 0x9c4) == *(char *)(lVar1 + 0x9c4))) {
        if (*(int *)(param_2 + 0x39c) == *(int *)(lVar2 + 0x39c)) {
          lVar2 = lVar1;
        }
        FUN_14039a1d0(lVar2,param_3 ^ 1,param_4);
      }
    }
  }
  return;
}

