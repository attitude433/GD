// FUN_140398430 @ 0x398430


void FUN_140398430(longlong *param_1,longlong *param_2)

{
  CCPoint *pCVar1;
  float local_res8;
  float local_resc;
  CCPoint local_res18 [8];
  CCPoint local_res20 [8];
  undefined1 local_28 [16];
  
  if ((char)param_1[0x16e] == '\0') {
    if ((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x562) != '\0')) {
      cocos2d::CCPoint::CCPoint
                (local_res20,(float)(double)param_1[0x13a],(float)(double)param_1[0x13a]);
      pCVar1 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
      cocos2d::CCPoint::operator+(pCVar1,local_res18);
      pCVar1 = (CCPoint *)(**(code **)(*param_2 + 0x4a8))(param_2,local_28);
      cocos2d::CCPoint::operator-(pCVar1,(CCPoint *)&local_res8);
      if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
        local_resc = local_res8;
      }
      param_1[0x13a] = (longlong)((double)(local_resc + local_resc) + (double)param_1[0x13a]);
    }
    FUN_140398510(param_1,*(char *)((longlong)param_1 + 0x9c2) == '\0');
  }
  return;
}

