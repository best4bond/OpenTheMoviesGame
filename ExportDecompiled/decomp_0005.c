//// FUNCTION FUN_0046ed20 @ 0046ed20 ////

void __thiscall FUN_0046ed20(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    if (0x3fffffff < param_1) {
      FUN_0046e8f0();
    }
    puVar1 = operator_new(param_1 * 4);
    *(undefined4 **)((int)this + 0xc) = puVar1 + param_1;
    *(undefined4 **)((int)this + 4) = puVar1;
    *(undefined4 **)((int)this + 8) = puVar1;
    puVar2 = puVar1;
    for (uVar3 = param_1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)((int)this + 8) = puVar1 + param_1;
  }
  return;
}


//// FUNCTION FUN_0046eda0 @ 0046eda0 ////

void __thiscall FUN_0046eda0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0046deb0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_0046e9b0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0046ee40 @ 0046ee40 ////

void __cdecl FUN_0046ee40(void *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  void *this;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_1c;
  float local_10;
  float local_c;
  
  this = param_1;
  if ((*(int *)((int)param_1 + 4) != 0) &&
     (uVar5 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 3, 5 < uVar5)) {
    iVar8 = 2;
    local_1c = 2;
    uVar7 = 2;
    local_10 = 0.0;
    local_c = 0.0;
    param_1 = (void *)0x4;
    if (2 < uVar5 - 1) {
      iVar9 = 8;
      do {
        iVar2 = *(int *)((int)this + 4);
        iVar1 = iVar8 * 8;
        fVar3 = *(float *)(iVar2 + uVar7 * 8) - *(float *)(iVar9 + iVar2);
        fVar4 = *(float *)(iVar2 + 4 + uVar7 * 8) - *(float *)(iVar9 + 4 + iVar2);
        local_10 = local_10 - fVar3;
        *(undefined4 *)(iVar2 + iVar1) = *(undefined4 *)(iVar2 + uVar7 * 8);
        local_c = local_c - fVar4;
        *(undefined4 *)(iVar2 + 4 + iVar1) = *(undefined4 *)(iVar2 + 4 + uVar7 * 8);
        if (0.001 <= local_10 * local_10 + local_c * local_c) {
          iVar2 = *(int *)((int)this + 4);
          iVar8 = iVar1 + -8;
          pfVar6 = (float *)(iVar1 + -4 + iVar2);
          *(float *)(iVar8 + iVar2) = *(float *)(iVar2 + iVar1) + *(float *)(iVar8 + iVar2);
          *pfVar6 = *(float *)(iVar2 + 4 + iVar1) + *pfVar6;
          pfVar6 = (float *)(*(int *)((int)this + 4) + iVar8);
          *pfVar6 = *(float *)(*(int *)((int)this + 4) + iVar8) * 0.5;
          pfVar6[1] = pfVar6[1] * 0.5;
          iVar8 = local_1c;
        }
        else {
          param_1 = (void *)((int)param_1 + -1);
          if ((int)param_1 < 1) {
            local_1c = iVar8 + 1;
            param_1 = (void *)0x4;
            iVar8 = local_1c;
          }
        }
        iVar9 = iVar9 + 8;
        uVar7 = uVar7 + 1;
        local_10 = fVar3;
        local_c = fVar4;
      } while (uVar7 < uVar5 - 1);
    }
    iVar9 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar9 + iVar8 * 8) = *(undefined4 *)(iVar9 + -8 + uVar5 * 8);
    *(undefined4 *)(iVar9 + 4 + iVar8 * 8) = *(undefined4 *)(iVar9 + -4 + uVar5 * 8);
    FUN_0046ec60(this,iVar8 + 1);
  }
  return;
}


//// FUNCTION FUN_0046f1c0 @ 0046f1c0 ////

undefined4 * __thiscall FUN_0046f1c0(void *this,int param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0046ed20((void *)((int)this + 4),param_1 + 1,&local_4);
  *(undefined4 *)this = 0;
  return this;
}


//// FUNCTION FUN_0046f1f0 @ 0046f1f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046f1f0(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float local_10;
  float local_c;
  
  FUN_0046eda0(param_1,param_3);
  DAT_00f89108 = *(int *)(DAT_00f89108 + 8);
  if (DAT_00f89108 != 0) {
    while (*(int *)(DAT_00f89108 + 8) != 0) {
      iVar1 = *(int *)((int)param_1 + 4);
      local_10 = (float)(*(uint *)(DAT_00f89108 + 4) >> 2 & 0x3ff) * _DAT_01049118 + _DAT_01049120;
      local_c = (float)(*(uint *)(DAT_00f89108 + 4) >> 0xc & 0x3ff) * _DAT_01049118 + _DAT_01049124;
      if ((iVar1 == 0) ||
         ((uint)(*(int *)((int)param_1 + 0xc) - iVar1 >> 3) <=
          (uint)(*(int *)((int)param_1 + 8) - iVar1 >> 3))) {
        FUN_0046e9b0(param_1,*(undefined4 **)((int)param_1 + 8),1,&local_10);
      }
      else {
        puVar2 = *(undefined4 **)((int)param_1 + 8);
        FUN_0046deb0(puVar2,1,&local_10);
        *(undefined4 **)((int)param_1 + 8) = puVar2 + 2;
      }
      *(uint *)(DAT_00f89108 + 4) = *(uint *)(DAT_00f89108 + 4) | 3;
      DAT_00f89108 = *(int *)(DAT_00f89108 + 8);
      if ((DAT_00f89108 == 0) || (((byte)*(undefined4 *)(DAT_00f89108 + 4) & 3) == 3)) break;
    }
  }
  FUN_0046eda0(param_1,param_2);
  FUN_0046ee40(param_1);
  return;
}


//// FUNCTION FUN_0046f310 @ 0046f310 ////

uint __cdecl FUN_0046f310(void *param_1,float *param_2,float *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  float local_38;
  uint local_34;
  float local_30;
  uint local_2c;
  float local_28;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(void **)((int)param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 4));
  }
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  iVar6 = DAT_00f890c0;
  if ((DAT_00f890c0 == 0) ||
     (uVar3 = FUN_004512c0((void *)(DAT_00f890c0 + 0x44c),param_2), (char)uVar3 != '\0')) {
    FUN_0046cad0((int *)&local_28,param_2);
    uVar4 = FUN_0046c5d0((int *)&local_28,0x31);
    iVar6 = DAT_00f890c0;
    if ((char)uVar4 != '\0') goto LAB_0046f4ec;
  }
  if ((iVar6 == 0) || (uVar3 = FUN_004512c0((void *)(iVar6 + 0x44c),param_3), (char)uVar3 != '\0'))
  {
    FUN_0046cad0((int *)&local_28,param_3);
    uVar4 = FUN_0046c5d0((int *)&local_28,0x31);
    if ((char)uVar4 != '\0') {
LAB_0046f4ec:
      FUN_0046cad0((int *)&local_38,param_2);
      FUN_0046cad0((int *)&local_28,param_3);
      local_30 = local_38;
      local_2c = local_34;
      local_38 = local_28;
      local_34 = local_24;
      FUN_0046cb40((int *)&local_30,0x31);
      FUN_0046cb40((int *)&local_38,0x31);
      fVar2 = local_38;
      if ((local_28 != local_38) || (local_38 = 1.4013e-45, local_24 != local_34)) {
        local_38 = 0.0;
      }
      uVar4 = FUN_0046e500((uint)local_30,local_2c,(uint)fVar2,local_34);
      if ((char)uVar4 != '\0') {
        uVar3 = FUN_0046f1f0(param_1,param_2,param_3);
        puVar5 = (undefined4 *)CONCAT31((int3)((uint)uVar3 >> 8),local_38._0_1_);
        if (((local_38._0_1_ == '\0') &&
            (((puVar1 = *(undefined4 **)((int)param_1 + 4), puVar1 == (undefined4 *)0x0 ||
              (puVar5 = (undefined4 *)(*(int *)((int)param_1 + 8) - (int)puVar1 >> 3),
              puVar5 < (undefined4 *)0x5)) &&
             (puVar5 = puVar1, puVar1 != *(undefined4 **)((int)param_1 + 8))))) &&
           (puVar5 = puVar1 + 2, puVar5 != *(undefined4 **)((int)param_1 + 8))) {
          puVar5 = (undefined4 *)FUN_0046e3f0(param_1,&local_38,puVar5);
        }
        return CONCAT31((int3)((uint)puVar5 >> 8),1);
      }
      return uVar4;
    }
  }
  local_20 = *param_3 - *param_2;
  local_18 = 0.0;
  local_1c = param_3[1] - param_2[1];
  fVar7 = FUN_00412e20(&local_20);
  local_38 = (float)fVar7;
  local_10 = param_2[1];
  local_14 = *param_2;
  local_20 = local_20 * 0.35;
  local_c = 0.0;
  local_1c = local_1c * 0.35;
  local_18 = local_18 * 0.35;
  if ((float10)0.35 < fVar7) {
    do {
      FUN_009840b0(&local_28,&local_14);
      if ((DAT_00f890c0 == 0) ||
         (uVar3 = FUN_004512c0((void *)(DAT_00f890c0 + 0x44c),&local_28), (char)uVar3 != '\0')) {
        FUN_0046cad0((int *)&local_30,&local_28);
        uVar4 = FUN_0046c5d0((int *)&local_30,0x31);
        if ((char)uVar4 != '\0') goto LAB_0046f4ec;
      }
      local_14 = local_14 + local_20;
      local_10 = local_10 + local_1c;
      local_c = local_c + local_18;
      local_38 = local_38 - 0.35;
    } while (0.35 < local_38);
  }
  FUN_0046eda0(param_1,param_2);
  uVar3 = FUN_0046eda0(param_1,param_3);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0046f5d0 @ 0046f5d0 ////

void __thiscall FUN_0046f5d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x9c) = param_1;
  return;
}


//// FUNCTION FUN_0046f5e0 @ 0046f5e0 ////

undefined4 __fastcall FUN_0046f5e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}


//// FUNCTION FUN_0046f5f0 @ 0046f5f0 ////

void __fastcall FUN_0046f5f0(int param_1)

{
  FUN_0046f8a0(*(uint *)(param_1 + 0x9c));
  return;
}


//// FUNCTION FUN_0046f600 @ 0046f600 ////

undefined4 __fastcall FUN_0046f600(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}


//// FUNCTION FUN_0046f610 @ 0046f610 ////

void __thiscall FUN_0046f610(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0xa0);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)((int)this + 0xa0) = 0;
  }
  *(int *)((int)this + 0xa0) = param_1;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return;
}


//// FUNCTION FUN_0046f650 @ 0046f650 ////

void __fastcall FUN_0046f650(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca2e84;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1b938;
  puVar2 = (undefined4 *)param_1[0x28];
  local_4 = 4;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x28] = 0;
  }
  if (0x14 < (uint)param_1[0x21]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1f]);
  }
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b] = param_1[0x1a];
  }
  if (param_1[0x1a] != 0) {
    *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1b];
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x14] = &PTR_FUN_00d1a200;
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x16] = param_1[0x15];
  }
  if (param_1[0x15] != 0) {
    *(undefined4 *)(param_1[0x15] + 4) = param_1[0x16];
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x16] = param_1[0x15];
  }
  if (param_1[0x15] != 0) {
    *(undefined4 *)(param_1[0x15] + 4) = param_1[0x16];
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0xe] = &PTR_FUN_00d1a200;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10] = param_1[0xf];
  }
  if (param_1[0xf] != 0) {
    *(undefined4 *)(param_1[0xf] + 4) = param_1[0x10];
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10] = param_1[0xf];
  }
  if (param_1[0xf] != 0) {
    *(undefined4 *)(param_1[0xf] + 4) = param_1[0x10];
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0046f780 @ 0046f780 ////

undefined4 * __thiscall FUN_0046f780(void *this,byte param_1)

{
  FUN_0046f650(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0046f7a0 @ 0046f7a0 ////

undefined4 * __fastcall FUN_0046f7a0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2ec4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d1b938;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_1 + 0xe;
  param_1[0xe] = &PTR_FUN_00d1a200;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = param_1 + 0x14;
  param_1[0x14] = &PTR_FUN_00d1a200;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1f] = param_1 + 0x22;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x14;
  local_4 = 4;
  param_1[0x28] = 0;
  param_1[0x1c] = param_1;
  FUN_00acdb9e(0xe505a4);
  iVar1 = FUN_0097dda0();
  param_1[0x1d] = iVar1;
  if (s___AVCMessage_TM___00e50590[0x12] != '\0') {
    iVar1 = 0x68;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe505a4);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AVCMessage_TM___00e50590[0x12] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0046f8a0 @ 0046f8a0 ////

uint __cdecl FUN_0046f8a0(uint param_1)

{
  return param_1 >> 0x1f;
}


//// FUNCTION FUN_0046f8b0 @ 0046f8b0 ////

int * __thiscall FUN_0046f8b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0046f8e0 @ 0046f8e0 ////

int * __thiscall FUN_0046f8e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0046fb00 @ 0046fb00 ////

void __cdecl FUN_0046fb00(int *param_1)

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


//// FUNCTION FUN_0046fb40 @ 0046fb40 ////

void __thiscall FUN_0046fb40(void *this,int *param_1)

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


//// FUNCTION FUN_0046fbd0 @ 0046fbd0 ////

void __cdecl FUN_0046fbd0(int param_1)

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


//// FUNCTION FUN_0046fc00 @ 0046fc00 ////

void __fastcall FUN_0046fc00(int *param_1)

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


//// FUNCTION FUN_0046fd20 @ 0046fd20 ////

void FUN_0046fd20(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104917c;
  if (DAT_0104917c != (undefined4 *)0x0) {
    iVar1 = DAT_0104917c[0x12];
    DAT_0104917c[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_0104917c = (undefined4 *)0x0;
  }
  return;
}


//// FUNCTION FUN_0046fee0 @ 0046fee0 ////

void __fastcall FUN_0046fee0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0046ff50 @ 0046ff50 ////

void __fastcall FUN_0046ff50(int *param_1)

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


//// FUNCTION FUN_0046ffc0 @ 0046ffc0 ////

void __thiscall FUN_0046ffc0(void *this,int param_1)

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


//// FUNCTION FUN_00470020 @ 00470020 ////

int * __fastcall FUN_00470020(int *param_1)

{
  FUN_0046fc00(param_1);
  return param_1;
}


//// FUNCTION FUN_00470080 @ 00470080 ////

void __fastcall FUN_00470080(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00470100 @ 00470100 ////

undefined4 __thiscall FUN_00470100(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (DAT_01049194 != (undefined4 *)0x0) {
    (**(code **)*DAT_01049194)(1);
  }
  (*(code *)DAT_01049180[1])();
  DAT_01049194 = (undefined4 *)0x0;
  (*(code *)*DAT_01049180)();
  iVar2 = *(int *)((int)this + 0x6c);
  uVar1 = 0;
  bVar3 = param_1 == 0;
  if (iVar2 != (int)this + 0x78) {
    while (!bVar3) {
      if (*(int *)(iVar2 + 8) == param_1) {
        bVar3 = true;
      }
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 == (int)this + 0x78) {
        return uVar1;
      }
    }
    uVar1 = *(undefined4 *)(iVar2 + 8);
  }
  return uVar1;
}


//// FUNCTION FUN_004701b0 @ 004701b0 ////

void * __thiscall FUN_004701b0(void *this,undefined4 param_1)

{
  size_t sVar1;
  char local_40 [64];
  
  sVar1 = _sprintf(local_40,(char *)&param_2_00d1b93c,param_1);
  FUN_004073f0(this,local_40,sVar1);
  return this;
}


//// FUNCTION FUN_004701f0 @ 004701f0 ////

void __thiscall FUN_004701f0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d1b944;
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


//// FUNCTION FUN_00470240 @ 00470240 ////

void __fastcall FUN_00470240(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1b944;
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


//// FUNCTION FUN_004702c0 @ 004702c0 ////

int * __fastcall FUN_004702c0(int *param_1)

{
  FUN_0046ff50(param_1);
  return param_1;
}


//// FUNCTION FUN_004702d0 @ 004702d0 ////

undefined4 * __thiscall FUN_004702d0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00470310 @ 00470310 ////

int * __fastcall FUN_00470310(int *param_1)

{
  FUN_0046fc00(param_1);
  return param_1;
}


//// FUNCTION FUN_00470350 @ 00470350 ////

undefined4 * __thiscall FUN_00470350(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00470390 @ 00470390 ////

void * __thiscall FUN_00470390(void *this,byte param_1)

{
  FUN_00470080((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004703b0 @ 004703b0 ////

void __fastcall FUN_004703b0(undefined4 *param_1)

{
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe] = param_1[0xd];
  }
  if (param_1[0xd] != 0) {
    *(undefined4 *)(param_1[0xd] + 4) = param_1[0xe];
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[7] = &PTR_FUN_00d1a200;
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[9] = param_1[8];
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1[8] + 4) = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[9] = param_1[8];
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1[8] + 4) = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_00d1a200;
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


//// FUNCTION FUN_00470470 @ 00470470 ////

int __thiscall FUN_00470470(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  
  if (DAT_01049194 != (undefined4 *)0x0) {
    (**(code **)*DAT_01049194)(1);
  }
  (*(code *)DAT_01049180[1])();
  DAT_01049194 = (undefined4 *)0x0;
  (*(code *)*DAT_01049180)();
  piVar6 = *(int **)((int)this + 0x6c);
  piVar1 = (int *)((int)this + 0x78);
  if (piVar6 != piVar1) {
    while( true ) {
      iVar2 = piVar6[2];
      iVar5 = FUN_0046f5e0(iVar2);
      if ((iVar5 == 0x209) || (iVar5 = FUN_0046f5e0(iVar2), iVar5 == 0x231)) {
        for (piVar3 = *(int **)((int)this + 0x6c); piVar3 != piVar1; piVar3 = (int *)piVar3[1]) {
          cVar4 = FUN_0046f5f0(piVar3[2]);
          if (cVar4 != '\0') goto LAB_0047050c;
        }
      }
      if (*(int *)(iVar2 + 0x4c) == param_1) break;
LAB_0047050c:
      piVar6 = (int *)piVar6[1];
      if (piVar6 == piVar1) {
        return (int)DAT_01049194;
      }
    }
    (*(code *)DAT_01049180[1])();
    DAT_01049194 = (undefined4 *)iVar2;
    (*(code *)*DAT_01049180)();
    if ((int *)piVar6[1] != (int *)0x0) {
      *(int *)piVar6[1] = *piVar6;
    }
    if (*piVar6 != 0) {
      *(int *)(*piVar6 + 4) = piVar6[1];
    }
    *piVar6 = 0;
    piVar6[1] = 0;
  }
  return (int)DAT_01049194;
}


//// FUNCTION FUN_00470580 @ 00470580 ////

undefined4 * __fastcall FUN_00470580(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca2eee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d1a200;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_1 + 7;
  param_1[7] = &PTR_FUN_00d1a200;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  local_4 = 2;
  param_1[0xf] = param_1;
  FUN_00acdb9e(0xe505e8);
  iVar1 = FUN_0097dda0();
  param_1[0x10] = iVar1;
  if (s___AV__CP_VCMessage_TM___TM___00e505c8[0x1d] != '\0') {
    iVar1 = 0x34;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe505e8);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__CP_VCMessage_TM___TM___00e505c8[0x1d] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00470650 @ 00470650 ////

int * __fastcall FUN_00470650(int *param_1)

{
  FUN_0046ff50(param_1);
  return param_1;
}


//// FUNCTION FUN_00470660 @ 00470660 ////

undefined4 * __thiscall FUN_00470660(void *this,undefined4 *param_1)

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
LAB_004706a4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004706a9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_004706a4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_004706a9:
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


//// FUNCTION FUN_004706e0 @ 004706e0 ////

void FUN_004706e0(void)

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


//// FUNCTION FUN_00470740 @ 00470740 ////

undefined4 * __thiscall
FUN_00470740(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_004707b0 @ 004707b0 ////

undefined4 * __thiscall FUN_004707b0(void *this,byte param_1)

{
  FUN_004703b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004707d0 @ 004707d0 ////

void __thiscall FUN_004707d0(void *this,int param_1)

{
  undefined4 *_Memory;
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)this + 0xa0);
  if (piVar3 != (int *)((int)this + 0xac)) {
    do {
      _Memory = (undefined4 *)piVar3[2];
      iVar1 = FUN_0046f5e0(param_1);
      if (((_Memory[6] == iVar1) &&
          ((_Memory[0xc] == 0 || (_Memory[0xc] == *(int *)(param_1 + 100))))) &&
         ((_Memory[5] == 0 || (_Memory[5] == *(int *)(param_1 + 0x4c))))) {
        if ((int *)piVar3[1] != (int *)0x0) {
          *(int *)piVar3[1] = *piVar3;
        }
        if (*piVar3 != 0) {
          *(int *)(*piVar3 + 4) = piVar3[1];
        }
        *piVar3 = 0;
        piVar3[1] = 0;
        FUN_004703b0(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)((int)this + 0xac));
  }
  *(int *)(param_1 + 0x78) = *(int *)(DAT_0104cdf4 + 0x3c) + 1;
  piVar3 = (int *)(param_1 + 0x68);
  piVar2 = (int *)((int)this + 0x78);
  *(int **)(param_1 + 0x6c) = piVar2;
  *piVar3 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar3;
  *piVar2 = (int)piVar3;
  return;
}


//// FUNCTION FUN_00470890 @ 00470890 ////

int * __cdecl FUN_00470890(int *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *local_64;
  char *local_60;
  uint local_5c;
  uint local_58;
  char local_54 [20];
  char local_40 [64];
  
  puVar3 = DAT_0104919c;
  local_64 = (undefined4 *)*DAT_0104919c;
  while (local_64 != puVar3) {
    if (local_64[0xb] == param_2) {
      *param_1 = (int)(param_1 + 3);
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      uVar1 = local_64[4];
      pcVar2 = (char *)local_64[3];
      if (0x13 < uVar1) {
        uVar5 = uVar1 + 0x20 & 0xffffffe0;
        param_1[2] = uVar5;
        pvVar6 = _malloc(uVar5);
        *param_1 = (int)pvVar6;
      }
      _strncpy((char *)*param_1,pcVar2,uVar1);
      param_1[1] = uVar1;
      *(undefined1 *)(uVar1 + *param_1) = 0;
      return param_1;
    }
    FUN_0046ff50((int *)&local_64);
  }
  local_60 = local_54;
  local_54[0] = '\0';
  local_5c = 0;
  local_58 = 0x14;
  sVar4 = _sprintf(local_40,(char *)&param_2_00d1b93c,param_2);
  FUN_004073f0(&local_60,local_40,sVar4);
  uVar1 = local_5c;
  pcVar2 = local_60;
  param_1[1] = 0;
  *param_1 = (int)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0x14;
  if (0x13 < local_5c) {
    uVar5 = local_5c + 0x20 & 0xffffffe0;
    param_1[2] = uVar5;
    pvVar6 = _malloc(uVar5);
    *param_1 = (int)pvVar6;
  }
  _strncpy((char *)*param_1,pcVar2,uVar1);
  param_1[1] = uVar1;
  *(undefined1 *)(uVar1 + *param_1) = 0;
  if (local_58 < 0x15) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_60);
}


//// FUNCTION FUN_004709f0 @ 004709f0 ////

void __fastcall FUN_004709f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004706e0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00470a20 @ 00470a20 ////

void * FUN_00470a20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_00470740(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00470a70 @ 00470a70 ////

void __thiscall
FUN_00470a70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *this_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2f0b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  this_00 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this_00 = FUN_0046f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(this_00,param_2);
  (**(code **)(this_00[0xe] + 4))();
  this_00[0x13] = param_1;
  (**(code **)this_00[0xe])();
  (**(code **)(this_00[0x14] + 4))();
  this_00[0x19] = param_3;
  (**(code **)this_00[0x14])();
  FUN_0046f610(this_00,param_4);
  FUN_004707d0(this,(int)this_00);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00470b20 @ 00470b20 ////

void __thiscall FUN_00470b20(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00470660(this,param_2);
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


//// FUNCTION FUN_00470b80 @ 00470b80 ////

int __fastcall FUN_00470b80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004706e0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00470bb0 @ 00470bb0 ////

void FUN_00470bb0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00470bb0(*(void **)((int)param_1 + 8));
    FUN_00470080((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00470bf0 @ 00470bf0 ////

undefined4 __cdecl FUN_00470bf0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 **ppuVar2;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_8 = FUN_00470660(&DAT_01049198,param_1);
  local_4 = DAT_0104919c;
  if (local_8 != DAT_0104919c) {
    uVar1 = FUN_00441060(param_1,local_8 + 3);
    if ((char)uVar1 == '\0') {
      ppuVar2 = &local_8;
      goto LAB_00470c33;
    }
  }
  ppuVar2 = &local_4;
LAB_00470c33:
  if (*ppuVar2 != local_4) {
    return (*ppuVar2)[0xb];
  }
  return 0;
}


//// FUNCTION FUN_00470c50 @ 00470c50 ////

void __fastcall FUN_00470c50(int param_1)

{
  FUN_00470bb0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00470c80 @ 00470c80 ////

void __fastcall FUN_00470c80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1b954;
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


//// FUNCTION FUN_00470cd0 @ 00470cd0 ////

void __fastcall FUN_00470cd0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1b960;
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


//// FUNCTION FUN_00470d20 @ 00470d20 ////

undefined4 * __thiscall FUN_00470d20(void *this,byte param_1)

{
  FUN_00470c80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00470d40 @ 00470d40 ////

undefined4 * __thiscall FUN_00470d40(void *this,byte param_1)

{
  FUN_00470cd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00470d60 @ 00470d60 ////

void __thiscall
FUN_00470d60(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca2f28;
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
  piVar3 = FUN_00470a20(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_00470e5b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0046ffc0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_0046fb40(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_00470e5b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0046fb40(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_0046ffc0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00470f10 @ 00470f10 ////

void __thiscall FUN_00470f10(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca2f48;
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
  FUN_0046ff50((int *)&param_2);
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
      goto LAB_00471081;
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
      piVar2 = (int *)FUN_0046fb00(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_0046fbd0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00471081:
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
            FUN_0046ffc0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_0046fb40(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_0046ffc0(this,(int)piVar5);
              break;
            }
LAB_00471144:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_0046fb40(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00471144;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_0046ffc0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_0046fb40(this,piVar5);
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


//// FUNCTION FUN_004711e0 @ 004711e0 ////

void __fastcall FUN_004711e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca2f81;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1b96c;
  local_4 = 2;
  if (DAT_01049194 != (undefined4 *)0x0) {
    (**(code **)*DAT_01049194)(1);
  }
  (*(code *)DAT_01049180[1])();
  DAT_01049194 = (undefined4 *)0x0;
  (*(code *)*DAT_01049180)();
  if ((undefined4 *)param_1[0x1b] != param_1 + 0x1e) {
    do {
      puVar1 = *(undefined4 **)(param_1[0x1b] + 8);
      FUN_0046f5f0((int)puVar1);
      piVar2 = (int *)param_1[0x1b];
      if ((int *)piVar2[1] != (int *)0x0) {
        *(int *)piVar2[1] = *piVar2;
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    } while ((undefined4 *)param_1[0x1b] != param_1 + 0x1e);
  }
  if ((undefined4 *)param_1[0x28] != param_1 + 0x2b) {
    do {
      piVar2 = (int *)param_1[0x28];
      puVar1 = (undefined4 *)piVar2[2];
      if ((int *)piVar2[1] != (int *)0x0) {
        *(int *)piVar2[1] = *piVar2;
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      if (puVar1 != (undefined4 *)0x0) {
        FUN_004703b0(puVar1);
                    /* WARNING: Subroutine does not return */
        _free(puVar1);
      }
    } while ((undefined4 *)param_1[0x28] != param_1 + 0x2b);
  }
  FUN_00470cd0(param_1 + 0x26);
  FUN_00470c80(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00471330 @ 00471330 ////

void __thiscall FUN_00471330(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_00471394:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00471399;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00471394;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00471399:
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
      puVar5 = (undefined4 *)FUN_00470d60(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_0046fc00((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00470d60(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00471450 @ 00471450 ////

void __thiscall FUN_00471450(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00470bb0((void *)piVar6[1]);
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
    FUN_00470f10(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00471510 @ 00471510 ////

undefined4 * __thiscall FUN_00471510(void *this,byte param_1)

{
  FUN_004711e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00471530 @ 00471530 ////

undefined4 * __thiscall FUN_00471530(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00470d60(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_00470d60(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_00470d60(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_0046fc00((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_00470d60(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00470d60(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_0046ff50((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_004716b2;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_00470d60(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00470d60(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_004716b2:
  puVar4 = (undefined4 *)FUN_00471330(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00471710 @ 00471710 ////

int * __thiscall FUN_00471710(void *this,undefined4 *param_1)

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
  puStack_8 = &LAB_00ca2f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_00470660(this,param_1);
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
  piVar2 = FUN_00471530(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_00471810 @ 00471810 ////

void __fastcall FUN_00471810(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00471450(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00471840 @ 00471840 ////

void __cdecl FUN_00471840(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2fb8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  piVar3 = FUN_00471710(&DAT_01049198,&local_2c);
  *piVar3 = param_2;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004718e0 @ 004718e0 ////

void __fastcall FUN_004718e0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1b954;
  return;
}


//// FUNCTION FUN_00471940 @ 00471940 ////

void __fastcall FUN_00471940(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1b960;
  return;
}


//// FUNCTION FUN_004719a0 @ 004719a0 ////

int __fastcall FUN_004719a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004706e0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004719d0 @ 004719d0 ////

undefined4 * __fastcall FUN_004719d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca304f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d1b96c;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  puVar1 = param_1 + 0x1e;
  param_1[0x20] = 0;
  *puVar1 = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x19] = &PTR_LAB_00d1b954;
  param_1[0x1b] = puVar1;
  *puVar1 = param_1 + 0x1a;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  puVar1 = param_1 + 0x2b;
  param_1[0x2d] = 0;
  *puVar1 = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x28] = puVar1;
  *puVar1 = param_1 + 0x27;
  param_1[0x26] = &PTR_LAB_00d1b960;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00471a80 @ 00471a80 ////

void FUN_00471a80(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca306b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xcc);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    DAT_0104917c = FUN_004719d0(puVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_0104917c = (undefined4 *)0x0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00471af0 @ 00471af0 ////

undefined8 __fastcall FUN_00471af0(uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = __alldiv(*param_1,param_1[1],0x800000,0);
  return uVar1;
}


//// FUNCTION FUN_00471b10 @ 00471b10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00471b10(longlong *param_1)

{
  code *pcVar1;
  uint local_4;
  
  local_4 = (uint)(1e+09 < (float)*param_1 * 1.1920929e-07);
  if ((ABS((float)local_4) != 0.0) && (_DAT_010491a4 != 0.0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


//// FUNCTION Debug_RegisterMoneyCheat @ 00471b60 ////

/* WARNING: Removing unreachable block (ram,0x00471bd1) */

void Debug_RegisterMoneyCheat(void)

{
  char local_20 [9];
  undefined1 local_17;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3088;
  local_c = ExceptionList;
  local_20[0] = '\0';
  ExceptionList = &local_c;
  _strncpy(local_20,"dbg_money",9);
  local_17 = 0;
  local_4 = 0;
  CVarSystem_Register_STUBBED();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00471c00 @ 00471c00 ////

void FUN_00471c00(void)

{
  return;
}


//// FUNCTION FUN_00471c10 @ 00471c10 ////

void __thiscall FUN_00471c10(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 100) + 4))();
  *(undefined4 *)((int)this + 0x78) = param_1;
  (*(code *)**(undefined4 **)((int)this + 100))();
  *(undefined1 *)((int)this + 0x7c) = 1;
  return;
}


//// FUNCTION FUN_00471c40 @ 00471c40 ////

void __fastcall FUN_00471c40(int param_1)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  ulonglong uVar5;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 local_c [12];
  
  if ((*(int *)(param_1 + 0x78) != 0) && (1.0 <= *(float *)(param_1 + 0x80))) {
    fVar1 = *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x88);
    *(float *)(param_1 + 0x88) = fVar1;
    if (1.0 <= fVar1) {
      if (*(float *)(param_1 + 0x80) <= fVar1) {
        uVar5 = FUN_00acd42c();
        iVar4 = (int)uVar5;
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(float *)(param_1 + 0x88) = (float)(extraout_ST0_00 - (float10)iVar4);
        if (extraout_ST0_00 - (float10)iVar4 < (float10)-2.0) {
          *(undefined4 *)(param_1 + 0x88) = 0;
        }
      }
      else {
        uVar5 = FUN_00acd42c();
        iVar4 = (int)uVar5;
        *(float *)(param_1 + 0x80) = (float)((float10)*(float *)(param_1 + 0x80) - (float10)iVar4);
        *(float *)(param_1 + 0x88) = (float)(extraout_ST0 - (float10)iVar4);
      }
      if (0x13 < iVar4) {
        iVar4 = 0x14;
      }
      if (0 < iVar4) {
        do {
          pfVar2 = (float *)(**(code **)(**(int **)(param_1 + 0x78) + 0x7c))(local_c);
          fStack_18 = *pfVar2;
          fStack_14 = pfVar2[1];
          fStack_10 = pfVar2[2];
          uVar3 = FUN_009a20f0(&DAT_0105c2e8,&fStack_18,2.0);
          if ((char)uVar3 != '\0') {
            FUN_009af7b0(DAT_0105cbec,&fStack_18,(int *)0x0,0,(undefined *)0x0);
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00471d80 @ 00471d80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471d80(void)

{
  float fVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 local_8 [8];
  
  piVar2 = (int *)GetPlayerStudio();
  plVar3 = (longlong *)(**(code **)(*piVar2 + 0x24))(local_8);
  fVar1 = (float)*plVar3 * 1.1920929e-07;
  if (_DAT_00e506ac <= fVar1) {
    fVar1 = (fVar1 - _DAT_00e506ac) / (_DAT_00e506bc - _DAT_00e506ac);
    _DAT_00e506c0 = (1.0 - fVar1) + DAT_00e506b8 * fVar1;
    if (_DAT_00e506c0 <= DAT_00e506b8) {
      _DAT_00e506c0 = DAT_00e506b8;
    }
  }
  else {
    _DAT_00e506c0 = (fVar1 - _DAT_00e506b4) / (_DAT_00e506ac - _DAT_00e506b4);
    _DAT_00e506c0 = (1.0 - _DAT_00e506c0) * DAT_00e506b0 + _DAT_00e506c0;
    if (DAT_00e506b0 <= _DAT_00e506c0) {
      _DAT_00e506c0 = DAT_00e506b0;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00471e60 @ 00471e60 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00471e60(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float local_c;
  float fStack_8;
  undefined4 local_4;
  
  fStack_8 = param_2;
  local_c = param_1;
  FUN_00471b10((longlong *)&local_c);
  param_1 = (float)(int)ROUND((float)CONCAT44(fStack_8,local_c) * _DAT_00e506a4 * 1.1920929e-07 *
                              _DAT_00e506c0);
  if (0 < (int)param_1) {
    do {
      fVar2 = FUN_00990e30(param_4,param_6);
      fVar3 = FUN_00990e30(param_3,param_5);
      local_c = (float)fVar3;
      local_4 = 0;
      fStack_8 = (float)fVar2;
      uVar1 = FUN_009a20f0(&DAT_0105c2e8,&local_c,2.0);
      if ((char)uVar1 != '\0') {
        FUN_009af7b0(DAT_0105cbec,&local_c,(int *)0x0,0,(undefined *)0x0);
      }
      param_1 = (float)((int)param_1 + -1);
    } while (param_1 != 0.0);
  }
  return;
}


//// FUNCTION FUN_00471f30 @ 00471f30 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00471f30(void *this,undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float10 fVar2;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = param_2;
  local_8 = param_1;
  FUN_00471b10((longlong *)&local_8);
  fVar1 = (float)CONCAT44(uStack_4,local_8) * _DAT_00e506a4 * 1.1920929e-07 * _DAT_00e506c0;
  if (64.0 <= fVar1) {
    fVar1 = 64.0;
  }
  *(float *)((int)this + 0x80) = fVar1 + *(float *)((int)this + 0x80);
  fVar2 = FUN_0043b960(0xe4fa4c);
  *(float *)((int)this + 0x84) = (float)((float10)*(float *)((int)this + 0x80) / fVar2);
  return;
}


//// FUNCTION FUN_00471fb0 @ 00471fb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471fb0(void)

{
  float10 fVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca30e0;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"studio",6);
  local_28 = 6;
  local_2c[6] = '\0';
  local_4 = 0;
  FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"FundsHighlightingScaleAtMin",0x1b);
  local_28 = 0x1b;
  local_2c[0x1b] = '\0';
  local_4 = 1;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  DAT_00e506b0 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"FundsHilightingMin",0x12);
  local_28 = 0x12;
  local_2c[0x12] = '\0';
  local_4 = 2;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e506b4 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"FundsHighlightingScaleAtMax",0x1b);
  local_28 = 0x1b;
  local_2c[0x1b] = '\0';
  local_4 = 3;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  DAT_00e506b8 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"FundsHighlightingMax",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4 = 4;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e506bc = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"startfunds",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 5;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e506ac = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"notesperdollar",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = 6;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.01);
  _DAT_00e506a4 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"dollarspertext",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = 7;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,10.0);
  _DAT_00e506a8 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00472380 @ 00472380 ////

undefined4 * __fastcall FUN_00472380(undefined4 *param_1)

{
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d1ba2c;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_1 + 0x19;
  param_1[0x19] = &PTR_FUN_00d172b0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}


//// FUNCTION FUN_004723d0 @ 004723d0 ////

undefined4 * __thiscall FUN_004723d0(void *this,byte param_1)

{
  FUN_004723f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004723f0 @ 004723f0 ////

void __fastcall FUN_004723f0(undefined4 *param_1)

{
  param_1[0x19] = &PTR_FUN_00d172b0;
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


//// FUNCTION FUN_00472480 @ 00472480 ////

void __fastcall FUN_00472480(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004724b0 @ 004724b0 ////

undefined1 __fastcall FUN_004724b0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x15d);
}


//// FUNCTION FUN_004724c0 @ 004724c0 ////

undefined1 __fastcall FUN_004724c0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x15e);
}


//// FUNCTION FUN_004724d0 @ 004724d0 ////

undefined1 __fastcall FUN_004724d0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x15f);
}


//// FUNCTION FUN_004724e0 @ 004724e0 ////

void __thiscall FUN_004724e0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x164);
  return;
}


//// FUNCTION FUN_004724f0 @ 004724f0 ////

void __thiscall FUN_004724f0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x168);
  return;
}


//// FUNCTION FUN_00472510 @ 00472510 ////

void __cdecl FUN_00472510(int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float local_4;
  
  iVar1 = param_1;
  param_1 = *(int *)(&DAT_010491d8 + param_1 * 4);
  if (param_2 != '\0') {
    puVar2 = (undefined4 *)FUN_0043b520(&param_2,4000.0);
    *(undefined4 *)(&DAT_010491d8 + iVar1 * 4) = *puVar2;
    FUN_0043b680(&param_1,(float *)&DAT_00e4fa4c);
    return;
  }
  pfVar3 = (float *)FUN_0043b520(&param_2,0.5);
  puVar2 = (undefined4 *)FUN_0043b620(&DAT_00e4fa4c,&local_4,pfVar3);
  *(undefined4 *)(&DAT_010491d8 + iVar1 * 4) = *puVar2;
  FUN_0043b6c0(&param_1,(float *)&DAT_00e4fa4c);
  return;
}


//// FUNCTION FUN_00472590 @ 00472590 ////

void __cdecl FUN_00472590(int param_1)

{
  FUN_0043b680(&DAT_00e4fa4c,(float *)(&DAT_010491d8 + param_1 * 4));
  return;
}


//// FUNCTION FUN_004725b0 @ 004725b0 ////

int __fastcall FUN_004725b0(int param_1)

{
  return param_1 + 0x8c;
}


//// FUNCTION FUN_004725c0 @ 004725c0 ////

void __thiscall FUN_004725c0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x110) = param_1;
  return;
}


//// FUNCTION FUN_004725d0 @ 004725d0 ////

void __thiscall FUN_004725d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x10c) = param_1;
  return;
}


//// FUNCTION FUN_004725e0 @ 004725e0 ////

void __fastcall FUN_004725e0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00472620 @ 00472620 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00472620(void)

{
  return (float10)_DAT_00e50750;
}


//// FUNCTION FUN_00472630 @ 00472630 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00472630(void)

{
  return (float10)_DAT_00e50754;
}


//// FUNCTION FUN_00472640 @ 00472640 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00472640(void)

{
  return (float10)_DAT_00e50758;
}


//// FUNCTION FUN_00472650 @ 00472650 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00472650(void)

{
  return (float10)_DAT_00e5075c;
}


//// FUNCTION FUN_00472660 @ 00472660 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00472660(void)

{
  return (float10)_DAT_00e50760;
}


//// FUNCTION FUN_00472670 @ 00472670 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00472670(void)

{
  return (float10)_DAT_00e50764;
}


//// FUNCTION FUN_00472680 @ 00472680 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00472680(void)

{
  return (float10)_DAT_00e5076c;
}


//// FUNCTION FUN_00472690 @ 00472690 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00472690(void)

{
  return (float10)_DAT_00e50768;
}


//// FUNCTION FUN_004726a0 @ 004726a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004726a0(void)

{
  return (float10)_DAT_00e50784;
}


//// FUNCTION FUN_004726b0 @ 004726b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004726b0(void)

{
  return (float10)_DAT_00e50780;
}


//// FUNCTION FUN_004726c0 @ 004726c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004726c0(void)

{
  return (float10)_DAT_010491d0;
}


//// FUNCTION FUN_004726d0 @ 004726d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004726d0(void)

{
  return (float10)_DAT_00e50778;
}


//// FUNCTION FUN_004726e0 @ 004726e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004726e0(void)

{
  return (float10)_DAT_00e50774;
}


//// FUNCTION FUN_00472710 @ 00472710 ////

void __thiscall FUN_00472710(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xa4) = param_1;
  *(undefined4 *)((int)this + 0xac) = param_1;
  return;
}


//// FUNCTION FUN_00472730 @ 00472730 ////

void __thiscall FUN_00472730(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xa8) = param_1;
  *(undefined4 *)((int)this + 0xb0) = param_1;
  return;
}


//// FUNCTION FUN_00472750 @ 00472750 ////

bool __cdecl FUN_00472750(char param_1)

{
  bool bVar1;
  
  bVar1 = param_1 != DAT_010491d4;
  DAT_010491d4 = param_1;
  return bVar1;
}


//// FUNCTION FUN_00472770 @ 00472770 ////

undefined1 FUN_00472770(void)

{
  return DAT_010491d4;
}


//// FUNCTION FUN_00472780 @ 00472780 ////

bool __cdecl FUN_00472780(char param_1)

{
  bool bVar1;
  
  bVar1 = param_1 != DAT_010491d5;
  DAT_010491d5 = param_1;
  return bVar1;
}


//// FUNCTION FUN_004727b0 @ 004727b0 ////

int * __thiscall FUN_004727b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004727f0 @ 004727f0 ////

int * __thiscall FUN_004727f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004728e0 @ 004728e0 ////

float10 __thiscall FUN_004728e0(float *param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_2 * (float10)*param_1;
  if (fVar1 < (float10)0.0) {
    return (float10)0.0;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  return fVar1;
}


//// FUNCTION FUN_00472920 @ 00472920 ////

void __thiscall FUN_00472920(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + *(float *)this;
  if (fVar1 < 0.0) {
    *(undefined4 *)this = 0;
    return;
  }
  if (1.0 < fVar1) {
    *(undefined4 *)this = 0x3f800000;
    return;
  }
  *(float *)this = fVar1;
  return;
}


//// FUNCTION FUN_004729a0 @ 004729a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004729a0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 extraout_ST0;
  
  iVar2 = FUN_005873c0(*(int *)(param_1 + 0x158));
  iVar2 = FUN_0042b0f0(iVar2);
  if (iVar2 != 0) {
    iVar2 = FUN_005873c0(*(int *)(param_1 + 0x158));
    piVar3 = (int *)FUN_0042b0f0(iVar2);
    iVar2 = (**(code **)(*piVar3 + 0x27c))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar3 + 0x27c))();
      iVar4 = (**(code **)(*piVar3 + 0x27c))();
      fVar1 = *(float *)(iVar4 + 0xe4);
      FUN_00566e40(iVar2 + 0x8c);
      return ((extraout_ST0 - (float10)fVar1) - (float10)0.5) * (float10)_DAT_00e50790;
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00472a30 @ 00472a30 ////

undefined4 __fastcall FUN_00472a30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x140);
}


//// FUNCTION FUN_00472a40 @ 00472a40 ////

float * __thiscall FUN_00472a40(void *this,float *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float10 fVar7;
  uint uVar8;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = (**(code **)(**(int **)((int)this + 0x158) + 0x294))();
  if (iVar2 == 0) {
LAB_00472c32:
    *param_1 = 0.5;
    return param_1;
  }
  uVar3 = FUN_0043b6c0(&DAT_00e4fa4c,(float *)&DAT_010491e8);
  if ((char)uVar3 != '\0') goto LAB_00472c32;
  piVar1 = *(int **)((int)this + 0x158);
  iVar2 = 0;
  pfVar5 = &fStack_14;
  pvVar4 = (void *)(**(code **)(*piVar1 + 0x294))();
  pfVar5 = (float *)FUN_00407250(pvVar4,pfVar5,iVar2);
  fStack_18 = *pfVar5;
  iVar2 = 1;
  puVar6 = &uStack_10;
  pvVar4 = (void *)(**(code **)(*piVar1 + 0x294))();
  pfVar5 = (float *)FUN_00407250(pvVar4,puVar6,iVar2);
  if (fStack_18 <= *pfVar5) {
    puVar6 = &uStack_8;
  }
  else {
    puVar6 = &uStack_c;
  }
  uVar8 = (uint)(fStack_18 <= *pfVar5);
  pvVar4 = (void *)(**(code **)(**(int **)((int)this + 0x158) + 0x294))();
  pfVar5 = (float *)FUN_00407250(pvVar4,puVar6,uVar8);
  FUN_00407070(&fStack_18,1.0 - *pfVar5);
  iVar2 = 0;
  pvVar4 = (void *)(**(code **)(**(int **)((int)this + 0x158) + 0x294))();
  uVar3 = FUN_00407190(pvVar4,iVar2);
  if ((char)uVar3 == '\0') {
    iVar2 = 1;
    pvVar4 = (void *)(**(code **)(**(int **)((int)this + 0x158) + 0x294))();
    uVar3 = FUN_00407190(pvVar4,iVar2);
    if ((char)uVar3 == '\0') {
      piVar1 = *(int **)((int)this + 0x158);
      iVar2 = 0;
      puVar6 = &uStack_8;
      pvVar4 = (void *)(**(code **)(*piVar1 + 0x294))();
      pfVar5 = (float *)FUN_00407250(pvVar4,puVar6,iVar2);
      fStack_14 = *pfVar5;
      iVar2 = 1;
      puVar6 = &uStack_c;
      pvVar4 = (void *)(**(code **)(*piVar1 + 0x294))();
      pfVar5 = (float *)FUN_00407250(pvVar4,puVar6,iVar2);
      if (*pfVar5 <= fStack_14) {
        puVar6 = &uStack_4;
      }
      else {
        puVar6 = &uStack_10;
      }
      uVar8 = (uint)(*pfVar5 <= fStack_14);
      pvVar4 = (void *)(**(code **)(**(int **)((int)this + 0x158) + 0x294))();
      FUN_00407250(pvVar4,puVar6,uVar8);
      fVar7 = (float10)FUN_00ace9b0();
      fVar7 = FUN_0042aa00(&fStack_18,(float)fVar7);
      goto LAB_00472bc1;
    }
  }
  iVar2 = 0;
  pvVar4 = (void *)(**(code **)(**(int **)((int)this + 0x158) + 0x294))();
  uVar3 = FUN_00407190(pvVar4,iVar2);
  if ((char)uVar3 != '\0') {
    iVar2 = 1;
    pvVar4 = (void *)(**(code **)(**(int **)((int)this + 0x158) + 0x294))();
    uVar3 = FUN_00407190(pvVar4,iVar2);
    if ((char)uVar3 != '\0') {
      fVar7 = FUN_004728e0(&fStack_18,0.5);
LAB_00472bc1:
      FUN_00407070(param_1,(float)fVar7);
      return param_1;
    }
  }
  *param_1 = fStack_18;
  return param_1;
}


//// FUNCTION FUN_00472c60 @ 00472c60 ////

void __thiscall FUN_00472c60(void *this,float *param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  float local_8;
  undefined1 local_4 [4];
  
  local_8 = 0.5;
  uVar1 = FUN_0043b680(&DAT_00e4fa4c,(float *)&DAT_010491dc);
  if ((char)uVar1 != '\0') {
    pfVar2 = (float *)FUN_00590ad0(*(void **)((int)this + 0x158),local_4);
    local_8 = *pfVar2;
    if (local_8 < 0.0) {
      local_8 = 0.0;
    }
    else if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  *(float *)((int)this + 0xf4) = local_8;
  *param_1 = local_8;
  return;
}


//// FUNCTION FUN_00472cf0 @ 00472cf0 ////

void __thiscall FUN_00472cf0(void *this,float *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  longlong *plVar3;
  float *pfVar4;
  float local_10;
  undefined1 auStack_c [12];
  
  local_10 = 0.5;
  uVar1 = FUN_0043b680(&DAT_00e4fa4c,(float *)&DAT_010491d8);
  if ((char)uVar1 != '\0') {
    piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x158) + 0x1d4))();
    pfVar4 = &local_10;
    plVar3 = (longlong *)(**(code **)(*piVar2 + 0x54))(pfVar4);
    piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x158) + 0x1d4))
                              (pfVar4,(float)*plVar3 * 1.1920929e-07);
    plVar3 = (longlong *)(**(code **)(*piVar2 + 8))(auStack_c);
    local_10 = ((float)*plVar3 * 1.1920929e-07) / local_10 - 0.5;
    if (local_10 < 0.0) {
      *param_1 = 0.0;
      return;
    }
    if (1.0 < local_10) {
      *param_1 = 1.0;
      return;
    }
  }
  *param_1 = local_10;
  return;
}


//// FUNCTION FUN_00472df0 @ 00472df0 ////

void __thiscall FUN_00472df0(void *this,float *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0.5;
  uVar4 = FUN_0043b680(&DAT_00e4fa4c,(float *)&DAT_010491e4);
  if ((char)uVar4 != '\0') {
    pfVar5 = (float *)FUN_00585ff0(*(void **)((int)this + 0x158),&local_8);
    fVar1 = *pfVar5;
    pfVar5 = (float *)FUN_00585ff0(*(void **)((int)this + 0x158),&local_4);
    iVar6 = 0;
    for (iVar2 = *(int *)(*(int *)((int)this + 0x158) + 0xa50);
        iVar2 != *(int *)((int)this + 0x158) + 0xa5c; iVar2 = *(int *)(iVar2 + 4)) {
      iVar6 = iVar6 + 1;
    }
    fVar3 = (float)iVar6;
    if (iVar6 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    local_c = (fVar3 + 0.85) / (fVar1 * *pfVar5 * 6.0 + 1.5);
    if (local_c < 0.0) {
      local_c = 0.0;
    }
    else if (1.0 < local_c) {
      local_c = 1.0;
    }
  }
  *(float *)((int)this + 0xfc) = local_c;
  *param_1 = local_c;
  return;
}


//// FUNCTION FUN_00472ef0 @ 00472ef0 ////

void __thiscall FUN_00472ef0(void *this,undefined4 *param_1,int param_2)

{
  *param_1 = *(undefined4 *)((int)this + param_2 * 4 + 0xf0);
  return;
}


//// FUNCTION FUN_00472f10 @ 00472f10 ////

void __thiscall FUN_00472f10(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xec);
  return;
}


//// FUNCTION FUN_00472f20 @ 00472f20 ////

void __thiscall FUN_00472f20(void *this,float *param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  float local_8;
  float fStack_4;
  
  local_8 = 0.5;
  uVar1 = FUN_0043b680(&DAT_00e4fa4c,(float *)&DAT_010491e0);
  if ((char)uVar1 != '\0') {
    pfVar2 = (float *)(**(code **)(**(int **)((int)this + 0x158) + 0x268))(&local_8);
    local_8 = *pfVar2;
    pfVar2 = (float *)FUN_0084c3c0(&fStack_4,*(int **)((int)this + 0x158));
    local_8 = (local_8 + 0.5) / (*pfVar2 + 0.5) - 0.5;
    if (local_8 < 0.0) {
      local_8 = 0.0;
    }
    else if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  *(float *)((int)this + 0xf8) = local_8;
  *param_1 = local_8;
  return;
}


//// FUNCTION FUN_00473000 @ 00473000 ////

void __cdecl FUN_00473000(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_2 * 0.39999998;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + 0.3;
  if (fVar1 < 0.0) {
LAB_00473075:
    *param_1 = 0.0;
    return;
  }
  if (fVar1 <= 1.0) {
    if (fVar1 < 0.0) goto LAB_00473075;
    if (fVar1 <= 1.0) goto LAB_0047309b;
  }
  fVar1 = 1.0;
LAB_0047309b:
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_004730d0 @ 004730d0 ////

void __thiscall FUN_004730d0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x104);
  return;
}


//// FUNCTION FUN_00473120 @ 00473120 ////

undefined4 __fastcall FUN_00473120(int param_1)

{
  return *(undefined4 *)(param_1 + 0x128);
}


//// FUNCTION FUN_00473160 @ 00473160 ////

undefined4 __fastcall FUN_00473160(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 200) + 0x1ec))();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 200) + 0x1ec))();
    if (*(char *)(uVar2 + 0x128) != '\0') {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_004731a0 @ 004731a0 ////

undefined4 __fastcall FUN_004731a0(int param_1)

{
  if (DAT_010491d4 != '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(float *)(param_1 + 0xa4) <= *(float *)(param_1 + 0x8c)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_004731e0 @ 004731e0 ////

void __thiscall FUN_004731e0(void *this,undefined4 *param_1)

{
  if (DAT_010491d4 != '\0') {
    *(undefined4 *)((int)this + 0x8c) = 0;
  }
  *param_1 = *(undefined4 *)((int)this + 0x8c);
  return;
}


//// FUNCTION FUN_00473210 @ 00473210 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00473210(void *this,float *param_1)

{
  float fVar1;
  int iVar2;
  
  if (DAT_010491d5 != '\0') {
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  iVar2 = (**(code **)(**(int **)((int)this + 200) + 0x1ec))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(**(int **)((int)this + 200) + 0x1ec))();
    iVar2 = *(int *)(iVar2 + 0xa0);
    if (iVar2 != 0) goto LAB_00473266;
  }
  iVar2 = FUN_00577d80(*(int *)((int)this + 200));
LAB_00473266:
  fVar1 = *(float *)((int)this + 0x90);
  if (iVar2 != 0) {
    fVar1 = _DAT_00e50788;
    if (*(float *)((int)this + 0x90) <= _DAT_00e50788) {
      fVar1 = *(float *)((int)this + 0x90);
    }
    if (fVar1 < 0.0) {
      *param_1 = 0.0;
      return;
    }
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_004732e0 @ 004732e0 ////

void __thiscall FUN_004732e0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xa4);
  return;
}


//// FUNCTION FUN_004732f0 @ 004732f0 ////

void __thiscall FUN_004732f0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x90) = param_1;
  if ((DAT_0104a974 != 0) && (*(float *)(DAT_0104a974 + 100) != 0.0)) {
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  return;
}


//// FUNCTION FUN_00473330 @ 00473330 ////

void __thiscall FUN_00473330(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x8c) = param_1;
  if ((DAT_0104a974 != 0) && (*(float *)(DAT_0104a974 + 100) != 0.0)) {
    *(undefined4 *)((int)this + 0x8c) = 0;
  }
  return;
}


//// FUNCTION FUN_00473370 @ 00473370 ////

void __thiscall FUN_00473370(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xa8);
  return;
}


//// FUNCTION FUN_00473380 @ 00473380 ////

float10 __thiscall FUN_00473380(int param_1,float param_2)

{
  int iVar1;
  void *pvVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_4;
  
  local_4 = 0.0;
  iVar1 = (**(code **)(**(int **)(param_1 + 200) + 0x294))();
  fVar5 = param_2;
  if (iVar1 != 0) {
    pfVar3 = &param_2;
    fVar4 = param_2;
    pvVar2 = (void *)(**(code **)(**(int **)(param_1 + 200) + 0x294))();
    pfVar3 = (float *)FUN_00407250(pvVar2,pfVar3,(int)fVar4);
    param_2 = *pfVar3;
    pfVar3 = &local_4;
    pvVar2 = (void *)(**(code **)(**(int **)(param_1 + 200) + 0x294))();
    pfVar3 = (float *)FUN_00407290(pvVar2,pfVar3,(int)fVar5);
    return ((((float10)param_2 - (float10)*pfVar3) / ((float10)1.0 - (float10)*pfVar3)) *
            (float10)0.5 + (float10)0.5) * (float10)DAT_00e5078c;
  }
  return (float10)DAT_00e5078c * (float10)local_4;
}


//// FUNCTION FUN_00473420 @ 00473420 ////

void __fastcall FUN_00473420(int param_1)

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


//// FUNCTION FUN_00473440 @ 00473440 ////

void __fastcall FUN_00473440(int param_1)

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


//// FUNCTION FUN_00473470 @ 00473470 ////

void __fastcall FUN_00473470(int param_1)

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


//// FUNCTION FUN_00473490 @ 00473490 ////

void __fastcall FUN_00473490(int param_1)

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


//// FUNCTION FUN_004734e0 @ 004734e0 ////

void __fastcall FUN_004734e0(int *param_1)

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
  puStack_8 = &LAB_00ca30f8;
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


//// FUNCTION CMood_RegisterSaveFields @ 004735b0 ////

void __fastcall CMood_RegisterSaveFields(int param_1)

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
  puStack_8 = &LAB_00ca3168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x41;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xb0));
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
  uVar3 = FUN_0098b490("PWorkBar");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xb0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x42;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe18);
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
  uVar3 = FUN_0098b490("QuitThreatEnd");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x100),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x43;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe18);
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
  uVar3 = FUN_0098b490("QuitConsiderEnd");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xfc),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x44;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("BConsideringQuitting");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xf8),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x45;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("BThreateningToQuit");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xf9),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x46;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
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
  uVar3 = FUN_0098b490("BWasThreateningToQuit");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xfa),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x47;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
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
  uVar3 = FUN_0098b490("BHasQuit");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xfb),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x48;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    iVar4 = FUN_00ace3df((int *)(param_1 + 200));
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
  uVar3 = FUN_0098b490("PGrudges");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 200));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x49;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xe0));
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
  uVar3 = FUN_0098b490("POwner");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xe0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x4a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
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
  uVar3 = FUN_0098b490("UpperThreshold");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xa8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x4b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 10;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
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
  uVar3 = FUN_0098b490("LowerThreshold");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xac));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00473f90 @ 00473f90 ////

undefined4 * __thiscall FUN_00473f90(void *this,undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  float10 fVar5;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar3 = FUN_0043b6c0(&DAT_00e4fa4c,(float *)&DAT_010491ec);
  if ((char)uVar3 == '\0') {
    pfVar4 = (float *)FUN_00473210(*(void **)((int)this + 0x128),&local_c);
    fVar1 = *pfVar4;
    iVar2 = *(int *)((int)this + 0x128);
    if (DAT_010491d4 != '\0') {
      local_10 = 0.0;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
    }
    if (*(float *)(iVar2 + 0x8c) <= fVar1) {
      iVar2 = *(int *)((int)this + 0x128);
      if (DAT_010491d4 != '\0') {
        *(undefined4 *)(iVar2 + 0x8c) = 0;
      }
      local_10 = *(float *)(iVar2 + 0x8c);
      pfVar4 = &local_10;
    }
    else {
      pfVar4 = (float *)FUN_00473210(*(void **)((int)this + 0x128),&local_8);
    }
    local_c = *pfVar4;
    pfVar4 = (float *)FUN_00473210(*(void **)((int)this + 0x128),&local_8);
    fVar1 = *pfVar4;
    iVar2 = *(int *)((int)this + 0x128);
    if (DAT_010491d4 != '\0') {
      local_10 = 0.0;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
    }
    if (fVar1 <= *(float *)(iVar2 + 0x8c)) {
      iVar2 = *(int *)((int)this + 0x128);
      if (DAT_010491d4 != '\0') {
        *(undefined4 *)(iVar2 + 0x8c) = 0;
      }
      local_10 = *(float *)(iVar2 + 0x8c);
      pfVar4 = &local_10;
    }
    else {
      pfVar4 = (float *)FUN_00473210(*(void **)((int)this + 0x128),&local_4);
    }
    local_10 = 1.0 - *pfVar4;
    if (0.0 <= local_10) {
      if (1.0 < local_10) {
        local_10 = 1.0;
      }
    }
    else {
      local_10 = 0.0;
    }
    fVar5 = (float10)FUN_00ace9b0();
    fVar5 = (float10)local_10 - fVar5;
    if ((float10)0.0 <= fVar5) {
      if (fVar5 <= (float10)1.0) {
        local_10 = (float)fVar5;
      }
      else {
        local_10 = 1.0;
      }
    }
    else {
      local_10 = 0.0;
    }
    FUN_00407070(param_1,local_10);
    return param_1;
  }
  *param_1 = 0x3f000000;
  return param_1;
}


//// FUNCTION FUN_00474170 @ 00474170 ////

float * __thiscall FUN_00474170(void *this,float *param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  
  switch(param_2) {
  case 0.0:
    pfVar2 = (float *)FUN_00472cf0(this,&param_2);
    fVar1 = *pfVar2;
    *(float *)((int)this + 0xf0) = fVar1;
    *param_1 = fVar1;
    return param_1;
  case 1.4013e-45:
    FUN_00472c60(this,param_1);
    return param_1;
  case 2.8026e-45:
    FUN_00472f20(this,param_1);
    return param_1;
  case 4.2039e-45:
    FUN_00472df0(this,param_1);
    return param_1;
  default:
    *param_1 = 0.5;
    return param_1;
  }
}


//// FUNCTION FUN_004742b0 @ 004742b0 ////

void __thiscall FUN_004742b0(void *this,float *param_1)

{
  void *this_00;
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float local_8;
  float local_4;
  
  iVar3 = 0;
  local_8 = 0.0;
  local_4 = 0.0;
  puVar2 = DAT_0104d05c;
  if (DAT_0104d05c != &DAT_0104d068) {
    do {
      iVar4 = puVar2[2];
      if ((iVar4 != 0) && (iVar4 != *(int *)((int)this + 0x158))) {
        pfVar1 = &local_4;
        this_00 = (void *)FUN_005873c0(*(int *)((int)this + 0x158));
        pfVar1 = FUN_0042e910(this_00,pfVar1,iVar4);
        local_8 = local_8 + *pfVar1;
        iVar3 = iVar3 + 1;
      }
      puVar2 = (undefined4 *)puVar2[1];
    } while (puVar2 != &DAT_0104d068);
    if (iVar3 != 0) {
      local_8 = local_8 / (float)iVar3;
      if (local_8 < 0.0) {
        *param_1 = 0.0;
        return;
      }
      if (1.0 < local_8) {
        local_8 = 1.0;
      }
      *param_1 = local_8;
      return;
    }
  }
  *param_1 = 0.5;
  return;
}


//// FUNCTION CProjectCastEffect_GetEffectiveLowerMoodThreshold @ 00474380 ////

undefined4 * __thiscall
CProjectCastEffect_GetEffectiveLowerMoodThreshold(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *this_00;
  float10 fVar3;
  char **ppcVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3188;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = AwardBonusManager_Get();
  if (iVar2 != 0) {
    iVar2 = 0xc;
    this_00 = (void *)AwardBonusManager_Get();
    cVar1 = AwardBonusManager_IsBonusActive(this_00,iVar2);
    if (cVar1 != '\0') {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"Lower",5);
      local_28 = 5;
      local_2c[5] = '\0';
      ppcVar4 = &local_2c;
      iVar2 = 0xc;
      local_4 = 0;
      AwardBonusManager_Get();
      fVar3 = AwardBonus_GetValue(iVar2,ppcVar4);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if ((float)fVar3 < *(float *)((int)this + 0x110)) {
        FUN_00407070(param_1,(float)fVar3);
        ExceptionList = local_c;
        return param_1;
      }
    }
  }
  *param_1 = *(undefined4 *)((int)this + 0x110);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION CProjectCastEffect_GetEffectiveUpperMoodThreshold @ 00474480 ////

undefined4 * __thiscall
CProjectCastEffect_GetEffectiveUpperMoodThreshold(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *this_00;
  float10 fVar3;
  char **ppcVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca31a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = AwardBonusManager_Get();
  if (iVar2 != 0) {
    iVar2 = 0xc;
    this_00 = (void *)AwardBonusManager_Get();
    cVar1 = AwardBonusManager_IsBonusActive(this_00,iVar2);
    if (cVar1 != '\0') {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"Upper",5);
      local_28 = 5;
      local_2c[5] = '\0';
      ppcVar4 = &local_2c;
      iVar2 = 0xc;
      local_4 = 0;
      AwardBonusManager_Get();
      fVar3 = AwardBonus_GetValue(iVar2,ppcVar4);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if ((float)fVar3 < *(float *)((int)this + 0x10c)) {
        FUN_00407070(param_1,(float)fVar3);
        ExceptionList = local_c;
        return param_1;
      }
    }
  }
  *param_1 = *(undefined4 *)((int)this + 0x10c);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00474580 @ 00474580 ////

void __fastcall FUN_00474580(int *param_1)

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
  puStack_8 = &LAB_00ca31c8;
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


//// FUNCTION CWorkBar_RegisterSaveFields @ 00474650 ////

void __fastcall CWorkBar_RegisterSaveFields(int param_1)

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
  puStack_8 = &LAB_00ca3228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x367;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
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
  uVar3 = FUN_0098b490("Stress");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x368;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
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
  uVar3 = FUN_0098b490("Boredom");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x2c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x369;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("StressSuspended");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)&DAT_010491d4,1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x36a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("BoredomSuspended");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)&DAT_010491d5,1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x36b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
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
  uVar3 = FUN_0098b490("StressThreshold");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x40));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x36c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
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
  uVar3 = FUN_0098b490("BoredomThreshold");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x44));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x36d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
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
  uVar3 = FUN_0098b490("OriginalStressThreshold");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x48));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x36e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
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
  uVar3 = FUN_0098b490("OriginalBoredomThreshold");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x4c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Mood.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x36f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x50));
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
  uVar3 = FUN_0098b490("POwner");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x50));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00474e30 @ 00474e30 ////

void __fastcall FUN_00474e30(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  float10 fVar3;
  int iVar4;
  
  iVar4 = 0;
  pvVar1 = (void *)(**(code **)(**(int **)(param_1 + 200) + 0x294))();
  uVar2 = FUN_00407190(pvVar1,iVar4);
  if ((char)uVar2 != '\0') {
    fVar3 = FUN_00473380(param_1,0.0);
    fVar3 = (float10)*(float *)(param_1 + 0xa4) - fVar3;
    if ((float10)0.0 <= fVar3) {
      if ((float10)1.0 < fVar3) {
        fVar3 = (float10)1.0;
      }
    }
    else {
      fVar3 = (float10)0.0;
    }
    *(float *)(param_1 + 0xa4) = (float)fVar3;
    fVar3 = FUN_00473380(param_1,0.0);
    fVar3 = (float10)*(float *)(param_1 + 0xa8) - fVar3;
    if ((float10)0.0 <= fVar3) {
      if ((float10)1.0 < fVar3) {
        fVar3 = (float10)1.0;
      }
    }
    else {
      fVar3 = (float10)0.0;
    }
    *(float *)(param_1 + 0xa8) = (float)fVar3;
  }
  iVar4 = 1;
  pvVar1 = (void *)(**(code **)(**(int **)(param_1 + 200) + 0x294))();
  uVar2 = FUN_00407190(pvVar1,iVar4);
  if ((char)uVar2 != '\0') {
    fVar3 = FUN_00473380(param_1,1.4013e-45);
    fVar3 = (float10)*(float *)(param_1 + 0xa4) - fVar3;
    if ((float10)0.0 <= fVar3) {
      if ((float10)1.0 < fVar3) {
        fVar3 = (float10)1.0;
      }
    }
    else {
      fVar3 = (float10)0.0;
    }
    *(float *)(param_1 + 0xa4) = (float)fVar3;
    fVar3 = FUN_00473380(param_1,1.4013e-45);
    fVar3 = (float10)*(float *)(param_1 + 0xa8) - fVar3;
    if ((float10)0.0 <= fVar3) {
      if ((float10)1.0 < fVar3) {
        fVar3 = (float10)1.0;
      }
    }
    else {
      fVar3 = (float10)0.0;
    }
    *(float *)(param_1 + 0xa8) = (float)fVar3;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 200) + 0x294))();
  uVar2 = FUN_004071e0(iVar4);
  if ((char)uVar2 == '\0') {
    if (*(float *)(param_1 + 0xa4) < *(float *)(param_1 + 0xac)) {
      FUN_00472920((void *)(param_1 + 0xa4),DAT_00e5078c);
    }
    if (*(float *)(param_1 + 0xa8) < *(float *)(param_1 + 0xb0)) {
      FUN_00472920((void *)(param_1 + 0xa8),DAT_00e5078c);
    }
  }
  if (*(float *)(param_1 + 0xa4) < 0.2) {
    *(undefined4 *)(param_1 + 0xa4) = 0x3e4ccccd;
  }
  if (*(float *)(param_1 + 0xa8) < 0.2) {
    *(undefined4 *)(param_1 + 0xa8) = 0x3e4ccccd;
  }
  return;
}


//// FUNCTION FUN_00475010 @ 00475010 ////

undefined4 __fastcall FUN_00475010(void *param_1)

{
  float *pfVar1;
  void *local_4;
  
  local_4 = param_1;
  pfVar1 = (float *)FUN_00473210(param_1,(float *)&local_4);
  if (*(float *)((int)param_1 + 0xa8) <= *pfVar1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00475040 @ 00475040 ////

void __thiscall FUN_00475040(void *this,float param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  float10 fVar5;
  
  if ((0.0 < param_1) && (iVar3 = AwardBonusManager_Get(), iVar3 != 0)) {
    iVar3 = 4;
    pvVar4 = (void *)AwardBonusManager_Get();
    cVar2 = AwardBonusManager_IsBonusActive(pvVar4,iVar3);
    if (cVar2 != '\0') {
      pvVar4 = (void *)0x0;
      iVar3 = 4;
      AwardBonusManager_Get();
      fVar5 = AwardBonus_GetValue(iVar3,pvVar4);
      param_1 = (float)(fVar5 * (float10)param_1);
    }
  }
  fVar1 = param_1 + *(float *)((int)this + 0x90);
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
    goto LAB_004750f3;
  }
  if (fVar1 <= 1.0) {
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
      goto LAB_004750f3;
    }
    if (fVar1 <= 1.0) goto LAB_004750f3;
  }
  fVar1 = 1.0;
LAB_004750f3:
  *(float *)((int)this + 0x90) = fVar1;
  if ((DAT_0104a974 != 0) && (*(float *)(DAT_0104a974 + 100) != 0.0)) {
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  return;
}


//// FUNCTION FUN_00475130 @ 00475130 ////

void __thiscall FUN_00475130(void *this,float param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  float10 fVar5;
  
  if ((0.0 < param_1) && (iVar3 = AwardBonusManager_Get(), iVar3 != 0)) {
    iVar3 = 4;
    pvVar4 = (void *)AwardBonusManager_Get();
    cVar2 = AwardBonusManager_IsBonusActive(pvVar4,iVar3);
    if (cVar2 != '\0') {
      pvVar4 = (void *)0x0;
      iVar3 = 4;
      AwardBonusManager_Get();
      fVar5 = AwardBonus_GetValue(iVar3,pvVar4);
      param_1 = (float)(fVar5 * (float10)param_1);
    }
  }
  fVar1 = param_1 + *(float *)((int)this + 0x8c);
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
    goto LAB_004751e3;
  }
  if (fVar1 <= 1.0) {
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
      goto LAB_004751e3;
    }
    if (fVar1 <= 1.0) goto LAB_004751e3;
  }
  fVar1 = 1.0;
LAB_004751e3:
  *(float *)((int)this + 0x8c) = fVar1;
  if ((DAT_0104a974 != 0) && (*(float *)(DAT_0104a974 + 100) != 0.0)) {
    *(undefined4 *)((int)this + 0x8c) = 0;
  }
  return;
}


//// FUNCTION FUN_00475290 @ 00475290 ////

void __fastcall FUN_00475290(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1bbec;
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


//// FUNCTION FUN_00475350 @ 00475350 ////

void __fastcall FUN_00475350(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1bbfc;
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


//// FUNCTION FUN_004753a0 @ 004753a0 ////

void __fastcall FUN_004753a0(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  char **ppcVar6;
  int iVar7;
  float local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  float local_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3248;
  local_c = ExceptionList;
  if (*(char *)((int)param_1 + 0x15d) == '\0') {
    if (*(char *)((int)param_1 + 0x15c) == '\0') {
      ExceptionList = &local_c;
      pfVar3 = (float *)CProjectCastEffect_GetEffectiveLowerMoodThreshold(param_1,&local_38);
      local_3c = *pfVar3;
      uVar2 = FUN_00566f00((void *)((int)param_1 + 0x8c),local_3c);
      if ((char)uVar2 != '\0') {
        *(undefined1 *)((int)param_1 + 0x15c) = 1;
        pfVar3 = (float *)FUN_0043b520(local_34,DAT_00e506e4);
        puVar4 = (undefined4 *)FUN_0043b600(&DAT_00e4fa4c,&local_30,pfVar3);
        *(undefined4 *)((int)param_1 + 0x160) = *puVar4;
      }
    }
    else {
      ExceptionList = &local_c;
      pfVar3 = (float *)CProjectCastEffect_GetEffectiveLowerMoodThreshold(param_1,&local_38);
      local_3c = *pfVar3;
      uVar2 = FUN_00566f60((void *)((int)param_1 + 0x8c),local_3c);
      if ((char)uVar2 != '\0') {
        *(undefined1 *)((int)param_1 + 0x15c) = 0;
        ExceptionList = local_c;
        return;
      }
      uVar2 = FUN_0043b680(&DAT_00e4fa4c,(float *)((int)param_1 + 0x160));
      if ((char)uVar2 != '\0') {
        *(undefined1 *)((int)param_1 + 0x15d) = 1;
        *(undefined1 *)((int)param_1 + 0x15e) = 0;
        pfVar3 = (float *)FUN_0043b520(&local_38,DAT_00e506e0);
        puVar4 = (undefined4 *)FUN_0043b600(&DAT_00e4fa4c,&local_3c,pfVar3);
        uVar2 = *puVar4;
        *(undefined4 *)((int)param_1 + 0x164) = uVar2;
        if (*(char *)(*(int *)((int)param_1 + 0x158) + 0x9d8) == '\0') {
          FUN_00795c10(*(int *)((int)param_1 + 0x158),uVar2);
          ExceptionList = local_c;
          return;
        }
      }
    }
  }
  else {
    ExceptionList = &local_c;
    uVar2 = FUN_00798380(*(int *)((int)param_1 + 0x158));
    if ((char)uVar2 == '\0') {
      FUN_00795c10(*(int *)((int)param_1 + 0x158),*(undefined4 *)((int)param_1 + 0x164));
    }
    pfVar3 = (float *)CProjectCastEffect_GetEffectiveUpperMoodThreshold(param_1,&local_38);
    local_3c = *pfVar3;
    uVar2 = FUN_00566f60((void *)((int)param_1 + 0x8c),local_3c);
    if ((char)uVar2 != '\0') {
      *(undefined1 *)((int)param_1 + 0x15d) = 0;
      *(undefined1 *)((int)param_1 + 0x15c) = 0;
      *(undefined1 *)((int)param_1 + 0x15e) = 1;
      *(undefined4 *)((int)param_1 + 0x168) = DAT_00e4fa4c;
      ExceptionList = local_c;
      return;
    }
    uVar2 = FUN_0043b6c0((void *)((int)param_1 + 0x164),(float *)&DAT_00e4fa4c);
    if ((char)uVar2 != '\0') {
      cVar1 = (**(code **)(**(int **)((int)param_1 + 0x158) + 0x1c4))();
      if (cVar1 == '\0') {
        (**(code **)(**(int **)((int)param_1 + 0x158) + 0x1a8))(1);
        *(undefined4 *)(*(int *)((int)param_1 + 0x158) + 0xac0) = DAT_00e4fa4c;
        if (*(char *)(*(uint *)((int)param_1 + 0x158) + 0x9d8) == '\0') {
          FUN_00799350(*(uint *)((int)param_1 + 0x158));
        }
        pcStack_2c = acStack_20;
        *(undefined1 *)((int)param_1 + 0x15d) = 0;
        *(undefined1 *)((int)param_1 + 0x15f) = 1;
        acStack_20[0] = '\0';
        uStack_28 = 0;
        uStack_24 = 0x20;
        pcStack_2c = _malloc(0x20);
        _strncpy(pcStack_2c,"TANNOY_STARLEFTSTUDIO",0x15);
        uStack_28 = 0x15;
        pcStack_2c[0x15] = '\0';
        iVar7 = 2;
        ppcVar6 = &pcStack_2c;
        iVar5 = 2;
        uStack_4 = 0;
        FUN_004f3b20();
        FUN_004f8a00(iVar5,ppcVar6,iVar7);
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_2c);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00475660 @ 00475660 ////

void __thiscall FUN_00475660(void *this,float *param_1)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = 0.0;
  pfVar4 = (float *)((int)this + 0xf0);
  local_c = 1.0;
  local_8 = 0.0;
  pfVar3 = pfVar4;
  do {
    pfVar1 = FUN_00474170(this,&local_4,fVar2);
    if (*pfVar1 < local_c) {
      local_c = *pfVar3;
      local_8 = fVar2;
    }
    fVar2 = (float)((int)fVar2 + 1);
    pfVar3 = pfVar3 + 1;
  } while ((int)fVar2 < 4);
  local_c = 0.0;
  fVar2 = 0.0;
  do {
    if (local_8 == fVar2) {
      fVar5 = (float10)local_c + (float10)*pfVar4;
    }
    else {
      fVar5 = (float10)FUN_00ace9b0();
      fVar5 = fVar5 + (float10)local_c;
    }
    fVar2 = (float)((int)fVar2 + 1);
    local_c = (float)fVar5;
    pfVar4 = pfVar4 + 1;
  } while ((int)fVar2 < 4);
  if (local_c < 0.0) {
    *param_1 = 0.0;
    return;
  }
  if (1.0 < local_c) {
    *param_1 = 1.0;
    return;
  }
  *param_1 = local_c;
  return;
}


//// FUNCTION FUN_00475750 @ 00475750 ////

undefined4 * __thiscall FUN_00475750(void *this,undefined4 param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3281;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 100));
  *(undefined ***)this = &PTR_FUN_00d1bc44;
  *(undefined4 *)((int)this + 100) = &PTR_LAB_00d1bc24;
  *(undefined4 *)((int)this + 0x8c) = 0;
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x90) = 0;
  FUN_0043b440((int *)((int)this + 0x94),1);
  *(undefined4 *)((int)this + 0xa4) = 0x3f4ccccd;
  piVar1 = (int *)((int)this + 0xb4);
  *(undefined4 *)((int)this + 0xa8) = 0x3e4ccccd;
  *(undefined4 *)((int)this + 0xac) = 0x3f4ccccd;
  *(undefined4 *)((int)this + 0xb0) = 0x3e4ccccd;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(int **)((int)this + 0xc0) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 200) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 200) = param_1;
  (**(code **)*piVar1)();
  FUN_0043b470((int *)((int)this + 0x94));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00475840 @ 00475840 ////

undefined4 * __fastcall FUN_00475840(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca32a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d1bc44;
  param_1[0x19] = &PTR_LAB_00d1bc24;
  param_1[0x23] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x24] = 0;
  FUN_0043b440(param_1 + 0x25,1);
  param_1[0x29] = 0x3f4ccccd;
  param_1[0x2a] = 0x3e4ccccd;
  param_1[0x2b] = 0x3f4ccccd;
  param_1[0x2c] = 0x3e4ccccd;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = param_1 + 0x2d;
  param_1[0x2d] = &PTR_FUN_00d16954;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004758f0 @ 004758f0 ////

undefined4 __thiscall FUN_004758f0(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  char cVar7;
  int iVar8;
  
  iVar1 = (**(code **)(**(int **)((int)this + 200) + 500))();
  piVar3 = param_1;
  if (iVar1 != 0) {
    cVar7 = '\0';
    this_00 = (void *)(**(code **)(**(int **)((int)this + 200) + 500))();
    uVar2 = FUN_005b20f0(this_00,cVar7);
    if ((char)uVar2 != '\0') {
      iVar8 = 0;
      pTVar6 = &TM::CPhasePreProduction::RTTI_Type_Descriptor;
      pTVar5 = &TM::CPhaseBase::RTTI_Type_Descriptor;
      iVar4 = 0;
      iVar1 = (**(code **)(**(int **)((int)this + 200) + 500))();
      piVar3 = (int *)FUN_005b22a0(iVar1);
      piVar3 = (int *)FUN_00ace790(piVar3,iVar4,pTVar5,pTVar6,iVar8);
      if (piVar3 != (int *)0x0) {
        piVar3 = (int *)(**(code **)(*piVar3 + 0x38))(&param_1);
        if (*piVar3 != 0x3f800000) {
          FUN_00475130(this,DAT_00e506f4);
          uVar2 = FUN_00475040(this,DAT_00e506f8);
          return CONCAT31((int3)((uint)uVar2 >> 8),1);
        }
      }
    }
    FUN_00475130(this,DAT_010491ac);
    uVar2 = FUN_00475040(this,DAT_00e5070c);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  iVar1 = FUN_00ace790(param_1,0,&TM::TMRoom::RTTI_Type_Descriptor,
                       &TM::CPRRoom::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    FUN_00475130(this,DAT_00e50710);
    uVar2 = FUN_00475040(this,DAT_00e50714);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  iVar1 = FUN_00ace790(piVar3,0,&TM::TMRoom::RTTI_Type_Descriptor,
                       &TM::CScriptRoom::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    FUN_00475130(this,DAT_00e50720);
    uVar2 = FUN_00475040(this,DAT_00e50724);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  iVar1 = FUN_00ace790(piVar3,0,&TM::TMRoom::RTTI_Type_Descriptor,
                       &TM::CCostumeRoom::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    FUN_00475130(this,DAT_00e50718);
    uVar2 = FUN_00475040(this,DAT_010491b0);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  iVar1 = FUN_00ace790(piVar3,0,&TM::TMRoom::RTTI_Type_Descriptor,
                       &TM::CHealthRoom::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    FUN_00475130(this,DAT_00e5071c);
    uVar2 = FUN_00475040(this,DAT_010491b4);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  iVar1 = FUN_00ace790(piVar3,0,&TM::TMRoom::RTTI_Type_Descriptor,
                       &TM::CDetoxRoom::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    FUN_00475130(this,DAT_00e5074c);
    uVar2 = FUN_00475040(this,DAT_010491cc);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  iVar1 = FUN_00ace790(piVar3,0,&TM::TMRoom::RTTI_Type_Descriptor,
                       &TM::CHospitalRoom::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    FUN_00475130(this,DAT_00e5077c);
    uVar2 = FUN_00475040(this,DAT_00e50770);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return 0;
}


//// FUNCTION FUN_00475b30 @ 00475b30 ////

undefined4 __thiscall FUN_00475b30(void *this,int param_1)

{
  byte bVar1;
  bool bVar2;
  void *this_00;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  byte **ppbVar13;
  byte **ppbVar14;
  char **ppcVar15;
  void **ppvVar16;
  byte *local_d4;
  int local_d0;
  uint local_cc;
  byte local_c8 [20];
  byte *local_b4;
  undefined4 local_b0;
  uint local_ac;
  byte local_a8 [20];
  void *local_94;
  void *local_90 [2];
  uint local_88;
  uint local_70;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
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
  puStack_8 = &LAB_00ca3315;
  local_c = ExceptionList;
  local_70 = 0;
  ExceptionList = &local_c;
  local_94 = this;
  iVar4 = FUN_00401c30(param_1);
  local_d4 = local_c8;
  local_c8[0] = 0;
  local_d0 = 0;
  local_cc = 0x14;
  FUN_004015d0(&local_d4,*(char **)(iVar4 + 100),*(uint *)(iVar4 + 0x68));
  cVar3 = *(char *)(*(uint *)((int)this + 200) + 0x15c);
  local_4 = 0;
  if (local_d0 == 0) {
    if (local_cc < 0x15) {
      ExceptionList = local_c;
      return *(uint *)((int)this + 200) & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_d4);
  }
  local_b4 = local_a8;
  local_a8[0] = 0;
  local_b0 = 0;
  local_ac = 0x14;
  _strncpy((char *)local_b4,"task_builder",0xc);
  local_b0 = 0xc;
  local_b4[0xc] = 0;
  uVar8 = 1;
  pbVar10 = local_d4;
  pbVar11 = local_b4;
  do {
    bVar1 = *pbVar10;
    bVar12 = bVar1 < *pbVar11;
    if (bVar1 != *pbVar11) {
LAB_00475c3f:
      iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_00475c44;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar10[1];
    bVar12 = bVar1 < pbVar11[1];
    if (bVar1 != pbVar11[1]) goto LAB_00475c3f;
    pbVar10 = pbVar10 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00475c44:
  if (iVar4 == 0) {
LAB_00475de0:
    bVar12 = true;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"task_repairman",0xe);
    ppcVar15 = &local_2c;
    ppbVar13 = &local_d4;
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    uVar8 = 3;
    uVar5 = FUN_00401ec0(ppbVar13,ppcVar15);
    if ((char)uVar5 != '\0') goto LAB_00475de0;
    local_6c = local_60;
    local_68 = 0;
    local_64 = 0x14;
    local_60[0] = (char)uVar5;
    _strncpy(local_6c,"task_janitor",0xc);
    ppcVar15 = &local_6c;
    ppbVar13 = &local_d4;
    local_68 = 0xc;
    local_6c[0xc] = '\0';
    uVar8 = 7;
    uVar5 = FUN_00401ec0(ppbVar13,ppcVar15);
    if ((char)uVar5 != '\0') goto LAB_00475de0;
    local_4c = local_40;
    local_48 = 0;
    local_44 = 0x14;
    local_40[0] = (char)uVar5;
    _strncpy(local_4c,"watergrass",10);
    ppcVar15 = &local_4c;
    ppbVar13 = &local_d4;
    local_48 = 10;
    local_4c[10] = '\0';
    uVar8 = 0xf;
    uVar5 = FUN_00401ec0(ppbVar13,ppcVar15);
    if ((char)uVar5 != '\0') goto LAB_00475de0;
    FUN_00401de0(local_90,"writescript",0xffffffff);
    uVar8 = 0x1f;
    uVar5 = FUN_00401ec0(&local_d4,local_90);
    if (((char)uVar5 != '\0') || (*(int *)(*(int *)((int)local_94 + 200) + 0x814) == 0xd))
    goto LAB_00475de0;
    bVar12 = false;
  }
  this_00 = local_94;
  if (((uVar8 & 0x10) != 0) && (uVar8 = uVar8 & 0xffffffef, 0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
    _free(local_90[0]);
  }
  if (((uVar8 & 8) != 0) && (uVar8 = uVar8 & 0xfffffff7, 0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (((uVar8 & 4) != 0) && (uVar8 = uVar8 & 0xfffffffb, 0x14 < local_64)) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (((uVar8 & 2) != 0) && (uVar8 = uVar8 & 0xfffffffd, 0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (((uVar8 & 1) != 0) && (uVar8 = uVar8 & 0xfffffffe, 0x14 < local_ac)) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  if (bVar12) {
LAB_00475e8d:
    FUN_00475130(this_00,DAT_00e50720);
    uVar5 = FUN_00475040(this_00,DAT_00e50724);
    if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
      _free(local_d4);
    }
    goto LAB_00475ebc;
  }
  local_b4 = local_a8;
  local_a8[0] = 0;
  local_b0 = 0;
  local_ac = 0x14;
  _strncpy((char *)local_b4,"readyposition",0xd);
  ppbVar13 = &local_b4;
  ppbVar14 = &local_d4;
  local_b0 = 0xd;
  local_b4[0xd] = 0;
  uVar5 = FUN_00401ec0(ppbVar14,ppbVar13);
  if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  if ((char)uVar5 == '\0') {
    local_b4 = local_a8;
    local_a8[0] = 0;
    local_b0 = 0;
    local_ac = 0x14;
    _strncpy((char *)local_b4,"changecostume",0xd);
    ppbVar13 = &local_b4;
    ppbVar14 = &local_d4;
    local_b0 = 0xd;
    local_b4[0xd] = 0;
    uVar5 = FUN_00401ec0(ppbVar14,ppbVar13);
    if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
      _free(local_b4);
    }
    if ((char)uVar5 == '\0') {
      if (cVar3 == '\0') {
LAB_004760e8:
        bVar12 = false;
      }
      else {
        FUN_00401de0(&local_b4,"buyfood",0xffffffff);
        uVar5 = FUN_00401ec0(&local_d4,&local_b4);
        uVar9 = uVar8 | 0x20;
        if ((char)uVar5 == '\0') {
          FUN_00401de0(local_90,"overeat",0xffffffff);
          uVar8 = uVar8 | 0x60;
          uVar5 = FUN_00401ec0(&local_d4,local_90);
          uVar9 = uVar8;
          if ((char)uVar5 == '\0') goto LAB_004760e8;
        }
        bVar12 = true;
        uVar8 = uVar9;
      }
      if (((uVar8 & 0x40) != 0) && (uVar8 = uVar8 & 0xffffffbf, 0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
        _free(local_90[0]);
      }
      if (((uVar8 & 0x20) != 0) && (uVar8 = uVar8 & 0xffffffdf, 0x14 < local_ac)) {
                    /* WARNING: Subroutine does not return */
        _free(local_b4);
      }
      if (bVar12) {
        iVar4 = FUN_005998e0(*(int *)((int)this_00 + 200));
        iVar4 = FUN_00ace790(*(int **)(iVar4 + 0x274),0,&TM::TMActionExplainer::RTTI_Type_Descriptor
                             ,&TM::CAssetActionExplainer::RTTI_Type_Descriptor,0);
        if (iVar4 != 0) {
          iVar6 = FUN_008bc6c0(iVar4);
          if (iVar6 == 0) {
LAB_004761b7:
            bVar12 = false;
          }
          else {
            FUN_00401de0(local_90,"facility_catering2",0xffffffff);
            ppvVar16 = local_90;
            uVar8 = uVar8 | 0x80;
            local_4 = CONCAT31(local_4._1_3_,1);
            local_70 = uVar8;
            iVar6 = FUN_008bc6c0(iVar4);
            puVar7 = (undefined4 *)FUN_00528450(iVar6);
            uVar5 = FUN_00401ec0(puVar7,ppvVar16);
            bVar12 = true;
            if ((char)uVar5 == '\0') goto LAB_004761b7;
          }
          local_4 = 0;
          if (((char)uVar8 < '\0') && (uVar8 = uVar8 & 0xffffff7f, 0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
            _free(local_90[0]);
          }
          if (bVar12) {
            FUN_00475130(this_00,DAT_00e50728);
            uVar5 = FUN_00475040(this_00,DAT_010491b8);
            if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
              _free(local_d4);
            }
            goto LAB_00475ebc;
          }
          iVar6 = FUN_008bc6c0(iVar4);
          if (iVar6 == 0) {
LAB_00476279:
            bVar12 = false;
          }
          else {
            FUN_00401de0(local_90,"facility_catering1",0xffffffff);
            ppvVar16 = local_90;
            uVar8 = uVar8 | 0x100;
            local_4 = CONCAT31(local_4._1_3_,2);
            local_70 = uVar8;
            iVar4 = FUN_008bc6c0(iVar4);
            puVar7 = (undefined4 *)FUN_00528450(iVar4);
            uVar5 = FUN_00401ec0(puVar7,ppvVar16);
            bVar12 = true;
            if ((char)uVar5 == '\0') goto LAB_00476279;
          }
          local_4 = 0;
          if (((char)(uVar8 >> 8) != '\0') && (uVar8 = uVar8 & 0xfffffeff, 0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
            _free(local_90[0]);
          }
          if (bVar12) {
            FUN_00475130(this_00,DAT_00e5072c);
            uVar5 = FUN_00475040(this_00,DAT_010491bc);
            if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
              _free(local_d4);
            }
            goto LAB_00475ebc;
          }
        }
      }
      if (cVar3 == '\0') {
LAB_00476351:
        bVar12 = false;
      }
      else {
        FUN_00401de0(&local_b4,"eatonspot",0xffffffff);
        uVar5 = FUN_00401ec0(&local_d4,&local_b4);
        uVar9 = uVar8 | 0x200;
        if ((char)uVar5 == '\0') {
          FUN_00401de0(local_90,"drinkonspot",0xffffffff);
          uVar8 = uVar8 | 0x600;
          uVar5 = FUN_00401ec0(&local_d4,local_90);
          uVar9 = uVar8;
          if ((char)uVar5 == '\0') goto LAB_00476351;
        }
        bVar12 = true;
        uVar8 = uVar9;
      }
      if (((uVar8 & 0x400) != 0) && (uVar8 = uVar8 & 0xfffffbff, 0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
        _free(local_90[0]);
      }
      if (((uVar8 & 0x200) != 0) && (uVar8 = uVar8 & 0xfffffdff, 0x14 < local_ac)) {
                    /* WARNING: Subroutine does not return */
        _free(local_b4);
      }
      if (bVar12) {
        FUN_00475130(this_00,DAT_00e50744);
        uVar5 = FUN_00475040(this_00,DAT_00e50748);
        if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
          _free(local_d4);
        }
        goto LAB_00475ebc;
      }
      if (cVar3 == '\0') {
LAB_00476410:
        bVar12 = false;
      }
      else {
        FUN_00401de0(local_90,"getdrunk",0xffffffff);
        uVar8 = uVar8 | 0x800;
        uVar5 = FUN_00401ec0(&local_d4,local_90);
        bVar12 = true;
        if ((char)uVar5 == '\0') goto LAB_00476410;
      }
      if (((uVar8 & 0x800) != 0) && (uVar8 = uVar8 & 0xfffff7ff, 0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
        _free(local_90[0]);
      }
      if (bVar12) {
        iVar4 = FUN_005998e0(*(int *)((int)this_00 + 200));
        iVar4 = FUN_00ace790(*(int **)(iVar4 + 0x274),0,&TM::TMActionExplainer::RTTI_Type_Descriptor
                             ,&TM::CAssetActionExplainer::RTTI_Type_Descriptor,0);
        if (iVar4 == 0) goto LAB_00476537;
        iVar6 = FUN_008bc6c0(iVar4);
        if (iVar6 == 0) {
LAB_004764c5:
          bVar12 = false;
        }
        else {
          FUN_00401de0(local_90,"facility_bar",0xffffffff);
          ppvVar16 = local_90;
          uVar8 = uVar8 | 0x1000;
          local_4 = CONCAT31(local_4._1_3_,3);
          local_70 = uVar8;
          iVar4 = FUN_008bc6c0(iVar4);
          puVar7 = (undefined4 *)FUN_00528450(iVar4);
          uVar5 = FUN_00401ec0(puVar7,ppvVar16);
          bVar12 = true;
          if ((char)uVar5 == '\0') goto LAB_004764c5;
        }
        local_4 = 0;
        if (((uVar8 & 0x1000) != 0) && (0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
          _free(local_90[0]);
        }
        if (!bVar12) goto LAB_00476537;
      }
      else {
LAB_00476537:
        bVar12 = false;
        if (cVar3 == '\0') {
LAB_00476570:
          bVar2 = false;
        }
        else {
          FUN_00401de0(local_90,"overdrink",0xffffffff);
          bVar12 = true;
          uVar5 = FUN_00401ec0(&local_d4,local_90);
          bVar2 = true;
          if ((char)uVar5 == '\0') goto LAB_00476570;
        }
        if ((bVar12) && (0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
          _free(local_90[0]);
        }
        if (!bVar2) {
          FUN_00401de0(local_90,"rehearse",0xffffffff);
          uVar5 = FUN_00401ec0(&local_d4,local_90);
          if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90[0]);
          }
          if ((char)uVar5 == '\0') {
            FUN_00401de0(local_90,"stunttrain",0xffffffff);
            uVar5 = FUN_00401ec0(&local_d4,local_90);
            if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
              _free(local_90[0]);
            }
            if ((char)uVar5 == '\0') {
              uVar8 = FUN_00403230(*(void **)(param_1 + 0x25c),1);
              if ((char)uVar8 == '\0') {
                uVar8 = FUN_00403230(*(void **)(param_1 + 0x25c),2);
                if ((char)uVar8 == '\0') {
                  if (local_cc < 0x15) {
                    ExceptionList = local_c;
                    return uVar8 & 0xffffff00;
                  }
                    /* WARNING: Subroutine does not return */
                  _free(local_d4);
                }
                FUN_00475130(this_00,DAT_00e50740);
                uVar5 = FUN_00475040(this_00,DAT_010491c8);
                if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
                  _free(local_d4);
                }
              }
              else {
                FUN_00475130(this_00,DAT_00e5073c);
                uVar5 = FUN_00475040(this_00,DAT_010491c4);
                if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
                  _free(local_d4);
                }
              }
            }
            else {
              FUN_00475130(this_00,DAT_00e50704);
              uVar5 = FUN_00475040(this_00,DAT_00e50708);
              if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
                _free(local_d4);
              }
            }
          }
          else {
            FUN_00475130(this_00,DAT_00e506fc);
            uVar5 = FUN_00475040(this_00,DAT_00e50700);
            if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
              _free(local_d4);
            }
          }
          goto LAB_00475ebc;
        }
      }
      FUN_00475130(this_00,DAT_00e50730);
      uVar5 = FUN_00475040(this_00,DAT_010491c0);
      if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
        _free(local_d4);
      }
      goto LAB_00475ebc;
    }
  }
  else {
    iVar4 = (**(code **)(**(int **)((int)this_00 + 200) + 0x1ec))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(**(int **)((int)this_00 + 200) + 0x1ec))();
      iVar4 = FUN_004d6c00(iVar4);
      if (iVar4 != 0) {
        iVar4 = (**(code **)(**(int **)((int)this_00 + 200) + 0x1ec))();
        iVar4 = FUN_004d6c00(iVar4);
        if ((*(int *)(iVar4 + 0x1c0) == 3) &&
           (uVar5 = FUN_00576090(*(int *)((int)this_00 + 200)), (char)uVar5 != '\0')) {
          FUN_00475130(this_00,DAT_00e506f4);
          uVar5 = FUN_00475040(this_00,DAT_00e506f8);
          if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
            _free(local_d4);
          }
          goto LAB_00475ebc;
        }
      }
    }
    cVar3 = (**(code **)(**(int **)((int)this_00 + 200) + 0x1c4))();
    if ((cVar3 != '\0') && (uVar5 = FUN_00576040(*(int *)((int)this_00 + 200)), (char)uVar5 != '\0')
       ) goto LAB_00475e8d;
  }
  FUN_00475130(this_00,DAT_010491ac);
  uVar5 = FUN_00475040(this_00,DAT_00e5070c);
  if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
    _free(local_d4);
  }
LAB_00475ebc:
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_00476750 @ 00476750 ////

undefined4 * FUN_00476750(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca332b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xcc);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00475840(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_004767b0 @ 004767b0 ////

void __fastcall FUN_004767b0(void *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)((int)param_1 + 0x158) + 0x100))();
  if (cVar1 == '\0') {
    FUN_004753a0(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_004767d0 @ 004767d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004767d0(void *param_1)

{
  void *this;
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((DAT_0104a974 == 0) || (*(float *)(DAT_0104a974 + 100) == 0.0)) {
    pfVar3 = (float *)FUN_00475660(param_1,&local_4);
    local_10 = *pfVar3;
    *(float *)((int)param_1 + 0xec) = local_10;
    local_c = *(float *)((int)param_1 + 0xec) - 0.5;
    iVar7 = 1;
    pfVar3 = FUN_00472a40(param_1,&local_8);
    *(float *)((int)param_1 + 0x100) = *pfVar3;
    iVar4 = (**(code **)(**(int **)((int)param_1 + 0x158) + 0x294))();
    uVar5 = FUN_004071e0(iVar4);
    if ((char)uVar5 != '\0') {
      iVar7 = 2;
      local_10 = local_10 + *(float *)((int)param_1 + 0x100);
      local_c = (*(float *)((int)param_1 + 0x100) - 0.5) + local_c;
    }
    pfVar3 = (float *)FUN_004742b0(param_1,&local_4);
    fVar1 = *pfVar3;
    *(float *)((int)param_1 + 0xe8) = fVar1;
    pfVar3 = (float *)FUN_00473000(&local_4,fVar1);
    fVar1 = *pfVar3;
    puVar6 = FUN_00473f90(param_1,&local_8);
    *(undefined4 *)((int)param_1 + 0x104) = *puVar6;
    local_4 = *(float *)((int)param_1 + 0x104);
    local_8 = 0.6;
    pfVar3 = &local_8;
    if (*(float *)((int)param_1 + 0x104) <= 0.6) {
      pfVar3 = &local_4;
    }
    local_4 = (float)(iVar7 + 2);
    this = (void *)((int)param_1 + 0x8c);
    FUN_00567380(this,(*pfVar3 - 0.5) + (fVar1 - 0.5) + local_c +
                      (local_10 + fVar1 + *pfVar3) / (float)(int)local_4);
    pfVar3 = (float *)FUN_0045b9a0(*(void **)((int)param_1 + 0x140),&local_4);
    FUN_005673d0(this,*pfVar3 - 0.5);
    fVar8 = FUN_004729a0((int)param_1);
    local_4 = (float)fVar8;
    *(float *)((int)param_1 + 0xe4) = (float)fVar8;
    FUN_005673d0(this,local_4);
    pfVar3 = (float *)(**(code **)(**(int **)((int)param_1 + 0x158) + 0x1e4))(&local_4);
    fVar1 = *pfVar3;
    if (fVar1 < 1.0) {
      fVar2 = 0.0;
      if (fVar1 < _DAT_00e53304) {
        fVar2 = _DAT_00e506e8;
      }
      FUN_005673d0(this,(_DAT_010491a8 - _DAT_00e506ec) * fVar1 + _DAT_00e506ec + fVar2);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_004769e0 @ 004769e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004769e0(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  char *local_124;
  undefined4 local_120;
  uint local_11c;
  char local_118 [20];
  undefined1 *local_104;
  undefined4 local_100;
  uint local_fc;
  undefined1 local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca357c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar3 = (char *)FUN_00acdb9e(0xe507e4);
  local_104 = local_f8;
  local_f8[0] = 0;
  local_100 = 0;
  local_fc = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_104,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  local_4 = 0;
  FUN_0098fa50(FUN_00476750,&local_104);
  local_4 = 0xffffffff;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  FUN_0098f9e0(0x989790);
  FUN_0098fd30("StressSuspended",&DAT_010491d4,2);
  FUN_0098fd30("BoredomSuspended",&DAT_010491d5,2);
  FUN_00559fb0(local_e4);
  local_124 = local_118;
  local_4 = 1;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"mood",4);
  local_120 = 4;
  local_124[4] = '\0';
  local_4._0_1_ = 2;
  FUN_0055be10(local_e4,&local_124,'\0');
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"WORKINGONAMOVIESTRESS",0x15);
  local_120 = 0x15;
  local_124[0x15] = '\0';
  local_4._0_1_ = 3;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e506f4 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"WORKINGONAMOVIEBOREDOM",0x16);
  local_120 = 0x16;
  local_124[0x16] = '\0';
  local_4._0_1_ = 4;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e506f8 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"REHEARSINGSTRESS",0x10);
  local_120 = 0x10;
  local_124[0x10] = '\0';
  local_4._0_1_ = 5;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e506fc = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"REHEARSINGBOREDOM",0x11);
  local_120 = 0x11;
  local_124[0x11] = '\0';
  local_4._0_1_ = 6;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50700 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"REHEARSINGSTRESS",0x10);
  local_120 = 0x10;
  local_124[0x10] = '\0';
  local_4._0_1_ = 7;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50704 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"REHEARSINGBOREDOM",0x11);
  local_120 = 0x11;
  local_124[0x11] = '\0';
  local_4._0_1_ = 8;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50708 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"WAITINGONAMOVIESTRESS",0x15);
  local_120 = 0x15;
  local_124[0x15] = '\0';
  local_4._0_1_ = 9;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_010491ac = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"WAITINGONAMOVIEBOREDOM",0x16);
  local_120 = 0x16;
  local_124[0x16] = '\0';
  local_4._0_1_ = 10;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e5070c = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"DOINGPRSTRESS",0xd);
  local_120 = 0xd;
  local_124[0xd] = '\0';
  local_4._0_1_ = 0xb;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50710 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"DOINGPRBOREDOM",0xe);
  local_120 = 0xe;
  local_124[0xe] = '\0';
  local_4._0_1_ = 0xc;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50714 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"MAKEOVERSTRESS",0xe);
  local_120 = 0xe;
  local_124[0xe] = '\0';
  local_4._0_1_ = 0xd;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50718 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"MAKEOVERBOREDOM",0xf);
  local_120 = 0xf;
  local_124[0xf] = '\0';
  local_4._0_1_ = 0xe;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_010491b0 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"HEALTHCLINICSTRESS",0x12);
  local_120 = 0x12;
  local_124[0x12] = '\0';
  local_4._0_1_ = 0xf;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e5071c = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"HEALTHCLINICBOREDOM",0x13);
  local_120 = 0x13;
  local_124[0x13] = '\0';
  local_4._0_1_ = 0x10;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_010491b4 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"STAFFJOBSSTRESS",0xf);
  local_120 = 0xf;
  local_124[0xf] = '\0';
  local_4._0_1_ = 0x11;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50720 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"STAFFJOBSBOREDOM",0x10);
  local_120 = 0x10;
  local_124[0x10] = '\0';
  local_4._0_1_ = 0x12;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50724 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"RESTAURANTSTRESS",0x10);
  local_120 = 0x10;
  local_124[0x10] = '\0';
  local_4._0_1_ = 0x13;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50728 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"RESTAURANTBOREDOM",0x11);
  local_120 = 0x11;
  local_124[0x11] = '\0';
  local_4._0_1_ = 0x14;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_010491b8 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"SNACKVANSTRESS",0xe);
  local_120 = 0xe;
  local_124[0xe] = '\0';
  local_4._0_1_ = 0x15;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e5072c = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"SNACKVANBOREDOM",0xf);
  local_120 = 0xf;
  local_124[0xf] = '\0';
  local_4._0_1_ = 0x16;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_010491bc = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"DRINKINGSTRESS",0xe);
  local_120 = 0xe;
  local_124[0xe] = '\0';
  local_4._0_1_ = 0x17;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50730 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"DRINKINGBOREDOM",0xf);
  local_120 = 0xf;
  local_124[0xf] = '\0';
  local_4._0_1_ = 0x18;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_010491c0 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"IDLINGSTRESS",0xc);
  local_120 = 0xc;
  local_124[0xc] = '\0';
  local_4._0_1_ = 0x19;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50734 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"IDLINGBOREDOM",0xd);
  local_120 = 0xd;
  local_124[0xd] = '\0';
  local_4._0_1_ = 0x1a;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50738 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"DETOXSTRESS",0xb);
  local_120 = 0xb;
  local_124[0xb] = '\0';
  local_4._0_1_ = 0x1b;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e5074c = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"DETOXADDICTIONS",0xf);
  local_120 = 0xf;
  local_124[0xf] = '\0';
  local_4._0_1_ = 0x1c;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  _DAT_00e50750 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"DETOXBOREDOM",0xc);
  local_120 = 0xc;
  local_124[0xc] = '\0';
  local_4._0_1_ = 0x1d;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_010491cc = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"TRAILERALONESTRESS",0x12);
  local_120 = 0x12;
  local_124[0x12] = '\0';
  local_4._0_1_ = 0x1e;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e5073c = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"TRAILERALONEBOREDOM",0x13);
  local_120 = 0x13;
  local_124[0x13] = '\0';
  local_4._0_1_ = 0x1f;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_010491c4 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"TRAILERTOGETHERSTRESS",0x15);
  local_120 = 0x15;
  local_124[0x15] = '\0';
  local_4._0_1_ = 0x20;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50740 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"TRAILERTOGETHERBOREDOM",0x16);
  local_120 = 0x16;
  local_124[0x16] = '\0';
  local_4._0_1_ = 0x21;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_010491c8 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"EATDRINKONSPOTSTRESS",0x14);
  local_120 = 0x14;
  local_124[0x14] = '\0';
  local_4._0_1_ = 0x22;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50744 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"EATDRINKONSPOTBOREDOM",0x15);
  local_120 = 0x15;
  local_124[0x15] = '\0';
  local_4._0_1_ = 0x23;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e50748 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"DETOXTIMEDECAY",0xe);
  local_120 = 0xe;
  local_124[0xe] = '\0';
  local_4._0_1_ = 0x24;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  _DAT_00e50754 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"DETOXTIMEFORDETOX",0x11);
  local_120 = 0x11;
  local_124[0x11] = '\0';
  local_4._0_1_ = 0x25;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  _DAT_00e50758 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"CLINICTIMEDECAY",0xf);
  local_120 = 0xf;
  local_124[0xf] = '\0';
  local_4._0_1_ = 0x26;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  _DAT_00e5075c = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"CLINICSURGERYTIME",0x11);
  local_120 = 0x11;
  local_124[0x11] = '\0';
  local_4._0_1_ = 0x27;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  _DAT_00e50760 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"CLINICWEIGHTALTER_KG",0x14);
  local_120 = 0x14;
  local_124[0x14] = '\0';
  local_4._0_1_ = 0x28;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  _DAT_00e50764 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"CLINICCUTENESSALTER",0x13);
  local_120 = 0x13;
  local_124[0x13] = '\0';
  local_4._0_1_ = 0x29;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  _DAT_00e50768 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"CLINICSEXAPPEALALTER",0x14);
  local_120 = 0x14;
  local_124[0x14] = '\0';
  local_4._0_1_ = 0x2a;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  _DAT_00e5076c = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"CLINICAGEMODIFIER",0x11);
  local_120 = 0x11;
  local_124[0x11] = '\0';
  local_4._0_1_ = 0x2b;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  _DAT_010491d0 = (float)fVar5;
  local_4._0_1_ = 1;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  bVar2 = FUN_00541f60(0);
  if (bVar2) {
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"HOSPITALHEALTIME",0x10);
    local_120 = 0x10;
    local_124[0x10] = '\0';
    local_4._0_1_ = 0x2c;
    fVar5 = FUN_00558610(local_e4,&local_124,0.5);
    _DAT_00e50778 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"HOSPITALHEALAMOUNT",0x12);
    local_120 = 0x12;
    local_124[0x12] = '\0';
    local_4._0_1_ = 0x2d;
    fVar5 = FUN_00558610(local_e4,&local_124,0.8);
    _DAT_00e50774 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"HOSPITALBOREDOM",0xf);
    local_120 = 0xf;
    local_124[0xf] = '\0';
    local_4._0_1_ = 0x2e;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0004);
    DAT_00e50770 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"HOSPITALSTRESS",0xe);
    local_120 = 0xe;
    local_124[0xe] = '\0';
    local_4._0_1_ = 0x2f;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0004);
    DAT_00e5077c = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"DETOXADDBUFFER",0xe);
  local_120 = 0xe;
  local_124[0xe] = '\0';
  local_4._0_1_ = 0x30;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  _DAT_00e50784 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"CLINICADDBUFFER",0xf);
  local_120 = 0xf;
  local_124[0xf] = '\0';
  local_4._0_1_ = 0x31;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  _DAT_00e50780 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"MAXIMUMBOREDOMONPROJECT",0x17);
  local_120 = 0x17;
  local_124[0x17] = '\0';
  local_4._0_1_ = 0x32;
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  _DAT_00e50788 = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"ADDICTEDWORKDECAYPERTICK",0x18);
  local_120 = 0x18;
  local_124[0x18] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0x33);
  fVar5 = FUN_00558610(local_e4,&local_124,1.0);
  DAT_00e5078c = (float)fVar5;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00478020 @ 00478020 ////

undefined4 * __thiscall FUN_00478020(void *this,byte param_1)

{
  FUN_00478040(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00478040 @ 00478040 ////

void __fastcall FUN_00478040(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca3598;
  pvStack_c = ExceptionList;
  puVar1 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  param_1[0x2d] = &PTR_FUN_00d16954;
  local_4 = 0;
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2f] = param_1[0x2e];
  }
  if (param_1[0x2e] != 0) {
    *(undefined4 *)(param_1[0x2e] + 4) = param_1[0x2f];
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2f] = param_1[0x2e];
  }
  if (param_1[0x2e] != 0) {
    *(undefined4 *)(param_1[0x2e] + 4) = param_1[0x2f];
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 0x19;
  }
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00478100 @ 00478100 ////

void __fastcall FUN_00478100(void *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  FUN_00474e30((int)param_1);
  uVar1 = FUN_0043b490((uint *)((int)param_1 + 0x94));
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_0053ae00(*(int *)((int)param_1 + 200));
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_0053ae00(*(int *)((int)param_1 + 200));
      uVar4 = FUN_004758f0(param_1,piVar3);
      if ((char)uVar4 != '\0') {
        return;
      }
    }
    iVar2 = FUN_005998e0(*(int *)((int)param_1 + 200));
    if (iVar2 != 0) {
      iVar2 = FUN_005998e0(*(int *)((int)param_1 + 200));
      uVar4 = FUN_00475b30(param_1,iVar2);
      if ((char)uVar4 != '\0') {
        return;
      }
    }
    FUN_00475130(param_1,DAT_00e50734);
    FUN_00475040(param_1,DAT_00e50738);
  }
  return;
}


//// FUNCTION FUN_00478180 @ 00478180 ////

void __fastcall FUN_00478180(undefined4 *param_1)

{
  if ((void *)param_1[0xf] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf]);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_004781b0 @ 004781b0 ////

undefined4 * __fastcall FUN_004781b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca35fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00d1c0a0;
  param_1[0x19] = &PTR_LAB_00d1c080;
  FUN_00567590(param_1 + 0x23,0x3f000000);
  param_1[0x3a] = 0x3f000000;
  param_1[0x3b] = 0x3f000000;
  puVar2 = param_1 + 0x3c;
  *puVar2 = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x3f000000;
  param_1[0x41] = 0x3f000000;
  param_1[0x42] = 0x3f000000;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = param_1 + 0x45;
  param_1[0x45] = &PTR_FUN_00d1bbec;
  param_1[0x4a] = 0;
  param_1[0x4e] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = param_1 + 0x4b;
  param_1[0x4b] = &PTR_FUN_00d1bbfc;
  param_1[0x50] = 0;
  param_1[0x54] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = param_1 + 0x51;
  param_1[0x51] = &PTR_FUN_00d16954;
  param_1[0x56] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined1 *)((int)param_1 + 0x15d) = 0;
  *(undefined1 *)((int)param_1 + 0x15e) = 0;
  *(undefined1 *)((int)param_1 + 0x15f) = 0;
  FUN_0043b510(param_1 + 0x58);
  FUN_0043b510(param_1 + 0x59);
  FUN_0043b510(param_1 + 0x5a);
  iVar1 = 4;
  do {
    *puVar2 = 0x3f000000;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00478310 @ 00478310 ////

void __fastcall FUN_00478310(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca3677;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1c0a0;
  param_1[0x19] = &PTR_LAB_00d1c080;
  puVar2 = (undefined4 *)param_1[0x4a];
  local_4 = 5;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x45] + 4))();
    param_1[0x4a] = 0;
    (**(code **)param_1[0x45])();
  }
  if ((undefined4 *)param_1[0x50] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x50])(1);
  }
  (**(code **)(param_1[0x4b] + 4))();
  param_1[0x50] = 0;
  (**(code **)param_1[0x4b])();
  param_1[0x51] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x53] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x53] = param_1[0x52];
  }
  if (param_1[0x52] != 0) {
    *(undefined4 *)(param_1[0x52] + 4) = param_1[0x53];
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  if ((undefined4 *)param_1[0x53] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x53] = param_1[0x52];
  }
  if (param_1[0x52] != 0) {
    *(undefined4 *)(param_1[0x52] + 4) = param_1[0x53];
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x4b] = &PTR_FUN_00d1bbfc;
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
  param_1[0x45] = &PTR_FUN_00d1bbec;
  if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x47] = param_1[0x46];
  }
  if (param_1[0x46] != 0) {
    *(undefined4 *)(param_1[0x46] + 4) = param_1[0x47];
  }
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x47] = param_1[0x46];
  }
  if (param_1[0x46] != 0) {
    *(undefined4 *)(param_1[0x46] + 4) = param_1[0x47];
  }
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  local_4._0_1_ = 1;
  if ((void *)param_1[0x32] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x32]);
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_00526bb0(param_1 + 0x23);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00478530 @ 00478530 ////

undefined4 * FUN_00478530(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca369b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x16c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004781b0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_00478590 @ 00478590 ////

undefined4 * __thiscall FUN_00478590(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3711;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  puVar7 = (undefined4 *)0x0;
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 100));
  *(undefined4 *)((int)this + 100) = &PTR_LAB_00d1c080;
  local_4._0_1_ = 1;
  *(undefined ***)this = &PTR_FUN_00d1c0a0;
  FUN_00567590((void *)((int)this + 0x8c),0x3f000000);
  *(undefined4 *)((int)this + 0xe8) = 0x3f000000;
  *(undefined4 *)((int)this + 0xec) = 0x3f000000;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0x3f000000;
  *(undefined4 *)((int)this + 0x104) = 0x3f000000;
  *(undefined4 *)((int)this + 0x108) = 0x3f000000;
  *(undefined4 *)((int)this + 0x10c) = 0;
  piVar3 = (int *)((int)this + 0x114);
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(int **)((int)this + 0x120) = piVar3;
  *piVar3 = (int)&PTR_FUN_00d1bbec;
  *(undefined4 *)((int)this + 0x128) = 0;
  piVar4 = (int *)((int)this + 300);
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(int **)((int)this + 0x138) = piVar4;
  *piVar4 = (int)&PTR_FUN_00d1bbfc;
  *(undefined4 *)((int)this + 0x140) = 0;
  piVar1 = (int *)((int)this + 0x148);
  *(undefined4 *)((int)this + 0x150) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 **)((int)this + 0x150) = (undefined4 *)((int)this + 0x144);
  *(undefined4 *)((int)this + 0x144) = &PTR_FUN_00d16954;
  *(int *)((int)this + 0x158) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x14c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4._0_1_ = 5;
  *(undefined1 *)((int)this + 0x15c) = 0;
  *(undefined1 *)((int)this + 0x15d) = 0;
  *(undefined1 *)((int)this + 0x15e) = 0;
  *(undefined1 *)((int)this + 0x15f) = 0;
  FUN_0043b510((undefined4 *)((int)this + 0x160));
  FUN_0043b510((undefined4 *)((int)this + 0x164));
  FUN_0043b510((undefined4 *)((int)this + 0x168));
  pvVar5 = operator_new(0xcc);
  local_4._0_1_ = 6;
  if (pvVar5 == (void *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00475750(pvVar5,param_1);
  }
  local_4._0_1_ = 5;
  (**(code **)(*piVar3 + 4))();
  *(undefined4 **)((int)this + 0x128) = local_14;
  (**(code **)*piVar3)();
  pvVar5 = operator_new(0xe0);
  local_4._0_1_ = 7;
  if (pvVar5 != (void *)0x0) {
    puVar7 = FUN_0045ce00(pvVar5,param_1);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  (**(code **)(*piVar4 + 4))();
  *(undefined4 **)((int)this + 0x140) = puVar7;
  (**(code **)*piVar4)();
  puVar7 = (undefined4 *)((int)this + 0xf0);
  iVar6 = 4;
  do {
    *puVar7 = 0x3f000000;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00478790 @ 00478790 ////

undefined4 * __thiscall FUN_00478790(void *this,byte param_1)

{
  FUN_00478310(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004787b0 @ 004787b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004787b0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  float10 fVar4;
  char *local_1fc;
  undefined4 local_1f8;
  uint local_1f4;
  char local_1f0 [20];
  undefined1 *local_1dc;
  undefined4 local_1d8;
  uint local_1d4;
  undefined1 local_1d0 [20];
  undefined4 local_1bc [54];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca381d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = (char *)FUN_00acdb9e(0xe50844);
  local_1dc = local_1d0;
  local_1d0[0] = 0;
  local_1d8 = 0;
  local_1d4 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_1dc,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0;
  FUN_0098fa50(FUN_00478530,&local_1dc);
  local_4 = 0xffffffff;
  if (0x14 < local_1d4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1dc);
  }
  FUN_0098f9e0(0x989790);
  FUN_0098fc90("StatusComponentStartDate",&DAT_010491d8,4,4);
  FUN_00408130();
  FUN_00559fb0(local_e4);
  local_1fc = local_1f0;
  local_4 = 1;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"relationships",0xd);
  local_1f8 = 0xd;
  local_1fc[0xd] = '\0';
  local_4._0_1_ = 2;
  FUN_0055be10(local_e4,&local_1fc,'\0');
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"Bonds",5);
  local_1f8 = 5;
  local_1fc[5] = '\0';
  local_4._0_1_ = 3;
  FUN_00558a50(local_e4,&local_1fc,(undefined4 *)0x1);
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x20;
  local_1fc = _malloc(0x20);
  _strncpy(local_1fc,"bond_mood_modifier_proportion",0x1d);
  local_1f8 = 0x1d;
  local_1fc[0x1d] = '\0';
  local_4._0_1_ = 4;
  fVar4 = FUN_00558610(local_e4,&local_1fc,0.0);
  if ((float10)0.0 <= fVar4) {
    if ((float10)1.0 < fVar4) {
      fVar4 = (float10)1.0;
    }
  }
  else {
    fVar4 = (float10)0.0;
  }
  _DAT_00e50790 = (float)fVar4;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"mood",4);
  local_1f8 = 4;
  local_1fc[4] = '\0';
  local_4._0_1_ = 5;
  FUN_0055c540(local_1bc,&local_1fc);
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"MOODHEALTHINJURY",0x10);
  local_1f8 = 0x10;
  local_1fc[0x10] = '\0';
  local_4._0_1_ = 8;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,1.25);
  _DAT_00e506e8 = (float)fVar4;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"MOODHEALTHMIN",0xd);
  local_1f8 = 0xd;
  local_1fc[0xd] = '\0';
  local_4._0_1_ = 9;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,-0.4);
  _DAT_00e506ec = (float)fVar4;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"MOODHEALTHMAX",0xd);
  local_1f8 = 0xd;
  local_1fc[0xd] = '\0';
  local_4._0_1_ = 10;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,0.0);
  _DAT_010491a8 = (float)fVar4;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"start dates",0xb);
  local_1f8 = 0xb;
  local_1fc[0xb] = '\0';
  local_4._0_1_ = 0xb;
  FUN_00558a50(local_1bc,&local_1fc,(undefined4 *)0x1);
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"salary",6);
  local_1f8 = 6;
  local_1fc[6] = '\0';
  local_4._0_1_ = 0xc;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,0.0);
  FUN_0043b700(&DAT_010491d8,(float)fVar4);
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"image",5);
  local_1f8 = 5;
  local_1fc[5] = '\0';
  local_4._0_1_ = 0xd;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,0.0);
  FUN_0043b700(&DAT_010491dc,(float)fVar4);
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"trailer",7);
  local_1f8 = 7;
  local_1fc[7] = '\0';
  local_4._0_1_ = 0xe;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,0.0);
  FUN_0043b700(&DAT_010491e0,(float)fVar4);
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"entourage",9);
  local_1f8 = 9;
  local_1fc[9] = '\0';
  local_4._0_1_ = 0xf;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,0.0);
  FUN_0043b700(&DAT_010491e4,(float)fVar4);
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"addictions",10);
  local_1f8 = 10;
  local_1fc[10] = '\0';
  local_4._0_1_ = 0x10;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,0.0);
  FUN_0043b700(&DAT_010491e8,(float)fVar4);
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"workbar",7);
  local_1f8 = 7;
  local_1fc[7] = '\0';
  local_4._0_1_ = 0x11;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,0.0);
  FUN_0043b700(&DAT_010491ec,(float)fVar4);
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"quit",4);
  local_1f8 = 4;
  local_1fc[4] = '\0';
  local_4._0_1_ = 0x12;
  FUN_00558a50(local_1bc,&local_1fc,(undefined4 *)0x1);
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"QUITTHREATDURATION",0x12);
  local_1f8 = 0x12;
  local_1fc[0x12] = '\0';
  local_4._0_1_ = 0x13;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,1.0);
  DAT_00e506e0 = (float)fVar4;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x20;
  local_1fc = _malloc(0x20);
  _strncpy(local_1fc,"QUITCONSIDERDURATION",0x14);
  local_1f8 = 0x14;
  local_1fc[0x14] = '\0';
  local_4._0_1_ = 0x14;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,1.0);
  DAT_00e506e4 = (float)fVar4;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"thresholds",10);
  local_1f8 = 10;
  local_1fc[10] = '\0';
  local_4._0_1_ = 0x15;
  FUN_00558a50(local_1bc,&local_1fc,(undefined4 *)0x1);
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"UI_ORANGE_THRESHOLD",0x13);
  local_1f8 = 0x13;
  local_1fc[0x13] = '\0';
  local_4._0_1_ = 0x16;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,51.0);
  _DAT_00e5a104 = (float)fVar4;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"UI_RED_THRESHOLD",0x10);
  local_1f8 = 0x10;
  local_1fc[0x10] = '\0';
  local_4._0_1_ = 0x17;
  fVar4 = FUN_00558610(local_1bc,&local_1fc,26.0);
  _DAT_00e5a108 = (float)fVar4;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  if ((99.0 <= _DAT_00e5a104) || (0.0 < _DAT_00e5a104)) {
    if (99.0 <= _DAT_00e5a104) {
      _DAT_00e5a104 = 99.0;
    }
  }
  else {
    _DAT_00e5a104 = 0.0;
  }
  if ((99.0 <= _DAT_00e5a108) || (0.0 < _DAT_00e5a108)) {
    if (99.0 <= _DAT_00e5a108) {
      _DAT_00e5a108 = 99.0;
    }
  }
  else {
    _DAT_00e5a108 = 0.0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00558920(local_1bc);
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00479230 @ 00479230 ////

void __fastcall FUN_00479230(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00479260 @ 00479260 ////

void FUN_00479260(void)

{
  return;
}


//// FUNCTION FUN_00479270 @ 00479270 ////

void FUN_00479270(void)

{
  return;
}


//// FUNCTION FUN_00479770 @ 00479770 ////

void __cdecl FUN_00479770(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_004797b0 @ 004797b0 ////

void __cdecl FUN_004797b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_00479810 @ 00479810 ////

void __cdecl FUN_00479810(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_004798c0 @ 004798c0 ////

void __cdecl FUN_004798c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-4] = param_2[-4];
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -4;
    param_3 = param_3 + -4;
  }
  return;
}


//// FUNCTION FUN_004799f0 @ 004799f0 ////

undefined4 * __thiscall FUN_004799f0(void *this,byte param_1)

{
  if (10 < *(uint *)((int)this + 8)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)this);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00479a40 @ 00479a40 ////

void __fastcall FUN_00479a40(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca383b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_0046f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(this,0x1fd);
  uVar2 = FUN_006a36e0();
  (**(code **)(this[0xe] + 4))();
  this[0x13] = uVar2;
  (**(code **)this[0xe])();
  (**(code **)(this[0x14] + 4))();
  this[0x19] = param_1;
  (**(code **)this[0x14])();
  FUN_005e9280(DAT_0104d82c,extraout_EDX,this);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00479af0 @ 00479af0 ////

undefined1 __fastcall FUN_00479af0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    cVar1 = FUN_005b3c80(*(int *)(param_1 + 0xec));
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}


//// FUNCTION FUN_00479b10 @ 00479b10 ////

void __fastcall FUN_00479b10(void *param_1)

{
  void *this;
  
  this = *(void **)((int)param_1 + 0xec);
  if (this != (void *)0x0) {
    CProject_GetQualityWithAwardBoost(this,(float *)&stack0xfffffff8);
    CBasicReview_SelectComments(param_1,(float)this);
  }
  return;
}


//// FUNCTION FUN_00479b30 @ 00479b30 ////

undefined4 __fastcall FUN_00479b30(int param_1)

{
  float *pfVar1;
  float local_c;
  undefined4 local_8;
  float local_4;
  
  pfVar1 = (float *)FUN_005b1050(*(void **)(param_1 + 0xec),&local_8);
  local_c = *pfVar1;
  pfVar1 = (float *)FUN_005b2bd0(*(void **)(param_1 + 0xec),&local_4);
  local_c = local_c + *pfVar1;
  if (0.0 <= local_c) {
    if (local_c <= 1.0) {
      if (local_c < 0.0) {
        local_c = 0.0;
      }
      else if (1.0 < local_c) {
        local_c = 1.0;
      }
    }
    else {
      local_c = 1.0;
    }
  }
  else {
    local_c = 0.0;
  }
  pfVar1 = (float *)CProject_GetQualityWithAwardBoost(*(void **)(param_1 + 0xec),&local_4);
  if (local_c <= *pfVar1) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00479e80 @ 00479e80 ////

undefined4 __cdecl FUN_00479e80(undefined4 *param_1,undefined4 *param_2)

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
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 != 0);
}


//// FUNCTION FUN_00479ee0 @ 00479ee0 ////

void __cdecl FUN_00479ee0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00479f10 @ 00479f10 ////

void __cdecl FUN_00479f10(int *param_1,int *param_2,undefined4 *param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  void *pvVar2;
  
  do {
    if (param_1 == param_2) {
      return;
    }
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
    param_1 = param_1 + 8;
  } while( true );
}


//// FUNCTION FUN_00479fb0 @ 00479fb0 ////

void __cdecl FUN_00479fb0(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


//// FUNCTION FUN_0047a030 @ 0047a030 ////

int * __cdecl FUN_0047a030(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  void *pvVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = param_1[1];
    _Source = (wchar_t *)*param_1;
    if ((uint)param_3[2] <= _Count) {
      if (10 < (uint)param_3[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar1 = _Count + 0x20 & 0xffffffe0;
      param_3[2] = uVar1;
      pvVar2 = _malloc(uVar1 * 2);
      *param_3 = (int)pvVar2;
    }
    _wcsncpy((wchar_t *)*param_3,_Source,_Count);
    param_3[1] = _Count;
    *(undefined2 *)(*param_3 + _Count * 2) = 0;
    param_1 = param_1 + 8;
    param_3 = param_3 + 8;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_0047a0b0 @ 0047a0b0 ////

int * __cdecl FUN_0047a0b0(int param_1,int param_2,int *param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = *(uint *)(param_2 + -0x1c);
    _Source = *(wchar_t **)(param_2 + -0x20);
    param_2 = param_2 + -0x20;
    piVar3 = param_3 + -8;
    if ((uint)param_3[-6] <= _Count) {
      if (10 < (uint)param_3[-6]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar3);
      }
      uVar1 = _Count + 0x20 & 0xffffffe0;
      param_3[-6] = uVar1;
      pvVar2 = _malloc(uVar1 * 2);
      *piVar3 = (int)pvVar2;
    }
    _wcsncpy((wchar_t *)*piVar3,_Source,_Count);
    param_3[-7] = _Count;
    *(undefined2 *)(*piVar3 + _Count * 2) = 0;
    param_3 = piVar3;
  } while (param_2 != param_1);
  return piVar3;
}


//// FUNCTION FUN_0047a1a0 @ 0047a1a0 ////

void __cdecl FUN_0047a1a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    param_3 = param_3 + 4;
  }
  return;
}


//// FUNCTION FUN_0047a1e0 @ 0047a1e0 ////

void __cdecl FUN_0047a1e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0047a270 @ 0047a270 ////

void __fastcall FUN_0047a270(int *param_1)

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
  puStack_8 = &LAB_00ca3858;
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


//// FUNCTION FUN_0047a340 @ 0047a340 ////

void __fastcall FUN_0047a340(int param_1)

{
  undefined4 *puVar1;
  void *local_20 [2];
  uint local_18;
  
  if (*(void **)(param_1 + 0xec) != (void *)0x0) {
    puVar1 = FUN_0045f620(*(void **)(param_1 + 0xec),local_20);
    FUN_004036d0((void *)(param_1 + 0xf0),(wchar_t *)*puVar1,puVar1[1]);
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  return;
}


//// FUNCTION FUN_0047a390 @ 0047a390 ////

void __fastcall FUN_0047a390(int param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_20 [2];
  uint local_18;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    this = (void *)FUN_005b2770(*(int *)(param_1 + 0xec));
    if (this == (void *)0x0) {
      puVar1 = FUN_009b5030(local_20,&PTR_DAT_00e5085c);
      FUN_004036d0((void *)(param_1 + 0x110),(wchar_t *)*puVar1,puVar1[1]);
      if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
    }
    else {
      puVar1 = FUN_00449f50(this,local_20);
      FUN_004036d0((void *)(param_1 + 0x110),(wchar_t *)*puVar1,puVar1[1]);
      if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0047a420 @ 0047a420 ////

void __fastcall FUN_0047a420(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  void *local_20;
  uint uStack_1c;
  uint local_18;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    piVar1 = (int *)FUN_005b2780(*(int *)(param_1 + 0xec));
    if (piVar1 == (int *)0x0) {
      puVar2 = FUN_009b5030(&local_20,&PTR_DAT_00e5087c);
      FUN_004036d0((void *)(param_1 + 0x130),(wchar_t *)*puVar2,puVar2[1]);
      if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
    }
    else {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x5c))(&local_20);
      FUN_004036d0((void *)(param_1 + 0x130),(wchar_t *)*puVar2,puVar2[1]);
      if (10 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
        _free(unaff_ESI);
      }
    }
  }
  return;
}


//// FUNCTION CMovieReview_AddComment @ 0047a4b0 ////

void __thiscall
CMovieReview_AddComment
          (void *this,float param_1,float param_2,undefined4 *param_3,char param_4,int param_5)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  void *this_00;
  undefined4 extraout_ECX;
  int iVar4;
  undefined4 uVar5;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca388b;
  local_c = ExceptionList;
  iVar4 = (int)param_2 * 0x48;
  fVar1 = *(float *)(&DAT_01049214 + iVar4);
  fVar2 = *(float *)(&DAT_01049218 + iVar4);
  ExceptionList = &local_c;
  puVar3 = FUN_004312e0(local_2c,(undefined4 *)(&DAT_01049228 + iVar4),"_TOOLTIP");
  local_4 = 0;
  FUN_009b5030(local_4c,puVar3);
  local_4._0_1_ = 2;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  this_00 = operator_new(0xbc);
  local_4._0_1_ = 3;
  if (this_00 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar5 = extraout_ECX;
    FUN_00407070(&stack0xffffff98,param_1);
    puVar3 = FUN_004aac60(this_00,((param_1 + param_1) - 1.0) * fVar1 + fVar2,param_3,local_4c,uVar5
                         );
  }
  param_3 = *(undefined4 **)(&DAT_0104921c + iVar4);
  param_2 = *(float *)(&DAT_01049220 + iVar4);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (param_5 == 0) {
    param_2 = param_1 - 1e-05;
    param_3 = (undefined4 *)param_2;
  }
  else if (param_5 == 1) {
    param_3 = (undefined4 *)(param_1 - 1e-05);
    param_2 = param_1 + 1e-05;
  }
  else if (param_5 == 2) {
    param_2 = param_1 + 1e-05;
    param_3 = (undefined4 *)param_2;
  }
  CBasicReview_AddCommentToBin
            (this,param_1,(float)param_3,param_2,(int)puVar3,*(int *)(&DAT_01049210 + iVar4),param_4
            );
  if (local_44 < 0xb) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c[0]);
}


//// FUNCTION FUN_0047a630 @ 0047a630 ////

undefined4 * __thiscall
FUN_0047a630(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  size_t sVar1;
  undefined4 *puVar2;
  wchar_t *local_40;
  uint local_3c;
  uint local_38;
  wchar_t local_34 [10];
  void *local_20 [2];
  uint local_18;
  
  local_40 = local_34;
  local_34[0] = L'\0';
  local_3c = 0;
  local_38 = 10;
  sVar1 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(&local_40,L"<phrasebook>",sVar1);
  FUN_0040cae0(&local_40,(wchar_t *)*param_2,param_2[1]);
  if (param_3 != (undefined4 *)0x0) {
    sVar1 = FUN_00ace02d(L"<phrase key=starname>");
    FUN_0040cae0(&local_40,L"<phrase key=starname>",sVar1);
    FUN_0040cae0(&local_40,(wchar_t *)*param_3,param_3[1]);
    sVar1 = FUN_00ace02d(L"</phrase>");
    FUN_0040cae0(&local_40,L"</phrase>",sVar1);
  }
  if (param_4 != (undefined4 *)0x0) {
    sVar1 = FUN_00ace02d(L"<phrase key=studioname>");
    FUN_0040cae0(&local_40,L"<phrase key=studioname>",sVar1);
    FUN_0040cae0(&local_40,(wchar_t *)*param_4,param_4[1]);
    sVar1 = FUN_00ace02d(L"</phrase>");
    FUN_0040cae0(&local_40,L"</phrase>",sVar1);
  }
  puVar2 = FUN_0045f620(*(void **)((int)this + 0xec),local_20);
  sVar1 = FUN_00ace02d(L"<phrase key=moviename>");
  FUN_0040cae0(&local_40,L"<phrase key=moviename>",sVar1);
  FUN_0040cae0(&local_40,(wchar_t *)*puVar2,puVar2[1]);
  sVar1 = FUN_00ace02d(L"</phrase>");
  FUN_0040cae0(&local_40,L"</phrase>",sVar1);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  sVar1 = FUN_00ace02d(L"</phrasebook>");
  FUN_0040cae0(&local_40,L"</phrasebook>",sVar1);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_40,local_3c);
  if (10 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  return param_1;
}


//// FUNCTION FUN_0047a800 @ 0047a800 ////

void __fastcall FUN_0047a800(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_70;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca38c0;
  local_c = ExceptionList;
  if ((*(int *)((int)param_1 + 0xec) != 0) &&
     (ExceptionList = &local_c, cVar1 = FUN_005b3c80(*(int *)((int)param_1 + 0xec)), cVar1 == '\0'))
  {
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"facility_research",0x11);
    local_68 = 0x11;
    local_6c[0x11] = '\0';
    local_4 = 0;
    uVar2 = thunk_FUN_009623a0(&local_6c);
    cVar1 = FUN_00960f30(uVar2);
    local_4 = 0xffffffff;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (cVar1 != '\0') {
      piVar3 = (int *)GetPlayerStudio();
      puVar4 = (undefined4 *)FUN_005b0ea0(*(void **)((int)param_1 + 0xec),&local_70);
      cVar1 = (**(code **)(*piVar3 + 0x88))(*puVar4);
      if (cVar1 != '\0') {
        FUN_00403de0(apvStack_2c,(undefined4 *)&DAT_01049e88);
        local_4 = 1;
        FUN_009b7190(apvStack_4c,apvStack_2c,'\0',0);
        FUN_0047a630(param_1,&local_6c,apvStack_4c,(undefined4 *)0x0,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,3);
        CMovieReview_AddComment(param_1,1.0,6.16571e-44,&local_6c,'\0',3);
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047a9b0 @ 0047a9b0 ////

void __fastcall FUN_0047a9b0(void *param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  float local_a0;
  float local_9c;
  int local_98;
  int local_94;
  int local_90;
  void *local_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3916;
  local_c = ExceptionList;
  iVar6 = 0;
  if ((((*(int *)((int)param_1 + 0xec) != 0) &&
       (ExceptionList = &local_c, cVar3 = FUN_005b3c80(*(int *)((int)param_1 + 0xec)), cVar3 == '\0'
       )) && (piVar4 = (int *)GetPlayerStudio(), piVar4 != (int *)0x0)) &&
     (uVar5 = FUN_005b2720(), DAT_0104a034 <= uVar5)) {
    local_9c = -3.4028235e+38;
    local_a0 = 3.4028235e+38;
    local_94 = 0;
    PlayerMovies_Begin(&local_98);
    PlayerMovies_End(&local_90);
    for (; local_98 != local_90; local_98 = *(int *)(local_98 + 4)) {
      iVar2 = *(int *)(local_98 + 8);
      fVar1 = *(float *)(iVar2 + 0xb0);
      if (local_9c < fVar1) {
        iVar6 = iVar2;
        local_9c = fVar1;
      }
      if (fVar1 < local_a0) {
        local_a0 = fVar1;
        local_94 = iVar2;
      }
    }
    iVar2 = *(int *)((int)param_1 + 0xec);
    if ((*(int *)(iVar2 + 0x330) == 0) || (*(int *)(iVar2 + 0x330) != iVar6)) {
      if (*(int *)(iVar2 + 0x330) == 0) {
        ExceptionList = local_c;
        return;
      }
      if (*(int *)(iVar2 + 0x330) != local_94) {
        ExceptionList = local_c;
        return;
      }
      FUN_004312e0(local_4c,(undefined4 *)&DAT_0104a038,"_LOW");
      local_4 = 4;
      FUN_009b7190(local_8c,local_4c,'\0',0);
      local_4._0_1_ = 5;
      (**(code **)(*piVar4 + 0x20))(local_6c);
      FUN_0047a630(param_1,local_2c,local_8c,(undefined4 *)0x0,local_6c);
      local_4 = CONCAT31(local_4._1_3_,7);
      CMovieReview_AddComment(param_1,local_a0,7.00649e-44,local_2c,'\0',2);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
    }
    else {
      FUN_004312e0(local_2c,(undefined4 *)&DAT_0104a038,"_HIGH");
      local_4 = 0;
      FUN_009b7190(local_6c,local_2c,'\0',0);
      local_4._0_1_ = 1;
      (**(code **)(*piVar4 + 0x20))(local_8c);
      FUN_0047a630(param_1,local_4c,local_6c,(undefined4 *)0x0,local_8c);
      local_4 = CONCAT31(local_4._1_3_,3);
      CMovieReview_AddComment(param_1,local_9c,7.00649e-44,local_4c,'\0',0);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
      local_4c[0] = local_2c[0];
      uStack_44 = uStack_24;
      if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
    }
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047acb0 @ 0047acb0 ////

int __fastcall FUN_0047acb0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  float *pfVar6;
  void *pvVar7;
  undefined4 uVar8;
  byte *pbVar9;
  bool bVar10;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3928;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xec) == 0) {
    return 0;
  }
  local_44 = 0;
  ExceptionList = &local_c;
  iVar2 = GetPlayerStudio();
  iVar3 = FUN_005b6b90(*(int *)(param_1 + 0xec));
  if (iVar2 != 0) {
    puVar4 = (undefined4 *)FUN_00449b40(iVar3);
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    FUN_004015d0(&local_2c,(char *)*puVar4,puVar4[1]);
    local_4 = 0;
    PlayerMovies_Begin(&local_48);
    PlayerMovies_End(&local_40);
    if (local_48 != local_40) {
      do {
        iVar2 = *(int *)(local_48 + 8);
        puVar4 = (undefined4 *)FUN_00449b40(iVar3);
        pbVar9 = *(byte **)(iVar2 + 0x90);
        pbVar5 = (byte *)*puVar4;
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_0047ada6:
            iVar2 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0047adab;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_0047ada6;
          pbVar5 = pbVar5 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar2 = 0;
LAB_0047adab:
        if (iVar2 == 0) {
          pvVar7 = *(void **)(param_1 + 0xec);
          pfVar6 = (float *)FUN_0043b520(local_38,0.0);
          pvVar7 = (void *)FUN_005b0ea0(pvVar7,&local_34);
          uVar8 = FUN_0043b640(pvVar7,pfVar6);
          if ((char)uVar8 == '\0') {
            local_3c = *(undefined4 *)(*(int *)(local_48 + 8) + 0xc0);
            pfVar6 = (float *)FUN_005b0ea0(*(void **)(param_1 + 0xec),&local_30);
            uVar8 = FUN_0043b6c0(&local_3c,pfVar6);
            if ((char)uVar8 == '\0') goto LAB_0047ae0a;
          }
          local_44 = local_44 + 1;
        }
LAB_0047ae0a:
        local_48 = *(int *)(local_48 + 4);
      } while (local_48 != local_40);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return local_44;
}


//// FUNCTION FUN_0047aee0 @ 0047aee0 ////

undefined4 * __cdecl FUN_0047aee0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char *local_20;
  uint local_1c;
  uint local_18;
  char local_14 [20];
  
  local_20 = local_14;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x14;
  FUN_004015d0(&local_20,(char *)*param_2,param_2[1]);
  FUN_004073f0(&local_20,(char *)*param_3,param_3[1]);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_20,local_1c);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_0047af90 @ 0047af90 ////

void * FUN_0047af90(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0047b000 @ 0047b000 ////

void __cdecl FUN_0047b000(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    param_1 = param_1 + 4;
  }
  return;
}


//// FUNCTION FUN_0047b040 @ 0047b040 ////

void __cdecl FUN_0047b040(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0047b130 @ 0047b130 ////

int * __cdecl FUN_0047b130(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  void *pvVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (int *)0x0) {
      *param_3 = (int)(param_3 + 3);
      *(undefined2 *)(param_3 + 3) = 0;
      param_3[1] = 0;
      param_3[2] = 10;
      _Count = param_1[1];
      _Source = (wchar_t *)*param_1;
      if (9 < _Count) {
        uVar1 = _Count + 0x20 >> 5;
        param_3[2] = uVar1 << 5;
        pvVar2 = _malloc(uVar1 * 0x40);
        *param_3 = (int)pvVar2;
      }
      _wcsncpy((wchar_t *)*param_3,_Source,_Count);
      param_3[1] = _Count;
      *(undefined2 *)(*param_3 + _Count * 2) = 0;
    }
    param_1 = param_1 + 8;
    param_3 = param_3 + 8;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_0047b200 @ 0047b200 ////

undefined4 * __thiscall
FUN_0047b200(void *this,undefined4 *param_1,float param_2,int param_3,int param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined1 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84 [20];
  wchar_t *local_70;
  uint local_6c;
  uint local_68;
  wchar_t local_64 [10];
  undefined4 local_50;
  void *local_4c [2];
  uint local_44;
  undefined1 *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca395b;
  local_c = ExceptionList;
  local_70 = local_64;
  local_50 = 0;
  local_64[0] = L'\0';
  local_6c = 0;
  local_68 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  piVar1 = FUN_0040e0c0((int *)&local_90,param_4,param_2);
  FUN_0047aee0(local_4c,(undefined4 *)(&DAT_01049228 + param_3 * 0x48),piVar1);
  local_4._0_1_ = 1;
  if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  if (param_5 == '\0') {
    puVar3 = FUN_009b7190(local_2c,local_4c,'\0',0);
    FUN_004036d0(&local_70,(wchar_t *)*puVar3,puVar3[1]);
    if (local_24 < 0xb) goto LAB_0047b378;
  }
  else {
    local_90 = local_84;
    local_84[0] = 0;
    local_8c = 0;
    local_88 = 0x14;
    FUN_004015d0(&local_90,PTR_DAT_00e5089c,DAT_00e508a0);
    local_4._0_1_ = 2;
    iVar2 = FUN_005b2770(*(int *)((int)this + 0xec));
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_00449b40(iVar2);
      FUN_004015d0(&local_90,(char *)*puVar3,puVar3[1]);
    }
    puVar4 = FUN_009b7750(local_4c,0xffffffff,&local_90);
    if (puVar4 != (undefined *)0x0) {
      FUN_004036d0(&local_70,*(wchar_t **)(puVar4 + 0x40),*(uint *)(puVar4 + 0x44));
    }
    local_2c[0] = local_90;
    if (local_88 < 0x15) {
LAB_0047b378:
      *param_1 = param_1 + 3;
      *(undefined2 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 10;
      FUN_004036d0(param_1,local_70,local_6c);
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (local_68 < 0xb) {
        ExceptionList = local_c;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c[0]);
}


//// FUNCTION FUN_0047b3f0 @ 0047b3f0 ////

void __fastcall FUN_0047b3f0(void *param_1)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined **ppuVar4;
  int *piVar5;
  float10 fVar6;
  undefined2 *local_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined2 local_c0 [10];
  void *local_ac [2];
  uint uStack_a4;
  void *local_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca39a1;
  local_c = ExceptionList;
  if (((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
     (ExceptionList = &local_c, iVar1 = FUN_005b2780(*(int *)((int)param_1 + 0xec)), iVar1 != 0)) {
    this = *(void **)((int)param_1 + 0xec);
    iVar1 = FUN_005b2780((int)this);
    uVar2 = FUN_005b7620(this,iVar1);
    if ((char)uVar2 != '\0') {
      iVar1 = *(int *)((int)param_1 + 0xec);
      fVar3 = (float)FUN_005b2780(iVar1);
      fVar6 = FUN_005b7570(iVar1,fVar3);
      local_cc = local_c0;
      local_c0[0] = 0;
      local_c8 = 0;
      local_c4 = 10;
      local_4 = 0;
      iVar1 = FUN_005b2780(*(int *)((int)param_1 + 0xec));
      ppuVar4 = &PTR_DAT_00e508dc;
      if (*(int *)(iVar1 + 0x4a0) != 0) {
        ppuVar4 = &PTR_DAT_00e508bc;
      }
      FUN_00403de0(local_6c,ppuVar4);
      local_4._0_1_ = 1;
      piVar5 = FUN_0040e0c0((int *)local_2c,0x1049488,(float)fVar6);
      FUN_0047aee0(local_8c,(undefined4 *)&DAT_01049468,piVar5);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      iVar1 = FUN_009b5f90(local_8c,0xffffffff,local_6c);
      if (iVar1 != 0) {
        FUN_00403e70(&local_cc,(undefined4 *)(iVar1 + 0x40));
      }
      piVar5 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xec));
      (**(code **)(*piVar5 + 0x5c))(local_ac);
      FUN_0047a630(param_1,apvStack_4c,&local_cc,local_ac,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,4);
      CMovieReview_AddComment(param_1,(float)fVar6,1.12104e-44,apvStack_4c,'\x01',3);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
      if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac[0]);
      }
      if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
      if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_cc);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047b670 @ 0047b670 ////

undefined4 * FUN_0047b670(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0047b760 @ 0047b760 ////

void __cdecl FUN_0047b760(int *param_1,int param_2,undefined4 *param_3)

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
    }
    param_1 = param_1 + 8;
  }
  return;
}


//// FUNCTION FUN_0047b850 @ 0047b850 ////

undefined4 * __thiscall
FUN_0047b850(void *this,undefined4 *param_1,float param_2,int param_3,char param_4)

{
  FUN_0047b200(this,param_1,param_2,param_3,(int)(&DAT_01049248 + param_3 * 0x48),param_4);
  return param_1;
}


//// FUNCTION FUN_0047b890 @ 0047b890 ////

void __fastcall FUN_0047b890(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  int iVar12;
  float local_b4;
  undefined2 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined2 local_a0 [10];
  void *apvStack_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca39de;
  local_c = ExceptionList;
  if ((((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
      (ExceptionList = &local_c, iVar2 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar2)) &&
     (iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar2 != 0)) {
    iVar8 = *(int *)(iVar2 + 100);
    iVar2 = *(int *)(iVar2 + 0x68);
    piVar7 = (int *)0x0;
    local_b4 = -3.4028235e+38;
    if (iVar8 != iVar2) {
      do {
        iVar1 = *(int *)(iVar8 + 0x14);
        if (((iVar1 != 0) && (iVar3 = FUN_005a6470(iVar1), iVar3 != 0)) &&
           (uVar4 = FUN_005a6140(iVar1), (char)uVar4 != '\0')) {
          iVar12 = 0;
          pTVar11 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar10 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar3 = 0;
          piVar5 = (int *)FUN_005a6470(iVar1);
          piVar5 = (int *)FUN_00ace790(piVar5,iVar3,pTVar10,pTVar11,iVar12);
          if (((piVar5 != (int *)0x0) &&
              (uVar4 = FUN_005b7620(*(void **)((int)param_1 + 0xec),(int)piVar5),
              (char)uVar4 != '\0')) &&
             (fVar9 = FUN_005b7570(*(int *)((int)param_1 + 0xec),(float)piVar5),
             (float10)local_b4 < fVar9)) {
            local_b4 = (float)fVar9;
            piVar7 = piVar5;
          }
        }
        iVar8 = iVar8 + 0x18;
      } while (iVar8 != iVar2);
      if ((piVar7 != (int *)0x0) && (*DAT_01049324 <= local_b4)) {
        local_ac = local_a0;
        local_a0[0] = 0;
        local_a8 = 0;
        local_a4 = 10;
        local_4 = 0;
        ppuVar6 = &PTR_DAT_00e508dc;
        if (piVar7[0x128] != 0) {
          ppuVar6 = &PTR_DAT_00e508bc;
        }
        FUN_00403de0(local_2c,ppuVar6);
        FUN_00403de0(local_6c,(undefined4 *)&DAT_01049300);
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar2 = FUN_009b5f90(local_6c,0xffffffff,local_2c);
        if (iVar2 != 0) {
          FUN_00403e70(&local_ac,(undefined4 *)(iVar2 + 0x40));
        }
        (**(code **)(*piVar7 + 0x5c))(local_4c);
        FUN_0047a630(param_1,apvStack_8c,&local_ac,local_4c,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,4);
        CMovieReview_AddComment(param_1,local_b4,4.2039e-45,apvStack_8c,'\x01',3);
        if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_8c[0]);
        }
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047baf0 @ 0047baf0 ////

void __fastcall FUN_0047baf0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  int iVar12;
  float local_b4;
  undefined2 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined2 local_a0 [10];
  void *apvStack_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3a1e;
  local_c = ExceptionList;
  if ((((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
      (ExceptionList = &local_c, iVar2 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar2)) &&
     (iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar2 != 0)) {
    iVar8 = *(int *)(iVar2 + 100);
    iVar2 = *(int *)(iVar2 + 0x68);
    piVar7 = (int *)0x0;
    local_b4 = 3.4028235e+38;
    if (iVar8 != iVar2) {
      do {
        iVar1 = *(int *)(iVar8 + 0x14);
        if (((iVar1 != 0) && (iVar3 = FUN_005a6470(iVar1), iVar3 != 0)) &&
           (uVar4 = FUN_005a6140(iVar1), (char)uVar4 != '\0')) {
          iVar12 = 0;
          pTVar11 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar10 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar3 = 0;
          piVar5 = (int *)FUN_005a6470(iVar1);
          piVar5 = (int *)FUN_00ace790(piVar5,iVar3,pTVar10,pTVar11,iVar12);
          if (((piVar5 != (int *)0x0) &&
              (uVar4 = FUN_005b7620(*(void **)((int)param_1 + 0xec),(int)piVar5),
              (char)uVar4 != '\0')) &&
             (fVar9 = FUN_005b7570(*(int *)((int)param_1 + 0xec),(float)piVar5),
             fVar9 < (float10)local_b4)) {
            local_b4 = (float)fVar9;
            piVar7 = piVar5;
          }
        }
        iVar8 = iVar8 + 0x18;
      } while (iVar8 != iVar2);
      if ((piVar7 != (int *)0x0) && (local_b4 < *DAT_0104936c != (local_b4 == *DAT_0104936c))) {
        local_ac = local_a0;
        local_a0[0] = 0;
        local_a8 = 0;
        local_a4 = 10;
        local_4 = 0;
        ppuVar6 = &PTR_DAT_00e508dc;
        if (piVar7[0x128] != 0) {
          ppuVar6 = &PTR_DAT_00e508bc;
        }
        FUN_00403de0(local_2c,ppuVar6);
        FUN_00403de0(local_6c,(undefined4 *)&DAT_01049348);
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar2 = FUN_009b5f90(local_6c,0xffffffff,local_2c);
        if (iVar2 != 0) {
          FUN_00403e70(&local_ac,(undefined4 *)(iVar2 + 0x40));
        }
        (**(code **)(*piVar7 + 0x5c))(local_4c);
        FUN_0047a630(param_1,apvStack_8c,&local_ac,local_4c,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,4);
        CMovieReview_AddComment(param_1,local_b4,5.60519e-45,apvStack_8c,'\x01',3);
        if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_8c[0]);
        }
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047bd50 @ 0047bd50 ////

void __fastcall FUN_0047bd50(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  int iVar13;
  int *local_bc;
  float local_b8;
  float local_b4;
  undefined2 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined2 local_a0 [10];
  void *local_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3a5e;
  local_c = ExceptionList;
  if (*(char *)((int)param_1 + 0x60) == '\0') {
    piVar7 = (int *)0x0;
    if (((*(int *)((int)param_1 + 0xec) != 0) &&
        (ExceptionList = &local_c, iVar2 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar2))
       && (iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar2 != 0)) {
      iVar9 = *(int *)(iVar2 + 100);
      iVar2 = *(int *)(iVar2 + 0x68);
      local_b4 = -3.4028235e+38;
      local_b8 = -3.4028235e+38;
      local_bc = (int *)0x0;
      if (iVar9 != iVar2) {
        do {
          iVar1 = *(int *)(iVar9 + 0x14);
          piVar8 = piVar7;
          if (((iVar1 != 0) && (iVar3 = FUN_005a6470(iVar1), iVar3 != 0)) &&
             (uVar4 = FUN_005a6140(iVar1), (char)uVar4 != '\0')) {
            iVar13 = 0;
            pTVar12 = &TM::CStar::RTTI_Type_Descriptor;
            pTVar11 = &TM::CStaff::RTTI_Type_Descriptor;
            iVar3 = 0;
            piVar5 = (int *)FUN_005a6470(iVar1);
            piVar5 = (int *)FUN_00ace790(piVar5,iVar3,pTVar11,pTVar12,iVar13);
            if ((piVar5 != (int *)0x0) &&
               (uVar4 = FUN_005b7620(*(void **)((int)param_1 + 0xec),(int)piVar5),
               (char)uVar4 != '\0')) {
              fVar10 = FUN_005b7570(*(int *)((int)param_1 + 0xec),(float)piVar5);
              if (fVar10 <= (float10)local_b4) {
                if ((float10)local_b8 < fVar10) {
                  local_b8 = (float)fVar10;
                  local_bc = piVar5;
                }
              }
              else {
                local_b8 = local_b4;
                piVar8 = piVar5;
                local_bc = piVar7;
                local_b4 = (float)fVar10;
              }
            }
          }
          iVar9 = iVar9 + 0x18;
          piVar7 = piVar8;
        } while (iVar9 != iVar2);
        if (((piVar8 != (int *)0x0) && (local_bc != (int *)0x0)) &&
           (*DAT_010493b4 <= local_b4 - local_b8)) {
          local_ac = local_a0;
          local_a0[0] = 0;
          local_a8 = 0;
          local_a4 = 10;
          local_4 = 0;
          ppuVar6 = &PTR_DAT_00e508dc;
          if (piVar8[0x128] != 0) {
            ppuVar6 = &PTR_DAT_00e508bc;
          }
          FUN_00403de0(local_2c,ppuVar6);
          FUN_00403de0(local_6c,(undefined4 *)&DAT_01049390);
          local_4 = CONCAT31(local_4._1_3_,2);
          iVar2 = FUN_009b5f90(local_6c,0xffffffff,local_2c);
          if (iVar2 != 0) {
            FUN_00403e70(&local_ac,(undefined4 *)(iVar2 + 0x40));
          }
          (**(code **)(*piVar8 + 0x5c))(local_8c);
          FUN_0047a630(param_1,apvStack_4c,&local_ac,local_8c,(undefined4 *)0x0);
          local_4 = CONCAT31(local_4._1_3_,4);
          CMovieReview_AddComment(param_1,local_b4 - local_b8,7.00649e-45,apvStack_4c,'\x01',3);
          if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_4c[0]);
          }
          if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c[0]);
          }
          if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c[0]);
          }
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ac);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047c010 @ 0047c010 ////

void __fastcall FUN_0047c010(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  int iVar13;
  int *local_bc;
  float local_b8;
  float local_b4;
  undefined2 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined2 local_a0 [10];
  void *local_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3a9e;
  local_c = ExceptionList;
  if (*(char *)((int)param_1 + 0x60) == '\0') {
    piVar7 = (int *)0x0;
    if (((*(int *)((int)param_1 + 0xec) != 0) &&
        (ExceptionList = &local_c, iVar2 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar2))
       && (iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar2 != 0)) {
      iVar9 = *(int *)(iVar2 + 100);
      iVar2 = *(int *)(iVar2 + 0x68);
      local_b8 = 3.4028235e+38;
      local_b4 = 3.4028235e+38;
      local_bc = (int *)0x0;
      if (iVar9 != iVar2) {
        do {
          iVar1 = *(int *)(iVar9 + 0x14);
          piVar8 = piVar7;
          if (((iVar1 != 0) && (iVar3 = FUN_005a6470(iVar1), iVar3 != 0)) &&
             (uVar4 = FUN_005a6140(iVar1), (char)uVar4 != '\0')) {
            iVar13 = 0;
            pTVar12 = &TM::CStar::RTTI_Type_Descriptor;
            pTVar11 = &TM::CStaff::RTTI_Type_Descriptor;
            iVar3 = 0;
            piVar5 = (int *)FUN_005a6470(iVar1);
            piVar5 = (int *)FUN_00ace790(piVar5,iVar3,pTVar11,pTVar12,iVar13);
            if ((piVar5 != (int *)0x0) &&
               (uVar4 = FUN_005b7620(*(void **)((int)param_1 + 0xec),(int)piVar5),
               (char)uVar4 != '\0')) {
              fVar10 = FUN_005b7570(*(int *)((int)param_1 + 0xec),(float)piVar5);
              if ((float10)local_b8 <= fVar10) {
                if (fVar10 < (float10)local_b4) {
                  local_b4 = (float)fVar10;
                  local_bc = piVar5;
                }
              }
              else {
                local_b4 = local_b8;
                piVar8 = piVar5;
                local_bc = piVar7;
                local_b8 = (float)fVar10;
              }
            }
          }
          iVar9 = iVar9 + 0x18;
          piVar7 = piVar8;
        } while (iVar9 != iVar2);
        if (((piVar8 != (int *)0x0) && (local_bc != (int *)0x0)) &&
           (*DAT_010493fc <= local_b4 - local_b8)) {
          local_ac = local_a0;
          local_a0[0] = 0;
          local_a8 = 0;
          local_a4 = 10;
          local_4 = 0;
          ppuVar6 = &PTR_DAT_00e508dc;
          if (piVar8[0x128] != 0) {
            ppuVar6 = &PTR_DAT_00e508bc;
          }
          FUN_00403de0(local_2c,ppuVar6);
          FUN_00403de0(local_6c,(undefined4 *)&DAT_010493d8);
          local_4 = CONCAT31(local_4._1_3_,2);
          iVar2 = FUN_009b5f90(local_6c,0xffffffff,local_2c);
          if (iVar2 != 0) {
            FUN_00403e70(&local_ac,(undefined4 *)(iVar2 + 0x40));
          }
          (**(code **)(*piVar8 + 0x5c))(local_8c);
          FUN_0047a630(param_1,apvStack_4c,&local_ac,local_8c,(undefined4 *)0x0);
          local_4 = CONCAT31(local_4._1_3_,4);
          CMovieReview_AddComment(param_1,local_b4 - local_b8,8.40779e-45,apvStack_4c,'\x01',3);
          if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_4c[0]);
          }
          if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c[0]);
          }
          if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c[0]);
          }
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ac);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047c2d0 @ 0047c2d0 ////

void __fastcall FUN_0047c2d0(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *this;
  float *pfVar4;
  uint uVar5;
  float local_54;
  uint local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3ac0;
  local_c = ExceptionList;
  if (((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
     (ExceptionList = &local_c, iVar3 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar3)) {
    local_50 = 0;
    local_54 = 0.0;
    this = (void *)FUN_005b2b80(*(int *)((int)param_1 + 0xec));
    if (this != (void *)0x0) {
      pfVar4 = (float *)FUN_005d7640(this,&local_50);
      local_54 = *pfVar4;
      local_50 = 1;
    }
    uVar5 = (uint)(this != (void *)0x0);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x354);
    uVar2 = local_50;
    for (iVar3 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x350); iVar3 != iVar1;
        iVar3 = iVar3 + 0x18) {
      pfVar4 = (float *)FUN_005d7640(*(void **)(iVar3 + 0x14),&local_50);
      local_54 = *pfVar4 + local_54;
      uVar5 = uVar5 + 1;
      uVar2 = uVar5;
    }
    if (0 < (int)uVar5) {
      local_50 = uVar2;
      FUN_0047b850(param_1,local_2c,local_54 / (float)(int)uVar2,7,'\0');
      local_4 = 0;
      FUN_0047a630(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,1);
      CMovieReview_AddComment(param_1,local_54 / (float)(int)uVar2,9.80909e-45,local_4c,'\x01',3);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047c430 @ 0047c430 ////

void __fastcall FUN_0047c430(void *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *this;
  float *pfVar7;
  undefined **ppuVar8;
  int iVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  int iVar12;
  float local_c4;
  int *local_bc;
  undefined2 *local_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined2 local_a8 [10];
  undefined4 uStack_94;
  float fStack_90;
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3afe;
  local_c = ExceptionList;
  if ((((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
      (ExceptionList = &local_c, iVar3 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar3)) &&
     (iVar3 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar3 != 0)) {
    iVar9 = *(int *)(iVar3 + 100);
    iVar3 = *(int *)(iVar3 + 0x68);
    local_c4 = 3.4028235e+38;
    local_bc = (int *)0x0;
    if (iVar9 != iVar3) {
      do {
        iVar1 = *(int *)(iVar9 + 0x14);
        if (((iVar1 != 0) && (iVar4 = FUN_005a6470(iVar1), iVar4 != 0)) &&
           (uVar5 = FUN_005a6140(iVar1), (char)uVar5 != '\0')) {
          iVar12 = 0;
          pTVar11 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar10 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar4 = 0;
          piVar6 = (int *)FUN_005a6470(iVar1);
          piVar6 = (int *)FUN_00ace790(piVar6,iVar4,pTVar10,pTVar11,iVar12);
          if ((piVar6 != (int *)0x0) &&
             (this = (void *)(**(code **)(*piVar6 + 0x27c))(), this != (void *)0x0)) {
            pfVar7 = (float *)FUN_005b7950(*(void **)((int)param_1 + 0xec),&fStack_90,(int)piVar6);
            fVar2 = *pfVar7;
            pfVar7 = (float *)CProjectCastEffect_GetEffectiveLowerMoodThreshold(this,&uStack_94);
            if ((fVar2 < *pfVar7) && (fVar2 < local_c4)) {
              local_c4 = fVar2;
              local_bc = piVar6;
            }
          }
        }
        iVar9 = iVar9 + 0x18;
      } while (iVar9 != iVar3);
      if ((local_bc != (int *)0x0) && (local_c4 < *DAT_010494d4 != (local_c4 == *DAT_010494d4))) {
        local_b4 = local_a8;
        local_a8[0] = 0;
        uStack_b0 = 0;
        uStack_ac = 10;
        uStack_4 = 0;
        ppuVar8 = &PTR_DAT_00e508dc;
        if (local_bc[0x128] != 0) {
          ppuVar8 = &PTR_DAT_00e508bc;
        }
        FUN_00403de0(apvStack_2c,ppuVar8);
        FUN_00403de0(apvStack_6c,(undefined4 *)&DAT_010494b0);
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        iVar3 = FUN_009b5f90(apvStack_6c,0xffffffff,apvStack_2c);
        if (iVar3 != 0) {
          FUN_00403e70(&local_b4,(undefined4 *)(iVar3 + 0x40));
        }
        (**(code **)(*local_bc + 0x5c))(apvStack_8c);
        FUN_0047a630(param_1,apvStack_4c,&local_b4,apvStack_8c,(undefined4 *)0x0);
        uStack_4 = CONCAT31(uStack_4._1_3_,4);
        CMovieReview_AddComment(param_1,local_c4,1.26117e-44,apvStack_4c,'\x01',3);
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_8c[0]);
        }
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_6c[0]);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        if (10 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
          _free(local_b4);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047c6e0 @ 0047c6e0 ////

void __fastcall FUN_0047c6e0(void *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *this;
  float *pfVar7;
  undefined **ppuVar8;
  int iVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  int iVar12;
  float local_c4;
  int *local_bc;
  undefined2 *local_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined2 local_a8 [10];
  undefined4 uStack_94;
  float fStack_90;
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3b3e;
  local_c = ExceptionList;
  if ((((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
      (ExceptionList = &local_c, iVar3 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar3)) &&
     (iVar3 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar3 != 0)) {
    iVar9 = *(int *)(iVar3 + 100);
    iVar3 = *(int *)(iVar3 + 0x68);
    local_c4 = -3.4028235e+38;
    local_bc = (int *)0x0;
    if (iVar9 != iVar3) {
      do {
        iVar1 = *(int *)(iVar9 + 0x14);
        if (((iVar1 != 0) && (iVar4 = FUN_005a6470(iVar1), iVar4 != 0)) &&
           (uVar5 = FUN_005a6140(iVar1), (char)uVar5 != '\0')) {
          iVar12 = 0;
          pTVar11 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar10 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar4 = 0;
          piVar6 = (int *)FUN_005a6470(iVar1);
          piVar6 = (int *)FUN_00ace790(piVar6,iVar4,pTVar10,pTVar11,iVar12);
          if ((piVar6 != (int *)0x0) &&
             (this = (void *)(**(code **)(*piVar6 + 0x27c))(), this != (void *)0x0)) {
            pfVar7 = (float *)FUN_005b7950(*(void **)((int)param_1 + 0xec),&fStack_90,(int)piVar6);
            fVar2 = *pfVar7;
            pfVar7 = (float *)CProjectCastEffect_GetEffectiveUpperMoodThreshold(this,&uStack_94);
            if ((*pfVar7 < fVar2) && (local_c4 < fVar2)) {
              local_c4 = fVar2;
              local_bc = piVar6;
            }
          }
        }
        iVar9 = iVar9 + 0x18;
      } while (iVar9 != iVar3);
      if ((local_bc != (int *)0x0) && (*DAT_0104951c <= local_c4)) {
        local_b4 = local_a8;
        local_a8[0] = 0;
        uStack_b0 = 0;
        uStack_ac = 10;
        uStack_4 = 0;
        ppuVar8 = &PTR_DAT_00e508dc;
        if (local_bc[0x128] != 0) {
          ppuVar8 = &PTR_DAT_00e508bc;
        }
        FUN_00403de0(apvStack_2c,ppuVar8);
        FUN_00403de0(apvStack_6c,(undefined4 *)&DAT_010494f8);
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        iVar3 = FUN_009b5f90(apvStack_6c,0xffffffff,apvStack_2c);
        if (iVar3 != 0) {
          FUN_00403e70(&local_b4,(undefined4 *)(iVar3 + 0x40));
        }
        (**(code **)(*local_bc + 0x5c))(apvStack_8c);
        FUN_0047a630(param_1,apvStack_4c,&local_b4,apvStack_8c,(undefined4 *)0x0);
        uStack_4 = CONCAT31(uStack_4._1_3_,4);
        CMovieReview_AddComment(param_1,local_c4,1.4013e-44,apvStack_4c,'\x01',3);
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_8c[0]);
        }
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_6c[0]);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        if (10 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
          _free(local_b4);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047c990 @ 0047c990 ////

void __fastcall FUN_0047c990(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void *this;
  float *pfVar4;
  undefined **ppuVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  int iVar8;
  float fStack_b4;
  undefined2 *puStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined2 auStack_a4 [10];
  undefined4 uStack_90;
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3b7e;
  local_c = ExceptionList;
  if (((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
     (ExceptionList = &local_c, iVar1 = FUN_005b2780(*(int *)((int)param_1 + 0xec)), iVar1 != 0)) {
    iVar1 = FUN_005b2780(*(int *)((int)param_1 + 0xec));
    uVar2 = FUN_00598ee0(iVar1);
    if ((char)uVar2 != '\0') {
      iVar8 = 0;
      pTVar7 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar6 = &TM::CStaff::RTTI_Type_Descriptor;
      iVar1 = 0;
      piVar3 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xec));
      piVar3 = (int *)FUN_00ace790(piVar3,iVar1,pTVar6,pTVar7,iVar8);
      this = (void *)(**(code **)(*piVar3 + 0x27c))();
      if (this != (void *)0x0) {
        pfVar4 = (float *)FUN_005b7950(*(void **)((int)param_1 + 0xec),&fStack_b4,(int)piVar3);
        fStack_b4 = *pfVar4;
        pfVar4 = (float *)CProjectCastEffect_GetEffectiveLowerMoodThreshold(this,&uStack_90);
        if ((fStack_b4 < *pfVar4) && (fStack_b4 < *DAT_01049564 != (fStack_b4 == *DAT_01049564))) {
          puStack_b0 = auStack_a4;
          auStack_a4[0] = 0;
          uStack_ac = 0;
          uStack_a8 = 10;
          uStack_4 = 0;
          iVar1 = FUN_005b2780(*(int *)((int)param_1 + 0xec));
          ppuVar5 = &PTR_DAT_00e508dc;
          if (*(int *)(iVar1 + 0x4a0) != 0) {
            ppuVar5 = &PTR_DAT_00e508bc;
          }
          FUN_00403de0(apvStack_2c,ppuVar5);
          FUN_00403de0(apvStack_6c,(undefined4 *)&DAT_01049540);
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          iVar1 = FUN_009b5f90(apvStack_6c,0xffffffff,apvStack_2c);
          if (iVar1 != 0) {
            FUN_00403e70(&puStack_b0,(undefined4 *)(iVar1 + 0x40));
          }
          piVar3 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xec));
          (**(code **)(*piVar3 + 0x5c))(apvStack_4c);
          FUN_0047a630(param_1,apvStack_8c,&puStack_b0,apvStack_4c,(undefined4 *)0x0);
          uStack_4 = CONCAT31(uStack_4._1_3_,4);
          CMovieReview_AddComment(param_1,fStack_b4,1.54143e-44,apvStack_8c,'\x01',3);
          if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_8c[0]);
          }
          if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_4c[0]);
          }
          if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_6c[0]);
          }
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_b0);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047cbe0 @ 0047cbe0 ////

void __fastcall FUN_0047cbe0(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void *this;
  float *pfVar4;
  undefined **ppuVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  int iVar8;
  float fStack_b4;
  undefined2 *puStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined2 auStack_a4 [10];
  undefined4 uStack_90;
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3bbe;
  local_c = ExceptionList;
  if (((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
     (ExceptionList = &local_c, iVar1 = FUN_005b2780(*(int *)((int)param_1 + 0xec)), iVar1 != 0)) {
    iVar1 = FUN_005b2780(*(int *)((int)param_1 + 0xec));
    uVar2 = FUN_00598ee0(iVar1);
    if ((char)uVar2 != '\0') {
      iVar8 = 0;
      pTVar7 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar6 = &TM::CStaff::RTTI_Type_Descriptor;
      iVar1 = 0;
      piVar3 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xec));
      piVar3 = (int *)FUN_00ace790(piVar3,iVar1,pTVar6,pTVar7,iVar8);
      this = (void *)(**(code **)(*piVar3 + 0x27c))();
      if (this != (void *)0x0) {
        pfVar4 = (float *)FUN_005b7950(*(void **)((int)param_1 + 0xec),&fStack_b4,(int)piVar3);
        fStack_b4 = *pfVar4;
        pfVar4 = (float *)CProjectCastEffect_GetEffectiveUpperMoodThreshold(this,&uStack_90);
        if ((*pfVar4 < fStack_b4) && (*DAT_010495ac <= fStack_b4)) {
          puStack_b0 = auStack_a4;
          auStack_a4[0] = 0;
          uStack_ac = 0;
          uStack_a8 = 10;
          uStack_4 = 0;
          iVar1 = FUN_005b2780(*(int *)((int)param_1 + 0xec));
          ppuVar5 = &PTR_DAT_00e508dc;
          if (*(int *)(iVar1 + 0x4a0) != 0) {
            ppuVar5 = &PTR_DAT_00e508bc;
          }
          FUN_00403de0(apvStack_2c,ppuVar5);
          FUN_00403de0(apvStack_6c,(undefined4 *)&DAT_01049588);
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          iVar1 = FUN_009b5f90(apvStack_6c,0xffffffff,apvStack_2c);
          if (iVar1 != 0) {
            FUN_00403e70(&puStack_b0,(undefined4 *)(iVar1 + 0x40));
          }
          piVar3 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xec));
          (**(code **)(*piVar3 + 0x5c))(apvStack_4c);
          FUN_0047a630(param_1,apvStack_8c,&puStack_b0,apvStack_4c,(undefined4 *)0x0);
          uStack_4 = CONCAT31(uStack_4._1_3_,4);
          CMovieReview_AddComment(param_1,fStack_b4,1.68156e-44,apvStack_8c,'\x01',3);
          if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_8c[0]);
          }
          if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_4c[0]);
          }
          if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_6c[0]);
          }
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_b0);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047ce30 @ 0047ce30 ////

void __fastcall FUN_0047ce30(void *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  void *this;
  float *pfVar4;
  float fVar5;
  float local_54;
  float local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3be0;
  local_c = ExceptionList;
  if (((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
     (ExceptionList = &local_c, iVar3 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar3)) {
    local_50 = 0.0;
    local_54 = 0.0;
    this = (void *)FUN_005b2b80(*(int *)((int)param_1 + 0xec));
    if (this != (void *)0x0) {
      pfVar4 = (float *)FUN_005d76a0(this,&local_50);
      local_54 = *pfVar4;
      local_50 = 1.4013e-45;
    }
    fVar5 = (float)(uint)(this != (void *)0x0);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x354);
    fVar2 = local_50;
    for (iVar3 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x350); iVar3 != iVar1;
        iVar3 = iVar3 + 0x18) {
      pfVar4 = (float *)FUN_005d76a0(*(void **)(iVar3 + 0x14),&local_50);
      local_54 = *pfVar4 + local_54;
      fVar5 = (float)((int)fVar5 + 1);
      fVar2 = fVar5;
    }
    if (0 < (int)fVar5) {
      local_50 = fVar2;
      FUN_0047b850(param_1,local_2c,local_54 / (float)(int)fVar2,0x12,'\0');
      local_4 = 0;
      FUN_0047a630(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,1);
      CMovieReview_AddComment(param_1,local_54 / (float)(int)fVar2,2.52234e-44,local_4c,'\x01',3);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047cf90 @ 0047cf90 ////

void __fastcall FUN_0047cf90(void *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  void *this;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  undefined **ppuVar12;
  int iVar13;
  int iVar14;
  TypeDescriptor *pTVar15;
  TypeDescriptor *pTVar16;
  int iVar17;
  int iVar18;
  float local_d4;
  int *local_c8;
  int *local_c0;
  undefined2 *puStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined2 auStack_a4 [10];
  float fStack_90;
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3c1e;
  local_c = ExceptionList;
  if ((((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
      (ExceptionList = &local_c, iVar4 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar4)) &&
     (iVar4 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar4 != 0)) {
    local_d4 = -3.4028235e+38;
    local_c8 = (int *)0x0;
    local_c0 = (int *)0x0;
    piVar5 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xec));
    iVar14 = *(int *)(iVar4 + 100);
    iVar1 = *(int *)(iVar4 + 0x68);
    if (iVar14 != iVar1) {
      do {
        iVar13 = *(int *)(iVar14 + 0x14);
        if (((iVar13 != 0) && (iVar6 = FUN_005a6470(iVar13), iVar6 != 0)) &&
           (uVar7 = FUN_005a6140(iVar13), (char)uVar7 != '\0')) {
          iVar17 = 0;
          pTVar16 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar15 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar6 = 0;
          piVar8 = (int *)FUN_005a6470(iVar13);
          piVar8 = (int *)FUN_00ace790(piVar8,iVar6,pTVar15,pTVar16,iVar17);
          if (((piVar8 != (int *)0x0) && (piVar8 != piVar5)) &&
             ((cVar2 = (**(code **)(*piVar8 + 0x13c))(), cVar2 != '\0' &&
              ((this = (void *)FUN_005873c0((int)piVar8), this != (void *)0x0 &&
               (bVar3 = FUN_0042a720((int)this), bVar3)))))) {
            iVar6 = *(int *)(iVar4 + 0x68);
            for (iVar13 = *(int *)(iVar4 + 100); iVar13 != iVar6; iVar13 = iVar13 + 0x18) {
              iVar17 = *(int *)(iVar13 + 0x14);
              if ((iVar17 != 0) && (iVar9 = FUN_005a6470(iVar17), iVar9 != 0)) {
                iVar18 = 0;
                pTVar16 = &TM::CStar::RTTI_Type_Descriptor;
                pTVar15 = &TM::CStaff::RTTI_Type_Descriptor;
                iVar9 = 0;
                piVar10 = (int *)FUN_005a6470(iVar17);
                piVar10 = (int *)FUN_00ace790(piVar10,iVar9,pTVar15,pTVar16,iVar18);
                if ((piVar10 != (int *)0x0) &&
                   (((piVar10 != piVar5 &&
                     (cVar2 = (**(code **)(*piVar10 + 0x13c))(), cVar2 != '\0')) &&
                    (piVar8 != piVar10)))) {
                  pfVar11 = FUN_0042e910(this,&fStack_90,(int)piVar10);
                  if (local_d4 < *pfVar11) {
                    local_d4 = *pfVar11;
                    local_c8 = piVar8;
                    local_c0 = piVar10;
                  }
                }
              }
            }
          }
        }
        iVar14 = iVar14 + 0x18;
      } while (iVar14 != iVar1);
      if (((local_c8 != (int *)0x0) && (local_c0 != (int *)0x0)) && (*DAT_010497a4 <= local_d4)) {
        puStack_b0 = auStack_a4;
        auStack_a4[0] = 0;
        uStack_ac = 0;
        uStack_a8 = 10;
        uStack_4 = 0;
        ppuVar12 = &PTR_DAT_00e508dc;
        if (local_c8[0x128] != 0) {
          ppuVar12 = &PTR_DAT_00e508bc;
        }
        FUN_00403de0(apvStack_2c,ppuVar12);
        FUN_00403de0(apvStack_6c,(undefined4 *)&DAT_01049780);
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        iVar4 = FUN_009b5f90(apvStack_6c,0xffffffff,apvStack_2c);
        if (iVar4 != 0) {
          FUN_00403e70(&puStack_b0,(undefined4 *)(iVar4 + 0x40));
        }
        (**(code **)(*local_c8 + 0x5c))(apvStack_8c);
        FUN_0047a630(param_1,apvStack_4c,&puStack_b0,apvStack_8c,(undefined4 *)0x0);
        uStack_4 = CONCAT31(uStack_4._1_3_,4);
        CMovieReview_AddComment(param_1,local_d4,2.66247e-44,apvStack_4c,'\x01',3);
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_8c[0]);
        }
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_6c[0]);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_b0);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047d300 @ 0047d300 ////

void __fastcall FUN_0047d300(void *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  void *this;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  undefined **ppuVar12;
  int iVar13;
  int iVar14;
  TypeDescriptor *pTVar15;
  TypeDescriptor *pTVar16;
  int iVar17;
  int iVar18;
  float local_d4;
  int *local_c8;
  int *local_c4;
  undefined2 *puStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined2 auStack_a4 [10];
  float fStack_90;
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3c5e;
  local_c = ExceptionList;
  if ((((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
      (ExceptionList = &local_c, iVar4 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar4)) &&
     (iVar4 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar4 != 0)) {
    local_d4 = 3.4028235e+38;
    local_c8 = (int *)0x0;
    local_c4 = (int *)0x0;
    piVar5 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xec));
    iVar14 = *(int *)(iVar4 + 100);
    iVar1 = *(int *)(iVar4 + 0x68);
    if (iVar14 != iVar1) {
      do {
        iVar13 = *(int *)(iVar14 + 0x14);
        if (((iVar13 != 0) && (iVar6 = FUN_005a6470(iVar13), iVar6 != 0)) &&
           (uVar7 = FUN_005a6140(iVar13), (char)uVar7 != '\0')) {
          iVar17 = 0;
          pTVar16 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar15 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar6 = 0;
          piVar8 = (int *)FUN_005a6470(iVar13);
          piVar8 = (int *)FUN_00ace790(piVar8,iVar6,pTVar15,pTVar16,iVar17);
          if (((piVar8 != (int *)0x0) && (piVar8 != piVar5)) &&
             ((cVar2 = (**(code **)(*piVar8 + 0x13c))(), cVar2 != '\0' &&
              ((this = (void *)FUN_005873c0((int)piVar8), this != (void *)0x0 &&
               (bVar3 = FUN_0042a720((int)this), bVar3)))))) {
            iVar6 = *(int *)(iVar4 + 0x68);
            for (iVar13 = *(int *)(iVar4 + 100); iVar13 != iVar6; iVar13 = iVar13 + 0x18) {
              iVar17 = *(int *)(iVar13 + 0x14);
              if ((iVar17 != 0) && (iVar9 = FUN_005a6470(iVar17), iVar9 != 0)) {
                iVar18 = 0;
                pTVar16 = &TM::CStar::RTTI_Type_Descriptor;
                pTVar15 = &TM::CStaff::RTTI_Type_Descriptor;
                iVar9 = 0;
                piVar10 = (int *)FUN_005a6470(iVar17);
                piVar10 = (int *)FUN_00ace790(piVar10,iVar9,pTVar15,pTVar16,iVar18);
                if ((piVar10 != (int *)0x0) &&
                   (((piVar10 != piVar5 &&
                     (cVar2 = (**(code **)(*piVar10 + 0x13c))(), cVar2 != '\0')) &&
                    (piVar8 != piVar10)))) {
                  pfVar11 = FUN_0042e910(this,&fStack_90,(int)piVar10);
                  if (*pfVar11 < local_d4) {
                    local_d4 = *pfVar11;
                    local_c8 = piVar8;
                    local_c4 = piVar10;
                  }
                }
              }
            }
          }
        }
        iVar14 = iVar14 + 0x18;
      } while (iVar14 != iVar1);
      if (((local_c8 != (int *)0x0) && (local_c4 != (int *)0x0)) &&
         (local_d4 < *DAT_010497ec != (local_d4 == *DAT_010497ec))) {
        puStack_b0 = auStack_a4;
        auStack_a4[0] = 0;
        uStack_ac = 0;
        uStack_a8 = 10;
        uStack_4 = 0;
        ppuVar12 = &PTR_DAT_00e508dc;
        if (local_c8[0x128] != 0) {
          ppuVar12 = &PTR_DAT_00e508bc;
        }
        FUN_00403de0(apvStack_2c,ppuVar12);
        FUN_00403de0(apvStack_6c,(undefined4 *)&DAT_010497c8);
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        iVar4 = FUN_009b5f90(apvStack_6c,0xffffffff,apvStack_2c);
        if (iVar4 != 0) {
          FUN_00403e70(&puStack_b0,(undefined4 *)(iVar4 + 0x40));
        }
        (**(code **)(*local_c8 + 0x5c))(apvStack_4c);
        FUN_0047a630(param_1,apvStack_8c,&puStack_b0,apvStack_4c,(undefined4 *)0x0);
        uStack_4 = CONCAT31(uStack_4._1_3_,4);
        CMovieReview_AddComment(param_1,local_d4,2.8026e-44,apvStack_8c,'\x01',3);
        if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_8c[0]);
        }
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_6c[0]);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_b0);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047d670 @ 0047d670 ////

void __fastcall FUN_0047d670(void *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  void *this;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float *pfVar8;
  undefined **ppuVar9;
  int iVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  int iVar13;
  int iVar14;
  float local_c0;
  int *local_bc;
  undefined2 *local_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined2 local_a4 [10];
  float fStack_90;
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3c9e;
  local_c = ExceptionList;
  if ((((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
      (ExceptionList = &local_c, iVar3 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar3)) &&
     (iVar3 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar3 != 0)) {
    iVar14 = 0;
    pTVar12 = &TM::CStar::RTTI_Type_Descriptor;
    pTVar11 = &TM::CStaff::RTTI_Type_Descriptor;
    iVar10 = 0;
    local_c0 = -3.4028235e+38;
    local_bc = (int *)0x0;
    piVar4 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xec));
    piVar4 = (int *)FUN_00ace790(piVar4,iVar10,pTVar11,pTVar12,iVar14);
    if (((piVar4 != (int *)0x0) && (this = (void *)FUN_005873c0((int)piVar4), this != (void *)0x0))
       && (bVar1 = FUN_0042a720((int)this), bVar1)) {
      iVar10 = *(int *)(iVar3 + 100);
      iVar3 = *(int *)(iVar3 + 0x68);
      if (iVar10 != iVar3) {
        do {
          iVar14 = *(int *)(iVar10 + 0x14);
          if (((iVar14 != 0) && (iVar5 = FUN_005a6470(iVar14), iVar5 != 0)) &&
             (uVar6 = FUN_005a6140(iVar14), (char)uVar6 != '\0')) {
            iVar13 = 0;
            pTVar12 = &TM::CStar::RTTI_Type_Descriptor;
            pTVar11 = &TM::CStaff::RTTI_Type_Descriptor;
            iVar5 = 0;
            piVar7 = (int *)FUN_005a6470(iVar14);
            piVar7 = (int *)FUN_00ace790(piVar7,iVar5,pTVar11,pTVar12,iVar13);
            if (((piVar7 != (int *)0x0) && (piVar7 != piVar4)) &&
               (cVar2 = (**(code **)(*piVar7 + 0x13c))(), cVar2 != '\0')) {
              pfVar8 = FUN_0042e910(this,&fStack_90,(int)piVar7);
              if (local_c0 < *pfVar8) {
                local_c0 = *pfVar8;
                local_bc = piVar7;
              }
            }
          }
          iVar10 = iVar10 + 0x18;
        } while (iVar10 != iVar3);
        if ((local_bc != (int *)0x0) && (*DAT_01049834 <= local_c0)) {
          local_b0 = local_a4;
          local_a4[0] = 0;
          uStack_ac = 0;
          uStack_a8 = 10;
          uStack_4 = 0;
          ppuVar9 = &PTR_DAT_00e508dc;
          if (piVar4[0x128] != 0) {
            ppuVar9 = &PTR_DAT_00e508bc;
          }
          FUN_00403de0(apvStack_2c,ppuVar9);
          FUN_00403de0(apvStack_6c,(undefined4 *)&DAT_01049810);
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          iVar3 = FUN_009b5f90(apvStack_6c,0xffffffff,apvStack_2c);
          if (iVar3 != 0) {
            FUN_00403e70(&local_b0,(undefined4 *)(iVar3 + 0x40));
          }
          (**(code **)(*piVar4 + 0x5c))(apvStack_8c);
          FUN_0047a630(param_1,apvStack_4c,&local_b0,apvStack_8c,(undefined4 *)0x0);
          uStack_4 = CONCAT31(uStack_4._1_3_,4);
          CMovieReview_AddComment(param_1,local_c0,2.94273e-44,apvStack_4c,'\x01',3);
          if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_4c[0]);
          }
          if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_8c[0]);
          }
          if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_6c[0]);
          }
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
            _free(local_b0);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047d950 @ 0047d950 ////

void __fastcall FUN_0047d950(void *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  void *this;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float *pfVar8;
  undefined **ppuVar9;
  int iVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  int iVar13;
  int iVar14;
  float local_c0;
  int *local_bc;
  undefined2 *local_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined2 local_a4 [10];
  float fStack_90;
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3cde;
  local_c = ExceptionList;
  if ((((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
      (ExceptionList = &local_c, iVar3 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar3)) &&
     (iVar3 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar3 != 0)) {
    iVar14 = 0;
    pTVar12 = &TM::CStar::RTTI_Type_Descriptor;
    pTVar11 = &TM::CStaff::RTTI_Type_Descriptor;
    iVar10 = 0;
    local_c0 = 3.4028235e+38;
    local_bc = (int *)0x0;
    piVar4 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xec));
    piVar4 = (int *)FUN_00ace790(piVar4,iVar10,pTVar11,pTVar12,iVar14);
    if (((piVar4 != (int *)0x0) && (this = (void *)FUN_005873c0((int)piVar4), this != (void *)0x0))
       && (bVar1 = FUN_0042a720((int)this), bVar1)) {
      iVar10 = *(int *)(iVar3 + 100);
      iVar3 = *(int *)(iVar3 + 0x68);
      if (iVar10 != iVar3) {
        do {
          iVar14 = *(int *)(iVar10 + 0x14);
          if (((iVar14 != 0) && (iVar5 = FUN_005a6470(iVar14), iVar5 != 0)) &&
             (uVar6 = FUN_005a6140(iVar14), (char)uVar6 != '\0')) {
            iVar13 = 0;
            pTVar12 = &TM::CStar::RTTI_Type_Descriptor;
            pTVar11 = &TM::CStaff::RTTI_Type_Descriptor;
            iVar5 = 0;
            piVar7 = (int *)FUN_005a6470(iVar14);
            piVar7 = (int *)FUN_00ace790(piVar7,iVar5,pTVar11,pTVar12,iVar13);
            if (((piVar7 != (int *)0x0) && (piVar7 != piVar4)) &&
               (cVar2 = (**(code **)(*piVar7 + 0x13c))(), cVar2 != '\0')) {
              pfVar8 = FUN_0042e910(this,&fStack_90,(int)piVar7);
              if (*pfVar8 < local_c0) {
                local_c0 = *pfVar8;
                local_bc = piVar7;
              }
            }
          }
          iVar10 = iVar10 + 0x18;
        } while (iVar10 != iVar3);
        if ((local_bc != (int *)0x0) && (local_c0 < *DAT_0104987c != (local_c0 == *DAT_0104987c))) {
          local_b0 = local_a4;
          local_a4[0] = 0;
          uStack_ac = 0;
          uStack_a8 = 10;
          uStack_4 = 0;
          ppuVar9 = &PTR_DAT_00e508dc;
          if (piVar4[0x128] != 0) {
            ppuVar9 = &PTR_DAT_00e508bc;
          }
          FUN_00403de0(apvStack_2c,ppuVar9);
          FUN_00403de0(apvStack_6c,(undefined4 *)&DAT_01049858);
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          iVar3 = FUN_009b5f90(apvStack_6c,0xffffffff,apvStack_2c);
          if (iVar3 != 0) {
            FUN_00403e70(&local_b0,(undefined4 *)(iVar3 + 0x40));
          }
          (**(code **)(*piVar4 + 0x5c))(apvStack_8c);
          FUN_0047a630(param_1,apvStack_4c,&local_b0,apvStack_8c,(undefined4 *)0x0);
          uStack_4 = CONCAT31(uStack_4._1_3_,4);
          CMovieReview_AddComment(param_1,local_c0,3.08286e-44,apvStack_4c,'\x01',3);
          if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_4c[0]);
          }
          if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_8c[0]);
          }
          if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_6c[0]);
          }
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
            _free(local_b0);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047dc30 @ 0047dc30 ////

void __fastcall FUN_0047dc30(void *param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  float *pfVar3;
  float local_74;
  float local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3d08;
  local_c = ExceptionList;
  if (*(char *)((int)param_1 + 0x60) != '\0') {
    return;
  }
  if (*(int *)((int)param_1 + 0xec) == 0) {
    return;
  }
  ExceptionList = &local_c;
  iVar2 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec));
  if (iVar2 < 1) {
    ExceptionList = local_c;
    return;
  }
  this = (void *)FUN_005b2b80(*(int *)((int)param_1 + 0xec));
  if (this != (void *)0x0) {
    pfVar3 = (float *)FUN_005d7700(this,&local_74);
    local_74 = *pfVar3;
    if (local_74 < *DAT_010498c4 != (local_74 == *DAT_010498c4)) goto LAB_0047dd04;
  }
  iVar2 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x350);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x354);
  if (iVar2 == iVar1) {
    ExceptionList = local_c;
    return;
  }
  while( true ) {
    pfVar3 = (float *)FUN_005d7700(this,&local_70);
    local_74 = *pfVar3;
    if (local_74 < *DAT_010498c4 != (local_74 == *DAT_010498c4)) break;
    iVar2 = iVar2 + 0x18;
    if (iVar2 == iVar1) {
      ExceptionList = local_c;
      return;
    }
  }
LAB_0047dd04:
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  FUN_004015d0(&local_6c,DAT_010498a0,DAT_010498a4);
  local_4 = 0;
  FUN_009b7190(local_2c,&local_6c,'\0',0);
  FUN_0047a630(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
  local_4 = CONCAT31(local_4._1_3_,2);
  CMovieReview_AddComment(param_1,local_74,3.22299e-44,local_4c,'\x01',3);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (local_24 < 0xb) {
    if (local_64 < 0x15) {
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c[0]);
}


//// FUNCTION FUN_0047dde0 @ 0047dde0 ////

void __fastcall FUN_0047dde0(void *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  void *this;
  float *pfVar4;
  float fVar5;
  float local_54;
  float local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3d30;
  local_c = ExceptionList;
  if (((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
     (ExceptionList = &local_c, iVar3 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar3)) {
    local_50 = 0.0;
    local_54 = 0.0;
    this = (void *)FUN_005b2b80(*(int *)((int)param_1 + 0xec));
    if (this != (void *)0x0) {
      pfVar4 = (float *)FUN_005d7700(this,&local_50);
      local_54 = *pfVar4;
      local_50 = 1.4013e-45;
    }
    fVar5 = (float)(uint)(this != (void *)0x0);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x354);
    fVar2 = local_50;
    for (iVar3 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x350); iVar3 != iVar1;
        iVar3 = iVar3 + 0x18) {
      pfVar4 = (float *)FUN_005d7700(*(void **)(iVar3 + 0x14),&local_50);
      local_54 = *pfVar4 + local_54;
      fVar5 = (float)((int)fVar5 + 1);
      fVar2 = fVar5;
    }
    if (0 < (int)fVar5) {
      local_50 = fVar2;
      FUN_0047b850(param_1,local_2c,local_54 / (float)(int)fVar2,0x18,'\0');
      local_4 = 0;
      FUN_0047a630(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,1);
      CMovieReview_AddComment(param_1,local_54 / (float)(int)fVar2,3.36312e-44,local_4c,'\x01',3);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047df40 @ 0047df40 ////

void __fastcall FUN_0047df40(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  float10 fVar4;
  float fVar5;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3d58;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x20;
  ExceptionList = &local_c;
  local_6c = _malloc(0x20);
  _strncpy(local_6c,"facility_publicity_office",0x19);
  local_68 = 0x19;
  local_6c[0x19] = '\0';
  local_4 = 0;
  uVar2 = thunk_FUN_009623a0(&local_6c);
  cVar1 = FUN_00960f30(uVar2);
  local_4 = 0xffffffff;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if ((cVar1 != '\0') && (*(int *)((int)param_1 + 0xec) != 0)) {
    cVar1 = FUN_005b3c80(*(int *)((int)param_1 + 0xec));
    if (cVar1 == '\0') {
      pfVar3 = (float *)FUN_005b1050(*(void **)((int)param_1 + 0xec),&local_78);
      fVar5 = *pfVar3;
      local_7c = fVar5;
      pfVar3 = (float *)FUN_005b2bd0(*(void **)((int)param_1 + 0xec),&local_74);
      fVar4 = FUN_004070c0(pfVar3,fVar5);
      FUN_00407070(&local_7c,(float)fVar4);
      pfVar3 = (float *)CProject_GetQualityWithAwardBoost(*(void **)((int)param_1 + 0xec),&local_70)
      ;
      FUN_00407070(&local_7c,((local_7c - *pfVar3) + 1.0) * 0.5);
      fVar5 = local_7c;
      FUN_0047b850(param_1,local_2c,local_7c,0x1b,'\0');
      local_4 = 1;
      FUN_0047a630(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,2);
      CMovieReview_AddComment(param_1,fVar5,3.78351e-44,local_4c,'\0',3);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047e110 @ 0047e110 ////

void __fastcall FUN_0047e110(void *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 local_54;
  undefined4 local_50;
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
  puStack_8 = &LAB_00ca3d88;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  ExceptionList = &local_c;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"facility_publicity_office",0x19);
  local_48 = 0x19;
  local_4c[0x19] = '\0';
  local_4 = 0;
  uVar4 = thunk_FUN_009623a0(&local_4c);
  cVar3 = FUN_00960f30(uVar4);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((cVar3 != '\0') && (*(int *)((int)param_1 + 0xec) != 0)) {
    uVar4 = FUN_00479b30((int)param_1);
    if ((char)uVar4 != '\0') {
      pfVar5 = (float *)FUN_005b1050(*(void **)((int)param_1 + 0xec),&local_54);
      fVar2 = *pfVar5;
      pfVar5 = (float *)FUN_005b2bd0(*(void **)((int)param_1 + 0xec),&local_50);
      fVar1 = *pfVar5;
      if (*DAT_01049a2c < fVar2 - fVar1) {
        FUN_009b7190(local_2c,(undefined4 *)&DAT_01049a08,'\0',0);
        local_4 = 1;
        FUN_0047a630(param_1,&local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,2);
        CMovieReview_AddComment(param_1,fVar2 - fVar1,3.92364e-44,&local_4c,'\0',3);
        if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047e2b0 @ 0047e2b0 ////

void __fastcall FUN_0047e2b0(void *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 local_54;
  undefined4 local_50;
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
  puStack_8 = &LAB_00ca3db8;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  ExceptionList = &local_c;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"facility_publicity_office",0x19);
  local_48 = 0x19;
  local_4c[0x19] = '\0';
  local_4 = 0;
  uVar4 = thunk_FUN_009623a0(&local_4c);
  cVar3 = FUN_00960f30(uVar4);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((cVar3 != '\0') && (*(int *)((int)param_1 + 0xec) != 0)) {
    uVar4 = FUN_00479b30((int)param_1);
    if ((char)uVar4 == '\0') {
      pfVar5 = (float *)FUN_005b2bd0(*(void **)((int)param_1 + 0xec),&local_54);
      fVar2 = *pfVar5;
      pfVar5 = (float *)FUN_005b1050(*(void **)((int)param_1 + 0xec),&local_50);
      fVar1 = *pfVar5;
      if (*DAT_01049a74 < fVar2 - fVar1) {
        FUN_009b7190(local_2c,(undefined4 *)&DAT_01049a50,'\0',0);
        local_4 = 1;
        FUN_0047a630(param_1,&local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,2);
        CMovieReview_AddComment(param_1,fVar2 - fVar1,4.06377e-44,&local_4c,'\0',3);
        if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047e450 @ 0047e450 ////

void __fastcall FUN_0047e450(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
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
  puStack_8 = &LAB_00ca3de8;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  ExceptionList = &local_c;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"facility_publicity_office",0x19);
  local_48 = 0x19;
  local_4c[0x19] = '\0';
  local_4 = 0;
  uVar2 = thunk_FUN_009623a0(&local_4c);
  cVar1 = FUN_00960f30(uVar2);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((cVar1 != '\0') && (*(void **)((int)param_1 + 0xec) != (void *)0x0)) {
    pfVar3 = (float *)FUN_005b1050(*(void **)((int)param_1 + 0xec),&local_58);
    if ((*pfVar3 == 0.0) &&
       (pfVar3 = (float *)FUN_005b2bd0(*(void **)((int)param_1 + 0xec),&local_58), *pfVar3 == 0.0))
    {
      ExceptionList = local_c;
      return;
    }
    cVar1 = FUN_005b3c80(*(int *)((int)param_1 + 0xec));
    if (cVar1 == '\0') {
      pfVar3 = (float *)FUN_005b1050(*(void **)((int)param_1 + 0xec),&local_54);
      local_58 = *pfVar3;
      pfVar3 = (float *)FUN_005b2bd0(*(void **)((int)param_1 + 0xec),&local_50);
      local_58 = 1.0 - ABS(local_58 - *pfVar3);
      if (*DAT_01049abc < local_58) {
        FUN_009b7190(local_2c,(undefined4 *)&DAT_01049a98,'\0',0);
        local_4 = 1;
        FUN_0047a630(param_1,&local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,2);
        CMovieReview_AddComment(param_1,local_58,4.2039e-44,&local_4c,'\0',3);
        if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047e640 @ 0047e640 ////

void __fastcall FUN_0047e640(void *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 local_54;
  undefined4 local_50;
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
  puStack_8 = &LAB_00ca3e18;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  ExceptionList = &local_c;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"facility_publicity_office",0x19);
  local_48 = 0x19;
  local_4c[0x19] = '\0';
  local_4 = 0;
  uVar4 = thunk_FUN_009623a0(&local_4c);
  cVar3 = FUN_00960f30(uVar4);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((cVar3 != '\0') && (*(int *)((int)param_1 + 0xec) != 0)) {
    cVar3 = FUN_005b3c80(*(int *)((int)param_1 + 0xec));
    if (cVar3 == '\0') {
      uVar4 = FUN_00479b30((int)param_1);
      if ((char)uVar4 != '\0') {
        pfVar5 = (float *)FUN_005b2bd0(*(void **)((int)param_1 + 0xec),&local_54);
        fVar2 = *pfVar5;
        pfVar5 = (float *)FUN_005b1050(*(void **)((int)param_1 + 0xec),&local_50);
        fVar1 = *pfVar5;
        if (*DAT_01049b04 < fVar2 - fVar1) {
          FUN_009b7190(local_2c,(undefined4 *)&DAT_01049ae0,'\0',0);
          local_4 = 1;
          FUN_0047a630(param_1,&local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
          local_4 = CONCAT31(local_4._1_3_,2);
          CMovieReview_AddComment(param_1,fVar2 - fVar1,4.34403e-44,&local_4c,'\0',3);
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047e7f0 @ 0047e7f0 ////

void __fastcall FUN_0047e7f0(void *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 local_54;
  undefined4 local_50;
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
  puStack_8 = &LAB_00ca3e48;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  ExceptionList = &local_c;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"facility_publicity_office",0x19);
  local_48 = 0x19;
  local_4c[0x19] = '\0';
  local_4 = 0;
  uVar4 = thunk_FUN_009623a0(&local_4c);
  cVar3 = FUN_00960f30(uVar4);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((cVar3 != '\0') && (*(int *)((int)param_1 + 0xec) != 0)) {
    cVar3 = FUN_005b3c80(*(int *)((int)param_1 + 0xec));
    if (cVar3 == '\0') {
      uVar4 = FUN_00479b30((int)param_1);
      if ((char)uVar4 == '\0') {
        pfVar5 = (float *)FUN_005b1050(*(void **)((int)param_1 + 0xec),&local_54);
        fVar2 = *pfVar5;
        pfVar5 = (float *)FUN_005b2bd0(*(void **)((int)param_1 + 0xec),&local_50);
        fVar1 = *pfVar5;
        if (*DAT_01049b4c < fVar2 - fVar1) {
          FUN_009b7190(local_2c,(undefined4 *)&DAT_01049b28,'\0',0);
          local_4 = 1;
          FUN_0047a630(param_1,&local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
          local_4 = CONCAT31(local_4._1_3_,2);
          CMovieReview_AddComment(param_1,fVar2 - fVar1,4.48416e-44,&local_4c,'\0',3);
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047e9a0 @ 0047e9a0 ////

void __fastcall FUN_0047e9a0(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *this;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  int iVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  int iVar11;
  float local_cc;
  float local_c8;
  float local_c4;
  int local_c0;
  int *local_bc;
  int *local_b8;
  undefined2 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined2 local_a0 [10];
  void *apvStack_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3e8e;
  local_c = ExceptionList;
  if (((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
     (ExceptionList = &local_c, iVar1 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar1 != 0)) {
    iVar7 = *(int *)(iVar1 + 100);
    iVar1 = *(int *)(iVar1 + 0x68);
    local_c4 = -3.4028235e+38;
    local_cc = -3.4028235e+38;
    local_b8 = (int *)0x0;
    local_bc = (int *)0x0;
    if (iVar7 != iVar1) {
      do {
        iVar8 = *(int *)(iVar7 + 0x14);
        if (((iVar8 != 0) && (iVar2 = FUN_005a6470(iVar8), iVar2 != 0)) &&
           (uVar3 = FUN_005a6140(iVar8), (char)uVar3 != '\0')) {
          iVar11 = 0;
          pTVar10 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar9 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar2 = 0;
          piVar4 = (int *)FUN_005a6470(iVar8);
          piVar4 = (int *)FUN_00ace790(piVar4,iVar2,pTVar9,pTVar10,iVar11);
          if (piVar4 != (int *)0x0) {
            iVar8 = 0;
            local_c0 = 0;
            local_c8 = 0.0;
            this = (void *)FUN_005b2b80(*(int *)((int)param_1 + 0xec));
            if ((this != (void *)0x0) && (iVar2 = FUN_005d8fc0(this,(int)piVar4), iVar2 != 0)) {
              local_c8 = *(float *)(iVar2 + 0x84);
              iVar8 = 1;
              local_c0 = 1;
            }
            iVar11 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x354);
            for (iVar2 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x350); iVar2 != iVar11;
                iVar2 = iVar2 + 0x18) {
              iVar5 = FUN_005d8fc0(*(void **)(iVar2 + 0x14),(int)piVar4);
              if (iVar5 != 0) {
                iVar8 = iVar8 + 1;
                local_c8 = local_c8 + *(float *)(iVar5 + 0x84);
              }
              local_c0 = iVar8;
            }
            if (0 < iVar8) {
              local_c8 = local_c8 / (float)local_c0;
              if (local_c8 <= local_c4) {
                if (local_cc < local_c8) {
                  local_cc = local_c8;
                  local_bc = piVar4;
                }
              }
              else {
                local_cc = local_c4;
                local_bc = local_b8;
                local_c4 = local_c8;
                local_b8 = piVar4;
              }
            }
          }
        }
        iVar7 = iVar7 + 0x18;
      } while (iVar7 != iVar1);
      if (((local_b8 != (int *)0x0) && (local_bc != (int *)0x0)) &&
         (*DAT_01049bdc <= local_c4 - local_cc)) {
        local_ac = local_a0;
        local_a0[0] = 0;
        local_a8 = 0;
        local_a4 = 10;
        local_4 = 0;
        ppuVar6 = &PTR_DAT_00e508dc;
        if (local_b8[0x128] != 0) {
          ppuVar6 = &PTR_DAT_00e508bc;
        }
        FUN_00403de0(local_2c,ppuVar6);
        FUN_00403de0(local_6c,(undefined4 *)&DAT_01049bb8);
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar1 = FUN_009b5f90(local_6c,0xffffffff,local_2c);
        if (iVar1 != 0) {
          FUN_00403e70(&local_ac,(undefined4 *)(iVar1 + 0x40));
        }
        (**(code **)(*local_b8 + 0x5c))(local_4c);
        FUN_0047a630(param_1,apvStack_8c,&local_ac,local_4c,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,4);
        CMovieReview_AddComment(param_1,local_c4 - local_cc,4.76441e-44,apvStack_8c,'\x01',3);
        if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_8c[0]);
        }
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047ece0 @ 0047ece0 ////

void __fastcall FUN_0047ece0(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *this;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  int iVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  int iVar11;
  float local_cc;
  float local_c8;
  float local_c4;
  int local_c0;
  int *local_bc;
  int *local_b8;
  undefined2 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined2 local_a0 [10];
  void *apvStack_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3ece;
  local_c = ExceptionList;
  if (((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
     (ExceptionList = &local_c, iVar1 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar1 != 0)) {
    iVar7 = *(int *)(iVar1 + 100);
    iVar1 = *(int *)(iVar1 + 0x68);
    local_cc = 3.4028235e+38;
    local_c4 = 3.4028235e+38;
    local_b8 = (int *)0x0;
    local_bc = (int *)0x0;
    if (iVar7 != iVar1) {
      do {
        iVar8 = *(int *)(iVar7 + 0x14);
        if (((iVar8 != 0) && (iVar2 = FUN_005a6470(iVar8), iVar2 != 0)) &&
           (uVar3 = FUN_005a6140(iVar8), (char)uVar3 != '\0')) {
          iVar11 = 0;
          pTVar10 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar9 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar2 = 0;
          piVar4 = (int *)FUN_005a6470(iVar8);
          piVar4 = (int *)FUN_00ace790(piVar4,iVar2,pTVar9,pTVar10,iVar11);
          if (piVar4 != (int *)0x0) {
            iVar8 = 0;
            local_c0 = 0;
            local_c8 = 0.0;
            this = (void *)FUN_005b2b80(*(int *)((int)param_1 + 0xec));
            if ((this != (void *)0x0) && (iVar2 = FUN_005d8fc0(this,(int)piVar4), iVar2 != 0)) {
              local_c8 = *(float *)(iVar2 + 0x84);
              iVar8 = 1;
              local_c0 = 1;
            }
            iVar11 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x354);
            for (iVar2 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x350); iVar2 != iVar11;
                iVar2 = iVar2 + 0x18) {
              iVar5 = FUN_005d8fc0(*(void **)(iVar2 + 0x14),(int)piVar4);
              if (iVar5 != 0) {
                iVar8 = iVar8 + 1;
                local_c8 = local_c8 + *(float *)(iVar5 + 0x84);
              }
              local_c0 = iVar8;
            }
            if (0 < iVar8) {
              local_c8 = local_c8 / (float)local_c0;
              if (local_cc <= local_c8) {
                if (local_c8 < local_c4) {
                  local_c4 = local_c8;
                  local_bc = piVar4;
                }
              }
              else {
                local_c4 = local_cc;
                local_bc = local_b8;
                local_cc = local_c8;
                local_b8 = piVar4;
              }
            }
          }
        }
        iVar7 = iVar7 + 0x18;
      } while (iVar7 != iVar1);
      if (((local_b8 != (int *)0x0) && (local_bc != (int *)0x0)) &&
         (*DAT_01049c24 <= local_c4 - local_cc)) {
        local_ac = local_a0;
        local_a0[0] = 0;
        local_a8 = 0;
        local_a4 = 10;
        local_4 = 0;
        ppuVar6 = &PTR_DAT_00e508dc;
        if (local_b8[0x128] != 0) {
          ppuVar6 = &PTR_DAT_00e508bc;
        }
        FUN_00403de0(local_2c,ppuVar6);
        FUN_00403de0(local_6c,(undefined4 *)&DAT_01049c00);
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar1 = FUN_009b5f90(local_6c,0xffffffff,local_2c);
        if (iVar1 != 0) {
          FUN_00403e70(&local_ac,(undefined4 *)(iVar1 + 0x40));
        }
        (**(code **)(*local_b8 + 0x5c))(local_4c);
        FUN_0047a630(param_1,apvStack_8c,&local_ac,local_4c,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,4);
        CMovieReview_AddComment(param_1,local_c4 - local_cc,4.90454e-44,apvStack_8c,'\x01',3);
        if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_8c[0]);
        }
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047f020 @ 0047f020 ////

void __fastcall FUN_0047f020(void *param_1)

{
  void *this;
  float *pfVar1;
  float local_70;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3ef8;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0xec) != 0) {
    ExceptionList = &local_c;
    this = (void *)FUN_005b2b70(*(int *)((int)param_1 + 0xec));
    if (this != (void *)0x0) {
      pfVar1 = (float *)FUN_005dd6e0(this,&local_70);
      local_70 = *pfVar1;
      if (*DAT_01049cfc <= local_70) {
        FUN_00403de0(local_2c,(undefined4 *)&DAT_01049cd8);
        local_4 = 0;
        FUN_009b7190(local_4c,local_2c,'\0',0);
        FUN_0047a630(param_1,local_6c,local_4c,(undefined4 *)0x0,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,2);
        CMovieReview_AddComment(param_1,1.0 - local_70,5.32493e-44,local_6c,'\0',3);
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047f140 @ 0047f140 ////

void __fastcall FUN_0047f140(void *param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  int iVar8;
  float local_bc;
  float local_b8;
  int local_b4;
  void *local_b0;
  undefined1 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined1 local_a0 [20];
  undefined2 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80 [10];
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3f3e;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0xec) != 0) {
    ExceptionList = &local_c;
    local_b0 = param_1;
    iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xec));
    local_b4 = FUN_005b2b70(*(int *)((int)param_1 + 0xec));
    if ((iVar2 != 0) && (local_b4 != 0)) {
      iVar8 = *(int *)(iVar2 + 100);
      iVar2 = *(int *)(iVar2 + 0x68);
      piVar7 = (int *)0x0;
      local_bc = -3.4028235e+38;
      if (iVar8 != iVar2) {
        do {
          iVar1 = *(int *)(iVar8 + 0x14);
          if ((((iVar1 != 0) && (iVar3 = FUN_005a6470(iVar1), iVar3 != 0)) &&
              (uVar4 = FUN_005a6140(iVar1), (char)uVar4 != '\0')) &&
             (piVar5 = (int *)FUN_005a6470(iVar1), piVar5 != (int *)0x0)) {
            local_b8 = 0.0;
            FUN_005dd700(piVar5,&local_b8);
            if (local_bc < local_b8) {
              local_bc = local_b8;
              piVar7 = piVar5;
            }
          }
          iVar8 = iVar8 + 0x18;
        } while (iVar8 != iVar2);
        if ((piVar7 != (int *)0x0) && (*DAT_01049d8c <= local_bc)) {
          local_8c = local_80;
          local_80[0] = 0;
          local_88 = 0;
          local_84 = 10;
          local_4 = 0;
          ppuVar6 = &PTR_DAT_00e508dc;
          if (piVar7[0x128] != 0) {
            ppuVar6 = &PTR_DAT_00e508bc;
          }
          local_68 = 0;
          local_6c = local_60;
          local_60[0] = 0;
          local_64 = 0x14;
          FUN_004015d0(&local_6c,*ppuVar6,(uint)ppuVar6[1]);
          local_ac = local_a0;
          local_a0[0] = 0;
          local_a8 = 0;
          local_a4 = 0x14;
          FUN_004015d0(&local_ac,DAT_01049d68,DAT_01049d6c);
          local_4 = CONCAT31(local_4._1_3_,2);
          iVar2 = FUN_009b5f90(&local_ac,0xffffffff,&local_6c);
          if (iVar2 != 0) {
            FUN_004036d0(&local_8c,*(wchar_t **)(iVar2 + 0x40),*(uint *)(iVar2 + 0x44));
          }
          (**(code **)(*piVar7 + 0x5c))(local_2c);
          this = local_b0;
          FUN_0047a630(local_b0,apvStack_4c,&local_8c,local_2c,(undefined4 *)0x0);
          local_4 = CONCAT31(local_4._1_3_,4);
          CMovieReview_AddComment(this,1.0 - local_bc,5.60519e-44,apvStack_4c,'\0',3);
          if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_4c[0]);
          }
          if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ac);
          }
          if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c);
          }
          if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047f3e0 @ 0047f3e0 ////

void __fastcall FUN_0047f3e0(void *param_1)

{
  void *this;
  float *pfVar1;
  float local_70;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3f68;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0xec) != 0) {
    ExceptionList = &local_c;
    this = (void *)FUN_005b2b70(*(int *)((int)param_1 + 0xec));
    if (this != (void *)0x0) {
      pfVar1 = (float *)FUN_005dd6f0(this,&local_70);
      local_70 = *pfVar1;
      if (*DAT_01049dd4 <= local_70) {
        FUN_00403de0(local_2c,(undefined4 *)&DAT_01049db0);
        local_4 = 0;
        FUN_009b7190(local_4c,local_2c,'\0',0);
        FUN_0047a630(param_1,local_6c,local_4c,(undefined4 *)0x0,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,2);
        CMovieReview_AddComment(param_1,1.0 - local_70,5.74532e-44,local_6c,'\0',3);
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047f500 @ 0047f500 ////

void __fastcall FUN_0047f500(void *param_1)

{
  void *this;
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  float local_90;
  undefined2 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80 [10];
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3fa3;
  local_c = ExceptionList;
  if ((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) {
    ExceptionList = &local_c;
    this = (void *)FUN_005b2b70(*(int *)((int)param_1 + 0xec));
    if (this != (void *)0x0) {
      pfVar1 = (float *)FUN_005dd7f0(this,&local_90);
      local_90 = *pfVar1;
      if (*DAT_01049e1c <= local_90) {
        local_8c = local_80;
        local_80[0] = 0;
        local_88 = 0;
        local_84 = 10;
        local_4 = 0;
        FUN_00403de0(local_6c,&PTR_DAT_00e5089c);
        local_4 = CONCAT31(local_4._1_3_,1);
        iVar2 = FUN_005b2770(*(int *)((int)param_1 + 0xec));
        if (iVar2 != 0) {
          puVar3 = (undefined4 *)FUN_00449b40(iVar2);
          FUN_00401e30(local_6c,puVar3);
        }
        FUN_00403de0(local_2c,(undefined4 *)&DAT_01049df8);
        local_4._0_1_ = 2;
        puVar4 = FUN_009b7750(local_2c,0xffffffff,local_6c);
        if (puVar4 != (undefined *)0x0) {
          FUN_00403e70(&local_8c,(undefined4 *)(puVar4 + 0x40));
          FUN_0047a630(param_1,local_4c,&local_8c,(undefined4 *)0x0,(undefined4 *)0x0);
          local_4._0_1_ = 3;
          CMovieReview_AddComment(param_1,1.0 - local_90,5.88545e-44,local_4c,'\x01',3);
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c[0]);
          }
        }
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION Release_CheckTrendsetterAward @ 0047f6b0 ////

void __fastcall Release_CheckTrendsetterAward(void *param_1)

{
  undefined1 uVar1;
  int iVar2;
  void *this;
  float *pfVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  float local_90;
  undefined2 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80 [10];
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca3fd3;
  local_c = ExceptionList;
  if ((((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
      (ExceptionList = &local_c, iVar2 = FUN_005b2770(*(int *)((int)param_1 + 0xec)), iVar2 != 0))
     && (this = (void *)FUN_005b2b70(*(int *)((int)param_1 + 0xec)), this != (void *)0x0)) {
    pfVar3 = (float *)Release_GetNormalizedGenrePopularity(this,&local_90);
    local_90 = *pfVar3;
    if (*DAT_01049f84 <= local_90) {
      puVar4 = (undefined4 *)FUN_00449b40(iVar2);
      FUN_00403de0(local_2c,puVar4);
      local_4 = 0;
      FUN_00403de0(local_4c,(undefined4 *)&DAT_01049f60);
      local_4._0_1_ = 1;
      puVar5 = FUN_009b7750(local_4c,0xffffffff,local_2c);
      local_8c = local_80;
      local_80[0] = 0;
      local_88 = 0;
      local_84 = 10;
      local_4._0_1_ = 2;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 2;
      if (puVar5 != (undefined *)0x0) {
        FUN_00403e70(&local_8c,(undefined4 *)(puVar5 + 0x40));
        FUN_0047a630(param_1,local_6c,&local_8c,(undefined4 *)0x0,(undefined4 *)0x0);
        local_4._0_1_ = 3;
        CMovieReview_AddComment(param_1,local_90,6.5861e-44,local_6c,'\x01',3);
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        uVar1 = (undefined1)local_4;
        if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c);
        }
      }
      local_4._0_1_ = uVar1;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
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


//// FUNCTION FUN_0047f850 @ 0047f850 ////

void __fastcall FUN_0047f850(void *param_1)

{
  undefined1 uVar1;
  int iVar2;
  void *this;
  float *pfVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  float local_90;
  undefined2 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80 [10];
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4003;
  local_c = ExceptionList;
  if ((((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
      (ExceptionList = &local_c, iVar2 = FUN_005b2770(*(int *)((int)param_1 + 0xec)), iVar2 != 0))
     && (this = (void *)FUN_005b2b70(*(int *)((int)param_1 + 0xec)), this != (void *)0x0)) {
    pfVar3 = (float *)Release_GetNormalizedGenrePopularity(this,&local_90);
    local_90 = *pfVar3;
    if (local_90 < *DAT_01049fcc != (local_90 == *DAT_01049fcc)) {
      puVar4 = (undefined4 *)FUN_00449b40(iVar2);
      FUN_00403de0(local_2c,puVar4);
      local_4 = 0;
      FUN_00403de0(local_4c,(undefined4 *)&DAT_01049fa8);
      local_4._0_1_ = 1;
      puVar5 = FUN_009b7750(local_4c,0xffffffff,local_2c);
      local_8c = local_80;
      local_80[0] = 0;
      local_88 = 0;
      local_84 = 10;
      local_4._0_1_ = 2;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 2;
      if (puVar5 != (undefined *)0x0) {
        FUN_00403e70(&local_8c,(undefined4 *)(puVar5 + 0x40));
        FUN_0047a630(param_1,local_6c,&local_8c,(undefined4 *)0x0,(undefined4 *)0x0);
        local_4._0_1_ = 3;
        CMovieReview_AddComment(param_1,local_90,6.72623e-44,local_6c,'\x01',3);
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        uVar1 = (undefined1)local_4;
        if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c);
        }
      }
      local_4._0_1_ = uVar1;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
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


//// FUNCTION Release_NotifyIfMostPopularGenreChanged @ 0047f9f0 ////

void __fastcall Release_NotifyIfMostPopularGenreChanged(void *param_1)

{
  undefined1 uVar1;
  int iVar2;
  void *this;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  float local_90;
  undefined2 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80 [10];
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4033;
  local_c = ExceptionList;
  if ((((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
      (ExceptionList = &local_c, iVar2 = FUN_005b6b90(*(int *)((int)param_1 + 0xec)), iVar2 != 0))
     && (this = (void *)FUN_005b2b70(*(int *)((int)param_1 + 0xec)), this != (void *)0x0)) {
    pfVar3 = (float *)Release_GetNormalizedGenrePopularity(this,&local_90);
    local_90 = *pfVar3;
    if (local_90 < *DAT_0104a014 != (local_90 == *DAT_0104a014)) {
      FUN_005202b0();
      iVar4 = AudienceTaste_GetMostPopularGenre();
      if (iVar4 != iVar2) {
        puVar5 = (undefined4 *)FUN_00449b40(iVar4);
        FUN_00403de0(local_2c,puVar5);
        local_4 = 0;
        FUN_00403de0(local_4c,(undefined4 *)&DAT_01049ff0);
        local_4._0_1_ = 1;
        puVar6 = FUN_009b7750(local_4c,0xffffffff,local_2c);
        local_8c = local_80;
        local_80[0] = 0;
        local_88 = 0;
        local_84 = 10;
        local_4._0_1_ = 2;
        uVar1 = (undefined1)local_4;
        local_4._0_1_ = 2;
        if (puVar6 != (undefined *)0x0) {
          FUN_00403e70(&local_8c,(undefined4 *)(puVar6 + 0x40));
          FUN_0047a630(param_1,local_6c,&local_8c,(undefined4 *)0x0,(undefined4 *)0x0);
          local_4._0_1_ = 3;
          CMovieReview_AddComment(param_1,local_90,6.86636e-44,local_6c,'\x01',3);
          if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c[0]);
          }
          uVar1 = (undefined1)local_4;
          if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c);
          }
        }
        local_4._0_1_ = uVar1;
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047fbb0 @ 0047fbb0 ////

void __fastcall FUN_0047fbb0(void *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  float local_50;
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
  puStack_8 = &LAB_00ca4069;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_4c,"facility_research",0x11);
  local_48 = 0x11;
  local_4c[0x11] = '\0';
  local_4 = 0;
  uVar3 = thunk_FUN_009623a0(&local_4c);
  cVar2 = FUN_00960f30(uVar3);
  if ((cVar2 == '\0') || (bVar1 = false, *(int *)((int)param_1 + 0xec) == 0)) {
    bVar1 = true;
  }
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (!bVar1) {
    iVar4 = FUN_005b2b70(*(int *)((int)param_1 + 0xec));
    if (iVar4 != 0) {
      fVar5 = FUN_005dcfa0(iVar4);
      local_50 = 0.5;
      if ((float10)1.0 != fVar5) {
        local_50 = 1.0;
      }
      FUN_0047b850(param_1,local_2c,local_50,0x2e,'\0');
      local_4 = 1;
      FUN_0047a630(param_1,&local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,2);
      CMovieReview_AddComment(param_1,local_50,6.44597e-44,&local_4c,'\0',3);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047fd30 @ 0047fd30 ////

void __fastcall FUN_0047fd30(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  undefined **ppuVar7;
  int *piVar8;
  int iVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  int iVar12;
  float local_bc;
  undefined2 *local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined2 local_a4 [10];
  float local_90;
  void *local_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca40ae;
  local_c = ExceptionList;
  if ((((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
      (ExceptionList = &local_c, iVar2 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar2)) &&
     (iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar2 != 0)) {
    iVar9 = *(int *)(iVar2 + 100);
    iVar2 = *(int *)(iVar2 + 0x68);
    piVar8 = (int *)0x0;
    local_bc = 1.0;
    if (iVar9 != iVar2) {
      do {
        iVar1 = *(int *)(iVar9 + 0x14);
        if (((iVar1 != 0) && (iVar3 = FUN_005a6470(iVar1), iVar3 != 0)) &&
           (iVar3 = FUN_005a64e0(iVar1), iVar3 != 0)) {
          iVar12 = 0;
          pTVar11 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar10 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar3 = 0;
          piVar4 = (int *)FUN_005a6470(iVar1);
          piVar4 = (int *)FUN_00ace790(piVar4,iVar3,pTVar10,pTVar11,iVar12);
          piVar5 = (int *)FUN_005a64e0(iVar1);
          pfVar6 = (float *)FUN_00597820(&local_90,piVar4,piVar5);
          if ((piVar4 != (int *)0x0) && (*pfVar6 < local_bc)) {
            piVar8 = piVar4;
            local_bc = *pfVar6;
          }
        }
        iVar9 = iVar9 + 0x18;
      } while (iVar9 != iVar2);
      if ((piVar8 != (int *)0x0) && (local_bc < *DAT_0104a44c != (local_bc == *DAT_0104a44c))) {
        local_b0 = local_a4;
        local_a4[0] = 0;
        local_ac = 0;
        local_a8 = 10;
        local_4 = 0;
        ppuVar7 = &PTR_DAT_00e508dc;
        if (piVar8[0x128] != 0) {
          ppuVar7 = &PTR_DAT_00e508bc;
        }
        FUN_00403de0(local_2c,ppuVar7);
        FUN_00403de0(local_6c,(undefined4 *)&DAT_0104a428);
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar2 = FUN_009b5f90(local_6c,0xffffffff,local_2c);
        if (iVar2 != 0) {
          FUN_00403e70(&local_b0,(undefined4 *)(iVar2 + 0x40));
        }
        (**(code **)(*piVar8 + 0x5c))(local_8c);
        FUN_0047a630(param_1,apvStack_4c,&local_b0,local_8c,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,4);
        CMovieReview_AddComment(param_1,local_bc,8.96831e-44,apvStack_4c,'\x01',3);
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c[0]);
        }
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_b0);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0047ffb0 @ 0047ffb0 ////

void __fastcall FUN_0047ffb0(void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *this;
  float *pfVar6;
  undefined **ppuVar7;
  int iVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  float local_f0;
  int *local_ec;
  float local_e8;
  int *local_e4;
  float local_e0;
  float local_dc;
  undefined2 *local_d4;
  undefined4 local_d0;
  uint local_cc;
  undefined2 local_c8;
  ushort *local_b4;
  undefined4 local_b0;
  uint local_ac;
  ushort local_a8 [10];
  undefined1 *local_94;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [20];
  int local_74;
  void *apvStack_70 [2];
  uint uStack_68;
  undefined1 auStack_54 [4];
  void *apvStack_50 [2];
  uint uStack_48;
  undefined4 local_30;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4132;
  local_c = ExceptionList;
  if (((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
     (ExceptionList = &local_c, iVar2 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar2)) {
    local_dc = *DAT_0104a4dc;
    local_e8 = *DAT_0104a494;
    local_e4 = (int *)0x0;
    local_ec = (int *)0x0;
    iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xec));
    if (iVar2 != 0) {
      iVar8 = *(int *)(iVar2 + 100);
      local_74 = *(int *)(iVar2 + 0x68);
      if (iVar8 != local_74) {
        do {
          iVar2 = *(int *)(iVar8 + 0x14);
          local_e0 = 0.0;
          local_f0 = 0.0;
          if ((iVar2 != 0) && (iVar3 = FUN_005a6470(iVar2), iVar3 != 0)) {
            iVar3 = FUN_005a64e0(iVar2);
            if (iVar3 != 0) {
              iVar3 = FUN_005a64e0(iVar2);
              iVar4 = FUN_005a6470(iVar2);
              if (iVar4 != iVar3) goto LAB_00480188;
            }
            iVar4 = 0;
            pTVar10 = &TM::CStar::RTTI_Type_Descriptor;
            pTVar9 = &TM::CStaff::RTTI_Type_Descriptor;
            iVar3 = 0;
            piVar5 = (int *)FUN_005a6470(iVar2);
            piVar5 = (int *)FUN_00ace790(piVar5,iVar3,pTVar9,pTVar10,iVar4);
            if ((piVar5 != (int *)0x0) &&
               (iVar2 = *(int *)(*(int *)((int)param_1 + 0xec) + 0xac),
               iVar2 != *(int *)((int)param_1 + 0xec) + 0xb8)) {
              do {
                this = (void *)FUN_004e0620(*(void **)(iVar2 + 8),(int)piVar5);
                if ((this != (void *)0x0) &&
                   (pfVar6 = (float *)FUN_0048c9e0(this,&local_30), 0.0 < *pfVar6)) {
                  cVar1 = FUN_004de210(*(int *)(iVar2 + 8));
                  if (cVar1 == '\0') {
                    local_e0 = local_e0 + 1.0;
                  }
                  local_f0 = local_f0 + 1.0;
                }
                iVar2 = *(int *)(iVar2 + 4);
              } while (iVar2 != *(int *)((int)param_1 + 0xec) + 0xb8);
              if (0.0 < local_f0) {
                local_e0 = local_e0 / local_f0;
                if (local_e0 < local_dc) {
                  local_e4 = piVar5;
                  local_dc = local_e0;
                }
                if (local_e8 < local_e0) {
                  local_ec = piVar5;
                  local_e8 = local_e0;
                }
              }
            }
          }
LAB_00480188:
          iVar8 = iVar8 + 0x18;
        } while (iVar8 != local_74);
        if (local_e4 != (int *)0x0) {
          local_b4 = local_a8;
          local_a8[0] = 0;
          local_b0 = 0;
          local_ac = 10;
          local_4 = 0;
          ppuVar7 = &PTR_DAT_00e508dc;
          if (local_e4[0x128] != 0) {
            ppuVar7 = &PTR_DAT_00e508bc;
          }
          local_94 = local_88;
          local_88[0] = 0;
          local_90 = 0;
          local_8c = 0x14;
          FUN_004015d0(&local_94,*ppuVar7,(uint)ppuVar7[1]);
          local_d4 = &local_c8;
          local_c8 = (ushort)local_c8._1_1_ << 8;
          local_d0 = 0;
          local_cc = 0x14;
          FUN_004015d0(&local_d4,DAT_0104a4b8,DAT_0104a4bc);
          local_4 = CONCAT31(local_4._1_3_,2);
          iVar2 = FUN_009b5f90(&local_d4,0xffffffff,&local_94);
          if (iVar2 != 0) {
            FUN_004036d0(&local_b4,*(wchar_t **)(iVar2 + 0x40),*(uint *)(iVar2 + 0x44));
          }
          (**(code **)(*local_e4 + 0x5c))(local_2c);
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
          piVar5 = (int *)GetPlayerStudio();
          (**(code **)(*piVar5 + 0x20))(auStack_54);
          FUN_0047a630(param_1,apvStack_70,&local_b4,local_2c,apvStack_50);
          local_4 = CONCAT31(local_4._1_3_,5);
          CMovieReview_AddComment(param_1,local_dc,9.24857e-44,apvStack_70,'\x01',3);
          if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_70[0]);
          }
          if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_50[0]);
          }
          if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
            _free(local_d4);
          }
          if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
            _free(local_94);
          }
          local_4 = 0xffffffff;
          if (10 < local_ac) {
                    /* WARNING: Subroutine does not return */
            _free(local_b4);
          }
        }
        if (local_ec != (int *)0x0) {
          local_d4 = &local_c8;
          local_c8 = 0;
          local_d0 = 0;
          local_cc = 10;
          local_4 = 6;
          ppuVar7 = &PTR_DAT_00e508dc;
          if (local_ec[0x128] != 0) {
            ppuVar7 = &PTR_DAT_00e508bc;
          }
          local_94 = local_88;
          local_88[0] = 0;
          local_90 = 0;
          local_8c = 0x14;
          FUN_004015d0(&local_94,*ppuVar7,(uint)ppuVar7[1]);
          local_b4 = local_a8;
          local_a8[0] = local_a8[0] & 0xff00;
          local_b0 = 0;
          local_ac = 0x14;
          FUN_004015d0(&local_b4,DAT_0104a470,DAT_0104a474);
          local_4 = CONCAT31(local_4._1_3_,8);
          iVar2 = FUN_009b5f90(&local_b4,0xffffffff,&local_94);
          if (iVar2 != 0) {
            FUN_004036d0(&local_d4,*(wchar_t **)(iVar2 + 0x40),*(uint *)(iVar2 + 0x44));
          }
          (**(code **)(*local_ec + 0x5c))(apvStack_70);
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
          piVar5 = (int *)GetPlayerStudio();
          (**(code **)(*piVar5 + 0x20))(auStack_54);
          FUN_0047a630(param_1,local_2c,&local_d4,apvStack_70,apvStack_50);
          local_4 = CONCAT31(local_4._1_3_,0xb);
          CMovieReview_AddComment(param_1,local_e8,9.10844e-44,local_2c,'\x01',3);
          if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_50[0]);
          }
          if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_70[0]);
          }
          if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
            _free(local_b4);
          }
          if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
            _free(local_94);
          }
          if (10 < local_cc) {
                    /* WARNING: Subroutine does not return */
            _free(local_d4);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00480540 @ 00480540 ////

void __fastcall FUN_00480540(void *param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  void *this;
  float *pfVar4;
  int *piVar5;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  void *apvStack_cc [2];
  uint uStack_c4;
  void *apvStack_ac [2];
  uint uStack_a4;
  void *local_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4179;
  local_c = ExceptionList;
  if (((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
     (ExceptionList = &local_c, iVar3 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar3)) {
    iVar3 = *(int *)(*(int *)((int)param_1 + 0xec) + 0xac);
    local_d4 = 0.0;
    local_dc = 0.0;
    local_d8 = 0.0;
    if (iVar3 != *(int *)((int)param_1 + 0xec) + 0xb8) {
      do {
        if ((*(int *)((int)*(float *)(iVar3 + 8) + 0x1c0) == 4) &&
           (uVar2 = FUN_004e0fd0(*(float *)(iVar3 + 8)), (char)uVar2 != '\0')) {
          local_d4 = local_d4 + 1.0;
          pfVar4 = &local_d0;
          this = (void *)FUN_004df4a0(*(int *)(iVar3 + 8));
          pfVar4 = (float *)FUN_004b58b0(this,pfVar4);
          local_d8 = *pfVar4 + local_d8;
          cVar1 = FUN_004de210(*(int *)(iVar3 + 8));
          if (cVar1 == '\0') {
            local_dc = local_dc + 1.0;
          }
        }
        iVar3 = *(int *)(iVar3 + 4);
      } while (iVar3 != *(int *)((int)param_1 + 0xec) + 0xb8);
      if (0.0 < local_d4) {
        local_d8 = local_d8 * (1.0 / local_d4);
        local_dc = (1.0 / local_d4) * local_dc;
        if (0.3 <= local_dc) {
          if (local_dc <= 0.7) {
            ExceptionList = local_c;
            return;
          }
          FUN_0047b850(param_1,local_2c,local_d8,0x44,'\0');
          local_4 = 3;
          piVar5 = (int *)GetPlayerStudio();
          (**(code **)(*piVar5 + 0x20))(local_6c);
          FUN_0047a630(param_1,apvStack_ac,local_2c,(undefined4 *)0x0,local_6c);
          local_4 = CONCAT31(local_4._1_3_,5);
          CMovieReview_AddComment(param_1,local_dc,9.52883e-44,apvStack_ac,'\x01',3);
          if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_ac[0]);
          }
          if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c[0]);
          }
        }
        else {
          FUN_0047b850(param_1,local_4c,local_d8,0x43,'\0');
          local_4 = 0;
          piVar5 = (int *)GetPlayerStudio();
          (**(code **)(*piVar5 + 0x20))(local_8c);
          FUN_0047a630(param_1,apvStack_cc,local_4c,(undefined4 *)0x0,local_8c);
          local_4 = CONCAT31(local_4._1_3_,2);
          CMovieReview_AddComment(param_1,local_dc,9.3887e-44,apvStack_cc,'\x01',3);
          if (10 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_cc[0]);
          }
          local_2c[0] = local_4c[0];
          uStack_24 = uStack_44;
          if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c[0]);
          }
        }
        if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION Review_GetEraLeniencyFactor @ 00480810 ////

float10 Review_GetEraLeniencyFactor(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  ulonglong uVar5;
  
  uVar5 = FUN_0043b560();
  iVar1 = (int)uVar5;
  if (iVar1 <= *DAT_01049204) {
    return (float10)(float)DAT_01049204[1];
  }
  if (iVar1 < *(int *)(DAT_01049208 + -8)) {
    fVar4 = (float10)1.0;
    iVar2 = 0;
    iVar3 = (DAT_01049208 - (int)DAT_01049204 >> 3) + -1;
    if (0 < iVar3) {
      while ((iVar1 < DAT_01049204[iVar2 * 2] || (DAT_01049204[iVar2 * 2 + 2] < iVar1))) {
        iVar2 = iVar2 + 1;
        if (iVar3 <= iVar2) {
          return fVar4;
        }
      }
      fVar4 = ((float10)(float)DAT_01049204[iVar2 * 2 + 3] -
              (float10)(float)DAT_01049204[iVar2 * 2 + 1]) *
              ((float10)(iVar1 - DAT_01049204[iVar2 * 2]) /
              (float10)(DAT_01049204[iVar2 * 2 + 2] - DAT_01049204[iVar2 * 2])) +
              (float10)(float)DAT_01049204[iVar2 * 2 + 1];
    }
    return fVar4;
  }
  return (float10)*(float *)(DAT_01049208 + -4);
}


//// FUNCTION FUN_004808a0 @ 004808a0 ////

undefined4 * FUN_004808a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0047b000(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_004808d0 @ 004808d0 ////

undefined4 * FUN_004808d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0047b040(param_1,param_2,param_3);
  return param_1 + param_2 * 2;
}


//// FUNCTION FUN_004809a0 @ 004809a0 ////

void __fastcall FUN_004809a0(int param_1)

{
  if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (0x14 < *(uint *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x18));
  }
  return;
}


//// FUNCTION FUN_004809e0 @ 004809e0 ////

void __fastcall FUN_004809e0(void *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca41a0;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0xec) != 0) {
    ExceptionList = &local_c;
    iVar2 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec));
    if (0 < iVar2) {
      pfVar3 = (float *)CProject_GetQualityWithAwardBoost(*(void **)((int)param_1 + 0xec),&local_50)
      ;
      fVar1 = *pfVar3;
      fVar4 = Review_GetEraLeniencyFactor();
      FUN_0047b850(param_1,local_2c,(float)(fVar4 * (float10)fVar1),0,'\x01');
      local_4 = 0;
      FUN_0047a630(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,1);
      CMovieReview_AddComment(param_1,(float)(fVar4 * (float10)fVar1),0.0,local_4c,'\0',3);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00480ad0 @ 00480ad0 ////

void __fastcall FUN_00480ad0(void *param_1)

{
  float fVar1;
  int iVar2;
  void *this;
  float *pfVar3;
  float10 fVar4;
  undefined4 *puVar5;
  undefined4 local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca41c0;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0xec) != 0) {
    ExceptionList = &local_c;
    iVar2 = FUN_005b2130(*(int *)((int)param_1 + 0xec));
    if (iVar2 != 0) {
      puVar5 = &local_50;
      this = (void *)FUN_005b2130(*(int *)((int)param_1 + 0xec));
      pfVar3 = (float *)FUN_004bdbc0(this,puVar5);
      fVar1 = *pfVar3;
      fVar4 = Review_GetEraLeniencyFactor();
      FUN_0047b850(param_1,local_2c,(float)(fVar4 * (float10)fVar1),1,'\x01');
      local_4 = 0;
      FUN_0047a630(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,1);
      CMovieReview_AddComment(param_1,(float)(fVar4 * (float10)fVar1),1.4013e-45,local_4c,'\0',3);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00480bc0 @ 00480bc0 ////

void __fastcall FUN_00480bc0(void *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  void *this;
  float *pfVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float local_d0;
  void *local_cc [2];
  uint local_c4;
  void *local_ac [2];
  uint local_a4;
  void *local_8c [2];
  uint local_84;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4201;
  local_c = ExceptionList;
  if (((*(int *)((int)param_1 + 0xec) != 0) &&
      (ExceptionList = &local_c, cVar3 = FUN_005b3c80(*(int *)((int)param_1 + 0xec)), cVar3 == '\0')
      ) && (this = (void *)FUN_005b2b70(*(int *)((int)param_1 + 0xec)), this != (void *)0x0)) {
    pfVar4 = (float *)CProject_GetQualityWithAwardBoost(*(void **)((int)param_1 + 0xec),&local_d0);
    fVar1 = *pfVar4;
    pfVar4 = (float *)FUN_005dd5c0(this,&local_d0);
    local_d0 = ((*pfVar4 - fVar1) * 5.0 + 1.0) * 0.5;
    fVar6 = Review_GetEraLeniencyFactor();
    fVar2 = local_d0;
    FUN_0040e0c0((int *)local_6c,0x1049998,local_d0);
    local_4 = 0;
    FUN_0040e0c0((int *)local_ac,0x104a578,(float)(fVar6 * (float10)fVar1));
    puVar5 = FUN_0047aee0(local_2c,(undefined4 *)&DAT_01049978,local_6c);
    FUN_0047aee0(local_4c,puVar5,local_ac);
    local_4._0_1_ = 2;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    FUN_009b7190(local_cc,local_4c,'\0',0);
    FUN_0047a630(param_1,local_8c,local_cc,(undefined4 *)0x0,(undefined4 *)0x0);
    local_4 = CONCAT31(local_4._1_3_,4);
    CMovieReview_AddComment(param_1,fVar2,3.64338e-44,local_8c,'\0',3);
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc[0]);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00480dc0 @ 00480dc0 ////

void __fastcall FUN_00480dc0(void *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  float10 fVar6;
  float local_70;
  void *apvStack_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4228;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0xec) != 0) {
    ExceptionList = &local_c;
    cVar2 = FUN_005b3c80(*(int *)((int)param_1 + 0xec));
    if (cVar2 == '\0') {
      iVar3 = FUN_0047acb0((int)param_1);
      if (iVar3 == 0) {
        pfVar4 = (float *)CProject_GetQualityWithAwardBoost
                                    (*(void **)((int)param_1 + 0xec),&local_70);
        fVar1 = *pfVar4;
        fVar6 = Review_GetEraLeniencyFactor();
        FUN_0047b850(param_1,local_2c,(float)(fVar6 * (float10)fVar1),0x3d,'\x01');
        local_4 = 0;
        piVar5 = (int *)GetPlayerStudio();
        (**(code **)(*piVar5 + 0x20))(local_4c);
        FUN_0047a630(param_1,apvStack_6c,local_2c,(undefined4 *)0x0,local_4c);
        local_4 = CONCAT31(local_4._1_3_,2);
        CMovieReview_AddComment
                  (param_1,(float)(fVar6 * (float10)fVar1),8.54792e-44,apvStack_6c,'\0',3);
        if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_6c[0]);
        }
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00480ee0 @ 00480ee0 ////

void __fastcall FUN_00480ee0(void *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  float10 fVar6;
  float local_70;
  void *apvStack_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4258;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0xec) != 0) {
    ExceptionList = &local_c;
    cVar2 = FUN_005b3c80(*(int *)((int)param_1 + 0xec));
    if (cVar2 == '\0') {
      iVar3 = FUN_0047acb0((int)param_1);
      if (iVar3 == 1) {
        pfVar4 = (float *)CProject_GetQualityWithAwardBoost
                                    (*(void **)((int)param_1 + 0xec),&local_70);
        fVar1 = *pfVar4;
        fVar6 = Review_GetEraLeniencyFactor();
        FUN_0047b850(param_1,local_2c,(float)(fVar6 * (float10)fVar1),0x3e,'\x01');
        local_4 = 0;
        piVar5 = (int *)GetPlayerStudio();
        (**(code **)(*piVar5 + 0x20))(local_4c);
        FUN_0047a630(param_1,apvStack_6c,local_2c,(undefined4 *)0x0,local_4c);
        local_4 = CONCAT31(local_4._1_3_,2);
        CMovieReview_AddComment
                  (param_1,(float)(fVar6 * (float10)fVar1),8.68805e-44,apvStack_6c,'\0',3);
        if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_6c[0]);
        }
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00481000 @ 00481000 ////

int * FUN_00481000(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_0047b760(param_1,param_2,param_3);
  return param_1 + param_2 * 8;
}


//// FUNCTION FUN_00481030 @ 00481030 ////

void __fastcall FUN_00481030(int param_1)

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


//// FUNCTION FUN_00481060 @ 00481060 ////

void __fastcall FUN_00481060(int param_1)

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


//// FUNCTION FUN_00481090 @ 00481090 ////

void FUN_00481090(undefined4 *param_1,undefined4 *param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (10 < (uint)param_1[2]) break;
    param_1 = param_1 + 8;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_004810c0 @ 004810c0 ////

void __fastcall FUN_004810c0(int param_1)

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


//// FUNCTION FUN_004810f0 @ 004810f0 ////

void __fastcall FUN_004810f0(int param_1)

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


//// FUNCTION FUN_00481120 @ 00481120 ////

void __fastcall FUN_00481120(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    FUN_00481090(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00481160 @ 00481160 ////

void __thiscall FUN_00481160(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  if (param_2 != param_3) {
    piVar1 = FUN_0047a030(param_3,*(undefined4 **)((int)this + 8),param_2);
    FUN_00481090(piVar1,*(undefined4 **)((int)this + 8));
    *(int **)((int)this + 8) = piVar1;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_004811b0 @ 004811b0 ////

void __fastcall FUN_004811b0(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    FUN_00481090(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_004811f0 @ 004811f0 ////

void __fastcall FUN_004811f0(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    FUN_00481090(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00481230 @ 00481230 ////

void FUN_00481230(void)

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
  puStack_8 = &LAB_00ca4278;
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


//// FUNCTION FUN_004812a0 @ 004812a0 ////

void FUN_004812a0(void)

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
  puStack_8 = &LAB_00ca4298;
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


//// FUNCTION FUN_00481310 @ 00481310 ////

void FUN_00481310(void)

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
  puStack_8 = &LAB_00ca42b8;
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


//// FUNCTION FUN_00481380 @ 00481380 ////

void __fastcall FUN_00481380(int param_1)

{
  uint uVar1;
  
  FUN_00410060(param_1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0xf0),(wchar_t *)&lpCaption_00d16918,uVar1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0x110),(wchar_t *)&lpCaption_00d16918,uVar1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0x130),(wchar_t *)&lpCaption_00d16918,uVar1);
  if (*(undefined4 **)(param_1 + 0x154) != (undefined4 *)0x0) {
    FUN_00481090(*(undefined4 **)(param_1 + 0x154),*(undefined4 **)(param_1 + 0x158));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x154));
  }
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  return;
}


//// FUNCTION FUN_00481520 @ 00481520 ////

void __thiscall FUN_00481520(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00409310();
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
      _Dst = FUN_0047b670((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0047af90(param_1,iVar5,param_1 + param_2);
      FUN_0047b670(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00479770(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0047af90(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00479ee0(param_1,(int)pvVar3,iVar5);
    FUN_00479770(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00481700 @ 00481700 ////

void __thiscall FUN_00481700(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int extraout_ECX;
  int iVar6;
  undefined2 *local_3c;
  undefined4 local_38;
  uint local_34;
  undefined2 local_30 [10];
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca42d8;
  local_10 = ExceptionList;
  local_3c = local_30;
  local_14 = &stack0xffffffb8;
  local_30[0] = 0;
  local_38 = 0;
  local_34 = 10;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004036d0(&local_3c,(wchar_t *)*param_3,param_3[1]);
  iVar3 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0xc) - iVar3 >> 5;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar3 >> 5;
    }
    if (0x7ffffffU - iVar6 < param_2) {
      uVar2 = FUN_00481230();
      iVar3 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar3 >> 5;
    }
    if (uVar2 < iVar6 + param_2) {
      if (0x7ffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - iVar3 >> 5;
      }
      if (uVar2 < iVar6 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)this + 8) - iVar3 >> 5;
        }
        uVar2 = iVar3 + param_2;
      }
      piVar4 = operator_new(uVar2 * 0x20);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar4;
      piVar5 = FUN_0047b130(*(undefined4 **)((int)this + 4),param_1,piVar4);
      FUN_0047b760(piVar5,param_2,&local_3c);
      FUN_0047b130(param_1,*(undefined4 **)((int)this + 8),piVar5 + param_2 * 8);
      puVar1 = *(undefined4 **)((int)this + 4);
      if (puVar1 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - (int)puVar1 >> 5;
      }
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00481090(puVar1,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar4 + uVar2 * 8;
      *(int **)((int)this + 8) = piVar4 + (param_2 + iVar3) * 8;
      *(int **)((int)this + 4) = piVar4;
    }
    else {
      local_1c = *(int **)((int)this + 8);
      if ((uint)((int)local_1c - (int)param_1 >> 5) < param_2) {
        FUN_0047b130(param_1,local_1c,param_1 + param_2 * 8);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00481000(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1 >> 5),&local_3c);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x20;
        *(int *)((int)this + 8) = iVar3;
        FUN_00479f10(param_1,(int *)(iVar3 + param_2 * -0x20),&local_3c);
      }
      else {
        piVar5 = local_1c + param_2 * -8;
        piVar4 = FUN_0047b130(piVar5,local_1c,local_1c);
        *(int **)((int)this + 8) = piVar4;
        FUN_0047a0b0((int)param_1,(int)piVar5,local_1c);
        FUN_00479f10(param_1,param_1 + param_2 * 8,&local_3c);
      }
    }
  }
  if (10 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004819b0 @ 004819b0 ////

void __thiscall FUN_004819b0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca42f0;
  local_10 = ExceptionList;
  local_24 = *param_3;
  local_20 = param_3[1];
  local_1c = param_3[2];
  local_18 = param_3[3];
  iVar7 = *(int *)((int)this + 4);
  local_14 = &stack0xffffffd0;
  if (iVar7 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - iVar7 >> 4;
  }
  uVar8 = CONCAT44(iVar7,iVar2);
  if (param_2 != 0) {
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar7 >> 4;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd0;
    if (0xfffffffU - iVar7 < param_2) {
      ExceptionList = &local_10;
      uVar8 = FUN_004812a0();
      puVar1 = local_14;
    }
    local_14 = puVar1;
    iVar7 = (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    if (iVar7 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar7 >> 4;
    }
    if (uVar3 < iVar2 + param_2) {
      if (0xfffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (iVar7 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 8) - iVar7 >> 4;
      }
      if (uVar3 < iVar2 + param_2) {
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)((int)this + 8) - iVar7 >> 4;
        }
        uVar3 = iVar7 + param_2;
      }
      puVar4 = operator_new(uVar3 * 0x10);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_0047a1a0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0047b000(puVar5,param_2,&local_24);
      FUN_0047a1a0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 4);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - (int)_Memory >> 4;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar3 * 4;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar7) * 4;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar4 - (int)param_1 >> 4) < param_2) {
      FUN_0047a1a0(param_1,puVar4,param_1 + param_2 * 4);
      local_8 = 2;
      FUN_004808a0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 4),&local_24);
      iVar7 = *(int *)((int)this + 8) + param_2 * 0x10;
      *(int *)((int)this + 8) = iVar7;
      FUN_004797b0(param_1,(undefined4 *)(iVar7 + param_2 * -0x10),&local_24);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0047a1a0(puVar4 + param_2 * -4,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_004798c0(param_1,puVar4 + param_2 * -4,puVar4);
    FUN_004797b0(param_1,param_1 + param_2 * 4,&local_24);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00481c20 @ 00481c20 ////

void __thiscall FUN_00481c20(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00ca4300;
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
      uVar2 = FUN_00481310();
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
      puVar5 = (undefined4 *)FUN_0047a1e0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0047b040(puVar5,param_2,&local_20);
      FUN_0047a1e0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
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
      FUN_0047a1e0(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_004808d0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_00479810(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0047a1e0(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00479fb0((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_00479810(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00481e70 @ 00481e70 ////

void __fastcall FUN_00481e70(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca435e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1c3ec;
  param_1[0xe] = &PTR_LAB_00d1c3cc;
  local_4 = 5;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00481380((int)param_1);
  (**(code **)(param_1[0x36] + 4))();
  param_1[0x3b] = 0;
  (**(code **)param_1[0x36])();
  if ((undefined4 *)param_1[0x55] != (undefined4 *)0x0) {
    FUN_00481090((undefined4 *)param_1[0x55],(undefined4 *)param_1[0x56]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x55]);
  }
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  if (10 < (uint)param_1[0x4e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x4c]);
  }
  if (10 < (uint)param_1[0x46]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x44]);
  }
  if (10 < (uint)param_1[0x3e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3c]);
  }
  param_1[0x36] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x38] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x38] = param_1[0x37];
  }
  if (param_1[0x37] != 0) {
    *(undefined4 *)(param_1[0x37] + 4) = param_1[0x38];
  }
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  if ((undefined4 *)param_1[0x38] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x38] = param_1[0x37];
  }
  if (param_1[0x37] != 0) {
    *(undefined4 *)(param_1[0x37] + 4) = param_1[0x38];
  }
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  local_4 = 0xffffffff;
  FUN_00410660(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00482040 @ 00482040 ////

void __thiscall FUN_00482040(void *this,uint param_1,void *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca4378;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2 >> 5;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2 >> 5;
    }
    ExceptionList = &local_c;
    FUN_00481700(this,*(int **)((int)this + 8),param_1 - iVar2,&param_2);
  }
  else {
    ExceptionList = &local_c;
    if ((iVar2 != 0) &&
       (ExceptionList = &local_c, param_1 < (uint)((int)*(int **)((int)this + 8) - iVar2 >> 5))) {
      ExceptionList = &local_c;
      FUN_00481160(this,&param_1,(int *)(param_1 * 0x20 + iVar2),*(int **)((int)this + 8));
    }
  }
  if (10 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004821e0 @ 004821e0 ////

undefined4 * __fastcall FUN_004821e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca439b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1 + 9;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[8] = 0x14;
  FUN_004015d0(param_1 + 6,"INVALID",7);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00482250 @ 00482250 ////

int * __fastcall FUN_00482250(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca43f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00410910(param_1);
  *param_1 = (int)&PTR_FUN_00d1c3ec;
  param_1[0xe] = (int)&PTR_LAB_00d1c3cc;
  param_1[0x39] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = (int)(param_1 + 0x36);
  param_1[0x36] = (int)&PTR_FUN_00d18c3c;
  param_1[0x3b] = 0;
  param_1[0x3c] = (int)(param_1 + 0x3f);
  *(undefined2 *)(param_1 + 0x3f) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 10;
  param_1[0x44] = (int)(param_1 + 0x47);
  *(undefined2 *)(param_1 + 0x47) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 10;
  param_1[0x4c] = (int)(param_1 + 0x4f);
  *(undefined2 *)(param_1 + 0x4f) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 10;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00482320 @ 00482320 ////

undefined4 * __thiscall FUN_00482320(void *this,byte param_1)

{
  FUN_00481e70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00482340 @ 00482340 ////

int * __cdecl FUN_00482340(int param_1,char param_2)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca440b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x160);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00482250(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar1[0x36] + 4))();
  piVar1[0x3b] = param_1;
  (**(code **)piVar1[0x36])();
  if (param_2 != '\0') {
    FUN_0040bd00((int)piVar1);
  }
  (**(code **)(*piVar1 + 8))();
  ExceptionList = pvStack_c;
  return piVar1;
}


//// FUNCTION FUN_004823e0 @ 004823e0 ////

void __thiscall FUN_004823e0(void *this,undefined4 *param_1)

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
  FUN_00481520(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00482430 @ 00482430 ////

void __thiscall FUN_00482430(void *this,uint param_1)

{
  undefined2 local_18 [10];
  undefined1 *local_4;
  
  local_4 = &stack0xffffffdc;
  local_18[0] = 0;
  FUN_00482040(this,param_1,local_18,0,10);
  return;
}


//// FUNCTION FUN_00482460 @ 00482460 ////

void __thiscall FUN_00482460(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 5) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 5))
     ) {
    piVar2 = *(int **)((int)this + 8);
    FUN_0047b760(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 8;
    return;
  }
  FUN_00481700(this,*(int **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_004824d0 @ 004824d0 ////

void __thiscall FUN_004824d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 4) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 4))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0047b000(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 4;
    return;
  }
  FUN_004819b0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00482540 @ 00482540 ////

void __thiscall FUN_00482540(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0047b040(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_00481c20(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_004825b0 @ 004825b0 ////

void __fastcall FUN_004825b0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint local_38;
  int local_34;
  uint local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4450;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MovieReview.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x2d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar2 = (char *)FUN_00ace33d(0xe4f6b8);
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
  uVar3 = FUN_0098b490("MovieName");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0xb8));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MovieReview.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x2e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4f6b8);
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
  uVar3 = FUN_0098b490("GenreName");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0xd8));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MovieReview.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x2f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar2 = (char *)FUN_00ace33d(0xe4f6b8);
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
  uVar3 = FUN_0098b490("DirectorName");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0xf8));
  }
  uVar3 = FUN_0098b490("CastNames");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x11c) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = *(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x11c) >> 5;
      }
      FUN_0098a3a0(&local_30);
      local_34 = 0;
      for (local_38 = 0;
          (*(int *)(param_1 + 0x11c) != 0 &&
          (local_38 < (uint)(*(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x11c) >> 5)));
          local_38 = local_38 + 1) {
        if (DAT_00e67469 == '\0') {
          local_2c = local_20;
          pcVar5 = "C:\\movies\\dev\\TheMovies\\MovieReview.cpp";
          puVar6 = &DAT_010581d8;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar6 = puVar6 + 1;
          }
          DAT_010581d4 = 0x30;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 3;
          pcVar2 = (char *)FUN_00ace33d(0xe4f6b8);
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
        uVar3 = FUN_0098b490("CastNames[x]");
        if ((char)uVar3 != '\0') {
          FUN_0098c580((undefined4 *)(*(int *)(param_1 + 0x11c) + local_34));
        }
        local_34 = local_34 + 0x20;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = 0;
      FUN_004811f0(param_1 + 0x118);
      SLVAR_LoadUint(&local_38);
      FUN_00482430((void *)(param_1 + 0x118),local_38);
      local_30 = 0;
      if (local_38 != 0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            local_2c = local_20;
            pcVar5 = "C:\\movies\\dev\\TheMovies\\MovieReview.cpp";
            puVar6 = &DAT_010581d8;
            for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              puVar6 = puVar6 + 1;
            }
            DAT_010581d4 = 0x30;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 4;
            pcVar2 = (char *)FUN_00ace33d(0xe4f6b8);
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
          uVar3 = FUN_0098b490("CastNames[x]");
          if ((char)uVar3 != '\0') {
            FUN_0098c580((undefined4 *)(*(int *)(param_1 + 0x11c) + local_34));
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0x20;
        } while (local_30 < local_38);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MovieReview.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x31;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
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
  uVar3 = FUN_0098b490("PAssociatedProject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xa0));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00482c30 @ 00482c30 ////

void __fastcall FUN_00482c30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4468;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0xec) != 0) &&
     (ExceptionList = &local_c, iVar3 = FUN_005b2220(*(int *)(param_1 + 0xec)), iVar3 != 0)) {
    iVar1 = *(int *)(iVar3 + 0x68);
    for (iVar3 = *(int *)(iVar3 + 100); iVar3 != iVar1; iVar3 = iVar3 + 0x18) {
      iVar2 = *(int *)(iVar3 + 0x14);
      if ((iVar2 != 0) && (iVar4 = FUN_005a6470(iVar2), iVar4 != 0)) {
        piVar5 = (int *)FUN_005a6470(iVar2);
        puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x5c))(local_2c);
        uStack_4 = 0;
        FUN_00482460((void *)(param_1 + 0x150),puVar6);
        uStack_4 = 0xffffffff;
        if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00482cf0 @ 00482cf0 ////

void __cdecl FUN_00482cf0(void *param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float local_4;
  
  iVar3 = 0;
  do {
    iVar1 = *(int *)((int)param_1 + 4);
    iVar3 = iVar3 + 1;
    local_4 = (float)iVar3 * 0.2;
    if ((iVar1 == 0) ||
       ((uint)(*(int *)((int)param_1 + 0xc) - iVar1 >> 2) <=
        (uint)(*(int *)((int)param_1 + 8) - iVar1 >> 2))) {
      FUN_00481520(param_1,*(undefined4 **)((int)param_1 + 8),1,&local_4);
    }
    else {
      pfVar2 = *(float **)((int)param_1 + 8);
      *pfVar2 = local_4;
      *(float **)((int)param_1 + 8) = pfVar2 + 1;
    }
  } while (iVar3 < 4);
  return;
}


//// FUNCTION FUN_00482d70 @ 00482d70 ////

void __fastcall FUN_00482d70(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  void *this;
  float *pfVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  int *piVar11;
  TypeDescriptor *pTVar12;
  TypeDescriptor *pTVar13;
  int iVar14;
  void **ppvVar15;
  float local_e8;
  undefined1 local_e0 [4];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined2 *local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined2 local_c4 [10];
  undefined4 local_b0;
  void *local_ac [2];
  uint local_a4;
  void *apvStack_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca44c4;
  local_c = ExceptionList;
  if (*(char *)((int)param_1 + 0x60) == '\0') {
    piVar11 = (int *)0x0;
    if (((*(int *)((int)param_1 + 0xec) != 0) &&
        (ExceptionList = &local_c, iVar2 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar2))
       && (iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar2 != 0)) {
      local_e8 = -3.4028235e+38;
      FUN_00403de0(local_ac,&PTR_DAT_00e5089c);
      local_4._0_1_ = 0;
      local_4._1_3_ = 0;
      iVar3 = FUN_005b2770(*(int *)((int)param_1 + 0xec));
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)FUN_00449b40(iVar3);
        FUN_00401e30(local_ac,puVar4);
      }
      iVar3 = *(int *)(iVar2 + 100);
      iVar2 = *(int *)(iVar2 + 0x68);
      if (iVar3 != iVar2) {
        do {
          iVar1 = *(int *)(iVar3 + 0x14);
          if (((iVar1 != 0) && (iVar5 = FUN_005a6470(iVar1), iVar5 != 0)) &&
             (uVar6 = FUN_005a6140(iVar1), (char)uVar6 != '\0')) {
            iVar14 = 0;
            pTVar13 = &TM::CStar::RTTI_Type_Descriptor;
            pTVar12 = &TM::CStaff::RTTI_Type_Descriptor;
            iVar5 = 0;
            piVar7 = (int *)FUN_005a6470(iVar1);
            piVar7 = (int *)FUN_00ace790(piVar7,iVar5,pTVar12,pTVar13,iVar14);
            if (piVar7 != (int *)0x0) {
              ppvVar15 = local_ac;
              puVar4 = &local_b0;
              this = (void *)FUN_00577370((int)piVar7);
              pfVar8 = (float *)FUN_00441750(this,puVar4,ppvVar15);
              if (local_e8 < *pfVar8) {
                piVar11 = piVar7;
                local_e8 = *pfVar8;
              }
            }
          }
          iVar3 = iVar3 + 0x18;
        } while (iVar3 != iVar2);
        if ((piVar11 != (int *)0x0) && (*DAT_010495f4 <= local_e8)) {
          local_d0 = local_c4;
          local_c4[0] = 0;
          local_cc = 0;
          local_c8 = 10;
          local_dc = 0;
          local_d8 = 0;
          local_d4 = 0;
          local_4._0_1_ = 2;
          FUN_0043a2d0(local_e0,local_ac);
          ppuVar9 = &PTR_DAT_00e508bc;
          if (piVar11[0x128] != 0) {
            ppuVar9 = &PTR_DAT_00e508dc;
          }
          FUN_00403de0(local_2c,ppuVar9);
          local_4._0_1_ = 3;
          FUN_0043a2d0(local_e0,local_2c);
          FUN_00403de0(local_6c,(undefined4 *)&DAT_010495d0);
          local_4._0_1_ = 4;
          puVar10 = FUN_009b7330(local_6c,0xffffffff,(int)local_e0);
          if (puVar10 != (undefined *)0x0) {
            FUN_00403e70(&local_d0,(undefined4 *)(puVar10 + 0x40));
            (**(code **)(*piVar11 + 0x5c))(local_4c);
            FUN_0047a630(param_1,apvStack_8c,&local_d0,local_4c,(undefined4 *)0x0);
            local_4._0_1_ = 6;
            CMovieReview_AddComment(param_1,local_e8,1.82169e-44,apvStack_8c,'\x01',3);
            if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_8c[0]);
            }
            if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c[0]);
            }
          }
          if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c[0]);
          }
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          FUN_004063b0((int)local_e0);
          if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
            _free(local_d0);
          }
        }
      }
      if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00483080 @ 00483080 ////

void __fastcall FUN_00483080(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  void *this;
  float *pfVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  int *piVar11;
  TypeDescriptor *pTVar12;
  TypeDescriptor *pTVar13;
  int iVar14;
  void **ppvVar15;
  float local_ec;
  undefined1 local_e0 [4];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined1 local_c4 [20];
  undefined2 *local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined2 local_a4 [10];
  undefined1 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84 [20];
  undefined4 local_70;
  void *local_6c [2];
  uint local_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4514;
  local_c = ExceptionList;
  if (((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
     (ExceptionList = &local_c, iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xec)), iVar2 != 0)) {
    local_ec = 3.4028235e+38;
    piVar11 = (int *)0x0;
    FUN_00403de0(local_6c,&PTR_DAT_00e5089c);
    local_4._0_1_ = 0;
    local_4._1_3_ = 0;
    iVar3 = FUN_005b2770(*(int *)((int)param_1 + 0xec));
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)FUN_00449b40(iVar3);
      FUN_004015d0(local_6c,(char *)*puVar4,puVar4[1]);
    }
    iVar3 = *(int *)(iVar2 + 100);
    iVar2 = *(int *)(iVar2 + 0x68);
    if (iVar3 != iVar2) {
      do {
        iVar1 = *(int *)(iVar3 + 0x14);
        if (((iVar1 != 0) && (iVar5 = FUN_005a6470(iVar1), iVar5 != 0)) &&
           (uVar6 = FUN_005a6140(iVar1), (char)uVar6 != '\0')) {
          iVar14 = 0;
          pTVar13 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar12 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar5 = 0;
          piVar7 = (int *)FUN_005a6470(iVar1);
          piVar7 = (int *)FUN_00ace790(piVar7,iVar5,pTVar12,pTVar13,iVar14);
          if (piVar7 != (int *)0x0) {
            ppvVar15 = local_6c;
            puVar4 = &local_70;
            this = (void *)FUN_00577370((int)piVar7);
            pfVar8 = (float *)FUN_00441750(this,puVar4,ppvVar15);
            if (*pfVar8 < local_ec) {
              piVar11 = piVar7;
              local_ec = *pfVar8;
            }
          }
        }
        iVar3 = iVar3 + 0x18;
      } while (iVar3 != iVar2);
      if ((piVar11 != (int *)0x0) && (local_ec < *DAT_0104963c != (local_ec == *DAT_0104963c))) {
        local_b0 = local_a4;
        local_a4[0] = 0;
        local_ac = 0;
        local_a8 = 10;
        local_dc = 0;
        local_d8 = 0;
        local_d4 = 0;
        local_4._0_1_ = 2;
        FUN_0043a2d0(local_e0,local_6c);
        ppuVar9 = &PTR_DAT_00e508bc;
        if (piVar11[0x128] != 0) {
          ppuVar9 = &PTR_DAT_00e508dc;
        }
        local_90 = local_84;
        local_84[0] = 0;
        local_8c = 0;
        local_88 = 0x14;
        FUN_004015d0(&local_90,*ppuVar9,(uint)ppuVar9[1]);
        local_4._0_1_ = 3;
        FUN_0043a2d0(local_e0,&local_90);
        local_d0 = local_c4;
        local_c4[0] = 0;
        local_cc = 0;
        local_c8 = 0x14;
        FUN_004015d0(&local_d0,DAT_01049618,DAT_0104961c);
        local_4._0_1_ = 4;
        puVar10 = FUN_009b7330(&local_d0,0xffffffff,(int)local_e0);
        if (puVar10 != (undefined *)0x0) {
          FUN_004036d0(&local_b0,*(wchar_t **)(puVar10 + 0x40),*(uint *)(puVar10 + 0x44));
          (**(code **)(*piVar11 + 0x5c))(local_2c);
          FUN_0047a630(param_1,apvStack_4c,&local_b0,local_2c,(undefined4 *)0x0);
          local_4._0_1_ = 6;
          CMovieReview_AddComment(param_1,local_ec,1.96182e-44,apvStack_4c,'\x01',3);
          if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_4c[0]);
          }
          if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
        }
        if (0x14 < local_c8) {
                    /* WARNING: Subroutine does not return */
          _free(local_d0);
        }
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        FUN_004063b0((int)local_e0);
        if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_b0);
        }
      }
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004833d0 @ 004833d0 ////

void __fastcall FUN_004833d0(void *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint _Count;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;
  void *pvVar11;
  int *piVar12;
  float *pfVar13;
  undefined *puVar14;
  void *this;
  undefined **ppuVar15;
  byte *pbVar16;
  bool bVar17;
  TypeDescriptor *pTVar18;
  TypeDescriptor *pTVar19;
  undefined4 *puVar20;
  int iVar21;
  byte **ppbVar22;
  undefined4 *puVar23;
  float fStack_110;
  int *piStack_10c;
  int *piStack_108;
  int *piStack_104;
  float fStack_100;
  byte *pbStack_fc;
  undefined *puStack_f8;
  uint uStack_f4;
  byte abStack_f0 [20];
  undefined1 auStack_dc [4];
  undefined4 *puStack_d8;
  undefined4 *puStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_cc [4];
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  void *local_b4;
  char *pcStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  char acStack_a4 [20];
  undefined2 *puStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined2 auStack_84 [10];
  undefined4 uStack_70;
  byte *apbStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca457a;
  local_c = ExceptionList;
  if ((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) {
    ExceptionList = &local_c;
    local_b4 = param_1;
    iVar4 = FUN_005b22a0(*(int *)((int)param_1 + 0xec));
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_005b22a0(*(int *)((int)param_1 + 0xec));
      iVar4 = (**(code **)(*piVar5 + 0x24))();
      if (iVar4 < 4) {
        ExceptionList = local_c;
        return;
      }
    }
    iVar4 = FUN_005b2220(*(int *)((int)param_1 + 0xec));
    if (iVar4 != 0) {
      fStack_100 = -3.4028235e+38;
      piStack_104 = (int *)0x0;
      FUN_00403de0(apbStack_6c,&PTR_DAT_00e5089c);
      uStack_4 = 0;
      iVar6 = FUN_005b2770(*(int *)((int)param_1 + 0xec));
      if (iVar6 != 0) {
        puVar7 = (undefined4 *)FUN_00449b40(iVar6);
        FUN_00401e30(apbStack_6c,puVar7);
      }
      puStack_c8 = (undefined4 *)0x0;
      puStack_c4 = (undefined4 *)0x0;
      uStack_c0 = 0;
      piStack_10c = (int *)*DAT_00f88660;
      uStack_4._0_1_ = 1;
      piStack_108 = DAT_00f88660;
      if (piStack_10c != DAT_00f88660) {
        do {
          pbStack_fc = abStack_f0;
          abStack_f0[0] = 0;
          puStack_f8 = (undefined *)0x0;
          uStack_f4 = 0x14;
          FUN_004015d0(&pbStack_fc,(char *)piStack_10c[3],piStack_10c[4]);
          uStack_4._0_1_ = 2;
          pbVar8 = pbStack_fc;
          pbVar16 = apbStack_6c[0];
          do {
            bVar1 = *pbVar8;
            bVar17 = bVar1 < *pbVar16;
            if (bVar1 != *pbVar16) {
LAB_00483532:
              iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_00483537;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar17 = bVar1 < pbVar16[1];
            if (bVar1 != pbVar16[1]) goto LAB_00483532;
            pbVar8 = pbVar8 + 2;
            pbVar16 = pbVar16 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00483537:
          if (iVar6 != 0) {
            FUN_0043a2d0(auStack_cc,&pbStack_fc);
          }
          uStack_4._0_1_ = 1;
          if (0x14 < uStack_f4) {
                    /* WARNING: Subroutine does not return */
            _free(pbStack_fc);
          }
          FUN_00449dd0((int *)&piStack_10c);
        } while (piStack_10c != piStack_108);
      }
      iVar6 = *(int *)(iVar4 + 100);
      iVar4 = *(int *)(iVar4 + 0x68);
      iStack_b8 = iVar4;
      if (iVar6 != iVar4) {
        do {
          iVar2 = *(int *)(iVar6 + 0x14);
          if (((iVar2 != 0) && (iVar9 = FUN_005a6470(iVar2), iVar9 != 0)) &&
             (uVar10 = FUN_005a6140(iVar2), (char)uVar10 != '\0')) {
            iVar21 = 0;
            pTVar19 = &TM::CStar::RTTI_Type_Descriptor;
            pTVar18 = &TM::CStaff::RTTI_Type_Descriptor;
            iVar9 = 0;
            piVar5 = (int *)FUN_005a6470(iVar2);
            piVar5 = (int *)FUN_00ace790(piVar5,iVar9,pTVar18,pTVar19,iVar21);
            if (piVar5 != (int *)0x0) {
              ppbVar22 = apbStack_6c;
              puVar7 = &uStack_70;
              pvVar11 = (void *)FUN_00577370((int)piVar5);
              puVar7 = (undefined4 *)FUN_00441750(pvVar11,puVar7,ppbVar22);
              piStack_10c = (int *)*puVar7;
              if (puStack_c8 == (undefined4 *)0x0) {
                piVar12 = (int *)0x0;
              }
              else {
                piVar12 = (int *)((int)puStack_c4 - (int)puStack_c8 >> 5);
              }
              fStack_110 = 0.0;
              puVar7 = puStack_c8;
              piStack_108 = piVar12;
              if (0 < (int)piVar12) {
                do {
                  puVar20 = &uStack_bc;
                  puVar23 = puVar7;
                  pvVar11 = (void *)FUN_00577370((int)piVar5);
                  pfVar13 = (float *)FUN_00441750(pvVar11,puVar20,puVar23);
                  fStack_110 = *pfVar13 + fStack_110;
                  piVar12 = (int *)((int)piVar12 + -1);
                  iVar4 = iStack_b8;
                  puVar7 = puVar7 + 8;
                } while (piVar12 != (int *)0x0);
              }
              fStack_110 = fStack_110 / (float)(int)piStack_108;
              if (((*DAT_01049684 <= fStack_110) &&
                  ((float)piStack_10c < DAT_01049684[1] != ((float)piStack_10c == DAT_01049684[1])))
                 && (((float)piStack_10c < fStack_110 &&
                     (fStack_100 < fStack_110 - (float)piStack_10c)))) {
                piStack_104 = piVar5;
                fStack_100 = fStack_110 - (float)piStack_10c;
              }
            }
          }
          iVar6 = iVar6 + 0x18;
        } while (iVar6 != iVar4);
        if (piStack_104 != (int *)0x0) {
          puStack_90 = auStack_84;
          auStack_84[0] = 0;
          uStack_8c = 0;
          uStack_88 = 10;
          puStack_d8 = (undefined4 *)0x0;
          puStack_d4 = (undefined4 *)0x0;
          uStack_d0 = 0;
          ppuVar15 = &PTR_DAT_00e508bc;
          if (piStack_104[0x128] != 0) {
            ppuVar15 = &PTR_DAT_00e508dc;
          }
          puVar14 = ppuVar15[1];
          pbStack_fc = abStack_f0;
          puStack_f8 = (undefined *)0x0;
          pcVar3 = *ppuVar15;
          abStack_f0[0] = 0;
          uStack_f4 = 0x14;
          if ((undefined *)0x13 < puVar14) {
            uStack_f4 = (uint)(puVar14 + 0x20) & 0xffffffe0;
            pbStack_fc = _malloc(uStack_f4);
          }
          _strncpy((char *)pbStack_fc,pcVar3,(size_t)puVar14);
          pbStack_fc[(int)puVar14] = 0;
          uStack_4 = CONCAT31(uStack_4._1_3_,5);
          puStack_f8 = puVar14;
          FUN_0043a2d0(auStack_dc,&pbStack_fc);
          _Count = DAT_01049664;
          pcVar3 = DAT_01049660;
          pcStack_b0 = acStack_a4;
          acStack_a4[0] = '\0';
          uStack_ac = 0;
          uStack_a8 = 0x14;
          if (0x13 < DAT_01049664) {
            uStack_a8 = DAT_01049664 + 0x20 & 0xffffffe0;
            pcStack_b0 = _malloc(uStack_a8);
          }
          _strncpy(pcStack_b0,pcVar3,_Count);
          uStack_ac = _Count;
          pcStack_b0[_Count] = '\0';
          uStack_4._0_1_ = 6;
          puVar14 = FUN_009b7330(&pcStack_b0,0xffffffff,(int)auStack_dc);
          if (puVar14 != (undefined *)0x0) {
            FUN_004036d0(&puStack_90,*(wchar_t **)(puVar14 + 0x40),*(uint *)(puVar14 + 0x44));
            piVar5 = piStack_104;
            (**(code **)(*piStack_104 + 0x5c))(apvStack_2c);
            pvVar11 = local_b4;
            FUN_0047a630(local_b4,apvStack_4c,&puStack_90,apvStack_2c,(undefined4 *)0x0);
            ppbVar22 = apbStack_6c;
            puVar7 = &uStack_bc;
            uStack_4._0_1_ = 8;
            this = (void *)FUN_00577370((int)piVar5);
            pfVar13 = (float *)FUN_00441750(this,puVar7,ppbVar22);
            CMovieReview_AddComment(pvVar11,*pfVar13,2.10195e-44,apvStack_4c,'\x01',3);
            if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_4c[0]);
            }
            if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_2c[0]);
            }
          }
          if (0x14 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_b0);
          }
          if (0x14 < uStack_f4) {
                    /* WARNING: Subroutine does not return */
            _free(pbStack_fc);
          }
          puVar7 = puStack_d8;
          if (puStack_d8 != (undefined4 *)0x0) {
            while( true ) {
              if (puVar7 == puStack_d4) {
                    /* WARNING: Subroutine does not return */
                _free(puStack_d8);
              }
              if (0x14 < (uint)puVar7[2]) break;
              puVar7 = puVar7 + 8;
            }
                    /* WARNING: Subroutine does not return */
            _free((void *)*puVar7);
          }
          puStack_d8 = (undefined4 *)0x0;
          puStack_d4 = (undefined4 *)0x0;
          uStack_d0 = 0;
          if (10 < uStack_88) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_90);
          }
        }
      }
      puVar7 = puStack_c8;
      if (puStack_c8 != (undefined4 *)0x0) {
        while( true ) {
          if (puVar7 == puStack_c4) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_c8);
          }
          if (0x14 < (uint)puVar7[2]) break;
          puVar7 = puVar7 + 8;
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)*puVar7);
      }
      if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(apbStack_6c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004839b0 @ 004839b0 ////

void __fastcall FUN_004839b0(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  void *pvVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  TypeDescriptor *pTVar13;
  TypeDescriptor *pTVar14;
  int iVar15;
  float fStack_c8;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined2 *puStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined2 auStack_a4 [10];
  undefined1 auStack_90 [4];
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca45c9;
  local_c = ExceptionList;
  if ((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) {
    ExceptionList = &local_c;
    iVar2 = FUN_005b22a0(*(int *)((int)param_1 + 0xec));
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_005b22a0(*(int *)((int)param_1 + 0xec));
      iVar2 = (**(code **)(*piVar3 + 0x24))();
      if (iVar2 < 4) {
        ExceptionList = local_c;
        return;
      }
    }
    iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xec));
    if ((iVar2 != 0) && (iVar4 = FUN_005b2770(*(int *)((int)param_1 + 0xec)), iVar4 != 0)) {
      iVar4 = *(int *)(iVar2 + 100);
      iVar2 = *(int *)(iVar2 + 0x68);
      piVar3 = (int *)0x0;
      fStack_c8 = -3.4028235e+38;
      if (iVar4 != iVar2) {
        do {
          iVar1 = *(int *)(iVar4 + 0x14);
          if (((iVar1 != 0) && (iVar5 = FUN_005a6470(iVar1), iVar5 != 0)) &&
             (uVar6 = FUN_005a6140(iVar1), (char)uVar6 != '\0')) {
            iVar15 = 0;
            pTVar14 = &TM::CStar::RTTI_Type_Descriptor;
            pTVar13 = &TM::CStaff::RTTI_Type_Descriptor;
            iVar5 = 0;
            piVar7 = (int *)FUN_005a6470(iVar1);
            piVar7 = (int *)FUN_00ace790(piVar7,iVar5,pTVar13,pTVar14,iVar15);
            if (piVar7 != (int *)0x0) {
              pvVar8 = (void *)FUN_005b2770(*(int *)((int)param_1 + 0xec));
              pfVar9 = (float *)FUN_005882e0(piVar7,(float)auStack_90,pvVar8);
              if (fStack_c8 < *pfVar9) {
                piVar3 = piVar7;
                fStack_c8 = *pfVar9;
              }
            }
          }
          iVar4 = iVar4 + 0x18;
        } while (iVar4 != iVar2);
        if ((piVar3 != (int *)0x0) && (*DAT_010496cc <= fStack_c8)) {
          puStack_b0 = auStack_a4;
          auStack_a4[0] = 0;
          uStack_ac = 0;
          uStack_a8 = 10;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_b4 = 0;
          uStack_4._0_1_ = 1;
          uStack_4._1_3_ = 0;
          iVar2 = FUN_005b2770(*(int *)((int)param_1 + 0xec));
          puVar10 = (undefined4 *)FUN_00449b40(iVar2);
          FUN_0043a2d0(auStack_c0,puVar10);
          ppuVar11 = &PTR_DAT_00e508bc;
          if (piVar3[0x128] != 0) {
            ppuVar11 = &PTR_DAT_00e508dc;
          }
          FUN_00403de0(apvStack_2c,ppuVar11);
          uStack_4._0_1_ = 2;
          FUN_0043a2d0(auStack_c0,apvStack_2c);
          FUN_00403de0(apvStack_6c,(undefined4 *)&DAT_010496a8);
          uStack_4._0_1_ = 3;
          puVar12 = FUN_009b7330(apvStack_6c,0xffffffff,(int)auStack_c0);
          if (puVar12 != (undefined *)0x0) {
            FUN_00403e70(&puStack_b0,(undefined4 *)(puVar12 + 0x40));
            (**(code **)(*piVar3 + 0x5c))(apvStack_8c);
            FUN_0047a630(param_1,apvStack_4c,&puStack_b0,apvStack_8c,(undefined4 *)0x0);
            uStack_4._0_1_ = 5;
            CMovieReview_AddComment(param_1,fStack_c8,2.24208e-44,apvStack_4c,'\x01',3);
            if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_4c[0]);
            }
            if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_8c[0]);
            }
          }
          if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_6c[0]);
          }
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          FUN_004063b0((int)auStack_c0);
          if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_b0);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00483ca0 @ 00483ca0 ////

void __fastcall FUN_00483ca0(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  void *pvVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  TypeDescriptor *pTVar13;
  TypeDescriptor *pTVar14;
  int iVar15;
  float fStack_c8;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined2 *puStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined2 auStack_a4 [10];
  undefined1 auStack_90 [4];
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4619;
  local_c = ExceptionList;
  if ((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) {
    ExceptionList = &local_c;
    iVar2 = FUN_005b22a0(*(int *)((int)param_1 + 0xec));
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_005b22a0(*(int *)((int)param_1 + 0xec));
      iVar2 = (**(code **)(*piVar3 + 0x24))();
      if (iVar2 < 4) {
        ExceptionList = local_c;
        return;
      }
    }
    iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xec));
    if ((iVar2 != 0) && (iVar4 = FUN_005b2770(*(int *)((int)param_1 + 0xec)), iVar4 != 0)) {
      iVar4 = *(int *)(iVar2 + 100);
      iVar2 = *(int *)(iVar2 + 0x68);
      piVar3 = (int *)0x0;
      fStack_c8 = 3.4028235e+38;
      if (iVar4 != iVar2) {
        do {
          iVar1 = *(int *)(iVar4 + 0x14);
          if (((iVar1 != 0) && (iVar5 = FUN_005a6470(iVar1), iVar5 != 0)) &&
             (uVar6 = FUN_005a6140(iVar1), (char)uVar6 != '\0')) {
            iVar15 = 0;
            pTVar14 = &TM::CStar::RTTI_Type_Descriptor;
            pTVar13 = &TM::CStaff::RTTI_Type_Descriptor;
            iVar5 = 0;
            piVar7 = (int *)FUN_005a6470(iVar1);
            piVar7 = (int *)FUN_00ace790(piVar7,iVar5,pTVar13,pTVar14,iVar15);
            if (piVar7 != (int *)0x0) {
              pvVar8 = (void *)FUN_005b2770(*(int *)((int)param_1 + 0xec));
              pfVar9 = (float *)FUN_005882e0(piVar7,(float)auStack_90,pvVar8);
              if (*pfVar9 < fStack_c8) {
                piVar3 = piVar7;
                fStack_c8 = *pfVar9;
              }
            }
          }
          iVar4 = iVar4 + 0x18;
        } while (iVar4 != iVar2);
        if ((piVar3 != (int *)0x0) && (fStack_c8 < *DAT_01049714 != (fStack_c8 == *DAT_01049714))) {
          puStack_b0 = auStack_a4;
          auStack_a4[0] = 0;
          uStack_ac = 0;
          uStack_a8 = 10;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_b4 = 0;
          uStack_4._0_1_ = 1;
          uStack_4._1_3_ = 0;
          iVar2 = FUN_005b2770(*(int *)((int)param_1 + 0xec));
          puVar10 = (undefined4 *)FUN_00449b40(iVar2);
          FUN_0043a2d0(auStack_c0,puVar10);
          ppuVar11 = &PTR_DAT_00e508bc;
          if (piVar3[0x128] != 0) {
            ppuVar11 = &PTR_DAT_00e508dc;
          }
          FUN_00403de0(apvStack_2c,ppuVar11);
          uStack_4._0_1_ = 2;
          FUN_0043a2d0(auStack_c0,apvStack_2c);
          FUN_00403de0(apvStack_6c,(undefined4 *)&DAT_010496f0);
          uStack_4._0_1_ = 3;
          puVar12 = FUN_009b7330(apvStack_6c,0xffffffff,(int)auStack_c0);
          if (puVar12 != (undefined *)0x0) {
            FUN_00403e70(&puStack_b0,(undefined4 *)(puVar12 + 0x40));
            (**(code **)(*piVar3 + 0x5c))(apvStack_8c);
            FUN_0047a630(param_1,apvStack_4c,&puStack_b0,apvStack_8c,(undefined4 *)0x0);
            uStack_4._0_1_ = 5;
            CMovieReview_AddComment(param_1,fStack_c8,2.38221e-44,apvStack_4c,'\x01',3);
            if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_4c[0]);
            }
            if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_8c[0]);
            }
          }
          if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_6c[0]);
          }
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          FUN_004063b0((int)auStack_c0);
          if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_b0);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00483f90 @ 00483f90 ////

void __fastcall FUN_00483f90(void *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  void *this;
  float *pfVar4;
  float fVar5;
  float local_84;
  float local_80;
  undefined1 local_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4650;
  local_c = ExceptionList;
  if (((*(char *)((int)param_1 + 0x60) == '\0') && (*(int *)((int)param_1 + 0xec) != 0)) &&
     (ExceptionList = &local_c, iVar3 = FUN_005b2cc0(*(int *)((int)param_1 + 0xec)), 0 < iVar3)) {
    local_80 = 0.0;
    local_84 = 0.0;
    this = (void *)FUN_005b2b80(*(int *)((int)param_1 + 0xec));
    if (this != (void *)0x0) {
      pfVar4 = (float *)FUN_005d7760(this,&local_80);
      local_84 = *pfVar4;
      local_80 = 1.4013e-45;
    }
    fVar5 = (float)(uint)(this != (void *)0x0);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x354);
    fVar2 = local_80;
    for (iVar3 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x350); iVar3 != iVar1;
        iVar3 = iVar3 + 0x18) {
      pfVar4 = (float *)FUN_005d7760(*(void **)(iVar3 + 0x14),&local_80);
      local_84 = *pfVar4 + local_84;
      fVar5 = (float)((int)fVar5 + 1);
      fVar2 = fVar5;
    }
    if (0 < (int)fVar5) {
      local_84 = local_84 / (float)(int)fVar2;
      local_80 = fVar2;
      if (local_84 < *DAT_01049954 == (local_84 == *DAT_01049954)) {
        if (*(float *)(DAT_01049958 + -4) <= local_84) {
          local_78 = 0;
          local_74 = 0;
          local_70 = 0;
          local_4 = 1;
          FUN_004823e0(local_7c,(undefined4 *)(DAT_01049958 + -4));
          FUN_0047b200(param_1,local_2c,local_84,0x19,(int)local_7c,'\0');
          FUN_0047a630(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
          local_4 = CONCAT31(local_4._1_3_,3);
          CMovieReview_AddComment(param_1,local_84,3.50325e-44,local_4c,'\x01',3);
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c[0]);
          }
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          FUN_00409150((int)local_7c);
        }
      }
      else {
        FUN_0047b850(param_1,local_6c,local_84,0x19,'\0');
        local_4 = 0;
        CMovieReview_AddComment(param_1,local_84,3.50325e-44,local_6c,'\x01',3);
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00484190 @ 00484190 ////

void __fastcall FUN_00484190(void *param_1)

{
  float fVar1;
  void *this;
  float *pfVar2;
  float local_80;
  undefined1 local_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4680;
  local_c = ExceptionList;
  if ((*(int *)((int)param_1 + 0xec) != 0) &&
     (ExceptionList = &local_c, this = (void *)FUN_005b2b70(*(int *)((int)param_1 + 0xec)),
     this != (void *)0x0)) {
    pfVar2 = (float *)Release_GetNormalizedStarPower(this,&local_80);
    fVar1 = *pfVar2;
    local_80 = fVar1;
    if (fVar1 < *DAT_01049b94 == (fVar1 == *DAT_01049b94)) {
      if (*(float *)(DAT_01049b98 + -4) <= fVar1) {
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        local_4 = 1;
        FUN_004823e0(local_7c,(undefined4 *)(DAT_01049b98 + -4));
        fVar1 = local_80;
        FUN_0047b200(param_1,local_2c,local_80,0x21,(int)local_7c,'\0');
        FUN_0047a630(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,3);
        CMovieReview_AddComment(param_1,fVar1,4.62428e-44,local_4c,'\0',3);
        if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        FUN_00409150((int)local_7c);
      }
    }
    else {
      FUN_0047b850(param_1,local_6c,fVar1,0x21,'\0');
      local_4 = 0;
      CMovieReview_AddComment(param_1,fVar1,4.62428e-44,local_6c,'\0',3);
      if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00484320 @ 00484320 ////

void __fastcall FUN_00484320(void *param_1)

{
  void *this;
  float *pfVar1;
  float local_80;
  undefined1 local_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca46b0;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0xec) != 0) {
    ExceptionList = &local_c;
    this = (void *)FUN_005b2b70(*(int *)((int)param_1 + 0xec));
    if (this != (void *)0x0) {
      pfVar1 = (float *)FUN_005dd6d0(this,&local_80);
      local_80 = *pfVar1;
      if (local_80 < *DAT_01049cb4 == (local_80 == *DAT_01049cb4)) {
        if (*(float *)(DAT_01049cb8 + -4) <= local_80) {
          local_78 = 0;
          local_74 = 0;
          local_70 = 0;
          local_4 = 1;
          FUN_004823e0(local_7c,(undefined4 *)(DAT_01049cb8 + -4));
          FUN_0047b200(param_1,local_2c,local_80,0x25,(int)local_7c,'\0');
          FUN_0047a630(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
          local_4 = CONCAT31(local_4._1_3_,3);
          CMovieReview_AddComment(param_1,1.0 - local_80,5.1848e-44,local_4c,'\0',3);
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c[0]);
          }
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          FUN_00409150((int)local_7c);
        }
      }
      else {
        FUN_0047b850(param_1,local_6c,local_80,0x25,'\0');
        local_4 = 0;
        CMovieReview_AddComment(param_1,1.0 - local_80,5.1848e-44,local_6c,'\0',3);
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004844c0 @ 004844c0 ////

void __cdecl FUN_004844c0(void *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined1 **ppuVar5;
  char **ppcVar6;
  int iStack_134;
  float fStack_130;
  char *pcStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  char acStack_120 [20];
  undefined1 *puStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  undefined1 auStack_100 [20];
  undefined1 *local_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined1 local_e0 [20];
  undefined1 *local_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined1 local_c0 [20];
  undefined1 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined1 local_a0 [20];
  undefined1 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 local_80 [20];
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca470f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0040c920(param_1,param_2);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  local_ac = local_a0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 0x14;
  local_cc = local_c0;
  local_c0[0] = 0;
  local_c8 = 0;
  local_c4 = 0x14;
  local_8c = local_80;
  local_80[0] = 0;
  local_88 = 0;
  local_84 = 0x14;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  local_ec = local_e0;
  local_e0[0] = 0;
  local_e8 = 0;
  local_e4 = 0x14;
  local_4._0_1_ = 6;
  local_4._1_3_ = 0;
  bVar1 = FUN_00547e50(param_2,0,&local_2c);
  if (bVar1) {
    bVar1 = FUN_00547e50(param_2,1,&local_6c);
    if (bVar1) {
      bVar1 = FUN_00547e50(param_2,2,&local_ac);
      if (bVar1) {
        bVar1 = FUN_00547e50(param_2,3,&local_cc);
        if (bVar1) {
          bVar1 = FUN_00547e50(param_2,4,&local_8c);
          if (bVar1) {
            bVar1 = FUN_00547e50(param_2,5,&local_4c);
            if (bVar1) {
              bVar1 = FUN_00547e50(param_2,6,&local_ec);
              if (bVar1) {
                iVar3 = param_3 * 0x48;
                uVar2 = FUN_00567d80(&local_2c);
                *(undefined4 *)(&DAT_01049210 + iVar3) = uVar2;
                fVar4 = FUN_00567d60(&local_6c);
                *(float *)(&DAT_01049214 + iVar3) = (float)fVar4;
                fVar4 = FUN_00567d60(&local_ac);
                *(float *)(&DAT_01049218 + iVar3) = (float)fVar4;
                fVar4 = FUN_00567d60(&local_cc);
                *(float *)(&DAT_0104921c + iVar3) = (float)fVar4;
                fVar4 = FUN_00567d60(&local_8c);
                *(float *)(&DAT_01049220 + iVar3) = (float)fVar4;
                uVar2 = FUN_00567d80(&local_4c);
                *(undefined4 *)(&DAT_01049224 + iVar3) = uVar2;
                FUN_00401e30(&DAT_01049228 + iVar3,&local_ec);
                puStack_10c = auStack_100;
                iStack_134 = 7;
                auStack_100[0] = 0;
                uStack_108 = 0;
                uStack_104 = 0x14;
                local_4._0_1_ = 7;
                bVar1 = FUN_00547e50(param_2,7,&puStack_10c);
                if (bVar1) {
                  do {
                    pcStack_12c = acStack_120;
                    acStack_120[0] = '\0';
                    uStack_128 = 0;
                    uStack_124 = 0x14;
                    _strncpy(pcStack_12c,"",0);
                    ppcVar6 = &pcStack_12c;
                    ppuVar5 = &puStack_10c;
                    uStack_128 = 0;
                    *pcStack_12c = '\0';
                    uVar2 = FUN_00401ec0(ppuVar5,ppcVar6);
                    if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
                      _free(pcStack_12c);
                    }
                    if ((char)uVar2 != '\0') break;
                    fVar4 = FUN_00567d60(&puStack_10c);
                    fStack_130 = (float)fVar4;
                    FUN_004823e0(&DAT_01049248 + iVar3,&fStack_130);
                    iStack_134 = iStack_134 + 1;
                    bVar1 = FUN_00547e50(param_2,iStack_134,&puStack_10c);
                  } while (bVar1);
                }
                if (0x14 < uStack_104) {
                    /* WARNING: Subroutine does not return */
                  _free(puStack_10c);
                }
              }
            }
          }
        }
      }
    }
  }
  if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004848f0 @ 004848f0 ////

void __fastcall FUN_004848f0(int *param_1)

{
  void *this;
  
  (**(code **)(*param_1 + 4))();
  FUN_0047a340((int)param_1);
  FUN_0047a390((int)param_1);
  FUN_0047a420((int)param_1);
  FUN_00482c30((int)param_1);
  this = (void *)param_1[0x3b];
  if (this != (void *)0x0) {
    CProject_GetQualityWithAwardBoost(this,(float *)&stack0xfffffff8);
    CBasicReview_SelectComments(param_1,(float)this);
  }
  return;
}


//// FUNCTION FUN_00484930 @ 00484930 ////

void __fastcall FUN_00484930(void *param_1)

{
  if (*(int *)((int)param_1 + 0xec) != 0) {
    FUN_004809e0(param_1);
    FUN_00480ad0(param_1);
    FUN_0047b890(param_1);
    FUN_0047baf0(param_1);
    FUN_0047bd50(param_1);
    FUN_0047c010(param_1);
    FUN_0047c2d0(param_1);
    FUN_0047b3f0(param_1);
    FUN_0047c430(param_1);
    FUN_0047c6e0(param_1);
    FUN_0047c990(param_1);
    FUN_0047cbe0(param_1);
    FUN_00482d70(param_1);
    FUN_00483080(param_1);
    FUN_004833d0(param_1);
    FUN_004839b0(param_1);
    FUN_00483ca0(param_1);
    FUN_0047ce30(param_1);
    FUN_0047cf90(param_1);
    FUN_0047d300(param_1);
    FUN_0047d670(param_1);
    FUN_0047d950(param_1);
    FUN_0047dc30(param_1);
    FUN_0047dde0(param_1);
    FUN_00483f90(param_1);
    FUN_00480bc0(param_1);
    FUN_0047df40(param_1);
    FUN_0047e110(param_1);
    FUN_0047e2b0(param_1);
    FUN_0047e450(param_1);
    FUN_0047e640(param_1);
    FUN_0047e7f0(param_1);
    FUN_00484190(param_1);
    FUN_0047e9a0(param_1);
    FUN_0047ece0(param_1);
    FUN_00484320(param_1);
    FUN_0047f020(param_1);
    FUN_0047f140(param_1);
    FUN_0047f3e0(param_1);
    FUN_0047f500(param_1);
    FUN_0047a800(param_1);
    FUN_0047fbb0(param_1);
    Release_CheckTrendsetterAward(param_1);
    FUN_0047f850(param_1);
    Release_NotifyIfMostPopularGenreChanged(param_1);
    FUN_0047a9b0(param_1);
    FUN_00480dc0(param_1);
    FUN_00480ee0(param_1);
    if ((DAT_0104a974 == 0) || (*(float *)(DAT_0104a974 + 0x80) == 0.0)) {
      FUN_0047fd30(param_1);
      FUN_0047ffb0(param_1);
      FUN_00480540(param_1);
    }
    FUN_0040d9d0((int)param_1);
    return;
  }
  return;
}


//// FUNCTION Reviews_LoadMovieReviewCsv @ 00484ad0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Reviews_LoadMovieReviewCsv(void)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  float *pfVar10;
  byte *pbVar11;
  uint *puVar12;
  byte *pbVar13;
  int iVar14;
  float10 fVar15;
  float local_298;
  undefined1 local_291;
  undefined1 *local_290;
  undefined4 local_28c;
  uint local_288;
  undefined1 local_284 [20];
  char *local_270;
  undefined4 local_26c;
  undefined4 local_268;
  char local_264 [20];
  undefined4 local_250;
  undefined4 local_24c;
  uint *local_248;
  undefined4 local_244;
  uint uStack_240;
  uint auStack_23c [5];
  undefined1 auStack_228 [4];
  float *local_224;
  float *local_220;
  int local_21c;
  uint *local_218;
  void *local_214;
  float *local_210;
  uint local_20c [5];
  byte *local_1f8;
  undefined4 local_1f4;
  uint local_1f0;
  byte local_1ec [20];
  undefined1 *puStack_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  undefined1 auStack_1cc [20];
  char *local_1b8;
  undefined4 local_1b4;
  uint local_1b0;
  char local_1ac [20];
  byte *local_198;
  undefined4 local_194;
  uint local_190;
  byte local_18c [20];
  byte *local_178;
  undefined4 local_174;
  uint local_170;
  byte local_16c [20];
  char *pcStack_158;
  uint uStack_154;
  uint uStack_150;
  char acStack_14c [20];
  undefined1 *puStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined1 auStack_12c [20];
  undefined1 *puStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined1 auStack_10c [20];
  undefined1 *puStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined1 auStack_ec [20];
  undefined1 *puStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined1 auStack_cc [20];
  undefined1 *puStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined1 auStack_ac [20];
  undefined1 *puStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined1 auStack_8c [20];
  undefined1 *local_78;
  undefined4 local_74;
  uint local_70;
  undefined1 local_6c [20];
  undefined1 *puStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined1 auStack_4c [20];
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined1 auStack_2c [24];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ca47fe;
  local_14 = ExceptionList;
  local_1b8 = local_1ac;
  local_1ac[0] = '\0';
  local_1b4 = 0;
  local_1b0 = 0x20;
  ExceptionList = &local_14;
  local_1b8 = _malloc(0x20);
  _strncpy(local_1b8,"data/reviews/moviereview.csv",0x1c);
  local_1b4 = 0x1c;
  local_1b8[0x1c] = '\0';
  local_270 = local_264;
  local_c = 0;
  local_264[0] = '\0';
  local_26c = 0;
  local_268 = 0x14;
  _strncpy(local_270,"",0);
  local_26c = 0;
  *local_270 = '\0';
  local_250 = 0;
  local_24c = 0;
  local_c._0_1_ = 1;
  bVar3 = FUN_00553a50(&local_270,&local_1b8);
  if (bVar3) {
    local_290 = local_284;
    local_284[0] = 0;
    local_28c = 0;
    local_288 = 0x14;
    local_78 = local_6c;
    local_6c[0] = 0;
    local_74 = 0;
    local_70 = 0x14;
    local_c._0_1_ = 3;
    FUN_0040c920(&local_270,&local_290);
    pfVar10 = (float *)0x0;
    local_248 = (uint *)0x0;
    local_224 = (float *)0x0;
    local_220 = (float *)0x0;
    local_21c = 0;
    local_178 = local_16c;
    local_16c[0] = 0;
    local_174 = 0;
    local_170 = 0x14;
    local_c = CONCAT31(local_c._1_3_,5);
    bVar3 = FUN_00547e50(&local_290,0,&local_178);
    if (bVar3) {
      do {
        local_218 = local_20c;
        local_20c[0] = local_20c[0] & 0xffffff00;
        local_214 = (void *)0x0;
        local_210 = (float *)&DAT_00000014;
        _strncpy((char *)local_218,"",0);
        local_214 = (void *)0x0;
        *(byte *)local_218 = 0;
        pbVar11 = local_178;
        puVar12 = local_218;
        do {
          bVar1 = *pbVar11;
          bVar3 = bVar1 < (byte)*puVar12;
          if (bVar1 != (byte)*puVar12) {
LAB_00484d0c:
            iVar4 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
            goto LAB_00484d11;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar3 = bVar1 < *(byte *)((int)puVar12 + 1);
          if (bVar1 != *(byte *)((int)puVar12 + 1)) goto LAB_00484d0c;
          pbVar11 = pbVar11 + 2;
          puVar12 = (uint *)((int)puVar12 + 2);
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00484d11:
        local_291 = iVar4 == 0;
        if (&DAT_00000014 < local_210) {
                    /* WARNING: Subroutine does not return */
          _free(local_218);
        }
        if ((bool)local_291) break;
        local_298 = (float)FUN_00567d80(&local_178);
        if ((local_224 == (float *)0x0) ||
           ((uint)(local_21c - (int)local_224 >> 2) <= (uint)((int)pfVar10 - (int)local_224 >> 2)))
        {
          FUN_0040ec60(auStack_228,pfVar10,1,&local_298);
        }
        else {
          *pfVar10 = local_298;
          local_220 = pfVar10 + 1;
        }
        pfVar10 = local_220;
        local_248 = (uint *)((int)local_248 + 1);
        bVar3 = FUN_00547e50(&local_290,(int)local_248,&local_178);
      } while (bVar3);
    }
    FUN_0040c920(&local_270,&local_290);
    pfVar10 = (float *)0x0;
    local_298 = 0.0;
    local_214 = (void *)0x0;
    local_210 = (float *)0x0;
    local_20c[0] = 0;
    local_198 = local_18c;
    local_18c[0] = 0;
    local_194 = 0;
    local_190 = 0x14;
    local_c._0_1_ = 7;
    bVar3 = FUN_00547e50(&local_290,0,&local_198);
    if (bVar3) {
      do {
        local_1f8 = local_1ec;
        local_1ec[0] = 0;
        local_1f4 = 0;
        local_1f0 = 0x14;
        _strncpy((char *)local_1f8,"",0);
        local_1f4 = 0;
        *local_1f8 = 0;
        pbVar11 = local_198;
        pbVar13 = local_1f8;
        do {
          bVar1 = *pbVar11;
          bVar3 = bVar1 < *pbVar13;
          if (bVar1 != *pbVar13) {
LAB_00484eb4:
            iVar4 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
            goto LAB_00484eb9;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar3 = bVar1 < pbVar13[1];
          if (bVar1 != pbVar13[1]) goto LAB_00484eb4;
          pbVar11 = pbVar11 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00484eb9:
        local_291 = iVar4 == 0;
        if (0x14 < local_1f0) {
                    /* WARNING: Subroutine does not return */
          _free(local_1f8);
        }
        if ((bool)local_291) break;
        fVar15 = FUN_00567d60(&local_198);
        local_248 = (uint *)(float)fVar15;
        if ((local_214 == (void *)0x0) ||
           ((uint)((int)(local_20c[0] - (int)local_214) >> 2) <=
            (uint)((int)pfVar10 - (int)local_214 >> 2))) {
          FUN_00481520(&local_218,pfVar10,1,&local_248);
        }
        else {
          *pfVar10 = (float)local_248;
          local_210 = pfVar10 + 1;
        }
        pfVar10 = local_210;
        local_298 = (float)((int)local_298 + 1);
        bVar3 = FUN_00547e50(&local_290,(int)local_298,&local_198);
      } while (bVar3);
    }
    if (local_224 == (float *)0x0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = (float)((int)local_220 - (int)local_224 >> 2);
    }
    if (local_214 == (void *)0x0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = (float)((int)pfVar10 - (int)local_214 >> 2);
    }
    if ((int)fVar9 < (int)fVar5) {
      fVar5 = fVar9;
    }
    if (0 < (int)fVar5) {
      iVar4 = (int)local_214 - (int)local_224;
      pfVar10 = local_224;
      local_298 = fVar5;
      do {
        puVar2 = DAT_01049208;
        local_244 = *(undefined4 *)((int)pfVar10 + iVar4);
        local_248 = (uint *)*pfVar10;
        if ((DAT_01049204 == 0) ||
           ((uint)(DAT_0104920c - DAT_01049204 >> 3) <=
            (uint)((int)DAT_01049208 - DAT_01049204 >> 3))) {
          FUN_00481c20(&DAT_01049200,DAT_01049208,1,&local_248);
        }
        else {
          FUN_0047b040(DAT_01049208,1,&local_248);
          DAT_01049208 = puVar2 + 2;
        }
        pfVar10 = pfVar10 + 1;
        local_298 = (float)((int)local_298 + -1);
      } while (local_298 != 0.0);
    }
    FUN_0040c920(&local_270,&local_290);
    FUN_00547e50(&local_290,0,&local_78);
    fVar9 = (float)FUN_00567d80(&local_78);
    if (0 < (int)fVar9) {
      do {
        local_298 = fVar9;
        FUN_0040c920(&local_270,&local_290);
        puStack_1d8 = auStack_1cc;
        auStack_1cc[0] = 0;
        uStack_1d4 = 0;
        uStack_1d0 = 0x14;
        puStack_38 = auStack_2c;
        auStack_2c[0] = 0;
        uStack_34 = 0;
        uStack_30 = 0x14;
        puStack_118 = auStack_10c;
        auStack_10c[0] = 0;
        uStack_114 = 0;
        uStack_110 = 0x14;
        local_1f8 = local_1ec;
        local_1ec[0] = 0;
        local_1f4 = 0;
        local_1f0 = 0x14;
        local_c = CONCAT31(local_c._1_3_,0xb);
        bVar3 = FUN_00547e50(&local_290,0,&puStack_1d8);
        if ((((bVar3) && (bVar3 = FUN_00547e50(&local_290,1,&puStack_38), bVar3)) &&
            (bVar3 = FUN_00547e50(&local_290,2,&puStack_118), bVar3)) &&
           (bVar3 = FUN_00547e50(&local_290,3,&local_1f8), bVar3)) {
          uVar6 = FUN_00567d80(&local_1f8);
          uVar7 = FUN_00567d80(&puStack_118);
          uVar8 = FUN_00567d80(&puStack_38);
          fVar15 = FUN_00567d60(&puStack_1d8);
          local_248 = (uint *)(float)fVar15;
          local_244 = uVar8;
          uStack_240 = uVar7;
          auStack_23c[0] = uVar6;
          FUN_004824d0(&DAT_010491f0,&local_248);
        }
        if (0x14 < local_1f0) {
                    /* WARNING: Subroutine does not return */
          _free(local_1f8);
        }
        if (0x14 < uStack_110) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_118);
        }
        if (0x14 < uStack_30) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_38);
        }
        local_c._0_1_ = 7;
        if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_1d8);
        }
        local_298 = (float)((int)local_298 + -1);
        fVar9 = local_298;
      } while (local_298 != 0.0);
    }
    FUN_004844c0(&local_270,&local_290,0);
    FUN_004844c0(&local_270,&local_290,1);
    FUN_00482cf0(&DAT_01049290);
    FUN_004844c0(&local_270,&local_290,2);
    FUN_004844c0(&local_270,&local_290,3);
    FUN_004844c0(&local_270,&local_290,4);
    FUN_004844c0(&local_270,&local_290,5);
    FUN_004844c0(&local_270,&local_290,6);
    FUN_004844c0(&local_270,&local_290,7);
    FUN_004844c0(&local_270,&local_290,8);
    FUN_004844c0(&local_270,&local_290,9);
    FUN_004844c0(&local_270,&local_290,10);
    FUN_004844c0(&local_270,&local_290,0xb);
    FUN_004844c0(&local_270,&local_290,0xc);
    FUN_004844c0(&local_270,&local_290,0xd);
    FUN_004844c0(&local_270,&local_290,0xe);
    FUN_004844c0(&local_270,&local_290,0xf);
    FUN_004844c0(&local_270,&local_290,0x10);
    FUN_004844c0(&local_270,&local_290,0x11);
    FUN_004844c0(&local_270,&local_290,0x12);
    FUN_004844c0(&local_270,&local_290,0x13);
    FUN_004844c0(&local_270,&local_290,0x14);
    FUN_004844c0(&local_270,&local_290,0x15);
    FUN_004844c0(&local_270,&local_290,0x16);
    FUN_004844c0(&local_270,&local_290,0x17);
    FUN_004844c0(&local_270,&local_290,0x18);
    FUN_004844c0(&local_270,&local_290,0x19);
    FUN_0040c920(&local_270,&local_290);
    puStack_b8 = auStack_ac;
    auStack_ac[0] = 0;
    uStack_b4 = 0;
    uStack_b0 = 0x14;
    puStack_f8 = auStack_ec;
    auStack_ec[0] = 0;
    uStack_f4 = 0;
    uStack_f0 = 0x14;
    puStack_138 = auStack_12c;
    auStack_12c[0] = 0;
    uStack_134 = 0;
    uStack_130 = 0x14;
    puStack_58 = auStack_4c;
    auStack_4c[0] = 0;
    uStack_54 = 0;
    uStack_50 = 0x14;
    puStack_d8 = auStack_cc;
    auStack_cc[0] = 0;
    uStack_d4 = 0;
    uStack_d0 = 0x14;
    puStack_98 = auStack_8c;
    auStack_8c[0] = 0;
    uStack_94 = 0;
    uStack_90 = 0x14;
    pcStack_158 = acStack_14c;
    acStack_14c[0] = '\0';
    uStack_154 = 0;
    uStack_150 = 0x14;
    local_c._0_1_ = 0x12;
    bVar3 = FUN_00547e50(&local_290,0,&puStack_b8);
    if (((((bVar3) && (bVar3 = FUN_00547e50(&local_290,1,&puStack_f8), bVar3)) &&
         ((bVar3 = FUN_00547e50(&local_290,2,&puStack_138), bVar3 &&
          ((bVar3 = FUN_00547e50(&local_290,3,&puStack_58), bVar3 &&
           (bVar3 = FUN_00547e50(&local_290,4,&puStack_d8), bVar3)))))) &&
        (bVar3 = FUN_00547e50(&local_290,5,&puStack_98), bVar3)) &&
       (bVar3 = FUN_00547e50(&local_290,6,&pcStack_158), bVar3)) {
      _DAT_01049960 = FUN_00567d80(&puStack_b8);
      fVar15 = FUN_00567d60(&puStack_f8);
      _DAT_01049964 = (float)fVar15;
      fVar15 = FUN_00567d60(&puStack_138);
      _DAT_01049968 = (float)fVar15;
      fVar15 = FUN_00567d60(&puStack_58);
      _DAT_0104996c = (float)fVar15;
      fVar15 = FUN_00567d60(&puStack_d8);
      _DAT_01049970 = (float)fVar15;
      _DAT_01049974 = FUN_00567d80(&puStack_98);
      FUN_004015d0(&DAT_01049978,pcStack_158,uStack_154);
      puStack_1d8 = auStack_1cc;
      auStack_1cc[0] = 0;
      uStack_1d4 = 0;
      uStack_1d0 = 0x14;
      local_c._0_1_ = 0x13;
      bVar3 = FUN_00547e50(&local_290,7,&puStack_1d8);
      if (bVar3) {
        iVar4 = FUN_00567d80(&puStack_1d8);
        local_248 = auStack_23c;
        iVar14 = 8;
        auStack_23c[0] = auStack_23c[0] & 0xffffff00;
        local_244 = 0;
        uStack_240 = 0x14;
        iVar4 = iVar4 + -1;
        local_c._0_1_ = 0x14;
        if (0 < iVar4) {
          do {
            FUN_00547e50(&local_290,iVar14,&local_248);
            fVar15 = FUN_00567d60(&local_248);
            local_298 = (float)fVar15;
            FUN_004823e0(&DAT_01049998,&local_298);
            iVar14 = iVar14 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        bVar3 = FUN_00547e50(&local_290,iVar14,&local_248);
        if (bVar3) {
          do {
            fVar15 = FUN_00567d60(&local_248);
            local_298 = (float)fVar15;
            if ((DAT_0104a57c == 0) ||
               ((uint)(DAT_0104a584 - DAT_0104a57c >> 2) <=
                (uint)((int)DAT_0104a580 - DAT_0104a57c >> 2))) {
              FUN_00481520(&DAT_0104a578,DAT_0104a580,1,&local_298);
            }
            else {
              *DAT_0104a580 = local_298;
              DAT_0104a580 = DAT_0104a580 + 1;
            }
            iVar14 = iVar14 + 1;
            bVar3 = FUN_00547e50(&local_290,iVar14,&local_248);
          } while (bVar3);
        }
        if (0x14 < uStack_240) {
                    /* WARNING: Subroutine does not return */
          _free(local_248);
        }
      }
      local_c._0_1_ = 0x12;
      if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_1d8);
      }
    }
    FUN_004844c0(&local_270,&local_290,0x1b);
    FUN_004844c0(&local_270,&local_290,0x1c);
    FUN_004844c0(&local_270,&local_290,0x1d);
    FUN_004844c0(&local_270,&local_290,0x1e);
    FUN_004844c0(&local_270,&local_290,0x1f);
    FUN_004844c0(&local_270,&local_290,0x20);
    FUN_004844c0(&local_270,&local_290,0x21);
    FUN_004844c0(&local_270,&local_290,0x22);
    FUN_004844c0(&local_270,&local_290,0x23);
    FUN_004844c0(&local_270,&local_290,0x25);
    FUN_004844c0(&local_270,&local_290,0x26);
    FUN_004844c0(&local_270,&local_290,0x28);
    FUN_004844c0(&local_270,&local_290,0x29);
    FUN_004844c0(&local_270,&local_290,0x2a);
    FUN_004844c0(&local_270,&local_290,0x2c);
    FUN_004844c0(&local_270,&local_290,0x2e);
    FUN_004844c0(&local_270,&local_290,0x2f);
    FUN_004844c0(&local_270,&local_290,0x30);
    FUN_004844c0(&local_270,&local_290,0x31);
    FUN_004844c0(&local_270,&local_290,0x32);
    FUN_004844c0(&local_270,&local_290,0x3d);
    FUN_004844c0(&local_270,&local_290,0x3e);
    FUN_004844c0(&local_270,&local_290,0x40);
    FUN_004844c0(&local_270,&local_290,0x41);
    FUN_004844c0(&local_270,&local_290,0x42);
    FUN_004844c0(&local_270,&local_290,0x43);
    FUN_004844c0(&local_270,&local_290,0x44);
    if (0x14 < uStack_150) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_158);
    }
    if (0x14 < uStack_90) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_98);
    }
    if (0x14 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_d8);
    }
    if (0x14 < uStack_50) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_58);
    }
    if (0x14 < uStack_130) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_138);
    }
    if (0x14 < uStack_f0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_f8);
    }
    if (0x14 < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_b8);
    }
    if (0x14 < local_190) {
                    /* WARNING: Subroutine does not return */
      _free(local_198);
    }
    if (local_214 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_214);
    }
    if (0x14 < local_170) {
                    /* WARNING: Subroutine does not return */
      _free(local_178);
    }
    if (local_224 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_224);
    }
    if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
      _free(local_78);
    }
    if (0x14 < local_288) {
                    /* WARNING: Subroutine does not return */
      _free(local_290);
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00552ce0(&local_270);
  }
  else {
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00552ce0(&local_270);
  }
  if (0x14 < local_1b0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1b8);
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_00485c00 @ 00485c00 ////

int __fastcall FUN_00485c00(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00485ce0 @ 00485ce0 ////

int __fastcall FUN_00485ce0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 200;
}


//// FUNCTION FUN_00485ed0 @ 00485ed0 ////

int * __thiscall FUN_00485ed0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00485f00 @ 00485f00 ////

int * __cdecl FUN_00485f00(int param_1,int param_2,int *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    (**(code **)(*param_3 + 4))();
    param_3[5] = *(int *)(param_1 + 0x14);
    (**(code **)*param_3)();
    param_1 = param_1 + 0x18;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00485f50 @ 00485f50 ////

undefined4 * __cdecl FUN_00485f50(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00485fb0 @ 00485fb0 ////

undefined4 FUN_00485fb0(void)

{
  int iVar1;
  
  if (DAT_0104a59c == 0) {
    return 1;
  }
  iVar1 = (DAT_0104a5a0 - DAT_0104a59c) / 0x18;
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
}


//// FUNCTION FUN_00485ff0 @ 00485ff0 ////

void __fastcall FUN_00485ff0(int param_1)

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


//// FUNCTION FUN_00486010 @ 00486010 ////

void __fastcall FUN_00486010(int param_1)

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


//// FUNCTION FUN_00486230 @ 00486230 ////

void __cdecl FUN_00486230(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00486330 @ 00486330 ////

void __fastcall FUN_00486330(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1c4d4;
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


//// FUNCTION FUN_00486410 @ 00486410 ////

undefined4 * __thiscall FUN_00486410(void *this,byte param_1)

{
  FUN_0098a1c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00486470 @ 00486470 ////

int __thiscall FUN_00486470(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x38;
  }
  *(undefined1 *)((int)this + 0x3c) = *(undefined1 *)(iVar1 + 4);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(iVar1 + 0x14);
  FUN_004015d0((void *)((int)this + 0x60),*(char **)(param_1 + 0x60),*(uint *)(param_1 + 100));
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined1 *)((int)this + 0x88) = *(undefined1 *)(param_1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined1 *)((int)this + 0xc4) = *(undefined1 *)(param_1 + 0xc4);
  *(undefined1 *)((int)this + 0xc5) = *(undefined1 *)(param_1 + 0xc5);
  *(undefined1 *)((int)this + 0xc6) = *(undefined1 *)(param_1 + 0xc6);
  return (int)this;
}


//// FUNCTION FUN_004865e0 @ 004865e0 ////

void * __cdecl FUN_004865e0(int param_1,int param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = param_2 + -200;
    param_3 = (void *)((int)param_3 + -200);
    FUN_00486470(param_3,param_2);
  } while (param_2 != param_1);
  return param_3;
}


//// FUNCTION FUN_00486670 @ 00486670 ////

undefined4 * __thiscall FUN_00486670(void *this,byte param_1)

{
  FUN_00486330(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00486820 @ 00486820 ////

uint __cdecl FUN_00486820(byte *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = DAT_0104a58c;
  do {
    if (DAT_0104a590 <= uVar5) {
      if (param_3 < 0x15) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    pbVar2 = *(byte **)(uVar5 + 0x60);
    pbVar4 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00486864:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00486869;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00486864;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00486869:
    if (iVar3 == 0) {
      if (param_3 < 0x15) {
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    uVar5 = uVar5 + 200;
  } while( true );
}


//// FUNCTION FUN_004868b0 @ 004868b0 ////

void FUN_004868b0(void)

{
  uint uVar1;
  
  uVar1 = DAT_0104a58c;
  if (DAT_0104a58c < DAT_0104a590) {
    do {
      *(undefined1 *)(uVar1 + 0xc4) = 0;
      *(undefined4 *)(uVar1 + 0xc0) = 0xffffffff;
      uVar1 = uVar1 + 200;
    } while (uVar1 < DAT_0104a590);
  }
  return;
}


//// FUNCTION FUN_00486920 @ 00486920 ////

void __cdecl FUN_00486920(void *param_1,void *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 200)) {
    FUN_00486470(param_1,param_3);
  }
  return;
}


//// FUNCTION FUN_004869a0 @ 004869a0 ////

void FUN_004869a0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x32) {
    (**(code **)*param_1)(0);
  }
  return;
}


//// FUNCTION FUN_004869e0 @ 004869e0 ////

void __cdecl FUN_004869e0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_FUN_00d1c4d4;
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


//// FUNCTION FUN_00486a50 @ 00486a50 ////

void __fastcall FUN_00486a50(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x32) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00486ad0 @ 00486ad0 ////

void __cdecl FUN_00486ad0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_FUN_00d1c4d4;
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


//// FUNCTION FUN_00486c10 @ 00486c10 ////

void FUN_00486c10(void)

{
  FUN_00486a50(0x104a588);
  return;
}


//// FUNCTION FUN_00486c20 @ 00486c20 ////

void FUN_00486c20(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00486330(param_1);
  }
  return;
}


//// FUNCTION FUN_00486c50 @ 00486c50 ////

void __fastcall FUN_00486c50(int param_1)

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
    FUN_00486330(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00486ca0 @ 00486ca0 ////

undefined4 * FUN_00486ca0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00486ad0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_00486cd0 @ 00486cd0 ////

void FUN_00486cd0(void)

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
  puStack_8 = &LAB_00ca4818;
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


//// FUNCTION FUN_00486d40 @ 00486d40 ////

void FUN_00486d40(void)

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
  puStack_8 = &LAB_00ca4838;
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


//// FUNCTION FUN_00486dc0 @ 00486dc0 ////

void __thiscall FUN_00486dc0(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00485f00((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_00486330(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00486ec0 @ 00486ec0 ////

void __thiscall FUN_00486ec0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00ca4858;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d1c4d4;
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
      FUN_00486cd0();
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
        iVar3 = FUN_00485c00((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_004869e0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00486ad0(puVar5,param_2,(int)&local_34);
      FUN_004869e0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00486c20(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_004869e0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00486ca0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00486230(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_004869e0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00485f50((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00486230(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_00487220 @ 00487220 ////

void __cdecl FUN_00487220(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar5 = DAT_0104a5a0;
  piVar6 = DAT_0104a59c;
  if (DAT_0104a59c != DAT_0104a5a0) {
    do {
      iVar1 = piVar6[5];
      if ((*(int *)(iVar1 + 0x84) < param_1) || (param_1 < *(int *)(iVar1 + 0x80))) {
        *(undefined1 *)(iVar1 + 0xc4) = 0;
        piVar4 = DAT_0104a5a0;
        piVar5 = piVar6 + 6;
        piVar2 = piVar6;
        piVar3 = DAT_0104a5a0;
        while (DAT_0104a5a0 = piVar3, piVar5 != piVar4) {
          (**(code **)(*piVar2 + 4))();
          piVar2[5] = piVar2[0xb];
          (**(code **)*piVar2)();
          piVar5 = piVar2 + 0xc;
          piVar2 = piVar2 + 6;
          piVar3 = DAT_0104a5a0;
        }
        for (piVar5 = piVar3 + -6; piVar5 != piVar3; piVar5 = piVar5 + 6) {
          FUN_00486330(piVar5);
        }
        piVar5 = DAT_0104a5a0 + -6;
        DAT_0104a5a0 = piVar5;
      }
      else {
        piVar6 = piVar6 + 6;
      }
    } while (piVar6 != piVar5);
  }
  return;
}


//// FUNCTION FUN_004872d0 @ 004872d0 ////

void FUN_004872d0(void)

{
  FUN_004868b0();
  FUN_00486c50(0x104a598);
  DAT_0104a5a8 = 0;
  return;
}


//// FUNCTION FUN_00487310 @ 00487310 ////

void __thiscall FUN_00487310(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_00487355;
    }
  }
  iVar1 = 0;
LAB_00487355:
  FUN_00486ec0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_00487380 @ 00487380 ////

void __fastcall FUN_00487380(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00487390 @ 00487390 ////

void __thiscall FUN_00487390(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00486ad0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_00487310(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00487420 @ 00487420 ////

void __cdecl FUN_00487420(int param_1,int param_2,char param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca4878;
  local_c = ExceptionList;
  if (DAT_0104a58c != DAT_0104a590) {
    piVar2 = (int *)(DAT_0104a58c + 0x18);
    iVar3 = DAT_0104a58c;
    ExceptionList = &local_c;
    do {
      if ((param_2 == -1) || ((piVar2[0x1a] <= param_2 && (param_2 <= piVar2[0x1b])))) {
        if (param_1 != 2) {
          if (param_1 == 1) {
            cVar1 = *(char *)((int)piVar2 + 0xad);
          }
          else {
            if (param_1 != 0) goto LAB_00487500;
            cVar1 = (char)piVar2[0x1c];
          }
          if (cVar1 == '\0') goto LAB_00487500;
        }
        if (((param_3 == '\0') || (*(char *)((int)piVar2 + 0xae) != '\0')) &&
           ((char)piVar2[0x2b] == '\0')) {
          *(undefined1 *)(piVar2 + 0x2b) = 1;
          local_18 = &local_24;
          local_24 = &PTR_FUN_00d1c4d4;
          local_20 = *piVar2;
          *(int **)(*piVar2 + 4) = &local_20;
          *piVar2 = (int)&local_20;
          local_4 = 0;
          local_1c = piVar2;
          local_10 = iVar3;
          FUN_00487390(&DAT_0104a598,(int)&local_24);
          local_4 = 0xffffffff;
          FUN_00486330(&local_24);
        }
      }
LAB_00487500:
      iVar3 = iVar3 + 200;
      piVar2 = piVar2 + 0x32;
    } while (iVar3 != DAT_0104a590);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00487530 @ 00487530 ////

int __cdecl FUN_00487530(int param_1,char param_2)

{
  int *_Dst;
  void **ppvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *_Memory;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  void *local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca4898;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  if (DAT_0104a59c == (int *)0x0) {
    return 0;
  }
  iVar6 = DAT_0104a5a0 - (int)DAT_0104a59c >> 0x1f;
  iVar2 = (DAT_0104a5a0 - (int)DAT_0104a59c) / 0x18 + iVar6;
  iVar5 = iVar2 - iVar6;
  if (iVar2 == iVar6) {
    return 0;
  }
  if (param_2 == '\0') {
    local_24 = DAT_0104a59c[5];
    piVar3 = DAT_0104a59c;
    ExceptionList = &local_c;
  }
  else {
    _Memory = (void *)0x0;
    local_18 = (void *)0x0;
    local_14 = (int *)0x0;
    local_10 = 0;
    local_4 = 0;
    local_20 = 0;
    piVar4 = (int *)0x0;
    ExceptionList = &local_c;
    ppvVar1 = &local_c;
    if (0 < iVar5) {
      do {
        ExceptionList = ppvVar1;
        if ((_Memory == (void *)0x0) ||
           ((uint)(local_10 - (int)_Memory >> 2) <= (uint)((int)local_14 - (int)_Memory >> 2))) {
          FUN_0040ec60(local_1c,local_14,1,&local_20);
          _Memory = local_18;
        }
        else {
          *local_14 = local_20;
          local_14 = local_14 + 1;
        }
        local_20 = local_20 + 1;
        piVar4 = local_14;
        ppvVar1 = ExceptionList;
      } while (local_20 < iVar5);
    }
    while( true ) {
      local_24 = 0;
      if ((_Memory == (void *)0x0) || (iVar6 = (int)piVar4 - (int)_Memory >> 2, iVar6 == 0))
      goto LAB_0048767e;
      iVar2 = FUN_00990d30(0,iVar6);
      _Dst = (int *)((int)_Memory + iVar2 * 4);
      piVar3 = DAT_0104a59c + *_Dst * 6;
      if ((*(int *)(piVar3[5] + 0xc0) == -1) ||
         (param_1 <= DAT_0104a5a8 - *(int *)(piVar3[5] + 0xc0))) break;
      if (iVar6 != 0) {
        _memmove(_Dst,_Dst + 1,((int)piVar4 - (int)(_Dst + 1) >> 2) << 2);
        local_14 = piVar4 + -1;
        piVar4 = local_14;
      }
    }
    local_24 = piVar3[5];
LAB_0048767e:
    local_4 = 0xffffffff;
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  local_4 = 0xffffffff;
  iVar6 = 0;
  if (local_24 != 0) {
    iVar6 = piVar3[5];
    FUN_00486dc0(&DAT_0104a598,&local_20,piVar3);
    *(int *)(iVar6 + 0xc0) = DAT_0104a5a8;
    *(undefined1 *)(iVar6 + 0xc4) = 0;
    DAT_0104a5a8 = DAT_0104a5a8 + 1;
  }
  ExceptionList = local_c;
  return iVar6;
}


//// FUNCTION FUN_00487710 @ 00487710 ////

undefined4 * __thiscall FUN_00487710(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_0043dd00(this);
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x38;
  }
  *(undefined ***)((int)this + 0x38) = &PTR_FUN_00d1c4e4;
  *(undefined1 *)((int)this + 0x3c) = *(undefined1 *)(iVar1 + 4);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined ***)this = &PTR_FUN_00d1c524;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_00d1c504;
  *(undefined4 *)((int)this + 0x60) = (undefined1 *)((int)this + 0x6c);
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x60),*(char **)(param_1 + 0x60),*(uint *)(param_1 + 100))
  ;
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined1 *)((int)this + 0x88) = *(undefined1 *)(param_1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  puVar2 = (undefined4 *)(param_1 + 0x90);
  puVar3 = (undefined4 *)((int)this + 0x90);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined1 *)((int)this + 0xc4) = *(undefined1 *)(param_1 + 0xc4);
  *(undefined1 *)((int)this + 0xc5) = *(undefined1 *)(param_1 + 0xc5);
  *(undefined1 *)((int)this + 0xc6) = *(undefined1 *)(param_1 + 0xc6);
  return this;
}


//// FUNCTION FUN_00487840 @ 00487840 ////

undefined4 * __thiscall FUN_00487840(void *this,byte param_1)

{
  FUN_00488f60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00487870 @ 00487870 ////

void __cdecl FUN_00487870(void *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca48c1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_00487710(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004878e0 @ 004878e0 ////

void * __cdecl FUN_004878e0(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ca48e1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 200) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_00487710(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 200);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_00487980 @ 00487980 ////

void __cdecl FUN_00487980(void *param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ca4901;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_00487710(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 200);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00487aa0 @ 00487aa0 ////

void * FUN_00487aa0(void *param_1,int param_2,int param_3)

{
  FUN_00487980(param_1,param_2,param_3);
  return (void *)(param_2 * 200 + (int)param_1);
}


//// FUNCTION FUN_00487ad0 @ 00487ad0 ////

void __thiscall FUN_00487ad0(void *this,void *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_e4 [50];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca491b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff10;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_00487710(local_e4,param_3);
  iVar2 = *(int *)((int)this + 4);
  uVar6 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar2) / 200;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 200;
    }
    if (0x147ae14U - iVar1 < param_2) {
      FUN_00486d40();
      uVar6 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 200;
    }
    if (uVar6 < iVar1 + param_2) {
      if (0x147ae14 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 200;
      }
      if (uVar6 < iVar2 + param_2) {
        iVar2 = FUN_00485ce0((int)this);
        uVar6 = iVar2 + param_2;
      }
      pvVar3 = operator_new(uVar6 * 200);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar3;
      pvVar4 = FUN_004878e0(*(int *)((int)this + 4),(int)param_1,pvVar3);
      FUN_00487980(pvVar4,param_2,(int)local_e4);
      FUN_004878e0((int)param_1,*(int *)((int)this + 8),(void *)((int)pvVar4 + param_2 * 200));
      local_8 = 0;
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 200;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_004869a0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar6 * 200 + (int)pvVar3);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar2) * 200 + (int)pvVar3);
      *(void **)((int)this + 4) = pvVar3;
    }
    else {
      pvVar3 = *(void **)((int)this + 8);
      if ((uint)(((int)pvVar3 - (int)param_1) / 200) < param_2) {
        FUN_004878e0((int)param_1,(int)pvVar3,(void *)(param_2 * 200 + (int)param_1));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00487aa0(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 200,(int)local_e4);
        iVar2 = *(int *)((int)this + 8) + param_2 * 200;
        *(int *)((int)this + 8) = iVar2;
        FUN_00486920(param_1,(void *)(iVar2 + param_2 * -200),(int)local_e4);
      }
      else {
        pvVar4 = (void *)((int)pvVar3 + param_2 * -200);
        pvVar5 = FUN_004878e0((int)pvVar4,(int)pvVar3,pvVar3);
        *(void **)((int)this + 8) = pvVar5;
        FUN_004865e0((int)param_1,(int)pvVar4,pvVar3);
        FUN_00486920(param_1,(void *)(param_2 * 200 + (int)param_1),(int)local_e4);
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_00488f60(local_e4);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00487df0 @ 00487df0 ////

void __thiscall FUN_00487df0(void *this,int *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 200 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 200;
      goto LAB_00487e35;
    }
  }
  iVar1 = 0;
LAB_00487e35:
  FUN_00487ad0(this,param_2,1,param_3);
  *param_1 = iVar1 * 200 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00487e60 @ 00487e60 ////

void __thiscall FUN_00487e60(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 200) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 200))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_00487980(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 200;
    return;
  }
  FUN_00487df0(this,&param_1,*(void **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00487ef0 @ 00487ef0 ////

void __cdecl FUN_00487ef0(char *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int iVar11;
  byte *pbVar12;
  float10 fVar13;
  ulonglong uVar14;
  int local_a98;
  char *pcStack_a90;
  uint uStack_a8c;
  uint uStack_a88;
  char acStack_a84 [20];
  undefined1 *local_a70;
  undefined4 local_a6c;
  uint local_a68;
  undefined1 local_a64 [20];
  undefined1 *local_a50;
  undefined4 local_a4c;
  uint local_a48;
  undefined1 local_a44 [20];
  byte *pbStack_a30;
  uint uStack_a2c;
  uint uStack_a28;
  byte abStack_a24 [20];
  char *local_a10;
  uint local_a0c;
  uint local_a08;
  char local_a04 [20];
  char *local_9f0;
  undefined4 local_9ec;
  undefined4 local_9e8;
  char local_9e4 [20];
  undefined4 local_9d0;
  undefined4 local_9cc;
  char *local_9c8;
  undefined4 local_9c4;
  undefined4 local_9c0;
  char local_9bc [20];
  undefined4 local_9a8;
  undefined4 local_9a4;
  undefined1 *puStack_9a0;
  undefined4 uStack_99c;
  uint uStack_998;
  undefined1 auStack_994 [20];
  byte *pbStack_980;
  undefined4 uStack_97c;
  uint uStack_978;
  byte abStack_974 [20];
  byte *pbStack_960;
  undefined4 uStack_95c;
  uint uStack_958;
  byte abStack_954 [20];
  undefined4 local_940 [24];
  char *local_8e0;
  uint uStack_8dc;
  uint uStack_8d8;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined1 uStack_8b8;
  int iStack_8b4;
  float afStack_8b0 [8];
  int iStack_890;
  float fStack_88c;
  float fStack_888;
  float fStack_884;
  undefined4 uStack_880;
  undefined1 uStack_87c;
  undefined1 uStack_87b;
  undefined1 uStack_87a;
  void *apvStack_878 [2];
  uint uStack_870;
  void *apvStack_858 [2];
  uint uStack_850;
  void *apvStack_838 [2];
  uint uStack_830;
  void *apvStack_818 [2];
  uint uStack_810;
  wchar_t *apwStack_7f8 [2];
  uint uStack_7f0;
  void *apvStack_7d8 [2];
  uint uStack_7d0;
  void *local_7b8 [2];
  uint local_7b0;
  void *apvStack_798 [2];
  uint uStack_790;
  void *apvStack_778 [2];
  uint uStack_770;
  void *apvStack_758 [2];
  uint uStack_750;
  void *local_738 [2];
  uint local_730;
  void *apvStack_718 [2];
  uint uStack_710;
  void *apvStack_6f8 [2];
  uint uStack_6f0;
  void *local_6d8 [2];
  uint local_6d0;
  void *apvStack_6b8 [2];
  uint uStack_6b0;
  void *local_698 [2];
  uint uStack_690;
  undefined4 local_678 [18];
  int iStack_630;
  int iStack_62c;
  wchar_t awStack_624 [260];
  wchar_t awStack_41c [260];
  wchar_t awStack_214 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4a0c;
  pvStack_c = ExceptionList;
  local_a98 = 0;
  ExceptionList = &pvStack_c;
  FUN_00489d30(local_940);
  local_9c8 = local_9bc;
  local_4 = 0;
  local_9bc[0] = '\0';
  local_9c4 = 0;
  local_9c0 = 0x14;
  _strncpy(local_9c8,"",0);
  local_9c4 = 0;
  *local_9c8 = '\0';
  local_9a8 = 0;
  local_9a4 = 0;
  local_9f0 = local_9e4;
  local_9e4[0] = '\0';
  local_9ec = 0;
  local_9e8 = 0x14;
  _strncpy(local_9f0,"",0);
  local_9ec = 0;
  *local_9f0 = '\0';
  local_9d0 = 0;
  local_9cc = 0;
  local_a70 = local_a64;
  local_a64[0] = 0;
  local_a6c = 0;
  local_a68 = 0x14;
  pcVar4 = param_1;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  FUN_004015d0(&local_a70,param_1,(int)pcVar4 - (int)(param_1 + 1));
  local_4._0_1_ = 3;
  bVar2 = FUN_00553a50(&local_9c8,&local_a70);
  local_4._0_1_ = 2;
  if (0x14 < local_a68) {
                    /* WARNING: Subroutine does not return */
    _free(local_a70);
  }
  if (bVar2) {
    local_a50 = local_a44;
    local_a44[0] = 0;
    local_a4c = 0;
    local_a48 = 0x14;
    local_a70 = local_a64;
    local_a64[0] = 0;
    local_a6c = 0;
    local_a68 = 0x14;
    local_a10 = local_a04;
    local_a04[0] = '\0';
    local_a0c = 0;
    local_a08 = 0x14;
    local_4 = CONCAT31(local_4._1_3_,6);
    uVar5 = FUN_00552520(&local_9c8,&local_a50);
    if (((char)uVar5 != '\0') && (0 < DAT_00e508fc)) {
      do {
        uVar5 = FUN_00552520(&local_9c8,&local_a50);
        if ((char)uVar5 == '\0') break;
        puVar6 = FUN_0056ac50(local_7b8,&local_a50);
        FUN_004015d0(&local_a70,(char *)*puVar6,puVar6[1]);
        if (0x14 < local_7b0) {
                    /* WARNING: Subroutine does not return */
          _free(local_7b8[0]);
        }
        puVar6 = FUN_0040d6b0(local_6d8,"data/Audio/music/",&local_a70);
        puVar6 = FUN_004312e0(local_738,puVar6,".ogg");
        FUN_004015d0(&local_8e0,(char *)*puVar6,puVar6[1]);
        if (0x14 < local_730) {
                    /* WARNING: Subroutine does not return */
          _free(local_738[0]);
        }
        if (0x14 < local_6d0) {
                    /* WARNING: Subroutine does not return */
          _free(local_6d8[0]);
        }
        puVar6 = FUN_0056ac50(local_698,&local_a50);
        local_4._0_1_ = 7;
        uStack_8c0 = FUN_00567d80(puVar6);
        local_4._0_1_ = 6;
        if (0x14 < uStack_690) {
                    /* WARNING: Subroutine does not return */
          _free(local_698[0]);
        }
        puVar6 = FUN_0056ac50(apvStack_7d8,&local_a50);
        local_4._0_1_ = 8;
        uStack_8bc = FUN_00567d80(puVar6);
        local_4._0_1_ = 6;
        if (0x14 < uStack_7d0) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_7d8[0]);
        }
        puVar6 = FUN_0056ac50(apvStack_798,&local_a50);
        local_4._0_1_ = 9;
        iVar7 = FUN_00567d80(puVar6);
        uStack_8b8 = iVar7 != 0;
        local_4._0_1_ = 6;
        if (0x14 < uStack_790) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_798[0]);
        }
        puVar6 = FUN_0056ac50(apvStack_758,&local_a50);
        local_4._0_1_ = 10;
        fVar13 = FUN_00567d60(puVar6);
        fStack_884 = (float)fVar13;
        local_4._0_1_ = 6;
        if (0x14 < uStack_750) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_758[0]);
        }
        iVar7 = 0;
        do {
          local_4._0_1_ = 6;
          puVar6 = FUN_0056ac50(apvStack_6f8,&local_a50);
          local_4._0_1_ = 0xb;
          fVar13 = FUN_00567d60(puVar6);
          afStack_8b0[iVar7] = (float)fVar13;
          local_4._0_1_ = 6;
          if (0x14 < uStack_6f0) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_6f8[0]);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
        puVar6 = FUN_0056ac50(apvStack_6b8,&local_a50);
        local_4._0_1_ = 0xc;
        iVar7 = FUN_00567d80(puVar6);
        uStack_87b = iVar7 != 0;
        local_4._0_1_ = 6;
        if (0x14 < uStack_6b0) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_6b8[0]);
        }
        puVar6 = FUN_0056ac50(apvStack_778,&local_a50);
        local_4._0_1_ = 0xd;
        iVar7 = FUN_00567d80(puVar6);
        uStack_87a = iVar7 != 0;
        local_4 = CONCAT31(local_4._1_3_,6);
        if (0x14 < uStack_770) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_778[0]);
        }
        FUN_009b0660((int)local_8e0);
        uVar14 = FUN_00acd42c();
        iStack_890 = (int)uVar14;
        fStack_88c = 1.0;
        fStack_888 = 1.0;
        iStack_8b4 = 0;
        uStack_880 = 0xffffffff;
        uStack_87c = 0;
        puVar6 = FUN_0040d6b0(apvStack_818,"data/Audio/music/cues/",&local_a70);
        puVar6 = FUN_004312e0(apvStack_718,puVar6,".cue");
        uVar5 = puVar6[1];
        pcVar4 = (char *)*puVar6;
        if (local_a08 <= uVar5) {
          if (0x14 < local_a08) {
                    /* WARNING: Subroutine does not return */
            _free(local_a10);
          }
          local_a08 = uVar5 + 0x20 & 0xffffffe0;
          local_a10 = _malloc(local_a08);
        }
        _strncpy(local_a10,pcVar4,uVar5);
        local_a10[uVar5] = '\0';
        local_a0c = uVar5;
        if (0x14 < uStack_710) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_718[0]);
        }
        if (0x14 < uStack_810) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_818[0]);
        }
        bVar2 = FUN_00553a50(&local_9f0,&local_a10);
        if (bVar2) {
          puStack_9a0 = auStack_994;
          auStack_994[0] = 0;
          uStack_99c = 0;
          uStack_998 = 0x14;
          pcStack_a90 = acStack_a84;
          acStack_a84[0] = '\0';
          uStack_a8c = 0;
          uStack_a88 = 0x14;
          pbStack_a30 = abStack_a24;
          abStack_a24[0] = 0;
          uStack_a2c = 0;
          uStack_a28 = 0x14;
          local_4 = CONCAT31(local_4._1_3_,0x10);
          FUN_00552520(&local_9f0,&puStack_9a0);
          uVar5 = FUN_00552520(&local_9f0,&puStack_9a0);
          cVar3 = (char)uVar5;
          while (cVar3 != '\0') {
            puVar6 = FUN_0056ac50(apvStack_838,&puStack_9a0);
            uVar5 = puVar6[1];
            pcVar4 = (char *)*puVar6;
            if (uStack_a88 <= uVar5) {
              if (0x14 < uStack_a88) {
                    /* WARNING: Subroutine does not return */
                _free(pcStack_a90);
              }
              uStack_a88 = uVar5 + 0x20 & 0xffffffe0;
              pcStack_a90 = _malloc(uStack_a88);
            }
            _strncpy(pcStack_a90,pcVar4,uVar5);
            pcStack_a90[uVar5] = '\0';
            uStack_a8c = uVar5;
            if (0x14 < uStack_830) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_838[0]);
            }
            uVar8 = FUN_00413450(&pcStack_a90,"=",0,1);
            puVar6 = FUN_00430770(&pcStack_a90,apvStack_878,1,uVar8 - 2);
            uVar5 = puVar6[1];
            pcVar4 = (char *)*puVar6;
            if (uStack_a28 <= uVar5) {
              if (0x14 < uStack_a28) {
                    /* WARNING: Subroutine does not return */
                _free(pbStack_a30);
              }
              uStack_a28 = uVar5 + 0x20 & 0xffffffe0;
              pbStack_a30 = _malloc(uStack_a28);
            }
            _strncpy((char *)pbStack_a30,pcVar4,uVar5);
            pbStack_a30[uVar5] = 0;
            uStack_a2c = uVar5;
            if (0x14 < uStack_870) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_878[0]);
            }
            puVar6 = FUN_00430770(&pcStack_a90,apvStack_858,uVar8 + 1,0xffffffff);
            uVar5 = puVar6[1];
            pcVar4 = (char *)*puVar6;
            if (uStack_a88 <= uVar5) {
              if (0x14 < uStack_a88) {
                    /* WARNING: Subroutine does not return */
                _free(pcStack_a90);
              }
              uStack_a88 = uVar5 + 0x20 & 0xffffffe0;
              pcStack_a90 = _malloc(uStack_a88);
            }
            _strncpy(pcStack_a90,pcVar4,uVar5);
            pcStack_a90[uVar5] = '\0';
            uStack_a8c = uVar5;
            if (0x14 < uStack_850) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_858[0]);
            }
            pbStack_960 = abStack_954;
            abStack_954[0] = 0;
            uStack_95c = 0;
            uStack_958 = 0x14;
            _strncpy((char *)pbStack_960,"DJ_STING",8);
            uStack_95c = 8;
            pbStack_960[8] = 0;
            pbVar9 = pbStack_a30;
            pbVar12 = pbStack_960;
            do {
              bVar1 = *pbVar9;
              bVar2 = bVar1 < *pbVar12;
              if (bVar1 != *pbVar12) {
LAB_004887e8:
                iVar7 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
                goto LAB_004887ed;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar9[1];
              bVar2 = bVar1 < pbVar12[1];
              if (bVar1 != pbVar12[1]) goto LAB_004887e8;
              pbVar9 = pbVar9 + 2;
              pbVar12 = pbVar12 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_004887ed:
            if ((iVar7 == 0) && (0 < iStack_890)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (0x14 < uStack_958) {
                    /* WARNING: Subroutine does not return */
              _free(pbStack_960);
            }
            if (bVar2) {
              iVar7 = FUN_00567d80(&pcStack_a90);
              fStack_888 = (float)iVar7 / (float)iStack_890;
            }
            else {
              pbStack_980 = abStack_974;
              abStack_974[0] = 0;
              uStack_97c = 0;
              uStack_978 = 0x14;
              _strncpy((char *)pbStack_980,"NEXT_MUSIC_START",0x10);
              uStack_97c = 0x10;
              pbStack_980[0x10] = 0;
              pbVar9 = pbStack_a30;
              pbVar12 = pbStack_980;
              do {
                bVar1 = *pbVar9;
                bVar2 = bVar1 < *pbVar12;
                if (bVar1 != *pbVar12) {
LAB_004888e9:
                  iVar7 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
                  goto LAB_004888ee;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar2 = bVar1 < pbVar12[1];
                if (bVar1 != pbVar12[1]) goto LAB_004888e9;
                pbVar9 = pbVar9 + 2;
                pbVar12 = pbVar12 + 2;
              } while (bVar1 != 0);
              iVar7 = 0;
LAB_004888ee:
              if ((iVar7 == 0) && (0 < iStack_890)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (0x14 < uStack_978) {
                    /* WARNING: Subroutine does not return */
                _free(pbStack_980);
              }
              if (bVar2) {
                iVar7 = FUN_00567d80(&pcStack_a90);
                iStack_8b4 = iStack_890 - iVar7;
                fStack_88c = (float)iVar7 / (float)iStack_890;
              }
            }
            uVar5 = FUN_00552520(&local_9f0,&puStack_9a0);
            cVar3 = (char)uVar5;
          }
          if (0x14 < uStack_a28) {
                    /* WARNING: Subroutine does not return */
            _free(pbStack_a30);
          }
          if (0x14 < uStack_a88) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_a90);
          }
          local_4._1_3_ = (uint3)((uint)local_4 >> 8);
          local_4 = CONCAT31(local_4._1_3_,6);
          if (0x14 < uStack_998) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_9a0);
          }
        }
        FUN_00487e60(&DAT_0104a588,(int)local_940);
        local_a98 = local_a98 + 1;
      } while (local_a98 < DAT_00e508fc);
    }
    if (0x14 < local_a08) {
                    /* WARNING: Subroutine does not return */
      _free(local_a10);
    }
    if (0x14 < local_a68) {
                    /* WARNING: Subroutine does not return */
      _free(local_a70);
    }
    local_4._0_1_ = 2;
    if (0x14 < local_a48) {
                    /* WARNING: Subroutine does not return */
      _free(local_a50);
    }
  }
  local_4._0_1_ = 2;
  FUN_009f2760(local_678);
  local_4._0_1_ = 0x11;
  puVar6 = (undefined4 *)FUN_00567ff0(apvStack_858);
  FUN_0043be60(apwStack_7f8,puVar6,L"\\The Movies\\Radio Music\\");
  local_4 = CONCAT31(local_4._1_3_,0x12);
  if (10 < uStack_850) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_858[0]);
  }
  FUN_009f34b0(local_678,L"*.ogg",apwStack_7f8[0]);
  FUN_009f34b0(local_678,L"*.wma",apwStack_7f8[0]);
  iVar7 = 0;
  if (local_a98 < DAT_00e508fc) {
    do {
      if (iStack_630 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = iStack_62c - iStack_630 >> 2;
      }
      if (iVar11 <= iVar7) break;
      __wsplitpath(*(wchar_t **)(iStack_630 + iVar7 * 4),(wchar_t *)0x0,(wchar_t *)0x0,awStack_214,
                   awStack_41c);
      iVar7 = iVar7 + 1;
      _swprintf(awStack_624,0xd1c528,awStack_214);
      FUN_009ac070((ushort *)awStack_624);
      puVar6 = FUN_00568960(apvStack_818,awStack_624);
      local_4 = CONCAT31(local_4._1_3_,0x13);
      puVar10 = FUN_00568870(apvStack_838,apwStack_7f8);
      puVar6 = FUN_0047aee0(apvStack_878,puVar10,puVar6);
      uVar5 = puVar6[1];
      pcVar4 = (char *)*puVar6;
      if (uStack_8d8 <= uVar5) {
        if (0x14 < uStack_8d8) {
                    /* WARNING: Subroutine does not return */
          _free(local_8e0);
        }
        uStack_8d8 = uVar5 + 0x20 & 0xffffffe0;
        local_8e0 = _malloc(uStack_8d8);
      }
      _strncpy(local_8e0,pcVar4,uVar5);
      local_8e0[uVar5] = '\0';
      uStack_8dc = uVar5;
      if (0x14 < uStack_870) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_878[0]);
      }
      if (0x14 < uStack_830) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_838[0]);
      }
      local_4 = CONCAT31(local_4._1_3_,0x12);
      if (0x14 < uStack_810) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_818[0]);
      }
      afStack_8b0[0] = 0.01;
      afStack_8b0[1] = 0.01;
      afStack_8b0[2] = 0.01;
      afStack_8b0[3] = 0.01;
      afStack_8b0[4] = 0.01;
      afStack_8b0[5] = 0.01;
      afStack_8b0[6] = 0.01;
      uStack_8c0 = 0;
      uStack_8bc = 100000;
      uStack_8b8 = 1;
      iStack_8b4 = 2000;
      afStack_8b0[7] = 0.01;
      uStack_87b = 0;
      uStack_87a = 0;
      FUN_009b0660((int)local_8e0);
      uVar14 = FUN_00acd42c();
      iStack_890 = (int)uVar14;
      fStack_884 = 0.8;
      fStack_88c = 0.95;
      iVar11 = FUN_00990d30(0,3);
      uVar5 = uStack_8dc;
      pcVar4 = local_8e0;
      if (iVar11 == 0) {
        fStack_888 = 0.05;
      }
      else {
        fStack_888 = fStack_88c;
      }
      uStack_880 = 0xffffffff;
      uStack_87c = 0;
      pbVar9 = &stack0xfffff540;
      uVar8 = 0x14;
      if (0x13 < uStack_8dc) {
        uVar8 = uStack_8dc + 0x20 & 0xffffffe0;
        pbVar9 = _malloc(uVar8);
      }
      _strncpy((char *)pbVar9,pcVar4,uVar5);
      pbVar9[uVar5] = 0;
      uVar5 = FUN_00486820(pbVar9,uVar5,uVar8);
      if (uVar5 == 0) {
        FUN_00487e60(&DAT_0104a588,(int)local_940);
        local_a98 = local_a98 + 1;
      }
    } while (local_a98 < DAT_00e508fc);
  }
  if (uStack_7f0 < 0xb) {
    local_4._0_1_ = 2;
    FUN_009f2320(local_678);
    local_4._0_1_ = 1;
    FUN_00552ce0(&local_9f0);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00552ce0(&local_9c8);
    local_4 = 0xffffffff;
    FUN_00488f60(local_940);
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(apwStack_7f8[0]);
}


//// FUNCTION FUN_00488e70 @ 00488e70 ////

void FUN_00488e70(void)

{
  FUN_00487ef0("data/audio/trackinfo.csv");
  return;
}


//// FUNCTION FUN_00488e80 @ 00488e80 ////

void __fastcall FUN_00488e80(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00488eb0 @ 00488eb0 ////

void FUN_00488eb0(void)

{
  return;
}


//// FUNCTION FUN_00488ec0 @ 00488ec0 ////

void __fastcall FUN_00488ec0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00488ef0 @ 00488ef0 ////

void FUN_00488ef0(void)

{
  return;
}


//// FUNCTION FUN_00488f60 @ 00488f60 ////

void __fastcall FUN_00488f60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca4a28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d1c524;
  param_1[0xe] = &PTR_LAB_00d1c504;
  local_4 = 0;
  if (0x14 < (uint)param_1[0x1a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00488fd0 @ 00488fd0 ////

void __cdecl FUN_00488fd0(int param_1,char param_2)

{
  if (param_1 != 0) {
    if (param_2 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x60) + 4))();
      *(undefined4 *)(param_1 + 0x74) = 0;
      (*(code *)**(undefined4 **)(param_1 + 0x60))();
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  return;
}


//// FUNCTION FUN_00489010 @ 00489010 ////

void __fastcall FUN_00489010(int *param_1)

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
  puStack_8 = &LAB_00ca4a48;
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


//// FUNCTION FUN_004890e0 @ 004890e0 ////

void __fastcall FUN_004890e0(int *param_1)

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
  puStack_8 = &LAB_00ca4a68;
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


//// FUNCTION FUN_004891d0 @ 004891d0 ////

void __fastcall FUN_004891d0(int param_1)

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
  puStack_8 = &LAB_00ca4ab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MusicTypes.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0xb;
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
  uVar3 = FUN_0098b490("FileName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MusicTypes.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0xc;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("StartYear");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x48),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MusicTypes.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0xd;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("EndYear");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x4c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MusicTypes.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    local_2c = local_20;
    DAT_010581d4 = 0xe;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("bRadioable");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x50),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MusicTypes.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0xf;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("CrossFade");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x54),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MusicTypes.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x10;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
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
  uVar3 = FUN_0098b490("Weights[8]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x78),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MusicTypes.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x11;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
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
  uVar3 = FUN_0098b490("Length");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x78),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00489810 @ 00489810 ////

void __fastcall FUN_00489810(int param_1)

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
  puStack_8 = &LAB_00ca4af0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MusicTypes.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x28;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x28));
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
  uVar3 = FUN_0098b490("pTrack");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MusicTypes.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x29;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("Offset");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x40),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MusicTypes.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("LoopCount");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x44),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\MusicTypes.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("bPlayedDJ");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x48),1);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00489bd0 @ 00489bd0 ////

void __fastcall FUN_00489bd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca4b08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d1c6b8;
  param_1[0xe] = &PTR_LAB_00d1c698;
  param_1[0x18] = &PTR_FUN_00d1c4d4;
  local_4 = 0;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00489c80 @ 00489c80 ////

undefined4 * __thiscall FUN_00489c80(void *this,byte param_1)

{
  FUN_00489bd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00489ca0 @ 00489ca0 ////

undefined4 * __fastcall FUN_00489ca0(undefined4 *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4b3e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  param_1[0xe] = &PTR_LAB_00d1c698;
  piVar1 = param_1 + 0x18;
  *param_1 = &PTR_FUN_00d1c6b8;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1c4d4;
  param_1[0x1d] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar1 + 4))();
  param_1[0x1d] = 0;
  (**(code **)*piVar1)();
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00489d30 @ 00489d30 ////

undefined4 * __fastcall FUN_00489d30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4b58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d1c524;
  param_1[0xe] = &PTR_LAB_00d1c504;
  param_1[0x18] = param_1 + 0x1b;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x14;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00489e80 @ 00489e80 ////

int __fastcall FUN_00489e80(int param_1)

{
  return param_1 + 0x108;
}


//// FUNCTION FUN_00489e90 @ 00489e90 ////

undefined4 __fastcall FUN_00489e90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x128);
}


//// FUNCTION FUN_00489ea0 @ 00489ea0 ////

void __fastcall FUN_00489ea0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1c6e4;
  param_1[0xe] = &PTR_LAB_00d1c6c0;
  if (10 < (uint)param_1[0x44]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x42]);
  }
  if (10 < (uint)param_1[0x3c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3a]);
  }
  if (10 < (uint)param_1[0x33]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x31]);
  }
  if (10 < (uint)param_1[0x2b]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x29]);
  }
  FUN_004605a0(param_1);
  return;
}


//// FUNCTION FUN_00489f40 @ 00489f40 ////

undefined4 * __thiscall
FUN_00489f40(void *this,undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 *param_6)

{
  FUN_00460bc0(this);
  *(undefined4 *)((int)this + 0xa0) = param_1;
  *(undefined ***)this = &PTR_FUN_00d1c6e4;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_00d1c6c0;
  *(undefined4 *)((int)this + 0xa4) = (undefined2 *)((int)this + 0xb0);
  *(undefined2 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xa4),(wchar_t *)*param_3,param_3[1]);
  *(undefined4 *)((int)this + 0xc4) = (undefined2 *)((int)this + 0xd0);
  *(undefined2 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xc4),(wchar_t *)*param_4,param_4[1]);
  *(undefined4 *)((int)this + 0xe4) = param_5;
  *(undefined4 *)((int)this + 0xe8) = (undefined2 *)((int)this + 0xf4);
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xe8),(wchar_t *)*param_6,param_6[1]);
  *(undefined2 **)((int)this + 0x108) = (undefined2 *)((int)this + 0x114);
  *(undefined2 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 10;
  if (param_2 != *(int *)((int)this + 0x70)) {
    *(int *)((int)this + 0x74) = *(int *)((int)this + 0x70);
    *(int *)((int)this + 0x70) = param_2;
  }
  *(int *)((int)this + 0x74) = param_2;
  *(int *)((int)this + 0x78) = param_2;
  return this;
}


//// FUNCTION FUN_0048a020 @ 0048a020 ////

undefined4 * __thiscall FUN_0048a020(void *this,byte param_1)

{
  FUN_00489ea0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0048a040 @ 0048a040 ////

undefined4 * __thiscall
FUN_0048a040(void *this,undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  FUN_00460bc0(this);
  *(undefined4 *)((int)this + 0xa0) = param_1;
  *(undefined ***)this = &PTR_FUN_00d1c6e4;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_00d1c6c0;
  *(undefined4 *)((int)this + 0xa4) = (undefined2 *)((int)this + 0xb0);
  *(undefined2 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xa4),(wchar_t *)*param_3,param_3[1]);
  *(undefined2 *)((int)this + 0xd0) = 0;
  *(int *)((int)this + 0xc4) = (int)this + 0xd0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 10;
  *(undefined4 *)((int)this + 0xe8) = (undefined2 *)((int)this + 0xf4);
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xe8),(wchar_t *)*param_4,param_4[1]);
  *(undefined2 **)((int)this + 0x108) = (undefined2 *)((int)this + 0x114);
  *(undefined2 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 10;
  if (param_2 != *(int *)((int)this + 0x70)) {
    *(int *)((int)this + 0x74) = *(int *)((int)this + 0x70);
    *(int *)((int)this + 0x70) = param_2;
  }
  *(int *)((int)this + 0x74) = param_2;
  *(int *)((int)this + 0x78) = param_2;
  return this;
}


//// FUNCTION FUN_0048a110 @ 0048a110 ////

undefined4 * __thiscall FUN_0048a110(void *this,int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  FUN_00460bc0(this);
  *(undefined ***)this = &PTR_FUN_00d1c6e4;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_00d1c6c0;
  *(undefined4 *)((int)this + 0xa0) = 1;
  *(undefined4 *)((int)this + 0xa4) = (undefined2 *)((int)this + 0xb0);
  *(undefined2 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xa4),(wchar_t *)param_1[1],param_1[2]);
  *(undefined4 *)((int)this + 0xc4) = (undefined2 *)((int)this + 0xd0);
  *(undefined2 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xc4),(wchar_t *)param_1[9],param_1[10]);
  *(int *)((int)this + 0xe4) = param_1[0x11];
  *(undefined4 *)((int)this + 0xe8) = (undefined2 *)((int)this + 0xf4);
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xe8),(wchar_t *)*param_2,param_2[1]);
  *(undefined4 *)((int)this + 0x108) = (undefined2 *)((int)this + 0x114);
  *(undefined2 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x108),(wchar_t *)param_1[0x12],param_1[0x13]);
  *(int *)((int)this + 0x128) = param_1[0x1a];
  iVar1 = *param_1;
  if (iVar1 != *(int *)((int)this + 0x70)) {
    *(int *)((int)this + 0x74) = *(int *)((int)this + 0x70);
    *(int *)((int)this + 0x70) = iVar1;
  }
  *(int *)((int)this + 0x74) = *param_1;
  *(int *)((int)this + 0x78) = *param_1;
  return this;
}


//// FUNCTION FUN_0048a200 @ 0048a200 ////

undefined4 * __thiscall FUN_0048a200(void *this,int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  FUN_00460bc0(this);
  *(undefined ***)this = &PTR_FUN_00d1c6e4;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_00d1c6c0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = (undefined2 *)((int)this + 0xb0);
  *(undefined2 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xa4),(wchar_t *)param_1[1],param_1[2]);
  *(undefined4 *)((int)this + 0xc4) = (undefined2 *)((int)this + 0xd0);
  *(undefined2 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xc4),(wchar_t *)param_1[9],param_1[10]);
  *(undefined4 *)((int)this + 0xe8) = (undefined2 *)((int)this + 0xf4);
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xe8),(wchar_t *)*param_2,param_2[1]);
  *(undefined2 **)((int)this + 0x108) = (undefined2 *)((int)this + 0x114);
  *(undefined2 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 10;
  iVar1 = *param_1;
  if (iVar1 != *(int *)((int)this + 0x70)) {
    *(int *)((int)this + 0x74) = *(int *)((int)this + 0x70);
    *(int *)((int)this + 0x70) = iVar1;
  }
  *(int *)((int)this + 0x74) = *param_1;
  *(int *)((int)this + 0x78) = *param_1;
  return this;
}


//// FUNCTION FUN_0048a2d0 @ 0048a2d0 ////

undefined4 * __cdecl
FUN_0048a2d0(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4b7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(300);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0048a040(pvVar2,param_1,param_2,param_3,param_4);
  }
  iVar1 = puVar3[0x28];
  local_4 = 0xffffffff;
  puVar4 = puVar3;
  if (iVar1 == 0) {
    pvVar2 = (void *)FUN_0045eec0();
  }
  else if (iVar1 == 1) {
    pvVar2 = (void *)FUN_0045eed0();
  }
  else {
    if (iVar1 != 2) {
      ExceptionList = local_c;
      return puVar3;
    }
    pvVar2 = (void *)FUN_0045eee0();
  }
  FUN_0045f430(pvVar2,(int)puVar4);
  ExceptionList = local_c;
  return puVar3;
}


//// FUNCTION FUN_0048a370 @ 0048a370 ////

undefined4 __cdecl FUN_0048a370(int *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4b9b;
  local_c = ExceptionList;
  if (param_1 != (int *)0x0) {
    ExceptionList = &local_c;
    pvVar2 = operator_new(300);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_0048a110(pvVar2,param_1,param_2);
    }
    iVar1 = puVar3[0x28];
    local_4 = 0xffffffff;
    if (iVar1 == 0) {
      pvVar2 = (void *)FUN_0045eec0();
    }
    else if (iVar1 == 1) {
      pvVar2 = (void *)FUN_0045eed0();
    }
    else {
      if (iVar1 != 2) {
        ExceptionList = local_c;
        return 0;
      }
      pvVar2 = (void *)FUN_0045eee0();
    }
    FUN_0045f430(pvVar2,(int)puVar3);
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_0048a410 @ 0048a410 ////

undefined4 __cdecl FUN_0048a410(int *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4bbb;
  local_c = ExceptionList;
  if (param_1 != (int *)0x0) {
    ExceptionList = &local_c;
    pvVar2 = operator_new(300);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_0048a200(pvVar2,param_1,param_2);
    }
    iVar1 = puVar3[0x28];
    local_4 = 0xffffffff;
    if (iVar1 == 0) {
      pvVar2 = (void *)FUN_0045eec0();
    }
    else if (iVar1 == 1) {
      pvVar2 = (void *)FUN_0045eed0();
    }
    else {
      if (iVar1 != 2) {
        ExceptionList = local_c;
        return 0;
      }
      pvVar2 = (void *)FUN_0045eee0();
    }
    FUN_0045f430(pvVar2,(int)puVar3);
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_0048a590 @ 0048a590 ////

void __fastcall FUN_0048a590(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0048a5e0 @ 0048a5e0 ////

void __fastcall FUN_0048a5e0(int *param_1)

{
  FUN_005dfbc0(param_1 + 0x114);
  FUN_00529660(param_1);
  return;
}


//// FUNCTION FUN_0048a610 @ 0048a610 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0048a610(int *param_1)

{
  float10 fVar1;
  
  if ((char)param_1[0x11e] == '\0') {
    fVar1 = (float10)(**(code **)(*param_1 + 0x15c))();
    _DAT_00f89048 = (float)(fVar1 + (float10)_DAT_00f89048);
    *(undefined1 *)(param_1 + 0x11e) = 1;
  }
  FUN_0052d710(param_1);
  return;
}


//// FUNCTION FUN_0048a640 @ 0048a640 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0048a640(int *param_1)

{
  float10 fVar1;
  
  FUN_0052f4b0(param_1);
  if ((char)param_1[0x11e] != '\0') {
    fVar1 = FUN_00528480((int)param_1);
    _DAT_00f89048 = (float)((float10)_DAT_00f89048 - fVar1);
    *(undefined1 *)(param_1 + 0x11e) = 0;
  }
  return;
}


//// FUNCTION FUN_0048a670 @ 0048a670 ////

void __thiscall FUN_0048a670(void *this,char param_1)

{
  int iVar1;
  
  if (*(void **)((int)this + 0x11c) != (void *)0x0) {
    iVar1 = FUN_0097e350(*(void **)((int)this + 0x11c),0);
    if (iVar1 != 0) {
      iVar1 = FUN_0097e350(*(void **)((int)this + 0x11c),0);
      if (*(int *)(iVar1 + 0x60) != 0) {
        FUN_00528220(this,param_1);
        return;
      }
    }
  }
  if (param_1 != '\0') {
    FUN_0046d730(*(int **)((int)this + 0x3a0),0x3ff,0x80);
    return;
  }
  FUN_0046d730(*(int **)((int)this + 0x3a0),-0x3ff,0x80);
  return;
}


//// FUNCTION FUN_0048a6f0 @ 0048a6f0 ////

void __fastcall FUN_0048a6f0(int *param_1)

{
  FUN_005384e0(param_1);
  DAT_00e50978 = 1;
  if (param_1[0x10d] == 1) {
    param_1[0xb8] = param_1[0xb8] & 0xffffffefU | 0x220;
  }
  else {
    param_1[0xb8] = param_1[0xb8] | 0x30;
  }
  FUN_0043b700(param_1 + 0xb2,0.0);
  FUN_009582f0(param_1 + 0x40);
  return;
}


//// FUNCTION FUN_0048a750 @ 0048a750 ////

void __fastcall FUN_0048a750(int *param_1)

{
  FUN_009582f0(param_1 + 0x40);
  FUN_00529b30(param_1);
  return;
}


//// FUNCTION FUN_0048a770 @ 0048a770 ////

float10 __fastcall FUN_0048a770(int *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*param_1 + 0x15c))();
  return ((float10)1.0 / (float10)(float)param_1[0x11f]) * fVar1;
}


//// FUNCTION FUN_0048a790 @ 0048a790 ////

undefined4 __fastcall FUN_0048a790(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x138))();
  if (cVar1 == '\0') {
    return 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x108))();
  if ((cVar1 != '\0') && (uVar2 = FUN_00538d30((int)param_1), (char)uVar2 != '\0')) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0048a7d0 @ 0048a7d0 ////

void FUN_0048a7d0(void)

{
  return;
}


//// FUNCTION FUN_0048a7f0 @ 0048a7f0 ////

undefined4 * __fastcall FUN_0048a7f0(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4bdb;
  local_c = ExceptionList;
  if ((char)param_1[0x120] != '\0') {
    ExceptionList = &local_c;
    this = operator_new(0xa8);
    local_4 = 0;
    if (this != (void *)0x0) {
      puVar1 = FUN_00902530(this,param_1);
      ExceptionList = local_c;
      return puVar1;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0048a860 @ 0048a860 ////

int * __thiscall FUN_0048a860(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0048a8a0 @ 0048a8a0 ////

int * __thiscall FUN_0048a8a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0048a8e0 @ 0048a8e0 ////

int * __thiscall FUN_0048a8e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0048a980 @ 0048a980 ////

undefined4 __thiscall FUN_0048a980(void *this,float param_1)

{
  if (param_1 <= (float)*(longlong *)this * 1.1920929e-07) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0048aad0 @ 0048aad0 ////

void __fastcall FUN_0048aad0(int *param_1)

{
  FUN_00531220(param_1);
  (*(code *)DAT_00f885f8[1])();
                    /* WARNING: Could not recover jumptable at 0x0048aaf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DAT_00f8860c = param_1;
  (*(code *)*DAT_00f885f8)();
  return;
}


//// FUNCTION FUN_0048ab00 @ 0048ab00 ////

void __fastcall FUN_0048ab00(int *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = (undefined4 *)param_1[0xef];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[0xef] = 0;
  }
  (**(code **)(*param_1 + 0x1c0))();
  (**(code **)(*param_1 + 0x144))();
  param_1[0xb8] = param_1[0xb8] & 0xffffffdf;
  return;
}


//// FUNCTION FUN_0048ac00 @ 0048ac00 ////

void FUN_0048ac00(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104a618;
  if (DAT_0104a618 != (undefined4 *)0x0) {
    iVar1 = DAT_0104a618[0x12];
    DAT_0104a618[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104a604[1])();
    DAT_0104a618 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0048ac40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_0104a604)();
    return;
  }
  return;
}


//// FUNCTION FUN_0048ac50 @ 0048ac50 ////

void __thiscall FUN_0048ac50(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  float unaff_EBX;
  
  piVar2 = param_1;
  cVar3 = (**(code **)(*param_1 + 0x108))();
  if (cVar3 != '\0') {
    if (*(int **)((int)this + 0x90) != (int *)0x0) {
      FUN_005e0180(*(int **)((int)this + 0x90));
    }
    puVar4 = *(undefined4 **)((int)this + 0x78);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
      (**(code **)(*(int *)((int)this + 100) + 4))();
      *(undefined4 *)((int)this + 0x78) = 0;
      (*(code *)**(undefined4 **)((int)this + 100))();
    }
    (**(code **)(*(int *)((int)this + 100) + 4))();
    *(int **)((int)this + 0x78) = piVar2;
    (*(code *)**(undefined4 **)((int)this + 100))();
    (**(code **)(**(int **)((int)this + 0x78) + 0x4c))(&param_1);
    (**(code **)(**(int **)((int)this + 0x78) + 0x128))(1);
    puVar4 = FUN_005e1e60(*(undefined4 *)(DAT_0104a618 + 0x78),unaff_EBX);
    (**(code **)(*(int *)((int)this + 0x7c) + 4))();
    *(undefined4 **)((int)this + 0x90) = puVar4;
    (*(code *)**(undefined4 **)((int)this + 0x7c))();
  }
  return;
}


//// FUNCTION FUN_0048ad10 @ 0048ad10 ////

undefined4 FUN_0048ad10(void)

{
  if ((DAT_0104a618 != 0) && (*(int *)(DAT_0104a618 + 0x78) != 0)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0048ad30 @ 0048ad30 ////

undefined4 FUN_0048ad30(void)

{
  if (DAT_0104a618 != 0) {
    return *(undefined4 *)(DAT_0104a618 + 0x78);
  }
  return 0;
}


//// FUNCTION FUN_0048ad40 @ 0048ad40 ////

undefined4 FUN_0048ad40(void)

{
  return DAT_0104a618;
}


//// FUNCTION FUN_0048ad50 @ 0048ad50 ////

void __fastcall FUN_0048ad50(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      iVar1 = _tolower((int)*(char *)(uVar2 + *param_1));
      *(char *)(uVar2 + *param_1) = (char)iVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_0048ae30 @ 0048ae30 ////

void __fastcall FUN_0048ae30(int *param_1)

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
  puStack_8 = &LAB_00ca4bf8;
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


//// FUNCTION FUN_0048af00 @ 0048af00 ////

void __fastcall FUN_0048af00(int *param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  void *this;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_28 [40];
  
  uVar1 = FUN_005dfb60(param_1 + 0x114);
  if (((char)uVar1 != '\0') && (DAT_0104a618 != (void *)0x0)) {
    FUN_0048ac50(DAT_0104a618,param_1);
  }
  if ((DAT_00f885f4 == param_1) && (DAT_0104c518 != param_1)) {
    puVar5 = &DAT_00d17518;
    iVar4 = 0;
    pbVar2 = (byte *)FUN_0041c9c0(local_28,"HUD_ORNAMENT_HIGHLIGHT");
    iVar3 = 2;
    this = (void *)FUN_004f3b20();
    FUN_004f3270(this,iVar3,pbVar2,iVar4,puVar5);
    (*(code *)DAT_0104c504[1])();
    DAT_0104c518 = param_1;
    (*(code *)*DAT_0104c504)();
  }
  FUN_005347f0(param_1);
  FUN_0053d480((int)param_1);
  return;
}


//// FUNCTION FUN_0048b0c0 @ 0048b0c0 ////

undefined4 __fastcall FUN_0048b0c0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float fVar6;
  void *this;
  longlong *plVar7;
  uint *puVar8;
  undefined1 auStack_28 [4];
  uint auStack_24 [2];
  longlong alStack_1c [2];
  undefined1 local_c [12];
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x34))(local_c);
  FUN_009840b0(&stack0xffffffd0,puVar1);
  uVar2 = FUN_004512c0((void *)(DAT_00f890c0 + 0x44c),(float *)&stack0xffffffd0);
  if ((((char)uVar2 != '\0') && ((int *)param_1[0xe8] != (int *)0x0)) &&
     (uVar2 = FUN_0046d400((int *)param_1[0xe8],0xa1), (char)uVar2 != '\0')) {
    iVar3 = FUN_005291b0((int)param_1);
    if ((*(char *)(iVar3 + 0x60) == '\0') && (DAT_0104d970 == '\0')) {
      piVar4 = (int *)FUN_005291b0((int)param_1);
      piVar5 = (int *)GetPlayerStudio();
      fVar6 = (float)(**(code **)(*piVar4 + 0x18))(auStack_28,0);
      puVar8 = auStack_24;
      plVar7 = alStack_1c;
      this = (void *)(**(code **)(*piVar5 + 0x24))();
      plVar7 = FUN_00442e50(this,plVar7,puVar8);
      uVar2 = FUN_0048a980(plVar7,fVar6);
      if ((char)uVar2 == '\0') {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0048b190 @ 0048b190 ////

/* WARNING: Removing unreachable block (ram,0x0048b406) */
/* WARNING: Removing unreachable block (ram,0x0048b332) */
/* WARNING: Removing unreachable block (ram,0x0048b2b8) */
/* WARNING: Removing unreachable block (ram,0x0048b39c) */
/* WARNING: Removing unreachable block (ram,0x0048b47e) */
/* WARNING: Removing unreachable block (ram,0x0048b24e) */

void __thiscall FUN_0048b190(void *this,undefined4 *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *this_00;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uStack_50;
  char acStack_2c [5];
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_21;
  undefined1 uStack_1d;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4c60;
  pvStack_c = ExceptionList;
  uStack_50 = 0x48b1bf;
  ExceptionList = &pvStack_c;
  FUN_0052bf80(this,param_1,param_2);
  piVar2 = (int *)FUN_005291b0((int)this);
  piVar3 = (int *)FUN_005291b0((int)this);
  iVar1 = *piVar3;
  (**(code **)(*piVar2 + 0x18))();
  FUN_00442cf0((ulonglong *)&uStack_50);
  (**(code **)(iVar1 + 0x14))();
  this_00 = (void *)FUN_00528140((int)this);
  acStack_2c[0] = '\0';
  _strncpy(acStack_2c,"",0);
  acStack_2c[0] = '\0';
  uStack_10 = 0;
  FUN_00558a50(this_00,(undefined4 *)&stack0xffffffc8,(undefined4 *)0x1);
  acStack_2c[0] = '\0';
  _strncpy(acStack_2c,"hidegui",7);
  uStack_25 = 0;
  uStack_10 = 1;
  iStack_4 = FUN_00558750(this_00,(undefined4 *)&stack0xffffffc8,0);
  uStack_10 = 0xffffffff;
  if (iStack_4 != 0) {
    *(uint *)((int)this + 0x2e0) = *(uint *)((int)this + 0x2e0) & 0xfffffdcf;
    FUN_0043b700((void *)((int)this + 0x2c8),0.0);
  }
  acStack_2c[0] = '\0';
  _strncpy(acStack_2c,"description",0xb);
  uStack_21 = 0;
  uStack_10 = 2;
  FUN_00558a50(this_00,(undefined4 *)&stack0xffffffc8,(undefined4 *)0x1);
  acStack_2c[0] = '\0';
  _strncpy(acStack_2c,"impacthalfcount",0xf);
  uStack_1d = 0;
  uStack_10 = 3;
  fVar5 = FUN_00558610(this_00,(undefined4 *)&stack0xffffffc8,DAT_00e50988);
  *(float *)((int)this + 0x47c) = (float)fVar5;
  acStack_2c[0] = '\0';
  _strncpy(acStack_2c,"online",6);
  uStack_26 = 0;
  uStack_10 = 4;
  uVar4 = FUN_00558a50(this_00,(undefined4 *)&stack0xffffffc8,(undefined4 *)0x1);
  iStack_4 = CONCAT31(iStack_4._1_3_,(char)uVar4);
  uStack_10 = 0xffffffff;
  if ((char)uVar4 != '\0') {
    acStack_2c[0] = '\0';
    _strncpy(acStack_2c,"award",5);
    uStack_27 = 0;
    uStack_10 = 5;
    fVar5 = FUN_00558610(this_00,(undefined4 *)&stack0xffffffc8,0.0);
    *(bool *)((int)this + 0x480) = (float10)0.0 != fVar5;
  }
  ExceptionList = pvStack_18;
  return;
}


//// FUNCTION OrnamentClustering_Constructor @ 0048b4a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OrnamentClustering_Constructor(void)

{
  float10 fVar1;
  char *local_104;
  undefined4 local_100;
  uint local_fc;
  char local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4cf4;
  local_c = ExceptionList;
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_104,"interface",9);
  local_100 = 9;
  local_104[9] = '\0';
  local_4 = 0;
  FUN_00558a50(DAT_00f88624,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"ornamentoutlinedelayms",0x16);
  local_100 = 0x16;
  local_104[0x16] = '\0';
  local_4 = 1;
  DAT_00e5097c = FUN_00558750(DAT_00f88624,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"ground",6);
  local_100 = 6;
  local_104[6] = '\0';
  local_4 = 2;
  FUN_0055c540(local_e4,&local_104);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"clusterradius",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 5;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00e50980 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"attspread",9);
  local_100 = 9;
  local_104[9] = '\0';
  local_4._0_1_ = 6;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00e5098c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"atthalfcount",0xc);
  local_100 = 0xc;
  local_104[0xc] = '\0';
  local_4._0_1_ = 7;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50988 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"attdropoff",10);
  local_100 = 10;
  local_104[10] = '\0';
  local_4._0_1_ = 8;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00e50984 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"orn_clusterradius",0x11);
  local_100 = 0x11;
  local_104[0x11] = '\0';
  local_4._0_1_ = 9;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"orn_attspread",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 10;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"orn_atthalfcount",0x10);
  local_100 = 0x10;
  local_104[0x10] = '\0';
  local_4._0_1_ = 0xb;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"orn_attdropoff",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0xc);
  CVarSystem_Register_STUBBED();
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0048ba20 @ 0048ba20 ////

void __thiscall FUN_0048ba20(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d1c870;
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


//// FUNCTION FUN_0048ba70 @ 0048ba70 ////

void __fastcall FUN_0048ba70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1c870;
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


//// FUNCTION FUN_0048bb10 @ 0048bb10 ////

void __fastcall FUN_0048bb10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1c880;
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


//// FUNCTION FUN_0048bbb0 @ 0048bbb0 ////

void __fastcall FUN_0048bbb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1c890;
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


//// FUNCTION FUN_0048bc00 @ 0048bc00 ////

undefined4 * __fastcall FUN_0048bc00(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4d40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005382a0(param_1);
  *param_1 = &PTR_FUN_00d1c8ec;
  param_1[0x1e] = &PTR_LAB_00d1c8c8;
  param_1[0x28] = &PTR_LAB_00d1c8b0;
  param_1[0x106] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x10a] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  piVar1 = param_1 + 0x10e;
  param_1[0x111] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1a200;
  param_1[0x113] = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  FUN_005dfba0(param_1 + 0x114);
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined1 *)(param_1 + 0x11e) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  param_1[0x10a] = param_1;
  FUN_00acdb9e(0xe50a44);
  iVar2 = FUN_0097dda0();
  param_1[0x10b] = iVar2;
  if (DAT_00e50a40 != '\0') {
    iVar2 = 0x420;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe50a44);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e50a40 = '\0';
  }
  param_1[0x106] = param_1;
  FUN_00acdb9e(0xe50a44);
  iVar2 = FUN_0097dda0();
  param_1[0x107] = iVar2;
  if (s___AVTMFixedAssetSmall_TM___00e50a24[0x1b] != '\0') {
    iVar2 = 0x410;
    pcVar4 = "BuildingLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe50a44);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVTMFixedAssetSmall_TM___00e50a24[0x1b] = '\0';
  }
  param_1[0x10c] = 0x3f800000;
  DAT_00e50978 = 1;
  param_1[0x45] = 0;
  param_1[0x10d] = 0;
  (**(code **)(*piVar1 + 4))();
  param_1[0x113] = 0;
  (**(code **)*piVar1)();
  param_1[0x11f] = DAT_00e50988;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0048bdf0 @ 0048bdf0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0048bdf0(int *param_1)

{
  float10 fVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca4d90;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00d1c8ec;
  param_1[0x1e] = (int)&PTR_LAB_00d1c8c8;
  param_1[0x28] = (int)&PTR_LAB_00d1c8b0;
  DAT_00e50978 = 1;
  local_4 = 4;
  if ((int *)param_1[0x109] != (int *)0x0) {
    *(int *)param_1[0x109] = param_1[0x108];
  }
  if (param_1[0x108] != 0) {
    *(int *)(param_1[0x108] + 4) = param_1[0x109];
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  if ((int *)param_1[0x105] != (int *)0x0) {
    *(int *)param_1[0x105] = param_1[0x104];
  }
  if (param_1[0x104] != 0) {
    *(int *)(param_1[0x104] + 4) = param_1[0x105];
  }
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  FUN_0052f4b0(param_1);
  if ((char)param_1[0x11e] != '\0') {
    fVar1 = FUN_00528480((int)param_1);
    _DAT_00f89048 = (float)((float10)_DAT_00f89048 - fVar1);
    *(undefined1 *)(param_1 + 0x11e) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_005dfb50((int)(param_1 + 0x114));
  param_1[0x10e] = (int)&PTR_FUN_00d1a200;
  if ((int *)param_1[0x110] != (int *)0x0) {
    *(int *)param_1[0x110] = param_1[0x10f];
  }
  if (param_1[0x10f] != 0) {
    *(int *)(param_1[0x10f] + 4) = param_1[0x110];
  }
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x113] = 0;
  if ((int *)param_1[0x110] != (int *)0x0) {
    *(int *)param_1[0x110] = param_1[0x10f];
  }
  if (param_1[0x10f] != 0) {
    *(int *)(param_1[0x10f] + 4) = param_1[0x110];
  }
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  if ((int *)param_1[0x109] != (int *)0x0) {
    *(int *)param_1[0x109] = param_1[0x108];
  }
  if (param_1[0x108] != 0) {
    *(int *)(param_1[0x108] + 4) = param_1[0x109];
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  if ((int *)param_1[0x105] != (int *)0x0) {
    *(int *)param_1[0x105] = param_1[0x104];
  }
  if (param_1[0x104] != 0) {
    *(int *)(param_1[0x104] + 4) = param_1[0x105];
  }
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  local_4 = 0xffffffff;
  FUN_005328f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0048bfd0 @ 0048bfd0 ////

int * __cdecl FUN_0048bfd0(undefined4 *param_1,char param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4dc3;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  piVar5 = (int *)0x0;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  ExceptionList = &pvStack_c;
  FUN_004015d0(&local_6c,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_0048ad50((int *)&local_6c);
  puVar3 = FUN_0040d6b0(local_2c,"data/",&local_6c);
  puVar3 = FUN_004312e0(local_4c,puVar3,".ini");
  local_4._0_1_ = 2;
  uVar4 = FUN_009d3660(puVar3,(uint *)0x0);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  local_4._0_1_ = 0;
  uVar2 = (undefined1)local_4;
  local_4._0_1_ = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if ((char)uVar4 != '\0') {
    puVar3 = operator_new(0x484);
    local_4._0_1_ = 3;
    if (puVar3 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_0048bc00(puVar3);
    }
    local_4._0_1_ = 0;
    (**(code **)(*piVar5 + 0x1a4))(param_1,0);
    if (param_2 != '\0') {
      (**(code **)(*piVar5 + 0x124))();
    }
    piVar1 = piVar5 + 0x108;
    piVar5[0x109] = (int)&DAT_0104a5c0;
    *piVar1 = (int)DAT_0104a5c0;
    *(int **)((int)DAT_0104a5c0 + 4) = piVar1;
    DAT_0104a5c0 = piVar1;
    uVar2 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar2;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = pvStack_c;
  return piVar5;
}


//// FUNCTION FUN_0048c140 @ 0048c140 ////

undefined4 * __fastcall FUN_0048c140(undefined4 *param_1)

{
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d1cac4;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_1 + 0x19;
  param_1[0x19] = &PTR_LAB_00d1c880;
  param_1[0x1e] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = param_1 + 0x1f;
  param_1[0x1f] = &PTR_LAB_00d1c890;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}


//// FUNCTION FUN_0048c190 @ 0048c190 ////

void __fastcall FUN_0048c190(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca4dee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1cac4;
  local_4 = 2;
  if ((int *)param_1[0x24] != (int *)0x0) {
    FUN_005e0180((int *)param_1[0x24]);
  }
  puVar2 = (undefined4 *)param_1[0x1e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x19] + 4))();
    param_1[0x1e] = 0;
    (**(code **)param_1[0x19])();
  }
  param_1[0x1f] = &PTR_LAB_00d1c890;
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
  param_1[0x19] = &PTR_LAB_00d1c880;
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
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0048c2d0 @ 0048c2d0 ////

void FUN_0048c2d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4e0b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  if (DAT_0104a618 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x94);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_0048c140(puVar1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104a604[1])();
    DAT_0104a618 = puVar2;
    (*(code *)*DAT_0104a604)();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0048c4e0 @ 0048c4e0 ////

int * __thiscall FUN_0048c4e0(void *this,byte param_1)

{
  FUN_0048bdf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0048c500 @ 0048c500 ////

undefined4 * __thiscall FUN_0048c500(void *this,byte param_1)

{
  FUN_0048c190(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0048c570 @ 0048c570 ////

void FUN_0048c570(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104a5ac;
  if ((DAT_010584c8 != 0) &&
     ((uint)((int)DAT_010584cc - DAT_010584c8 >> 2) < (uint)(DAT_010584d0 - DAT_010584c8 >> 2))) {
    *DAT_010584cc = &DAT_0104a5ac;
    DAT_010584cc = DAT_010584cc + 1;
    return;
  }
  FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  return;
}


//// FUNCTION FUN_0048c5d0 @ 0048c5d0 ////

int __thiscall FUN_0048c5d0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *local_4;
  
  local_4 = this;
  if (DAT_00e50978 != '\0') {
    local_4 = (int *)*DAT_0104a5fc;
    if (local_4 != DAT_0104a5fc) {
      do {
        local_4[0xb] = 0;
        FUN_0046ff50((int *)&local_4);
      } while (local_4 != DAT_0104a5fc);
    }
    puVar3 = DAT_0104a5b4;
    if (DAT_0104a5b4 != &DAT_0104a5c0) {
      do {
        puVar1 = (undefined4 *)FUN_00528450(puVar3[2]);
        piVar2 = FUN_00471710(&DAT_0104a5f8,puVar1);
        *piVar2 = *piVar2 + 1;
        puVar1 = puVar3 + 1;
        puVar3 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != &DAT_0104a5c0);
    }
    DAT_00e50978 = '\0';
  }
  piVar2 = FUN_00471710(&DAT_0104a5f8,param_1);
  return *piVar2;
}


//// FUNCTION FUN_0048c6d0 @ 0048c6d0 ////

void __fastcall FUN_0048c6d0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0048c700 @ 0048c700 ////

void FUN_0048c700(void)

{
  return;
}


//// FUNCTION FUN_0048c720 @ 0048c720 ////

undefined4 __fastcall FUN_0048c720(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}


//// FUNCTION FUN_0048c730 @ 0048c730 ////

undefined1 __fastcall FUN_0048c730(int param_1)

{
  return *(undefined1 *)(param_1 + 0x74);
}


//// FUNCTION FUN_0048c760 @ 0048c760 ////

undefined1 __fastcall FUN_0048c760(int param_1)

{
  return *(undefined1 *)(param_1 + 0x75);
}


//// FUNCTION FUN_0048c780 @ 0048c780 ////

undefined1 __fastcall FUN_0048c780(int param_1)

{
  return *(undefined1 *)(param_1 + 0x76);
}


//// FUNCTION FUN_0048c7d0 @ 0048c7d0 ////

void FUN_0048c7d0(void)

{
  FUN_00471840("MT_PART_SETCOSTUME",-0x7ffffcb2);
  return;
}


//// FUNCTION FUN_0048c7f0 @ 0048c7f0 ////

void FUN_0048c7f0(void)

{
  return;
}


//// FUNCTION FUN_0048c810 @ 0048c810 ////

int * __thiscall FUN_0048c810(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0048c870 @ 0048c870 ////

void __cdecl FUN_0048c870(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4e4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SLVAR_LoadUint(&local_14);
  local_10 = operator_new(0x220);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0098a220(local_10);
  }
  puVar1[1] = param_1;
  puVar1[2] = local_14;
  puVar1[0x83] = DAT_010581d4;
  _strncpy((char *)(puVar1 + 3),(char *)&DAT_010581d8,0x200);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0048c950 @ 0048c950 ////

int __fastcall FUN_0048c950(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    iVar1 = FUN_005a64f0(*(void **)(param_1 + 0xc0),*(float *)(param_1 + 0x78));
    return iVar1;
  }
  return 0;
}


//// FUNCTION FUN_0048c980 @ 0048c980 ////

undefined4 __fastcall FUN_0048c980(int param_1)

{
  if (*(int *)(param_1 + 0xc0) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x8c);
  }
  return 0;
}


//// FUNCTION FUN_0048c9a0 @ 0048c9a0 ////

bool __fastcall FUN_0048c9a0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x74) != '\0') {
    if (*(int *)(param_1 + 0xc0) == 0) {
      return false;
    }
    iVar1 = FUN_005a6130(*(int *)(param_1 + 0xc0));
    if (iVar1 != 4) {
      iVar1 = FUN_005a6470(*(int *)(param_1 + 0xc0));
      return iVar1 != 0;
    }
  }
  return true;
}


//// FUNCTION FUN_0048c9e0 @ 0048c9e0 ////

void __thiscall FUN_0048c9e0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x78);
  return;
}


//// FUNCTION FUN_0048c9f0 @ 0048c9f0 ////

undefined4 __fastcall FUN_0048c9f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}


//// FUNCTION FUN_0048ca00 @ 0048ca00 ////

void __fastcall FUN_0048ca00(int param_1)

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


//// FUNCTION FUN_0048ca20 @ 0048ca20 ////

void __fastcall FUN_0048ca20(int param_1)

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


//// FUNCTION FUN_0048caa0 @ 0048caa0 ////

void __fastcall FUN_0048caa0(int *param_1)

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
  puStack_8 = &LAB_00ca4e68;
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


//// FUNCTION FUN_0048cb70 @ 0048cb70 ////

undefined4 * __thiscall FUN_0048cb70(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x8c),*(uint *)((int)this + 0x90));
  return param_1;
}


//// FUNCTION FUN_0048cbb0 @ 0048cbb0 ////

undefined4 __fastcall FUN_0048cbb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar1 = FUN_0042feb0(*(int *)(param_1 + 0x80));
    if (iVar1 != 2) {
      uVar2 = FUN_0042feb0(*(int *)(param_1 + 0x80));
      return uVar2;
    }
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    iVar1 = FUN_005a6470(*(int *)(param_1 + 0xc0));
    if (iVar1 != 0) {
      iVar1 = FUN_005a6470(*(int *)(param_1 + 0xc0));
      return *(undefined4 *)(iVar1 + 0x4a0);
    }
  }
  return *(undefined4 *)(param_1 + 0x7c);
}


//// FUNCTION FUN_0048cc00 @ 0048cc00 ////

undefined4 __thiscall FUN_0048cc00(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 2) {
    iVar1 = FUN_0048cbb0((int)this);
    if (iVar1 != 2) {
      iVar1 = FUN_0048cbb0((int)this);
      if (iVar1 != param_1) {
        return 0;
      }
    }
  }
  return 1;
}


//// FUNCTION FUN_0048cc40 @ 0048cc40 ////

bool __fastcall FUN_0048cc40(int param_1)

{
  return *(int *)(param_1 + 0x88) != 0;
}


//// FUNCTION FUN_0048cc50 @ 0048cc50 ////

bool __fastcall FUN_0048cc50(int param_1)

{
  return *(int *)(param_1 + 0x80) != 0;
}


//// FUNCTION FUN_0048cc60 @ 0048cc60 ////

bool __fastcall FUN_0048cc60(int param_1)

{
  return (bool)('\x01' - (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0x84)));
}


//// FUNCTION FUN_0048ccf0 @ 0048ccf0 ////

void __fastcall FUN_0048ccf0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1cafc;
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


//// FUNCTION FUN_0048cd80 @ 0048cd80 ////

void __fastcall FUN_0048cd80(int param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4ed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\Part.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar6;
    DAT_010581d4 = 0x1c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar3 = (char *)FUN_00ace33d(0xe4fe30);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar4 = FUN_0098b490("Index");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x38),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\Part.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar6;
    DAT_010581d4 = 0x1d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar3 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("Required");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x3c),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\Part.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar6;
    DAT_010581d4 = 0x1e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar3 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("Allowed");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x3d),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\Part.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar6;
    DAT_010581d4 = 0x1f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    pcVar3 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("Dirty");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x3f),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\Part.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar6;
    DAT_010581d4 = 0x20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    pcVar3 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("(int&)(Gender)");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x44),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\Part.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar6;
    DAT_010581d4 = 0x21;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    pcVar3 = (char *)FUN_00ace33d(0xe50af0);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PCostume");
  if ((char)uVar4 != '\0') {
    if (DAT_010583e0 == 0) {
      piVar2 = *(int **)(param_1 + 0x48);
      pcVar6 = (char *)FUN_00ace790(piVar2,0,&TM::TMBase::RTTI_Type_Descriptor,
                                    &MV::MVSaveable::RTTI_Type_Descriptor,0);
      FUN_00990310(pcVar6,piVar2);
    }
    if (DAT_010583e0 == 1) {
      FUN_0048c870((undefined4 *)(param_1 + 0x48));
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\Part.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar6;
    DAT_010581d4 = 0x22;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
    pcVar3 = (char *)FUN_00ace33d(0xe50af0);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PCostumeFromPriorScene");
  if ((char)uVar4 != '\0') {
    if (DAT_010583e0 == 0) {
      piVar2 = *(int **)(param_1 + 0x4c);
      pcVar6 = (char *)FUN_00ace790(piVar2,0,&TM::TMBase::RTTI_Type_Descriptor,
                                    &MV::MVSaveable::RTTI_Type_Descriptor,0);
      FUN_00990310(pcVar6,piVar2);
    }
    if (DAT_010583e0 == 1) {
      FUN_0048c870((undefined4 *)(param_1 + 0x4c));
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\Part.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar6;
    DAT_010581d4 = 0x23;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    pcVar3 = (char *)FUN_00ace33d(0xe50af0);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PExplicitCostume");
  if ((char)uVar4 != '\0') {
    if (DAT_010583e0 == 0) {
      piVar2 = *(int **)(param_1 + 0x50);
      pcVar6 = (char *)FUN_00ace790(piVar2,0,&TM::TMBase::RTTI_Type_Descriptor,
                                    &MV::MVSaveable::RTTI_Type_Descriptor,0);
      FUN_00990310(pcVar6,piVar2);
    }
    if (DAT_010583e0 == 1) {
      FUN_0048c870((undefined4 *)(param_1 + 0x50));
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\Part.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar6;
    DAT_010581d4 = 0x24;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
    pcVar3 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("RecommendedCos");
  if ((char)uVar4 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x54));
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\Part.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar6;
    DAT_010581d4 = 0x25;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
    iVar5 = FUN_00ace3df((int *)(param_1 + 0x74));
    pcVar3 = (char *)FUN_00ace33d(iVar5);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PRole");
  if ((char)uVar4 != '\0') {
    FUN_00990970((int *)(param_1 + 0x74));
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\Part.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar6;
    DAT_010581d4 = 0x26;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 10;
    pcVar3 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("StuntRisk");
  if ((char)uVar4 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x40));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0048d7a0 @ 0048d7a0 ////

void __fastcall FUN_0048d7a0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca4f46;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1cbe0;
  param_1[0xe] = &PTR_LAB_00d1cbc0;
  param_1[0x2b] = &PTR_FUN_00d1cafc;
  local_4 = 4;
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
  if (0x14 < (uint)param_1[0x25]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x23]);
  }
  puVar2 = (undefined4 *)param_1[0x22];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x22] = 0;
  puVar2 = (undefined4 *)param_1[0x21];
  local_4._0_1_ = 3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x21] = 0;
  puVar2 = (undefined4 *)param_1[0x20];
  local_4._0_1_ = 2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x20] = 0;
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x19] = param_1[0x18];
  }
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1[0x18] + 4) = param_1[0x19];
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0048d920 @ 0048d920 ////

void __thiscall FUN_0048d920(void *this,void *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  float10 fVar7;
  byte *local_94;
  undefined4 local_90;
  uint local_8c;
  byte local_88 [20];
  char *local_74;
  undefined4 local_70;
  uint local_6c;
  char local_68 [20];
  void *local_54;
  float local_50;
  byte *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4f83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x70) = param_2;
  local_54 = this;
  FUN_005562f0(param_1,local_2c,0);
  local_74 = local_68;
  local_4 = 0;
  local_68[0] = '\0';
  local_70 = 0;
  local_6c = 0x14;
  _strncpy(local_74,"required",8);
  local_70 = 8;
  local_74[8] = '\0';
  local_4._0_1_ = 1;
  iVar2 = FUN_00558750(param_1,&local_74,0);
  *(bool *)((int)this + 0x74) = iVar2 != 0;
  if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  local_74 = local_68;
  local_68[0] = '\0';
  local_70 = 0;
  local_6c = 0x14;
  _strncpy(local_74,"costume",7);
  local_70 = 7;
  local_74[7] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  puVar3 = FUN_005584e0(param_1,&local_94,&local_74);
  FUN_004015d0((void *)((int)this + 0x8c),(char *)*puVar3,puVar3[1]);
  if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  if (*(int *)((int)this + 0x90) == 0) {
    FUN_004015d0((void *)((int)this + 0x8c),"costume_plain",0xd);
  }
  local_74 = local_68;
  local_68[0] = '\0';
  local_70 = 0;
  local_6c = 0x14;
  _strncpy(local_74,"gender",6);
  local_70 = 6;
  local_74[6] = '\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_005584e0(param_1,local_4c,&local_74);
  if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  local_94 = local_88;
  local_88[0] = 0;
  local_90 = 0;
  local_8c = 0x14;
  _strncpy((char *)local_94,"gender_male",0xb);
  local_90 = 0xb;
  local_94[0xb] = 0;
  pbVar4 = local_4c[0];
  pbVar5 = local_94;
  do {
    bVar1 = *pbVar4;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_0048db46:
      iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0048db4b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_0048db46;
    pbVar4 = pbVar4 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_0048db4b:
  if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  if (iVar2 == 0) {
    *(undefined4 *)((int)local_54 + 0x7c) = 0;
  }
  else {
    local_94 = local_88;
    local_88[0] = 0;
    local_90 = 0;
    local_8c = 0x14;
    _strncpy((char *)local_94,"gender_female",0xd);
    local_90 = 0xd;
    local_94[0xd] = 0;
    pbVar4 = local_4c[0];
    pbVar5 = local_94;
    do {
      bVar1 = *pbVar4;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0048dbd8:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0048dbdd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0048dbd8;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_0048dbdd:
    if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
      _free(local_94);
    }
    if (iVar2 == 0) {
      *(undefined4 *)((int)local_54 + 0x7c) = 1;
    }
  }
  local_94 = local_88;
  local_88[0] = 0;
  local_90 = 0;
  local_8c = 0x14;
  _strncpy((char *)local_94,"stuntrisk",9);
  local_90 = 9;
  local_94[9] = 0;
  local_4._0_1_ = 6;
  fVar7 = FUN_00558610(param_1,&local_94,0.0);
  if ((float10)0.0 <= fVar7) {
    if ((float10)1.0 < fVar7) {
      fVar7 = (float10)1.0;
    }
  }
  else {
    fVar7 = (float10)0.0;
  }
  local_50 = (float)fVar7;
  *(float *)((int)local_54 + 0x78) = local_50;
  local_4 = CONCAT31(local_4._1_3_,5);
  if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  FUN_00558a50(param_1,local_2c,(undefined4 *)0x1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0048dd10 @ 0048dd10 ////

void __thiscall FUN_0048dd10(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 0x88) != param_1) {
    *(undefined1 *)((int)this + 0x77) = 1;
  }
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  puVar2 = *(undefined4 **)((int)this + 0x88);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(int *)((int)this + 0x88) = param_1;
  puVar2 = *(undefined4 **)((int)this + 0x80);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  return;
}


//// FUNCTION FUN_0048dd70 @ 0048dd70 ////

void __fastcall FUN_0048dd70(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puStack_34;
  undefined4 *local_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca4fa8;
  local_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 0x88);
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x77) = 1;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x84);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0xc0) == 0) {
        iVar3 = FUN_0048cbb0(param_1);
      }
      else {
        iVar3 = FUN_005a6470(*(int *)(param_1 + 0xc0));
        if (iVar3 == 0) {
          iVar3 = *(int *)(*(int *)(param_1 + 0xc0) + 0x90);
        }
        else {
          iVar3 = FUN_005a6470(*(int *)(param_1 + 0xc0));
          iVar3 = *(int *)(iVar3 + 0x4a0);
        }
      }
      if (iVar3 == 2) {
        iVar3 = 0;
      }
      piVar4 = FUN_004335f0((int *)&local_30,(undefined4 *)(param_1 + 0x8c),iVar3,3,0,0);
      piVar5 = (int *)(param_1 + 0x80);
      local_4 = 0;
      if (piVar5 != piVar4) {
        iVar2 = *piVar4;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
        }
        puVar1 = (undefined4 *)*piVar5;
        if (puVar1 != (undefined4 *)0x0) {
          piVar4 = puVar1 + 0x12;
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            (**(code **)*puVar1)(1);
          }
        }
        *piVar5 = iVar2;
      }
      local_4 = 0xffffffff;
      if ((local_30 != (undefined4 *)0x0) &&
         (iVar2 = local_30[0x12], local_30[0x12] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)*local_30)(1);
      }
      if (*piVar5 == 0) {
        pcStack_2c = acStack_20;
        acStack_20[0] = '\0';
        uStack_28 = 0;
        uStack_24 = 0x14;
        _strncpy(pcStack_2c,"costume_plain",0xd);
        uStack_28 = 0xd;
        pcStack_2c[0xd] = '\0';
        local_4 = 1;
        piVar4 = FUN_004335f0((int *)&puStack_34,&pcStack_2c,iVar3,3,0,0);
        local_4._0_1_ = 2;
        FUN_004349f0(piVar5,piVar4);
        local_4 = CONCAT31(local_4._1_3_,1);
        if ((puStack_34 != (undefined4 *)0x0) &&
           (iVar3 = puStack_34[0x12], puStack_34[0x12] = iVar3 + -1, iVar3 + -1 == 0)) {
          (**(code **)*puStack_34)(1);
        }
        puStack_34 = (undefined4 *)0x0;
        local_4 = 0xffffffff;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_2c);
        }
      }
      if (*piVar5 != 0) {
        FUN_004319b0(*piVar5);
      }
    }
    else {
      piVar4 = (int *)(param_1 + 0x80);
      if (piVar4 != (int *)(param_1 + 0x84)) {
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
        }
        puVar1 = (undefined4 *)*piVar4;
        if (puVar1 != (undefined4 *)0x0) {
          piVar5 = puVar1 + 0x12;
          *piVar5 = *piVar5 + -1;
          if (*piVar5 == 0) {
            (**(code **)*puVar1)(1);
          }
        }
        *piVar4 = iVar3;
        ExceptionList = local_c;
        return;
      }
    }
  }
  else {
    piVar4 = (int *)(param_1 + 0x80);
    if (piVar4 != (int *)(param_1 + 0x88)) {
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
      }
      puVar1 = (undefined4 *)*piVar4;
      if (puVar1 != (undefined4 *)0x0) {
        piVar5 = puVar1 + 0x12;
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
      *piVar4 = iVar3;
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0048dfb0 @ 0048dfb0 ////

void __thiscall FUN_0048dfb0(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  puVar2 = *(undefined4 **)((int)this + 0x84);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(int *)((int)this + 0x84) = param_1;
  return;
}


//// FUNCTION FUN_0048dfe0 @ 0048dfe0 ////

void __thiscall FUN_0048dfe0(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  (**(code **)(*(int *)((int)this + 0xac) + 4))();
  *(int *)((int)this + 0xc0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xac))();
  if (param_1 != 0) {
    iVar3 = FUN_005a6430(param_1);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
      puVar2 = *(undefined4 **)((int)this + 0x84);
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      *(int *)((int)this + 0x84) = iVar3;
      FUN_0048dd70((int)this);
      puVar2 = *(undefined4 **)((int)this + 0x88);
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      *(undefined4 *)((int)this + 0x88) = 0;
      return;
    }
  }
  FUN_0048dd70((int)this);
  return;
}


//// FUNCTION FUN_0048e070 @ 0048e070 ////

void __fastcall FUN_0048e070(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x80);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x88);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x84);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}


//// FUNCTION FUN_0048e0d0 @ 0048e0d0 ////

void __thiscall FUN_0048e0d0(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  puVar2 = *(undefined4 **)((int)this + 0x80);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(int *)((int)this + 0x80) = param_1;
  return;
}


//// FUNCTION FUN_0048e100 @ 0048e100 ////

undefined4 * __thiscall FUN_0048e100(void *this,byte param_1)

{
  FUN_0048d7a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0048e140 @ 0048e140 ////

undefined4 __fastcall FUN_0048e140(int param_1)

{
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_0048dd70(param_1);
  }
  return *(undefined4 *)(param_1 + 0x80);
}


//// FUNCTION FUN_0048e160 @ 0048e160 ////

undefined4 * __thiscall FUN_0048e160(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5024;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0040a070(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x38));
  *(undefined ***)this = &PTR_FUN_00d1cbe0;
  *(undefined4 *)((int)this + 0x38) = &PTR_LAB_00d1cbc0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined1 *)((int)this + 0x74) = *(undefined1 *)(param_1 + 0x74);
  *(undefined1 *)((int)this + 0x75) = *(undefined1 *)(param_1 + 0x75);
  *(undefined1 *)((int)this + 0x76) = *(undefined1 *)(param_1 + 0x76);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  piVar3 = (int *)((int)this + 0x88);
  *piVar3 = 0;
  *(undefined4 *)((int)this + 0x8c) = (undefined1 *)((int)this + 0x98);
  *(undefined1 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x8c),*(char **)(param_1 + 0x8c),*(uint *)(param_1 + 0x90)
              );
  piVar1 = (int *)((int)this + 0xb0);
  *(undefined4 *)((int)this + 0xb8) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 **)((int)this + 0xb8) = (undefined4 *)((int)this + 0xac);
  *(undefined4 *)((int)this + 0xac) = &PTR_FUN_00d1cafc;
  iVar5 = *(int *)(param_1 + 0xc0);
  *(int *)((int)this + 0xc0) = iVar5;
  if (iVar5 != 0) {
    piVar2 = (int *)(iVar5 + 0x18);
    *(int **)((int)this + 0xb4) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  *(void **)((int)this + 0x68) = this;
  FUN_00acdb9e(0xe50b1c);
  iVar5 = FUN_0097dda0();
  *(int *)((int)this + 0x6c) = iVar5;
  if (s___AV__TMRefP_VCCostume_TM___TM___00e50af8[0x21] != '\0') {
    iVar5 = 0x60;
    pcVar7 = "Link";
    pcVar6 = (char *)FUN_00acdb9e(0xe50b1c);
    FUN_0097df60(pcVar6,pcVar7,iVar5);
    s___AV__TMRefP_VCCostume_TM___TM___00e50af8[0x21] = '\0';
  }
  if ((int *)((int)this + 0x80) != (int *)(param_1 + 0x80)) {
    iVar5 = *(int *)(param_1 + 0x80);
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 1;
    }
    puVar4 = *(undefined4 **)((int)this + 0x80);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)();
      }
    }
    *(int *)((int)this + 0x80) = iVar5;
  }
  if (piVar3 != (int *)(param_1 + 0x88)) {
    iVar5 = *(int *)(param_1 + 0x88);
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 1;
    }
    puVar4 = (undefined4 *)*piVar3;
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)();
      }
    }
    *piVar3 = iVar5;
  }
  piVar1 = (int *)((int)this + 0x84);
  if (piVar1 != (int *)(param_1 + 0x84)) {
    iVar5 = *(int *)(param_1 + 0x84);
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 1;
    }
    puVar4 = (undefined4 *)*piVar1;
    if (puVar4 != (undefined4 *)0x0) {
      piVar3 = puVar4 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar4)();
      }
    }
    *piVar1 = iVar5;
  }
  if (*(int *)((int)this + 0x80) == 0) {
    FUN_0048dd70((int)this);
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_0048e370 @ 0048e370 ////

undefined4 * __fastcall FUN_0048e370(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5094;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d1cbe0;
  param_1[0xe] = &PTR_LAB_00d1cbc0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x75) = 1;
  *(undefined1 *)((int)param_1 + 0x76) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = param_1 + 0x26;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0x14;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_1 + 0x2b;
  param_1[0x2b] = &PTR_FUN_00d1cafc;
  param_1[0x30] = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  param_1[0x1a] = param_1;
  FUN_00acdb9e(0xe50b1c);
  iVar1 = FUN_0097dda0();
  param_1[0x1b] = iVar1;
  if (s__PAVCPart_TM___00e50b24[0xf] != '\0') {
    iVar1 = 0x60;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe50b1c);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s__PAVCPart_TM___00e50b24[0xf] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0048e4a0 @ 0048e4a0 ////

void __fastcall FUN_0048e4a0(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_00413cc0(DAT_00f87aa0);
  if (!bVar1) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x10))(0,1);
  }
  return;
}


//// FUNCTION FUN_0048e4d0 @ 0048e4d0 ////

void FUN_0048e4d0(void)

{
  return;
}


//// FUNCTION FUN_0048e4e0 @ 0048e4e0 ////

void __fastcall FUN_0048e4e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca50c1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1cc14;
  local_4 = 2;
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x28] = param_1[0x27];
  }
  if (param_1[0x27] != 0) {
    *(undefined4 *)(param_1[0x27] + 4) = param_1[0x28];
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if ((void *)param_1[0x25] != (void *)0x0) {
    FUN_009d2c50((void *)param_1[0x25],(void *)0x0,'\x01',-1.0,-1.0);
    if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
      FUN_009d2b50((undefined4 *)param_1[0x25]);
      param_1[0x25] = 0;
    }
  }
  puVar1 = (undefined4 *)param_1[0x24];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[0x24] = 0;
  }
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x28] = param_1[0x27];
  }
  if (param_1[0x27] != 0) {
    *(undefined4 *)(param_1[0x27] + 4) = param_1[0x28];
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  local_4 = 0xffffffff;
  FUN_0053ddb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0048e660 @ 0048e660 ////

undefined4 * __thiscall
FUN_0048e660(void *this,int param_1,undefined4 param_2,undefined4 param_3,char *param_4,
            undefined4 param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  void *pvVar5;
  char cVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  undefined4 *local_34;
  void *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca5109;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_30 = this;
  FUN_0053dcd0(this);
  *(undefined ***)this = &PTR_FUN_00d1cc14;
  *(undefined4 *)((int)this + 0x78) = param_3;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  piVar1 = (int *)((int)this + 0x9c);
  *(undefined4 *)((int)this + 0x8c) = param_2;
  *(int *)((int)this + 0x98) = param_1;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(void **)((int)this + 0xa4) = this;
  FUN_00acdb9e(0xe50b38);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0xa8) = iVar2;
  if (DAT_00e50b35 != '\0') {
    iVar2 = 0x9c;
    pcVar7 = "PeasantLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe50b38);
    FUN_0097df60(pcVar3,pcVar7,iVar2);
    DAT_00e50b35 = '\0';
  }
  *(void **)((int)this + 0x84) = this;
  FUN_00acdb9e(0xe50b38);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0x88) = iVar2;
  if (DAT_00e50b34 != '\0') {
    iVar2 = 0x7c;
    pcVar7 = "ManagerLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe50b38);
    FUN_0097df60(pcVar3,pcVar7,iVar2);
    DAT_00e50b34 = '\0';
  }
  *(int ***)((int)this + 0xa0) = &DAT_0104a630;
  *piVar1 = (int)DAT_0104a630;
  *(int **)((int)DAT_0104a630 + 4) = piVar1;
  DAT_0104a630 = piVar1;
  puVar4 = FUN_00433eb0();
  *(undefined4 **)((int)this + 0x90) = puVar4;
  FUN_0097e2b0((int)puVar4);
  *(uint *)(*(int *)((int)this + 0x90) + 0x9c) = *(uint *)(*(int *)((int)this + 0x90) + 0x9c) | 8;
  pvVar5 = FUN_009d30f0(*(int *)((int)this + 0x90),(uint)(param_1 != 0),0,(uint *)0x0,'\0');
  *(void **)((int)this + 0x94) = pvVar5;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar3 = param_4;
  do {
    cVar6 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar6 != '\0');
  FUN_004015d0(&local_2c,param_4,(int)pcVar3 - (int)(param_4 + 1));
  local_4._0_1_ = 4;
  FUN_004335f0((int *)&local_34,&local_2c,param_1,0,0,0);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  fVar9 = -1.0;
  fVar8 = -1.0;
  cVar6 = '\x01';
  pvVar5 = (void *)FUN_004319b0((int)local_34);
  FUN_009d2c50(*(void **)((int)this + 0x94),pvVar5,cVar6,fVar8,fVar9);
  if (*(void **)((int)this + 0x8c) != (void *)0x0) {
    FUN_00978310(*(void **)((int)this + 0x8c),0,*(int *)((int)this + 0x78),
                 *(void **)((int)this + 0x90));
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if ((local_34 != (undefined4 *)0x0) &&
     (iVar2 = local_34[0x12], local_34[0x12] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)*local_34)();
  }
  if (0x14 < param_6) {
                    /* WARNING: Subroutine does not return */
    _free(param_4);
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_0048e8f0 @ 0048e8f0 ////

undefined4 * __thiscall FUN_0048e8f0(void *this,byte param_1)

{
  FUN_0048e4e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0048e910 @ 0048e910 ////

void __fastcall FUN_0048e910(int param_1)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  undefined4 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5130;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"costume_public",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = 0;
  FUN_004335f0((int *)&local_30,&local_2c,*(int *)(param_1 + 0x98),0,0,0);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  fVar5 = -1.0;
  fVar4 = -1.0;
  cVar3 = '\x01';
  pvVar2 = (void *)FUN_004319b0((int)local_30);
  FUN_009d2c50(*(void **)(param_1 + 0x94),pvVar2,cVar3,fVar4,fVar5);
  local_4 = 0xffffffff;
  if ((local_30 != (undefined4 *)0x0) &&
     (iVar1 = local_30[0x12], local_30[0x12] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)*local_30)(1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0048ea00 @ 0048ea00 ////

void FUN_0048ea00(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_0104a624 != &DAT_0104a630) {
    do {
      piVar4 = DAT_0104a624;
      puVar2 = (undefined4 *)DAT_0104a624[2];
      piVar1 = DAT_0104a624 + 1;
      if ((int *)DAT_0104a624[1] != (int *)0x0) {
        *(int *)DAT_0104a624[1] = *DAT_0104a624;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    } while (DAT_0104a624 != &DAT_0104a630);
  }
  return;
}


//// FUNCTION FUN_0048ea60 @ 0048ea60 ////

void FUN_0048ea60(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_0104a624 != &DAT_0104a630) {
    do {
      piVar4 = DAT_0104a624;
      puVar2 = (undefined4 *)DAT_0104a624[2];
      piVar1 = DAT_0104a624 + 1;
      if ((int *)DAT_0104a624[1] != (int *)0x0) {
        *(int *)DAT_0104a624[1] = *DAT_0104a624;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    } while (DAT_0104a624 != &DAT_0104a630);
  }
  return;
}


//// FUNCTION Campaign_GetCurrentYear @ 0048eac0 ////

undefined4 Campaign_GetCurrentYear(void)

{
  return DAT_0104a654;
}


//// FUNCTION FUN_0048ebe0 @ 0048ebe0 ////

void __cdecl FUN_0048ebe0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x2d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}


//// FUNCTION FUN_0048ec10 @ 0048ec10 ////

void __cdecl FUN_0048ec10(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x2d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x2d);
  }
  return;
}


//// FUNCTION FUN_0048ed00 @ 0048ed00 ////

void __thiscall FUN_0048ed00(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x2d) == '\0') {
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


//// FUNCTION FUN_0048ed60 @ 0048ed60 ////

void __thiscall FUN_0048ed60(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x2d) == '\0') {
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


//// FUNCTION FUN_0048edd0 @ 0048edd0 ////

void __fastcall FUN_0048edd0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x2d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x2d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x2d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x2d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x2d);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x2d);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_0048ee50 @ 0048ee50 ////

void __fastcall FUN_0048ee50(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x2d) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x2d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x2d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x2d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x2d) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x2d) == '\0');
    if (*(char *)((int)piVar4 + 0x2d) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_0048eee0 @ 0048eee0 ////

void __fastcall FUN_0048eee0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION Campaign_AdvanceYearIfDecadeElapsed @ 0048ef00 ////

void Campaign_AdvanceYearIfDecadeElapsed(void)

{
  int iVar1;
  ulonglong uVar2;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5148;
  local_c = ExceptionList;
  if ((DAT_0104a974 != 0) && (*(float *)(DAT_0104a974 + 0x78) == 1.0)) {
    ExceptionList = &local_c;
    uVar2 = FUN_0043b560();
    iVar1 = ((int)uVar2 / 10) * 10;
    if (iVar1 - DAT_0104a654 != 0 && DAT_0104a654 <= iVar1) {
      pcStack_2c = acStack_20;
      acStack_20[0] = '\0';
      uStack_28 = 0;
      uStack_24 = 0x14;
      DAT_0104a654 = iVar1;
      _strncpy(pcStack_2c,"",0);
      uStack_28 = 0;
      *pcStack_2c = '\0';
      uStack_4 = 0;
      FUN_00558a50(DAT_0104a678,&pcStack_2c,(undefined4 *)0x1);
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_2c);
      }
      FUN_00558080(DAT_0104a678,&PTR_DAT_00e50b94,DAT_0104a654);
      FUN_0055aa10(DAT_0104a678,&PTR_DAT_00e50b54);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0048f010 @ 0048f010 ////

undefined4 * __thiscall FUN_0048f010(void *this,undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)this;
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(param_1,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return param_1;
}


//// FUNCTION FUN_0048f090 @ 0048f090 ////

int * __fastcall FUN_0048f090(int *param_1)

{
  FUN_0048edd0(param_1);
  return param_1;
}


//// FUNCTION FUN_0048f0a0 @ 0048f0a0 ////

int * __fastcall FUN_0048f0a0(int *param_1)

{
  FUN_0048ee50(param_1);
  return param_1;
}


//// FUNCTION FUN_0048f0c0 @ 0048f0c0 ////

undefined4 * __thiscall
FUN_0048f0c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = (undefined1 *)((int)this + 0x18);
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0xc),(char *)*param_4,param_4[1]);
  *(undefined1 *)((int)this + 0x2c) = param_5;
  *(undefined1 *)((int)this + 0x2d) = 0;
  return this;
}


//// FUNCTION FUN_0048f140 @ 0048f140 ////

void * __thiscall FUN_0048f140(void *this,byte param_1)

{
  FUN_0048eee0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0048f160 @ 0048f160 ////

void FUN_0048f160(void)

{
  size_t sVar1;
  undefined4 *puVar2;
  wchar_t *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009b9280();
  local_4 = 0;
  sVar1 = FUN_00ace02d(L"\\Lionhead Studios");
  FUN_0040cae0(local_4c,L"\\Lionhead Studios",sVar1);
  puVar2 = FUN_009ad040(local_2c,local_4c[0]);
  FUN_00acf917((LPCSTR)*puVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  sVar1 = FUN_00ace02d(L"\\The Movies");
  FUN_0040cae0(local_4c,L"\\The Movies",sVar1);
  puVar2 = FUN_009ad040(local_2c,local_4c[0]);
  FUN_00acf917((LPCSTR)*puVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  sVar1 = FUN_00ace02d(L"\\Unlocking.ini");
  FUN_0040cae0(local_4c,L"\\Unlocking.ini",sVar1);
  puVar2 = FUN_009ad040(local_2c,local_4c[0]);
  FUN_004015d0(&PTR_DAT_00e50b54,(char *)*puVar2,puVar2[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0048f2a0 @ 0048f2a0 ////

int * __fastcall FUN_0048f2a0(int *param_1)

{
  FUN_0048edd0(param_1);
  return param_1;
}


//// FUNCTION FUN_0048f2b0 @ 0048f2b0 ////

int * __fastcall FUN_0048f2b0(int *param_1)

{
  FUN_0048ee50(param_1);
  return param_1;
}


//// FUNCTION FUN_0048f2c0 @ 0048f2c0 ////

undefined4 * __thiscall FUN_0048f2c0(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x2d) == '\0') {
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
LAB_0048f304:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0048f309;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0048f304;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0048f309:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x2d) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_0048f330 @ 0048f330 ////

void * FUN_0048f330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x30);
  if (this != (void *)0x0) {
    FUN_0048f0c0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_0048f380 @ 0048f380 ////

void FUN_0048f380(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  return;
}


//// FUNCTION FUN_0048f3f0 @ 0048f3f0 ////

void FUN_0048f3f0(void)

{
  int iVar1;
  int *local_4;
  
  if (((DAT_0104a974 != 0) && (*(float *)(DAT_0104a974 + 0x78) == 2.0)) &&
     (local_4 = (int *)*DAT_0104a65c, local_4 != DAT_0104a65c)) {
    do {
      iVar1 = FUN_00852e10((byte *)(local_4 + 3));
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x38) + 0x24))();
      }
      FUN_0048edd0((int *)&local_4);
    } while (local_4 != DAT_0104a65c);
  }
  return;
}


//// FUNCTION FUN_0048f470 @ 0048f470 ////

void __fastcall FUN_0048f470(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0048f380();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0048f4b0 @ 0048f4b0 ////

void __thiscall FUN_0048f4b0(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_0048f2c0(this,param_2);
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


//// FUNCTION FUN_0048f510 @ 0048f510 ////

int __fastcall FUN_0048f510(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0048f380();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0048f540 @ 0048f540 ////

void FUN_0048f540(void *param_1)

{
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    FUN_0048f540(*(void **)((int)param_1 + 8));
    FUN_0048eee0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0048f580 @ 0048f580 ////

void __fastcall FUN_0048f580(int param_1)

{
  FUN_0048f540(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0048f5b0 @ 0048f5b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048f5b0(void)

{
  if (DAT_0104a678 != (undefined4 *)0x0) {
    (**(code **)*DAT_0104a678)(1);
  }
  (*(code *)DAT_0104a664[1])();
  DAT_0104a678 = (undefined4 *)0x0;
  (*(code *)*DAT_0104a664)();
  FUN_0048f540(*(void **)(DAT_0104a65c + 4));
  *(int *)(DAT_0104a65c + 4) = DAT_0104a65c;
  _DAT_0104a660 = 0;
  *(int *)DAT_0104a65c = DAT_0104a65c;
  *(int *)(DAT_0104a65c + 8) = DAT_0104a65c;
  DAT_0104a650 = 0;
  return;
}


//// FUNCTION FUN_0048f630 @ 0048f630 ////

void __thiscall
FUN_0048f630(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca5188;
  local_c = ExceptionList;
  if (0x7fffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0048f330(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x2c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x2c) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0xb] == '\0') {
LAB_0048f72b:
        *(undefined1 *)(*piVar4 + 0x2c) = 1;
        *(undefined1 *)(piVar5 + 0xb) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x2c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0048ed00(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x2c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x2c) = 0;
        FUN_0048ed60(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xb] == '\0') goto LAB_0048f72b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0048ed60(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x2c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x2c) = 0;
      FUN_0048ed00(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x2c);
  } while( true );
}


//// FUNCTION FUN_0048f7e0 @ 0048f7e0 ////

void __thiscall FUN_0048f7e0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca51a8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x2d) != '\0') {
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
  FUN_0048edd0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x2d) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x2d) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x2d) == '\0') {
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
      iVar1 = param_2[0xb];
      *(char *)(param_2 + 0xb) = (char)_Memory[0xb];
      *(char *)(_Memory + 0xb) = (char)iVar1;
      goto LAB_0048f951;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x2d) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x2d) == '\0') {
      piVar2 = (int *)FUN_0048ebe0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x2d) == '\0') {
      uVar3 = FUN_0048ec10((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0048f951:
  if ((char)_Memory[0xb] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0xb] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0xb] == '\0') {
            *(undefined1 *)(piVar4 + 0xb) = 1;
            *(undefined1 *)(piVar5 + 0xb) = 0;
            FUN_0048ed00(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x2d) == '\0') {
            if ((*(char *)(*piVar4 + 0x2c) != '\x01') || (*(char *)(piVar4[2] + 0x2c) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x2c) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x2c) = 1;
                *(undefined1 *)(piVar4 + 0xb) = 0;
                FUN_0048ed60(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xb) = (char)piVar5[0xb];
              *(undefined1 *)(piVar5 + 0xb) = 1;
              *(undefined1 *)(piVar4[2] + 0x2c) = 1;
              FUN_0048ed00(this,(int)piVar5);
              break;
            }
LAB_0048fa14:
            *(undefined1 *)(piVar4 + 0xb) = 0;
          }
        }
        else {
          if ((char)piVar4[0xb] == '\0') {
            *(undefined1 *)(piVar4 + 0xb) = 1;
            *(undefined1 *)(piVar5 + 0xb) = 0;
            FUN_0048ed60(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x2d) == '\0') {
            if ((*(char *)(piVar4[2] + 0x2c) == '\x01') && (*(char *)(*piVar4 + 0x2c) == '\x01'))
            goto LAB_0048fa14;
            if (*(char *)(*piVar4 + 0x2c) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x2c) = 1;
              *(undefined1 *)(piVar4 + 0xb) = 0;
              FUN_0048ed00(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xb) = (char)piVar5[0xb];
            *(undefined1 *)(piVar5 + 0xb) = 1;
            *(undefined1 *)(*piVar4 + 0x2c) = 1;
            FUN_0048ed60(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xb) = 1;
  }
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_0048fab0 @ 0048fab0 ////

void __thiscall FUN_0048fab0(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x2d) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0048fb14:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0048fb19;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0048fb14;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0048fb19:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x2d) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_0048f630(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_0048ee50((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_0048f630(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_0048fbd0 @ 0048fbd0 ////

void __thiscall FUN_0048fbd0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0048f540((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x2d) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x2d);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x2d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x2d);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x2d);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0048f7e0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION Campaign_LoadYearFromSave @ 0048fc90 ////

void Campaign_LoadYearFromSave(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_34 [2];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca51d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0055bd40(DAT_0104a678,&PTR_DAT_00e50b54);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"",0);
  local_28 = 0;
  *local_2c = '\0';
  local_4 = 0;
  FUN_00558a50(DAT_0104a678,&local_2c,(undefined4 *)0x1);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  DAT_0104a654 = FUN_00558750(DAT_0104a678,&PTR_DAT_00e50b94,0x780);
  uVar2 = FUN_00558a50(DAT_0104a678,&PTR_DAT_00e50b74,(undefined4 *)0x1);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_00558120(DAT_0104a678,0);
    cVar1 = (char)uVar2;
    while (cVar1 != '\0') {
      puVar3 = FUN_00558de0(DAT_0104a678,&local_2c);
      local_4 = 1;
      FUN_0048fab0(&DAT_0104a658,local_34,puVar3);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      uVar2 = FUN_00558120(DAT_0104a678,2);
      cVar1 = (char)uVar2;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0048fdd0 @ 0048fdd0 ////

void FUN_0048fdd0(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 **ppuVar4;
  byte *pbVar5;
  bool bVar6;
  undefined4 *local_78;
  undefined4 *local_74 [2];
  byte *local_6c;
  undefined4 local_68;
  uint local_64;
  byte local_60 [20];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca51f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048f010(&stack0x00000004,&local_2c);
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  FUN_004015d0(&local_6c,local_2c,local_28);
  local_4 = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_78 = FUN_0048f2c0(&DAT_0104a658,&local_6c);
  if (local_78 != DAT_0104a65c) {
    pbVar5 = (byte *)local_78[3];
    pbVar2 = local_6c;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0048fe8a:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0048fe8f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0048fe8a;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0048fe8f:
    if (-1 < iVar3) {
      ppuVar4 = &local_78;
      goto LAB_0048fea2;
    }
  }
  local_74[0] = DAT_0104a65c;
  ppuVar4 = local_74;
LAB_0048fea2:
  if (*ppuVar4 == DAT_0104a65c) {
    FUN_0048fab0(&DAT_0104a658,local_74,&local_6c);
    FUN_00558a50(DAT_0104a678,&PTR_DAT_00e50b74,(undefined4 *)0x1);
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"",0);
    local_48 = 0;
    *local_4c = '\0';
    local_4._0_1_ = 1;
    FUN_00557fa0(DAT_0104a678,&local_6c,&local_4c);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    FUN_0055aa10(DAT_0104a678,&PTR_DAT_00e50b54);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return;
}


