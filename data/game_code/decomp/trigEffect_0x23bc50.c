// Called from triggerObject base / 0x4bc180
// Function: FUN_14023bc50 @ 0x23bc50


void FUN_14023bc50(longlong param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  
  if (((0.0 < param_2) && (0.0 < param_3)) && (*(char *)(param_1 + 0x3249) == '\0')) {
    *(undefined8 *)(param_1 + 0x530) = 0;
    cocos2d::CCPoint::operator=((CCPoint *)(param_1 + 0x538),(CCPoint *)&DAT_1406c1d28);
    fVar1 = DAT_1406232bc;
    if (param_3 <= DAT_1406232bc) {
      fVar1 = param_3;
    }
    *(float *)(param_1 + 0x520) = param_2;
    *(undefined4 *)(param_1 + 0x528) = param_4;
    *(undefined1 *)(param_1 + 0x3248) = 0;
    *(float *)(param_1 + 0x524) = fVar1;
  }
  return;
}

