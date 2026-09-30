//// FUNCTION FUN_00667a00 @ 00667a00 ////

void __fastcall FUN_00667a00(int *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  void *this;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [2];
  undefined4 *puStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3e78;
  pvStack_c = ExceptionList;
  bVar4 = false;
  bVar3 = false;
  ExceptionList = &pvStack_c;
  this = operator_new(0x420);
  if (this == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 10;
    uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar5);
    pcVar2 = (char *)param_1[0xdb];
    local_4c = local_40;
    local_48 = 0;
    local_40[0] = 0;
    local_44 = 0x14;
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_4c,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
    local_50 = &stack0xffffff88;
    bVar4 = true;
    bVar3 = true;
    local_4 = 2;
    puVar7 = FUN_0069fb10(this,(int *)&local_4c,&local_2c,0x42000000,0x42000000,0,0,0x3f800000,
                          0x3f800000);
  }
  param_1[0xd1] = (int)puVar7;
  if ((bVar3) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4 = 0xffffffff;
  if ((bVar4) && (10 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  (**(code **)(*(int *)param_1[0xd1] + 100))();
  (**(code **)(*(int *)param_1[0xd1] + 0x5c))(1,param_1);
  (**(code **)(*param_1 + 0xc))(param_1[0xd1],1);
  param_1[0xd2] = param_1[0xd2] | 1;
  FUN_006678d0(param_1,0);
  puVar7 = puStack_1c;
  if (puStack_1c[1] != 0) {
    puStack_1c = operator_new(0x3fc);
    local_24 = 5;
    if (puStack_1c == (undefined4 *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = FUN_00833290(puStack_1c);
    }
    local_24 = 0xffffffff;
    piVar8[0xd5] = 0x43800000;
    (**(code **)(*piVar8 + 0x54))(puVar7);
    (**(code **)(*piVar8 + 0x5c))(2,param_1[0xd1],0xc0000000);
    (**(code **)(*piVar8 + 100))(1,param_1,0);
    (**(code **)(*param_1 + 0xc))(piVar8,2);
    (**(code **)(*piVar8 + 0x84))(0);
  }
  (**(code **)(*param_1 + 0x84))(0);
  (**(code **)(*(int *)param_1[0xd1] + 0x18))(0,&LAB_00667980,param_1,"CHECKBOX_INITIALISE");
  (**(code **)(*(int *)param_1[0xd1] + 0x18))(5,&LAB_005f37f0,0,"CHECKBOX_INITIALISE");
  ExceptionList = local_50;
  return;
}


//// FUNCTION FUN_00667c80 @ 00667c80 ////

int * __thiscall FUN_00667c80(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3ec2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d34d84;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d34d68;
  *(undefined4 *)((int)this + 0x34c) = (undefined1 *)((int)this + 0x358);
  *(undefined1 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0x14;
  *(undefined4 *)((int)this + 0x36c) = (undefined1 *)((int)this + 0x378);
  *(undefined1 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x374) = 0x14;
  *(undefined4 *)((int)this + 0x38c) = (undefined1 *)((int)this + 0x398);
  *(undefined1 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0x14;
  local_4 = 3;
  FUN_004015d0((undefined4 *)((int)this + 0x34c),(char *)*param_2,param_2[1]);
  FUN_004015d0((undefined4 *)((int)this + 0x36c),(char *)*param_3,param_3[1]);
  FUN_004015d0((undefined4 *)((int)this + 0x38c),(char *)*param_3,param_3[1]);
  FUN_00667a00(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00667d50 @ 00667d50 ////

undefined4 * __thiscall FUN_00667d50(void *this,byte param_1)

{
  FUN_00667d70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00667d70 @ 00667d70 ////

void __fastcall FUN_00667d70(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0xe5]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe3]);
  }
  if (0x14 < (uint)param_1[0xdd]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xdb]);
  }
  if (0x14 < (uint)param_1[0xd5]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd3]);
  }
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_00667dd0 @ 00667dd0 ////

int * __fastcall FUN_00667dd0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3f02;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  *param_1 = (int)&PTR_FUN_00d34d84;
  param_1[0x14] = (int)&PTR_FUN_00d34d68;
  param_1[0xd3] = (int)(param_1 + 0xd6);
  *(undefined1 *)(param_1 + 0xd6) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0x14;
  param_1[0xdb] = (int)(param_1 + 0xde);
  *(undefined1 *)(param_1 + 0xde) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0x14;
  param_1[0xe3] = (int)(param_1 + 0xe6);
  *(undefined1 *)(param_1 + 0xe6) = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0x14;
  local_4 = 3;
  FUN_004015d0(param_1 + 0xd3,"button_tick",0xb);
  FUN_004015d0(param_1 + 0xdb,"button_blank",0xc);
  FUN_00667a00(param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00667eb0 @ 00667eb0 ////

int * __thiscall FUN_00667eb0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00667f40 @ 00667f40 ////

void __thiscall FUN_00667f40(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d34ea0;
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


//// FUNCTION FUN_00667f90 @ 00667f90 ////

void __fastcall FUN_00667f90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d34ea0;
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


//// FUNCTION FUN_00667fe0 @ 00667fe0 ////

void __fastcall FUN_00667fe0(undefined4 *param_1)

{
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
  param_1[0xdc] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xde] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xde] = param_1[0xdd];
  }
  if (param_1[0xdd] != 0) {
    *(undefined4 *)(param_1[0xdd] + 4) = param_1[0xde];
  }
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xe1] = 0;
  if ((undefined4 *)param_1[0xde] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xde] = param_1[0xdd];
  }
  if (param_1[0xdd] != 0) {
    *(undefined4 *)(param_1[0xdd] + 4) = param_1[0xde];
  }
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xd6] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xd8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd8] = param_1[0xd7];
  }
  if (param_1[0xd7] != 0) {
    *(undefined4 *)(param_1[0xd7] + 4) = param_1[0xd8];
  }
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xdb] = 0;
  if ((undefined4 *)param_1[0xd8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd8] = param_1[0xd7];
  }
  if (param_1[0xd7] != 0) {
    *(undefined4 *)(param_1[0xd7] + 4) = param_1[0xd8];
  }
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_00668140 @ 00668140 ////

void __fastcall FUN_00668140(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  size_t sVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint auStack_120 [2];
  undefined2 *local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined2 local_10c [6];
  void *pvStack_100;
  undefined1 auStack_fc [4];
  uint uStack_f8;
  void *apvStack_e0 [2];
  uint local_d8 [6];
  char acStack_c0 [32];
  wchar_t awStack_a0 [62];
  void *pvStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00cc3f31;
  pvStack_14 = ExceptionList;
  local_118 = local_10c;
  local_10c[0] = 0;
  local_114 = 0;
  local_110 = 10;
  local_c = 0;
  ExceptionList = &pvStack_14;
  puVar1 = (undefined4 *)(**(code **)(*(int *)param_1[0xf0] + 0x5c))(local_d8);
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
  puVar2 = (undefined4 *)(**(code **)(*(int *)param_1[0xf6] + 0x5c))(auStack_fc);
  sVar3 = FUN_00ace02d(L"<TABLE><TR><TD WIDTH = 350>Opinion of ");
  FUN_0040cae0(auStack_120,L"<TABLE><TR><TD WIDTH = 350>Opinion of ",sVar3);
  FUN_0040cae0(auStack_120,(wchar_t *)*puVar2,puVar2[1]);
  sVar3 = FUN_00ace02d(L" by ");
  FUN_0040cae0(auStack_120,L" by ",sVar3);
  FUN_0040cae0(auStack_120,(wchar_t *)*puVar1,puVar1[1]);
  sVar3 = FUN_00ace02d(L"</TD></TR></TABLE>");
  FUN_0040cae0(auStack_120,L"</TD></TR></TABLE>",sVar3);
  if (10 < uStack_f8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_100);
  }
  pvStack_14 = (void *)((uint)pvStack_14 & 0xffffff00);
  if (10 < local_d8[0]) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_e0[0]);
  }
  iVar5 = param_1[0xf6];
  pvVar4 = (void *)FUN_005873c0(param_1[0xf0]);
  iVar5 = FUN_0042e770(pvVar4,iVar5);
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + 0xdc);
    if (iVar6 != iVar5 + 0xe8) {
      do {
        pvVar4 = *(void **)(iVar6 + 8);
        _sprintf(acStack_c0,"%.6f",(double)*(float *)((int)pvVar4 + 0x88));
        puVar1 = FUN_005686a0(&pvStack_100,acStack_c0);
        pvStack_14._0_1_ = 2;
        puVar2 = FUN_0042b800(pvVar4,apvStack_e0);
        sVar3 = FUN_00ace02d(L"<TABLE><TR><TD WIDTH = 350>");
        FUN_0040cae0(auStack_120,L"<TABLE><TR><TD WIDTH = 350>",sVar3);
        FUN_0040cae0(auStack_120,(wchar_t *)*puVar2,puVar2[1]);
        sVar3 = FUN_00ace02d(L"</TD><TD>");
        FUN_0040cae0(auStack_120,L"</TD><TD>",sVar3);
        FUN_0040cae0(auStack_120,(wchar_t *)*puVar1,puVar1[1]);
        sVar3 = FUN_00ace02d(L"</TD></TR></TABLE>");
        FUN_0040cae0(auStack_120,L"</TD></TR></TABLE>",sVar3);
        if (10 < local_d8[0]) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_e0[0]);
        }
        pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
        if (10 < uStack_f8) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_100);
        }
        iVar6 = *(int *)(iVar6 + 4);
      } while (iVar6 != iVar5 + 0xe8);
    }
    sVar3 = FUN_00ace02d(L"<TABLE><TR><TD WIDTH = 350>FIRST IMPRESSION(FIXED):");
    FUN_0040cae0(auStack_120,L"<TABLE><TR><TD WIDTH = 350>FIRST IMPRESSION(FIXED):",sVar3);
    sVar3 = _swprintf(awStack_a0,0xd18f84,SUB84((double)*(float *)(iVar5 + 0x9c),0));
    FUN_0040cae0(auStack_120,awStack_a0,sVar3);
    sVar3 = FUN_00ace02d(L"</TD></TR></TABLE>");
    FUN_0040cae0(auStack_120,L"</TD></TR></TABLE>",sVar3);
    sVar3 = FUN_00ace02d(L"<TABLE><TR><TD WIDTH = 350>REGULAR:");
    FUN_0040cae0(auStack_120,L"<TABLE><TR><TD WIDTH = 350>REGULAR:",sVar3);
    sVar3 = _swprintf(awStack_a0,0xd18f84,SUB84((double)*(float *)(iVar5 + 0xa0),0));
    FUN_0040cae0(auStack_120,awStack_a0,sVar3);
    sVar3 = FUN_00ace02d(L"</TD></TR></TABLE>");
    FUN_0040cae0(auStack_120,L"</TD></TR></TABLE>",sVar3);
  }
  (**(code **)(*(int *)param_1[0xea] + 0x54))();
  (**(code **)(*param_1 + 0x8c))(0);
  if (auStack_120[0] < 0xb) {
    ExceptionList = pvStack_24;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(&stack0xfffffffc);
}


//// FUNCTION FUN_006684e0 @ 006684e0 ////

void __fastcall FUN_006684e0(int *param_1)

{
  FUN_00668140(param_1);
  (**(code **)(*(int *)param_1[0xea] + 0x84))(0);
  (**(code **)(*param_1 + 0x84))(0);
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_00668510 @ 00668510 ////

undefined4 * __thiscall FUN_00668510(void *this,int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  size_t sVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  void *local_50;
  undefined2 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 auStack_40 [4];
  void *pvStack_38;
  void *pvStack_30;
  undefined1 auStack_2c [4];
  uint uStack_28;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined4 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (undefined4 *)&LAB_00cc3f5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_50 = this;
  FUN_006889c0(this,'\x01');
  *(undefined ***)this = &PTR_FUN_00d3508c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d35074;
  local_4 = 0;
  (*(code *)DAT_0104d9f8[1])();
  DAT_0104da0c = this;
  (*(code *)*DAT_0104d9f8)();
  uVar1 = FUN_005873c0((int)param_1);
  *(undefined4 *)((int)this + 0x3b0) = uVar1;
  puStack_4c = auStack_40;
  auStack_40[0] = 0;
  uStack_48 = 0;
  uStack_44 = 10;
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x5c))(auStack_2c);
  sVar3 = FUN_00ace02d(L"<NOBR>");
  FUN_0040cae0(&local_50,L"<NOBR>",sVar3);
  FUN_0040cae0(&local_50,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  sVar3 = FUN_00ace02d(L" (Chemistry)</NOBR>");
  FUN_0040cae0(&local_50,L" (Chemistry)</NOBR>",sVar3);
  FUN_006888d0(this,&local_50);
  uVar1 = 0x41000000;
  iVar4 = FUN_0071b2a0();
  FUN_00741940(this,1,iVar4,uVar1);
  uVar1 = 0x41000000;
  iVar4 = FUN_0071b2a0();
  FUN_00741b60(this,1,iVar4,uVar1);
  piVar5 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar5 + 0xc))(this,1);
  puStack_8 = operator_new(0x3fc);
  uStack_10 = 2;
  if (puStack_8 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00833290(puStack_8);
  }
  uVar6 = *(uint *)((int)this + 0x36c);
  *(int **)((int)this + 0x3ac) = piVar5;
  uStack_10 = 1;
  (**(code **)(*piVar5 + 0x5c))(1,uVar6,0);
  (**(code **)(**(int **)((int)this + 0x3ac) + 100))(1,*(undefined4 *)((int)this + 0x36c));
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))(*(undefined4 *)((int)this + 0x3ac),1);
  FUN_006884f0(this,0.0);
  *(int **)((int)this + 0x3a8) = param_1;
  if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x0);
  }
  ExceptionList = pvStack_38;
  return this;
}


//// FUNCTION FUN_00668710 @ 00668710 ////

void __fastcall FUN_00668710(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc3f78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d3508c;
  param_1[0x14] = &PTR_FUN_00d35074;
  local_4 = 0;
  (*(code *)DAT_0104d9f8[1])();
  DAT_0104da0c = 0;
  (*(code *)*DAT_0104d9f8)();
  local_4 = 0xffffffff;
  FUN_00667fe0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00668790 @ 00668790 ////

void __thiscall FUN_00668790(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = DAT_0104da0c;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3f9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0104da0c != (undefined4 *)0x0) {
    iVar1 = DAT_0104da0c[0x12];
    ExceptionList = &pvStack_c;
    DAT_0104da0c[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1,this);
    }
    (*(code *)DAT_0104d9f8[1])();
    DAT_0104da0c = (undefined4 *)0x0;
    (*(code *)*DAT_0104d9f8)();
  }
  this_00 = operator_new(0x3b4);
  uStack_4 = 0;
  if (this_00 != (void *)0x0) {
    FUN_00668510(this_00,param_1);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00668820 @ 00668820 ////

int * __thiscall FUN_00668820(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  size_t sVar4;
  int iVar5;
  int *piVar6;
  void *_Memory;
  uint uVar7;
  undefined4 uVar8;
  void *pvStack_54;
  undefined1 auStack_50 [4];
  uint uStack_4c;
  void *pvStack_3c;
  void *pvStack_34;
  uint local_2c [6];
  undefined1 uStack_14;
  undefined4 *puStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3fef;
  puStack_c = ExceptionList;
  ExceptionList = &puStack_c;
  FUN_006889c0(this,'\x01');
  piVar6 = (int *)((int)this + 0x3ac);
  *(undefined ***)this = &PTR_FUN_00d351ac;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d35194;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(int **)((int)this + 0x3b8) = piVar6;
  *piVar6 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  piVar1 = (int *)((int)this + 0x3c4);
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(int **)((int)this + 0x3d0) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  (**(code **)(*piVar6 + 4))();
  *(int *)((int)this + 0x3c0) = param_1;
  (**(code **)*piVar6)();
  (**(code **)(*piVar1 + 4))();
  *(int *)((int)this + 0x3d8) = param_2;
  (**(code **)*piVar1)();
  local_4 = CONCAT31(local_4._1_3_,3);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x3d8) + 0x5c))(local_2c);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
  puVar3 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x3c0) + 0x5c))(auStack_50);
  sVar4 = FUN_00ace02d(L"<NOBR>");
  FUN_0040cae0(&stack0xffffff8c,L"<NOBR>",sVar4);
  FUN_0040cae0(&stack0xffffff8c,(wchar_t *)*puVar3,puVar3[1]);
  sVar4 = FUN_00ace02d((short *)&DAT_00d24214);
  FUN_0040cae0(&stack0xffffff8c,L"/",sVar4);
  FUN_0040cae0(&stack0xffffff8c,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_54);
  }
  puStack_c = (undefined4 *)CONCAT31(puStack_c._1_3_,3);
  if (10 < local_2c[0]) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  sVar4 = FUN_00ace02d(L" (Chemistry)</NOBR>");
  FUN_0040cae0(&stack0xffffff8c,L" (Chemistry)</NOBR>",sVar4);
  FUN_006888d0(this,(undefined4 *)&stack0xffffff8c);
  uVar8 = 0x43000000;
  iVar5 = FUN_0071b2a0();
  FUN_00741940(this,1,iVar5,uVar8);
  uVar8 = 0x43000000;
  iVar5 = FUN_0071b2a0();
  FUN_00741b60(this,1,iVar5,uVar8);
  piVar6 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar6 + 0xc))(this,1);
  puStack_c = operator_new(0x3fc);
  uStack_14 = 5;
  if (puStack_c == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = FUN_00833290(puStack_c);
  }
  uVar7 = 0;
  *(int **)((int)this + 0x3a8) = piVar6;
  _Memory = (void *)0x1;
  uStack_14 = 3;
  (**(code **)(*piVar6 + 0x5c))(1,*(undefined4 *)((int)this + 0x36c));
  (**(code **)(**(int **)((int)this + 0x3a8) + 100))(1,*(undefined4 *)((int)this + 0x36c),0);
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))(*(undefined4 *)((int)this + 0x3a8),1);
  FUN_0073f410(this,400.0);
  FUN_006887a0(this,0.0);
  if (10 < uVar7) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_3c;
  return this;
}


//// FUNCTION FUN_00668ab0 @ 00668ab0 ////

undefined4 * __thiscall FUN_00668ab0(void *this,byte param_1)

{
  FUN_00668ad0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00668ad0 @ 00668ad0 ////

void __fastcall FUN_00668ad0(undefined4 *param_1)

{
  param_1[0xf1] = &PTR_FUN_00d16954;
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
  param_1[0xeb] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xed] = param_1[0xec];
  }
  if (param_1[0xec] != 0) {
    *(undefined4 *)(param_1[0xec] + 4) = param_1[0xed];
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xf0] = 0;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xed] = param_1[0xec];
  }
  if (param_1[0xec] != 0) {
    *(undefined4 *)(param_1[0xec] + 4) = param_1[0xed];
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  FUN_00667fe0(param_1);
  return;
}


//// FUNCTION FUN_00668bc0 @ 00668bc0 ////

void __cdecl FUN_00668bc0(int param_1,int param_2)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc400b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x3dc);
  local_4 = 0;
  if (this != (void *)0x0) {
    FUN_00668820(this,param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00668c20 @ 00668c20 ////

undefined4 * __thiscall FUN_00668c20(void *this,byte param_1)

{
  FUN_00668710(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00668ca0 @ 00668ca0 ////

void __fastcall FUN_00668ca0(int *param_1)

{
  double dVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  size_t sVar5;
  void *pvVar6;
  float *pfVar7;
  int iVar8;
  wchar_t *_Format;
  undefined2 **ppuVar9;
  void *pvStack_2ac;
  undefined2 *puStack_2a8;
  uint uStack_2a4;
  undefined4 uStack_2a0;
  undefined2 auStack_29c [10];
  wchar_t *pwStack_288;
  void *pvStack_284;
  uint local_280;
  uint auStack_27c [4];
  void *pvStack_26c;
  uint uStack_264;
  undefined2 *local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined2 local_254 [4];
  undefined1 auStack_24c [4];
  float fStack_248;
  float fStack_244;
  void *pvStack_240;
  uint uStack_238;
  wchar_t awStack_220 [2];
  wchar_t awStack_21c [62];
  wchar_t awStack_1a0 [64];
  wchar_t awStack_120 [64];
  wchar_t awStack_a0 [64];
  void *pvStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00cc4041;
  pvStack_14 = ExceptionList;
  local_260 = local_254;
  local_254[0] = 0;
  local_25c = 0;
  local_258 = 10;
  local_c = 0;
  ExceptionList = &pvStack_14;
  puVar4 = (undefined4 *)(**(code **)(*(int *)param_1[0xea] + 0x5c))(&local_280);
  sVar5 = FUN_00ace02d(L"<NOBR>");
  FUN_0040cae0(&uStack_264,L"<NOBR>",sVar5);
  FUN_0040cae0(&uStack_264,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < auStack_27c[0]) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_284);
  }
  ppuVar9 = &puStack_2a8;
  pvVar6 = (void *)FUN_005873c0(param_1[0xea]);
  pfVar7 = (float *)FUN_0042b0d0(pvVar6,ppuVar9);
  fVar2 = *pfVar7;
  sVar5 = FUN_00ace02d(L" Popularity:(");
  FUN_0040cae0(&uStack_264,L" Popularity:(",sVar5);
  sVar5 = _swprintf(awStack_21c,0xd18f84,SUB84((double)fVar2,0),
                    (int)((ulonglong)(double)fVar2 >> 0x20));
  FUN_0040cae0(&uStack_264,awStack_21c,sVar5);
  sVar5 = FUN_00ace02d((short *)&DAT_00d2446c);
  FUN_0040cae0(&uStack_264,L")",sVar5);
  sVar5 = FUN_00ace02d(L" (Chemistry)</NOBR>");
  FUN_0040cae0(&uStack_264,L" (Chemistry)</NOBR>",sVar5);
  (**(code **)(*param_1 + 0x54))(&uStack_264);
  puStack_2a8 = auStack_29c;
  auStack_29c[0] = 0;
  uStack_2a4 = 0;
  uStack_2a0 = 10;
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
  sVar5 = FUN_00ace02d(L"<TABLE><TR><TD WIDTH = 130>Name</TD></TR></TABLE>");
  FUN_0040cae0(&puStack_2a8,L"<TABLE><TR><TD WIDTH = 130>Name</TD></TR></TABLE>",sVar5);
  iVar8 = *(int *)(param_1[0xec] + 0xcc);
  _Format = (wchar_t *)0x1;
  if (iVar8 != param_1[0xec] + 0xd8) {
    do {
      pvVar6 = *(void **)(iVar8 + 8);
      cVar3 = (**(code **)(**(int **)((int)pvVar6 + 0xb8) + 0x13c))();
      if ((cVar3 != '\0') && (*(int *)((int)pvVar6 + 0xb8) != param_1[0xea])) {
        pwStack_288 = (wchar_t *)auStack_27c;
        auStack_27c[0] = auStack_27c[0] & 0xffff0000;
        pvStack_284 = (void *)0x0;
        local_280 = 10;
        pvStack_14._0_1_ = 2;
        sVar5 = FUN_00ace02d(L"<a href=%");
        FUN_0040cae0(&pwStack_288,L"<a href=%",sVar5);
        sVar5 = _swprintf(awStack_220,0xd18f7c,_Format);
        FUN_0040cae0(&pwStack_288,awStack_220,sVar5);
        sVar5 = FUN_00ace02d((short *)&DAT_00d19724);
        FUN_0040cae0(&pwStack_288,L">",sVar5);
        (*(code *)**(undefined4 **)(param_1[0xeb] + 0x344))
                  (_Format,&LAB_00668c40,*(undefined4 *)((int)pvVar6 + 0xb8));
        _Format = (wchar_t *)((int)_Format + 1);
        puVar4 = (undefined4 *)(**(code **)(**(int **)((int)pvVar6 + 0xb8) + 0x5c))(auStack_24c);
        FUN_0040cae0(&pwStack_288,(wchar_t *)*puVar4,puVar4[1]);
        if (10 < uStack_238) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_240);
        }
        sVar5 = FUN_00ace02d(L"</a>");
        FUN_0040cae0(&pwStack_288,L"</a>",sVar5);
        pfVar7 = (float *)FUN_0042b030(pvVar6,&fStack_244);
        fVar2 = *pfVar7;
        sVar5 = FUN_00ace02d(L"<TABLE><TR><TD WIDTH = 120>");
        FUN_0040cae0(&puStack_2a8,L"<TABLE><TR><TD WIDTH = 120>",sVar5);
        FUN_0040cae0(&puStack_2a8,pwStack_288,(size_t)pvStack_284);
        sVar5 = FUN_00ace02d(L"</TD>");
        FUN_0040cae0(&puStack_2a8,L"</TD>",sVar5);
        pfVar7 = (float *)FUN_0042b030(pvVar6,&fStack_248);
        pvStack_2ac = (void *)*pfVar7;
        sVar5 = FUN_00ace02d(L"<TD bgcolor = #000088 WIDTH =");
        FUN_0040cae0(&puStack_2a8,L"<TD bgcolor = #000088 WIDTH =",sVar5);
        dVar1 = (double)(fVar2 * 80.0);
        sVar5 = _swprintf(awStack_1a0,0xd18f84,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
        FUN_0040cae0(&puStack_2a8,awStack_1a0,sVar5);
        sVar5 = FUN_00ace02d(L"><FONT COLOR = #FFFFFF>");
        FUN_0040cae0(&puStack_2a8,L"><FONT COLOR = #FFFFFF>",sVar5);
        sVar5 = _swprintf(awStack_120,0xd18f84,SUB84((double)(float)pvStack_2ac,0),
                          (int)((ulonglong)(double)(float)pvStack_2ac >> 0x20));
        FUN_0040cae0(&puStack_2a8,awStack_120,sVar5);
        sVar5 = FUN_00ace02d(L"</FONT></TD><TD bgcolor = #000000 WIDTH = ");
        FUN_0040cae0(&puStack_2a8,L"</FONT></TD><TD bgcolor = #000000 WIDTH = ",sVar5);
        dVar1 = (double)(80.0 - fVar2 * 80.0);
        sVar5 = _swprintf(awStack_a0,0xd18f84,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
        FUN_0040cae0(&puStack_2a8,awStack_a0,sVar5);
        sVar5 = FUN_00ace02d(L"></TD>");
        FUN_0040cae0(&puStack_2a8,L"></TD>",sVar5);
        sVar5 = FUN_00ace02d(L"<TD WIDTH=10></TD>");
        FUN_0040cae0(&puStack_2a8,L"<TD WIDTH=10></TD>",sVar5);
        sVar5 = FUN_00ace02d(L"</TR>");
        FUN_0040cae0(&puStack_2a8,L"</TR>",sVar5);
        sVar5 = FUN_00ace02d(L"<TR><TD height = 4></TD></TR></TABLE>");
        FUN_0040cae0(&puStack_2a8,L"<TR><TD height = 4></TD></TR></TABLE>",sVar5);
        pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
        if (10 < local_280) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_288);
        }
      }
      iVar8 = *(int *)(iVar8 + 4);
    } while (iVar8 != param_1[0xec] + 0xd8);
  }
  (**(code **)(*(int *)param_1[0xeb] + 0x54))(&puStack_2a8);
  if (10 < uStack_2a4) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_2ac);
  }
  if (uStack_264 < 0xb) {
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_26c);
}


//// FUNCTION FUN_006691e0 @ 006691e0 ////

void __fastcall FUN_006691e0(int *param_1)

{
  FUN_00668ca0(param_1);
  (**(code **)(*(int *)param_1[0xeb] + 0x84))(0);
  (**(code **)(*param_1 + 0x84))(0);
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_006692c0 @ 006692c0 ////

int * __thiscall FUN_006692c0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION WConfirmDialog_Tick @ 00669350 ////

void __fastcall WConfirmDialog_Tick(int *param_1)

{
  WWindow_Tick(param_1);
  if ((DAT_0104da20 != 0) && (DAT_0104da38 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0066936f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0104da68 + 4))();
    return;
  }
  return;
}


//// FUNCTION FUN_006693d0 @ 006693d0 ////

void __thiscall
FUN_006693d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_0104da20 = param_2;
  (*(code *)DAT_0104da24[1])();
  DAT_0104da38 = param_3;
  (*(code *)*DAT_0104da24)();
  (*(code *)DAT_0104da3c[1])();
  DAT_0104da50 = param_4;
  (*(code *)*DAT_0104da3c)();
  (**(code **)(*DAT_0104da1c + 0x18))(0,&LAB_00669310,this,"WCONFIRMDIALOG_CONFIRM");
  (**(code **)(*DAT_0104da18 + 0x18))(0,&LAB_00669300,this,"WCONFIRMDIALOG_CANCEL");
  return;
}


//// FUNCTION FUN_00669460 @ 00669460 ////

void __thiscall FUN_00669460(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d354e4;
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


//// FUNCTION FUN_006694b0 @ 006694b0 ////

void __fastcall FUN_006694b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d354e4;
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


//// FUNCTION FUN_00669500 @ 00669500 ////

void __fastcall FUN_00669500(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3550c;
  param_1[0x14] = &PTR_FUN_00d354f4;
  FUN_00667fe0(param_1);
  return;
}


//// FUNCTION FUN_00669520 @ 00669520 ////

int * __thiscall FUN_00669520(void *this,undefined4 *param_1)

{
  wchar_t *pwVar1;
  char cVar2;
  size_t sVar3;
  void **ppvVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  void *this_00;
  uint unaff_EBX;
  void *unaff_EBP;
  uint *unaff_ESI;
  float10 fVar9;
  uint uVar10;
  char *_Dest;
  uint uVar11;
  undefined1 *puVar12;
  float fVar13;
  void **ppvStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  void *pvStack_cc;
  uint *puStack_c8;
  float fStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  void *pvStack_b8;
  uint local_9c;
  undefined4 *local_98;
  void *apvStack_90 [2];
  undefined1 *puStack_88;
  undefined4 auStack_7c [5];
  undefined4 uStack_68;
  void *apvStack_60 [2];
  uint uStack_58;
  undefined2 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44 [6];
  undefined4 uStack_38;
  void *local_30;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc4147;
  pvStack_c = ExceptionList;
  local_9c = 0;
  ExceptionList = &pvStack_c;
  local_30 = this;
  FUN_006889c0(this,'\0');
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 8;
  local_50 = local_44;
  *(undefined ***)this = &PTR_FUN_00d3550c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d354f4;
  DAT_0104da20 = 0;
  local_44[0] = 0;
  local_4c = 0;
  local_48 = 10;
  pwVar1 = (wchar_t *)*param_1;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  sVar3 = FUN_00ace02d(L"<P ALIGN\t= CENTER>");
  pvStack_b8 = (void *)0x6695bb;
  FUN_0040cae0(&local_50,L"<P ALIGN\t= CENTER>",sVar3);
  sVar3 = FUN_00ace02d(pwVar1);
  pvStack_b8 = (void *)0x6695cf;
  FUN_0040cae0(&local_50,pwVar1,sVar3);
  sVar3 = FUN_00ace02d(L"</P>");
  pvStack_b8 = (void *)0x6695eb;
  FUN_0040cae0(&local_50,L"</P>",sVar3);
  local_98 = operator_new(0x3fc);
  local_4._0_1_ = 2;
  if (local_98 == (undefined4 *)0x0) {
    ppvVar4 = (void **)0x0;
  }
  else {
    ppvVar4 = (void **)FUN_00833290(local_98);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)((int)*ppvVar4 + 0x78))();
  pvStack_b8 = *(void **)((int)this + 0x36c);
  uStack_bc = 1;
  uStack_c0 = 0x66963a;
  (**(code **)((int)*ppvVar4 + 0x5c))();
  fStack_c4 = *(float *)((int)this + 0x36c);
  uStack_c0 = 0x40800000;
  puStack_c8 = (uint *)0x1;
  pvStack_cc = (void *)0x66964f;
  (**(code **)((int)*ppvVar4 + 100))();
  pvStack_cc = pvStack_14;
  ppvVar4[0xd5] = (void *)0x44160000;
  uStack_d0 = 0x669668;
  (**(code **)((int)*ppvVar4 + 0x54))();
  uStack_d0 = 0;
  uStack_d4 = 0x669673;
  (**(code **)((int)*ppvVar4 + 0x8c))();
  uStack_d4 = 1;
  ppvStack_d8 = ppvVar4;
  FUN_006884e0((int)this);
  FUN_0073f410(this,600.0);
  fVar9 = (float10)(**(code **)((int)*ppvVar4 + 0x14))();
  FUN_0073f490(this,(float)(fVar9 + (float10)105.0));
  FUN_006888d0(this,auStack_7c);
  do {
    cVar2 = FUN_007421c0(this);
  } while (cVar2 != '\0');
  piVar5 = (int *)FUN_0071b2a0();
  fVar9 = (float10)(**(code **)(*piVar5 + 0x10))();
  fStack_c4 = (float)fVar9;
  fVar9 = FUN_0073e630((int)this);
  fVar13 = (float)(((float10)fStack_c4 - fVar9) * (float10)0.5);
  iVar6 = FUN_0071b2a0();
  FUN_00741940(this,1,iVar6,fVar13);
  piVar5 = (int *)FUN_0071b2a0();
  fVar9 = (float10)(**(code **)(*piVar5 + 0x14))();
  fStack_c4 = (float)fVar9;
  fVar9 = FUN_0073e640((int)this);
  fVar13 = (float)(((float10)fStack_c4 - fVar9) * (float10)0.5);
  iVar6 = FUN_0071b2a0();
  FUN_00741b60(this,1,iVar6,fVar13);
  piVar5 = (int *)FUN_0071b2a0();
  puVar12 = this;
  (**(code **)(*piVar5 + 0xc))();
  pvVar7 = operator_new(0x420);
  pvStack_cc = pvVar7;
  if (pvVar7 == (void *)0x0) {
    DAT_0104da1c = (int *)0x0;
  }
  else {
    puStack_c8 = &uStack_bc;
    uStack_bc = uStack_bc & 0xffffff00;
    fStack_c4 = 0.0;
    uStack_c0 = 0x14;
    _strncpy((char *)puStack_c8,"button_ok",9);
    fStack_c4 = 1.26117e-44;
    *(char *)((int)puStack_c8 + 9) = '\0';
    unaff_ESI = &local_9c;
    local_9c = local_9c & 0xffffff00;
    unaff_EBX = 0x14;
    _strncpy((char *)unaff_ESI,"button_tick.",0xc);
    unaff_EBP = (void *)0xc;
                    /* WARNING: Ignoring partial resolution of indirect */
    apvStack_90[0]._0_1_ = 0;
    uStack_38 = 5;
    uStack_d0 = 3;
    puVar8 = FUN_009b5030(apvStack_60,&puStack_c8);
    puStack_88 = &stack0xffffff10;
    uStack_38 = 6;
    uStack_d0 = 7;
    DAT_0104da1c = FUN_0069fb10(pvVar7,(int *)&stack0xffffff58,puVar8,0x42400000,0x42400000,0,0,
                                0x3f800000,0x3f800000);
  }
  if (((uStack_d0 & 4) != 0) && (uStack_d0 = uStack_d0 & 0xfffffffb, 10 < uStack_58)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_60[0]);
  }
  if (((uStack_d0 & 2) != 0) && (uStack_d0 = uStack_d0 & 0xfffffffd, 0x14 < unaff_EBX)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  uStack_38 = 1;
  if (((uStack_d0 & 1) != 0) && (uStack_d0 = uStack_d0 & 0xfffffffe, 0x14 < uStack_c0)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_c8);
  }
  pvVar7 = *(void **)((int)this + 0x36c);
  (**(code **)(*DAT_0104da1c + 0x60))();
  uVar11 = 0x41000000;
  _Dest = (char *)0x2;
  (**(code **)(*DAT_0104da1c + 0x68))();
  uVar10 = 0;
  (**(code **)(*DAT_0104da1c + 0x18))();
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  this_00 = operator_new(0x420);
  pvStack_b8 = this_00;
  if (this_00 == (void *)0x0) {
    DAT_0104da18 = (int *)0x0;
  }
  else {
    uStack_d0 = 0x14;
    ppvStack_d8 = &pvStack_cc;
    pvStack_cc = (void *)((uint)pvStack_cc & 0xffffff00);
    uStack_d4 = 0;
    _strncpy((char *)ppvStack_d8,"button_cancel",0xd);
    uStack_d4 = 0xd;
    *(char *)((int)ppvStack_d8 + 0xd) = '\0';
    _Dest = &stack0xffffff14;
    uVar10 = uVar10 | 8;
    uVar11 = 0x14;
    _strncpy(_Dest,"button_quit.",0xc);
    _Dest[0xc] = '\0';
    uStack_68 = 0xc;
    uVar10 = uVar10 | 0x10;
    puVar8 = FUN_009b5030(apvStack_90,&ppvStack_d8);
    uVar10 = uVar10 | 0x20;
    uStack_68 = 0xd;
    DAT_0104da18 = FUN_0069fb10(this_00,(int *)&stack0xffffff08,puVar8,0x42400000,0x42400000,0,0,
                                0x3f800000,0x3f800000);
  }
  if (((uVar10 & 0x20) != 0) && (uVar10 = uVar10 & 0xffffffdf, &lpType_0000000a < puStack_88)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_90[0]);
  }
  if (((uVar10 & 0x10) != 0) && (uVar10 = uVar10 & 0xffffffef, 0x14 < uVar11)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  uStack_68 = 1;
  if (((uVar10 & 8) != 0) && (0x14 < uStack_d0)) {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_d8);
  }
  (**(code **)(*DAT_0104da18 + 0x5c))();
  (**(code **)(*DAT_0104da18 + 0x68))(2,*(undefined4 *)((int)this + 0x36c));
  (**(code **)(*DAT_0104da18 + 0x18))(5,&LAB_005f37f0,0,"CONFIRM_CANCEL");
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))(DAT_0104da18,1);
  do {
    cVar2 = FUN_007421c0(this);
  } while (cVar2 != '\0');
  piVar5 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar5 + 0xac))(this);
  (*(code *)DAT_0104da54[1])();
  DAT_0104da68 = this;
  (*(code *)*DAT_0104da54)();
  if (&lpType_0000000a < puVar12) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar7);
  }
  ExceptionList = unaff_EBP;
  return this;
}


//// FUNCTION FUN_00669b60 @ 00669b60 ////

undefined4 * __thiscall FUN_00669b60(void *this,byte param_1)

{
  FUN_00669500(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00669b80 @ 00669b80 ////

int * __thiscall FUN_00669b80(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *this_00;
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cc4173;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (DAT_0104da68 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*DAT_0104da68 + 4))(this);
  }
  this_00 = operator_new(0x3a8);
  local_4._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00669520(this_00,param_1);
  }
  DAT_0104da10 = param_3;
  DAT_0104da14 = param_2;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*DAT_0104da1c + 0x18))(0,&LAB_00669210,piVar1,"WCONFIRMDIALOG_CONFIRM");
  piVar2 = piVar1;
  (**(code **)(*DAT_0104da18 + 0x18))(0,&LAB_00669240,piVar1,"WCONFIRMDIALOG_CANCEL");
  if ((undefined1 *)0xa < puStack_8) {
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  ExceptionList = piVar2;
  return piVar1;
}


//// FUNCTION FUN_00669c50 @ 00669c50 ////

int * __thiscall
FUN_00669c50(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,void *param_5,undefined4 param_6,uint param_7)

{
  void *this_00;
  int *this_01;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cc4193;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (DAT_0104da68 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*DAT_0104da68 + 4))(this);
  }
  this_00 = operator_new(0x3a8);
  local_4._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    this_01 = (int *)0x0;
  }
  else {
    this_01 = FUN_00669520(this_00,param_1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006693d0(this_01,param_1,param_2,param_3,param_4);
  if (10 < param_7) {
                    /* WARNING: Subroutine does not return */
    _free(param_5);
  }
  ExceptionList = pvStack_c;
  return this_01;
}


//// FUNCTION FUN_00669d10 @ 00669d10 ////

void __thiscall FUN_00669d10(void *this,undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)((int)this + 0x3b5) = param_1;
  *(undefined4 *)((int)this + 0x3b8) = param_2;
  *(undefined4 *)((int)this + 0x3bc) = param_3;
  return;
}


//// FUNCTION FUN_00669d50 @ 00669d50 ////

void __thiscall FUN_00669d50(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  float10 fVar5;
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc41ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e90b0(&local_18,param_1);
  if (local_18 != (char *)0x0) {
    puVar2 = operator_new(0x3c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0041f350(puVar2);
    }
    *(undefined4 **)((int)this + 0x380) = puVar2;
    puVar2 = operator_new(0x24);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_009910f0(puVar2);
    }
    *(undefined4 *)(*(int *)((int)this + 0x380) + 4) = uVar3;
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x380) + 4) + 0xc) = 6;
    iVar1 = *(int *)(*(int *)((int)this + 0x380) + 4);
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xbfffffff;
    local_4 = 0xffffffff;
    pvVar4 = FUN_0099bb50(local_18,0,0,0,'\0');
    this_00 = *(void **)(*(int *)((int)this + 0x380) + 4);
    if (*(void **)((int)this_00 + 0x18) != pvVar4) {
      Engine_SetResourceReference(this_00,(int)pvVar4);
    }
    if (pvVar4 != (void *)0x0) {
      FUN_0099b400(pvVar4);
    }
    iVar1 = *(int *)((int)this + 0x380);
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    iVar1 = *(int *)((int)this + 0x380);
    local_14 = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x30) = 0x3f800000;
    local_10 = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x34) = 0x3f800000;
    *(undefined4 *)(*(int *)((int)this + 0x380) + 8) = 0xffffffff;
    fVar5 = FUN_004012c0(0.0);
    *(float *)(*(int *)((int)this + 0x380) + 0xc) = (float)fVar5;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00669ed0 @ 00669ed0 ////

/* WARNING: Removing unreachable block (ram,0x0066a0a3) */
/* WARNING: Removing unreachable block (ram,0x0066a0cc) */

void __fastcall FUN_00669ed0(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 uVar12;
  float10 fVar13;
  ulonglong uVar14;
  uint uVar11;
  
  if ((*(float *)(param_1 + 0x3a8) == 0.0) ||
     (fVar2 = *(float *)(param_1 + 900) - *(float *)(param_1 + 0x39c),
     fVar5 = *(float *)(param_1 + 0x388) - *(float *)(param_1 + 0x3a0),
     fVar4 = *(float *)(param_1 + 0x38c) - *(float *)(param_1 + 0x3a4),
     fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4 <= *(float *)(param_1 + 0x3a8))) {
    uVar10 = FUN_00445f00((float *)(param_1 + 900),(float *)(param_1 + 0x39c));
    if ((char)uVar10 != '\0') {
      *(float *)(param_1 + 900) = *(float *)(param_1 + 0x39c);
      *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 0x3a0);
      *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x3a4);
    }
  }
  else {
    *(float *)(param_1 + 900) = *(float *)(param_1 + 900) + *(float *)(param_1 + 0x390);
    *(float *)(param_1 + 0x388) = *(float *)(param_1 + 0x394) + *(float *)(param_1 + 0x388);
    *(float *)(param_1 + 0x38c) = *(float *)(param_1 + 0x398) + *(float *)(param_1 + 0x38c);
  }
  pfVar1 = (float *)(*(int *)(param_1 + 0x37c) + 0xc);
  if (ABS(*(float *)(param_1 + 0x3b0)) - ABS(*pfVar1) <= ABS(*(float *)(param_1 + 0x3ac))) {
    fVar13 = FUN_004012c0(*(float *)(param_1 + 0x3b0));
    *pfVar1 = (float)fVar13;
    iVar3 = *(int *)(param_1 + 0x380);
    if (iVar3 != 0) {
      fVar13 = FUN_004012c0(*(float *)(param_1 + 0x3b0));
      *(float *)(iVar3 + 0xc) = (float)fVar13;
    }
  }
  else {
    fVar13 = FUN_004012c0(*(float *)(param_1 + 0x3ac));
    fVar13 = FUN_004012c0((float)(fVar13 + (float10)*pfVar1));
    *pfVar1 = (float)fVar13;
    iVar3 = *(int *)(param_1 + 0x380);
    if (iVar3 != 0) {
      fVar13 = FUN_004012c0(*(float *)(param_1 + 0x3ac));
      fVar13 = FUN_004012c0((float)(fVar13 + (float10)*(float *)(iVar3 + 0xc)));
      *(float *)(iVar3 + 0xc) = (float)fVar13;
    }
  }
  if (*(char *)(param_1 + 0x3b5) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x37c) + 8) = 0xff;
    *(undefined1 *)(*(int *)(param_1 + 0x37c) + 9) = *(undefined1 *)(*(int *)(param_1 + 0x37c) + 8);
    *(undefined1 *)(*(int *)(param_1 + 0x37c) + 10) = *(undefined1 *)(*(int *)(param_1 + 0x37c) + 9)
    ;
    if (*(int *)(param_1 + 0x380) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x380) + 8) = 0xff;
      *(undefined1 *)(*(int *)(param_1 + 0x380) + 9) =
           *(undefined1 *)(*(int *)(param_1 + 0x380) + 8);
      *(undefined1 *)(*(int *)(param_1 + 0x380) + 10) =
           *(undefined1 *)(*(int *)(param_1 + 0x380) + 9);
    }
  }
  else {
    uVar14 = FUN_00acd42c();
    uVar11 = (uint)uVar14 & 0xff;
    uVar9 = (undefined1)uVar14;
    uVar12 = uVar9;
    if (0xff < uVar11) {
      uVar12 = 0xff;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x37c) + 0xb) = uVar12;
    if (*(int *)(param_1 + 0x380) != 0) {
      if (0xff < uVar11) {
        uVar9 = 0xff;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x380) + 0xb) = uVar9;
    }
  }
  fVar6 = *(float *)(param_1 + 900) * *(float *)(param_1 + 0x3c4);
  fVar4 = *(float *)(param_1 + 0x388);
  fVar5 = *(float *)(param_1 + 0x38c);
  iVar3 = *(int *)(param_1 + 0x37c);
  fVar7 = fVar5 * *(float *)(param_1 + 0x3c4) * 32.0;
  fVar8 = fVar6 - fVar7;
  fVar2 = *(float *)(param_1 + 0x3c8);
  *(float *)(iVar3 + 0x10) = fVar8;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  fVar2 = fVar5 * fVar2 * 64.0;
  fVar5 = fVar4 - fVar2;
  *(float *)(iVar3 + 0x14) = fVar5;
  iVar3 = *(int *)(param_1 + 0x37c);
  fVar7 = fVar7 + fVar6;
  fVar2 = fVar2 + fVar4;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(float *)(iVar3 + 0x1c) = fVar7;
  *(float *)(iVar3 + 0x20) = fVar2;
  iVar3 = *(int *)(param_1 + 0x380);
  fVar7 = fVar7 - fVar8;
  fVar2 = (fVar2 - fVar5) * 0.5;
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(float *)(iVar3 + 0x10) = fVar7 * 0.05 + fVar8;
    *(float *)(iVar3 + 0x14) = fVar2 * 0.05 + fVar5;
    iVar3 = *(int *)(param_1 + 0x380);
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(float *)(iVar3 + 0x1c) = fVar7 * 0.3 + fVar8;
    *(float *)(iVar3 + 0x20) = fVar2 * 0.3 + fVar5;
    return;
  }
  return;
}


//// FUNCTION FUN_0066a330 @ 0066a330 ////

void __thiscall FUN_0066a330(void *this,float param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  
  *(float *)((int)this + 0x39c) = param_1;
  *(undefined4 *)((int)this + 0x3a0) = param_2;
  *(undefined4 *)((int)this + 0x3a4) = param_3;
  *(float *)((int)this + 0x390) =
       (*(float *)((int)this + 0x39c) - *(float *)((int)this + 900)) * 0.1;
  *(float *)((int)this + 0x394) =
       (*(float *)((int)this + 0x3a0) - *(float *)((int)this + 0x388)) * 0.1;
  *(float *)((int)this + 0x398) =
       (*(float *)((int)this + 0x3a4) - *(float *)((int)this + 0x38c)) * 0.1;
  fVar1 = *(float *)((int)this + 0x390);
  *(float *)((int)this + 0x3a8) =
       *(float *)((int)this + 0x398) * *(float *)((int)this + 0x398) +
       *(float *)((int)this + 0x394) * *(float *)((int)this + 0x394) + fVar1 * fVar1;
  return;
}


//// FUNCTION FUN_0066a3e0 @ 0066a3e0 ////

void __thiscall FUN_0066a3e0(void *this,float param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = FUN_004012c0(param_1);
  *(float *)(*(int *)((int)this + 0x37c) + 0xc) = (float)fVar2;
  iVar1 = *(int *)((int)this + 0x380);
  *(undefined4 *)((int)this + 0x3b0) = *(undefined4 *)(*(int *)((int)this + 0x37c) + 0xc);
  if (iVar1 != 0) {
    fVar2 = FUN_004012c0(param_1);
    *(float *)(iVar1 + 0xc) = (float)fVar2;
  }
  *(undefined4 *)((int)this + 0x3ac) = 0;
  return;
}


//// FUNCTION FUN_0066a480 @ 0066a480 ////

undefined4 * __cdecl FUN_0066a480(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc41cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x3c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0041f350(puVar1);
  }
  puVar2 = operator_new(0x24);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_009910f0(puVar2);
  }
  puVar1[1] = iVar3;
  *(undefined1 *)(iVar3 + 0xc) = 6;
  *(uint *)(puVar1[1] + 0x10) = *(uint *)(puVar1[1] + 0x10) & 0xbfffffff;
  local_4 = 0xffffffff;
  if (*(int *)((int)puVar1[1] + 0x18) != param_1) {
    Engine_SetResourceReference((void *)puVar1[1],param_1);
  }
  puVar1[10] = 0;
  puVar1[0xd] = 0x3f800000;
  puVar1[0xb] = 0;
  puVar1[2] = 0xffffffff;
  puVar1[0xc] = 0x3f800000;
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_0066a570 @ 0066a570 ////

undefined4 * __thiscall FUN_0066a570(void *this,int param_1,int param_2,char param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc4204;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d356ac;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d35694;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x344) = (undefined2 *)((int)this + 0x350);
  *(undefined2 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((undefined4 *)((int)this + 0x344),(wchar_t *)&lpCaption_00d16918,uVar1);
  piVar3 = (int *)((int)this + 0x368);
  *(undefined4 *)((int)this + 0x370) = 0;
  *piVar3 = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 **)((int)this + 0x370) = (undefined4 *)((int)this + 0x364);
  *(undefined4 *)((int)this + 0x364) = &PTR_FUN_00d18c5c;
  *(int *)((int)this + 0x378) = param_1;
  if (param_1 != 0) {
    piVar4 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x36c) = piVar4;
    *piVar3 = *piVar4;
    *(int **)(*piVar4 + 4) = piVar3;
    *piVar4 = (int)piVar3;
  }
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined1 *)((int)this + 0x3b4) = 0;
  *(undefined1 *)((int)this + 0x3b5) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0x3f800000;
  piVar3 = (int *)(*(int *)((int)this + 0x378) + 0x48);
  *piVar3 = *piVar3 + 1;
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((param_3 == '\0') || (param_4 == 0)) {
    puVar2 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x378) + 0xc))();
  }
  else {
    puVar2 = FUN_0066a480(param_4);
  }
  *(undefined4 **)((int)this + 0x37c) = puVar2;
  FUN_00669d50(this,param_2);
  FUN_009cecc0(*(void **)(*(int *)((int)this + 0x37c) + 4));
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  fVar5 = FUN_004012c0(0.0);
  *(float *)(*(int *)((int)this + 0x37c) + 0xc) = (float)fVar5;
  *(undefined4 *)((int)this + 0x3b0) = *(undefined4 *)(*(int *)((int)this + 0x37c) + 0xc);
  piVar3 = (int *)FUN_0071b2a0();
  piVar4 = (int *)FUN_0071b2b0();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x10))();
  fVar6 = (float10)(**(code **)(*piVar4 + 0x10))();
  *(float *)((int)this + 0x3c4) = (float)((float10)(float)fVar5 / fVar6);
  piVar3 = (int *)FUN_0071b2b0();
  piVar4 = (int *)FUN_0071b2a0();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x14))();
  fVar6 = (float10)(**(code **)(*piVar4 + 0x14))();
  *(float *)((int)this + 0x3c0) = (float)((float10)(float)fVar5 / fVar6);
  piVar3 = (int *)FUN_0071b2a0();
  piVar4 = (int *)FUN_0071b2b0();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x14))();
  fVar6 = (float10)(**(code **)(*piVar4 + 0x14))();
  *(float *)((int)this + 0x3c8) = (float)((float10)(float)fVar5 / fVar6);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_0066a760 @ 0066a760 ////

void __fastcall FUN_0066a760(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc4234;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d356ac;
  param_1[0x14] = &PTR_FUN_00d35694;
  local_4 = 2;
  FUN_0099a2b0(param_1 + 0xdf);
  FUN_0099a2b0(param_1 + 0xe0);
  puVar2 = (undefined4 *)param_1[0xde];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xd9] + 4))();
    param_1[0xde] = 0;
    (**(code **)param_1[0xd9])();
  }
  param_1[0xd9] = &PTR_FUN_00d18c5c;
  if ((undefined4 *)param_1[0xdb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdb] = param_1[0xda];
  }
  if (param_1[0xda] != 0) {
    *(undefined4 *)(param_1[0xda] + 4) = param_1[0xdb];
  }
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xde] = 0;
  if ((undefined4 *)param_1[0xdb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdb] = param_1[0xda];
  }
  if (param_1[0xda] != 0) {
    *(undefined4 *)(param_1[0xda] + 4) = param_1[0xdb];
  }
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  if (10 < (uint)param_1[0xd3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd1]);
  }
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0066a890 @ 0066a890 ////

undefined4 * __thiscall FUN_0066a890(void *this,byte param_1)

{
  FUN_0066a760(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0066a980 @ 0066a980 ////

float10 __fastcall FUN_0066a980(int param_1)

{
  return (float10)*(float *)(param_1 + 0x76c);
}


//// FUNCTION FUN_0066a990 @ 0066a990 ////

float10 __fastcall FUN_0066a990(int param_1)

{
  return (float10)*(float *)(param_1 + 0x778);
}


//// FUNCTION FUN_0066a9a0 @ 0066a9a0 ////

int * __thiscall FUN_0066a9a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0066a9e0 @ 0066a9e0 ////

void __fastcall FUN_0066a9e0(int param_1)

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


//// FUNCTION FUN_0066aa00 @ 0066aa00 ////

void __fastcall FUN_0066aa00(int param_1)

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


//// FUNCTION FUN_0066aa30 @ 0066aa30 ////

int * __thiscall FUN_0066aa30(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0066aaa0 @ 0066aaa0 ////

int * __thiscall FUN_0066aaa0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0066aae0 @ 0066aae0 ////

void __fastcall FUN_0066aae0(int param_1)

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


//// FUNCTION FUN_0066ab00 @ 0066ab00 ////

void __fastcall FUN_0066ab00(int param_1)

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


//// FUNCTION FUN_0066ab80 @ 0066ab80 ////

int * __thiscall FUN_0066ab80(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0066abc0 @ 0066abc0 ////

void __fastcall FUN_0066abc0(int param_1)

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


//// FUNCTION FUN_0066abf0 @ 0066abf0 ////

int * __thiscall FUN_0066abf0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0066ac30 @ 0066ac30 ////

void __fastcall FUN_0066ac30(int param_1)

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


//// FUNCTION FUN_0066ad30 @ 0066ad30 ////

void __cdecl FUN_0066ad30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0066ae50 @ 0066ae50 ////

undefined4 __fastcall FUN_0066ae50(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint local_2c [6];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc4248;
  local_c = ExceptionList;
  pvVar3 = ExceptionList;
  if (*(int *)(param_1 + 0x518) != 0) {
    ExceptionList = &local_c;
    piVar1 = (int *)FUN_00434620(*(int *)(param_1 + 0x518));
    pvVar3 = (void *)0x0;
    if (piVar1 != (int *)0x0) {
      pvVar3 = DAT_0104daa0;
      if (*(int **)((int)DAT_0104daa0 + 0x400) != (int *)0x0) {
        uVar2 = (**(code **)(**(int **)((int)DAT_0104daa0 + 0x400) + 0x58))();
        puStack_8 = (undefined1 *)0x0;
        uVar2 = (**(code **)(*piVar1 + 0x60))(uVar2);
        if (10 < local_2c[0]) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        ExceptionList = pvStack_14;
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
  }
  ExceptionList = local_c;
  return (uint)pvVar3 & 0xffffff00;
}


//// FUNCTION FUN_0066aef0 @ 0066aef0 ////

undefined4 __fastcall FUN_0066aef0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *unaff_EDI;
  uint auStack_2c [6];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc4268;
  local_c = ExceptionList;
  pvVar4 = ExceptionList;
  if (*(int *)(param_1 + 0x518) != 0) {
    ExceptionList = &local_c;
    piVar2 = (int *)FUN_00434620(*(int *)(param_1 + 0x518));
    pvVar4 = (void *)0x0;
    if (piVar2 != (int *)0x0) {
      piVar1 = *(int **)((int)DAT_0104daa0 + 0x400);
      pvVar4 = DAT_0104daa0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x194))();
        uVar3 = (**(code **)(*piVar2 + 0x5c))(auStack_2c);
        puStack_8 = (undefined1 *)0x0;
        uVar3 = (**(code **)(*piVar1 + 0x54))(uVar3);
        if (10 < auStack_2c[0]) {
                    /* WARNING: Subroutine does not return */
          _free(unaff_EDI);
        }
        ExceptionList = pvStack_14;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
  }
  ExceptionList = local_c;
  return (uint)pvVar4 & 0xffffff00;
}


//// FUNCTION FUN_0066afd0 @ 0066afd0 ////

undefined4 FUN_0066afd0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc428b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_0046f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(this,0x918);
  uVar2 = DAT_0104daa0;
  (**(code **)(this[0xe] + 4))();
  this[0x13] = uVar2;
  (**(code **)this[0xe])();
  uVar2 = FUN_005e9280(DAT_0104d82c,extraout_EDX,this);
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_0066b070 @ 0066b070 ////

void __fastcall FUN_0066b070(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0066b0d0 @ 0066b0d0 ////

undefined4 __fastcall FUN_0066b0d0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 in_EAX;
  int iVar3;
  
  if (*(void **)(param_1 + 0x3a0) != (void *)0x0) {
    if (*(char *)(param_1 + 0x710) == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x370);
    }
    in_EAX = FUN_00683560(*(void **)(param_1 + 0x3a0),iVar3,*(undefined4 *)(param_1 + 0x358));
    puVar2 = *(undefined4 **)(param_1 + 0x6b0);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(*(int *)(param_1 + 0x69c) + 4))();
      *(undefined4 *)(param_1 + 0x6b0) = 0;
      in_EAX = (*(code *)**(undefined4 **)(param_1 + 0x69c))();
    }
    puVar2 = *(undefined4 **)(param_1 + 0x6c8);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(*(int *)(param_1 + 0x6b4) + 4))();
      *(undefined4 *)(param_1 + 0x6c8) = 0;
      in_EAX = (*(code *)**(undefined4 **)(param_1 + 0x6b4))();
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


//// FUNCTION FUN_0066b170 @ 0066b170 ////

void __cdecl
FUN_0066b170(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc42ab;
  pvStack_c = ExceptionList;
  DAT_0104da7c = param_4;
  DAT_0104da6c = param_1;
  DAT_0104da74 = param_2;
  DAT_0104da78 = param_3;
  DAT_0104da80 = param_5;
  DAT_0104da84 = param_6;
  DAT_0104da88 = 1;
  DAT_0104da89 = 0;
  DAT_0104da70 = 0;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0046f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(puVar1,0x5cb);
  uVar2 = FUN_006a36e0();
  (**(code **)(puVar1[0xe] + 4))();
  puVar1[0x13] = uVar2;
  (**(code **)puVar1[0xe])();
  FUN_005e9280(DAT_0104d82c,extraout_EDX,puVar1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Applicant_StageAndPostSpawnRequest @ 0066b250 ////

void __cdecl
Applicant_StageAndPostSpawnRequest
          (int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc42cb;
  local_c = ExceptionList;
  if (DAT_0104d8e8 != 0) {
    DAT_0104da7c = param_4;
    DAT_0104da74 = param_2;
    DAT_0104da78 = param_3;
    DAT_0104da84 = param_6;
    iVar1 = 0;
    DAT_0104da6c = param_1;
    DAT_0104da80 = param_5;
    DAT_0104da88 = 0;
    DAT_0104da89 = param_7;
    ExceptionList = &local_c;
    if ((param_1 != 0) && (ExceptionList = &local_c, param_5 != 0)) {
      iVar3 = 0;
      ExceptionList = &local_c;
      iVar1 = param_1;
      this = (void *)FUN_005b2220(param_5);
      iVar1 = FUN_005a7640(this,iVar1,iVar3);
      iVar1 = FUN_005a64e0(iVar1);
      if (param_1 == iVar1) {
        iVar1 = 0;
      }
    }
    DAT_0104da70 = iVar1;
    puVar2 = operator_new(0xa4);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0046f7a0(puVar2);
    }
    local_4 = 0xffffffff;
    FUN_0046f5d0(puVar2,0xf6a);
    iVar1 = DAT_0104d8e8;
    (**(code **)(puVar2[0xe] + 4))();
    puVar2[0x13] = iVar1;
    (**(code **)puVar2[0xe])();
    FUN_005f3a20(DAT_0104d8e8);
    FUN_005e9280(DAT_0104d82c,extraout_EDX,puVar2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0066b3a0 @ 0066b3a0 ////

undefined4 __fastcall FUN_0066b3a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3a0);
}


//// FUNCTION FUN_0066b3b0 @ 0066b3b0 ////

void __fastcall FUN_0066b3b0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int ***pppiVar5;
  int ****ppppiVar6;
  float10 fVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc42f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00435160(*(int *)(param_1 + 0x518));
  *(int *)(param_1 + 0x58c) = iVar3;
  ppppiVar6 = (int ****)0x0;
  if ((*(int *)(iVar3 + 0xcc) != 0) && (0 < *(int *)(*(int *)(iVar3 + 0xcc) + 0x28))) {
    puVar2 = *(undefined4 **)(param_1 + 0x6b0);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(*(int *)(param_1 + 0x69c) + 4))();
      *(undefined4 *)(param_1 + 0x6b0) = 0;
      (*(code *)**(undefined4 **)(param_1 + 0x69c))();
    }
    pvVar4 = operator_new(0x3f4);
    uStack_4 = 0;
    if (pvVar4 != (void *)0x0) {
      pppiVar5 = (int ***)FUN_00433ab0(*(int *)(param_1 + 0x518));
      ppppiVar6 = FUN_0067dc80(pvVar4,pppiVar5);
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)(param_1 + 0x69c) + 4))();
    *(int *****)(param_1 + 0x6b0) = ppppiVar6;
    (*(code *)**(undefined4 **)(param_1 + 0x69c))();
    ppppiVar6 = (int ****)0x0;
    (**(code **)(**(int **)(param_1 + 0x6b0) + 0x84))(0);
    (**(code **)(**(int **)(param_1 + 0x6b0) + 0x5c))(1,*(undefined4 *)(param_1 + 0x388),0x43c80000)
    ;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x6b0) + 0x14))();
    (**(code **)(**(int **)(param_1 + 0x6b0) + 100))
              (1,param_1,(float)((float10)230.0 - fVar7 * (float10)0.5));
    (**(code **)(**(int **)(param_1 + 0x6f8) + 0xc))(*(undefined4 *)(param_1 + 0x6b0),2);
    puVar2 = *(undefined4 **)(param_1 + 0x6c8);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(*(int *)(param_1 + 0x6b4) + 4))();
      *(undefined4 *)(param_1 + 0x6c8) = 0;
      (*(code *)**(undefined4 **)(param_1 + 0x6b4))();
    }
    pvVar4 = operator_new(0x3f4);
    if (pvVar4 != (void *)0x0) {
      pppiVar5 = (int ***)FUN_00433ab0(*(int *)(param_1 + 0x518));
      ppppiVar6 = FUN_0067f490(pvVar4,pppiVar5);
    }
    (**(code **)(*(int *)(param_1 + 0x6b4) + 4))();
    *(int *****)(param_1 + 0x6c8) = ppppiVar6;
    (*(code *)**(undefined4 **)(param_1 + 0x6b4))();
    (**(code **)(**(int **)(param_1 + 0x6c8) + 0x84))(0);
    (**(code **)(**(int **)(param_1 + 0x6c8) + 0x5c))(2,*(undefined4 *)(param_1 + 0x6b0),0xc2480000)
    ;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x6c8) + 0x14))();
    (**(code **)(**(int **)(param_1 + 0x6c8) + 100))
              (1,param_1,(float)((float10)230.0 - fVar7 * (float10)0.5));
    (**(code **)(**(int **)(param_1 + 0x6f8) + 0xc))(*(undefined4 *)(param_1 + 0x6c8),2);
    (**(code **)(**(int **)(param_1 + 0x388) + 0x50))(1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0066b670 @ 0066b670 ////

short FUN_0066b670(void)

{
  float fVar1;
  byte bVar2;
  
  fVar1 = *(float *)(DAT_0104daa0 + 0x778);
  bVar2 = fVar1 < 0.0 | (byte)((ushort)((ushort)NAN(fVar1) << 10) >> 8) |
          (byte)((ushort)((ushort)(fVar1 == 0.0) << 0xe) >> 8);
  if (fVar1 >= 0.0 && (fVar1 == 0.0) == 0) {
    *(undefined4 *)(DAT_0104daa0 + 0x778) = 0;
    return CONCAT11(bVar2,1);
  }
  return (ushort)bVar2 << 8;
}


//// FUNCTION FUN_0066b6a0 @ 0066b6a0 ////

int FUN_0066b6a0(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint3 extraout_var;
  undefined2 uVar5;
  void *pvVar4;
  
  iVar3 = FUN_004345e0();
  cVar2 = FUN_00433af0(iVar3);
  if (cVar2 != '\0') {
    return (uint)extraout_var << 8;
  }
  iVar3 = FUN_004345e0();
  FUN_004346a0(iVar3);
  iVar3 = FUN_004345e0();
  if (*(char *)(iVar3 + 0x35a) == '\0') {
    iVar3 = FUN_004345e0();
    if (*(char *)(iVar3 + 0x35b) == '\0') goto LAB_0066b751;
  }
  iVar3 = DAT_0104daa0;
  fVar1 = *(float *)(DAT_0104daa0 + 0x778);
  *(float *)(DAT_0104daa0 + 0x778) = *(float *)(DAT_0104daa0 + 0x778) + 0.1;
  uVar5 = (undefined2)((uint)iVar3 >> 0x10);
  if (1.0 < *(float *)(DAT_0104daa0 + 0x778)) {
    *(undefined4 *)(DAT_0104daa0 + 0x778) = 0x3f800000;
  }
  iVar3 = CONCAT22(uVar5,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 0.0) << 0xe);
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    fVar1 = *(float *)(DAT_0104daa0 + 0x778);
    iVar3 = CONCAT22(uVar5,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe);
    if (fVar1 < 0.0 == 0) {
      pvVar4 = (void *)FUN_004345e0();
      iVar3 = FUN_00435d10(pvVar4);
    }
  }
LAB_0066b751:
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


//// FUNCTION FUN_0066b760 @ 0066b760 ////

int FUN_0066b760(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint3 extraout_var;
  undefined2 uVar5;
  void *pvVar4;
  
  iVar3 = FUN_004345e0();
  cVar2 = FUN_00433af0(iVar3);
  if (cVar2 != '\0') {
    return (uint)extraout_var << 8;
  }
  iVar3 = FUN_004345e0();
  FUN_004346a0(iVar3);
  iVar3 = FUN_004345e0();
  if (*(char *)(iVar3 + 0x35a) == '\0') {
    iVar3 = FUN_004345e0();
    if (*(char *)(iVar3 + 0x35b) == '\0') goto LAB_0066b811;
  }
  iVar3 = DAT_0104daa0;
  fVar1 = *(float *)(DAT_0104daa0 + 0x778);
  *(float *)(DAT_0104daa0 + 0x778) = *(float *)(DAT_0104daa0 + 0x778) - 0.1;
  uVar5 = (undefined2)((uint)iVar3 >> 0x10);
  if (*(float *)(DAT_0104daa0 + 0x778) < 0.0) {
    *(undefined4 *)(DAT_0104daa0 + 0x778) = 0;
  }
  iVar3 = CONCAT22(uVar5,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 0.0) << 0xe);
  if (fVar1 < 0.0 == 0 && (fVar1 == 0.0) == 0) {
    fVar1 = *(float *)(DAT_0104daa0 + 0x778);
    iVar3 = CONCAT22(uVar5,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe);
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      pvVar4 = (void *)FUN_004345e0();
      iVar3 = FUN_00436a30(pvVar4);
    }
  }
LAB_0066b811:
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


//// FUNCTION FUN_0066b820 @ 0066b820 ////

undefined4 FUN_0066b820(void)

{
  if (0.5 <= *(float *)(DAT_0104daa0 + 0x778)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0066b850 @ 0066b850 ////

void __fastcall FUN_0066b850(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  void *this;
  int iVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  float local_4;
  
  this = (void *)FUN_00ace790(DAT_0104da6c,0,&TM::CStaff::RTTI_Type_Descriptor,
                              &TM::CStar::RTTI_Type_Descriptor,0);
  if (*(int *)(param_1 + 0x478) == 0) {
    return;
  }
  if (this == (void *)0x0) {
    return;
  }
  iVar4 = FUN_00434fe0(*(int *)(param_1 + 0x518));
  fVar5 = (float)FUN_00430600(iVar4);
  FUN_0058fb60(this,&local_4,fVar5);
  iVar4 = *(int *)(param_1 + 0x478);
  iVar6 = FUN_00434fe0(*(int *)(param_1 + 0x518));
  fVar5 = (float)FUN_00430600(iVar6);
  FUN_005909c0(this,&stack0xffffffe8,fVar5);
  FUN_006da9b0(iVar4);
  uVar1 = *(undefined4 *)(param_1 + 0x74c);
  *(float *)(param_1 + 0x74c) = local_4;
  piVar2 = *(int **)(param_1 + 0x730);
  *(undefined4 *)(param_1 + 0x750) = uVar1;
  if (piVar2 == (int *)0x0) goto LAB_0066b997;
  local_4 = local_4 - *(float *)(param_1 + 0x750);
  if (local_4 < -0.25 == (local_4 == -0.25)) {
    if (local_4 < -0.125 == (local_4 == -0.125)) {
      if ((0.25 <= local_4) || (local_4 < 0.125)) goto LAB_0066b96e;
      (**(code **)(*piVar2 + 0x108))();
    }
    else {
      (**(code **)(*piVar2 + 0x108))();
    }
  }
  else {
LAB_0066b96e:
    (**(code **)(*piVar2 + 0x108))();
  }
  iVar4 = **(int **)(param_1 + 0x730);
  FUN_00407070(&stack0xffffffdc,*(float *)(param_1 + 0x74c));
  (**(code **)(iVar4 + 0x10c))();
LAB_0066b997:
  if ((*(int *)(param_1 + 0x748) != 0) &&
     (bVar3 = FUN_00881aa0(*(void **)(*(int *)(param_1 + 0x748) + 0x358),"threshold01"), bVar3)) {
    uVar7 = FUN_00acd42c();
    FUN_00881c00(*(void **)(*(int *)(param_1 + 0x748) + 0x358),"threshold01",(uint)uVar7);
    (**(code **)(**(int **)(param_1 + 0x748) + 0x108))();
  }
  return;
}


//// FUNCTION FUN_0066ba10 @ 0066ba10 ////

float10 __fastcall FUN_0066ba10(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x7a8) != 0) {
    fVar1 = FUN_0069a3b0(*(int *)(param_1 + 0x7a8));
    return fVar1;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_0066ba30 @ 0066ba30 ////

float10 __fastcall FUN_0066ba30(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x7c0) != 0) {
    fVar1 = FUN_0069a3b0(*(int *)(param_1 + 0x7c0));
    return fVar1;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_0066ba50 @ 0066ba50 ////

void __thiscall FUN_0066ba50(void *this,float param_1)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float local_4;
  
  fVar1 = param_1;
  if ((((param_1 != 0.0) && (DAT_0104d8e8 != 0)) && (*(int *)((int)this + 0x7c0) != 0)) &&
     (*(int *)((int)this + 0x7a8) != 0)) {
    fVar3 = FUN_0042ff00((int)param_1);
    param_1 = (float)fVar3;
    FUN_0042fef0((int)fVar1);
    if (0.0 < param_1) {
      local_4 = param_1;
    }
    else {
      local_4 = 0.0;
    }
    param_1 = local_4;
    pfVar2 = FUN_00407070(&param_1,local_4);
    FUN_0069a3c0(*(void **)((int)this + 0x7c0),*pfVar2);
    pfVar2 = FUN_00407070(&param_1,local_4);
    FUN_0069a3c0(*(void **)((int)this + 0x7a8),*pfVar2);
  }
  return;
}


//// FUNCTION FUN_0066bb00 @ 0066bb00 ////

void __fastcall FUN_0066bb00(int param_1)

{
  int iVar1;
  
  if (0.0 < *(float *)(DAT_0104daa0 + 0x778)) {
    *(undefined4 *)(DAT_0104daa0 + 0x778) = 0;
  }
  iVar1 = FUN_004345e0();
  FUN_004338c0(iVar1);
  *(undefined4 *)(param_1 + 0x76c) = 0x3f000000;
  return;
}


//// FUNCTION FUN_0066bb40 @ 0066bb40 ////

undefined4 __fastcall FUN_0066bb40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x388);
}


//// FUNCTION FUN_0066bb50 @ 0066bb50 ////

void __thiscall FUN_0066bb50(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0x490);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)((int)this + 0x47c) + 4))();
    *(undefined4 *)((int)this + 0x490) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x47c))();
  }
  (**(code **)(*(int *)((int)this + 0x47c) + 4))();
  *(undefined4 *)((int)this + 0x490) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x47c))();
  return;
}


//// FUNCTION FUN_0066bbb0 @ 0066bbb0 ////

void __fastcall FUN_0066bbb0(int param_1)

{
  if (*(int **)(param_1 + 0x620) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0066bbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x620) + 0xc0))();
    return;
  }
  return;
}


//// FUNCTION FUN_0066bcc0 @ 0066bcc0 ////

void __cdecl FUN_0066bcc0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0066bd40 @ 0066bd40 ////

undefined4 FUN_0066bd40(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ace790(param_2,0,&TM::TMBase::RTTI_Type_Descriptor,
                       &TM::WCostumeFiddler::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    return 1;
  }
  uVar2 = FUN_0066b0d0(iVar1);
  return uVar2;
}


//// FUNCTION FUN_0066be40 @ 0066be40 ////

undefined4 * __thiscall FUN_0066be40(void *this,char *param_1,uint param_2,uint param_3)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,param_1,param_2);
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return this;
}


//// FUNCTION FUN_0066be90 @ 0066be90 ////

undefined4 __fastcall FUN_0066be90(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x518) != 0) {
    iVar1 = FUN_00434620(*(int *)(param_1 + 0x518));
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00434620(*(int *)(param_1 + 0x518));
      (**(code **)(*piVar2 + 0x60))(param_1 + 0x494);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x518) + 0x351) = 1;
  }
  uVar3 = FUN_0066afd0();
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0066bf00 @ 0066bf00 ////

undefined4 * __thiscall FUN_0066bf00(void *this,byte param_1)

{
  FUN_0066b070(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION WCostumeFiddler_Tick @ 0066bf20 ////

void __fastcall WCostumeFiddler_Tick(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0xd8))();
  WWindow_Tick(param_1);
  iVar2 = FUN_00435160(param_1[0x146]);
  if (iVar2 != param_1[0x163]) {
    iVar2 = FUN_00435160(param_1[0x146]);
    param_1[0x163] = iVar2;
    param_1[0x164] = 0;
    if (param_1[0x146] != 0) {
      FUN_00435180(param_1[0x146]);
    }
  }
  if (-1 < param_1[0x1d8]) {
    param_1[0x1d8] = param_1[0x1d8] + 1;
  }
  if ((-1 < param_1[0x1d9]) && (iVar2 = param_1[0x1d9] + 1, param_1[0x1d9] = iVar2, 2 < iVar2)) {
    param_1[0x1d9] = -1;
    (**(code **)(*(int *)param_1[0x10c] + 0xc0))(1);
    (**(code **)(*(int *)param_1[0x112] + 0xc0))(1);
  }
  if (((param_1[0x1ac] == 0) || (param_1[0x1b2] == 0)) && (10 < param_1[0x1d8])) {
    bVar1 = FUN_004338b0(param_1[0x146]);
    if (bVar1) {
      FUN_0066b3b0((int)param_1);
      param_1[0x1d8] = -1;
    }
  }
  if ((((uint)((int *)param_1[0x140])[0x86] >> 4 & 1) != 0) && (DAT_0104de5c == 0)) {
    (**(code **)(*(int *)param_1[0x140] + 0x20))(0);
  }
  return;
}


//// FUNCTION FUN_0066c380 @ 0066c380 ////

undefined4 FUN_0066c380(void)

{
  undefined1 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  iVar2 = 0;
  if (DAT_0104d8e8 != 0) {
    iVar2 = FUN_004345e0();
    if (iVar2 != 0) {
      pvVar3 = (void *)FUN_004345e0();
      FUN_00436970(pvVar3);
      iVar2 = **(int **)(DAT_0104daa0 + 1000);
      iVar4 = FUN_004345e0();
      uVar1 = FUN_00433ad0(iVar4);
      (**(code **)(iVar2 + 0x20))(uVar1);
    }
    iVar2 = DAT_0104daa0;
    if ((DAT_0104daa0 != 0) && (*(int **)(DAT_0104daa0 + 0x7d8) != (int *)0x0)) {
      fVar6 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x7d8) + 0x10))();
      if ((float10)380.0 < fVar6) {
        uVar5 = (**(code **)(**(int **)(DAT_0104daa0 + 0x7d8) + 0x78))(0x43be0000);
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      iVar2 = **(int **)(DAT_0104daa0 + 0x7d8);
      fVar6 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x388) + 0x10))();
      iVar2 = (**(code **)(iVar2 + 0x78))((float)fVar6);
    }
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_0066c430 @ 0066c430 ////

uint FUN_0066c430(void *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int *this;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc4310;
  local_c = ExceptionList;
  local_4 = 0;
  if (DAT_0104d8e8 != 0) {
    if (param_3 < 0x15) {
      return DAT_0104d8e8 & 0xffffff00;
    }
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  local_2c = (int *)local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy((char *)local_2c,"",0);
  piVar2 = local_2c;
  local_28 = 0;
  *(char *)local_2c = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar5 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      this = (int *)puVar5[2];
      if ((this != (int *)0x0) &&
         (piVar2 = (int *)(**(code **)(*this + 0x204))(), (char)piVar2 != '\0')) {
        piVar3 = (int *)FUN_005773c0((int)this);
        piVar2 = (int *)GetPlayerStudio();
        if (piVar3 == piVar2) {
          iVar4 = FUN_0059c6e0(this,'\0');
          FUN_004015d0(&local_2c,*(char **)(iVar4 + 0x78),*(uint *)(iVar4 + 0x7c));
          piVar2 = (int *)FUN_00401ec0(&local_2c,&param_1);
          if ((char)piVar2 != '\0') {
            iVar4 = FUN_004345e0();
            piVar2 = (int *)FUN_00434620(iVar4);
            if (this != piVar2) {
              if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
                _free(local_2c);
              }
              if (param_3 < 0x15) {
                ExceptionList = local_c;
                return CONCAT31((int3)(local_24 >> 8),1);
              }
                    /* WARNING: Subroutine does not return */
              _free(param_1);
            }
          }
        }
      }
      puVar1 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (param_3 < 0x15) {
    ExceptionList = local_c;
    return (uint)piVar2 & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_0066c5d0 @ 0066c5d0 ////

int * __fastcall FUN_0066c5d0(undefined2 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  void *this;
  float10 fVar6;
  int *piVar7;
  undefined2 *local_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined2 auStack_2c [2];
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc4349;
  pvStack_c = ExceptionList;
  puVar3 = *(undefined4 **)(param_1 + 0x23c);
  ExceptionList = &pvStack_c;
  local_38 = param_1;
  if (puVar3 != (undefined4 *)0x0) {
    piVar2 = puVar3 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar3)();
    }
    (**(code **)(*(int *)(param_1 + 0x232) + 4))();
    *(undefined4 *)(param_1 + 0x23c) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x232))();
  }
  puStack_34 = operator_new(0x344);
  uStack_4 = 0;
  if (puStack_34 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007432f0(puStack_34);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x78))();
  (**(code **)(*piVar2 + 0x7c))();
  (**(code **)(*piVar2 + 0x50))();
  puVar3 = operator_new(0x3fc);
  uStack_10 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar3);
  }
  local_38 = auStack_2c;
  auStack_2c[0] = 0;
  puStack_34 = (undefined4 *)0x0;
  uStack_30 = 10;
  uVar5 = FUN_00ace02d(L"<nobr><t1><translate>LEAGUETABLE_IMAGE</translate>:</t1></nobr>");
  FUN_004036d0(&local_38,L"<nobr><t1><translate>LEAGUETABLE_IMAGE</translate>:</t1></nobr>",uVar5);
  uStack_10 = 2;
  (**(code **)(*piVar4 + 0x54))();
  (**(code **)(*piVar4 + 0x84))();
  (**(code **)(*piVar4 + 0x5c))();
  (**(code **)(*piVar4 + 100))();
  this = operator_new(0x448);
  uStack_30._0_1_ = 3;
  if (this == (void *)0x0) {
    puStack_28 = (undefined4 *)0x0;
  }
  else {
    puStack_28 = FUN_006dc970(this,uStack_24,'\0');
  }
  uStack_30 = CONCAT31(uStack_30._1_3_,2);
  (**(code **)(*(int *)(param_1 + 0x232) + 4))();
  *(undefined4 **)(param_1 + 0x23c) = puStack_28;
  (*(code *)**(undefined4 **)(param_1 + 0x232))();
  (**(code **)(**(int **)(param_1 + 0x23c) + 0x84))();
  piVar7 = *(int **)(param_1 + 0x23c);
  iVar1 = *piVar7;
  fVar6 = (float10)(**(code **)(iVar1 + 0x10))();
  fVar6 = (float10)(**(code **)(*piVar7 + 0x10))((float)(fVar6 * (float10)0.5));
  (**(code **)(iVar1 + 0x74))((float)(fVar6 * (float10)0.5));
  FUN_006dac80((int *)piVar2[0x11e],0.5);
  piVar7 = piVar2;
  (**(code **)(*(int *)piVar2[0x11e] + 0x5c))(1,piVar2,0);
  iVar1 = *(int *)piVar2[0x11e];
  fVar6 = (float10)(**(code **)(*piVar4 + 0x14))();
  (**(code **)(iVar1 + 100))(1,piVar2);
  (**(code **)(*piVar2 + 0xc))(piVar4,1);
  (**(code **)(*piVar2 + 0xc))(piVar2[0x11e],1);
  (**(code **)(*piVar2 + 0x84))(0x41200000);
  if (&lpType_0000000a < piVar7) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(float)fVar6);
  }
  ExceptionList = piVar2;
  return piVar2;
}


//// FUNCTION FUN_0066c850 @ 0066c850 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_0066c850(undefined1 **param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  char *_Dest;
  uint unaff_EBX;
  bool bVar12;
  float10 fVar13;
  char *pcStack_1b8;
  undefined1 *puStack_1b4;
  float fVar14;
  int *_Memory;
  int *piVar15;
  undefined1 **_Dest_00;
  undefined1 *puStack_13c;
  undefined1 **local_114;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined1 *puStack_108;
  void **ppvStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  void *pvStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined1 *puStack_d8;
  void *pvStack_d4;
  char **ppcStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  char *pcStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  char acStack_b8 [8];
  void *pvStack_b0;
  undefined1 local_ac [4];
  uint uStack_a8;
  wchar_t *pwStack_90;
  size_t sStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined2 auStack_78 [14];
  undefined4 uStack_5c;
  undefined4 uStack_3c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc4486;
  pvStack_c = ExceptionList;
  puStack_13c = local_ac;
  ExceptionList = &pvStack_c;
  local_114 = param_1;
  iVar2 = (**(code **)(*(int *)param_1[0x100] + 0x58))();
  if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_b0);
  }
  if (*(int *)(iVar2 + 4) == 0) {
    pwStack_90 = (wchar_t *)&uStack_84;
    uStack_84 = (undefined2 *)((uint)uStack_84._2_2_ << 0x10);
    sStack_8c = 0;
    uStack_88 = 10;
    uVar3 = FUN_00ace02d(L"COSTUMEFIDDLER_NONAMESTAR");
    uVar3 = FUN_004036d0(&pwStack_90,L"COSTUMEFIDDLER_NONAMESTAR",uVar3);
    puStack_8 = (undefined1 *)0x0;
    if (sStack_8c != 0) {
      ppcStack_d0 = &pcStack_c4;
      pcStack_c4 = (char *)((uint)pcStack_c4 & 0xffff0000);
      uStack_cc = 0;
      uStack_c8 = 10;
      puStack_8._0_1_ = 1;
      puStack_8._1_3_ = 0;
      fVar13 = (float10)(**(code **)(*DAT_0104daa0 + 0x10))();
      sVar4 = FUN_00ace02d(L"<table><tr><td align=center width =");
      FUN_0040cae0(&ppcStack_d0,L"<table><tr><td align=center width =",sVar4);
      FUN_0043bd80(&ppcStack_d0,(float)(fVar13 * (float10)0.33333334));
      sVar4 = FUN_00ace02d(L"><t2><translate>");
      FUN_0040cae0(&ppcStack_d0,L"><t2><translate>",sVar4);
      FUN_0040cae0(&ppcStack_d0,pwStack_90,sStack_8c);
      sVar4 = FUN_00ace02d(L"</translate></t2></td></tr>");
      FUN_0040cae0(&ppcStack_d0,L"</translate></t2></td></tr>",sVar4);
      puVar5 = operator_new(0x344);
      puStack_8._0_1_ = 2;
      if (puVar5 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = FUN_007432f0(puVar5);
      }
      puStack_8._0_1_ = 1;
      pvVar7 = operator_new(0x288);
      if (pvVar7 == (void *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        local_114 = &puStack_108;
        puStack_108 = (undefined1 *)((uint)puStack_108 & 0xffffff00);
        uStack_110 = 0;
        uStack_10c = 0x14;
        _strncpy((char *)local_114,"ui/fullsrn_box.dds",0x12);
        uStack_110 = 0x12;
        *(char *)((int)local_114 + 0x12) = '\0';
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
        unaff_EBX = 1;
        puVar5 = FUN_005e8fd0(pvVar7,&local_114);
      }
      puStack_8 = (undefined1 *)0x1;
      if (((unaff_EBX & 1) != 0) && (0x14 < uStack_10c)) {
                    /* WARNING: Subroutine does not return */
        _free(local_114);
      }
      puVar5[0x9c] = 0x41400000;
      puVar5[0x9d] = 0x41400000;
      puVar5[0x9b] = 0x42000000;
      puVar5[0x9e] = 0x41c00000;
      puVar5[0x9f] = 0x41c00000;
      (**(code **)(*piVar6 + 0xa0))();
      (**(code **)(*piVar6 + 0x78))();
      puVar8 = operator_new(0x3fc);
      pvStack_10._0_1_ = 6;
      if (puVar8 == (undefined4 *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = FUN_00833290(puVar8);
      }
      _Dest_00 = &puStack_d8;
      pvStack_10 = (void *)CONCAT31(pvStack_10._1_3_,1);
      (**(code **)(*piVar9 + 0x54))();
      (**(code **)(*piVar9 + 0x78))();
      (**(code **)(*piVar9 + 0x84))();
      (**(code **)(*piVar9 + 100))();
      (**(code **)(*piVar9 + 0x5c))();
      (**(code **)(*piVar9 + 0x14))();
      (**(code **)(*piVar9 + 0x30))();
      (**(code **)(*piVar6 + 0xc))();
      (**(code **)(*piVar9 + 0x14))();
      if ((DAT_0104daa8 & 1) == 0) {
        _DAT_0104daa4 = 0;
        DAT_0104daa8 = DAT_0104daa8 | 1;
      }
      pvVar7 = operator_new(0x420);
      bVar12 = pvVar7 == (void *)0x0;
      if (bVar12) {
        piVar9 = (int *)0x0;
      }
      else {
        uStack_84 = auStack_78;
        auStack_78[0] = 0;
        uStack_80 = 0;
        uStack_7c = 10;
        uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
        FUN_004036d0(&uStack_84,(wchar_t *)&lpCaption_00d16918,uVar3);
        _Dest_00 = &puStack_13c;
        puStack_13c = (undefined1 *)((uint)puStack_13c & 0xffffff00);
        puVar5 = (undefined4 *)&DAT_00000014;
        _strncpy((char *)_Dest_00,"button_quit.",0xc);
        *(char *)(_Dest_00 + 3) = '\0';
        puStack_108 = &stack0xfffffe80;
        uStack_3c = 9;
        piVar9 = FUN_0069fb10(pvVar7,(int *)&stack0xfffffeb8,&uStack_84,0x42800000,0x42800000,0,0,
                              0x3f800000,0x3f800000);
      }
      if ((!bVar12) && (&DAT_00000014 < puVar5)) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest_00);
      }
      uStack_3c = 1;
      if ((!bVar12) && (10 < uStack_7c)) {
                    /* WARNING: Subroutine does not return */
        _free(uStack_84);
      }
      uVar3 = 0;
      piVar15 = (int *)0x2;
      (**(code **)(*piVar9 + 0x60))();
      (**(code **)(*piVar9 + 100))();
      (**(code **)(*piVar6 + 0xc))();
      pvVar7 = operator_new(0x420);
      if (pvVar7 == (void *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        ppvStack_104 = &pvStack_f8;
        pvStack_f8 = (void *)((uint)pvStack_f8 & 0xffff0000);
        uStack_100 = 0;
        uStack_fc = 10;
        uVar10 = FUN_00ace02d((short *)&lpCaption_00d16918);
        FUN_004036d0(&ppvStack_104,(wchar_t *)&lpCaption_00d16918,uVar10);
        pcStack_c4 = acStack_b8;
        uVar3 = uVar3 | 8;
        acStack_b8[0] = '\0';
        uStack_c0 = 0;
        uStack_bc = 0x14;
        _strncpy(pcStack_c4,"button_tick.",0xc);
        uStack_c0 = 0xc;
        pcStack_c4[0xc] = '\0';
        uVar3 = uVar3 | 0x10;
        uStack_5c = 0xe;
        puStack_1b4 = (undefined1 *)0x66ce40;
        piVar11 = FUN_0069fb10(pvVar7,(int *)&pcStack_c4,&ppvStack_104,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
      }
      if (((uVar3 & 0x10) != 0) && (uVar3 = uVar3 & 0xffffffef, 0x14 < uStack_bc)) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_c4);
      }
      uStack_5c = 1;
      if (((uVar3 & 8) != 0) && (10 < uStack_fc)) {
                    /* WARNING: Subroutine does not return */
        _free(ppvStack_104);
      }
      _Memory = piVar6;
      (**(code **)(*piVar11 + 0x5c))();
      (**(code **)(*piVar11 + 100))();
      puStack_1b4 = &LAB_005f37f0;
      pcStack_1b8 = (char *)0x5;
      (**(code **)(*piVar11 + 0x18))();
      (**(code **)(*piVar6 + 0xc))(piVar11,1);
      (**(code **)(*piVar6 + 0x8c))(0);
      do {
        cVar1 = (**(code **)(*piVar15 + 0x50))(1);
      } while (cVar1 != '\0');
      iVar2 = *piVar6;
      fVar13 = (float10)(**(code **)(*piVar15 + 0x14))();
      fVar14 = (float)(fVar13 * (float10)0.5);
      fVar13 = (float10)(**(code **)(*piVar6 + 0x14))();
      (**(code **)(iVar2 + 100))(1,piVar15,(float)((float10)fVar14 - fVar13 * (float10)0.5));
      pvVar7 = (void *)*piVar6;
      fVar13 = (float10)(**(code **)(*piVar15 + 0x10))();
      fVar14 = (float)(fVar13 * (float10)0.5);
      fVar13 = (float10)(**(code **)(*piVar6 + 0x10))();
      (**(code **)((int)pvVar7 + 0x5c))(1,piVar15,(float)((float10)fVar14 - fVar13 * (float10)0.5));
      _Dest = _malloc(0x40);
      _strncpy(_Dest,"COSTUMEFIDDLER_NONAMESTAR_CANCEL",0x20);
      uVar3 = 0x20;
      _Dest[0x20] = '\0';
      uStack_a8._0_1_ = 0x11;
      puVar5 = FUN_009b5030(&ppcStack_d0,(undefined4 *)&stack0xfffffe6c);
      uStack_a8 = CONCAT31(uStack_a8._1_3_,0x12);
      (**(code **)(*piVar9 + 0x90))(puVar5);
      if (10 < uStack_cc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_d4);
      }
      local_ac[0] = 1;
      if (0x14 < uVar3) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      piVar11 = piVar6;
      (**(code **)(*piVar9 + 0x18))(0,FUN_0071b530,piVar6,"COSTUMEFIDDLER_NONAMESTAR_CANCEL");
      (**(code **)(*piVar9 + 0x18))(5,&LAB_005f37f0,0,"COSTUMEFIDDLER_NONAMESTAR_CANCEL");
      pcStack_1b8 = &stack0xfffffe54;
      puStack_1b4 = (undefined1 *)0x0;
      pcStack_1b8 = _malloc(0x40);
      _strncpy(pcStack_1b8,"COSTUMEFIDDLER_NONAMESTAR_CONFIRM",0x21);
      puStack_1b4 = (undefined1 *)0x21;
      pcStack_1b8[0x21] = '\0';
      uStack_cc._0_1_ = 0x13;
      puVar5 = FUN_009b5030(&uStack_f4,&pcStack_1b8);
      uStack_cc = CONCAT31(uStack_cc._1_3_,0x14);
      (**(code **)(*piVar11 + 0x90))(puVar5);
      if (10 < uStack_f0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_f8);
      }
      ppcStack_d0 = (char **)CONCAT31(ppcStack_d0._1_3_,1);
      if (0x14 < puStack_1b4) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar7);
      }
      (**(code **)(*piVar11 + 0x18))(0,&LAB_0066bd80,DAT_0104daa0,"COSTUMESCREEN_SAVENONAME");
      (**(code **)(*piVar11 + 0x18))(5,&LAB_005f37f0,0,"COSTUMESCREEN_SAVENONAMEMOUSEOVER");
      FUN_0073e8d0(piVar11,0);
      (**(code **)(*piVar15 + 0xac))(piVar6);
      uVar3 = (**(code **)(*piVar15 + 0xc))(piVar6,1);
      if (10 < uStack_c8) {
                    /* WARNING: Subroutine does not return */
        _free(ppcStack_d0);
      }
    }
    if (10 < uStack_88) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_90);
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    uVar3 = CONCAT31((int3)(uStack_a8 >> 8),1);
  }
  ExceptionList = pvStack_10;
  return uVar3;
}


//// FUNCTION FUN_0066d1a0 @ 0066d1a0 ////

/* WARNING: Removing unreachable block (ram,0x0066d413) */

undefined4 __fastcall FUN_0066d1a0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *this;
  undefined4 uVar4;
  float10 fVar5;
  void *_Memory;
  float fVar6;
  uint uVar7;
  undefined4 auStack_4c [5];
  void *pvStack_38;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc44c7;
  local_c = ExceptionList;
  uVar2 = 0;
  if (DAT_0104daa0 != (int *)0x0) {
    ExceptionList = &local_c;
    iVar1 = FUN_004345e0();
    uVar2 = 0;
    if (iVar1 != 0) {
      fVar6 = (float)DAT_0104daa0[0x1de];
      uVar2 = CONCAT22((short)((uint)DAT_0104daa0 >> 0x10),
                       (ushort)(fVar6 < 0.0) << 8 | (ushort)NAN(fVar6) << 10 |
                       (ushort)(fVar6 == 0.0) << 0xe);
      if ((((fVar6 == 0.0) && (uVar2 = FUN_004345e0(), *(char *)(uVar2 + 0x35a) != '\0')) &&
          (uVar2 = *(uint *)(param_1 + 0x7f0), uVar2 == 0)) &&
         (uVar2 = (**(code **)(*DAT_0104daa0 + 0x34))(), (char)uVar2 != '\0')) {
        puVar3 = operator_new(0x3fc);
        uStack_4 = 0;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_00833290(puVar3);
        }
        uStack_4 = 0xffffffff;
        FUN_004427a0((void *)(param_1 + 0x7dc),(int)puVar3);
        puVar3 = FUN_0043bdc0(apvStack_2c,L"<t6><table><tr><td align=center width=400>",
                              DAT_0104daa0 + 0x1fd);
        FUN_0043be60(auStack_4c,puVar3,L"</td></tr></table></t6>");
        uStack_4 = 1;
        if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        (**(code **)(**(int **)(param_1 + 0x7f0) + 0x54))();
        uVar7 = 0;
        (**(code **)(**(int **)(param_1 + 0x7f0) + 0x84))();
        _Memory = (void *)DAT_0104daa0[0xe2];
        uVar2 = 1;
        (**(code **)(**(int **)(param_1 + 0x7f0) + 0x5c))();
        fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x7f0) + 0x14))();
        fVar5 = (float10)DAT_0104cce4 - fVar5 * (float10)0.5;
        fVar6 = (float)fVar5;
        if (fVar5 < (float10)0.0) {
          fVar6 = 0.0;
        }
        (**(code **)(**(int **)(param_1 + 0x7f0) + 100))(1,DAT_0104daa0[0xe2],fVar6);
        this = operator_new(0x288);
        if (this == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          FUN_00401de0(&stack0xffffff74,"ui/gridbutton_starmak.dds",0xffffffff);
          uStack_24 = CONCAT31(uStack_24._1_3_,3);
          uVar2 = 1;
          puVar3 = FUN_005e8fd0(this,(undefined4 *)&stack0xffffff74);
        }
        uStack_24 = 1;
        if (((uVar2 & 1) != 0) && (0x14 < uVar7)) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        puVar3[0x9b] = 0x42000000;
        puVar3[0x9c] = 0x41400000;
        puVar3[0x9d] = 0x41400000;
        puVar3[0x9e] = 0x41400000;
        puVar3[0x9f] = 0x41c00000;
        (**(code **)(**(int **)(param_1 + 0x7f0) + 0xa0))(puVar3);
        uVar4 = (**(code **)(*(int *)DAT_0104daa0[0xe2] + 0xc))(*(undefined4 *)(param_1 + 0x7f0),1);
        ExceptionList = pvStack_38;
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
    }
  }
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_0066d4e0 @ 0066d4e0 ////

void __fastcall FUN_0066d4e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d35aac;
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


//// FUNCTION FUN_0066d5f0 @ 0066d5f0 ////

void __thiscall FUN_0066d5f0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d35abc;
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


//// FUNCTION FUN_0066d640 @ 0066d640 ////

void __fastcall FUN_0066d640(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d35abc;
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


//// FUNCTION FUN_0066d6e0 @ 0066d6e0 ////

void __fastcall FUN_0066d6e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d35acc;
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


//// FUNCTION FUN_0066d780 @ 0066d780 ////

void __fastcall FUN_0066d780(int param_1)

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


//// FUNCTION FUN_0066d7b0 @ 0066d7b0 ////

void __fastcall FUN_0066d7b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d35adc;
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


//// FUNCTION FUN_0066d820 @ 0066d820 ////

void __fastcall FUN_0066d820(int param_1)

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


//// FUNCTION FUN_0066d850 @ 0066d850 ////

void __fastcall FUN_0066d850(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d35aec;
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


//// FUNCTION FUN_0066d8a0 @ 0066d8a0 ////

void __thiscall FUN_0066d8a0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d2d100;
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


//// FUNCTION FUN_0066d900 @ 0066d900 ////

void __fastcall FUN_0066d900(int param_1)

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


//// FUNCTION FUN_0066d930 @ 0066d930 ////

void * FUN_0066d930(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0066da40 @ 0066da40 ////

undefined4 FUN_0066da40(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0066c850(DAT_0104daa0);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar1 = FUN_0066afd0();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_0066da70 @ 0066da70 ////

void __fastcall FUN_0066da70(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *unaff_ESI;
  void *in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  uint in_stack_ffffffd0;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc44eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006839e0(*(void **)(param_1 + 0x3a0),(undefined4 *)&stack0xffffffc8);
  uVar1 = FUN_0066c430(in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0);
  if ((char)uVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x638) + 0x20))();
    (**(code **)(**(int **)(param_1 + 0x6e0) + 0xa0))();
    ExceptionList = pvStack_14;
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x638) + 0x20))();
  puVar2 = operator_new(0x50);
  puStack_8 = (undefined1 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_005e4870(puVar2);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x6e0) + 0xa0))();
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x6e0) + 0xa4))();
  (**(code **)(*piVar3 + 0xc))();
  ExceptionList = unaff_ESI;
  return;
}


//// FUNCTION FUN_0066db60 @ 0066db60 ////

void __fastcall FUN_0066db60(int param_1)

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


//// FUNCTION FUN_0066dbf0 @ 0066dbf0 ////

undefined4 * FUN_0066dbf0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION MinorWindow_Destructor @ 0066dc70 ////

void __fastcall MinorWindow_Destructor(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc478c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d35b14;
  param_1[0x14] = &PTR_LAB_00d35afc;
  bVar4 = 1;
  iVar2 = 0;
  local_4 = 0x2e;
  puVar3 = param_1;
  pvVar1 = (void *)FUN_004f3b20();
  FUN_004f9b70(pvVar1,iVar2,(int)puVar3,bVar4);
  param_1[0x1de] = 0;
  pvVar1 = *(void **)(param_1[0x12d] + 4);
  if (pvVar1 != (void *)0x0) {
    FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x12d]);
}


//// FUNCTION FUN_0066f050 @ 0066f050 ////

void __fastcall FUN_0066f050(int param_1)

{
  int iVar1;
  void *this;
  float fVar2;
  float *pfVar3;
  undefined4 local_30;
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc47a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = (void *)FUN_00ace790(DAT_0104da6c,0,&TM::CStaff::RTTI_Type_Descriptor,
                              &TM::CStar::RTTI_Type_Descriptor,0);
  if (((*(int *)(param_1 + 0x748) == 0) || (*(int *)(param_1 + 0x518) == 0)) ||
     (this == (void *)0x0)) goto LAB_0066f1c2;
  FUN_006839e0(*(void **)(param_1 + 0x3a0),local_2c);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0x754);
  fVar2 = (float)FUN_00959a40(local_2c);
  pfVar3 = (float *)FUN_0058fb60(this,&local_30,fVar2);
  fVar2 = *pfVar3;
  *(float *)(param_1 + 0x754) = fVar2;
  fVar2 = fVar2 - *(float *)(param_1 + 0x758);
  if (fVar2 < -0.25 == (fVar2 == -0.25)) {
    if (fVar2 < -0.125 == (fVar2 == -0.125)) {
      if ((0.25 <= fVar2) || (fVar2 < 0.125)) goto LAB_0066f173;
      (**(code **)(**(int **)(param_1 + 0x748) + 0x108))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x748) + 0x108))();
    }
  }
  else {
LAB_0066f173:
    (**(code **)(**(int **)(param_1 + 0x748) + 0x108))();
  }
  iVar1 = **(int **)(param_1 + 0x748);
  FUN_00407070(&stack0xffffffb0,*(float *)(param_1 + 0x754));
  (**(code **)(iVar1 + 0x10c))();
  local_4 = 0xffffffff;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
LAB_0066f1c2:
  FUN_0066da70(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0066f1e0 @ 0066f1e0 ////

void FUN_0066f1e0(void)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  size_t sVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined2 **ppuVar7;
  float fVar8;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc47c8;
  local_c = ExceptionList;
  if ((DAT_0104daa0 != 0) && (*(int *)(DAT_0104daa0 + 0x680) != 0)) {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4 = 0;
    ExceptionList = &local_c;
    bVar1 = FUN_00430950((undefined4 *)(DAT_0104daa0 + 0x52c),"category_custom");
    if (bVar1) {
      piVar2 = (int *)FUN_00683520(*(int *)(DAT_0104daa0 + 0x3a0));
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x10))(local_2c);
      sVar4 = FUN_00ace02d(L"<h2><nobr>");
      FUN_0040cae0(&local_4c,L"<h2><nobr>",sVar4);
      FUN_0040cae0(&local_4c,(wchar_t *)*puVar3,puVar3[1]);
      sVar4 = FUN_00ace02d(L"</nobr></h2>");
      FUN_0040cae0(&local_4c,L"</nobr></h2>",sVar4);
    }
    else {
      puVar3 = FUN_006839b0(*(void **)(DAT_0104daa0 + 0x3a0),local_2c);
      sVar4 = FUN_00ace02d(L"<h2><nobr>");
      FUN_0040cae0(&local_4c,L"<h2><nobr>",sVar4);
      FUN_0040cae0(&local_4c,(wchar_t *)*puVar3,puVar3[1]);
      sVar4 = FUN_00ace02d(L"</nobr></h2>");
      FUN_0040cae0(&local_4c,L"</nobr></h2>",sVar4);
    }
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    ppuVar7 = &local_4c;
    (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x54))(ppuVar7);
    uVar6 = 0;
    (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x84))(0);
    fVar5 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x10))();
    fVar8 = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x5f0) + 0x10))(uVar6,ppuVar7,fVar8);
    (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x5c))
              (1,*(undefined4 *)(DAT_0104daa0 + 0x5f0),
               (float)(fVar5 * (float10)0.5 - (float10)fVar8 * (float10)0.5));
    FUN_0066f050(DAT_0104daa0);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0066f3f0 @ 0066f3f0 ////

undefined4 * __thiscall FUN_0066f3f0(void *this,byte param_1)

{
  MinorWindow_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0066f410 @ 0066f410 ////

undefined4 __fastcall FUN_0066f410(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  size_t sVar4;
  float10 fVar5;
  float10 fVar6;
  byte *pbVar7;
  undefined2 *local_74;
  undefined4 local_70;
  uint local_6c;
  undefined2 local_68 [10];
  void *local_54 [2];
  uint local_4c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc47e8;
  local_c = ExceptionList;
  local_6c = 0;
  if (*(int *)(param_1 + 0x3a0) != 0) {
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_2c = 0xffffffff;
    ExceptionList = &local_c;
    local_30 = FUN_009b01a0("UI_COSTUME_SELECTION");
    pbVar7 = (byte *)&local_34;
    FUN_004f3b20();
    FUN_004f32c0(pbVar7);
    FUN_00683530(*(int *)(param_1 + 0x3a0));
    local_6c = DAT_0104daa0;
    if (*(int *)(DAT_0104daa0 + 0x680) != 0) {
      local_74 = local_68;
      local_68[0] = 0;
      local_70 = 0;
      local_6c = 10;
      local_4 = 0;
      bVar1 = FUN_00430950((undefined4 *)(DAT_0104daa0 + 0x52c),"category_custom");
      if (bVar1) {
        piVar2 = (int *)FUN_00683520((int)*(void **)(param_1 + 0x3a0));
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x10))(local_54);
        sVar4 = FUN_00ace02d(L"<h2><nobr>");
        FUN_0040cae0(&local_74,L"<h2><nobr>",sVar4);
        FUN_0040cae0(&local_74,(wchar_t *)*puVar3,puVar3[1]);
        sVar4 = FUN_00ace02d(L"</nobr></h2>");
        FUN_0040cae0(&local_74,L"</nobr></h2>",sVar4);
      }
      else {
        puVar3 = FUN_006839b0(*(void **)(param_1 + 0x3a0),local_54);
        sVar4 = FUN_00ace02d(L"<h2><nobr>");
        FUN_0040cae0(&local_74,L"<h2><nobr>",sVar4);
        FUN_0040cae0(&local_74,(wchar_t *)*puVar3,puVar3[1]);
        sVar4 = FUN_00ace02d(L"</nobr></h2>");
        FUN_0040cae0(&local_74,L"</nobr></h2>",sVar4);
      }
      if (10 < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_54[0]);
      }
      (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x54))(&local_74);
      (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x84))(0);
      fVar5 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x10))();
      fVar6 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x5f0) + 0x10))();
      (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x5c))
                (1,*(undefined4 *)(DAT_0104daa0 + 0x5f0),
                 (float)(fVar6 * (float10)0.5 - (float10)(float)fVar5 * (float10)0.5));
      FUN_0066f050(DAT_0104daa0);
      if (10 < local_6c) {
                    /* WARNING: Subroutine does not return */
        _free(local_74);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0x708) = 0;
  ExceptionList = local_c;
  return CONCAT31((int3)(local_6c >> 8),1);
}


//// FUNCTION FUN_0066f690 @ 0066f690 ////

undefined4 __fastcall FUN_0066f690(int param_1,undefined4 param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 local_28 [40];
  
  uVar4 = FUN_00990ae0(param_1,param_2);
  iVar1 = (int)uVar4;
  if (200 < (uint)(iVar1 - *(int *)(param_1 + 0x700))) {
    *(int *)(param_1 + 0x6fc) = iVar1;
  }
  *(int *)(param_1 + 0x700) = iVar1;
  if ((300 < (uint)(iVar1 - *(int *)(param_1 + 0x6fc))) && (*(int *)(param_1 + 0x3a0) != 0)) {
    pbVar2 = (byte *)FUN_0041c9c0(local_28,"UI_COSTUME_SELECTION");
    FUN_004f3b20();
    FUN_004f32c0(pbVar2);
    FUN_00683530(*(int *)(param_1 + 0x3a0));
  }
  uVar3 = FUN_0066f050(DAT_0104daa0);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0066f710 @ 0066f710 ////

undefined4 __fastcall FUN_0066f710(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  size_t sVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined2 **ppuVar7;
  byte *pbVar8;
  float fVar9;
  undefined2 *local_74;
  undefined4 local_70;
  uint local_6c;
  undefined2 local_68 [10];
  void *local_54 [2];
  uint local_4c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc4808;
  local_c = ExceptionList;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x3a0) != 0) {
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_2c = 0xffffffff;
    ExceptionList = &local_c;
    local_30 = FUN_009b01a0("UI_COSTUME_SELECTION");
    pbVar8 = (byte *)&local_34;
    FUN_004f3b20();
    FUN_004f32c0(pbVar8);
    FUN_00683540(*(int *)(param_1 + 0x3a0));
    if (*(int *)(DAT_0104daa0 + 0x680) != 0) {
      local_74 = local_68;
      local_68[0] = 0;
      local_70 = 0;
      local_6c = 10;
      local_4 = 0;
      bVar1 = FUN_00430950((undefined4 *)(DAT_0104daa0 + 0x52c),"category_custom");
      if (bVar1) {
        piVar2 = (int *)FUN_00683520((int)*(void **)(param_1 + 0x3a0));
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x10))(local_54);
        sVar4 = FUN_00ace02d(L"<h2><nobr>");
        FUN_0040cae0(&local_74,L"<h2><nobr>",sVar4);
        FUN_0040cae0(&local_74,(wchar_t *)*puVar3,puVar3[1]);
        sVar4 = FUN_00ace02d(L"</nobr></h2>");
        FUN_0040cae0(&local_74,L"</nobr></h2>",sVar4);
      }
      else {
        puVar3 = FUN_006839b0(*(void **)(param_1 + 0x3a0),local_54);
        sVar4 = FUN_00ace02d(L"<h2><nobr>");
        FUN_0040cae0(&local_74,L"<h2><nobr>",sVar4);
        FUN_0040cae0(&local_74,(wchar_t *)*puVar3,puVar3[1]);
        sVar4 = FUN_00ace02d(L"</nobr></h2>");
        FUN_0040cae0(&local_74,L"</nobr></h2>",sVar4);
      }
      if (10 < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_54[0]);
      }
      ppuVar7 = &local_74;
      (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x54))(ppuVar7);
      uVar6 = 0;
      (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x84))(0);
      fVar5 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x10))();
      fVar9 = (float)fVar5;
      fVar5 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x5f0) + 0x10))(uVar6,ppuVar7,fVar9);
      (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x5c))
                (1,*(undefined4 *)(DAT_0104daa0 + 0x5f0),
                 (float)(fVar5 * (float10)0.5 - (float10)fVar9 * (float10)0.5));
      local_4 = 0xffffffff;
      if (10 < local_6c) {
                    /* WARNING: Subroutine does not return */
        _free(local_74);
      }
    }
    uVar6 = FUN_0066f050(DAT_0104daa0);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}


//// FUNCTION FUN_0066f990 @ 0066f990 ////

undefined4 __fastcall FUN_0066f990(int param_1,undefined4 param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 local_28 [40];
  
  uVar4 = FUN_00990ae0(param_1,param_2);
  iVar1 = (int)uVar4;
  if (200 < (uint)(iVar1 - *(int *)(param_1 + 0x708))) {
    *(int *)(param_1 + 0x704) = iVar1;
  }
  *(int *)(param_1 + 0x708) = iVar1;
  if ((300 < (uint)(iVar1 - *(int *)(param_1 + 0x704))) && (*(int *)(param_1 + 0x3a0) != 0)) {
    pbVar2 = (byte *)FUN_0041c9c0(local_28,"UI_COSTUME_SELECTION");
    FUN_004f3b20();
    FUN_004f32c0(pbVar2);
    FUN_00683540(*(int *)(param_1 + 0x3a0));
  }
  uVar3 = FUN_0066f050(DAT_0104daa0);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0066fa10 @ 0066fa10 ////

undefined4 __fastcall FUN_0066fa10(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  undefined3 extraout_var_00;
  
  bVar1 = FUN_00541f60(0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1) && (uVar2 = 0, *(int *)(param_1 + 0x3a0) != 0)) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x620) + 0xc4))();
    if ((char)uVar2 != '\0') {
      iVar3 = FUN_004345e0();
      uVar2 = FUN_00433b00(iVar3);
      if ((char)uVar2 == '\0') {
        iVar3 = FUN_004345e0();
        bVar1 = FUN_004338b0(iVar3);
        uVar2 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1) {
          (**(code **)(**(int **)(param_1 + 0x620) + 0xc0))(0);
          if (*(char *)(param_1 + 0x710) == '\0') {
            uVar2 = *(undefined4 *)(param_1 + 0x358);
            iVar3 = 0;
          }
          else {
            uVar2 = *(undefined4 *)(param_1 + 0x358);
            iVar3 = *(int *)(param_1 + 0x370);
          }
          FUN_006835a0(*(void **)(param_1 + 0x3a0),iVar3,uVar2);
          if (*(undefined4 **)(param_1 + 0x6b0) != (undefined4 *)0x0) {
            FUN_00401440(*(undefined4 **)(param_1 + 0x6b0));
            FUN_0066ab80((void *)(param_1 + 0x69c),0);
          }
          if (*(undefined4 **)(param_1 + 0x6c8) != (undefined4 *)0x0) {
            FUN_00401440(*(undefined4 **)(param_1 + 0x6c8));
            FUN_0066abf0((void *)(param_1 + 0x6b4),0);
          }
          uVar2 = FUN_0066f1e0();
        }
      }
    }
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_0066fdd0 @ 0066fdd0 ////

void FUN_0066fdd0(void)

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
  puStack_8 = &LAB_00cc4828;
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


//// FUNCTION FUN_0066fe90 @ 0066fe90 ////

void __thiscall FUN_0066fe90(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0066fdd0();
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
      _Dst = FUN_0066dbf0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0066d930(param_1,iVar5,param_1 + param_2);
      FUN_0066dbf0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0066ad30(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0066d930(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0066bcc0(param_1,(int)pvVar3,iVar5);
    FUN_0066ad30(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00670080 @ 00670080 ////

void __thiscall FUN_00670080(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (*(int *)((int)this + 8) - iVar1 >> 2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 - iVar1 >> 2;
  }
  FUN_0066fe90(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 4;
  return;
}


//// FUNCTION FUN_006700d0 @ 006700d0 ////

uint FUN_006700d0(void)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  size_t sVar7;
  int *piVar8;
  float10 fVar9;
  wchar_t *pwVar10;
  float fVar11;
  undefined4 local_94;
  undefined2 **local_90;
  uint local_8c;
  uint local_88;
  undefined2 *local_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined2 auStack_78 [4];
  void *local_70 [2];
  uint local_68;
  undefined2 *local_50;
  undefined4 local_4c;
  uint local_48;
  undefined2 local_44 [2];
  void *apvStack_40 [2];
  uint uStack_38;
  int local_30 [6];
  undefined1 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc485b;
  local_c = ExceptionList;
  pvVar3 = ExceptionList;
  if (((*(int *)(DAT_0104daa0 + 0x520) != 0) &&
      (pvVar3 = (void *)(*(int *)(DAT_0104daa0 + 0x524) - *(int *)(DAT_0104daa0 + 0x520) >> 2),
      (void *)0x1 < pvVar3)) && (*(int *)(DAT_0104daa0 + 0x764) == -1)) {
    local_90 = &local_84;
    local_84 = (undefined2 *)((uint)local_84 & 0xffffff00);
    local_8c = 0;
    local_88 = 0x14;
    ExceptionList = &local_c;
    _strncpy((char *)local_90,"",0);
    local_8c = 0;
    *(char *)local_90 = '\0';
    local_94 = *(undefined4 *)(*(int *)(DAT_0104daa0 + 0x524) + -4);
    local_4 = 0;
    if ((*(int *)(DAT_0104daa0 + 0x520) != 0) &&
       (*(int *)(DAT_0104daa0 + 0x524) - *(int *)(DAT_0104daa0 + 0x520) >> 2 != 0)) {
      *(int *)(DAT_0104daa0 + 0x524) = *(int *)(DAT_0104daa0 + 0x524) + -4;
    }
    FUN_00670080((void *)(DAT_0104daa0 + 0x51c),local_30,*(undefined4 **)(DAT_0104daa0 + 0x520),
                 &local_94);
    FUN_004015d0(&local_90,*(char **)**(int **)(DAT_0104daa0 + 0x520),
                 ((undefined4 *)**(int **)(DAT_0104daa0 + 0x520))[1]);
    if (local_8c != 0) {
      FUN_004015d0((void *)(DAT_0104daa0 + 0x52c),(char *)local_90,local_8c);
      FUN_006874e0(*(void **)(DAT_0104daa0 + 0x3a0),&local_90);
      if (*(char *)(**(int **)(DAT_0104daa0 + 0x520) + 0x20) == '\0') {
        uVar4 = FUN_00683660(*(int *)(DAT_0104daa0 + 0x3a0));
        *(undefined4 *)(**(int **)(DAT_0104daa0 + 0x520) + 0x24) = uVar4;
        *(undefined1 *)(**(int **)(DAT_0104daa0 + 0x520) + 0x20) = 1;
      }
      iVar5 = FUN_00683640(*(int *)(DAT_0104daa0 + 0x3a0));
      if ((iVar5 == 0) || (*(int *)(**(int **)(DAT_0104daa0 + 0x520) + 0x24) == 0)) {
        FUN_006700d0();
      }
      local_50 = local_44;
      local_44[0] = 0;
      local_4c = 0;
      local_48 = 10;
      local_4 = CONCAT31(local_4._1_3_,1);
      puVar6 = FUN_009b5030(local_70,(undefined4 *)(DAT_0104daa0 + 0x52c));
      sVar7 = FUN_00ace02d(L"<table><tr><td align=center width=200><h2>");
      FUN_0040cae0(&local_50,L"<table><tr><td align=center width=200><h2>",sVar7);
      FUN_0040cae0(&local_50,(wchar_t *)*puVar6,puVar6[1]);
      sVar7 = FUN_00ace02d(L"</h2></td></tr></table>");
      FUN_0040cae0(&local_50,L"</h2></td></tr></table>",sVar7);
      if (10 < local_68) {
                    /* WARNING: Subroutine does not return */
        _free(local_70[0]);
      }
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x54))(&local_50);
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x78))(0x43480000);
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x8c))(0);
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x50))(1);
      iVar5 = *(int *)(DAT_0104daa0 + 0x418);
      fVar9 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x388) + 0x14))();
      (**(code **)(**(int **)(DAT_0104daa0 + 0x460) + 0x7c))
                ((float)((fVar9 - (float10)*(float *)(iVar5 + 0x9c)) + (float10)8.0));
      if (*(int *)(DAT_0104daa0 + 0x430) != 0) {
        fVar9 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x10))();
        fVar11 = (float)fVar9;
        piVar8 = (int *)FUN_0071b2b0();
        fVar9 = (float10)(**(code **)(*piVar8 + 0x10))();
        (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x5c))
                  (1,*(undefined4 *)(DAT_0104daa0 + 0x388),
                   (float)(fVar9 * (float10)0.6666667 - (float10)fVar11 * (float10)0.5));
        do {
          cVar1 = (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x50))(1);
        } while (cVar1 != '\0');
      }
      if (*(int *)(DAT_0104daa0 + 0x680) != 0) {
        local_84 = auStack_78;
        auStack_78[0] = 0;
        uStack_80 = 0;
        uStack_7c = 10;
        uStack_18 = 2;
        bVar2 = FUN_00430950((undefined4 *)(DAT_0104daa0 + 0x52c),"category_custom");
        if (bVar2) {
          piVar8 = (int *)FUN_00683520(*(int *)(DAT_0104daa0 + 0x3a0));
          puVar6 = (undefined4 *)(**(code **)(*piVar8 + 0x10))(apvStack_40);
          pwVar10 = L"</nobr></h2>";
          pvVar3 = FUN_0040d3c0(&local_84,L"<h2><nobr>");
          pvVar3 = FUN_0040d3a0(pvVar3,puVar6);
          FUN_0040d3c0(pvVar3,pwVar10);
        }
        else {
          puVar6 = FUN_006839b0(*(void **)(DAT_0104daa0 + 0x3a0),apvStack_40);
          pwVar10 = L"</nobr></h2>";
          pvVar3 = FUN_0040d3c0(&local_84,L"<h2><nobr>");
          pvVar3 = FUN_0040d3a0(pvVar3,puVar6);
          FUN_0040d3c0(pvVar3,pwVar10);
        }
        if (10 < uStack_38) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_40[0]);
        }
        FUN_0066f050(DAT_0104daa0);
        (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x54))(&local_84);
        (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x84))(0);
        fVar9 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x10))();
        fVar11 = (float)fVar9;
        fVar9 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x5f0) + 0x10))();
        (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x5c))
                  (1,*(undefined4 *)(DAT_0104daa0 + 0x5f0),
                   (float)(fVar9 * (float10)0.5 - (float10)fVar11 * (float10)0.5));
        uStack_18 = 1;
        if (10 < uStack_7c) {
                    /* WARNING: Subroutine does not return */
          _free(local_84);
        }
      }
      *(undefined4 *)(DAT_0104daa0 + 0x764) = 0;
      (**(code **)(**(int **)(DAT_0104daa0 + 0x430) + 0xc0))(0);
      uVar4 = (**(code **)(**(int **)(DAT_0104daa0 + 0x448) + 0xc0))(0);
      if (10 < local_48) {
                    /* WARNING: Subroutine does not return */
        _free(local_50);
      }
      if (local_88 < 0x15) {
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    pvVar3 = (void *)0x0;
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
  }
  ExceptionList = local_c;
  return (uint)pvVar3 & 0xffffff00;
}


//// FUNCTION FUN_00670630 @ 00670630 ////

void __thiscall FUN_00670630(void *this,byte *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  uint _Count;
  char *_Source;
  char cVar2;
  undefined2 **ppuVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  size_t sVar7;
  int *piVar8;
  void *pvVar9;
  byte *pbVar10;
  bool bVar11;
  byte *in_stack_ffffff20;
  undefined4 in_stack_ffffff24;
  uint in_stack_ffffff28;
  wchar_t *pwVar12;
  undefined1 *local_b0;
  undefined2 **local_ac;
  uint local_a8;
  uint local_a4;
  undefined2 *local_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined2 auStack_94 [4];
  void *local_8c [2];
  uint local_84;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  void **local_4c;
  undefined4 local_48;
  uint local_44;
  void *local_40 [2];
  uint uStack_38;
  undefined1 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc489e;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (((*(int *)(DAT_0104daa0 + 0x520) != 0) &&
      (ExceptionList = &pvStack_c,
      1 < (uint)(*(int *)(DAT_0104daa0 + 0x524) - *(int *)(DAT_0104daa0 + 0x520) >> 2))) &&
     (ExceptionList = &pvStack_c, *(int *)(DAT_0104daa0 + 0x764) == -1)) {
    local_ac = &local_a0;
    local_a0 = (undefined2 *)((uint)local_a0 & 0xffffff00);
    local_a8 = 0;
    local_a4 = 0x14;
    ExceptionList = &pvStack_c;
    _strncpy((char *)local_ac,"",0);
    local_a8 = 0;
    *(byte *)local_ac = 0;
    local_4c = local_40;
    local_40[0] = (void *)((uint)local_40[0] & 0xffffff00);
    local_48 = 0;
    local_44 = 0x14;
    FUN_004015d0(&local_4c,*(char **)((int)this + 0x52c),*(uint *)((int)this + 0x530));
    local_4 = CONCAT31(local_4._1_3_,2);
    ppuVar3 = local_ac;
    pbVar10 = param_1;
    do {
      bVar1 = *(byte *)ppuVar3;
      bVar11 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_0067073c:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto joined_r0x00670743;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)ppuVar3 + 1);
      bVar11 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_0067073c;
      ppuVar3 = (undefined2 **)((int)ppuVar3 + 2);
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
joined_r0x00670743:
    if (iVar4 != 0) {
      local_b0 = *(undefined1 **)(*(int *)(DAT_0104daa0 + 0x524) + -4);
      if ((*(int *)(DAT_0104daa0 + 0x520) != 0) &&
         (*(int *)(DAT_0104daa0 + 0x524) - *(int *)(DAT_0104daa0 + 0x520) >> 2 != 0)) {
        *(int *)(DAT_0104daa0 + 0x524) = *(int *)(DAT_0104daa0 + 0x524) + -4;
      }
      FUN_0066fe90((void *)(DAT_0104daa0 + 0x51c),*(undefined4 **)(DAT_0104daa0 + 0x520),1,&local_b0
                  );
      _Count = ((undefined4 *)**(int **)(DAT_0104daa0 + 0x520))[1];
      _Source = *(char **)**(int **)(DAT_0104daa0 + 0x520);
      if (local_a4 <= _Count) {
        if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac);
        }
        local_a4 = _Count + 0x20 & 0xffffffe0;
        local_ac = _malloc(local_a4);
      }
      _strncpy((char *)local_ac,_Source,_Count);
      *(byte *)((int)local_ac + _Count) = 0;
      ppuVar3 = local_ac;
      pbVar10 = param_1;
      do {
        bVar1 = *(byte *)ppuVar3;
        bVar11 = bVar1 < *pbVar10;
        local_a8 = _Count;
        if (bVar1 != *pbVar10) {
LAB_00670837:
          iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto joined_r0x00670743;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)ppuVar3 + 1);
        bVar11 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_00670837;
        ppuVar3 = (undefined2 **)((int)ppuVar3 + 2);
        pbVar10 = pbVar10 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
      goto joined_r0x00670743;
    }
    if (local_a8 != 0) {
      FUN_004015d0((void *)(DAT_0104daa0 + 0x52c),(char *)local_ac,local_a8);
      FUN_006874e0(*(void **)(DAT_0104daa0 + 0x3a0),&local_ac);
      if (*(char *)(**(int **)(DAT_0104daa0 + 0x520) + 0x20) == '\0') {
        uVar5 = FUN_00683660(*(int *)(DAT_0104daa0 + 0x3a0));
        *(undefined4 *)(**(int **)(DAT_0104daa0 + 0x520) + 0x24) = uVar5;
        *(undefined1 *)(**(int **)(DAT_0104daa0 + 0x520) + 0x20) = 1;
      }
      if (*(int *)(**(int **)(DAT_0104daa0 + 0x520) + 0x24) == 0) {
        local_b0 = &stack0xffffff20;
        FUN_00403de0(&stack0xffffff20,&local_4c);
        FUN_00670630(this,in_stack_ffffff20,in_stack_ffffff24,in_stack_ffffff28);
      }
      local_6c = local_60;
      local_60[0] = 0;
      local_68 = 0;
      local_64 = 10;
      local_4 = CONCAT31(local_4._1_3_,3);
      puVar6 = FUN_009b5030(local_8c,(undefined4 *)(DAT_0104daa0 + 0x52c));
      sVar7 = FUN_00ace02d(L"<table><tr><td align=center width=200><h2>");
      FUN_0040cae0(&local_6c,L"<table><tr><td align=center width=200><h2>",sVar7);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar6,puVar6[1]);
      sVar7 = FUN_00ace02d(L"</h2></td></tr></table>");
      FUN_0040cae0(&local_6c,L"</h2></td></tr></table>",sVar7);
      if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x54))();
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x78))();
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x8c))();
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x50))();
      (**(code **)(**(int **)(DAT_0104daa0 + 0x388) + 0x14))();
      (**(code **)(**(int **)(DAT_0104daa0 + 0x460) + 0x7c))();
      if (*(int *)(DAT_0104daa0 + 0x430) != 0) {
        (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x10))();
        piVar8 = (int *)FUN_0071b2b0();
        (**(code **)(*piVar8 + 0x10))();
        (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x5c))();
        do {
          cVar2 = (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x50))();
        } while (cVar2 != '\0');
      }
      if (*(int *)(DAT_0104daa0 + 0x680) != 0) {
        local_a0 = auStack_94;
        auStack_94[0] = 0;
        uStack_9c = 0;
        uStack_98 = 10;
        uStack_18 = 4;
        bVar11 = FUN_00430950((undefined4 *)(DAT_0104daa0 + 0x52c),"category_custom");
        if (bVar11) {
          piVar8 = (int *)FUN_00683520(*(int *)(DAT_0104daa0 + 0x3a0));
          puVar6 = (undefined4 *)(**(code **)(*piVar8 + 0x10))();
          pwVar12 = L"</nobr></h2>";
          pvVar9 = FUN_0040d3c0(&local_a0,L"<h2><nobr>");
          pvVar9 = FUN_0040d3a0(pvVar9,puVar6);
          FUN_0040d3c0(pvVar9,pwVar12);
        }
        else {
          puVar6 = FUN_006839b0(*(void **)(DAT_0104daa0 + 0x3a0),local_40);
          pwVar12 = L"</nobr></h2>";
          pvVar9 = FUN_0040d3c0(&local_a0,L"<h2><nobr>");
          pvVar9 = FUN_0040d3a0(pvVar9,puVar6);
          FUN_0040d3c0(pvVar9,pwVar12);
        }
        if (10 < uStack_38) {
                    /* WARNING: Subroutine does not return */
          _free(local_40[0]);
        }
        FUN_0066f050(DAT_0104daa0);
        (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x54))();
        (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x84))();
        (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x10))();
        (**(code **)(**(int **)(DAT_0104daa0 + 0x5f0) + 0x10))();
        (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x5c))
                  (1,*(undefined4 *)(DAT_0104daa0 + 0x5f0));
        uStack_18 = 3;
        if (10 < uStack_98) {
                    /* WARNING: Subroutine does not return */
          _free(local_a0);
        }
      }
      *(undefined4 *)(DAT_0104daa0 + 0x764) = 0;
      (**(code **)(**(int **)(DAT_0104daa0 + 0x430) + 0xc0))();
      (**(code **)(**(int **)(DAT_0104daa0 + 0x448) + 0xc0))();
      if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac);
    }
  }
  if (param_3 < 0x15) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00670cc0 @ 00670cc0 ////

void __thiscall FUN_00670cc0(void *this,wchar_t *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  size_t sVar6;
  int *piVar7;
  float10 fVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  float local_94 [2];
  undefined1 *local_70;
  void **local_6c;
  undefined4 local_68;
  uint local_64;
  void *local_60 [2];
  uint uStack_58;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint uStack_38;
  char *local_2c;
  uint local_28;
  void *pvStack_20;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc48d0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00434c50(*(void **)((int)this + 0x3a0),&local_2c);
  local_6c = local_60;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  local_68 = 0;
  local_64 = 0x14;
  local_94[1] = 9.463763e-39;
  _strncpy((char *)local_6c,"category_custom",0xf);
  local_68 = 0xf;
  *(char *)((int)local_6c + 0xf) = '\0';
  local_4._0_1_ = 2;
  FUN_006874e0(*(void **)((int)this + 0x3a0),&local_6c);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  iVar3 = FUN_00434fe0(*(int *)((int)this + 0x518));
  uVar4 = FUN_00430600(iVar3);
  cVar1 = FUN_00960f30(uVar4);
  if (cVar1 != '\0') {
    local_70 = &stack0xffffff60;
    pfVar9 = local_94;
    local_94[0] = (float)((uint)local_94[0] & 0xffff0000);
    uVar10 = 0;
    uVar11 = 10;
    FUN_004036d0(&stack0xffffff60,param_1,param_2);
    FUN_00683df0(*(void **)((int)this + 0x3a0),(wchar_t *)pfVar9,uVar10,uVar11);
  }
  iVar3 = FUN_00683660(*(int *)((int)this + 0x3a0));
  if (iVar3 == 0) {
    FUN_006874e0(*(void **)((int)this + 0x3a0),&local_2c);
    FUN_004015d0((void *)(DAT_0104daa0 + 0x52c),local_2c,local_28);
  }
  else {
    FUN_004015d0((void *)(DAT_0104daa0 + 0x52c),"category_custom",0xf);
    bVar2 = FUN_00430950(&local_2c,"category_custom");
    if (bVar2) {
      bVar2 = FUN_00430950((undefined4 *)**(undefined4 **)((int)this + 0x520),"category_custom");
      if (bVar2) {
        do {
          iVar3 = *(int *)(DAT_0104daa0 + 0x524);
          local_70 = *(undefined1 **)(iVar3 + -4);
          if ((*(int *)(DAT_0104daa0 + 0x520) != 0) &&
             (iVar3 - *(int *)(DAT_0104daa0 + 0x520) >> 2 != 0)) {
            *(int *)(DAT_0104daa0 + 0x524) = iVar3 + -4;
          }
          local_94[1] = 9.4643e-39;
          FUN_0066fe90((void *)(DAT_0104daa0 + 0x51c),*(undefined4 **)(DAT_0104daa0 + 0x520),1,
                       &local_70);
          bVar2 = FUN_00430950((undefined4 *)**(undefined4 **)((int)this + 0x520),"category_custom")
          ;
        } while (bVar2);
      }
      piVar7 = *(int **)((int)this + 0x520);
      uVar4 = FUN_00683660(*(int *)((int)this + 0x3a0));
      *(undefined4 *)(*piVar7 + 0x24) = uVar4;
      *(undefined1 *)(**(int **)((int)this + 0x520) + 0x20) = 1;
    }
  }
  local_4c = &local_40;
  local_40 = (void *)((uint)local_40._2_2_ << 0x10);
  local_48 = 0;
  local_44 = 10;
  local_4 = CONCAT31(local_4._1_3_,3);
  puVar5 = FUN_009b5030(&local_6c,(undefined4 *)(DAT_0104daa0 + 0x52c));
  local_94[1] = 9.464474e-39;
  sVar6 = FUN_00ace02d(L"<table><tr><td align=center width=200><h2>");
  FUN_0040cae0(&local_4c,L"<table><tr><td align=center width=200><h2>",sVar6);
  FUN_0040cae0(&local_4c,(wchar_t *)*puVar5,puVar5[1]);
  sVar6 = FUN_00ace02d(L"</h2></td></tr></table>");
  FUN_0040cae0(&local_4c,L"</h2></td></tr></table>",sVar6);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x54))();
  (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x78))();
  local_94[1] = 9.464677e-39;
  (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x8c))();
  local_94[1] = 1.4013e-45;
  local_94[0] = 9.464705e-39;
  (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x50))();
  iVar3 = *(int *)(DAT_0104daa0 + 0x418);
  local_94[0] = 9.464736e-39;
  fVar8 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x388) + 0x14))();
  local_94[0] = (float)((fVar8 - (float10)*(float *)(iVar3 + 0x9c)) + (float10)8.0);
  (**(code **)(**(int **)(DAT_0104daa0 + 0x460) + 0x7c))();
  if (*(int *)(DAT_0104daa0 + 0x430) != 0) {
    (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x10))();
    piVar7 = (int *)FUN_0071b2b0();
    (**(code **)(*piVar7 + 0x10))();
    (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x5c))();
    do {
      cVar1 = (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x50))();
    } while (cVar1 != '\0');
  }
  FUN_0066f050(DAT_0104daa0);
  if (10 < uStack_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_60[0]);
  }
  if (0x14 < uStack_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if (puStack_8 < (undefined1 *)0xb) {
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_10);
}


//// FUNCTION FUN_006710e0 @ 006710e0 ////

void __thiscall FUN_006710e0(void *this,undefined4 *param_1)

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
  FUN_0066fe90(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00671130 @ 00671130 ////

uint FUN_00671130(void)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  size_t sVar7;
  int *piVar8;
  float10 fVar9;
  wchar_t *pwVar10;
  float fVar11;
  undefined4 local_90;
  undefined2 **local_8c;
  uint local_88;
  uint local_84;
  undefined2 *local_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined2 auStack_74 [4];
  void *local_6c [2];
  uint local_64;
  undefined4 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint uStack_38;
  undefined1 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc48fb;
  local_c = ExceptionList;
  pvVar3 = ExceptionList;
  if (((*(int *)(DAT_0104daa0 + 0x520) != 0) &&
      (pvVar3 = (void *)(*(int *)(DAT_0104daa0 + 0x524) - *(int *)(DAT_0104daa0 + 0x520) >> 2),
      (void *)0x1 < pvVar3)) && (*(int *)(DAT_0104daa0 + 0x764) == -1)) {
    local_8c = &local_80;
    local_80 = (undefined2 *)((uint)local_80 & 0xffffff00);
    local_88 = 0;
    local_84 = 0x14;
    ExceptionList = &local_c;
    _strncpy((char *)local_8c,"",0);
    local_88 = 0;
    *(char *)local_8c = '\0';
    puVar6 = *(undefined4 **)(DAT_0104daa0 + 0x520);
    local_90 = *puVar6;
    piVar8 = (int *)(DAT_0104daa0 + 0x524);
    local_4 = 0;
    _memmove(puVar6,puVar6 + 1,(*piVar8 - (int)(puVar6 + 1) >> 2) << 2);
    *piVar8 = *piVar8 + -4;
    FUN_006710e0((void *)(DAT_0104daa0 + 0x51c),&local_90);
    FUN_004015d0(&local_8c,*(char **)**(int **)(DAT_0104daa0 + 0x520),
                 ((undefined4 *)**(int **)(DAT_0104daa0 + 0x520))[1]);
    if (local_88 != 0) {
      FUN_004015d0((void *)(DAT_0104daa0 + 0x52c),(char *)local_8c,local_88);
      FUN_006874e0(*(void **)(DAT_0104daa0 + 0x3a0),&local_8c);
      if (*(char *)(**(int **)(DAT_0104daa0 + 0x520) + 0x20) == '\0') {
        uVar4 = FUN_00683660(*(int *)(DAT_0104daa0 + 0x3a0));
        *(undefined4 *)(**(int **)(DAT_0104daa0 + 0x520) + 0x24) = uVar4;
        *(undefined1 *)(**(int **)(DAT_0104daa0 + 0x520) + 0x20) = 1;
      }
      iVar5 = FUN_00683640(*(int *)(DAT_0104daa0 + 0x3a0));
      if ((iVar5 == 0) || (*(int *)(**(int **)(DAT_0104daa0 + 0x520) + 0x24) == 0)) {
        FUN_00671130();
      }
      local_4c = &local_40;
      local_40 = (void *)((uint)local_40._2_2_ << 0x10);
      local_48 = 0;
      local_44 = 10;
      local_4 = CONCAT31(local_4._1_3_,1);
      puVar6 = FUN_009b5030(local_6c,(undefined4 *)(DAT_0104daa0 + 0x52c));
      sVar7 = FUN_00ace02d(L"<table><tr><td align=center width=200><h2>");
      FUN_0040cae0(&local_4c,L"<table><tr><td align=center width=200><h2>",sVar7);
      FUN_0040cae0(&local_4c,(wchar_t *)*puVar6,puVar6[1]);
      sVar7 = FUN_00ace02d(L"</h2></td></tr></table>");
      FUN_0040cae0(&local_4c,L"</h2></td></tr></table>",sVar7);
      if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x54))(&local_4c);
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x78))(0x43480000);
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x8c))(0);
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x50))(1);
      iVar5 = *(int *)(DAT_0104daa0 + 0x418);
      fVar9 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x388) + 0x14))();
      (**(code **)(**(int **)(DAT_0104daa0 + 0x460) + 0x7c))
                ((float)((fVar9 - (float10)*(float *)(iVar5 + 0x9c)) + (float10)8.0));
      if (*(int *)(DAT_0104daa0 + 0x430) != 0) {
        fVar9 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x10))();
        fVar11 = (float)fVar9;
        piVar8 = (int *)FUN_0071b2b0();
        fVar9 = (float10)(**(code **)(*piVar8 + 0x10))();
        (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x5c))
                  (1,*(undefined4 *)(DAT_0104daa0 + 0x388),
                   (float)(fVar9 * (float10)0.6666667 - (float10)fVar11 * (float10)0.5));
        do {
          cVar1 = (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x50))(1);
        } while (cVar1 != '\0');
      }
      if (*(int *)(DAT_0104daa0 + 0x680) != 0) {
        local_80 = auStack_74;
        auStack_74[0] = 0;
        uStack_7c = 0;
        uStack_78 = 10;
        uStack_18 = 2;
        bVar2 = FUN_00430950((undefined4 *)(DAT_0104daa0 + 0x52c),"category_custom");
        if (bVar2) {
          piVar8 = (int *)FUN_00683520(*(int *)(DAT_0104daa0 + 0x3a0));
          puVar6 = (undefined4 *)(**(code **)(*piVar8 + 0x10))(&local_40);
          pwVar10 = L"</nobr></h2>";
          pvVar3 = FUN_0040d3c0(&local_80,L"<h2><nobr>");
          pvVar3 = FUN_0040d3a0(pvVar3,puVar6);
          FUN_0040d3c0(pvVar3,pwVar10);
        }
        else {
          puVar6 = FUN_006839b0(*(void **)(DAT_0104daa0 + 0x3a0),&local_40);
          pwVar10 = L"</nobr></h2>";
          pvVar3 = FUN_0040d3c0(&local_80,L"<h2><nobr>");
          pvVar3 = FUN_0040d3a0(pvVar3,puVar6);
          FUN_0040d3c0(pvVar3,pwVar10);
        }
        if (10 < uStack_38) {
                    /* WARNING: Subroutine does not return */
          _free(local_40);
        }
        FUN_0066f050(DAT_0104daa0);
        (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x54))(&local_80);
        (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x84))(0);
        fVar9 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x10))();
        fVar11 = (float)fVar9;
        fVar9 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x5f0) + 0x10))();
        (**(code **)(**(int **)(DAT_0104daa0 + 0x680) + 0x5c))
                  (1,*(undefined4 *)(DAT_0104daa0 + 0x5f0),
                   (float)(fVar9 * (float10)0.5 - (float10)fVar11 * (float10)0.5));
        uStack_18 = 1;
        if (10 < uStack_78) {
                    /* WARNING: Subroutine does not return */
          _free(local_80);
        }
      }
      *(undefined4 *)(DAT_0104daa0 + 0x764) = 0;
      (**(code **)(**(int **)(DAT_0104daa0 + 0x430) + 0xc0))(0);
      uVar4 = (**(code **)(**(int **)(DAT_0104daa0 + 0x448) + 0xc0))(0);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      if (local_84 < 0x15) {
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    pvVar3 = (void *)0x0;
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
  }
  ExceptionList = local_c;
  return (uint)pvVar3 & 0xffffff00;
}


//// FUNCTION FUN_00671680 @ 00671680 ////

void FUN_00671680(void *param_1)

{
  byte bVar1;
  bool bVar2;
  char *_Source;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  void *pvVar8;
  void *pvVar9;
  undefined4 *puVar10;
  size_t sVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  float10 fVar15;
  float *pfVar16;
  uint uVar17;
  float local_198 [2];
  int *local_170;
  undefined1 local_169;
  ushort *local_168;
  undefined4 local_164;
  uint local_160;
  ushort local_15c [10];
  int local_148;
  char *local_144;
  uint local_140;
  uint local_13c;
  char local_138 [20];
  byte *local_124;
  undefined4 local_120;
  uint local_11c;
  byte local_118 [20];
  byte *local_104;
  uint local_100;
  uint local_fc;
  undefined4 local_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc4969;
  pvStack_c = ExceptionList;
  local_170 = (int *)0x0;
  ExceptionList = &pvStack_c;
  uVar4 = FUN_00959a40((undefined4 *)((int)param_1 + 0x78));
  FUN_00960f30(uVar4);
  FUN_00559fb0(local_e4);
  local_144 = local_138;
  local_4 = 0;
  local_138[0] = '\0';
  local_140 = 0;
  local_13c = 0x14;
  local_198[1] = 9.467307e-39;
  _strncpy(local_144,"costume/category",0x10);
  local_140 = 0x10;
  local_144[0x10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  local_170 = (int *)0x1;
  cVar3 = FUN_0055be10(local_e4,&local_144,'\0');
  if (cVar3 != '\0') {
    cVar3 = FUN_00558bb0(local_e4,0);
    bVar2 = true;
    if (cVar3 != '\0') goto LAB_00671752;
  }
  bVar2 = false;
LAB_00671752:
  local_4 = 0;
  if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
    _free(local_144);
  }
  if (bVar2) {
    bVar2 = false;
    do {
      local_168 = local_15c;
      local_15c[0] = local_15c[0] & 0xff00;
      local_164 = 0;
      local_160 = 0x14;
      local_198[1] = 9.467537e-39;
      _strncpy((char *)local_168,(char *)&PTR_DAT_00d35d2c,3);
      local_164 = 3;
      *(char *)((int)local_168 + 3) = '\0';
      local_4._0_1_ = 2;
      local_198[1] = 9.467611e-39;
      FUN_005584e0(local_e4,&local_104,&local_168);
      local_4 = CONCAT31(local_4._1_3_,4);
      if (0x14 < local_160) {
                    /* WARNING: Subroutine does not return */
        _free(local_168);
      }
      local_124 = local_118;
      local_118[0] = 0;
      local_120 = 0;
      local_11c = 0x14;
      local_198[1] = 9.467698e-39;
      _strncpy((char *)local_124,"category_premium",0x10);
      local_120 = 0x10;
      local_124[0x10] = 0;
      pbVar12 = local_104;
      pbVar13 = local_124;
      do {
        bVar1 = *pbVar12;
        bVar14 = bVar1 < *pbVar13;
        if (bVar1 != *pbVar13) {
LAB_0067185a:
          iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_0067185f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar12[1];
        bVar14 = bVar1 < pbVar13[1];
        if (bVar1 != pbVar13[1]) goto LAB_0067185a;
        pbVar12 = pbVar12 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0067185f:
      local_169 = iVar5 == 0;
      if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_124);
      }
      if ((bool)local_169) {
        bVar2 = true;
      }
      piVar6 = operator_new(0x28);
      uVar17 = local_100;
      pbVar12 = local_104;
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        local_144 = local_138;
        local_13c = 0x14;
        local_138[0] = '\0';
        local_140 = 0;
        if (0x13 < local_100) {
          local_13c = local_100 + 0x20 & 0xffffffe0;
          local_144 = _malloc(local_13c);
        }
        local_198[1] = 9.467978e-39;
        _strncpy(local_144,(char *)pbVar12,uVar17);
        _Source = local_144;
        local_140 = uVar17;
        local_144[uVar17] = '\0';
        *piVar6 = (int)(piVar6 + 3);
        *(undefined1 *)(piVar6 + 3) = 0;
        piVar6[1] = 0;
        piVar6[2] = 0x14;
        if (0x13 < uVar17) {
          uVar7 = uVar17 + 0x20 & 0xffffffe0;
          piVar6[2] = uVar7;
          pvVar8 = _malloc(uVar7);
          *piVar6 = (int)pvVar8;
        }
        local_198[1] = 9.468086e-39;
        _strncpy((char *)*piVar6,_Source,uVar17);
        piVar6[1] = uVar17;
        *(undefined1 *)(uVar17 + *piVar6) = 0;
        *(undefined1 *)(piVar6 + 8) = 0;
        piVar6[9] = 0;
        if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
          _free(local_144);
        }
      }
      iVar5 = *(int *)(local_148 + 0x520);
      pvVar8 = (void *)(local_148 + 0x51c);
      local_170 = piVar6;
      if ((iVar5 == 0) ||
         ((uint)(*(int *)(local_148 + 0x528) - iVar5 >> 2) <=
          (uint)(*(int *)(local_148 + 0x524) - iVar5 >> 2))) {
        local_198[1] = 9.468263e-39;
        FUN_0066fe90(pvVar8,*(undefined4 **)(local_148 + 0x524),1,&local_170);
      }
      else {
        puVar10 = *(undefined4 **)(local_148 + 0x524);
        *puVar10 = piVar6;
        *(undefined4 **)(local_148 + 0x524) = puVar10 + 1;
      }
      local_4 = local_4 & 0xffffff00;
      if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_104);
      }
      cVar3 = FUN_00558bb0(local_e4,2);
    } while (cVar3 != '\0');
    if (!bVar2) {
      pvVar9 = operator_new(0x28);
      if (pvVar9 == (void *)0x0) {
        local_170 = (int *)0x0;
        FUN_006710e0(pvVar8,&local_170);
      }
      else {
        local_170 = (int *)&stack0xfffffe5c;
        pfVar16 = local_198;
        local_198[0] = (float)((uint)local_198[0] & 0xffffff00);
        uVar17 = 0;
        uVar7 = 0x14;
        FUN_004015d0(&stack0xfffffe5c,"category_premium",0x10);
        local_170 = FUN_0066be40(pvVar9,(char *)pfVar16,uVar17,uVar7);
        FUN_006710e0(pvVar8,&local_170);
      }
    }
    pvVar9 = operator_new(0x28);
    if (pvVar9 == (void *)0x0) {
      local_170 = (int *)0x0;
    }
    else {
      local_170 = (int *)&stack0xfffffe5c;
      pfVar16 = local_198;
      local_198[0] = (float)((uint)local_198[0] & 0xffffff00);
      uVar17 = 0;
      uVar7 = 0x14;
      FUN_004015d0(&stack0xfffffe5c,"category_custom",0xf);
      local_170 = FUN_0066be40(pvVar9,(char *)pfVar16,uVar17,uVar7);
    }
    FUN_006710e0(pvVar8,&local_170);
    pvVar9 = operator_new(0x28);
    if (pvVar9 == (void *)0x0) {
      local_170 = (int *)0x0;
    }
    else {
      local_170 = (int *)&stack0xfffffe5c;
      pfVar16 = local_198;
      local_198[0] = (float)((uint)local_198[0] & 0xffffff00);
      uVar17 = 0;
      uVar7 = 0x14;
      FUN_004015d0(&stack0xfffffe5c,"category_extra",0xe);
      local_170 = FUN_0066be40(pvVar9,(char *)pfVar16,uVar17,uVar7);
    }
    FUN_006710e0(pvVar8,&local_170);
    local_168 = local_15c;
    local_15c[0] = local_15c[0] & 0xff00;
    local_164 = 0;
    local_160 = 0x14;
    local_198[1] = 9.46876e-39;
    _strncpy((char *)local_168,"category_all",0xc);
    local_164 = 0xc;
    *(char *)(local_168 + 6) = '\0';
    iVar5 = local_148;
    local_4._0_1_ = 5;
    FUN_006874e0(*(void **)(local_148 + 0x3a0),&local_168);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_160) {
                    /* WARNING: Subroutine does not return */
      _free(local_168);
    }
    FUN_00683550(*(void **)(iVar5 + 0x3a0),param_1);
    puVar10 = (undefined4 *)(iVar5 + 0x52c);
    FUN_004015d0(puVar10,"category_all",0xc);
    FUN_004015d0((void *)(iVar5 + 0x54c),(char *)*puVar10,*(uint *)(iVar5 + 0x530));
    FUN_004015d0((void *)(iVar5 + 0x56c),(char *)*puVar10,*(uint *)(iVar5 + 0x530));
    pvVar9 = operator_new(0x28);
    if (pvVar9 == (void *)0x0) {
      local_170 = (int *)0x0;
    }
    else {
      local_170 = (int *)&stack0xfffffe5c;
      pfVar16 = local_198;
      local_198[0] = (float)((uint)local_198[0] & 0xffffff00);
      uVar17 = 0;
      uVar7 = 0x14;
      FUN_004015d0(&stack0xfffffe5c,"category_all",0xc);
      local_170 = FUN_0066be40(pvVar9,(char *)pfVar16,uVar17,uVar7);
    }
    local_198[1] = 9.469098e-39;
    FUN_0066fe90(pvVar8,*(undefined4 **)(local_148 + 0x520),1,&local_170);
    if (*(int *)(local_148 + 0x418) != 0) {
      local_168 = local_15c;
      local_15c[0] = 0;
      local_164 = 0;
      local_160 = 10;
      local_4 = CONCAT31(local_4._1_3_,6);
      puVar10 = FUN_009b5030(&local_104,puVar10);
      local_198[1] = 9.469199e-39;
      sVar11 = FUN_00ace02d(L"<table><tr><td align=center width=200><h2>");
      FUN_0040cae0(&local_168,L"<table><tr><td align=center width=200><h2>",sVar11);
      FUN_0040cae0(&local_168,(wchar_t *)*puVar10,puVar10[1]);
      sVar11 = FUN_00ace02d(L"</h2></td></tr></table>");
      FUN_0040cae0(&local_168,L"</h2></td></tr></table>",sVar11);
      if (10 < local_fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_104);
      }
      (**(code **)(**(int **)(local_148 + 0x418) + 0x54))();
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x78))();
      local_198[1] = 9.469402e-39;
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x8c))();
      local_198[1] = 1.4013e-45;
      local_198[0] = 9.46943e-39;
      (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x50))();
      iVar5 = *(int *)(DAT_0104daa0 + 0x418);
      local_198[0] = 9.469461e-39;
      fVar15 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x388) + 0x14))();
      local_198[0] = (float)((fVar15 - (float10)*(float *)(iVar5 + 0x9c)) + (float10)8.0);
      (**(code **)(**(int **)(DAT_0104daa0 + 0x460) + 0x7c))();
      if (*(int *)(DAT_0104daa0 + 0x430) != 0) {
        fVar15 = (float10)(**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x10))();
        local_170 = (int *)(float)fVar15;
        piVar6 = (int *)FUN_0071b2b0();
        (**(code **)(*piVar6 + 0x10))();
        local_198[1] = 9.469639e-39;
        (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x5c))();
        do {
          cVar3 = (**(code **)(**(int **)(DAT_0104daa0 + 0x418) + 0x50))();
        } while (cVar3 != '\0');
      }
      if (10 < local_160) {
                    /* WARNING: Subroutine does not return */
        _free(local_168);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00671de0 @ 00671de0 ////

/* WARNING: Removing unreachable block (ram,0x0067478a) */
/* WARNING: Removing unreachable block (ram,0x00675bb4) */
/* WARNING: Removing unreachable block (ram,0x00673b95) */

int * __thiscall
FUN_00671de0(void *this,int *param_1,float param_2,undefined1 param_3,undefined4 param_4,int param_5
            ,undefined1 param_6)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  char **ppcVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  size_t sVar13;
  int *piVar14;
  int *piVar15;
  void *pvVar16;
  float fVar17;
  float *pfVar18;
  undefined4 *puVar19;
  int ***pppiVar20;
  int ****ppppiVar21;
  undefined4 *puVar22;
  undefined **ppuVar23;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piVar24;
  undefined4 extraout_EDX;
  bool bVar25;
  float10 fVar26;
  float10 fVar27;
  ulonglong uVar28;
  int *in_stack_fffffb74;
  undefined4 uVar29;
  undefined1 *puStack_468;
  undefined **ppuStack_40c;
  undefined4 *puStack_3e8;
  void *pvStack_3e4;
  undefined4 *puStack_3e0;
  float fStack_3dc;
  int *piStack_3d8;
  undefined4 uStack_3d4;
  uint uStack_3c8;
  undefined4 *puStack_3bc;
  float fStack_3b8;
  undefined4 *puStack_3b4;
  undefined4 *puStack_3b0;
  undefined4 *puStack_3ac;
  void *_Memory;
  code *pcVar30;
  char *pcStack_374;
  undefined4 uStack_370;
  code *pcStack_36c;
  uint uStack_338;
  undefined1 *puStack_330;
  undefined4 uStack_32c;
  undefined4 *puStack_328;
  int **_Memory_00;
  int *piStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  void *pvStack_308;
  undefined4 *puStack_304;
  uint uStack_300;
  undefined4 uStack_2fc;
  void *pvStack_2c8;
  void *pvStack_2c4;
  int *piStack_2c0;
  undefined4 uStack_2bc;
  int *piStack_298;
  char **ppcStack_280;
  undefined1 *puStack_27c;
  undefined1 *puStack_278;
  char *pcStack_274;
  undefined1 *puStack_270;
  undefined1 *puStack_26c;
  void *pvVar31;
  undefined1 *puVar32;
  uint uVar33;
  undefined1 *puVar34;
  uint uVar35;
  undefined1 *puStack_1d4;
  undefined4 uStack_1d0;
  undefined2 **_Memory_01;
  void **_Dest;
  uint uStack_1a8;
  void *pvStack_1a4;
  undefined4 **ppuStack_1a0;
  uint uStack_19c;
  undefined4 *puStack_198;
  undefined4 *puStack_194;
  uint uStack_190;
  undefined1 *puVar36;
  char *pcVar37;
  void *pvStack_154;
  undefined4 uStack_150;
  int iVar38;
  undefined1 *puVar39;
  byte bVar40;
  undefined4 *local_120;
  char *pcStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  char acStack_108 [12];
  undefined1 auStack_fc [4];
  undefined1 uStack_f8;
  undefined4 local_f4;
  undefined1 *puStack_f0;
  void *pvStack_ec;
  undefined1 uStack_e8;
  uint uStack_e4;
  undefined4 uStack_c4;
  undefined2 *puStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined2 auStack_b0 [2];
  undefined1 uStack_ac;
  undefined4 uStack_a0;
  undefined1 uStack_90;
  undefined1 uStack_78;
  int *piStack_70;
  int iStack_6c;
  int iStack_64;
  undefined4 uStack_38;
  undefined1 uStack_28;
  undefined1 uStack_24;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc5421;
  pvStack_c = ExceptionList;
  local_f4 = 0;
  ExceptionList = &pvStack_c;
  local_10 = this;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d35b14;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d35afc;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_FUN_00d18c6c;
  *(undefined4 *)((int)this + 0x358) = 0;
  piVar11 = (int *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x368) = 0;
  *piVar11 = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0x370) = param_5;
  if (param_5 != 0) {
    piVar12 = (int *)(param_5 + 0x18);
    *(int **)((int)this + 0x364) = piVar12;
    *piVar11 = *piVar12;
    *(int **)(*piVar12 + 4) = piVar11;
    *piVar12 = (int)piVar11;
  }
  piVar11 = (int *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(int **)((int)this + 0x380) = piVar11;
  *piVar11 = (int)&PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 **)((int)this + 0x398) = (undefined4 *)((int)this + 0x38c);
  *(undefined4 *)((int)this + 0x38c) = &PTR_FUN_00d35acc;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 **)((int)this + 0x3b0) = (undefined4 *)((int)this + 0x3a4);
  *(undefined4 *)((int)this + 0x3a4) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  piVar12 = (int *)((int)this + 0x3bc);
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(int **)((int)this + 0x3c8) = piVar12;
  *piVar12 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 **)((int)this + 0x3e0) = (undefined4 *)((int)this + 0x3d4);
  *(undefined4 *)((int)this + 0x3d4) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 **)((int)this + 0x3f8) = (undefined4 *)((int)this + 0x3ec);
  *(undefined4 *)((int)this + 0x3ec) = &PTR_FUN_00d2dba4;
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
  *(undefined4 *)((int)this + 0x41c) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 **)((int)this + 0x440) = (undefined4 *)((int)this + 0x434);
  *(undefined4 *)((int)this + 0x434) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 **)((int)this + 0x458) = (undefined4 *)((int)this + 0x44c);
  *(undefined4 *)((int)this + 0x44c) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 **)((int)this + 0x470) = (undefined4 *)((int)this + 0x464);
  *(undefined4 *)((int)this + 0x464) = &PTR_FUN_00d35aac;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 **)((int)this + 0x488) = (undefined4 *)((int)this + 0x47c);
  *(undefined4 *)((int)this + 0x47c) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x490) = 0;
  *(undefined2 **)((int)this + 0x494) = (undefined2 *)((int)this + 0x4a0);
  *(undefined2 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x498) = 0;
  *(undefined4 *)((int)this + 0x49c) = 10;
  uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)((int)this + 0x494),(wchar_t *)&lpCaption_00d16918,uVar6);
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 **)((int)this + 0x4c8) = (undefined4 *)((int)this + 0x4bc);
  *(undefined4 *)((int)this + 0x4bc) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4dc) = 0;
  *(undefined4 **)((int)this + 0x4e0) = (undefined4 *)((int)this + 0x4d4);
  *(undefined4 *)((int)this + 0x4d4) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined4 **)((int)this + 0x4f8) = (undefined4 *)((int)this + 0x4ec);
  *(undefined4 *)((int)this + 0x4ec) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x510) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x50c) = 0;
  *(undefined4 **)((int)this + 0x510) = (undefined4 *)((int)this + 0x504);
  *(undefined4 *)((int)this + 0x504) = &PTR_FUN_00d18c7c;
  *(undefined4 *)((int)this + 0x518) = 0;
  *(undefined4 *)((int)this + 0x520) = 0;
  *(undefined4 *)((int)this + 0x524) = 0;
  *(undefined4 *)((int)this + 0x528) = 0;
  *(undefined4 *)((int)this + 0x52c) = (undefined1 *)((int)this + 0x538);
  *(undefined1 *)((int)this + 0x538) = 0;
  *(undefined4 *)((int)this + 0x530) = 0;
  *(undefined4 *)((int)this + 0x534) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x52c),"Not_found",9);
  *(undefined1 **)((int)this + 0x54c) = (undefined1 *)((int)this + 0x558);
  *(undefined1 *)((int)this + 0x558) = 0;
  *(undefined4 *)((int)this + 0x550) = 0;
  *(undefined4 *)((int)this + 0x554) = 0x14;
  *(undefined1 **)((int)this + 0x56c) = (undefined1 *)((int)this + 0x578);
  *(undefined1 *)((int)this + 0x578) = 0;
  *(undefined4 *)((int)this + 0x570) = 0;
  *(undefined4 *)((int)this + 0x574) = 0x14;
  *(undefined4 *)((int)this + 0x58c) = 0;
  *(undefined4 *)((int)this + 0x590) = 0;
  *(undefined4 *)((int)this + 0x5a0) = 0;
  *(undefined4 *)((int)this + 0x598) = 0;
  *(undefined4 *)((int)this + 0x59c) = 0;
  *(undefined4 **)((int)this + 0x5a0) = (undefined4 *)((int)this + 0x594);
  *(undefined4 *)((int)this + 0x594) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x5a8) = 0;
  *(undefined4 *)((int)this + 0x5b8) = 0;
  *(undefined4 *)((int)this + 0x5b0) = 0;
  *(undefined4 *)((int)this + 0x5b4) = 0;
  *(undefined4 **)((int)this + 0x5b8) = (undefined4 *)((int)this + 0x5ac);
  *(undefined4 *)((int)this + 0x5ac) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5d0) = 0;
  *(undefined4 *)((int)this + 0x5c8) = 0;
  *(undefined4 *)((int)this + 0x5cc) = 0;
  *(undefined4 **)((int)this + 0x5d0) = (undefined4 *)((int)this + 0x5c4);
  *(undefined4 *)((int)this + 0x5c4) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x5d8) = 0;
  *(undefined4 *)((int)this + 0x5e8) = 0;
  *(undefined4 *)((int)this + 0x5e0) = 0;
  *(undefined4 *)((int)this + 0x5e4) = 0;
  *(undefined4 **)((int)this + 0x5e8) = (undefined4 *)((int)this + 0x5dc);
  *(undefined4 *)((int)this + 0x5dc) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x5f0) = 0;
  *(undefined4 *)((int)this + 0x600) = 0;
  *(undefined4 *)((int)this + 0x5f8) = 0;
  *(undefined4 *)((int)this + 0x5fc) = 0;
  *(undefined4 **)((int)this + 0x600) = (undefined4 *)((int)this + 0x5f4);
  *(undefined4 *)((int)this + 0x5f4) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x608) = 0;
  *(undefined4 *)((int)this + 0x618) = 0;
  *(undefined4 *)((int)this + 0x610) = 0;
  *(undefined4 *)((int)this + 0x614) = 0;
  *(undefined4 **)((int)this + 0x618) = (undefined4 *)((int)this + 0x60c);
  *(undefined4 *)((int)this + 0x60c) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x620) = 0;
  *(undefined4 *)((int)this + 0x630) = 0;
  *(undefined4 *)((int)this + 0x628) = 0;
  *(undefined4 *)((int)this + 0x62c) = 0;
  *(undefined4 **)((int)this + 0x630) = (undefined4 *)((int)this + 0x624);
  *(undefined4 *)((int)this + 0x624) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x638) = 0;
  *(undefined4 *)((int)this + 0x648) = 0;
  *(undefined4 *)((int)this + 0x640) = 0;
  *(undefined4 *)((int)this + 0x644) = 0;
  *(undefined4 **)((int)this + 0x648) = (undefined4 *)((int)this + 0x63c);
  *(undefined4 *)((int)this + 0x63c) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x650) = 0;
  *(undefined4 *)((int)this + 0x660) = 0;
  *(undefined4 *)((int)this + 0x658) = 0;
  *(undefined4 *)((int)this + 0x65c) = 0;
  *(undefined4 **)((int)this + 0x660) = (undefined4 *)((int)this + 0x654);
  *(undefined4 *)((int)this + 0x654) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x668) = 0;
  *(undefined4 *)((int)this + 0x678) = 0;
  *(undefined4 *)((int)this + 0x670) = 0;
  *(undefined4 *)((int)this + 0x674) = 0;
  *(undefined4 **)((int)this + 0x678) = (undefined4 *)((int)this + 0x66c);
  *(undefined4 *)((int)this + 0x66c) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x680) = 0;
  *(undefined4 *)((int)this + 0x690) = 0;
  *(undefined4 *)((int)this + 0x688) = 0;
  *(undefined4 *)((int)this + 0x68c) = 0;
  *(undefined4 **)((int)this + 0x690) = (undefined4 *)((int)this + 0x684);
  *(undefined4 *)((int)this + 0x684) = &PTR_LAB_00d2db54;
  *(undefined4 *)((int)this + 0x698) = 0;
  *(undefined4 *)((int)this + 0x6a8) = 0;
  *(undefined4 *)((int)this + 0x6a0) = 0;
  *(undefined4 *)((int)this + 0x6a4) = 0;
  *(undefined4 **)((int)this + 0x6a8) = (undefined4 *)((int)this + 0x69c);
  *(undefined4 *)((int)this + 0x69c) = &PTR_FUN_00d35adc;
  *(undefined4 *)((int)this + 0x6b0) = 0;
  *(undefined4 *)((int)this + 0x6c0) = 0;
  *(undefined4 *)((int)this + 0x6b8) = 0;
  *(undefined4 *)((int)this + 0x6bc) = 0;
  *(undefined4 **)((int)this + 0x6c0) = (undefined4 *)((int)this + 0x6b4);
  *(undefined4 *)((int)this + 0x6b4) = &PTR_FUN_00d35aec;
  *(undefined4 *)((int)this + 0x6c8) = 0;
  *(undefined4 *)((int)this + 0x6d8) = 0;
  *(undefined4 *)((int)this + 0x6d0) = 0;
  *(undefined4 *)((int)this + 0x6d4) = 0;
  *(undefined4 **)((int)this + 0x6d8) = (undefined4 *)((int)this + 0x6cc);
  *(undefined4 *)((int)this + 0x6cc) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x6e0) = 0;
  *(undefined4 *)((int)this + 0x6f0) = 0;
  *(undefined4 *)((int)this + 0x6e8) = 0;
  *(undefined4 *)((int)this + 0x6ec) = 0;
  *(undefined4 **)((int)this + 0x6f0) = (undefined4 *)((int)this + 0x6e4);
  *(undefined4 *)((int)this + 0x6e4) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x6f8) = 0;
  *(undefined4 *)((int)this + 0x6fc) = 0;
  *(undefined4 *)((int)this + 0x700) = 0;
  *(undefined4 *)((int)this + 0x704) = 0;
  *(undefined4 *)((int)this + 0x708) = 0;
  *(undefined4 *)((int)this + 0x70c) = 0;
  *(undefined4 *)((int)this + 0x728) = 0;
  *(undefined4 *)((int)this + 0x720) = 0;
  *(undefined4 *)((int)this + 0x724) = 0;
  *(undefined4 **)((int)this + 0x728) = (undefined4 *)((int)this + 0x71c);
  *(undefined4 *)((int)this + 0x71c) = &PTR_FUN_00d2d100;
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined4 *)((int)this + 0x740) = 0;
  *(undefined4 *)((int)this + 0x738) = 0;
  *(undefined4 *)((int)this + 0x73c) = 0;
  *(undefined4 **)((int)this + 0x740) = (undefined4 *)((int)this + 0x734);
  *(undefined4 *)((int)this + 0x734) = &PTR_FUN_00d2d100;
  *(undefined4 *)((int)this + 0x748) = 0;
  *(undefined4 *)((int)this + 0x74c) = 0;
  *(undefined4 *)((int)this + 0x750) = 0;
  *(undefined4 *)((int)this + 0x754) = 0;
  *(undefined1 *)((int)this + 0x75c) = 0;
  *(undefined4 *)((int)this + 0x760) = 0xffffffff;
  *(undefined4 *)((int)this + 0x764) = 0xffffffff;
  *(undefined1 *)((int)this + 0x768) = 0;
  *(undefined4 *)((int)this + 0x76c) = 0x3f000000;
  *(undefined4 *)((int)this + 0x770) = 0;
  *(undefined4 *)((int)this + 0x774) = 0x437a0000;
  *(undefined4 *)((int)this + 0x778) = 0;
  *(undefined4 *)((int)this + 0x788) = 0;
  *(undefined4 *)((int)this + 0x780) = 0;
  *(undefined4 *)((int)this + 0x784) = 0;
  *(undefined4 **)((int)this + 0x788) = (undefined4 *)((int)this + 0x77c);
  *(undefined4 *)((int)this + 0x77c) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x790) = 0;
  *(undefined4 *)((int)this + 0x7a0) = 0;
  *(undefined4 *)((int)this + 0x798) = 0;
  *(undefined4 *)((int)this + 0x79c) = 0;
  *(undefined4 **)((int)this + 0x7a0) = (undefined4 *)((int)this + 0x794);
  *(undefined4 *)((int)this + 0x794) = &PTR_FUN_00d2dbb4;
  *(undefined4 *)((int)this + 0x7a8) = 0;
  *(undefined4 *)((int)this + 0x7b8) = 0;
  *(undefined4 *)((int)this + 0x7b0) = 0;
  *(undefined4 *)((int)this + 0x7b4) = 0;
  *(undefined4 **)((int)this + 0x7b8) = (undefined4 *)((int)this + 0x7ac);
  *(undefined4 *)((int)this + 0x7ac) = &PTR_FUN_00d2dbb4;
  *(undefined4 *)((int)this + 0x7c0) = 0;
  *(undefined4 *)((int)this + 2000) = 0;
  *(undefined4 *)((int)this + 0x7c8) = 0;
  *(undefined4 *)((int)this + 0x7cc) = 0;
  *(undefined4 **)((int)this + 2000) = (undefined4 *)((int)this + 0x7c4);
  *(undefined4 *)((int)this + 0x7c4) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x7d8) = 0;
  *(undefined4 *)((int)this + 0x7e8) = 0;
  *(undefined4 *)((int)this + 0x7e0) = 0;
  *(undefined4 *)((int)this + 0x7e4) = 0;
  *(undefined4 **)((int)this + 0x7e8) = (undefined4 *)((int)this + 0x7dc);
  *(undefined4 *)((int)this + 0x7dc) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x7f0) = 0;
  *(undefined2 **)((int)this + 0x7f4) = (undefined2 *)((int)this + 0x800);
  *(undefined2 *)((int)this + 0x800) = 0;
  *(undefined4 *)((int)this + 0x7f8) = 0;
  *(undefined4 *)((int)this + 0x7fc) = 10;
  uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)((int)this + 0x7f4),(wchar_t *)&lpCaption_00d16918,uVar6);
  bVar40 = 1;
  iVar38 = 0;
  local_4._0_1_ = 0x2e;
  *(undefined4 *)((int)this + 0x818) = 0;
  *(undefined4 *)((int)this + 0x814) = 0;
  *(undefined4 *)((int)this + 0x830) = 0;
  *(undefined4 *)((int)this + 0x82c) = 0;
  *(undefined4 *)((int)this + 0x828) = 0;
  *(undefined4 *)((int)this + 0x840) = 0;
  *(undefined4 *)((int)this + 0x83c) = 0;
  *(undefined4 *)((int)this + 0x824) = 0;
  *(undefined4 *)((int)this + 0x838) = 0;
  *(undefined4 *)((int)this + 0x820) = 0;
  *(undefined4 *)((int)this + 0x834) = 0;
  *(undefined4 *)((int)this + 0x81c) = 0;
  pvVar8 = this;
  pvVar7 = (void *)FUN_004f3b20();
  FUN_004f98f0(pvVar7,iVar38,(int)pvVar8,bVar40);
  iVar38 = *(int *)((int)this + 0x370);
  pvVar8 = operator_new(0x378);
  local_4._0_1_ = 0x2f;
  if (pvVar8 == (void *)0x0) {
    local_120 = (undefined4 *)0x0;
  }
  else {
    uStack_150 = 0x67249b;
    local_120 = FUN_00439080(pvVar8,param_1,param_2,param_3,iVar38 == 0,param_6);
  }
  local_4._0_1_ = 0x2e;
  (**(code **)(*(int *)((int)this + 0x504) + 4))();
  *(undefined4 **)((int)this + 0x518) = local_120;
  (*(code *)**(undefined4 **)((int)this + 0x504))();
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffffd;
  FUN_0071c290();
  FUN_00424130(DAT_00f87b04,1,&LAB_004371f0,&DAT_004345d0);
  puVar9 = operator_new(0x344);
  local_4._0_1_ = 0x30;
  if (puVar9 == (undefined4 *)0x0) {
    local_120 = (undefined4 *)0x0;
  }
  else {
    local_120 = FUN_007432f0(puVar9);
  }
  local_4 = CONCAT31(local_4._1_3_,0x2e);
  (**(code **)(*piVar11 + 4))();
  *(undefined4 **)((int)this + 0x388) = local_120;
  (**(code **)*piVar11)();
  puVar1 = (uint *)(*(int *)((int)this + 0x388) + 0x114);
  *puVar1 = *puVar1 & 0xfffffffd;
  iVar38 = **(int **)((int)this + 0x388);
  FUN_0071aff0();
  puVar39 = this;
  (**(code **)(iVar38 + 100))();
  iVar38 = **(int **)((int)this + 0x388);
  FUN_0071afe0();
  uStack_150 = 1;
  pvStack_154 = (void *)0x67258b;
  (**(code **)(iVar38 + 0x5c))();
  iVar38 = **(int **)((int)this + 0x388);
  pvStack_154 = (void *)0x67259c;
  fVar26 = FUN_0071aff0();
  pvStack_154 = (void *)(float)((float10)768.0 - (fVar26 + fVar26));
  FUN_0071afe0();
  (**(code **)(iVar38 + 0x74))();
  puVar9 = operator_new(0xbc);
  uStack_24 = 0x31;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = FUN_00744eb0(puVar9);
  }
  uStack_24 = 0x2e;
  FUN_0073e510(*(void **)((int)this + 0x388),puVar9);
  uVar6 = 1;
  (**(code **)(**(int **)((int)this + 0x388) + 0xd0))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x388));
  pcVar10 = operator_new(0x344);
  uStack_28 = 0x32;
  if (pcVar10 == (char *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = FUN_007432f0((undefined4 *)pcVar10);
  }
  uStack_28 = 0x2e;
  (**(code **)(*(int *)((int)this + 0x6e4) + 4))();
  *(undefined4 **)((int)this + 0x6f8) = puVar9;
  (*(code *)**(undefined4 **)((int)this + 0x6e4))();
  (**(code **)(**(int **)((int)this + 0x6f8) + 0x70))();
  (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
  puVar9 = operator_new(0x24);
  uStack_38._0_1_ = 0x33;
  if (puVar9 == (undefined4 *)0x0) {
    iVar38 = 0;
  }
  else {
    iVar38 = FUN_009910f0(puVar9);
  }
  *(int *)((int)this + 0x4b8) = iVar38;
  *(undefined1 *)(iVar38 + 0xc) = 6;
  uStack_38 = CONCAT31(uStack_38._1_3_,0x2e);
  *(uint *)(*(int *)((int)this + 0x4b8) + 0x10) =
       *(uint *)(*(int *)((int)this + 0x4b8) + 0x10) & 0xbfffffff;
  pvVar8 = FUN_0099bb50("ui/costume_background.dds",0,0,0,'\0');
  puVar9 = operator_new(0x3c);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = FUN_0041f350(puVar9);
  }
  *(undefined4 **)((int)this + 0x4b4) = puVar9;
  puVar9[1] = *(undefined4 *)((int)this + 0x4b8);
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x4b4) + 4) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x4b4) + 4) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  pvVar7 = *(void **)(*(int *)((int)this + 0x4b4) + 4);
  if (*(void **)((int)pvVar7 + 0x18) != pvVar8) {
    Engine_SetResourceReference(pvVar7,(int)pvVar8);
  }
  iVar38 = *(int *)((int)this + 0x4b4);
  *(undefined4 *)(iVar38 + 0x28) = 0;
  *(undefined4 *)(iVar38 + 0x2c) = 0;
  iVar38 = *(int *)((int)this + 0x4b4);
  *(undefined4 *)(iVar38 + 0x30) = 0x3f800000;
  *(undefined4 *)(iVar38 + 0x34) = 0x3f800000;
  if (pvVar8 != (void *)0x0) {
    FUN_0099b400(pvVar8);
  }
  piVar11 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar11 + 0x10))();
  piVar11 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar11 + 0x10))();
  FUN_0071afe0();
  pvVar8 = operator_new(0x420);
  if (pvVar8 == (void *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    pcVar10 = &stack0xfffffec4;
    puVar39 = &DAT_00000014;
    _strncpy(pcVar10,"button_ok",9);
    pcVar10[9] = '\0';
    pcStack_114 = acStack_108;
    acStack_108[0] = '\0';
    uStack_110 = 0;
    uStack_10c = 0x14;
    _strncpy(pcStack_114,"button_tick.",0xc);
    uStack_110 = 0xc;
    pcStack_114[0xc] = '\0';
    uStack_38 = 0x36;
    uStack_190 = 0x67286c;
    puVar9 = FUN_009b5030(&pvStack_ec,(undefined4 *)&stack0xfffffeb8);
    puStack_f0 = &stack0xfffffe84;
    uStack_38 = 0x37;
    uVar6 = 7;
    uStack_190 = 0x6728b2;
    piVar11 = FUN_0069fb10(pvVar8,(int *)&pcStack_114,puVar9,0x42800000,0x42800000,0,0,0x3f800000,
                           0x3f800000);
  }
  if (((uVar6 & 4) != 0) && (uVar6 = uVar6 & 0xfffffffb, 10 < uStack_e4)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_ec);
  }
  if (((uVar6 & 2) != 0) && (uVar6 = uVar6 & 0xfffffffd, 0x14 < uStack_10c)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_114);
  }
  uStack_38 = 0x2e;
  if (((uVar6 & 1) != 0) && (&DAT_00000014 < puVar39)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar10);
  }
  pcVar37 = "COSTUMEFIDDLER_OK";
  puVar36 = &LAB_0066dc20;
  pcVar10 = (char *)0x0;
  puVar39 = this;
  piVar24 = piVar11;
  (**(code **)(*piVar11 + 0x18))();
  iVar38 = 5;
  uStack_190 = 0x67296e;
  (**(code **)(*piVar11 + 0x18))();
  puStack_194 = *(undefined4 **)((int)this + 0x388);
  uStack_190 = 0x42700000;
  puStack_198 = (undefined4 *)0x2;
  uStack_19c = 0x672984;
  (**(code **)(*piVar11 + 0x5c))();
  ppuStack_1a0 = *(undefined4 ***)((int)this + 0x388);
  uStack_19c = 0x41000000;
  pvStack_1a4 = (void *)0x2;
  (**(code **)(*piVar11 + 0x68))();
  uStack_1a8 = 2;
  (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
  if (((piStack_70 == (int *)0x0) && (iStack_6c != 0)) && (iStack_64 == 2)) {
    FUN_0042feb0(iStack_6c);
  }
  (*(code *)DAT_0104da8c[1])();
  DAT_0104daa0 = this;
  (*(code *)*DAT_0104da8c)();
  puStack_198 = operator_new(0x3fc);
  uStack_78 = 0x3b;
  if (puStack_198 == (undefined4 *)0x0) {
    puStack_194 = (undefined4 *)0x0;
  }
  else {
    puStack_194 = FUN_00833290(puStack_198);
  }
  uStack_78 = 0x2e;
  (**(code **)(*piVar12 + 4))();
  *(undefined4 **)((int)this + 0x3d0) = puStack_194;
  (**(code **)*piVar12)();
  _Dest = (void **)0x41200000;
  (**(code **)(**(int **)((int)this + 0x3d0) + 100))();
  (**(code **)(**(int **)((int)this + 0x3d0) + 0x5c))();
  puStack_bc = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = 0;
  uStack_b4 = 10;
  uVar6 = FUN_00ace02d(
                      L"<p align=center><nobr><h1><translate>costume_wardrobe-dept</translate></h1></nobr></p>"
                      );
  uStack_1d0 = 0x672ad5;
  FUN_004036d0(&puStack_bc,
               L"<p align=center><nobr><h1><translate>costume_wardrobe-dept</translate></h1></nobr></p>"
               ,uVar6);
  _Memory_01 = &puStack_bc;
  uStack_90 = 0x3c;
  (**(code **)(**(int **)((int)this + 0x3d0) + 0x54))();
  uVar6 = 0;
  uStack_1d0 = 0x672aff;
  (**(code **)(**(int **)((int)this + 0x3d0) + 0x84))();
  puStack_1d4 = *(undefined1 **)((int)this + 0x3d0);
  uStack_1d0 = 1;
  (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
  if (piStack_70 != (int *)0x0) {
    piVar11 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar11 + 0x10))();
    pvVar8 = operator_new(0x420);
    bVar25 = pvVar8 == (void *)0x0;
    if (bVar25) {
      piVar11 = (int *)0x0;
    }
    else {
      pcVar10 = &stack0xfffffe90;
      pcVar37 = (char *)((uint)pcVar37 & 0xffffff00);
      puVar39 = &DAT_00000014;
      _strncpy(pcVar10,"button_randomname",0x11);
      puVar36 = (undefined1 *)0x11;
      pcVar10[0x11] = '\0';
      _Dest = &pvStack_1a4;
      pvStack_1a4 = (void *)((uint)pvStack_1a4 & 0xffffff00);
      uStack_1a8 = 0x14;
      _strncpy((char *)_Dest,"button_randomize.",0x11);
      *(char *)((int)_Dest + 0x11) = '\0';
      uStack_a0 = 0x3f;
      puVar9 = FUN_009b5030(&pvStack_154,(undefined4 *)&stack0xfffffe84);
      uStack_a0 = 0x40;
      piVar11 = FUN_0069fb10(pvVar8,(int *)&stack0xfffffe50,puVar9,0x42000000,0x42000000,0,0,
                             0x3f800000,0x3f800000);
    }
    if ((!bVar25) && (&lpType_0000000a < piVar24)) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_154);
    }
    if ((!bVar25) && (0x14 < uStack_1a8)) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
    uStack_a0 = 0x3c;
    if ((!bVar25) && (&DAT_00000014 < puVar39)) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar10);
    }
    (**(code **)(*piVar11 + 0x5c))();
    uVar35 = 2;
    (**(code **)(*piVar11 + 100))();
    pcVar10 = this;
    (**(code **)(*piVar11 + 0x18))();
    puVar39 = &LAB_005f37f0;
    (**(code **)(*piVar11 + 0x18))();
    (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
    puVar9 = (undefined4 *)(**(code **)(*piStack_70 + 0x5c))();
    FUN_004036d0((void *)((int)this + 0x494),(wchar_t *)*puVar9,puVar9[1]);
    if (10 < uStack_190) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_198);
    }
    pvVar8 = operator_new(0x288);
    if (pvVar8 == (void *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      uVar35 = 0x20;
      pcVar10 = _malloc(0x20);
      _strncpy(pcVar10,"ui/dialogue_whitebox.dds",0x18);
      pcVar10[0x18] = '\0';
      puVar39 = (undefined1 *)((uint)puVar39 | 0x40);
      uStack_e4 = CONCAT31(uStack_e4._1_3_,0x45);
      puVar9 = FUN_005e8fd0(pvVar8,(undefined4 *)&stack0xfffffe0c);
    }
    uStack_e4 = 0x3c;
    if ((((uint)puVar39 & 0x40) != 0) && (0x14 < uVar35)) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar10);
    }
    FUN_005e7a00(puVar9,0);
    puVar9 = operator_new(0x344);
    uStack_e4._0_1_ = 0x47;
    if (puVar9 == (undefined4 *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = FUN_007432f0(puVar9);
    }
    uStack_e4 = CONCAT31(uStack_e4._1_3_,0x3c);
    (**(code **)(*piVar11 + 0xa0))();
    puVar9 = operator_new(0x3c8);
    uStack_e8 = 0x48;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_00738920(puVar9);
    }
    uStack_e8 = 0x3c;
    (**(code **)(*(int *)((int)this + 0x3ec) + 4))();
    *(undefined4 **)((int)this + 0x400) = puVar9;
    (*(code *)**(undefined4 **)((int)this + 0x3ec))();
    (**(code **)(*piStack_70 + 0x5c))();
    pvStack_ec = (void *)CONCAT31(pvStack_ec._1_3_,0x49);
    (**(code **)(**(int **)((int)this + 0x400) + 0x54))();
    puStack_f0 = (undefined1 *)CONCAT31(puStack_f0._1_3_,0x3c);
    if (10 < uStack_19c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_1a4);
    }
    (**(code **)(**(int **)((int)this + 0x400) + 0x8c))();
    iVar2 = **(int **)((int)this + 0x400);
    (**(code **)(**(int **)((int)this + 0x388) + 0x10))();
    (**(code **)(iVar2 + 0x78))();
    uVar35 = 0xffffffff;
    *(undefined4 *)(*(int *)((int)this + 0x400) + 0x350) = 0xffffffff;
    *(undefined4 *)(*(int *)((int)this + 0x400) + 0x3a0) = 0xffffffff;
    pcVar10 = &stack0xfffffe04;
    _strncpy(pcVar10,"default_bold",0xc);
    pcVar10[0xc] = '\0';
    puVar39 = &stack0xfffffdd0;
    uStack_f8 = 0x4a;
    (**(code **)(**(int **)((int)this + 0x400) + 0xfc))();
    acStack_108[0] = '<';
    if (0x14 < uVar35) {
                    /* WARNING: Subroutine does not return */
      _free(puVar39);
    }
    (**(code **)(**(int **)((int)this + 0x400) + 200))();
    *(undefined1 *)(*(int *)((int)this + 0x400) + 0x358) = 1;
    (**(code **)(**(int **)((int)this + 0x400) + 0x7c))();
    *(undefined4 *)(*(int *)((int)this + 0x400) + 0x394) = 0x20;
    (**(code **)(**(int **)((int)this + 0x400) + 0x5c))();
    (**(code **)(**(int **)((int)this + 0x400) + 0x68))();
    puVar9 = operator_new(0x50);
    if (puVar9 != (undefined4 *)0x0) {
      FUN_005e4870(puVar9);
    }
    (**(code **)(**(int **)((int)this + 0x400) + 0xa0))();
    piVar12 = (int *)(**(code **)(**(int **)((int)this + 0x400) + 0xa4))();
    (**(code **)(*piVar12 + 0xc))();
    puStack_270 = &LAB_0066bdc0;
    pcStack_274 = (char *)0x9;
    puStack_278 = (undefined1 *)0x6730c9;
    puStack_26c = this;
    (**(code **)(**(int **)((int)this + 0x400) + 0x18))();
    puStack_27c = *(undefined1 **)((int)this + 0x400);
    puStack_278 = (undefined1 *)0x1;
    ppcStack_280 = (char **)0x6730d9;
    (**(code **)(*piVar11 + 0xc))();
    ppcStack_280 = (char **)0x0;
    (**(code **)(*piVar11 + 0x84))();
    (**(code **)(*piVar11 + 0x5c))();
    piStack_298 = (int *)0x1;
    (**(code **)(*piVar11 + 100))();
    (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
  }
  puVar39 = operator_new(0x390);
  uStack_a0._0_1_ = 0x4c;
  if (puVar39 == (undefined1 *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = FUN_00687260(puVar39,iVar38);
  }
  uStack_a0 = CONCAT31(uStack_a0._1_3_,0x3c);
  (**(code **)(*(int *)((int)this + 0x38c) + 4))();
  *(int **)((int)this + 0x3a0) = piVar11;
  (*(code *)**(undefined4 **)((int)this + 0x38c))();
  (**(code **)(**(int **)((int)this + 0x3a0) + 0x68))();
  puVar9 = (undefined4 *)FUN_005fbfa0(auStack_fc,1,*(int *)((int)this + 0x388),0);
  uStack_ac = 0x4d;
  FUN_005f59e0((void *)(*(int *)((int)this + 0x3a0) + 0xa0),puVar9);
  FUN_005f9ed0((int)auStack_fc);
  puVar9 = (undefined4 *)FUN_005fbfa0(auStack_fc,2,*(int *)((int)this + 0x388),0);
  uStack_ac = 0x4e;
  FUN_005f59e0((void *)(*(int *)((int)this + 0x3a0) + 0xe8),puVar9);
  uStack_ac = 0x3c;
  FUN_005f9ed0((int)auStack_fc);
  uVar35 = 0;
  puVar34 = &lpType_0000000a;
  (**(code **)(**(int **)((int)this + 0x3a0) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
  *(undefined4 *)((int)this + 0x58c) = 0;
  piVar11 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar11 + 0x10))();
  pvVar8 = operator_new(0x420);
  if (pvVar8 == (void *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    ppuStack_1a0 = &puStack_194;
    puStack_194 = (undefined4 *)((uint)puStack_194 & 0xffffff00);
    uStack_19c = 0;
    puStack_198 = (undefined4 *)&DAT_00000014;
    FUN_004015d0(&ppuStack_1a0,"cos_next-costume",0x10);
    uVar35 = uVar35 | 0x80;
    puStack_1d4 = &stack0xfffffe38;
    _Memory_01 = (undefined2 **)((uint)_Memory_01 & 0xffffff00);
    uStack_1d0 = 0;
    uVar6 = 0x14;
    FUN_004015d0(&puStack_1d4,"button_left.",0xc);
    uVar35 = uVar35 | 0x100;
    uStack_c4 = 0x51;
    puVar9 = FUN_009b5030((undefined4 *)&stack0xfffffe88,&ppuStack_1a0);
    uVar35 = uVar35 | 0x200;
    uStack_c4 = 0x52;
    piVar11 = FUN_0069fb10(pvVar8,(int *)&puStack_1d4,puVar9,0x42800000,0x42800000,0,0,0x3f800000,
                           0x3f800000);
  }
  if (((uVar35 & 0x200) != 0) && (uVar35 = uVar35 & 0xfffffdff, (char *)0xa < pcVar37)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar36);
  }
  if (((uVar35 & 0x100) != 0) && (uVar35 = uVar35 & 0xfffffeff, 0x14 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1d4);
  }
  uStack_c4 = 0x3c;
  if (((char)uVar35 < '\0') && (uVar35 = uVar35 & 0xffffff7f, &DAT_00000014 < puStack_198)) {
                    /* WARNING: Subroutine does not return */
    _free(ppuStack_1a0);
  }
  (**(code **)(*piVar11 + 0x68))();
  uVar33 = 1;
  (**(code **)(*piVar11 + 0x5c))();
  puVar32 = &LAB_0066faf0;
  pvVar8 = this;
  (**(code **)(*piVar11 + 0x18))();
  pcVar10 = "COSTUMEFIDDLER_NEXTCOSTUME";
  (**(code **)(*piVar11 + 0x18))();
  uVar6 = 0;
  puVar36 = (undefined1 *)0x5;
  (**(code **)(*piVar11 + 0x18))();
  FUN_0073e8b0(piVar11,1);
  (**(code **)(*(int *)((int)this + 0x594) + 4))();
  *(int **)((int)this + 0x5a8) = piVar11;
  (*(code *)**(undefined4 **)((int)this + 0x594))();
  (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
  pvVar7 = operator_new(0x420);
  if (pvVar7 == (void *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    puVar34 = &stack0xfffffe1c;
    uVar35 = 0x14;
    FUN_004015d0(&stack0xfffffe10,"cos_next-costume",0x10);
    uVar6 = uVar6 | 0x400;
    pcVar10 = &stack0xfffffde8;
    pvVar8 = (void *)((uint)pvVar8 & 0xffffff00);
    puVar32 = (undefined1 *)0x14;
    FUN_004015d0(&stack0xfffffddc,"button_right.",0xd);
    uVar6 = uVar6 | 0x800;
    pcStack_114 = (char *)0x58;
    puVar9 = FUN_009b5030((undefined4 *)&stack0xfffffe38,(undefined4 *)&stack0xfffffe10);
    uVar6 = uVar6 | 0x1000;
    pcStack_114 = (char *)0x59;
    puStack_26c = (void *)0x673553;
    piVar11 = FUN_0069fb10(pvVar7,(int *)&stack0xfffffddc,puVar9,0x42800000,0x42800000,0,0,
                           0x3f800000,0x3f800000);
  }
  if (((uVar6 & 0x1000) != 0) && (uVar6 = uVar6 & 0xffffefff, &lpType_0000000a < puVar39)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_01);
  }
  if (((uVar6 & 0x800) != 0) && (uVar6 = uVar6 & 0xfffff7ff, (undefined1 *)0x14 < puVar32)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar10);
  }
  pcStack_114 = (char *)0x3c;
  if (((uVar6 & 0x400) != 0) && (uVar6 = uVar6 & 0xfffffbff, 0x14 < uVar35)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar34);
  }
  uVar35 = *(uint *)((int)this + 0x388);
  (**(code **)(*piVar11 + 0x68))();
  pvVar31 = (void *)0x43180000;
  (**(code **)(*piVar11 + 0x5c))();
  puStack_26c = &LAB_0066fbb0;
  puStack_270 = (undefined1 *)0x0;
  pcStack_274 = (char *)0x67362e;
  (**(code **)(*piVar11 + 0x18))();
  pcStack_274 = "COSTUMEFIDDLER_PREVCOSTUME";
  puStack_27c = &LAB_0066fb70;
  ppcStack_280 = (char **)0x3;
  puStack_278 = this;
  (**(code **)(*piVar11 + 0x18))();
  bVar40 = 0;
  (**(code **)(*piVar11 + 0x18))();
  piStack_298 = (int *)0x673660;
  FUN_0073e8b0(piVar11,0);
  (**(code **)(*(int *)((int)this + 0x5ac) + 4))();
  *(int **)((int)this + 0x5c0) = piVar11;
  (*(code *)**(undefined4 **)((int)this + 0x5ac))();
  piStack_298 = piVar11;
  (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
  pvVar7 = operator_new(0x420);
  if (pvVar7 == (void *)0x0) {
    ppcStack_280 = (char **)0x0;
  }
  else {
    puVar36 = &stack0xfffffdcc;
    uVar6 = 0x14;
    FUN_004015d0(&stack0xfffffdc0,"button_save-costume",0x13);
    pcStack_274 = &stack0xfffffd98;
    puStack_270 = (undefined1 *)0x0;
    puStack_26c = (undefined1 *)0x14;
    FUN_004015d0(&pcStack_274,"button_save.",0xc);
    puVar9 = FUN_009b5030((undefined4 *)&stack0xfffffde8,(undefined4 *)&stack0xfffffdc0);
    bVar40 = 0xe0;
    uStack_2bc = 0x673772;
    ppcStack_280 = (char **)FUN_0069fb10(pvVar7,(int *)&pcStack_274,puVar9,0x42400000,0x42400000,0,0
                                         ,0x3f800000,0x3f800000);
  }
  ppcVar4 = ppcStack_280;
  if (((char)bVar40 < '\0') && (bVar40 = bVar40 & 0x7f, 10 < uVar33)) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar8);
  }
  if (((bVar40 & 0x40) != 0) && (bVar40 = bVar40 & 0xbf, (undefined1 *)0x14 < puStack_26c)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_274);
  }
  if (((bVar40 & 0x20) != 0) && (0x14 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar36);
  }
  (**(code **)(*ppcStack_280 + 0x18))();
  pcVar10 = "COSTUMEFIDDLER_SAVE";
  puVar39 = &LAB_005f37f0;
  piVar11 = (int *)0x5;
  uStack_2bc = 0x673838;
  (**(code **)(*ppcVar4 + 0x18))();
  uStack_2bc = 0xc1800000;
  piStack_2c0 = piStack_298;
  pvStack_2c4 = (void *)0x1;
  pvStack_2c8 = (void *)0x67384b;
  (**(code **)(*ppcVar4 + 0x60))();
  pvStack_2c8 = (void *)0x41800000;
  (**(code **)(*ppcVar4 + 0x68))();
  (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
  (**(code **)(*(int *)((int)this + 0x4bc) + 4))();
  *(char ***)((int)this + 0x4d0) = ppcVar4;
  (*(code *)**(undefined4 **)((int)this + 0x4bc))();
  if ((DAT_0104d8e8 == 0) && (cVar5 = FUN_00430e40((int)puStack_198), cVar5 != '\0')) {
    (**(code **)(**(int **)((int)this + 0x4d0) + 0xc0))();
  }
  pvVar8 = operator_new(0x420);
  pvStack_2c4 = pvVar8;
  if (pvVar8 == (void *)0x0) {
    piVar12 = (int *)0x0;
  }
  else {
    ppcStack_280 = &pcStack_274;
    pcStack_274 = (char *)((uint)pcStack_274 & 0xffffff00);
    puStack_27c = (undefined1 *)0x0;
    puStack_278 = &DAT_00000014;
    FUN_004015d0(&ppcStack_280,"button_revert",0xd);
    pvStack_2c8 = (void *)((uint)pvStack_2c8 | 0x10000);
    puVar39 = &stack0xfffffd58;
    pcVar10 = (char *)0x14;
    FUN_004015d0(&stack0xfffffd4c,"button_goback.",0xe);
    pvStack_2c8 = (void *)((uint)pvStack_2c8 | 0x20000);
    pvStack_1a4 = (void *)0x66;
    puVar9 = FUN_009b5030((undefined4 *)&stack0xfffffda8,&ppcStack_280);
    pvStack_2c8 = (void *)((uint)pvStack_2c8 | 0x40000);
    pvStack_1a4 = (void *)0x67;
    uStack_2fc = 0x67399f;
    piVar12 = FUN_0069fb10(pvVar8,(int *)&stack0xfffffd4c,puVar9,0x42800000,0x42800000,0,0,
                           0x3f800000,0x3f800000);
  }
  if ((((uint)pvStack_2c8 & 0x40000) != 0) &&
     (pvStack_2c8 = (void *)((uint)pvStack_2c8 & 0xfffbffff), 10 < uVar35)) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar31);
  }
  if ((((uint)pvStack_2c8 & 0x20000) != 0) &&
     (pvStack_2c8 = (void *)((uint)pvStack_2c8 & 0xfffdffff), (char *)0x14 < pcVar10)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar39);
  }
  pvStack_1a4 = (void *)0x3c;
  if ((((uint)pvStack_2c8 & 0x10000) != 0) &&
     (pvStack_2c8 = (void *)((uint)pvStack_2c8 & 0xfffeffff), &DAT_00000014 < puStack_278)) {
                    /* WARNING: Subroutine does not return */
    _free(ppcStack_280);
  }
  uVar6 = 0;
  piVar24 = this;
  (**(code **)(*piVar12 + 0x18))();
  puVar36 = (undefined1 *)0x0;
  uStack_2fc = 0x673a68;
  (**(code **)(*piVar12 + 0x18))();
  uStack_300 = *(uint *)((int)this + 0x388);
  uStack_2fc = 0x41000000;
  puStack_304 = (undefined4 *)0x1;
  pvStack_308 = (void *)0x673a7d;
  (**(code **)(*piVar12 + 0x5c))();
  uStack_30c = *(undefined4 *)((int)this + 0x388);
  pvStack_308 = (void *)0x41000000;
  uStack_310 = 1;
  uStack_314 = 0x673a92;
  (**(code **)(*piVar12 + 100))();
  uStack_314 = 2;
  piStack_318 = piVar12;
  (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
  puStack_304 = operator_new(0x3fc);
  if (puStack_304 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = FUN_00833290(puStack_304);
  }
  (**(code **)(*(int *)((int)this + 0x404) + 4))();
  *(undefined4 **)((int)this + 0x418) = puVar9;
  (*(code *)**(undefined4 **)((int)this + 0x404))();
  puVar9 = FUN_009b5030(&piStack_298,(undefined4 *)((int)this + 0x52c));
  puStack_328 = (undefined4 *)0x673b44;
  sVar13 = FUN_00ace02d(L"<table><tr><td align=center width=200><h2>");
  FUN_0040cae0(&stack0xfffffdac,L"<table><tr><td align=center width=200><h2>",sVar13);
  FUN_0040cae0(&stack0xfffffdac,(wchar_t *)*puVar9,puVar9[1]);
  sVar13 = FUN_00ace02d(L"</h2></td></tr></table>");
  FUN_0040cae0(&stack0xfffffdac,L"</h2></td></tr></table>",sVar13);
  puVar34 = &stack0xfffffdac;
  (**(code **)(**(int **)((int)this + 0x418) + 0x54))();
  (**(code **)(**(int **)((int)DAT_0104daa0 + 0x418) + 0x78))();
  _Memory_00 = (int **)0x0;
  puStack_328 = (undefined4 *)0x673bdc;
  (**(code **)(**(int **)((int)this + 0x418) + 0x8c))();
  puStack_328 = (undefined4 *)0x673be9;
  fVar26 = (float10)(**(code **)(**(int **)((int)this + 0x418) + 0x10))();
  pvStack_308 = (void *)(float)fVar26;
  puStack_328 = (undefined4 *)0x673bf8;
  fVar26 = (float10)(**(code **)(**(int **)((int)this + 0x388) + 0x10))();
  uStack_32c = *(undefined4 *)((int)this + 0x388);
  puStack_328 = (undefined4 *)
                (float)(fVar26 * (float10)0.6666667 - (float10)(float)pvStack_308 * (float10)0.5);
  puStack_330 = (undefined1 *)0x1;
  (**(code **)(**(int **)((int)this + 0x418) + 0x5c))();
  uStack_338 = *(uint *)((int)this + 0x388);
  (**(code **)(**(int **)((int)this + 0x418) + 0x68))();
  (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
  (**(code **)(**(int **)((int)this + 0x418) + 0x50))();
  do {
    cVar5 = FUN_007421c0(this);
  } while (cVar5 != '\0');
  pvVar8 = operator_new(0x420);
  if (pvVar8 == (void *)0x0) {
    puStack_328 = (undefined4 *)0x0;
  }
  else {
    puVar36 = &stack0xfffffd1c;
    uVar6 = 0x14;
    FUN_004015d0(&stack0xfffffd10,"button_categorynext",0x13);
    _Memory_00 = &piStack_318;
    piStack_318 = (int *)((uint)piStack_318 & 0xffffff00);
    puVar34 = &DAT_00000014;
    FUN_004015d0(&stack0xfffffcdc,"button_catnext.",0xf);
    puVar9 = FUN_009b5030(&pvStack_2c8,(undefined4 *)&stack0xfffffd10);
    uStack_338 = uStack_338 | 0x380000;
    pcStack_36c = (code *)0x673d54;
    puStack_328 = FUN_0069fb10(pvVar8,(int *)&stack0xfffffcdc,puVar9,0x42000000,0x42000000,0,0,
                               0x3f800000,0x3f800000);
  }
  (**(code **)(*(int *)((int)this + 0x434) + 4))();
  *(undefined4 **)((int)this + 0x448) = puStack_328;
  (*(code *)**(undefined4 **)((int)this + 0x434))();
  if (((uStack_338 & 0x200000) != 0) &&
     (uStack_338 = uStack_338 & 0xffdfffff, &lpType_0000000a < piStack_2c0)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_2c8);
  }
  if (((uStack_338 & 0x100000) != 0) &&
     (uStack_338 = uStack_338 & 0xffefffff, &DAT_00000014 < puVar34)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  if (((uStack_338 & 0x80000) != 0) && (0x14 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar36);
  }
  pvVar8 = *(void **)((int)this + 0x418);
  (**(code **)(**(int **)((int)this + 0x448) + 0x5c))();
  uVar6 = *(uint *)((int)this + 0x388);
  pvVar7 = (void *)0x40800000;
  (**(code **)(**(int **)((int)this + 0x448) + 0x68))();
  pcVar10 = "COSTUMEFIDDLER_WARDROBECHANGED";
  pcStack_36c = FUN_00671130;
  uStack_370 = 0;
  pcStack_374 = (char *)0x673e64;
  (**(code **)(**(int **)((int)this + 0x448) + 0x18))();
  pcStack_374 = "COSTUMEFIDDLER_WARDROVECHANGED";
  (**(code **)(**(int **)((int)this + 0x448) + 0x18))();
  FUN_0073e8b0(*(void **)((int)this + 0x448),0);
  (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
  pcVar37 = operator_new(0x420);
  bVar25 = pcVar37 == (char *)0x0;
  pcStack_374 = pcVar37;
  if (bVar25) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puStack_330 = &stack0xfffffcdc;
    uStack_32c = 0;
    puStack_328 = (undefined4 *)&DAT_00000014;
    FUN_004015d0(&puStack_330,"button_categoryprev",0x13);
    pcVar10 = &stack0xfffffca8;
    pvVar7 = (void *)((uint)pvVar7 & 0xffffff00);
    uVar6 = 0x14;
    FUN_004015d0(&stack0xfffffc9c,"button_catprev.",0xf);
    puVar9 = FUN_009b5030(&pvStack_308,&puStack_330);
    puStack_3ac = (undefined4 *)0x673f83;
    puVar9 = FUN_0069fb10(pcVar37,(int *)&stack0xfffffc9c,puVar9,0x42000000,0x42000000,0,0,
                          0x3f800000,0x3f800000);
  }
  (**(code **)(*(int *)((int)this + 0x41c) + 4))();
  *(undefined4 **)((int)this + 0x430) = puVar9;
  (*(code *)**(undefined4 **)((int)this + 0x41c))();
  if ((!bVar25) && (10 < uStack_300)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_308);
  }
  if ((!bVar25) && (0x14 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar10);
  }
  if ((!bVar25) && (&DAT_00000014 < puStack_328)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_330);
  }
  uVar35 = 0;
  pcVar30 = FUN_006700d0;
  _Memory = (void *)0x0;
  (**(code **)(**(int **)((int)this + 0x430) + 0x18))();
  pcVar10 = "COSTUMEFIDDLER_WARDROVECHANGED";
  puVar36 = &LAB_005f37f0;
  puStack_3ac = (undefined4 *)0x67407d;
  (**(code **)(**(int **)((int)this + 0x430) + 0x18))();
  puStack_3b0 = *(undefined4 **)((int)this + 0x418);
  puStack_3ac = (undefined4 *)0x0;
  puStack_3b4 = (undefined4 *)0x1;
  fStack_3b8 = 9.48222e-39;
  (**(code **)(**(int **)((int)this + 0x430) + 0x60))();
  puStack_3bc = *(undefined4 **)((int)this + 0x388);
  fStack_3b8 = 4.0;
  (**(code **)(**(int **)((int)this + 0x430) + 0x68))();
  FUN_0073e8b0(*(void **)((int)this + 0x430),1);
  uStack_3c8 = *(uint *)((int)this + 0x430);
  uVar6 = 0;
  (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
  pvVar31 = operator_new(0x288);
  puStack_3b4 = pvVar31;
  if (pvVar31 == (void *)0x0) {
    puStack_3ac = (undefined4 *)0x0;
  }
  else {
    puVar36 = &stack0xfffffc68;
    _Memory = (void *)((uint)_Memory & 0xffffff00);
    pcVar10 = &DAT_00000014;
    uStack_3d4 = 0x67410b;
    FUN_004015d0(&stack0xfffffc5c,"ui/dialogue_whitebox.dds",0x18);
    fStack_3b8 = (float)((uint)fStack_3b8 | 0x2000000);
    puStack_3ac = FUN_005e8fd0(pvVar31,(undefined4 *)&stack0xfffffc5c);
  }
  if ((((uint)fStack_3b8 & 0x2000000) != 0) &&
     (fStack_3b8 = (float)((uint)fStack_3b8 & 0xfdffffff), &DAT_00000014 < pcVar10)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar36);
  }
  FUN_005e7a00(puStack_3ac,0);
  puStack_3b4 = operator_new(0x344);
  if (puStack_3b4 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = FUN_007432f0(puStack_3b4);
  }
  (**(code **)(*(int *)((int)this + 0x44c) + 4))();
  *(undefined4 **)((int)this + 0x460) = puVar9;
  (*(code *)**(undefined4 **)((int)this + 0x44c))();
  (**(code **)(**(int **)((int)this + 0x460) + 0xa0))();
  uStack_3d4 = *(undefined4 *)((int)this + 0x388);
  puVar36 = (undefined1 *)0x40000000;
  piStack_3d8 = (int *)0x2;
  fStack_3dc = 9.482711e-39;
  (**(code **)(**(int **)((int)this + 0x460) + 0x68))();
  iVar38 = *(int *)((int)this + 0x418);
  fStack_3dc = 9.482735e-39;
  fVar26 = (float10)(**(code **)(**(int **)((int)this + 0x388) + 0x14))();
  fStack_3dc = (float)((fVar26 - (float10)*(float *)(iVar38 + 0x9c)) + (float10)4.0);
  fStack_3b8 = (*(float *)(*(int *)((int)this + 0x448) + 0x108) -
               *(float *)(*(int *)((int)this + 0x430) + 0xc0)) + 16.0;
  puStack_3e0 = (undefined4 *)0x674244;
  (**(code **)(**(int **)((int)this + 0x460) + 0x7c))();
  puStack_3e0 = puStack_3bc;
  pvStack_3e4 = (void *)0x674254;
  (**(code **)(**(int **)((int)this + 0x460) + 0x78))();
  puStack_3e8 = *(undefined4 **)((int)this + 0x430);
  pvStack_3e4 = (void *)0xc1000000;
  (**(code **)(**(int **)((int)this + 0x460) + 0x5c))();
  piVar12 = *(int **)((int)this + 0x460);
  (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
  FUN_00671680(puVar39);
  FUN_005e98d0(DAT_0104d82c,extraout_EDX);
  if (DAT_0104d8e8 == 0) {
    puStack_3e0 = operator_new(0x344);
    piStack_2c0._0_1_ = 0x7f;
    if (puStack_3e0 != (undefined4 *)0x0) {
      FUN_007432f0(puStack_3e0);
    }
    piStack_2c0._0_1_ = 0x6c;
    puStack_3e0 = operator_new(0x344);
    piStack_2c0._0_1_ = 0x80;
    if (puStack_3e0 == (undefined4 *)0x0) {
      piVar14 = (int *)0x0;
    }
    else {
      piVar14 = FUN_007432f0(puStack_3e0);
    }
    piStack_2c0._0_1_ = 0x6c;
    puStack_3e0 = operator_new(0x3fc);
    piStack_2c0._0_1_ = 0x81;
    if (puStack_3e0 == (undefined4 *)0x0) {
      piVar15 = (int *)0x0;
    }
    else {
      piVar15 = FUN_00833290(puStack_3e0);
    }
    pvVar31 = (void *)(uVar6 & 0xffff0000);
    uStack_3c8 = 10;
    piStack_3d8 = piVar15;
    uVar6 = FUN_00ace02d(L"<nobr><t1>");
    FUN_004036d0(&stack0xfffffc30,L"<nobr><t1>",uVar6);
    pcVar10 = &stack0xfffffc70;
    uVar35 = uVar35 & 0xffffff00;
    _Memory = (void *)0x0;
    pcVar30 = (code *)0x14;
    FUN_004015d0(&stack0xfffffc64,"COSTUME_WARDROBE-DEPT_IMAGE",0x1b);
    piStack_2c0._0_1_ = 0x83;
    puVar9 = FUN_009b5030(&pcStack_374,(undefined4 *)&stack0xfffffc64);
    FUN_0040cae0(&stack0xfffffc30,(wchar_t *)*puVar9,puVar9[1]);
    if ((code *)0xa < pcStack_36c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_374);
    }
    piStack_2c0 = (int *)CONCAT31(piStack_2c0._1_3_,0x82);
    if ((code *)0x14 < pcVar30) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar10);
    }
    sVar13 = FUN_00ace02d(L":</t1></nobr>");
    FUN_0040cae0(&stack0xfffffc30,L":</t1></nobr>",sVar13);
    (**(code **)(*piVar15 + 0x54))();
    (**(code **)(*piVar15 + 0x84))();
    (**(code **)(*piVar15 + 100))();
    (**(code **)(*piVar15 + 0x5c))();
    (**(code **)(*piVar14 + 0xc))();
    pvVar16 = operator_new(0x4dc);
    if (pvVar16 == (void *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_007ac880(pvVar16,1,0,0,0);
    }
    (**(code **)(*(int *)((int)this + 0x71c) + 4))();
    *(undefined4 **)((int)this + 0x730) = puVar9;
    (*(code *)**(undefined4 **)((int)this + 0x71c))();
    pvVar16 = (void *)FUN_00ace790(piVar24,0,&TM::CStaff::RTTI_Type_Descriptor,
                                   &TM::CStar::RTTI_Type_Descriptor,0);
    if (pvVar16 == (void *)0x0) {
      *(undefined4 *)((int)this + 0x750) = 0;
      *(undefined4 *)((int)this + 0x74c) = 0;
    }
    else {
      iVar38 = FUN_0059c6e0(pvVar16,'\0');
      FUN_00403de0(&stack0xfffffc64,(undefined4 *)(iVar38 + 0x78));
      FUN_00403de0(&stack0xfffffc3c,(undefined4 *)&stack0xfffffc64);
      fVar17 = (float)FUN_00959a40((undefined4 *)&stack0xfffffc3c);
      pfVar18 = (float *)FUN_0058fb60(pvVar16,(undefined4 *)&stack0xfffffbf8,fVar17);
      fVar17 = *pfVar18;
      *(float *)((int)this + 0x750) = fVar17;
      *(float *)((int)this + 0x74c) = fVar17;
      *(float *)((int)this + 0x754) = fVar17;
      *(float *)((int)this + 0x758) = fVar17;
      FUN_00407070(&stack0xfffffbdc,fVar17);
      FUN_0066c5d0(this);
      FUN_0066b850((int)this);
      if (&DAT_00000014 < puStack_3bc) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar31);
      }
      if ((code *)0x14 < pcVar30) {
                    /* WARNING: Subroutine does not return */
        _free(pcVar10);
      }
    }
    bVar25 = FUN_00881aa0(*(void **)(*(int *)((int)this + 0x730) + 0x358),"threshold01");
    piVar24 = extraout_ECX;
    if (bVar25) {
      uVar28 = FUN_00acd42c();
      FUN_00881c00(*(void **)(*(int *)((int)this + 0x730) + 0x358),"threshold01",(uint)uVar28);
      piVar24 = extraout_ECX_00;
    }
    piVar15 = *(int **)((int)this + 0x730);
    iVar38 = *piVar15;
    puVar36 = &stack0xfffffbdc;
    FUN_00407070(&stack0xfffffbdc,*(float *)((int)this + 0x74c));
    (**(code **)(iVar38 + 0x10c))();
    (**(code **)(**(int **)((int)this + 0x730) + 100))();
    (**(code **)(**(int **)((int)this + 0x730) + 0x5c))();
    (**(code **)(*piVar14 + 0xc))();
    if (piVar24 != (int *)0x0) {
      (**(code **)(*piVar24 + 100))();
      (**(code **)(*piVar24 + 0x5c))();
      (**(code **)(*piVar14 + 0xc))();
    }
    (**(code **)(*piVar14 + 0x84))();
    fVar26 = (float10)(**(code **)(**(int **)((int)this + 0x730) + 0x10))();
    fVar27 = (float10)(**(code **)(*piVar15 + 0x10))();
    if ((float10)(float)fVar26 <= fVar27) {
      piVar3 = *(int **)((int)this + 0x730);
      (**(code **)(*piVar15 + 0x10))();
      (**(code **)(*piVar3 + 0x10))();
      (**(code **)(**(int **)((int)this + 0x730) + 0x5c))();
      if ((piVar24 != (int *)0x0) && (*(int *)((int)this + 0x478) != 0)) {
        (**(code **)(*piVar24 + 0x5c))();
      }
    }
    (**(code **)(*piVar14 + 0x5c))();
    (**(code **)(*piVar14 + 100))();
    (**(code **)(*piVar12 + 0xc))();
    (**(code **)(*piVar12 + 0x84))();
    (**(code **)(*piVar12 + 0x68))();
    (**(code **)(*piVar12 + 0x5c))();
    in_stack_fffffb74 = piVar12;
    (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
    piStack_2c0 = (int *)CONCAT31(piStack_2c0._1_3_,0x6c);
  }
  if (*(int *)((int)this + 0x3a0) != 0) {
    FUN_00683650(*(int *)((int)this + 0x3a0));
    puVar9 = operator_new(0x344);
    piStack_2c0._0_1_ = 0x87;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_007432f0(puVar9);
    }
    piStack_2c0 = (int *)CONCAT31(piStack_2c0._1_3_,0x6c);
    (**(code **)(*(int *)((int)this + 0x6cc) + 4))();
    *(undefined4 **)((int)this + 0x6e0) = puVar9;
    (*(code *)**(undefined4 **)((int)this + 0x6cc))();
    pvVar16 = (void *)0x42c00000;
    (**(code **)(**(int **)((int)this + 0x6e0) + 0x74))();
    (**(code **)(**(int **)((int)this + 0x6e0) + 0x68))();
    (**(code **)(**(int **)((int)this + 0x6e0) + 0x5c))();
    puVar32 = (undefined1 *)0x0;
    puVar39 = this;
    (**(code **)(**(int **)((int)this + 0x6e0) + 0x18))();
    puVar34 = (undefined1 *)0x0;
    (**(code **)(**(int **)((int)this + 0x6e0) + 0x18))();
    (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
    pvVar31 = operator_new(0x420);
    if (pvVar31 == (void *)0x0) {
      puStack_3e8 = (undefined4 *)0x0;
    }
    else {
      FUN_00401de0(&pvStack_3e4,"button_coschange",0xffffffff);
      uVar6 = (uint)puVar34 | 0x4000000;
      FUN_00401de0(&puStack_3bc,"button_costume.",0xffffffff);
      uVar6 = uVar6 | 0x8000000;
      pvStack_308 = (void *)0x8a;
      puVar9 = FUN_009b5030((undefined4 *)&stack0xfffffc68,&pvStack_3e4);
      puVar34 = (undefined1 *)(uVar6 | 0x10000000);
      pvStack_308 = (void *)0x8b;
      puStack_3e8 = FUN_0069fb10(pvVar31,(int *)&puStack_3bc,puVar9,0x42800000,0x42800000,0,0,
                                 0x3f800000,0x3f800000);
    }
    pvStack_308 = (void *)0x8e;
    (**(code **)(*(int *)((int)this + 0x5dc) + 4))();
    *(undefined4 **)((int)this + 0x5f0) = puStack_3e8;
    (*(code *)**(undefined4 **)((int)this + 0x5dc))();
    if ((((uint)puVar34 & 0x10000000) != 0) &&
       (puVar34 = (undefined1 *)((uint)puVar34 & 0xefffffff), 10 < uVar35)) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    if ((((uint)puVar34 & 0x8000000) != 0) &&
       (puVar34 = (undefined1 *)((uint)puVar34 & 0xf7ffffff), &DAT_00000014 < puStack_3b4)) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_3bc);
    }
    pvStack_308 = (void *)0x6c;
    if ((((uint)puVar34 & 0x4000000) != 0) &&
       (puVar34 = (undefined1 *)((uint)puVar34 & 0xfbffffff), 0x14 < (uint)fStack_3dc)) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_3e4);
    }
    (**(code **)(**(int **)((int)this + 0x5f0) + 0x18))();
    (**(code **)(**(int **)((int)this + 0x5f0) + 0x18))();
    puStack_468 = (undefined1 *)0x0;
    (**(code **)(**(int **)((int)this + 0x5f0) + 0x5c))();
    uVar6 = 0x41800000;
    (**(code **)(**(int **)((int)this + 0x5f0) + 100))();
    FUN_0073e8b0(*(void **)((int)this + 0x5f0),2);
    (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
    if ((DAT_0104d8e8 != 0) &&
       (((DAT_0104a974 == 0 || (*(float *)(DAT_0104a974 + 0x80) == 0.0)) && (DAT_0104da70 != 0)))) {
      pvVar31 = operator_new(0x420);
      if (pvVar31 == (void *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        FUN_00401de0(&stack0xfffffbdc,"button_viewcharacters_stunt",0xffffffff);
        uVar6 = uVar6 | 0x20000000;
        FUN_00401de0(&piStack_3d8,"button_dummy.",0xffffffff);
        puVar9 = (undefined4 *)&stack0xfffffbdc;
        puVar22 = (undefined4 *)&stack0xfffffc68;
        uVar6 = uVar6 | 0x40000000;
        uVar29 = 0x674b44;
        puVar19 = FUN_009b5030(puVar22,puVar9);
        puStack_468 = &stack0xfffffb74;
        uVar6 = uVar6 | 0x80000000;
        CRect::CRect((CRect *)&stack0xfffffb74,0,0,0x3f800000,0x3f800000);
        puVar9 = FUN_0069fb10(pvVar31,(int *)&piStack_3d8,puVar19,0x42800000,0x42800000,
                              in_stack_fffffb74,uVar29,puVar22,puVar9);
      }
      FUN_00413250((void *)((int)this + 0x5f4),(int)puVar9);
      if ((int)uVar6 < 0) {
        uVar6 = uVar6 & 0x7fffffff;
        FUN_00403650((undefined4 *)&stack0xfffffc68);
      }
      if ((uVar6 & 0x40000000) != 0) {
        uVar6 = uVar6 & 0xbfffffff;
        FUN_00401490(&piStack_3d8);
      }
      if ((uVar6 & 0x20000000) != 0) {
        FUN_00401490((undefined4 *)&stack0xfffffbdc);
      }
      (**(code **)(**(int **)((int)this + 0x608) + 0x18))();
      (**(code **)(**(int **)((int)this + 0x608) + 0x5c))();
      (**(code **)(**(int **)((int)this + 0x608) + 100))();
      (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
      puVar9 = operator_new(0x3fc);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = FUN_00833290(puVar9);
      }
      FUN_004427a0((void *)((int)this + 0x3d4),(int)puVar9);
      (**(code **)(**(int **)((int)this + 1000) + 0x68))();
      (**(code **)(**(int **)((int)this + 1000) + 0x5c))(2,*(undefined4 *)((int)this + 0x3d0));
      FUN_00421240(&stack0xfffffbbc,
                   L"<table><tr><td align=center width=340><t1><translate>COSTUMEFIDDLER_STUNTDOUBLE</translate></t1></td></tr></table>"
                   ,0xffffffff);
      (**(code **)(**(int **)((int)this + 1000) + 0x54))(&stack0xfffffbbc);
      (**(code **)(**(int **)((int)this + 1000) + 0x84))(0);
      if ((*(int *)(DAT_0104da6c + 0x814) == 0x10) && (*(int *)(DAT_0104da70 + 0x814) != 0x10)) {
        FUN_00401de0(&stack0xfffffbd8,"button_viewcharacters_star",0xffffffff);
        puVar9 = FUN_009b5030(&puStack_3e8,(undefined4 *)&stack0xfffffbd8);
        (**(code **)(**(int **)((int)this + 0x608) + 0x90))(puVar9);
        FUN_00403650(&puStack_3e8);
        FUN_00401490((undefined4 *)&stack0xfffffbd8);
        uVar29 = 0;
      }
      else {
        uVar29 = 0x440c0000;
      }
      (**(code **)(**(int **)((int)this + 1000) + 0x5c))
                (1,*(undefined4 *)((int)this + 0x388),uVar29);
      (**(code **)(**(int **)((int)this + 0x388) + 0xc))(*(undefined4 *)((int)this + 1000),1);
      (**(code **)(**(int **)((int)this + 1000) + 0x20))(0);
      if (&lpType_0000000a < piVar12) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar16);
      }
    }
    pvVar31 = operator_new(0x420);
    bVar25 = pvVar31 == (void *)0x0;
    if (bVar25) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      FUN_00401de0(&stack0xfffffbdc,"cos_button_randomisecostume",0xffffffff);
      FUN_00401de0(&stack0xfffffc04,"button_randomize.",0xffffffff);
      puVar9 = FUN_009b5030(&piStack_3d8,(undefined4 *)&stack0xfffffbdc);
      puStack_468 = &stack0xfffffb74;
      puVar9 = FUN_0069fb10(pvVar31,(int *)&stack0xfffffc04,puVar9,0x42400000,0x42400000,0,0,
                            0x3f800000,0x3f800000);
    }
    (**(code **)(*(int *)((int)this + 0x60c) + 4))();
    *(undefined4 **)((int)this + 0x620) = puVar9;
    (*(code *)**(undefined4 **)((int)this + 0x60c))();
    if ((!bVar25) && (&lpType_0000000a < puVar36)) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_3d8);
    }
    if ((!bVar25) && (&DAT_00000014 < piVar12)) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar16);
    }
    if (&DAT_00000014 < puVar39) {
                    /* WARNING: Subroutine does not return */
      _free(puVar32);
    }
    (**(code **)(**(int **)((int)this + 0x620) + 0x18))();
    (**(code **)(**(int **)((int)this + 0x620) + 0x60))();
    (**(code **)(**(int **)((int)this + 0x620) + 100))();
    (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
    pvVar31 = operator_new(0x360);
    if (pvVar31 == (void *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      FUN_00401de0(&stack0xfffffbd4,"ui/costume_shared.dds",0xffffffff);
      puStack_468 = (undefined1 *)((uint)puStack_468 | 8);
      puVar9 = FUN_0069d820(pvVar31,(undefined4 *)&stack0xfffffbd4,0,0,0x3f800000,0x3f800000);
    }
    (**(code **)(*(int *)((int)this + 0x624) + 4))();
    *(undefined4 **)((int)this + 0x638) = puVar9;
    (*(code *)**(undefined4 **)((int)this + 0x624))();
    if ((((uint)puStack_468 & 8) != 0) && (&DAT_00000014 < puVar32)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar34);
    }
    (**(code **)(**(int **)((int)this + 0x638) + 0x74))();
    (**(code **)(**(int **)((int)this + 0x638) + 0x68))(1);
    (**(code **)(**(int **)((int)this + 0x638) + 0x5c))(1,*(undefined4 *)((int)this + 0x5f0),0);
    (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))(*(undefined4 *)((int)this + 0x638),1);
    puVar9 = operator_new(0x3fc);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_00833290(puVar9);
    }
    (**(code **)(*(int *)((int)this + 0x66c) + 4))();
    *(undefined4 **)((int)this + 0x680) = puVar9;
    (*(code *)**(undefined4 **)((int)this + 0x66c))();
    piVar12 = (int *)FUN_00683520(*(int *)((int)this + 0x3a0));
    puVar9 = (undefined4 *)(**(code **)(*piVar12 + 0x10))(&stack0xfffffbd0);
    sVar13 = FUN_00ace02d(L"<h2><nobr>");
    FUN_0040cae0(&stack0xfffffb4c,L"<h2><nobr>",sVar13);
    FUN_0040cae0(&stack0xfffffb4c,(wchar_t *)*puVar9,puVar9[1]);
    sVar13 = FUN_00ace02d(L"</nobr></h2>");
    FUN_0040cae0(&stack0xfffffb4c,L"</nobr></h2>",sVar13);
    if (&lpType_0000000a < puVar34) {
                    /* WARNING: Subroutine does not return */
      _free((void *)0x5);
    }
    (**(code **)(**(int **)((int)this + 0x680) + 0x54))(&stack0xfffffb4c);
    (**(code **)(**(int **)((int)this + 0x680) + 0x84))(0);
    fVar26 = (float10)(**(code **)(**(int **)((int)this + 0x680) + 0x10))();
    fVar17 = (float)fVar26;
    fVar26 = (float10)(**(code **)(**(int **)((int)this + 0x5f0) + 0x10))();
    (**(code **)(**(int **)((int)this + 0x680) + 0x5c))
              (1,*(undefined4 *)((int)DAT_0104daa0 + 0x5f0),
               (float)(fVar26 * (float10)0.5 - (float10)fVar17 * (float10)0.5));
    (**(code **)(**(int **)((int)this + 0x680) + 0x68))
              (1,*(undefined4 *)((int)this + 0x5f0),0xc33e0000);
    (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))(*(undefined4 *)((int)this + 0x680),1);
    FUN_0066da70((int)this);
    if (DAT_0104d8e8 == 0) {
      pvVar7 = operator_new(0x4dc);
      piStack_2c0._0_1_ = 0xa6;
      if (pvVar7 == (void *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = FUN_007ac880(pvVar7,1,0,0,0);
      }
      piStack_2c0._0_1_ = 0xa5;
      (**(code **)(*(int *)((int)this + 0x734) + 4))();
      *(undefined4 **)((int)this + 0x748) = puVar9;
      (*(code *)**(undefined4 **)((int)this + 0x734))();
      pvVar7 = (void *)FUN_00ace790(piVar11,0,&TM::CStaff::RTTI_Type_Descriptor,
                                    &TM::CStar::RTTI_Type_Descriptor,0);
      iVar38 = FUN_0059c6e0(piVar11,'\0');
      FUN_00403de0(&stack0xfffffcb0,(undefined4 *)(iVar38 + 0x78));
      piStack_2c0._0_1_ = 0xa7;
      FUN_006839e0(*(void **)((int)this + 0x3a0),(undefined4 *)&stack0xfffffc64);
      FUN_00403de0(&pcStack_374,(undefined4 *)&stack0xfffffc64);
      piStack_2c0 = (int *)CONCAT31(piStack_2c0._1_3_,0xa9);
      fVar17 = (float)FUN_00959a40(&pcStack_374);
      puVar9 = FUN_0058fb60(pvVar7,(undefined4 *)&stack0xfffffc58,fVar17);
      *(undefined4 *)((int)this + 0x754) = *puVar9;
      bVar25 = FUN_00881aa0(*(void **)(*(int *)((int)this + 0x748) + 0x358),"threshold01");
      if (bVar25) {
        uVar28 = FUN_00acd42c();
        FUN_00881c00(*(void **)(*(int *)((int)this + 0x748) + 0x358),"threshold01",(uint)uVar28);
      }
      iVar38 = **(int **)((int)this + 0x748);
      FUN_00407070(&stack0xfffffc04,*(float *)((int)this + 0x74c));
      (**(code **)(iVar38 + 0x10c))();
      (**(code **)(**(int **)((int)this + 0x748) + 100))();
      piVar11 = *(int **)((int)this + 0x748);
      (**(code **)(**(int **)((int)this + 0x5f0) + 0x10))();
      (**(code **)(*piVar11 + 0x10))();
      (**(code **)(**(int **)((int)this + 0x748) + 0x5c))();
      (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
      if (&DAT_00000014 < pcStack_36c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_374);
      }
      if (&DAT_00000014 < pcVar30) {
                    /* WARNING: Subroutine does not return */
        _free(pcVar10);
      }
                    /* WARNING: Subroutine does not return */
      _free(pvVar8);
    }
    piStack_2c0 = (int *)CONCAT31(piStack_2c0._1_3_,0x6c);
    if (10 < uStack_3c8) {
                    /* WARNING: Subroutine does not return */
      _free(puVar36);
    }
  }
  do {
    cVar5 = FUN_007421c0(this);
  } while (cVar5 != '\0');
  iVar38 = FUN_00435160(*(int *)((int)this + 0x518));
  *(int *)((int)this + 0x58c) = iVar38;
  if ((*(int *)(iVar38 + 0xcc) != 0) && (0 < *(int *)(*(int *)(iVar38 + 0xcc) + 0x28))) {
    pvVar8 = operator_new(0x3f4);
    piStack_2c0._0_1_ = 0xaa;
    if (pvVar8 == (void *)0x0) {
      ppppiVar21 = (int ****)0x0;
    }
    else {
      pppiVar20 = (int ***)FUN_00433ab0(*(int *)((int)this + 0x518));
      ppppiVar21 = FUN_0067dc80(pvVar8,pppiVar20);
    }
    piStack_2c0 = (int *)CONCAT31(piStack_2c0._1_3_,0x6c);
    (**(code **)(*(int *)((int)this + 0x69c) + 4))();
    *(int *****)((int)this + 0x6b0) = ppppiVar21;
    (*(code *)**(undefined4 **)((int)this + 0x69c))();
    (**(code **)(**(int **)((int)this + 0x6b0) + 0x84))();
    (**(code **)(**(int **)((int)this + 0x6b0) + 0x5c))();
    (**(code **)(**(int **)((int)this + 0x6b0) + 0x14))();
    (**(code **)(**(int **)((int)this + 0x6b0) + 100))();
    (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
    pvVar8 = operator_new(0x3f4);
    if (pvVar8 == (void *)0x0) {
      ppppiVar21 = (int ****)0x0;
    }
    else {
      pppiVar20 = (int ***)FUN_00433ab0(*(int *)((int)this + 0x518));
      ppppiVar21 = FUN_0067f490(pvVar8,pppiVar20);
    }
    (**(code **)(*(int *)((int)this + 0x6b4) + 4))();
    *(int *****)((int)this + 0x6c8) = ppppiVar21;
    (*(code *)**(undefined4 **)((int)this + 0x6b4))();
    (**(code **)(**(int **)((int)this + 0x6c8) + 0x84))();
    (**(code **)(**(int **)((int)this + 0x6c8) + 0x5c))();
    (**(code **)(**(int **)((int)this + 0x6c8) + 0x14))();
    (**(code **)(**(int **)((int)this + 0x6c8) + 100))();
    (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
  }
  puVar9 = operator_new(0x344);
  piStack_2c0._0_1_ = 0xac;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = FUN_007432f0(puVar9);
  }
  piStack_2c0 = (int *)CONCAT31(piStack_2c0._1_3_,0x6c);
  (**(code **)(*(int *)((int)this + 0x4ec) + 4))();
  *(undefined4 **)((int)this + 0x500) = puVar9;
  (*(code *)**(undefined4 **)((int)this + 0x4ec))();
  puVar1 = (uint *)(*(int *)((int)this + 0x500) + 0x114);
  *puVar1 = *puVar1 | 8;
  (**(code **)(**(int **)((int)this + 0x500) + 0x70))();
  puStack_3b0 = operator_new(0x50);
  pvStack_2c8._0_1_ = 0xad;
  if (puStack_3b0 != (undefined4 *)0x0) {
    FUN_005e4870(puStack_3b0);
  }
  pvStack_2c8 = (void *)CONCAT31(pvStack_2c8._1_3_,0x6c);
  (**(code **)(**(int **)((int)this + 0x500) + 0xa0))();
  piVar11 = (int *)(**(code **)(**(int **)((int)this + 0x500) + 0xa4))();
  fStack_3b8 = -0.0;
  (**(code **)(*piVar11 + 0xc))();
  (**(code **)(**(int **)((int)this + 0x500) + 0x20))();
  (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
  FUN_0066f050((int)this);
  puVar9 = operator_new(0x344);
  if (puVar9 == (undefined4 *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = FUN_007432f0(puVar9);
  }
  puVar22 = (undefined4 *)FUN_005fbfa0(&uStack_32c,2,*(int *)((int)this + 0x388),0);
  FUN_005f59e0(piVar11 + 0x31,puVar22);
  FUN_005f9ed0((int)&uStack_32c);
  puVar22 = (undefined4 *)FUN_005fbfa0(&uStack_32c,2,*(int *)((int)this + 0x400),0);
  FUN_005f59e0(piVar11 + 0x1f,puVar22);
  FUN_005f9ed0((int)&uStack_32c);
  (**(code **)(*piVar11 + 0x5c))();
  iVar38 = *piVar11;
  (**(code **)(**(int **)((int)this + 0x388) + 0x10))();
  (**(code **)(iVar38 + 0x78))();
  (**(code **)(*piVar11 + 0x18))();
  (**(code **)(*piVar11 + 0x18))();
  piVar12 = piVar11;
  (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
  (**(code **)(*(int *)((int)this + 0x77c) + 4))();
  *(int **)((int)this + 0x790) = piVar11;
  (*(code *)**(undefined4 **)((int)this + 0x77c))();
  fVar26 = (float10)(**(code **)(*piVar11 + 0x10))();
  iVar38 = FUN_0071b2a0();
  fVar27 = FUN_0071b010(iVar38);
  *(float *)((int)this + 0x774) = (float)(fVar27 * (float10)(float)(fVar26 + fVar26));
  if (DAT_0104d8e8 != 0) {
    pvVar8 = operator_new(0x3c0);
    uStack_314._0_1_ = 0xb1;
    if (pvVar8 == (void *)0x0) {
      ppuVar23 = (undefined **)0x0;
    }
    else {
      ppuVar23 = FUN_0069be80(pvVar8,"costumefiddler_weight",0,0,1);
    }
    uStack_314 = CONCAT31(uStack_314._1_3_,0x6c);
    (**(code **)(*(int *)((int)this + 0x794) + 4))();
    *(undefined ***)((int)this + 0x7a8) = ppuVar23;
    (*(code *)**(undefined4 **)((int)this + 0x794))();
    (**(code **)(**(int **)((int)this + 0x7a8) + 0x78))();
    (**(code **)(**(int **)(*(int *)((int)this + 0x7a8) + 0x35c) + 0x78))();
    (**(code **)(**(int **)((int)this + 0x7a8) + 0x7c))();
    (**(code **)(**(int **)(*(int *)((int)this + 0x7a8) + 0x35c) + 0x18))();
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x7a8) + 0x35c) + 0x49c) = 1;
    (**(code **)(**(int **)((int)this + 0x7a8) + 0x60))();
    (**(code **)(**(int **)((int)this + 0x7a8) + 100))();
    (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))();
    pvVar8 = operator_new(0x3c0);
    if (pvVar8 == (void *)0x0) {
      ppuStack_40c = (undefined **)0x0;
    }
    else {
      ppuStack_40c = FUN_0069be80(pvVar8,"costumefiddler_age",0,0,1);
    }
    (**(code **)(*(int *)((int)this + 0x7ac) + 4))();
    *(undefined ***)((int)this + 0x7c0) = ppuStack_40c;
    (*(code *)**(undefined4 **)((int)this + 0x7ac))();
    (**(code **)(**(int **)((int)this + 0x7c0) + 0x78))();
    (**(code **)(**(int **)(*(int *)((int)this + 0x7c0) + 0x35c) + 0x78))();
    FUN_0069a3c0(*(void **)((int)this + 0x7c0),0.0);
    (**(code **)(**(int **)((int)this + 0x7c0) + 0x7c))();
    (**(code **)(**(int **)(*(int *)((int)this + 0x7c0) + 0x35c) + 0x18))();
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x7c0) + 0x35c) + 0x49c) = 1;
    (**(code **)(**(int **)((int)this + 0x7c0) + 0x5c))();
    (**(code **)(**(int **)((int)this + 0x7c0) + 100))();
    (**(code **)(**(int **)((int)this + 0x6f8) + 0xc))(*(undefined4 *)((int)this + 0x7c0));
  }
  puVar22 = operator_new(0x344);
  uStack_314._0_1_ = 0xb3;
  if (puVar22 == (undefined4 *)0x0) {
    puVar22 = (undefined4 *)0x0;
  }
  else {
    puVar22 = FUN_007432f0(puVar22);
  }
  uStack_314 = CONCAT31(uStack_314._1_3_,0x6c);
  (**(code **)(*(int *)((int)this + 0x7c4) + 4))();
  *(undefined4 **)((int)this + 0x7d8) = puVar22;
  (*(code *)**(undefined4 **)((int)this + 0x7c4))();
  (**(code **)(**(int **)((int)this + 0x7d8) + 0x74))();
  (**(code **)(**(int **)((int)this + 0x7d8) + 100))();
  (**(code **)(**(int **)((int)this + 0x7d8) + 0x5c))();
  FUN_004015d0(&stack0xfffffbbc,"costumefiddler_rotate_tooltip",0x1d);
  puVar22 = FUN_009b5030((undefined4 *)&stack0xfffffc3c,(undefined4 *)&stack0xfffffbbc);
  FUN_004036d0((void *)((int)this + 0x7f4),(wchar_t *)*puVar22,puVar22[1]);
  if (&lpType_0000000a < puStack_3bc) {
                    /* WARNING: Subroutine does not return */
    _free(puVar9);
  }
  uVar35 = 0;
  uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&stack0xfffffbbc,(wchar_t *)&lpCaption_00d16918,uVar6);
  (**(code **)(**(int **)((int)this + 0x7d8) + 0x90))();
  if (10 < uVar35) {
                    /* WARNING: Subroutine does not return */
    _free(piVar12);
  }
  (**(code **)(*piVar11 + 0x18))();
  (**(code **)(**(int **)((int)this + 0x388) + 0xc))();
  if (10 < (uint)fStack_3b8) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x2);
  }
  if (&lpType_0000000a < pcStack_374) {
                    /* WARNING: Subroutine does not return */
    _free(&LAB_005f37f0);
  }
  ExceptionList = pvVar7;
  return this;
}


//// FUNCTION Applicant_ConstructStagedStaff @ 00675ca0 ////

int * Applicant_ConstructStagedStaff(void)

{
  int iVar1;
  void *this;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  void *unaff_EDI;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc543b;
  local_c = ExceptionList;
  if (0x3c < *DAT_00f87b04) {
    ExceptionList = &local_c;
    this = operator_new(0x848);
    local_4 = 0;
    if (this == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00671de0(this,DAT_0104da6c,DAT_0104da74,DAT_0104da78,DAT_0104da7c,DAT_0104da80,
                            DAT_0104da88);
    }
    iVar1 = DAT_0104da84;
    local_4 = 0xffffffff;
    (**(code **)(piVar2[0xd1] + 4))();
    piVar2[0xd6] = iVar1;
    (**(code **)piVar2[0xd1])();
    iVar1 = *piVar2;
    uVar5 = 0;
    *(undefined1 *)(piVar2 + 0x1c4) = DAT_0104da89;
    uVar3 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x70))(uVar3,uVar5);
    piVar4 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar4 + 0xc))(piVar2,1);
    ExceptionList = unaff_EDI;
    return piVar2;
  }
  return (int *)0x0;
}


//// FUNCTION FUN_00675e10 @ 00675e10 ////

undefined4 * __thiscall FUN_00675e10(void *this,byte param_1)

{
  FUN_009d2b70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00675e30 @ 00675e30 ////

void __thiscall FUN_00675e30(void *this,undefined4 param_1)

{
  *(undefined4 *)(*(int *)((int)this + 0x3f0) + 8) = param_1;
  return;
}


//// FUNCTION FUN_00675e70 @ 00675e70 ////

void __fastcall FUN_00675e70(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00675fc0 @ 00675fc0 ////

void __thiscall FUN_00675fc0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x3d8) + 4))();
  *(undefined4 *)((int)this + 0x3ec) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x3d8))();
  return;
}


//// FUNCTION FUN_00675ff0 @ 00675ff0 ////

void * __thiscall FUN_00675ff0(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  uVar1 = *(uint *)((int)this + 0x20) ^ (*(uint *)((int)this + 0x20) ^ param_1[8]) & 1;
  *(uint *)((int)this + 0x20) = uVar1;
  *(uint *)((int)this + 0x20) = (param_1[8] ^ uVar1) & 2 ^ uVar1;
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return this;
}


//// FUNCTION FUN_00676040 @ 00676040 ////

void __fastcall FUN_00676040(int param_1)

{
  uint uVar1;
  
  if ((*(void **)(param_1 + 0x344) != (void *)0x0) && (DAT_0104daa0 != 0)) {
    FUN_009d1990(*(void **)(param_1 + 0x344),*(int **)(param_1 + 0x34c));
    FUN_00675ff0((void *)(param_1 + 0x350),
                 (undefined4 *)
                 (*(int *)(*(int *)(param_1 + 0x34c) + 0xc) + *(int *)(param_1 + 0x348) * 0x28));
    uVar1 = *(uint *)(param_1 + 0x370) & 1;
    if ((uVar1 == 0) && (*(char *)(param_1 + 0x3fc) != '\0')) {
      (**(code **)(**(int **)(param_1 + 0x3a4) + 0xc0))(0);
      (**(code **)(**(int **)(param_1 + 0x3bc) + 0xc0))(0);
      (**(code **)(**(int **)(param_1 + 0x3d4) + 0xc0))(0);
      *(undefined1 *)(param_1 + 0x3fc) = 0;
      return;
    }
    if ((uVar1 != 0) && (*(char *)(param_1 + 0x3fc) == '\0')) {
      (**(code **)(**(int **)(param_1 + 0x3a4) + 0xc0))(1);
      (**(code **)(**(int **)(param_1 + 0x3bc) + 0xc0))(1);
      (**(code **)(**(int **)(param_1 + 0x3d4) + 0xc0))(1);
      *(undefined1 *)(param_1 + 0x3fc) = 1;
    }
  }
  return;
}


//// FUNCTION FUN_00676120 @ 00676120 ////

void __fastcall FUN_00676120(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 3;
  *param_1 = puVar1;
  *(undefined1 *)puVar1 = 0;
  param_1[2] = 0x14;
  param_1[1] = 0;
  *(undefined1 *)puVar1 = 0;
  param_1[8] = param_1[8] & 0xfffffffd | 1;
  param_1[9] = 1;
  return;
}


//// FUNCTION FUN_00676150 @ 00676150 ////

void __fastcall FUN_00676150(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *_Memory_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc54ac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d36274;
  param_1[0x14] = &PTR_FUN_00d36258;
  local_4 = 6;
  if ((undefined4 *)param_1[0xd1] != (undefined4 *)0x0) {
    FUN_009d2b50((undefined4 *)param_1[0xd1]);
    param_1[0xd1] = 0;
  }
  _Memory = (undefined4 *)param_1[0xd3];
  if (_Memory != (undefined4 *)0x0) {
    FUN_009d2b70(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (param_1[0xfc] != 0) {
    _Memory_00 = *(void **)(param_1[0xfc] + 4);
    if (_Memory_00 != (void *)0x0) {
      FUN_00990ec0((int)_Memory_00);
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
    *(undefined4 *)(param_1[0xfc] + 4) = 0;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xfc]);
  }
  param_1[0xf6] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xf8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf8] = param_1[0xf7];
  }
  if (param_1[0xf7] != 0) {
    *(undefined4 *)(param_1[0xf7] + 4) = param_1[0xf8];
  }
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xfb] = 0;
  if ((undefined4 *)param_1[0xf8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf8] = param_1[0xf7];
  }
  if (param_1[0xf7] != 0) {
    *(undefined4 *)(param_1[0xf7] + 4) = param_1[0xf8];
  }
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf0] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xf2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf2] = param_1[0xf1];
  }
  if (param_1[0xf1] != 0) {
    *(undefined4 *)(param_1[0xf1] + 4) = param_1[0xf2];
  }
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf5] = 0;
  if ((undefined4 *)param_1[0xf2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf2] = param_1[0xf1];
  }
  if (param_1[0xf1] != 0) {
    *(undefined4 *)(param_1[0xf1] + 4) = param_1[0xf2];
  }
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xea] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xec] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xec] = param_1[0xeb];
  }
  if (param_1[0xeb] != 0) {
    *(undefined4 *)(param_1[0xeb] + 4) = param_1[0xec];
  }
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xef] = 0;
  if ((undefined4 *)param_1[0xec] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xec] = param_1[0xeb];
  }
  if (param_1[0xeb] != 0) {
    *(undefined4 *)(param_1[0xeb] + 4) = param_1[0xec];
  }
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xe4] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xe6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe6] = param_1[0xe5];
  }
  if (param_1[0xe5] != 0) {
    *(undefined4 *)(param_1[0xe5] + 4) = param_1[0xe6];
  }
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe9] = 0;
  if ((undefined4 *)param_1[0xe6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe6] = param_1[0xe5];
  }
  if (param_1[0xe5] != 0) {
    *(undefined4 *)(param_1[0xe5] + 4) = param_1[0xe6];
  }
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xde] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xe0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe0] = param_1[0xdf];
  }
  if (param_1[0xdf] != 0) {
    *(undefined4 *)(param_1[0xdf] + 4) = param_1[0xe0];
  }
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe3] = 0;
  if ((undefined4 *)param_1[0xe0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe0] = param_1[0xdf];
  }
  if (param_1[0xdf] != 0) {
    *(undefined4 *)(param_1[0xdf] + 4) = param_1[0xe0];
  }
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  if (0x14 < (uint)param_1[0xd6]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd4]);
  }
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00676460 @ 00676460 ////

void __fastcall FUN_00676460(int *param_1)

{
  void *this;
  uint uVar1;
  size_t sVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int local_1a4;
  int local_1a0;
  void *local_19c;
  undefined2 *local_198;
  uint local_194;
  undefined4 local_190;
  undefined2 local_18c [8];
  void *pvStack_17c;
  wchar_t *local_178;
  size_t local_174;
  undefined4 local_170;
  wchar_t local_16c [8];
  void *pvStack_15c;
  wchar_t *local_158;
  size_t local_154;
  undefined4 local_150;
  wchar_t local_14c [10];
  uint local_138 [11];
  wchar_t local_10c [64];
  wchar_t local_8c [62];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc54e1;
  pvStack_c = ExceptionList;
  this = *(void **)param_1[0xd3];
  ExceptionList = &pvStack_c;
  FUN_009ce990(this,param_1[0xd2]);
  FUN_009cdc00(this,param_1[0xd2]);
  FUN_009ce080(this,param_1[0xd2],(uint *)&local_19c,&local_1a0);
  puVar4 = (uint *)(*(int *)(*(int *)((int)this + 0xcc) + 0x2c) + param_1[0xd2] * 0x2c);
  puVar5 = local_138;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_1a4 = 0;
  if (((*(uint *)((int)this + 0xa4) & 0x1000) == 0) ||
     (uVar1 = FUN_00413450(param_1 + 0xd4,"latex_head",0,10), uVar1 == 0xffffffff)) {
    if (local_138[1] == 1) {
      if ((*(byte *)((local_138[0] & 0xff) * 0x78 + 0x21 + *(int *)((int)this + 200)) & 0x10) == 0)
      goto LAB_00676542;
    }
    else if (local_138[1] != 2) goto LAB_00676542;
  }
  local_1a4 = -1;
LAB_00676542:
  local_198 = local_18c;
  local_18c[0] = 0;
  local_194 = 0;
  local_190 = 10;
  local_158 = local_14c;
  local_14c[0] = L'\0';
  local_154 = 0;
  local_150 = 10;
  local_178 = local_16c;
  local_16c[0] = L'\0';
  local_174 = 0;
  local_170 = 10;
  local_4 = 2;
  if (1 < local_1a0) {
    uVar1 = FUN_00ace02d(L"WITHVARIATION");
    FUN_004036d0(&local_158,L"WITHVARIATION",uVar1);
    sVar2 = FUN_00ace02d(L"</phrase><phrase key=VARIATION>");
    FUN_0040cae0(&local_178,L"</phrase><phrase key=VARIATION>",sVar2);
    sVar2 = _swprintf(local_10c,0xd18f7c,(wchar_t *)((int)local_19c + 1));
    FUN_0040cae0(&local_178,local_10c,sVar2);
  }
  sVar2 = FUN_00ace02d(L"<phrasebook><translate>COSTUME_WARDROBE-DEPT_OPTIONCOUNTS");
  FUN_0040cae0(&local_198,L"<phrasebook><translate>COSTUME_WARDROBE-DEPT_OPTIONCOUNTS",sVar2);
  FUN_0040cae0(&local_198,local_158,local_154);
  sVar2 = FUN_00ace02d(L"</translate><phrase key=CURRENT>");
  FUN_0040cae0(&local_198,L"</translate><phrase key=CURRENT>",sVar2);
  uVar1 = FUN_009ce990(this,param_1[0xd2]);
  sVar2 = _swprintf(local_10c,0xd18f7c,(wchar_t *)(uVar1 + 1 + local_1a4));
  FUN_0040cae0(&local_198,local_10c,sVar2);
  sVar2 = FUN_00ace02d(L"</phrase><phrase key=TOTAL>");
  FUN_0040cae0(&local_198,L"</phrase><phrase key=TOTAL>",sVar2);
  iVar3 = FUN_009cdc00(this,param_1[0xd2]);
  sVar2 = _swprintf(local_8c,0xd18f7c,(wchar_t *)(iVar3 + local_1a4));
  FUN_0040cae0(&local_198,local_8c,sVar2);
  FUN_0040cae0(&local_198,local_178,local_174);
  sVar2 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(&local_198,L"</phrase></phrasebook>",sVar2);
  (**(code **)(*param_1 + 0x90))(&local_198);
  if (10 < local_174) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_17c);
  }
  if (10 < local_154) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_15c);
  }
  if (local_194 < 0xb) {
    ExceptionList = pvStack_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_19c);
}


//// FUNCTION FUN_00676770 @ 00676770 ////

void FUN_00676770(char *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  void *pvVar10;
  byte *pbVar11;
  bool bVar12;
  byte **ppbVar13;
  char **ppcVar14;
  byte *local_ac;
  undefined4 local_a8;
  uint local_a4;
  byte local_a0 [20];
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [20];
  byte *local_6c;
  undefined4 local_68;
  uint local_64;
  byte local_60 [20];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc54fb;
  local_c = ExceptionList;
  local_ac = local_a0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 0x14;
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_ac,param_1,(int)pcVar6 - (int)(param_1 + 1));
  local_2c = local_20;
  local_4 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  _strncpy((char *)local_2c,"cos_watch",9);
  local_28 = 9;
  local_2c[9] = 0;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  pbVar7 = local_ac;
  pbVar11 = local_2c;
  do {
    bVar2 = *pbVar7;
    bVar12 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_0067685c:
      iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_00676861;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar7[1];
    bVar12 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_0067685c;
    pbVar7 = pbVar7 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar8 = 0;
LAB_00676861:
  if (iVar8 != 0) {
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 0x14;
    _strncpy((char *)local_6c,"cos_bracelet",0xc);
    local_68 = 0xc;
    local_6c[0xc] = 0;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    pbVar7 = local_ac;
    pbVar11 = local_6c;
    do {
      bVar2 = *pbVar7;
      bVar12 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_006768d4:
        iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_006768d9;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar12 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_006768d4;
      pbVar7 = pbVar7 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_006768d9:
    if (iVar8 != 0) {
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      _strncpy(local_4c,"cos_ring",8);
      ppcVar14 = &local_4c;
      ppbVar13 = &local_ac;
      local_48 = 8;
      local_4c[8] = '\0';
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      uVar9 = FUN_00401ec0(ppbVar13,ppcVar14);
      if ((char)uVar9 == '\0') {
        local_8c = local_80;
        local_80[0] = '\0';
        local_88 = 0;
        local_84 = 0x14;
        _strncpy(local_8c,"MAKE_UP_NAILS",0xd);
        ppcVar14 = &local_8c;
        ppbVar13 = &local_ac;
        local_88 = 0xd;
        local_8c[0xd] = '\0';
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        uVar9 = FUN_00401ec0(ppbVar13,ppcVar14);
        bVar12 = false;
        if ((char)uVar9 == '\0') goto LAB_006769a2;
      }
    }
  }
  bVar12 = true;
LAB_006769a2:
  if ((bVar3) && (0x14 < local_84)) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  if ((bVar4) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((bVar5) && (0x14 < local_64)) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (bVar12) {
    pvVar10 = (void *)FUN_004345e0();
    FUN_00435400(pvVar10);
  }
  else {
    iVar8 = FUN_004345e0();
    FUN_00435550(iVar8);
  }
  if (local_a4 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_ac);
}


//// FUNCTION FUN_00676a90 @ 00676a90 ////

undefined4 FUN_00676a90(char *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  uint3 uVar10;
  byte *pbVar11;
  bool bVar12;
  byte **ppbVar13;
  char **ppcVar14;
  byte *local_a0;
  undefined4 local_9c;
  uint local_98;
  byte local_94 [20];
  char *local_80;
  undefined4 local_7c;
  uint local_78;
  char local_74 [20];
  byte *local_60;
  undefined4 local_5c;
  uint local_58;
  byte local_54 [20];
  char *local_40;
  undefined4 local_3c;
  uint local_38;
  char local_34 [20];
  byte *local_20;
  undefined4 local_1c;
  uint local_18;
  byte local_14 [20];
  
  local_a0 = local_94;
  local_94[0] = 0;
  local_9c = 0;
  local_98 = 0x14;
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_a0,param_1,(int)pcVar6 - (int)(param_1 + 1));
  local_20 = local_14;
  local_14[0] = 0;
  local_1c = 0;
  local_18 = 0x14;
  _strncpy((char *)local_20,"cos_watch",9);
  local_1c = 9;
  local_20[9] = 0;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  pbVar7 = local_a0;
  pbVar11 = local_20;
  do {
    bVar2 = *pbVar7;
    bVar12 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_00676b5a:
      iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_00676b5f;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar7[1];
    bVar12 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_00676b5a;
    pbVar7 = pbVar7 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar8 = 0;
LAB_00676b5f:
  if (iVar8 != 0) {
    local_60 = local_54;
    local_54[0] = 0;
    local_5c = 0;
    local_58 = 0x14;
    _strncpy((char *)local_60,"cos_bracelet",0xc);
    local_5c = 0xc;
    local_60[0xc] = 0;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    pbVar7 = local_a0;
    pbVar11 = local_60;
    do {
      bVar2 = *pbVar7;
      bVar12 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_00676bd4:
        iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00676bd9;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar12 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_00676bd4;
      pbVar7 = pbVar7 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_00676bd9:
    if (iVar8 != 0) {
      local_40 = local_34;
      local_34[0] = '\0';
      local_3c = 0;
      local_38 = 0x14;
      _strncpy(local_40,"cos_ring",8);
      ppcVar14 = &local_40;
      ppbVar13 = &local_a0;
      local_3c = 8;
      local_40[8] = '\0';
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      uVar9 = FUN_00401ec0(ppbVar13,ppcVar14);
      if ((char)uVar9 == '\0') {
        local_80 = local_74;
        local_74[0] = '\0';
        local_7c = 0;
        local_78 = 0x14;
        _strncpy(local_80,"MAKE_UP_NAILS",0xd);
        ppcVar14 = &local_80;
        ppbVar13 = &local_a0;
        local_7c = 0xd;
        local_80[0xd] = '\0';
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        uVar9 = FUN_00401ec0(ppbVar13,ppcVar14);
        bVar12 = false;
        if ((char)uVar9 == '\0') goto LAB_00676ca2;
      }
    }
  }
  bVar12 = true;
LAB_00676ca2:
  if ((bVar3) && (0x14 < local_78)) {
                    /* WARNING: Subroutine does not return */
    _free(local_80);
  }
  if ((bVar4) && (0x14 < local_38)) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if ((bVar5) && (0x14 < local_58)) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  uVar10 = (uint3)(local_98 >> 8);
  if (bVar12) {
    if (local_98 < 0x15) {
      return CONCAT31(uVar10,1);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  if (local_98 < 0x15) {
    return (uint)uVar10 << 8;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_a0);
}


//// FUNCTION FUN_00676d90 @ 00676d90 ////

undefined4 * __thiscall FUN_00676d90(void *this,byte param_1)

{
  FUN_00676150(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00676db0 @ 00676db0 ////

void __thiscall FUN_00676db0(void *this,char param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  char local_48 [32];
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)((int)this + 0x344) != 0) && (DAT_0104daa0 != 0)) {
    FUN_009a2210(&local_24);
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_48[0] = '\0';
    local_28 = 0.0;
    FUN_009cfb20((void *)**(undefined4 **)((int)this + 0x34c),*(int *)((int)this + 0x348),local_48);
    fVar3 = FUN_0066a990(DAT_0104daa0);
    if ((float10)local_28 < fVar3 * (float10)0.6666667) {
      uVar1 = FUN_00676a90(local_48);
      if ((char)uVar1 == '\0') {
        FUN_0066b670();
      }
    }
    FUN_00676460(this);
    if (param_1 != '\0') {
      uVar1 = FUN_00676a90(local_48);
      if ((char)uVar1 != '\0') {
        iVar2 = FUN_004345e0();
        FUN_00435550(iVar2);
        return;
      }
    }
    FUN_00676770(local_48);
  }
  return;
}


//// FUNCTION FUN_00676eb0 @ 00676eb0 ////

void __fastcall FUN_00676eb0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((void *)param_1[0xd1] == (void *)0x0) {
    return;
  }
  FUN_009d12f0((void *)param_1[0xd1],param_1[0xd2],(void *)0x1);
  if (DAT_0104da80 != 0) {
    iVar1 = FUN_004345e0();
    *(undefined1 *)(iVar1 + 0x356) = 1;
  }
  iVar1 = param_1[0x100];
  param_1[0x100] = iVar1 + 1;
  uVar2 = iVar1 + 1 + param_1[0xfe];
  if ((uVar2 == *(byte *)(param_1 + 0x101)) && (*(char *)((int)param_1 + 0x405) == '\0')) {
    if ((char)param_1[0x103] == '\0') {
      uVar4 = 0xc0800000;
      uVar3 = 2;
      goto LAB_00676f64;
    }
LAB_00676f2e:
    if (uVar2 == param_1[0x104]) {
      uVar4 = 0xc0800000;
      uVar3 = 2;
      goto LAB_00676f64;
    }
  }
  else if ((char)param_1[0x103] != '\0') goto LAB_00676f2e;
  if ((*(char *)((int)param_1 + 0x405) == '\0') || (uVar2 != param_1[0x102])) {
    uVar4 = 0x40000000;
    uVar3 = 1;
  }
  else {
    uVar4 = 0xc0800000;
    uVar3 = 2;
  }
LAB_00676f64:
  (**(code **)(*(int *)param_1[0xf5] + 100))(uVar3,param_1,uVar4);
  (**(code **)(*param_1 + 0x50))(1);
  if (DAT_0104da84 != (void *)0x0) {
    iVar1 = FUN_004345e0();
    iVar1 = FUN_00434fe0(iVar1);
    FUN_0048dd10(DAT_0104da84,iVar1);
  }
  FUN_00676db0(param_1,'\0');
  FUN_0066b850(DAT_0104daa0);
  return;
}


//// FUNCTION FUN_00676fb0 @ 00676fb0 ////

void __fastcall FUN_00676fb0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((void *)param_1[0xd1] != (void *)0x0) {
    FUN_009d12f0((void *)param_1[0xd1],param_1[0xd2],(void *)0x0);
    if (DAT_0104da80 != 0) {
      iVar1 = FUN_004345e0();
      *(undefined1 *)(iVar1 + 0x356) = 1;
    }
    iVar1 = param_1[0x100];
    param_1[0x100] = iVar1 + -1;
    uVar2 = iVar1 + -1 + param_1[0xfe];
    if (uVar2 == *(byte *)(param_1 + 0x101)) {
      uVar4 = 0xc0800000;
      uVar3 = 2;
    }
    else if (((char)param_1[0x103] == '\0') || (uVar2 != param_1[0x104])) {
      if ((*(char *)((int)param_1 + 0x405) == '\0') || (uVar2 != param_1[0x102])) {
        uVar4 = 0x40000000;
        uVar3 = 1;
      }
      else {
        uVar4 = 0xc0800000;
        uVar3 = 2;
      }
    }
    else {
      uVar4 = 0xc0800000;
      uVar3 = 2;
    }
    (**(code **)(*(int *)param_1[0xf5] + 100))(uVar3,param_1,uVar4);
    (**(code **)(*param_1 + 0x50))(1);
    if (DAT_0104da84 != (void *)0x0) {
      iVar1 = FUN_004345e0();
      iVar1 = FUN_00434fe0(iVar1);
      FUN_0048dd10(DAT_0104da84,iVar1);
    }
    FUN_00676db0(param_1,'\0');
    FUN_0066b850(DAT_0104daa0);
    return;
  }
  return;
}


//// FUNCTION FUN_006770a0 @ 006770a0 ////

void __fastcall FUN_006770a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((void *)param_1[0xd1] == (void *)0x0) {
    return;
  }
  FUN_009d1780((void *)param_1[0xd1],param_1[0xd2]);
  FUN_009cdc00(*(void **)(param_1[0xd1] + 0xc),param_1[0xd2]);
  if (*(char *)((int)param_1 + 0x405) == '\0') {
    if ((char)param_1[0x103] == '\0') {
      uVar1 = (uint)*(byte *)(param_1 + 0x101);
      iVar2 = param_1[0xd2];
    }
    else {
LAB_006770fb:
      uVar1 = param_1[0x104];
      iVar2 = param_1[0xd2];
    }
  }
  else {
    if ((char)param_1[0x103] != '\0') goto LAB_006770fb;
    if (*(char *)((int)param_1 + 0x405) == '\0') goto LAB_00677128;
    uVar1 = param_1[0x102];
    iVar2 = param_1[0xd2];
  }
  FUN_009d1740((void *)param_1[0xd1],iVar2,uVar1);
LAB_00677128:
  FUN_00676db0(param_1,'\x01');
  (**(code **)(*(int *)param_1[0xf5] + 100))(2,param_1,0xc0800000);
  (**(code **)(*param_1 + 0x50))(1);
  FUN_0066b850(DAT_0104daa0);
  return;
}


//// FUNCTION FUN_006771c0 @ 006771c0 ////

int **** __thiscall FUN_006771c0(void *this,int ***param_1,void *param_2,int ***param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  size_t sVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  float10 fVar12;
  float fVar13;
  undefined4 uVar14;
  void *pvStack_1ac;
  char *pcVar15;
  void **ppvStack_180;
  undefined4 uStack_17c;
  uint uStack_178;
  void *pvStack_174;
  undefined2 **_Dest;
  undefined1 *puStack_160;
  undefined2 *puStack_15c;
  undefined4 uStack_158;
  void *pvStack_154;
  undefined4 *puStack_150;
  char *pcVar16;
  char *_Memory;
  undefined1 *puVar17;
  undefined4 *local_118;
  uint *local_110;
  undefined4 local_10c;
  undefined2 *local_108;
  uint local_104;
  uint uStack_100;
  undefined2 auStack_fc [6];
  char *local_f0;
  undefined4 local_ec;
  undefined1 *local_e8;
  char local_e4 [4];
  uint uStack_e0;
  void *pvStack_d0;
  uint uStack_c8;
  wchar_t awStack_c4 [10];
  void *local_b0 [2];
  uint local_a8;
  undefined4 uStack_94;
  void *local_90;
  undefined4 uStack_5c;
  undefined1 uStack_3c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc5716;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_90 = this;
  FUN_007432f0(this);
  *(int ****)((int)this + 0x344) = param_1;
  puVar7 = (undefined4 *)((int)this + 0x350);
  *(undefined ***)this = &PTR_FUN_00d36274;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d36258;
  puVar17 = (undefined1 *)((int)this + 0x35c);
  *puVar7 = puVar17;
  *puVar17 = 0;
  *(undefined4 *)((int)this + 0x358) = 0x14;
  *(undefined4 *)((int)this + 0x354) = 0;
  *puVar17 = 0;
  *(uint *)((int)this + 0x370) = *(uint *)((int)this + 0x370) & 0xfffffffd | 1;
  *(undefined4 *)((int)this + 0x374) = 1;
  piVar1 = (int *)((int)this + 0x378);
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(int **)((int)this + 900) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 **)((int)this + 0x39c) = (undefined4 *)((int)this + 0x390);
  *(undefined4 *)((int)this + 0x390) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 **)((int)this + 0x3b4) = (undefined4 *)((int)this + 0x3a8);
  *(undefined4 *)((int)this + 0x3a8) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 **)((int)this + 0x3cc) = (undefined4 *)((int)this + 0x3c0);
  *(undefined4 *)((int)this + 0x3c0) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 **)((int)this + 0x3e4) = (undefined4 *)((int)this + 0x3d8);
  *(undefined4 *)((int)this + 0x3d8) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  iVar8 = *(int *)((int)this + 0x344);
  local_4._0_1_ = 6;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined1 *)((int)this + 0x404) = 0;
  *(undefined1 *)((int)this + 0x405) = 0;
  *(undefined1 *)((int)this + 0x40c) = 0;
  if (iVar8 == 0) {
    ExceptionList = local_c;
    return this;
  }
  *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
  pvVar3 = operator_new(0x10);
  local_4._0_1_ = 7;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_009d2620(pvVar3,*(int *)((int)this + 0x344));
  }
  *(int ****)((int)this + 0x348) = param_3;
  *(int **)((int)this + 0x34c) = piVar4;
  puVar5 = (undefined4 *)(piVar4[3] + (int)param_3 * 0x28);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004015d0(puVar7,(char *)*puVar5,puVar5[1]);
  uVar10 = *(uint *)((int)this + 0x370) ^ (*(uint *)((int)this + 0x370) ^ puVar5[8]) & 1;
  *(uint *)((int)this + 0x370) = uVar10;
  *(uint *)((int)this + 0x370) = (puVar5[8] ^ uVar10) & 2 ^ uVar10;
  *(undefined4 *)((int)this + 0x374) = puVar5[9];
  iVar8 = *(int *)(**(int **)((int)this + 0x34c) + 0xcc);
  iVar2 = *(int *)((int)this + 0x348);
  if ((((iVar8 == 0) || (*(int *)(iVar8 + 0x2c) == 0)) || (iVar2 < 0)) ||
     (*(int *)(iVar8 + 0x28) <= iVar2)) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined4 *)(iVar2 * 0x2c + 8 + *(int *)(iVar8 + 0x2c));
  }
  *(undefined4 *)((int)this + 0x3f8) = uVar14;
  pvVar3 = operator_new(0x420);
  bVar11 = pvVar3 == (void *)0x0;
  if (bVar11) {
    local_118 = (undefined4 *)0x0;
  }
  else {
    local_110 = &local_104;
    local_104 = local_104 & 0xffffff00;
    local_10c = 0;
    local_108 = (undefined2 *)0x14;
    _strncpy((char *)local_110,"button_prevoption",0x11);
    local_10c = 0x11;
    *(char *)((int)local_110 + 0x11) = '\0';
    local_f0 = local_e4;
    local_e4[0] = '\0';
    local_ec = 0;
    local_e8 = &DAT_00000014;
    _strncpy(local_f0,"button_left.",0xc);
    local_ec = 0xc;
    local_f0[0xc] = '\0';
    local_4 = 10;
    puStack_150 = (undefined4 *)0x67746e;
    puVar5 = FUN_009b5030(local_b0,&local_110);
    local_4 = 0xb;
    puStack_150 = (undefined4 *)0x6774b3;
    local_118 = FUN_0069fb10(pvVar3,(int *)&local_f0,puVar5,0x41c00000,0x41c00000,0,0,0x3f800000,
                             0x3f800000);
  }
  local_4 = 0xe;
  (**(code **)(*(int *)((int)this + 0x3a8) + 4))();
  *(undefined4 **)((int)this + 0x3bc) = local_118;
  (*(code *)**(undefined4 **)((int)this + 0x3a8))();
  if ((!bVar11) && (10 < local_a8)) {
                    /* WARNING: Subroutine does not return */
    _free(local_b0[0]);
  }
  if ((!bVar11) && (&DAT_00000014 < local_e8)) {
                    /* WARNING: Subroutine does not return */
    _free(local_f0);
  }
  local_4 = 6;
  if ((!bVar11) && ((undefined2 *)0x14 < local_108)) {
                    /* WARNING: Subroutine does not return */
    _free(local_110);
  }
  puVar17 = &LAB_00677180;
  (**(code **)(**(int **)((int)this + 0x3bc) + 0x18))();
  _Memory = "COSTUMEFIDDLER_PREVSTYLE";
  pcVar16 = &LAB_005f37f0;
  puStack_150 = (undefined4 *)0x6775a1;
  (**(code **)(**(int **)((int)this + 0x3bc) + 0x18))();
  puStack_150 = (undefined4 *)0x0;
  uStack_158 = 1;
  puStack_15c = (undefined2 *)0x6775b0;
  pvStack_154 = this;
  (**(code **)(**(int **)((int)this + 0x3bc) + 0x5c))();
  puStack_15c = (undefined2 *)0x40000000;
  (**(code **)(**(int **)((int)this + 0x3bc) + 100))();
  FUN_0073e8b0(*(void **)((int)this + 0x3bc),1);
  FUN_0073f6e0(this,*(int **)((int)this + 0x3bc));
  puVar5 = operator_new(0x3fc);
  uStack_3c = 0xf;
  if (puVar5 == (undefined4 *)0x0) {
    puStack_150 = (undefined4 *)0x0;
  }
  else {
    puStack_150 = FUN_00833290(puVar5);
  }
  uStack_3c = 6;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x38c) = puStack_150;
  (**(code **)*piVar1)();
  local_108 = auStack_fc;
  auStack_fc[0] = 0;
  local_104 = 0;
  uStack_100 = 10;
  uVar10 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_108,(wchar_t *)&lpCaption_00d16918,uVar10);
  uStack_3c = 0x10;
  sVar6 = FUN_00ace02d(L"<table><tr><td align=left width= ");
  FUN_0040cae0(&local_108,L"<table><tr><td align=left width= ",sVar6);
  pvStack_174 = (void *)0x67769d;
  sVar6 = _swprintf(awStack_c4,0xd18f7c,(wchar_t *)0x82);
  FUN_0040cae0(&local_108,awStack_c4,sVar6);
  sVar6 = FUN_00ace02d(L"><t6><translate>");
  FUN_0040cae0(&local_108,L"><t6><translate>",sVar6);
  puVar7 = FUN_00568790(&local_e8,puVar7);
  FUN_0040cae0(&local_108,(wchar_t *)*puVar7,puVar7[1]);
  if (10 < uStack_e0) {
                    /* WARNING: Subroutine does not return */
    _free(local_e8);
  }
  sVar6 = FUN_00ace02d(L"</translate></t6></td></tr></table>");
  FUN_0040cae0(&local_108,L"</translate></t6></td></tr></table>",sVar6);
  _Dest = &local_108;
  (**(code **)(**(int **)((int)this + 0x38c) + 0x54))();
  (**(code **)(**(int **)((int)this + 0x38c) + 0x84))();
  uStack_178 = 1;
  uStack_17c = 0x677750;
  pvStack_174 = this;
  (**(code **)(**(int **)((int)this + 0x38c) + 0x5c))();
  uStack_17c = 0x40000000;
  ppvStack_180 = this;
  (**(code **)(**(int **)((int)this + 0x38c) + 100))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x38c));
  pvVar3 = operator_new(0x420);
  if (pvVar3 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
    puStack_160 = this;
  }
  else {
    pcVar16 = &stack0xfffffec4;
    _Memory = &DAT_00000014;
    _strncpy(pcVar16,"button_nextoption",0x11);
    pcVar16[0x11] = '\0';
    _Dest = &puStack_15c;
    pvStack_174 = (void *)((uint)pvStack_174 | 8);
    puStack_15c = (undefined2 *)((uint)puStack_15c & 0xffffff00);
    puStack_160 = &DAT_00000014;
    _strncpy((char *)_Dest,"button_right.",0xd);
    *(char *)((int)_Dest + 0xd) = '\0';
    pvStack_174 = (void *)((uint)pvStack_174 | 0x10);
    uStack_5c = 0x13;
    puVar7 = FUN_009b5030(&local_108,(undefined4 *)&stack0xfffffeb8);
    pvStack_174 = (void *)((uint)pvStack_174 | 0x20);
    uStack_5c = 0x14;
    puVar7 = FUN_0069fb10(pvVar3,(int *)&stack0xfffffe98,puVar7,0x41c00000,0x41c00000,0,0,0x3f800000
                          ,0x3f800000);
  }
  uStack_5c = 0x17;
  (**(code **)(*(int *)((int)this + 0x390) + 4))();
  *(undefined4 **)((int)this + 0x3a4) = puVar7;
  (*(code *)**(undefined4 **)((int)this + 0x390))();
  if ((((uint)pvStack_174 & 0x20) != 0) &&
     (pvStack_174 = (void *)((uint)pvStack_174 & 0xffffffdf), 10 < uStack_100)) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  if ((((uint)pvStack_174 & 0x10) != 0) &&
     (pvStack_174 = (void *)((uint)pvStack_174 & 0xffffffef), &DAT_00000014 < puStack_160)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  uStack_5c = 0x10;
  if ((((uint)pvStack_174 & 8) != 0) &&
     (pvStack_174 = (void *)((uint)pvStack_174 & 0xfffffff7), &DAT_00000014 < _Memory)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar16);
  }
  (**(code **)(**(int **)((int)this + 0x3a4) + 0x18))();
  pcVar15 = "COSTUMEFIDDLER_NEXTSTYLE";
  pcVar16 = &LAB_005f37f0;
  (**(code **)(**(int **)((int)this + 0x3a4) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x3a4) + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x3a4) + 100))();
  iVar8 = FUN_009b4250();
  if ((iVar8 == 7) || (iVar8 == 1)) {
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
  }
  FUN_0073e8b0(*(void **)((int)this + 0x3a4),uVar14);
  FUN_0073f6e0(this,*(int **)((int)this + 0x3a4));
  pvVar3 = operator_new(0x420);
  if (pvVar3 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
    pvStack_1ac = this;
  }
  else {
    ppvStack_180 = &pvStack_174;
    pvStack_174 = (void *)((uint)pvStack_174 & 0xffffff00);
    uStack_17c = 0;
    uStack_178 = 0x20;
    ppvStack_180 = _malloc(0x20);
    _strncpy((char *)ppvStack_180,"button_defaultoption",0x14);
    uStack_17c = 0x14;
    *(char *)(ppvStack_180 + 5) = '\0';
    pcVar16 = &stack0xfffffe6c;
    pcVar15 = (char *)0x14;
    _strncpy(pcVar16,"button_goback.",0xe);
    pcVar16[0xe] = '\0';
    uStack_94 = 0x1a;
    puVar7 = FUN_009b5030((undefined4 *)&stack0xfffffec0,&ppvStack_180);
    pvStack_1ac = (void *)((uint)this | 0x1c0);
    uStack_94 = 0x1b;
    puVar7 = FUN_0069fb10(pvVar3,(int *)&stack0xfffffe60,puVar7,0x41c00000,0x41c00000,0,0,0x3f800000
                          ,0x3f800000);
  }
  uStack_94 = 0x1e;
  (**(code **)(*(int *)((int)this + 0x3c0) + 4))();
  *(undefined4 **)((int)this + 0x3d4) = puVar7;
  (*(code *)**(undefined4 **)((int)this + 0x3c0))();
  if ((((uint)pvStack_1ac & 0x100) != 0) &&
     (pvStack_1ac = (void *)((uint)pvStack_1ac & 0xfffffeff), (undefined1 *)0xa < puVar17)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (((char)pvStack_1ac < '\0') &&
     (pvStack_1ac = (void *)((uint)pvStack_1ac & 0xffffff7f), (char *)0x14 < pcVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar16);
  }
  uStack_94 = 0x10;
  if ((((uint)pvStack_1ac & 0x40) != 0) && (0x14 < uStack_178)) {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_180);
  }
  (**(code **)(**(int **)((int)this + 0x3d4) + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x3d4) + 100))(2,this);
  (**(code **)(**(int **)((int)this + 0x3d4) + 0x18))
            (0,&LAB_006771a0,this,"COSTUMEFIDDLER_REVERTSTYLE");
  (**(code **)(**(int **)((int)this + 0x3d4) + 0x18))
            (5,&LAB_005f37f0,0,"COSTUMEFIDDLER_REVERTSTYLE");
  FUN_0073f6e0(this,*(int **)((int)this + 0x3d4));
  FUN_0073f500(this);
  FUN_007421c0(this);
  fVar12 = FUN_0073e640((int)this);
  fVar13 = (float)fVar12;
  fVar12 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x14))();
  (**(code **)(**(int **)((int)this + 0x38c) + 100))
            (1,this,(float)(((float10)fVar13 - fVar12) * (float10)0.5));
  FUN_007421c0(this);
  puVar7 = operator_new(0x3c);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_0041f350(puVar7);
  }
  *(undefined4 **)((int)this + 0x3f0) = puVar7;
  uVar14 = *(undefined4 *)(*(int *)((int)this + 0x38c) + 0x9c);
  fVar13 = *(float *)(*(int *)((int)this + 0x38c) + 0xc0);
  puVar7[6] = 0;
  puVar7[4] = fVar13 + 5.0;
  puVar7[5] = uVar14;
  uVar14 = *(undefined4 *)(*(int *)((int)this + 0x38c) + 0xe4);
  fVar13 = *(float *)(*(int *)((int)this + 0x38c) + 0x108);
  iVar8 = *(int *)((int)this + 0x3f0);
  *(undefined4 *)(iVar8 + 0x24) = 0;
  *(float *)(iVar8 + 0x1c) = fVar13 - 5.0;
  *(undefined4 *)(iVar8 + 0x20) = uVar14;
  puVar7 = operator_new(0x24);
  local_4._0_1_ = 0x1f;
  if (puVar7 == (undefined4 *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = FUN_009910f0(puVar7);
  }
  *(undefined4 *)(*(int *)((int)this + 0x3f0) + 4) = uVar14;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x3f0) + 4) + 0xc) = 6;
  iVar8 = *(int *)(*(int *)((int)this + 0x3f0) + 4);
  *(uint *)(iVar8 + 0x10) = *(uint *)(iVar8 + 0x10) & 0xbfffffff;
  *(undefined4 *)(*(int *)((int)this + 0x3f0) + 8) = 0xb4d6e3fa;
  local_4 = CONCAT31(local_4._1_3_,0x10);
  *(undefined1 *)((int)this + 0x3fc) = 1;
  if (param_2 != (void *)0x0) {
    uVar10 = FUN_009ce990(param_2,*(int *)((int)this + 0x348));
    *(bool *)((int)this + 0x404) = uVar10 != 0;
  }
  iVar9 = *(int *)((int)this + 0x348) * 0x2c;
  iVar8 = *(int *)(*(int *)((int)param_2 + 0xcc) + 0x2c);
  iVar2 = *(int *)(iVar9 + 4 + iVar8);
  iVar9 = iVar9 + iVar8;
  if (iVar2 == 8) {
    *(undefined1 *)((int)this + 0x40c) = 1;
    iVar8 = *(int *)(iVar9 + 8);
    *(int *)((int)this + 0x410) = iVar8;
    if (iVar8 == -1) {
      *(undefined4 *)((int)this + 0x410) = 0;
    }
  }
  else if (iVar2 == 7) {
    *(undefined1 *)((int)this + 0x405) = 1;
    iVar8 = *(int *)(iVar9 + 8);
    *(int *)((int)this + 0x408) = iVar8;
    if (iVar8 == -1) {
      *(undefined4 *)((int)this + 0x408) = 0;
    }
  }
  uVar10 = *(uint *)((int)this + 0x3f8);
  if ((uVar10 == *(byte *)((int)this + 0x404)) || (*(char *)((int)this + 0x405) != '\0')) {
    if (*(char *)((int)this + 0x40c) != '\0') goto LAB_00677d9a;
LAB_00677db7:
    if ((*(char *)((int)this + 0x405) == '\0') || (uVar10 == *(uint *)((int)this + 0x408)))
    goto LAB_00677de3;
LAB_00677dc7:
    (**(code **)(**(int **)((int)this + 0x3d4) + 100))();
  }
  else {
    if (*(char *)((int)this + 0x40c) == '\0') goto LAB_00677dc7;
LAB_00677d9a:
    if (uVar10 == *(uint *)((int)this + 0x410)) goto LAB_00677db7;
    (**(code **)(**(int **)((int)this + 0x3d4) + 100))();
  }
  FUN_007421c0(this);
LAB_00677de3:
  FUN_00676460(this);
  if (uStack_c8 < 0xb) {
    ExceptionList = local_c;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_d0);
}


//// FUNCTION FUN_00677e20 @ 00677e20 ////

void __fastcall FUN_00677e20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d36634;
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_00677e30 @ 00677e30 ////

uint __cdecl FUN_00677e30(int param_1,int param_2)

{
  int iVar1;
  uint in_EAX;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 != *(int *)(param_2 + 0x38)) {
      return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < *(int *)(param_2 + 0x38));
    }
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0x3c) >> 8),
                    *(int *)(param_1 + 0x3c) < *(int *)(param_2 + 0x3c));
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00677e70 @ 00677e70 ////

void __thiscall FUN_00677e70(void *this,undefined4 param_1)

{
  *(undefined4 *)(*(int *)((int)this + 0x408) + 8) = param_1;
  return;
}


//// FUNCTION FUN_00677e80 @ 00677e80 ////

int __fastcall FUN_00677e80(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00677f90 @ 00677f90 ////

int * __thiscall FUN_00677f90(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00677fc0 @ 00677fc0 ////

undefined4 * __cdecl FUN_00677fc0(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_006780e0 @ 006780e0 ////

undefined4 * __thiscall FUN_006780e0(void *this,byte param_1)

{
  FUN_00677e20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00678100 @ 00678100 ////

void __fastcall FUN_00678100(int param_1)

{
  int iVar1;
  int iVar2;
  uint local_8;
  int local_4;
  
  iVar2 = *(int *)((int)**(undefined4 **)(param_1 + 0x34c) + 0xcc);
  iVar1 = *(int *)(param_1 + 0x348);
  if ((((iVar2 == 0) || (*(int *)(iVar2 + 0x2c) == 0)) || (iVar1 < 0)) ||
     (*(int *)(iVar2 + 0x28) <= iVar1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 * 0x2c + 8 + *(int *)(iVar2 + 0x2c));
  }
  FUN_009ce080((void *)**(undefined4 **)(param_1 + 0x34c),iVar1,&local_8,&local_4);
  if ((iVar2 == *(int *)(param_1 + 0x414)) && (local_8 == *(uint *)(param_1 + 0x418))) {
    (**(code **)(**(int **)(param_1 + 0x3bc) + 100))(2,param_1,0xc0800000);
    (**(code **)(**(int **)(param_1 + 0x3bc) + 0x50))(1);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x3bc) + 100))(1,param_1,0x40000000);
  (**(code **)(**(int **)(param_1 + 0x3bc) + 0x50))(1);
  return;
}


//// FUNCTION FUN_006781b0 @ 006781b0 ////

void __thiscall FUN_006781b0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x3f0) + 4))();
  *(undefined4 *)((int)this + 0x404) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x3f0))();
  return;
}


//// FUNCTION FUN_00678320 @ 00678320 ////

void __cdecl FUN_00678320(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00678500 @ 00678500 ////

void __fastcall FUN_00678500(int param_1)

{
  uint uVar1;
  
  if ((*(void **)(param_1 + 0x344) != (void *)0x0) && (DAT_0104daa0 != 0)) {
    FUN_009d1990(*(void **)(param_1 + 0x344),*(int **)(param_1 + 0x34c));
    FUN_00675ff0((void *)(param_1 + 0x350),
                 (undefined4 *)
                 (*(int *)(*(int *)(param_1 + 0x34c) + 0xc) + *(int *)(param_1 + 0x348) * 0x28));
    uVar1 = *(uint *)(param_1 + 0x370) & 1;
    if ((uVar1 == 0) && (*(char *)(param_1 + 0x41c) != '\0')) {
      (**(code **)(**(int **)(param_1 + 0x3a4) + 0xc0))(0);
      (**(code **)(**(int **)(param_1 + 0x3bc) + 0xc0))(0);
      *(undefined1 *)(param_1 + 0x41c) = 0;
      return;
    }
    if ((uVar1 != 0) && (*(char *)(param_1 + 0x41c) == '\0')) {
      if (*(char *)(param_1 + 0x41e) != '\0') {
        (**(code **)(**(int **)(param_1 + 0x3a4) + 0xc0))(1);
      }
      (**(code **)(**(int **)(param_1 + 0x3bc) + 0xc0))(1);
      *(undefined1 *)(param_1 + 0x41c) = 1;
    }
  }
  return;
}


//// FUNCTION FUN_006785d0 @ 006785d0 ////

void __thiscall FUN_006785d0(void *this,undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = param_1;
  puVar4 = this;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 8);
  bVar1 = *(byte *)((int)param_1 + 0x21);
  *(byte *)((int)this + 0x21) = bVar1;
  bVar1 = (*(byte *)((int)param_1 + 0x21) ^ bVar1) & 1 ^ bVar1;
  *(byte *)((int)this + 0x21) = bVar1;
  bVar1 = (*(byte *)((int)param_1 + 0x21) ^ bVar1) & 2 ^ bVar1;
  *(byte *)((int)this + 0x21) = bVar1;
  bVar1 = (*(byte *)((int)param_1 + 0x21) ^ bVar1) & 4 ^ bVar1;
  *(byte *)((int)this + 0x21) = bVar1;
  bVar1 = (*(byte *)((int)param_1 + 0x21) ^ bVar1) & 8 ^ bVar1;
  *(byte *)((int)this + 0x21) = bVar1;
  bVar1 = (*(byte *)((int)param_1 + 0x21) ^ bVar1) & 0x10 ^ bVar1;
  *(byte *)((int)this + 0x21) = bVar1;
  *(byte *)((int)this + 0x21) = (*(byte *)((int)param_1 + 0x21) ^ bVar1) & 0x20 ^ bVar1;
  *(undefined2 *)((int)this + 0x22) = *(undefined2 *)((int)param_1 + 0x22);
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  puVar3 = param_1 + 0xc;
  puVar4 = (undefined4 *)((int)this + 0x30);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  *(undefined4 *)((int)this + 0x70) = param_1[0x1c];
  *(undefined4 *)((int)this + 0x74) = param_1[0x1d];
  return;
}


//// FUNCTION FUN_00678730 @ 00678730 ////

void __fastcall FUN_00678730(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3663c;
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


//// FUNCTION FUN_00678810 @ 00678810 ////

undefined4 * __thiscall FUN_00678810(void *this,byte param_1)

{
  FUN_00678730(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00678830 @ 00678830 ////

void __cdecl FUN_00678830(int *param_1,int *param_2)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc5728;
  pvStack_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_10 = param_1[5];
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d3663c;
  ExceptionList = &pvStack_c;
  if (local_10 != 0) {
    local_1c = (int *)(local_10 + 0x18);
    local_20 = *local_1c;
    ExceptionList = &pvStack_c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  (**(code **)(*param_1 + 4))();
  param_1[5] = param_2[5];
  (**(code **)*param_1)();
  (**(code **)(*param_2 + 4))();
  param_2[5] = local_10;
  (**(code **)*param_2)();
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00678900 @ 00678900 ////

void __cdecl
FUN_00678900(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined *param_10)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc5748;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    iVar1 = param_1 + iVar4 * 0x18;
    cVar3 = (*(code *)param_10)(*(undefined4 *)(iVar1 + 0x14),param_9);
    if (cVar3 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
    (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
    puVar2[5] = *(undefined4 *)(iVar1 + 0x14);
    (**(code **)*puVar2)();
    param_2 = iVar4;
  }
  puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
  (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
  puVar2[5] = param_9;
  (**(code **)*puVar2)();
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006789d0 @ 006789d0 ////

void __cdecl FUN_006789d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc5768;
  local_c = ExceptionList;
  iVar1 = (param_3 - param_1) / 0x18;
  iVar2 = (param_2 - param_1) / 0x18;
  iVar5 = iVar2;
  local_38 = iVar1;
  while (iVar3 = iVar5, iVar3 != 0) {
    iVar5 = local_38 % iVar3;
    local_38 = iVar3;
  }
  if ((local_38 < iVar1) && (0 < local_38)) {
    piVar8 = (int *)(param_1 + local_38 * 0x18);
    param_2 = iVar2 * 0x18;
    ExceptionList = &local_c;
    do {
      local_18 = &local_24;
      iVar1 = param_2 + (int)piVar8;
      local_20 = 0;
      local_1c = (int *)0x0;
      local_24 = &PTR_LAB_00d3663c;
      local_10 = *(int *)(iVar2 * -0x18 + 0x14 + iVar1);
      if (local_10 != 0) {
        local_1c = (int *)(local_10 + 0x18);
        local_20 = *local_1c;
        *(int **)(*local_1c + 4) = &local_20;
        *local_1c = (int)&local_20;
      }
      local_4 = 0;
      if (iVar1 == param_3) {
        piVar7 = &param_1;
      }
      else {
        iStack_30 = iVar1;
        piVar7 = &iStack_30;
      }
      piVar6 = (int *)*piVar7;
      piVar7 = piVar8;
      while (piVar4 = piVar6, piVar4 != piVar8) {
        (**(code **)(*piVar7 + 4))();
        piVar7[5] = piVar4[5];
        (**(code **)*piVar7)();
        iVar1 = (param_3 - (int)piVar4) / 0x18;
        if (iVar2 < iVar1) {
          iStack_2c = param_2 + (int)piVar4;
          piVar7 = &iStack_2c;
        }
        else {
          iStack_28 = param_1 + (iVar2 - iVar1) * 0x18;
          piVar7 = &iStack_28;
        }
        piVar6 = (int *)*piVar7;
        piVar7 = piVar4;
      }
      (**(code **)(*piVar7 + 4))();
      piVar7[5] = local_10;
      (**(code **)*piVar7)();
      if (local_1c != (int *)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != 0) {
        *(int **)(local_20 + 4) = local_1c;
      }
      piVar8 = piVar8 + -6;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00678bb0 @ 00678bb0 ////

void __fastcall FUN_00678bb0(int *param_1)

{
  void *this;
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  void *unaff_EBP;
  uint *puVar5;
  uint *puVar6;
  uint local_1a4;
  undefined2 *local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined2 local_194 [8];
  void *pvStack_184;
  int local_180;
  uint local_17c;
  wchar_t *local_178;
  size_t local_174;
  undefined4 local_170;
  wchar_t local_16c [4];
  void *pvStack_164;
  uint uStack_15c;
  wchar_t *local_158;
  size_t local_154;
  undefined4 local_150;
  wchar_t local_14c [10];
  uint local_138 [11];
  wchar_t local_10c [64];
  wchar_t local_8c [58];
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc57a1;
  pvStack_c = ExceptionList;
  this = *(void **)param_1[0xd3];
  ExceptionList = &pvStack_c;
  FUN_009ce990(this,param_1[0xd2]);
  FUN_009cdc00(this,param_1[0xd2]);
  FUN_009ce080(this,param_1[0xd2],&local_17c,&local_180);
  puVar5 = (uint *)(*(int *)(*(int *)((int)this + 0xcc) + 0x2c) + param_1[0xd2] * 0x2c);
  puVar6 = local_138;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_1a4 = 0;
  if (((*(uint *)((int)this + 0xa4) & 0x1000) == 0) ||
     (uVar1 = FUN_00413450(param_1 + 0xd4,"latex_head",0,10), uVar1 == 0xffffffff)) {
    if (local_138[1] == 1) {
      if ((*(byte *)((local_138[0] & 0xff) * 0x78 + 0x21 + *(int *)((int)this + 200)) & 0x10) == 0)
      goto LAB_00678c92;
    }
    else if (local_138[1] != 2) goto LAB_00678c92;
  }
  local_1a4 = 0xffffffff;
LAB_00678c92:
  local_1a0 = local_194;
  local_194[0] = 0;
  local_19c = 0;
  local_198 = 10;
  local_158 = local_14c;
  local_14c[0] = L'\0';
  local_154 = 0;
  local_150 = 10;
  local_178 = local_16c;
  local_16c[0] = L'\0';
  local_174 = 0;
  local_170 = 10;
  local_4 = 2;
  if (1 < local_180) {
    uVar1 = FUN_00ace02d(L"WITHVARIATION");
    FUN_004036d0(&local_158,L"WITHVARIATION",uVar1);
    sVar2 = FUN_00ace02d(L"</phrase><phrase key=VARIATION>");
    FUN_0040cae0(&local_178,L"</phrase><phrase key=VARIATION>",sVar2);
    sVar2 = _swprintf(local_10c,0xd18f7c,(wchar_t *)(local_17c + 1));
    FUN_0040cae0(&local_178,local_10c,sVar2);
  }
  sVar2 = FUN_00ace02d(L"<phrasebook><translate>COSTUME_WARDROBE-DEPT_OPTIONCOUNTS");
  FUN_0040cae0(&local_1a0,L"<phrasebook><translate>COSTUME_WARDROBE-DEPT_OPTIONCOUNTS",sVar2);
  FUN_0040cae0(&local_1a0,local_158,local_154);
  sVar2 = FUN_00ace02d(L"</translate><phrase key=CURRENT>");
  FUN_0040cae0(&local_1a0,L"</translate><phrase key=CURRENT>",sVar2);
  uVar3 = FUN_009ce990(this,param_1[0xd2]);
  uVar1 = local_1a4;
  sVar2 = _swprintf(local_10c,0xd18f7c,(wchar_t *)(uVar3 + 1 + local_1a4));
  FUN_0040cae0(&local_1a0,local_10c,sVar2);
  sVar2 = FUN_00ace02d(L"</phrase><phrase key=TOTAL>");
  FUN_0040cae0(&local_1a0,L"</phrase><phrase key=TOTAL>",sVar2);
  iVar4 = FUN_009cdc00(this,param_1[0xd2]);
  sVar2 = _swprintf(local_8c,0xd18f7c,(wchar_t *)(iVar4 + uVar1));
  FUN_0040cae0(&local_1a0,local_8c,sVar2);
  FUN_0040cae0(&local_1a0,local_178,local_174);
  sVar2 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(&local_1a0,L"</phrase></phrasebook>",sVar2);
  (**(code **)(*param_1 + 0x90))(&local_1a0);
  (**(code **)(*(int *)param_1[0xe3] + 0x90))(&local_1a4);
  (**(code **)(*(int *)param_1[0xe9] + 0x90))(&stack0xfffffe58);
  if (10 < local_17c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_184);
  }
  if (10 < uStack_15c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_164);
  }
  if (local_1a4 < 0xb) {
    ExceptionList = pvStack_18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_EBP);
}


//// FUNCTION FUN_00678ef0 @ 00678ef0 ////

void FUN_00678ef0(char *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  void *pvVar10;
  byte *pbVar11;
  bool bVar12;
  byte **ppbVar13;
  char **ppcVar14;
  byte *local_ac;
  undefined4 local_a8;
  uint local_a4;
  byte local_a0 [20];
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [20];
  byte *local_6c;
  undefined4 local_68;
  uint local_64;
  byte local_60 [20];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc57bb;
  local_c = ExceptionList;
  local_ac = local_a0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 0x14;
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_ac,param_1,(int)pcVar6 - (int)(param_1 + 1));
  local_2c = local_20;
  local_4 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  _strncpy((char *)local_2c,"cos_watch",9);
  local_28 = 9;
  local_2c[9] = 0;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  pbVar7 = local_ac;
  pbVar11 = local_2c;
  do {
    bVar2 = *pbVar7;
    bVar12 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_00678fdc:
      iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_00678fe1;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar7[1];
    bVar12 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_00678fdc;
    pbVar7 = pbVar7 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar8 = 0;
LAB_00678fe1:
  if (iVar8 != 0) {
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 0x14;
    _strncpy((char *)local_6c,"cos_bracelet",0xc);
    local_68 = 0xc;
    local_6c[0xc] = 0;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    pbVar7 = local_ac;
    pbVar11 = local_6c;
    do {
      bVar2 = *pbVar7;
      bVar12 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_00679054:
        iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00679059;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar12 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_00679054;
      pbVar7 = pbVar7 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_00679059:
    if (iVar8 != 0) {
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      _strncpy(local_4c,"cos_ring",8);
      ppcVar14 = &local_4c;
      ppbVar13 = &local_ac;
      local_48 = 8;
      local_4c[8] = '\0';
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      uVar9 = FUN_00401ec0(ppbVar13,ppcVar14);
      if ((char)uVar9 == '\0') {
        local_8c = local_80;
        local_80[0] = '\0';
        local_88 = 0;
        local_84 = 0x14;
        _strncpy(local_8c,"MAKE_UP_NAILS",0xd);
        ppcVar14 = &local_8c;
        ppbVar13 = &local_ac;
        local_88 = 0xd;
        local_8c[0xd] = '\0';
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        uVar9 = FUN_00401ec0(ppbVar13,ppcVar14);
        bVar12 = false;
        if ((char)uVar9 == '\0') goto LAB_00679122;
      }
    }
  }
  bVar12 = true;
LAB_00679122:
  if ((bVar3) && (0x14 < local_84)) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  if ((bVar4) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((bVar5) && (0x14 < local_64)) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (bVar12) {
    pvVar10 = (void *)FUN_004345e0();
    FUN_00435400(pvVar10);
  }
  else {
    iVar8 = FUN_004345e0();
    FUN_00435550(iVar8);
  }
  if (local_a4 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_ac);
}


//// FUNCTION FUN_00679210 @ 00679210 ////

undefined4 FUN_00679210(char *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  uint3 uVar10;
  byte *pbVar11;
  bool bVar12;
  byte **ppbVar13;
  char **ppcVar14;
  byte *local_a0;
  undefined4 local_9c;
  uint local_98;
  byte local_94 [20];
  char *local_80;
  undefined4 local_7c;
  uint local_78;
  char local_74 [20];
  byte *local_60;
  undefined4 local_5c;
  uint local_58;
  byte local_54 [20];
  char *local_40;
  undefined4 local_3c;
  uint local_38;
  char local_34 [20];
  byte *local_20;
  undefined4 local_1c;
  uint local_18;
  byte local_14 [20];
  
  local_a0 = local_94;
  local_94[0] = 0;
  local_9c = 0;
  local_98 = 0x14;
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_a0,param_1,(int)pcVar6 - (int)(param_1 + 1));
  local_20 = local_14;
  local_14[0] = 0;
  local_1c = 0;
  local_18 = 0x14;
  _strncpy((char *)local_20,"cos_watch",9);
  local_1c = 9;
  local_20[9] = 0;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  pbVar7 = local_a0;
  pbVar11 = local_20;
  do {
    bVar2 = *pbVar7;
    bVar12 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_006792da:
      iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_006792df;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar7[1];
    bVar12 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_006792da;
    pbVar7 = pbVar7 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar8 = 0;
LAB_006792df:
  if (iVar8 != 0) {
    local_60 = local_54;
    local_54[0] = 0;
    local_5c = 0;
    local_58 = 0x14;
    _strncpy((char *)local_60,"cos_bracelet",0xc);
    local_5c = 0xc;
    local_60[0xc] = 0;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    pbVar7 = local_a0;
    pbVar11 = local_60;
    do {
      bVar2 = *pbVar7;
      bVar12 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_00679354:
        iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00679359;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar12 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_00679354;
      pbVar7 = pbVar7 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_00679359:
    if (iVar8 != 0) {
      local_40 = local_34;
      local_34[0] = '\0';
      local_3c = 0;
      local_38 = 0x14;
      _strncpy(local_40,"cos_ring",8);
      ppcVar14 = &local_40;
      ppbVar13 = &local_a0;
      local_3c = 8;
      local_40[8] = '\0';
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      uVar9 = FUN_00401ec0(ppbVar13,ppcVar14);
      if ((char)uVar9 == '\0') {
        local_80 = local_74;
        local_74[0] = '\0';
        local_7c = 0;
        local_78 = 0x14;
        _strncpy(local_80,"MAKE_UP_NAILS",0xd);
        ppcVar14 = &local_80;
        ppbVar13 = &local_a0;
        local_7c = 0xd;
        local_80[0xd] = '\0';
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        uVar9 = FUN_00401ec0(ppbVar13,ppcVar14);
        bVar12 = false;
        if ((char)uVar9 == '\0') goto LAB_00679422;
      }
    }
  }
  bVar12 = true;
LAB_00679422:
  if ((bVar3) && (0x14 < local_78)) {
                    /* WARNING: Subroutine does not return */
    _free(local_80);
  }
  if ((bVar4) && (0x14 < local_38)) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if ((bVar5) && (0x14 < local_58)) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  uVar10 = (uint3)(local_98 >> 8);
  if (bVar12) {
    if (local_98 < 0x15) {
      return CONCAT31(uVar10,1);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  if (local_98 < 0x15) {
    return (uint)uVar10 << 8;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_a0);
}


//// FUNCTION FUN_00679510 @ 00679510 ////

uint __thiscall FUN_00679510(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x434) != 0) {
    if ((*(int *)((int)this + 0x438) - *(int *)((int)this + 0x434)) / 0x18 != 0) {
      iVar3 = 0;
      iVar4 = 0;
      while( true ) {
        if (*(int *)((int)this + 0x434) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = (*(int *)((int)this + 0x438) - *(int *)((int)this + 0x434)) / 0x18;
        }
        if ((int)uVar2 <= iVar3) break;
        iVar1 = *(int *)(*(int *)((int)this + 0x434) + iVar4 + 0x14);
        if ((*(int *)(iVar1 + 0x38) == *(int *)(param_1 + 0x38)) &&
           (iVar1 = *(int *)(iVar1 + 0x3c), iVar1 == *(int *)(param_1 + 0x3c))) {
          return CONCAT31((int3)((uint)iVar1 >> 8),1);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x18;
      }
      return uVar2 & 0xffffff00;
    }
  }
  return 0;
}


//// FUNCTION FUN_006795b0 @ 006795b0 ////

undefined4 __fastcall FUN_006795b0(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  uint _Count;
  uint *this;
  char **ppcVar8;
  char **ppcVar9;
  char *local_120;
  uint local_11c;
  uint local_118;
  char local_114 [20];
  char *local_100;
  undefined4 local_fc;
  uint local_f8;
  char local_f4 [20];
  char *local_e0;
  undefined4 local_dc;
  uint local_d8;
  char local_d4 [20];
  char local_c0 [32];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [33];
  byte local_57;
  
  if ((**(int **)(param_1 + 0x34c) == 0) ||
     (iVar2 = *(int *)(**(int **)(param_1 + 0x34c) + 0xcc), iVar2 == 0)) {
    return 0;
  }
  this = (uint *)(*(int *)(param_1 + 0x348) * 0x2c + *(int *)(iVar2 + 0x2c));
  FUN_009a2210(&local_9c);
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_c0[0] = '\0';
  local_a0 = 0;
  FUN_009cf5f0(this,local_c0,**(int **)(param_1 + 0x34c));
  local_120 = local_114;
  pcVar7 = local_c0;
  local_114[0] = '\0';
  local_11c = 0;
  local_118 = 0x14;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  _Count = (int)pcVar7 - (int)(local_c0 + 1);
  if (0x13 < _Count) {
    local_118 = _Count + 0x20 & 0xffffffe0;
    local_120 = _malloc(local_118);
  }
  _strncpy(local_120,local_c0,_Count);
  local_120[_Count] = '\0';
  uVar6 = this[1];
  local_11c = _Count;
  if (uVar6 != 1) {
    if ((1 < (int)uVar6) && ((int)uVar6 < 0xe)) {
      if (0x14 < local_118) {
                    /* WARNING: Subroutine does not return */
        _free(local_120);
      }
      goto LAB_006798c5;
    }
    goto joined_r0x0067987c;
  }
  local_100 = local_f4;
  local_f4[0] = '\0';
  local_fc = 0;
  local_f8 = 0x14;
  _strncpy(local_100,"COS_LATEX_HEAD",0xe);
  ppcVar9 = &local_100;
  ppcVar8 = &local_120;
  local_fc = 0xe;
  local_100[0xe] = '\0';
  bVar4 = false;
  uVar5 = FUN_00401ec0(ppcVar8,ppcVar9);
  if ((char)uVar5 == '\0') {
    local_e0 = local_d4;
    local_d4[0] = '\0';
    local_dc = 0;
    local_d8 = 0x14;
    _strncpy(local_e0,"cos_latex_head",0xe);
    ppcVar9 = &local_e0;
    ppcVar8 = &local_120;
    local_dc = 0xe;
    local_e0[0xe] = '\0';
    bVar4 = true;
    uVar5 = FUN_00401ec0(ppcVar8,ppcVar9);
    bVar3 = false;
    if ((char)uVar5 != '\0') goto LAB_006797c3;
  }
  else {
LAB_006797c3:
    bVar3 = true;
  }
  if ((bVar4) && (0x14 < local_d8)) {
                    /* WARNING: Subroutine does not return */
    _free(local_e0);
  }
  if (0x14 < local_f8) {
                    /* WARNING: Subroutine does not return */
    _free(local_100);
  }
  if (bVar3) {
    FUN_006785d0(local_78,(undefined4 *)
                          ((*(uint *)(*(int *)(param_1 + 0x348) * 0x2c +
                                     *(int *)(*(int *)(**(int **)(param_1 + 0x34c) + 0xcc) + 0x2c))
                           & 0xff) * 0x78 + *(int *)(**(int **)(param_1 + 0x34c) + 200)));
    uVar6 = local_118;
    if ((local_57 & 0x10) == 0) {
      if (0x14 < local_118) {
                    /* WARNING: Subroutine does not return */
        _free(local_120);
      }
      goto LAB_006798c5;
    }
  }
  else {
    uVar6 = local_118;
    if (*(char *)((*this & 0xff) * 0x78 + 0x20 + *(int *)(**(int **)(param_1 + 0x34c) + 200)) ==
        '\x05') {
      if (0x14 < local_118) {
                    /* WARNING: Subroutine does not return */
        _free(local_120);
      }
LAB_006798c5:
      return CONCAT31((int3)(uVar6 >> 8),1);
    }
  }
joined_r0x0067987c:
  if (local_118 < 0x15) {
    return uVar6 & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_120);
}


//// FUNCTION FUN_00679930 @ 00679930 ////

void __cdecl FUN_00679930(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_00678830(param_2,param_1);
  }
  cVar1 = (*(code *)param_4)(param_3[5],param_2[5]);
  if (cVar1 != '\0') {
    FUN_00678830(param_3,param_2);
  }
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_00678830(param_2,param_1);
  }
  return;
}


//// FUNCTION FUN_006799a0 @ 006799a0 ////

void __cdecl
FUN_006799a0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_stack_ffffffd4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc57d8;
  local_4 = 0;
  iVar4 = param_2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    in_stack_ffffffd4 = 0x6799f3;
    cVar2 = (*(code *)param_10)();
    if (cVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    piVar5 = (int *)(param_1 + iVar4 * 0x18);
    (**(code **)(*piVar5 + 4))();
    piVar5[5] = *(int *)(param_1 + iVar3 * 0x18 + 0x14);
    (**(code **)*piVar5)();
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0x18);
    (**(code **)(*(int *)(param_1 + iVar4 * 0x18) + 4))();
    puVar1[5] = *(undefined4 *)(param_1 + param_3 * 0x18 + -4);
    (**(code **)*puVar1)();
    iVar4 = param_3 + -1;
  }
  iVar3 = 0;
  piVar5 = (int *)0x0;
  if (param_9 != 0) {
    piVar5 = (int *)(param_9 + 0x18);
    iVar3 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffffc8;
    *piVar5 = (int)&stack0xffffffc8;
  }
  FUN_00678900(param_1,iVar4,param_2,&PTR_LAB_00d3663c,iVar3,piVar5,&stack0xffffffc4,
               in_stack_ffffffd4,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00679b00 @ 00679b00 ////

void __cdecl
FUN_00679b00(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_ffffffe0;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc57f8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_3 + 4))();
  param_3[5] = *(int *)(param_1 + 0x14);
  (**(code **)*param_3)();
  iVar1 = 0;
  piVar2 = (int *)0x0;
  if (param_9 != 0) {
    piVar2 = (int *)(param_9 + 0x18);
    iVar1 = *piVar2;
    *(undefined1 **)(*piVar2 + 4) = &stack0xffffffd4;
    *piVar2 = (int)&stack0xffffffd4;
  }
  FUN_006799a0(param_1,0,(param_2 - param_1) / 0x18,&PTR_LAB_00d3663c,iVar1,piVar2,&stack0xffffffd0,
               in_stack_ffffffe0,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00679be0 @ 00679be0 ////

void __thiscall FUN_00679be0(void *this,char param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  char local_48 [32];
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)((int)this + 0x344) != 0) && (DAT_0104daa0 != 0)) {
    FUN_009a2210(&local_24);
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_48[0] = '\0';
    local_28 = 0.0;
    FUN_009cfb20((void *)**(undefined4 **)((int)this + 0x34c),*(int *)((int)this + 0x348),local_48);
    fVar3 = FUN_0066a990(DAT_0104daa0);
    if ((float10)local_28 < fVar3 * (float10)0.6666667) {
      uVar1 = FUN_00679210(local_48);
      if ((char)uVar1 == '\0') {
        FUN_0066b670();
      }
    }
    FUN_00678bb0(this);
    if (param_1 != '\0') {
      uVar1 = FUN_00679210(local_48);
      if ((char)uVar1 != '\0') {
        iVar2 = FUN_004345e0();
        FUN_00435550(iVar2);
        return;
      }
    }
    FUN_00678ef0(local_48);
  }
  return;
}


//// FUNCTION FUN_00679cf0 @ 00679cf0 ////

void __cdecl FUN_00679cf0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d3663c;
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


//// FUNCTION FUN_00679d60 @ 00679d60 ////

void __cdecl FUN_00679d60(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00679930(param_1,param_1 + iVar1 * 6,param_1 + iVar1 * 0xc,param_4);
    FUN_00679930(param_2 + iVar1 * -6,param_2,param_2 + iVar1 * 6,param_4);
    FUN_00679930(param_3 + iVar1 * -0xc,param_3 + iVar1 * -6,param_3,param_4);
    FUN_00679930(param_1 + iVar1 * 6,param_2,param_3 + iVar1 * -6,param_4);
    return;
  }
  FUN_00679930(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_00679e10 @ 00679e10 ////

void __cdecl FUN_00679e10(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_stack_ffffffe4;
  
  iVar2 = (param_2 - param_1) / 0x18;
  iVar3 = iVar2 / 2;
  if (0 < iVar3) {
    piVar4 = (int *)(param_1 + 0x14 + iVar3 * 0x18);
    do {
      iVar5 = 0;
      piVar6 = (int *)0x0;
      piVar4 = piVar4 + -6;
      iVar1 = *piVar4;
      iVar3 = iVar3 + -1;
      if (iVar1 != 0) {
        piVar6 = (int *)(iVar1 + 0x18);
        iVar5 = *piVar6;
        *(undefined1 **)(*piVar6 + 4) = &stack0xffffffd8;
        *piVar6 = (int)&stack0xffffffd8;
      }
      FUN_006799a0(param_1,iVar3,iVar2,&PTR_LAB_00d3663c,iVar5,piVar6,&stack0xffffffd4,
                   in_stack_ffffffe4,iVar1,param_3);
    } while (0 < iVar3);
  }
  return;
}


//// FUNCTION FUN_00679ee0 @ 00679ee0 ////

void __cdecl FUN_00679ee0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_ffffffec;
  
  iVar2 = 0;
  piVar3 = (int *)0x0;
  iVar1 = *(int *)(param_2 + -4);
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 0x18);
    iVar2 = *piVar3;
    *(undefined1 **)(*piVar3 + 4) = &stack0xffffffe0;
    *piVar3 = (int)&stack0xffffffe0;
  }
  FUN_00679b00(param_1,param_2 + -0x18,(int *)(param_2 + -0x18),&PTR_LAB_00d3663c,iVar2,piVar3,
               &stack0xffffffdc,in_stack_ffffffec,iVar1,param_3);
  return;
}


//// FUNCTION FUN_00679f50 @ 00679f50 ////

void __fastcall FUN_00679f50(void *param_1)

{
  int iVar1;
  
  if (DAT_0104da84 != (void *)0x0) {
    iVar1 = FUN_004345e0();
    iVar1 = FUN_00434fe0(iVar1);
    FUN_0048dd10(DAT_0104da84,iVar1);
  }
  FUN_00679be0(param_1,'\0');
  FUN_0066b850(DAT_0104daa0);
  FUN_00678100((int)param_1);
  iVar1 = FUN_004345e0();
  if (iVar1 != 0) {
    iVar1 = FUN_004345e0();
    FUN_00433b20(iVar1);
    return;
  }
  return;
}


//// FUNCTION FUN_00679fb0 @ 00679fb0 ////

void __fastcall FUN_00679fb0(void *param_1)

{
  int iVar1;
  void *this;
  
  if (*(void **)((int)param_1 + 0x344) != (void *)0x0) {
    FUN_009d12f0(*(void **)((int)param_1 + 0x344),*(int *)((int)param_1 + 0x348),(void *)0x1);
    if (DAT_0104da80 != 0) {
      iVar1 = FUN_004345e0();
      *(undefined1 *)(iVar1 + 0x356) = 1;
    }
    iVar1 = FUN_004345e0();
    this = (void *)FUN_004349a0(iVar1);
    if (this != (void *)0x0) {
      FUN_009d12f0(this,*(int *)((int)param_1 + 0x348),(void *)0x1);
    }
    FUN_00679f50(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_0067a010 @ 0067a010 ////

void __fastcall FUN_0067a010(void *param_1)

{
  int iVar1;
  void *this;
  
  if (*(void **)((int)param_1 + 0x344) != (void *)0x0) {
    FUN_009d12f0(*(void **)((int)param_1 + 0x344),*(int *)((int)param_1 + 0x348),(void *)0x0);
    if (DAT_0104da80 != 0) {
      iVar1 = FUN_004345e0();
      *(undefined1 *)(iVar1 + 0x356) = 1;
    }
    iVar1 = FUN_004345e0();
    this = (void *)FUN_004349a0(iVar1);
    if (this != (void *)0x0) {
      FUN_009d12f0(this,*(int *)((int)param_1 + 0x348),(void *)0x0);
    }
    FUN_00679f50(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_0067a070 @ 0067a070 ////

void __fastcall FUN_0067a070(int *param_1)

{
  void *this;
  int iVar1;
  
  if ((void *)param_1[0xd1] == (void *)0x0) {
    return;
  }
  FUN_009d1780((void *)param_1[0xd1],param_1[0xd2]);
  FUN_009cdc00(*(void **)(param_1[0xd1] + 0xc),param_1[0xd2]);
  FUN_009d1740((void *)param_1[0xd1],param_1[0xd2],param_1[0x105]);
  if ((0 < param_1[0x106]) && (iVar1 = 0, 0 < param_1[0x106])) {
    do {
      FUN_009d12f0((void *)param_1[0xd1],param_1[0xd2],(void *)0x1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0x106]);
  }
  iVar1 = FUN_004345e0();
  this = (void *)FUN_004349a0(iVar1);
  if (this != (void *)0x0) {
    FUN_009d1740(this,param_1[0xd2],param_1[0x105]);
    if ((0 < param_1[0x106]) && (iVar1 = 0, 0 < param_1[0x106])) {
      do {
        FUN_009d12f0(this,param_1[0xd2],(void *)0x1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[0x106]);
    }
  }
  FUN_00679be0(param_1,'\x01');
  (**(code **)(*(int *)param_1[0xef] + 100))(2,param_1,0xc0800000);
  iVar1 = FUN_004345e0();
  if (iVar1 != 0) {
    iVar1 = FUN_004345e0();
    FUN_00433b20(iVar1);
  }
  (**(code **)(*param_1 + 0x50))(1);
  FUN_0066b850(DAT_0104daa0);
  return;
}


//// FUNCTION FUN_0067a190 @ 0067a190 ////

void __cdecl FUN_0067a190(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d3663c;
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


//// FUNCTION FUN_0067a260 @ 0067a260 ////

void __cdecl FUN_0067a260(undefined4 *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_8;
  int *local_4;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  FUN_00679d60(param_2,piVar4,param_3 + -6,param_4);
  piStack_8 = piVar4;
  while (((param_2 < piStack_8 &&
          (cVar2 = (*(code *)param_4)(piStack_8[-1],piStack_8[5]), cVar2 == '\0')) &&
         (cVar2 = (*(code *)param_4)(piStack_8[5],piStack_8[-1]), cVar2 == '\0'))) {
    piStack_8 = piStack_8 + -6;
  }
  do {
    piVar4 = piVar4 + 6;
    piVar1 = piVar4;
    local_4 = piVar4;
    piVar5 = piStack_8;
    if ((param_3 <= piVar4) || (cVar2 = (*(code *)param_4)(piVar4[5],piStack_8[5]), cVar2 != '\0'))
    break;
    cVar2 = (*(code *)param_4)(piStack_8[5],piVar4[5]);
  } while (cVar2 == '\0');
joined_r0x0067a31a:
  do {
    if (param_3 <= piVar1) {
LAB_0067a364:
      if (param_2 < piStack_8) {
        piVar3 = piStack_8 + -1;
        do {
          cVar2 = (*(code *)param_4)(*piVar3,piVar5[5]);
          piVar4 = local_4;
          if (cVar2 == '\0') {
            cVar2 = (*(code *)param_4)(piVar5[5],*piVar3);
            if (cVar2 != '\0') break;
            piVar5 = piVar5 + -6;
            FUN_00678830(piVar5,piVar3 + -5);
          }
          piStack_8 = piStack_8 + -6;
          piVar3 = piVar3 + -6;
        } while (param_2 < piStack_8);
      }
      if (piStack_8 == param_2) {
        if (piVar1 == param_3) {
          *param_1 = piVar5;
          param_1[1] = piVar4;
          return;
        }
        if (piVar4 != piVar1) {
          FUN_00678830(piVar5,piVar4);
        }
        piVar4 = piVar4 + 6;
        FUN_00678830(piVar5,piVar1);
        piVar1 = piVar1 + 6;
        local_4 = piVar4;
        piVar5 = piVar5 + 6;
      }
      else {
        piStack_8 = piStack_8 + -6;
        if (piVar1 == param_3) {
          piVar5 = piVar5 + -6;
          if (piStack_8 != piVar5) {
            FUN_00678830(piStack_8,piVar5);
          }
          piVar4 = piVar4 + -6;
          FUN_00678830(piVar5,piVar4);
          local_4 = piVar4;
        }
        else {
          FUN_00678830(piVar1,piStack_8);
          piVar1 = piVar1 + 6;
        }
      }
      goto joined_r0x0067a31a;
    }
    cVar2 = (*(code *)param_4)(piVar5[5],piVar1[5]);
    local_4 = piVar4;
    if (cVar2 == '\0') {
      cVar2 = (*(code *)param_4)(piVar1[5],piVar5[5]);
      if (cVar2 != '\0') goto LAB_0067a364;
      local_4 = piVar4 + 6;
      FUN_00678830(piVar4,piVar1);
    }
    piVar4 = local_4;
    piVar1 = piVar1 + 6;
  } while( true );
}


//// FUNCTION FUN_0067a4b0 @ 0067a4b0 ////

void __cdecl FUN_0067a4b0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar2 = param_1;
  if (param_1 != param_2) {
    while (iVar3 = iVar2, iVar2 = iVar3 + 0x18, iVar2 != param_2) {
      cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(param_1 + 0x14));
      if (cVar4 == '\0') {
        cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar3 + 0x14));
        iVar1 = iVar2;
        if (cVar4 != '\0') {
          do {
            iVar5 = iVar1 + -0x18;
            cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar1 + -0x1c))
            ;
            iVar1 = iVar5;
          } while (cVar4 != '\0');
          if ((iVar5 != iVar2) && (iVar2 != iVar3 + 0x30)) {
            FUN_006789d0(iVar5,iVar2,iVar3 + 0x30);
          }
        }
      }
      else if ((param_1 != iVar2) && (iVar2 != iVar3 + 0x30)) {
        FUN_006789d0(param_1,iVar2,iVar3 + 0x30);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0067a680 @ 0067a680 ////

void __cdecl FUN_0067a680(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (1 < iVar1 / 0x18) {
    FUN_00679ee0(param_1,param_2,param_3);
    param_2 = param_2 + -0x18;
    iVar1 = param_2 - param_1;
  }
  return;
}


//// FUNCTION FUN_0067a6e0 @ 0067a6e0 ////

undefined4 * FUN_0067a6e0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_0067a190(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0067a710 @ 0067a710 ////

void FUN_0067a710(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00678730(param_1);
  }
  return;
}


//// FUNCTION FUN_0067a740 @ 0067a740 ////

void FUN_0067a740(void)

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
  puStack_8 = &LAB_00cc5818;
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


//// FUNCTION FUN_0067a7b0 @ 0067a7b0 ////

void __cdecl FUN_0067a7b0(int *param_1,int *param_2,int param_3,undefined *param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 / 0x18;
    if (iVar2 < 0x21) {
LAB_0067a890:
      if (1 < iVar2) {
        FUN_0067a4b0((int)param_1,(int)param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < ((int)param_2 - (int)param_1) / 0x18) {
          FUN_00679e10((int)param_1,(int)param_2,param_4);
        }
        FUN_0067a680((int)param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_0067a890;
    }
    FUN_0067a260(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)local_8 - (int)param_1) / 0x18 < ((int)param_2 - (int)local_4) / 0x18) {
      FUN_0067a7b0(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_0067a7b0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_0067a950 @ 0067a950 ////

void __fastcall FUN_0067a950(int param_1)

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
    FUN_00678730(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0067a9a0 @ 0067a9a0 ////

void __thiscall FUN_0067a9a0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cc5838;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d3663c;
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
      FUN_0067a740();
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
        iVar3 = FUN_00677e80((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_00679cf0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_0067a190(puVar5,param_2,(int)&local_34);
      FUN_00679cf0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0067a710(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_00679cf0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0067a6e0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00678320(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_00679cf0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00677fc0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00678320(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_0067ad30 @ 0067ad30 ////

void __thiscall FUN_0067ad30(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0067ad75;
    }
  }
  iVar1 = 0;
LAB_0067ad75:
  FUN_0067a9a0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_0067ada0 @ 0067ada0 ////

void __fastcall FUN_0067ada0(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *_Memory_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc58c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d36684;
  param_1[0x14] = &PTR_FUN_00d3666c;
  local_4 = 8;
  if ((undefined4 *)param_1[0xd1] != (undefined4 *)0x0) {
    FUN_009d2b50((undefined4 *)param_1[0xd1]);
    param_1[0xd1] = 0;
  }
  _Memory = (undefined4 *)param_1[0xd3];
  if (_Memory != (undefined4 *)0x0) {
    FUN_009d2b70(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (param_1[0x102] != 0) {
    _Memory_00 = *(void **)(param_1[0x102] + 4);
    if (_Memory_00 != (void *)0x0) {
      FUN_00990ec0((int)_Memory_00);
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
    *(undefined4 *)(param_1[0x102] + 4) = 0;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x102]);
  }
  FUN_0067a950((int)(param_1 + 0x10c));
  param_1[0xfc] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xfe] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfe] = param_1[0xfd];
  }
  if (param_1[0xfd] != 0) {
    *(undefined4 *)(param_1[0xfd] + 4) = param_1[0xfe];
  }
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0x101] = 0;
  if ((undefined4 *)param_1[0xfe] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfe] = param_1[0xfd];
  }
  if (param_1[0xfd] != 0) {
    *(undefined4 *)(param_1[0xfd] + 4) = param_1[0xfe];
  }
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xf6] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xf8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf8] = param_1[0xf7];
  }
  if (param_1[0xf7] != 0) {
    *(undefined4 *)(param_1[0xf7] + 4) = param_1[0xf8];
  }
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xfb] = 0;
  if ((undefined4 *)param_1[0xf8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf8] = param_1[0xf7];
  }
  if (param_1[0xf7] != 0) {
    *(undefined4 *)(param_1[0xf7] + 4) = param_1[0xf8];
  }
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf0] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xf2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf2] = param_1[0xf1];
  }
  if (param_1[0xf1] != 0) {
    *(undefined4 *)(param_1[0xf1] + 4) = param_1[0xf2];
  }
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf5] = 0;
  if ((undefined4 *)param_1[0xf2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf2] = param_1[0xf1];
  }
  if (param_1[0xf1] != 0) {
    *(undefined4 *)(param_1[0xf1] + 4) = param_1[0xf2];
  }
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xea] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xec] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xec] = param_1[0xeb];
  }
  if (param_1[0xeb] != 0) {
    *(undefined4 *)(param_1[0xeb] + 4) = param_1[0xec];
  }
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xef] = 0;
  if ((undefined4 *)param_1[0xec] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xec] = param_1[0xeb];
  }
  if (param_1[0xeb] != 0) {
    *(undefined4 *)(param_1[0xeb] + 4) = param_1[0xec];
  }
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xe4] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xe6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe6] = param_1[0xe5];
  }
  if (param_1[0xe5] != 0) {
    *(undefined4 *)(param_1[0xe5] + 4) = param_1[0xe6];
  }
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe9] = 0;
  if ((undefined4 *)param_1[0xe6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe6] = param_1[0xe5];
  }
  if (param_1[0xe5] != 0) {
    *(undefined4 *)(param_1[0xe5] + 4) = param_1[0xe6];
  }
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xde] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xe0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe0] = param_1[0xdf];
  }
  if (param_1[0xdf] != 0) {
    *(undefined4 *)(param_1[0xdf] + 4) = param_1[0xe0];
  }
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe3] = 0;
  if ((undefined4 *)param_1[0xe0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe0] = param_1[0xdf];
  }
  if (param_1[0xdf] != 0) {
    *(undefined4 *)(param_1[0xdf] + 4) = param_1[0xe0];
  }
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  if (0x14 < (uint)param_1[0xd6]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd4]);
  }
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0067b130 @ 0067b130 ////

void __thiscall FUN_0067b130(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0067a190(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0067ad30(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0067b1c0 @ 0067b1c0 ////

undefined4 * __thiscall FUN_0067b1c0(void *this,byte param_1)

{
  FUN_0067ada0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0067b1e0 @ 0067b1e0 ////

undefined4 * __thiscall FUN_0067b1e0(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_0040a070(this);
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined ***)this = &PTR_FUN_00d36634;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  return this;
}


//// FUNCTION FUN_0067b210 @ 0067b210 ////

void __fastcall FUN_0067b210(void *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined ***pppuVar6;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  undefined **local_38;
  int local_34;
  int *local_30;
  undefined ***local_2c;
  undefined4 *local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc5909;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_50 = FUN_009cdc00(*(void **)(*(int *)((int)param_1 + 0x344) + 0xc),
                          *(int *)((int)param_1 + 0x348));
  local_40 = FUN_009ce990(*(void **)(*(int *)((int)param_1 + 0x344) + 0xc),
                          *(int *)((int)param_1 + 0x348));
  FUN_009ce080(*(void **)(*(int *)((int)param_1 + 0x344) + 0xc),*(int *)((int)param_1 + 0x348),
               &local_4c,&local_3c);
  local_48 = **(int **)((int)param_1 + 0x34c);
  puVar3 = (undefined4 *)
           (*(int *)(*(int *)(local_48 + 0xcc) + 0x2c) + *(int *)((int)param_1 + 0x348) * 0x2c);
  pppuVar6 = &local_38;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pppuVar6 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar6 = pppuVar6 + 1;
  }
  local_58 = 0;
  if (((*(uint *)(local_48 + 0xa4) & 0x1000) == 0) ||
     (uVar2 = FUN_00413450((void *)((int)param_1 + 0x350),"latex_head",0,10), uVar2 == 0xffffffff))
  {
    if (local_34 == 1) {
      if ((*(byte *)(((uint)local_38 & 0xff) * 0x78 + 0x21 + *(int *)(local_48 + 200)) & 0x10) == 0)
      goto LAB_0067b309;
    }
    else if (local_34 != 2) goto LAB_0067b309;
  }
  local_58 = 1;
LAB_0067b309:
  if ((int)local_58 < local_50) {
    do {
      FUN_009cf8f0(*(void **)(*(int *)((int)param_1 + 0x344) + 0xc),*(int *)((int)param_1 + 0x348),
                   local_58);
      FUN_009ce080(*(void **)(*(int *)((int)param_1 + 0x344) + 0xc),*(int *)((int)param_1 + 0x348),
                   &local_44,&local_54);
      uVar2 = local_44;
      if ((int)local_44 < local_54) {
        do {
          puVar3 = operator_new(0x40);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3[4] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
            puVar1 = puVar3 + 6;
            puVar3[8] = 0;
            *puVar1 = 0;
            puVar3[7] = 0;
            puVar3[0xb] = 0;
            puVar3[0xc] = 0;
            puVar3[0xd] = 0;
            puVar3[1] = &PTR_LAB_00d16abc;
            puVar3[3] = puVar1;
            *puVar1 = puVar3 + 2;
            puVar3[0xe] = local_58;
            *puVar3 = &PTR_FUN_00d36634;
            puVar3[0xf] = uVar2;
          }
          local_4 = 0xffffffff;
          uVar4 = FUN_00679510(param_1,(int)puVar3);
          if ((char)uVar4 == '\0') {
            local_2c = &local_38;
            local_34 = 0;
            local_30 = (int *)0x0;
            local_38 = &PTR_LAB_00d3663c;
            if (puVar3 != (undefined4 *)0x0) {
              local_30 = puVar3 + 6;
              local_34 = *local_30;
              *(int **)(*local_30 + 4) = &local_34;
              *local_30 = (int)&local_34;
            }
            local_4 = 3;
            local_24 = puVar3;
            FUN_0067b130((void *)((int)param_1 + 0x430),(int)&local_38);
            local_4 = 0xffffffff;
            local_38 = &PTR_LAB_00d3663c;
            if (local_30 != (int *)0x0) {
              *local_30 = local_34;
            }
            if (local_34 != 0) {
              *(int **)(local_34 + 4) = local_30;
            }
            local_24 = (undefined4 *)0x0;
            local_34 = 0;
            local_30 = (int *)0x0;
          }
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < local_54);
      }
      local_58 = local_58 + 1;
    } while ((int)local_58 < local_50);
  }
  FUN_0067a7b0(*(int **)((int)param_1 + 0x434),*(int **)((int)param_1 + 0x438),
               ((int)*(int **)((int)param_1 + 0x438) - (int)*(int **)((int)param_1 + 0x434)) / 0x18,
               FUN_00677e30);
  FUN_009cf8f0(*(void **)(*(int *)((int)param_1 + 0x344) + 0xc),*(int *)((int)param_1 + 0x348),
               local_40);
  iVar5 = 0;
  if (0 < (int)local_4c) {
    do {
      FUN_009d12f0(*(void **)((int)param_1 + 0x344),*(int *)((int)param_1 + 0x348),(void *)0x1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)local_4c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION WCostumeFiddler_Constructor @ 0067b5b0 ////

int * __thiscall WCostumeFiddler_Constructor(void *this,int param_1,void *param_2,int param_3)

{
  uint *puVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  size_t sVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 **unaff_EBP;
  char *pcVar12;
  float10 fVar13;
  float fVar14;
  void *pvStack_27c;
  uint *puStack_254;
  undefined4 uStack_250;
  undefined1 *puStack_24c;
  uint uStack_248;
  uint uStack_244;
  undefined1 *puStack_240;
  char *pcStack_23c;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  undefined1 *puStack_214;
  uint auStack_210 [2];
  void *pvStack_208;
  wchar_t *pwVar18;
  void **ppvVar19;
  uint uStack_1f8;
  void *pvStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  void *pvStack_1e8;
  undefined4 *puStack_1e4;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint local_1b0;
  undefined1 *local_1ac;
  char *local_1a8;
  undefined4 local_1a4;
  uint local_1a0;
  char local_19c [4];
  void *apvStack_198 [2];
  uint uStack_190;
  char *local_188;
  undefined4 local_184;
  uint local_180;
  char local_17c [20];
  undefined4 *local_168;
  undefined4 *puStack_164;
  void *local_160;
  undefined4 local_15c;
  uint local_158;
  wchar_t awStack_144 [8];
  int local_134;
  void *pvStack_130;
  uint uStack_128;
  void *local_110;
  char local_10c;
  undefined4 local_10b;
  undefined4 uStack_d0;
  undefined4 uStack_98;
  undefined4 uStack_5c;
  undefined1 uStack_3c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Costume style-cycling UI (COSTUMEFIDDLER_NEXTSTYLE/REVERTSTYLE,
                       prev/next/default/goback buttons) -- companion tool to WShotFiddler, lets the
                       player cycle through costume style variants for a character. Includes a dev
                       sanity-check warning: "This costume %s has the prop option %s set to 0 even
                       though the prop is requested!!". */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc5bbe;
  local_c = ExceptionList;
  local_1b0 = 0;
  ExceptionList = &local_c;
  local_110 = this;
  FUN_007432f0(this);
  *(int *)((int)this + 0x344) = param_1;
  *(undefined ***)this = &PTR_FUN_00d36684;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d3666c;
  puVar15 = (undefined1 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x350) = puVar15;
  *puVar15 = 0;
  *(undefined4 *)((int)this + 0x358) = 0x14;
  *(undefined4 *)((int)this + 0x354) = 0;
  *puVar15 = 0;
  *(uint *)((int)this + 0x370) = *(uint *)((int)this + 0x370) & 0xfffffffd | 1;
  *(undefined4 *)((int)this + 0x374) = 1;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 **)((int)this + 900) = (undefined4 *)((int)this + 0x378);
  *(undefined4 *)((int)this + 0x378) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 **)((int)this + 0x39c) = (undefined4 *)((int)this + 0x390);
  *(undefined4 *)((int)this + 0x390) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 **)((int)this + 0x3b4) = (undefined4 *)((int)this + 0x3a8);
  *(undefined4 *)((int)this + 0x3a8) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 **)((int)this + 0x3cc) = (undefined4 *)((int)this + 0x3c0);
  *(undefined4 *)((int)this + 0x3c0) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 **)((int)this + 0x3e4) = (undefined4 *)((int)this + 0x3d8);
  *(undefined4 *)((int)this + 0x3d8) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 **)((int)this + 0x3fc) = (undefined4 *)((int)this + 0x3f0);
  *(undefined4 *)((int)this + 0x3f0) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x404) = 0;
  local_4._0_1_ = 7;
  local_4._1_3_ = 0;
  *(undefined1 *)((int)this + 0x40c) = 1;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined1 *)((int)this + 0x41d) = 0;
  *(undefined1 *)((int)this + 0x41e) = 1;
  FUN_0043b460((undefined4 *)((int)this + 0x420));
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  iVar11 = *(int *)((int)this + 0x344);
  local_4._0_1_ = 8;
  if (iVar11 != 0) {
    *(int *)(iVar11 + 4) = *(int *)(iVar11 + 4) + 1;
    local_168 = operator_new(0x10);
    local_4._0_1_ = 9;
    if (local_168 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_009d2620(local_168,*(int *)((int)this + 0x344));
    }
    *(int *)((int)this + 0x348) = param_3;
    *(int **)((int)this + 0x34c) = piVar3;
    puVar5 = (undefined4 *)(piVar3[3] + param_3 * 0x28);
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_004015d0((undefined4 *)((int)this + 0x350),(char *)*puVar5,
                 *(uint *)(piVar3[3] + 4 + param_3 * 0x28));
    uVar9 = *(uint *)((int)this + 0x370) ^ (*(uint *)((int)this + 0x370) ^ puVar5[8]) & 1;
    *(uint *)((int)this + 0x370) = uVar9;
    *(uint *)((int)this + 0x370) = (puVar5[8] ^ uVar9) & 2 ^ uVar9;
    *(undefined4 *)((int)this + 0x374) = puVar5[9];
    local_1ac = (undefined1 *)FUN_009ce990(param_2,*(int *)((int)this + 0x348));
    piVar3 = *(int **)((int)this + 0x34c);
    *(undefined1 **)((int)this + 0x414) = local_1ac;
    iVar11 = *piVar3;
    puVar5 = (undefined4 *)
             (*(int *)(*(int *)(iVar11 + 0xcc) + 0x2c) + *(int *)((int)this + 0x348) * 0x2c);
    ppvVar19 = &local_160;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppvVar19 = (void *)*puVar5;
      puVar5 = puVar5 + 1;
      ppvVar19 = ppvVar19 + 1;
    }
    if ((local_15c == 1) &&
       ((*(byte *)(((uint)local_160 & 0xff) * 0x78 + 0x21 + *(int *)(iVar11 + 200)) & 0x10) != 0)) {
      if (local_1ac == (undefined1 *)0x0) {
        local_10c = '\0';
        puVar5 = &local_10b;
        for (iVar11 = 0x3f; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        *(undefined2 *)puVar5 = 0;
        *(undefined1 *)((int)puVar5 + 2) = 0;
        iVar11 = *piVar3;
        pcVar12 = (char *)(iVar11 + 0x80);
        local_1a8 = local_19c;
        local_19c[0] = '\0';
        local_1a4 = 0;
        local_1a0 = 0x14;
        pcVar4 = pcVar12;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        FUN_004015d0(&local_1a8,pcVar12,(int)pcVar4 - (iVar11 + 0x81));
        _sprintf(&local_10c,
                 "This costume %s has the prop option %s set to 0 even though the prop is requested!!"
                );
        *(undefined4 *)((int)this + 0x414) = 1;
        if (0x14 < local_1a0) {
                    /* WARNING: Subroutine does not return */
          _free(local_1a8);
        }
      }
      *(undefined1 *)((int)this + 0x41d) = 1;
    }
    local_134 = 0;
    FUN_009ce080((void *)**(undefined4 **)((int)this + 0x34c),*(int *)((int)this + 0x348),
                 (uint *)((int)this + 0x418),&local_134);
    puVar5 = operator_new(0x420);
    local_168 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      local_1a8 = local_19c;
      local_19c[0] = '\0';
      local_1a4 = 0;
      local_1a0 = 0x14;
      _strncpy(local_1a8,"button_prevoption",0x11);
      local_1a4 = 0x11;
      local_1a8[0x11] = '\0';
      local_180 = 0x14;
      local_188 = local_17c;
      local_17c[0] = '\0';
      local_184 = 0;
      _strncpy(local_188,"button_left.",0xc);
      local_184 = 0xc;
      local_188[0xc] = '\0';
      local_4 = 0xc;
      puStack_1e4 = (undefined4 *)0x67b998;
      puVar6 = FUN_009b5030(&local_160,&local_1a8);
      local_1ac = &stack0xfffffe30;
      local_4 = 0xd;
      local_1b0 = 7;
      puStack_1e4 = (undefined4 *)0x67b9db;
      puVar5 = FUN_0069fb10(puVar5,(int *)&local_188,puVar6,0x41c00000,0x41c00000,0,0,0x3f800000,
                            0x3f800000);
    }
    local_4 = 0x10;
    (**(code **)(*(int *)((int)this + 0x3d8) + 4))();
    *(undefined4 **)((int)this + 0x3ec) = puVar5;
    (*(code *)**(undefined4 **)((int)this + 0x3d8))();
    if (((local_1b0 & 4) != 0) && (local_1b0 = local_1b0 & 0xfffffffb, 10 < local_158)) {
                    /* WARNING: Subroutine does not return */
      _free(local_160);
    }
    if (((local_1b0 & 2) != 0) && (local_1b0 = local_1b0 & 0xfffffffd, 0x14 < local_180)) {
                    /* WARNING: Subroutine does not return */
      _free(local_188);
    }
    local_4 = 8;
    if (((local_1b0 & 1) != 0) && (local_1b0 = local_1b0 & 0xfffffffe, 0x14 < local_1a0)) {
                    /* WARNING: Subroutine does not return */
      _free(local_1a8);
    }
    (**(code **)(**(int **)((int)this + 0x3ec) + 0x18))();
    puStack_1e4 = (undefined4 *)0x67bab8;
    (**(code **)(**(int **)((int)this + 0x3ec) + 0x18))();
    puStack_1e4 = (undefined4 *)0x0;
    uStack_1ec = 1;
    uStack_1f0 = 0x67bac7;
    pvStack_1e8 = this;
    (**(code **)(**(int **)((int)this + 0x3ec) + 0x5c))();
    uStack_1f0 = 0x40000000;
    uStack_1f8 = 1;
    pvStack_1f4 = this;
    (**(code **)(**(int **)((int)this + 0x3ec) + 100))();
    FUN_0073e8b0(*(void **)((int)this + 0x3ec),1);
    FUN_0073f6e0(this,*(int **)((int)this + 0x3ec));
    iVar11 = FUN_009b4250();
    local_1a0 = iVar11;
    puStack_1e4 = operator_new(0x3fc);
    uStack_3c = 0x11;
    if (puStack_1e4 == (undefined4 *)0x0) {
      puStack_1e4 = (undefined4 *)0x0;
    }
    else {
      puStack_1e4 = FUN_00833290(puStack_1e4);
    }
    uStack_3c = 8;
    (**(code **)(*(int *)((int)this + 0x378) + 4))();
    *(undefined4 **)((int)this + 0x38c) = puStack_1e4;
    (*(code *)**(undefined4 **)((int)this + 0x378))();
    local_168 = &local_15c;
    local_15c = (uint)local_15c._2_2_ << 0x10;
    puStack_164 = (undefined4 *)0x0;
    local_160 = (void *)0xa;
    uVar9 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_168,(wchar_t *)&lpCaption_00d16918,uVar9);
    uStack_3c = 0x12;
    sVar7 = FUN_00ace02d(L"<table><tr><td align=left width= ");
    FUN_0040cae0(&local_168,L"<table><tr><td align=left width= ",sVar7);
    pvStack_208 = (void *)0x67bbdc;
    sVar7 = _swprintf(awStack_144,0xd18f7c,(wchar_t *)0x82);
    FUN_0040cae0(&local_168,awStack_144,sVar7);
    if (iVar11 == 9) {
      sVar7 = FUN_00ace02d(L"><t3><translate>");
      pwVar18 = L"><t3><translate>";
    }
    else {
      sVar7 = FUN_00ace02d(L"><t6><translate>");
      pwVar18 = L"><t6><translate>";
    }
    FUN_0040cae0(&local_168,pwVar18,sVar7);
    puVar5 = FUN_00568790(apvStack_198,(undefined4 *)((int)this + 0x350));
    FUN_0040cae0(&local_168,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < uStack_190) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_198[0]);
    }
    if (iVar11 == 9) {
      sVar7 = FUN_00ace02d(L"</translate></t3></td></tr></table>");
      pwVar18 = L"</translate></t3></td></tr></table>";
    }
    else {
      sVar7 = FUN_00ace02d(L"</translate></t6></td></tr></table>");
      pwVar18 = L"</translate></t6></td></tr></table>";
    }
    FUN_0040cae0(&local_168,pwVar18,sVar7);
    (**(code **)(**(int **)((int)this + 0x38c) + 0x54))();
    ppvVar19 = (void **)0x0;
    (**(code **)(**(int **)((int)this + 0x38c) + 0x84))();
    auStack_210[1] = 1;
    auStack_210[0] = 0x67bcd5;
    pvStack_208 = this;
    (**(code **)(**(int **)((int)this + 0x38c) + 0x5c))();
    auStack_210[0] = 0x40000000;
    (**(code **)(**(int **)((int)this + 0x38c) + 100))();
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0x3f800000;
    uVar23 = 0x3f300000;
    pvVar8 = operator_new(0x420);
    if (pvVar8 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      unaff_EBP = &local_1ac;
      local_1ac = (undefined1 *)((uint)local_1ac & 0xffff0000);
      local_1b0 = 10;
      uVar9 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&stack0xfffffe48,(wchar_t *)&lpCaption_00d16918,uVar9);
      pvStack_208 = (void *)((uint)pvStack_208 | 8);
      ppvVar19 = &pvStack_1f4;
      pvStack_1f4 = (void *)((uint)pvStack_1f4 & 0xffffff00);
      uStack_1f8 = 0x14;
      _strncpy((char *)ppvVar19,"listbutton",10);
      *(char *)((int)ppvVar19 + 10) = '\0';
      pvStack_208 = (void *)((uint)pvStack_208 | 0x10);
      uVar16 = 0x43020000;
      uStack_5c = 0x15;
      fVar13 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x14))();
      pcStack_23c = (char *)0x67bdf2;
      puVar5 = FUN_0069fb10(pvVar8,(int *)&stack0xfffffe00,(undefined4 *)&stack0xfffffe48,
                            (float)(fVar13 * (float10)1.5),uVar16,uVar20,uVar21,uVar22,uVar23);
    }
    uStack_5c = 0x17;
    (**(code **)(*(int *)((int)this + 0x390) + 4))();
    *(undefined4 **)((int)this + 0x3a4) = puVar5;
    (*(code *)**(undefined4 **)((int)this + 0x390))();
    if ((((uint)pvStack_208 & 0x10) != 0) &&
       (pvStack_208 = (void *)((uint)pvStack_208 & 0xffffffef), 0x14 < uStack_1f8)) {
                    /* WARNING: Subroutine does not return */
      _free(ppvVar19);
    }
    uStack_5c = 0x12;
    if ((((uint)pvStack_208 & 8) != 0) &&
       (pvStack_208 = (void *)((uint)pvStack_208 & 0xfffffff7), 10 < local_1b0)) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBP);
    }
    pcVar4 = "COSTUMEFIDDLER_NEXTSTYLE";
    puVar17 = &LAB_0067b500;
    (**(code **)(**(int **)((int)this + 0x3a4) + 0x18))();
    pcVar12 = "COSTUMEFIDDLER_NEXTSTYLE";
    puVar15 = &LAB_005f37f0;
    pcStack_23c = (char *)0x67beab;
    (**(code **)(**(int **)((int)this + 0x3a4) + 0x18))();
    pcStack_23c = (char *)0x431a0000;
    uStack_244 = 1;
    uStack_248 = 0x67bebe;
    puStack_240 = this;
    (**(code **)(**(int **)((int)this + 0x3a4) + 0x60))();
    uStack_248 = 0x40400000;
    uStack_250 = 1;
    puStack_254 = (uint *)0x67bed1;
    puStack_24c = this;
    (**(code **)(**(int **)((int)this + 0x3a4) + 100))();
    puStack_254 = (uint *)0x1;
    FUN_0073f6e0(this,*(int **)((int)this + 0x3a4));
    puStack_254 = (uint *)0x1;
    FUN_0073f6e0(this,*(int **)((int)this + 0x38c));
    puStack_254 = (uint *)0x67bef8;
    puStack_254 = (uint *)FUN_006795b0((int)this);
    *(char *)((int)this + 0x41e) = (char)puStack_254;
    (**(code **)(**(int **)((int)this + 0x3a4) + 0xc0))();
    pvVar8 = operator_new(0x420);
    if (pvVar8 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
      puStack_214 = this;
    }
    else {
      pcVar4 = (char *)auStack_210;
      auStack_210[0] = auStack_210[0] & 0xffffff00;
      puStack_214 = &DAT_00000014;
      _strncpy(pcVar4,"button_nextoption",0x11);
      *(char *)((int)pcVar4 + 0x11) = '\0';
      uStack_244 = uStack_244 | 0x20;
      pcStack_23c = &stack0xfffffdd0;
      puVar15 = (undefined1 *)0x14;
      _strncpy(pcStack_23c,"button_right.",0xd);
      pcStack_23c[0xd] = '\0';
      uStack_244 = uStack_244 | 0x40;
      uStack_98 = 0x1a;
      puVar5 = FUN_009b5030(&pvStack_1f4,(undefined4 *)&stack0xfffffde4);
      puStack_240 = &stack0xfffffd9c;
      uStack_244 = uStack_244 | 0x80;
      uStack_98 = 0x1b;
      puVar5 = FUN_0069fb10(pvVar8,(int *)&pcStack_23c,puVar5,0x41c00000,0x41c00000,0,0,0x3f800000,
                            0x3f800000);
    }
    uStack_98 = 0x1e;
    (**(code **)(*(int *)((int)this + 0x3c0) + 4))();
    *(undefined4 **)((int)this + 0x3d4) = puVar5;
    (*(code *)**(undefined4 **)((int)this + 0x3c0))();
    if (((char)uStack_244 < '\0') && (uStack_244 = uStack_244 & 0xffffff7f, 10 < uStack_1ec)) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_1f4);
    }
    if (((uStack_244 & 0x40) != 0) &&
       (uStack_244 = uStack_244 & 0xffffffbf, (undefined1 *)0x14 < puVar15)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_23c);
    }
    uStack_98 = 0x12;
    if (((uStack_244 & 0x20) != 0) &&
       (uStack_244 = uStack_244 & 0xffffffdf, &DAT_00000014 < puStack_214)) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar4);
    }
    (**(code **)(**(int **)((int)this + 0x3d4) + 0x18))();
    uVar9 = 0;
    pcVar4 = (char *)0x5;
    (**(code **)(**(int **)((int)this + 0x3d4) + 0x18))();
    (**(code **)(**(int **)((int)this + 0x3d4) + 0x5c))();
    (**(code **)(**(int **)((int)this + 0x3d4) + 100))();
    if ((puVar15 == (undefined1 *)0x7) || (puVar15 == (undefined1 *)0x1)) {
      uVar20 = 1;
    }
    else {
      uVar20 = 0;
    }
    FUN_0073e8b0(*(void **)((int)this + 0x3d4),uVar20);
    FUN_0073f6e0(this,*(int **)((int)this + 0x3d4));
    pvVar8 = operator_new(0x420);
    if (pvVar8 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
      pvStack_27c = this;
    }
    else {
      puStack_254 = &uStack_248;
      uStack_248 = uStack_248 & 0xffffff00;
      uStack_250 = 0;
      puStack_24c = (undefined1 *)0x20;
      puStack_254 = _malloc(0x20);
      _strncpy((char *)puStack_254,"button_defaultoption",0x14);
      uStack_250 = 0x14;
      *(char *)(puStack_254 + 5) = '\0';
      pcVar4 = &stack0xfffffd98;
      uVar9 = 0x14;
      _strncpy(pcVar4,"button_goback.",0xe);
      pcVar4[0xe] = '\0';
      uStack_d0 = 0x21;
      puVar5 = FUN_009b5030((undefined4 *)&stack0xfffffdd4,&puStack_254);
      pvStack_27c = (void *)((uint)this | 0x700);
      uStack_d0 = 0x22;
      puVar5 = FUN_0069fb10(pvVar8,(int *)&stack0xfffffd8c,puVar5,0x41c00000,0x41c00000,0,0,
                            0x3f800000,0x3f800000);
    }
    uStack_d0 = 0x25;
    (**(code **)(*(int *)((int)this + 0x3a8) + 4))();
    *(undefined4 **)((int)this + 0x3bc) = puVar5;
    (*(code *)**(undefined4 **)((int)this + 0x3a8))();
    if ((((uint)pvStack_27c & 0x400) != 0) &&
       (pvStack_27c = (void *)((uint)pvStack_27c & 0xfffffbff), (undefined1 *)0xa < puVar17)) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar12);
    }
    if ((((uint)pvStack_27c & 0x200) != 0) &&
       (pvStack_27c = (void *)((uint)pvStack_27c & 0xfffffdff), 0x14 < uVar9)) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar4);
    }
    uStack_d0 = 0x12;
    if ((((uint)pvStack_27c & 0x100) != 0) && (&DAT_00000014 < puStack_24c)) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_254);
    }
    (**(code **)(**(int **)((int)this + 0x3bc) + 0x5c))();
    (**(code **)(**(int **)((int)this + 0x3bc) + 100))(1,this);
    FUN_0073e8b0(*(void **)((int)this + 0x3bc),1);
    fVar14 = 0.0;
    (**(code **)(**(int **)((int)this + 0x3bc) + 0x18))
              (0,&LAB_0067a5e0,this,"COSTUMEFIDDLER_REVERTSTYLE");
    (**(code **)(**(int **)((int)this + 0x3bc) + 0x18))
              (5,&LAB_005f37f0,0,"COSTUMEFIDDLER_REVERTSTYLE");
    FUN_0073f6e0(this,*(int **)((int)this + 0x3bc));
    FUN_0073f500(this);
    FUN_007421c0(this);
    fVar13 = FUN_0073e640((int)this);
    (**(code **)(**(int **)((int)this + 0x3a4) + 0x7c))((float)fVar13 - 6.0);
    fVar13 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x14))();
    (**(code **)(**(int **)((int)this + 0x38c) + 100))
              (1,this,(float)(((float10)fVar14 - fVar13) * (float10)0.5));
    FUN_007421c0(this);
    puVar5 = operator_new(0x3c);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_0041f350(puVar5);
    }
    *(undefined4 **)((int)this + 0x408) = puVar5;
    uVar20 = *(undefined4 *)(*(int *)((int)this + 0x38c) + 0x9c);
    fVar14 = *(float *)(*(int *)((int)this + 0x38c) + 0xc0);
    puVar5[6] = 0;
    puVar5[4] = fVar14 + 5.0;
    puVar5[5] = uVar20;
    uVar20 = *(undefined4 *)(*(int *)((int)this + 0x38c) + 0xe4);
    fVar14 = *(float *)(*(int *)((int)this + 0x38c) + 0x108);
    iVar11 = *(int *)((int)this + 0x408);
    *(undefined4 *)(iVar11 + 0x24) = 0;
    *(float *)(iVar11 + 0x1c) = fVar14 - 5.0;
    *(undefined4 *)(iVar11 + 0x20) = uVar20;
    puStack_164 = operator_new(0x24);
    local_4._0_1_ = 0x26;
    if (puStack_164 == (undefined4 *)0x0) {
      uVar20 = 0;
    }
    else {
      uVar20 = FUN_009910f0(puStack_164);
    }
    *(undefined4 *)(*(int *)((int)this + 0x408) + 4) = uVar20;
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x408) + 4) + 0xc) = 6;
    puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x408) + 4) + 0x10);
    *puVar1 = *puVar1 & 0xbfffffff;
    *(undefined4 *)(*(int *)((int)this + 0x408) + 8) = 0xb4d6e3fa;
    local_4 = CONCAT31(local_4._1_3_,0x12);
    *(undefined1 *)((int)this + 0x41c) = 1;
    FUN_0043b4d0((undefined4 *)((int)this + 0x420),1);
    *(undefined4 *)((int)this + 0x420) = 10;
    FUN_00678100((int)this);
    FUN_00678bb0(this);
    if (10 < uStack_128) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_130);
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0067ca00 @ 0067ca00 ////

undefined4 * __thiscall FUN_0067ca00(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  uVar1 = *(uint *)((int)this + 0x20) ^ (*(uint *)((int)this + 0x20) ^ param_1[8]) & 1;
  *(uint *)((int)this + 0x20) = uVar1;
  *(uint *)((int)this + 0x20) = (param_1[8] ^ uVar1) & 2 ^ uVar1;
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return this;
}


//// FUNCTION FUN_0067ca60 @ 0067ca60 ////

undefined4 FUN_0067ca60(void *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  byte in_stack_00000024;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cc5be0;
  local_c = ExceptionList;
  local_4 = 0;
  if ((in_stack_00000024 & 2) == 0) {
    if (param_3 < 0x15) {
      return CONCAT31((int3)((uint)ExceptionList >> 8),1);
    }
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"appliance_realistic",0x13);
  local_28 = 0x13;
  local_2c[0x13] = '\0';
  local_4._0_1_ = 1;
  iVar3 = FUN_009601d0(&local_2c);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_24 < 0x15) {
    uVar1 = local_24;
    if ((iVar3 != 0) && (cVar2 = FUN_00960f30(iVar3), uVar1 = param_3, cVar2 == '\0')) {
      if (param_3 < 0x15) {
        ExceptionList = local_c;
        return param_3 & 0xffffff00;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    if (param_3 < 0x15) {
      ExceptionList = local_c;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_0067cc10 @ 0067cc10 ////

void __fastcall FUN_0067cc10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc5c5a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d3687c;
  param_1[0x14] = &PTR_FUN_00d36860;
  local_4 = 7;
  if ((undefined4 *)param_1[0xd1] != (undefined4 *)0x0) {
    FUN_009d2b50((undefined4 *)param_1[0xd1]);
    param_1[0xd1] = 0;
  }
  param_1[0xf7] = &PTR_FUN_00d195f8;
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
  param_1[0xf1] = &PTR_FUN_00d2d110;
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
  param_1[0xeb] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xed] = param_1[0xec];
  }
  if (param_1[0xec] != 0) {
    *(undefined4 *)(param_1[0xec] + 4) = param_1[0xed];
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xf0] = 0;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xed] = param_1[0xec];
  }
  if (param_1[0xec] != 0) {
    *(undefined4 *)(param_1[0xec] + 4) = param_1[0xed];
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xe5] = &PTR_FUN_00d2d110;
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
  param_1[0xdf] = &PTR_FUN_00d2d110;
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
  param_1[0xd9] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0xdb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdb] = param_1[0xda];
  }
  if (param_1[0xda] != 0) {
    *(undefined4 *)(param_1[0xda] + 4) = param_1[0xdb];
  }
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xde] = 0;
  if ((undefined4 *)param_1[0xdb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdb] = param_1[0xda];
  }
  if (param_1[0xda] != 0) {
    *(undefined4 *)(param_1[0xda] + 4) = param_1[0xdb];
  }
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xd3] = &PTR_FUN_00d2d110;
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
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0067cff0 @ 0067cff0 ////

void __fastcall FUN_0067cff0(int param_1)

{
  void *_Memory;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = *(int *)(param_1 + 0x10) + -1, *(int *)(param_1 + 0x10) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x10);
  }
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    _Memory = *(void **)(*(int *)(param_1 + 4) + -4 + iVar1 * 4);
    iVar1 = iVar1 + -1;
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if (*(void **)(param_1 + 4) == (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0067d060 @ 0067d060 ////

undefined4 * __thiscall FUN_0067d060(void *this,byte param_1)

{
  FUN_0067cc10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0067d080 @ 0067d080 ////

void __fastcall FUN_0067d080(int param_1)

{
  void *_Memory;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = *(int *)(param_1 + 0x10) + -1, *(int *)(param_1 + 0x10) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x10);
  }
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    _Memory = *(void **)(*(int *)(param_1 + 4) + -4 + iVar1 * 4);
    iVar1 = iVar1 + -1;
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if (*(void **)(param_1 + 4) == (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0067d090 @ 0067d090 ////

void FUN_0067d090(void)

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
  puStack_8 = &LAB_00cc5c78;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"deque<T> too long",0x11);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_0067d100 @ 0067d100 ////

void __thiscall FUN_0067d100(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *_Dst;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0xfffffff - uVar1 < param_1) {
    uVar1 = FUN_0067d090();
  }
  uVar4 = uVar1 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  if ((param_1 < uVar4) && (uVar1 <= 0xfffffff - uVar4)) {
    param_1 = uVar4;
  }
  uVar4 = *(uint *)((int)this + 0xc) >> 2;
  _Dst = operator_new((uVar1 + param_1) * 4);
  iVar6 = uVar4 * 4;
  pvVar3 = (void *)(iVar6 + *(int *)((int)this + 4));
  sVar2 = ((*(int *)((int)this + 8) * 4 - (int)pvVar3) + *(int *)((int)this + 4) >> 2) * 4;
  pvVar3 = _memmove(_Dst + uVar4,pvVar3,sVar2);
  pvVar3 = (void *)((int)pvVar3 + sVar2);
  if (param_1 < uVar4) {
    _memmove(pvVar3,*(void **)((int)this + 4),((int)(param_1 * 4) >> 2) << 2);
    pvVar3 = (void *)(*(int *)((int)this + 4) + param_1 * 4);
    sVar2 = ((iVar6 - (int)pvVar3) + *(int *)((int)this + 4) >> 2) * 4;
    pvVar3 = _memmove(_Dst,pvVar3,sVar2);
    puVar7 = (undefined4 *)((int)pvVar3 + sVar2);
    uVar4 = param_1;
  }
  else {
    sVar2 = (iVar6 >> 2) * 4;
    iVar6 = param_1 - uVar4;
    pvVar3 = _memmove(pvVar3,*(void **)((int)this + 4),sVar2);
    puVar5 = (undefined4 *)((int)pvVar3 + sVar2);
    puVar7 = _Dst;
    if (iVar6 != 0) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
  }
  if (uVar4 != 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  if (*(void **)((int)this + 4) == (void *)0x0) {
    *(undefined4 **)((int)this + 4) = _Dst;
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}


//// FUNCTION FUN_0067d260 @ 0067d260 ////

void __thiscall FUN_0067d260(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)((int)this + 0xc) & 3) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    FUN_0067d100(this,1);
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 8) << 2;
  }
  uVar4 = iVar3 - 1;
  uVar5 = uVar4 >> 2;
  if (*(int *)(*(int *)((int)this + 4) + uVar5 * 4) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(*(int *)((int)this + 4) + uVar5 * 4) = pvVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(*(int *)((int)this + 4) + uVar5 * 4) + (uVar4 & 3) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(uint *)((int)this + 0xc) = uVar4;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}


//// FUNCTION FUN_0067d2e0 @ 0067d2e0 ////

void __fastcall FUN_0067d2e0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  int ****this;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  float10 fVar13;
  void *in_stack_ffffff04;
  undefined4 in_stack_ffffff08;
  uint in_stack_ffffff0c;
  int *local_c0;
  char local_b9;
  int local_b8;
  undefined **ppuStack_b4;
  int *local_b0;
  int *piStack_ac;
  undefined ***pppuStack_a8;
  int *piStack_a0;
  char *local_9c;
  int iStack_98;
  void *local_94;
  undefined **ppuStack_90;
  uint local_8c;
  uint *puStack_88;
  undefined ***pppuStack_84;
  int iStack_80;
  int *piStack_7c;
  undefined ****ppppuStack_78;
  int iStack_74;
  int *local_70;
  void *pvStack_6c;
  undefined4 *local_68;
  void *local_64 [2];
  uint local_5c;
  undefined1 local_40 [4];
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc5d1f;
  local_c = ExceptionList;
  if ((param_1[0xd1] == 0) || (*(int *)(*(int *)(param_1[0xd1] + 0xc) + 0xcc) == 0)) {
    return;
  }
  ExceptionList = &local_c;
  local_9c = operator_new(0x10);
  local_4 = 0;
  if (local_9c == (undefined1 *)0x0) {
    local_b0 = (int *)0x0;
  }
  else {
    local_b0 = FUN_009d2620(local_9c,param_1[0xd1]);
  }
  iVar2 = local_b0[2];
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_4._1_3_ = 0;
  local_c0 = (int *)0x0;
  if (0 < iVar2) {
    do {
      piVar8 = local_c0;
      local_4._0_1_ = 1;
      FUN_0067ca00(&local_94,(undefined4 *)(local_b0[3] + (int)local_c0 * 0x28));
      local_4._0_1_ = 2;
      if (local_70 == (int *)0x1) {
        local_9c = &stack0xffffff04;
        FUN_0067ca00(&stack0xffffff04,&local_94);
        uVar4 = FUN_0067ca60(in_stack_ffffff04,in_stack_ffffff08,in_stack_ffffff0c);
        if ((char)uVar4 != '\0') {
          FUN_0067d260(local_40,&local_c0);
        }
      }
      local_4._0_1_ = 1;
      if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
        _free(local_94);
      }
      local_c0 = (int *)((int)piVar8 + 1);
    } while ((int)local_c0 < iVar2);
  }
  local_4._0_1_ = 1;
  local_9c = operator_new(0x28);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  pcVar10 = (char *)(*(int *)(param_1[0xd1] + 0xc) + 0x80);
  local_4 = CONCAT31(local_4._1_3_,3);
  pcVar5 = pcVar10;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(&local_2c,pcVar10,(int)pcVar5 - (*(int *)(param_1[0xd1] + 0xc) + 0x81));
  uVar6 = FUN_00448220(&local_2c,&DAT_00d1a3f0,0,1);
  puVar7 = FUN_00430770(&local_2c,local_64,0,uVar6);
  uVar6 = puVar7[1];
  pcVar5 = (char *)*puVar7;
  if (local_24 <= uVar6) {
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_24 = uVar6 + 0x20 & 0xffffffe0;
    local_2c = _malloc(local_24);
  }
  _strncpy(local_2c,pcVar5,uVar6);
  local_2c[uVar6] = '\0';
  local_28 = uVar6;
  if (local_5c < 0x15) {
    FUN_004073f0(&local_2c,".cos",4);
    pcVar5 = local_2c;
    pcVar10 = local_9c;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *pcVar10 = cVar1;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    puVar7 = FUN_009cfaa0(local_9c);
    param_1[0xd2] = local_30;
    local_68 = puVar7;
    local_b9 = FUN_00541f60(0);
    local_b8 = 0;
    if (0 < local_30) {
      do {
        iVar2 = local_b8;
        if (local_b9 == '\0') {
          local_c0 = operator_new(0x414);
          local_4._0_1_ = 4;
          if (local_c0 == (int *)0x0) {
            this = (int ****)0x0;
          }
          else {
            uVar11 = local_34 + iVar2;
            uVar6 = uVar11 >> 2;
            iVar2 = uVar6 * -4;
            if (local_38 <= uVar6) {
              uVar6 = uVar6 - local_38;
            }
            this = FUN_006771c0(local_c0,(int ***)param_1[0xd1],puVar7,
                                *(int ****)(*(int *)(local_3c + uVar6 * 4) + (uVar11 + iVar2) * 4));
          }
          uVar6 = 0;
          local_4 = CONCAT31(local_4._1_3_,3);
          (*(code *)(*this)[0x1e])();
          (*(code *)(*this)[0x17])();
          (*(code *)(*this)[0x19])();
          puVar7 = operator_new(0x344);
          local_20[0] = '\x05';
          if (puVar7 == (undefined4 *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = FUN_007432f0(puVar7);
          }
          local_20[0] = '\x03';
          puStack_88 = operator_new(0x50);
          local_20[0] = '\x06';
          if (puStack_88 != (undefined4 *)0x0) {
            FUN_005e4870(puStack_88);
          }
          local_20[0] = '\x03';
          (**(code **)(*piVar8 + 0xa0))();
          uVar6 = uVar6 & 0x80000001;
          bVar12 = uVar6 == 0;
          if ((int)uVar6 < 0) {
            bVar12 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar12) {
            piVar9 = (int *)(**(code **)(*piVar8 + 0xa4))();
            (**(code **)(*piVar9 + 0xc))();
            FUN_00675e30(this,0xb4bfcee2);
          }
          else {
            piVar9 = (int *)(**(code **)(*piVar8 + 0xa4))();
            local_b8 = -0x291c06;
            (**(code **)(*piVar9 + 0xc))();
          }
          piStack_7c = param_1 + 6;
          puStack_88 = (uint *)0x1;
          ppppuStack_78 = &pppuStack_84;
          pppuStack_84 = (undefined ***)&PTR_FUN_00d18c2c;
          iStack_80 = *piStack_7c;
          *(int **)(*piStack_7c + 4) = &iStack_80;
          *piStack_7c = (int)&iStack_80;
          pvStack_6c = (void *)0x40c00000;
          local_68 = (undefined4 *)0x40c00000;
          piVar8[0x28] = 1;
          local_28._0_1_ = 7;
          local_70 = param_1;
          (**(code **)(piVar8[0x29] + 4))();
          piVar8[0x2e] = (int)local_70;
          (**(code **)piVar8[0x29])();
          piVar8[0x2f] = (int)pvStack_6c;
          piVar8[0x30] = (int)local_68;
          local_28 = CONCAT31(local_28._1_3_,3);
          pppuStack_84 = (undefined ***)&PTR_FUN_00d18c2c;
          if (piStack_7c != (int *)0x0) {
            *piStack_7c = iStack_80;
          }
          if (iStack_80 != 0) {
            *(int **)(iStack_80 + 4) = piStack_7c;
          }
          local_70 = (int *)0x0;
          iStack_80 = 0;
          piStack_7c = (int *)0x0;
          (**(code **)(*piVar8 + 100))(1,param_1);
          (**(code **)(*param_1 + 0xc))(piVar8,1);
          FUN_00675fc0(this,piVar8);
        }
        else {
          pvStack_6c = operator_new(0x440);
          local_4._0_1_ = 8;
          if (pvStack_6c == (void *)0x0) {
            this = (int ****)0x0;
          }
          else {
            uVar11 = local_34 + iVar2;
            uVar6 = uVar11 >> 2;
            iVar2 = uVar6 * -4;
            if (local_38 <= uVar6) {
              uVar6 = uVar6 - local_38;
            }
            this = (int ****)
                   WCostumeFiddler_Constructor
                             (pvStack_6c,param_1[0xd1],puVar7,
                              *(int *)(*(int *)(local_3c + uVar6 * 4) + (uVar11 + iVar2) * 4));
          }
          uVar6 = 0;
          local_4 = CONCAT31(local_4._1_3_,3);
          (*(code *)(*this)[0x1e])();
          (*(code *)(*this)[0x17])();
          (*(code *)(*this)[0x19])();
          puStack_88 = operator_new(0x344);
          local_20[0] = '\t';
          if (puStack_88 == (undefined4 *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = FUN_007432f0(puStack_88);
          }
          local_20[0] = '\x03';
          puStack_88 = operator_new(0x50);
          local_20[0] = '\n';
          if (puStack_88 != (uint *)0x0) {
            FUN_005e4870(puStack_88);
          }
          local_20[0] = '\x03';
          (**(code **)(*piVar8 + 0xa0))();
          uVar6 = uVar6 & 0x80000001;
          bVar12 = uVar6 == 0;
          if ((int)uVar6 < 0) {
            bVar12 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar12) {
            piVar9 = (int *)(**(code **)(*piVar8 + 0xa4))();
            (**(code **)(*piVar9 + 0xc))();
            FUN_00677e70(this,0xb4bfcee2);
          }
          else {
            piVar9 = (int *)(**(code **)(*piVar8 + 0xa4))();
            (**(code **)(*piVar9 + 0xc))();
          }
          piStack_ac = param_1 + 6;
          local_b8 = 1;
          pppuStack_a8 = &ppuStack_b4;
          ppuStack_b4 = &PTR_FUN_00d18c2c;
          local_b0 = (int *)*piStack_ac;
          *(int ***)(*piStack_ac + 4) = &local_b0;
          *piStack_ac = (int)&local_b0;
          local_9c = (char *)0x40c00000;
          iStack_98 = 0x40c00000;
          piVar8[0x28] = 1;
          local_28._0_1_ = 0xb;
          piStack_a0 = param_1;
          (**(code **)(piVar8[0x29] + 4))();
          piVar8[0x2e] = (int)piStack_a0;
          (**(code **)piVar8[0x29])();
          piVar8[0x2f] = (int)local_9c;
          piVar8[0x30] = iStack_98;
          local_28 = CONCAT31(local_28._1_3_,3);
          ppuStack_b4 = &PTR_FUN_00d18c2c;
          if (piStack_ac != (int *)0x0) {
            *piStack_ac = (int)local_b0;
          }
          if (local_b0 != (int *)0x0) {
            local_b0[1] = (int)piStack_ac;
          }
          piStack_a0 = (int *)0x0;
          local_b0 = (int *)0x0;
          piStack_ac = (int *)0x0;
          (**(code **)(*piVar8 + 100))(1,param_1);
          (**(code **)(*param_1 + 0xc))(piVar8,1);
          FUN_006781b0(this,piVar8);
        }
        (**(code **)(*param_1 + 0xc))(this,1);
        (**(code **)(*param_1 + 0x50))(1);
        (*(code *)(*this)[5])();
        iVar2 = *piVar8;
        fVar13 = (float10)(*(code *)(*this)[4])();
        (**(code **)(iVar2 + 0x78))((float)(fVar13 + (float10)50.0));
        iVar2 = *piVar8;
        fVar13 = (float10)(*(code *)(*this)[5])();
        (**(code **)(iVar2 + 0x7c))((float)fVar13);
        puVar7 = local_68;
        piVar8 = local_c0;
        local_b8 = local_b8 + 1;
      } while (local_b8 < local_30);
      puStack_88 = (uint *)(param_1 + 6);
      local_94 = (void *)0x1;
      pppuStack_84 = &ppuStack_90;
      ppuStack_90 = &PTR_FUN_00d18c2c;
      local_8c = *puStack_88;
      *(uint **)(*puStack_88 + 4) = &local_8c;
      *puStack_88 = (uint)&local_8c;
      ppppuStack_78 = (undefined ****)0x41000000;
      iStack_74 = 0x41000000;
      piVar9 = local_c0 + 0x29;
      local_c0[0x28] = 1;
      local_4._0_1_ = 0xc;
      piStack_7c = param_1;
      (**(code **)(*piVar9 + 4))();
      puVar3 = (undefined4 *)*piVar9;
      piVar8[0x2e] = (int)piStack_7c;
      (*(code *)*puVar3)();
      piVar8[0x2f] = (int)ppppuStack_78;
      piVar8[0x30] = iStack_74;
      local_4 = CONCAT31(local_4._1_3_,3);
      if (puStack_88 != (uint *)0x0) {
        *puStack_88 = local_8c;
      }
      if (local_8c != 0) {
        *(uint **)(local_8c + 4) = puStack_88;
      }
      iVar2 = *piVar8;
      (**(code **)(iVar2 + 0x10))();
      (**(code **)(iVar2 + 0x78))();
    }
    if (puVar7 != (undefined4 *)0x0) {
      FUN_009cfb00(puVar7);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_64[0]);
}


//// FUNCTION FUN_0067dc80 @ 0067dc80 ////

int **** __thiscall FUN_0067dc80(void *this,int ***param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  float10 fVar7;
  void **ppvStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  void *pvStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  void *pvStack_a4;
  char acStack_a0 [4];
  void *pvStack_9c;
  void *pvStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  void *pvStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *pvStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc5e85;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  piVar1 = (int *)((int)this + 0x34c);
  *(undefined ***)this = &PTR_FUN_00d3687c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d36860;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(int **)((int)this + 0x358) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x360) = 0;
  piVar2 = (int *)((int)this + 0x364);
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(int **)((int)this + 0x370) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 **)((int)this + 0x388) = (undefined4 *)((int)this + 0x37c);
  *(undefined4 *)((int)this + 0x37c) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 **)((int)this + 0x3a0) = (undefined4 *)((int)this + 0x394);
  *(undefined4 *)((int)this + 0x394) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 **)((int)this + 0x3b8) = (undefined4 *)((int)this + 0x3ac);
  *(undefined4 *)((int)this + 0x3ac) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 **)((int)this + 0x3d0) = (undefined4 *)((int)this + 0x3c4);
  *(undefined4 *)((int)this + 0x3c4) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 **)((int)this + 1000) = (undefined4 *)((int)this + 0x3dc);
  *(undefined4 *)((int)this + 0x3dc) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  local_4._0_1_ = 7;
  local_4._1_3_ = 0;
  *(int ****)((int)this + 0x344) = param_1;
  if (param_1 != (int ***)0x0) {
    param_1[1] = (int **)((int)param_1[1] + 1);
  }
  *(undefined4 *)((int)this + 0x348) = 0;
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    param_1 = (int ***)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/cos_bub1.dds",0xf);
    local_28 = 0xf;
    local_2c[0xf] = '\0';
    local_4 = CONCAT31(local_4._1_3_,9);
    uStack_60 = 0x67de15;
    param_1 = (int ***)FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 10;
  (**(code **)(*piVar1 + 4))();
  *(int ****)((int)this + 0x360) = param_1;
  (**(code **)*piVar1)();
  local_4 = 7;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    param_1 = (int ***)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/cos_bub2.dds",0xf);
    local_28 = 0xf;
    local_2c[0xf] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xc);
    uStack_60 = 0x67deeb;
    param_1 = (int ***)FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xd;
  (**(code **)(*piVar2 + 4))();
  *(int ****)((int)this + 0x378) = param_1;
  (**(code **)*piVar2)();
  local_4 = 7;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    param_1 = (int ***)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/cos_bub3.dds",0xf);
    local_28 = 0xf;
    local_2c[0xf] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xf);
    uStack_60 = 0x67dfc3;
    param_1 = (int ***)FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0x10;
  (**(code **)(*(int *)((int)this + 0x37c) + 4))();
  *(int ****)((int)this + 0x390) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x37c))();
  local_4 = 7;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    param_1 = (int ***)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/cos_bub1line.dds",0x13);
    local_28 = 0x13;
    local_2c[0x13] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x12);
    uStack_60 = 0x67e09f;
    param_1 = (int ***)FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0x13;
  (**(code **)(*(int *)((int)this + 0x394) + 4))();
  *(int ****)((int)this + 0x3a8) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x394))();
  local_4 = 7;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    param_1 = (int ***)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/cos_bub2line.dds",0x13);
    local_28 = 0x13;
    local_2c[0x13] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x15);
    uStack_60 = 0x67e17b;
    param_1 = (int ***)FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0x16;
  (**(code **)(*(int *)((int)this + 0x3ac) + 4))();
  *(int ****)((int)this + 0x3c0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x3ac))();
  local_4 = 7;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/cos_bub3line.dds",0x13);
    local_28 = 0x13;
    local_2c[0x13] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x18);
    uStack_60 = 0x67e257;
    puVar5 = FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0x19;
  (**(code **)(*(int *)((int)this + 0x3c4) + 4))();
  *(undefined4 **)((int)this + 0x3d8) = puVar5;
  (*(code *)**(undefined4 **)((int)this + 0x3c4))();
  local_4 = 7;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  (**(code **)(**(int **)((int)this + 0x360) + 100))();
  uStack_60 = 1;
  uStack_64 = 0x67e2c1;
  (**(code **)(**(int **)((int)this + 0x360) + 0x5c))();
  uStack_68 = *(undefined4 *)((int)this + 0x360);
  uStack_64 = 0;
  uStack_6c = 1;
  uStack_70 = 0x67e2d6;
  (**(code **)(**(int **)((int)this + 0x3a8) + 100))();
  uStack_74 = *(undefined4 *)((int)this + 0x360);
  uStack_70 = 0;
  uStack_78 = 1;
  uStack_7c = 0x67e2eb;
  (**(code **)(**(int **)((int)this + 0x3a8) + 0x5c))();
  uStack_7c = 0;
  uStack_84 = 2;
  uStack_88 = 0x67e2fa;
  pvStack_80 = this;
  (**(code **)(**(int **)((int)this + 0x390) + 0x68))();
  uStack_88 = 0;
  uStack_90 = 1;
  uStack_94 = 0x67e309;
  pvStack_8c = this;
  (**(code **)(**(int **)((int)this + 0x390) + 0x5c))();
  uStack_94 = 0;
  pvStack_9c = (void *)0x2;
  acStack_a0[0] = '\x18';
  acStack_a0[1] = -0x1d;
  acStack_a0[2] = 'g';
  acStack_a0[3] = '\0';
  pvStack_98 = this;
  (**(code **)(**(int **)((int)this + 0x3d8) + 0x68))();
  acStack_a0[0] = '\0';
  acStack_a0[1] = '\0';
  acStack_a0[2] = '\0';
  acStack_a0[3] = '\0';
  uStack_a8 = 1;
  fStack_ac = 9.540543e-39;
  pvStack_a4 = this;
  (**(code **)(**(int **)((int)this + 0x3d8) + 0x5c))();
  iVar3 = **(int **)((int)this + 0x378);
  fStack_ac = 9.54057e-39;
  fVar7 = (float10)(**(code **)(**(int **)((int)this + 0x360) + 0x14))();
  fStack_ac = (float)fVar7;
  uStack_b4 = 1;
  uStack_b8 = 0x67e346;
  pvStack_b0 = this;
  (**(code **)(iVar3 + 100))();
  uStack_b8 = 0;
  ppvStack_bc = this;
  (**(code **)(**(int **)((int)this + 0x378) + 0x5c))(1);
  iVar3 = **(int **)((int)this + 0x3c0);
  fVar7 = (float10)(**(code **)(**(int **)((int)this + 0x360) + 0x14))();
  (**(code **)(iVar3 + 100))(1,this,(float)fVar7);
  (**(code **)(**(int **)((int)this + 0x3c0) + 0x5c))(1,this,0);
  FUN_0073f6e0(this,*(int **)((int)this + 0x360));
  FUN_0073f6e0(this,*(int **)((int)this + 0x378));
  FUN_0073f6e0(this,*(int **)((int)this + 0x390));
  FUN_0067d2e0(this);
  FUN_0073f6e0(this,*(int **)((int)this + 0x3a8));
  FUN_0073f6e0(this,*(int **)((int)this + 0x3c0));
  FUN_0073f6e0(this,*(int **)((int)this + 0x3d8));
  if (0 < *(int *)((int)this + 0x348)) {
    ppvStack_bc = &pvStack_b0;
    pvStack_b0 = (void *)((uint)pvStack_b0 & 0xffff0000);
    uStack_b8 = 0;
    uStack_b4 = 10;
    uVar6 = FUN_00ace02d(L"<s1><nobr><translate>COSTUMEFIDDLER_CLOTHING</translate></nobr></s1>");
    FUN_004036d0(&ppvStack_bc,
                 L"<s1><nobr><translate>COSTUMEFIDDLER_CLOTHING</translate></nobr></s1>",uVar6);
    uStack_94._0_1_ = 0x1a;
    puVar5 = operator_new(0x3fc);
    uStack_94._0_1_ = 0x1b;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_00833290(puVar5);
    }
    uStack_94 = CONCAT31(uStack_94._1_3_,0x1a);
    (**(code **)(*(int *)((int)this + 0x3dc) + 4))();
    *(undefined4 **)((int)this + 0x3f0) = puVar5;
    (*(code *)**(undefined4 **)((int)this + 0x3dc))();
    (**(code **)(**(int **)((int)this + 0x3f0) + 0x54))(&ppvStack_bc);
    (**(code **)(**(int **)((int)this + 0x3f0) + 0x84))(0);
    (**(code **)(**(int **)((int)this + 0x3f0) + 100))(1,this,0);
    acStack_a0[0] = -1;
    acStack_a0[1] = -1;
    acStack_a0[2] = -1;
    acStack_a0[3] = -1;
    FUN_00830550(*(void **)((int)this + 0x3f0),9,acStack_a0);
    (**(code **)(**(int **)((int)this + 0x3f0) + 0x5c))(1,this,0);
    FUN_0073f6e0(this,*(int **)((int)this + 0x3f0));
    if (10 < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      _free(ppvStack_bc);
    }
  }
  ExceptionList = pvStack_9c;
  return this;
}


//// FUNCTION FUN_0067e780 @ 0067e780 ////

void __fastcall FUN_0067e780(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc5efa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d36a8c;
  param_1[0x14] = &PTR_FUN_00d36a74;
  local_4 = 7;
  if ((undefined4 *)param_1[0xd1] != (undefined4 *)0x0) {
    FUN_009d2b50((undefined4 *)param_1[0xd1]);
    param_1[0xd1] = 0;
  }
  param_1[0xf7] = &PTR_FUN_00d195f8;
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
  param_1[0xf1] = &PTR_FUN_00d2d110;
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
  param_1[0xeb] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xed] = param_1[0xec];
  }
  if (param_1[0xec] != 0) {
    *(undefined4 *)(param_1[0xec] + 4) = param_1[0xed];
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xf0] = 0;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xed] = param_1[0xec];
  }
  if (param_1[0xec] != 0) {
    *(undefined4 *)(param_1[0xec] + 4) = param_1[0xed];
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xe5] = &PTR_FUN_00d2d110;
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
  param_1[0xdf] = &PTR_FUN_00d2d110;
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
  param_1[0xd9] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0xdb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdb] = param_1[0xda];
  }
  if (param_1[0xda] != 0) {
    *(undefined4 *)(param_1[0xda] + 4) = param_1[0xdb];
  }
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xde] = 0;
  if ((undefined4 *)param_1[0xdb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdb] = param_1[0xda];
  }
  if (param_1[0xda] != 0) {
    *(undefined4 *)(param_1[0xda] + 4) = param_1[0xdb];
  }
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xd3] = &PTR_FUN_00d2d110;
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
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0067eb00 @ 0067eb00 ////

undefined4 * __thiscall FUN_0067eb00(void *this,byte param_1)

{
  FUN_0067e780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0067eb20 @ 0067eb20 ////

void __fastcall FUN_0067eb20(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  bool bVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  int ****this;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  float unaff_ESI;
  uint uVar12;
  float10 fVar13;
  float fVar14;
  undefined4 local_c4;
  int *local_c0;
  undefined3 uStack_bc;
  char local_b9;
  undefined **local_b8;
  int iStack_b4;
  int *local_b0;
  undefined ***pppuStack_ac;
  int *piStack_a4;
  int iStack_a0;
  int iStack_9c;
  void *local_98;
  undefined **ppuStack_94;
  uint local_90;
  uint *puStack_8c;
  undefined ***pppuStack_88;
  undefined **ppuStack_84;
  int *piStack_80;
  int *piStack_7c;
  undefined ***pppuStack_78;
  int local_74;
  int *local_70;
  void *pvStack_6c;
  undefined4 *local_68;
  void *local_64 [2];
  uint local_5c;
  undefined1 local_40 [4];
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc5f9c;
  local_c = ExceptionList;
  if ((param_1[0xd1] == 0) || (*(int *)(*(int *)(param_1[0xd1] + 0xc) + 0xcc) == 0)) {
    return;
  }
  ExceptionList = &local_c;
  local_70 = operator_new(0x10);
  local_4 = 0;
  if (local_70 == (void *)0x0) {
    local_b0 = (int *)0x0;
  }
  else {
    local_b0 = FUN_009d2620(local_70,param_1[0xd1]);
  }
  iVar2 = local_b0[2];
  local_c4 = 0x42000000;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_4._1_3_ = 0;
  local_c0 = (int *)0x0;
  if (0 < iVar2) {
    do {
      piVar11 = local_c0;
      local_4._0_1_ = 1;
      FUN_0067ca00(&local_98,(undefined4 *)(local_b0[3] + (int)local_c0 * 0x28));
      local_4._0_1_ = 2;
      if (local_74 == 0) {
        FUN_0067d260(local_40,&local_c0);
      }
      local_4._0_1_ = 1;
      if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
        _free(local_98);
      }
      local_c0 = (int *)((int)piVar11 + 1);
    } while ((int)local_c0 < iVar2);
  }
  local_4._0_1_ = 1;
  local_70 = operator_new(0x28);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  pcVar10 = (char *)(*(int *)(param_1[0xd1] + 0xc) + 0x80);
  local_4 = CONCAT31(local_4._1_3_,3);
  pcVar6 = pcVar10;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(&local_2c,pcVar10,(int)pcVar6 - (*(int *)(param_1[0xd1] + 0xc) + 0x81));
  uVar7 = FUN_00448220(&local_2c,&DAT_00d1a3f0,0,1);
  puVar8 = FUN_00430770(&local_2c,local_64,0,uVar7);
  uVar7 = puVar8[1];
  pcVar6 = (char *)*puVar8;
  if (local_24 <= uVar7) {
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_24 = uVar7 + 0x20 & 0xffffffe0;
    local_2c = _malloc(local_24);
  }
  _strncpy(local_2c,pcVar6,uVar7);
  local_2c[uVar7] = '\0';
  local_28 = uVar7;
  if (local_5c < 0x15) {
    FUN_004073f0(&local_2c,".cos",4);
    pcVar6 = local_2c;
    piVar11 = local_70;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)piVar11 = cVar1;
      piVar11 = (int *)((int)piVar11 + 1);
    } while (cVar1 != '\0');
    puVar8 = FUN_009cfaa0((char *)local_70);
    param_1[0xd2] = local_30;
    local_68 = puVar8;
    bVar5 = FUN_00541f60(0);
    local_b8 = (undefined **)0x0;
    local_b9 = bVar5;
    if (0 < local_30) {
      do {
        ppuVar4 = local_b8;
        if (local_b9 == '\0') {
          local_c0 = operator_new(0x414);
          local_4._0_1_ = 4;
          if (local_c0 == (int *)0x0) {
            this = (int ****)0x0;
          }
          else {
            uVar12 = local_34 + (int)ppuVar4;
            uVar7 = uVar12 >> 2;
            iVar2 = uVar7 * -4;
            if (local_38 <= uVar7) {
              uVar7 = uVar7 - local_38;
            }
            this = FUN_006771c0(local_c0,(int ***)param_1[0xd1],puVar8,
                                *(int ****)(*(int *)(local_3c + uVar7 * 4) + (uVar12 + iVar2) * 4));
          }
          uVar7 = 0;
          local_4 = CONCAT31(local_4._1_3_,3);
          (*(code *)(*this)[0x1e])();
          (*(code *)(*this)[0x17])(1,param_1,0x41e00000);
          fVar14 = unaff_ESI;
          (*(code *)(*this)[0x19])(1,param_1,unaff_ESI);
          puVar8 = operator_new(0x344);
          local_20[0] = '\x05';
          if (puVar8 == (undefined4 *)0x0) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = FUN_007432f0(puVar8);
          }
          local_20[0] = '\x03';
          pppuStack_88 = operator_new(0x50);
          local_20[0] = '\x06';
          if (pppuStack_88 == (undefined ***)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = FUN_005e4870(pppuStack_88);
          }
          local_20[0] = '\x03';
          (**(code **)(*piVar11 + 0xa0))(puVar8);
          uVar7 = uVar7 & 0x80000001;
          bVar5 = uVar7 == 0;
          if ((int)uVar7 < 0) {
            bVar5 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar5) {
            piVar9 = (int *)(**(code **)(*piVar11 + 0xa4))();
            (**(code **)(*piVar9 + 0xc))(&stack0xffffff34);
            local_c0 = (int *)0xb4bfcee2;
            FUN_00675e30(this,0xb4bfcee2);
          }
          else {
            piVar9 = (int *)(**(code **)(*piVar11 + 0xa4))();
            (**(code **)(*piVar9 + 0xc))(&stack0xffffff38);
          }
          piStack_7c = param_1 + 6;
          pppuStack_88 = (undefined ***)0x1;
          pppuStack_78 = &ppuStack_84;
          ppuStack_84 = &PTR_FUN_00d18c2c;
          piStack_80 = (int *)*piStack_7c;
          *(int ***)(*piStack_7c + 4) = &piStack_80;
          *piStack_7c = (int)&piStack_80;
          pvStack_6c = (void *)0x40c00000;
          local_68 = (undefined4 *)0x40c00000;
          piVar11[0x28] = 1;
          local_28._0_1_ = 7;
          local_70 = param_1;
          (**(code **)(piVar11[0x29] + 4))();
          piVar11[0x2e] = (int)local_70;
          (**(code **)piVar11[0x29])();
          piVar11[0x2f] = (int)pvStack_6c;
          piVar11[0x30] = (int)local_68;
          local_28 = CONCAT31(local_28._1_3_,3);
          ppuStack_84 = &PTR_FUN_00d18c2c;
          if (piStack_7c != (int *)0x0) {
            *piStack_7c = (int)piStack_80;
          }
          if (piStack_80 != (int *)0x0) {
            piStack_80[1] = (int)piStack_7c;
          }
          local_70 = (int *)0x0;
          piStack_80 = (int *)0x0;
          piStack_7c = (int *)0x0;
          (**(code **)(*piVar11 + 100))(1,param_1,unaff_ESI + 4.0);
          (**(code **)(*param_1 + 0xc))(piVar11,1);
          FUN_00675fc0(this,piVar11);
        }
        else {
          pvStack_6c = operator_new(0x440);
          local_4._0_1_ = 8;
          if (pvStack_6c == (void *)0x0) {
            this = (int ****)0x0;
          }
          else {
            uVar12 = local_34 + (int)ppuVar4;
            uVar7 = uVar12 >> 2;
            iVar2 = uVar7 * -4;
            if (local_38 <= uVar7) {
              uVar7 = uVar7 - local_38;
            }
            this = (int ****)
                   WCostumeFiddler_Constructor
                             (pvStack_6c,param_1[0xd1],puVar8,
                              *(int *)(*(int *)(local_3c + uVar7 * 4) + (uVar12 + iVar2) * 4));
          }
          uVar7 = 0;
          local_4 = CONCAT31(local_4._1_3_,3);
          (*(code *)(*this)[0x1e])();
          (*(code *)(*this)[0x17])(1,param_1,0x41e00000);
          fVar14 = unaff_ESI;
          (*(code *)(*this)[0x19])(1,param_1,unaff_ESI);
          pppuStack_88 = operator_new(0x344);
          local_20[0] = '\t';
          if (pppuStack_88 == (undefined ***)0x0) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = FUN_007432f0(pppuStack_88);
          }
          local_20[0] = '\x03';
          pppuStack_88 = operator_new(0x50);
          local_20[0] = '\n';
          if (pppuStack_88 == (undefined ***)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = FUN_005e4870(pppuStack_88);
          }
          local_20[0] = '\x03';
          (**(code **)(*piVar11 + 0xa0))(puVar8);
          uVar7 = uVar7 & 0x80000001;
          bVar5 = uVar7 == 0;
          if ((int)uVar7 < 0) {
            bVar5 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar5) {
            piVar9 = (int *)(**(code **)(*piVar11 + 0xa4))();
            local_c4 = 0xffbfcee2;
            (**(code **)(*piVar9 + 0xc))(&local_c4);
            local_c4 = 0xb4bfcee2;
            FUN_00677e70(this,0xb4bfcee2);
          }
          else {
            piVar9 = (int *)(**(code **)(*piVar11 + 0xa4))();
            fVar14 = -NAN;
            (**(code **)(*piVar9 + 0xc))(&stack0xffffff2c);
          }
          local_b0 = param_1 + 6;
          uStack_bc = 1;
          local_b9 = '\0';
          pppuStack_ac = &local_b8;
          local_b8 = &PTR_FUN_00d18c2c;
          iStack_b4 = *local_b0;
          *(int **)(*local_b0 + 4) = &iStack_b4;
          *local_b0 = (int)&iStack_b4;
          iStack_a0 = 0x40c00000;
          iStack_9c = 0x40c00000;
          piVar11[0x28] = 1;
          local_28._0_1_ = 0xb;
          piStack_a4 = param_1;
          (**(code **)(piVar11[0x29] + 4))();
          piVar11[0x2e] = (int)piStack_a4;
          (**(code **)piVar11[0x29])();
          piVar11[0x2f] = iStack_a0;
          piVar11[0x30] = iStack_9c;
          local_28 = CONCAT31(local_28._1_3_,3);
          local_b8 = &PTR_FUN_00d18c2c;
          if (local_b0 != (int *)0x0) {
            *local_b0 = iStack_b4;
          }
          if (iStack_b4 != 0) {
            *(int **)(iStack_b4 + 4) = local_b0;
          }
          piStack_a4 = (int *)0x0;
          iStack_b4 = 0;
          local_b0 = (int *)0x0;
          (**(code **)(*piVar11 + 100))(1,param_1,unaff_ESI + 4.0);
          (**(code **)(*param_1 + 0xc))(piVar11,1);
          FUN_006781b0(this,piVar11);
        }
        (**(code **)(*param_1 + 0xc))(this,1);
        (**(code **)(*param_1 + 0x50))(1);
        (*(code *)(*this)[5])();
        iVar2 = *piVar11;
        fVar13 = (float10)(*(code *)(*this)[4])();
        (**(code **)(iVar2 + 0x78))((float)(fVar13 + (float10)50.0));
        iVar2 = *piVar11;
        fVar13 = (float10)(*(code *)(*this)[5])();
        (**(code **)(iVar2 + 0x7c))((float)fVar13);
        puVar8 = local_68;
        piVar11 = local_c0;
        local_b8 = (undefined **)((int)local_b8 + 1);
        unaff_ESI = fVar14;
      } while ((int)local_b8 < local_30);
      puStack_8c = (uint *)(param_1 + 6);
      local_98 = (void *)0x1;
      pppuStack_88 = &ppuStack_94;
      ppuStack_94 = &PTR_FUN_00d18c2c;
      local_90 = *puStack_8c;
      *(uint **)(*puStack_8c + 4) = &local_90;
      *puStack_8c = (uint)&local_90;
      piStack_7c = (int *)0x41000000;
      pppuStack_78 = (undefined ***)0x41000000;
      piVar9 = local_c0 + 0x29;
      local_c0[0x28] = 1;
      local_4._0_1_ = 0xc;
      piStack_80 = param_1;
      (**(code **)(*piVar9 + 4))();
      puVar3 = (undefined4 *)*piVar9;
      piVar11[0x2e] = (int)piStack_80;
      (*(code *)*puVar3)();
      piVar11[0x2f] = (int)piStack_7c;
      piVar11[0x30] = (int)pppuStack_78;
      local_4 = CONCAT31(local_4._1_3_,3);
      if (puStack_8c != (uint *)0x0) {
        *puStack_8c = local_90;
      }
      if (local_90 != 0) {
        *(uint **)(local_90 + 4) = puStack_8c;
      }
      iVar2 = *piVar11;
      fVar13 = (float10)(**(code **)(iVar2 + 0x10))();
      (**(code **)(iVar2 + 0x78))((float)(fVar13 - (float10)1.0));
    }
    if (puVar8 != (undefined4 *)0x0) {
      FUN_009cfb00(puVar8);
    }
    piVar11 = local_b0;
    FUN_009d2b70(local_b0);
                    /* WARNING: Subroutine does not return */
    _free(piVar11);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_64[0]);
}


//// FUNCTION FUN_0067f490 @ 0067f490 ////

int **** __thiscall FUN_0067f490(void *this,int ***param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  float10 fVar7;
  void **ppvStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  void *pvStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char acStack_a0 [4];
  void *pvStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  void *pvStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *pvStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc6105;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  piVar1 = (int *)((int)this + 0x34c);
  *(undefined ***)this = &PTR_FUN_00d36a8c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d36a74;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(int **)((int)this + 0x358) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x360) = 0;
  piVar2 = (int *)((int)this + 0x364);
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(int **)((int)this + 0x370) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 **)((int)this + 0x388) = (undefined4 *)((int)this + 0x37c);
  *(undefined4 *)((int)this + 0x37c) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 **)((int)this + 0x3a0) = (undefined4 *)((int)this + 0x394);
  *(undefined4 *)((int)this + 0x394) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 **)((int)this + 0x3b8) = (undefined4 *)((int)this + 0x3ac);
  *(undefined4 *)((int)this + 0x3ac) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 **)((int)this + 0x3d0) = (undefined4 *)((int)this + 0x3c4);
  *(undefined4 *)((int)this + 0x3c4) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 **)((int)this + 1000) = (undefined4 *)((int)this + 0x3dc);
  *(undefined4 *)((int)this + 0x3dc) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  local_4._0_1_ = 7;
  local_4._1_3_ = 0;
  *(int ****)((int)this + 0x344) = param_1;
  if (param_1 != (int ***)0x0) {
    param_1[1] = (int **)((int)param_1[1] + 1);
  }
  *(undefined4 *)((int)this + 0x348) = 0;
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    param_1 = (int ***)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/cos_bub1.dds",0xf);
    local_28 = 0xf;
    local_2c[0xf] = '\0';
    local_4 = CONCAT31(local_4._1_3_,9);
    uStack_60 = 0x67f625;
    param_1 = (int ***)FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 10;
  (**(code **)(*piVar1 + 4))();
  *(int ****)((int)this + 0x360) = param_1;
  (**(code **)*piVar1)();
  local_4 = 7;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    param_1 = (int ***)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/cos_bub2.dds",0xf);
    local_28 = 0xf;
    local_2c[0xf] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xc);
    uStack_60 = 0x67f6fb;
    param_1 = (int ***)FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xd;
  (**(code **)(*piVar2 + 4))();
  *(int ****)((int)this + 0x378) = param_1;
  (**(code **)*piVar2)();
  local_4 = 7;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    param_1 = (int ***)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/cos_bub3.dds",0xf);
    local_28 = 0xf;
    local_2c[0xf] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xf);
    uStack_60 = 0x67f7d3;
    param_1 = (int ***)FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0x10;
  (**(code **)(*(int *)((int)this + 0x37c) + 4))();
  *(int ****)((int)this + 0x390) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x37c))();
  local_4 = 7;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    param_1 = (int ***)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/cos_bub1line.dds",0x13);
    local_28 = 0x13;
    local_2c[0x13] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x12);
    uStack_60 = 0x67f8af;
    param_1 = (int ***)FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0x13;
  (**(code **)(*(int *)((int)this + 0x394) + 4))();
  *(int ****)((int)this + 0x3a8) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x394))();
  local_4 = 7;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    param_1 = (int ***)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/cos_bub2line.dds",0x13);
    local_28 = 0x13;
    local_2c[0x13] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x15);
    uStack_60 = 0x67f98b;
    param_1 = (int ***)FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0x16;
  (**(code **)(*(int *)((int)this + 0x3ac) + 4))();
  *(int ****)((int)this + 0x3c0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x3ac))();
  local_4 = 7;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/cos_bub3line.dds",0x13);
    local_28 = 0x13;
    local_2c[0x13] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x18);
    uStack_60 = 0x67fa67;
    puVar5 = FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0x19;
  (**(code **)(*(int *)((int)this + 0x3c4) + 4))();
  *(undefined4 **)((int)this + 0x3d8) = puVar5;
  (*(code *)**(undefined4 **)((int)this + 0x3c4))();
  local_4 = 7;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  (**(code **)(**(int **)((int)this + 0x360) + 100))();
  uStack_60 = 1;
  uStack_64 = 0x67fad1;
  (**(code **)(**(int **)((int)this + 0x360) + 0x5c))();
  uStack_68 = *(undefined4 *)((int)this + 0x360);
  uStack_64 = 0;
  uStack_6c = 1;
  uStack_70 = 0x67fae6;
  (**(code **)(**(int **)((int)this + 0x3a8) + 100))();
  uStack_74 = *(undefined4 *)((int)this + 0x360);
  uStack_70 = 0;
  uStack_78 = 1;
  uStack_7c = 0x67fafb;
  (**(code **)(**(int **)((int)this + 0x3a8) + 0x5c))();
  uStack_7c = 0;
  uStack_84 = 2;
  uStack_88 = 0x67fb0a;
  pvStack_80 = this;
  (**(code **)(**(int **)((int)this + 0x390) + 0x68))();
  uStack_88 = 0;
  uStack_90 = 1;
  uStack_94 = 0x67fb19;
  pvStack_8c = this;
  (**(code **)(**(int **)((int)this + 0x390) + 0x5c))();
  uStack_98 = *(undefined4 *)((int)this + 0x390);
  uStack_94 = 0;
  pvStack_9c = (void *)0x1;
  acStack_a0[0] = '.';
  acStack_a0[1] = -5;
  acStack_a0[2] = 'g';
  acStack_a0[3] = '\0';
  (**(code **)(**(int **)((int)this + 0x3d8) + 100))();
  uStack_a4 = *(undefined4 *)((int)this + 0x390);
  acStack_a0[0] = '\0';
  acStack_a0[1] = '\0';
  acStack_a0[2] = '\0';
  acStack_a0[3] = '\0';
  uStack_a8 = 1;
  fStack_ac = 9.549192e-39;
  (**(code **)(**(int **)((int)this + 0x3d8) + 0x5c))();
  iVar3 = **(int **)((int)this + 0x378);
  fStack_ac = 9.549218e-39;
  fVar7 = (float10)(**(code **)(**(int **)((int)this + 0x360) + 0x14))();
  fStack_ac = (float)fVar7;
  uStack_b4 = 1;
  uStack_b8 = 0x67fb62;
  pvStack_b0 = this;
  (**(code **)(iVar3 + 100))();
  uStack_b8 = 0;
  ppvStack_bc = this;
  (**(code **)(**(int **)((int)this + 0x378) + 0x5c))(1);
  iVar3 = **(int **)((int)this + 0x3c0);
  fVar7 = (float10)(**(code **)(**(int **)((int)this + 0x360) + 0x14))();
  (**(code **)(iVar3 + 100))(1,this,(float)fVar7);
  (**(code **)(**(int **)((int)this + 0x3c0) + 0x5c))(1,this,0);
  FUN_0073f6e0(this,*(int **)((int)this + 0x360));
  FUN_0073f6e0(this,*(int **)((int)this + 0x378));
  FUN_0073f6e0(this,*(int **)((int)this + 0x390));
  FUN_0067eb20(this);
  FUN_0073f6e0(this,*(int **)((int)this + 0x3a8));
  FUN_0073f6e0(this,*(int **)((int)this + 0x3c0));
  FUN_0073f6e0(this,*(int **)((int)this + 0x3d8));
  if (0 < *(int *)((int)this + 0x348)) {
    ppvStack_bc = &pvStack_b0;
    pvStack_b0 = (void *)((uint)pvStack_b0 & 0xffff0000);
    uStack_b8 = 0;
    uStack_b4 = 10;
    uVar6 = FUN_00ace02d(L"<s1><nobr><translate>COSTUMEFIDDLER_MAKEUP</translate></nobr></s1>");
    FUN_004036d0(&ppvStack_bc,L"<s1><nobr><translate>COSTUMEFIDDLER_MAKEUP</translate></nobr></s1>",
                 uVar6);
    uStack_94._0_1_ = 0x1a;
    puVar5 = operator_new(0x3fc);
    uStack_94._0_1_ = 0x1b;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_00833290(puVar5);
    }
    uStack_94 = CONCAT31(uStack_94._1_3_,0x1a);
    (**(code **)(*(int *)((int)this + 0x3dc) + 4))();
    *(undefined4 **)((int)this + 0x3f0) = puVar5;
    (*(code *)**(undefined4 **)((int)this + 0x3dc))();
    (**(code **)(**(int **)((int)this + 0x3f0) + 0x54))(&ppvStack_bc);
    (**(code **)(**(int **)((int)this + 0x3f0) + 0x84))(0);
    (**(code **)(**(int **)((int)this + 0x3f0) + 100))(1,this,0);
    acStack_a0[0] = -1;
    acStack_a0[1] = -1;
    acStack_a0[2] = -1;
    acStack_a0[3] = -1;
    FUN_00830550(*(void **)((int)this + 0x3f0),9,acStack_a0);
    (**(code **)(**(int **)((int)this + 0x3f0) + 0x5c))(1,this,0);
    FUN_0073f6e0(this,*(int **)((int)this + 0x3f0));
    if (10 < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      _free(ppvStack_bc);
    }
  }
  ExceptionList = pvStack_9c;
  return this;
}


//// FUNCTION FUN_0067fd60 @ 0067fd60 ////

int __fastcall FUN_0067fd60(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_0067fdc0 @ 0067fdc0 ////

int * __thiscall FUN_0067fdc0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0067fef0 @ 0067fef0 ////

int * __thiscall FUN_0067fef0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0067ff20 @ 0067ff20 ////

undefined4 * __cdecl FUN_0067ff20(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0067ff60 @ 0067ff60 ////

void __fastcall FUN_0067ff60(int *param_1)

{
  float10 fVar1;
  float fVar2;
  
  if (param_1[0x10f] != 0) {
    fVar1 = (float10)(**(code **)(*param_1 + 0x10))();
    (**(code **)(*param_1 + 0x14))();
    fVar2 = (float)fVar1 * 0.8;
    (**(code **)(*(int *)param_1[0x10f] + 0x78))(fVar2);
    (**(code **)(*(int *)param_1[0x10f] + 0x7c))((float)fVar1 * 0.8);
    fVar2 = fVar2 * 0.1;
    (**(code **)(*(int *)param_1[0x10f] + 0x5c))(1,param_1,fVar2);
    (**(code **)(*(int *)param_1[0x10f] + 100))(1,param_1,fVar2 * 0.1);
  }
  return;
}


//// FUNCTION FUN_00680000 @ 00680000 ////

void __thiscall
FUN_00680000(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc611b;
  pvStack_c = ExceptionList;
  puVar2 = *(undefined4 **)((int)this + 0x43c);
  puVar3 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)();
    }
    (**(code **)(*(int *)((int)this + 0x428) + 4))();
    *(undefined4 *)((int)this + 0x43c) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x428))();
  }
  this_00 = operator_new(0x360);
  uStack_4 = 0;
  if (this_00 != (void *)0x0) {
    puVar3 = FUN_0069d820(this_00,param_1,param_2,param_3,param_4,param_5);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)((int)this + 0x428) + 4))();
  *(undefined4 **)((int)this + 0x43c) = puVar3;
  (*(code *)**(undefined4 **)((int)this + 0x428))();
  FUN_0067ff60(this);
  (**(code **)(*(int *)this + 0xc))();
  ExceptionList = this_00;
  return;
}


//// FUNCTION FUN_00680130 @ 00680130 ////

undefined4 __thiscall FUN_00680130(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                       &TM::WCostumeOptionButton::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    return 1;
  }
  puVar2 = (undefined4 *)
           FUN_00ace790(*(int **)(iVar1 + 0x118),0,&TM::WWindow::RTTI_Type_Descriptor,
                        &TM::WCostumeOptionList::RTTI_Type_Descriptor,0);
  uVar5 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = FUN_004319b0(puVar2[0xdb]);
    pvVar4 = *(void **)(iVar3 + 0xc0);
    FUN_009d1740(pvVar4,puVar2[0xdd],*(uint *)(iVar1 + 0x420));
    if ((0 < *(int *)(iVar1 + 0x424)) && (iVar3 = 0, 0 < *(int *)(iVar1 + 0x424))) {
      do {
        FUN_009d12f0(pvVar4,puVar2[0xdd],(void *)0x1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar1 + 0x424));
    }
    iVar3 = FUN_004345e0();
    pvVar4 = (void *)FUN_004349a0(iVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_009d1740(pvVar4,puVar2[0xdd],*(uint *)(iVar1 + 0x420));
      if ((0 < *(int *)(iVar1 + 0x424)) && (iVar3 = 0, 0 < *(int *)(iVar1 + 0x424))) {
        do {
          FUN_009d12f0(pvVar4,puVar2[0xdd],(void *)0x1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar1 + 0x424));
      }
    }
    iVar1 = puVar2[0x12];
    puVar2[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    uVar5 = FUN_00679f50(*(void **)((int)this + 0x3c8));
  }
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_006803e0 @ 006803e0 ////

void __cdecl FUN_006803e0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00680540 @ 00680540 ////

void __fastcall FUN_00680540(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d36c1c;
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


//// FUNCTION FUN_006805e0 @ 006805e0 ////

void __fastcall FUN_006805e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d36c2c;
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


//// FUNCTION FUN_006806c0 @ 006806c0 ////

undefined4 * __thiscall FUN_006806c0(void *this,byte param_1)

{
  FUN_00680540(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006806e0 @ 006806e0 ////

int * __thiscall
FUN_006806e0(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

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
  puStack_8 = &LAB_00cc614e;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4 = 0;
  FUN_0069fb10(this,param_1,&local_2c,param_4,param_5,param_6,param_7,param_8,param_9);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(int *)((int)this + 0x424) = param_3;
  *(undefined ***)this = &PTR_FUN_00d36c54;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d36c3c;
  *(int *)((int)this + 0x420) = param_2;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 **)((int)this + 0x434) = (undefined4 *)((int)this + 0x428);
  *(undefined4 *)((int)this + 0x428) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x43c) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0073e4e0(this,0x42800000);
  FUN_0067ff60(this);
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00680810 @ 00680810 ////

void __fastcall FUN_00680810(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d36c54;
  param_1[0x14] = &PTR_FUN_00d36c3c;
  param_1[0x10a] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x10c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10c] = param_1[0x10b];
  }
  if (param_1[0x10b] != 0) {
    *(undefined4 *)(param_1[0x10b] + 4) = param_1[0x10c];
  }
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10f] = 0;
  if ((undefined4 *)param_1[0x10c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10c] = param_1[0x10b];
  }
  if (param_1[0x10b] != 0) {
    *(undefined4 *)(param_1[0x10b] + 4) = param_1[0x10c];
  }
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  FUN_0069f010(param_1);
  return;
}


//// FUNCTION FUN_00680990 @ 00680990 ////

void __fastcall FUN_00680990(int *param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  int local_8;
  int local_4;
  
  iVar2 = param_1[0xe3];
  iVar3 = 0;
  local_8 = 0;
  local_4 = 0;
  if (iVar2 != param_1[0xe4]) {
    do {
      piVar1 = *(int **)(iVar2 + 0x14);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x60))(1,param_1,0xc1200000);
        (**(code **)(*piVar1 + 100))(2,param_1,0xc1200000);
        (**(code **)(*piVar1 + 0x20))(0);
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != param_1[0xe4]);
  }
  iVar2 = param_1[0xe6];
  param_1[0xde] = 0;
  if (iVar2 != param_1[0xe4]) {
    do {
      piVar1 = *(int **)(iVar2 + 0x14);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x5c))(1,param_1,(float)local_8 * 64.0 + 48.0);
        (**(code **)(*piVar1 + 100))(1,param_1,(float)unaff_EBP * 64.0 + 30.0);
        (**(code **)(*piVar1 + 0x20))(1);
        iVar3 = iVar3 + 1;
        param_1[0xde] = param_1[0xde] + 1;
        local_8 = iVar3;
        if (5 < iVar3) {
          iVar3 = 0;
          local_4 = local_4 + 1;
          local_8 = 0;
          if (4 < local_4) break;
        }
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != param_1[0xe4]);
  }
  (**(code **)(*param_1 + 0x50))(1);
  return;
}


//// FUNCTION FUN_00680b80 @ 00680b80 ////

void __thiscall FUN_00680b80(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x38c);
  if (((iVar1 != *(int *)((int)this + 0x398)) && (iVar1 != 0)) &&
     (4 < (uint)((*(int *)((int)this + 0x390) - iVar1) / 0x18))) {
    iVar2 = *(int *)((int)this + 0x380) - param_1;
    iVar3 = *(int *)((int)this + 900) + -1;
    *(int *)((int)this + 900) = iVar3;
    iVar3 = iVar3 * 0x1e + -0x1e;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (iVar2 != iVar3) {
      iVar2 = iVar3;
    }
    *(int *)((int)this + 0x398) = iVar1 + iVar2 * 0x18;
    *(int *)((int)this + 0x380) = iVar2;
    FUN_00680990(this);
  }
  return;
}


//// FUNCTION FUN_00680c00 @ 00680c00 ////

void __thiscall FUN_00680c00(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((0 < param_1) && (*(int *)((int)this + 0x390) != *(int *)((int)this + 0x398))) &&
     (*(int *)((int)this + 0x378) == 0x1e)) {
    if (((*(int *)((int)this + 0x38c) != 0) &&
        (0x1e < (uint)((*(int *)((int)this + 0x390) - *(int *)((int)this + 0x38c)) / 0x18))) &&
       (iVar1 = FUN_0067fd60((int)this + 0x388), *(uint *)((int)this + 0x37c) < iVar1 - 1U)) {
      iVar1 = *(int *)((int)this + 0x380) + param_1;
      iVar3 = *(int *)((int)this + 900) + 1;
      iVar2 = iVar3 * 0x1e + -0x1e;
      *(int *)((int)this + 900) = iVar3;
      if (iVar2 != iVar1) {
        iVar1 = iVar2;
      }
      iVar2 = FUN_0067fd60((int)this + 0x388);
      if (iVar1 < iVar2) {
        *(int *)((int)this + 0x398) = *(int *)((int)this + 0x38c) + iVar1 * 0x18;
        *(int *)((int)this + 0x380) = iVar1;
      }
      FUN_00680990(this);
    }
  }
  return;
}


//// FUNCTION FUN_00680dc0 @ 00680dc0 ////

undefined4 * __thiscall FUN_00680dc0(void *this,byte param_1)

{
  FUN_00680810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00680e30 @ 00680e30 ////

void __thiscall FUN_00680e30(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)((int)this + 0x38c);
  iVar2 = iVar1;
  iVar3 = 0;
  if (iVar1 != *(int *)((int)this + 0x390)) {
    do {
      iVar3 = *(int *)(iVar2 + 0x14);
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x420) == param_1)) &&
         (*(int *)(iVar3 + 0x424) == param_2)) break;
      iVar2 = iVar2 + 0x18;
      iVar3 = 0;
    } while (iVar2 != *(int *)((int)this + 0x390));
  }
  *(int *)((int)this + 0x398) = iVar1;
  if ((iVar3 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    uVar4 = FUN_00acd42c();
    FUN_00680c00(this,(int)uVar4 * 0x1e);
  }
  return;
}


//// FUNCTION FUN_00680f20 @ 00680f20 ////

void __cdecl FUN_00680f20(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d36c1c;
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


//// FUNCTION FUN_00680f90 @ 00680f90 ////

void __cdecl FUN_00680f90(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d36c1c;
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


//// FUNCTION FUN_006810e0 @ 006810e0 ////

undefined4 * FUN_006810e0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00680f90(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_00681110 @ 00681110 ////

void FUN_00681110(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00680540(param_1);
  }
  return;
}


//// FUNCTION FUN_00681140 @ 00681140 ////

void FUN_00681140(void)

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
  puStack_8 = &LAB_00cc6168;
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


//// FUNCTION FUN_00681200 @ 00681200 ////

void __fastcall FUN_00681200(int param_1)

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
    FUN_00680540(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00681250 @ 00681250 ////

void __thiscall FUN_00681250(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cc6188;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d36c1c;
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
      FUN_00681140();
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
        iVar3 = FUN_0067fd60((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_00680f20(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00680f90(puVar5,param_2,(int)&local_34);
      FUN_00680f20((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00681110(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_00680f20((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006810e0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_006803e0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_00680f20((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_0067ff20((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_006803e0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_006815a0 @ 006815a0 ////

void __thiscall FUN_006815a0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_006815e5;
    }
  }
  iVar1 = 0;
LAB_006815e5:
  FUN_00681250(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_00681610 @ 00681610 ////

void __fastcall FUN_00681610(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d36d74;
  param_1[0x14] = &PTR_LAB_00d36d58;
  param_1[0xf9] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xfb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfb] = param_1[0xfa];
  }
  if (param_1[0xfa] != 0) {
    *(undefined4 *)(param_1[0xfa] + 4) = param_1[0xfb];
  }
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfe] = 0;
  if ((undefined4 *)param_1[0xfb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfb] = param_1[0xfa];
  }
  if (param_1[0xfa] != 0) {
    *(undefined4 *)(param_1[0xfa] + 4) = param_1[0xfb];
  }
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xf3] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xf5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf5] = param_1[0xf4];
  }
  if (param_1[0xf4] != 0) {
    *(undefined4 *)(param_1[0xf4] + 4) = param_1[0xf5];
  }
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf8] = 0;
  if ((undefined4 *)param_1[0xf5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf5] = param_1[0xf4];
  }
  if (param_1[0xf4] != 0) {
    *(undefined4 *)(param_1[0xf4] + 4) = param_1[0xf5];
  }
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xed] = &PTR_LAB_00d36c2c;
  if ((undefined4 *)param_1[0xef] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xef] = param_1[0xee];
  }
  if (param_1[0xee] != 0) {
    *(undefined4 *)(param_1[0xee] + 4) = param_1[0xef];
  }
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf2] = 0;
  if ((undefined4 *)param_1[0xef] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xef] = param_1[0xee];
  }
  if (param_1[0xee] != 0) {
    *(undefined4 *)(param_1[0xee] + 4) = param_1[0xef];
  }
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xe7] = &PTR_LAB_00d36c1c;
  if ((undefined4 *)param_1[0xe9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe9] = param_1[0xe8];
  }
  if (param_1[0xe8] != 0) {
    *(undefined4 *)(param_1[0xe8] + 4) = param_1[0xe9];
  }
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xec] = 0;
  if ((undefined4 *)param_1[0xe9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe9] = param_1[0xe8];
  }
  if (param_1[0xe8] != 0) {
    *(undefined4 *)(param_1[0xe8] + 4) = param_1[0xe9];
  }
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  FUN_00681200((int)(param_1 + 0xe2));
  param_1[0xd6] = &PTR_FUN_00d18c5c;
  if ((undefined4 *)param_1[0xd8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd8] = param_1[0xd7];
  }
  if (param_1[0xd7] != 0) {
    *(undefined4 *)(param_1[0xd7] + 4) = param_1[0xd8];
  }
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xdb] = 0;
  if ((undefined4 *)param_1[0xd8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd8] = param_1[0xd7];
  }
  if (param_1[0xd7] != 0) {
    *(undefined4 *)(param_1[0xd7] + 4) = param_1[0xd8];
  }
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_00681870 @ 00681870 ////

void __thiscall FUN_00681870(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00680f90(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_006815a0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00681900 @ 00681900 ////

undefined4 * __thiscall FUN_00681900(void *this,byte param_1)

{
  FUN_00681610(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00681920 @ 00681920 ////

void __fastcall FUN_00681920(int *param_1)

{
  char cVar1;
  void **ppvVar2;
  void *pvVar3;
  int *this;
  int iVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  uint _Count;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined **ppuStack_178;
  int iStack_174;
  int *piStack_170;
  undefined ***pppuStack_16c;
  uint uStack_168;
  int *piStack_164;
  undefined **local_160 [9];
  char *local_13c;
  undefined4 local_138;
  uint local_134;
  char local_130 [8];
  char cStack_128;
  undefined4 uStack_127;
  void *local_11c;
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00cc61e6;
  local_14 = ExceptionList;
  bVar5 = false;
  iVar4 = *(int *)(param_1[0xf2] + 0x434);
  ppvVar2 = &local_14;
  if (iVar4 == *(int *)(param_1[0xf2] + 0x438)) {
    param_1[0xe6] = param_1[0xe3];
    return;
  }
  do {
    ExceptionList = ppvVar2;
    local_c = 0xffffffff;
    iVar10 = *(int *)(iVar4 + 0x14);
    if (iVar10 != 0) {
      pvVar3 = operator_new(0x440);
      local_c = 0;
      local_11c = pvVar3;
      if (pvVar3 == (void *)0x0) {
        this = (int *)0x0;
      }
      else {
        local_13c = local_130;
        local_130[0] = '\0';
        local_138 = 0;
        local_134 = 0x14;
        _strncpy(local_13c,"gridbutton",10);
        local_138 = 10;
        local_13c[10] = '\0';
        local_160[0] = (undefined **)&stack0xfffffe58;
        bVar5 = true;
        local_c = CONCAT31(local_c._1_3_,1);
        this = FUN_006806e0(pvVar3,(int *)&local_13c,*(int *)(iVar10 + 0x38),*(int *)(iVar10 + 0x3c)
                            ,0x42a00000,0x42a00000,0,0,0x3f200000,0x3f200000);
      }
      local_c = 0xffffffff;
      if ((bVar5) && (bVar5 = false, 0x14 < local_134)) {
                    /* WARNING: Subroutine does not return */
        _free(local_13c);
      }
      (**(code **)(*this + 0x18))();
      uVar11 = *(undefined4 *)(iVar10 + 0x3c);
      cStack_128 = '\0';
      puVar8 = &uStack_127;
      for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      iVar6 = param_1[0xdb];
      *(undefined2 *)puVar8 = 0;
      *(undefined1 *)((int)puVar8 + 2) = 0;
      iVar10 = *(int *)(iVar10 + 0x38);
      iVar9 = param_1[0xdd];
      pcVar7 = &cStack_128;
      puVar12 = &stack0xfffffffc;
      pvVar3 = (void *)FUN_004319b0(iVar6);
      FUN_009cfed0(pvVar3,iVar9,pcVar7,iVar10,uVar11,(int)puVar12);
      pppuStack_16c = local_160;
      pcVar7 = &cStack_128;
      local_160[0] = (undefined **)((uint)local_160[0] & 0xffffff00);
      uStack_168 = 0;
      piStack_164 = (int *)0x14;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      _Count = (int)pcVar7 - (int)&uStack_127;
      if (0x13 < _Count) {
        piStack_164 = (int *)(_Count + 0x20 & 0xffffffe0);
        pppuStack_16c = _malloc((size_t)piStack_164);
      }
      _strncpy((char *)pppuStack_16c,&cStack_128,_Count);
      *(undefined1 *)((int)pppuStack_16c + _Count) = 0;
      piStack_170 = (int *)&stack0xfffffe48;
      uStack_1c = 3;
      uStack_168 = _Count;
      FUN_00680000(this,&pppuStack_16c,0,0,0x3f800000,0x3f800000);
      uStack_1c = 0xffffffff;
      if (0x14 < piStack_164) {
                    /* WARNING: Subroutine does not return */
        _free(pppuStack_16c);
      }
      (**(code **)(*param_1 + 0xc))();
      pppuStack_16c = &ppuStack_178;
      piStack_170 = this + 6;
      ppuStack_178 = &PTR_LAB_00d36c1c;
      iStack_174 = *piStack_170;
      *(int **)(*piStack_170 + 4) = &iStack_174;
      *piStack_170 = (int)&iStack_174;
      local_c = 4;
      piStack_164 = this;
      FUN_00681870(param_1 + 0xe2,(int)&ppuStack_178);
      ppuStack_178 = &PTR_LAB_00d36c1c;
      if (piStack_170 != (int *)0x0) {
        *piStack_170 = iStack_174;
      }
      if (iStack_174 != 0) {
        *(int **)(iStack_174 + 4) = piStack_170;
      }
      piStack_164 = (int *)0x0;
      iStack_174 = 0;
      piStack_170 = (int *)0x0;
    }
    iVar4 = iVar4 + 0x18;
    ppvVar2 = ExceptionList;
    if (iVar4 == *(int *)(param_1[0xf2] + 0x438)) {
      param_1[0xe6] = param_1[0xe3];
      ExceptionList = local_14;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00681ca0 @ 00681ca0 ////

int * __thiscall
FUN_00681ca0(void *this,undefined4 *param_1,void *param_2,int param_3,undefined4 param_4,int param_5
            )

{
  uint **this_00;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  char *_Dest;
  void *pvVar6;
  char *pcVar7;
  int *piVar8;
  int unaff_EBP;
  char *_Dest_00;
  int unaff_retaddr;
  uint uStack_13c;
  char *_Dest_01;
  undefined4 uVar9;
  uint uVar10;
  uint **local_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint *local_f0;
  char *local_ec;
  uint local_e8;
  uint local_e4;
  char acStack_e0 [4];
  void *apvStack_dc [2];
  uint uStack_d4;
  void *apvStack_bc [2];
  uint uStack_b4;
  void *pvStack_b0;
  void *apvStack_a8 [2];
  undefined1 *puStack_a0;
  undefined2 *puStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined2 auStack_90 [8];
  undefined4 uStack_80;
  undefined4 uStack_58;
  void *local_50;
  undefined4 uStack_30;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc63ee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_50 = this;
  FUN_006898b0(this);
  *(undefined ***)this = &PTR_FUN_00d36d74;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d36d58;
  piVar2 = (int *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x364) = 0;
  *piVar2 = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 **)((int)this + 0x364) = (undefined4 *)((int)this + 0x358);
  *(undefined4 *)((int)this + 0x358) = &PTR_FUN_00d18c5c;
  *(undefined4 **)((int)this + 0x36c) = param_1;
  if (param_1 != (undefined4 *)0x0) {
    piVar8 = param_1 + 6;
    *(int **)((int)this + 0x360) = piVar8;
    *piVar2 = *piVar8;
    *(int **)(*piVar8 + 4) = piVar2;
    *piVar8 = (int)piVar2;
  }
  *(void **)((int)this + 0x370) = param_2;
  *(int *)((int)this + 0x374) = param_3;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 1;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 **)((int)this + 0x3a8) = (undefined4 *)((int)this + 0x39c);
  *(undefined4 *)((int)this + 0x39c) = &PTR_LAB_00d36c1c;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  piVar2 = (int *)((int)this + 0x3b8);
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *piVar2 = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 **)((int)this + 0x3c0) = (undefined4 *)((int)this + 0x3b4);
  *(undefined4 *)((int)this + 0x3b4) = &PTR_LAB_00d36c2c;
  *(int *)((int)this + 0x3c8) = param_5;
  if (param_5 != 0) {
    piVar8 = (int *)(param_5 + 0x18);
    *(int **)((int)this + 0x3bc) = piVar8;
    *piVar2 = *piVar8;
    *(int **)(*piVar8 + 4) = piVar2;
    *piVar8 = (int)piVar2;
  }
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 **)((int)this + 0x3d8) = (undefined4 *)((int)this + 0x3cc);
  *(undefined4 *)((int)this + 0x3cc) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 **)((int)this + 0x3f0) = (undefined4 *)((int)this + 0x3e4);
  *(undefined4 *)((int)this + 0x3e4) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  local_4._0_1_ = 6;
  local_4._1_3_ = 0;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 8;
  this_00 = operator_new(0x288);
  local_fc = this_00;
  if (this_00 == (uint **)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    local_f0 = &local_e4;
    local_e4 = local_e4 & 0xffffff00;
    local_ec = (char *)0x0;
    local_e8 = 0x20;
    local_f0 = _malloc(0x20);
    _strncpy((char *)local_f0,"ui/gridbutton_starmak.dds",0x19);
    local_ec = (char *)0x19;
    *(char *)((int)local_f0 + 0x19) = '\0';
    local_4 = CONCAT31(local_4._1_3_,8);
    puVar1 = FUN_005e8fd0(this_00,&local_f0);
  }
  local_4 = 6;
  if ((this_00 != (uint **)0x0) && (0x14 < local_e8)) {
                    /* WARNING: Subroutine does not return */
    _free(local_f0);
  }
  puVar1[0x9c] = 0x41400000;
  puVar1[0x9d] = 0x41400000;
  puVar1[0x9b] = 0x42000000;
  puVar1[0x9e] = 0x41c00000;
  puVar1[0x9f] = 0x41c00000;
  FUN_0073fae0(this,puVar1);
  FUN_0073f490(this,400.0);
  FUN_0073f410(this,484.0);
  piVar2 = (int *)FUN_0066bb40(DAT_0104daa0);
  (**(code **)(*piVar2 + 0x14))();
  piVar2 = (int *)FUN_0066bb40(DAT_0104daa0);
  (**(code **)(*piVar2 + 0x10))();
  uVar9 = 0x42c00000;
  iVar3 = FUN_0066bb40(DAT_0104daa0);
  FUN_00741a50(this,2,iVar3,uVar9);
  uVar9 = 0x42400000;
  iVar3 = FUN_0066bb40(DAT_0104daa0);
  FUN_00741b60(this,1,iVar3,uVar9);
  piVar2 = (int *)FUN_0066bb40(DAT_0104daa0);
  uVar10 = 1;
  (**(code **)(*piVar2 + 0xc))();
  piVar2 = (int *)FUN_0066bb40(DAT_0104daa0);
  _Dest_01 = this;
  (**(code **)(*piVar2 + 0xac))();
  FUN_00741630(this,0xc,0x680de0,this,"COSTUMEFIDDLEROPTION_LIST");
  FUN_00741630(this,0xd,0x680ec0,this,"COSTUMEFIDDLEROPTION_LIST");
  FUN_00741630(this,2,0x680d00,this,"COSTUMEFIDDLEROPTION_LIST");
  FUN_00681920(this);
  FUN_00680990(this);
  FUN_009ce080(*(void **)((int)param_2 + 0xc),unaff_retaddr,(uint *)&stack0xfffffef8,
               (int *)&stack0xfffffefc);
  uVar4 = FUN_009d1780(param_2,unaff_retaddr);
  FUN_00680e30(this,uVar4,unaff_EBP);
  puVar1 = operator_new(0x3fc);
  uStack_10 = 10;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00833290(puVar1);
  }
  puStack_9c = auStack_90;
  auStack_90[0] = 0;
  uStack_98 = 0;
  uStack_94 = 10;
  uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&puStack_9c,(wchar_t *)&lpCaption_00d16918,uVar4);
  uStack_10 = 0xb;
  sVar5 = FUN_00ace02d(L"<nobr><p align=center><h2><translate>");
  FUN_0040cae0(&puStack_9c,L"<nobr><p align=center><h2><translate>",sVar5);
  puVar1 = FUN_00568790(apvStack_bc,param_1);
  FUN_0040cae0(&puStack_9c,(wchar_t *)*puVar1,puVar1[1]);
  if (10 < uStack_b4) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_bc[0]);
  }
  sVar5 = FUN_00ace02d(L"</translate></h2></p></nobr>");
  FUN_0040cae0(&puStack_9c,L"</translate></h2></p></nobr>",sVar5);
  (**(code **)(*piVar2 + 0x54))();
  (**(code **)(*piVar2 + 0x84))();
  FUN_00830550(piVar2,9,&stack0xfffffef8);
  iVar3 = *piVar2;
  (**(code **)(iVar3 + 0x10))();
  _Dest_00 = this;
  (**(code **)(iVar3 + 0x5c))();
  uStack_13c = 1;
  (**(code **)(*piVar2 + 100))();
  FUN_0073f6e0(this,piVar2);
  _Dest = operator_new(0x420);
  if (_Dest == (char *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    local_fc = &local_f0;
    local_f0 = (uint *)((uint)local_f0 & 0xffffff00);
    uStack_f8 = 0;
    uStack_f4 = 0x20;
    pcVar7 = _Dest;
    local_fc = _malloc(0x20);
    _strncpy((char *)local_fc,"COSTUMEFIDDLER_CLOSECHOICES",0x1b);
    uStack_f8 = 0x1b;
    *(char *)((int)local_fc + 0x1b) = '\0';
    uVar4 = (uint)_Dest_00 | 2;
    _Dest_01 = &stack0xfffffef0;
    uVar10 = 0x14;
    _strncpy(_Dest_01,"button_goback.",0xe);
    _Dest_01[0xe] = '\0';
    uVar4 = uVar4 | 4;
    uStack_30 = 0xe;
    puVar1 = FUN_009b5030(apvStack_dc,&local_fc);
    _Dest_00 = (char *)(uVar4 | 8);
    uStack_30 = 0xf;
    piVar2 = FUN_0069fb10(_Dest,(int *)&stack0xfffffee4,puVar1,0x42000000,0x42000000,0,0,0x3f800000,
                          0x3f800000);
    _Dest = pcVar7;
  }
  if ((((uint)_Dest_00 & 8) != 0) &&
     (_Dest_00 = (char *)((uint)_Dest_00 & 0xfffffff7), 10 < uStack_d4)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_dc[0]);
  }
  if ((((uint)_Dest_00 & 4) != 0) &&
     (_Dest_00 = (char *)((uint)_Dest_00 & 0xfffffffb), 0x14 < uVar10)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_01);
  }
  uStack_30 = 0xb;
  if ((((uint)_Dest_00 & 2) != 0) &&
     (_Dest_00 = (char *)((uint)_Dest_00 & 0xfffffffd), 0x14 < uStack_f4)) {
                    /* WARNING: Subroutine does not return */
    _free(local_fc);
  }
  pcVar7 = this;
  (**(code **)(*piVar2 + 100))();
  uVar4 = 0;
  (**(code **)(*piVar2 + 0x5c))();
  (**(code **)(*piVar2 + 0x18))();
  FUN_0073f6e0(this,piVar2);
  pvVar6 = operator_new(0x420);
  if (pvVar6 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_13c = 0x20;
    pcVar7 = _malloc(0x20);
    _strncpy(pcVar7,"COSTUMEFIDDLER_CHOICESDOWN",0x1a);
    pcVar7[0x1a] = '\0';
    _Dest = &stack0xfffffee8;
    uVar4 = uVar4 | 0x10;
    _Dest_01 = &DAT_00000014;
    _strncpy(_Dest,"button_right.",0xd);
    _Dest[0xd] = '\0';
    uVar4 = uVar4 | 0x20;
    uStack_58 = 0x15;
    puVar1 = FUN_009b5030(&puStack_a0,(undefined4 *)&stack0xfffffebc);
    uVar4 = uVar4 | 0x40;
    uStack_58 = 0x16;
    piVar2 = FUN_0069fb10(pvVar6,(int *)&stack0xfffffedc,puVar1,0x42400000,0x42400000,0,0,0x3f800000
                          ,0x3f800000);
  }
  if (((uVar4 & 0x40) != 0) && (uVar4 = uVar4 & 0xffffffbf, 10 < uStack_98)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_a0);
  }
  if (((uVar4 & 0x20) != 0) && (uVar4 = uVar4 & 0xffffffdf, &DAT_00000014 < _Dest_01)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  uStack_58 = 0xb;
  if (((uVar4 & 0x10) != 0) && (0x14 < uStack_13c)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar7);
  }
  (**(code **)(*piVar2 + 0x60))();
  iVar3 = *piVar2;
  (**(code **)(iVar3 + 0x14))();
  uVar4 = 1;
  (**(code **)(iVar3 + 100))();
  (**(code **)(*piVar2 + 0x18))();
  FUN_0073f6e0(this,piVar2);
  pvVar6 = operator_new(0x420);
  if (pvVar6 == (void *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    _Dest = (char *)0x20;
    _Dest_00 = _malloc(0x20);
    _strncpy(_Dest_00,"COSTUMEFIDDLER_CHOICESUP",0x18);
    _Dest_00[0x18] = '\0';
    local_ec = acStack_e0;
    uVar4 = uVar4 | 0x80;
    acStack_e0[0] = '\0';
    local_e8 = 0;
    local_e4 = 0x14;
    _strncpy(local_ec,"button_left.",0xc);
    local_e8 = 0xc;
    local_ec[0xc] = '\0';
    uVar4 = uVar4 | 0x100;
    uStack_80 = 0x1c;
    puVar1 = FUN_009b5030(apvStack_a8,(undefined4 *)&stack0xfffffed4);
    uVar4 = uVar4 | 0x200;
    uStack_80 = 0x1d;
    piVar8 = FUN_0069fb10(pvVar6,(int *)&local_ec,puVar1,0x42400000,0x42400000,0,0,0x3f800000,
                          0x3f800000);
  }
  if (((uVar4 & 0x200) != 0) && (uVar4 = uVar4 & 0xfffffdff, &lpType_0000000a < puStack_a0)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_a8[0]);
  }
  if (((uVar4 & 0x100) != 0) && (uVar4 = uVar4 & 0xfffffeff, 0x14 < local_e4)) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
  uStack_80 = 0xb;
  if (((char)uVar4 < '\0') && (&DAT_00000014 < _Dest)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_00);
  }
  (**(code **)(*piVar8 + 0x5c))();
  iVar3 = *piVar8;
  (**(code **)(iVar3 + 0x14))();
  (**(code **)(iVar3 + 0x68))(2,this);
  (**(code **)(*piVar8 + 0x18))(0,&LAB_00680de0,this,"COSTUMEFIDDLEROPTION_LIST");
  FUN_0073f6e0(this,piVar8);
  FUN_007421c0(this);
  if ((*(int *)((int)this + 0x38c) == 0) ||
     ((uint)((*(int *)((int)this + 0x390) - *(int *)((int)this + 0x38c)) / 0x18) < 0x1f)) {
    (**(code **)(*piVar2 + 0xc0))(0);
    (**(code **)(*piVar8 + 0xc0))(0);
  }
  (**(code **)(*(int *)((int)this + 0x3cc) + 4))();
  *(int **)((int)this + 0x3e0) = piVar2;
  (*(code *)**(undefined4 **)((int)this + 0x3cc))();
  (**(code **)(*(int *)((int)this + 0x3e4) + 4))();
  *(int **)((int)this + 0x3f8) = piVar8;
  (*(code *)**(undefined4 **)((int)this + 0x3e4))();
  if (&lpType_0000000a < _Dest_00) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x0);
  }
  ExceptionList = pvStack_b0;
  return this;
}


//// FUNCTION FUN_00682970 @ 00682970 ////

void __fastcall FUN_00682970(int param_1)

{
  void *this;
  uint uVar1;
  uint local_8;
  int local_4;
  
  this = (void *)FUN_004319b0(*(int *)(param_1 + 0x36c));
  FUN_009ce990(this,*(int *)(param_1 + 0x374));
  FUN_009cdc00(this,*(int *)(param_1 + 0x374));
  FUN_009ce080(this,*(int *)(param_1 + 0x374),&local_8,&local_4);
  FUN_004319b0(*(int *)(param_1 + 0x36c));
  *(uint *)(param_1 + 0x378) = local_8;
  uVar1 = FUN_009ce990(this,*(int *)(param_1 + 0x374));
  *(uint *)(param_1 + 0x37c) = uVar1;
  return;
}


//// FUNCTION FUN_00682a40 @ 00682a40 ////

void __fastcall FUN_00682a40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d36f94;
  param_1[0x14] = &PTR_LAB_00d36f7c;
  param_1[0xf7] = &PTR_LAB_00d36c2c;
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
  param_1[0xf1] = &PTR_FUN_00d172a0;
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
  param_1[0xeb] = &PTR_FUN_00d2dbb4;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xed] = param_1[0xec];
  }
  if (param_1[0xec] != 0) {
    *(undefined4 *)(param_1[0xec] + 4) = param_1[0xed];
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xf0] = 0;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xed] = param_1[0xec];
  }
  if (param_1[0xec] != 0) {
    *(undefined4 *)(param_1[0xec] + 4) = param_1[0xed];
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  if (0x14 < (uint)param_1[0xe5]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe3]);
  }
  param_1[0xd6] = &PTR_FUN_00d18c5c;
  if ((undefined4 *)param_1[0xd8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd8] = param_1[0xd7];
  }
  if (param_1[0xd7] != 0) {
    *(undefined4 *)(param_1[0xd7] + 4) = param_1[0xd8];
  }
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xdb] = 0;
  if ((undefined4 *)param_1[0xd8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd8] = param_1[0xd7];
  }
  if (param_1[0xd7] != 0) {
    *(undefined4 *)(param_1[0xd7] + 4) = param_1[0xd8];
  }
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_00682c40 @ 00682c40 ////

undefined8 __fastcall FUN_00682c40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar4;
  int iVar5;
  float10 extraout_ST0;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined2 uVar3;
  
  iVar2 = *(int *)(param_1 + 900);
  FUN_0069a3b0(*(int *)(param_1 + 0x3c0));
  iVar1 = *(int *)(param_1 + 900);
  uVar8 = FUN_00acd42c();
  iVar4 = (int)(uVar8 >> 0x20);
  iVar5 = (int)uVar8;
  fVar6 = (float10)iVar5 * (float10)(1.0 / (float)iVar2);
  fVar7 = fVar6 - (float10)0.01;
  uVar3 = (undefined2)(uVar8 >> 0x10);
  iVar2 = CONCAT22(uVar3,(ushort)(extraout_ST0 < fVar7) << 8 |
                         (ushort)(NAN(extraout_ST0) || NAN(fVar7)) << 10 |
                         (ushort)(extraout_ST0 == fVar7) << 0xe);
  if (extraout_ST0 < fVar7) {
    fVar6 = (float10)0.01 + fVar6;
    iVar2 = CONCAT22(uVar3,(ushort)(extraout_ST0 < fVar6) << 8 |
                           (ushort)(NAN(extraout_ST0) || NAN(fVar6)) << 10 |
                           (ushort)(extraout_ST0 == fVar6) << 0xe);
    if (extraout_ST0 >= fVar6 && (extraout_ST0 == fVar6) == 0) goto LAB_00682caf;
  }
  if (iVar5 != *(int *)(param_1 + 0x388)) {
    *(int *)(param_1 + 0x388) = iVar5;
    if (iVar1 <= iVar5) {
      iVar5 = iVar1 + -1;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x3f0) + 0x434);
    iVar1 = *(int *)(iVar4 + 0x14 + iVar5 * 0x18);
    iVar2 = iVar4 + iVar5 * 0x18;
    if (iVar1 != 0) {
      FUN_009d1740(*(void **)(param_1 + 0x370),*(int *)(param_1 + 0x374),*(uint *)(iVar1 + 0x38));
      if ((0 < *(int *)(iVar1 + 0x3c)) && (iVar5 = 0, 0 < *(int *)(iVar1 + 0x3c))) {
        do {
          FUN_009d12f0(*(void **)(param_1 + 0x370),*(int *)(param_1 + 0x374),(void *)0x1);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar1 + 0x3c));
      }
      uVar9 = FUN_00679f50(*(void **)(param_1 + 0x3f0));
      return uVar9;
    }
  }
LAB_00682caf:
  return CONCAT44(iVar4,iVar2);
}


//// FUNCTION FUN_00682d40 @ 00682d40 ////

undefined4 FUN_00682d40(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                       &TM::WGenericSliderSlider::RTTI_Type_Descriptor,0);
  uVar3 = 0;
  if (((iVar2 != 0) && (uVar3 = 0, *(int *)(iVar2 + 0x118) != 0)) &&
     (piVar1 = *(int **)(*(int *)(iVar2 + 0x118) + 0x118), uVar3 = 0, piVar1 != (int *)0x0)) {
    iVar2 = FUN_00ace790(piVar1,0,&TM::WWindow::RTTI_Type_Descriptor,
                         &TM::WCostumeOptionSlider::RTTI_Type_Descriptor,0);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar4 = FUN_00682c40(iVar2);
      uVar3 = (undefined4)uVar4;
    }
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00682da0 @ 00682da0 ////

int __thiscall FUN_00682da0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(*(int *)((int)this + 0x3f0) + 0x434);
  iVar1 = *(int *)(*(int *)((int)this + 0x3f0) + 0x438);
  iVar2 = 0;
  if (iVar3 != iVar1) {
    piVar4 = (int *)(iVar3 + 0x14);
    do {
      if ((*(int *)(*piVar4 + 0x38) == param_1) && (*(int *)(*piVar4 + 0x3c) == param_2)) {
        return iVar2;
      }
      iVar3 = iVar3 + 0x18;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 6;
    } while (iVar3 != iVar1);
  }
  return iVar2;
}


//// FUNCTION FUN_00682e30 @ 00682e30 ////

undefined4 * __thiscall
FUN_00682e30(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined **ppuVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  void *apvStack_2c [2];
  int *piStack_24;
  void *pvStack_20;
  undefined4 *puStack_18;
  int *piStack_14;
  void *pvStack_c;
  int *piStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  piStack_8 = (int *)&LAB_00cc64d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006898b0(this);
  *(undefined ***)this = &PTR_FUN_00d36f94;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d36f7c;
  piVar6 = (int *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x364) = 0;
  *piVar6 = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x364) = (undefined4 *)((int)this + 0x358);
  *(undefined4 *)((int)this + 0x358) = &PTR_FUN_00d18c5c;
  *(int **)((int)this + 0x36c) = param_1;
  if (param_1 != (int *)0x0) {
    piVar2 = param_1 + 6;
    *(int **)((int)this + 0x360) = piVar2;
    *piVar6 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar6;
    *piVar2 = (int)piVar6;
  }
  *(undefined4 *)((int)this + 0x374) = param_3;
  *(undefined4 *)((int)this + 0x370) = param_2;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = (undefined1 *)((int)this + 0x398);
  *(undefined1 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x38c),(char *)*param_4,param_4[1]);
  piVar2 = (int *)((int)this + 0x3ac);
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(int **)((int)this + 0x3b8) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d2dbb4;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  piVar3 = (int *)((int)this + 0x3c4);
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(int **)((int)this + 0x3d0) = piVar3;
  *piVar3 = (int)&PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  piVar6 = (int *)((int)this + 0x3e0);
  *(undefined4 *)((int)this + 1000) = 0;
  *piVar6 = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 **)((int)this + 1000) = (undefined4 *)((int)this + 0x3dc);
  *(undefined4 *)((int)this + 0x3dc) = &PTR_LAB_00d36c2c;
  *(int *)((int)this + 0x3f0) = param_5;
  if (param_5 != 0) {
    piVar1 = (int *)(param_5 + 0x18);
    *(int **)((int)this + 0x3e4) = piVar1;
    *piVar6 = *piVar1;
    *(int **)(*piVar1 + 4) = piVar6;
    *piVar1 = (int)piVar6;
  }
  local_4._0_1_ = 5;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 8;
  pvVar4 = operator_new(0x288);
  if (pvVar4 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x20;
    local_6c = _malloc(0x20);
    _strncpy(local_6c,"ui/gridbutton_starmak.dds",0x19);
    local_68 = 0x19;
    local_6c[0x19] = '\0';
    local_4 = CONCAT31(local_4._1_3_,7);
    puVar5 = FUN_005e8fd0(pvVar4,&local_6c);
  }
  local_4 = 5;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_64)) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  puVar5[0x9c] = 0x41400000;
  puVar5[0x9d] = 0x41400000;
  puVar5[0x9e] = 0x41c00000;
  puVar5[0x9f] = 0x41c00000;
  puVar5[0x9b] = 0x42000000;
  FUN_0073fae0(this,puVar5);
  FUN_0073f490(this,320.0);
  FUN_0073f410(this,420.0);
  piVar6 = (int *)FUN_0066bb40((int)DAT_0104daa0);
  fVar10 = (float10)(**(code **)(*piVar6 + 0x14))();
  piVar6 = (int *)FUN_0066bb40((int)DAT_0104daa0);
  fVar11 = (float10)(**(code **)(*piVar6 + 0x10))();
  fVar12 = (float)(fVar11 * (float10)0.5 - (float10)210.0);
  iVar7 = FUN_0066bb40((int)DAT_0104daa0);
  FUN_00741a50(this,2,iVar7,fVar12);
  fVar12 = (float)fVar10 * 0.5 - 320.0;
  iVar7 = FUN_0066bb40((int)DAT_0104daa0);
  FUN_00741b60(this,1,iVar7,fVar12);
  pvVar4 = operator_new(0x420);
  bVar9 = pvVar4 == (void *)0x0;
  if (bVar9) {
    param_1 = (int *)0x0;
  }
  else {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x20;
    pcStack_4c = _malloc(0x20);
    _strncpy(pcStack_4c,"COSTUMEFIDDLER_CLOSECHOICES",0x1b);
    uStack_48 = 0x1b;
    pcStack_4c[0x1b] = '\0';
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"button_quit.",0xc);
    local_68 = 0xc;
    local_6c[0xc] = '\0';
    local_4 = 0xb;
    puVar5 = FUN_009b5030(apvStack_2c,&pcStack_4c);
    local_4 = 0xc;
    param_1 = FUN_0069fb10(pvVar4,(int *)&local_6c,puVar5,0x42000000,0x42000000,0,0,0x3f800000,
                           0x3f800000);
  }
  if ((!bVar9) && (&lpType_0000000a < piStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  if ((!bVar9) && (0x14 < local_64)) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_4 = 5;
  if ((!bVar9) && (0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  (**(code **)(*param_1 + 100))();
  (**(code **)(*piStack_8 + 0x5c))(1,this);
  (**(code **)(*piStack_14 + 0x18))(0,&LAB_006829f0,this,"COSTUMEFIDDLER_CLOSECHOICES");
  (**(code **)(*piVar3 + 4))();
  *(int **)((int)this + 0x3d8) = piStack_24;
  (**(code **)*piVar3)();
  FUN_0073f6e0(this,piStack_24);
  FUN_00682970((int)this);
  iVar7 = *(int *)((int)this + 0x3f0);
  if (iVar7 == 0) {
    *(undefined4 *)((int)this + 900) = 0;
  }
  else if (*(int *)(iVar7 + 0x434) == 0) {
    *(undefined4 *)((int)this + 900) = 0;
  }
  else {
    *(int *)((int)this + 900) = (*(int *)(iVar7 + 0x438) - *(int *)(iVar7 + 0x434)) / 0x18;
  }
  iVar7 = FUN_00682da0(this,*(int *)((int)this + 0x37c),*(int *)((int)this + 0x378));
  piStack_24 = (int *)((float)iVar7 / (float)*(int *)((int)this + 900));
  pvStack_20 = operator_new(0x3c0);
  apvStack_2c[0]._0_1_ = 0x10;
  if (pvStack_20 == (void *)0x0) {
    ppuVar8 = (undefined **)0x0;
  }
  else {
    ppuVar8 = FUN_0069be80(pvStack_20,(char *)*puStack_18,piStack_24,*(int *)((int)this + 900),1);
  }
  apvStack_2c[0] = (void *)CONCAT31(apvStack_2c[0]._1_3_,5);
  (**(code **)(*ppuVar8 + 0x78))(0x43b20000);
  (**(code **)(*(int *)ppuVar8[0xd7] + 0x78))(0x43b20000);
  (**(code **)(*ppuVar8 + 0x7c))(0x42800000);
  (**(code **)(*(int *)ppuVar8[0xd7] + 0x18))(9,&LAB_00682df0,this,"SLIDER_SLIDER");
  (**(code **)(*ppuVar8 + 0x5c))(1,this,0x42000000);
  (**(code **)(*ppuVar8 + 100))(1,this,0x41800000);
  FUN_0073f6e0(this,(int *)ppuVar8);
  (**(code **)(*piVar2 + 4))();
  *(undefined ***)((int)this + 0x3c0) = ppuVar8;
  (**(code **)*piVar2)();
  FUN_0073f490(this,96.0);
  piVar6 = (int *)FUN_0066bb40((int)DAT_0104daa0);
  (**(code **)(*piVar6 + 0xc))(this,1);
  FUN_0066bb50(DAT_0104daa0,this);
  (**(code **)(*ppuVar8 + 0x28))();
  ExceptionList = this;
  return this;
}


//// FUNCTION FUN_006834a0 @ 006834a0 ////

undefined4 * __thiscall FUN_006834a0(void *this,byte param_1)

{
  FUN_00682a40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00683520 @ 00683520 ////

void __fastcall FUN_00683520(int param_1)

{
  FUN_005f18e0(*(int *)(param_1 + 0x344));
  return;
}


//// FUNCTION FUN_00683530 @ 00683530 ////

void __fastcall FUN_00683530(int param_1)

{
  FUN_005f1e50(*(void **)(param_1 + 0x344));
  return;
}


//// FUNCTION FUN_00683540 @ 00683540 ////

void __fastcall FUN_00683540(int param_1)

{
  FUN_005f1ed0(*(void **)(param_1 + 0x344));
  return;
}


//// FUNCTION FUN_00683550 @ 00683550 ////

void __thiscall FUN_00683550(void *this,void *param_1)

{
  FUN_005f2120(*(void **)((int)this + 0x344),param_1);
  return;
}


//// FUNCTION FUN_00683560 @ 00683560 ////

void __thiscall FUN_00683560(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *this_00;
  
  iVar1 = FUN_005f18e0(*(int *)((int)this + 0x344));
  if (iVar1 != 0) {
    iVar2 = FUN_004345e0();
    if (iVar2 != 0) {
      this_00 = (void *)FUN_004345e0();
      FUN_00434ff0(this_00,iVar1,param_2,param_1);
    }
  }
  return;
}


//// FUNCTION FUN_006835a0 @ 006835a0 ////

void __thiscall FUN_006835a0(void *this,int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  void *this_00;
  undefined1 uVar4;
  
  iVar2 = FUN_005f0e50(*(int *)((int)this + 0x344));
  iVar2 = FUN_00990d30(0,iVar2);
  pvVar3 = (void *)FUN_005f1900(*(void **)((int)this + 0x344),iVar2);
  bVar1 = FUN_005f2120(*(void **)((int)this + 0x344),pvVar3);
  if ((bVar1) && (pvVar3 != (void *)0x0)) {
    iVar2 = FUN_004345e0();
    if (iVar2 != 0) {
      this_00 = (void *)FUN_004345e0();
      FUN_00434ff0(this_00,(int)pvVar3,param_2,param_1);
      uVar4 = 1;
      pvVar3 = (void *)FUN_004345e0();
      FUN_00433ae0(pvVar3,uVar4);
    }
  }
  return;
}


//// FUNCTION FUN_00683640 @ 00683640 ////

void __fastcall FUN_00683640(int param_1)

{
  FUN_005f0e50(*(int *)(param_1 + 0x344));
  return;
}


//// FUNCTION FUN_00683650 @ 00683650 ////

void __fastcall FUN_00683650(int param_1)

{
  FUN_005f0f80(*(int *)(param_1 + 0x344));
  return;
}


//// FUNCTION FUN_00683660 @ 00683660 ////

void __fastcall FUN_00683660(int param_1)

{
  FUN_005f0f90(*(int *)(param_1 + 0x344));
  return;
}


//// FUNCTION FUN_006836c0 @ 006836c0 ////

int __fastcall FUN_006836c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_006837e0 @ 006837e0 ////

int * __thiscall FUN_006837e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00683810 @ 00683810 ////

undefined4 * __cdecl FUN_00683810(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00683960 @ 00683960 ////

undefined4 __thiscall FUN_00683960(void *this,int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xfc))();
  (**(code **)(*(int *)((int)this + 0x34c) + 4))();
  *(undefined4 *)((int)this + 0x360) = uVar1;
  (*(code *)**(undefined4 **)((int)this + 0x34c))();
  uVar1 = 0;
  if (*(code **)((int)this + 0x278) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x278))(this,*(undefined4 *)((int)this + 0x27c));
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_006839b0 @ 006839b0 ////

undefined4 * __thiscall FUN_006839b0(void *this,undefined4 *param_1)

{
  FUN_005f1950(*(void **)((int)this + 0x344),param_1);
  return param_1;
}


//// FUNCTION FUN_006839e0 @ 006839e0 ////

undefined4 * __thiscall FUN_006839e0(void *this,undefined4 *param_1)

{
  FUN_005f1990(*(void **)((int)this + 0x344),param_1);
  return param_1;
}


//// FUNCTION FUN_00683b20 @ 00683b20 ////

void __cdecl FUN_00683b20(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00683bc0 @ 00683bc0 ////

void __thiscall FUN_00683bc0(void *this,wchar_t *param_1,uint param_2,uint param_3)

{
  FUN_004036d0((void *)((int)this + 0x344),param_1,param_2);
  if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00683c30 @ 00683c30 ////

bool __cdecl FUN_00683c30(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  wchar_t *local_6c;
  undefined4 local_68;
  uint local_64;
  wchar_t local_60 [10];
  wchar_t *local_4c;
  undefined4 local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc64f0;
  local_c = ExceptionList;
  bVar5 = false;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    local_4c = local_40;
    local_40[0] = L'\0';
    local_48 = 0;
    local_44 = 10;
    ExceptionList = &local_c;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_4c,(wchar_t *)&lpCaption_00d16918,uVar1);
    local_6c = local_60;
    local_4 = 0;
    local_60[0] = L'\0';
    local_68 = 0;
    local_64 = 10;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_6c,(wchar_t *)&lpCaption_00d16918,uVar1);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (param_1[0xd2] == 0) {
      piVar2 = (int *)(**(code **)(*param_1 + 0xfc))();
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x10))(apvStack_2c);
      FUN_004036d0(&local_4c,(wchar_t *)*puVar3,puVar3[1]);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
    }
    else {
      FUN_004036d0(&local_4c,(wchar_t *)param_1[0xd1],param_1[0xd2]);
    }
    if (param_1[0xd2] == 0) {
      piVar2 = (int *)(**(code **)(*param_2 + 0xfc))();
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x10))(apvStack_2c);
      FUN_004036d0(&local_6c,(wchar_t *)*puVar3,puVar3[1]);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
    }
    else {
      FUN_004036d0(&local_6c,(wchar_t *)param_2[0xd1],param_2[0xd2]);
    }
    iVar4 = _wcscmp(local_4c,local_6c);
    bVar5 = iVar4 < 0;
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return bVar5;
}


//// FUNCTION FUN_00683df0 @ 00683df0 ////

void __thiscall FUN_00683df0(void *this,wchar_t *param_1,uint param_2,uint param_3)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  uint uVar3;
  wchar_t local_2c [6];
  undefined *puStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc6508;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x344) != 0) {
    pwVar1 = local_2c;
    local_2c[0] = L'\0';
    uVar2 = 0;
    uVar3 = 10;
    ExceptionList = &local_c;
    FUN_004036d0(&stack0xffffffc8,param_1,param_2);
    FUN_005f1f40(*(void **)((int)this + 0x344),pwVar1,uVar2,uVar3);
  }
  if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
    puStack_20 = &UNK_00683e5c;
    _free(param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00683eb0 @ 00683eb0 ////

void __thiscall FUN_00683eb0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d3709c;
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


//// FUNCTION FUN_00683f00 @ 00683f00 ////

void __fastcall FUN_00683f00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3709c;
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


//// FUNCTION FUN_00683f90 @ 00683f90 ////

void __cdecl FUN_00683f90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return;
}


//// FUNCTION FUN_00684020 @ 00684020 ////

undefined4 * __thiscall FUN_00684020(void *this,byte param_1)

{
  FUN_00683f00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00684040 @ 00684040 ////

void __cdecl FUN_00684040(int *param_1,int *param_2)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc6528;
  pvStack_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_10 = param_1[5];
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d3709c;
  ExceptionList = &pvStack_c;
  if (local_10 != 0) {
    local_1c = (int *)(local_10 + 0x18);
    local_20 = *local_1c;
    ExceptionList = &pvStack_c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  (**(code **)(*param_1 + 4))();
  param_1[5] = param_2[5];
  (**(code **)*param_1)();
  (**(code **)(*param_2 + 4))();
  param_2[5] = local_10;
  (**(code **)*param_2)();
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00684110 @ 00684110 ////

void __cdecl
FUN_00684110(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined *param_10)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc6548;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    iVar1 = param_1 + iVar4 * 0x18;
    cVar3 = (*(code *)param_10)(*(undefined4 *)(iVar1 + 0x14),param_9);
    if (cVar3 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
    (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
    puVar2[5] = *(undefined4 *)(iVar1 + 0x14);
    (**(code **)*puVar2)();
    param_2 = iVar4;
  }
  puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
  (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
  puVar2[5] = param_9;
  (**(code **)*puVar2)();
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006841e0 @ 006841e0 ////

void __cdecl FUN_006841e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc6568;
  local_c = ExceptionList;
  iVar1 = (param_3 - param_1) / 0x18;
  iVar2 = (param_2 - param_1) / 0x18;
  iVar5 = iVar2;
  local_38 = iVar1;
  while (iVar3 = iVar5, iVar3 != 0) {
    iVar5 = local_38 % iVar3;
    local_38 = iVar3;
  }
  if ((local_38 < iVar1) && (0 < local_38)) {
    piVar8 = (int *)(param_1 + local_38 * 0x18);
    param_2 = iVar2 * 0x18;
    ExceptionList = &local_c;
    do {
      local_18 = &local_24;
      iVar1 = param_2 + (int)piVar8;
      local_20 = 0;
      local_1c = (int *)0x0;
      local_24 = &PTR_LAB_00d3709c;
      local_10 = *(int *)(iVar2 * -0x18 + 0x14 + iVar1);
      if (local_10 != 0) {
        local_1c = (int *)(local_10 + 0x18);
        local_20 = *local_1c;
        *(int **)(*local_1c + 4) = &local_20;
        *local_1c = (int)&local_20;
      }
      local_4 = 0;
      if (iVar1 == param_3) {
        piVar7 = &param_1;
      }
      else {
        iStack_30 = iVar1;
        piVar7 = &iStack_30;
      }
      piVar6 = (int *)*piVar7;
      piVar7 = piVar8;
      while (piVar4 = piVar6, piVar4 != piVar8) {
        (**(code **)(*piVar7 + 4))();
        piVar7[5] = piVar4[5];
        (**(code **)*piVar7)();
        iVar1 = (param_3 - (int)piVar4) / 0x18;
        if (iVar2 < iVar1) {
          iStack_2c = param_2 + (int)piVar4;
          piVar7 = &iStack_2c;
        }
        else {
          iStack_28 = param_1 + (iVar2 - iVar1) * 0x18;
          piVar7 = &iStack_28;
        }
        piVar6 = (int *)*piVar7;
        piVar7 = piVar4;
      }
      (**(code **)(*piVar7 + 4))();
      piVar7[5] = local_10;
      (**(code **)*piVar7)();
      if (local_1c != (int *)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != 0) {
        *(int **)(local_20 + 4) = local_1c;
      }
      piVar8 = piVar8 + -6;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006843c0 @ 006843c0 ////

void __fastcall FUN_006843c0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc65a4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d370c4;
  param_1[0x14] = &PTR_LAB_00d370ac;
  local_4 = 2;
  if ((undefined4 *)param_1[0xd1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd1])(1);
  }
  param_1[0xd1] = 0;
  if (0x14 < (uint)param_1[0xdb]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd9]);
  }
  param_1[0xd3] = &PTR_FUN_00d18c5c;
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
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006844c0 @ 006844c0 ////

void __fastcall FUN_006844c0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 **ppuVar4;
  char **ppcVar5;
  char *local_a0;
  undefined4 local_9c;
  uint local_98;
  char local_94 [20];
  char *local_80;
  undefined4 local_7c;
  uint local_78;
  char local_74 [20];
  undefined4 local_60 [3];
  char *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48 [20];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc65f1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00989400(local_60);
  local_a0 = local_94;
  local_4 = 0;
  local_94[0] = '\0';
  local_9c = 0;
  local_98 = 0x40;
  local_a0 = _malloc(0x40);
  _strncpy(local_a0,"data/2dpicker/costume_timegap.csv",0x21);
  local_9c = 0x21;
  local_a0[0x21] = '\0';
  local_4._0_1_ = 1;
  uVar2 = FUN_009d3660(&local_a0,(uint *)0x0);
  if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  if ((char)uVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x38c) = 10;
  }
  else {
    local_54 = local_48;
    local_48[0] = '\0';
    local_50 = 0;
    local_4c = 0x14;
    _strncpy(local_54,"",0);
    local_50 = 0;
    *local_54 = '\0';
    local_34 = 0;
    local_30 = 0;
    local_a0 = local_94;
    local_94[0] = '\0';
    local_9c = 0;
    local_98 = 0x40;
    local_a0 = _malloc(0x40);
    _strncpy(local_a0,"data/2dpicker/costume_timegap.csv",0x21);
    local_9c = 0x21;
    local_a0[0x21] = '\0';
    local_4._0_1_ = 3;
    bVar1 = FUN_00553a50(&local_54,&local_a0);
    if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0);
    }
    if (bVar1) {
      local_a0 = local_94;
      local_94[0] = '\0';
      local_9c = 0;
      local_98 = 0x14;
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0x14;
      local_4._0_1_ = 5;
      FUN_00552520(&local_54,&local_a0);
      puVar3 = FUN_0056ac50(&local_80,&local_a0);
      FUN_004015d0(&local_2c,(char *)*puVar3,puVar3[1]);
      if (0x14 < local_78) {
                    /* WARNING: Subroutine does not return */
        _free(local_80);
      }
      local_80 = local_74;
      local_74[0] = '\0';
      local_7c = 0;
      local_78 = 0x14;
      _strncpy(local_80,"ViewFutureGap",0xd);
      ppcVar5 = &local_80;
      ppuVar4 = &local_2c;
      local_7c = 0xd;
      local_80[0xd] = '\0';
      uVar2 = FUN_00401ec0(ppuVar4,ppcVar5);
      if (0x14 < local_78) {
                    /* WARNING: Subroutine does not return */
        _free(local_80);
      }
      if ((char)uVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x38c) = 10;
      }
      else {
        puVar3 = FUN_0056ac50(&local_80,&local_a0);
        local_4._0_1_ = 6;
        uVar2 = FUN_00567d80(puVar3);
        if (0x14 < local_78) {
                    /* WARNING: Subroutine does not return */
          _free(local_80);
        }
        *(undefined4 *)(param_1 + 0x38c) = uVar2;
      }
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
        _free(local_a0);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x38c) = 10;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00552ce0(&local_54);
  }
  local_4 = 0xffffffff;
  FUN_00989410(local_60);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00684860 @ 00684860 ////

void __cdecl FUN_00684860(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_00684040(param_2,param_1);
  }
  cVar1 = (*(code *)param_4)(param_3[5],param_2[5]);
  if (cVar1 != '\0') {
    FUN_00684040(param_3,param_2);
  }
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_00684040(param_2,param_1);
  }
  return;
}


//// FUNCTION FUN_006848d0 @ 006848d0 ////

void __cdecl
FUN_006848d0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_stack_ffffffd4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc6608;
  local_4 = 0;
  iVar4 = param_2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    in_stack_ffffffd4 = 0x684923;
    cVar2 = (*(code *)param_10)();
    if (cVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    piVar5 = (int *)(param_1 + iVar4 * 0x18);
    (**(code **)(*piVar5 + 4))();
    piVar5[5] = *(int *)(param_1 + iVar3 * 0x18 + 0x14);
    (**(code **)*piVar5)();
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0x18);
    (**(code **)(*(int *)(param_1 + iVar4 * 0x18) + 4))();
    puVar1[5] = *(undefined4 *)(param_1 + param_3 * 0x18 + -4);
    (**(code **)*puVar1)();
    iVar4 = param_3 + -1;
  }
  iVar3 = 0;
  piVar5 = (int *)0x0;
  if (param_9 != 0) {
    piVar5 = (int *)(param_9 + 0x18);
    iVar3 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffffc8;
    *piVar5 = (int)&stack0xffffffc8;
  }
  FUN_00684110(param_1,iVar4,param_2,&PTR_LAB_00d3709c,iVar3,piVar5,&stack0xffffffc4,
               in_stack_ffffffd4,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00684a30 @ 00684a30 ////

void __cdecl
FUN_00684a30(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_ffffffe0;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc6628;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_3 + 4))();
  param_3[5] = *(int *)(param_1 + 0x14);
  (**(code **)*param_3)();
  iVar1 = 0;
  piVar2 = (int *)0x0;
  if (param_9 != 0) {
    piVar2 = (int *)(param_9 + 0x18);
    iVar1 = *piVar2;
    *(undefined1 **)(*piVar2 + 4) = &stack0xffffffd4;
    *piVar2 = (int)&stack0xffffffd4;
  }
  FUN_006848d0(param_1,0,(param_2 - param_1) / 0x18,&PTR_LAB_00d3709c,iVar1,piVar2,&stack0xffffffd0,
               in_stack_ffffffe0,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00684b10 @ 00684b10 ////

undefined4 * __thiscall FUN_00684b10(void *this,byte param_1)

{
  FUN_006843c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00684b60 @ 00684b60 ////

void __cdecl FUN_00684b60(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d3709c;
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


//// FUNCTION FUN_00684bd0 @ 00684bd0 ////

void __cdecl FUN_00684bd0(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00684860(param_1,param_1 + iVar1 * 6,param_1 + iVar1 * 0xc,param_4);
    FUN_00684860(param_2 + iVar1 * -6,param_2,param_2 + iVar1 * 6,param_4);
    FUN_00684860(param_3 + iVar1 * -0xc,param_3 + iVar1 * -6,param_3,param_4);
    FUN_00684860(param_1 + iVar1 * 6,param_2,param_3 + iVar1 * -6,param_4);
    return;
  }
  FUN_00684860(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_00684c80 @ 00684c80 ////

void __cdecl FUN_00684c80(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_stack_ffffffe4;
  
  iVar2 = (param_2 - param_1) / 0x18;
  iVar3 = iVar2 / 2;
  if (0 < iVar3) {
    piVar4 = (int *)(param_1 + 0x14 + iVar3 * 0x18);
    do {
      iVar5 = 0;
      piVar6 = (int *)0x0;
      piVar4 = piVar4 + -6;
      iVar1 = *piVar4;
      iVar3 = iVar3 + -1;
      if (iVar1 != 0) {
        piVar6 = (int *)(iVar1 + 0x18);
        iVar5 = *piVar6;
        *(undefined1 **)(*piVar6 + 4) = &stack0xffffffd8;
        *piVar6 = (int)&stack0xffffffd8;
      }
      FUN_006848d0(param_1,iVar3,iVar2,&PTR_LAB_00d3709c,iVar5,piVar6,&stack0xffffffd4,
                   in_stack_ffffffe4,iVar1,param_3);
    } while (0 < iVar3);
  }
  return;
}


//// FUNCTION FUN_00684d50 @ 00684d50 ////

void __cdecl FUN_00684d50(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_ffffffec;
  
  iVar2 = 0;
  piVar3 = (int *)0x0;
  iVar1 = *(int *)(param_2 + -4);
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 0x18);
    iVar2 = *piVar3;
    *(undefined1 **)(*piVar3 + 4) = &stack0xffffffe0;
    *piVar3 = (int)&stack0xffffffe0;
  }
  FUN_00684a30(param_1,param_2 + -0x18,(int *)(param_2 + -0x18),&PTR_LAB_00d3709c,iVar2,piVar3,
               &stack0xffffffdc,in_stack_ffffffec,iVar1,param_3);
  return;
}


//// FUNCTION FUN_00684dc0 @ 00684dc0 ////

void __cdecl FUN_00684dc0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d3709c;
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


//// FUNCTION FUN_00684e90 @ 00684e90 ////

void __cdecl FUN_00684e90(undefined4 *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_8;
  int *local_4;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  FUN_00684bd0(param_2,piVar4,param_3 + -6,param_4);
  piStack_8 = piVar4;
  while (((param_2 < piStack_8 &&
          (cVar2 = (*(code *)param_4)(piStack_8[-1],piStack_8[5]), cVar2 == '\0')) &&
         (cVar2 = (*(code *)param_4)(piStack_8[5],piStack_8[-1]), cVar2 == '\0'))) {
    piStack_8 = piStack_8 + -6;
  }
  do {
    piVar4 = piVar4 + 6;
    piVar1 = piVar4;
    local_4 = piVar4;
    piVar5 = piStack_8;
    if ((param_3 <= piVar4) || (cVar2 = (*(code *)param_4)(piVar4[5],piStack_8[5]), cVar2 != '\0'))
    break;
    cVar2 = (*(code *)param_4)(piStack_8[5],piVar4[5]);
  } while (cVar2 == '\0');
joined_r0x00684f4a:
  do {
    if (param_3 <= piVar1) {
LAB_00684f94:
      if (param_2 < piStack_8) {
        piVar3 = piStack_8 + -1;
        do {
          cVar2 = (*(code *)param_4)(*piVar3,piVar5[5]);
          piVar4 = local_4;
          if (cVar2 == '\0') {
            cVar2 = (*(code *)param_4)(piVar5[5],*piVar3);
            if (cVar2 != '\0') break;
            piVar5 = piVar5 + -6;
            FUN_00684040(piVar5,piVar3 + -5);
          }
          piStack_8 = piStack_8 + -6;
          piVar3 = piVar3 + -6;
        } while (param_2 < piStack_8);
      }
      if (piStack_8 == param_2) {
        if (piVar1 == param_3) {
          *param_1 = piVar5;
          param_1[1] = piVar4;
          return;
        }
        if (piVar4 != piVar1) {
          FUN_00684040(piVar5,piVar4);
        }
        piVar4 = piVar4 + 6;
        FUN_00684040(piVar5,piVar1);
        piVar1 = piVar1 + 6;
        local_4 = piVar4;
        piVar5 = piVar5 + 6;
      }
      else {
        piStack_8 = piStack_8 + -6;
        if (piVar1 == param_3) {
          piVar5 = piVar5 + -6;
          if (piStack_8 != piVar5) {
            FUN_00684040(piStack_8,piVar5);
          }
          piVar4 = piVar4 + -6;
          FUN_00684040(piVar5,piVar4);
          local_4 = piVar4;
        }
        else {
          FUN_00684040(piVar1,piStack_8);
          piVar1 = piVar1 + 6;
        }
      }
      goto joined_r0x00684f4a;
    }
    cVar2 = (*(code *)param_4)(piVar5[5],piVar1[5]);
    local_4 = piVar4;
    if (cVar2 == '\0') {
      cVar2 = (*(code *)param_4)(piVar1[5],piVar5[5]);
      if (cVar2 != '\0') goto LAB_00684f94;
      local_4 = piVar4 + 6;
      FUN_00684040(piVar4,piVar1);
    }
    piVar4 = local_4;
    piVar1 = piVar1 + 6;
  } while( true );
}


//// FUNCTION FUN_006850e0 @ 006850e0 ////

void __cdecl FUN_006850e0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar2 = param_1;
  if (param_1 != param_2) {
    while (iVar3 = iVar2, iVar2 = iVar3 + 0x18, iVar2 != param_2) {
      cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(param_1 + 0x14));
      if (cVar4 == '\0') {
        cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar3 + 0x14));
        iVar1 = iVar2;
        if (cVar4 != '\0') {
          do {
            iVar5 = iVar1 + -0x18;
            cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar1 + -0x1c))
            ;
            iVar1 = iVar5;
          } while (cVar4 != '\0');
          if ((iVar5 != iVar2) && (iVar2 != iVar3 + 0x30)) {
            FUN_006841e0(iVar5,iVar2,iVar3 + 0x30);
          }
        }
      }
      else if ((param_1 != iVar2) && (iVar2 != iVar3 + 0x30)) {
        FUN_006841e0(param_1,iVar2,iVar3 + 0x30);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00685250 @ 00685250 ////

void __cdecl FUN_00685250(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (1 < iVar1 / 0x18) {
    FUN_00684d50(param_1,param_2,param_3);
    param_2 = param_2 + -0x18;
    iVar1 = param_2 - param_1;
  }
  return;
}


//// FUNCTION FUN_006852b0 @ 006852b0 ////

undefined4 * FUN_006852b0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00684dc0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_006852e0 @ 006852e0 ////

void FUN_006852e0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00683f00(param_1);
  }
  return;
}


//// FUNCTION FUN_00685310 @ 00685310 ////

void FUN_00685310(void)

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
  puStack_8 = &LAB_00cc6648;
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


//// FUNCTION FUN_00685380 @ 00685380 ////

void __cdecl FUN_00685380(int *param_1,int *param_2,int param_3,undefined *param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 / 0x18;
    if (iVar2 < 0x21) {
LAB_00685460:
      if (1 < iVar2) {
        FUN_006850e0((int)param_1,(int)param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < ((int)param_2 - (int)param_1) / 0x18) {
          FUN_00684c80((int)param_1,(int)param_2,param_4);
        }
        FUN_00685250((int)param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_00685460;
    }
    FUN_00684e90(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)local_8 - (int)param_1) / 0x18 < ((int)param_2 - (int)local_4) / 0x18) {
      FUN_00685380(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00685380(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_006854d0 @ 006854d0 ////

void __thiscall FUN_006854d0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cc6660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x15555555 < param_1) {
    ExceptionList = &local_10;
    FUN_00468760();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0xc;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 0xc);
    local_8 = 0;
    FUN_00683f90(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1 * 3;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00685610 @ 00685610 ////

void __fastcall FUN_00685610(int param_1)

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
    FUN_00683f00(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00685660 @ 00685660 ////

void __thiscall FUN_00685660(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cc6678;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d3709c;
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
      FUN_00685310();
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
        iVar3 = FUN_006836c0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_00684b60(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00684dc0(puVar5,param_2,(int)&local_34);
      FUN_00684b60((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_006852e0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_00684b60((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006852b0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00683b20(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_00684b60((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00683810((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00683b20(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_00685a00 @ 00685a00 ////

void __thiscall FUN_00685a00(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_00685a45;
    }
  }
  iVar1 = 0;
LAB_00685a45:
  FUN_00685660(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_00685a70 @ 00685a70 ////

void __thiscall FUN_00685a70(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00684dc0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_00685a00(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION CostumeList_BuildFilteredAndSorted @ 00685b00 ////

/* WARNING: Type propagation algorithm not settling */

void __fastcall CostumeList_BuildFilteredAndSorted(int param_1)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  void *pvVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  byte *pbVar17;
  int *piVar18;
  byte *pbVar19;
  undefined4 *_Memory;
  bool bVar20;
  bool bVar21;
  float10 fVar22;
  wchar_t *in_stack_fffffc04;
  void **ppvVar23;
  int iVar24;
  void *pvVar25;
  undefined4 *puStack_3c8;
  undefined4 *local_3c4;
  undefined4 *puStack_3c0;
  float fStack_3bc;
  int local_3b8;
  undefined1 *puStack_3b4;
  undefined ********ppppppppuStack_3b0;
  undefined4 *puStack_3ac;
  float *pfStack_3a8;
  undefined4 *******apppppppuStack_3a4 [2];
  int *piStack_39c;
  float fStack_390;
  undefined ********ppppppppuStack_38c;
  int iStack_388;
  int *piStack_384;
  undefined4 *******apppppppuStack_380 [2];
  int *piStack_378;
  undefined1 *puStack_36c;
  int iStack_368;
  uint uStack_364;
  undefined1 auStack_360 [20];
  float fStack_34c;
  byte *pbStack_348;
  undefined4 uStack_344;
  uint uStack_340;
  byte abStack_33c [20];
  undefined1 auStack_328 [4];
  int *piStack_324;
  int *piStack_320;
  undefined4 uStack_31c;
  wchar_t *pwStack_318;
  undefined4 uStack_314;
  uint uStack_310;
  undefined1 auStack_30c [20];
  void *pvStack_2f8;
  undefined4 uStack_2f4;
  void *apvStack_2f0 [2];
  uint uStack_2e8;
  void *apvStack_2d0 [2];
  uint uStack_2c8;
  void *apvStack_2b0 [2];
  uint uStack_2a8;
  void *apvStack_290 [2];
  uint uStack_288;
  void *apvStack_270 [2];
  uint uStack_268;
  void *apvStack_250 [2];
  uint uStack_248;
  void *apvStack_230 [2];
  uint uStack_228;
  undefined4 auStack_210 [15];
  uint uStack_1d4;
  undefined4 auStack_138 [18];
  int iStack_f0;
  int iStack_ec;
  undefined4 auStack_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Builds a filtered, sorted list of available costumes (.cos files under
                       data/costume/datas/) matching a category/context id at this+0x348, checking
                       gender/type compatibility (FUN_0042feb0), an age/weight-scaling ini override
                       (AGE/age, WEIGHT/weight keys read via the generic ini-reader family), and
                       mesh validity. Sorts the result via FUN_00685380 with comparator
                       FUN_00683c30. Very dense, multiple near-duplicate branches (three parallel
                       paths depending on category type: "extra" categories, normal costume/category
                       listing, and a direct-lookup fallback) -- not exhaustively traced, moderate
                       confidence on overall purpose. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc68d6;
  pvStack_c = ExceptionList;
  local_3c4 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  local_3b8 = param_1;
  (**(code **)(**(int **)(param_1 + 0x344) + 0x10))();
  piStack_324 = (int *)0x0;
  piStack_320 = (int *)0x0;
  uStack_31c = 0;
  uStack_4 = 0;
  if (*(int *)(param_1 + 0x368) == 0) {
    puVar10 = DAT_01050838;
    if (DAT_01050838 != &DAT_01050844) {
      do {
        cVar4 = FUN_00960f30(puVar10[2]);
        if ((cVar4 != '\0') &&
           (((iVar5 = (**(code **)(*(int *)puVar10[2] + 0x30))(), iVar5 != 0 &&
             (iVar6 = FUN_0042feb0(iVar5), iVar6 == *(int *)(param_1 + 0x348))) ||
            (iVar6 = FUN_0042feb0(iVar5), iVar6 == 2)))) {
          if (*(char *)(param_1 + 0x388) == '\0') {
            fStack_3bc = *(float *)(iVar5 + 0xa0);
            fVar22 = FUN_0043b710(&fStack_3bc);
            if ((float10)0.0 != fVar22) {
              fStack_3bc = *(float *)(iVar5 + 0xa0);
              uVar7 = FUN_0043b6a0(&fStack_3bc,(float *)&DAT_00e4fa4c);
              if ((char)uVar7 == '\0') goto LAB_00685cc2;
            }
          }
          puVar8 = operator_new(0x3cc);
          uStack_4._0_1_ = 1;
          puStack_3b4 = puVar8;
          if (puVar8 == (undefined1 *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            iVar24 = 0;
            cVar4 = '\0';
            iVar6 = FUN_00960f60(puVar10[2]);
            piVar9 = FUN_0066a570(puVar8,iVar5,iVar6,cVar4,iVar24);
          }
          apppppppuStack_3a4[0] = &ppppppppuStack_3b0;
          puStack_3ac = (undefined4 *)0x0;
          pfStack_3a8 = (float *)0x0;
          ppppppppuStack_3b0 = (undefined ********)&PTR_LAB_00d3709c;
          if (piVar9 != (int *)0x0) {
            pfStack_3a8 = (float *)(piVar9 + 6);
            puStack_3ac = (undefined4 *)*pfStack_3a8;
            *(undefined4 ***)((int)*pfStack_3a8 + 4) = &puStack_3ac;
            *pfStack_3a8 = (float)&puStack_3ac;
          }
          uStack_4._0_1_ = 2;
          piStack_39c = piVar9;
          FUN_00685a70(auStack_328,(int)&ppppppppuStack_3b0);
          uStack_4 = (uint)uStack_4._1_3_ << 8;
          FUN_00683f00(&ppppppppuStack_3b0);
          (**(code **)(*piVar9 + 0x18))();
          (**(code **)(*piVar9 + 0x18))();
        }
LAB_00685cc2:
        puVar10 = (undefined4 *)puVar10[1];
      } while (puVar10 != &DAT_01050844);
    }
  }
  else {
    puVar10 = (undefined4 *)(param_1 + 0x364);
    uVar7 = FUN_00479e80(puVar10,&PTR_DAT_00e56cf4);
    if ((((char)uVar7 == '\0') ||
        (uVar7 = FUN_00479e80(puVar10,&PTR_DAT_00e56d14), (char)uVar7 == '\0')) ||
       (uVar7 = FUN_00479e80(puVar10,&PTR_DAT_00e56d34), (char)uVar7 == '\0')) {
      uVar7 = FUN_00401ec0(puVar10,&PTR_DAT_00e56cf4);
      if ((char)uVar7 == '\0') {
        uVar7 = FUN_00401ec0(puVar10,&PTR_DAT_00e56d14);
        if ((char)uVar7 == '\0') {
          uVar7 = FUN_00401ec0(puVar10,&PTR_DAT_00e56d34);
          if ((char)uVar7 != '\0') {
            FUN_009c89a0(auStack_138);
            uStack_4._0_1_ = 0x24;
            FUN_009ca9d0(auStack_138,"*.ini","data\\costume\\category_extra",(undefined1 *)0x1);
            puStack_3c0 = (undefined4 *)0x0;
            while( true ) {
              if (iStack_f0 == 0) {
                iVar5 = 0;
              }
              else {
                iVar5 = iStack_ec - iStack_f0 >> 2;
              }
              if (iVar5 <= (int)puStack_3c0) break;
              pcVar12 = *(char **)(iStack_f0 + (int)puStack_3c0 * 4);
              pcVar16 = _strrchr(pcVar12,0x5c);
              pcVar14 = pcVar16 + 1;
              if (pcVar16 == (char *)0x0) {
                pcVar14 = pcVar12;
              }
              ppppppppuStack_3b0 = (undefined ********)apppppppuStack_3a4;
              apppppppuStack_3a4[0] = (undefined4 *******)((uint)apppppppuStack_3a4[0] & 0xffffff00)
              ;
              puStack_3ac = (undefined4 *)0x0;
              pfStack_3a8 = (float *)&DAT_00000014;
              pcVar12 = pcVar14;
              do {
                cVar4 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar4 != '\0');
              FUN_004015d0(&ppppppppuStack_3b0,pcVar14,(int)pcVar12 - (int)(pcVar14 + 1));
              pbStack_348 = abStack_33c;
              abStack_33c[0] = 0;
              uStack_344 = 0;
              uStack_340 = 0x14;
              _strncpy((char *)pbStack_348,"",0);
              uStack_344 = 0;
              *pbStack_348 = 0;
              pwStack_318 = (wchar_t *)auStack_30c;
              auStack_30c[0] = 0;
              uStack_314 = 0;
              uStack_310 = 0x14;
              _strncpy((char *)pwStack_318,".ini",4);
              uStack_314 = 4;
              *(char *)(pwStack_318 + 2) = '\0';
              uStack_4._0_1_ = 0x27;
              FUN_00569860((int *)&ppppppppuStack_3b0,&pwStack_318,&pbStack_348);
              if (0x14 < uStack_310) {
                    /* WARNING: Subroutine does not return */
                _free(pwStack_318);
              }
              uStack_4._0_1_ = 0x25;
              if (0x14 < uStack_340) {
                    /* WARNING: Subroutine does not return */
                _free(pbStack_348);
              }
              fStack_3bc = (float)FUN_00959a40(&ppppppppuStack_3b0);
              if (fStack_3bc == 0.0) {
                if (&DAT_00000014 < pfStack_3a8) {
                    /* WARNING: Subroutine does not return */
                  _free(ppppppppuStack_3b0);
                }
              }
              else {
                FUN_004335f0((int *)&puStack_3c8,&ppppppppuStack_3b0,2,0,1,0);
                uStack_4._0_1_ = 0x28;
                bVar20 = true;
                if (((DAT_0104daa0 != 0) && (DAT_0104da80 == 0)) &&
                   (cVar4 = FUN_00430e40((int)puStack_3c8), cVar4 != '\0')) {
                  bVar20 = false;
                }
                puVar10 = FUN_0040d6b0(apvStack_2b0,"data/costume/datas/",&ppppppppuStack_3b0);
                puVar10 = FUN_004312e0(apvStack_2f0,puVar10,".cos");
                pcVar12 = (char *)*puVar10;
                puStack_36c = auStack_360;
                auStack_360[0] = 0;
                iStack_368 = 0;
                uStack_364 = 0x14;
                pcVar14 = pcVar12;
                do {
                  cVar4 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                } while (cVar4 != '\0');
                FUN_004015d0(&puStack_36c,pcVar12,(int)pcVar14 - (int)(pcVar12 + 1));
                uStack_4._0_1_ = 0x2b;
                uVar13 = FUN_009d3720(&puStack_36c);
                if (0x14 < uStack_364) {
                    /* WARNING: Subroutine does not return */
                  _free(puStack_36c);
                }
                if (0x14 < uStack_2e8) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_2f0[0]);
                }
                uStack_4 = CONCAT31(uStack_4._1_3_,0x28);
                if (0x14 < uStack_2a8) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_2b0[0]);
                }
                if (uVar13 == 0) {
                  bVar20 = false;
                }
                cVar4 = FUN_00960f30(fStack_3bc);
                if (((cVar4 != '\0') && (bVar20)) &&
                   ((iVar6 = FUN_0042feb0((int)puStack_3c8), iVar5 = local_3b8,
                    iVar6 == *(int *)(local_3b8 + 0x348) ||
                    (iVar6 = FUN_0042feb0((int)puStack_3c8), iVar6 == 2)))) {
                  if (*(char *)(iVar5 + 0x388) == '\0') {
                    puStack_3b4 = (undefined1 *)puStack_3c8[0x28];
                    fVar22 = FUN_0043b710((float *)&puStack_3b4);
                    if ((float10)0.0 != fVar22) {
                      fStack_34c = (float)puStack_3c8[0x28];
                      uVar7 = FUN_0043b6a0(&fStack_34c,(float *)&DAT_00e4fa4c);
                      if ((char)uVar7 == '\0') goto LAB_006870bc;
                    }
                  }
                  pvVar11 = operator_new(0x3cc);
                  puVar10 = puStack_3c8;
                  uStack_4._0_1_ = 0x2c;
                  pvStack_2f8 = pvVar11;
                  if (pvVar11 == (void *)0x0) {
                    piVar9 = (int *)0x0;
                  }
                  else {
                    iVar6 = 0;
                    cVar4 = '\0';
                    iVar5 = FUN_00960f60((int)fStack_3bc);
                    piVar9 = FUN_0066a570(pvVar11,(int)puVar10,iVar5,cVar4,iVar6);
                  }
                  FUN_00683eb0(&ppppppppuStack_38c,(int)piVar9);
                  uStack_4._0_1_ = 0x2d;
                  FUN_00685a70(auStack_328,(int)&ppppppppuStack_38c);
                  uStack_4 = CONCAT31(uStack_4._1_3_,0x28);
                  FUN_00683f00(&ppppppppuStack_38c);
                  (**(code **)(*piVar9 + 0x18))();
                  (**(code **)(*piVar9 + 0x18))();
                }
LAB_006870bc:
                uStack_4._0_1_ = 0x25;
                if ((puStack_3c8 != (undefined4 *)0x0) &&
                   (iVar5 = puStack_3c8[0x12], puStack_3c8[0x12] = iVar5 + -1, iVar5 + -1 == 0)) {
                  (**(code **)*puStack_3c8)();
                }
                puStack_3c8 = (undefined4 *)0x0;
                if (&DAT_00000014 < pfStack_3a8) {
                    /* WARNING: Subroutine does not return */
                  _free(ppppppppuStack_3b0);
                }
              }
              puStack_3c0 = (undefined4 *)((int)puStack_3c0 + 1);
            }
            uStack_4 = (uint)uStack_4._1_3_ << 8;
            FUN_009c8560(auStack_138);
          }
        }
        else {
          puVar10 = (undefined4 *)0x0;
          puStack_3ac = (undefined4 *)0x0;
          pfStack_3a8 = (float *)0x0;
          apppppppuStack_3a4[0] = (undefined4 *******)0x0;
          uStack_4._0_1_ = 0x17;
          FUN_00559fb0(auStack_e4);
          ppppppppuStack_38c = (undefined ********)apppppppuStack_380;
          apppppppuStack_380[0] = (undefined4 *******)((uint)apppppppuStack_380[0] & 0xffffff00);
          iStack_388 = 0;
          piStack_384 = (int *)&DAT_00000014;
          _strncpy((char *)ppppppppuStack_38c,"costume/category",0x10);
          iStack_388 = 0x10;
          *(char *)(ppppppppuStack_38c + 4) = '\0';
          uStack_4 = CONCAT31(uStack_4._1_3_,0x19);
          local_3c4 = (undefined4 *)0x2;
          cVar4 = FUN_0055be10(auStack_e4,&ppppppppuStack_38c,'\x01');
          if ((cVar4 == '\0') || (cVar4 = FUN_00558bb0(auStack_e4,0), cVar4 == '\0')) {
            bVar20 = false;
          }
          else {
            bVar20 = true;
          }
          uStack_4 = 0x18;
          local_3c4 = (undefined4 *)0x0;
          if (&DAT_00000014 < piStack_384) {
                    /* WARNING: Subroutine does not return */
            _free(ppppppppuStack_38c);
          }
          if (bVar20) {
            do {
              ppppppppuStack_38c = (undefined ********)apppppppuStack_380;
              apppppppuStack_380[0] = (undefined4 *******)((uint)apppppppuStack_380[0] & 0xffffff00)
              ;
              iStack_388 = 0;
              piStack_384 = (int *)&DAT_00000014;
              _strncpy((char *)ppppppppuStack_38c,(char *)&PTR_DAT_00d35d2c,3);
              iStack_388 = 3;
              *(char *)((int)ppppppppuStack_38c + 3) = '\0';
              uStack_4._0_1_ = 0x1a;
              FUN_005584e0(auStack_e4,&puStack_36c,&ppppppppuStack_38c);
              uStack_4._0_1_ = 0x1c;
              if (&DAT_00000014 < piStack_384) {
                    /* WARNING: Subroutine does not return */
                _free(ppppppppuStack_38c);
              }
              if (iStack_368 != 0) {
                FUN_0043a2d0(&ppppppppuStack_3b0,&puStack_36c);
                puVar10 = puStack_3ac;
              }
              uStack_4 = CONCAT31(uStack_4._1_3_,0x18);
              if (0x14 < uStack_364) {
                    /* WARNING: Subroutine does not return */
                _free(puStack_36c);
              }
              cVar4 = FUN_00558bb0(auStack_e4,2);
            } while (cVar4 != '\0');
          }
          fStack_390 = 0.0;
          _Memory = puVar10;
          while( true ) {
            if (_Memory == (undefined4 *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = (int)pfStack_3a8 - (int)_Memory >> 5;
            }
            puStack_3c0 = puVar10;
            if (iVar5 <= (int)fStack_390) break;
            FUN_00559fb0(auStack_210);
            uStack_1d4 = uStack_1d4 & 0xfffffffb;
            pbStack_348 = abStack_33c;
            abStack_33c[0] = 0;
            uStack_344 = 0;
            uStack_340 = 0x14;
            FUN_004015d0(&pbStack_348,(char *)*puVar10,puVar10[1]);
            puVar10 = FUN_0040d6b0(apvStack_2f0,"costume/",&pbStack_348);
            local_3c4 = (undefined4 *)((uint)local_3c4 | 4);
            uStack_4 = CONCAT31(uStack_4._1_3_,0x1f);
            cVar4 = FUN_0055be10(auStack_210,puVar10,'\x01');
            if ((cVar4 == '\0') || (uVar7 = FUN_00558120(auStack_210,0), (char)uVar7 == '\0')) {
              bVar20 = false;
            }
            else {
              bVar20 = true;
            }
            uStack_4 = 0x1e;
            if ((((uint)local_3c4 & 4) != 0) &&
               (local_3c4 = (undefined4 *)((uint)local_3c4 & 0xfffffffb), 0x14 < uStack_2e8)) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_2f0[0]);
            }
            iVar5 = local_3b8;
            if (bVar20) {
              do {
                FUN_00558de0(auStack_210,&puStack_36c);
                uStack_4._0_1_ = 0x20;
                iVar6 = FUN_00959a40(&puStack_36c);
                if (iVar6 != 0) {
                  bVar20 = true;
                  uVar13 = (uint)fStack_3bc >> 8;
                  fStack_3bc = (float)((uint)fStack_3bc & 0xffffff00);
                  pbVar17 = pbStack_348;
                  pbVar19 = PTR_DAT_00e56d54;
                  do {
                    bVar2 = *pbVar17;
                    bVar21 = bVar2 < *pbVar19;
                    if (bVar2 != *pbVar19) {
LAB_00686984:
                      iVar24 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                      goto LAB_00686989;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar17[1];
                    bVar21 = bVar2 < pbVar19[1];
                    if (bVar2 != pbVar19[1]) goto LAB_00686984;
                    pbVar17 = pbVar17 + 2;
                    pbVar19 = pbVar19 + 2;
                  } while (bVar2 != 0);
                  iVar24 = 0;
LAB_00686989:
                  if (iVar24 == 0) {
                    fStack_3bc = (float)CONCAT31((int3)uVar13,1);
                  }
                  FUN_004335f0((int *)&puStack_3c8,&puStack_36c,2,0,0,SUB41(fStack_3bc,0));
                  uStack_4 = CONCAT31(uStack_4._1_3_,0x21);
                  if (iVar24 == 0) {
                    uStack_2f4 = puStack_3c8[0x27];
                    uVar7 = FUN_0043b680(&uStack_2f4,(float *)&DAT_00e4fa4c);
                    if ((char)uVar7 != '\0') {
                      bVar20 = false;
                    }
                  }
                  if (((DAT_0104daa0 != 0) && (DAT_0104da80 == 0)) &&
                     (cVar4 = FUN_00430e40((int)puStack_3c8), cVar4 != '\0')) {
                    bVar20 = false;
                  }
                  cVar4 = FUN_00960f30(iVar6);
                  if (((cVar4 != '\0') && (bVar20)) &&
                     ((iVar24 = FUN_0042feb0((int)puStack_3c8), iVar24 == *(int *)(iVar5 + 0x348) ||
                      (iVar24 = FUN_0042feb0((int)puStack_3c8), iVar24 == 2)))) {
                    if (*(char *)(iVar5 + 0x388) == '\0') {
                      fStack_34c = (float)puStack_3c8[0x28];
                      fVar22 = FUN_0043b710(&fStack_34c);
                      if ((float10)0.0 != fVar22) {
                        puStack_3b4 = (undefined1 *)puStack_3c8[0x28];
                        uVar7 = FUN_0043b6a0(&puStack_3b4,(float *)&DAT_00e4fa4c);
                        if ((char)uVar7 == '\0') goto LAB_00686b7b;
                      }
                    }
                    pvVar11 = operator_new(0x3cc);
                    puVar10 = puStack_3c8;
                    uStack_4._0_1_ = 0x22;
                    pvStack_2f8 = pvVar11;
                    if (pvVar11 == (void *)0x0) {
                      piVar9 = (int *)0x0;
                    }
                    else {
                      iVar24 = 0;
                      cVar4 = '\0';
                      iVar5 = FUN_00960f60(iVar6);
                      piVar9 = FUN_0066a570(pvVar11,(int)puVar10,iVar5,cVar4,iVar24);
                    }
                    apppppppuStack_380[0] = &ppppppppuStack_38c;
                    iStack_388 = 0;
                    piStack_384 = (int *)0x0;
                    ppppppppuStack_38c = (undefined ********)&PTR_LAB_00d3709c;
                    if (piVar9 != (int *)0x0) {
                      piStack_384 = piVar9 + 6;
                      iStack_388 = *piStack_384;
                      *(int **)(*piStack_384 + 4) = &iStack_388;
                      *piStack_384 = (int)&iStack_388;
                    }
                    uStack_4._0_1_ = 0x23;
                    piStack_378 = piVar9;
                    FUN_00685a70(auStack_328,(int)&ppppppppuStack_38c);
                    uStack_4 = CONCAT31(uStack_4._1_3_,0x21);
                    FUN_00683f00(&ppppppppuStack_38c);
                    (**(code **)(*piVar9 + 0x18))();
                    (**(code **)(*piVar9 + 0x18))();
                    iVar5 = local_3b8;
                  }
LAB_00686b7b:
                  uStack_4._0_1_ = 0x20;
                  if ((puStack_3c8 != (undefined4 *)0x0) &&
                     (iVar6 = puStack_3c8[0x12], puStack_3c8[0x12] = iVar6 + -1, iVar6 + -1 == 0)) {
                    (**(code **)*puStack_3c8)();
                  }
                  puStack_3c8 = (undefined4 *)0x0;
                }
                uStack_4 = CONCAT31(uStack_4._1_3_,0x1e);
                if (0x14 < uStack_364) {
                    /* WARNING: Subroutine does not return */
                  _free(puStack_36c);
                }
                uVar7 = FUN_00558120(auStack_210,2);
              } while ((char)uVar7 != '\0');
            }
            FUN_00557af0((int)auStack_210);
            if (0x14 < uStack_340) {
                    /* WARNING: Subroutine does not return */
              _free(pbStack_348);
            }
            uStack_4 = CONCAT31(uStack_4._1_3_,0x18);
            FUN_00558920(auStack_210);
            puVar10 = puStack_3c0 + 8;
            fStack_390 = (float)((int)fStack_390 + 1);
            _Memory = puStack_3ac;
          }
          uStack_4._0_1_ = 0x17;
          FUN_00558920(auStack_e4);
          uStack_4 = (uint)uStack_4._1_3_ << 8;
          if (_Memory != (undefined4 *)0x0) {
            FUN_00405fe0(_Memory,pfStack_3a8);
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
        }
      }
      else {
        FUN_0070e070();
        local_3c4 = DAT_0105ea84;
        puVar10 = DAT_0105ea84;
        if (DAT_0105ea84 != (undefined4 *)0x0) {
          while (local_3c4 = puVar10, puVar10 != (undefined4 *)0x0) {
            pvVar11 = (void *)FUN_009d0b40(puVar10);
            if (pvVar11 == (void *)0x0) {
              puVar10 = (undefined4 *)puVar10[9];
            }
            else {
              ppppppppuStack_3b0 = (undefined ********)apppppppuStack_3a4;
              apppppppuStack_3a4[0] = (undefined4 *******)((uint)apppppppuStack_3a4[0] & 0xffffff00)
              ;
              puStack_3ac = (undefined4 *)0x0;
              pfStack_3a8 = (float *)&DAT_00000014;
              pcVar12 = (char *)((int)pvVar11 + 0x80);
              do {
                cVar4 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar4 != '\0');
              FUN_004015d0(&ppppppppuStack_3b0,(char *)((int)pvVar11 + 0x80),
                           (int)pcVar12 - ((int)pvVar11 + 0x81));
              uStack_4._0_1_ = 9;
              uVar13 = FUN_00448220(&ppppppppuStack_3b0,&DAT_00d1a3f0,0,1);
              puVar10 = FUN_00430770(&ppppppppuStack_3b0,apvStack_230,0,uVar13);
              FUN_004015d0(&ppppppppuStack_3b0,(char *)*puVar10,puVar10[1]);
              if (0x14 < uStack_228) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_230[0]);
              }
              FUN_004335f0((int *)&puStack_3c8,&ppppppppuStack_3b0,2,0,0,0);
              uStack_4 = CONCAT31(uStack_4._1_3_,10);
              FUN_004306b0(puStack_3c8,pvVar11,&ppppppppuStack_3b0);
              FUN_009cfb00(pvVar11);
              puStack_3c0 = (undefined4 *)FUN_00959a40(puStack_3c8 + 0x1e);
              bVar20 = true;
              if (((DAT_0104daa0 != 0) && (DAT_0104da80 == 0)) &&
                 (cVar4 = FUN_00430e40((int)puStack_3c8), cVar4 != '\0')) {
                bVar20 = false;
              }
              puVar10 = FUN_0040d6b0(apvStack_2f0,"data/costume/datas/",&ppppppppuStack_3b0);
              ppvVar23 = apvStack_2b0;
              uVar13 = 0x6861d9;
              puVar10 = FUN_004312e0(ppvVar23,puVar10,".cos");
              pcVar12 = (char *)*puVar10;
              pbStack_348 = abStack_33c;
              abStack_33c[0] = 0;
              uStack_344 = 0;
              uStack_340 = 0x14;
              pcVar14 = pcVar12;
              do {
                cVar4 = *pcVar14;
                pcVar14 = pcVar14 + 1;
              } while (cVar4 != '\0');
              FUN_004015d0(&pbStack_348,pcVar12,(int)pcVar14 - (int)(pcVar12 + 1));
              uStack_4._0_1_ = 0xd;
              uVar15 = FUN_009d3720(&pbStack_348);
              if (0x14 < uStack_340) {
                    /* WARNING: Subroutine does not return */
                _free(pbStack_348);
              }
              if (0x14 < uStack_2a8) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_2b0[0]);
              }
              uStack_4 = CONCAT31(uStack_4._1_3_,10);
              if (0x14 < uStack_2e8) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_2f0[0]);
              }
              if (uVar15 == 0) {
                bVar20 = false;
              }
              iVar5 = FUN_0042feb0((int)puStack_3c8);
              if ((((iVar5 == *(int *)(local_3b8 + 0x348)) ||
                   (iVar5 = FUN_0042feb0((int)puStack_3c8), iVar5 == 2)) &&
                  (cVar4 = FUN_00960f30(puStack_3c0), cVar4 != '\0')) && (bVar20)) {
                pvVar11 = (void *)FUN_009d05b0(local_3c4);
                puVar8 = operator_new(0x3cc);
                puVar10 = puStack_3c8;
                uStack_4._0_1_ = 0xe;
                if (puVar8 == (undefined1 *)0x0) {
                  piVar9 = (int *)0x0;
                }
                else {
                  cVar4 = '\x01';
                  pvVar25 = pvVar11;
                  puStack_3b4 = puVar8;
                  iVar5 = FUN_00960f60((int)puStack_3c0);
                  piVar9 = FUN_0066a570(puVar8,(int)puVar10,iVar5,cVar4,(int)pvVar25);
                }
                puVar10 = local_3c4;
                puStack_3b4 = &stack0xfffffc04;
                uStack_4._0_1_ = 10;
                FUN_00421290(&stack0xfffffc04,local_3c4);
                FUN_00683bc0(piVar9,in_stack_fffffc04,uVar13,(uint)ppvVar23);
                FUN_009d0530(&pwStack_318);
                uStack_4._0_1_ = 0xf;
                FUN_0040cae0(&pwStack_318,(wchar_t *)*puVar10,puVar10[1]);
                FUN_0040d3c0(&pwStack_318,L".ini");
                FUN_009ad040(&puStack_36c,pwStack_318);
                uStack_4._0_1_ = 0x10;
                uVar7 = FUN_009d3660(&puStack_36c,(uint *)0x0);
                if (((char)uVar7 != '\0') && (DAT_0104d8e8 != 0)) {
                  puStack_3b4 = operator_new(0xd8);
                  uStack_4._0_1_ = 0x11;
                  if (puStack_3b4 == (undefined1 *)0x0) {
                    puVar10 = (undefined4 *)0x0;
                  }
                  else {
                    puVar10 = FUN_0055c870(puStack_3b4,'\x01',&puStack_36c,0);
                  }
                  uStack_4._0_1_ = 0x10;
                  FUN_0055bd40(puVar10,&puStack_36c);
                  FUN_00401de0(apvStack_270,"AGE",0xffffffff);
                  uStack_4._0_1_ = 0x12;
                  FUN_00558a50(puVar10,apvStack_270,(undefined4 *)0x1);
                  if (0x14 < uStack_268) {
                    /* WARNING: Subroutine does not return */
                    _free(apvStack_270[0]);
                  }
                  FUN_00401de0(apvStack_290,"age",0xffffffff);
                  uStack_4._0_1_ = 0x13;
                  fVar22 = FUN_00558610(puVar10,apvStack_290,0.0);
                  fStack_3bc = (float)fVar22;
                  if (0x14 < uStack_288) {
                    /* WARNING: Subroutine does not return */
                    _free(apvStack_290[0]);
                  }
                  FUN_00401de0(apvStack_250,"WEIGHT",0xffffffff);
                  uStack_4._0_1_ = 0x14;
                  FUN_00558a50(puVar10,apvStack_250,(undefined4 *)0x1);
                  if (0x14 < uStack_248) {
                    /* WARNING: Subroutine does not return */
                    _free(apvStack_250[0]);
                  }
                  FUN_00401de0(apvStack_2d0,"weight",0xffffffff);
                  uStack_4._0_1_ = 0x15;
                  fVar22 = FUN_00558610(puVar10,apvStack_2d0,0.0);
                  puStack_3c0 = (undefined4 *)(float)fVar22;
                  uStack_4._0_1_ = 0x10;
                  if (0x14 < uStack_2c8) {
                    /* WARNING: Subroutine does not return */
                    _free(apvStack_2d0[0]);
                  }
                  FUN_0042ff20(puStack_3c8,fStack_3bc);
                  FUN_0042ff10(puStack_3c8,puStack_3c0);
                }
                if (pvVar11 != (void *)0x0) {
                  FUN_0099b400(pvVar11);
                }
                FUN_00683eb0(&ppppppppuStack_38c,(int)piVar9);
                uStack_4._0_1_ = 0x16;
                FUN_00685a70(auStack_328,(int)&ppppppppuStack_38c);
                uStack_4 = CONCAT31(uStack_4._1_3_,0x10);
                FUN_00683f00(&ppppppppuStack_38c);
                (**(code **)(*piVar9 + 0x18))();
                in_stack_fffffc04 = (wchar_t *)0x5;
                (**(code **)(*piVar9 + 0x18))();
                if (0x14 < uStack_364) {
                    /* WARNING: Subroutine does not return */
                  _free(puStack_36c);
                }
                if (10 < uStack_310) {
                    /* WARNING: Subroutine does not return */
                  _free(pwStack_318);
                }
              }
              local_3c4 = (undefined4 *)local_3c4[9];
              uStack_4._0_1_ = 9;
              if ((puStack_3c8 != (undefined4 *)0x0) &&
                 (iVar5 = puStack_3c8[0x12], puStack_3c8[0x12] = iVar5 + -1, iVar5 + -1 == 0)) {
                (**(code **)*puStack_3c8)();
              }
              puStack_3c8 = (undefined4 *)0x0;
              uStack_4 = (uint)uStack_4._1_3_ << 8;
              puVar10 = local_3c4;
              if (&DAT_00000014 < pfStack_3a8) {
                    /* WARNING: Subroutine does not return */
                _free(ppppppppuStack_3b0);
              }
            }
          }
        }
      }
    }
    else {
      FUN_00559fb0(auStack_210);
      uStack_1d4 = uStack_1d4 & 0xfffffffb;
      puVar10 = FUN_0040d6b0(apvStack_2d0,"costume/",puVar10);
      uStack_4 = CONCAT31(uStack_4._1_3_,4);
      local_3c4 = (undefined4 *)0x1;
      cVar4 = FUN_0055be10(auStack_210,puVar10,'\x01');
      if ((cVar4 == '\0') || (uVar7 = FUN_00558120(auStack_210,0), (char)uVar7 == '\0')) {
        bVar20 = false;
      }
      else {
        bVar20 = true;
      }
      uStack_4 = 3;
      if (0x14 < uStack_2c8) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2d0[0]);
      }
      iVar5 = local_3b8;
      if (bVar20) {
        do {
          FUN_00558de0(auStack_210,&puStack_36c);
          uStack_4._0_1_ = 5;
          iVar6 = FUN_00959a40(&puStack_36c);
          if (iVar6 != 0) {
            puStack_3c0 = (undefined4 *)((uint)puStack_3c0 & 0xffffff00);
            bVar20 = true;
            uVar7 = FUN_00401ec0((undefined4 *)(iVar5 + 0x364),&PTR_DAT_00e56d54);
            bVar21 = (char)uVar7 != '\0';
            if (bVar21) {
              puStack_3c0 = (undefined4 *)CONCAT31(puStack_3c0._1_3_,1);
            }
            FUN_004335f0((int *)&puStack_3c8,&puStack_36c,2,0,0,(char)puStack_3c0);
            uStack_4 = CONCAT31(uStack_4._1_3_,6);
            if (bVar21) {
              fStack_3bc = (float)puStack_3c8[0x27];
              uVar7 = FUN_0043b680(&fStack_3bc,(float *)&DAT_00e4fa4c);
              if ((char)uVar7 != '\0') {
                bVar20 = false;
              }
            }
            if (((DAT_0104daa0 != 0) && (DAT_0104da80 == 0)) &&
               (cVar4 = FUN_00430e40((int)puStack_3c8), cVar4 != '\0')) {
              bVar20 = false;
            }
            cVar4 = FUN_00960f30(iVar6);
            if (((cVar4 != '\0') && (bVar20)) &&
               ((iVar24 = FUN_0042feb0((int)puStack_3c8), iVar24 == *(int *)(iVar5 + 0x348) ||
                (iVar24 = FUN_0042feb0((int)puStack_3c8), iVar24 == 2)))) {
              if (*(char *)(iVar5 + 0x388) == '\0') {
                fStack_390 = (float)puStack_3c8[0x28];
                fVar22 = FUN_0043b710(&fStack_390);
                if ((float10)0.0 != fVar22) {
                  local_3c4 = (undefined4 *)puStack_3c8[0x28];
                  uVar7 = FUN_0043b6a0(&local_3c4,(float *)&DAT_00e4fa4c);
                  if ((char)uVar7 == '\0') goto LAB_00685fe2;
                }
              }
              puVar8 = operator_new(0x3cc);
              puVar10 = puStack_3c8;
              uStack_4._0_1_ = 7;
              puStack_3b4 = puVar8;
              if (puVar8 == (undefined1 *)0x0) {
                piVar9 = (int *)0x0;
              }
              else {
                iVar24 = 0;
                cVar4 = '\0';
                iVar5 = FUN_00960f60(iVar6);
                piVar9 = FUN_0066a570(puVar8,(int)puVar10,iVar5,cVar4,iVar24);
              }
              FUN_00683eb0(&ppppppppuStack_38c,(int)piVar9);
              uStack_4._0_1_ = 8;
              FUN_00685a70(auStack_328,(int)&ppppppppuStack_38c);
              uStack_4 = CONCAT31(uStack_4._1_3_,6);
              FUN_00683f00(&ppppppppuStack_38c);
              (**(code **)(*piVar9 + 0x18))();
              (**(code **)(*piVar9 + 0x18))();
              iVar5 = local_3b8;
            }
LAB_00685fe2:
            uStack_4._0_1_ = 5;
            if ((puStack_3c8 != (undefined4 *)0x0) &&
               (iVar6 = puStack_3c8[0x12], puStack_3c8[0x12] = iVar6 + -1, iVar6 + -1 == 0)) {
              (**(code **)*puStack_3c8)();
            }
            puStack_3c8 = (undefined4 *)0x0;
          }
          uStack_4 = CONCAT31(uStack_4._1_3_,3);
          if (0x14 < uStack_364) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_36c);
          }
          uVar7 = FUN_00558120(auStack_210,2);
        } while ((char)uVar7 != '\0');
      }
      uStack_4 = uStack_4 & 0xffffff00;
      FUN_00558920(auStack_210);
    }
  }
  piVar3 = piStack_320;
  piVar9 = piStack_324;
  pbVar17 = *(byte **)(local_3b8 + 0x364);
  pbVar19 = PTR_DAT_00e56d14;
  do {
    bVar2 = *pbVar17;
    bVar20 = bVar2 < *pbVar19;
    if (bVar2 != *pbVar19) {
LAB_00687158:
      iVar5 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
      goto LAB_0068715d;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar17[1];
    bVar20 = bVar2 < pbVar19[1];
    if (bVar2 != pbVar19[1]) goto LAB_00687158;
    pbVar17 = pbVar17 + 2;
    pbVar19 = pbVar19 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_0068715d:
  if (iVar5 != 0) {
    FUN_00685380(piStack_324,piStack_320,((int)piStack_320 - (int)piStack_324) / 0x18,FUN_00683c30);
  }
  iVar5 = 0;
  while( true ) {
    if (piVar9 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = ((int)piVar3 - (int)piVar9) / 0x18;
    }
    if (iVar6 <= iVar5) break;
    (**(code **)(**(int **)(local_3b8 + 0x344) + 8))();
    iVar5 = iVar5 + 1;
  }
  if (piVar9 == (int *)0x0) {
    ExceptionList = pvStack_c;
    return;
  }
  if (piVar9 != piVar3) {
    piVar18 = piVar9 + 2;
    do {
      piVar18[-2] = (int)&PTR_LAB_00d3709c;
      if ((int *)*piVar18 != (int *)0x0) {
        *(int *)*piVar18 = piVar18[-1];
      }
      if (piVar18[-1] != 0) {
        *(int *)(piVar18[-1] + 4) = *piVar18;
      }
      piVar18[-1] = 0;
      *piVar18 = 0;
      piVar18[3] = 0;
      if ((int *)*piVar18 != (int *)0x0) {
        *(int *)*piVar18 = piVar18[-1];
      }
      if (piVar18[-1] != 0) {
        *(int *)(piVar18[-1] + 4) = *piVar18;
      }
      piVar18[-1] = 0;
      *piVar18 = 0;
      piVar1 = piVar18 + 4;
      piVar18 = piVar18 + 6;
    } while (piVar1 != piVar3);
  }
                    /* WARNING: Subroutine does not return */
  _free(piVar9);
}


//// FUNCTION FUN_00687260 @ 00687260 ////

int * __thiscall FUN_00687260(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  void *this_00;
  undefined4 *this_01;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc6917;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(int *)((int)this + 0x348) = param_1;
  *(undefined ***)this = &PTR_FUN_00d370c4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d370ac;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x358) = (undefined4 *)((int)this + 0x34c);
  *(undefined4 *)((int)this + 0x34c) = &PTR_FUN_00d18c5c;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = (undefined1 *)((int)this + 0x370);
  *(undefined1 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x364),PTR_DAT_00e56d14,DAT_00e56d18);
  local_4._0_1_ = 2;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined1 *)((int)this + 0x388) = 1;
  piVar3 = (int *)FUN_0071b2b0();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x10))();
  piVar3 = (int *)FUN_0071b2b0();
  fVar6 = (float10)(**(code **)(*piVar3 + 0x14))();
  piVar3 = (int *)FUN_0071b2a0();
  piVar4 = (int *)FUN_0071b2b0();
  fVar7 = (float10)(**(code **)(*piVar3 + 0x14))();
  fVar8 = (float10)(**(code **)(*piVar4 + 0x14))();
  pvStack_18 = (void *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  fVar1 = (float)(((float10)(float)fVar6 - (float10)192.0) * ((float10)(float)fVar7 / fVar8));
  fVar2 = (float)fVar5 * 0.6666667;
  local_4._0_1_ = 3;
  FUN_006854d0(auStack_1c,5);
  fStack_28 = fVar2 * 0.5;
  uStack_20 = 0x3f800000;
  fStack_24 = fVar1;
  SpawnPointList_Append(auStack_1c,&fStack_28);
  fStack_28 = fVar2 - 70.0;
  uStack_20 = 0x3fb33333;
  fStack_24 = fVar1;
  SpawnPointList_Append(auStack_1c,&fStack_28);
  uStack_20 = 0x3fcccccd;
  fStack_28 = fVar2;
  fStack_24 = fVar1;
  SpawnPointList_Append(auStack_1c,&fStack_28);
  fStack_28 = fVar2 + 90.0;
  uStack_20 = 0x3fb33333;
  fStack_24 = fVar1;
  SpawnPointList_Append(auStack_1c,&fStack_28);
  fStack_28 = fVar2 * 1.5;
  uStack_20 = 0x3f800000;
  fStack_24 = fVar1;
  SpawnPointList_Append(auStack_1c,&fStack_28);
  this_00 = operator_new(0x70);
  local_4._0_1_ = 4;
  if (this_00 == (void *)0x0) {
    this_01 = (undefined4 *)0x0;
  }
  else {
    this_01 = FUN_005f2be0(this_00,(float)auStack_1c,2,(undefined4 *)0x13);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined4 **)((int)this + 0x344) = this_01;
  FUN_005f1da0(this_01,1,0x3f800000,0x3faccccd);
  FUN_006844c0((int)this);
  CostumeList_BuildFilteredAndSorted((int)this);
  FUN_0073f640(this);
  if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_18);
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_006874e0 @ 006874e0 ////

void __thiscall FUN_006874e0(void *this,undefined4 *param_1)

{
  FUN_004015d0((void *)((int)this + 0x364),(char *)*param_1,param_1[1]);
  CostumeList_BuildFilteredAndSorted((int)this);
  return;
}


//// FUNCTION FUN_00687570 @ 00687570 ////

undefined4 * __fastcall FUN_00687570(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 extraout_EDX;
  void *unaff_EBX;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 *puVar5;
  byte bVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc6938;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WMoviePlayer_Constructor(param_1);
  bVar6 = 1;
  iVar3 = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00d372fc;
  param_1[0x14] = &PTR_LAB_00d372e4;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  param_1[0xd5] = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined1 *)((int)param_1 + 0x359) = 0;
  puVar5 = param_1;
  pvVar1 = (void *)FUN_004f3b20();
  FUN_004f98f0(pvVar1,iVar3,(int)puVar5,bVar6);
  FUN_0071c290();
  FUN_00424130(DAT_00f87b04,1,0,0);
  pvVar1 = (void *)0x0;
  iVar3 = FUN_0071b2b0();
  FUN_00741d80(param_1,iVar3,pvVar1);
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))(param_1,1);
  FUN_005e98d0(DAT_0104d82c,extraout_EDX);
  if ((DAT_0105be08 == 0) || (DAT_0105be08 == 1)) {
    pwVar4 = L"data/credits/credits_low.wmv";
  }
  else {
    pwVar4 = L"data/credits/credits.wmv";
  }
  FUN_006b9390(param_1,pwVar4);
  FUN_006b93c0(param_1,0);
  ExceptionList = unaff_EBX;
  return param_1;
}


//// FUNCTION FUN_00687650 @ 00687650 ////

void __fastcall FUN_00687650(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d372fc;
  param_1[0x14] = &PTR_LAB_00d372e4;
  FUN_006b9280(param_1);
  return;
}


//// FUNCTION FUN_00687710 @ 00687710 ////

undefined8 __fastcall FUN_00687710(int param_1,uint param_2)

{
  ulonglong uVar1;
  
  if (*(int *)(param_1 + 0x354) != 0) {
    uVar1 = FUN_00990ae0(param_1,param_2);
    param_2 = (uint)(uVar1 >> 0x20);
    if (1000 < (uint)((int)uVar1 - *(int *)(param_1 + 0x354))) {
      return CONCAT44(param_2,1);
    }
  }
  return (ulonglong)param_2 << 0x20;
}


//// FUNCTION FUN_00687740 @ 00687740 ////

void FUN_00687740(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc695b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0104daad == '\0') {
    DAT_0104daad = '\x01';
    ExceptionList = &local_c;
    FUN_00471840("MT_AWARDS_OPENCREDITSSCREEN",0x390);
    FUN_00471840("MT_AWARDS_CLOSECREDITSSCREEN",0x3b8);
  }
  puVar1 = operator_new(0x360);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00687570(puVar1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006877d0 @ 006877d0 ////

undefined4 * __thiscall FUN_006877d0(void *this,byte param_1)

{
  FUN_00687650(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006877f0 @ 006877f0 ////

void __fastcall FUN_006877f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  undefined4 *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc697b;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x350) == '\0') {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x350) = 1;
    puVar1 = operator_new(0xa4);
    this = (undefined4 *)0x0;
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      this = FUN_0046f7a0(puVar1);
    }
    local_4 = 0xffffffff;
    FUN_0046f5d0(this,0x3b8);
    (**(code **)(this[0xe] + 4))();
    this[0x13] = param_1;
    (**(code **)this[0xe])();
    FUN_005e9280(DAT_0104d82c,extraout_EDX,this);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006878e0 @ 006878e0 ////

void __fastcall FUN_006878e0(int *param_1)

{
  int iVar1;
  
  FUN_006b9300(param_1);
  if ((char)param_1[0xd6] != '\0') {
    if (*(int **)(DAT_0104a978 + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_0104a978 + 0x74) + 0x1c))();
      FlushAndRenderQueue();
    }
    iVar1 = param_1[0xd7];
    param_1[0xd7] = iVar1 + 1;
    if (3 < iVar1 + 1) {
      *(undefined1 *)((int)param_1 + 0x359) = 1;
    }
  }
  return;
}


//// FUNCTION CreditsScreen_Constructor @ 006879d0 ////

/* WARNING: Removing unreachable block (ram,0x00687a41) */

void CreditsScreen_Constructor(void)

{
  char local_20 [7];
  undefined1 local_19;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc6998;
  local_c = ExceptionList;
  local_20[0] = '\0';
  ExceptionList = &local_c;
  _strncpy(local_20,"credits",7);
  local_19 = 0;
  local_4 = 0;
  FUN_005434b0();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00687a60 @ 00687a60 ////

void __fastcall FUN_00687a60(int *param_1)

{
  float *this;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc69c0;
  local_c = ExceptionList;
  if (param_1[0xd5] == 0) {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x20;
    ExceptionList = &local_c;
    local_4c = _malloc(0x20);
    _strncpy(local_4c,"ENDSCREEN_DIALOGUE_EXIT",0x17);
    local_48 = 0x17;
    local_4c[0x17] = '\0';
    local_4 = 0;
    FUN_009b5030(local_2c,&local_4c);
    local_4 = CONCAT31(local_4._1_3_,1);
    this = FUN_00726520();
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    FUN_0073e590(this,param_1);
    FUN_0073e5e0(this,param_1);
    (**(code **)(*(int *)this[0xd1] + 0x18))(0,&LAB_00687930,param_1,"CREDITS_CANCEL");
    (**(code **)(*(int *)this[0xd2] + 0x18))(0,&LAB_00687890,param_1,"CREDITS_OK");
    (**(code **)(*param_1 + 0xc))(this,1);
    uVar1 = FUN_00990ae0(extraout_ECX,extraout_EDX);
    param_1[0xd5] = (int)uVar1;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00687bc0 @ 00687bc0 ////

void __fastcall FUN_00687bc0(int *param_1)

{
  char cVar1;
  void *this;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar2;
  byte bVar3;
  
  WWindow_Tick(param_1);
  (**(code **)(*param_1 + 0xd8))();
  if ((char)param_1[0xd2] != '\0') {
    cVar1 = (**(code **)(*(int *)param_1[0xd1] + 0x28))();
    if (cVar1 != '\0') {
      FUN_00687a60(param_1);
    }
  }
  if (*(char *)((int)param_1 + 0x359) != '\0') {
    (**(code **)(*(int *)param_1[0xd1] + 0x1c))();
    FUN_004b39e0(extraout_ECX,extraout_EDX);
    *(undefined1 *)((int)param_1 + 0x359) = 0;
    *(undefined1 *)(param_1 + 0xd6) = 0;
    FUN_0071b530(param_1,param_1);
    FUN_004237f0(DAT_00f87b04);
    FUN_0071bd00();
    bVar3 = 1;
    iVar2 = 0;
    this = (void *)FUN_004f3b20();
    FUN_004f9b70(this,iVar2,(int)param_1,bVar3);
    FUN_00695da0(1);
  }
  return;
}


//// FUNCTION FUN_00687c60 @ 00687c60 ////

void __fastcall FUN_00687c60(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float afStack_18 [2];
  float fStack_10;
  undefined1 local_c [4];
  float fStack_8;
  
  if ((int *)param_1[0x10e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10e] + 0x34))(local_c);
    fStack_8 = fStack_8 + (float)param_1[0xff];
    uVar2 = FUN_009a1b30(&DAT_0105c2e8,&fStack_10,afStack_18);
    if ((char)uVar2 == '\0') {
      return;
    }
    fVar5 = afStack_18[0] + 16.0;
    (**(code **)(*param_1 + 0x14))();
    iVar3 = *param_1;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar3 + 0x5c))(1,uVar2);
    iVar3 = *param_1;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar3 + 100))(1,uVar2,fVar5);
    FUN_0053d3a0();
    return;
  }
  piVar1 = (int *)param_1[0x114];
  if (piVar1 == (int *)0x0) {
    iVar3 = *param_1;
    uVar6 = 0;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar3 + 0x5c))(1,uVar2,uVar6);
    iVar3 = *param_1;
    uVar6 = 0;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar3 + 100))(1,uVar2,uVar6);
    return;
  }
  iVar3 = FUN_00ace790(piVar1,0,&TM::WWindow::RTTI_Type_Descriptor,
                       &TM::WStarIcon::RTTI_Type_Descriptor,0);
  iVar4 = FUN_00ace790(piVar1,0,&TM::WWindow::RTTI_Type_Descriptor,
                       &TM::WMovieIcon::RTTI_Type_Descriptor,0);
  if (iVar3 == 0) {
    if (iVar4 == 0) goto LAB_00687d8c;
    (**(code **)(*param_1 + 0x60))(1,param_1[0x114],0x40a00000);
  }
  else {
    (**(code **)(*param_1 + 0x5c))(2,param_1[0x114],0x40a00000);
  }
  (**(code **)(*param_1 + 100))(1,param_1[0x114],0);
LAB_00687d8c:
  FUN_0053d3a0();
  return;
}


//// FUNCTION FUN_00687dd0 @ 00687dd0 ////

void __fastcall FUN_00687dd0(int *param_1)

{
  if (((char)param_1[0x116] != '\0') && (param_1[0x114] == 0)) {
    *(undefined1 *)((int)param_1 + 0x459) = 1;
    return;
  }
  (**(code **)(*param_1 + 0x50))(1);
  FUN_00830cf0(param_1);
  return;
}


//// FUNCTION FUN_00687e10 @ 00687e10 ////

void __fastcall FUN_00687e10(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined *puStack_44;
  void *pvStack_30;
  undefined2 *local_2c;
  uint local_28;
  undefined1 *local_24;
  undefined2 local_20 [6];
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc69e3;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = &lpType_0000000a;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_00ace02d(L"TestData");
  puStack_44 = (undefined *)0x687e63;
  FUN_004036d0(&local_2c,L"TestData",uVar1);
  local_4 = 0;
  (**(code **)(*param_1 + 0x54))();
  puStack_8 = (undefined1 *)0xffffffff;
  if (10 < local_28) {
                    /* WARNING: Subroutine does not return */
    puStack_44 = &UNK_00687e8c;
    _free(pvStack_30);
  }
  param_1[0x86] = param_1[0x86] & 0xffffffef;
  puStack_44 = (undefined *)0x687eaa;
  (**(code **)(*param_1 + 0x78))();
  puStack_44 = (undefined *)0x687eaf;
  piVar2 = (int *)FUN_0071b2a0();
  puStack_44 = (undefined *)0x1;
  (**(code **)(*piVar2 + 0xc))(param_1);
  puVar3 = operator_new(0x50);
  uStack_14 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_005e4870(puVar3);
  }
  uStack_14 = 0xffffffff;
  (**(code **)(*param_1 + 0xa0))(puVar3);
  puStack_44 = (undefined *)0x90050505;
  (**(code **)(*(int *)param_1[0x7b] + 0xc))(&puStack_44);
  param_1[0x115] = 0;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x101,(wchar_t *)&lpCaption_00d16918,uVar1);
  param_1[0xff] = 0;
  *(undefined1 *)(param_1 + 0x116) = 0;
  *(undefined1 *)((int)param_1 + 0x459) = 0;
  param_1[0x100] = 2;
  ExceptionList = local_24;
  return;
}


//// FUNCTION FUN_00688080 @ 00688080 ////

int * __fastcall FUN_00688080(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc6a42;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00833290(param_1);
  *param_1 = (int)&PTR_FUN_00d3746c;
  param_1[0x14] = (int)&PTR_FUN_00d37450;
  param_1[0xd1] = (int)&PTR_FUN_00d37444;
  param_1[0x101] = (int)(param_1 + 0x104);
  *(undefined2 *)(param_1 + 0x104) = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 10;
  param_1[0x10c] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = (int)(param_1 + 0x109);
  param_1[0x109] = (int)&PTR_FUN_00d172b0;
  param_1[0x10e] = 0;
  param_1[0x112] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = (int)(param_1 + 0x10f);
  param_1[0x10f] = (int)&PTR_FUN_00d18c2c;
  param_1[0x114] = 0;
  local_4 = 3;
  FUN_00687e10(param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00688140 @ 00688140 ////

int * __thiscall FUN_00688140(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc6a82;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00833290(this);
  *(undefined ***)this = &PTR_FUN_00d3746c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d37450;
  *(undefined ***)((int)this + 0x344) = &PTR_FUN_00d37444;
  *(undefined2 **)((int)this + 0x404) = (undefined2 *)((int)this + 0x410);
  *(undefined2 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x40c) = 10;
  piVar1 = (int *)((int)this + 0x428);
  *(undefined4 *)((int)this + 0x430) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 **)((int)this + 0x430) = (undefined4 *)((int)this + 0x424);
  *(undefined4 *)((int)this + 0x424) = &PTR_FUN_00d172b0;
  *(int *)((int)this + 0x438) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x42c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 **)((int)this + 0x448) = (undefined4 *)((int)this + 0x43c);
  *(undefined4 *)((int)this + 0x43c) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x450) = 0;
  local_4 = 3;
  FUN_00687e10(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00688220 @ 00688220 ////

int * __thiscall FUN_00688220(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc6ac2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00833290(this);
  *(undefined ***)this = &PTR_FUN_00d3746c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d37450;
  *(undefined ***)((int)this + 0x344) = &PTR_FUN_00d37444;
  *(undefined2 **)((int)this + 0x404) = (undefined2 *)((int)this + 0x410);
  *(undefined2 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x40c) = 10;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 **)((int)this + 0x430) = (undefined4 *)((int)this + 0x424);
  *(undefined4 *)((int)this + 0x424) = &PTR_FUN_00d172b0;
  *(undefined4 *)((int)this + 0x438) = 0;
  piVar1 = (int *)((int)this + 0x440);
  *(undefined4 *)((int)this + 0x448) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 **)((int)this + 0x448) = (undefined4 *)((int)this + 0x43c);
  *(undefined4 *)((int)this + 0x43c) = &PTR_FUN_00d18c2c;
  *(int *)((int)this + 0x450) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x444) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = 3;
  FUN_00687e10(this);
  *(undefined1 *)((int)this + 0x458) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00688300 @ 00688300 ////

void __thiscall FUN_00688300(void *this,undefined4 *param_1)

{
  size_t sVar1;
  
  if ((*(byte *)((int)this + 0x218) & 0x10) != 0) {
    *(undefined4 *)((int)this + 0x400) = 2;
    FUN_0040cae0((void *)((int)this + 0x404),(wchar_t *)*param_1,param_1[1]);
    sVar1 = FUN_00ace02d(L"<BR>");
    FUN_0040cae0((void *)((int)this + 0x404),L"<BR>",sVar1);
  }
  return;
}


//// FUNCTION FUN_00688350 @ 00688350 ////

undefined4 * __thiscall FUN_00688350(void *this,byte param_1)

{
  FUN_00688370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00688370 @ 00688370 ////

void __fastcall FUN_00688370(undefined4 *param_1)

{
  param_1[0x10f] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x111] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x111] = param_1[0x110];
  }
  if (param_1[0x110] != 0) {
    *(undefined4 *)(param_1[0x110] + 4) = param_1[0x111];
  }
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x114] = 0;
  if ((undefined4 *)param_1[0x111] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x111] = param_1[0x110];
  }
  if (param_1[0x110] != 0) {
    *(undefined4 *)(param_1[0x110] + 4) = param_1[0x111];
  }
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x109] = &PTR_FUN_00d172b0;
  if ((undefined4 *)param_1[0x10b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10b] = param_1[0x10a];
  }
  if (param_1[0x10a] != 0) {
    *(undefined4 *)(param_1[0x10a] + 4) = param_1[0x10b];
  }
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10e] = 0;
  if ((undefined4 *)param_1[0x10b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10b] = param_1[0x10a];
  }
  if (param_1[0x10a] != 0) {
    *(undefined4 *)(param_1[0x10a] + 4) = param_1[0x10b];
  }
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  if (10 < (uint)param_1[0x103]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x101]);
  }
  FUN_008330d0(param_1);
  return;
}


//// FUNCTION FUN_00688490 @ 00688490 ////

void __fastcall FUN_00688490(int *param_1)

{
  if ((*(byte *)(param_1 + 0xd1) & 1) != 0) {
    FUN_00689590(param_1);
  }
  if ((char)param_1[0xe9] != '\0') {
    (**(code **)(*param_1 + 0x6c))();
  }
  FUN_0073fb40(param_1);
  return;
}


//// FUNCTION FUN_006884e0 @ 006884e0 ////

void __fastcall FUN_006884e0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006884e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x36c) + 0xc))();
  return;
}


//// FUNCTION FUN_006884f0 @ 006884f0 ////

void __thiscall FUN_006884f0(void *this,float param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar5;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int iStack_c;
  byte bStack_8;
  
  piVar1 = *(int **)((int)this + 0x36c);
  fVar5 = (float10)(**(code **)(*(int *)this + 0x10))();
  fStack_18 = (float)fVar5;
  fVar5 = (float10)(**(code **)(*piVar1 + 0x10))();
  piVar1 = *(int **)((int)this + 0x36c);
  fStack_14 = (float)(((float10)fStack_18 - fVar5) + (float10)param_1);
  fVar5 = (float10)(**(code **)(*(int *)this + 0x14))();
  fStack_18 = (float)fVar5;
  fVar5 = (float10)(**(code **)(*piVar1 + 0x14))();
  iVar2 = *(int *)((int)this + 0x36c);
  uVar3 = *(uint *)(iVar2 + 0x114);
  fStack_18 = (float)(((float10)fStack_18 - fVar5) + (float10)param_1);
  *(uint *)(iVar2 + 0x114) = *(uint *)(iVar2 + 0x114) & 0xfffffffd;
  *(uint *)(*(int *)((int)this + 0x36c) + 0x114) =
       *(uint *)(*(int *)((int)this + 0x36c) + 0x114) & 0xfffffffb;
  (**(code **)(*(int *)this + 0x74))(0x42180000,0x41d00000);
  piVar1 = *(int **)((int)this + 0x36c);
  fStack_14 = (float)piVar1[0x27];
  fStack_18 = (float)piVar1[0x30];
  iStack_c = piVar1[0x27];
  fStack_10 = (float)piVar1[0x30];
  (**(code **)(*piVar1 + 0x4c))(&fStack_18);
  uVar4 = *(uint *)(*(int *)((int)this + 0x36c) + 0x114);
  *(uint *)(*(int *)((int)this + 0x36c) + 0x114) =
       uVar4 ^ ((uint)((byte)(uVar3 >> 1) & 1) << 1 ^ uVar4) & 2;
  uVar3 = *(uint *)(*(int *)((int)this + 0x36c) + 0x114);
  *(uint *)(*(int *)((int)this + 0x36c) + 0x114) = uVar3 ^ ((uint)bStack_8 << 2 ^ uVar3) & 4;
  (**(code **)(*(int *)this + 0x74))
            ((fStack_14 - unaff_EBX) + unaff_ESI,(fStack_18 - fStack_10) + unaff_EDI);
  return;
}


//// FUNCTION FUN_006887a0 @ 006887a0 ////

float10 __thiscall FUN_006887a0(int *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar5;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  int iStack_8;
  byte bStack_4;
  
  piVar1 = (int *)param_1[0xdb];
  fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
  fStack_14 = (float)fVar5;
  fVar5 = (float10)(**(code **)(*piVar1 + 0x14))();
  iVar2 = param_1[0xdb];
  uVar3 = *(uint *)(iVar2 + 0x114);
  *(uint *)(iVar2 + 0x114) = *(uint *)(iVar2 + 0x114) & 0xfffffffd;
  fStack_14 = (float)(((float10)fStack_14 - fVar5) + (float10)param_2);
  *(uint *)(param_1[0xdb] + 0x114) = *(uint *)(param_1[0xdb] + 0x114) & 0xfffffffb;
  (**(code **)(*param_1 + 0x7c))(0x41d00000);
  piVar1 = (int *)param_1[0xdb];
  fStack_10 = (float)piVar1[0x27];
  fStack_14 = (float)piVar1[0x30];
  iStack_8 = piVar1[0x27];
  fStack_c = (float)piVar1[0x30];
  (**(code **)(*piVar1 + 0x4c))(&fStack_14);
  uVar4 = *(uint *)(param_1[0xdb] + 0x114);
  *(uint *)(param_1[0xdb] + 0x114) = uVar4 ^ ((uint)((byte)(uVar3 >> 1) & 1) << 1 ^ uVar4) & 2;
  uVar3 = *(uint *)(param_1[0xdb] + 0x114);
  *(uint *)(param_1[0xdb] + 0x114) = uVar3 ^ ((uint)bStack_4 << 2 ^ uVar3) & 4;
  (**(code **)(*param_1 + 0x7c))((fStack_14 - fStack_c) + unaff_ESI);
  return ((float10)unaff_EBX - (float10)fStack_10) + (float10)unaff_EDI;
}


//// FUNCTION FUN_006888d0 @ 006888d0 ////

void __thiscall FUN_006888d0(void *this,undefined4 *param_1)

{
  char cVar1;
  size_t sVar2;
  undefined2 **_Memory;
  undefined2 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [6];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc6ad8;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  sVar2 = FUN_00ace02d(L"<p align=center><h2>");
  FUN_0040cae0(&local_2c,L"<p align=center><h2>",sVar2);
  FUN_0040cae0(&local_2c,(wchar_t *)*param_1,param_1[1]);
  sVar2 = FUN_00ace02d(L"</h2></p>");
  FUN_0040cae0(&local_2c,L"</h2></p>",sVar2);
  do {
    cVar1 = (**(code **)(**(int **)((int)this + 0x39c) + 0x50))(1);
  } while (cVar1 != '\0');
  _Memory = &local_2c;
  (**(code **)(**(int **)((int)this + 0x39c) + 0x54))();
  (**(code **)(**(int **)((int)this + 0x39c) + 0x8c))(0);
  if (&lpType_0000000a < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_006889c0 @ 006889c0 ////

undefined4 * __thiscall FUN_006889c0(void *this,char param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  undefined4 *local_5c;
  char *local_50;
  undefined4 local_4c;
  uint local_48;
  char local_44 [16];
  void *pvStack_34;
  int ******local_30;
  undefined ***local_2c;
  int ****local_28;
  undefined *******local_24;
  undefined ***pppuStack_20;
  void *pvStack_1c;
  void *pvStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc6bf4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006898b0(this);
  piVar1 = (int *)((int)this + 0x358);
  *(undefined ***)this = &PTR_FUN_00d3759c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d37584;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(int **)((int)this + 0x364) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 **)((int)this + 0x37c) = (undefined4 *)((int)this + 0x370);
  *(undefined4 *)((int)this + 0x370) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 900) = 0;
  piVar2 = (int *)((int)this + 0x388);
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(int **)((int)this + 0x394) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined1 *)((int)this + 0x3a4) = 1;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x36c) = 0;
  (**(code **)*piVar1)();
  pvVar5 = operator_new(0x288);
  if (pvVar5 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    local_50 = local_44;
    local_44[0] = '\0';
    local_4c = 0;
    local_48 = 0x20;
    local_50 = _malloc(0x20);
    _strncpy(local_50,"ui/buildmenu_window.dds",0x17);
    local_4c = 0x17;
    local_50[0x17] = '\0';
    local_4 = CONCAT31(local_4._1_3_,5);
    puVar6 = FUN_005e8fd0(pvVar5,&local_50);
  }
  local_4 = 3;
  if ((pvVar5 != (void *)0x0) && (0x14 < local_48)) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  puVar6[0x9c] = 0x41400000;
  puVar6[0x9d] = 0x41400000;
  puVar6[0x9e] = 0x41c00000;
  puVar6[0x9f] = 0x41c00000;
  puVar6[0x9b] = 0x42000000;
  FUN_0073fae0(this,puVar6);
  if (param_1 != '\0') {
    pvVar5 = operator_new(0x420);
    bVar8 = pvVar5 == (void *)0x0;
    if (bVar8) {
      local_5c = (undefined4 *)0x0;
    }
    else {
      local_30 = (int ******)&local_24;
      local_24 = (undefined *******)((uint)local_24 & 0xffff0000);
      local_2c = (undefined ***)0x0;
      local_28 = (int ****)0xa;
      uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_30,(wchar_t *)&lpCaption_00d16918,uVar7);
      local_50 = local_44;
      local_44[0] = '\0';
      local_4c = 0;
      local_48 = 0x14;
      _strncpy(local_50,"button_quit.",0xc);
      local_4c = 0xc;
      local_50[0xc] = '\0';
      local_4 = 9;
      local_5c = FUN_0069fb10(pvVar5,(int *)&local_50,&local_30,0x42000000,0x42000000,0,0,0x3f800000
                              ,0x3f800000);
    }
    local_4 = 0xb;
    (**(code **)(*(int *)((int)this + 0x370) + 4))();
    *(undefined4 **)((int)this + 900) = local_5c;
    (*(code *)**(undefined4 **)((int)this + 0x370))();
    if ((!bVar8) && (0x14 < local_48)) {
                    /* WARNING: Subroutine does not return */
      _free(local_50);
    }
    local_4 = 3;
    if ((!bVar8) && ((undefined *****)0xa < local_28)) {
                    /* WARNING: Subroutine does not return */
      _free(local_30);
    }
    (**(code **)(**(int **)((int)this + 900) + 0x18))();
    (**(code **)(**(int **)((int)this + 900) + 0x18))(5,&LAB_005f37f0,0,"DIALOGBOX_CLOSE");
    (**(code **)(**(int **)((int)this + 900) + 0x60))(2,this,0xc0000000);
    (**(code **)(**(int **)((int)this + 900) + 100))(1,this,0xbf800000);
    FUN_0073f6e0(this,*(int **)((int)this + 900));
  }
  puVar6 = operator_new(0x3fc);
  local_4._0_1_ = 0xc;
  if (puVar6 == (undefined4 *)0x0) {
    local_5c = (undefined4 *)0x0;
  }
  else {
    local_5c = FUN_00833290(puVar6);
  }
  local_4._0_1_ = 3;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 **)((int)this + 0x39c) = local_5c;
  (**(code **)*piVar2)();
  pppuStack_20 = (undefined ***)&local_2c;
  local_24 = (undefined *******)((int)this + 0x18);
  local_30 = (int ******)0x1;
  local_2c = (undefined ***)&PTR_FUN_00d18c2c;
  local_28 = (int ****)*local_24;
  (*local_24)[1] = (undefined *****)&local_28;
  *local_24 = (undefined ******)&local_28;
  uStack_14 = 0x40000000;
  pvStack_10 = (void *)0x40000000;
  iVar4 = *(int *)((int)this + 0x39c);
  *(undefined4 *)(iVar4 + 0x7c) = 1;
  local_4._0_1_ = 0xd;
  pvStack_18 = this;
  (**(code **)(*(int *)(iVar4 + 0x80) + 4))();
  *(void **)(iVar4 + 0x94) = pvStack_18;
  (*(code *)**(undefined4 **)(iVar4 + 0x80))();
  *(undefined4 *)(iVar4 + 0x98) = uStack_14;
  *(void **)(iVar4 + 0x9c) = pvStack_10;
  if (local_24 != (undefined *******)0x0) {
    *local_24 = (undefined ******)local_28;
  }
  if ((undefined ******)local_28 != (undefined ******)0x0) {
    local_28[1] = (int ***)local_24;
  }
  pvStack_18 = *(void **)((int)this + 0x39c);
  pppuStack_20 = (undefined ***)&local_2c;
  local_30 = (int ******)0x1;
  local_28 = (int ****)0x0;
  local_24 = (undefined *******)0x0;
  local_2c = (undefined ***)&PTR_FUN_00d18c2c;
  if (pvStack_18 != (void *)0x0) {
    local_24 = (undefined *******)((int)pvStack_18 + 0x18);
    local_28 = (int ****)*local_24;
    (*local_24)[1] = (undefined *****)&local_28;
    *local_24 = (undefined ******)&local_28;
  }
  uStack_14 = 0x41a00000;
  pvStack_10 = (void *)0x41a00000;
  iVar4 = *(int *)((int)this + 0x39c);
  *(undefined4 *)(iVar4 + 0xc4) = 1;
  local_4._0_1_ = 0xe;
  (**(code **)(*(int *)(iVar4 + 200) + 4))();
  *(void **)(iVar4 + 0xdc) = pvStack_18;
  (*(code *)**(undefined4 **)(iVar4 + 200))();
  *(undefined4 *)(iVar4 + 0xe0) = uStack_14;
  *(void **)(iVar4 + 0xe4) = pvStack_10;
  if (local_24 != (undefined *******)0x0) {
    *local_24 = (undefined ******)local_28;
  }
  if ((undefined ******)local_28 != (undefined ******)0x0) {
    local_28[1] = (int ***)local_24;
  }
  local_24 = (undefined *******)((int)this + 0x18);
  local_30 = (int ******)0x1;
  pppuStack_20 = (undefined ***)&local_2c;
  local_2c = (undefined ***)&PTR_FUN_00d18c2c;
  local_28 = (int ****)*local_24;
  (*local_24)[1] = (undefined *****)&local_28;
  *local_24 = (undefined ******)&local_28;
  uStack_14 = 0x40000000;
  pvStack_10 = (void *)0x40000000;
  iVar4 = *(int *)((int)this + 0x39c);
  *(undefined4 *)(iVar4 + 0xa0) = 1;
  local_4._0_1_ = 0xf;
  pvStack_18 = this;
  (**(code **)(*(int *)(iVar4 + 0xa4) + 4))();
  *(void **)(iVar4 + 0xb8) = pvStack_18;
  (*(code *)**(undefined4 **)(iVar4 + 0xa4))();
  *(undefined4 *)(iVar4 + 0xbc) = uStack_14;
  *(void **)(iVar4 + 0xc0) = pvStack_10;
  if (local_24 != (undefined *******)0x0) {
    *local_24 = (undefined ******)local_28;
  }
  if ((undefined ******)local_28 != (undefined ******)0x0) {
    local_28[1] = (int ***)local_24;
  }
  local_24 = (undefined *******)((int)this + 0x18);
  local_30 = (int ******)0x2;
  pppuStack_20 = (undefined ***)&local_2c;
  local_2c = (undefined ***)&PTR_FUN_00d18c2c;
  local_28 = (int ****)*local_24;
  (*local_24)[1] = (undefined *****)&local_28;
  *local_24 = (undefined ******)&local_28;
  uStack_14 = 0xc0000000;
  pvStack_10 = (void *)0xc0000000;
  iVar4 = *(int *)((int)this + 0x39c);
  *(undefined4 *)(iVar4 + 0xe8) = 2;
  local_4._0_1_ = 0x10;
  pvStack_18 = this;
  (**(code **)(*(int *)(iVar4 + 0xec) + 4))();
  *(void **)(iVar4 + 0x100) = pvStack_18;
  (*(code *)**(undefined4 **)(iVar4 + 0xec))();
  *(undefined4 *)(iVar4 + 0x104) = uStack_14;
  *(void **)(iVar4 + 0x108) = pvStack_10;
  if (local_24 != (undefined *******)0x0) {
    *local_24 = (undefined ******)local_28;
  }
  if ((undefined ******)local_28 != (undefined ******)0x0) {
    local_28[1] = (int ***)local_24;
  }
  if (param_1 != '\0') {
    puVar6 = (undefined4 *)FUN_005fbfa0(&local_30,2,(int)this,0x41f00000);
    iVar4 = *(int *)((int)this + 0x39c);
    *(undefined4 *)(iVar4 + 0xe8) = *puVar6;
    local_4._0_1_ = 0x11;
    (**(code **)(*(int *)(iVar4 + 0xec) + 4))();
    *(undefined4 *)(iVar4 + 0x100) = puVar6[6];
    (*(code *)**(undefined4 **)(iVar4 + 0xec))();
    *(undefined4 *)(iVar4 + 0x104) = puVar6[7];
    *(undefined4 *)(iVar4 + 0x108) = puVar6[8];
    FUN_005f9ed0((int)&local_30);
  }
  local_30 = (int ******)&local_24;
  local_24 = (undefined *******)((uint)local_24 & 0xffff0000);
  local_2c = (undefined ***)0x0;
  local_28 = (int ****)0xa;
  uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_30,(wchar_t *)&lpCaption_00d16918,uVar7);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  (**(code **)(**(int **)((int)this + 0x39c) + 0x54))();
  puStack_8._0_1_ = 3;
  if ((undefined ***)0xa < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  FUN_0073f6e0(this,*(int **)((int)this + 0x39c));
  puVar6 = operator_new(0x344);
  puStack_8._0_1_ = 0x13;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_007432f0(puVar6);
  }
  puStack_8._0_1_ = 3;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x36c) = puVar6;
  (**(code **)*piVar1)();
  *(uint *)(*(int *)((int)this + 0x36c) + 0x114) =
       *(uint *)(*(int *)((int)this + 0x36c) + 0x114) | 8;
  local_28 = (int ****)((int)this + 0x18);
  pvStack_34 = (void *)0x1;
  local_24 = (undefined *******)&local_30;
  local_30 = (int ******)&PTR_FUN_00d18c2c;
  local_2c = (undefined ***)*local_28;
  (*local_28)[1] = (int **)&local_2c;
  *local_28 = (int ***)&local_2c;
  pvStack_18 = (void *)0x42280000;
  uStack_14 = 0x42280000;
  iVar4 = *(int *)((int)this + 0x36c);
  *(undefined4 *)(iVar4 + 0x7c) = 1;
  puStack_8._0_1_ = 0x14;
  pvStack_1c = this;
  (**(code **)(*(int *)(iVar4 + 0x80) + 4))();
  *(void **)(iVar4 + 0x94) = pvStack_1c;
  (*(code *)**(undefined4 **)(iVar4 + 0x80))();
  *(void **)(iVar4 + 0x98) = pvStack_18;
  *(undefined4 *)(iVar4 + 0x9c) = uStack_14;
  if ((undefined *****)local_28 != (undefined *****)0x0) {
    *local_28 = (int ***)local_2c;
  }
  if ((undefined ****)local_2c != (undefined ****)0x0) {
    local_2c[1] = (undefined **)local_28;
  }
  local_24 = (undefined *******)&local_30;
  local_28 = (int ****)((int)this + 0x18);
  pvStack_34 = (void *)0x2;
  local_30 = (int ******)&PTR_FUN_00d18c2c;
  local_2c = (undefined ***)*local_28;
  (*local_28)[1] = (int **)&local_2c;
  *local_28 = (int ***)&local_2c;
  pvStack_18 = (void *)0x40000000;
  uStack_14 = 0x40000000;
  iVar4 = *(int *)((int)this + 0x36c);
  *(undefined4 *)(iVar4 + 0xc4) = 2;
  puStack_8._0_1_ = 0x15;
  pvStack_1c = this;
  (**(code **)(*(int *)(iVar4 + 200) + 4))();
  *(void **)(iVar4 + 0xdc) = pvStack_1c;
  (*(code *)**(undefined4 **)(iVar4 + 200))();
  *(void **)(iVar4 + 0xe0) = pvStack_18;
  *(undefined4 *)(iVar4 + 0xe4) = uStack_14;
  if ((undefined *****)local_28 != (undefined *****)0x0) {
    *local_28 = (int ***)local_2c;
  }
  if ((undefined ****)local_2c != (undefined ****)0x0) {
    local_2c[1] = (undefined **)local_28;
  }
  local_24 = (undefined *******)&local_30;
  local_28 = (int ****)((int)this + 0x18);
  pvStack_34 = (void *)0x1;
  local_30 = (int ******)&PTR_FUN_00d18c2c;
  local_2c = (undefined ***)*local_28;
  (*local_28)[1] = (int **)&local_2c;
  *local_28 = (int ***)&local_2c;
  pvStack_18 = (void *)0x40000000;
  uStack_14 = 0x40000000;
  iVar4 = *(int *)((int)this + 0x36c);
  *(undefined4 *)(iVar4 + 0xa0) = 1;
  puStack_8._0_1_ = 0x16;
  pvStack_1c = this;
  (**(code **)(*(int *)(iVar4 + 0xa4) + 4))();
  *(void **)(iVar4 + 0xb8) = pvStack_1c;
  (*(code *)**(undefined4 **)(iVar4 + 0xa4))();
  *(void **)(iVar4 + 0xbc) = pvStack_18;
  *(undefined4 *)(iVar4 + 0xc0) = uStack_14;
  if ((undefined *****)local_28 != (undefined *****)0x0) {
    *local_28 = (int ***)local_2c;
  }
  if ((undefined ****)local_2c != (undefined ****)0x0) {
    local_2c[1] = (undefined **)local_28;
  }
  local_24 = (undefined *******)&local_30;
  local_28 = (int ****)((int)this + 0x18);
  pvStack_34 = (void *)0x2;
  local_30 = (int ******)&PTR_FUN_00d18c2c;
  local_2c = (undefined ***)*local_28;
  (*local_28)[1] = (int **)&local_2c;
  *local_28 = (int ***)&local_2c;
  pvStack_18 = (void *)0x40000000;
  uStack_14 = 0x40000000;
  iVar4 = *(int *)((int)this + 0x36c);
  *(undefined4 *)(iVar4 + 0xe8) = 2;
  puStack_8._0_1_ = 0x17;
  pvStack_1c = this;
  (**(code **)(*(int *)(iVar4 + 0xec) + 4))();
  *(void **)(iVar4 + 0x100) = pvStack_1c;
  (*(code *)**(undefined4 **)(iVar4 + 0xec))();
  *(void **)(iVar4 + 0x104) = pvStack_18;
  *(undefined4 *)(iVar4 + 0x108) = uStack_14;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  if ((undefined *****)local_28 != (undefined *****)0x0) {
    *local_28 = (int ***)local_2c;
  }
  if ((undefined ****)local_2c != (undefined ****)0x0) {
    local_2c[1] = (undefined **)local_28;
  }
  FUN_0073f6e0(this,*(int **)((int)this + 0x36c));
  puVar3 = (uint *)(*(int *)((int)this + 0x36c) + 0x114);
  *puVar3 = *puVar3 | 2;
  if (*(int **)((int)this + 0x36c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x36c) + 0xa8))();
  }
  FUN_0073e730(this);
  pvVar5 = operator_new(0x9c);
  puStack_8._0_1_ = 0x18;
  if (pvVar5 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_00746a20(pvVar5,0x3f800000);
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  *(undefined4 **)((int)this + 0x3a0) = puVar6;
  FUN_0073e510(this,puVar6);
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_006894c0 @ 006894c0 ////

undefined4 * __thiscall FUN_006894c0(void *this,byte param_1)

{
  FUN_00667fe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00689590 @ 00689590 ////

void __fastcall FUN_00689590(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  float10 fVar6;
  float local_8 [2];
  
  cVar4 = FUN_00553f70(0x73);
  if (cVar4 == '\0') {
    param_1[0xd2] = DAT_0104cd08;
    param_1[0xd3] = DAT_0104cd0c;
  }
  else {
    param_1[0xd2] = DAT_0104cce0;
    param_1[0xd3] = DAT_0104cce4;
  }
  piVar5 = (int *)FUN_00747460((void *)param_1[0xb5],local_8,param_1[0xd2],param_1[0xd3]);
  param_1[0xd2] = *piVar5;
  param_1[0xd3] = piVar5[1];
  fVar1 = (float)param_1[0xd3];
  fVar2 = (float)param_1[0xd5];
  local_8[0] = (float)param_1[0xd2] - (float)param_1[0xd4];
  fVar6 = (float10)(**(code **)(*param_1 + 0x14))();
  param_1[0x39] = (int)(float)(fVar6 + (float10)(fVar1 - fVar2));
  fVar6 = (float10)(**(code **)(*param_1 + 0x10))();
  param_1[0x30] = (int)local_8[0];
  param_1[0x42] = (int)(float)(fVar6 + (float10)local_8[0]);
  param_1[0x27] = (int)(fVar1 - fVar2);
  (**(code **)(*param_1 + 0xf0))();
  (**(code **)(*param_1 + 0xf4))();
  piVar5 = (int *)param_1[0x25];
  if (piVar5 != param_1) {
    local_8[0] = (float)piVar5[0x39];
    fVar1 = (float)piVar5[0x27];
    iVar3 = param_1[0x1f];
    if (iVar3 == 0) {
      fVar1 = ((float)param_1[0x27] - fVar1) / (local_8[0] - fVar1);
    }
    else {
      if (iVar3 != 1) {
        if (iVar3 == 2) {
          param_1[0x26] = (int)(local_8[0] - (float)param_1[0x27]);
        }
        goto LAB_006896d3;
      }
      fVar1 = (float)param_1[0x27] - fVar1;
    }
    param_1[0x26] = (int)fVar1;
  }
LAB_006896d3:
  piVar5 = (int *)param_1[0x37];
  if (piVar5 != param_1) {
    local_8[0] = (float)piVar5[0x39];
    fVar1 = (float)piVar5[0x27];
    iVar3 = param_1[0x31];
    if (iVar3 == 0) {
      fVar1 = ((float)param_1[0x39] - fVar1) / (local_8[0] - fVar1);
    }
    else {
      if (iVar3 != 1) {
        if (iVar3 == 2) {
          param_1[0x38] = (int)(local_8[0] - (float)param_1[0x39]);
        }
        goto LAB_00689734;
      }
      fVar1 = (float)param_1[0x39] - fVar1;
    }
    param_1[0x38] = (int)fVar1;
  }
LAB_00689734:
  piVar5 = (int *)param_1[0x2e];
  if (piVar5 != param_1) {
    fVar1 = (float)piVar5[0x30];
    local_8[0] = (float)piVar5[0x42];
    iVar3 = param_1[0x28];
    if (iVar3 == 0) {
      fVar1 = ((float)param_1[0x30] - fVar1) / (local_8[0] - fVar1);
    }
    else {
      if (iVar3 != 1) {
        if (iVar3 == 2) {
          param_1[0x2f] = (int)(local_8[0] - (float)param_1[0x30]);
        }
        goto LAB_00689795;
      }
      fVar1 = (float)param_1[0x30] - fVar1;
    }
    param_1[0x2f] = (int)fVar1;
  }
LAB_00689795:
  piVar5 = (int *)param_1[0x40];
  if (piVar5 != param_1) {
    local_8[0] = (float)piVar5[0x42];
    fVar1 = (float)piVar5[0x30];
    iVar3 = param_1[0x3a];
    if (iVar3 == 0) {
      fVar1 = ((float)param_1[0x42] - fVar1) / (local_8[0] - fVar1);
    }
    else {
      if (iVar3 != 1) {
        if (iVar3 == 2) {
          param_1[0x41] = (int)(local_8[0] - (float)param_1[0x42]);
        }
        goto LAB_006897f6;
      }
      fVar1 = (float)param_1[0x42] - fVar1;
    }
    param_1[0x41] = (int)fVar1;
  }
LAB_006897f6:
  do {
    cVar4 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar4 != '\0');
  if (((*(byte *)(param_1 + 0x45) & 1) != 0) && ((code *)param_1[0x98] != (code *)0x0)) {
    (*(code *)param_1[0x98])(param_1,param_1[0x99]);
  }
  return;
}


//// FUNCTION FUN_00689830 @ 00689830 ////

void __fastcall FUN_00689830(int *param_1)

{
  float local_8;
  float local_4;
  
  FUN_00747460((void *)param_1[0xb5],&local_8,DAT_0104cd00,DAT_0104cd04);
  param_1[0xd4] = (int)(local_8 - (float)param_1[0x30]);
  param_1[0xd5] = (int)(local_4 - (float)param_1[0x27]);
  param_1[0xd1] = param_1[0xd1] | 1;
  (**(code **)(*param_1 + 0x80))(1);
  (**(code **)(*param_1 + 0x38))();
  return;
}


//// FUNCTION FUN_006898b0 @ 006898b0 ////

undefined4 * __fastcall FUN_006898b0(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  param_1[0xd1] = param_1[0xd1] & 0xfffffffe;
  *param_1 = &PTR_FUN_00d376bc;
  param_1[0x14] = &PTR_FUN_00d376a4;
  return param_1;
}


//// FUNCTION FUN_006898d0 @ 006898d0 ////

undefined4 * __thiscall FUN_006898d0(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006898f0 @ 006898f0 ////

undefined1 __fastcall FUN_006898f0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_007402d0(param_1);
  if (cVar1 != '\0') {
    return 1;
  }
  if ((*(byte *)(param_1 + 0x2f4) & 1) != 0) {
    cVar1 = FUN_00553f70(0x73);
    if (cVar1 != '\0') {
      FUN_00689590((int *)(param_1 + -0x50));
      return 1;
    }
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) & 0xfffffffe;
    return 1;
  }
  cVar1 = FUN_00553f70(0x73);
  if (((cVar1 != '\0') && ((*(uint *)(param_1 + 0x1c8) & 1) != 0)) &&
     ((*(uint *)(param_1 + 0x1c8) & 2) != 0)) {
    (**(code **)(*(int *)(param_1 + -0x50) + 0xfc))();
    uVar2 = 1;
  }
  return uVar2;
}


//// FUNCTION FUN_00689970 @ 00689970 ////

void __fastcall FUN_00689970(int *param_1)

{
  if ((*(byte *)(param_1 + 0xd1) & 1) != 0) {
    FUN_00689590(param_1);
  }
  (**(code **)(*param_1 + 200))(*(byte *)(param_1 + 0xd1) & 1);
  FUN_0073fb40(param_1);
  return;
}


//// FUNCTION FUN_006899b0 @ 006899b0 ////

undefined4 * __fastcall FUN_006899b0(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  param_1[0xd1] = param_1[0xd1] & 0xfffffffe;
  *param_1 = &PTR_FUN_00d377dc;
  param_1[0x14] = &PTR_FUN_00d377c0;
  return param_1;
}


//// FUNCTION FUN_006899e0 @ 006899e0 ////

undefined4 * __thiscall FUN_006899e0(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00689a00 @ 00689a00 ////

char __fastcall FUN_00689a00(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  cVar1 = FUN_007402d0(param_1);
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) & 0xfffffffe;
    return cVar1;
  }
  cVar1 = FUN_00553f70(0x73);
  if (cVar1 == '\0') {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) & 0xfffffffe;
  }
  else if (((*(uint *)(param_1 + 0x1c8) & 2) != 0) && (DAT_0104dac4 == (int *)0x0)) {
    uVar2 = *(uint *)(param_1 + 0x1c8) & 1;
    if (uVar2 != 0) {
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 1;
    }
    if ((*(byte *)(param_1 + 0x2f4) & 1) == 0) {
      return '\x01';
    }
    if ((uVar2 != 0) &&
       ((DAT_0104cce0 - DAT_0104cd00) * (DAT_0104cce0 - DAT_0104cd00) +
        (DAT_0104cce4 - DAT_0104cd04) * (DAT_0104cce4 - DAT_0104cd04) <= 64.0)) {
      return '\x01';
    }
    iVar3 = (**(code **)(*(int *)(param_1 + -0x50) + 0x100))();
    piVar4 = FUN_005f3e40(&DAT_0104dab0,iVar3);
    if (piVar4[5] == 0) {
      return '\x01';
    }
    iVar3 = *(int *)(param_1 + 200);
    do {
      if (iVar3 == 0) {
        piVar4 = (int *)FUN_0071b2a0();
LAB_00689ad9:
        (**(code **)(*piVar4 + 0xc))(DAT_0104dac4,1);
        (**(code **)(*(int *)(param_1 + -0x50) + 0xfc))();
        (**(code **)(*DAT_0104dac4 + 0xfc))();
        return '\x01';
      }
      iVar5 = FUN_0071b2b0();
      if (iVar3 == iVar5) {
        piVar4 = (int *)FUN_0071b2b0();
        goto LAB_00689ad9;
      }
      iVar3 = *(int *)(iVar3 + 0x118);
    } while( true );
  }
  cVar1 = (**(code **)(*(int *)(param_1 + -0x50) + 0x48))();
  if (cVar1 != '\0') {
    return '\x01';
  }
  return '\0';
}


//// FUNCTION FUN_00689bd0 @ 00689bd0 ////

int __fastcall FUN_00689bd0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00689ce0 @ 00689ce0 ////

int * __thiscall FUN_00689ce0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00689d10 @ 00689d10 ////

undefined4 * __cdecl FUN_00689d10(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00689d50 @ 00689d50 ////

undefined4 __fastcall FUN_00689d50(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 in_EAX;
  
  puVar2 = *(undefined4 **)(param_1 + 0x398);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 900) + 4))();
    *(undefined4 *)(param_1 + 0x398) = 0;
    in_EAX = (*(code *)**(undefined4 **)(param_1 + 900))();
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


//// FUNCTION FUN_00689e90 @ 00689e90 ////

void __cdecl FUN_00689e90(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00689f50 @ 00689f50 ////

undefined4 __thiscall FUN_00689f50(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)this;
  uVar4 = FUN_0069ea30(param_1);
  (**(code **)(iVar2 + 0x100))(uVar4);
  puVar3 = *(undefined4 **)((int)this + 0x398);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(*(int *)((int)this + 900) + 4))();
    *(undefined4 *)((int)this + 0x398) = 0;
    (*(code *)**(undefined4 **)((int)this + 900))();
  }
  if (*(code **)((int)this + 0x270) != (code *)0x0) {
    uVar4 = (**(code **)((int)this + 0x270))(this,*(undefined4 *)((int)this + 0x274));
    return uVar4;
  }
  return 1;
}


//// FUNCTION FUN_0068a210 @ 0068a210 ////

int __thiscall FUN_0068a210(void *this,wchar_t *param_1,undefined4 param_2,uint param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  wchar_t *_Dest;
  int iVar2;
  undefined4 *puVar3;
  int local_24;
  uint local_18;
  wchar_t local_14 [10];
  
  puVar3 = *(undefined4 **)((int)this + 0x348);
  local_24 = 0;
  if (puVar3 != *(undefined4 **)((int)this + 0x34c)) {
    do {
      _Count = puVar3[1];
      _Source = (wchar_t *)*puVar3;
      _Dest = local_14;
      local_14[0] = L'\0';
      local_18 = 10;
      if (9 < _Count) {
        uVar1 = _Count + 0x20 >> 5;
        local_18 = uVar1 << 5;
        _Dest = _malloc(uVar1 * 0x40);
      }
      _wcsncpy(_Dest,_Source,_Count);
      _Dest[_Count] = L'\0';
      iVar2 = _wcscmp(_Dest,param_1);
      if (iVar2 == 0) {
        if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
          _free(_Dest);
        }
        if (param_3 < 0xb) {
          return local_24;
        }
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
      local_24 = local_24 + 1;
      if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest);
      }
      puVar3 = puVar3 + 8;
    } while (puVar3 != *(undefined4 **)((int)this + 0x34c));
  }
  if (param_3 < 0xb) {
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_0068a360 @ 0068a360 ////

undefined4 * __thiscall FUN_0068a360(void *this,byte param_1)

{
  FUN_00447f70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0068a380 @ 0068a380 ////

undefined4 __fastcall FUN_0068a380(int param_1)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  void *pvVar10;
  int *piVar11;
  char *_Dest;
  int iVar12;
  uint uVar13;
  size_t sVar14;
  char *pcVar15;
  uint unaff_EBX;
  float10 fVar16;
  uint uVar17;
  undefined4 *puStack_130;
  undefined4 *puStack_12c;
  undefined4 *puStack_128;
  wchar_t *pwStack_124;
  uint uStack_120;
  uint uStack_11c;
  wchar_t awStack_118 [10];
  undefined1 auStack_104 [16];
  undefined4 uStack_f4;
  undefined **ppuStack_f0;
  undefined *puStack_ec;
  undefined **ppuStack_e8;
  undefined ***pppuStack_e4;
  undefined4 uStack_e0;
  undefined **ppuStack_dc;
  int iStack_d8;
  int *piStack_d4;
  undefined ***pppuStack_d0;
  undefined **ppuStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  undefined ***pppuStack_c0;
  undefined1 auStack_bc [4];
  int iStack_b8;
  int iStack_b4;
  wchar_t *pwStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  wchar_t awStack_a4 [10];
  undefined4 *puStack_90;
  void *pvStack_74;
  uint uStack_6c;
  undefined1 *puStack_54;
  char *pcStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  char acStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_38;
  char *pcStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  char acStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_18;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc6da2;
  local_c = ExceptionList;
  puStack_130 = ExceptionList;
  if (*(char *)(param_1 + 0x368) == '\0') {
    puVar7 = *(undefined4 **)(param_1 + 0x398);
    ExceptionList = &local_c;
    if (puVar7 != (undefined4 *)0x0) {
      piVar9 = puVar7 + 0x12;
      ExceptionList = &local_c;
      *piVar9 = *piVar9 + -1;
      if (*piVar9 == 0) {
        (**(code **)*puVar7)();
      }
      (**(code **)(*(int *)(param_1 + 900) + 4))();
      *(undefined4 *)(param_1 + 0x398) = 0;
      (*(code *)**(undefined4 **)(param_1 + 900))();
    }
    puVar7 = operator_new(0x288);
    uStack_4 = 0;
    puStack_130 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puStack_12c = (undefined4 *)0x0;
    }
    else {
      pwStack_124 = awStack_118;
      awStack_118[0] = awStack_118[0] & 0xff00;
      uStack_120 = 0;
      uStack_11c = 0x20;
      pwStack_124 = _malloc(0x20);
      _strncpy((char *)pwStack_124,"ui/dialogue_whitebox_solid.dds",0x1e);
      uStack_120 = 0x1e;
      *(char *)(pwStack_124 + 0xf) = '\0';
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      puStack_12c = FUN_005e8fd0(puVar7,&pwStack_124);
    }
    puVar8 = puStack_12c;
    uStack_4 = 0xffffffff;
    if ((puVar7 != (undefined4 *)0x0) && (0x14 < uStack_11c)) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_124);
    }
    FUN_005e7a00(puStack_12c,0);
    puVar8[0x9b] = 0x41800000;
    puStack_130 = operator_new(0x344);
    uStack_4 = 3;
    if (puStack_130 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = FUN_007432f0(puStack_130);
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)(param_1 + 900) + 4))();
    *(undefined4 **)(param_1 + 0x398) = puVar7;
    (*(code *)**(undefined4 **)(param_1 + 900))();
    puVar8 = (undefined4 *)FUN_005fbfa0(auStack_104,1,param_1,0);
    puVar7 = *(undefined4 **)(param_1 + 0x398);
    puVar7[0x28] = *puVar8;
    uStack_4 = 4;
    puStack_130 = puVar7;
    (**(code **)(puVar7[0x29] + 4))();
    puVar7[0x2e] = puVar8[6];
    (**(code **)puVar7[0x29])();
    puStack_130[0x2f] = puVar8[7];
    puStack_130[0x30] = puVar8[8];
    FUN_005f9ed0((int)auStack_104);
    puVar8 = (undefined4 *)FUN_005fbfa0(auStack_104,2,param_1,0);
    puVar7 = *(undefined4 **)(param_1 + 0x398);
    puVar7[0x3a] = *puVar8;
    uStack_4 = 5;
    puStack_130 = puVar7;
    (**(code **)(puVar7[0x3b] + 4))();
    puVar7[0x40] = puVar8[6];
    (**(code **)puVar7[0x3b])();
    puStack_130[0x41] = puVar8[7];
    puStack_130[0x42] = puVar8[8];
    uStack_4 = 0xffffffff;
    FUN_005f9ed0((int)auStack_104);
    uVar17 = 1;
    (**(code **)(**(int **)(param_1 + 0x398) + 100))();
    (**(code **)(**(int **)(param_1 + 0x398) + 0xa0))();
    if (*(int *)(param_1 + 0x348) == 0) {
      pcVar15 = (char *)0x0;
    }
    else {
      pcVar15 = (char *)(*(int *)(param_1 + 0x34c) - *(int *)(param_1 + 0x348) >> 5);
    }
    fVar3 = (float)(int)pcVar15;
    if ((int)pcVar15 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    _Dest = (char *)(fVar3 * 32.0);
    (**(code **)(**(int **)(param_1 + 0x398) + 0x7c))();
    puVar2 = (uint *)(*(int *)(param_1 + 0x398) + 0x114);
    *puVar2 = *puVar2 | 8;
    piVar9 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar9 + 0xc))();
    pvVar10 = operator_new(0x360);
    uStack_20 = 6;
    if (pvVar10 == (void *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      unaff_EBX = 0x20;
      pcVar15 = _malloc(0x20);
      _strncpy(pcVar15,"ui/dialogue_whitebox_line.dds",0x1d);
      pcVar15[0x1d] = '\0';
      uVar17 = uVar17 | 2;
      uStack_20 = CONCAT31(uStack_20._1_3_,7);
      piVar9 = FUN_0069d820(pvVar10,(undefined4 *)&stack0xfffffec0,0x3e800000,0x3e800000,0x3f400000,
                            0x3f400000);
    }
    uStack_20 = 0xffffffff;
    if (((uVar17 & 2) != 0) && (uVar17 = uVar17 & 0xfffffffd, 0x14 < unaff_EBX)) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar15);
    }
    (**(code **)(*piVar9 + 0x78))();
    uVar13 = 0;
    (**(code **)(*piVar9 + 0x60))();
    piVar11 = (int *)FUN_005fbfa0(&puStack_130,1,*(int *)(param_1 + 0x398),0x3f800000);
    piVar9[0x1f] = *piVar11;
    pcStack_30 = (char *)0x9;
    (**(code **)(piVar9[0x20] + 4))();
    piVar9[0x25] = piVar11[6];
    (**(code **)piVar9[0x20])();
    piVar9[0x26] = piVar11[7];
    piVar9[0x27] = piVar11[8];
    FUN_005f9ed0((int)&puStack_130);
    piVar11 = (int *)FUN_005fbfa0(&puStack_130,2,*(int *)(param_1 + 0x398),0);
    piVar9[0x31] = *piVar11;
    pcStack_30 = (char *)0xa;
    (**(code **)(piVar9[0x32] + 4))();
    piVar9[0x37] = piVar11[6];
    (**(code **)piVar9[0x32])();
    piVar9[0x38] = piVar11[7];
    piVar9[0x39] = piVar11[8];
    pcStack_30 = (char *)0xffffffff;
    FUN_005f9ed0((int)&puStack_130);
    (**(code **)(**(int **)(param_1 + 0x398) + 0xc))();
    pvVar10 = operator_new(0x360);
    uStack_38 = 0xb;
    if (pvVar10 == (void *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      uVar17 = 0x20;
      _Dest = _malloc(0x20);
      _strncpy(_Dest,"ui/dialogue_whitebox_arrow.dds",0x1e);
      _Dest[0x1e] = '\0';
      uVar13 = uVar13 | 4;
      uStack_38 = CONCAT31(uStack_38._1_3_,0xc);
      piVar9 = FUN_0069d820(pvVar10,(undefined4 *)&stack0xfffffea8,0,0x3f800000,0x3f800000,0);
    }
    uStack_38 = 0xffffffff;
    if (((uVar13 & 4) != 0) && (0x14 < uVar17)) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
    (**(code **)(*piVar9 + 0x74))();
    (**(code **)(*piVar9 + 0x68))(2);
    (**(code **)(*piVar9 + 0x60))(2,*(undefined4 *)(param_1 + 0x398),0);
    (**(code **)(*piVar9 + 0x18))(0,&LAB_00689ef0,param_1,"DROPDOWNMENU_CLOSE");
    (**(code **)(*piVar9 + 0x18))(5,&LAB_005f37f0,0,"DROPDOWNMENU_CLOSE");
    (**(code **)(**(int **)(param_1 + 0x398) + 0xc))(piVar9,1);
    puStack_130 = *(undefined4 **)(param_1 + 0x348);
    puStack_12c = (undefined4 *)0x0;
    if (puStack_130 != *(undefined4 **)(param_1 + 0x34c)) {
      do {
        pvVar10 = operator_new(0x288);
        uStack_4 = 0xe;
        if (pvVar10 == (void *)0x0) {
          puStack_128 = (undefined4 *)0x0;
        }
        else {
          pcStack_50 = acStack_44;
          acStack_44[0] = '\0';
          uStack_4c = 0;
          uStack_48 = 0x40;
          puStack_128 = pvVar10;
          pcStack_50 = _malloc(0x40);
          _strncpy(pcStack_50,"ui/dialogue_whitebox_hilight.dds",0x20);
          uStack_4c = 0x20;
          pcStack_50[0x20] = '\0';
          uStack_4 = CONCAT31(uStack_4._1_3_,0xf);
          puStack_128 = FUN_005e8fd0(pvVar10,&pcStack_50);
        }
        uStack_4 = 0xffffffff;
        if ((pvVar10 != (void *)0x0) && (0x14 < uStack_48)) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_50);
        }
        bVar5 = false;
        bVar4 = false;
        FUN_005e7a00(puStack_128,0x40000000);
        pvVar10 = operator_new(0x420);
        pvStack_10 = pvVar10;
        if (pvVar10 == (void *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          pwStack_124 = awStack_118;
          awStack_118[0] = L'\0';
          uStack_120 = 0;
          uStack_11c = 10;
          uVar17 = FUN_00ace02d((short *)&lpCaption_00d16918);
          if (uStack_11c <= uVar17) {
            if (10 < uStack_11c) {
                    /* WARNING: Subroutine does not return */
              _free(pwStack_124);
            }
            uStack_11c = uVar17 + 0x20 & 0xffffffe0;
            pwStack_124 = _malloc(uStack_11c * 2);
          }
          _wcsncpy(pwStack_124,(wchar_t *)&lpCaption_00d16918,uVar17);
          pwStack_124[uVar17] = L'\0';
          pcStack_30 = acStack_24;
          acStack_24[0] = '\0';
          uStack_2c = 0;
          uStack_28 = 0x40;
          uStack_120 = uVar17;
          pcStack_30 = _malloc(0x40);
          _strncpy(pcStack_30,"ui/dialogue_whitebox_hilight.dds",0x20);
          uStack_2c = 0x20;
          pcStack_30[0x20] = '\0';
          bVar5 = true;
          bVar4 = true;
          uStack_4 = 0x13;
          puStack_54 = &stack0xfffffeac;
          piVar9 = FUN_0069fb10(pvVar10,(int *)&pcStack_30,&pwStack_124,0x41d00000,0x41d00000,0,0,
                                0x3f800000,0x3f800000);
        }
        if ((bVar4) && (0x14 < uStack_28)) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_30);
        }
        uStack_4 = 0xffffffff;
        if ((bVar5) && (10 < uStack_11c)) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_124);
        }
        FUN_0069ea20(piVar9,puStack_12c);
        iVar12 = FUN_0069ea10(piVar9,0);
        *(undefined1 *)(iVar12 + 0xb) = 0;
        iVar12 = FUN_0069ea10(piVar9,1);
        *(undefined1 *)(iVar12 + 0xb) = 0;
        iVar12 = FUN_0069ea10(piVar9,2);
        *(undefined1 *)(iVar12 + 0xb) = 0;
        iVar12 = FUN_0069ea10(piVar9,3);
        *(undefined1 *)(iVar12 + 0xb) = 0;
        (**(code **)(*piVar9 + 0xa0))();
        (**(code **)(*piVar9 + 0x7c))();
        (**(code **)(*piVar9 + 100))();
        ppuStack_dc = *(undefined ***)(param_1 + 0x398);
        pppuStack_e4 = &ppuStack_f0;
        uStack_f4 = 1;
        puStack_ec = (undefined *)0x0;
        ppuStack_e8 = (undefined **)0x0;
        ppuStack_f0 = &PTR_FUN_00d18c2c;
        if (ppuStack_dc != (undefined **)0x0) {
          ppuStack_e8 = ppuStack_dc + 6;
          puStack_ec = *ppuStack_e8;
          *(undefined ***)(*ppuStack_e8 + 4) = &puStack_ec;
          *ppuStack_e8 = (undefined *)&puStack_ec;
        }
        iStack_d8 = 0x40400000;
        piStack_d4 = (int *)0x40400000;
        piVar9[0x28] = 1;
        uStack_18 = 0x16;
        (**(code **)(piVar9[0x29] + 4))();
        piVar9[0x2e] = (int)ppuStack_dc;
        (**(code **)piVar9[0x29])();
        piVar9[0x2f] = iStack_d8;
        piVar9[0x30] = (int)piStack_d4;
        ppuStack_f0 = &PTR_FUN_00d18c2c;
        if (ppuStack_e8 != (undefined **)0x0) {
          *ppuStack_e8 = puStack_ec;
        }
        if (puStack_ec != (undefined *)0x0) {
          *(undefined ***)(puStack_ec + 4) = ppuStack_e8;
        }
        iStack_b8 = *(int *)(param_1 + 0x398);
        pppuStack_c0 = &ppuStack_cc;
        ppuStack_dc = (undefined **)0x0;
        puStack_ec = (undefined *)0x0;
        ppuStack_e8 = (undefined **)0x0;
        pppuStack_d0 = (undefined ***)0x2;
        piStack_c8 = (int *)0x0;
        piStack_c4 = (int *)0x0;
        ppuStack_cc = &PTR_FUN_00d18c2c;
        if (iStack_b8 != 0) {
          piStack_c4 = (int *)(iStack_b8 + 0x18);
          piStack_c8 = (int *)*piStack_c4;
          *(int ***)(*piStack_c4 + 4) = &piStack_c8;
          *piStack_c4 = (int)&piStack_c8;
        }
        iStack_b4 = 0x420c0000;
        pwStack_b0 = (wchar_t *)0x420c0000;
        piVar9[0x3a] = 2;
        uStack_18 = 0x17;
        (**(code **)(piVar9[0x3b] + 4))();
        piVar9[0x40] = iStack_b8;
        (**(code **)piVar9[0x3b])();
        piVar9[0x41] = iStack_b4;
        piVar9[0x42] = (int)pwStack_b0;
        uStack_18 = 0xffffffff;
        ppuStack_cc = &PTR_FUN_00d18c2c;
        if (piStack_c4 != (int *)0x0) {
          *piStack_c4 = (int)piStack_c8;
        }
        if (piStack_c8 != (int *)0x0) {
          piStack_c8[1] = (int)piStack_c4;
        }
        iStack_b8 = 0;
        piStack_c8 = (int *)0x0;
        piStack_c4 = (int *)0x0;
        (**(code **)(*piVar9 + 0x18))();
        pcVar15 = "DROPDOWNMENU_ITEM";
        (**(code **)(*piVar9 + 0x18))();
        (**(code **)(**(int **)(param_1 + 0x398) + 0xc))();
        pwStack_b0 = awStack_a4;
        awStack_a4[0] = L'\0';
        uStack_ac = 0;
        uStack_a8 = 10;
        uVar17 = FUN_00ace02d(L"<p align=left><t1>");
        if (uStack_a8 <= uVar17) {
          if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
            _free(pwStack_b0);
          }
          uVar13 = uVar17 + 0x20 >> 5;
          uStack_a8 = uVar13 << 5;
          pwStack_b0 = _malloc(uVar13 * 0x40);
        }
        _wcsncpy(pwStack_b0,L"<p align=left><t1>",uVar17);
        pwStack_b0[uVar17] = L'\0';
        uStack_40 = 0x18;
        uStack_ac = uVar17;
        FUN_0040cae0(&pwStack_b0,*(wchar_t **)pcVar15,*(size_t *)(pcVar15 + 4));
        sVar14 = FUN_00ace02d(L"</t1></p>");
        FUN_0040cae0(&pwStack_b0,L"</t1></p>",sVar14);
        puStack_90 = operator_new(0x3fc);
        uStack_40._0_1_ = 0x19;
        if (puStack_90 == (undefined4 *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = FUN_00833290(puStack_90);
        }
        uStack_40 = CONCAT31(uStack_40._1_3_,0x18);
        (**(code **)(*piVar11 + 100))(1);
        piVar1 = piVar9 + 6;
        iVar12 = *piVar1;
        *(undefined1 **)(*piVar1 + 4) = &stack0xfffffebc;
        *piVar1 = (int)&stack0xfffffebc;
        puStack_130 = (undefined4 *)0x0;
        puStack_12c = (undefined4 *)0x0;
        piVar11[0x3a] = 2;
        uStack_4c._0_1_ = 0x1a;
        (**(code **)(piVar11[0x3b] + 4))();
        piVar11[0x40] = (int)piVar9;
        (**(code **)piVar11[0x3b])();
        piVar11[0x41] = (int)puStack_130;
        piVar11[0x42] = (int)puStack_12c;
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar12;
        }
        if (iVar12 != 0) {
          *(int **)(iVar12 + 4) = piVar1;
        }
        pppuStack_d0 = &ppuStack_dc;
        piStack_d4 = piVar9 + 6;
        ppuStack_dc = &PTR_FUN_00d18c2c;
        uStack_e0 = 1;
        iStack_d8 = *piStack_d4;
        *(int **)(*piStack_d4 + 4) = &iStack_d8;
        *piStack_d4 = (int)&iStack_d8;
        piStack_c4 = (int *)0x40000000;
        pppuStack_c0 = (undefined ***)0x40000000;
        piVar11[0x28] = 1;
        uStack_4c._0_1_ = 0x1b;
        piStack_c8 = piVar9;
        (**(code **)(piVar11[0x29] + 4))();
        piVar11[0x2e] = (int)piStack_c8;
        (**(code **)piVar11[0x29])();
        piVar11[0x2f] = (int)piStack_c4;
        piVar11[0x30] = (int)pppuStack_c0;
        uStack_4c = CONCAT31(uStack_4c._1_3_,0x18);
        ppuStack_dc = &PTR_FUN_00d18c2c;
        if (piStack_d4 != (int *)0x0) {
          *piStack_d4 = iStack_d8;
        }
        if (iStack_d8 != 0) {
          *(int **)(iStack_d8 + 4) = piStack_d4;
        }
        piStack_c8 = (int *)0x0;
        iStack_d8 = 0;
        piStack_d4 = (int *)0x0;
        do {
          cVar6 = (**(code **)(*piVar11 + 0x50))(1);
        } while (cVar6 != '\0');
        (**(code **)(*piVar11 + 0x54))(auStack_bc);
        (**(code **)(*piVar11 + 0x8c))(0);
        fVar16 = (float10)(**(code **)(*piVar11 + 0x14))();
        if (fVar16 < (float10)26.0) {
          iVar12 = *piVar11;
          fVar16 = (float10)(**(code **)(iVar12 + 0x14))();
          (**(code **)(iVar12 + 100))(1,piVar9,(float)(((float10)26.0 - fVar16) * (float10)0.5));
        }
        (**(code **)(*piVar9 + 0xc))(piVar11,1);
        puStack_12c = (undefined4 *)((int)puStack_12c + 1);
        uStack_4 = 0xffffffff;
        if (10 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_74);
        }
        puStack_130 = puStack_130 + 8;
      } while (puStack_130 != *(undefined4 **)(param_1 + 0x34c));
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)puStack_130 >> 8),1);
}


//// FUNCTION FUN_0068b2a0 @ 0068b2a0 ////

undefined4 __thiscall FUN_0068b2a0(void *this,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    iVar1 = 0;
    if (*(int *)((int)this + 0x358) != 0) {
      iVar1 = (*(int *)((int)this + 0x35c) - *(int *)((int)this + 0x358)) / 0x18;
    }
    if (param_1 < iVar1) {
      return *(undefined4 *)(*(int *)((int)this + 0x358) + param_1 * 0x18 + 0x14);
    }
  }
  return 0;
}


//// FUNCTION FUN_0068b350 @ 0068b350 ////

void __cdecl FUN_0068b350(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_FUN_00d1a200;
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


//// FUNCTION FUN_0068b3c0 @ 0068b3c0 ////

void __cdecl FUN_0068b3c0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_FUN_00d1a200;
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


//// FUNCTION FUN_0068b490 @ 0068b490 ////

void FUN_0068b490(void)

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
  puStack_8 = &LAB_00cc6db8;
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


//// FUNCTION FUN_0068b5d0 @ 0068b5d0 ////

undefined4 * FUN_0068b5d0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_0068b3c0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0068b600 @ 0068b600 ////

void FUN_0068b600(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00447f70(param_1);
  }
  return;
}


//// FUNCTION FUN_0068b630 @ 0068b630 ////

void __thiscall FUN_0068b630(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cc6dd8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d1a200;
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
      FUN_0068b490();
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
        iVar3 = FUN_00689bd0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_0068b350(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_0068b3c0(puVar5,param_2,(int)&local_34);
      FUN_0068b350((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0068b600(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_0068b350((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0068b5d0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00689e90(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_0068b350((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00689d10((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00689e90(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_0068b970 @ 0068b970 ////

void __thiscall FUN_0068b970(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0068b9b5;
    }
  }
  iVar1 = 0;
LAB_0068b9b5:
  FUN_0068b630(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_0068b9e0 @ 0068b9e0 ////

void __fastcall FUN_0068b9e0(int param_1)

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
    FUN_00447f70(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0068ba30 @ 0068ba30 ////

void __fastcall FUN_0068ba30(int param_1)

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
    FUN_00447f70(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0068ba40 @ 0068ba40 ////

void __thiscall FUN_0068ba40(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0068b3c0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0068b970(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0068bad0 @ 0068bad0 ////

undefined4 * __fastcall FUN_0068bad0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined **ppuStack_8c;
  int iStack_88;
  int *piStack_84;
  undefined ***pppuStack_80;
  undefined1 *puStack_7c;
  undefined4 *puStack_78;
  char *pcStack_74;
  char *pcStack_70;
  undefined4 *puStack_6c;
  uint uStack_68;
  char *pcStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  char acStack_24 [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc6eb7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d37a04;
  param_1[0x14] = &PTR_LAB_00d379e8;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  piVar1 = param_1 + 0xdb;
  param_1[0xde] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  param_1[0xe0] = 0;
  param_1[0xe4] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = param_1 + 0xe1;
  param_1[0xe1] = &PTR_FUN_00d18c2c;
  param_1[0xe6] = 0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  *(undefined1 *)(param_1 + 0xda) = 0;
  param_1[0xd9] = 0xffffffff;
  FUN_0073f490(param_1,32.0);
  pvVar3 = operator_new(0x288);
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    pcStack_30 = acStack_24;
    acStack_24[0] = '\0';
    uStack_2c = 0;
    uStack_28 = 0x20;
    pcStack_30 = _malloc(0x20);
    _strncpy(pcStack_30,"ui/dialogue_whitebox.dds",0x18);
    uStack_2c = 0x18;
    pcStack_30[0x18] = '\0';
    local_4 = CONCAT31(local_4._1_3_,6);
    puVar4 = FUN_005e8fd0(pvVar3,&pcStack_30);
  }
  local_4 = 4;
  if ((pvVar3 != (void *)0x0) && (0x14 < uStack_28)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_30);
  }
  FUN_005e7a00(puVar4,0);
  puVar4[0x9b] = 0x41800000;
  FUN_0073fae0(param_1,puVar4);
  pvVar3 = operator_new(0x360);
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    pcStack_30 = acStack_24;
    acStack_24[0] = '\0';
    uStack_2c = 0;
    uStack_28 = 0x20;
    pcStack_30 = _malloc(0x20);
    _strncpy(pcStack_30,"ui/dialogue_whitebox_arrow.dds",0x1e);
    uStack_2c = 0x1e;
    pcStack_30[0x1e] = '\0';
    local_4 = CONCAT31(local_4._1_3_,9);
    uStack_68 = 0x68bcce;
    piVar5 = FUN_0069d820(pvVar3,&pcStack_30,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 4;
  if ((pvVar3 != (void *)0x0) && (0x14 < uStack_28)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_30);
  }
  (**(code **)(*piVar5 + 0x74))();
  uStack_68 = 0x68bd20;
  (**(code **)(*piVar5 + 0x60))();
  uStack_68 = 0;
  pcStack_70 = (char *)0x1;
  pcStack_74 = (char *)0x68bd2b;
  puStack_6c = param_1;
  (**(code **)(*piVar5 + 100))();
  pcStack_74 = "DROPDOWNMENU_OPENMENU";
  puStack_7c = &LAB_0068b300;
  pppuStack_80 = (undefined ***)0x0;
  piStack_84 = (int *)0x68bd3e;
  puStack_78 = param_1;
  (**(code **)(*piVar5 + 0x18))();
  piStack_84 = (int *)0xd379cc;
  iStack_88 = 0;
  ppuStack_8c = (undefined **)&LAB_005f37f0;
  (**(code **)(*piVar5 + 0x18))();
  FUN_0073f6e0(param_1,piVar5);
  pvVar3 = operator_new(0x360);
  pcStack_74 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    pcStack_70 = &stack0xffffff9c;
    puStack_6c = (undefined4 *)0x0;
    uStack_68 = 0x20;
    pcStack_70 = _malloc(0x20);
    _strncpy(pcStack_70,"ui/dialogue_whitebox_line.dds",0x1d);
    puStack_6c = (undefined4 *)0x1d;
    pcStack_70[0x1d] = '\0';
    pppuStack_80 = (undefined ***)((uint)pppuStack_80 | 4);
    puStack_78 = (undefined4 *)&stack0xffffff60;
    piVar5 = FUN_0069d820(pvVar3,&pcStack_70,0x3e800000,0x3e800000,0x3f400000,0x3f400000);
  }
  if ((((uint)pppuStack_80 & 4) != 0) && (0x14 < uStack_68)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_70);
  }
  (**(code **)(*piVar5 + 0x74))();
  (**(code **)(*piVar5 + 0x60))(2);
  (**(code **)(*piVar5 + 100))(1,param_1,0x3f800000);
  FUN_0073f6e0(param_1,piVar5);
  puVar4 = operator_new(0x3fc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00833290(puVar4);
  }
  (**(code **)(*piVar1 + 4))();
  param_1[0xe0] = puVar4;
  (**(code **)*piVar1)();
  pppuStack_80 = &ppuStack_8c;
  piStack_84 = param_1 + 6;
  ppuStack_8c = &PTR_FUN_00d18c2c;
  iStack_88 = *piStack_84;
  *(int **)(*piStack_84 + 4) = &iStack_88;
  *piStack_84 = (int)&iStack_88;
  pcStack_74 = (char *)0x40400000;
  pcStack_70 = (char *)0x40400000;
  iVar2 = param_1[0xe0];
  *(undefined4 *)(iVar2 + 0xa0) = 1;
  puStack_78 = param_1;
  (**(code **)(*(int *)(iVar2 + 0xa4) + 4))();
  *(undefined4 **)(iVar2 + 0xb8) = puStack_78;
  (*(code *)**(undefined4 **)(iVar2 + 0xa4))();
  *(char **)(iVar2 + 0xbc) = pcStack_74;
  *(char **)(iVar2 + 0xc0) = pcStack_70;
  if (piStack_84 != (int *)0x0) {
    *piStack_84 = iStack_88;
  }
  if (iStack_88 != 0) {
    *(int **)(iStack_88 + 4) = piStack_84;
  }
  pppuStack_80 = &ppuStack_8c;
  piStack_84 = param_1 + 6;
  ppuStack_8c = &PTR_FUN_00d18c2c;
  iStack_88 = *piStack_84;
  *(int **)(*piStack_84 + 4) = &iStack_88;
  *piStack_84 = (int)&iStack_88;
  pcStack_74 = (char *)0x420c0000;
  pcStack_70 = (char *)0x420c0000;
  iVar2 = param_1[0xe0];
  *(undefined4 *)(iVar2 + 0xe8) = 2;
  puStack_78 = param_1;
  (**(code **)(*(int *)(iVar2 + 0xec) + 4))();
  *(undefined4 **)(iVar2 + 0x100) = puStack_78;
  (*(code *)**(undefined4 **)(iVar2 + 0xec))();
  *(char **)(iVar2 + 0x104) = pcStack_74;
  *(char **)(iVar2 + 0x108) = pcStack_70;
  if (piStack_84 != (int *)0x0) {
    *piStack_84 = iStack_88;
  }
  if (iStack_88 != 0) {
    *(int **)(iStack_88 + 4) = piStack_84;
  }
  (**(code **)(*(int *)param_1[0xe0] + 0x7c))(0x41d00000);
  (**(code **)(*(int *)param_1[0xe0] + 100))(1,param_1,0x40400000);
  FUN_0073f6e0(param_1,(int *)param_1[0xe0]);
  ExceptionList = puStack_7c;
  return param_1;
}


//// FUNCTION FUN_0068c030 @ 0068c030 ////

void __fastcall FUN_0068c030(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc6f10;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d37a04;
  param_1[0x14] = &PTR_LAB_00d379e8;
  puVar2 = (undefined4 *)param_1[0xe6];
  local_4 = 4;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xe1] + 4))();
    param_1[0xe6] = 0;
    (**(code **)param_1[0xe1])();
  }
  param_1[0xe1] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xe3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe3] = param_1[0xe2];
  }
  if (param_1[0xe2] != 0) {
    *(undefined4 *)(param_1[0xe2] + 4) = param_1[0xe3];
  }
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe6] = 0;
  if ((undefined4 *)param_1[0xe3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe3] = param_1[0xe2];
  }
  if (param_1[0xe2] != 0) {
    *(undefined4 *)(param_1[0xe2] + 4) = param_1[0xe3];
  }
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xdb] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xdd] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdd] = param_1[0xdc];
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = param_1[0xdd];
  }
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xe0] = 0;
  if ((undefined4 *)param_1[0xdd] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdd] = param_1[0xdc];
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = param_1[0xdd];
  }
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  FUN_0068b9e0((int)(param_1 + 0xd5));
  if ((undefined4 *)param_1[0xd2] != (undefined4 *)0x0) {
    FUN_00481090((undefined4 *)param_1[0xd2],(undefined4 *)param_1[0xd3]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd2]);
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0068c1e0 @ 0068c1e0 ////

int __thiscall FUN_0068c1e0(void *this,void *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int in_stack_00000024;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc6f30;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00482460((void *)((int)this + 0x344),&param_1);
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d1a200;
  local_10 = in_stack_00000024;
  if (in_stack_00000024 != 0) {
    local_1c = (int *)(in_stack_00000024 + 0x18);
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0068ba40((void *)((int)this + 0x354),(int)&local_24);
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  if (*(int *)((int)this + 0x348) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x34c) - *(int *)((int)this + 0x348) >> 5;
  }
  if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return iVar1 + -1;
}


//// FUNCTION FUN_0068c2d0 @ 0068c2d0 ////

undefined4 * __thiscall FUN_0068c2d0(void *this,byte param_1)

{
  FUN_0068c030(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0068c2f0 @ 0068c2f0 ////

int __fastcall FUN_0068c2f0(int param_1)

{
  uint3 extraout_var;
  uint3 extraout_var_00;
  uint3 uVar1;
  
  FUN_006898f0(param_1);
  uVar1 = extraout_var;
  if ((*(byte *)(param_1 + 0x2f4) & 1) == 0) {
    if (*(char *)(param_1 + 0x308) == '\0') {
      *(undefined4 *)(param_1 + 0x30c) = 2;
    }
    *(undefined1 *)(param_1 + 0x308) = 1;
    (**(code **)(*(int *)(param_1 + -0x50) + 0x20))(0);
    uVar1 = extraout_var_00;
  }
  return (uint)uVar1 << 8;
}


//// FUNCTION FUN_0068c340 @ 0068c340 ////

undefined4 * __fastcall FUN_0068c340(undefined4 *param_1)

{
  FUN_006898b0(param_1);
  *param_1 = &PTR_FUN_00d37b34;
  param_1[0x14] = &PTR_FUN_00d37b1c;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  return param_1;
}


//// FUNCTION FUN_0068c360 @ 0068c360 ////

undefined4 * __thiscall FUN_0068c360(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0068c380 @ 0068c380 ////

void __fastcall FUN_0068c380(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  WWindow_Tick(param_1);
  if (((char)param_1[0xd6] != '\0') &&
     (iVar2 = param_1[0xd7], param_1[0xd7] = iVar2 + -1, iVar2 == 0)) {
    piVar1 = param_1 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  return;
}


//// FUNCTION FUN_0068c3f0 @ 0068c3f0 ////

void __fastcall FUN_0068c3f0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d37c38;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0068c440 @ 0068c440 ////

void __fastcall FUN_0068c440(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d37c38;
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


//// FUNCTION FUN_0068c490 @ 0068c490 ////

undefined4 * __fastcall FUN_0068c490(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d37c64;
  param_1[0x14] = &PTR_LAB_00d37c48;
  return param_1;
}


//// FUNCTION FUN_0068c4c0 @ 0068c4c0 ////

void __fastcall FUN_0068c4c0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = (**(code **)(*param_1 + 0xc4))();
  if (cVar2 != '\0') {
    iVar1 = *param_1;
    uVar3 = (**(code **)(iVar1 + 0xfc))();
    (**(code **)(iVar1 + 200))(uVar3);
  }
  FUN_00740280((int)param_1);
  return;
}


//// FUNCTION FUN_0068c510 @ 0068c510 ////

undefined4 * __thiscall FUN_0068c510(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0068c5b0 @ 0068c5b0 ////

void __fastcall FUN_0068c5b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
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


//// FUNCTION FUN_0068c630 @ 0068c630 ////

void __fastcall FUN_0068c630(int *param_1)

{
  WWindow_Tick(param_1);
                    /* WARNING: Could not recover jumptable at 0x0068c63d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))();
  return;
}


//// FUNCTION FUN_0068c650 @ 0068c650 ////

int * __thiscall FUN_0068c650(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0068c680 @ 0068c680 ////

undefined4 FUN_0068c680(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc6f4b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_0046f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(this,0x18a);
  (**(code **)(this[0xe] + 4))();
  this[0x13] = param_2;
  (**(code **)this[0xe])();
  uVar2 = FUN_005e9280(DAT_0104d82c,extraout_EDX,this);
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_0068c740 @ 0068c740 ////

void __fastcall FUN_0068c740(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvStack_ac;
  int *piVar3;
  int **ppiVar4;
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined4 *puStack_88;
  float fStack_84;
  int *piStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  undefined4 *puStack_60;
  float fStack_5c;
  char *_Dest;
  uint uVar5;
  float local_34 [2];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc6fac;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x394);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_0089ea20(puVar1);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"awardcorner_l",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 1;
  fStack_5c = 9.622583e-39;
  FUN_0089e070(piVar2,&local_2c,0,1,'\x01');
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_00882710((void *)piVar2[0xd6],local_34);
  (**(code **)(*piVar2 + 0x74))();
  FUN_0089e5f0(piVar2,'\x01');
  fStack_5c = 1.4013e-45;
  puStack_60 = (undefined4 *)0x68c829;
  (**(code **)(*piVar2 + 0x5c))();
  puStack_60 = (undefined4 *)0x0;
  uStack_68 = 1;
  uStack_6c = 0x68c834;
  piStack_64 = param_1;
  (**(code **)(*piVar2 + 100))();
  uStack_6c = 1;
  piStack_70 = piVar2;
  (**(code **)(*param_1 + 0xc))();
  puStack_60 = operator_new(0x394);
  local_2c = (char *)0x2;
  if (puStack_60 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_0089ea20(puStack_60);
  }
  _Dest = &stack0xffffffb8;
  uVar5 = 0x14;
  _strncpy(_Dest,"awardcorner_r",0xd);
  _Dest[0xd] = '\0';
  local_2c = (char *)0x3;
  fStack_84 = 9.622893e-39;
  FUN_0089e070(piVar2,(undefined4 *)&stack0xffffffac,0,1,'\x01');
  local_2c = (char *)0xffffffff;
  if (0x14 < uVar5) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  FUN_00882710((void *)piVar2[0xd6],&fStack_5c);
  (**(code **)(*piVar2 + 0x74))();
  FUN_0089e5f0(piVar2,'\x01');
  fStack_84 = 2.8026e-45;
  puStack_88 = (undefined4 *)0x68c90a;
  (**(code **)(*piVar2 + 0x60))();
  puStack_88 = (undefined4 *)0x0;
  uStack_90 = 1;
  uStack_94 = 0x68c915;
  piStack_8c = param_1;
  (**(code **)(*piVar2 + 100))();
  uStack_94 = 1;
  piStack_98 = piVar2;
  (**(code **)(*param_1 + 0xc))();
  puStack_88 = operator_new(0x394);
  if (puStack_88 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_0089ea20(puStack_88);
  }
  ppiVar4 = &piStack_70;
  piStack_70 = (int *)((uint)piStack_70 & 0xffffff00);
  uVar5 = 0x14;
  _strncpy((char *)ppiVar4,"awardcornerlow_l",0x10);
  *(char *)(ppiVar4 + 4) = '\0';
  pvStack_ac = (void *)0x68c997;
  FUN_0089e070(piVar2,(undefined4 *)&stack0xffffff84,0,1,'\x01');
  if (0x14 < uVar5) {
                    /* WARNING: Subroutine does not return */
    _free(ppiVar4);
  }
  FUN_00882710((void *)piVar2[0xd6],&fStack_84);
  (**(code **)(*piVar2 + 0x74))();
  FUN_0089e5f0(piVar2,'\x01');
  pvStack_ac = (void *)0x1;
  piVar3 = param_1;
  (**(code **)(*piVar2 + 0x5c))();
  (**(code **)(*piVar2 + 0x68))(2,param_1,0);
  (**(code **)(*param_1 + 0xc))(piVar2,1);
  puVar1 = operator_new(0x394);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_0089ea20(puVar1);
  }
  ppiVar4 = &piStack_98;
  piStack_98 = (int *)((uint)piStack_98 & 0xffffff00);
  uVar5 = 0x14;
  _strncpy((char *)ppiVar4,"awardcornerlow_r",0x10);
  *(char *)(ppiVar4 + 4) = '\0';
  FUN_0089e070(piVar2,(undefined4 *)&stack0xffffff5c,0,1,'\x01');
  if (0x14 < uVar5) {
                    /* WARNING: Subroutine does not return */
    _free(ppiVar4);
  }
  FUN_00882710((void *)piVar2[0xd6],(float *)&pvStack_ac);
  (**(code **)(*piVar2 + 0x74))(pvStack_ac,piVar3);
  FUN_0089e5f0(piVar2,'\x01');
  (**(code **)(*piVar2 + 0x60))(2,param_1,0x41100000);
  (**(code **)(*piVar2 + 0x68))(2,param_1,0);
  (**(code **)(*param_1 + 0xc))(piVar2,1);
  ExceptionList = pvStack_ac;
  return;
}


//// FUNCTION FUN_0068caf0 @ 0068caf0 ////

void __fastcall FUN_0068caf0(int param_1)

{
  int iVar1;
  void *pvVar2;
  float10 fVar3;
  undefined4 *local_54;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7098;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x360);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    local_54 = (undefined4 *)0x0;
  }
  else {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"ui/fullsrn_win1.dds",0x13);
    local_48 = 0x13;
    local_4c[0x13] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    local_54 = FUN_0069d820(pvVar2,&local_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 2;
  (**(code **)(*(int *)(param_1 + 0x35c) + 4))();
  *(undefined4 **)(param_1 + 0x370) = local_54;
  (*(code *)**(undefined4 **)(param_1 + 0x35c))();
  local_4 = 0xffffffff;
  if (pvVar2 != (void *)0x0) {
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  pvVar2 = operator_new(0x360);
  local_4 = 3;
  if (pvVar2 == (void *)0x0) {
    local_54 = (undefined4 *)0x0;
  }
  else {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"ui/fullsrn_win2.dds",0x13);
    local_48 = 0x13;
    local_4c[0x13] = '\0';
    local_4 = CONCAT31(local_4._1_3_,4);
    local_54 = FUN_0069d820(pvVar2,&local_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 5;
  (**(code **)(*(int *)(param_1 + 0x38c) + 4))();
  *(undefined4 **)(param_1 + 0x3a0) = local_54;
  (*(code *)**(undefined4 **)(param_1 + 0x38c))();
  local_4 = 0xffffffff;
  if (pvVar2 != (void *)0x0) {
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  pvVar2 = operator_new(0x360);
  local_4 = 6;
  if (pvVar2 == (void *)0x0) {
    local_54 = (undefined4 *)0x0;
  }
  else {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"ui/fullsrn_win3.dds",0x13);
    local_48 = 0x13;
    local_4c[0x13] = '\0';
    local_4 = CONCAT31(local_4._1_3_,7);
    local_54 = FUN_0069d820(pvVar2,&local_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 8;
  (**(code **)(*(int *)(param_1 + 0x3bc) + 4))();
  *(undefined4 **)(param_1 + 0x3d0) = local_54;
  (*(code *)**(undefined4 **)(param_1 + 0x3bc))();
  local_4 = 0xffffffff;
  if (pvVar2 != (void *)0x0) {
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  pvVar2 = operator_new(0x360);
  local_4 = 9;
  if (pvVar2 == (void *)0x0) {
    local_54 = (undefined4 *)0x0;
  }
  else {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x20;
    local_4c = _malloc(0x20);
    _strncpy(local_4c,"ui/fullsrn_win1mask.dds",0x17);
    local_48 = 0x17;
    local_4c[0x17] = '\0';
    local_4 = CONCAT31(local_4._1_3_,10);
    local_54 = FUN_0069d820(pvVar2,&local_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xb;
  (**(code **)(*(int *)(param_1 + 0x374) + 4))();
  *(undefined4 **)(param_1 + 0x388) = local_54;
  (*(code *)**(undefined4 **)(param_1 + 0x374))();
  local_4 = 0xffffffff;
  if (pvVar2 != (void *)0x0) {
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  pvVar2 = operator_new(0x360);
  local_4 = 0xc;
  if (pvVar2 == (void *)0x0) {
    local_54 = (undefined4 *)0x0;
  }
  else {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x20;
    local_4c = _malloc(0x20);
    _strncpy(local_4c,"ui/fullsrn_win2mask.dds",0x17);
    local_48 = 0x17;
    local_4c[0x17] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xd);
    local_54 = FUN_0069d820(pvVar2,&local_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xe;
  (**(code **)(*(int *)(param_1 + 0x3a4) + 4))();
  *(undefined4 **)(param_1 + 0x3b8) = local_54;
  (*(code *)**(undefined4 **)(param_1 + 0x3a4))();
  local_4 = 0xffffffff;
  if (pvVar2 != (void *)0x0) {
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  pvVar2 = operator_new(0x360);
  local_4 = 0xf;
  if (pvVar2 == (void *)0x0) {
    local_54 = (undefined4 *)0x0;
  }
  else {
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x20;
    pcStack_2c = _malloc(0x20);
    _strncpy(pcStack_2c,"ui/fullsrn_win3mask.dds",0x17);
    uStack_28 = 0x17;
    pcStack_2c[0x17] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x10);
    local_54 = FUN_0069d820(pvVar2,&pcStack_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0x11;
  (**(code **)(*(int *)(param_1 + 0x3d4) + 4))();
  *(undefined4 **)(param_1 + 1000) = local_54;
  (*(code *)**(undefined4 **)(param_1 + 0x3d4))();
  local_4 = 0xffffffff;
  if ((pvVar2 != (void *)0x0) && (0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  (**(code **)(**(int **)(param_1 + 0x370) + 100))();
  (**(code **)(**(int **)(param_1 + 0x370) + 0x5c))(1,*(undefined4 *)(param_1 + 0x460));
  iVar1 = **(int **)(param_1 + 0x370);
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  (**(code **)(iVar1 + 0x78))((float)(fVar3 - (float10)10.0));
  (**(code **)(**(int **)(param_1 + 0x370) + 0x7c))(0x43260000);
  (**(code **)(**(int **)(param_1 + 0x388) + 100))(1,*(undefined4 *)(param_1 + 0x460),0);
  (**(code **)(**(int **)(param_1 + 0x388) + 0x5c))(1,*(undefined4 *)(param_1 + 0x460),0);
  iVar1 = **(int **)(param_1 + 0x388);
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  (**(code **)(iVar1 + 0x78))((float)(fVar3 - (float10)10.0));
  (**(code **)(**(int **)(param_1 + 0x388) + 0x7c))(0x43260000);
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x68))(2,*(undefined4 *)(param_1 + 0x460),0);
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x5c))(1,*(undefined4 *)(param_1 + 0x460),0);
  iVar1 = **(int **)(param_1 + 0x3d0);
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  (**(code **)(iVar1 + 0x78))((float)(fVar3 - (float10)10.0));
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x7c))(0x43000000);
  (**(code **)(**(int **)(param_1 + 1000) + 0x68))(2,*(undefined4 *)(param_1 + 0x460),0);
  (**(code **)(**(int **)(param_1 + 1000) + 0x5c))(1,*(undefined4 *)(param_1 + 0x460),0);
  iVar1 = **(int **)(param_1 + 1000);
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  (**(code **)(iVar1 + 0x78))((float)(fVar3 - (float10)10.0));
  (**(code **)(**(int **)(param_1 + 1000) + 0x7c))(0x43000000);
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))(*(undefined4 *)(param_1 + 0x370),2);
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))(*(undefined4 *)(param_1 + 0x3d0),2);
  pvVar2 = *(void **)(param_1 + 0x388);
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))(pvVar2,1);
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))(*(undefined4 *)(param_1 + 1000),1);
  (**(code **)(**(int **)(param_1 + 0x460) + 0x50))(1);
  (**(code **)(**(int **)(param_1 + 0x3a0) + 100))(2,*(undefined4 *)(param_1 + 0x370),0);
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x5c))(1,*(undefined4 *)(param_1 + 0x460),0x3f800000);
  iVar1 = **(int **)(param_1 + 0x3a0);
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  (**(code **)(iVar1 + 0x78))((float)(fVar3 - (float10)10.0));
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x7c))(0x43990000);
  (**(code **)(**(int **)(param_1 + 0x3b8) + 100))(2,*(undefined4 *)(param_1 + 0x370),0);
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x5c))(1,*(undefined4 *)(param_1 + 0x460),0x3f800000);
  iVar1 = **(int **)(param_1 + 0x3b8);
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  (**(code **)(iVar1 + 0x78))((float)(fVar3 - (float10)10.0));
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x7c))(0x43990000);
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))(*(undefined4 *)(param_1 + 0x3a0),2);
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))(*(undefined4 *)(param_1 + 0x3b8),1);
  ExceptionList = pvVar2;
  return;
}


//// FUNCTION FUN_0068d330 @ 0068d330 ////

void __fastcall FUN_0068d330(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d37e3c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0068d380 @ 0068d380 ////

void __fastcall FUN_0068d380(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d37e3c;
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


//// FUNCTION FUN_0068d3d0 @ 0068d3d0 ////

void __fastcall FUN_0068d3d0(undefined4 *param_1)

{
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc7160;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d37e64;
  param_1[0x14] = &PTR_FUN_00d37e4c;
  local_4 = 0xc;
  FUN_009a1560(0);
  FUN_004237f0(DAT_00f87b04);
  FUN_0071bd00();
  FUN_005e98d0(DAT_0104d82c,extraout_EDX);
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
  param_1[0xfb] = &PTR_FUN_00d2d110;
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
  param_1[0xf5] = &PTR_FUN_00d2d110;
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
  param_1[0xef] = &PTR_FUN_00d2d110;
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
  param_1[0xe9] = &PTR_FUN_00d2d110;
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
  param_1[0xe3] = &PTR_FUN_00d2d110;
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
  param_1[0xd7] = &PTR_FUN_00d2d110;
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
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0068d990 @ 0068d990 ////

void __fastcall FUN_0068d990(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  size_t sVar6;
  float10 fVar7;
  void *_Memory;
  uint *puStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  uint uStack_88;
  void *pvStack_60;
  void *apvStack_54 [2];
  uint uStack_4c;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7196;
  pvStack_c = ExceptionList;
  uStack_88 = 0x68d9b8;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x344);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007432f0(puVar2);
  }
  uStack_88 = *(uint *)(param_1 + 0x460);
  uStack_8c = 1;
  local_4 = 0xffffffff;
  uStack_90 = 0x68d9f6;
  (**(code **)(*piVar3 + 100))();
  puStack_94 = *(uint **)(param_1 + 0x460);
  uStack_90 = 0x41200000;
  (**(code **)(*piVar3 + 0x5c))(1);
  iVar1 = *piVar3;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))(0x42c00000);
  (**(code **)(iVar1 + 0x74))((float)((fVar7 - (float10)10.0) - (float10)19.0));
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))(piVar3,1);
  puVar2 = operator_new(0x3fc);
  uStack_2c = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00833290(puVar2);
  }
  uStack_2c = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x41c) + 4))();
  *(undefined4 **)(param_1 + 0x430) = puVar2;
  (*(code *)**(undefined4 **)(param_1 + 0x41c))();
  uVar4 = FUN_00ace02d(L"<z2><table><tr><td width=500 align=center>");
  FUN_004036d0(&stack0xffffff8c,L"<z2><table><tr><td width=500 align=center>",uVar4);
  puStack_94 = &uStack_88;
  uStack_2c = 2;
  uStack_88 = uStack_88 & 0xffffff00;
  uStack_90 = 0;
  uStack_8c = 0x14;
  _strncpy((char *)puStack_94,"ENDSCREEN_BLURB_1",0x11);
  uStack_90 = 0x11;
  *(char *)((int)puStack_94 + 0x11) = '\0';
  uStack_2c._0_1_ = 3;
  puVar5 = FUN_009b5030(apvStack_54,&puStack_94);
  FUN_0040cae0(&stack0xffffff8c,(wchar_t *)*puVar5,puVar5[1]);
  if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_54[0]);
  }
  uStack_2c = CONCAT31(uStack_2c._1_3_,2);
  if (0x14 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_94);
  }
  sVar6 = FUN_00ace02d(L"</td></tr></table></z2>");
  FUN_0040cae0(&stack0xffffff8c,L"</td></tr></table></z2>",sVar6);
  (**(code **)(**(int **)(param_1 + 0x430) + 0x54))(&stack0xffffff8c);
  (**(code **)(**(int **)(param_1 + 0x430) + 0x84))(0);
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  _Memory = (void *)(float)(((fVar7 - (float10)10.0) - (float10)500.0) * (float10)0.5);
  (**(code **)(**(int **)(param_1 + 0x430) + 0x5c))(1,*(undefined4 *)(param_1 + 0x460),_Memory);
  (**(code **)(**(int **)(param_1 + 0x430) + 100))(1,*(undefined4 *)(param_1 + 0x460),0x43070000);
  (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x430),1);
  (**(code **)(*piVar3 + 0x8c))(0x41800000);
  if (&lpType_0000000a < puVar2) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_60;
  return;
}


//// FUNCTION FUN_0068dc40 @ 0068dc40 ////

void __fastcall FUN_0068dc40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  size_t sVar6;
  undefined4 uVar7;
  float10 fVar8;
  void *_Memory;
  float fVar9;
  char acStack_13c [8];
  undefined4 uStack_134;
  undefined4 *puStack_130;
  void *_Memory_00;
  int **_Dest;
  int *piStack_118;
  undefined4 uStack_114;
  float fStack_110;
  void *pvStack_10c;
  undefined4 *puStack_108;
  uint *puStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint auStack_f8 [2];
  undefined1 *puStack_f0;
  undefined2 *puStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined2 auStack_b0 [6];
  void *apvStack_a4 [2];
  char *pcStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  char acStack_90 [4];
  void *pvStack_8c;
  void *apvStack_7c [2];
  uint uStack_74;
  undefined1 uStack_5c;
  undefined4 uStack_34;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7201;
  pvStack_c = ExceptionList;
  puStack_f0 = (undefined1 *)0x68dc6b;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x344);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007432f0(puVar2);
  }
  local_4 = 0xffffffff;
  puStack_f0 = (undefined1 *)0x68dc9d;
  puVar2 = operator_new(0x50);
  local_4 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_005e4870(puVar2);
  }
  local_4 = 0xffffffff;
  puStack_f0 = (undefined1 *)0x68dcd0;
  (**(code **)(*piVar3 + 0xa0))();
  puStack_f0 = (undefined1 *)0x68dcda;
  piVar4 = (int *)(**(code **)(*piVar3 + 0xa4))();
  puStack_f0 = &stack0xffffff24;
  auStack_f8[1] = 0x68dcfa;
  (**(code **)(*piVar4 + 0xc))();
  auStack_f8[0] = *(uint *)(*(int *)(param_1 + 0x430) + 0x118);
  auStack_f8[1] = 0x43250000;
  uStack_fc = 1;
  uStack_100 = 0x68dd15;
  (**(code **)(*piVar3 + 100))();
  puStack_104 = *(uint **)(param_1 + 0x460);
  uStack_100 = 0x41200000;
  puStack_108 = (undefined4 *)0x1;
  pvStack_10c = (void *)0x68dd2a;
  (**(code **)(*piVar3 + 0x5c))();
  iVar1 = *piVar3;
  pvStack_10c = (void *)0x430e0000;
  fStack_110 = 9.630256e-39;
  fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  fStack_110 = (float)((fVar8 - (float10)10.0) - (float10)19.0);
  uStack_114 = 0x68dd51;
  (**(code **)(iVar1 + 0x74))();
  uStack_114 = 1;
  piStack_118 = piVar3;
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))();
  puStack_108 = operator_new(0x3fc);
  uStack_34 = 2;
  if (puStack_108 == (undefined4 *)0x0) {
    puStack_108 = (undefined4 *)0x0;
  }
  else {
    puStack_108 = FUN_00833290(puStack_108);
  }
  uStack_34 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x434) + 4))();
  *(undefined4 **)(param_1 + 0x448) = puStack_108;
  (*(code *)**(undefined4 **)(param_1 + 0x434))();
  puStack_bc = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = 0;
  uStack_b4 = 10;
  uVar5 = FUN_00ace02d(L"<z2><table><tr><td width=500 align=center>");
  FUN_004036d0(&puStack_bc,L"<z2><table><tr><td width=500 align=center>",uVar5);
  pcStack_9c = acStack_90;
  uStack_34 = 3;
  acStack_90[0] = '\0';
  uStack_98 = 0;
  uStack_94 = 0x14;
  _strncpy(pcStack_9c,"ENDSCREEN_RANK_1",0x10);
  uStack_98 = 0x10;
  pcStack_9c[0x10] = '\0';
  uStack_34._0_1_ = 4;
  puStack_130 = (undefined4 *)0x68de63;
  puVar2 = FUN_009b5030(apvStack_7c,&pcStack_9c);
  FUN_0040cae0(&puStack_bc,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < uStack_74) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_7c[0]);
  }
  uStack_34 = CONCAT31(uStack_34._1_3_,3);
  if (0x14 < uStack_94) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_9c);
  }
  sVar6 = FUN_00ace02d(L"</td></tr></table></z2>");
  FUN_0040cae0(&puStack_bc,L"</td></tr></table></z2>",sVar6);
  (**(code **)(**(int **)(param_1 + 0x448) + 0x54))();
  (**(code **)(**(int **)(param_1 + 0x448) + 0x84))();
  fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  fStack_110 = (float)(((fVar8 - (float10)10.0) - (float10)500.0) * (float10)0.5);
  _Memory_00 = (void *)0x1;
  puStack_130 = (undefined4 *)0x68df23;
  (**(code **)(**(int **)(param_1 + 0x448) + 0x5c))();
  uStack_134 = *(undefined4 *)(*(int *)(param_1 + 0x430) + 0x118);
  puStack_130 = (undefined4 *)0x433e0000;
  acStack_13c[4] = '\x01';
  acStack_13c[5] = '\0';
  acStack_13c[6] = '\0';
  acStack_13c[7] = '\0';
  acStack_13c[0] = 'B';
  acStack_13c[1] = -0x21;
  acStack_13c[2] = 'h';
  acStack_13c[3] = '\0';
  (**(code **)(**(int **)(param_1 + 0x448) + 100))();
  acStack_13c[0] = '\x01';
  acStack_13c[1] = '\0';
  acStack_13c[2] = '\0';
  acStack_13c[3] = '\0';
  (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x448));
  _Dest = &piStack_118;
  piStack_118 = (int *)((uint)piStack_118 & 0xffffff00);
  _strncpy((char *)_Dest,"AWARDS_SCREEN_RANK_",0x13);
  *(char *)((int)_Dest + 0x13) = '\0';
  uStack_5c = 5;
  uVar7 = FUN_008666a0('\0');
  sVar6 = _sprintf((char *)apvStack_a4,(char *)&param_2_00d1b93c,uVar7);
  FUN_004073f0(&stack0xfffffedc,(char *)apvStack_a4,sVar6);
  puStack_104 = auStack_f8;
  auStack_f8[0] = auStack_f8[0] & 0xffff0000;
  uStack_100 = 0;
  uStack_fc = 10;
  uVar5 = FUN_00ace02d(L"<z1><nobr>");
  FUN_004036d0(&puStack_104,L"<z1><nobr>",uVar5);
  uStack_5c = 6;
  puVar2 = FUN_009b5030(apvStack_a4,(undefined4 *)&stack0xfffffedc);
  FUN_0040cae0(&puStack_104,(wchar_t *)*puVar2,puVar2[1]);
  if (pcStack_9c <= &lpType_0000000a) {
    sVar6 = FUN_00ace02d(L"</nobr></z1>");
    FUN_0040cae0(&puStack_104,L"</nobr></z1>",sVar6);
    puStack_130 = operator_new(0x3fc);
    uStack_5c = 7;
    if (puStack_130 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_00833290(puStack_130);
    }
    uStack_5c = 6;
    (**(code **)(*piVar4 + 0x54))(&puStack_104);
    (**(code **)(*piVar4 + 0x84))(0);
    _Memory = (void *)0x42480000;
    (**(code **)(*piVar4 + 100))(1,*(undefined4 *)(param_1 + 0x448));
    acStack_13c[0] = -1;
    acStack_13c[1] = -1;
    acStack_13c[2] = -1;
    acStack_13c[3] = -1;
    FUN_00830550(piVar4,9,acStack_13c);
    FUN_00830550(piVar4,3,&stack0xfffffec3);
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
    fVar9 = (float)(fVar8 - (float10)10.0);
    fVar8 = (float10)(**(code **)(*piVar4 + 0x10))();
    fVar9 = (float)(((float10)fVar9 - fVar8) * (float10)0.5);
    (**(code **)(*piVar4 + 0x5c))(1,*(undefined4 *)(param_1 + 0x460),fVar9);
    (**(code **)(*piVar3 + 0xc))(piVar4,1);
    if (&lpType_0000000a < _Dest) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
    if (0x14 < (uint)fVar9) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    if (puStack_104 <= &lpType_0000000a) {
      ExceptionList = pvStack_8c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_10c);
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_a4[0]);
}


//// FUNCTION FUN_0068e1a0 @ 0068e1a0 ////

void __fastcall FUN_0068e1a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  size_t sVar6;
  float10 fVar7;
  uint *puStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  uint uStack_88;
  void *pvStack_5c;
  void *apvStack_54 [2];
  uint uStack_4c;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7236;
  pvStack_c = ExceptionList;
  uStack_88 = 0x68e1c8;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x344);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007432f0(puVar2);
  }
  uStack_88 = *(uint *)(param_1 + 0x460);
  uStack_8c = 2;
  local_4 = 0xffffffff;
  uStack_90 = 0x68e206;
  (**(code **)(*piVar3 + 0x68))();
  puStack_94 = *(uint **)(param_1 + 0x460);
  uStack_90 = 0x41200000;
  (**(code **)(*piVar3 + 0x5c))(1);
  iVar1 = *piVar3;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  (**(code **)(iVar1 + 0x74))((float)((fVar7 - (float10)10.0) - (float10)19.0));
  (**(code **)(**(int **)(param_1 + 0x460) + 0xc))(piVar3,1);
  puVar2 = operator_new(0x3fc);
  uStack_2c = 1;
  if (puVar2 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar2);
  }
  uVar5 = FUN_00ace02d(L"<z3><table><tr><td width=300 align=center>");
  FUN_004036d0(&stack0xffffff8c,L"<z3><table><tr><td width=300 align=center>",uVar5);
  puStack_94 = &uStack_88;
  uStack_2c = 2;
  uStack_88 = uStack_88 & 0xffffff00;
  uStack_90 = 0;
  uStack_8c = 0x14;
  _strncpy((char *)puStack_94,"ENDSCREEN_END",0xd);
  uStack_90 = 0xd;
  *(char *)((int)puStack_94 + 0xd) = '\0';
  uStack_2c._0_1_ = 3;
  puVar2 = FUN_009b5030(apvStack_54,&puStack_94);
  FUN_0040cae0(&stack0xffffff8c,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_54[0]);
  }
  uStack_2c = CONCAT31(uStack_2c._1_3_,2);
  if (0x14 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_94);
  }
  sVar6 = FUN_00ace02d(L"</td></tr></table></z3>");
  FUN_0040cae0(&stack0xffffff8c,L"</td></tr></table></z3>",sVar6);
  (**(code **)(*piVar4 + 0x54))(&stack0xffffff8c);
  (**(code **)(*piVar4 + 0x84))(0);
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  (**(code **)(*piVar4 + 0x5c))
            (1,*(undefined4 *)(param_1 + 0x460),
             (float)(((fVar7 - (float10)10.0) - (float10)300.0) * (float10)0.5));
  (**(code **)(*piVar4 + 0x68))(2,*(undefined4 *)(param_1 + 0x460),0x42480000);
  (**(code **)(*piVar3 + 0xc))(piVar4,1);
  if (&lpType_0000000a < puStack_94) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x42c00000);
  }
  ExceptionList = pvStack_5c;
  return;
}


//// FUNCTION FUN_0068e400 @ 0068e400 ////

undefined4 * __thiscall FUN_0068e400(void *this,byte param_1)

{
  FUN_0068d3d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0068e420 @ 0068e420 ////

void __fastcall FUN_0068e420(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  void *this;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float fVar9;
  int iStack_15c;
  undefined4 *puStack_158;
  code *_Memory;
  char *pcVar10;
  int **ppiStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  int *piStack_f0;
  uint uStack_ec;
  undefined1 *puStack_e8;
  int *piStack_e4;
  float fStack_e0;
  char *pcStack_dc;
  uint uVar11;
  char *pcStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  char acStack_90 [28];
  undefined4 uStack_74;
  void *apvStack_5c [2];
  uint uStack_54;
  undefined4 uStack_34;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7310;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x60);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_005e5010(puVar2);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0xa0))();
  pcStack_dc = (char *)0x68e48a;
  puVar3 = operator_new(0x344);
  puStack_8 = (undefined1 *)0x1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_007432f0(puVar3);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(param_1[0x113] + 4))();
  param_1[0x118] = (int)puVar3;
  (**(code **)param_1[0x113])();
  uVar11 = 0x44160000;
  pcStack_dc = (char *)0x44188000;
  fStack_e0 = 9.633e-39;
  (**(code **)(*(int *)param_1[0x118] + 0x74))();
  fStack_e0 = 9.633008e-39;
  piVar4 = (int *)FUN_0071b2b0();
  piVar5 = (int *)param_1[0x118];
  fStack_e0 = 9.633026e-39;
  fVar6 = (float10)(**(code **)(*piVar4 + 0x10))();
  fStack_e0 = 9.633041e-39;
  fVar7 = (float10)(**(code **)(*piVar5 + 0x10))();
  fStack_e0 = 9.633076e-39;
  piVar4 = (int *)FUN_0071b2b0();
  piVar5 = (int *)param_1[0x118];
  fStack_e0 = 9.633095e-39;
  (**(code **)(*piVar4 + 0x14))();
  fStack_e0 = 9.63311e-39;
  (**(code **)(*piVar5 + 0x14))();
  puStack_e8 = (undefined1 *)0x1;
  uStack_ec = 0x68e552;
  piStack_e4 = param_1;
  fStack_e0 = (float)(((float10)(float)fVar6 - (fVar7 - (float10)10.0)) * (float10)0.5);
  (**(code **)(*(int *)param_1[0x118] + 0x5c))();
  uStack_ec = uVar11;
  uStack_f4 = 1;
  uStack_f8 = 0x68e565;
  piStack_f0 = param_1;
  (**(code **)(*(int *)param_1[0x118] + 100))();
  ppiStack_fc = (int **)param_1[0x118];
  uStack_f8 = 1;
  (**(code **)(*param_1 + 0xc))();
  (**(code **)(*param_1 + 0x50))();
  FUN_0068d990((int)param_1);
  FUN_0068dc40((int)param_1);
  FUN_0068e1a0((int)param_1);
  FUN_0068c740(param_1);
  FUN_0068caf0((int)param_1);
  piVar5 = operator_new(0x420);
  piStack_f0 = piVar5;
  if (piVar5 == (int *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    pcStack_9c = acStack_90;
    acStack_90[0] = '\0';
    uStack_98 = 0;
    uStack_94 = 0x20;
    pcStack_9c = _malloc(0x20);
    _strncpy(pcStack_9c,"ENDSCREEN_DIALOGUE_EXIT",0x17);
    uStack_98 = 0x17;
    pcStack_9c[0x17] = '\0';
    pcStack_dc = &stack0xffffff30;
    puVar2 = (undefined4 *)&DAT_00000014;
    _strncpy(pcStack_dc,"button_right.",0xd);
    pcStack_dc[0xd] = '\0';
    uStack_34 = 4;
    uStack_ec = 3;
    puVar3 = FUN_009b5030(apvStack_5c,&pcStack_9c);
    puStack_e8 = &stack0xfffffef0;
    uStack_34 = 5;
    uStack_ec = 7;
    puVar3 = FUN_0069fb10(piVar5,(int *)&pcStack_dc,puVar3,0x42800000,0x42800000,0,0,0x3f800000,
                          0x3f800000);
  }
  uStack_34 = 8;
  (**(code **)(param_1[0xd1] + 4))();
  param_1[0xd6] = (int)puVar3;
  (**(code **)param_1[0xd1])();
  if (((uStack_ec & 4) != 0) && (uStack_ec = uStack_ec & 0xfffffffb, 10 < uStack_54)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_5c[0]);
  }
  if (((uStack_ec & 2) != 0) && (uStack_ec = uStack_ec & 0xfffffffd, &DAT_00000014 < puVar2)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_dc);
  }
  uStack_34 = 0xffffffff;
  if (((uStack_ec & 1) != 0) && (uStack_ec = uStack_ec & 0xfffffffe, 0x14 < uStack_94)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_9c);
  }
  (**(code **)(*(int *)param_1[0xd6] + 0x60))();
  (**(code **)(*(int *)param_1[0xd6] + 0x68))();
  pcVar10 = "REVIEW_CLOSE";
  _Memory = FUN_0068c680;
  (**(code **)(*(int *)param_1[0xd6] + 0x18))();
  (**(code **)(*(int *)param_1[0xd6] + 0x18))();
  (**(code **)(*(int *)param_1[0x118] + 0xc))();
  this = operator_new(0x360);
  uStack_74 = 9;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    ppiStack_fc = &piStack_f0;
    piStack_f0 = (int *)((uint)piStack_f0 & 0xffffff00);
    uStack_f8 = 0;
    uStack_f4 = 0x20;
    ppiStack_fc = _malloc(0x20);
    _strncpy((char *)ppiStack_fc,"ui/button_starbig.dds",0x15);
    uStack_f8 = 0x15;
    *(char *)((int)ppiStack_fc + 0x15) = '\0';
    uStack_74 = CONCAT31(uStack_74._1_3_,10);
    puStack_158 = (undefined4 *)0x68e857;
    puVar2 = FUN_0069d820(this,&ppiStack_fc,0,0,0x3f800000,0x3f800000);
  }
  uStack_74 = 0xb;
  (**(code **)(param_1[0xfb] + 4))();
  param_1[0x100] = (int)puVar2;
  (**(code **)param_1[0xfb])();
  uStack_74 = 0xffffffff;
  if (uStack_f4 < 0x15) {
    (**(code **)(*(int *)param_1[0x100] + 0x74))();
    puStack_158 = (undefined4 *)0x68e8d6;
    (**(code **)(*(int *)param_1[0x100] + 100))();
    iStack_15c = param_1[0x118];
    puStack_158 = (undefined4 *)0x43830000;
    (**(code **)(*(int *)param_1[0x100] + 0x5c))(1);
    (**(code **)(*(int *)param_1[0x118] + 0xc))(param_1[0x100],1);
    piStack_e4 = (int *)&stack0xffffff28;
    fStack_e0 = 0.0;
    pcStack_dc = (char *)0xa;
    uVar11 = FUN_00ace02d(L"<z1><nobr><translate>ENDSCREEN_TITLE</translate></nobr></z1>");
    FUN_004036d0(&piStack_e4,L"<z1><nobr><translate>ENDSCREEN_TITLE</translate></nobr></z1>",uVar11)
    ;
    pcStack_9c = (char *)0xc;
    puStack_158 = operator_new(0x3fc);
    pcStack_9c._0_1_ = 0xd;
    if (puStack_158 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00833290(puStack_158);
    }
    pcStack_9c = (char *)CONCAT31(pcStack_9c._1_3_,0xc);
    (**(code **)(param_1[0x101] + 4))();
    param_1[0x106] = (int)puVar2;
    (**(code **)param_1[0x101])();
    (**(code **)(*(int *)param_1[0x106] + 0x54))(&piStack_e4);
    (**(code **)(*(int *)param_1[0x106] + 0x84))(0);
    (**(code **)(*(int *)param_1[0x106] + 100))(1,param_1[0x118],0x42400000);
    iStack_15c = -1;
    FUN_00830550((void *)param_1[0x106],9,(char *)&iStack_15c);
    FUN_00830550((void *)param_1[0x106],3,&stack0xfffffea3);
    piVar5 = (int *)param_1[0x106];
    fVar6 = (float10)(**(code **)(*(int *)param_1[0x118] + 0x10))();
    fVar9 = (float)(fVar6 - (float10)10.0);
    fVar6 = (float10)(**(code **)(*piVar5 + 0x10))();
    (**(code **)(*(int *)param_1[0x106] + 0x5c))
              (1,param_1[0x118],(float)(((float10)fVar9 - fVar6) * (float10)0.5));
    uVar8 = 1;
    (**(code **)(*(int *)param_1[0x118] + 0xc))(param_1[0x106],1);
    piVar4 = (int *)FUN_0071b2b0();
    piVar5 = (int *)param_1[0x118];
    fVar6 = (float10)(**(code **)(*piVar4 + 0x10))();
    fVar9 = (float)fVar6;
    fVar6 = (float10)(**(code **)(*piVar5 + 0x10))();
    fVar9 = (float)(((float10)fVar9 - (fVar6 - (float10)10.0)) * (float10)0.5);
    piVar4 = (int *)FUN_0071b2b0();
    piVar5 = (int *)param_1[0x118];
    (**(code **)(*piVar4 + 0x14))();
    (**(code **)(*piVar5 + 0x14))();
    (**(code **)(*(int *)param_1[0x118] + 0x5c))(1,param_1,fVar9);
    (**(code **)(*(int *)param_1[0x118] + 100))(1,param_1,uVar8);
    do {
      cVar1 = (**(code **)(*param_1 + 0x50))(1);
    } while (cVar1 != '\0');
    if (pcVar10 < (char *)0xb) {
      ExceptionList = piStack_e4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(ppiStack_fc);
}


//// FUNCTION FUN_0068eb40 @ 0068eb40 ////

int * __fastcall FUN_0068eb40(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_EDX;
  void *unaff_EDI;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc73d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = (int)&PTR_FUN_00d37e64;
  param_1[0x14] = (int)&PTR_FUN_00d37e4c;
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
  param_1[0xd7] = (int)&PTR_FUN_00d2d110;
  param_1[0xdc] = 0;
  param_1[0xe0] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = (int)(param_1 + 0xdd);
  param_1[0xdd] = (int)&PTR_FUN_00d2d110;
  param_1[0xe2] = 0;
  param_1[0xe6] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = (int)(param_1 + 0xe3);
  param_1[0xe3] = (int)&PTR_FUN_00d2d110;
  param_1[0xe8] = 0;
  param_1[0xec] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = (int)(param_1 + 0xe9);
  param_1[0xe9] = (int)&PTR_FUN_00d2d110;
  param_1[0xee] = 0;
  param_1[0xf2] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = (int)(param_1 + 0xef);
  param_1[0xef] = (int)&PTR_FUN_00d2d110;
  param_1[0xf4] = 0;
  param_1[0xf8] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = (int)(param_1 + 0xf5);
  param_1[0xf5] = (int)&PTR_FUN_00d2d110;
  param_1[0xfa] = 0;
  param_1[0xfe] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = (int)(param_1 + 0xfb);
  param_1[0xfb] = (int)&PTR_FUN_00d2d110;
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
  param_1[0x113] = (int)&PTR_FUN_00d18c2c;
  param_1[0x118] = 0;
  local_4 = 0xc;
  FUN_0071c290();
  FUN_00424130(DAT_00f87b04,1,0,0);
  FUN_009a1560(1);
  iVar1 = *param_1;
  uVar4 = 0;
  iVar2 = FUN_0071b2b0();
  (**(code **)(iVar1 + 0x70))(iVar2,uVar4);
  piVar3 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar3 + 0xc))(param_1,1);
  FUN_0068e420(param_1);
  FUN_005e98d0(DAT_0104d82c,extraout_EDX);
  ExceptionList = unaff_EDI;
  return param_1;
}


//// FUNCTION FUN_0068ed30 @ 0068ed30 ////

int * FUN_0068ed30(void)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc73eb;
  local_c = ExceptionList;
  piVar2 = (int *)0x0;
  if (DAT_0104dadc == (int *)0x0) {
    ExceptionList = &local_c;
    piVar1 = operator_new(0x464);
    local_4 = 0;
    if (piVar1 != (int *)0x0) {
      piVar2 = FUN_0068eb40(piVar1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104dac8[1])();
    DAT_0104dadc = piVar2;
    (*(code *)*DAT_0104dac8)();
  }
  ExceptionList = local_c;
  return DAT_0104dadc;
}


//// FUNCTION FUN_0068edc0 @ 0068edc0 ////

undefined4 * __fastcall FUN_0068edc0(undefined4 *param_1)

{
  FUN_0069ce90(param_1);
  *param_1 = &PTR_FUN_00d381bc;
  param_1[0x14] = &PTR_FUN_00d381a0;
  param_1[0xd8] = 2;
  param_1[0xd9] = 0;
  param_1[0xda] = 0xff;
  param_1[0xdb] = 5;
  return param_1;
}


//// FUNCTION FUN_0068eed0 @ 0068eed0 ////

void __fastcall FUN_0068eed0(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc7408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d381bc;
  param_1[0x14] = &PTR_FUN_00d381a0;
  local_4 = 0;
  if (param_1[0xd1] == 0) {
    local_4 = 0xffffffff;
    FUN_0069cf00(param_1);
    ExceptionList = local_c;
    return;
  }
  _Memory = *(void **)(param_1[0xd1] + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xd1]);
}


//// FUNCTION FUN_0068f010 @ 0068f010 ////

undefined4 * __thiscall FUN_0068f010(void *this,byte param_1)

{
  FUN_0068eed0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0068f0a0 @ 0068f0a0 ////

void __fastcall FUN_0068f0a0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = FUN_00990e30(0.0,2.0);
  fVar2 = FUN_00990e30(DAT_0105c404 * 0.5,DAT_0105c404);
  fVar3 = DAT_0105c400;
  if ((float)fVar1 < 1.0) {
    fVar3 = 0.0;
  }
  *(float *)(param_1 + 0xc) = fVar3;
  *(float *)(param_1 + 0x10) = (float)fVar2;
  fVar1 = FUN_00990e30(-40.0,0.0);
  if (fVar3 <= DAT_0105c400 * 0.5) {
    fVar4 = 60.0;
    fVar3 = 20.0;
  }
  else {
    fVar4 = -20.0;
    fVar3 = -60.0;
  }
  fVar2 = FUN_00990e30(fVar3,fVar4);
  *(float *)(param_1 + 4) = (float)fVar2;
  *(float *)(param_1 + 8) = (float)fVar1;
  return;
}


//// FUNCTION FUN_0068f1c0 @ 0068f1c0 ////

char __thiscall FUN_0068f1c0(void *this,undefined4 param_1)

{
  char cVar1;
  
  if ((*(byte *)((int)this + 0x1c8) & 0x10) == 0) {
    return '\0';
  }
  cVar1 = (**(code **)(*(int *)((int)this + -0x50) + 0xc4))();
  if (cVar1 != '\0') {
    if (((DAT_0104dae4 != 0) && (*(char *)((int)this + 0x2f4) != '\0')) &&
       (cVar1 = (**(code **)(*(int *)(DAT_0104dae4 + 0x50) + 4))(param_1), cVar1 != '\0')) {
      return cVar1;
    }
    cVar1 = FUN_00740a70(this,param_1);
    return cVar1;
  }
  return '\0';
}


//// FUNCTION FUN_0068f280 @ 0068f280 ////

uint __fastcall FUN_0068f280(int param_1)

{
  return *(uint *)(param_1 + 0x63c) & 1;
}


//// FUNCTION FUN_0068f290 @ 0068f290 ////

undefined1 __fastcall FUN_0068f290(int param_1)

{
  return *(undefined1 *)(param_1 + 0x60c);
}


//// FUNCTION FUN_0068f4c0 @ 0068f4c0 ////

undefined1 __fastcall FUN_0068f4c0(undefined4 param_1)

{
  FUN_00470a70(DAT_0104917c,param_1,0x515,0,0);
  return 1;
}


//// FUNCTION FUN_0068f550 @ 0068f550 ////

undefined1 __fastcall FUN_0068f550(undefined4 param_1)

{
  FUN_00470a70(DAT_0104917c,param_1,0x7bd,0,0);
  return 1;
}


//// FUNCTION FUN_0068f6e0 @ 0068f6e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0068f6e0(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_8;
  float local_4;
  
  if ((*(char *)(param_1 + 0x710) == '\0') && (0.0 < _DAT_00e56ea8)) {
    iVar1 = 0;
    do {
      fVar2 = FUN_00990e30(0.0,*(float *)(param_1 + 0x70c));
      fVar3 = FUN_00990e30(0.0,6.2831855);
      fVar4 = FUN_00990e30(0.0,1.0);
      fVar5 = FUN_00990e30(*(float *)(param_1 + 0x704),*(float *)(param_1 + 0x708));
      fVar6 = (float10)fcos((float10)(float)fVar3);
      fVar3 = (float10)fsin((float10)(float)fVar3);
      local_8 = (float)(fVar6 * (float10)(float)fVar2 + (float10)*(float *)(param_1 + 0x6fc));
      local_4 = (float)(fVar3 * (float10)(float)fVar2 + (float10)*(float *)(param_1 + 0x700));
      FUN_009b3a70(DAT_0105cc64,&local_8,(float)fVar4,(float)fVar5,(undefined4 *)0x1,0,&LAB_00420160
                  );
      iVar1 = iVar1 + 1;
    } while ((float)iVar1 < _DAT_00e56ea8);
  }
  return;
}


//// FUNCTION FUN_0068f7e0 @ 0068f7e0 ////

void __fastcall FUN_0068f7e0(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  DAT_00e5e281 = 0;
  uVar1 = FUN_00990ae0(param_1,param_2);
  *(int *)(param_1 + 0x714) = (int)uVar1 + 0x2ee;
  return;
}


//// FUNCTION FUN_0068f830 @ 0068f830 ////

int * __thiscall FUN_0068f830(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0068f870 @ 0068f870 ////

void __fastcall FUN_0068f870(int param_1)

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


//// FUNCTION FUN_0068f8a0 @ 0068f8a0 ////

int * __thiscall FUN_0068f8a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0068f900 @ 0068f900 ////

int * __thiscall FUN_0068f900(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0068f940 @ 0068f940 ////

int * __thiscall FUN_0068f940(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0068f980 @ 0068f980 ////

int * __thiscall FUN_0068f980(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0068f9c0 @ 0068f9c0 ////

int * __thiscall FUN_0068f9c0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0068fa70 @ 0068fa70 ////

void __fastcall FUN_0068fa70(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


//// FUNCTION FUN_0068fa90 @ 0068fa90 ////

void __thiscall FUN_0068fa90(void *this,uint param_1)

{
  *(uint *)((int)this + 0x63c) =
       *(uint *)((int)this + 0x63c) ^ (param_1 & 0xff ^ *(uint *)((int)this + 0x63c)) & 1;
  if (*(int *)((int)this + 0x6e0) != 0) {
    FUN_006b9380(*(int *)((int)this + 0x6e0));
    return;
  }
  return;
}


//// FUNCTION FUN_0068fb00 @ 0068fb00 ////

void __fastcall FUN_0068fb00(int param_1)

{
  if (*(int *)(param_1 + 0x6e0) != 0) {
    FUN_006b9380(*(int *)(param_1 + 0x6e0));
    return;
  }
  return;
}


//// FUNCTION FUN_0068fbc0 @ 0068fbc0 ////

void * __thiscall FUN_0068fbc0(void *this,byte param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0068fc00 @ 0068fc00 ////

undefined4 * __fastcall FUN_0068fc00(undefined4 *param_1)

{
  undefined4 *puVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7433;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x394);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0089ea20(puVar1);
  }
  param_1[5] = puVar1;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"monkey3",7);
  local_28 = 7;
  local_2c[7] = '\0';
  local_4 = 1;
  FUN_0089e070((void *)param_1[5],&local_2c,0,1,'\x01');
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0068f0a0((int)param_1);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0068fce0 @ 0068fce0 ////

void __fastcall FUN_0068fce0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar3 + 0x358) != 0) {
    local_30 = 0x10000;
    local_24 = 0x10000;
    local_18 = 0x10000;
    local_c = 0x10000;
    local_28 = 0;
    local_2c = 0;
    local_1c = 0;
    local_20 = 0;
    local_10 = 0;
    local_14 = 0;
    local_4 = 0;
    local_8 = 0;
    uVar4 = FUN_00acd42c();
    local_8 = (undefined4)uVar4;
    uVar4 = FUN_00acd42c();
    local_4 = (undefined4)uVar4;
    if (*(char *)(param_1 + 0x18) != '\0') {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x358) + 0x170);
      iVar2 = *(int *)(iVar3 + 0x164);
      iVar1 = *(int *)(iVar2 + 0x10);
      if ((iVar1 != 0) && (*(int *)(iVar2 + 0x14) - iVar1 >> 5 != 0)) {
        iVar2 = FUN_00889b90(iVar3);
        for (iVar3 = *(int *)(iVar2 + 4); iVar3 != *(int *)(iVar2 + 8); iVar3 = iVar3 + 0x40) {
          if ((*(byte *)(*(int *)(iVar3 + 0x3c) + 0x50) & 0x10) != 0) {
            local_20 = local_20 - *(int *)(iVar3 + 0x14);
            local_1c = local_1c - *(int *)(iVar3 + 0x18);
            *(undefined1 *)(param_1 + 0x18) = 0;
            break;
          }
        }
      }
    }
    FUN_0087ff20(*(void **)(*(int *)(param_1 + 0x14) + 0x358),&local_18,&local_30);
  }
  return;
}


//// FUNCTION FUN_0068fe10 @ 0068fe10 ////

undefined4 __fastcall FUN_0068fe10(int param_1)

{
  void *this;
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_28 [8];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(char *)(param_1 + 0x711) != '\0') &&
     (ExceptionList = &local_c, *(char *)(param_1 + 0x710) != '\0')) {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x711) = 0;
    *(undefined1 *)(param_1 + 0x710) = 0;
  }
  iVar1 = DAT_0104dafc;
  if (((DAT_0104dafc != 0) && (*(char *)(DAT_0104dafc + 0x60c) != '\0')) &&
     (*(char *)(DAT_0104dafc + 0x6f8) != '\0')) {
    puVar2 = local_28;
    local_28[0] = 0;
    uVar3 = 0;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xffffffcc,"saveoff",7);
    local_4 = 0xffffffff;
    this = (void *)FUN_008819d0(*(void **)(DAT_0104dae4 + 0x358),"savebutton");
    uVar4 = FUN_0088a2b0(this,puVar2,uVar3,uVar4);
    uStack_20 = 0x68fec1;
    iVar1 = FUN_00881c00(*(void **)(DAT_0104dae4 + 0x358),"savebutton",uVar4);
    *(undefined1 *)(DAT_0104dafc + 0x6f8) = 0;
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_0068fee0 @ 0068fee0 ////

undefined4 __fastcall FUN_0068fee0(int param_1)

{
  void *this;
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_24 [8];
  undefined4 uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(char *)(param_1 + 0x711) == '\0') &&
     (ExceptionList = &local_c, *(char *)(param_1 + 0x710) == '\0')) {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x711) = 1;
    *(undefined1 *)(param_1 + 0x710) = 1;
  }
  iVar1 = DAT_0104dafc;
  if ((DAT_0104dafc != 0) && (*(char *)(DAT_0104dafc + 0x60c) != '\0')) {
    puVar2 = local_24;
    local_24[0] = 0;
    uVar3 = 0;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xffffffd0,"saveon",6);
    local_4 = 0xffffffff;
    this = (void *)FUN_008819d0(*(void **)(DAT_0104dae4 + 0x358),"savebutton");
    uVar4 = FUN_0088a2b0(this,puVar2,uVar3,uVar4);
    uStack_1c = 0x68ff91;
    iVar1 = FUN_00881b40(*(void **)(DAT_0104dae4 + 0x358),"savebutton",uVar4);
    *(undefined1 *)(DAT_0104dafc + 0x6f8) = 1;
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_0068ffb0 @ 0068ffb0 ////

void __fastcall FUN_0068ffb0(int param_1)

{
  *(undefined1 *)(param_1 + 0x6e4) = 1;
  FUN_008887b0(*(void **)(*(int *)(DAT_0104dae4 + 0x358) + 0x170),1);
  return;
}


//// FUNCTION FUN_0068ffd0 @ 0068ffd0 ////

uint FUN_0068ffd0(void)

{
  wchar_t *_Source;
  bool bVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  uint local_54;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  wchar_t *local_2c;
  size_t local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7490;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a23c20();
  uVar2 = FUN_00a23460();
  local_54 = 0;
  uVar5 = uVar2;
  if (0 < (int)uVar2) {
    iVar6 = -1;
    do {
      iVar3 = FUN_00a23460();
      FUN_00a236f0((int *)&local_2c,iVar3 + iVar6);
      uVar5 = DAT_0104a9a4;
      _Source = DAT_0104a9a0;
      local_4c = local_40;
      local_4 = 0;
      local_40[0] = L'\0';
      local_48 = 0;
      local_44 = 10;
      if (9 < DAT_0104a9a4) {
        local_44 = DAT_0104a9a4 + 0x20 & 0xffffffe0;
        local_4c = _malloc(local_44 * 2);
      }
      _wcsncpy(local_4c,_Source,uVar5);
      local_48 = uVar5;
      local_4c[uVar5] = L'\0';
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_0040cae0(&local_4c,local_2c,local_28);
      sVar4 = FUN_00ace02d(L".jad");
      FUN_0040cae0(&local_4c,L".jad",sVar4);
      if (local_48 != 0) {
        bVar1 = FUN_004b1010(&local_4c);
        if (bVar1) {
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
          ExceptionList = local_c;
          return CONCAT31((int3)(local_44 >> 8),1);
        }
      }
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_4 = 0xffffffff;
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      uVar5 = local_54 + 1;
      iVar6 = iVar6 + -1;
      local_54 = uVar5;
    } while ((int)uVar5 < (int)uVar2);
  }
  ExceptionList = local_c;
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_00690180 @ 00690180 ////

void FUN_00690180(void)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 local_1c [8];
  undefined4 uStack_14;
  
  uVar1 = FUN_0068ffd0();
  if ((char)uVar1 == '\0') {
    if (DAT_0104dae4 != 0) {
      pvVar2 = (void *)FUN_008819d0(*(void **)(DAT_0104dae4 + 0x358),"continue");
      if (pvVar2 != (void *)0x0) {
        puVar4 = local_1c;
        local_1c[0] = 0;
        uVar1 = 0;
        uVar5 = 0x14;
        FUN_004015d0(&stack0xffffffd8,"off",3);
        iVar3 = FUN_0088a2b0(pvVar2,puVar4,uVar1,uVar5);
        if (iVar3 != -1) {
          puVar4 = local_1c;
          local_1c[0] = 0;
          uVar1 = 0;
          uVar5 = 0x14;
          FUN_004015d0(&stack0xffffffd8,"off",3);
          uVar5 = FUN_0088a2b0(pvVar2,puVar4,uVar1,uVar5);
          uStack_14 = 0x6902de;
          FUN_00881c00(*(void **)(DAT_0104dae4 + 0x358),"continue",uVar5);
        }
      }
    }
  }
  else if (DAT_0104dae4 != 0) {
    pvVar2 = (void *)FUN_008819d0(*(void **)(DAT_0104dae4 + 0x358),"continue");
    if (pvVar2 != (void *)0x0) {
      puVar4 = local_1c;
      local_1c[0] = 0;
      uVar1 = 0;
      uVar5 = 0x14;
      FUN_004015d0(&stack0xffffffd8,"on",2);
      iVar3 = FUN_0088a2b0(pvVar2,puVar4,uVar1,uVar5);
      if (iVar3 != -1) {
        puVar4 = local_1c;
        local_1c[0] = 0;
        uVar1 = 0;
        uVar5 = 0x14;
        FUN_004015d0(&stack0xffffffd8,"on",2);
        uVar5 = FUN_0088a2b0(pvVar2,puVar4,uVar1,uVar5);
        uStack_14 = 0x690239;
        FUN_00881c00(*(void **)(DAT_0104dae4 + 0x358),"continue",uVar5);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00690310 @ 00690310 ////

void __fastcall FUN_00690310(int param_1)

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


//// FUNCTION FUN_00690340 @ 00690340 ////

void __fastcall FUN_00690340(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d38314;
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


//// FUNCTION FUN_00690390 @ 00690390 ////

void __fastcall FUN_00690390(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d38324;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_006903e0 @ 006903e0 ////

void __fastcall FUN_006903e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d38324;
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


//// FUNCTION FUN_00690430 @ 00690430 ////

void __fastcall FUN_00690430(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    *param_1 = *_Memory;
    puVar2 = (undefined4 *)_Memory[5];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      _Memory[5] = 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_006904c0 @ 006904c0 ////

void __fastcall FUN_006904c0(int *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc74ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x1c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0068fc00(puVar1);
  }
  if (*param_1 == 0) {
    *param_1 = (int)puVar1;
  }
  else {
    *(undefined4 **)param_1[1] = puVar1;
  }
  param_1[1] = (int)puVar1;
  param_1[2] = param_1[2] + 1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00690530 @ 00690530 ////

void __fastcall FUN_00690530(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    *param_1 = *_Memory;
    puVar2 = (undefined4 *)_Memory[5];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      _Memory[5] = 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00690570 @ 00690570 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00690570(int param_1)

{
  float fVar1;
  
  fVar1 = _DAT_00e56ec4 + *(float *)(param_1 + 8);
  *(float *)(param_1 + 4) = _DAT_00e56ec0 + *(float *)(param_1 + 4);
  *(float *)(param_1 + 8) = fVar1;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 4);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x10);
  FUN_0068fce0(param_1);
                    /* WARNING: Could not recover jumptable at 0x006905c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0xe0))();
  return;
}


//// FUNCTION FUN_006905d0 @ 006905d0 ////

undefined4 __cdecl FUN_006905d0(void *param_1)

{
  void *this;
  int *piVar1;
  float10 fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  FUN_009abb50(1);
  iVar3 = DAT_0104dafc;
  if (*(char *)(DAT_0104dafc + 0x6e4) == '\0') {
    bVar5 = 1;
    if (DAT_0105be08 < 2) {
      iVar3 = 4;
    }
    else {
      iVar3 = 0;
    }
    iVar4 = DAT_0104dafc;
    this = (void *)FUN_004f3b20();
    FUN_004f98f0(this,iVar3,iVar4,bVar5);
    FUN_006b9390(param_1,L"data/intro/frontend_loop.wmv");
    FUN_006b93c0(param_1,1);
    FUN_006b93d0(param_1,0);
    if (param_1 != (void *)0x0) {
      iVar3 = FUN_006b93e0((int)param_1);
      if (iVar3 != 0) {
        piVar1 = (int *)FUN_006b93e0((int)param_1);
        iVar3 = *piVar1;
        iVar4 = 1;
        FUN_004f3b20();
        fVar2 = FUN_004f30a0(iVar4);
        (**(code **)(iVar3 + 0x34))((float)fVar2);
      }
    }
    *(undefined1 *)(DAT_0104dafc + 0x6e4) = 1;
    iVar3 = FUN_008887b0(*(void **)(*(int *)(DAT_0104dae4 + 0x358) + 0x170),1);
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


//// FUNCTION FUN_00690690 @ 00690690 ////

void __fastcall FUN_00690690(undefined4 *param_1)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  byte bVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc7634;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d3838c;
  param_1[0x14] = &PTR_FUN_00d38370;
  local_4 = 0x1a;
  iVar1 = FUN_007955a0();
  if (iVar1 != 0) {
    iVar1 = FUN_007955a0();
    if (*(int *)(iVar1 + 0x548) != 0) {
      iVar1 = FUN_007955a0();
      FUN_0071b530(0,*(int **)(iVar1 + 0x548));
    }
  }
  puVar2 = DAT_0104de3c;
  DAT_00e5e281 = 1;
  if (DAT_0104de3c != (undefined4 *)0x0) {
    iVar1 = DAT_0104de3c[0x12];
    DAT_0104de3c[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104de28[1])();
    DAT_0104de3c = (undefined4 *)0x0;
    (*(code *)*DAT_0104de28)();
  }
  puVar2 = DAT_0104d910;
  if (DAT_0104d910 != (undefined4 *)0x0) {
    iVar1 = DAT_0104d910[0x12];
    DAT_0104d910[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104d8fc[1])();
    DAT_0104d910 = (undefined4 *)0x0;
    (*(code *)*DAT_0104d8fc)();
  }
  puVar2 = DAT_0104dc54;
  if (DAT_0104dc54 != (undefined4 *)0x0) {
    iVar1 = DAT_0104dc54[0x12];
    DAT_0104dc54[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104dc40[1])();
    DAT_0104dc54 = (undefined4 *)0x0;
    (*(code *)*DAT_0104dc40)();
  }
  puVar2 = DAT_0104db18;
  if (DAT_0104db18 != (undefined4 *)0x0) {
    iVar1 = DAT_0104db18[0x12];
    DAT_0104db18[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104db04[1])();
    DAT_0104db18 = (undefined4 *)0x0;
    (*(code *)*DAT_0104db04)();
  }
  puVar2 = DAT_0104eb98;
  if (DAT_0104eb98 != (undefined4 *)0x0) {
    iVar1 = DAT_0104eb98[0x12];
    DAT_0104eb98[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104eb84[1])();
    DAT_0104eb98 = (undefined4 *)0x0;
    (*(code *)*DAT_0104eb84)();
  }
  if (*(char *)(param_1 + 0x183) != '\0') {
    FUN_009a1560(0);
  }
  puVar2 = DAT_0104dae4;
  if (DAT_0104dae4 != (undefined4 *)0x0) {
    iVar1 = DAT_0104dae4[0x12];
    DAT_0104dae4[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_0104dae4 = (undefined4 *)0x0;
  }
  if ((undefined4 *)param_1[400] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[400])(1);
  }
  param_1[400] = 0;
  FUN_004237f0(DAT_00f87b04);
  if ((undefined4 *)param_1[0x55] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x55] = param_1[0x54];
  }
  if (param_1[0x54] != 0) {
    *(undefined4 *)(param_1[0x54] + 4) = param_1[0x55];
  }
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  FUN_0071bd00();
  (*(code *)DAT_0104dae8[1])();
  DAT_0104dafc = 0;
  (*(code *)*DAT_0104dae8)();
  iVar1 = FUN_0045f410();
  if (iVar1 == 0) {
    FUN_0045f150();
  }
  if (DAT_0105be08 < 2) {
    bVar3 = 1;
    iVar1 = 4;
    puVar2 = param_1;
    this = (void *)FUN_004f3b20();
    FUN_004f9b70(this,iVar1,(int)puVar2,bVar3);
  }
  param_1[0x1b3] = &PTR_FUN_00d38314;
  if ((undefined4 *)param_1[0x1b5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b5] = param_1[0x1b4];
  }
  if (param_1[0x1b4] != 0) {
    *(undefined4 *)(param_1[0x1b4] + 4) = param_1[0x1b5];
  }
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b8] = 0;
  if ((undefined4 *)param_1[0x1b5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b5] = param_1[0x1b4];
  }
  if (param_1[0x1b4] != 0) {
    *(undefined4 *)(param_1[0x1b4] + 4) = param_1[0x1b5];
  }
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1ad] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x1af] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1af] = param_1[0x1ae];
  }
  if (param_1[0x1ae] != 0) {
    *(undefined4 *)(param_1[0x1ae] + 4) = param_1[0x1af];
  }
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b2] = 0;
  if ((undefined4 *)param_1[0x1af] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1af] = param_1[0x1ae];
  }
  if (param_1[0x1ae] != 0) {
    *(undefined4 *)(param_1[0x1ae] + 4) = param_1[0x1af];
  }
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1a7] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x1a9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a9] = param_1[0x1a8];
  }
  if (param_1[0x1a8] != 0) {
    *(undefined4 *)(param_1[0x1a8] + 4) = param_1[0x1a9];
  }
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1ac] = 0;
  if ((undefined4 *)param_1[0x1a9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a9] = param_1[0x1a8];
  }
  if (param_1[0x1a8] != 0) {
    *(undefined4 *)(param_1[0x1a8] + 4) = param_1[0x1a9];
  }
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x189] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x18b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x18b] = param_1[0x18a];
  }
  if (param_1[0x18a] != 0) {
    *(undefined4 *)(param_1[0x18a] + 4) = param_1[0x18b];
  }
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18e] = 0;
  if ((undefined4 *)param_1[0x18b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x18b] = param_1[0x18a];
  }
  if (param_1[0x18a] != 0) {
    *(undefined4 *)(param_1[0x18a] + 4) = param_1[0x18b];
  }
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  if (10 < (uint)param_1[0x17c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x17a]);
  }
  if (10 < (uint)param_1[0x174]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x172]);
  }
  if (10 < (uint)param_1[0x16c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x16a]);
  }
  if (10 < (uint)param_1[0x164]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x162]);
  }
  if (10 < (uint)param_1[0x15c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x15a]);
  }
  if (10 < (uint)param_1[0x154]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x152]);
  }
  if (10 < (uint)param_1[0x14c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14a]);
  }
  if (10 < (uint)param_1[0x144]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x142]);
  }
  if (10 < (uint)param_1[0x13c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x13a]);
  }
  if (10 < (uint)param_1[0x134]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x132]);
  }
  if (10 < (uint)param_1[300]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x12a]);
  }
  if (10 < (uint)param_1[0x124]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x122]);
  }
  if (10 < (uint)param_1[0x11c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11a]);
  }
  if (10 < (uint)param_1[0x114]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x112]);
  }
  if (10 < (uint)param_1[0x10c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10a]);
  }
  if (10 < (uint)param_1[0x104]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x102]);
  }
  if (10 < (uint)param_1[0xfc]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xfa]);
  }
  if (10 < (uint)param_1[0xf4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf2]);
  }
  if (10 < (uint)param_1[0xec]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xea]);
  }
  if (10 < (uint)param_1[0xe4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe2]);
  }
  if (10 < (uint)param_1[0xdc]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xda]);
  }
  if (10 < (uint)param_1[0xd4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd2]);
  }
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00690d00 @ 00690d00 ////

char __fastcall FUN_00690d00(int param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  
  cVar3 = '\0';
  if ((*(byte *)(param_1 + 0x1c8) & 0x10) != 0) {
    cVar2 = (**(code **)(*(int *)(param_1 + -0x50) + 0xc4))();
    cVar3 = '\0';
    if (cVar2 != '\0') {
      if ((((DAT_0104dae4 == 0) || (*(char *)(param_1 + 0x2f4) == '\0')) ||
          (iVar1 = *(int *)(param_1 + 0x5c0), iVar1 == 2)) ||
         (((iVar1 == 3 || (iVar1 == 4)) ||
          (cVar3 = (*(code *)**(undefined4 **)(DAT_0104dae4 + 0x50))(), cVar3 == '\0')))) {
        cVar3 = FUN_007402d0(param_1);
      }
      uVar4 = FUN_005541d0(0xc);
      if ((char)uVar4 != '\0') {
        switch(*(undefined4 *)(param_1 + 0x5c0)) {
        case 1:
          if (*(char *)(param_1 + 0x694) == '\0') {
            if (*(void **)(param_1 + 0x690) != (void *)0x0) {
              FUN_006905d0(*(void **)(param_1 + 0x690));
              return cVar3;
            }
            FUN_009abb50(1);
            FUN_0068ffb0(param_1 + -0x50);
          }
          break;
        case 2:
        case 4:
          if (*(int *)(param_1 + 0x5f0) != 0) {
            if (*(int *)(param_1 + 0x690) != 0) {
              FUN_006b9380(*(int *)(param_1 + 0x690));
            }
            (**(code **)(**(int **)(param_1 + 0x5f0) + 0x1c))();
            return cVar3;
          }
          break;
        case 3:
          if (*(int *)(param_1 + 0x5f0) != 0) {
            if (*(int *)(param_1 + 0x690) != 0) {
              FUN_006b9380(*(int *)(param_1 + 0x690));
            }
            (**(code **)(**(int **)(param_1 + 0x5f0) + 0x1c))();
            return cVar3;
          }
        }
      }
    }
  }
  return cVar3;
}


//// FUNCTION FUN_00690e40 @ 00690e40 ////

void __thiscall FUN_00690e40(void *this,int param_1)

{
  if (param_1 != *(int *)((int)this + 0x610)) {
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x61c) = 1;
    }
    else if (param_1 == 1) {
      if (*(int *)((int)this + 0x6e0) != 0) {
        FUN_006b9380(*(int *)((int)this + 0x6e0));
      }
      if (*(char *)((int)this + 0x344) == '\0') {
        FUN_004237f0((int)DAT_00f87b04);
        FUN_00424130(DAT_00f87b04,2,0,0);
        *(undefined1 *)((int)this + 0x344) = 1;
        (**(code **)(**(int **)((int)this + 0x640) + 0x1c))();
      }
      if (*(int *)((int)this + 0x6e0) == 0) {
        FUN_009abb50(1);
        FUN_0068ffb0((int)this);
      }
    }
    else if (param_1 == 5) {
      *(undefined4 *)((int)this + 0x61c) = 0x19;
    }
    else {
      *(undefined4 *)((int)this + 0x61c) = 0xffffffff;
    }
    *(int *)((int)this + 0x610) = param_1;
    *(undefined4 *)((int)this + 0x618) = 0;
  }
  return;
}


//// FUNCTION FUN_00690f10 @ 00690f10 ////

void __thiscall FUN_00690f10(void *this,int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  void *this_00;
  int *piVar7;
  void *pvVar8;
  uint unaff_EBX;
  wchar_t *in_stack_fffffcb8;
  uint in_stack_fffffcbc;
  uint in_stack_fffffcc0;
  void *in_stack_fffffcdc;
  undefined4 in_stack_fffffce0;
  uint in_stack_fffffce4;
  int iVar9;
  char *pcVar10;
  void *local_2ec [2];
  uint local_2e4;
  void *local_2cc [2];
  uint uStack_2c4;
  void *apvStack_2ac [2];
  uint uStack_2a4;
  void *apvStack_28c [2];
  uint uStack_284;
  void *apvStack_26c [2];
  uint uStack_264;
  void *apvStack_24c [2];
  uint uStack_244;
  void *apvStack_22c [2];
  uint uStack_224;
  void *apvStack_20c [2];
  uint uStack_204;
  void *apvStack_1ec [2];
  uint uStack_1e4;
  void *local_1cc [2];
  uint local_1c4;
  void *apvStack_1ac [2];
  uint uStack_1a4;
  void *local_18c [2];
  uint local_184;
  void *apvStack_174 [2];
  uint uStack_16c;
  void *apvStack_14c [2];
  uint uStack_144;
  void *apvStack_134 [2];
  uint uStack_12c;
  void *local_10c [2];
  uint local_104;
  void *local_ec [2];
  uint local_e4;
  void *local_cc [2];
  uint uStack_c4;
  void *local_ac [2];
  uint local_a4;
  void *local_8c [2];
  uint local_84;
  void *local_6c [2];
  uint local_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7782;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x610) == 5) {
    return;
  }
  ExceptionList = &local_c;
  uVar3 = FUN_0046f5e0(param_1);
  if (uVar3 < 0x7e6) {
    if (uVar3 == 0x7e5) {
      if (*(char *)((int)this + 0x60c) != '\0') {
        if (*(int *)((int)this + 0x610) != 5) {
          *(undefined4 *)((int)this + 0x61c) = 0x19;
          *(undefined4 *)((int)this + 0x610) = 5;
          *(undefined4 *)((int)this + 0x618) = 0;
        }
        DAT_0104a982 = 1;
        ExceptionList = local_c;
        return;
      }
      ExceptionList = local_c;
      return;
    }
    if (uVar3 < 0x62e) {
      if (uVar3 == 0x62d) {
        FUN_007843b0(0,0,0,0);
LAB_006914b8:
        if (*(int *)((int)this + 0x6e0) != 0) {
          FUN_006b9380(*(int *)((int)this + 0x6e0));
          ExceptionList = local_c;
          return;
        }
        ExceptionList = local_c;
        return;
      }
      switch(uVar3) {
      case 0x515:
        FUN_00401de0(local_18c,"Played Basics",0xffffffff);
        local_4 = 0;
        bVar1 = FUN_00541e50(DAT_0104c7e4,local_18c,0);
        local_4 = 0xffffffff;
        if (0x14 < local_184) {
                    /* WARNING: Subroutine does not return */
          _free(local_18c[0]);
        }
        if (bVar1 != 0) {
          if (*(int *)((int)this + 0x610) != 5) {
            *(undefined4 *)((int)this + 0x61c) = 0x19;
            *(undefined4 *)((int)this + 0x610) = 5;
            *(undefined4 *)((int)this + 0x618) = 0;
          }
          FUN_00401de0(local_10c,"studio",0xffffffff);
          local_4 = 7;
          FUN_00558a50(DAT_00f88624,local_10c,(undefined4 *)0x1);
          if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
            _free(local_10c[0]);
          }
          FUN_00401de0(local_1cc,"startfunds",0xffffffff);
          local_4 = 8;
          uVar3 = FUN_00558750(DAT_00f88624,local_1cc,100000);
          if (0x14 < local_1c4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1cc[0]);
          }
          FUN_00401de0(local_8c,"time",0xffffffff);
          local_4 = 9;
          FUN_00558a50(DAT_00f88624,local_8c,(undefined4 *)0x1);
          if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c[0]);
          }
          FUN_00401de0(local_2ec,"start",0xffffffff);
          local_4 = 10;
          puVar4 = (undefined4 *)FUN_00558750(DAT_00f88624,local_2ec,0x780);
          local_4 = 0xffffffff;
          if (0x14 < local_2e4) {
                    /* WARNING: Subroutine does not return */
            _free(local_2ec[0]);
          }
          FUN_00421290(&stack0xfffffcd8,(undefined4 *)((int)this + 0x5e8));
          FUN_00421290(&stack0xfffffcb8,(undefined4 *)((int)this + 0x5c8));
          FUN_006e3200(0,puVar4,uVar3,in_stack_fffffcb8,in_stack_fffffcbc,in_stack_fffffcc0);
          FUN_00403e90((undefined4 *)((int)this + 0x5c8),(wchar_t *)&lpCaption_00d16918);
          FUN_00403e90((undefined4 *)((int)this + 0x5e8),(wchar_t *)&lpCaption_00d16918);
          *(undefined4 *)((int)this + 0x608) = 0;
          ExceptionList = local_c;
          return;
        }
        if (*(int *)((int)this + 0x6e0) != 0) {
          FUN_006b9380(*(int *)((int)this + 0x6e0));
        }
        DAT_010503d2 = 1;
        if (*(int *)((int)this + 0x610) != 5) {
          *(undefined4 *)((int)this + 0x61c) = 0x19;
          *(undefined4 *)((int)this + 0x610) = 5;
          *(undefined4 *)((int)this + 0x618) = 0;
        }
        FUN_00401de0(local_cc,"studio",0xffffffff);
        local_4 = 1;
        FUN_00558a50(DAT_00f88624,local_cc,(undefined4 *)0x1);
        if (0x14 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_cc[0]);
        }
        FUN_00401de0(apvStack_28c,"startfunds",0xffffffff);
        local_4 = 2;
        uVar5 = FUN_00558750(DAT_00f88624,apvStack_28c,100000);
        if (0x14 < uStack_284) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_28c[0]);
        }
        FUN_00401de0(apvStack_14c,"time",0xffffffff);
        local_4 = 3;
        FUN_00558a50(DAT_00f88624,apvStack_14c,(undefined4 *)0x1);
        if (0x14 < uStack_144) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_14c[0]);
        }
        FUN_00401de0(apvStack_24c,"start",0xffffffff);
        local_4 = 4;
        iVar6 = FUN_00558750(DAT_00f88624,apvStack_24c,0x780);
        local_4 = 0xffffffff;
        if (0x14 < uStack_244) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_24c[0]);
        }
        FUN_00422250(DAT_00f87b04);
        FUN_004af4e0();
        FUN_004af4c0(6,0);
        FUN_004af870(iVar6,uVar5,'\x01');
        *(undefined1 *)(DAT_00f87b04 + 8) = 0;
        FUN_00401de0(apvStack_20c,"1",0xffffffff);
        local_4 = 5;
        FUN_00401de0(apvStack_4c,"Played Basics",0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_005417f0(DAT_0104c7e4,apvStack_4c,apvStack_20c);
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        if (0x14 < uStack_204) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_20c[0]);
        }
        ExceptionList = local_c;
        return;
      case 0x5b5:
        if (*(int *)((int)this + 0x610) != 5) {
          *(undefined4 *)((int)this + 0x61c) = 0x19;
          *(undefined4 *)((int)this + 0x610) = 5;
          *(undefined4 *)((int)this + 0x618) = 0;
        }
        uVar3 = DAT_00e580c0;
        puVar4 = DAT_00e580bc;
        FUN_00421240(&stack0xfffffcd8,(wchar_t *)&lpCaption_00d16918,0xffffffff);
        FUN_00421240(&stack0xfffffcb8,(wchar_t *)&lpCaption_00d16918,0xffffffff);
        FUN_006e3200(1,puVar4,uVar3,in_stack_fffffcb8,in_stack_fffffcbc,in_stack_fffffcc0);
        ExceptionList = local_c;
        return;
      case 0x5dd:
        FUN_0071acf0(0);
        ExceptionList = local_c;
        return;
      case 0x605:
        FUN_0071acf0(1);
        ExceptionList = local_c;
        return;
      }
switchD_00690f91_caseD_516:
      ApplicantSpawnDispatcher_UnrecognizedMessageNoOp();
      ExceptionList = local_c;
      return;
    }
    if (uVar3 != 0x71d) {
      if (uVar3 == 0x795) {
        if (*(int *)((int)this + 0x610) != 5) {
          *(undefined4 *)((int)this + 0x61c) = 0x19;
          *(undefined4 *)((int)this + 0x610) = 5;
          *(undefined4 *)((int)this + 0x618) = 0;
        }
        if (*(int *)((int)this + 0x6e0) != 0) {
          FUN_006b9380(*(int *)((int)this + 0x6e0));
        }
        FUN_00401de0(local_2cc,"studio",0xffffffff);
        local_4 = 0x11;
        FUN_00558a50(DAT_00f88624,local_2cc,(undefined4 *)0x1);
        if (0x14 < uStack_2c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_2cc[0]);
        }
        FUN_00401de0(apvStack_2ac,"startfunds",0xffffffff);
        local_4 = 0x12;
        uVar5 = FUN_00558750(DAT_00f88624,apvStack_2ac,100000);
        if (0x14 < uStack_2a4) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2ac[0]);
        }
        FUN_00401de0(apvStack_26c,"time",0xffffffff);
        local_4 = 0x13;
        FUN_00558a50(DAT_00f88624,apvStack_26c,(undefined4 *)0x1);
        if (0x14 < uStack_264) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_26c[0]);
        }
        FUN_00401de0(apvStack_22c,"start",0xffffffff);
        local_4 = 0x14;
        iVar6 = FUN_00558750(DAT_00f88624,apvStack_22c,0x780);
        local_4 = 0xffffffff;
        if (0x14 < uStack_224) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_22c[0]);
        }
        FUN_00422250(DAT_00f87b04);
        FUN_004af4e0();
        FUN_004af4c0(6,0);
        FUN_004af870(iVar6,uVar5,'\x01');
        FUN_00401de0(apvStack_1ac,"1",0xffffffff);
        local_4 = 0x15;
        FUN_00401de0(apvStack_1ec,"Played Basics",0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,0x16);
        FUN_005417f0(DAT_0104c7e4,apvStack_1ec,apvStack_1ac);
        if (0x14 < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_1ec[0]);
        }
        if (0x14 < uStack_1a4) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_1ac[0]);
        }
        ExceptionList = local_c;
        return;
      }
      if (uVar3 == 0x7bd) {
        FUN_006d0e80();
        goto LAB_006914b8;
      }
      goto switchD_00690f91_caseD_516;
    }
    if (*(int *)((int)this + 0x640) == 0) {
      ExceptionList = local_c;
      return;
    }
    if (*(int *)((int)this + 0x6e0) != 0) {
      FUN_006b9380(*(int *)((int)this + 0x6e0));
    }
    iVar6 = **(int **)((int)this + 0x640);
    iVar9 = 1;
    FUN_004f3b20();
    FUN_004f30a0(iVar9);
    (**(code **)(iVar6 + 0x34))();
    bVar1 = 1;
    iVar6 = 0;
    pvVar8 = this;
    this_00 = (void *)FUN_004f3b20();
    FUN_004f98f0(this_00,iVar6,(int)pvVar8,bVar1);
    FUN_00401de0(apvStack_174,"CompletedGame",0xffffffff);
    local_c = (void *)0xf;
    bVar1 = FUN_00541e50(DAT_0104c7e4,apvStack_174,0);
    local_c = (void *)0xffffffff;
    if (0x14 < uStack_16c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_174[0]);
    }
    if (bVar1 != 0) {
      if ((DAT_0105be08 == 0) || (DAT_0105be08 == 1)) {
        (**(code **)(**(int **)((int)this + 0x640) + 8))();
      }
      else {
        (**(code **)(**(int **)((int)this + 0x640) + 8))();
      }
      (**(code **)(**(int **)((int)this + 0x640) + 0x18))();
      iVar6 = 3;
      goto LAB_00691898;
    }
    if ((DAT_0105be08 == 0) || (DAT_0105be08 == 1)) {
      FUN_00401de0(apvStack_134,"data/credits/credits_expack_low.wmv",0xffffffff);
      local_c = (void *)0x10;
      unaff_EBX = 1;
      uVar5 = FUN_009d3660(apvStack_134,(uint *)0x0);
      if ((char)uVar5 == '\0') goto LAB_00691837;
      bVar2 = true;
    }
    else {
LAB_00691837:
      bVar2 = false;
    }
    local_c = (void *)0xffffffff;
    if (((unaff_EBX & 1) != 0) && (0x14 < uStack_12c)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_134[0]);
    }
    if (bVar2) {
      (**(code **)(**(int **)((int)this + 0x640) + 8))();
    }
    else {
      (**(code **)(**(int **)((int)this + 0x640) + 8))();
    }
    (**(code **)(**(int **)((int)this + 0x640) + 0x18))();
    iVar6 = 4;
LAB_00691898:
    if (*(int *)((int)this + 0x610) != iVar6) {
      *(undefined4 *)((int)this + 0x61c) = 0xffffffff;
      *(int *)((int)this + 0x610) = iVar6;
      *(undefined4 *)((int)this + 0x618) = 0;
    }
    if (*(int *)((int)this + 0x6e0) != 0) {
      iVar6 = FUN_006b93e0(*(int *)((int)this + 0x6e0));
      if (iVar6 != 0) {
        FUN_006b9380(*(int *)((int)this + 0x6e0));
        piVar7 = (int *)FUN_006b93e0(*(int *)((int)this + 0x6e0));
        (**(code **)(*piVar7 + 0x34))();
        ExceptionList = local_c;
        return;
      }
      ExceptionList = local_c;
      return;
    }
    ExceptionList = local_c;
    return;
  }
  switch(uVar3) {
  case 0x80d:
    if ((DAT_0104dae4 != 0) &&
       (bVar2 = FUN_00881aa0(*(void **)(DAT_0104dae4 + 0x358),"Textmenu"), bVar2)) {
      FUN_00401de0(&stack0xfffffcdc,(char *)&lpOperation_00d31dc8,0xffffffff);
      local_4 = 0xffffffff;
      pvVar8 = (void *)FUN_008819d0(*(void **)(DAT_0104dae4 + 0x358),"Textmenu");
      uVar3 = FUN_0088a2b0(pvVar8,in_stack_fffffcdc,in_stack_fffffce0,in_stack_fffffce4);
      FUN_00881b40(*(void **)(DAT_0104dae4 + 0x358),"Textmenu",uVar3);
    }
    break;
  default:
    goto switchD_00690f91_caseD_516;
  case 0x835:
    if (DAT_0104dae4 == 0) {
      ExceptionList = local_c;
      return;
    }
    bVar2 = FUN_00881aa0(*(void **)(DAT_0104dae4 + 0x358),"onlineoptions");
    if (!bVar2) {
      ExceptionList = local_c;
      return;
    }
    FUN_00401de0(&stack0xfffffcdc,"close",0xffffffff);
    local_4 = 0xffffffff;
    pvVar8 = (void *)FUN_008819d0(*(void **)(DAT_0104dae4 + 0x358),"onlineoptions");
    uVar3 = FUN_0088a2b0(pvVar8,in_stack_fffffcdc,in_stack_fffffce0,in_stack_fffffce4);
    pcVar10 = "onlineoptions";
    goto LAB_00691d68;
  case 0x85d:
    if ((DAT_0104dae4 != 0) &&
       (bVar2 = FUN_00881aa0(*(void **)(DAT_0104dae4 + 0x358),"video"), bVar2)) {
      FUN_00401de0(&stack0xfffffcdc,"close",0xffffffff);
      local_4 = 0xffffffff;
      pvVar8 = (void *)FUN_008819d0(*(void **)(DAT_0104dae4 + 0x358),"video");
      uVar3 = FUN_0088a2b0(pvVar8,in_stack_fffffcdc,in_stack_fffffce0,in_stack_fffffce4);
      FUN_00881b40(*(void **)(DAT_0104dae4 + 0x358),"video",uVar3);
    }
    break;
  case 0x885:
    if (DAT_0104dae4 == 0) {
      ExceptionList = local_c;
      return;
    }
    bVar2 = FUN_00881aa0(*(void **)(DAT_0104dae4 + 0x358),"gameplay");
    if (!bVar2) {
      ExceptionList = local_c;
      return;
    }
    FUN_00401de0(&stack0xfffffcdc,"close",0xffffffff);
    local_4 = 0xffffffff;
    pvVar8 = (void *)FUN_008819d0(*(void **)(DAT_0104dae4 + 0x358),"gameplay");
    uVar3 = FUN_0088a2b0(pvVar8,in_stack_fffffcdc,in_stack_fffffce0,in_stack_fffffce4);
    pcVar10 = "gameplay";
LAB_00691d68:
    FUN_00881b40(*(void **)(DAT_0104dae4 + 0x358),pcVar10,uVar3);
    break;
  case 0x8ad:
    if ((DAT_0104dae4 != 0) &&
       (bVar2 = FUN_00881aa0(*(void **)(DAT_0104dae4 + 0x358),"audio"), bVar2)) {
      FUN_00401de0(&stack0xfffffcdc,"close",0xffffffff);
      local_4 = 0xffffffff;
      pvVar8 = (void *)FUN_008819d0(*(void **)(DAT_0104dae4 + 0x358),"audio");
      uVar3 = FUN_0088a2b0(pvVar8,in_stack_fffffcdc,in_stack_fffffce0,in_stack_fffffce4);
      FUN_00881b40(*(void **)(DAT_0104dae4 + 0x358),"audio",uVar3);
    }
    break;
  case 0x8d5:
    thunk_FUN_006b85a0();
    break;
  case 0x8fd:
    if (*(int *)((int)this + 0x610) != 5) {
      *(undefined4 *)((int)this + 0x61c) = 0x19;
      *(undefined4 *)((int)this + 0x610) = 5;
      *(undefined4 *)((int)this + 0x618) = 0;
    }
    FUN_00401de0(local_ec,"studio",0xffffffff);
    local_4 = 0xb;
    FUN_00558a50(DAT_00f88624,local_ec,(undefined4 *)0x1);
    if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ec[0]);
    }
    FUN_00401de0(local_ac,"startfunds_quickstart",0xffffffff);
    local_4 = 0xc;
    uVar3 = FUN_00558750(DAT_00f88624,local_ac,1000000);
    if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac[0]);
    }
    FUN_00401de0(local_6c,"time",0xffffffff);
    local_4 = 0xd;
    FUN_00558a50(DAT_00f88624,local_6c,(undefined4 *)0x1);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    FUN_00401de0(local_2c,"start_quickstart",0xffffffff);
    local_4 = 0xe;
    puVar4 = (undefined4 *)FUN_00558750(DAT_00f88624,local_2c,0x79e);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    FUN_00421290(&stack0xfffffcd8,(undefined4 *)((int)this + 0x5e8));
    FUN_00421290(&stack0xfffffcb8,(undefined4 *)((int)this + 0x5c8));
    FUN_006e3200(3,puVar4,uVar3,in_stack_fffffcb8,in_stack_fffffcbc,in_stack_fffffcc0);
    FUN_00403e90((undefined4 *)((int)this + 0x5c8),(wchar_t *)&lpCaption_00d16918);
    FUN_00403e90((undefined4 *)((int)this + 0x5e8),(wchar_t *)&lpCaption_00d16918);
    *(undefined4 *)((int)this + 0x608) = 0;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006921a0 @ 006921a0 ////

undefined4 * __thiscall FUN_006921a0(void *this,byte param_1)

{
  FUN_00690690(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION WFrontEnd_Tick @ 006921c0 ////

void __fastcall WFrontEnd_Tick(int *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 uVar7;
  float10 fVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 uVar11;
  byte bVar12;
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc77c9;
  pvStack_c = ExceptionList;
  bVar3 = false;
  iVar4 = param_1[0x186] + 1;
  ExceptionList = &pvStack_c;
  param_1[0x186] = iVar4;
  switch(param_1[0x184]) {
  case 0:
    if (param_1[0x187] < iVar4) {
      if (DAT_0105be08 < 2) {
        bVar12 = 1;
        iVar10 = 4;
        iVar4 = DAT_0104dafc;
        pvVar5 = (void *)FUN_004f3b20();
        FUN_004f98f0(pvVar5,iVar10,iVar4,bVar12);
      }
      FUN_00690e40(param_1,1);
    }
    break;
  case 1:
    if (((param_1[0x1b8] != 0) && (iVar4 = FUN_006b93e0(param_1[0x1b8]), iVar4 != 0)) &&
       ((char)param_1[0x1b9] != '\0')) {
      iVar4 = 1;
      FUN_004f3b20();
      fVar8 = FUN_004f30a0(iVar4);
      piVar6 = (int *)FUN_006b93e0(param_1[0x1b8]);
      (**(code **)(*piVar6 + 0x34))((float)(fVar8 * (float10)0.45 + (float10)0.45));
    }
    break;
  case 2:
    if (((int *)param_1[400] == (int *)0x0) ||
       (cVar2 = (**(code **)(*(int *)param_1[400] + 0x28))(), cVar2 != '\0')) {
      bVar12 = 1;
      iVar4 = 0;
      piVar6 = param_1;
      pvVar5 = (void *)FUN_004f3b20();
      FUN_004f9b70(pvVar5,iVar4,(int)piVar6,bVar12);
      FUN_00690e40(param_1,1);
      uVar11 = extraout_EDX;
      if ((param_1[0x1b8] != 0) &&
         (iVar4 = FUN_006b93e0(param_1[0x1b8]), uVar11 = extraout_EDX_00, iVar4 != 0)) {
        FUN_006b9380(param_1[0x1b8]);
        uVar11 = extraout_EDX_01;
      }
      FUN_0068f7e0((int)param_1,uVar11);
    }
    break;
  case 3:
    if (((int *)param_1[400] == (int *)0x0) ||
       (cVar2 = (**(code **)(*(int *)param_1[400] + 0x28))(), cVar2 != '\0')) {
      if ((DAT_0105be08 == 0) || (DAT_0105be08 == 1)) {
        FUN_00401de0(local_2c,"data/credits/credits_expack_low.wmv",0xffffffff);
        bVar3 = true;
        uStack_4 = 0;
        uVar11 = FUN_009d3660(local_2c,(uint *)0x0);
        bVar1 = true;
        if ((char)uVar11 == '\0') goto LAB_006922bd;
      }
      else {
LAB_006922bd:
        bVar1 = false;
      }
      uStack_4 = 0xffffffff;
      if ((bVar3) && (0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (bVar1) {
        (**(code **)(*(int *)param_1[400] + 8))(L"data/credits/credits_expack_low.wmv");
      }
      else {
        (**(code **)(*(int *)param_1[400] + 8))(L"data/credits/credits_expack.wmv",0,0,0,0);
      }
      (**(code **)(*(int *)param_1[400] + 0x18))();
      iVar4 = 4;
LAB_0069237c:
      if (param_1[0x184] != iVar4) {
        param_1[0x187] = -1;
        param_1[0x184] = iVar4;
        param_1[0x186] = 0;
      }
      if ((param_1[0x1b8] != 0) && (iVar4 = FUN_006b93e0(param_1[0x1b8]), iVar4 != 0)) {
        uVar11 = 1;
        FUN_006b9380(param_1[0x1b8]);
        piVar6 = (int *)FUN_006b93e0(param_1[0x1b8]);
        (**(code **)(*piVar6 + 0x34))(0,uVar11);
      }
      DAT_00e5e281 = 0;
    }
    break;
  case 4:
    if (((int *)param_1[400] == (int *)0x0) ||
       (cVar2 = (**(code **)(*(int *)param_1[400] + 0x28))(), cVar2 != '\0')) {
      if ((DAT_0105be08 == 0) || (DAT_0105be08 == 1)) {
        (**(code **)(*(int *)param_1[400] + 8))(L"data/credits/credits_low.wmv",0,0,0,0);
      }
      else {
        (**(code **)(*(int *)param_1[400] + 8))(L"data/credits/credits.wmv",0,0,0,0);
      }
      (**(code **)(*(int *)param_1[400] + 0x18))();
      iVar4 = 2;
      goto LAB_0069237c;
    }
    break;
  case 5:
    if (param_1[0x187] <= iVar4) {
      param_1[399] = param_1[399] | 1;
    }
  }
  if ((DAT_0104dae4 != (int *)0x0) && ((char)param_1[0xd1] != '\0')) {
    (**(code **)(*DAT_0104dae4 + 0x28))();
  }
  bVar3 = FUN_004ef580();
  uVar11 = extraout_ECX;
  uVar7 = extraout_EDX_02;
  if ((bVar3) && (DAT_0104db00 == '\0')) {
    bVar3 = FUN_004ef5a0();
    if (bVar3) {
      uVar11 = 0x5b5;
    }
    else {
      bVar3 = FUN_004ef5c0();
      uVar11 = extraout_ECX_00;
      uVar7 = extraout_EDX_03;
      if (!bVar3) goto LAB_006924cb;
      uVar11 = 0x515;
    }
    FUN_00470a70(DAT_0104917c,param_1,uVar11,0,0);
    uVar11 = extraout_ECX_01;
    uVar7 = extraout_EDX_04;
  }
LAB_006924cb:
  DAT_0104db00 = 1;
  uVar9 = FUN_00990ae0(uVar11,uVar7);
  if ((param_1[0x1c5] != 0) && ((uint)param_1[0x1c5] < (uint)uVar9)) {
    DAT_00e5e281 = 1;
    param_1[0x1c5] = 0;
  }
  (**(code **)(*param_1 + 0xd8))();
  WWindow_Tick(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00692530 @ 00692530 ////

undefined4 FUN_00692530(void)

{
  wchar_t *pwVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  LONG LVar7;
  wchar_t *_Dest;
  uint uVar8;
  undefined4 *this;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int local_19c;
  int local_198;
  wchar_t *local_190;
  uint local_18c;
  uint local_188;
  wchar_t local_184 [10];
  wchar_t *local_170;
  uint local_16c;
  uint local_168;
  wchar_t local_164 [10];
  wchar_t *local_150;
  size_t local_14c;
  uint local_148;
  wchar_t local_144 [10];
  wchar_t *local_130;
  uint local_12c;
  uint local_128;
  wchar_t local_124 [10];
  FILETIME local_110;
  FILETIME local_108;
  undefined4 local_100 [26];
  wchar_t *local_98;
  uint local_94;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cc7822;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00a23c20();
  iVar4 = FUN_00a23460();
  local_130 = local_124;
  iVar10 = 0;
  local_124[0] = L'\0';
  local_12c = 0;
  local_128 = 10;
  local_190 = local_184;
  local_184[0] = L'\0';
  local_18c = 0;
  local_188 = 10;
  local_c._1_3_ = 0;
  local_19c = 0;
  if (0 < iVar4) {
    local_198 = -1;
    do {
      local_c._0_1_ = 1;
      iVar5 = FUN_00a23460();
      FUN_00a236f0((int *)&local_150,iVar5 + local_198);
      uVar8 = DAT_0104a9a4;
      pwVar1 = DAT_0104a9a0;
      local_170 = local_164;
      local_168 = 10;
      local_164[0] = L'\0';
      local_16c = 0;
      if (9 < DAT_0104a9a4) {
        local_168 = DAT_0104a9a4 + 0x20 & 0xffffffe0;
        local_170 = _malloc(local_168 * 2);
      }
      _wcsncpy(local_170,pwVar1,uVar8);
      local_16c = uVar8;
      local_170[uVar8] = L'\0';
      local_c = CONCAT31(local_c._1_3_,3);
      FUN_0040cae0(&local_170,local_150,local_14c);
      sVar6 = FUN_00ace02d(L".jad");
      FUN_0040cae0(&local_170,L".jad",sVar6);
      sVar6 = local_14c;
      pwVar1 = local_150;
      if (iVar10 < 0) {
        if (local_128 <= local_14c) {
          if (10 < local_128) {
                    /* WARNING: Subroutine does not return */
            _free(local_130);
          }
          local_128 = local_14c + 0x20 & 0xffffffe0;
          local_130 = _malloc(local_128 * 2);
        }
        _wcsncpy(local_130,pwVar1,sVar6);
        uVar8 = local_16c;
        pwVar1 = local_170;
        local_12c = sVar6;
        local_130[sVar6] = L'\0';
        if (local_188 <= local_16c) {
          if (10 < local_188) {
                    /* WARNING: Subroutine does not return */
            _free(local_190);
          }
          uVar11 = local_16c + 0x20 >> 5;
          local_188 = uVar11 << 5;
          local_190 = _malloc(uVar11 * 0x40);
        }
        _wcsncpy(local_190,pwVar1,uVar8);
        local_18c = uVar8;
        local_190[uVar8] = L'\0';
        FUN_009d3840(&local_170,&local_110.dwLowDateTime);
        iVar10 = local_19c;
      }
      else {
        FUN_009d3840(&local_170,&local_108.dwLowDateTime);
        LVar7 = CompareFileTime(&local_108,&local_110);
        if (((local_16c != 0) && (bVar2 = FUN_004b1010(&local_170), bVar2)) &&
           ((LVar7 == 1 || (local_198 == -1)))) {
          FUN_004036d0(&local_130,local_150,local_14c);
          FUN_004036d0(&local_190,local_170,local_16c);
          local_110.dwLowDateTime = local_108.dwLowDateTime;
          local_110.dwHighDateTime = local_108.dwHighDateTime;
          iVar10 = local_19c;
        }
      }
      if (10 < local_168) {
                    /* WARNING: Subroutine does not return */
        _free(local_170);
      }
      local_c._0_1_ = 1;
      if (10 < local_148) {
                    /* WARNING: Subroutine does not return */
        _free(local_150);
      }
      local_19c = local_19c + 1;
      local_198 = local_198 + -1;
    } while (local_19c < iVar4);
  }
  local_c._0_1_ = 1;
  FUN_004b27d0(local_100);
  uVar8 = local_18c;
  pwVar1 = local_190;
  local_c._0_1_ = 4;
  if (local_18c != 0) {
    _Dest = (wchar_t *)&stack0xfffffe3c;
    uVar11 = 10;
    if (9 < local_18c) {
      uVar11 = local_18c + 0x20 & 0xffffffe0;
      _Dest = _malloc(uVar11 * 2);
    }
    _wcsncpy(_Dest,pwVar1,uVar8);
    _Dest[uVar8] = L'\0';
    uVar8 = FUN_004b2e70((int)local_100,_Dest,uVar8,uVar11);
    if ((char)uVar8 != '\0') {
      if (DAT_0104deb0 == '\0') {
        FUN_004036d0(&PTR_DAT_00e5822c,local_98,local_94);
      }
      cVar3 = FUN_004b4440(&local_190);
      if (cVar3 == '\0') {
        this = FUN_006b85a0();
        local_150 = local_144;
        local_144[0] = L'\0';
        local_14c = 0;
        local_148 = 10;
        uVar8 = FUN_00ace02d(L"<translate>ERROR_SAVE_WITH_DOWNLOAD_CONTENT</translate>");
        FUN_004036d0(&local_150,L"<translate>ERROR_SAVE_WITH_DOWNLOAD_CONTENT</translate>",uVar8);
        local_c._0_1_ = 5;
        FUN_006b8100(this,&local_150);
        if (10 < local_148) {
                    /* WARNING: Subroutine does not return */
          _free(local_150);
        }
        local_c = CONCAT31(local_c._1_3_,1);
        uVar9 = FUN_004b2660(local_100);
        if (10 < local_188) {
                    /* WARNING: Subroutine does not return */
          _free(local_190);
        }
        goto joined_r0x006929ab;
      }
      if (DAT_0104deb0 == '\0') {
        FUN_004036d0(&PTR_DAT_00e5824c,local_190,local_18c);
      }
      iVar10 = DAT_0104dafc;
      DAT_0104deb0 = '\x01';
      if (DAT_0104dafc != 0) {
        *(uint *)(DAT_0104dafc + 0x63c) = *(uint *)(DAT_0104dafc + 0x63c) | 1;
        if (*(int *)(iVar10 + 0x6e0) != 0) {
          FUN_006b9380(*(int *)(iVar10 + 0x6e0));
        }
      }
      if (DAT_0104a978 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = DAT_0104a978 + 0x28;
      }
      FUN_00470a70(DAT_0104917c,iVar10,0x231,0,0);
    }
  }
  local_c = CONCAT31(local_c._1_3_,1);
  uVar9 = FUN_004b2660(local_100);
  if (10 < local_188) {
                    /* WARNING: Subroutine does not return */
    _free(local_190);
  }
joined_r0x006929ab:
  if (local_128 < 0xb) {
    ExceptionList = pvStack_14;
    return CONCAT31((int3)((uint)uVar9 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_130);
}


//// FUNCTION FUN_00692a90 @ 00692a90 ////

void __fastcall FUN_00692a90(undefined4 param_1)

{
  void *this;
  bool bVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7948;
  local_c = ExceptionList;
  if (*(int *)(DAT_0104dae4 + 0x358) != 0) {
    this = *(void **)(*(int *)(DAT_0104dae4 + 0x358) + 0x178);
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"ExternResIncrease",0x11);
    local_28 = 0x11;
    local_2c[0x11] = '\0';
    local_4 = 0;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f2c0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternResDecrease",0x11);
    local_28 = 0x11;
    local_2c[0x11] = '\0';
    local_4 = 1;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f2e0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternDiffIncrease",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 2;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f300,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternDiffDecrease",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 3;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f320,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternBloodIncrease",0x13);
    local_28 = 0x13;
    local_2c[0x13] = '\0';
    local_4 = 4;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f380,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternBloodDecrease",0x13);
    local_28 = 0x13;
    local_2c[0x13] = '\0';
    local_4 = 5;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f3a0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ExternDetailIncrease",0x14);
    local_28 = 0x14;
    local_2c[0x14] = '\0';
    local_4 = 6;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f340,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ExternDetailDecrease",0x14);
    local_28 = 0x14;
    local_2c[0x14] = '\0';
    local_4 = 7;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f360,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternMusicVolUp",0x10);
    local_28 = 0x10;
    local_2c[0x10] = '\0';
    local_4 = 8;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f3c0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternMusicVolDown",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 9;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f400,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternSoundVolUp",0x10);
    local_28 = 0x10;
    local_2c[0x10] = '\0';
    local_4 = 10;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f440,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternSoundVolDown",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 0xb;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f480,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternStartNewGame",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 0xc;
    FUN_0087de50(this,&local_2c,param_1,FUN_0068f4c0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternStartSandbox",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 0xd;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f4e0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternQuitGame",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xe;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f500,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternOpenGame",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xf;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f530,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"cb_trailereditor",0x10);
    local_28 = 0x10;
    local_2c[0x10] = '\0';
    local_4 = 0x10;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f510,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternOnline",0xc);
    local_28 = 0xc;
    local_2c[0xc] = '\0';
    local_4 = 0x11;
    FUN_0087de50(this,&local_2c,param_1,FUN_0068f550,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternCredits",0xd);
    local_28 = 0xd;
    local_2c[0xd] = '\0';
    local_4 = 0x12;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f570,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternTutorial",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x13;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f590,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternResume",0xc);
    local_28 = 0xc;
    local_2c[0xc] = '\0';
    local_4 = 0x14;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f5b0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternGamebutOpen",0x11);
    local_28 = 0x11;
    local_2c[0x11] = '\0';
    local_4 = 0x15;
    FUN_0087de50(this,&local_2c,param_1,FUN_0068fee0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternGamebutClosed",0x13);
    local_28 = 0x13;
    local_2c[0x13] = '\0';
    local_4 = 0x16;
    FUN_0087de50(this,&local_2c,param_1,FUN_0068fe10,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternSave",10);
    local_28 = 10;
    local_2c[10] = '\0';
    local_4 = 0x17;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068fad0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternAudioClose",0x10);
    local_28 = 0x10;
    local_2c[0x10] = '\0';
    local_4 = 0x18;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f5d0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternVideoClose",0x10);
    local_28 = 0x10;
    local_2c[0x10] = '\0';
    local_4 = 0x19;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f5e0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternOnlineClose",0x11);
    local_28 = 0x11;
    local_2c[0x11] = '\0';
    local_4 = 0x1a;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f5f0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternGameplayClose",0x13);
    local_28 = 0x13;
    local_2c[0x13] = '\0';
    local_4 = 0x1b;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f600,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ExternOptionsClickedOpen",0x18);
    local_28 = 0x18;
    local_2c[0x18] = '\0';
    local_4 = 0x1c;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f610,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ExternOptionsClickedClose",0x19);
    local_28 = 0x19;
    local_2c[0x19] = '\0';
    local_4 = 0x1d;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f640,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ExternQuitClickedOpen",0x15);
    local_28 = 0x15;
    local_2c[0x15] = '\0';
    local_4 = 0x1e;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f670,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ExternQuitClickedClose",0x16);
    local_28 = 0x16;
    local_2c[0x16] = '\0';
    local_4 = 0x1f;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f6a0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ExternEnterMain",0xf);
    local_28 = 0xf;
    local_2c[0xf] = '\0';
    local_4 = 0x20;
    FUN_0087de50(this,&local_2c,param_1,&LAB_0068f6d0,0);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    bVar1 = FUN_00541f60(0);
    if (bVar1) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"AddOn1Qstart",0xc);
      local_28 = 0xc;
      local_2c[0xc] = '\0';
      local_4 = 0x21;
      FUN_0087de50(this,&local_2c,param_1,&LAB_0068f800,0);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"ExternContinue",0xe);
      local_28 = 0xe;
      local_2c[0xe] = '\0';
      local_4 = 0x22;
      FUN_0087de50(this,&local_2c,param_1,FUN_00692530,0);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00693930 @ 00693930 ////

void __fastcall FUN_00693930(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  LONG LVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  wchar_t local_1c4 [2];
  undefined4 uStack_1c0;
  int local_1a0;
  int local_19c;
  wchar_t *local_194;
  uint local_190;
  uint local_18c;
  wchar_t local_188 [10];
  FILETIME local_174;
  int local_16c;
  FILETIME local_168;
  wchar_t *local_160;
  uint local_15c;
  uint local_158;
  wchar_t local_154 [10];
  undefined2 *local_140;
  undefined4 local_13c;
  uint local_138;
  undefined2 local_134 [10];
  wchar_t *local_120;
  size_t local_11c;
  uint local_118;
  undefined4 local_100 [26];
  wchar_t *local_98;
  uint local_94;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cc7997;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar2 = FUN_0068ffd0();
  if ((char)uVar2 != '\0') {
    FUN_00a23c20();
    local_16c = FUN_00a23460();
    local_140 = local_134;
    local_19c = 0;
    local_134[0] = 0;
    local_13c = 0;
    local_138 = 10;
    local_160 = local_154;
    local_154[0] = L'\0';
    local_15c = 0;
    local_158 = 10;
    local_c._1_3_ = 0;
    local_1a0 = 0;
    if (0 < local_16c) {
      iVar6 = -1;
      do {
        local_c._0_1_ = 1;
        iVar3 = FUN_00a23460();
        FUN_00a236f0((int *)&local_120,iVar3 + iVar6);
        uVar8 = DAT_0104a9a4;
        pwVar7 = DAT_0104a9a0;
        local_18c = 10;
        local_194 = local_188;
        local_188[0] = L'\0';
        local_190 = 0;
        if (9 < DAT_0104a9a4) {
          local_18c = DAT_0104a9a4 + 0x20 & 0xffffffe0;
          local_194 = _malloc(local_18c * 2);
        }
        uStack_1c0 = 0x693a33;
        _wcsncpy(local_194,pwVar7,uVar8);
        local_190 = uVar8;
        local_194[uVar8] = L'\0';
        local_c = CONCAT31(local_c._1_3_,3);
        FUN_0040cae0(&local_194,local_120,local_11c);
        sVar4 = FUN_00ace02d(L".jad");
        FUN_0040cae0(&local_194,L".jad",sVar4);
        if (local_19c < 0) {
          local_19c = local_1a0;
          FUN_004036d0(&local_140,local_120,local_11c);
          FUN_004036d0(&local_160,local_194,local_190);
          FUN_009d3840(&local_194,&local_174.dwLowDateTime);
        }
        else {
          FUN_009d3840(&local_194,&local_168.dwLowDateTime);
          LVar5 = CompareFileTime(&local_168,&local_174);
          if (((local_190 != 0) && (bVar1 = FUN_004b1010(&local_194), bVar1)) &&
             ((LVar5 == 1 || (iVar6 == -1)))) {
            local_19c = local_1a0;
            FUN_004036d0(&local_140,local_120,local_11c);
            FUN_004036d0(&local_160,local_194,local_190);
            local_174.dwLowDateTime = local_168.dwLowDateTime;
            local_174.dwHighDateTime = local_168.dwHighDateTime;
          }
        }
        if (10 < local_18c) {
                    /* WARNING: Subroutine does not return */
          _free(local_194);
        }
        local_c._0_1_ = 1;
        if (10 < local_118) {
                    /* WARNING: Subroutine does not return */
          _free(local_120);
        }
        local_1a0 = local_1a0 + 1;
        iVar6 = iVar6 + -1;
      } while (local_1a0 < local_16c);
    }
    local_c._0_1_ = 1;
    FUN_004b27d0(local_100);
    local_c._0_1_ = 4;
    if (local_15c != 0) {
      pwVar7 = local_1c4;
      local_1c4[0] = L'\0';
      uVar8 = 0;
      uVar9 = 10;
      FUN_004036d0(&stack0xfffffe30,local_160,local_15c);
      uVar8 = FUN_004b2e70((int)local_100,pwVar7,uVar8,uVar9);
      if ((char)uVar8 != '\0') {
        FUN_004036d0((void *)(param_1 + 0x5a8),local_98,local_94);
      }
    }
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_004b2660(local_100);
    if (10 < local_158) {
                    /* WARNING: Subroutine does not return */
      _free(local_160);
    }
    if (10 < local_138) {
                    /* WARNING: Subroutine does not return */
      _free(local_140);
    }
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_00693c80 @ 00693c80 ////

void __fastcall FUN_00693c80(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  char **ppcVar6;
  char cVar7;
  undefined1 uVar8;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  wchar_t *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7b18;
  local_c = ExceptionList;
  if (*(int *)(DAT_0104dae4 + 0x358) != 0) {
    pvVar4 = *(void **)(*(int *)(DAT_0104dae4 + 0x358) + 0x178);
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_6c,"FRONTEND_RESUME",0xf);
    local_68 = 0xf;
    local_6c[0xf] = '\0';
    local_4 = 0;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x348),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$resume",7);
    local_68 = 7;
    local_6c[7] = '\0';
    local_4 = 1;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x348,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"FRONTEND_GAME",0xd);
    local_68 = 0xd;
    local_6c[0xd] = '\0';
    local_4 = 2;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x368),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$game",5);
    local_68 = 5;
    local_6c[5] = '\0';
    local_4 = 3;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x368,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"FRONTEND_LOAD",0xd);
    local_68 = 0xd;
    local_6c[0xd] = '\0';
    local_4 = 4;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x388),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$load",5);
    local_68 = 5;
    local_6c[5] = '\0';
    local_4 = 5;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x388,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"FRONTEND_SAVE",0xd);
    local_68 = 0xd;
    local_6c[0xd] = '\0';
    local_4 = 6;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x3a8),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$save",5);
    local_68 = 5;
    local_6c[5] = '\0';
    local_4 = 7;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x3a8,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"FRONTEND_NEW",0xc);
    local_68 = 0xc;
    local_6c[0xc] = '\0';
    local_4 = 8;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x3c8),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$newgame",8);
    local_68 = 8;
    local_6c[8] = '\0';
    local_4 = 9;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x3c8,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"FRONTEND_TUTORIAL",0x11);
    local_68 = 0x11;
    local_6c[0x11] = '\0';
    local_4 = 10;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 1000),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$tutorial",9);
    local_68 = 9;
    local_6c[9] = '\0';
    local_4 = 0xb;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 1000,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"FRONTEND_SANDBOX",0x10);
    local_68 = 0x10;
    local_6c[0x10] = '\0';
    local_4 = 0xc;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x408),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$sandbox",8);
    local_68 = 8;
    local_6c[8] = '\0';
    local_4 = 0xd;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x408,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"FRONTEND_ONLINE",0xf);
    local_68 = 0xf;
    local_6c[0xf] = '\0';
    local_4 = 0xe;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x428),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$online",7);
    local_68 = 7;
    local_6c[7] = '\0';
    local_4 = 0xf;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x428,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"FRONTEND_OPTIONS",0x10);
    local_68 = 0x10;
    local_6c[0x10] = '\0';
    local_4 = 0x10;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x448),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$options",8);
    local_68 = 8;
    local_6c[8] = '\0';
    local_4 = 0x11;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x448,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x20;
    local_6c = _malloc(0x20);
    _strncpy(local_6c,"FRONTEND_MOVIEPLAYER",0x14);
    local_68 = 0x14;
    local_6c[0x14] = '\0';
    local_4 = 0x12;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x468),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$movies",7);
    local_68 = 7;
    local_6c[7] = '\0';
    local_4 = 0x13;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x468,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x20;
    local_6c = _malloc(0x20);
    _strncpy(local_6c,"FRONTEND_VIDEOOPTION",0x14);
    local_68 = 0x14;
    local_6c[0x14] = '\0';
    local_4 = 0x14;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x488),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$videooption",0xc);
    local_68 = 0xc;
    local_6c[0xc] = '\0';
    local_4 = 0x15;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x488,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x20;
    local_6c = _malloc(0x20);
    _strncpy(local_6c,"FRONTEND_AUDIOOPTION",0x14);
    local_68 = 0x14;
    local_6c[0x14] = '\0';
    local_4 = 0x16;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x4a8),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$audiooption",0xc);
    local_68 = 0xc;
    local_6c[0xc] = '\0';
    local_4 = 0x17;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x4a8,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"FRONTEND_GAMEOPTION",0x13);
    local_68 = 0x13;
    local_6c[0x13] = '\0';
    local_4 = 0x18;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x4c8),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$gameoption",0xb);
    local_68 = 0xb;
    local_6c[0xb] = '\0';
    local_4 = 0x19;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x4c8,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x20;
    local_6c = _malloc(0x20);
    _strncpy(local_6c,"FRONTEND_ONLINEOPTION",0x15);
    local_68 = 0x15;
    local_6c[0x15] = '\0';
    local_4 = 0x1a;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x4e8),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$onlineoption",0xd);
    local_68 = 0xd;
    local_6c[0xd] = '\0';
    local_4 = 0x1b;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x4e8,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"FRONTEND_CREDITS",0x10);
    local_68 = 0x10;
    local_6c[0x10] = '\0';
    local_4 = 0x1c;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x508),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$credits",8);
    local_68 = 8;
    local_6c[8] = '\0';
    local_4 = 0x1d;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x508,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"FRONTEND_QUIT",0xd);
    local_68 = 0xd;
    local_6c[0xd] = '\0';
    local_4 = 0x1e;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x528),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$quit",5);
    local_68 = 5;
    local_6c[5] = '\0';
    local_4 = 0x1f;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x528,0,0xff000000);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x20;
    local_6c = _malloc(0x20);
    _strncpy(local_6c,"FRONTEND_QUITQUESTION",0x15);
    local_68 = 0x15;
    local_6c[0x15] = '\0';
    local_4 = 0x20;
    puVar2 = FUN_009b5030(local_4c,&local_6c);
    FUN_004036d0((void *)(param_1 + 0x548),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"$quitquestion",0xd);
    local_68 = 0xd;
    local_6c[0xd] = '\0';
    local_4 = 0x21;
    FUN_0087f280(pvVar4,&local_6c,param_1 + 0x548,0,0xff000000);
    local_4 = 0xffffffff;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    bVar1 = FUN_00541f60(0);
    if (bVar1) {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      _strncpy(local_6c,"FRONTEND_QUICKSTART",0x13);
      local_68 = 0x13;
      local_6c[0x13] = '\0';
      local_4 = 0x22;
      puVar2 = FUN_009b5030(local_4c,&local_6c);
      FUN_004036d0((void *)(param_1 + 0x568),(wchar_t *)*puVar2,puVar2[1]);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      _strncpy(local_6c,"$addon1quickstart",0x11);
      local_68 = 0x11;
      local_6c[0x11] = '\0';
      local_4 = 0x23;
      FUN_0087f280(pvVar4,&local_6c,param_1 + 0x568,0,0xff000000);
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      _strncpy(local_6c,"FRONTEND_CONTINUE",0x11);
      local_68 = 0x11;
      local_6c[0x11] = '\0';
      local_4 = 0x24;
      puVar2 = FUN_009b5030(local_4c,&local_6c);
      FUN_004036d0((void *)(param_1 + 0x588),(wchar_t *)*puVar2,puVar2[1]);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      _strncpy(local_6c,"$continue",9);
      local_68 = 9;
      local_6c[9] = '\0';
      local_4 = 0x25;
      FUN_0087f280(pvVar4,&local_6c,param_1 + 0x588,0,0xff000000);
      local_4 = 0xffffffff;
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
    }
    iVar3 = FUN_008828c0(*(void **)(DAT_0104dae4 + 0x358),"back");
    if (iVar3 != 0) {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x20;
      local_6c = _malloc(0x20);
      _strncpy(local_6c,"FRONTEND_BACKTOMAINMENU",0x17);
      local_68 = 0x17;
      local_6c[0x17] = '\0';
      uVar8 = 0;
      cVar7 = '\x01';
      ppcVar6 = &local_6c;
      local_4 = 0x26;
      pvVar4 = (void *)FUN_008828c0(*(void **)(DAT_0104dae4 + 0x358),"back");
      FUN_00872180(pvVar4,ppcVar6,cVar7,uVar8);
      local_4 = 0xffffffff;
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
    }
    iVar3 = FUN_008828c0(*(void **)(DAT_0104dae4 + 0x358),"quit");
    if (iVar3 != 0) {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      _strncpy(local_6c,"FRONTEND_QUIT",0xd);
      local_68 = 0xd;
      local_6c[0xd] = '\0';
      uVar8 = 0;
      cVar7 = '\x01';
      ppcVar6 = &local_6c;
      local_4 = 0x27;
      pvVar4 = (void *)FUN_008828c0(*(void **)(DAT_0104dae4 + 0x358),"quit");
      FUN_00872180(pvVar4,ppcVar6,cVar7,uVar8);
      local_4 = 0xffffffff;
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
    }
    iVar3 = FUN_008828c0(*(void **)(DAT_0104dae4 + 0x358),"notquit");
    if (iVar3 != 0) {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x20;
      local_6c = _malloc(0x20);
      _strncpy(local_6c,"FRONTEND_BACKTOMAINMENU",0x17);
      local_68 = 0x17;
      local_6c[0x17] = '\0';
      uVar8 = 0;
      cVar7 = '\x01';
      ppcVar6 = &local_6c;
      local_4 = 0x28;
      pvVar4 = (void *)FUN_008828c0(*(void **)(DAT_0104dae4 + 0x358),"notquit");
      FUN_00872180(pvVar4,ppcVar6,cVar7,uVar8);
      local_4 = 0xffffffff;
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
    }
    iVar3 = FUN_008828c0(*(void **)(DAT_0104dae4 + 0x358),"quickstartbutton");
    if (iVar3 != 0) {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x20;
      local_6c = _malloc(0x20);
      _strncpy(local_6c,"FRONTEND_QUICKSTART_TOOLTIP",0x1b);
      local_68 = 0x1b;
      local_6c[0x1b] = '\0';
      uVar8 = 0;
      cVar7 = '\x01';
      ppcVar6 = &local_6c;
      local_4 = 0x29;
      pvVar4 = (void *)FUN_008828c0(*(void **)(DAT_0104dae4 + 0x358),"quickstartbutton");
      FUN_00872180(pvVar4,ppcVar6,cVar7,uVar8);
      local_4 = 0xffffffff;
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
    }
    iVar3 = FUN_008828c0(*(void **)(DAT_0104dae4 + 0x358),"continuebutton");
    if (iVar3 != 0) {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x20;
      local_6c = _malloc(0x20);
      _strncpy(local_6c,"FRONTEND_CONTINUE_TOOLTIP",0x19);
      local_68 = 0x19;
      local_6c[0x19] = '\0';
      local_4 = 0x2a;
      FUN_009b5030(local_4c,&local_6c);
      local_4 = CONCAT31(local_4._1_3_,0x2c);
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      uVar5 = FUN_0068ffd0();
      if ((char)uVar5 != '\0') {
        FUN_00693930(param_1);
        FUN_0056b730(local_4c,*(undefined4 *)(param_1 + 0x5a8),L"%SAVEGAME%");
      }
      uVar8 = 0;
      pvVar4 = (void *)FUN_008828c0(*(void **)(DAT_0104dae4 + 0x358),"continuebutton");
      FUN_00871210(pvVar4,uVar8);
      puVar2 = FUN_00568960(local_2c,local_4c[0]);
      uVar8 = 0;
      cVar7 = '\x01';
      local_4 = CONCAT31(local_4._1_3_,0x2d);
      pvVar4 = (void *)FUN_008828c0(*(void **)(DAT_0104dae4 + 0x358),"continuebutton");
      FUN_00872180(pvVar4,puVar2,cVar7,uVar8);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00695460 @ 00695460 ////

undefined4 * __fastcall FUN_00695460(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  uint unaff_EBP;
  ulonglong uVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  char acStack_28 [20];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7cf6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d3838c;
  param_1[0x14] = &PTR_FUN_00d38370;
  local_4 = 0;
  param_1[0xd2] = param_1 + 0xd5;
  *(undefined2 *)(param_1 + 0xd5) = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 10;
  param_1[0xda] = param_1 + 0xdd;
  *(undefined2 *)(param_1 + 0xdd) = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 10;
  param_1[0xe2] = param_1 + 0xe5;
  *(undefined2 *)(param_1 + 0xe5) = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 10;
  param_1[0xea] = param_1 + 0xed;
  *(undefined2 *)(param_1 + 0xed) = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 10;
  param_1[0xf2] = param_1 + 0xf5;
  *(undefined2 *)(param_1 + 0xf5) = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 10;
  param_1[0xfa] = param_1 + 0xfd;
  *(undefined2 *)(param_1 + 0xfd) = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 10;
  param_1[0x102] = param_1 + 0x105;
  *(undefined2 *)(param_1 + 0x105) = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 10;
  param_1[0x10a] = param_1 + 0x10d;
  *(undefined2 *)(param_1 + 0x10d) = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 10;
  param_1[0x112] = param_1 + 0x115;
  *(undefined2 *)(param_1 + 0x115) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 10;
  param_1[0x11a] = param_1 + 0x11d;
  *(undefined2 *)(param_1 + 0x11d) = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 10;
  param_1[0x122] = param_1 + 0x125;
  *(undefined2 *)(param_1 + 0x125) = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 10;
  param_1[0x12a] = param_1 + 0x12d;
  *(undefined2 *)(param_1 + 0x12d) = 0;
  param_1[299] = 0;
  param_1[300] = 10;
  param_1[0x132] = param_1 + 0x135;
  *(undefined2 *)(param_1 + 0x135) = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 10;
  param_1[0x13a] = param_1 + 0x13d;
  *(undefined2 *)(param_1 + 0x13d) = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 10;
  param_1[0x142] = param_1 + 0x145;
  *(undefined2 *)(param_1 + 0x145) = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 10;
  param_1[0x14a] = param_1 + 0x14d;
  *(undefined2 *)(param_1 + 0x14d) = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 10;
  param_1[0x152] = param_1 + 0x155;
  *(undefined2 *)(param_1 + 0x155) = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 10;
  param_1[0x15a] = param_1 + 0x15d;
  *(undefined2 *)(param_1 + 0x15d) = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 10;
  param_1[0x162] = param_1 + 0x165;
  *(undefined2 *)(param_1 + 0x165) = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 10;
  param_1[0x16a] = param_1 + 0x16d;
  *(undefined2 *)(param_1 + 0x16d) = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 10;
  param_1[0x172] = param_1 + 0x175;
  *(undefined2 *)(param_1 + 0x175) = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 10;
  param_1[0x17a] = param_1 + 0x17d;
  *(undefined2 *)(param_1 + 0x17d) = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 10;
  param_1[0x18c] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = param_1 + 0x189;
  param_1[0x189] = &PTR_FUN_00d195f8;
  param_1[0x18e] = 0;
  FUN_0041f350(param_1 + 0x192);
  param_1[0x1aa] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = param_1 + 0x1a7;
  param_1[0x1a7] = &PTR_FUN_00d195f8;
  param_1[0x1ac] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = param_1 + 0x1ad;
  param_1[0x1ad] = &PTR_FUN_00d195f8;
  param_1[0x1b2] = 0;
  piVar5 = param_1 + 0x1b3;
  param_1[0x1b6] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = piVar5;
  *piVar5 = (int)&PTR_FUN_00d38314;
  param_1[0x1b8] = 0;
  param_1[399] = param_1[399] & 0xfffffffe;
  local_4 = CONCAT31(local_4._1_3_,0x1a);
  param_1[0x185] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1b9) = 0;
  param_1[0x45] = param_1[0x45] & 0xfffffffd | 8;
  *(undefined1 *)(param_1 + 0x1be) = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined1 *)(param_1 + 0x1c4) = 1;
  *(undefined1 *)((int)param_1 + 0x711) = 0;
  *(undefined1 *)((int)param_1 + 0x712) = 0;
  *(undefined1 *)((int)param_1 + 0x713) = 0;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x172,(wchar_t *)&lpCaption_00d16918,uVar1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x17a,(wchar_t *)&lpCaption_00d16918,uVar1);
  param_1[0x182] = 0;
  param_1[0x1c5] = 0;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x16a,(wchar_t *)&lpCaption_00d16918,uVar1);
  DAT_00e5e280 = 1;
  FUN_0071c290();
  pvVar10 = (void *)0x0;
  iVar2 = FUN_0071b2b0();
  FUN_00741d80(param_1,iVar2,pvVar10);
  piVar3 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar3 + 0xc))();
  param_1[0x1bf] = DAT_00e56eb0;
  param_1[0x1c0] = DAT_00e56eb4;
  param_1[0x1c1] = DAT_00e56eb8;
  uStack_3c = DAT_00e56eac;
  param_1[0x1c2] = DAT_00e56ebc;
  uStack_38 = 0;
  FUN_00747290((void *)param_1[0xb5],param_1 + 0x1bf);
  FUN_00747290((void *)param_1[0xb5],&uStack_3c);
  FUN_00747290((void *)param_1[0xb5],param_1 + 0x1c1);
  param_1[0x1c3] = uStack_3c;
  FUN_00424130(DAT_00f87b04,1,&DAT_0068f2a0,&DAT_0068f2b0);
  puVar4 = MediaPlayer_Constructor();
  param_1[400] = puVar4;
  param_1[0x184] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 10;
  uVar6 = extraout_ECX;
  uVar7 = extraout_EDX;
  if (DAT_0104dae4 == (undefined4 *)0x0) {
    puVar4 = operator_new(0x394);
    pvStack_c._0_1_ = 0x1b;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_0104dae4 = (undefined4 *)0x0;
    }
    else {
      DAT_0104dae4 = FUN_0089ea20(puVar4);
    }
    pcStack_34 = acStack_28;
    acStack_28[0] = '\0';
    uStack_30 = 0;
    uStack_2c = 0x14;
    _strncpy(pcStack_34,"frontend",8);
    uStack_30 = 8;
    pcStack_34[8] = '\0';
    pvStack_c._0_1_ = 0x1c;
    FUN_0089e070(DAT_0104dae4,&pcStack_34,0,1,'\x01');
    pvStack_c._0_1_ = 0x1a;
    if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_34);
    }
    FUN_00692a90(param_1);
    FUN_00693c80((int)param_1);
    if (DAT_0105be08 < 2) {
      pvVar10 = operator_new(0x360);
      if (pvVar10 == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        pcStack_34 = acStack_28;
        acStack_28[0] = '\0';
        uStack_30 = 0;
        uStack_2c = 0x20;
        pcStack_34 = _malloc(0x20);
        _strncpy(pcStack_34,"ui/minspec_frontend.dds",0x17);
        uStack_30 = 0x17;
        pcStack_34[0x17] = '\0';
        pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x1e);
        unaff_EBP = 1;
        piVar5 = FUN_0069d820(pvVar10,&pcStack_34,0,0,0x3f800000,0x3f800000);
      }
      pvStack_c = (void *)0x1a;
      if (((unaff_EBP & 1) != 0) && (0x14 < uStack_2c)) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_34);
      }
      pcStack_34 = acStack_28;
      acStack_28[0] = '\0';
      uStack_30 = 0;
      uStack_2c = 0x14;
      _strncpy(pcStack_34,"filmstrips_win",0xe);
      uStack_30 = 0xe;
      pcStack_34[0xe] = '\0';
      pvStack_c._0_1_ = 0x20;
      FUN_0087ecc0(*(void **)(DAT_0104dae4[0xd6] + 0x178),piVar5,&pcStack_34,1,0,(undefined1 *)0x0);
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x1a);
      if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_34);
      }
      *(undefined1 *)(piVar5 + 0xd7) = 1;
    }
    else {
      puVar4 = operator_new(0x350);
      pvStack_c._0_1_ = 0x21;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = WMoviePlayer_Constructor(puVar4);
      }
      pvStack_c._0_1_ = 0x1a;
      (**(code **)(*piVar5 + 4))();
      param_1[0x1b8] = puVar4;
      (**(code **)*piVar5)();
      FUN_006b9390((void *)param_1[0x1b8],L"data/intro/frontend_intro.wmv");
      FUN_006b93d0((void *)param_1[0x1b8],FUN_006905d0);
      pcStack_34 = acStack_28;
      acStack_28[0] = '\0';
      uStack_30 = 0;
      uStack_2c = 0x14;
      _strncpy(pcStack_34,"filmstrips_win",0xe);
      uStack_30 = 0xe;
      pcStack_34[0xe] = '\0';
      pvStack_c._0_1_ = 0x22;
      FUN_0087ecc0(*(void **)(DAT_0104dae4[0xd6] + 0x178),(int *)param_1[0x1b8],&pcStack_34,1,0,
                   (undefined1 *)0x0);
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x1a);
      if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_34);
      }
    }
    FUN_00881ac0((void *)DAT_0104dae4[0xd6],"textmenu",(char *)&lpOperation_00d31dc8);
    FUN_00881c00((void *)DAT_0104dae4[0xd6],"sandbox",0);
    iVar2 = FUN_009b4250();
    if (iVar2 == 9) {
      iVar2 = FUN_008819d0((void *)DAT_0104dae4[0xd6],"logopop");
      if (iVar2 != 0) {
        FUN_00881b80((void *)DAT_0104dae4[0xd6],"logopop","german");
      }
      iVar2 = FUN_008819d0((void *)DAT_0104dae4[0xd6],"buttonlogo");
      if (iVar2 != 0) {
        FUN_00881b80((void *)DAT_0104dae4[0xd6],"buttonlogo","german");
      }
    }
    FUN_00690180();
    uVar6 = extraout_ECX_00;
    uVar7 = extraout_EDX_00;
  }
  if (local_4 == 0) {
    *(undefined1 *)(param_1 + 0x183) = 0;
    if (DAT_0104dae0 == '\0') {
      FUN_009abb50(0);
      uVar6 = extraout_ECX_03;
      uVar7 = extraout_EDX_03;
    }
    else {
      FUN_00690e40(param_1,1);
      uVar6 = extraout_ECX_02;
      uVar7 = extraout_EDX_02;
    }
  }
  else if (local_4 == 1) {
    *(undefined1 *)(param_1 + 0x183) = 1;
    FUN_004237f0((int)DAT_00f87b04);
    FUN_00424130(DAT_00f87b04,2,&DAT_0068f2a0,&DAT_0068f2b0);
    if (DAT_0104dae4 != (undefined4 *)0x0) {
      FUN_008887b0(*(void **)(DAT_0104dae4[0xd6] + 0x170),1);
      if ((void *)param_1[0x1b8] != (void *)0x0) {
        FUN_006b9390((void *)param_1[0x1b8],L"data/intro/frontend_loop.wmv");
        FUN_006b93c0((void *)param_1[0x1b8],1);
        FUN_006b93d0((void *)param_1[0x1b8],0);
        if ((param_1[0x1b8] != 0) && (iVar2 = FUN_006b93e0(param_1[0x1b8]), iVar2 != 0)) {
          piVar5 = (int *)FUN_006b93e0(param_1[0x1b8]);
          iVar2 = *piVar5;
          iVar9 = 1;
          FUN_004f3b20();
          FUN_004f30a0(iVar9);
          (**(code **)(iVar2 + 0x34))();
        }
      }
    }
    FUN_00690e40(param_1,1);
    FUN_009a1560(1);
    uVar6 = extraout_ECX_01;
    uVar7 = extraout_EDX_01;
  }
  uVar8 = FUN_00990ae0(uVar6,uVar7);
  param_1[0x188] = (int)uVar8 + 3000;
  iVar2 = FUN_0045eed0();
  if (iVar2 == 0) {
    FUN_00461210();
  }
  ExceptionList = pvStack_14;
  return param_1;
}


//// FUNCTION FUN_00695da0 @ 00695da0 ////

undefined4 * __cdecl FUN_00695da0(int param_1)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  byte bVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7d0b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0104dafc == (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    puVar1 = operator_new(0x718);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00695460(puVar1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104dae8[1])();
    DAT_0104dafc = puVar1;
    (*(code *)*DAT_0104dae8)();
  }
  if (param_1 == 1) {
    if (*(char *)(DAT_0104dafc + 0x1b9) == '\0') {
      FUN_006905d0((void *)DAT_0104dafc[0x1b8]);
    }
    else if (DAT_0105be08 < 2) {
      bVar3 = 1;
      iVar2 = 4;
      puVar1 = DAT_0104dafc;
      this = (void *)FUN_004f3b20();
      FUN_004f98f0(this,iVar2,(int)puVar1,bVar3);
    }
  }
  FUN_0070db90();
  FUN_00637560();
  FUN_006c04f0();
  FUN_00699fc0();
  FUN_0081df10();
  ExceptionList = pvStack_c;
  return DAT_0104dafc;
}


//// FUNCTION FUN_00695f70 @ 00695f70 ////

void __fastcall FUN_00695f70(int *param_1)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7d28;
  local_c = ExceptionList;
  if ((DAT_0104dafc != 0) && (DAT_0104dae4 != 0)) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    ExceptionList = &local_c;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"gameplayopt_dialogue",0x14);
    local_28 = 0x14;
    local_2c[0x14] = '\0';
    local_4 = 0;
    FUN_0087ecc0(*(void **)(*(int *)(DAT_0104dae4 + 0x358) + 0x178),param_1,&local_2c,1,0,
                 (undefined1 *)0x0);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    (**(code **)(*DAT_0104db18 + 0x50))(1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00696050 @ 00696050 ////

void __fastcall FUN_00696050(int *param_1)

{
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7d48;
  pvStack_c = ExceptionList;
  if ((DAT_0104dcf0 != 0) && (DAT_0104dcd8 != 0)) {
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x20;
    ExceptionList = &pvStack_c;
    pcStack_2c = _malloc(0x20);
    _strncpy(pcStack_2c,"gameplayopt_dialogue",0x14);
    uStack_28 = 0x14;
    pcStack_2c[0x14] = '\0';
    uStack_4 = 0;
    FUN_0087ecc0(*(void **)(*(int *)(DAT_0104dcd8 + 0x358) + 0x178),param_1,&pcStack_2c,1,0,
                 (undefined1 *)0x0);
    uStack_4 = 0xffffffff;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_2c);
    }
    (**(code **)(*DAT_0104db18 + 0x50))(1);
    *(undefined1 *)(DAT_0104db18 + 0x12f) = 1;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00696072 @ 00696072 ////

void __thiscall FUN_00696072(void *this)

{
  int unaff_EBX;
  bool in_ZF;
  char *pcStack00000004;
  uint uStack0000000c;
  char cStack00000010;
  void *in_stack_00000024;
  
  if ((!in_ZF) && (DAT_0104dcd8 != unaff_EBX)) {
    pcStack00000004 = &stack0x00000010;
    uStack0000000c = 0x20;
    cStack00000010 = (char)unaff_EBX;
    pcStack00000004 = _malloc(0x20);
    _strncpy(pcStack00000004,"gameplayopt_dialogue",0x14);
    pcStack00000004[0x14] = (char)unaff_EBX;
    FUN_0087ecc0(*(void **)(*(int *)(DAT_0104dcd8 + 0x358) + 0x178),this,&stack0x00000004,1,
                 unaff_EBX,(undefined1 *)unaff_EBX);
    if (0x14 < uStack0000000c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack00000004);
    }
    (**(code **)(*DAT_0104db18 + 0x50))(1);
    *(undefined1 *)(DAT_0104db18 + 0x12f) = 1;
  }
  ExceptionList = in_stack_00000024;
  return;
}


//// FUNCTION WGameplayOptions_Tick @ 00696140 ////

void __fastcall WGameplayOptions_Tick(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7d70;
  local_c = ExceptionList;
  iVar4 = DAT_0104dae4;
  if (((DAT_0104dafc != 0) || (iVar4 = DAT_0104dcd8, ExceptionList = &local_c, DAT_0104dcf0 != 0))
     && (ExceptionList = &local_c, iVar4 != 0)) {
    puVar5 = local_34;
    local_34[0] = 0;
    uVar6 = 0;
    uVar7 = 0x14;
    ExceptionList = &local_c;
    FUN_004015d0(&stack0xffffffc0,(char *)&lpOperation_00d31dc8,4);
    local_4 = 0xffffffff;
    pvVar1 = (void *)FUN_008819d0(*(void **)(iVar4 + 0x358),"gameplay");
    iVar2 = FUN_0088a2b0(pvVar1,puVar5,uVar6,uVar7);
    puVar5 = local_34;
    local_34[0] = 0;
    uVar6 = 0;
    uVar7 = 0x14;
    FUN_004015d0(&stack0xffffffc0,"close",5);
    local_4 = 0xffffffff;
    pvVar1 = (void *)FUN_008819d0(*(void **)(iVar4 + 0x358),"gameplay");
    iVar3 = FUN_0088a2b0(pvVar1,puVar5,uVar6,uVar7);
    uStack_28 = 0x696230;
    iVar4 = FUN_008819d0(*(void **)(iVar4 + 0x358),"gameplay");
    if ((*(int *)(iVar4 + 0x260) < iVar2) || (iVar3 <= *(int *)(iVar4 + 0x260))) {
      *(undefined1 *)((int)param_1 + 0x4bd) = 0;
      uVar6 = 0xffffffff;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x4bd) = 1;
      uVar6 = 0;
    }
    uStack_28 = 0x696265;
    FUN_0073e8d0((void *)param_1[0xe2],uVar6);
  }
  WWindow_Tick(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006972a0 @ 006972a0 ////

void __fastcall FUN_006972a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  float10 fVar6;
  void *_Memory;
  wchar_t *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  wchar_t local_a4 [4];
  wchar_t awStack_9c [4];
  wchar_t awStack_94 [2];
  undefined4 *local_90;
  wchar_t local_8c [48];
  void *pvStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7e79;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_90 = operator_new(0x3fc);
  local_4 = 0;
  if (local_90 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00833290(local_90);
  }
  local_b0 = local_a4;
  local_a4[0] = L'\0';
  local_ac = 0;
  local_a8 = 10;
  uVar3 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&local_b0,L"<s1><table><tr><td align=center width=",uVar3);
  local_4 = 1;
  sVar4 = _swprintf(local_8c,0xd18f84,SUB84((double)*(float *)(param_1 + 0x4b4),0));
  FUN_0040cae0(&local_b0,local_8c,sVar4);
  sVar4 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_b0,L">",sVar4);
  FUN_0040cae0(&local_b0,*(wchar_t **)(param_1 + 0x434),*(size_t *)(param_1 + 0x438));
  sVar4 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(&local_b0,L"</td></tr></table></s1>",sVar4);
  (**(code **)(*piVar2 + 0x54))();
  (**(code **)(*piVar2 + 0x84))();
  fVar6 = (float10)(**(code **)(*piVar2 + 0x14))();
  *(float *)(param_1 + 0x4b8) = (float)fVar6;
  uVar3 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&stack0xffffff48,L"<s1><table><tr><td align=center width=",uVar3);
  sVar4 = _swprintf(awStack_94,0xd18f84,SUB84((double)*(float *)(param_1 + 0x4b4),0));
  FUN_0040cae0(&stack0xffffff48,awStack_94,sVar4);
  sVar4 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&stack0xffffff48,L">",sVar4);
  FUN_0040cae0(&stack0xffffff48,*(wchar_t **)(param_1 + 0x454),*(size_t *)(param_1 + 0x458));
  sVar4 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(&stack0xffffff48,L"</td></tr></table></s1>",sVar4);
  (**(code **)(*piVar2 + 0x54))();
  uVar3 = 0;
  (**(code **)(*piVar2 + 0x84))();
  fVar6 = (float10)(**(code **)(*piVar2 + 0x14))();
  if ((float10)*(float *)(param_1 + 0x4b8) < fVar6) {
    fVar6 = (float10)(**(code **)(*piVar2 + 0x14))();
    *(float *)(param_1 + 0x4b8) = (float)fVar6;
  }
  uVar5 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&stack0xffffff40,L"<s1><table><tr><td align=center width=",uVar5);
  sVar4 = _swprintf(awStack_9c,0xd18f84,SUB84((double)*(float *)(param_1 + 0x4b4),0));
  FUN_0040cae0(&stack0xffffff40,awStack_9c,sVar4);
  sVar4 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&stack0xffffff40,L">",sVar4);
  FUN_0040cae0(&stack0xffffff40,*(wchar_t **)(param_1 + 0x474),*(size_t *)(param_1 + 0x478));
  sVar4 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(&stack0xffffff40,L"</td></tr></table></s1>",sVar4);
  (**(code **)(*piVar2 + 0x54))();
  _Memory = (void *)0x0;
  (**(code **)(*piVar2 + 0x84))();
  fVar6 = (float10)(**(code **)(*piVar2 + 0x14))();
  if ((float10)*(float *)(param_1 + 0x4b8) < fVar6) {
    fVar6 = (float10)(**(code **)(*piVar2 + 0x14))();
    *(float *)(param_1 + 0x4b8) = (float)fVar6;
  }
  uVar5 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&stack0xffffff38,L"<s1><table><tr><td align=center width=",uVar5);
  sVar4 = _swprintf(local_a4,0xd18f84,SUB84((double)*(float *)(param_1 + 0x4b4),0));
  FUN_0040cae0(&stack0xffffff38,local_a4,sVar4);
  sVar4 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&stack0xffffff38,L">",sVar4);
  FUN_0040cae0(&stack0xffffff38,*(wchar_t **)(param_1 + 0x494),*(size_t *)(param_1 + 0x498));
  sVar4 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(&stack0xffffff38,L"</td></tr></table></s1>",sVar4);
  (**(code **)(*piVar2 + 0x54))();
  (**(code **)(*piVar2 + 0x84))(0);
  fVar6 = (float10)(**(code **)(*piVar2 + 0x14))();
  if ((float10)*(float *)(param_1 + 0x4b8) < fVar6) {
    fVar6 = (float10)(**(code **)(*piVar2 + 0x14))();
    *(float *)(param_1 + 0x4b8) = (float)fVar6;
  }
  piVar1 = piVar2 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar2)(1);
  }
  if (10 < uVar3) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_2c;
  return;
}


//// FUNCTION FUN_00697680 @ 00697680 ////

void __fastcall FUN_00697680(int param_1)

{
  uint uVar1;
  size_t sVar2;
  float10 fVar3;
  void *_Memory;
  wchar_t *pwVar4;
  undefined2 *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_a4 [2];
  float fStack_a0;
  wchar_t local_8c [44];
  void *pvStack_34;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7e9b;
  pvStack_c = ExceptionList;
  local_b0 = local_a4;
  local_a4[0] = 0;
  local_ac = 0;
  local_a8 = 10;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&local_b0,L"<s1><table><tr><td align=center width=",uVar1);
  local_4 = 0;
  sVar2 = _swprintf(local_8c,0xd18f84,SUB84((double)*(float *)(param_1 + 0x4b4),0));
  FUN_0040cae0(&local_b0,local_8c,sVar2);
  sVar2 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_b0,L">",sVar2);
  switch(DAT_00e56f38) {
  case 0:
    sVar2 = *(size_t *)(param_1 + 0x438);
    pwVar4 = *(wchar_t **)(param_1 + 0x434);
    break;
  case 1:
    sVar2 = *(size_t *)(param_1 + 0x458);
    pwVar4 = *(wchar_t **)(param_1 + 0x454);
    break;
  case 2:
    sVar2 = *(size_t *)(param_1 + 0x478);
    pwVar4 = *(wchar_t **)(param_1 + 0x474);
    break;
  case 3:
    sVar2 = *(size_t *)(param_1 + 0x498);
    pwVar4 = *(wchar_t **)(param_1 + 0x494);
    break;
  default:
    sVar2 = FUN_00ace02d(L"Houstoun we have a problem!");
    pwVar4 = L"Houstoun we have a problem!";
  }
  FUN_0040cae0(&local_b0,pwVar4,sVar2);
  if (DAT_00e56f38 == 0) {
    (**(code **)(**(int **)(param_1 + 0x370) + 0xc0))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x370) + 0xc0))();
  }
  if (DAT_00e56f38 == 3) {
    (**(code **)(**(int **)(param_1 + 0x358) + 0xc0))(0);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x358) + 0xc0))(1);
  }
  sVar2 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(&stack0xffffff48,L"</td></tr></table></s1>",sVar2);
  (**(code **)(**(int **)(param_1 + 1000) + 0x54))(&stack0xffffff48);
  (**(code **)(**(int **)(param_1 + 1000) + 0x84))(0);
  fStack_a0 = *(float *)(*(int *)(param_1 + 0x358) + 0xc0) -
              *(float *)(*(int *)(param_1 + 0x370) + 0x108);
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 1000) + 0x10))();
  uVar1 = 2;
  (**(code **)(**(int **)(param_1 + 1000) + 0x5c))
            (2,*(undefined4 *)(param_1 + 0x370),
             (float)-(((float10)fStack_a0 - fVar3) * (float10)0.5));
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 1000) + 0x14))();
  _Memory = *(void **)(param_1 + 0x3d0);
  (**(code **)(**(int **)(param_1 + 1000) + 100))
            (2,_Memory,(float)-(((float10)*(float *)(param_1 + 0x4b8) - fVar3) * (float10)0.5));
  if (uVar1 < 0xb) {
    ExceptionList = pvStack_34;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_006978e0 @ 006978e0 ////

void __fastcall FUN_006978e0(int param_1)

{
  uint uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  char *_Dest;
  void *unaff_ESI;
  float10 fVar4;
  wchar_t *pwVar5;
  float fVar6;
  undefined1 *puStack_f0;
  char *local_ec;
  uint local_e8;
  undefined4 local_e4;
  char local_e0 [8];
  undefined1 auStack_d8 [12];
  undefined2 *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined2 local_c0 [4];
  void *apvStack_b8 [2];
  undefined1 *puStack_b0;
  undefined4 local_ac;
  uint uStack_a8;
  wchar_t local_8c [42];
  void *pvStack_38;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc7ee7;
  pvStack_c = ExceptionList;
  local_cc = local_c0;
  local_c0[0] = 0;
  local_c8 = 0;
  local_c4 = 10;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&local_cc,L"<s1><table><tr><td align=center width=",uVar1);
  local_4 = 0;
  sVar2 = _swprintf(local_8c,0xd18f7c,(wchar_t *)0xc8);
  FUN_0040cae0(&local_cc,local_8c,sVar2);
  sVar2 = FUN_00ace02d(L"><translate>");
  FUN_0040cae0(&local_cc,L"><translate>",sVar2);
  local_ec = local_e0;
  local_e0[0] = '\0';
  local_e8 = 0;
  local_e4 = 0x20;
  local_ec = _malloc(0x20);
  _strncpy(local_ec,"GAMEPLAYOPTIONS_SAVEUP",0x16);
  local_e8 = 0x16;
  local_ec[0x16] = '\0';
  local_4._0_1_ = 1;
  puVar3 = FUN_009b5030(&local_ac,&local_ec);
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x90))(puVar3);
  if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_b0);
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if (0x14 < local_e8) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_f0);
  }
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0xc0))(1);
  switch(*(undefined4 *)(param_1 + 0x4c0)) {
  case 0:
    sVar2 = FUN_00ace02d(L"GAMEPLAYOPTIONS_5MIN");
    FUN_0040cae0(auStack_d8,L"GAMEPLAYOPTIONS_5MIN",sVar2);
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0xc0))(0);
    goto LAB_00697bd2;
  case 1:
    sVar2 = FUN_00ace02d(L"GAMEPLAYOPTIONS_15MIN");
    pwVar5 = L"GAMEPLAYOPTIONS_15MIN";
    break;
  case 2:
    sVar2 = FUN_00ace02d(L"GAMEPLAYOPTIONS_30MIN");
    pwVar5 = L"GAMEPLAYOPTIONS_30MIN";
    break;
  case 3:
    sVar2 = FUN_00ace02d(L"GAMEPLAYOPTIONS_45MIN");
    pwVar5 = L"GAMEPLAYOPTIONS_45MIN";
    break;
  case 4:
    sVar2 = FUN_00ace02d(L"GAMEPLAYOPTIONS_60MIN");
    FUN_0040cae0(auStack_d8,L"GAMEPLAYOPTIONS_60MIN",sVar2);
    local_ec = (char *)((uint)local_ec & 0xffffff00);
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"GAMEPLAYOPTIONS_SAVEOFF",0x17);
    _Dest[0x17] = '\0';
    uStack_10 = 3;
    puVar3 = FUN_009b5030(apvStack_b8,(undefined4 *)&stack0xffffff08);
    uStack_10 = 4;
    (**(code **)(**(int **)(param_1 + 0x3a0) + 0x90))(puVar3);
    if (&lpType_0000000a < puStack_b0) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_b8[0]);
    }
    uStack_10 = 0;
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  case 5:
    sVar2 = FUN_00ace02d(L"GAMEPLAYOPTIONS_AUTOSAVEOFF");
    FUN_0040cae0(auStack_d8,L"GAMEPLAYOPTIONS_AUTOSAVEOFF",sVar2);
    (**(code **)(**(int **)(param_1 + 0x3a0) + 0xc0))(0);
    goto LAB_00697bd2;
  default:
    sVar2 = FUN_00ace02d(L"Houstoun we have a problem with the save frequency!!");
    pwVar5 = L"Houstoun we have a problem with the save frequency!!";
  }
  FUN_0040cae0(auStack_d8,pwVar5,sVar2);
LAB_00697bd2:
  sVar2 = FUN_00ace02d(L"</translate></td></tr></table></s1>");
  FUN_0040cae0(auStack_d8,L"</translate></td></tr></table></s1>",sVar2);
  (**(code **)(**(int **)(param_1 + 0x418) + 0x54))(auStack_d8);
  (**(code **)(**(int **)(param_1 + 0x418) + 0x84))(0);
  fVar6 = *(float *)(*(int *)(param_1 + 0x3a0) + 0xc0) -
          *(float *)(*(int *)(param_1 + 0x3b8) + 0x108);
  fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x418) + 0x10))();
  (**(code **)(**(int **)(param_1 + 0x418) + 0x5c))
            (2,*(undefined4 *)(param_1 + 0x3b8),(float)-(((float10)fVar6 - fVar4) * (float10)0.5));
  fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x418) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x418) + 100))
            (1,*(undefined4 *)(param_1 + 0x3b8),(float)(((float10)64.0 - fVar4) * (float10)0.5));
  if (&lpType_0000000a < puStack_f0) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  ExceptionList = pvStack_38;
  return;
}


//// FUNCTION FUN_00697cd0 @ 00697cd0 ////

void __thiscall FUN_00697cd0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d38f90;
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


//// FUNCTION FUN_00697d20 @ 00697d20 ////

void __fastcall FUN_00697d20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d38f90;
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


//// FUNCTION FUN_00697d70 @ 00697d70 ////

void __fastcall FUN_00697d70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d38fbc;
  param_1[0x14] = &PTR_LAB_00d38fa0;
  if (10 < (uint)param_1[0x127]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x125]);
  }
  if (10 < (uint)param_1[0x11f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11d]);
  }
  if (10 < (uint)param_1[0x117]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x115]);
  }
  if (10 < (uint)param_1[0x10f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10d]);
  }
  param_1[0x107] = &PTR_FUN_00d322b0;
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
  param_1[0xef] = &PTR_FUN_00d195f8;
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
  param_1[0xe9] = &PTR_FUN_00d172a0;
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


//// FUNCTION FUN_00698250 @ 00698250 ////

void __fastcall FUN_00698250(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  void *pvVar6;
  undefined2 **_Dest;
  size_t sVar7;
  bool bVar8;
  float10 fVar9;
  wchar_t *pwVar10;
  float fVar11;
  char acStack_1f8 [4];
  undefined1 *puStack_1f4;
  undefined4 uStack_1f0;
  char *pcStack_1ec;
  undefined4 uStack_1e8;
  int *_Memory;
  undefined4 *puStack_1a8;
  char *_Dest_00;
  uint *puStack_17c;
  float fStack_178;
  int *piStack_174;
  uint uStack_170;
  float fStack_16c;
  int *piStack_168;
  undefined4 uStack_164;
  uint uStack_154;
  undefined4 *puStack_140;
  char *pcStack_13c;
  undefined4 uStack_138;
  uint uVar12;
  void *pvStack_108;
  void *apvStack_fc [2];
  undefined2 *puStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined2 auStack_e8 [10];
  undefined1 uStack_d4;
  undefined4 uStack_94;
  undefined4 uStack_54;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc801d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006972a0(param_1);
  uStack_138 = 0x698286;
  puVar3 = operator_new(0x344);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_007432f0(puVar3);
  }
  uStack_138 = *(undefined4 *)(param_1 + 0x430);
  uVar12 = 0x42600000;
  pcStack_13c = (char *)0x1;
  local_4 = 0xffffffff;
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*piVar4 + 0x5c))();
  iVar1 = *piVar4;
  (**(code **)(**(int **)(param_1 + 0x430) + 0x10))();
  (**(code **)(iVar1 + 0x74))();
  uStack_154 = 1;
  (**(code **)(**(int **)(param_1 + 0x430) + 0xc))();
  puVar3 = operator_new(0x3fc);
  uStack_2c = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puStack_140 = (undefined4 *)0x0;
  }
  else {
    puStack_140 = FUN_00833290(puVar3);
  }
  uStack_2c = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x3bc) + 4))();
  *(undefined4 **)(param_1 + 0x3d0) = puStack_140;
  (*(code *)**(undefined4 **)(param_1 + 0x3bc))();
  puStack_f4 = auStack_e8;
  auStack_e8[0] = 0;
  uStack_f0 = 0;
  uStack_ec = 10;
  uVar5 = FUN_00ace02d(
                      L"<t2><table><tr><td align=center width=364><translate>GAMEPLAYOPTIONS_HELPLABEL</translate></td></tr></table></t2>"
                      );
  uStack_164 = 0x698399;
  FUN_004036d0(&puStack_f4,
               L"<t2><table><tr><td align=center width=364><translate>GAMEPLAYOPTIONS_HELPLABEL</translate></td></tr></table></t2>"
               ,uVar5);
  _Dest = &puStack_f4;
  uStack_2c = 2;
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x54))();
  uStack_164 = 0x6983c3;
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x84))();
  uStack_164 = 0;
  fStack_16c = 1.4013e-45;
  uStack_170 = 0x6983d2;
  piStack_168 = piVar4;
  (**(code **)(**(int **)(param_1 + 0x3d0) + 100))();
  uStack_170 = 0x41800000;
  fStack_178 = 1.4013e-45;
  puStack_17c = (uint *)0x6983e5;
  piStack_174 = piVar4;
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x5c))();
  puStack_17c = (uint *)0x1;
  (**(code **)(*piVar4 + 0xc))();
  fStack_16c = *(float *)(param_1 + 0x4b8) * 0.5 - 32.0;
  pvVar6 = operator_new(0x420);
  if (pvVar6 == (void *)0x0) {
    piStack_168 = (undefined4 *)0x0;
  }
  else {
    uStack_154 = 0x20;
    piStack_168 = pvVar6;
    _Dest = _malloc(0x20);
    _strncpy((char *)_Dest,"GAMEPLAYOPTIONS_HELPDOWN",0x18);
    *(char *)(_Dest + 6) = '\0';
    pcStack_13c = &stack0xfffffed0;
    uStack_138 = 0;
    uVar12 = 0x14;
    _strncpy(pcStack_13c,"button_left.",0xc);
    uStack_138 = 0xc;
    pcStack_13c[0xc] = '\0';
    uStack_54 = 5;
    uStack_170 = 3;
    puVar3 = FUN_009b5030(apvStack_fc,(undefined4 *)&stack0xfffffea4);
    uStack_54 = 6;
    uStack_170 = 7;
    piStack_168 = FUN_0069fb10(pvVar6,(int *)&pcStack_13c,puVar3,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  uStack_54 = 9;
  (**(code **)(*(int *)(param_1 + 0x35c) + 4))();
  *(int **)(param_1 + 0x370) = piStack_168;
  (*(code *)**(undefined4 **)(param_1 + 0x35c))();
  if (((uStack_170 & 4) != 0) &&
     (uStack_170 = uStack_170 & 0xfffffffb, &lpType_0000000a < puStack_f4)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_fc[0]);
  }
  if (((uStack_170 & 2) != 0) && (uStack_170 = uStack_170 & 0xfffffffd, 0x14 < uVar12)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_13c);
  }
  uStack_54 = 2;
  if (((uStack_170 & 1) != 0) && (uStack_170 = uStack_170 & 0xfffffffe, 0x14 < uStack_154)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  (**(code **)(**(int **)(param_1 + 0x370) + 0x5c))();
  uVar5 = *(uint *)(param_1 + 0x3d0);
  fStack_178 = -fStack_178;
  (**(code **)(**(int **)(param_1 + 0x370) + 100))();
  _Dest_00 = "GAMEPLAYOPTIONS_HELPDOWN";
  (**(code **)(**(int **)(param_1 + 0x370) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x370) + 0x18))();
  FUN_0073e8b0(*(void **)(param_1 + 0x370),1);
  uVar2 = *(uint *)(param_1 + 0x370);
  (**(code **)(*piVar4 + 0xc))();
  pvVar6 = operator_new(0x420);
  bVar8 = pvVar6 == (void *)0x0;
  if (bVar8) {
    puStack_1a8 = (undefined4 *)0x0;
  }
  else {
    puStack_17c = &uStack_170;
    uStack_170 = uStack_170 & 0xffffff00;
    fStack_178 = 0.0;
    piStack_174 = (int *)0x20;
    puStack_17c = _malloc(0x20);
    _strncpy((char *)puStack_17c,"GAMEPLAYOPTIONS_HELPUP",0x16);
    fStack_178 = 3.08286e-44;
    *(char *)((int)puStack_17c + 0x16) = '\0';
    _Dest_00 = &stack0xfffffe70;
    uVar5 = 0x14;
    _strncpy(_Dest_00,"button_right.",0xd);
    _Dest_00[0xd] = '\0';
    uStack_94 = 0xc;
    uStack_1e8 = 0x698705;
    puVar3 = FUN_009b5030(&pcStack_13c,&puStack_17c);
    uStack_94 = 0xd;
    puStack_1a8 = FUN_0069fb10(pvVar6,(int *)&stack0xfffffe64,puVar3,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  uStack_94 = 0x10;
  (**(code **)(*(int *)(param_1 + 0x344) + 4))();
  *(undefined4 **)(param_1 + 0x358) = puStack_1a8;
  (*(code *)**(undefined4 **)(param_1 + 0x344))();
  if ((!bVar8) && (10 < uVar12)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_13c);
  }
  if ((!bVar8) && (0x14 < uVar5)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_00);
  }
  uStack_94 = 2;
  if ((!bVar8) && (&DAT_00000014 < piStack_174)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_17c);
  }
  _Memory = piVar4;
  (**(code **)(**(int **)(param_1 + 0x358) + 0x60))();
  (**(code **)(**(int **)(param_1 + 0x358) + 100))();
  uStack_1e8 = 0;
  pcStack_1ec = (char *)0x69883e;
  (**(code **)(**(int **)(param_1 + 0x358) + 0x18))();
  pcStack_1ec = "GAMEPLAYOPTIONS_HELPUP";
  uStack_1f0 = 0;
  puStack_1f4 = &LAB_005f37f0;
  acStack_1f8[0] = '\x05';
  acStack_1f8[1] = '\0';
  acStack_1f8[2] = '\0';
  acStack_1f8[3] = '\0';
  (**(code **)(**(int **)(param_1 + 0x358) + 0x18))();
  FUN_0073e8b0(*(void **)(param_1 + 0x358),0);
  (**(code **)(*piVar4 + 0xc))(*(undefined4 *)(param_1 + 0x358),1);
  uVar12 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&stack0xfffffe64,L"<s1><table><tr><td align=center width=",uVar12);
  sVar7 = _swprintf((wchar_t *)&stack0xfffffea4,0xd18f84,
                    SUB84((double)*(float *)(param_1 + 0x4b4),0));
  FUN_0040cae0(&stack0xfffffe64,(wchar_t *)&stack0xfffffea4,sVar7);
  sVar7 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&stack0xfffffe64,L">",sVar7);
  switch(DAT_00e56f38) {
  case 0:
    FUN_0040cae0(&stack0xfffffe64,*(wchar_t **)(param_1 + 0x434),*(size_t *)(param_1 + 0x438));
    (**(code **)(**(int **)(param_1 + 0x370) + 0xc0))();
    goto LAB_0069897a;
  case 1:
    sVar7 = *(size_t *)(param_1 + 0x458);
    pwVar10 = *(wchar_t **)(param_1 + 0x454);
    break;
  case 2:
    sVar7 = *(size_t *)(param_1 + 0x478);
    pwVar10 = *(wchar_t **)(param_1 + 0x474);
    break;
  case 3:
    FUN_0040cae0(&stack0xfffffe64,*(wchar_t **)(param_1 + 0x494),*(size_t *)(param_1 + 0x498));
    (**(code **)(**(int **)(param_1 + 0x358) + 0xc0))();
    goto LAB_0069897a;
  default:
    sVar7 = FUN_00ace02d(L"Houstoun we have a problem!");
    pwVar10 = L"Houstoun we have a problem!";
  }
  FUN_0040cae0(&stack0xfffffe64,pwVar10,sVar7);
LAB_0069897a:
  sVar7 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(&stack0xfffffe64,L"</td></tr></table></s1>",sVar7);
  puVar3 = operator_new(0x3fc);
  uStack_d4 = 0x11;
  if (puVar3 == (undefined4 *)0x0) {
    pcStack_1ec = (char *)0x0;
  }
  else {
    pcStack_1ec = (char *)FUN_00833290(puVar3);
  }
  uStack_d4 = 2;
  (**(code **)(*(int *)(param_1 + 0x3d4) + 4))();
  *(char **)(param_1 + 1000) = pcStack_1ec;
  (*(code *)**(undefined4 **)(param_1 + 0x3d4))();
  (**(code **)(**(int **)(param_1 + 1000) + 0x54))();
  (**(code **)(**(int **)(param_1 + 1000) + 0x84))(0);
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 1000) + 0x14))();
  (**(code **)(**(int **)(param_1 + 1000) + 100))
            (2,*(undefined4 *)(param_1 + 0x3d0),
             (float)-(((float10)*(float *)(param_1 + 0x4b8) - fVar9) * (float10)0.5));
  acStack_1f8[0] = -1;
  acStack_1f8[1] = -1;
  acStack_1f8[2] = -1;
  acStack_1f8[3] = -1;
  FUN_00830550(*(void **)(param_1 + 1000),9,acStack_1f8);
  fVar11 = *(float *)(*(int *)(param_1 + 0x358) + 0xc0) -
           *(float *)(*(int *)(param_1 + 0x370) + 0x108);
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 1000) + 0x10))();
  (**(code **)(**(int **)(param_1 + 1000) + 0x5c))
            (2,*(undefined4 *)(param_1 + 0x370),(float)-(((float10)fVar11 - fVar9) * (float10)0.5));
  (**(code **)(*piVar4 + 0xc))(*(undefined4 *)(param_1 + 1000),1);
  (**(code **)(*piVar4 + 0x8c))(0x42000000);
  if (uVar2 < 0xb) {
    ExceptionList = pvStack_108;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00698b10 @ 00698b10 ////

void __fastcall FUN_00698b10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  int **this;
  uint uVar6;
  size_t sVar7;
  bool bVar8;
  float10 fVar9;
  wchar_t *pwVar10;
  float fVar11;
  undefined4 *puStack_188;
  undefined1 *_Memory;
  undefined4 *puStack_148;
  char *pcVar12;
  char *pcVar13;
  char *_Dest;
  void *pvStack_11c;
  uint uStack_118;
  uint uStack_114;
  int *piStack_110;
  uint uStack_10c;
  undefined4 *puStack_108;
  int *piStack_104;
  int **ppiStack_100;
  void *_Memory_00;
  undefined2 **ppuVar14;
  int *piStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint *puStack_e0;
  void *pvStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  void *apvStack_9c [2];
  undefined2 *puStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 auStack_88 [26];
  undefined4 uStack_54;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8164;
  pvStack_c = ExceptionList;
  uStack_d4 = 0x698b41;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x344);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007432f0(puVar2);
  }
  uStack_d4 = *(uint *)(param_1 + 0x430);
  uStack_d8 = 1;
  local_4 = 0xffffffff;
  pvStack_dc = (void *)0x698b80;
  (**(code **)(*piVar3 + 100))();
  puStack_e0 = *(uint **)(param_1 + 0x430);
  pvStack_dc = (void *)0x41200000;
  uStack_e4 = 1;
  uStack_e8 = 0x698b95;
  (**(code **)(*piVar3 + 0x5c))();
  iVar1 = *piVar3;
  uStack_e8 = 0x42c00000;
  fStack_ec = 9.692825e-39;
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x430) + 0x10))();
  fStack_ec = (float)(fVar9 - (float10)19.0);
  uStack_f0 = 0x698bb6;
  (**(code **)(iVar1 + 0x74))();
  uStack_f0 = 1;
  piStack_f4 = piVar3;
  (**(code **)(**(int **)(param_1 + 0x430) + 0xc))();
  puStack_e0 = operator_new(0x3fc);
  uStack_2c = 1;
  if (puStack_e0 == (uint *)0x0) {
    puStack_e0 = (uint *)0x0;
  }
  else {
    puStack_e0 = FUN_00833290(puStack_e0);
  }
  uStack_2c = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x3ec) + 4))();
  *(uint **)(param_1 + 0x400) = puStack_e0;
  (*(code *)**(undefined4 **)(param_1 + 0x3ec))();
  puStack_94 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0;
  uStack_8c = 10;
  uVar4 = FUN_00ace02d(
                      L"<t2><table><tr><td align=center width=364><translate>GAMEPLAYOPTIONS_SAVELABEL</translate></td></tr></table></t2>"
                      );
  ppiStack_100 = (int **)0x698c54;
  FUN_004036d0(&puStack_94,
               L"<t2><table><tr><td align=center width=364><translate>GAMEPLAYOPTIONS_SAVELABEL</translate></td></tr></table></t2>"
               ,uVar4);
  ppuVar14 = &puStack_94;
  uStack_2c = 2;
  (**(code **)(**(int **)(param_1 + 0x400) + 0x54))();
  _Memory_00 = (void *)0x0;
  ppiStack_100 = (int **)0x698c7e;
  (**(code **)(**(int **)(param_1 + 0x400) + 0x84))();
  ppiStack_100 = (int **)0x0;
  puStack_108 = (undefined4 *)0x1;
  uStack_10c = 0x698c8d;
  piStack_104 = piVar3;
  (**(code **)(**(int **)(param_1 + 0x400) + 100))();
  uStack_10c = 0x41800000;
  uStack_114 = 1;
  uStack_118 = 0x698ca0;
  piStack_110 = piVar3;
  (**(code **)(**(int **)(param_1 + 0x400) + 0x5c))();
  pvStack_11c = *(void **)(param_1 + 0x400);
  uStack_118 = 1;
  (**(code **)(*piVar3 + 0xc))();
  pvVar5 = operator_new(0x420);
  if (pvVar5 == (void *)0x0) {
    puStack_108 = (undefined4 *)0x0;
  }
  else {
    ppiStack_100 = &piStack_f4;
    piStack_f4 = (int *)((uint)piStack_f4 & 0xffffff00);
    ppuVar14 = (undefined2 **)0x20;
    puStack_108 = pvVar5;
    ppiStack_100 = _malloc(0x20);
    _strncpy((char *)ppiStack_100,"GAMEPLAYOPTIONS_SAVEDOWN",0x18);
    _Memory_00 = (void *)0x18;
    *(char *)(ppiStack_100 + 6) = '\0';
    puStack_e0 = &uStack_d4;
    uStack_d4 = uStack_d4 & 0xffffff00;
    pvStack_dc = (void *)0x0;
    uStack_d8 = 0x14;
    _strncpy((char *)puStack_e0,"button_left.",0xc);
    pvStack_dc = (void *)0xc;
    *(char *)(puStack_e0 + 3) = '\0';
    uStack_54 = 5;
    uStack_10c = 3;
    puVar2 = FUN_009b5030(apvStack_9c,&ppiStack_100);
    uStack_54 = 6;
    uStack_10c = 7;
    puStack_108 = FUN_0069fb10(pvVar5,(int *)&puStack_e0,puVar2,0x42800000,0x42800000,0,0,0x3f800000
                               ,0x3f800000);
  }
  uStack_54 = 9;
  (**(code **)(*(int *)(param_1 + 0x3a4) + 4))();
  *(undefined4 **)(param_1 + 0x3b8) = puStack_108;
  (*(code *)**(undefined4 **)(param_1 + 0x3a4))();
  if (((uStack_10c & 4) != 0) &&
     (uStack_10c = uStack_10c & 0xfffffffb, &lpType_0000000a < puStack_94)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_9c[0]);
  }
  if (((uStack_10c & 2) != 0) && (uStack_10c = uStack_10c & 0xfffffffd, 0x14 < uStack_d8)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_e0);
  }
  uStack_54 = 2;
  if (((uStack_10c & 1) != 0) && (uStack_10c = uStack_10c & 0xfffffffe, &DAT_00000014 < ppuVar14)) {
                    /* WARNING: Subroutine does not return */
    _free(ppiStack_100);
  }
  _Dest = (char *)0x41800000;
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x5c))();
  (**(code **)(**(int **)(param_1 + 0x3b8) + 100))();
  pcVar13 = "GAMEPLAYOPTIONS_SAVEDOWN";
  pcVar12 = &LAB_00696b80;
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x18))();
  FUN_0073e8b0(*(void **)(param_1 + 0x3b8),1);
  uVar4 = 0;
  (**(code **)(*piVar3 + 0xc))();
  this = operator_new(0x420);
  bVar8 = this == (int **)0x0;
  ppiStack_100 = this;
  if (bVar8) {
    puStack_148 = (undefined4 *)0x0;
  }
  else {
    uStack_114 = uStack_114 & 0xffffff00;
    pvStack_11c = (void *)0x0;
    uStack_118 = 0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"GAMEPLAYOPTIONS_SAVEUP",0x16);
    pvStack_11c = (void *)0x16;
    _Dest[0x16] = '\0';
    pcVar12 = &stack0xfffffecc;
    pcVar13 = (char *)0x14;
    _strncpy(pcVar12,"button_right.",0xd);
    pcVar12[0xd] = '\0';
    puStack_94 = (undefined2 *)0xc;
    puVar2 = FUN_009b5030(&pvStack_dc,(undefined4 *)&stack0xfffffee0);
    puStack_94 = (undefined2 *)0xd;
    puStack_148 = FUN_0069fb10(this,(int *)&stack0xfffffec0,puVar2,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  puStack_94 = (undefined2 *)0x10;
  (**(code **)(*(int *)(param_1 + 0x38c) + 4))();
  *(undefined4 **)(param_1 + 0x3a0) = puStack_148;
  (*(code *)**(undefined4 **)(param_1 + 0x38c))();
  if ((!bVar8) && (10 < uStack_d4)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_dc);
  }
  if ((!bVar8) && ((char *)0x14 < pcVar13)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar12);
  }
  puStack_94 = (undefined2 *)0x2;
  if ((!bVar8) && (0x14 < uStack_118)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  _Memory = (undefined1 *)0x41800000;
  pvVar5 = (void *)0x2;
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x60))();
  (**(code **)(**(int **)(param_1 + 0x3a0) + 100))();
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x18))();
  FUN_0073e8b0(*(void **)(param_1 + 0x3a0),0);
  (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x3a0));
  uVar6 = FUN_00ace02d(L"<s1><table><tr><td align=center width=200><translate>");
  FUN_004036d0(&stack0xfffffec4,L"<s1><table><tr><td align=center width=200><translate>",uVar6);
  switch(*(undefined4 *)(param_1 + 0x4c0)) {
  case 0:
    sVar7 = FUN_00ace02d(L"GAMEPLAYOPTIONS_5MIN");
    FUN_0040cae0(&stack0xfffffec4,L"GAMEPLAYOPTIONS_5MIN",sVar7);
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0xc0))(0);
    goto LAB_0069936d;
  case 1:
    sVar7 = FUN_00ace02d(L"GAMEPLAYOPTIONS_15MIN");
    pwVar10 = L"GAMEPLAYOPTIONS_15MIN";
    break;
  case 2:
    sVar7 = FUN_00ace02d(L"GAMEPLAYOPTIONS_30MIN");
    pwVar10 = L"GAMEPLAYOPTIONS_30MIN";
    break;
  case 3:
    sVar7 = FUN_00ace02d(L"GAMEPLAYOPTIONS_45MIN");
    pwVar10 = L"GAMEPLAYOPTIONS_45MIN";
    break;
  case 4:
    sVar7 = FUN_00ace02d(L"GAMEPLAYOPTIONS_60MIN");
    FUN_0040cae0(&stack0xfffffec4,L"GAMEPLAYOPTIONS_60MIN",sVar7);
    uVar4 = 0x20;
    pcVar12 = _malloc(0x20);
    _strncpy(pcVar12,"GAMEPLAYOPTIONS_SAVEOFF",0x17);
    pcVar12[0x17] = '\0';
    uStack_d4._0_1_ = 0x11;
    puVar2 = FUN_009b5030(&pvStack_11c,(undefined4 *)&stack0xfffffe80);
    uStack_d4._0_1_ = 0x12;
    (**(code **)(**(int **)(param_1 + 0x3a0) + 0x90))(puVar2);
    if (10 < uStack_114) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_11c);
    }
    uStack_d4 = CONCAT31(uStack_d4._1_3_,2);
    if (0x14 < uVar4) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar12);
    }
    goto LAB_0069936d;
  case 5:
    sVar7 = FUN_00ace02d(L"GAMEPLAYOPTIONS_AUTOSAVEOFF");
    FUN_0040cae0(&stack0xfffffec4,L"GAMEPLAYOPTIONS_AUTOSAVEOFF",sVar7);
    (**(code **)(**(int **)(param_1 + 0x3a0) + 0xc0))(0);
    uVar4 = uVar4 & 0xffffff00;
    pcVar12 = _malloc(0x20);
    _strncpy(pcVar12,"GAMEPLAYOPTIONS_SAVEOFF",0x17);
    _Memory = (undefined1 *)0x17;
    pcVar12[0x17] = '\0';
    uStack_d8._0_1_ = 0x13;
    puVar2 = FUN_009b5030(&ppiStack_100,(undefined4 *)&stack0xfffffe9c);
    uStack_d8 = CONCAT31(uStack_d8._1_3_,0x14);
    (**(code **)(**(int **)(param_1 + 0x3a0) + 0x90))(puVar2);
    if (&lpType_0000000a < piStack_f4) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
    uStack_d4 = CONCAT31(uStack_d4._1_3_,2);
    if (0x14 < uVar4) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    goto LAB_0069936d;
  default:
    sVar7 = FUN_00ace02d(L"Houstoun we have a problem with the save frequency!!");
    pwVar10 = L"Houstoun we have a problem with the save frequency!!";
  }
  FUN_0040cae0(&stack0xfffffec4,pwVar10,sVar7);
LAB_0069936d:
  sVar7 = FUN_00ace02d(L"</translate></td></tr></table></s1>");
  FUN_0040cae0(&stack0xfffffec4,L"</translate></td></tr></table></s1>",sVar7);
  puVar2 = operator_new(0x3fc);
  uStack_d4._0_1_ = 0x15;
  if (puVar2 == (undefined4 *)0x0) {
    puStack_188 = (undefined4 *)0x0;
  }
  else {
    puStack_188 = FUN_00833290(puVar2);
  }
  uStack_d4 = CONCAT31(uStack_d4._1_3_,2);
  (**(code **)(*(int *)(param_1 + 0x404) + 4))();
  *(undefined4 **)(param_1 + 0x418) = puStack_188;
  (*(code *)**(undefined4 **)(param_1 + 0x404))();
  (**(code **)(**(int **)(param_1 + 0x418) + 0x54))(&stack0xfffffec4);
  (**(code **)(**(int **)(param_1 + 0x418) + 0x84))(0);
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x418) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x418) + 100))
            (1,*(undefined4 *)(param_1 + 0x3b8),(float)(((float10)64.0 - fVar9) * (float10)0.5));
  FUN_00830550(*(void **)(param_1 + 0x418),9,&stack0xfffffe68);
  fVar11 = *(float *)(*(int *)(param_1 + 0x3a0) + 0xc0) -
           *(float *)(*(int *)(param_1 + 0x3b8) + 0x108);
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x418) + 0x10))();
  (**(code **)(**(int **)(param_1 + 0x418) + 0x5c))
            (2,*(undefined4 *)(param_1 + 0x3b8),(float)-(((float10)fVar11 - fVar9) * (float10)0.5));
  (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x418),1);
  (**(code **)(*piVar3 + 0x8c))(0x42000000);
  if (_Memory <= &lpType_0000000a) {
    ExceptionList = puStack_108;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar5);
}


//// FUNCTION FUN_00699510 @ 00699510 ////

void FUN_00699510(void)

{
  if (DAT_0104db18 != 0) {
    DAT_00e56f38 = *(undefined4 *)(DAT_0104db18 + 0x4c8);
    *(undefined4 *)(DAT_0104db18 + 0x4c0) = *(undefined4 *)(DAT_0104db18 + 0x4c4);
    FUN_00697680(DAT_0104db18);
    FUN_006978e0(DAT_0104db18);
    return;
  }
  return;
}


//// FUNCTION FUN_00699550 @ 00699550 ////

/* WARNING: Removing unreachable block (ram,0x0069996c) */
/* WARNING: Removing unreachable block (ram,0x0069997b) */
/* WARNING: Removing unreachable block (ram,0x00699988) */
/* WARNING: Removing unreachable block (ram,0x00699a74) */
/* WARNING: Removing unreachable block (ram,0x00699a81) */
/* WARNING: Removing unreachable block (ram,0x00699a88) */
/* WARNING: Removing unreachable block (ram,0x00699a95) */
/* WARNING: Removing unreachable block (ram,0x00699b02) */
/* WARNING: Removing unreachable block (ram,0x00699b0f) */
/* WARNING: Removing unreachable block (ram,0x00699b16) */
/* WARNING: Removing unreachable block (ram,0x00699b23) */
/* WARNING: Removing unreachable block (ram,0x00699b90) */
/* WARNING: Removing unreachable block (ram,0x00699b9d) */
/* WARNING: Removing unreachable block (ram,0x00699ba4) */
/* WARNING: Removing unreachable block (ram,0x00699bb1) */
/* WARNING: Removing unreachable block (ram,0x00699c1e) */
/* WARNING: Removing unreachable block (ram,0x00699c2b) */
/* WARNING: Removing unreachable block (ram,0x00699c32) */
/* WARNING: Removing unreachable block (ram,0x00699c3f) */
/* WARNING: Removing unreachable block (ram,0x00699cb1) */
/* WARNING: Removing unreachable block (ram,0x00699cbe) */
/* WARNING: Removing unreachable block (ram,0x00699dcf) */
/* WARNING: Removing unreachable block (ram,0x00699cf1) */
/* WARNING: Removing unreachable block (ram,0x00699dd1) */
/* WARNING: Removing unreachable block (ram,0x00699df5) */
/* WARNING: Removing unreachable block (ram,0x00699e09) */
/* WARNING: Removing unreachable block (ram,0x00699e16) */
/* WARNING: Removing unreachable block (ram,0x00699e1d) */
/* WARNING: Removing unreachable block (ram,0x00699e31) */
/* WARNING: Removing unreachable block (ram,0x00699e3e) */
/* WARNING: Removing unreachable block (ram,0x00699e50) */
/* WARNING: Removing unreachable block (ram,0x00699e57) */
/* WARNING: Removing unreachable block (ram,0x00699e64) */

int * __fastcall FUN_00699550(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char *_Dest;
  undefined4 *puStack_7c;
  char *pcStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  char acStack_64 [20];
  void *apvStack_50 [2];
  uint uStack_48;
  undefined1 uStack_28;
  undefined3 uStack_27;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc82dd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = (int)&PTR_FUN_00d38fbc;
  param_1[0x14] = (int)&PTR_LAB_00d38fa0;
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
  param_1[0xe9] = (int)&PTR_FUN_00d172a0;
  param_1[0xee] = 0;
  param_1[0xf2] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = (int)(param_1 + 0xef);
  param_1[0xef] = (int)&PTR_FUN_00d195f8;
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
  piVar2 = param_1 + 0x107;
  param_1[0x10a] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = (int)piVar2;
  *piVar2 = (int)&PTR_FUN_00d322b0;
  param_1[0x10c] = 0;
  param_1[0x10d] = (int)(param_1 + 0x110);
  *(undefined2 *)(param_1 + 0x110) = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 10;
  param_1[0x115] = (int)(param_1 + 0x118);
  *(undefined2 *)(param_1 + 0x118) = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 10;
  param_1[0x11d] = (int)(param_1 + 0x120);
  *(undefined2 *)(param_1 + 0x120) = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 10;
  param_1[0x125] = (int)(param_1 + 0x128);
  *(undefined2 *)(param_1 + 0x128) = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 10;
  local_4._0_1_ = 0xe;
  local_4._1_3_ = 0;
  (*(code *)DAT_0104db04[1])();
  DAT_0104db18 = param_1;
  (*(code *)*DAT_0104db04)();
  *(undefined1 *)((int)param_1 + 0x4bd) = 0;
  *(undefined1 *)(param_1 + 0x12f) = 0;
  puVar1 = operator_new(0x3ac);
  local_4._0_1_ = 0xf;
  if (puVar1 == (undefined4 *)0x0) {
    puStack_7c = (undefined4 *)0x0;
  }
  else {
    puStack_7c = FUN_0063f620(puVar1);
  }
  local_4 = CONCAT31(local_4._1_3_,0xe);
  (**(code **)(*piVar2 + 4))();
  param_1[0x10c] = (int)puStack_7c;
  (**(code **)*piVar2)();
  (**(code **)(*(int *)param_1[0x10c] + 0x74))();
  piVar2 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar2 + 0x10))();
  piVar3 = (int *)FUN_0071b2a0();
  piVar2 = (int *)param_1[0x10c];
  (**(code **)(*piVar3 + 0x10))();
  (**(code **)(*piVar2 + 0x10))();
  piVar3 = (int *)FUN_0071b2a0();
  piVar2 = (int *)param_1[0x10c];
  (**(code **)(*piVar3 + 0x14))();
  (**(code **)(*piVar2 + 0x14))();
  (**(code **)(*(int *)param_1[0x10c] + 0x5c))();
  (**(code **)(*(int *)param_1[0x10c] + 100))();
  (**(code **)(*(int *)param_1[0x10c] + 0x50))();
  FUN_0073f6e0(param_1,(int *)param_1[0x10c]);
  FUN_0063e6c0((void *)param_1[0x10c],0xffa7b8d6,0xff77909f);
  FUN_0063e890((void *)param_1[0x10c],'\x01');
  pcStack_70 = acStack_64;
  acStack_64[0] = '\0';
  uStack_6c = 0;
  uStack_68 = 0x20;
  pcStack_70 = _malloc(0x20);
  _strncpy(pcStack_70,"ui/button_gameplay.dds",0x16);
  uStack_6c = 0x16;
  pcStack_70[0x16] = '\0';
  _Dest = _malloc(0x20);
  _strncpy(_Dest,"GAMEPLAYOPTIONS_DIALOGUE_TITLE",0x1e);
  _Dest[0x1e] = '\0';
  uStack_28 = 0x11;
  puVar1 = FUN_009b5030(apvStack_50,(undefined4 *)&stack0xffffff70);
  uStack_28 = 0x12;
  FUN_0063ec80((void *)param_1[0x10c],puVar1,&pcStack_70);
  if (uStack_48 < 0xb) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_50[0]);
}


//// FUNCTION FUN_00699fa0 @ 00699fa0 ////

undefined4 * __thiscall FUN_00699fa0(void *this,byte param_1)

{
  FUN_00697d70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00699fc0 @ 00699fc0 ////

int * FUN_00699fc0(void)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc82fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x4cc);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_00699550(piVar1);
  }
  local_4 = 0xffffffff;
  FUN_00695f70(piVar2);
  ExceptionList = local_c;
  return piVar2;
}


//// FUNCTION FUN_0069a020 @ 0069a020 ////

int * FUN_0069a020(void)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc831b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x4cc);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_00699550(piVar1);
  }
  local_4 = 0xffffffff;
  FUN_00696050(piVar2);
  ExceptionList = pvStack_c;
  return piVar2;
}


//// FUNCTION FUN_0069a080 @ 0069a080 ////

uint __fastcall FUN_0069a080(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0x47c) + 0x344) & 1;
}


//// FUNCTION FUN_0069a0b0 @ 0069a0b0 ////

uint __fastcall FUN_0069a0b0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(code **)(param_1 + 0x270) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x270))(param_1,*(undefined4 *)(param_1 + 0x274));
  }
  *(undefined1 *)(param_1 + 0x344) = 1;
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_0069a0f0 @ 0069a0f0 ////

int * __thiscall FUN_0069a0f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0069a150 @ 0069a150 ////

int __fastcall FUN_0069a150(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_0069a250 @ 0069a250 ////

undefined4 * __cdecl FUN_0069a250(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0069a310 @ 0069a310 ////

void __thiscall FUN_0069a310(void *this,float param_1)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  
  piVar1 = *(int **)((int)this + 0x47c);
  *(float *)((int)this + 0x490) = param_1;
  fVar2 = (float10)(**(code **)(*(int *)this + 0x10))();
  fVar3 = (float10)(**(code **)(*piVar1 + 0x10))();
  *(float *)(*(int *)((int)this + 0x47c) + 0xbc) =
       (float)(((float10)(float)fVar2 - fVar3) * (float10)param_1);
  return;
}


//// FUNCTION FUN_0069a360 @ 0069a360 ////

undefined8 __fastcall FUN_0069a360(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x46c);
  iVar2 = 0;
  if ((iVar1 != 0) && (param_2 = 0, *(int *)(param_1 + 0x470) - iVar1 >> 5 != 0)) {
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = *(int *)(param_1 + 0x470) - iVar1 >> 5;
    }
    uVar4 = FUN_00acd42c();
    param_2 = (undefined4)(uVar4 >> 0x20);
    iVar2 = (int)uVar4;
    if (iVar3 <= iVar2) {
      iVar2 = iVar3 + -1;
    }
  }
  return CONCAT44(param_2,iVar2);
}


//// FUNCTION FUN_0069a3b0 @ 0069a3b0 ////

float10 __fastcall FUN_0069a3b0(int param_1)

{
  return (float10)*(float *)(*(int *)(param_1 + 0x35c) + 0x490);
}


//// FUNCTION FUN_0069a3c0 @ 0069a3c0 ////

void __thiscall FUN_0069a3c0(void *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  piVar1 = *(int **)((int)this + 0x35c);
  piVar2 = (int *)piVar1[0x11f];
  piVar1[0x124] = (int)param_1;
  fVar3 = (float10)(**(code **)(*piVar1 + 0x10))();
  fVar4 = (float10)(**(code **)(*piVar2 + 0x10))();
  *(float *)(piVar1[0x11f] + 0xbc) = (float)(((float10)(float)fVar3 - fVar4) * (float10)param_1);
  if (*(code **)((int)this + 0x270) != (code *)0x0) {
    (**(code **)((int)this + 0x270))(this,*(undefined4 *)((int)this + 0x274));
  }
  return;
}


//// FUNCTION FUN_0069a460 @ 0069a460 ////

void __fastcall FUN_0069a460(int param_1)

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


//// FUNCTION FUN_0069a550 @ 0069a550 ////

void __cdecl FUN_0069a550(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_0069a5b0 @ 0069a5b0 ////

void __fastcall FUN_0069a5b0(int *param_1)

{
  int *piVar1;
  undefined2 unaff_SI;
  float10 fVar2;
  float local_8;
  float fStack_4;
  
  local_8 = (float)param_1[0x126];
  if (0 < (int)local_8) {
    fVar2 = FUN_00acf400((double)((float)(int)local_8 * (float)param_1[0x124]),unaff_SI);
    fVar2 = fVar2 + (float10)0.5;
    if ((float10)param_1[0x126] <= fVar2) {
      fVar2 = fVar2 - (float10)1.0;
    }
    FUN_00407070(&local_8,(float)(fVar2 / (float10)param_1[0x126]));
    piVar1 = (int *)param_1[0x11f];
    param_1[0x124] = (int)local_8;
    fVar2 = (float10)(**(code **)(*param_1 + 0x10))();
    fStack_4 = (float)fVar2;
    fVar2 = (float10)(**(code **)(*piVar1 + 0x10))();
    *(float *)(param_1[0x11f] + 0xbc) = (float)(((float10)fStack_4 - fVar2) * (float10)local_8);
  }
  return;
}


//// FUNCTION FUN_0069a6b0 @ 0069a6b0 ////

void __fastcall FUN_0069a6b0(int param_1)

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


//// FUNCTION FUN_0069a6d0 @ 0069a6d0 ////

void __fastcall FUN_0069a6d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d3941c;
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


//// FUNCTION FUN_0069a7b0 @ 0069a7b0 ////

undefined4 * __thiscall FUN_0069a7b0(void *this,byte param_1)

{
  FUN_005ec7f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0069a7d0 @ 0069a7d0 ////

void __thiscall FUN_0069a7d0(void *this,float param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  size_t sVar6;
  char *pcVar7;
  void *unaff_EBX;
  float10 fVar8;
  float10 fVar9;
  undefined2 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 auStack_40 [10];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc8338;
  pvStack_c = ExceptionList;
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  piVar2 = *(int **)((int)this + 0x35c);
  piVar3 = (int *)piVar2[0x11f];
  ExceptionList = &pvStack_c;
  piVar2[0x124] = (int)param_1;
  fVar8 = (float10)(**(code **)(*piVar2 + 0x10))();
  fVar9 = (float10)(**(code **)(*piVar3 + 0x10))();
  puStack_4c = auStack_40;
  *(float *)(piVar2[0x11f] + 0xbc) = (float)(((float10)(float)fVar8 - fVar9) * (float10)param_1);
  auStack_40[0] = 0;
  uStack_48 = 0;
  uStack_44 = 10;
  uVar4 = FUN_00ace02d(L"<p align=left><shadow><t2 color=#ffffff><translate>");
  FUN_004036d0(&puStack_4c,L"<p align=left><shadow><t2 color=#ffffff><translate>",uVar4);
  uStack_4 = 0;
  puVar5 = FUN_005686a0(apvStack_2c,param_2);
  FUN_0040cae0(&puStack_4c,(wchar_t *)*puVar5,puVar5[1]);
  if (uStack_24 < 0xb) {
    sVar6 = FUN_00ace02d(L"</translate></t2></shadow></p>");
    FUN_0040cae0(&puStack_4c,L"</translate></t2></shadow></p>",sVar6);
    (**(code **)(**(int **)((int)this + 0x39c) + 0x54))(&puStack_4c);
    (**(code **)(**(int **)((int)this + 0x39c) + 0x8c))(0);
    pcVar7 = param_2;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0((void *)((int)this + 0x3a0),param_2,(int)pcVar7 - (int)(param_2 + 1));
    if (puStack_4c <= &lpType_0000000a) {
      ExceptionList = pvStack_14;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_2c[0]);
}


//// FUNCTION FUN_0069a990 @ 0069a990 ////

void __fastcall FUN_0069a990(int *param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  undefined8 uVar6;
  float fStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  piVar2 = (int *)param_1[0x11f];
  fVar4 = (float10)(**(code **)(*param_1 + 0x10))();
  fVar5 = (float10)(**(code **)(*piVar2 + 0x10))();
  fVar4 = (float10)(float)piVar2[0x2f] / ((float10)(float)fVar4 - fVar5);
  param_1[0x125] = param_1[0x124];
  if ((float10)0.0 <= fVar4) {
    if ((float10)1.0 < fVar4) {
      fVar4 = (float10)1.0;
    }
  }
  else {
    fVar4 = (float10)0.0;
  }
  piVar2 = (int *)param_1[0x11f];
  param_1[0x124] = (int)(float)fVar4;
  fStack_c = (float)piVar2[0x2f] - 1.0;
  fVar4 = (float10)(**(code **)(*param_1 + 0x10))();
  fVar5 = (float10)(**(code **)(*piVar2 + 0x10))();
  piVar2 = (int *)param_1[0x11f];
  fStack_4 = (float)((float10)fStack_c / ((float10)(float)fVar4 - fVar5));
  fVar1 = (float)piVar2[0x2f];
  fVar4 = (float10)(**(code **)(*param_1 + 0x10))();
  fStack_c = (float)fVar4;
  fVar4 = (float10)(**(code **)(*piVar2 + 0x10))();
  if (((float)param_1[0x125] <= fStack_4) ||
     ((float10)(fVar1 + 1.0) / ((float10)fStack_c - fVar4) <= (float10)(float)param_1[0x125])) {
    uVar3 = extraout_EDX;
    if ((code *)param_1[0x9c] != (code *)0x0) {
      (*(code *)param_1[0x9c])(param_1,param_1[0x9d]);
      uVar3 = extraout_EDX_00;
    }
    if ((param_1[0x11b] != 0) && (param_1[0x11c] - param_1[0x11b] >> 5 != 0)) {
      uVar6 = FUN_0069a360((int)param_1,uVar3);
      if ((int)uVar6 != param_1[0x11e]) {
        param_1[0x11e] = (int)uVar6;
        uStack_8 = *(undefined4 *)(param_1[0x11f] + 0x9c);
        fStack_c = *(float *)(param_1[0x11f] + 0xc0);
        FUN_00747290((void *)param_1[0xb5],&fStack_c);
        fStack_4 = -NAN;
        FUN_00526220(0,&fStack_c,(undefined4 *)(param_1[0x11e] * 0x20 + param_1[0x11b]),&fStack_4);
      }
    }
  }
  if (((*(byte *)(param_1[0x11f] + 0x344) & 1) == 0) && ((char)param_1[0x127] == '\0')) {
    FUN_0069a5b0(param_1);
  }
  WWindow_Tick(param_1);
  return;
}


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


