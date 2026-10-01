//// FUNCTION FUN_0069ab50 @ 0069ab50 ////

void __thiscall FUN_0069ab50(void *this,char *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  size_t sVar7;
  float local_74;
  undefined4 local_70;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar3 = FUN_00430950((undefined4 *)((int)this + 0x3a0),param_1);
  if (bVar3) {
    iVar2 = *(int *)((int)this + 0x35c);
    local_70 = *(undefined4 *)(*(int *)(iVar2 + 0x47c) + 0x9c);
    local_74 = (*(float *)(iVar2 + 0x108) - *(float *)(iVar2 + 0xc0)) * param_2 +
               *(float *)(iVar2 + 0xc0);
    FUN_00747290(*(void **)((int)this + 0x2d4),&local_74);
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_4c,param_1,(int)pcVar4 - (int)(param_1 + 1));
    local_4 = 0;
    puVar5 = FUN_009b5030(local_2c,&local_4c);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00526220(0,&local_74,puVar5,(undefined4 *)((int)this + 0x380));
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 10;
    uVar6 = FUN_00ace02d(L"<p align=left><shadow><t2 color=#ffffff><translate>");
    FUN_004036d0(&local_6c,L"<p align=left><shadow><t2 color=#ffffff><translate>",uVar6);
    local_4 = 2;
    puVar5 = FUN_005686a0(local_2c,param_1);
    FUN_0040cae0(&local_6c,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    sVar7 = FUN_00ace02d(L"</translate></t2></shadow></p>");
    FUN_0040cae0(&local_6c,L"</translate></t2></shadow></p>",sVar7);
    (**(code **)(**(int **)((int)this + 0x39c) + 0x54))(&local_6c);
    (**(code **)(**(int **)((int)this + 0x39c) + 0x8c))(0);
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0((undefined4 *)((int)this + 0x3a0),param_1,(int)pcVar4 - (int)(param_1 + 1));
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0069ad70 @ 0069ad70 ////

void __cdecl FUN_0069ad70(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_3;
        *param_3 = &PTR_FUN_00d2d110;
        iVar2 = *(int *)(param_1 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 0x18;
      param_3 = param_3 + 6;
      puVar3 = puVar3 + 6;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_0069ade0 @ 0069ade0 ////

void __cdecl FUN_0069ade0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    puVar3 = param_1 + 2;
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_1;
        *param_1 = &PTR_FUN_00d2d110;
        iVar2 = *(int *)(param_3 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 6;
      puVar3 = puVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_0069af30 @ 0069af30 ////

undefined4 * FUN_0069af30(undefined4 *param_1,int param_2,int param_3)

{
  FUN_0069ade0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0069af60 @ 0069af60 ////

void FUN_0069af60(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_005ec7f0(param_1);
  }
  return;
}


//// FUNCTION FUN_0069af90 @ 0069af90 ////

void FUN_0069af90(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8388;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_0069b050 @ 0069b050 ////

void __fastcall FUN_0069b050(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_005ec7f0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0069b0a0 @ 0069b0a0 ////

void __thiscall FUN_0069b0a0(void *this,int *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined ***local_28;
  int local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00cc83a8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d2d110;
  ExceptionList = &local_10;
  if (local_20 != 0) {
    local_2c = (int *)(local_20 + 0x18);
    local_30 = *local_2c;
    ExceptionList = &local_10;
    *(int **)(*local_2c + 4) = &local_30;
    *local_2c = (int)&local_30;
  }
  iVar3 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar3 != 0) {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x18;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    local_18 = this;
    puVar1 = &stack0xffffffc0;
    if (0xaaaaaaaU - iVar2 < param_2) {
      FUN_0069af90();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0xaaaaaaa - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x18;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_0069a150((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_0069ad70(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_0069ade0(puVar5,param_2,(int)&local_34);
      FUN_0069ad70((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0069af60(puVar5,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 6;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 6;
      *(undefined4 **)((int)this + 4) = puVar4;
    }
    else {
      puVar5 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar5 - (int)param_1) / 0x18) < param_2) {
        FUN_0069ad70((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0069af30(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_0069a550(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_0069ad70((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_0069a250((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_0069a550(param_1,param_1 + param_2 * 6,(int)&local_34);
      }
    }
  }
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0069b3f0 @ 0069b3f0 ////

void __thiscall FUN_0069b3f0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0069b435;
    }
  }
  iVar1 = 0;
LAB_0069b435:
  FUN_0069b0a0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_0069b460 @ 0069b460 ////

undefined4 * __fastcall FUN_0069b460(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  int *piVar3;
  uint **local_30;
  undefined **local_2c;
  uint local_28;
  uint *local_24;
  undefined ***local_20;
  void *pvStack_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc843b;
  pvStack_c = ExceptionList;
  local_30 = &local_24;
  local_24 = (uint *)((uint)local_24 & 0xffffff00);
  local_2c = (undefined **)0x0;
  local_28 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy((char *)local_30,"ui/slider.dds",0xd);
  local_2c = (undefined **)0xd;
  *(char *)((int)local_30 + 0xd) = '\0';
  local_4 = 0;
  FUN_005f32e0(param_1,&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  *param_1 = &PTR_FUN_00d394ec;
  param_1[0x14] = &PTR_FUN_00d394d4;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0xffffffff;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x124] = 0;
  param_1[0x45] = param_1[0x45] | 4;
  local_4._0_1_ = 4;
  FUN_005f2d90(param_1,0,0,0,0,0x3e800000,0x3e800000);
  FUN_005f2d90(param_1,0,1,0x3e800000,0,0x3f000000,0x3e800000);
  FUN_005f2d90(param_1,0,2,0x3f400000,0,0x3f800000,0x3e800000);
  puVar2 = operator_new(0x358);
  local_4._0_1_ = 5;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_006898b0(puVar2);
  }
  param_1[0x11f] = puVar2;
  local_24 = param_1 + 6;
  local_30 = (uint **)0x1;
  local_20 = &local_2c;
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = *local_24;
  *(uint **)(*local_24 + 4) = &local_28;
  *local_24 = (uint)&local_28;
  local_14 = 0;
  local_10 = 0;
  iVar1 = param_1[0x11f];
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  local_4._0_1_ = 6;
  local_18 = param_1;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(undefined4 **)(iVar1 + 0x94) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = local_14;
  *(undefined4 *)(iVar1 + 0x9c) = local_10;
  if (local_24 != (uint *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(uint **)(local_28 + 4) = local_24;
  }
  local_20 = &local_2c;
  local_24 = param_1 + 6;
  local_30 = (uint **)0x2;
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = *local_24;
  *(uint **)(*local_24 + 4) = &local_28;
  *local_24 = (uint)&local_28;
  local_14 = 0;
  local_10 = 0;
  iVar1 = param_1[0x11f];
  *(undefined4 *)(iVar1 + 0xc4) = 2;
  local_4._0_1_ = 7;
  local_18 = param_1;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(undefined4 **)(iVar1 + 0xdc) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = local_14;
  *(undefined4 *)(iVar1 + 0xe4) = local_10;
  if (local_24 != (uint *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(uint **)(local_28 + 4) = local_24;
  }
  local_20 = &local_2c;
  local_24 = param_1 + 6;
  local_30 = (uint **)0x1;
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = *local_24;
  *(uint **)(*local_24 + 4) = &local_28;
  *local_24 = (uint)&local_28;
  local_14 = 0;
  local_10 = 0;
  iVar1 = param_1[0x11f];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  local_4._0_1_ = 8;
  local_18 = param_1;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(undefined4 **)(iVar1 + 0xb8) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = local_14;
  *(undefined4 *)(iVar1 + 0xc0) = local_10;
  if (local_24 != (uint *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(uint **)(local_28 + 4) = local_24;
  }
  local_18 = (undefined4 *)param_1[0x11f];
  local_20 = &local_2c;
  local_30 = (uint **)0x1;
  local_28 = 0;
  local_24 = (uint *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  if (local_18 != (undefined4 *)0x0) {
    local_24 = (uint *)((int)local_18 + 0x18);
    local_28 = *local_24;
    *(uint **)(*local_24 + 4) = &local_28;
    *local_24 = (uint)&local_28;
  }
  local_14 = 0x42000000;
  local_10 = 0x42000000;
  iVar1 = param_1[0x11f];
  *(undefined4 *)(iVar1 + 0xe8) = 1;
  local_4._0_1_ = 9;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(undefined4 **)(iVar1 + 0x100) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = local_14;
  *(undefined4 *)(iVar1 + 0x108) = local_10;
  local_4._0_1_ = 4;
  if (local_24 != (uint *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(uint **)(local_28 + 4) = local_24;
  }
  FUN_0073f6e0(param_1,(int *)param_1[0x11f]);
  this = operator_new(0x360);
  if (this == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    local_30 = &local_24;
    local_24 = (uint *)((uint)local_24 & 0xffffff00);
    local_2c = (undefined **)0x0;
    local_28 = 0x14;
    _strncpy((char *)local_30,"ui/slider.dds",0xd);
    local_2c = (undefined **)0xd;
    *(char *)((int)local_30 + 0xd) = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xb);
    piVar3 = FUN_0069d820(this,&local_30,0,0x3e800000,0x3e800000,0x3f000000);
  }
  local_4 = 4;
  if ((this != (void *)0x0) && (0x14 < local_28)) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  (**(code **)(*piVar3 + 0x70))();
  (**(code **)(*(int *)param_1[0x11f] + 0xc))();
  FUN_0073f490(param_1,32.0);
  *(undefined1 *)(param_1 + 0x127) = 0;
  ExceptionList = pvStack_1c;
  return param_1;
}


//// FUNCTION FUN_0069b990 @ 0069b990 ////

void __thiscall FUN_0069b990(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0069ade0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0069b3f0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0069ba20 @ 0069ba20 ////

undefined4 * __thiscall FUN_0069ba20(void *this,byte param_1)

{
  FUN_0069ba40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0069ba40 @ 0069ba40 ////

void __fastcall FUN_0069ba40(undefined4 *param_1)

{
  FUN_0069b050((int)(param_1 + 0x120));
  if ((undefined4 *)param_1[0x11b] != (undefined4 *)0x0) {
    FUN_00481090((undefined4 *)param_1[0x11b],(undefined4 *)param_1[0x11c]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11b]);
  }
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  FUN_005f3230(param_1);
  return;
}


//// FUNCTION FUN_0069baa0 @ 0069baa0 ////

void __thiscall FUN_0069baa0(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  void *this_00;
  int *piVar4;
  int iVar5;
  bool bVar6;
  float unaff_ESI;
  int unaff_EDI;
  int iStack_50;
  undefined **ppuStack_44;
  int iStack_40;
  int *piStack_3c;
  undefined ***pppuStack_38;
  int *piStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc847c;
  pvStack_c = ExceptionList;
  bVar6 = false;
  piVar4 = *(int **)((int)this + 0x484);
  ExceptionList = &pvStack_c;
  ppvVar3 = &pvStack_c;
  if (piVar4 != *(int **)((int)this + 0x488)) {
    do {
      puVar2 = (undefined4 *)piVar4[5];
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)();
        }
        (**(code **)(*piVar4 + 4))();
        piVar4[5] = 0;
        (**(code **)*piVar4)();
      }
      piVar4 = piVar4 + 6;
      ppvVar3 = ExceptionList;
    } while (piVar4 != *(int **)((int)this + 0x488));
  }
  ExceptionList = ppvVar3;
  piVar4 = *(int **)((int)this + 0x47c);
  *(int *)((int)this + 0x498) = param_1;
  (**(code **)(*(int *)this + 0x10))();
  (**(code **)(*piVar4 + 0x10))();
  iStack_50 = 0;
  if (0 < *(int *)((int)this + 0x498)) {
    do {
      this_00 = operator_new(0x360);
      uStack_4 = 0;
      if (this_00 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        pcStack_2c = acStack_20;
        acStack_20[0] = '\0';
        uStack_28 = 0;
        uStack_24 = 0x14;
        _strncpy(pcStack_2c,"ui/slider.dds",0xd);
        uStack_28 = 0xd;
        pcStack_2c[0xd] = '\0';
        bVar6 = true;
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        piVar4 = FUN_0069d820(this_00,&pcStack_2c,0x3e8c0000,0x3e800000,0x3ebc0000,0x3f000000);
      }
      uStack_4 = 0xffffffff;
      if ((bVar6) && (bVar6 = false, 0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_2c);
      }
      (**(code **)(*piVar4 + 0x74))();
      (**(code **)(*piVar4 + 100))(1);
      (**(code **)(*piVar4 + 0x5c))
                (1,this,((((float)unaff_EDI + 0.5) / (float)*(int *)((int)this + 0x498)) * unaff_ESI
                        - 12.0) + 16.0);
      iVar5 = (**(code **)(*piVar4 + 0x108))();
      *(undefined4 *)(iVar5 + 8) = 0x80ffffff;
      (**(code **)(*(int *)this + 0xc))(piVar4,1);
      piStack_3c = piVar4 + 6;
      pppuStack_38 = &ppuStack_44;
      ppuStack_44 = &PTR_FUN_00d2d110;
      iStack_40 = *piStack_3c;
      *(int **)(*piStack_3c + 4) = &iStack_40;
      *piStack_3c = (int)&iStack_40;
      uStack_4 = 3;
      piStack_30 = piVar4;
      FUN_0069b990((void *)((int)this + 0x480),(int)&ppuStack_44);
      uStack_4 = 0xffffffff;
      ppuStack_44 = &PTR_FUN_00d2d110;
      if (piStack_3c != (int *)0x0) {
        *piStack_3c = iStack_40;
      }
      if (iStack_40 != 0) {
        *(int **)(iStack_40 + 4) = piStack_3c;
      }
      iStack_50 = iStack_50 + 1;
      piStack_30 = (int *)0x0;
      iStack_40 = 0;
      piStack_3c = (int *)0x0;
    } while (iStack_50 < *(int *)((int)this + 0x498));
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0069bd30 @ 0069bd30 ////

void __thiscall FUN_0069bd30(void *this,float param_1)

{
  float fVar1;
  undefined4 uStack_4;
  
  FUN_0073f410(this,param_1);
  if (param_1 < 500.0) {
    uStack_4 = 16.0;
    fVar1 = param_1 - 16.0;
    if (fVar1 < 16.0) {
      fVar1 = (fVar1 + 16.0) * 0.5;
      uStack_4 = fVar1;
    }
    fVar1 = (param_1 - (fVar1 - uStack_4)) * 0.5 * 0.00390625;
    FUN_005f2d90(this,0,0,0,0,fVar1,0x3e800000);
    FUN_005f2d90(this,0,2,1.0 - fVar1,0,0x3f800000,0x3e800000);
  }
  FUN_0069baa0(this,*(int *)((int)this + 0x498));
  return;
}


//// FUNCTION FUN_0069be80 @ 0069be80 ////

undefined ** __thiscall
FUN_0069be80(void *this,char *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  size_t sVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  void *_Memory;
  wchar_t *pwVar11;
  uint *puStack_ac;
  void *pvStack_a8;
  char *pcStack_a4;
  uint auStack_a0 [2];
  void *pvStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  void *pvStack_6c;
  undefined **ppuStack_68;
  uint uStack_64;
  uint *puStack_60;
  undefined ***pppuStack_5c;
  void *pvStack_54;
  undefined1 *local_50;
  int local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined4 *puStack_40;
  int *piStack_2c;
  int *piStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8529;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  piVar8 = (int *)((int)this + 0x348);
  *(undefined ***)this = &PTR_FUN_00d3976c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d39750;
  *(undefined1 *)((int)this + 0x344) = 0;
  *(undefined1 *)((int)this + 0x345) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(int **)((int)this + 0x354) = piVar8;
  *piVar8 = (int)&PTR_FUN_00d3941c;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined1 **)((int)this + 0x360) = (undefined1 *)((int)this + 0x36c);
  *(undefined1 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0x14;
  *(undefined1 *)((int)this + 0x381) = 0xff;
  *(undefined1 *)((int)this + 0x382) = 0xff;
  *(undefined1 *)((int)this + 899) = 0xff;
  *(undefined1 *)((int)this + 899) = 0xff;
  *(undefined1 *)((int)this + 0x382) = 0xff;
  *(undefined1 *)((int)this + 0x381) = 0xff;
  *(undefined1 *)((int)this + 0x380) = 0xff;
  piVar1 = (int *)((int)this + 0x388);
  *(undefined1 *)((int)this + 900) = param_4;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(int **)((int)this + 0x394) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined1 **)((int)this + 0x3a0) = (undefined1 *)((int)this + 0x3ac);
  *(undefined1 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0x14;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  pcVar4 = param_1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  uStack_90 = 0x69bfa1;
  FUN_004015d0((void *)((int)this + 0x360),param_1,(int)pcVar4 - (int)(param_1 + 1));
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffffd;
  uStack_90 = 0x69bfc1;
  FUN_0073e4e0(this,0x43b40000);
  local_50 = local_44;
  local_44[0] = 0;
  local_4c = 0;
  local_48 = 0x14;
  pcVar4 = param_1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  uStack_90 = 0x69bffe;
  FUN_004015d0(&local_50,param_1,(int)pcVar4 - (int)(param_1 + 1));
  local_4._0_1_ = 5;
  FUN_0045f450((int *)&local_50);
  puVar5 = operator_new(0x4a0);
  local_4._0_1_ = 6;
  if (puVar5 == (undefined4 *)0x0) {
    _param_4 = (undefined4 *)0x0;
  }
  else {
    _param_4 = FUN_0069b460(puVar5);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  (**(code **)(*piVar8 + 4))();
  *(undefined4 **)((int)this + 0x35c) = _param_4;
  (**(code **)*piVar8)();
  FUN_0069baa0(*(void **)((int)this + 0x35c),param_3);
  uStack_90 = 1;
  uStack_94 = 0x69c08b;
  (**(code **)(**(int **)((int)this + 0x35c) + 100))();
  uStack_94 = 0;
  auStack_a0[1] = 1;
  auStack_a0[0] = 0x69c09a;
  pvStack_98 = this;
  (**(code **)(**(int **)((int)this + 0x35c) + 0x5c))();
  auStack_a0[0] = 0x43b40000;
  pcStack_a4 = (char *)0x69c0aa;
  (**(code **)(**(int **)((int)this + 0x35c) + 0x78))();
  if (0.0 <= (float)pvStack_14) {
    if (1.0 < (float)pvStack_14) {
      pvStack_14 = (void *)0x3f800000;
    }
  }
  else {
    pvStack_14 = (void *)0x0;
  }
  piVar8 = *(int **)((int)this + 0x35c);
  piStack_18 = (int *)piVar8[0x11f];
  piVar8[0x124] = (int)pvStack_14;
  pcStack_a4 = (char *)0x69c11e;
  pvStack_c = pvStack_14;
  fVar10 = (float10)(**(code **)(*piVar8 + 0x10))();
  pvStack_14 = (void *)(float)fVar10;
  pcStack_a4 = (char *)0x69c131;
  fVar10 = (float10)(**(code **)(*piStack_18 + 0x10))();
  pcStack_a4 = "SLIDER_SLIDER";
  puStack_ac = (uint *)&LAB_0069a290;
  *(float *)(piVar8[0x11f] + 0xbc) =
       (float)(((float10)(float)pvStack_14 - fVar10) * (float10)(float)pvStack_c);
  pvStack_a8 = this;
  (**(code **)(**(int **)((int)this + 0x35c) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x35c) + 0x18))(5,&LAB_0069a2e0,this,"SLIDER_SLIDER");
  FUN_00741630(this,5,0x69a2e0,this,"SLIDER");
  FUN_0073f6e0(this,*(int **)((int)this + 0x35c));
  puStack_ac = auStack_a0;
  auStack_a0[0] = auStack_a0[0] & 0xffff0000;
  pvStack_a8 = (void *)0x0;
  pcStack_a4 = (char *)0xa;
  puStack_40 = (undefined4 *)CONCAT31(puStack_40._1_3_,7);
  if (*(char *)((int)this + 900) == '\0') {
    uVar6 = FUN_00ace02d(L"<p align=right><shadow><t1 color=#ffffff><translate>");
    pwVar11 = L"<p align=right><shadow><t1 color=#ffffff><translate>";
  }
  else {
    uVar6 = FUN_00ace02d(L"<p align=center><shadow><t1 color=#ffffff><translate>");
    pwVar11 = L"<p align=center><shadow><t1 color=#ffffff><translate>";
  }
  FUN_004036d0(&puStack_ac,pwVar11,uVar6);
  puVar5 = FUN_00568790(&pvStack_6c,(undefined4 *)((int)this + 0x360));
  FUN_0040cae0(&puStack_ac,(wchar_t *)*puVar5,puVar5[1]);
  if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_6c);
  }
  if (*(char *)((int)this + 900) == '\0') {
    sVar7 = FUN_00ace02d(L"</translate>:</t1></shadow></p>");
    pwVar11 = L"</translate>:</t1></shadow></p>";
  }
  else {
    sVar7 = FUN_00ace02d(L"</translate></t1></shadow></p>");
    pwVar11 = L"</translate></t1></shadow></p>";
  }
  FUN_0040cae0(&puStack_ac,pwVar11,sVar7);
  piStack_2c = operator_new(0x3fc);
  puStack_40._0_1_ = 8;
  if (piStack_2c == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = FUN_00833290(piStack_2c);
  }
  puStack_60 = (uint *)((int)this + 0x18);
  pvStack_6c = (void *)0x1;
  pppuStack_5c = &ppuStack_68;
  ppuStack_68 = &PTR_FUN_00d18c2c;
  uStack_64 = *puStack_60;
  *(uint **)(*puStack_60 + 4) = &uStack_64;
  *puStack_60 = (uint)&uStack_64;
  local_50 = (undefined1 *)0xc3000000;
  local_4c = -0x3d000000;
  piVar8[0x28] = 1;
  puStack_40._0_1_ = 9;
  pvStack_54 = this;
  (**(code **)(piVar8[0x29] + 4))();
  piVar8[0x2e] = (int)pvStack_54;
  (**(code **)piVar8[0x29])();
  piVar8[0x2f] = (int)local_50;
  piVar8[0x30] = local_4c;
  if (puStack_60 != (uint *)0x0) {
    *puStack_60 = uStack_64;
  }
  if (uStack_64 != 0) {
    *(uint **)(uStack_64 + 4) = puStack_60;
  }
  if (*(char *)((int)this + 900) == '\0') {
    piStack_2c = (int *)FUN_005fbfa0(&pvStack_6c,0,(int)this,0x3f0ccccd);
    piVar8[0x3a] = *piStack_2c;
    puStack_40 = (undefined4 *)CONCAT31(puStack_40._1_3_,0xb);
    (**(code **)(piVar8[0x3b] + 4))();
    iVar9 = piStack_2c[6];
  }
  else {
    piStack_2c = (int *)FUN_005fbfa0(&pvStack_6c,2,(int)this,0xc3000000);
    piVar8[0x3a] = *piStack_2c;
    puStack_40 = (undefined4 *)CONCAT31(puStack_40._1_3_,10);
    (**(code **)(piVar8[0x3b] + 4))();
    iVar9 = piStack_2c[6];
  }
  piVar8[0x40] = iVar9;
  (**(code **)piVar8[0x3b])();
  piVar8[0x41] = piStack_2c[7];
  piVar8[0x42] = piStack_2c[8];
  puStack_40 = (undefined4 *)CONCAT31(puStack_40._1_3_,7);
  FUN_005f9ed0((int)&pvStack_6c);
  (**(code **)(*piVar8 + 0x54))(&puStack_ac);
  uVar6 = 0;
  (**(code **)(*piVar8 + 0x8c))();
  _Memory = this;
  (**(code **)(*piVar8 + 100))(1,this,0x40000000);
  FUN_0073f6e0(this,piVar8);
  puStack_40 = operator_new(0x3fc);
  pvStack_54._0_1_ = 0xc;
  if (puStack_40 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_00833290(puStack_40);
  }
  pvStack_54._0_1_ = 7;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x39c) = puVar5;
  (**(code **)*piVar1)();
  piVar8 = (int *)((int)this + 0x18);
  iVar9 = *piVar8;
  *(undefined1 **)(*piVar8 + 4) = &stack0xffffff88;
  *piVar8 = (int)&stack0xffffff88;
  uStack_64 = 0x3f0ccccd;
  puStack_60 = (uint *)0x3f0ccccd;
  iVar3 = *(int *)((int)this + 0x39c);
  *(undefined4 *)(iVar3 + 0xa0) = 0;
  pvStack_54._0_1_ = 0xd;
  ppuStack_68 = this;
  (**(code **)(*(int *)(iVar3 + 0xa4) + 4))();
  *(undefined ***)(iVar3 + 0xb8) = ppuStack_68;
  (*(code *)**(undefined4 **)(iVar3 + 0xa4))();
  *(uint *)(iVar3 + 0xbc) = uStack_64;
  *(uint **)(iVar3 + 0xc0) = puStack_60;
  if (piVar8 != (int *)0x0) {
    *piVar8 = iVar9;
  }
  if (iVar9 != 0) {
    *(int **)(iVar9 + 4) = piVar8;
  }
  piVar8 = (int *)((int)this + 0x18);
  iVar9 = *piVar8;
  *(undefined1 **)(*piVar8 + 4) = &stack0xffffff88;
  *piVar8 = (int)&stack0xffffff88;
  uStack_64 = 0xc3000000;
  puStack_60 = (uint *)0xc3000000;
  iVar3 = *(int *)((int)this + 0x39c);
  *(undefined4 *)(iVar3 + 0xe8) = 2;
  pvStack_54._0_1_ = 0xe;
  ppuStack_68 = this;
  (**(code **)(*(int *)(iVar3 + 0xec) + 4))();
  *(undefined ***)(iVar3 + 0x100) = ppuStack_68;
  (*(code *)**(undefined4 **)(iVar3 + 0xec))();
  *(uint *)(iVar3 + 0x104) = uStack_64;
  *(uint **)(iVar3 + 0x108) = puStack_60;
  pvStack_54 = (void *)CONCAT31(pvStack_54._1_3_,7);
  if (piVar8 != (int *)0x0) {
    *piVar8 = iVar9;
  }
  if (iVar9 != 0) {
    *(int **)(iVar9 + 4) = piVar8;
  }
  (**(code **)(**(int **)((int)this + 0x39c) + 100))(1,this,0x40000000);
  FUN_0073f6e0(this,*(int **)((int)this + 0x39c));
  (**(code **)(**(int **)((int)this + 0x39c) + 0x8c))(0);
  FUN_004015d0((void *)((int)this + 0x3a0),"",0);
  if (uVar6 < 0xb) {
    if (pvStack_a8 < 0x15) {
      ExceptionList = pvStack_6c;
      return this;
    }
                    /* WARNING: Subroutine does not return */
    _free(&DAT_00000009);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0069c660 @ 0069c660 ////

undefined4 * __thiscall FUN_0069c660(void *this,byte param_1)

{
  FUN_0069c680(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0069c680 @ 0069c680 ////

void __fastcall FUN_0069c680(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0xea]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe8]);
  }
  param_1[0xe2] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xe4] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe4] = param_1[0xe3];
  }
  if (param_1[0xe3] != 0) {
    *(undefined4 *)(param_1[0xe3] + 4) = param_1[0xe4];
  }
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe7] = 0;
  if ((undefined4 *)param_1[0xe4] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe4] = param_1[0xe3];
  }
  if (param_1[0xe3] != 0) {
    *(undefined4 *)(param_1[0xe3] + 4) = param_1[0xe4];
  }
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  if (0x14 < (uint)param_1[0xda]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd8]);
  }
  param_1[0xd2] = &PTR_FUN_00d3941c;
  if ((undefined4 *)param_1[0xd4] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd4] = param_1[0xd3];
  }
  if (param_1[0xd3] != 0) {
    *(undefined4 *)(param_1[0xd3] + 4) = param_1[0xd4];
  }
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd7] = 0;
  if ((undefined4 *)param_1[0xd4] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd4] = param_1[0xd3];
  }
  if (param_1[0xd3] != 0) {
    *(undefined4 *)(param_1[0xd3] + 4) = param_1[0xd4];
  }
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_0069c7b0 @ 0069c7b0 ////

void __fastcall FUN_0069c7b0(int *param_1)

{
  FUN_00830cf0(param_1);
  if ((*(byte *)(param_1 + 0xff) & 1) == 0) {
    (**(code **)(*param_1 + 200))(0);
    FUN_00830550(param_1,0x11,&DAT_0104db1c);
    FUN_00830e70(param_1);
  }
  param_1[0xff] = param_1[0xff] & 0xfffffffe;
  return;
}


//// FUNCTION FUN_0069c7f0 @ 0069c7f0 ////

undefined1 __thiscall FUN_0069c7f0(void *this,char *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int *this_00;
  
  *(uint *)((int)this + 0x3ac) = *(uint *)((int)this + 0x3ac) | 1;
  uVar1 = FUN_00830e40(this,param_1);
  this_00 = (int *)((int)this + -0x50);
  cVar2 = (**(code **)(*this_00 + 0xc4))();
  if (cVar2 != '\0') {
    (**(code **)(*this_00 + 200))(*param_1);
    FUN_00830550(this_00,0x11,param_1);
    FUN_00830e70(this_00);
  }
  return uVar1;
}


//// FUNCTION FUN_0069c970 @ 0069c970 ////

undefined4 * __fastcall FUN_0069c970(undefined4 *param_1)

{
  FUN_00833290(param_1);
  *param_1 = &PTR_FUN_00d39894;
  param_1[0x14] = &PTR_FUN_00d39878;
  param_1[0xd1] = &PTR_FUN_00d3986c;
  param_1[0x104] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x101] = &PTR_FUN_00d1a200;
  param_1[0x106] = 0;
  param_1[0x104] = param_1 + 0x101;
  param_1[0x10a] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = param_1 + 0x107;
  param_1[0x107] = &PTR_FUN_00d1a200;
  param_1[0x10c] = 0;
  param_1[0xff] = param_1[0xff] & 0xfffffffc;
  param_1[0x45] = param_1[0x45] | 8;
  param_1[0x100] = 0;
  return param_1;
}


//// FUNCTION FUN_0069ca00 @ 0069ca00 ////

void __fastcall FUN_0069ca00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d39894;
  param_1[0x14] = &PTR_FUN_00d39878;
  param_1[0xd1] = &PTR_FUN_00d3986c;
  param_1[0x107] = &PTR_FUN_00d1a200;
  if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x109] = param_1[0x108];
  }
  if (param_1[0x108] != 0) {
    *(undefined4 *)(param_1[0x108] + 4) = param_1[0x109];
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10c] = 0;
  if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x109] = param_1[0x108];
  }
  if (param_1[0x108] != 0) {
    *(undefined4 *)(param_1[0x108] + 4) = param_1[0x109];
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x101] = &PTR_FUN_00d1a200;
  if ((undefined4 *)param_1[0x103] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x103] = param_1[0x102];
  }
  if (param_1[0x102] != 0) {
    *(undefined4 *)(param_1[0x102] + 4) = param_1[0x103];
  }
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x106] = 0;
  if ((undefined4 *)param_1[0x103] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x103] = param_1[0x102];
  }
  if (param_1[0x102] != 0) {
    *(undefined4 *)(param_1[0x102] + 4) = param_1[0x103];
  }
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  FUN_008330d0(param_1);
  return;
}


//// FUNCTION FUN_0069cb10 @ 0069cb10 ////

undefined4 * __thiscall FUN_0069cb10(void *this,byte param_1)

{
  FUN_0069ca00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0069cb30 @ 0069cb30 ////

undefined4 * __thiscall FUN_0069cb30(void *this,int param_1)

{
  uint uVar1;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  ushort *local_2c;
  undefined4 local_28;
  uint local_24;
  ushort local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8578;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_6c = local_60;
  local_4 = 0;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"ui/misc_icons.dds",0x11);
  local_68 = 0x11;
  local_6c[0x11] = '\0';
  local_4._0_1_ = 1;
  FUN_0069fb10(this,(int *)&local_6c,&local_2c,0x41a00000,0x41a00000,0,0,0x3f800000,0x3f800000);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_6c = local_60;
  *(undefined ***)this = &PTR_FUN_00d399b4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3999c;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"ui/misc_icons.dds",0x11);
  local_68 = 0x11;
  local_6c[0x11] = '\0';
  local_4._0_1_ = 5;
  FUN_0069ee30(this,1,&local_6c,0,0,0x3f800000,0x3f800000);
  local_4._0_1_ = 3;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (param_1 == 0) {
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"ui/misc_icons.dds",0x11);
    local_68 = 0x11;
    local_6c[0x11] = '\0';
    local_4._0_1_ = 6;
    FUN_0069ee30(this,0,&local_6c,0,0,0x3e800000,0x3e800000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"ui/misc_icons.dds",0x11);
    local_48 = 0x11;
    local_4c[0x11] = '\0';
    local_4._0_1_ = 7;
    FUN_0069ee30(this,2,&local_4c,0x3f000000,0,0x3f400000,0x3e800000);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    local_2c = local_20;
    local_20[0] = local_20[0] & 0xff00;
    local_28 = 0;
    local_24 = 0x14;
    _strncpy((char *)local_2c,"ui/misc_icons.dds",0x11);
    local_28 = 0x11;
    *(char *)((int)local_2c + 0x11) = '\0';
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_0069ee30(this,1,&local_2c,0x3e800000,0,0x3f000000,0x3e800000);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0069ce30 @ 0069ce30 ////

undefined4 * __thiscall FUN_0069ce30(void *this,byte param_1)

{
  thunk_FUN_0069f010(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0069ce60 @ 0069ce60 ////

void __thiscall FUN_0069ce60(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x358) = param_1;
  if (*(int *)((int)this + 0x344) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x344) + 8) = param_1;
  }
  return;
}


//// FUNCTION FUN_0069ce90 @ 0069ce90 ////

undefined4 * __fastcall FUN_0069ce90(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d39ae4;
  param_1[0x14] = &PTR_FUN_00d39acc;
  *(undefined1 *)(param_1 + 0xd6) = 0xff;
  *(undefined1 *)((int)param_1 + 0x359) = 0xff;
  *(undefined1 *)((int)param_1 + 0x35a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x35b) = 0xff;
  param_1[0xd6] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  param_1[0xd1] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  return param_1;
}


//// FUNCTION FUN_0069cf00 @ 0069cf00 ////

void __fastcall FUN_0069cf00(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc8598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d39ae4;
  param_1[0x14] = &PTR_FUN_00d39acc;
  local_4 = 0;
  if (param_1[0xd1] == 0) {
    local_4 = 0xffffffff;
    FUN_00742900(param_1);
    ExceptionList = local_c;
    return;
  }
  _Memory = *(void **)(param_1[0xd1] + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1[0xd1] + 4) = 0;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xd1]);
}


//// FUNCTION FUN_0069cfa0 @ 0069cfa0 ////

void __thiscall FUN_0069cfa0(void *this,int param_1)

{
  void *_Memory;
  
  if (*(int *)((int)this + 0x344) == 0) {
    *(int *)((int)this + 0x344) = param_1;
    if (param_1 != 0) {
      *(undefined4 *)((int)this + 0x348) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)((int)this + 0x34c) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)((int)this + 0x350) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)((int)this + 0x354) = *(undefined4 *)(param_1 + 0x34);
    }
    return;
  }
  _Memory = *(void **)(*(int *)((int)this + 0x344) + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 0x344));
}


//// FUNCTION FUN_0069d030 @ 0069d030 ////

void __thiscall
FUN_0069d030(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc85bb;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x344) == 0) {
    ExceptionList = &local_c;
    puVar4 = operator_new(0x3c);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_0041f350(puVar4);
    }
    *(undefined4 **)((int)this + 0x344) = puVar4;
    puVar4 = operator_new(0x24);
    local_4 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_009910f0(puVar4);
    }
    *(undefined4 *)(*(int *)((int)this + 0x344) + 4) = uVar5;
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x344) + 4) + 0xc) = 6;
    puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x344) + 4) + 0x10);
    *puVar1 = *puVar1 & 0xbfffffff;
    puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x344) + 4) + 0x10);
    *puVar1 = *puVar1 & 0x7fffffff;
    iVar3 = *(int *)(*(int *)((int)this + 0x344) + 4);
    *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0xfeffffff;
    local_4 = 0xffffffff;
    pvVar6 = FUN_0099bb50((char *)*param_1,0,0,0,'\0');
    pvVar2 = *(void **)(*(int *)((int)this + 0x344) + 4);
    if (*(void **)((int)pvVar2 + 0x18) != pvVar6) {
      Engine_SetResourceReference(pvVar2,(int)pvVar6);
    }
    iVar3 = *(int *)((int)this + 0x344);
    *(undefined4 *)(iVar3 + 0x28) = param_2;
    *(undefined4 *)(iVar3 + 0x2c) = param_3;
    iVar3 = *(int *)((int)this + 0x344);
    *(undefined4 *)(iVar3 + 0x30) = param_4;
    *(undefined4 *)(iVar3 + 0x34) = param_5;
    iVar3 = *(int *)((int)this + 0x344);
    *(undefined4 *)((int)this + 0x348) = *(undefined4 *)(iVar3 + 0x28);
    *(undefined4 *)((int)this + 0x34c) = *(undefined4 *)(iVar3 + 0x2c);
    *(undefined4 *)((int)this + 0x350) = *(undefined4 *)(iVar3 + 0x30);
    *(undefined4 *)((int)this + 0x354) = *(undefined4 *)(iVar3 + 0x34);
    *(undefined4 *)(iVar3 + 8) = 0xffffffff;
    *(undefined4 *)((int)this + 0x358) = *(undefined4 *)(*(int *)((int)this + 0x344) + 8);
    if (pvVar6 != (void *)0x0) {
      FUN_0099b400(pvVar6);
    }
    ExceptionList = local_c;
    return;
  }
  pvVar2 = *(void **)(*(int *)((int)this + 0x344) + 4);
  if (pvVar2 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_00990ec0((int)pvVar2);
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 0x344));
}


//// FUNCTION FUN_0069d3f0 @ 0069d3f0 ////

void __fastcall FUN_0069d3f0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 local_8;
  
  iVar1 = *(int *)(param_1 + 0x344);
  fVar2 = *(float *)(iVar1 + 0x1c) - *(float *)(iVar1 + 0x10);
  fVar3 = *(float *)(iVar1 + 0x20) - *(float *)(iVar1 + 0x14);
  local_8 = fVar2 / fVar3;
  iVar1 = *(int *)(param_1 + 0x344);
  if (local_8 <= 1.7777778) {
    local_8 = local_8 * 0.5625;
    fVar2 = (1.0 - local_8) * 0.5;
    local_8 = fVar2 + local_8;
    *(float *)(iVar1 + 0x28) = fVar2;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  else {
    local_8 = 1.0;
    fVar2 = (fVar2 - fVar3 * 1.7777778) * 0.5;
    *(float *)(iVar1 + 0x1c) = *(float *)(iVar1 + 0x1c) - fVar2;
    *(float *)(*(int *)(param_1 + 0x344) + 0x10) =
         fVar2 + *(float *)(*(int *)(param_1 + 0x344) + 0x10);
    iVar1 = *(int *)(param_1 + 0x344);
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x344);
  *(float *)(iVar1 + 0x30) = local_8;
  *(undefined4 *)(iVar1 + 0x34) = 0x3f800000;
  return;
}


//// FUNCTION FUN_0069d4c0 @ 0069d4c0 ////

void __fastcall FUN_0069d4c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  
  uVar9 = (uint)param_1[0x86] >> 5 & 1;
  if ((uVar9 != 0) && ((float)param_1[0x7e] == (float)param_1[0x7c])) {
    return;
  }
  iVar3 = param_1[0xd1];
  if (iVar3 == 0) {
    return;
  }
  if ((char)param_1[0xd7] == '\0') {
    if (uVar9 != 0) {
      if ((float)param_1[0x30] <= (float)param_1[0x7c]) {
        iVar1 = param_1[0x7c];
      }
      else {
        iVar1 = param_1[0x30];
      }
      *(int *)(iVar3 + 0x10) = iVar1;
      if ((float)param_1[0x27] <= (float)param_1[0x7f]) {
        iVar3 = param_1[0x7f];
      }
      else {
        iVar3 = param_1[0x27];
      }
      *(int *)(param_1[0xd1] + 0x14) = iVar3;
      if ((float)param_1[0x7e] <= (float)param_1[0x42]) {
        iVar3 = param_1[0x7e];
      }
      else {
        iVar3 = param_1[0x42];
      }
      *(int *)(param_1[0xd1] + 0x1c) = iVar3;
      if ((float)param_1[0x7d] <= (float)param_1[0x39]) {
        iVar3 = param_1[0x7d];
      }
      else {
        iVar3 = param_1[0x39];
      }
      *(int *)(param_1[0xd1] + 0x20) = iVar3;
      if ((*(byte *)(param_1 + 0x86) & 0x40) == 0) {
        fVar4 = ((float)param_1[0xd4] - (float)param_1[0xd2]) /
                ((float)param_1[0x42] - (float)param_1[0x30]);
        fVar5 = ((float)param_1[0xd5] - (float)param_1[0xd3]) /
                ((float)param_1[0x39] - (float)param_1[0x27]);
        *(float *)(param_1[0xd1] + 0x28) =
             (*(float *)(param_1[0xd1] + 0x10) - (float)param_1[0x30]) * fVar4 +
             (float)param_1[0xd2];
        *(float *)(param_1[0xd1] + 0x2c) =
             (*(float *)(param_1[0xd1] + 0x14) - (float)param_1[0x27]) * fVar5 +
             (float)param_1[0xd3];
        *(float *)(param_1[0xd1] + 0x30) =
             (float)param_1[0xd4] -
             ((float)param_1[0x42] - *(float *)(param_1[0xd1] + 0x1c)) * fVar4;
        *(float *)(param_1[0xd1] + 0x34) =
             (float)param_1[0xd5] -
             ((float)param_1[0x39] - *(float *)(param_1[0xd1] + 0x20)) * fVar5;
      }
      else {
        FUN_0069d3f0((int)param_1);
      }
      goto LAB_0069d55d;
    }
    iVar1 = param_1[0x27];
    iVar2 = param_1[0x30];
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(int *)(iVar3 + 0x10) = iVar2;
    *(int *)(iVar3 + 0x14) = iVar1;
    iVar2 = param_1[0xd1];
    iVar3 = param_1[0x42];
    iVar1 = param_1[0x39];
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(int *)(iVar2 + 0x1c) = iVar3;
    *(int *)(iVar2 + 0x20) = iVar1;
    if ((*(byte *)(param_1 + 0x86) & 0x40) != 0) {
      FUN_0069d3f0((int)param_1);
      goto LAB_0069d55d;
    }
  }
  else {
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    uVar6 = DAT_0105c400;
    iVar3 = param_1[0xd1];
    *(undefined4 *)(iVar3 + 0x20) = DAT_0105c404;
    *(undefined4 *)(iVar3 + 0x1c) = uVar6;
    *(undefined4 *)(iVar3 + 0x24) = 0;
  }
  iVar3 = param_1[0xd1];
  *(int *)(iVar3 + 0x28) = param_1[0xd2];
  *(int *)(iVar3 + 0x2c) = param_1[0xd3];
  iVar3 = param_1[0xd1];
  *(int *)(iVar3 + 0x30) = param_1[0xd4];
  *(int *)(iVar3 + 0x34) = param_1[0xd5];
LAB_0069d55d:
  *(int *)(param_1[0xd1] + 8) = param_1[0xd6];
  cVar7 = (**(code **)(*param_1 + 0xc4))();
  if (cVar7 == '\0') {
    bVar8 = *(byte *)(param_1[0xd1] + 0xb) >> 1;
    if ((int)(uint)bVar8 < 0) {
      bVar8 = 0;
    }
    else if (0xff < bVar8) {
      bVar8 = 0xff;
    }
    *(byte *)(param_1[0xd1] + 0xb) = bVar8;
  }
  FUN_007477d0((void *)param_1[0xb5],param_1[0xd1]);
  return;
}


//// FUNCTION FUN_0069d770 @ 0069d770 ////

undefined4 * __thiscall FUN_0069d770(void *this,byte param_1)

{
  FUN_0069cf00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0069d790 @ 0069d790 ////

undefined4 * __thiscall FUN_0069d790(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc85f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined ***)this = &PTR_FUN_00d39ae4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d39acc;
  *(undefined1 *)((int)this + 0x358) = 0xff;
  *(undefined1 *)((int)this + 0x359) = 0xff;
  *(undefined1 *)((int)this + 0x35a) = 0xff;
  *(undefined1 *)((int)this + 0x35b) = 0xff;
  *(undefined4 *)((int)this + 0x358) = 0xffffffff;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x35c) = 0;
  FUN_0069cfa0(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0069d820 @ 0069d820 ////

undefined4 * __thiscall
FUN_0069d820(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d39ae4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d39acc;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined1 *)((int)this + 0x358) = 0xff;
  *(undefined1 *)((int)this + 0x359) = 0xff;
  *(undefined1 *)((int)this + 0x35a) = 0xff;
  *(undefined1 *)((int)this + 0x35b) = 0xff;
  *(undefined4 *)((int)this + 0x358) = 0xffffffff;
  *(undefined1 *)((int)this + 0x35c) = 0;
  local_4 = 0;
  FUN_0069d030(this,param_1,param_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0069da20 @ 0069da20 ////

void __cdecl FUN_0069da20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_0069dac0 @ 0069dac0 ////

undefined4 * __thiscall FUN_0069dac0(void *this,undefined4 *param_1,undefined1 param_2)

{
  FUN_0069d820(this,param_1,0,0,0,0);
  *(undefined4 *)((int)this + 0x368) = 1;
  *(undefined4 *)((int)this + 0x36c) = 1;
  *(undefined4 *)((int)this + 0x370) = 1;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined1 *)((int)this + 0x390) = 0;
  *(undefined1 *)((int)this + 0x392) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined ***)this = &PTR_FUN_00d39c14;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d39bfc;
  *(undefined4 *)((int)this + 0x374) = 0xbf800000;
  *(undefined1 *)((int)this + 0x391) = param_2;
  return this;
}


//// FUNCTION FUN_0069db50 @ 0069db50 ////

void __fastcall FUN_0069db50(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  
  *(undefined4 *)(param_1 + 0x378) = param_3;
  uVar4 = FUN_00990ae0(param_1,param_2);
  *(int *)(param_1 + 0x37c) = (int)uVar4;
  iVar3 = *(int *)(param_1 + 0x378) / *(int *)(param_1 + 0x36c);
  fVar1 = (float)(*(int *)(param_1 + 0x378) - *(int *)(param_1 + 0x36c) * iVar3) *
          *(float *)(param_1 + 0x388);
  fVar2 = (float)iVar3 * *(float *)(param_1 + 0x38c);
  *(float *)(param_1 + 0x348) = fVar1;
  *(float *)(param_1 + 0x34c) = fVar2;
  *(float *)(param_1 + 0x350) = fVar1 + *(float *)(param_1 + 0x388);
  *(float *)(param_1 + 0x354) = fVar2 + *(float *)(param_1 + 0x38c);
  return;
}


//// FUNCTION FUN_0069dc80 @ 0069dc80 ////

void __cdecl FUN_0069dc80(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


//// FUNCTION FUN_0069dce0 @ 0069dce0 ////

void __thiscall
FUN_0069dce0(void *this,undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x368) = param_1;
  *(int *)((int)this + 0x36c) = param_3;
  *(int *)((int)this + 0x370) = param_2;
  *(undefined4 *)((int)this + 0x374) = param_4;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(float *)((int)this + 0x388) = 1.0 / (float)param_3;
  *(float *)((int)this + 0x38c) = 1.0 / (float)param_2;
  FUN_0069db50((int)this,param_4,0);
  return;
}


//// FUNCTION FUN_0069dd90 @ 0069dd90 ////

void __cdecl FUN_0069dd90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_3 = param_3 + 2;
  }
  return;
}


//// FUNCTION FUN_0069dde0 @ 0069dde0 ////

void __cdecl FUN_0069dde0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
    }
    param_1 = param_1 + 2;
  }
  return;
}


//// FUNCTION FUN_0069de40 @ 0069de40 ////

undefined8 __fastcall FUN_0069de40(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_00990ae0(param_1,param_2);
  uVar3 = (undefined4)(uVar4 >> 0x20);
  iVar2 = (int)uVar4 - *(int *)(param_1 + 0x10);
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  if (*(float *)(*(int *)(param_1 + 4) + 4 + *(int *)(param_1 + 0x1c) * 8) < fVar1) {
    iVar2 = *(int *)(param_1 + 0x1c) + 1;
    *(int *)(param_1 + 0x1c) = iVar2;
    uVar4 = FUN_00990ae0(iVar2,uVar3);
    uVar3 = (undefined4)(uVar4 >> 0x20);
    *(int *)(param_1 + 0x10) = (int)uVar4;
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3;
    }
    if (iVar2 <= *(int *)(param_1 + 0x1c)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  return CONCAT44(uVar3,*(undefined4 *)(param_1 + 0x1c));
}


//// FUNCTION FUN_0069e070 @ 0069e070 ////

void __fastcall FUN_0069e070(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_0069e0a0 @ 0069e0a0 ////

undefined4 * FUN_0069e0a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0069dde0(param_1,param_2,param_3);
  return param_1 + param_2 * 2;
}


//// FUNCTION FUN_0069e0d0 @ 0069e0d0 ////

void __fastcall FUN_0069e0d0(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_0069e100 @ 0069e100 ////

void __fastcall FUN_0069e100(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_0069e130 @ 0069e130 ////

void __fastcall FUN_0069e130(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_0069e160 @ 0069e160 ////

void * __thiscall FUN_0069e160(void *this,byte param_1)

{
  FUN_0069e130((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0069e180 @ 0069e180 ////

void FUN_0069e180(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8638;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_0069e1f0 @ 0069e1f0 ////

void __fastcall FUN_0069e1f0(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)param_1[0xe5];
  *param_1 = &PTR_FUN_00d39c14;
  param_1[0x14] = &PTR_FUN_00d39bfc;
  if (_Memory == (void *)0x0) {
    param_1[0xe5] = 0;
    FUN_0069cf00(param_1);
    return;
  }
  if (*(void **)((int)_Memory + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)_Memory + 4));
  }
  *(undefined4 *)((int)_Memory + 4) = 0;
  *(undefined4 *)((int)_Memory + 8) = 0;
  *(undefined4 *)((int)_Memory + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0069e290 @ 0069e290 ////

void __thiscall FUN_0069e290(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int iVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cc8650;
  local_10 = ExceptionList;
  local_1c = param_3[1];
  local_20 = *param_3;
  iVar3 = *(int *)((int)this + 4);
  local_14 = &stack0xffffffd4;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0xc) - iVar3 >> 3;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar3 >> 3;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd4;
    if (0x1fffffffU - iVar7 < param_2) {
      ExceptionList = &local_10;
      uVar2 = FUN_0069e180();
      iVar3 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar3 >> 3;
    }
    if (uVar2 < iVar7 + param_2) {
      if (0x1fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - iVar3 >> 3;
      }
      if (uVar2 < iVar7 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)this + 8) - iVar3 >> 3;
        }
        uVar2 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar2 * 8);
      local_8 = 0;
      local_18 = puVar4;
      puVar5 = (undefined4 *)FUN_0069dd90(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0069dde0(puVar5,param_2,&local_20);
      FUN_0069dd90(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - (int)_Memory >> 3;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar2 * 2;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 2;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar4 - (int)param_1 >> 3) < param_2) {
      FUN_0069dd90(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_0069e0a0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_0069da20(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0069dd90(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_0069dc80((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_0069da20(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0069e4e0 @ 0069e4e0 ////

undefined4 * __thiscall FUN_0069e4e0(void *this,byte param_1)

{
  FUN_0069e1f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0069e500 @ 0069e500 ////

void __thiscall FUN_0069e500(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cc8660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    uVar1 = param_1;
    if (0x1fffffff < param_1) {
      uVar1 = FUN_0069e180();
    }
    puVar2 = operator_new(uVar1 * 8);
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1 * 2;
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    local_8 = 0;
    FUN_0069dde0(puVar2,param_1,param_2);
    *(undefined4 **)((int)this + 8) = puVar2 + uVar1 * 2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0069e600 @ 0069e600 ////

void * __thiscall FUN_0069e600(void *this,uint param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  FUN_0069e500(this,param_1,&local_8);
  return this;
}


//// FUNCTION FUN_0069e630 @ 0069e630 ////

void __thiscall FUN_0069e630(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0069dde0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_0069e290(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0069e6a0 @ 0069e6a0 ////

void * __thiscall FUN_0069e6a0(void *this,void *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar4;
  char *local_118;
  undefined4 local_114;
  uint local_110;
  char local_10c [20];
  undefined4 local_f8;
  undefined4 local_f4;
  void *local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc86c5;
  local_c = ExceptionList;
  local_f8 = 0;
  local_4 = 0;
  local_f4 = 0;
  ExceptionList = &local_c;
  local_f0 = this;
  FUN_0069e500(this,0,&local_f8);
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar4 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)((int)this + 0x10) = (int)uVar4;
  FUN_00559fb0(local_e4);
  local_4._0_1_ = 2;
  FUN_0055be10(local_e4,&param_1,'\0');
  local_118 = local_10c;
  local_10c[0] = '\0';
  local_114 = 0;
  local_110 = 0x14;
  _strncpy(local_118,"",0);
  local_114 = 0;
  *local_118 = '\0';
  local_4._0_1_ = 3;
  FUN_00558a50(local_e4,&local_118,(undefined4 *)0x1);
  if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
    _free(local_118);
  }
  local_118 = local_10c;
  local_10c[0] = '\0';
  local_114 = 0;
  local_110 = 0x14;
  _strncpy(local_118,"rows",4);
  local_114 = 4;
  local_118[4] = '\0';
  local_4._0_1_ = 4;
  uVar2 = FUN_00558750(local_e4,&local_118,0);
  *(undefined4 *)((int)this + 0x14) = uVar2;
  if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
    _free(local_118);
  }
  local_118 = local_10c;
  local_10c[0] = '\0';
  local_114 = 0;
  local_110 = 0x14;
  _strncpy(local_118,"cols",4);
  local_114 = 4;
  local_118[4] = '\0';
  local_4._0_1_ = 5;
  uVar2 = FUN_00558750(local_e4,&local_118,0);
  *(undefined4 *)((int)this + 0x18) = uVar2;
  if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
    _free(local_118);
  }
  local_118 = local_10c;
  local_10c[0] = '\0';
  local_114 = 0;
  local_110 = 0x14;
  _strncpy(local_118,"frames",6);
  local_114 = 6;
  local_118[6] = '\0';
  local_4._0_1_ = 6;
  FUN_00558a50(local_e4,&local_118,(undefined4 *)0x1);
  local_4._0_1_ = 2;
  if (local_110 < 0x15) {
    do {
      puVar3 = FUN_00558de0(local_e4,&local_118);
      local_4._0_1_ = 7;
      FUN_00567da0(&local_ec,puVar3,'\0');
      local_4._0_1_ = 2;
      if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
        _free(local_118);
      }
      local_f4 = local_e8;
      uVar4 = FUN_00acd42c();
      local_f8 = (undefined4)uVar4;
      iVar1 = *(int *)((int)this + 4);
      if ((iVar1 == 0) ||
         ((uint)(*(int *)((int)this + 0xc) - iVar1 >> 3) <=
          (uint)(*(int *)((int)this + 8) - iVar1 >> 3))) {
        FUN_0069e290(this,*(undefined4 **)((int)this + 8),1,&local_f8);
      }
      else {
        puVar3 = *(undefined4 **)((int)this + 8);
        FUN_0069dde0(puVar3,1,&local_f8);
        *(undefined4 **)((int)this + 8) = puVar3 + 2;
      }
      uVar2 = FUN_00558120(local_e4,2);
    } while ((char)uVar2 != '\0');
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00558920(local_e4);
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    ExceptionList = local_c;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_118);
}


//// FUNCTION FUN_0069ea10 @ 0069ea10 ////

undefined4 __thiscall FUN_0069ea10(void *this,int param_1)

{
  return *(undefined4 *)((int)this + param_1 * 4 + 0x3b8);
}


//// FUNCTION FUN_0069ea20 @ 0069ea20 ////

void __thiscall FUN_0069ea20(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x41c) = param_1;
  return;
}


//// FUNCTION FUN_0069ea30 @ 0069ea30 ////

undefined4 __fastcall FUN_0069ea30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x41c);
}


//// FUNCTION FUN_0069ea80 @ 0069ea80 ////

void __thiscall FUN_0069ea80(void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined2 unaff_DI;
  
  if (param_1 != 0) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(param_1 + 0xb) = (char)param_2;
    if ((*(byte *)((int)this + 0x218) & 0x20) == 0) {
      uVar5 = *(undefined4 *)((int)this + 0x9c);
      uVar6 = *(undefined4 *)((int)this + 0xc0);
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      *(undefined4 *)(param_1 + 0x14) = uVar5;
      uVar5 = *(undefined4 *)((int)this + 0xe4);
      uVar6 = *(undefined4 *)((int)this + 0x108);
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
      *(undefined4 *)(param_1 + 0x20) = uVar5;
      iVar9 = *(int *)((int)this + 0x74) * 0x10;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar9 + 0x3cc + (int)this);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar9 + 0x3d0 + (int)this);
      iVar9 = *(int *)((int)this + 0x74) * 0x10;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar9 + 0x3d4 + (int)this);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar9 + 0x3d8 + (int)this);
    }
    else {
      if (*(float *)((int)this + 0xc0) <= *(float *)((int)this + 0x1f0)) {
        fVar1 = *(float *)((int)this + 0x1f0);
      }
      else {
        fVar1 = *(float *)((int)this + 0xc0);
      }
      *(float *)(param_1 + 0x10) = fVar1;
      if (*(float *)((int)this + 0x9c) <= *(float *)((int)this + 0x1fc)) {
        fVar2 = *(float *)((int)this + 0x1fc);
      }
      else {
        fVar2 = *(float *)((int)this + 0x9c);
      }
      *(float *)(param_1 + 0x14) = fVar2;
      if (*(float *)((int)this + 0x1f8) <= *(float *)((int)this + 0x108)) {
        fVar3 = *(float *)((int)this + 0x1f8);
      }
      else {
        fVar3 = *(float *)((int)this + 0x108);
      }
      *(float *)(param_1 + 0x1c) = fVar3;
      if (*(float *)((int)this + 500) <= *(float *)((int)this + 0xe4)) {
        fVar4 = *(float *)((int)this + 500);
      }
      else {
        fVar4 = *(float *)((int)this + 0xe4);
      }
      *(float *)(param_1 + 0x20) = fVar4;
      iVar9 = *(int *)((int)this + 0x74) * 0x10;
      fVar7 = (*(float *)(iVar9 + 0x3d4 + (int)this) - *(float *)((int)this + iVar9 + 0x3cc)) /
              (*(float *)((int)this + 0x108) - *(float *)((int)this + 0xc0));
      fVar8 = (*(float *)((int)this + iVar9 + 0x3d8) -
              *(float *)((*(int *)((int)this + 0x74) + 0x3d) * 0x10 + (int)this)) /
              (*(float *)((int)this + 0xe4) - *(float *)((int)this + 0x9c));
      *(float *)(param_1 + 0x28) =
           (fVar1 - *(float *)((int)this + 0xc0)) * fVar7 + *(float *)((int)this + iVar9 + 0x3cc);
      *(float *)(param_1 + 0x2c) =
           (fVar2 - *(float *)((int)this + 0x9c)) * fVar8 +
           *(float *)((*(int *)((int)this + 0x74) + 0x3d) * 0x10 + (int)this);
      *(float *)(param_1 + 0x30) =
           *(float *)(*(int *)((int)this + 0x74) * 0x10 + 0x3d4 + (int)this) -
           (*(float *)((int)this + 0x108) - fVar3) * fVar7;
      *(float *)(param_1 + 0x34) =
           *(float *)(*(int *)((int)this + 0x74) * 0x10 + 0x3d8 + (int)this) -
           (*(float *)((int)this + 0xe4) - fVar4) * fVar8;
    }
    FUN_00acf400((double)*(float *)(param_1 + 0x10),unaff_DI);
    FUN_00acf400((double)*(float *)(param_1 + 0x14),unaff_DI);
    FUN_00acf400((double)*(float *)(param_1 + 0x1c),unaff_DI);
    FUN_00acf400((double)*(float *)(param_1 + 0x20),unaff_DI);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + 0.5;
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + 0.5;
    *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) + 0.5;
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + 0.5;
    FUN_007477d0(*(void **)((int)this + 0x2d4),param_1);
  }
  return;
}


//// FUNCTION FUN_0069ece0 @ 0069ece0 ////

void __fastcall FUN_0069ece0(int *param_1)

{
  int *local_4;
  
  if (((*(byte *)(param_1 + 0x86) & 0x20) == 0) || ((float)param_1[0x7e] != (float)param_1[0x7c])) {
    local_4 = param_1;
    if ((int *)param_1[0x7b] != (int *)0x0) {
      if (param_1[0x1d] == 1) {
        local_4 = (int *)0xffffffff;
      }
      else {
        local_4 = (int *)0x0;
      }
      (**(code **)(*(int *)param_1[0x7b] + 0xc))(&local_4);
    }
    if ((*(byte *)(param_1 + 0x86) & 0x10) != 0) {
      FUN_0069ea80(param_1,param_1[param_1[0x1d] + 0xee],0xff);
      FUN_0069ea80(param_1,param_1[0xf2],((param_1[0x1d] != 2) - 1 & 0xffffff81) + 0xff);
    }
    FUN_0073fb40(param_1);
  }
  return;
}


//// FUNCTION FUN_0069ee30 @ 0069ee30 ////

void __thiscall
FUN_0069ee30(void *this,int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint *puVar1;
  int iVar2;
  void *this_00;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc86db;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + param_1 * 4 + 0x3b8);
  if (iVar2 == 0) {
    ExceptionList = &local_c;
    pvVar3 = FUN_0099bb50((char *)*param_2,0,0,0,'\0');
    puVar4 = operator_new(0x3c);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_0041f350(puVar4);
    }
    *(undefined4 **)((int)this + param_1 * 4 + 0x3b8) = puVar4;
    puVar4 = operator_new(0x24);
    local_4 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_009910f0(puVar4);
    }
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x3b8) + 4) = uVar5;
    *(undefined1 *)(*(int *)(*(int *)((int)this + param_1 * 4 + 0x3b8) + 4) + 0xc) = 6;
    puVar1 = (uint *)(*(int *)(*(int *)((int)this + param_1 * 4 + 0x3b8) + 4) + 0x10);
    *puVar1 = *puVar1 & 0xbfffffff;
    puVar1 = (uint *)(*(int *)(*(int *)((int)this + param_1 * 4 + 0x3b8) + 4) + 0x10);
    *puVar1 = *puVar1 & 0x7fffffff;
    this_00 = *(void **)(*(int *)((int)this + param_1 * 4 + 0x3b8) + 4);
    local_4 = 0xffffffff;
    if (*(void **)((int)this_00 + 0x18) != pvVar3) {
      Engine_SetResourceReference(this_00,(int)pvVar3);
    }
    iVar2 = *(int *)(*(int *)((int)this + param_1 * 4 + 0x3b8) + 4);
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xfeffffff;
    iVar2 = *(int *)((int)this + param_1 * 4 + 0x3b8);
    *(undefined4 *)(iVar2 + 0x28) = param_3;
    *(undefined4 *)(iVar2 + 0x2c) = param_4;
    iVar2 = *(int *)((int)this + param_1 * 4 + 0x3b8);
    *(undefined4 *)(iVar2 + 0x30) = param_5;
    *(undefined4 *)(iVar2 + 0x34) = param_6;
    iVar2 = *(int *)((int)this + param_1 * 4 + 0x3b8);
    *(undefined4 *)((int)this + param_1 * 0x10 + 0x3cc) = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)((int)this + param_1 * 0x10 + 0x3d0) = *(undefined4 *)(iVar2 + 0x2c);
    *(undefined4 *)((int)this + param_1 * 0x10 + 0x3d4) = *(undefined4 *)(iVar2 + 0x30);
    *(undefined4 *)((int)this + param_1 * 0x10 + 0x3d8) = *(undefined4 *)(iVar2 + 0x34);
    *(undefined4 *)(iVar2 + 8) = 0xffffffff;
    if (pvVar3 != (void *)0x0) {
      FUN_0099b400(pvVar3);
    }
    ExceptionList = local_c;
    return;
  }
  pvVar3 = *(void **)(iVar2 + 4);
  if (pvVar3 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_00990ec0((int)pvVar3);
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + param_1 * 4 + 0x3b8));
}


//// FUNCTION FUN_0069f010 @ 0069f010 ////

void __fastcall FUN_0069f010(undefined4 *param_1)

{
  void *_Memory;
  int *piVar1;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc8706;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d39d5c;
  param_1[0x14] = &PTR_FUN_00d39d40;
  local_4 = 1;
  piVar1 = param_1 + 0xee;
  local_14 = 5;
  while (*piVar1 == 0) {
    piVar1 = piVar1 + 1;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      if (0x14 < (uint)param_1[0xe8]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)param_1[0xe6]);
      }
      local_4 = 0xffffffff;
      FUN_005f30d0(param_1);
      ExceptionList = pvStack_c;
      return;
    }
  }
  _Memory = *(void **)(*piVar1 + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*piVar1);
}


//// FUNCTION FUN_0069f0e0 @ 0069f0e0 ////

undefined4 * __thiscall FUN_0069f0e0(void *this,byte param_1)

{
  FUN_0069f010(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0069f100 @ 0069f100 ////

void __thiscall
FUN_0069f100(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *local_cc;
  uint local_c8;
  uint local_c4;
  char local_c0 [20];
  char *local_ac;
  int local_a8;
  uint local_a4;
  void *local_8c [2];
  uint local_84;
  void *local_6c [2];
  uint local_64;
  char *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc87e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (((uint)param_1[1] < 8) ||
     (ExceptionList = &local_c, iVar1 = __stricmp((char *)((param_1[1] - 4U) + *param_1),".dds"),
     iVar1 != 0)) {
    if ((param_1[1] == 0) ||
       (iVar1 = __stricmp((char *)(param_1[1] + -1 + *param_1),"."), iVar1 != 0)) {
      if ((param_1[1] != 0) &&
         (iVar1 = __stricmp((char *)(param_1[1] + -1 + *param_1),","), iVar1 == 0)) {
        local_cc = local_c0;
        local_c0[0] = '\0';
        local_c8 = 0;
        local_c4 = 0x20;
        local_cc = _malloc(0x20);
        _strncpy(local_cc,"ui/button_playback.dds",0x16);
        local_c8 = 0x16;
        local_cc[0x16] = '\0';
        local_4 = 6;
        FUN_0069ee30(this,0,&local_cc,0,0x3e800000,0x3f800000,0x3f400000);
        if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_cc);
        }
        local_cc = local_c0;
        local_c0[0] = '\0';
        local_c8 = 0;
        local_c4 = 0x20;
        local_cc = _malloc(0x20);
        _strncpy(local_cc,"ui/button_playback_d.dds",0x18);
        local_c8 = 0x18;
        local_cc[0x18] = '\0';
        local_4 = 7;
        FUN_0069ee30(this,2,&local_cc,0,0x3e800000,0x3f800000,0x3f400000);
        if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_cc);
        }
        local_cc = local_c0;
        local_c0[0] = '\0';
        local_c8 = 0;
        local_c4 = 0x20;
        local_cc = _malloc(0x20);
        _strncpy(local_cc,"ui/button_playback_h.dds",0x18);
        local_c8 = 0x18;
        local_cc[0x18] = '\0';
        local_4 = 8;
        FUN_0069ee30(this,1,&local_cc,0,0x3e800000,0x3f800000,0x3f400000);
        if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_cc);
        }
        local_cc = local_c0;
        local_c0[0] = '\0';
        local_c8 = 0;
        local_c4 = 0x20;
        local_cc = _malloc(0x20);
        _strncpy(local_cc,"ui/button_playback_p.dds",0x18);
        local_c8 = 0x18;
        local_cc[0x18] = '\0';
        local_4 = 9;
        FUN_0069ee30(this,3,&local_cc,0,0x3e800000,0x3f800000,0x3f400000);
        if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_cc);
        }
        FUN_00403de0(&local_ac,param_1);
        local_ac[local_a8 + -1] = '.';
        local_4 = 10;
        puVar2 = FUN_0040d6b0(local_4c,"ui/",&local_ac);
        puVar2 = FUN_004312e0(local_8c,puVar2,(char *)&PTR_DAT_00d1e2c0);
        local_4 = CONCAT31(local_4._1_3_,0xc);
        FUN_0069ee30(this,4,puVar2,param_2,param_3,param_4,param_5);
        if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c[0]);
        }
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (local_a4 < 0x15) {
          ExceptionList = local_c;
          return;
        }
        goto LAB_0069fae7;
      }
      puVar2 = FUN_0040d6b0(local_6c,"ui/",param_1);
      FUN_004312e0(&local_cc,puVar2,".dds");
      local_4 = 0xd;
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      puVar2 = FUN_0040d6b0(local_6c,"ui/",param_1);
      FUN_004312e0(local_8c,puVar2,"_d.dds");
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      puVar2 = FUN_0040d6b0(local_6c,"ui/",param_1);
      FUN_004312e0(local_4c,puVar2,"_h.dds");
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      puVar2 = FUN_0040d6b0(local_6c,"ui/",param_1);
      FUN_004312e0(&local_ac,puVar2,"_p.dds");
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      puVar2 = FUN_0040d6b0(local_2c,"data/textures/",&local_cc);
      local_4._0_1_ = 0x11;
      FUN_009d3660(puVar2,(uint *)0x0);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      puVar2 = FUN_0040d6b0(local_2c,"data/textures/",local_8c);
      local_4 = CONCAT31(local_4._1_3_,0x12);
      uVar3 = FUN_009d3660(puVar2,(uint *)0x0);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if ((char)uVar3 == '\0') {
        FUN_004015d0(local_8c,local_cc,local_c8);
      }
      puVar2 = FUN_0040d6b0(local_2c,"data/textures/",local_4c);
      local_4 = CONCAT31(local_4._1_3_,0x13);
      uVar3 = FUN_009d3660(puVar2,(uint *)0x0);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if ((char)uVar3 == '\0') {
        FUN_004015d0(local_4c,local_cc,local_c8);
      }
      puVar2 = FUN_0040d6b0(local_2c,"data/textures/",&local_ac);
      local_4._0_1_ = 0x14;
      uVar3 = FUN_009d3660(puVar2,(uint *)0x0);
      local_4 = CONCAT31(local_4._1_3_,0x10);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if ((char)uVar3 == '\0') {
        FUN_004015d0(&local_ac,local_cc,local_c8);
      }
      FUN_0069ee30(this,0,&local_cc,param_2,param_3,param_4,param_5);
      FUN_0069ee30(this,2,local_8c,param_2,param_3,param_4,param_5);
      FUN_0069ee30(this,1,local_4c,param_2,param_3,param_4,param_5);
      FUN_0069ee30(this,3,&local_ac,param_2,param_3,param_4,param_5);
      if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac);
      }
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      local_ac = local_cc;
      local_44 = local_c4;
      if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
    }
    else {
      local_cc = local_c0;
      local_c0[0] = '\0';
      local_c8 = 0;
      local_c4 = 0x14;
      _strncpy(local_cc,"ui/button_blank.dds",0x13);
      local_c8 = 0x13;
      local_cc[0x13] = '\0';
      local_4 = 0;
      FUN_0069ee30(this,0,&local_cc,0,0,0x3f800000,0x3f800000);
      if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_cc);
      }
      local_cc = local_c0;
      local_c0[0] = '\0';
      local_c8 = 0;
      local_c4 = 0x20;
      local_cc = _malloc(0x20);
      _strncpy(local_cc,"ui/button_blank_d.dds",0x15);
      local_c8 = 0x15;
      local_cc[0x15] = '\0';
      local_4 = 1;
      FUN_0069ee30(this,2,&local_cc,0,0,0x3f800000,0x3f800000);
      if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_cc);
      }
      local_cc = local_c0;
      local_c0[0] = '\0';
      local_c8 = 0;
      local_c4 = 0x20;
      local_cc = _malloc(0x20);
      _strncpy(local_cc,"ui/button_blank_h.dds",0x15);
      local_c8 = 0x15;
      local_cc[0x15] = '\0';
      local_4 = 2;
      FUN_0069ee30(this,1,&local_cc,0,0,0x3f800000,0x3f800000);
      if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_cc);
      }
      local_cc = local_c0;
      local_c0[0] = '\0';
      local_c8 = 0;
      local_c4 = 0x20;
      local_cc = _malloc(0x20);
      _strncpy(local_cc,"ui/button_blank_p.dds",0x15);
      local_c8 = 0x15;
      local_cc[0x15] = '\0';
      local_4 = 3;
      FUN_0069ee30(this,3,&local_cc,0,0,0x3f800000,0x3f800000);
      if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_cc);
      }
      puVar2 = FUN_0040d6b0(local_4c,"ui/",param_1);
      local_4 = 4;
      puVar2 = FUN_004312e0(local_8c,puVar2,(char *)&PTR_DAT_00d1e2c0);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_0069ee30(this,4,puVar2,param_2,param_3,param_4,param_5);
      local_ac = local_4c[0];
      if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
    }
    if (0x14 < local_44) {
LAB_0069fae7:
                    /* WARNING: Subroutine does not return */
      _free(local_ac);
    }
  }
  else {
    iVar1 = 0;
    do {
      FUN_0069ee30(this,iVar1,param_1,param_2,param_3,param_4,param_5);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0069fb10 @ 0069fb10 ////

undefined4 * __thiscall
FUN_0069fb10(void *this,int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8806;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00667700(this);
  *(undefined ***)this = &PTR_FUN_00d39d5c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d39d40;
  *(undefined4 *)((int)this + 0x398) = (undefined1 *)((int)this + 0x3a4);
  *(undefined1 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0x14;
  local_4 = 1;
  FUN_004015d0((undefined4 *)((int)this + 0x398),(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  FUN_0073e4e0(this,param_4);
  FUN_00740dc0(this,param_2);
  FUN_0069f100(this,param_1,param_5,param_6,param_7,param_8);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0069fd40 @ 0069fd40 ////

undefined4 * __thiscall
FUN_0069fd40(void *this,int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0069fb10(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d39f3c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d39f24;
  *(undefined4 *)((int)this + 0x420) = 200;
  *(undefined4 *)((int)this + 0x424) = 0x32;
  *(undefined4 *)((int)this + 0x428) = 200;
  uVar1 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)((int)this + 0x42c) = (int)uVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0069fdf0 @ 0069fdf0 ////

undefined4 * __thiscall FUN_0069fdf0(void *this,byte param_1)

{
  thunk_FUN_0069f010(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0069fe20 @ 0069fe20 ////

int * __thiscall FUN_0069fe20(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0069fe60 @ 0069fe60 ////

int * __thiscall FUN_0069fe60(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0069fea0 @ 0069fea0 ////

int * __thiscall FUN_0069fea0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0069fee0 @ 0069fee0 ////

int * __thiscall FUN_0069fee0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0069ff20 @ 0069ff20 ////

int * __thiscall FUN_0069ff20(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0069ff60 @ 0069ff60 ////

void * __thiscall FUN_0069ff60(void *this,void *param_1,byte *param_2)

{
  FUN_0040a530(param_1,(uint)param_2[3] + (uint)*(byte *)((int)this + 3),
               (uint)param_2[2] + (uint)*(byte *)((int)this + 2),
               (uint)param_2[1] + (uint)*(byte *)((int)this + 1),
               (uint)*param_2 + (uint)*(byte *)this);
  return param_1;
}


//// FUNCTION FUN_0069ffa0 @ 0069ffa0 ////

void FUN_0069ffa0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00a09270();
  puVar2 = DAT_0104db34;
  if (DAT_0104db34 != (undefined4 *)0x0) {
    iVar1 = DAT_0104db34[0x12];
    DAT_0104db34[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104db20[1])();
    DAT_0104db34 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0069ffe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_0104db20)();
    return;
  }
  return;
}


//// FUNCTION FUN_006a0020 @ 006a0020 ////

void FUN_006a0020(void)

{
  if (DAT_0104db34 != (int *)0x0) {
    (**(code **)(*DAT_0104db34 + 0x80))(1);
  }
  return;
}


//// FUNCTION FUN_006a00a0 @ 006a00a0 ////

void __fastcall FUN_006a00a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x358);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x344) + 4))();
    *(undefined4 *)(param_1 + 0x358) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x344))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x370);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x35c) + 4))();
    *(undefined4 *)(param_1 + 0x370) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x35c))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x388);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x374) + 4))();
    *(undefined4 *)(param_1 + 0x388) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x374))();
  }
  if (*(int *)(param_1 + 0x3b8) != 0) {
    FUN_00738410(*(int *)(param_1 + 0x3b8));
    return;
  }
  return;
}


//// FUNCTION FUN_006a0400 @ 006a0400 ////

void __fastcall FUN_006a0400(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_006a0430 @ 006a0430 ////

void __fastcall FUN_006a0430(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *local_6c;
  int local_68;
  uint local_64;
  undefined2 local_60 [10];
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc88a0;
  local_c = ExceptionList;
  if (((DAT_0104db34 != 0) && (*(int *)(DAT_0104db34 + 0x3b8) != 0)) &&
     (ExceptionList = &local_c, uVar2 = FUN_009b42c0(), (DAT_010b7625 & (byte)uVar2) != 0)) {
    cVar1 = FUN_00a079b0();
    if ((cVar1 == '\0') || ((DAT_010b7636 != '\0' && (cVar1 = FUN_00a079c0(), cVar1 == '\0')))) {
      if (DAT_010b7636 == '\0') {
        ExceptionList = local_c;
        return;
      }
      local_6c = local_60;
      local_60[0] = 0;
      local_68 = 0;
      local_64 = 10;
      local_4 = 9;
      FUN_00a08eb0(&local_6c);
      if (local_68 != 0) {
        FUN_00739350(*(void **)(param_1 + 0x3b8),&local_6c);
      }
    }
    else {
      local_6c = local_60;
      local_60[0] = 0;
      local_68 = 0;
      local_64 = 10;
      local_4 = 0;
      FUN_00a08e60(&local_6c);
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar3);
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 10;
      uVar3 = FUN_00ace02d((short *)&DAT_00d19bd0);
      FUN_004036d0(&local_4c,L"<",uVar3);
      local_4._0_1_ = 2;
      FUN_005699d0((int *)&local_6c,&local_4c,&local_2c);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 10;
      uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_4c,(wchar_t *)&lpCaption_00d16918,uVar3);
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar3 = FUN_00ace02d((short *)&DAT_00d19724);
      FUN_004036d0(&local_2c,L">",uVar3);
      local_4._0_1_ = 4;
      FUN_005699d0((int *)&local_6c,&local_2c,&local_4c);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 10;
      uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_4c,(wchar_t *)&lpCaption_00d16918,uVar3);
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar3 = FUN_00ace02d((short *)&DAT_00d2e120);
      FUN_004036d0(&local_2c,L"\\",uVar3);
      local_4._0_1_ = 6;
      FUN_005699d0((int *)&local_6c,&local_2c,&local_4c);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 10;
      uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_4c,(wchar_t *)&lpCaption_00d16918,uVar3);
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar3 = FUN_00ace02d((short *)&DAT_00d24214);
      FUN_004036d0(&local_2c,L"/",uVar3);
      local_4._0_1_ = 8;
      FUN_005699d0((int *)&local_6c,&local_2c,&local_4c);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      FUN_007390a0(*(void **)(param_1 + 0x3b8),&local_6c);
    }
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006a0800 @ 006a0800 ////

void __fastcall FUN_006a0800(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d3a040;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_006a0850 @ 006a0850 ////

void __fastcall FUN_006a0850(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3a040;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006a08f0 @ 006a08f0 ////

void __fastcall FUN_006a08f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3a050;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006a0990 @ 006a0990 ////

void __fastcall FUN_006a0990(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3a060;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006a0a30 @ 006a0a30 ////

void __fastcall FUN_006a0a30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3a070;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006a0ab0 @ 006a0ab0 ////

void __fastcall FUN_006a0ab0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_006a0ad0 @ 006a0ad0 ////

void __fastcall FUN_006a0ad0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3a080;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006a0b20 @ 006a0b20 ////

void __fastcall FUN_006a0b20(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc88fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d3a0ac;
  param_1[0x14] = &PTR_LAB_00d3a090;
  local_4 = 5;
  FUN_006a00a0((int)param_1);
  (**(code **)(param_1[0xe9] + 4))();
  param_1[0xee] = 0;
  (**(code **)param_1[0xe9])();
  puVar2 = (undefined4 *)param_1[0xe8];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xe3] + 4))();
    param_1[0xe8] = 0;
    (**(code **)param_1[0xe3])();
  }
  FUN_00a09210('\0');
  param_1[0xe9] = &PTR_FUN_00d2dba4;
  if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xeb] = param_1[0xea];
  }
  if (param_1[0xea] != 0) {
    *(undefined4 *)(param_1[0xea] + 4) = param_1[0xeb];
  }
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xee] = 0;
  if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xeb] = param_1[0xea];
  }
  if (param_1[0xea] != 0) {
    *(undefined4 *)(param_1[0xea] + 4) = param_1[0xeb];
  }
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xe3] = &PTR_FUN_00d3a080;
  if ((undefined4 *)param_1[0xe5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe5] = param_1[0xe4];
  }
  if (param_1[0xe4] != 0) {
    *(undefined4 *)(param_1[0xe4] + 4) = param_1[0xe5];
  }
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  if ((undefined4 *)param_1[0xe5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe5] = param_1[0xe4];
  }
  if (param_1[0xe4] != 0) {
    *(undefined4 *)(param_1[0xe4] + 4) = param_1[0xe5];
  }
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xdd] = &PTR_LAB_00d3a070;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xd7] = &PTR_LAB_00d3a060;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd1] = &PTR_LAB_00d3a050;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd6] = 0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006a0de0 @ 006a0de0 ////

int * __thiscall FUN_006a0de0(void *this,undefined4 *param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_3c [4];
  float local_38;
  undefined4 uStack_34;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [16];
  undefined1 uStack_10;
  void *local_c;
  undefined4 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (undefined4 *)&LAB_00cc8973;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00738920(this);
  puVar5 = param_1;
  *(undefined ***)this = &PTR_FUN_00d3a1c4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d3a1ac;
  piVar7 = (int *)((int)this + 0x3cc);
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *piVar7 = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 **)((int)this + 0x3d4) = (undefined4 *)((int)this + 0x3c8);
  *(undefined4 *)((int)this + 0x3c8) = &PTR_FUN_00d2dba4;
  *(undefined4 **)((int)this + 0x3dc) = param_1;
  if (param_1 != (undefined4 *)0x0) {
    piVar6 = param_1 + 6;
    *(int **)((int)this + 0x3d0) = piVar6;
    *piVar7 = *piVar6;
    *(int **)(*piVar6 + 4) = piVar7;
    *piVar6 = (int)piVar7;
  }
  piVar7 = (int *)((int)this + 0x3e0);
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(int **)((int)this + 0x3ec) = piVar7;
  *piVar7 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined1 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined1 *)((int)this + 0x404) = 0xff;
  *(undefined1 *)((int)this + 0x405) = 0xff;
  *(undefined1 *)((int)this + 0x406) = 0xff;
  *(undefined1 *)((int)this + 0x407) = 0xff;
  *(undefined4 *)((int)this + 0x404) = 0xffffffff;
  pbVar1 = (byte *)((int)this + 0x408);
  *pbVar1 = 0xff;
  *(undefined1 *)((int)this + 0x409) = 0xff;
  *(undefined1 *)((int)this + 0x40a) = 0xff;
  *(undefined1 *)((int)this + 0x40b) = 0xff;
  pbVar1[0] = 0xff;
  pbVar1[1] = 0xff;
  pbVar1[2] = 0xff;
  pbVar1[3] = 0xff;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  *(undefined1 *)((int)this + 0x40c) = 0;
  if (((param_1 != (undefined4 *)0x0) && (param_1[0xd2] != 0)) &&
     (piVar6 = *(int **)(param_1[0xd2] + 0x3c), piVar6 != (int *)0x0)) {
    if (*piVar6 == 0) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"default",7);
      local_28 = 7;
      local_2c[7] = '\0';
      param_1 = (undefined4 *)&stack0xffffffac;
      local_4._0_1_ = 3;
      FUN_007374f0(this,&local_2c,8,'\0');
      local_4._0_1_ = 2;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
    else {
      piVar6 = param_1 + 0xd2;
      param_1 = (undefined4 *)&stack0xffffffac;
      FUN_007374f0(this,(undefined4 *)**(undefined4 **)(*piVar6 + 0x3c),
                   (*(undefined4 **)(*piVar6 + 0x3c))[6],'\0');
    }
    if (DAT_010b7636 == '\0') {
      param_1 = operator_new(0x50);
      local_4._0_1_ = 4;
      if (param_1 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_005e4870(param_1);
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_0073fae0(this,puVar3);
      param_1 = (undefined4 *)0xfff0fafa;
      (**(code **)(**(int **)((int)this + 0x1ec) + 0xc))();
    }
    else {
      param_1 = operator_new(0x50);
      local_4._0_1_ = 5;
      if (param_1 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_005e4870(param_1);
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_0073fae0(this,puVar3);
      param_1 = (undefined4 *)0xa0a0a0;
      puVar3 = FUN_0069ff60((void *)(puVar5[0xd2] + 0x38),local_3c,(byte *)&param_1);
      *(undefined4 *)((int)this + 0x404) = *puVar3;
      FUN_0040a4f0(&param_1,(uint)*(byte *)((int)this + 0x406));
      *(byte *)((int)this + 0x406) = (byte)param_1;
      FUN_0040a4f0(&param_1,(uint)*(byte *)((int)this + 0x405));
      *(byte *)((int)this + 0x405) = (byte)param_1;
      FUN_0040a4f0(&param_1,(uint)*(byte *)((int)this + 0x404));
      *(byte *)((int)this + 0x404) = (byte)param_1;
      param_1 = (undefined4 *)&LAB_00808080;
      puVar3 = FUN_0069ff60((void *)(puVar5[0xd2] + 0x38),&local_38,(byte *)&param_1);
      *(undefined4 *)pbVar1 = *puVar3;
      FUN_0040a4f0(&param_1,(uint)*(byte *)((int)this + 0x40a));
      *(byte *)((int)this + 0x40a) = (byte)param_1;
      FUN_0040a4f0(&param_1,(uint)*(byte *)((int)this + 0x409));
      *(byte *)((int)this + 0x409) = (byte)param_1;
      FUN_0040a4f0(&param_1,(uint)*pbVar1);
      *pbVar1 = (byte)param_1;
      (**(code **)(**(int **)((int)this + 0x1ec) + 0xc))();
      *(undefined1 *)((int)this + 0x40c) = 1;
      *(undefined1 *)((int)this + 0x390) = 1;
    }
    FUN_007387f0(puVar5,&local_38);
    iVar4 = FUN_0071b2a0();
    FUN_00741b60(this,1,iVar4,uStack_34);
    iVar4 = FUN_0071b2a0();
    FUN_00741940(this,1,iVar4,local_38);
    do {
      cVar2 = FUN_007421c0(this);
    } while (cVar2 != '\0');
    puVar5 = operator_new(0xbc);
    puStack_8._0_1_ = 6;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_00744eb0(puVar5);
    }
    puStack_8 = (undefined4 *)CONCAT31(puStack_8._1_3_,2);
    FUN_0073e510(this,puVar5);
    piVar6 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar6 + 0xc))(this,1);
    puStack_8 = operator_new(0x3fc);
    uStack_10 = 7;
    if (puStack_8 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_00833290(puStack_8);
    }
    uStack_10 = 2;
    (**(code **)(*piVar7 + 4))();
    *(undefined4 **)((int)this + 0x3f4) = puVar5;
    (**(code **)*piVar7)();
    puStack_8 = operator_new(0xbc);
    uStack_10 = 8;
    if (puStack_8 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_00744eb0(puStack_8);
    }
    uStack_10 = 2;
    FUN_0073e510(*(void **)((int)this + 0x3f4),puVar5);
    piVar7 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar7 + 0xc))(*(undefined4 *)((int)this + 0x3f4),1);
    if (DAT_010b7635 == '\0') {
      *(uint *)((int)this + 0x3f8) = (DAT_010b7636 != '\0') + 2;
    }
    else {
      *(undefined4 *)((int)this + 0x3f8) = 1;
    }
    if (DAT_010b7635 == '\0') {
      *(undefined1 *)((int)this + 0x3fc) = 1;
      ExceptionList = local_c;
      return this;
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006a12d0 @ 006a12d0 ////

void __fastcall FUN_006a12d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc89a4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d3a1c4;
  param_1[0x14] = &PTR_LAB_00d3a1ac;
  puVar2 = (undefined4 *)param_1[0xfd];
  local_4 = 2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xf8] + 4))();
    param_1[0xfd] = 0;
    (**(code **)param_1[0xf8])();
  }
  param_1[0xf8] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xfa] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfa] = param_1[0xf9];
  }
  if (param_1[0xf9] != 0) {
    *(undefined4 *)(param_1[0xf9] + 4) = param_1[0xfa];
  }
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfd] = 0;
  if ((undefined4 *)param_1[0xfa] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfa] = param_1[0xf9];
  }
  if (param_1[0xf9] != 0) {
    *(undefined4 *)(param_1[0xf9] + 4) = param_1[0xfa];
  }
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xf2] = &PTR_FUN_00d2dba4;
  if ((undefined4 *)param_1[0xf4] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf4] = param_1[0xf3];
  }
  if (param_1[0xf3] != 0) {
    *(undefined4 *)(param_1[0xf3] + 4) = param_1[0xf4];
  }
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf7] = 0;
  if ((undefined4 *)param_1[0xf4] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf4] = param_1[0xf3];
  }
  if (param_1[0xf3] != 0) {
    *(undefined4 *)(param_1[0xf3] + 4) = param_1[0xf4];
  }
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  local_4 = 0xffffffff;
  FUN_007384d0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006a1440 @ 006a1440 ////

void __thiscall FUN_006a1440(void *this,undefined4 param_1,float param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 uStack_124;
  float local_120 [2];
  undefined2 *local_118;
  undefined4 local_114;
  uint local_110;
  undefined2 local_10c [8];
  void *pvStack_fc;
  undefined2 *local_f8;
  uint local_f4;
  undefined4 local_f0;
  undefined2 local_ec [10];
  void *local_d8 [2];
  uint local_d0;
  void *local_b8 [2];
  uint local_b0;
  void *local_98 [2];
  uint local_90;
  void *local_78 [2];
  uint local_70;
  void *local_58 [2];
  uint local_50;
  void *local_38 [2];
  uint local_30;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cc89c6;
  pvStack_14 = ExceptionList;
  local_118 = local_10c;
  local_10c[0] = 0;
  local_114 = 0;
  local_110 = 10;
  ExceptionList = &pvStack_14;
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_118,(wchar_t *)&lpCaption_00d16918,uVar3);
  local_c = 0;
  switch(param_1) {
  case 0:
    local_120[0] = 0.0;
    local_120[1] = 0.0;
    if (0.0 < param_2) {
      do {
        sVar4 = FUN_00ace02d((short *)&DAT_00d2b89c);
        FUN_0040cae0(&local_118,L"_",sVar4);
        FUN_007387b0(this,&local_118,local_120);
      } while (local_120[0] < param_2);
    }
    puVar5 = FUN_0043bdc0(local_d8,L"<nobr><b>",&local_118);
    puVar5 = FUN_0043be60(local_98,puVar5,L"</b></nobr>");
    FUN_004036d0(&local_118,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < local_90) {
                    /* WARNING: Subroutine does not return */
      _free(local_98[0]);
    }
    if (10 < local_d0) {
                    /* WARNING: Subroutine does not return */
      _free(local_d8[0]);
    }
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x54))(&local_118);
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x78))(uStack_124);
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x8c))(0);
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x5c))(1,this,0xc0a00000);
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x68))(2,this,0xbf800000);
    do {
      cVar2 = (**(code **)(**(int **)((int)this + 0x3f4) + 0x50))(1);
    } while (cVar2 != '\0');
    break;
  case 1:
    local_120[0] = 0.0;
    local_120[1] = 0.0;
    if (0.0 < param_2) {
      do {
        sVar4 = FUN_00ace02d((short *)&DAT_00d19bd4);
        FUN_0040cae0(&local_118,L"-",sVar4);
        FUN_007387b0(this,&local_118,local_120);
      } while (local_120[0] < param_2);
    }
    puVar5 = FUN_0043bdc0(local_b8,L"<nobr><b>",&local_118);
    puVar5 = FUN_0043be60(local_58,puVar5,L"</b></nobr>");
    FUN_004036d0(&local_118,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < local_50) {
                    /* WARNING: Subroutine does not return */
      _free(local_58[0]);
    }
    if (10 < local_b0) {
                    /* WARNING: Subroutine does not return */
      _free(local_b8[0]);
    }
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x54))(&local_118);
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x78))(uStack_124);
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x8c))(0);
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x5c))(1,this,0xc0a00000);
    iVar1 = **(int **)((int)this + 0x3f4);
    fVar6 = (float10)(**(code **)(iVar1 + 0x14))();
    (**(code **)(iVar1 + 0x68))(2,this,(float)-(fVar6 * (float10)0.5));
    do {
      cVar2 = (**(code **)(**(int **)((int)this + 0x3f4) + 0x50))(1);
    } while (cVar2 != '\0');
    break;
  case 2:
    local_120[0] = 0.0;
    local_120[1] = 0.0;
    if (0.0 < param_2) {
      do {
        sVar4 = FUN_00ace02d((short *)&DAT_00d245f8);
        FUN_0040cae0(&local_118,L".",sVar4);
        FUN_007387b0(this,&local_118,local_120);
      } while (local_120[0] < param_2);
    }
    puVar5 = FUN_0043bdc0(local_38,L"<nobr><b>",&local_118);
    puVar5 = FUN_0043be60(local_78,puVar5,L"</b></nobr>");
    FUN_004036d0(&local_118,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < local_70) {
                    /* WARNING: Subroutine does not return */
      _free(local_78[0]);
    }
    if (10 < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_38[0]);
    }
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x54))(&local_118);
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x78))(uStack_124);
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x8c))(0);
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x5c))(1,this,0xc0a00000);
    iVar1 = **(int **)((int)this + 0x3f4);
    fVar6 = (float10)(**(code **)(iVar1 + 0x14))();
    (**(code **)(iVar1 + 0x68))(2,this,(float)-(fVar6 * (float10)0.25));
    do {
      cVar2 = (**(code **)(**(int **)((int)this + 0x3f4) + 0x50))(1);
    } while (cVar2 != '\0');
    break;
  case 3:
    local_f8 = local_ec;
    local_ec[0] = 0;
    local_f4 = 0;
    local_f0 = 10;
    uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_f8,(wchar_t *)&lpCaption_00d16918,uVar3);
    local_c = CONCAT31(local_c._1_3_,1);
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x54))(&local_f8);
    puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
    if (10 < local_f4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_fc);
    }
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x84))(0);
    do {
      cVar2 = (**(code **)(**(int **)((int)this + 0x3f4) + 0x50))(1);
    } while (cVar2 != '\0');
  }
  if (local_110 < 0xb) {
    ExceptionList = pvStack_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_118);
}


//// FUNCTION FUN_006a1950 @ 006a1950 ////

undefined4 * __thiscall FUN_006a1950(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined3 uVar2;
  void *this_00;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  char local_3c [12];
  undefined4 uStack_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc89fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00833290(this);
  piVar1 = (int *)((int)this + 0x3fc);
  *(undefined ***)this = &PTR_FUN_00d3a33c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3a320;
  *(undefined ***)((int)this + 0x344) = &PTR_FUN_00d3a314;
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(int **)((int)this + 0x408) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2dba4;
  *(undefined4 *)((int)this + 0x410) = 0;
  local_4._1_3_ = 0;
  uVar2 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (DAT_010b7508 == '\0') {
    uStack_30 = 0x6a1a27;
    local_4._1_3_ = uVar2;
    puVar3 = operator_new(0x50);
    local_4._0_1_ = 3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_005e4870(puVar3);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    uStack_30 = 0x6a1a4f;
    FUN_0073fae0(this,puVar3);
    uStack_30 = 0x6a1a73;
    (**(code **)(**(int **)((int)this + 0x1ec) + 0xc))();
  }
  else {
    uStack_30 = 0x6a19c3;
    this_00 = operator_new(0x50);
    local_4._0_1_ = 2;
    if (this_00 == (void *)0x0) {
      local_4 = CONCAT31(local_4._1_3_,1);
      uStack_30 = 0x6a1a20;
      FUN_0073fae0(this,0);
    }
    else {
      pcVar4 = local_3c;
      local_3c[0] = '\0';
      uVar5 = 0;
      uVar6 = 0x14;
      FUN_004015d0(&stack0xffffffb8,"ui/tabbackground.dds",0x14);
      puVar3 = FUN_005e4a50(this_00,pcVar4,uVar5,uVar6);
      local_4 = CONCAT31(local_4._1_3_,1);
      uStack_30 = 0x6a1a0f;
      FUN_0073fae0(this,puVar3);
    }
  }
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x410) = param_1;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006a1aa0 @ 006a1aa0 ////

void __fastcall FUN_006a1aa0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3a33c;
  param_1[0x14] = &PTR_FUN_00d3a320;
  param_1[0xd1] = &PTR_FUN_00d3a314;
  param_1[0xff] = &PTR_FUN_00d2dba4;
  if ((undefined4 *)param_1[0x101] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x101] = param_1[0x100];
  }
  if (param_1[0x100] != 0) {
    *(undefined4 *)(param_1[0x100] + 4) = param_1[0x101];
  }
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x104] = 0;
  if ((undefined4 *)param_1[0x101] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x101] = param_1[0x100];
  }
  if (param_1[0x100] != 0) {
    *(undefined4 *)(param_1[0x100] + 4) = param_1[0x101];
  }
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  FUN_008330d0(param_1);
  return;
}


//// FUNCTION FUN_006a1b40 @ 006a1b40 ////

undefined4 * __thiscall FUN_006a1b40(void *this,undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined3 uVar3;
  void *this_00;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  char local_3c [8];
  undefined4 uStack_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8a55;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  piVar1 = (int *)((int)this + 0x344);
  puVar5 = (undefined4 *)0x0;
  *(undefined ***)this = &PTR_FUN_00d3a45c;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d3a444;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(int **)((int)this + 0x350) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2dba4;
  *(undefined4 *)((int)this + 0x358) = 0;
  piVar2 = (int *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(int **)((int)this + 0x368) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x370) = 0;
  local_4._1_3_ = 0;
  uVar3 = local_4._1_3_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if (DAT_010b7634 == '\0') {
    local_4._1_3_ = uVar3;
    puVar4 = operator_new(0x50);
    local_4._0_1_ = 4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_005e4870(puVar4);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_0073fae0(this,puVar4);
    (**(code **)(**(int **)((int)this + 0x1ec) + 0xc))();
  }
  else {
    this_00 = operator_new(0x50);
    local_4._0_1_ = 3;
    if (this_00 == (void *)0x0) {
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_0073fae0(this,0);
    }
    else {
      pcVar6 = local_3c;
      local_3c[0] = '\0';
      uVar7 = 0;
      uVar8 = 0x14;
      FUN_004015d0(&stack0xffffffb8,"ui/tabbackground.dds",0x14);
      puVar4 = FUN_005e4a50(this_00,pcVar6,uVar7,uVar8);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_0073fae0(this,puVar4);
    }
  }
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x358) = param_1;
  (**(code **)*piVar1)();
  puVar4 = operator_new(0x3fc);
  local_4._0_1_ = 5;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = FUN_00833290(puVar4);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar2 + 4))();
  *(undefined4 **)((int)this + 0x370) = puVar5;
  (**(code **)*piVar2)();
  uStack_34 = 0x6a1cd3;
  FUN_0073f6e0(this,*(int **)((int)this + 0x370));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006a1cf0 @ 006a1cf0 ////

void __fastcall FUN_006a1cf0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc8a84;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d3a45c;
  param_1[0x14] = &PTR_LAB_00d3a444;
  puVar2 = (undefined4 *)param_1[0xdc];
  local_4 = 2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xd7] + 4))();
    param_1[0xdc] = 0;
    (**(code **)param_1[0xd7])();
  }
  param_1[0xd7] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd1] = &PTR_FUN_00d2dba4;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd6] = 0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006a1e60 @ 006a1e60 ////

int * __thiscall
FUN_006a1e60(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [6];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8ac4;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  puVar6 = (undefined4 *)0x0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar3);
  local_4 = 0;
  FUN_0069fb10(this,param_1,&local_2c,param_2,param_3,*param_4,param_4[1],param_4[2],param_4[3]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  piVar1 = (int *)((int)this + 0x420);
  *(undefined ***)this = &PTR_FUN_00d3a574;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3a55c;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(int **)((int)this + 0x42c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x434) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0073e4e0(this,param_2);
  do {
    cVar2 = FUN_007421c0(this);
  } while (cVar2 != '\0');
  puVar4 = operator_new(0xbc);
  local_4._0_1_ = 4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00744eb0(puVar4);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0073e510(this,puVar4);
  piVar5 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar5 + 0xc))();
  puVar4 = operator_new(0x3fc);
  pvStack_c._0_1_ = 5;
  if (puVar4 != (undefined4 *)0x0) {
    puVar6 = FUN_00833290(puVar4);
  }
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x434) = puVar6;
  (**(code **)*piVar1)();
  *(int **)(*(int *)((int)this + 0x434) + 0x354) = param_1;
  *(undefined1 *)(*(int *)((int)this + 0x434) + 0x358) = 1;
  FUN_0073f6e0(this,*(int **)((int)this + 0x434));
  ExceptionList = pvStack_14;
  return this;
}


//// FUNCTION FUN_006a2020 @ 006a2020 ////

void __fastcall FUN_006a2020(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc8ae6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d3a574;
  param_1[0x14] = &PTR_FUN_00d3a55c;
  puVar2 = (undefined4 *)param_1[0x10d];
  local_4 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x108] + 4))();
    param_1[0x10d] = 0;
    (**(code **)param_1[0x108])();
  }
  param_1[0x108] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x10a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10a] = param_1[0x109];
  }
  if (param_1[0x109] != 0) {
    *(undefined4 *)(param_1[0x109] + 4) = param_1[0x10a];
  }
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10d] = 0;
  if ((undefined4 *)param_1[0x10a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10a] = param_1[0x109];
  }
  if (param_1[0x109] != 0) {
    *(undefined4 *)(param_1[0x109] + 4) = param_1[0x10a];
  }
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  local_4 = 0xffffffff;
  FUN_0069f010(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006a2120 @ 006a2120 ////

undefined4 * __thiscall FUN_006a2120(void *this,undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  void *this_00;
  int *piVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8b62;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d3a0ac;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d3a090;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_LAB_00d3a050;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_LAB_00d3a060;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 **)((int)this + 0x380) = (undefined4 *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x374) = &PTR_LAB_00d3a070;
  *(undefined4 *)((int)this + 0x388) = 0;
  piVar2 = (int *)((int)this + 0x38c);
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(int **)((int)this + 0x398) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d3a080;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  piVar5 = (int *)((int)this + 0x3a4);
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(int **)((int)this + 0x3b0) = piVar5;
  *piVar5 = (int)&PTR_FUN_00d2dba4;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  local_4 = 5;
  FUN_00a09210('\x01');
  if ((((*(int *)((int)this + 0x358) != 0) || (*(int *)((int)this + 0x370) != 0)) ||
      (*(int *)((int)this + 0x388) != 0)) ||
     ((*(int *)((int)this + 0x3a0) != 0 || (*(int *)((int)this + 0x3b8) != 0)))) {
    puVar3 = *(undefined4 **)((int)this + 0x3a0);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)((int)this + 0x3a0) = 0;
      (**(code **)*piVar2)();
    }
    FUN_006a00a0((int)this);
    (**(code **)(*piVar5 + 4))();
    *(undefined4 *)((int)this + 0x3b8) = 0;
    (**(code **)*piVar5)();
  }
  (**(code **)(*piVar5 + 4))();
  *(undefined4 *)((int)this + 0x3b8) = param_1;
  (**(code **)*piVar5)();
  this_00 = operator_new(0x438);
  if (this_00 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    puStack_24 = &DAT_00000014;
    _strncpy(pcStack_2c,"ui/gridbutton.dds",0x11);
    uStack_28 = 0x11;
    pcStack_2c[0x11] = '\0';
    local_4 = CONCAT31(local_4._1_3_,7);
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0x3f200000;
    uStack_30 = 0x3f200000;
    piVar5 = FUN_006a1e60(this_00,(int *)&pcStack_2c,0x42000000,0x42000000,&uStack_3c);
  }
  local_4 = 8;
  (**(code **)(*piVar2 + 4))();
  *(int **)((int)this + 0x3a0) = piVar5;
  (**(code **)*piVar2)();
  local_4 = 5;
  if ((this_00 != (void *)0x0) && (&DAT_00000014 < puStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  (**(code **)(**(int **)((int)this + 0x3a0) + 0x5c))(2,*(undefined4 *)((int)this + 0x3b8),0);
  (**(code **)(**(int **)((int)this + 0x3a0) + 100))(1,*(undefined4 *)((int)this + 0x3b8),0);
  do {
    cVar4 = (**(code **)(**(int **)((int)this + 0x3a0) + 0x50))(1);
  } while (cVar4 != '\0');
  ExceptionList = puStack_24;
  return this;
}


//// FUNCTION FUN_006a23b0 @ 006a23b0 ////

undefined4 * __thiscall FUN_006a23b0(void *this,byte param_1)

{
  FUN_006a0b20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006a28c0 @ 006a28c0 ////

undefined4 * __thiscall FUN_006a28c0(void *this,byte param_1)

{
  FUN_006a12d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006a2af0 @ 006a2af0 ////

undefined4 * __thiscall FUN_006a2af0(void *this,byte param_1)

{
  FUN_006a1aa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006a2d10 @ 006a2d10 ////

undefined4 * __thiscall FUN_006a2d10(void *this,byte param_1)

{
  FUN_006a1cf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006a3140 @ 006a3140 ////

undefined4 * __thiscall FUN_006a3140(void *this,byte param_1)

{
  FUN_006a2020(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006a3370 @ 006a3370 ////

void __cdecl FUN_006a3370(int *param_1)

{
  undefined4 uVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8c76;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_009b42c0();
  if ((char)uVar1 != '\0') {
    if (DAT_0104db34 != (undefined4 *)0x0) {
      FUN_0069ffa0();
    }
    this = operator_new(0x3bc);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_006a2120(this,param_1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104db20[1])();
    DAT_0104db34 = puVar2;
    (*(code *)*DAT_0104db20)();
    puVar2 = operator_new(0xbc);
    local_4 = 1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00744eb0(puVar2);
    }
    local_4 = 0xffffffff;
    FUN_0073e510(DAT_0104db34,puVar2);
    (**(code **)(*param_1 + 0xc))(DAT_0104db34,1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006a3460 @ 006a3460 ////

void __fastcall FUN_006a3460(int param_1)

{
  *(undefined4 *)(param_1 + 0x360) = 0;
  return;
}


//// FUNCTION FUN_006a3480 @ 006a3480 ////

int * __thiscall FUN_006a3480(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_006a34e0 @ 006a34e0 ////

undefined4 * FUN_006a34e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8c8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0xa4);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    this = FUN_0046f7a0(puVar2);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(this,param_2);
  (**(code **)(this[0xe] + 4))();
  this[0x13] = param_1;
  (**(code **)this[0xe])();
  (**(code **)(this[0x14] + 4))();
  this[0x19] = param_3;
  (**(code **)this[0x14])();
  piVar1 = this + 0x1a;
  this[0x1e] = *(int *)(DAT_0104cdf4 + 0x3c) + 0x32;
  this[0x1b] = &DAT_0104db74;
  *piVar1 = (int)DAT_0104db74;
  *(int **)((int)DAT_0104db74 + 4) = piVar1;
  DAT_0104db74 = piVar1;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_006a35b0 @ 006a35b0 ////

void FUN_006a35b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  
  FUN_009abde0();
  puVar2 = DAT_0104db5c;
  uVar3 = extraout_ECX;
  if (DAT_0104db5c != (undefined4 *)0x0) {
    iVar1 = DAT_0104db5c[0x12];
    DAT_0104db5c[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104db48[1])();
    DAT_0104db5c = (undefined4 *)0x0;
    (*(code *)*DAT_0104db48)();
    uVar3 = extraout_ECX_00;
  }
  FUN_00887b90(uVar3);
  FUN_006420c0();
  FUN_00664810();
  FUN_0065d710();
  FUN_0073e770();
  FUN_005ef440();
  FUN_0071bdc0();
  FUN_005e94c0();
  return;
}


//// FUNCTION FUN_006a3620 @ 006a3620 ////

void FUN_006a3620(void)

{
  undefined4 local_6c [3];
  undefined1 local_60;
  uint local_5c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8ca8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009910f0(local_6c);
  local_5c = local_5c & 0xbfffffff;
  local_4 = 0;
  local_60 = 6;
  FUN_0041f350(&local_48);
  local_44 = local_6c;
  local_2c = DAT_0105c400;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = DAT_0105c404;
  local_24 = 0;
  local_40 = 0xc0000000;
  BuildAndDrawPrimitive((int)&local_48);
  local_4 = 0xffffffff;
  FUN_00990ec0((int)local_6c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006a36e0 @ 006a36e0 ////

undefined4 FUN_006a36e0(void)

{
  return DAT_0104dba8;
}


//// FUNCTION WInterface_Tick @ 006a3720 ////

void __fastcall WInterface_Tick(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  wchar_t local_1c [6];
  undefined4 uStack_10;
  
  WWindow_Tick(param_1);
  param_1[0xd8] = param_1[0xd8] + 1;
  if (DAT_0104d82c != 0) {
    bVar1 = FUN_005e9250(DAT_0104d82c);
    if (bVar1) goto LAB_006a37b0;
  }
  uStack_10 = 0x6a3749;
  uVar2 = FUN_005540f0(10);
  if ((char)uVar2 != '\0') {
    FUN_0053ca50();
    pwVar6 = local_1c;
    local_1c[0] = L'\0';
    uVar7 = 0;
    uVar8 = 10;
    uVar3 = FUN_00ace02d(L"quicksave.jad");
    FUN_004036d0(&stack0xffffffd8,L"quicksave.jad",uVar3);
    AutosaveSystem_TriggerAutosave(pwVar6,uVar7,uVar8);
  }
  uStack_10 = 0x6a379f;
  uVar2 = FUN_005540f0(0xb);
  if ((char)uVar2 != '\0') {
    FUN_0053ca50();
    FUN_004b4810();
  }
LAB_006a37b0:
  uStack_10 = 0x6a37b7;
  uVar2 = FUN_005540f0(0x13);
  if ((char)uVar2 != '\0') {
    iVar4 = FUN_007e5510();
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_007e5510();
      FUN_007e6180(piVar5);
    }
  }
  uStack_10 = 0x6a37da;
  uVar2 = FUN_005540f0(0x14);
  if ((char)uVar2 != '\0') {
    iVar4 = FUN_007e5510();
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_007e5510();
      FUN_007e6630(piVar5);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_006a3800 @ 006a3800 ////

int FUN_006a3800(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar3 = DAT_0104db68;
  if (DAT_0104db68 != &DAT_0104db74) {
    while (((iVar2 = FUN_0046f5e0(puVar3[2]), iVar2 != param_2 ||
            (*(int *)(puVar3[2] + 0x4c) != param_1)) || (*(int *)(puVar3[2] + 100) != param_3))) {
      puVar1 = puVar3 + 1;
      puVar3 = (undefined4 *)*puVar1;
      if ((undefined4 *)*puVar1 == &DAT_0104db74) {
        return 0;
      }
    }
    iVar2 = puVar3[2];
    if (*(undefined4 **)(iVar2 + 0x6c) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar2 + 0x6c) = *(undefined4 *)(iVar2 + 0x68);
    }
    if (*(int *)(iVar2 + 0x68) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 0x68) + 4) = *(undefined4 *)(iVar2 + 0x6c);
    }
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_006a3880 @ 006a3880 ////

void __fastcall FUN_006a3880(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d3a708;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_006a38d0 @ 006a38d0 ////

void __fastcall FUN_006a38d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3a708;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006a3920 @ 006a3920 ////

void __fastcall FUN_006a3920(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d3a718;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_006a3970 @ 006a3970 ////

void __fastcall FUN_006a3970(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3a718;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006a39c0 @ 006a39c0 ////

undefined4 __fastcall FUN_006a39c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  BYTE BVar7;
  void *pvVar8;
  undefined **ppuStack_44;
  int iStack_40;
  int *piStack_3c;
  undefined ***pppuStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 uStack_24;
  undefined1 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8d57;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d3a744;
  param_1[0x14] = &PTR_FUN_00d3a728;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = param_1 + 0xd1;
  param_1[0xd1] = &PTR_LAB_00d3a708;
  param_1[0xd6] = 0;
  pvVar8 = (void *)0x0;
  local_4 = 1;
  param_1[0x45] = param_1[0x45] | 2;
  iVar1 = FUN_0071b2a0();
  FUN_00741d80(param_1,iVar1,pvVar8);
  param_1[0xd8] = 0;
  piVar2 = FUN_007a1630('\0');
  iVar1 = *piVar2;
  FUN_0071afe0();
  FUN_0071b2a0();
  (**(code **)(iVar1 + 0x5c))();
  iVar1 = *piVar2;
  FUN_0071aff0();
  FUN_0071b2a0();
  (**(code **)(iVar1 + 100))();
  iStack_30 = FUN_0071b2a0();
  pppuStack_38 = &ppuStack_44;
  iStack_40 = 0;
  piStack_3c = (int *)0x0;
  ppuStack_44 = &PTR_FUN_00d18c2c;
  if (iStack_30 != 0) {
    piStack_3c = (int *)(iStack_30 + 0x18);
    iStack_40 = *piStack_3c;
    *(int **)(*piStack_3c + 4) = &iStack_40;
    *piStack_3c = (int)&iStack_40;
  }
  iStack_2c = 0;
  iStack_28 = 0;
  piVar2[0x3a] = 2;
  uStack_1c = 2;
  (**(code **)(piVar2[0x3b] + 4))();
  piVar2[0x40] = iStack_30;
  (**(code **)piVar2[0x3b])();
  piVar2[0x41] = iStack_2c;
  piVar2[0x42] = iStack_28;
  uStack_1c = 1;
  if (piStack_3c != (int *)0x0) {
    *piStack_3c = iStack_40;
  }
  if (iStack_40 != 0) {
    *(int **)(iStack_40 + 4) = piStack_3c;
  }
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0xc))();
  piVar3 = (int *)FUN_0071b2b0();
  piVar4 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0x14))();
  (**(code **)(*piVar4 + 0x14))();
  pvVar8 = operator_new(0x3a0);
  uStack_24 = 3;
  if (pvVar8 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007e6e30(pvVar8,(undefined4 *)0x0);
  }
  iVar1 = *piVar3;
  uStack_24 = 1;
  FUN_0071afe0();
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x5c))();
  FUN_007e6020(piVar3,'\x01');
  iVar1 = *piVar3;
  (**(code **)(*piVar2 + 0x14))();
  FUN_0071b2a0();
  (**(code **)(iVar1 + 100))();
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))();
  pvVar8 = operator_new(0x3d8);
  ppuStack_44._0_1_ = 4;
  if (pvVar8 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = StarUpdate_Constructor(pvVar8,'\x01');
  }
  iVar1 = *piVar2;
  ppuStack_44 = (undefined **)CONCAT31(ppuStack_44._1_3_,1);
  FUN_0071afe0();
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x5c))();
  (**(code **)(*piVar2 + 100))();
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))();
  pvVar8 = operator_new(0x394);
  if (pvVar8 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007e48f0(pvVar8,'\x01');
  }
  iVar1 = *piVar2;
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x5c))();
  (**(code **)(*piVar2 + 100))();
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))();
  pvVar8 = operator_new(0x394);
  if (pvVar8 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_008045e0(pvVar8,'\x01');
  }
  iVar1 = *piVar2;
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x5c))();
  (**(code **)(*piVar2 + 100))();
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))();
  pvVar8 = operator_new(0x394);
  if (pvVar8 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007de600(pvVar8,'\x01');
  }
  iVar1 = *piVar2;
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x5c))();
  (**(code **)(*piVar2 + 100))();
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))();
  pvVar8 = operator_new(0x37c);
  if (pvVar8 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007e1560(pvVar8,'\x01');
  }
  iVar1 = *piVar2;
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x5c))();
  (**(code **)(*piVar2 + 100))();
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))();
  pvVar8 = operator_new(0x37c);
  if (pvVar8 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007ebc90(pvVar8,'\x01');
  }
  iVar1 = *piVar2;
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x5c))();
  (**(code **)(*piVar2 + 100))();
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))();
  pvVar8 = operator_new(0x37c);
  if (pvVar8 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007f9ac0(pvVar8,'\x01');
  }
  iVar1 = *piVar2;
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x5c))();
  (**(code **)(*piVar2 + 100))();
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))();
  puVar5 = operator_new(0x3a4);
  if (puVar5 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = MoviePlayback_Constructor(puVar5);
  }
  iVar1 = *piVar2;
  FUN_0071afe0();
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x60))();
  (**(code **)(*piVar2 + 100))();
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))();
  pvVar8 = operator_new(0x39c);
  if (pvVar8 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007365f0(pvVar8,'\x01');
  }
  iVar1 = *piVar2;
  BVar7 = '\0';
  iVar6 = FUN_0071b2b0();
  (**(code **)(iVar1 + 0x5c))(1,iVar6);
  (**(code **)(*piVar2 + 100))(2,piVar3);
  piVar4 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar4 + 0xc))(piVar2,2);
  GetSystemPowerStatus((LPSYSTEM_POWER_STATUS)&stack0xfffffe64);
  if (-1 < (char)BVar7) {
    piVar2 = operator_new(900);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_0063a8f0(piVar2);
    }
    piVar4 = (int *)FUN_0071b2b0();
    (**(code **)(*piVar4 + 0xc))(piVar2,2);
  }
  ExceptionList = piVar3;
  return 0xc1800000;
}


//// FUNCTION FUN_006a3fb0 @ 006a3fb0 ////

undefined4 * __thiscall FUN_006a3fb0(void *this,byte param_1)

{
  FUN_006a3fd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006a3fd0 @ 006a3fd0 ////

void __fastcall FUN_006a3fd0(undefined4 *param_1)

{
  param_1[0xd1] = &PTR_LAB_00d3a708;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd6] = 0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_006a4050 @ 006a4050 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a4050(void)

{
  undefined4 uVar1;
  int *piVar2;
  float10 fVar3;
  char *local_108;
  undefined4 local_104;
  uint local_100;
  char local_fc [16];
  undefined4 uStack_ec;
  undefined4 *puStack_e8;
  undefined4 local_e4 [52];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8dcb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0071c380();
  FUN_00559fb0(local_e4);
  local_108 = local_fc;
  local_4 = 0;
  local_fc[0] = '\0';
  local_104 = 0;
  local_100 = 0x14;
  _strncpy(local_108,"gui",3);
  local_104 = 3;
  local_108[3] = '\0';
  local_4._0_1_ = 1;
  FUN_0055be10(local_e4,&local_108,'\0');
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  local_108 = local_fc;
  DAT_0104db38 = 0.0;
  _DAT_0104db3c = 0.0;
  _DAT_0104db40 = 0.0;
  _DAT_0104db44 = 0.0;
  local_fc[0] = '\0';
  local_104 = 0;
  local_100 = 0x14;
  _strncpy(local_108,"FadeDuration",0xc);
  local_104 = 0xc;
  local_108[0xc] = '\0';
  local_4._0_1_ = 2;
  fVar3 = FUN_00558610(local_e4,&local_108,0.0);
  DAT_0104db38 = (float)fVar3;
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  local_108 = local_fc;
  local_fc[0] = '\0';
  local_104 = 0;
  local_100 = 0x14;
  _strncpy(local_108,"DropIconRange",0xd);
  local_104 = 0xd;
  local_108[0xd] = '\0';
  local_4._0_1_ = 3;
  fVar3 = FUN_00558610(local_e4,&local_108,0.0);
  _DAT_0104db3c = (float)fVar3;
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  local_108 = local_fc;
  local_fc[0] = '\0';
  local_104 = 0;
  local_100 = 0x20;
  local_108 = _malloc(0x20);
  _strncpy(local_108,"DropIconRangeOrnament",0x15);
  local_104 = 0x15;
  local_108[0x15] = '\0';
  local_4._0_1_ = 4;
  fVar3 = FUN_00558610(local_e4,&local_108,0.0);
  _DAT_0104db40 = (float)fVar3;
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  local_108 = local_fc;
  local_fc[0] = '\0';
  local_104 = 0;
  local_100 = 0x14;
  _strncpy(local_108,"DropAutoAppearDelay",0x13);
  local_104 = 0x13;
  local_108[0x13] = '\0';
  local_4._0_1_ = 5;
  fVar3 = FUN_00558610(local_e4,&local_108,0.0);
  _DAT_0104db44 = (float)fVar3;
  local_4._0_1_ = 0;
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  FUN_00887190();
  FUN_0064d8f0();
  FUN_00664760();
  FUN_0065d700();
  thunk_FUN_0082d0e0();
  FUN_007fdad0();
  FUN_005ef390();
  uVar1 = FUN_00642110();
  (*(code *)DAT_0104db94[1])();
  DAT_0104dba8 = uVar1;
  (*(code *)*DAT_0104db94)();
  puStack_e8 = operator_new(0x364);
  local_4._0_1_ = 6;
  if (puStack_e8 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_006a39c0(puStack_e8);
  }
  local_4._0_1_ = 0;
  (*(code *)DAT_0104db48[1])();
  DAT_0104db5c = uVar1;
  (*(code *)*DAT_0104db48)();
  local_108 = local_fc;
  local_fc[0] = '\0';
  local_104 = 0;
  local_100 = 0x14;
  _strncpy(local_108,"ui/cursor.dds",0xd);
  local_104 = 0xd;
  local_108[0xd] = '\0';
  local_4._0_1_ = 7;
  FUN_009abe60(0x42000000,&local_108);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  piVar2 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar2 + 0xc))(DAT_0104db5c,1);
  FUN_00471840("MT_UI_CLOSE",0x283);
  FUN_00471840("MT_UI_BACK",0x2d3);
  FUN_00471840("MT_UI_SHOW",0x3c3);
  FUN_00471840("MT_UI_HIDE",0x3eb);
  FUN_00471840("MT_UI_OPENCOSTUMEFIDDLER",0x5cb);
  FUN_00471840("MT_UI_OPENPROJECTDESIGN",0x61b);
  FUN_00471840("MT_UI_OPENALLLEAGUES",0x43b);
  FUN_00471840("MT_UI_CLOSEALLLEAGUES",0x413);
  FUN_00471840("MT_UI_OPENSTARLEAGUE",0x463);
  FUN_00471840("MT_UI_OPENSTUDIOLEAGUE",0x48b);
  FUN_00471840("MT_UI_OPENMOVIELEAGUE",0x4b3);
  FUN_00471840("MT_UI_CLOSESTARLEAGUE",0x4db);
  FUN_00471840("MT_UI_CLOSESTUDIOLEAGUE",0x503);
  FUN_00471840("MT_UI_CLOSEMOVIELEAGUE",0x52b);
  FUN_005e9d90();
  pvStack_c = (void *)0xffffffff;
  FUN_00558920(&uStack_ec);
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_006a44f0 @ 006a44f0 ////

void FUN_006a44f0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  void *unaff_ESI;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8deb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_007fd5d0();
  if (iVar1 != 0) {
    iVar1 = FUN_007fd5d0();
    FUN_00801020(iVar1);
  }
  iVar1 = FUN_007ef840();
  if (iVar1 != 0) {
    iVar1 = FUN_007ef840();
    FUN_007f2830(iVar1);
  }
  iVar1 = FUN_007e34b0();
  if (iVar1 != 0) {
    iVar1 = FUN_007e34b0();
    FUN_007e47a0(iVar1);
  }
  iVar1 = FUN_00803080();
  if (iVar1 != 0) {
    iVar1 = FUN_00803080();
    FUN_00804490(iVar1);
  }
  iVar1 = FUN_007dc3a0();
  if (iVar1 != 0) {
    iVar1 = FUN_007dc3a0();
    FUN_007de4b0(iVar1);
  }
  iVar1 = FUN_007e00e0();
  if (iVar1 != 0) {
    iVar1 = FUN_007e00e0();
    FUN_007e1410(iVar1);
  }
  iVar1 = FUN_007ea7b0();
  if (iVar1 != 0) {
    iVar1 = FUN_007ea7b0();
    FUN_007ebb40(iVar1);
  }
  iVar1 = FUN_007f8640();
  if (iVar1 != 0) {
    iVar1 = FUN_007f8640();
    FUN_007f9970(iVar1);
  }
  puVar3 = DAT_0104db5c;
  uVar5 = 0;
  if (DAT_0104db5c != (undefined4 *)0x0) {
    iVar1 = DAT_0104db5c[0x12];
    DAT_0104db5c[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (*(code *)DAT_0104db48[1])();
    DAT_0104db5c = (undefined4 *)0x0;
    (*(code *)*DAT_0104db48)();
  }
  FUN_006420c0();
  FUN_00664810();
  FUN_0065d710();
  FUN_0073e770();
  FUN_005ef440();
  FUN_0071c440();
  FUN_00887b90(extraout_ECX);
  FUN_0064d8f0();
  FUN_00664760();
  FUN_0065d700();
  thunk_FUN_0082d0e0();
  FUN_005ef390();
  uVar2 = FUN_00642110();
  (*(code *)DAT_0104db94[1])();
  DAT_0104dba8 = uVar2;
  (*(code *)*DAT_0104db94)();
  puVar3 = operator_new(0x364);
  uStack_4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    uVar5 = FUN_006a39c0(puVar3);
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104db48[1])();
  DAT_0104db5c = (undefined4 *)uVar5;
  (*(code *)*DAT_0104db48)();
  piVar4 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar4 + 0xc))(DAT_0104db5c,1);
  ExceptionList = unaff_ESI;
  return;
}


//// FUNCTION FUN_006a4710 @ 006a4710 ////

void FUN_006a4710(void)

{
  int iVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  
  iVar1 = *unaff_ESI;
  (**(code **)(*unaff_EDI + 0x14))();
  (**(code **)(*unaff_ESI + 0x14))();
  (**(code **)(iVar1 + 100))(1);
  return;
}


//// FUNCTION FUN_006a47d0 @ 006a47d0 ////

void * FUN_006a47d0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_00acd42c();
  iVar1 = (int)uVar4;
  uVar4 = FUN_00acd42c();
  iVar2 = (int)uVar4;
  uVar4 = FUN_00acd42c();
  iVar3 = (int)uVar4;
  uVar4 = FUN_00acd42c();
  FUN_0040a530(param_1,(int)uVar4,iVar3,iVar2,iVar1);
  return param_1;
}


//// FUNCTION FUN_006a4910 @ 006a4910 ////

int * __thiscall FUN_006a4910(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_006a4990 @ 006a4990 ////

void __fastcall FUN_006a4990(int *param_1,undefined4 param_2)

{
  float fVar1;
  int *piVar2;
  ulonglong uVar3;
  float local_8;
  int local_4;
  
  if (*(char *)((int)param_1 + 0x3ad) != '\0') goto LAB_006a4b1c;
  piVar2 = param_1;
  if (*(char *)((int)param_1 + 0x3ae) != '\0') {
    if (param_1[0xec] != 0) {
      uVar3 = FUN_00990ae0(param_1[0xec],param_2);
      local_4 = (int)uVar3 - param_1[0xec];
      local_8 = (float)local_4;
      if (local_4 < 0) {
        local_8 = local_8 + 4.2949673e+09;
      }
      fVar1 = (float)DAT_00e57250;
      if (DAT_00e57250 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_8 = local_8 / fVar1;
      if (1.0 <= local_8) {
        local_8 = 1.0;
      }
      FUN_006a47d0(&local_8);
      if (param_1[0xdc] != 0) {
        FUN_0063efb0(*(void **)(param_1[0xdc] + 0x3a0),param_1[0xea],local_8);
        FUN_0073fb40(param_1);
        return;
      }
      goto LAB_006a4b1c;
    }
    piVar2 = (int *)0x0;
    if (*(char *)((int)param_1 + 0x3ae) != '\0') goto LAB_006a4b1c;
  }
  if (param_1[0xed] != 0) {
    param_1[0xec] = 0;
    uVar3 = FUN_00990ae0(piVar2,param_2);
    local_4 = (int)uVar3 - param_1[0xed];
    local_8 = (float)local_4;
    if (local_4 < 0) {
      local_8 = local_8 + 4.2949673e+09;
    }
    fVar1 = (float)DAT_00e57250;
    if (DAT_00e57250 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    local_8 = local_8 / fVar1;
    if (1.0 <= local_8) {
      local_8 = 1.0;
    }
    FUN_006a47d0(&local_4);
    if (param_1[0xdc] != 0) {
      FUN_0063efb0(*(void **)(param_1[0xdc] + 0x3a0),param_1[0xea],local_4);
    }
    if (1.0 <= local_8) {
      param_1[0xed] = 0;
    }
  }
LAB_006a4b1c:
  FUN_0073fb40(param_1);
  return;
}


//// FUNCTION FUN_006a4b30 @ 006a4b30 ////

void __fastcall FUN_006a4b30(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  float *pfVar3;
  float10 fVar4;
  int iVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  int iVar8;
  float local_1c [2];
  void *pvStack_14;
  undefined1 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8e0b;
  pvStack_c = ExceptionList;
  iVar5 = param_1[0xe9];
  local_1c[0] = 0.0;
  if (iVar5 == 0) {
    ExceptionList = &pvStack_c;
    if ((char)param_1[0xf1] == '\0') {
      iVar8 = 0;
      pTVar7 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar6 = &TM::TMObject::RTTI_Type_Descriptor;
      iVar5 = 0;
      ExceptionList = &pvStack_c;
      piVar1 = (int *)(**(code **)(*(int *)param_1[0xd6] + 4))();
      pvVar2 = (void *)FUN_00ace790(piVar1,iVar5,pTVar6,pTVar7,iVar8);
      if (pvVar2 != (void *)0x0) {
        pfVar3 = (float *)FUN_00585ff0(pvVar2,local_1c);
        goto LAB_006a4c86;
      }
      goto LAB_006a4c8c;
    }
LAB_006a4c96:
    if (param_1[0xe9] != 2) goto LAB_006a4d2d;
  }
  else {
    if (iVar5 == 2) {
      if ((char)param_1[0xf1] == '\0') {
        iVar8 = 0;
        pTVar7 = &TM::CProject::RTTI_Type_Descriptor;
        pTVar6 = &TM::TMObject::RTTI_Type_Descriptor;
        iVar5 = 0;
        ExceptionList = &pvStack_c;
        piVar1 = (int *)(**(code **)(*(int *)param_1[0xd6] + 4))();
        pvVar2 = (void *)FUN_00ace790(piVar1,iVar5,pTVar6,pTVar7,iVar8);
        if (pvVar2 == (void *)0x0) {
          iVar8 = 0;
          pTVar7 = &TM::CProjectAI::RTTI_Type_Descriptor;
          pTVar6 = &TM::TMObject::RTTI_Type_Descriptor;
          iVar5 = 0;
          piVar1 = (int *)(**(code **)(*(int *)param_1[0xd6] + 4))();
          pvVar2 = (void *)FUN_00ace790(piVar1,iVar5,pTVar6,pTVar7,iVar8);
          if (pvVar2 == (void *)0x0) goto LAB_006a4c8c;
          pfVar3 = (float *)FUN_005a4060(pvVar2,local_1c);
        }
        else {
          pfVar3 = (float *)FUN_005b27d0(pvVar2,local_1c);
        }
LAB_006a4c86:
        local_1c[0] = *pfVar3;
      }
      else {
        ExceptionList = &pvStack_c;
        fVar4 = (float10)(**(code **)(*(int *)param_1[0xd6] + 0x38))();
        FUN_00407070(local_1c,(float)fVar4);
      }
    }
    else {
      ExceptionList = &pvStack_c;
      if (iVar5 == 1) {
        ExceptionList = &pvStack_c;
        if ((char)param_1[0xf1] != '\0') goto LAB_006a4c96;
        iVar8 = 0;
        pTVar7 = &TM::CStudio::RTTI_Type_Descriptor;
        pTVar6 = &TM::TMObject::RTTI_Type_Descriptor;
        iVar5 = 0;
        ExceptionList = &pvStack_c;
        piVar1 = (int *)(**(code **)(*(int *)param_1[0xd6] + 4))();
        piVar1 = (int *)FUN_00ace790(piVar1,iVar5,pTVar6,pTVar7,iVar8);
        if (piVar1 != (int *)0x0) {
          pfVar3 = (float *)(**(code **)(*piVar1 + 0x84))();
          goto LAB_006a4c86;
        }
      }
    }
LAB_006a4c8c:
    if ((char)param_1[0xf1] != '\0') goto LAB_006a4c96;
  }
  pvStack_14 = operator_new(0x350);
  uStack_4 = 0;
  if (pvStack_14 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    puStack_10 = &stack0xffffffd0;
    piVar1 = FUN_0072e9f0(pvStack_14,(int)local_1c[0],DAT_00e572a4);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(param_1[0xe3] + 4))();
  param_1[0xe8] = (int)piVar1;
  (**(code **)param_1[0xe3])();
  (**(code **)(*(int *)param_1[0xe8] + 0x5c))(1);
  (**(code **)(*(int *)param_1[0xe8] + 100))(1,param_1,DAT_00e57284);
LAB_006a4d2d:
  if ((int *)param_1[0xe8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe8] + 0x50))();
    (**(code **)(*param_1 + 0xc))(param_1[0xe8]);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006a4d60 @ 006a4d60 ////

void __fastcall FUN_006a4d60(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  
  bVar1 = *(byte *)(param_1 + 0x3a8);
  if (*(char *)(param_1 + 0x3c4) == '\0') {
    iVar4 = *(int *)(param_1 + 0x3a4);
    if (iVar4 == 0) {
      pTVar8 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar7 = &TM::TMObject::RTTI_Type_Descriptor;
      iVar5 = iVar4;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x358) + 4))();
      iVar4 = FUN_00ace790(piVar3,iVar4,pTVar7,pTVar8,iVar5);
      if (iVar4 != 0) {
        iVar4 = FUN_005773c0(iVar4);
LAB_006a4e19:
        iVar5 = GetPlayerStudio();
        if (iVar4 == iVar5) {
LAB_006a4e24:
          *(undefined1 *)(param_1 + 0x3ac) = 1;
        }
      }
    }
    else if (iVar4 == 2) {
      iVar5 = 0;
      pTVar8 = &TM::CProject::RTTI_Type_Descriptor;
      pTVar7 = &TM::TMObject::RTTI_Type_Descriptor;
      iVar4 = 0;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x358) + 4))();
      iVar4 = FUN_00ace790(piVar3,iVar4,pTVar7,pTVar8,iVar5);
      if (iVar4 != 0) goto LAB_006a4e24;
    }
    else if (iVar4 == 1) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x358) + 4))();
      goto LAB_006a4e19;
    }
  }
  else {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x358) + 0x3c))();
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x3ac) = 1;
    }
  }
  cVar2 = *(char *)(param_1 + 0x3ac);
  if ((bVar1 & 1) == 0) {
    uVar6 = DAT_00e572d0;
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x3c0) = DAT_00e572dc;
      goto LAB_006a4e71;
    }
  }
  else {
    uVar6 = DAT_00e572d4;
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x3c0) = DAT_00e572d8;
      goto LAB_006a4e71;
    }
  }
  *(undefined4 *)(param_1 + 0x3c0) = uVar6;
LAB_006a4e71:
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0x370) != 0)) {
    FUN_0063efb0(*(void **)(*(int *)(param_1 + 0x370) + 0x3a0),*(uint *)(param_1 + 0x3a8),
                 *(undefined4 *)(param_1 + 0x3c0));
  }
  return;
}


//// FUNCTION FUN_006a5020 @ 006a5020 ////

undefined4 __fastcall FUN_006a5020(int param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined8 uVar4;
  int iVar5;
  TypeDescriptor *pTVar6;
  int iVar7;
  TypeDescriptor *pTVar8;
  char cVar9;
  int iVar10;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_1 + 0x3c4));
  if (*(char *)(param_1 + 0x3c4) != '\0') {
    if ((DAT_0104dbd8 != 0) && (*(int *)(param_1 + 0x370) == DAT_0104dbd8)) {
      uVar4 = FUN_006aa060(DAT_0104dbd8,param_2);
      uVar1 = (uint)uVar4;
      if (((char)uVar4 != '\0') && (*(int *)(param_1 + 0x3a4) == 2)) {
        uVar1 = FUN_006b3a10(extraout_ECX,(int)((ulonglong)uVar4 >> 0x20),0,param_1,
                             *(int *)(param_1 + 0x3a8),0,'\x01');
      }
    }
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  if ((DAT_0104dbd8 != 0) && (*(int *)(param_1 + 0x370) == DAT_0104dbd8)) {
    uVar4 = FUN_006aa060(DAT_0104dbd8,param_2);
    uVar1 = (uint)uVar4;
    if ((char)uVar4 != '\0') {
      piVar3 = *(int **)(param_1 + 0x358);
      iVar10 = 0;
      if (*(int *)(param_1 + 0x3a4) == 1) {
        iVar5 = *(int *)(param_1 + 0x3a8);
        iVar7 = 3;
        uVar4 = (**(code **)(*piVar3 + 4))();
        uVar2 = FUN_006b3a10(extraout_ECX_00,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4,param_1,
                             iVar5,iVar7,(char)iVar10);
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      if (*(int *)(param_1 + 0x3a4) == 0) {
        iVar5 = *(int *)(param_1 + 0x3a8);
        iVar7 = 2;
        uVar4 = (**(code **)(*piVar3 + 4))();
        uVar2 = FUN_006b3a10(extraout_ECX_01,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4,param_1,
                             iVar5,iVar7,(char)iVar10);
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      pTVar8 = &TM::CProjectAI::RTTI_Type_Descriptor;
      pTVar6 = &TM::TMObject::RTTI_Type_Descriptor;
      iVar5 = 0;
      piVar3 = (int *)(**(code **)(*piVar3 + 4))();
      iVar5 = FUN_00ace790(piVar3,iVar5,pTVar6,pTVar8,iVar10);
      iVar10 = *(int *)(param_1 + 0x3a8);
      cVar9 = '\0';
      uVar1 = (uint)(iVar5 != 0);
      uVar4 = (**(code **)(**(int **)(param_1 + 0x358) + 4))();
      uVar2 = FUN_006b3a10(extraout_ECX_02,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4,param_1,iVar10
                           ,uVar1,cVar9);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_006a51e0 @ 006a51e0 ////

int * __fastcall FUN_006a51e0(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  char local_38;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8eb0;
  pvStack_c = ExceptionList;
  local_38 = '\0';
  if (*(char *)(param_1 + 0x3ac) == '\0') {
    if (*(int *)(param_1 + 0x3c0) != DAT_00e572d0) {
      ExceptionList = &pvStack_c;
      pvVar1 = operator_new(0x360);
      local_4 = 9;
      if (pvVar1 == (void *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        local_2c = local_20;
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x20;
        local_2c = _malloc(0x20);
        _strncpy(local_2c,"ui/league_tables_arrow01.dds",0x1c);
        local_28 = 0x1c;
        local_2c[0x1c] = '\0';
        local_4 = CONCAT31(local_4._1_3_,10);
        local_38 = '\b';
        piVar2 = FUN_0069d820(pvVar1,&local_2c,0,0,0x3f800000,0x3f800000);
      }
      goto LAB_006a54c5;
    }
    ExceptionList = &pvStack_c;
    pvVar1 = operator_new(0x360);
    local_4 = 6;
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
      goto LAB_006a54e3;
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ui/league_tables_arrow02.dds",0x1c);
    local_28 = 0x1c;
    local_2c[0x1c] = '\0';
    local_4 = CONCAT31(local_4._1_3_,7);
    piVar2 = FUN_0069d820(pvVar1,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x3c0) == DAT_00e572d8) {
    ExceptionList = &pvStack_c;
    pvVar1 = operator_new(0x360);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x20;
      local_2c = _malloc(0x20);
      _strncpy(local_2c,"ui/finance_arrow02.dds",0x16);
      local_28 = 0x16;
      local_2c[0x16] = '\0';
      local_4 = CONCAT31(local_4._1_3_,1);
      piVar2 = FUN_0069d820(pvVar1,&local_2c,0,0,0x3f800000,0x3f800000);
    }
    local_38 = pvVar1 != (void *)0x0;
LAB_006a54c5:
    if (local_38 == '\0') goto LAB_006a54e3;
  }
  else {
    ExceptionList = &pvStack_c;
    pvVar1 = operator_new(0x360);
    local_4 = 3;
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
      goto LAB_006a54e3;
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ui/finance_arrow01.dds",0x16);
    local_28 = 0x16;
    local_2c[0x16] = '\0';
    local_4 = CONCAT31(local_4._1_3_,4);
    piVar2 = FUN_0069d820(pvVar1,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  if (0x14 < local_24) {
    local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
LAB_006a54e3:
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x74))();
  iVar3 = *(int *)(param_1 + 0x3bc);
  if ((*(int *)(param_1 + 0x3b8) == iVar3) || (iVar3 == 0)) {
    fVar4 = FUN_004012c0(-1.5707964);
    iVar3 = (**(code **)(*piVar2 + 0x108))();
  }
  else {
    if (*(int *)(param_1 + 0x3b8) <= iVar3) {
      ExceptionList = pvStack_14;
      return piVar2;
    }
    fVar4 = FUN_004012c0(3.1415927);
    iVar3 = (**(code **)(*piVar2 + 0x108))();
  }
  *(float *)(iVar3 + 0xc) = (float)fVar4;
  ExceptionList = pvStack_14;
  return piVar2;
}


//// FUNCTION FUN_006a5570 @ 006a5570 ////

/* WARNING: Removing unreachable block (ram,0x006a5d44) */
/* WARNING: Removing unreachable block (ram,0x006a5b54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a5570(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  void *this;
  float10 fVar9;
  float10 fVar10;
  undefined2 *puStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined2 auStack_238 [2];
  void *pvStack_234;
  uint uStack_230;
  uint *puStack_22c;
  undefined4 uStack_228;
  uint uStack_224;
  uint auStack_220 [2];
  uint *_Dest;
  uint uStack_1e0;
  uint uStack_1dc;
  int *piStack_1d8;
  undefined1 *puStack_1d4;
  undefined4 uStack_1d0;
  int *piStack_1cc;
  float fVar11;
  float fVar12;
  int *piStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int *piStack_1b0;
  undefined1 *puStack_1ac;
  undefined4 uStack_1a8;
  uint uVar13;
  undefined1 *puStack_188;
  int *piStack_184;
  float fStack_180;
  float *pfStack_160;
  undefined1 *puStack_15c;
  uint uStack_158;
  float fStack_154;
  undefined *puStack_150;
  undefined2 *local_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined2 auStack_128 [4];
  void *apvStack_120 [2];
  undefined1 *puStack_118;
  undefined2 *puStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined2 auStack_108 [4];
  undefined4 uStack_100;
  undefined1 uStack_c0;
  undefined1 uStack_bc;
  void *apvStack_b0 [2];
  uint uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8fa2;
  local_c = ExceptionList;
  local_134 = (undefined2 *)0x0;
  if (((int *)param_1[0xd6] != (int *)0x0) &&
     ((ExceptionList = &local_c, (char)param_1[0xf1] != '\0' ||
      (ExceptionList = &local_c, iVar1 = (**(code **)(*(int *)param_1[0xd6] + 4))(), iVar1 != 0))))
  {
    iVar1 = (**(code **)(*(int *)param_1[0xd6] + 0x28))();
    param_1[0xee] = iVar1;
    iVar2 = (**(code **)(*(int *)param_1[0xd6] + 0x30))();
    iVar1 = *param_1;
    param_1[0xef] = iVar2;
    puStack_150 = (undefined *)0x6a55f0;
    fVar9 = (float10)(**(code **)(*(int *)param_1[0xf7] + 0x10))();
    puStack_150 = (undefined *)(float)fVar9;
    fStack_154 = 9.765404e-39;
    (**(code **)(iVar1 + 0x74))();
    fVar12 = (float)param_1[0xea];
    if (param_1[0xea] < 0) {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    uStack_158 = param_1[0xf7];
    fStack_154 = fVar12 * DAT_00e572b4 + _DAT_00e57258;
    puStack_15c = (undefined1 *)0x1;
    pfStack_160 = (float *)0x6a5634;
    (**(code **)(*param_1 + 100))();
    pfStack_160 = (float *)0x0;
    (**(code **)(*param_1 + 0x5c))();
    (**(code **)(*param_1 + 0x50))();
    local_134 = auStack_128;
    auStack_128[0] = 0;
    uStack_130 = 0;
    uStack_12c = 10;
    uVar3 = FUN_00ace02d((short *)&DAT_00d3aaa8);
    FUN_004036d0(&local_134,L"s5",uVar3);
    puStack_114 = auStack_108;
    auStack_108[0] = 0;
    uStack_110 = 0;
    uStack_10c = 10;
    uStack_28 = 1;
    fStack_180 = 9.765685e-39;
    sVar4 = _swprintf((wchar_t *)apvStack_b0,0xd18f7c,(wchar_t *)param_1[0xee]);
    FUN_0040cae0(&puStack_114,(wchar_t *)apvStack_b0,sVar4);
    puStack_15c = &stack0xfffffe70;
    FUN_008319b0((undefined4 *)&stack0xfffffe70,&local_134,&puStack_114);
    piVar5 = FUN_00833750();
    if (10 < uStack_10c) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_114);
    }
    uStack_28 = 0xffffffff;
    if (10 < uStack_12c) {
                    /* WARNING: Subroutine does not return */
      _free(local_134);
    }
    (**(code **)(*piVar5 + 0x88))();
    fStack_180 = 9.765886e-39;
    piVar8 = param_1;
    (**(code **)(*piVar5 + 0x5c))();
    iVar1 = *piVar5;
    fStack_180 = 9.765898e-39;
    fVar9 = (float10)(**(code **)(*param_1 + 0x14))();
    fStack_180 = 9.765914e-39;
    fVar10 = (float10)(**(code **)(*piVar5 + 0x14))();
    fStack_180 = (float)(((float10)(float)fVar9 - fVar10) * (float10)0.5);
    puStack_188 = (undefined1 *)0x1;
    piStack_184 = param_1;
    (**(code **)(iVar1 + 100))();
    (**(code **)(*piVar5 + 0x88))();
    pcVar6 = _malloc(0x20);
    _strncpy(pcVar6,"LEAGUETABLE_CURRENTRANK",0x17);
    uVar3 = 0x17;
    pcVar6[0x17] = '\0';
    uStack_48 = 2;
    uStack_1a8 = 0x6a57e4;
    FUN_009b5030(&puStack_114,(undefined4 *)&stack0xfffffe8c);
    uStack_48 = CONCAT31(uStack_48._1_3_,3);
    (**(code **)(*piVar5 + 0x90))();
    if (10 < uStack_110) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_118);
    }
    uStack_4c = 0xffffffff;
    if (0x14 < uVar3) {
                    /* WARNING: Subroutine does not return */
      _free(piVar8);
    }
    (**(code **)(*param_1 + 0xc))();
    pfStack_160 = &fStack_154;
    fStack_154 = (float)((uint)fStack_154 & 0xffff0000);
    puStack_15c = (undefined1 *)0x0;
    uStack_158 = 10;
    uVar3 = FUN_00ace02d((short *)&DAT_00d3aa88);
    FUN_004036d0(&pfStack_160,L"s8",uVar3);
    uStack_54 = 4;
    uStack_1a8 = 0x6a5891;
    puVar7 = FUN_009b5e60(apvStack_120,param_1[0xee]);
    puStack_188 = (undefined1 *)&piStack_1bc;
    uStack_54 = CONCAT31(uStack_54._1_3_,5);
    piStack_1cc = (int *)0x6a58ae;
    FUN_008319b0(&piStack_1bc,&pfStack_160,puVar7);
    piVar8 = FUN_00833750();
    if (&lpType_0000000a < puStack_118) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_120[0]);
    }
    uStack_54 = 0xffffffff;
    if (10 < uStack_158) {
                    /* WARNING: Subroutine does not return */
      _free(pfStack_160);
    }
    (**(code **)(*piVar8 + 0x88))();
    uStack_1a8 = 2;
    puStack_1ac = (undefined1 *)0x6a5911;
    (**(code **)(*piVar8 + 0x5c))();
    puStack_1ac = (undefined1 *)0x40000000;
    uStack_1b4 = 1;
    uStack_1b8 = 0x6a5921;
    piStack_1b0 = piVar5;
    (**(code **)(*piVar8 + 100))();
    uStack_1b8 = 1;
    piStack_1bc = piVar8;
    (**(code **)(*param_1 + 0xc))();
    piVar5 = FUN_006a51e0((int)param_1);
    fVar11 = DAT_00e572b4;
    (**(code **)(*piVar5 + 0x74))();
    uStack_1d0 = 1;
    puStack_1d4 = (undefined1 *)0x6a5953;
    piStack_1cc = param_1;
    (**(code **)(*piVar5 + 0x5c))();
    iVar1 = *piVar5;
    puStack_1d4 = (undefined1 *)0x6a595c;
    fVar9 = (float10)(**(code **)(*param_1 + 0x14))();
    fVar12 = (float)fVar9;
    puStack_1d4 = (undefined1 *)0x6a5967;
    fVar9 = (float10)(**(code **)(*piVar5 + 0x14))();
    puStack_1d4 = (undefined1 *)(float)(((float10)fVar12 - fVar9) * (float10)0.5);
    uStack_1dc = 1;
    uStack_1e0 = 0x6a597d;
    piStack_1d8 = param_1;
    (**(code **)(iVar1 + 100))();
    uStack_1e0 = 1;
    (**(code **)(*param_1 + 0xc))();
    uStack_a0 = 6;
    if (param_1[0xef] == 0) {
      uVar3 = FUN_00ace02d((short *)&DAT_00d19bd4);
      FUN_004036d0(&stack0xfffffeb4,L"-",uVar3);
    }
    else {
      FUN_0043bd40(&stack0xfffffeb4,param_1[0xef]);
    }
    puStack_1ac = &stack0xfffffe60;
    uStack_1a8 = 0;
    uVar13 = 10;
    uVar3 = FUN_00ace02d((short *)&DAT_00d3aa80);
    FUN_004036d0(&puStack_1ac,L"s4",uVar3);
    puStack_1d4 = &stack0xfffffdf8;
    uStack_a0._0_1_ = 7;
    FUN_008319b0((undefined4 *)&stack0xfffffdf8,&puStack_1ac,(undefined4 *)&stack0xfffffeb4);
    piVar5 = FUN_00833750();
    uStack_a0 = CONCAT31(uStack_a0._1_3_,6);
    if (10 < uVar13) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1ac);
    }
    (**(code **)(*piVar5 + 0x88))();
    (**(code **)(*piVar5 + 0x5c))();
    iVar1 = *piVar5;
    (**(code **)(*param_1 + 0x14))();
    (**(code **)(*piVar5 + 0x14))();
    (**(code **)(iVar1 + 100))();
    uStack_1dc = uStack_1dc & 0xffffff00;
    uStack_1e0 = 0x20;
    pcVar6 = _malloc(0x20);
    _strncpy(pcVar6,"LEAGUETABLE_LASTRANK",0x14);
    pcVar6[0x14] = '\0';
    uStack_bc = 8;
    auStack_220[1] = 0x6a5b18;
    FUN_009b5030(&puStack_188,(undefined4 *)&stack0xfffffe18);
    uStack_bc = 9;
    (**(code **)(*piVar5 + 0x90))();
    if (&lpType_0000000a < piStack_184) {
                    /* WARNING: Subroutine does not return */
      _free((void *)0x0);
    }
    uStack_c0 = 6;
    (**(code **)(*param_1 + 0xc))();
    if ((char)param_1[0xf1] != '\0') {
      (**(code **)(*piVar5 + 0x20))();
    }
    auStack_220[1] = 0;
    auStack_220[0] = 0x6a5b95;
    (**(code **)(*param_1 + 0x18))();
    auStack_220[0] = 0x6a5b9f;
    (**(code **)(*param_1 + 0x104))();
    auStack_220[0] = DAT_00e572c8;
    uStack_224 = 0x40800000;
    puStack_244 = auStack_238;
    auStack_238[0] = 0;
    uStack_240 = 0;
    uStack_23c = 10;
    uVar3 = FUN_00ace02d((short *)&DAT_00d3aa88);
    FUN_004036d0(&puStack_244,L"s8",uVar3);
    (**(code **)(*param_1 + 0x108))();
    this = operator_new(0x420);
    pvStack_234 = this;
    if (this == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      _Dest = &uStack_1e0;
      uStack_1e0 = uStack_1e0 & 0xffffff00;
      _strncpy((char *)_Dest,"LEAGUETABLE_SEARCH",0x12);
      *(char *)((int)_Dest + 0x12) = '\0';
      uStack_224 = 0x14;
      puStack_22c = auStack_220;
      auStack_220[0] = auStack_220[0] & 0xffffff00;
      uStack_228 = 0;
      _strncpy((char *)puStack_22c,"button_right.",0xd);
      uStack_228 = 0xd;
      *(char *)((int)puStack_22c + 0xd) = '\0';
      uStack_100 = 0xc;
      uStack_230 = 3;
      puVar7 = FUN_009b5030(&piStack_1cc,(undefined4 *)&stack0xfffffe14);
      uStack_100 = 0xd;
      uStack_230 = 7;
      piVar5 = FUN_0069fb10(this,(int *)&puStack_22c,puVar7,DAT_00e572b4,DAT_00e572b4,0,0,0x3f800000
                            ,0x3f800000);
    }
    if (((uStack_230 & 4) != 0) && (uStack_230 = uStack_230 & 0xfffffffb, 10 < (uint)fVar11)) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_1cc);
    }
    if (((uStack_230 & 2) != 0) && (uStack_230 = uStack_230 & 0xfffffffd, 0x14 < uStack_224)) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_22c);
    }
    uStack_100 = 6;
    iVar1 = *piVar5;
    fVar9 = (float10)(**(code **)(*param_1 + 0x14))();
    pvStack_234 = (void *)(float)fVar9;
    (**(code **)(*piVar5 + 0x14))();
    (**(code **)(iVar1 + 100))();
    (**(code **)(*piVar5 + 0x60))(2,param_1);
    (**(code **)(*piVar5 + 0x18))(0,&LAB_006a46d0,param_1[0xdc],"STAR_CHARTS_CLICK");
    (**(code **)(*piVar5 + 0x18))(5,&LAB_005f37f0,0,"STAR_CHARTS_CLICK");
    (**(code **)(*param_1 + 0xc))(piVar5,1);
    if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
      puStack_150 = &UNK_006a5ddf;
      _free(apvStack_b0[0]);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006a5e90 @ 006a5e90 ////

void __fastcall FUN_006a5e90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3aab4;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006a5f30 @ 006a5f30 ////

void __fastcall FUN_006a5f30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3aac4;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006a5f80 @ 006a5f80 ////

undefined4 * __thiscall
FUN_006a5f80(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  int *piVar1;
  int *piVar2;
  
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d3aaec;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d3aad4;
  piVar1 = (int *)((int)this + 0x348);
  *(undefined4 *)((int)this + 0x350) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_FUN_00d1aef0;
  *(int *)((int)this + 0x358) = param_2;
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x18);
    *(int **)((int)this + 0x34c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x368) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_LAB_00d3aab4;
  *(int *)((int)this + 0x370) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x364) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined ***)((int)this + 0x374) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(int *)((int)this + 0x380) = (int)this + 0x374;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined ***)((int)this + 0x38c) = &PTR_LAB_00d3aac4;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(int *)((int)this + 0x398) = (int)this + 0x38c;
  *(undefined4 *)((int)this + 0x3a4) = param_3;
  *(undefined4 *)((int)this + 0x3a8) = param_4;
  *(undefined1 *)((int)this + 0x3ac) = 0;
  *(undefined1 *)((int)this + 0x3ad) = 0;
  *(undefined1 *)((int)this + 0x3ae) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined1 *)((int)this + 0x3c0) = 0xff;
  *(undefined1 *)((int)this + 0x3c1) = 0xff;
  *(undefined1 *)((int)this + 0x3c2) = 0xff;
  *(undefined1 *)((int)this + 0x3c3) = 0xff;
  *(undefined4 *)((int)this + 0x3c0) = 0xffffffff;
  *(undefined1 *)((int)this + 0x3c4) = param_5;
  return this;
}


//// FUNCTION FUN_006a60e0 @ 006a60e0 ////

void __fastcall FUN_006a60e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3aaec;
  param_1[0x14] = &PTR_LAB_00d3aad4;
  param_1[0xe3] = &PTR_LAB_00d3aac4;
  if ((undefined4 *)param_1[0xe5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe5] = param_1[0xe4];
  }
  if (param_1[0xe4] != 0) {
    *(undefined4 *)(param_1[0xe4] + 4) = param_1[0xe5];
  }
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  if ((undefined4 *)param_1[0xe5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe5] = param_1[0xe4];
  }
  if (param_1[0xe4] != 0) {
    *(undefined4 *)(param_1[0xe4] + 4) = param_1[0xe5];
  }
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xdd] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xd7] = &PTR_LAB_00d3aab4;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd1] = &PTR_FUN_00d1aef0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd6] = 0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_006a62c0 @ 006a62c0 ////

/* WARNING: Removing unreachable block (ram,0x006a69d7) */
/* WARNING: Removing unreachable block (ram,0x006a66b9) */
/* WARNING: Removing unreachable block (ram,0x006a678a) */
/* WARNING: Removing unreachable block (ram,0x006a679a) */
/* WARNING: Removing unreachable block (ram,0x006a67ac) */
/* WARNING: Removing unreachable block (ram,0x006a67b9) */
/* WARNING: Removing unreachable block (ram,0x006a684a) */
/* WARNING: Removing unreachable block (ram,0x006a6853) */
/* WARNING: Removing unreachable block (ram,0x006a68a0) */
/* WARNING: Removing unreachable block (ram,0x006a6891) */
/* WARNING: Removing unreachable block (ram,0x006a68bf) */
/* WARNING: Removing unreachable block (ram,0x006a6933) */
/* WARNING: Removing unreachable block (ram,0x006a6940) */
/* WARNING: Removing unreachable block (ram,0x006a69e7) */
/* WARNING: Removing unreachable block (ram,0x006a69f5) */
/* WARNING: Removing unreachable block (ram,0x006a6a02) */
/* WARNING: Removing unreachable block (ram,0x006a6a3e) */
/* WARNING: Removing unreachable block (ram,0x006a6a46) */
/* WARNING: Removing unreachable block (ram,0x006a6aae) */
/* WARNING: Removing unreachable block (ram,0x006a65e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a62c0(int *param_1)

{
  float fVar1;
  void *_Memory;
  int iVar2;
  void *this;
  int *piVar3;
  uint uVar4;
  size_t sVar5;
  char *_Dest;
  undefined1 *puStack_154;
  uint uStack_134;
  char *pcStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  char acStack_124 [20];
  undefined2 *local_110;
  undefined4 uStack_10c;
  uint uStack_108;
  undefined2 auStack_104 [16];
  void *pvStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  wchar_t awStack_b0 [58];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc904e;
  local_c = ExceptionList;
  local_110 = (undefined2 *)0x0;
  if (((int *)param_1[0xd6] == (int *)0x0) ||
     ((ExceptionList = &local_c, (char)param_1[0xf1] == '\0' &&
      (ExceptionList = &local_c, iVar2 = (**(code **)(*(int *)param_1[0xd6] + 4))(), iVar2 == 0))))
  {
    ExceptionList = local_c;
    return;
  }
  iVar2 = (**(code **)(*(int *)param_1[0xd6] + 0x28))();
  param_1[0xee] = iVar2;
  iVar2 = (**(code **)(*(int *)param_1[0xd6] + 0x30))();
  param_1[0xef] = iVar2;
  FUN_006a4d60((int)param_1);
  puStack_154 = DAT_00e5725c;
  (**(code **)(*param_1 + 0x74))();
  if (((char)param_1[0xf1] == '\0') || (param_1[0xe9] == 2)) {
    (**(code **)(*param_1 + 0x18))();
    (**(code **)(*param_1 + 0x18))();
  }
  fVar1 = (float)param_1[0xea];
  if (param_1[0xea] < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  _Memory = (void *)(fVar1 * DAT_00e57260 + _DAT_00e57258);
  (**(code **)(*param_1 + 100))();
  (**(code **)(*param_1 + 0x5c))();
  (**(code **)(*param_1 + 0x50))();
  if ((char)param_1[0xeb] != '\0') {
    this = operator_new(0x360);
    uStack_28 = 0;
    if (this == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      pcStack_130 = acStack_124;
      acStack_124[0] = '\0';
      uStack_12c = 0;
      uStack_128 = 0x20;
      pcStack_130 = _malloc(0x20);
      _strncpy(pcStack_130,"ui/league_tables_roundel.dds",0x1c);
      uStack_12c = 0x1c;
      pcStack_130[0x1c] = '\0';
      uStack_28 = CONCAT31(uStack_28._1_3_,1);
      uStack_134 = 1;
      piVar3 = FUN_0069d820(this,&pcStack_130,0,0,0x3f800000,0x3f800000);
    }
    uStack_28 = 0xffffffff;
    if (((uStack_134 & 1) != 0) && (0x14 < uStack_128)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_130);
    }
    (**(code **)(*piVar3 + 0x74))();
    iVar2 = *piVar3;
    (**(code **)(*param_1 + 0x14))();
    (**(code **)(*piVar3 + 0x14))();
    (**(code **)(iVar2 + 100))();
    (**(code **)(*piVar3 + 0x5c))();
    (**(code **)(*param_1 + 0xc))();
  }
  puStack_154 = &stack0xfffffeb8;
  uVar4 = FUN_00ace02d((short *)&DAT_00d3abfc);
  FUN_004036d0(&puStack_154,L"s9",uVar4);
  local_110 = auStack_104;
  auStack_104[0] = 0;
  uStack_10c = 0;
  uStack_108 = 10;
  uStack_28 = 4;
  sVar5 = _swprintf(awStack_b0,0xd18f7c,(wchar_t *)param_1[0xee]);
  FUN_0040cae0(&local_110,awStack_b0,sVar5);
  FUN_00831ac0((undefined4 *)&stack0xfffffe68,&puStack_154,&local_110);
  piVar3 = FUN_00833680();
  if (10 < uStack_108) {
                    /* WARNING: Subroutine does not return */
    _free(local_110);
  }
  uStack_28 = 0xffffffff;
  (**(code **)(*piVar3 + 0x88))();
  (**(code **)(*piVar3 + 0x5c))();
  _Dest = _malloc(0x20);
  _strncpy(_Dest,"LEAGUETABLE_CURRENTRANK",0x17);
  _Dest[0x17] = '\0';
  uStack_38 = 5;
  FUN_009b5030(&uStack_e0,(undefined4 *)&stack0xfffffec0);
  uStack_38 = CONCAT31(uStack_38._1_3_,6);
  (**(code **)(*piVar3 + 0x90))();
  if (uStack_dc < 0xb) {
    uStack_3c = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_e4);
}


//// FUNCTION FUN_006a6ae0 @ 006a6ae0 ////

/* WARNING: Removing unreachable block (ram,0x006a6fe5) */

void __thiscall
FUN_006a6ae0(void *this,undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,float param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  uint unaff_EBX;
  void *unaff_ESI;
  float10 fVar4;
  void *pvStack_e8;
  char *pcStack_e4;
  int *piStack_e0;
  undefined *puStack_dc;
  int iVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  int iVar8;
  char *local_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  char acStack_a4 [4];
  void *pvStack_a0;
  uint uStack_98;
  undefined1 *puStack_90;
  void **local_8c;
  undefined4 local_88;
  undefined4 local_84;
  void *local_80 [2];
  uint uStack_78;
  void *pvStack_60;
  uint uStack_58;
  undefined1 uStack_48;
  void *pvStack_40;
  undefined4 uStack_38;
  void *pvStack_30;
  float fStack_28;
  float fStack_1c;
  undefined1 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cc9110;
  pvStack_c = ExceptionList;
  local_8c = local_80;
  local_80[0] = (void *)((uint)local_80[0] & 0xffff0000);
  local_88 = 0;
  local_84 = 10;
  iVar5 = *(int *)((int)this + 0x3a4);
  local_4 = 1;
  uStack_3 = 0;
  if (iVar5 == 0) {
    if (*(char *)((int)this + 0x3c4) == '\0') {
      iVar8 = 0;
      pTVar7 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar6 = &TM::TMObject::RTTI_Type_Descriptor;
      iVar5 = 0;
      ExceptionList = &pvStack_c;
      piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x358) + 4))();
      puStack_dc = (undefined *)0x6a6b8b;
      piVar2 = (int *)FUN_00ace790(piVar2,iVar5,pTVar6,pTVar7,iVar8);
      if (piVar2 == (int *)0x0) goto LAB_006a6cc8;
      puVar1 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))();
      FUN_004036d0(&local_8c,(wchar_t *)*puVar1,puVar1[1]);
    }
    else {
      ExceptionList = &pvStack_c;
      puVar1 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x358) + 0xc))();
      FUN_004036d0(&local_8c,(wchar_t *)*puVar1,puVar1[1]);
    }
  }
  else if (iVar5 == 1) {
    piVar2 = *(int **)((int)this + 0x358);
    if (*(char *)((int)this + 0x3c4) == '\0') {
      iVar8 = 0;
      pTVar7 = &TM::CStudio::RTTI_Type_Descriptor;
      pTVar6 = &TM::TMObject::RTTI_Type_Descriptor;
      iVar5 = 0;
      ExceptionList = &pvStack_c;
      piVar2 = (int *)(**(code **)(*piVar2 + 4))();
      puStack_dc = (undefined *)0x6a6be1;
      piVar2 = (int *)FUN_00ace790(piVar2,iVar5,pTVar6,pTVar7,iVar8);
      if (piVar2 == (int *)0x0) goto LAB_006a6cc8;
      puVar1 = (undefined4 *)(**(code **)(*piVar2 + 0x20))();
      FUN_004036d0(&local_8c,(wchar_t *)*puVar1,puVar1[1]);
    }
    else {
LAB_006a6c24:
      ExceptionList = &pvStack_c;
      puVar1 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
      FUN_004036d0(&local_8c,(wchar_t *)*puVar1,puVar1[1]);
    }
  }
  else {
    ExceptionList = &pvStack_c;
    if (iVar5 != 2) goto LAB_006a6cc8;
    piVar2 = *(int **)((int)this + 0x358);
    if (*(char *)((int)this + 0x3c4) != '\0') goto LAB_006a6c24;
    iVar8 = 0;
    pTVar7 = &TM::CProject::RTTI_Type_Descriptor;
    pTVar6 = &TM::TMObject::RTTI_Type_Descriptor;
    iVar5 = 0;
    ExceptionList = &pvStack_c;
    piVar2 = (int *)(**(code **)(*piVar2 + 4))();
    puStack_dc = (undefined *)0x6a6c66;
    pvVar3 = (void *)FUN_00ace790(piVar2,iVar5,pTVar6,pTVar7,iVar8);
    if (pvVar3 == (void *)0x0) {
      iVar8 = 0;
      pTVar7 = &TM::CProjectAI::RTTI_Type_Descriptor;
      pTVar6 = &TM::TMObject::RTTI_Type_Descriptor;
      iVar5 = 0;
      piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x358) + 4))();
      puStack_dc = (undefined *)0x6a6c98;
      pvVar3 = (void *)FUN_00ace790(piVar2,iVar5,pTVar6,pTVar7,iVar8);
      if (pvVar3 == (void *)0x0) goto LAB_006a6cc8;
      puVar1 = FUN_005a3200(pvVar3,&local_b0);
    }
    else {
      puVar1 = FUN_0045f620(pvVar3,&local_b0);
    }
    FUN_00403e70(&local_8c,puVar1);
  }
  if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
    _free(local_b0);
  }
LAB_006a6cc8:
  puStack_90 = operator_new(900);
  local_4 = 2;
  if (puStack_90 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00737bb0(puStack_90,&local_8c);
  }
  local_b0 = acStack_a4;
  acStack_a4[0] = '\0';
  uStack_ac = 0;
  uStack_a8 = 0x14;
  _strncpy(local_b0,"default",7);
  uStack_ac = 7;
  local_b0[7] = '\0';
  puStack_90 = &stack0xffffff38;
  _local_4 = CONCAT31(uStack_3,3);
  (**(code **)(*piVar2 + 0xfc))();
  uStack_14 = 1;
  if (0x14 < unaff_EBX) {
                    /* WARNING: Subroutine does not return */
    puStack_dc = &UNK_006a6d7a;
    _free(unaff_ESI);
  }
  piVar2[0xd4] = -0xcfc0c1;
  fVar4 = (float10)(**(code **)(*(int *)this + 0x10))();
  puStack_dc = (undefined *)0x6a6da6;
  FUN_00737cd0(piVar2,(float)((fVar4 - (float10)param_6) - (float10)20.0));
  puStack_dc = (undefined *)0x6a6db1;
  (**(code **)(*piVar2 + 0x84))();
  puStack_dc = (undefined *)0x1;
  pcStack_e4 = (char *)0x6a6dbb;
  piStack_e0 = piVar2;
  (**(code **)(*(int *)this + 0xc))();
  pcStack_e4 = param_3;
  (**(code **)(*piVar2 + 0x5c))();
  if ((*(char *)((int)this + 0x3c4) == '\0') ||
     ((*(int *)((int)this + 0x3a4) != 0 && (*(int *)((int)this + 0x3a4) != 1)))) {
    (**(code **)(*piVar2 + 0x68))();
  }
  else {
    (**(code **)(*piVar2 + 100))();
    piVar2 = (int *)FUN_00ace790(*(int **)((int)this + 0x358),0,
                                 &TM::CLeagueTableEntry::RTTI_Type_Descriptor,
                                 &TM::COnlineLeagueTableEntry::RTTI_Type_Descriptor,0);
    if (piVar2 != (int *)0x0) {
      pvStack_e8 = this;
      if (*(int *)((int)this + 0x3a4) == 0) {
        pvVar3 = operator_new(900);
        uStack_38._0_1_ = 4;
        if (pvVar3 == (void *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          puVar1 = (undefined4 *)(**(code **)(*piVar2 + 0x34))();
          uStack_38 = CONCAT31(uStack_38._1_3_,5);
          pvStack_e8 = (void *)0x1;
          piVar2 = FUN_00737bb0(pvVar3,puVar1);
        }
        uStack_38 = 1;
        if ((((uint)pvStack_e8 & 1) != 0) && (10 < uStack_98)) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_a0);
        }
      }
      else {
        pvVar3 = operator_new(900);
        uStack_38 = CONCAT31(uStack_38._1_3_,7);
        if (pvVar3 == (void *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          puVar1 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
          puVar1 = FUN_0043bdc0(local_80,L"http://movies.lionhead.com/studio/",puVar1);
          uStack_38 = 9;
          pvStack_e8 = (void *)0x6;
          piVar2 = FUN_00737bb0(pvVar3,puVar1);
        }
        if ((((uint)pvStack_e8 & 4) != 0) &&
           (pvStack_e8 = (void *)((uint)pvStack_e8 & 0xfffffffb), 10 < uStack_78)) {
                    /* WARNING: Subroutine does not return */
          _free(local_80[0]);
        }
        uStack_38 = 1;
        if ((((uint)pvStack_e8 & 2) != 0) && (10 < uStack_58)) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_60);
        }
        (**(code **)(*piVar2 + 0x18))(0,&LAB_006a5130,piVar2);
      }
      pcStack_e4 = &stack0xffffff28;
      piStack_e0 = (int *)0x0;
      puStack_dc = (undefined *)0x14;
      _strncpy(pcStack_e4,"default",7);
      piStack_e0 = (int *)0x7;
      pcStack_e4[7] = '\0';
      uStack_38 = CONCAT31(uStack_38._1_3_,0xc);
      (**(code **)(*piVar2 + 0xfc))(&pcStack_e4,0xc,0);
      uStack_48 = 1;
      piVar2[0xd4] = -0xcfc0c1;
      fVar4 = (float10)(**(code **)(*(int *)this + 0x10))();
      FUN_00737cd0(piVar2,(float)((fVar4 - (float10)fStack_1c) - (float10)20.0));
      (**(code **)(*piVar2 + 0x84))(0);
      (**(code **)(*(int *)this + 0xc))(piVar2,1);
      (**(code **)(*piVar2 + 0x5c))(1,this,fStack_28 + 6.0);
      (**(code **)(*piVar2 + 0x68))(2,this,uStack_38);
    }
  }
  if (10 < unaff_EBX) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  if ((uint)fStack_28 < 0xb) {
    ExceptionList = pvStack_40;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_30);
}


//// FUNCTION FUN_006a70c0 @ 006a70c0 ////

void __fastcall FUN_006a70c0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 unaff_EDI;
  char *pcVar13;
  int **_Dest;
  int *piStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int *piStack_110;
  uint uVar14;
  TypeDescriptor *pTVar15;
  TypeDescriptor *pTVar16;
  int iStack_d8;
  void *apvStack_d4 [2];
  uint uStack_cc;
  undefined1 *puStack_b4;
  void *pvStack_b0;
  undefined1 *apuStack_ac [2];
  uint uStack_a4;
  void *apvStack_8c [2];
  uint uStack_84;
  undefined4 uStack_80;
  void *apvStack_6c [2];
  uint uStack_64;
  undefined4 uStack_58;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc921d;
  local_c = ExceptionList;
  if ((char)param_1[0xf1] != '\0') {
    return;
  }
  iVar5 = param_1[0xe9];
  piStack_110 = param_1;
  if (iVar5 != 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) {
        return;
      }
      iVar6 = 0;
      pTVar16 = &TM::CStudio::RTTI_Type_Descriptor;
      pTVar15 = &TM::TMObject::RTTI_Type_Descriptor;
      iVar5 = 0;
      ExceptionList = &local_c;
      piVar4 = (int *)(**(code **)(*(int *)param_1[0xd6] + 4))();
      piVar4 = (int *)FUN_00ace790(piVar4,iVar5,pTVar15,pTVar16,iVar6);
      if (piVar4 == (int *)0x0) {
        ExceptionList = local_c;
        return;
      }
      iVar5 = (**(code **)(*piVar4 + 0x54))();
      puVar11 = FUN_00464820(iVar5);
      FUN_005ebbb0(param_1 + 0xdd,(int)puVar11);
      (**(code **)(*(int *)param_1[0xe2] + 0x74))();
      uVar14 = 0;
      (**(code **)(*(int *)param_1[0xe2] + 100))();
      uStack_114 = 1;
      uStack_118 = 0x6a79c4;
      (**(code **)(*(int *)param_1[0xe2] + 0x5c))();
      piStack_11c = (int *)param_1[0xe2];
      uStack_118 = 1;
      (**(code **)(*param_1 + 0xc))();
      pvVar7 = operator_new(0x360);
      apvStack_2c[0] = (void *)0xe;
      if (pvVar7 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_00401de0(&puStack_b4,"ui/dotted_line.dds",0xffffffff);
        apvStack_2c[0] = (void *)CONCAT31(apvStack_2c[0]._1_3_,0xf);
        uVar14 = 0x40;
        piVar4 = FUN_0069d820(pvVar7,&puStack_b4,0,0,0x3f800000,0x3f800000);
      }
      apvStack_2c[0] = (void *)0xffffffff;
      if (((uVar14 & 0x40) != 0) && (&DAT_00000014 < apuStack_ac[0])) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_b4);
      }
      (**(code **)(*piVar4 + 0x74))();
      (**(code **)(*piVar4 + 0x7c))();
      (**(code **)(*piVar4 + 100))();
      (**(code **)(*piVar4 + 0x60))();
      (**(code **)(*param_1 + 0xc))();
      ExceptionList = local_c;
      return;
    }
    iVar6 = 0;
    pTVar16 = &TM::CProject::RTTI_Type_Descriptor;
    pTVar15 = &TM::TMObject::RTTI_Type_Descriptor;
    iVar5 = 0;
    ExceptionList = &local_c;
    piVar4 = (int *)(**(code **)(*(int *)param_1[0xd6] + 4))();
    iVar5 = FUN_00ace790(piVar4,iVar5,pTVar15,pTVar16,iVar6);
    if (iVar5 == 0) {
      iVar6 = 0;
      pTVar16 = &TM::CProjectAI::RTTI_Type_Descriptor;
      pTVar15 = &TM::TMObject::RTTI_Type_Descriptor;
      iVar5 = 0;
      piVar4 = (int *)(**(code **)(*(int *)param_1[0xd6] + 4))();
      iVar5 = FUN_00ace790(piVar4,iVar5,pTVar15,pTVar16,iVar6);
      if (iVar5 == 0) {
        ExceptionList = local_c;
        return;
      }
      piVar4 = (int *)FUN_005a2aa0(iVar5);
      iVar6 = (**(code **)(*piVar4 + 0x54))();
      puVar11 = FUN_00464820(iVar6);
      FUN_005ebbb0(param_1 + 0xdd,(int)puVar11);
      iVar5 = FUN_005a2c00(iVar5);
    }
    else {
      piVar4 = (int *)GetPlayerStudio();
      iVar6 = (**(code **)(*piVar4 + 0x54))();
      puVar11 = FUN_00464820(iVar6);
      (**(code **)(param_1[0xdd] + 4))();
      param_1[0xe2] = (int)puVar11;
      (**(code **)param_1[0xdd])();
      iVar5 = FUN_005b2770(iVar5);
    }
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return;
    }
    if ((int *)param_1[0xe2] == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    (**(code **)(*(int *)param_1[0xe2] + 0x74))();
    (**(code **)(*(int *)param_1[0xe2] + 100))();
    uStack_114 = 1;
    uStack_118 = 0x6a75b2;
    (**(code **)(*(int *)param_1[0xe2] + 0x5c))();
    piStack_11c = (int *)param_1[0xe2];
    uStack_118 = 1;
    (**(code **)(*param_1 + 0xc))();
    (**(code **)(*(int *)param_1[0xe2] + 0x50))();
    puVar11 = (undefined4 *)FUN_00449b40(iVar5);
    FUN_00403de0(apvStack_d4,puVar11);
    uStack_4 = 8;
    bVar3 = FUN_00430950(apvStack_d4,"");
    if (!bVar3) goto LAB_006a7912;
    puVar11 = FUN_0040d6b0(apvStack_2c,"ui/",apvStack_d4);
    piStack_110 = (int *)0x6a762c;
    FUN_004312e0(apuStack_ac,puVar11,".dds");
    uStack_4 = CONCAT31(uStack_4._1_3_,9);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    FUN_00401de0(apvStack_8c,"genre_war",0xffffffff);
    bVar1 = false;
    bVar3 = false;
    uVar12 = FUN_00401ec0(apvStack_d4,apvStack_8c);
    if ((char)uVar12 == '\0') {
      FUN_00401de0(apvStack_4c,"genre_western",0xffffffff);
      bVar1 = true;
      bVar3 = false;
      uVar12 = FUN_00401ec0(apvStack_d4,apvStack_4c);
      if ((char)uVar12 != '\0') goto LAB_006a76e9;
      FUN_00401de0(apvStack_6c,"genre_thriller",0xffffffff);
      bVar1 = true;
      bVar3 = true;
      uVar12 = FUN_00401ec0(apvStack_d4,apvStack_6c);
      bVar2 = false;
      if ((char)uVar12 != '\0') goto LAB_006a76e9;
    }
    else {
LAB_006a76e9:
      bVar2 = true;
    }
    if ((bVar3) && (0x14 < uStack_64)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_6c[0]);
    }
    if ((bVar1) && (0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
    if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_8c[0]);
    }
    bVar3 = false;
    if (bVar2) {
      FUN_00403e20(apuStack_ac,"ui/genre_action.dds");
    }
    pvVar7 = operator_new(0x360);
    piVar4 = (int *)0x0;
    uStack_4._0_1_ = 10;
    if (pvVar7 != (void *)0x0) {
      piVar4 = FUN_0069d820(pvVar7,apuStack_ac,0,0,0x3f800000,0x3f800000);
    }
    uStack_4 = CONCAT31(uStack_4._1_3_,9);
    (**(code **)(*piVar4 + 0x74))();
    (**(code **)(*piVar4 + 100))();
    piStack_110 = (int *)param_1[0xe2];
    uStack_114 = 2;
    uStack_118 = 0x6a77ef;
    (**(code **)(*piVar4 + 0x5c))();
    uStack_118 = 1;
    piStack_11c = piVar4;
    (**(code **)(*param_1 + 0xc))();
    iStack_d8 = 2;
    do {
      pvVar7 = operator_new(0x360);
      pvStack_b0 = pvVar7;
      if (pvVar7 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_00401de0(apvStack_8c,"ui/dotted_line.dds",0xffffffff);
        puStack_b4 = &stack0xfffffefc;
        bVar3 = true;
        uStack_4 = CONCAT31(uStack_4._1_3_,0xc);
        piVar4 = FUN_0069d820(pvVar7,apvStack_8c,0,0,0x3f800000,0x3f800000);
      }
      uStack_4 = 9;
      if ((bVar3) && (bVar3 = false, 0x14 < uStack_84)) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_8c[0]);
      }
      (**(code **)(*piVar4 + 0x74))();
      (**(code **)(*piVar4 + 0x7c))();
      piStack_110 = (int *)0x6a78d1;
      (**(code **)(*piVar4 + 100))();
      piStack_110 = (int *)0x0;
      uStack_118 = 1;
      piStack_11c = (int *)0x6a78e1;
      uStack_114 = unaff_EDI;
      (**(code **)(*piVar4 + 0x60))();
      piStack_11c = (int *)0x1;
      (**(code **)(*param_1 + 0xc))();
      iStack_d8 = iStack_d8 + -1;
    } while (iStack_d8 != 0);
    if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      _free(apuStack_ac[0]);
    }
LAB_006a7912:
    if (uStack_cc < 0x15) {
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(apvStack_d4[0]);
  }
  pTVar16 = &TM::CStar::RTTI_Type_Descriptor;
  pTVar15 = &TM::TMObject::RTTI_Type_Descriptor;
  ExceptionList = &local_c;
  iVar6 = iVar5;
  piVar4 = (int *)(**(code **)(*(int *)param_1[0xd6] + 4))();
  iVar5 = FUN_00ace790(piVar4,iVar5,pTVar15,pTVar16,iVar6);
  if (iVar5 == 0) {
    ExceptionList = local_c;
    return;
  }
  piVar4 = (int *)FUN_005773c0(iVar5);
  if (piVar4 == (int *)0x0) {
    ExceptionList = local_c;
    return;
  }
  iVar6 = (**(code **)(*piVar4 + 0x54))();
  piVar4 = FUN_00464820(iVar6);
  (**(code **)(*piVar4 + 0x74))();
  uVar14 = 1;
  (**(code **)(*piVar4 + 100))();
  uStack_114 = 1;
  uStack_118 = 0x6a718d;
  (**(code **)(*piVar4 + 0x5c))();
  uStack_118 = 1;
  piStack_11c = piVar4;
  (**(code **)(*param_1 + 0xc))();
  pvVar7 = operator_new(0x360);
  apvStack_2c[0] = (void *)0x0;
  if (pvVar7 == (void *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    FUN_00401de0(apvStack_d4,"ui/dotted_line.dds",0xffffffff);
    apvStack_2c[0] = (void *)CONCAT31(apvStack_2c[0]._1_3_,1);
    uVar14 = 1;
    piVar8 = FUN_0069d820(pvVar7,apvStack_d4,0,0,0x3f800000,0x3f800000);
  }
  apvStack_2c[0] = (void *)0xffffffff;
  if (((uVar14 & 1) != 0) && (0x14 < uStack_cc)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_d4[0]);
  }
  (**(code **)(*piVar8 + 0x74))();
  (**(code **)(*piVar8 + 0x7c))();
  (**(code **)(*piVar8 + 100))();
  (**(code **)(*piVar8 + 0x60))();
  (**(code **)(*param_1 + 0xc))();
  _Dest = &piStack_11c;
  piStack_11c = (int *)((uint)piStack_11c & 0xffffff00);
  uVar14 = 0x14;
  _strncpy((char *)_Dest,"ui/job_star.dds",0xf);
  *(char *)((int)_Dest + 0xf) = '\0';
  uStack_58 = 3;
  if (*(int *)(iVar5 + 0x814) == 3) {
    FUN_00403e20(&stack0xfffffed8,"ui/ppod_statbar_director.dds");
  }
  iVar6 = AwardBonusManager_Get();
  if (iVar6 == 0) {
LAB_006a72ff:
    iVar6 = AwardBonusManager_Get();
    if (iVar6 == 0) goto LAB_006a7326;
    iVar6 = AwardBonusManager_Get();
    iVar6 = FUN_00858eb0(iVar6);
    if (iVar6 != iVar5) goto LAB_006a7326;
    pcVar13 = "ui/job_star.dds";
  }
  else {
    iVar6 = AwardBonusManager_Get();
    iVar6 = FUN_00858ef0(iVar6);
    if (iVar6 != iVar5) goto LAB_006a72ff;
    pcVar13 = "ui/ppod_statbar_director.dds";
  }
  FUN_00403e20(&stack0xfffffed8,pcVar13);
LAB_006a7326:
  pvVar7 = operator_new(0x360);
  uStack_58._0_1_ = 4;
  if (pvVar7 == (void *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = FUN_0069d820(pvVar7,(undefined4 *)&stack0xfffffed8,0,0,0x3f800000,0x3f800000);
  }
  uStack_58 = CONCAT31(uStack_58._1_3_,3);
  (**(code **)(*piVar8 + 0x74))();
  uVar9 = 0;
  (**(code **)(*piVar8 + 100))();
  (**(code **)(*piVar8 + 0x5c))();
  (**(code **)(*param_1 + 0xc))();
  pvVar7 = operator_new(0x360);
  if (pvVar7 == (void *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    FUN_00401de0(&stack0xfffffed8,"ui/dotted_line.dds",0xffffffff);
    uVar9 = uVar9 | 2;
    uStack_80 = CONCAT31(uStack_80._1_3_,6);
    piVar10 = FUN_0069d820(pvVar7,(undefined4 *)&stack0xfffffed8,0,0,0x3f800000,0x3f800000);
  }
  uStack_80 = 3;
  if (((uVar9 & 2) != 0) && (0x14 < uVar14)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  (**(code **)(*piVar10 + 0x74))();
  (**(code **)(*piVar10 + 0x7c))();
  (**(code **)(*piVar10 + 100))(1,piVar4);
  (**(code **)(*piVar10 + 0x60))(1,piVar8,0);
  (**(code **)(*param_1 + 0xc))(piVar10,1);
  if (uStack_cc < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_d4[0]);
}


//// FUNCTION FUN_006a7ae0 @ 006a7ae0 ////

undefined4 * __thiscall
FUN_006a7ae0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined1 param_6,int param_7)

{
  int *piVar1;
  int *piVar2;
  
  FUN_006a5f80(this,param_2,param_3,param_4,param_5,param_6);
  *(undefined ***)this = &PTR_FUN_00d3ad24;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d3ad08;
  piVar1 = (int *)((int)this + 0x3cc);
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 **)((int)this + 0x3d4) = (undefined4 *)((int)this + 0x3c8);
  *(undefined4 *)((int)this + 0x3c8) = &PTR_FUN_00d18c2c;
  *(int *)((int)this + 0x3dc) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x3d0) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined ***)((int)this + 0x3e0) = &PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(int *)((int)this + 0x3ec) = (int)this + 0x3e0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 **)((int)this + 0x404) = (undefined4 *)((int)this + 0x3f8);
  *(undefined4 *)((int)this + 0x3f8) = &PTR_FUN_00d18c3c;
  *(undefined4 *)((int)this + 0x40c) = 0;
  piVar1 = (int *)((int)this + 0x414);
  *(undefined4 *)((int)this + 0x41c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 **)((int)this + 0x41c) = (undefined4 *)((int)this + 0x410);
  *(undefined4 *)((int)this + 0x410) = &PTR_FUN_00d322b0;
  *(int *)((int)this + 0x424) = param_7;
  if (param_7 != 0) {
    piVar2 = (int *)(param_7 + 0x18);
    *(int **)((int)this + 0x418) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined1 *)((int)this + 0x3ad) = 1;
  return this;
}


//// FUNCTION FUN_006a7be0 @ 006a7be0 ////

undefined4 * __thiscall FUN_006a7be0(void *this,byte param_1)

{
  FUN_006a60e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006a7c00 @ 006a7c00 ////

undefined4 * __thiscall FUN_006a7c00(void *this,byte param_1)

{
  FUN_006a7c20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006a7c20 @ 006a7c20 ////

void __fastcall FUN_006a7c20(undefined4 *param_1)

{
  param_1[0x104] = &PTR_FUN_00d322b0;
  if ((undefined4 *)param_1[0x106] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x106] = param_1[0x105];
  }
  if (param_1[0x105] != 0) {
    *(undefined4 *)(param_1[0x105] + 4) = param_1[0x106];
  }
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x109] = 0;
  if ((undefined4 *)param_1[0x106] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x106] = param_1[0x105];
  }
  if (param_1[0x105] != 0) {
    *(undefined4 *)(param_1[0x105] + 4) = param_1[0x106];
  }
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0xfe] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x100] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x100] = param_1[0xff];
  }
  if (param_1[0xff] != 0) {
    *(undefined4 *)(param_1[0xff] + 4) = param_1[0x100];
  }
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x103] = 0;
  if ((undefined4 *)param_1[0x100] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x100] = param_1[0xff];
  }
  if (param_1[0xff] != 0) {
    *(undefined4 *)(param_1[0xff] + 4) = param_1[0x100];
  }
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0xf8] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0xfa] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfa] = param_1[0xf9];
  }
  if (param_1[0xf9] != 0) {
    *(undefined4 *)(param_1[0xf9] + 4) = param_1[0xfa];
  }
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfd] = 0;
  if ((undefined4 *)param_1[0xfa] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfa] = param_1[0xf9];
  }
  if (param_1[0xf9] != 0) {
    *(undefined4 *)(param_1[0xf9] + 4) = param_1[0xfa];
  }
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xf2] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xf4] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf4] = param_1[0xf3];
  }
  if (param_1[0xf3] != 0) {
    *(undefined4 *)(param_1[0xf3] + 4) = param_1[0xf4];
  }
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf7] = 0;
  if ((undefined4 *)param_1[0xf4] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf4] = param_1[0xf3];
  }
  if (param_1[0xf3] != 0) {
    *(undefined4 *)(param_1[0xf3] + 4) = param_1[0xf4];
  }
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  FUN_006a60e0(param_1);
  return;
}


//// FUNCTION FUN_006a7e00 @ 006a7e00 ////

void __fastcall FUN_006a7e00(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  FUN_0053ca50();
  FUN_0071c290();
  FUN_00424130(DAT_00f87b04,1,0,0);
  FUN_009a1560(1);
  iVar1 = *param_1;
  uVar4 = 0;
  iVar2 = FUN_0071b2b0();
  (**(code **)(iVar1 + 0x70))(iVar2,uVar4);
  piVar3 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar3 + 0xc))(param_1,1);
  return;
}


//// FUNCTION WLeagueScreen_Tick @ 006a7e50 ////

void __fastcall WLeagueScreen_Tick(int *param_1,undefined4 param_2)

{
  FUN_006adf40(param_1,param_2,'\0');
  WWindow_Tick(param_1);
  (**(code **)(*param_1 + 0xd8))();
  FUN_0053d480((int)param_1);
  return;
}


//// FUNCTION FUN_006a7eb0 @ 006a7eb0 ////

int * __thiscall FUN_006a7eb0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_006a7ee0 @ 006a7ee0 ////

int * __thiscall FUN_006a7ee0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_006a7f00 @ 006a7f00 ////

int * __thiscall FUN_006a7f00(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_006a7f20 @ 006a7f20 ////

void FUN_006a7f20(void)

{
  (*(code *)DAT_0104dbc4[1])();
  DAT_0104dbd8 = 0;
  (*(code *)*DAT_0104dbc4)();
  DAT_00e57430 = 3;
  return;
}


//// FUNCTION FUN_006a7fa0 @ 006a7fa0 ////

void __fastcall FUN_006a7fa0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  float10 fVar7;
  ulonglong uVar8;
  float fStack_8;
  
  if (*(int **)(param_1 + 0x358) == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0x358) + 0x108))();
  if (*(int *)(param_1 + 0x404) != 0) {
    fVar1 = *(float *)(iVar4 + 0xc);
    uVar8 = FUN_00990ae0(extraout_ECX,fVar1);
    iVar5 = (int)uVar8 - *(int *)(param_1 + 0x404);
    fVar2 = (float)iVar5;
    if (iVar5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar3 = (float)DAT_00e573a0;
    if (DAT_00e573a0 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar7 = FUN_004012c0((fVar2 / fVar3) * 6.2831855);
    fVar7 = FUN_004012c0((float)((float10)fVar1 + fVar7));
    uVar6 = extraout_EDX;
    if (fVar7 <= (float10)6.2831855) goto LAB_006a8052;
  }
  fVar7 = FUN_004012c0(0.0);
  uVar6 = extraout_EDX_00;
LAB_006a8052:
  fStack_8 = (float)fVar7;
  *(float *)(iVar4 + 0xc) = fStack_8;
  uVar8 = FUN_00990ae0(fStack_8,uVar6);
  *(int *)(param_1 + 0x404) = (int)uVar8;
  return;
}


//// FUNCTION FUN_006a8070 @ 006a8070 ////

undefined4 FUN_006a8070(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc923b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_0046f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(this,0x227);
  (**(code **)(this[0xe] + 4))();
  this[0x13] = param_2;
  (**(code **)this[0xe])();
  uVar2 = FUN_005e9280(DAT_0104d82c,extraout_EDX,this);
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_006a8130 @ 006a8130 ////

void __thiscall FUN_006a8130(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *pvStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9258;
  pvStack_c = ExceptionList;
  puVar1 = *(undefined4 **)((int)this + 0x3b8);
  ExceptionList = &pvStack_c;
  if (puVar1 != (undefined4 *)0x0) {
    piVar4 = puVar1 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*puVar1)();
    }
    (**(code **)(*(int *)((int)this + 0x3a4) + 4))();
    *(undefined4 *)((int)this + 0x3b8) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x3a4))();
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar3 = FUN_00ace02d((short *)&DAT_00d3ae38);
  uStack_48 = 0x6a81b3;
  FUN_004036d0(&local_2c,L"s3",uVar3);
  uStack_4 = 0;
  FUN_008318a0(&uStack_64,&local_2c,param_1);
  piVar4 = FUN_00833680();
  (**(code **)(*(int *)((int)this + 0x3a4) + 4))();
  *(int **)((int)this + 0x3b8) = piVar4;
  (*(code *)**(undefined4 **)((int)this + 0x3a4))();
  uStack_4 = 0xffffffff;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  piVar4 = *(int **)((int)this + 0x3b8);
  iVar2 = *piVar4;
  (**(code **)(*(int *)this + 0x10))();
  (**(code **)(*piVar4 + 0x10))();
  uStack_48 = 1;
  uStack_4c = 0x6a8249;
  (**(code **)(iVar2 + 0x5c))();
  uStack_4c = DAT_00e573d0;
  uStack_54 = 1;
  uStack_58 = 0x6a825d;
  pvStack_50 = this;
  (**(code **)(**(int **)((int)this + 0x3b8) + 100))();
  uStack_5c = *(undefined4 *)((int)this + 0x3b8);
  uStack_58 = 1;
  uStack_60 = 0x6a826d;
  (**(code **)(*(int *)this + 0xc))();
  ExceptionList = local_2c;
  return;
}


//// FUNCTION FUN_006a8290 @ 006a8290 ////

void __fastcall FUN_006a8290(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d3ae44;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_006a82e0 @ 006a82e0 ////

void __fastcall FUN_006a82e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3ae44;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006a8330 @ 006a8330 ////

void __fastcall FUN_006a8330(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d3aab4;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_006a8350 @ 006a8350 ////

void __fastcall FUN_006a8350(undefined4 *param_1)

{
  void *this;
  undefined4 extraout_EDX;
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc92e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d3ae6c;
  param_1[0x14] = &PTR_FUN_00d3ae54;
  uVar2 = 0;
  iVar1 = 2;
  local_4 = 8;
  this = (void *)FUN_004f3b20();
  FUN_004f9390(this,iVar1,uVar2);
  FUN_009a1560(0);
  FUN_004237f0(DAT_00f87b04);
  FUN_0071bd00();
  FUN_005e98d0(DAT_0104d82c,extraout_EDX);
  param_1[0xfb] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xfd] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfd] = param_1[0xfc];
  }
  if (param_1[0xfc] != 0) {
    *(undefined4 *)(param_1[0xfc] + 4) = param_1[0xfd];
  }
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0x100] = 0;
  if ((undefined4 *)param_1[0xfd] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfd] = param_1[0xfc];
  }
  if (param_1[0xfc] != 0) {
    *(undefined4 *)(param_1[0xfc] + 4) = param_1[0xfd];
  }
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xf5] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xf7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf7] = param_1[0xf6];
  }
  if (param_1[0xf6] != 0) {
    *(undefined4 *)(param_1[0xf6] + 4) = param_1[0xf7];
  }
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xfa] = 0;
  if ((undefined4 *)param_1[0xf7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf7] = param_1[0xf6];
  }
  if (param_1[0xf6] != 0) {
    *(undefined4 *)(param_1[0xf6] + 4) = param_1[0xf7];
  }
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xef] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xf1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf1] = param_1[0xf0];
  }
  if (param_1[0xf0] != 0) {
    *(undefined4 *)(param_1[0xf0] + 4) = param_1[0xf1];
  }
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  if ((undefined4 *)param_1[0xf1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf1] = param_1[0xf0];
  }
  if (param_1[0xf0] != 0) {
    *(undefined4 *)(param_1[0xf0] + 4) = param_1[0xf1];
  }
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xe9] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xeb] = param_1[0xea];
  }
  if (param_1[0xea] != 0) {
    *(undefined4 *)(param_1[0xea] + 4) = param_1[0xeb];
  }
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xee] = 0;
  if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xeb] = param_1[0xea];
  }
  if (param_1[0xea] != 0) {
    *(undefined4 *)(param_1[0xea] + 4) = param_1[0xeb];
  }
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xe3] = &PTR_LAB_00d3aab4;
  if ((undefined4 *)param_1[0xe5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe5] = param_1[0xe4];
  }
  if (param_1[0xe4] != 0) {
    *(undefined4 *)(param_1[0xe4] + 4) = param_1[0xe5];
  }
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  if ((undefined4 *)param_1[0xe5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe5] = param_1[0xe4];
  }
  if (param_1[0xe4] != 0) {
    *(undefined4 *)(param_1[0xe4] + 4) = param_1[0xe5];
  }
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xdd] = &PTR_LAB_00d3aab4;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xd7] = &PTR_LAB_00d3aab4;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd1] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd6] = 0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006a8760 @ 006a8760 ////

undefined4 __fastcall FUN_006a8760(void *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined2 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined2 auStack_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9308;
  local_c = ExceptionList;
  pvVar2 = *(void **)((int)param_1 + 0x370);
  if (DAT_0104dbd8 != pvVar2) {
    ExceptionList = &local_c;
    if (DAT_0104dbd8 != (void *)0x0) {
      ExceptionList = &local_c;
      FUN_006aa8b0(DAT_0104dbd8,'\0');
    }
    DAT_00e57430 = 0;
    (*(code *)DAT_0104dbc4[1])();
    DAT_0104dbd8 = *(void **)((int)param_1 + 0x370);
    (*(code *)*DAT_0104dbc4)();
    FUN_006aa730(DAT_0104dbd8,'\0');
    puStack_2c = auStack_20;
    auStack_20[0] = 0;
    uStack_28 = 0;
    uStack_24 = 10;
    uVar1 = FUN_00ace02d(L"LEAGUESCREEN_STAR");
    FUN_004036d0(&puStack_2c,L"LEAGUESCREEN_STAR",uVar1);
    uStack_4 = 0;
    pvVar2 = (void *)FUN_006a8130(param_1,&puStack_2c);
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_2c);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}


//// FUNCTION FUN_006a8850 @ 006a8850 ////

undefined4 __fastcall FUN_006a8850(void *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined2 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined2 auStack_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9328;
  local_c = ExceptionList;
  pvVar2 = *(void **)((int)param_1 + 0x388);
  if (DAT_0104dbd8 != pvVar2) {
    ExceptionList = &local_c;
    if (DAT_0104dbd8 != (void *)0x0) {
      ExceptionList = &local_c;
      FUN_006aa8b0(DAT_0104dbd8,'\0');
    }
    DAT_00e57430 = 1;
    (*(code *)DAT_0104dbc4[1])();
    DAT_0104dbd8 = *(void **)((int)param_1 + 0x388);
    (*(code *)*DAT_0104dbc4)();
    FUN_006aa730(DAT_0104dbd8,'\0');
    puStack_2c = auStack_20;
    auStack_20[0] = 0;
    uStack_28 = 0;
    uStack_24 = 10;
    uVar1 = FUN_00ace02d(L"LEAGUESCREEN_STUDIO");
    FUN_004036d0(&puStack_2c,L"LEAGUESCREEN_STUDIO",uVar1);
    uStack_4 = 0;
    pvVar2 = (void *)FUN_006a8130(param_1,&puStack_2c);
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_2c);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}


//// FUNCTION FUN_006a8940 @ 006a8940 ////

undefined4 __fastcall FUN_006a8940(void *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined2 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined2 auStack_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9348;
  local_c = ExceptionList;
  pvVar2 = *(void **)((int)param_1 + 0x3a0);
  if (DAT_0104dbd8 != pvVar2) {
    ExceptionList = &local_c;
    if (DAT_0104dbd8 != (void *)0x0) {
      ExceptionList = &local_c;
      FUN_006aa8b0(DAT_0104dbd8,'\0');
    }
    DAT_00e57430 = 2;
    (*(code *)DAT_0104dbc4[1])();
    DAT_0104dbd8 = *(void **)((int)param_1 + 0x3a0);
    (*(code *)*DAT_0104dbc4)();
    FUN_006aa730(DAT_0104dbd8,'\0');
    puStack_2c = auStack_20;
    auStack_20[0] = 0;
    uStack_28 = 0;
    uStack_24 = 10;
    uVar1 = FUN_00ace02d(L"LEAGUESCREEN_MOVIE");
    FUN_004036d0(&puStack_2c,L"LEAGUESCREEN_MOVIE",uVar1);
    uStack_4 = 0;
    pvVar2 = (void *)FUN_006a8130(param_1,&puStack_2c);
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_2c);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}


//// FUNCTION FUN_006a8af0 @ 006a8af0 ////

undefined4 * __thiscall FUN_006a8af0(void *this,byte param_1)

{
  FUN_006a8350(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006a8b10 @ 006a8b10 ////

/* WARNING: Removing unreachable block (ram,0x006a9d5b) */
/* WARNING: Removing unreachable block (ram,0x006a9545) */

void __fastcall FUN_006a8b10(int *param_1)

{
  int iVar1;
  uint *puVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint *puVar7;
  void *this;
  size_t sVar8;
  int iVar9;
  bool bVar10;
  float10 fVar11;
  wchar_t *pwVar12;
  undefined1 *puStack_26c;
  undefined1 **ppuStack_240;
  int iStack_23c;
  undefined1 *puStack_238;
  undefined1 *puStack_234;
  uint *_Memory;
  int *piStack_228;
  uint uStack_224;
  uint uStack_220;
  uint *puStack_21c;
  undefined4 uStack_218;
  undefined1 *puStack_214;
  uint *puStack_210;
  undefined4 uStack_20c;
  uint *puVar13;
  int *piStack_200;
  uint auStack_1fc [2];
  undefined1 *puStack_1f4;
  undefined4 uStack_1f0;
  char *pcStack_1ec;
  undefined1 *puStack_1e8;
  code *pcStack_1e4;
  uint *puStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  float fStack_1b0;
  float fVar14;
  uint auStack_198 [5];
  void *pvStack_184;
  undefined1 *puVar15;
  uint uVar16;
  int *piStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  int **ppiVar17;
  float fVar18;
  int *piStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  uint uStack_10c;
  char *pcVar19;
  uint uVar20;
  char *local_d8;
  undefined4 local_d4;
  uint local_d0;
  char local_cc [36];
  undefined4 uStack_a8;
  undefined4 uStack_7c;
  undefined4 uStack_54;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc95f1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar3 = operator_new(0x360);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    local_d8 = local_cc;
    local_cc[0] = '\0';
    local_d4 = 0;
    local_d0 = 0x14;
    _strncpy(local_d8,"ui/backdrop2.dds",0x10);
    local_d4 = 0x10;
    local_d8[0x10] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    uStack_10c = 0x6a8bbe;
    piVar4 = FUN_0069d820(pvVar3,&local_d8,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xffffffff;
  if ((pvVar3 != (void *)0x0) && (0x14 < local_d0)) {
                    /* WARNING: Subroutine does not return */
    _free(local_d8);
  }
  iVar1 = *piVar4;
  uVar20 = 0;
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x70))();
  iVar1 = *piVar4;
  pcVar19 = (char *)0x0;
  FUN_0071b2b0();
  uStack_10c = 0x6a8c15;
  (**(code **)(iVar1 + 0x5c))();
  iVar1 = *piVar4;
  uStack_10c = 0;
  iStack_110 = 0x6a8c1d;
  iStack_110 = FUN_0071b2b0();
  uStack_114 = 1;
  uStack_118 = 0x6a8c25;
  (**(code **)(iVar1 + 100))();
  uStack_118 = 1;
  piStack_11c = piVar4;
  (**(code **)(*param_1 + 0xc))();
  pvVar3 = operator_new(0x360);
  uStack_2c = 3;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    pcVar19 = &stack0xffffff0c;
    uVar20 = 0x14;
    _strncpy(pcVar19,"ui/bottom_bar.dds",0x11);
    pcVar19[0x11] = '\0';
    uStack_10c = uStack_10c | 2;
    uStack_2c = CONCAT31(uStack_2c._1_3_,4);
    fStack_134 = 9.78505e-39;
    piVar4 = FUN_0069d820(pvVar3,(undefined4 *)&stack0xffffff00,0,0,0x3f800000,0x3f800000);
  }
  uStack_2c = 0xffffffff;
  if (((uStack_10c & 2) != 0) && (uStack_10c = uStack_10c & 0xfffffffd, 0x14 < uVar20)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar19);
  }
  piVar5 = (int *)FUN_0071b2b0();
  iVar1 = *piVar4;
  fVar11 = (float10)(**(code **)(*piVar5 + 0x10))();
  fVar18 = (float)fVar11;
  (**(code **)(iVar1 + 0x78))();
  (**(code **)(*piVar4 + 0x7c))();
  iVar1 = *piVar4;
  ppiVar17 = (int **)0x0;
  FUN_0071b2b0();
  fStack_134 = 9.785201e-39;
  (**(code **)(iVar1 + 0x5c))();
  iVar1 = *piVar4;
  fStack_134 = 0.0;
  fStack_138 = 9.785213e-39;
  fStack_138 = (float)FUN_0071b2b0();
  uStack_13c = 2;
  fStack_140 = 9.785224e-39;
  (**(code **)(iVar1 + 0x68))();
  fStack_140 = 1.4013e-45;
  piStack_144 = piVar4;
  (**(code **)(*param_1 + 0xc))();
  pvVar3 = operator_new(0x360);
  uStack_54 = 6;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    ppiVar17 = &piStack_11c;
    piStack_11c = (int *)((uint)piStack_11c & 0xffffff00);
    fVar18 = 2.8026e-44;
    _strncpy((char *)ppiVar17,"ui/topbar.dds",0xd);
    *(char *)((int)ppiVar17 + 0xd) = '\0';
    fStack_134 = (float)((uint)fStack_134 | 4);
    uStack_54 = CONCAT31(uStack_54._1_3_,7);
    piVar4 = FUN_0069d820(pvVar3,(undefined4 *)&stack0xfffffed8,0,0,0x3f800000,0x3f800000);
  }
  uStack_54 = 0xffffffff;
  if ((((uint)fStack_134 & 4) != 0) &&
     (fStack_134 = (float)((uint)fStack_134 & 0xfffffffb), 0x14 < (uint)fVar18)) {
                    /* WARNING: Subroutine does not return */
    _free(ppiVar17);
  }
  piVar5 = (int *)FUN_0071b2b0();
  iVar1 = *piVar4;
  fVar11 = (float10)(**(code **)(*piVar5 + 0x10))();
  fVar18 = (float)fVar11;
  (**(code **)(iVar1 + 0x78))();
  (**(code **)(*piVar4 + 0x7c))();
  iVar1 = *piVar4;
  ppiVar17 = (int **)0x0;
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x5c))();
  iVar1 = *piVar4;
  FUN_0071b2b0();
  (**(code **)(iVar1 + 100))();
  (**(code **)(*param_1 + 0xc))();
  pvVar3 = operator_new(0x360);
  uStack_7c = 9;
  if (pvVar3 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    ppiVar17 = &piStack_144;
    piStack_144 = (int *)((uint)piStack_144 & 0xffffff00);
    fVar18 = 2.8026e-44;
    _strncpy((char *)ppiVar17,"ui/logoglow.dds",0xf);
    *(char *)((int)ppiVar17 + 0xf) = '\0';
    uStack_7c = CONCAT31(uStack_7c._1_3_,10);
    pvStack_184 = (void *)0x6a8ee5;
    puVar6 = FUN_0069d820(pvVar3,(undefined4 *)&stack0xfffffeb0,0,0,0x3f800000,0x3f800000);
  }
  uStack_7c = 0xb;
  (**(code **)(param_1[0xd1] + 4))();
  param_1[0xd6] = (int)puVar6;
  (**(code **)param_1[0xd1])();
  uStack_7c = 0xffffffff;
  if ((pvVar3 != (void *)0x0) && (0x14 < (uint)fVar18)) {
                    /* WARNING: Subroutine does not return */
    _free(ppiVar17);
  }
  uVar16 = 0x44200000;
  (**(code **)(*(int *)param_1[0xd6] + 0x74))();
  iVar1 = *(int *)param_1[0xd6];
  uVar20 = 0;
  pcVar19 = (char *)FUN_0071b2b0();
  puVar15 = (undefined1 *)0x2;
  pvStack_184 = (void *)0x6a8f6e;
  (**(code **)(iVar1 + 0x60))();
  pvStack_184 = (void *)0x6a8f73;
  piVar5 = (int *)FUN_0071b2b0();
  piVar4 = (int *)param_1[0xd6];
  iVar1 = *piVar4;
  pvStack_184 = (void *)0x6a8f82;
  fVar11 = (float10)(**(code **)(*piVar5 + 0x14))();
  piStack_144 = (int *)(float)fVar11;
  pvStack_184 = (void *)0x6a8f8d;
  fVar11 = (float10)(**(code **)(*piVar4 + 0x14))();
  pvStack_184 = (void *)(float)(((float10)(float)piStack_144 - fVar11) * (float10)0.5);
  auStack_198[4] = 0x6a8fa0;
  auStack_198[4] = FUN_0071b2b0();
  auStack_198[3] = 1;
  auStack_198[2] = 0x6a8fa8;
  (**(code **)(iVar1 + 100))();
  auStack_198[2] = 1;
  auStack_198[1] = 0x6a8fb5;
  (**(code **)(*(int *)param_1[0xd6] + 0x50))();
  auStack_198[0] = param_1[0xd6];
  auStack_198[1] = 1;
  (**(code **)(*param_1 + 0xc))();
  piVar4 = (int *)param_1[0xd6];
  fVar11 = (float10)(**(code **)(*piVar4 + 0x10))();
  piVar5 = (int *)param_1[0xd6];
  fStack_138 = (float)(fVar11 * (float10)0.5 + (float10)(float)piVar4[0x30]);
  fVar11 = (float10)(**(code **)(*piVar5 + 0x14))();
  fStack_134 = (float)(fVar11 * (float10)0.5 + (float10)(float)piVar5[0x27]);
  pvVar3 = operator_new(0x360);
  uStack_a8 = 0xc;
  pvStack_184 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    uVar16 = 0x20;
    pcVar19 = _malloc(0x20);
    puVar15 = &stack0xfffffe58;
    _strncpy(pcVar19,"ui/league_rosette.dds",0x15);
    uVar20 = 0x15;
    pcVar19[0x15] = '\0';
    auStack_198[4] = auStack_198[4] | 0x10;
    uStack_a8 = CONCAT31(uStack_a8._1_3_,0xd);
    fStack_1b0 = 9.786429e-39;
    puVar7 = FUN_0069d820(pvVar3,(undefined4 *)&stack0xfffffe84,0,0,0x3f800000,0x3f800000);
  }
  uStack_a8 = 0xffffffff;
  if (((auStack_198[4] & 0x10) != 0) &&
     (auStack_198[4] = auStack_198[4] & 0xffffffef, 0x14 < uVar16)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar19);
  }
  pvVar3 = DAT_00e573c0;
  fVar14 = DAT_00e573c4;
  (**(code **)(*puVar7 + 0x74))();
  uVar16 = *puVar7;
  puVar13 = (uint *)(fStack_140 - (float)DAT_00e573c0 * 0.5);
  FUN_0071b2b0();
  fStack_1b0 = 9.786589e-39;
  (**(code **)(uVar16 + 0x5c))();
  uVar16 = *puVar7;
  fStack_1b0 = fVar18 - DAT_00e573c4 * 0.5;
  uStack_1b4 = 0x6a9123;
  uStack_1b4 = FUN_0071b2b0();
  uStack_1b8 = 1;
  uStack_1bc = 0x6a912b;
  (**(code **)(uVar16 + 100))();
  uStack_1bc = 1;
  puStack_1c0 = puVar7;
  (**(code **)(*param_1 + 0xc))();
  this = operator_new(0x420);
  if (this == (void *)0x0) {
    piStack_200 = (int *)0x0;
  }
  else {
    puVar15 = &stack0xfffffe8c;
    uVar20 = 10;
    uVar16 = FUN_00ace02d(L"<translate>LEAGUESCREEN_BACK</translate>");
    FUN_004036d0(&stack0xfffffe80,L"<translate>LEAGUESCREEN_BACK</translate>",uVar16);
    puVar13 = auStack_198;
    fStack_1b0 = (float)((uint)fStack_1b0 | 0x20);
    auStack_198[0] = auStack_198[0] & 0xffffff00;
    fVar14 = 2.8026e-44;
    _strncpy((char *)puVar13,"button_goback.",0xe);
    pvVar3 = (void *)0xe;
    *(char *)((int)puVar13 + 0xe) = '\0';
    fStack_1b0 = (float)((uint)fStack_1b0 | 0x40);
    local_d0 = 0x11;
    pcStack_1e4 = (code *)0x6a920b;
    piStack_200 = FUN_0069fb10(this,(int *)&stack0xfffffe5c,(undefined4 *)&stack0xfffffe80,
                               DAT_00e573a4,DAT_00e573a4,0,0,0x3f800000,0x3f800000);
  }
  if ((((uint)fStack_1b0 & 0x40) != 0) &&
     (fStack_1b0 = (float)((uint)fStack_1b0 & 0xffffffbf), 0x14 < (uint)fVar14)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar13);
  }
  local_d0 = 0xffffffff;
  if ((((uint)fStack_1b0 & 0x20) != 0) &&
     (fStack_1b0 = (float)((uint)fStack_1b0 & 0xffffffdf), 10 < uVar20)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar15);
  }
  (**(code **)(*piStack_200 + 0x5c))();
  (**(code **)(*piStack_200 + 100))();
  pcStack_1e4 = FUN_006a8070;
  puStack_1e8 = (undefined1 *)0x0;
  pcStack_1ec = (char *)0x6a929f;
  (**(code **)(*piStack_200 + 0x18))();
  pcStack_1ec = "LEAGUESCREEN_BACK";
  uStack_1f0 = 0;
  puStack_1f4 = &LAB_005f37f0;
  auStack_1fc[1] = 5;
  auStack_1fc[0] = 0x6a92b3;
  (**(code **)(*piStack_200 + 0x18))();
  auStack_1fc[0] = 1;
  (**(code **)(*param_1 + 0xc))();
  if ((char)param_1[0x102] == '\0') {
    piVar4 = (int *)GetPlayerStudio();
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x54))();
  }
  else {
    uStack_20c = 0x6a92da;
    puVar6 = FUN_00464e10(0,'\0');
  }
  piStack_228 = FUN_00464820((int)puVar6);
  puVar13 = (uint *)0x43000000;
  uStack_20c = 0x6a92f7;
  (**(code **)(*piStack_228 + 0x74))();
  uStack_20c = 0x42800000;
  puStack_214 = (undefined1 *)0x1;
  uStack_218 = 0x6a9306;
  puStack_210 = puVar7;
  (**(code **)(*piStack_228 + 100))();
  uStack_218 = 0x42800000;
  uStack_220 = 2;
  uStack_224 = 0x6a9315;
  puStack_21c = puVar7;
  (**(code **)(*piStack_228 + 0x60))();
  uStack_224 = 1;
  (**(code **)(*param_1 + 0xc))();
  puStack_1c0 = &uStack_1b4;
  uStack_1b4 = uStack_1b4 & 0xffff0000;
  uStack_1bc = 0;
  uStack_1b8 = 10;
  fStack_138 = 2.8026e-44;
  if ((char)param_1[0x102] == '\0') {
    piVar4 = (int *)GetPlayerStudio();
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x20))();
    puStack_234 = (undefined1 *)0x6a938d;
    FUN_0040cae0(&puStack_1c0,(wchar_t *)*puVar6,puVar6[1]);
    if (10 < auStack_198[0]) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
  }
  else {
    sVar8 = FUN_00ace02d(L"<translate>LEAGUESCREEN_ONLINE_TITLE</translate>");
    puStack_234 = (undefined1 *)0x6a9367;
    FUN_0040cae0(&puStack_1c0,L"<translate>LEAGUESCREEN_ONLINE_TITLE</translate>",sVar8);
  }
  puStack_1e8 = &stack0xfffffe24;
  pcStack_1e4 = (code *)0x0;
  uVar16 = 10;
  uVar20 = FUN_00ace02d((short *)&DAT_00d3aaa8);
  puStack_234 = (undefined1 *)0x6a93dc;
  FUN_004036d0(&puStack_1e8,L"s5",uVar20);
  pcStack_1ec = (char *)0xffffffff;
  puStack_214 = &stack0xfffffdb0;
  fStack_138._0_1_ = 0x15;
  FUN_00831bd0((undefined4 *)&stack0xfffffdb0,&puStack_1e8,&puStack_1c0);
  puStack_210 = (uint *)FUN_00833680();
  fStack_138 = (float)CONCAT31(fStack_138._1_3_,0x14);
  if (10 < uVar16) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1e8);
  }
  _Memory = (uint *)param_1[0xd6];
  puStack_214 = (undefined1 *)*puStack_210;
  fVar11 = (float10)(**(code **)(*_Memory + 0x14))();
  puVar2 = puStack_210;
  puVar7 = (uint *)(float)(fVar11 * (float10)0.5 - (float10)64.0);
  puStack_234 = (undefined1 *)0x2;
  puStack_238 = (undefined1 *)0x6a9486;
  (**(code **)((int)puStack_214 + 0x68))();
  iStack_23c = param_1[0xd6];
  puStack_238 = (undefined1 *)0x0;
  ppuStack_240 = (undefined1 **)0x1;
  (**(code **)(*puVar2 + 0x5c))();
  (**(code **)(*param_1 + 0xc))();
  if ((char)param_1[0x102] == '\0') {
    puVar6 = FUN_0043c4f0();
    FUN_004036d0(&stack0xfffffe20,(wchar_t *)*puVar6,puVar6[1]);
    puVar13 = auStack_1fc;
    auStack_1fc[0] = auStack_1fc[0] & 0xffff0000;
    piStack_200 = (int *)&lpType_0000000a;
    uVar20 = FUN_00ace02d((short *)&DAT_00d3aaa8);
    FUN_004036d0(&stack0xfffffdf8,L"s5",uVar20);
    puStack_234 = (undefined1 *)&puStack_26c;
    FUN_00831bd0(&puStack_26c,(undefined4 *)&stack0xfffffdf8,(undefined4 *)&stack0xfffffe20);
    piVar4 = FUN_00833750();
    (**(code **)(*piVar4 + 0x68))();
    (**(code **)(*piVar4 + 0x5c))();
    puStack_26c = (undefined1 *)0x6a9578;
    (**(code **)(*param_1 + 0xc))();
  }
  uVar20 = FUN_00ace02d(L"LEAGUESCREEN_STUDIO");
  FUN_004036d0(&stack0xfffffe20,L"LEAGUESCREEN_STUDIO",uVar20);
  FUN_006a8130(param_1,(undefined4 *)&stack0xfffffe20);
  puVar15 = operator_new(0x420);
  puStack_234 = puVar15;
  if (puVar15 == (undefined1 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar13 = auStack_1fc;
    auStack_1fc[0] = auStack_1fc[0] & 0xffff0000;
    piStack_200 = (int *)&lpType_0000000a;
    uVar20 = FUN_00ace02d(L"<translate>LEAGUESCREEN_STUDIOTABLE</translate>");
    FUN_004036d0(&stack0xfffffdf8,L"<translate>LEAGUESCREEN_STUDIOTABLE</translate>",uVar20);
    puVar7 = &uStack_220;
    puStack_238 = (undefined1 *)((uint)puStack_238 | 0x80);
    uStack_220 = uStack_220 & 0xffffff00;
    uStack_224 = 0x14;
    _strncpy((char *)puVar7,"fullsrn_studioicon.",0x13);
    piStack_228 = (int *)0x13;
    *(char *)((int)puVar7 + 0x13) = '\0';
    puStack_238 = (undefined1 *)((uint)puStack_238 | 0x100);
    _Memory = (uint *)&stack0xfffffda8;
    puStack_26c = (undefined1 *)0x6a967f;
    puVar6 = FUN_0069fb10(puVar15,(int *)&stack0xfffffdd4,(undefined4 *)&stack0xfffffdf8,0x42800000,
                          0x42800000,0,0,0x3f800000,0x3f800000);
  }
  (**(code **)(param_1[0xfb] + 4))();
  param_1[0x100] = (int)puVar6;
  (**(code **)param_1[0xfb])();
  if ((((uint)puStack_238 & 0x100) != 0) &&
     (puStack_238 = (undefined1 *)((uint)puStack_238 & 0xfffffeff), 0x14 < uStack_224)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar7);
  }
  if (((char)puStack_238 < '\0') &&
     (puStack_238 = (undefined1 *)((uint)puStack_238 & 0xffffff7f), &lpType_0000000a < piStack_200))
  {
                    /* WARNING: Subroutine does not return */
    _free(puVar13);
  }
  iVar1 = *(int *)param_1[0x100];
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x60))();
  iVar1 = *(int *)param_1[0x100];
  uVar20 = FUN_0071b2b0();
  (**(code **)(iVar1 + 0x68))();
  pcVar19 = "LEAGUESCREEN_SHOWSTUDIOTABLE";
  puStack_26c = &LAB_006a8ab0;
  uVar16 = 0;
  (**(code **)(*(int *)param_1[0x100] + 0x18))();
  (**(code **)(*(int *)param_1[0x100] + 0x18))();
  puVar15 = operator_new(0x420);
  puStack_26c = puVar15;
  if (puVar15 == (undefined1 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    ppuStack_240 = &puStack_234;
    puStack_234 = (undefined1 *)((uint)puStack_234 & 0xffff0000);
    iStack_23c = 0;
    puStack_238 = &lpType_0000000a;
    uVar20 = FUN_00ace02d(L"<translate>LEAGUESCREEN_MOVIETABLE</translate>");
    FUN_004036d0(&ppuStack_240,L"<translate>LEAGUESCREEN_MOVIETABLE</translate>",uVar20);
    pcVar19 = &stack0xfffffda8;
    uVar20 = 0x14;
    _strncpy(pcVar19,"filmcan.",8);
    pcVar19[8] = '\0';
    uVar16 = uVar16 | 0x600;
    auStack_198[2] = 0x1e;
    puVar6 = FUN_0069fb10(puVar15,(int *)&stack0xfffffd9c,&ppuStack_240,0x42800000,0x42800000,0,0,
                          0x3f800000,0x3f800000);
  }
  auStack_198[2] = 0x20;
  (**(code **)(param_1[0xf5] + 4))();
  param_1[0xfa] = (int)puVar6;
  (**(code **)param_1[0xf5])();
  if (((uVar16 & 0x400) != 0) && (uVar16 = uVar16 & 0xfffffbff, 0x14 < uVar20)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar19);
  }
  auStack_198[2] = 0x14;
  if (((uVar16 & 0x200) != 0) && (&lpType_0000000a < puStack_238)) {
                    /* WARNING: Subroutine does not return */
    _free(ppuStack_240);
  }
  (**(code **)(*(int *)param_1[0xfa] + 0x60))();
  iVar1 = *(int *)param_1[0xfa];
  FUN_0071b2b0();
  (**(code **)(iVar1 + 0x68))();
  (**(code **)(*(int *)param_1[0xfa] + 0x18))();
  (**(code **)(*(int *)param_1[0xfa] + 0x18))();
  pvVar3 = operator_new(0x420);
  bVar10 = pvVar3 == (void *)0x0;
  if (bVar10) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    _Memory = &uStack_224;
    uStack_224 = uStack_224 & 0xffff0000;
    piStack_228 = (int *)&lpType_0000000a;
    uVar20 = FUN_00ace02d(L"<translate>LEAGUESCREEN_STARTABLE</translate>");
    FUN_004036d0(&stack0xfffffdd0,L"<translate>LEAGUESCREEN_STARTABLE</translate>",uVar20);
    puStack_210 = (uint *)&stack0xfffffdfc;
    uStack_20c = 0;
    puVar13 = (uint *)&DAT_00000014;
    _strncpy((char *)puStack_210,"job_star.",9);
    uStack_20c = 9;
    *(char *)((int)puStack_210 + 9) = '\0';
    puVar6 = FUN_0069fb10(pvVar3,(int *)&puStack_210,(undefined4 *)&stack0xfffffdd0,0x42800000,
                          0x42800000,0,0,0x3f800000,0x3f800000);
  }
  (**(code **)(param_1[0xef] + 4))();
  param_1[0xf4] = (int)puVar6;
  (**(code **)param_1[0xef])();
  if ((!bVar10) && (&DAT_00000014 < puVar13)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_210);
  }
  if ((!bVar10) && (&lpType_0000000a < piStack_228)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  (**(code **)(*(int *)param_1[0xf4] + 0x60))();
  iVar1 = *(int *)param_1[0xf4];
  iVar9 = FUN_0071b2b0();
  (**(code **)(iVar1 + 0x68))(2,iVar9);
  (**(code **)(*(int *)param_1[0xf4] + 0x18))(0,&LAB_006a8a30,param_1,"LEAGUESCREEN_SHOWSTARTABLE");
  (**(code **)(*(int *)param_1[0xf4] + 0x18))(5,&LAB_005f37f0,0,"LEAGUESCREEN_SHOWSTARTABLE");
  (**(code **)(*param_1 + 0xc))(param_1[0x100],1);
  (**(code **)(*param_1 + 0xc))(param_1[0xfa],1);
  (**(code **)(*param_1 + 0xc))(param_1[0xf4],1);
  pvVar3 = operator_new(0x4a0);
  uStack_218._0_1_ = 0x26;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_006adbc0(pvVar3,(int)param_1,0,(char)param_1[0x102]);
  }
  uStack_218._0_1_ = 0x14;
  (**(code **)(param_1[0xd7] + 4))();
  param_1[0xdc] = (int)piVar4;
  (**(code **)param_1[0xd7])();
  pvVar3 = operator_new(0x4a0);
  uStack_218._0_1_ = 0x27;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_006adbc0(pvVar3,(int)param_1,1,(char)param_1[0x102]);
  }
  uStack_218._0_1_ = 0x14;
  (**(code **)(param_1[0xdd] + 4))();
  param_1[0xe2] = (int)piVar4;
  (**(code **)param_1[0xdd])();
  pvVar3 = operator_new(0x4a0);
  uStack_218._0_1_ = 0x28;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_006adbc0(pvVar3,(int)param_1,2,(char)param_1[0x102]);
  }
  uStack_218 = CONCAT31(uStack_218._1_3_,0x14);
  (**(code **)(param_1[0xe3] + 4))();
  param_1[0xe8] = (int)piVar4;
  (**(code **)param_1[0xe3])();
  (**(code **)(*param_1 + 0xc))(param_1[0xe2],1);
  (**(code **)(*param_1 + 0xc))(param_1[0xdc],1);
  (**(code **)(*param_1 + 0xc))(param_1[0xe8],1);
  puVar15 = &stack0xfffffdb4;
  uVar20 = 10;
  if (DAT_0104dbd8 == 0) {
    ExceptionList = puStack_238;
    return;
  }
  if (DAT_00e57430 == 0) {
    uVar16 = FUN_00ace02d(L"LEAGUESCREEN_STAR");
    pwVar12 = L"LEAGUESCREEN_STAR";
  }
  else if (DAT_00e57430 == 1) {
    uVar16 = FUN_00ace02d(L"LEAGUESCREEN_STUDIO");
    pwVar12 = L"LEAGUESCREEN_STUDIO";
  }
  else {
    if (DAT_00e57430 != 2) goto LAB_006a9d2d;
    uVar16 = FUN_00ace02d(L"LEAGUESCREEN_MOVIE");
    pwVar12 = L"LEAGUESCREEN_MOVIE";
  }
  FUN_004036d0(&stack0xfffffda8,pwVar12,uVar16);
LAB_006a9d2d:
  FUN_006a8130(param_1,(undefined4 *)&stack0xfffffda8);
  if (uVar20 < 0xb) {
    ExceptionList = puStack_238;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puVar15);
}


//// FUNCTION FUN_006a9d90 @ 006a9d90 ////

int * __thiscall FUN_006a9d90(void *this,undefined1 param_1)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  undefined4 extraout_EDX;
  void *unaff_EDI;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9678;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d3ae6c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3ae54;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_LAB_00d3aab4;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 **)((int)this + 0x380) = (undefined4 *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x374) = &PTR_LAB_00d3aab4;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 **)((int)this + 0x398) = (undefined4 *)((int)this + 0x38c);
  *(undefined4 *)((int)this + 0x38c) = &PTR_LAB_00d3aab4;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 **)((int)this + 0x3b0) = (undefined4 *)((int)this + 0x3a4);
  *(undefined4 *)((int)this + 0x3a4) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 **)((int)this + 0x3c8) = (undefined4 *)((int)this + 0x3bc);
  *(undefined4 *)((int)this + 0x3bc) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 **)((int)this + 0x3e0) = (undefined4 *)((int)this + 0x3d4);
  *(undefined4 *)((int)this + 0x3d4) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 **)((int)this + 0x3f8) = (undefined4 *)((int)this + 0x3ec);
  *(undefined4 *)((int)this + 0x3ec) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x400) = 0;
  uVar4 = 1;
  local_4 = 8;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined1 *)((int)this + 0x408) = param_1;
  iVar3 = 2;
  this_00 = (void *)FUN_004f3b20();
  FUN_004f9390(this_00,iVar3,uVar4);
  FUN_0053ca50();
  FUN_0071c290();
  FUN_00424130(DAT_00f87b04,1,0,0);
  FUN_009a1560(1);
  iVar3 = *(int *)this;
  uVar5 = 0;
  iVar1 = FUN_0071b2b0();
  (**(code **)(iVar3 + 0x70))(iVar1,uVar5);
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))(this,1);
  FUN_006a8b10(this);
  FUN_005e98d0(DAT_0104d82c,extraout_EDX);
  ExceptionList = unaff_EDI;
  return this;
}


//// FUNCTION FUN_006a9f30 @ 006a9f30 ////

void __cdecl FUN_006a9f30(undefined1 param_1)

{
  void *this;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc969b;
  local_c = ExceptionList;
  piVar1 = (int *)0x0;
  if (DAT_0104dbc0 == (int *)0x0) {
    ExceptionList = &local_c;
    this = operator_new(0x40c);
    local_4 = 0;
    if (this != (void *)0x0) {
      piVar1 = FUN_006a9d90(this,param_1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104dbac[1])();
    DAT_0104dbc0 = piVar1;
    (*(code *)*DAT_0104dbac)();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006aa060 @ 006aa060 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_006aa060(int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x494) != '\0') {
    uVar3 = FUN_00990ae0(param_1,param_2);
    param_2 = (uint)(uVar3 >> 0x20);
    fVar1 = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar2 = (float)*(int *)(param_1 + 0x498);
    if (*(int *)(param_1 + 0x498) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    if (fVar2 + _DAT_00e574c4 < fVar1 != (fVar2 + _DAT_00e574c4 == fVar1)) {
      return CONCAT44(param_2,1);
    }
  }
  return (ulonglong)param_2 << 0x20;
}


//// FUNCTION FUN_006aa0c0 @ 006aa0c0 ////

int * __thiscall FUN_006aa0c0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_006aa110 @ 006aa110 ////

int * __thiscall FUN_006aa110(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_006aa1a0 @ 006aa1a0 ////

int __fastcall FUN_006aa1a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_006aa400 @ 006aa400 ////

void __cdecl FUN_006aa400(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_006aa440 @ 006aa440 ////

int * __thiscall FUN_006aa440(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_006aa480 @ 006aa480 ////

undefined4 * __cdecl FUN_006aa480(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar1 = param_3 + -6;
    iVar2 = param_2 + -0x18;
    (**(code **)(param_3[-6] + 4))();
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    (**(code **)*puVar1)();
    param_3 = puVar1;
    param_2 = iVar2;
  } while (iVar2 != param_1);
  return puVar1;
}


//// FUNCTION FUN_006aa5a0 @ 006aa5a0 ////

void FUN_006aa5a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00e5743c;
  *param_1 = DAT_00e57438;
  param_1[1] = uVar1;
  return;
}


//// FUNCTION FUN_006aa5d0 @ 006aa5d0 ////

void __fastcall FUN_006aa5d0(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc96bb;
  pvStack_c = ExceptionList;
  puVar3 = (undefined4 *)param_1[0xe8];
  puVar4 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)();
    }
    (**(code **)(param_1[0xe3] + 4))();
    param_1[0xe8] = 0;
    (**(code **)param_1[0xe3])();
  }
  puVar3 = operator_new(0x3ac);
  uStack_4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = FUN_0063f620(puVar3);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(param_1[0xe3] + 4))();
  param_1[0xe8] = (int)puVar4;
  (**(code **)param_1[0xe3])();
  (**(code **)(*(int *)param_1[0xe8] + 0x74))();
  (**(code **)(*(int *)param_1[0xe8] + 0x5c))();
  pvVar2 = (void *)param_1[0xf4];
  (**(code **)(*(int *)param_1[0xe8] + 100))();
  (**(code **)(*(int *)param_1[0xe8] + 0x50))();
  FUN_0063e890((void *)param_1[0xe8],'\x01');
  *(undefined1 *)(param_1[0xe8] + 0x352) = 1;
  FUN_0063e6c0((void *)param_1[0xe8],DAT_00e572d4,0xff77909f);
  (**(code **)(*param_1 + 0xc))(param_1[0xe8]);
  ExceptionList = pvVar2;
  return;
}


//// FUNCTION FUN_006aa730 @ 006aa730 ////

void __thiscall FUN_006aa730(void *this,char param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this_00;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar3 = DAT_0104dbf0;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc96db;
  pvStack_c = ExceptionList;
  puVar5 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  if (DAT_0104dbf0 != (undefined4 *)0x0) {
    iVar2 = DAT_0104dbf0[0x12];
    ExceptionList = &pvStack_c;
    DAT_0104dbf0[0x12] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (*(code *)DAT_0104dbdc[1])();
    DAT_0104dbf0 = (undefined4 *)0x0;
    (*(code *)*DAT_0104dbdc)();
  }
  *(undefined1 *)((int)this + 0x494) = 1;
  FUN_00748240(*(int *)((int)this + 0x2d4));
  uVar4 = 1;
  if (param_1 == '\0') {
    uVar4 = 5;
  }
  uVar6 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)((int)this + 0x498) = (int)uVar6;
  *(undefined1 *)((int)this + 0x495) = 0;
  this_00 = operator_new(0xdc);
  uStack_4 = 0;
  if (this_00 != (void *)0x0) {
    puVar5 = FUN_00745620(this_00,1000000);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)((int)this + 0x41c) + 4))();
  *(undefined4 **)((int)this + 0x430) = puVar5;
  (*(code *)**(undefined4 **)((int)this + 0x41c))();
  pvStack_1c = (void *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  if (param_1 == '\0') {
    pvStack_1c = DAT_00e57440;
    uStack_18 = DAT_00e57444;
  }
  (**(code **)(**(int **)((int)this + 0x430) + 0x34))(&pvStack_1c,&uStack_14,uVar4);
  (**(code **)(**(int **)((int)this + 0x430) + 0x30))(1);
  puVar1 = (uint *)(*(int *)((int)this + 0x430) + 0x90);
  *puVar1 = *puVar1 | 2;
  FUN_0073e510(this,*(undefined4 *)((int)this + 0x430));
  FUN_005392c0("STAR_CHARTS_WHOOSH");
  ExceptionList = pvStack_1c;
  return;
}


//// FUNCTION FUN_006aa8b0 @ 006aa8b0 ////

void __thiscall FUN_006aa8b0(void *this,char param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this_00;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar3 = DAT_0104dbf0;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc96fb;
  pvStack_c = ExceptionList;
  puVar5 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  if (DAT_0104dbf0 != (undefined4 *)0x0) {
    iVar2 = DAT_0104dbf0[0x12];
    ExceptionList = &pvStack_c;
    DAT_0104dbf0[0x12] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (*(code *)DAT_0104dbdc[1])();
    DAT_0104dbf0 = (undefined4 *)0x0;
    (*(code *)*DAT_0104dbdc)();
  }
  FUN_00748240(*(int *)((int)this + 0x2d4));
  uVar4 = 1;
  if (param_1 == '\0') {
    uVar4 = 5;
  }
  uVar6 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)((int)this + 0x498) = (int)uVar6;
  *(undefined1 *)((int)this + 0x495) = 0;
  this_00 = operator_new(0xdc);
  uStack_4 = 0;
  if (this_00 != (void *)0x0) {
    puVar5 = FUN_00745620(this_00,1000000);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)((int)this + 0x41c) + 4))();
  *(undefined4 **)((int)this + 0x430) = puVar5;
  (*(code *)**(undefined4 **)((int)this + 0x41c))();
  pvStack_1c = DAT_00e57440;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_18 = 0;
  (**(code **)(**(int **)((int)this + 0x430) + 0x34))(&uStack_14,&pvStack_1c,uVar4);
  (**(code **)(**(int **)((int)this + 0x430) + 0x30))(1);
  puVar1 = (uint *)(*(int *)((int)this + 0x430) + 0x90);
  *puVar1 = *puVar1 | 2;
  FUN_0073e510(this,*(undefined4 *)((int)this + 0x430));
  *(undefined1 *)((int)this + 0x494) = 0;
  ExceptionList = pvStack_1c;
  return;
}


//// FUNCTION FUN_006aaa30 @ 006aaa30 ////

void __fastcall FUN_006aaa30(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc971b;
  pvStack_c = ExceptionList;
  puVar3 = *(undefined4 **)(param_1 + 0x3b8);
  ExceptionList = &pvStack_c;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x3a4) + 4))();
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x3a4))();
  }
  puVar3 = operator_new(0x3ac);
  uStack_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0063f620(puVar3);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x3a4) + 4))();
  *(undefined4 **)(param_1 + 0x3b8) = puVar3;
  (*(code *)**(undefined4 **)(param_1 + 0x3a4))();
  pvVar4 = DAT_00e57448;
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x74))(DAT_00e57448,DAT_00e574a4);
  (**(code **)(**(int **)(param_1 + 0x3b8) + 100))(2,*(undefined4 *)(param_1 + 0x3a0),DAT_00e574ac);
  puVar2 = (uint *)(*(int *)(param_1 + 0x3b8) + 0x114);
  *puVar2 = *puVar2 & 0xfffffffd;
  FUN_0063e6c0(*(void **)(param_1 + 0x3b8),DAT_00e572dc,DAT_00e572d8);
  if (*(char *)(param_1 + 0x49c) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0x20))(0);
  }
  if (*(int *)(param_1 + 0x438) == 0) {
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0x5c))(1,*(undefined4 *)(param_1 + 0x3a0),0);
  }
  else if (*(int *)(param_1 + 0x438) == 2) {
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0x60))(2,*(undefined4 *)(param_1 + 0x3a0),0);
  }
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x50))(1);
  ExceptionList = pvVar4;
  return;
}


//// FUNCTION FUN_006aae30 @ 006aae30 ////

void __cdecl FUN_006aae30(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_006aaeb0 @ 006aaeb0 ////

void __cdecl FUN_006aaeb0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_006aaf30 @ 006aaf30 ////

void __fastcall FUN_006aaf30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Memory;
  size_t sVar3;
  int *piVar4;
  wchar_t *local_ac;
  uint local_a8;
  undefined4 local_a4;
  wchar_t local_a0 [10];
  wchar_t awStack_8c [48];
  void *pvStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc973b;
  pvStack_c = ExceptionList;
  puVar1 = (undefined4 *)param_1[0x106];
  ExceptionList = &pvStack_c;
  if (puVar1 != (undefined4 *)0x0) {
    piVar4 = puVar1 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*puVar1)();
    }
    (**(code **)(param_1[0x101] + 4))();
    param_1[0x106] = 0;
    (**(code **)param_1[0x101])();
  }
  local_ac = local_a0;
  local_a0[0] = L'\0';
  local_a8 = 0;
  local_a4 = 10;
  local_4 = 0;
  sVar3 = FUN_00ace02d(L"<s8><p align=\"center\"><translate>LEAGUESCREEN_PAGE</translate>");
  FUN_0040cae0(&local_ac,L"<s8><p align=\"center\"><translate>LEAGUESCREEN_PAGE</translate>",sVar3);
  sVar3 = FUN_00ace02d((short *)&DAT_00d184c4);
  FUN_0040cae0(&local_ac,L" ",sVar3);
  sVar3 = _swprintf(awStack_8c,0xd18f7c,(wchar_t *)param_1[0x124]);
  FUN_0040cae0(&local_ac,awStack_8c,sVar3);
  sVar3 = FUN_00ace02d((short *)&DAT_00d24214);
  FUN_0040cae0(&local_ac,L"/",sVar3);
  sVar3 = _swprintf(awStack_8c,0xd18f7c,(wchar_t *)param_1[0x123]);
  FUN_0040cae0(&local_ac,awStack_8c,sVar3);
  sVar3 = FUN_00ace02d(L"</s8>");
  FUN_0040cae0(&local_ac,L"</s8>",sVar3);
  FUN_004036d0(&stack0xffffff20,local_ac,local_a8);
  piVar4 = FUN_00833750();
  (**(code **)(param_1[0x101] + 4))();
  param_1[0x106] = (int)piVar4;
  (**(code **)param_1[0x101])();
  piVar4 = (int *)param_1[0x106];
  iVar2 = *piVar4;
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*piVar4 + 0x10))();
  piVar4 = param_1;
  (**(code **)(iVar2 + 0x5c))();
  _Memory = DAT_00e5749c;
  (**(code **)(*(int *)param_1[0x106] + 0x68))();
  (**(code **)(*param_1 + 0xc))();
  if (&lpType_0000000a < piVar4) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_2c;
  return;
}


//// FUNCTION FUN_006ab210 @ 006ab210 ////

void __fastcall FUN_006ab210(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3b35c;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006ab260 @ 006ab260 ////

void __fastcall FUN_006ab260(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d3b36c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_006ab2b0 @ 006ab2b0 ////

void __fastcall FUN_006ab2b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3b36c;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006ab3d0 @ 006ab3d0 ////

void * FUN_006ab3d0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_006ab450 @ 006ab450 ////

undefined4 * __thiscall FUN_006ab450(void *this,byte param_1)

{
  FUN_006ab210(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006ab480 @ 006ab480 ////

void __fastcall FUN_006ab480(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_006ab4b0 @ 006ab4b0 ////

void __fastcall FUN_006ab4b0(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_006ab4e0 @ 006ab4e0 ////

undefined4 * FUN_006ab4e0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  return param_1 + param_2;
}


//// FUNCTION FUN_006ab540 @ 006ab540 ////

void __fastcall FUN_006ab540(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_006ab570 @ 006ab570 ////

void __fastcall FUN_006ab570(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_006ab5b0 @ 006ab5b0 ////

void __cdecl FUN_006ab5b0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_3;
        *param_3 = &PTR_LAB_00d3b35c;
        iVar2 = *(int *)(param_1 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 0x18;
      param_3 = param_3 + 6;
      puVar3 = puVar3 + 6;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_006ab620 @ 006ab620 ////

void __cdecl FUN_006ab620(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    puVar3 = param_1 + 2;
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_1;
        *param_1 = &PTR_LAB_00d3b35c;
        iVar2 = *(int *)(param_3 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 6;
      puVar3 = puVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_006ab770 @ 006ab770 ////

undefined4 * FUN_006ab770(undefined4 *param_1,int param_2,int param_3)

{
  FUN_006ab620(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_006ab7a0 @ 006ab7a0 ////

void FUN_006ab7a0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_006ab210(param_1);
  }
  return;
}


//// FUNCTION FUN_006ab7d0 @ 006ab7d0 ////

void FUN_006ab7d0(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9758;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_006ab840 @ 006ab840 ////

void FUN_006ab840(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9778;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_006ab8b0 @ 006ab8b0 ////

void FUN_006ab8b0(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9798;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_006ab970 @ 006ab970 ////

void __fastcall FUN_006ab970(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_006ab210(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_006aba60 @ 006aba60 ////

void __thiscall FUN_006aba60(void *this,int *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined ***local_28;
  int local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00cc97b8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d3b35c;
  ExceptionList = &local_10;
  if (local_20 != 0) {
    local_2c = (int *)(local_20 + 0x18);
    local_30 = *local_2c;
    ExceptionList = &local_10;
    *(int **)(*local_2c + 4) = &local_30;
    *local_2c = (int)&local_30;
  }
  iVar3 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar3 != 0) {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x18;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    local_18 = this;
    puVar1 = &stack0xffffffc0;
    if (0xaaaaaaaU - iVar2 < param_2) {
      FUN_006ab7d0();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0xaaaaaaa - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x18;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_006aa1a0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_006ab5b0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_006ab620(puVar5,param_2,(int)&local_34);
      FUN_006ab5b0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_006ab7a0(puVar5,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 6;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 6;
      *(undefined4 **)((int)this + 4) = puVar4;
    }
    else {
      puVar5 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar5 - (int)param_1) / 0x18) < param_2) {
        FUN_006ab5b0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006ab770(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_006aae30(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_006ab5b0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_006aa480((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_006aae30(param_1,param_1 + param_2 * 6,(int)&local_34);
      }
    }
  }
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_006abd90 @ 006abd90 ////

void __thiscall FUN_006abd90(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *_Dst;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = *(int *)((int)this + 4);
  param_3 = (undefined4 *)*param_3;
  if (iVar5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - iVar5 >> 2;
  }
  uVar6 = CONCAT44(iVar5,iVar1);
  if (param_2 != 0) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - iVar5 >> 2;
    }
    if (0x3fffffffU - iVar5 < param_2) {
      uVar6 = FUN_006ab8b0();
    }
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)uVar6;
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 8) - iVar5 >> 2;
    }
    if (uVar2 < iVar1 + param_2) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar5 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - iVar5 >> 2;
      }
      if (uVar2 < iVar1 + param_2) {
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)((int)this + 8) - iVar5 >> 2;
        }
        uVar2 = iVar5 + param_2;
      }
      pvVar3 = operator_new(uVar2 * 4);
      _Size = ((int)param_1 - (int)*(void **)((int)this + 4) >> 2) * 4;
      pvVar4 = _memmove(pvVar3,*(void **)((int)this + 4),_Size);
      _Dst = FUN_006ab4e0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
      _memmove(_Dst,param_1,(*(int *)((int)this + 8) - (int)param_1 >> 2) << 2);
      pvVar4 = *(void **)((int)this + 4);
      if (pvVar4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - (int)pvVar4 >> 2;
      }
      if (pvVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar4);
      }
      *(void **)((int)this + 0xc) = (void *)(uVar2 * 4 + (int)pvVar3);
      *(void **)((int)this + 8) = (void *)((int)pvVar3 + (param_2 + iVar5) * 4);
      *(void **)((int)this + 4) = pvVar3;
      return;
    }
    iVar5 = *(int *)((int)this + 8);
    if ((uint)(iVar5 - (int)param_1 >> 2) < param_2) {
      FUN_006ab3d0(param_1,iVar5,param_1 + param_2);
      FUN_006ab4e0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_006aa400(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_006ab3d0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_006aaeb0(param_1,(int)pvVar3,iVar5);
    FUN_006aa400(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_006abfc0 @ 006abfc0 ////

void __thiscall FUN_006abfc0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_006ac005;
    }
  }
  iVar1 = 0;
LAB_006ac005:
  FUN_006aba60(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_006ac080 @ 006ac080 ////

void __fastcall FUN_006ac080(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  undefined1 uVar7;
  LONG LVar8;
  int *piVar9;
  uint uVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc989c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d3b394;
  param_1[0x14] = &PTR_FUN_00d3b37c;
  local_4 = 0xe;
  if ((undefined4 *)param_1[0x49] != param_1 + 0x4c) {
    do {
      piVar9 = (int *)param_1[0x49];
      puVar3 = (undefined4 *)piVar9[2];
      if ((int *)piVar9[1] != (int *)0x0) {
        *(int *)piVar9[1] = *piVar9;
      }
      if (*piVar9 != 0) {
        *(int *)(*piVar9 + 4) = piVar9[1];
      }
      *piVar9 = 0;
      piVar9[1] = 0;
      piVar9 = puVar3 + 0x12;
      *piVar9 = *piVar9 + -1;
      if (*piVar9 == 0) {
        (**(code **)*puVar3)(1);
      }
    } while ((undefined4 *)param_1[0x49] != param_1 + 0x4c);
  }
  for (uVar10 = 0;
      (iVar4 = param_1[0x11c], iVar4 != 0 && (uVar10 < (uint)(param_1[0x11d] - iVar4 >> 2)));
      uVar10 = uVar10 + 1) {
    iVar2 = uVar10 * 4;
    if (*(int *)(iVar4 + iVar2) != 0) {
      pvVar5 = *(void **)(*(int *)(iVar4 + iVar2) + 0x40);
      if (pvVar5 != (void *)0x0) {
        FUN_00990ec0((int)pvVar5);
                    /* WARNING: Subroutine does not return */
        _free(pvVar5);
      }
      *(undefined4 *)(*(int *)(param_1[0x11c] + iVar2) + 0x40) = 0;
    }
    puVar3 = *(undefined4 **)(param_1[0x11c] + iVar2);
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 4);
      uVar7 = DAT_0105b588;
      if ((LVar8 == 0) && (DAT_0105b588 = 1, puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      DAT_0105b588 = uVar7;
      *(undefined4 *)(param_1[0x11c] + iVar2) = 0;
    }
  }
  for (uVar10 = 0;
      (iVar4 = param_1[0x120], iVar4 != 0 && (uVar10 < (uint)(param_1[0x121] - iVar4 >> 2)));
      uVar10 = uVar10 + 1) {
    iVar2 = uVar10 * 4;
    if (*(int *)(iVar2 + iVar4) != 0) {
      pvVar5 = *(void **)(*(int *)(iVar2 + iVar4) + 0x40);
      if (pvVar5 != (void *)0x0) {
        FUN_00990ec0((int)pvVar5);
                    /* WARNING: Subroutine does not return */
        _free(pvVar5);
      }
      *(undefined4 *)(*(int *)(param_1[0x120] + iVar2) + 0x40) = 0;
    }
    puVar3 = *(undefined4 **)(iVar2 + param_1[0x120]);
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 4);
      uVar7 = DAT_0105b588;
      if ((LVar8 == 0) && (DAT_0105b588 = 1, puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      DAT_0105b588 = uVar7;
      *(undefined4 *)(param_1[0x120] + iVar2) = 0;
    }
  }
  if ((void *)param_1[0x120] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x120]);
  }
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  if ((void *)param_1[0x11c] == (void *)0x0) {
    param_1[0x11c] = 0;
    param_1[0x11d] = 0;
    param_1[0x11e] = 0;
    piVar9 = (int *)param_1[0x118];
    if (piVar9 != (int *)0x0) {
      piVar6 = (int *)param_1[0x119];
      if (piVar9 != piVar6) {
        piVar9 = piVar9 + 2;
        do {
          piVar9[-2] = (int)&PTR_LAB_00d3b35c;
          if ((int *)*piVar9 != (int *)0x0) {
            *(int *)*piVar9 = piVar9[-1];
          }
          if (piVar9[-1] != 0) {
            *(int *)(piVar9[-1] + 4) = *piVar9;
          }
          piVar9[-1] = 0;
          *piVar9 = 0;
          piVar9[3] = 0;
          if ((int *)*piVar9 != (int *)0x0) {
            *(int *)*piVar9 = piVar9[-1];
          }
          if (piVar9[-1] != 0) {
            *(int *)(piVar9[-1] + 4) = *piVar9;
          }
          piVar9[-1] = 0;
          *piVar9 = 0;
          piVar1 = piVar9 + 4;
          piVar9 = piVar9 + 6;
        } while (piVar1 != piVar6);
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x118]);
    }
    param_1[0x118] = 0;
    param_1[0x119] = 0;
    param_1[0x11a] = 0;
    if ((uint)param_1[0x111] < 0xb) {
      param_1[0x107] = &PTR_LAB_00d3b36c;
      if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x109] = param_1[0x108];
      }
      if (param_1[0x108] != 0) {
        *(undefined4 *)(param_1[0x108] + 4) = param_1[0x109];
      }
      param_1[0x108] = 0;
      param_1[0x109] = 0;
      param_1[0x10c] = 0;
      if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x109] = param_1[0x108];
      }
      if (param_1[0x108] != 0) {
        *(undefined4 *)(param_1[0x108] + 4) = param_1[0x109];
      }
      param_1[0x108] = 0;
      param_1[0x109] = 0;
      param_1[0x101] = &PTR_FUN_00d195f8;
      if ((undefined4 *)param_1[0x103] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x103] = param_1[0x102];
      }
      if (param_1[0x102] != 0) {
        *(undefined4 *)(param_1[0x102] + 4) = param_1[0x103];
      }
      param_1[0x102] = 0;
      param_1[0x103] = 0;
      param_1[0x106] = 0;
      if ((undefined4 *)param_1[0x103] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x103] = param_1[0x102];
      }
      if (param_1[0x102] != 0) {
        *(undefined4 *)(param_1[0x102] + 4) = param_1[0x103];
      }
      param_1[0x102] = 0;
      param_1[0x103] = 0;
      param_1[0xfb] = &PTR_FUN_00d172a0;
      if ((undefined4 *)param_1[0xfd] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xfd] = param_1[0xfc];
      }
      if (param_1[0xfc] != 0) {
        *(undefined4 *)(param_1[0xfc] + 4) = param_1[0xfd];
      }
      param_1[0xfc] = 0;
      param_1[0xfd] = 0;
      param_1[0x100] = 0;
      if ((undefined4 *)param_1[0xfd] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xfd] = param_1[0xfc];
      }
      if (param_1[0xfc] != 0) {
        *(undefined4 *)(param_1[0xfc] + 4) = param_1[0xfd];
      }
      param_1[0xfc] = 0;
      param_1[0xfd] = 0;
      param_1[0xf5] = &PTR_FUN_00d172a0;
      if ((undefined4 *)param_1[0xf7] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xf7] = param_1[0xf6];
      }
      if (param_1[0xf6] != 0) {
        *(undefined4 *)(param_1[0xf6] + 4) = param_1[0xf7];
      }
      param_1[0xf6] = 0;
      param_1[0xf7] = 0;
      param_1[0xfa] = 0;
      if ((undefined4 *)param_1[0xf7] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xf7] = param_1[0xf6];
      }
      if (param_1[0xf6] != 0) {
        *(undefined4 *)(param_1[0xf6] + 4) = param_1[0xf7];
      }
      param_1[0xf6] = 0;
      param_1[0xf7] = 0;
      param_1[0xef] = &PTR_LAB_00d3ae44;
      if ((undefined4 *)param_1[0xf1] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xf1] = param_1[0xf0];
      }
      if (param_1[0xf0] != 0) {
        *(undefined4 *)(param_1[0xf0] + 4) = param_1[0xf1];
      }
      param_1[0xf0] = 0;
      param_1[0xf1] = 0;
      param_1[0xf4] = 0;
      if ((undefined4 *)param_1[0xf1] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xf1] = param_1[0xf0];
      }
      if (param_1[0xf0] != 0) {
        *(undefined4 *)(param_1[0xf0] + 4) = param_1[0xf1];
      }
      param_1[0xf0] = 0;
      param_1[0xf1] = 0;
      param_1[0xe9] = &PTR_FUN_00d322b0;
      if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xeb] = param_1[0xea];
      }
      if (param_1[0xea] != 0) {
        *(undefined4 *)(param_1[0xea] + 4) = param_1[0xeb];
      }
      param_1[0xea] = 0;
      param_1[0xeb] = 0;
      param_1[0xee] = 0;
      if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xeb] = param_1[0xea];
      }
      if (param_1[0xea] != 0) {
        *(undefined4 *)(param_1[0xea] + 4) = param_1[0xeb];
      }
      param_1[0xea] = 0;
      param_1[0xeb] = 0;
      param_1[0xe3] = &PTR_FUN_00d322b0;
      if ((undefined4 *)param_1[0xe5] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xe5] = param_1[0xe4];
      }
      if (param_1[0xe4] != 0) {
        *(undefined4 *)(param_1[0xe4] + 4) = param_1[0xe5];
      }
      param_1[0xe4] = 0;
      param_1[0xe5] = 0;
      param_1[0xe8] = 0;
      if ((undefined4 *)param_1[0xe5] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xe5] = param_1[0xe4];
      }
      if (param_1[0xe4] != 0) {
        *(undefined4 *)(param_1[0xe4] + 4) = param_1[0xe5];
      }
      param_1[0xe4] = 0;
      param_1[0xe5] = 0;
      param_1[0xdd] = &PTR_FUN_00d18c2c;
      if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xdf] = param_1[0xde];
      }
      if (param_1[0xde] != 0) {
        *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
      }
      param_1[0xde] = 0;
      param_1[0xdf] = 0;
      param_1[0xe2] = 0;
      if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xdf] = param_1[0xde];
      }
      if (param_1[0xde] != 0) {
        *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
      }
      param_1[0xde] = 0;
      param_1[0xdf] = 0;
      param_1[0xd7] = &PTR_FUN_00d18c2c;
      if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xd9] = param_1[0xd8];
      }
      if (param_1[0xd8] != 0) {
        *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
      }
      param_1[0xd8] = 0;
      param_1[0xd9] = 0;
      param_1[0xdc] = 0;
      if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xd9] = param_1[0xd8];
      }
      if (param_1[0xd8] != 0) {
        *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
      }
      param_1[0xd8] = 0;
      param_1[0xd9] = 0;
      param_1[0xd1] = &PTR_LAB_00d1aee0;
      if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xd3] = param_1[0xd2];
      }
      if (param_1[0xd2] != 0) {
        *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
      }
      param_1[0xd2] = 0;
      param_1[0xd3] = 0;
      param_1[0xd6] = 0;
      if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xd3] = param_1[0xd2];
      }
      if (param_1[0xd2] != 0) {
        *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
      }
      param_1[0xd2] = 0;
      param_1[0xd3] = 0;
      local_4 = 0xffffffff;
      FUN_00742900(param_1);
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10f]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x11c]);
}


//// FUNCTION FUN_006ac800 @ 006ac800 ////

void __thiscall FUN_006ac800(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_006ab620(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_006abfc0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_006ac890 @ 006ac890 ////

void __thiscall FUN_006ac890(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    *puVar2 = *param_1;
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_006abd90(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_006ac8e0 @ 006ac8e0 ////

undefined4 * __thiscall FUN_006ac8e0(void *this,byte param_1)

{
  FUN_006ac080(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006ac900 @ 006ac900 ////

void __fastcall FUN_006ac900(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piStack_4c;
  void *pvStack_48;
  void *pvStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc98ce;
  local_c = ExceptionList;
  if ((char)param_1[0x127] == '\0') {
    ExceptionList = &local_c;
    if (param_1[0x10e] != 1) {
      ExceptionList = &local_c;
      FUN_006aaa30((int)param_1);
    }
    if (param_1[0xee] != 0) {
      puVar1 = (undefined4 *)param_1[0xe2];
      if (puVar1 != (undefined4 *)0x0) {
        piVar3 = puVar1 + 0x12;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*puVar1)();
        }
        (**(code **)(param_1[0xdd] + 4))();
        param_1[0xe2] = 0;
        (**(code **)param_1[0xdd])();
      }
      pvStack_48 = (void *)0x6ac983;
      puVar1 = operator_new(0x344);
      uStack_4 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = FUN_007432f0(puVar1);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(param_1[0xdd] + 4))();
      param_1[0xe2] = (int)puVar1;
      (**(code **)param_1[0xdd])();
      iVar6 = *(int *)param_1[0xe2];
      (**(code **)(*(int *)param_1[0xee] + 0x10))();
      pvStack_48 = (void *)0x6ac9dd;
      (**(code **)(iVar6 + 0x78))();
      iVar6 = *(int *)param_1[0xe2];
      pvStack_48 = (void *)0x6ac9f0;
      fVar7 = (float10)(**(code **)(*(int *)param_1[0xee] + 0x14))();
      pvStack_48 = (void *)(float)fVar7;
      piStack_4c = (int *)0x6ac9f9;
      (**(code **)(iVar6 + 0x7c))();
      piStack_4c = (int *)0x0;
      (**(code **)(*(int *)param_1[0xe2] + 0x5c))(1,param_1[0xee]);
      (**(code **)(*(int *)param_1[0xe2] + 100))(1,param_1[0xee],0);
      (**(code **)(*(int *)param_1[0xee] + 0xc))(param_1[0xe2],1);
      iVar6 = param_1[0x10e];
      iVar5 = (param_1[0x124] + -1) * DAT_00e57428;
      iVar8 = 0;
      iVar4 = *(int *)(param_1[0xd6] + 0x98);
      iVar9 = 0;
      if (iVar4 != param_1[0xd6] + 0xa4) {
        do {
          if (DAT_00e5742c <= iVar8) break;
          piStack_4c = *(int **)(iVar4 + 8);
          if (((iVar9 < iVar5) || (DAT_00e57428 + iVar5 <= iVar9)) &&
             (iVar10 = iVar9, iVar2 = (**(code **)(*piStack_4c + 4))(),
             *(char *)(iVar2 + 0x61) != '\0')) {
            pvStack_48 = operator_new(0x428);
            if (pvStack_48 == (void *)0x0) {
              piVar3 = (int *)0x0;
              iVar9 = iVar10;
            }
            else {
              piVar3 = FUN_006a7ae0(pvStack_48,param_1[0xe2],(int)param_1,(int)piStack_4c,iVar6,
                                    iVar8,(char)param_1[0x127],param_1[0xee]);
              iVar9 = iVar10;
            }
            (**(code **)(*piVar3 + 0xfc))();
            (**(code **)(*(int *)param_1[0xe2] + 0xc))(piVar3,1);
            piStack_4c = piVar3;
            FUN_006ac890(&stack0xffffffbc,&piStack_4c);
            iVar8 = iVar8 + 1;
          }
          iVar4 = *(int *)(iVar4 + 4);
          iVar9 = iVar9 + 1;
        } while (iVar4 != param_1[0xd6] + 0xa4);
      }
      piStack_4c = (int *)(DAT_00e574a4 - (float)(4 - iVar8) * 24.0);
      (**(code **)(*(int *)param_1[0xee] + 0x7c))(piStack_4c);
      if (iVar8 == 0) {
        (**(code **)(*(int *)param_1[0xee] + 0x20))(0);
      }
      else {
        (**(code **)(*(int *)param_1[0xee] + 0x20))(1);
      }
      uStack_4 = 0xffffffff;
      if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_18);
      }
    }
    if ((void *)param_1[0xee] != (void *)0x0) {
      pvStack_48 = (void *)0x6acbf7;
      FUN_0063e2a0((void *)param_1[0xee],DAT_00e572d8,DAT_00e572dc);
      iVar6 = 4;
      do {
        FUN_0063f830((void *)param_1[0xee],0x41c00000);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      FUN_0063f890((void *)param_1[0xee],'\x01');
      pvStack_48 = (void *)0x6acc30;
      (**(code **)(*param_1 + 0xc))();
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006acc50 @ 006acc50 ////

void __fastcall FUN_006acc50(int *param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  void *this;
  int *piVar6;
  char *_Dest;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char *pcStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  char acStack_48 [20];
  void *pvStack_34;
  undefined4 uStack_2c;
  char cStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc990e;
  pvStack_c = ExceptionList;
  puVar4 = (undefined4 *)param_1[0xdc];
  ExceptionList = &pvStack_c;
  if (puVar4 != (undefined4 *)0x0) {
    piVar6 = puVar4 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      (**(code **)*puVar4)();
    }
    (**(code **)(param_1[0xd7] + 4))();
    param_1[0xdc] = 0;
    (**(code **)param_1[0xd7])();
  }
  pcStack_54 = operator_new(0x344);
  uStack_4 = 0;
  if (pcStack_54 == (char *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_007432f0((undefined4 *)pcStack_54);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(param_1[0xd7] + 4))();
  param_1[0xdc] = (int)puVar4;
  (**(code **)param_1[0xd7])();
  iVar10 = *(int *)param_1[0xdc];
  (**(code **)(*param_1 + 0x14))();
  fVar11 = (float10)(**(code **)(*param_1 + 0x10))();
  (**(code **)(iVar10 + 0x74))((float)fVar11);
  (**(code **)(*(int *)param_1[0xdc] + 0x5c))(1,param_1,0);
  (**(code **)(*(int *)param_1[0xdc] + 100))(1,param_1,0);
  (**(code **)(*param_1 + 0xc))(param_1[0xdc],1);
  iVar10 = param_1[0x10e];
  iVar7 = (param_1[0x124] + -1) * DAT_00e57428;
  iVar9 = 0;
  iVar13 = 0;
  iVar12 = 0;
  FUN_006ab970((int)(param_1 + 0x117));
  iVar8 = *(int *)(param_1[0xd6] + 0x98);
  if (iVar8 != param_1[0xd6] + 0xa4) {
    iVar5 = -iVar7;
    do {
      if (DAT_00e57428 <= iVar9) break;
      if (iVar7 <= iVar13) {
        iVar9 = *(int *)(iVar8 + 8);
        this = operator_new(0x3c8);
        uStack_2c = 1;
        if (this == (void *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = FUN_006a5f80(this,(int)param_1,iVar9,iVar10,iVar5,(char)param_1[0x127]);
        }
        uStack_2c = 0xffffffff;
        (**(code **)(*piVar6 + 0xfc))();
        (**(code **)(*(int *)param_1[0xdc] + 0xc))(piVar6,1);
        iVar9 = iVar12 + 1;
        piVar6 = piVar6 + 6;
        iVar2 = *piVar6;
        *(undefined1 **)(*piVar6 + 4) = &stack0xffffff90;
        *piVar6 = (int)&stack0xffffff90;
        uStack_2c = 2;
        FUN_006ac800(param_1 + 0x117,(int)&stack0xffffff8c);
        uStack_2c = 0xffffffff;
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar2;
        }
        iVar12 = iVar9;
        if (iVar2 != 0) {
          *(int **)(iVar2 + 4) = piVar6;
        }
      }
      iVar8 = *(int *)(iVar8 + 4);
      iVar13 = iVar13 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar8 != param_1[0xd6] + 0xa4);
  }
  if ((param_1[0x124] == 1) && (iVar9 < 10)) {
    fVar11 = (float10)(**(code **)(*(int *)param_1[0xe8] + 0x14))();
    fVar1 = (float)(fVar11 - (float10)(10 - iVar9) * (float10)48.0);
    (**(code **)(*(int *)param_1[0xe8] + 0x7c))(fVar1);
    (**(code **)(*param_1 + 0x7c))(fVar1);
    do {
      cVar3 = (**(code **)(*param_1 + 0x50))(1);
    } while (cVar3 != '\0');
  }
  if ((void *)param_1[0xe8] != (void *)0x0) {
    FUN_0063f0d0((void *)param_1[0xe8],'\x01');
    FUN_0063e2a0((void *)param_1[0xe8],DAT_00e572d0,DAT_00e572d4);
    if (0 < iVar9) {
      do {
        FUN_0063f830((void *)param_1[0xe8],DAT_00e574c0);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    FUN_0063f890((void *)param_1[0xe8],cStack_24);
    _Dest = &stack0xffffff98;
    uVar14 = 0x14;
    iVar10 = param_1[0x10e];
    uStack_2c = 3;
    if (iVar10 == 0) {
      _strncpy(&stack0xffffff98,"ui/job_star.dds",0xf);
      _Dest[0xf] = '\0';
    }
    else if (iVar10 == 1) {
      uVar14 = 0x20;
      _Dest = _malloc(0x20);
      _strncpy(_Dest,"ui/fullsrn_studioicon.dds",0x19);
      _Dest[0x19] = '\0';
    }
    else if (iVar10 == 2) {
      _strncpy(&stack0xffffff98,"ui/filmcan.dds",0xe);
      _Dest[0xe] = '\0';
    }
    pcStack_54 = acStack_48;
    acStack_48[0] = '\0';
    uStack_50 = 0;
    uStack_4c = 0x14;
    _strncpy(pcStack_54,"",0);
    uStack_50 = 0;
    *pcStack_54 = '\0';
    uStack_2c._0_1_ = 4;
    FUN_0063ea40((void *)param_1[0xe8],&pcStack_54,(undefined4 *)&stack0xffffff8c);
    uStack_2c = CONCAT31(uStack_2c._1_3_,3);
    if (0x14 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_54);
    }
    iVar10 = param_1[0x118];
    if (iVar10 != param_1[0x119]) {
      do {
        if (*(int *)(iVar10 + 0x14) != 0) {
          FUN_006a4d60(*(int *)(iVar10 + 0x14));
        }
        iVar10 = iVar10 + 0x18;
      } while (iVar10 != param_1[0x119]);
    }
    uStack_2c = 0xffffffff;
    if (0x14 < uVar14) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
  }
  FUN_006ac900(param_1);
  ExceptionList = pvStack_34;
  return;
}


//// FUNCTION FUN_006ad0f0 @ 006ad0f0 ////

undefined4 __fastcall FUN_006ad0f0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = DAT_0104dbf0;
  if (DAT_0104dbf0 != (undefined4 *)0x0) {
    iVar1 = DAT_0104dbf0[0x12];
    DAT_0104dbf0[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104dbdc[1])();
    DAT_0104dbf0 = (undefined4 *)0x0;
    (*(code *)*DAT_0104dbdc)();
  }
  if (1 < param_1[0x124]) {
    param_1[0x124] = param_1[0x124] + -1;
    FUN_006acc50(param_1);
    FUN_006aaf30(param_1);
  }
  if (param_1[0x124] == 1) {
    (**(code **)(*(int *)param_1[0xfa] + 0xc0))(0);
  }
  uVar3 = (**(code **)(*(int *)param_1[0x100] + 0xc0))(1);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_006ad190 @ 006ad190 ////

undefined4 __fastcall FUN_006ad190(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = DAT_0104dbf0;
  if (DAT_0104dbf0 != (undefined4 *)0x0) {
    iVar1 = DAT_0104dbf0[0x12];
    DAT_0104dbf0[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104dbdc[1])();
    DAT_0104dbf0 = (undefined4 *)0x0;
    (*(code *)*DAT_0104dbdc)();
  }
  if (param_1[0x124] < param_1[0x123]) {
    param_1[0x124] = param_1[0x124] + 1;
    FUN_006acc50(param_1);
    FUN_006aaf30(param_1);
  }
  if (param_1[0x124] == param_1[0x123]) {
    (**(code **)(*(int *)param_1[0x100] + 0xc0))(0);
  }
  uVar3 = (**(code **)(*(int *)param_1[0xfa] + 0xc0))(1);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_006ad230 @ 006ad230 ////

undefined4 __thiscall FUN_006ad230(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  int iVar9;
  
  iVar1 = 0;
  do {
    if (param_1 == (int *)0x0) {
      uVar3 = 0;
      if (iVar1 == 0) goto LAB_006ad3ec;
      break;
    }
    iVar1 = FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                         &TM::WLeagueEntrySearch::RTTI_Type_Descriptor,0);
    param_1 = (int *)param_1[0x46];
  } while (iVar1 == 0);
  iVar4 = 0;
  if (*(int *)(iVar1 + 0x3a4) == 0) {
    iVar1 = *(int *)(iVar1 + 0x3f4);
    iVar5 = *(int *)(*(int *)((int)this + 0x358) + 0x98);
    if (iVar5 != *(int *)((int)this + 0x358) + 0xa4) {
      do {
        iVar9 = 0;
        pTVar8 = &TM::CStar::RTTI_Type_Descriptor;
        pTVar7 = &TM::TMObject::RTTI_Type_Descriptor;
        iVar6 = 0;
        piVar2 = (int *)(**(code **)(**(int **)(iVar5 + 8) + 4))();
        iVar6 = FUN_00ace790(piVar2,iVar6,pTVar7,pTVar8,iVar9);
        if ((iVar6 != 0) && (iVar6 == iVar1)) {
          *(int *)((int)this + 0x490) = iVar4 / 10 + 1;
          FUN_006acc50(this);
          FUN_006aaf30(this);
        }
        iVar5 = *(int *)(iVar5 + 4);
        iVar4 = iVar4 + 1;
      } while (iVar5 != *(int *)((int)this + 0x358) + 0xa4);
    }
  }
  else if (*(int *)(iVar1 + 0x3a4) == 2) {
    iVar1 = *(int *)(iVar1 + 0x40c);
    iVar5 = *(int *)(*(int *)((int)this + 0x358) + 0x98);
    if (iVar5 != *(int *)((int)this + 0x358) + 0xa4) {
      do {
        iVar9 = 0;
        pTVar8 = &TM::CProject::RTTI_Type_Descriptor;
        pTVar7 = &TM::TMObject::RTTI_Type_Descriptor;
        iVar6 = 0;
        piVar2 = (int *)(**(code **)(**(int **)(iVar5 + 8) + 4))();
        iVar6 = FUN_00ace790(piVar2,iVar6,pTVar7,pTVar8,iVar9);
        if ((iVar6 != 0) && (iVar6 == iVar1)) {
          *(int *)((int)this + 0x490) = iVar4 / 10 + 1;
          FUN_006acc50(this);
          FUN_006aaf30(this);
        }
        iVar5 = *(int *)(iVar5 + 4);
        iVar4 = iVar4 + 1;
      } while (iVar5 != *(int *)((int)this + 0x358) + 0xa4);
    }
  }
  if (*(int *)((int)this + 0x490) == *(int *)((int)this + 0x48c)) {
    (**(code **)(**(int **)((int)this + 0x400) + 0xc0))(0);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x400) + 0xc0))(1);
  }
  if (*(int *)((int)this + 0x490) < 2) {
    uVar3 = (**(code **)(**(int **)((int)this + 1000) + 0xc0))(0);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar3 = (**(code **)(**(int **)((int)this + 1000) + 0xc0))(1);
LAB_006ad3ec:
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_006ad480 @ 006ad480 ////

void __fastcall FUN_006ad480(int *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  uint unaff_EBP;
  char *unaff_EDI;
  wchar_t *pwVar6;
  uint *puStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined1 *puStack_100;
  undefined4 uStack_fc;
  void *pvStack_f8;
  uint uStack_f4;
  char *pcStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  char acStack_c8 [12];
  void *pvStack_bc;
  char *pcStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  char acStack_a4 [16];
  void *apvStack_94 [2];
  uint uStack_8c;
  void *pvStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc99ff;
  pvStack_c = ExceptionList;
  iVar1 = param_1[0x10e];
  ExceptionList = &pvStack_c;
  param_1[0x45] = param_1[0x45] & 0xfffffffd;
  if (iVar1 == 0) {
    if ((char)param_1[0x127] == '\0') {
      uStack_f4 = 0x6ad562;
      iVar1 = FUN_0045f400();
    }
    else {
      uStack_f4 = 0x6ad55b;
      iVar1 = FUN_0045eec0();
    }
LAB_006ad562:
    uStack_f4 = 0x6ad571;
    (**(code **)(param_1[0xd1] + 4))();
    param_1[0xd6] = iVar1;
    uStack_f4 = 0x6ad57a;
    (**(code **)param_1[0xd1])();
  }
  else if (iVar1 == 1) {
    if ((char)param_1[0x127] == '\0') {
      uStack_f4 = 0x6ad4fb;
      iVar1 = FUN_0045f420();
    }
    else {
      uStack_f4 = 0x6ad4f4;
      iVar1 = FUN_0045eee0();
    }
    uStack_f4 = 0x6ad50a;
    (**(code **)(param_1[0xd1] + 4))();
    param_1[0xd6] = iVar1;
    uStack_f4 = 0x6ad513;
    (**(code **)param_1[0xd1])();
    if ((DAT_00e57430 == 3) || (DAT_00e57430 == 1)) {
      uStack_f4 = 0x6ad52f;
      (*(code *)DAT_0104dbc4[1])();
      uStack_f4 = 0x6ad542;
      DAT_0104dbd8 = param_1;
      (*(code *)*DAT_0104dbc4)();
      DAT_00e57430 = 1;
    }
  }
  else if (iVar1 == 2) {
    if ((char)param_1[0x127] == '\0') {
      uStack_f4 = 0x6ad4e5;
      iVar1 = FUN_0045f410();
    }
    else {
      uStack_f4 = 0x6ad4db;
      iVar1 = FUN_0045eed0();
    }
    goto LAB_006ad562;
  }
  if (DAT_00e57430 == param_1[0x10e]) {
    uStack_f4 = 0x6ad595;
    (*(code *)DAT_0104dbc4[1])();
    uStack_f4 = 0x6ad5a7;
    DAT_0104dbd8 = param_1;
    (*(code *)*DAT_0104dbc4)();
  }
  iVar5 = 0;
  for (iVar1 = *(int *)(param_1[0xd6] + 0x98); iVar1 != param_1[0xd6] + 0xa4;
      iVar1 = *(int *)(iVar1 + 4)) {
    iVar5 = iVar5 + 1;
  }
  param_1[0x123] = (iVar5 - 1U) / DAT_00e57428 + 1;
  uStack_f4 = DAT_00e5744c;
  pvStack_f8 = (void *)DAT_00e57448;
  uStack_fc = 0x6ad5ee;
  (**(code **)(*param_1 + 0x74))();
  uVar2 = DAT_00e5743c;
  puStack_100 = (undefined1 *)param_1[0xf4];
  uStack_fc = DAT_00e57438;
  uStack_104 = 1;
  uStack_108 = 0x6ad620;
  (**(code **)(*param_1 + 0x5c))();
  uStack_10c = param_1[0xf4];
  uStack_108 = uVar2;
  uStack_110 = 1;
  puStack_114 = (uint *)0x6ad631;
  (**(code **)(*param_1 + 100))();
  puStack_114 = &uStack_f4;
  FUN_006aa5d0(param_1);
  puStack_114 = (uint *)0x1;
  (**(code **)(*param_1 + 0x50))();
  if ((((char)param_1[0x127] == '\0') && (param_1[0x10e] != 1)) && (param_1[0xee] == 0)) {
    FUN_006aaa30((int)param_1);
  }
  iVar1 = param_1[0x10e];
  if (iVar1 == 0) {
    uVar2 = FUN_00ace02d(L"LEAGUESCREEN_STAR");
    pwVar6 = L"LEAGUESCREEN_STAR";
LAB_006ad6c5:
    FUN_004036d0(param_1 + 0x10f,pwVar6,uVar2);
  }
  else {
    if (iVar1 == 1) {
      uVar2 = FUN_00ace02d(L"LEAGUESCREEN_STUDIO");
      pwVar6 = L"LEAGUESCREEN_STUDIO";
      goto LAB_006ad6c5;
    }
    if (iVar1 == 2) {
      uVar2 = FUN_00ace02d(L"LEAGUESCREEN_MOVIE");
      pwVar6 = L"LEAGUESCREEN_MOVIE";
      goto LAB_006ad6c5;
    }
  }
  pvVar3 = operator_new(0x420);
  pvStack_f8 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    unaff_EBP = 0x20;
    unaff_EDI = _malloc(0x20);
    _strncpy(unaff_EDI,"LEAGUETABLE_PAGELEFT",0x14);
    unaff_EDI[0x14] = '\0';
    pcStack_b0 = acStack_a4;
    acStack_a4[0] = '\0';
    uStack_ac = 0;
    uStack_a8 = 0x14;
    _strncpy(pcStack_b0,"button_left.",0xc);
    uStack_ac = 0xc;
    pcStack_b0[0xc] = '\0';
    uStack_28 = 2;
    uStack_104 = 3;
    puVar4 = FUN_009b5030(&pvStack_70,(undefined4 *)&stack0xffffff10);
    puStack_100 = &stack0xfffffedc;
    uStack_28 = 3;
    uStack_104 = 7;
    puVar4 = FUN_0069fb10(pvVar3,(int *)&pcStack_b0,puVar4,0x42000000,0x42000000,0,0,0x3f800000,
                          0x3f800000);
  }
  uStack_28 = 6;
  (**(code **)(param_1[0xf5] + 4))();
  param_1[0xfa] = (int)puVar4;
  (**(code **)param_1[0xf5])();
  if (((uStack_104 & 4) != 0) && (uStack_104 = uStack_104 & 0xfffffffb, 10 < uStack_68)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_70);
  }
  if (((uStack_104 & 2) != 0) && (uStack_104 = uStack_104 & 0xfffffffd, 0x14 < uStack_a8)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_b0);
  }
  uStack_28 = 0xffffffff;
  if (((uStack_104 & 1) != 0) && (uStack_104 = uStack_104 & 0xfffffffe, 0x14 < unaff_EBP)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  (**(code **)(*(int *)param_1[0xfa] + 0x68))();
  (**(code **)(*(int *)param_1[0xfa] + 0x5c))();
  (**(code **)(*(int *)param_1[0xfa] + 0x18))();
  (**(code **)(*(int *)param_1[0xfa] + 0x18))();
  (**(code **)(*(int *)param_1[0xfa] + 0xc0))();
  (**(code **)(*param_1 + 0xc))();
  pvVar3 = operator_new(0x420);
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puStack_114 = &uStack_108;
    uStack_108 = uStack_108 & 0xffffff00;
    uStack_110 = 0;
    uStack_10c = 0x20;
    puStack_114 = _malloc(0x20);
    _strncpy((char *)puStack_114,"LEAGUETABLE_PAGERIGHT",0x15);
    uStack_110 = 0x15;
    *(char *)((int)puStack_114 + 0x15) = '\0';
    pcStack_d4 = acStack_c8;
    acStack_c8[0] = '\0';
    uStack_d0 = 0;
    uStack_cc = 0x14;
    _strncpy(pcStack_d4,"button_right.",0xd);
    uStack_d0 = 0xd;
    pcStack_d4[0xd] = '\0';
    uStack_6c = 9;
    puVar4 = FUN_009b5030(apvStack_94,&puStack_114);
    uStack_6c = 10;
    puVar4 = FUN_0069fb10(pvVar3,(int *)&pcStack_d4,puVar4,0x42000000,0x42000000,0,0,0x3f800000,
                          0x3f800000);
  }
  uStack_6c = 0xd;
  (**(code **)(param_1[0xfb] + 4))();
  param_1[0x100] = (int)puVar4;
  (**(code **)param_1[0xfb])();
  if (10 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_94[0]);
  }
  if (0x14 < uStack_cc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_d4);
  }
  uStack_6c = 0xffffffff;
  if ((pvVar3 != (void *)0x0) && (0x14 < uStack_10c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_114);
  }
  (**(code **)(*(int *)param_1[0x100] + 0x74))();
  (**(code **)(*(int *)param_1[0x100] + 0x68))(2);
  (**(code **)(*(int *)param_1[0x100] + 0x60))(2,param_1,DAT_00e57498);
  (**(code **)(*(int *)param_1[0x100] + 0x18))(0,&LAB_006ad440,param_1,"LEAGUETABLE_PAGERIGHT");
  (**(code **)(*(int *)param_1[0x100] + 0x18))(5,&LAB_005f37f0,0,"LEAGUETABLE_PAGERIGHT");
  (**(code **)(*param_1 + 0xc))(param_1[0x100],1);
  iVar1 = *(int *)(param_1[0xd6] + 0x98);
  iVar5 = param_1[0xd6] + 0xa4;
  uVar2 = 0;
  if (iVar1 != iVar5) {
    do {
      iVar1 = *(int *)(iVar1 + 4);
      uVar2 = uVar2 + 1;
    } while (iVar1 != iVar5);
    if (DAT_00e57428 < uVar2) goto LAB_006adb83;
  }
  (**(code **)(*(int *)param_1[0x100] + 0xc0))(0);
LAB_006adb83:
  FUN_006aaf30(param_1);
  if (DAT_0104dbd8 == param_1) {
    FUN_006aa730(param_1,'\x01');
  }
  else {
    FUN_006aa8b0(param_1,'\x01');
  }
  ExceptionList = pvStack_bc;
  return;
}


//// FUNCTION FUN_006adbc0 @ 006adbc0 ////

int * __thiscall FUN_006adbc0(void *this,int param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9adc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d3b394;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3b37c;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_LAB_00d1aee0;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 **)((int)this + 0x380) = (undefined4 *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x374) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 **)((int)this + 0x398) = (undefined4 *)((int)this + 0x38c);
  *(undefined4 *)((int)this + 0x38c) = &PTR_FUN_00d322b0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 **)((int)this + 0x3b0) = (undefined4 *)((int)this + 0x3a4);
  *(undefined4 *)((int)this + 0x3a4) = &PTR_FUN_00d322b0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  piVar1 = (int *)((int)this + 0x3c0);
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 **)((int)this + 0x3c8) = (undefined4 *)((int)this + 0x3bc);
  *(undefined4 *)((int)this + 0x3bc) = &PTR_LAB_00d3ae44;
  *(int *)((int)this + 0x3d0) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x3c4) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 **)((int)this + 0x3e0) = (undefined4 *)((int)this + 0x3d4);
  *(undefined4 *)((int)this + 0x3d4) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 **)((int)this + 0x3f8) = (undefined4 *)((int)this + 0x3ec);
  *(undefined4 *)((int)this + 0x3ec) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 **)((int)this + 0x410) = (undefined4 *)((int)this + 0x404);
  *(undefined4 *)((int)this + 0x404) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 **)((int)this + 0x428) = (undefined4 *)((int)this + 0x41c);
  *(undefined4 *)((int)this + 0x41c) = &PTR_LAB_00d3b36c;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(int *)((int)this + 0x438) = param_2;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined2 **)((int)this + 0x43c) = (undefined2 *)((int)this + 0x448);
  *(undefined2 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x444) = 10;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  local_4 = 0xe;
  *(undefined4 *)((int)this + 0x48c) = 1;
  *(undefined4 *)((int)this + 0x490) = 1;
  *(undefined1 *)((int)this + 0x494) = 0;
  *(undefined4 *)((int)this + 0x498) = 0;
  *(undefined1 *)((int)this + 0x49c) = param_3;
  FUN_006ad480(this);
  FUN_006acc50(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006ade40 @ 006ade40 ////

undefined4 __fastcall FUN_006ade40(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  *(int *)(param_1 + 0x3fc) = (int)uVar1;
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_006adf40 @ 006adf40 ////

void __fastcall FUN_006adf40(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  puVar2 = DAT_0104dbf0;
  if (param_3 == '\0') {
    if (DAT_0104dbf0 == (undefined4 *)0x0) {
      return;
    }
    uVar3 = FUN_00990ae0(param_1,param_2);
    if ((uint)((int)uVar3 - puVar2[0xff]) <= DAT_00e575d4) {
      return;
    }
  }
  puVar2 = DAT_0104dbf0;
  if (DAT_0104dbf0 == (undefined4 *)0x0) {
    return;
  }
  iVar1 = DAT_0104dbf0[0x12];
  DAT_0104dbf0[0x12] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)*puVar2)(1);
  }
  (*(code *)DAT_0104dbdc[1])();
  DAT_0104dbf0 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x006adfad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104dbdc)();
  return;
}


//// FUNCTION FUN_006adfc0 @ 006adfc0 ////

int * FUN_006adfc0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  void *this;
  int *piVar6;
  float10 fVar7;
  float10 fVar8;
  int *piVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9b11;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar3 = operator_new(0x344);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_007432f0(puVar3);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar4 + 0x78))();
  (**(code **)(*piVar4 + 0x7c))();
  uVar2 = local_4;
  (**(code **)(*piVar4 + 0x5c))();
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*piVar4 + 0x50))();
  puVar3 = operator_new(0x3fc);
  if (puVar3 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00833290(puVar3);
  }
  (**(code **)(*piVar5 + 0x78))();
  piVar5[0xd5] = 0x42f00000;
  (**(code **)(*piVar5 + 0x54))();
  (**(code **)(*piVar5 + 0x8c))();
  (**(code **)(*piVar5 + 0x5c))();
  iVar1 = *piVar5;
  fVar7 = (float10)(**(code **)(*piVar4 + 0x14))();
  (**(code **)(*piVar5 + 0x14))();
  (**(code **)(iVar1 + 100))();
  this = operator_new(0x448);
  if (this == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = FUN_006dc970(this,(float)fVar7,(char)uVar2);
  }
  (**(code **)(*piVar6 + 0x84))();
  iVar1 = *piVar6;
  fVar7 = (float10)(**(code **)(*piVar4 + 0x10))();
  fVar8 = (float10)(**(code **)(*piVar6 + 0x10))();
  (**(code **)(iVar1 + 0x5c))(1,piVar4,(float)(((float10)(float)fVar7 - fVar8) * (float10)0.5));
  piVar9 = (int *)0x1;
  (**(code **)(*piVar6 + 100))(1,piVar4,0);
  (**(code **)(*piVar4 + 0xc))(piVar5,1);
  (**(code **)(*piVar4 + 0xc))(piVar6,1);
  (**(code **)(*piVar9 + 0xc))(piVar4,1);
  ExceptionList = piVar9;
  return piVar4;
}


//// FUNCTION FUN_006ae1e0 @ 006ae1e0 ////

undefined4 __fastcall FUN_006ae1e0(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  this = DAT_0104a8ac;
  iVar1 = *(int *)(param_1 + 0x3ac);
  if (iVar1 == 0) {
    uVar2 = 0;
    piVar4 = (int *)FUN_00ace790(*(int **)(param_1 + 0x3c4),0,&TM::TMObject::RTTI_Type_Descriptor,
                                 &TM::CProject::RTTI_Type_Descriptor,0);
    piVar4 = FUN_004aa180(this,piVar4,uVar2);
    iVar1 = FUN_00703590(piVar4,'\0','\0');
  }
  else {
    if (iVar1 == 2) {
      uVar2 = 0;
      piVar4 = (int *)FUN_00ace790(*(int **)(param_1 + 0x3c4),0,&TM::TMObject::RTTI_Type_Descriptor,
                                   &TM::CStar::RTTI_Type_Descriptor,0);
      FUN_004aa230(this,piVar4,uVar2);
      uVar3 = FUN_007035f0();
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    iVar1 = iVar1 + -3;
    if (iVar1 == 0) {
      uVar5 = 0;
      uVar2 = FUN_00ace790(*(int **)(param_1 + 0x3c4),0,&TM::TMObject::RTTI_Type_Descriptor,
                           &TM::CStudio::RTTI_Type_Descriptor,0);
      FUN_004aa2d0(this,uVar2,uVar5);
      uVar3 = FUN_00703640();
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_006ae3c0 @ 006ae3c0 ////

int * __thiscall FUN_006ae3c0(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  size_t sVar4;
  int *piVar5;
  undefined4 *puVar6;
  float10 fVar7;
  int unaff_retaddr;
  undefined4 uStack_1a0;
  int *piStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int *piStack_190;
  undefined4 uStack_18c;
  char *pcStack_144;
  undefined1 *puStack_140;
  uint uVar8;
  uint *local_114;
  void *local_110;
  void **local_10c;
  uint local_108 [2];
  void *local_100 [2];
  uint uStack_f8;
  undefined4 *puStack_f4;
  void *pvStack_f0;
  uint local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  wchar_t awStack_b4 [24];
  void *pvStack_84;
  undefined4 uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  wchar_t *pwStack_24;
  int *piStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9ba6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_110 = operator_new(0x350);
  local_4 = 0;
  if (local_110 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    local_114 = (uint *)&stack0xfffffed4;
    piVar2 = FUN_0072e9f0(local_110,param_2,(int *)0x42400000);
  }
  local_10c = local_100;
  local_100[0] = (void *)((uint)local_100[0] & 0xffffff00);
  local_108[0] = 0;
  local_108[1] = 0x20;
  local_10c = _malloc(0x20);
  _strncpy((char *)local_10c,"LEAGUESCREEN_STARRATING_INFO",0x1c);
  local_108[0] = 0x1c;
  *(char *)(local_10c + 7) = '\0';
  local_4 = 1;
  puStack_140 = (undefined1 *)0x6ae47a;
  FUN_009b5030(&local_ec,&local_10c);
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar2 + 0x90))();
  if (10 < uStack_e8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_f0);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (0x14 < local_108[0]) {
                    /* WARNING: Subroutine does not return */
    _free(local_110);
  }
  iVar1 = *piVar2;
  fVar7 = (float10)(**(code **)(*(int *)this + 0x10))();
  local_114 = (uint *)(float)fVar7;
  (**(code **)(*piVar2 + 0x10))();
  (**(code **)(iVar1 + 0x5c))();
  if (unaff_retaddr == 0) {
    puStack_140 = (undefined1 *)0x1;
    pcStack_144 = (char *)0x6ae513;
    (**(code **)(*piVar2 + 100))();
  }
  else {
    puStack_140 = (undefined1 *)0x2;
    pcStack_144 = (char *)0x6ae504;
    (**(code **)(*piVar2 + 100))();
  }
  pcStack_144 = (char *)0x1;
  (**(code **)(*piVar2 + 0x50))();
  (**(code **)(*(int *)this + 0xc))();
  if (piStack_1c != (int *)0x0) {
    (**(code **)(*piStack_1c + 0x74))();
    iVar1 = *piStack_1c;
    fVar7 = (float10)(**(code **)(*piVar2 + 0x14))();
    puStack_140 = (undefined1 *)(float)fVar7;
    (**(code **)(*piStack_1c + 0x14))();
    (**(code **)(iVar1 + 100))();
    (**(code **)(*piStack_1c + 0x5c))();
    (**(code **)(*(int *)this + 0xc))();
  }
  local_114 = local_108;
  local_108[0] = local_108[0] & 0xffff0000;
  local_110 = (void *)0x0;
  local_10c = (void **)0xa;
  uVar3 = FUN_00ace02d((short *)&DAT_00d3abfc);
  FUN_004036d0(&local_114,L"s9",uVar3);
  puStack_f4 = &uStack_e8;
  uStack_e8 = (void *)((uint)uStack_e8._2_2_ << 0x10);
  pvStack_f0 = (void *)0x0;
  local_ec = 10;
  uStack_2c = 4;
  sVar4 = _swprintf(awStack_b4,0xd18f7c,pwStack_24);
  FUN_0040cae0(&puStack_f4,awStack_b4,sVar4);
  FUN_00831ac0((undefined4 *)&stack0xfffffe8c,&local_114,&puStack_f4);
  piVar5 = FUN_00833680();
  if (10 < local_ec) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_f4);
  }
  uStack_2c = 0xffffffff;
  if ((void **)0xa < local_10c) {
                    /* WARNING: Subroutine does not return */
    _free(local_114);
  }
  (**(code **)(*piVar5 + 0x88))();
  (**(code **)(*piVar5 + 0x5c))();
  pcStack_144 = &stack0xfffffec8;
  puStack_140 = (undefined1 *)0x0;
  pcStack_144 = _malloc(0x20);
  _strncpy(pcStack_144,"LEAGUETABLE_CURRENTRANK",0x17);
  puStack_140 = (undefined1 *)0x17;
  pcStack_144[0x17] = '\0';
  uStack_3c = 5;
  FUN_009b5030(&uStack_e4,&pcStack_144);
  uStack_3c = CONCAT31(uStack_3c._1_3_,6);
  (**(code **)(*piVar5 + 0x90))();
  if (10 < uStack_e0) {
                    /* WARNING: Subroutine does not return */
    _free(uStack_e8);
  }
  uStack_40 = 0xffffffff;
  if ((undefined1 *)0x14 < puStack_140) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x1);
  }
  iVar1 = *piVar5;
  (**(code **)(*piVar2 + 0x14))();
  (**(code **)(*piVar5 + 0x14))();
  (**(code **)(iVar1 + 100))();
  (**(code **)(*piVar5 + 0x88))();
  (**(code **)(*(int *)this + 0xc))();
  puStack_140 = &stack0xfffffecc;
  uVar8 = 10;
  uVar3 = FUN_00ace02d((short *)&DAT_00d3aa88);
  FUN_004036d0(&puStack_140,L"s8",uVar3);
  uStack_58 = 7;
  uStack_18c = 0x6ae804;
  puVar6 = FUN_009b5e60(local_100,uStack_50);
  uStack_58 = CONCAT31(uStack_58._1_3_,8);
  FUN_00831ac0(&uStack_1a0,&puStack_140,puVar6);
  piStack_19c = FUN_00833680();
  if (10 < uStack_f8) {
                    /* WARNING: Subroutine does not return */
    _free(local_100[0]);
  }
  uStack_58 = 0xffffffff;
  if (10 < uVar8) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_140);
  }
  (**(code **)(*piStack_19c + 0x88))();
  uStack_18c = 0x6ae883;
  (**(code **)(*piStack_19c + 0x5c))();
  uStack_18c = 0x40000000;
  uStack_194 = 1;
  uStack_198 = 0x6ae892;
  piStack_190 = piVar5;
  (**(code **)(*piStack_19c + 100))();
  uStack_198 = 1;
  uStack_1a0 = 0x6ae89d;
  (**(code **)(*(int *)this + 0xc))();
  ExceptionList = pvStack_84;
  return piVar2;
}


//// FUNCTION FUN_006ae8c0 @ 006ae8c0 ////

int * __thiscall FUN_006ae8c0(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  size_t sVar4;
  int *piVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 uStack_1a0;
  int *piStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int *piStack_190;
  undefined4 uStack_18c;
  char *pcStack_144;
  undefined1 *puStack_140;
  uint uVar8;
  uint *local_114;
  void *local_110;
  void **local_10c;
  uint local_108 [2];
  void *local_100 [2];
  uint uStack_f8;
  undefined4 *puStack_f4;
  void *pvStack_f0;
  uint local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  wchar_t awStack_b4 [24];
  void *pvStack_84;
  undefined4 uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  wchar_t *pwStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9c16;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_110 = operator_new(0x350);
  local_4 = 0;
  if (local_110 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    local_114 = (uint *)&stack0xfffffed4;
    piVar2 = FUN_0072e9f0(local_110,param_2,(int *)0x42400000);
  }
  local_10c = local_100;
  local_100[0] = (void *)((uint)local_100[0] & 0xffffff00);
  local_108[0] = 0;
  local_108[1] = 0x20;
  local_10c = _malloc(0x20);
  _strncpy((char *)local_10c,"ONLINE_STAR_RATING_TOOLTIP",0x1a);
  local_108[0] = 0x1a;
  *(char *)((int)local_10c + 0x1a) = '\0';
  local_4 = 1;
  puStack_140 = (undefined1 *)0x6ae97a;
  FUN_009b5030(&local_ec,&local_10c);
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar2 + 0x90))();
  if (10 < uStack_e8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_f0);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (0x14 < local_108[0]) {
                    /* WARNING: Subroutine does not return */
    _free(local_110);
  }
  iVar1 = *piVar2;
  fVar7 = (float10)(**(code **)(*(int *)this + 0x10))();
  local_114 = (uint *)(float)fVar7;
  (**(code **)(*piVar2 + 0x10))();
  (**(code **)(iVar1 + 0x5c))();
  if (local_4 == 0) {
    puStack_140 = (undefined1 *)0x1;
    pcStack_144 = (char *)0x6aea13;
    (**(code **)(*piVar2 + 100))();
  }
  else {
    puStack_140 = (undefined1 *)0x2;
    pcStack_144 = (char *)0x6aea04;
    (**(code **)(*piVar2 + 100))();
  }
  pcStack_144 = (char *)0x1;
  (**(code **)(*piVar2 + 0x50))();
  (**(code **)(*(int *)this + 0xc))();
  local_114 = local_108;
  local_108[0] = local_108[0] & 0xffff0000;
  local_110 = (void *)0x0;
  local_10c = (void **)0xa;
  uVar3 = FUN_00ace02d((short *)&DAT_00d3abfc);
  FUN_004036d0(&local_114,L"s9",uVar3);
  puStack_f4 = &uStack_e8;
  uStack_e8 = (void *)((uint)uStack_e8._2_2_ << 0x10);
  pvStack_f0 = (void *)0x0;
  local_ec = 10;
  uStack_2c = 4;
  sVar4 = _swprintf(awStack_b4,0xd18f7c,pwStack_24);
  FUN_0040cae0(&puStack_f4,awStack_b4,sVar4);
  FUN_00831ac0((undefined4 *)&stack0xfffffe8c,&local_114,&puStack_f4);
  piVar5 = FUN_00833680();
  if (10 < local_ec) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_f4);
  }
  uStack_2c = 0xffffffff;
  if ((void **)0xa < local_10c) {
                    /* WARNING: Subroutine does not return */
    _free(local_114);
  }
  (**(code **)(*piVar5 + 0x88))();
  (**(code **)(*piVar5 + 0x5c))();
  pcStack_144 = &stack0xfffffec8;
  puStack_140 = (undefined1 *)0x0;
  pcStack_144 = _malloc(0x20);
  _strncpy(pcStack_144,"LEAGUETABLE_CURRENTRANK",0x17);
  puStack_140 = (undefined1 *)0x17;
  pcStack_144[0x17] = '\0';
  uStack_3c = 5;
  FUN_009b5030(&uStack_e4,&pcStack_144);
  uStack_3c = CONCAT31(uStack_3c._1_3_,6);
  (**(code **)(*piVar5 + 0x90))();
  if (10 < uStack_e0) {
                    /* WARNING: Subroutine does not return */
    _free(uStack_e8);
  }
  uStack_40 = 0xffffffff;
  if ((undefined1 *)0x14 < puStack_140) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x1);
  }
  iVar1 = *piVar5;
  (**(code **)(*piVar2 + 0x14))();
  (**(code **)(*piVar5 + 0x14))();
  (**(code **)(iVar1 + 100))();
  (**(code **)(*piVar5 + 0x88))();
  (**(code **)(*(int *)this + 0xc))();
  puStack_140 = &stack0xfffffecc;
  uVar8 = 10;
  uVar3 = FUN_00ace02d((short *)&DAT_00d3aa88);
  FUN_004036d0(&puStack_140,L"s8",uVar3);
  uStack_58 = 7;
  uStack_18c = 0x6aeca2;
  puVar6 = FUN_009b5e60(local_100,uStack_50);
  uStack_58 = CONCAT31(uStack_58._1_3_,8);
  FUN_00831ac0(&uStack_1a0,&puStack_140,puVar6);
  piStack_19c = FUN_00833680();
  if (10 < uStack_f8) {
                    /* WARNING: Subroutine does not return */
    _free(local_100[0]);
  }
  uStack_58 = 0xffffffff;
  if (10 < uVar8) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_140);
  }
  (**(code **)(*piStack_19c + 0x88))();
  uStack_18c = 0x6aed21;
  (**(code **)(*piStack_19c + 0x5c))();
  uStack_18c = 0x40000000;
  uStack_194 = 1;
  uStack_198 = 0x6aed30;
  piStack_190 = piVar5;
  (**(code **)(*piStack_19c + 100))();
  uStack_198 = 1;
  uStack_1a0 = 0x6aed3b;
  (**(code **)(*(int *)this + 0xc))();
  ExceptionList = pvStack_84;
  return piVar2;
}


//// FUNCTION FUN_006aed60 @ 006aed60 ////

int * __fastcall FUN_006aed60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  void *this;
  int *this_00;
  undefined4 *unaff_EBP;
  float10 fVar6;
  float10 fVar7;
  int *piVar8;
  int *piVar9;
  uint *puStack_74;
  undefined4 *puStack_70;
  uint uStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9c49;
  pvStack_c = ExceptionList;
  uStack_4c = 0x6aed8c;
  ExceptionList = &pvStack_c;
  puVar3 = operator_new(0x344);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_007432f0(puVar3);
  }
  local_4 = 0xffffffff;
  uStack_4c = 0x6aedbe;
  (**(code **)(*piVar4 + 0x78))();
  uStack_4c = 0x42100000;
  uStack_50 = 0x6aedca;
  (**(code **)(*piVar4 + 0x7c))();
  uVar2 = local_4;
  uStack_50 = 0;
  fStack_54 = (float)local_4;
  fStack_58 = 1.4013e-45;
  uStack_5c = 0x6aedd9;
  (**(code **)(*piVar4 + 0x5c))();
  uStack_5c = *(undefined4 *)(param_1 + 0x46c);
  uStack_60 = uVar2;
  fStack_64 = 1.4013e-45;
  uStack_68 = 0x6aedea;
  (**(code **)(*piVar4 + 100))();
  uStack_68 = 1;
  *(float *)(param_1 + 0x46c) = *(float *)(param_1 + 0x46c) + 36.0;
  (**(code **)(*piVar4 + 0x50))();
  puStack_70 = (undefined4 *)0x6aee0f;
  puVar3 = operator_new(0x3fc);
  if (puVar3 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00833290(puVar3);
  }
  puStack_70 = (undefined4 *)0x6aee43;
  (**(code **)(*piVar5 + 0x78))();
  piVar5[0xd5] = 0x42f00000;
  puStack_74 = (uint *)0x6aee59;
  puStack_70 = puVar3;
  (**(code **)(*piVar5 + 0x54))();
  puStack_74 = (uint *)0x0;
  (**(code **)(*piVar5 + 0x8c))();
  (**(code **)(*piVar5 + 0x5c))();
  iVar1 = *piVar5;
  fVar6 = (float10)(**(code **)(*piVar4 + 0x14))();
  fVar7 = (float10)(**(code **)(*piVar5 + 0x14))();
  (**(code **)(iVar1 + 100))();
  this = operator_new(900);
  uStack_4c = 2;
  if (this == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = FUN_00737bb0(this,unaff_EBP);
  }
  puStack_74 = &uStack_68;
  uStack_68 = uStack_68 & 0xffffff00;
  puStack_70 = (undefined4 *)0x0;
  _strncpy((char *)puStack_74,"default",7);
  puStack_70 = (undefined4 *)0x7;
  *(char *)((int)puStack_74 + 7) = '\0';
  uStack_4c = 3;
  (**(code **)(*this_00 + 0xfc))(&puStack_74,0x12,1);
  uStack_5c = 0xffffffff;
  if (&DAT_00000014 < piVar4) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(float)(((float10)(float)fVar6 - fVar7) * (float10)0.5));
  }
  fVar6 = (float10)(**(code **)(*piVar4 + 0x10))();
  fStack_54 = (float)fVar6;
  fVar6 = (float10)(**(code **)(*piVar5 + 0x10))();
  FUN_00737cd0(this_00,(float)(((float10)fStack_54 - fVar6) - (float10)DAT_00e575c4));
  (**(code **)(*this_00 + 0x84))(0);
  iVar1 = *this_00;
  fVar6 = (float10)(**(code **)(*piVar4 + 0x10))();
  fStack_58 = (float)fVar6;
  fVar6 = (float10)(**(code **)(*piVar5 + 0x10))();
  fStack_58 = (float)((float10)fStack_58 - fVar6);
  fVar6 = (float10)(**(code **)(*this_00 + 0x10))();
  piVar9 = piVar4;
  (**(code **)(iVar1 + 0x60))
            (2,piVar4,(float)((((float10)fStack_58 - fVar6) - (float10)DAT_00e575c4) * (float10)0.5)
            );
  iVar1 = *this_00;
  fVar6 = (float10)(**(code **)(*piVar4 + 0x14))();
  fStack_64 = (float)fVar6;
  fVar6 = (float10)(**(code **)(*this_00 + 0x14))();
  (**(code **)(iVar1 + 100))(1,piVar4,(float)(((float10)fStack_64 - fVar6) * (float10)0.5));
  piVar8 = (int *)0x0;
  (**(code **)(*this_00 + 0x18))(0,&LAB_006ae2c0,this_00,"ONLINE_CLOSE");
  (**(code **)(*piVar4 + 0xc))(piVar5,1);
  (**(code **)(*piVar4 + 0xc))(this_00,1);
  (**(code **)(*piVar8 + 0xc))(piVar4,1);
  ExceptionList = piVar9;
  return piVar4;
}


//// FUNCTION FUN_006af050 @ 006af050 ////

int * FUN_006af050(uint param_1)

{
  int *piVar1;
  void *this;
  int *piVar2;
  uint uVar3;
  uint unaff_EBP;
  int *piVar4;
  int iVar5;
  bool bVar6;
  char *local_34;
  undefined4 uStack_30;
  uint uStack_2c;
  char acStack_28 [20];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9c8f;
  pvStack_c = ExceptionList;
  iVar5 = (int)(param_1 + ((int)param_1 >> 0x1f & 0xfU)) >> 4;
  uVar3 = param_1 & 0x8000000f;
  bVar6 = uVar3 == 0;
  if ((int)uVar3 < 0) {
    bVar6 = (uVar3 - 1 | 0xfffffff0) == 0xffffffff;
  }
  if (!bVar6) {
    iVar5 = iVar5 + 1;
  }
  ExceptionList = &pvStack_c;
  local_34 = operator_new(0x344);
  local_4 = 0;
  if (local_34 == (char *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_007432f0((undefined4 *)local_34);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x78))();
  (**(code **)(*piVar1 + 0x7c))();
  piVar4 = (int *)0x0;
  local_4 = iVar5;
  if (0 < iVar5) {
    do {
      this = operator_new(0x360);
      pvStack_c = (void *)0x1;
      if (this == (void *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        local_34 = acStack_28;
        acStack_28[0] = '\0';
        uStack_30 = 0;
        uStack_2c = 0x14;
        _strncpy(local_34,"ui/dotted_line.dds",0x12);
        uStack_30 = 0x12;
        local_34[0x12] = '\0';
        unaff_EBP = unaff_EBP | 1;
        pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
        piVar2 = FUN_0069d820(this,&local_34,0,0,0x3f800000,0x3f800000);
      }
      pvStack_c = (void *)0xffffffff;
      if (((unaff_EBP & 1) != 0) && (unaff_EBP = 0, 0x14 < uStack_2c)) {
                    /* WARNING: Subroutine does not return */
        _free(local_34);
      }
      (**(code **)(*piVar2 + 0x74))();
      (**(code **)(*piVar2 + 0x5c))(1);
      if (piVar4 == (int *)0x0) {
        (**(code **)(*piVar2 + 100))(1,piVar1);
      }
      else {
        (**(code **)(*piVar2 + 100))(2,piVar4,0);
      }
      (**(code **)(*piVar1 + 0xc))(piVar2,1);
      local_4 = local_4 + -1;
      piVar4 = piVar2;
    } while (local_4 != 0);
  }
  ExceptionList = pvStack_14;
  return piVar1;
}


//// FUNCTION FUN_006af220 @ 006af220 ////

void FUN_006af220(undefined4 param_1,undefined4 *param_2)

{
  tm *ptVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  size_t sVar8;
  undefined4 local_f0;
  void *local_ec [2];
  uint local_e4;
  void *local_cc [2];
  uint local_c4;
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9cb6;
  local_c = ExceptionList;
  local_f0 = param_1;
  ExceptionList = &local_c;
  ptVar1 = _localtime((time_t *)&local_f0);
  FUN_00acfa94(local_8c,0x40,(short *)&DAT_00d1e0e0,ptVar1);
  __wtol(local_8c);
  FUN_00acfa94(local_8c,0x40,(short *)&DAT_00d1e0d8,ptVar1);
  __wtol(local_8c);
  FUN_00acfa94(local_8c,0x40,(short *)&DAT_00d1e0d0,ptVar1);
  __wtol(local_8c);
  FUN_00acfa94(local_8c,0x40,(short *)&DAT_00d18f7c,ptVar1);
  lVar2 = __wtol(local_8c);
  FUN_00acfa94(local_8c,0x40,(short *)&PTR_DAT_00d1e0c8,ptVar1);
  lVar3 = __wtol(local_8c);
  FUN_00acfa94(local_8c,0x40,(short *)&DAT_00d1e0c0,ptVar1);
  lVar4 = __wtol(local_8c);
  param_2[1] = 0;
  *(undefined2 *)*param_2 = 0;
  puVar5 = FUN_00569df0(local_cc,lVar4);
  local_4 = 0;
  puVar6 = FUN_00569df0(local_ec,lVar3);
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar7 = FUN_00569df0(local_ac,lVar2);
  FUN_0040cae0(param_2,(wchar_t *)*puVar7,puVar7[1]);
  sVar8 = FUN_00ace02d((short *)&DAT_00d24214);
  FUN_0040cae0(param_2,L"/",sVar8);
  FUN_0040cae0(param_2,(wchar_t *)*puVar6,puVar6[1]);
  sVar8 = FUN_00ace02d((short *)&DAT_00d24214);
  FUN_0040cae0(param_2,L"/",sVar8);
  FUN_0040cae0(param_2,(wchar_t *)*puVar5,puVar5[1]);
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac[0]);
  }
  if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec[0]);
  }
  if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006af480 @ 006af480 ////

void __fastcall FUN_006af480(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d3b530;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_006af4d0 @ 006af4d0 ////

void __fastcall FUN_006af4d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3b530;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006af520 @ 006af520 ////

void __thiscall FUN_006af520(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = param_1 + 1;
  param_1[3] = 0;
  *piVar1 = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d1aef0;
  iVar2 = *(int *)((int)this + 0x358);
  param_1[5] = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    param_1[2] = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_006af570 @ 006af570 ////

/* WARNING: Removing unreachable block (ram,0x006af7e1) */
/* WARNING: Removing unreachable block (ram,0x006af8a3) */
/* WARNING: Removing unreachable block (ram,0x006af8ac) */
/* WARNING: Removing unreachable block (ram,0x006af9d9) */
/* WARNING: Removing unreachable block (ram,0x006af9e6) */
/* WARNING: Removing unreachable block (ram,0x006af9f5) */
/* WARNING: Removing unreachable block (ram,0x006afa02) */
/* WARNING: Removing unreachable block (ram,0x006afab1) */
/* WARNING: Removing unreachable block (ram,0x006afabe) */
/* WARNING: Removing unreachable block (ram,0x006afacd) */
/* WARNING: Removing unreachable block (ram,0x006afada) */
/* WARNING: Removing unreachable block (ram,0x006afb89) */
/* WARNING: Removing unreachable block (ram,0x006afb96) */
/* WARNING: Removing unreachable block (ram,0x006afba5) */
/* WARNING: Removing unreachable block (ram,0x006afbb2) */
/* WARNING: Removing unreachable block (ram,0x006afc74) */
/* WARNING: Removing unreachable block (ram,0x006afc81) */
/* WARNING: Removing unreachable block (ram,0x006afc8f) */
/* WARNING: Removing unreachable block (ram,0x006afc9c) */
/* WARNING: Removing unreachable block (ram,0x006afd11) */
/* WARNING: Removing unreachable block (ram,0x006afd21) */
/* WARNING: Removing unreachable block (ram,0x006afd27) */
/* WARNING: Removing unreachable block (ram,0x006afd34) */
/* WARNING: Removing unreachable block (ram,0x006afd48) */

void __fastcall FUN_006af570(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *_Dest;
  undefined1 *_Memory;
  uint *puStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 *puStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int *piStack_90;
  void *pvStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 auStack_30 [5];
  undefined1 uStack_1c;
  undefined1 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9d5e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_00ace790((int *)param_1[0xf1],0,&TM::TMObject::RTTI_Type_Descriptor,
                               &TM::CStudio::RTTI_Type_Descriptor,0);
  if (piVar2 == (int *)0x0) {
    do {
      cVar1 = (**(code **)(*param_1 + 0x50))();
    } while (cVar1 != '\0');
    ExceptionList = pvStack_c;
    return;
  }
  (**(code **)(*piVar2 + 0x20))();
  puStack_d4 = &uStack_c8;
  puStack_8 = (undefined1 *)0x0;
  uStack_c8 = uStack_c8 & 0xffffff00;
  uStack_d0 = 0;
  uStack_cc = 0x14;
  _strncpy((char *)puStack_d4,"",0);
  uStack_d0 = 0;
  *(char *)puStack_d4 = '\0';
  puStack_8._0_1_ = 1;
  FUN_0063ec80(param_1,auStack_30,&puStack_d4);
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  if (uStack_cc < 0x15) {
    (**(code **)(*piVar2 + 0x80))();
    (**(code **)(*piVar2 + 0x90))();
    FUN_0050a860(piVar2,(float *)&piStack_90);
    (**(code **)(*piVar2 + 0x94))();
    (**(code **)(*piVar2 + 0x84))();
    iVar3 = FUN_006af520((void *)param_1[0xf7],(undefined4 *)&stack0xffffff1c);
    uStack_18 = 2;
    uVar4 = (**(code **)(**(int **)(iVar3 + 0x14) + 0x28))();
    uStack_18 = 0;
    FUN_00460000((undefined4 *)&stack0xffffff1c);
    iVar3 = (**(code **)(*piVar2 + 0x54))();
    FUN_00464820(iVar3);
    FUN_006ae3c0(param_1,uVar4,(int)pvStack_8c);
    puStack_c4 = &uStack_b8;
    uStack_b8 = (uint)uStack_b8._2_2_ << 0x10;
    uStack_c0 = 0;
    uStack_bc = 10;
    uVar5 = FUN_00ace02d(L"<nobr><s8><translate>LEAGUETABLE_MONEY</translate>:</s8></nobr>");
    FUN_004036d0(&puStack_c4,L"<nobr><s8><translate>LEAGUETABLE_MONEY</translate>:</s8></nobr>",
                 uVar5);
    _Memory = &stack0xfffffef8;
    uStack_18 = 3;
    piVar2 = FUN_006adfc0();
    piStack_90 = piVar2;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"CHARTS_STUDIO_CAPITAL",0x15);
    _Dest[0x15] = '\0';
    uStack_18 = 4;
    FUN_009b5030(&uStack_88,(undefined4 *)&stack0xffffff1c);
    uStack_18 = 5;
    (**(code **)(*piVar2 + 0x90))();
    if (uStack_84 < 0xb) {
      uStack_1c = 3;
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_8c);
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_d4);
}


//// FUNCTION FUN_006afd80 @ 006afd80 ////

/* WARNING: Removing unreachable block (ram,0x006b0222) */
/* WARNING: Removing unreachable block (ram,0x006b022f) */
/* WARNING: Removing unreachable block (ram,0x006b0235) */
/* WARNING: Removing unreachable block (ram,0x006b0242) */
/* WARNING: Removing unreachable block (ram,0x006b0248) */
/* WARNING: Removing unreachable block (ram,0x006b0255) */
/* WARNING: Removing unreachable block (ram,0x006b025e) */
/* WARNING: Removing unreachable block (ram,0x006b026e) */
/* WARNING: Removing unreachable block (ram,0x006b0277) */
/* WARNING: Removing unreachable block (ram,0x006b0287) */
/* WARNING: Removing unreachable block (ram,0x006b0049) */
/* WARNING: Removing unreachable block (ram,0x006b00f3) */
/* WARNING: Removing unreachable block (ram,0x006b0103) */
/* WARNING: Removing unreachable block (ram,0x006b0117) */
/* WARNING: Removing unreachable block (ram,0x006b01f0) */
/* WARNING: Removing unreachable block (ram,0x006b0200) */
/* WARNING: Removing unreachable block (ram,0x006b0215) */
/* WARNING: Removing unreachable block (ram,0x006b010a) */
/* WARNING: Removing unreachable block (ram,0x006afed6) */

void __fastcall FUN_006afd80(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *_Dest;
  void *unaff_EBX;
  void *unaff_ESI;
  float10 fVar6;
  float fVar7;
  uint uStack_ec;
  char acStack_e8 [20];
  undefined2 *puStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined2 auStack_c8 [8];
  void *pvStack_b8;
  undefined **local_b0;
  int local_ac;
  int *local_a8;
  undefined4 local_9c;
  undefined4 uStack_74;
  uint *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64 [2];
  void *pvStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined1 *puStack_34;
  uint *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20 [4];
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc9de5;
  pvStack_c = ExceptionList;
  local_70 = local_64;
  local_64[0] = local_64[0] & 0xffff0000;
  local_6c = 0;
  local_68 = 10;
  local_2c = local_20;
  local_20[0] = local_20[0] & 0xffffff00;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_006af520((void *)param_1[0xf7],&local_b0);
  piVar5 = *(int **)(iVar1 + 0x14);
  local_b0 = &PTR_FUN_00d1aef0;
  if (local_a8 != (int *)0x0) {
    *local_a8 = local_ac;
  }
  if (local_ac != 0) {
    *(int **)(local_ac + 4) = local_a8;
  }
  local_9c = 0;
  local_ac = 0;
  local_a8 = (int *)0x0;
  puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0xc))();
  FUN_004036d0(&uStack_74,(wchar_t *)*puVar2,puVar2[1]);
  if (uStack_ec < 0xb) {
    acStack_e8[0] = '\0';
    _strncpy(acStack_e8,"",0);
    acStack_e8[0] = '\0';
    puStack_8._0_1_ = 2;
    FUN_0063ec80(param_1,&uStack_74,(undefined4 *)&stack0xffffff0c);
    puStack_8._0_1_ = 1;
    fVar6 = (float10)(**(code **)(*piVar5 + 0x38))();
    puStack_34 = &stack0xfffffef4;
    if ((float10)0.0 <= fVar6) {
      if ((float10)1.0 < fVar6) {
        fVar6 = (float10)1.0;
      }
    }
    else {
      fVar6 = (float10)0.0;
    }
    fVar7 = (float)fVar6;
    uVar3 = (**(code **)(*piVar5 + 0x28))();
    FUN_006ae8c0(param_1,uVar3,(int)fVar7);
    puStack_d4 = auStack_c8;
    auStack_c8[0] = 0;
    uStack_d0 = 0;
    uStack_cc = 10;
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
    uVar4 = FUN_00ace02d(L"<nobr><s8><translate>ONLINE_USERNAME</translate></s8></nobr>");
    FUN_004036d0(&puStack_d4,L"<nobr><s8><translate>ONLINE_USERNAME</translate></s8></nobr>",uVar4);
    (**(code **)(*piVar5 + 0x34))();
    pvStack_c._0_1_ = 4;
    piVar5 = FUN_006aed60((int)param_1);
    if ((undefined **)0xa < local_b0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_b8);
    }
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ONLINE_USERNAME_TOOLTIP",0x17);
    _Dest[0x17] = '\0';
    pvStack_c._0_1_ = 5;
    FUN_009b5030(&uStack_58,(undefined4 *)&stack0xffffff08);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,6);
    (**(code **)(*piVar5 + 0x90))();
    if (10 < uStack_54) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_5c);
    }
    uStack_10 = 3;
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_EBX);
}


//// FUNCTION FUN_006b02a0 @ 006b02a0 ////

void __fastcall FUN_006b02a0(int param_1)

{
  undefined1 uVar1;
  bool bVar2;
  float fVar3;
  undefined4 *puVar4;
  void *pvVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  size_t sVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  float10 fVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fStack_184;
  int iStack_160;
  int iStack_158;
  undefined2 *puStack_150;
  undefined4 uStack_14c;
  uint uStack_148;
  undefined2 auStack_144 [10];
  wchar_t *pwStack_130;
  size_t sStack_12c;
  uint uStack_128;
  float afStack_110 [2];
  int iStack_108;
  int *piStack_104;
  undefined1 auStack_e4 [4];
  undefined **ppuStack_e0;
  int iStack_dc;
  int *piStack_d8;
  undefined4 uStack_cc;
  undefined1 auStack_b8 [4];
  wchar_t awStack_b4 [68];
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9e5f;
  pvStack_c = ExceptionList;
  puVar4 = *(undefined4 **)(param_1 + 0x460);
  puVar12 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  if (puVar4 != (undefined4 *)0x0) {
    piVar13 = puVar4 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar13 = *piVar13 + -1;
    if (*piVar13 == 0) {
      (**(code **)*puVar4)();
    }
    (**(code **)(*(int *)(param_1 + 0x44c) + 4))();
    *(undefined4 *)(param_1 + 0x460) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x44c))();
  }
  puVar4 = *(undefined4 **)(param_1 + 0x448);
  if (puVar4 != (undefined4 *)0x0) {
    piVar13 = puVar4 + 0x12;
    *piVar13 = *piVar13 + -1;
    if (*piVar13 == 0) {
      (**(code **)*puVar4)();
    }
    (**(code **)(*(int *)(param_1 + 0x434) + 4))();
    *(undefined4 *)(param_1 + 0x448) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x434))();
  }
  if (*(int *)(param_1 + 0x3f4) != 0) {
    fStack_184 = 9.82757e-39;
    fVar3 = (float)FUN_00ace790(*(int **)(param_1 + 0x3c4),0,&TM::TMObject::RTTI_Type_Descriptor,
                                &TM::CStar::RTTI_Type_Descriptor,0);
    if (fVar3 != 0.0) {
      puVar4 = operator_new(0x344);
      uStack_4 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar12 = FUN_007432f0(puVar4);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*(int *)(param_1 + 0x434) + 4))();
      *(undefined4 **)(param_1 + 0x448) = puVar12;
      (*(code *)**(undefined4 **)(param_1 + 0x434))();
      piVar13 = *(int **)(param_1 + 0x3f4);
      iVar7 = **(int **)(param_1 + 0x448);
      (**(code **)(*piVar13 + 0x14))();
      (**(code **)(*piVar13 + 0x10))();
      (**(code **)(iVar7 + 0x74))();
      fStack_184 = 1.4013e-45;
      (**(code **)(**(int **)(param_1 + 0x448) + 100))();
      (**(code **)(**(int **)(param_1 + 0x448) + 0x5c))(1,*(undefined4 *)(param_1 + 0x3f4),0);
      (**(code **)(**(int **)(param_1 + 0x3f4) + 0xc))(*(undefined4 *)(param_1 + 0x448),1);
      puVar4 = operator_new(0x344);
      uStack_2c = 1;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_007432f0(puVar4);
      }
      uStack_2c = 0xffffffff;
      (**(code **)(*(int *)(param_1 + 0x44c) + 4))();
      *(undefined4 **)(param_1 + 0x460) = puVar4;
      (*(code *)**(undefined4 **)(param_1 + 0x44c))();
      piVar13 = *(int **)(param_1 + 0x3f4);
      iVar7 = **(int **)(param_1 + 0x460);
      fVar14 = (float10)(**(code **)(*piVar13 + 0x14))();
      fVar14 = (float10)(**(code **)(*piVar13 + 0x10))((float)fVar14);
      (**(code **)(iVar7 + 0x74))((float)(fVar14 * (float10)0.5));
      (**(code **)(**(int **)(param_1 + 0x460) + 100))(1,*(undefined4 *)(param_1 + 0x3f4),0);
      (**(code **)(**(int **)(param_1 + 0x460) + 0x5c))(2,*(undefined4 *)(param_1 + 0x448),0);
      (**(code **)(**(int **)(param_1 + 0x3f4) + 0xc))(*(undefined4 *)(param_1 + 0x460),1);
      puStack_150 = auStack_144;
      auStack_144[0] = 0;
      uStack_14c = 0;
      uStack_148 = 10;
      uStack_4 = 2;
      iStack_158 = 0;
      iStack_160 = 0;
      pvVar5 = FUN_00857d80(auStack_b8);
      uStack_4._0_1_ = 3;
      pfVar6 = FUN_00857ae0(pvVar5,fVar3);
      FUN_00500630(afStack_110,pfVar6);
      uStack_4._0_1_ = 5;
      FUN_005005e0((int)auStack_b8);
      piVar13 = (int *)0x0;
      while( true ) {
        piVar11 = (int *)0x0;
        pvVar5 = FUN_00857bd0(auStack_e4);
        uStack_4._0_1_ = 6;
        bVar2 = FUN_00856dd0(afStack_110,(int)pvVar5);
        uStack_4._0_1_ = 5;
        uVar1 = (undefined1)uStack_4;
        uStack_4._0_1_ = 5;
        ppuStack_e0 = &PTR_FUN_00d1aed0;
        if (piStack_d8 != (int *)0x0) {
          *piStack_d8 = iStack_dc;
        }
        if (iStack_dc != 0) {
          *(int **)(iStack_dc + 4) = piStack_d8;
        }
        uStack_cc = 0;
        iStack_dc = 0;
        piStack_d8 = (int *)0x0;
        if (!bVar2) break;
        piVar10 = piVar13;
        if (*(int *)(param_1 + 0x464) <= iStack_158) {
          iVar7 = FUN_00856da0((int)afStack_110);
          FUN_00861de0(&pwStack_130,*(int *)(iVar7 + 0x60));
          uStack_4._0_1_ = 7;
          FUN_00856da0((int)afStack_110);
          uVar8 = FUN_00ace02d(L"<nobr><s8>");
          FUN_004036d0(&puStack_150,L"<nobr><s8>",uVar8);
          FUN_0040cae0(&puStack_150,pwStack_130,sStack_12c);
          sVar9 = FUN_00ace02d(L"</s8></nobr>");
          FUN_0040cae0(&puStack_150,L"</s8></nobr>",sVar9);
          puVar4 = operator_new(0x3fc);
          uStack_4._0_1_ = 8;
          if (puVar4 == (undefined4 *)0x0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = FUN_00833290(puVar4);
          }
          uStack_4._0_1_ = 7;
          (**(code **)(*piVar10 + 0x54))();
          (**(code **)(*piVar10 + 0x84))();
          fStack_184 = 2.8026e-45;
          (**(code **)(*piVar10 + 0x60))();
          if (piVar13 == (int *)0x0) {
            piVar13 = *(int **)(param_1 + 0x460);
            uVar16 = 1;
            uVar17 = DAT_00e5763c;
          }
          else {
            uVar16 = 2;
            uVar17 = DAT_00e57640;
          }
          (**(code **)(*piVar10 + 100))(uVar16,piVar13,uVar17);
          (**(code **)(**(int **)(param_1 + 0x448) + 0xc))(piVar10,1);
          uVar8 = FUN_00ace02d(L"<nobr><s8>");
          FUN_004036d0(&stack0xfffffe88,L"<nobr><s8>",uVar8);
          FUN_0043b710(&fStack_184);
          uVar15 = FUN_00acd42c();
          sVar9 = _swprintf(awStack_b4,0xd18f7c,(wchar_t *)uVar15);
          FUN_0040cae0(&stack0xfffffe88,awStack_b4,sVar9);
          sVar9 = FUN_00ace02d(L"</s8></nobr>");
          FUN_0040cae0(&stack0xfffffe88,L"</s8></nobr>",sVar9);
          puVar4 = operator_new(0x3fc);
          uStack_2c._0_1_ = 9;
          if (puVar4 != (undefined4 *)0x0) {
            piVar11 = FUN_00833290(puVar4);
          }
          uStack_2c = CONCAT31(uStack_2c._1_3_,7);
          (**(code **)(*piVar11 + 0x54))(&stack0xfffffe88);
          (**(code **)(*piVar11 + 0x84))(0);
          (**(code **)(*piVar11 + 0x5c))(1,*(undefined4 *)(param_1 + 0x460),DAT_00e57638);
          (**(code **)(*piVar11 + 100))(1,piVar10,0);
          (**(code **)(**(int **)(param_1 + 0x460) + 0xc))(piVar11,1);
          iStack_160 = iStack_160 + 1;
          if (2 < iStack_160) {
            uVar1 = (undefined1)uStack_4;
            if (10 < uStack_128) {
                    /* WARNING: Subroutine does not return */
              _free(pwStack_130);
            }
            break;
          }
          uStack_4._0_1_ = 5;
          if (10 < uStack_128) {
                    /* WARNING: Subroutine does not return */
            _free(pwStack_130);
          }
        }
        uStack_4._0_1_ = 5;
        FUN_00857260(afStack_110);
        iStack_158 = iStack_158 + 1;
        piVar13 = piVar10;
      }
      uStack_4._0_1_ = uVar1;
      if (piStack_104 != (int *)0x0) {
        *piStack_104 = iStack_108;
      }
      if (iStack_108 != 0) {
        *(int **)(iStack_108 + 4) = piStack_104;
      }
      if (10 < uStack_148) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_150);
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006b0870 @ 006b0870 ////

void __thiscall FUN_006b0870(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9e7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_3[1] != 0) {
    ExceptionList = &local_c;
    this_00 = operator_new(0x360);
    local_4 = 0;
    if (this_00 != (void *)0x0) {
      FUN_0069d820(this_00,param_3,0,0,0x3f800000,0x3f800000);
    }
  }
  local_4 = 0xffffffff;
  FUN_006ae3c0(this,param_1,param_2);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006b0920 @ 006b0920 ////

undefined4 __fastcall FUN_006b0920(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x464) < 1) {
    *(undefined4 *)(param_1 + 0x464) = 0;
  }
  else {
    *(int *)(param_1 + 0x464) = *(int *)(param_1 + 0x464) + -1;
    (**(code **)(**(int **)(param_1 + 0x430) + 0xc0))(1);
  }
  if ((*(int *)(param_1 + 0x464) == 0) && (*(int **)(param_1 + 0x418) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x418) + 0xc0))(0);
  }
  uVar1 = FUN_006b02a0(param_1);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_006b0980 @ 006b0980 ////

undefined4 __fastcall FUN_006b0980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x468) + -3;
  if (*(int *)(param_1 + 0x464) < iVar1) {
    *(int *)(param_1 + 0x464) = *(int *)(param_1 + 0x464) + 1;
    (**(code **)(**(int **)(param_1 + 0x418) + 0xc0))(1);
  }
  else {
    *(int *)(param_1 + 0x464) = iVar1;
  }
  if ((*(int *)(param_1 + 0x464) == *(int *)(param_1 + 0x468) + -3) &&
     (*(int **)(param_1 + 0x430) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x430) + 0xc0))(0);
  }
  uVar2 = FUN_006b02a0(param_1);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_006b0a70 @ 006b0a70 ////

void __fastcall FUN_006b0a70(int *param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  uint uStack_1c8;
  uint *puStack_178;
  undefined4 uStack_174;
  int *piStack_170;
  uint uStack_16c;
  uint uVar11;
  char *_Dest;
  undefined1 *_Memory;
  undefined1 *puStack_118;
  char *pcStack_114;
  undefined4 uStack_110;
  float fVar12;
  undefined4 local_f8;
  char *pcStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  char acStack_e8 [24];
  undefined4 uStack_d0;
  undefined1 auStack_ac [4];
  undefined **ppuStack_a8;
  int iStack_a4;
  int *piStack_a0;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  void *apvStack_88 [2];
  float fStack_80;
  undefined **ppuStack_7c;
  int iStack_78;
  int *piStack_74;
  undefined4 uStack_68;
  void *pvStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc9fce;
  pvStack_c = ExceptionList;
  local_f8 = 0;
  switch(param_1[0xeb]) {
  case 0:
  case 1:
    local_f8 = DAT_00e57598;
    break;
  case 2:
    local_f8 = DAT_00e575a0;
    break;
  case 3:
    local_f8 = DAT_00e5759c;
  }
  uStack_110 = local_f8;
  pcStack_114 = DAT_00e57590;
  puStack_118 = (undefined1 *)0x6b0ae1;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x74))();
  iVar8 = *param_1;
  puStack_118 = (undefined1 *)0x42000000;
  FUN_0071b2b0();
  (**(code **)(iVar8 + 0x60))();
  piVar2 = (int *)FUN_0071b2b0();
  iVar8 = *param_1;
  fVar10 = (float10)(**(code **)(*piVar2 + 0x14))();
  fVar12 = (float)fVar10;
  (**(code **)(*param_1 + 0x14))();
  FUN_0071b2b0();
  (**(code **)(iVar8 + 100))();
  (**(code **)(*param_1 + 0x50))();
  param_1[0x45] = param_1[0x45] | 8;
  if ((char)param_1[0x100] == '\0') {
    pvVar3 = operator_new(0x420);
    bVar9 = pvVar3 == (void *)0x0;
    if (bVar9) {
      piVar2 = (int *)0x0;
    }
    else {
      pcStack_f4 = acStack_e8;
      acStack_e8[0] = '\0';
      uStack_f0 = 0;
      uStack_ec = 0x14;
      _strncpy(pcStack_f4,"LEAGUETABLE_REVIEWS",0x13);
      uStack_f0 = 0x13;
      pcStack_f4[0x13] = '\0';
      pcStack_114 = &stack0xfffffef8;
      uStack_110 = 0;
      fVar12 = 2.8026e-44;
      _strncpy(pcStack_114,"button_reviews2.",0x10);
      uStack_110 = 0x10;
      pcStack_114[0x10] = '\0';
      uStack_28 = 2;
      puVar4 = FUN_009b5030(apvStack_88,&pcStack_f4);
      puStack_118 = &stack0xfffffec0;
      uStack_28 = 3;
      piVar2 = FUN_0069fb10(pvVar3,(int *)&pcStack_114,puVar4,0x42000000,0x42000000,0,0,0x3f800000,
                            0x3f800000);
    }
    if ((!bVar9) && (10 < (uint)fStack_80)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_88[0]);
    }
    if (0x14 < (uint)fVar12) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_114);
    }
    uStack_28 = 0xffffffff;
    if ((!bVar9) && (0x14 < uStack_ec)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_f4);
    }
    (**(code **)(*piVar2 + 0x60))();
    (**(code **)(*piVar2 + 0x68))();
    (**(code **)(*piVar2 + 0x18))();
    uStack_16c = 0x6b0d0d;
    (**(code **)(*piVar2 + 0x18))();
    uStack_16c = 1;
    uStack_174 = 0x6b0d17;
    piStack_170 = piVar2;
    (**(code **)(*param_1 + 0xc))();
    if (*(char *)(param_1[0xf7] + 0x3ac) == '\0') {
      (**(code **)(*piVar2 + 0xc0))();
    }
  }
  (**(code **)(*param_1 + 0x18))();
  _Memory = (undefined1 *)0x0;
  piVar2 = param_1;
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x50))();
  if (param_1[0xeb] == 2) {
    param_1[0x11a] = 0;
    param_1[0x119] = 0;
    uStack_16c = 0x6b0d89;
    fVar12 = (float)FUN_00ace790((int *)param_1[0xf1],0,&TM::TMObject::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
    if (fVar12 != 0.0) {
      pvVar3 = FUN_00857d80(&puStack_118);
      uStack_4c = 7;
      pfVar5 = FUN_00857ae0(pvVar3,fVar12);
      FUN_00500630(&fStack_80,pfVar5);
      uStack_4c = CONCAT31(uStack_4c._1_3_,9);
      FUN_005005e0((int)&puStack_118);
      while( true ) {
        pvVar3 = FUN_00857bd0(auStack_ac);
        uStack_4c._0_1_ = 10;
        bVar9 = FUN_00856dd0(&fStack_80,(int)pvVar3);
        uStack_4c = CONCAT31(uStack_4c._1_3_,9);
        ppuStack_a8 = &PTR_FUN_00d1aed0;
        if (piStack_a0 != (int *)0x0) {
          *piStack_a0 = iStack_a4;
        }
        if (iStack_a4 != 0) {
          *(int **)(iStack_a4 + 4) = piStack_a0;
        }
        uStack_94 = 0;
        iStack_a4 = 0;
        piStack_a0 = (int *)0x0;
        if (!bVar9) break;
        param_1[0x11a] = param_1[0x11a] + 1;
        FUN_00857260(&fStack_80);
      }
      uStack_4c = 0xffffffff;
      ppuStack_7c = &PTR_FUN_00d1aed0;
      if (piStack_74 != (int *)0x0) {
        *piStack_74 = iStack_78;
      }
      if (iStack_78 != 0) {
        *(int **)(iStack_78 + 4) = piStack_74;
      }
      uStack_68 = 0;
      iStack_78 = 0;
      piStack_74 = (int *)0x0;
      if (0 < param_1[0x11a]) {
        puVar4 = operator_new(0x3ac);
        uStack_4c = 0xb;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_0063f620(puVar4);
        }
        uStack_4c = 0xffffffff;
        (**(code **)(param_1[0xf8] + 4))();
        param_1[0xfd] = (int)puVar4;
        (**(code **)param_1[0xf8])();
        _Dest = DAT_00e5764c;
        (**(code **)(*(int *)param_1[0xfd] + 0x74))();
        uVar11 = 1;
        uStack_16c = 0x6b0f48;
        (**(code **)(*(int *)param_1[0xfd] + 0x5c))();
        uStack_16c = DAT_00e57648;
        uStack_174 = 2;
        puStack_178 = (uint *)0x6b0f5d;
        piStack_170 = param_1;
        (**(code **)(*(int *)param_1[0xfd] + 100))();
        puStack_178 = (uint *)0x0;
        *(uint *)(param_1[0xfd] + 0x114) = *(uint *)(param_1[0xfd] + 0x114) | 8;
        (**(code **)(*(int *)param_1[0xfd] + 0x18))();
        (**(code **)(*(int *)param_1[0xfd] + 0x18))();
        pvVar3 = operator_new(0x420);
        bVar9 = pvVar3 == (void *)0x0;
        if (bVar9) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puStack_178 = &uStack_16c;
          uStack_16c = uStack_16c & 0xffff0000;
          uStack_174 = 0;
          piStack_170 = (int *)&lpType_0000000a;
          uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
          FUN_004036d0(&puStack_178,(wchar_t *)&lpCaption_00d16918,uVar6);
          _Dest = &stack0xfffffeb4;
          _Memory = &DAT_00000014;
          _strncpy(_Dest,"button_up.",10);
          _Dest[10] = '\0';
          uStack_8c = 0xe;
          puVar4 = FUN_0069fb10(pvVar3,(int *)&stack0xfffffea8,&puStack_178,0x42000000,0x42000000,0,
                                0,0x3f800000,0x3f800000);
        }
        uStack_8c = 0x10;
        (**(code **)(param_1[0x101] + 4))();
        param_1[0x106] = (int)puVar4;
        (**(code **)param_1[0x101])();
        if ((!bVar9) && (&DAT_00000014 < _Memory)) {
                    /* WARNING: Subroutine does not return */
          _free(_Dest);
        }
        uStack_8c = 0xffffffff;
        if ((!bVar9) && (&lpType_0000000a < piStack_170)) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_178);
        }
        (**(code **)(*(int *)param_1[0x106] + 0x18))();
        (**(code **)(*(int *)param_1[0x106] + 0x18))();
        (**(code **)(*(int *)param_1[0x106] + 0x60))();
        uStack_1c8 = param_1[0xfd];
        (**(code **)(*(int *)param_1[0x106] + 100))();
        (**(code **)(*(int *)param_1[0x106] + 0xc0))();
        (**(code **)(*(int *)param_1[0xfd] + 0xc))();
        pvVar3 = operator_new(0x420);
        if (pvVar3 == (void *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          _Memory = &stack0xfffffebc;
          piVar2 = (int *)&lpType_0000000a;
          uVar11 = FUN_00ace02d((short *)&lpCaption_00d16918);
          FUN_004036d0(&stack0xfffffeb0,(wchar_t *)&lpCaption_00d16918,uVar11);
          piStack_170 = (int *)&stack0xfffffe9c;
          uStack_16c = 0;
          uVar11 = 0x14;
          _strncpy((char *)piStack_170,"button_down.",0xc);
          uStack_16c = 0xc;
          *(char *)(piStack_170 + 3) = '\0';
          uStack_1c8 = uStack_1c8 | 0x60;
          uStack_d0 = 0x13;
          puVar4 = FUN_0069fb10(pvVar3,(int *)&piStack_170,(undefined4 *)&stack0xfffffeb0,0x42000000
                                ,0x42000000,0,0,0x3f800000,0x3f800000);
        }
        uStack_d0 = 0x15;
        (**(code **)(param_1[0x107] + 4))();
        param_1[0x10c] = (int)puVar4;
        (**(code **)param_1[0x107])();
        if (((uStack_1c8 & 0x40) != 0) && (uStack_1c8 = uStack_1c8 & 0xffffffbf, 0x14 < uVar11)) {
                    /* WARNING: Subroutine does not return */
          _free(piStack_170);
        }
        uStack_d0 = 0xffffffff;
        if (((uStack_1c8 & 0x20) != 0) && (&lpType_0000000a < piVar2)) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        (**(code **)(*(int *)param_1[0x10c] + 0x18))();
        (**(code **)(*(int *)param_1[0x10c] + 0x18))
                  (5,&LAB_005f37f0,0,"LEAGUESCREEN_SCROLL_AWARDS_DOWN");
        (**(code **)(*(int *)param_1[0x10c] + 0x60))(2,param_1[0xfd],0x41a00000);
        (**(code **)(*(int *)param_1[0x10c] + 0x68))(2,param_1[0xfd],0x40800000);
        (**(code **)(*(int *)param_1[0xfd] + 0xc))(param_1[0x10c],1);
        if (param_1[0x11a] < 4) {
          (**(code **)(*(int *)param_1[0x10c] + 0xc0))(0);
        }
        (**(code **)(*param_1 + 0xc))(param_1[0xfd],1);
        iVar8 = *param_1;
        fVar10 = (float10)(**(code **)(*(int *)param_1[0xfd] + 0x14))();
        fVar12 = (float)((float10)(float)param_1[0x27] - fVar10 * (float10)0.5);
        iVar7 = FUN_0071b2b0();
        (**(code **)(iVar8 + 100))(1,iVar7,fVar12);
        (**(code **)(*param_1 + 0x50))(1);
      }
    }
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))();
  } while (cVar1 != '\0');
  FUN_0063e890(param_1,'\x01');
  FUN_0063f0d0(param_1,'\x01');
  FUN_0063e6c0(param_1,DAT_00e572d0,DAT_00e572d4);
  FUN_0063e2a0(param_1,DAT_00e572d0,DAT_00e572d4);
  switch(param_1[0xeb]) {
  case 0:
    FUN_0063f830(param_1,0x42900000);
    iVar8 = 3;
    do {
      FUN_0063f830(param_1,0x42100000);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    FUN_0063f830(param_1,0x42400000);
  case 1:
    FUN_0063f830(param_1,0x42900000);
    iVar8 = 3;
    do {
      FUN_0063f830(param_1,0x42100000);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    break;
  case 2:
    FUN_0063f830(param_1,0x42900000);
    iVar8 = 9;
    do {
      FUN_0063f830(param_1,0x42100000);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    break;
  case 3:
    FUN_0063f830(param_1,0x42400000);
    iVar8 = 5;
    do {
      FUN_0063f830(param_1,0x42100000);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    break;
  default:
    goto switchD_006b140d_default;
  }
  FUN_0063f830(param_1,0x42400000);
switchD_006b140d_default:
  FUN_0063f890(param_1,'\x01');
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))();
  ExceptionList = pvStack_5c;
  return;
}


//// FUNCTION FUN_006b1510 @ 006b1510 ////

void __fastcall FUN_006b1510(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  size_t sVar6;
  int *piVar7;
  int *piVar8;
  int **ppiVar9;
  int *piVar10;
  int *piVar11;
  uint *puVar12;
  char **ppcVar13;
  wchar_t *pwVar14;
  char **ppcVar15;
  void *pvVar16;
  char *_Dest;
  wchar_t *_Dest_00;
  wchar_t *pwVar17;
  void *unaff_EBX;
  undefined4 unaff_ESI;
  float10 fVar18;
  ulonglong uVar19;
  float fVar20;
  uint uVar21;
  int *piVar22;
  char ***_Dest_01;
  undefined4 *puVar23;
  int ***_Dest_02;
  char **ppcStack_1ac;
  int **ppiStack_1a8;
  int **ppiStack_1a4;
  char *pcStack_1a0;
  int *piStack_19c;
  int *piStack_198;
  undefined1 *puVar24;
  char **ppcStack_170;
  void **ppvStack_168;
  uint uStack_164;
  char *pcStack_160;
  void *pvStack_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  undefined4 *puStack_13c;
  undefined2 *puStack_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined2 auStack_12c [2];
  uint uStack_128;
  void *pvStack_110;
  uint uStack_108;
  float afStack_ec [2];
  float local_e4;
  float fStack_e0;
  undefined1 auStack_dc [4];
  undefined4 uStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  wchar_t *pwStack_c8;
  size_t sStack_c4;
  undefined1 *puStack_c0;
  wchar_t awStack_bc [2];
  uint uStack_b8;
  ulonglong auStack_a8 [5];
  undefined1 uStack_7c;
  undefined1 uStack_64;
  undefined1 uStack_60;
  undefined1 uStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_40;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  ppcStack_170 = (char **)&stack0xfffffffc;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00cca14f;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  piVar2 = (int *)FUN_00ace790((int *)param_1[0xf1],0,&TM::TMObject::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x240))();
    FUN_00587d40(piVar2,&fStack_d0);
    FUN_00586190(piVar2,(float *)&pwStack_c8);
    FUN_00588040(piVar2,&fStack_e0);
    FUN_00585ff0(piVar2,&uStack_d8);
    FUN_00590ad0(piVar2,auStack_dc);
    CStar_GetAwardsRatingComponent(piVar2,&fStack_d4);
    FUN_0058f9f0(piVar2,&fStack_cc);
    FUN_00587ee0(piVar2,afStack_ec);
    FUN_00587e40(piVar2,&local_e4);
    iVar3 = FUN_006af520((void *)param_1[0xf7],&ppvStack_168);
    puStack_10 = (undefined1 *)0x0;
    puStack_144 = (undefined1 *)(**(code **)(**(int **)(iVar3 + 0x14) + 0x28))();
    FUN_00460000(&ppvStack_168);
    ppvStack_168 = &pvStack_15c;
    pvStack_15c = (void *)((uint)pvStack_15c & 0xffffff00);
    uStack_164 = 0;
    pcStack_160 = (char *)0x14;
    _strncpy((char *)ppvStack_168,"",0);
    uStack_164 = 0;
    *(char *)ppvStack_168 = '\0';
    puStack_10 = (undefined1 *)0x1;
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))();
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,2);
    FUN_0063ec80(param_1,puVar4,(undefined4 *)&stack0xfffffe94);
    if (10 < uStack_108) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_110);
    }
    if (0x14 < uStack_164) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
    puStack_138 = auStack_12c;
    auStack_12c[0] = 0;
    uStack_134 = 0;
    puStack_130 = &lpType_0000000a;
    pvStack_14 = (void *)0x3;
    FUN_00936cc0(auStack_a8,piVar2);
    pwStack_c8 = awStack_bc;
    awStack_bc[0] = L'\0';
    sStack_c4 = 0;
    puStack_c0 = &lpType_0000000a;
    pvStack_14._0_1_ = 4;
    thunk_FUN_00444a70((uint *)auStack_a8,&pwStack_c8);
    piStack_198 = (int *)0x6b1729;
    uVar5 = FUN_00ace02d(
                        L"<nobr><s8><phrasebook><translate>LEAGUETABLE_VALUE</translate><phrase key=money>"
                        );
    FUN_004036d0(&puStack_138,
                 L"<nobr><s8><phrasebook><translate>LEAGUETABLE_VALUE</translate><phrase key=money>"
                 ,uVar5);
    FUN_0040cae0(&puStack_138,pwStack_c8,sStack_c4);
    sVar6 = FUN_00ace02d(L"</phrase></phrasebook></s8></nobr>");
    FUN_0040cae0(&puStack_138,L"</phrase></phrasebook></s8></nobr>",sVar6);
    puStack_13c = operator_new(0x3fc);
    pvStack_14._0_1_ = 5;
    if (puStack_13c == (undefined4 *)0x0) {
      ppcStack_1ac = (char **)0x0;
    }
    else {
      ppcStack_1ac = (char **)FUN_00833290(puStack_13c);
    }
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,4);
    ppcStack_170 = ppcStack_1ac;
    (**(code **)(*ppcStack_1ac + 0x54))();
    (**(code **)(*ppcStack_1ac + 0x84))();
    piStack_198 = (int *)0x6b17cf;
    (**(code **)(*ppcStack_1ac + 100))();
    pcStack_160 = *ppcStack_1ac;
    piStack_198 = (int *)0x6b17dd;
    fVar18 = (float10)(**(code **)(*param_1 + 0x10))();
    puStack_150 = (undefined1 *)(float)fVar18;
    piStack_198 = (int *)0x6b17e8;
    fVar18 = (float10)(**(code **)(*ppcStack_1ac + 0x10))();
    piStack_198 = (int *)(float)(((float10)(float)puStack_150 - fVar18) * (float10)0.5);
    pcStack_1a0 = (char *)0x1;
    ppiStack_1a4 = (int **)0x6b1802;
    piStack_19c = param_1;
    (**(code **)(pcStack_160 + 0x5c))();
    ppiStack_1a4 = (int **)0x1;
    ppiStack_1a8 = (int **)0x6b180c;
    (**(code **)(*ppcStack_1ac + 0x50))();
    ppiStack_1a8 = (int **)0x1;
    (**(code **)(*param_1 + 0xc))();
    piStack_198 = (int *)&stack0xfffffe74;
    uVar5 = 0x14;
    _strncpy((char *)piStack_198,"",0);
    *(char *)piStack_198 = '\0';
    ppvStack_168 = (void **)&stack0xfffffe48;
    uStack_40 = 6;
    FUN_006b0870(param_1,unaff_ESI,uStack_108,&piStack_198);
    uStack_40 = 4;
    if (0x14 < uVar5) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_198);
    }
    uVar5 = FUN_00ace02d(L"<nobr><s8><translate>LEAGUETABLE_MOVIE_SUCCESS</translate>:</s8></nobr>")
    ;
    FUN_004036d0(&uStack_164,
                 L"<nobr><s8><translate>LEAGUETABLE_MOVIE_SUCCESS</translate>:</s8></nobr>",uVar5);
    piVar7 = FUN_006adfc0();
    piStack_198 = (int *)&stack0xfffffe74;
    piStack_198 = _malloc(0x20);
    _strncpy((char *)piStack_198,"CHARTS_STAR_MOVIE_SUCCESS",0x19);
    uVar5 = 0x19;
    *(char *)((int)piStack_198 + 0x19) = '\0';
    uStack_40 = 7;
    FUN_009b5030(&puStack_13c,&piStack_198);
    uStack_40 = 8;
    (**(code **)(*piVar7 + 0x90))();
    if (&lpType_0000000a < puStack_138) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_140);
    }
    uStack_44 = 4;
    if (0x14 < uVar5) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_19c);
    }
    uVar5 = FUN_00ace02d(L"<nobr><s8><translate>LEAGUETABLE_SALARY</translate>:</s8></nobr>");
    FUN_004036d0(&ppvStack_168,L"<nobr><s8><translate>LEAGUETABLE_SALARY</translate>:</s8></nobr>",
                 uVar5);
    piVar8 = FUN_006adfc0();
    piStack_19c = (int *)&stack0xfffffe70;
    piStack_198 = (int *)0x0;
    _strncpy((char *)piStack_19c,"CHARTS_STAR_SALARY",0x12);
    piStack_198 = (int *)0x12;
    *(char *)((int)piStack_19c + 0x12) = '\0';
    uStack_44 = 9;
    piVar7 = FUN_009b5030(&puStack_140,&piStack_19c);
    uStack_44 = 10;
    (**(code **)(*piVar8 + 0x90))();
    if (&lpType_0000000a < puStack_13c) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_144);
    }
    uStack_48 = 4;
    if (&DAT_00000014 < piStack_198) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_1a0);
    }
    iVar3 = (**(code **)(*piVar2 + 0x1d4))();
    if (iVar3 != 0) {
      piVar8 = (int *)(**(code **)(*piVar2 + 0x1d4))();
      (**(code **)(*piVar8 + 0x4c))();
      ppiStack_1a4 = &piStack_198;
      piStack_198 = (int *)((uint)piStack_198 & 0xffff0000);
      pcStack_1a0 = (char *)0x0;
      piStack_19c = (int *)&lpType_0000000a;
      uStack_4c = 0xb;
      thunk_FUN_00444a70((uint *)&puStack_150,&ppiStack_1a4);
      uVar5 = FUN_00ace02d(L"<nobr><s8>");
      FUN_004036d0(&ppcStack_170,L"<nobr><s8>",uVar5);
      FUN_0040cae0(&ppcStack_170,(wchar_t *)ppiStack_1a4,(size_t)pcStack_1a0);
      sVar6 = FUN_00ace02d(L"</s8></nobr>");
      FUN_0040cae0(&ppcStack_170,L"</s8></nobr>",sVar6);
      puVar4 = operator_new(0x3fc);
      uStack_4c = 0xc;
      if (puVar4 == (undefined4 *)0x0) {
        ppiVar9 = (int **)0x0;
      }
      else {
        ppiVar9 = (int **)FUN_00833290(puVar4);
      }
      uStack_4c = 0xb;
      ppiStack_1a8 = ppiVar9;
      (*(code *)(*ppiVar9)[0x15])();
      (*(code *)(*ppiVar9)[0x21])();
      (*(code *)(*ppiVar9)[0x18])();
      piVar8 = *ppiVar9;
      (**(code **)(*piStack_198 + 0x14))();
      (*(code *)(*ppiVar9)[5])();
      (*(code *)piVar8[0x19])();
      (**(code **)(*param_1 + 0xc))(ppiVar9);
      uStack_48 = 4;
      if (&lpType_0000000a < piStack_198) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_1a0);
      }
    }
    uVar5 = FUN_00ace02d(L"<nobr><s8><translate>LEAGUETABLE_PERFORMANCES</translate>:</s8></nobr>");
    FUN_004036d0(&stack0xfffffe94,
                 L"<nobr><s8><translate>LEAGUETABLE_PERFORMANCES</translate>:</s8></nobr>",uVar5);
    puVar24 = &stack0xfffffe3c;
    piVar10 = FUN_006adfc0();
    pcStack_1a0 = &stack0xfffffe6c;
    piStack_19c = (int *)0x0;
    piStack_198 = (int *)0x20;
    pcStack_1a0 = _malloc(0x20);
    _strncpy(pcStack_1a0,"CHARTS_STAR_PERFORMANCES",0x18);
    piStack_19c = (int *)0x18;
    pcStack_1a0[0x18] = '\0';
    uStack_48 = 0xd;
    piVar8 = FUN_009b5030(&puStack_144,&pcStack_1a0);
    uStack_48 = 0xe;
    (**(code **)(*piVar10 + 0x90))();
    if (&lpType_0000000a < puStack_140) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_148);
    }
    uStack_4c = 4;
    if ((int *)0x14 < piStack_19c) {
                    /* WARNING: Subroutine does not return */
      _free(ppiStack_1a4);
    }
    uVar5 = FUN_00ace02d(L"<nobr><s8><translate>LEAGUETABLE_IMAGE</translate>:</s8></nobr>");
    FUN_004036d0(&ppcStack_170,L"<nobr><s8><translate>LEAGUETABLE_IMAGE</translate>:</s8></nobr>",
                 uVar5);
    uVar19 = CONCAT44(puVar24,&stack0xfffffe38);
    piVar10 = FUN_006adfc0();
    ppiStack_1a4 = &piStack_198;
    piStack_198 = (int *)((uint)piStack_198 & 0xffffff00);
    pcStack_1a0 = (char *)0x0;
    piStack_19c = (int *)0x14;
    _strncpy((char *)ppiStack_1a4,"CHARTS_STAR_IMAGE",0x11);
    pcStack_1a0 = (char *)0x11;
    *(char *)((int)ppiStack_1a4 + 0x11) = '\0';
    uStack_4c = 0xf;
    puVar4 = FUN_009b5030(&puStack_148,&ppiStack_1a4);
    uStack_4c = 0x10;
    (**(code **)(*piVar10 + 0x90))();
    if (&lpType_0000000a < puStack_144) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_14c);
    }
    uStack_50 = 4;
    if ((char *)0x14 < pcStack_1a0) {
                    /* WARNING: Subroutine does not return */
      _free(ppiStack_1a8);
    }
    uVar5 = FUN_00ace02d(L"<nobr><s8><translate>LEAGUETABLE_ENT</translate>:</s8></nobr>");
    FUN_004036d0(&stack0xfffffe8c,L"<nobr><s8><translate>LEAGUETABLE_ENT</translate>:</s8></nobr>",
                 uVar5);
    _Dest_00 = (wchar_t *)&stack0xfffffe34;
    piVar10 = FUN_006adfc0();
    ppiStack_1a8 = &piStack_19c;
    piStack_19c = (int *)((uint)piStack_19c & 0xffffff00);
    ppiStack_1a4 = (int **)0x0;
    pcStack_1a0 = (char *)0x20;
    ppiStack_1a8 = _malloc(0x20);
    _strncpy((char *)ppiStack_1a8,"CHARTS_STAR_ENTOURAGE",0x15);
    ppiStack_1a4 = (int **)0x15;
    *(char *)((int)ppiStack_1a8 + 0x15) = '\0';
    uStack_50 = 0x11;
    FUN_009b5030(&puStack_14c,&ppiStack_1a8);
    uStack_50 = 0x12;
    (**(code **)(*piVar10 + 0x90))();
    if (&lpType_0000000a < puStack_148) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_150);
    }
    uStack_54 = 4;
    if (&DAT_00000014 < ppiStack_1a4) {
                    /* WARNING: Subroutine does not return */
      _free(ppcStack_1ac);
    }
    piVar10 = (int *)piVar2[0x294];
    puVar23 = (undefined4 *)0x0;
    pwVar14 = (wchar_t *)&stack0xfffffe40;
    if (piVar10 != piVar2 + 0x297) {
      pwVar17 = (wchar_t *)0x0;
      do {
        piVar10 = (int *)piVar10[1];
        pwVar17 = (wchar_t *)((int)pwVar17 + 1);
      } while (piVar10 != piVar2 + 0x297);
      puVar23 = (undefined4 *)0x0;
      pwVar14 = (wchar_t *)&stack0xfffffe40;
      if (pwVar17 != (wchar_t *)0x0) {
        puVar23 = operator_new(0x344);
        uStack_54 = 0x13;
        if (puVar23 == (undefined4 *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = FUN_007432f0(puVar23);
        }
        uStack_54 = 4;
        uVar5 = FUN_00ace02d(
                            L"<nobr><s8><phrasebook><translate>LEAGUETABLE_STAR_ASSISTANTS</translate><phrase key=num>"
                            );
        FUN_004036d0(&stack0xfffffe88,
                     L"<nobr><s8><phrasebook><translate>LEAGUETABLE_STAR_ASSISTANTS</translate><phrase key=num>"
                     ,uVar5);
        sVar6 = _swprintf((wchar_t *)&fStack_e0,0xd18f7c,pwVar17);
        FUN_0040cae0(&stack0xfffffe88,(wchar_t *)&fStack_e0,sVar6);
        sVar6 = FUN_00ace02d(L"</phrase></phrasebook></s8></nobr>");
        FUN_0040cae0(&stack0xfffffe88,L"</phrase></phrasebook></s8></nobr>",sVar6);
        puVar23 = operator_new(0x3fc);
        uStack_54 = 0x14;
        if (puVar23 == (undefined4 *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = FUN_00833290(puVar23);
        }
        piVar22 = (int *)&stack0xfffffe88;
        uStack_54 = 4;
        (**(code **)(*piVar11 + 0x54))();
        (**(code **)(*piVar7 + 0x84))();
        piVar11 = piVar10;
        (**(code **)(*piVar8 + 0x60))();
        (**(code **)(*piVar22 + 100))(1);
        (**(code **)(*piVar10 + 0xc))(piVar11,1);
        uVar19 = FUN_00acd42c();
        FUN_00471b10((longlong *)&stack0xfffffe80);
        for (ppiStack_1a4 = (int **)piVar2[0x294]; ppiStack_1a4 != (int **)(piVar2 + 0x297);
            ppiStack_1a4 = (int **)ppiStack_1a4[1]) {
          if (ppiStack_1a4[2] != (int *)0x0) {
            piVar11 = (int *)(**(code **)(*ppiStack_1a4[2] + 0x1d4))();
            puVar12 = (uint *)(**(code **)(*piVar11 + 0x4c))(&stack0xfffffe50);
            uVar19 = CONCAT44((int)(uVar19 >> 0x20) + puVar12[1] +
                              (uint)CARRY4((uint)uVar19,*puVar12),(uint)uVar19 + *puVar12);
            FUN_00471b10((longlong *)&stack0xfffffe80);
          }
        }
        pwVar14 = (wchar_t *)&stack0xfffffe94;
        ppcStack_170 = (char **)&lpType_0000000a;
        pwVar17 = (wchar_t *)&stack0xfffffe38;
        uVar21 = 10;
        uStack_7c = 0x16;
        thunk_FUN_00444a70((uint *)&stack0xfffffe80,&stack0xfffffe88);
        uVar5 = FUN_00ace02d(L"<nobr><s8>");
        if (uVar21 <= uVar5) {
          if (10 < uVar21) {
                    /* WARNING: Subroutine does not return */
            _free(pwVar17);
          }
          pwVar17 = _malloc((uVar5 + 0x20 & 0xffffffe0) * 2);
        }
        _wcsncpy(pwVar17,L"<nobr><s8>",uVar5);
        pwVar17[uVar5] = L'\0';
        FUN_0040cae0(&stack0xfffffe2c,pwVar14,0);
        sVar6 = FUN_00ace02d(L"</s8></nobr>");
        FUN_0040cae0(&stack0xfffffe2c,L"</s8></nobr>",sVar6);
        puVar23 = operator_new(0x3fc);
        uStack_7c = 0x17;
        if (puVar23 == (undefined4 *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = FUN_00833290(puVar23);
        }
        piVar11 = (int *)&stack0xfffffe2c;
        uStack_7c = 0x16;
        (**(code **)(*piVar2 + 0x54))();
        (**(code **)(*piVar2 + 0x84))(0);
        (**(code **)(*piVar2 + 0x60))(2,piVar10,0);
        (**(code **)(*piVar2 + 100))(2,piVar11,0);
        (**(code **)(*piVar10 + 0xc))(piVar2,1);
        (**(code **)(*piVar10 + 0x84))(0);
        do {
          cVar1 = (**(code **)(*piVar10 + 0x50))(1);
        } while (cVar1 != '\0');
        (**(code **)(*piVar10 + 0x60))(2,param_1,0x42000000);
        iVar3 = *piVar10;
        fVar18 = (float10)(**(code **)(*piVar11 + 0x14))();
        fVar20 = (float)fVar18;
        fVar18 = (float10)(**(code **)(*piVar10 + 0x14))();
        (**(code **)(iVar3 + 100))(1,piVar11,(float)(((float10)fVar20 - fVar18) * (float10)0.5));
        (**(code **)(*param_1 + 0xc))(piVar10,1);
        if (&lpType_0000000a < ppiStack_1a4) {
                    /* WARNING: Subroutine does not return */
          _free(ppcStack_1ac);
        }
        uStack_54 = 4;
        if (&lpType_0000000a < puStack_148) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_150);
        }
      }
    }
    uStack_54 = 4;
    ppcVar13 = (char **)FUN_00ace02d(
                                    L"<nobr><s8><translate>LEAGUETABLE_TRAILER</translate>:</s8></nobr>"
                                    );
    if (ppcStack_170 <= ppcVar13) {
      if (&lpType_0000000a < ppcStack_170) {
                    /* WARNING: Subroutine does not return */
        _free(pwVar14);
      }
      ppcStack_170 = (char **)(((uint)(ppcVar13 + 8) >> 5) << 5);
      pwVar14 = _malloc(((uint)(ppcVar13 + 8) >> 5) * 0x40);
    }
    _wcsncpy(pwVar14,L"<nobr><s8><translate>LEAGUETABLE_TRAILER</translate>:</s8></nobr>",
             (size_t)ppcVar13);
    pwVar14[(int)ppcVar13] = L'\0';
    piVar2 = FUN_006adfc0();
    ppcStack_1ac = &pcStack_1a0;
    pcStack_1a0 = (char *)((uint)pcStack_1a0 & 0xffffff00);
    ppiStack_1a8 = (int **)0x0;
    ppiStack_1a4 = (int **)0x14;
    _strncpy((char *)ppcStack_1ac,"CHARTS_STAR_TRAILER",0x13);
    ppiStack_1a8 = (int **)0x13;
    *(char *)((int)ppcStack_1ac + 0x13) = '\0';
    uStack_54 = 0x18;
    FUN_009b5030(&puStack_150,&ppcStack_1ac);
    uStack_54 = 0x19;
    (**(code **)(*piVar2 + 0x90))();
    if (&lpType_0000000a < puStack_14c) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_154);
    }
    uStack_58 = 4;
    if ((int **)0x14 < ppiStack_1a8) {
                    /* WARNING: Subroutine does not return */
      _free(puVar23);
    }
    ppcVar15 = (char **)FUN_00ace02d(
                                    L"<nobr><s8><translate>LEAGUETABLE_PRESS</translate>:</s8></nobr>"
                                    );
    if (ppcVar13 <= ppcVar15) {
      if (&lpType_0000000a < ppcVar13) {
                    /* WARNING: Subroutine does not return */
        _free((void *)(uVar19 >> 0x20));
      }
      pvVar16 = _malloc(((uint)(ppcVar15 + 8) >> 5) * 0x40);
      uVar19 = CONCAT44(pvVar16,(uint)uVar19);
    }
    _wcsncpy((wchar_t *)(uVar19 >> 0x20),
             L"<nobr><s8><translate>LEAGUETABLE_PRESS</translate>:</s8></nobr>",(size_t)ppcVar15);
    *(undefined2 *)((int)(uVar19 >> 0x20) + (int)ppcVar15 * 2) = 0;
    piVar2 = FUN_006adfc0();
    pwVar14 = (wchar_t *)uVar19;
    _Dest_02 = &ppiStack_1a4;
    ppiStack_1a4 = (int **)((uint)ppiStack_1a4 & 0xffffff00);
    ppcStack_1ac = (char **)0x0;
    ppiStack_1a8 = (int **)0x14;
    _strncpy((char *)_Dest_02,"CHARTS_STAR_PRESS",0x11);
    ppcStack_1ac = (char **)0x11;
    *(char *)((int)_Dest_02 + 0x11) = '\0';
    uStack_58 = 0x1a;
    FUN_009b5030(&puStack_154,(undefined4 *)&stack0xfffffe50);
    uStack_58 = 0x1b;
    (**(code **)(*piVar2 + 0x90))();
    if (&lpType_0000000a < puStack_150) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_158);
    }
    uStack_5c = 4;
    if ((char **)0x14 < ppcStack_1ac) {
                    /* WARNING: Subroutine does not return */
      _free(piVar7);
    }
    ppcVar13 = (char **)FUN_00ace02d(
                                    L"<nobr><s8><translate>LEAGUETABLE_RELATIONSHIP</translate>:</s8></nobr>"
                                    );
    if (ppcVar15 <= ppcVar13) {
      if (&lpType_0000000a < ppcVar15) {
                    /* WARNING: Subroutine does not return */
        _free(pwVar14);
      }
      pwVar14 = _malloc(((uint)(ppcVar13 + 8) >> 5) * 0x40);
    }
    _wcsncpy(pwVar14,L"<nobr><s8><translate>LEAGUETABLE_RELATIONSHIP</translate>:</s8></nobr>",
             (size_t)ppcVar13);
    pwVar14[(int)ppcVar13] = L'\0';
    piVar2 = FUN_006adfc0();
    ppiStack_1a8 = (int **)((uint)ppiStack_1a8 & 0xffffff00);
    ppcStack_1ac = (char **)0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"CHARTS_STAR_RELATIONSHIPS",0x19);
    uVar5 = 0x19;
    _Dest[0x19] = '\0';
    uStack_5c = 0x1c;
    FUN_009b5030(&puStack_158,(undefined4 *)&stack0xfffffe4c);
    uStack_5c = 0x1d;
    (**(code **)(*piVar2 + 0x90))();
    if (&lpType_0000000a < puStack_154) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_15c);
    }
    uStack_60 = 4;
    if (0x14 < uVar5) {
                    /* WARNING: Subroutine does not return */
      _free(piVar8);
    }
    ppcVar15 = (char **)FUN_00ace02d(
                                    L"<nobr><s8><translate>LEAGUETABLE_AWARDS</translate>:</s8></nobr>"
                                    );
    if (ppcVar13 <= ppcVar15) {
      if (&lpType_0000000a < ppcVar13) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest_00);
      }
      _Dest_00 = _malloc(((uint)(ppcVar15 + 8) >> 5) * 0x40);
    }
    _wcsncpy(_Dest_00,L"<nobr><s8><translate>LEAGUETABLE_AWARDS</translate>:</s8></nobr>",
             (size_t)ppcVar15);
    _Dest_00[(int)ppcVar15] = L'\0';
    piVar2 = FUN_006adfc0();
    _Dest_01 = &ppcStack_1ac;
    ppcStack_1ac = (char **)((uint)ppcStack_1ac & 0xffffff00);
    _strncpy((char *)_Dest_01,"CHARTS_STAR_AWARDS",0x12);
    uVar5 = 0x12;
    *(char *)((int)_Dest_01 + 0x12) = '\0';
    uStack_60 = 0x1e;
    FUN_009b5030(&pvStack_15c,(undefined4 *)&stack0xfffffe48);
    uStack_60 = 0x1f;
    (**(code **)(*piVar2 + 0x90))();
    if (&lpType_0000000a < puStack_158) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_160);
    }
    uStack_64 = 4;
    if (0x14 < uVar5) {
                    /* WARNING: Subroutine does not return */
      _free(puVar4);
    }
    piVar2 = FUN_006af050(0x154);
    (**(code **)(*piVar2 + 0x5c))();
    (**(code **)(*piVar2 + 100))(1,param_1,0x42b00000);
    (**(code **)(*param_1 + 0xc))(piVar2,1);
    piVar2 = FUN_006af050(0x154);
    (**(code **)(*piVar2 + 0x5c))(1,param_1,0x43b70000);
    (**(code **)(*piVar2 + 100))(1,param_1,0x42b00000);
    (**(code **)(*param_1 + 0xc))(piVar2,1);
    FUN_006b02a0((int)param_1);
    if (10 < uStack_b8) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_c0);
    }
    uStack_c = 0xffffffff;
    if (10 < uStack_128) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_130);
    }
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))();
  } while (cVar1 != '\0');
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_006b2760 @ 006b2760 ////

void __thiscall FUN_006b2760(void *this,char param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  void *pvVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  float *pfVar13;
  undefined4 uVar14;
  uint uVar15;
  size_t sVar16;
  int *piVar17;
  undefined4 unaff_EBX;
  float10 fVar18;
  float10 fVar19;
  undefined1 **ppuVar20;
  uint ***pppuVar21;
  char **ppcVar22;
  undefined1 *local_12c;
  wchar_t *pwStack_128;
  uint **local_124;
  undefined **local_120;
  uint local_11c;
  uint *local_118 [2];
  int iStack_110;
  undefined4 local_10c;
  float fStack_108;
  undefined4 local_f8;
  int *piStack_f4;
  uint local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  char *local_d8;
  undefined4 local_d4;
  uint local_d0;
  char local_cc [12];
  void *pvStack_c0;
  void *pvStack_bc;
  char *local_b8;
  uint local_b4;
  uint local_b0;
  char local_ac [28];
  undefined1 auStack_90 [4];
  undefined2 *puStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined2 auStack_80 [10];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca239;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0x400) != '\0') {
    ExceptionList = &local_c;
    FUN_006afd80(this);
    ExceptionList = local_c;
    return;
  }
  local_2c = local_20;
  local_f8 = 0;
  local_dc = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 1;
  bVar3 = false;
  if (param_1 == '\0') {
    ExceptionList = &local_c;
    pvVar6 = (void *)FUN_00ace790(*(int **)((int)this + 0x3c4),0,&TM::TMObject::RTTI_Type_Descriptor
                                  ,&TM::CProject::RTTI_Type_Descriptor,0);
    if (pvVar6 != (void *)0x0) {
      puVar7 = FUN_0045f620(pvVar6,&local_124);
      FUN_004036d0(&local_2c,(wchar_t *)*puVar7,puVar7[1]);
      if (10 < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_124);
      }
      iVar8 = FUN_005b2770((int)pvVar6);
      puVar7 = (undefined4 *)FUN_00449b40(iVar8);
      FUN_004015d0(&local_4c,(char *)*puVar7,puVar7[1]);
      ppuVar20 = &local_12c;
      pvVar9 = (void *)FUN_005b2b70((int)pvVar6);
      puVar7 = (undefined4 *)FUN_005dd5c0(pvVar9,(float *)ppuVar20);
      local_f8 = *puVar7;
      puVar7 = (undefined4 *)CProject_GetQualityWithAwardBoost(pvVar6,(float *)&local_12c);
      local_dc = *puVar7;
      piVar10 = (int *)FUN_005b27d0(pvVar6,(float *)&local_12c);
      local_e0 = *piVar10;
      iVar8 = FUN_005b2bc0((int)pvVar6);
      if (iVar8 != 0) {
        ppuVar20 = &local_12c;
        pvVar9 = (void *)FUN_005b2bc0((int)pvVar6);
        plVar11 = FUN_005cd100(pvVar9,(longlong *)ppuVar20);
        local_e8 = (undefined4)*plVar11;
        local_e4 = *(undefined4 *)((int)plVar11 + 4);
        FUN_00471b10((longlong *)&local_e8);
      }
      puVar12 = FUN_00936bd0((ulonglong *)&local_12c,pvVar6);
      local_f0 = (uint)*puVar12;
      local_ec = *(uint *)((int)puVar12 + 4);
      FUN_00471b10((longlong *)&local_f0);
      FUN_00857aa0(&local_b8);
      local_4._0_1_ = 5;
      pvVar9 = FUN_00857d80(&local_124);
      local_4._0_1_ = 6;
      pfVar13 = FUN_00857ae0(pvVar9,(float)pvVar6);
      FUN_0050ad20(&local_b8,pfVar13);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_005005e0((int)&local_124);
      while( true ) {
        pvVar6 = FUN_00857bd0(&local_124);
        local_4._0_1_ = 7;
        bVar3 = FUN_00856dd0(&local_b8,(int)pvVar6);
        local_4 = CONCAT31(local_4._1_3_,5);
        local_120 = &PTR_FUN_00d1aed0;
        if (local_118[0] != (uint *)0x0) {
          *local_118[0] = local_11c;
        }
        if (local_11c != 0) {
          *(uint **)(local_11c + 4) = local_118[0];
        }
        local_10c = 0;
        local_11c = 0;
        local_118[0] = (uint *)0x0;
        if (!bVar3) break;
        FUN_00857260((float *)&local_b8);
      }
      goto LAB_006b2bdb;
    }
  }
  else {
    ExceptionList = &local_c;
    pvVar6 = (void *)FUN_00ace790(*(int **)((int)this + 0x3c4),0,&TM::TMObject::RTTI_Type_Descriptor
                                  ,&TM::CProjectAI::RTTI_Type_Descriptor,0);
    if (pvVar6 != (void *)0x0) {
      puVar7 = FUN_005a3200(pvVar6,&local_124);
      FUN_004036d0(&local_2c,(wchar_t *)*puVar7,puVar7[1]);
      if (10 < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_124);
      }
      iVar8 = FUN_005a2c00((int)pvVar6);
      puVar7 = (undefined4 *)FUN_00449b40(iVar8);
      FUN_004015d0(&local_4c,(char *)*puVar7,puVar7[1]);
      ppuVar20 = &local_12c;
      pvVar9 = (void *)FUN_005a2c10((int)pvVar6);
      puVar7 = (undefined4 *)FUN_005dd5c0(pvVar9,(float *)ppuVar20);
      local_f8 = *puVar7;
      local_dc = *(undefined4 *)((int)pvVar6 + 0x110);
      piVar10 = (int *)FUN_005a4060(pvVar6,(float *)&local_12c);
      local_e0 = *piVar10;
      iVar8 = FUN_005a2c50((int)pvVar6);
      if (iVar8 != 0) {
        ppuVar20 = &local_12c;
        pvVar9 = (void *)FUN_005a2c50((int)pvVar6);
        plVar11 = FUN_005cd100(pvVar9,(longlong *)ppuVar20);
        local_e8 = (undefined4)*plVar11;
        local_e4 = *(undefined4 *)((int)plVar11 + 4);
        FUN_00471b10((longlong *)&local_e8);
      }
      puVar12 = FUN_00936c50((ulonglong *)&local_12c);
      local_f0 = (uint)*puVar12;
      local_ec = *(uint *)((int)puVar12 + 4);
      FUN_00471b10((longlong *)&local_f0);
      FUN_00857aa0(&local_b8);
      local_4._0_1_ = 2;
      pvVar9 = FUN_00857d80(&local_124);
      local_4._0_1_ = 3;
      pfVar13 = FUN_00857ae0(pvVar9,(float)pvVar6);
      FUN_0050ad20(&local_b8,pfVar13);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_005005e0((int)&local_124);
      while( true ) {
        pvVar6 = FUN_00857bd0(&local_124);
        local_4._0_1_ = 4;
        bVar3 = FUN_00856dd0(&local_b8,(int)pvVar6);
        local_4 = CONCAT31(local_4._1_3_,2);
        local_120 = &PTR_FUN_00d1aed0;
        if (local_118[0] != (uint *)0x0) {
          *local_118[0] = local_11c;
        }
        if (local_11c != 0) {
          *(uint **)(local_11c + 4) = local_118[0];
        }
        local_10c = 0;
        local_11c = 0;
        local_118[0] = (uint *)0x0;
        if (!bVar3) break;
        FUN_00857260((float *)&local_b8);
      }
LAB_006b2bdb:
      bVar3 = true;
      local_10c = 0;
      local_118[0] = (uint *)0x0;
      local_11c = 0;
      local_120 = &PTR_FUN_00d1aed0;
      FUN_005005e0((int)&local_b8);
    }
  }
  local_d8 = local_cc;
  local_cc[0] = '\0';
  local_d4 = 0;
  local_d0 = 0x14;
  _strncpy(local_d8,"",0);
  local_d4 = 0;
  *local_d8 = '\0';
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_0063ec80(this,&local_2c,&local_d8);
  if (0x14 < local_d0) {
                    /* WARNING: Subroutine does not return */
    _free(local_d8);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  bVar4 = FUN_00430950(&local_4c,"");
  if (!bVar4) goto LAB_006b2efc;
  puVar7 = FUN_0040d6b0(&local_b8,"ui/",&local_4c);
  puVar7 = FUN_004312e0(&local_124,puVar7,".dds");
  FUN_004015d0(&local_6c,(char *)*puVar7,puVar7[1]);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  if (0x14 < local_b0) {
                    /* WARNING: Subroutine does not return */
    _free(local_b8);
  }
  local_124 = local_118;
  local_118[0] = (uint *)((uint)local_118[0] & 0xffffff00);
  local_120 = (undefined **)0x0;
  local_11c = 0x14;
  _strncpy((char *)local_124,"genre_war",9);
  pppuVar21 = &local_124;
  ppuVar20 = &local_4c;
  local_120 = (undefined **)0x9;
  *(char *)((int)local_124 + 9) = '\0';
  bVar1 = false;
  bVar4 = false;
  uVar14 = FUN_00401ec0(ppuVar20,pppuVar21);
  if ((char)uVar14 == '\0') {
    local_b8 = local_ac;
    local_ac[0] = '\0';
    local_b4 = 0;
    local_b0 = 0x14;
    _strncpy(local_b8,"genre_western",0xd);
    ppcVar22 = &local_b8;
    ppuVar20 = &local_4c;
    local_b4 = 0xd;
    local_b8[0xd] = '\0';
    bVar1 = true;
    bVar4 = false;
    uVar14 = FUN_00401ec0(ppuVar20,ppcVar22);
    if ((char)uVar14 != '\0') goto LAB_006b2e1b;
    local_d8 = local_cc;
    local_cc[0] = '\0';
    local_d4 = 0;
    local_d0 = 0x14;
    _strncpy(local_d8,"genre_thriller",0xe);
    ppcVar22 = &local_d8;
    ppuVar20 = &local_4c;
    local_d4 = 0xe;
    local_d8[0xe] = '\0';
    bVar1 = true;
    bVar4 = true;
    uVar14 = FUN_00401ec0(ppuVar20,ppcVar22);
    bVar2 = false;
    if ((char)uVar14 != '\0') goto LAB_006b2e1b;
  }
  else {
LAB_006b2e1b:
    bVar2 = true;
  }
  if ((bVar4) && (0x14 < local_d0)) {
                    /* WARNING: Subroutine does not return */
    _free(local_d8);
  }
  if ((bVar1) && (0x14 < local_b0)) {
                    /* WARNING: Subroutine does not return */
    _free(local_b8);
  }
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  if (bVar2) {
    if (local_64 < 0x14) {
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_64 = 0x20;
      local_6c = _malloc(0x20);
    }
    _strncpy(local_6c,"ui/genre_action.dds",0x13);
    local_68 = 0x13;
    local_6c[0x13] = '\0';
  }
LAB_006b2efc:
  iVar8 = FUN_006af520(*(void **)((int)this + 0x3dc),&local_d8);
  local_4._0_1_ = 10;
  local_12c = (undefined1 *)(**(code **)(**(int **)(iVar8 + 0x14) + 0x28))();
  FUN_00460000(&local_d8);
  puStack_8c = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0;
  uStack_84 = 10;
  if (bVar3) {
    local_124 = local_118;
    local_118[0] = (uint *)((uint)local_118[0] & 0xffff0000);
    local_120 = (undefined **)0x0;
    local_11c = 10;
    local_4._0_1_ = 0xc;
    thunk_FUN_00444a70(&local_f0,&local_124);
    uVar15 = FUN_00ace02d(
                         L"<nobr><s8><phrasebook><translate>LEAGUETABLE_VALUE</translate><phrase key=money>"
                         );
    FUN_004036d0(&puStack_8c,
                 L"<nobr><s8><phrasebook><translate>LEAGUETABLE_VALUE</translate><phrase key=money>"
                 ,uVar15);
    FUN_0040cae0(&puStack_8c,(wchar_t *)local_124,(size_t)local_120);
    sVar16 = FUN_00ace02d(L"</phrase></phrasebook></s8></nobr>");
    FUN_0040cae0(&puStack_8c,L"</phrase></phrasebook></s8></nobr>",sVar16);
    piStack_f4 = operator_new(0x3fc);
    local_4._0_1_ = 0xd;
    if (piStack_f4 == (undefined4 *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = FUN_00833290(piStack_f4);
    }
    local_4._0_1_ = 0xc;
    (**(code **)(*piVar10 + 0x54))();
    (**(code **)(*piVar10 + 0x84))();
    (**(code **)(*piVar10 + 100))();
    iVar8 = *piVar10;
    fVar18 = (float10)(**(code **)(*(int *)this + 0x10))();
    fStack_108 = (float)fVar18;
    fVar18 = (float10)(**(code **)(*piVar10 + 0x10))();
    (**(code **)(iVar8 + 0x5c))(1,this,(float)(((float10)fStack_108 - fVar18) * (float10)0.5));
    (**(code **)(*piVar10 + 0x50))(1);
    (**(code **)(*(int *)this + 0xc))(piVar10,1);
    local_4._0_1_ = 0xb;
    if (10 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
  }
  local_4._0_1_ = 0xb;
  piStack_f4 = (int *)&stack0xfffffeac;
  FUN_006b0870(this,local_12c,local_e0,&local_6c);
  uVar15 = FUN_00ace02d(L"<s8><translate>LEAGUETABLE_SUCCESS</translate>:</s8>");
  FUN_004036d0(&puStack_8c,L"<s8><translate>LEAGUETABLE_SUCCESS</translate>:</s8>",uVar15);
  local_12c = &stack0xfffffea8;
  piVar10 = FUN_006adfc0();
  local_124 = local_118;
  local_118[0] = (uint *)((uint)local_118[0] & 0xffffff00);
  local_120 = (undefined **)0x0;
  local_11c = 0x20;
  piStack_f4 = piVar10;
  local_124 = _malloc(0x20);
  _strncpy((char *)local_124,"CHARTS_MOVIES_BOXOFFICE",0x17);
  local_120 = (undefined **)0x17;
  *(char *)((int)local_124 + 0x17) = '\0';
  local_4._0_1_ = 0xe;
  FUN_009b5030(&local_b8,&local_124);
  local_4 = CONCAT31(local_4._1_3_,0xf);
  (**(code **)(*piVar10 + 0x90))();
  if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_bc);
  }
  puStack_8._0_1_ = 0xb;
  if (local_120 < 0x15) {
    if ((char)((uint)unaff_EBX >> 0x10) != '\0') {
      pwStack_128 = (wchar_t *)&local_11c;
      local_11c = local_11c & 0xffff0000;
      local_124 = (uint **)0x0;
      local_120 = (undefined **)0xa;
      puStack_8._0_1_ = 0x10;
      thunk_FUN_00444a70(&local_ec,&pwStack_128);
      uVar15 = FUN_00ace02d(L"<nobr><s8>");
      FUN_004036d0(auStack_90,L"<nobr><s8>",uVar15);
      FUN_0040cae0(auStack_90,pwStack_128,(size_t)local_124);
      sVar16 = FUN_00ace02d(L"</s8></nobr>");
      FUN_0040cae0(auStack_90,L"</s8></nobr>",sVar16);
      puVar7 = operator_new(0x3fc);
      puStack_8._0_1_ = 0x11;
      if (puVar7 == (undefined4 *)0x0) {
        piVar17 = (int *)0x0;
      }
      else {
        piVar17 = FUN_00833290(puVar7);
      }
      puStack_8._0_1_ = 0x10;
      (**(code **)(*piVar17 + 0x54))();
      (**(code **)(*piVar17 + 0x84))();
      (**(code **)(*piVar17 + 0x60))(2);
      iStack_110 = *piVar17;
      fVar18 = (float10)(**(code **)(*piVar10 + 0x14))();
      fVar19 = (float10)(**(code **)(*piVar17 + 0x14))();
      (**(code **)(iStack_110 + 100))
                (1,local_10c,(float)(((float10)(float)fVar18 - fVar19) * (float10)0.5));
      (**(code **)(*(int *)this + 0xc))(piVar17,1);
      puStack_8._0_1_ = 0xb;
      if (10 < local_120) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_128);
      }
    }
    puStack_8._0_1_ = 0xb;
    uVar15 = FUN_00ace02d(L"<s8><translate>LEAGUETABLE_QUALITY</translate>:</s8>");
    FUN_004036d0(auStack_90,L"<s8><translate>LEAGUETABLE_QUALITY</translate>:</s8>",uVar15);
    piVar10 = FUN_006adfc0();
    pwStack_128 = (wchar_t *)&local_11c;
    local_11c = local_11c & 0xffffff00;
    local_124 = (uint **)0x0;
    local_120 = (undefined **)0x20;
    pwStack_128 = _malloc(0x20);
    _strncpy((char *)pwStack_128,"CHARTS_MOVIES_QUALITY",0x15);
    local_124 = (uint **)0x15;
    *(char *)((int)pwStack_128 + 0x15) = '\0';
    puStack_8._0_1_ = 0x12;
    FUN_009b5030(&pvStack_bc,&pwStack_128);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x13);
    (**(code **)(*piVar10 + 0x90))();
    if (&lpType_0000000a < local_b8) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_c0);
    }
    local_c = (void *)CONCAT31(local_c._1_3_,0xb);
    if (local_124 < (uint **)0x15) {
      piVar10 = FUN_006af050(0x78);
      (**(code **)(*piVar10 + 0x5c))();
      (**(code **)(*piVar10 + 100))(1,this,0x42b00000);
      (**(code **)(*(int *)this + 0xc))(piVar10,1);
      piVar10 = FUN_006af050(0x78);
      (**(code **)(*piVar10 + 0x5c))(1,this,0x43b70000);
      (**(code **)(*piVar10 + 100))(1,this,0x42b00000);
      (**(code **)(*(int *)this + 0xc))(piVar10,1);
      do {
        cVar5 = (**(code **)(*(int *)this + 0x50))();
      } while (cVar5 != '\0');
      if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_8c);
      }
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      if (local_44 < 0x15) {
        if (local_24 < 0xb) {
          ExceptionList = local_c;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
                    /* WARNING: Subroutine does not return */
  _free(pwStack_128);
}


//// FUNCTION FUN_006b34e0 @ 006b34e0 ////

int * __thiscall
FUN_006b34e0(void *this,int param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca2ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0063f620(this);
  *(int *)((int)this + 0x3ac) = param_4;
  *(undefined ***)this = &PTR_FUN_00d3c28c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3c270;
  piVar1 = (int *)((int)this + 0x3b4);
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 **)((int)this + 0x3bc) = (undefined4 *)((int)this + 0x3b0);
  *(undefined4 *)((int)this + 0x3b0) = &PTR_FUN_00d1aed0;
  *(int *)((int)this + 0x3c4) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x3b8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x3cc);
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 **)((int)this + 0x3d4) = (undefined4 *)((int)this + 0x3c8);
  *(undefined4 *)((int)this + 0x3c8) = &PTR_LAB_00d3b35c;
  *(int *)((int)this + 0x3dc) = param_2;
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x18);
    *(int **)((int)this + 0x3d0) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 **)((int)this + 0x3ec) = (undefined4 *)((int)this + 0x3e0);
  *(undefined4 *)((int)this + 0x3e0) = &PTR_FUN_00d322b0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(int *)((int)this + 0x3f8) = param_3;
  *(undefined1 *)((int)this + 0x400) = param_5;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 **)((int)this + 0x410) = (undefined4 *)((int)this + 0x404);
  *(undefined4 *)((int)this + 0x404) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 **)((int)this + 0x428) = (undefined4 *)((int)this + 0x41c);
  *(undefined4 *)((int)this + 0x41c) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 **)((int)this + 0x440) = (undefined4 *)((int)this + 0x434);
  *(undefined4 *)((int)this + 0x434) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 **)((int)this + 0x458) = (undefined4 *)((int)this + 0x44c);
  *(undefined4 *)((int)this + 0x44c) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x460) = 0;
  local_4 = 7;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0x42bc0000;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffffd;
  FUN_006b0a70(this);
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  switch(*(undefined4 *)((int)this + 0x3ac)) {
  case 0:
    cVar6 = '\0';
    goto LAB_006b3681;
  case 1:
    cVar6 = '\x01';
LAB_006b3681:
    FUN_006b2760(this,cVar6);
    uVar3 = extraout_ECX_02;
    uVar4 = extraout_EDX_02;
    break;
  case 2:
    FUN_006b1510(this);
    uVar3 = extraout_ECX_01;
    uVar4 = extraout_EDX_01;
    break;
  case 3:
    FUN_006af570(this);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  uVar5 = FUN_00990ae0(uVar3,uVar4);
  *(int *)((int)this + 0x3fc) = (int)uVar5;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006b36c0 @ 006b36c0 ////

undefined4 * __thiscall FUN_006b36c0(void *this,byte param_1)

{
  FUN_006b36e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006b36e0 @ 006b36e0 ////

void __fastcall FUN_006b36e0(undefined4 *param_1)

{
  param_1[0x113] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x115] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x115] = param_1[0x114];
  }
  if (param_1[0x114] != 0) {
    *(undefined4 *)(param_1[0x114] + 4) = param_1[0x115];
  }
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x118] = 0;
  if ((undefined4 *)param_1[0x115] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x115] = param_1[0x114];
  }
  if (param_1[0x114] != 0) {
    *(undefined4 *)(param_1[0x114] + 4) = param_1[0x115];
  }
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x10d] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x10f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10f] = param_1[0x10e];
  }
  if (param_1[0x10e] != 0) {
    *(undefined4 *)(param_1[0x10e] + 4) = param_1[0x10f];
  }
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x112] = 0;
  if ((undefined4 *)param_1[0x10f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10f] = param_1[0x10e];
  }
  if (param_1[0x10e] != 0) {
    *(undefined4 *)(param_1[0x10e] + 4) = param_1[0x10f];
  }
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x107] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x109] = param_1[0x108];
  }
  if (param_1[0x108] != 0) {
    *(undefined4 *)(param_1[0x108] + 4) = param_1[0x109];
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10c] = 0;
  if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x109] = param_1[0x108];
  }
  if (param_1[0x108] != 0) {
    *(undefined4 *)(param_1[0x108] + 4) = param_1[0x109];
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x101] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x103] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x103] = param_1[0x102];
  }
  if (param_1[0x102] != 0) {
    *(undefined4 *)(param_1[0x102] + 4) = param_1[0x103];
  }
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x106] = 0;
  if ((undefined4 *)param_1[0x103] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x103] = param_1[0x102];
  }
  if (param_1[0x102] != 0) {
    *(undefined4 *)(param_1[0x102] + 4) = param_1[0x103];
  }
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0xf8] = &PTR_FUN_00d322b0;
  if ((undefined4 *)param_1[0xfa] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfa] = param_1[0xf9];
  }
  if (param_1[0xf9] != 0) {
    *(undefined4 *)(param_1[0xf9] + 4) = param_1[0xfa];
  }
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfd] = 0;
  if ((undefined4 *)param_1[0xfa] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfa] = param_1[0xf9];
  }
  if (param_1[0xf9] != 0) {
    *(undefined4 *)(param_1[0xf9] + 4) = param_1[0xfa];
  }
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xf2] = &PTR_LAB_00d3b35c;
  if ((undefined4 *)param_1[0xf4] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf4] = param_1[0xf3];
  }
  if (param_1[0xf3] != 0) {
    *(undefined4 *)(param_1[0xf3] + 4) = param_1[0xf4];
  }
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf7] = 0;
  if ((undefined4 *)param_1[0xf4] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf4] = param_1[0xf3];
  }
  if (param_1[0xf3] != 0) {
    *(undefined4 *)(param_1[0xf3] + 4) = param_1[0xf4];
  }
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xec] = &PTR_FUN_00d1aed0;
  if ((undefined4 *)param_1[0xee] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xee] = param_1[0xed];
  }
  if (param_1[0xed] != 0) {
    *(undefined4 *)(param_1[0xed] + 4) = param_1[0xee];
  }
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xf1] = 0;
  if ((undefined4 *)param_1[0xee] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xee] = param_1[0xed];
  }
  if (param_1[0xed] != 0) {
    *(undefined4 *)(param_1[0xed] + 4) = param_1[0xee];
  }
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  FUN_0063f180(param_1);
  return;
}


//// FUNCTION FUN_006b3a10 @ 006b3a10 ////

void __fastcall
FUN_006b3a10(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            char param_7)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar3 = DAT_0104dbf0;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cca2e6;
  pvStack_c = ExceptionList;
  if (param_7 == '\0') {
    ExceptionList = &pvStack_c;
    if (DAT_0104dbf0 != (int *)0x0) {
      ExceptionList = &pvStack_c;
      if (DAT_0104dbf0[0xf1] == param_3) goto LAB_006b3b7b;
      iVar1 = DAT_0104dbf0[0x12];
      ExceptionList = &pvStack_c;
      DAT_0104dbf0[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*piVar3)(1);
      }
      (*(code *)DAT_0104dbdc[1])();
      DAT_0104dbf0 = (int *)0x0;
      (*(code *)*DAT_0104dbdc)();
    }
    pvVar2 = operator_new(0x470);
    uStack_4 = 1;
    if (pvVar2 == (void *)0x0) goto LAB_006b3b4c;
    piVar3 = FUN_006b34e0(pvVar2,param_3,param_4,param_5,param_6,0);
  }
  else {
    ExceptionList = &pvStack_c;
    if (DAT_0104dbf0 != (int *)0x0) {
      ExceptionList = &pvStack_c;
      if (DAT_0104dbf0[0xf7] == param_4) goto LAB_006b3b7b;
      iVar1 = DAT_0104dbf0[0x12];
      ExceptionList = &pvStack_c;
      DAT_0104dbf0[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*piVar3)(1);
      }
      (*(code *)DAT_0104dbdc[1])();
      DAT_0104dbf0 = (int *)0x0;
      (*(code *)*DAT_0104dbdc)();
    }
    pvVar2 = operator_new(0x470);
    uStack_4 = 0;
    if (pvVar2 == (void *)0x0) {
LAB_006b3b4c:
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_006b34e0(pvVar2,param_3,param_4,param_5,param_6,1);
    }
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104dbdc[1])();
  DAT_0104dbf0 = piVar3;
  (*(code *)*DAT_0104dbdc)();
  param_1 = extraout_ECX;
  param_2 = extraout_EDX;
LAB_006b3b7b:
  piVar3 = DAT_0104dbf0;
  if (DAT_0104dbf0 != (int *)0x0) {
    uVar4 = FUN_00990ae0(param_1,param_2);
    piVar3[0xff] = (int)uVar4;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006b3be0 @ 006b3be0 ////

undefined4 FUN_006b3be0(int param_1,int param_2,undefined *param_3)

{
  uint in_EAX;
  
  while( true ) {
    if (param_1 == param_2) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
    in_EAX = *(uint *)(param_1 + 4);
    if ((in_EAX != param_2) &&
       (in_EAX = (*(code *)param_3)(*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_EAX + 8)),
       (char)in_EAX == '\0')) break;
    param_1 = *(int *)(param_1 + 4);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_006b3c40 @ 006b3c40 ////

void FUN_006b3c40(int *param_1,int *param_2,undefined *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  
  uVar5 = FUN_006b3be0((int)param_1,(int)param_2,param_3);
  if ((char)uVar5 == '\0') {
    for (; param_1 != param_2; param_1 = (int *)param_1[1]) {
      piVar2 = (int *)param_1[1];
      while (piVar3 = piVar2, piVar3 != param_2) {
        cVar4 = (*(code *)param_3)(param_1[2],piVar3[2]);
        if (cVar4 == '\0') {
          piVar2 = (int *)piVar3[1];
          piVar1 = piVar3 + 1;
          if (piVar2 != (int *)0x0) {
            *piVar2 = *piVar3;
          }
          if (*piVar3 != 0) {
            *(int *)(*piVar3 + 4) = *piVar1;
          }
          *piVar3 = 0;
          *piVar1 = 0;
          *piVar1 = (int)param_1;
          *piVar3 = *param_1;
          *(int **)(*param_1 + 4) = piVar3;
          *param_1 = (int)piVar3;
          param_1 = piVar3;
        }
        else {
          piVar2 = (int *)piVar3[1];
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_006b3d40 @ 006b3d40 ////

void __fastcall FUN_006b3d40(void *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)((int)param_1 + 0x358);
  local_c = 0.0;
  local_4 = 0.0;
  local_8 = 0.0;
  for (; iVar2 != (int)param_1 + 0x364; iVar2 = *(int *)(iVar2 + 4)) {
    fVar3 = (float10)(**(code **)(**(int **)(iVar2 + 8) + 0x10))();
    fVar1 = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(iVar2 + 8) + 0x14))();
    if (local_c <= fVar1) {
      local_c = fVar1;
    }
    if ((float10)local_8 <= fVar3) {
      local_8 = (float)fVar3;
    }
    local_4 = fVar1 + local_4 + *(float *)((int)param_1 + 0x344);
  }
  if (*(int *)((int)param_1 + 0x3b8) == 0) {
    FUN_0073e4e0(param_1,local_4);
  }
  else if (*(int *)((int)param_1 + 0x3b8) == 1) {
    FUN_0073e4e0(param_1,local_c);
    return;
  }
  return;
}


//// FUNCTION FUN_006b3e20 @ 006b3e20 ////

float10 __fastcall FUN_006b3e20(void *param_1)

{
  int iVar1;
  float10 fVar2;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)((int)param_1 + 0x358);
  local_8 = 0.0;
  local_4 = 0.0;
  for (; iVar1 != (int)param_1 + 0x364; iVar1 = *(int *)(iVar1 + 4)) {
    fVar2 = (float10)(**(code **)(**(int **)(iVar1 + 8) + 0x10))();
    if ((float10)local_8 <= fVar2) {
      local_8 = (float)fVar2;
    }
    local_4 = (float)(fVar2 + (float10)local_4);
  }
  if ((*(int *)((int)param_1 + 0x3b8) == 0) ||
     (local_4 = local_8, *(int *)((int)param_1 + 0x3b8) == 1)) {
    FUN_0073f410(param_1,local_4);
  }
  return (float10)0.0;
}


//// FUNCTION FUN_006b3ea0 @ 006b3ea0 ////

float10 __fastcall FUN_006b3ea0(void *param_1)

{
  int iVar1;
  float10 fVar2;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)((int)param_1 + 0x358);
  local_4 = 0.0;
  local_8 = 0.0;
  for (; iVar1 != (int)param_1 + 0x364; iVar1 = *(int *)(iVar1 + 4)) {
    fVar2 = (float10)(**(code **)(**(int **)(iVar1 + 8) + 0x14))();
    if ((float10)local_4 <= fVar2) {
      local_4 = (float)fVar2;
    }
    local_8 = (float)(fVar2 + (float10)local_8);
  }
  if ((*(int *)((int)param_1 + 0x3b8) == 0) ||
     (local_4 = local_8, *(int *)((int)param_1 + 0x3b8) == 1)) {
    FUN_0073f490(param_1,local_4);
  }
  return (float10)0.0;
}


//// FUNCTION FUN_006b3f20 @ 006b3f20 ////

void __fastcall FUN_006b3f20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x358) != param_1 + 0x364) {
    do {
      piVar1 = *(int **)(param_1 + 0x364);
      puVar2 = (undefined4 *)piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    } while (*(int *)(param_1 + 0x358) != param_1 + 0x364);
  }
  return;
}


//// FUNCTION FUN_006b40c0 @ 006b40c0 ////

void __thiscall FUN_006b40c0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)((int)this + 0x364);
  for (piVar2 = *(int **)((int)this + 0x358); piVar2 != piVar1; piVar2 = (int *)piVar2[1]) {
    if (piVar2[2] == param_1) {
      if ((int *)piVar2[1] != (int *)0x0) {
        *(int *)piVar2[1] = *piVar2;
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2 = *(int **)((int)this + 0x358);
      goto joined_r0x006b4116;
    }
  }
LAB_006b4138:
  for (piVar2 = *(int **)((int)this + 0x358); piVar2 != piVar1; piVar2 = (int *)piVar2[1]) {
    iVar3 = piVar2[2];
    piVar4 = (int *)(iVar3 + 0x150);
    if (*(int **)(iVar3 + 0x154) != (int *)0x0) {
      **(int **)(iVar3 + 0x154) = *piVar4;
    }
    if (*piVar4 != 0) {
      *(undefined4 *)(*piVar4 + 4) = *(undefined4 *)(iVar3 + 0x154);
    }
    *piVar4 = 0;
    *(undefined4 *)(iVar3 + 0x154) = 0;
  }
  for (piVar2 = *(int **)((int)this + 0x358); piVar2 != piVar1; piVar2 = (int *)piVar2[1]) {
    (**(code **)(*(int *)this + 0xc))(piVar2[2],2);
  }
  return;
joined_r0x006b4116:
  piVar4 = piVar2;
  if (param_2 < 1) goto LAB_006b4124;
  param_2 = param_2 + -1;
  piVar4 = (int *)0x0;
  if (piVar2 == (int *)0x0) goto LAB_006b4124;
  piVar2 = (int *)piVar2[1];
  goto joined_r0x006b4116;
LAB_006b4124:
  piVar2 = (int *)(param_1 + 0x160);
  *(int **)(param_1 + 0x164) = piVar4;
  *piVar2 = *piVar4;
  *(int **)(*piVar4 + 4) = piVar2;
  *piVar4 = (int)piVar2;
  goto LAB_006b4138;
}


//// FUNCTION FUN_006b41a0 @ 006b41a0 ////

void __fastcall FUN_006b41a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  void **ppvVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  int unaff_EBX;
  float10 fVar9;
  float10 fVar10;
  float local_1ac;
  float local_1a8;
  float fStack_1a0;
  undefined **ppuStack_194;
  int iStack_190;
  int *piStack_18c;
  undefined ***pppuStack_188;
  int *piStack_180;
  int iStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  undefined **ppuStack_170;
  int iStack_16c;
  int *piStack_168;
  undefined ***pppuStack_164;
  int *piStack_15c;
  int iStack_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined **ppuStack_14c;
  int iStack_148;
  int *piStack_144;
  undefined ***pppuStack_140;
  int *piStack_138;
  int iStack_134;
  int iStack_130;
  undefined **ppuStack_12c;
  int iStack_128;
  int *piStack_124;
  undefined ***pppuStack_120;
  int *piStack_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_108;
  undefined **ppuStack_104;
  int iStack_100;
  int *piStack_fc;
  undefined ***pppuStack_f8;
  int *piStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined **ppuStack_e0;
  int iStack_dc;
  int *piStack_d8;
  undefined ***pppuStack_d4;
  int *piStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined **ppuStack_bc;
  int iStack_b8;
  int *piStack_b4;
  undefined ***pppuStack_b0;
  int *piStack_a8;
  int iStack_a4;
  int aiStack_a0 [9];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [32];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [28];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cca360;
  pvStack_c = ExceptionList;
  iVar1 = param_1[0xee];
  local_1ac = 0.0;
  if (iVar1 == 0) {
    local_1a8 = 1.0;
    ppvVar5 = &pvStack_c;
    if ((*(byte *)(param_1 + 0xd3) & 1) != 0) {
      ppvVar5 = &pvStack_c;
      for (piVar7 = (int *)param_1[0xd6]; ExceptionList = ppvVar5, ppvVar5 = ExceptionList,
          piVar7 != param_1 + 0xd9; piVar7 = (int *)piVar7[1]) {
        fVar9 = (float10)(**(code **)(*(int *)piVar7[2] + 0x14))();
        if ((float10)local_1a8 < fVar9) {
          fVar9 = (float10)(**(code **)(*(int *)piVar7[2] + 0x14))();
          local_1a8 = (float)fVar9;
        }
        ppvVar5 = ExceptionList;
      }
    }
    ExceptionList = ppvVar5;
    piVar7 = (int *)param_1[0xd6];
    local_1ac = 0.0;
    if (piVar7 != param_1 + 0xd9) {
      do {
        piVar3 = (int *)piVar7[2];
        fVar9 = (float10)(**(code **)(*piVar3 + 0x10))();
        pppuStack_d4 = &ppuStack_e0;
        piStack_d8 = param_1 + 6;
        uStack_e4 = 1;
        ppuStack_e0 = &PTR_FUN_00d18c2c;
        iStack_dc = *piStack_d8;
        *(int **)(*piStack_d8 + 4) = &iStack_dc;
        *piStack_d8 = (int)&iStack_dc;
        fStack_c8 = local_1ac;
        fStack_c4 = local_1ac;
        uStack_4 = 0;
        piVar3[0x28] = 1;
        piStack_cc = param_1;
        (**(code **)(piVar3[0x29] + 4))();
        piVar3[0x2e] = (int)piStack_cc;
        (**(code **)piVar3[0x29])();
        piVar3[0x2f] = (int)fStack_c8;
        piVar3[0x30] = (int)fStack_c4;
        ppuStack_e0 = &PTR_FUN_00d18c2c;
        if (piStack_d8 != (int *)0x0) {
          *piStack_d8 = iStack_dc;
        }
        if (iStack_dc != 0) {
          *(int **)(iStack_dc + 4) = piStack_d8;
        }
        piStack_cc = (int *)0x0;
        local_1ac = (float)fVar9 + (float)param_1[0xd1] + local_1ac;
        iStack_dc = 0;
        piStack_d8 = (int *)0x0;
        iVar1 = param_1[0xd2];
        if (param_1[0xef] == 1) {
          pppuStack_164 = &ppuStack_170;
          piStack_168 = param_1 + 6;
          uStack_174 = 1;
          ppuStack_170 = &PTR_FUN_00d18c2c;
          iStack_16c = *piStack_168;
          *(int **)(*piStack_168 + 4) = &iStack_16c;
          *piStack_168 = (int)&iStack_16c;
          uStack_4 = 1;
          piVar3[0x1f] = 1;
          piStack_15c = param_1;
          iStack_158 = iVar1;
          iStack_154 = iVar1;
          (**(code **)(piVar3[0x20] + 4))();
          piVar3[0x25] = (int)piStack_15c;
          (**(code **)piVar3[0x20])();
          piVar3[0x26] = iStack_158;
          piVar3[0x27] = iStack_154;
          ppuStack_170 = &PTR_FUN_00d18c2c;
          if (piStack_168 != (int *)0x0) {
            *piStack_168 = iStack_16c;
          }
          if (iStack_16c != 0) {
            *(int **)(iStack_16c + 4) = piStack_168;
          }
          piStack_15c = (int *)0x0;
          iStack_16c = 0;
          piStack_168 = (int *)0x0;
        }
        else {
          piStack_144 = param_1 + 6;
          pppuStack_140 = &ppuStack_14c;
          ppuStack_14c = &PTR_FUN_00d18c2c;
          uStack_150 = 2;
          iStack_148 = *piStack_144;
          *(int **)(*piStack_144 + 4) = &iStack_148;
          *piStack_144 = (int)&iStack_148;
          uStack_4 = 2;
          piVar3[0x31] = 2;
          piStack_138 = param_1;
          iStack_134 = iVar1;
          iStack_130 = iVar1;
          (**(code **)(piVar3[0x32] + 4))();
          piVar3[0x37] = (int)piStack_138;
          (**(code **)piVar3[0x32])();
          piVar3[0x38] = iStack_134;
          piVar3[0x39] = iStack_130;
          ppuStack_14c = &PTR_FUN_00d18c2c;
          if (piStack_144 != (int *)0x0) {
            *piStack_144 = iStack_148;
          }
          if (iStack_148 != 0) {
            *(int **)(iStack_148 + 4) = piStack_144;
          }
          piStack_138 = (int *)0x0;
          iStack_148 = 0;
          piStack_144 = (int *)0x0;
        }
        uStack_4 = 0xffffffff;
        if ((*(byte *)(param_1 + 0xd3) & 1) != 0) {
          (**(code **)(*piVar3 + 0x7c))(local_1a8);
        }
        piVar7 = (int *)piVar7[1];
      } while (piVar7 != param_1 + 0xd9);
    }
  }
  else if (iVar1 == 1) {
    local_1a8 = 1.0;
    ppvVar5 = &pvStack_c;
    if ((*(byte *)(param_1 + 0xd3) & 1) != 0) {
      ppvVar5 = &pvStack_c;
      for (piVar7 = (int *)param_1[0xd6]; ExceptionList = ppvVar5, ppvVar5 = ExceptionList,
          piVar7 != param_1 + 0xd9; piVar7 = (int *)piVar7[1]) {
        fVar9 = (float10)(**(code **)(*(int *)piVar7[2] + 0x10))();
        if ((float10)local_1a8 < fVar9) {
          fVar9 = (float10)(**(code **)(*(int *)piVar7[2] + 0x10))();
          local_1a8 = (float)fVar9;
        }
        ppvVar5 = ExceptionList;
      }
    }
    ExceptionList = ppvVar5;
    piVar7 = (int *)param_1[0xd6];
    local_1ac = 0.0;
    if (piVar7 != param_1 + 0xd9) {
      do {
        fVar9 = (float10)(**(code **)(*(int *)piVar7[2] + 0x14))();
        pppuStack_f8 = &ppuStack_104;
        piStack_fc = param_1 + 6;
        uStack_108 = 1;
        ppuStack_104 = &PTR_FUN_00d18c2c;
        iStack_100 = *piStack_fc;
        *(int **)(*piStack_fc + 4) = &iStack_100;
        *piStack_fc = (int)&iStack_100;
        fStack_ec = local_1ac;
        fStack_e8 = local_1ac;
        iVar1 = piVar7[2];
        *(undefined4 *)(iVar1 + 0x7c) = 1;
        uStack_4 = 3;
        piStack_f0 = param_1;
        (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
        *(int **)(iVar1 + 0x94) = piStack_f0;
        (*(code *)**(undefined4 **)(iVar1 + 0x80))();
        *(float *)(iVar1 + 0x98) = fStack_ec;
        *(float *)(iVar1 + 0x9c) = fStack_e8;
        ppuStack_104 = &PTR_FUN_00d18c2c;
        if (piStack_fc != (int *)0x0) {
          *piStack_fc = iStack_100;
        }
        if (iStack_100 != 0) {
          *(int **)(iStack_100 + 4) = piStack_fc;
        }
        piStack_f0 = (int *)0x0;
        local_1ac = (float)fVar9 + (float)param_1[0xd2] + local_1ac;
        iStack_100 = 0;
        piStack_fc = (int *)0x0;
        iVar1 = param_1[0xd1];
        if (param_1[0xef] == 1) {
          pppuStack_188 = &ppuStack_194;
          piStack_18c = param_1 + 6;
          ppuStack_194 = &PTR_FUN_00d18c2c;
          iStack_190 = *piStack_18c;
          *(int **)(*piStack_18c + 4) = &iStack_190;
          *piStack_18c = (int)&iStack_190;
          iVar2 = piVar7[2];
          *(undefined4 *)(iVar2 + 0xa0) = 1;
          uStack_4 = 4;
          piStack_180 = param_1;
          iStack_17c = iVar1;
          iStack_178 = iVar1;
          (**(code **)(*(int *)(iVar2 + 0xa4) + 4))();
          *(int **)(iVar2 + 0xb8) = piStack_180;
          (*(code *)**(undefined4 **)(iVar2 + 0xa4))();
          *(int *)(iVar2 + 0xbc) = iStack_17c;
          *(int *)(iVar2 + 0xc0) = iStack_178;
          ppuStack_194 = &PTR_FUN_00d18c2c;
          if (piStack_18c != (int *)0x0) {
            *piStack_18c = iStack_190;
          }
          if (iStack_190 != 0) {
            *(int **)(iStack_190 + 4) = piStack_18c;
          }
          piStack_180 = (int *)0x0;
          iStack_190 = 0;
          piStack_18c = (int *)0x0;
        }
        else {
          pppuStack_b0 = &ppuStack_bc;
          piStack_b4 = param_1 + 6;
          ppuStack_bc = &PTR_FUN_00d18c2c;
          uStack_c0 = 2;
          iStack_b8 = *piStack_b4;
          *(int **)(*piStack_b4 + 4) = &iStack_b8;
          *piStack_b4 = (int)&iStack_b8;
          iVar2 = piVar7[2];
          *(undefined4 *)(iVar2 + 0xe8) = 2;
          uStack_4 = 5;
          piStack_a8 = param_1;
          iStack_a4 = iVar1;
          aiStack_a0[0] = iVar1;
          (**(code **)(*(int *)(iVar2 + 0xec) + 4))();
          *(int **)(iVar2 + 0x100) = piStack_a8;
          (*(code *)**(undefined4 **)(iVar2 + 0xec))();
          *(int *)(iVar2 + 0x104) = iStack_a4;
          *(int *)(iVar2 + 0x108) = aiStack_a0[0];
          ppuStack_bc = &PTR_FUN_00d18c2c;
          if (piStack_b4 != (int *)0x0) {
            *piStack_b4 = iStack_b8;
          }
          if (iStack_b8 != 0) {
            *(int **)(iStack_b8 + 4) = piStack_b4;
          }
          piStack_a8 = (int *)0x0;
          iStack_b8 = 0;
          piStack_b4 = (int *)0x0;
        }
        uStack_4 = 0xffffffff;
        if ((*(byte *)(param_1 + 0xd3) & 1) != 0) {
          (**(code **)(*(int *)piVar7[2] + 0x78))(local_1a8);
        }
        piVar7 = (int *)piVar7[1];
      } while (piVar7 != param_1 + 0xd9);
    }
  }
  else {
    ExceptionList = &pvStack_c;
    if (iVar1 == 2) {
      ExceptionList = &pvStack_c;
      (**(code **)(*param_1 + 0x10))();
      piVar7 = (int *)param_1[0xd6];
      local_1a8 = 0.0;
      if (piVar7 != param_1 + 0xd9) {
        do {
          fVar4 = local_1ac;
          (**(code **)(*(int *)piVar7[2] + 0x50))(1);
          fVar9 = (float10)(**(code **)(*(int *)piVar7[2] + 0x14))();
          if ((float10)local_1ac <= fVar9) {
            local_1ac = (float)fVar9;
          }
          fVar10 = (float10)(**(code **)(*(int *)piVar7[2] + 0x10))();
          fVar9 = (float10)local_1a8;
          local_1a8 = (float)(fVar10 + fVar9);
          if (((float10)fStack_1a0 <= fVar10 + fVar9) || (fVar4 == 0.0)) {
            iStack_114 = param_1[0xd1];
            pppuStack_120 = &ppuStack_12c;
            piStack_124 = param_1 + 6;
            iStack_130 = 1;
            ppuStack_12c = &PTR_FUN_00d18c2c;
            iStack_128 = *piStack_124;
            *(int **)(*piStack_124 + 4) = &iStack_128;
            *piStack_124 = (int)&iStack_128;
            iVar1 = piVar7[2];
            *(undefined4 *)(iVar1 + 0xa0) = 1;
            puStack_8 = (undefined1 *)0x6;
            piStack_118 = param_1;
            iStack_110 = iStack_114;
            (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
            *(int **)(iVar1 + 0xb8) = piStack_118;
            (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
            *(int *)(iVar1 + 0xbc) = iStack_114;
            *(int *)(iVar1 + 0xc0) = iStack_110;
            ppuStack_12c = &PTR_FUN_00d18c2c;
            if (piStack_124 != (int *)0x0) {
              *piStack_124 = iStack_128;
            }
            if (iStack_128 != 0) {
              *(int **)(iStack_128 + 4) = piStack_124;
            }
            piStack_118 = (int *)0x0;
            iStack_128 = 0;
            piStack_124 = (int *)0x0;
            if (unaff_EBX == 0) {
              puVar6 = (undefined4 *)FUN_005fbfa0(auStack_7c,1,(int)param_1,param_1[0xd2]);
              unaff_EBX = piVar7[2];
              *(undefined4 *)(unaff_EBX + 0x7c) = *puVar6;
              puStack_8 = (undefined1 *)0x7;
              (**(code **)(*(int *)(unaff_EBX + 0x80) + 4))();
              *(undefined4 *)(unaff_EBX + 0x94) = puVar6[6];
              (*(code *)**(undefined4 **)(unaff_EBX + 0x80))();
              *(undefined4 *)((int)local_1ac + 0x98) = puVar6[7];
              puVar8 = auStack_78;
            }
            else {
              puVar6 = (undefined4 *)
                       FUN_005fbfa0(auStack_34,1,unaff_EBX,local_1ac + (float)param_1[0xd2]);
              unaff_EBX = piVar7[2];
              *(undefined4 *)(unaff_EBX + 0x7c) = *puVar6;
              puStack_8 = (undefined1 *)0x8;
              (**(code **)(*(int *)(unaff_EBX + 0x80) + 4))();
              *(undefined4 *)(unaff_EBX + 0x94) = puVar6[6];
              (*(code *)**(undefined4 **)(unaff_EBX + 0x80))();
              *(undefined4 *)((int)local_1ac + 0x98) = puVar6[7];
              puVar8 = auStack_30;
            }
            *(undefined4 *)((int)local_1ac + 0x9c) = puVar6[8];
            uStack_4 = 0xffffffff;
            FUN_005f9ed0((int)puVar8);
          }
          else {
            puVar6 = (undefined4 *)FUN_005fbfa0(aiStack_a0,2,(int)fVar4,-(float)param_1[0xd1]);
            iVar1 = piVar7[2];
            *(undefined4 *)(iVar1 + 0xa0) = *puVar6;
            puStack_8 = (undefined1 *)0x9;
            (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
            *(undefined4 *)(iVar1 + 0xb8) = puVar6[6];
            (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
            *(undefined4 *)(iVar1 + 0xbc) = puVar6[7];
            *(undefined4 *)(iVar1 + 0xc0) = puVar6[8];
            FUN_005f9ed0((int)aiStack_a0);
            puVar6 = (undefined4 *)FUN_005fbfa0(auStack_58,1,unaff_EBX,0);
            iVar1 = piVar7[2];
            *(undefined4 *)(iVar1 + 0x7c) = *puVar6;
            puStack_8 = (undefined1 *)0xa;
            (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
            *(undefined4 *)(iVar1 + 0x94) = puVar6[6];
            (*(code *)**(undefined4 **)(iVar1 + 0x80))();
            *(undefined4 *)((int)fStack_1a0 + 0x98) = puVar6[7];
            *(undefined4 *)((int)fStack_1a0 + 0x9c) = puVar6[8];
            uStack_4 = 0xffffffff;
            FUN_005f9ed0((int)auStack_54);
          }
          local_1ac = (float)piVar7[2];
          piVar7 = (int *)piVar7[1];
        } while (piVar7 != param_1 + 0xd9);
      }
    }
  }
  (**(code **)(*param_1 + 0x50))(1);
  (**(code **)(*param_1 + 0x84))(0);
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION WList_Tick @ 006b4cc0 ////

void __fastcall WList_Tick(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((int *)param_1[0xe3] != param_1 + 0xe6) {
    do {
      piVar1 = (int *)param_1[0xe6];
      puVar2 = (undefined4 *)piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    } while ((int *)param_1[0xe3] != param_1 + 0xe6);
  }
  WWindow_Tick(param_1);
  if ((*(byte *)(param_1 + 0x86) & 0x10) == 0) {
    return;
  }
  FUN_006b41a0(param_1);
  return;
}


//// FUNCTION FUN_006b4d40 @ 006b4d40 ////

void __thiscall FUN_006b4d40(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  (**(code **)(*(int *)this + 0xc))(param_1,2);
  piVar1 = (int *)(param_1 + 0x160);
  piVar2 = (int *)((int)this + 0x364);
  *(int **)(param_1 + 0x164) = piVar2;
  *piVar1 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar1;
  *piVar2 = (int)piVar1;
  *(undefined4 *)((int)this + 800) = 0;
  FUN_006b41a0(this);
  return;
}


//// FUNCTION FUN_006b4d80 @ 006b4d80 ////

void __thiscall FUN_006b4d80(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)this + 0x358);
  do {
    if (piVar2 == (int *)((int)this + 0x364)) {
LAB_006b4dca:
      (**(code **)(*param_1 + 0x20))(0);
      piVar2 = param_1 + 0x58;
      piVar1 = (int *)((int)this + 0x398);
      param_1[0x59] = (int)piVar1;
      *piVar2 = *piVar1;
      *(int **)(*piVar1 + 4) = piVar2;
      *piVar1 = (int)piVar2;
      FUN_006b41a0(this);
      return;
    }
    if ((int *)piVar2[2] == param_1) {
      if ((int *)piVar2[1] != (int *)0x0) {
        *(int *)piVar2[1] = *piVar2;
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      goto LAB_006b4dca;
    }
    piVar2 = (int *)piVar2[1];
  } while( true );
}


//// FUNCTION FUN_006b4e00 @ 006b4e00 ////

void __fastcall FUN_006b4e00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d3c38c;
  while (piVar1 != param_1 + 5) {
    *piVar1 = 0;
    piVar1 = (int *)piVar1[1];
    *(undefined4 *)(*piVar1 + 4) = 0;
  }
  param_1[2] = 0;
  param_1[5] = 0;
  FUN_00406010((int)param_1);
  return;
}


//// FUNCTION FUN_006b4e50 @ 006b4e50 ////

undefined4 * __thiscall FUN_006b4e50(void *this,byte param_1)

{
  FUN_006b4e00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006b4e70 @ 006b4e70 ////

void __fastcall FUN_006b4e70(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_00d3c3b4;
  param_1[0x14] = &PTR_FUN_00d3c398;
  piVar2 = (int *)param_1[0xd6];
  piVar1 = param_1 + 0xd9;
  while (piVar2 != piVar1) {
    *piVar2 = 0;
    piVar2 = (int *)piVar2[1];
    *(undefined4 *)(*piVar2 + 4) = 0;
  }
  param_1[0xd6] = piVar1;
  *piVar1 = (int)(param_1 + 0xd5);
  FUN_006b4e00(param_1 + 0xe1);
  FUN_006b4e00(param_1 + 0xd4);
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_006b4ed0 @ 006b4ed0 ////

undefined4 * __thiscall FUN_006b4ed0(void *this,byte param_1)

{
  FUN_006b4e70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006b4ef0 @ 006b4ef0 ////

void __fastcall FUN_006b4ef0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 5;
  param_1[7] = 0;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[2] = puVar1;
  *puVar1 = param_1 + 1;
  *param_1 = &PTR_LAB_00d3c38c;
  return;
}


//// FUNCTION FUN_006b4f50 @ 006b4f50 ////

undefined4 * __thiscall FUN_006b4f50(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cca3d2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d3c3b4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3c398;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x358) = 0;
  puVar1 = (undefined4 *)((int)this + 0x364);
  *(undefined4 *)((int)this + 0x36c) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined ***)((int)this + 0x350) = &PTR_LAB_00d3c38c;
  *(undefined4 **)((int)this + 0x358) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0x354);
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x398);
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 **)((int)this + 0x38c) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0x388);
  *(undefined ***)((int)this + 900) = &PTR_LAB_00d3c38c;
  *(undefined4 *)((int)this + 0x344) = 0x40000000;
  *(undefined4 *)((int)this + 0x3bc) = param_2;
  *(undefined4 *)((int)this + 0x348) = 0x40000000;
  *(uint *)((int)this + 0x34c) = *(uint *)((int)this + 0x34c) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x3b8) = param_1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006b5060 @ 006b5060 ////

void __fastcall FUN_006b5060(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3c4e4;
  param_1[0x14] = &PTR_FUN_00d3c4cc;
  FUN_005f3230(param_1);
  return;
}


//// FUNCTION FUN_006b50f0 @ 006b50f0 ////

undefined4 * __thiscall FUN_006b50f0(void *this,byte param_1)

{
  FUN_006b5060(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006b5110 @ 006b5110 ////

void __thiscall FUN_006b5110(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  float unaff_EDI;
  float10 fVar3;
  
  piVar1 = (int *)(param_1 + 0x40);
  piVar2 = (int *)((int)this + 0x374);
  *(int **)(param_1 + 0x44) = piVar2;
  *piVar1 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar1;
  *piVar2 = (int)piVar1;
  *(int *)((int)this + 0x35c) = param_1;
  (**(code **)(**(int **)((int)this + 0x358) + 0x10))();
  (**(code **)(**(int **)((int)this + 0x358) + 0x54))(param_1);
  (**(code **)(**(int **)((int)this + 0x358) + 0x8c))(0);
  (**(code **)(**(int **)((int)this + 0x358) + 0x88))(0x40000000);
  fVar3 = (float10)(**(code **)(**(int **)((int)this + 0x358) + 0x10))();
  if (fVar3 < (float10)unaff_EDI) {
    (**(code **)(**(int **)((int)this + 0x358) + 0x78))(unaff_EDI);
  }
  (**(code **)(*(int *)this + 0x84))(0);
  return;
}


//// FUNCTION FUN_006b5250 @ 006b5250 ////

undefined4 * __thiscall FUN_006b5250(void *this,undefined4 param_1,undefined4 param_2)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca3e8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"ui/buttons.dds",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = 0;
  FUN_007381d0(this,param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)((int)this + 0x470) = param_2;
  *(undefined ***)this = &PTR_FUN_00d3c4e4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3c4cc;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006b5360 @ 006b5360 ////

void __fastcall FUN_006b5360(undefined4 *param_1)

{
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11] = param_1[0x10];
  }
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1[0x10] + 4) = param_1[0x11];
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (0x14 < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_006b53f0 @ 006b53f0 ////

uint __thiscall FUN_006b53f0(void *this,undefined4 param_1)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca416;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x410);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_006b7890(pvVar1,'\x01');
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x60))(2,param_1,0);
  (**(code **)(*piVar2 + 100))(2,param_1);
  iVar5 = *(int *)((int)this + 0x368);
  if (iVar5 != (int)this + 0x374) {
    do {
      pvVar1 = operator_new(0x474);
      if (pvVar1 == (void *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = FUN_006b5250(pvVar1,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 8));
      }
      (**(code **)(*piVar3 + 0x18))(0,&LAB_006b5300,this,"DROPLIST_NEWITEM");
      (**(code **)(*piVar2 + 0xfc))(piVar3);
      iVar5 = *(int *)(iVar5 + 4);
    } while (iVar5 != (int)this + 0x374);
  }
  piVar3 = (int *)FUN_0071b2a0();
  uVar4 = (**(code **)(*piVar3 + 0xc))(piVar2,1);
  ExceptionList = (void *)0xc0000000;
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_006b5500 @ 006b5500 ////

undefined4 * __thiscall FUN_006b5500(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca43e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = (undefined1 *)((int)this + 0x2c);
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x14;
  local_4 = 0;
  FUN_004015d0((undefined4 *)((int)this + 0x20),(char *)*param_2,param_2[1]);
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(void **)((int)this + 0x48) = this;
  FUN_00acdb9e(0xe576ec);
  iVar1 = FUN_0097dda0();
  *(int *)((int)this + 0x4c) = iVar1;
  if (s___AVWListBox_TM___00e576d8[0x12] != '\0') {
    iVar1 = 0x40;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe576ec);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AVWListBox_TM___00e576d8[0x12] = '\0';
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006b5660 @ 006b5660 ////

void __fastcall FUN_006b5660(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  uint uVar5;
  uint unaff_EDI;
  float10 fVar6;
  int *piStack_7c;
  undefined1 *puStack_74;
  int *piStack_70;
  undefined2 *puStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined2 auStack_44 [14];
  undefined4 uStack_28;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca4a3;
  pvStack_c = ExceptionList;
  piStack_70 = (int *)0x6b568e;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x3fc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00833290(puVar2);
  }
  local_4 = 0xffffffff;
  (**(code **)(param_1[0xd1] + 4))();
  param_1[0xd6] = (int)puVar2;
  (**(code **)param_1[0xd1])();
  piVar3 = (int *)FUN_0071b2a0();
  iVar1 = param_1[0xd6];
  fVar6 = (float10)(**(code **)(*piVar3 + 0x10))();
  *(float *)(iVar1 + 0x354) = (float)fVar6;
  puStack_74 = (undefined1 *)0x1;
  piStack_70 = param_1;
  (**(code **)(*(int *)param_1[0xd6] + 0x5c))();
  (**(code **)(*(int *)param_1[0xd6] + 100))();
  pvVar4 = operator_new(0x290);
  uStack_1c = 1;
  if (pvVar4 != (void *)0x0) {
    FUN_005e4290(pvVar4,'\0');
  }
  uStack_1c = 0xffffffff;
  (**(code **)(*(int *)param_1[0xd6] + 0xa0))();
  (**(code **)(*param_1 + 0xc))();
  pvVar4 = operator_new(0x420);
  if (pvVar4 == (void *)0x0) {
    piVar3 = (int *)0x0;
    piStack_7c = param_1;
  }
  else {
    puStack_50 = auStack_44;
    auStack_44[0] = 0;
    uStack_4c = 0;
    uStack_48 = 10;
    uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_50,(wchar_t *)&lpCaption_00d16918,uVar5);
    piStack_70 = (int *)&stack0xffffff9c;
    unaff_EDI = 0x14;
    _strncpy((char *)piStack_70,"button_save.",0xc);
    *(char *)(piStack_70 + 3) = '\0';
    puStack_74 = &stack0xffffff64;
    uStack_28 = 4;
    piStack_7c = (int *)0x3;
    piVar3 = FUN_0069fb10(pvVar4,(int *)&piStack_70,&puStack_50,0x41c00000,0x41c00000,0,0,0x3f800000
                          ,0x3f800000);
  }
  if ((((uint)piStack_7c & 2) != 0) &&
     (piStack_7c = (int *)((uint)piStack_7c & 0xfffffffd), 0x14 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
    _free(piStack_70);
  }
  uStack_28 = 0xffffffff;
  if ((((uint)piStack_7c & 1) != 0) && (10 < uStack_48)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_50);
  }
  (**(code **)(*piVar3 + 0x18))();
  (**(code **)(*piVar3 + 0x18))(5,&LAB_005f37f0,0,"LISTBOX_TEXT");
  (**(code **)(*piVar3 + 100))(1,param_1[0xd6],0);
  (**(code **)(*piVar3 + 0x60))(2,param_1,0);
  (**(code **)(*param_1 + 0xc))(piVar3,2);
  (**(code **)(*param_1 + 0x84))(0);
  ExceptionList = puStack_74;
  return;
}


//// FUNCTION FUN_006b58e0 @ 006b58e0 ////

undefined4 * __thiscall FUN_006b58e0(void *this,byte param_1)

{
  FUN_006b5360(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006b5900 @ 006b5900 ////

void __thiscall FUN_006b5900(void *this,undefined4 *param_1,undefined4 *param_2)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca4bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x50);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_006b5500(this_00,param_1,param_2);
  }
  local_4 = 0xffffffff;
  FUN_006b5110(this,(int)puVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006b5a00 @ 006b5a00 ////

void __fastcall FUN_006b5a00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d3c608;
  while (piVar1 != param_1 + 5) {
    *piVar1 = 0;
    piVar1 = (int *)piVar1[1];
    *(undefined4 *)(*piVar1 + 4) = 0;
  }
  param_1[2] = 0;
  param_1[5] = 0;
  FUN_00406010((int)param_1);
  return;
}


//// FUNCTION FUN_006b5a50 @ 006b5a50 ////

undefined4 * __thiscall FUN_006b5a50(void *this,byte param_1)

{
  FUN_006b5a00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006b5a70 @ 006b5a70 ////

void __fastcall FUN_006b5a70(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *_Memory;
  
  *param_1 = &PTR_FUN_00d3c62c;
  param_1[0x14] = &PTR_FUN_00d3c614;
  if ((undefined4 *)param_1[0xda] != param_1 + 0xdd) {
    do {
      piVar1 = (int *)param_1[0xda];
      _Memory = (undefined4 *)piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      if (_Memory != (undefined4 *)0x0) {
        if ((undefined4 *)_Memory[0x11] != (undefined4 *)0x0) {
          *(undefined4 *)_Memory[0x11] = _Memory[0x10];
        }
        if (_Memory[0x10] != 0) {
          *(undefined4 *)(_Memory[0x10] + 4) = _Memory[0x11];
        }
        _Memory[0x10] = 0;
        _Memory[0x11] = 0;
        if ((uint)_Memory[10] < 0x15) {
          if ((uint)_Memory[2] < 0xb) {
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
                    /* WARNING: Subroutine does not return */
          _free((void *)*_Memory);
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)_Memory[8]);
      }
    } while ((undefined4 *)param_1[0xda] != param_1 + 0xdd);
  }
  FUN_006b5a00(param_1 + 0xd8);
  param_1[0xd1] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd6] = 0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_006b5bb0 @ 006b5bb0 ////

undefined4 * __thiscall FUN_006b5bb0(void *this,byte param_1)

{
  FUN_006b5a70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006b5bd0 @ 006b5bd0 ////

void __fastcall FUN_006b5bd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 5;
  param_1[7] = 0;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[2] = puVar1;
  *puVar1 = param_1 + 1;
  *param_1 = &PTR_LAB_00d3c608;
  return;
}


//// FUNCTION FUN_006b5c30 @ 006b5c30 ////

int * __fastcall FUN_006b5c30(int *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca52a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  *param_1 = (int)&PTR_FUN_00d3c62c;
  param_1[0x14] = (int)&PTR_FUN_00d3c614;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = (int)(param_1 + 0xd1);
  param_1[0xd1] = (int)&PTR_FUN_00d195f8;
  param_1[0xd6] = 0;
  param_1[0xdb] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  piVar1 = param_1 + 0xdd;
  param_1[0xdf] = 0;
  *piVar1 = 0;
  param_1[0xde] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xd8] = (int)&PTR_LAB_00d3c608;
  param_1[0xda] = (int)piVar1;
  *piVar1 = (int)(param_1 + 0xd9);
  param_1[0xd7] = 0;
  local_4 = 4;
  FUN_006b5660(param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_006b5d20 @ 006b5d20 ////

void __fastcall FUN_006b5d20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3c75c;
  param_1[0x14] = &PTR_FUN_00d3c740;
  if (10 < (uint)param_1[0x512]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x510]);
  }
  if (10 < (uint)param_1[0x50a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x508]);
  }
  if (10 < (uint)param_1[0xd6]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd4]);
  }
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_006b5d80 @ 006b5d80 ////

undefined4 * __thiscall FUN_006b5d80(void *this,byte param_1)

{
  FUN_006b5d20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006b5da0 @ 006b5da0 ////

void __fastcall FUN_006b5da0(int param_1)

{
  uint uVar1;
  void *unaff_EBX;
  undefined2 *local_2c;
  uint local_28;
  undefined4 local_24;
  undefined2 local_20 [6];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca550;
  pvStack_c = ExceptionList;
  local_24 = 10;
  local_28 = 0;
  local_20[0] = 0;
  if (*(char *)(param_1 + 0x141c) == '\0') {
    local_2c = local_20;
    ExceptionList = &pvStack_c;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
    local_4 = 1;
    (**(code **)(**(int **)(param_1 + 0x34c) + 0x54))(&local_2c);
  }
  else {
    local_2c = local_20;
    ExceptionList = &pvStack_c;
    uVar1 = FUN_00ace02d(
                        L"<o3><nobr><translate>ONLINE_SCREEN_UPLOADING_ELLIPSIS</translate></nobr></o3>"
                        );
    FUN_004036d0(&local_2c,
                 L"<o3><nobr><translate>ONLINE_SCREEN_UPLOADING_ELLIPSIS</translate></nobr></o3>",
                 uVar1);
    local_4 = 0;
    (**(code **)(**(int **)(param_1 + 0x34c) + 0x54))(&local_2c);
  }
  if (10 < local_28) {
    puStack_8 = (undefined1 *)0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x34c) + 0x84))(0);
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_006b5ea0 @ 006b5ea0 ////

void __fastcall FUN_006b5ea0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  size_t sVar3;
  uint unaff_EBX;
  void *unaff_ESI;
  undefined2 *local_8c;
  uint local_88;
  undefined4 local_84;
  undefined2 local_80 [2];
  void *pvStack_7c;
  void **ppvStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  void *local_6c [2];
  uint local_64;
  void *pvStack_58;
  uint uStack_50;
  undefined4 local_4c [8];
  void *local_2c [2];
  uint local_24;
  void *pvStack_18;
  undefined1 uStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca57b;
  pvStack_c = ExceptionList;
  local_8c = local_80;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 0x141c) = 1;
  local_80[0] = 0;
  local_88 = 0;
  local_84 = 10;
  uVar1 = FUN_00ace02d((wchar_t *)(param_1 + 0x388));
  FUN_004036d0(&local_8c,(wchar_t *)(param_1 + 0x388),uVar1);
  local_4 = 0;
  if (0x12 < local_88) {
    puVar2 = FUN_004211c0(&local_8c,local_6c,0,0x12);
    FUN_004036d0(&local_8c,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    sVar3 = FUN_00ace02d((short *)&DAT_00d3c928);
    FUN_0040cae0(&local_8c,L"...",sVar3);
  }
  puVar2 = FUN_0043bdc0(local_2c,L"<o3><nobr>",&local_8c);
  FUN_0043be60(local_4c,puVar2,L"</nobr></o3>");
  local_4 = CONCAT31(local_4._1_3_,1);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  (**(code **)(**(int **)(param_1 + 0x348) + 0x54))(local_4c);
  (**(code **)(**(int **)(param_1 + 0x348) + 0x84))(0);
  (**(code **)(**(int **)(param_1 + 0x1410) + 0xc0))(0);
  FUN_006d12d0(*(void **)(param_1 + 0x344),param_1);
  if (*(char *)(param_1 + 0x141c) != '\0') {
    ppvStack_78 = local_6c;
    local_6c[0] = (void *)((uint)local_6c[0] & 0xffff0000);
    uStack_74 = 0;
    uStack_70 = 10;
    uVar1 = FUN_00ace02d(
                        L"<o3><nobr><translate>ONLINE_SCREEN_UPLOADING_ELLIPSIS</translate></nobr></o3>"
                        );
    FUN_004036d0(&ppvStack_78,
                 L"<o3><nobr><translate>ONLINE_SCREEN_UPLOADING_ELLIPSIS</translate></nobr></o3>",
                 uVar1);
    uStack_10 = 2;
    (**(code **)(**(int **)(param_1 + 0x34c) + 0x54))(&ppvStack_78);
    uStack_14 = 1;
    if (10 < uStack_74) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_7c);
    }
    (**(code **)(**(int **)(param_1 + 0x34c) + 0x84))(0);
    (**(code **)(**(int **)(param_1 + 0x1414) + 0x20))(1);
    (**(code **)(**(int **)(param_1 + 0x1418) + 0x20))(0);
  }
  if (10 < uStack_50) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_58);
  }
  if (10 < unaff_EBX) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  ExceptionList = pvStack_18;
  return;
}


//// FUNCTION FUN_006b60b0 @ 006b60b0 ////

void __fastcall FUN_006b60b0(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x141c) = 0;
  (**(code **)(**(int **)(param_1 + 0x348) + 0x54))(param_1 + 0x1420);
  (**(code **)(**(int **)(param_1 + 0x348) + 0x84))(0);
  (**(code **)(**(int **)(param_1 + 0x1410) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x1414) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x1418) + 0x20))(1);
  piVar1 = (int *)FUN_006c52c0(*(void **)(param_1 + 0x344),(int *)(param_1 + 0x374),
                               (int *)(param_1 + 0x1460));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc0))(1);
  }
  FUN_006b5da0(param_1);
  return;
}


//// FUNCTION FUN_006b6140 @ 006b6140 ////

void __fastcall FUN_006b6140(int param_1)

{
  *(undefined1 *)(param_1 + 0x141c) = 0;
  FUN_006c5220(*(void **)(param_1 + 0x344),param_1);
  FUN_006b5da0(param_1);
  return;
}


//// FUNCTION FUN_006b6160 @ 006b6160 ////

void __fastcall FUN_006b6160(int param_1)

{
  char cVar1;
  uint uVar2;
  size_t sVar3;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cca5a0;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_00ace02d((wchar_t *)(param_1 + 0x11e8));
  FUN_004036d0(&local_4c,(wchar_t *)(param_1 + 0x11e8),uVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  cVar1 = FUN_009d3590(&local_4c);
  if (cVar1 == '\0') {
    sVar3 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_DELETE_AVI_FAIL</translate>");
    FUN_0040cae0(&local_2c,L"<translate>ONLINE_SCREEN_DELETE_AVI_FAIL</translate>",sVar3);
  }
  FUN_006c3f60(*(void **)(param_1 + 0x344),&local_2c);
  FUN_006d3150(*(void **)(param_1 + 0x344));
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006b6260 @ 006b6260 ////

void __thiscall FUN_006b6260(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  void *unaff_ESI;
  undefined4 local_8c;
  uint uStack_88;
  void *pvStack_70;
  undefined4 local_6c;
  uint uStack_68;
  void *pvStack_50;
  undefined4 local_4c;
  uint uStack_48;
  void *pvStack_30;
  undefined4 local_2c;
  uint uStack_28;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca5d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = FUN_00569d60(&local_2c,param_1);
  local_4 = 0;
  puVar1 = FUN_00568790(&local_4c,puVar1);
  puVar1 = FUN_0043bdc0(&local_6c,
                        L"<o3><nobr><phrasebook><translate>ONLINE_SCREEN_RETRYING</translate><phrase key=time>"
                        ,puVar1);
  puVar1 = FUN_0043be60(&local_8c,puVar1,L"</phrase></phrasebook></nobr></o3>");
  local_4 = CONCAT31(local_4._1_3_,3);
  (**(code **)(**(int **)((int)this + 0x34c) + 0x54))(puVar1);
  if (10 < uStack_88) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_70);
  }
  if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_50);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  (**(code **)(**(int **)((int)this + 0x34c) + 0x84))(0);
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_006b6360 @ 006b6360 ////

void __fastcall FUN_006b6360(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *unaff_ESI;
  ulonglong uVar3;
  undefined2 *local_8c;
  uint local_88;
  undefined4 local_84;
  undefined2 local_80 [8];
  void *pvStack_70;
  undefined4 local_6c;
  uint uStack_68;
  void *pvStack_50;
  undefined4 local_4c;
  uint uStack_48;
  void *pvStack_30;
  undefined4 local_2c;
  uint uStack_28;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca603;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_00acd42c();
  if ((int)uVar3 < 100) {
    puVar1 = FUN_00569df0(&local_2c,(int)uVar3);
    local_4 = 0;
    puVar1 = FUN_0043bdc0(&local_4c,
                          L"<o3><nobr><translate>ONLINE_SCREEN_UPLOADING_ELLIPSIS</translate>",
                          puVar1);
    puVar1 = FUN_0043be60(&local_6c,puVar1,L"%</nobr></o3>");
    local_4 = CONCAT31(local_4._1_3_,2);
    (**(code **)(**(int **)(param_1 + 0x34c) + 0x54))(puVar1);
    if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_70);
    }
    unaff_ESI = pvStack_30;
    if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_50);
    }
  }
  else {
    local_8c = local_80;
    local_80[0] = 0;
    local_88 = 0;
    local_84 = 10;
    uVar2 = FUN_00ace02d(
                        L"<o3><nobr><translate>ONLINE_SCREEN_COMPLETED_UPLOAD_PLEASE_WAIT</translate></nobr></o3>"
                        );
    FUN_004036d0(&local_8c,
                 L"<o3><nobr><translate>ONLINE_SCREEN_COMPLETED_UPLOAD_PLEASE_WAIT</translate></nobr></o3>"
                 ,uVar2);
    local_4 = 3;
    (**(code **)(**(int **)(param_1 + 0x34c) + 0x54))(&local_8c);
    uStack_28 = local_88;
  }
  if (uStack_28 < 0xb) {
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(**(int **)(param_1 + 0x34c) + 0x84))(0);
    ExceptionList = pvStack_14;
    return;
  }
  puStack_8 = (undefined1 *)0xffffffff;
                    /* WARNING: Subroutine does not return */
  _free(unaff_ESI);
}


//// FUNCTION FUN_006b64e0 @ 006b64e0 ////

undefined1 FUN_006b64e0(undefined4 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x141c) = 0;
  FUN_006c5220(*(void **)(param_2 + 0x344),param_2);
  FUN_006b5da0(param_2);
  return 1;
}


//// FUNCTION FUN_006b6530 @ 006b6530 ////

/* WARNING: Removing unreachable block (ram,0x006b6750) */

undefined4 FUN_006b6530(undefined4 param_1,int *param_2)

{
  float fVar1;
  size_t sVar2;
  uint uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float10 fVar6;
  undefined1 *_Memory;
  undefined2 *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80 [10];
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cca61b;
  pvStack_c = ExceptionList;
  local_8c = local_80;
  local_80[0] = 0;
  local_88 = 0;
  local_84 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  sVar2 = FUN_00ace02d(
                      L"<P ALIGN\t= CENTER><o2><nobr><translate>ONLINE_SCREEN_DELETING_LOCAL_MOVIE</translate></nobr></o2></P>"
                      );
  FUN_0040cae0(&local_8c,
               L"<P ALIGN\t= CENTER><o2><nobr><translate>ONLINE_SCREEN_DELETING_LOCAL_MOVIE</translate></nobr></o2></P>"
               ,sVar2);
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  uVar3 = FUN_00ace02d((short *)(param_2 + 0xe2));
  FUN_004036d0(&local_6c,(wchar_t *)(param_2 + 0xe2),uVar3);
  puVar4 = FUN_0043bdc0(local_2c,L"<P ALIGN\t= CENTER><o3>",&local_6c);
  puVar4 = FUN_0043be60(local_4c,puVar4,L"</o3></P>");
  FUN_0040cae0(&local_8c,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (local_24 < 0xb) {
    if (local_64 < 0xb) {
      sVar2 = FUN_00ace02d(
                          L"<br><P ALIGN\t= CENTER><o2><translate>ARE_YOU_SURE_TEXT_TAG</translate></o2></P>"
                          );
      FUN_0040cae0(&local_8c,
                   L"<br><P ALIGN\t= CENTER><o2><translate>ARE_YOU_SURE_TEXT_TAG</translate></o2></P>"
                   ,sVar2);
      pfVar5 = FUN_00726520();
      fVar1 = *pfVar5;
      fVar6 = (float10)(**(code **)(*(int *)param_2[0xd1] + 0x14))();
      (**(code **)((int)fVar1 + 100))
                (1,param_2[0xd1],
                 (float)(fVar6 * (float10)0.5 - (float10)DAT_00e5850c * (float10)0.5));
      fVar1 = *pfVar5;
      fVar6 = (float10)(**(code **)(*param_2 + 0x10))();
      (**(code **)((int)fVar1 + 0x5c))
                (1,param_2,(float)(fVar6 * (float10)0.5 - (float10)DAT_00e58508 * (float10)0.5));
      (**(code **)(*(int *)pfVar5[0xd1] + 0x18))(0,FUN_0071b530,pfVar5,"MOVIEBUTTON_CANCEL");
      (**(code **)(*(int *)pfVar5[0xd1] + 0x18))(5,&LAB_005f37f0,0,"MOVIEBUTTON_CANCEL");
      (**(code **)(*(int *)pfVar5[0xd2] + 0x18))(0,&LAB_006b6510,param_2,"MOVIEBUTTON_OK");
      _Memory = &LAB_005f37f0;
      (**(code **)(*(int *)pfVar5[0xd2] + 0x18))(5,&LAB_005f37f0,0);
      (**(code **)(*(int *)param_2[0xd1] + 0xac))(pfVar5);
      (**(code **)(*(int *)param_2[0xd1] + 0xc))(pfVar5,1);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c[0]);
}


//// FUNCTION FUN_006b6770 @ 006b6770 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_006b6770(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,
            float param_5,float param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 *param_11)

{
  wchar_t *pwVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  size_t sVar6;
  undefined1 *this_00;
  int *piVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  void *unaff_EBX;
  undefined4 *puVar12;
  bool bVar13;
  float10 fVar14;
  code *pcVar15;
  void *_Memory;
  undefined1 *puVar16;
  uint *puStack_63c;
  undefined4 uStack_638;
  uint uStack_634;
  uint uStack_630;
  void *pvStack_62c;
  undefined4 uStack_628;
  float fStack_624;
  uint *puStack_620;
  uint uStack_618;
  uint uStack_614;
  float fStack_610;
  undefined4 uStack_60c;
  float fVar17;
  void *_Memory_00;
  void *_Memory_01;
  uint uVar18;
  undefined4 *puStack_598;
  undefined4 uStack_594;
  wchar_t *pwStack_590;
  undefined4 uStack_58c;
  char *pcStack_578;
  uint uStack_574;
  uint uStack_570;
  char acStack_56c [28];
  undefined4 *puStack_550;
  void *pvStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  wchar_t *pwStack_530;
  uint uStack_52c;
  undefined1 *puStack_528;
  wchar_t awStack_524 [2];
  uint uStack_520;
  void *pvStack_510;
  wchar_t *pwStack_50c;
  uint uStack_508;
  void *local_4f0;
  void *pvStack_4ec;
  undefined4 uStack_4e8;
  uint uStack_4e4;
  undefined4 auStack_4cc [8];
  undefined4 auStack_4ac [8];
  wchar_t awStack_48c [64];
  char acStack_40c [772];
  void *pvStack_108;
  undefined4 uStack_c8;
  undefined4 uStack_8c;
  float fStack_74;
  undefined1 uStack_68;
  float fStack_44;
  undefined1 uStack_40;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca7a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_4f0 = this;
  FUN_007432f0(this);
  *(undefined4 *)((int)this + 0x344) = param_1;
  *(undefined ***)this = &PTR_FUN_00d3c75c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3c740;
  *(undefined4 *)((int)this + 0x350) = (undefined2 *)((int)this + 0x35c);
  *(undefined2 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x358) = 10;
  local_4 = 0;
  FUN_004036d0((undefined4 *)((int)this + 0x350),(wchar_t *)*param_2,param_2[1]);
  puVar5 = (undefined4 *)((int)this + 0x370);
  for (iVar10 = 0x428; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)((int)this + 0x141c) = 0;
  *(undefined2 **)((int)this + 0x1420) = (undefined2 *)((int)this + 0x142c);
  *(undefined2 *)((int)this + 0x142c) = 0;
  *(undefined4 *)((int)this + 0x1424) = 0;
  *(undefined4 *)((int)this + 0x1428) = 10;
  *(undefined2 **)((int)this + 0x1440) = (undefined2 *)((int)this + 0x144c);
  *(undefined2 *)((int)this + 0x144c) = 0;
  *(undefined4 *)((int)this + 0x1444) = 0;
  *(undefined4 *)((int)this + 0x1448) = 10;
  local_4._0_1_ = 3;
  FUN_0073f410(this,param_6);
  FUN_0073f490(this,param_5);
  puVar5 = param_3;
  puVar12 = (undefined4 *)((int)this + 0x370);
  for (iVar10 = 0x428; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)((int)this + 0x1460) = *param_11;
  *(undefined4 *)((int)this + 0x1464) = param_11[1];
  *(undefined4 *)((int)this + 0x1468) = param_11[2];
  puStack_598 = &uStack_58c;
  *(undefined4 *)((int)this + 0x146c) = param_11[3];
  uStack_58c = (uint)uStack_58c._2_2_ << 0x10;
  uStack_594 = 0;
  pwStack_590 = (wchar_t *)0xa;
  uVar4 = FUN_00ace02d((short *)(param_3 + 0x39e));
  FUN_004036d0(&puStack_598,(wchar_t *)(param_3 + 0x39e),uVar4);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_009d4900(&puStack_598);
  if (10 < pwStack_590) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_598);
  }
  _sprintf(acStack_40c,"%.2f");
  pcStack_578 = acStack_56c;
  pcVar11 = acStack_40c;
  acStack_56c[0] = '\0';
  uStack_574 = 0;
  uStack_570 = 0x14;
  do {
    cVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar3 != '\0');
  uVar4 = (int)pcVar11 - (int)(acStack_40c + 1);
  if (0x13 < uVar4) {
    uStack_570 = uVar4 + 0x20 & 0xffffffe0;
    pcStack_578 = _malloc(uStack_570);
  }
  _strncpy(pcStack_578,acStack_40c,uVar4);
  pcStack_578[uVar4] = '\0';
  local_4 = CONCAT31(local_4._1_3_,5);
  uStack_574 = uVar4;
  FUN_009acf60(auStack_4ac,&pcStack_578);
  if (0x14 < uStack_570) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_578);
  }
  pwVar1 = (wchar_t *)((int)this + 0x388);
  pwStack_530 = awStack_524;
  awStack_524[0] = L'\0';
  uStack_52c = 0;
  puStack_528 = &lpType_0000000a;
  uVar4 = FUN_00ace02d(pwVar1);
  FUN_004036d0(&pwStack_530,pwVar1,uVar4);
  if (0x18 < uStack_52c) {
    puVar5 = FUN_004211c0(&pwStack_530,&puStack_598,0,0x18);
    FUN_004036d0(&pwStack_530,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < pwStack_590) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_598);
    }
    sVar6 = FUN_00ace02d((short *)&DAT_00d3c928);
    FUN_0040cae0(&pwStack_530,L"...",sVar6);
  }
  puStack_598 = &uStack_58c;
  uStack_58c = uStack_58c & 0xffff0000;
  uStack_594 = 0;
  pwStack_590 = (wchar_t *)&lpType_0000000a;
  uVar4 = FUN_00ace02d(pwVar1);
  FUN_004036d0(&puStack_598,pwVar1,uVar4);
  puVar5 = FUN_0043bdc0(&pvStack_510,
                        L"<o4><nobr><phrasebook><translate>ONLINE_SCREEN_NAME_TOOLTIP2</translate><phrase key=megs>"
                        ,auStack_4ac);
  puVar5 = FUN_0043be60(&pvStack_4ec,puVar5,L"</phrase><phrase key=title>");
  puVar5 = FUN_00443250(&pcStack_578,puVar5,&puStack_598);
  FUN_0043be60(auStack_4cc,puVar5,L"</phrase></phrasebook></nobr></o4>");
  if (10 < uStack_570) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_578);
  }
  if (10 < uStack_4e4) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_4ec);
  }
  if (10 < uStack_508) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_510);
  }
  if (&lpType_0000000a < pwStack_590) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_598);
  }
  puStack_550 = &uStack_544;
  uStack_544 = (uint)uStack_544._2_2_ << 0x10;
  pvStack_54c = (void *)0x0;
  uStack_548 = 10;
  uVar4 = FUN_00ace02d(L"<table cellspacing=0><tr><td valign=middle align=left width = ");
  FUN_004036d0(&puStack_550,L"<table cellspacing=0><tr><td valign=middle align=left width = ",uVar4)
  ;
  local_4._0_1_ = 10;
  sVar6 = _swprintf(awStack_48c,0xd18f84,SUB84((double)(param_6 - 145.0),0));
  FUN_0040cae0(&puStack_550,awStack_48c,sVar6);
  sVar6 = FUN_00ace02d(L"><nobr><o3>");
  FUN_0040cae0(&puStack_550,L"><nobr><o3>",sVar6);
  FUN_0040cae0(&puStack_550,pwStack_530,uStack_52c);
  this_00 = operator_new(0x420);
  local_4._0_1_ = 0xb;
  if (this_00 == (undefined1 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_0069fb10(this_00,param_4,auStack_4cc,param_5,param_6,param_7,param_8,param_9,
                          param_10);
  }
  *(int **)((int)this + 0x1410) = piVar7;
  uVar18 = 1;
  local_4 = CONCAT31(local_4._1_3_,10);
  (**(code **)(*piVar7 + 0x5c))();
  uVar4 = 1;
  _Memory_01 = this;
  (**(code **)(**(int **)((int)this + 0x1410) + 100))();
  _Memory_00 = this;
  (**(code **)(**(int **)((int)this + 0x1410) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x1410) + 0x18))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x1410));
  (**(code **)(**(int **)((int)this + 0x1410) + 0xc0))();
  puVar5 = operator_new(0x3fc);
  uStack_40 = 0xc;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_00833290(puVar5);
  }
  *(undefined4 **)((int)this + 0x348) = puVar5;
  uStack_40 = 10;
  puVar5 = FUN_0043bdc0(&puStack_528,
                        L"</o3></nobr></td><td valign=middle align=right><nobr><o4><phrasebook><translate>ONLINE_SCREEN_MEG</translate><phrase key=megs>"
                        ,&uStack_4e8);
  uStack_60c = 0x6b6d3a;
  puVar5 = FUN_0043be60(&pvStack_54c,puVar5,L"</phrase></phrasebook></o4></nobr></td></tr></table>")
  ;
  FUN_0040cae0(&uStack_58c,(wchar_t *)*puVar5,puVar5[1]);
  if (10 < uStack_544) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_54c);
  }
  if (10 < uStack_520) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_528);
  }
  (**(code **)(**(int **)((int)this + 0x348) + 0x54))();
  FUN_004036d0((void *)((int)this + 0x1420),pwStack_590,uStack_58c);
  FUN_004036d0((void *)((int)this + 0x1440),pwStack_50c,uStack_508);
  (**(code **)(**(int **)((int)this + 0x348) + 0x84))();
  pcVar11 = *(char **)((int)this + 0x1410);
  (**(code **)(**(int **)((int)this + 0x348) + 0x5c))();
  uStack_60c = *(undefined4 *)((int)this + 0x348);
  fStack_610 = 9.865854e-39;
  (**(code **)(**(int **)((int)this + 0x1410) + 0xc))();
  fStack_610 = 9.86587e-39;
  fVar14 = (float10)(**(code **)(**(int **)((int)this + 0x348) + 0x14))();
  fVar17 = fStack_44 * 0.5;
  fStack_610 = (float)((float10)fVar17 - fVar14 * (float10)0.5);
  uStack_614 = *(uint *)((int)this + 0x1410);
  uStack_618 = 1;
  (**(code **)(**(int **)((int)this + 0x348) + 100))();
  do {
    puStack_620 = (uint *)0x6b6e4d;
    cVar3 = (**(code **)(**(int **)((int)this + 0x348) + 0x50))();
  } while (cVar3 != '\0');
  puStack_620 = (uint *)0x6b6e5b;
  puVar5 = operator_new(0x3fc);
  uStack_68 = 0xd;
  if (puVar5 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_00833290(puVar5);
  }
  *(int **)((int)this + 0x34c) = piVar7;
  uStack_68 = 10;
  puStack_620 = (uint *)0x6b6e92;
  (**(code **)(*piVar7 + 0x84))();
  puStack_620 = DAT_00e57780;
  fStack_624 = *(float *)((int)this + 0x1410);
  uStack_628 = 1;
  pvStack_62c = (void *)0x6b6ead;
  (**(code **)(**(int **)((int)this + 0x34c) + 0x5c))();
  iVar10 = **(int **)((int)this + 0x34c);
  pvStack_62c = (void *)0x6b6ec0;
  fVar14 = (float10)(**(code **)(**(int **)((int)this + 0x348) + 0x14))();
  uStack_630 = *(uint *)((int)this + 0x1410);
  pvStack_62c = (void *)(float)(fVar14 + (float10)fStack_610);
  uStack_634 = 1;
  uStack_638 = 0x6b6eda;
  (**(code **)(iVar10 + 100))();
  puStack_63c = *(uint **)((int)this + 0x34c);
  uStack_638 = 1;
  (**(code **)(**(int **)((int)this + 0x1410) + 0xc))();
  fStack_624 = fStack_74 - (_DAT_00e5777c + _DAT_00e5777c);
  pvVar8 = operator_new(0x420);
  fVar2 = fStack_624;
  if (pvVar8 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puStack_620 = &uStack_614;
    uStack_614 = uStack_614 & 0xffff0000;
    uStack_618 = 10;
    uVar9 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_620,(wchar_t *)&lpCaption_00d16918,uVar9);
    pcVar11 = &stack0xfffffa0c;
    fVar17 = 2.8026e-44;
    _strncpy(pcVar11,"button_quit.",0xc);
    pcVar11[0xc] = '\0';
    uStack_8c = 0x10;
    pvStack_62c = (void *)0x3;
    puVar5 = FUN_0069fb10(pvVar8,(int *)&stack0xfffffa00,&puStack_620,fVar2,fVar2,0,0,0x3f800000,
                          0x3f800000);
  }
  *(undefined4 **)((int)this + 0x1414) = puVar5;
  if ((((uint)pvStack_62c & 2) != 0) &&
     (pvStack_62c = (void *)((uint)pvStack_62c & 0xfffffffd), 0x14 < (uint)fVar17)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar11);
  }
  uStack_8c = 10;
  if ((((uint)pvStack_62c & 1) != 0) &&
     (pvStack_62c = (void *)((uint)pvStack_62c & 0xfffffffe), 10 < uStack_618)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_620);
  }
  _Memory = (void *)0x0;
  puVar16 = this;
  (**(code **)(**(int **)((int)this + 0x1414) + 0x18))();
  uVar9 = 0;
  pcVar11 = (char *)0x5;
  (**(code **)(**(int **)((int)this + 0x1414) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x1414) + 100))();
  (**(code **)(**(int **)((int)this + 0x1414) + 0x60))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x1414));
  (**(code **)(**(int **)((int)this + 0x1414) + 0x20))();
  pvVar8 = operator_new(0x420);
  bVar13 = pvVar8 == (void *)0x0;
  if (bVar13) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    uVar9 = 0x20;
    pcVar11 = _malloc(0x20);
    _strncpy(pcVar11,"ONLINE_SCREEN_DELETE_TIP",0x18);
    pcVar11[0x18] = '\0';
    puStack_63c = &uStack_630;
    uStack_630 = uStack_630 & 0xffffff00;
    uStack_638 = 0;
    uStack_634 = 0x14;
    _strncpy((char *)puStack_63c,"button_delete.",0xe);
    uStack_638 = 0xe;
    *(char *)((int)puStack_63c + 0xe) = '\0';
    uStack_c8 = 0x15;
    puVar5 = FUN_009b5030((undefined4 *)&stack0xfffffa2c,(undefined4 *)&stack0xfffff9a4);
    uStack_c8 = 0x16;
    puVar5 = FUN_0069fb10(pvVar8,(int *)&puStack_63c,puVar5,fVar2,fVar2,0,0,0x3f800000,0x3f800000);
  }
  *(undefined4 **)((int)this + 0x1418) = puVar5;
  if ((!bVar13) && (10 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  if ((!bVar13) && (0x14 < uStack_634)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_63c);
  }
  uStack_c8 = 10;
  if ((!bVar13) && (0x14 < uVar9)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar11);
  }
  pcVar15 = FUN_006b6530;
  (**(code **)(**(int **)((int)this + 0x1418) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x1418) + 0x18))(5,&LAB_005f37f0,0,"REVIEW_DELETE");
  (**(code **)(**(int **)((int)this + 0x1418) + 100))(1,this,pcVar15);
  (**(code **)(**(int **)((int)this + 0x1418) + 0x60))(2,this,0x41200000);
  FUN_0073f6e0(this,*(int **)((int)this + 0x1418));
  if (&lpType_0000000a < puVar16) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (10 < uVar18) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_01);
  }
  if (10 < (uint)fStack_624) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_62c);
  }
  if (&lpType_0000000a < this_00) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  ExceptionList = pvStack_108;
  return this;
}


//// FUNCTION FUN_006b7330 @ 006b7330 ////

void __fastcall FUN_006b7330(int *param_1)

{
  WWindow_Tick(param_1);
  (**(code **)(*param_1 + 0x6c))();
  if ((*(byte *)(param_1 + 0xf0) & 1) != 0) {
    (**(code **)(*param_1 + 4))();
  }
  param_1[0xf0] = param_1[0xf0] | 1;
  return;
}


//// FUNCTION FUN_006b7360 @ 006b7360 ////

int * __thiscall FUN_006b7360(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_006b73a0 @ 006b73a0 ////

undefined1 __fastcall FUN_006b73a0(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x218);
  while( true ) {
    if ((bVar1 & 2) != 0) {
      return 1;
    }
    param_1 = *(int *)(param_1 + 0x3d8);
    if (param_1 == 0) break;
    bVar1 = *(byte *)(param_1 + 0x218);
  }
  return 0;
}


//// FUNCTION FUN_006b73d0 @ 006b73d0 ////

undefined1 __fastcall FUN_006b73d0(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x218);
  while( true ) {
    if ((bVar1 & 8) != 0) {
      return 1;
    }
    param_1 = *(int *)(param_1 + 0x3d8);
    if (param_1 == 0) break;
    bVar1 = *(byte *)(param_1 + 0x218);
  }
  return 0;
}


//// FUNCTION FUN_006b7400 @ 006b7400 ////

undefined1 __fastcall FUN_006b7400(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((*(byte *)(param_1 + 0x218) & 1) == 0) {
    while (param_1 = *(int *)(param_1 + 0x3d8), param_1 != 0) {
      if ((*(byte *)(param_1 + 0x218) & 1) != 0) {
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


//// FUNCTION FUN_006b7430 @ 006b7430 ////

undefined4 __fastcall FUN_006b7430(int param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined3 extraout_var;
  
  *(uint *)(param_1 + 0x370) = *(uint *)(param_1 + 0x370) & 0xfffffffd;
  cVar1 = FUN_007402d0(param_1);
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 0x370) & 2) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(uint *)(param_1 + 0x370) = *(uint *)(param_1 + 0x370) ^ (*(uint *)(param_1 + 0x370) ^ uVar3) & 1
  ;
  cVar2 = FUN_00553f70(0x73);
  if (cVar2 != '\0') {
    if ((*(byte *)(param_1 + 0x1c8) & 2) == 0) {
      if (*(int *)(param_1 + 0x388) == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = FUN_006b73a0(*(int *)(param_1 + 0x388));
      }
    }
    else {
      cVar2 = '\x01';
    }
    *(uint *)(param_1 + 0x370) =
         *(uint *)(param_1 + 0x370) ^ ((uint)(cVar2 == '\0') ^ *(uint *)(param_1 + 0x370)) & 1;
  }
  cVar2 = FUN_00553f70(0x74);
  uVar3 = CONCAT31(extraout_var,cVar2);
  if (cVar2 != '\0') {
    if ((*(byte *)(param_1 + 0x1c8) & 8) == 0) {
      if (*(int *)(param_1 + 0x388) == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = FUN_006b73d0(*(int *)(param_1 + 0x388));
      }
    }
    else {
      cVar2 = '\x01';
    }
    uVar3 = *(uint *)(param_1 + 0x370) ^ ((uint)(cVar2 == '\0') ^ *(uint *)(param_1 + 0x370)) & 1;
    *(uint *)(param_1 + 0x370) = uVar3;
  }
  return CONCAT31((int3)(uVar3 >> 8),cVar1);
}


//// FUNCTION FUN_006b75c0 @ 006b75c0 ////

void __thiscall FUN_006b75c0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x3dc) + 4))();
  *(undefined4 *)((int)this + 0x3f0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x3dc))();
  return;
}


//// FUNCTION FUN_006b75f0 @ 006b75f0 ////

void __fastcall FUN_006b75f0(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_006b7620 @ 006b7620 ////

void __thiscall FUN_006b7620(void *this,int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x3d8);
  if (((iVar4 == 0) ||
      (((*(byte *)(iVar4 + 0x218) & 1) == 0 &&
       ((*(int *)(iVar4 + 0x3d8) == 0 ||
        (cVar2 = FUN_006b7400(*(int *)(iVar4 + 0x3d8)), cVar2 == '\0')))))) &&
     (iVar4 = *(int *)((int)this + 0x124), iVar4 != (int)this + 0x130)) {
    do {
      piVar3 = (int *)FUN_00ace790(*(int **)(iVar4 + 8),0,&TM::WWindow::RTTI_Type_Descriptor,
                                   &TM::WMenuButton::RTTI_Type_Descriptor,0);
      if ((piVar3 != (int *)0x0) &&
         ((**(code **)(*piVar3 + 0xfc))(piVar3 == param_1), piVar3 == param_1)) {
        iVar1 = piVar3[0x122];
        (**(code **)(*(int *)((int)this + 0x3c4) + 4))();
        *(int *)((int)this + 0x3d8) = iVar1;
        (*(code *)**(undefined4 **)((int)this + 0x3c4))();
      }
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != (int)this + 0x130);
  }
  return;
}


//// FUNCTION FUN_006b76d0 @ 006b76d0 ////

uint __thiscall FUN_006b76d0(void *this,int *param_1)

{
  uint uVar1;
  
  if (*(int **)((int)this + 0x40c) != param_1) {
    (**(code **)(*(int *)((int)this + 0x3f8) + 4))();
    *(int **)((int)this + 0x40c) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0x3f8))();
    *(undefined4 *)((int)this + 0x3f4) = 4;
  }
  uVar1 = *(int *)((int)this + 0x3f4) - 1;
  *(uint *)((int)this + 0x3f4) = uVar1;
  if ((int)uVar1 < 1) {
    uVar1 = FUN_006b7620(this,param_1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_006b7730 @ 006b7730 ////

undefined1 __thiscall FUN_006b7730(void *this,int *param_1)

{
  FUN_006b7620(this,param_1);
  *(uint *)((int)this + 0x3c0) = *(uint *)((int)this + 0x3c0) | 2;
  if (*(void **)((int)this + 0x3f0) != (void *)0x0) {
    FUN_006b7730(*(void **)((int)this + 0x3f0),param_1);
  }
  return 1;
}


//// FUNCTION FUN_006b7760 @ 006b7760 ////

void __fastcall FUN_006b7760(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d3d168;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_006b7790 @ 006b7790 ////

void __fastcall FUN_006b7790(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_006b77b0 @ 006b77b0 ////

void __fastcall FUN_006b77b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3d168;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006b7890 @ 006b7890 ////

undefined4 * __thiscall FUN_006b7890(void *this,char param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca7ed;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b4f50(this,1,1);
  *(undefined ***)this = &PTR_FUN_00d3d194;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3d178;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 **)((int)this + 0x3d0) = (undefined4 *)((int)this + 0x3c4);
  *(undefined4 *)((int)this + 0x3c4) = &PTR_FUN_00d3d168;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 **)((int)this + 1000) = (undefined4 *)((int)this + 0x3dc);
  *(undefined4 *)((int)this + 0x3dc) = &PTR_FUN_00d3d168;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 **)((int)this + 0x404) = (undefined4 *)((int)this + 0x3f8);
  *(undefined4 *)((int)this + 0x3f8) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x40c) = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  this_00 = operator_new(0x290);
  local_4._0_1_ = 4;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_005e4290(this_00,'\x01');
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0073fae0(this,puVar2);
  *(uint *)((int)this + 0x34c) = *(uint *)((int)this + 0x34c) | 1;
  *(uint *)((int)this + 0x3c0) = *(uint *)((int)this + 0x3c0) & 0xfffffffa;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  puVar2 = DAT_0104dc28;
  if (param_1 != '\0') {
    if (DAT_0104dc28 != (undefined4 *)0x0) {
      iVar1 = DAT_0104dc28[0x12];
      DAT_0104dc28[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104dc14[1])();
      DAT_0104dc28 = (undefined4 *)0x0;
      (*(code *)*DAT_0104dc14)();
    }
    (*(code *)DAT_0104dc14[1])();
    DAT_0104dc28 = this;
    (*(code *)*DAT_0104dc14)();
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006b7a30 @ 006b7a30 ////

int __thiscall FUN_006b7a30(void *this,undefined4 *param_1)

{
  void *this_00;
  int *piVar1;
  void *unaff_ESI;
  undefined1 *_Memory;
  undefined1 *puVar2;
  int local_2c [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca813;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00568870(local_2c,param_1);
  local_4 = 0;
  FUN_004073f0(local_2c,"_SUBMENU",8);
  FUN_0045f450(local_2c);
  this_00 = operator_new(0x48c);
  local_4._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_006b7f00(this_00,param_1,(int)this);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  puVar2 = this;
  (**(code **)(*piVar1 + 0x18))(0,&LAB_006b7840,this,local_2c[0]);
  _Memory = &LAB_005f37f0;
  (**(code **)(*piVar1 + 0x18))(5,&LAB_005f37f0,0);
  (**(code **)(*(int *)this + 0xfc))(piVar1);
  if (&DAT_00000014 < puVar2) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = unaff_ESI;
  return piVar1[0x122];
}


//// FUNCTION FUN_006b7b10 @ 006b7b10 ////

undefined4 * __thiscall FUN_006b7b10(void *this,byte param_1)

{
  FUN_006b7b30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006b7b30 @ 006b7b30 ////

void __fastcall FUN_006b7b30(undefined4 *param_1)

{
  param_1[0xfe] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x100] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x100] = param_1[0xff];
  }
  if (param_1[0xff] != 0) {
    *(undefined4 *)(param_1[0xff] + 4) = param_1[0x100];
  }
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x103] = 0;
  if ((undefined4 *)param_1[0x100] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x100] = param_1[0xff];
  }
  if (param_1[0xff] != 0) {
    *(undefined4 *)(param_1[0xff] + 4) = param_1[0x100];
  }
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0xf7] = &PTR_FUN_00d3d168;
  if ((undefined4 *)param_1[0xf9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf9] = param_1[0xf8];
  }
  if (param_1[0xf8] != 0) {
    *(undefined4 *)(param_1[0xf8] + 4) = param_1[0xf9];
  }
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfc] = 0;
  if ((undefined4 *)param_1[0xf9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf9] = param_1[0xf8];
  }
  if (param_1[0xf8] != 0) {
    *(undefined4 *)(param_1[0xf8] + 4) = param_1[0xf9];
  }
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xf1] = &PTR_FUN_00d3d168;
  if ((undefined4 *)param_1[0xf3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf3] = param_1[0xf2];
  }
  if (param_1[0xf2] != 0) {
    *(undefined4 *)(param_1[0xf2] + 4) = param_1[0xf3];
  }
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf6] = 0;
  if ((undefined4 *)param_1[0xf3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf3] = param_1[0xf2];
  }
  if (param_1[0xf2] != 0) {
    *(undefined4 *)(param_1[0xf2] + 4) = param_1[0xf3];
  }
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  FUN_006b4e70(param_1);
  return;
}


//// FUNCTION FUN_006b7d30 @ 006b7d30 ////

void __fastcall FUN_006b7d30(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca82b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0x45] = param_1[0x45] & 0xfffffffd;
  this = operator_new(0x410);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_006b7890(this,'\0');
  }
  param_1[0x122] = (int)puVar1;
  puVar1[0x12] = puVar1[0x12] + 1;
  local_4 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x122] + 0x5c))(2,param_1,0);
  (**(code **)(*(int *)param_1[0x122] + 100))(1,param_1,0);
  (**(code **)(*(int *)param_1[0x122] + 0x20))();
  FUN_006b75c0((void *)param_1[0x122],param_1[0x121]);
  (**(code **)(*param_1 + 0xc))(param_1[0x122],1);
  ExceptionList = (void *)0x0;
  return;
}


//// FUNCTION FUN_006b7e00 @ 006b7e00 ////

void __thiscall FUN_006b7e00(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  
  if (*(int **)((int)this + 0x488) != (int *)0x0) {
    cVar3 = (**(code **)(**(int **)((int)this + 0x488) + 0x24))();
    cVar5 = (char)param_1;
    if ((cVar3 != cVar5) &&
       ((**(code **)(**(int **)((int)this + 0x488) + 0x20))(param_1), cVar5 != '\0')) {
      (**(code **)(**(int **)((int)this + 0x488) + 0x5c))(2,this,0);
      do {
        cVar3 = (**(code **)(**(int **)((int)this + 0x488) + 0x50))(1);
      } while (cVar3 != '\0');
      iVar1 = *(int *)((int)this + 0x488);
      iVar4 = FUN_0071b2a0();
      if (*(float *)(iVar4 + 0x108) < *(float *)(iVar1 + 0x108)) {
        (**(code **)(**(int **)((int)this + 0x488) + 0x60))(1,this,0);
        do {
          cVar3 = (**(code **)(**(int **)((int)this + 0x488) + 0x50))(1);
        } while (cVar3 != '\0');
      }
    }
    iVar1 = *(int *)((int)this + 0x484);
    if (iVar1 != 0) {
      if (cVar5 != '\0') {
        uVar2 = *(undefined4 *)((int)this + 0x488);
        (**(code **)(*(int *)(iVar1 + 0x3c4) + 4))();
        *(undefined4 *)(iVar1 + 0x3d8) = uVar2;
        (*(code *)**(undefined4 **)(iVar1 + 0x3c4))();
        return;
      }
      if (*(int *)(iVar1 + 0x3d8) == *(int *)((int)this + 0x488)) {
        (**(code **)(*(int *)(iVar1 + 0x3c4) + 4))();
        *(undefined4 *)(iVar1 + 0x3d8) = 0;
        (*(code *)**(undefined4 **)(iVar1 + 0x3c4))();
      }
    }
  }
  return;
}


//// FUNCTION FUN_006b7f00 @ 006b7f00 ////

int * __thiscall FUN_006b7f00(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca85e;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"ui/buttons.dds",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = 0;
  FUN_007381d0(this,param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  piVar1 = (int *)((int)this + 0x470);
  *(undefined ***)this = &PTR_FUN_00d3d2e4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d3d2c8;
  *(undefined4 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(int **)((int)this + 0x47c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d3d168;
  *(undefined4 *)((int)this + 0x484) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  (**(code **)(*piVar1 + 4))();
  *(int *)((int)this + 0x484) = param_2;
  (**(code **)*piVar1)();
  FUN_006b7d30(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006b7ff0 @ 006b7ff0 ////

void __fastcall FUN_006b7ff0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cca886;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d3d2e4;
  param_1[0x14] = &PTR_LAB_00d3d2c8;
  puVar2 = (undefined4 *)param_1[0x122];
  local_4 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x122] = 0;
  }
  param_1[0x11c] = &PTR_FUN_00d3d168;
  if ((undefined4 *)param_1[0x11e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11e] = param_1[0x11d];
  }
  if (param_1[0x11d] != 0) {
    *(undefined4 *)(param_1[0x11d] + 4) = param_1[0x11e];
  }
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x121] = 0;
  if ((undefined4 *)param_1[0x11e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11e] = param_1[0x11d];
  }
  if (param_1[0x11d] != 0) {
    *(undefined4 *)(param_1[0x11d] + 4) = param_1[0x11e];
  }
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  local_4 = 0xffffffff;
  FUN_005f3230(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006b80e0 @ 006b80e0 ////

undefined4 * __thiscall FUN_006b80e0(void *this,byte param_1)

{
  FUN_006b7ff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006b8100 @ 006b8100 ////

void __thiscall FUN_006b8100(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x3ac) + 0x54))(param_1);
                    /* WARNING: Could not recover jumptable at 0x006b8124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x3ac) + 0x84))();
  return;
}


//// FUNCTION FUN_006b8130 @ 006b8130 ////

undefined4 * __fastcall FUN_006b8130(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  undefined4 uVar9;
  DWORD dwLanguageId;
  char **lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  char *pcStack_9c;
  undefined1 *puStack_98;
  void *local_80 [2];
  undefined4 *local_78;
  ushort *local_74;
  undefined4 uStack_70;
  uint uStack_6c;
  ushort auStack_68 [10];
  undefined2 *puStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined2 auStack_48 [14];
  undefined4 uStack_2c;
  undefined1 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca8f8;
  pvStack_c = ExceptionList;
  local_80[0] = (void *)0x0;
  puStack_98 = (undefined1 *)0x6b815e;
  ExceptionList = &pvStack_c;
  local_78 = param_1;
  FUN_006889c0(param_1,'\0');
  local_4 = 0;
  *param_1 = &PTR_FUN_00d3d424;
  param_1[0x14] = &PTR_FUN_00d3d40c;
  puStack_98 = (undefined1 *)0x6b817c;
  local_74 = operator_new(0x3fc);
  local_4._0_1_ = 1;
  if (local_74 == (ushort *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00833290((undefined4 *)local_74);
  }
  param_1[0xeb] = puVar2;
  puVar2[0xd5] = 0x43be0000;
  puStack_98 = (undefined1 *)param_1[0xdb];
  pcStack_9c = (char *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*(int *)param_1[0xeb] + 0x5c))();
  (**(code **)(*(int *)param_1[0xeb] + 100))();
  (**(code **)(*(int *)param_1[0xdb] + 0xc))();
  pcStack_9c = (char *)0x0;
  local_80[0] = (void *)((uint)local_80[0] & 0xffffff00);
  _strncpy((char *)local_80,"",0);
                    /* WARNING: Ignoring partial resolution of indirect */
  local_80[0]._0_1_ = 0;
  Arguments = (va_list *)0x0;
  nSize = 0;
  lpBuffer = &pcStack_9c;
  dwLanguageId = 0x400;
  uStack_24 = 2;
  DVar3 = GetLastError();
  DVar3 = FormatMessageA(0x1300,(LPCVOID)0x0,DVar3,dwLanguageId,(LPSTR)lpBuffer,nSize,Arguments);
  if (DVar3 != 0) {
    pcVar4 = pcStack_9c;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&stack0xffffff74,pcStack_9c,(int)pcVar4 - (int)(pcStack_9c + 1));
  }
  LocalFree(pcStack_9c);
  FUN_00568790(&uStack_4c,(undefined4 *)&stack0xffffff74);
  uStack_24 = 3;
  (**(code **)(*(int *)param_1[0xeb] + 0x54))();
  (**(code **)(*(int *)param_1[0xeb] + 0x84))();
  if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_54);
  }
  local_74 = auStack_68;
  auStack_68[0] = 0;
  uStack_70 = 0;
  uStack_6c = 10;
  uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_74,(wchar_t *)&lpCaption_00d16918,uVar5);
  uStack_2c._0_1_ = 4;
  FUN_006888d0(param_1,&local_74);
  uStack_2c = CONCAT31(uStack_2c._1_3_,2);
  if (10 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  FUN_006884f0(param_1,0.0);
  pcVar4 = operator_new(0x420);
  pcStack_9c = pcVar4;
  if (pcVar4 == (char *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puStack_54 = auStack_48;
    auStack_48[0] = 0;
    uStack_50 = 0;
    uStack_4c = 10;
    uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_54,(wchar_t *)&lpCaption_00d16918,uVar5);
    local_74 = auStack_68;
    auStack_68[0] = auStack_68[0] & 0xff00;
    uStack_70 = 0;
    uStack_6c = 0x14;
    _strncpy((char *)local_74,"button_quit.",0xc);
    uStack_70 = 0xc;
    *(char *)(local_74 + 6) = '\0';
    puStack_98 = &stack0xffffff38;
    uStack_2c = 7;
    puVar2 = FUN_0069fb10(pcVar4,(int *)&local_74,&puStack_54,0x42400000,0x42400000,0,0,0x3f800000,
                          0x3f800000);
  }
  param_1[0xea] = puVar2;
  if ((pcVar4 != (char *)0x0) && (0x14 < uStack_6c)) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  uStack_2c = 2;
  if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_54);
  }
  (**(code **)(*(int *)param_1[0xea] + 0x5c))();
  (**(code **)(*(int *)param_1[0xea] + 0x68))(2,param_1);
  uVar5 = param_1[0xea];
  uVar9 = 1;
  FUN_006884e0((int)param_1);
  puVar2 = param_1;
  (**(code **)(*(int *)param_1[0xea] + 0x18))
            (0,FUN_0071b530,param_1,"FRONTEND_ERROR_CLOSEDIALOGUE",uVar5,uVar9);
  (**(code **)(*(int *)param_1[0xea] + 0x18))(5,&LAB_005f37f0,0,"FRONTEND_ERROR_CLOSEDIALOGUE");
  FUN_0073e4e0(param_1,0x43c80000);
  fVar8 = ((float)DAT_00e67b84 - 400.0) * 0.5;
  iVar6 = FUN_0071b2a0();
  FUN_00741940(param_1,1,iVar6,fVar8);
  fVar8 = ((float)DAT_00e67b88 - 200.0) * 0.5;
  iVar6 = FUN_0071b2a0();
  FUN_00741b60(param_1,1,iVar6,fVar8);
  piVar7 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar7 + 0xc))(param_1,1);
  piVar7 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar7 + 0xac))(param_1);
  if (uVar5 < 0x15) {
    ExceptionList = local_80[0];
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(puVar2);
}


//// FUNCTION FUN_006b8570 @ 006b8570 ////

undefined4 * __thiscall FUN_006b8570(void *this,byte param_1)

{
  thunk_FUN_00667fe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006b85a0 @ 006b85a0 ////

undefined4 * FUN_006b85a0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca91b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x3b0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_006b8130(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_006b8670 @ 006b8670 ////

int * __thiscall FUN_006b8670(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_006b86b0 @ 006b86b0 ////

int * __thiscall FUN_006b86b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_006b8770 @ 006b8770 ////

void __fastcall FUN_006b8770(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_006b8790 @ 006b8790 ////

void __fastcall FUN_006b8790(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_006b87c0 @ 006b87c0 ////

void __fastcall FUN_006b87c0(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_006b87f0 @ 006b87f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006b87f0(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint *puVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar7 = (uint *)((int)this + 0x3b0);
  if ((float)*(longlong *)((int)this + 0x3b0) * 1.1920929e-07 == 0.0) {
    uVar1 = *param_1;
    uVar2 = *puVar7;
    *puVar7 = uVar2 + uVar1;
    *(uint *)((int)this + 0x3b4) =
         *(int *)((int)this + 0x3b4) + param_1[1] + (uint)CARRY4(uVar2,uVar1);
    FUN_00471b10((longlong *)puVar7);
  }
  local_30 = FUN_00acd42c();
  FUN_00471b10(&local_30);
  *(float *)((int)this + 0x378) = (float)(longlong)local_30 * 1.1920929e-07;
  if (*(int *)((int)this + 0x390) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x390) + 0xc0) = *(undefined4 *)((int)this + 0x378);
  }
  plVar9 = &local_30;
  pvVar3 = (void *)FUN_005b2bc0(*(int *)((int)this + 0x374));
  puVar4 = (uint *)FUN_005cd100(pvVar3,plVar9);
  puVar7 = (uint *)((int)this + 0x3b8);
  *puVar7 = *puVar4;
  *(uint *)((int)this + 0x3bc) = puVar4[1];
  FUN_00471b10((longlong *)puVar7);
  if ((10.0 <= (float)*(longlong *)puVar7 * 1.1920929e-07) && (*(char *)((int)this + 0x3c8) == '\0')
     ) {
    *(undefined1 *)((int)this + 0x3c8) = 1;
    FUN_0041c9c0(&local_28,"HUD_MONEY_ABBREVIATION_UP");
    puVar10 = &DAT_00d17518;
    iVar8 = 0;
    puVar4 = &local_28;
    local_28 = local_28 & 0xfffffffe;
    iVar6 = 2;
    pvVar3 = (void *)FUN_004f3b20();
    FUN_004f3270(pvVar3,iVar6,(byte *)puVar4,iVar8,puVar10);
  }
  puVar4 = (uint *)((int)this + 0x3c0);
  if ((*(int *)((int)this + 0x3c4) <= *(int *)((int)this + 0x3bc)) &&
     ((*(int *)((int)this + 0x3c4) < *(int *)((int)this + 0x3bc) || (*puVar4 <= *puVar7)))) {
    bVar5 = CARRY4(*puVar4,DAT_0104dc38);
    *puVar4 = *puVar4 + DAT_0104dc38;
    *(uint *)((int)this + 0x3c4) = *(int *)((int)this + 0x3c4) + DAT_0104dc3c + (uint)bVar5;
    FUN_00471b10((longlong *)puVar4);
    local_30 = 0;
    if (*(void **)((int)this + 0x390) == (void *)0x0) {
      local_30 = CONCAT44((*(float *)((int)this + 0xe4) - *(float *)((int)this + 0x9c)) * 0.5 +
                          *(float *)((int)this + 0x9c),
                          (*(float *)((int)this + 0x108) - *(float *)((int)this + 0xc0)) * 0.5 +
                          *(float *)((int)this + 0xc0));
    }
    else {
      FUN_005e9f10(*(void **)((int)this + 0x390),(undefined4 *)&local_30);
    }
    FUN_00747290(*(void **)((int)this + 0x2d4),&local_30);
    FUN_005ef5b0(*(void **)((int)this + 0x3a8),(undefined4 *)&local_30);
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_20 = 0xffffffff;
    local_24 = FUN_009b01a0("HUD_MONEY_ABBREVIATION_UP");
    puVar10 = &DAT_00d17518;
    iVar8 = 0;
    puVar7 = &local_28;
    local_28 = local_28 & 0xfffffffe;
    iVar6 = 2;
    pvVar3 = (void *)FUN_004f3b20();
    FUN_004f3270(pvVar3,iVar6,(byte *)puVar7,iVar8,puVar10);
  }
  return;
}


//// FUNCTION StarRatingUI_Constructor @ 006b8a70 ////

void StarRatingUI_Constructor(void)

{
  undefined8 local_34;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca948;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"interface",9);
  local_28 = 9;
  local_2c[9] = '\0';
  local_4 = 0;
  FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"earning_milestones",0x12);
  local_28 = 0x12;
  local_2c[0x12] = '\0';
  local_4 = 1;
  FUN_00558610(DAT_00f88624,&local_2c,0.0);
  local_34 = FUN_00acd42c();
  FUN_00471b10(&local_34);
  DAT_0104dc3c = local_34._4_4_;
  DAT_0104dc38 = (undefined4)local_34;
  FUN_00471b10((longlong *)&DAT_0104dc38);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ui_ratemethod",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 2;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006b8c50 @ 006b8c50 ////

void __fastcall FUN_006b8c50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3d550;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006b8cd0 @ 006b8cd0 ////

void __fastcall FUN_006b8cd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_006b8cf0 @ 006b8cf0 ////

void __fastcall FUN_006b8cf0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3d560;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006b8d40 @ 006b8d40 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall
FUN_006b8d40(int *param_1,undefined4 *param_2,ulonglong param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  undefined3 uVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined2 unaff_DI;
  ulonglong *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cca9a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0069d820(param_1,param_2,(undefined4)param_3,param_3._4_4_,param_4,param_5);
  *param_1 = (int)&PTR_FUN_00d3d58c;
  param_1[0x14] = (int)&PTR_FUN_00d3d570;
  piVar1 = param_1 + 0xd9;
  param_1[0xdb] = 0;
  *piVar1 = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = (int)(param_1 + 0xd8);
  param_1[0xd8] = (int)&PTR_FUN_00d18c3c;
  param_1[0xdd] = param_6;
  if (param_6 != 0) {
    piVar2 = (int *)(param_6 + 0x18);
    param_1[0xda] = (int)piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = param_1 + 0xdf;
  param_1[0xe2] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = (int)piVar1;
  *piVar1 = (int)&PTR_FUN_00d3d550;
  param_1[0xe4] = 0;
  piVar2 = param_1 + 0xe5;
  param_1[0xe8] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = (int)piVar2;
  *piVar2 = (int)&PTR_FUN_00d3d560;
  param_1[0xea] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  local_4._1_3_ = 0;
  uVar4 = local_4._1_3_;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  if (0 < DAT_0105be08) {
    pvVar5 = operator_new(0xf8);
    local_4._0_1_ = 4;
    if (pvVar5 == (void *)0x0) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      param_2 = FUN_005ea810(pvVar5,param_1,0x41000000,0x42000000,0);
    }
    local_4._0_1_ = 3;
    (**(code **)(*piVar1 + 4))();
    param_1[0xe4] = (int)param_2;
    (**(code **)*piVar1)();
    *(int *)(param_1[0xe4] + 0x48) = *(int *)(param_1[0xe4] + 0x48) + 1;
    FUN_0073e510(param_1,param_1[0xe4]);
    uVar4 = local_4._1_3_;
  }
  local_4._1_3_ = uVar4;
  puVar8 = &param_3;
  pvVar5 = (void *)FUN_005b2bc0(param_1[0xdd]);
  plVar6 = FUN_005cd100(pvVar5,(longlong *)puVar8);
  plVar3 = (longlong *)(param_1 + 0xee);
  *(int *)plVar3 = (int)*plVar6;
  param_1[0xef] = *(int *)((int)plVar6 + 4);
  FUN_00471b10(plVar3);
  FUN_00ad1180((double)(((float)*plVar3 * 1.1920929e-07) / ((float)_DAT_0104dc38 * 1.1920929e-07)),
               unaff_DI);
  param_3 = FUN_00acd42c();
  FUN_00471b10((longlong *)&param_3);
  param_1[0xf0] = (undefined4)param_3;
  param_1[0xf1] = param_3._4_4_;
  FUN_00471b10((longlong *)(param_1 + 0xf0));
  param_3 = FUN_00acd42c();
  FUN_00471b10((longlong *)&param_3);
  param_1[0xec] = (undefined4)param_3;
  param_1[0xed] = param_3._4_4_;
  FUN_00471b10((longlong *)(param_1 + 0xec));
  puVar7 = operator_new(0x78);
  local_4._0_1_ = 5;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_005ef5e0(puVar7);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  (**(code **)(*piVar2 + 4))();
  param_1[0xea] = (int)puVar7;
  (**(code **)*piVar2)();
  *(undefined1 *)(param_1 + 0xf2) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_006b8fd0 @ 006b8fd0 ////

void __fastcall FUN_006b8fd0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cca9f2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d3d58c;
  param_1[0x14] = &PTR_FUN_00d3d570;
  puVar2 = (undefined4 *)param_1[0xe4];
  local_4 = 3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xdf] + 4))();
    param_1[0xe4] = 0;
    (**(code **)param_1[0xdf])();
  }
  puVar2 = (undefined4 *)param_1[0xea];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xe5] + 4))();
    param_1[0xea] = 0;
    (**(code **)param_1[0xe5])();
  }
  param_1[0xe5] = &PTR_FUN_00d3d560;
  if ((undefined4 *)param_1[0xe7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe7] = param_1[0xe6];
  }
  if (param_1[0xe6] != 0) {
    *(undefined4 *)(param_1[0xe6] + 4) = param_1[0xe7];
  }
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xea] = 0;
  if ((undefined4 *)param_1[0xe7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe7] = param_1[0xe6];
  }
  if (param_1[0xe6] != 0) {
    *(undefined4 *)(param_1[0xe6] + 4) = param_1[0xe7];
  }
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xdf] = &PTR_FUN_00d3d550;
  if ((undefined4 *)param_1[0xe1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe1] = param_1[0xe0];
  }
  if (param_1[0xe0] != 0) {
    *(undefined4 *)(param_1[0xe0] + 4) = param_1[0xe1];
  }
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe4] = 0;
  if ((undefined4 *)param_1[0xe1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe1] = param_1[0xe0];
  }
  if (param_1[0xe0] != 0) {
    *(undefined4 *)(param_1[0xe0] + 4) = param_1[0xe1];
  }
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xd8] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0xda] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xda] = param_1[0xd9];
  }
  if (param_1[0xd9] != 0) {
    *(undefined4 *)(param_1[0xd9] + 4) = param_1[0xda];
  }
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdd] = 0;
  if ((undefined4 *)param_1[0xda] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xda] = param_1[0xd9];
  }
  if (param_1[0xd9] != 0) {
    *(undefined4 *)(param_1[0xd9] + 4) = param_1[0xda];
  }
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  local_4 = 0xffffffff;
  FUN_0069cf00(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006b91e0 @ 006b91e0 ////

undefined4 * __thiscall FUN_006b91e0(void *this,byte param_1)

{
  FUN_006b8fd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION WMoviePlayer_Constructor @ 006b9200 ////

undefined4 * __fastcall WMoviePlayer_Constructor(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Confirmed via RTTI COL walk (vtable1 0xD3D6BC / vtable2 0xD3D6A0 -> COLs at
                       0xDC2218/0xDC21DC -> TD 0xE56D74 ".?AVWMoviePlayer@TM@@"). This is the real
                       "watch your finished movie" screen. Wraps an already-named
                       MediaPlayer_Constructor() instance for actual video decode/playback --
                       consistent with the Windows Media Format SDK usage found in the initial
                       binary recon (WMCreateSyncReader import). Shares most of its secondary vtable
                       with TM::WAdvMovieMaker (same base window-interface class), differing mainly
                       in its own Tick and a couple of overrides. Not yet traced: what UI action
                       (e.g. from CArchiveRoom) actually opens this screen. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccaa08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d3d6bc;
  param_1[0x14] = &PTR_FUN_00d3d6a0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  *(undefined1 *)((int)param_1 + 0x349) = 0;
  *(undefined1 *)((int)param_1 + 0x34a) = 1;
  param_1[0xd3] = 0;
  piVar1 = MediaPlayer_Constructor();
  param_1[0xd1] = piVar1;
  (**(code **)(*piVar1 + 0x38))(1);
  ExceptionList = param_1;
  return param_1;
}


//// FUNCTION FUN_006b9280 @ 006b9280 ////

void __fastcall FUN_006b9280(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ccaa28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d3d6bc;
  param_1[0x14] = &PTR_FUN_00d3d6a0;
  local_4 = 0;
  if ((undefined4 *)param_1[0xd1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd1])(1);
  }
  param_1[0xd1] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006b9300 @ 006b9300 ////

void __fastcall FUN_006b9300(int *param_1)

{
  char cVar1;
  
  if (*(char *)((int)param_1 + 0x349) == '\0') {
LAB_006b9329:
    if ((char)param_1[0xd2] == '\0') goto LAB_006b9376;
  }
  else if ((char)param_1[0xd2] == '\0') {
    (**(code **)(*(int *)param_1[0xd1] + 0x18))();
    *(undefined1 *)(param_1 + 0xd2) = 1;
    goto LAB_006b9329;
  }
  cVar1 = (**(code **)(*(int *)param_1[0xd1] + 0x28))();
  if (cVar1 != '\0') {
    if ((code *)param_1[0xd3] != (code *)0x0) {
      cVar1 = (*(code *)param_1[0xd3])(param_1);
      if (cVar1 == '\0') {
        return;
      }
    }
    if (*(char *)((int)param_1 + 0x34a) != '\0') {
      (**(code **)(*(int *)param_1[0xd1] + 0x18))();
    }
  }
  (**(code **)(*(int *)param_1[0xd1] + 0x3c))();
LAB_006b9376:
  FUN_0073fb40(param_1);
  return;
}


//// FUNCTION FUN_006b9380 @ 006b9380 ////

void __fastcall FUN_006b9380(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006b9388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x344) + 0x20))();
  return;
}


//// FUNCTION FUN_006b9390 @ 006b9390 ////

void __thiscall FUN_006b9390(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x344) + 8))(param_1,0,0,0,0);
  *(undefined1 *)((int)this + 0x349) = 1;
  return;
}


//// FUNCTION FUN_006b93c0 @ 006b93c0 ////

void __thiscall FUN_006b93c0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x34a) = param_1;
  return;
}


//// FUNCTION FUN_006b93d0 @ 006b93d0 ////

void __thiscall FUN_006b93d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x34c) = param_1;
  return;
}


//// FUNCTION FUN_006b93e0 @ 006b93e0 ////

undefined4 __fastcall FUN_006b93e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x344);
}


//// FUNCTION FUN_006b93f0 @ 006b93f0 ////

undefined4 * __thiscall FUN_006b93f0(void *this,byte param_1)

{
  FUN_006b9280(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006b9470 @ 006b9470 ////

void __thiscall FUN_006b9470(void *this,float param_1)

{
  if (*(int *)((int)this + 0x360) != 0) {
    if (*(float **)((int)this + 0x364) != (float *)0x0) {
      **(float **)((int)this + 0x364) = param_1;
      return;
    }
    if (*(void **)((int)this + 0x368) != (void *)0x0) {
      FUN_00567380(*(void **)((int)this + 0x368),param_1);
      return;
    }
    if (*(int *)((int)this + 0x37c) != 0) {
      FUN_00494fb0(*(void **)((int)this + 0x37c),param_1,DAT_00e4fa4c);
      return;
    }
    if (*(float **)((int)this + 0x370) != (float *)0x0) {
      **(float **)((int)this + 0x370) =
           (*(float *)((int)this + 0x378) - *(float *)((int)this + 0x374)) * param_1 +
           *(float *)((int)this + 0x374);
      return;
    }
    if (*(void **)((int)this + 0x36c) != (void *)0x0) {
      FUN_0043b700(*(void **)((int)this + 0x36c),
                   (*(float *)((int)this + 0x378) - *(float *)((int)this + 0x374)) * param_1 +
                   *(float *)((int)this + 0x374));
    }
  }
  return;
}


//// FUNCTION FUN_006b9520 @ 006b9520 ////

float * __thiscall FUN_006b9520(void *this,float *param_1)

{
  float10 fVar1;
  void *local_4;
  
  if (*(int *)((int)this + 0x360) != 0) {
    if (*(float **)((int)this + 0x364) != (float *)0x0) {
      *param_1 = **(float **)((int)this + 0x364);
      return param_1;
    }
    local_4 = this;
    if (*(void **)((int)this + 0x368) != (void *)0x0) {
      FUN_00566e50(*(void **)((int)this + 0x368),(float *)&local_4);
      *param_1 = (float)local_4;
      return param_1;
    }
    if (*(void **)((int)this + 0x37c) != (void *)0x0) {
      FUN_004950c0(*(void **)((int)this + 0x37c),param_1);
      return param_1;
    }
    if (*(float **)((int)this + 0x370) != (float *)0x0) {
      FUN_00407070(param_1,(**(float **)((int)this + 0x370) - *(float *)((int)this + 0x374)) /
                           (*(float *)((int)this + 0x378) - *(float *)((int)this + 0x374)));
      return param_1;
    }
    if (*(float **)((int)this + 0x36c) != (float *)0x0) {
      fVar1 = FUN_0043b710(*(float **)((int)this + 0x36c));
      FUN_00407070(param_1,(float)((fVar1 - (float10)*(float *)((int)this + 0x374)) /
                                  ((float10)*(float *)((int)this + 0x378) -
                                  (float10)*(float *)((int)this + 0x374))));
      return param_1;
    }
  }
  *param_1 = 0.0;
  return param_1;
}


//// FUNCTION FUN_006b9610 @ 006b9610 ////

undefined4 __thiscall FUN_006b9610(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_30;
  uint uStack_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ccaa48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                               &TM::WTextEdit::RTTI_Type_Descriptor,0);
  iVar2 = FUN_00ace790(*(int **)((int)this + 0x360),0,&TM::TMBase::RTTI_Type_Descriptor,
                       &TM::CStar::RTTI_Type_Descriptor,0);
  if ((piVar1 != (int *)0x0) && (iVar2 != 0)) {
    iVar3 = FUN_005773c0(iVar2);
    iVar2 = GetPlayerStudio();
    if (iVar3 == iVar2) {
      puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x58))();
      puStack_8 = (undefined1 *)0x0;
      FUN_00567d70(puVar4);
      puStack_8 = (undefined1 *)0xffffffff;
      if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_30);
      }
      FUN_00acd42c();
      FUN_00471b10((longlong *)&stack0xffffffb8);
      iVar2 = (**(code **)(**(int **)((int)this + 900) + 4))();
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_006b9770 @ 006b9770 ////

void __fastcall FUN_006b9770(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  float extraout_ECX;
  float fVar4;
  uint *puStack_58;
  int *piStack_54;
  undefined4 *puStack_50;
  uint uStack_4c;
  int *piStack_48;
  char cVar5;
  char cStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccaaa5;
  pvStack_c = ExceptionList;
  piStack_48 = (int *)0x6b979d;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x358);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_0071d890(piVar1);
  }
  param_1[0xd1] = (int)piVar1;
  cVar5 = '\0';
  uStack_4c = 1;
  local_4 = 0xffffffff;
  puStack_50 = (undefined4 *)0x6b97d5;
  piStack_48 = param_1;
  (**(code **)(*piVar1 + 0x5c))();
  puStack_50 = (undefined4 *)0x40000000;
  puStack_58 = (uint *)0x1;
  piStack_54 = param_1;
  (**(code **)(*(int *)param_1[0xd1] + 100))();
  (**(code **)(*(int *)param_1[0xd1] + 0x78))();
  puStack_50 = (undefined4 *)&stack0xffffffa0;
  FUN_0071ccb0((void *)param_1[0xd1],0.1);
  puStack_50 = (undefined4 *)&stack0xffffffa0;
  fVar4 = extraout_ECX;
  FUN_006b9520(param_1,(float *)&stack0xffffffa0);
  FUN_0071ccd0((void *)param_1[0xd1],(int)fVar4);
  if (cStack_14 != '\0') {
    (**(code **)(*(int *)param_1[0xd1] + 0x18))(9,&LAB_006b9440,param_1);
  }
  puStack_50 = operator_new(0x50);
  if (puStack_50 != (undefined4 *)0x0) {
    FUN_005e4870(puStack_50);
  }
  (**(code **)(*(int *)param_1[0xd1] + 0xa0))();
  piVar1 = (int *)(**(code **)(*(int *)param_1[0xd1] + 0xa4))();
  piStack_54 = (int *)0x80ffffff;
  (**(code **)(*piVar1 + 0xc))(&piStack_54);
  (**(code **)(*param_1 + 0xc))(param_1[0xd1],2);
  pvVar2 = operator_new(900);
  if (pvVar2 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    puStack_58 = &uStack_4c;
    uStack_4c = uStack_4c & 0xffff0000;
    piStack_54 = (int *)0x0;
    puStack_50 = (undefined4 *)&lpType_0000000a;
    uVar3 = FUN_00ace02d(L"0.00");
    FUN_004036d0(&puStack_58,L"0.00",uVar3);
    piVar1 = FUN_00737bb0(pvVar2,&puStack_58);
  }
  param_1[0xd2] = (int)piVar1;
  if ((pvVar2 != (void *)0x0) && (&lpType_0000000a < puStack_50)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_58);
  }
  (**(code **)(*(int *)param_1[0xd2] + 0x5c))(2,param_1[0xd1],0xc0800000);
  (**(code **)(*(int *)param_1[0xd2] + 100))(1,param_1[0xd1],0);
  (**(code **)(*param_1 + 0xc))(param_1[0xd2],2);
  pvVar2 = operator_new(900);
  puStack_50 = (undefined4 *)0x5;
  if (pvVar2 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00737bb0(pvVar2,piStack_48);
  }
  puStack_50 = (undefined4 *)0xffffffff;
  if (cVar5 == '\0') {
    piVar1[0xd4] = -0x80000000;
  }
  (**(code **)(*piVar1 + 0x5c))(2,param_1[0xd2],0xc0800000);
  (**(code **)(*piVar1 + 100))(1,param_1[0xd1],0);
  (**(code **)(*param_1 + 0xc))(piVar1,2);
  (**(code **)(*param_1 + 0x84))(0x40000000);
  ExceptionList = pvVar2;
  return;
}


//// FUNCTION FUN_006b9a50 @ 006b9a50 ////

undefined4 * __fastcall FUN_006b9a50(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d3d7f4;
  param_1[0x14] = &PTR_FUN_00d3d7d8;
  param_1[0xd6] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = param_1 + 0xd3;
  param_1[0xd3] = &PTR_FUN_00d1a200;
  param_1[0xd8] = 0;
  return param_1;
}


//// FUNCTION FUN_006b9a90 @ 006b9a90 ////

void __fastcall FUN_006b9a90(undefined4 *param_1)

{
  param_1[0xd3] = &PTR_FUN_00d1a200;
  if ((undefined4 *)param_1[0xd5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd5] = param_1[0xd4];
  }
  if (param_1[0xd4] != 0) {
    *(undefined4 *)(param_1[0xd4] + 4) = param_1[0xd5];
  }
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd8] = 0;
  if ((undefined4 *)param_1[0xd5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd5] = param_1[0xd4];
  }
  if (param_1[0xd4] != 0) {
    *(undefined4 *)(param_1[0xd4] + 4) = param_1[0xd5];
  }
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_006b9b10 @ 006b9b10 ////

int * __thiscall FUN_006b9b10(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccaac6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d3d7f4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3d7d8;
  piVar1 = (int *)((int)this + 0x350);
  *(undefined4 *)((int)this + 0x358) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 **)((int)this + 0x358) = (undefined4 *)((int)this + 0x34c);
  *(undefined4 *)((int)this + 0x34c) = &PTR_FUN_00d1a200;
  *(int *)((int)this + 0x360) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x354) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  local_4 = 1;
  *(int *)((int)this + 0x364) = param_2;
  *(undefined4 *)((int)this + 0x378) = 0x3f800000;
  *(uint *)((int)this + 0x380) = *(uint *)((int)this + 0x380) & 0xfffffffe;
  FUN_006b9770(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006b9bf0 @ 006b9bf0 ////

int * __thiscall FUN_006b9bf0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccaae6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d3d7f4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3d7d8;
  piVar1 = (int *)((int)this + 0x350);
  *(undefined4 *)((int)this + 0x358) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 **)((int)this + 0x358) = (undefined4 *)((int)this + 0x34c);
  *(undefined4 *)((int)this + 0x34c) = &PTR_FUN_00d1a200;
  *(int *)((int)this + 0x360) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x354) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  local_4 = 1;
  *(int *)((int)this + 0x368) = param_2;
  *(undefined4 *)((int)this + 0x378) = 0x3f800000;
  *(uint *)((int)this + 0x380) = *(uint *)((int)this + 0x380) & 0xfffffffe;
  FUN_006b9770(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006b9cd0 @ 006b9cd0 ////

int * __thiscall FUN_006b9cd0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccab06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d3d7f4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3d7d8;
  piVar1 = (int *)((int)this + 0x350);
  *(undefined4 *)((int)this + 0x358) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 **)((int)this + 0x358) = (undefined4 *)((int)this + 0x34c);
  *(undefined4 *)((int)this + 0x34c) = &PTR_FUN_00d1a200;
  *(int *)((int)this + 0x360) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x354) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  local_4 = 1;
  *(undefined4 *)((int)this + 0x378) = 0x3f800000;
  *(int *)((int)this + 0x37c) = param_2;
  *(uint *)((int)this + 0x380) = *(uint *)((int)this + 0x380) & 0xfffffffe;
  FUN_006b9770(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006b9db0 @ 006b9db0 ////

int * __thiscall
FUN_006b9db0(void *this,int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccab26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d3d7f4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3d7d8;
  piVar1 = (int *)((int)this + 0x350);
  *(undefined4 *)((int)this + 0x358) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 **)((int)this + 0x358) = (undefined4 *)((int)this + 0x34c);
  *(undefined4 *)((int)this + 0x34c) = &PTR_FUN_00d1a200;
  *(int *)((int)this + 0x360) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x354) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(int *)((int)this + 0x370) = param_2;
  *(int *)((int)this + 0x374) = param_4;
  local_4 = 1;
  *(int *)((int)this + 0x378) = param_5;
  *(uint *)((int)this + 0x380) = *(uint *)((int)this + 0x380) & 0xfffffffe;
  FUN_006b9770(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006b9e90 @ 006b9e90 ////

int * __thiscall
FUN_006b9e90(void *this,int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccab46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d3d7f4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3d7d8;
  piVar1 = (int *)((int)this + 0x350);
  *(undefined4 *)((int)this + 0x358) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 **)((int)this + 0x358) = (undefined4 *)((int)this + 0x34c);
  *(undefined4 *)((int)this + 0x34c) = &PTR_FUN_00d1a200;
  *(int *)((int)this + 0x360) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x354) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(int *)((int)this + 0x36c) = param_2;
  *(int *)((int)this + 0x374) = param_4;
  local_4 = 1;
  *(int *)((int)this + 0x378) = param_5;
  *(uint *)((int)this + 0x380) = *(uint *)((int)this + 0x380) & 0xfffffffe;
  FUN_006b9770(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006ba0c0 @ 006ba0c0 ////

int * __thiscall FUN_006ba0c0(void *this,int param_1,int *param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *this_00;
  int *piVar5;
  undefined1 *_Memory;
  undefined1 *puVar6;
  undefined1 auStack_b4 [4];
  undefined2 *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_a4 [10];
  void *local_90 [13];
  void *pvStack_5c;
  undefined1 uStack_3c;
  undefined4 *puStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccaba2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_90[0] = this;
  FUN_007432f0(this);
  piVar4 = (int *)((int)this + 0x34c);
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(int **)((int)this + 0x358) = piVar4;
  *piVar4 = (int)&PTR_FUN_00d1a200;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined ***)this = &PTR_FUN_00d3d91c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3d900;
  *(int **)((int)this + 900) = param_2;
  local_4 = 0;
  (**(code **)(*piVar4 + 4))();
  *(int *)((int)this + 0x360) = param_1;
  (**(code **)*piVar4)();
  local_b0 = local_a4;
  local_a4[0] = 0;
  local_ac = 0;
  local_a8 = 10;
  local_4 = CONCAT31(local_4._1_3_,1);
  plVar1 = (longlong *)(**(code **)(*param_2 + 8))();
  sVar2 = _swprintf((wchar_t *)local_90,0xd18f84,SUB84((double)((float)*plVar1 * 1.1920929e-07),0));
  FUN_0040cae0(auStack_b4,(wchar_t *)local_90,sVar2);
  puVar3 = operator_new(0x3c8);
  puStack_8._0_1_ = 2;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00738920(puVar3);
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  (**(code **)(*piVar4 + 0x74))();
  (**(code **)(*piVar4 + 100))(1,this,0x40000000);
  (**(code **)(*piVar4 + 0x5c))(1,this,0x40000000);
  (**(code **)(*piVar4 + 0x54))(&stack0xffffff2c);
  _Memory = &DAT_00000009;
  puVar6 = this;
  (**(code **)(*piVar4 + 0x18))(9,&LAB_006b9730,this,"NEURON_EDIT");
  FUN_0073f6e0(this,piVar4);
  this_00 = operator_new(900);
  uStack_3c = 3;
  if (this_00 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00737bb0(this_00,puStack_2c);
  }
  uStack_3c = 1;
  (**(code **)(*piVar5 + 0x5c))(2,piVar4,0xc0800000);
  (**(code **)(*piVar5 + 100))(1,piVar4,0);
  FUN_0073f6e0(this,piVar5);
  FUN_0073f500(this);
  if (&lpType_0000000a < puVar6) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_5c;
  return this;
}


//// FUNCTION FUN_006ba2d0 @ 006ba2d0 ////

undefined4 * __thiscall FUN_006ba2d0(void *this,byte param_1)

{
  FUN_006b9a90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006ba2f0 @ 006ba2f0 ////

undefined4 * __thiscall FUN_006ba2f0(void *this,byte param_1)

{
  thunk_FUN_006b9a90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006ba330 @ 006ba330 ////

void __fastcall FUN_006ba330(int *param_1)

{
  (**(code **)(*param_1 + 0xd8))();
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_006ba3c0 @ 006ba3c0 ////

void __fastcall FUN_006ba3c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_006ba3e0 @ 006ba3e0 ////

void __fastcall FUN_006ba3e0(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_006ba410 @ 006ba410 ////

void __fastcall FUN_006ba410(int *param_1)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccabb8;
  local_c = ExceptionList;
  if ((DAT_0104dafc != 0) && (DAT_0104dae4 != 0)) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"online_dialogue",0xf);
    local_28 = 0xf;
    local_2c[0xf] = '\0';
    local_4 = 0;
    FUN_0087ecc0(*(void **)(*(int *)(DAT_0104dae4 + 0x358) + 0x178),param_1,&local_2c,1,0,
                 (undefined1 *)0x0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006ba4d0 @ 006ba4d0 ////

/* WARNING: Removing unreachable block (ram,0x006ba8cc) */

void __fastcall FUN_006ba4d0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  char *this;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  undefined4 *puStack_130;
  char *pcStack_128;
  int *piStack_124;
  undefined1 *puStack_120;
  undefined2 **ppuVar7;
  wchar_t *pwStack_110;
  float fStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined4 *puStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  char acStack_d4 [20];
  void *pvStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_ac [4];
  wchar_t *pwStack_a8;
  wchar_t *pwStack_a0;
  uint uStack_9c;
  undefined2 *puStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 auStack_88 [4];
  void *apvStack_80 [2];
  uint uStack_78;
  undefined1 uStack_60;
  undefined1 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccac87;
  pvStack_c = ExceptionList;
  uStack_f4 = 0x6ba501;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x344);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007432f0(puVar1);
  }
  uStack_f4 = *(undefined4 *)(*(int *)(param_1 + 0x358) + 0x118);
  uStack_f8 = 2;
  local_4 = 0xffffffff;
  uStack_fc = 0x6ba542;
  (**(code **)(*piVar2 + 100))();
  puStack_100 = *(undefined4 **)(param_1 + 0x460);
  uStack_fc = 0x41200000;
  uStack_104 = 1;
  uStack_108 = 0x6ba557;
  (**(code **)(*piVar2 + 0x5c))();
  iVar5 = *piVar2;
  uStack_108 = 0x42800000;
  fStack_10c = 9.885736e-39;
  fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  fStack_10c = (float)(fVar6 - (float10)16.0);
  pwStack_110 = L"躋Ѡ";
  (**(code **)(iVar5 + 0x74))();
  pwStack_110 = (wchar_t *)0x1;
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))();
  puStack_100 = operator_new(0x3fc);
  uStack_2c = 1;
  if (puStack_100 == (undefined4 *)0x0) {
    puStack_100 = (undefined4 *)0x0;
  }
  else {
    puStack_100 = FUN_00833290(puStack_100);
  }
  uStack_2c = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x3ec) + 4))();
  *(undefined4 **)(param_1 + 0x400) = puStack_100;
  (*(code *)**(undefined4 **)(param_1 + 0x3ec))();
  puStack_94 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0;
  uStack_8c = 10;
  uVar3 = FUN_00ace02d(
                      L"<t2><table><tr><td align=center width=364><translate>ONLINEOPTIONS_PROXYSERVERLABEL</translate></td></tr></table></t2>"
                      );
  puStack_120 = (undefined1 *)0x6ba628;
  FUN_004036d0(&puStack_94,
               L"<t2><table><tr><td align=center width=364><translate>ONLINEOPTIONS_PROXYSERVERLABEL</translate></td></tr></table></t2>"
               ,uVar3);
  ppuVar7 = &puStack_94;
  uStack_2c = 2;
  (**(code **)(**(int **)(param_1 + 0x400) + 0x54))();
  uVar3 = 0;
  puStack_120 = (undefined1 *)0x6ba655;
  (**(code **)(**(int **)(param_1 + 0x400) + 0x84))();
  puStack_120 = (undefined1 *)0x40800000;
  pcStack_128 = (char *)0x1;
  piStack_124 = piVar2;
  (**(code **)(**(int **)(param_1 + 0x400) + 100))();
  (**(code **)(**(int **)(param_1 + 0x400) + 0x5c))();
  (**(code **)(*piVar2 + 0xc))();
  this = operator_new(0x288);
  if (this == (char *)0x0) {
    pcStack_128 = (char *)0x0;
  }
  else {
    piStack_124 = (int *)&stack0xfffffee8;
    ppuVar7 = (undefined2 **)((uint)ppuVar7 & 0xffffff00);
    puStack_120 = (undefined1 *)0x0;
    uVar3 = 0x20;
    pcStack_128 = this;
    piStack_124 = _malloc(0x20);
    _strncpy((char *)piStack_124,"ui/dialogue_whitebox.dds",0x18);
    puStack_120 = (undefined1 *)0x18;
    *(undefined1 *)(piStack_124 + 6) = 0;
    uStack_54 = CONCAT31(uStack_54._1_3_,4);
    pcStack_128 = (char *)FUN_005e8fd0(this,&piStack_124);
  }
  uStack_54 = 2;
  if ((this != (char *)0x0) && (0x14 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    _free(piStack_124);
  }
  FUN_005e7a00(pcStack_128,0);
  puVar1 = operator_new(0x344);
  uStack_54._0_1_ = 6;
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_007432f0(puVar1);
  }
  uStack_54 = CONCAT31(uStack_54._1_3_,2);
  (**(code **)(*piVar4 + 0xa0))();
  pcStack_128 = &stack0xfffffee4;
  piStack_124 = (int *)0x0;
  puStack_120 = (undefined1 *)0x40;
  pcStack_128 = _malloc(0x40);
  _strncpy(pcStack_128,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  piStack_124 = (int *)0x27;
  pcStack_128[0x27] = '\0';
  uStack_58 = 7;
  FUN_00a05ff0(&stack0xffffff18,&pcStack_128,1);
  if (0x14 < puStack_120) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_128);
  }
  acStack_d4[0] = '\0';
  _strncpy(acStack_d4,"",0);
  acStack_d4[0] = '\0';
  pcStack_128 = &stack0xfffffee4;
  piStack_124 = (int *)0x0;
  puStack_120 = &DAT_00000014;
  _strncpy(pcStack_128,"Proxy Server IP",0xf);
  piStack_124 = (int *)0xf;
  pcStack_128[0xf] = '\0';
  uStack_58 = 0xb;
  puVar1 = FUN_00a06260(&stack0xffffff18,apvStack_80,&pcStack_128,(undefined4 *)&stack0xffffff20);
  uStack_58 = 0xc;
  FUN_00568790(&pwStack_a0,puVar1);
  if (0x14 < uStack_78) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_80[0]);
  }
  if (puStack_120 < (undefined1 *)0x15) {
    uStack_58 = 0xe;
    FUN_004036d0((void *)(param_1 + 0x4f4),pwStack_a0,uStack_9c);
    puVar1 = operator_new(0x3c8);
    uStack_58 = 0x11;
    if (puVar1 == (undefined4 *)0x0) {
      puStack_130 = (undefined4 *)0x0;
    }
    else {
      puStack_130 = FUN_00738920(puVar1);
    }
    uStack_58 = 0xe;
    (**(code **)(*(int *)(param_1 + 0x3a4) + 4))();
    *(undefined4 **)(param_1 + 0x3b8) = puStack_130;
    (*(code *)**(undefined4 **)(param_1 + 0x3a4))();
    iVar5 = **(int **)(param_1 + 0x3b8);
    (**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
    (**(code **)(iVar5 + 0x78))();
    *(undefined4 *)(*(int *)(param_1 + 0x3b8) + 0x394) = 0x20;
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0x54))();
    *(undefined1 *)(*(int *)(param_1 + 0x3b8) + 0x38d) = 1;
    pwStack_110 = (wchar_t *)&uStack_104;
    uStack_104 = uStack_104 & 0xffff0000;
    fStack_10c = 0.0;
    uStack_108 = 10;
    uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&pwStack_110,(wchar_t *)&lpCaption_00d16918,uVar3);
    iVar5 = _wcscmp(pwStack_a8,pwStack_110);
    if (10 < uStack_108) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_110);
    }
    if (iVar5 == 0) {
      pwStack_110 = (wchar_t *)&uStack_104;
      uStack_104 = uStack_104 & 0xffff0000;
      fStack_10c = 0.0;
      uStack_108 = 10;
      uVar3 = FUN_00ace02d((short *)&DAT_00d3da28);
      FUN_004036d0(&pwStack_110,L"wah",uVar3);
      uStack_60 = 0x12;
      (**(code **)(**(int **)(param_1 + 0x3b8) + 0x54))(&pwStack_110);
      uStack_60 = 0xe;
      if (10 < uStack_108) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_110);
      }
    }
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0x8c))(0x41000000);
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0x54))(auStack_ac);
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0x5c))(1,piVar4,0x41000000);
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0x68))(2,piVar4,0xc1000000);
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0xa0))(0);
    (**(code **)(*piVar4 + 0xc))(*(undefined4 *)(param_1 + 0x3b8),1);
    (**(code **)(*piVar4 + 0x8c))(0);
    (**(code **)(*piVar4 + 0x88))(0x41000000);
    (**(code **)(*piVar4 + 0x5c))(1,piVar2,0x41e00000);
    (**(code **)(*piVar4 + 100))(2,*(undefined4 *)(param_1 + 0x400),0xc1400000);
    (**(code **)(*piVar2 + 0xc))(piVar4,1);
    iVar5 = *piVar2;
    fVar6 = (float10)(**(code **)(iVar5 + 0x14))();
    (**(code **)(iVar5 + 0x7c))((float)(fVar6 + (float10)32.0));
    if (uStack_f8 < 0xb) {
      uStack_b8 = 2;
      FUN_00a05fe0((int)&stack0xfffffeb8);
      if (ppuVar7 < (undefined2 **)0xb) {
        ExceptionList = pvStack_c0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(puStack_120);
    }
                    /* WARNING: Subroutine does not return */
    _free(puStack_100);
  }
                    /* WARNING: Subroutine does not return */
  _free(pcStack_128);
}


//// FUNCTION FUN_006babc0 @ 006babc0 ////

/* WARNING: Removing unreachable block (ram,0x006bafbe) */

void __fastcall FUN_006babc0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  char *this;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  undefined4 *puStack_130;
  char *pcStack_128;
  int *piStack_124;
  undefined1 *puStack_120;
  undefined2 **ppuVar7;
  wchar_t *pwStack_110;
  float fStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined4 *puStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  char acStack_d4 [20];
  void *pvStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_ac [4];
  wchar_t *pwStack_a8;
  wchar_t *pwStack_a0;
  uint uStack_9c;
  undefined2 *puStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 auStack_88 [4];
  void *apvStack_80 [2];
  uint uStack_78;
  undefined1 uStack_60;
  undefined1 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccad57;
  pvStack_c = ExceptionList;
  uStack_f4 = 0x6babf1;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x344);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007432f0(puVar1);
  }
  uStack_f4 = *(undefined4 *)(*(int *)(param_1 + 0x400) + 0x118);
  uStack_f8 = 2;
  local_4 = 0xffffffff;
  uStack_fc = 0x6bac33;
  (**(code **)(*piVar2 + 100))();
  puStack_100 = *(undefined4 **)(param_1 + 0x460);
  uStack_fc = 0x41200000;
  uStack_104 = 1;
  uStack_108 = 0x6bac49;
  (**(code **)(*piVar2 + 0x5c))();
  iVar5 = *piVar2;
  uStack_108 = 0x42800000;
  fStack_10c = 9.888229e-39;
  fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  fStack_10c = (float)(fVar6 - (float10)16.0);
  pwStack_110 = L"躋Ѡ";
  (**(code **)(iVar5 + 0x74))();
  pwStack_110 = (wchar_t *)0x1;
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))();
  puStack_100 = operator_new(0x3fc);
  uStack_2c = 1;
  if (puStack_100 == (undefined4 *)0x0) {
    puStack_100 = (undefined4 *)0x0;
  }
  else {
    puStack_100 = FUN_00833290(puStack_100);
  }
  uStack_2c = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x404) + 4))();
  *(undefined4 **)(param_1 + 0x418) = puStack_100;
  (*(code *)**(undefined4 **)(param_1 + 0x404))();
  puStack_94 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0;
  uStack_8c = 10;
  uVar3 = FUN_00ace02d(
                      L"<t2><table><tr><td align=center width=364><translate>ONLINEOPTIONS_PROXYPORTLABEL</translate></td></tr></table></t2>"
                      );
  puStack_120 = (undefined1 *)0x6bad1a;
  FUN_004036d0(&puStack_94,
               L"<t2><table><tr><td align=center width=364><translate>ONLINEOPTIONS_PROXYPORTLABEL</translate></td></tr></table></t2>"
               ,uVar3);
  ppuVar7 = &puStack_94;
  uStack_2c = 2;
  (**(code **)(**(int **)(param_1 + 0x418) + 0x54))();
  uVar3 = 0;
  puStack_120 = (undefined1 *)0x6bad47;
  (**(code **)(**(int **)(param_1 + 0x418) + 0x84))();
  puStack_120 = (undefined1 *)0x40800000;
  pcStack_128 = (char *)0x1;
  piStack_124 = piVar2;
  (**(code **)(**(int **)(param_1 + 0x418) + 100))();
  (**(code **)(**(int **)(param_1 + 0x418) + 0x5c))();
  (**(code **)(*piVar2 + 0xc))();
  this = operator_new(0x288);
  if (this == (char *)0x0) {
    pcStack_128 = (char *)0x0;
  }
  else {
    piStack_124 = (int *)&stack0xfffffee8;
    ppuVar7 = (undefined2 **)((uint)ppuVar7 & 0xffffff00);
    puStack_120 = (undefined1 *)0x0;
    uVar3 = 0x20;
    pcStack_128 = this;
    piStack_124 = _malloc(0x20);
    _strncpy((char *)piStack_124,"ui/dialogue_whitebox.dds",0x18);
    puStack_120 = (undefined1 *)0x18;
    *(undefined1 *)(piStack_124 + 6) = 0;
    uStack_54 = CONCAT31(uStack_54._1_3_,4);
    pcStack_128 = (char *)FUN_005e8fd0(this,&piStack_124);
  }
  uStack_54 = 2;
  if ((this != (char *)0x0) && (0x14 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    _free(piStack_124);
  }
  FUN_005e7a00(pcStack_128,0);
  puVar1 = operator_new(0x344);
  uStack_54._0_1_ = 6;
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_007432f0(puVar1);
  }
  uStack_54 = CONCAT31(uStack_54._1_3_,2);
  (**(code **)(*piVar4 + 0xa0))();
  pcStack_128 = &stack0xfffffee4;
  piStack_124 = (int *)0x0;
  puStack_120 = (undefined1 *)0x40;
  pcStack_128 = _malloc(0x40);
  _strncpy(pcStack_128,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  piStack_124 = (int *)0x27;
  pcStack_128[0x27] = '\0';
  uStack_58 = 7;
  FUN_00a05ff0(&stack0xffffff18,&pcStack_128,1);
  if (0x14 < puStack_120) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_128);
  }
  acStack_d4[0] = '\0';
  _strncpy(acStack_d4,"",0);
  acStack_d4[0] = '\0';
  pcStack_128 = &stack0xfffffee4;
  piStack_124 = (int *)0x0;
  puStack_120 = &DAT_00000014;
  _strncpy(pcStack_128,"Proxy Server Port",0x11);
  piStack_124 = (int *)0x11;
  pcStack_128[0x11] = '\0';
  uStack_58 = 0xb;
  puVar1 = FUN_00a06260(&stack0xffffff18,apvStack_80,&pcStack_128,(undefined4 *)&stack0xffffff20);
  uStack_58 = 0xc;
  FUN_00568790(&pwStack_a0,puVar1);
  if (0x14 < uStack_78) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_80[0]);
  }
  if (puStack_120 < (undefined1 *)0x15) {
    uStack_58 = 0xe;
    FUN_004036d0((void *)(param_1 + 0x514),pwStack_a0,uStack_9c);
    puVar1 = operator_new(0x3c8);
    uStack_58 = 0x11;
    if (puVar1 == (undefined4 *)0x0) {
      puStack_130 = (undefined4 *)0x0;
    }
    else {
      puStack_130 = FUN_00738920(puVar1);
    }
    uStack_58 = 0xe;
    (**(code **)(*(int *)(param_1 + 0x3bc) + 4))();
    *(undefined4 **)(param_1 + 0x3d0) = puStack_130;
    (*(code *)**(undefined4 **)(param_1 + 0x3bc))();
    iVar5 = **(int **)(param_1 + 0x3d0);
    (**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
    (**(code **)(iVar5 + 0x78))();
    *(undefined4 *)(*(int *)(param_1 + 0x3d0) + 0x394) = 0x20;
    (**(code **)(**(int **)(param_1 + 0x3d0) + 0x54))();
    pwStack_110 = (wchar_t *)&uStack_104;
    uStack_104 = uStack_104 & 0xffff0000;
    fStack_10c = 0.0;
    uStack_108 = 10;
    uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&pwStack_110,(wchar_t *)&lpCaption_00d16918,uVar3);
    iVar5 = _wcscmp(pwStack_a8,pwStack_110);
    if (10 < uStack_108) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_110);
    }
    if (iVar5 == 0) {
      pwStack_110 = (wchar_t *)&uStack_104;
      uStack_104 = uStack_104 & 0xffff0000;
      fStack_10c = 0.0;
      uStack_108 = 10;
      uVar3 = FUN_00ace02d((short *)&DAT_00d3da28);
      FUN_004036d0(&pwStack_110,L"wah",uVar3);
      uStack_60 = 0x12;
      (**(code **)(**(int **)(param_1 + 0x3d0) + 0x54))(&pwStack_110);
      uStack_60 = 0xe;
      if (10 < uStack_108) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_110);
      }
    }
    *(undefined1 *)(*(int *)(param_1 + 0x3d0) + 0x38d) = 1;
    (**(code **)(**(int **)(param_1 + 0x3d0) + 0x8c))(0x41000000);
    (**(code **)(**(int **)(param_1 + 0x3d0) + 0x54))(auStack_ac);
    (**(code **)(**(int **)(param_1 + 0x3d0) + 0x5c))(1,piVar4,0x41000000);
    (**(code **)(**(int **)(param_1 + 0x3d0) + 0x68))(2,piVar4,0xc1000000);
    (**(code **)(**(int **)(param_1 + 0x3d0) + 0xa0))(0);
    (**(code **)(*piVar4 + 0xc))(*(undefined4 *)(param_1 + 0x3d0),1);
    (**(code **)(*piVar4 + 0x84))(0);
    (**(code **)(*piVar4 + 0x88))(0x41000000);
    (**(code **)(*piVar4 + 0x5c))(1,piVar2,0x41e00000);
    (**(code **)(*piVar4 + 100))(2,*(undefined4 *)(param_1 + 0x418),0xc1400000);
    (**(code **)(*piVar2 + 0xc))(piVar4,1);
    iVar5 = *piVar2;
    fVar6 = (float10)(**(code **)(iVar5 + 0x14))();
    (**(code **)(iVar5 + 0x7c))((float)(fVar6 + (float10)32.0));
    if (*(int *)(param_1 + 0x3b8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x3b8) + 0x3a4) = *(undefined4 *)(param_1 + 0x3d0);
      *(undefined4 *)(*(int *)(param_1 + 0x3d0) + 0x3a4) = *(undefined4 *)(param_1 + 0x3b8);
    }
    if (uStack_f8 < 0xb) {
      uStack_b8 = 2;
      FUN_00a05fe0((int)&stack0xfffffeb8);
      if (ppuVar7 < (undefined2 **)0xb) {
        ExceptionList = pvStack_c0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(puStack_120);
    }
                    /* WARNING: Subroutine does not return */
    _free(puStack_100);
  }
                    /* WARNING: Subroutine does not return */
  _free(pcStack_128);
}


//// FUNCTION FUN_006bb2d0 @ 006bb2d0 ////

undefined4 FUN_006bb2d0(void)

{
  char *_Memory;
  uint uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float10 fVar5;
  void *_Memory_00;
  float fVar6;
  undefined1 auStack_b4 [8];
  undefined2 *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined2 local_a0 [6];
  char *pcStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  char acStack_88 [20];
  char *pcStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  char acStack_68 [20];
  void *apvStack_54 [2];
  uint uStack_4c;
  void *apvStack_34 [2];
  uint uStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccad8e;
  local_c = ExceptionList;
  if ((DAT_0104dc54 == 0) || (1 < *(int *)(DAT_0104dc54 + 0x53c))) {
    return DAT_0104dc54 & 0xffffff00;
  }
  ExceptionList = &local_c;
  *(int *)(DAT_0104dc54 + 0x53c) = *(int *)(DAT_0104dc54 + 0x53c) + 1;
  local_ac = local_a0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 10;
  uVar1 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&local_ac,L"<s1><table><tr><td align=center width=",uVar1);
  local_4 = 0;
  FUN_0043bd80(&local_ac,*(float *)(DAT_0104dc54 + 0x538));
  sVar2 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_ac,L">",sVar2);
  (**(code **)(**(int **)(DAT_0104dc54 + 0x370) + 0xc0))();
  (**(code **)(**(int **)(DAT_0104dc54 + 0x388) + 0xc0))();
  if (*(int *)(DAT_0104dc54 + 0x53c) == 1) {
    pcStack_74 = acStack_68;
    acStack_68[0] = '\0';
    uStack_70 = 0;
    uStack_6c = 0x20;
    pcStack_74 = _malloc(0x20);
    _strncpy(pcStack_74,"ONLINEOPTIONS_SERVERPORTONE",0x1b);
    uStack_70 = 0x1b;
    pcStack_74[0x1b] = '\0';
    local_c._0_1_ = 1;
    puVar3 = FUN_009b5030(apvStack_34,&pcStack_74);
    FUN_0040cae0(auStack_b4,(wchar_t *)*puVar3,puVar3[1]);
    _Memory = pcStack_74;
    uVar1 = uStack_6c;
    if (10 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_34[0]);
    }
  }
  else {
    if (*(int *)(DAT_0104dc54 + 0x53c) != 2) goto LAB_006bb4ff;
    pcStack_94 = acStack_88;
    acStack_88[0] = '\0';
    uStack_90 = 0;
    uStack_8c = 0x20;
    pcStack_94 = _malloc(0x20);
    _strncpy(pcStack_94,"ONLINEOPTIONS_SERVERPORTTWO",0x1b);
    uStack_90 = 0x1b;
    pcStack_94[0x1b] = '\0';
    local_c._0_1_ = 2;
    puVar3 = FUN_009b5030(apvStack_54,&pcStack_94);
    FUN_0040cae0(auStack_b4,(wchar_t *)*puVar3,puVar3[1]);
    _Memory = pcStack_94;
    uVar1 = uStack_8c;
    if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_54[0]);
    }
  }
  local_c = (void *)((uint)local_c._1_3_ << 8);
  if (0x14 < uVar1) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
LAB_006bb4ff:
  sVar2 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(auStack_b4,L"</td></tr></table></s1>",sVar2);
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x54))();
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x84))();
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x14))();
  _Memory_00 = *(void **)(DAT_0104dc54 + 0x430);
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 100))(2);
  FUN_00830550(*(void **)(DAT_0104dc54 + 0x448),9,&stack0xffffff30);
  fVar6 = *(float *)(*(int *)(DAT_0104dc54 + 0x370) + 0xc0) -
          *(float *)(*(int *)(DAT_0104dc54 + 0x388) + 0x108);
  fVar5 = (float10)(**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x10))();
  uVar4 = (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x5c))
                    (2,*(undefined4 *)(DAT_0104dc54 + 0x388),
                     (float)-(((float10)fVar6 - fVar5) * (float10)0.5));
  if ((uint)fVar6 < 0xb) {
    ExceptionList = apvStack_34[0];
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory_00);
}


//// FUNCTION FUN_006bb650 @ 006bb650 ////

undefined4 FUN_006bb650(void)

{
  char *_Memory;
  uint uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float10 fVar5;
  void *_Memory_00;
  float fVar6;
  undefined1 auStack_b4 [8];
  undefined2 *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined2 local_a0 [6];
  char *pcStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  char acStack_88 [20];
  char *pcStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  char acStack_68 [20];
  void *apvStack_54 [2];
  uint uStack_4c;
  void *apvStack_34 [2];
  uint uStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccadbe;
  local_c = ExceptionList;
  if ((DAT_0104dc54 == 0) || (*(int *)(DAT_0104dc54 + 0x53c) < 2)) {
    return DAT_0104dc54 & 0xffffff00;
  }
  ExceptionList = &local_c;
  *(int *)(DAT_0104dc54 + 0x53c) = *(int *)(DAT_0104dc54 + 0x53c) + -1;
  local_ac = local_a0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 10;
  uVar1 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&local_ac,L"<s1><table><tr><td align=center width=",uVar1);
  local_4 = 0;
  FUN_0043bd80(&local_ac,*(float *)(DAT_0104dc54 + 0x538));
  sVar2 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_ac,L">",sVar2);
  (**(code **)(**(int **)(DAT_0104dc54 + 0x370) + 0xc0))();
  (**(code **)(**(int **)(DAT_0104dc54 + 0x388) + 0xc0))();
  if (*(int *)(DAT_0104dc54 + 0x53c) == 1) {
    pcStack_74 = acStack_68;
    acStack_68[0] = '\0';
    uStack_70 = 0;
    uStack_6c = 0x20;
    pcStack_74 = _malloc(0x20);
    _strncpy(pcStack_74,"ONLINEOPTIONS_SERVERPORTONE",0x1b);
    uStack_70 = 0x1b;
    pcStack_74[0x1b] = '\0';
    local_c._0_1_ = 1;
    puVar3 = FUN_009b5030(apvStack_34,&pcStack_74);
    FUN_0040cae0(auStack_b4,(wchar_t *)*puVar3,puVar3[1]);
    _Memory = pcStack_74;
    uVar1 = uStack_6c;
    if (10 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_34[0]);
    }
  }
  else {
    if (*(int *)(DAT_0104dc54 + 0x53c) != 2) goto LAB_006bb87f;
    pcStack_94 = acStack_88;
    acStack_88[0] = '\0';
    uStack_90 = 0;
    uStack_8c = 0x20;
    pcStack_94 = _malloc(0x20);
    _strncpy(pcStack_94,"ONLINEOPTIONS_SERVERPORTTWO",0x1b);
    uStack_90 = 0x1b;
    pcStack_94[0x1b] = '\0';
    local_c._0_1_ = 2;
    puVar3 = FUN_009b5030(apvStack_54,&pcStack_94);
    FUN_0040cae0(auStack_b4,(wchar_t *)*puVar3,puVar3[1]);
    _Memory = pcStack_94;
    uVar1 = uStack_8c;
    if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_54[0]);
    }
  }
  local_c = (void *)((uint)local_c._1_3_ << 8);
  if (0x14 < uVar1) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
LAB_006bb87f:
  sVar2 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(auStack_b4,L"</td></tr></table></s1>",sVar2);
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x54))();
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x84))();
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x14))();
  _Memory_00 = *(void **)(DAT_0104dc54 + 0x430);
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 100))(2);
  FUN_00830550(*(void **)(DAT_0104dc54 + 0x448),9,&stack0xffffff30);
  fVar6 = *(float *)(*(int *)(DAT_0104dc54 + 0x370) + 0xc0) -
          *(float *)(*(int *)(DAT_0104dc54 + 0x388) + 0x108);
  fVar5 = (float10)(**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x10))();
  uVar4 = (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x5c))
                    (2,*(undefined4 *)(DAT_0104dc54 + 0x388),
                     (float)-(((float10)fVar6 - fVar5) * (float10)0.5));
  if ((uint)fVar6 < 0xb) {
    ExceptionList = apvStack_34[0];
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory_00);
}


//// FUNCTION FUN_006bb9d0 @ 006bb9d0 ////

/* WARNING: Removing unreachable block (ram,0x006bbc86) */
/* WARNING: Removing unreachable block (ram,0x006bbbf7) */
/* WARNING: Removing unreachable block (ram,0x006bbc6d) */
/* WARNING: Removing unreachable block (ram,0x006bbd51) */
/* WARNING: Removing unreachable block (ram,0x006bbb75) */

undefined4 FUN_006bb9d0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  size_t sVar2;
  undefined4 uVar3;
  void *unaff_EBX;
  uint *puVar4;
  uint uStack_b0;
  char acStack_ac [15];
  undefined1 uStack_9d;
  char *pcStack_9c;
  char *pcStack_98;
  undefined1 *local_94;
  int local_90;
  uint local_8c;
  undefined1 local_88 [12];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  char *pcStack_70;
  undefined4 local_6c;
  uint uStack_68;
  char acStack_64 [12];
  void *pvStack_58;
  void *pvStack_54;
  uint uStack_50;
  undefined1 *puStack_4c;
  uint uStack_44;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccae1c;
  local_c = ExceptionList;
  uVar3 = 0;
  if (DAT_0104dc54 != 0) {
    ExceptionList = &local_c;
    FUN_00741180(*(int *)(DAT_0104dc54 + 0x3a0));
    local_94 = local_88;
    local_88[0] = 0;
    local_90 = 0;
    local_8c = 0x14;
    local_4 = 0;
    puVar1 = (undefined4 *)(**(code **)(**(int **)(DAT_0104dc54 + 0x3b8) + 0x58))(&local_6c);
    puStack_8._0_1_ = 1;
    puVar1 = FUN_00568870((undefined4 *)&stack0xffffff48,puVar1);
    FUN_004073f0(&pcStack_98,(char *)*puVar1,puVar1[1]);
    if (0x14 < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
    if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_70);
    }
    pcStack_70 = acStack_64;
    acStack_64[0] = '\0';
    local_6c = 0;
    uStack_68 = 0x40;
    pcStack_70 = _malloc(0x40);
    _strncpy(pcStack_70,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
    local_6c = 0x27;
    pcStack_70[0x27] = '\0';
    puStack_8._0_1_ = 2;
    FUN_00a05ff0(auStack_78,&pcStack_70,1);
    if (0x14 < uStack_68) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_70);
    }
    acStack_ac[0] = '\0';
    uStack_b0 = 0x14;
    _strncpy(acStack_ac,"Proxy Server IP",0xf);
    uStack_9d = 0;
    puStack_8._0_1_ = 5;
    FUN_00a061a0(auStack_78,(undefined4 *)&stack0xffffff48,&pcStack_98);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
    if (0x14 < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      _free(acStack_ac);
    }
    if (local_90 == 0) {
      local_90 = 0x20;
      pcStack_98 = _malloc(0x20);
    }
    _strncpy(pcStack_98,"",0);
    local_94 = (void *)0x0;
    *pcStack_98 = '\0';
    puVar1 = (undefined4 *)(**(code **)(**(int **)(DAT_0104dc54 + 0x3d0) + 0x58))(&uStack_50);
    local_c._0_1_ = 6;
    puVar1 = FUN_00568870((undefined4 *)&stack0xffffff44,puVar1);
    FUN_004073f0(&pcStack_9c,(char *)*puVar1,puVar1[1]);
    if (&lpType_0000000a < puStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_54);
    }
    puVar4 = &uStack_b0;
    uStack_b0 = uStack_b0 & 0xffffff00;
    _strncpy((char *)puVar4,"Proxy Server Port",0x11);
    *(char *)((int)puVar4 + 0x11) = '\0';
    local_c = (void *)CONCAT31(local_c._1_3_,7);
    FUN_00a061a0(auStack_7c,(undefined4 *)&stack0xffffff44,&pcStack_9c);
    if (local_94 == (void *)0x0) {
      local_94 = (void *)0x20;
      pcStack_9c = _malloc(0x20);
    }
    _strncpy(pcStack_9c,"",0);
    pcStack_98 = (char *)0x0;
    *pcStack_9c = '\0';
    sVar2 = _sprintf((char *)&pvStack_54,(char *)&param_2_00d1b93c,
                     *(undefined4 *)(DAT_0104dc54 + 0x53c));
    FUN_004073f0(&pcStack_9c,(char *)&pvStack_54,sVar2);
    puVar4 = &uStack_b0;
    uStack_b0 = uStack_b0 & 0xffffff00;
    _strncpy((char *)puVar4,"Server Setting",0xe);
    *(char *)((int)puVar4 + 0xe) = '\0';
    local_c._0_1_ = 8;
    FUN_00a061a0(auStack_7c,(undefined4 *)&stack0xffffff44,&pcStack_9c);
    local_c = (void *)CONCAT31(local_c._1_3_,4);
    FUN_00470a70(DAT_0104917c,DAT_0104dafc,0x835,0,0);
    puVar1 = (undefined4 *)(**(code **)(**(int **)(DAT_0104dc54 + 0x3b8) + 0x58))(&pvStack_54);
    FUN_004036d0((void *)(DAT_0104dc54 + 0x4f4),(wchar_t *)*puVar1,puVar1[1]);
    if (10 < uStack_50) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_58);
    }
    puVar1 = (undefined4 *)(**(code **)(**(int **)(DAT_0104dc54 + 0x3d0) + 0x58))(&pvStack_58);
    FUN_004036d0((void *)(DAT_0104dc54 + 0x514),(wchar_t *)*puVar1,puVar1[1]);
    if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_4c);
    }
    *(undefined4 *)(DAT_0104dc54 + 0x534) = *(undefined4 *)(DAT_0104dc54 + 0x53c);
    FUN_0071b530(param_1,param_2);
    local_4 = local_4 & 0xffffff00;
    uVar3 = FUN_00a05fe0((int)auStack_74);
    if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
      _free(local_94);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_006bbe60 @ 006bbe60 ////

void FUN_006bbe60(void)

{
  uint uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float fVar5;
  undefined2 *puStack_134;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined2 auStack_128 [2];
  uint uStack_124;
  char *pcStack_11c;
  undefined4 uStack_118;
  uint uStack_114;
  char acStack_110 [20];
  char *pcStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  char acStack_f0 [20];
  void *apvStack_dc [2];
  uint uStack_d4;
  void *apvStack_bc [2];
  uint uStack_b4;
  wchar_t awStack_94 [64];
  undefined1 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ccae51;
  local_c = ExceptionList;
  if (DAT_0104dc54 == 0) {
    return;
  }
  ExceptionList = &local_c;
  (**(code **)(**(int **)(DAT_0104dc54 + 0x3b8) + 0x54))();
  (**(code **)(**(int **)(DAT_0104dc54 + 0x3d0) + 0x54))();
  puStack_134 = auStack_128;
  auStack_128[0] = 0;
  uStack_130 = 0;
  puStack_12c = &lpType_0000000a;
  uVar1 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&puStack_134,L"<s1><table><tr><td align=center width=",uVar1);
  local_c = (void *)0x0;
  sVar2 = _swprintf(awStack_94,0xd18f84,SUB84((double)*(float *)(DAT_0104dc54 + 0x538),0));
  FUN_0040cae0(&puStack_134,awStack_94,sVar2);
  sVar2 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&puStack_134,L">",sVar2);
  (**(code **)(**(int **)(DAT_0104dc54 + 0x370) + 0xc0))();
  (**(code **)(**(int **)(DAT_0104dc54 + 0x388) + 0xc0))();
  *(undefined4 *)(DAT_0104dc54 + 0x53c) = *(undefined4 *)(DAT_0104dc54 + 0x534);
  if (*(int *)(DAT_0104dc54 + 0x534) == 1) {
    pcStack_fc = acStack_f0;
    acStack_f0[0] = '\0';
    uStack_f8 = 0;
    uStack_f4 = 0x20;
    pcStack_fc = _malloc(0x20);
    _strncpy(pcStack_fc,"ONLINEOPTIONS_SERVERPORTONE",0x1b);
    uStack_f8 = 0x1b;
    pcStack_fc[0x1b] = '\0';
    uStack_14 = 1;
    puVar3 = FUN_009b5030(apvStack_bc,&pcStack_fc);
    FUN_0040cae0(&stack0xfffffec4,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_bc[0]);
    }
    uStack_14 = 0;
    if (0x14 < uStack_f4) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_fc);
    }
    (**(code **)(**(int **)(DAT_0104dc54 + 0x388) + 0xc0))();
  }
  else {
    if (*(int *)(DAT_0104dc54 + 0x534) != 2) goto LAB_006bc118;
    pcStack_11c = acStack_110;
    acStack_110[0] = '\0';
    uStack_118 = 0;
    uStack_114 = 0x20;
    pcStack_11c = _malloc(0x20);
    _strncpy(pcStack_11c,"ONLINEOPTIONS_SERVERPORTTWO",0x1b);
    uStack_118 = 0x1b;
    pcStack_11c[0x1b] = '\0';
    uStack_14 = 2;
    puVar3 = FUN_009b5030(apvStack_dc,&pcStack_11c);
    FUN_0040cae0(&stack0xfffffec4,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < uStack_d4) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_dc[0]);
    }
    uStack_14 = 0;
    if (0x14 < uStack_114) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_11c);
    }
    (**(code **)(**(int **)(DAT_0104dc54 + 0x388) + 0xc0))();
  }
  (**(code **)(**(int **)(DAT_0104dc54 + 0x370) + 0xc0))();
LAB_006bc118:
  sVar2 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(&stack0xfffffec4,L"</td></tr></table></s1>",sVar2);
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x54))();
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x84))();
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x14))();
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 100))(2,*(undefined4 *)(DAT_0104dc54 + 0x430));
  FUN_00830550(*(void **)(DAT_0104dc54 + 0x448),9,&stack0xfffffea8);
  fVar5 = *(float *)(*(int *)(DAT_0104dc54 + 0x370) + 0xc0) -
          *(float *)(*(int *)(DAT_0104dc54 + 0x388) + 0x108);
  fVar4 = (float10)(**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x10))();
  (**(code **)(**(int **)(DAT_0104dc54 + 0x448) + 0x5c))
            (2,*(undefined4 *)(DAT_0104dc54 + 0x388),
             (float)-(((float10)fVar5 - fVar4) * (float10)0.5));
  if (uStack_124 < 0xb) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_12c);
}


//// FUNCTION FUN_006bc250 @ 006bc250 ////

void __thiscall FUN_006bc250(void *this,short *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  size_t sVar5;
  uint uVar6;
  uint auStack_84 [5];
  uint *puStack_70;
  ushort *local_6c;
  uint local_68;
  uint local_64;
  ushort local_60 [8];
  void *pvStack_50;
  void *local_4c;
  uint uStack_48;
  uint uStack_44;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccae93;
  local_c = ExceptionList;
  if (param_1 != (short *)0x0) {
    pcVar2 = *(char **)(param_1 + 2);
    local_6c = local_60;
    local_68 = 0;
    if (pcVar2 == (char *)0x0) {
      local_60[0] = 0;
      local_64 = 10;
      ExceptionList = &local_c;
      uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_6c,(wchar_t *)&lpCaption_00d16918,uVar6);
      local_4 = 4;
      (**(code **)(**(int **)((int)this + 0x3b8) + 0x54))(&local_6c);
      if (10 < local_68) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_70);
      }
      puStack_70 = &local_64;
      local_64 = local_64 & 0xffff0000;
      local_6c = (ushort *)0x0;
      local_68 = 10;
      uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&puStack_70,(wchar_t *)&lpCaption_00d16918,uVar6);
      puStack_8 = (undefined1 *)0x5;
      (**(code **)(**(int **)((int)this + 0x3d0) + 0x54))(&puStack_70);
      if (10 < local_64) goto LAB_006bc495;
    }
    else {
      local_60[0] = local_60[0] & 0xff00;
      local_64 = 0x14;
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_c;
      FUN_004015d0(&local_6c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
      local_4 = 0;
      puVar4 = FUN_00568790(&local_4c,&local_6c);
      local_4 = CONCAT31(local_4._1_3_,1);
      (**(code **)(**(int **)((int)this + 0x3b8) + 0x54))(puVar4);
      if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_50);
      }
      auStack_84[0] = auStack_84[0] & 0xffffff00;
      _strncpy((char *)auStack_84,"",0);
                    /* WARNING: Ignoring partial resolution of indirect */
      auStack_84[0]._0_1_ = 0;
      puStack_8._0_1_ = 2;
      sVar5 = _sprintf((char *)&pvStack_50,(char *)&param_2_00d1b93c,(uint)(ushort)param_1[4]);
      FUN_004073f0(&stack0xffffff70,(char *)&pvStack_50,sVar5);
      puVar4 = FUN_00568790(&pvStack_50,(undefined4 *)&stack0xffffff70);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
      (**(code **)(**(int **)((int)this + 0x3d0) + 0x54))(puVar4);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      if (0x14 < auStack_84[0]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)0x0);
      }
      if (0x14 < local_64) {
LAB_006bc495:
        local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
    }
    local_4 = 0xffffffff;
    if (*param_1 == 0x2440) {
      if (*(int *)((int)this + 0x53c) == 2) {
        FUN_006bb650();
      }
    }
    else if ((*param_1 == 0x1f90) && (*(int *)((int)this + 0x53c) == 1)) {
      FUN_006bb2d0();
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006bc4f0 @ 006bc4f0 ////

void __fastcall FUN_006bc4f0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  size_t sVar6;
  void *this;
  undefined4 **unaff_EBP;
  float10 fVar7;
  float10 fVar8;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 *puStack_a4;
  undefined4 ***_Dest;
  float fStack_6c;
  undefined4 **ppuStack_68;
  float fVar9;
  undefined4 *local_58;
  undefined4 local_54;
  undefined1 uStack_38;
  undefined4 **ppuStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 auStack_28 [14];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ccaeed;
  pvStack_c = ExceptionList;
  local_54 = 0;
  ppuStack_68 = &local_58;
  local_58 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  cVar2 = (**(code **)(*(int *)param_1[0xf4] + 0x34))();
  if ((cVar2 == '\0') || (param_1[0x124] != 0)) {
    unaff_EBP = &local_58;
    local_58 = (undefined4 *)0x0;
    cVar2 = (**(code **)(*(int *)param_1[0xf4] + 0x34))();
    if ((cVar2 == '\0') && (param_1[0x124] != 0)) {
      puVar3 = (undefined4 *)param_1[0x136];
      if (puVar3 != (undefined4 *)0x0) {
        piVar4 = puVar3 + 0x12;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*puVar3)(1);
        }
        (**(code **)(param_1[0x131] + 4))();
        param_1[0x136] = 0;
        (**(code **)param_1[0x131])();
      }
      puVar3 = (undefined4 *)param_1[0x124];
      if (puVar3 != (undefined4 *)0x0) {
        piVar4 = puVar3 + 0x12;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*puVar3)(1);
        }
        (**(code **)(param_1[0x11f] + 4))();
        param_1[0x124] = 0;
        (**(code **)param_1[0x11f])();
      }
    }
  }
  else {
    local_58 = operator_new(0x3fc);
    pvStack_c = (void *)0x0;
    if (local_58 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_00833290(local_58);
    }
    pvStack_c = (void *)0xffffffff;
    (**(code **)(param_1[0x11f] + 4))();
    param_1[0x124] = (int)puVar3;
    (**(code **)param_1[0x11f])();
    piVar4 = (int *)FUN_0071b2a0();
    iVar1 = param_1[0x118];
    fVar7 = (float10)(**(code **)(*piVar4 + 0x10))();
    fVar7 = fVar7 - (float10)*(float *)(iVar1 + 0x108);
    fVar9 = 150.0;
    local_58 = (undefined4 *)(float)fVar7;
    if (fVar7 < (float10)200.0) {
      fVar9 = 125.0;
    }
    ppuStack_34 = (undefined4 **)auStack_28;
    auStack_28[0] = 0;
    uStack_30 = 0;
    uStack_2c = 10;
    uVar5 = FUN_00ace02d(L"<t2><table><tr><td align=center width=");
    FUN_004036d0(&ppuStack_34,L"<t2><table><tr><td align=center width=",uVar5);
    pvStack_c = (void *)0x1;
    FUN_0043bd80(&ppuStack_34,fVar9);
    sVar6 = FUN_00ace02d(
                        L"><translate>ONLINEOPTIONS_PROXYIP_TOOLTIP</translate></td></tr></table></t2>"
                        );
    FUN_0040cae0(&ppuStack_34,
                 L"><translate>ONLINEOPTIONS_PROXYIP_TOOLTIP</translate></td></tr></table></t2>",
                 sVar6);
    _Dest = &ppuStack_34;
    (**(code **)(*(int *)param_1[0x124] + 0x54))();
    (**(code **)(*(int *)param_1[0x124] + 0x84))();
    (**(code **)(*(int *)param_1[0x124] + 0x5c))();
    piVar4 = (int *)param_1[0x124];
    fVar7 = (float10)(**(code **)(**(int **)(param_1[0xf4] + 0x118) + 0x14))();
    fVar8 = (float10)(**(code **)(*piVar4 + 0x14))();
    fVar9 = (float)(((float10)(float)fVar7 - fVar8) * (float10)0.5);
    (**(code **)(*(int *)param_1[0x124] + 100))();
    this = operator_new(0x288);
    if (this == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
      fStack_6c = fVar9;
    }
    else {
      _Dest = &ppuStack_68;
      ppuStack_68 = (undefined4 **)((uint)ppuStack_68 & 0xffffff00);
      fStack_6c = 2.8026e-44;
      _strncpy((char *)_Dest,"ui/fullsrn_box.dds",0x12);
      unaff_EBP = (undefined4 **)0x12;
      *(char *)((int)_Dest + 0x12) = '\0';
      uStack_2c = CONCAT31(uStack_2c._1_3_,3);
      puVar3 = FUN_005e8fd0(this,(undefined4 *)&stack0xffffff8c);
    }
    uStack_2c = 1;
    if ((this != (void *)0x0) && (0x14 < (uint)fStack_6c)) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
    puVar3[0x9b] = 0x42000000;
    puVar3[0x9c] = 0x41400000;
    puVar3[0x9d] = 0x41400000;
    puVar3[0x9e] = 0x41400000;
    puVar3[0x9f] = 0x41c00000;
    (**(code **)(*(int *)param_1[0x124] + 0xa0))();
    piVar4 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar4 + 0xc))();
    puVar3 = (undefined4 *)param_1[0x136];
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = puVar3 + 0x12;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        puStack_a4 = (undefined4 *)0x6bc7be;
        (**(code **)*puVar3)();
      }
      (**(code **)(param_1[0x131] + 4))();
      param_1[0x136] = 0;
      (**(code **)param_1[0x131])();
    }
    puStack_a4 = (undefined4 *)0x6bc7e2;
    puVar3 = operator_new(0x344);
    uStack_38 = 5;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_007432f0(puVar3);
    }
    uStack_38 = 1;
    (**(code **)(param_1[0x131] + 4))();
    param_1[0x136] = (int)puVar3;
    (**(code **)param_1[0x131])();
    puStack_a4 = (undefined4 *)0x42080000;
    uStack_a8 = 0x6bc833;
    (**(code **)(*(int *)param_1[0x136] + 0x74))();
    iStack_ac = param_1[0x118];
    uStack_a8 = 0;
    uStack_b0 = 2;
    (**(code **)(*(int *)param_1[0x136] + 0x5c))();
    piVar4 = (int *)param_1[0x124];
    iVar1 = *(int *)param_1[0x136];
    fVar7 = (float10)(**(code **)(*piVar4 + 0x14))();
    (**(code **)(iVar1 + 100))(1,piVar4,(float)(fVar7 * (float10)0.5));
    puStack_a4 = operator_new(0x50);
    local_58._0_1_ = 6;
    if (puStack_a4 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_005e4870(puStack_a4);
    }
    local_58 = (undefined4 *)CONCAT31(local_58._1_3_,1);
    (**(code **)(*(int *)param_1[0x136] + 0xa0))(puVar3);
    piVar4 = (int *)(**(code **)(*(int *)param_1[0x136] + 0xa4))();
    uStack_b0 = 0xff78909f;
    (**(code **)(*piVar4 + 0xc))(&uStack_b0);
    (**(code **)(*param_1 + 0xc))(param_1[0x136],2);
    if (10 < (uint)fVar9) {
                    /* WARNING: Subroutine does not return */
      _free((void *)0x1);
    }
  }
  ExceptionList = unaff_EBP;
  return;
}


//// FUNCTION FUN_006bc9b0 @ 006bc9b0 ////

void __fastcall FUN_006bc9b0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  size_t sVar6;
  void *this;
  undefined4 **unaff_EBP;
  float10 fVar7;
  float10 fVar8;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 *puStack_a4;
  undefined4 ***_Dest;
  float fStack_6c;
  undefined4 **ppuStack_68;
  float fVar9;
  undefined4 *local_58;
  undefined4 local_54;
  undefined1 uStack_38;
  undefined4 **ppuStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 auStack_28 [14];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ccaf4d;
  pvStack_c = ExceptionList;
  local_54 = 0;
  ppuStack_68 = &local_58;
  local_58 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  cVar2 = (**(code **)(*(int *)param_1[0xee] + 0x34))();
  if ((cVar2 == '\0') || (param_1[0x11e] != 0)) {
    unaff_EBP = &local_58;
    local_58 = (undefined4 *)0x0;
    cVar2 = (**(code **)(*(int *)param_1[0xee] + 0x34))();
    if ((cVar2 == '\0') && (param_1[0x11e] != 0)) {
      puVar3 = (undefined4 *)param_1[0x130];
      if (puVar3 != (undefined4 *)0x0) {
        piVar4 = puVar3 + 0x12;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*puVar3)(1);
        }
        (**(code **)(param_1[299] + 4))();
        param_1[0x130] = 0;
        (**(code **)param_1[299])();
      }
      puVar3 = (undefined4 *)param_1[0x11e];
      if (puVar3 != (undefined4 *)0x0) {
        piVar4 = puVar3 + 0x12;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*puVar3)(1);
        }
        (**(code **)(param_1[0x119] + 4))();
        param_1[0x11e] = 0;
        (**(code **)param_1[0x119])();
      }
    }
  }
  else {
    local_58 = operator_new(0x3fc);
    pvStack_c = (void *)0x0;
    if (local_58 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_00833290(local_58);
    }
    pvStack_c = (void *)0xffffffff;
    (**(code **)(param_1[0x119] + 4))();
    param_1[0x11e] = (int)puVar3;
    (**(code **)param_1[0x119])();
    piVar4 = (int *)FUN_0071b2a0();
    iVar1 = param_1[0x118];
    fVar7 = (float10)(**(code **)(*piVar4 + 0x10))();
    fVar7 = fVar7 - (float10)*(float *)(iVar1 + 0x108);
    fVar9 = 150.0;
    local_58 = (undefined4 *)(float)fVar7;
    if (fVar7 < (float10)200.0) {
      fVar9 = 125.0;
    }
    ppuStack_34 = (undefined4 **)auStack_28;
    auStack_28[0] = 0;
    uStack_30 = 0;
    uStack_2c = 10;
    uVar5 = FUN_00ace02d(L"<t2><table><tr><td align=center width=");
    FUN_004036d0(&ppuStack_34,L"<t2><table><tr><td align=center width=",uVar5);
    pvStack_c = (void *)0x1;
    FUN_0043bd80(&ppuStack_34,fVar9);
    sVar6 = FUN_00ace02d(
                        L"><translate>ONLINEOPTIONS_PROXYSERVER_TOOLTIP</translate></td></tr></table></t2>"
                        );
    FUN_0040cae0(&ppuStack_34,
                 L"><translate>ONLINEOPTIONS_PROXYSERVER_TOOLTIP</translate></td></tr></table></t2>"
                 ,sVar6);
    _Dest = &ppuStack_34;
    (**(code **)(*(int *)param_1[0x11e] + 0x54))();
    (**(code **)(*(int *)param_1[0x11e] + 0x84))();
    (**(code **)(*(int *)param_1[0x11e] + 0x5c))();
    piVar4 = (int *)param_1[0x11e];
    fVar7 = (float10)(**(code **)(**(int **)(param_1[0xee] + 0x118) + 0x14))();
    fVar8 = (float10)(**(code **)(*piVar4 + 0x14))();
    fVar9 = (float)(((float10)(float)fVar7 - fVar8) * (float10)0.5);
    (**(code **)(*(int *)param_1[0x11e] + 100))();
    this = operator_new(0x288);
    if (this == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
      fStack_6c = fVar9;
    }
    else {
      _Dest = &ppuStack_68;
      ppuStack_68 = (undefined4 **)((uint)ppuStack_68 & 0xffffff00);
      fStack_6c = 2.8026e-44;
      _strncpy((char *)_Dest,"ui/fullsrn_box.dds",0x12);
      unaff_EBP = (undefined4 **)0x12;
      *(char *)((int)_Dest + 0x12) = '\0';
      uStack_2c = CONCAT31(uStack_2c._1_3_,3);
      puVar3 = FUN_005e8fd0(this,(undefined4 *)&stack0xffffff8c);
    }
    uStack_2c = 1;
    if ((this != (void *)0x0) && (0x14 < (uint)fStack_6c)) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
    puVar3[0x9b] = 0x42000000;
    puVar3[0x9c] = 0x41400000;
    puVar3[0x9d] = 0x41400000;
    puVar3[0x9e] = 0x41400000;
    puVar3[0x9f] = 0x41c00000;
    (**(code **)(*(int *)param_1[0x11e] + 0xa0))();
    piVar4 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar4 + 0xc))();
    puVar3 = (undefined4 *)param_1[0x130];
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = puVar3 + 0x12;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        puStack_a4 = (undefined4 *)0x6bcc7e;
        (**(code **)*puVar3)();
      }
      (**(code **)(param_1[299] + 4))();
      param_1[0x130] = 0;
      (**(code **)param_1[299])();
    }
    puStack_a4 = (undefined4 *)0x6bcca2;
    puVar3 = operator_new(0x344);
    uStack_38 = 5;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_007432f0(puVar3);
    }
    uStack_38 = 1;
    (**(code **)(param_1[299] + 4))();
    param_1[0x130] = (int)puVar3;
    (**(code **)param_1[299])();
    puStack_a4 = (undefined4 *)0x42080000;
    uStack_a8 = 0x6bccf3;
    (**(code **)(*(int *)param_1[0x130] + 0x74))();
    iStack_ac = param_1[0x118];
    uStack_a8 = 0;
    uStack_b0 = 2;
    (**(code **)(*(int *)param_1[0x130] + 0x5c))();
    piVar4 = (int *)param_1[0x11e];
    iVar1 = *(int *)param_1[0x130];
    fVar7 = (float10)(**(code **)(*piVar4 + 0x14))();
    (**(code **)(iVar1 + 100))(1,piVar4,(float)(fVar7 * (float10)0.5));
    puStack_a4 = operator_new(0x50);
    local_58._0_1_ = 6;
    if (puStack_a4 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_005e4870(puStack_a4);
    }
    local_58 = (undefined4 *)CONCAT31(local_58._1_3_,1);
    (**(code **)(*(int *)param_1[0x130] + 0xa0))(puVar3);
    piVar4 = (int *)(**(code **)(*(int *)param_1[0x130] + 0xa4))();
    uStack_b0 = 0xff78909f;
    (**(code **)(*piVar4 + 0xc))(&uStack_b0);
    (**(code **)(*param_1 + 0xc))(param_1[0x130],2);
    if (10 < (uint)fVar9) {
                    /* WARNING: Subroutine does not return */
      _free((void *)0x1);
    }
  }
  ExceptionList = unaff_EBP;
  return;
}


//// FUNCTION FUN_006bce70 @ 006bce70 ////

void __fastcall FUN_006bce70(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  void *this;
  undefined4 **unaff_EDI;
  float10 fVar7;
  float afStack_144 [2];
  int aiStack_13c [2];
  undefined4 *puStack_134;
  void *_Memory;
  float fVar9;
  ulonglong uVar8;
  float fVar10;
  undefined4 *local_e8 [2];
  float fStack_e0;
  undefined4 local_dc;
  undefined1 uStack_d6;
  undefined2 *puStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 auStack_a8 [10];
  wchar_t awStack_94 [18];
  void *pvStack_70;
  undefined1 uStack_58;
  undefined1 uStack_38;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ccafc5;
  pvStack_c = ExceptionList;
  local_dc = 0;
  local_e8[0] = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  cVar1 = (**(code **)(*(int *)param_1[0xdc] + 0x34))();
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(int *)param_1[0xe2] + 0x34))(), cVar1 == '\0'))
      && (cVar1 = (**(code **)(*(int *)param_1[0x112] + 0x34))(), cVar1 == '\0')) ||
     (param_1[0x12a] != 0)) {
    local_dc = 0;
    cVar1 = (**(code **)(*(int *)param_1[0xdc] + 0x34))();
    if (cVar1 == '\0') {
      puStack_134 = (undefined4 *)0x0;
      cVar1 = (**(code **)(*(int *)param_1[0xe2] + 0x34))(&DAT_0104cce0,&puStack_134);
      if (cVar1 == '\0') {
        afStack_144[0] = 0.0;
        cVar1 = (**(code **)(*(int *)param_1[0x112] + 0x34))(&DAT_0104cce0,afStack_144);
        if ((cVar1 == '\0') && (param_1[0x12a] != 0)) {
          puVar2 = (undefined4 *)param_1[0x13c];
          if (puVar2 != (undefined4 *)0x0) {
            piVar3 = puVar2 + 0x12;
            *piVar3 = *piVar3 + -1;
            if (*piVar3 == 0) {
              (**(code **)*puVar2)(1);
            }
            (**(code **)(param_1[0x137] + 4))();
            param_1[0x13c] = 0;
            (**(code **)param_1[0x137])();
          }
          puVar2 = (undefined4 *)param_1[0x12a];
          if (puVar2 != (undefined4 *)0x0) {
            piVar3 = puVar2 + 0x12;
            *piVar3 = *piVar3 + -1;
            if (*piVar3 == 0) {
              (**(code **)*puVar2)(1);
            }
            (**(code **)(param_1[0x125] + 4))();
            param_1[0x12a] = 0;
            (**(code **)param_1[0x125])();
          }
        }
      }
    }
  }
  else {
    local_e8[0] = operator_new(0x3fc);
    pvStack_c = (void *)0x0;
    if (local_e8[0] == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00833290(local_e8[0]);
    }
    pvStack_c = (void *)0xffffffff;
    (**(code **)(param_1[0x125] + 4))();
    param_1[0x12a] = (int)puVar2;
    (**(code **)param_1[0x125])();
    piVar3 = (int *)FUN_0071b2a0();
    iVar4 = param_1[0x118];
    fVar7 = (float10)(**(code **)(*piVar3 + 0x10))();
    fVar9 = *(float *)(iVar4 + 0x108);
    fStack_e0 = 150.0;
    fVar10 = 0.0;
    iVar4 = FUN_009b4250();
    if (iVar4 == 9) {
      fVar10 = 5.0;
    }
    if ((float)(fVar7 - (float10)fVar9) < 200.0) {
      fStack_e0 = fVar10 + 125.0;
    }
    puStack_b4 = auStack_a8;
    auStack_a8[0] = 0;
    uStack_b0 = 0;
    uStack_ac = 10;
    uVar5 = FUN_00ace02d(L"<t2><table><tr><td align=center width=");
    FUN_004036d0(&puStack_b4,L"<t2><table><tr><td align=center width=",uVar5);
    pvStack_c = (void *)0x1;
    sVar6 = _swprintf(awStack_94,0xd18f84,SUB84((double)fStack_e0,0));
    FUN_0040cae0(&puStack_b4,awStack_94,sVar6);
    sVar6 = FUN_00ace02d(
                        L"><translate>ONLINEOPTIONS_SERVERPORTINFO</translate></td></tr></table></t2>"
                        );
    FUN_0040cae0(&puStack_b4,
                 L"><translate>ONLINEOPTIONS_SERVERPORTINFO</translate></td></tr></table></t2>",
                 sVar6);
    (**(code **)(*(int *)param_1[0x12a] + 0x54))();
    (**(code **)(*(int *)param_1[0x12a] + 0x84))();
    _Memory = (void *)param_1[0x118];
    (**(code **)(*(int *)param_1[0x12a] + 0x5c))();
    piVar3 = (int *)param_1[0x12a];
    fVar7 = (float10)(**(code **)(**(int **)(param_1[0xe2] + 0x118) + 0x14))();
    fVar9 = (float)fVar7;
    fVar7 = (float10)(**(code **)(*piVar3 + 0x14))();
    fVar9 = (float)(((float10)fVar9 - fVar7) * (float10)0.5);
    (**(code **)(*(int *)param_1[0x12a] + 100))();
    this = operator_new(0x288);
    uVar8 = CONCAT44(fVar9,this);
    if (this == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      unaff_EDI = local_e8;
      local_e8[0] = (undefined4 *)((uint)local_e8[0] & 0xffffff00);
      fVar10 = 2.8026e-44;
      _strncpy((char *)unaff_EDI,"ui/fullsrn_box.dds",0x12);
      uStack_d6 = 0;
      uStack_2c = CONCAT31(uStack_2c._1_3_,3);
      uVar8 = CONCAT44(1,(int)uVar8);
      puVar2 = FUN_005e8fd0(this,(undefined4 *)&stack0xffffff0c);
    }
    uStack_2c = 1;
    if (((uVar8 & 0x100000000) != 0) && (0x14 < (uint)fVar10)) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EDI);
    }
    puVar2[0x9b] = 0x42000000;
    puVar2[0x9c] = 0x41400000;
    puVar2[0x9d] = 0x41400000;
    puVar2[0x9e] = 0x41400000;
    puVar2[0x9f] = 0x41c00000;
    (**(code **)(*(int *)param_1[0x12a] + 0xa0))();
    uVar5 = (uint)uVar8;
    piVar3 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar3 + 0xc))();
    puVar2 = (undefined4 *)param_1[0x13c];
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = puVar2 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        puStack_134 = (undefined4 *)0x6bd1dc;
        (**(code **)*puVar2)();
      }
      (**(code **)(param_1[0x137] + 4))();
      param_1[0x13c] = 0;
      (**(code **)param_1[0x137])();
    }
    puStack_134 = (undefined4 *)0x6bd200;
    puVar2 = operator_new(0x344);
    uStack_38 = 5;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_007432f0(puVar2);
    }
    uStack_38 = 1;
    (**(code **)(param_1[0x137] + 4))();
    param_1[0x13c] = (int)puVar2;
    (**(code **)param_1[0x137])();
    puStack_134 = (undefined4 *)0x42080000;
    aiStack_13c[1] = 0x6bd257;
    (**(code **)(*(int *)param_1[0x13c] + 0x74))();
    aiStack_13c[0] = param_1[0x118];
    aiStack_13c[1] = 0;
    afStack_144[1] = 2.8026e-45;
    afStack_144[0] = 9.901883e-39;
    (**(code **)(*(int *)param_1[0x13c] + 0x5c))();
    piVar3 = (int *)param_1[0x12a];
    iVar4 = *(int *)param_1[0x13c];
    afStack_144[0] = 9.901914e-39;
    fVar7 = (float10)(**(code **)(*piVar3 + 0x14))();
    afStack_144[0] = (float)(fVar7 * (float10)0.5);
    (**(code **)(iVar4 + 100))(1,piVar3);
    puStack_134 = operator_new(0x50);
    uStack_58 = 6;
    if (puStack_134 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_005e4870(puStack_134);
    }
    uStack_58 = 1;
    (**(code **)(*(int *)param_1[0x13c] + 0xa0))(puVar2);
    piVar3 = (int *)(**(code **)(*(int *)param_1[0x13c] + 0xa4))();
    aiStack_13c[0] = -0x876f61;
    (**(code **)(*piVar3 + 0xc))(aiStack_13c);
    (**(code **)(*param_1 + 0xc))(param_1[0x13c],2);
    if (10 < uVar5) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  ExceptionList = pvStack_70;
  return;
}


//// FUNCTION WOnlineAutoConfig_Tick @ 006bd430 ////

void __fastcall WOnlineAutoConfig_Tick(int *param_1)

{
  int iVar1;
  undefined2 *_Memory;
  uint uVar2;
  short *psVar3;
  int *piVar4;
  size_t sVar5;
  void *this;
  undefined4 *puVar6;
  undefined1 *this_00;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint unaff_EBP;
  float10 fVar7;
  ulonglong uVar8;
  uint *local_b8;
  float fStack_b4;
  undefined2 *local_b0;
  uint local_ac;
  uint local_a8;
  undefined2 local_a4 [6];
  char *pcStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  char acStack_8c [20];
  undefined1 *puStack_78;
  char *pcStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  char acStack_68 [28];
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [6];
  void *apvStack_34 [2];
  uint uStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb0bf;
  local_c = ExceptionList;
  local_b8 = (uint *)0x0;
  if ((param_1[0xe3] == 0) && ((char)param_1[0xe4] == '\0')) {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0xe4) = 1;
    psVar3 = FUN_00969740((byte *)"upload.movies.lionhead.com",0x2440,"/pcheck");
    if (psVar3 == (short *)0x0) {
      param_1[0xe3] = 1;
      *(undefined1 *)((int)param_1 + 0x391) = 1;
      goto LAB_006bdac0;
    }
    param_1[0xe3] = 2;
    uVar8 = FUN_00990ae0(extraout_ECX,extraout_EDX);
    param_1[0xe6] = (int)uVar8;
    FUN_006bc250((void *)param_1[0xe2],psVar3);
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4 = 0;
    piVar4 = (int *)FUN_0071b2b0();
    fVar7 = (float10)(**(code **)(*piVar4 + 0x10))();
    fStack_b4 = (float)(fVar7 * (float10)0.33333334 - (float10)50.0);
    sVar5 = FUN_00ace02d(L"<table><tr><td align=center width =");
    FUN_0040cae0(&local_4c,L"<table><tr><td align=center width =",sVar5);
    FUN_0043bd80(&local_4c,fStack_b4);
    sVar5 = FUN_00ace02d(L"><t2><translate>");
    FUN_0040cae0(&local_4c,L"><t2><translate>",sVar5);
    sVar5 = FUN_00ace02d(L"ONLINEOPTIONS_AUTOCONFIG_SUCCEEDED");
    FUN_0040cae0(&local_4c,L"ONLINEOPTIONS_AUTOCONFIG_SUCCEEDED",sVar5);
    sVar5 = FUN_00ace02d(L"</translate></t2></td></tr>");
    FUN_0040cae0(&local_4c,L"</translate></t2></td></tr>",sVar5);
    (**(code **)(*(int *)param_1[0xd6] + 0x54))();
    (**(code **)(*(int *)param_1[0xd6] + 0x84))();
    (**(code **)(*(int *)param_1[0xd6] + 0x30))();
    this = operator_new(0x420);
    if (this == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      pcStack_98 = acStack_8c;
      acStack_8c[0] = '\0';
      uStack_94 = 0;
      uStack_90 = 0x20;
      pcStack_98 = _malloc(0x20);
      _strncpy(pcStack_98,"ONLINE_AUTOCONFIG_CLOSEDIALOG",0x1d);
      uStack_94 = 0x1d;
      pcStack_98[0x1d] = '\0';
      local_b8 = &local_ac;
      local_ac = local_ac & 0xffffff00;
      fStack_b4 = 0.0;
      local_b0 = (undefined2 *)&DAT_00000014;
      _strncpy((char *)local_b8,"button_tick.",0xc);
      fStack_b4 = 1.68156e-44;
      *(char *)(local_b8 + 3) = '\0';
      local_c = (void *)0x3;
      puVar6 = FUN_009b5030(&pcStack_74,&pcStack_98);
      puStack_78 = &stack0xffffff20;
      local_c = (void *)0x4;
      unaff_EBP = 7;
      piVar4 = FUN_0069fb10(this,(int *)&local_b8,puVar6,0x42800000,0x42800000,0,0,0x3f800000,
                            0x3f800000);
    }
    if (((unaff_EBP & 4) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffb, 10 < uStack_6c)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_74);
    }
    if (((unaff_EBP & 2) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffd, &DAT_00000014 < local_b0)) {
                    /* WARNING: Subroutine does not return */
      _free(local_b8);
    }
    local_c = (void *)0x0;
    if (((unaff_EBP & 1) != 0) && (0x14 < uStack_90)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_98);
    }
    (**(code **)(*piVar4 + 100))();
    iVar1 = *piVar4;
    (**(code **)(*param_1 + 0x10))();
    (**(code **)(iVar1 + 0x5c))(1,param_1);
    (**(code **)(*piVar4 + 0x18))(0,FUN_0071b530,param_1,"ONLINE_AUTOCONFIG_CLOSEDIALOG");
    (**(code **)(*param_1 + 0xc))(piVar4,1);
    (**(code **)(*param_1 + 0x84))(0);
    _Memory = local_4c;
    uVar2 = local_44;
  }
  else {
    ExceptionList = &local_c;
    if ((param_1[0xe3] != 1) || (ExceptionList = &local_c, *(char *)((int)param_1 + 0x391) == '\0'))
    goto LAB_006bdac0;
    local_b0 = local_a4;
    local_a4[0] = 0;
    local_ac = 0;
    local_a8 = 10;
    local_4 = 8;
    ExceptionList = &local_c;
    piVar4 = (int *)FUN_0071b2b0();
    fVar7 = (float10)(**(code **)(*piVar4 + 0x10))();
    fStack_b4 = (float)(fVar7 * (float10)0.33333334 - (float10)50.0);
    sVar5 = FUN_00ace02d(L"<table><tr><td align=center width =");
    FUN_0040cae0(&local_b0,L"<table><tr><td align=center width =",sVar5);
    FUN_0043bd80(&local_b0,fStack_b4);
    sVar5 = FUN_00ace02d(L"><t2><translate>");
    FUN_0040cae0(&local_b0,L"><t2><translate>",sVar5);
    sVar5 = FUN_00ace02d(L"ONLINEOPTIONS_AUTOCONFIG_FAILED");
    FUN_0040cae0(&local_b0,L"ONLINEOPTIONS_AUTOCONFIG_FAILED",sVar5);
    param_1[0xe3] = 1;
    sVar5 = FUN_00ace02d(L"</translate></t2></td></tr>");
    FUN_0040cae0(&local_b0,L"</translate></t2></td></tr>",sVar5);
    (**(code **)(*(int *)param_1[0xd6] + 0x54))();
    (**(code **)(*(int *)param_1[0xd6] + 0x84))();
    (**(code **)(*(int *)param_1[0xd6] + 0x30))();
    this_00 = operator_new(0x420);
    puStack_78 = this_00;
    if (this_00 == (undefined1 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      pcStack_74 = acStack_68;
      acStack_68[0] = '\0';
      uStack_70 = 0;
      uStack_6c = 0x20;
      pcStack_74 = _malloc(0x20);
      _strncpy(pcStack_74,"ONLINE_AUTOCONFIG_CLOSEDIALOG",0x1d);
      uStack_70 = 0x1d;
      pcStack_74[0x1d] = '\0';
      pcStack_98 = acStack_8c;
      acStack_8c[0] = '\0';
      uStack_94 = 0;
      uStack_90 = 0x14;
      _strncpy(pcStack_98,"button_tick.",0xc);
      uStack_94 = 0xc;
      pcStack_98[0xc] = '\0';
      local_c = (void *)0xb;
      puVar6 = FUN_009b5030(apvStack_34,&pcStack_74);
      local_c = (void *)0xc;
      unaff_EBP = 0x38;
      piVar4 = FUN_0069fb10(this_00,(int *)&pcStack_98,puVar6,0x42800000,0x42800000,0,0,0x3f800000,
                            0x3f800000);
    }
    if (((unaff_EBP & 0x20) != 0) && (unaff_EBP = unaff_EBP & 0xffffffdf, 10 < uStack_2c)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_34[0]);
    }
    if (((unaff_EBP & 0x10) != 0) && (unaff_EBP = unaff_EBP & 0xffffffef, 0x14 < uStack_90)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_98);
    }
    local_c = (void *)0x8;
    if (((unaff_EBP & 8) != 0) && (0x14 < uStack_6c)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_74);
    }
    (**(code **)(*piVar4 + 100))();
    iVar1 = *piVar4;
    (**(code **)(*param_1 + 0x10))();
    (**(code **)(iVar1 + 0x5c))(1,param_1);
    (**(code **)(*piVar4 + 0x18))(0,FUN_0071b530,param_1,"ONLINE_AUTOCONFIG_CLOSEDIALOG");
    (**(code **)(*param_1 + 0xc))(piVar4,1);
    (**(code **)(*param_1 + 0x84))(0);
    uVar8 = FUN_00990ae0(extraout_ECX_00,extraout_EDX_00);
    param_1[0xe5] = (int)uVar8;
    *(undefined1 *)((int)param_1 + 0x391) = 0;
    _Memory = local_b0;
    uVar2 = local_a8;
  }
  local_4 = 0xffffffff;
  if (10 < uVar2) {
    local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
LAB_006bdac0:
  WWindow_Tick(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006bdb10 @ 006bdb10 ////

void __thiscall FUN_006bdb10(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d3df88;
  *(int *)((int)this + 0x14) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_006bdb50 @ 006bdb50 ////

void __fastcall FUN_006bdb50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3df88;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_006bdba0 @ 006bdba0 ////

void __fastcall FUN_006bdba0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3dfb4;
  param_1[0x14] = &PTR_LAB_00d3df98;
  param_1[0x150] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x152] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x152] = param_1[0x151];
  }
  if (param_1[0x151] != 0) {
    *(undefined4 *)(param_1[0x151] + 4) = param_1[0x152];
  }
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x155] = 0;
  if ((undefined4 *)param_1[0x152] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x152] = param_1[0x151];
  }
  if (param_1[0x151] != 0) {
    *(undefined4 *)(param_1[0x151] + 4) = param_1[0x152];
  }
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  if (10 < (uint)param_1[0x147]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x145]);
  }
  if (10 < (uint)param_1[0x13f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x13d]);
  }
  param_1[0x137] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x139] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x139] = param_1[0x138];
  }
  if (param_1[0x138] != 0) {
    *(undefined4 *)(param_1[0x138] + 4) = param_1[0x139];
  }
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13c] = 0;
  if ((undefined4 *)param_1[0x139] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x139] = param_1[0x138];
  }
  if (param_1[0x138] != 0) {
    *(undefined4 *)(param_1[0x138] + 4) = param_1[0x139];
  }
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x131] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x133] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x133] = param_1[0x132];
  }
  if (param_1[0x132] != 0) {
    *(undefined4 *)(param_1[0x132] + 4) = param_1[0x133];
  }
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x136] = 0;
  if ((undefined4 *)param_1[0x133] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x133] = param_1[0x132];
  }
  if (param_1[0x132] != 0) {
    *(undefined4 *)(param_1[0x132] + 4) = param_1[0x133];
  }
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[299] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x12d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12d] = param_1[300];
  }
  if (param_1[300] != 0) {
    *(undefined4 *)(param_1[300] + 4) = param_1[0x12d];
  }
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x130] = 0;
  if ((undefined4 *)param_1[0x12d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12d] = param_1[300];
  }
  if (param_1[300] != 0) {
    *(undefined4 *)(param_1[300] + 4) = param_1[0x12d];
  }
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x125] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x127] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x127] = param_1[0x126];
  }
  if (param_1[0x126] != 0) {
    *(undefined4 *)(param_1[0x126] + 4) = param_1[0x127];
  }
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x12a] = 0;
  if ((undefined4 *)param_1[0x127] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x127] = param_1[0x126];
  }
  if (param_1[0x126] != 0) {
    *(undefined4 *)(param_1[0x126] + 4) = param_1[0x127];
  }
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x11f] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x121] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x121] = param_1[0x120];
  }
  if (param_1[0x120] != 0) {
    *(undefined4 *)(param_1[0x120] + 4) = param_1[0x121];
  }
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x124] = 0;
  if ((undefined4 *)param_1[0x121] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x121] = param_1[0x120];
  }
  if (param_1[0x120] != 0) {
    *(undefined4 *)(param_1[0x120] + 4) = param_1[0x121];
  }
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x119] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x11b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11b] = param_1[0x11a];
  }
  if (param_1[0x11a] != 0) {
    *(undefined4 *)(param_1[0x11a] + 4) = param_1[0x11b];
  }
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11e] = 0;
  if ((undefined4 *)param_1[0x11b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11b] = param_1[0x11a];
  }
  if (param_1[0x11a] != 0) {
    *(undefined4 *)(param_1[0x11a] + 4) = param_1[0x11b];
  }
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x113] = &PTR_FUN_00d322b0;
  if ((undefined4 *)param_1[0x115] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x115] = param_1[0x114];
  }
  if (param_1[0x114] != 0) {
    *(undefined4 *)(param_1[0x114] + 4) = param_1[0x115];
  }
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x118] = 0;
  if ((undefined4 *)param_1[0x115] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x115] = param_1[0x114];
  }
  if (param_1[0x114] != 0) {
    *(undefined4 *)(param_1[0x114] + 4) = param_1[0x115];
  }
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x10d] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x10f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10f] = param_1[0x10e];
  }
  if (param_1[0x10e] != 0) {
    *(undefined4 *)(param_1[0x10e] + 4) = param_1[0x10f];
  }
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x112] = 0;
  if ((undefined4 *)param_1[0x10f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10f] = param_1[0x10e];
  }
  if (param_1[0x10e] != 0) {
    *(undefined4 *)(param_1[0x10e] + 4) = param_1[0x10f];
  }
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x107] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x109] = param_1[0x108];
  }
  if (param_1[0x108] != 0) {
    *(undefined4 *)(param_1[0x108] + 4) = param_1[0x109];
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10c] = 0;
  if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x109] = param_1[0x108];
  }
  if (param_1[0x108] != 0) {
    *(undefined4 *)(param_1[0x108] + 4) = param_1[0x109];
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x101] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x103] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x103] = param_1[0x102];
  }
  if (param_1[0x102] != 0) {
    *(undefined4 *)(param_1[0x102] + 4) = param_1[0x103];
  }
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x106] = 0;
  if ((undefined4 *)param_1[0x103] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x103] = param_1[0x102];
  }
  if (param_1[0x102] != 0) {
    *(undefined4 *)(param_1[0x102] + 4) = param_1[0x103];
  }
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0xfb] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xfd] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfd] = param_1[0xfc];
  }
  if (param_1[0xfc] != 0) {
    *(undefined4 *)(param_1[0xfc] + 4) = param_1[0xfd];
  }
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0x100] = 0;
  if ((undefined4 *)param_1[0xfd] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfd] = param_1[0xfc];
  }
  if (param_1[0xfc] != 0) {
    *(undefined4 *)(param_1[0xfc] + 4) = param_1[0xfd];
  }
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xf5] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xf7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf7] = param_1[0xf6];
  }
  if (param_1[0xf6] != 0) {
    *(undefined4 *)(param_1[0xf6] + 4) = param_1[0xf7];
  }
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xfa] = 0;
  if ((undefined4 *)param_1[0xf7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf7] = param_1[0xf6];
  }
  if (param_1[0xf6] != 0) {
    *(undefined4 *)(param_1[0xf6] + 4) = param_1[0xf7];
  }
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xef] = &PTR_FUN_00d2dba4;
  if ((undefined4 *)param_1[0xf1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf1] = param_1[0xf0];
  }
  if (param_1[0xf0] != 0) {
    *(undefined4 *)(param_1[0xf0] + 4) = param_1[0xf1];
  }
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  if ((undefined4 *)param_1[0xf1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf1] = param_1[0xf0];
  }
  if (param_1[0xf0] != 0) {
    *(undefined4 *)(param_1[0xf0] + 4) = param_1[0xf1];
  }
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xe9] = &PTR_FUN_00d2dba4;
  if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xeb] = param_1[0xea];
  }
  if (param_1[0xea] != 0) {
    *(undefined4 *)(param_1[0xea] + 4) = param_1[0xeb];
  }
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xee] = 0;
  if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xeb] = param_1[0xea];
  }
  if (param_1[0xea] != 0) {
    *(undefined4 *)(param_1[0xea] + 4) = param_1[0xeb];
  }
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xe3] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xe5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe5] = param_1[0xe4];
  }
  if (param_1[0xe4] != 0) {
    *(undefined4 *)(param_1[0xe4] + 4) = param_1[0xe5];
  }
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  if ((undefined4 *)param_1[0xe5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe5] = param_1[0xe4];
  }
  if (param_1[0xe4] != 0) {
    *(undefined4 *)(param_1[0xe4] + 4) = param_1[0xe5];
  }
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xdd] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xd7] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd1] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd6] = 0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_006be610 @ 006be610 ////

void __fastcall FUN_006be610(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  int **this;
  size_t sVar6;
  bool bVar7;
  float10 fVar8;
  undefined4 uVar10;
  longlong lVar9;
  float fVar11;
  undefined4 *puStack_208;
  undefined4 *puStack_1c8;
  code *_Dest;
  char *pcVar12;
  char *pcVar13;
  void *pvStack_19c;
  uint uStack_198;
  uint uStack_194;
  int *piStack_190;
  uint uStack_18c;
  undefined4 *puStack_188;
  int *piStack_184;
  int **ppiStack_180;
  void *_Memory;
  undefined4 **ppuVar14;
  int *piStack_174;
  undefined4 uStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint *puStack_160;
  void *pvStack_15c;
  uint uStack_158;
  uint uStack_154;
  void *apvStack_11c [2];
  undefined4 *puStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 uStack_d4;
  undefined4 uStack_94;
  undefined4 uStack_54;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb203;
  pvStack_c = ExceptionList;
  uStack_154 = 0x6be641;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x344);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007432f0(puVar2);
  }
  uStack_154 = *(uint *)(*(int *)(param_1 + 0x418) + 0x118);
  uStack_158 = 2;
  local_4 = 0xffffffff;
  pvStack_15c = (void *)0x6be682;
  (**(code **)(*piVar3 + 100))();
  puStack_160 = *(uint **)(param_1 + 0x460);
  pvStack_15c = (void *)0x41200000;
  uStack_164 = 1;
  uStack_168 = 0x6be697;
  (**(code **)(*piVar3 + 0x5c))();
  iVar1 = *piVar3;
  uStack_168 = 0x42800000;
  fStack_16c = 9.909143e-39;
  fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  fStack_16c = (float)(fVar8 - (float10)16.0);
  uStack_170 = 0x6be6b8;
  (**(code **)(iVar1 + 0x74))();
  uStack_170 = 1;
  piStack_174 = piVar3;
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))();
  puStack_160 = operator_new(0x3fc);
  uStack_2c = 1;
  if (puStack_160 == (uint *)0x0) {
    puStack_160 = (uint *)0x0;
  }
  else {
    puStack_160 = FUN_00833290(puStack_160);
  }
  uStack_2c = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x41c) + 4))();
  *(uint **)(param_1 + 0x430) = puStack_160;
  (*(code *)**(undefined4 **)(param_1 + 0x41c))();
  puStack_114 = &uStack_108;
  uStack_108 = (void *)((uint)uStack_108._2_2_ << 0x10);
  uStack_110 = 0;
  uStack_10c = 10;
  uVar4 = FUN_00ace02d(
                      L"<t2><table><tr><td align=center width=364><translate>ONLINEOPTIONS_SERVERPORTLABEL</translate></td></tr></table></t2>"
                      );
  ppiStack_180 = (int **)0x6be756;
  FUN_004036d0(&puStack_114,
               L"<t2><table><tr><td align=center width=364><translate>ONLINEOPTIONS_SERVERPORTLABEL</translate></td></tr></table></t2>"
               ,uVar4);
  ppuVar14 = &puStack_114;
  uStack_2c = 2;
  (**(code **)(**(int **)(param_1 + 0x430) + 0x54))();
  _Memory = (void *)0x0;
  ppiStack_180 = (int **)0x6be780;
  (**(code **)(**(int **)(param_1 + 0x430) + 0x84))();
  ppiStack_180 = (int **)0x40800000;
  puStack_188 = (undefined4 *)0x1;
  uStack_18c = 0x6be793;
  piStack_184 = piVar3;
  (**(code **)(**(int **)(param_1 + 0x430) + 100))();
  uStack_18c = 0x41800000;
  uStack_194 = 1;
  uStack_198 = 0x6be7a6;
  piStack_190 = piVar3;
  (**(code **)(**(int **)(param_1 + 0x430) + 0x5c))();
  pvStack_19c = *(void **)(param_1 + 0x430);
  uStack_198 = 1;
  (**(code **)(*piVar3 + 0xc))();
  pvVar5 = operator_new(0x420);
  if (pvVar5 == (void *)0x0) {
    puStack_188 = (undefined4 *)0x0;
  }
  else {
    ppiStack_180 = &piStack_174;
    piStack_174 = (int *)((uint)piStack_174 & 0xffffff00);
    ppuVar14 = (undefined4 **)0x20;
    puStack_188 = pvVar5;
    ppiStack_180 = _malloc(0x20);
    _strncpy((char *)ppiStack_180,"ONLINEOPTIONS_SERVERPORTDOWN",0x1c);
    _Memory = (void *)0x1c;
    *(char *)(ppiStack_180 + 7) = '\0';
    puStack_160 = &uStack_154;
    uStack_154 = uStack_154 & 0xffffff00;
    pvStack_15c = (void *)0x0;
    uStack_158 = 0x14;
    _strncpy((char *)puStack_160,"button_left.",0xc);
    pvStack_15c = (void *)0xc;
    *(char *)(puStack_160 + 3) = '\0';
    uStack_54 = 5;
    uStack_18c = 3;
    puVar2 = FUN_009b5030(apvStack_11c,&ppiStack_180);
    uStack_54 = 6;
    uStack_18c = 7;
    puStack_188 = FUN_0069fb10(pvVar5,(int *)&puStack_160,puVar2,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  uStack_54 = 9;
  (**(code **)(*(int *)(param_1 + 0x374) + 4))();
  *(undefined4 **)(param_1 + 0x388) = puStack_188;
  (*(code *)**(undefined4 **)(param_1 + 0x374))();
  if (((uStack_18c & 4) != 0) &&
     (uStack_18c = uStack_18c & 0xfffffffb, &lpType_0000000a < puStack_114)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_11c[0]);
  }
  if (((uStack_18c & 2) != 0) && (uStack_18c = uStack_18c & 0xfffffffd, 0x14 < uStack_158)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_160);
  }
  uStack_54 = 2;
  if (((uStack_18c & 1) != 0) && (uStack_18c = uStack_18c & 0xfffffffe, &DAT_00000014 < ppuVar14)) {
                    /* WARNING: Subroutine does not return */
    _free(ppiStack_180);
  }
  pcVar13 = (char *)0x41800000;
  (**(code **)(**(int **)(param_1 + 0x388) + 0x5c))();
  (**(code **)(**(int **)(param_1 + 0x388) + 100))();
  pcVar12 = "ONLINEOPTIONS_SERVERPORTDOWN";
  _Dest = FUN_006bb650;
  (**(code **)(**(int **)(param_1 + 0x388) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x388) + 0x18))();
  FUN_0073e8b0(*(void **)(param_1 + 0x388),1);
  (**(code **)(*piVar3 + 0xc))();
  this = operator_new(0x420);
  bVar7 = this == (int **)0x0;
  ppiStack_180 = this;
  if (bVar7) {
    puStack_1c8 = (undefined4 *)0x0;
  }
  else {
    uStack_194 = uStack_194 & 0xffffff00;
    pvStack_19c = (void *)0x0;
    uStack_198 = 0x20;
    pcVar13 = _malloc(0x20);
    _strncpy(pcVar13,"ONLINEOPTIONS_SERVERPORTUP",0x1a);
    pvStack_19c = (void *)0x1a;
    pcVar13[0x1a] = '\0';
    _Dest = (code *)&stack0xfffffe4c;
    pcVar12 = (char *)0x14;
    _strncpy((char *)_Dest,"button_right.",0xd);
    _Dest[0xd] = (code)0x0;
    uStack_94 = 0xc;
    puVar2 = FUN_009b5030(&pvStack_15c,(undefined4 *)&stack0xfffffe60);
    uStack_94 = 0xd;
    puStack_1c8 = FUN_0069fb10(this,(int *)&stack0xfffffe40,puVar2,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  uStack_94 = 0x10;
  (**(code **)(*(int *)(param_1 + 0x35c) + 4))();
  *(undefined4 **)(param_1 + 0x370) = puStack_1c8;
  (*(code *)**(undefined4 **)(param_1 + 0x35c))();
  if ((!bVar7) && (10 < uStack_154)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_15c);
  }
  if ((!bVar7) && ((char *)0x14 < pcVar12)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  uStack_94 = 2;
  if ((!bVar7) && (0x14 < uStack_198)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar13);
  }
  pcVar13 = (char *)0x41800000;
  pvVar5 = (void *)0x2;
  (**(code **)(**(int **)(param_1 + 0x370) + 0x60))();
  (**(code **)(**(int **)(param_1 + 0x370) + 100))();
  (**(code **)(**(int **)(param_1 + 0x370) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x370) + 0x18))();
  FUN_0073e8b0(*(void **)(param_1 + 0x370),0);
  (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x370));
  uVar4 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&stack0xfffffe44,L"<s1><table><tr><td align=center width=",uVar4);
  sVar6 = _swprintf((wchar_t *)&pvStack_15c,0xd18f84,SUB84((double)*(float *)(param_1 + 0x538),0));
  FUN_0040cae0(&stack0xfffffe44,(wchar_t *)&pvStack_15c,sVar6);
  sVar6 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&stack0xfffffe44,L">",sVar6);
  iVar1 = *(int *)(param_1 + 0x53c);
  *(int *)(param_1 + 0x534) = iVar1;
  if (iVar1 == 1) {
    uVar4 = 0x20;
    pcVar13 = _malloc(0x20);
    _strncpy(pcVar13,"ONLINEOPTIONS_SERVERPORTONE",0x1b);
    pcVar13[0x1b] = '\0';
    uStack_d4 = 0x11;
    puVar2 = FUN_009b5030((undefined4 *)&stack0xfffffe84,(undefined4 *)&stack0xfffffe20);
    FUN_0040cae0(&stack0xfffffe44,(wchar_t *)*puVar2,puVar2[1]);
    if (&lpType_0000000a < piStack_174) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    uStack_d4 = 2;
    if (0x14 < uVar4) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar13);
    }
    uVar4 = 1;
    (**(code **)(**(int **)(param_1 + 0x370) + 0xc0))();
    lVar9 = (ulonglong)uVar4 << 0x20;
  }
  else {
    if (iVar1 != 2) goto LAB_006bee13;
    uVar4 = 0x20;
    pcVar12 = _malloc(0x20);
    _strncpy(pcVar12,"ONLINEOPTIONS_SERVERPORTTWO",0x1b);
    pcVar12[0x1b] = '\0';
    uStack_d4 = 0x12;
    puVar2 = FUN_009b5030(&pvStack_19c,(undefined4 *)&stack0xfffffe00);
    FUN_0040cae0(&stack0xfffffe44,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < uStack_194) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_19c);
    }
    uStack_d4 = 2;
    if (0x14 < uVar4) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar12);
    }
    uVar10 = 0;
    (**(code **)(**(int **)(param_1 + 0x370) + 0xc0))();
    lVar9 = CONCAT44(uVar10,1);
  }
  (**(code **)(**(int **)(param_1 + 0x388) + 0xc0))(lVar9);
LAB_006bee13:
  sVar6 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(&stack0xfffffe44,L"</td></tr></table></s1>",sVar6);
  puVar2 = operator_new(0x3fc);
  uStack_d4 = 0x13;
  if (puVar2 == (undefined4 *)0x0) {
    puStack_208 = (undefined4 *)0x0;
  }
  else {
    puStack_208 = FUN_00833290(puVar2);
  }
  uStack_d4 = 2;
  (**(code **)(*(int *)(param_1 + 0x434) + 4))();
  *(undefined4 **)(param_1 + 0x448) = puStack_208;
  (*(code *)**(undefined4 **)(param_1 + 0x434))();
  (**(code **)(**(int **)(param_1 + 0x448) + 0x54))();
  (**(code **)(**(int **)(param_1 + 0x448) + 0x84))(0);
  fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x448) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x448) + 100))
            (2,*(undefined4 *)(param_1 + 0x430),(float)-(((float10)64.0 - fVar8) * (float10)0.5));
  FUN_00830550(*(void **)(param_1 + 0x448),9,&stack0xfffffde8);
  fVar11 = *(float *)(*(int *)(param_1 + 0x370) + 0xc0) -
           *(float *)(*(int *)(param_1 + 0x388) + 0x108);
  fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x448) + 0x10))();
  (**(code **)(**(int **)(param_1 + 0x448) + 0x5c))
            (2,*(undefined4 *)(param_1 + 0x388),(float)-(((float10)fVar11 - fVar8) * (float10)0.5));
  (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x448),1);
  (**(code **)(*piVar3 + 0x8c))(0x41800000);
  if (&lpType_0000000a < pcVar13) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar5);
  }
  ExceptionList = uStack_108;
  return;
}


//// FUNCTION FUN_006befa0 @ 006befa0 ////

int * __thiscall FUN_006befa0(void *this,int param_1)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  size_t sVar4;
  void *this_00;
  undefined4 *puVar5;
  undefined4 unaff_EBX;
  float10 fVar6;
  undefined2 *local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined2 local_c4 [10];
  char *pcStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  char acStack_a4 [20];
  void *local_90;
  wchar_t awStack_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb297;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_90 = this;
  FUN_007432f0(this);
  piVar1 = (int *)((int)this + 0x344);
  *(undefined ***)this = &PTR_FUN_00d3e244;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3e22c;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(int **)((int)this + 0x350) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x370) = 0;
  piVar3 = (int *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(int **)((int)this + 0x380) = piVar3;
  *piVar3 = (int)&PTR_FUN_00d3df88;
  *(undefined4 *)((int)this + 0x388) = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  if (param_1 != 0) {
    (**(code **)(*piVar3 + 4))();
    *(int *)((int)this + 0x388) = param_1;
    (**(code **)*piVar3)();
    local_d0 = local_c4;
    *(undefined1 *)((int)this + 0x390) = 0;
    *(undefined1 *)((int)this + 0x391) = 0;
    *(undefined4 *)((int)this + 0x394) = 0;
    local_c4[0] = 0;
    local_cc = 0;
    local_c8 = 10;
    local_4._0_1_ = 4;
    piVar3 = (int *)FUN_0071b2b0();
    fVar6 = (float10)(**(code **)(*piVar3 + 0x10))();
    fVar2 = (float)(fVar6 * (float10)0.33333334 - (float10)50.0);
    sVar4 = FUN_00ace02d(L"<table><tr><td align=center width =");
    FUN_0040cae0(&local_d0,L"<table><tr><td align=center width =",sVar4);
    sVar4 = _swprintf(awStack_8c,0xd18f84,SUB84((double)fVar2,0));
    FUN_0040cae0(&local_d0,awStack_8c,sVar4);
    sVar4 = FUN_00ace02d(L"><t2><translate>");
    FUN_0040cae0(&local_d0,L"><t2><translate>",sVar4);
    sVar4 = FUN_00ace02d(L"ONLINEOPTIONS_AUTOCONFIG_CONNECTING");
    FUN_0040cae0(&local_d0,L"ONLINEOPTIONS_AUTOCONFIG_CONNECTING",sVar4);
    *(undefined4 *)((int)this + 0x38c) = 0;
    sVar4 = FUN_00ace02d(L"</translate></t2></td></tr>");
    FUN_0040cae0(&local_d0,L"</translate></t2></td></tr>",sVar4);
    this_00 = operator_new(0x288);
    if (this_00 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      pcStack_b0 = acStack_a4;
      acStack_a4[0] = '\0';
      uStack_ac = 0;
      uStack_a8 = 0x14;
      _strncpy(pcStack_b0,"ui/fullsrn_box.dds",0x12);
      uStack_ac = 0x12;
      pcStack_b0[0x12] = '\0';
      local_4 = CONCAT31(local_4._1_3_,6);
      puVar5 = FUN_005e8fd0(this_00,&pcStack_b0);
    }
    local_4 = 4;
    if ((this_00 != (void *)0x0) && (0x14 < uStack_a8)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_b0);
    }
    puVar5[0x9c] = 0x41400000;
    puVar5[0x9d] = 0x41400000;
    puVar5[0x9b] = 0x42000000;
    puVar5[0x9e] = 0x41c00000;
    puVar5[0x9f] = 0x41c00000;
    FUN_0073fae0(this,puVar5);
    FUN_0073f410(this,fVar2);
    puVar5 = operator_new(0x3fc);
    local_4._0_1_ = 8;
    if (puVar5 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_00833290(puVar5);
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    (**(code **)(*piVar3 + 0x54))();
    (**(code **)(*piVar3 + 0x78))(unaff_EBX);
    (**(code **)(*piVar3 + 0x84))(0);
    (**(code **)(*piVar3 + 100))(1,this,0);
    (**(code **)(*piVar3 + 0x5c))(1,this,0x41c80000);
    (**(code **)(*piVar3 + 0x14))();
    (**(code **)(*piVar3 + 0x30))();
    (**(code **)(*piVar1 + 4))();
    *(int **)((int)this + 0x358) = piVar3;
    (**(code **)*piVar1)();
    FUN_0073f6e0(this,piVar3);
    FUN_0073f500(this);
    if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
      _free(local_d0);
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006bf300 @ 006bf300 ////

void __fastcall FUN_006bf300(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3e244;
  param_1[0x14] = &PTR_FUN_00d3e22c;
  param_1[0xdd] = &PTR_FUN_00d3df88;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xd7] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd1] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd6] = 0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_006bf470 @ 006bf470 ////

int * __cdecl FUN_006bf470(int *param_1)

{
  int iVar1;
  void *this;
  int *piVar2;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb2bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x39c);
  piVar3 = (int *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    piVar3 = FUN_006befa0(this,(int)param_1);
  }
  iVar1 = *piVar3;
  local_4 = 0xffffffff;
  fVar4 = (float10)(**(code **)(*param_1 + 0x10))();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x10))();
  (**(code **)(iVar1 + 0x5c))(1,param_1,(float)(((float10)(float)fVar4 - fVar5) * (float10)0.5));
  iVar1 = *piVar3;
  fVar4 = (float10)(**(code **)(*param_1 + 0x14))();
  puStack_8 = (undefined1 *)(float)fVar4;
  fVar4 = (float10)(**(code **)(*piVar3 + 0x14))();
  (**(code **)(iVar1 + 100))(1,param_1,(float)(((float10)(float)puStack_8 - fVar4) * (float10)0.5));
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xac))(piVar3);
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))(piVar3,1);
  ExceptionList = param_1;
  return piVar3;
}


//// FUNCTION FUN_006bf550 @ 006bf550 ////

undefined4 * __thiscall FUN_006bf550(void *this,byte param_1)

{
  FUN_006bdba0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006bf5f0 @ 006bf5f0 ////

undefined4 * __thiscall FUN_006bf5f0(void *this,byte param_1)

{
  FUN_006bf300(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006bf610 @ 006bf610 ////

void __fastcall FUN_006bf610(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *this;
  size_t sVar4;
  float10 fVar5;
  float fVar6;
  undefined1 *puVar7;
  undefined4 *puStack_140;
  uint uStack_13c;
  char *pcStack_134;
  undefined4 uStack_130;
  uint uVar8;
  char *pcStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  char acStack_e8 [20];
  void *apvStack_d4 [2];
  uint uStack_cc;
  void *pvStack_9c;
  undefined4 uStack_6c;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb36b;
  pvStack_c = ExceptionList;
  uStack_130 = 0x6bf641;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x344);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007432f0(puVar2);
  }
  uStack_130 = *(undefined4 *)(param_1 + 0x460);
  uVar8 = 0x42400000;
  pcStack_134 = (char *)0x1;
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 100))();
  uStack_13c = *(uint *)(param_1 + 0x460);
  (**(code **)(*piVar3 + 0x5c))();
  iVar1 = *piVar3;
  (**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  (**(code **)(iVar1 + 0x74))();
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))();
  this = operator_new(0x420);
  if (this == (void *)0x0) {
    puStack_140 = (undefined4 *)0x0;
  }
  else {
    pcStack_f4 = acStack_e8;
    acStack_e8[0] = '\0';
    uStack_f0 = 0;
    uStack_ec = 0x20;
    pcStack_f4 = _malloc(0x20);
    _strncpy(pcStack_f4,"ONLINEOPTIONS_AUTOCONFIGURE",0x1b);
    uStack_f0 = 0x1b;
    pcStack_f4[0x1b] = '\0';
    pcStack_134 = &stack0xfffffed8;
    uStack_130 = 0;
    uVar8 = 0x14;
    _strncpy(pcStack_134,"button_tick.",0xc);
    uStack_130 = 0xc;
    pcStack_134[0xc] = '\0';
    uStack_2c = 3;
    puVar2 = FUN_009b5030(apvStack_d4,&pcStack_f4);
    uStack_2c = 4;
    uStack_13c = 7;
    puStack_140 = FUN_0069fb10(this,(int *)&pcStack_134,puVar2,0x42800000,0x42800000,0,0,0x3f800000,
                               0x3f800000);
  }
  uStack_2c = 7;
  (**(code **)(*(int *)(param_1 + 0x344) + 4))();
  *(undefined4 **)(param_1 + 0x358) = puStack_140;
  (*(code *)**(undefined4 **)(param_1 + 0x344))();
  if (((uStack_13c & 4) != 0) && (uStack_13c = uStack_13c & 0xfffffffb, 10 < uStack_cc)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_d4[0]);
  }
  if (((uStack_13c & 2) != 0) && (uStack_13c = uStack_13c & 0xfffffffd, 0x14 < uVar8)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_134);
  }
  uStack_2c = 0xffffffff;
  if (((uStack_13c & 1) != 0) && (0x14 < uStack_ec)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_f4);
  }
  (**(code **)(**(int **)(param_1 + 0x358) + 0x60))();
  (**(code **)(**(int **)(param_1 + 0x358) + 100))(1,piVar3);
  puVar7 = &LAB_006bf5d0;
  (**(code **)(**(int **)(param_1 + 0x358) + 0x18))(0,&LAB_006bf5d0,0,"ONLINEOPTIONS_AUTOCONFIGURE")
  ;
  (**(code **)(**(int **)(param_1 + 0x358) + 0x18))(5,&LAB_005f37f0,0);
  FUN_0073e8b0(*(void **)(param_1 + 0x358),0);
  (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x358),1);
  puVar2 = operator_new(0x3fc);
  uStack_6c = 8;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00833290(puVar2);
  }
  uStack_6c = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x3d4) + 4))();
  *(undefined4 **)(param_1 + 1000) = puVar2;
  (*(code *)**(undefined4 **)(param_1 + 0x3d4))();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x10))();
  fVar6 = (float)((fVar5 - (float10)128.0) - (float10)32.0);
  uVar8 = FUN_00ace02d(L"<t2><table><tr><td align=center width=");
  FUN_004036d0(&stack0xfffffeac,L"<t2><table><tr><td align=center width=",uVar8);
  uStack_6c = 9;
  sVar4 = _swprintf((wchar_t *)&pcStack_f4,0xd18f84,SUB84((double)fVar6,0));
  FUN_0040cae0(&stack0xfffffeac,(wchar_t *)&pcStack_f4,sVar4);
  sVar4 = FUN_00ace02d(
                      L"><translate>ONLINEOPTIONS_AUTOCONFIGLABEL</translate></td></tr></table></t2>"
                      );
  FUN_0040cae0(&stack0xfffffeac,
               L"><translate>ONLINEOPTIONS_AUTOCONFIGLABEL</translate></td></tr></table></t2>",sVar4
              );
  (**(code **)(**(int **)(param_1 + 1000) + 0x54))();
  (**(code **)(**(int **)(param_1 + 1000) + 0x84))(0);
  fVar5 = (float10)(**(code **)(**(int **)(param_1 + 1000) + 0x14))();
  (**(code **)(**(int **)(param_1 + 1000) + 100))
            (1,piVar3,(float)((float10)48.0 - fVar5 * (float10)0.5));
  (**(code **)(**(int **)(param_1 + 1000) + 0x5c))(1,piVar3,0x42a00000);
  (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 1000),1);
  if ((undefined1 *)0xa < puVar7) {
                    /* WARNING: Subroutine does not return */
    _free("ONLINEOPTIONS_AUTOCONFIGURE");
  }
  ExceptionList = pvStack_9c;
  return;
}


//// FUNCTION FUN_006bfa70 @ 006bfa70 ////

/* WARNING: Removing unreachable block (ram,0x006c0140) */
/* WARNING: Removing unreachable block (ram,0x006c014e) */
/* WARNING: Removing unreachable block (ram,0x006c015b) */
/* WARNING: Removing unreachable block (ram,0x006c02f0) */
/* WARNING: Removing unreachable block (ram,0x006c0211) */
/* WARNING: Removing unreachable block (ram,0x006c02f4) */
/* WARNING: Removing unreachable block (ram,0x006c0324) */
/* WARNING: Removing unreachable block (ram,0x006c033b) */
/* WARNING: Removing unreachable block (ram,0x006c034b) */
/* WARNING: Removing unreachable block (ram,0x006c0352) */
/* WARNING: Removing unreachable block (ram,0x006c0365) */
/* WARNING: Removing unreachable block (ram,0x006c0372) */
/* WARNING: Removing unreachable block (ram,0x006c0384) */
/* WARNING: Removing unreachable block (ram,0x006c038a) */
/* WARNING: Removing unreachable block (ram,0x006c0397) */

int * __fastcall FUN_006bfa70(int *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  char *_Dest;
  undefined4 *puStack_a4;
  uint *local_9c;
  char *pcStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  char acStack_8c [20];
  char *pcStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  char acStack_6c [20];
  undefined1 auStack_58 [4];
  void *pvStack_54;
  char *pcStack_50;
  uint uStack_4c;
  uint uStack_48;
  char acStack_44 [20];
  void *apvStack_30 [2];
  uint uStack_28;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb568;
  pvStack_c = ExceptionList;
  local_9c = (uint *)0x0;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  FUN_007432f0(param_1);
  *param_1 = (int)&PTR_FUN_00d3dfb4;
  param_1[0x14] = (int)&PTR_LAB_00d3df98;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = (int)(param_1 + 0xd1);
  param_1[0xd1] = (int)&PTR_FUN_00d172a0;
  param_1[0xd6] = 0;
  param_1[0xda] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = (int)(param_1 + 0xd7);
  param_1[0xd7] = (int)&PTR_FUN_00d172a0;
  param_1[0xdc] = 0;
  param_1[0xe0] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = (int)(param_1 + 0xdd);
  param_1[0xdd] = (int)&PTR_FUN_00d172a0;
  param_1[0xe2] = 0;
  param_1[0xe6] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = (int)(param_1 + 0xe3);
  param_1[0xe3] = (int)&PTR_FUN_00d172a0;
  param_1[0xe8] = 0;
  param_1[0xec] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = (int)(param_1 + 0xe9);
  param_1[0xe9] = (int)&PTR_FUN_00d2dba4;
  param_1[0xee] = 0;
  param_1[0xf2] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = (int)(param_1 + 0xef);
  param_1[0xef] = (int)&PTR_FUN_00d2dba4;
  param_1[0xf4] = 0;
  param_1[0xf8] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = (int)(param_1 + 0xf5);
  param_1[0xf5] = (int)&PTR_FUN_00d195f8;
  param_1[0xfa] = 0;
  param_1[0xfe] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = (int)(param_1 + 0xfb);
  param_1[0xfb] = (int)&PTR_FUN_00d195f8;
  param_1[0x100] = 0;
  param_1[0x104] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = (int)(param_1 + 0x101);
  param_1[0x101] = (int)&PTR_FUN_00d195f8;
  param_1[0x106] = 0;
  param_1[0x10a] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = (int)(param_1 + 0x107);
  param_1[0x107] = (int)&PTR_FUN_00d195f8;
  param_1[0x10c] = 0;
  param_1[0x110] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = (int)(param_1 + 0x10d);
  param_1[0x10d] = (int)&PTR_FUN_00d195f8;
  param_1[0x112] = 0;
  param_1[0x116] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = (int)(param_1 + 0x113);
  param_1[0x113] = (int)&PTR_FUN_00d322b0;
  param_1[0x118] = 0;
  piVar3 = param_1 + 0x119;
  param_1[0x11c] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = (int)piVar3;
  *piVar3 = (int)&PTR_FUN_00d195f8;
  param_1[0x11e] = 0;
  piVar4 = param_1 + 0x11f;
  param_1[0x122] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = (int)piVar4;
  *piVar4 = (int)&PTR_FUN_00d195f8;
  param_1[0x124] = 0;
  param_1[0x128] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = (int)(param_1 + 0x125);
  param_1[0x125] = (int)&PTR_FUN_00d195f8;
  param_1[0x12a] = 0;
  param_1[0x12e] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = (int)(param_1 + 299);
  param_1[299] = (int)&PTR_FUN_00d18c2c;
  param_1[0x130] = 0;
  param_1[0x134] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = (int)(param_1 + 0x131);
  param_1[0x131] = (int)&PTR_FUN_00d18c2c;
  param_1[0x136] = 0;
  param_1[0x13a] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = (int)(param_1 + 0x137);
  param_1[0x137] = (int)&PTR_FUN_00d18c2c;
  param_1[0x13c] = 0;
  param_1[0x13d] = (int)(param_1 + 0x140);
  *(undefined2 *)(param_1 + 0x140) = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 10;
  param_1[0x145] = (int)(param_1 + 0x148);
  *(undefined2 *)(param_1 + 0x148) = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 10;
  param_1[0x153] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = (int)(param_1 + 0x150);
  param_1[0x150] = (int)&PTR_FUN_00d18c2c;
  param_1[0x155] = 0;
  local_4._0_1_ = 0x15;
  local_4._1_3_ = 0;
  (**(code **)(*piVar3 + 4))();
  param_1[0x11e] = 0;
  (**(code **)*piVar3)();
  (**(code **)(*piVar4 + 4))();
  param_1[0x124] = 0;
  (**(code **)*piVar4)();
  (**(code **)(param_1[0x125] + 4))();
  param_1[0x12a] = 0;
  (**(code **)param_1[0x125])();
  (**(code **)(param_1[299] + 4))();
  param_1[0x130] = 0;
  (**(code **)param_1[299])();
  (**(code **)(param_1[0x131] + 4))();
  param_1[0x136] = 0;
  (**(code **)param_1[0x131])();
  (**(code **)(param_1[0x137] + 4))();
  param_1[0x13c] = 0;
  (**(code **)param_1[0x137])();
  (*(code *)DAT_0104dc40[1])();
  DAT_0104dc54 = param_1;
  (*(code *)*DAT_0104dc40)();
  param_1[0x14e] = 0x43500000;
  FUN_006ba410(param_1);
  pcStack_50 = acStack_44;
  acStack_44[0] = '\0';
  uStack_4c = 0;
  uStack_48 = 0x40;
  pcStack_50 = _malloc(0x40);
  _strncpy(pcStack_50,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  uStack_4c = 0x27;
  pcStack_50[0x27] = '\0';
  local_4._0_1_ = 0x16;
  FUN_00a05ff0(auStack_58,&pcStack_50,1);
  if (0x14 < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_50);
  }
  pcStack_98 = acStack_8c;
  acStack_8c[0] = '\0';
  uStack_94 = 0;
  uStack_90 = 0x14;
  _strncpy(pcStack_98,"1",1);
  uStack_94 = 1;
  pcStack_98[1] = '\0';
  pcStack_78 = acStack_6c;
  acStack_6c[0] = '\0';
  uStack_74 = 0;
  uStack_70 = 0x14;
  _strncpy(pcStack_78,"Server Setting",0xe);
  uStack_74 = 0xe;
  pcStack_78[0xe] = '\0';
  local_4._0_1_ = 0x1a;
  puVar1 = FUN_00a06260(auStack_58,apvStack_30,&pcStack_78,&pcStack_98);
  lVar2 = _atol((char *)*puVar1);
  param_1[0x14f] = lVar2;
  if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_30[0]);
  }
  if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_78);
  }
  local_4._0_1_ = 0x18;
  if (uStack_90 < 0x15) {
    puVar1 = operator_new(0x3ac);
    local_4._0_1_ = 0x1b;
    if (puVar1 == (undefined4 *)0x0) {
      puStack_a4 = (undefined4 *)0x0;
    }
    else {
      puStack_a4 = FUN_0063f620(puVar1);
    }
    local_4 = CONCAT31(local_4._1_3_,0x18);
    (**(code **)(param_1[0x113] + 4))();
    param_1[0x118] = (int)puStack_a4;
    (**(code **)param_1[0x113])();
    (**(code **)(*(int *)param_1[0x118] + 0x74))();
    piVar3 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar3 + 0x10))();
    piVar4 = (int *)FUN_0071b2a0();
    piVar3 = (int *)param_1[0x118];
    (**(code **)(*piVar4 + 0x10))();
    (**(code **)(*piVar3 + 0x10))();
    piVar4 = (int *)FUN_0071b2a0();
    piVar3 = (int *)param_1[0x118];
    (**(code **)(*piVar4 + 0x14))();
    (**(code **)(*piVar3 + 0x14))();
    (**(code **)(*(int *)param_1[0x118] + 0x5c))();
    (**(code **)(*(int *)param_1[0x118] + 100))();
    (**(code **)(*(int *)param_1[0x118] + 0x50))();
    FUN_0073f6e0(param_1,(int *)param_1[0x118]);
    FUN_0063e6c0((void *)param_1[0x118],0xffa7b8d6,0xff77909f);
    FUN_0063e890((void *)param_1[0x118],'\x01');
    local_9c = &uStack_90;
    uStack_90 = uStack_90 & 0xffffff00;
    pcStack_98 = (char *)0x0;
    uStack_94 = 0x20;
    local_9c = _malloc(0x20);
    _strncpy((char *)local_9c,"ui/button_online.dds",0x14);
    pcStack_98 = (char *)0x14;
    *(char *)(local_9c + 5) = '\0';
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ONLINEOPTIONS_DIALOGUE_TITLE",0x1c);
    _Dest[0x1c] = '\0';
    uStack_28._0_1_ = 0x1d;
    puVar1 = FUN_009b5030(&pvStack_54,(undefined4 *)&stack0xffffff44);
    uStack_28._0_1_ = 0x1e;
    FUN_0063ec80((void *)param_1[0x118],puVar1,&local_9c);
    if (uStack_4c < 0xb) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_54);
  }
                    /* WARNING: Subroutine does not return */
  _free(pcStack_98);
}


//// FUNCTION FUN_006c04f0 @ 006c04f0 ////

int * FUN_006c04f0(void)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb58b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x558);
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar1 = FUN_006bfa70(piVar1);
    ExceptionList = local_c;
    return piVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_006c0640 @ 006c0640 ////

void __fastcall FUN_006c0640(undefined4 *param_1)

{
  *param_1 = 0;
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_006c0670 @ 006c0670 ////

void __fastcall FUN_006c0670(undefined4 *param_1)

{
  *param_1 = 0;
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_006c06a0 @ 006c06a0 ////

undefined4 * __fastcall FUN_006c06a0(undefined4 *param_1)

{
  FUN_009634b0(param_1);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  return param_1;
}


//// FUNCTION FUN_006c0820 @ 006c0820 ////

void __fastcall FUN_006c0820(int *param_1)

{
  WWindow_Tick(param_1);
                    /* WARNING: Could not recover jumptable at 0x006c082d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))();
  return;
}


//// FUNCTION FUN_006c0980 @ 006c0980 ////

undefined4 * __thiscall FUN_006c0980(void *this,byte param_1)

{
  *(undefined4 *)this = 0;
  if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006c09c0 @ 006c09c0 ////

void * __thiscall FUN_006c09c0(void *this,byte param_1)

{
  FUN_00966220((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006c0a30 @ 006c0a30 ////

int __fastcall FUN_006c0a30(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}


//// FUNCTION FUN_006c0a50 @ 006c0a50 ////

int __fastcall FUN_006c0a50(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x6c;
}


//// FUNCTION FUN_006c0a70 @ 006c0a70 ////

int __fastcall FUN_006c0a70(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x44;
}


//// FUNCTION FUN_006c0a90 @ 006c0a90 ////

int __fastcall FUN_006c0a90(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}


//// FUNCTION FUN_006c0ab0 @ 006c0ab0 ////

int __fastcall FUN_006c0ab0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x30;
}


//// FUNCTION FUN_006c12a0 @ 006c12a0 ////

void __cdecl FUN_006c12a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_006c1600 @ 006c1600 ////

undefined4 * __fastcall FUN_006c1600(undefined4 *param_1)

{
  undefined4 auStack_98 [22];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb5ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_009634b0(param_1);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  uStack_4 = 0;
  FUN_009634b0(auStack_98);
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_24 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  FUN_00963c90((int)auStack_98);
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_006c16e0 @ 006c16e0 ////

void __fastcall FUN_006c16e0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ccb5c8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_009667c0(param_1);
  local_4 = 0xffffffff;
  FUN_00963c90(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006c1730 @ 006c1730 ////

void * __thiscall FUN_006c1730(void *this,byte param_1)

{
  FUN_006c16e0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006c1750 @ 006c1750 ////

void __fastcall FUN_006c1750(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb601;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)FUN_0071b2b0();
  fVar4 = (float10)(**(code **)(*piVar1 + 0x10))();
  fVar5 = (float)fVar4;
  piVar1 = (int *)FUN_0071b2b0();
  fVar4 = (float10)(**(code **)(*piVar1 + 0x14))();
  if ((DAT_0104dc5c & 1) == 0) {
    DAT_0104dc5c = DAT_0104dc5c | 1;
    DAT_0104dc58 = (float)((fVar4 - (float10)DAT_00e57934) - (float10)DAT_00e57930);
  }
  puVar2 = operator_new(0x344);
  puVar3 = (undefined4 *)0x0;
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_007432f0(puVar2);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(param_1[0x109] + 4))();
  param_1[0x10e] = (int)puVar2;
  (**(code **)param_1[0x109])();
  (**(code **)(*(int *)param_1[0x10e] + 0x78))(fVar5);
  (**(code **)(*(int *)param_1[0x10e] + 0x7c))(DAT_00e57934);
  (**(code **)(*(int *)param_1[0x10e] + 0x5c))(1,param_1,0);
  (**(code **)(*(int *)param_1[0x10e] + 100))(1,param_1,0);
  (**(code **)(*param_1 + 0xc))(param_1[0x10e],1);
  puVar2 = operator_new(0x344);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = FUN_007432f0(puVar2);
  }
  (**(code **)(param_1[0x10f] + 4))();
  param_1[0x114] = (int)puVar3;
  (**(code **)param_1[0x10f])();
  fVar6 = fVar5;
  (**(code **)(*(int *)param_1[0x114] + 0x78))(fVar5);
  (**(code **)(*(int *)param_1[0x114] + 0x7c))(DAT_0104dc58);
  (**(code **)(*(int *)param_1[0x114] + 0x5c))(1,param_1,0);
  (**(code **)(*(int *)param_1[0x114] + 100))(1,param_1,fVar6);
  (**(code **)(*param_1 + 0xc))(param_1[0x114],1);
  puVar2 = operator_new(0x344);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_007432f0(puVar2);
  }
  (**(code **)(param_1[0x115] + 4))();
  param_1[0x11a] = (int)puVar2;
  (**(code **)param_1[0x115])();
  (**(code **)(*(int *)param_1[0x11a] + 0x78))(fVar5);
  (**(code **)(*(int *)param_1[0x11a] + 0x7c))(DAT_00e57930);
  piVar1 = param_1;
  (**(code **)(*(int *)param_1[0x11a] + 0x5c))(1,param_1,0);
  (**(code **)(*(int *)param_1[0x11a] + 100))(1,param_1,fVar5);
  (**(code **)(*param_1 + 0xc))(param_1[0x11a],1);
  ExceptionList = piVar1;
  return;
}


//// FUNCTION FUN_006c19b0 @ 006c19b0 ////

void __fastcall FUN_006c19b0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb61b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_0046f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(this,0x729);
  (**(code **)(this[0xe] + 4))();
  this[0x13] = param_1;
  (**(code **)this[0xe])();
  FUN_005e9280(DAT_0104d82c,extraout_EDX,this);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006c1a40 @ 006c1a40 ////

void __fastcall FUN_006c1a40(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x480) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x480) + 0xc0))(0);
  return;
}


//// FUNCTION FUN_006c1a70 @ 006c1a70 ////

void __fastcall FUN_006c1a70(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x28));
  }
  if (0x14 < *(uint *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}


//// FUNCTION FUN_006c1aa0 @ 006c1aa0 ////

void __fastcall FUN_006c1aa0(undefined4 *param_1)

{
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_006c1ab0 @ 006c1ab0 ////

void __fastcall FUN_006c1ab0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x558) + 0x20))(1);
  (**(code **)(**(int **)(param_1 + 0x570) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x588) + 0x20))(0);
  return;
}


//// FUNCTION FUN_006c1ae0 @ 006c1ae0 ////

void __fastcall FUN_006c1ae0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x558) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x570) + 0x20))(1);
  (**(code **)(**(int **)(param_1 + 0x588) + 0x20))(0);
  return;
}


//// FUNCTION FUN_006c1b10 @ 006c1b10 ////

void __fastcall FUN_006c1b10(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x558) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x570) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x588) + 0x20))(1);
  return;
}


//// FUNCTION FUN_006c1b40 @ 006c1b40 ////

void __fastcall FUN_006c1b40(int param_1)

{
  if (10 < *(uint *)(param_1 + 0x50)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x48));
  }
  if (10 < *(uint *)(param_1 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x24));
  }
  if (10 < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_006c1b80 @ 006c1b80 ////

void __fastcall FUN_006c1b80(int param_1)

{
  if (10 < *(uint *)(param_1 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x24));
  }
  if (10 < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_006c1bb0 @ 006c1bb0 ////

void __fastcall FUN_006c1bb0(int param_1)

{
  if (10 < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_006c1c00 @ 006c1c00 ////

undefined4 __cdecl FUN_006c1c00(LPCSTR param_1,undefined4 param_2,uint param_3)

{
  LONG LVar1;
  undefined4 uVar2;
  undefined4 local_10;
  HKEY local_c;
  DWORD local_8 [2];
  
  uVar2 = 0;
  LVar1 = RegOpenKeyExA((HKEY)&fdwControls_80000002,"Software\\Lionhead Studios Ltd\\TheMovies",0,
                        0x20019,&local_c);
  if (LVar1 == 0) {
    local_8[1] = 0;
    local_10 = 0;
    local_8[0] = 4;
    LVar1 = RegQueryValueExA(local_c,param_1,(LPDWORD)0x0,local_8 + 1,(LPBYTE)&local_10,local_8);
    if (LVar1 == 0) {
      uVar2 = local_10;
    }
    RegCloseKey(local_c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return uVar2;
}


//// FUNCTION FUN_006c2290 @ 006c2290 ////

undefined4 * __thiscall FUN_006c2290(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = (undefined2 *)((int)this + 0x10);
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 10;
  FUN_004036d0((undefined4 *)((int)this + 4),(wchar_t *)param_1[1],param_1[2]);
  *(undefined4 *)((int)this + 0x24) = (undefined2 *)((int)this + 0x30);
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x24),(wchar_t *)param_1[9],param_1[10]);
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = (undefined2 *)((int)this + 0x54);
  *(undefined2 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x48),(wchar_t *)param_1[0x12],param_1[0x13]);
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  return this;
}


//// FUNCTION FUN_006c2330 @ 006c2330 ////

undefined4 * __thiscall FUN_006c2330(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = (undefined2 *)((int)this + 0x10);
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 10;
  FUN_004036d0((undefined4 *)((int)this + 4),(wchar_t *)param_1[1],param_1[2]);
  *(undefined4 *)((int)this + 0x24) = (undefined2 *)((int)this + 0x30);
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x24),(wchar_t *)param_1[9],param_1[10]);
  return this;
}


//// FUNCTION FUN_006c23e0 @ 006c23e0 ////

undefined4 * __thiscall FUN_006c23e0(void *this,undefined4 *param_1)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  return this;
}


//// FUNCTION FUN_006c24c0 @ 006c24c0 ////

void * __cdecl FUN_006c24c0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_006c2540 @ 006c2540 ////

void __cdecl FUN_006c2540(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_006c26f0 @ 006c26f0 ////

undefined4 * __cdecl FUN_006c26f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (param_1 != param_2) {
    puVar5 = param_3 + 3;
    puVar7 = param_2 + 10;
    do {
      param_2 = param_2 + -0x1b;
      param_3 = param_3 + -0x1b;
      puVar6 = puVar5 + -0x1b;
      *param_3 = *param_2;
      uVar1 = puVar7[-0x23];
      pwVar2 = (wchar_t *)puVar7[-0x24];
      if (*puVar6 <= uVar1) {
        if (10 < *puVar6) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar5[-0x1d]);
        }
        uVar3 = uVar1 + 0x20 & 0xffffffe0;
        *puVar6 = uVar3;
        pvVar4 = _malloc(uVar3 * 2);
        puVar5[-0x1d] = (uint)pvVar4;
      }
      _wcsncpy((wchar_t *)puVar5[-0x1d],pwVar2,uVar1);
      puVar5[-0x1c] = uVar1;
      *(undefined2 *)(puVar5[-0x1d] + uVar1 * 2) = 0;
      uVar1 = puVar7[-0x1b];
      pwVar2 = (wchar_t *)puVar7[-0x1c];
      if (puVar5[-0x13] <= uVar1) {
        if (10 < puVar5[-0x13]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar5[-0x15]);
        }
        uVar3 = uVar1 + 0x20 >> 5;
        puVar5[-0x13] = uVar3 << 5;
        pvVar4 = _malloc(uVar3 * 0x40);
        puVar5[-0x15] = (uint)pvVar4;
      }
      _wcsncpy((wchar_t *)puVar5[-0x15],pwVar2,uVar1);
      puVar5[-0x14] = uVar1;
      *(undefined2 *)(puVar5[-0x15] + uVar1 * 2) = 0;
      puVar5[-0xd] = puVar7[-0x14];
      uVar1 = puVar7[-0x12];
      pwVar2 = (wchar_t *)puVar7[-0x13];
      if (puVar5[-10] <= uVar1) {
        if (10 < puVar5[-10]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar5[-0xc]);
        }
        uVar3 = uVar1 + 0x20 & 0xffffffe0;
        puVar5[-10] = uVar3;
        pvVar4 = _malloc(uVar3 * 2);
        puVar5[-0xc] = (uint)pvVar4;
      }
      _wcsncpy((wchar_t *)puVar5[-0xc],pwVar2,uVar1);
      puVar5[-0xb] = uVar1;
      *(undefined2 *)(puVar5[-0xc] + uVar1 * 2) = 0;
      puVar5[-4] = puVar7[-0xb];
      puVar5 = puVar6;
      puVar7 = puVar7 + -0x1b;
    } while (param_2 != param_1);
  }
  return param_3;
}


//// FUNCTION FUN_006c2850 @ 006c2850 ////

undefined4 * __cdecl FUN_006c2850(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  wchar_t *pwVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 != param_2) {
    puVar6 = (uint *)(param_2 + 0x28);
    puVar7 = param_3 + 3;
    do {
      puVar1 = (undefined4 *)(param_2 + -0x44);
      param_2 = param_2 + -0x44;
      param_3 = param_3 + -0x11;
      puVar8 = puVar7 + -0x11;
      *param_3 = *puVar1;
      uVar2 = puVar6[-0x19];
      pwVar3 = (wchar_t *)puVar6[-0x1a];
      if (*puVar8 <= uVar2) {
        if (10 < *puVar8) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar7[-0x13]);
        }
        uVar4 = uVar2 + 0x20 & 0xffffffe0;
        *puVar8 = uVar4;
        pvVar5 = _malloc(uVar4 * 2);
        puVar7[-0x13] = (uint)pvVar5;
      }
      _wcsncpy((wchar_t *)puVar7[-0x13],pwVar3,uVar2);
      puVar7[-0x12] = uVar2;
      *(undefined2 *)(puVar7[-0x13] + uVar2 * 2) = 0;
      uVar2 = puVar6[-0x11];
      pwVar3 = (wchar_t *)puVar6[-0x12];
      if (puVar7[-9] <= uVar2) {
        if (10 < puVar7[-9]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar7[-0xb]);
        }
        uVar4 = uVar2 + 0x20 & 0xffffffe0;
        puVar7[-9] = uVar4;
        pvVar5 = _malloc(uVar4 * 2);
        puVar7[-0xb] = (uint)pvVar5;
      }
      _wcsncpy((wchar_t *)puVar7[-0xb],pwVar3,uVar2);
      puVar7[-10] = uVar2;
      *(undefined2 *)(puVar7[-0xb] + uVar2 * 2) = 0;
      puVar6 = puVar6 + -0x11;
      puVar7 = puVar8;
    } while (param_2 != param_1);
  }
  return param_3;
}


//// FUNCTION FUN_006c2960 @ 006c2960 ////

undefined4 * __cdecl FUN_006c2960(int param_1,int param_2,undefined4 *param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar3 = param_2 + -0x24;
    puVar4 = param_3 + -9;
    *puVar4 = *(undefined4 *)(param_2 + -0x24);
    _Count = *(uint *)(param_2 + -0x1c);
    _Source = *(wchar_t **)(param_2 + -0x20);
    if ((uint)param_3[-6] <= _Count) {
      if (10 < (uint)param_3[-6]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)param_3[-8]);
      }
      uVar1 = _Count + 0x20 & 0xffffffe0;
      param_3[-6] = uVar1;
      pvVar2 = _malloc(uVar1 * 2);
      param_3[-8] = pvVar2;
    }
    _wcsncpy((wchar_t *)param_3[-8],_Source,_Count);
    param_3[-7] = _Count;
    *(undefined2 *)(param_3[-8] + _Count * 2) = 0;
    param_2 = iVar3;
    param_3 = puVar4;
  } while (iVar3 != param_1);
  return puVar4;
}


//// FUNCTION FUN_006c29f0 @ 006c29f0 ////

int * __cdecl FUN_006c29f0(int param_1,int param_2,int *param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = *(uint *)(param_2 + -0x2c);
    _Source = *(wchar_t **)(param_2 + -0x30);
    param_2 = param_2 + -0x30;
    piVar4 = param_3 + -0xc;
    if ((uint)param_3[-10] <= _Count) {
      if (10 < (uint)param_3[-10]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar4);
      }
      uVar1 = _Count + 0x20 & 0xffffffe0;
      param_3[-10] = uVar1;
      pvVar2 = _malloc(uVar1 * 2);
      *piVar4 = (int)pvVar2;
    }
    _wcsncpy((wchar_t *)*piVar4,_Source,_Count);
    param_3[-0xb] = _Count;
    *(undefined2 *)(*piVar4 + _Count * 2) = 0;
    piVar3 = param_3 + -4;
    iVar5 = 0x10;
    do {
      *(undefined1 *)piVar3 = *(undefined1 *)((param_2 - (int)piVar4) + (int)piVar3);
      piVar3 = (int *)((int)piVar3 + 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    param_3 = piVar4;
  } while (param_2 != param_1);
  return piVar4;
}


//// FUNCTION FUN_006c2b30 @ 006c2b30 ////

void * __thiscall FUN_006c2b30(void *this,byte param_1)

{
  FUN_006c1b40((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006c2b50 @ 006c2b50 ////

void * __thiscall FUN_006c2b50(void *this,byte param_1)

{
  FUN_006c1b80((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006c2b70 @ 006c2b70 ////

void * __thiscall FUN_006c2b70(void *this,byte param_1)

{
  FUN_006c1bb0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006c2b90 @ 006c2b90 ////

undefined4 * __thiscall FUN_006c2b90(void *this,byte param_1)

{
  FUN_006c1aa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006c2bb0 @ 006c2bb0 ////

void __thiscall FUN_006c2bb0(void *this,undefined4 *param_1)

{
  FUN_004015d0((void *)((int)this + 0x6e8),(char *)*param_1,param_1[1]);
  return;
}


//// FUNCTION FUN_006c2bf0 @ 006c2bf0 ////

undefined4 * __thiscall FUN_006c2bf0(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x344),*(uint *)((int)this + 0x348));
  return param_1;
}


//// FUNCTION FUN_006c2ea0 @ 006c2ea0 ////

void * __thiscall FUN_006c2ea0(void *this,byte param_1)

{
  FUN_006c1a70((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006c2ec0 @ 006c2ec0 ////

undefined4 __thiscall FUN_006c2ec0(void *this,void *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined3 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_1;
  
  iVar5 = 0;
  iVar4 = 0;
  local_1 = '\x01';
  if (0 < DAT_00e57938) {
    do {
      if ((*(int *)((int)param_1 + 0x5c) == 3) ||
         (uVar1 = FUN_00965c60((int)param_1), (char)uVar1 != '\0')) break;
      uVar1 = FUN_00965ac0(param_1);
      iVar5 = iVar5 + *(int *)((int)param_1 + 0x74);
      if ((char)uVar1 == '\0') {
        local_1 = '\0';
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00e57938);
  }
  *param_2 = iVar5;
  uVar2 = FUN_00965c60((int)param_1);
  if ((char)uVar2 == '\0') {
    uVar3 = (undefined3)(uVar2 >> 8);
    uVar2 = CONCAT31(uVar3,local_1);
    if (local_1 != '\0') {
      return CONCAT31(uVar3,1);
    }
  }
  if (*(int *)((int)param_1 + 0x5c) == 3) {
    (**(code **)(**(int **)((int)this + 0x558) + 0x20))(0);
    (**(code **)(**(int **)((int)this + 0x570) + 0x20))(0);
    uVar2 = (**(code **)(**(int **)((int)this + 0x588) + 0x20))(1);
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_006c2f70 @ 006c2f70 ////

void __thiscall FUN_006c2f70(void *this,undefined4 param_1)

{
  int *this_00;
  uint uVar1;
  void *unaff_ESI;
  undefined2 *puStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined2 auStack_20 [8];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb658;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = FUN_006b85a0();
  FUN_006b8100(this_00,param_1);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 10;
  uVar1 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_ERROR</translate>");
  FUN_004036d0(&puStack_2c,L"<translate>ONLINE_SCREEN_ERROR</translate>",uVar1);
  uStack_4 = 0;
  (**(code **)(*this_00 + 0x54))(&puStack_2c);
  puStack_8 = (undefined1 *)0xffffffff;
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  if (((char)param_1 != '\0') && ((int *)this_00[0xea] != (int *)0x0)) {
    (**(code **)(*(int *)this_00[0xea] + 0x18))(0,&LAB_006c2c70,this,"ONLINE_OK");
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_006c3050 @ 006c3050 ////

/* WARNING: Removing unreachable block (ram,0x006c30fd) */

undefined4 __cdecl FUN_006c3050(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *_Dest;
  bool bVar5;
  byte local_14 [20];
  
  if (param_2 == 0) {
    if (param_3 < 0x15) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  _Dest = local_14;
  local_14[0] = 0;
  _strncpy((char *)_Dest,"",0);
  local_14[0] = 0;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *_Dest;
    if (bVar1 != *_Dest) {
LAB_006c30e6:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_006c30eb;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < _Dest[1];
    if (bVar1 != _Dest[1]) goto LAB_006c30e6;
    pbVar2 = pbVar2 + 2;
    _Dest = _Dest + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_006c30eb:
  if (iVar3 == 0) {
LAB_006c313c:
    if (param_3 < 0x15) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      if (((char)param_1[uVar4] < '(') && (param_1[uVar4] == 0x7f)) goto LAB_006c313c;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  if (param_3 < 0x15) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_006c3160 @ 006c3160 ////

undefined4 FUN_006c3160(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 in_EAX;
  
  puVar2 = *(undefined4 **)(param_2 + 0x6b8);
  *(undefined1 *)(param_2 + 0x6bc) = 1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      in_EAX = (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(param_2 + 0x6b8) = 0;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


//// FUNCTION FUN_006c31a0 @ 006c31a0 ////

void __fastcall FUN_006c31a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float10 fVar7;
  void *_Memory;
  float fVar8;
  wchar_t *pwVar9;
  void **local_6c;
  uint local_68;
  undefined4 local_64;
  void *local_60 [5];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ccb688;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = (void *)((uint)local_60[0] & 0xffff0000);
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  if (DAT_00e57b44 == 0) {
    if (*(char *)((int)param_1 + 0x6bd) == '\0') {
      ExceptionList = &pvStack_c;
      if (*(char *)((int)param_1 + 0x6c1) == '\0') goto LAB_006c3219;
      goto LAB_006c31fd;
    }
LAB_006c344c:
    ExceptionList = &pvStack_c;
    uVar4 = FUN_00ace02d(L"ONLINE_SCREEN_PROPSHOP_MESSAGE");
    pwVar9 = L"ONLINE_SCREEN_PROPSHOP_MESSAGE";
  }
  else {
    if ((*PTR_DAT_00e57b40 != 'a') && (*PTR_DAT_00e57b40 != 'A')) goto LAB_006c344c;
LAB_006c31fd:
    ExceptionList = &pvStack_c;
    uVar4 = FUN_00ace02d(L"ONLINE_SCREEN_PROPSHOP_AWARD_MESSAGE");
    pwVar9 = L"ONLINE_SCREEN_PROPSHOP_AWARD_MESSAGE";
  }
  FUN_004036d0(&local_6c,pwVar9,uVar4);
LAB_006c3219:
  FUN_004036d0(param_1 + 0xfb,(wchar_t *)local_6c,local_68);
  puVar5 = FUN_0043bdc0(local_2c,L"<P ALIGN\t= CENTER><o3><translate>",&local_6c);
  FUN_0043be60(local_4c,puVar5,L"</translate></o3></P>");
  local_4._0_1_ = 2;
  pfVar6 = FUN_00726520();
  param_1[0x1ae] = (int)pfVar6;
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  iVar1 = *(int *)param_1[0x1ae];
  fVar7 = (float10)(**(code **)(*param_1 + 0x14))();
  (**(code **)(iVar1 + 100))
            (1,param_1,(float)(fVar7 * (float10)0.5 - (float10)DAT_00e5850c * (float10)0.5));
  iVar1 = *(int *)param_1[0x1ae];
  fVar7 = (float10)(**(code **)(*param_1 + 0x10))();
  (**(code **)(iVar1 + 0x5c))
            (1,param_1,(float)(fVar7 * (float10)0.5 - (float10)DAT_00e58508 * (float10)0.5));
  (**(code **)(**(int **)(param_1[0x1ae] + 0x348) + 0x20))(0);
  iVar1 = param_1[0x1ae];
  fVar8 = DAT_00e58508 * 0.5;
  piVar2 = *(int **)(iVar1 + 0x344);
  iVar3 = *piVar2;
  fVar7 = (float10)(**(code **)(*piVar2 + 0x10))();
  (**(code **)(iVar3 + 0x5c))(1,iVar1,(float)((float10)fVar8 - fVar7 * (float10)0.5));
  uVar4 = 0;
  (**(code **)(**(int **)(param_1[0x1ae] + 0x344) + 0x18))(0,FUN_006c3160,param_1,"ONLINE_CLOSE");
  _Memory = (void *)0x0;
  (**(code **)(**(int **)(param_1[0x1ae] + 0x344) + 0x18))(5,&LAB_005f37f0,0,"ONLINE_CLOSE");
  (**(code **)(*param_1 + 0xac))(param_1[0x1ae]);
  (**(code **)(*param_1 + 0xc))(param_1[0x1ae],1);
  FUN_004015d0(param_1 + 0x1b2,(char *)param_1[0x1ba],param_1[0x1bb]);
  FUN_00966ab0((void *)param_1[0x108],(char *)param_1[0x1b2]);
  if ((*(uint *)(param_1[0x162] + 0x218) >> 4 & 1) != 0) {
    (**(code **)(*(int *)param_1[0x156] + 0x20))(0);
    (**(code **)(*(int *)param_1[0x15c] + 0x20))(1);
    (**(code **)(*(int *)param_1[0x162] + 0x20))(0);
  }
  if (10 < uVar4) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = local_60[0];
  return;
}


//// FUNCTION FUN_006c3490 @ 006c3490 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006c3490(int param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *this;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint unaff_ESI;
  uint unaff_EDI;
  bool bVar9;
  float10 fVar10;
  float fVar11;
  undefined4 uVar12;
  char *_Dest;
  uint uStack_f0;
  undefined1 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  char *pcVar19;
  char *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined2 local_84;
  undefined2 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined2 local_64 [14];
  undefined4 uStack_48;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb82b;
  pvStack_c = ExceptionList;
  if ((_DAT_0104dc64 & 1) == 0) {
    _DAT_0104dc64 = _DAT_0104dc64 | 1;
    _DAT_0104dc60 = 2.0;
  }
  ExceptionList = &pvStack_c;
  pvVar3 = operator_new(0x420);
  bVar9 = pvVar3 == (void *)0x0;
  if (bVar9) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_70 = local_64;
    local_64[0] = 0;
    local_6c = 0;
    local_68 = 10;
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_70,(wchar_t *)&lpCaption_00d16918,uVar4);
    local_90 = (char *)&local_84;
    local_84 = (ushort)local_84._1_1_ << 8;
    local_8c = 0;
    local_88 = 0x20;
    local_90 = _malloc(0x20);
    _strncpy(local_90,"ui/online_connected.dds",0x17);
    local_8c = 0x17;
    local_90[0x17] = '\0';
    piVar1 = *(int **)(param_1 + 0x468);
    uVar17 = 0x3f800000;
    iVar18 = 0x3f800000;
    uVar14 = 0;
    uVar16 = 0;
    local_4 = 2;
    fVar10 = (float10)(**(code **)(*piVar1 + 0x14))();
    fVar11 = (float)(fVar10 * (float10)_DAT_0104dc60);
    fVar10 = (float10)(**(code **)(*piVar1 + 0x14))();
    puVar5 = FUN_0069fb10(pvVar3,(int *)&local_90,&local_70,(float)fVar10,fVar11,uVar14,uVar16,
                          uVar17,iVar18);
  }
  local_4 = 4;
  (**(code **)(*(int *)(param_1 + 0x544) + 4))();
  *(undefined4 **)(param_1 + 0x558) = puVar5;
  (*(code *)**(undefined4 **)(param_1 + 0x544))();
  if ((!bVar9) && (0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  local_4 = 0xffffffff;
  if ((!bVar9) && (10 < local_68)) {
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  pcVar19 = (char *)0x0;
  (**(code **)(**(int **)(param_1 + 0x558) + 0x5c))();
  uVar15 = 0;
  (**(code **)(**(int **)(param_1 + 0x558) + 100))();
  uVar4 = *(uint *)(param_1 + 0x558);
  (**(code **)(**(int **)(param_1 + 0x468) + 0xc))();
  this = operator_new(0x420);
  if (this == (undefined1 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_90 = (char *)&local_84;
    local_84 = 0;
    local_8c = 0;
    local_88 = 10;
    puVar7 = this;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_90,(wchar_t *)&lpCaption_00d16918,uVar6);
    unaff_ESI = 0x20;
    pcVar19 = _malloc(0x20);
    _strncpy(pcVar19,"ui/online_connectin.dds",0x17);
    unaff_EDI = 0x17;
    pcVar19[0x17] = '\0';
    piVar1 = *(int **)(param_1 + 0x468);
    iVar18 = 0x3f800000;
    uVar17 = 0x3f800000;
    uVar15 = uVar15 | 0xc;
    uVar14 = 0;
    uVar16 = 0;
    uStack_24 = 7;
    fVar10 = (float10)(**(code **)(*piVar1 + 0x14))();
    fVar11 = (float)(fVar10 * (float10)_DAT_0104dc60);
    fVar10 = (float10)(**(code **)(*piVar1 + 0x14))();
    puVar5 = FUN_0069fb10(this,(int *)&stack0xffffff50,&local_90,(float)fVar10,fVar11,uVar14,uVar16,
                          iVar18,uVar17);
    this = puVar7;
  }
  uStack_24 = 9;
  (**(code **)(*(int *)(param_1 + 0x55c) + 4))();
  *(undefined4 **)(param_1 + 0x570) = puVar5;
  (*(code *)**(undefined4 **)(param_1 + 0x55c))();
  if (((uVar15 & 8) != 0) && (uVar15 = uVar15 & 0xfffffff7, 0x14 < unaff_ESI)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar19);
  }
  uStack_24 = 0xffffffff;
  if (((uVar15 & 4) != 0) && (10 < local_88)) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  pcVar19 = *(char **)(param_1 + 0x468);
  uVar6 = 0;
  (**(code **)(**(int **)(param_1 + 0x570) + 0x5c))();
  uVar15 = *(uint *)(param_1 + 0x468);
  (**(code **)(**(int **)(param_1 + 0x570) + 100))();
  (**(code **)(**(int **)(param_1 + 0x468) + 0xc))();
  uStack_f0 = 0;
  (**(code **)(**(int **)(param_1 + 0x570) + 0x20))();
  puVar7 = operator_new(0x420);
  if (puVar7 == (undefined1 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    this = &stack0xffffff58;
    unaff_EDI = 10;
    puVar13 = puVar7;
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xffffff4c,(wchar_t *)&lpCaption_00d16918,uVar4);
    uVar15 = uVar15 | 0x10;
    uVar4 = 0x20;
    pcVar19 = _malloc(0x20);
    _strncpy(pcVar19,"ui/online_discon.dds",0x14);
    uVar6 = 0x14;
    pcVar19[0x14] = '\0';
    uVar15 = uVar15 | 0x20;
    piVar1 = *(int **)(param_1 + 0x468);
    iVar18 = 0x3f800000;
    uVar17 = 0x3f800000;
    uVar14 = 0;
    uVar16 = 0;
    uStack_48 = 0xc;
    fVar10 = (float10)(**(code **)(*piVar1 + 0x14))();
    fVar11 = (float)(fVar10 * (float10)_DAT_0104dc60);
    fVar10 = (float10)(**(code **)(*piVar1 + 0x14))();
    puVar5 = FUN_0069fb10(puVar7,(int *)&stack0xffffff2c,(undefined4 *)&stack0xffffff4c,
                          (float)fVar10,fVar11,uVar14,uVar16,iVar18,uVar17);
    puVar7 = puVar13;
  }
  uStack_48 = 0xe;
  (**(code **)(*(int *)(param_1 + 0x574) + 4))();
  *(undefined4 **)(param_1 + 0x588) = puVar5;
  (*(code *)**(undefined4 **)(param_1 + 0x574))();
  if (((uVar15 & 0x20) != 0) && (uVar15 = uVar15 & 0xffffffdf, 0x14 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar19);
  }
  uStack_48 = 0xffffffff;
  if (((uVar15 & 0x10) != 0) && (10 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  _Dest = *(char **)(param_1 + 0x468);
  (**(code **)(**(int **)(param_1 + 0x588) + 0x5c))();
  uVar15 = *(uint *)(param_1 + 0x468);
  (**(code **)(**(int **)(param_1 + 0x588) + 100))();
  (**(code **)(**(int **)(param_1 + 0x468) + 0xc))();
  (**(code **)(**(int **)(param_1 + 0x588) + 0x20))();
  piVar1 = *(int **)(param_1 + 0x468);
  piVar2 = *(int **)(param_1 + 0x558);
  fVar10 = (float10)(**(code **)(*piVar1 + 0x10))();
  fVar11 = (float)fVar10;
  fVar10 = (float10)(**(code **)(*piVar2 + 0x10))();
  fVar11 = (float)((float10)fVar11 - fVar10);
  fVar10 = (float10)(**(code **)(*piVar1 + 0x14))();
  fVar11 = (float)(((float10)fVar11 - fVar10) - (float10)74.0);
  pvVar3 = operator_new(0x420);
  if (pvVar3 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar7 = &stack0xffffff34;
    uVar4 = uVar4 & 0xffff0000;
    pcVar19 = (char *)0x0;
    uVar6 = 10;
    uVar8 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xffffff28,(wchar_t *)&lpCaption_00d16918,uVar8);
    _Dest = &stack0xffffff14;
    uVar15 = uVar15 | 0x40;
    uStack_f0 = 0x14;
    _strncpy(_Dest,"ui/online_line.dds",0x12);
    _Dest[0x12] = '\0';
    uVar17 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar14 = 0;
    uVar16 = 0;
    uVar15 = uVar15 | 0x80;
    local_6c = 0x11;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x468) + 0x14))();
    puVar5 = FUN_0069fb10(pvVar3,(int *)&stack0xffffff08,(undefined4 *)&stack0xffffff28,
                          (float)fVar10,fVar11,uVar14,uVar16,uVar17,uVar12);
  }
  local_6c = 0x13;
  (**(code **)(*(int *)(param_1 + 0x58c) + 4))();
  *(undefined4 **)(param_1 + 0x5a0) = puVar5;
  (*(code *)**(undefined4 **)(param_1 + 0x58c))();
  if (((char)uVar15 < '\0') && (uVar15 = uVar15 & 0xffffff7f, 0x14 < uStack_f0)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  local_6c = 0xffffffff;
  if (((uVar15 & 0x40) != 0) && (10 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar7);
  }
  iVar18 = **(int **)(param_1 + 0x5a0);
  (**(code **)(**(int **)(param_1 + 0x558) + 0x10))();
  (**(code **)(iVar18 + 0x5c))();
  uVar15 = 0;
  (**(code **)(**(int **)(param_1 + 0x5a0) + 100))();
  (**(code **)(**(int **)(param_1 + 0x468) + 0xc))();
  pvVar3 = operator_new(0x420);
  if (pvVar3 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    this = &stack0xffffff58;
    unaff_EDI = 10;
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xffffff4c,(wchar_t *)&lpCaption_00d16918,uVar4);
    pcVar19 = &stack0xffffff38;
    uVar4 = 0x14;
    _strncpy(pcVar19,"ui/online_world.dds",0x13);
    pcVar19[0x13] = '\0';
    piVar1 = *(int **)(param_1 + 0x468);
    uVar15 = uVar15 | 0x300;
    uVar17 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar14 = 0;
    uVar16 = 0;
    local_8c = 0x16;
    fVar10 = (float10)(**(code **)(*piVar1 + 0x14))();
    fVar11 = (float)fVar10;
    fVar10 = (float10)(**(code **)(*piVar1 + 0x14))();
    puVar5 = FUN_0069fb10(pvVar3,(int *)&stack0xffffff2c,(undefined4 *)&stack0xffffff4c,
                          (float)fVar10,fVar11,uVar14,uVar16,uVar17,uVar12);
  }
  local_8c = 0x18;
  (**(code **)(*(int *)(param_1 + 0x5a4) + 4))();
  *(undefined4 **)(param_1 + 0x5b8) = puVar5;
  (*(code *)**(undefined4 **)(param_1 + 0x5a4))();
  if (((uVar15 & 0x200) != 0) && (uVar15 = uVar15 & 0xfffffdff, 0x14 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar19);
  }
  local_8c = 0xffffffff;
  if (((uVar15 & 0x100) != 0) && (10 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  iVar18 = **(int **)(param_1 + 0x5b8);
  piVar1 = *(int **)(param_1 + 0x5a0);
  (**(code **)(**(int **)(param_1 + 0x558) + 0x10))();
  (**(code **)(*piVar1 + 0x10))();
  (**(code **)(iVar18 + 0x5c))();
  (**(code **)(**(int **)(param_1 + 0x5b8) + 100))(1,*(undefined4 *)(param_1 + 0x468));
  (**(code **)(**(int **)(param_1 + 0x468) + 0xc))(*(undefined4 *)(param_1 + 0x5b8),1);
  ExceptionList = this;
  return;
}


//// FUNCTION FUN_006c3ed0 @ 006c3ed0 ////

void __fastcall FUN_006c3ed0(int param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  
  (**(code **)(**(int **)(param_1 + 0x4f8) + 0x54))(&PTR_DAT_00e57ac0);
  (**(code **)(**(int **)(param_1 + 0x4f8) + 0x88))(0);
  (**(code **)(**(int **)(param_1 + 0x510) + 0xa8))();
  *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
  uVar1 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)(param_1 + 0x630) = (int)uVar1;
  FUN_009669e0(*(void **)(param_1 + 0x414));
  if ((*(uint *)(*(int *)(param_1 + 0x588) + 0x218) >> 4 & 1) != 0) {
    (**(code **)(**(int **)(param_1 + 0x558) + 0x20))(0);
    (**(code **)(**(int **)(param_1 + 0x570) + 0x20))(1);
    (**(code **)(**(int **)(param_1 + 0x588) + 0x20))(0);
  }
  return;
}


//// FUNCTION FUN_006c3f60 @ 006c3f60 ////

void __thiscall FUN_006c3f60(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *unaff_ESI;
  undefined4 local_4c;
  uint uStack_48;
  void *pvStack_30;
  undefined4 local_2c;
  uint uStack_28;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb850;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = FUN_0043bdc0(&local_2c,L"<o6>",param_1);
  local_4 = 0;
  puVar1 = FUN_0043be60(&local_4c,puVar1,L"</o6>");
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(**(int **)((int)this + 0x5d0) + 0x54))(puVar1);
  if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  (**(code **)(**(int **)((int)this + 0x5d0) + 0x8c))(0);
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_006c4010 @ 006c4010 ////

void __fastcall FUN_006c4010(int param_1)

{
  uint uVar1;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb868;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x5d0) != 0) {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 10;
    ExceptionList = &local_c;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
    local_4 = 0;
    (**(code **)(**(int **)(param_1 + 0x5d0) + 0x54))(&local_2c);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006c4160 @ 006c4160 ////

undefined4 * __cdecl
FUN_006c4160(undefined4 *param_1,LPCSTR param_2,undefined4 param_3,uint param_4)

{
  BYTE BVar1;
  LONG LVar2;
  BYTE *pBVar3;
  uint _Count;
  HKEY hKey;
  char *lpSubKey;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  HKEY local_22c;
  DWORD local_228;
  char *local_224;
  uint local_220;
  uint local_21c;
  char local_218 [20];
  DWORD local_204;
  BYTE local_200 [512];
  
  local_224 = local_218;
  local_228 = 0;
  local_22c = (HKEY)0x0;
  local_218[0] = '\0';
  local_220 = 0;
  local_21c = 0x14;
  _strncpy(local_224,"",0);
  phkResult = &local_22c;
  samDesired = 0x20019;
  ulOptions = 0;
  lpSubKey = "Software\\Lionhead Studios Ltd\\TheMovies";
  local_220 = 0;
  hKey = (HKEY)&fdwControls_80000002;
  *local_224 = '\0';
  LVar2 = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  if (LVar2 == 0) {
    local_228 = 0;
    local_204 = 0x200;
    LVar2 = RegQueryValueExA(local_22c,param_2,(LPDWORD)0x0,&local_228,local_200,&local_204);
    if (LVar2 == 0) {
      pBVar3 = local_200;
      do {
        BVar1 = *pBVar3;
        pBVar3 = pBVar3 + 1;
      } while (BVar1 != '\0');
      _Count = (int)pBVar3 - (int)(local_200 + 1);
      if (local_21c <= _Count) {
        if (0x14 < local_21c) {
                    /* WARNING: Subroutine does not return */
          _free(local_224);
        }
        local_21c = _Count + 0x20 & 0xffffffe0;
        local_224 = _malloc(local_21c);
      }
      _strncpy(local_224,(char *)local_200,_Count);
      local_224[_Count] = '\0';
      local_220 = _Count;
    }
    RegCloseKey(local_22c);
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_224,local_220);
  if (0x14 < local_21c) {
                    /* WARNING: Subroutine does not return */
    _free(local_224);
  }
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  return param_1;
}


//// FUNCTION FUN_006c42d0 @ 006c42d0 ////

undefined4 * __cdecl FUN_006c42d0(undefined4 *param_1)

{
  CHAR *pCVar1;
  undefined4 uVar2;
  uint uVar3;
  CHAR local_1c [20];
  
  pCVar1 = local_1c;
  local_1c[0] = '\0';
  uVar2 = 0;
  uVar3 = 0x14;
  FUN_004015d0(&stack0xffffffd8,"UserAccountName",0xf);
  FUN_006c4160(param_1,pCVar1,uVar2,uVar3);
  return param_1;
}


//// FUNCTION FUN_006c4350 @ 006c4350 ////

undefined4 * FUN_006c4350(undefined4 *param_1,void *param_2)

{
  uint uVar1;
  size_t sVar2;
  wchar_t *local_a4;
  wchar_t *local_a0;
  uint local_9c;
  uint local_98;
  wchar_t local_94 [10];
  wchar_t local_80 [64];
  
  local_a4 = (wchar_t *)0x0;
  FUN_00965a90(param_2,&local_a4);
  local_a0 = local_94;
  local_94[0] = L'\0';
  local_9c = 0;
  local_98 = 10;
  uVar1 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_ERROR_IN_COM</translate>");
  FUN_004036d0(&local_a0,L"<translate>ONLINE_SCREEN_ERROR_IN_COM</translate>",uVar1);
  switch(local_a4) {
  case (wchar_t *)0x2:
    uVar1 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_SERVER_CONNECT_FAIL</translate>");
    FUN_004036d0(&local_a0,L"<translate>ONLINE_SCREEN_SERVER_CONNECT_FAIL</translate>",uVar1);
    break;
  case (wchar_t *)0x3:
  case (wchar_t *)0x4:
  case (wchar_t *)0x7:
    uVar1 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_COM__FAIL</translate>");
    FUN_004036d0(&local_a0,L"<translate>ONLINE_SCREEN_COM__FAIL</translate>",uVar1);
    sVar2 = FUN_00ace02d((short *)&DAT_00d2ac08);
    FUN_0040cae0(&local_a0,L" (",sVar2);
    FUN_0043bd40(&local_a0,local_a4);
    goto LAB_006c44a2;
  case (wchar_t *)0x5:
    uVar1 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_COM_READ_FAIL</translate>");
    FUN_004036d0(&local_a0,L"<translate>ONLINE_SCREEN_COM_READ_FAIL</translate>",uVar1);
    break;
  case (wchar_t *)0x6:
    uVar1 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_COM_READ_WRITE</translate>");
    FUN_004036d0(&local_a0,L"<translate>ONLINE_SCREEN_COM_READ_WRITE</translate>",uVar1);
    break;
  default:
    sVar2 = FUN_00ace02d((short *)&DAT_00d2ac08);
    FUN_0040cae0(&local_a0,L" (",sVar2);
    sVar2 = _swprintf(local_80,0xd18f7c,local_a4);
    FUN_0040cae0(&local_a0,local_80,sVar2);
LAB_006c44a2:
    sVar2 = FUN_00ace02d((short *)&DAT_00d2446c);
    FUN_0040cae0(&local_a0,L")",sVar2);
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_a0,local_9c);
  if (local_98 < 0xb) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_a0);
}


//// FUNCTION FUN_006c4550 @ 006c4550 ////

void __fastcall FUN_006c4550(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_006c4610 @ 006c4610 ////

void __fastcall FUN_006c4610(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_006c46b0 @ 006c46b0 ////

void __fastcall FUN_006c46b0(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_006c4780 @ 006c4780 ////

void FUN_006c4780(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xc);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_006c47a0 @ 006c47a0 ////

void __fastcall FUN_006c47a0(int param_1)

{
  FUN_006c4550(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_006c47c0 @ 006c47c0 ////

void FUN_006c47c0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_006c47e0 @ 006c47e0 ////

void __fastcall FUN_006c47e0(int param_1)

{
  FUN_006c4610(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_006c4800 @ 006c4800 ////

void FUN_006c4800(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1c);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_006c4820 @ 006c4820 ////

void __fastcall FUN_006c4820(int param_1)

{
  FUN_006c46b0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_006c4860 @ 006c4860 ////

void __fastcall FUN_006c4860(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_006c4910 @ 006c4910 ////

void FUN_006c4910(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
  }
  return;
}


//// FUNCTION FUN_006c4960 @ 006c4960 ////

void FUN_006c4960(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1 = puVar1 + 2;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *param_3;
      param_3 = param_3 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_006c49a0 @ 006c49a0 ////

void FUN_006c49a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
    puVar1[5] = param_3[3];
    puVar1[6] = param_3[4];
  }
  return;
}


//// FUNCTION FUN_006c4a00 @ 006c4a00 ////

void * FUN_006c4a00(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_006c4a50 @ 006c4a50 ////

void * FUN_006c4a50(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_006c4a80 @ 006c4a80 ////

void __cdecl FUN_006c4a80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  
  if (param_1 != param_2) {
    puVar5 = param_1 + 3;
    do {
      *param_1 = *param_3;
      uVar1 = param_3[2];
      pwVar2 = (wchar_t *)param_3[1];
      if (*puVar5 <= uVar1) {
        if (10 < *puVar5) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar5[-2]);
        }
        uVar3 = uVar1 + 0x20 >> 5;
        *puVar5 = uVar3 << 5;
        pvVar4 = _malloc(uVar3 * 0x40);
        puVar5[-2] = (uint)pvVar4;
      }
      _wcsncpy((wchar_t *)puVar5[-2],pwVar2,uVar1);
      puVar5[-1] = uVar1;
      *(undefined2 *)(puVar5[-2] + uVar1 * 2) = 0;
      uVar1 = param_3[10];
      pwVar2 = (wchar_t *)param_3[9];
      if (puVar5[8] <= uVar1) {
        if (10 < puVar5[8]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar5[6]);
        }
        uVar3 = uVar1 + 0x20 & 0xffffffe0;
        puVar5[8] = uVar3;
        pvVar4 = _malloc(uVar3 * 2);
        puVar5[6] = (uint)pvVar4;
      }
      _wcsncpy((wchar_t *)puVar5[6],pwVar2,uVar1);
      puVar5[7] = uVar1;
      *(undefined2 *)(puVar5[6] + uVar1 * 2) = 0;
      puVar5[0xe] = param_3[0x11];
      uVar1 = param_3[0x13];
      pwVar2 = (wchar_t *)param_3[0x12];
      if (puVar5[0x11] <= uVar1) {
        if (10 < puVar5[0x11]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar5[0xf]);
        }
        uVar3 = uVar1 + 0x20 >> 5;
        puVar5[0x11] = uVar3 << 5;
        pvVar4 = _malloc(uVar3 * 0x40);
        puVar5[0xf] = (uint)pvVar4;
      }
      _wcsncpy((wchar_t *)puVar5[0xf],pwVar2,uVar1);
      puVar5[0x10] = uVar1;
      *(undefined2 *)(puVar5[0xf] + uVar1 * 2) = 0;
      puVar5[0x17] = param_3[0x1a];
      param_1 = param_1 + 0x1b;
      puVar5 = puVar5 + 0x1b;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_006c4bf0 @ 006c4bf0 ////

void __cdecl FUN_006c4bf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  
  if (param_1 != param_2) {
    puVar5 = param_1 + 3;
    do {
      *param_1 = *param_3;
      uVar1 = param_3[2];
      pwVar2 = (wchar_t *)param_3[1];
      if (*puVar5 <= uVar1) {
        if (10 < *puVar5) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar5[-2]);
        }
        uVar3 = uVar1 + 0x20 >> 5;
        *puVar5 = uVar3 << 5;
        pvVar4 = _malloc(uVar3 * 0x40);
        puVar5[-2] = (uint)pvVar4;
      }
      _wcsncpy((wchar_t *)puVar5[-2],pwVar2,uVar1);
      puVar5[-1] = uVar1;
      *(undefined2 *)(puVar5[-2] + uVar1 * 2) = 0;
      uVar1 = param_3[10];
      pwVar2 = (wchar_t *)param_3[9];
      if (puVar5[8] <= uVar1) {
        if (10 < puVar5[8]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar5[6]);
        }
        uVar3 = uVar1 + 0x20 & 0xffffffe0;
        puVar5[8] = uVar3;
        pvVar4 = _malloc(uVar3 * 2);
        puVar5[6] = (uint)pvVar4;
      }
      _wcsncpy((wchar_t *)puVar5[6],pwVar2,uVar1);
      puVar5[7] = uVar1;
      *(undefined2 *)(puVar5[6] + uVar1 * 2) = 0;
      param_1 = param_1 + 0x11;
      puVar5 = puVar5 + 0x11;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_006c4d00 @ 006c4d00 ////

void __cdecl FUN_006c4d00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  uint _Count;
  wchar_t *_Source;
  uint uVar2;
  void *pvVar3;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    *param_1 = *param_3;
    _Count = param_3[2];
    _Source = (wchar_t *)param_3[1];
    if ((uint)param_1[3] <= _Count) {
      if (10 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)param_1[1]);
      }
      uVar2 = _Count + 0x20 & 0xffffffe0;
      param_1[3] = uVar2;
      pvVar3 = _malloc(uVar2 * 2);
      param_1[1] = pvVar3;
    }
    _wcsncpy((wchar_t *)param_1[1],_Source,_Count);
    piVar1 = param_1 + 1;
    param_1[2] = _Count;
    param_1 = param_1 + 9;
    *(undefined2 *)(*piVar1 + _Count * 2) = 0;
  } while( true );
}


//// FUNCTION FUN_006c4da0 @ 006c4da0 ////

void __cdecl FUN_006c4da0(int *param_1,int *param_2,undefined4 *param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = (int)param_3 - (int)param_1;
    do {
      _Count = param_3[1];
      _Source = (wchar_t *)*param_3;
      if ((uint)param_1[2] <= _Count) {
        if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*param_1);
        }
        uVar1 = _Count + 0x20 & 0xffffffe0;
        param_1[2] = uVar1;
        pvVar2 = _malloc(uVar1 * 2);
        *param_1 = (int)pvVar2;
      }
      _wcsncpy((wchar_t *)*param_1,_Source,_Count);
      param_1[1] = _Count;
      *(undefined2 *)(*param_1 + _Count * 2) = 0;
      piVar3 = param_1 + 8;
      iVar4 = 0x10;
      do {
        *(undefined1 *)piVar3 = *(undefined1 *)((int)piVar3 + iVar5);
        piVar3 = (int *)((int)piVar3 + 1);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      param_1 = param_1 + 0xc;
      iVar5 = iVar5 + -0x30;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_006c4f40 @ 006c4f40 ////

void __fastcall FUN_006c4f40(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  
  (**(code **)(**(int **)(param_1 + 0x4b0) + 0xa8))();
  iVar3 = *(int *)(param_1 + 0x5ec);
  iVar4 = iVar3 + 6;
  if (*(int *)(param_1 + 0x5f4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5f8) - *(int *)(param_1 + 0x5f4) >> 2;
  }
  if (iVar2 <= iVar4) {
    if (*(int *)(param_1 + 0x5f4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x5f8) - *(int *)(param_1 + 0x5f4) >> 2;
    }
  }
  for (; iVar3 < iVar4; iVar3 = iVar3 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x5f4) + iVar3 * 4);
    (**(code **)(*piVar1 + 0x5c))(1,*(undefined4 *)(param_1 + 0x4b0),0);
    (**(code **)(*piVar1 + 100))(1,*(undefined4 *)(param_1 + 0x4b0),unaff_ESI);
    (**(code **)(**(int **)(param_1 + 0x4b0) + 0xc))(piVar1,1);
    piVar1[0x12] = piVar1[0x12] + 1;
    (**(code **)(*piVar1 + 0x14))();
  }
  (**(code **)(**(int **)(param_1 + 0x4c8) + 0xc0))(0 < *(int *)(param_1 + 0x5ec));
  if (*(int *)(param_1 + 0x5f4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5f8) - *(int *)(param_1 + 0x5f4) >> 2;
  }
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0xc0))
            (CONCAT31((int3)((uint)iVar4 >> 8),*(int *)(param_1 + 0x5ec) + 6 < iVar4));
  return;
}


//// FUNCTION FUN_006c5060 @ 006c5060 ////

void __fastcall FUN_006c5060(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  
  (**(code **)(**(int **)(param_1 + 0x510) + 0xa8))();
  iVar3 = *(int *)(param_1 + 0x600);
  iVar4 = iVar3 + 6;
  if (*(int *)(param_1 + 0x608) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60c) - *(int *)(param_1 + 0x608) >> 2;
  }
  if (iVar2 <= iVar4) {
    if (*(int *)(param_1 + 0x608) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x60c) - *(int *)(param_1 + 0x608) >> 2;
    }
  }
  for (; iVar3 < iVar4; iVar3 = iVar3 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x608) + iVar3 * 4);
    (**(code **)(*piVar1 + 0x5c))(1,*(undefined4 *)(param_1 + 0x510),0);
    (**(code **)(*piVar1 + 100))(1,*(undefined4 *)(param_1 + 0x510),unaff_ESI);
    (**(code **)(**(int **)(param_1 + 0x510) + 0xc))(piVar1,1);
    piVar1[0x12] = piVar1[0x12] + 1;
    (**(code **)(*piVar1 + 0x14))();
  }
  (**(code **)(**(int **)(param_1 + 0x528) + 0xc0))(0 < *(int *)(param_1 + 0x600));
  if (*(int *)(param_1 + 0x608) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x60c) - *(int *)(param_1 + 0x608) >> 2;
  }
  (**(code **)(**(int **)(param_1 + 0x540) + 0xc0))
            (CONCAT31((int3)((uint)iVar4 >> 8),*(int *)(param_1 + 0x600) + 6 < iVar4));
  return;
}


//// FUNCTION FUN_006c5220 @ 006c5220 ////

void __thiscall FUN_006c5220(void *this,int param_1)

{
  int *piVar1;
  void *_Memory;
  int *_Memory_00;
  
  FUN_006b60b0(param_1);
  piVar1 = *(int **)((int)this + 0x618);
  _Memory_00 = (int *)*piVar1;
  if (_Memory_00 != piVar1) {
    while (_Memory_00[2] != param_1) {
      _Memory_00 = (int *)*_Memory_00;
      if (_Memory_00 == piVar1) {
        FUN_006c3ed0((int)this);
        return;
      }
    }
    FUN_009638e0(_Memory_00[3]);
    _Memory = (void *)_Memory_00[3];
    if (_Memory != (void *)0x0) {
      FUN_006c16e0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    _Memory_00[3] = 0;
    if (_Memory_00 != *(int **)((int)this + 0x618)) {
      *(int *)_Memory_00[1] = *_Memory_00;
      *(int *)(*_Memory_00 + 4) = _Memory_00[1];
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
  }
  FUN_006c3ed0((int)this);
  return;
}


//// FUNCTION FUN_006c52c0 @ 006c52c0 ////

int __thiscall FUN_006c52c0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined1 local_10 [5];
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  local_10._1_4_ = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_10[0] = 0;
  local_1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)((int)this + 0x608) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 0x60c) - *(int *)((int)this + 0x608) >> 2;
    }
    if (iVar1 <= iVar2) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)((int)this + 0x608) + iVar2 * 4);
    iVar3 = 4;
    bVar7 = true;
    piVar4 = param_1;
    piVar5 = (int *)(*(int *)(iVar1 + 0x350) + 0x1c);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar7);
    if (bVar7) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x350) + 0x2c);
      iVar3 = 4;
      bVar7 = true;
      piVar5 = (int *)local_10;
      piVar6 = piVar4;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *piVar5 == *piVar6;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        return iVar1;
      }
      iVar3 = 4;
      bVar7 = true;
      piVar5 = piVar4;
      piVar6 = param_2;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *piVar5 == *piVar6;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        return iVar1;
      }
      iVar3 = 4;
      bVar7 = true;
      piVar5 = param_2;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *piVar4 == *piVar5;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar7);
      if (bVar7) {
        return iVar1;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


//// FUNCTION FUN_006c5380 @ 006c5380 ////

void __thiscall FUN_006c5380(void *this,void *param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  char local_50 [4];
  char *local_4c;
  uint uStack_48;
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb890;
  pvStack_c = ExceptionList;
  local_50[0] = ' ';
  ExceptionList = &pvStack_c;
  uVar5 = FUN_00413450(param_1,local_50,0,1);
  FUN_00430770(param_1,&local_4c,0,uVar5);
  local_4 = 0;
  FUN_00430770(param_1,local_2c,uVar5,*(uint *)((int)param_1 + 4));
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar6 = FUN_00567d80(local_2c);
  this_00 = (undefined4 *)((int)this + 0x3cc);
  FUN_004015d0(this_00,local_4c,uStack_48);
  puVar1 = (undefined4 *)((int)this + 0x3a4);
  *(undefined4 *)((int)this + 0x3c8) = uVar6;
  bVar4 = FUN_00430950(puVar1,"");
  if (bVar4) {
    FUN_00965a40(*(void **)((int)this + 0x410),(char *)*puVar1,*(undefined2 *)((int)this + 0x3c4));
    FUN_00965a40(*(void **)((int)this + 0x414),(char *)*puVar1,*(undefined2 *)((int)this + 0x3c4));
    FUN_00965a40(*(void **)((int)this + 0x418),(char *)*puVar1,*(undefined2 *)((int)this + 0x3c4));
    FUN_00965a40(*(void **)((int)this + 0x41c),(char *)*puVar1,*(undefined2 *)((int)this + 0x3c4));
  }
  FUN_00965a20(*(void **)((int)this + 0x410),*this_00,*(undefined2 *)((int)this + 0x3c8));
  FUN_00965a20(*(void **)((int)this + 0x414),*this_00,*(undefined2 *)((int)this + 0x3c8));
  FUN_00965a20(*(void **)((int)this + 0x418),*this_00,*(undefined2 *)((int)this + 0x3c8));
  FUN_00965a20(*(void **)((int)this + 0x41c),*this_00,*(undefined2 *)((int)this + 0x3c8));
  FUN_00965a20(*(void **)((int)this + 0x420),*this_00,*(undefined2 *)((int)this + 0x3c8));
  puVar2 = *(undefined4 **)((int)this + 0x618);
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    bVar4 = FUN_00430950(puVar1,"");
    if (bVar4) {
      FUN_00965a40((void *)puVar3[3],(char *)*puVar1,*(undefined2 *)((int)this + 0x3c4));
    }
    FUN_00965a20((void *)puVar3[3],*this_00,*(undefined2 *)((int)this + 0x3c8));
  }
  puVar2 = *(undefined4 **)((int)this + 0x624);
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    bVar4 = FUN_00430950(puVar1,"");
    if (bVar4) {
      FUN_00965a40((void *)puVar3[3],(char *)*puVar1,*(undefined2 *)((int)this + 0x3c4));
    }
    FUN_00965a20((void *)puVar3[3],*this_00,*(undefined2 *)((int)this + 0x3c8));
  }
  if (uStack_24 < 0x15) {
    if (uStack_44 < 0x15) {
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c[0]);
}


//// FUNCTION FUN_006c5600 @ 006c5600 ////

undefined1 FUN_006c5600(char *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  wchar_t *pwVar6;
  void *local_20 [2];
  uint local_18;
  
  uVar1 = FUN_00ace02d(L"<translate>");
  FUN_004036d0(param_2,L"<translate>",uVar1);
  uVar5 = 0;
  iVar2 = __strnicmp(param_1,"MVX0022:",8);
  if (iVar2 == 0) {
    sVar3 = FUN_00ace02d(L"ONLINE_SCREEN_FILE_EXISTS");
    FUN_0040cae0(param_2,L"ONLINE_SCREEN_FILE_EXISTS",sVar3);
  }
  else {
    iVar2 = __strnicmp(param_1,"MVX0023:",8);
    if (iVar2 == 0) {
      sVar3 = FUN_00ace02d(L"ONLINE_SCREEN_FILE_TOO_BIG");
      FUN_0040cae0(param_2,L"ONLINE_SCREEN_FILE_TOO_BIG",sVar3);
    }
    else {
      iVar2 = __strnicmp(param_1,"MVX501:",7);
      if (iVar2 == 0) {
        sVar3 = FUN_00ace02d(L"ONLINE_SCREEN_UNKNOWN_USERNAME_PASSWORD");
        FUN_0040cae0(param_2,L"ONLINE_SCREEN_UNKNOWN_USERNAME_PASSWORD",sVar3);
      }
      else {
        iVar2 = __strnicmp(param_1,"MVX502:",7);
        if (iVar2 == 0) {
          pwVar6 = L"ONLINE_SCREEN_INVALID_CD_KEY";
        }
        else {
          iVar2 = __strnicmp(param_1,"MVX505:",7);
          if (iVar2 == 0) {
            pwVar6 = L"ONLINE_SCREEN_USERACCOUNT_NOT_FULLY_ACTIVATED";
          }
          else {
            iVar2 = __strnicmp(param_1,"MVX506:",7);
            if ((iVar2 == 0) || (iVar2 = __strnicmp(param_1,"MVX507:",7), iVar2 == 0)) {
              pwVar6 = L"ONLINE_SCREEN_USERACCOUNT_USER_NOT_REGISTERED_WITH_PRODUCT";
            }
            else {
              iVar2 = __strnicmp(param_1,"MVX500:",7);
              if (iVar2 == 0) {
                FUN_0043bcf0(param_2,L"ONLINE_SCREEN_USERACCOUNT_GENERIC_FATAL_ERROR");
                uVar5 = 1;
                goto LAB_006c5abf;
              }
              iVar2 = __strnicmp(param_1,"MVX503:",7);
              if (iVar2 == 0) {
                FUN_0043bcf0(param_2,L"ONLINE_SCREEN_INVALID_SESSION");
                uVar5 = 1;
                goto LAB_006c5abf;
              }
              iVar2 = __strnicmp(param_1,"MVX401:",7);
              if (iVar2 == 0) {
                FUN_0043bcf0(param_2,L"ONLINE_SCREEN_INVALID_REQUEST");
                uVar5 = 1;
                goto LAB_006c5abf;
              }
              iVar2 = __strnicmp(param_1,"MVX560:",7);
              if (iVar2 == 0) {
                pwVar6 = L"ONLINE_SCREEN_SERVER_CHECKSUM_INVALID";
              }
              else {
                iVar2 = __strnicmp(param_1,"MVX561:",7);
                if (iVar2 == 0) {
                  FUN_0043bcf0(param_2,L"ONLINE_SCREEN_SERVER_STORAGE_ERROR");
                  uVar5 = 1;
                  goto LAB_006c5abf;
                }
                iVar2 = __strnicmp(param_1,"MVX562:",7);
                if (iVar2 == 0) {
                  FUN_0043bcf0(param_2,L"ONLINE_SCREEN_SERVER_DATA_STORAGE_ERROR");
                  uVar5 = 1;
                  goto LAB_006c5abf;
                }
                iVar2 = __strnicmp(param_1,"MVX563:",7);
                if (iVar2 == 0) {
                  pwVar6 = L"ONLINE_SCREEN_SERVER_PARSE_ERROR";
                }
                else {
                  iVar2 = __strnicmp(param_1,"MVX564:",7);
                  if (iVar2 == 0) {
                    pwVar6 = L"ONLINE_SCREEN_UPLOAD_NOTMORE";
                  }
                  else {
                    iVar2 = __strnicmp(param_1,"MVX505:",7);
                    if (iVar2 == 0) {
                      FUN_0043bcf0(param_2,L"ONLINE_SCREEN_SERVER_NOT_LOGGEDIN");
                      uVar5 = 1;
                      goto LAB_006c5abf;
                    }
                    iVar2 = __strnicmp(param_1,"MVX515:",7);
                    if (iVar2 == 0) {
                      pwVar6 = L"ONLINE_SCREEN_SERVER_MOVIE_ERROR_INFORMATION";
                    }
                    else {
                      iVar2 = __strnicmp(param_1,"MVX406:",7);
                      if (iVar2 == 0) {
                        pwVar6 = L"ONLINE_SCREEN_SERVER_DELETE_MOVIE_NOT_FOUND";
                      }
                      else {
                        iVar2 = __strnicmp(param_1,"MVX518:",7);
                        if (iVar2 == 0) {
                          pwVar6 = L"ONLINE_SCREEN_SERVER_CHART_TABLE_READ_ERROR";
                        }
                        else {
                          iVar2 = __strnicmp(param_1,"MVX513:",7);
                          if (iVar2 == 0) {
                            FUN_0043bcf0(param_2,L"ONLINE_SCREEN_ABUSED_CD_KEY");
                            uVar5 = 1;
                            goto LAB_006c5abf;
                          }
                          iVar2 = __strnicmp(param_1,"MVX514:",7);
                          if (iVar2 == 0) {
                            FUN_0043bcf0(param_2,L"ONLINE_SCREEN_ACTIVATION_ERROR");
                            uVar5 = 1;
                            goto LAB_006c5abf;
                          }
                          iVar2 = __strnicmp(param_1,"MVX504:",7);
                          if (iVar2 == 0) {
                            FUN_0043bcf0(param_2,L"ONLINE_SCREEN_USERACCOUNT_NOT_FULLY_ACTIVATED");
                            uVar5 = 1;
                            goto LAB_006c5abf;
                          }
                          iVar2 = __strnicmp(param_1,"MVX519:",7);
                          if (iVar2 == 0) {
                            FUN_0043bcf0(param_2,L"ONLINE_SCREEN_CD_KEY_ALREADY_ASSIGNED");
                            uVar5 = 1;
                            goto LAB_006c5abf;
                          }
                          iVar2 = __strnicmp(param_1,"MVX0041:",8);
                          if (iVar2 == 0) {
                            pwVar6 = L"ONLINE_SCREEN_PROPSHOP_ERROR";
                          }
                          else {
                            iVar2 = __strnicmp(param_1,"MVX0061:",8);
                            if (iVar2 == 0) {
                              pwVar6 = L"ONLINE_SCREEN_DELETE_ONLINE_1";
                            }
                            else {
                              iVar2 = __strnicmp(param_1,"MVX0062:",8);
                              if (iVar2 != 0) {
                                iVar2 = __strnicmp(param_1,"MVX521:",7);
                                if (iVar2 == 0) {
                                  FUN_0043bcf0(param_2,L"ONLINE_SCREEN_SERVER_BUSY");
                                  uVar5 = 1;
                                }
                                else {
                                  iVar2 = __strnicmp(param_1,"MVX522:",7);
                                  if (iVar2 == 0) {
                                    FUN_0043bcf0(param_2,L"ONLINE_SCREEN_SERVER_BUSY_10");
                                    uVar5 = 1;
                                  }
                                  else {
                                    iVar2 = __strnicmp(param_1,"MVX",3);
                                    if (iVar2 == 0) {
                                      puVar4 = FUN_009ad240(local_20,param_1,'\x01');
                                      FUN_00403e70(param_2,puVar4);
                                      if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
                                        _free(local_20[0]);
                                      }
                                      iVar2 = FUN_004430a0(param_2,(short *)&DAT_00d3e9a4,0);
                                      if (iVar2 < 1) {
                                        return 0;
                                      }
                                      puVar4 = FUN_004211c0(param_2,local_20,iVar2 + 1U,
                                                            *(int *)((int)param_2 + 4) -
                                                            (iVar2 + 1U));
                                      FUN_00403e70(param_2,puVar4);
                                      if (local_18 < 0xb) {
                                        return 0;
                                      }
                    /* WARNING: Subroutine does not return */
                                      _free(local_20[0]);
                                    }
                                    FUN_00403e90(param_2,L"ONLINE_SCREEN_FATAL_ERROR");
                                    uVar5 = 1;
                                  }
                                }
                                goto LAB_006c5abf;
                              }
                              pwVar6 = L"ONLINE_SCREEN_DELETE_ONLINE_2";
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        FUN_0043bcf0(param_2,pwVar6);
      }
    }
  }
LAB_006c5abf:
  sVar3 = FUN_00ace02d(L"</translate>");
  FUN_0040cae0(param_2,L"</translate>",sVar3);
  return uVar5;
}


//// FUNCTION FUN_006c5af0 @ 006c5af0 ////

undefined4 * __cdecl FUN_006c5af0(undefined4 *param_1)

{
  CHAR *pCVar1;
  undefined4 uVar2;
  uint uVar3;
  CHAR local_1c [20];
  
  pCVar1 = local_1c;
  local_1c[0] = '\0';
  uVar2 = 0;
  uVar3 = 0x14;
  FUN_004015d0(&stack0xffffffd8,"CDKey",5);
  FUN_006c4160(param_1,pCVar1,uVar2,uVar3);
  return param_1;
}


//// FUNCTION FUN_006c5b30 @ 006c5b30 ////

undefined4 * __cdecl FUN_006c5b30(undefined4 *param_1)

{
  CHAR *pCVar1;
  undefined4 uVar2;
  uint uVar3;
  CHAR local_1c [20];
  
  pCVar1 = local_1c;
  local_1c[0] = '\0';
  uVar2 = 0;
  uVar3 = 0x14;
  FUN_004015d0(&stack0xffffffd8,"CDKey_AddOn1",0xc);
  FUN_006c4160(param_1,pCVar1,uVar2,uVar3);
  return param_1;
}


//// FUNCTION FUN_006c5b70 @ 006c5b70 ////

void __fastcall FUN_006c5b70(int param_1)

{
  FUN_006c4550(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_006c5ba0 @ 006c5ba0 ////

void __fastcall FUN_006c5ba0(int param_1)

{
  int *_Memory;
  
  _Memory = (int *)**(int **)(param_1 + 4);
  if (_Memory != *(int **)(param_1 + 4)) {
    *(int *)_Memory[1] = *_Memory;
    *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_006c5bd0 @ 006c5bd0 ////

void __fastcall FUN_006c5bd0(int param_1)

{
  FUN_006c4610(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_006c5bf0 @ 006c5bf0 ////

void __fastcall FUN_006c5bf0(int param_1)

{
  FUN_006c46b0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_006c5c10 @ 006c5c10 ////

void __fastcall FUN_006c5c10(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_006c5c50 @ 006c5c50 ////

void __fastcall FUN_006c5c50(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_006c5ce0 @ 006c5ce0 ////

void __fastcall FUN_006c5ce0(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_006c5d10 @ 006c5d10 ////

undefined4 * FUN_006c5d10(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  return param_1 + param_2;
}


//// FUNCTION FUN_006c5de0 @ 006c5de0 ////

void * __cdecl FUN_006c5de0(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_006c2290(param_3,param_1);
    }
    param_1 = param_1 + 0x1b;
    param_3 = (void *)((int)param_3 + 0x6c);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_006c5e20 @ 006c5e20 ////

void * __cdecl FUN_006c5e20(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_006c2330(param_3,param_1);
    }
    param_1 = param_1 + 0x11;
    param_3 = (void *)((int)param_3 + 0x44);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_006c5e60 @ 006c5e60 ////

undefined4 * __cdecl FUN_006c5e60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  void *pvVar2;
  uint *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        puVar3[-2] = (uint)(puVar3 + 1);
        *(undefined2 *)(puVar3 + 1) = 0;
        puVar3[-1] = 0;
        *puVar3 = 10;
        _Count = param_1[2];
        _Source = (wchar_t *)param_1[1];
        if (9 < _Count) {
          uVar1 = _Count + 0x20 & 0xffffffe0;
          *puVar3 = uVar1;
          pvVar2 = _malloc(uVar1 * 2);
          puVar3[-2] = (uint)pvVar2;
        }
        _wcsncpy((wchar_t *)puVar3[-2],_Source,_Count);
        puVar3[-1] = _Count;
        *(undefined2 *)(puVar3[-2] + _Count * 2) = 0;
      }
      param_1 = param_1 + 9;
      param_3 = param_3 + 9;
      puVar3 = puVar3 + 9;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_006c5f10 @ 006c5f10 ////

int * __cdecl FUN_006c5f10(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  
  if (param_1 != param_2) {
    piVar3 = param_1 + 8;
    do {
      if (param_3 != (int *)0x0) {
        *param_3 = (int)(param_3 + 3);
        *(undefined2 *)(param_3 + 3) = 0;
        param_3[1] = 0;
        param_3[2] = 10;
        _Count = piVar3[-7];
        _Source = (wchar_t *)*param_1;
        if (9 < _Count) {
          uVar1 = _Count + 0x20 & 0xffffffe0;
          param_3[2] = uVar1;
          pvVar2 = _malloc(uVar1 * 2);
          *param_3 = (int)pvVar2;
        }
        _wcsncpy((wchar_t *)*param_3,_Source,_Count);
        param_3[1] = _Count;
        *(undefined2 *)(*param_3 + _Count * 2) = 0;
        param_3[8] = *piVar3;
        param_3[9] = piVar3[1];
        param_3[10] = piVar3[2];
        param_3[0xb] = piVar3[3];
      }
      param_1 = param_1 + 0xc;
      param_3 = param_3 + 0xc;
      piVar3 = piVar3 + 0xc;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_006c5fd0 @ 006c5fd0 ////

void __fastcall FUN_006c5fd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3f1c4;
  param_1[0x14] = &PTR_FUN_00d3f1a8;
  FUN_006c4550((int)(param_1 + 0xd1));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xd2]);
}


//// FUNCTION FUN_006c6010 @ 006c6010 ////

int * __cdecl FUN_006c6010(int *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  uint _Size;
  void *pvVar7;
  byte *pbVar8;
  bool bVar9;
  LPCSTR pCVar10;
  undefined4 uVar11;
  uint **ppuVar12;
  uint uVar13;
  size_t _Count;
  uint *local_1ac;
  uint local_1a8;
  uint local_1a4;
  undefined1 local_1a0 [20];
  uint *local_18c;
  undefined4 local_188;
  uint local_184;
  undefined1 local_180 [20];
  byte *local_16c;
  undefined4 local_168;
  uint local_164;
  byte local_160 [20];
  uint *local_14c;
  int local_148;
  uint local_144;
  undefined1 *local_12c;
  uint *local_128 [2];
  uint local_120;
  uint *local_108 [2];
  uint local_100;
  undefined1 local_e8 [16];
  uint local_d8 [22];
  char local_80 [128];
  
  local_12c = &stack0xfffffe20;
  pCVar10 = &stack0xfffffe2c;
  bVar3 = false;
  uVar11 = 0;
  uVar13 = 0x14;
  FUN_004015d0(&stack0xfffffe20,"CDKey_Addon1",0xc);
  FUN_006c4160(&local_14c,pCVar10,uVar11,uVar13);
  if (local_148 != 0) {
    local_16c = local_160;
    local_160[0] = 0;
    local_168 = 0;
    local_164 = 0x14;
    _strncpy((char *)local_16c,"",0);
    local_168 = 0;
    *local_16c = 0;
    bVar3 = true;
    puVar4 = local_14c;
    pbVar8 = local_16c;
    do {
      bVar1 = (byte)*puVar4;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_006c60d8:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_006c60dd;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)puVar4 + 1);
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_006c60d8;
      puVar4 = (uint *)((int)puVar4 + 2);
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_006c60dd:
    if (iVar5 != 0) {
      bVar9 = false;
      goto LAB_006c60e7;
    }
  }
  bVar9 = true;
LAB_006c60e7:
  if ((bVar3) && (0x14 < local_164)) {
                    /* WARNING: Subroutine does not return */
    _free(local_16c);
  }
  if (bVar9) {
    *param_1 = (int)(param_1 + 3);
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"null",4);
  }
  else {
    local_18c = (uint *)local_180;
    local_180[0] = 0;
    local_188 = 0;
    local_184 = 0x14;
    _strncpy((char *)local_18c,"gui.ini",7);
    local_1ac = (uint *)local_1a0;
    _Count = 3;
    local_188 = 7;
    *(char *)((int)local_18c + 7) = '\0';
    local_1a0[0] = 0;
    local_1a8 = 0;
    local_1a4 = 0x14;
    _strncpy((char *)local_1ac,"A1:",_Count);
    ppuVar12 = local_108;
    local_1a8 = 3;
    *(char *)((int)local_1ac + 3) = '\0';
    FUN_006c5af0(ppuVar12);
    FUN_006c42d0(local_128);
    FUN_0048ad50((int *)local_128);
    FUN_0048ad50((int *)local_108);
    FUN_0048ad50((int *)&local_14c);
    FUN_00a24780(local_d8);
    puVar4 = local_14c;
    do {
      uVar13 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
    } while ((char)uVar13 != '\0');
    FUN_00a247b0(local_d8,local_14c,(int)puVar4 - ((int)local_14c + 1));
    puVar4 = local_108[0];
    do {
      uVar13 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
    } while ((char)uVar13 != '\0');
    FUN_00a247b0(local_d8,local_108[0],(int)puVar4 - ((int)local_108[0] + 1));
    puVar4 = local_128[0];
    do {
      uVar13 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
    } while ((char)uVar13 != '\0');
    FUN_00a247b0(local_d8,local_128[0],(int)puVar4 - ((int)local_128[0] + 1));
    puVar4 = local_1ac;
    do {
      uVar13 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
    } while ((char)uVar13 != '\0');
    FUN_00a247b0(local_d8,local_1ac,(uint)((int)puVar4 + (-1 - ((int)local_1ac + 1))));
    puVar4 = local_18c;
    do {
      uVar13 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
    } while ((char)uVar13 != '\0');
    FUN_00a247b0(local_d8,local_18c,(int)puVar4 - ((int)local_18c + 1));
    FUN_00a24880(local_d8,(int)local_e8);
    iVar5 = 0;
    do {
      _sprintf(local_80,"%02x");
      pcVar6 = local_80;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_004073f0(&local_1ac,local_80,(int)pcVar6 - (int)(local_80 + 1));
      uVar13 = local_1a8;
      puVar4 = local_1ac;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x10);
    param_1[1] = 0;
    param_1[2] = 0x14;
    *param_1 = (int)(param_1 + 3);
    *(undefined1 *)(param_1 + 3) = 0;
    if (0x13 < local_1a8) {
      _Size = local_1a8 + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar7 = _malloc(_Size);
      *param_1 = (int)pvVar7;
    }
    _strncpy((char *)*param_1,(char *)puVar4,uVar13);
    param_1[1] = uVar13;
    *(undefined1 *)(uVar13 + *param_1) = 0;
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128[0]);
    }
    if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
      _free(local_108[0]);
    }
    if (0x14 < local_1a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1ac);
    }
    if (0x14 < local_184) {
                    /* WARNING: Subroutine does not return */
      _free(local_18c);
    }
  }
  if (local_144 < 0x15) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_14c);
}


//// FUNCTION FUN_006c69a0 @ 006c69a0 ////

void __fastcall FUN_006c69a0(int *param_1,undefined4 param_2)

{
  void *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  char *_Str1;
  long lVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar8;
  ulonglong uVar9;
  undefined2 *local_98;
  undefined4 uStack_94;
  uint local_90;
  undefined2 auStack_8c [10];
  char *local_78;
  uint uStack_74;
  uint local_70;
  float fStack_64;
  float local_58 [2];
  char *pcStack_50;
  undefined2 *local_4c;
  undefined4 uStack_48;
  uint local_44;
  undefined2 auStack_40 [10];
  char *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccb982;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar9 = FUN_00990ae0(param_1,param_2);
  if ((uint)((int)uVar9 - param_1[0x19a]) < (uint)param_1[0x19b]) {
    if (param_1[0x1c3] != 0) {
      puVar1 = FUN_00569df0(&local_98,(uint)((param_1[0x19b] - (int)uVar9) + param_1[0x19a]) / 1000)
      ;
      puVar1 = FUN_0043bdc0(&local_4c,
                            L"<o3><phrasebook><translate>ONLINE_SCREEN_QUEUE_WAIT</translate><phrase key=secs>"
                            ,puVar1);
      FUN_0043be60(&local_78,puVar1,L"</phrase></phrasebook></o3>");
      local_4 = 0;
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      if (10 < local_90) {
                    /* WARNING: Subroutine does not return */
        _free(local_98);
      }
      FUN_006b8100((void *)param_1[0x1c3],&local_78);
      local_2c[0] = local_78;
      if (local_70 < 0xb) {
        ExceptionList = local_c;
        return;
      }
LAB_006c6b8d:
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  else {
    param_1[0x19b] = 0;
    if ((char)param_1[0x19c] != '\0') {
      *(undefined1 *)(param_1 + 0x19c) = 0;
      FUN_006c5af0(&local_78);
      local_4 = 1;
      FUN_009672d0((void *)param_1[0x104],(char *)param_1[0xd1],(char *)param_1[0xd9],local_78);
      if ((*(uint *)(param_1[0x162] + 0x218) >> 4 & 1) != 0) {
        FUN_006c1ae0((int)param_1);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
        _free(local_78);
      }
    }
    uVar2 = FUN_006c2ec0(param_1,(void *)param_1[0x104],(int *)local_58);
    puVar1 = (undefined4 *)param_1[0x1c3];
    if (puVar1 != (undefined4 *)0x0) {
      piVar7 = puVar1 + 0x12;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        (**(code **)*puVar1)(1);
      }
      param_1[0x1c3] = 0;
    }
    this = (void *)param_1[0x104];
    if (*(int *)((int)this + 0x5c) == 3) {
      if ((char)uVar2 != '\0') {
        _Str1 = (char *)FUN_00965b90(this,4,(uint *)0x0);
        pcStack_50 = _Str1;
        lVar3 = FUN_00966120(_Str1);
        if (lVar3 < 1) {
          if (_Str1 == (char *)0x0) {
            local_98 = auStack_8c;
            auStack_8c[0] = 0;
            uStack_94 = 0;
            local_90 = 10;
            uVar4 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_NO_RESPONSE</translate>");
            FUN_004036d0(&local_98,L"<translate>ONLINE_SCREEN_NO_RESPONSE</translate>",uVar4);
            local_4 = 3;
            FUN_006c2f70(param_1,&local_98);
          }
          else {
            iVar5 = __strnicmp(_Str1,"MVX300:",7);
            if (iVar5 == 0) {
              puVar1 = FUN_00401de0(&local_78,_Str1 + 7,0xffffffff);
              local_4 = 4;
              FUN_006c5380(param_1,puVar1);
              if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
                _free(local_78);
              }
              *(undefined1 *)(param_1 + 0x19c) = 1;
                    /* WARNING: Subroutine does not return */
              _free(_Str1);
            }
            iVar5 = __strnicmp(_Str1,"MVX511:",7);
            if (iVar5 == 0) {
              FUN_00401de0(&local_78,"",0xffffffff);
              uVar2 = FUN_00401ec0(&PTR_DAT_00e57ae0,&local_78);
              if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
                _free(local_78);
              }
              if ((char)uVar2 != '\0') {
                FUN_00401de0(&local_78,_Str1,0xffffffff);
                local_4 = 5;
                iVar5 = FUN_00448370(&local_78,"|",0);
                if (0 < iVar5) {
                  puVar1 = FUN_00430770(&local_78,local_2c,iVar5 + 1,uStack_74);
                  FUN_00401e30(&PTR_DAT_00e57ae0,puVar1);
                  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2c[0]);
                  }
                }
                local_4c = auStack_40;
                auStack_40[0] = 0;
                uStack_48 = 0;
                local_44 = 10;
                local_98 = auStack_8c;
                auStack_8c[0] = 0;
                uStack_94 = 0;
                local_90 = 10;
                local_4 = CONCAT31(local_4._1_3_,7);
                FUN_0043bcf0(&local_98,
                             L"<phrasebook><translate>ONLINE_SCREEN_NEW_VERSION_AVAILABLE_10</translate>"
                            );
                FUN_0043bcf0(&local_98,
                             L"<translate>ONLINE_SCREEN_NEW_VERSION_AVAILABLE_20</translate>");
                FUN_0043bcf0(&local_98,
                             L"<translate>ONLINE_SCREEN_NEW_VERSION_AVAILABLE_30</translate></phrasebook>"
                            );
                pfVar6 = FUN_00726520();
                piVar7 = (int *)FUN_0071b2b0();
                fVar8 = (float10)(**(code **)(*piVar7 + 0x10))();
                local_58[0] = (float)fVar8;
                piVar7 = (int *)FUN_0071b2b0();
                fVar8 = (float10)(**(code **)(*piVar7 + 0x14))();
                (**(code **)((int)*pfVar6 + 100))
                          (1,param_1,
                           (float)(fVar8 * (float10)0.5 - (float10)DAT_00e5850c * (float10)0.5));
                (**(code **)((int)*pfVar6 + 0x5c))(1,param_1,fStack_64 * 0.5 - DAT_00e58508 * 0.5);
                (**(code **)(*(int *)pfVar6[0xd1] + 0x18))(0,&LAB_006c2c70,param_1,"ONLINE_CLOSE");
                (**(code **)(*(int *)pfVar6[0xd1] + 0x18))(5,&LAB_005f37f0,0,"ONLINE_CLOSE");
                (**(code **)(*(int *)pfVar6[0xd2] + 0x18))(0,&LAB_006c3e30,pfVar6,"ONLINE_CLOSE");
                (**(code **)(*(int *)pfVar6[0xd2] + 0x18))(5,&LAB_005f37f0,0,"ONLINE_CLOSE");
                (**(code **)(*param_1 + 0xac))(pfVar6);
                (**(code **)(*param_1 + 0xc))(pfVar6,1);
                if (10 < local_90) {
                    /* WARNING: Subroutine does not return */
                  _free(local_98);
                }
                if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
                  _free(local_4c);
                }
                _Str1 = pcStack_50;
                if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
                  _free(local_78);
                }
              }
              goto LAB_006c6fa1;
            }
            iVar5 = __strnicmp(_Str1,"MVX",3);
            if (iVar5 != 0) {
              iVar5 = __strnicmp(_Str1,"MV000",5);
              if (iVar5 == 0) {
                FUN_00401de0(&local_4c,"Software\\Lionhead Studios Ltd\\TheMovies",0xffffffff);
                local_4 = 9;
                FUN_00a05ff0(local_58,&local_4c,1);
                if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
                  _free(local_4c);
                }
                FUN_00401de0(&local_98,"1",0xffffffff);
                local_4._0_1_ = 0xc;
                FUN_00a061a0(local_58,&PTR_DAT_00e57a40,&local_98);
                if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
                  _free(local_98);
                }
                puVar1 = FUN_006c2bf0(param_1,local_2c);
                FUN_00401de0(&local_98,(char *)*puVar1,0xffffffff);
                local_4._0_1_ = 0xe;
                FUN_00a061a0(local_58,&PTR_DAT_00e57a60,&local_98);
                if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
                  _free(local_98);
                }
                local_4._0_1_ = 0xb;
                if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
                  _free(local_2c[0]);
                }
                param_1[0x103] = 2;
                FUN_006c4010((int)param_1);
                FUN_006c6010((int *)&local_78);
                local_4 = CONCAT31(local_4._1_3_,0xf);
                FUN_00967130((void *)param_1[0x104],(char *)param_1[0xd1],(char *)param_1[0xd9],
                             PTR_DAT_00e57aa0,200,(undefined4 *)local_78,uStack_74);
                if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
                  _free(local_78);
                }
                local_4 = 0xffffffff;
                FUN_00a05fe0((int)local_58);
                    /* WARNING: Subroutine does not return */
                _free(_Str1);
              }
              if ((char)param_1[0x199] == '\0') {
                *(undefined1 *)(param_1 + 0x199) = 1;
                FUN_00401de0(&local_78,"<translate>ONLINE_SCREEN_ERROR</translate> ",0xffffffff);
                local_4 = 0x10;
                FUN_00430a20(&local_78,_Str1);
                puVar1 = FUN_00568790(local_2c,&local_78);
                local_4 = CONCAT31(local_4._1_3_,0x11);
                FUN_006c2f70(param_1,puVar1);
                if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
                  _free(local_2c[0]);
                }
                if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
                  _free(local_78);
                }
              }
              goto LAB_006c6fa1;
            }
            local_98 = auStack_8c;
            auStack_8c[0] = 0;
            uStack_94 = 0;
            local_90 = 10;
            local_4 = 8;
            if ((char)param_1[0x199] != '\0') goto LAB_006c6fa1;
            *(undefined1 *)(param_1 + 0x199) = 1;
            FUN_006c5600(_Str1,&local_98);
            FUN_006c2f70(param_1,&local_98);
          }
        }
        else {
          uVar9 = FUN_00990ae0(extraout_ECX,extraout_EDX);
          param_1[0x19a] = (int)uVar9;
          param_1[0x19b] = lVar3 * 1000;
          *(undefined1 *)(param_1 + 0x19c) = 1;
          puVar1 = FUN_00569df0(&local_4c,lVar3);
          puVar1 = FUN_0043bdc0(&local_78,
                                L"<o3><phrasebook><translate>ONLINE_SCREEN_QUEUE_WAIT</translate><phrase key=secs>"
                                ,puVar1);
          FUN_0043be60(&local_98,puVar1,L"</phrase></phrasebook></o3>");
          local_4 = 2;
          if (10 < local_70) {
                    /* WARNING: Subroutine does not return */
            _free(local_78);
          }
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          puVar1 = FUN_006b85a0();
          param_1[0x1c3] = (int)puVar1;
          (**(code **)(*(int *)puVar1[0xea] + 0x18))(0,&LAB_006c2c70,param_1,"ONLINE_OK");
        }
        if (10 < local_90) {
                    /* WARNING: Subroutine does not return */
          _free(local_98);
        }
LAB_006c6fa1:
                    /* WARNING: Subroutine does not return */
        _free(_Str1);
      }
    }
    else if ((char)uVar2 != '\0') {
      ExceptionList = local_c;
      return;
    }
    if ((char)param_1[0x199] == '\0') {
      *(undefined1 *)(param_1 + 0x199) = 1;
      puVar1 = FUN_006c4350(local_2c,this);
      local_4 = 0x12;
      FUN_006c2f70(param_1,puVar1);
      if (10 < uStack_24) goto LAB_006c6b8d;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006c7240 @ 006c7240 ////

void __fastcall FUN_006c7240(int *param_1)

{
  float fVar1;
  size_t sVar2;
  float *pfVar3;
  float10 fVar4;
  void *_Memory;
  uint uVar5;
  void *pvVar6;
  wchar_t *pwVar7;
  undefined2 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ccb998;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_4 = 0;
  if ((*PTR_DAT_00e57b40 == 'a') || (*PTR_DAT_00e57b40 == 'A')) {
    ExceptionList = &pvStack_c;
    sVar2 = FUN_00ace02d(
                        L"<P ALIGN\t= CENTER><o2><translate>ONLINE_SCREEN_CONTENT_AWARDS_DL_QUERY</translate></o2></P>"
                        );
    pwVar7 = 
    L"<P ALIGN\t= CENTER><o2><translate>ONLINE_SCREEN_CONTENT_AWARDS_DL_QUERY</translate></o2></P>";
  }
  else {
    ExceptionList = &pvStack_c;
    sVar2 = FUN_00ace02d(
                        L"<P ALIGN\t= CENTER><o2><translate>ONLINE_SCREEN_CONTENT_PROP_DL_QUERY</translate></o2></P>"
                        );
    pwVar7 = 
    L"<P ALIGN\t= CENTER><o2><translate>ONLINE_SCREEN_CONTENT_PROP_DL_QUERY</translate></o2></P>";
  }
  FUN_0040cae0(&local_2c,pwVar7,sVar2);
  pfVar3 = FUN_00726520();
  fVar1 = *pfVar3;
  fVar4 = (float10)(**(code **)(*param_1 + 0x14))();
  (**(code **)((int)fVar1 + 100))
            (1,param_1,(float)(fVar4 * (float10)0.5 - (float10)DAT_00e5850c * (float10)0.5));
  fVar1 = *pfVar3;
  fVar4 = (float10)(**(code **)(*param_1 + 0x10))();
  (**(code **)((int)fVar1 + 0x5c))
            (1,param_1,(float)(fVar4 * (float10)0.5 - (float10)DAT_00e58508 * (float10)0.5));
  (**(code **)(*(int *)pfVar3[0xd1] + 0x18))(0,&LAB_006c0950,param_1,"ONLINE_CANCEL");
  pvVar6 = (void *)0x5;
  (**(code **)(*(int *)pfVar3[0xd1] + 0x18))(5,&LAB_005f37f0,0,"ONLINE_CANCEL");
  (**(code **)(*(int *)pfVar3[0xd2] + 0x18))(0,&LAB_006c4f20,param_1,"ONLINE_OK");
  uVar5 = 0;
  _Memory = (void *)0x5;
  (**(code **)(*(int *)pfVar3[0xd2] + 0x18))(5,&LAB_005f37f0,0,"ONLINE_OK");
  (**(code **)(*param_1 + 0xac))(pfVar3);
  (**(code **)(*param_1 + 0xc))(pfVar3,1);
  if (10 < uVar5) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvVar6;
  return;
}


//// FUNCTION FUN_006c73c0 @ 006c73c0 ////

void __fastcall FUN_006c73c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  size_t sVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  int iVar8;
  undefined4 *puVar9;
  char *_Dest;
  char *pcVar10;
  float *pfVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  size_t *psVar12;
  bool bVar13;
  bool bVar14;
  float10 fVar15;
  ulonglong uVar16;
  float fVar17;
  wchar_t *pwVar18;
  size_t *local_58;
  size_t *local_54;
  char *local_50;
  undefined2 *local_4c;
  size_t local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccba08;
  local_c = ExceptionList;
  if ((char)param_1[0x1af] == '\0') {
    if (param_1[0x1ae] == 0) {
      return;
    }
    ExceptionList = &local_c;
    uVar16 = FUN_00990ae0(param_1,param_2);
    if ((uint)((int)uVar16 - param_1[0x1a3]) < (uint)param_1[0x1a4]) {
      ExceptionList = local_c;
      return;
    }
    param_1[0x1a4] = 0;
    if ((char)param_1[0x1a5] != '\0') {
      *(undefined1 *)(param_1 + 0x1a5) = 0;
      if (*(char *)((int)param_1 + 0x695) == '\0') {
        FUN_00966ab0((void *)param_1[0x108],(char *)param_1[0x1b2]);
      }
      else {
        FUN_00966a20((void *)param_1[0x108],(char *)param_1[0x1a6]);
      }
      if ((*(uint *)(param_1[0x162] + 0x218) >> 4 & 1) != 0) {
        FUN_006c1ae0((int)param_1);
      }
    }
    uVar4 = FUN_006c2ec0(param_1,(void *)param_1[0x108],(int *)&local_50);
    if (((*(int *)(param_1[0x108] + 0x5c) == 2) && (0 < *(int *)(param_1[0x108] + 0x7c))) &&
       (*(char *)((int)param_1 + 0x695) == '\0')) {
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 10;
      uVar5 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_DL_IN_PROGRESS</translate> ");
      FUN_004036d0(&local_4c,L"<translate>ONLINE_SCREEN_DL_IN_PROGRESS</translate> ",uVar5);
      local_50 = *(char **)(param_1[0x108] + 0x7c);
      local_54 = *(size_t **)(param_1[0x108] + 0x80);
      local_4 = 0;
      pwVar18 = L"%";
      uVar16 = FUN_00acd42c();
      pvVar6 = FUN_0043bd40(&local_4c,(int)uVar16);
      FUN_0040d3c0(pvVar6,pwVar18);
      FUN_006c3f60(param_1,&local_4c);
      local_4 = 0xffffffff;
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
    }
    pvVar6 = (void *)param_1[0x108];
    if ((*(int *)((int)pvVar6 + 0x5c) != 3) && ((char)uVar4 != '\0')) {
      ExceptionList = local_c;
      return;
    }
    if ((char)uVar4 != '\0') {
      psVar12 = (size_t *)0x0;
      local_54 = (size_t *)0x0;
      local_58 = (size_t *)0x0;
      if (*(char *)((int)param_1 + 0x695) == '\0') {
        psVar12 = FUN_00965e30(pvVar6);
        local_54 = psVar12;
        if (psVar12 != (uint *)0x0) {
          local_58 = (size_t *)psVar12[1];
        }
      }
      else {
        local_58 = FUN_00965b90(pvVar6,0xb,(uint *)0x0);
      }
      lVar7 = FUN_00966120((char *)local_58);
      if (lVar7 < 1) {
        if (local_58 == (size_t *)0x0) {
          local_4c = local_40;
          local_40[0] = 0;
          local_48 = 0;
          local_44 = 10;
          uVar5 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_DL_FAIL</translate>");
          FUN_004036d0(&local_4c,L"<translate>ONLINE_SCREEN_DL_FAIL</translate>",uVar5);
          local_4 = 1;
          FUN_006c3f60(param_1,&local_4c);
          FUN_006c2f70(param_1,&local_4c);
          FUN_006c1b10((int)param_1);
          local_4 = 0xffffffff;
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
        }
        else {
          iVar8 = __strnicmp((char *)local_58,"MVX300:",7);
          if (iVar8 == 0) {
            puVar9 = FUN_00401de0(local_2c,(char *)(psVar12[1] + 7),0xffffffff);
            local_4 = 2;
            FUN_006c5380(param_1,puVar9);
            local_4 = 0xffffffff;
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c[0]);
            }
            *(undefined1 *)(param_1 + 0x1a5) = 1;
          }
          else {
            iVar8 = __strnicmp((char *)local_58,"MVX",3);
            if (iVar8 == 0) {
              local_4c = local_40;
              local_40[0] = 0;
              local_48 = 0;
              local_44 = 10;
              local_4 = 3;
              _Dest = operator_new(*psVar12 + 1);
              sVar2 = *psVar12;
              pcVar10 = _Dest;
              for (uVar5 = sVar2 + 1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                pcVar10[0] = '\0';
                pcVar10[1] = '\0';
                pcVar10[2] = '\0';
                pcVar10[3] = '\0';
                pcVar10 = pcVar10 + 4;
              }
              for (uVar5 = sVar2 + 1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *pcVar10 = '\0';
                pcVar10 = pcVar10 + 1;
              }
              local_50 = _Dest;
              _strncpy(_Dest,(char *)local_58,*psVar12);
              uVar3 = FUN_006c5600(_Dest,&local_4c);
              local_50 = (char *)CONCAT31(local_50._1_3_,uVar3);
              FUN_006c3f60(param_1,&local_4c);
              FUN_006c2f70(param_1,&local_4c);
              bVar13 = local_44 < 10;
              bVar14 = local_44 == 10;
            }
            else {
              iVar8 = __strnicmp((char *)local_58,"MV0040",6);
              if (iVar8 == 0) {
                pcVar10 = FUN_00965e90((int *)psVar12);
                if (pcVar10 != (char *)0x0) {
                  FUN_00403e20(param_1 + 0x1a6,pcVar10);
                  *(undefined1 *)((int)param_1 + 0x695) = 1;
                  FUN_00966a20((void *)param_1[0x108],(char *)param_1[0x1a6]);
                    /* WARNING: Subroutine does not return */
                  _free(pcVar10);
                }
                local_4c = local_40;
                local_40[0] = 0;
                local_48 = 0;
                local_44 = 10;
                uVar5 = FUN_00ace02d(
                                    L"<P ALIGN\t= CENTER><o2><translate>ONLINE_SCREEN_DL_FAIL</translate></o2></P>"
                                    );
                FUN_004036d0(&local_4c,
                             L"<P ALIGN\t= CENTER><o2><translate>ONLINE_SCREEN_DL_FAIL</translate></o2></P>"
                             ,uVar5);
                local_4 = 4;
                pfVar11 = FUN_00726520();
                fVar17 = *pfVar11;
                fVar15 = (float10)(**(code **)(*param_1 + 0x14))();
                (**(code **)((int)fVar17 + 100))
                          (1,param_1,
                           (float)(fVar15 * (float10)0.5 - (float10)DAT_00e5850c * (float10)0.5));
                fVar17 = *pfVar11;
                fVar15 = (float10)(**(code **)(*param_1 + 0x10))();
                (**(code **)((int)fVar17 + 0x5c))
                          (1,param_1,
                           (float)(fVar15 * (float10)0.5 - (float10)DAT_00e58508 * (float10)0.5));
                (**(code **)(*(int *)pfVar11[0xd1] + 0x20))(0);
                fVar17 = DAT_00e58508 * 0.5;
                iVar8 = *(int *)pfVar11[0xd2];
                fVar15 = (float10)(**(code **)(*(int *)pfVar11[0xd2] + 0x10))();
                (**(code **)(iVar8 + 0x5c))
                          (1,pfVar11,(float)((float10)fVar17 - fVar15 * (float10)0.5));
                (**(code **)(*(int *)pfVar11[0xd2] + 0x18))(0,FUN_0071b530,pfVar11,"ONLINE_CLOSE");
                (**(code **)(*(int *)pfVar11[0xd2] + 0x18))(5,&LAB_005f37f0,0,"ONLINE_CLOSE");
                (**(code **)(*param_1 + 0xac))(pfVar11);
                (**(code **)(*param_1 + 0xc))(pfVar11,1);
                psVar12 = local_54;
                if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
                  _free(local_4c);
                }
                local_4c = local_40;
                local_40[0] = 0;
                local_48 = 0;
                local_44 = 10;
                uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
                FUN_004036d0(&local_4c,(wchar_t *)&lpCaption_00d16918,uVar5);
                local_4 = 5;
                FUN_006c3f60(param_1,&local_4c);
                local_4 = 0xffffffff;
                if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
                  _free(local_4c);
                }
                goto LAB_006c7ba8;
              }
              iVar8 = __strnicmp((char *)local_58,"MV0090",6);
              if (iVar8 == 0) {
                *(undefined1 *)((int)param_1 + 0x695) = 0;
                FUN_00403e20(param_1 + 0x1a6,"");
                (**(code **)(*(int *)param_1[0x1ae] + 0x20))(0);
                (**(code **)(*param_1 + 0xb0))(param_1[0x1ae]);
                local_54 = &local_48;
                local_48 = local_48 & 0xffff0000;
                local_50 = (char *)0x0;
                local_4c = (undefined2 *)&lpType_0000000a;
                uVar5 = FUN_00ace02d(
                                    L"<P ALIGN\t= CENTER><o2><translate>ONLINE_SCREEN_GAME_RESTART</translate></o2></P>"
                                    );
                FUN_004036d0(&local_54,
                             L"<P ALIGN\t= CENTER><o2><translate>ONLINE_SCREEN_GAME_RESTART</translate></o2></P>"
                             ,uVar5);
                local_c = (void *)0x6;
                pfVar11 = FUN_00726520();
                fVar17 = *pfVar11;
                fVar15 = (float10)(**(code **)(*param_1 + 0x14))();
                (**(code **)((int)fVar17 + 100))
                          (1,param_1,
                           (float)(fVar15 * (float10)0.5 - (float10)DAT_00e5850c * (float10)0.5));
                fVar17 = *pfVar11;
                fVar15 = (float10)(**(code **)(*param_1 + 0x10))();
                (**(code **)((int)fVar17 + 0x5c))
                          (1,param_1,
                           (float)(fVar15 * (float10)0.5 - (float10)DAT_00e58508 * (float10)0.5));
                (**(code **)(*(int *)pfVar11[0xd1] + 0x20))(0);
                fVar17 = DAT_00e58508 * 0.5;
                iVar8 = *(int *)pfVar11[0xd2];
                fVar15 = (float10)(**(code **)(*(int *)pfVar11[0xd2] + 0x10))();
                (**(code **)(iVar8 + 0x5c))
                          (1,pfVar11,(float)((float10)fVar17 - fVar15 * (float10)0.5));
                (**(code **)(*(int *)pfVar11[0xd2] + 0x18))(0,FUN_0071b530,pfVar11,"ONLINE_CLOSE");
                (**(code **)(*(int *)pfVar11[0xd2] + 0x18))(5,&LAB_005f37f0,0,"ONLINE_CLOSE");
                (**(code **)(*param_1 + 0xac))(pfVar11);
                (**(code **)(*param_1 + 0xc))(pfVar11,1);
                local_4 = 0xffffffff;
                psVar12 = local_54;
                if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
                  _free(local_4c);
                }
                goto LAB_006c7ba8;
              }
              FUN_00401de0(&local_4c,"<translate>ONLINE_SCREEN_DL_FAIL</translate> ",0xffffffff);
              local_4 = 7;
              FUN_004073f0(&local_4c,(char *)psVar12[1],*psVar12);
              puVar9 = FUN_00568790(local_2c,&local_4c);
              local_4._0_1_ = 8;
              FUN_006c3f60(param_1,puVar9);
              local_4._0_1_ = 7;
              if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
                _free(local_2c[0]);
              }
              puVar9 = FUN_00568790(local_2c,&local_4c);
              local_4 = CONCAT31(local_4._1_3_,9);
              FUN_006c2f70(param_1,puVar9);
              if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
                _free(local_2c[0]);
              }
              bVar13 = local_44 < 0x14;
              bVar14 = local_44 == 0x14;
            }
            local_4 = 0xffffffff;
            if (!bVar13 && !bVar14) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c);
            }
          }
        }
      }
      else {
        uVar16 = FUN_00990ae0(extraout_ECX,extraout_EDX);
        param_1[0x1a3] = (int)uVar16;
        param_1[0x1a4] = lVar7 * 1000;
        *(undefined1 *)(param_1 + 0x1a5) = 1;
      }
LAB_006c7ba8:
      if (psVar12 != (size_t *)0x0) {
        *psVar12 = 0;
        if ((void *)psVar12[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)psVar12[1]);
        }
        psVar12[1] = 0;
        local_58 = psVar12;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_58);
    }
    FUN_006c4350(local_2c,pvVar6);
    local_4 = 10;
    FUN_006c3f60(param_1,local_2c);
    FUN_006c2f70(param_1,local_2c);
    FUN_006c1b10((int)param_1);
    local_4 = 0xffffffff;
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    puVar9 = (undefined4 *)param_1[0x1ae];
    *(undefined1 *)(param_1 + 0x1af) = 0;
    if (puVar9 != (undefined4 *)0x0) {
      piVar1 = puVar9 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar9)(1);
      }
      param_1[0x1ae] = 0;
    }
    piVar1 = param_1 + 0x1b2;
    uVar4 = FUN_00401ec0(piVar1,&PTR_DAT_00e57b00);
    if ((char)uVar4 == '\0') {
      uVar4 = FUN_00401ec0(piVar1,&PTR_DAT_00e57b20);
      if ((char)uVar4 != '\0') goto LAB_006c743c;
      uVar4 = FUN_00401ec0(piVar1,&PTR_DAT_00e57b40);
      if ((char)uVar4 == '\0') {
        ExceptionList = local_c;
        return;
      }
      FUN_00403e20(&PTR_DAT_00e57b40,"");
      *(undefined1 *)((int)param_1 + 0x6c1) = 0;
      *(undefined1 *)((int)param_1 + 0x6be) = 0;
      goto LAB_006c7d8d;
    }
  }
  else {
    puVar9 = (undefined4 *)param_1[0x1ae];
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x1af) = 0;
    if (puVar9 != (undefined4 *)0x0) {
      piVar1 = puVar9 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar9)(1);
      }
      param_1[0x1ae] = 0;
    }
    uVar4 = FUN_00401ec0(param_1 + 0x1b2,&PTR_DAT_00e57b00);
    if ((char)uVar4 == '\0') {
      uVar4 = FUN_00401ec0(param_1 + 0x1b2,&PTR_DAT_00e57b20);
      if ((char)uVar4 == '\0') {
        ExceptionList = local_c;
        return;
      }
LAB_006c743c:
      *(undefined1 *)((int)param_1 + 0x6c1) = 0;
      *(undefined1 *)((int)param_1 + 0x6c3) = 1;
      ExceptionList = local_c;
      return;
    }
  }
  *(undefined1 *)((int)param_1 + 0x6bd) = 0;
LAB_006c7d8d:
  *(undefined1 *)((int)param_1 + 0x6bf) = 1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006c7db0 @ 006c7db0 ////

uint __fastcall FUN_006c7db0(void *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  char *_Str2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_50;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  undefined2 *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccba48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006c4010((int)param_1);
  FUN_00966b70(*(void **)((int)param_1 + 0x410));
  pvVar1 = *(void **)((int)param_1 + 0x410);
  iVar4 = *(int *)((int)pvVar1 + 0x5c);
  do {
    if (iVar4 == 3) {
      _Str2 = (char *)FUN_00965b90(*(void **)((int)param_1 + 0x410),0xd,(uint *)0x0);
      if (_Str2 != (char *)0x0) {
        iVar4 = __strnicmp("MV0100:ok",_Str2,9);
        if ((iVar4 == 0) || (iVar4 = __strnicmp(_Str2,"MVX300:",7), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
          _free(_Str2);
        }
        iVar4 = __strnicmp(_Str2,"MVX",3);
        if (iVar4 == 0) {
          local_4c = local_40;
          local_40[0] = 0;
          local_48 = 0;
          local_44 = 10;
          local_4 = 1;
          FUN_006c5600(_Str2,&local_4c);
          FUN_006c2f70(param_1,&local_4c);
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
        }
        else {
          FUN_00401de0(&local_4c,"<translate>ONLINE_SCREEN_ERROR</translate> ",0xffffffff);
          local_4 = 2;
          FUN_00430a20(&local_4c,_Str2);
          puVar5 = FUN_00568790(local_2c,&local_4c);
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_006c2f70(param_1,puVar5);
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
        }
                    /* WARNING: Subroutine does not return */
        _free(_Str2);
      }
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 10;
      uVar3 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_LOGOUT_FAIL</translate>");
      FUN_004036d0(&local_4c,L"<translate>ONLINE_SCREEN_LOGOUT_FAIL</translate>",uVar3);
      local_4 = 0;
      uVar3 = FUN_006c2f70(param_1,&local_4c);
      local_2c[0] = local_4c;
      local_24 = local_44;
joined_r0x006c7e72:
      if (local_24 < 0xb) {
        ExceptionList = local_c;
        return uVar3 & 0xffffff00;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    uVar2 = FUN_006c2ec0(param_1,pvVar1,&local_50);
    if ((char)uVar2 == '\0') {
      puVar5 = FUN_006c4350(local_2c,*(void **)((int)param_1 + 0x410));
      local_4 = 4;
      uVar3 = FUN_006c2f70(param_1,puVar5);
      goto joined_r0x006c7e72;
    }
    pvVar1 = *(void **)((int)param_1 + 0x410);
    iVar4 = *(int *)((int)pvVar1 + 0x5c);
  } while( true );
}


//// FUNCTION FUN_006c8150 @ 006c8150 ////

bool __thiscall FUN_006c8150(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  uint *_Str1;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 extraout_EDX;
  ulonglong uVar10;
  char local_95;
  uint *puStack_94;
  int local_90;
  undefined2 *local_8c;
  int iStack_88;
  uint uStack_84;
  undefined2 auStack_80 [10];
  char *local_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  char *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccbad9;
  pvStack_c = ExceptionList;
  iVar1 = *param_1;
  ExceptionList = &pvStack_c;
  if ((char)param_1[6] != '\0') {
    ExceptionList = &pvStack_c;
    *(undefined1 *)(param_1 + 6) = 0;
    local_95 = '\0';
    FUN_009ad040(local_6c,(wchar_t *)(iVar1 + 0x11e8));
    local_4 = 0;
    FUN_009ad040(local_2c,*(wchar_t **)(iVar1 + 0x350));
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00755190((wchar_t *)(iVar1 + 0x11e8),&local_95,(uint *)0x0);
    FUN_009683c0((void *)param_1[1],local_6c[0],local_2c[0],(int)&local_8c);
    if ((*(uint *)(*(int *)((int)this + 0x588) + 0x218) >> 4 & 1) != 0) {
      (**(code **)(**(int **)((int)this + 0x558) + 0x20))(0);
      (**(code **)(**(int **)((int)this + 0x570) + 0x20))(1);
      (**(code **)(**(int **)((int)this + 0x588) + 0x20))(0);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_4 = 0xffffffff;
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
  }
  local_4 = 0xffffffff;
  local_95 = '\0';
  uVar4 = FUN_006c2ec0(this,(void *)param_1[1],&local_90);
  this_00 = (void *)param_1[1];
  if (*(int *)((int)this_00 + 0x5c) == 3) {
    if ((char)uVar4 != '\0') {
      _Str1 = FUN_00965b90(this_00,2,(uint *)0x0);
      puStack_94 = _Str1;
      local_90 = FUN_00966120((char *)_Str1);
      if (local_90 < 1) {
        if (_Str1 == (uint *)0x0) {
          local_8c = auStack_80;
          auStack_80[0] = 0;
          iStack_88 = 0;
          uStack_84 = 10;
          uVar5 = FUN_00ace02d((wchar_t *)(iVar1 + 0x388));
          FUN_004036d0(&local_8c,(wchar_t *)(iVar1 + 0x388),uVar5);
          puVar6 = FUN_0043bdc0(local_6c,
                                L"<phrasebook><translate>ONLINE_SCREEN_ERROR_UPLOAD</translate><phrase key=title>"
                                ,&local_8c);
          FUN_0043be60(apvStack_4c,puVar6,L"</phrase></phrasebook>");
          local_4 = 2;
          if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c[0]);
          }
          if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c);
          }
          FUN_006c3f60(this,apvStack_4c);
          FUN_006c2f70(this,apvStack_4c);
          local_95 = '\x01';
          FUN_006b60b0(iVar1);
          FUN_006c1b10((int)this);
          if (uStack_44 < 0xb) goto LAB_006c82e7;
          goto LAB_006c82df;
        }
        iVar7 = __strnicmp((char *)_Str1,"MVX300:",7);
        if (iVar7 == 0) {
          puVar6 = FUN_00401de0(local_6c,(char *)((int)_Str1 + 7),0xffffffff);
          local_4 = 3;
          FUN_006c5380(this,puVar6);
          if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c[0]);
          }
          *(undefined1 *)(param_1 + 6) = 1;
        }
        else {
          iVar7 = __strnicmp((char *)_Str1,"MVX",3);
          if (iVar7 == 0) {
            local_8c = auStack_80;
            auStack_80[0] = 0;
            uStack_84 = 10;
            local_4 = 4;
            iStack_88 = iVar7;
            uVar2 = FUN_006c5600((char *)_Str1,&local_8c);
            local_90 = CONCAT31(local_90._1_3_,uVar2);
            FUN_006c3f60(this,&local_8c);
            FUN_006c2f70(this,&local_8c);
            local_95 = '\x01';
            FUN_006b60b0(iVar1);
            if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
              _free(local_8c);
            }
          }
          else {
            iVar7 = __strnicmp((char *)_Str1,"MV0021:ok",9);
            if (iVar7 == 0) {
              param_1[2] = 1;
              lVar8 = FUN_009660d0(_Str1);
              param_1[3] = lVar8;
              FUN_006c4010((int)this);
              local_95 = '\0';
              puVar6 = FUN_009ad040(local_2c,*(wchar_t **)(iVar1 + 0x350));
              local_4 = 5;
              puVar9 = FUN_009ad040(local_6c,(wchar_t *)(iVar1 + 0x11e8));
              local_4 = CONCAT31(local_4._1_3_,6);
              cVar3 = FUN_009683e0((void *)param_1[1],(char *)*puVar9,(char *)*puVar6,param_1[3]);
              if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
                _free(local_6c[0]);
              }
              local_4 = 0xffffffff;
              if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
                _free(local_2c[0]);
              }
              if (cVar3 == '\0') {
                FUN_00401de0(&local_8c,"<translate>ONLINE_SCREEN_ERROR</translate> ",0xffffffff);
                local_4 = 7;
                FUN_00430a20(&local_8c,(char *)puStack_94);
                puVar6 = FUN_00568790(local_6c,&local_8c);
                local_4._0_1_ = 8;
                FUN_006c3f60(this,puVar6);
                local_4._0_1_ = 7;
                if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
                  _free(local_6c[0]);
                }
                puVar6 = FUN_00568790(local_6c,&local_8c);
                local_4._0_1_ = 9;
                FUN_006c2f70(this,puVar6);
                local_4 = CONCAT31(local_4._1_3_,7);
                if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
                  _free(local_6c[0]);
                }
                local_95 = '\x01';
                FUN_006b60b0(iVar1);
                _Str1 = puStack_94;
                if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
                  _free(local_8c);
                }
              }
              else {
                _Str1 = puStack_94;
                if ((*(uint *)(*(int *)((int)this + 0x588) + 0x218) >> 4 & 1) != 0) {
                  FUN_006c1ae0((int)this);
                  _Str1 = puStack_94;
                }
              }
            }
            else {
              FUN_00401de0(&local_8c,"<translate>ONLINE_SCREEN_ERROR</translate> ",0xffffffff);
              local_4 = 10;
              FUN_00430a20(&local_8c,(char *)_Str1);
              puVar6 = FUN_00568790(local_6c,&local_8c);
              local_4._0_1_ = 0xb;
              FUN_006c3f60(this,puVar6);
              local_4._0_1_ = 10;
              if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
                _free(local_6c[0]);
              }
              puVar6 = FUN_00568790(local_6c,&local_8c);
              local_4._0_1_ = 0xc;
              FUN_006c2f70(this,puVar6);
              local_4 = CONCAT31(local_4._1_3_,10);
              if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
                _free(local_6c[0]);
              }
              local_95 = '\x01';
              FUN_006b60b0(iVar1);
              if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
                _free(local_8c);
              }
            }
          }
        }
      }
      else {
        uVar10 = FUN_00990ae0(0,extraout_EDX);
        param_1[4] = (int)uVar10;
        param_1[5] = local_90 * 1000;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      if (_Str1 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Str1);
      }
      goto LAB_006c82e7;
    }
  }
  else if ((char)uVar4 != '\0') goto LAB_006c82e7;
  FUN_006c4350(apvStack_4c,this_00);
  local_4 = 0xd;
  FUN_006c3f60(this,apvStack_4c);
  FUN_006c2f70(this,apvStack_4c);
  local_95 = '\x01';
  FUN_006b60b0(iVar1);
  if (10 < uStack_44) {
LAB_006c82df:
                    /* WARNING: Subroutine does not return */
    _free(apvStack_4c[0]);
  }
LAB_006c82e7:
  ExceptionList = pvStack_c;
  return local_95 == '\0';
}


//// FUNCTION FUN_006c87c0 @ 006c87c0 ////

undefined1 __thiscall FUN_006c87c0(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  undefined1 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  undefined4 extraout_EDX;
  float unaff_EBX;
  float10 fVar10;
  ulonglong uVar11;
  undefined1 uStack_d5;
  char *local_d4;
  float fStack_d0;
  char *local_cc;
  int iStack_c8;
  uint uStack_c4;
  undefined2 auStack_c0 [10];
  char *apcStack_ac [2];
  uint uStack_a4;
  char *local_8c;
  uint uStack_88;
  uint local_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  undefined2 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined2 auStack_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccbb6b;
  pvStack_c = ExceptionList;
  iVar1 = *param_1;
  ExceptionList = &pvStack_c;
  if ((char)param_1[6] != '\0') {
    ExceptionList = &pvStack_c;
    *(undefined1 *)(param_1 + 6) = 0;
    FUN_009ad040(&local_cc,(wchar_t *)(iVar1 + 0x11e8));
    local_4 = 0;
    FUN_009ad040(&local_8c,*(wchar_t **)(iVar1 + 0x350));
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_009683e0((void *)param_1[1],local_cc,local_8c,param_1[3]);
    if ((*(uint *)(*(int *)((int)this + 0x588) + 0x218) >> 4 & 1) != 0) {
      (**(code **)(**(int **)((int)this + 0x558) + 0x20))(0);
      (**(code **)(**(int **)((int)this + 0x570) + 0x20))(1);
      (**(code **)(**(int **)((int)this + 0x588) + 0x20))(0);
    }
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    local_4 = 0xffffffff;
    if (0x14 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
  }
  local_4 = 0xffffffff;
  local_d4 = (char *)0x0;
  uVar3 = FUN_006c2ec0(this,(void *)param_1[1],(int *)&local_d4);
  FUN_006c52c0(this,(int *)(iVar1 + 0x374),(int *)(iVar1 + 0x1460));
  pcVar4 = (char *)param_1[7];
  if (param_1[7] < (int)local_d4) {
    pcVar4 = local_d4;
  }
  param_1[7] = (int)pcVar4;
  local_d4 = pcVar4;
  FUN_006b6360(*param_1);
  this_00 = (void *)param_1[1];
  if ((*(int *)((int)this_00 + 0x5c) != 3) && ((char)uVar3 != '\0')) {
    ExceptionList = pvStack_c;
    return 0;
  }
  uStack_d5 = 1;
  if ((char)uVar3 == '\0') {
    FUN_006c4350(apcStack_ac,this_00);
    local_4 = 0xb;
    FUN_006c3f60(this,apcStack_ac);
    FUN_006c2f70(this,apcStack_ac);
    FUN_006b60b0(iVar1);
joined_r0x006c9121:
    local_4 = 0xffffffff;
    if (10 < uStack_a4) {
      local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      _free(apcStack_ac[0]);
    }
  }
  else {
    pcVar4 = (char *)FUN_00965b90(this_00,3,(uint *)0x0);
    local_d4 = pcVar4;
    fStack_d0 = (float)FUN_00966120(pcVar4);
    if ((int)fStack_d0 < 1) {
      if (pcVar4 == (char *)0x0) {
        local_cc = (char *)auStack_c0;
        auStack_c0[0] = 0;
        iStack_c8 = 0;
        uStack_c4 = 10;
        uVar5 = FUN_00ace02d((wchar_t *)(iVar1 + 0x388));
        FUN_004036d0(&local_cc,(wchar_t *)(iVar1 + 0x388),uVar5);
        puVar6 = FUN_0043bdc0(apcStack_ac,
                              L"<phrasebook><translate>ONLINE_SCREEN_ERROR_UPLOAD</translate><phrase key=title>"
                              ,&local_cc);
        FUN_0043be60(&local_8c,puVar6,L"</phrase></phrasebook>");
        local_4 = 2;
        if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
          _free(apcStack_ac[0]);
        }
        if (10 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_cc);
        }
        FUN_006c3f60(this,&local_8c);
        FUN_006c2f70(this,&local_8c);
        FUN_006b60b0(iVar1);
        FUN_006c1b10((int)this);
        apcStack_ac[0] = local_8c;
        uStack_a4 = local_84;
        goto joined_r0x006c9121;
      }
      iVar7 = __strnicmp(pcVar4,"MVX300:",7);
      if (iVar7 == 0) {
        puVar6 = FUN_00401de0(apcStack_ac,pcVar4 + 7,0xffffffff);
        local_4 = 3;
        FUN_006c5380(this,puVar6);
        local_4 = 0xffffffff;
        if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
          _free(apcStack_ac[0]);
        }
        *(undefined1 *)(param_1 + 6) = 1;
        uStack_d5 = 0;
      }
      else {
        iVar7 = __strnicmp(pcVar4,"MVX",3);
        if (iVar7 == 0) {
          local_cc = (char *)auStack_c0;
          auStack_c0[0] = 0;
          uStack_c4 = 10;
          local_4 = 4;
          iStack_c8 = iVar7;
          uVar2 = FUN_006c5600(local_d4,&local_cc);
          fStack_d0 = (float)CONCAT31(fStack_d0._1_3_,uVar2);
          FUN_006c3f60(this,&local_cc);
          FUN_006c2f70(this,&local_cc);
          FUN_006b60b0(iVar1);
          local_8c = local_cc;
          if (10 < uStack_c4) {
LAB_006c90ae:
            local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
            _free(local_8c);
          }
        }
        else {
          iVar7 = __strnicmp(pcVar4,"MV0032:done",9);
          if (iVar7 == 0) {
            FUN_006b60b0(iVar1);
            FUN_00401de0(&local_8c,pcVar4,0xffffffff);
            local_4 = 5;
            iVar7 = FUN_004307c0(&local_8c,"|",0xffffffff);
            if (0 < iVar7) {
              puVar6 = FUN_00430770(&local_8c,apcStack_ac,iVar7 + 1,uStack_88);
              FUN_00401e30(&PTR_DAT_00e57ae0,puVar6);
              if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
                _free(apcStack_ac[0]);
              }
            }
            local_cc = (char *)auStack_c0;
            auStack_c0[0] = 0;
            iStack_c8 = 0;
            uStack_c4 = 10;
            local_4._0_1_ = 6;
            FUN_0043bcf0(&local_cc,
                         L"<phrasebook><translate>ONLINE_SCREEN_SUCCEED_UPLOAD</translate>");
            puVar6 = FUN_00421240(apvStack_6c,(wchar_t *)(iVar1 + 0x388),0xffffffff);
            puVar6 = FUN_0043bdc0(apvStack_4c,L"<phrase key=title>",puVar6);
            puVar6 = FUN_0043be60(apcStack_ac,puVar6,L"</phrase>");
            FUN_0043bd20(&local_cc,puVar6);
            if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
              _free(apcStack_ac[0]);
            }
            if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_4c[0]);
            }
            if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_6c[0]);
            }
            puVar6 = FUN_00568790(apcStack_ac,&PTR_DAT_00e57ae0);
            puVar6 = FUN_0043bdc0(apvStack_4c,L"<phrase key=url>",puVar6);
            puVar6 = FUN_0043be60(apvStack_6c,puVar6,L"</phrase></phrasebook>");
            FUN_0043bd20(&local_cc,puVar6);
            if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_6c[0]);
            }
            if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_4c[0]);
            }
            if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
              _free(apcStack_ac[0]);
            }
            FUN_006c3f60(this,&local_cc);
            puStack_2c = auStack_20;
            auStack_20[0] = 0;
            uStack_28 = 0;
            uStack_24 = 10;
            local_4 = CONCAT31(local_4._1_3_,7);
            FUN_0043bcf0(&puStack_2c,
                         L"<phrasebook><translate>ONLINE_SCREEN_SUCCEED_QUERY_UPLOAD</translate>");
            puVar6 = FUN_00421240(apcStack_ac,(wchar_t *)(iVar1 + 0x388),0xffffffff);
            puVar6 = FUN_0043bdc0(apvStack_4c,L"<phrase key=title>",puVar6);
            puVar6 = FUN_0043be60(apvStack_6c,puVar6,L"</phrase>");
            FUN_0043bd20(&puStack_2c,puVar6);
            if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_6c[0]);
            }
            if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_4c[0]);
            }
            if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
              _free(apcStack_ac[0]);
            }
            puVar6 = FUN_00568790(apcStack_ac,&PTR_DAT_00e57ae0);
            puVar6 = FUN_0043bdc0(apvStack_4c,L"<phrase key=url>",puVar6);
            puVar6 = FUN_0043be60(apvStack_6c,puVar6,L"</phrase></phrasebook>");
            FUN_0043bd20(&puStack_2c,puVar6);
            if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_6c[0]);
            }
            if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_4c[0]);
            }
            if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
              _free(apcStack_ac[0]);
            }
            pfVar8 = FUN_00726520();
            piVar9 = (int *)FUN_0071b2b0();
            fVar10 = (float10)(**(code **)(*piVar9 + 0x10))();
            fStack_d0 = (float)fVar10;
            piVar9 = (int *)FUN_0071b2b0();
            fVar10 = (float10)(**(code **)(*piVar9 + 0x14))();
            (**(code **)((int)*pfVar8 + 100))
                      (1,this,(float)(fVar10 * (float10)0.5 - (float10)DAT_00e5850c * (float10)0.5))
            ;
            (**(code **)((int)*pfVar8 + 0x5c))(1,this,unaff_EBX * 0.5 - DAT_00e58508 * 0.5);
            (**(code **)(*(int *)pfVar8[0xd1] + 0x18))(0,FUN_0071b530,pfVar8,"ONLINE_CLOSE");
            (**(code **)(*(int *)pfVar8[0xd1] + 0x18))(5,&LAB_005f37f0,0,"ONLINE_CLOSE");
            (**(code **)(*(int *)pfVar8[0xd2] + 0x18))(0,&LAB_006c3e30,pfVar8,"ONLINE_CLOSE");
            (**(code **)(*(int *)pfVar8[0xd2] + 0x18))(5,&LAB_005f37f0,0,"ONLINE_CLOSE");
            (**(code **)(*(int *)this + 0xac))(pfVar8);
            (**(code **)(*(int *)this + 0xc))(pfVar8,1);
            if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
              _free(puStack_2c);
            }
            if (10 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
              _free(local_cc);
            }
          }
          else {
            FUN_00401de0(&local_8c,"<translate>ONLINE_SCREEN_ERROR</translate> ",0xffffffff);
            local_4 = 8;
            FUN_00430a20(&local_8c,pcVar4);
            puVar6 = FUN_00568790(apvStack_6c,&local_8c);
            local_4._0_1_ = 9;
            FUN_006c3f60(this,puVar6);
            local_4._0_1_ = 8;
            if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_6c[0]);
            }
            puVar6 = FUN_00568790(apvStack_6c,&local_8c);
            local_4._0_1_ = 10;
            FUN_006c2f70(this,puVar6);
            local_4 = CONCAT31(local_4._1_3_,8);
            if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_6c[0]);
            }
            FUN_006b60b0(iVar1);
          }
          if (0x14 < local_84) goto LAB_006c90ae;
        }
        local_4 = 0xffffffff;
        pcVar4 = local_d4;
      }
    }
    else {
      uVar11 = FUN_00990ae0(0,extraout_EDX);
      param_1[4] = (int)uVar11;
      param_1[5] = (int)fStack_d0 * 1000;
      *(undefined1 *)(param_1 + 6) = 1;
      uStack_d5 = 0;
    }
    if (pcVar4 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar4);
    }
  }
  FUN_006c3ed0((int)this);
  ExceptionList = pvStack_c;
  return uStack_d5;
}


//// FUNCTION FUN_006c9160 @ 006c9160 ////

void __fastcall FUN_006c9160(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
LAB_006c9170:
  do {
    if (*(int *)((int)param_1 + 0x5f4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x5f8) - *(int *)((int)param_1 + 0x5f4) >> 2;
    }
    if (iVar1 <= iVar3) {
      return;
    }
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x5f4) + iVar3 * 4);
    iVar2 = FUN_006c52c0(param_1,(int *)(iVar1 + 0x374),(int *)(iVar1 + 0x1460));
    if (*(char *)(iVar1 + 0x141c) == '\0') {
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 0x350);
        if ((*(int *)(iVar2 + 0x44) <= *(int *)(iVar2 + 0x14)) &&
           ((*(int *)(iVar2 + 0x44) < *(int *)(iVar2 + 0x14) ||
            (*(uint *)(iVar2 + 0x40) <= *(uint *)(iVar2 + 0x10))))) {
          (**(code **)(**(int **)(iVar1 + 0x1410) + 0xc0))(0);
          iVar3 = iVar3 + 1;
          goto LAB_006c9170;
        }
      }
      (**(code **)(**(int **)(iVar1 + 0x1410) + 0xc0))(1);
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


//// FUNCTION FUN_006c9210 @ 006c9210 ////

void __fastcall FUN_006c9210(void *param_1,undefined4 param_2)

{
  char cVar1;
  char *this;
  undefined1 uVar2;
  undefined4 uVar3;
  char *_Str1;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 extraout_EDX;
  int *piVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  char *local_fc;
  undefined4 uStack_f8;
  int local_f4;
  int local_f0;
  undefined2 *puStack_ec;
  int iStack_e8;
  uint uStack_e4;
  undefined2 auStack_e0 [10];
  undefined2 *puStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined2 auStack_c0 [10];
  undefined1 *puStack_ac;
  int iStack_a8;
  uint uStack_a4;
  undefined1 auStack_a0 [20];
  undefined2 *apuStack_8c [2];
  uint uStack_84;
  undefined2 *apuStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ccbbcf;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0x628) != 0) {
    ExceptionList = &local_c;
    uVar9 = FUN_00990ae0(param_1,param_2);
    local_f4 = (int)uVar9;
    piVar8 = (int *)**(int **)((int)param_1 + 0x624);
    if (piVar8 != *(int **)((int)param_1 + 0x624)) {
      do {
        local_f0 = piVar8[2];
        this = (char *)piVar8[3];
        if ((uint)(local_f4 - piVar8[4]) < (uint)piVar8[5]) {
          piVar8 = (int *)*piVar8;
        }
        else {
          piVar8[5] = 0;
          if (*(char *)(piVar8 + 6) != '\0') {
            *(undefined1 *)(piVar8 + 6) = 0;
            FUN_00966a50(this,**(undefined4 **)(local_f0 + 0x350),
                         *(undefined4 **)(local_f0 + 0x350) + 7);
            if ((*(uint *)(*(int *)((int)param_1 + 0x588) + 0x218) >> 4 & 1) != 0) {
              (**(code **)(**(int **)((int)param_1 + 0x558) + 0x20))(0);
              (**(code **)(**(int **)((int)param_1 + 0x570) + 0x20))(1);
              (**(code **)(**(int **)((int)param_1 + 0x588) + 0x20))(0);
            }
          }
          uVar3 = FUN_006c2ec0(param_1,this,(int *)&local_fc);
          if (*(int *)(this + 0x5c) == 3) {
            if ((char)uVar3 == '\0') goto LAB_006c960d;
            _Str1 = (char *)FUN_00965b90(this,8,(uint *)0x0);
            local_fc = (char *)FUN_00966120(_Str1);
            if ((int)local_fc < 1) {
              if (_Str1 == (char *)0x0) {
                puStack_cc = auStack_c0;
                auStack_c0[0] = 0;
                uStack_c8 = 0;
                uStack_c4 = 10;
                uVar4 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_ERROR_DELETE</translate>");
                FUN_004036d0(&puStack_cc,L"<translate>ONLINE_SCREEN_ERROR_DELETE</translate>",uVar4)
                ;
                uStack_4 = 0;
                FUN_006c3f60(param_1,&puStack_cc);
                FUN_006c2f70(param_1,&puStack_cc);
                (**(code **)(**(int **)((int)param_1 + 0x558) + 0x20))(0);
                (**(code **)(**(int **)((int)param_1 + 0x570) + 0x20))(0);
                (**(code **)(**(int **)((int)param_1 + 0x588) + 0x20))(1);
                puVar10 = puStack_cc;
                uVar4 = uStack_c4;
                goto joined_r0x006c93e2;
              }
              iVar5 = __strnicmp(_Str1,"MVX300:",7);
              if (iVar5 == 0) {
                puStack_ac = auStack_a0;
                auStack_a0[0] = 0;
                local_fc = _Str1 + 8;
                uStack_a4 = 0x14;
                pcVar6 = _Str1 + 7;
                do {
                  cVar1 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 != '\0');
                iStack_a8 = iVar5;
                FUN_004015d0(&puStack_ac,_Str1 + 7,(int)pcVar6 - (int)local_fc);
                uStack_4 = 1;
                FUN_006c5380(param_1,&puStack_ac);
                uStack_4 = 0xffffffff;
                if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
                  _free(puStack_ac);
                }
                *(undefined1 *)(piVar8 + 6) = 1;
              }
              else {
                iVar5 = __strnicmp(_Str1,"MVX",3);
                if (iVar5 == 0) {
                  puStack_ec = auStack_e0;
                  auStack_e0[0] = 0;
                  uStack_e4 = 10;
                  uStack_4 = 2;
                  iStack_e8 = iVar5;
                  uVar2 = FUN_006c5600(_Str1,&puStack_ec);
                  uStack_f8 = CONCAT31(uStack_f8._1_3_,uVar2);
                  FUN_006c3f60(param_1,&puStack_ec);
                  FUN_006c2f70(param_1,&puStack_ec);
                  uStack_4 = 0xffffffff;
                  puVar10 = puStack_ec;
                  if (10 < uStack_e4) {
LAB_006c95f9:
                    uStack_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
                    _free(puVar10);
                  }
                }
                else {
                  iVar5 = __strnicmp(_Str1,"MV0060",6);
                  if (iVar5 != 0) {
                    FUN_00401de0(apuStack_8c,"<translate>ONLINE_SCREEN_ERROR</translate> ",
                                 0xffffffff);
                    uStack_4 = 3;
                    FUN_00430a20(apuStack_8c,_Str1);
                    puVar7 = FUN_00568790(apvStack_4c,apuStack_8c);
                    uStack_4._0_1_ = 4;
                    FUN_006c3f60(param_1,puVar7);
                    uStack_4._0_1_ = 3;
                    if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
                      _free(apvStack_4c[0]);
                    }
                    puVar7 = FUN_00568790(apvStack_2c,apuStack_8c);
                    uStack_4 = CONCAT31(uStack_4._1_3_,5);
                    FUN_006c2f70(param_1,puVar7);
                    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
                      _free(apvStack_2c[0]);
                    }
                    uStack_4 = 0xffffffff;
                    puVar10 = apuStack_8c[0];
                    if (0x14 < uStack_84) goto LAB_006c95f9;
                  }
                }
              }
            }
            else {
              uVar9 = FUN_00990ae0(0,extraout_EDX);
              piVar8[4] = (int)uVar9;
              piVar8[5] = (int)local_fc * 1000;
              *(undefined1 *)(piVar8 + 6) = 1;
            }
            if (_Str1 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free(_Str1);
            }
          }
          else {
            if ((char)uVar3 != '\0') {
              piVar8 = (int *)*piVar8;
              goto LAB_006c96eb;
            }
LAB_006c960d:
            FUN_006c4350(apuStack_6c,this);
            uStack_4 = 6;
            FUN_006c3f60(param_1,apuStack_6c);
            FUN_006c2f70(param_1,apuStack_6c);
            puVar10 = apuStack_6c[0];
            uVar4 = uStack_64;
joined_r0x006c93e2:
            uStack_4 = 0xffffffff;
            if (10 < uVar4) {
              uStack_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
              _free(puVar10);
            }
          }
          if (*(char *)(piVar8 + 6) == '\0') {
            uStack_4 = 7;
            local_fc = this;
            FUN_009667c0((int)this);
            uStack_4 = 0xffffffff;
            FUN_00963c90((int)this);
                    /* WARNING: Subroutine does not return */
            _free(this);
          }
        }
LAB_006c96eb:
      } while (piVar8 != *(undefined4 **)((int)param_1 + 0x624));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006c9710 @ 006c9710 ////

int __fastcall FUN_006c9710(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006c4780();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_006c9730 @ 006c9730 ////

void __fastcall FUN_006c9730(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_006c9760 @ 006c9760 ////

int __fastcall FUN_006c9760(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006c47c0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_006c9780 @ 006c9780 ////

int __fastcall FUN_006c9780(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006c4800();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_006c97a0 @ 006c97a0 ////

void __cdecl FUN_006c97a0(void *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (void *)0x0) {
      FUN_006c2290(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x6c);
  }
  return;
}


//// FUNCTION FUN_006c97d0 @ 006c97d0 ////

void __cdecl FUN_006c97d0(void *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (void *)0x0) {
      FUN_006c2330(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x44);
  }
  return;
}


//// FUNCTION FUN_006c9800 @ 006c9800 ////

void __cdecl FUN_006c9800(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  void *pvVar2;
  uint *puVar3;
  
  if (param_2 != 0) {
    puVar3 = param_1 + 3;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        puVar3[-2] = (uint)(puVar3 + 1);
        *(undefined2 *)(puVar3 + 1) = 0;
        puVar3[-1] = 0;
        *puVar3 = 10;
        _Count = param_3[2];
        _Source = (wchar_t *)param_3[1];
        if (9 < _Count) {
          uVar1 = _Count + 0x20 & 0xffffffe0;
          *puVar3 = uVar1;
          pvVar2 = _malloc(uVar1 * 2);
          puVar3[-2] = (uint)pvVar2;
        }
        _wcsncpy((wchar_t *)puVar3[-2],_Source,_Count);
        puVar3[-1] = _Count;
        *(undefined2 *)(puVar3[-2] + _Count * 2) = 0;
      }
      param_1 = param_1 + 9;
      puVar3 = puVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_006c98a0 @ 006c98a0 ////

void __cdecl FUN_006c98a0(int *param_1,int param_2,undefined4 *param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  void *pvVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (int *)0x0) {
      *param_1 = (int)(param_1 + 3);
      *(undefined2 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 10;
      _Count = param_3[1];
      _Source = (wchar_t *)*param_3;
      if (9 < _Count) {
        uVar1 = _Count + 0x20 >> 5;
        param_1[2] = uVar1 << 5;
        pvVar2 = _malloc(uVar1 * 0x40);
        *param_1 = (int)pvVar2;
      }
      _wcsncpy((wchar_t *)*param_1,_Source,_Count);
      param_1[1] = _Count;
      *(undefined2 *)(*param_1 + _Count * 2) = 0;
      param_1[8] = param_3[8];
      param_1[9] = param_3[9];
      param_1[10] = param_3[10];
      param_1[0xb] = param_3[0xb];
    }
    param_1 = param_1 + 0xc;
  }
  return;
}


//// FUNCTION FUN_006c9c90 @ 006c9c90 ////

undefined4 * __fastcall FUN_006c9c90(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccbbe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d3f1c4;
  param_1[0x14] = &PTR_FUN_00d3f1a8;
  uVar1 = FUN_006c4780();
  param_1[0xd2] = uVar1;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_006c9d00 @ 006c9d00 ////

undefined4 * __thiscall FUN_006c9d00(void *this,byte param_1)

{
  FUN_006c5fd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006c9d20 @ 006c9d20 ////

void __fastcall FUN_006c9d20(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 extraout_EDX;
  int iVar5;
  undefined4 *puVar6;
  byte bVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ccbe0e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d3fd1c;
  param_1[0x14] = &PTR_FUN_00d3fd00;
  bVar7 = 1;
  iVar5 = 0;
  local_4 = 0x21;
  puVar6 = param_1;
  pvVar3 = (void *)FUN_004f3b20();
  FUN_004f9b70(pvVar3,iVar5,(int)puVar6,bVar7);
  if (DAT_0104dafc != 0) {
    FUN_0068fb00(DAT_0104dafc);
  }
  iVar5 = 0;
  while( true ) {
    if (param_1[0x17d] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(param_1[0x17e] - param_1[0x17d]) >> 2;
    }
    if (iVar4 <= iVar5) break;
    puVar6 = *(undefined4 **)(param_1[0x17d] + iVar5 * 4);
    if (puVar6 != (undefined4 *)0x0) {
      piVar1 = puVar6 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(1);
      }
      *(undefined4 *)(param_1[0x17d] + iVar5 * 4) = 0;
    }
    iVar5 = iVar5 + 1;
  }
  iVar5 = 0;
  while( true ) {
    if (param_1[0x182] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(param_1[0x183] - param_1[0x182]) >> 2;
    }
    if (iVar4 <= iVar5) break;
    puVar6 = *(undefined4 **)(param_1[0x182] + iVar5 * 4);
    if (puVar6 != (undefined4 *)0x0) {
      piVar1 = puVar6 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(1);
      }
      *(undefined4 *)(param_1[0x182] + iVar5 * 4) = 0;
    }
    iVar5 = iVar5 + 1;
  }
  puVar6 = (undefined4 *)param_1[0x186];
  puVar2 = (undefined4 *)*puVar6;
  for (; puVar2 != puVar6; puVar2 = (undefined4 *)*puVar2) {
    pvVar3 = (void *)puVar2[3];
    if (pvVar3 != (void *)0x0) {
      local_4._0_1_ = 0x22;
      FUN_009667c0((int)pvVar3);
      local_4 = CONCAT31(local_4._1_3_,0x21);
      FUN_00963c90((int)pvVar3);
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
    puVar2[3] = 0;
  }
  puVar6 = (undefined4 *)param_1[0x186];
  pvVar3 = (void *)*puVar6;
  *puVar6 = puVar6;
  *(undefined4 *)(param_1[0x186] + 4) = param_1[0x186];
  param_1[0x187] = 0;
  if (pvVar3 != (void *)param_1[0x186]) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  puVar6 = (undefined4 *)param_1[0x189];
  for (puVar2 = (undefined4 *)*puVar6; puVar2 != puVar6; puVar2 = (undefined4 *)*puVar2) {
    pvVar3 = (void *)puVar2[3];
    if (pvVar3 != (void *)0x0) {
      local_4._0_1_ = 0x23;
      FUN_009667c0((int)pvVar3);
      local_4 = CONCAT31(local_4._1_3_,0x21);
      FUN_00963c90((int)pvVar3);
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
    puVar2[3] = 0;
  }
  puVar6 = (undefined4 *)param_1[0x189];
  pvVar3 = (void *)*puVar6;
  *puVar6 = puVar6;
  *(undefined4 *)(param_1[0x189] + 4) = param_1[0x189];
  param_1[0x18a] = 0;
  if (pvVar3 != (void *)param_1[0x189]) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  pvVar3 = (void *)param_1[0x104];
  if (pvVar3 != (void *)0x0) {
    local_4._0_1_ = 0x24;
    FUN_009667c0((int)pvVar3);
    local_4 = CONCAT31(local_4._1_3_,0x21);
    FUN_00963c90((int)pvVar3);
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  pvVar3 = (void *)param_1[0x105];
  param_1[0x104] = 0;
  if (pvVar3 != (void *)0x0) {
    local_4._0_1_ = 0x25;
    FUN_009667c0((int)pvVar3);
    local_4 = CONCAT31(local_4._1_3_,0x21);
    FUN_00963c90((int)pvVar3);
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  pvVar3 = (void *)param_1[0x106];
  param_1[0x105] = 0;
  if (pvVar3 != (void *)0x0) {
    local_4._0_1_ = 0x26;
    FUN_009667c0((int)pvVar3);
    local_4 = CONCAT31(local_4._1_3_,0x21);
    FUN_00963c90((int)pvVar3);
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  pvVar3 = (void *)param_1[0x107];
  param_1[0x106] = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)param_1[0x108];
    param_1[0x107] = 0;
    if (pvVar3 != (void *)0x0) {
      local_4._0_1_ = 0x28;
      FUN_009667c0((int)pvVar3);
      local_4 = CONCAT31(local_4._1_3_,0x21);
      FUN_00963c90((int)pvVar3);
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
    puVar6 = (undefined4 *)param_1[0x1c3];
    param_1[0x108] = 0;
    if (puVar6 != (undefined4 *)0x0) {
      piVar1 = puVar6 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(1);
      }
      param_1[0x1c3] = 0;
    }
    puVar6 = (undefined4 *)param_1[0x120];
    if (puVar6 != (undefined4 *)0x0) {
      piVar1 = puVar6 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(1);
      }
      (**(code **)(param_1[0x11b] + 4))();
      param_1[0x120] = 0;
      (**(code **)param_1[0x11b])();
    }
    FUN_009a1560(0);
    FUN_004237f0(DAT_00f87b04);
    FUN_0071bd00();
    FUN_005e98d0(DAT_0104d82c,extraout_EDX);
    if (0x14 < (uint)param_1[0x1bc]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x1ba]);
    }
    if (0x14 < (uint)param_1[0x1b4]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x1b2]);
    }
    if ((uint)param_1[0x1a8] < 0x15) {
      if ((void *)param_1[399] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)param_1[399]);
      }
      param_1[399] = 0;
      param_1[400] = 0;
      param_1[0x191] = 0;
      puVar6 = (undefined4 *)param_1[0x189];
      pvVar3 = (void *)*puVar6;
      *puVar6 = puVar6;
      *(undefined4 *)(param_1[0x189] + 4) = param_1[0x189];
      param_1[0x18a] = 0;
      if (pvVar3 == (void *)param_1[0x189]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)param_1[0x189]);
      }
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1a6]);
  }
  local_4._0_1_ = 0x27;
  FUN_009667c0((int)pvVar3);
  local_4 = CONCAT31(local_4._1_3_,0x21);
  FUN_00963c90((int)pvVar3);
                    /* WARNING: Subroutine does not return */
  _free(pvVar3);
}


//// FUNCTION FUN_006caaf0 @ 006caaf0 ////

void FUN_006caaf0(undefined4 param_1,void *param_2)

{
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [20];
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccbe30;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  FUN_004015d0(&local_2c,*(char **)((int)param_2 + 8),*(uint *)((int)param_2 + 0xc));
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  FUN_004015d0(&local_4c,*(char **)((int)param_2 + 0x28),*(uint *)((int)param_2 + 0x2c));
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < *(uint *)((int)param_2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_2 + 0x28));
  }
  if (0x14 < *(uint *)((int)param_2 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_2 + 8));
  }
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}


//// FUNCTION FUN_006cac00 @ 006cac00 ////

/* WARNING: Removing unreachable block (ram,0x006cad3b) */
/* WARNING: Removing unreachable block (ram,0x006cae05) */

uint FUN_006cac00(undefined4 param_1,undefined4 *param_2)

{
  void *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *unaff_EBP;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte abStack_c0 [8];
  undefined4 uStack_b8;
  uint uStack_94;
  char *pcStack_74;
  uint local_70;
  uint uStack_6c;
  char *pcStack_54;
  uint uStack_50;
  uint uStack_4c;
  void *pvStack_30;
  uint uStack_28;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ccbe79;
  pvStack_c = ExceptionList;
  local_70 = param_2[1];
  this = (void *)*param_2;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)(**(code **)(*(int *)param_2[2] + 0x58))();
  puStack_8 = (undefined1 *)0x0;
  FUN_00568870(&uStack_50,puVar1);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  puVar1 = (undefined4 *)(**(code **)(*(int *)param_2[3] + 0x58))();
  pvStack_c._0_1_ = 3;
  uStack_b8 = 0x6cac98;
  FUN_00568870(&pcStack_74,puVar1);
  pvStack_c._0_1_ = 5;
  if (10 < uStack_94) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
  pbVar3 = abStack_c0;
  abStack_c0[0] = 0;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff34,pcStack_54,uStack_50);
  uVar2 = FUN_006c3050(pbVar3,uVar4,uVar5);
  if ((char)uVar2 == '\0') {
    uVar4 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_INVALID_USERNAME</translate>");
    uStack_b8 = 0x6cad20;
    FUN_004036d0(&stack0xffffff64,L"<translate>ONLINE_SCREEN_INVALID_USERNAME</translate>",uVar4);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,6);
    uStack_b8 = 0x6cad35;
    FUN_006c2f70(this,&stack0xffffff64);
    if (0x14 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_74);
    }
    if (0x14 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_54);
    }
  }
  else {
    pbVar3 = abStack_c0;
    abStack_c0[0] = 0;
    uVar4 = 0;
    uVar5 = 0x14;
    FUN_004015d0(&stack0xffffff34,pcStack_74,local_70);
    uVar2 = FUN_006c3050(pbVar3,uVar4,uVar5);
    if ((char)uVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    uVar4 = FUN_00ace02d(L"<translate>ONLINE_SCREEN_INVALID_PASSWORD</translate>");
    uStack_b8 = 0x6cadea;
    FUN_004036d0(&stack0xffffff64,L"<translate>ONLINE_SCREEN_INVALID_PASSWORD</translate>",uVar4);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,7);
    uStack_b8 = 0x6cadff;
    FUN_006c2f70(this,&stack0xffffff64);
    if (0x14 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_74);
    }
    if (0x14 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_54);
    }
  }
  ExceptionList = pvStack_14;
  return uStack_6c & 0xffffff00;
}


//// FUNCTION FUN_006caec0 @ 006caec0 ////

undefined4 FUN_006caec0(undefined4 param_1,void *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_006c7db0(param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_006c19b0(param_2);
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_006caee0 @ 006caee0 ////

void __fastcall FUN_006caee0(int param_1)

{
  void *this;
  uint uVar1;
  int *piVar2;
  bool bVar3;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccbecd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x420);
  bVar3 = this == (void *)0x0;
  if (bVar3) {
    piVar2 = (int *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 10;
    uVar1 = FUN_00ace02d(L"<translate>ONLINE_TOOLTIP_CLOSE</translate>");
    FUN_004036d0(&local_2c,L"<translate>ONLINE_TOOLTIP_CLOSE</translate>",uVar1);
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"button_tick.",0xc);
    local_48 = 0xc;
    local_4c[0xc] = '\0';
    local_4 = 2;
    piVar2 = FUN_0069fb10(this,(int *)&local_4c,&local_2c,0x42800000,0x42800000,0,0,0x3f800000,
                          0x3f800000);
  }
  if ((!bVar3) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4 = 0xffffffff;
  if ((!bVar3) && (10 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  (**(code **)(*piVar2 + 0x18))();
  (**(code **)(*piVar2 + 0x18))(5,&LAB_005f37f0,0,"ONLINE_CLOSE");
  (**(code **)(*piVar2 + 0x60))(2,*(undefined4 *)(param_1 + 0x468),0x41200000);
  (**(code **)(*piVar2 + 0x68))(2,*(undefined4 *)(param_1 + 0x468),0x41200000);
  (**(code **)(**(int **)(param_1 + 0x468) + 0xc))(piVar2,1);
  ExceptionList = local_4c;
  return;
}


//// FUNCTION FUN_006cb090 @ 006cb090 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006cb090(void *this,uint *param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  bool bVar8;
  float10 fVar9;
  undefined4 *puStack_130;
  char *_Dest;
  uint uVar10;
  void *pvVar11;
  undefined4 *puStack_ec;
  uint *puStack_e4;
  uint *puVar12;
  int *piStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint *puStack_d0;
  int *piStack_cc;
  float fStack_c8;
  uint *puStack_c4;
  undefined1 *puStack_a0;
  uint *puStack_9c;
  wchar_t *local_4c;
  uint local_48;
  undefined4 local_44;
  wchar_t local_40 [12];
  undefined1 uStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ccbf78;
  pvStack_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_00ace02d(L"<o2><nobr><translate>ONLINE_SCREEN_ONLINE_MOVIES</translate></nobr></o2>");
  puStack_9c = (uint *)0x6cb0fa;
  FUN_004036d0(&local_4c,L"<o2><nobr><translate>ONLINE_SCREEN_ONLINE_MOVIES</translate></nobr></o2>"
               ,uVar3);
  puStack_c4 = (uint *)0x6cb13f;
  FUN_004036d0(&stack0xffffff48,local_4c,local_48);
  piVar4 = FUN_00833680();
  (**(code **)(*piVar4 + 0x84))();
  puStack_9c = param_1;
  puStack_a0 = (undefined1 *)0x1;
  (**(code **)(*piVar4 + 0x5c))();
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*param_1 + 0xc))();
  fVar9 = (float10)(**(code **)(*piVar4 + 0x14))();
  puStack_a0 = (undefined1 *)(float)(fVar9 + (float10)(float)puStack_a0);
  puVar5 = operator_new(0x3fc);
  uStack_28 = 1;
  if (puVar5 == (undefined4 *)0x0) {
    puStack_9c = (undefined4 *)0x0;
  }
  else {
    puStack_9c = FUN_00833290(puVar5);
  }
  uStack_28 = 0;
  (**(code **)(*(int *)((int)this + 0x4e4) + 4))();
  *(uint **)((int)this + 0x4f8) = puStack_9c;
  (*(code *)**(undefined4 **)((int)this + 0x4e4))();
  (**(code **)(**(int **)((int)this + 0x4f8) + 0x54))();
  (**(code **)(**(int **)((int)this + 0x4f8) + 0x84))();
  puStack_c4 = param_1;
  fStack_c8 = 1.4013e-45;
  piStack_cc = (int *)0x6cb20d;
  (**(code **)(**(int **)((int)this + 0x4f8) + 0x5c))();
  puStack_d0 = param_1;
  uStack_d4 = 1;
  uStack_d8 = 0x6cb220;
  piStack_cc = piVar4;
  (**(code **)(**(int **)((int)this + 0x4f8) + 100))();
  uStack_d8 = 1;
  (**(code **)(*param_1 + 0xc))();
  fVar9 = (float10)(**(code **)(**(int **)((int)this + 0x4f8) + 0x14))();
  fStack_c8 = (float)(fVar9 + (float10)fStack_c8);
  puStack_e4 = (uint *)0x6cb24d;
  puVar6 = operator_new(0x344);
  if (puVar6 == (undefined4 *)0x0) {
    puStack_c4 = (undefined4 *)0x0;
  }
  else {
    puStack_c4 = FUN_007432f0(puVar6);
  }
  (**(code **)(*(int *)((int)this + 0x4fc) + 4))();
  *(uint **)((int)this + 0x510) = puStack_c4;
  (*(code *)**(undefined4 **)((int)this + 0x4fc))();
  puVar12 = (uint *)0x0;
  puStack_e4 = param_1;
  (**(code **)(**(int **)((int)this + 0x510) + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x510) + 100))();
  piStack_dc = *(int **)((int)this + 0x510);
  iVar1 = *piStack_dc;
  (**(code **)(*param_1 + 0x14))();
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(iVar1 + 0x74))();
  (**(code **)(*param_1 + 0xc))();
  (**(code **)(**(int **)((int)this + 0x510) + 0x14))();
  pvVar7 = operator_new(0x420);
  if (pvVar7 == (void *)0x0) {
    puStack_ec = (undefined4 *)0x0;
  }
  else {
    puStack_a0 = &stack0xffffff6c;
    puStack_9c = (undefined4 *)0x0;
    puVar5 = (undefined4 *)&lpType_0000000a;
    uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_a0,(wchar_t *)&lpCaption_00d16918,uVar3);
    puVar12 = &uStack_d4;
    uStack_d4 = uStack_d4 & 0xffffff00;
    uStack_d8 = 0x14;
    _strncpy((char *)puVar12,"button_up.",10);
    piStack_dc = (int *)&lpType_0000000a;
    *(char *)((int)puVar12 + 10) = '\0';
    puStack_ec = FUN_0069fb10(pvVar7,(int *)&stack0xffffff20,&puStack_a0,0x42800000,0x42800000,0,0,
                              0x3f800000,0x3f800000);
  }
  (**(code **)(*(int *)((int)this + 0x514) + 4))();
  *(undefined4 **)((int)this + 0x528) = puStack_ec;
  (*(code *)**(undefined4 **)((int)this + 0x514))();
  if ((pvVar7 != (void *)0x0) && (0x14 < uStack_d8)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar12);
  }
  if (&lpType_0000000a < puVar5) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_a0);
  }
  pvVar11 = (void *)0x2;
  (**(code **)(**(int **)((int)this + 0x528) + 0x60))();
  iVar1 = **(int **)((int)this + 0x528);
  (**(code **)(*param_1 + 0x14))();
  uVar10 = 1;
  (**(code **)(iVar1 + 100))();
  _Dest = this;
  (**(code **)(**(int **)((int)this + 0x528) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x528) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x528) + 0xc0))();
  uVar3 = *(uint *)((int)this + 0x528);
  (**(code **)(*param_1 + 0xc))();
  pvVar7 = operator_new(0x420);
  bVar8 = pvVar7 == (void *)0x0;
  if (bVar8) {
    puStack_130 = (undefined4 *)0x0;
  }
  else {
    puStack_e4 = &uStack_d8;
    uStack_d8 = uStack_d8 & 0xffff0000;
    piStack_dc = (int *)&lpType_0000000a;
    uVar10 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_e4,(wchar_t *)&lpCaption_00d16918,uVar10);
    _Dest = &stack0xfffffee8;
    uVar10 = 0x14;
    _strncpy(_Dest,"button_down.",0xc);
    _Dest[0xc] = '\0';
    puStack_130 = FUN_0069fb10(pvVar7,(int *)&stack0xfffffedc,&puStack_e4,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  (**(code **)(*(int *)((int)this + 0x52c) + 4))();
  *(undefined4 **)((int)this + 0x540) = puStack_130;
  (*(code *)**(undefined4 **)((int)this + 0x52c))();
  if ((!bVar8) && (0x14 < uVar10)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  if ((!bVar8) && (&lpType_0000000a < piStack_dc)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_e4);
  }
  puVar12 = param_1;
  (**(code **)(**(int **)((int)this + 0x540) + 0x60))();
  piVar4 = *(int **)((int)this + 0x540);
  iVar1 = *piVar4;
  (**(code **)(*param_1 + 0x14))();
  (**(code **)(*piVar4 + 0x14))();
  (**(code **)(iVar1 + 100))(1,param_1);
  (**(code **)(**(int **)((int)this + 0x540) + 0x18))
            (0,&LAB_006c9c20,this,"BUILDBUTTONITEM_LISTDOWN");
  (**(code **)(**(int **)((int)this + 0x540) + 0x18))(5,&LAB_005f37f0,0,"BUILDBUTTONITEM_LISTDOWN");
  (**(code **)(**(int **)((int)this + 0x540) + 0xc0))(0);
  (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)this + 0x540),1);
  (**(code **)(**(int **)((int)this + 0x450) + 0xc))(param_1,1);
  fVar9 = (float10)(**(code **)(**(int **)((int)this + 0x510) + 0x10))();
  fVar2 = (float)((fVar9 - (float10)10.0) - (float10)64.0);
  fVar9 = (float10)(**(code **)(**(int **)((int)this + 0x510) + 0x14))();
  _DAT_0104dcb0 = fVar2;
  _DAT_0104dcb4 = (float)(fVar9 * (float10)0.16666667);
  if (uVar3 < 0xb) {
    ExceptionList = pvVar11;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puVar12);
}


//// FUNCTION FUN_006cb750 @ 006cb750 ////

void __fastcall FUN_006cb750(void *param_1,undefined4 param_2)

{
  void *_Memory;
  char cVar1;
  bool bVar2;
  uint uVar3;
  void *extraout_ECX;
  void *pvVar4;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int *_Memory_00;
  int *piVar5;
  ulonglong uVar6;
  
  if ((*(int *)((int)param_1 + 0x61c) != 0) &&
     (_Memory_00 = (int *)**(int **)((int)param_1 + 0x618), pvVar4 = param_1,
     _Memory_00 != *(int **)((int)param_1 + 0x618))) {
    do {
      piVar5 = _Memory_00 + 2;
      uVar6 = FUN_00990ae0(pvVar4,param_2);
      uVar3 = (int)uVar6 - _Memory_00[6];
      if (uVar3 < (uint)_Memory_00[7]) {
        FUN_006b6260((void *)*piVar5,(_Memory_00[7] - uVar3) / 1000);
        pvVar4 = extraout_ECX;
        param_2 = extraout_EDX;
LAB_006cb798:
        piVar5 = (int *)*_Memory_00;
      }
      else {
        FUN_006b5da0(*piVar5);
        _Memory_00[7] = 0;
        if (_Memory_00[4] != 0) {
          pvVar4 = extraout_ECX_00;
          param_2 = extraout_EDX_00;
          if ((_Memory_00[4] == 1) &&
             (cVar1 = FUN_006c87c0(param_1,piVar5), pvVar4 = extraout_ECX_01,
             param_2 = extraout_EDX_01, cVar1 != '\0')) goto LAB_006cb7da;
          goto LAB_006cb798;
        }
        bVar2 = FUN_006c8150(param_1,piVar5);
        pvVar4 = extraout_ECX_02;
        param_2 = extraout_EDX_02;
        if (bVar2) goto LAB_006cb798;
LAB_006cb7da:
        _Memory = (void *)_Memory_00[3];
        if (_Memory != (void *)0x0) {
          FUN_006c16e0((int)_Memory);
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        _Memory_00[3] = 0;
        piVar5 = (int *)*_Memory_00;
        if (_Memory_00 != *(int **)((int)param_1 + 0x618)) {
          *(int **)_Memory_00[1] = piVar5;
          *(int *)(*_Memory_00 + 4) = _Memory_00[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory_00);
        }
      }
      _Memory_00 = piVar5;
    } while (piVar5 != *(int **)((int)param_1 + 0x618));
  }
  return;
}


//// FUNCTION FUN_006cba30 @ 006cba30 ////

undefined4 * __thiscall FUN_006cba30(void *this,byte param_1)

{
  FUN_006c9d20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006cba50 @ 006cba50 ////

/* WARNING: Removing unreachable block (ram,0x006cc5bf) */
/* WARNING: Removing unreachable block (ram,0x006cbe7a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006cba50(int *param_1)

{
  void *_Memory;
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  void *pvVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  size_t sVar8;
  int *piVar9;
  int *piVar10;
  undefined1 *this;
  uint uVar11;
  char *unaff_EDI;
  float10 fVar12;
  char *pcVar13;
  uint uStack_248;
  uint *puStack_20c;
  undefined4 *puStack_208;
  undefined1 *puStack_204;
  uint uStack_200;
  undefined1 *puStack_1fc;
  int ***pppiStack_1f8;
  int iStack_1f4;
  uint uStack_1f0;
  int **ppiStack_1ec;
  float fVar14;
  int *piStack_1e0;
  undefined4 uStack_1dc;
  void **ppvStack_1cc;
  uint *puStack_1c8;
  undefined4 *puStack_1c4;
  void *pvStack_1c0;
  uint *puStack_1bc;
  int *piStack_174;
  wchar_t *pwVar15;
  uint uVar16;
  void *pvStack_14c;
  int *local_11c [2];
  uint uStack_114;
  undefined2 *puStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined2 auStack_f0 [10];
  undefined2 *puStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined2 auStack_d0 [10];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined4 uStack_a8;
  undefined2 auStack_a4 [10];
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [4];
  undefined1 uStack_80;
  undefined1 uStack_74;
  undefined4 auStack_70 [7];
  undefined1 uStack_54;
  undefined4 auStack_50 [10];
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ccc0fc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_11c[0] = param_1;
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0x10))();
  piVar2 = (int *)FUN_0071b2b0();
  fVar12 = (float10)(**(code **)(*piVar2 + 0x14))();
  if ((DAT_0104dc74 & 1) == 0) {
    DAT_0104dc74 = DAT_0104dc74 | 1;
    DAT_0104dc70 = (void *)(float)(fVar12 * (float10)0.75);
    DAT_0104dc6c = 500.0;
  }
  puVar3 = operator_new(0x344);
  uStack_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = FUN_007432f0(puVar3);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*puVar4 + 0x78))();
  _Memory = DAT_0104dc70;
  (**(code **)(*puVar4 + 0x7c))();
  uVar16 = *puVar4;
  (**(code **)(*param_1 + 0x14))();
  (**(code **)(uVar16 + 100))();
  uVar16 = *puVar4;
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(uVar16 + 0x5c))();
  pvVar5 = operator_new(0x288);
  uStack_24 = 1;
  if (pvVar5 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
    piStack_174 = param_1;
  }
  else {
    uVar16 = 0x20;
    unaff_EDI = _malloc(0x20);
    _strncpy(unaff_EDI,"ui/buildmenu_window.dds",0x17);
    unaff_EDI[0x17] = '\0';
    uStack_24 = CONCAT31(uStack_24._1_3_,2);
    piStack_174 = (int *)0x1;
    puVar3 = FUN_005e8fd0(pvVar5,(undefined4 *)&stack0xfffffe9c);
  }
  uStack_24 = 0xffffffff;
  if ((((uint)piStack_174 & 1) != 0) && (0x14 < uVar16)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  puVar3[0x9c] = 0x41400000;
  puVar3[0x9d] = 0x41400000;
  puVar3[0x9b] = 0x42000000;
  puVar3[0x9e] = 0x41c00000;
  puVar3[0x9f] = 0x41c00000;
  (**(code **)(*puVar4 + 0xa0))();
  puStack_b0 = (undefined4 *)auStack_a4;
  auStack_a4[0] = 0;
  puStack_ac = (undefined4 *)0x0;
  uStack_a8 = 10;
  uStack_28 = 4;
  ppuVar6 = FUN_009b4260();
  puStack_90 = auStack_84;
  auStack_84[0] = 0;
  uStack_8c = 0;
  uStack_88 = 0x14;
  FUN_004015d0(&puStack_90,*ppuVar6,(uint)ppuVar6[1]);
  uStack_28._0_1_ = 5;
  FUN_009acf60(auStack_70,&puStack_90);
  puStack_dc = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0;
  uStack_d4 = 10;
  uStack_bc = 0;
  uStack_b8 = 0;
  puVar3 = FUN_0043bdc0(local_11c,L"data\\text\\",auStack_70);
  FUN_0043be60(auStack_50,puVar3,L"\\otc.txt");
  if (10 < uStack_114) {
                    /* WARNING: Subroutine does not return */
    _free(local_11c[0]);
  }
  puStack_fc = auStack_f0;
  auStack_f0[0] = 0;
  uStack_f8 = 0;
  uStack_f4 = 10;
  uVar16 = FUN_00ace02d(L"<o4>");
  FUN_004036d0(&puStack_fc,L"<o4>",uVar16);
  uStack_28._0_1_ = 9;
  uVar7 = FUN_00553b70(&puStack_dc,auStack_50,"rt");
  if ((char)uVar7 == '\x01') {
    pwVar15 = (wchar_t *)&stack0xfffffea4;
    unaff_EDI = (char *)0x0;
    uStack_28 = CONCAT31(uStack_28._1_3_,10);
    FUN_00553cf0(&puStack_dc,&stack0xfffffe98);
    uVar16 = FUN_00553cf0(&puStack_dc,&stack0xfffffe98);
    cVar1 = (char)uVar16;
    while (cVar1 != '\0') {
      FUN_0040cae0(&puStack_fc,pwVar15,0);
      sVar8 = FUN_00ace02d(L"<br>");
      FUN_0040cae0(&puStack_fc,L"<br>",sVar8);
      uVar16 = FUN_00553cf0(&puStack_dc,&stack0xfffffe98);
      cVar1 = (char)uVar16;
    }
    FUN_00553aa0((int)&puStack_dc);
    uStack_28._0_1_ = 9;
  }
  sVar8 = FUN_00ace02d(L"</o4>");
  FUN_0040cae0(&puStack_fc,L"</o4>",sVar8);
  sVar8 = FUN_00ace02d(
                      L"<P ALIGN\t= CENTER><o2><nobr><translate>ONLINE_SCREEN_TERMS_AND_CONDITIONS</translate></nobr></o2></P>"
                      );
  FUN_0040cae0(&puStack_b0,
               L"<P ALIGN\t= CENTER><o2><nobr><translate>ONLINE_SCREEN_TERMS_AND_CONDITIONS</translate></nobr></o2></P>"
               ,sVar8);
  puVar3 = operator_new(0x3fc);
  uStack_28._0_1_ = 0xb;
  if (puVar3 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00833290(puVar3);
  }
  uStack_28 = CONCAT31(uStack_28._1_3_,9);
  (**(code **)(*piVar2 + 0x78))();
  piVar2[0xd5] = (int)DAT_0104dc6c;
  *(undefined1 *)(piVar2 + 0xd6) = 1;
  (**(code **)(*piVar2 + 0x54))();
  (**(code **)(*piVar2 + 0x8c))();
  (**(code **)(*piVar2 + 100))();
  uVar16 = 0;
  (**(code **)(*piVar2 + 0x5c))();
  (**(code **)(*puVar4 + 0xc))();
  (**(code **)(*piVar2 + 0x14))();
  puStack_1bc = (uint *)0x6cbf77;
  puVar3 = operator_new(0x358);
  uStack_54 = 0xc;
  if (puVar3 == (undefined4 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = FUN_0071eda0(puVar3);
  }
  piVar9[0xd1] = piVar9[0xd1] & 0xfffffff8U | 8;
  pvStack_1c0 = (void *)0x1;
  uStack_54 = 9;
  puStack_1c4 = (undefined4 *)0x6cbfc0;
  puStack_1bc = puVar4;
  (**(code **)(*piVar9 + 100))();
  puStack_1c4 = (undefined4 *)0x0;
  ppvStack_1cc = (void **)0x1;
  puStack_1c8 = puVar4;
  (**(code **)(*piVar9 + 0x5c))();
  piVar2 = (int *)(((float)DAT_0104dc70 - (float)piVar2) - 64.0);
  (**(code **)(*piVar9 + 0x74))();
  uStack_1dc = 0x6cbff7;
  pvStack_1c0 = operator_new(0x290);
  uStack_74 = 0xd;
  if (pvStack_1c0 != (void *)0x0) {
    uStack_1dc = 0x6cc012;
    FUN_005e4290(pvStack_1c0,'\0');
  }
  uStack_74 = 9;
  uStack_1dc = 0x6cc029;
  (**(code **)(*piVar9 + 0xa0))();
  uStack_1dc = 1;
  piStack_1e0 = piVar9;
  (**(code **)(*puVar4 + 0xc))();
  fVar12 = (float10)(**(code **)(*piVar9 + 0x14))();
  puStack_1c8 = (uint *)(float)(fVar12 + (float10)(float)puStack_1c8);
  ppvStack_1cc = operator_new(0x3c0);
  uStack_80 = 0xe;
  if (ppvStack_1cc == (void **)0x0) {
    puStack_1c4 = (undefined4 *)0x0;
  }
  else {
    ppiStack_1ec = (int **)0x6cc06a;
    puStack_1c4 = FUN_006b4f50(ppvStack_1cc,1,1);
  }
  uStack_80 = 9;
  ppvStack_1cc = operator_new(0x3fc);
  uStack_80 = 0xf;
  if (ppvStack_1cc == (void **)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = FUN_00833290(ppvStack_1cc);
  }
  ppvStack_1cc = (void **)*piVar10;
  uStack_80 = 9;
  fVar12 = (float10)(**(code **)(*(int *)piVar9[0xd2] + 0x10))();
  fVar14 = (float)(fVar12 - (float10)20.0);
  (*ppvStack_1cc[0x1e])();
  fVar12 = (float10)(**(code **)(*(int *)piVar9[0xd2] + 0x10))();
  piVar10[0xd5] = (int)(float)(fVar12 - (float10)20.0);
  *(undefined1 *)(piVar10 + 0xd6) = 1;
  ppiStack_1ec = (int **)0x6cc106;
  (**(code **)(*piVar10 + 0x54))();
  ppiStack_1ec = (int **)((float)(int)uVar16 * 60.0);
  uStack_1f0 = 0x6cc11c;
  (**(code **)(*piVar10 + 0x7c))();
  iStack_1f4 = piVar9[0xd2];
  uStack_1f0 = 0;
  pppiStack_1f8 = (int ***)0x1;
  puStack_1fc = (undefined1 *)0x6cc132;
  (**(code **)(*piVar2 + 100))();
  uStack_200 = piVar9[0xd2];
  puStack_1fc = (undefined1 *)0x0;
  puStack_204 = (undefined1 *)0x1;
  puStack_208 = (undefined4 *)0x6cc144;
  (**(code **)(*piVar2 + 0x5c))();
  puStack_208 = puStack_1c4;
  puStack_20c = (uint *)0x6cc154;
  (**(code **)(*piVar2 + 0xfc))();
  puStack_20c = (uint *)0x1;
  (**(code **)(*piVar9 + 0xc))();
  (**(code **)(*piVar2 + 0x8c))();
  (**(code **)(*(int *)piVar9[0xd2] + 0x8c))();
  if ((DAT_0104dc74 & 2) == 0) {
    _DAT_0104dc68 = DAT_0104dc6c * 0.3;
    DAT_0104dc74 = DAT_0104dc74 | 2;
  }
  puVar3 = operator_new(0x48);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[2] = puVar3 + 5;
    *(undefined1 *)(puVar3 + 5) = 0;
    puVar3[3] = 0;
    puVar3[4] = 0x14;
    puVar3[10] = puVar3 + 0xd;
    *(undefined1 *)(puVar3 + 0xd) = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0x14;
  }
  FUN_004015d0(puVar3 + 2,(char *)*puStack_b0,puStack_b0[1]);
  FUN_004015d0(puVar3 + 10,(char *)*puStack_ac,puStack_ac[1]);
  *puVar3 = piVar2;
  puVar3[1] = puVar4;
  this = operator_new(0x420);
  puStack_204 = this;
  if (this == (undefined1 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    ppvStack_1cc = &pvStack_1c0;
    pvStack_1c0 = (void *)((uint)pvStack_1c0 & 0xffff0000);
    puStack_1c8 = (uint *)0x0;
    puStack_1c4 = (undefined4 *)&lpType_0000000a;
    uVar11 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&ppvStack_1cc,(wchar_t *)&lpCaption_00d16918,uVar11);
    pppiStack_1f8 = &ppiStack_1ec;
    puStack_208 = (undefined4 *)((uint)puStack_208 | 2);
    ppiStack_1ec = (int **)((uint)ppiStack_1ec & 0xffffff00);
    iStack_1f4 = 0;
    uStack_1f0 = 0x14;
    _strncpy((char *)pppiStack_1f8,"button_quit.",0xc);
    iStack_1f4 = 0xc;
    *(char *)(pppiStack_1f8 + 3) = '\0';
    puStack_208 = (undefined4 *)((uint)puStack_208 | 4);
    puStack_1fc = &stack0xfffffdd8;
    uStack_b8 = 0x12;
    piVar9 = FUN_0069fb10(this,(int *)&pppiStack_1f8,&ppvStack_1cc,0x42800000,0x42800000,0,0,
                          0x3f800000,0x3f800000);
  }
  if ((((uint)puStack_208 & 4) != 0) &&
     (puStack_208 = (undefined4 *)((uint)puStack_208 & 0xfffffffb), 0x14 < uStack_1f0)) {
                    /* WARNING: Subroutine does not return */
    _free(pppiStack_1f8);
  }
  uStack_b8 = 9;
  if ((((uint)puStack_208 & 2) != 0) &&
     (puStack_208 = (undefined4 *)((uint)puStack_208 & 0xfffffffd), &lpType_0000000a < puStack_1c4))
  {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_1cc);
  }
  (**(code **)(*piVar9 + 0x18))();
  uStack_248 = 0;
  (**(code **)(*piVar9 + 0x18))();
  (**(code **)(*piVar9 + 0x5c))();
  (**(code **)(*piVar9 + 100))();
  (**(code **)(*puVar4 + 0xc))();
  pvVar5 = operator_new(0x420);
  if (pvVar5 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    ppiStack_1ec = &piStack_1e0;
    piStack_1e0 = (int *)((uint)piStack_1e0 & 0xffff0000);
    fVar14 = 1.4013e-44;
    uVar11 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&ppiStack_1ec,(wchar_t *)&lpCaption_00d16918,uVar11);
    puStack_20c = &uStack_200;
    uStack_200 = uStack_200 & 0xffffff00;
    puStack_208 = (undefined4 *)0x0;
    puStack_204 = &DAT_00000014;
    _strncpy((char *)puStack_20c,"button_tick.",0xc);
    puStack_208 = (undefined4 *)0xc;
    *(char *)(puStack_20c + 3) = '\0';
    uStack_248 = uStack_248 | 0x18;
    uStack_f8 = 0x17;
    piVar9 = FUN_0069fb10(pvVar5,(int *)&puStack_20c,&ppiStack_1ec,0x42800000,0x42800000,0,0,
                          0x3f800000,0x3f800000);
  }
  if (((uStack_248 & 0x10) != 0) &&
     (uStack_248 = uStack_248 & 0xffffffef, &DAT_00000014 < puStack_204)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_20c);
  }
  uStack_f8 = 9;
  if (((uStack_248 & 8) != 0) && (10 < (uint)fVar14)) {
                    /* WARNING: Subroutine does not return */
    _free(ppiStack_1ec);
  }
  (**(code **)(*piVar9 + 0x18))();
  pcVar13 = "ONLINE_OK";
  (**(code **)(*piVar9 + 0x18))(5,&LAB_005f37f0,0,"ONLINE_OK");
  (**(code **)(*piVar9 + 0x5c))(1,puVar4,(_DAT_0104dc68 + DAT_0104dc6c) * 0.5 - 32.0);
  (**(code **)(*piVar9 + 100))(1,puVar4,pcVar13);
  (**(code **)(*puVar4 + 0xc))(piVar9,1);
  (**(code **)(iRam00000001 + 0xac))(puVar4);
  (**(code **)(iRam00000001 + 0xc))(puVar4,1);
  if (&lpType_0000000a < piVar2) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x0);
  }
  if (unaff_EDI <= &lpType_0000000a) {
    FUN_00553b00(&pppiStack_1f8);
    if (0x14 < uVar16) {
                    /* WARNING: Subroutine does not return */
      _free((void *)0x1);
    }
    if (puStack_1c4 <= &lpType_0000000a) {
      ExceptionList = pvStack_14c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_1cc);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_006cc620 @ 006cc620 ////

void * FUN_006cc620(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_006c97a0(param_1,param_2,param_3);
  return (void *)(param_2 * 0x6c + (int)param_1);
}


//// FUNCTION FUN_006cc650 @ 006cc650 ////

void * FUN_006cc650(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_006c97d0(param_1,param_2,param_3);
  return (void *)(param_2 * 0x44 + (int)param_1);
}


//// FUNCTION FUN_006cc680 @ 006cc680 ////

undefined4 * FUN_006cc680(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_006c9800(param_1,param_2,param_3);
  return param_1 + param_2 * 9;
}


//// FUNCTION FUN_006cc6b0 @ 006cc6b0 ////

int * FUN_006cc6b0(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_006c98a0(param_1,param_2,param_3);
  return param_1 + param_2 * 0xc;
}


//// FUNCTION FUN_006cc6e0 @ 006cc6e0 ////

void FUN_006cc6e0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x6c) {
    FUN_006c1b40(param_1);
  }
  return;
}


//// FUNCTION FUN_006cc710 @ 006cc710 ////

void FUN_006cc710(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x44) {
    FUN_006c1b80(param_1);
  }
  return;
}


//// FUNCTION FUN_006cc740 @ 006cc740 ////

void FUN_006cc740(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    FUN_006c1bb0(param_1);
  }
  return;
}


//// FUNCTION FUN_006cc770 @ 006cc770 ////

void FUN_006cc770(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ccc118;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_006cc7e0 @ 006cc7e0 ////

void FUN_006cc7e0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    FUN_006c1aa0(param_1);
  }
  return;
}


