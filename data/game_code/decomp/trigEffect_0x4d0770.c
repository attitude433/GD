// Called from triggerObject base / 0x4bc180
// Function: FUN_1404d0770 @ 0x4d0770


void FUN_1404d0770(size_t param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  do {
    pvVar3 = malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return;
    }
    iVar2 = _callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140007ab0();
  }
  FUN_1404d126c();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

