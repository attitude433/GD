// GJBaseGameLayer_createPlayerCollisionBlock @ 0x218370


void FUN_140218370(longlong *param_1)

{
  CCObject *this;
  CCPoint *pCVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  CCPoint local_res10 [8];
  CCPoint local_res18 [16];
  char *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_1[0x614] == 0) {
    iVar4 = 0;
    do {
      this = (CCObject *)FUN_14018b7d0(0x718);
      cocos2d::CCObject::retain(this);
      (**(code **)(*(longlong *)this + 0x448))(this);
      local_38 = 0;
      local_30 = 0xf;
      local_48 = (char *)0x0;
      uStack_40 = 0;
      local_48 = (char *)FUN_14003aa10(0x20);
      uVar2 = s_edit_eCollisionBlock01_001_png_140565d18._8_8_;
      local_38 = 0x1e;
      local_30 = 0x1f;
      *(undefined8 *)local_48 = s_edit_eCollisionBlock01_001_png_140565d18._0_8_;
      *(undefined8 *)(local_48 + 8) = uVar2;
      *(undefined8 *)(local_48 + 0x10) = s_edit_eCollisionBlock01_001_png_140565d18._16_8_;
      *(undefined4 *)(local_48 + 0x18) = s_edit_eCollisionBlock01_001_png_140565d18._24_4_;
      *(undefined2 *)(local_48 + 0x1c) = s_edit_eCollisionBlock01_001_png_140565d18._28_2_;
      local_48[0x1e] = '\0';
      FUN_14018e7b0(this,&local_48);
      local_38 = 0;
      local_30 = 0xf;
      local_48 = (char *)0x0;
      uStack_40 = 0;
      local_48 = (char *)FUN_14003aa10(0x20);
      uVar2 = s_edit_eCollisionBlock01_001_png_140565d18._8_8_;
      local_38 = 0x1e;
      local_30 = 0x1f;
      *(undefined8 *)local_48 = s_edit_eCollisionBlock01_001_png_140565d18._0_8_;
      *(undefined8 *)(local_48 + 8) = uVar2;
      *(undefined8 *)(local_48 + 0x10) = s_edit_eCollisionBlock01_001_png_140565d18._16_8_;
      *(undefined4 *)(local_48 + 0x18) = s_edit_eCollisionBlock01_001_png_140565d18._24_4_;
      *(undefined2 *)(local_48 + 0x1c) = s_edit_eCollisionBlock01_001_png_140565d18._28_2_;
      local_48[0x1e] = '\0';
      (**(code **)(*(longlong *)this + 0x450))(this,&local_48);
      if (iVar4 == 0) {
        param_1[0x614] = (longlong)this;
        *(undefined4 *)(this + 0x6a0) = 10000;
        lVar5 = *(longlong *)param_1[0x614];
        pCVar1 = (CCPoint *)(**(code **)(*(longlong *)param_1[0x1b4] + 200))();
        uVar2 = cocos2d::CCPoint::CCPoint(local_res10,pCVar1);
        lVar3 = param_1[0x614];
      }
      else {
        param_1[0x615] = (longlong)this;
        *(undefined4 *)(this + 0x6a0) = 0x2711;
        lVar5 = *(longlong *)param_1[0x615];
        pCVar1 = (CCPoint *)(**(code **)(*(longlong *)param_1[0x1b5] + 200))();
        uVar2 = cocos2d::CCPoint::CCPoint(local_res18,pCVar1);
        lVar3 = param_1[0x615];
      }
      (**(code **)(lVar5 + 0x4b0))(lVar3,uVar2);
      this[0x22f] = (CCObject)0x1;
      this[0x51f] = (CCObject)0x1;
      (**(code **)(*param_1 + 0x478))(param_1,this);
      cocos2d::CCArray::addObject((CCArray *)param_1[0x1b8],this);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  }
  return;
}

