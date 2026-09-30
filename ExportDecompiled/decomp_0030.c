//// FUNCTION FUN_0083a3d0 @ 0083a3d0 ////

void __fastcall FUN_0083a3d0(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION DesireOverEat_Constructor @ 0083a940 ////

undefined4 * __thiscall DesireOverEat_Constructor(void *this,undefined4 param_1)

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
  puStack_8 = &LAB_00ce638e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5ef9c;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"overeat",7);
  local_28 = 7;
  local_2c[7] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083aa30 @ 0083aa30 ////

undefined4 * __thiscall FUN_0083aa30(void *this,byte param_1)

{
  FUN_0083aa50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0083aa50 @ 0083aa50 ////

void __fastcall FUN_0083aa50(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_0083aad0 @ 0083aad0 ////

void __fastcall FUN_0083aad0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char **ppcVar6;
  int local_54;
  int local_50;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce63d2;
  local_c = ExceptionList;
  local_50 = *(int *)(*(int *)(*(int *)(param_1 + 0x13c) + 0x7b8) + 0x84);
  if (local_50 == 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    return;
  }
  ExceptionList = &local_c;
  local_54 = param_1;
  iVar3 = FUN_005998e0(local_50);
  if (iVar3 == 0) {
    FUN_00407070(&local_54,0.0);
    *(int *)(param_1 + 0xe0) = local_54;
    ExceptionList = local_c;
    return;
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"trailertantrum",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  ppcVar6 = &local_2c;
  local_4 = 0;
  bVar2 = false;
  iVar4 = FUN_00401c30(iVar3);
  uVar5 = FUN_00401ec0((undefined4 *)(iVar4 + 100),ppcVar6);
  if ((char)uVar5 == '\0') {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"tantrum",7);
    local_48 = 7;
    local_4c[7] = '\0';
    ppcVar6 = &local_4c;
    local_4 = 1;
    bVar2 = true;
    iVar3 = FUN_00401c30(iVar3);
    uVar5 = FUN_00401ec0((undefined4 *)(iVar3 + 100),ppcVar6);
    bVar1 = false;
    if ((char)uVar5 == '\0') goto LAB_0083ac2d;
  }
  bVar1 = true;
LAB_0083ac2d:
  if ((bVar2) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (bVar1) {
    if (*(char *)(local_50 + 0x15c) != '\0') {
      FUN_00407070(&local_50,1.0);
      *(int *)(local_54 + 0xe0) = local_50;
      ExceptionList = local_c;
      return;
    }
  }
  else {
    FUN_00407070(&local_50,0.0);
    *(int *)(local_54 + 0xe0) = local_50;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION DesirePanic_Constructor @ 0083ace0 ////

undefined4 * __thiscall DesirePanic_Constructor(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce63fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5eff4;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x13c) + 0x7b8) + 0x84);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"panic",5);
  local_28 = 5;
  local_2c[5] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar2 = FUN_00598cd0(piVar1);
  FUN_00838070(this,&local_2c,0,0,0,iVar2,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083adf0 @ 0083adf0 ////

undefined4 * __thiscall FUN_0083adf0(void *this,byte param_1)

{
  FUN_0083ae10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0083ae10 @ 0083ae10 ////

void __fastcall FUN_0083ae10(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_0083aea0 @ 0083aea0 ////

int * __thiscall FUN_0083aea0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0083af70 @ 0083af70 ////

void __fastcall FUN_0083af70(int param_1)

{
  int *piVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_18 [8];
  undefined1 auStack_10 [16];
  
  if (*(int **)(param_1 + 0x13c) == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    return;
  }
  piVar1 = *(int **)(param_1 + 0x100);
  pfVar3 = (float *)(**(code **)(**(int **)(param_1 + 0x13c) + 0x34))(local_18);
  pfVar4 = (float *)(**(code **)(*piVar1 + 0x34))(auStack_10);
  fVar2 = SQRT((*pfVar4 - *pfVar3) * (*pfVar4 - *pfVar3) +
               (pfVar4[1] - pfVar3[1]) * (pfVar4[1] - pfVar3[1]) +
               (pfVar4[2] - pfVar3[2]) * (pfVar4[2] - pfVar3[2])) * 0.125;
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0xe0) = fVar2;
  if (0.9 < *(float *)(param_1 + 0xe0)) {
    FUN_00407070(&stack0xffffffdc,0.9);
    *(float *)(param_1 + 0xe0) = fVar2;
  }
  return;
}


//// FUNCTION FUN_0083b050 @ 0083b050 ////

void __fastcall FUN_0083b050(int param_1)

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


//// FUNCTION FUN_0083b0b0 @ 0083b0b0 ////

void __fastcall FUN_0083b0b0(int param_1)

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


//// FUNCTION FUN_0083b0d0 @ 0083b0d0 ////

void __fastcall FUN_0083b0d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5f044;
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


//// FUNCTION DesirePesterStar_Constructor @ 0083b120 ////

undefined4 * __thiscall DesirePesterStar_Constructor(void *this,int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce642e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5f054;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  local_4 = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d5f044;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"pesterstar",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4._0_1_ = 2;
  iVar2 = FUN_00598cd0(param_1);
  FUN_00838070(this,&local_2c,0,0,0,iVar2,param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(int **)((int)this + 200) = param_1;
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083b220 @ 0083b220 ////

undefined4 * __thiscall FUN_0083b220(void *this,byte param_1)

{
  FUN_0083b240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0083b240 @ 0083b240 ////

void __fastcall FUN_0083b240(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d5f044;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION DesirePlay_Constructor @ 0083b2f0 ////

undefined4 * __thiscall DesirePlay_Constructor(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6450;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  local_2c = local_20;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d5f0a4;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"play",4);
  local_28 = 4;
  local_2c[4] = '\0';
  local_4._0_1_ = 1;
  FUN_00838070(this,&local_2c,0,0,0,DAT_0104adf0,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
  iVar1 = *(int *)(iVar1 + 100);
  puVar6 = (undefined4 *)((int)this + 100);
  piVar3 = &param_1;
  puVar5 = puVar6;
  iVar2 = FUN_00598b60(*(int *)((int)this + 0x100));
  piVar3 = (int *)FUN_00441680((void *)(iVar2 + 0x60),piVar3,puVar5);
  if (*piVar3 == iVar1) {
    fVar4 = FUN_00990e30(0.15,0.5);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
      *(float *)((int)this + 0xe0) = (float)fVar4;
    }
    else {
      *(undefined4 *)((int)this + 0xe0) = 0;
    }
  }
  else {
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x60),puVar6);
    *(int *)((int)this + 0xe0) = *piVar3;
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083b460 @ 0083b460 ////

undefined4 * __thiscall FUN_0083b460(void *this,byte param_1)

{
  thunk_FUN_008381f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION DesirePropInteract_GetUrgency @ 0083b4a0 ////

void __fastcall DesirePropInteract_GetUrgency(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005998e0(*(int *)(param_1 + 0x13c));
  if ((*(int *)(iVar1 + 0x274) != 0) && (*(int *)(param_1 + 0x13c) != 0)) {
    FUN_00407100((void *)(param_1 + 0xe0),*(float *)(*(int *)(iVar1 + 0x274) + 0x68));
  }
  return;
}


//// FUNCTION DesirePropInteract_Constructor @ 0083b560 ////

undefined4 * __thiscall DesirePropInteract_Constructor(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce647e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008433b0(this);
  piVar4 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5f0fc;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar4;
  *piVar4 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*(int *)((int)this + 0xec) + 4))();
  *(int *)((int)this + 0x100) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xec))();
  uVar1 = *(undefined4 *)((int)this + 0x100);
  (**(code **)(*piVar4 + 4))();
  *(undefined4 *)((int)this + 0x13c) = uVar1;
  (**(code **)*piVar4)();
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"propinteract",0xc);
  uStack_28 = 0xc;
  pcStack_2c[0xc] = '\0';
  local_4._0_1_ = 2;
  FUN_00838070(this,&pcStack_2c,0,0,0,0,param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  iVar2 = FUN_00598b60(*(int *)((int)this + 0x100));
  iVar2 = *(int *)(iVar2 + 100);
  puVar7 = (undefined4 *)((int)this + 100);
  piVar4 = &param_1;
  puVar6 = puVar7;
  iVar3 = FUN_00598b60(*(int *)((int)this + 0x100));
  piVar4 = (int *)FUN_00441680((void *)(iVar3 + 0x60),piVar4,puVar6);
  if (*piVar4 == iVar2) {
    fVar5 = FUN_00990e30(0.1,0.4);
    if ((float10)0.0 <= fVar5) {
      if ((float10)1.0 < fVar5) {
        fVar5 = (float10)1.0;
      }
      *(float *)((int)this + 0xe0) = (float)fVar5;
    }
    else {
      *(undefined4 *)((int)this + 0xe0) = 0;
    }
  }
  else {
    iVar2 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar4 = FUN_00442050((void *)(iVar2 + 0x60),puVar7);
    *(int *)((int)this + 0xe0) = *piVar4;
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_0083b720 @ 0083b720 ////

undefined4 * __thiscall FUN_0083b720(void *this,byte param_1)

{
  FUN_0083b740(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0083b740 @ 0083b740 ////

void __fastcall FUN_0083b740(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_0083b7c0 @ 0083b7c0 ////

float10 __fastcall FUN_0083b7c0(int param_1)

{
  float *pfVar1;
  undefined4 uStack_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uStack_2c = *(undefined4 *)(param_1 + 0x100);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  (**(code **)(**(int **)(param_1 + 0x98) + 0xc))(&local_18);
  pfVar1 = (float *)(**(code **)(**(int **)(param_1 + 0x100) + 0x34))(&uStack_2c);
  if (SQRT((*pfVar1 - fStack_24) * (*pfVar1 - fStack_24) +
           (pfVar1[1] - fStack_20) * (pfVar1[1] - fStack_20) +
           (pfVar1[2] - fStack_1c) * (pfVar1[2] - fStack_1c)) < 8.0) {
    return (float10)0.5;
  }
  return (float10)0.8;
}


//// FUNCTION FUN_0083b880 @ 0083b880 ////

void __fastcall FUN_0083b880(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5f154;
  param_1[0x4a] = &PTR_FUN_00d1ec60;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_0083b910 @ 0083b910 ////

undefined4 * __thiscall FUN_0083b910(void *this,byte param_1)

{
  FUN_0083b880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION DesireReadyPosition_Constructor @ 0083b930 ////

undefined4 * __thiscall
DesireReadyPosition_Constructor(void *this,undefined4 param_1,void *param_2,undefined4 param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce64ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5f154;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1ec60;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined1 *)((int)this + 0x10f) = 1;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_3;
  (**(code **)*piVar1)();
  if (param_2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)param_2 + 0x50;
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"readyposition",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4._0_1_ = 2;
  FUN_00838070(this,&local_2c,0,0,0,iVar3,param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_00401a00(param_2,this);
  TMCharacter_AddAction(*(void **)((int)this + 0x100),(int)param_2);
  fVar2 = *(float *)(*(int *)((int)this + 0x124) + 0x24);
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  *(float *)((int)this + 0xe0) = fVar2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083ba90 @ 0083ba90 ////

void __fastcall FUN_0083ba90(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce64d6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5f1ac;
  local_4 = 1;
  if (0x14 < (uint)param_1[0x53]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x51]);
  }
  puVar2 = (undefined4 *)param_1[0x50];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x50] = 0;
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  local_4 = 0xffffffff;
  FUN_008381f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0083bd00 @ 0083bd00 ////

undefined4 * __thiscall FUN_0083bd00(void *this,byte param_1)

{
  FUN_0083ba90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION DesireRehab_Constructor @ 0083bd20 ////

undefined4 * __thiscall DesireRehab_Constructor(void *this,undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *this_00;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce653a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5f1ac;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  this_00 = (undefined4 *)((int)this + 0x144);
  *this_00 = (undefined1 *)((int)this + 0x150);
  *(undefined1 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0x14;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  FUN_004015d0(this_00,(char *)*param_2,param_2[1]);
  FUN_0040d6b0(local_2c,"in_room_",this_00);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00838070(this,local_2c,0,0,0,0,param_1);
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  *(undefined1 *)((int)this + 0x10e) = 1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083be30 @ 0083be30 ////

int * __thiscall FUN_0083be30(void *this,byte param_1)

{
  FUN_005e2f20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0083bee0 @ 0083bee0 ////

void __thiscall FUN_0083bee0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x140) != 0) {
    FUN_005e2490(*(void **)((int)this + 0x140),param_1);
  }
  return;
}


//// FUNCTION FUN_0083bf10 @ 0083bf10 ////

void __fastcall FUN_0083bf10(undefined4 *param_1)

{
  int *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce6574;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5f21c;
  local_4 = 2;
  if ((void *)param_1[0x4f] != (void *)0x0) {
    FUN_0053a230((void *)param_1[0x4f],1);
  }
  _Memory = (int *)param_1[0x50];
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0x54] = &PTR_FUN_00d1a49c;
  if ((undefined4 *)param_1[0x56] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x56] = param_1[0x55];
  }
  if (param_1[0x55] != 0) {
    *(undefined4 *)(param_1[0x55] + 4) = param_1[0x56];
  }
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  if ((undefined4 *)param_1[0x56] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x56] = param_1[0x55];
  }
  if (param_1[0x55] != 0) {
    *(undefined4 *)(param_1[0x55] + 4) = param_1[0x56];
  }
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  local_4 = 0xffffffff;
  FUN_008381f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0083c070 @ 0083c070 ////

void __fastcall FUN_0083c070(int param_1)

{
  uint uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *this;
  void *this_00;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce65a6;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x14c) != '\0') {
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 10;
    local_4 = 0;
    ExceptionList = &local_c;
    uVar1 = FUN_00ace02d(L"<phrasebook>");
    FUN_004036d0(&local_6c,L"<phrasebook>",uVar1);
    sVar2 = FUN_00ace02d(L"<translate>ROOM_REHEARSE_PROGRESS_GENRE</translate>");
    FUN_0040cae0(&local_6c,L"<translate>ROOM_REHEARSE_PROGRESS_GENRE</translate>",sVar2);
    sVar2 = FUN_00ace02d(L"<phrase key=GENRE>");
    FUN_0040cae0(&local_6c,L"<phrase key=GENRE>",sVar2);
    puVar3 = FUN_00449f50(*(void **)(param_1 + 0x164),local_2c);
    FUN_0040cae0(&local_6c,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    sVar2 = FUN_00ace02d(L"</phrase></phrasebook>");
    FUN_0040cae0(&local_6c,L"</phrase></phrasebook>",sVar2);
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4._0_1_ = 1;
    sVar2 = FUN_00ace02d(L"<translate>SITT_PROGRESS</translate>");
    FUN_0040cae0(&local_4c,L"<translate>SITT_PROGRESS</translate>",sVar2);
    this = operator_new(0x80);
    local_4._0_1_ = 2;
    if (this == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      this_00 = operator_new(0x70);
      local_4._0_1_ = 3;
      if (this_00 != (void *)0x0) {
        FUN_008f9fa0(this_00,*(int *)(param_1 + 0x13c));
      }
      local_4._0_1_ = 2;
      puVar3 = FUN_005e3800(this,&local_6c,&local_4c,3);
    }
    *(undefined4 **)(param_1 + 0x140) = puVar3;
    puVar3[0x19] = &LAB_0083be50;
    local_4 = CONCAT31(local_4._1_3_,1);
    (**(code **)(puVar3[0x1a] + 4))();
    puVar3[0x1f] = param_1;
    (**(code **)puVar3[0x1a])();
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0083c270 @ 0083c270 ////

undefined4 * __thiscall FUN_0083c270(void *this,byte param_1)

{
  FUN_0083bf10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION DesireRehearse_Constructor @ 0083c2d0 ////

undefined4 * __thiscall
DesireRehearse_Constructor(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce65dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5f21c;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  piVar2 = (int *)((int)this + 0x150);
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(int **)((int)this + 0x15c) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d1a49c;
  *(undefined4 *)((int)this + 0x164) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"rehearse",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4._0_1_ = 3;
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0x10e) = 1;
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x144) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  *(undefined1 *)((int)this + 0x14c) = param_3;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0x164) = param_2;
  (**(code **)*piVar2)();
  FUN_0083c070((int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION DesireResearch_Constructor @ 0083c4c0 ////

undefined4 * __thiscall DesireResearch_Constructor(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce660e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  *(undefined ***)this = &PTR_FUN_00d5f354;
  piVar1 = (int *)((int)this + 300);
  *(undefined4 *)((int)this + 0x134) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x134) = (undefined4 *)((int)this + 0x128);
  *(undefined4 *)((int)this + 0x128) = &PTR_FUN_00d18c4c;
  *(int *)((int)this + 0x13c) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x130) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"research",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083c5c0 @ 0083c5c0 ////

undefined4 * __thiscall FUN_0083c5c0(void *this,byte param_1)

{
  FUN_0083c5e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0083c5e0 @ 0083c5e0 ////

void __fastcall FUN_0083c5e0(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION DesireSleep_GetUrgency @ 0083c680 ////

void __fastcall DesireSleep_GetUrgency(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_005998e0(*(int *)(param_1 + 0x13c));
  fVar1 = *(float *)(param_1 + 0xe0) - *(float *)(*(int *)(iVar2 + 0x274) + 0x68);
  if (fVar1 < 0.0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    return;
  }
  if (1.0 < fVar1) {
    *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
    return;
  }
  *(float *)(param_1 + 0xe0) = fVar1;
  return;
}


//// FUNCTION DesireSleep_Constructor @ 0083c6e0 ////

undefined4 * __thiscall DesireSleep_Constructor(void *this,undefined4 param_1)

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
  puStack_8 = &LAB_00ce663e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5f3b4;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"sleep",5);
  local_28 = 5;
  local_2c[5] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x9c) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083c7d0 @ 0083c7d0 ////

undefined4 * __thiscall FUN_0083c7d0(void *this,byte param_1)

{
  FUN_0083c7f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0083c7f0 @ 0083c7f0 ////

void __fastcall FUN_0083c7f0(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION DesireStayByBase_Constructor @ 0083c880 ////

undefined4 * __thiscall DesireStayByBase_Constructor(void *this,undefined4 param_1)

{
  int *piVar1;
  float fVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce666e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5f414;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"staybybase",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00838070(this,&local_2c,0,0,0,DAT_01050334,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  fVar2 = *(float *)(*(int *)((int)this + 0x124) + 0x24);
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  *(float *)((int)this + 0xe0) = fVar2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083c9b0 @ 0083c9b0 ////

undefined4 * __thiscall FUN_0083c9b0(void *this,byte param_1)

{
  FUN_0083c9d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0083c9d0 @ 0083c9d0 ////

void __fastcall FUN_0083c9d0(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_0083cab0 @ 0083cab0 ////

void __fastcall FUN_0083cab0(int param_1)

{
  void *this;
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6696;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x194) == 0) &&
     (DAT_00e5ccec < (uint)(*(int *)(DAT_0104cdf4 + 0x3c) - *(int *)(param_1 + 0x198)))) {
    ExceptionList = &local_c;
    this = operator_new(0x80);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      this_00 = operator_new(0x70);
      local_4._0_1_ = 1;
      if (this_00 != (void *)0x0) {
        FUN_008f9fa0(this_00,*(int *)(param_1 + 400));
      }
      local_4 = (uint)local_4._1_3_ << 8;
      puVar1 = FUN_005e3530(this,"SITT_PROGRESS");
    }
    *(undefined4 **)(param_1 + 0x194) = puVar1;
    puVar1[0x19] = &LAB_0083ca50;
    local_4 = 0xffffffff;
    (**(code **)(puVar1[0x1a] + 4))();
    puVar1[0x1f] = param_1;
    (**(code **)puVar1[0x1a])();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0083cba0 @ 0083cba0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0083cba0(int param_1)

{
  float fVar1;
  float fVar2;
  void *this;
  float10 fVar3;
  float *pfVar4;
  undefined4 *puVar5;
  char *local_10c;
  uint local_108;
  uint local_104;
  char local_100 [2];
  undefined1 uStack_fe;
  float local_f0;
  float local_ec [2];
  undefined4 local_e4 [53];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce66f8;
  pvStack_c = ExceptionList;
  if ((DAT_0104ecac & 1) == 0) {
    DAT_0104ecac = DAT_0104ecac | 1;
    _DAT_0104eca8 = 0.0;
  }
  if ((DAT_0104ecac & 2) == 0) {
    DAT_0104ecac = DAT_0104ecac | 2;
    _DAT_0104eca4 = 0.0;
  }
  if ((DAT_0104ecac & 4) == 0) {
    DAT_0104ecac = DAT_0104ecac | 4;
    _DAT_0104eca0 = 0.0;
  }
  if ((DAT_0104ecac & 8) == 0) {
    DAT_0104ecac = DAT_0104ecac | 8;
    _DAT_0104ec9c = 0.0;
  }
  ExceptionList = &pvStack_c;
  if (DAT_0104ec98 == '\0') {
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    ExceptionList = &pvStack_c;
    _strncpy(local_10c,"stunts",6);
    local_108 = 6;
    local_10c[6] = '\0';
    local_4 = 0;
    FUN_0055c540(local_e4,&local_10c);
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"healththreshold",0xf);
    local_108 = 0xf;
    local_10c[0xf] = '\0';
    local_4._0_1_ = 3;
    fVar3 = FUN_00558610(local_e4,&local_10c,0.0);
    if ((float10)0.0 <= fVar3) {
      if ((float10)1.0 < fVar3) {
        fVar3 = (float10)1.0;
      }
    }
    else {
      fVar3 = (float10)0.0;
    }
    _DAT_0104eca8 = (float)fVar3;
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"training",8);
    local_108 = 8;
    local_10c[8] = '\0';
    local_4._0_1_ = 4;
    FUN_00558a50(local_e4,&local_10c,(undefined4 *)0x1);
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x20;
    local_10c = _malloc(0x20);
    _strncpy(local_10c,"abilityinjurymodifier",0x15);
    local_108 = 0x15;
    local_10c[0x15] = '\0';
    local_4._0_1_ = 5;
    fVar3 = FUN_00558610(local_e4,&local_10c,0.0);
    if ((float10)0.0 <= fVar3) {
      if ((float10)1.0 < fVar3) {
        fVar3 = (float10)1.0;
      }
    }
    else {
      fVar3 = (float10)0.0;
    }
    _DAT_0104eca4 = (float)fVar3;
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"maxhealthability",0x10);
    local_108 = 0x10;
    local_10c[0x10] = '\0';
    local_4._0_1_ = 6;
    fVar3 = FUN_00558610(local_e4,&local_10c,0.0);
    if ((float10)0.0 <= fVar3) {
      if ((float10)1.0 < fVar3) {
        fVar3 = (float10)1.0;
      }
    }
    else {
      fVar3 = (float10)0.0;
    }
    _DAT_0104eca0 = (float)fVar3;
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"minhealthability",0x10);
    local_108 = 0x10;
    local_10c[0x10] = '\0';
    local_4 = CONCAT31(local_4._1_3_,7);
    fVar3 = FUN_00558610(local_e4,&local_10c,0.0);
    if ((float10)0.0 <= fVar3) {
      if ((float10)1.0 < fVar3) {
        fVar3 = (float10)1.0;
      }
    }
    else {
      fVar3 = (float10)0.0;
    }
    _DAT_0104ec9c = (float)fVar3;
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    DAT_0104ec98 = '\x01';
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
  }
  (**(code **)(**(int **)(param_1 + 0x13c) + 0x1e4))(local_ec);
  local_104 = local_104 & 0xffffff00;
  local_10c = (char *)0x0;
  local_108 = 0x14;
  _strncpy((char *)&local_104,"Stunts",6);
  local_10c = (char *)0x6;
  uStack_fe = 0;
  puVar5 = (undefined4 *)&stack0xfffffef0;
  pfVar4 = local_ec;
  puStack_8 = (undefined1 *)0x8;
  this = (void *)FUN_00577370(*(int *)(param_1 + 0x13c));
  FUN_00441750(this,pfVar4,puVar5);
  if (0x14 < local_108) {
                    /* WARNING: Subroutine does not return */
    _free(&local_104);
  }
  if (_DAT_0104eca8 <= local_f0) {
LAB_0083d035:
    fVar1 = 1.0;
  }
  else if (0.0 <= _DAT_0104eca4) {
    fVar1 = _DAT_0104eca4;
    if (1.0 < _DAT_0104eca4) goto LAB_0083d035;
  }
  else {
    fVar1 = 0.0;
  }
  fVar2 = _DAT_0104eca0 - _DAT_0104ec9c;
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  fVar2 = fVar2 * local_f0 + _DAT_0104ec9c;
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  fVar2 = fVar2 * fVar1;
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  local_ec[0] = local_ec[0] * fVar2;
  if (local_ec[0] < 0.0) {
    local_ec[0] = 0.0;
    goto LAB_0083d145;
  }
  if (local_ec[0] <= 1.0) {
    if (local_ec[0] < 0.0) {
      local_ec[0] = 0.0;
      goto LAB_0083d145;
    }
    if (local_ec[0] <= 1.0) goto LAB_0083d145;
  }
  local_ec[0] = 1.0;
LAB_0083d145:
  if (local_ec[0] < *(float *)(param_1 + 0x150)) {
    *(undefined1 *)(param_1 + 0x154) = 0;
    ExceptionList = pvStack_10;
    return;
  }
  *(undefined1 *)(param_1 + 0x154) = 1;
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0083d1a0 @ 0083d1a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0083d1a0(int param_1)

{
  float fVar1;
  char cVar2;
  void *pvVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  undefined4 *puVar7;
  float fVar8;
  char **ppcVar9;
  char *local_10c;
  uint local_108;
  uint local_104;
  char local_100 [2];
  undefined1 uStack_fe;
  float fStack_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4 [53];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6794;
  pvStack_c = ExceptionList;
  local_10c = local_100;
  local_100[0] = '\0';
  local_108 = 0;
  local_104 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_10c,"Stunts",6);
  local_108 = 6;
  local_10c[6] = '\0';
  ppcVar9 = &local_10c;
  puVar7 = &local_e8;
  local_4 = 0;
  pvVar3 = (void *)FUN_00577370(*(int *)(param_1 + 0x13c));
  pfVar4 = (float *)FUN_00441750(pvVar3,puVar7,ppcVar9);
  local_ec = *pfVar4;
  local_4 = 0xffffffff;
  if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
    _free(local_10c);
  }
  local_ec = 1.0 - ABS(*(float *)(param_1 + 0x150) - local_ec);
  if (DAT_0104eccc == '\0') {
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"stunts",6);
    local_108 = 6;
    local_10c[6] = '\0';
    local_4 = 1;
    FUN_0055c540(local_e4,&local_10c);
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"healththreshold",0xf);
    local_108 = 0xf;
    local_10c[0xf] = '\0';
    local_4._0_1_ = 4;
    fVar6 = FUN_00558610(local_e4,&local_10c,0.0);
    _DAT_0104ecc8 = (float)fVar6;
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"training",8);
    local_108 = 8;
    local_10c[8] = '\0';
    local_4._0_1_ = 5;
    FUN_00558a50(local_e4,&local_10c,(undefined4 *)0x0);
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"stuntxpsuccessmin",0x11);
    local_108 = 0x11;
    local_10c[0x11] = '\0';
    local_4._0_1_ = 6;
    fVar6 = FUN_00558610(local_e4,&local_10c,0.0);
    _DAT_0104ecc4 = (float)fVar6;
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"stuntxpsuccessmax",0x11);
    local_108 = 0x11;
    local_10c[0x11] = '\0';
    local_4._0_1_ = 7;
    fVar6 = FUN_00558610(local_e4,&local_10c,0.0);
    _DAT_0104ecc0 = (float)fVar6;
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"stuntxpfailuremin",0x11);
    local_108 = 0x11;
    local_10c[0x11] = '\0';
    local_4._0_1_ = 8;
    fVar6 = FUN_00558610(local_e4,&local_10c,0.0);
    _DAT_0104ecbc = (float)fVar6;
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"stuntxpfailuremax",0x11);
    local_108 = 0x11;
    local_10c[0x11] = '\0';
    local_4._0_1_ = 9;
    fVar6 = FUN_00558610(local_e4,&local_10c,0.0);
    _DAT_0104ecb8 = (float)fVar6;
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"lowhealthmultiplier",0x13);
    local_108 = 0x13;
    local_10c[0x13] = '\0';
    local_4._0_1_ = 10;
    fVar6 = FUN_00558610(local_e4,&local_10c,0.0);
    _DAT_0104ecb4 = (float)fVar6;
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    _strncpy(local_10c,"stuntxpincreasemin",0x12);
    local_108 = 0x12;
    local_10c[0x12] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xb);
    fVar6 = FUN_00558610(local_e4,&local_10c,0.0);
    DAT_0104ecb0 = (float)fVar6;
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    DAT_0104eccc = '\x01';
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
  }
  fVar8 = _DAT_0104ecbc;
  fVar1 = _DAT_0104ecb8;
  if (*(char *)(param_1 + 0x154) != '\0') {
    fVar8 = _DAT_0104ecc4;
    fVar1 = _DAT_0104ecc0;
  }
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 - fVar8;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  local_ec = fVar1 * local_ec + fVar8;
  iVar5 = AwardBonusManager_Get();
  if (iVar5 != 0) {
    iVar5 = 0xf;
    pvVar3 = (void *)AwardBonusManager_Get();
    cVar2 = AwardBonusManager_IsBonusActive(pvVar3,iVar5);
    if (cVar2 != '\0') {
      pvVar3 = (void *)0x0;
      iVar5 = 0xf;
      AwardBonusManager_Get();
      fVar6 = AwardBonus_GetValue(iVar5,pvVar3);
      local_ec = (float)(fVar6 * (float10)local_ec);
    }
  }
  if (local_ec <= DAT_0104ecb0) {
    local_ec = DAT_0104ecb0;
  }
  pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0x13c) + 0x1e4))(&local_e8);
  if (*pfVar4 < _DAT_0104ecc8) {
    fStack_f0 = _DAT_0104ecb4 * fStack_f0;
  }
  local_104 = local_104 & 0xffffff00;
  local_10c = (char *)0x0;
  local_108 = 0x14;
  _strncpy((char *)&local_104,"Stunts",6);
  local_10c = (char *)0x6;
  uStack_fe = 0;
  puVar7 = (undefined4 *)&stack0xfffffef0;
  puStack_8 = (undefined1 *)0xc;
  fVar8 = fStack_f0;
  pvVar3 = (void *)FUN_00577370(*(int *)(param_1 + 0x13c));
  FUN_004425f0(pvVar3,puVar7,fVar8);
  if (0x14 < local_108) {
                    /* WARNING: Subroutine does not return */
    _free(&local_104);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0083d7a0 @ 0083d7a0 ////

void __fastcall FUN_0083d7a0(float param_1)

{
  char cVar1;
  void *this;
  float *pfVar2;
  float *pfVar3;
  float10 fVar4;
  char **ppcVar5;
  char *local_114;
  undefined4 local_110;
  uint local_10c;
  char local_108 [20];
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4 [53];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6819;
  pvStack_c = ExceptionList;
  if ((DAT_0104ecec & 1) == 0) {
    DAT_0104ecec = DAT_0104ecec | 1;
    DAT_0104ece8 = 0.0;
  }
  if ((DAT_0104ecec & 2) == 0) {
    DAT_0104ecec = DAT_0104ecec | 2;
    DAT_0104ece4 = 0.0;
  }
  if ((DAT_0104ecec & 4) == 0) {
    DAT_0104ecec = DAT_0104ecec | 4;
    DAT_0104ece0 = 0.0;
  }
  if ((DAT_0104ecec & 8) == 0) {
    DAT_0104ecec = DAT_0104ecec | 8;
    DAT_0104ecdc = 0.0;
  }
  if ((DAT_0104ecec & 0x10) == 0) {
    DAT_0104ecec = DAT_0104ecec | 0x10;
    DAT_0104ecd8 = 0.0;
  }
  if ((DAT_0104ecec & 0x20) == 0) {
    DAT_0104ecec = DAT_0104ecec | 0x20;
    DAT_0104ecd4 = 0.0;
  }
  if ((DAT_0104ecec & 0x40) == 0) {
    DAT_0104ecec = DAT_0104ecec | 0x40;
    DAT_0104ecd0 = 0.0;
  }
  ExceptionList = &pvStack_c;
  if (DAT_0104eccd == '\0') {
    local_114 = local_108;
    local_108[0] = '\0';
    local_110 = 0;
    local_10c = 0x14;
    ExceptionList = &pvStack_c;
    local_f0 = param_1;
    _strncpy(local_114,"stunts",6);
    local_110 = 6;
    local_114[6] = '\0';
    local_4 = 0;
    FUN_0055c540(local_e4,&local_114);
    if (0x14 < local_10c) {
                    /* WARNING: Subroutine does not return */
      _free(local_114);
    }
    local_114 = local_108;
    local_108[0] = '\0';
    local_110 = 0;
    local_10c = 0x14;
    _strncpy(local_114,"training",8);
    local_110 = 8;
    local_114[8] = '\0';
    local_4._0_1_ = 3;
    FUN_00558a50(local_e4,&local_114,(undefined4 *)0x0);
    if (0x14 < local_10c) {
                    /* WARNING: Subroutine does not return */
      _free(local_114);
    }
    local_114 = local_108;
    local_108[0] = '\0';
    local_110 = 0;
    local_10c = 0x20;
    local_114 = _malloc(0x20);
    _strncpy(local_114,"successinjurymultiplier",0x17);
    local_110 = 0x17;
    local_114[0x17] = '\0';
    local_4._0_1_ = 4;
    fVar4 = FUN_00558610(local_e4,&local_114,0.0);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
    }
    else {
      fVar4 = (float10)0.0;
    }
    DAT_0104ece8 = (float)fVar4;
    if (0x14 < local_10c) {
                    /* WARNING: Subroutine does not return */
      _free(local_114);
    }
    local_114 = local_108;
    local_108[0] = '\0';
    local_110 = 0;
    local_10c = 0x20;
    local_114 = _malloc(0x20);
    _strncpy(local_114,"failureinjurymultiplier",0x17);
    local_110 = 0x17;
    local_114[0x17] = '\0';
    local_4._0_1_ = 5;
    fVar4 = FUN_00558610(local_e4,&local_114,0.0);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
    }
    else {
      fVar4 = (float10)0.0;
    }
    DAT_0104ece4 = (float)fVar4;
    if (0x14 < local_10c) {
                    /* WARNING: Subroutine does not return */
      _free(local_114);
    }
    local_114 = local_108;
    local_108[0] = '\0';
    local_110 = 0;
    local_10c = 0x20;
    local_114 = _malloc(0x20);
    _strncpy(local_114,"maxhealthlossfailure",0x14);
    local_110 = 0x14;
    local_114[0x14] = '\0';
    local_4._0_1_ = 6;
    fVar4 = FUN_00558610(local_e4,&local_114,0.0);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
    }
    else {
      fVar4 = (float10)0.0;
    }
    DAT_0104ece0 = (float)fVar4;
    if (0x14 < local_10c) {
                    /* WARNING: Subroutine does not return */
      _free(local_114);
    }
    local_114 = local_108;
    local_108[0] = '\0';
    local_110 = 0;
    local_10c = 0x20;
    local_114 = _malloc(0x20);
    _strncpy(local_114,"minhealthlossfailure",0x14);
    local_110 = 0x14;
    local_114[0x14] = '\0';
    local_4._0_1_ = 7;
    fVar4 = FUN_00558610(local_e4,&local_114,0.0);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
    }
    else {
      fVar4 = (float10)0.0;
    }
    DAT_0104ecdc = (float)fVar4;
    if (0x14 < local_10c) {
                    /* WARNING: Subroutine does not return */
      _free(local_114);
    }
    local_114 = local_108;
    local_108[0] = '\0';
    local_110 = 0;
    local_10c = 0x20;
    local_114 = _malloc(0x20);
    _strncpy(local_114,"maxhealthlosssuccess",0x14);
    local_110 = 0x14;
    local_114[0x14] = '\0';
    local_4._0_1_ = 8;
    fVar4 = FUN_00558610(local_e4,&local_114,0.0);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
    }
    else {
      fVar4 = (float10)0.0;
    }
    DAT_0104ecd8 = (float)fVar4;
    if (0x14 < local_10c) {
                    /* WARNING: Subroutine does not return */
      _free(local_114);
    }
    local_114 = local_108;
    local_108[0] = '\0';
    local_110 = 0;
    local_10c = 0x20;
    local_114 = _malloc(0x20);
    _strncpy(local_114,"minhealthlosssuccess",0x14);
    local_110 = 0x14;
    local_114[0x14] = '\0';
    local_4._0_1_ = 9;
    fVar4 = FUN_00558610(local_e4,&local_114,0.0);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
    }
    else {
      fVar4 = (float10)0.0;
    }
    DAT_0104ecd4 = (float)fVar4;
    if (0x14 < local_10c) {
                    /* WARNING: Subroutine does not return */
      _free(local_114);
    }
    local_114 = local_108;
    local_108[0] = '\0';
    local_110 = 0;
    local_10c = 0x20;
    local_114 = _malloc(0x20);
    _strncpy(local_114,"minxpcapforhealthloss",0x15);
    local_110 = 0x15;
    local_114[0x15] = '\0';
    local_4 = CONCAT31(local_4._1_3_,10);
    fVar4 = FUN_00558610(local_e4,&local_114,0.0);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
    }
    else {
      fVar4 = (float10)0.0;
    }
    DAT_0104ecd0 = (float)fVar4;
    if (0x14 < local_10c) {
                    /* WARNING: Subroutine does not return */
      _free(local_114);
    }
    DAT_0104eccd = '\x01';
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
    param_1 = local_f0;
  }
  cVar1 = *(char *)((int)param_1 + 0x154);
  pfVar3 = &DAT_0104ece8;
  if (cVar1 == '\0') {
    pfVar3 = &DAT_0104ece4;
  }
  local_f4 = *pfVar3;
  pfVar3 = &DAT_0104ecd8;
  if (cVar1 == '\0') {
    pfVar3 = &DAT_0104ece0;
  }
  local_ec = *pfVar3;
  pfVar3 = &DAT_0104ecd4;
  if (cVar1 == '\0') {
    pfVar3 = &DAT_0104ecdc;
  }
  local_f0 = *pfVar3;
  local_114 = local_108;
  local_108[0] = '\0';
  local_110 = 0;
  local_10c = 0x14;
  _strncpy(local_114,"Stunts",6);
  local_110 = 6;
  local_114[6] = '\0';
  ppcVar5 = &local_114;
  pfVar3 = &local_e8;
  local_4 = 0xb;
  this = (void *)FUN_00577370(*(int *)((int)param_1 + 0x13c));
  FUN_00441750(this,pfVar3,ppcVar5);
  local_4 = 0xffffffff;
  if (0x14 < local_10c) {
                    /* WARNING: Subroutine does not return */
    _free(local_114);
  }
  pfVar3 = &local_e8;
  if (local_e8 <= DAT_0104ecd0) {
    pfVar3 = &DAT_0104ecd0;
  }
  local_f4 = local_f4 * *(float *)((int)param_1 + 0x150);
  if (0.0 <= local_f4) {
    if (1.0 < local_f4) {
      local_f4 = 1.0;
    }
  }
  else {
    local_f4 = 0.0;
  }
  local_f4 = local_f4 / *pfVar3;
  if (0.0 <= local_f4) {
    if (1.0 < local_f4) {
      local_f4 = 1.0;
    }
  }
  else {
    local_f4 = 0.0;
  }
  pfVar3 = &local_ec;
  if (local_f4 <= local_ec) {
    pfVar3 = &local_f4;
  }
  local_f4 = *pfVar3;
  pfVar2 = &local_f0;
  if (local_f0 <= *pfVar3) {
    pfVar2 = &local_f4;
  }
  local_f4 = *pfVar2;
  (**(code **)(**(int **)((int)param_1 + 0x13c) + 0x1e8))(-local_f4);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0083df40 @ 0083df40 ////

void __fastcall FUN_0083df40(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce6870;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5f56c;
  piVar1 = (int *)param_1[0x65];
  local_4 = 4;
  if (piVar1 != (int *)0x0) {
    FUN_005e2f20(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  param_1[0x65] = 0;
  param_1[0x5f] = &PTR_FUN_00d16bec;
  if ((undefined4 *)param_1[0x61] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x61] = param_1[0x60];
  }
  if (param_1[0x60] != 0) {
    *(undefined4 *)(param_1[0x60] + 4) = param_1[0x61];
  }
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  if ((undefined4 *)param_1[0x61] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x61] = param_1[0x60];
  }
  if (param_1[0x60] != 0) {
    *(undefined4 *)(param_1[0x60] + 4) = param_1[0x61];
  }
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  puVar2 = (undefined4 *)param_1[0x5e];
  local_4 = 2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x5e] = 0;
  if (0x14 < (uint)param_1[0x58]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x56]);
  }
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  local_4 = 0xffffffff;
  FUN_008381f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0083e0d0 @ 0083e0d0 ////

void __fastcall FUN_0083e0d0(float param_1)

{
  int iVar1;
  int *_Memory;
  size_t sVar2;
  CHAR *local_60;
  undefined4 local_5c;
  uint local_58;
  CHAR local_54 [20];
  char local_40 [64];
  
  FUN_0083d1a0((int)param_1);
  FUN_0083d7a0(param_1);
  iVar1 = *(int *)((int)param_1 + 0x13c);
  if (iVar1 != 0) {
    if (*(char *)((int)param_1 + 0x154) == '\0') {
      FUN_00576100(iVar1);
    }
    else {
      FUN_005760f0(iVar1);
    }
  }
  _Memory = *(int **)((int)param_1 + 0x194);
  *(undefined4 *)((int)param_1 + 0xe0) = 0;
  *(undefined1 *)((int)param_1 + 0x155) = 1;
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_60 = local_54;
  *(undefined4 *)((int)param_1 + 0x194) = 0;
  local_54[0] = '\0';
  local_5c = 0;
  local_58 = 0x14;
  FUN_004073f0(&local_60,"Stunt training duration: ",0x19);
  sVar2 = _sprintf(local_40,(char *)&param_2_00d1b93c,
                   *(int *)(DAT_0104cdf4 + 0x3c) - *(int *)((int)param_1 + 0x140));
  FUN_004073f0(&local_60,local_40,sVar2);
  FUN_004073f0(&local_60,"\n",1);
  OutputDebugStringA(local_60);
  if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  return;
}


//// FUNCTION FUN_0083e490 @ 0083e490 ////

void __thiscall FUN_0083e490(void *this,void *param_1)

{
  char *_Source;
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *this_00;
  float *pfVar5;
  float10 fVar6;
  uint uVar7;
  char **ppcVar8;
  char *local_b4;
  uint local_b0;
  uint local_ac;
  char local_a8 [20];
  char *local_94;
  undefined4 local_90;
  uint local_8c;
  char local_88 [20];
  float fStack_74;
  void *local_70 [2];
  uint uStack_68;
  undefined4 uStack_50;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce68dc;
  pvStack_c = ExceptionList;
  local_b4 = local_a8;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x20;
  ExceptionList = &pvStack_c;
  local_b4 = _malloc(0x20);
  _strncpy(local_b4,"stunttrain/stuntxpcostumes",0x1a);
  local_b0 = 0x1a;
  local_b4[0x1a] = '\0';
  local_4 = 0;
  uVar2 = FUN_00558a50(param_1,&local_b4,(undefined4 *)0x1);
  local_4 = 0xffffffff;
  if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_00558120(param_1,0);
    cVar1 = (char)uVar2;
    while (cVar1 != '\0') {
      FUN_00558de0(param_1,local_70);
      local_b4 = local_a8;
      local_4 = 1;
      local_a8[0] = '\0';
      local_b0 = 0;
      local_ac = 0x14;
      uVar3 = FUN_00413450(local_70,",",0,1);
      if (uVar3 != 0xffffffff) {
        uVar3 = FUN_00413450(local_70,",",0,1);
        puVar4 = FUN_00430770(local_70,local_2c,0,uVar3);
        uVar3 = puVar4[1];
        _Source = (char *)*puVar4;
        if (local_ac <= uVar3) {
          if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
            _free(local_b4);
          }
          local_ac = uVar3 + 0x20 & 0xffffffe0;
          local_b4 = _malloc(local_ac);
        }
        _strncpy(local_b4,_Source,uVar3);
        local_b4[uVar3] = '\0';
        local_b0 = uVar3;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        uVar7 = 0xffffffff;
        uVar3 = FUN_00413450(local_70,",",0,1);
        puVar4 = FUN_00430770(local_70,local_4c,uVar3 + 1,uVar7);
        local_4._0_1_ = 3;
        fVar6 = FUN_00567d60(puVar4);
        fStack_74 = (float)fVar6;
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        local_94 = local_88;
        local_88[0] = '\0';
        local_90 = 0;
        local_8c = 0x14;
        _strncpy(local_94,"Stunts",6);
        local_90 = 6;
        local_94[6] = '\0';
        ppcVar8 = &local_94;
        puVar4 = &uStack_50;
        local_4 = CONCAT31(local_4._1_3_,4);
        this_00 = (void *)FUN_00577370(*(int *)((int)this + 0x13c));
        pfVar5 = (float *)FUN_00441750(this_00,puVar4,ppcVar8);
        if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
          _free(local_94);
        }
        if (fStack_74 <= *pfVar5) {
          FUN_004015d0((void *)((int)this + 0x158),local_b4,local_b0);
        }
      }
      if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
        _free(local_b4);
      }
      local_4 = 0xffffffff;
      if (0x14 < uStack_68) {
                    /* WARNING: Subroutine does not return */
        _free(local_70[0]);
      }
      uVar2 = FUN_00558120(param_1,2);
      cVar1 = (char)uVar2;
    }
    FUN_00558bb0(param_1,5);
  }
  if (*(int *)((int)this + 0x15c) == 0) {
    local_94 = local_88;
    local_88[0] = '\0';
    local_90 = 0;
    local_8c = 0x14;
    _strncpy(local_94,"stunttrain/Costume",0x12);
    local_90 = 0x12;
    local_94[0x12] = '\0';
    local_4 = 5;
    puVar4 = FUN_005584e0(param_1,local_4c,&local_94);
    FUN_004015d0((void *)((int)this + 0x158),(char *)*puVar4,puVar4[1]);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
      _free(local_94);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0083e840 @ 0083e840 ////

undefined4 * __thiscall FUN_0083e840(void *this,byte param_1)

{
  FUN_0083df40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION DesireStuntTrain_Constructor @ 0083e860 ////

undefined4 * __thiscall DesireStuntTrain_Constructor(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  undefined4 uVar3;
  float10 fVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6950;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  *(undefined ***)this = &PTR_FUN_00d5f56c;
  piVar1 = (int *)((int)this + 300);
  *(undefined4 *)((int)this + 0x134) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x134) = (undefined4 *)((int)this + 0x128);
  *(undefined4 *)((int)this + 0x128) = &PTR_FUN_00d18c4c;
  *(int *)((int)this + 0x13c) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x130) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x140) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined1 *)((int)this + 0x155) = 0;
  *(undefined1 **)((int)this + 0x158) = (undefined1 *)((int)this + 0x164);
  *(undefined1 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0x14;
  *(undefined4 *)((int)this + 0x178) = 0;
  piVar1 = (int *)((int)this + 0x180);
  *(undefined4 *)((int)this + 0x188) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 **)((int)this + 0x188) = (undefined4 *)((int)this + 0x17c);
  *(undefined4 *)((int)this + 0x17c) = &PTR_FUN_00d16bec;
  *(int *)((int)this + 400) = param_2;
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x18);
    *(int **)((int)this + 0x184) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_2c = local_20;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"stunttrain",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4._0_1_ = 5;
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  local_4._0_1_ = 4;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  this_00 = (void *)FUN_00528140(param_2);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"stunttrain/DurationTicks",0x18);
  local_28 = 0x18;
  local_2c[0x18] = '\0';
  local_4._0_1_ = 6;
  uVar3 = FUN_00558750(this_00,&local_2c,0);
  *(undefined4 *)((int)this + 0x148) = uVar3;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"stunttrain/DeviceLevel",0x16);
  local_28 = 0x16;
  local_2c[0x16] = '\0';
  local_4._0_1_ = 7;
  fVar4 = FUN_00558610(this_00,&local_2c,0.0);
  *(float *)((int)this + 0x150) = (float)fVar4;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x40;
  local_2c = _malloc(0x40);
  _strncpy(local_2c,"stunttrain/DurationForProgressBar",0x21);
  local_28 = 0x21;
  local_2c[0x21] = '\0';
  local_4._0_1_ = 8;
  uVar3 = FUN_00558750(this_00,&local_2c,0);
  *(undefined4 *)((int)this + 0x14c) = uVar3;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0083e490(this,this_00);
  FUN_0083cba0((int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION DesireTakePhoto_GetUrgency @ 0083ebb0 ////

void __fastcall DesireTakePhoto_GetUrgency(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(param_1 + 0xe0) - 0.7;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0xe0) = fVar1;
  iVar2 = FUN_00ace790(*(int **)(param_1 + 0x100),0,&TM::TMCharacter::RTTI_Type_Descriptor,
                       &TM::CPhotographer::RTTI_Type_Descriptor,0);
  if (iVar2 != 0) {
    FUN_00573210(iVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0083ec22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x100) + 0x154))();
  return;
}


//// FUNCTION DesireTakePhoto_Constructor @ 0083ec30 ////

undefined4 * __thiscall DesireTakePhoto_Constructor(void *this,undefined4 param_1)

{
  float fVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6970;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  local_2c = local_20;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d5f674;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"takephoto",9);
  local_28 = 9;
  local_2c[9] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  fVar1 = *(float *)(*(int *)((int)this + 0x124) + 0x20);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)this + 0xe0) = fVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083ed20 @ 0083ed20 ////

undefined4 * __thiscall FUN_0083ed20(void *this,byte param_1)

{
  thunk_FUN_008381f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0083ee70 @ 0083ee70 ////

undefined4 * __thiscall FUN_0083ee70(void *this,undefined4 *param_1)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6998;
  local_c = ExceptionList;
  local_28 = 0;
  local_20[0] = '\0';
  local_24 = 0x14;
  if (*(char *)((int)this + 0x158) == '\0') {
    if (*(char *)((int)this + 0x159) == '\0') {
      local_2c = local_20;
      ExceptionList = &local_c;
      _strncpy(local_20,"desire_talk",0xb);
      local_28 = 0xb;
      local_2c[0xb] = '\0';
      local_4 = 2;
      FUN_00843220(this,param_1,&local_2c);
    }
    else {
      ExceptionList = &local_c;
      local_2c = local_20;
      _strncpy(local_20,"desire_kiss",0xb);
      local_28 = 0xb;
      local_2c[0xb] = '\0';
      local_4 = 1;
      FUN_00843220(this,param_1,&local_2c);
    }
  }
  else {
    local_2c = local_20;
    ExceptionList = &local_c;
    _strncpy(local_2c,"desire_fight",0xc);
    local_28 = 0xc;
    local_2c[0xc] = '\0';
    local_4 = 0;
    FUN_00843220(this,param_1,&local_2c);
  }
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_0083efc0 @ 0083efc0 ////

undefined4 * __thiscall FUN_0083efc0(void *this,undefined4 *param_1)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce69c8;
  local_c = ExceptionList;
  local_28 = 0;
  local_20[0] = '\0';
  if (*(char *)((int)this + 0x158) == '\0') {
    local_24 = 0x14;
    if (*(char *)((int)this + 0x159) == '\0') {
      local_2c = local_20;
      ExceptionList = &local_c;
      _strncpy(local_20,"desire_talk_heading",0x13);
      local_28 = 0x13;
      local_2c[0x13] = '\0';
      local_4 = 2;
      FUN_00843220(this,param_1,&local_2c);
    }
    else {
      ExceptionList = &local_c;
      local_2c = local_20;
      _strncpy(local_20,"desire_kiss_heading",0x13);
      local_28 = 0x13;
      local_2c[0x13] = '\0';
      local_4 = 1;
      FUN_00843220(this,param_1,&local_2c);
    }
  }
  else {
    local_2c = local_20;
    local_24 = 0x20;
    ExceptionList = &local_c;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"desire_fight_heading",0x14);
    local_28 = 0x14;
    local_2c[0x14] = '\0';
    local_4 = 0;
    FUN_00843220(this,param_1,&local_2c);
  }
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_0083f120 @ 0083f120 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0083f120(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte local_24 [12];
  undefined4 uStack_18;
  float local_8;
  
  uStack_18 = 0x83f13e;
  bVar1 = FUN_0059c510(*(int *)((int)this + 0x154));
  if (bVar1) {
    local_8 = _DAT_00e5cd1c + *(float *)((int)this + 0xe0);
    if (0.0 <= local_8) {
      if (1.0 < local_8) {
        local_8 = 1.0;
      }
    }
    else {
      local_8 = 0.0;
    }
    pbVar3 = local_24;
    local_24[0] = 0;
    uVar4 = 0;
    uVar5 = 0x14;
    FUN_004015d0(&stack0xffffffd0,"talk",4);
    puVar2 = FUN_00837e70(pbVar3,uVar4,uVar5);
    if ((float)puVar2[8] < local_8) {
      pbVar3 = local_24;
      local_24[0] = 0;
      uVar4 = 0;
      uVar5 = 0x14;
      FUN_004015d0(&stack0xffffffd0,"talk",4);
      puVar2 = FUN_00837e70(pbVar3,uVar4,uVar5);
      local_8 = (float)puVar2[8];
    }
    uStack_18 = 0x83f20e;
    FUN_00407070(param_1,local_8);
    return param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 0xe0);
  return param_1;
}


//// FUNCTION DesireTalk_Constructor @ 0083f230 ////

undefined4 * __thiscall DesireTalk_Constructor(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce69fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 **)((int)this + 0x134) = (undefined4 *)((int)this + 0x128);
  *(undefined4 *)((int)this + 0x128) = &PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  piVar3 = (int *)((int)this + 0x140);
  *(undefined ***)this = &PTR_FUN_00d5f734;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(int **)((int)this + 0x14c) = piVar3;
  *piVar3 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined1 *)((int)this + 0x158) = 0;
  *(undefined1 *)((int)this + 0x159) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar3 + 4))();
  *(int *)((int)this + 0x154) = param_1;
  (**(code **)*piVar3)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"talk",4);
  local_28 = 4;
  local_2c[4] = '\0';
  local_4._0_1_ = 2;
  FUN_00838070(this,&local_2c,0,0,0,0,*(undefined4 *)((int)this + 0x154));
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
  iVar1 = *(int *)(iVar1 + 100);
  puVar6 = (undefined4 *)((int)this + 100);
  piVar3 = &param_1;
  puVar5 = puVar6;
  iVar2 = FUN_00598b60(*(int *)((int)this + 0x100));
  piVar3 = (int *)FUN_00441680((void *)(iVar2 + 0x60),piVar3,puVar5);
  if (*piVar3 == iVar1) {
    fVar4 = FUN_00990e30(0.0,*(float *)(*(int *)((int)this + 0x124) + 0x20));
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
      *(float *)((int)this + 0xe0) = (float)fVar4;
    }
    else {
      *(undefined4 *)((int)this + 0xe0) = 0;
    }
  }
  else {
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x60),puVar6);
    *(int *)((int)this + 0xe0) = *piVar3;
  }
  *(undefined1 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0x10c) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083f400 @ 0083f400 ////

undefined4 * __thiscall FUN_0083f400(void *this,byte param_1)

{
  FUN_0083f420(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0083f420 @ 0083f420 ////

void __fastcall FUN_0083f420(undefined4 *param_1)

{
  param_1[0x50] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x52] = param_1[0x51];
  }
  if (param_1[0x51] != 0) {
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x52] = param_1[0x51];
  }
  if (param_1[0x51] != 0) {
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  FUN_00834f70(param_1);
  return;
}


//// FUNCTION FUN_0083f4a0 @ 0083f4a0 ////

float10 __fastcall FUN_0083f4a0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x128);
}


//// FUNCTION FUN_0083f4b0 @ 0083f4b0 ////

void __fastcall FUN_0083f4b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x144);
  if (iVar1 == 1) {
    if (DAT_00e5cd4c < *(float *)(param_1 + 0x128)) {
      *(float *)(param_1 + 0x128) = DAT_00e5cd4c;
      return;
    }
  }
  else if (iVar1 == 2) {
    if (*(float *)(param_1 + 0x128) < DAT_00e5cd50) {
      *(float *)(param_1 + 0x128) = DAT_00e5cd50;
      return;
    }
    if (DAT_00e5cd54 < *(float *)(param_1 + 0x128)) {
      *(float *)(param_1 + 0x128) = DAT_00e5cd54;
      return;
    }
  }
  else if ((iVar1 == 3) && (*(float *)(param_1 + 0x128) < DAT_00e5cd58)) {
    *(float *)(param_1 + 0x128) = DAT_00e5cd58;
  }
  return;
}


//// FUNCTION FUN_0083f550 @ 0083f550 ////

void __thiscall FUN_0083f550(void *this,float param_1,float param_2)

{
  float fVar1;
  
  if (param_1 < param_2) {
    fVar1 = *(float *)(*(int *)((int)this + 0x124) + 0x2c) + *(float *)((int)this + 0xe0);
    if (fVar1 < 0.0) {
      *(undefined4 *)((int)this + 0xe0) = 0;
      *(undefined4 *)((int)this + 0x144) = 1;
      return;
    }
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    *(float *)((int)this + 0xe0) = fVar1;
    *(undefined4 *)((int)this + 0x144) = 1;
  }
  return;
}


//// FUNCTION FUN_0083f5f0 @ 0083f5f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0083f5f0(void *param_1)

{
  int iVar1;
  void *this;
  float *pfVar2;
  void *pvVar3;
  undefined4 uVar4;
  float fVar5;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  this = (void *)(**(code **)(**(int **)((int)param_1 + 0x140) + 0x27c))();
  iVar1 = *(int *)((int)param_1 + 0x144);
  *(undefined4 *)((int)param_1 + 0x144) = 0;
  pfVar2 = (float *)CProjectCastEffect_GetEffectiveLowerMoodThreshold(this,&uStack_c);
  fVar5 = *pfVar2;
  fStack_10 = fVar5;
  pvVar3 = (void *)FUN_004725b0((int)this);
  uVar4 = FUN_00566f00(pvVar3,fVar5);
  if ((char)uVar4 == '\0') {
    pfVar2 = (float *)CProjectCastEffect_GetEffectiveLowerMoodThreshold(this,&uStack_c);
    fStack_10 = *pfVar2;
    pfVar2 = (float *)CProjectCastEffect_GetEffectiveUpperMoodThreshold(this,&uStack_8);
    fStack_10 = *pfVar2 - fStack_10;
    if (0.0 <= fStack_10) {
      if (1.0 < fStack_10) {
        fStack_10 = 1.0;
      }
    }
    else {
      fStack_10 = 0.0;
    }
    pfVar2 = (float *)CProjectCastEffect_GetEffectiveLowerMoodThreshold(this,&fStack_4);
    fStack_10 = fStack_10 * 0.5 + *pfVar2;
    if (0.0 <= fStack_10) {
      if (1.0 < fStack_10) {
        fStack_10 = 1.0;
      }
    }
    else {
      fStack_10 = 0.0;
    }
    fVar5 = fStack_10;
    pvVar3 = (void *)FUN_004725b0((int)this);
    uVar4 = FUN_00566f00(pvVar3,fVar5);
    if ((char)uVar4 == '\0') {
      pfVar2 = &fStack_4;
      pvVar3 = (void *)FUN_00473120((int)this);
      pfVar2 = (float *)FUN_00473370(pvVar3,pfVar2);
      fStack_10 = *pfVar2;
      pfVar2 = &fStack_4;
      pvVar3 = (void *)FUN_00473120((int)this);
      pfVar2 = (float *)FUN_00473210(pvVar3,pfVar2);
      FUN_0083f550(param_1,1.0 - *pfVar2,(1.0 - fStack_10) + _DAT_0104ecf0);
      pfVar2 = &fStack_4;
      pvVar3 = (void *)FUN_00473120((int)this);
      pfVar2 = (float *)FUN_004732e0(pvVar3,pfVar2);
      fStack_10 = *pfVar2;
      pfVar2 = &fStack_4;
      pvVar3 = (void *)FUN_00473120((int)this);
      pfVar2 = (float *)FUN_004731e0(pvVar3,pfVar2);
      FUN_0083f550(param_1,1.0 - *pfVar2,(1.0 - fStack_10) + _DAT_0104ecf0);
      pfVar2 = (float *)FUN_00472ef0(this,&fStack_4,0);
      FUN_0083f550(param_1,*pfVar2,DAT_00e5cd40);
      pfVar2 = (float *)FUN_00472ef0(this,&fStack_4,1);
      FUN_0083f550(param_1,*pfVar2,DAT_00e5cd40);
      pfVar2 = (float *)FUN_00472ef0(this,&fStack_4,2);
      FUN_0083f550(param_1,*pfVar2,DAT_00e5cd40);
      pfVar2 = (float *)FUN_00472ef0(this,&fStack_4,3);
      FUN_0083f550(param_1,*pfVar2,DAT_00e5cd40);
    }
    else {
      FUN_00472920((void *)((int)param_1 + 0xe0),
                   _DAT_00e5cd44 * *(float *)(*(int *)((int)param_1 + 0x124) + 0x2c));
      *(undefined4 *)((int)param_1 + 0x144) = 2;
    }
  }
  else if (iVar1 == 3) {
    FUN_00472920((void *)((int)param_1 + 0xe0),
                 _DAT_00e5cd48 * *(float *)(*(int *)((int)param_1 + 0x124) + 0x2c));
    *(undefined4 *)((int)param_1 + 0x144) = 3;
  }
  else {
    FUN_00407070(&fStack_10,1.0);
    *(float *)((int)param_1 + 0xe0) = fStack_10;
    *(undefined4 *)((int)param_1 + 0x144) = 3;
  }
  if (*(int *)((int)param_1 + 0x144) == 0) {
    *(undefined4 *)((int)param_1 + 0xe0) = 0;
    *(undefined4 *)((int)param_1 + 0x128) = 0;
  }
  else {
    FUN_0083f4b0((int)param_1);
  }
  if (*(float *)(*(int *)((int)param_1 + 0x124) + 0x20) < *(float *)((int)param_1 + 0xe0)) {
    fVar5 = *(float *)(*(int *)((int)param_1 + 0x124) + 0x20);
    if (fVar5 < 0.0) {
      *(undefined4 *)((int)param_1 + 0xe0) = 0;
      return;
    }
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    *(float *)((int)param_1 + 0xe0) = fVar5;
  }
  return;
}


//// FUNCTION DesireTantrum_Constructor @ 0083f940 ////

undefined4 * __thiscall DesireTantrum_Constructor(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6a2e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 300);
  *(undefined ***)this = &PTR_FUN_00d5f784;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(int **)((int)this + 0x138) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x140) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x140) = param_1;
  (**(code **)*piVar1)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"tantrum",7);
  local_28 = 7;
  local_2c[7] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar2 = FUN_00598cd0(param_1);
  FUN_00838070(this,&local_2c,0,0,0,iVar2,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0x144) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083fa50 @ 0083fa50 ////

undefined4 * __thiscall FUN_0083fa50(void *this,byte param_1)

{
  FUN_0083fa70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0083fa70 @ 0083fa70 ////

void __fastcall FUN_0083fa70(undefined4 *param_1)

{
  param_1[0x4b] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x4d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4d] = param_1[0x4c];
  }
  if (param_1[0x4c] != 0) {
    *(undefined4 *)(param_1[0x4c] + 4) = param_1[0x4d];
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  if ((undefined4 *)param_1[0x4d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4d] = param_1[0x4c];
  }
  if (param_1[0x4c] != 0) {
    *(undefined4 *)(param_1[0x4c] + 4) = param_1[0x4d];
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_0083fb50 @ 0083fb50 ////

void __fastcall FUN_0083fb50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  float *pfVar3;
  char **ppcVar4;
  int iVar5;
  int *local_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  char acStack_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6a48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005998e0(*(int *)(param_1 + 0x100));
  local_34 = *(int **)(iVar2 + 0x25c);
  iVar2 = FUN_00ace790(local_34,0,&TM::TMActivityManager::RTTI_Type_Descriptor,
                       &TM::CAssetActivityManager::RTTI_Type_Descriptor,0);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x2e0);
    (**(code **)(*(int *)(param_1 + 0x140) + 4))();
    *(undefined4 *)(param_1 + 0x154) = uVar1;
    (*(code *)**(undefined4 **)(param_1 + 0x140))();
    (**(code **)(**(int **)(param_1 + 0x154) + 0x150))(*(undefined4 *)(param_1 + 0x100));
    pcStack_30 = acStack_24;
    acStack_24[0] = '\0';
    uStack_2c = 0;
    uStack_28 = 0x14;
    _strncpy(pcStack_30,"Lot",3);
    uStack_2c = 3;
    pcStack_30[3] = '\0';
    iVar5 = 0;
    ppcVar4 = &pcStack_30;
    puStack_8 = (undefined1 *)0x0;
    this = (void *)FUN_00577370(*(int *)(param_1 + 0x13c));
    FUN_00442690(this,ppcVar4,iVar5);
    puStack_8 = (undefined1 *)0xffffffff;
    if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_30);
    }
    pfVar3 = (float *)(**(code **)(**(int **)(iVar2 + 0x2e0) + 0xf0))(&local_34);
    FUN_009757a0((void *)local_34[0x85],(byte *)"ai_progress",*pfVar3,0);
    if (*(char *)(param_1 + 0x158) == '\0') {
      FUN_0052f690(*(int *)(param_1 + 0x154));
      *(undefined1 *)(param_1 + 0x158) = 1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0083fcb0 @ 0083fcb0 ////

void __fastcall FUN_0083fcb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5f7dc;
  param_1[0x50] = &PTR_FUN_00d16bec;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x52] = param_1[0x51];
  }
  if (param_1[0x51] != 0) {
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x52] = param_1[0x51];
  }
  if (param_1[0x51] != 0) {
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_0083fdb0 @ 0083fdb0 ////

undefined4 * __thiscall FUN_0083fdb0(void *this,byte param_1)

{
  FUN_0083fcb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0083fdd0 @ 0083fdd0 ////

undefined4 * __thiscall FUN_0083fdd0(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *local_8c;
  int local_88;
  uint local_84;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6a83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005998e0(*(int *)((int)this + 0x100));
  iVar1 = FUN_00ace790(*(int **)(iVar1 + 0x274),0,&TM::TMActionExplainer::RTTI_Type_Descriptor,
                       &TM::CAssetActionExplainer::RTTI_Type_Descriptor,0);
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_008bc6c0(iVar1), piVar2 != (int *)0x0)) {
    puVar3 = FUN_0040d6b0(local_4c,"desire_",(undefined4 *)((int)this + 100));
    local_4 = 0;
    puVar3 = FUN_004312e0(local_6c,puVar3,"_named");
    local_4._0_1_ = 1;
    FUN_00843220(this,&local_8c,puVar3);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    local_4._0_1_ = 3;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (local_88 != 0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))();
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_0056b730(&local_8c,*puVar3,L"%building%");
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      FUN_00421290(param_1,&local_8c);
      if (local_84 < 0xb) {
        ExceptionList = local_c;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    local_4 = 0xffffffff;
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
  }
  FUN_00843cf0(this,param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0083ff80 @ 0083ff80 ////

undefined4 * __thiscall FUN_0083ff80(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *local_8c;
  int local_88;
  uint local_84;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6ab3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005998e0(*(int *)((int)this + 0x100));
  iVar1 = FUN_00ace790(*(int **)(iVar1 + 0x274),0,&TM::TMActionExplainer::RTTI_Type_Descriptor,
                       &TM::CAssetActionExplainer::RTTI_Type_Descriptor,0);
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_008bc6c0(iVar1), piVar2 != (int *)0x0)) {
    puVar3 = FUN_0040d6b0(local_4c,"desire_",(undefined4 *)((int)this + 100));
    local_4 = 0;
    puVar3 = FUN_004312e0(local_6c,puVar3,"_named_heading");
    local_4._0_1_ = 1;
    FUN_00843220(this,&local_8c,puVar3);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    local_4._0_1_ = 3;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (local_88 != 0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))();
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_0056b730(&local_8c,*puVar3,L"%building%");
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      FUN_00421290(param_1,&local_8c);
      if (local_84 < 0xb) {
        ExceptionList = local_c;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    local_4 = 0xffffffff;
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
  }
  FUN_00843d70(this,param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION DesireTaskBuilder_Constructor @ 00840130 ////

undefined4 * __thiscall DesireTaskBuilder_Constructor(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  char **ppcVar8;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6b0c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008433b0(this);
  piVar2 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5f7dc;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  piVar1 = (int *)((int)this + 0x140);
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(int **)((int)this + 0x14c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16bec;
  *(undefined4 *)((int)this + 0x154) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  (**(code **)(*piVar2 + 4))();
  *(int **)((int)this + 0x13c) = param_1;
  (**(code **)*piVar2)();
  local_6c = local_60;
  *(undefined1 *)((int)this + 0x10f) = 1;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"task_builder",0xc);
  local_68 = 0xc;
  local_6c[0xc] = '\0';
  local_4._0_1_ = 3;
  FUN_00838070(this,&local_6c,0,0,0,0,param_1);
  local_4._0_1_ = 2;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  *(undefined1 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0x10e) = 1;
  fVar7 = *(float *)(*(int *)((int)this + 0x124) + 0x24);
  if (0.0 <= fVar7) {
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = 0.0;
  }
  *(float *)((int)this + 0xe0) = fVar7;
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x27c))();
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*piVar2 + 0x27c))();
      iVar3 = FUN_00472a30(iVar3);
      if (iVar3 != 0) {
        local_6c = local_60;
        local_60[0] = '\0';
        local_68 = 0;
        local_64 = 0x14;
        _strncpy(local_6c,"star",4);
        local_68 = 4;
        local_6c[4] = '\0';
        local_4._0_1_ = 4;
        FUN_00558a50(DAT_00f88624,&local_6c,(undefined4 *)0x1);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        pcStack_2c = acStack_20;
        acStack_20[0] = '\0';
        uStack_28 = 0;
        uStack_24 = 0x14;
        _strncpy(pcStack_2c,"grudge_staff_job",0x10);
        uStack_28 = 0x10;
        pcStack_2c[0x10] = '\0';
        pcStack_4c = acStack_40;
        acStack_40[0] = '\0';
        uStack_48 = 0;
        uStack_44 = 0x14;
        _strncpy(pcStack_4c,"forgivestaffjob",0xf);
        uStack_48 = 0xf;
        pcStack_4c[0xf] = '\0';
        local_6c = local_60;
        local_60[0] = '\0';
        local_68 = 0;
        local_64 = 0x14;
        _strncpy(local_6c,"dislikestaffjob",0xf);
        local_68 = 0xf;
        local_6c[0xf] = '\0';
        pvVar4 = DAT_00f88624;
        ppcVar8 = &pcStack_2c;
        local_4._0_1_ = 7;
        fVar5 = FUN_00558610(DAT_00f88624,&pcStack_4c,0.0);
        fVar7 = (float)fVar5;
        fVar5 = FUN_00558610(pvVar4,&local_6c,0.0);
        fVar6 = (float)fVar5;
        iVar3 = (**(code **)(*piVar2 + 0x27c))();
        pvVar4 = (void *)FUN_00472a30(iVar3);
        CGrudges_AddOrRefreshGrudge(pvVar4,fVar6,fVar7,ppcVar8);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_4c);
        }
        local_4._0_1_ = 2;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_2c);
        }
      }
    }
  }
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x154) = 0;
  (**(code **)*piVar1)();
  *(undefined1 *)((int)this + 0x158) = 0;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_008404f0 @ 008404f0 ////

void __fastcall FUN_008404f0(int *param_1)

{
  TMBaseDesire_TickShared(param_1);
  if ((void *)param_1[0x4f] != (void *)0x0) {
    FUN_00461d40((void *)param_1[0x4f],param_1[0x40]);
  }
  return;
}


//// FUNCTION FUN_00840510 @ 00840510 ////

void __thiscall FUN_00840510(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x128) + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x128))();
  return;
}


//// FUNCTION DesireTaskJanitor_Constructor @ 00840640 ////

undefined4 * __thiscall DesireTaskJanitor_Constructor(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  char **ppcVar7;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6b7e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5f894;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  local_4 = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1b118;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"task_janitor",0xc);
  local_68 = 0xc;
  local_6c[0xc] = '\0';
  local_4._0_1_ = 2;
  FUN_00838070(this,&local_6c,0,0,0,0,param_1);
  local_4._0_1_ = 1;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  *(undefined4 *)((int)this + 0xe0) = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = 0;
  (**(code **)*piVar1)();
  *(undefined1 *)((int)this + 0x10e) = 1;
  fVar6 = *(float *)(*(int *)((int)this + 0x124) + 0x24);
  if (0.0 <= fVar6) {
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
  }
  else {
    fVar6 = 0.0;
  }
  *(float *)((int)this + 0xe0) = fVar6;
  piVar1 = (int *)FUN_00ace790(param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar1 + 0x27c))();
      iVar2 = FUN_00472a30(iVar2);
      if (iVar2 != 0) {
        local_6c = local_60;
        local_60[0] = '\0';
        local_68 = 0;
        local_64 = 0x14;
        _strncpy(local_6c,"star",4);
        local_68 = 4;
        local_6c[4] = '\0';
        local_4._0_1_ = 3;
        FUN_00558a50(DAT_00f88624,&local_6c,(undefined4 *)0x1);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        pcStack_2c = acStack_20;
        acStack_20[0] = '\0';
        uStack_28 = 0;
        uStack_24 = 0x14;
        _strncpy(pcStack_2c,"grudge_staff_job",0x10);
        uStack_28 = 0x10;
        pcStack_2c[0x10] = '\0';
        pcStack_4c = acStack_40;
        acStack_40[0] = '\0';
        uStack_48 = 0;
        uStack_44 = 0x14;
        _strncpy(pcStack_4c,"forgivestaffjob",0xf);
        uStack_48 = 0xf;
        pcStack_4c[0xf] = '\0';
        local_6c = local_60;
        local_60[0] = '\0';
        local_68 = 0;
        local_64 = 0x14;
        _strncpy(local_6c,"dislikestaffjob",0xf);
        local_68 = 0xf;
        local_6c[0xf] = '\0';
        pvVar3 = DAT_00f88624;
        ppcVar7 = &pcStack_2c;
        local_4 = CONCAT31(local_4._1_3_,6);
        fVar4 = FUN_00558610(DAT_00f88624,&pcStack_4c,0.0);
        fVar6 = (float)fVar4;
        fVar4 = FUN_00558610(pvVar3,&local_6c,0.0);
        fVar5 = (float)fVar4;
        iVar2 = (**(code **)(*piVar1 + 0x27c))();
        pvVar3 = (void *)FUN_00472a30(iVar2);
        CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppcVar7);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_4c);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_2c);
        }
      }
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00840970 @ 00840970 ////

undefined4 * __thiscall FUN_00840970(void *this,byte param_1)

{
  FUN_00840990(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00840990 @ 00840990 ////

void __fastcall FUN_00840990(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d1b118;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_00840bc0 @ 00840bc0 ////

void __fastcall FUN_00840bc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5f8ec;
  param_1[0x4b] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4d] = param_1[0x4c];
  }
  if (param_1[0x4c] != 0) {
    *(undefined4 *)(param_1[0x4c] + 4) = param_1[0x4d];
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  if ((undefined4 *)param_1[0x4d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4d] = param_1[0x4c];
  }
  if (param_1[0x4c] != 0) {
    *(undefined4 *)(param_1[0x4c] + 4) = param_1[0x4d];
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_00840c50 @ 00840c50 ////

undefined4 * __thiscall FUN_00840c50(void *this,byte param_1)

{
  FUN_00840bc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00840c70 @ 00840c70 ////

undefined4 * __thiscall FUN_00840c70(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *local_8c;
  int local_88;
  uint local_84;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6bd3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005998e0(*(int *)((int)this + 0x100));
  iVar1 = FUN_00ace790(*(int **)(iVar1 + 0x274),0,&TM::TMActionExplainer::RTTI_Type_Descriptor,
                       &TM::CAssetActionExplainer::RTTI_Type_Descriptor,0);
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_008bc6c0(iVar1), piVar2 != (int *)0x0)) {
    puVar3 = FUN_0040d6b0(local_4c,"desire_",(undefined4 *)((int)this + 100));
    local_4 = 0;
    puVar3 = FUN_004312e0(local_6c,puVar3,"_named");
    local_4._0_1_ = 1;
    FUN_00843220(this,&local_8c,puVar3);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    local_4._0_1_ = 3;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (local_88 != 0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))();
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_0056b730(&local_8c,*puVar3,L"%building%");
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      FUN_00421290(param_1,&local_8c);
      if (local_84 < 0xb) {
        ExceptionList = local_c;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    local_4 = 0xffffffff;
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
  }
  FUN_00843cf0(this,param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00840e20 @ 00840e20 ////

undefined4 * __thiscall FUN_00840e20(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *local_8c;
  int local_88;
  uint local_84;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6c03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005998e0(*(int *)((int)this + 0x100));
  iVar1 = FUN_00ace790(*(int **)(iVar1 + 0x274),0,&TM::TMActionExplainer::RTTI_Type_Descriptor,
                       &TM::CAssetActionExplainer::RTTI_Type_Descriptor,0);
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_008bc6c0(iVar1), piVar2 != (int *)0x0)) {
    puVar3 = FUN_0040d6b0(local_4c,"desire_",(undefined4 *)((int)this + 100));
    local_4 = 0;
    puVar3 = FUN_004312e0(local_6c,puVar3,"_named_heading");
    local_4._0_1_ = 1;
    FUN_00843220(this,&local_8c,puVar3);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    local_4._0_1_ = 3;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (local_88 != 0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))();
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_0056b730(&local_8c,*puVar3,L"%building%");
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      FUN_00421290(param_1,&local_8c);
      if (local_84 < 0xb) {
        ExceptionList = local_c;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    local_4 = 0xffffffff;
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
  }
  FUN_00843d70(this,param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION DesireTaskRepairman_Constructor @ 00840fd0 ////

undefined4 * __thiscall DesireTaskRepairman_Constructor(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  char **ppcVar7;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6c4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 300);
  *(undefined ***)this = &PTR_FUN_00d5f8ec;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(int **)((int)this + 0x138) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x140) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x140) = param_1;
  (**(code **)*piVar1)();
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"task_repairman",0xe);
  local_68 = 0xe;
  local_6c[0xe] = '\0';
  local_4._0_1_ = 2;
  FUN_00838070(this,&local_6c,0,0,0,0,param_1);
  local_4._0_1_ = 1;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  fVar6 = *(float *)(*(int *)((int)this + 0x124) + 0x24);
  if (0.0 <= fVar6) {
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
  }
  else {
    fVar6 = 0.0;
  }
  *(float *)((int)this + 0xe0) = fVar6;
  *(undefined1 *)((int)this + 0x9c) = 0;
  piVar1 = (int *)FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar1 + 0x27c))();
      iVar2 = FUN_00472a30(iVar2);
      if (iVar2 != 0) {
        local_6c = local_60;
        local_60[0] = '\0';
        local_68 = 0;
        local_64 = 0x14;
        _strncpy(local_6c,"star",4);
        local_68 = 4;
        local_6c[4] = '\0';
        local_4._0_1_ = 3;
        FUN_00558a50(DAT_00f88624,&local_6c,(undefined4 *)0x1);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        pcStack_2c = acStack_20;
        acStack_20[0] = '\0';
        uStack_28 = 0;
        uStack_24 = 0x14;
        _strncpy(pcStack_2c,"grudge_staff_job",0x10);
        uStack_28 = 0x10;
        pcStack_2c[0x10] = '\0';
        pcStack_4c = acStack_40;
        acStack_40[0] = '\0';
        uStack_48 = 0;
        uStack_44 = 0x14;
        _strncpy(pcStack_4c,"forgivestaffjob",0xf);
        uStack_48 = 0xf;
        pcStack_4c[0xf] = '\0';
        local_6c = local_60;
        local_60[0] = '\0';
        local_68 = 0;
        local_64 = 0x14;
        _strncpy(local_6c,"dislikestaffjob",0xf);
        local_68 = 0xf;
        local_6c[0xf] = '\0';
        pvVar3 = DAT_00f88624;
        ppcVar7 = &pcStack_2c;
        local_4 = CONCAT31(local_4._1_3_,6);
        fVar4 = FUN_00558610(DAT_00f88624,&pcStack_4c,0.0);
        fVar6 = (float)fVar4;
        fVar4 = FUN_00558610(pvVar3,&local_6c,0.0);
        fVar5 = (float)fVar4;
        iVar2 = (**(code **)(*piVar1 + 0x27c))();
        pvVar3 = (void *)FUN_00472a30(iVar2);
        CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppcVar7);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_4c);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_2c);
        }
      }
    }
  }
  *(undefined1 *)((int)this + 0x128) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION DesireTrailerTantrum_Constructor @ 00841380 ////

undefined4 * __thiscall
DesireTrailerTantrum_Constructor(void *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_00ce6c7e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5f93c;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"trailertantrum",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00838070(this,&local_2c,0,0,0,param_2,*(undefined4 *)((int)this + 0x13c));
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00841480 @ 00841480 ////

undefined4 * __thiscall FUN_00841480(void *this,byte param_1)

{
  FUN_008414a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008414a0 @ 008414a0 ////

void __fastcall FUN_008414a0(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_008415a0 @ 008415a0 ////

undefined4 * __thiscall FUN_008415a0(void *this,undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte abStack_28 [8];
  undefined4 uStack_20;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x0;
  uVar3 = FUN_00599470(*(int *)((int)this + 0x100));
  (**(code **)(*(int *)((int)this + 0x128) + 4))();
  *(undefined4 *)((int)this + 0x13c) = uVar3;
  (*(code *)**(undefined4 **)((int)this + 0x128))();
  iVar2 = *(int *)((int)this + 0x13c);
  if (iVar2 != 0) {
    local_4 = &stack0xffffffcc;
    pbVar5 = abStack_28;
    abStack_28[0] = 0;
    uVar6 = 0;
    uVar7 = 0x14;
    FUN_004015d0(&stack0xffffffcc,*(char **)(iVar2 + 100),*(uint *)(iVar2 + 0x68));
    puVar4 = FUN_00837e70(pbVar5,uVar6,uVar7);
    fVar1 = *(float *)(*(int *)((int)this + 0x13c) + 0xe8);
    fVar1 = fVar1 + fVar1;
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    *(float *)(*(int *)((int)this + 0x13c) + 0xe8) = fVar1;
    iVar2 = *(int *)((int)this + 0x13c);
    if (DAT_00e5cb54 < *(float *)(iVar2 + 0xe8)) {
      FUN_00407070(&local_4,DAT_00e5cb54);
      *(undefined1 **)(iVar2 + 0xe8) = local_4;
    }
    if (puVar4 != (undefined4 *)0x0) {
      *param_1 = param_1 + 3;
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      uStack_20 = 0x8416ac;
      FUN_004015d0(param_1,(char *)puVar4[0x10],puVar4[0x11]);
      return param_1;
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  uStack_20 = 0x8416d8;
  FUN_004015d0(param_1,"",0);
  return param_1;
}


//// FUNCTION FUN_008417b0 @ 008417b0 ////

undefined4 * __thiscall FUN_008417b0(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6cb8;
  local_c = ExceptionList;
  iVar1 = *(int *)((int)this + 0x13c);
  if (iVar1 == 0) {
    ExceptionList = &local_c;
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(param_1,(wchar_t *)&lpCaption_00d16918,uVar2);
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_004073f0(&local_2c,"DESIRE_UNFULFILLED_",0x13);
    FUN_004073f0(&local_2c,*(char **)(iVar1 + 100),*(size_t *)(iVar1 + 0x68));
    FUN_00843220(this,param_1,&local_2c);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008418a0 @ 008418a0 ////

undefined4 * __thiscall FUN_008418a0(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6cd8;
  local_c = ExceptionList;
  iVar1 = *(int *)((int)this + 0x13c);
  if (iVar1 == 0) {
    ExceptionList = &local_c;
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(param_1,(wchar_t *)&lpCaption_00d16918,uVar2);
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_004073f0(&local_2c,"DESIRE_UNFULFILLED_",0x13);
    FUN_004073f0(&local_2c,*(char **)(iVar1 + 100),*(size_t *)(iVar1 + 0x68));
    FUN_00843220(this,param_1,&local_2c);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION DesireUnfulfilled_Constructor @ 00841990 ////

undefined4 * __thiscall DesireUnfulfilled_Constructor(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6d1c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  *(undefined ***)this = &PTR_FUN_00d5f9ac;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x134) = (undefined4 *)((int)this + 0x128);
  *(undefined4 *)((int)this + 0x128) = &PTR_FUN_00d165cc;
  *(undefined4 *)((int)this + 0x13c) = 0;
  piVar1 = (int *)((int)this + 0x140);
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(int **)((int)this + 0x14c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x154) = 0;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"unfulfilled",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4._0_1_ = 3;
  piVar3 = param_1;
  iVar2 = FUN_00598cd0(param_1);
  FUN_00838070(this,&local_2c,0,0,0,iVar2,piVar3);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x9c) = 0;
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x154) = param_1;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00841aa0 @ 00841aa0 ////

undefined4 * __thiscall FUN_00841aa0(void *this,byte param_1)

{
  FUN_00841ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00841ac0 @ 00841ac0 ////

void __fastcall FUN_00841ac0(undefined4 *param_1)

{
  param_1[0x50] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x52] = param_1[0x51];
  }
  if (param_1[0x51] != 0) {
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x52] = param_1[0x51];
  }
  if (param_1[0x51] != 0) {
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4a] = &PTR_FUN_00d165cc;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_00841bb0 @ 00841bb0 ////

void __fastcall FUN_00841bb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0059bb90(*(int *)(param_1 + 0x13c));
  if (iVar1 != 0) {
    iVar1 = **(int **)(param_1 + 0x13c);
    uVar3 = 1;
    uVar2 = FUN_0059bb90((int)*(int **)(param_1 + 0x13c));
    (**(code **)(iVar1 + 0x128))(uVar2,uVar3);
  }
  return;
}


//// FUNCTION FUN_00841be0 @ 00841be0 ////

undefined4 * __thiscall FUN_00841be0(void *this,undefined4 *param_1)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  
  this_00 = (void *)FUN_0059bb90(*(int *)((int)this + 0x13c));
  if (this_00 != (void *)0x0) {
    iVar1 = FUN_0059c6e0(*(void **)((int)this + 0x13c),'\0');
    uVar2 = FUN_00430d70(this_00,iVar1);
    if ((char)uVar2 == '\0') {
      FUN_00407070(param_1,*(float *)(*(int *)((int)this + 0x124) + 0x28));
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}


//// FUNCTION DesireUpdateCostume_Constructor @ 00841c40 ////

undefined4 * __thiscall DesireUpdateCostume_Constructor(void *this,undefined4 param_1)

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
  puStack_8 = &LAB_00ce6d4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5f9fc;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"updatecostume",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00841d30 @ 00841d30 ////

undefined4 * __thiscall FUN_00841d30(void *this,byte param_1)

{
  FUN_00841d50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00841d50 @ 00841d50 ////

void __fastcall FUN_00841d50(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION DesireUrgent_Constructor @ 00841e80 ////

undefined4 * __thiscall DesireUrgent_Constructor(void *this,undefined4 param_1)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6d70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  local_2c = local_20;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d5fa54;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"urgent",6);
  local_28 = 6;
  local_2c[6] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00841f50 @ 00841f50 ////

undefined4 * __thiscall FUN_00841f50(void *this,byte param_1)

{
  thunk_FUN_008381f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION DesireVisitTrailer_Constructor @ 00841fb0 ////

undefined4 * __thiscall DesireVisitTrailer_Constructor(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  int iVar3;
  char **ppcVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6db4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5faa4;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x13c) = 0;
  piVar2 = (int *)((int)this + 0x140);
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(int **)((int)this + 0x14c) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d26fd0;
  *(undefined4 *)((int)this + 0x154) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  (**(code **)(*piVar2 + 4))();
  *(int *)((int)this + 0x154) = param_2;
  (**(code **)*piVar2)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"visittrailer",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  ppcVar4 = &local_2c;
  local_4._0_1_ = 3;
  this_00 = (void *)FUN_00529ef0(param_2);
  iVar3 = FUN_008b2a10(this_00,ppcVar4);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"visittrailer",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00838070(this,&local_2c,0,0,0,iVar3,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  *(undefined4 *)((int)this + 0xe0) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00842140 @ 00842140 ////

undefined4 * __thiscall FUN_00842140(void *this,byte param_1)

{
  FUN_00842160(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00842160 @ 00842160 ////

void __fastcall FUN_00842160(undefined4 *param_1)

{
  param_1[0x50] = &PTR_FUN_00d26fd0;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x52] = param_1[0x51];
  }
  if (param_1[0x51] != 0) {
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x52] = param_1[0x51];
  }
  if (param_1[0x51] != 0) {
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4a] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_00842250 @ 00842250 ////

void __fastcall FUN_00842250(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  *(int *)(param_1 + 0x140) = (int)uVar1 + 0x6a4;
  return;
}


//// FUNCTION FUN_00842270 @ 00842270 ////

void __fastcall FUN_00842270(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  if (*(int *)(param_1 + 0x140) != 0) {
    uVar1 = FUN_00990ae0(param_1,param_2);
    if (*(uint *)(param_1 + 0x140) < (uint)uVar1) {
      FUN_00a39340(*(int *)(*(int *)(*(int *)(param_1 + 0x13c) + 0x11c) + 0x78),&LAB_00463eb0);
      *(undefined4 *)(param_1 + 0x140) = 0;
    }
  }
  return;
}


//// FUNCTION DesireVomit_Constructor @ 008422c0 ////

undefined4 * __thiscall DesireVomit_Constructor(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6dde;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5fb04;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d5f044;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  iVar2 = FUN_00598cd0(param_1);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"vomit",5);
  local_28 = 5;
  local_2c[5] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00838070(this,&local_2c,0,0,0,iVar2,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined1 *)((int)this + 0x10e) = 1;
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008423e0 @ 008423e0 ////

undefined4 * __thiscall FUN_008423e0(void *this,byte param_1)

{
  FUN_00842400(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00842400 @ 00842400 ////

void __fastcall FUN_00842400(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d5f044;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION DesireWaterGrass_Constructor @ 008424c0 ////

undefined4 * __thiscall DesireWaterGrass_Constructor(void *this,undefined4 param_1)

{
  float fVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6e00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  local_2c = local_20;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d5fb54;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"watergrass",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00838070(this,&local_2c,0,0,0,DAT_010502b4,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  fVar1 = *(float *)(*(int *)((int)this + 0x124) + 0x24);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)this + 0xe0) = fVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008425c0 @ 008425c0 ////

undefined4 * __thiscall FUN_008425c0(void *this,byte param_1)

{
  thunk_FUN_008381f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008425f0 @ 008425f0 ////

void FUN_008425f0(void)

{
  FUN_0043fec0(0x11);
  return;
}


//// FUNCTION DesireWriteScript_Constructor @ 008428b0 ////

undefined4 * __thiscall DesireWriteScript_Constructor(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  char **ppcVar7;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6e6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5fba4;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"writescript",0xb);
  local_68 = 0xb;
  local_6c[0xb] = '\0';
  local_4._0_1_ = 2;
  FUN_00838070(this,&local_6c,0,0,0,0,param_1);
  local_4._0_1_ = 1;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  *(undefined1 *)((int)this + 0x10e) = 1;
  *(undefined4 *)((int)this + 0x140) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  piVar1 = (int *)FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar1 + 0x27c))();
      iVar2 = FUN_00472a30(iVar2);
      if (iVar2 != 0) {
        local_6c = local_60;
        local_60[0] = '\0';
        local_68 = 0;
        local_64 = 0x14;
        _strncpy(local_6c,"star",4);
        local_68 = 4;
        local_6c[4] = '\0';
        local_4._0_1_ = 3;
        FUN_00558a50(DAT_00f88624,&local_6c,(undefined4 *)0x1);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        pcStack_2c = acStack_20;
        acStack_20[0] = '\0';
        uStack_28 = 0;
        uStack_24 = 0x14;
        _strncpy(pcStack_2c,"grudge_staff_job",0x10);
        uStack_28 = 0x10;
        pcStack_2c[0x10] = '\0';
        pcStack_4c = acStack_40;
        acStack_40[0] = '\0';
        uStack_48 = 0;
        uStack_44 = 0x14;
        _strncpy(pcStack_4c,"forgivestaffjob",0xf);
        uStack_48 = 0xf;
        pcStack_4c[0xf] = '\0';
        local_6c = local_60;
        local_60[0] = '\0';
        local_68 = 0;
        local_64 = 0x14;
        _strncpy(local_6c,"dislikestaffjob",0xf);
        local_68 = 0xf;
        local_6c[0xf] = '\0';
        pvVar3 = DAT_00f88624;
        ppcVar7 = &pcStack_2c;
        local_4 = CONCAT31(local_4._1_3_,6);
        fVar4 = FUN_00558610(DAT_00f88624,&pcStack_4c,0.0);
        fVar6 = (float)fVar4;
        fVar4 = FUN_00558610(pvVar3,&local_6c,0.0);
        fVar5 = (float)fVar4;
        iVar2 = (**(code **)(*piVar1 + 0x27c))();
        pvVar3 = (void *)FUN_00472a30(iVar2);
        CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppcVar7);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_4c);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_2c);
        }
      }
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00842bb0 @ 00842bb0 ////

undefined4 * __thiscall FUN_00842bb0(void *this,byte param_1)

{
  FUN_00842bd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00842bd0 @ 00842bd0 ////

void __fastcall FUN_00842bd0(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_00842c50 @ 00842c50 ////

void __thiscall FUN_00842c50(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x128) + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x128))();
  return;
}


//// FUNCTION FUN_00842c80 @ 00842c80 ////

bool __cdecl FUN_00842c80(int *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  byte *pbStack_40;
  uint uStack_38;
  byte abStack_34 [6];
  undefined1 uStack_2e;
  byte *pbStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  byte abStack_14 [20];
  
  bVar3 = false;
  cVar2 = (**(code **)(*param_1 + 0x13c))();
  if (cVar2 == '\0') {
    return false;
  }
  for (piVar5 = (int *)param_1[0x13e]; piVar5 != param_1 + 0x141; piVar5 = (int *)piVar5[1]) {
    iVar4 = FUN_00401c30(piVar5[2]);
    cVar2 = FUN_00842ed0(iVar4);
    if (cVar2 != '\0') {
      return false;
    }
  }
  if (param_1[0x127] != 0) {
    iVar4 = FUN_00401c30(param_1[0x127]);
    cVar2 = FUN_00842ed0(iVar4);
    if (cVar2 != '\0') {
      return false;
    }
  }
  piVar5 = (int *)param_1[0x14f];
  if (piVar5 != param_1 + 0x152) {
    do {
      iVar4 = piVar5[2];
      pbStack_20 = abStack_14;
      abStack_14[0] = 0;
      uStack_1c = 0;
      uStack_18 = 0x14;
      _strncpy((char *)pbStack_20,"getjob",6);
      uStack_1c = 6;
      pbStack_20[6] = 0;
      pbVar6 = *(byte **)(iVar4 + 100);
      pbVar8 = pbStack_20;
      do {
        bVar1 = *pbVar6;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00842d85:
          iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00842d8a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00842d85;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00842d8a:
      if (iVar7 == 0) {
LAB_00842e06:
        bVar9 = true;
      }
      else {
        pbStack_40 = abStack_34;
        abStack_34[0] = 0;
        uStack_38 = 0x14;
        _strncpy((char *)pbStack_40,"urgent",6);
        bVar3 = true;
        uStack_2e = 0;
        pbVar6 = *(byte **)(iVar4 + 100);
        pbVar8 = pbStack_40;
        do {
          bVar1 = *pbVar6;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00842df9:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00842dfe;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00842df9;
          pbVar6 = pbVar6 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00842dfe:
        bVar9 = false;
        if (iVar4 == 0) goto LAB_00842e06;
      }
      if ((bVar3) && (bVar3 = false, 0x14 < uStack_38)) {
                    /* WARNING: Subroutine does not return */
        _free(pbStack_40);
      }
      if (0x14 < uStack_18) {
                    /* WARNING: Subroutine does not return */
        _free(pbStack_20);
      }
      if (bVar9) {
        return false;
      }
      piVar5 = (int *)piVar5[1];
    } while (piVar5 != param_1 + 0x152);
  }
  bVar3 = FUN_0059c510((int)param_1);
  return !bVar3;
}


//// FUNCTION FUN_00842eb0 @ 00842eb0 ////

undefined1 __fastcall FUN_00842eb0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x10f);
}


//// FUNCTION FUN_00842ed0 @ 00842ed0 ////

undefined1 __fastcall FUN_00842ed0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x10c);
}


//// FUNCTION FUN_00842ee0 @ 00842ee0 ////

undefined1 __fastcall FUN_00842ee0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x10d);
}


//// FUNCTION FUN_00842ef0 @ 00842ef0 ////

void __thiscall FUN_00842ef0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x10d) = param_1;
  return;
}


//// FUNCTION FUN_00842f00 @ 00842f00 ////

void __thiscall FUN_00842f00(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x10e) = param_1;
  return;
}


//// FUNCTION FUN_00842f40 @ 00842f40 ////

void __thiscall FUN_00842f40(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + *(float *)((int)this + 0xe0);
  if (fVar1 < 0.0) {
    *(undefined4 *)((int)this + 0xe0) = 0;
    return;
  }
  if (1.0 < fVar1) {
    *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
    return;
  }
  *(float *)((int)this + 0xe0) = fVar1;
  return;
}


//// FUNCTION FUN_00842f90 @ 00842f90 ////

void __thiscall FUN_00842f90(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 0xe0) = 0;
    return;
  }
  if (1.0 < param_1) {
    *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
    return;
  }
  *(float *)((int)this + 0xe0) = param_1;
  return;
}


//// FUNCTION FUN_00843010 @ 00843010 ////

void __thiscall FUN_00843010(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x84) + 4))();
  *(undefined4 *)((int)this + 0x98) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x84))();
  return;
}


//// FUNCTION FUN_00843040 @ 00843040 ////

void * __thiscall FUN_00843040(void *this,void *param_1)

{
  if ((*(char *)(*(int *)((int)this + 0x100) + 0x5b4) != '\0') &&
     (*(char *)((int)this + 0x10f) == '\0')) {
    FUN_00407070(param_1,0.0);
    return param_1;
  }
  (**(code **)(*(int *)this + 0x24))(param_1);
  return param_1;
}


//// FUNCTION FUN_00843080 @ 00843080 ////

void __thiscall FUN_00843080(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte abStack_24 [4];
  undefined4 uStack_20;
  char *pcVar8;
  
  (**(code **)(*(int *)((int)this + 0xec) + 4))();
  *(undefined4 *)((int)this + 0x100) = param_3;
  (*(code *)**(undefined4 **)((int)this + 0xec))();
  piVar1 = (int *)((int)this + 0x84);
  (**(code **)(*(int *)((int)this + 0x84) + 4))();
  *(undefined4 *)((int)this + 0x98) = param_2;
  (**(code **)*piVar1)();
  FUN_004015d0((void *)((int)this + 100),(char *)*param_1,param_1[1]);
  *(undefined1 *)((int)this + 0x9c) = 1;
  *(undefined1 *)((int)this + 0x10c) = 0;
  if (*(int *)((int)this + 0x98) == 0) {
    pbVar5 = abStack_24;
    abStack_24[0] = 0;
    uVar6 = 0;
    uVar7 = 0x14;
    FUN_004015d0(&stack0xffffffd0,(char *)*param_1,param_1[1]);
    puVar2 = FUN_008b9250(pbVar5,uVar6,uVar7);
    (**(code **)(*piVar1 + 4))();
    *(undefined4 **)((int)this + 0x98) = puVar2;
    (**(code **)*piVar1)();
  }
  *(void **)((int)this + 0xa8) = this;
  FUN_00acdb9e(0xe5ce34);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0xac) = iVar3;
  if (s___AVDesireVomit_TM___00e5ce1c[0x15] != '\0') {
    iVar3 = 0xa0;
    pcVar8 = "Link";
    uStack_20 = 0x843189;
    pcVar4 = (char *)FUN_00acdb9e(0xe5ce34);
    uStack_20 = 0x843190;
    FUN_0097df60(pcVar4,pcVar8,iVar3);
    s___AVDesireVomit_TM___00e5ce1c[0x15] = '\0';
  }
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined1 *)((int)this + 0x10d) = 0;
  *(undefined1 *)((int)this + 0x10e) = 0;
  pbVar5 = abStack_24;
  abStack_24[0] = 0;
  uVar6 = 0;
  uVar7 = 0x14;
  FUN_004015d0(&stack0xffffffd0,(char *)*param_1,param_1[1]);
  puVar2 = FUN_00837e70(pbVar5,uVar6,uVar7);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0xcc) = puVar2[0xc];
    *(undefined4 *)((int)this + 0xd0) = puVar2[0xd];
    *(undefined4 *)((int)this + 0xd4) = puVar2[0xe];
    *(undefined4 *)((int)this + 0xd8) = puVar2[0xf];
    *(undefined4 *)((int)this + 0xdc) = puVar2[0x18];
  }
  return;
}


//// FUNCTION FUN_00843220 @ 00843220 ////

undefined4 * __thiscall FUN_00843220(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce6e90;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x100) != 0) {
    pcVar5 = "gender_female";
    if (*(int *)(*(int *)((int)this + 0x100) + 0x4a0) != 0) {
      pcVar5 = "gender_male";
    }
    pcVar2 = pcVar5;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_c;
    FUN_004015d0(&local_4c,pcVar5,(int)pcVar2 - (int)(pcVar5 + 1));
  }
  iVar3 = FUN_009b5f90(param_2,0xffffffff,&local_4c);
  if ((iVar3 == 0) || (*(char *)(iVar3 + 100) == '\0')) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"desire_unknown",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar3 = FUN_009b5f90(&local_2c,0xffffffff,&local_4c);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  param_1[2] = 10;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = param_1 + 3;
  if (iVar3 == 0) {
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(param_1,(wchar_t *)&lpCaption_00d16918,uVar4);
  }
  else {
    FUN_004036d0(param_1,*(wchar_t **)(iVar3 + 0x40),*(uint *)(iVar3 + 0x44));
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008433b0 @ 008433b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_008433b0(undefined4 *param_1)

{
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d5fc0c;
  param_1[0x1b] = 0x14;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = param_1 + 0x1c;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x21] = &PTR_LAB_00d165bc;
  param_1[0x24] = param_1 + 0x21;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x2c] = &PTR_FUN_00d1a200;
  param_1[0x2f] = param_1 + 0x2c;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x33] = 0xffffffff;
  param_1[0x34] = 0xffffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3e] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3e] = param_1 + 0x3b;
  param_1[0x3b] = &PTR_FUN_00d165ac;
  *(undefined1 *)((int)param_1 + 0x10f) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (_DAT_00e5cb50 < 0.0) {
    param_1[0x3a] = 0;
    return param_1;
  }
  if (1.0 < _DAT_00e5cb50) {
    param_1[0x3a] = 0x3f800000;
    return param_1;
  }
  param_1[0x3a] = _DAT_00e5cb50;
  return param_1;
}


//// FUNCTION FUN_00843510 @ 00843510 ////

undefined4 * __thiscall FUN_00843510(void *this,char param_1)

{
  size_t sVar1;
  uint uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  wchar_t *unaff_EBX;
  float unaff_EBP;
  ulonglong uVar5;
  uint local_134;
  undefined2 *local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined2 local_124 [8];
  void *pvStack_114;
  wchar_t *pwStack_110;
  size_t sStack_10c;
  undefined4 uStack_108;
  wchar_t awStack_104 [8];
  void *pvStack_f4;
  void *pvStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  char acStack_d4 [68];
  wchar_t awStack_90 [62];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  puStack_8 = &LAB_00ce6eb6;
  pvStack_c = ExceptionList;
  local_134 = 0;
  local_130 = local_124;
  local_124[0] = 0;
  local_12c = 0;
  local_128 = 10;
  local_4 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)this + 0x24))(&local_134);
  uVar5 = FUN_00acd42c();
  sVar1 = FUN_00ace02d(L"<TABLE><TR><TD WIDTH = 130>");
  FUN_0040cae0(&local_134,L"<TABLE><TR><TD WIDTH = 130>",sVar1);
  pwStack_110 = awStack_104;
  awStack_104[0] = L'\0';
  sStack_10c = 0;
  uStack_108 = 10;
  uVar2 = FUN_00ace02d(L"<t3 COLOR=#66FF66>");
  FUN_004036d0(&pwStack_110,L"<t3 COLOR=#66FF66>",uVar2);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  if (param_1 != '\0') {
    uVar2 = FUN_00ace02d(L"<t3 COLOR=#FF6666>");
    FUN_004036d0(&pwStack_110,L"<t3 COLOR=#FF6666>",uVar2);
  }
  if ((*(char *)(*(int *)((int)this + 0x100) + 0x5b4) != '\0') &&
     (*(char *)((int)this + 0x10f) == '\0')) {
    uVar2 = FUN_00ace02d(L"<t3 COLOR=#6666FF>");
    FUN_004036d0(&pwStack_110,L"<t3 COLOR=#6666FF>",uVar2);
  }
  if (*(char *)((int)this + 0x9d) != '\0') {
    sVar1 = FUN_00ace02d(L"<t3 color=#FFFFFF>[!]</t3>");
    FUN_0040cae0(&local_134,L"<t3 color=#FFFFFF>[!]</t3>",sVar1);
  }
  FUN_0040cae0(&local_134,pwStack_110,sStack_10c);
  puVar3 = FUN_00568790(&pvStack_f0,(undefined4 *)((int)this + 100));
  FUN_0040cae0(&local_134,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < uStack_e8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_f0);
  }
  sVar1 = FUN_00ace02d(L"</t3>");
  FUN_0040cae0(&local_134,L"</t3>",sVar1);
  if (*(char *)((int)this + 0x10d) != '\0') {
    sVar1 = FUN_00ace02d(L"[Boost]");
    FUN_0040cae0(&local_134,L"[Boost]",sVar1);
  }
  sVar1 = FUN_00ace02d(L"</TD></TR></TABLE><TABLE><TR><TD Width = ");
  FUN_0040cae0(&local_134,L"</TD></TR></TABLE><TABLE><TR><TD Width = ",sVar1);
  sVar1 = _swprintf(awStack_90,0xd18f7c,(wchar_t *)uVar5);
  FUN_0040cae0(&local_134,awStack_90,sVar1);
  sVar1 = FUN_00ace02d(
                      L" BGColor = #FF33FF33 Height = 10></TD><TD Height = 10 BGcolor = #FF338833 Width = "
                      );
  FUN_0040cae0(&local_134,
               L" BGColor = #FF33FF33 Height = 10></TD><TD Height = 10 BGcolor = #FF338833 Width = "
               ,sVar1);
  sVar1 = _swprintf(awStack_90,0xd18f7c,(wchar_t *)(0x40 - (int)(wchar_t *)uVar5));
  FUN_0040cae0(&local_134,awStack_90,sVar1);
  sVar1 = FUN_00ace02d(L"></TD></TR></TABLE>");
  FUN_0040cae0(&local_134,L"></TD></TR></TABLE>",sVar1);
  if (*(char *)((int)this + 0x110) == '\0') {
    pfVar4 = (float *)(**(code **)(*(int *)this + 0x24))(&pvStack_114);
    _sprintf(acStack_d4,"<t3 COLOR=#FFFFFF>%.3f</t3>",(double)*pfVar4);
  }
  else {
    unaff_EBX = *(wchar_t **)((int)this + 0xe4);
    pfVar4 = (float *)(**(code **)(*(int *)this + 0x24))(&pvStack_114);
    _sprintf(acStack_d4,"<t3 COLOR=#FFFFFF>%.3f(%.3f)</t3>",(double)*pfVar4,(double)unaff_EBP);
  }
  puVar3 = FUN_005686a0(&pvStack_f4,acStack_d4);
  FUN_0040cae0(&stack0xfffffec8,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < uStack_ec) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_f4);
  }
  sVar1 = FUN_00ace02d(L"<BR>");
  FUN_0040cae0(&stack0xfffffec8,L"<BR>",sVar1);
  puVar3 = local_4;
  *local_4 = local_4 + 3;
  *(undefined2 *)(local_4 + 3) = 0;
  local_4[1] = 0;
  local_4[2] = 10;
  FUN_004036d0(local_4,unaff_EBX,local_134);
  if (10 < sStack_10c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_114);
  }
  if (&lpType_0000000a < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  ExceptionList = pvStack_14;
  return puVar3;
}


//// FUNCTION FUN_008438a0 @ 008438a0 ////

undefined4 * __thiscall FUN_008438a0(void *this,char param_1)

{
  float fVar1;
  size_t sVar2;
  uint uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  wchar_t *unaff_EBX;
  ulonglong uVar6;
  uint local_f0;
  undefined2 *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined2 local_e0 [6];
  void *pvStack_d4;
  wchar_t *pwStack_d0;
  size_t sStack_cc;
  undefined4 uStack_c8;
  wchar_t awStack_c4 [10];
  void *apvStack_b0 [2];
  uint uStack_a8;
  wchar_t awStack_94 [2];
  wchar_t awStack_90 [62];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  puStack_8 = &LAB_00ce6ed6;
  pvStack_c = ExceptionList;
  local_f0 = 0;
  local_ec = local_e0;
  local_e0[0] = 0;
  local_e8 = 0;
  local_e4 = 10;
  local_4 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)this + 0x24))(&local_f0);
  uVar6 = FUN_00acd42c();
  sVar2 = FUN_00ace02d(L"<TR><TD WIDTH=130>");
  FUN_0040cae0(&local_f0,L"<TR><TD WIDTH=130>",sVar2);
  pwStack_d0 = awStack_c4;
  awStack_c4[0] = L'\0';
  sStack_cc = 0;
  uStack_c8 = 10;
  uVar3 = FUN_00ace02d(L"<font COLOR=#000000>");
  FUN_004036d0(&pwStack_d0,L"<font COLOR=#000000>",uVar3);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  if (param_1 != '\0') {
    uVar3 = FUN_00ace02d(L"<font COLOR=#FF6666>");
    FUN_004036d0(&pwStack_d0,L"<font COLOR=#FF6666>",uVar3);
  }
  if ((*(char *)(*(int *)((int)this + 0x100) + 0x5b4) != '\0') &&
     (*(char *)((int)this + 0x10f) == '\0')) {
    uVar3 = FUN_00ace02d(L"<font COLOR=#6666FF>");
    FUN_004036d0(&pwStack_d0,L"<font COLOR=#6666FF>",uVar3);
  }
  if (*(char *)((int)this + 0x9d) != '\0') {
    sVar2 = FUN_00ace02d(L"<font color=#000000>[!]</font>");
    FUN_0040cae0(&local_f0,L"<font color=#000000>[!]</font>",sVar2);
  }
  FUN_0040cae0(&local_f0,pwStack_d0,sStack_cc);
  puVar4 = FUN_00568790(apvStack_b0,(undefined4 *)((int)this + 100));
  FUN_0040cae0(&local_f0,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_b0[0]);
  }
  sVar2 = FUN_00ace02d(L"</font>");
  FUN_0040cae0(&local_f0,L"</font>",sVar2);
  if (*(char *)((int)this + 0x10d) != '\0') {
    sVar2 = FUN_00ace02d(L"[Boost]");
    FUN_0040cae0(&local_f0,L"[Boost]",sVar2);
  }
  sVar2 = FUN_00ace02d(L"</TD>");
  FUN_0040cae0(&local_f0,L"</TD>",sVar2);
  sVar2 = FUN_00ace02d(L"<TD><TABLE border=0 cellpadding=0 cellspacing=0><TR>");
  FUN_0040cae0(&local_f0,L"<TD><TABLE border=0 cellpadding=0 cellspacing=0><TR>",sVar2);
  sVar2 = FUN_00ace02d(L"<TD Width=");
  FUN_0040cae0(&local_f0,L"<TD Width=",sVar2);
  sVar2 = _swprintf(awStack_90,0xd18f7c,(wchar_t *)uVar6);
  FUN_0040cae0(&local_f0,awStack_90,sVar2);
  sVar2 = FUN_00ace02d(L" BGColor=\'#33FF33\' Height=10></TD>");
  FUN_0040cae0(&local_f0,L" BGColor=\'#33FF33\' Height=10></TD>",sVar2);
  sVar2 = FUN_00ace02d(L"<TD Width=");
  FUN_0040cae0(&local_f0,L"<TD Width=",sVar2);
  sVar2 = _swprintf(awStack_90,0xd18f7c,(wchar_t *)(200 - (int)(wchar_t *)uVar6));
  FUN_0040cae0(&local_f0,awStack_90,sVar2);
  sVar2 = FUN_00ace02d(L" BGcolor=\'#338833\' Height=10></TD>");
  FUN_0040cae0(&local_f0,L" BGcolor=\'#338833\' Height=10></TD>",sVar2);
  sVar2 = FUN_00ace02d(L"</TR></TABLE></TD>");
  FUN_0040cae0(&local_f0,L"</TR></TABLE></TD>",sVar2);
  sVar2 = FUN_00ace02d(L"<TD><font COLOR=#000000>");
  FUN_0040cae0(&local_f0,L"<TD><font COLOR=#000000>",sVar2);
  pfVar5 = (float *)(**(code **)(*(int *)this + 0x24))(&stack0xffffff0c);
  sVar2 = _swprintf(awStack_94,0xd18f84,SUB84((double)*pfVar5,0));
  FUN_0040cae0(&stack0xffffff0c,awStack_94,sVar2);
  if (*(char *)((int)this + 0x110) != '\0') {
    fVar1 = *(float *)((int)this + 0xe4);
    sVar2 = FUN_00ace02d((short *)&DAT_00d24470);
    FUN_0040cae0(&stack0xffffff0c,L"(",sVar2);
    sVar2 = _swprintf(awStack_94,0xd18f84,SUB84((double)fVar1,0));
    FUN_0040cae0(&stack0xffffff0c,awStack_94,sVar2);
    sVar2 = FUN_00ace02d((short *)&DAT_00d2446c);
    FUN_0040cae0(&stack0xffffff0c,L")",sVar2);
  }
  sVar2 = FUN_00ace02d(L"</font></TD>");
  FUN_0040cae0(&stack0xffffff0c,L"</font></TD>",sVar2);
  sVar2 = FUN_00ace02d(L"</TR>");
  FUN_0040cae0(&stack0xffffff0c,L"</TR>",sVar2);
  puVar4 = local_4;
  *local_4 = local_4 + 3;
  *(undefined2 *)(local_4 + 3) = 0;
  local_4[1] = 0;
  local_4[2] = 10;
  FUN_004036d0(local_4,unaff_EBX,local_f0);
  if (10 < sStack_cc) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_d4);
  }
  if (&lpType_0000000a < local_ec) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  ExceptionList = pvStack_14;
  return puVar4;
}


//// FUNCTION FUN_00843cd0 @ 00843cd0 ////

undefined4 * __thiscall FUN_00843cd0(void *this,byte param_1)

{
  FUN_00574170(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00843cf0 @ 00843cf0 ////

undefined4 * __thiscall FUN_00843cf0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_0040d6b0(local_2c,"desire_",(undefined4 *)((int)this + 100));
  local_4 = 0;
  FUN_00843220(this,param_1,puVar1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00843d70 @ 00843d70 ////

undefined4 * __thiscall FUN_00843d70(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6f10;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_0040d6b0(local_2c,"desire_",(undefined4 *)((int)this + 100));
  local_4 = 0;
  puVar1 = FUN_004312e0(local_4c,puVar1,"_heading");
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00843220(this,param_1,puVar1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00843e10 @ 00843e10 ////

int * __thiscall FUN_00843e10(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00843e50 @ 00843e50 ////

int * __thiscall FUN_00843e50(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00843e70 @ 00843e70 ////

int * __thiscall FUN_00843e70(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00843e90 @ 00843e90 ////

void __thiscall FUN_00843e90(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x7c) + 4))();
  *(undefined4 *)((int)this + 0x90) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x7c))();
  (**(code **)(*(int *)((int)this + 0xac) + 4))();
  *(undefined4 *)((int)this + 0xc0) = 0;
  (*(code *)**(undefined4 **)((int)this + 0xac))();
  return;
}


//// FUNCTION FUN_00843ed0 @ 00843ed0 ////

void __thiscall FUN_00843ed0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x90) == param_1) {
    (**(code **)(*(int *)((int)this + 0x7c) + 4))();
    *(undefined4 *)((int)this + 0x90) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x7c))();
  }
  return;
}


//// FUNCTION FUN_00843f00 @ 00843f00 ////

undefined4 FUN_00843f00(void)

{
  return DAT_0104ed08;
}


//// FUNCTION FUN_00843f10 @ 00843f10 ////

void FUN_00843f10(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104ed08;
  if (DAT_0104ed08 != (undefined4 *)0x0) {
    iVar1 = DAT_0104ed08[0x12];
    DAT_0104ed08[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104ecf4[1])();
    DAT_0104ed08 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00843f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_0104ecf4)();
    return;
  }
  return;
}


//// FUNCTION CCinema_RefreshSignIfProjectChanged @ 00843f90 ////

void __fastcall CCinema_RefreshSignIfProjectChanged(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar1 = FUN_0045f410();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x98) != iVar1 + 0xa4)) {
      piVar2 = (int *)(**(code **)(**(int **)(*(int *)(iVar1 + 0x98) + 8) + 4))();
      iVar1 = FUN_00ace790(piVar2,0,&TM::TMObject::RTTI_Type_Descriptor,
                           &TM::CProject::RTTI_Type_Descriptor,0);
      iVar3 = FUN_00ace790(piVar2,0,&TM::TMObject::RTTI_Type_Descriptor,
                           &TM::CProjectAI::RTTI_Type_Descriptor,0);
      (**(code **)(*(int *)(param_1 + 0x7c) + 4))();
      *(int *)(param_1 + 0x90) = iVar1;
      (*(code *)**(undefined4 **)(param_1 + 0x7c))();
      (**(code **)(*(int *)(param_1 + 0xac) + 4))();
      *(int *)(param_1 + 0xc0) = iVar3;
      (*(code *)**(undefined4 **)(param_1 + 0xac))();
    }
  }
  if (((*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0x78)) ||
      (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xa8))) || (*(char *)(param_1 + 0xc4) != '\0')
     ) {
    (**(code **)(*(int *)(param_1 + 100) + 4))();
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x90);
    (*(code *)**(undefined4 **)(param_1 + 100))();
    (**(code **)(*(int *)(param_1 + 0x94) + 4))();
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xc0);
    (*(code *)**(undefined4 **)(param_1 + 0x94))();
    if (*(void **)(param_1 + 0x78) != (void *)0x0) {
      CCinema_GatherPlayerProjectSignText(*(void **)(param_1 + 0x78));
      *(undefined1 *)(param_1 + 0xc4) = 0;
      return;
    }
    if (*(void **)(param_1 + 0xa8) != (void *)0x0) {
      CCinema_GatherRivalProjectSignText(*(void **)(param_1 + 0xa8));
      *(undefined1 *)(param_1 + 0xc4) = 0;
      return;
    }
    CCinema_BuildAndApplySignTexture
              ((wchar_t *)&lpCaption_00d16918,&lpCaption_00d16918,&lpCaption_00d16918,0xd16918);
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  return;
}


//// FUNCTION FUN_008440e0 @ 008440e0 ////

void __fastcall FUN_008440e0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d6012c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00844130 @ 00844130 ////

void __fastcall FUN_00844130(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d6012c;
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


//// FUNCTION FUN_008441a0 @ 008441a0 ////

undefined4 * __fastcall FUN_008441a0(undefined4 *param_1)

{
  FUN_0053c420(param_1);
  *param_1 = &PTR_CCinema_DeletingDestructor_00d6013c;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = &PTR_FUN_00d18c3c;
  param_1[0x1e] = 0;
  param_1[0x1c] = param_1 + 0x19;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = &PTR_FUN_00d18c3c;
  param_1[0x24] = 0;
  param_1[0x22] = param_1 + 0x1f;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = param_1 + 0x25;
  param_1[0x25] = &PTR_LAB_00d23ea0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_1 + 0x2b;
  param_1[0x2b] = &PTR_LAB_00d23ea0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  return param_1;
}


//// FUNCTION CCinema_Destructor @ 00844240 ////

void __fastcall CCinema_Destructor(undefined4 *param_1)

{
  *param_1 = &PTR_CCinema_DeletingDestructor_00d6013c;
  param_1[0x2b] = &PTR_LAB_00d23ea0;
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2d] = param_1[0x2c];
  }
  if (param_1[0x2c] != 0) {
    *(undefined4 *)(param_1[0x2c] + 4) = param_1[0x2d];
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2d] = param_1[0x2c];
  }
  if (param_1[0x2c] != 0) {
    *(undefined4 *)(param_1[0x2c] + 4) = param_1[0x2d];
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x25] = &PTR_LAB_00d23ea0;
  if ((undefined4 *)param_1[0x27] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x27] = param_1[0x26];
  }
  if (param_1[0x26] != 0) {
    *(undefined4 *)(param_1[0x26] + 4) = param_1[0x27];
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  if ((undefined4 *)param_1[0x27] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x27] = param_1[0x26];
  }
  if (param_1[0x26] != 0) {
    *(undefined4 *)(param_1[0x26] + 4) = param_1[0x27];
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x1f] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x21] = param_1[0x20];
  }
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 4) = param_1[0x21];
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x21] = param_1[0x20];
  }
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 4) = param_1[0x21];
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x19] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b] = param_1[0x1a];
  }
  if (param_1[0x1a] != 0) {
    *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1b];
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b] = param_1[0x1a];
  }
  if (param_1[0x1a] != 0) {
    *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1b];
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_008443f0 @ 008443f0 ////

void FUN_008443f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6f2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(200);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_008441a0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104ecf4[1])();
  DAT_0104ed08 = puVar2;
  (*(code *)*DAT_0104ecf4)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION CCinema_DeletingDestructor @ 00844470 ////

undefined4 * __thiscall CCinema_DeletingDestructor(void *this,byte param_1)

{
  CCinema_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008444d0 @ 008444d0 ////

void __fastcall FUN_008444d0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00844530 @ 00844530 ////

void __fastcall FUN_00844530(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (((void *)param_1[0x47] == (void *)0x0) || ((param_1[0xb8] & 0x1000U) == 0)) {
    *(undefined1 *)(param_1 + 0x140) = 0;
  }
  else {
    FUN_00414e20((void *)param_1[0x47],1.0);
    if ((*(uint *)(param_1[0x47] + 0x9c) & 0x2000) != 0) {
      cVar2 = FUN_004201b0(DAT_00f87b04);
      if (cVar2 != '\0') {
        iVar1 = param_1[0x47];
        FUN_00990aa0();
        uVar5 = FUN_00acd42c();
        iVar3 = (uint)*(byte *)(iVar1 + 0x9a) - (int)uVar5;
        if (0xfe < iVar3) {
          *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 0xff0000;
          FUN_005358f0(param_1);
          return;
        }
        *(char *)(iVar1 + 0x9a) = (char)iVar3;
        FUN_005358f0(param_1);
        return;
      }
      if ((char)param_1[0x140] == '\0') {
        FUN_00982100((void *)param_1[0x47]);
        uVar4 = *(uint *)(param_1[0x47] + 0x9c) >> 0xd;
        *(byte *)(param_1 + 0x140) = (byte)uVar4 & 1;
        if ((uVar4 & 1) == 0) goto LAB_00844682;
      }
      FUN_00534d30(param_1,(int)param_1,'\x01');
      *(uint *)(param_1[0x47] + 0x9c) = *(uint *)(param_1[0x47] + 0x9c) & 0xffffdfff;
      FUN_005358f0(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x140) = 0;
    cVar2 = FUN_004201b0(DAT_00f87b04);
    if (cVar2 != '\0') {
      iVar1 = param_1[0x47];
      FUN_00990aa0();
      uVar5 = FUN_00acd42c();
      iVar3 = (uint)*(byte *)(iVar1 + 0x9a) - (int)uVar5;
      *(byte *)(iVar1 + 0x9a) = (iVar3 < 1) - 1U & (byte)iVar3;
      FUN_005358f0(param_1);
      return;
    }
  }
LAB_00844682:
  FUN_005358f0(param_1);
  return;
}


//// FUNCTION FUN_008446d0 @ 008446d0 ////

void FUN_008446d0(void)

{
  DAT_0104ed0c = 0;
  return;
}


//// FUNCTION FUN_00844700 @ 00844700 ////

undefined4 __fastcall FUN_00844700(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4dc);
}


//// FUNCTION FUN_00844710 @ 00844710 ////

undefined4 __fastcall FUN_00844710(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4d8);
}


//// FUNCTION FUN_00844730 @ 00844730 ////

void __fastcall FUN_00844730(int *param_1)

{
  void *this;
  
  this = (void *)FUN_005295b0(param_1);
  if (this != (void *)0x0) {
    FUN_00938db0(this,param_1 + 0x136,param_1 + 0x137,param_1 + 0x138);
  }
  return;
}


//// FUNCTION FUN_00844930 @ 00844930 ////

void __thiscall FUN_00844930(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x31) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(*(int *)((int)this + 4) + 4)) {
    *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}


//// FUNCTION FUN_008449c0 @ 008449c0 ////

void __cdecl FUN_008449c0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x31);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x31);
  }
  return;
}


//// FUNCTION FUN_008449e0 @ 008449e0 ////

void __cdecl FUN_008449e0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x31);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x31);
  }
  return;
}


//// FUNCTION FUN_00844a20 @ 00844a20 ////

void __fastcall FUN_00844a20(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x31) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x31) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x31);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x31);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x31) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x31) == '\0');
    if (*(char *)((int)piVar4 + 0x31) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00844a80 @ 00844a80 ////

void __fastcall FUN_00844a80(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x31) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x31) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x31);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x31);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x31);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x31);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00844b80 @ 00844b80 ////

int __fastcall FUN_00844b80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x4a0); iVar1 != param_1 + 0x4ac; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


//// FUNCTION FUN_00844ba0 @ 00844ba0 ////

void __fastcall FUN_00844ba0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x4d0) + 1;
  *(int *)(param_1 + 0x4d0) = iVar2;
  iVar3 = 0;
  for (iVar1 = *(int *)(param_1 + 0x4a0); iVar1 != param_1 + 0x4ac; iVar1 = *(int *)(iVar1 + 4)) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 <= iVar2) {
    *(undefined4 *)(param_1 + 0x4d0) = 0;
  }
  return;
}


//// FUNCTION FUN_00844be0 @ 00844be0 ////

void __fastcall FUN_00844be0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  FUN_00990e30(0.7,1.3);
  uVar4 = FUN_00acd42c();
  *(int *)(param_1 + 0x4cc) = (int)uVar4;
  iVar2 = *(int *)(param_1 + 0x4d0) + 1;
  *(int *)(param_1 + 0x4d0) = iVar2;
  iVar3 = 0;
  for (iVar1 = *(int *)(param_1 + 0x4a0); iVar1 != param_1 + 0x4ac; iVar1 = *(int *)(iVar1 + 4)) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 <= iVar2) {
    *(undefined4 *)(param_1 + 0x4d0) = 0;
  }
  return;
}


//// FUNCTION FUN_00844e80 @ 00844e80 ////

void __fastcall FUN_00844e80(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00844f10 @ 00844f10 ////

undefined4 * __thiscall FUN_00844f10(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x31) == '\0') {
    puVar2 = puVar3;
    puVar7 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar7;
      pbVar4 = (byte *)puVar3[3];
      pbVar6 = (byte *)*param_1;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00844f54:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00844f59;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00844f54;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00844f59:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x31) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_00844fb0 @ 00844fb0 ////

void __thiscall FUN_00844fb0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x31) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*(int *)((int)this + 4) + 4)) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}


//// FUNCTION FUN_00845010 @ 00845010 ////

int * __fastcall FUN_00845010(int *param_1)

{
  FUN_00844a80(param_1);
  return param_1;
}


//// FUNCTION FUN_00845020 @ 00845020 ////

int * __fastcall FUN_00845020(int *param_1)

{
  FUN_00844a20(param_1);
  return param_1;
}


//// FUNCTION FUN_00845080 @ 00845080 ////

void __fastcall FUN_00845080(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_008450a0 @ 008450a0 ////

void __fastcall FUN_008450a0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6f68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Facility_RegisterSubFacilitiesSaveField @ 00845170 ////

void __fastcall Facility_RegisterSubFacilitiesSaveField(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6f88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Facility.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x4d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x420));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("SubFacilities");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x420);
  }
  FUN_0052a850(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00845290 @ 00845290 ////

void __fastcall FUN_00845290(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  void *this;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6fb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)FUN_00528140(param_1);
  local_2c = local_20;
  iVar7 = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"subfacilities",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 0;
  uVar4 = FUN_00558a50(this,&local_2c,(undefined4 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((char)uVar4 != '\0') {
    cVar3 = FUN_00558bb0(this,6);
    if (cVar3 != '\0') {
      FUN_00558bb0(this,0);
      do {
        FUN_005562f0(this,&local_2c,0);
        local_4 = 1;
        uVar5 = FUN_00413450(&local_2c,"propshed",0,8);
        if (uVar5 == 0xffffffff) {
          puVar6 = SubFacilityStaffSlot_CreateFromIni(param_1,&local_2c,this);
          piVar1 = puVar6 + 0x23;
          piVar2 = (int *)(param_1 + 0x4ac);
          puVar6[0x24] = piVar2;
          *piVar1 = *piVar2;
          *(int **)(*piVar2 + 4) = piVar1;
          *piVar2 = (int)piVar1;
          puVar6[0x5f] = iVar7;
          iVar7 = iVar7 + 1;
        }
        local_4 = 0xffffffff;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        cVar3 = FUN_00558bb0(this,2);
      } while (cVar3 != '\0');
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008453f0 @ 008453f0 ////

void __fastcall FUN_008453f0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float10 fVar4;
  void **ppvVar5;
  char **ppcVar6;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
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
  puStack_8 = &LAB_00ce6ffb;
  local_c = ExceptionList;
  if (1 < DAT_0105be08) {
    ExceptionList = &local_c;
    pvVar1 = (void *)FUN_00528140(param_1);
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"particles",9);
    local_68 = 9;
    local_6c[9] = '\0';
    local_4 = 0;
    uVar2 = FUN_00558a50(pvVar1,&local_6c,(undefined4 *)0x0);
    local_4 = 0xffffffff;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if ((char)uVar2 != '\0') {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      _strncpy(local_6c,"position",8);
      local_68 = 8;
      local_6c[8] = '\0';
      local_4 = 1;
      puVar3 = FUN_005584e0(pvVar1,&local_4c,&local_6c);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_00567e30(&local_78,puVar3,'\0');
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      _strncpy(local_6c,"type",4);
      local_68 = 4;
      local_6c[4] = '\0';
      local_4 = 3;
      FUN_005584e0(pvVar1,local_2c,&local_6c);
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      _strncpy(local_4c,"partspersecond",0xe);
      local_48 = 0xe;
      local_4c[0xe] = '\0';
      local_4._0_1_ = 6;
      fVar4 = FUN_00558610(pvVar1,&local_4c,0.0);
      local_4._0_1_ = 5;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      _strncpy(local_4c,"chimneysmoke",0xc);
      ppcVar6 = &local_4c;
      ppvVar5 = local_2c;
      local_48 = 0xc;
      local_4c[0xc] = '\0';
      uVar2 = FUN_00401ec0(ppvVar5,ppcVar6);
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      if ((char)uVar2 != '\0') {
        pvVar1 = operator_new(0x48);
        local_4._0_1_ = 7;
        if (pvVar1 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_009afba0(pvVar1,3,7,local_78,local_74,local_70,(float)fVar4);
        }
        *(undefined4 **)(param_1 + 0x4f0) = puVar3;
        *(float *)(param_1 + 0x4f4) = local_78;
        *(undefined4 *)(param_1 + 0x4f8) = local_74;
        local_4._0_1_ = 5;
        *(undefined4 *)(param_1 + 0x4fc) = local_70;
        FUN_009afab0(puVar3,0);
      }
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00845710 @ 00845710 ////

undefined4 __thiscall FUN_00845710(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x4a0);
  for (; param_1 != 0; param_1 = param_1 + -1) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  return *(undefined4 *)(iVar1 + 8);
}


//// FUNCTION FUN_00845870 @ 00845870 ////

void __fastcall FUN_00845870(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  void *this;
  float10 fVar5;
  int iVar6;
  float **ppfVar7;
  int iVar8;
  bool bStack_60;
  uint uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float *pfStack_48;
  float fStack_44;
  uint uStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ce7018;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  cVar1 = (**(code **)(*param_1 + 0x16c))();
  if (cVar1 != '\0') {
    iVar6 = param_1[0x13c];
    if (iVar6 != 0) {
      fStack_58 = (float)param_1[0x13d];
      fVar5 = (float10)fcos((float10)(float)param_1[0x31]);
      fStack_54 = (float)param_1[0x13e];
      fStack_50 = (float)param_1[0x13f];
      uStack_1c = 0;
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      uStack_40 = 0;
      uStack_28 = 0x3f800000;
      fStack_38 = (float)fVar5;
      pfStack_48 = (float *)(float)fVar5;
      fVar5 = (float10)fsin((float10)(float)param_1[0x31]);
      fStack_44 = (float)fVar5;
      fStack_3c = (float)-fVar5;
      FUN_0040b490(&pfStack_48,&fStack_58);
      fStack_58 = fStack_58 + (float)param_1[0x40];
      fStack_54 = fStack_54 + (float)param_1[0x41];
      fStack_50 = fStack_50 + (float)param_1[0x42];
      *(float *)(iVar6 + 0x10) = fStack_58;
      *(float *)(iVar6 + 0x14) = fStack_54;
      *(float *)(iVar6 + 0x18) = fStack_50;
      bStack_60 = param_1[0xae] == 5;
      if ((param_1[0x47] != 0) && ((*(uint *)(param_1[0x47] + 0x9c) >> 0x19 & 1) != 0)) {
        bStack_60 = false;
      }
      FUN_009afab0((void *)param_1[0x13c],bStack_60);
    }
    param_1[0x133] = param_1[0x133] + -1;
    if (((0 < param_1[0x136]) || (0 < param_1[0x137])) && (bVar2 = FUN_0043b920(0xe4fa4c), bVar2)) {
      piVar3 = (int *)FUN_005291b0((int)param_1);
      (**(code **)(*piVar3 + 0x2c))();
      for (piVar3 = (int *)param_1[0x128]; piVar3 != param_1 + 299; piVar3 = (int *)piVar3[1]) {
        puVar4 = (uint *)(**(code **)(**(int **)(piVar3[2] + 0x178) + 0x2c))();
        bVar2 = CARRY4(uStack_5c,*puVar4);
        uStack_5c = uStack_5c + *puVar4;
        fStack_58 = (float)((int)fStack_58 + puVar4[1] + (uint)bVar2);
        FUN_00471b10((longlong *)&uStack_5c);
      }
      piVar3 = (int *)GetPlayerStudio();
      FUN_00471b10((longlong *)&stack0xffffff80);
      (**(code **)(*piVar3 + 0x2c))();
    }
    if (*(char *)((int)param_1 + 0x2e5) == '\0') {
      if ((float)param_1[0xb1] < 0.1 != ((float)param_1[0xb1] == 0.1)) {
        pfStack_48 = &fStack_3c;
        *(undefined1 *)((int)param_1 + 0x2e5) = 1;
        fStack_3c = (float)((uint)fStack_3c & 0xffffff00);
        fStack_44 = 0.0;
        uStack_40 = 0x40;
        pfStack_48 = _malloc(0x40);
        _strncpy((char *)pfStack_48,"TANNOY_DISREPAIR_WARNING_FACILITY",0x21);
        fStack_44 = 4.62428e-44;
        *(char *)((int)pfStack_48 + 0x21) = '\0';
        iVar8 = 3;
        ppfVar7 = &pfStack_48;
        iVar6 = 2;
        uStack_c = 0;
        FUN_004f3b20();
        FUN_004f8a00(iVar6,ppfVar7,iVar8);
        uStack_c = 0xffffffff;
        if (0x14 < uStack_40) {
                    /* WARNING: Subroutine does not return */
          _free(pfStack_48);
        }
      }
    }
    else if (0.1 < (float)param_1[0xb1]) {
      *(undefined1 *)((int)param_1 + 0x2e5) = 0;
    }
    this = (void *)FUN_005295b0(param_1);
    if (this != (void *)0x0) {
      FUN_00938db0(this,param_1 + 0x136,param_1 + 0x137,param_1 + 0x138);
    }
  }
  FUN_00535800(param_1);
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00845b60 @ 00845b60 ////

void __fastcall FUN_00845b60(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7070;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)FUN_00528140(param_1);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"attributes",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  uVar1 = FUN_00558a50(this,&local_2c,(undefined4 *)0x0);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((char)uVar1 != '\0') {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"Demolishable",0xc);
    local_28 = 0xc;
    local_2c[0xc] = '\0';
    local_4 = 1;
    iVar2 = FUN_00558750(this,&local_2c,1);
    *(uint *)(param_1 + 0x2e0) =
         *(uint *)(param_1 + 0x2e0) ^ ((uint)(iVar2 != 0) << 4 ^ *(uint *)(param_1 + 0x2e0)) & 0x10;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"Moveable",8);
    local_28 = 8;
    local_2c[8] = '\0';
    local_4 = 2;
    iVar2 = FUN_00558750(this,&local_2c,1);
    *(uint *)(param_1 + 0x2e0) =
         *(uint *)(param_1 + 0x2e0) ^ ((uint)(iVar2 != 0) << 5 ^ *(uint *)(param_1 + 0x2e0)) & 0x20;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"Enterable",9);
    local_28 = 9;
    local_2c[9] = '\0';
    local_4 = 3;
    iVar2 = FUN_00558750(this,&local_2c,0);
    *(uint *)(param_1 + 0x2e0) =
         *(uint *)(param_1 + 0x2e0) ^ ((uint)(iVar2 != 0) << 7 ^ *(uint *)(param_1 + 0x2e0)) & 0x80;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"subfacilities",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 4;
  uVar1 = FUN_00558a50(this,&local_2c,(undefined4 *)0x1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((char)uVar1 != '\0') {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"StaffPlacementInterval",0x16);
    local_28 = 0x16;
    local_2c[0x16] = '\0';
    local_4 = 5;
    uVar1 = FUN_00558750(this,&local_2c,0x12);
    *(undefined4 *)(param_1 + 0x4d4) = uVar1;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"stunttrain",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 6;
  uVar1 = FUN_00558a50(this,&local_2c,(undefined4 *)0x1);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((char)uVar1 != '\0') {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"DeviceLevel",0xb);
    local_28 = 0xb;
    local_2c[0xb] = '\0';
    local_4 = 7;
    fVar3 = FUN_00558610(this,&local_2c,0.0);
    if ((float10)0.0 <= fVar3) {
      if ((float10)1.0 < fVar3) {
        fVar3 = (float10)1.0;
      }
    }
    else {
      fVar3 = (float10)0.0;
    }
    *(float *)(param_1 + 0x4e4) = (float)fVar3;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00845f70 @ 00845f70 ////

undefined4 __cdecl FUN_00845f70(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (DAT_0104ed18 == &DAT_0104ed24) {
    return 0;
  }
  puVar5 = DAT_0104ed18;
  do {
    pbVar2 = *(byte **)(puVar5[2] + 0x35c);
    pbVar4 = (byte *)*param_1;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00845fc4:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00845fc9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00845fc4;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00845fc9:
    if (iVar3 == 0) {
      return puVar5[2];
    }
    puVar5 = (undefined4 *)puVar5[1];
    if (puVar5 == &DAT_0104ed24) {
      return 0;
    }
  } while( true );
}


//// FUNCTION FUN_00846070 @ 00846070 ////

undefined4 * __thiscall FUN_00846070(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_008460b0 @ 008460b0 ////

int * __fastcall FUN_008460b0(int *param_1)

{
  FUN_00844a80(param_1);
  return param_1;
}


//// FUNCTION FUN_008460c0 @ 008460c0 ////

int * __fastcall FUN_008460c0(int *param_1)

{
  FUN_00844a20(param_1);
  return param_1;
}


//// FUNCTION FUN_008460d0 @ 008460d0 ////

void FUN_008460d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xc) = 1;
  *(undefined1 *)((int)puVar1 + 0x31) = 0;
  return;
}


//// FUNCTION FUN_00846140 @ 00846140 ////

undefined4 * __thiscall FUN_00846140(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00846180 @ 00846180 ////

void * __thiscall FUN_00846180(void *this,byte param_1)

{
  FUN_00845080((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008461a0 @ 008461a0 ////

void __thiscall FUN_008461a0(void *this,undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  
  FUN_0052bf80(this,param_1,param_2);
  FUN_00845b60((int)this);
  FUN_008453f0((int)this);
  (**(code **)(*(int *)this + 0x1a8))
            (*(undefined4 *)((int)this + 0x100),*(undefined4 *)((int)this + 0x104),
             *(undefined4 *)((int)this + 0x108),(int)this + 0xc4);
  *(undefined4 *)((int)this + 0x4cc) = 0;
  if ((DAT_010504c4 != (void *)0x0) && (*(int *)((int)this + 0x360) != 0)) {
    uVar1 = FUN_0091e9d0(DAT_010504c4,*(undefined4 **)((int)this + 0x35c));
    *(undefined4 *)((int)this + 0x4e8) = uVar1;
    return;
  }
  *(undefined4 *)((int)this + 0x4e8) = 0xffffffff;
  return;
}


//// FUNCTION FUN_00846240 @ 00846240 ////

void __fastcall FUN_00846240(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x4a0) != param_1 + 0x4ac) {
    do {
      piVar1 = *(int **)(param_1 + 0x4a0);
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
    } while (*(int *)(param_1 + 0x4a0) != param_1 + 0x4ac);
  }
  return;
}


//// FUNCTION FUN_008462b0 @ 008462b0 ////

void __thiscall FUN_008462b0(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00844f10(this,param_2);
  puVar1 = *(undefined4 **)((int)this + 4);
  if (puVar2 != puVar1) {
    uVar3 = FUN_00441060(param_2,puVar2 + 3);
    if ((char)uVar3 == '\0') {
      *param_1 = (int)puVar2;
      return;
    }
  }
  *param_1 = (int)puVar1;
  return;
}


//// FUNCTION FUN_00846320 @ 00846320 ////

void __fastcall FUN_00846320(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008460d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00846360 @ 00846360 ////

undefined4 * __thiscall
FUN_00846360(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = (undefined1 *)((int)this + 0x18);
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0xc),(char *)*param_4,param_4[1]);
  *(undefined4 *)((int)this + 0x2c) = param_4[8];
  *(undefined1 *)((int)this + 0x30) = param_5;
  *(undefined1 *)((int)this + 0x31) = 0;
  return this;
}


//// FUNCTION FUN_008463d0 @ 008463d0 ////

int __fastcall FUN_008463d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008460d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00846400 @ 00846400 ////

void * FUN_00846400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_00846360(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00846450 @ 00846450 ////

void FUN_00846450(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00846450(*(void **)((int)param_1 + 8));
    FUN_00845080((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00846490 @ 00846490 ////

void __fastcall FUN_00846490(int param_1)

{
  FUN_00846450(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_008464c0 @ 008464c0 ////

void __fastcall FUN_008464c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d60270;
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


//// FUNCTION FUN_00846510 @ 00846510 ////

undefined4 * __thiscall FUN_00846510(void *this,byte param_1)

{
  FUN_008464c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00846530 @ 00846530 ////

void __thiscall
FUN_00846530(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7088;
  local_c = ExceptionList;
  if (0x71c71c5 < *(uint *)((int)this + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_00405d50(local_50,(undefined4 *)"map/set<T> too long",0x13);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddceb4);
  }
  ExceptionList = &local_c;
  piVar3 = FUN_00846400(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
                        param_4,0);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  if (param_3 == *(undefined4 **)((int)this + 4)) {
    (*(undefined4 **)((int)this + 4))[1] = piVar3;
    **(undefined4 **)((int)this + 4) = piVar3;
    *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
  }
  else if (param_2 == '\0') {
    param_3[2] = piVar3;
    if (param_3 == *(undefined4 **)(*(int *)((int)this + 4) + 8)) {
      *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
    }
  }
  else {
    *param_3 = piVar3;
    if (param_3 == (undefined4 *)**(int **)((int)this + 4)) {
      **(int **)((int)this + 4) = (int)piVar3;
    }
  }
  cVar1 = *(char *)(piVar3[1] + 0x30);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x30) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0xc] == '\0') {
LAB_0084662b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00844fb0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_00844930(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_0084662b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00844930(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_00844fb0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_008466e0 @ 008466e0 ////

void __thiscall FUN_008466e0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce70a8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x31) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &pvStack_c;
    FUN_00405d50(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16dc0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddd664);
  }
  ExceptionList = &pvStack_c;
  FUN_00844a80((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x31) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x31) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x31) == '\0') {
          piVar6[1] = (int)piVar4;
        }
        *piVar4 = (int)piVar6;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar5 = (int *)_Memory[1];
        if ((int *)*piVar5 == _Memory) {
          *piVar5 = (int)param_2;
        }
        else {
          piVar5[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[0xc];
      *(char *)(param_2 + 0xc) = (char)_Memory[0xc];
      *(char *)(_Memory + 0xc) = (char)iVar1;
      goto LAB_00846851;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x31) == '\0') {
    piVar6[1] = (int)piVar4;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
  }
  else if ((int *)*piVar4 == _Memory) {
    *piVar4 = (int)piVar6;
  }
  else {
    piVar4[2] = (int)piVar6;
  }
  piVar5 = *(int **)((int)this + 4);
  if ((int *)*piVar5 == _Memory) {
    piVar2 = piVar4;
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      piVar2 = (int *)FUN_008449e0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_008449c0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00846851:
  if ((char)_Memory[0xc] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0xc] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00844fb0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00844930(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00844fb0(this,(int)piVar5);
              break;
            }
LAB_00846914:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00844930(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00846914;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00844fb0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00844930(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xc) = 1;
  }
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_008469b0 @ 008469b0 ////

void __fastcall FUN_008469b0(int *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce70e4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00d602b4;
  param_1[0x1e] = (int)&PTR_LAB_00d60294;
  param_1[0x28] = (int)&PTR_LAB_00d6027c;
  local_4 = 2;
  FUN_005369a0(param_1);
  if ((*(char *)(DAT_00f87b04 + 0xc4) == '\0') && (DAT_00f890c0 != 0)) {
    iVar1 = GetPlayerStudio();
    if (iVar1 != 0) {
      FUN_0052e570(param_1,'\0');
    }
  }
  if ((int *)param_1[0x123] != (int *)0x0) {
    *(int *)param_1[0x123] = param_1[0x122];
  }
  if (param_1[0x122] != 0) {
    *(int *)(param_1[0x122] + 4) = param_1[0x123];
  }
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  if ((undefined4 *)param_1[0x13c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x13c])(1);
    param_1[0x13c] = 0;
  }
  FUN_00846240((int)param_1);
  FUN_008464c0(param_1 + 0x126);
  if ((int *)param_1[0x123] != (int *)0x0) {
    *(int *)param_1[0x123] = param_1[0x122];
  }
  if (param_1[0x122] != 0) {
    *(int *)(param_1[0x122] + 4) = param_1[0x123];
  }
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  local_4 = 0xffffffff;
  FUN_00536b60(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00846ae0 @ 00846ae0 ////

void __thiscall FUN_00846ae0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 *local_8;
  bool local_4;
  undefined3 uStack_3;
  
  puVar5 = *(undefined4 **)((int)this + 4);
  local_4 = true;
  if (*(char *)((int)puVar5[1] + 0x31) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00846b44:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00846b49;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00846b44;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00846b49:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x31) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_00846530(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00844a20((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00846530(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00846c00 @ 00846c00 ////

void __thiscall FUN_00846c00(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = param_3;
  piVar6 = *(int **)((int)this + 4);
  piVar2 = param_2;
  if ((param_2 == (int *)*piVar6) && (param_3 == piVar6)) {
    FUN_00846450((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x31) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x31) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x31);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x31);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x31);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x31);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_008466e0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00846cc0 @ 00846cc0 ////

int * __thiscall FUN_00846cc0(void *this,byte param_1)

{
  FUN_008469b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00846ce0 @ 00846ce0 ////

undefined4 * __thiscall FUN_00846ce0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00846530(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_00846530(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_00846530(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00844a20((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_00846530(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00846530(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00844a80((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00846e62;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_00846530(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00846530(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00846e62:
  puVar4 = (undefined4 *)FUN_00846ae0(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00846ec0 @ 00846ec0 ////

int * __thiscall FUN_00846ec0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [20];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce70f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_00844f10(this,param_1);
  if (piVar2 != *(int **)((int)this + 4)) {
    uVar3 = FUN_00441060(puVar1,piVar2 + 3);
    if ((char)uVar3 == '\0') {
      ExceptionList = local_c;
      return piVar2 + 0xb;
    }
  }
  local_30 = local_24;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,(char *)*puVar1,puVar1[1]);
  local_10 = 0;
  local_4 = 0;
  piVar2 = FUN_00846ce0(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_00847010 @ 00847010 ////

void __fastcall FUN_00847010(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00846c00(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00847040 @ 00847040 ////

void FUN_00847040(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104ed10;
  if ((DAT_010584c8 != 0) &&
     ((uint)((int)DAT_010584cc - DAT_010584c8 >> 2) < (uint)(DAT_010584d0 - DAT_010584c8 >> 2))) {
    *DAT_010584cc = &DAT_0104ed10;
    DAT_010584cc = DAT_010584cc + 1;
    return;
  }
  FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  return;
}


//// FUNCTION FUN_008470a0 @ 008470a0 ////

undefined4 FUN_008470a0(void)

{
  void *this;
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  void *_Memory;
  char **ppcVar5;
  int local_40;
  undefined1 local_3c [4];
  void *local_38;
  int *local_34;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ce7120;
  local_c = ExceptionList;
  _Memory = (void *)0x0;
  piVar3 = (int *)0x0;
  local_38 = (void *)0x0;
  local_34 = (int *)0x0;
  local_30 = 0;
  local_4 = 0;
  puVar2 = DAT_0104ed18;
  ExceptionList = &local_c;
  if (DAT_0104ed18 != &DAT_0104ed24) {
    do {
      iVar4 = puVar2[2];
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      local_40 = iVar4;
      _strncpy(local_2c,"propshed",8);
      local_28 = 8;
      local_2c[8] = '\0';
      ppcVar5 = &local_2c;
      local_4._0_1_ = 1;
      this = (void *)FUN_00529ef0(iVar4);
      uVar1 = FUN_008b1d30(this,ppcVar5);
      local_4 = (uint)local_4._1_3_ << 8;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if ((char)uVar1 != '\0') {
        if ((_Memory == (void *)0x0) ||
           ((uint)(local_30 - (int)_Memory >> 2) <= (uint)((int)piVar3 - (int)_Memory >> 2))) {
          FUN_00458570(local_3c,piVar3,1,&local_40);
          piVar3 = local_34;
          _Memory = local_38;
        }
        else {
          *piVar3 = iVar4;
          local_34 = piVar3 + 1;
          piVar3 = local_34;
        }
      }
      puVar2 = (undefined4 *)puVar2[1];
    } while (puVar2 != &DAT_0104ed24);
    if (_Memory != (void *)0x0) {
      iVar4 = (int)piVar3 - (int)_Memory >> 2;
      if (0 < iVar4) {
        FUN_00990d30(0,iVar4);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FacilitySystem_Constructor @ 00847210 ////

void FacilitySystem_Constructor(void)

{
  bool bVar1;
  int *piVar2;
  void *pvVar3;
  char *pcVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7213;
  local_c = ExceptionList;
  if (DAT_0104ed0c == '\0') {
    local_2c = local_20;
    DAT_0104ed0c = '\x01';
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    ExceptionList = &local_c;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_script1",0x19);
    local_28 = 0x19;
    local_2c[0x19] = '\0';
    local_4 = 0;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084ab00;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_script_1star",0x1e);
    local_28 = 0x1e;
    local_2c[0x1e] = '\0';
    local_4 = 1;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084ab00;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_script_2star",0x1e);
    local_28 = 0x1e;
    local_2c[0x1e] = '\0';
    local_4 = 2;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084ab00;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_script_3star",0x1e);
    local_28 = 0x1e;
    local_2c[0x1e] = '\0';
    local_4 = 3;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084ab00;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_script_4star",0x1e);
    local_28 = 0x1e;
    local_2c[0x1e] = '\0';
    local_4 = 4;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084ab00;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_script_5star",0x1e);
    local_28 = 0x1e;
    local_2c[0x1e] = '\0';
    local_4 = 5;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084ab00;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"facility/trailer_1",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 6;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084d280;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"facility/trailer_2",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 7;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084d280;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"facility/trailer_3",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 8;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084d280;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"facility/trailer_4",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 9;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084d280;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"facility/trailer_5",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 10;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084d280;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"facility/trailer_6",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 0xb;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084d280;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"facility/trailer_7",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 0xc;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084d280;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"facility/trailer_8",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 0xd;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084d280;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"facility/trailer_9",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 0xe;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084d280;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_stage",0x17);
    local_28 = 0x17;
    local_2c[0x17] = '\0';
    local_4 = 0xf;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084aca0;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_production",0x1c);
    local_28 = 0x1c;
    local_2c[0x1c] = '\0';
    local_4 = 0x10;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_00849e00;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_post",0x16);
    local_28 = 0x16;
    local_2c[0x16] = '\0';
    local_4 = 0x11;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_008493a0;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_marketing",0x1b);
    local_28 = 0x1b;
    local_2c[0x1b] = '\0';
    local_4 = 0x12;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_008492d0;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x40;
    local_2c = _malloc(0x40);
    _strncpy(local_2c,"facility/facility_publicity_office",0x22);
    local_28 = 0x22;
    local_2c[0x22] = '\0';
    local_4 = 0x13;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_008492d0;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_catering2",0x1b);
    local_28 = 0x1b;
    local_2c[0x1b] = '\0';
    local_4 = 0x14;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_00848f20;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_bar",0x15);
    local_28 = 0x15;
    local_2c[0x15] = '\0';
    local_4 = 0x15;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_00848670;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_preproduction",0x1f);
    local_28 = 0x1f;
    local_2c[0x1f] = '\0';
    local_4 = 0x16;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_00849c60;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_stunt",0x17);
    local_28 = 0x17;
    local_2c[0x17] = '\0';
    local_4 = 0x17;
    piVar2 = FUN_00846ec0(&DAT_0104ed5c,&local_2c);
    *piVar2 = (int)FUN_0084ae20;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"fac_create",10);
    local_28 = 10;
    local_2c[10] = '\0';
    local_4 = 0x18;
    FUN_005434b0();
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"fac_queueopen",0xd);
    local_28 = 0xd;
    local_2c[0xd] = '\0';
    local_4 = 0x19;
    FUN_005434b0();
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"fac_queueclose",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1a;
    FUN_005434b0();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    FUN_0084f740();
    FUN_0084af60();
    pcVar4 = "set_boredom";
    pvVar3 = (void *)GlobalStatRegistry_Get();
    bVar1 = FUN_008c9a10(pvVar3,pcVar4);
    if (!bVar1) {
      pvVar3 = operator_new(0x74);
      local_4 = 0x1b;
      if (pvVar3 == (void *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_004ce640(pvVar3,"training_level",&PTR_PTR_00e5ceb8);
      }
      local_4 = 0xffffffff;
      pvVar3 = (void *)GlobalStatRegistry_Get();
      FUN_008cfe50(pvVar3,piVar2);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00847da0 @ 00847da0 ////

undefined1 __cdecl FUN_00847da0(undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int *piVar3;
  undefined1 uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  bool bVar9;
  undefined1 local_5;
  int local_4;
  
  local_5 = 0;
  puVar7 = DAT_0104ed18;
  uVar4 = 0;
  if (DAT_0104ed18 != &DAT_0104ed24) {
    do {
      local_4 = puVar7[2];
      pbVar8 = (byte *)*param_1;
      pbVar5 = *(byte **)(local_4 + 0x35c);
      do {
        bVar2 = *pbVar5;
        bVar9 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_00847df6:
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00847dfb;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar9 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_00847df6;
        pbVar5 = pbVar5 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_00847dfb:
      if (iVar6 == 0) {
        iVar6 = *(int *)((int)param_2 + 4);
        if ((iVar6 == 0) ||
           ((uint)(*(int *)((int)param_2 + 0xc) - iVar6 >> 2) <=
            (uint)(*(int *)((int)param_2 + 8) - iVar6 >> 2))) {
          FUN_00458570(param_2,*(undefined4 **)((int)param_2 + 8),1,&local_4);
        }
        else {
          piVar3 = *(int **)((int)param_2 + 8);
          *piVar3 = local_4;
          *(int **)((int)param_2 + 8) = piVar3 + 1;
        }
        local_5 = 1;
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
      uVar4 = local_5;
    } while ((undefined4 *)*puVar1 != &DAT_0104ed24);
  }
  return uVar4;
}


//// FUNCTION FUN_00847e70 @ 00847e70 ////

void __fastcall FUN_00847e70(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d60270;
  return;
}


//// FUNCTION FUN_00847ed0 @ 00847ed0 ////

int __fastcall FUN_00847ed0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008460d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00847f00 @ 00847f00 ////

undefined4 * __fastcall FUN_00847f00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce727a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00537ac0(param_1);
  *param_1 = &PTR_FUN_00d602b4;
  param_1[0x1e] = &PTR_LAB_00d60294;
  param_1[0x28] = &PTR_LAB_00d6027c;
  param_1[0x124] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x129] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  puVar1 = param_1 + 299;
  param_1[0x12d] = 0;
  *puVar1 = 0;
  param_1[300] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x126] = &PTR_LAB_00d60270;
  param_1[0x128] = puVar1;
  *puVar1 = param_1 + 0x127;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x139] = 0;
  local_4 = 4;
  param_1[0x13c] = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  param_1[0x124] = param_1;
  FUN_00acdb9e(0xe5cf3c);
  iVar2 = FUN_0097dda0();
  param_1[0x125] = iVar2;
  if (s___AV__InList_VCSubFacility_TM____00e5cf14[0x25] != '\0') {
    iVar2 = 0x488;
    pcVar4 = "FacilityLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe5cf3c);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AV__InList_VCSubFacility_TM____00e5cf14[0x25] = '\0';
  }
  *(undefined1 *)(param_1 + 0x13b) = 0;
  param_1[0x134] = 0;
  param_1[0x139] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00848050 @ 00848050 ////

undefined4 * FUN_00848050(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce729b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x504);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00847f00(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_008480b0 @ 008480b0 ////

int * __cdecl FUN_008480b0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce72c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0104ed0c == '\0') {
    ExceptionList = &pvStack_c;
    FacilitySystem_Constructor();
  }
  local_6c = local_60;
  piVar4 = (int *)0x0;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  FUN_004015d0(&local_6c,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_0048ad50((int *)&local_6c);
  puVar2 = FUN_0040d6b0(local_2c,"data/",&local_6c);
  puVar2 = FUN_004312e0(local_4c,puVar2,".ini");
  local_4._0_1_ = 2;
  uVar3 = FUN_009d3660(puVar2,(uint *)0x0);
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,(char)uVar3);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if ((char)uVar3 != '\0') {
    FUN_008462b0(&DAT_0104ed5c,(int *)&param_1,&local_6c);
    if (param_1 == DAT_0104ed60) {
      piVar4 = FUN_00848050();
    }
    else {
      piVar4 = (int *)(*(code *)param_1[0xb])();
    }
    piVar1 = piVar4 + 0x122;
    piVar4[0x123] = (int)&DAT_0104ed24;
    *piVar1 = (int)DAT_0104ed24;
    *(int **)((int)DAT_0104ed24 + 4) = piVar1;
    DAT_0104ed24 = piVar1;
    (**(code **)(*piVar4 + 0x1a4))(&local_6c,param_2);
    FUN_00845290((int)piVar4);
    if ((char)param_2 != '\0') {
      (**(code **)(*piVar4 + 0x124))();
    }
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = pvStack_c;
  return piVar4;
}


//// FUNCTION FUN_00848240 @ 00848240 ////

void __cdecl FUN_00848240(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  char **ppcVar6;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [12];
  char *local_20;
  undefined4 local_1c;
  uint local_18;
  char local_14 [20];
  
  piVar1 = FUN_008480b0(param_1,0);
  local_20 = local_14;
  local_48 = 0.0;
  local_44 = 0;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x14;
  _strncpy(local_20,"facility_production",0x13);
  ppcVar6 = &local_20;
  local_1c = 0x13;
  local_20[0x13] = '\0';
  piVar2 = (int *)FUN_00845f70(ppcVar6);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x34))(local_2c);
    FUN_009840b0(&local_40,puVar3);
    local_48 = local_40;
    local_44 = uStack_3c;
  }
  puVar3 = (undefined4 *)FUN_0046d2b0(&local_40,&local_48,1,0x1b);
  uStack_38 = *puVar3;
  uStack_34 = puVar3[1];
  uStack_30 = 0;
  fVar5 = FUN_004012c0(0.0);
  fStack_4c = (float)fVar5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(&uStack_38,&fStack_4c);
    iVar4 = FUN_005291b0((int)piVar1);
    *(undefined1 *)(iVar4 + 0x60) = 1;
  }
  return;
}


//// FUNCTION FUN_00848350 @ 00848350 ////

void __fastcall FUN_00848350(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00848390 @ 00848390 ////

void FUN_00848390(void)

{
  return;
}


//// FUNCTION FUN_008483a0 @ 008483a0 ////

int * __thiscall FUN_008483a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_008483e0 @ 008483e0 ////

void __fastcall FUN_008483e0(int *param_1)

{
  FUN_005369a0(param_1);
  if ((undefined4 *)param_1[0x146] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x146])(1);
  }
  (**(code **)(param_1[0x141] + 4))();
  param_1[0x146] = 0;
                    /* WARNING: Could not recover jumptable at 0x00848415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1[0x141])();
  return;
}


//// FUNCTION FUN_00848420 @ 00848420 ////

void __fastcall FUN_00848420(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce72eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00533850(param_1);
  this = operator_new(0x104);
  puVar1 = (undefined4 *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_008afc90(this,(int)param_1,param_1[0xfb]);
  }
  local_4 = 0xffffffff;
  (**(code **)(param_1[0x141] + 4))();
  param_1[0x146] = (int)puVar1;
  (**(code **)param_1[0x141])();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008484a0 @ 008484a0 ////

int * __thiscall FUN_008484a0(void *this,float *param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (*(void **)((int)this + 0x518) != (void *)0x0) {
    piVar1 = FUN_008af2c0(*(void **)((int)this + 0x518),param_1,param_2);
    return piVar1;
  }
  return (int *)0x0;
}


//// FUNCTION FUN_008484c0 @ 008484c0 ////

void __fastcall FUN_008484c0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7308;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00848590 @ 00848590 ////

void __fastcall FUN_00848590(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce7336;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00d1801c;
  param_1[0x1e] = (int)&PTR_LAB_00d17ffc;
  param_1[0x28] = (int)&PTR_LAB_00d17fe4;
  local_4 = 1;
  if ((undefined4 *)param_1[0x146] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x146])(1);
  }
  (**(code **)(param_1[0x141] + 4))();
  param_1[0x146] = 0;
  (**(code **)param_1[0x141])();
  param_1[0x141] = (int)&PTR_FUN_00d17fc8;
  if ((int *)param_1[0x143] != (int *)0x0) {
    *(int *)param_1[0x143] = param_1[0x142];
  }
  if (param_1[0x142] != 0) {
    *(int *)(param_1[0x142] + 4) = param_1[0x143];
  }
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x146] = 0;
  if ((int *)param_1[0x143] != (int *)0x0) {
    *(int *)param_1[0x143] = param_1[0x142];
  }
  if (param_1[0x142] != 0) {
    *(int *)(param_1[0x142] + 4) = param_1[0x143];
  }
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  local_4 = 0xffffffff;
  FUN_008469b0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00848670 @ 00848670 ////

undefined4 * FUN_00848670(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce734b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x51c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00847f00(puVar1);
    *puVar1 = &PTR_FUN_00d1801c;
    puVar1[0x1e] = &PTR_LAB_00d17ffc;
    puVar1[0x28] = &PTR_LAB_00d17fe4;
    puVar1[0x144] = 0;
    puVar1[0x142] = 0;
    puVar1[0x143] = 0;
    puVar1[0x146] = 0;
    puVar1[0x144] = puVar1 + 0x141;
    puVar1[0x141] = &PTR_FUN_00d17fc8;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00848710 @ 00848710 ////

void __fastcall FUN_00848710(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00848750 @ 00848750 ////

void FUN_00848750(void)

{
  return;
}


//// FUNCTION FUN_00848770 @ 00848770 ////

int * __thiscall FUN_00848770(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_008487b0 @ 008487b0 ////

int * __thiscall FUN_008487b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_008487f0 @ 008487f0 ////

void __fastcall FUN_008487f0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_005369a0(param_1);
  puVar2 = (undefined4 *)param_1[0x14c];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x147] + 4))();
    param_1[0x14c] = 0;
    (**(code **)param_1[0x147])();
  }
  if ((undefined4 *)param_1[0x146] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x146])(1);
  }
  (**(code **)(param_1[0x141] + 4))();
  param_1[0x146] = 0;
                    /* WARNING: Could not recover jumptable at 0x0084885a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1[0x141])();
  return;
}


//// FUNCTION FUN_00848860 @ 00848860 ////

void __fastcall FUN_00848860(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce736b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00536930(param_1);
  puVar1 = (undefined4 *)0x0;
  if (param_1[0x146] == 0) {
    this = operator_new(0xd4);
    local_4 = 0;
    if (this != (void *)0x0) {
      puVar1 = FUN_008b1210(this,(int)param_1,param_1[0xfb]);
    }
    local_4 = 0xffffffff;
    (**(code **)(param_1[0x141] + 4))();
    param_1[0x146] = (int)puVar1;
    (**(code **)param_1[0x141])();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008488f0 @ 008488f0 ////

void __fastcall FUN_008488f0(int *param_1,undefined4 param_2)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce738b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00535510(param_1,param_2);
  puVar1 = (undefined4 *)0x0;
  if (param_1[0x146] == 0) {
    this = operator_new(0xd4);
    local_4 = 0;
    if (this != (void *)0x0) {
      puVar1 = FUN_008b1210(this,(int)param_1,param_1[0xfb]);
    }
    local_4 = 0xffffffff;
    (**(code **)(param_1[0x141] + 4))();
    param_1[0x146] = (int)puVar1;
    (**(code **)param_1[0x141])();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00848980 @ 00848980 ////

int * __thiscall FUN_00848980(void *this,float *param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (*(void **)((int)this + 0x518) != (void *)0x0) {
    piVar1 = FUN_008b0920(*(void **)((int)this + 0x518),param_1,param_2);
    return piVar1;
  }
  return (int *)0x0;
}


//// FUNCTION FUN_008489a0 @ 008489a0 ////

void __fastcall FUN_008489a0(int param_1)

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


//// FUNCTION FUN_00848a00 @ 00848a00 ////

void __fastcall FUN_00848a00(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce73a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00848c20 @ 00848c20 ////

void __fastcall FUN_00848c20(int param_1)

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


//// FUNCTION FUN_00848c40 @ 00848c40 ////

void __fastcall FUN_00848c40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d60760;
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


//// FUNCTION FUN_00848ce0 @ 00848ce0 ////

void __fastcall FUN_00848ce0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d60770;
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


//// FUNCTION FUN_00848d30 @ 00848d30 ////

undefined4 * __fastcall FUN_00848d30(undefined4 *param_1)

{
  FUN_00847f00(param_1);
  *param_1 = &PTR_FUN_00d607bc;
  param_1[0x1e] = &PTR_LAB_00d60798;
  param_1[0x28] = &PTR_LAB_00d60780;
  param_1[0x144] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = param_1 + 0x141;
  param_1[0x141] = &PTR_FUN_00d60760;
  param_1[0x146] = 0;
  param_1[0x14a] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = param_1 + 0x147;
  param_1[0x147] = &PTR_LAB_00d60770;
  param_1[0x14c] = 0;
  return param_1;
}


//// FUNCTION FUN_00848da0 @ 00848da0 ////

void __fastcall FUN_00848da0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce7404;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00d607bc;
  param_1[0x1e] = (int)&PTR_LAB_00d60798;
  param_1[0x28] = (int)&PTR_LAB_00d60780;
  puVar2 = (undefined4 *)param_1[0x14c];
  local_4 = 2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x147] + 4))();
    param_1[0x14c] = 0;
    (**(code **)param_1[0x147])();
  }
  if ((undefined4 *)param_1[0x146] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x146])(1);
  }
  (**(code **)(param_1[0x141] + 4))();
  param_1[0x146] = 0;
  (**(code **)param_1[0x141])();
  param_1[0x147] = (int)&PTR_LAB_00d60770;
  if ((int *)param_1[0x149] != (int *)0x0) {
    *(int *)param_1[0x149] = param_1[0x148];
  }
  if (param_1[0x148] != 0) {
    *(int *)(param_1[0x148] + 4) = param_1[0x149];
  }
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14c] = 0;
  if ((int *)param_1[0x149] != (int *)0x0) {
    *(int *)param_1[0x149] = param_1[0x148];
  }
  if (param_1[0x148] != 0) {
    *(int *)(param_1[0x148] + 4) = param_1[0x149];
  }
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x141] = (int)&PTR_FUN_00d60760;
  if ((int *)param_1[0x143] != (int *)0x0) {
    *(int *)param_1[0x143] = param_1[0x142];
  }
  if (param_1[0x142] != 0) {
    *(int *)(param_1[0x142] + 4) = param_1[0x143];
  }
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x146] = 0;
  if ((int *)param_1[0x143] != (int *)0x0) {
    *(int *)param_1[0x143] = param_1[0x142];
  }
  if (param_1[0x142] != 0) {
    *(int *)(param_1[0x142] + 4) = param_1[0x143];
  }
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  local_4 = 0xffffffff;
  FUN_008469b0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00848f20 @ 00848f20 ////

undefined4 * FUN_00848f20(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce741b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x534);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00848d30(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00848f80 @ 00848f80 ////

int * __thiscall FUN_00848f80(void *this,byte param_1)

{
  FUN_00848da0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00848fa0 @ 00848fa0 ////

void __fastcall FUN_00848fa0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00848fe0 @ 00848fe0 ////

void FUN_00848fe0(void)

{
  return;
}


//// FUNCTION FUN_00848ff0 @ 00848ff0 ////

void __fastcall FUN_00848ff0(int *param_1)

{
  char cVar1;
  
  if ((param_1[0xae] == 5) || (param_1[0xae] == 4)) {
    if ((char)param_1[0x141] == '\0') {
      cVar1 = (**(code **)(*param_1 + 0xc4))();
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1 + 0x141) = 1;
        DAT_0104ed68 = DAT_0104ed68 + 1;
        FUN_00845870(param_1);
        return;
      }
      goto LAB_00849035;
    }
  }
  else {
LAB_00849035:
    if ((char)param_1[0x141] == '\0') goto LAB_0084905a;
  }
  cVar1 = (**(code **)(*param_1 + 0xc4))();
  if (cVar1 != '\0') {
    DAT_0104ed68 = DAT_0104ed68 + -1;
    *(undefined1 *)(param_1 + 0x141) = 0;
  }
LAB_0084905a:
  FUN_00845870(param_1);
  return;
}


//// FUNCTION FUN_00849070 @ 00849070 ////

void __thiscall FUN_00849070(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x508) + 4))();
  *(undefined4 *)((int)this + 0x51c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x508))();
  return;
}


//// FUNCTION FUN_008490a0 @ 008490a0 ////

undefined4 __fastcall FUN_008490a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x51c);
}


//// FUNCTION FUN_008490b0 @ 008490b0 ////

void __fastcall FUN_008490b0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7438;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00849180 @ 00849180 ////

undefined4 * __fastcall FUN_00849180(undefined4 *param_1)

{
  FUN_00847f00(param_1);
  *param_1 = &PTR_FUN_00d609c4;
  param_1[0x1e] = &PTR_LAB_00d609a4;
  param_1[0x28] = &PTR_LAB_00d6098c;
  *(undefined1 *)(param_1 + 0x141) = 0;
  param_1[0x145] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = param_1 + 0x142;
  param_1[0x142] = &PTR_FUN_00d23630;
  param_1[0x147] = 0;
  DAT_0104ed6c = DAT_0104ed6c + 1;
  return param_1;
}


//// FUNCTION FUN_008491e0 @ 008491e0 ////

void __fastcall FUN_008491e0(int *param_1)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce7466;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_00d609c4;
  param_1[0x1e] = (int)&PTR_LAB_00d609a4;
  param_1[0x28] = (int)&PTR_LAB_00d6098c;
  local_4 = 1;
  cVar1 = FUN_005281a0((int)param_1);
  if ((cVar1 == '\0') && ((char)param_1[0x141] != '\0')) {
    DAT_0104ed68 = DAT_0104ed68 + -1;
  }
  DAT_0104ed6c = DAT_0104ed6c + -1;
  param_1[0x142] = (int)&PTR_FUN_00d23630;
  if ((int *)param_1[0x144] != (int *)0x0) {
    *(int *)param_1[0x144] = param_1[0x143];
  }
  if (param_1[0x143] != 0) {
    *(int *)(param_1[0x143] + 4) = param_1[0x144];
  }
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x147] = 0;
  if ((int *)param_1[0x144] != (int *)0x0) {
    *(int *)param_1[0x144] = param_1[0x143];
  }
  if (param_1[0x143] != 0) {
    *(int *)(param_1[0x143] + 4) = param_1[0x144];
  }
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  local_4 = 0xffffffff;
  FUN_008469b0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008492d0 @ 008492d0 ////

undefined4 * FUN_008492d0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce747b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x520);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00849180(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00849330 @ 00849330 ////

int * __thiscall FUN_00849330(void *this,byte param_1)

{
  FUN_008491e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00849350 @ 00849350 ////

void __fastcall FUN_00849350(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00849390 @ 00849390 ////

void FUN_00849390(void)

{
  return;
}


//// FUNCTION FUN_008493a0 @ 008493a0 ////

undefined4 * FUN_008493a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce749b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x504);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00847f00(puVar1);
    *puVar1 = &PTR_FUN_00d17794;
    puVar1[0x1e] = &PTR_LAB_00d17774;
    puVar1[0x28] = &PTR_LAB_00d1775c;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00849410 @ 00849410 ////

void __fastcall FUN_00849410(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce74b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008494e0 @ 008494e0 ////

void __fastcall FUN_008494e0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00849510 @ 00849510 ////

void FUN_00849510(void)

{
  return;
}


//// FUNCTION CFacilityPreProduction_GetOccupyingRoom @ 00849560 ////

undefined4 __fastcall CFacilityPreProduction_GetOccupyingRoom(int param_1)

{
  return *(undefined4 *)(param_1 + 0x528);
}


//// FUNCTION CFacilityPreProduction_SetOccupyingRoom @ 00849570 ////

void __thiscall CFacilityPreProduction_SetOccupyingRoom(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x514) + 4))();
  *(undefined4 *)((int)this + 0x528) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x514))();
  return;
}


//// FUNCTION FUN_008495c0 @ 008495c0 ////

void __fastcall FUN_008495c0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce74d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION CFacilityPreProduction_ReleaseAllRoomAssignments @ 00849690 ////

void __fastcall CFacilityPreProduction_ReleaseAllRoomAssignments(int *param_1)

{
  void *this;
  int *piVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7510;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = (void *)FUN_005295b0(param_1);
  if (this != (void *)0x0) {
    FUN_00938f20((int)this);
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"director",8);
    local_28 = 8;
    local_2c[8] = '\0';
    local_4 = 0;
    piVar1 = (int *)FUN_00938a70(this,&local_2c);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (piVar1 != (int *)0x0) {
      FUN_0093b350(piVar1,0);
      FUN_0093b340(piVar1,0);
      FUN_0093b330(piVar1,0);
      (**(code **)(*piVar1 + 0x68))();
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"actors",6);
    local_28 = 6;
    local_2c[6] = '\0';
    local_4 = 1;
    piVar1 = (int *)FUN_00938a70(this,&local_2c);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (piVar1 != (int *)0x0) {
      FUN_0093b350(piVar1,0);
      FUN_0093b340(piVar1,0);
      FUN_0093b330(piVar1,0);
      (**(code **)(*piVar1 + 0x68))();
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"extras",6);
    local_28 = 6;
    local_2c[6] = '\0';
    local_4 = 2;
    piVar1 = (int *)FUN_00938a70(this,&local_2c);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (piVar1 != (int *)0x0) {
      FUN_0093b350(piVar1,0);
      FUN_0093b340(piVar1,0);
      FUN_0093b330(piVar1,0);
      (**(code **)(*piVar1 + 0x68))();
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"crew",4);
    local_28 = 4;
    local_2c[4] = '\0';
    local_4 = 3;
    piVar1 = (int *)FUN_00938a70(this,&local_2c);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (piVar1 != (int *)0x0) {
      FUN_0093b350(piVar1,0);
      FUN_0093b340(piVar1,0);
      FUN_0093b330(piVar1,0);
      (**(code **)(*piVar1 + 0x68))();
    }
  }
  (**(code **)(param_1[0x145] + 4))();
  param_1[0x14a] = 0;
  (**(code **)param_1[0x145])();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00849a40 @ 00849a40 ////

undefined4 * __fastcall FUN_00849a40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7564;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00847f00(param_1);
  piVar1 = param_1 + 0x141;
  *param_1 = &PTR_FUN_00d60c14;
  param_1[0x1e] = &PTR_LAB_00d60bf4;
  param_1[0x28] = &PTR_LAB_00d60bdc;
  param_1[0x143] = 0;
  *piVar1 = 0;
  param_1[0x142] = 0;
  param_1[0x148] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = param_1 + 0x145;
  param_1[0x145] = &PTR_FUN_00d18c3c;
  param_1[0x14a] = 0;
  local_4 = 2;
  param_1[0x143] = param_1;
  FUN_00acdb9e(0xe5cfbc);
  iVar2 = FUN_0097dda0();
  param_1[0x144] = iVar2;
  if (s___AV__CP_VCAssetActivityManager__00e5cf90[0x2a] != '\0') {
    iVar2 = 0x504;
    pcVar4 = "FacilityPreLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe5cfbc);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AV__CP_VCAssetActivityManager__00e5cf90[0x2a] = '\0';
  }
  param_1[0x142] = &DAT_0104ed84;
  *piVar1 = (int)DAT_0104ed84;
  *(int **)((int)DAT_0104ed84 + 4) = piVar1;
  DAT_0104ed84 = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00849b60 @ 00849b60 ////

void __fastcall FUN_00849b60(int *param_1)

{
  *param_1 = (int)&PTR_FUN_00d60c14;
  param_1[0x1e] = (int)&PTR_LAB_00d60bf4;
  param_1[0x28] = (int)&PTR_LAB_00d60bdc;
  if ((int *)param_1[0x142] != (int *)0x0) {
    *(int *)param_1[0x142] = param_1[0x141];
  }
  if (param_1[0x141] != 0) {
    *(int *)(param_1[0x141] + 4) = param_1[0x142];
  }
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x145] = (int)&PTR_FUN_00d18c3c;
  if ((int *)param_1[0x147] != (int *)0x0) {
    *(int *)param_1[0x147] = param_1[0x146];
  }
  if (param_1[0x146] != 0) {
    *(int *)(param_1[0x146] + 4) = param_1[0x147];
  }
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x14a] = 0;
  if ((int *)param_1[0x147] != (int *)0x0) {
    *(int *)param_1[0x147] = param_1[0x146];
  }
  if (param_1[0x146] != 0) {
    *(int *)(param_1[0x146] + 4) = param_1[0x147];
  }
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  if ((int *)param_1[0x142] != (int *)0x0) {
    *(int *)param_1[0x142] = param_1[0x141];
  }
  if (param_1[0x141] != 0) {
    *(int *)(param_1[0x141] + 4) = param_1[0x142];
  }
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  FUN_008469b0(param_1);
  return;
}


//// FUNCTION FUN_00849c60 @ 00849c60 ////

undefined4 * FUN_00849c60(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce757b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x52c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00849a40(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00849cc0 @ 00849cc0 ////

int * __thiscall FUN_00849cc0(void *this,byte param_1)

{
  FUN_00849b60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00849ce0 @ 00849ce0 ////

void __fastcall FUN_00849ce0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d60de4;
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


//// FUNCTION FUN_00849d30 @ 00849d30 ////

undefined4 * __thiscall FUN_00849d30(void *this,byte param_1)

{
  FUN_00849ce0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00849d50 @ 00849d50 ////

void __fastcall FUN_00849d50(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d60de4;
  return;
}


//// FUNCTION FUN_00849db0 @ 00849db0 ////

void __fastcall FUN_00849db0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00849df0 @ 00849df0 ////

void FUN_00849df0(void)

{
  return;
}


//// FUNCTION FUN_00849e00 @ 00849e00 ////

undefined4 * FUN_00849e00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce75bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x504);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00847f00(puVar1);
    *puVar1 = &PTR_FUN_00d1758c;
    puVar1[0x1e] = &PTR_LAB_00d1756c;
    puVar1[0x28] = &PTR_LAB_00d17554;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00849e70 @ 00849e70 ////

void __fastcall FUN_00849e70(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce75d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00849f40 @ 00849f40 ////

void __fastcall FUN_00849f40(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00849f70 @ 00849f70 ////

void FUN_00849f70(void)

{
  return;
}


//// FUNCTION FUN_00849f90 @ 00849f90 ////

int * __thiscall FUN_00849f90(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0084a090 @ 0084a090 ////

undefined4 __fastcall FUN_0084a090(int param_1)

{
  return *(undefined4 *)(param_1 + 0x528);
}


//// FUNCTION FUN_0084a0a0 @ 0084a0a0 ////

undefined4 __fastcall FUN_0084a0a0(int param_1)

{
  int *piVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  int iVar5;
  
  if (((*(int *)(param_1 + 0x52c) == 0) && (*(int *)(param_1 + 0x534) != 0)) &&
     (*(void **)(param_1 + 0x1fc) != (void *)0x0)) {
    iVar5 = 0;
    pTVar4 = &TM::CScriptRoom::RTTI_Type_Descriptor;
    pTVar3 = &TM::TMRoom::RTTI_Type_Descriptor;
    iVar2 = 0;
    piVar1 = (int *)FUN_00938a70(*(void **)(param_1 + 0x1fc),(undefined4 *)(param_1 + 0x530));
    iVar2 = FUN_00ace790(piVar1,iVar2,pTVar3,pTVar4,iVar5);
    *(int *)(param_1 + 0x52c) = iVar2;
  }
  return *(undefined4 *)(param_1 + 0x52c);
}


//// FUNCTION FUN_0084a120 @ 0084a120 ////

void __fastcall FUN_0084a120(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce75f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0084a1f0 @ 0084a1f0 ////

void __thiscall FUN_0084a1f0(void *this,undefined4 *param_1,char param_2)

{
  void *this_00;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008461a0(this,param_1,param_2);
  this_00 = (void *)FUN_00528140((int)this);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"research",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4 = 0;
  FUN_00558a50(this_00,&local_2c,(undefined4 *)0x1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0084a2a0 @ 0084a2a0 ////

void __fastcall FUN_0084a2a0(int param_1)

{
  void *this;
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x528) != 0) &&
     (this = *(void **)(*(int *)(param_1 + 0x528) + 0x210), this != (void *)0x0)) {
    FUN_005d1980(this,0);
    iVar1 = *(int *)(param_1 + 0x528);
    (**(code **)(*(int *)(iVar1 + 0x2e8) + 4))();
    *(undefined4 *)(iVar1 + 0x2fc) = 0;
    (*(code *)**(undefined4 **)(iVar1 + 0x2e8))();
  }
  (**(code **)(*(int *)(param_1 + 0x514) + 4))();
  *(undefined4 *)(param_1 + 0x528) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x514))();
  if (*(int *)(param_1 + 0x52c) != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x52c) + 0x2a4);
    if (piVar2 != (int *)0x0) {
      FUN_00935830(piVar2);
      (**(code **)(**(int **)(*(int *)(param_1 + 0x52c) + 0x2a4) + 0x4c))();
    }
    FUN_00935830(*(int **)(param_1 + 0x52c));
    (**(code **)(**(int **)(param_1 + 0x52c) + 0x4c))();
    *(undefined4 *)(param_1 + 0x52c) = 0;
  }
  FUN_004015d0((void *)(param_1 + 0x530),"",0);
  if (DAT_0104c6c8 != 0) {
    FUN_00932560(DAT_0104c6c8);
  }
  return;
}


//// FUNCTION CFacilityScriptOffice_RegisterSaveFields @ 0084a380 ////

void __fastcall CFacilityScriptOffice_RegisterSaveFields(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7640;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\FacilityScriptOffice.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x31;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x49c));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("PProject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x49c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\FacilityScriptOffice.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x32;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("ScriptRoomName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x4b8));
  }
  Facility_RegisterSubFacilitiesSaveField(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CFacilityScriptOffice_Constructor @ 0084a580 ////

undefined4 * __fastcall CFacilityScriptOffice_Constructor(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7682;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00847f00(param_1);
  piVar1 = param_1 + 0x141;
  *param_1 = &PTR_FUN_00d60e94;
  param_1[0x1e] = &PTR_LAB_00d60e74;
  param_1[0x28] = &PTR_LAB_00d60e5c;
  param_1[0x143] = 0;
  *piVar1 = 0;
  param_1[0x142] = 0;
  param_1[0x148] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = param_1 + 0x145;
  param_1[0x145] = &PTR_FUN_00d18c3c;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = param_1 + 0x14f;
  *(undefined1 *)(param_1 + 0x14f) = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0x14;
  local_4 = 3;
  param_1[0x143] = param_1;
  FUN_00acdb9e(0xe5d01c);
  iVar2 = FUN_0097dda0();
  param_1[0x144] = iVar2;
  if (s___AV__InList_VCFacilityPreProduc_00e5cfec[0x2f] != '\0') {
    iVar2 = 0x504;
    pcVar4 = "FacilitySOLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe5d01c);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AV__InList_VCFacilityPreProduc_00e5cfec[0x2f] = '\0';
  }
  param_1[0x142] = &DAT_0104edb8;
  *piVar1 = (int)DAT_0104edb8;
  *(int **)((int)DAT_0104edb8 + 4) = piVar1;
  DAT_0104edb8 = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0084a6c0 @ 0084a6c0 ////

void __fastcall FUN_0084a6c0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce76c2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00d60e94;
  param_1[0x1e] = (int)&PTR_LAB_00d60e74;
  param_1[0x28] = (int)&PTR_LAB_00d60e5c;
  local_4 = 3;
  if ((int *)param_1[0x142] != (int *)0x0) {
    *(int *)param_1[0x142] = param_1[0x141];
  }
  if (param_1[0x141] != 0) {
    *(int *)(param_1[0x141] + 4) = param_1[0x142];
  }
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  puVar2 = (undefined4 *)param_1[0x14a];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x145] + 4))();
    param_1[0x14a] = 0;
    (**(code **)param_1[0x145])();
  }
  if (0x14 < (uint)param_1[0x14e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14c]);
  }
  param_1[0x145] = (int)&PTR_FUN_00d18c3c;
  if ((int *)param_1[0x147] != (int *)0x0) {
    *(int *)param_1[0x147] = param_1[0x146];
  }
  if (param_1[0x146] != 0) {
    *(int *)(param_1[0x146] + 4) = param_1[0x147];
  }
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x14a] = 0;
  if ((int *)param_1[0x147] != (int *)0x0) {
    *(int *)param_1[0x147] = param_1[0x146];
  }
  if (param_1[0x146] != 0) {
    *(int *)(param_1[0x146] + 4) = param_1[0x147];
  }
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  if ((int *)param_1[0x142] != (int *)0x0) {
    *(int *)param_1[0x142] = param_1[0x141];
  }
  if (param_1[0x141] != 0) {
    *(int *)(param_1[0x141] + 4) = param_1[0x142];
  }
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  local_4 = 0xffffffff;
  FUN_008469b0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0084a840 @ 0084a840 ////

void __fastcall FUN_0084a840(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puStack_2c;
  undefined1 auStack_c [12];
  
  if (param_1[0x14a] != 0) {
    puStack_2c = (undefined1 *)0x84a859;
    iVar1 = FUN_0084a0a0((int)param_1);
    if (iVar1 != 0) {
      puStack_2c = (undefined1 *)0x84a86c;
      piVar2 = (int *)FUN_005b22a0(param_1[0x14a]);
      puStack_2c = (undefined1 *)0x84a873;
      iVar1 = (**(code **)(*piVar2 + 0x24))();
      if (iVar1 == 2) {
        puStack_2c = (undefined1 *)0x84a887;
        iVar1 = FUN_005b2130(param_1[0x14a]);
        puStack_2c = (undefined1 *)0x84a88e;
        uVar3 = FUN_004bdc40(iVar1);
        if ((char)uVar3 != '\0') {
          puStack_2c = auStack_c;
          (**(code **)(*param_1 + 0x48))();
          FUN_00470a70(DAT_0104917c,param_1[0x14a],0x80000a7f,0,0);
          if (*(int **)(param_1[0x14a] + 0x210) != (int *)0x0) {
            (**(code **)(**(int **)(param_1[0x14a] + 0x210) + 0x2c))(&stack0xffffffd8);
            (**(code **)(**(int **)(param_1[0x14a] + 0x210) + 0x30))(&puStack_2c);
            FUN_005d35f0(*(int *)(param_1[0x14a] + 0x210));
            FUN_005d0f50(*(int *)(param_1[0x14a] + 0x210));
            *(undefined1 *)(*(int *)(param_1[0x14a] + 0x210) + 0x15d) = 1;
            FUN_005d1980(*(void **)(param_1[0x14a] + 0x210),0);
          }
          if (*(int **)(param_1[0x14b] + 0x2a4) != (int *)0x0) {
            (**(code **)(**(int **)(param_1[0x14b] + 0x2a4) + 0x4c))();
          }
          (**(code **)(*(int *)param_1[0x14b] + 0x4c))();
          puStack_2c = (undefined1 *)0x84a9c4;
          FUN_0084a2a0((int)param_1);
        }
      }
    }
  }
  if (param_1[0x14a] != 0) {
    puStack_2c = (undefined1 *)0x84a9d3;
    piVar2 = (int *)FUN_005b22a0(param_1[0x14a]);
    puStack_2c = (undefined1 *)0x84a9da;
    iVar1 = (**(code **)(*piVar2 + 0x24))();
    if (iVar1 != 2) {
      puStack_2c = (undefined1 *)0x84a9e6;
      FUN_0084a2a0((int)param_1);
    }
  }
  return;
}


//// FUNCTION FUN_0084a9f0 @ 0084a9f0 ////

void __fastcall FUN_0084a9f0(int *param_1)

{
  FUN_00845870(param_1);
  FUN_0084a840(param_1);
  return;
}


//// FUNCTION FUN_0084aa00 @ 0084aa00 ////

void __thiscall FUN_0084aa00(void *this,undefined4 param_1,void *param_2)

{
  void *this_00;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  void *apvStack_20 [2];
  uint uStack_18;
  
  if (*(int *)((int)this + 0x528) != 0) {
    FUN_0084a2a0((int)this);
  }
  (**(code **)(*(int *)((int)this + 0x514) + 4))();
  *(undefined4 *)((int)this + 0x528) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x514))();
  *(void **)((int)this + 0x52c) = param_2;
  if (param_2 == (void *)0x0) {
    FUN_004015d0((void *)((int)this + 0x530),"",0);
  }
  else {
    puVar2 = FUN_0093c060(param_2,apvStack_20);
    this_00 = (void *)((int)this + 0x530);
    FUN_004015d0(this_00,(char *)*puVar2,puVar2[1]);
    if (0x14 < uStack_18) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_20[0]);
    }
    uVar4 = 0xffffffff;
    uVar3 = FUN_00413450(this_00,"_",5,1);
    puVar2 = FUN_00430770(this_00,apvStack_20,uVar3 + 1,uVar4);
    FUN_004015d0(this_00,(char *)*puVar2,puVar2[1]);
    if (0x14 < uStack_18) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_20[0]);
    }
  }
  iVar1 = *(int *)((int)this + 0x528);
  (**(code **)(*(int *)(iVar1 + 0x2e8) + 4))();
  *(void **)(iVar1 + 0x2fc) = this;
  (*(code *)**(undefined4 **)(iVar1 + 0x2e8))();
  return;
}


//// FUNCTION FUN_0084ab00 @ 0084ab00 ////

undefined4 * FUN_0084ab00(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce76db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x550);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = CFacilityScriptOffice_Constructor(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0084ab60 @ 0084ab60 ////

int * __thiscall FUN_0084ab60(void *this,byte param_1)

{
  FUN_0084a6c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0084ab80 @ 0084ab80 ////

void __fastcall FUN_0084ab80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d61068;
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


//// FUNCTION FUN_0084abd0 @ 0084abd0 ////

undefined4 * __thiscall FUN_0084abd0(void *this,byte param_1)

{
  FUN_0084ab80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0084abf0 @ 0084abf0 ////

void __fastcall FUN_0084abf0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d61068;
  return;
}


//// FUNCTION FUN_0084ac50 @ 0084ac50 ////

void __fastcall FUN_0084ac50(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0084ac90 @ 0084ac90 ////

void FUN_0084ac90(void)

{
  return;
}


//// FUNCTION FUN_0084aca0 @ 0084aca0 ////

undefined4 * FUN_0084aca0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce771b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x504);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00847f00(puVar1);
    *puVar1 = &PTR_FUN_00d17bac;
    puVar1[0x1e] = &PTR_LAB_00d17b88;
    puVar1[0x28] = &PTR_LAB_00d17b70;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_0084ad10 @ 0084ad10 ////

void __fastcall FUN_0084ad10(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7738;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0084ade0 @ 0084ade0 ////

void __fastcall FUN_0084ade0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0084ae20 @ 0084ae20 ////

undefined4 * FUN_0084ae20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce775b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x504);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00847f00(puVar1);
    *puVar1 = &PTR_FUN_00d17db4;
    puVar1[0x1e] = &PTR_LAB_00d17d94;
    puVar1[0x28] = &PTR_LAB_00d17d7c;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_0084af30 @ 0084af30 ////

void FUN_0084af30(void)

{
  FUN_0098fd30("EverBuilt",&DAT_0104edd8,2);
  FUN_0098fd30("DateFirstBuilt",&DAT_0104eddc,3);
  return;
}


//// FUNCTION FUN_0084af60 @ 0084af60 ////

void FUN_0084af60(void)

{
  DAT_0104edd8 = 0;
  FUN_0043b700(&DAT_0104eddc,0.0);
  return;
}


//// FUNCTION FUN_0084af80 @ 0084af80 ////

void __fastcall FUN_0084af80(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7778;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0084b050 @ 0084b050 ////

void __fastcall FUN_0084b050(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0084b080 @ 0084b080 ////

void FUN_0084b080(void)

{
  return;
}


//// FUNCTION FUN_0084b090 @ 0084b090 ////

void __fastcall FUN_0084b090(int param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_00acd42c();
  uVar1 = (undefined4)uVar2;
  *(undefined4 *)(param_1 + 0x55c) = uVar1;
  *(undefined4 *)(param_1 + 0x560) = uVar1;
  *(undefined4 *)(param_1 + 0x564) = uVar1;
  *(undefined4 *)(param_1 + 0x568) = uVar1;
  return;
}


//// FUNCTION FUN_0084b100 @ 0084b100 ////

void FUN_0084b100(void)

{
  return;
}


//// FUNCTION FUN_0084b1b0 @ 0084b1b0 ////

void __thiscall FUN_0084b1b0(void *this,int param_1)

{
  (**(code **)(*(int *)((int)this + 0x524) + 4))();
  *(int *)((int)this + 0x538) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x524))();
  if (param_1 != 0) {
    (**(code **)(*(int *)((int)this + 0x53c) + 4))();
    *(int *)((int)this + 0x550) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0x53c))();
  }
  FUN_00523d20();
  return;
}


//// FUNCTION FUN_0084b200 @ 0084b200 ////

undefined4 __fastcall FUN_0084b200(int param_1)

{
  return *(undefined4 *)(param_1 + 0x538);
}


//// FUNCTION FUN_0084b210 @ 0084b210 ////

undefined4 __fastcall FUN_0084b210(int param_1)

{
  return *(undefined4 *)(param_1 + 0x550);
}


//// FUNCTION FUN_0084b240 @ 0084b240 ////

void __fastcall FUN_0084b240(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7798;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0084b310 @ 0084b310 ////

void __fastcall FUN_0084b310(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *local_34;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce77c8;
  local_c = ExceptionList;
  local_34 = (undefined4 *)(param_1 + 0x4e4);
  local_30 = 4;
  ExceptionList = &local_c;
  do {
    if (DAT_00e67469 == '\0') {
      local_2c = local_20;
      pcVar5 = "C:\\movies\\dev\\TheMovies\\FacilityTrailer.cpp";
      puVar6 = &DAT_010581d8;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      DAT_010581d4 = 0x43;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"SLVAR CALLED: ",0xe);
      local_28 = 0xe;
      local_2c[0xe] = '\0';
      local_4 = 0;
      pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
      pcVar5 = pcVar2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
      FUN_00989710();
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
    uVar3 = FUN_0098b490("TerritoryExtent[x]");
    if ((char)uVar3 != '\0') {
      FUN_0098a430(local_34,4);
    }
    local_34 = local_34 + 1;
    local_30 = local_30 + -1;
  } while (local_30 != 0);
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\FacilityTrailer.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x44;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x4ac));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("PTotalOwner");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x4ac));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\FacilityTrailer.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x45;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x4c4));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("PGardenOwner");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x4c4));
  }
  Facility_RegisterSubFacilitiesSaveField(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0084b620 @ 0084b620 ////

void FUN_0084b620(int *param_1,undefined4 param_2,void *param_3,void *param_4)

{
  int iVar1;
  size_t sVar2;
  undefined4 *puVar3;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7808;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00ace790(param_1,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                       &TM::CFacilityTrailer::RTTI_Type_Descriptor,0);
  sVar2 = FUN_00ace02d(L"<x5><fontcolor=#ffffff>");
  FUN_0040cae0(param_3,L"<x5><fontcolor=#ffffff>",sVar2);
  local_6c = local_60;
  local_68 = 0;
  local_60[0] = '\0';
  if (*(int *)(iVar1 + 0x538) == 0) {
    local_64 = 0x14;
    _strncpy(local_60,"FAC_TRAILER_VACANT",0x12);
    local_68 = 0x12;
    local_6c[0x12] = '\0';
    local_4 = 3;
    puVar3 = FUN_009b5030(local_2c,&local_6c);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_0040cae0(param_3,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_4 = 0xffffffff;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  else {
    local_64 = 0x14;
    _strncpy(local_6c,"FAC_TRAILER_OWNEDBY",0x13);
    local_68 = 0x13;
    local_6c[0x13] = '\0';
    local_4 = 0;
    puVar3 = FUN_009b5030(local_4c,&local_6c);
    local_4 = CONCAT31(local_4._1_3_,1);
    sVar2 = FUN_00ace02d(L"<nobr>");
    FUN_0040cae0(param_3,L"<nobr>",sVar2);
    FUN_0040cae0(param_3,(wchar_t *)*puVar3,puVar3[1]);
    sVar2 = FUN_00ace02d(L"</nobr>");
    FUN_0040cae0(param_3,L"</nobr>",sVar2);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    local_4 = 0xffffffff;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (param_4 != (void *)0x0) {
      sVar2 = FUN_00ace02d(L"<br><nobr>");
      FUN_0040cae0(param_3,L"<br><nobr>",sVar2);
      puVar3 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x538) + 0x5c))(local_4c);
      local_4 = 2;
      FUN_008dbfb0(param_4,puVar3,param_3,&LAB_0084b8a0,*(undefined4 *)(iVar1 + 0x538));
      local_4 = 0xffffffff;
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      sVar2 = FUN_00ace02d(L"</nobr>");
      FUN_0040cae0(param_3,L"</nobr>",sVar2);
    }
  }
  sVar2 = FUN_00ace02d(L"</font></x5>");
  FUN_0040cae0(param_3,L"</font></x5>",sVar2);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0084b8c0 @ 0084b8c0 ////

undefined4 * __thiscall FUN_0084b8c0(void *this,byte param_1)

{
  FUN_0084b8e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0084b8e0 @ 0084b8e0 ////

void __fastcall FUN_0084b8e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_0084bb80 @ 0084bb80 ////

undefined4 * __thiscall FUN_0084bb80(void *this,byte param_1)

{
  FUN_0084bba0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0084bba0 @ 0084bba0 ////

void __fastcall FUN_0084bba0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_0084bbe0 @ 0084bbe0 ////

void __thiscall FUN_0084bbe0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_0046f5e0(param_1);
  if (iVar2 == -0x7ffffdcc) {
    piVar1 = *(int **)(param_1 + 100);
    if (*(int **)((int)this + 0x538) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x538) + 0x26c))(0);
      (**(code **)(*(int *)((int)this + 0x524) + 4))();
      *(undefined4 *)((int)this + 0x538) = 0;
      (*(code *)**(undefined4 **)((int)this + 0x524))();
      FUN_00523d20();
    }
    iVar2 = (**(code **)(*piVar1 + 0x270))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar1 + 0x270))();
      (**(code **)(*(int *)(iVar2 + 0x524) + 4))();
      *(undefined4 *)(iVar2 + 0x538) = 0;
      (*(code *)**(undefined4 **)(iVar2 + 0x524))();
      FUN_00523d20();
    }
    (**(code **)(*piVar1 + 0x26c))(this);
    FUN_0084b1b0(this,(int)piVar1);
  }
  else {
    if (iVar2 == -0x7ffffda4) {
      (**(code **)(**(int **)(param_1 + 100) + 0x26c))(0);
      (**(code **)(*(int *)((int)this + 0x524) + 4))();
      *(undefined4 *)((int)this + 0x538) = 0;
      (*(code *)**(undefined4 **)((int)this + 0x524))();
      FUN_00523d20();
      return;
    }
    if (iVar2 != -0x7ffffd7c) {
      FUN_0052f410(this,param_1);
      return;
    }
    if (*(int **)((int)this + 0x538) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0084bc2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)((int)this + 0x538) + 0x26c))();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0084bd00 @ 0084bd00 ////

undefined4 * __thiscall FUN_0084bd00(void *this,undefined4 *param_1)

{
  int iVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [16];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7848;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"changecostume",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 0;
  iVar1 = FUN_008b2a10(*(void **)((int)this + 0x304),&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x218);
    param_1[1] = *(undefined4 *)(iVar1 + 0x21c);
    param_1[2] = *(undefined4 *)(iVar1 + 0x220);
    ExceptionList = local_c;
    return param_1;
  }
  (**(code **)(*(int *)this + 0x34))(param_1);
  ExceptionList = pvStack_10;
  return param_1;
}


//// FUNCTION FUN_0084bde0 @ 0084bde0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084bde0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  float10 fVar4;
  char *local_154;
  undefined4 local_150;
  uint local_14c;
  char local_148 [20];
  int *local_134;
  undefined4 local_130;
  int *local_12c [2];
  char *local_124;
  undefined4 local_120;
  uint local_11c;
  char local_118 [20];
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce790b;
  local_c = ExceptionList;
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_124,"trailers",8);
  local_120 = 8;
  local_124[8] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_124);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_154 = local_148;
  local_148[0] = '\0';
  local_150 = 0;
  local_14c = 0x14;
  _strncpy(local_154,"territoryfactor",0xf);
  local_150 = 0xf;
  local_154[0xf] = '\0';
  local_4._0_1_ = 3;
  fVar4 = FUN_00558610(local_e4,&local_154,0.0);
  _DAT_00e5d0a0 = (float)fVar4;
  if (0x14 < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_154);
  }
  local_154 = local_148;
  local_148[0] = '\0';
  local_150 = 0;
  local_14c = 0x14;
  _strncpy(local_154,"possessionsfactor",0x11);
  local_150 = 0x11;
  local_154[0x11] = '\0';
  local_4._0_1_ = 4;
  fVar4 = FUN_00558610(local_e4,&local_154,0.0);
  _DAT_00e5d0a4 = (float)fVar4;
  if (0x14 < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_154);
  }
  local_154 = local_148;
  local_148[0] = '\0';
  local_150 = 0;
  local_14c = 0x14;
  _strncpy(local_154,"qualityfactor",0xd);
  local_150 = 0xd;
  local_154[0xd] = '\0';
  local_4._0_1_ = 5;
  fVar4 = FUN_00558610(local_e4,&local_154,0.0);
  _DAT_00e5d0a8 = (float)fVar4;
  if (0x14 < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_154);
  }
  local_154 = local_148;
  local_148[0] = '\0';
  local_150 = 0;
  local_14c = 0x14;
  _strncpy(local_154,"maxterritory",0xc);
  local_150 = 0xc;
  local_154[0xc] = '\0';
  local_4._0_1_ = 6;
  fVar4 = FUN_00558610(local_e4,&local_154,0.0);
  _DAT_00e5d098 = (float)fVar4;
  if (0x14 < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_154);
  }
  local_154 = local_148;
  local_148[0] = '\0';
  local_150 = 0;
  local_14c = 0x14;
  _strncpy(local_154,"MaxShagRange",0xc);
  local_150 = 0xc;
  local_154[0xc] = '\0';
  local_4._0_1_ = 7;
  fVar4 = FUN_00558610(local_e4,&local_154,0.0);
  _DAT_00e5d09c = (float)fVar4;
  if (0x14 < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_154);
  }
  local_154 = local_148;
  local_148[0] = '\0';
  local_150 = 0;
  local_14c = 0x14;
  _strncpy(local_154,"bot",3);
  local_150 = 3;
  local_154[3] = '\0';
  local_4._0_1_ = 8;
  puVar1 = FUN_005584e0(local_e4,local_104,&local_154);
  local_4._0_1_ = 9;
  puVar1 = (undefined4 *)FUN_00567da0((float *)local_12c,puVar1,'\0');
  local_134 = (int *)*puVar1;
  local_130 = puVar1[1];
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104[0]);
  }
  if (0x14 < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_154);
  }
  local_154 = local_148;
  local_148[0] = '\0';
  local_150 = 0;
  local_14c = 0x14;
  _DAT_00e5d07c = local_134;
  _DAT_00e5d080 = local_130;
  _strncpy(local_154,"top",3);
  local_150 = 3;
  local_154[3] = '\0';
  local_4._0_1_ = 10;
  puVar1 = FUN_005584e0(local_e4,local_104,&local_154);
  local_4._0_1_ = 0xb;
  puVar1 = (undefined4 *)FUN_00567da0((float *)local_12c,puVar1,'\0');
  local_134 = (int *)*puVar1;
  local_130 = puVar1[1];
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104[0]);
  }
  if (0x14 < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_154);
  }
  local_154 = local_148;
  local_148[0] = '\0';
  local_150 = 0;
  local_14c = 0x14;
  _DAT_00e5d084 = (undefined1 *)local_134;
  _DAT_00e5d088 = local_130;
  _strncpy(local_154,"valuemax",8);
  local_150 = 8;
  local_154[8] = '\0';
  local_4._0_1_ = 0xc;
  fVar4 = FUN_00558610(local_e4,&local_154,0.0);
  DAT_00e5d08c = (float)fVar4;
  if (0x14 < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_154);
  }
  local_154 = local_148;
  local_148[0] = '\0';
  local_150 = 0;
  local_14c = 0x14;
  _strncpy(local_154,"starpower",9);
  local_150 = 9;
  local_154[9] = '\0';
  local_4._0_1_ = 0xd;
  fVar4 = FUN_00558610(local_e4,&local_154,0.0);
  _DAT_00e5d090 = (float)fVar4;
  local_4._0_1_ = 2;
  if (0x14 < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_154);
  }
  FUN_00471840("MT_TRAILER_ADDOCCUPANT",-0x7ffffdcc);
  FUN_00471840("MT_TRAILER_REMOVEOCCUPANT",-0x7ffffda4);
  FUN_00471840("MT_TRAILER_CLEAROCCUPANTS",-0x7ffffd7c);
  piVar2 = operator_new(0x90);
  local_4._0_1_ = 0xe;
  local_12c[0] = piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    local_134 = (int *)&stack0xfffffea0;
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d61094;
  }
  local_4._0_1_ = 2;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4._0_1_ = 0xf;
  local_134 = piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    local_12c[0] = (int *)&stack0xfffffea0;
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d610dc;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0084c3c0 @ 0084c3c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0084c3c0(float *param_1,int *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float local_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  local_20 = 0.0;
  local_10 = 0.0;
  local_14 = 0.0;
  local_c = 0.0;
  local_18 = 0.0;
  puVar7 = DAT_0104d05c;
  if (DAT_0104d05c != &DAT_0104d068) {
    do {
      piVar6 = (int *)puVar7[2];
      iVar3 = FUN_005773c0((int)piVar6);
      iVar4 = GetPlayerStudio();
      if (((iVar3 == iVar4) && (iVar3 = (**(code **)(*piVar6 + 0x270))(), iVar3 != 0)) &&
         (piVar6 != param_2)) {
        pfVar5 = (float *)FUN_00585ff0(piVar6,&fStack_4);
        fVar2 = *pfVar5;
        piVar6 = (int *)(**(code **)(*piVar6 + 0x270))();
        pfVar5 = (float *)(**(code **)(*piVar6 + 0x1cc))(&fStack_8);
        local_20 = fVar2 + local_20;
        local_14 = fVar2 * fVar2 + local_14;
        local_c = fVar2 * *pfVar5 + local_c;
        local_10 = *pfVar5 + local_10;
        local_18 = local_18 + 1.0;
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d068);
  }
  fVar8 = FUN_0043b710((float *)&DAT_00e4fa4c);
  fVar8 = ((float10)_DAT_00e5d088 - (float10)_DAT_00e5d080) *
          ((fVar8 - (float10)_DAT_00e5d07c) / ((float10)_DAT_00e5d084 - (float10)_DAT_00e5d07c)) +
          (float10)_DAT_00e5d080;
  fStack_8 = (float)fVar8;
  if ((float10)DAT_00e5d08c <= fVar8) {
    fStack_8 = DAT_00e5d08c;
  }
  fStack_4 = local_18 + 1.0;
  if (fStack_4 <= 11.0) {
    fStack_4 = 11.0;
  }
  fStack_1c = 0.0;
  fStack_4 = 1.0 / fStack_4;
  do {
    fVar8 = (float10)FUN_00ace9b0();
    local_20 = fStack_1c + local_20;
    local_14 = fStack_1c * fStack_1c + local_14;
    local_c = (float)((float10)fStack_1c * fVar8 * (float10)fStack_8 + (float10)local_c);
    local_10 = (float)(fVar8 * (float10)fStack_8 + (float10)local_10);
    local_18 = local_18 + 1.0;
    fStack_1c = fStack_1c + fStack_4;
  } while (fStack_1c < 1.0 != (fStack_1c == 1.0));
  fStack_4 = local_18 * local_14 - local_20 * local_20;
  pfVar5 = (float *)FUN_00585ff0(param_2,&fStack_8);
  fVar2 = (local_14 * local_10 - local_c * local_20) * (1.0 / fStack_4) +
          (local_18 * local_c - local_10 * local_20) * (1.0 / fStack_4) * *pfVar5;
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    *param_1 = fVar2;
    return;
  }
  *param_1 = 0.0;
  return;
}


//// FUNCTION FUN_0084c640 @ 0084c640 ////

void __thiscall FUN_0084c640(void *this,undefined4 *param_1,char param_2)

{
  void *this_00;
  undefined4 uVar1;
  float10 fVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008461a0(this,param_1,param_2);
  this_00 = (void *)FUN_00528140((int)this);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"description",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4 = 0;
  uVar1 = FUN_00558a50(this_00,&local_2c,(undefined4 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((char)uVar1 != '\0') {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"quality",7);
    local_28 = 7;
    local_2c[7] = '\0';
    local_4 = 1;
    fVar2 = FUN_00558610(this_00,&local_2c,0.0);
    if ((float10)0.0 <= fVar2) {
      if ((float10)1.0 < fVar2) {
        fVar2 = (float10)1.0;
      }
    }
    else {
      fVar2 = (float10)0.0;
    }
    *(float *)((int)this + 0x554) = (float)fVar2;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"territory",9);
    local_28 = 9;
    local_2c[9] = '\0';
    local_4 = 2;
    fVar2 = FUN_00558610(this_00,&local_2c,0.0);
    *(float *)((int)this + 0x558) = (float)fVar2;
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    (**(code **)(*(int *)this + 0xd0))();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0084c820 @ 0084c820 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0084c820(void *this,float *param_1)

{
  int iVar1;
  float10 fVar2;
  float local_4;
  
  iVar1 = *(int *)((int)this + 0x170);
  local_4 = 0.0;
  for (; iVar1 != (int)this + 0x17c; iVar1 = *(int *)(iVar1 + 4)) {
    fVar2 = (float10)(**(code **)(**(int **)(iVar1 + 8) + 0x160))();
    local_4 = (float)(fVar2 + (float10)local_4);
  }
  local_4 = _DAT_00e5d0b4 * local_4;
  if (local_4 < 0.0) {
    *param_1 = 0.0;
    return;
  }
  if (1.0 < local_4) {
    local_4 = 1.0;
  }
  *param_1 = local_4;
  return;
}


//// FUNCTION FUN_0084c8b0 @ 0084c8b0 ////

void __thiscall FUN_0084c8b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7958;
  pvStack_c = ExceptionList;
  if ((param_1 != 0) && (param_1 == *(int *)((int)this + 0x538))) {
    ExceptionList = &pvStack_c;
    iVar1 = FUN_005295b0(this);
    if (iVar1 != 0) {
      pcStack_2c = acStack_20;
      acStack_20[0] = '\0';
      uStack_28 = 0;
      uStack_24 = 0x14;
      _strncpy(pcStack_2c,"assign",6);
      uStack_28 = 6;
      pcStack_2c[6] = '\0';
      uStack_4 = 0;
      iVar1 = FUN_00938a70(*(void **)((int)this + 0x1fc),&pcStack_2c);
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_2c);
      }
      if (iVar1 != 0) {
        iVar2 = FUN_0093b110(iVar1);
        if (iVar2 != 0) {
          iVar1 = FUN_0093b110(iVar1);
          *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 4;
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0084c8d1 @ 0084c8d1 ////

/* WARNING: Variable defined which should be unmapped: param_2 */

void __thiscall FUN_0084c8d1(void *this,char *param_1,undefined4 param_2,uint param_3,char param_4)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int unaff_EBX;
  bool in_ZF;
  void *in_stack_00000024;
  
  if ((!in_ZF) && (in_EAX == *(int *)((int)this + 0x538))) {
    iVar1 = FUN_005295b0(this);
    if (iVar1 != 0) {
      param_1 = &param_4;
      param_3 = 0x14;
      param_4 = (char)unaff_EBX;
      _strncpy(param_1,"assign",6);
      param_2 = 6;
      param_1[6] = (char)unaff_EBX;
      iVar1 = FUN_00938a70(*(void **)((int)this + 0x1fc),&param_1);
      if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
      if (iVar1 != unaff_EBX) {
        iVar2 = FUN_0093b110(iVar1);
        if (iVar2 != 0) {
          iVar1 = FUN_0093b110(iVar1);
          *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 4;
        }
      }
    }
  }
  ExceptionList = in_stack_00000024;
  return;
}


//// FUNCTION FUN_0084c9a0 @ 0084c9a0 ////

undefined4 * __fastcall FUN_0084c9a0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce79b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00847f00(param_1);
  *param_1 = &PTR_FUN_00d613cc;
  param_1[0x1e] = &PTR_LAB_00d613ac;
  param_1[0x28] = &PTR_LAB_00d61394;
  param_1[0x143] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  piVar1 = param_1 + 0x145;
  param_1[0x147] = 0;
  *piVar1 = 0;
  param_1[0x146] = 0;
  param_1[0x14c] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = param_1 + 0x149;
  param_1[0x149] = &PTR_FUN_00d16954;
  param_1[0x14e] = 0;
  param_1[0x152] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = param_1 + 0x14f;
  param_1[0x14f] = &PTR_FUN_00d16954;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  local_4 = 4;
  param_1[0x156] = 0;
  param_1[0x143] = param_1;
  FUN_00acdb9e(0xe5d100);
  iVar2 = FUN_0097dda0();
  param_1[0x144] = iVar2;
  if (DAT_00e5d0fc != '\0') {
    iVar2 = 0x504;
    pcVar4 = "GardenLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe5d100);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e5d0fc = '\0';
  }
  param_1[0x147] = param_1;
  FUN_00acdb9e(0xe5d100);
  iVar2 = FUN_0097dda0();
  param_1[0x148] = iVar2;
  if (s___AVCTTITrailerEntourage___00e5d0e0[0x1b] != '\0') {
    iVar2 = 0x514;
    pcVar4 = "FacilityTrailerLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe5d100);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVCTTITrailerEntourage___00e5d0e0[0x1b] = '\0';
  }
  param_1[0x146] = &DAT_0104edf8;
  *piVar1 = (int)DAT_0104edf8;
  *(int **)((int)DAT_0104edf8 + 4) = piVar1;
  DAT_0104edf8 = piVar1;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0084cb70 @ 0084cb70 ////

void __fastcall FUN_0084cb70(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce7a00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00d613cc;
  param_1[0x1e] = (int)&PTR_LAB_00d613ac;
  param_1[0x28] = (int)&PTR_LAB_00d61394;
  local_4 = 4;
  if ((int *)param_1[0x142] != (int *)0x0) {
    *(int *)param_1[0x142] = param_1[0x141];
  }
  if (param_1[0x141] != 0) {
    *(int *)(param_1[0x141] + 4) = param_1[0x142];
  }
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  if ((int *)param_1[0x146] != (int *)0x0) {
    *(int *)param_1[0x146] = param_1[0x145];
  }
  if (param_1[0x145] != 0) {
    *(int *)(param_1[0x145] + 4) = param_1[0x146];
  }
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  if ((int *)param_1[0x14e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14e] + 0x26c))(0);
  }
  param_1[0x14f] = (int)&PTR_FUN_00d16954;
  if ((int *)param_1[0x151] != (int *)0x0) {
    *(int *)param_1[0x151] = param_1[0x150];
  }
  if (param_1[0x150] != 0) {
    *(int *)(param_1[0x150] + 4) = param_1[0x151];
  }
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x154] = 0;
  if ((int *)param_1[0x151] != (int *)0x0) {
    *(int *)param_1[0x151] = param_1[0x150];
  }
  if (param_1[0x150] != 0) {
    *(int *)(param_1[0x150] + 4) = param_1[0x151];
  }
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x149] = (int)&PTR_FUN_00d16954;
  if ((int *)param_1[0x14b] != (int *)0x0) {
    *(int *)param_1[0x14b] = param_1[0x14a];
  }
  if (param_1[0x14a] != 0) {
    *(int *)(param_1[0x14a] + 4) = param_1[0x14b];
  }
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14e] = 0;
  if ((int *)param_1[0x14b] != (int *)0x0) {
    *(int *)param_1[0x14b] = param_1[0x14a];
  }
  if (param_1[0x14a] != 0) {
    *(int *)(param_1[0x14a] + 4) = param_1[0x14b];
  }
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  if ((int *)param_1[0x146] != (int *)0x0) {
    *(int *)param_1[0x146] = param_1[0x145];
  }
  if (param_1[0x145] != 0) {
    *(int *)(param_1[0x145] + 4) = param_1[0x146];
  }
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  if ((int *)param_1[0x142] != (int *)0x0) {
    *(int *)param_1[0x142] = param_1[0x141];
  }
  if (param_1[0x141] != 0) {
    *(int *)(param_1[0x141] + 4) = param_1[0x142];
  }
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  local_4 = 0xffffffff;
  FUN_008469b0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0084cd90 @ 0084cd90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0084cd90(void *this,float *param_1)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  float local_c;
  float local_8;
  undefined1 auStack_4 [4];
  
  local_8 = (((float)*(int *)((int)this + 0x55c) + (float)*(int *)((int)this + 0x560) +
              (float)*(int *)((int)this + 0x564) + (float)*(int *)((int)this + 0x568)) * 0.25) /
            _DAT_00e5d098;
  pfVar3 = (float *)FUN_0084c820(this,&local_c);
  local_c = *pfVar3;
  fVar1 = *(float *)((int)this + 0x554);
  cVar2 = (**(code **)(*(int *)this + 0xc4))();
  if (cVar2 == '\0') {
    pfVar3 = (float *)(**(code **)(*(int *)this + 0xb8))(auStack_4);
    fVar1 = (*pfVar3 * 0.5 + 0.5) * fVar1;
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = _DAT_00e5d0a0 * local_8 + _DAT_00e5d0a4 * local_c + fVar1 * _DAT_00e5d0a8;
  if (fVar1 <= 1.0) {
    if (fVar1 < 0.0) {
      *param_1 = 0.0;
      return;
    }
    if (fVar1 <= 1.0) goto LAB_0084ce73;
  }
  fVar1 = 1.0;
LAB_0084ce73:
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_0084ce80 @ 0084ce80 ////

int * __cdecl FUN_0084ce80(int *param_1)

{
  char *_Source;
  char cVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  uint local_48;
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00ce7a28;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  uStack_3 = 0;
  iVar5 = 1;
  ExceptionList = &local_c;
  do {
    local_4 = 0;
    FUN_00569d60(local_2c,iVar5);
    FUN_0040d6b0(&local_4c,"trailer_",local_2c);
    local_4 = 2;
    iVar2 = FUN_009623a0(&local_4c);
    if ((iVar2 == 0) ||
       (cVar1 = FUN_00960f30(iVar2), uVar3 = local_48, _Source = local_4c, cVar1 == '\0')) {
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      break;
    }
    local_68 = local_48;
    if (local_64 <= local_48) {
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_64 = local_48 + 0x20 & 0xffffffe0;
      local_6c = _malloc(local_64);
    }
    _strncpy(local_6c,_Source,uVar3);
    local_6c[uVar3] = '\0';
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    local_4 = 0;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  *param_1 = (int)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  if (0x13 < local_68) {
    uVar3 = local_68 + 0x20 & 0xffffffe0;
    param_1[2] = uVar3;
    pvVar4 = _malloc(uVar3);
    *param_1 = (int)pvVar4;
  }
  _strncpy((char *)*param_1,local_6c,local_68);
  param_1[1] = local_68;
  *(undefined1 *)(local_68 + *param_1) = 0;
  if (local_64 < 0x15) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_0084d280 @ 0084d280 ////

undefined4 * FUN_0084d280(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7a9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x56c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_0084c9a0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0084d2e0 @ 0084d2e0 ////

int * __thiscall FUN_0084d2e0(void *this,byte param_1)

{
  FUN_0084cb70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0084d320 @ 0084d320 ////

void __fastcall FUN_0084d320(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0084d400 @ 0084d400 ////

void __cdecl FUN_0084d400(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_0084d520 @ 0084d520 ////

undefined4 __fastcall FUN_0084d520(int param_1)

{
  return *(undefined4 *)(param_1 + 0x118);
}


//// FUNCTION FUN_0084d530 @ 0084d530 ////

void __thiscall FUN_0084d530(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  float *pfVar2;
  undefined4 uVar3;
  undefined1 local_18 [8];
  float afStack_10 [4];
  
  this_00 = DAT_00f890c0;
  iVar1 = *param_1;
  pfVar2 = (float *)(**(code **)(**(int **)((int)this + 0x118) + 0x34))(local_18);
  uVar3 = FUN_00466ee0(this_00,afStack_10,pfVar2);
  (**(code **)(iVar1 + 0xac))(uVar3);
  *(undefined1 *)(param_1 + 0x11c) = 1;
  return;
}


//// FUNCTION FUN_0084d5f0 @ 0084d5f0 ////

void __cdecl FUN_0084d5f0(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


//// FUNCTION FUN_0084d650 @ 0084d650 ////

void __cdecl FUN_0084d650(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0084d680 @ 0084d680 ////

void __fastcall FUN_0084d680(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7ab8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x19);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x64) & (uint)param_1),param_1 + -0x19);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0084d750 @ 0084d750 ////

int __fastcall FUN_0084d750(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar1 = *(int *)(param_1 + 0xa4); iVar1 != param_1 + 0xb0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = FUN_005773c0(*(int *)(iVar1 + 8));
    if (iVar2 == 0) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}


//// FUNCTION FUN_0084d810 @ 0084d810 ////

bool __fastcall FUN_0084d810(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xa4) == param_1 + 0xb0) {
    iVar1 = FUN_00990d30(0,2);
    return (bool)('\x01' - (iVar1 != 0));
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  iVar3 = 0;
  iVar2 = 0;
  if (iVar1 != param_1 + 0xb0) {
    do {
      if (*(int *)(*(int *)(iVar1 + 8) + 0x4a0) == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar2 = iVar2 + 1;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 0xb0);
    if (iVar3 != 0) {
      if (iVar2 != 0) {
        iVar1 = FUN_00990d30(0,iVar2 + iVar3);
        return iVar1 < iVar3;
      }
      return true;
    }
  }
  return false;
}


//// FUNCTION SubFacilityStaffSlot_LoadFromIni @ 0084d8a0 ////

void __thiscall
SubFacilityStaffSlot_LoadFromIni(void *this,undefined4 param_1,undefined4 *param_2,void *param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *unaff_EBP;
  void *unaff_EDI;
  float10 fVar5;
  ulonglong uVar6;
  void *_Memory;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [4];
  undefined1 uStack_3c;
  void *apvStack_2c [2];
  undefined1 *puStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0xffffffff;
  puStack_8 = &LAB_00ce7b00;
  puStack_c = ExceptionList;
  ExceptionList = &puStack_c;
  (**(code **)(*(int *)((int)this + 0x104) + 4))();
  *(undefined4 *)((int)this + 0x118) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x104))();
  FUN_004015d0((void *)((int)this + 0x144),(char *)*param_2,param_2[1]);
  pcStack_4c = acStack_40;
  acStack_40[0] = '\0';
  uStack_48 = 0;
  uStack_44 = 0x14;
  _strncpy(pcStack_4c,"staff",5);
  uStack_48 = 5;
  pcStack_4c[5] = '\0';
  puStack_4 = (undefined1 *)0x0;
  bVar2 = FUN_00558a90(param_3,&pcStack_4c,(undefined4 *)0x1);
  puStack_4 = (undefined1 *)0xffffffff;
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  if (bVar2) {
    puVar3 = FUN_00558de0(param_3,apvStack_2c);
    FUN_004015d0((undefined4 *)((int)this + 0x124),(char *)*puVar3,puVar3[1]);
    if (&DAT_00000014 < puStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    uVar4 = FUN_00558750(param_3,(undefined4 *)((int)this + 0x124),0);
    pcStack_4c = acStack_40;
    *(undefined4 *)((int)this + 0x11c) = uVar4;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x20;
    pcStack_4c = _malloc(0x20);
    _strncpy(pcStack_4c,"PrestigeStaffAdjuster",0x15);
    uStack_48 = 0x15;
    pcStack_4c[0x15] = '\0';
    puStack_4 = (undefined1 *)0x1;
    fVar5 = FUN_00558610(param_3,&pcStack_4c,0.0);
    *(float *)((int)this + 0x120) = (float)fVar5;
    puStack_4 = (undefined1 *)0xffffffff;
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    FUN_00558bb0(param_3,5);
  }
  puVar3 = FUN_00445e10(*(undefined4 *)((int)this + 0x118));
  (**(code **)(*(int *)((int)this + 0x164) + 4))();
  *(undefined4 **)((int)this + 0x178) = puVar3;
  (*(code *)**(undefined4 **)((int)this + 0x164))();
  pcStack_4c = acStack_40;
  acStack_40[0] = '\0';
  uStack_48 = 0;
  uStack_44 = 0x14;
  _strncpy(pcStack_4c,"finance",7);
  uStack_48 = 7;
  pcStack_4c[7] = '\0';
  puStack_4 = (undefined1 *)0x2;
  FUN_00558a90(param_3,&pcStack_4c,(undefined4 *)0x1);
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  pcStack_4c = acStack_40;
  acStack_40[0] = '\0';
  uStack_48 = 0;
  uStack_44 = 0x14;
  _strncpy(pcStack_4c,"annualcost",10);
  uStack_48 = 10;
  pcStack_4c[10] = '\0';
  piVar1 = *(int **)((int)this + 0x178);
  puStack_4 = (undefined1 *)0x3;
  FUN_00558610(param_3,&pcStack_4c,0.0);
  uVar6 = FUN_00acd42c();
  _Memory = (void *)uVar6;
  FUN_00471b10((longlong *)&stack0xffffff9c);
  (**(code **)(*piVar1 + 4))();
  if (&DAT_00000014 < pcStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
  uStack_48 = uStack_48 & 0xffffff00;
  pcStack_4c = (char *)0x14;
  _strncpy((char *)&uStack_48,"purchasecost",0xc);
  uStack_3c = 0;
  piVar1 = *(int **)((int)this + 0x178);
  puStack_c = (undefined1 *)0x4;
  FUN_00558610(param_3,(undefined4 *)&stack0xffffffac,0.0);
  puStack_4 = &stack0xffffff94;
  FUN_00acd42c();
  FUN_00471b10((longlong *)&stack0xffffff94);
  (**(code **)(*piVar1 + 0x14))();
  if (&DAT_00000014 < &uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  _strncpy(&stack0xffffffb0,"dailyrate",9);
                    /* WARNING: Ignoring partial resolution of indirect */
  uStack_48._1_1_ = 0;
  piVar1 = *(int **)((int)this + 0x178);
  uStack_14 = 5;
  FUN_00558610(param_3,(undefined4 *)&stack0xffffffa4,0.0);
  puStack_c = &stack0xffffff8c;
  FUN_00acd42c();
  FUN_00471b10((longlong *)&stack0xffffff8c);
  (**(code **)(*piVar1 + 0x1c))();
  uStack_1c = 0xffffffff;
  if (&DAT_00000014 < &stack0xffffffb0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_00558bb0(param_3,5);
  ExceptionList = puStack_24;
  return;
}


//// FUNCTION FUN_0084dcf0 @ 0084dcf0 ////

void __cdecl FUN_0084dcf0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0084dd60 @ 0084dd60 ////

void __fastcall FUN_0084dd60(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7b50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\SubFacility.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x17;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar2 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("SourceName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0xe0));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\SubFacility.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x18;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x38));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("SupportedStaff");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x38);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\SubFacility.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x19;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xa0));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("PParent");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xa0));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\SubFacility.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x1a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x100));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("PFixedAssetCosts");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x100));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\SubFacility.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x1b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    pcVar2 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("StaffCareer");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0xc0));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\SubFacility.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x1c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe30);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("MaximumStaff");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xb8),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\SubFacility.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x1d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
    pcVar2 = (char *)FUN_00ace33d(0xe4f6dc);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("PrestigeStaffAdjuster");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xbc),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\SubFacility.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x1e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("SpawnIndex");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x118),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0084e490 @ 0084e490 ////

float10 __fastcall FUN_0084e490(int param_1)

{
  byte bVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  float local_38;
  float local_34;
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7b68;
  local_c = ExceptionList;
  local_34 = 1.0;
  local_38 = 0.0;
  ExceptionList = &local_c;
  puVar3 = (undefined4 *)FUN_00528450(*(int *)(param_1 + 0x118));
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,(char *)*puVar3,puVar3[1]);
  local_4 = 0;
  puVar3 = DAT_0104ed18;
  if (DAT_0104ed18 != &DAT_0104ed24) {
    do {
      puVar4 = (undefined4 *)FUN_00528450(puVar3[2]);
      pbVar5 = (byte *)*puVar4;
      pbVar7 = local_2c;
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0084e544:
          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0084e549;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0084e544;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_0084e549:
      if (iVar6 == 0) {
        fVar2 = (float)*(int *)(param_1 + 0x11c);
        if (*(int *)(param_1 + 0x11c) < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        local_38 = fVar2 * local_34 + local_38;
        local_34 = local_34 * 0.5;
      }
      puVar4 = puVar3 + 1;
      puVar3 = (undefined4 *)*puVar4;
    } while ((undefined4 *)*puVar4 != &DAT_0104ed24);
  }
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return (float10)local_38;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_0084e5c0 @ 0084e5c0 ////

void __fastcall FUN_0084e5c0(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  float *pfVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int *piVar8;
  char **ppcVar9;
  float fVar10;
  float fStack_28;
  char *pcStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  char acStack_18 [24];
  
  puVar2 = (undefined4 *)FUN_00528450(param_1[0x46]);
  uVar3 = FUN_00499c70(puVar2);
  if ((char)uVar3 != '\0') {
    return;
  }
  cVar1 = (**(code **)(*(int *)param_1[0x46] + 0x16c))();
  if (cVar1 == '\0') {
    return;
  }
  if (*(int *)(param_1[0x46] + 0x4d0) != param_1[0x5f]) {
    return;
  }
  pcStack_24 = (char *)(1.0 - (float)param_1[0x48]);
  piVar4 = (int *)GetPlayerStudio();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x84))(&fStack_28);
  fStack_28 = fStack_28 * *pfVar5 + (float)param_1[0x48];
  FUN_0084e490((int)param_1);
  uVar7 = FUN_00acd42c();
  fStack_28 = (float)uVar7;
  if ((fStack_28 == 0.0) && (param_1[0x47] != 0)) {
    fStack_28 = 1.4013e-45;
  }
  pcStack_24 = acStack_18;
  fVar10 = 0.0;
  acStack_18[0] = '\0';
  uStack_20 = 0;
  uStack_1c = 0x14;
  _strncpy(pcStack_24,"wannabe",7);
  ppcVar9 = &pcStack_24;
  piVar4 = param_1 + 0x49;
  uStack_20 = 7;
  piVar8 = piVar4;
  pcStack_24[7] = '\0';
  uVar3 = FUN_00401ec0(piVar8,ppcVar9);
  if (0x14 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_24);
  }
  if ((char)uVar3 == '\0') {
    pcStack_24 = acStack_18;
    acStack_18[0] = '\0';
    uStack_20 = 0;
    uStack_1c = 0x14;
    _strncpy(pcStack_24,"crew",4);
    ppcVar9 = &pcStack_24;
    uStack_20 = 4;
    piVar8 = piVar4;
    pcStack_24[4] = '\0';
    uVar3 = FUN_00401ec0(piVar8,ppcVar9);
    if (0x14 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_24);
    }
    if ((char)uVar3 == '\0') {
      FUN_00401de0(&pcStack_24,"scientist",0xffffffff);
      uVar3 = FUN_00401ec0(piVar4,&pcStack_24);
      if (0x14 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_24);
      }
      if ((char)uVar3 == '\0') {
        FUN_00401de0(&pcStack_24,"writer",0xffffffff);
        uVar3 = FUN_00401ec0(piVar4,&pcStack_24);
        if (0x14 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_24);
        }
        if ((char)uVar3 == '\0') {
          FUN_00401de0(&pcStack_24,"wannastunt",0xffffffff);
          uVar3 = FUN_00401ec0(piVar4,&pcStack_24);
          if (0x14 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_24);
          }
          if ((char)uVar3 == '\0') {
            FUN_00401de0(&pcStack_24,"staff",0xffffffff);
            uVar3 = FUN_00401ec0(piVar4,&pcStack_24);
            if (0x14 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_24);
            }
            if ((char)uVar3 == '\0') goto LAB_0084e85e;
            puVar6 = &DAT_0104ee4c;
          }
          else {
            puVar6 = &DAT_0104ef1c;
          }
        }
        else {
          puVar6 = &DAT_0104eee8;
        }
      }
      else {
        puVar6 = &DAT_0104eeb4;
      }
    }
    else {
      puVar6 = &DAT_0104ee18;
    }
  }
  else {
    puVar6 = &DAT_0104ee80;
  }
  fVar10 = (float)FUN_004013f0((int)puVar6);
LAB_0084e85e:
  if ((uint)fVar10 < (uint)fStack_28) {
    if ((*(char *)(DAT_00f87b04 + 4) != '\0') || (*(int *)(param_1[0x46] + 0x4cc) < 1)) {
      (**(code **)(*param_1 + 0x1c))();
      return;
    }
  }
  else {
    if ((uint)fStack_28 < (uint)fVar10) {
      (**(code **)(*param_1 + 0x20))();
    }
    FUN_00844ba0(param_1[0x46]);
  }
  return;
}


//// FUNCTION FUN_0084eda0 @ 0084eda0 ////

undefined4 * FUN_0084eda0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0084dcf0(param_1,param_2,param_3);
  return param_1 + param_2 * 2;
}


//// FUNCTION FUN_0084ede0 @ 0084ede0 ////

void FUN_0084ede0(void)

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
  puStack_8 = &LAB_00ce7b88;
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


//// FUNCTION FUN_0084ee50 @ 0084ee50 ////

void __fastcall FUN_0084ee50(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_00ce7c31;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6163c;
  param_1[0x19] = &PTR_LAB_00d6161c;
  puVar2 = (undefined4 *)param_1[0x29];
  local_4 = 8;
  for (; puVar2 != param_1 + 0x2c; puVar2 = (undefined4 *)puVar2[1]) {
    iVar3 = puVar2[2];
    iVar5 = FUN_005773c0(iVar3);
    if (iVar5 == 0) {
      *(undefined1 *)(iVar3 + 0x72c) = 1;
    }
  }
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x24] = param_1[0x23];
  }
  if (param_1[0x23] != 0) {
    *(undefined4 *)(param_1[0x23] + 4) = param_1[0x24];
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if ((undefined4 *)param_1[0x5e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5e])(1);
  }
  (**(code **)(param_1[0x59] + 4))();
  param_1[0x5e] = 0;
  (**(code **)param_1[0x59])();
  param_1[0x59] = &PTR_LAB_00d22794;
  if ((undefined4 *)param_1[0x5b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5b] = param_1[0x5a];
  }
  if (param_1[0x5a] != 0) {
    *(undefined4 *)(param_1[0x5a] + 4) = param_1[0x5b];
  }
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  if ((undefined4 *)param_1[0x5b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5b] = param_1[0x5a];
  }
  if (param_1[0x5a] != 0) {
    *(undefined4 *)(param_1[0x5a] + 4) = param_1[0x5b];
  }
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  if (0x14 < (uint)param_1[0x53]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x51]);
  }
  if (0x14 < (uint)param_1[0x4b]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x49]);
  }
  param_1[0x41] = &PTR_FUN_00d1b488;
  if ((undefined4 *)param_1[0x43] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x43] = param_1[0x42];
  }
  if (param_1[0x42] != 0) {
    *(undefined4 *)(param_1[0x42] + 4) = param_1[0x43];
  }
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  if ((undefined4 *)param_1[0x43] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x43] = param_1[0x42];
  }
  if (param_1[0x42] != 0) {
    *(undefined4 *)(param_1[0x42] + 4) = param_1[0x43];
  }
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  piVar4 = (int *)param_1[0x36];
  piVar1 = param_1 + 0x39;
  param_1[0x34] = &PTR_LAB_00d26740;
  while (piVar4 != piVar1) {
    *piVar4 = 0;
    piVar4 = (int *)piVar4[1];
    *(undefined4 *)(*piVar4 + 4) = 0;
  }
  param_1[0x36] = 0;
  *piVar1 = 0;
  if ((void *)param_1[0x3e] == (void *)0x0) {
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    if ((int *)param_1[0x3a] != (int *)0x0) {
      *(int *)param_1[0x3a] = *piVar1;
    }
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 4) = param_1[0x3a];
    }
    *piVar1 = 0;
    param_1[0x3a] = 0;
    if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x36] = param_1[0x35];
    }
    if (param_1[0x35] != 0) {
      *(undefined4 *)(param_1[0x35] + 4) = param_1[0x36];
    }
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    piVar4 = (int *)param_1[0x29];
    piVar1 = param_1 + 0x2c;
    param_1[0x27] = &PTR_LAB_00d26740;
    while (piVar4 != piVar1) {
      *piVar4 = 0;
      piVar4 = (int *)piVar4[1];
      *(undefined4 *)(*piVar4 + 4) = 0;
    }
    param_1[0x29] = 0;
    *piVar1 = 0;
    if ((void *)param_1[0x31] == (void *)0x0) {
      param_1[0x31] = 0;
      param_1[0x32] = 0;
      param_1[0x33] = 0;
      if ((int *)param_1[0x2d] != (int *)0x0) {
        *(int *)param_1[0x2d] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(undefined4 *)(*piVar1 + 4) = param_1[0x2d];
      }
      *piVar1 = 0;
      param_1[0x2d] = 0;
      if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x29] = param_1[0x28];
      }
      if (param_1[0x28] != 0) {
        *(undefined4 *)(param_1[0x28] + 4) = param_1[0x29];
      }
      param_1[0x28] = 0;
      param_1[0x29] = 0;
      if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x24] = param_1[0x23];
      }
      if (param_1[0x23] != 0) {
        *(undefined4 *)(param_1[0x23] + 4) = param_1[0x24];
      }
      param_1[0x23] = 0;
      param_1[0x24] = 0;
      local_4 = local_4 & 0xffffff00;
      FUN_0098a1c0(param_1 + 0x19);
      local_4 = 0xffffffff;
      FUN_0053c500(param_1);
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x31]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x3e]);
}


//// FUNCTION FUN_0084f1c0 @ 0084f1c0 ////

void __thiscall FUN_0084f1c0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00ce7c40;
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
      uVar2 = FUN_0084ede0();
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
      puVar5 = (undefined4 *)FUN_0084d650(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0084dcf0(puVar5,param_2,&local_20);
      FUN_0084d650(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
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
      FUN_0084d650(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_0084eda0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_0084d400(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0084d650(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_0084d5f0((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_0084d400(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0084f410 @ 0084f410 ////

undefined4 * __thiscall FUN_0084f410(void *this,byte param_1)

{
  FUN_0084ee50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0084f480 @ 0084f480 ////

void __thiscall FUN_0084f480(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0084dcf0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_0084f1c0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0084f540 @ 0084f540 ////

void FUN_0084f540(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104ee18;
  if ((DAT_010584c8 == 0) ||
     ((uint)(DAT_010584d0 - DAT_010584c8 >> 2) <= (uint)((int)DAT_010584cc - DAT_010584c8 >> 2))) {
    FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  }
  else {
    *DAT_010584cc = &DAT_0104ee18;
    DAT_010584cc = DAT_010584cc + 1;
  }
  local_4 = &DAT_0104ee4c;
  if ((DAT_010584c8 == 0) ||
     ((uint)(DAT_010584d0 - DAT_010584c8 >> 2) <= (uint)((int)DAT_010584cc - DAT_010584c8 >> 2))) {
    FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  }
  else {
    *DAT_010584cc = &DAT_0104ee4c;
    DAT_010584cc = DAT_010584cc + 1;
  }
  local_4 = &DAT_0104ee80;
  if ((DAT_010584c8 == 0) ||
     ((uint)(DAT_010584d0 - DAT_010584c8 >> 2) <= (uint)((int)DAT_010584cc - DAT_010584c8 >> 2))) {
    FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  }
  else {
    *DAT_010584cc = &DAT_0104ee80;
    DAT_010584cc = DAT_010584cc + 1;
  }
  local_4 = &DAT_0104eeb4;
  if ((DAT_010584c8 == 0) ||
     ((uint)(DAT_010584d0 - DAT_010584c8 >> 2) <= (uint)((int)DAT_010584cc - DAT_010584c8 >> 2))) {
    FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  }
  else {
    *DAT_010584cc = &DAT_0104eeb4;
    DAT_010584cc = DAT_010584cc + 1;
  }
  local_4 = &DAT_0104eee8;
  if ((DAT_010584c8 == 0) ||
     ((uint)(DAT_010584d0 - DAT_010584c8 >> 2) <= (uint)((int)DAT_010584cc - DAT_010584c8 >> 2))) {
    FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  }
  else {
    *DAT_010584cc = &DAT_0104eee8;
    DAT_010584cc = DAT_010584cc + 1;
  }
  local_4 = &DAT_0104ef1c;
  if ((DAT_010584c8 != 0) &&
     ((uint)((int)DAT_010584cc - DAT_010584c8 >> 2) < (uint)(DAT_010584d0 - DAT_010584c8 >> 2))) {
    *DAT_010584cc = &DAT_0104ef1c;
    DAT_010584cc = DAT_010584cc + 1;
    return;
  }
  FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  return;
}


//// FUNCTION FUN_0084f740 @ 0084f740 ////

void FUN_0084f740(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined *local_8;
  undefined4 local_4;
  
  local_8 = &DAT_0104ef1c;
  local_4 = 3;
  FUN_0084f480(&DAT_010584d4,&local_8);
  iVar3 = 6;
  piVar2 = &DAT_0104ee2c;
  do {
    piVar1 = (int *)piVar2[-3];
    while (piVar1 != piVar2) {
      *piVar1 = 0;
      piVar1 = (int *)piVar1[1];
      *(undefined4 *)(*piVar1 + 4) = 0;
    }
    piVar2[-3] = (int)piVar2;
    iVar3 = iVar3 + -1;
    *piVar2 = (int)(piVar2 + -4);
    piVar2 = piVar2 + 0xd;
  } while (iVar3 != 0);
  return;
}


//// FUNCTION FUN_0084f7a0 @ 0084f7a0 ////

undefined4 * __fastcall FUN_0084f7a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7cf1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d6163c;
  param_1[0x19] = &PTR_LAB_00d6161c;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar1 = param_1 + 0x2c;
  param_1[0x2e] = 0;
  *puVar1 = 0;
  param_1[0x2d] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x27] = &PTR_LAB_00d26740;
  param_1[0x29] = puVar1;
  *puVar1 = param_1 + 0x28;
  param_1[0x37] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  puVar1 = param_1 + 0x39;
  param_1[0x3b] = 0;
  *puVar1 = 0;
  param_1[0x3a] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x34] = &PTR_LAB_00d26740;
  param_1[0x36] = puVar1;
  *puVar1 = param_1 + 0x35;
  piVar2 = param_1 + 0x41;
  param_1[0x44] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = piVar2;
  *piVar2 = (int)&PTR_FUN_00d1b488;
  param_1[0x46] = 0;
  param_1[0x49] = param_1 + 0x4c;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0x14;
  param_1[0x51] = param_1 + 0x54;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0x14;
  param_1[0x5c] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = param_1 + 0x59;
  param_1[0x59] = &PTR_LAB_00d22794;
  param_1[0x5e] = 0;
  local_4 = CONCAT31(local_4._1_3_,0xc);
  (**(code **)(*piVar2 + 4))();
  param_1[0x46] = 0;
  (**(code **)*piVar2)();
  param_1[0x5f] = 0xffffffff;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x25] = param_1;
  FUN_00acdb9e(0xe5d124);
  iVar3 = FUN_0097dda0();
  param_1[0x26] = iVar3;
  if (s__PAVCFacilityTrailer_TM___00e5d108[0x1a] != '\0') {
    iVar3 = 0x8c;
    pcVar5 = "SubFacilityLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe5d124);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    s__PAVCFacilityTrailer_TM___00e5d108[0x1a] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION SubFacilityStaffSlot_CreateFromIni @ 0084f990 ////

undefined4 * __cdecl
SubFacilityStaffSlot_CreateFromIni(undefined4 param_1,undefined4 *param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined4 *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7d0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x180);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_0084f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  SubFacilityStaffSlot_LoadFromIni(this,param_1,param_2,param_3);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0084fa30 @ 0084fa30 ////

void FUN_0084fa30(void)

{
  return;
}


//// FUNCTION FUN_0084fa40 @ 0084fa40 ////

undefined4 * __fastcall FUN_0084fa40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d61664;
  FUN_0085f2e0(param_1);
  return param_1;
}


//// FUNCTION FUN_0084faa0 @ 0084faa0 ////

void __fastcall FUN_0084faa0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d61664;
  return;
}


//// FUNCTION FUN_0084fae0 @ 0084fae0 ////

int * __thiscall FUN_0084fae0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0084fb00 @ 0084fb00 ////

int __fastcall FUN_0084fb00(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
}


//// FUNCTION FUN_0084fd30 @ 0084fd30 ////

int * __thiscall FUN_0084fd30(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  (**(code **)(*(int *)((int)this + 0x18) + 4))();
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  (*(code *)**(undefined4 **)((int)this + 0x18))();
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return this;
}


//// FUNCTION FUN_0084fe70 @ 0084fe70 ////

void __cdecl FUN_0084fe70(int *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_1 != param_2) {
    piVar2 = param_1 + 6;
    do {
      (**(code **)(*param_1 + 4))();
      puVar1 = (undefined4 *)*param_1;
      piVar2[-1] = *(int *)(param_3 + 0x14);
      (*(code *)*puVar1)();
      (**(code **)(*piVar2 + 4))();
      piVar2[5] = *(int *)(param_3 + 0x2c);
      (**(code **)*piVar2)();
      piVar2[6] = *(int *)(param_3 + 0x30);
      param_1 = param_1 + 0xd;
      piVar2 = piVar2 + 0xd;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_0084fed0 @ 0084fed0 ////

int * __cdecl FUN_0084fed0(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_1 != param_2) {
    piVar2 = param_3 + 6;
    do {
      (**(code **)(*param_3 + 4))();
      puVar1 = (undefined4 *)*param_3;
      piVar2[-1] = *(int *)(param_1 + 0x14);
      (*(code *)*puVar1)();
      (**(code **)(*piVar2 + 4))();
      piVar2[5] = *(int *)(param_1 + 0x2c);
      (**(code **)*piVar2)();
      piVar2[6] = *(int *)(param_1 + 0x30);
      param_1 = param_1 + 0x34;
      param_3 = param_3 + 0xd;
      piVar2 = piVar2 + 0xd;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_0084ff30 @ 0084ff30 ////

undefined4 * __cdecl FUN_0084ff30(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 != param_2) {
    piVar4 = param_3 + 6;
    do {
      piVar1 = param_3 + -0xd;
      param_3 = param_3 + -0xd;
      iVar3 = param_2 + -0x34;
      piVar5 = piVar4 + -0xd;
      (**(code **)(*piVar1 + 4))();
      puVar2 = (undefined4 *)*param_3;
      piVar4[-0xe] = *(int *)(param_2 + -0x20);
      (*(code *)*puVar2)();
      (**(code **)(*piVar5 + 4))();
      piVar4[-8] = *(int *)(param_2 + -8);
      (**(code **)*piVar5)();
      piVar4[-7] = *(int *)(param_2 + -4);
      param_2 = iVar3;
      piVar4 = piVar5;
    } while (iVar3 != param_1);
    return param_3;
  }
  return param_3;
}


//// FUNCTION AwardSystem_Constructor @ 0084fff0 ////

/* WARNING: Removing unreachable block (ram,0x00850069) */

void AwardSystem_Constructor(void)

{
  char local_20 [14];
  undefined1 local_12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7d28;
  local_c = ExceptionList;
  if (DAT_0104ef54 == '\0') {
    local_20[0] = '\0';
    ExceptionList = &local_c;
    _strncpy(local_20,"awd_playeronly",0xe);
    local_12 = 0;
    local_4 = 0;
    CVarSystem_Register_STUBBED();
    DAT_0104ef54 = '\x01';
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00850140 @ 00850140 ////

void __thiscall FUN_00850140(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d1aed0;
  iVar2 = *(int *)(param_1 + 0x14);
  *(int *)((int)this + 0x14) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 8) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x24) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 **)((int)this + 0x24) = (undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x18) = &PTR_FUN_00d1e55c;
  iVar2 = *(int *)(param_1 + 0x2c);
  *(int *)((int)this + 0x2c) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0x20) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return;
}


//// FUNCTION FUN_008501c0 @ 008501c0 ////

void __fastcall FUN_008501c0(undefined4 *param_1)

{
  param_1[6] = &PTR_FUN_00d1e55c;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[8] = param_1[7];
  }
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1[7] + 4) = param_1[8];
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[8] = param_1[7];
  }
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1[7] + 4) = param_1[8];
  }
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_00d1aed0;
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


//// FUNCTION FUN_00850260 @ 00850260 ////

void __fastcall FUN_00850260(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d1aed0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 6;
  param_1[6] = &PTR_FUN_00d1e55c;
  param_1[0xb] = 0;
  return;
}


//// FUNCTION FUN_008502c0 @ 008502c0 ////

undefined4 * __thiscall FUN_008502c0(void *this,byte param_1)

{
  FUN_008501c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008502e0 @ 008502e0 ////

void __cdecl FUN_008502e0(int *param_1,int *param_2)

{
  undefined4 local_40 [5];
  int iStack_2c;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7d48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00850140(local_40,(int)param_1);
  local_4 = 0;
  (**(code **)(*param_1 + 4))();
  param_1[5] = param_2[5];
  (**(code **)*param_1)();
  (**(code **)(param_1[6] + 4))();
  param_1[0xb] = param_2[0xb];
  (**(code **)param_1[6])();
  param_1[0xc] = param_2[0xc];
  (**(code **)(*param_2 + 4))();
  param_2[5] = iStack_2c;
  (**(code **)*param_2)();
  (**(code **)(param_2[6] + 4))();
  param_2[0xb] = iStack_14;
  (**(code **)param_2[6])();
  param_2[0xc] = iStack_10;
  FUN_008501c0(local_40);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008503a0 @ 008503a0 ////

void __cdecl FUN_008503a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  void **ppvVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 in_stack_00000024;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  code *in_stack_00000044;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce7d68;
  local_4 = 0;
  ppvVar2 = &pvStack_c;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar2, param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    iVar1 = iVar4 * 0x34 + param_1;
    cVar3 = (*in_stack_00000044)(iVar1,&stack0x00000010);
    if (cVar3 == '\0') break;
    puVar5 = (undefined4 *)(param_2 * 0x34 + param_1);
    (**(code **)(*(int *)(param_2 * 0x34 + param_1) + 4))();
    puVar5[5] = *(undefined4 *)(iVar1 + 0x14);
    (**(code **)*puVar5)();
    (**(code **)(puVar5[6] + 4))();
    puVar5[0xb] = *(undefined4 *)(iVar1 + 0x2c);
    (**(code **)puVar5[6])();
    puVar5[0xc] = *(undefined4 *)(iVar1 + 0x30);
    ppvVar2 = ExceptionList;
    param_2 = iVar4;
  }
  puVar5 = (undefined4 *)(param_2 * 0x34 + param_1);
  (**(code **)(*(int *)(param_2 * 0x34 + param_1) + 4))();
  puVar5[5] = in_stack_00000024;
  (**(code **)*puVar5)();
  (**(code **)(puVar5[6] + 4))();
  puVar5[0xb] = in_stack_0000003c;
  (**(code **)puVar5[6])();
  puVar5[0xc] = in_stack_00000040;
  FUN_008501c0((undefined4 *)&stack0x00000010);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008504a0 @ 008504a0 ////

void __cdecl FUN_008504a0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int **ppiVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_50;
  int *local_4c;
  int *piStack_48;
  int *piStack_44;
  undefined4 local_40 [5];
  int iStack_2c;
  int iStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7d88;
  local_c = ExceptionList;
  iVar2 = ((int)param_3 - (int)param_1) / 0x34;
  iVar1 = ((int)param_2 - (int)param_1) / 0x34;
  iVar5 = iVar1;
  local_50 = iVar2;
  while (iVar3 = iVar5, iVar3 != 0) {
    iVar5 = local_50 % iVar3;
    local_50 = iVar3;
  }
  if ((local_50 < iVar2) && (0 < local_50)) {
    piVar7 = param_1 + local_50 * 0xd;
    ExceptionList = &local_c;
    do {
      param_2 = piVar7;
      FUN_00850140(local_40,(int)piVar7);
      local_4 = 0;
      if (piVar7 + iVar1 * 0xd == param_3) {
        ppiVar6 = &param_1;
      }
      else {
        local_4c = piVar7 + iVar1 * 0xd;
        ppiVar6 = &local_4c;
      }
      piVar8 = piVar7;
      piVar9 = piVar7;
      piVar4 = *ppiVar6;
      if (*ppiVar6 != piVar7) {
        do {
          piVar7 = piVar4;
          (**(code **)(*piVar9 + 4))();
          piVar9[5] = piVar7[5];
          (**(code **)*piVar9)();
          (**(code **)(piVar9[6] + 4))();
          piVar9[0xb] = piVar7[0xb];
          (**(code **)piVar9[6])();
          piVar9[0xc] = piVar7[0xc];
          iVar2 = ((int)param_3 - (int)piVar7) / 0x34;
          if (iVar1 < iVar2) {
            piStack_48 = piVar7 + iVar1 * 0xd;
            ppiVar6 = &piStack_48;
          }
          else {
            piStack_44 = param_1 + (iVar1 - iVar2) * 0xd;
            ppiVar6 = &piStack_44;
          }
          piVar8 = param_2;
          piVar9 = piVar7;
          piVar4 = *ppiVar6;
        } while (*ppiVar6 != param_2);
      }
      (**(code **)(*piVar7 + 4))();
      piVar7[5] = iStack_2c;
      (**(code **)*piVar7)();
      (**(code **)(piVar7[6] + 4))();
      piVar7[0xb] = iStack_14;
      (**(code **)piVar7[6])();
      piVar7[0xc] = iStack_10;
      local_4 = 0xffffffff;
      FUN_008501c0(local_40);
      piVar7 = piVar8 + -0xd;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008506a0 @ 008506a0 ////

void __cdecl FUN_008506a0(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  
  cVar1 = (*(code *)param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    FUN_008502e0(param_2,param_1);
  }
  cVar1 = (*(code *)param_4)(param_3,param_2);
  if (cVar1 != '\0') {
    FUN_008502e0(param_3,param_2);
  }
  cVar1 = (*(code *)param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    FUN_008502e0(param_2,param_1);
  }
  return;
}


//// FUNCTION FUN_00850700 @ 00850700 ////

void __cdecl FUN_00850700(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  code *in_stack_00000044;
  undefined1 auStack_54 [44];
  undefined4 uStack_28;
  int iStack_24;
  code *pcStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce7da8;
  local_4 = 0;
  iVar4 = param_2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar2 = iVar4 * 2 + 2;
    if (param_3 <= iVar2) break;
    iStack_24 = iVar2 * 0x34 + param_1;
    pcStack_20 = (code *)(iStack_24 + -0x34);
    uStack_28 = 0x850749;
    cVar1 = (*in_stack_00000044)();
    if (cVar1 != '\0') {
      iVar2 = iVar4 * 2 + 1;
    }
    puVar3 = (undefined4 *)(iVar4 * 0x34 + param_1);
    iVar5 = iVar2 * 0x34 + param_1;
    pcStack_20 = (code *)0x850765;
    (**(code **)(*(int *)(iVar4 * 0x34 + param_1) + 4))();
    puVar3[5] = *(undefined4 *)(iVar5 + 0x14);
    pcStack_20 = (code *)0x850771;
    (**(code **)*puVar3)();
    pcStack_20 = (code *)0x85077c;
    (**(code **)(puVar3[6] + 4))();
    puVar3[0xb] = *(undefined4 *)(iVar5 + 0x2c);
    pcStack_20 = (code *)0x850789;
    (**(code **)puVar3[6])();
    puVar3[0xc] = *(undefined4 *)(iVar5 + 0x30);
    iVar4 = iVar2;
  }
  if (iVar2 == param_3) {
    puVar3 = (undefined4 *)(iVar4 * 0x34 + param_1);
    iVar2 = param_3 * 0x34 + -0x34 + param_1;
    pcStack_20 = (code *)0x8507bd;
    (**(code **)(*(int *)(iVar4 * 0x34 + param_1) + 4))();
    puVar3[5] = *(undefined4 *)(iVar2 + 0x14);
    pcStack_20 = (code *)0x8507c9;
    (**(code **)*puVar3)();
    pcStack_20 = (code *)0x8507d4;
    (**(code **)(puVar3[6] + 4))();
    puVar3[0xb] = *(undefined4 *)(iVar2 + 0x2c);
    pcStack_20 = (code *)0x8507e0;
    (**(code **)puVar3[6])();
    puVar3[0xc] = *(undefined4 *)(iVar2 + 0x30);
    iVar4 = param_3 + -1;
  }
  pcStack_20 = in_stack_00000044;
  FUN_00850140(auStack_54,(int)&stack0x00000010);
  FUN_008503a0(param_1,iVar4,param_2);
  pcStack_20 = (code *)0x85081d;
  FUN_008501c0((undefined4 *)&stack0x00000010);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00850850 @ 00850850 ////

void __cdecl FUN_00850850(int param_1,int param_2,int *param_3)

{
  undefined4 in_stack_00000044;
  undefined1 auStack_50 [52];
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce7dc8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  uStack_1c = 0x85087b;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_3 + 4))();
  param_3[5] = *(int *)(param_1 + 0x14);
  uStack_1c = 0x85088b;
  (**(code **)*param_3)();
  uStack_1c = 0x850896;
  (**(code **)(param_3[6] + 4))();
  param_3[0xb] = *(int *)(param_1 + 0x2c);
  uStack_1c = 0x8508a2;
  (**(code **)param_3[6])();
  uStack_1c = in_stack_00000044;
  param_3[0xc] = *(int *)(param_1 + 0x30);
  FUN_00850140(auStack_50,(int)&stack0x00000010);
  FUN_00850700(param_1,0,(param_2 - param_1) / 0x34);
  uStack_1c = 0x8508ec;
  FUN_008501c0((undefined4 *)&stack0x00000010);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00850910 @ 00850910 ////

void * __cdecl FUN_00850910(int param_1,int param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_00850140(param_3,param_1);
    }
    param_1 = param_1 + 0x34;
    param_3 = (void *)((int)param_3 + 0x34);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00850950 @ 00850950 ////

void * __cdecl FUN_00850950(int param_1,int param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_00850140(param_3,param_1);
    }
    param_1 = param_1 + 0x34;
    param_3 = (void *)((int)param_3 + 0x34);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00850990 @ 00850990 ////

void __cdecl FUN_00850990(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0x34;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_008506a0(param_1,param_1 + iVar1 * 0xd,param_1 + iVar1 * 0x1a,param_4);
    FUN_008506a0(param_2 + iVar1 * -0xd,param_2,param_2 + iVar1 * 0xd,param_4);
    FUN_008506a0(param_3 + iVar1 * -0x1a,param_3 + iVar1 * -0xd,param_3,param_4);
    FUN_008506a0(param_1 + iVar1 * 0xd,param_2,param_3 + iVar1 * -0xd,param_4);
    return;
  }
  FUN_008506a0(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_00850a40 @ 00850a40 ////

void __cdecl FUN_00850a40(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [52];
  undefined4 uStack_14;
  
  iVar1 = (param_2 - param_1) / 0x34;
  iVar2 = iVar1 / 2;
  if (0 < iVar2) {
    iVar3 = iVar2 * 0x34 + param_1;
    do {
      uStack_14 = param_3;
      iVar3 = iVar3 + -0x34;
      iVar2 = iVar2 + -1;
      FUN_00850140(auStack_48,iVar3);
      FUN_00850700(param_1,iVar2,iVar1);
    } while (0 < iVar2);
  }
  return;
}


//// FUNCTION FUN_00850ad0 @ 00850ad0 ////

void __cdecl FUN_00850ad0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_40 [52];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  uStack_c = param_3;
  iVar1 = param_2 + -0x34;
  FUN_00850140(auStack_40,iVar1);
  FUN_00850850(param_1,iVar1,(int *)iVar1);
  return;
}


//// FUNCTION FUN_00850b60 @ 00850b60 ////

void __cdecl FUN_00850b60(void *param_1,int param_2,int param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (void *)0x0) {
      FUN_00850140(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x34);
  }
  return;
}


//// FUNCTION FUN_00850bc0 @ 00850bc0 ////

void __cdecl FUN_00850bc0(undefined4 *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piStack_4;
  
  piVar6 = param_2 + (((int)param_3 - (int)param_2) / 0x68) * 0xd;
  FUN_00850990(param_2,piVar6,param_3 + -0xd,param_4);
  piVar1 = piVar6;
  while (piStack_4 = piVar1, param_2 < piStack_4) {
    piVar1 = piStack_4 + -0xd;
    cVar2 = (*(code *)param_4)(piVar1,piStack_4);
    if ((cVar2 != '\0') || (cVar2 = (*(code *)param_4)(piStack_4,piVar1), cVar2 != '\0')) break;
  }
  do {
    piVar6 = piVar6 + 0xd;
    piVar1 = piVar6;
    piVar7 = piStack_4;
    piVar4 = piStack_4;
    if (param_3 <= piVar6) break;
    cVar2 = (*(code *)param_4)(piVar6,piStack_4);
    if ((cVar2 != '\0') || (cVar2 = (*(code *)param_4)(piStack_4,piVar6), cVar2 != '\0')) break;
  } while( true );
joined_r0x00850c64:
  piVar3 = piVar4;
  if (param_3 <= piVar1) {
joined_r0x00850c9e:
    while (param_2 < piVar4) {
      piVar3 = piVar3 + -0xd;
      cVar2 = (*(code *)param_4)(piVar3,piVar7);
      if (cVar2 == '\0') {
        cVar2 = (*(code *)param_4)(piVar7,piVar3);
        piVar4 = piStack_4;
        if (cVar2 != '\0') break;
        piVar7 = piVar7 + -0xd;
        FUN_008502e0(piVar7,piVar3);
      }
      piStack_4 = piStack_4 + -0xd;
      piVar4 = piStack_4;
    }
    if (piVar4 == param_2) {
      if (piVar1 == param_3) {
        *param_1 = piVar7;
        param_1[1] = piVar6;
        return;
      }
      if (piVar6 != piVar1) {
        FUN_008502e0(piVar7,piVar6);
      }
      piVar6 = piVar6 + 0xd;
      FUN_008502e0(piVar7,piVar1);
      piVar1 = piVar1 + 0xd;
      piVar7 = piVar7 + 0xd;
    }
    else {
      piStack_4 = piVar4 + -0xd;
      piVar4 = piStack_4;
      if (piVar1 == param_3) {
        piVar7 = piVar7 + -0xd;
        if (piStack_4 != piVar7) {
          FUN_008502e0(piStack_4,piVar7);
        }
        piVar6 = piVar6 + -0xd;
        FUN_008502e0(piVar7,piVar6);
      }
      else {
        FUN_008502e0(piVar1,piStack_4);
        piVar1 = piVar1 + 0xd;
      }
    }
    goto joined_r0x00850c64;
  }
  cVar2 = (*(code *)param_4)(piVar7,piVar1);
  piVar5 = piVar6;
  if (cVar2 == '\0') {
    cVar2 = (*(code *)param_4)(piVar1,piVar7);
    if (cVar2 != '\0') goto joined_r0x00850c9e;
    piVar5 = piVar6 + 0xd;
    FUN_008502e0(piVar6,piVar1);
  }
  piVar6 = piVar5;
  piVar1 = piVar1 + 0xd;
  goto joined_r0x00850c64;
}


//// FUNCTION FUN_00850db0 @ 00850db0 ////

void __cdecl FUN_00850db0(int *param_1,int *param_2,undefined *param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  
  piVar1 = param_1;
  if (param_1 != param_2) {
    while (piVar1 = piVar1 + 0xd, piVar1 != param_2) {
      cVar3 = (*(code *)param_3)(piVar1,param_1);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)param_3)(piVar1,piVar1 + -0xd);
        piVar2 = piVar1 + -0xd;
        if (cVar3 != '\0') {
          do {
            piVar4 = piVar2;
            cVar3 = (*(code *)param_3)(piVar1,piVar4 + -0xd);
            piVar2 = piVar4 + -0xd;
          } while (cVar3 != '\0');
          if ((piVar4 != piVar1) && (piVar1 != piVar1 + 0xd)) {
            FUN_008504a0(piVar4,piVar1,piVar1 + 0xd);
          }
        }
      }
      else if ((param_1 != piVar1) && (piVar1 != piVar1 + 0xd)) {
        FUN_008504a0(param_1,piVar1,piVar1 + 0xd);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00850e90 @ 00850e90 ////

void FUN_00850e90(void)

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
  puStack_8 = &LAB_00ce7de8;
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


//// FUNCTION FUN_00850fa0 @ 00850fa0 ////

void __cdecl FUN_00850fa0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (1 < iVar1 / 0x34) {
    FUN_00850ad0(param_1,param_2,param_3);
    param_2 = param_2 + -0x34;
    iVar1 = param_2 - param_1;
  }
  return;
}


//// FUNCTION FUN_00851050 @ 00851050 ////

void FUN_00851050(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xd) {
    FUN_008501c0(param_1);
  }
  return;
}


//// FUNCTION FUN_00851080 @ 00851080 ////

void __fastcall FUN_00851080(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0xd) {
    FUN_008501c0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_008510d0 @ 008510d0 ////

void * FUN_008510d0(void *param_1,int param_2,int param_3)

{
  FUN_00850b60(param_1,param_2,param_3);
  return (void *)(param_2 * 0x34 + (int)param_1);
}


//// FUNCTION FUN_00851100 @ 00851100 ////

void __thiscall FUN_00851100(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_0084fed0((int)param_3,*(int *)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 0xd) {
      FUN_008501c0(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00851160 @ 00851160 ////

void __thiscall FUN_00851160(void *this,int *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_50 [13];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce7e08;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_00850140(local_50,param_3);
  iVar3 = *(int *)((int)this + 4);
  uVar6 = 0;
  local_8 = 0;
  if (iVar3 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar3) / 0x34;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x34;
    }
    if (0x4ec4ec4U - iVar2 < param_2) {
      FUN_00850e90();
      uVar6 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x34;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x4ec4ec4 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x34;
      }
      if (uVar6 < iVar3 + param_2) {
        iVar3 = FUN_0084fb00((int)this);
        uVar6 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar6 * 0x34);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar4;
      pvVar5 = FUN_00850950(*(int *)((int)this + 4),(int)param_1,pvVar4);
      FUN_00850b60(pvVar5,param_2,(int)local_50);
      FUN_00850950((int)param_1,*(int *)((int)this + 8),(void *)((int)pvVar5 + param_2 * 0x34));
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x34;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_00851050(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar6 * 0x34 + (int)pvVar4);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar3) * 0x34 + (int)pvVar4);
      *(void **)((int)this + 4) = pvVar4;
    }
    else {
      puVar1 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar1 - (int)param_1) / 0x34) < param_2) {
        FUN_00850950((int)param_1,(int)puVar1,param_1 + param_2 * 0xd);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_008510d0(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 0x34,(int)local_50)
        ;
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x34;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_0084fe70(param_1,(int *)(iVar3 + param_2 * -0x34),(int)local_50);
      }
      else {
        pvVar4 = FUN_00850950((int)(puVar1 + param_2 * -0xd),(int)puVar1,puVar1);
        *(void **)((int)this + 8) = pvVar4;
        FUN_0084ff30((int)param_1,(int)(puVar1 + param_2 * -0xd),puVar1);
        FUN_0084fe70(param_1,param_1 + param_2 * 0xd,(int)local_50);
      }
    }
  }
  FUN_008501c0(local_50);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00851450 @ 00851450 ////

void __cdecl FUN_00851450(int *param_1,int *param_2,int param_3,undefined *param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 / 0x34;
    if (iVar2 < 0x21) {
LAB_00851530:
      if (1 < iVar2) {
        FUN_00850db0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < ((int)param_2 - (int)param_1) / 0x34) {
          FUN_00850a40((int)param_1,(int)param_2,param_4);
        }
        FUN_00850fa0((int)param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_00851530;
    }
    FUN_00850bc0(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)local_8 - (int)param_1) / 0x34 < ((int)param_2 - (int)local_4) / 0x34) {
      FUN_00851450(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00851450(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_008515c0 @ 008515c0 ////

void __thiscall FUN_008515c0(void *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce7e20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x4ec4ec4 < param_1) {
    ExceptionList = &local_10;
    FUN_00850e90();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x34;
  }
  if (uVar1 < param_1) {
    pvVar2 = operator_new(param_1 * 0x34);
    local_8 = 0;
    FUN_00850910(*(int *)((int)this + 4),*(int *)((int)this + 8),pvVar2);
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      FUN_00851050(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(void **)((int)this + 0xc) = (void *)(param_1 * 0x34 + (int)pvVar2);
    *(void **)((int)this + 8) = pvVar2;
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008516c0 @ 008516c0 ////

void __thiscall FUN_008516c0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce7e38;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x34;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x34;
    }
    ExceptionList = &local_c;
    FUN_00851160(this,*(int **)((int)this + 8),param_1 - iVar2,(int)&stack0x00000008);
  }
  else {
    ExceptionList = &local_c;
    if (iVar2 != 0) {
      ExceptionList = &local_c;
      if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x34)) {
        ExceptionList = &local_c;
        FUN_00851100(this,&param_1,(int *)(param_1 * 0x34 + iVar2),*(int **)((int)this + 8));
      }
    }
  }
  FUN_008501c0((undefined4 *)&stack0x00000008);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00851790 @ 00851790 ////

void __thiscall FUN_00851790(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x34 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x34;
      goto LAB_008517d5;
    }
  }
  iVar1 = 0;
LAB_008517d5:
  FUN_00851160(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x34 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00851890 @ 00851890 ////

void __thiscall FUN_00851890(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x34) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x34))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_00850b60(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x34;
    return;
  }
  FUN_00851790(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00851920 @ 00851920 ////

void __cdecl FUN_00851920(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined **ppuStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_70;
  undefined **ppuStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined ***pppuStack_60;
  undefined4 uStack_58;
  undefined4 local_40 [13];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7e58;
  local_c = ExceptionList;
  iVar3 = *(int *)((int)param_1 + 4);
  if (iVar3 == 0) {
    return;
  }
  if ((*(int *)((int)param_1 + 8) - iVar3) / 0x34 != 0) {
    uStack_58 = 0x851975;
    ExceptionList = &local_c;
    FUN_00850140(local_40,iVar3);
    piVar4 = *(int **)((int)param_1 + 4);
    local_4 = 0;
    if (piVar4 != *(int **)((int)param_1 + 8)) {
      piVar5 = piVar4 + 6;
      do {
        iVar3 = piVar5[5];
        iVar2 = GetPlayerStudio();
        if (iVar3 == iVar2) {
          piVar4 = piVar4 + 0xd;
          piVar5 = piVar5 + 0xd;
        }
        else {
          iVar3 = *(int *)((int)param_1 + 8);
          (**(code **)(*piVar4 + 4))();
          puVar1 = (undefined4 *)*piVar4;
          piVar5[-1] = *(int *)(iVar3 + -0x20);
          (*(code *)*puVar1)();
          (**(code **)(*piVar5 + 4))();
          piVar5[5] = *(int *)(iVar3 + -8);
          (**(code **)*piVar5)();
          piVar5[6] = *(int *)(iVar3 + -4);
          if (*(int *)((int)param_1 + 4) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4)) / 0x34;
          }
          puStack_78 = (undefined1 *)&ppuStack_84;
          uStack_80 = 0;
          uStack_7c = 0;
          ppuStack_84 = &PTR_FUN_00d1aed0;
          uStack_70 = 0;
          pppuStack_60 = &ppuStack_6c;
          uStack_68 = 0;
          uStack_64 = 0;
          ppuStack_6c = &PTR_FUN_00d1e55c;
          uStack_58 = 0;
          FUN_008516c0(param_1,iVar3 - 1);
        }
      } while (piVar4 != *(int **)((int)param_1 + 8));
    }
    if ((*(int *)((int)param_1 + 4) == 0) ||
       ((*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4)) / 0x34 == 0)) {
      uStack_58 = 0x851a7a;
      FUN_00851890(param_1,(int)local_40);
    }
    FUN_008501c0(local_40);
    ExceptionList = local_c;
    return;
  }
  return;
}


//// FUNCTION CAwardFactory_Judge @ 00851aa0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __fastcall CAwardFactory_Judge(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  size_t sVar6;
  undefined4 uVar7;
  void *this;
  uint uVar8;
  undefined2 *_Count;
  int *piVar9;
  undefined4 uVar10;
  wchar_t *pwStack_158;
  undefined2 *puStack_154;
  undefined2 *puStack_150;
  uint uStack_14c;
  undefined2 auStack_148 [8];
  undefined1 auStack_138 [4];
  int *local_134;
  int *local_130;
  undefined4 local_12c;
  void *local_128;
  float local_124;
  void *pvStack_120;
  void *pvStack_11c;
  uint uStack_118;
  uint uStack_114;
  float fStack_100;
  void *pvStack_fc;
  void *pvStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  void *pvStack_dc;
  void *pvStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  void *apvStack_b8 [2];
  uint uStack_b0;
  wchar_t awStack_9c [66];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 uStack_10;
  undefined3 uStack_f;
  int local_c;
  
  uStack_10 = 0xbd;
  uStack_f = 0xce7e;
  pvStack_14 = ExceptionList;
  local_124 = 0.0;
  local_130 = (int *)0x0;
  local_12c = 0;
  local_128 = (void *)0x0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  FUN_008515c0(&local_134,200);
  iVar2 = (**(code **)(*param_1 + 0xc))();
  ppuVar3 = FUN_00860970(iVar2);
  puVar4 = FUN_00568790(&pvStack_11c,ppuVar3);
  puVar4 = FUN_0043bdc0(&pvStack_d8,L" (",puVar4);
  puVar4 = FUN_0043be60(apvStack_b8,puVar4,L")</p>");
  local_c._0_1_ = 3;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  puVar5 = FUN_00861de0(&pvStack_f8,iVar2);
  puStack_154 = auStack_148;
  auStack_148[0] = 0;
  puStack_150 = (undefined2 *)0x0;
  uStack_14c = 10;
  sVar6 = FUN_00ace02d(L"<p>Now judging entries for: ");
  FUN_0040cae0(&puStack_154,L"<p>Now judging entries for: ",sVar6);
  FUN_0040cae0(&puStack_154,(wchar_t *)*puVar5,puVar5[1]);
  FUN_0040cae0(&puStack_154,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < uStack_14c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_154);
  }
  if (10 < uStack_f0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_f8);
  }
  if (10 < uStack_b0) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_b8[0]);
  }
  if (10 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_d8);
  }
  local_c = (uint)local_c._1_3_ << 8;
  if (10 < uStack_114) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_11c);
  }
  (**(code **)(*param_1 + 0x24))(&local_134);
  if (local_134 != (int *)0x0) {
    local_124 = (float)(((int)local_130 - (int)local_134) / 0x34);
    if (local_124 != 0.0) {
      if (0.0 < _DAT_0104ef50) {
        FUN_00851920(auStack_138);
      }
      FUN_00851450(local_134,local_130,((int)local_130 - (int)local_134) / 0x34,&LAB_0084fa00);
      uVar10 = 0;
      puVar4 = (undefined4 *)FUN_0085c530(&local_124);
      uVar7 = (**(code **)(*param_1 + 0xc))();
      this = (void *)FUN_00858930(uVar7,puVar4,uVar10);
      local_128 = this;
      (**(code **)(*param_1 + 0x20))(&pvStack_fc);
      uStack_10 = 4;
      FUN_008586b0(this,(int *)&pvStack_fc,(int)auStack_138);
      pwStack_158 = (wchar_t *)&uStack_14c;
      uStack_14c = uStack_14c & 0xffff0000;
      puStack_154 = (undefined2 *)0x0;
      puStack_150 = (undefined2 *)0xa;
      uVar8 = FUN_00ace02d(
                          L"<table><tr bgcolor=#aaaaaa><td>Contender</td><td>Studio</td><td>Score</td></tr>\n"
                          );
      FUN_004036d0(&pwStack_158,
                   L"<table><tr bgcolor=#aaaaaa><td>Contender</td><td>Studio</td><td>Score</td></tr>\n"
                   ,uVar8);
      if (10 < puStack_150) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_158);
      }
      if (local_134 != local_130) {
        piVar9 = local_134 + 5;
        do {
          puVar4 = (undefined4 *)(**(code **)(*(int *)piVar9[6] + 0x20))();
          pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,5);
          puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x20))(&local_124,*piVar9);
          pwStack_158 = (wchar_t *)&uStack_14c;
          uStack_14c = uStack_14c & 0xffff0000;
          puStack_154 = (undefined2 *)0x0;
          puStack_150 = (undefined2 *)0xa;
          sVar6 = FUN_00ace02d(L"<tr><td>");
          FUN_0040cae0(&pwStack_158,L"<tr><td>",sVar6);
          FUN_0040cae0(&pwStack_158,(wchar_t *)*puVar5,puVar5[1]);
          sVar6 = FUN_00ace02d(L"</td><td>");
          FUN_0040cae0(&pwStack_158,L"</td><td>",sVar6);
          FUN_0040cae0(&pwStack_158,(wchar_t *)*puVar4,puVar4[1]);
          sVar6 = FUN_00ace02d(L"</td><td>");
          FUN_0040cae0(&pwStack_158,L"</td><td>",sVar6);
          sVar6 = _swprintf(awStack_9c,0xd18f84,SUB84((double)(float)piVar9[7],0));
          FUN_0040cae0(&pwStack_158,awStack_9c,sVar6);
          sVar6 = FUN_00ace02d(L"</td></tr>\n");
          FUN_0040cae0(&pwStack_158,L"</td></tr>\n",sVar6);
          if (10 < puStack_150) {
                    /* WARNING: Subroutine does not return */
            _free(pwStack_158);
          }
          if (10 < uStack_118) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_120);
          }
          uStack_10 = 4;
          if (10 < uStack_d4) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_dc);
          }
          piVar1 = piVar9 + 8;
          piVar9 = piVar9 + 0xd;
        } while (piVar1 != local_130);
      }
      pwStack_158 = (wchar_t *)&uStack_14c;
      uStack_14c = uStack_14c & 0xffff0000;
      puStack_154 = (undefined2 *)0x0;
      puStack_150 = (undefined2 *)&lpType_0000000a;
      _Count = (undefined2 *)FUN_00ace02d(L"</table>\n");
      if (puStack_150 <= _Count) {
        if (&lpType_0000000a < puStack_150) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_158);
        }
        puStack_150 = (undefined2 *)((uint)(_Count + 0x10) & 0xffffffe0);
        pwStack_158 = _malloc((int)puStack_150 * 2);
      }
      _wcsncpy(pwStack_158,L"</table>\n",(size_t)_Count);
      pwStack_158[(int)_Count] = L'\0';
      puStack_154 = _Count;
      if (&lpType_0000000a < puStack_150) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_158);
      }
      iVar2 = FUN_0054b120();
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*param_1 + 0xc))();
        FUN_00861de0(&pvStack_120,iVar2);
        local_124 = (float)local_134[5];
        uStack_10 = 6;
        FUN_0085c530(&fStack_100);
        FUN_0054b120();
        FUN_0054af90();
        if (10 < uStack_118) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_120);
        }
      }
      if (10 < uStack_f4) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_fc);
      }
    }
    piVar1 = local_130;
    piVar9 = local_134;
    if (local_134 != (int *)0x0) {
      for (; piVar9 != piVar1; piVar9 = piVar9 + 0xd) {
        FUN_008501c0(piVar9);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_134);
    }
  }
  ExceptionList = pvStack_18;
  return local_128;
}


//// FUNCTION FUN_00852030 @ 00852030 ////

void __fastcall FUN_00852030(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00852060 @ 00852060 ////

void __cdecl FUN_00852060(undefined4 param_1)

{
  DAT_0104ef58 = param_1;
  return;
}


//// FUNCTION FUN_00852240 @ 00852240 ////

void __cdecl FUN_00852240(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x15);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x15);
  }
  return;
}


//// FUNCTION FUN_00852260 @ 00852260 ////

void __cdecl FUN_00852260(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}


//// FUNCTION FUN_00852290 @ 00852290 ////

void __fastcall FUN_00852290(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00852420 @ 00852420 ////

void __thiscall FUN_00852420(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x15) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*(int *)((int)this + 4) + 4)) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}


//// FUNCTION FUN_00852480 @ 00852480 ////

void __thiscall FUN_00852480(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x15) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(*(int *)((int)this + 4) + 4)) {
    *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}


//// FUNCTION FUN_00852520 @ 00852520 ////

void __fastcall FUN_00852520(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x15) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x15);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x15);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x15) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x15) == '\0');
    if (*(char *)((int)piVar4 + 0x15) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_008525d0 @ 008525d0 ////

int * __fastcall FUN_008525d0(int *param_1)

{
  FUN_00852290(param_1);
  return param_1;
}


//// FUNCTION FUN_00852600 @ 00852600 ////

void __fastcall FUN_00852600(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7ed8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0xe);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x38) & (uint)param_1),param_1 + -0xe);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008526d0 @ 008526d0 ////

/* WARNING: Removing unreachable block (ram,0x0085273a) */

void __fastcall FUN_008526d0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce7ef8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d61804;
  param_1[0xe] = &PTR_LAB_00d617d8;
  local_4 = 0;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if ((uint)param_1[0x1e] < 0x15) {
    FUN_0053f150(param_1 + 0xe);
    local_4 = 0xffffffff;
    FUN_00526bb0(param_1);
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1c]);
}


//// FUNCTION FUN_008527e0 @ 008527e0 ////

void FUN_008527e0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_008527e0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00852880 @ 00852880 ////

void FUN_00852880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[2] = param_3;
    puVar1[1] = param_2;
    puVar1[3] = *param_4;
    puVar1[4] = param_4[1];
    *(undefined1 *)(puVar1 + 5) = param_5;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
  }
  return;
}


//// FUNCTION FUN_008528c0 @ 008528c0 ////

int * __fastcall FUN_008528c0(int *param_1)

{
  FUN_00852520(param_1);
  return param_1;
}


//// FUNCTION FUN_00852900 @ 00852900 ////

int * __fastcall FUN_00852900(int *param_1)

{
  FUN_00852290(param_1);
  return param_1;
}


//// FUNCTION FUN_00852910 @ 00852910 ////

void __fastcall FUN_00852910(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7f20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Awards\\AwardPrizePack.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x29;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar2 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("ID");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x38));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Awards\\AwardPrizePack.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x2a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("Unlocked");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x58),1);
  }
  thunk_FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00852b10 @ 00852b10 ////

undefined4 * __thiscall FUN_00852b10(void *this,byte param_1)

{
  FUN_008526d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00852b30 @ 00852b30 ////

void __fastcall FUN_00852b30(int param_1)

{
  FUN_008527e0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00852b60 @ 00852b60 ////

undefined4 FUN_00852b60(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = (byte *)*param_2;
  pbVar2 = (byte *)*param_1;
  while( true ) {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 < 0);
}


//// FUNCTION FUN_00852bc0 @ 00852bc0 ////

int * __fastcall FUN_00852bc0(int *param_1)

{
  FUN_00852520(param_1);
  return param_1;
}


//// FUNCTION FUN_00852bd0 @ 00852bd0 ////

undefined4 * __thiscall FUN_00852bd0(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar2 = puVar3;
    puVar7 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar7;
      pbVar4 = (byte *)puVar3[3];
      pbVar6 = (byte *)*param_1;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00852c14:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00852c19;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00852c14;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00852c19:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x15) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_00852c50 @ 00852c50 ////

void FUN_00852c50(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  return;
}


//// FUNCTION FUN_00852cb0 @ 00852cb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00852cb0(void)

{
  undefined4 *puVar1;
  
  FUN_008527e0(*(void **)(DAT_0104ef98 + 4));
  *(int *)(DAT_0104ef98 + 4) = DAT_0104ef98;
  _DAT_0104ef9c = 0;
  *(int *)DAT_0104ef98 = DAT_0104ef98;
  *(int *)(DAT_0104ef98 + 8) = DAT_0104ef98;
  puVar1 = DAT_0104ef64;
  while (puVar1 != &DAT_0104ef70) {
    if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[2])(1);
      puVar1 = DAT_0104ef64;
    }
  }
  return;
}


//// FUNCTION FUN_00852d50 @ 00852d50 ////

void __fastcall FUN_00852d50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00852c50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00852de0 @ 00852de0 ////

int __fastcall FUN_00852de0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00852c50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00852e10 @ 00852e10 ////

undefined4 __cdecl FUN_00852e10(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte **ppbVar5;
  bool bVar6;
  byte *local_4;
  
  pbVar3 = *(byte **)param_1;
  param_1 = pbVar3;
  pbVar2 = (byte *)FUN_00852bd0(&DAT_0104ef94,&param_1);
  if (pbVar2 != DAT_0104ef98) {
    pbVar2 = *(byte **)(pbVar2 + 0xc);
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_00852e67:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00852e6c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_00852e67;
      pbVar3 = pbVar3 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00852e6c:
    if (-1 < iVar4) {
      ppbVar5 = &param_1;
      goto LAB_00852e7f;
    }
  }
  local_4 = DAT_0104ef98;
  ppbVar5 = &local_4;
LAB_00852e7f:
  if (*ppbVar5 != DAT_0104ef98) {
    return *(undefined4 *)(*ppbVar5 + 0x10);
  }
  return 0;
}


//// FUNCTION FUN_00852ea0 @ 00852ea0 ////

void __fastcall FUN_00852ea0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d61840;
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


//// FUNCTION FUN_00852ef0 @ 00852ef0 ////

undefined4 * __thiscall FUN_00852ef0(void *this,byte param_1)

{
  FUN_00852ea0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00852f10 @ 00852f10 ////

void __thiscall
FUN_00852f10(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7f38;
  local_c = ExceptionList;
  if (0x1ffffffd < *(uint *)((int)this + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_00405d50(local_50,(undefined4 *)"map/set<T> too long",0x13);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddceb4);
  }
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_00852880(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
                               ,param_4,0);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  if (param_3 == *(undefined4 **)((int)this + 4)) {
    (*(undefined4 **)((int)this + 4))[1] = piVar3;
    **(undefined4 **)((int)this + 4) = piVar3;
    *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
  }
  else if (param_2 == '\0') {
    param_3[2] = piVar3;
    if (param_3 == *(undefined4 **)(*(int *)((int)this + 4) + 8)) {
      *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
    }
  }
  else {
    *param_3 = piVar3;
    if (param_3 == (undefined4 *)**(int **)((int)this + 4)) {
      **(int **)((int)this + 4) = (int)piVar3;
    }
  }
  cVar1 = *(char *)(piVar3[1] + 0x14);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x14) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[5] == '\0') {
LAB_0085300b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00852420(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_00852480(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_0085300b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00852480(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_00852420(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_008530c0 @ 008530c0 ////

void __thiscall FUN_008530c0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7f58;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &pvStack_c;
    FUN_00405d50(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16dc0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddd664);
  }
  ExceptionList = &pvStack_c;
  FUN_00852290((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x15) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x15) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x15) == '\0') {
          piVar6[1] = (int)piVar4;
        }
        *piVar4 = (int)piVar6;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar5 = (int *)_Memory[1];
        if ((int *)*piVar5 == _Memory) {
          *piVar5 = (int)param_2;
        }
        else {
          piVar5[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[5];
      *(char *)(param_2 + 5) = (char)_Memory[5];
      *(char *)(_Memory + 5) = (char)iVar1;
      goto LAB_00853231;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar6[1] = (int)piVar4;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
  }
  else if ((int *)*piVar4 == _Memory) {
    *piVar4 = (int)piVar6;
  }
  else {
    piVar4[2] = (int)piVar6;
  }
  piVar5 = *(int **)((int)this + 4);
  if ((int *)*piVar5 == _Memory) {
    piVar2 = piVar4;
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      piVar2 = (int *)FUN_00852260(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_00852240((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00853231:
  if ((char)_Memory[5] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[5] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_00852420(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_00852480(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_00852420(this,(int)piVar5);
              break;
            }
LAB_008532f4:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_00852480(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_008532f4;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_00852420(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_00852480(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00853380 @ 00853380 ////

void __thiscall FUN_00853380(void *this,undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 *local_8;
  bool local_4;
  undefined3 uStack_3;
  
  puVar5 = *(undefined4 **)((int)this + 4);
  local_4 = true;
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_008533e4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_008533e9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_008533e4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_008533e9:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x15) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_00852f10(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00852520((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00852b60(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00852f10(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_008534a0 @ 008534a0 ////

void __thiscall FUN_008534a0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = param_3;
  piVar6 = *(int **)((int)this + 4);
  piVar2 = param_2;
  if ((param_2 == (int *)*piVar6) && (param_3 == piVar6)) {
    FUN_008527e0((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x15) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x15);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x15);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_008530c0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00853560 @ 00853560 ////

void __cdecl FUN_00853560(int param_1)

{
  undefined4 uStack_10;
  int iStack_c;
  undefined4 auStack_8 [2];
  
  (*DAT_0104ef58)(param_1);
  uStack_10 = *(undefined4 *)(param_1 + 0x70);
  iStack_c = param_1;
  FUN_00853380(&DAT_0104ef94,auStack_8,&uStack_10);
  return;
}


//// FUNCTION FUN_008535a0 @ 008535a0 ////

void __thiscall FUN_008535a0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined4 auStack_8 [2];
  
  FUN_004015d0((undefined4 *)((int)this + 0x70),(char *)*param_1,param_1[1]);
  piVar1 = (int *)((int)this + 0x94);
  *(int ***)((int)this + 0x98) = &DAT_0104ef70;
  *piVar1 = (int)DAT_0104ef70;
  *(int **)((int)DAT_0104ef70 + 4) = piVar1;
  DAT_0104ef70 = piVar1;
  (*DAT_0104ef58)(this);
  uStack_10 = *(undefined4 *)((int)this + 0x70);
  pvStack_c = this;
  FUN_00853380(&DAT_0104ef94,auStack_8,&uStack_10);
  return;
}


//// FUNCTION FUN_00853700 @ 00853700 ////

void __fastcall FUN_00853700(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_008534a0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00853730 @ 00853730 ////

void FUN_00853730(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104ef5c;
  if ((DAT_010584c8 != 0) &&
     ((uint)((int)DAT_010584cc - DAT_010584c8 >> 2) < (uint)(DAT_010584d0 - DAT_010584c8 >> 2))) {
    *DAT_010584cc = &DAT_0104ef5c;
    DAT_010584cc = DAT_010584cc + 1;
    return;
  }
  FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  return;
}


//// FUNCTION FUN_00853790 @ 00853790 ////

void __fastcall FUN_00853790(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d61840;
  return;
}


//// FUNCTION FUN_008537f0 @ 008537f0 ////

int __fastcall FUN_008537f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00852c50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00853820 @ 00853820 ////

undefined4 * __fastcall FUN_00853820(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce7fbc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0053f080(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d61804;
  param_1[0xe] = &PTR_LAB_00d617d8;
  param_1[0x1c] = param_1 + 0x1f;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x14;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  param_1[0x27] = param_1;
  FUN_00acdb9e(0xe5d198);
  iVar1 = FUN_0097dda0();
  param_1[0x28] = iVar1;
  if (DAT_00e5d194 != '\0') {
    iVar1 = 0x94;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe5d198);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    DAT_00e5d194 = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00853910 @ 00853910 ////

void FUN_00853910(void)

{
  thunk_FUN_00852cb0();
  DAT_0104efa4 = 0;
  return;
}


//// FUNCTION FUN_00853920 @ 00853920 ////

void __cdecl FUN_00853920(undefined4 param_1)

{
  DAT_0104efa0 = param_1;
  return;
}


//// FUNCTION FUN_00853ab0 @ 00853ab0 ////

void __cdecl FUN_00853ab0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x31);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x31);
  }
  return;
}


//// FUNCTION FUN_00853b30 @ 00853b30 ////

void __cdecl FUN_00853b30(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x31);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x31);
  }
  return;
}


//// FUNCTION FUN_00853b50 @ 00853b50 ////

void __fastcall FUN_00853b50(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x31) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x31) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x31);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x31);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x31) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x31) == '\0');
    if (*(char *)((int)piVar4 + 0x31) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00853dd0 @ 00853dd0 ////

void __fastcall FUN_00853dd0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x31) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x31) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x31);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x31);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x31);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x31);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00853e70 @ 00853e70 ////

void __thiscall FUN_00853e70(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x31) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*(int *)((int)this + 4) + 4)) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}


//// FUNCTION FUN_00853ed0 @ 00853ed0 ////

void __thiscall FUN_00853ed0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x31) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(*(int *)((int)this + 4) + 4)) {
    *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}


//// FUNCTION FUN_00853f30 @ 00853f30 ////

int * __fastcall FUN_00853f30(int *param_1)

{
  FUN_00853b50(param_1);
  return param_1;
}


//// FUNCTION FUN_00853fb0 @ 00853fb0 ////

void __fastcall FUN_00853fb0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x10));
  }
  return;
}


//// FUNCTION FUN_008540a0 @ 008540a0 ////

int * __fastcall FUN_008540a0(int *param_1)

{
  FUN_00853dd0(param_1);
  return param_1;
}


//// FUNCTION FUN_008540e0 @ 008540e0 ////

int * __fastcall FUN_008540e0(int *param_1)

{
  FUN_00853b50(param_1);
  return param_1;
}


//// FUNCTION FUN_00854120 @ 00854120 ////

void * __thiscall FUN_00854120(void *this,byte param_1)

{
  FUN_00853fb0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00854140 @ 00854140 ////

int * __cdecl FUN_00854140(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar6 = (uint *)(param_3 + 10);
  do {
    pcVar1 = (char *)*param_1;
    uVar2 = param_1[1];
    if (puVar6[-8] <= uVar2) {
      if (0x14 < puVar6[-8]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      puVar6[-8] = uVar4;
      pvVar5 = _malloc(uVar4);
      *param_3 = (int)pvVar5;
    }
    _strncpy((char *)*param_3,pcVar1,uVar2);
    iVar3 = *param_3;
    puVar6[-9] = uVar2;
    *(undefined1 *)(uVar2 + iVar3) = 0;
    uVar2 = param_1[9];
    pcVar1 = (char *)param_1[8];
    if (*puVar6 <= uVar2) {
      if (0x14 < *puVar6) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar6[-2]);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      *puVar6 = uVar4;
      pvVar5 = _malloc(uVar4);
      puVar6[-2] = (uint)pvVar5;
    }
    _strncpy((char *)puVar6[-2],pcVar1,uVar2);
    puVar6[-1] = uVar2;
    *(undefined1 *)(uVar2 + puVar6[-2]) = 0;
    param_1 = param_1 + 0x10;
    param_3 = param_3 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00854230 @ 00854230 ////

void __cdecl FUN_00854230(void *param_1,undefined4 param_2,char param_3)

{
  size_t sVar1;
  char local_40 [64];
  
  if (param_3 != '\0') {
    FUN_004073f0(param_1,PTR_DAT_00e5d1dc,DAT_00e5d1e0);
    sVar1 = _sprintf(local_40,(char *)&param_2_00d1b93c,param_2);
    FUN_004073f0(param_1,local_40,sVar1);
    return;
  }
  FUN_004073f0(param_1,PTR_DAT_00e5d1bc,DAT_00e5d1c0);
  sVar1 = _sprintf(local_40,(char *)&param_2_00d1b93c,param_2);
  FUN_004073f0(param_1,local_40,sVar1);
  return;
}


//// FUNCTION FUN_008542c0 @ 008542c0 ////

void __thiscall FUN_008542c0(void *this,int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x31) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if (*param_2 < (int)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x31) == '\0');
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar1[1] + 0x31) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((int)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar1 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x31) == '\0');
  }
  *param_1 = (int)puVar1;
  param_1[1] = (int)puVar4;
  return;
}


//// FUNCTION FUN_00854350 @ 00854350 ////

int * __fastcall FUN_00854350(int *param_1)

{
  FUN_00853dd0(param_1);
  return param_1;
}


//// FUNCTION FUN_00854370 @ 00854370 ////

void FUN_00854370(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xc) = 1;
  *(undefined1 *)((int)puVar1 + 0x31) = 0;
  return;
}


//// FUNCTION FUN_008543d0 @ 008543d0 ////

undefined4 * __thiscall
FUN_008543d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = *param_4;
  *(undefined4 *)((int)this + 0x10) = (undefined1 *)((int)this + 0x1c);
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x10),(char *)param_4[1],param_4[2]);
  *(undefined1 *)((int)this + 0x30) = param_5;
  *(undefined1 *)((int)this + 0x31) = 0;
  return this;
}


//// FUNCTION FUN_00854440 @ 00854440 ////

void __cdecl FUN_00854440(int *param_1,int *param_2,undefined4 *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_1 != param_2) {
    puVar6 = (uint *)(param_1 + 10);
    do {
      pcVar1 = (char *)*param_3;
      uVar2 = param_3[1];
      if (puVar6[-8] <= uVar2) {
        if (0x14 < puVar6[-8]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*param_1);
        }
        uVar4 = uVar2 + 0x20 & 0xffffffe0;
        puVar6[-8] = uVar4;
        pvVar5 = _malloc(uVar4);
        *param_1 = (int)pvVar5;
      }
      _strncpy((char *)*param_1,pcVar1,uVar2);
      iVar3 = *param_1;
      puVar6[-9] = uVar2;
      *(undefined1 *)(uVar2 + iVar3) = 0;
      uVar2 = param_3[9];
      pcVar1 = (char *)param_3[8];
      if (*puVar6 <= uVar2) {
        if (0x14 < *puVar6) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar6[-2]);
        }
        uVar4 = uVar2 + 0x20 & 0xffffffe0;
        *puVar6 = uVar4;
        pvVar5 = _malloc(uVar4);
        puVar6[-2] = (uint)pvVar5;
      }
      _strncpy((char *)puVar6[-2],pcVar1,uVar2);
      puVar6[-1] = uVar2;
      *(undefined1 *)(uVar2 + puVar6[-2]) = 0;
      param_1 = param_1 + 0x10;
      puVar6 = puVar6 + 0x10;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00854540 @ 00854540 ////

void __cdecl FUN_00854540(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ce7fe3;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00854230(&local_2c,param_1,param_2);
  iVar1 = FUN_00852e10((byte *)&local_2c);
  if (iVar1 == 0) {
    puVar2 = operator_new(0xa4);
    local_4._0_1_ = 1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00853820(puVar2);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_008535a0(puVar2,&local_2c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00854600 @ 00854600 ////

void __cdecl FUN_00854600(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce7ff8;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00854230(&local_2c,param_1,param_2);
  iVar1 = FUN_00852e10((byte *)&local_2c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x38) + 0x24))();
    if (DAT_0104efa0 != (code *)0x0) {
      (*DAT_0104efa0)(*(undefined4 *)(iVar1 + 0x70));
    }
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008546b0 @ 008546b0 ////

undefined4 __cdecl FUN_008546b0(int param_1,char *param_2,undefined4 *param_3,void *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar3 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = __strnicmp(param_2,(char *)*param_3,param_3[1]);
  if (uVar4 != 0) {
    ExceptionList = local_c;
    return uVar4 & 0xffffff00;
  }
  pcVar1 = param_2 + puVar3[1];
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar5 = pcVar1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_004015d0(&local_2c,pcVar1,(int)pcVar5 - (int)(pcVar1 + 1));
  local_4 = 0;
  param_3 = (undefined4 *)FUN_00567d80(&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_008542c0(param_4,(int *)&puStack_34,(int *)&param_3);
  param_3 = puStack_34;
  while (param_3 != puStack_30) {
    uVar4 = FUN_009623a0(param_3 + 4);
    if (uVar4 != 0) {
      if (param_1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = param_1 + 0x38;
      }
      FUN_00541740(uVar6,uVar4);
    }
    FUN_00853dd0((int *)&param_3);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}


//// FUNCTION FUN_008547e0 @ 008547e0 ////

void __fastcall FUN_008547e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00854370();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00854820 @ 00854820 ////

void * FUN_00854820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_008543d0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00854860 @ 00854860 ////

void __cdecl FUN_00854860(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_2 != 0) {
    puVar6 = (uint *)(param_1 + 10);
    do {
      if (param_1 != (int *)0x0) {
        *param_1 = (int)(puVar6 + -7);
        *(undefined1 *)(puVar6 + -7) = 0;
        puVar6[-9] = 0;
        puVar6[-8] = 0x14;
        uVar1 = param_3[1];
        pcVar2 = (char *)*param_3;
        if (0x13 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          puVar6[-8] = uVar4;
          pvVar5 = _malloc(uVar4);
          *param_1 = (int)pvVar5;
        }
        _strncpy((char *)*param_1,pcVar2,uVar1);
        iVar3 = *param_1;
        puVar6[-9] = uVar1;
        *(undefined1 *)(uVar1 + iVar3) = 0;
        puVar6[-2] = (uint)(puVar6 + 1);
        *(undefined1 *)(puVar6 + 1) = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x14;
        uVar1 = param_3[9];
        pcVar2 = (char *)param_3[8];
        if (0x13 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          *puVar6 = uVar4;
          pvVar5 = _malloc(uVar4);
          puVar6[-2] = (uint)pvVar5;
        }
        _strncpy((char *)puVar6[-2],pcVar2,uVar1);
        puVar6[-1] = uVar1;
        *(undefined1 *)(uVar1 + puVar6[-2]) = 0;
      }
      param_1 = param_1 + 0x10;
      puVar6 = puVar6 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_00854970 @ 00854970 ////

void FUN_00854970(void)

{
  FUN_00854600(0x15,'\0');
  return;
}


//// FUNCTION FUN_00854980 @ 00854980 ////

void FUN_00854980(void)

{
  FUN_00854600(0x16,'\0');
  return;
}


//// FUNCTION FUN_00854990 @ 00854990 ////

void FUN_00854990(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    FUN_00854540(iVar1,'\0');
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  FUN_00854540(0x15,'\0');
  FUN_00854540(0x16,'\0');
  iVar1 = 1;
  do {
    FUN_00854540(iVar1,'\x01');
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}


//// FUNCTION FUN_008549e0 @ 008549e0 ////

void __cdecl FUN_008549e0(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(char **)(param_1 + 0x70);
  uVar2 = FUN_008546b0(param_1,pcVar1,&PTR_DAT_00e5d1bc,&DAT_0104efa8);
  if ((char)uVar2 == '\0') {
    FUN_008546b0(param_1,pcVar1,&PTR_DAT_00e5d1dc,&DAT_0104efb4);
  }
  return;
}


//// FUNCTION FUN_00854a20 @ 00854a20 ////

int __fastcall FUN_00854a20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00854370();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00854a50 @ 00854a50 ////

void FUN_00854a50(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00854a50(*(void **)((int)param_1 + 8));
    FUN_00853fb0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00854ac0 @ 00854ac0 ////

void __fastcall FUN_00854ac0(int param_1)

{
  FUN_00854a50(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00854af0 @ 00854af0 ////

int * FUN_00854af0(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_00854860(param_1,param_2,param_3);
  return param_1 + param_2 * 0x10;
}


//// FUNCTION FUN_00854b20 @ 00854b20 ////

void __thiscall
FUN_00854b20(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8038;
  local_c = ExceptionList;
  if (0x71c71c5 < *(uint *)((int)this + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_00405d50(local_50,(undefined4 *)"map/set<T> too long",0x13);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddceb4);
  }
  ExceptionList = &local_c;
  piVar3 = FUN_00854820(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
                        param_4,0);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  if (param_3 == *(undefined4 **)((int)this + 4)) {
    (*(undefined4 **)((int)this + 4))[1] = piVar3;
    **(undefined4 **)((int)this + 4) = piVar3;
    *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
  }
  else if (param_2 == '\0') {
    param_3[2] = piVar3;
    if (param_3 == *(undefined4 **)(*(int *)((int)this + 4) + 8)) {
      *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
    }
  }
  else {
    *param_3 = piVar3;
    if (param_3 == (undefined4 *)**(int **)((int)this + 4)) {
      **(int **)((int)this + 4) = (int)piVar3;
    }
  }
  cVar1 = *(char *)(piVar3[1] + 0x30);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x30) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0xc] == '\0') {
LAB_00854c1b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00853e70(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_00853ed0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_00854c1b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00853ed0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_00853e70(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00854cd0 @ 00854cd0 ////

void FUN_00854cd0(void)

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
  puStack_8 = &LAB_00ce8058;
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


//// FUNCTION FUN_00854d40 @ 00854d40 ////

void __thiscall FUN_00854d40(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8078;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x31) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &pvStack_c;
    FUN_00405d50(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16dc0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddd664);
  }
  ExceptionList = &pvStack_c;
  FUN_00853dd0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x31) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x31) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x31) == '\0') {
          piVar6[1] = (int)piVar4;
        }
        *piVar4 = (int)piVar6;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar5 = (int *)_Memory[1];
        if ((int *)*piVar5 == _Memory) {
          *piVar5 = (int)param_2;
        }
        else {
          piVar5[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[0xc];
      *(char *)(param_2 + 0xc) = (char)_Memory[0xc];
      *(char *)(_Memory + 0xc) = (char)iVar1;
      goto LAB_00854eb1;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x31) == '\0') {
    piVar6[1] = (int)piVar4;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
  }
  else if ((int *)*piVar4 == _Memory) {
    *piVar4 = (int)piVar6;
  }
  else {
    piVar4[2] = (int)piVar6;
  }
  piVar5 = *(int **)((int)this + 4);
  if ((int *)*piVar5 == _Memory) {
    piVar2 = piVar4;
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      piVar2 = (int *)FUN_00853ab0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00853b30((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00854eb1:
  if ((char)_Memory[0xc] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0xc] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00853e70(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00853ed0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00853e70(this,(int)piVar5);
              break;
            }
LAB_00854f74:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00853ed0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00854f74;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00853e70(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00853ed0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xc) = 1;
  }
  if ((uint)_Memory[6] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[4]);
}


//// FUNCTION FUN_00855020 @ 00855020 ////

void __thiscall FUN_00855020(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool local_4;
  
  puVar2 = *(undefined4 **)((int)this + 4);
  local_4 = true;
  if (*(char *)((int)puVar2[1] + 0x31) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      local_4 = *param_2 < (int)puVar2[3];
      if (local_4) {
        puVar1 = (undefined4 *)*puVar2;
      }
      else {
        puVar1 = (undefined4 *)puVar2[2];
      }
    } while (*(char *)((int)puVar1 + 0x31) == '\0');
  }
  puVar2 = (undefined4 *)FUN_00854b20(this,&param_2,local_4,puVar2,param_2);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_008550e0 @ 008550e0 ////

void __thiscall FUN_008550e0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = param_3;
  piVar6 = *(int **)((int)this + 4);
  piVar2 = param_2;
  if ((param_2 == (int *)*piVar6) && (param_3 == piVar6)) {
    FUN_00854a50((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x31) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x31) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x31);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x31);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x31);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x31);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00854d40(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_008551a0 @ 008551a0 ////

void __thiscall FUN_008551a0(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  void *local_5c [2];
  uint local_54;
  void *local_3c;
  uint local_34;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce8098;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_007c2bd0(local_5c,param_3);
  iVar4 = *(int *)((int)this + 4);
  iVar7 = 0;
  local_8 = 0;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - iVar4 >> 6;
  }
  uVar8 = CONCAT44(iVar4,iVar2);
  if (param_2 != 0) {
    if (iVar4 != 0) {
      iVar7 = *(int *)((int)this + 8) - iVar4 >> 6;
    }
    if (0x3ffffffU - iVar7 < param_2) {
      uVar8 = FUN_007c3970();
    }
    iVar4 = (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    if (iVar4 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar4 >> 6;
    }
    if (uVar3 < iVar7 + param_2) {
      if (0x3ffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (iVar4 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - iVar4 >> 6;
      }
      if (uVar3 < iVar7 + param_2) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)((int)this + 8) - iVar4 >> 6;
        }
        uVar3 = iVar4 + param_2;
      }
      piVar5 = operator_new(uVar3 * 0x40);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar5;
      piVar6 = FUN_007c3460(*(undefined4 **)((int)this + 4),param_1,piVar5);
      FUN_00854860(piVar6,param_2,local_5c);
      FUN_007c3460(param_1,*(undefined4 **)((int)this + 8),piVar6 + param_2 * 0x10);
      puVar1 = *(undefined4 **)((int)this + 4);
      if (puVar1 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)puVar1 >> 6;
      }
      if (puVar1 != (undefined4 *)0x0) {
        FUN_007c3940(puVar1,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar5 + uVar3 * 0x10;
      *(int **)((int)this + 8) = piVar5 + (param_2 + iVar4) * 0x10;
      *(int **)((int)this + 4) = piVar5;
    }
    else {
      local_1c = *(int **)((int)this + 8);
      if ((uint)((int)local_1c - (int)param_1 >> 6) < param_2) {
        FUN_007c3460(param_1,local_1c,param_1 + param_2 * 0x10);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00854af0(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1 >> 6),local_5c);
        iVar4 = *(int *)((int)this + 8) + param_2 * 0x40;
        *(int *)((int)this + 8) = iVar4;
        FUN_00854440(param_1,(int *)(iVar4 + param_2 * -0x40),local_5c);
      }
      else {
        piVar6 = local_1c + param_2 * -0x10;
        piVar5 = FUN_007c3460(piVar6,local_1c,local_1c);
        *(int **)((int)this + 8) = piVar5;
        FUN_007c3260((int)param_1,(int)piVar6,local_1c);
        FUN_00854440(param_1,param_1 + param_2 * 0x10,local_5c);
      }
    }
  }
  if (0x14 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c[0]);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00855450 @ 00855450 ////

void * __thiscall FUN_00855450(void *this,void *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (this == param_1) {
    return this;
  }
  puVar4 = *(undefined4 **)((int)param_1 + 4);
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = (int)*(undefined4 **)((int)param_1 + 8) - (int)puVar4 >> 6;
    if (uVar1 != 0) {
      piVar2 = *(int **)((int)this + 4);
      if (piVar2 == (int *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)((int)this + 8) - (int)piVar2 >> 6;
      }
      if (uVar1 <= uVar6) {
        piVar2 = FUN_00854140(puVar4,*(undefined4 **)((int)param_1 + 8),piVar2);
        FUN_007c3940(piVar2,*(undefined4 **)((int)this + 8));
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 6) * 0x40 +
             *(int *)((int)this + 4);
        return this;
      }
      if (piVar2 == (int *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)((int)this + 0xc) - (int)piVar2 >> 6;
      }
      if (uVar6 < uVar1) {
        if (piVar2 != (int *)0x0) {
          FUN_007c3940(piVar2,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        if (*(int *)((int)param_1 + 4) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 6;
        }
        uVar5 = FUN_007c3db0(this,uVar1);
        if ((char)uVar5 == '\0') {
          return this;
        }
        uVar5 = FUN_007c3820(*(undefined4 **)((int)param_1 + 4),*(undefined4 **)((int)param_1 + 8),
                             *(int **)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar5;
        return this;
      }
      if (piVar2 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - (int)piVar2 >> 6;
      }
      puVar4 = *(undefined4 **)((int)param_1 + 4) + iVar3 * 0x10;
      FUN_00854140(*(undefined4 **)((int)param_1 + 4),puVar4,piVar2);
      piVar2 = FUN_007c3460(puVar4,*(undefined4 **)((int)param_1 + 8),*(int **)((int)this + 8));
      *(int **)((int)this + 8) = piVar2;
      return this;
    }
  }
  FUN_007c3e00((int)this);
  return this;
}


//// FUNCTION FUN_008555b0 @ 008555b0 ////

void * __cdecl FUN_008555b0(void *param_1,void *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00855450(param_3,param_1);
    param_1 = (void *)((int)param_1 + 0x10);
    param_3 = (void *)((int)param_3 + 0x10);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_008555f0 @ 008555f0 ////

void * __cdecl FUN_008555f0(void *param_1,void *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = (void *)((int)param_2 + -0x10);
    param_3 = (void *)((int)param_3 + -0x10);
    FUN_00855450(param_3,param_2);
  } while (param_2 != param_1);
  return param_3;
}


//// FUNCTION FUN_00855630 @ 00855630 ////

void __cdecl FUN_00855630(void *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce80c1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_007c4120(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00855680 @ 00855680 ////

void * __thiscall FUN_00855680(void *this,byte param_1)

{
  FUN_007c3e00((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00855780 @ 00855780 ////

void __cdecl FUN_00855780(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x10)) {
    FUN_00855450(param_1,param_3);
  }
  return;
}


//// FUNCTION FUN_00855800 @ 00855800 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl FUN_00855800(uint param_1,char param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce80de;
  local_c = ExceptionList;
  if ((_DAT_0104eff0 & 1) == 0) {
    _DAT_0104eff0 = _DAT_0104eff0 | 1;
    _DAT_0104efe4 = 0;
    _DAT_0104efe8 = 0;
    _DAT_0104efec = 0;
    ExceptionList = &local_c;
    _atexit(FUN_00d13510);
  }
  puVar2 = &DAT_0104efe0;
  puVar3 = &DAT_0104efd0;
  if (param_2 == '\0') {
    puVar3 = &DAT_0104efc0;
  }
  if (((-1 < (int)param_1) && (iVar1 = *(int *)(puVar3 + 4), iVar1 != 0)) &&
     (param_1 < (uint)(*(int *)(puVar3 + 8) - iVar1 >> 4))) {
    puVar2 = (undefined *)(param_1 * 0x10 + iVar1);
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_008558a0 @ 008558a0 ////

void FUN_008558a0(void)

{
  FUN_00855800(0x15,'\0');
  return;
}


//// FUNCTION FUN_008558b0 @ 008558b0 ////

void FUN_008558b0(void)

{
  FUN_00855800(0x16,'\0');
  return;
}


//// FUNCTION FUN_008558f0 @ 008558f0 ////

void __thiscall FUN_008558f0(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 6) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 6))
     ) {
    piVar2 = *(int **)((int)this + 8);
    FUN_00854860(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 0x10;
    return;
  }
  FUN_008551a0(this,*(int **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00855970 @ 00855970 ////

void * __cdecl FUN_00855970(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ce8101;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_007c4120(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x10);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_00855a00 @ 00855a00 ////

void __fastcall FUN_00855a00(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_008550e0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00855a30 @ 00855a30 ////

int __fastcall FUN_00855a30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00854370();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00855a60 @ 00855a60 ////

void __cdecl FUN_00855a60(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    puVar2 = *(undefined4 **)(param_1 + 4);
    if (puVar2 != (undefined4 *)0x0) break;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1 = param_1 + 0x10;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x10) {
    FUN_007c1f20(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00855af0 @ 00855af0 ////

void __cdecl FUN_00855af0(void *param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ce8121;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_007c4120(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x10);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00855bf0 @ 00855bf0 ////

void FUN_00855bf0(int param_1,int param_2)

{
  FUN_00855a60(param_1,param_2);
  return;
}


//// FUNCTION FUN_00855c10 @ 00855c10 ////

void * FUN_00855c10(void *param_1,int param_2,int param_3)

{
  FUN_00855af0(param_1,param_2,param_3);
  return (void *)(param_2 * 0x10 + (int)param_1);
}


//// FUNCTION FUN_00855c80 @ 00855c80 ////

void __thiscall FUN_00855c80(void *this,undefined4 *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  
  if (param_2 != param_3) {
    pvVar1 = FUN_008555b0(param_3,*(void **)((int)this + 8),param_2);
    FUN_00855a60((int)pvVar1,*(int *)((int)this + 8));
    *(void **)((int)this + 8) = pvVar1;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00855cd0 @ 00855cd0 ////

void __thiscall FUN_00855cd0(void *this,void *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_2c [16];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce8138;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_007c4120(local_2c,param_3);
  iVar3 = *(int *)((int)this + 4);
  iVar6 = 0;
  local_8 = 0;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - iVar3 >> 4;
  }
  uVar7 = CONCAT44(iVar3,iVar1);
  if (param_2 != 0) {
    if (iVar3 != 0) {
      iVar6 = *(int *)((int)this + 8) - iVar3 >> 4;
    }
    if (0xfffffffU - iVar6 < param_2) {
      uVar7 = FUN_00854cd0();
    }
    iVar3 = (int)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)uVar7;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar3 >> 4;
    }
    if (uVar2 < iVar6 + param_2) {
      if (0xfffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - iVar3 >> 4;
      }
      if (uVar2 < iVar6 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)this + 8) - iVar3 >> 4;
        }
        uVar2 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar2 * 0x10);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar4;
      pvVar5 = FUN_00855970(*(int *)((int)this + 4),(int)param_1,pvVar4);
      FUN_00855af0(pvVar5,param_2,(int)local_2c);
      FUN_00855970((int)param_1,*(int *)((int)this + 8),(void *)((int)pvVar5 + param_2 * 0x10));
      iVar3 = *(int *)((int)this + 4);
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - iVar3 >> 4;
      }
      if (iVar3 != 0) {
        FUN_00855a60(iVar3,*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar2 * 0x10 + (int)pvVar4);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar6) * 0x10 + (int)pvVar4);
      *(void **)((int)this + 4) = pvVar4;
    }
    else {
      local_1c = *(void **)((int)this + 8);
      if ((uint)((int)local_1c - (int)param_1 >> 4) < param_2) {
        FUN_00855970((int)param_1,(int)local_1c,(void *)(param_2 * 0x10 + (int)param_1));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00855c10(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1 >> 4),(int)local_2c);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x10;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00855780(param_1,(void *)(iVar3 + param_2 * -0x10),local_2c);
      }
      else {
        pvVar5 = (void *)((int)local_1c + param_2 * -0x10);
        pvVar4 = FUN_00855970((int)pvVar5,(int)local_1c,local_1c);
        *(void **)((int)this + 8) = pvVar4;
        FUN_008555f0(param_1,pvVar5,local_1c);
        FUN_00855780(param_1,(void *)(param_2 * 0x10 + (int)param_1),local_2c);
      }
    }
  }
  FUN_007c3e00((int)local_2c);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00855fe0 @ 00855fe0 ////

void __thiscall FUN_00855fe0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8158;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2 >> 4;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2 >> 4;
    }
    ExceptionList = &local_c;
    FUN_00855cd0(this,*(void **)((int)this + 8),param_1 - iVar2,(int)&stack0x00000008);
  }
  else {
    ExceptionList = &local_c;
    if ((iVar2 != 0) &&
       (ExceptionList = &local_c, param_1 < (uint)((int)*(void **)((int)this + 8) - iVar2 >> 4))) {
      ExceptionList = &local_c;
      FUN_00855c80(this,&param_1,(void *)(param_1 * 0x10 + iVar2),*(void **)((int)this + 8));
    }
  }
  FUN_007c3e00((int)&stack0x00000008);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008560b0 @ 008560b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008560b0(void)

{
  void *this;
  byte bVar1;
  char *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  byte *pbVar9;
  bool bVar10;
  void **ppvVar11;
  uint uVar12;
  uint uVar13;
  int iStack_2f4;
  undefined *puStack_2ec;
  undefined *puStack_2e8;
  char *pcStack_2e0;
  uint uStack_2dc;
  uint uStack_2d8;
  char acStack_2d4 [20];
  char *pcStack_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  char acStack_2b4 [24];
  int iStack_29c;
  char *pcStack_298;
  uint uStack_294;
  uint uStack_290;
  char acStack_28c [20];
  char *pcStack_278;
  undefined4 uStack_274;
  uint uStack_270;
  char acStack_26c [20];
  byte *local_258;
  undefined4 local_254;
  uint local_250;
  byte local_24c [20];
  char *local_238;
  undefined4 local_234;
  uint local_230;
  char local_22c [20];
  void *local_218 [2];
  uint uStack_210;
  undefined4 auStack_1f8 [2];
  void *apvStack_1f0 [2];
  uint uStack_1e8;
  void *apvStack_1d0 [2];
  uint uStack_1c8;
  void *apvStack_1b0 [2];
  uint uStack_1a8;
  void *apvStack_190 [2];
  uint uStack_188;
  void *apvStack_170 [2];
  uint uStack_168;
  void *apvStack_150 [2];
  uint uStack_148;
  void *local_130 [2];
  uint local_128;
  void *local_110 [2];
  uint uStack_108;
  undefined4 local_f0 [55];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ce81e9;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00854a50(*(void **)(DAT_0104efac + 4));
  *(int *)(DAT_0104efac + 4) = DAT_0104efac;
  _DAT_0104efb0 = 0;
  *(int *)DAT_0104efac = DAT_0104efac;
  *(int *)(DAT_0104efac + 8) = DAT_0104efac;
  FUN_00854a50(*(void **)(DAT_0104efb8 + 4));
  *(int *)(DAT_0104efb8 + 4) = DAT_0104efb8;
  _DAT_0104efbc = 0;
  *(int *)DAT_0104efb8 = DAT_0104efb8;
  *(int *)(DAT_0104efb8 + 8) = DAT_0104efb8;
  if (DAT_0104efc4 != (void *)0x0) {
    FUN_00855a60((int)DAT_0104efc4,DAT_0104efc8);
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104efc4);
  }
  DAT_0104efc4 = (void *)0x0;
  DAT_0104efc8 = 0;
  _DAT_0104efcc = 0;
  if (DAT_0104efd4 != (void *)0x0) {
    FUN_00855a60((int)DAT_0104efd4,DAT_0104efd8);
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104efd4);
  }
  local_238 = local_22c;
  DAT_0104efd4 = (void *)0x0;
  DAT_0104efd8 = 0;
  _DAT_0104efdc = 0;
  local_22c[0] = '\0';
  local_234 = 0;
  local_230 = 0x14;
  _strncpy(local_238,"ranking",7);
  local_234 = 7;
  local_238[7] = '\0';
  local_c = 0;
  FUN_0055c540(local_f0,&local_238);
  local_c = CONCAT31(local_c._1_3_,2);
  if (0x14 < local_230) {
                    /* WARNING: Subroutine does not return */
    _free(local_238);
  }
  cVar3 = FUN_00558bb0(local_f0,0);
  do {
    if (cVar3 == '\0') {
      local_c = 0xffffffff;
      FUN_00558920(local_f0);
      ExceptionList = pvStack_14;
      return;
    }
    FUN_005562f0(local_f0,local_218,0);
    local_258 = local_24c;
    local_c._0_1_ = 3;
    local_24c[0] = 0;
    local_254 = 0;
    local_250 = 0x14;
    _strncpy((char *)local_258,"STUNT",5);
    uVar13 = 5;
    uVar12 = 0;
    ppvVar11 = local_130;
    local_254 = 5;
    local_258[5] = 0;
    puVar4 = FUN_00430770(local_218,ppvVar11,uVar12,uVar13);
    pbVar5 = (byte *)*puVar4;
    pbVar9 = local_258;
    do {
      bVar1 = *pbVar5;
      bVar10 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_0085630b:
        iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00856310;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar10 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_0085630b;
      pbVar5 = pbVar5 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_00856310:
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130[0]);
    }
    if (0x14 < local_250) {
                    /* WARNING: Subroutine does not return */
      _free(local_258);
    }
    if (iVar6 == 0) {
      puVar4 = FUN_00430770(local_218,local_110,5,0xffffffff);
      local_c._0_1_ = 4;
      iStack_2f4 = FUN_00567d80(puVar4);
      if (0x14 < uStack_108) {
                    /* WARNING: Subroutine does not return */
        _free(local_110[0]);
      }
      puStack_2ec = &DAT_0104efb4;
      puStack_2e8 = &DAT_0104efd0;
    }
    else {
      iStack_2f4 = FUN_00567d80(local_218);
      puStack_2ec = &DAT_0104efa8;
      puStack_2e8 = &DAT_0104efc0;
    }
    pcStack_278 = acStack_26c;
    acStack_26c[0] = '\0';
    uStack_274 = 0;
    uStack_270 = 0x14;
    _strncpy(pcStack_278,"unlocks",7);
    uStack_274 = 7;
    pcStack_278[7] = '\0';
    local_c._0_1_ = 5;
    bVar10 = FUN_00558a90(local_f0,&pcStack_278,(undefined4 *)0x1);
    local_c._0_1_ = 3;
    if (0x14 < uStack_270) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_278);
    }
    if ((bVar10) && (uVar7 = FUN_00558120(local_f0,0), (char)uVar7 != '\0')) {
      do {
        puVar4 = FUN_00558de0(local_f0,apvStack_170);
        local_c._0_1_ = 6;
        iVar6 = FUN_009623a0(puVar4);
        local_c._0_1_ = 3;
        if (0x14 < uStack_168) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_170[0]);
        }
        if (iVar6 != 0) {
          puVar4 = FUN_00558de0(local_f0,apvStack_150);
          iStack_29c = iStack_2f4;
          pcStack_298 = acStack_28c;
          acStack_28c[0] = '\0';
          uStack_294 = 0;
          uStack_290 = 0x14;
          uVar12 = puVar4[1];
          pcVar2 = (char *)*puVar4;
          if (0x13 < uVar12) {
            uStack_290 = uVar12 + 0x20 & 0xffffffe0;
            pcStack_298 = _malloc(uStack_290);
          }
          _strncpy(pcStack_298,pcVar2,uVar12);
          pcStack_298[uVar12] = '\0';
          local_c._0_1_ = 8;
          uStack_294 = uVar12;
          FUN_00855020(puStack_2ec,auStack_1f8,&iStack_29c);
          if (0x14 < uStack_290) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_298);
          }
          if (0x14 < uStack_148) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_150[0]);
          }
        }
        pcStack_2e0 = acStack_2d4;
        pcStack_2c0 = acStack_2b4;
        acStack_2d4[0] = '\0';
        uStack_2dc = 0;
        uStack_2d8 = 0x14;
        acStack_2b4[0] = '\0';
        uStack_2bc = 0;
        uStack_2b8 = 0x14;
        local_c._0_1_ = 9;
        puVar4 = FUN_00558590(local_f0,apvStack_1f0,4);
        local_c = CONCAT31(local_c._1_3_,10);
        piVar8 = FUN_0056b1a0((int *)apvStack_190,puVar4,0);
        uVar12 = piVar8[1];
        pcVar2 = (char *)*piVar8;
        if (uStack_2d8 <= uVar12) {
          if (0x14 < uStack_2d8) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_2e0);
          }
          uStack_2d8 = uVar12 + 0x20 & 0xffffffe0;
          pcStack_2e0 = _malloc(uStack_2d8);
        }
        _strncpy(pcStack_2e0,pcVar2,uVar12);
        pcStack_2e0[uVar12] = '\0';
        uStack_2dc = uVar12;
        if (0x14 < uStack_188) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_190[0]);
        }
        local_c._0_1_ = 9;
        if (0x14 < uStack_1e8) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_1f0[0]);
        }
        puVar4 = FUN_00558590(local_f0,apvStack_1b0,4);
        local_c = CONCAT31(local_c._1_3_,0xb);
        piVar8 = FUN_0056b1a0((int *)apvStack_1d0,puVar4,1);
        uVar12 = piVar8[1];
        pcVar2 = (char *)*piVar8;
        if (uStack_2b8 <= uVar12) {
          if (0x14 < uStack_2b8) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_2c0);
          }
          uStack_2b8 = uVar12 + 0x20 & 0xffffffe0;
          pcStack_2c0 = _malloc(uStack_2b8);
        }
        _strncpy(pcStack_2c0,pcVar2,uVar12);
        pcStack_2c0[uVar12] = '\0';
        uStack_2bc = uVar12;
        if (0x14 < uStack_1c8) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_1d0[0]);
        }
        local_c = CONCAT31(local_c._1_3_,9);
        if (0x14 < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_1b0[0]);
        }
        if (*(int *)(puStack_2e8 + 4) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(int *)(puStack_2e8 + 8) - *(int *)(puStack_2e8 + 4) >> 4;
        }
        if (uVar12 < iStack_2f4 + 1U) {
          FUN_00855fe0(puStack_2e8,iStack_2f4 + 1U);
        }
        iVar6 = *(int *)(iStack_2f4 * 0x10 + 4 + *(int *)(puStack_2e8 + 4));
        this = (void *)(iStack_2f4 * 0x10 + *(int *)(puStack_2e8 + 4));
        if ((iVar6 == 0) ||
           ((uint)(*(int *)((int)this + 0xc) - iVar6 >> 6) <=
            (uint)(*(int *)((int)this + 8) - iVar6 >> 6))) {
          FUN_008551a0(this,*(int **)((int)this + 8),1,&pcStack_2e0);
        }
        else {
          piVar8 = *(int **)((int)this + 8);
          FUN_00854860(piVar8,1,&pcStack_2e0);
          *(int **)((int)this + 8) = piVar8 + 0x10;
        }
        local_c._0_1_ = 3;
        if (0x14 < uStack_2b8) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_2c0);
        }
        if (0x14 < uStack_2d8) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_2e0);
        }
        uVar7 = FUN_00558120(local_f0,2);
      } while ((char)uVar7 != '\0');
    }
    FUN_00558bb0(local_f0,5);
    local_c = CONCAT31(local_c._1_3_,2);
    if (0x14 < uStack_210) {
                    /* WARNING: Subroutine does not return */
      _free(local_218[0]);
    }
    cVar3 = FUN_00558bb0(local_f0,2);
  } while( true );
}


//// FUNCTION FUN_008568a0 @ 008568a0 ////

void FUN_008568a0(void)

{
  DAT_0104efa4 = 1;
  FUN_00852060(FUN_008549e0);
  if (DAT_0104eff4 == '\0') {
    FUN_008560b0();
    DAT_0104eff4 = '\x01';
  }
  FUN_00854990();
  return;
}


//// FUNCTION FUN_008568d0 @ 008568d0 ////

void __fastcall FUN_008568d0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00856900 @ 00856900 ////

int __thiscall FUN_00856900(void *this,int param_1)

{
  return param_1 * 0x34 + 0x8c + (int)this;
}


//// FUNCTION FUN_00856b10 @ 00856b10 ////

void __cdecl FUN_00856b10(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x11);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x11);
  }
  return;
}


//// FUNCTION FUN_00856b30 @ 00856b30 ////

void __cdecl FUN_00856b30(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return;
}


//// FUNCTION FUN_00856b60 @ 00856b60 ////

void __fastcall FUN_00856b60(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00856cc0 @ 00856cc0 ////

void __fastcall FUN_00856cc0(int param_1)

{
  bool bVar1;
  int *piVar2;
  void *pvVar3;
  
  bVar1 = FUN_00861a90();
  if (!bVar1) {
    bVar1 = FUN_00861ac0();
    if (!bVar1) {
      if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
        piVar2 = (int *)FUN_00ace790(*(int **)(param_1 + 0xa0),0,&TM::TMObject::RTTI_Type_Descriptor
                                     ,&TM::CStar::RTTI_Type_Descriptor,0);
        if (piVar2 != (int *)0x0) {
          FUN_00470a70(DAT_0104917c,piVar2,0x8000069b,0,0);
          FUN_00591bf0(piVar2);
          return;
        }
        pvVar3 = (void *)FUN_00ace790(*(int **)(param_1 + 0xa0),0,
                                      &TM::TMObject::RTTI_Type_Descriptor,
                                      &TM::CProject::RTTI_Type_Descriptor,0);
        if (pvVar3 != (void *)0x0) {
          FUN_005b8c90(pvVar3);
          return;
        }
        piVar2 = (int *)FUN_00ace790(*(int **)(param_1 + 0xa0),0,&TM::TMObject::RTTI_Type_Descriptor
                                     ,&TM::CStudio::RTTI_Type_Descriptor,0);
        if (piVar2 != (int *)0x0) {
          CStudio_ComputeStarRating(piVar2);
          return;
        }
      }
      return;
    }
  }
  FUN_00866ab0();
  return;
}


//// FUNCTION FUN_00856d90 @ 00856d90 ////

undefined4 __fastcall FUN_00856d90(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x28) + 8);
}


