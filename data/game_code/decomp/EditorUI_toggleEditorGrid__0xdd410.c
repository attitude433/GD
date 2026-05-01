// EditorUI_toggleEditorGrid @ 0xdd410
// Body: 70 bytes


void FUN_1400dd410(void)

{
  undefined8 uVar1;
  
  if (DAT_1406c2ed8 == (longlong *)0x0) {
    uVar1 = FUN_1404d0770(0x668);
    DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar1);
    (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
  }
  FUN_140183290();
  return;
}

