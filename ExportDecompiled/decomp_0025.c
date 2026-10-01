//// FUNCTION FUN_007909c0 @ 007909c0 ////

undefined4 * __thiscall FUN_007909c0(void *this,byte param_1)

{
  FUN_007908e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00790a30 @ 00790a30 ////

undefined4 __thiscall FUN_00790a30(void *this,int param_1)

{
  float10 fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 extraout_var;
  undefined4 uVar4;
  float10 fVar5;
  
  (**(code **)(*(int *)((int)this + 0x78) + 4))();
  iVar2 = param_1;
  *(int *)((int)this + 0x8c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x78))();
  uVar4 = 0;
  if (*(int *)((int)this + 0xa4) != 0) {
    if (*(char *)(*(int *)((int)this + 0xa4) + 0x9d8) != '\0') {
      (**(code **)(*(int *)this + 4))(DAT_00e4fa4c);
    }
    puVar3 = (undefined4 *)(**(code **)(*(int *)this + 8))(&param_1);
    fVar5 = FUN_00793f50(iVar2,*puVar3,(float *)0x0);
    *(float *)((int)this + 0x54) = (float)fVar5;
    *(float *)((int)this + 0x50) = (float)fVar5;
    fVar1 = (float10)0.0;
    uVar4 = CONCAT22(extraout_var,
                     (ushort)(fVar5 < fVar1) << 8 | (ushort)(NAN(fVar5) || NAN(fVar1)) << 10 |
                     (ushort)(fVar5 == fVar1) << 0xe);
    if (fVar5 >= fVar1) {
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return uVar4;
}


//// FUNCTION FUN_00790b10 @ 00790b10 ////

undefined4 __fastcall FUN_00790b10(int *param_1)

{
  char cVar1;
  float *pfVar2;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 local_8 [8];
  
  pfVar2 = (float *)(**(code **)(*param_1 + 8))(local_8);
  fVar6 = FUN_0043b710(pfVar2);
  fVar7 = (float10)0.0;
  uVar5 = CONCAT22(extraout_var_00,
                   (ushort)(fVar7 < fVar6) << 8 | (ushort)(NAN(fVar7) || NAN(fVar6)) << 10 |
                   (ushort)(fVar7 == fVar6) << 0xe);
  if (fVar7 != fVar6) {
    uVar5 = CONCAT31((int3)(uVar5 >> 8),(char)param_1[0x2b]);
    if ((char)param_1[0x2b] == '\0') {
      if ((int *)param_1[0x29] != (int *)0x0) {
        iVar3 = (**(code **)(*(int *)param_1[0x29] + 0x27c))();
        uVar5 = 0;
        if (iVar3 != 0) {
          uVar4 = FUN_005773c0(param_1[0x29]);
          uVar5 = GetPlayerStudio();
          if (uVar4 == uVar5) {
            iVar3 = (**(code **)(*(int *)param_1[0x29] + 0x27c))();
            cVar1 = FUN_004724b0(iVar3);
            uVar5 = CONCAT31(extraout_var,cVar1);
            if (cVar1 == '\0') {
              uVar4 = FUN_005773c0(param_1[0x29]);
              uVar5 = GetPlayerStudio();
              if (uVar4 == uVar5) goto LAB_00790be1;
            }
            goto LAB_00790be8;
          }
        }
      }
LAB_00790be1:
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
    (**(code **)(*param_1 + 8))(local_8);
    uVar8 = FUN_0043b560();
    fVar9 = (float)((int)uVar8 + 2);
    fVar7 = FUN_0043b710((float *)&DAT_00e4fa4c);
    fVar6 = (float10)fVar9;
    uVar5 = CONCAT22(extraout_var_01,
                     (ushort)(fVar7 < fVar6) << 8 | (ushort)(NAN(fVar7) || NAN(fVar6)) << 10 |
                     (ushort)(fVar7 == fVar6) << 0xe);
    if (fVar7 >= fVar6 && (fVar7 == fVar6) == 0) {
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
  }
LAB_00790be8:
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_00790bf0 @ 00790bf0 ////

undefined4 * __thiscall FUN_00790bf0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint local_34;
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
  puStack_8 = &LAB_00cdbe91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0078ef30(this);
  *(undefined ***)this = &PTR_FUN_00d5064c;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 **)((int)this + 0x84) = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = &PTR_LAB_00d5048c;
  *(undefined4 *)((int)this + 0x8c) = 0;
  piVar1 = (int *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 **)((int)this + 0x9c) = (undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = &PTR_FUN_00d16954;
  *(int *)((int)this + 0xa4) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x98) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = 2;
  FUN_0043b510((undefined4 *)((int)this + 0xa8));
  *(undefined1 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa8) = param_2;
  FUN_0078e820(this,param_2);
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
  local_30 = FUN_009b01a0("HUD_TIMELINE_STARQUITTING_EVENT_GENERATED");
  local_34 = local_34 & 0xfffffffe;
  puVar6 = &DAT_00d17518;
  iVar5 = 0;
  puVar4 = &local_34;
  iVar3 = 2;
  this_00 = (void *)FUN_004f3b20();
  FUN_004f3270(this_00,iVar3,(byte *)puVar4,iVar5,puVar6);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00790d20 @ 00790d20 ////

void __fastcall FUN_00790d20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5064c;
  param_1[0x24] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x1e] = &PTR_LAB_00d5048c;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_0078eda0(param_1);
  return;
}


//// FUNCTION FUN_00790e00 @ 00790e00 ////

undefined4 * __thiscall FUN_00790e00(void *this,byte param_1)

{
  FUN_00790d20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00790ea0 @ 00790ea0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00790ea0(void)

{
  return (float10)_DAT_00e59c20;
}


//// FUNCTION FUN_00791010 @ 00791010 ////

void __cdecl FUN_00791010(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x21);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return;
}


//// FUNCTION FUN_00791140 @ 00791140 ////

void __cdecl FUN_00791140(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x21);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x21);
  }
  return;
}


//// FUNCTION FUN_00791170 @ 00791170 ////

void __fastcall FUN_00791170(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x21) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x21) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x21);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x21);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x21) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x21) == '\0');
    if (*(char *)((int)piVar4 + 0x21) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00791250 @ 00791250 ////

void __cdecl FUN_00791250(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_007915f0 @ 007915f0 ////

void __fastcall FUN_007915f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x21);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x21);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x21);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_007916c0 @ 007916c0 ////

undefined4 * __thiscall FUN_007916c0(void *this,int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x21);
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    uVar3 = FUN_0049ba60(puVar5 + 3,param_1);
    if ((char)uVar3 == '\0') {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x21);
  }
  return puVar2;
}


//// FUNCTION FUN_00791780 @ 00791780 ////

void __thiscall FUN_00791780(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x21) == '\0') {
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


//// FUNCTION FUN_007917e0 @ 007917e0 ////

void __thiscall FUN_007917e0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x21) == '\0') {
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


//// FUNCTION FUN_00791840 @ 00791840 ////

int * __fastcall FUN_00791840(int *param_1)

{
  FUN_00791170(param_1);
  return param_1;
}


//// FUNCTION FUN_007918b0 @ 007918b0 ////

void __cdecl FUN_007918b0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00791970 @ 00791970 ////

void __cdecl
FUN_00791970(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (*(code *)param_4)(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = (*(code *)param_4)(*param_3,*param_2);
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  cVar2 = (*(code *)param_4)(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}


//// FUNCTION FUN_007919d0 @ 007919d0 ////

void __cdecl FUN_007919d0(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

{
  char cVar1;
  int iVar2;
  
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    cVar1 = (*(code *)param_5)(*(undefined4 *)(param_1 + iVar2 * 4),param_4);
    if (cVar1 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  }
  *(undefined4 *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00791a30 @ 00791a30 ////

void __cdecl FUN_00791a30(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 **ppuVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *local_c;
  undefined4 *local_8 [2];
  
  puVar5 = param_3;
  iVar9 = (int)param_3 - param_1 >> 2;
  iVar11 = param_2 - param_1 >> 2;
  iVar7 = iVar11;
  param_2 = iVar9;
  while (iVar2 = iVar7, iVar2 != 0) {
    iVar7 = param_2 % iVar2;
    param_2 = iVar2;
  }
  if ((param_2 < iVar9) && (0 < param_2)) {
    puVar10 = (undefined4 *)(param_1 + param_2 * 4);
    do {
      uVar1 = *puVar10;
      if (puVar10 + iVar11 == puVar5) {
        ppuVar8 = (undefined4 **)&param_1;
      }
      else {
        param_3 = puVar10 + iVar11;
        ppuVar8 = &param_3;
      }
      puVar6 = *ppuVar8;
      puVar4 = puVar10;
      while (puVar3 = puVar6, puVar3 != puVar10) {
        *puVar4 = *puVar3;
        iVar7 = (int)puVar5 - (int)puVar3 >> 2;
        if (iVar11 < iVar7) {
          local_c = puVar3 + iVar11;
          ppuVar8 = &local_c;
        }
        else {
          local_8[0] = (undefined4 *)(param_1 + (iVar7 * 0x3fffffff + iVar11) * 4);
          ppuVar8 = local_8;
        }
        puVar4 = puVar3;
        puVar6 = *ppuVar8;
      }
      puVar10 = puVar10 + -1;
      param_2 = param_2 + -1;
      *puVar4 = uVar1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_00791c10 @ 00791c10 ////

int * __fastcall FUN_00791c10(int *param_1)

{
  FUN_007915f0(param_1);
  return param_1;
}


//// FUNCTION FUN_00791c70 @ 00791c70 ////

void FUN_00791c70(void *param_1)

{
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    FUN_00791c70(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00791cb0 @ 00791cb0 ////

int * __fastcall FUN_00791cb0(int *param_1)

{
  FUN_007915f0(param_1);
  return param_1;
}


//// FUNCTION FUN_00791cc0 @ 00791cc0 ////

int * __fastcall FUN_00791cc0(int *param_1)

{
  FUN_00791170(param_1);
  return param_1;
}


//// FUNCTION FUN_00791ce0 @ 00791ce0 ////

void FUN_00791ce0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 8) = 1;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  return;
}


//// FUNCTION FUN_00791d20 @ 00791d20 ////

void FUN_00791d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    puVar1[4] = param_4[1];
    puVar1[5] = param_4[2];
    puVar1[6] = param_4[3];
    puVar1[7] = param_4[4];
    *(undefined1 *)(puVar1 + 8) = param_5;
    *(undefined1 *)((int)puVar1 + 0x21) = 0;
  }
  return;
}


//// FUNCTION FUN_00791dd0 @ 00791dd0 ////

void * FUN_00791dd0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00791e00 @ 00791e00 ////

void __cdecl
FUN_00791e00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00791970(param_1,param_1 + iVar1,param_1 + iVar1 * 2,param_4);
    FUN_00791970(param_2 + -iVar1,param_2,param_2 + iVar1,param_4);
    FUN_00791970(param_3 + iVar1 * -2,param_3 + -iVar1,param_3,param_4);
    FUN_00791970(param_1 + iVar1,param_2,param_3 + -iVar1,param_4);
    return;
  }
  FUN_00791970(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_00791eb0 @ 00791eb0 ////

void __cdecl FUN_00791eb0(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    cVar1 = (*(code *)param_5)(*(undefined4 *)(param_1 + iVar3 * 4),
                               *(undefined4 *)(param_1 + -4 + iVar3 * 4));
    if (cVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  FUN_007919d0(param_1,iVar2,param_2,param_4,param_5);
  return;
}


//// FUNCTION FUN_00791f70 @ 00791f70 ////

undefined4 * __thiscall FUN_00791f70(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbec1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0078ef30(this);
  *(undefined ***)this = &PTR_FUN_00d506ac;
  piVar1 = (int *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x84) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 **)((int)this + 0x84) = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = &PTR_FUN_00d16aac;
  *(int *)((int)this + 0x8c) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x80) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 **)((int)this + 0x9c) = (undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = &PTR_LAB_00d5048c;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined1 *)((int)this + 0xac) = 0;
  param_1 = *(int *)(param_1 + 0xa0);
  local_4 = 2;
  ppuVar3 = FUN_0049ba10(&param_1);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,*ppuVar3,(uint)ppuVar3[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00792080 @ 00792080 ////

void __fastcall FUN_00792080(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d506ac;
  param_1[0x24] = &PTR_LAB_00d5048c;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x1e] = &PTR_FUN_00d16aac;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_0078eda0(param_1);
  return;
}


//// FUNCTION FUN_00792160 @ 00792160 ////

void __fastcall FUN_00792160(int param_1)

{
  FUN_00791c70(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00792190 @ 00792190 ////

void __thiscall FUN_00792190(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_007916c0(this,param_2);
  if (puVar1 != *(undefined4 **)((int)this + 4)) {
    uVar2 = FUN_0049ba60(param_2,puVar1 + 3);
    if ((char)uVar2 == '\0') {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return;
}


//// FUNCTION FUN_007921f0 @ 007921f0 ////

void __fastcall FUN_007921f0(int param_1)

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


//// FUNCTION FUN_00792220 @ 00792220 ////

undefined4 * FUN_00792220(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00792250 @ 00792250 ////

void __fastcall FUN_00792250(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00791ce0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00792290 @ 00792290 ////

void __cdecl
FUN_00792290(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puStack_4;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00791e00(param_2,puVar5,param_3 + -1,param_4);
  puStack_4 = puVar5;
  while (((param_2 < puStack_4 &&
          (cVar3 = (*(code *)param_4)(puStack_4[-1],*puStack_4), cVar3 == '\0')) &&
         (cVar3 = (*(code *)param_4)(*puStack_4,puStack_4[-1]), cVar3 == '\0'))) {
    puStack_4 = puStack_4 + -1;
  }
  do {
    puVar5 = puVar5 + 1;
    puVar2 = puVar5;
    puVar6 = puStack_4;
    if ((param_3 <= puVar5) || (cVar3 = (*(code *)param_4)(*puVar5,*puStack_4), cVar3 != '\0'))
    break;
    cVar3 = (*(code *)param_4)(*puStack_4,*puVar5);
  } while (cVar3 == '\0');
joined_r0x00792328:
  do {
    puVar4 = puStack_4;
    if (param_3 <= puVar2) {
joined_r0x0079236e:
      for (; param_2 < puStack_4; puStack_4 = puStack_4 + -1) {
        puVar4 = puVar4 + -1;
        cVar3 = (*(code *)param_4)(*puVar4,*puVar6);
        if (cVar3 == '\0') {
          cVar3 = (*(code *)param_4)(*puVar6,*puVar4);
          if (cVar3 != '\0') break;
          uVar1 = puVar6[-1];
          puVar6 = puVar6 + -1;
          *puVar6 = *puVar4;
          *puVar4 = uVar1;
        }
      }
      if (puStack_4 == param_2) {
        if (puVar2 == param_3) {
          *param_1 = puVar6;
          param_1[1] = puVar5;
          return;
        }
        if (puVar5 != puVar2) {
          uVar1 = *puVar6;
          *puVar6 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar6;
        *puVar6 = *puVar2;
        puVar5 = puVar5 + 1;
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      else {
        puStack_4 = puStack_4 + -1;
        if (puVar2 == param_3) {
          puVar6 = puVar6 + -1;
          if (puStack_4 != puVar6) {
            uVar1 = *puStack_4;
            *puStack_4 = *puVar6;
            *puVar6 = uVar1;
          }
          puVar4 = puVar5 + -1;
          uVar1 = *puVar6;
          puVar5 = puVar5 + -1;
          *puVar6 = *puVar4;
          *puVar5 = uVar1;
        }
        else {
          uVar1 = *puVar2;
          *puVar2 = *puStack_4;
          *puStack_4 = uVar1;
          puVar2 = puVar2 + 1;
        }
      }
      goto joined_r0x00792328;
    }
    cVar3 = (*(code *)param_4)(*puVar6,*puVar2);
    if (cVar3 == '\0') {
      cVar3 = (*(code *)param_4)(*puVar2,*puVar6);
      if (cVar3 != '\0') goto joined_r0x0079236e;
      uVar1 = *puVar5;
      *puVar5 = *puVar2;
      puVar5 = puVar5 + 1;
      *puVar2 = uVar1;
    }
    puVar2 = puVar2 + 1;
  } while( true );
}


//// FUNCTION FUN_00792450 @ 00792450 ////

void __cdecl FUN_00792450(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_00791eb0(param_1,iVar2,iVar3,*(undefined4 *)(param_1 + -4 + iVar1),param_3);
  }
  return;
}


//// FUNCTION FUN_007924f0 @ 007924f0 ////

undefined4 * __cdecl FUN_007924f0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  if (param_2 != 0) {
    param_2 = *(int *)(param_2 + 0xa0);
    puVar1 = (undefined4 *)FUN_00792190(&DAT_0104e790,&local_4,&param_2);
    *param_1 = *puVar1;
    return param_1;
  }
  *param_1 = DAT_0104e794;
  return param_1;
}


//// FUNCTION FUN_00792540 @ 00792540 ////

undefined4 * __thiscall FUN_00792540(void *this,byte param_1)

{
  FUN_00792080(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00792560 @ 00792560 ////

void __fastcall FUN_00792560(int param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  void *this;
  undefined4 uVar4;
  int unaff_EDI;
  float *pfVar5;
  undefined4 uStack_8;
  float fStack_4;
  
  if (((0.0 <= *(float *)(param_1 + 0x50)) && (*(int *)(param_1 + 0x8c) != 0)) &&
     (cVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x8c) + 0x38) + 0x20))(), cVar3 == '\0')) {
    uStack_8 = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0xa4);
    pfVar5 = &fStack_4;
    this = (void *)(**(code **)(*(int *)(*(int *)(param_1 + 0x8c) + 0x38) + 0x1c))(pfVar5,&uStack_8)
    ;
    uVar4 = FUN_0043b6c0(this,pfVar5);
    if ((((char)uVar4 != '\0') &&
        (FUN_007924f0((undefined4 *)&stack0xfffffff4,*(int *)(param_1 + 0x8c)),
        unaff_EDI != DAT_0104e794)) &&
       ((*(int **)(param_1 + 0xa4) != (int *)0x0 && (*(int *)(param_1 + 0x54) != -0x40800000)))) {
      iVar2 = *(int *)(unaff_EDI + 0x14);
      (**(code **)(**(int **)(param_1 + 0xa4) + 0x14))();
      fVar1 = *(float *)(param_1 + 0x54);
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(float *)(iVar2 + 0x1c) = fVar1;
      *(undefined4 *)(iVar2 + 0x20) = 0x42000000;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      BuildAndDrawPrimitive(iVar2);
      iVar2 = *(int *)(unaff_EDI + 0x18);
      *(float *)(iVar2 + 0x10) = fVar1;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(float *)(iVar2 + 0x1c) = fVar1 + 32.0;
      *(undefined4 *)(iVar2 + 0x20) = 0x42000000;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      BuildAndDrawPrimitive(iVar2);
    }
  }
  return;
}


//// FUNCTION FUN_00792670 @ 00792670 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00792670(void)

{
  void *_Memory;
  
  if ((int *)*DAT_0104e794 != DAT_0104e794) {
                    /* WARNING: Subroutine does not return */
    _free((void *)((int *)*DAT_0104e794)[6]);
  }
  _Memory = (void *)DAT_0104e794[1];
  if (*(char *)((int)_Memory + 0x21) == '\0') {
    FUN_00791c70(*(void **)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0104e794[1] = (int)DAT_0104e794;
  _DAT_0104e798 = 0;
  *DAT_0104e794 = (int)DAT_0104e794;
  DAT_0104e794[2] = (int)DAT_0104e794;
  return;
}


//// FUNCTION FUN_00792730 @ 00792730 ////

int __fastcall FUN_00792730(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_8;
  undefined4 local_4;
  
  piVar2 = DAT_0104e794;
  if (*(int *)(param_1 + 0x8c) != 0) {
    local_8 = *(int *)(*(int *)(param_1 + 0x8c) + 0xa0);
    puVar1 = (undefined4 *)FUN_00792190(&DAT_0104e790,&local_4,&local_8);
    piVar2 = (int *)*puVar1;
  }
  if (piVar2 == DAT_0104e794) {
    return *(int *)(*DAT_0104e794 + 0x10);
  }
  return piVar2[4];
}


//// FUNCTION FUN_00792780 @ 00792780 ////

void __fastcall FUN_00792780(int param_1)

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


//// FUNCTION FUN_007927b0 @ 007927b0 ////

int __fastcall FUN_007927b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00791ce0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00792810 @ 00792810 ////

void __cdecl FUN_00792810(undefined4 *param_1,undefined4 *param_2,undefined *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      cVar3 = (*(code *)param_3)(*puVar2,*param_1);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)param_3)(*puVar2,puVar2[-1]);
        puVar1 = puVar2;
        if (cVar3 != '\0') {
          do {
            puVar4 = puVar1 + -1;
            cVar3 = (*(code *)param_3)(*puVar2,puVar1[-2]);
            puVar1 = puVar4;
          } while (cVar3 != '\0');
          if ((puVar4 != puVar2) && (puVar2 != puVar2 + 1)) {
            FUN_00791a30((int)puVar4,(int)puVar2,puVar2 + 1);
          }
        }
      }
      else if ((param_1 != puVar2) && (puVar2 != puVar2 + 1)) {
        FUN_00791a30((int)param_1,(int)puVar2,puVar2 + 1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00792900 @ 00792900 ////

void __cdecl FUN_00792900(undefined4 *param_1,int param_2,undefined *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00791eb0((int)param_1,0,iVar2 + -4 >> 2,uVar1,param_3);
  }
  return;
}


//// FUNCTION FUN_00792950 @ 00792950 ////

void __cdecl FUN_00792950(undefined4 *param_1,undefined4 *param_2,int param_3,undefined *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_8;
  undefined4 *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_007929e7:
      if (1 < iVar2) {
        FUN_00792810(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00792450((int)param_1,(int)param_2,param_4);
        }
        FUN_00792900(param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_007929e7;
    }
    FUN_00792290(&local_8,param_1,param_2,param_4);
    puVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00792950(param_1,local_8,param_3,param_4);
      param_1 = puVar1;
    }
    else {
      FUN_00792950(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00792a40 @ 00792a40 ////

void __thiscall
FUN_00792a40(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cdbed8;
  local_c = ExceptionList;
  if (0xcccccca < *(uint *)((int)this + 8)) {
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
  piVar3 = (int *)FUN_00791d20(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
  cVar1 = *(char *)(piVar3[1] + 0x20);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x20) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[8] == '\0') {
LAB_00792b3b:
        *(undefined1 *)(*piVar4 + 0x20) = 1;
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x20) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00791780(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x20) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x20) = 0;
        FUN_007917e0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[8] == '\0') goto LAB_00792b3b;
      if (piVar6 == (int *)*piVar2) {
        FUN_007917e0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x20) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x20) = 0;
      FUN_00791780(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x20);
  } while( true );
}


//// FUNCTION FUN_00792bf0 @ 00792bf0 ////

void FUN_00792bf0(void)

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
  puStack_8 = &LAB_00cdbef8;
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


//// FUNCTION FUN_00792c60 @ 00792c60 ////

void __thiscall FUN_00792c60(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cdbf18;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x21) != '\0') {
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
  FUN_007915f0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x21) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x21) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x21) == '\0') {
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
      iVar1 = param_2[8];
      *(char *)(param_2 + 8) = (char)_Memory[8];
      *(char *)(_Memory + 8) = (char)iVar1;
      goto LAB_00792dd1;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x21) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x21) == '\0') {
      piVar2 = (int *)FUN_00791010(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x21) == '\0') {
      uVar3 = FUN_00791140((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00792dd1:
  if ((char)_Memory[8] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[8] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[8] == '\0') {
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(piVar5 + 8) = 0;
            FUN_00791780(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x21) == '\0') {
            if ((*(char *)(*piVar4 + 0x20) != '\x01') || (*(char *)(piVar4[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x20) = 1;
                *(undefined1 *)(piVar4 + 8) = 0;
                FUN_007917e0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 8) = (char)piVar5[8];
              *(undefined1 *)(piVar5 + 8) = 1;
              *(undefined1 *)(piVar4[2] + 0x20) = 1;
              FUN_00791780(this,(int)piVar5);
              break;
            }
LAB_00792e94:
            *(undefined1 *)(piVar4 + 8) = 0;
          }
        }
        else {
          if ((char)piVar4[8] == '\0') {
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(piVar5 + 8) = 0;
            FUN_007917e0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x21) == '\0') {
            if ((*(char *)(piVar4[2] + 0x20) == '\x01') && (*(char *)(*piVar4 + 0x20) == '\x01'))
            goto LAB_00792e94;
            if (*(char *)(*piVar4 + 0x20) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x20) = 1;
              *(undefined1 *)(piVar4 + 8) = 0;
              FUN_00791780(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 8) = (char)piVar5[8];
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(*piVar4 + 0x20) = 1;
            FUN_007917e0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 8) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00792f90 @ 00792f90 ////

void __thiscall FUN_00792f90(void *this,undefined4 *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *this_00;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  char local_4;
  
  this_00 = param_2;
  piVar2 = (int *)(*(int **)((int)this + 4))[1];
  cVar1 = *(char *)((int)piVar2 + 0x21);
  local_4 = '\x01';
  piVar3 = *(int **)((int)this + 4);
  while (cVar1 == '\0') {
    uVar4 = FUN_0049ba60(this_00,piVar2 + 3);
    local_4 = (char)uVar4;
    if (local_4 == '\0') {
      piVar6 = (int *)piVar2[2];
    }
    else {
      piVar6 = (int *)*piVar2;
    }
    piVar3 = piVar2;
    piVar2 = piVar6;
    cVar1 = *(char *)((int)piVar6 + 0x21);
  }
  param_2 = piVar3;
  if (local_4 != '\0') {
    if (piVar3 == (int *)**(int **)((int)this + 4)) {
      local_4 = '\x01';
      goto LAB_00792fed;
    }
    FUN_00791170((int *)&param_2);
  }
  piVar2 = param_2;
  uVar4 = FUN_0049ba60(param_2 + 3,this_00);
  if ((char)uVar4 == '\0') {
    *param_1 = piVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_00792fed:
  puVar5 = (undefined4 *)FUN_00792a40(this,&param_2,local_4,piVar3,this_00);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00793050 @ 00793050 ////

void __thiscall FUN_00793050(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00791c70((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x21) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x21);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x21);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x21);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x21);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00792c60(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00793110 @ 00793110 ////

void __thiscall FUN_00793110(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00792bf0();
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
      _Dst = FUN_00792220((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00791dd0(param_1,iVar5,param_1 + param_2);
      FUN_00792220(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00791250(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00791dd0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_007918b0(param_1,(int)pvVar3,iVar5);
    FUN_00791250(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00793300 @ 00793300 ////

undefined4 * __thiscall FUN_00793300(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *this_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_8 [2];
  
  this_00 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00792a40(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar2 = FUN_0049ba60(param_3,param_2 + 3);
    if ((char)uVar2 != '\0') {
      FUN_00792a40(this,param_1,'\x01',param_2,this_00);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    uVar2 = FUN_0049ba60((void *)(piVar1[2] + 0xc),param_3);
    if ((char)uVar2 != '\0') {
      FUN_00792a40(this,param_1,'\0',*(undefined4 **)(*(int *)((int)this + 4) + 8),this_00);
      return param_1;
    }
  }
  else {
    uVar2 = FUN_0049ba60(param_3,param_2 + 3);
    if ((char)uVar2 != '\0') {
      param_3 = param_2;
      FUN_00791170((int *)&param_3);
      piVar1 = param_3;
      uVar2 = FUN_0049ba60(param_3 + 3,this_00);
      if ((char)uVar2 != '\0') {
        if (*(char *)(piVar1[2] + 0x21) != '\0') {
          FUN_00792a40(this,param_1,'\0',piVar1,this_00);
          return param_1;
        }
        FUN_00792a40(this,param_1,'\x01',param_2,this_00);
        return param_1;
      }
    }
    uVar2 = FUN_0049ba60(param_2 + 3,this_00);
    if ((char)uVar2 != '\0') {
      param_3 = param_2;
      FUN_007915f0((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar2 = FUN_0049ba60(this_00,param_3 + 3);
        if ((char)uVar2 == '\0') goto LAB_00793480;
      }
      if (*(char *)(param_2[2] + 0x21) != '\0') {
        FUN_00792a40(this,param_1,'\0',param_2,this_00);
        return param_1;
      }
      FUN_00792a40(this,param_1,'\x01',piVar1,this_00);
      return param_1;
    }
  }
LAB_00793480:
  puVar3 = (undefined4 *)FUN_00792f90(this,local_8,this_00);
  *param_1 = *puVar3;
  return param_1;
}


//// FUNCTION FUN_00793520 @ 00793520 ////

int * __thiscall FUN_00793520(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_14 [5];
  
  piVar3 = param_1;
  piVar1 = FUN_007916c0(this,param_1);
  if (piVar1 != *(int **)((int)this + 4)) {
    uVar2 = FUN_0049ba60(piVar3,piVar1 + 3);
    if ((char)uVar2 == '\0') {
      return piVar1 + 4;
    }
  }
  local_14[0] = *piVar3;
  local_14[2] = 0;
  local_14[3] = 0;
  local_14[1] = 0;
  local_14[4] = 0;
  piVar3 = FUN_00793300(this,&param_1,piVar1,local_14);
  return (int *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_00793610 @ 00793610 ////

void __fastcall FUN_00793610(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00793050(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00793640 @ 00793640 ////

void __cdecl FUN_00793640(int *param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *this;
  undefined4 *puVar6;
  int *piVar7;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbf4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ppuVar1 = FUN_0049ba10(param_1);
  puVar2 = FUN_0040d6b0(local_4c,"ui/timeline_tail_",ppuVar1);
  FUN_004312e0(&local_6c,puVar2,".dds");
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  puVar3 = FUN_0040d6b0(local_2c,"textures/",&local_6c);
  local_4._0_1_ = 1;
  uVar4 = FUN_009d3660(puVar3,(uint *)0x0);
  local_4._0_1_ = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if ((char)uVar4 == '\0') {
    if (local_64 < 0x1a) {
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_64 = 0x20;
      local_6c = _malloc(0x20);
    }
    _strncpy(local_6c,"ui/timeline_tail_cult.dds",0x19);
    local_68 = 0x19;
    local_6c[0x19] = '\0';
  }
  pvVar5 = FUN_0099bb50(local_6c,0,0,0,'\0');
  puVar3 = operator_new(0x24);
  local_4._0_1_ = 2;
  if (puVar3 == (undefined4 *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)FUN_009910f0(puVar3);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined1 *)((int)this + 0xc) = 6;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xbfffffff;
  if (*(void **)((int)this + 0x18) != pvVar5) {
    Engine_SetResourceReference(this,(int)pvVar5);
  }
  if (pvVar5 != (void *)0x0) {
    FUN_0099b400(pvVar5);
  }
  puVar3 = operator_new(0x3c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0041f350(puVar3);
  }
  puVar3[10] = 0;
  puVar3[1] = this;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0x3f000000;
  puVar3[0xd] = 0x3f000000;
  puVar6 = operator_new(0x3c);
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = FUN_0041f350(puVar6);
  }
  puVar2[10] = 0x3f000000;
  puVar2[1] = this;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0x3f800000;
  puVar2[0xd] = 0x3f000000;
  puVar6 = operator_new(0x3c);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_0041f350(puVar6);
  }
  puVar6[0xb] = 0x3f000000;
  puVar6[10] = 0;
  puVar6[1] = this;
  puVar6[0xc] = 0x3f000000;
  puVar6[0xd] = 0x3f800000;
  piVar7 = FUN_00793520(&DAT_0104e790,param_1);
  *piVar7 = (int)puVar3;
  piVar7[1] = (int)puVar2;
  piVar7[2] = (int)puVar6;
  piVar7[3] = (int)this;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00793910 @ 00793910 ////

void FUN_00793910(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *_Memory;
  undefined4 *puVar5;
  bool bVar6;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbf68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049d9d0(&local_28);
  _Memory = (undefined4 *)0x0;
  puVar5 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4 = 0;
  piVar1 = (int *)FUN_0049d9e0(&local_20);
  if (local_28 != *piVar1) {
    do {
      if (*(char *)(*(int *)(local_28 + 8) + 0x10a) == '\0') {
        local_24 = FUN_007959d0(*(int *)(local_28 + 8));
        if ((_Memory == (undefined4 *)0x0) ||
           ((uint)(local_10 - (int)_Memory >> 2) <= (uint)((int)puVar5 - (int)_Memory >> 2))) {
          FUN_00793110(local_1c,puVar5,1,&local_24);
          _Memory = local_18;
          puVar5 = local_14;
        }
        else {
          *puVar5 = local_24;
          local_14 = puVar5 + 1;
          puVar5 = local_14;
        }
      }
      local_28 = *(int *)(local_28 + 4);
      piVar1 = (int *)FUN_0049d9e0(&local_20);
    } while (local_28 != *piVar1);
  }
  uVar4 = (int)puVar5 - (int)_Memory >> 2;
  FUN_00792950(_Memory,puVar5,uVar4,&LAB_00790e40);
  for (uVar2 = 0; (int)uVar2 < (int)(-(uint)(_Memory != (undefined4 *)0x0) & uVar4);
      uVar2 = uVar2 + 1) {
    if (_Memory[uVar2] != 0) {
      uVar3 = uVar2 & 0x80000001;
      bVar6 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (!bVar6) {
        *(undefined1 *)(_Memory[uVar2] + 0xac) = 1;
      }
    }
  }
  if (_Memory != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00793a40 @ 00793a40 ////

int __fastcall FUN_00793a40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00791ce0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00793a70 @ 00793a70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00793a70(void)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  
  _DAT_0104e78c = DAT_00e4fa4c;
  FUN_00793910();
  puVar2 = FUN_0049c540();
  piVar1 = *(int **)(puVar2 + 8);
  for (piVar3 = *(int **)(puVar2 + 4); piVar3 != piVar1; piVar3 = piVar3 + 1) {
    FUN_00793640(piVar3);
  }
  return;
}


//// FUNCTION FUN_00793b10 @ 00793b10 ////

int __thiscall FUN_00793b10(void *this,int param_1)

{
  float10 fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 extraout_var;
  uint3 uVar4;
  float10 fVar5;
  
  (**(code **)(*(int *)((int)this + 0x78) + 4))();
  iVar2 = param_1;
  *(int *)((int)this + 0x8c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x78))();
  puVar3 = (undefined4 *)(**(code **)(*(int *)this + 8))(&param_1);
  fVar5 = FUN_00793f50(iVar2,*puVar3,(float *)0x0);
  *(float *)((int)this + 0x54) = (float)fVar5;
  *(float *)((int)this + 0x50) = (float)fVar5;
  fVar1 = (float10)0.0;
  uVar4 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(fVar5 < fVar1) << 8 | (ushort)(NAN(fVar5) || NAN(fVar1)) << 10 |
                           (ushort)(fVar5 == fVar1) << 0xe) >> 8);
  if (fVar5 < fVar1) {
    return (uint)uVar4 << 8;
  }
  return CONCAT31(uVar4,1);
}


//// FUNCTION FUN_00793bd0 @ 00793bd0 ////

undefined4 __fastcall FUN_00793bd0(int *param_1)

{
  float *pfVar1;
  undefined2 extraout_var;
  uint uVar2;
  undefined2 extraout_var_00;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 local_8 [8];
  
  pfVar1 = (float *)(**(code **)(*param_1 + 8))(local_8);
  fVar5 = FUN_0043b710(pfVar1);
  fVar6 = (float10)0.0;
  uVar2 = CONCAT22(extraout_var,
                   (ushort)(fVar6 < fVar5) << 8 | (ushort)(NAN(fVar6) || NAN(fVar5)) << 10 |
                   (ushort)(fVar6 == fVar5) << 0xe);
  if (fVar6 != fVar5) {
    if ((char)param_1[0x2b] != '\0') {
      (**(code **)(*param_1 + 8))(local_8);
      uVar7 = FUN_0043b560();
      fVar8 = (float)((int)uVar7 + 2);
      fVar6 = FUN_0043b710((float *)&DAT_00e4fa4c);
      fVar5 = (float10)fVar8;
      uVar2 = CONCAT22(extraout_var_00,
                       (ushort)(fVar6 < fVar5) << 8 | (ushort)(NAN(fVar6) || NAN(fVar5)) << 10 |
                       (ushort)(fVar6 == fVar5) << 0xe);
      if (fVar6 >= fVar5 && (fVar6 == fVar5) == 0) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      goto LAB_00793c6d;
    }
    if (param_1[0x29] != 0) {
      iVar3 = FUN_005773c0(param_1[0x29]);
      iVar4 = GetPlayerStudio();
      if (iVar3 != iVar4) goto LAB_00793c66;
    }
    uVar2 = param_1[0x29];
    iVar4 = 0;
    if (uVar2 == 0) {
LAB_00793c66:
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
  }
LAB_00793c6d:
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00793ca0 @ 00793ca0 ////

undefined4 * __thiscall FUN_00793ca0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint local_34;
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
  puStack_8 = &LAB_00cdbfa1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0078ef30(this);
  *(undefined ***)this = &PTR_FUN_00d50764;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 **)((int)this + 0x84) = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = &PTR_LAB_00d5048c;
  *(undefined4 *)((int)this + 0x8c) = 0;
  piVar1 = (int *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 **)((int)this + 0x9c) = (undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = &PTR_FUN_00d16954;
  *(int *)((int)this + 0xa4) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x98) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = 2;
  FUN_0043b510((undefined4 *)((int)this + 0xa8));
  *(undefined1 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa8) = param_2;
  FUN_0078e820(this,param_2);
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
  local_30 = FUN_009b01a0("HUD_TIMELINE_STARRETIRING_EVENT_GENERATED");
  local_34 = local_34 & 0xfffffffe;
  puVar6 = &DAT_00d17518;
  iVar5 = 0;
  puVar4 = &local_34;
  iVar3 = 2;
  this_00 = (void *)FUN_004f3b20();
  FUN_004f3270(this_00,iVar3,(byte *)puVar4,iVar5,puVar6);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00793dd0 @ 00793dd0 ////

void __fastcall FUN_00793dd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d50764;
  param_1[0x24] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x1e] = &PTR_LAB_00d5048c;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_0078eda0(param_1);
  return;
}


//// FUNCTION FUN_00793eb0 @ 00793eb0 ////

undefined4 * __thiscall FUN_00793eb0(void *this,byte param_1)

{
  FUN_00793dd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00793f50 @ 00793f50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00793f50(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float local_8;
  float local_4;
  
  fVar1 = _DAT_00e59c74 + *(float *)(param_1 + 0xc0);
  pfVar2 = (float *)FUN_0043b620(&param_2,&local_4,(float *)&DAT_00e4fa4c);
  fVar3 = FUN_0043b710(pfVar2);
  local_4 = (float)fVar3;
  if (fVar3 < (float10)0.0) {
    fVar3 = (float10)FUN_00ace9b0();
    local_4 = (float)fVar3;
    fVar3 = (float10)FUN_00ace9b0();
    fVar3 = extraout_ST1_00 / ((float10)1.0 - fVar3);
    if ((float10)1.0 < fVar3) {
      local_8 = -1.0;
      fVar3 = (float10)1.0;
      goto LAB_0079407c;
    }
    fVar4 = (float10)fVar1 - ((float10)fVar1 - (float10)*(float *)(param_1 + 0xc0)) * fVar3;
  }
  else {
    fVar3 = (float10)FUN_00ace9b0();
    local_4 = (float)fVar3;
    fVar3 = (float10)FUN_00ace9b0();
    fVar3 = extraout_ST1 / ((float10)1.0 - fVar3);
    if ((float10)1.0 < fVar3) {
      local_8 = -1.0;
      fVar3 = (float10)1.0;
      goto LAB_0079407c;
    }
    fVar4 = ((float10)*(float *)(param_1 + 0x108) - (float10)fVar1) * fVar3 + (float10)fVar1;
  }
  local_8 = (float)fVar4;
LAB_0079407c:
  if (param_3 != (float *)0x0) {
    *param_3 = (float)fVar3;
  }
  return (float10)(int)ROUND(local_8);
}


//// FUNCTION FUN_007940a0 @ 007940a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_007940a0(void *this,undefined4 *param_1,float param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_8;
  float local_4;
  
  FUN_0043b520(&local_8,0.0);
  if (param_2 <= _DAT_00e59c74 + *(float *)((int)this + 0xc0)) {
    if (*(float *)((int)this + 0xc0) <= param_2) {
      fVar3 = (float10)FUN_00ace9b0();
      local_4 = (float)fVar3;
      fVar3 = (float10)FUN_00ace9b0();
      param_2 = (float)(fVar3 - (float10)1.0);
      pfVar1 = (float *)FUN_0043b520(&param_2,param_2);
      puVar2 = (undefined4 *)FUN_0043b620(&DAT_00e4fa4c,&local_4,pfVar1);
      *param_1 = *puVar2;
      return param_1;
    }
    *param_1 = local_8;
    return param_1;
  }
  if (param_2 < *(float *)((int)this + 0x108) != (param_2 == *(float *)((int)this + 0x108))) {
    fVar3 = (float10)FUN_00ace9b0();
    local_4 = (float)fVar3;
    fVar3 = (float10)FUN_00ace9b0();
    param_2 = (float)(fVar3 - (float10)1.0);
    pfVar1 = (float *)FUN_0043b520(&param_2,param_2);
    puVar2 = (undefined4 *)FUN_0043b600(&DAT_00e4fa4c,&local_4,pfVar1);
    *param_1 = *puVar2;
    return param_1;
  }
  *param_1 = local_8;
  return param_1;
}


//// FUNCTION FUN_00794270 @ 00794270 ////

void FUN_00794270(undefined4 *param_1)

{
  undefined4 local_4;
  
  local_4 = 0x41600000;
  if (DAT_00e59c88 == '\0') {
    local_4 = 0;
  }
  *param_1 = 0x41600000;
  param_1[1] = local_4;
  return;
}


//// FUNCTION FUN_007942b0 @ 007942b0 ////

undefined4 __thiscall FUN_007942b0(void *this,int param_1)

{
  if ((param_1 < 2) && (-1 < param_1)) {
    return *(undefined4 *)((int)this + param_1 * 4 + 0x374);
  }
  return 0;
}


//// FUNCTION FUN_007942d0 @ 007942d0 ////

undefined1 __fastcall FUN_007942d0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x530);
}


//// FUNCTION FUN_007942e0 @ 007942e0 ////

void __cdecl FUN_007942e0(char param_1)

{
  if (param_1 != '\0') {
    DAT_0104e79d = 1;
    return;
  }
  DAT_0104e79c = 1;
  return;
}


//// FUNCTION FUN_00794300 @ 00794300 ////

void FUN_00794300(void)

{
  DAT_0104e7a1 = 0;
  DAT_0104e7a0 = 0;
  DAT_0104e7a2 = 0;
  return;
}


//// FUNCTION FUN_00794320 @ 00794320 ////

int * __thiscall FUN_00794320(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00794360 @ 00794360 ////

void __fastcall FUN_00794360(int param_1)

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


//// FUNCTION FUN_007943a0 @ 007943a0 ////

int __fastcall FUN_007943a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00794400 @ 00794400 ////

int __fastcall FUN_00794400(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00794460 @ 00794460 ////

int __fastcall FUN_00794460(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007944c0 @ 007944c0 ////

int __fastcall FUN_007944c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00794520 @ 00794520 ////

int __fastcall FUN_00794520(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00794540 @ 00794540 ////

int __fastcall FUN_00794540(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00794560 @ 00794560 ////

int * __thiscall FUN_00794560(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00794580 @ 00794580 ////

int * __thiscall FUN_00794580(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007949d0 @ 007949d0 ////

undefined4 FUN_007949d0(int param_1,int param_2,undefined *param_3)

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


//// FUNCTION FUN_007950b0 @ 007950b0 ////

int * __thiscall FUN_007950b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007950d0 @ 007950d0 ////

int * __thiscall FUN_007950d0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007950f0 @ 007950f0 ////

int * __thiscall FUN_007950f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00795110 @ 00795110 ////

int * __thiscall FUN_00795110(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00795130 @ 00795130 ////

int * __thiscall FUN_00795130(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00795150 @ 00795150 ////

int * __thiscall FUN_00795150(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00795180 @ 00795180 ////

int * __cdecl FUN_00795180(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_007951d0 @ 007951d0 ////

int * __cdecl FUN_007951d0(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_00795220 @ 00795220 ////

int * __cdecl FUN_00795220(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_00795270 @ 00795270 ////

int * __cdecl FUN_00795270(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_007952c0 @ 007952c0 ////

int * __cdecl FUN_007952c0(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_00795310 @ 00795310 ////

int * __cdecl FUN_00795310(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_00795350 @ 00795350 ////

undefined4 * __cdecl FUN_00795350(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00795390 @ 00795390 ////

undefined4 * __cdecl FUN_00795390(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007953d0 @ 007953d0 ////

undefined4 * __cdecl FUN_007953d0(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00795410 @ 00795410 ////

undefined4 * __cdecl FUN_00795410(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00795450 @ 00795450 ////

undefined4 * __cdecl FUN_00795450(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00795490 @ 00795490 ////

undefined4 * __cdecl FUN_00795490(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007955a0 @ 007955a0 ////

undefined4 FUN_007955a0(void)

{
  return DAT_0104e7b8;
}


//// FUNCTION FUN_007955b0 @ 007955b0 ////

void __fastcall FUN_007955b0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x520);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x3f4) == 0) {
      (**(code **)(*piVar1 + 0x60))(1,param_1,0xc1400000);
      (**(code **)(**(int **)(param_1 + 0x520) + 100))
                (1,*(undefined4 *)(param_1 + 0x3f4),0xc1800000);
    }
    else {
      (**(code **)(*piVar1 + 0x60))(1,*(int *)(param_1 + 0x3f4),0xc1000000);
      (**(code **)(**(int **)(param_1 + 0x520) + 100))(1,*(undefined4 *)(param_1 + 0x3f4),0);
    }
    (**(code **)(**(int **)(param_1 + 0x520) + 0x20))(DAT_0104e7a3);
  }
  return;
}


//// FUNCTION FUN_00795630 @ 00795630 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00795630(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined2 unaff_SI;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  ulonglong uVar9;
  int iStack_24;
  undefined4 local_18;
  undefined4 uStack_10;
  undefined4 auStack_c [2];
  float fStack_4;
  
  if (DAT_00e59c88 != '\0') {
    *(undefined4 *)(*(int *)((int)param_1 + 0x370) + 0x14) = *(undefined4 *)((int)param_1 + 0x9c);
    *(float *)(*(int *)((int)param_1 + 0x370) + 0x1c) =
         _DAT_00e59c74 + *(float *)((int)param_1 + 0xc0);
    *(float *)(*(int *)((int)param_1 + 0x370) + 0x20) =
         *(float *)(*(int *)((int)param_1 + 0x370) + 0x14) + 64.0;
    *(float *)(*(int *)((int)param_1 + 0x370) + 0x10) =
         *(float *)(*(int *)((int)param_1 + 0x370) + 0x1c) - 64.0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x36c) + 0x10) = *(undefined4 *)((int)param_1 + 0xc0);
    *(undefined4 *)(*(int *)((int)param_1 + 0x36c) + 0x14) =
         *(undefined4 *)(*(int *)((int)param_1 + 0x370) + 0x14);
    *(undefined4 *)(*(int *)((int)param_1 + 0x36c) + 0x1c) =
         *(undefined4 *)(*(int *)((int)param_1 + 0x370) + 0x10);
    *(undefined4 *)(*(int *)((int)param_1 + 0x36c) + 0x20) =
         *(undefined4 *)(*(int *)((int)param_1 + 0x370) + 0x20);
    *(undefined4 *)(*(int *)((int)param_1 + 0x368) + 0x10) =
         *(undefined4 *)(*(int *)((int)param_1 + 0x370) + 0x1c);
    *(undefined4 *)(*(int *)((int)param_1 + 0x368) + 0x14) =
         *(undefined4 *)(*(int *)((int)param_1 + 0x370) + 0x14);
    *(undefined4 *)(*(int *)((int)param_1 + 0x368) + 0x1c) = *(undefined4 *)((int)param_1 + 0x108);
    *(undefined4 *)(*(int *)((int)param_1 + 0x368) + 0x20) =
         *(undefined4 *)(*(int *)((int)param_1 + 0x370) + 0x20);
    fVar7 = FUN_0043b710((float *)&DAT_00e4fa4c);
    FUN_00acf400((double)((fVar7 - (float10)_DAT_00e59c7c) * (float10)12.0),unaff_SI);
    fVar8 = FUN_0043b710((float *)&DAT_00e4fa4c);
    fVar7 = (float10)_DAT_00e59c78;
    fVar1 = *(float *)(*(int *)((int)param_1 + 0x370) + 0x20) -
            *(float *)(*(int *)((int)param_1 + 0x370) + 0x14);
    uVar9 = FUN_0043b560();
    iStack_24 = (int)uVar9;
    fVar2 = (float)((fVar8 + fVar7) * (float10)12.0) * 0.083333336;
    if ((DAT_00e59c85 == '\0') || (*(char *)((int)param_1 + 0x530) != '\0')) {
      fVar2 = fVar2 + 1.0;
    }
    uVar4 = iStack_24 - 1;
    uVar5 = 0;
    local_18 = 0;
    uVar9 = FUN_00acd42c();
    if ((int)uVar4 < (int)uVar9) {
      fStack_4 = fVar1 * 0.25;
      do {
        FUN_0043b520(&uStack_10,(float)(int)uVar4);
        FUN_0043b520(auStack_c,(float)iStack_24);
        uVar5 = uVar4 & 0x80000001;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
        }
        fVar7 = FUN_00793f50((int)param_1,uStack_10,(float *)0x0);
        *(float *)(*(int *)((int)param_1 + uVar5 * 4 + 0x374) + 0x10) = (float)fVar7;
        *(undefined4 *)(*(int *)((int)param_1 + uVar5 * 4 + 0x374) + 0x14) =
             *(undefined4 *)(*(int *)((int)param_1 + 0x370) + 0x14);
        fVar7 = FUN_00793f50((int)param_1,auStack_c[0],(float *)0x0);
        *(float *)(*(int *)((int)param_1 + uVar5 * 4 + 0x374) + 0x1c) = (float)fVar7;
        iVar6 = *(int *)((int)param_1 + uVar5 * 4 + 0x374);
        local_18 = *(undefined4 *)(iVar6 + 0x1c);
        *(float *)(iVar6 + 0x20) = fStack_4 + *(float *)(*(int *)((int)param_1 + 0x370) + 0x14);
        BuildAndDrawPrimitive(*(int *)((int)param_1 + uVar5 * 4 + 0x374));
        *(undefined4 *)(*(int *)((int)param_1 + 0x37c) + 0x10) =
             *(undefined4 *)(*(int *)((int)param_1 + uVar5 * 4 + 0x374) + 0x10);
        *(undefined4 *)(*(int *)((int)param_1 + 0x37c) + 0x14) =
             *(undefined4 *)(*(int *)((int)param_1 + uVar5 * 4 + 0x374) + 0x14);
        *(float *)(*(int *)((int)param_1 + 0x37c) + 0x1c) =
             *(float *)(*(int *)((int)param_1 + 0x37c) + 0x10) + 32.0;
        *(float *)(*(int *)((int)param_1 + 0x37c) + 0x20) =
             *(float *)(*(int *)((int)param_1 + 0x37c) + 0x14) + 32.0;
        BuildAndDrawPrimitive(*(int *)((int)param_1 + 0x37c));
        uVar4 = uVar4 + 1;
        iStack_24 = iStack_24 + 1;
      } while ((int)uVar4 < (int)uVar9);
    }
    if ((DAT_00e59c85 == '\0') || (*(char *)((int)param_1 + 0x530) != '\0')) {
      if (uVar5 == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = uVar5 - 1;
      }
      FUN_0043b520(&fStack_4,fVar2 - 1.0);
      *(undefined4 *)(*(int *)((int)param_1 + iVar6 * 4 + 0x374) + 0x10) = local_18;
      *(undefined4 *)(*(int *)((int)param_1 + iVar6 * 4 + 0x374) + 0x14) =
           *(undefined4 *)(*(int *)((int)param_1 + 0x370) + 0x14);
      puVar3 = (undefined4 *)FUN_0073f790(param_1,auStack_c);
      *(undefined4 *)(*(int *)((int)param_1 + iVar6 * 4 + 0x374) + 0x1c) = *puVar3;
      *(float *)(*(int *)((int)param_1 + iVar6 * 4 + 0x374) + 0x20) =
           fVar1 * 0.25 + *(float *)(*(int *)((int)param_1 + 0x370) + 0x14);
      BuildAndDrawPrimitive(*(int *)((int)param_1 + iVar6 * 4 + 0x374));
      *(undefined4 *)(*(int *)((int)param_1 + 0x37c) + 0x10) =
           *(undefined4 *)(*(int *)((int)param_1 + iVar6 * 4 + 0x374) + 0x10);
      *(undefined4 *)(*(int *)((int)param_1 + 0x37c) + 0x14) =
           *(undefined4 *)(*(int *)((int)param_1 + iVar6 * 4 + 0x374) + 0x14);
      *(float *)(*(int *)((int)param_1 + 0x37c) + 0x1c) =
           *(float *)(*(int *)((int)param_1 + 0x37c) + 0x10) + 32.0;
      *(float *)(*(int *)((int)param_1 + 0x37c) + 0x20) =
           *(float *)(*(int *)((int)param_1 + 0x37c) + 0x14) + 32.0;
      BuildAndDrawPrimitive(*(int *)((int)param_1 + 0x37c));
    }
  }
  return;
}


//// FUNCTION FUN_007959d0 @ 007959d0 ////

void __cdecl FUN_007959d0(int param_1)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbfbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xb0);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00791f70(this,param_1);
  }
  piVar1 = puVar2 + 0xe;
  puVar2[0xf] = &DAT_0104e7d0;
  *piVar1 = (int)DAT_0104e7d0;
  *(int **)((int)DAT_0104e7d0 + 4) = piVar1;
  DAT_0104e7d0 = piVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00795a50 @ 00795a50 ////

void __cdecl FUN_00795a50(int param_1)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbfdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xc4);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_007900b0(this,param_1);
  }
  piVar1 = puVar2 + 0xe;
  puVar2[0xf] = &DAT_0104e7d0;
  *piVar1 = (int)DAT_0104e7d0;
  *(int **)((int)DAT_0104e7d0 + 4) = piVar1;
  DAT_0104e7d0 = piVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00795ad0 @ 00795ad0 ////

undefined4 * __cdecl FUN_00795ad0(void *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  wchar_t *in_stack_ffffffc0;
  uint in_stack_ffffffc4;
  uint in_stack_ffffffc8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdc003;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  this = operator_new(0xb8);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00568790((undefined4 *)&stack0xffffffc0,&param_1);
    puVar2 = FUN_0078f280(this,in_stack_ffffffc0,in_stack_ffffffc4,in_stack_ffffffc8);
  }
  piVar1 = puVar2 + 0xe;
  puVar2[0xf] = &DAT_0104e7d0;
  *piVar1 = (int)DAT_0104e7d0;
  *(int **)((int)DAT_0104e7d0 + 4) = piVar1;
  DAT_0104e7d0 = piVar1;
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00795b90 @ 00795b90 ////

void __cdecl FUN_00795b90(int param_1,undefined4 param_2)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc01b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xb0);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_007907b0(this,param_1,param_2);
  }
  piVar1 = puVar2 + 0xe;
  puVar2[0xf] = &DAT_0104e7d0;
  *piVar1 = (int)DAT_0104e7d0;
  *(int **)((int)DAT_0104e7d0 + 4) = piVar1;
  DAT_0104e7d0 = piVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00795c10 @ 00795c10 ////

void __cdecl FUN_00795c10(int param_1,undefined4 param_2)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc03b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xb0);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00790bf0(this,param_1,param_2);
  }
  piVar1 = puVar2 + 0xe;
  puVar2[0xf] = &DAT_0104e7d0;
  *piVar1 = (int)DAT_0104e7d0;
  *(int **)((int)DAT_0104e7d0 + 4) = piVar1;
  DAT_0104e7d0 = piVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00795c90 @ 00795c90 ////

void __cdecl FUN_00795c90(int param_1,undefined4 param_2)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc05b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xb0);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00793ca0(this,param_1,param_2);
  }
  piVar1 = puVar2 + 0xe;
  puVar2[0xf] = &DAT_0104e7d0;
  *piVar1 = (int)DAT_0104e7d0;
  *(int **)((int)DAT_0104e7d0 + 4) = piVar1;
  DAT_0104e7d0 = piVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00795d10 @ 00795d10 ////

undefined4 __fastcall FUN_00795d10(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_004201a0(DAT_00f87b04,1);
  DAT_0104e7a1 = 0;
  DAT_0104e7a0 = 0;
  DAT_0104e7a2 = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x424);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x410) + 4))();
    *(undefined4 *)(param_1 + 0x424) = 0;
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 0x410))();
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00795d70 @ 00795d70 ////

undefined4 __fastcall FUN_00795d70(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  FUN_004201a0(DAT_00f87b04,0);
  uVar3 = FUN_00566c20(DAT_0104cdf4,0x3f800000);
  DAT_0104e7a0 = 0;
  DAT_0104e7a1 = 0;
  DAT_0104e7a2 = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x424);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x410) + 4))();
    *(undefined4 *)(param_1 + 0x424) = 0;
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 0x410))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x40c);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x3f8) + 4))();
    *(undefined4 *)(param_1 + 0x40c) = 0;
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 0x3f8))();
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00795e10 @ 00795e10 ////

undefined4 __fastcall FUN_00795e10(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  FUN_004201a0(DAT_00f87b04,0);
  uVar3 = FUN_00566c20(DAT_0104cdf4,DAT_00e59c80);
  DAT_0104e7a0 = 0;
  DAT_0104e7a1 = 0;
  DAT_0104e7a2 = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x40c);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x3f8) + 4))();
    *(undefined4 *)(param_1 + 0x40c) = 0;
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 0x3f8))();
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00795e80 @ 00795e80 ////

void __fastcall FUN_00795e80(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_c;
  
  local_c = 0x41600000;
  if (DAT_00e59c88 == '\0') {
    local_c = 0;
  }
  if (*(int **)(param_1 + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x43c) + 100))(1,param_1,local_c);
    if ((DAT_00e59c84 != '\0') && (*(int **)(param_1 + 0x360) != (int *)0x0)) {
      iVar1 = **(int **)(param_1 + 0x43c);
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x360) + 0x10))();
      (**(code **)(iVar1 + 0x5c))(1,param_1,(float)(fVar2 + (float10)24.0));
      (**(code **)(**(int **)(param_1 + 0x43c) + 0x50))(1);
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x43c) + 0x5c))(1,param_1,0x40800000);
    (**(code **)(**(int **)(param_1 + 0x43c) + 0x50))(1);
  }
  return;
}


//// FUNCTION FUN_00795f60 @ 00795f60 ////

undefined4 __fastcall FUN_00795f60(int param_1)

{
  return *(undefined4 *)(param_1 + 0x394);
}


//// FUNCTION FUN_00795fa0 @ 00795fa0 ////

uint __thiscall FUN_00795fa0(void *this,float param_1)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 local_8 [2];
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x3f4) != 0) {
    uVar2 = *(uint *)(*(int *)((int)this + 0x3f4) + 0x218) >> 4;
    if (((uVar2 & 1) != 0) && (DAT_0104e094 != (void *)0x0)) {
      pfVar3 = (float *)FUN_0073f750(DAT_0104e094,local_8);
      fVar1 = *pfVar3;
      uVar2 = CONCAT22((short)((uint)pfVar3 >> 0x10),
                       (ushort)(param_1 < fVar1) << 8 | (ushort)(NAN(param_1) || NAN(fVar1)) << 10 |
                       (ushort)(param_1 == fVar1) << 0xe);
      if (param_1 >= fVar1) {
        return uVar2;
      }
    }
    uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                     (ushort)(param_1 < 0.0) << 8 | (ushort)NAN(param_1) << 10 |
                     (ushort)(param_1 == 0.0) << 0xe);
    if (param_1 >= 0.0 && (param_1 == 0.0) == 0) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2;
}


//// FUNCTION FUN_007960a0 @ 007960a0 ////

void FUN_007960a0(int *param_1,int *param_2,undefined *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  
  uVar5 = FUN_007949d0((int)param_1,(int)param_2,param_3);
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


//// FUNCTION FUN_007969b0 @ 007969b0 ////

void __cdecl FUN_007969b0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00796a10 @ 00796a10 ////

void __cdecl FUN_00796a10(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00796a70 @ 00796a70 ////

void __cdecl FUN_00796a70(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00796ad0 @ 00796ad0 ////

void __cdecl FUN_00796ad0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00796b30 @ 00796b30 ////

void __cdecl FUN_00796b30(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00796b90 @ 00796b90 ////

void __cdecl FUN_00796b90(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00796e90 @ 00796e90 ////

void __fastcall FUN_00796e90(int param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 local_8 [2];
  
  if (DAT_0104e094 == (void *)0x0) {
    uVar5 = 0x42300000;
  }
  else {
    if ((DAT_00e59c85 != '\0') || (DAT_00e59c86 != '\0')) {
      iVar2 = FUN_0071b2a0();
      fVar4 = FUN_0071b000(iVar2);
      piVar1 = *(int **)(param_1 + 0x3f4);
      pfVar3 = (float *)FUN_0073f750(DAT_0104e094,local_8);
      (**(code **)(*piVar1 + 0x60))(1,param_1,(float)(fVar4 * (float10)27.0) + *pfVar3);
      FUN_007955b0(param_1);
      return;
    }
    uVar5 = 0xc1400000;
  }
  (**(code **)(**(int **)(param_1 + 0x3f4) + 0x60))(2,param_1,uVar5);
  FUN_007955b0(param_1);
  return;
}


//// FUNCTION FUN_007970e0 @ 007970e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007970e0(void)

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
  puStack_8 = &LAB_00cdc0a0;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"time",4);
  local_28 = 4;
  local_2c[4] = '\0';
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
  _strncpy(local_2c,"power",5);
  local_28 = 5;
  local_2c[5] = '\0';
  local_4 = 1;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e59c70 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"origin",6);
  local_28 = 6;
  local_2c[6] = '\0';
  local_4 = 2;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e59c74 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"foresight",9);
  local_28 = 9;
  local_2c[9] = '\0';
  local_4 = 3;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e59c78 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"hindsight",9);
  local_28 = 9;
  local_2c[9] = '\0';
  local_4 = 4;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e59c7c = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"fastforward",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4 = 5;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  DAT_00e59c80 = (float)fVar1;
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0078fce0();
  FUN_0078f5b0();
  FUN_0072fdd0();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007973a0 @ 007973a0 ////

void FUN_007973a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_0104e7c4 != &DAT_0104e7d0) {
    do {
      piVar4 = DAT_0104e7c4;
      puVar2 = (undefined4 *)DAT_0104e7c4[2];
      piVar1 = DAT_0104e7c4 + 1;
      if ((int *)DAT_0104e7c4[1] != (int *)0x0) {
        *(int *)DAT_0104e7c4[1] = *DAT_0104e7c4;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    } while (DAT_0104e7c4 != &DAT_0104e7d0);
  }
  FUN_0078ff20();
  return;
}


//// FUNCTION FUN_00797400 @ 00797400 ////

void FUN_00797400(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_0104e7c4 != &DAT_0104e7d0) {
    do {
      piVar4 = DAT_0104e7c4;
      puVar2 = (undefined4 *)DAT_0104e7c4[2];
      piVar1 = DAT_0104e7c4 + 1;
      if ((int *)DAT_0104e7c4[1] != (int *)0x0) {
        *(int *)DAT_0104e7c4[1] = *DAT_0104e7c4;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    } while (DAT_0104e7c4 != &DAT_0104e7d0);
  }
  DAT_0104e72c = 1;
  return;
}


//// FUNCTION FUN_00797460 @ 00797460 ////

void __fastcall FUN_00797460(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = FUN_00423320(DAT_00f87b04);
  if (iVar2 == 1) goto LAB_0079754e;
  uVar3 = FUN_0053c9f0();
  if ((char)uVar3 == '\0') {
LAB_0079748f:
    if (*(int **)(param_1 + 0x3f0) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x3f0) + 0xc4))();
      if ((cVar1 != '\0') && ((*(uint *)(*(int *)(param_1 + 0x3f0) + 0x218) >> 4 & 1) != 0)) {
        uVar3 = FUN_005540f0(9);
        if ((char)uVar3 != '\0') {
          cVar1 = FUN_004201b0(DAT_00f87b04);
          if (cVar1 == '\0') {
            FUN_00795d10(param_1 + -0x50);
          }
          else {
            FUN_00795d70(param_1 + -0x50);
          }
        }
      }
    }
  }
  else {
    cVar1 = FUN_004201b0(DAT_00f87b04);
    if (cVar1 != '\0') goto LAB_0079748f;
  }
  cVar1 = FUN_00553f70(0x75);
  if (cVar1 == '\0') {
    uVar3 = FUN_005541d0(1);
    if ((char)uVar3 == '\0') {
      uVar4 = FUN_00553fd0(0x81);
      if ((char)uVar4 == '\0') goto LAB_0079754e;
    }
    if (DAT_0104e7b8 != 0) {
      FUN_0053ca50();
      FUN_00470a70(DAT_0104917c,DAT_0104e7b8,0x704,0,0);
    }
  }
LAB_0079754e:
  FUN_007402d0(param_1);
  return;
}


//// FUNCTION FUN_00797560 @ 00797560 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00797560(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  size_t sVar7;
  undefined4 unaff_EBX;
  float unaff_EBP;
  float10 fVar8;
  float local_b8;
  void *pvStack_ac;
  uint auStack_a4 [34];
  undefined4 uStack_1c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc0c9;
  pvStack_c = ExceptionList;
  local_b8 = 14.0;
  if (DAT_00e59c88 == '\0') {
    local_b8 = 0.0;
  }
  puVar5 = (undefined4 *)param_1[0xd8];
  ExceptionList = &pvStack_c;
  if (puVar5 != (undefined4 *)0x0) {
    piVar4 = puVar5 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*puVar5)(1);
    }
    (**(code **)(param_1[0xd3] + 4))();
    param_1[0xd8] = 0;
    (**(code **)param_1[0xd3])();
    if ((undefined4 *)param_1[0xd8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xd8])(1);
    }
    piVar4 = param_1 + 0xd3;
    (**(code **)(param_1[0xd3] + 4))();
    param_1[0xd8] = 0;
    (**(code **)*piVar4)();
    puVar5 = operator_new(0x3fc);
    uStack_4 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_00833290(puVar5);
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*piVar4 + 4))();
    param_1[0xd8] = (int)puVar5;
    (**(code **)*piVar4)();
    (**(code **)(*(int *)param_1[0xd8] + 100))(1,param_1,local_b8 + 6.0);
    (**(code **)(*(int *)param_1[0xd8] + 0x5c))(1,param_1,unaff_EBX);
    uVar6 = FUN_00ace02d(L"<h2><table><tr><td align=left width=");
    FUN_004036d0(&stack0xffffff3c,L"<h2><table><tr><td align=left width=",uVar6);
    uStack_1c = 1;
    sVar7 = _swprintf((wchar_t *)auStack_a4,0xd18f84,SUB84((double)(_DAT_00e59c74 - unaff_EBP),0));
    FUN_0040cae0(&stack0xffffff3c,(wchar_t *)auStack_a4,sVar7);
    sVar7 = FUN_00ace02d((short *)&DAT_00d19724);
    FUN_0040cae0(&stack0xffffff3c,L">",sVar7);
    puVar5 = FUN_0043c4f0();
    FUN_0040cae0(&stack0xffffff3c,(wchar_t *)*puVar5,puVar5[1]);
    sVar7 = FUN_00ace02d(L"</td></tr></table></h2>");
    FUN_0040cae0(&stack0xffffff3c,L"</td></tr></table></h2>",sVar7);
    (**(code **)(*(int *)param_1[0xd8] + 0x54))();
    *(undefined4 *)(param_1[0xd8] + 0x354) = 0x42c80000;
    (**(code **)(*(int *)param_1[0xd8] + 0x84))(0);
    (**(code **)(*param_1 + 0xc))(param_1[0xd8],1);
    if ((char)param_1[0x14c] != '\0') {
      (**(code **)(*(int *)param_1[0xd8] + 0x20))(0);
    }
    uStack_4 = 0xffffffff;
    if (10 < auStack_a4[0]) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_ac);
    }
  }
  uStack_4 = 0xffffffff;
  if ((int *)param_1[0x110] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x110] + 100))(1,param_1,local_b8);
    iVar3 = *(int *)param_1[0x110];
    fVar8 = (float10)(**(code **)(*(int *)param_1[0xd8] + 0x10))();
    (**(code **)(iVar3 + 0x5c))(1,param_1,(float)(fVar8 + (float10)56.0));
  }
  FUN_00795e80((int)param_1);
  piVar4 = (int *)param_1[0x118];
  if ((piVar4 != (int *)0x0) && (iVar3 = param_1[0x112], iVar3 != 0)) {
    if ((float)piVar4[0x42] < *(float *)(iVar3 + 0x108)) {
      fVar8 = (float10)(**(code **)(*piVar4 + 0x10))();
      (**(code **)(*(int *)param_1[0x118] + 0x78))
                ((float)(((float10)*(float *)(param_1[0x112] + 0x108) -
                         (float10)(float)((int *)param_1[0x118])[0x42]) + fVar8 + (float10)8.0));
      ExceptionList = pvStack_10;
      return;
    }
    if (8.0 < (float)piVar4[0x42] - *(float *)(iVar3 + 0x108)) {
      fVar1 = (float)((int *)param_1[0x118])[0x42];
      fVar2 = *(float *)(iVar3 + 0x108);
      iVar3 = *(int *)param_1[0x118];
      fVar8 = (float10)(**(code **)(*param_1 + 0x10))();
      (**(code **)(iVar3 + 0x78))((float)(fVar8 - (float10)((fVar1 - fVar2) - 8.0)));
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007978e0 @ 007978e0 ////

void __fastcall FUN_007978e0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  void *pvStack_60;
  undefined1 *puStack_5c;
  char *pcStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char acStack_48 [20];
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc0fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x4f0) != 0) {
    ExceptionList = &pvStack_c;
    FUN_007a1ca0(*(int *)(param_1 + 0x4f0));
  }
  puVar2 = *(undefined4 **)(param_1 + 0x4d8);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)();
    }
    (**(code **)(*(int *)(param_1 + 0x4c4) + 4))();
    *(undefined4 *)(param_1 + 0x4d8) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x4c4))();
    if (*(undefined4 **)(param_1 + 0x4d8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x4d8))();
    }
    piVar1 = (int *)(param_1 + 0x4c4);
    (**(code **)(*(int *)(param_1 + 0x4c4) + 4))();
    *(undefined4 *)(param_1 + 0x4d8) = 0;
    (**(code **)*piVar1)();
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(param_1 + 0x4d8) = 0;
    (**(code **)*piVar1)();
  }
  (**(code **)(*(int *)(param_1 + 0x4c4) + 4))();
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x4f0);
  (*(code *)**(undefined4 **)(param_1 + 0x4c4))();
  iVar3 = *(int *)(param_1 + 0x4d8);
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)FUN_0085bae0(&pvStack_60);
    *(undefined4 *)(iVar3 + 0x370) = *puVar2;
    FUN_007a19e0(*(void **)(param_1 + 0x4d8),0);
  }
  if (200 < *DAT_00f87b04) {
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_2c = 0xffffffff;
    uStack_30 = FUN_009b01a0("HUD_TIMELINE_EVENT_AWARD");
    puVar5 = &uStack_34;
    uStack_34 = uStack_34 & 0xfffffffe;
    FUN_004f3b20();
    FUN_004f32c0((byte *)puVar5);
  }
  if (-1 < *(int *)(param_1 + 0x528)) {
    FUN_009b11d0(*(int *)(param_1 + 0x528));
  }
  *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
  DAT_0104e7a0 = 0;
  DAT_0104e7a1 = 0;
  DAT_0104e7a2 = 0;
  (**(code **)(*(int *)(param_1 + 0x4dc) + 4))();
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x508);
  (*(code *)**(undefined4 **)(param_1 + 0x4dc))();
  if (*(void **)(param_1 + 0x4f0) != (void *)0x0) {
    FUN_007a19e0(*(void **)(param_1 + 0x4f0),1);
    iVar3 = *(int *)(param_1 + 0x4f0);
    puVar2 = (undefined4 *)FUN_0085c530((float *)&pvStack_60);
    *(undefined4 *)(iVar3 + 0x370) = *puVar2;
  }
  pcStack_54 = acStack_48;
  acStack_48[0] = '\0';
  uStack_50 = 0;
  uStack_4c = 0x20;
  pcStack_54 = _malloc(0x20);
  _strncpy(pcStack_54,"ui/timeline_award.dds",0x15);
  uStack_50 = 0x15;
  pcStack_54[0x15] = '\0';
  iStack_4 = 0;
  pvStack_60 = operator_new(0x3a0);
  iStack_4._0_1_ = 1;
  if (pvStack_60 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puStack_5c = &stack0xffffff80;
    puVar2 = FUN_007a2030(pvStack_60,&pcStack_54,0,0,0x3f800000,0x3f800000);
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  (**(code **)(*(int *)(param_1 + 0x4f4) + 4))();
  *(undefined4 **)(param_1 + 0x508) = puVar2;
  (*(code *)**(undefined4 **)(param_1 + 0x4f4))();
  (**(code **)(**(int **)(param_1 + 0x508) + 0x74))();
  FUN_007a19e0(*(void **)(param_1 + 0x508),2);
  FUN_007a1990(*(float *)(param_1 + 0x508));
  this = operator_new(4);
  pvStack_c._0_1_ = 2;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0085c530((float *)&pvStack_60);
    uVar4 = FUN_0043b560();
    iVar3 = FUN_0085baf0();
    puVar2 = (undefined4 *)FUN_0043b520(this,(float)((int)uVar4 + iVar3));
  }
  iVar3 = **(int **)(param_1 + 0x508);
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  FUN_00793f50(param_1,*puVar2,(float *)0x0);
  (**(code **)(iVar3 + 0x5c))(1);
                    /* WARNING: Subroutine does not return */
  _free(puVar2);
}


//// FUNCTION FUN_00797c50 @ 00797c50 ////

void __fastcall FUN_00797c50(int param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  float10 fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar10;
  undefined1 *puVar11;
  float local_2c;
  uint auStack_28 [10];
  
  uVar3 = FUN_0085bb10();
  if ((char)uVar3 != '\0') {
    FUN_0085c530(&local_2c);
    uVar7 = FUN_0043b570();
    uVar8 = FUN_0043b570();
    fVar6 = FUN_0043b960(0xe4fa4c);
    fVar6 = (fVar6 * (float10)((int)uVar8 - (int)uVar7) * (float10)100.0) /
            (float10)*(float *)(DAT_0104cdf4 + 0x38);
    fVar1 = (float)fVar6;
    if ((fVar6 < (float10)240000.0 != (fVar6 == (float10)240000.0)) && (DAT_0104e7a0 == '\0')) {
      iVar4 = FUN_00423320(DAT_00f87b04);
      if (iVar4 == 0) {
        cVar2 = FUN_004201b0(DAT_00f87b04);
        if (cVar2 == '\0') {
          FUN_0041c9c0(auStack_28,"HUD_TIMELINE_AWARDS_NOTIFICATION_4MINS");
          auStack_28[0] = auStack_28[0] & 0xfffffffe;
          if (-1 < *(int *)(param_1 + 0x528)) {
            FUN_009b11d0(*(int *)(param_1 + 0x528));
          }
          puVar11 = &DAT_00d17518;
          iVar10 = -1;
          puVar9 = auStack_28;
          iVar4 = 2;
          *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
          pvVar5 = (void *)FUN_004f3b20();
          uVar3 = FUN_004f3270(pvVar5,iVar4,(byte *)puVar9,iVar10,puVar11);
          *(undefined4 *)(param_1 + 0x528) = uVar3;
          DAT_0104e7a0 = 1;
          return;
        }
      }
    }
    if ((fVar1 < 120000.0 != (fVar1 == 120000.0)) && (DAT_0104e7a1 == '\0')) {
      iVar4 = FUN_00423320(DAT_00f87b04);
      if (iVar4 == 0) {
        cVar2 = FUN_004201b0(DAT_00f87b04);
        if (cVar2 == '\0') {
          FUN_0041c9c0(auStack_28,"HUD_TIMELINE_AWARDS_NOTIFICATION_2MINS");
          auStack_28[0] = auStack_28[0] & 0xfffffffe;
          if (-1 < *(int *)(param_1 + 0x528)) {
            FUN_009b11d0(*(int *)(param_1 + 0x528));
          }
          puVar11 = &DAT_00d17518;
          iVar10 = -1;
          puVar9 = auStack_28;
          iVar4 = 2;
          *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
          pvVar5 = (void *)FUN_004f3b20();
          uVar3 = FUN_004f3270(pvVar5,iVar4,(byte *)puVar9,iVar10,puVar11);
          *(undefined4 *)(param_1 + 0x528) = uVar3;
          DAT_0104e7a1 = 1;
          return;
        }
      }
    }
    if ((fVar1 < 30000.0 != (fVar1 == 30000.0)) && (DAT_0104e7a2 == '\0')) {
      iVar4 = FUN_00423320(DAT_00f87b04);
      if (iVar4 == 0) {
        cVar2 = FUN_004201b0(DAT_00f87b04);
        if (cVar2 == '\0') {
          FUN_0041c9c0(auStack_28,"HUD_TIMELINE_AWARDS_NOTIFICATION_30SECS");
          auStack_28[0] = auStack_28[0] & 0xfffffffe;
          if (-1 < *(int *)(param_1 + 0x528)) {
            FUN_009b11d0(*(int *)(param_1 + 0x528));
          }
          puVar11 = &DAT_00d17518;
          iVar10 = -1;
          puVar9 = auStack_28;
          iVar4 = 2;
          *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
          pvVar5 = (void *)FUN_004f3b20();
          uVar3 = FUN_004f3270(pvVar5,iVar4,(byte *)puVar9,iVar10,puVar11);
          *(undefined4 *)(param_1 + 0x528) = uVar3;
          DAT_0104e7a2 = '\x01';
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00797e90 @ 00797e90 ////

void __fastcall FUN_00797e90(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float local_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  void *pvStack_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc15d;
  local_c = ExceptionList;
  local_40 = 0.0;
  ExceptionList = &local_c;
  uVar1 = FUN_0085bb10();
  if ((char)uVar1 != '\0') {
    if (((param_1[0x136] == 0) && (param_1[0x13c] == 0)) && (param_1[0x142] == 0)) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x20;
      local_2c = _malloc(0x20);
      _strncpy(local_2c,"ui/timeline_award.dds",0x15);
      local_28 = 0x15;
      local_2c[0x15] = '\0';
      local_4 = 0;
      uVar7 = FUN_0043b560();
      iVar2 = FUN_0085bb00();
      if (iVar2 <= (int)uVar7) {
        puStack_3c = operator_new(0x3a0);
        local_4._0_1_ = 1;
        if (puStack_3c == (undefined1 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puStack_38 = &stack0xffffffa0;
          puVar3 = FUN_007a2030(puStack_3c,&local_2c,0,0,0x3f800000,0x3f800000);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00794560(param_1 + 0x131,(int)puVar3);
        FUN_007a19e0((void *)param_1[0x136],0);
        (**(code **)(*(int *)param_1[0x136] + 0x74))();
        iVar2 = param_1[0x136];
        puVar3 = (undefined4 *)FUN_0085bae0(&local_40);
        *(undefined4 *)(iVar2 + 0x370) = *puVar3;
        iVar2 = *(int *)param_1[0x136];
        FUN_00790ea0();
        (**(code **)(iVar2 + 100))();
        (**(code **)(*param_1 + 0xc))();
      }
      puStack_38 = operator_new(0x3a0);
      local_4._0_1_ = 2;
      if (puStack_38 == (undefined1 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puStack_3c = &stack0xffffffa0;
        puVar3 = FUN_007a2030(puStack_38,&local_2c,0,0,0x3f800000,0x3f800000);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      (**(code **)(param_1[0x137] + 4))();
      param_1[0x13c] = (int)puVar3;
      (**(code **)param_1[0x137])();
      FUN_007a19e0((void *)param_1[0x13c],1);
      (**(code **)(*(int *)param_1[0x13c] + 0x74))();
      iVar2 = param_1[0x13c];
      puVar3 = (undefined4 *)FUN_0085c530(&local_40);
      *(undefined4 *)(iVar2 + 0x370) = *puVar3;
      iVar2 = *(int *)param_1[0x13c];
      FUN_00790ea0();
      (**(code **)(iVar2 + 100))();
      (**(code **)(*param_1 + 0xc))();
      pvVar4 = operator_new(0x3a0);
      local_20[0] = '\x03';
      if (pvVar4 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_007a2030(pvVar4,(undefined4 *)&stack0xffffffb8,0,0,0x3f800000,0x3f800000);
      }
      local_20[0] = '\0';
      (**(code **)(param_1[0x13d] + 4))();
      param_1[0x142] = (int)puVar3;
      (**(code **)param_1[0x13d])();
      FUN_007a19e0((void *)param_1[0x142],2);
      (**(code **)(*(int *)param_1[0x142] + 0x74))();
      iVar2 = param_1[0x142];
      iVar5 = FUN_0085baf0();
      pfVar6 = (float *)FUN_0043b520(&stack0xffffffa4,(float)iVar5);
      pfVar8 = (float *)&stack0xffffffa8;
      pvVar4 = (void *)FUN_0085c530((float *)&stack0xffffffac);
      puVar3 = (undefined4 *)FUN_0043b600(pvVar4,pfVar8,pfVar6);
      *(undefined4 *)(iVar2 + 0x370) = *puVar3;
      iVar2 = *(int *)param_1[0x142];
      FUN_00790ea0();
      (**(code **)(iVar2 + 100))(1);
      (**(code **)(*param_1 + 0xc))(param_1[0x142],1);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
    if (((DAT_0104a974 == 0) || (*(float *)(DAT_0104a974 + 0x80) == 0.0)) && (param_1[0x148] == 0))
    {
      pvVar4 = operator_new(0x3a0);
      local_4 = 4;
      pvStack_30 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        local_2c = local_20;
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x14;
        _strncpy(local_2c,"ui/awards_stunt.dds",0x13);
        local_28 = 0x13;
        local_2c[0x13] = '\0';
        puStack_34 = &stack0xffffffa0;
        local_4 = CONCAT31(local_4._1_3_,5);
        local_40 = 1.4013e-45;
        puVar3 = FUN_007a2030(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
      }
      local_4 = 6;
      (**(code **)(param_1[0x143] + 4))();
      param_1[0x148] = (int)puVar3;
      (**(code **)param_1[0x143])();
      local_4 = 0xffffffff;
      if ((((uint)local_40 & 1) != 0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      FUN_007a19e0((void *)param_1[0x148],3);
      (**(code **)(*(int *)param_1[0x148] + 0x74))();
      if (param_1[0xfd] == 0) {
        (**(code **)(*(int *)param_1[0x148] + 0x60))();
        (**(code **)(*(int *)param_1[0x148] + 100))();
      }
      else {
        (**(code **)(*(int *)param_1[0x148] + 0x60))();
        (**(code **)(*(int *)param_1[0x148] + 100))();
      }
      (**(code **)(*param_1 + 0xc))();
      (**(code **)(*(int *)param_1[0x148] + 0x20))();
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00798380 @ 00798380 ////

uint __cdecl FUN_00798380(int param_1)

{
  undefined4 *puVar1;
  uint in_EAX;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104e7c4;
  if (DAT_0104e7c4 != &DAT_0104e7d0) {
    do {
      in_EAX = FUN_00ace790((int *)puVar2[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                            &TM::CNoduleQuit::RTTI_Type_Descriptor,0);
      if ((in_EAX != 0) && (*(int *)(in_EAX + 0xa4) == param_1)) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
      puVar1 = puVar2 + 1;
      puVar2 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104e7d0);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_007983f0 @ 007983f0 ////

void __fastcall FUN_007983f0(int param_1)

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


//// FUNCTION FUN_00798420 @ 00798420 ////

void __fastcall FUN_00798420(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d509ac;
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


//// FUNCTION FUN_00798550 @ 00798550 ////

void __fastcall FUN_00798550(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d509bc;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_007985c0 @ 007985c0 ////

void __fastcall FUN_007985c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d509bc;
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


//// FUNCTION FUN_00798650 @ 00798650 ////

void __fastcall FUN_00798650(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d507cc;
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


//// FUNCTION FUN_007986e0 @ 007986e0 ////

void __fastcall FUN_007986e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d507dc;
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


//// FUNCTION FUN_00798770 @ 00798770 ////

void __fastcall FUN_00798770(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d507ec;
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


//// FUNCTION FUN_00798800 @ 00798800 ////

void __fastcall FUN_00798800(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d507fc;
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


//// FUNCTION FUN_00798850 @ 00798850 ////

void __thiscall FUN_00798850(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d5080c;
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


//// FUNCTION FUN_00798890 @ 00798890 ////

void __fastcall FUN_00798890(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5080c;
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


//// FUNCTION FUN_007988e0 @ 007988e0 ////

void __thiscall FUN_007988e0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d5081c;
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


//// FUNCTION FUN_00798920 @ 00798920 ////

void __fastcall FUN_00798920(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5081c;
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


//// FUNCTION FUN_00798ab0 @ 00798ab0 ////

undefined4 * __thiscall FUN_00798ab0(void *this,byte param_1)

{
  FUN_00798650(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00798ad0 @ 00798ad0 ////

undefined4 * __thiscall FUN_00798ad0(void *this,byte param_1)

{
  FUN_007986e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00798af0 @ 00798af0 ////

undefined4 * __thiscall FUN_00798af0(void *this,byte param_1)

{
  FUN_00798770(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00798b10 @ 00798b10 ////

undefined4 * __thiscall FUN_00798b10(void *this,byte param_1)

{
  FUN_00798800(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00798b30 @ 00798b30 ////

undefined4 * __thiscall FUN_00798b30(void *this,byte param_1)

{
  FUN_00798890(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00798b50 @ 00798b50 ////

undefined4 * __thiscall FUN_00798b50(void *this,byte param_1)

{
  FUN_00798920(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00798b70 @ 00798b70 ////

void __fastcall FUN_00798b70(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0073fb40(param_1);
  if ((int *)param_1[0x136] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x136] + 0x2c))();
  }
  if ((int *)param_1[0x13c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13c] + 0x2c))();
  }
  if ((int *)param_1[0x142] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x142] + 0x2c))();
  }
  iVar3 = 0;
  iVar4 = 0;
  while( true ) {
    iVar2 = 0;
    if (param_1[0x122] != 0) {
      iVar2 = (param_1[0x123] - param_1[0x122]) / 0x18;
    }
    if (iVar2 <= iVar3) break;
    piVar1 = *(int **)(param_1[0x122] + 0x14 + iVar4);
    if (piVar1[0xd6] != 0) {
      (**(code **)(*piVar1 + 0x2c))();
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x18;
  }
  return;
}


//// FUNCTION FUN_00798c10 @ 00798c10 ////

void __fastcall FUN_00798c10(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  void *pvVar4;
  float10 fVar5;
  ulonglong uVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;
  float fVar11;
  float local_68;
  float afStack_64 [22];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc17b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00797e90(param_1);
  if (param_1[0x136] != 0) {
    puVar1 = (undefined4 *)FUN_0085bae0(&local_68);
    FUN_00793f50((int)param_1,*puVar1,(float *)0x0);
    (**(code **)(*(int *)param_1[0x136] + 0x5c))(1,param_1);
    iVar2 = param_1[0x136];
    puVar1 = (undefined4 *)FUN_0085bae0((undefined4 *)&stack0xffffff8c);
    *(undefined4 *)(iVar2 + 0x370) = *puVar1;
    iVar2 = *(int *)param_1[0x136];
    fVar5 = FUN_00790ea0();
    (**(code **)(iVar2 + 100))(1,param_1,(float)fVar5);
    (**(code **)(*(int *)param_1[0x136] + 0x20))(DAT_00e59c85);
  }
  if (param_1[0x13c] != 0) {
    puVar1 = (undefined4 *)FUN_0085c530(&local_68);
    FUN_00793f50((int)param_1,*puVar1,(float *)0x0);
    piVar10 = (int *)param_1[0x13c];
    puVar1 = (undefined4 *)FUN_0085c530(&local_68);
    iVar2 = *piVar10;
    FUN_00793f50((int)param_1,*puVar1,(float *)0x0);
    piVar10 = param_1;
    (**(code **)(iVar2 + 0x5c))(1);
    iVar2 = *(int *)param_1[0x13c];
    fVar5 = FUN_00790ea0();
    (**(code **)(iVar2 + 100))(1,param_1,(float)fVar5);
    iVar2 = param_1[0x13c];
    puVar1 = (undefined4 *)FUN_0085c530((float *)&stack0xffffff80);
    *(undefined4 *)(iVar2 + 0x370) = *puVar1;
    if ((DAT_0104e094 != (void *)0x0) && (iVar2 = FUN_00423320((int)DAT_00f87b04), iVar2 == 0)) {
      pfVar3 = (float *)FUN_0073f750(DAT_0104e094,(undefined4 *)&stack0xffffff84);
      fVar11 = *pfVar3 - 5.0;
      if (((float)piVar10 < fVar11) &&
         (((fVar5 = (float10)(**(code **)(*(int *)param_1[0x13c] + 0x10))(),
           (float10)fVar11 < fVar5 + (float10)(float)piVar10 &&
           (*(char *)(param_1[0x13c] + 900) == '\0')) && (200 < *DAT_00f87b04)))) {
        FUN_0041c9c0(&stack0xffffff8c,"HUD_TIMELINE_AWARD_EVENT_GENERATED");
        puVar9 = &DAT_00d17518;
        iVar8 = 0;
        pbVar7 = &stack0xffffff8c;
        iVar2 = 2;
        pvVar4 = (void *)FUN_004f3b20();
        FUN_004f3270(pvVar4,iVar2,pbVar7,iVar8,puVar9);
        *(undefined1 *)(param_1[0x13c] + 900) = 1;
      }
    }
    (**(code **)(*(int *)param_1[0x13c] + 0x20))(DAT_00e59c85);
  }
  if (param_1[0x142] != 0) {
    pvVar4 = operator_new(4);
    uStack_4 = 0;
    if (pvVar4 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_0085c530(afStack_64);
      uVar6 = FUN_0043b560();
      iVar2 = FUN_0085baf0();
      local_68 = (float)((int)uVar6 + iVar2);
      puVar1 = (undefined4 *)FUN_0043b520(pvVar4,(float)(int)local_68);
    }
    uStack_4 = 0xffffffff;
    FUN_00793f50((int)param_1,*puVar1,(float *)0x0);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  iVar2 = FUN_00423320((int)DAT_00f87b04);
  if ((DAT_0104e79c != '\0') && (iVar2 != 3)) {
    if ((void *)param_1[0x13c] != (void *)0x0) {
      FUN_007a2790((void *)param_1[0x13c],'\0');
    }
    DAT_0104e79c = '\0';
  }
  if ((DAT_0104e79d != '\0') && (iVar2 != 3)) {
    if ((void *)param_1[0x148] != (void *)0x0) {
      FUN_007a2790((void *)param_1[0x148],'\0');
    }
    DAT_0104e79d = '\0';
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00799160 @ 00799160 ////

uint __thiscall FUN_00799160(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x4a8);
  while( true ) {
    if (uVar1 == *(uint *)((int)this + 0x4ac)) {
      return uVar1 & 0xffffff00;
    }
    if (*(int *)(*(int *)(uVar1 + 0x14) + 0x374) == param_1) break;
    uVar1 = uVar1 + 0x18;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_007991a0 @ 007991a0 ////

uint __thiscall FUN_007991a0(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x4b8);
  while( true ) {
    if (uVar1 == *(uint *)((int)this + 0x4bc)) {
      return uVar1 & 0xffffff00;
    }
    if (*(int *)(*(int *)(uVar1 + 0x14) + 0x374) == param_1) break;
    uVar1 = uVar1 + 0x18;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_007991e0 @ 007991e0 ////

undefined4 __thiscall FUN_007991e0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)((int)this + 0x4b8);
    if (iVar3 != *(int *)((int)this + 0x4bc)) {
      while( true ) {
        iVar1 = *(int *)(*(int *)(iVar3 + 0x14) + 0x374);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0xa4) == param_1)) break;
        iVar3 = iVar3 + 0x18;
        if (iVar3 == *(int *)((int)this + 0x4bc)) {
          return uVar2;
        }
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x374);
    }
  }
  return uVar2;
}


//// FUNCTION FUN_00799230 @ 00799230 ////

int __thiscall FUN_00799230(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x468);
  while( true ) {
    if (iVar1 == *(int *)((int)this + 0x46c)) {
      return 0;
    }
    if (*(int *)(*(int *)(iVar1 + 0x14) + 0x38c) == param_1) break;
    iVar1 = iVar1 + 0x18;
  }
  return *(int *)(iVar1 + 0x14);
}


//// FUNCTION FUN_00799260 @ 00799260 ////

int __thiscall FUN_00799260(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x478);
  while( true ) {
    if (iVar1 == *(int *)((int)this + 0x47c)) {
      return 0;
    }
    if (*(int *)(*(int *)(iVar1 + 0x14) + 0x38c) == param_1) break;
    iVar1 = iVar1 + 0x18;
  }
  return *(int *)(iVar1 + 0x14);
}


//// FUNCTION FUN_00799350 @ 00799350 ////

void __cdecl FUN_00799350(uint param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined1 *puVar7;
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
  
  if ((DAT_0104e7b8 != 0) &&
     (iVar3 = *(int *)(DAT_0104e7b8 + 0x4a8), iVar3 != *(int *)(DAT_0104e7b8 + 0x4ac))) {
    do {
      pvVar2 = *(void **)(iVar3 + 0x14);
      if ((pvVar2 != (void *)0x0) && (uVar1 = FUN_007a5e90(pvVar2,param_1), (char)uVar1 != '\0')) {
        FUN_007a66f0((int)pvVar2);
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
        local_24 = FUN_009b01a0("HUD_TIMELINE_EVENT_STARQUIT");
        local_28 = local_28 & 0xfffffffe;
        puVar7 = &DAT_00d17518;
        iVar6 = 0;
        puVar5 = &local_28;
        iVar4 = 2;
        pvVar2 = (void *)FUN_004f3b20();
        FUN_004f3270(pvVar2,iVar4,(byte *)puVar5,iVar6,puVar7);
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(DAT_0104e7b8 + 0x4ac));
  }
  return;
}


//// FUNCTION FUN_00799420 @ 00799420 ////

void __cdecl FUN_00799420(uint param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined1 *puVar7;
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
  
  if ((DAT_0104e7b8 != 0) &&
     (iVar3 = *(int *)(DAT_0104e7b8 + 0x4b8), iVar3 != *(int *)(DAT_0104e7b8 + 0x4bc))) {
    do {
      pvVar2 = *(void **)(iVar3 + 0x14);
      if ((pvVar2 != (void *)0x0) && (uVar1 = FUN_007a8b40(pvVar2,param_1), (char)uVar1 != '\0')) {
        FUN_007ab0e0((int)pvVar2);
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
        local_24 = FUN_009b01a0("HUD_TIMELINE_EVENT_STARRETIRE");
        local_28 = local_28 & 0xfffffffe;
        puVar7 = &DAT_00d17518;
        iVar6 = 0;
        puVar5 = &local_28;
        iVar4 = 2;
        pvVar2 = (void *)FUN_004f3b20();
        FUN_004f3270(pvVar2,iVar4,(byte *)puVar5,iVar6,puVar7);
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(DAT_0104e7b8 + 0x4bc));
  }
  return;
}


//// FUNCTION Timeline_OnRadioClipFinished @ 007994f0 ////

void __cdecl Timeline_OnRadioClipFinished(void *param_1,undefined4 param_2,uint param_3)

{
  void *this;
  bool bVar1;
  undefined4 *puVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000024;
  wchar_t *local_8c;
  undefined4 local_88;
  uint local_84;
  wchar_t local_80 [10];
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdc1ab;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((DAT_0104e7b8 != 0) && (ExceptionList = &local_c, DAT_00e59c85 != '\0')) {
    ExceptionList = &local_c;
    FUN_00568790(&local_6c,&param_1);
    local_8c = local_80;
    local_80[0] = L'\0';
    local_88 = 0;
    local_84 = 10;
    FUN_004036d0(&local_8c,local_6c,local_68);
    iVar5 = *(int *)(DAT_0104e7b8 + 0x488);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (iVar5 != *(int *)(DAT_0104e7b8 + 0x48c)) {
      do {
        this = *(void **)(iVar5 + 0x14);
        if (*(void **)((int)this + 0x358) != (void *)0x0) {
          puVar2 = CNoduleEvent_GetName(*(void **)((int)this + 0x358),local_4c);
          FUN_004036d0(&local_8c,(wchar_t *)*puVar2,puVar2[1]);
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c[0]);
          }
          sVar3 = FUN_00ace02d(L"_FUTURE");
          FUN_0040cae0(&local_8c,L"_FUTURE",sVar3);
          puVar2 = CNoduleEvent_GetName(*(void **)((int)this + 0x358),local_2c);
          iVar4 = _wcscmp((wchar_t *)*puVar2,local_6c);
          if ((iVar4 == 0) || (iVar4 = _wcscmp(local_6c,local_8c), iVar4 == 0)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (bVar1) {
            FUN_007a3110(this,in_stack_00000024);
          }
        }
        iVar5 = iVar5 + 0x18;
      } while (iVar5 != *(int *)(DAT_0104e7b8 + 0x48c));
    }
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00799800 @ 00799800 ////

void __cdecl FUN_00799800(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d507cc;
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


//// FUNCTION FUN_00799870 @ 00799870 ////

void __cdecl FUN_00799870(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d507dc;
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


//// FUNCTION FUN_007998e0 @ 007998e0 ////

void __cdecl FUN_007998e0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d507ec;
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


//// FUNCTION FUN_00799950 @ 00799950 ////

void __cdecl FUN_00799950(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d507fc;
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


//// FUNCTION FUN_007999c0 @ 007999c0 ////

void __cdecl FUN_007999c0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d5080c;
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


//// FUNCTION FUN_00799a30 @ 00799a30 ////

void __cdecl FUN_00799a30(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d5081c;
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


//// FUNCTION FUN_00799ad0 @ 00799ad0 ////

void __cdecl FUN_00799ad0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d507cc;
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


//// FUNCTION FUN_00799b70 @ 00799b70 ////

void __cdecl FUN_00799b70(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d507dc;
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


//// FUNCTION FUN_00799c10 @ 00799c10 ////

void __cdecl FUN_00799c10(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d507ec;
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


//// FUNCTION FUN_00799cb0 @ 00799cb0 ////

void __cdecl FUN_00799cb0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d507fc;
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


//// FUNCTION FUN_00799d50 @ 00799d50 ////

void __cdecl FUN_00799d50(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d5080c;
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


//// FUNCTION FUN_00799df0 @ 00799df0 ////

void __cdecl FUN_00799df0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d5081c;
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


//// FUNCTION FUN_00799f80 @ 00799f80 ////

void FUN_00799f80(void)

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
  puStack_8 = &LAB_00cdc1c8;
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


//// FUNCTION FUN_00799ff0 @ 00799ff0 ////

void FUN_00799ff0(void)

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
  puStack_8 = &LAB_00cdc1e8;
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


//// FUNCTION FUN_0079a060 @ 0079a060 ////

void FUN_0079a060(void)

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
  puStack_8 = &LAB_00cdc208;
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


//// FUNCTION FUN_0079a0d0 @ 0079a0d0 ////

void FUN_0079a0d0(void)

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
  puStack_8 = &LAB_00cdc228;
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


//// FUNCTION FUN_0079a140 @ 0079a140 ////

void FUN_0079a140(void)

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
  puStack_8 = &LAB_00cdc248;
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


//// FUNCTION FUN_0079a1b0 @ 0079a1b0 ////

void FUN_0079a1b0(void)

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
  puStack_8 = &LAB_00cdc268;
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


//// FUNCTION FUN_0079a520 @ 0079a520 ////

void __fastcall FUN_0079a520(int param_1)

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
    FUN_00408e00(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0079a5c0 @ 0079a5c0 ////

void FUN_0079a5c0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00798650(param_1);
  }
  return;
}


//// FUNCTION FUN_0079a5f0 @ 0079a5f0 ////

void __fastcall FUN_0079a5f0(int param_1)

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
    FUN_00798650(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0079a640 @ 0079a640 ////

undefined4 * FUN_0079a640(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00799ad0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0079a6c0 @ 0079a6c0 ////

void FUN_0079a6c0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007986e0(param_1);
  }
  return;
}


//// FUNCTION FUN_0079a6f0 @ 0079a6f0 ////

void __fastcall FUN_0079a6f0(int param_1)

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
    FUN_007986e0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0079a740 @ 0079a740 ////

undefined4 * FUN_0079a740(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00799b70(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0079a7c0 @ 0079a7c0 ////

void FUN_0079a7c0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00798770(param_1);
  }
  return;
}


//// FUNCTION FUN_0079a7f0 @ 0079a7f0 ////

void __fastcall FUN_0079a7f0(int param_1)

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
    FUN_00798770(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0079a840 @ 0079a840 ////

undefined4 * FUN_0079a840(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00799c10(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0079a8c0 @ 0079a8c0 ////

void FUN_0079a8c0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00798800(param_1);
  }
  return;
}


//// FUNCTION FUN_0079a8f0 @ 0079a8f0 ////

void __fastcall FUN_0079a8f0(int param_1)

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
    FUN_00798800(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0079a940 @ 0079a940 ////

undefined4 * FUN_0079a940(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00799cb0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0079a9c0 @ 0079a9c0 ////

void FUN_0079a9c0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00798890(param_1);
  }
  return;
}


//// FUNCTION FUN_0079a9f0 @ 0079a9f0 ////

void __fastcall FUN_0079a9f0(int param_1)

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
    FUN_00798890(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0079aa40 @ 0079aa40 ////

undefined4 * FUN_0079aa40(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00799d50(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0079aac0 @ 0079aac0 ////

void FUN_0079aac0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00798920(param_1);
  }
  return;
}


//// FUNCTION FUN_0079aaf0 @ 0079aaf0 ////

void __fastcall FUN_0079aaf0(int param_1)

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
    FUN_00798920(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0079ab40 @ 0079ab40 ////

undefined4 * FUN_0079ab40(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00799df0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0079ab70 @ 0079ab70 ////

void __thiscall FUN_0079ab70(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cdc288;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d507cc;
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
      FUN_00799f80();
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
        iVar3 = FUN_007943a0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_00799800(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00799ad0(puVar5,param_2,(int)&local_34);
      FUN_00799800((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0079a5c0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_00799800((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0079a640(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007969b0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_00799800((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00795350((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007969b0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_0079aea0 @ 0079aea0 ////

void __thiscall FUN_0079aea0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cdc2a8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d507dc;
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
      FUN_00799ff0();
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
        iVar3 = FUN_00794400((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_00799870(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00799b70(puVar5,param_2,(int)&local_34);
      FUN_00799870((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0079a6c0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_00799870((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0079a740(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00796a10(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_00799870((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00795390((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00796a10(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_0079b1d0 @ 0079b1d0 ////

void __thiscall FUN_0079b1d0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cdc2c8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d507ec;
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
      FUN_0079a060();
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
        iVar3 = FUN_00794460((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007998e0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00799c10(puVar5,param_2,(int)&local_34);
      FUN_007998e0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0079a7c0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_007998e0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0079a840(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00796a70(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007998e0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007953d0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00796a70(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_0079b500 @ 0079b500 ////

void __thiscall FUN_0079b500(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cdc2e8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d507fc;
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
      FUN_0079a0d0();
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
        iVar3 = FUN_007944c0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_00799950(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00799cb0(puVar5,param_2,(int)&local_34);
      FUN_00799950((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0079a8c0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_00799950((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0079a940(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00796ad0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_00799950((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00795410((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00796ad0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_0079b830 @ 0079b830 ////

void __thiscall FUN_0079b830(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cdc308;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d5080c;
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
      FUN_0079a140();
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
        iVar3 = FUN_00794520((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007999c0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00799d50(puVar5,param_2,(int)&local_34);
      FUN_007999c0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0079a9c0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_007999c0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0079aa40(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00796b30(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007999c0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00795450((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00796b30(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_0079bb60 @ 0079bb60 ////

void __thiscall FUN_0079bb60(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cdc328;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d5081c;
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
      FUN_0079a1b0();
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
        iVar3 = FUN_00794540((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_00799a30(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00799df0(puVar5,param_2,(int)&local_34);
      FUN_00799a30((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0079aac0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_00799a30((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0079ab40(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00796b90(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_00799a30((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00795490((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00796b90(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_0079bf00 @ 0079bf00 ////

void __fastcall FUN_0079bf00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d50a3c;
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


//// FUNCTION FUN_0079c140 @ 0079c140 ////

void __thiscall FUN_0079c140(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00795220((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_00798770(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0079c200 @ 0079c200 ////

void __thiscall FUN_0079c200(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00795270((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_00798800(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0079c270 @ 0079c270 ////

void __thiscall FUN_0079c270(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_007952c0((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_00798890(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0079c2e0 @ 0079c2e0 ////

void __thiscall FUN_0079c2e0(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00795310((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_00798920(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0079c330 @ 0079c330 ////

undefined4 * __thiscall FUN_0079c330(void *this,byte param_1)

{
  FUN_0079bf00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0079c3a0 @ 0079c3a0 ////

void __thiscall FUN_0079c3a0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0079c3e5;
    }
  }
  iVar1 = 0;
LAB_0079c3e5:
  FUN_0079ab70(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_0079c410 @ 0079c410 ////

void __thiscall FUN_0079c410(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0079c455;
    }
  }
  iVar1 = 0;
LAB_0079c455:
  FUN_0079aea0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_0079c480 @ 0079c480 ////

void __thiscall FUN_0079c480(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0079c4c5;
    }
  }
  iVar1 = 0;
LAB_0079c4c5:
  FUN_0079b1d0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_0079c4f0 @ 0079c4f0 ////

void __thiscall FUN_0079c4f0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0079c535;
    }
  }
  iVar1 = 0;
LAB_0079c535:
  FUN_0079b500(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_0079c560 @ 0079c560 ////

void __thiscall FUN_0079c560(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0079c5a5;
    }
  }
  iVar1 = 0;
LAB_0079c5a5:
  FUN_0079b830(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_0079c5d0 @ 0079c5d0 ////

void __thiscall FUN_0079c5d0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0079c615;
    }
  }
  iVar1 = 0;
LAB_0079c615:
  FUN_0079bb60(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_0079c640 @ 0079c640 ////

void __fastcall FUN_0079c640(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdc460;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d50a64;
  param_1[0x14] = &PTR_FUN_00d50a48;
  local_4 = 0x14;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xd9]);
}


//// FUNCTION FUN_0079d350 @ 0079d350 ////

void __fastcall FUN_0079d350(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x468);
  if (piVar4 != *(int **)(param_1 + 0x46c)) {
    do {
      puVar1 = (undefined4 *)piVar4[5];
      if ((puVar1 != (undefined4 *)0x0) && ((puVar1[0xdd] == 0 || (puVar1[0xe3] == 0)))) {
        FUN_00795180((int)(piVar4 + 6),*(int *)(param_1 + 0x46c),piVar4);
        puVar2 = *(undefined4 **)(param_1 + 0x46c);
        for (puVar3 = puVar2 + -6; puVar3 != puVar2; puVar3 = puVar3 + 6) {
          FUN_00798650(puVar3);
        }
        *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + -0x18;
        piVar4 = puVar1 + 0x12;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*puVar1)(1);
        }
        piVar4 = *(int **)(param_1 + 0x468);
        if (piVar4 == (int *)0x0) {
          return;
        }
        if ((*(int *)(param_1 + 0x46c) - (int)piVar4) / 0x18 == 0) {
          return;
        }
      }
      piVar4 = piVar4 + 6;
    } while (piVar4 != *(int **)(param_1 + 0x46c));
  }
  return;
}


//// FUNCTION FUN_0079d420 @ 0079d420 ////

void __fastcall FUN_0079d420(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_8 [4];
  int iStack_4;
  
  piVar5 = *(int **)(param_1 + 0x478);
  if (piVar5 != *(int **)(param_1 + 0x47c)) {
    do {
      puVar1 = (undefined4 *)piVar5[5];
      if (puVar1 != (undefined4 *)0x0) {
        iVar3 = -0x1e;
        if (puVar1[0xdd] != 0) {
          (**(code **)(*(int *)(puVar1[0xdd] + 0x38) + 0x1c))(local_8);
          uVar6 = FUN_0043b560();
          uVar7 = FUN_0043b560();
          iVar3 = (int)uVar7 - (int)uVar6;
        }
        if ((((puVar1[0xdd] == 0) || (0 < iVar3)) || (iVar3 < -0xf)) || (puVar1[0xe3] == 0)) {
          FUN_007951d0((int)(piVar5 + 6),*(int *)(param_1 + 0x47c),piVar5);
          puVar2 = *(undefined4 **)(param_1 + 0x47c);
          for (puVar4 = puVar2 + -6; puVar4 != puVar2; puVar4 = puVar4 + 6) {
            FUN_007986e0(puVar4);
          }
          *(int *)(param_1 + 0x47c) = *(int *)(param_1 + 0x47c) + -0x18;
          piVar5 = puVar1 + 0x12;
          *piVar5 = *piVar5 + -1;
          if (*piVar5 == 0) {
            (**(code **)*puVar1)(1);
          }
          piVar5 = *(int **)(param_1 + 0x478);
          if (piVar5 == (int *)0x0) {
            return;
          }
          iStack_4 = (*(int *)(param_1 + 0x47c) - (int)piVar5) / 0x18;
          if (iStack_4 == 0) {
            return;
          }
        }
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != *(int **)(param_1 + 0x47c));
  }
  return;
}


//// FUNCTION FUN_0079d530 @ 0079d530 ////

void __fastcall FUN_0079d530(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_4;
  
  piVar2 = *(int **)(param_1 + 0x488);
  local_4 = param_1;
  if (piVar2 != *(int **)(param_1 + 0x48c)) {
    do {
      puVar1 = (undefined4 *)piVar2[5];
      if ((puVar1 != (undefined4 *)0x0) && (puVar1[0xd6] == 0)) {
        FUN_0079c140((void *)(param_1 + 0x484),&local_4,piVar2);
        piVar2 = puVar1 + 0x12;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar1)(1);
        }
        piVar2 = *(int **)(param_1 + 0x488);
        if (*(int *)(param_1 + 0x488) == 0) {
          return;
        }
        local_4 = (*(int *)(param_1 + 0x48c) - *(int *)(param_1 + 0x488)) / 0x18;
        if (local_4 == 0) {
          return;
        }
      }
      piVar2 = piVar2 + 6;
    } while (piVar2 != *(int **)(param_1 + 0x48c));
  }
  return;
}


//// FUNCTION FUN_0079d5c0 @ 0079d5c0 ////

void __fastcall FUN_0079d5c0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_4;
  
  piVar2 = *(int **)(param_1 + 0x498);
  local_4 = param_1;
  if (piVar2 != *(int **)(param_1 + 0x49c)) {
    do {
      puVar1 = (undefined4 *)piVar2[5];
      if ((puVar1 != (undefined4 *)0x0) && (puVar1[0xdd] == 0)) {
        FUN_0079c200((void *)(param_1 + 0x494),&local_4,piVar2);
        piVar2 = puVar1 + 0x12;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar1)(1);
        }
        piVar2 = *(int **)(param_1 + 0x498);
        if (*(int *)(param_1 + 0x498) == 0) {
          return;
        }
        local_4 = (*(int *)(param_1 + 0x49c) - *(int *)(param_1 + 0x498)) / 0x18;
        if (local_4 == 0) {
          return;
        }
      }
      piVar2 = piVar2 + 6;
    } while (piVar2 != *(int **)(param_1 + 0x49c));
  }
  return;
}


//// FUNCTION FUN_0079d650 @ 0079d650 ////

void __fastcall FUN_0079d650(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_4;
  
  piVar2 = *(int **)(param_1 + 0x4a8);
  local_4 = param_1;
  if (piVar2 != *(int **)(param_1 + 0x4ac)) {
    do {
      puVar1 = (undefined4 *)piVar2[5];
      if ((puVar1 != (undefined4 *)0x0) && (puVar1[0xdd] == 0)) {
        FUN_0079c270((void *)(param_1 + 0x4a4),&local_4,piVar2);
        piVar2 = puVar1 + 0x12;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar1)(1);
        }
        piVar2 = *(int **)(param_1 + 0x4a8);
        if (*(int *)(param_1 + 0x4a8) == 0) {
          return;
        }
        local_4 = (*(int *)(param_1 + 0x4ac) - *(int *)(param_1 + 0x4a8)) / 0x18;
        if (local_4 == 0) {
          return;
        }
      }
      piVar2 = piVar2 + 6;
    } while (piVar2 != *(int **)(param_1 + 0x4ac));
  }
  return;
}


//// FUNCTION FUN_0079d6e0 @ 0079d6e0 ////

void __fastcall FUN_0079d6e0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_4;
  
  piVar2 = *(int **)(param_1 + 0x4b8);
  local_4 = param_1;
  if (piVar2 != *(int **)(param_1 + 0x4bc)) {
    do {
      puVar1 = (undefined4 *)piVar2[5];
      if ((puVar1 != (undefined4 *)0x0) && (puVar1[0xdd] == 0)) {
        FUN_0079c2e0((void *)(param_1 + 0x4b4),&local_4,piVar2);
        piVar2 = puVar1 + 0x12;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar1)(1);
        }
        piVar2 = *(int **)(param_1 + 0x4b8);
        if (*(int *)(param_1 + 0x4b8) == 0) {
          return;
        }
        local_4 = (*(int *)(param_1 + 0x4bc) - *(int *)(param_1 + 0x4b8)) / 0x18;
        if (local_4 == 0) {
          return;
        }
      }
      piVar2 = piVar2 + 6;
    } while (piVar2 != *(int **)(param_1 + 0x4bc));
  }
  return;
}


//// FUNCTION FUN_0079d780 @ 0079d780 ////

void __thiscall FUN_0079d780(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00799ad0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0079c3a0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0079d810 @ 0079d810 ////

void __thiscall FUN_0079d810(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00799b70(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0079c410(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0079d8a0 @ 0079d8a0 ////

void __thiscall FUN_0079d8a0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00799c10(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0079c480(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0079d930 @ 0079d930 ////

void __thiscall FUN_0079d930(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00799cb0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0079c4f0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0079d9c0 @ 0079d9c0 ////

void __thiscall FUN_0079d9c0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00799d50(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0079c560(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0079da50 @ 0079da50 ////

void __thiscall FUN_0079da50(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00799df0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0079c5d0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0079dae0 @ 0079dae0 ////

undefined4 * __thiscall FUN_0079dae0(void *this,byte param_1)

{
  FUN_0079c640(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0079db00 @ 0079db00 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0079db00(int param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 local_c;
  float fStack_8;
  float fStack_4;
  
  local_c = 0xc61c4000;
  piVar4 = DAT_0104e7c4;
  if (DAT_0104e7c4 != &DAT_0104e7d0) {
    do {
      piVar1 = (int *)piVar4[2];
      cVar2 = (**(code **)(*piVar1 + 0x20))(param_1,&local_c);
      (**(code **)(*piVar1 + 8))(&stack0xfffffff0);
      cVar3 = (**(code **)(*piVar1 + 0x2c))();
      if (cVar3 == '\0') {
        fVar6 = FUN_0043b710(&fStack_8);
        fStack_4 = (float)fVar6;
        fVar6 = FUN_0043b710((float *)&DAT_00e4fa4c);
        if (((fVar6 - (float10)_DAT_00e59c7c <= (float10)fStack_4) && (cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*piVar1 + 0x30))(), cVar2 == '\0')) goto LAB_0079dbe3;
        piVar5 = (int *)piVar4[1];
        if (piVar5 != (int *)0x0) {
          *piVar5 = *piVar4;
        }
        if (*piVar4 != 0) {
          *(int *)(*piVar4 + 4) = piVar4[1];
        }
        *piVar4 = 0;
        piVar4[1] = 0;
        (**(code **)*piVar1)(1);
        FUN_0079d5c0(param_1);
        FUN_0079d530(param_1);
        FUN_0079d350(param_1);
        FUN_0079d420(param_1);
        FUN_0079d650(param_1);
        FUN_0079d6e0(param_1);
      }
      else {
LAB_0079dbe3:
        piVar5 = (int *)piVar4[1];
      }
      piVar4 = piVar5;
    } while (piVar5 != &DAT_0104e7d0);
  }
  return;
}


//// FUNCTION Timeline_CreateNoduleIcons @ 0079dc00 ////

void __fastcall Timeline_CreateNoduleIcons(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  float10 fVar9;
  int *local_10c;
  int *local_108;
  undefined **ppuStack_f4;
  int iStack_f0;
  int *piStack_ec;
  undefined ***pppuStack_e8;
  int *piStack_e0;
  undefined **ppuStack_dc;
  int iStack_d8;
  int *piStack_d4;
  undefined ***pppuStack_d0;
  int *piStack_c8;
  undefined **ppuStack_c4;
  int iStack_c0;
  int *piStack_bc;
  undefined ***pppuStack_b8;
  int *piStack_b0;
  undefined **ppuStack_ac;
  int iStack_a8;
  int *piStack_a4;
  undefined ***pppuStack_a0;
  int *piStack_98;
  char *local_94;
  undefined4 local_90;
  uint local_8c;
  char local_88 [20];
  char *local_74;
  undefined4 local_70;
  uint local_6c;
  char local_68 [28];
  undefined4 auStack_4c [4];
  undefined4 auStack_3c [6];
  undefined4 auStack_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc541;
  local_c = ExceptionList;
  local_10c = (int *)0x0;
  ExceptionList = &local_c;
  FUN_0079d350((int)param_1);
  FUN_0079d420((int)param_1);
  FUN_0079d530((int)param_1);
  FUN_0079d5c0((int)param_1);
  FUN_0079d650((int)param_1);
  FUN_0079d6e0((int)param_1);
  if (DAT_0104e72c != '\0') {
    FUN_0078f5b0();
  }
  local_108 = DAT_0104e7c4;
  if (DAT_0104e7c4 != &DAT_0104e7d0) {
    do {
      iVar1 = FUN_00ace790((int *)local_108[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                           &TM::CNoduleMovie::RTTI_Type_Descriptor,0);
      piVar2 = (int *)FUN_00ace790((int *)local_108[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                                   &TM::CNoduleResearchPack::RTTI_Type_Descriptor,0);
      puVar3 = (undefined4 *)
               FUN_00ace790((int *)local_108[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                            &TM::CNoduleEvent::RTTI_Type_Descriptor,0);
      iVar4 = FUN_00ace790((int *)local_108[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                           &TM::CNodulePress::RTTI_Type_Descriptor,0);
      piVar5 = (int *)FUN_00ace790((int *)local_108[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                                   &TM::CNoduleQuit::RTTI_Type_Descriptor,0);
      iVar6 = FUN_00ace790((int *)local_108[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                           &TM::CNoduleRetire::RTTI_Type_Descriptor,0);
      if ((iVar1 == 0) || (*(int *)(iVar1 + 0xbc) == 0)) {
        if ((piVar2 == (int *)0x0) || (piVar2[0x23] == 0)) {
          if (puVar3 == (undefined4 *)0x0) {
            if (iVar4 == 0) {
              if (piVar5 == (int *)0x0) {
                if ((iVar6 != 0) && (uVar8 = FUN_007991a0(param_1,iVar6), (char)uVar8 == '\0')) {
                  pvVar7 = operator_new(0x434);
                  local_4 = 0xe;
                  if (pvVar7 == (void *)0x0) {
                    piVar2 = (int *)0x0;
                  }
                  else {
                    piVar2 = FUN_007a9570(pvVar7,iVar6);
                  }
                  local_4 = 0xffffffff;
                  (**(code **)(*piVar2 + 0x74))();
                  puVar3 = (undefined4 *)(**(code **)(*local_10c + 8))();
                  iVar1 = *piVar2;
                  FUN_00793f50((int)param_1,*puVar3,(float *)0x0);
                  (**(code **)(iVar1 + 0x5c))();
                  (**(code **)(*piVar2 + 100))(1,param_1,DAT_00e59bb0);
                  (**(code **)(*param_1 + 0xc))(piVar2,1);
                  FUN_00797560(param_1);
                  FUN_007988e0(auStack_24,(int)piVar2);
                  local_4 = 0xf;
                  FUN_0079da50(param_1 + 0x12d,(int)auStack_24);
                  local_4 = 0xffffffff;
                  FUN_00798920(auStack_24);
                }
              }
              else {
                uVar8 = FUN_00799160(param_1,(int)piVar5);
                if ((char)uVar8 == '\0') {
                  pvVar7 = operator_new(0x3a4);
                  local_4 = 0xc;
                  if (pvVar7 == (void *)0x0) {
                    piVar2 = (int *)0x0;
                  }
                  else {
                    piVar2 = FUN_007a5fa0(pvVar7,(int)piVar5);
                  }
                  local_4 = 0xffffffff;
                  (**(code **)(*piVar2 + 0x74))();
                  puVar3 = (undefined4 *)(**(code **)(*local_108 + 8))();
                  iVar1 = *piVar2;
                  FUN_00793f50((int)param_1,*puVar3,(float *)0x0);
                  (**(code **)(iVar1 + 0x5c))();
                  (**(code **)(*piVar2 + 100))(1,param_1,DAT_00e59bb0);
                  (**(code **)(*param_1 + 0xc))(piVar2,1);
                  FUN_00797560(param_1);
                  FUN_00798850(auStack_3c,(int)piVar2);
                  local_4 = 0xd;
                  FUN_0079d9c0(param_1 + 0x129,(int)auStack_3c);
                  local_4 = 0xffffffff;
                  FUN_00798890(auStack_3c);
                }
              }
            }
            else {
              for (iVar1 = param_1[0x126]; iVar1 != param_1[0x127]; iVar1 = iVar1 + 0x18) {
                if (*(int *)(*(int *)(iVar1 + 0x14) + 0x374) == iVar4) goto LAB_0079e588;
              }
              piVar2 = operator_new(0x3a4);
              local_4 = 10;
              if (piVar2 == (int *)0x0) {
                piVar5 = (int *)0x0;
              }
              else {
                piVar5 = FUN_007a5160(piVar2,iVar4);
              }
              local_4 = 0xffffffff;
              (**(code **)(*piVar5 + 0x74))();
              puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))();
              iVar1 = *piVar5;
              FUN_00793f50((int)param_1,*puVar3,(float *)0x0);
              (**(code **)(iVar1 + 0x5c))();
              (**(code **)(*piVar5 + 100))(1,param_1,DAT_00e59bb0);
              (**(code **)(*param_1 + 0xc))(piVar5,1);
              FUN_00797560(param_1);
              piStack_bc = piVar5 + 6;
              pppuStack_b8 = &ppuStack_c4;
              ppuStack_c4 = &PTR_LAB_00d507fc;
              iStack_c0 = *piStack_bc;
              *(int **)(*piStack_bc + 4) = &iStack_c0;
              *piStack_bc = (int)&iStack_c0;
              local_4 = 0xb;
              piStack_b0 = piVar5;
              FUN_0079d930(param_1 + 0x125,(int)&ppuStack_c4);
              local_4 = 0xffffffff;
              FUN_00798800(&ppuStack_c4);
            }
          }
          else {
            for (iVar1 = param_1[0x122]; iVar1 != param_1[0x123]; iVar1 = iVar1 + 0x18) {
              if (*(undefined4 **)(*(int *)(iVar1 + 0x14) + 0x358) == puVar3) goto LAB_0079e588;
            }
            pvVar7 = operator_new(0x3ac);
            local_4 = 8;
            if (pvVar7 == (void *)0x0) {
              piVar2 = (int *)0x0;
            }
            else {
              piVar2 = WTimelineEventIcon_Constructor(pvVar7,puVar3);
            }
            local_4 = 0xffffffff;
            (**(code **)(*piVar2 + 0x74))();
            puVar3 = (undefined4 *)(**(code **)(*piVar5 + 8))();
            iVar1 = *piVar2;
            FUN_00793f50((int)param_1,*puVar3,(float *)0x0);
            (**(code **)(iVar1 + 0x5c))();
            (**(code **)(*piVar2 + 100))(1,param_1,DAT_00e59bb0 - 16.0);
            (**(code **)(*param_1 + 0xc))(piVar2,1);
            FUN_00797560(param_1);
            piStack_d4 = piVar2 + 6;
            pppuStack_d0 = &ppuStack_dc;
            ppuStack_dc = &PTR_LAB_00d507ec;
            iStack_d8 = *piStack_d4;
            *(int **)(*piStack_d4 + 4) = &iStack_d8;
            *piStack_d4 = (int)&iStack_d8;
            local_4 = 9;
            piStack_c8 = piVar2;
            FUN_0079d8a0(param_1 + 0x121,(int)&ppuStack_dc);
            local_4 = 0xffffffff;
            FUN_00798770(&ppuStack_dc);
          }
        }
        else {
          for (iVar1 = param_1[0x11e]; iVar1 != param_1[0x11f]; iVar1 = iVar1 + 0x18) {
            if (*(int **)(*(int *)(iVar1 + 0x14) + 0x38c) == piVar2) goto LAB_0079e588;
          }
          pvVar7 = operator_new(0x3bc);
          piVar5 = (int *)0x0;
          local_4 = 4;
          if (pvVar7 != (void *)0x0) {
            local_94 = local_88;
            local_88[0] = '\0';
            local_90 = 0;
            local_8c = 0x20;
            local_94 = _malloc(0x20);
            _strncpy(local_94,"ui/timeline_re_costume.dds",0x1a);
            local_90 = 0x1a;
            local_94[0x1a] = '\0';
            local_10c = (int *)((uint)local_10c | 2);
            local_4 = CONCAT31(local_4._1_3_,5);
            piVar5 = FUN_007a7180(pvVar7,&local_94,0,0,0x3f800000,0x3f800000,(void *)piVar2[0x23],
                                  (undefined1 *)piVar2);
          }
          local_4 = 0xffffffff;
          if ((((uint)local_10c & 2) != 0) &&
             (local_10c = (int *)((uint)local_10c & 0xfffffffd), 0x14 < local_8c)) {
                    /* WARNING: Subroutine does not return */
            _free(local_94);
          }
          (**(code **)(*piVar5 + 0x74))();
          puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))();
          iVar1 = *piVar5;
          FUN_00793f50((int)param_1,*puVar3,(float *)0x0);
          (**(code **)(iVar1 + 0x5c))();
          iVar1 = *piVar5;
          fVar9 = FUN_00790ea0();
          (**(code **)(iVar1 + 100))(1,param_1,(float)fVar9);
          (**(code **)(*param_1 + 0xc))(piVar5,1);
          FUN_00797560(param_1);
          piStack_a4 = piVar5 + 6;
          pppuStack_a0 = &ppuStack_ac;
          ppuStack_ac = &PTR_LAB_00d507dc;
          iStack_a8 = *piStack_a4;
          *(int **)(*piStack_a4 + 4) = &iStack_a8;
          *piStack_a4 = (int)&iStack_a8;
          local_4 = 7;
          piStack_98 = piVar5;
          FUN_0079d810(param_1 + 0x11d,(int)&ppuStack_ac);
          local_4 = 0xffffffff;
          FUN_007986e0(&ppuStack_ac);
        }
      }
      else {
        for (iVar4 = param_1[0x11a]; iVar4 != param_1[0x11b]; iVar4 = iVar4 + 0x18) {
          if (*(int *)(*(int *)(iVar4 + 0x14) + 0x38c) == iVar1) goto LAB_0079e588;
        }
        pvVar7 = operator_new(0x39c);
        piVar2 = (int *)0x0;
        local_4 = 0;
        if (pvVar7 != (void *)0x0) {
          local_74 = local_68;
          local_68[0] = '\0';
          local_70 = 0;
          local_6c = 0x20;
          local_74 = _malloc(0x20);
          _strncpy(local_74,"ui/timeline_film.dds",0x14);
          local_70 = 0x14;
          local_74[0x14] = '\0';
          local_10c = (int *)((uint)local_10c | 1);
          local_4 = CONCAT31(local_4._1_3_,1);
          piVar2 = FUN_007a4680(pvVar7,&local_74,0,0,0x3f800000,0x3f800000,*(int *)(iVar1 + 0xbc),
                                iVar1);
        }
        local_4 = 0xffffffff;
        if ((((uint)local_10c & 1) != 0) &&
           (local_10c = (int *)((uint)local_10c & 0xfffffffe), 0x14 < local_6c)) {
                    /* WARNING: Subroutine does not return */
          _free(local_74);
        }
        (**(code **)(*piVar2 + 0x74))();
        puVar3 = (undefined4 *)FUN_005b8c50(*(void **)(iVar1 + 0xbc),auStack_4c);
        iVar1 = *piVar2;
        FUN_00793f50((int)param_1,*puVar3,(float *)0x0);
        (**(code **)(iVar1 + 0x5c))();
        (**(code **)(*piVar2 + 100))(1,param_1);
        (**(code **)(*param_1 + 0xc))(piVar2,1);
        FUN_00797560(param_1);
        piStack_ec = piVar2 + 6;
        pppuStack_e8 = &ppuStack_f4;
        ppuStack_f4 = &PTR_LAB_00d507cc;
        iStack_f0 = *piStack_ec;
        *(int **)(*piStack_ec + 4) = &iStack_f0;
        *piStack_ec = (int)&iStack_f0;
        local_4 = 3;
        piStack_e0 = piVar2;
        FUN_0079d780(param_1 + 0x119,(int)&ppuStack_f4);
        local_4 = 0xffffffff;
        FUN_00798650(&ppuStack_f4);
      }
LAB_0079e588:
      local_108 = (int *)local_108[1];
    } while (local_108 != &DAT_0104e7d0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0079e5c0 @ 0079e5c0 ////

void __thiscall FUN_0079e5c0(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdc558;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d507fc;
  local_10 = param_1;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    local_1c = (int *)(param_1 + 0x18);
    local_20 = *local_1c;
    ExceptionList = &local_c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  FUN_0079d930((void *)((int)this + 0x494),(int)&local_24);
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0079e670 @ 0079e670 ////

int * __thiscall FUN_0079e670(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  float10 fVar3;
  undefined **ppuStack_3c;
  void *pvStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc583;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)((int)this + 0x4a8);
  if (iVar1 != *(int *)((int)this + 0x4ac)) {
    do {
      piVar2 = *(int **)(iVar1 + 0x14);
      if ((int *)piVar2[0xdd] == param_1) {
        iVar1 = *piVar2;
        ExceptionList = &pvStack_c;
        FUN_00790ea0();
        ppuStack_3c = this;
        (**(code **)(iVar1 + 100))(1);
        fVar3 = (float10)(**(code **)(*param_1 + 0x10))();
        *(float *)((int)this + 0x348) = (float)fVar3;
        if (fVar3 == (float10)-1.0) {
          *(undefined4 *)((int)this + 0x348) = 0xc2000000;
        }
        (**(code **)(*piVar2 + 0x5c))(1,this,*(undefined4 *)((int)this + 0x348));
        ExceptionList = pvStack_24;
        return piVar2;
      }
      iVar1 = iVar1 + 0x18;
    } while (iVar1 != *(int *)((int)this + 0x4ac));
  }
  ppuStack_3c = (undefined **)0x79e6c2;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0x3a4);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    ppuStack_3c = (undefined **)0x79e6db;
    piVar2 = FUN_007a5fa0(this_00,(int)param_1);
  }
  ppuStack_3c = (undefined **)0x41800000;
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x74))();
  fVar3 = (float10)(**(code **)(*param_1 + 0x10))();
  *(float *)((int)this + 0x348) = (float)fVar3;
  if (fVar3 == (float10)-1.0) {
    *(undefined4 *)((int)this + 0x348) = 0xc2000000;
  }
  (**(code **)(*piVar2 + 0x5c))(1,this,*(undefined4 *)((int)this + 0x348));
  iVar1 = *piVar2;
  fVar3 = FUN_00790ea0();
  (**(code **)(iVar1 + 100))(1,this,(float)fVar3);
  (**(code **)(*(int *)this + 0xc))(piVar2,1);
  FUN_00797560(this);
  ppuStack_3c = &PTR_LAB_00d5080c;
  *(undefined1 **)(piVar2[6] + 4) = &stack0xffffffc8;
  piVar2[6] = (int)&stack0xffffffc8;
  FUN_0079d9c0((void *)((int)this + 0x4a4),(int)&ppuStack_3c);
  FUN_00798890(&ppuStack_3c);
  ExceptionList = pvStack_24;
  return piVar2;
}


//// FUNCTION FUN_0079e820 @ 0079e820 ////

int * __thiscall FUN_0079e820(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined **ppuStack_3c;
  void *pvStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc5a3;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)((int)this + 0x4b8);
  if (iVar1 != *(int *)((int)this + 0x4bc)) {
    do {
      piVar2 = *(int **)(iVar1 + 0x14);
      if ((int *)piVar2[0xdd] == param_1) {
        iVar1 = *piVar2;
        ExceptionList = &pvStack_c;
        FUN_00790ea0();
        ppuStack_3c = this;
        (**(code **)(iVar1 + 100))(1);
        fVar4 = (float10)(**(code **)(*param_1 + 0x10))();
        *(float *)((int)this + 0x348) = (float)fVar4;
        if (fVar4 == (float10)-1.0) {
          *(undefined4 *)((int)this + 0x348) = 0xc2000000;
        }
        (**(code **)(*piVar2 + 0x5c))(1,this,*(undefined4 *)((int)this + 0x348));
        ExceptionList = pvStack_24;
        return piVar2;
      }
      iVar1 = iVar1 + 0x18;
    } while (iVar1 != *(int *)((int)this + 0x4bc));
  }
  ppuStack_3c = (undefined **)0x79e872;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0x434);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    ppuStack_3c = (undefined **)0x79e88b;
    piVar2 = FUN_007a9570(this_00,(int)param_1);
  }
  ppuStack_3c = (undefined **)0x41800000;
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x74))();
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(&local_4);
  fVar4 = FUN_00793f50((int)this,*puVar3,(float *)0x0);
  *(float *)((int)this + 0x348) = (float)fVar4;
  if (fVar4 == (float10)-1.0) {
    *(undefined4 *)((int)this + 0x348) = 0xc2000000;
  }
  (**(code **)(*piVar2 + 0x5c))(1,this,*(undefined4 *)((int)this + 0x348));
  iVar1 = *piVar2;
  fVar4 = FUN_00790ea0();
  (**(code **)(iVar1 + 100))(1,this,(float)fVar4);
  (**(code **)(*(int *)this + 0xc))(piVar2,1);
  FUN_00797560(this);
  ppuStack_3c = &PTR_LAB_00d5081c;
  *(undefined1 **)(piVar2[6] + 4) = &stack0xffffffc8;
  piVar2[6] = (int)&stack0xffffffc8;
  FUN_0079da50((void *)((int)this + 0x4b4),(int)&ppuStack_3c);
  FUN_00798920(&ppuStack_3c);
  ExceptionList = pvStack_24;
  return piVar2;
}


//// FUNCTION FUN_0079e9e0 @ 0079e9e0 ////

int * __thiscall FUN_0079e9e0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  int *piVar3;
  undefined4 *puVar4;
  void *unaff_EBX;
  float10 fVar5;
  undefined **ppuStack_40;
  void *pvStack_3c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined *local_4;
  
  local_4 = (undefined *)0xffffffff;
  puStack_8 = &LAB_00cdc5c3;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)((int)this + 0x498);
  if (iVar2 != *(int *)((int)this + 0x49c)) {
    do {
      piVar3 = *(int **)(iVar2 + 0x14);
      if ((int *)piVar3[0xdd] == param_1) {
        iVar2 = *piVar3;
        ExceptionList = &pvStack_c;
        FUN_00790ea0();
        ppuStack_40 = (undefined **)0x1;
        pvStack_3c = this;
        (**(code **)(iVar2 + 100))();
        puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(&puStack_8);
        fVar5 = FUN_00793f50((int)this,*puVar4,(float *)0x0);
        *(float *)((int)this + 0x348) = (float)fVar5;
        if (fVar5 == (float10)-1.0) {
          *(undefined4 *)((int)this + 0x348) = 0xc2000000;
        }
        (**(code **)(*piVar3 + 0x5c))(1,this,*(undefined4 *)((int)this + 0x348));
        ExceptionList = unaff_EBX;
        return piVar3;
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)((int)this + 0x49c));
  }
  pvStack_3c = (void *)0x79ea32;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0x3a4);
  local_4 = (undefined *)0x0;
  if (this_00 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    pvStack_3c = (void *)0x79ea4b;
    piVar3 = FUN_007a5160(this_00,(int)param_1);
  }
  pvStack_3c = (void *)0x41800000;
  local_4 = (undefined *)0xffffffff;
  ppuStack_40 = (undefined **)0x79eacc;
  (**(code **)(*piVar3 + 0x74))();
  ppuStack_40 = &local_4;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))();
  fVar5 = FUN_00793f50((int)this,*puVar4,(float *)0x0);
  *(float *)((int)this + 0x348) = (float)fVar5;
  if (fVar5 == (float10)-1.0) {
    *(undefined4 *)((int)this + 0x348) = 0xc2000000;
  }
  (**(code **)(*piVar3 + 0x5c))(1,this,*(undefined4 *)((int)this + 0x348));
  iVar2 = *piVar3;
  fVar5 = FUN_00790ea0();
  (**(code **)(iVar2 + 100))(1,this,(float)fVar5);
  (**(code **)(*(int *)this + 0xc))(piVar3,1);
  FUN_00797560(this);
  piVar1 = piVar3 + 6;
  ppuStack_40 = &PTR_LAB_00d507fc;
  pvStack_3c = (void *)*piVar1;
  *(void ***)(*piVar1 + 4) = &pvStack_3c;
  *piVar1 = (int)&pvStack_3c;
  FUN_0079d930((void *)((int)this + 0x494),(int)&ppuStack_40);
  FUN_00798800(&ppuStack_40);
  ExceptionList = unaff_EBX;
  return piVar3;
}


//// FUNCTION FUN_0079ebb0 @ 0079ebb0 ////

int * __thiscall FUN_0079ebb0(void *this,int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  undefined4 *puVar6;
  uint unaff_EBX;
  float10 fVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *unaff_retaddr;
  char **ppcVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *local_58 [2];
  undefined **ppuStack_50;
  int iStack_4c;
  int *piStack_48;
  undefined ***pppuStack_44;
  int *piStack_3c;
  char *pcStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  char acStack_2c [28];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc5fc;
  pvStack_c = ExceptionList;
  local_58[0] = (undefined1 *)0x0;
  iVar3 = *(int *)((int)this + 0x478);
  if (iVar3 != *(int *)((int)this + 0x47c)) {
    do {
      piVar2 = *(int **)(iVar3 + 0x14);
      if ((int *)piVar2[0xe3] == param_1) {
        iVar3 = *piVar2;
        ExceptionList = &pvStack_c;
        FUN_00790ea0();
        (**(code **)(iVar3 + 100))();
        fVar7 = (float10)(**(code **)(*param_1 + 0x10))();
        *(float *)((int)this + 0x348) = (float)fVar7;
        if (fVar7 == (float10)-1.0) {
          *(undefined4 *)((int)this + 0x348) = 0xc2000000;
        }
        (**(code **)(*piVar2 + 0x5c))();
        if (DAT_0104e094 == (void *)0x0) {
          ExceptionList = pvStack_10;
          return unaff_retaddr;
        }
        iVar3 = FUN_00423320((int)DAT_00f87b04);
        if (iVar3 != 0) {
          ExceptionList = pvStack_10;
          return unaff_retaddr;
        }
        pfVar5 = (float *)FUN_0073f750(DAT_0104e094,local_58);
        fVar1 = *pfVar5;
        if (fVar1 - 5.0 <= *(float *)((int)this + 0x348)) {
          ExceptionList = pvStack_10;
          return unaff_retaddr;
        }
        fVar7 = (float10)(**(code **)(*piVar2 + 0x10))();
        if (fVar7 + (float10)*(float *)((int)this + 0x348) <= (float10)(fVar1 - 5.0)) {
          ExceptionList = pvStack_10;
          return unaff_retaddr;
        }
        if (*(char *)((int)piVar2 + 0x3ba) != '\0') {
          ExceptionList = pvStack_10;
          return unaff_retaddr;
        }
        if (*DAT_00f87b04 < 0xc9) {
          ExceptionList = pvStack_10;
          return unaff_retaddr;
        }
        FUN_0041c9c0(&pcStack_38,"HUD_TIMELINE_RESEARCH_EVENT_GENERATED");
        puVar12 = &DAT_00d17518;
        iVar11 = 0;
        ppcVar10 = &pcStack_38;
        pcStack_38 = (char *)((uint)pcStack_38 & 0xfffffffe);
        iVar3 = 2;
        pvVar4 = (void *)FUN_004f3b20();
        FUN_004f3270(pvVar4,iVar3,(byte *)ppcVar10,iVar11,puVar12);
        *(undefined1 *)((int)piVar2 + 0x3ba) = 1;
        ExceptionList = pvStack_10;
        return unaff_retaddr;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0x47c));
  }
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 8))();
  uVar8 = FUN_0043b560();
  uVar9 = FUN_0043b560();
  if ((int)uVar8 - (int)uVar9 < 0xf) {
    pvVar4 = operator_new(0x3bc);
    puStack_8 = (undefined1 *)0x0;
    if (pvVar4 == (void *)0x0) {
      unaff_retaddr = (int *)0x0;
    }
    else {
      pcStack_38 = acStack_2c;
      acStack_2c[0] = '\0';
      uStack_34 = 0;
      uStack_30 = 0x20;
      pcStack_38 = _malloc(0x20);
      _strncpy(pcStack_38,"ui/timeline_re_costume.dds",0x1a);
      uStack_34 = 0x1a;
      pcStack_38[0x1a] = '\0';
      local_58[0] = &stack0xffffff7c;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
      unaff_EBX = 1;
      unaff_retaddr =
           FUN_007a7180(pvVar4,&pcStack_38,0,0,0x3f800000,0x3f800000,(void *)param_1[0x23],
                        (undefined1 *)param_1);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    if (((unaff_EBX & 1) != 0) && (0x14 < uStack_30)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_38);
    }
    (**(code **)(*unaff_retaddr + 0x74))();
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))();
    fVar7 = FUN_00793f50((int)this,*puVar6,(float *)0x0);
    *(float *)((int)this + 0x348) = (float)fVar7;
    if (fVar7 == (float10)-1.0) {
      *(undefined4 *)((int)this + 0x348) = 0xc2000000;
    }
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))();
    iVar3 = *unaff_retaddr;
    FUN_00793f50((int)this,*puVar6,(float *)0x0);
    (**(code **)(iVar3 + 0x5c))(1);
    iVar3 = *unaff_retaddr;
    fVar7 = FUN_00790ea0();
    (**(code **)(iVar3 + 100))(1,this,(float)fVar7);
    (**(code **)(*(int *)this + 0xc))(unaff_retaddr,1);
    FUN_00797560(this);
    piStack_48 = unaff_retaddr + 6;
    pppuStack_44 = &ppuStack_50;
    ppuStack_50 = &PTR_LAB_00d507dc;
    iStack_4c = *piStack_48;
    *(int **)(*piStack_48 + 4) = &iStack_4c;
    *piStack_48 = (int)&iStack_4c;
    puStack_8 = (undefined1 *)0x3;
    piStack_3c = unaff_retaddr;
    FUN_0079d810((void *)((int)this + 0x474),(int)&ppuStack_50);
    FUN_007986e0(&ppuStack_50);
  }
  ExceptionList = pvStack_10;
  return unaff_retaddr;
}


//// FUNCTION CNoduleEvent_SpawnOrUpdateIcon @ 0079ef30 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall CNoduleEvent_SpawnOrUpdateIcon(void *this,int *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float10 fVar6;
  uint *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined **ppuStack_68;
  uint auStack_50 [10];
  void *pvStack_28;
  undefined4 uStack_20;
  float fStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc623;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)((int)this + 0x488);
  if (iVar1 != *(int *)((int)this + 0x48c)) {
    do {
      piVar3 = *(int **)(iVar1 + 0x14);
      if ((int *)piVar3[0xd6] == param_1) {
        ExceptionList = &pvStack_c;
        ppuStack_68 = this;
        (**(code **)(*piVar3 + 100))();
        puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))();
        fVar6 = FUN_00793f50((int)this,*puVar5,(float *)0x0);
        *(float *)((int)this + 0x348) = (float)fVar6;
        if (fVar6 == (float10)-1.0) {
          *(undefined4 *)((int)this + 0x348) = 0xc2000000;
        }
        else {
          *(float *)((int)this + 0x348) = (float)(fVar6 - (float10)16.0);
        }
        (**(code **)(*piVar3 + 0x5c))(1,this,*(undefined4 *)((int)this + 0x348));
        if (DAT_0104e094 == (void *)0x0) {
          ExceptionList = pvStack_28;
          return piVar3;
        }
        iVar1 = FUN_00423320((int)DAT_00f87b04);
        if (iVar1 != 0) {
          ExceptionList = pvStack_28;
          return piVar3;
        }
        pfVar4 = (float *)FUN_0073f750(DAT_0104e094,(undefined4 *)&stack0xffffff90);
        fStack_18 = *pfVar4 - 29.0;
        if (fStack_18 <= *(float *)((int)this + 0x348)) {
          ExceptionList = pvStack_28;
          return piVar3;
        }
        fVar6 = (float10)(**(code **)(*piVar3 + 0x10))();
        if (fVar6 * (float10)0.25 + (float10)*(float *)((int)this + 0x348) <= (float10)fStack_18) {
          ExceptionList = pvStack_28;
          return piVar3;
        }
        if ((char)piVar3[0xda] != '\0') {
          ExceptionList = pvStack_28;
          return piVar3;
        }
        if (*DAT_00f87b04 < 0xc9) {
          ExceptionList = pvStack_28;
          return piVar3;
        }
        FUN_0041c9c0(auStack_50,"HUD_TIMELINE_WORLD_EVENT_GENERATED");
        puVar9 = &DAT_00d17518;
        iVar8 = 0;
        puVar7 = auStack_50;
        auStack_50[0] = auStack_50[0] & 0xfffffffe;
        iVar1 = 2;
        pvVar2 = (void *)FUN_004f3b20();
        FUN_004f3270(pvVar2,iVar1,(byte *)puVar7,iVar8,puVar9);
        *(undefined1 *)(piVar3 + 0xda) = 1;
        ExceptionList = pvStack_28;
        return piVar3;
      }
      iVar1 = iVar1 + 0x18;
    } while (iVar1 != *(int *)((int)this + 0x48c));
  }
  ppuStack_68 = (undefined **)0x79ef82;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x3ac);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    ppuStack_68 = (undefined **)0x79efa1;
    piVar3 = WTimelineEventIcon_Constructor(pvVar2,param_1);
  }
  ppuStack_68 = (undefined **)0x42800000;
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x74))();
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))();
  fVar6 = FUN_00793f50((int)this,*puVar5,(float *)0x0);
  *(float *)((int)this + 0x348) = (float)fVar6;
  if (fVar6 == (float10)-1.0) {
    *(undefined4 *)((int)this + 0x348) = 0xc2000000;
  }
  else {
    *(float *)((int)this + 0x348) = (float)(fVar6 - (float10)16.0);
  }
  (**(code **)(*piVar3 + 0x5c))(1,this);
  (**(code **)(*piVar3 + 100))(1,this,_DAT_00e59b64 - 16.0);
  (**(code **)(*(int *)this + 0xc))(piVar3,1);
  FUN_00797560(this);
  ppuStack_68 = &PTR_LAB_00d507ec;
  *(undefined1 **)(piVar3[6] + 4) = &stack0xffffff9c;
  piVar3[6] = (int)&stack0xffffff9c;
  uStack_20 = 1;
  FUN_0079d8a0((void *)((int)this + 0x484),(int)&ppuStack_68);
  FUN_00798770(&ppuStack_68);
  ExceptionList = pvStack_28;
  return piVar3;
}


//// FUNCTION FUN_0079f200 @ 0079f200 ////

int * __thiscall FUN_0079f200(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined **ppuStack_44;
  int iStack_40;
  int *piStack_3c;
  undefined ***pppuStack_38;
  int *piStack_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdc65c;
  local_c = ExceptionList;
  iVar1 = *(int *)((int)this + 0x468);
  if (iVar1 != *(int *)((int)this + 0x46c)) {
    do {
      piVar2 = *(int **)(iVar1 + 0x14);
      if ((int *)piVar2[0xe3] == param_1) {
        if (piVar2[0xdd] == 0) {
          return piVar2;
        }
        ExceptionList = &local_c;
        piVar3 = (int *)FUN_005b22a0(piVar2[0xdd]);
        iVar1 = (**(code **)(*piVar3 + 0x24))();
        if (((iVar1 == 2) || (iVar1 = (**(code **)(*piVar3 + 0x24))(), iVar1 == 3)) &&
           ((DAT_0104d8e8 == 0 ||
            (iVar1 = piVar2[0xdd], iVar4 = FUN_005f5ba0(DAT_0104d8e8), iVar4 != iVar1)))) {
          (**(code **)(*piVar2 + 0x20))();
          ExceptionList = local_c;
          return piVar2;
        }
        (**(code **)(*piVar2 + 0x20))();
        (**(code **)(*piVar2 + 100))();
        fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
        local_c = (void *)(float)fVar5;
        *(float *)((int)this + 0x348) = (float)fVar5;
        (**(code **)(*piVar2 + 0x5c))(1);
        ExceptionList = local_c;
        return piVar2;
      }
      iVar1 = iVar1 + 0x18;
    } while (iVar1 != *(int *)((int)this + 0x46c));
  }
  ExceptionList = &local_c;
  this_00 = operator_new(0x39c);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ui/timeline_film.dds",0x14);
    local_28 = 0x14;
    local_2c[0x14] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar2 = FUN_007a4680(this_00,&local_2c,0,0,0x3f800000,0x3f800000,param_1[0x2f],(int)param_1);
  }
  local_4 = 0xffffffff;
  if ((this_00 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  (**(code **)(*piVar2 + 0x74))();
  local_4 = *piVar2;
  (**(code **)(*param_1 + 0x14))();
  (**(code **)(local_4 + 0x5c))();
  (**(code **)(*piVar2 + 100))(1,this);
  (**(code **)(*(int *)this + 0xc))(piVar2,1);
  FUN_00797560(this);
  pppuStack_38 = &ppuStack_44;
  piStack_3c = piVar2 + 6;
  ppuStack_44 = &PTR_LAB_00d507cc;
  iStack_40 = *piStack_3c;
  *(int **)(*piStack_3c + 4) = &iStack_40;
  *piStack_3c = (int)&iStack_40;
  local_4 = 3;
  piStack_30 = piVar2;
  FUN_0079d780((void *)((int)this + 0x464),(int)&ppuStack_44);
  FUN_00798650(&ppuStack_44);
  ExceptionList = local_c;
  return piVar2;
}


//// FUNCTION FUN_0079f490 @ 0079f490 ////

void __fastcall FUN_0079f490(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d50a3c;
  return;
}


//// FUNCTION Timeline_Constructor @ 0079f4f0 ////

/* WARNING: Removing unreachable block (ram,0x007a0d6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall Timeline_Constructor(void *this,undefined1 param_1)

{
  int *piVar1;
  void *this_00;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  size_t sVar7;
  char *_Dest;
  int *piVar8;
  undefined1 *puVar9;
  undefined1 *this_01;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint unaff_EBP;
  char *unaff_EDI;
  bool bVar10;
  float10 fVar11;
  ulonglong uVar12;
  char *pcStack_264;
  undefined1 *puStack_260;
  undefined1 *puVar13;
  char *pcStack_22c;
  undefined1 *puStack_228;
  undefined1 *puVar14;
  float fVar15;
  char *pcStack_1f4;
  undefined1 *puStack_1f0;
  uint *puVar16;
  uint uStack_1d8;
  void *pvStack_1d4;
  undefined4 uStack_1d0;
  uint *_Dest_00;
  char *pcStack_1b8;
  void *pvStack_1b4;
  uint uStack_1b0;
  char *pcStack_198;
  void *pvStack_194;
  uint uStack_190;
  char *pcStack_178;
  void *pvStack_174;
  float fStack_170;
  uint uVar17;
  uint uVar18;
  undefined4 *local_120;
  undefined2 *puStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined2 auStack_dc [6];
  undefined4 uStack_d0;
  undefined1 uStack_c4;
  void *local_b0;
  undefined4 auStack_a4 [8];
  undefined4 uStack_84;
  undefined4 uStack_64;
  undefined4 uStack_44;
  undefined4 uStack_24;
  undefined1 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the AMM Timeline widget: background sprites
                       (ui/timeline_bg01/02.dds, timeline_marker.dds, time_container.dds,
                       timeline_datshadow/datbub/dattail.dds, dotted_line2.dds) and transport
                       buttons (time_back/pause/play/ffwd, wired to
                       TIMELINE_FFWD/TIMELINE_FFWD_MOUSEOVER events). Calls the already-named
                       Timeline_CreateNoduleIcons, confirming this is the Timeline class's
                       constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdcab3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_b0 = this;
  FUN_007432f0(this);
  piVar8 = (int *)((int)this + 0x34c);
  *(undefined ***)this = &PTR_FUN_00d50a64;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d50a48;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(int **)((int)this + 0x358) = piVar8;
  *piVar8 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 **)((int)this + 0x38c) = (undefined4 *)((int)this + 0x380);
  *(undefined4 *)((int)this + 0x380) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 **)((int)this + 0x3a4) = (undefined4 *)((int)this + 0x398);
  *(undefined4 *)((int)this + 0x398) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 **)((int)this + 0x3bc) = (undefined4 *)((int)this + 0x3b0);
  *(undefined4 *)((int)this + 0x3b0) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 **)((int)this + 0x3d4) = (undefined4 *)((int)this + 0x3c8);
  *(undefined4 *)((int)this + 0x3c8) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 **)((int)this + 0x3ec) = (undefined4 *)((int)this + 0x3e0);
  *(undefined4 *)((int)this + 0x3e0) = &PTR_FUN_00d509ac;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 **)((int)this + 0x404) = (undefined4 *)((int)this + 0x3f8);
  *(undefined4 *)((int)this + 0x3f8) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 **)((int)this + 0x41c) = (undefined4 *)((int)this + 0x410);
  *(undefined4 *)((int)this + 0x410) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  piVar1 = (int *)((int)this + 0x44c);
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(int **)((int)this + 0x458) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined4 *)((int)this + 0x48c) = 0;
  *(undefined4 *)((int)this + 0x490) = 0;
  *(undefined4 *)((int)this + 0x498) = 0;
  *(undefined4 *)((int)this + 0x49c) = 0;
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x4a8) = 0;
  *(undefined4 *)((int)this + 0x4ac) = 0;
  *(undefined4 *)((int)this + 0x4b0) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x4cc) = 0;
  *(undefined4 **)((int)this + 0x4d0) = (undefined4 *)((int)this + 0x4c4);
  *(undefined4 *)((int)this + 0x4c4) = &PTR_LAB_00d509bc;
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4e4) = 0;
  *(undefined4 **)((int)this + 0x4e8) = (undefined4 *)((int)this + 0x4dc);
  *(undefined4 *)((int)this + 0x4dc) = &PTR_LAB_00d509bc;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  *(undefined4 **)((int)this + 0x500) = (undefined4 *)((int)this + 0x4f4);
  *(undefined4 *)((int)this + 0x4f4) = &PTR_LAB_00d509bc;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x518) = 0;
  *(undefined4 *)((int)this + 0x510) = 0;
  *(undefined4 *)((int)this + 0x514) = 0;
  *(undefined4 **)((int)this + 0x518) = (undefined4 *)((int)this + 0x50c);
  *(undefined4 *)((int)this + 0x50c) = &PTR_LAB_00d509bc;
  *(undefined4 *)((int)this + 0x520) = 0;
  *(undefined1 *)((int)this + 0x530) = param_1;
  *(undefined4 *)((int)this + 0x524) = 0;
  *(undefined4 *)((int)this + 0x540) = 0;
  *(undefined4 *)((int)this + 0x538) = 0;
  *(undefined4 *)((int)this + 0x53c) = 0;
  *(undefined4 **)((int)this + 0x540) = (undefined4 *)((int)this + 0x534);
  *(undefined4 *)((int)this + 0x534) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x548) = 0;
  local_4._0_1_ = 0x14;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x438) = 0xffffffff;
  *(undefined1 *)((int)this + 0x434) = 0;
  FUN_0073e4e0(this,0x43fa0000);
  uVar12 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)((int)this + 0x52c) = (int)uVar12;
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 0x15;
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_009910f0(puVar2);
  }
  *(int *)((int)this + 0x428) = iVar3;
  *(undefined1 *)(iVar3 + 0xc) = 6;
  local_4._0_1_ = 0x14;
  *(uint *)(*(int *)((int)this + 0x428) + 0x10) =
       *(uint *)(*(int *)((int)this + 0x428) + 0x10) & 0xbfffffff;
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 0x16;
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_009910f0(puVar2);
  }
  *(int *)((int)this + 0x42c) = iVar3;
  *(undefined1 *)(iVar3 + 0xc) = 6;
  local_4 = CONCAT31(local_4._1_3_,0x14);
  *(uint *)(*(int *)((int)this + 0x42c) + 0x10) =
       *(uint *)(*(int *)((int)this + 0x42c) + 0x10) & 0xbfffffff;
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  *(undefined4 **)((int)this + 0x364) = puVar2;
  puVar2[1] = *(undefined4 *)((int)this + 0x428);
  iVar3 = *(int *)((int)this + 0x364);
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  iVar3 = *(int *)((int)this + 0x364);
  *(undefined4 *)(iVar3 + 0x30) = DAT_0104e800;
  *(undefined4 *)(iVar3 + 0x34) = 0x3f000000;
  *(undefined4 *)(*(int *)((int)this + 0x364) + 8) = 0xffffffff;
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  *(undefined4 **)((int)this + 0x368) = puVar2;
  puVar2[1] = *(undefined4 *)((int)this + 0x428);
  iVar3 = *(int *)((int)this + 0x368);
  *(undefined4 *)(iVar3 + 0x28) = 0x3f020000;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  iVar3 = *(int *)((int)this + 0x368);
  *(undefined4 *)(iVar3 + 0x30) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x34) = 0x3f000000;
  *(undefined4 *)(*(int *)((int)this + 0x368) + 8) = 0xffffffff;
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  *(undefined4 **)((int)this + 0x36c) = puVar2;
  puVar2[1] = *(undefined4 *)((int)this + 0x428);
  iVar3 = *(int *)((int)this + 0x36c);
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0x3f020000;
  iVar3 = *(int *)((int)this + 0x36c);
  *(undefined4 *)(iVar3 + 0x30) = 0x3f000000;
  *(undefined4 *)(iVar3 + 0x34) = 0x3f800000;
  *(undefined4 *)(*(int *)((int)this + 0x36c) + 8) = 0xffffffff;
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  *(undefined4 **)((int)this + 0x370) = puVar2;
  puVar2[1] = *(undefined4 *)((int)this + 0x428);
  iVar3 = *(int *)((int)this + 0x370);
  *(undefined4 *)(iVar3 + 0x28) = 0x3f020000;
  *(undefined4 *)(iVar3 + 0x2c) = 0x3f020000;
  iVar3 = *(int *)((int)this + 0x370);
  *(undefined4 *)(iVar3 + 0x30) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x34) = 0x3f800000;
  *(undefined4 *)(*(int *)((int)this + 0x370) + 8) = 0xffffffff;
  pvVar4 = FUN_0099bb50("ui/timeline_bg01.dds",0,0,0,'\0');
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  *(undefined4 **)((int)this + 0x374) = puVar2;
  puVar2[1] = *(undefined4 *)((int)this + 0x428);
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x374) + 4) + 0xc) = 6;
  iVar3 = *(int *)(*(int *)((int)this + 0x374) + 4);
  *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0xbfffffff;
  pvVar5 = *(void **)(*(int *)((int)this + 0x374) + 4);
  if (*(void **)((int)pvVar5 + 0x18) != pvVar4) {
    Engine_SetResourceReference(pvVar5,(int)pvVar4);
  }
  iVar3 = *(int *)((int)this + 0x374);
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  iVar3 = *(int *)((int)this + 0x374);
  *(undefined4 *)(iVar3 + 0x30) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x34) = 0x3f800000;
  pvVar5 = FUN_0099bb50("ui/timeline_bg02.dds",0,0,0,'\0');
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  *(undefined4 **)((int)this + 0x378) = puVar2;
  puVar2[1] = *(undefined4 *)((int)this + 0x42c);
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x378) + 4) + 0xc) = 6;
  puVar16 = (uint *)(*(int *)(*(int *)((int)this + 0x378) + 4) + 0x10);
  *puVar16 = *puVar16 & 0xbfffffff;
  this_00 = *(void **)(*(int *)((int)this + 0x378) + 4);
  if (*(void **)((int)this_00 + 0x18) != pvVar5) {
    Engine_SetResourceReference(this_00,(int)pvVar5);
  }
  iVar3 = *(int *)((int)this + 0x378);
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  iVar3 = *(int *)((int)this + 0x378);
  *(undefined4 *)(iVar3 + 0x30) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x34) = 0x3f800000;
  if (pvVar5 != (void *)0x0) {
    FUN_0099b400(pvVar5);
  }
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 0x17;
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_009910f0(puVar2);
  }
  *(int *)((int)this + 0x430) = iVar3;
  *(undefined1 *)(iVar3 + 0xc) = 6;
  local_4 = CONCAT31(local_4._1_3_,0x14);
  *(uint *)(*(int *)((int)this + 0x430) + 0x10) =
       *(uint *)(*(int *)((int)this + 0x430) + 0x10) & 0xbfffffff;
  pvVar4 = FUN_0099bb50("ui/timeline_marker.dds",0,0,0,'\0');
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  *(undefined4 **)((int)this + 0x37c) = puVar2;
  puVar2[1] = *(undefined4 *)((int)this + 0x430);
  pvVar5 = *(void **)(*(int *)((int)this + 0x37c) + 4);
  if (*(void **)((int)pvVar5 + 0x18) != pvVar4) {
    Engine_SetResourceReference(pvVar5,(int)pvVar4);
  }
  iVar3 = *(int *)((int)this + 0x37c);
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  iVar3 = *(int *)((int)this + 0x37c);
  *(undefined4 *)(iVar3 + 0x30) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x34) = 0x3f800000;
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  puVar2 = operator_new(0x3fc);
  local_4._0_1_ = 0x18;
  if (puVar2 == (undefined4 *)0x0) {
    local_120 = (undefined4 *)0x0;
  }
  else {
    local_120 = FUN_00833290(puVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,0x14);
  (**(code **)(*piVar8 + 4))();
  *(undefined4 **)((int)this + 0x360) = local_120;
  (**(code **)*piVar8)();
  (**(code **)(**(int **)((int)this + 0x360) + 100))();
  uVar18 = 0;
  uVar17 = 1;
  (**(code **)(**(int **)((int)this + 0x360) + 0x5c))();
  puStack_e8 = auStack_dc;
  auStack_dc[0] = 0;
  uStack_e4 = 0;
  uStack_e0 = 10;
  uVar6 = FUN_00ace02d(L"<h2><table><tr><td align=left width=");
  FUN_004036d0(&puStack_e8,L"<h2><table><tr><td align=left width=",uVar6);
  uStack_1c = 0x19;
  sVar7 = _swprintf((wchar_t *)auStack_a4,0xd18f84,SUB84((double)(_DAT_00e59c74 - 14.0),0));
  FUN_0040cae0(&puStack_e8,(wchar_t *)auStack_a4,sVar7);
  sVar7 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&puStack_e8,L">",sVar7);
  puVar2 = FUN_0043c4f0();
  FUN_0040cae0(&puStack_e8,(wchar_t *)*puVar2,puVar2[1]);
  sVar7 = FUN_00ace02d(L"</td></tr></table></h2>");
  FUN_0040cae0(&puStack_e8,L"</td></tr></table></h2>",sVar7);
  (**(code **)(**(int **)((int)this + 0x360) + 0x54))();
  _Dest = (char *)0x0;
  (**(code **)(**(int **)((int)this + 0x360) + 0x84))();
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    unaff_EBP = 0x20;
    unaff_EDI = _malloc(0x20);
    _strncpy(unaff_EDI,"ui/time_container.dds",0x15);
    unaff_EDI[0x15] = '\0';
    uStack_24 = CONCAT31(uStack_24._1_3_,0x1b);
    uVar18 = 1;
    fStack_170 = 1.1203467e-38;
    puVar2 = FUN_0069d820(pvVar4,(undefined4 *)&stack0xfffffec8,0,0,0x3f800000,0x3f800000);
  }
  uStack_24 = 0x1c;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x460) = puVar2;
  (**(code **)*piVar1)();
  uStack_24 = 0x19;
  if (((uVar18 & 1) != 0) && (0x14 < unaff_EBP)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  (**(code **)(**(int **)((int)this + 0x460) + 0x74))();
  fStack_170 = 1.1203643e-38;
  pvVar4 = this;
  (**(code **)(**(int **)((int)this + 0x460) + 100))();
  iVar3 = **(int **)((int)this + 0x460);
  fStack_170 = 1.120367e-38;
  fVar11 = (float10)(**(code **)(**(int **)((int)this + 0x360) + 0x10))();
  fStack_170 = (float)(fVar11 - (float10)8.0);
  pcStack_178 = (char *)0x1;
  pvStack_174 = this;
  (**(code **)(iVar3 + 0x5c))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x460));
  if (*(char *)((int)this + 0x530) != '\0') {
    (**(code **)(**(int **)((int)this + 0x460) + 0x20))();
  }
  pvVar5 = operator_new(0x360);
  if (pvVar5 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar17 = 0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ui/timeline_datshadow.dds",0x19);
    _Dest[0x19] = '\0';
    pvVar4 = (void *)((uint)pvVar4 | 2);
    uStack_44 = CONCAT31(uStack_44._1_3_,0x1e);
    uStack_190 = 0x7a0007;
    puVar2 = FUN_0069d820(pvVar5,(undefined4 *)&stack0xfffffea8,0,0,0x3f800000,0x3f800000);
  }
  uStack_44 = 0x1f;
  (**(code **)(*(int *)((int)this + 0x3b0) + 4))();
  *(undefined4 **)((int)this + 0x3c4) = puVar2;
  (*(code *)**(undefined4 **)((int)this + 0x3b0))();
  uStack_44 = 0x19;
  if ((((uint)pvVar4 & 2) != 0) && (0x14 < uVar17)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  (**(code **)(**(int **)((int)this + 0x3c4) + 0x74))();
  uStack_190 = 0x7a0094;
  pvVar4 = this;
  (**(code **)(**(int **)((int)this + 0x3c4) + 100))();
  uStack_190 = 0;
  pcStack_198 = (char *)0x1;
  pvStack_194 = this;
  (**(code **)(**(int **)((int)this + 0x3c4) + 0x5c))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x3c4));
  if (*(char *)((int)this + 0x530) != '\0') {
    (**(code **)(**(int **)((int)this + 0x3c4) + 0x20))();
  }
  pvVar5 = operator_new(0x360);
  if (pvVar5 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pcStack_178 = &stack0xfffffe94;
    pvStack_174 = (void *)0x0;
    fStack_170 = 4.48416e-44;
    pcStack_178 = _malloc(0x20);
    _strncpy(pcStack_178,"ui/timeline_datbub.dds",0x16);
    pvStack_174 = (void *)0x16;
    pcStack_178[0x16] = '\0';
    pvVar4 = (void *)((uint)pvVar4 | 4);
    uStack_64 = CONCAT31(uStack_64._1_3_,0x21);
    uStack_1b0 = 0x7a0152;
    puVar2 = FUN_0069d820(pvVar5,&pcStack_178,0,0,0x3f800000,0x3f800000);
  }
  uStack_64 = 0x22;
  (**(code **)(*(int *)((int)this + 0x380) + 4))();
  *(undefined4 **)((int)this + 0x394) = puVar2;
  (*(code *)**(undefined4 **)((int)this + 0x380))();
  uStack_64 = 0x19;
  if ((((uint)pvVar4 & 4) != 0) && (0x14 < (uint)fStack_170)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_178);
  }
  (**(code **)(**(int **)((int)this + 0x394) + 0x74))();
  uStack_1b0 = 0x7a01df;
  pvVar4 = this;
  (**(code **)(**(int **)((int)this + 0x394) + 100))();
  uStack_1b0 = 0;
  pcStack_1b8 = (char *)0x1;
  pvStack_1b4 = this;
  (**(code **)(**(int **)((int)this + 0x394) + 0x5c))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x394));
  if (*(char *)((int)this + 0x530) != '\0') {
    (**(code **)(**(int **)((int)this + 0x394) + 0x20))();
  }
  pvVar5 = operator_new(0x360);
  if (pvVar5 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pcStack_198 = &stack0xfffffe74;
    pvStack_194 = (void *)0x0;
    uStack_190 = 0x20;
    pcStack_198 = _malloc(0x20);
    _strncpy(pcStack_198,"ui/timeline_dattail.dds",0x17);
    pvStack_194 = (void *)0x17;
    pcStack_198[0x17] = '\0';
    pvVar4 = (void *)((uint)pvVar4 | 8);
    uStack_84 = CONCAT31(uStack_84._1_3_,0x24);
    uStack_1d0 = 0x7a029d;
    puVar2 = FUN_0069d820(pvVar5,&pcStack_198,0,0,0x3f800000,0x3f800000);
  }
  uStack_84 = 0x25;
  (**(code **)(*(int *)((int)this + 0x398) + 4))();
  *(undefined4 **)((int)this + 0x3ac) = puVar2;
  (*(code *)**(undefined4 **)((int)this + 0x398))();
  uStack_84 = 0x19;
  if ((((uint)pvVar4 & 8) != 0) && (0x14 < uStack_190)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_198);
  }
  (**(code **)(**(int **)((int)this + 0x3ac) + 0x74))();
  uVar18 = *(uint *)((int)this + 0x394);
  uStack_1d0 = 0x7a032c;
  (**(code **)(**(int **)((int)this + 0x3ac) + 0x68))();
  uStack_1d0 = 0;
  uStack_1d8 = 1;
  pvStack_1d4 = this;
  (**(code **)(**(int **)((int)this + 0x3ac) + 0x5c))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x3ac));
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pcStack_1b8 = &stack0xfffffe54;
    pvStack_1b4 = (void *)0x0;
    uStack_1b0 = 0x14;
    _strncpy(pcStack_1b8,"ui/dotted_line2.dds",0x13);
    pvStack_1b4 = (void *)0x13;
    pcStack_1b8[0x13] = '\0';
    uVar18 = uVar18 | 0x10;
    auStack_a4[0] = CONCAT31(auStack_a4[0]._1_3_,0x27);
    puStack_1f0 = (undefined1 *)0x7a03ce;
    puVar2 = FUN_0069d820(pvVar4,&pcStack_1b8,0,0,0x3f800000,0x3f800000);
  }
  auStack_a4[0] = 0x28;
  (**(code **)(*(int *)((int)this + 0x3c8) + 4))();
  *(undefined4 **)((int)this + 0x3dc) = puVar2;
  (*(code *)**(undefined4 **)((int)this + 0x3c8))();
  auStack_a4[0] = 0x19;
  if (((uVar18 & 0x10) != 0) && (0x14 < uStack_1b0)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1b8);
  }
  uVar18 = 0x41000000;
  (**(code **)(**(int **)((int)this + 0x3dc) + 0x74))();
  puVar16 = (uint *)0x0;
  puStack_1f0 = (undefined1 *)0x7a0450;
  (**(code **)(**(int **)((int)this + 0x3dc) + 100))();
  puStack_1f0 = (undefined1 *)0x430c0000;
  pcStack_1f4 = this;
  (**(code **)(**(int **)((int)this + 0x3dc) + 0x5c))();
  iVar3 = (**(code **)(**(int **)((int)this + 0x3dc) + 0x108))();
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
  FUN_0073f6e0(this,*(int **)((int)this + 0x3dc));
  if (*(char *)((int)this + 0x530) != '\0') {
    (**(code **)(**(int **)((int)this + 0x3ac) + 0x20))();
    (**(code **)(**(int **)((int)this + 0x3dc) + 0x20))();
  }
  FUN_0073f6e0(this,*(int **)((int)this + 0x360));
  if (*(char *)((int)this + 0x530) != '\0') {
    (**(code **)(**(int **)((int)this + 0x360) + 0x20))();
  }
  piVar8 = operator_new(0x4b4);
  uStack_c4 = 0x29;
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = FUN_00639570(piVar8);
  }
  uStack_c4 = 0x19;
  (**(code **)(*(int *)((int)this + 0x3e0) + 4))();
  *(int **)((int)this + 0x3f4) = piVar8;
  (*(code *)**(undefined4 **)((int)this + 0x3e0))();
  (**(code **)(**(int **)((int)this + 0x3f4) + 100))();
  FUN_00796e90((int)this);
  FUN_0073f6e0(this,*(int **)((int)this + 0x3f4));
  if (*(char *)((int)this + 0x530) != '\0') {
    (**(code **)(**(int **)((int)this + 0x3f4) + 0x20))();
  }
  _Dest_00 = &uStack_1b0;
  uStack_1b0 = uStack_1b0 & 0xffff0000;
  pcStack_1b8 = (char *)0x0;
  pvStack_1b4 = (void *)0xa;
  uVar6 = FUN_00ace02d((short *)&DAT_00d50ce0);
  FUN_004036d0(&stack0xfffffe44,L"t1",uVar6);
  uStack_d0._0_1_ = 0x2a;
  piVar8 = FUN_0082db00((undefined4 *)&stack0xfffffe44);
  *(int **)((int)this + 0x344) = piVar8;
  uStack_d0 = CONCAT31(uStack_d0._1_3_,0x19);
  if (10 < pvStack_1b4) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_00);
  }
  puVar9 = operator_new(0x420);
  if (puVar9 == (undefined1 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    _Dest_00 = &uStack_1b0;
    uStack_1b0 = uStack_1b0 & 0xffffff00;
    pcStack_1b8 = (char *)0x0;
    pvStack_1b4 = (void *)0x14;
    puVar14 = puVar9;
    _strncpy((char *)_Dest_00,"SANDBOX_PAUSE_MENU",0x12);
    pcStack_1b8 = (char *)0x12;
    *(char *)((int)_Dest_00 + 0x12) = '\0';
    puVar16 = &uStack_1d8;
    pcStack_1f4 = (char *)((uint)pcStack_1f4 | 0x20);
    uStack_1d8 = uStack_1d8 & 0xffffff00;
    uVar18 = 0x14;
    _strncpy((char *)puVar16,"time_back",9);
    *(char *)((int)puVar16 + 9) = '\0';
    pcStack_1f4 = (char *)((uint)pcStack_1f4 | 0x40);
    uStack_d0 = 0x2d;
    puStack_228 = (undefined1 *)0x7a0687;
    puVar2 = FUN_009b5030(&pcStack_178,(undefined4 *)&stack0xfffffe44);
    puStack_1f0 = &stack0xfffffdec;
    pcStack_1f4 = (char *)((uint)pcStack_1f4 | 0x80);
    uStack_d0 = 0x2e;
    puStack_228 = (undefined1 *)0x7a06cb;
    puVar2 = FUN_0069fb10(puVar9,(int *)&stack0xfffffe1c,puVar2,0x41c00000,0x41c00000,0,0,0x3f400000
                          ,0x3f400000);
    puVar9 = puVar14;
  }
  *(undefined4 **)((int)this + 0x43c) = puVar2;
  if (((char)pcStack_1f4 < '\0') &&
     (pcStack_1f4 = (char *)((uint)pcStack_1f4 & 0xffffff7f), 10 < (uint)fStack_170)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_178);
  }
  if ((((uint)pcStack_1f4 & 0x40) != 0) &&
     (pcStack_1f4 = (char *)((uint)pcStack_1f4 & 0xffffffbf), 0x14 < uVar18)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar16);
  }
  uStack_d0 = 0x19;
  if ((((uint)pcStack_1f4 & 0x20) != 0) &&
     (pcStack_1f4 = (char *)((uint)pcStack_1f4 & 0xffffffdf), 0x14 < pvStack_1b4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_00);
  }
  (**(code **)(**(int **)((int)this + 0x43c) + 100))();
  iVar3 = **(int **)((int)this + 0x43c);
  fVar11 = (float10)(**(code **)(**(int **)((int)this + 0x360) + 0x10))();
  fVar15 = (float)(fVar11 + (float10)24.0);
  puVar14 = (undefined1 *)0x1;
  (**(code **)(iVar3 + 0x5c))();
  puStack_228 = &LAB_00795f70;
  pcStack_22c = (char *)0x0;
  (**(code **)(**(int **)((int)this + 0x43c) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x43c) + 0x18))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x43c));
  if (*(char *)((int)this + 0x530) != '\0') {
    (**(code **)(**(int **)((int)this + 0x43c) + 0x20))();
  }
  this_01 = operator_new(0x420);
  if (this_01 == (undefined1 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar14 = &stack0xfffffdf0;
    fVar15 = 1.4013e-44;
    puVar13 = this_01;
    uVar18 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xfffffde4,(wchar_t *)&lpCaption_00d16918,uVar18);
    pcStack_1f4 = &stack0xfffffe18;
    pcStack_22c = (char *)((uint)pcStack_22c | 0x100);
    puStack_1f0 = (undefined1 *)0x0;
    puVar9 = &DAT_00000014;
    _strncpy(pcStack_1f4,"time_pause",10);
    puStack_1f0 = &lpType_0000000a;
    pcStack_1f4[10] = '\0';
    puStack_228 = &stack0xfffffdb4;
    pcStack_22c = (char *)((uint)pcStack_22c | 0x200);
    puStack_260 = (undefined1 *)0x7a08c9;
    puVar2 = FUN_0069fb10(this_01,(int *)&pcStack_1f4,(undefined4 *)&stack0xfffffde4,0x41c00000,
                          0x41c00000,0,0,0x3f400000,0x3f400000);
    this_01 = puVar13;
  }
  *(undefined4 **)((int)this + 0x440) = puVar2;
  if ((((uint)pcStack_22c & 0x200) != 0) &&
     (pcStack_22c = (char *)((uint)pcStack_22c & 0xfffffdff), &DAT_00000014 < puVar9)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1f4);
  }
  if ((((uint)pcStack_22c & 0x100) != 0) &&
     (pcStack_22c = (char *)((uint)pcStack_22c & 0xfffffeff), 10 < (uint)fVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar14);
  }
  (**(code **)(**(int **)((int)this + 0x440) + 100))();
  iVar3 = **(int **)((int)this + 0x440);
  fVar11 = (float10)(**(code **)(**(int **)((int)this + 0x360) + 0x10))();
  fVar15 = (float)(fVar11 + (float10)56.0);
  puVar9 = (undefined1 *)0x1;
  (**(code **)(iVar3 + 0x5c))();
  puStack_260 = &LAB_00796dd0;
  pcStack_264 = (char *)0x0;
  (**(code **)(**(int **)((int)this + 0x440) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x440) + 0x18))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x440));
  if (*(char *)((int)this + 0x530) != '\0') {
    (**(code **)(**(int **)((int)this + 0x440) + 0x20))();
  }
  puVar14 = operator_new(0x420);
  if (puVar14 == (undefined1 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar9 = &stack0xfffffdb8;
    fVar15 = 1.4013e-44;
    puVar13 = puVar14;
    uVar18 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xfffffdac,(wchar_t *)&lpCaption_00d16918,uVar18);
    pcStack_22c = &stack0xfffffde0;
    pcStack_264 = (char *)((uint)pcStack_264 | 0x400);
    puStack_228 = (undefined1 *)0x0;
    this_01 = &DAT_00000014;
    _strncpy(pcStack_22c,"time_play",9);
    puStack_228 = &DAT_00000009;
    pcStack_22c[9] = '\0';
    puStack_260 = &stack0xfffffd7c;
    pcStack_264 = (char *)((uint)pcStack_264 | 0x800);
    puVar2 = FUN_0069fb10(puVar14,(int *)&pcStack_22c,(undefined4 *)&stack0xfffffdac,0x41c00000,
                          0x41c00000,0,0,0x3f400000,0x3f400000);
    puVar14 = puVar13;
  }
  *(undefined4 **)((int)this + 0x444) = puVar2;
  if ((((uint)pcStack_264 & 0x800) != 0) &&
     (pcStack_264 = (char *)((uint)pcStack_264 & 0xfffff7ff), &DAT_00000014 < this_01)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_22c);
  }
  if ((((uint)pcStack_264 & 0x400) != 0) &&
     (pcStack_264 = (char *)((uint)pcStack_264 & 0xfffffbff), 10 < (uint)fVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar9);
  }
  (**(code **)(**(int **)((int)this + 0x444) + 100))();
  uVar18 = 0x40800000;
  puVar9 = (undefined1 *)0x2;
  (**(code **)(**(int **)((int)this + 0x444) + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x444) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x444) + 0x18))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x444));
  if (*(char *)((int)this + 0x530) != '\0') {
    (**(code **)(**(int **)((int)this + 0x444) + 0x20))();
  }
  pvVar4 = operator_new(0x420);
  bVar10 = pvVar4 == (void *)0x0;
  if (bVar10) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar9 = &stack0xfffffd80;
    uVar18 = 10;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xfffffd74,(wchar_t *)&lpCaption_00d16918,uVar6);
    pcStack_264 = &stack0xfffffda8;
    puStack_260 = (undefined1 *)0x0;
    puVar14 = &DAT_00000014;
    _strncpy(pcStack_264,"time_ffwd",9);
    puStack_260 = &DAT_00000009;
    pcStack_264[9] = '\0';
    pcStack_178 = (char *)0x3e;
    puVar2 = FUN_0069fb10(pvVar4,(int *)&pcStack_264,(undefined4 *)&stack0xfffffd74,0x41c00000,
                          0x41c00000,0,0,0x3f400000,0x3f400000);
  }
  *(undefined4 **)((int)this + 0x448) = puVar2;
  if ((!bVar10) && (&DAT_00000014 < puVar14)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_264);
  }
  pcStack_178 = (char *)0x19;
  if ((!bVar10) && (10 < uVar18)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar9);
  }
  (**(code **)(**(int **)((int)this + 0x448) + 100))();
  (**(code **)(**(int **)((int)this + 0x448) + 0x5c))(2,*(undefined4 *)((int)this + 0x444));
  (**(code **)(**(int **)((int)this + 0x448) + 0x18))(0,&DAT_00796e50,this,"TIMELINE_FFWD");
  (**(code **)(**(int **)((int)this + 0x448) + 0x18))
            (5,&LAB_005f37f0,this,"TIMELINE_FFWD_MOUSEOVER");
  FUN_0073f6e0(this,*(int **)((int)this + 0x448));
  if (*(char *)((int)this + 0x530) != '\0') {
    (**(code **)(**(int **)((int)this + 0x448) + 0x20))(0);
  }
  Timeline_CreateNoduleIcons(this);
  FUN_00797560(this);
  DAT_0104e7a1 = 0;
  DAT_0104e7a0 = 0;
  DAT_0104e7a2 = 0;
  FUN_0079a520(0x104e7f0);
  ExceptionList = pcStack_1b8;
  return this;
}


//// FUNCTION WTimeline_Tick @ 007a0da0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall WTimeline_Tick(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  size_t sVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar9;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 *puVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  float fVar15;
  undefined4 *puStack_d4;
  undefined2 *puStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined2 auStack_c0 [10];
  undefined2 *puStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined2 auStack_a0 [10];
  wchar_t awStack_8c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdcafd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_004201b0(DAT_00f87b04);
  uVar6 = extraout_EDX;
  if ((cVar1 == '\0') || (*(int *)(*(int *)(*(int *)(DAT_00f87aa0 + 0xa4) + 8) + 0x18) == 0x5ca)) {
    puVar2 = (undefined4 *)param_1[0x103];
    uVar9 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar7 = puVar2 + 0x12;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        (**(code **)*puVar2)();
      }
      (**(code **)(param_1[0xfe] + 4))();
      param_1[0x103] = 0;
      (**(code **)param_1[0xfe])();
      uVar9 = extraout_ECX_00;
      uVar6 = extraout_EDX_01;
    }
    if (*(float *)(DAT_0104cdf4 + 0x38) <= 1.0) {
      puVar2 = (undefined4 *)param_1[0x109];
      uVar9 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        piVar7 = puVar2 + 0x12;
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          (**(code **)*puVar2)();
        }
        (**(code **)(param_1[0x104] + 4))();
        param_1[0x109] = 0;
        (**(code **)param_1[0x104])();
        uVar9 = extraout_ECX_02;
        uVar6 = extraout_EDX_03;
      }
    }
    else if (param_1[0x109] == 0) {
      puVar2 = operator_new(0x3fc);
      uStack_4 = 2;
      if (puVar2 == (undefined4 *)0x0) {
        puStack_d4 = (undefined4 *)0x0;
      }
      else {
        puStack_d4 = FUN_00833290(puVar2);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(param_1[0x104] + 4))();
      param_1[0x109] = (int)puStack_d4;
      (**(code **)param_1[0x104])();
      puStack_cc = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 0;
      uStack_c4 = 10;
      uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&puStack_cc,(wchar_t *)&lpCaption_00d16918,uVar3);
      uStack_4 = 3;
      sVar4 = FUN_00ace02d(L"<h1><nobr><translate>TIMELINE_GAME_FFWD</translate></nobr></h1>");
      FUN_0040cae0(&puStack_cc,L"<h1><nobr><translate>TIMELINE_GAME_FFWD</translate></nobr></h1>",
                   sVar4);
      (**(code **)(*(int *)param_1[0x109] + 0x54))();
      (**(code **)(*(int *)param_1[0x109] + 0x84))(0x41200000);
      piVar5 = (int *)FUN_0071b2b0();
      piVar7 = (int *)param_1[0x109];
      fVar12 = (float10)(**(code **)(*piVar5 + 0x10))();
      fVar13 = (float10)(**(code **)(*piVar7 + 0x10))();
      iVar8 = *(int *)param_1[0x109];
      fVar15 = (float)(((float10)(float)fVar12 - fVar13) * (float10)0.5);
      uVar6 = FUN_0071b2a0();
      (**(code **)(iVar8 + 0x5c))(1,uVar6,fVar15);
      (**(code **)(*(int *)param_1[0x109] + 0x68))(2,param_1,0);
      piVar7 = (int *)FUN_0071b2b0();
      iVar8 = param_1[0x109];
      goto LAB_007a10f0;
    }
  }
  else {
    puVar2 = (undefined4 *)param_1[0x109];
    uVar9 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar7 = puVar2 + 0x12;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        (**(code **)*puVar2)();
      }
      (**(code **)(param_1[0x104] + 4))();
      param_1[0x109] = 0;
      (**(code **)param_1[0x104])();
      uVar9 = extraout_ECX;
      uVar6 = extraout_EDX_00;
    }
    if (param_1[0x103] == 0) {
      puVar2 = operator_new(0x3fc);
      uStack_4 = 0;
      if (puVar2 == (undefined4 *)0x0) {
        puStack_d4 = (undefined4 *)0x0;
      }
      else {
        puStack_d4 = FUN_00833290(puVar2);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(param_1[0xfe] + 4))();
      param_1[0x103] = (int)puStack_d4;
      (**(code **)param_1[0xfe])();
      puStack_cc = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 0;
      uStack_c4 = 10;
      uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&puStack_cc,(wchar_t *)&lpCaption_00d16918,uVar3);
      uStack_4 = 1;
      sVar4 = FUN_00ace02d(L"<h1><nobr><translate>TIMELINE_GAME_PAUSED</translate></nobr></h1>");
      FUN_0040cae0(&puStack_cc,L"<h1><nobr><translate>TIMELINE_GAME_PAUSED</translate></nobr></h1>",
                   sVar4);
      (**(code **)(*(int *)param_1[0x103] + 0x54))();
      (**(code **)(*(int *)param_1[0x103] + 0x84))(0x41200000);
      piVar5 = (int *)FUN_0071b2b0();
      piVar7 = (int *)param_1[0x103];
      fVar12 = (float10)(**(code **)(*piVar5 + 0x10))();
      fVar13 = (float10)(**(code **)(*piVar7 + 0x10))();
      iVar8 = *(int *)param_1[0x103];
      fVar15 = (float)(((float10)(float)fVar12 - fVar13) * (float10)0.5);
      uVar6 = FUN_0071b2a0();
      (**(code **)(iVar8 + 0x5c))(1,uVar6,fVar15);
      (**(code **)(*(int *)param_1[0x103] + 0x68))(2,param_1,0);
      piVar7 = (int *)FUN_0071b2b0();
      iVar8 = param_1[0x103];
LAB_007a10f0:
      (**(code **)(*piVar7 + 0xc))(iVar8,1);
      uStack_4 = 0xffffffff;
      uVar9 = extraout_ECX_01;
      uVar6 = extraout_EDX_02;
      if (10 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_cc);
      }
    }
  }
  uVar14 = FUN_00990ae0(uVar9,uVar6);
  if (param_1[0x14b] + 600U <= (uint)uVar14) {
    FUN_0079db00((int)param_1);
    uVar14 = FUN_00990ae0(extraout_ECX_03,extraout_EDX_04);
    param_1[0x14b] = (int)uVar14;
  }
  FUN_00797c50((int)param_1);
  FUN_007960a0(DAT_0104e7c4,&DAT_0104e7d0,&LAB_00794230);
  *(undefined1 *)(param_1 + 0x10d) = 0;
  if (DAT_0104e094 == 0) {
    FUN_0072fdd0();
  }
  (**(code **)(*param_1 + 0xd8))();
  WWindow_Tick(param_1);
  iVar8 = FUN_0043bae0();
  if (iVar8 != param_1[0x10e]) {
    iVar8 = FUN_0043bae0();
    puStack_ac = auStack_a0;
    param_1[0x10e] = iVar8;
    auStack_a0[0] = 0;
    uStack_a8 = 0;
    uStack_a4 = 10;
    uVar3 = FUN_00ace02d(L"<h2><table><tr><td align=left width=");
    FUN_004036d0(&puStack_ac,L"<h2><table><tr><td align=left width=",uVar3);
    uStack_4 = 4;
    sVar4 = _swprintf(awStack_8c,0xd18f84,SUB84((double)(_DAT_00e59c74 - 14.0),0));
    FUN_0040cae0(&puStack_ac,awStack_8c,sVar4);
    sVar4 = FUN_00ace02d((short *)&DAT_00d19724);
    FUN_0040cae0(&puStack_ac,L">",sVar4);
    puVar2 = FUN_0043c4f0();
    FUN_0040cae0(&puStack_ac,(wchar_t *)*puVar2,puVar2[1]);
    sVar4 = FUN_00ace02d(L"</td></tr></table></h2>");
    FUN_0040cae0(&puStack_ac,L"</td></tr></table></h2>",sVar4);
    (**(code **)(*(int *)param_1[0xd8] + 0x54))();
    *(undefined4 *)(param_1[0xd8] + 0x354) = 0x42c80000;
    (**(code **)(*(int *)param_1[0xd8] + 0x84))(0);
    uStack_4 = 0xffffffff;
    if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_ac);
    }
  }
  iVar8 = FUN_00423320(DAT_00f87b04);
  bVar11 = iVar8 != 3;
  if ((DAT_0104e79e != '\0') && (bVar11)) {
    if ((param_1[0x13c] != 0) && ((char)param_1[0x14c] == '\0')) {
      FUN_007a2da0(param_1[0x13c]);
    }
    DAT_0104e79e = '\0';
  }
  if (DAT_0104e79f != '\0') {
    if (!bVar11) goto LAB_007a145f;
    FUN_007978e0((int)param_1);
    DAT_0104e79f = '\0';
  }
  if (bVar11) {
    while ((puVar2 = DAT_0104e7f8, DAT_0104e7f4 != 0 &&
           (iVar8 = (int)DAT_0104e7f8 - DAT_0104e7f4 >> 0x1f,
           ((int)DAT_0104e7f8 - DAT_0104e7f4) / 0x18 + iVar8 != iVar8))) {
      iVar8 = DAT_0104e7f8[-1];
      puVar10 = DAT_0104e7f8 + -6;
      if (puVar10 != DAT_0104e7f8) {
        piVar7 = DAT_0104e7f8 + -4;
        do {
          *puVar10 = &PTR_FUN_00d16aac;
          if ((int *)*piVar7 != (int *)0x0) {
            *(int *)*piVar7 = piVar7[-1];
          }
          if (piVar7[-1] != 0) {
            *(int *)(piVar7[-1] + 4) = *piVar7;
          }
          piVar7[-1] = 0;
          *piVar7 = 0;
          piVar7[3] = 0;
          if ((int *)*piVar7 != (int *)0x0) {
            *(int *)*piVar7 = piVar7[-1];
          }
          if (piVar7[-1] != 0) {
            *(int *)(piVar7[-1] + 4) = *piVar7;
          }
          piVar7[-1] = 0;
          *piVar7 = 0;
          puVar10 = puVar10 + 6;
          piVar7 = piVar7 + 6;
        } while (puVar10 != puVar2);
      }
      DAT_0104e7f8 = DAT_0104e7f8 + -6;
      piVar7 = DAT_0104e7c4;
      if (DAT_0104e7c4 != &DAT_0104e7d0) {
        do {
          piVar5 = (int *)FUN_00ace790((int *)piVar7[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                                       &TM::CNoduleResearchPack::RTTI_Type_Descriptor,0);
          if ((piVar5 != (int *)0x0) && (piVar5[0x23] == iVar8)) {
            (**(code **)(*piVar5 + 0xc))();
          }
          piVar5 = piVar7 + 1;
          piVar7 = (int *)*piVar5;
        } while ((int *)*piVar5 != &DAT_0104e7d0);
      }
    }
  }
LAB_007a145f:
  Tooltip_UpdateHoverStillnessFade();
  FUN_00796e90((int)param_1);
  FUN_0079d350((int)param_1);
  FUN_0079d420((int)param_1);
  FUN_0079d530((int)param_1);
  FUN_0053d480((int)param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Timeline_UpdateNoduleIcons @ 007a14a0 ////

void __fastcall Timeline_UpdateNoduleIcons(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  DAT_00e59bb0 = 0x40e00000;
  *(undefined4 *)((int)param_1 + 0x348) = 0xc2000000;
  puVar3 = DAT_0104e7c4;
  if (DAT_0104e7c4 != &DAT_0104e7d0) {
    do {
      piVar2 = (int *)FUN_00ace790((int *)puVar3[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                                   &TM::CNoduleMovie::RTTI_Type_Descriptor,0);
      if ((piVar2 == (int *)0x0) || (piVar2[0x2f] == 0)) {
        piVar2 = (int *)FUN_00ace790((int *)puVar3[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                                     &TM::CNoduleResearchPack::RTTI_Type_Descriptor,0);
        if ((piVar2 != (int *)0x0) && (piVar2[0x23] != 0)) {
          piVar2 = FUN_0079ebb0(param_1,piVar2);
          goto LAB_007a15f9;
        }
        piVar2 = (int *)FUN_00ace790((int *)puVar3[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                                     &TM::CNoduleEvent::RTTI_Type_Descriptor,0);
        if (piVar2 != (int *)0x0) {
          piVar2 = CNoduleEvent_SpawnOrUpdateIcon(param_1,piVar2);
          goto LAB_007a15f9;
        }
        piVar2 = (int *)FUN_00ace790((int *)puVar3[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                                     &TM::CNodulePress::RTTI_Type_Descriptor,0);
        if ((piVar2 != (int *)0x0) && (piVar2[0x29] != 0)) {
          piVar2 = FUN_0079e9e0(param_1,piVar2);
          goto LAB_007a15f9;
        }
        piVar2 = (int *)FUN_00ace790((int *)puVar3[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                                     &TM::CNoduleQuit::RTTI_Type_Descriptor,0);
        if ((piVar2 != (int *)0x0) && (piVar2[0x29] != 0)) {
          piVar2 = FUN_0079e670(param_1,piVar2);
          goto LAB_007a15f9;
        }
        piVar2 = (int *)FUN_00ace790((int *)puVar3[2],0,&TM::CNodule::RTTI_Type_Descriptor,
                                     &TM::CNoduleRetire::RTTI_Type_Descriptor,0);
        if ((piVar2 != (int *)0x0) && (piVar2[0x29] != 0)) {
          piVar2 = FUN_0079e820(param_1,piVar2);
          goto LAB_007a15f9;
        }
      }
      else {
        piVar2 = FUN_0079f200(param_1,piVar2);
LAB_007a15f9:
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x20))(DAT_00e59c85);
        }
      }
      if (DAT_00e59c85 != '\0') {
        (**(code **)(*(int *)puVar3[2] + 0x24))();
      }
      puVar1 = puVar3 + 1;
      puVar3 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104e7d0);
  }
  return;
}


//// FUNCTION FUN_007a1630 @ 007a1630 ////

int * __cdecl FUN_007a1630(char param_1)

{
  void *this;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdcb26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x54c);
  if (param_1 == '\0') {
    local_4 = 1;
    if (this == (void *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = Timeline_Constructor(this,0);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104e7a4[1])();
    DAT_0104e7b8 = piVar1;
    (*(code *)*DAT_0104e7a4)();
    ExceptionList = local_c;
    return DAT_0104e7b8;
  }
  local_4 = 0;
  if (this != (void *)0x0) {
    piVar1 = Timeline_Constructor(this,param_1);
    ExceptionList = local_c;
    return piVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_007a1900 @ 007a1900 ////

void * __fastcall FUN_007a1900(void *param_1)

{
  FUN_0043b520(param_1,0.0);
  *(undefined4 *)((int)param_1 + 8) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  return param_1;
}


//// FUNCTION FUN_007a1990 @ 007a1990 ////

void __fastcall FUN_007a1990(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  float local_4;
  
  if (*(int *)((int)param_1 + 0x364) == 2) {
    local_4 = param_1;
    FUN_0085c530(&local_4);
    uVar3 = FUN_0043b560();
    iVar1 = FUN_0085baf0();
    local_4 = (float)((int)uVar3 + iVar1);
    puVar2 = (undefined4 *)FUN_0043b520(&local_4,(float)(int)local_4);
    *(undefined4 *)((int)param_1 + 0x370) = *puVar2;
  }
  return;
}


//// FUNCTION FUN_007a19e0 @ 007a19e0 ////

void __thiscall FUN_007a19e0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x364) = param_1;
  return;
}


//// FUNCTION FUN_007a19f0 @ 007a19f0 ////

void __fastcall FUN_007a19f0(int param_1)

{
  int *_Memory;
  
  _Memory = *(int **)(param_1 + 0x36c);
  if (_Memory != (int *)0x0) {
    FUN_008df190(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_007a1ca0 @ 007a1ca0 ////

void __fastcall FUN_007a1ca0(int param_1)

{
  int *_Memory;
  
  _Memory = *(int **)(param_1 + 0x36c);
  if (_Memory != (int *)0x0) {
    FUN_008df190(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_007a1cd0 @ 007a1cd0 ////

void __fastcall FUN_007a1cd0(void *param_1)

{
  int iVar1;
  void *this;
  float10 fVar2;
  int local_8;
  float local_4;
  
  iVar1 = FUN_008dc870((int)param_1);
  if (0 < iVar1) {
    this = (void *)FUN_008dd240(param_1,0);
    fVar2 = FUN_008dbd30((int)param_1);
    local_8 = *(int *)((int)param_1 + 0x80);
    local_4 = (float)((fVar2 + (float10)*(float *)((int)this + 0x74)) * (float10)0.5 +
                     (float10)*(float *)((int)param_1 + 0x84));
    FUN_008dc330(this,&local_8,(int *)((int)param_1 + 0x80));
  }
  return;
}


//// FUNCTION FUN_007a1d30 @ 007a1d30 ////

undefined4 * __thiscall FUN_007a1d30(void *this,byte param_1)

{
  thunk_FUN_008dbeb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007a1d60 @ 007a1d60 ////

undefined4 __thiscall FUN_007a1d60(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                       &TM::WTimelineAwardsIcon::RTTI_Type_Descriptor,0);
  iVar2 = 0;
  if (((iVar1 != 0) && (iVar2 = DAT_0104d8e8, DAT_0104d8e8 == 0)) &&
     (iVar2 = (**(code **)(*(int *)this + 0x34))(&DAT_0104cce0), (char)iVar2 != '\0')) {
    uVar3 = FUN_0043b560();
    iVar2 = FUN_0085bb00();
    if (iVar2 <= (int)uVar3) {
      FUN_007a1900(&stack0xffffffe0);
      if (*(int *)((int)this + 0x364) == 3) {
        FUN_008666a0('\x01');
        FUN_008666a0('\x01');
      }
      iVar2 = FUN_007c8760((undefined4 *)&stack0xffffffe0);
    }
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_007a1e20 @ 007a1e20 ////

float10 __fastcall FUN_007a1e20(int param_1)

{
  float10 fVar1;
  
  if ((*(int *)(param_1 + 0x39c) != 0) && ((DAT_0104d8e8 != 0 || (DAT_0104dff8 != 0)))) {
    fVar1 = FUN_00793f50(*(int *)(param_1 + 0x39c),*(undefined4 *)(param_1 + 0x370),(float *)0x0);
    return fVar1;
  }
  return (float10)*(float *)(param_1 + 0xc0);
}


//// FUNCTION FUN_007a1f90 @ 007a1f90 ////

undefined4 * __thiscall FUN_007a1f90(void *this,int param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  
  FUN_0053d690(this);
  *(undefined ***)this = &PTR_FUN_00d50ef0;
  piVar1 = (int *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 **)((int)this + 0x5c) = (undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x50) = &PTR_FUN_00d18c2c;
  *(int *)((int)this + 100) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x58) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x74) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 **)((int)this + 0x74) = (undefined4 *)((int)this + 0x68);
  *(undefined4 *)((int)this + 0x68) = &PTR_LAB_00d50ee0;
  *(int *)((int)this + 0x7c) = param_2;
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x18);
    *(int **)((int)this + 0x70) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
    *(undefined1 *)((int)this + 0x80) = param_3;
    return this;
  }
  *(undefined1 *)((int)this + 0x80) = param_3;
  return this;
}


//// FUNCTION FUN_007a2030 @ 007a2030 ////

undefined4 * __thiscall
FUN_007a2030(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdcb66;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0069d820(this,param_1,param_2,param_3,param_4,param_5);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d50f44;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d50f28;
  *(undefined1 *)((int)this + 0x362) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  FUN_0043b510((undefined4 *)((int)this + 0x370));
  puVar1 = (undefined4 *)((int)this + 0x374);
  FUN_0043b460(puVar1);
  *(undefined1 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 **)((int)this + 0x394) = (undefined4 *)((int)this + 0x388);
  *(undefined4 *)((int)this + 0x388) = &PTR_LAB_00d5048c;
  *(undefined4 *)((int)this + 0x39c) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)((int)this + 0x360) = 0;
  *(undefined1 *)((int)this + 0x361) = 0;
  FUN_0043b4d0(puVar1,1);
  *puVar1 = 10;
  uVar2 = FUN_0043b560();
  puVar1 = (undefined4 *)FUN_0043b520(&param_2,(float)(int)uVar2 - 100.0);
  *(undefined4 *)((int)this + 0x370) = *puVar1;
  FUN_00741630(this,5,0x7a1a50,this,"TIMELINEAWARDS");
  FUN_00741630(this,0,0x7a1eb0,this,"TIMELINEAWARDS");
  (*(code *)DAT_0104e824[1])();
  DAT_0104e838 = this;
  (*(code *)*DAT_0104e824)();
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007a2190 @ 007a2190 ////

void __fastcall FUN_007a2190(undefined4 *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdcb86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d50f44;
  param_1[0x14] = &PTR_FUN_00d50f28;
  piVar1 = (int *)param_1[0xda];
  local_4 = 1;
  if (piVar1 != (int *)0x0) {
    FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  piVar1 = (int *)param_1[0xdb];
  param_1[0xda] = 0;
  if (piVar1 != (int *)0x0) {
    FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  param_1[0xe2] = &PTR_LAB_00d5048c;
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
  local_4 = 0xffffffff;
  FUN_0069cf00(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007a22a0 @ 007a22a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007a22a0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *this;
  uint uVar5;
  int *piVar6;
  undefined4 extraout_EDX;
  bool bVar7;
  float10 fVar8;
  int *piVar9;
  char *local_b8;
  undefined4 local_b4;
  uint local_b0;
  char local_ac [20];
  float **local_98;
  undefined4 local_94;
  undefined1 *local_90;
  float *local_8c;
  uint uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  void *pvStack_70;
  undefined2 *puStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined2 auStack_60 [8];
  void *pvStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdcc32;
  pvStack_c = ExceptionList;
  piVar3 = *(int **)(param_1 + 0x36c);
  if (piVar3 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_008df190(piVar3);
                    /* WARNING: Subroutine does not return */
    _free(piVar3);
  }
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x3a0);
  bVar7 = pvVar2 == (void *)0x0;
  if (bVar7) {
    piVar3 = (int *)0x0;
  }
  else {
    local_98 = &local_8c;
    local_8c = (float *)((uint)local_8c & 0xffffff00);
    local_94 = 0;
    local_90 = (undefined1 *)0x20;
    local_98 = _malloc(0x20);
    _strncpy((char *)local_98,"ai_award_cup_event.flm",0x16);
    local_94 = 0x16;
    *(char *)((int)local_98 + 0x16) = '\0';
    local_b8 = local_ac;
    local_ac[0] = '\0';
    local_b4 = 0;
    local_b0 = 0x14;
    _strncpy(local_b8,"p_icon_award.msh",0x10);
    local_b4 = 0x10;
    local_b8[0x10] = '\0';
    local_4 = 2;
    piVar3 = FUN_0073e150(pvVar2,&local_b8,&local_98);
  }
  if ((!bVar7) && (0x14 < local_b0)) {
                    /* WARNING: Subroutine does not return */
    _free(local_b8);
  }
  local_4 = 0xffffffff;
  if ((!bVar7) && (&DAT_00000014 < local_90)) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  (**(code **)(*piVar3 + 0x74))(0x42c80000,0x42c80000);
  if ((DAT_0104e820 & 1) == 0) {
    DAT_0104e820 = DAT_0104e820 | 1;
    _DAT_0104e814 = 0.0;
    _DAT_0104e818 = 1.6;
    _DAT_0104e81c = 0.0262;
  }
  if ((DAT_0104e820 & 2) == 0) {
    DAT_0104e820 = DAT_0104e820 | 2;
    _DAT_0104e808 = 0;
    _DAT_0104e80c = 0;
    _DAT_0104e810 = 0x3fb33333;
  }
  if ((DAT_0104e820 & 4) == 0) {
    DAT_0104e820 = DAT_0104e820 | 4;
    DAT_0104e804 = 0.2617994;
  }
  fVar8 = (float10)fptan((float10)DAT_0104e804 * (float10)0.5);
  fStack_80 = (float)((float10)1.0 / fVar8);
  fStack_78 = fStack_80 * _DAT_0104e81c;
  fStack_7c = fStack_80 * _DAT_0104e818;
  fStack_80 = fStack_80 * _DAT_0104e814;
  (**(code **)(*piVar3 + 0xfc))(&fStack_80,&DAT_0104e808,DAT_00e59ef8,DAT_00e59efc,DAT_0104e804);
  puVar4 = operator_new(0x3fc);
  uStack_20 = 5;
  if (puVar4 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_00833290(puVar4);
  }
  uStack_20 = 0xffffffff;
  (**(code **)(*this + 0x78))(0x43160000);
  puStack_6c = auStack_60;
  *(undefined1 *)(this + 0xd6) = 1;
  auStack_60[0] = 0;
  uStack_68 = 0;
  uStack_64 = 10;
  uVar5 = FUN_00ace02d(L"SITT_AWARDS_TAKENPLACE");
  FUN_004036d0(&puStack_6c,L"SITT_AWARDS_TAKENPLACE",uVar5);
  local_8c = &fStack_80;
  uStack_24 = 6;
  fStack_80 = (float)((uint)fStack_80 & 0xffff0000);
  uStack_88 = 0;
  uStack_84 = 10;
  uVar5 = FUN_00ace02d((short *)&DAT_00d331c4);
  FUN_004036d0(&local_8c,L"e2",uVar5);
  uStack_24._0_1_ = 7;
  puVar4 = FUN_00831570(&uStack_4c,&local_8c,&puStack_6c);
  uStack_24 = CONCAT31(uStack_24._1_3_,8);
  (**(code **)(*this + 0x54))(puVar4);
  if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_50);
  }
  if (10 < uStack_88) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  uStack_28 = 0xffffffff;
  if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_70);
  }
  (**(code **)(*this + 0x84))(0);
  puVar4 = operator_new(0x344);
  uStack_2c = 9;
  if (puVar4 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = FUN_007432f0(puVar4);
  }
  uStack_2c = 0xffffffff;
  (**(code **)(*piVar3 + 0x5c))(1,piVar6,0);
  (**(code **)(*piVar3 + 100))(1,piVar6,0);
  piVar9 = piVar3;
  (**(code **)(*piVar6 + 0xc))(piVar3,1);
  iVar1 = *this;
  fVar8 = (float10)(**(code **)(*piVar3 + 0x10))();
  (**(code **)(iVar1 + 0x5c))(1,piVar6,(float)fVar8);
  FUN_0073e5e0(this,piVar3);
  (**(code **)(*piVar6 + 0xc))(this,1);
  (**(code **)(*piVar6 + 0x84))(0);
  pvVar2 = operator_new(0x84);
  uStack_64 = 10;
  if (pvVar2 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_007a1f90(pvVar2,(int)piVar9,0,0);
  }
  uStack_64 = 0xffffffff;
  puVar4 = FUN_008dc0a0(piVar6,puVar4);
  piVar3 = operator_new(0x14);
  uStack_64 = 0xb;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_008df0a0(piVar3,extraout_EDX,puVar4,0);
  }
  piVar9[0xdb] = (int)piVar3;
  piVar3[4] = 0;
  iVar1 = puVar4[0x12];
  uStack_64 = 0xffffffff;
  puVar4[0x12] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)*puVar4)(1);
  }
  ExceptionList = puStack_6c;
  return;
}


//// FUNCTION FUN_007a2790 @ 007a2790 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007a2790(void *this,char param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *this_00;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 extraout_EDX;
  char cVar7;
  ulonglong uVar8;
  undefined1 local_20;
  float local_18;
  float local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdcc6c;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x368) == 0) {
    ExceptionList = &local_c;
    FUN_0043b510((undefined4 *)&stack0xffffffdc);
    iVar3 = *(int *)((int)this + 0x364);
    if (iVar3 == 0) {
      FUN_0085bae0(&local_10);
    }
    else if (iVar3 == 1) {
      FUN_0085c530(&local_14);
    }
    else if (iVar3 == 2) {
      pvVar2 = operator_new(4);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        local_4 = 0xffffffff;
      }
      else {
        FUN_0085c530(&local_18);
        uVar8 = FUN_0043b560();
        iVar3 = FUN_0085baf0();
        FUN_0043b520(pvVar2,(float)((int)uVar8 + iVar3));
        local_4 = 0xffffffff;
      }
    }
    puVar4 = (undefined4 *)FUN_007c1780();
    this_00 = operator_new(0x4e0);
    local_4 = 1;
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      FUN_008dbd50(this_00,(int)puVar4);
      *this_00 = &PTR_FUN_00d50e8c;
    }
    local_4 = 0xffffffff;
    FUN_008d55e0(this_00,0);
    *(undefined1 *)(this_00 + 299) = 1;
    local_20 = 0;
    if ((DAT_0104d8e8 != 0) || (DAT_0104dff8 != 0)) {
      local_20 = 1;
    }
    pvVar2 = operator_new(0x84);
    local_4 = 2;
    if (pvVar2 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_007a1f90(pvVar2,(int)this,0,local_20);
    }
    local_4 = 0xffffffff;
    FUN_008dcf70(this_00,puVar5);
    FUN_008db920(this_00);
    FUN_008d56d0(this_00,2);
    piVar6 = operator_new(0x14);
    local_4 = 3;
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = FUN_008df0a0(piVar6,extraout_EDX,this_00,1);
    }
    local_4 = 0xffffffff;
    *(int **)((int)this + 0x368) = piVar6;
    if (param_1 == '\0') {
      piVar6[4] = 8000;
    }
    else {
      piVar6[4] = DAT_00e5fb08 * 2;
    }
    piVar6 = (int *)0x0;
    if (param_1 != '\0') {
      cVar7 = *(int *)((int)this + 0x364) == 3;
      pvVar2 = (void *)AwardBonusManager_Get();
      cVar7 = FUN_0085b860(pvVar2,cVar7);
      if (cVar7 != '\0') {
        piVar6 = FUN_0063c630();
        FUN_008ddae0(this_00,piVar6);
        *(undefined1 *)(piVar6 + 299) = 1;
      }
    }
    piVar1 = puVar4 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(1);
    }
    piVar1 = this_00 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*this_00)(1);
    }
    if (piVar6 != (int *)0x0) {
      piVar1 = piVar6 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*piVar6)(1);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007a2a20 @ 007a2a20 ////

undefined4 * __thiscall FUN_007a2a20(void *this,byte param_1)

{
  FUN_007a2a40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007a2a40 @ 007a2a40 ////

void __fastcall FUN_007a2a40(undefined4 *param_1)

{
  param_1[0x1a] = &PTR_LAB_00d50ee0;
  if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1c] = param_1[0x1b];
  }
  if (param_1[0x1b] != 0) {
    *(undefined4 *)(param_1[0x1b] + 4) = param_1[0x1c];
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1c] = param_1[0x1b];
  }
  if (param_1[0x1b] != 0) {
    *(undefined4 *)(param_1[0x1b] + 4) = param_1[0x1c];
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x14] = &PTR_FUN_00d18c2c;
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
  *param_1 = &PTR_FUN_00d2c6a0;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_007a2ae0 @ 007a2ae0 ////

undefined4 * __thiscall FUN_007a2ae0(void *this,byte param_1)

{
  FUN_007a2190(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION WTimelineAwardsIcon_Tick @ 007a2b00 ////

void __fastcall WTimelineAwardsIcon_Tick(int *param_1)

{
  int *_Memory;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 uVar5;
  float10 fVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  undefined1 *puVar10;
  char *pcStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  char acStack_48 [20];
  uint auStack_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdcc88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow_Tick(param_1);
  uVar5 = extraout_EDX;
  if (param_1[0xe7] == 0) {
    iVar1 = FUN_00ace790((int *)param_1[0x46],0,&TM::WWindow::RTTI_Type_Descriptor,
                         &TM::WTimeline::RTTI_Type_Descriptor,0);
    (**(code **)(param_1[0xe2] + 4))();
    param_1[0xe7] = iVar1;
    (**(code **)param_1[0xe2])();
    uVar5 = extraout_EDX_00;
  }
  if (*(char *)((int)param_1 + 0x361) == '\0') {
    if ((char)param_1[0xd8] != '\0') {
      (**(code **)(*param_1 + 0x74))();
      *(undefined1 *)(param_1 + 0xd8) = 0;
      uVar5 = extraout_EDX_07;
    }
    goto LAB_007a2c71;
  }
  if (param_1[0xda] == 0) {
    if (param_1[0xd9] == 3) {
LAB_007a2bc6:
      FUN_007a2790(param_1,'\x01');
      uVar5 = extraout_EDX_03;
    }
    else {
      uVar7 = FUN_0043b560();
      iVar1 = FUN_0085bb00();
      if ((iVar1 <= (int)uVar7) || (uVar5 = extraout_EDX_01, DAT_010503d0 != '\0')) {
        pvVar3 = (void *)param_1[0xe7];
        fVar6 = FUN_00793f50((int)pvVar3,param_1[0xdc],(float *)0x0);
        uVar2 = FUN_00795fa0(pvVar3,(float)fVar6);
        uVar5 = extraout_EDX_02;
        if ((char)uVar2 != '\0') goto LAB_007a2bc6;
      }
    }
  }
  else {
    FUN_008def30(param_1[0xda],uVar5);
    uVar5 = extraout_EDX_04;
  }
  if ((char)param_1[0xd8] == '\0') {
    pvVar3 = (void *)param_1[0xe7];
    fVar6 = FUN_00793f50((int)pvVar3,param_1[0xdc],(float *)0x0);
    uVar2 = FUN_00795fa0(pvVar3,(float)fVar6);
    uVar5 = extraout_EDX_05;
    if ((char)uVar2 != '\0') {
      (**(code **)(*param_1 + 0x74))();
      *(undefined1 *)(param_1 + 0xd8) = 1;
      FUN_0041c9c0(auStack_34,"HUD_TIMELINE_AWARD_EVENT_HIGHLIGHTED");
      puVar10 = &DAT_00d17518;
      iVar9 = 0;
      puVar8 = auStack_34;
      auStack_34[0] = auStack_34[0] & 0xfffffffe;
      iVar1 = 2;
      pvVar3 = (void *)FUN_004f3b20();
      FUN_004f3270(pvVar3,iVar1,(byte *)puVar8,iVar9,puVar10);
      uVar5 = extraout_EDX_06;
    }
  }
LAB_007a2c71:
  if ((int *)param_1[0xda] != (int *)0x0) {
    uVar7 = FUN_008def80((int *)param_1[0xda],uVar5);
    if ((char)uVar7 != '\0') {
      _Memory = (int *)param_1[0xda];
      if (_Memory != (int *)0x0) {
        FUN_008df190(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      param_1[0xda] = 0;
    }
  }
  uVar2 = FUN_0043b490((uint *)(param_1 + 0xdd));
  if (((char)uVar2 != '\0') && (*(char *)((int)param_1 + 0x362) == '\0')) {
    uVar7 = FUN_0043b560();
    iVar1 = (int)uVar7;
    iVar9 = FUN_0085c570();
    if ((iVar9 <= iVar1 + 1) || (iVar9 <= iVar1)) {
      iVar4 = FUN_0085baf0();
      if (iVar1 < iVar4 + iVar9) {
        pcStack_54 = acStack_48;
        acStack_48[0] = '\0';
        uStack_50 = 0;
        uStack_4c = 0x20;
        pcStack_54 = _malloc(0x20);
        _strncpy(pcStack_54,"ui/timeline_award2.dds",0x16);
        uStack_50 = 0x16;
        pcStack_54[0x16] = '\0';
        uStack_4 = 0;
        (**(code **)(*param_1 + 0x100))(&pcStack_54);
        if (0x14 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_54);
        }
        *(undefined1 *)((int)param_1 + 0x362) = 1;
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0x361) = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007a2da0 @ 007a2da0 ////

void __fastcall FUN_007a2da0(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_8;
  float local_4;
  
  puVar1 = &local_8;
  local_4 = *(float *)(param_1 + 0x9c) + 8.0;
  local_8 = 0x43080000;
  FUN_005f0460();
  FUN_005f0b70(puVar1);
  FUN_007a22a0(param_1);
  return;
}


//// FUNCTION WTimelineEventIcon_ValidateClickTarget @ 007a2e10 ////

undefined4 WTimelineEventIcon_ValidateClickTarget(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00ace790(param_2,0,&TM::TMBase::RTTI_Type_Descriptor,
                       &TM::WTimelineEventIcon::RTTI_Type_Descriptor,0);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION WTimelineEventIcon_UpdateSparkleAnimation @ 007a2f80 ////

void __fastcall WTimelineEventIcon_UpdateSparkleAnimation(int *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  uint uVar5;
  float10 fVar6;
  ulonglong uVar7;
  float fVar8;
  float local_c [3];
  
  if ((DAT_0104d8e8 == 0) && (DAT_0104dff8 == 0)) {
    if ((char)param_1[0xdc] != '\0') {
      uVar7 = FUN_00990ae0(param_1,param_2);
      uVar5 = (int)uVar7 - param_1[0xe3];
      if (100 < uVar5) {
        uVar5 = 100;
      }
      fVar8 = (float)(int)uVar5;
      if ((int)uVar5 < 0) {
        fVar8 = fVar8 + 4.2949673e+09;
      }
      param_1[0xe3] = (int)uVar7;
      local_c[0] = fVar8 * 0.0002 + (float)param_1[0xea];
      param_1[0xea] = (int)local_c[0];
      fVar6 = FUN_004012c0(local_c[0]);
      local_c[0] = (float)fVar6;
      iVar2 = (**(code **)(*(int *)param_1[0xe2] + 0x108))();
      *(float *)(iVar2 + 0xc) = local_c[0];
      (**(code **)(*(int *)param_1[0xe2] + 0x2c))();
    }
    FUN_0073fb40(param_1);
    return;
  }
  if ((((uint)param_1[0x86] >> 4 & 1) != 0) && ((int *)param_1[0xd6] != (int *)0x0)) {
    pfVar3 = (float *)(**(code **)(*(int *)param_1[0xd6] + 0x34))(local_c);
    if (0.0 <= *pfVar3) {
      iVar2 = (**(code **)(*(int *)param_1[0xe9] + 0x108))();
      puVar4 = (undefined4 *)(**(code **)(*(int *)param_1[0xd6] + 0x34))(&stack0xfffffff0);
      *(undefined4 *)(iVar2 + 0x10) = *puVar4;
      *(undefined4 *)(iVar2 + 0x14) = puVar4[1];
      *(undefined4 *)(iVar2 + 0x18) = 0;
      local_c[0] = *(float *)(iVar2 + 0x18);
      if ((char)param_1[0xd9] == '\0') {
        fVar8 = *(float *)(iVar2 + 0x10) + 16.0;
        fVar1 = *(float *)(iVar2 + 0x14) + 16.0;
      }
      else {
        fVar8 = *(float *)(iVar2 + 0x10) + 32.0;
        fVar1 = *(float *)(iVar2 + 0x14) + 32.0;
      }
      *(float *)(iVar2 + 0x1c) = fVar8;
      *(float *)(iVar2 + 0x20) = fVar1;
      *(float *)(iVar2 + 0x24) = local_c[0];
      BuildAndDrawPrimitive(iVar2);
    }
  }
  return;
}


//// FUNCTION FUN_007a3110 @ 007a3110 ////

void __thiscall FUN_007a3110(void *this,int param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  
  *(undefined1 *)((int)this + 0x370) = 1;
  *(int *)((int)this + 0x36c) = param_1;
  *(undefined1 *)((int)this + 0x364) = 1;
  (**(code **)(*(int *)this + 0x74))(0x42800000,0x42800000);
  (**(code **)(**(int **)((int)this + 0x388) + 0x20))(1);
  (**(code **)(**(int **)((int)this + 0x3a4) + 0x74))(0x41c00000,0x41c00000);
  (**(code **)(**(int **)((int)this + 0x3a4) + 100))(1,this,0x41a00000);
  (**(code **)(**(int **)((int)this + 0x3a4) + 0x5c))(1,this,0x41a80000);
  uVar1 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)((int)this + 0x38c) = (int)uVar1;
  return;
}


//// FUNCTION FUN_007a3250 @ 007a3250 ////

void __fastcall FUN_007a3250(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d51100;
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


//// FUNCTION WTimelineEventIcon_Constructor @ 007a32a0 ////

undefined4 * __thiscall WTimelineEventIcon_Constructor(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint unaff_EDI;
  float10 fVar8;
  ulonglong uVar9;
  char *_Dest;
  void **local_2c;
  undefined4 local_28;
  uint local_24;
  void *local_20 [5];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdcd1a;
  pvStack_c = ExceptionList;
  puVar7 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d5116c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d51154;
  piVar1 = (int *)((int)this + 0x348);
  *(undefined4 *)((int)this + 0x350) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_LAB_00d51100;
  *(undefined4 **)((int)this + 0x358) = param_1;
  iVar5 = 0;
  if (param_1 != (undefined4 *)0x0) {
    piVar2 = param_1 + 6;
    *(int **)((int)this + 0x34c) = piVar2;
    *piVar1 = *piVar2;
    iVar5 = *piVar2;
    *(int **)(iVar5 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar2 = (int *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined1 *)((int)this + 0x364) = 0;
  *(undefined1 *)((int)this + 0x365) = 0;
  *(undefined1 *)((int)this + 0x366) = 0;
  *(undefined1 *)((int)this + 0x367) = 0;
  *(undefined1 *)((int)this + 0x368) = 0;
  *(undefined1 *)((int)this + 0x369) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined1 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(int **)((int)this + 0x380) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x388) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  uVar9 = FUN_00990ae0(piVar1,iVar5);
  piVar1 = (int *)((int)this + 0x390);
  *(int *)((int)this + 0x38c) = (int)uVar9;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(int **)((int)this + 0x39c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  local_4._0_1_ = 3;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  pvVar4 = operator_new(0x360);
  if (pvVar4 == (void *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy((char *)local_2c,"ui/lifetimeawards_glow.dds",0x1a);
    local_28 = 0x1a;
    *(char *)((int)local_2c + 0x1a) = '\0';
    local_4 = CONCAT31(local_4._1_3_,5);
    param_1 = FUN_0069d820(pvVar4,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 6;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 **)((int)this + 0x388) = param_1;
  (**(code **)*piVar2)();
  local_4 = 3;
  if ((pvVar4 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  _Dest = (char *)0x42800000;
  (**(code **)(**(int **)((int)this + 0x388) + 0x74))();
  uVar6 = 0;
  (**(code **)(**(int **)((int)this + 0x388) + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x388) + 100))();
  (**(code **)(**(int **)((int)this + 0x388) + 0x20))();
  local_20[0] = *(void **)((int)this + 0x3a8);
  fVar8 = FUN_004012c0((float)local_20[0]);
  local_20[0] = (void *)(float)fVar8;
  iVar5 = (**(code **)(**(int **)((int)this + 0x388) + 0x108))();
  *(void **)(iVar5 + 0xc) = local_20[0];
  puVar3 = (uint *)(*(int *)((int)this + 0x388) + 0x114);
  *puVar3 = *puVar3 & 0xfffffffd;
  FUN_0073f6e0(this,*(int **)((int)this + 0x388));
  pvVar4 = operator_new(0x360);
  local_20[0] = pvVar4;
  if (pvVar4 != (void *)0x0) {
    unaff_EDI = 0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ui/timeline_world.dds",0x15);
    _Dest[0x15] = '\0';
    uVar6 = uVar6 | 2;
    local_28 = CONCAT31(local_28._1_3_,8);
    puVar7 = FUN_0069d820(pvVar4,(undefined4 *)&stack0xffffffb0,0,0,0x3f800000,0x3f800000);
  }
  local_28 = 9;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x3a4) = puVar7;
  (**(code **)*piVar1)();
  local_28 = 3;
  if (((uVar6 & 2) != 0) && (0x14 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  (**(code **)(**(int **)((int)this + 0x3a4) + 0x74))();
  (**(code **)(**(int **)((int)this + 0x3a4) + 100))(1);
  (**(code **)(**(int **)((int)this + 0x3a4) + 0x5c))(1,this,0x41800000);
  FUN_0073f6e0(this,*(int **)((int)this + 0x3a4));
  (**(code **)(**(int **)((int)this + 0x3a4) + 0x18))
            (5,WTimelineEventIcon_ValidateClickTarget,this,"TIMELINEEVENT");
  ExceptionList = (void *)0x0;
  return this;
}


//// FUNCTION FUN_007a3650 @ 007a3650 ////

void __fastcall FUN_007a3650(undefined4 *param_1)

{
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdcd62;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d5116c;
  param_1[0x14] = &PTR_FUN_00d51154;
  _Memory = (int *)param_1[0xd7];
  local_4 = 3;
  if (_Memory != (int *)0x0) {
    FUN_008df190(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0xd7] = 0;
  param_1[0xe4] = &PTR_FUN_00d2d110;
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
  param_1[0xd1] = &PTR_LAB_00d51100;
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


//// FUNCTION CNoduleEvent_BuildLocalizationKey @ 007a3820 ////

undefined4 * __fastcall CNoduleEvent_BuildLocalizationKey(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  undefined4 *unaff_retaddr;
  void *local_24 [2];
  uint uStack_1c;
  
  local_24[0] = (void *)0x0;
  pfVar1 = (float *)(**(code **)(**(int **)(param_1 + 0x358) + 8))(local_24);
  uVar2 = FUN_0043b6e0(&DAT_00e4fa4c,pfVar1);
  pwVar4 = L"_FUTURE";
  if ((char)uVar2 == '\0') {
    pwVar4 = L"_PAST";
  }
  puVar3 = CNoduleEvent_GetName(*(void **)(param_1 + 0x358),local_24);
  FUN_0043be60(unaff_retaddr,puVar3,pwVar4);
  if (10 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_24[0]);
  }
  return unaff_retaddr;
}


//// FUNCTION FUN_007a38a0 @ 007a38a0 ////

undefined4 * __thiscall FUN_007a38a0(void *this,byte param_1)

{
  FUN_007a3650(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION WTimelineEventIcon_ShowTitleBubble @ 007a38c0 ////

void __fastcall WTimelineEventIcon_ShowTitleBubble(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  size_t sVar4;
  int *piVar5;
  undefined4 extraout_EDX;
  char local_5c [4];
  undefined4 *local_58;
  int *local_54;
  undefined4 local_50;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  wchar_t *local_2c;
  size_t local_28;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdcdac;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x358) != 0) {
    ExceptionList = &local_c;
    local_58 = operator_new(0x3fc);
    local_4 = 0;
    if (local_58 == (undefined4 *)0x0) {
      local_58 = (undefined4 *)0x0;
    }
    else {
      local_58 = FUN_00833290(local_58);
    }
    puVar2 = local_58;
    local_4 = 0xffffffff;
    local_5c[3] = 0xff;
    local_5c[2] = 0;
    local_5c[1] = 0;
    local_5c[0] = '\0';
    FUN_00830550(local_58,8,local_5c);
    *(undefined1 *)(puVar2 + 0xd6) = 1;
    local_54 = operator_new(0x4e0);
    local_4 = 1;
    if (local_54 == (int *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_008dbd50(local_54,(int)puVar2);
    }
    local_4 = 0xffffffff;
    puVar2[0x45] = 0xfff0f0f0;
    puVar2[0x46] = 0xff000000;
    FUN_008d56d0(puVar2,2);
    local_54 = operator_new(0x84);
    local_4 = 2;
    if (local_54 == (int *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_007a1f90(local_54,*(int *)(param_1 + 0x3a4),*(int *)(param_1 + 0x358),0);
    }
    local_4 = 0xffffffff;
    FUN_008dcf70(puVar2,puVar3);
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4 = 3;
    CNoduleEvent_BuildLocalizationKey(param_1);
    local_4._0_1_ = 4;
    sVar4 = FUN_00ace02d(L"<table align=justify width=180><tr><td align=center><e1><translate>");
    FUN_0040cae0(&local_4c,L"<table align=justify width=180><tr><td align=center><e1><translate>",
                 sVar4);
    FUN_0040cae0(&local_4c,local_2c,local_28);
    sVar4 = FUN_00ace02d(L"_TITLE</translate></e1></td></tr>");
    FUN_0040cae0(&local_4c,L"_TITLE</translate></e1></td></tr>",sVar4);
    sVar4 = FUN_00ace02d(L"</table>");
    FUN_0040cae0(&local_4c,L"</table>",sVar4);
    *(undefined1 *)(puVar2 + 299) = 1;
    local_54 = (int *)0x41a00000;
    local_50 = 0;
    FUN_008dbf20(puVar2,&local_54);
    FUN_008dbf40(puVar2,&local_4c);
    local_54 = operator_new(0x14);
    local_4._0_1_ = 5;
    if (local_54 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_008df0a0(local_54,extraout_EDX,puVar2,1);
    }
    *(int **)(param_1 + 0x35c) = piVar5;
    iVar1 = puVar2[0x12];
    local_4 = CONCAT31(local_4._1_3_,4);
    puVar2[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    piVar5 = local_58 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*local_58)(1);
    }
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION WTimelineEventIcon_ShowDetailBubble @ 007a3b30 ////

void __fastcall WTimelineEventIcon_ShowDetailBubble(int param_1)

{
  void *this;
  uint uVar1;
  size_t sVar2;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  wchar_t *local_4c;
  size_t local_48;
  uint local_44;
  wchar_t local_40 [10];
  wchar_t *local_2c;
  size_t local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdcdd8;
  local_c = ExceptionList;
  if ((*(undefined4 **)(param_1 + 0x35c) != (undefined4 *)0x0) &&
     (ExceptionList = &local_c,
     this = (void *)FUN_00ace790((int *)**(undefined4 **)(param_1 + 0x35c),0,
                                 &TM::Bubble::RTTI_Type_Descriptor,
                                 &TM::BubbleWindow::RTTI_Type_Descriptor,0), this != (void *)0x0)) {
    CNoduleEvent_BuildLocalizationKey(param_1);
    local_4c = local_40;
    local_4 = 0;
    local_40[0] = L'\0';
    local_48 = 0;
    local_44 = 10;
    uVar1 = FUN_00ace02d(L"<tr><td height=8></td></tr>");
    FUN_004036d0(&local_4c,L"<tr><td height=8></td></tr>",uVar1);
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 10;
    local_4 = CONCAT31(local_4._1_3_,2);
    sVar2 = FUN_00ace02d(L"<table align=justify width=280><tr><td align=center><e1><translate>");
    FUN_0040cae0(&local_6c,L"<table align=justify width=280><tr><td align=center><e1><translate>",
                 sVar2);
    FUN_0040cae0(&local_6c,local_2c,local_28);
    sVar2 = FUN_00ace02d(L"_TITLE</translate></e1></td></tr>");
    FUN_0040cae0(&local_6c,L"_TITLE</translate></e1></td></tr>",sVar2);
    FUN_0040cae0(&local_6c,local_4c,local_48);
    sVar2 = FUN_00ace02d(L"<tr><td><e2><translate>");
    FUN_0040cae0(&local_6c,L"<tr><td><e2><translate>",sVar2);
    FUN_0040cae0(&local_6c,local_2c,local_28);
    sVar2 = FUN_00ace02d(L"_SUBTITLE</translate></e2></td></tr>");
    FUN_0040cae0(&local_6c,L"_SUBTITLE</translate></e2></td></tr>",sVar2);
    FUN_0040cae0(&local_6c,local_4c,local_48);
    sVar2 = FUN_00ace02d(L"<tr><td><e3><translate>");
    FUN_0040cae0(&local_6c,L"<tr><td><e3><translate>",sVar2);
    FUN_0040cae0(&local_6c,local_2c,local_28);
    sVar2 = FUN_00ace02d(L"_DESCRIPTION</translate></e3></td></tr>");
    FUN_0040cae0(&local_6c,L"_DESCRIPTION</translate></e3></td></tr>",sVar2);
    sVar2 = FUN_00ace02d(L"</table>");
    FUN_0040cae0(&local_6c,L"</table>",sVar2);
    FUN_008dbf40(this,&local_6c);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION WTimelineEventIcon_Update @ 007a3d60 ////

void __fastcall WTimelineEventIcon_Update(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  uint uVar5;
  void *this;
  float *pfVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  float10 fVar10;
  ulonglong uVar11;
  void **ppvVar12;
  void **ppvVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined1 auStack_9c [4];
  float fStack_98;
  void *apvStack_94 [2];
  uint uStack_8c;
  void *apvStack_74 [2];
  uint uStack_6c;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdce26;
  local_c = ExceptionList;
  if (*DAT_00f87b04 < 3) {
    return;
  }
  ExceptionList = &local_c;
  WWindow_Tick(param_1);
  uVar7 = extraout_EDX;
  if (param_1[0xd6] == 0) {
LAB_007a3ef3:
    if ((char)param_1[0xdc] == '\0') goto LAB_007a3f84;
  }
  else {
    if (*(char *)((int)param_1 + 0x365) != '\0') {
      pvVar4 = (void *)FUN_00ace790((int *)param_1[0x46],0,&TM::WWindow::RTTI_Type_Descriptor,
                                    &TM::WTimeline::RTTI_Type_Descriptor,0);
      uVar7 = extraout_EDX_00;
      if ((char)param_1[0xd9] == '\0') {
        fVar10 = (float10)(**(code **)(*(int *)param_1[0xd6] + 0x10))();
        uVar5 = FUN_00795fa0(pvVar4,(float)fVar10);
        uVar7 = extraout_EDX_01;
        if ((char)uVar5 != '\0') {
          *(undefined1 *)(param_1 + 0xd9) = 1;
          (**(code **)(*(int *)param_1[0xe9] + 0x74))(0x42000000,0x42000000);
          (**(code **)(*param_1 + 0x74))(0x42800000,0x42800000);
          FUN_0041c9c0(apvStack_74,"HUD_TIMELINE_WORLD_EVENT_HIGHLIGHTED");
          apvStack_74[0] = (void *)((uint)apvStack_74[0] & 0xfffffffe);
          puVar17 = &DAT_00d17518;
          iVar16 = 0;
          ppvVar13 = apvStack_74;
          iVar14 = 2;
          this = (void *)FUN_004f3b20();
          FUN_004f3270(this,iVar14,(byte *)ppvVar13,iVar16,puVar17);
          uVar7 = extraout_EDX_02;
        }
      }
      if (param_1[0xd7] == 0) {
        fVar10 = (float10)(**(code **)(*(int *)param_1[0xd6] + 0x10))();
        uVar5 = FUN_00795fa0(pvVar4,(float)fVar10);
        uVar7 = extraout_EDX_03;
        if ((char)uVar5 != '\0') {
          WTimelineEventIcon_ShowTitleBubble((int)param_1);
          uVar7 = extraout_EDX_04;
          goto LAB_007a3ef3;
        }
      }
      if (param_1[0xd7] != 0) {
        FUN_008def30(param_1[0xd7],uVar7);
        uVar7 = extraout_EDX_05;
        if ((uint)param_1[0xd8] < 10) {
          param_1[0xd8] = param_1[0xd8] + 1;
        }
        else if (*(char *)((int)param_1 + 0x366) == '\0') {
          WTimelineEventIcon_ShowDetailBubble((int)param_1);
          *(undefined1 *)((int)param_1 + 0x366) = 1;
          uVar7 = extraout_EDX_06;
        }
      }
      goto LAB_007a3ef3;
    }
    if ((char)param_1[0xd9] == '\0') goto LAB_007a3ef3;
    if ((char)param_1[0xdc] == '\0') {
      (**(code **)(*(int *)param_1[0xe9] + 0x74))(0x41800000,0x41800000);
      (**(code **)(*param_1 + 0x74))(0x42000000,0x42000000);
      *(undefined1 *)(param_1 + 0xd9) = 0;
      uVar7 = extraout_EDX_07;
      goto LAB_007a3ef3;
    }
  }
  bVar2 = FUN_009b1140(param_1[0xdb]);
  uVar7 = extraout_EDX_08;
  if (!bVar2) {
    *(undefined1 *)(param_1 + 0xdc) = 0;
    if ((char)param_1[0xd9] != '\0') {
      (**(code **)(*(int *)param_1[0xe9] + 0x74))(0x41800000,0x41800000);
      (**(code **)(*param_1 + 0x74))(0x42800000,0x42800000);
      *(undefined1 *)(param_1 + 0xd9) = 0;
    }
    param_1[0xdb] = 0;
    (**(code **)(*(int *)param_1[0xe2] + 0x20))(0);
    (**(code **)(*(int *)param_1[0xe9] + 0x5c))(1,param_1,0x41800000);
    (**(code **)(*(int *)param_1[0xe9] + 100))(1,param_1,0x41800000);
    uVar7 = extraout_EDX_09;
  }
LAB_007a3f84:
  if (((int *)param_1[0xd7] != (int *)0x0) &&
     (uVar11 = FUN_008def80((int *)param_1[0xd7],uVar7), (char)uVar11 != '\0')) {
    piVar1 = (int *)param_1[0xd7];
    if (piVar1 != (int *)0x0) {
      FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
      _free(piVar1);
    }
    param_1[0xd7] = 0;
    *(undefined1 *)((int)param_1 + 0x366) = 0;
    param_1[0xd8] = 0;
  }
  if ((int *)param_1[0xd6] != (int *)0x0) {
    pfVar6 = (float *)(**(code **)(*(int *)param_1[0xd6] + 8))(auStack_9c);
    uVar7 = FUN_0043b6a0(&DAT_00e4fa4c,pfVar6);
    if ((((char)uVar7 != '\0') && (*(char *)((int)param_1 + 0x367) == '\0')) && (DAT_0104d8e8 == 0))
    {
      fStack_a8 = *(float *)(param_1[0xe9] + 0x9c) + 8.0;
      pfVar6 = &fStack_a4;
      fStack_ac = *(float *)(param_1[0xe9] + 0xc0) + 8.0;
      fStack_a4 = fStack_ac;
      fStack_a0 = fStack_a8;
      FUN_005f0460();
      FUN_005f0b70(pfVar6);
      piVar1 = (int *)param_1[0xd6];
      *(undefined1 *)((int)param_1 + 0x367) = 1;
      pfVar6 = (float *)FUN_0043b520(auStack_9c,0.5);
      pfVar8 = (float *)(**(code **)(*piVar1 + 8))(&fStack_98);
      pvVar4 = (void *)FUN_0043b620(&DAT_00e4fa4c,&fStack_ac,pfVar8);
      uVar7 = FUN_0043b6e0(pvVar4,pfVar6);
      if ((char)uVar7 != '\0') {
        iVar14 = FUN_00ace790((int *)param_1[0x46],0,&TM::WWindow::RTTI_Type_Descriptor,
                              &TM::WTimeline::RTTI_Type_Descriptor,0);
        cVar3 = FUN_007942d0(iVar14);
        if (cVar3 == '\0') {
          puVar9 = CNoduleEvent_GetName((void *)param_1[0xd6],apvStack_74);
          uStack_4 = 0;
          FUN_00568870(apvStack_2c,puVar9);
          if (10 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_74[0]);
          }
          FUN_00401de0(apvStack_94,"radio",0xffffffff);
          uVar7 = 0x3f800000;
          iVar15 = 1;
          iVar16 = 1;
          ppvVar13 = apvStack_94;
          ppvVar12 = apvStack_2c;
          iVar14 = 2;
          uStack_4 = CONCAT31(uStack_4._1_3_,3);
          pvVar4 = (void *)FUN_004f3b20();
          FUN_004f87c0(pvVar4,iVar14,ppvVar12,ppvVar13,iVar16,iVar15,uVar7);
          if (0x14 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_94[0]);
          }
          uStack_4 = 0xffffffff;
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
        }
      }
    }
    if (*(char *)((int)param_1 + 0x369) == '\0') {
      (**(code **)(*(int *)param_1[0xd6] + 8))(&fStack_b0);
      pfVar6 = (float *)FUN_0043b520(&fStack_ac,2.0);
      FUN_0043b5f0(&fStack_b0,pfVar6);
      uVar7 = FUN_0043b6a0(&DAT_00e4fa4c,&fStack_b0);
      if ((char)uVar7 != '\0') {
        pfVar6 = (float *)FUN_0043b520(&fStack_ac,0.5);
        pvVar4 = (void *)FUN_0043b620(&DAT_00e4fa4c,&fStack_98,&fStack_b0);
        uVar7 = FUN_0043b6e0(pvVar4,pfVar6);
        if ((char)uVar7 != '\0') {
          iVar14 = FUN_00ace790((int *)param_1[0x46],0,&TM::WWindow::RTTI_Type_Descriptor,
                                &TM::WTimeline::RTTI_Type_Descriptor,0);
          cVar3 = FUN_007942d0(iVar14);
          if (cVar3 == '\0') {
            puVar9 = CNoduleEvent_GetName((void *)param_1[0xd6],apvStack_74);
            uStack_4 = 4;
            FUN_00568870(apvStack_94,puVar9);
            if (10 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_74[0]);
            }
            FUN_00407630(apvStack_94,"_FUTURE");
            FUN_00401de0(apvStack_4c,"radio",0xffffffff);
            uVar7 = 0x3f800000;
            iVar15 = 1;
            iVar16 = 1;
            ppvVar12 = apvStack_4c;
            ppvVar13 = apvStack_94;
            iVar14 = 2;
            uStack_4 = CONCAT31(uStack_4._1_3_,7);
            pvVar4 = (void *)FUN_004f3b20();
            FUN_004f87c0(pvVar4,iVar14,ppvVar13,ppvVar12,iVar16,iVar15,uVar7);
            if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_4c[0]);
            }
            if (0x14 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_94[0]);
            }
          }
          *(undefined1 *)((int)param_1 + 0x369) = 1;
        }
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0x365) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007a44f0 @ 007a44f0 ////

undefined4 __fastcall FUN_007a44f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x34))(&DAT_0104cce0,&local_4);
  if (((char)iVar1 != '\0') && (iVar1 = DAT_0104d8e8, DAT_0104d8e8 == 0)) {
    piVar2 = (int *)FUN_005b22a0(param_1[0xdd]);
    iVar1 = (**(code **)(*piVar2 + 0x24))();
    if (iVar1 == 7) {
      piVar2 = FUN_004aa180(DAT_0104a8ac,(int *)param_1[0xdd],0);
      iVar1 = (**(code **)(*piVar2 + 0xc))();
    }
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_007a4560 @ 007a4560 ////

void __thiscall FUN_007a4560(void *this,byte param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x374) == 0) {
    *(uint *)((int)this + 0x218) =
         *(uint *)((int)this + 0x218) ^ ((uint)param_1 << 4 ^ *(uint *)((int)this + 0x218)) & 0x10;
    return;
  }
  piVar1 = (int *)FUN_005b22a0(*(int *)((int)this + 0x374));
  iVar2 = (**(code **)(*piVar1 + 0x24))();
  if (iVar2 != 2) {
    iVar2 = (**(code **)(*piVar1 + 0x24))();
    if (iVar2 != 3) goto LAB_007a45a6;
  }
  if (DAT_0104d8e8 != 0) {
    iVar2 = *(int *)((int)this + 0x374);
    iVar3 = FUN_005f5ba0(DAT_0104d8e8);
    if (iVar3 == iVar2) {
LAB_007a45a6:
      *(uint *)((int)this + 0x218) =
           *(uint *)((int)this + 0x218) ^ ((uint)param_1 << 4 ^ *(uint *)((int)this + 0x218)) & 0x10
      ;
      return;
    }
  }
  *(uint *)((int)this + 0x218) = *(uint *)((int)this + 0x218) & 0xffffffef;
  return;
}


//// FUNCTION FUN_007a4680 @ 007a4680 ////

undefined4 * __thiscall
FUN_007a4680(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5,int param_6,int param_7)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdce54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0069d820(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_FUN_00d5156c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d51550;
  piVar1 = (int *)((int)this + 0x364);
  *(undefined4 *)((int)this + 0x36c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 **)((int)this + 0x36c) = (undefined4 *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x360) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0x374) = param_6;
  if (param_6 != 0) {
    piVar2 = (int *)(param_6 + 0x18);
    *(int **)((int)this + 0x368) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x37c);
  *(undefined4 *)((int)this + 900) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 **)((int)this + 900) = (undefined4 *)((int)this + 0x378);
  *(undefined4 *)((int)this + 0x378) = &PTR_LAB_00d29d60;
  *(int *)((int)this + 0x38c) = param_7;
  if (param_7 != 0) {
    piVar2 = (int *)(param_7 + 0x18);
    *(int **)((int)this + 0x380) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = 2;
  *(undefined1 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  FUN_00741630(this,5,0x7a4310,this,"TIMELINEMOVIE");
  FUN_00741630(this,0,0x7a4600,this,"TIMELINEMOVIE");
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007a47b0 @ 007a47b0 ////

void __fastcall FUN_007a47b0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdce84;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5156c;
  param_1[0x14] = &PTR_FUN_00d51550;
  local_4 = 2;
  (**(code **)(param_1[0xd8] + 4))();
  param_1[0xdd] = 0;
  (**(code **)param_1[0xd8])();
  piVar1 = (int *)param_1[0xe5];
  if (piVar1 != (int *)0x0) {
    FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  piVar1 = (int *)param_1[0xe6];
  param_1[0xe5] = 0;
  if (piVar1 != (int *)0x0) {
    FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  param_1[0xe6] = 0;
  param_1[0xde] = &PTR_LAB_00d29d60;
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


//// FUNCTION FUN_007a4920 @ 007a4920 ////

void __fastcall FUN_007a4920(int param_1)

{
  int iVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *this;
  int *piVar4;
  undefined4 extraout_EDX;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cdceae;
  local_c = ExceptionList;
  if (((*(uint *)(param_1 + 0x218) >> 4 & 1) != 0) && (*(int *)(param_1 + 0x394) == 0)) {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4 = 0;
    ExceptionList = &local_c;
    sVar2 = FUN_00ace02d(L"<table><tr><td align=center><e2><phrasebook>");
    FUN_0040cae0(&local_4c,L"<table><tr><td align=center><e2><phrasebook>",sVar2);
    sVar2 = FUN_00ace02d(L"<translate>SITT_PROJECT_READY</translate>");
    FUN_0040cae0(&local_4c,L"<translate>SITT_PROJECT_READY</translate>",sVar2);
    sVar2 = FUN_00ace02d(L"<phrase key=name><font color=#000000>");
    FUN_0040cae0(&local_4c,L"<phrase key=name><font color=#000000>",sVar2);
    puVar3 = FUN_0045f620(*(void **)(param_1 + 0x374),local_2c);
    FUN_0040cae0(&local_4c,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    sVar2 = FUN_00ace02d(L"</font></phrase>");
    FUN_0040cae0(&local_4c,L"</font></phrase>",sVar2);
    sVar2 = FUN_00ace02d(L"</phrasebook></e2></td></tr></table>");
    FUN_0040cae0(&local_4c,L"</phrasebook></e2></td></tr></table>",sVar2);
    this = operator_new(0x84);
    local_4._0_1_ = 1;
    if (this != (void *)0x0) {
      FUN_007a1f90(this,param_1,*(int *)(param_1 + 0x38c),0);
    }
    local_4._0_1_ = 0;
    puVar3 = FUN_008dc140((undefined4 *)0x43c80000);
    piVar4 = operator_new(0x14);
    local_4._0_1_ = 2;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_008df0a0(piVar4,extraout_EDX,puVar3,0);
    }
    *(int **)(param_1 + 0x394) = piVar4;
    piVar4[4] = DAT_00e5fb08 * 4;
    iVar1 = puVar3[0x12];
    local_4 = (uint)local_4._1_3_ << 8;
    puVar3[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar3)(1);
    }
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007a4b00 @ 007a4b00 ////

void __fastcall FUN_007a4b00(int param_1)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 extraout_EDX;
  wchar_t *pwVar5;
  int *piStack_50;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cdcede;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x374) != 0) {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4 = 0;
    ExceptionList = &local_c;
    sVar1 = FUN_00ace02d(L"<table><tr><td align=center><e2><phrasebook>");
    FUN_0040cae0(&local_4c,L"<table><tr><td align=center><e2><phrasebook>",sVar1);
    piVar2 = (int *)FUN_005b22a0(*(int *)(param_1 + 0x374));
    iVar3 = (**(code **)(*piVar2 + 0x24))();
    if (iVar3 == 7) {
      sVar1 = FUN_00ace02d(L"<translate>SITT_PROJECT_RELEASED</translate>");
      pwVar5 = L"<translate>SITT_PROJECT_RELEASED</translate>";
    }
    else {
      sVar1 = FUN_00ace02d(L"<translate>SITT_PROJECT_ESTIMATE</translate>");
      pwVar5 = L"<translate>SITT_PROJECT_ESTIMATE</translate>";
    }
    FUN_0040cae0(&local_4c,pwVar5,sVar1);
    sVar1 = FUN_00ace02d(L"<phrase key=name><nobr><font color=#000000>");
    FUN_0040cae0(&local_4c,L"<phrase key=name><nobr><font color=#000000>",sVar1);
    puVar4 = FUN_0045f620(*(void **)(param_1 + 0x374),apvStack_2c);
    FUN_0040cae0(&local_4c,(wchar_t *)*puVar4,puVar4[1]);
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    sVar1 = FUN_00ace02d(L"</font></nobr></phrase><phrase key=date><nobr>");
    FUN_0040cae0(&local_4c,L"</font></nobr></phrase><phrase key=date><nobr>",sVar1);
    FUN_005b8c50(*(void **)(param_1 + 0x374),&piStack_50);
    puVar4 = FUN_0043c090();
    FUN_0040cae0(&local_4c,(wchar_t *)*puVar4,puVar4[1]);
    sVar1 = FUN_00ace02d(L"</nobr></phrase></phrasebook></e2></td></tr></table>");
    FUN_0040cae0(&local_4c,L"</nobr></phrase></phrasebook></e2></td></tr></table>",sVar1);
    piStack_50 = operator_new(0x84);
    local_4._0_1_ = 1;
    if (piStack_50 != (int *)0x0) {
      FUN_007a1f90(piStack_50,param_1,*(int *)(param_1 + 0x38c),0);
    }
    local_4._0_1_ = 0;
    puVar4 = FUN_008dc140((undefined4 *)0x43c80000);
    piStack_50 = operator_new(0x14);
    local_4._0_1_ = 2;
    if (piStack_50 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_008df0a0(piStack_50,extraout_EDX,puVar4,1);
    }
    *(int **)(param_1 + 0x398) = piVar2;
    iVar3 = puVar4[0x12];
    local_4 = (uint)local_4._1_3_ << 8;
    puVar4[0x12] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)*puVar4)(1);
    }
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007a4d10 @ 007a4d10 ////

undefined4 * __thiscall FUN_007a4d10(void *this,byte param_1)

{
  FUN_007a47b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION WTimelineMovieIcon_Tick @ 007a4d30 ////

void __fastcall WTimelineMovieIcon_Tick(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *this;
  uint uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  float10 fVar5;
  ulonglong uVar6;
  
  if (param_1[0xdd] == 0) goto LAB_007a4de5;
  piVar1 = (int *)FUN_005b22a0(param_1[0xdd]);
  iVar2 = (**(code **)(*piVar1 + 0x24))();
  if (iVar2 < 4) {
    if (DAT_0104d8e8 != 0) {
      iVar2 = param_1[0xdd];
      iVar3 = FUN_005f5ba0(DAT_0104d8e8);
      if (iVar3 == iVar2) goto LAB_007a4d77;
    }
    (**(code **)(*param_1 + 0x20))(0);
    param_2 = extraout_EDX;
  }
  else {
LAB_007a4d77:
    (**(code **)(*param_1 + 0x20))(1);
    param_2 = extraout_EDX_00;
  }
  if ((char)param_1[0xe4] != '\0') {
    this = (void *)FUN_00ace790((int *)param_1[0x46],0,&TM::WWindow::RTTI_Type_Descriptor,
                                &TM::WTimeline::RTTI_Type_Descriptor,0);
    param_2 = extraout_EDX_01;
    if (param_1[0xe6] == 0) {
      fVar5 = (float10)(**(code **)(*(int *)param_1[0xe3] + 0x14))();
      uVar4 = FUN_00795fa0(this,(float)fVar5);
      param_2 = extraout_EDX_02;
      if ((char)uVar4 != '\0') {
        FUN_007a4b00((int)param_1);
        param_2 = extraout_EDX_03;
        goto LAB_007a4de5;
      }
    }
    if (param_1[0xe6] != 0) {
      FUN_008def30(param_1[0xe6],param_2);
      param_2 = extraout_EDX_04;
    }
  }
LAB_007a4de5:
  if ((int *)param_1[0xe6] != (int *)0x0) {
    uVar6 = FUN_008def80((int *)param_1[0xe6],param_2);
    param_2 = (undefined4)(uVar6 >> 0x20);
    if ((char)uVar6 != '\0') {
      piVar1 = (int *)param_1[0xe6];
      if (piVar1 != (int *)0x0) {
        FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
        _free(piVar1);
      }
      param_1[0xe6] = 0;
    }
  }
  if ((int *)param_1[0xe5] != (int *)0x0) {
    uVar6 = FUN_008def80((int *)param_1[0xe5],param_2);
    if ((char)uVar6 != '\0') {
      piVar1 = (int *)param_1[0xe5];
      if (piVar1 != (int *)0x0) {
        FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
        _free(piVar1);
      }
      param_1[0xe5] = 0;
    }
  }
  WWindow_Tick(param_1);
  *(undefined1 *)(param_1 + 0xe4) = 0;
  return;
}


//// FUNCTION FUN_007a5110 @ 007a5110 ////

void __fastcall FUN_007a5110(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d519e8;
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


//// FUNCTION FUN_007a5160 @ 007a5160 ////

undefined4 * __thiscall FUN_007a5160(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdcf1c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0069ce90(this);
  *(undefined ***)this = &PTR_FUN_00d51a2c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d51a10;
  piVar1 = (int *)((int)this + 0x364);
  *(undefined4 *)((int)this + 0x36c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x36c) = (undefined4 *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x360) = &PTR_LAB_00d519e8;
  *(int *)((int)this + 0x374) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x368) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined1 *)((int)this + 0x380) = 0;
  *(undefined1 *)((int)this + 0x381) = 0;
  *(undefined1 *)((int)this + 0x382) = 0;
  *(undefined4 *)((int)this + 900) = (undefined2 *)((int)this + 0x390);
  *(undefined2 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 10;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/timeline_newsper.dds",0x17);
  local_28 = 0x17;
  local_2c[0x17] = '\0';
  local_4._0_1_ = 3;
  FUN_0069d030(this,&local_2c,0,0,0x3f800000,0x3f800000);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_00741630(this,5,0x7a4ea0,this,"TIMELINEPRESS");
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((undefined4 *)((int)this + 900),(wchar_t *)&lpCaption_00d16918,uVar3);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007a52d0 @ 007a52d0 ////

void __fastcall FUN_007a52d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdcf54;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d51a2c;
  param_1[0x14] = &PTR_FUN_00d51a10;
  local_4 = 2;
  if ((int *)param_1[0xde] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xde] + 0xc))(0x3f000000);
    puVar2 = (undefined4 *)param_1[0xde];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      param_1[0xde] = 0;
    }
    param_1[0xdf] = 0;
  }
  if (10 < (uint)param_1[0xe3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe1]);
  }
  param_1[0xd8] = &PTR_LAB_00d519e8;
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


//// FUNCTION FUN_007a53f0 @ 007a53f0 ////

void __fastcall FUN_007a53f0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  size_t sVar7;
  char *pcVar8;
  char acStack_114 [4];
  undefined4 *puStack_110;
  char *pcStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  char acStack_100 [16];
  undefined1 auStack_f0 [4];
  wchar_t *pwStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  wchar_t awStack_e0 [10];
  char *pcStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  char acStack_c0 [20];
  char *pcStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  char acStack_a0 [16];
  void *pvStack_90;
  void *pvStack_8c;
  uint uStack_88;
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  wchar_t *pwStack_50;
  void *pvStack_4c;
  uint uStack_44;
  undefined4 uStack_30;
  void *pvStack_2c;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdcfce;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x374) == 0) {
    return;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x378);
  ExceptionList = &local_c;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &local_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(param_1 + 0x378) = 0;
  }
  puStack_110 = operator_new(0x3fc);
  uStack_4 = 0;
  if (puStack_110 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00833290(puStack_110);
  }
  uStack_4 = 0xffffffff;
  acStack_114[3] = 0xff;
  acStack_114[2] = 0;
  acStack_114[1] = 0;
  acStack_114[0] = '\0';
  FUN_00830550(puVar2,8,acStack_114);
  puVar2[0xd5] = 0x43340000;
  *(undefined1 *)(puVar2 + 0xd6) = 1;
  puStack_110 = operator_new(0x4e0);
  uStack_4 = 1;
  if (puStack_110 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_008dbd50(puStack_110,(int)puVar2);
  }
  *(undefined4 **)(param_1 + 0x378) = puVar3;
  puVar3[0x45] = 0xfff0f0f0;
  *(undefined4 *)(*(int *)(param_1 + 0x378) + 0x118) = 0xff000000;
  uStack_4 = 0xffffffff;
  FUN_008d56d0(*(void **)(param_1 + 0x378),2);
  puVar3 = *(undefined4 **)(param_1 + 0x378);
  iVar4 = FUN_0071b2a0();
  pvVar5 = (void *)FUN_0071b910(iVar4);
  FUN_00640700(pvVar5,puVar3);
  piVar1 = puVar2 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar2)(1);
  }
  puStack_110 = operator_new(0x84);
  uStack_4 = 2;
  if (puStack_110 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_007a1f90(puStack_110,param_1,*(int *)(param_1 + 0x374),0);
  }
  uStack_4 = 0xffffffff;
  FUN_008dcf70(*(void **)(param_1 + 0x378),puVar2);
  if (*(int *)(param_1 + 0x388) != 0) goto LAB_007a5a9b;
  pwStack_ec = awStack_e0;
  awStack_e0[0] = L'\0';
  uStack_e8 = 0;
  uStack_e4 = 10;
  uVar6 = FUN_00ace02d(L"No contents yet");
  FUN_004036d0(&pwStack_ec,L"No contents yet",uVar6);
  pcStack_10c = acStack_100;
  uStack_4 = 3;
  acStack_100[0] = '\0';
  uStack_108 = 0;
  uStack_104 = 0x20;
  pcStack_10c = _malloc(0x20);
  _strncpy(pcStack_10c,"TIMELINE_PHOTO_IRRELEVANT",0x19);
  uStack_108 = 0x19;
  pcStack_10c[0x19] = '\0';
  switch(*(undefined4 *)(*(int *)(param_1 + 0x374) + 0xa8)) {
  case 0:
    pcVar8 = "TIMELINE_PHOTO_IRRELEVANT";
    break;
  case 1:
    pcVar8 = "TIMELINE_PHOTO_HAVINGSEX";
    break;
  case 2:
    pcVar8 = "TIMELINE_PHOTO_DETOX";
    break;
  case 3:
    pcVar8 = "TIMELINE_PHOTO_COSMETICSURGERY";
    break;
  case 4:
    pcVar8 = "TIMELINE_PHOTO_FIGHTING";
    break;
  case 5:
    pcVar8 = "TIMELINE_PHOTO_DRUNK";
    break;
  case 6:
    pcVar8 = "TIMELINE_PHOTO_PRNOMOVIE";
    break;
  case 7:
    pcVar8 = "TIMELINE_PHOTO_DININGOPPSEX";
    break;
  case 8:
    pcVar8 = "TIMELINE_PHOTO_PRMOVIE";
    break;
  case 9:
    pcVar8 = "TIMELINE_PHOTO_WARDROBE";
    break;
  case 10:
    pcVar8 = "TIMELINE_PHOTO_DRINKINGOPPSEX";
    break;
  case 0xb:
    pcVar8 = "TIMELINE_PHOTO_CHATTING";
    break;
  default:
    goto switchD_007a560f_default;
  }
  FUN_00403e20(&pcStack_10c,pcVar8);
switchD_007a560f_default:
  uVar6 = FUN_00ace02d(L"<table><tr><td width=200><e1><phrasebook>");
  FUN_004036d0(&pwStack_ec,L"<table><tr><td width=200><e1><phrasebook>",uVar6);
  pcStack_ac = acStack_a0;
  acStack_a0[0] = '\0';
  uStack_a8 = 0;
  uStack_a4 = 0x14;
  _strncpy(pcStack_ac,"",0);
  uStack_a8 = 0;
  *pcStack_ac = '\0';
  uStack_4._0_1_ = 5;
  pcVar8 = PTR_DAT_00e59fc4;
  uVar6 = DAT_00e59fc8;
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x374) + 0xa4) + 0x4a0) == 0) {
    pcVar8 = PTR_DAT_00e59fe4;
    uVar6 = DAT_00e59fe8;
  }
  FUN_004015d0(&pcStack_ac,pcVar8,uVar6);
  puVar2 = (undefined4 *)FUN_009b5f90(&pcStack_10c,0xffffffff,&pcStack_ac);
  if (puVar2 == (undefined4 *)0x0) {
    sVar7 = FUN_00ace02d(L"ERROR, tell Kieran");
    FUN_0040cae0(&pwStack_ec,L"ERROR, tell Kieran",sVar7);
  }
  else {
    FUN_0040cae0(&pwStack_ec,(wchar_t *)puVar2[0x10],puVar2[0x11]);
    pcStack_cc = acStack_c0;
    acStack_c0[0] = '\0';
    uStack_c8 = 0;
    uStack_c4 = 0x14;
    _strncpy(pcStack_cc,"_STRAPLINE",10);
    uStack_c8 = 10;
    pcStack_cc[10] = '\0';
    uVar6 = FUN_00413450(puVar2,pcStack_cc,0,uStack_c8);
    if (uVar6 != 0xffffffff) {
      FUN_00403de0(apvStack_6c,puVar2);
      uStack_4._0_1_ = 7;
      uVar6 = FUN_00413450(apvStack_6c,pcStack_cc,0,uStack_c8);
      FUN_00430770(apvStack_6c,&pvStack_8c,0,uVar6);
      if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_8c);
      }
      puVar3 = FUN_009b5030(&pvStack_8c,apvStack_6c);
      FUN_004036d0(&pwStack_ec,(wchar_t *)*puVar3,puVar3[1]);
      if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_8c);
      }
      if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_6c[0]);
      }
    }
    uStack_4._0_1_ = 5;
    if (0x14 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_cc);
    }
  }
  sVar7 = FUN_00ace02d(L"<phrase key=star>");
  FUN_0040cae0(&pwStack_ec,L"<phrase key=star>",sVar7);
  puVar3 = (undefined4 *)
           (**(code **)(**(int **)(*(int *)(param_1 + 0x374) + 0xa4) + 0x5c))(&pvStack_8c);
  FUN_0040cae0(auStack_f0,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < uStack_88) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_90);
  }
  sVar7 = FUN_00ace02d(L"</phrase></phrasebook></e1></td></tr>");
  FUN_0040cae0(auStack_f0,L"</phrase></phrasebook></e1></td></tr>",sVar7);
  sVar7 = FUN_00ace02d(L"<tr><td width=200><e2><phrasebook>");
  FUN_0040cae0(auStack_f0,L"<tr><td width=200><e2><phrasebook>",sVar7);
  FUN_004312e0(&uStack_30,puVar2,"_STRAPLINE");
  puStack_8._0_1_ = 8;
  FUN_009b5030(&pwStack_50,&uStack_30);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
  pvVar5 = pvStack_4c;
  if (pvStack_4c == (void *)0x0) {
    pvVar5 = (void *)FUN_00ace02d(L"ERROR, tell Kieran");
    pwStack_50 = L"ERROR, tell Kieran";
  }
  FUN_0040cae0(auStack_f0,pwStack_50,(size_t)pvVar5);
  sVar7 = FUN_00ace02d(L"<phrase key=star>");
  FUN_0040cae0(auStack_f0,L"<phrase key=star>",sVar7);
  puVar2 = (undefined4 *)
           (**(code **)(**(int **)(*(int *)(param_1 + 0x374) + 0xa4) + 0x5c))(&pvStack_90);
  FUN_0040cae0(&pwStack_ec,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_8c);
  }
  sVar7 = FUN_00ace02d(L"</phrase></phrasebook></e2></td></tr></table>");
  FUN_0040cae0(&pwStack_ec,L"</phrase></phrasebook></e2></td></tr></table>",sVar7);
  FUN_004036d0((void *)(param_1 + 900),pwStack_ec,uStack_e8);
  if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_4c);
  }
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_2c);
  }
  if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_ac);
  }
  if (0x14 < uStack_104) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_10c);
  }
  uStack_4 = 0xffffffff;
  if (10 < uStack_e4) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_ec);
  }
LAB_007a5a9b:
  *(undefined1 *)(*(int *)(param_1 + 0x378) + 0x4ac) = 1;
  FUN_008dbf40(*(void **)(param_1 + 0x378),param_1 + 900);
  *(undefined4 *)(param_1 + 0x37c) = 10;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007a5b10 @ 007a5b10 ////

undefined4 * __thiscall FUN_007a5b10(void *this,byte param_1)

{
  FUN_007a52d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007a5b30 @ 007a5b30 ////

void __fastcall FUN_007a5b30(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  float10 fVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined1 *puVar9;
  uint auStack_28 [10];
  
  WWindow_Tick(param_1);
  if (param_1[0xdd] != 0) {
    if (*(char *)((int)param_1 + 0x381) == '\0') {
      if ((char)param_1[0xe0] != '\0') {
        (**(code **)(*param_1 + 0x74))(0x41800000,0x41800000);
        *(undefined1 *)(param_1 + 0xe0) = 0;
      }
    }
    else {
      pvVar3 = (void *)FUN_00ace790((int *)param_1[0x46],0,&TM::WWindow::RTTI_Type_Descriptor,
                                    &TM::WTimeline::RTTI_Type_Descriptor,0);
      fVar5 = (float10)(**(code **)(*(int *)param_1[0xdd] + 0x10))();
      uVar4 = FUN_00795fa0(pvVar3,(float)fVar5);
      if (((char)param_1[0xe0] == '\0') && ((char)uVar4 != '\0')) {
        *(undefined1 *)(param_1 + 0xe0) = 1;
        (**(code **)(*param_1 + 0x74))(0x42000000,0x42000000);
        FUN_0041c9c0(auStack_28,"HUD_TIMELINE_PAPARAZZI_EVENT_HIGHLIGHTED");
        auStack_28[0] = auStack_28[0] & 0xfffffffe;
        puVar9 = &DAT_00d17518;
        iVar8 = 0;
        puVar7 = auStack_28;
        iVar6 = 2;
        pvVar3 = (void *)FUN_004f3b20();
        FUN_004f3270(pvVar3,iVar6,(byte *)puVar7,iVar8,puVar9);
      }
      if ((param_1[0xde] == 0) && ((char)uVar4 != '\0')) {
        FUN_007a53f0((int)param_1);
      }
    }
  }
  if (param_1[0xdf] != 0) {
    *(undefined1 *)((int)param_1 + 0x381) = 0;
    param_1[0xdf] = param_1[0xdf] + -1;
    return;
  }
  if (((int *)param_1[0xde] != (int *)0x0) && (*(char *)((int)param_1 + 0x381) == '\0')) {
    (**(code **)(*(int *)param_1[0xde] + 0xc))(0x3f000000);
    puVar2 = (undefined4 *)param_1[0xde];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      param_1[0xde] = 0;
    }
    param_1[0xdf] = 0;
  }
  *(undefined1 *)((int)param_1 + 0x381) = 0;
  return;
}


//// FUNCTION FUN_007a5e90 @ 007a5e90 ////

uint __thiscall FUN_007a5e90(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)((int)this + 0x374) != 0) &&
     (uVar1 = *(uint *)(*(int *)((int)this + 0x374) + 0xa4), uVar1 == param_1)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_007a5f50 @ 007a5f50 ////

void __fastcall FUN_007a5f50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d51e7c;
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


//// FUNCTION FUN_007a5fa0 @ 007a5fa0 ////

undefined4 * __thiscall FUN_007a5fa0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [16];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd00c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0069ce90(this);
  *(undefined ***)this = &PTR_FUN_00d51ecc;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d51eb4;
  piVar1 = (int *)((int)this + 0x364);
  *(undefined4 *)((int)this + 0x36c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x36c) = (undefined4 *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x360) = &PTR_LAB_00d51e7c;
  *(int *)((int)this + 0x374) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x368) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined1 *)((int)this + 0x380) = 0;
  *(undefined1 *)((int)this + 0x381) = 0;
  *(undefined1 *)((int)this + 0x382) = 0;
  *(undefined4 *)((int)this + 900) = (undefined2 *)((int)this + 0x390);
  *(undefined2 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 10;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/timeline_quit.dds",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4._0_1_ = 3;
  FUN_0069d030(this,&local_2c,0,0,0x3f800000,0x3f800000);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_00741630(this,5,0x7a5cc0,this,"TIMELINEQUIT");
  puVar3 = (undefined4 *)(**(code **)(**(int **)(*(int *)((int)this + 0x374) + 0xa4) + 0x5c))();
  FUN_004036d0((undefined4 *)((int)this + 900),(wchar_t *)*puVar3,puVar3[1]);
  if (10 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_007a6130 @ 007a6130 ////

void __fastcall FUN_007a6130(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdd044;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d51ecc;
  param_1[0x14] = &PTR_FUN_00d51eb4;
  local_4 = 2;
  if ((int *)param_1[0xde] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xde] + 0xc))(0x3f000000);
    puVar2 = (undefined4 *)param_1[0xde];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      param_1[0xde] = 0;
    }
    param_1[0xdf] = 0;
  }
  if (10 < (uint)param_1[0xe3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe1]);
  }
  param_1[0xd8] = &PTR_LAB_00d51e7c;
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


//// FUNCTION FUN_007a6250 @ 007a6250 ////

void __fastcall FUN_007a6250(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 uVar8;
  size_t sVar9;
  char **ppcVar10;
  char acStack_94 [4];
  char *pcStack_90;
  char *pcStack_8c;
  uint uStack_88;
  uint uStack_84;
  char acStack_80 [16];
  undefined1 auStack_70 [4];
  undefined2 *puStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined2 auStack_60 [8];
  uint *puStack_50;
  void *pvStack_4c;
  undefined4 uStack_48;
  uint auStack_44 [5];
  wchar_t *pwStack_30;
  void *pvStack_2c;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd09d;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x374) != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x378);
    ExceptionList = &local_c;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      ExceptionList = &local_c;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(param_1 + 0x378) = 0;
    }
    pcStack_90 = operator_new(0x3fc);
    uStack_4 = 0;
    if (pcStack_90 == (char *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_00833290((undefined4 *)pcStack_90);
    }
    uStack_4 = 0xffffffff;
    acStack_94[3] = 0xff;
    acStack_94[2] = 0;
    acStack_94[1] = 0;
    acStack_94[0] = '\0';
    FUN_00830550(puVar3,8,acStack_94);
    puVar3[0xd5] = 0x43340000;
    *(undefined1 *)(puVar3 + 0xd6) = 1;
    pcStack_90 = operator_new(0x4e0);
    uStack_4 = 1;
    if (pcStack_90 == (char *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_008dbd50(pcStack_90,(int)puVar3);
    }
    *(undefined4 **)(param_1 + 0x378) = puVar4;
    puVar4[0x45] = 0xfff0f0f0;
    *(undefined4 *)(*(int *)(param_1 + 0x378) + 0x118) = 0xff000000;
    uStack_4 = 0xffffffff;
    FUN_008d56d0(*(void **)(param_1 + 0x378),2);
    puVar4 = *(undefined4 **)(param_1 + 0x378);
    iVar5 = FUN_0071b2a0();
    pvVar6 = (void *)FUN_0071b910(iVar5);
    FUN_00640700(pvVar6,puVar4);
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    pcStack_90 = operator_new(0x84);
    uStack_4 = 2;
    if (pcStack_90 == (char *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_007a1f90(pcStack_90,param_1,*(int *)(param_1 + 0x374),0);
    }
    uStack_4 = 0xffffffff;
    FUN_008dcf70(*(void **)(param_1 + 0x378),puVar3);
    puStack_6c = auStack_60;
    auStack_60[0] = 0;
    uStack_68 = 0;
    uStack_64 = 10;
    uVar7 = FUN_00ace02d(L"No contents yet");
    FUN_004036d0(&puStack_6c,L"No contents yet",uVar7);
    pcStack_8c = acStack_80;
    uStack_4 = 3;
    acStack_80[0] = '\0';
    uStack_88 = 0;
    uStack_84 = 0x14;
    _strncpy(pcStack_8c,"",0);
    uStack_88 = 0;
    *pcStack_8c = '\0';
    ppcVar10 = &pcStack_90;
    uStack_4 = CONCAT31(uStack_4._1_3_,4);
    pvVar6 = (void *)(**(code **)(**(int **)(param_1 + 0x374) + 8))(ppcVar10,&DAT_00e4fa4c);
    uVar8 = FUN_0043b680(pvVar6,(float *)ppcVar10);
    if (((char)uVar8 == '\0') &&
       (*(char *)(*(int *)(*(int *)(param_1 + 0x374) + 0xa4) + 0x9d8) == '\0')) {
      if (uStack_88 < 0x16) {
        if (0x14 < uStack_88) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_90);
        }
        uStack_88 = 0x20;
        pcStack_90 = _malloc(0x20);
      }
      _strncpy(pcStack_90,"TIMELINE_STAR_HASQUIT",0x15);
      pcStack_8c = (void *)0x15;
      pcStack_90[0x15] = '\0';
    }
    else {
      if (uStack_88 < 0x1b) {
        if (0x14 < uStack_88) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_90);
        }
        uStack_88 = 0x20;
        pcStack_90 = _malloc(0x20);
      }
      _strncpy(pcStack_90,"TIMELINE_STAR_THREATENQUIT",0x1a);
      pcStack_8c = (void *)0x1a;
      pcStack_90[0x1a] = '\0';
    }
    uVar7 = FUN_00ace02d(L"<table><tr><td width=200><e1><phrasebook>");
    FUN_004036d0(auStack_70,L"<table><tr><td width=200><e1><phrasebook>",uVar7);
    puStack_50 = auStack_44;
    auStack_44[0] = auStack_44[0] & 0xffffff00;
    pvStack_4c = (void *)0x0;
    uStack_48 = 0x14;
    _strncpy((char *)puStack_50,"",0);
    pvStack_4c = (void *)0x0;
    *(char *)puStack_50 = '\0';
    puStack_8._0_1_ = 5;
    FUN_009b5030(&pwStack_30,&pcStack_90);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    bVar2 = FUN_00431270(&pwStack_30,(wchar_t *)&lpCaption_00d16918);
    pvVar6 = pvStack_2c;
    if (!bVar2) {
      pvVar6 = (void *)FUN_00ace02d(L"ERROR, tell Kieran");
      pwStack_30 = L"ERROR, tell Kieran";
    }
    FUN_0040cae0(auStack_70,pwStack_30,(size_t)pvVar6);
    sVar9 = FUN_00ace02d(L"<phrase key=name>");
    FUN_0040cae0(auStack_70,L"<phrase key=name>",sVar9);
    FUN_0040cae0(auStack_70,*(wchar_t **)(param_1 + 900),*(size_t *)(param_1 + 0x388));
    sVar9 = FUN_00ace02d(L"</phrase><phrase key=date>");
    FUN_0040cae0(auStack_70,L"</phrase><phrase key=date>",sVar9);
    (**(code **)(**(int **)(param_1 + 0x374) + 8))(acStack_94);
    puVar3 = FUN_0043c090();
    FUN_0040cae0(&puStack_6c,(wchar_t *)*puVar3,puVar3[1]);
    sVar9 = FUN_00ace02d(L"</phrase></phrasebook></e1></td></tr></table>");
    FUN_0040cae0(&puStack_6c,L"</phrase></phrasebook></e1></td></tr></table>",sVar9);
    *(undefined1 *)(*(int *)(param_1 + 0x378) + 0x4ac) = 1;
    FUN_008dbf40(*(void **)(param_1 + 0x378),&puStack_6c);
    *(undefined4 *)(param_1 + 0x37c) = 10;
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_2c);
    }
    if (0x14 < auStack_44[0]) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_4c);
    }
    if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_8c);
    }
    if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_6c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007a66f0 @ 007a66f0 ////

void __fastcall FUN_007a66f0(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *this;
  uint uVar6;
  size_t sVar7;
  wchar_t *pwVar8;
  char acStack_94 [4];
  undefined4 *puStack_90;
  undefined2 *puStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined2 auStack_80 [10];
  char *pcStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  char acStack_60 [20];
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  wchar_t *pwStack_2c;
  size_t sStack_28;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd0fd;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x374) != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x378);
    ExceptionList = &local_c;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      ExceptionList = &local_c;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(param_1 + 0x378) = 0;
    }
    puStack_90 = operator_new(0x3fc);
    uStack_4 = 0;
    if (puStack_90 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_00833290(puStack_90);
    }
    uStack_4 = 0xffffffff;
    acStack_94[3] = 0xff;
    acStack_94[2] = 0;
    acStack_94[1] = 0;
    acStack_94[0] = '\0';
    FUN_00830550(puVar3,8,acStack_94);
    puVar3[0xd5] = 0x43340000;
    *(undefined1 *)(puVar3 + 0xd6) = 1;
    puStack_90 = operator_new(0x4e0);
    uStack_4 = 1;
    if (puStack_90 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_008dbd50(puStack_90,(int)puVar3);
    }
    *(undefined4 **)(param_1 + 0x378) = puVar4;
    puVar4[0x45] = 0xfff0f0f0;
    *(undefined4 *)(*(int *)(param_1 + 0x378) + 0x118) = 0xff000000;
    uStack_4 = 0xffffffff;
    FUN_008d56d0(*(void **)(param_1 + 0x378),2);
    puVar4 = *(undefined4 **)(param_1 + 0x378);
    iVar5 = FUN_0071b2a0();
    this = (void *)FUN_0071b910(iVar5);
    FUN_00640700(this,puVar4);
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    puStack_90 = operator_new(0x84);
    uStack_4 = 2;
    if (puStack_90 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_007a1f90(puStack_90,param_1,*(int *)(param_1 + 0x374),0);
    }
    uStack_4 = 0xffffffff;
    FUN_008dcf70(*(void **)(param_1 + 0x378),puVar3);
    puStack_8c = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0;
    uStack_84 = 10;
    uVar6 = FUN_00ace02d(L"No contents yet");
    FUN_004036d0(&puStack_8c,L"No contents yet",uVar6);
    pcStack_6c = acStack_60;
    uStack_4 = 3;
    acStack_60[0] = '\0';
    uStack_68 = 0;
    uStack_64 = 0x20;
    pcStack_6c = _malloc(0x20);
    _strncpy(pcStack_6c,"TIMELINE_STAR_QUITTINGNOW",0x19);
    uStack_68 = 0x19;
    pcStack_6c[0x19] = '\0';
    uVar6 = FUN_00ace02d(L"<table><tr><td width=200><e1><phrasebook>");
    FUN_004036d0(&puStack_8c,L"<table><tr><td width=200><e1><phrasebook>",uVar6);
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"",0);
    uStack_48 = 0;
    *pcStack_4c = '\0';
    uStack_4._0_1_ = 5;
    FUN_009b5030(&pwStack_2c,&pcStack_6c);
    uStack_4 = CONCAT31(uStack_4._1_3_,6);
    bVar2 = FUN_00431270(&pwStack_2c,(wchar_t *)&lpCaption_00d16918);
    pwVar8 = pwStack_2c;
    if (!bVar2) {
      sStack_28 = FUN_00ace02d(L"ERROR, tell Kieran");
      pwVar8 = L"ERROR, tell Kieran";
    }
    FUN_0040cae0(&puStack_8c,pwVar8,sStack_28);
    sVar7 = FUN_00ace02d(L"<phrase key=name>");
    FUN_0040cae0(&puStack_8c,L"<phrase key=name>",sVar7);
    FUN_0040cae0(&puStack_8c,*(wchar_t **)(param_1 + 900),*(size_t *)(param_1 + 0x388));
    sVar7 = FUN_00ace02d(L"</phrase>");
    FUN_0040cae0(&puStack_8c,L"</phrase>",sVar7);
    sVar7 = FUN_00ace02d(L"<phrase key=date>");
    FUN_0040cae0(&puStack_8c,L"<phrase key=date>",sVar7);
    (**(code **)(**(int **)(param_1 + 0x374) + 8))(&puStack_90);
    puVar3 = FUN_0043c090();
    FUN_0040cae0(&puStack_8c,(wchar_t *)*puVar3,puVar3[1]);
    sVar7 = FUN_00ace02d(L"</phrase></phrasebook></e1></td></tr></table>");
    FUN_0040cae0(&puStack_8c,L"</phrase></phrasebook></e1></td></tr></table>",sVar7);
    *(undefined1 *)(*(int *)(param_1 + 0x378) + 0x4ac) = 1;
    FUN_008dbf40(*(void **)(param_1 + 0x378),&puStack_8c);
    *(undefined4 *)(param_1 + 0x37c) = 0x14;
    *(undefined1 *)(*(int *)(param_1 + 0x374) + 0xac) = 1;
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_2c);
    }
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_6c);
    }
    if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_8c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007a6af0 @ 007a6af0 ////

undefined4 * __thiscall FUN_007a6af0(void *this,byte param_1)

{
  FUN_007a6130(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007a6b10 @ 007a6b10 ////

void __fastcall FUN_007a6b10(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  float10 fVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined1 *puVar9;
  uint auStack_28 [10];
  
  WWindow_Tick(param_1);
  if (param_1[0xdd] != 0) {
    if (*(char *)((int)param_1 + 0x381) == '\0') {
      if ((char)param_1[0xe0] != '\0') {
        (**(code **)(*param_1 + 0x74))(0x41800000,0x41800000);
        *(undefined1 *)(param_1 + 0xe0) = 0;
      }
    }
    else {
      pvVar3 = (void *)FUN_00ace790((int *)param_1[0x46],0,&TM::WWindow::RTTI_Type_Descriptor,
                                    &TM::WTimeline::RTTI_Type_Descriptor,0);
      fVar5 = (float10)(**(code **)(*(int *)param_1[0xdd] + 0x10))();
      uVar4 = FUN_00795fa0(pvVar3,(float)fVar5);
      if (((char)param_1[0xe0] == '\0') && ((char)uVar4 != '\0')) {
        *(undefined1 *)(param_1 + 0xe0) = 1;
        (**(code **)(*param_1 + 0x74))(0x42000000,0x42000000);
        FUN_0041c9c0(auStack_28,"HUD_TIMELINE_QUIT_EVENT_HIGHLIGHTED");
        auStack_28[0] = auStack_28[0] & 0xfffffffe;
        puVar9 = &DAT_00d17518;
        iVar8 = 0;
        puVar7 = auStack_28;
        iVar6 = 2;
        pvVar3 = (void *)FUN_004f3b20();
        FUN_004f3270(pvVar3,iVar6,(byte *)puVar7,iVar8,puVar9);
      }
      if ((param_1[0xde] == 0) && ((char)uVar4 != '\0')) {
        FUN_007a6250((int)param_1);
      }
    }
  }
  if (param_1[0xdf] != 0) {
    *(undefined1 *)((int)param_1 + 0x381) = 0;
    param_1[0xdf] = param_1[0xdf] + -1;
    return;
  }
  if (((int *)param_1[0xde] != (int *)0x0) && (*(char *)((int)param_1 + 0x381) == '\0')) {
    (**(code **)(*(int *)param_1[0xde] + 0xc))(0x3f000000);
    puVar2 = (undefined4 *)param_1[0xde];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      param_1[0xde] = 0;
    }
    param_1[0xdf] = 0;
  }
  *(undefined1 *)((int)param_1 + 0x381) = 0;
  return;
}


//// FUNCTION FUN_007a6c90 @ 007a6c90 ////

int * __thiscall FUN_007a6c90(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007a6e00 @ 007a6e00 ////

void __fastcall FUN_007a6e00(int *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  if ((param_1[0xe3] != 0) && (iVar5 = *(int *)(param_1[0xe3] + 0x8c), iVar5 != 0)) {
    (**(code **)(param_1[0xd8] + 4))();
    param_1[0xdd] = iVar5;
    (**(code **)param_1[0xd8])();
    if ((DAT_0104d8e8 == 0) && (DAT_0104dff8 == 0)) {
      if ((param_1[0xdd] != 0) &&
         (cVar1 = (**(code **)(*(int *)(param_1[0xdd] + 0x38) + 0x20))(), cVar1 == '\0')) {
        fStack_10 = *(float *)(param_1[0xdd] + 0xa4);
        pfVar4 = &fStack_10;
        pvVar2 = (void *)(**(code **)(*(int *)(param_1[0xdd] + 0x38) + 0x1c))(&fStack_c);
        uVar3 = FUN_0043b6c0(pvVar2,pfVar4);
        if ((char)uVar3 != '\0') {
          (**(code **)(*(int *)param_1[0xed] + 0x50))(1);
          (**(code **)(*(int *)param_1[0xed] + 0x20))(1);
          FUN_0073fb40(param_1);
          return;
        }
      }
      (**(code **)(*(int *)param_1[0xed] + 0x20))(0);
      FUN_0073fb40(param_1);
      return;
    }
    if (((((uint)param_1[0x86] >> 4 & 1) != 0) && ((int *)param_1[0xe3] != (int *)0x0)) &&
       (pfVar4 = (float *)(**(code **)(*(int *)param_1[0xe3] + 0x34))(&fStack_c), 0.0 <= *pfVar4)) {
      if ((param_1[0xdd] != 0) &&
         (cVar1 = (**(code **)(*(int *)(param_1[0xdd] + 0x38) + 0x20))(), cVar1 == '\0')) {
        pfVar4 = (float *)&stack0xffffffec;
        pvVar2 = (void *)(**(code **)(*(int *)(param_1[0xdd] + 0x38) + 0x1c))(&fStack_10);
        uVar3 = FUN_0043b6c0(pvVar2,pfVar4);
        if ((char)uVar3 != '\0') {
          iVar5 = FUN_00792730(param_1[0xe3]);
          puVar6 = (undefined4 *)(**(code **)(*(int *)param_1[0xe3] + 0x34))(&fStack_10);
          *(undefined4 *)(iVar5 + 0x10) = *puVar6;
          *(undefined4 *)(iVar5 + 0x14) = puVar6[1];
          *(undefined4 *)(iVar5 + 0x18) = 0;
          uStack_8 = *(undefined4 *)(iVar5 + 0x18);
          *(undefined4 *)(iVar5 + 0x18) = uStack_8;
          *(float *)(iVar5 + 0x10) = *(float *)(iVar5 + 0x10) - 1.0;
          *(float *)(iVar5 + 0x14) = *(float *)(iVar5 + 0x14) - 1.0;
          fStack_10 = *(float *)(iVar5 + 0x10) + 32.0;
          *(float *)(iVar5 + 0x1c) = fStack_10;
          fStack_c = *(float *)(iVar5 + 0x14) + 32.0;
          *(float *)(iVar5 + 0x20) = fStack_c;
          *(undefined4 *)(iVar5 + 0x24) = uStack_8;
          BuildAndDrawPrimitive(iVar5);
        }
      }
      iVar5 = (**(code **)(*param_1 + 0x108))();
      puVar6 = (undefined4 *)(**(code **)(*(int *)param_1[0xe3] + 0x34))(&fStack_10);
      *(undefined4 *)(iVar5 + 0x10) = *puVar6;
      *(undefined4 *)(iVar5 + 0x14) = puVar6[1];
      *(undefined4 *)(iVar5 + 0x18) = 0;
      fStack_c = *(float *)(iVar5 + 0x18);
      if ((char)param_1[0xee] == '\0') {
        fVar7 = *(float *)(iVar5 + 0x10) + 16.0;
        fStack_10 = *(float *)(iVar5 + 0x14) + 16.0;
      }
      else {
        fVar7 = *(float *)(iVar5 + 0x10) + 32.0;
        fStack_10 = *(float *)(iVar5 + 0x14) + 32.0;
      }
      *(float *)(iVar5 + 0x1c) = fVar7;
      *(float *)(iVar5 + 0x20) = fStack_10;
      *(float *)(iVar5 + 0x24) = fStack_c;
      BuildAndDrawPrimitive(iVar5);
    }
  }
  return;
}


//// FUNCTION FUN_007a7130 @ 007a7130 ////

void __fastcall FUN_007a7130(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d52114;
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


//// FUNCTION FUN_007a7180 @ 007a7180 ////

undefined4 * __thiscall
FUN_007a7180(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,void *param_6,undefined1 *param_7)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  void *pvVar9;
  uint uVar10;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd16d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0069ce90(this);
  pvVar9 = param_6;
  puVar8 = (undefined4 *)0x0;
  *(undefined ***)this = &PTR_FUN_00d52164;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d5214c;
  piVar1 = (int *)((int)this + 0x364);
  *(undefined4 *)((int)this + 0x36c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 **)((int)this + 0x36c) = (undefined4 *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x360) = &PTR_FUN_00d16aac;
  *(void **)((int)this + 0x374) = param_6;
  if (param_6 != (void *)0x0) {
    piVar2 = (int *)((int)param_6 + 0x18);
    *(int **)((int)this + 0x368) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x37c);
  *(undefined4 *)((int)this + 900) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 **)((int)this + 900) = (undefined4 *)((int)this + 0x378);
  *(undefined4 *)((int)this + 0x378) = &PTR_LAB_00d52114;
  *(undefined1 **)((int)this + 0x38c) = param_7;
  if (param_7 != (undefined1 *)0x0) {
    piVar2 = (int *)(param_7 + 0x18);
    *(int **)((int)this + 0x380) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x3a0);
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(int **)((int)this + 0x3ac) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined1 *)((int)this + 0x3b8) = 0;
  *(undefined1 *)((int)this + 0x3b9) = 0;
  *(undefined1 *)((int)this + 0x3ba) = 0;
  param_6 = *(void **)((int)param_6 + 0xa0);
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  ppuVar5 = FUN_0049ba10((int *)&param_6);
  puVar6 = FUN_0040d6b0(local_2c,"ui/timeline_re_",ppuVar5);
  puVar6 = FUN_004312e0(local_4c,puVar6,".dds");
  param_7 = &stack0xffffff70;
  local_4._0_1_ = 5;
  FUN_0069d030(this,puVar6,param_2,param_3,param_4,param_5);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  local_4._0_1_ = 3;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  FUN_00741630(this,5,0x7a6cc0,this,"TIMELINERESEARCHPACK");
  param_7 = *(undefined1 **)((int)pvVar9 + 0xa0);
  ppuVar5 = FUN_0049ba10((int *)&param_7);
  puVar6 = FUN_0040d6b0(local_2c,"ui/timeline_tail_",ppuVar5);
  FUN_004312e0(&local_6c,puVar6,".dds");
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  puVar6 = FUN_0040d6b0(local_4c,"textures/",&local_6c);
  local_4._0_1_ = 7;
  uVar7 = FUN_009d3660(puVar6,(uint *)0x0);
  cVar4 = '\x01' - ((char)uVar7 != '\0');
  param_6 = (void *)CONCAT31(param_6._1_3_,cVar4);
  local_4._0_1_ = 6;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (cVar4 != '\0') {
    if (local_64 < 0x1a) {
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_64 = 0x20;
      local_6c = _malloc(0x20);
    }
    _strncpy(local_6c,"ui/timeline_tail_cult.dds",0x19);
    local_68 = 0x19;
    local_6c[0x19] = '\0';
  }
  param_6 = operator_new(0x360);
  local_4._0_1_ = 8;
  if (param_6 != (void *)0x0) {
    puVar8 = FUN_0069d820(param_6,&local_6c,0,0,0x3f000000,0x3f000000);
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x3b4) = puVar8;
  (**(code **)*piVar1)();
  uVar10 = 0x42000000;
  (**(code **)(**(int **)((int)this + 0x3b4) + 0x74))();
  pvVar9 = (void *)0xbf800000;
  (**(code **)(**(int **)((int)this + 0x3b4) + 0x5c))(1);
  (**(code **)(**(int **)((int)this + 0x3b4) + 100))(1,this,0xbf800000);
  puVar3 = (uint *)(*(int *)((int)this + 0x3b4) + 0x114);
  *puVar3 = *puVar3 & 0xfffffffd;
  FUN_0073f6e0(this,*(int **)((int)this + 0x3b4));
  if (0x14 < uVar10) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar9);
  }
  ExceptionList = local_2c[0];
  return this;
}


//// FUNCTION FUN_007a7520 @ 007a7520 ////

void __fastcall FUN_007a7520(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdd1b2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d52164;
  param_1[0x14] = &PTR_LAB_00d5214c;
  piVar1 = (int *)param_1[0xe4];
  local_4 = 3;
  if (piVar1 != (int *)0x0) {
    FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  piVar1 = (int *)param_1[0xe5];
  param_1[0xe4] = 0;
  if (piVar1 != (int *)0x0) {
    FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  piVar1 = (int *)param_1[0xe6];
  param_1[0xe5] = 0;
  if (piVar1 != (int *)0x0) {
    FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  piVar1 = (int *)param_1[0xe7];
  param_1[0xe6] = 0;
  if (piVar1 != (int *)0x0) {
    FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  piVar1 = param_1 + 0xd8;
  param_1[0xe7] = 0;
  (**(code **)(*piVar1 + 4))();
  param_1[0xdd] = 0;
  (**(code **)*piVar1)();
  (**(code **)(param_1[0xde] + 4))();
  param_1[0xe3] = 0;
  (**(code **)param_1[0xde])();
  param_1[0xe8] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0xea] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xea] = param_1[0xe9];
  }
  if (param_1[0xe9] != 0) {
    *(undefined4 *)(param_1[0xe9] + 4) = param_1[0xea];
  }
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xed] = 0;
  if ((undefined4 *)param_1[0xea] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xea] = param_1[0xe9];
  }
  if (param_1[0xe9] != 0) {
    *(undefined4 *)(param_1[0xe9] + 4) = param_1[0xea];
  }
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xde] = &PTR_LAB_00d52114;
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
  *piVar1 = (int)&PTR_FUN_00d16aac;
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


//// FUNCTION FUN_007a7730 @ 007a7730 ////

void __fastcall FUN_007a7730(int param_1)

{
  void *pvVar1;
  int *piVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int *this;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 extraout_EDX;
  bool bVar7;
  float10 fVar8;
  int iVar9;
  void *pvStack_c4;
  char *pcStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  char acStack_b4 [48];
  char *local_84;
  undefined4 local_80;
  uint local_7c;
  char local_78 [20];
  char *local_64;
  undefined4 local_60;
  uint local_5c;
  char local_58 [12];
  float fStack_4c;
  void *pvStack_48;
  float fStack_44;
  uint auStack_40 [5];
  undefined1 uStack_2c;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd26b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x374) != 0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x3a0);
    bVar7 = pvVar1 == (void *)0x0;
    if (bVar7) {
      piVar2 = (int *)0x0;
    }
    else {
      local_64 = local_58;
      local_58[0] = '\0';
      local_60 = 0;
      local_5c = 0x20;
      local_64 = _malloc(0x20);
      _strncpy(local_64,"ai_pack_unlocked.flm",0x14);
      local_60 = 0x14;
      local_64[0x14] = '\0';
      local_84 = local_78;
      local_78[0] = '\0';
      local_80 = 0;
      local_7c = 0x14;
      _strncpy(local_84,"p_icon_crate.msh",0x10);
      local_80 = 0x10;
      local_84[0x10] = '\0';
      local_4 = 2;
      piVar2 = FUN_0073e150(pvVar1,&local_84,&local_64);
    }
    if ((!bVar7) && (0x14 < local_7c)) {
                    /* WARNING: Subroutine does not return */
      _free(local_84);
    }
    local_4 = 0xffffffff;
    if ((!bVar7) && (0x14 < local_5c)) {
                    /* WARNING: Subroutine does not return */
      _free(local_64);
    }
    iVar9 = 0x42c80000;
    (**(code **)(*piVar2 + 0x74))(0x42c80000);
    fVar8 = (float10)fptan((float10)0.13089970144330554);
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0x3e800000;
    fStack_4c = (float)((float10)1.0 / fVar8);
    fStack_44 = fStack_4c * 0.13;
    pvStack_48 = (void *)(fStack_4c * 0.68);
    fStack_4c = fStack_4c * 0.41;
    (**(code **)(*piVar2 + 0xfc))(&fStack_4c,auStack_40,0x3dcccccd,0x47c35000,0x3e860a92);
    uStack_20 = 5;
    sVar3 = FUN_00ace02d(L"<e2><phrasebook>");
    FUN_0040cae0(&stack0xffffff20,L"<e2><phrasebook>",sVar3);
    pcStack_c0 = acStack_b4;
    acStack_b4[0] = '\0';
    uStack_bc = 0;
    uStack_b8 = 0x20;
    pcStack_c0 = _malloc(0x20);
    _strncpy(pcStack_c0,"SITT_RESEARCHPACK_UNLOCKED",0x1a);
    uStack_bc = 0x1a;
    pcStack_c0[0x1a] = '\0';
    uStack_20._0_1_ = 6;
    puVar4 = FUN_009b5030(&pvStack_48,&pcStack_c0);
    FUN_0040cae0(&stack0xffffff20,(wchar_t *)*puVar4,puVar4[1]);
    if (10 < auStack_40[0]) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_48);
    }
    uStack_20._0_1_ = 5;
    if (0x14 < uStack_b8) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_c0);
    }
    puVar4 = FUN_0049f0f0(*(void **)(iVar9 + 0x374),&pvStack_48);
    sVar3 = FUN_00ace02d(L"<phrase key=packname><font color=#000000>");
    FUN_0040cae0(&stack0xffffff20,L"<phrase key=packname><font color=#000000>",sVar3);
    FUN_0040cae0(&stack0xffffff20,(wchar_t *)*puVar4,puVar4[1]);
    sVar3 = FUN_00ace02d(L"</font></phrase>");
    FUN_0040cae0(&stack0xffffff20,L"</font></phrase>",sVar3);
    if (10 < auStack_40[0]) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_48);
    }
    sVar3 = FUN_00ace02d(L"</phrasebook></e2>");
    FUN_0040cae0(&stack0xffffff20,L"</phrasebook></e2>",sVar3);
    puVar4 = operator_new(0x3fc);
    uStack_20._0_1_ = 7;
    if (puVar4 == (undefined4 *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = FUN_00833290(puVar4);
    }
    uStack_20 = CONCAT31(uStack_20._1_3_,5);
    (**(code **)(*this + 0x78))(0x43160000);
    *(undefined1 *)(this + 0xd6) = 1;
    (**(code **)(*this + 0x54))(&stack0xffffff1c);
    (**(code **)(*this + 0x84))(0);
    puVar4 = operator_new(0x344);
    uStack_2c = 8;
    if (puVar4 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_007432f0(puVar4);
    }
    uStack_2c = 5;
    (**(code **)(*piVar2 + 0x5c))(1,piVar5,0);
    (**(code **)(*piVar2 + 100))(1,piVar5,0);
    (**(code **)(*piVar5 + 0xc))(piVar2,1);
    iVar9 = *this;
    fVar8 = (float10)(**(code **)(*piVar2 + 0x10))();
    (**(code **)(iVar9 + 0x5c))(1,piVar5,(float)fVar8);
    FUN_0073e5e0(this,piVar2);
    (**(code **)(*piVar5 + 0xc))(this,1);
    (**(code **)(*piVar5 + 0x84))(0);
    pvVar1 = operator_new(0x4e0);
    local_4._0_1_ = 9;
    if (pvVar1 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_008dbd50(pvVar1,(int)piVar5);
    }
    local_4._0_1_ = 5;
    pvVar1 = operator_new(0x84);
    local_4._0_1_ = 10;
    if (pvVar1 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = FUN_007a1f90(pvVar1,param_1,*(int *)(param_1 + 0x38c),0);
    }
    local_4._0_1_ = 5;
    FUN_008dcf70(puVar4,puVar6);
    FUN_008db920(puVar4);
    FUN_008d55e0(puVar4,0);
    FUN_008d56d0(puVar4,0);
    piVar2 = operator_new(0x14);
    local_4._0_1_ = 0xb;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_008df0a0(piVar2,extraout_EDX,puVar4,0);
    }
    *(int **)(param_1 + 0x394) = piVar2;
    piVar2[4] = DAT_00e5fb08 * 2;
    iVar9 = puVar4[0x12];
    local_4 = CONCAT31(local_4._1_3_,5);
    puVar4[0x12] = iVar9 + -1;
    if (iVar9 + -1 == 0) {
      (**(code **)*puVar4)();
    }
    piVar2 = piVar5 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*piVar5)();
    }
    if (10 < uStack_bc) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_c4);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007a7cb0 @ 007a7cb0 ////

void __fastcall FUN_007a7cb0(int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *this;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd2a1;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x374) != 0) &&
     (ExceptionList = &local_c, piVar2 = FUN_005eaae0(*(int *)(param_1 + 0x374)),
     piVar2 != (int *)0x0)) {
    pvVar3 = operator_new(0x4e0);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      this = FUN_008dbd50(pvVar3,(int)piVar2);
    }
    local_4 = 0xffffffff;
    pvVar3 = operator_new(0x84);
    local_4 = 1;
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_007a1f90(pvVar3,param_1,*(int *)(param_1 + 0x38c),0);
    }
    local_4 = 0xffffffff;
    FUN_008dcf70(this,puVar4);
    FUN_008db920(this);
    FUN_008d55e0(this,0);
    FUN_008d56d0(this,0);
    piVar5 = operator_new(0x14);
    local_4 = 2;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_008df0a0(piVar5,extraout_EDX,this,0);
    }
    *(int **)(param_1 + 0x398) = piVar5;
    piVar5[4] = 0;
    iVar1 = this[0x12];
    local_4 = 0xffffffff;
    this[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*this)(1);
    }
    piVar5 = piVar2 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*piVar2)(1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007a8080 @ 007a8080 ////

void __fastcall FUN_007a8080(int param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  size_t sVar5;
  int *piVar6;
  undefined4 extraout_EDX;
  int *piStack_90;
  char *local_8c;
  undefined4 uStack_88;
  uint local_84;
  char acStack_80 [20];
  wchar_t *local_6c;
  size_t local_68;
  uint local_64;
  wchar_t local_60 [10];
  void *apvStack_4c [2];
  uint uStack_44;
  undefined2 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined2 auStack_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cdd32d;
  local_c = ExceptionList;
  if (*(void **)(param_1 + 0x374) != (void *)0x0) {
    local_6c = local_60;
    local_60[0] = L'\0';
    local_68 = 0;
    local_64 = 10;
    local_4 = 0;
    ExceptionList = &local_c;
    puVar4 = FUN_0049f0f0(*(void **)(param_1 + 0x374),&local_8c);
    sVar5 = FUN_00ace02d(L"<table><tr><td width=200 align=left><e2><font color=#000000>");
    FUN_0040cae0(&local_6c,L"<table><tr><td width=200 align=left><e2><font color=#000000>",sVar5);
    FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
    sVar5 = FUN_00ace02d(L"</font></e2></td></tr>");
    FUN_0040cae0(&local_6c,L"</font></e2></td></tr>",sVar5);
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    sVar5 = FUN_00ace02d(L"<tr><td width=200 align=left><e3>- <phrasebook>");
    FUN_0040cae0(&local_6c,L"<tr><td width=200 align=left><e3>- <phrasebook>",sVar5);
    cVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x374) + 0x38) + 0x20))();
    local_84 = 0x20;
    uStack_88 = 0;
    acStack_80[0] = '\0';
    if (cVar2 == '\0') {
      local_8c = acStack_80;
      local_8c = _malloc(0x20);
      _strncpy(local_8c,"SITT_RESEARCHPACK_UNLOCKDATE",0x1c);
      uStack_88 = 0x1c;
      local_8c[0x1c] = '\0';
      local_4._0_1_ = 2;
      puVar4 = FUN_009b5030(apvStack_4c,&local_8c);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c);
      }
      puVar4 = FUN_0049f0f0(*(void **)(param_1 + 0x374),apvStack_4c);
      sVar5 = FUN_00ace02d(L"<phrase key=packname><font color=#000000>");
      FUN_0040cae0(&local_6c,L"<phrase key=packname><font color=#000000>",sVar5);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      sVar5 = FUN_00ace02d(L"</font></phrase>");
      FUN_0040cae0(&local_6c,L"</font></phrase>",sVar5);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
      iVar1 = *(int *)(param_1 + 0x374);
      sVar5 = FUN_00ace02d(L"<phrase key=date>");
      FUN_0040cae0(&local_6c,L"<phrase key=date>",sVar5);
      (**(code **)(*(int *)(iVar1 + 0x38) + 0x1c))(&piStack_90);
      puVar4 = FUN_0043c090();
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      sVar5 = FUN_00ace02d(L"</phrase>");
      FUN_0040cae0(&local_6c,L"</phrase>",sVar5);
    }
    else {
      local_8c = acStack_80;
      local_8c = _malloc(0x20);
      _strncpy(local_8c,"SITT_RESEARCHPACK_UNLOCKED",0x1a);
      uStack_88 = 0x1a;
      local_8c[0x1a] = '\0';
      local_4._0_1_ = 1;
      puVar4 = FUN_009b5030(apvStack_4c,&local_8c);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c);
      }
      puVar4 = FUN_0049f0f0(*(void **)(param_1 + 0x374),apvStack_4c);
      sVar5 = FUN_00ace02d(L"<phrase key=packname><font color=#000000>");
      FUN_0040cae0(&local_6c,L"<phrase key=packname><font color=#000000>",sVar5);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      sVar5 = FUN_00ace02d(L"</font></phrase>");
      FUN_0040cae0(&local_6c,L"</font></phrase>",sVar5);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
    }
    sVar5 = FUN_00ace02d(L"</phrasebook></e3></td></tr>");
    FUN_0040cae0(&local_6c,L"</phrasebook></e3></td></tr>",sVar5);
    bVar3 = FUN_0049c760(*(int *)(param_1 + 0x374));
    if (bVar3) {
      sVar5 = FUN_00ace02d(L"<tr><td width=200 align=left><e3>- <phrasebook>");
      FUN_0040cae0(&local_6c,L"<tr><td width=200 align=left><e3>- <phrasebook>",sVar5);
      local_8c = acStack_80;
      acStack_80[0] = '\0';
      uStack_88 = 0;
      local_84 = 0x20;
      local_8c = _malloc(0x20);
      _strncpy(local_8c,"TIMELINE_RESEARCH_AVAILABLEALL",0x1e);
      uStack_88 = 0x1e;
      local_8c[0x1e] = '\0';
      local_4._0_1_ = 3;
      puVar4 = FUN_009b5030(apvStack_4c,&local_8c);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c);
      }
      puVar4 = FUN_0049f0f0(*(void **)(param_1 + 0x374),apvStack_4c);
      sVar5 = FUN_00ace02d(L"<phrase key=name><font color=#000000>");
      FUN_0040cae0(&local_6c,L"<phrase key=name><font color=#000000>",sVar5);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      sVar5 = FUN_00ace02d(L"</font></phrase>");
      FUN_0040cae0(&local_6c,L"</font></phrase>",sVar5);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
      piStack_90 = *(int **)(*(int *)(param_1 + 0x374) + 0xa4);
      sVar5 = FUN_00ace02d(L"<phrase key=date>");
      FUN_0040cae0(&local_6c,L"<phrase key=date>",sVar5);
      puVar4 = FUN_0043c090();
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      sVar5 = FUN_00ace02d(L"</phrase></phrasebook></e3></td></tr>");
      FUN_0040cae0(&local_6c,L"</phrase></phrasebook></e3></td></tr>",sVar5);
    }
    sVar5 = FUN_00ace02d(L"</table>");
    FUN_0040cae0(&local_6c,L"</table>",sVar5);
    puStack_2c = auStack_20;
    auStack_20[0] = 0;
    uStack_28 = 0;
    uStack_24 = 10;
    local_4._0_1_ = 4;
    sVar5 = FUN_00ace02d(L"<table cellspacing=2><tr><td>");
    FUN_0040cae0(&puStack_2c,L"<table cellspacing=2><tr><td>",sVar5);
    FUN_0040cae0(&puStack_2c,local_6c,local_68);
    sVar5 = FUN_00ace02d(L"</td></tr></table>");
    FUN_0040cae0(&puStack_2c,L"</td></tr></table>",sVar5);
    piStack_90 = operator_new(0x84);
    local_4._0_1_ = 5;
    if (piStack_90 != (int *)0x0) {
      FUN_007a1f90(piStack_90,param_1,*(int *)(param_1 + 0x38c),0);
    }
    local_4._0_1_ = 4;
    puVar4 = FUN_008dc140((undefined4 *)0x435c0000);
    piStack_90 = operator_new(0x14);
    local_4._0_1_ = 6;
    if (piStack_90 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = FUN_008df0a0(piStack_90,extraout_EDX,puVar4,1);
    }
    *(int **)(param_1 + 0x390) = piVar6;
    iVar1 = puVar4[0x12];
    local_4 = CONCAT31(local_4._1_3_,4);
    puVar4[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar4)(1);
    }
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_2c);
    }
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007a86e0 @ 007a86e0 ////

undefined4 * __thiscall FUN_007a86e0(void *this,byte param_1)

{
  FUN_007a7520(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION WTimelineResearchPackIcon_Tick @ 007a8700 ////

void __fastcall WTimelineResearchPackIcon_Tick(int *param_1,undefined4 param_2)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  float10 fVar4;
  ulonglong uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined1 *puVar9;
  uint auStack_28 [10];
  
  if (param_1[0xdd] == 0) goto LAB_007a880e;
  if (*(char *)((int)param_1 + 0x3b9) == '\0') {
    if ((char)param_1[0xee] != '\0') {
      *(undefined1 *)(param_1 + 0xee) = 0;
      (**(code **)(*param_1 + 0x74))(0x41800000,0x41800000);
      param_2 = extraout_EDX_05;
    }
    goto LAB_007a880e;
  }
  pvVar2 = (void *)FUN_00ace790((int *)param_1[0x46],0,&TM::WWindow::RTTI_Type_Descriptor,
                                &TM::WTimeline::RTTI_Type_Descriptor,0);
  param_2 = extraout_EDX;
  if (param_1[0xe4] == 0) {
    fVar4 = (float10)(**(code **)(*(int *)param_1[0xe3] + 0x10))();
    uVar3 = FUN_00795fa0(pvVar2,(float)fVar4);
    param_2 = extraout_EDX_00;
    if ((char)uVar3 == '\0') goto LAB_007a876e;
    FUN_007a8080((int)param_1);
    param_2 = extraout_EDX_01;
  }
  else {
LAB_007a876e:
    if (param_1[0xe4] != 0) {
      FUN_008def30(param_1[0xe4],param_2);
      param_2 = extraout_EDX_02;
    }
  }
  if ((char)param_1[0xee] == '\0') {
    fVar4 = (float10)(**(code **)(*(int *)param_1[0xe3] + 0x10))();
    uVar3 = FUN_00795fa0(pvVar2,(float)fVar4);
    param_2 = extraout_EDX_03;
    if ((char)uVar3 != '\0') {
      (**(code **)(*param_1 + 0x74))(0x42000000,0x42000000);
      *(undefined1 *)(param_1 + 0xee) = 1;
      FUN_0041c9c0(auStack_28,"HUD_TIMELINE_RESEARCH_EVENT_HIGHLIGHTED");
      auStack_28[0] = auStack_28[0] & 0xfffffffe;
      puVar9 = &DAT_00d17518;
      iVar8 = 0;
      puVar7 = auStack_28;
      iVar6 = 2;
      pvVar2 = (void *)FUN_004f3b20();
      FUN_004f3270(pvVar2,iVar6,(byte *)puVar7,iVar8,puVar9);
      param_2 = extraout_EDX_04;
    }
  }
LAB_007a880e:
  if ((int *)param_1[0xe4] != (int *)0x0) {
    uVar5 = FUN_008def80((int *)param_1[0xe4],param_2);
    param_2 = (undefined4)(uVar5 >> 0x20);
    if ((char)uVar5 != '\0') {
      piVar1 = (int *)param_1[0xe4];
      if (piVar1 != (int *)0x0) {
        FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
        _free(piVar1);
      }
      param_1[0xe4] = 0;
    }
  }
  if ((int *)param_1[0xe5] != (int *)0x0) {
    uVar5 = FUN_008def80((int *)param_1[0xe5],param_2);
    param_2 = (undefined4)(uVar5 >> 0x20);
    if (((char)uVar5 != '\0') || (*(int *)param_1[0xe5] == 0)) {
      piVar1 = (int *)param_1[0xe5];
      if (piVar1 != (int *)0x0) {
        FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
        _free(piVar1);
      }
      param_1[0xe5] = 0;
      FUN_007a7cb0((int)param_1);
      param_2 = extraout_EDX_06;
    }
  }
  if ((int *)param_1[0xe6] != (int *)0x0) {
    uVar5 = FUN_008def80((int *)param_1[0xe6],param_2);
    param_2 = (undefined4)(uVar5 >> 0x20);
    if ((char)uVar5 != '\0') {
      piVar1 = (int *)param_1[0xe6];
      if (piVar1 != (int *)0x0) {
        FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
        _free(piVar1);
      }
      param_1[0xe6] = 0;
    }
  }
  if ((int *)param_1[0xe7] != (int *)0x0) {
    uVar5 = FUN_008def80((int *)param_1[0xe7],param_2);
    if ((char)uVar5 != '\0') {
      piVar1 = (int *)param_1[0xe7];
      if (piVar1 != (int *)0x0) {
        FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
        _free(piVar1);
      }
      param_1[0xe7] = 0;
    }
  }
  WWindow_Tick(param_1);
  *(undefined1 *)((int)param_1 + 0x3b9) = 0;
  return;
}


//// FUNCTION FUN_007a8b40 @ 007a8b40 ////

uint __thiscall FUN_007a8b40(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)((int)this + 0x374) != 0) &&
     (uVar1 = *(uint *)(*(int *)((int)this + 0x374) + 0xa4), uVar1 == param_1)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_007a8bb0 @ 007a8bb0 ////

void FUN_007a8bb0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *this;
  uint uVar2;
  undefined4 *puVar3;
  size_t sVar4;
  wchar_t *_Format;
  undefined4 unaff_retaddr;
  int *_Memory;
  int local_d8 [2];
  undefined2 *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined2 local_c4 [10];
  undefined4 *local_b0;
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [44];
  void *pvStack_34;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00cdd359;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_b0 = operator_new(0x3fc);
  local_4 = (int *)0x0;
  if (local_b0 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_00833290(local_b0);
  }
  local_d0 = local_c4;
  local_c4[0] = 0;
  local_cc = 0;
  local_c8 = 10;
  uVar2 = FUN_00ace02d(L"<table><tr><td align=center width=300><e2>");
  FUN_004036d0(&local_d0,L"<table><tr><td align=center width=300><e2>",uVar2);
  local_4 = (int *)0x1;
  puVar3 = FUN_00861de0(local_ac,param_3);
  FUN_0040cae0(&local_d0,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac[0]);
  }
  _Format = (wchar_t *)0x0;
  switch(param_3) {
  case 0:
    _Format = *(wchar_t **)(local_d8[0] + 0x40c);
    break;
  case 1:
    _Format = *(wchar_t **)(local_d8[0] + 0x410);
    break;
  case 2:
    _Format = *(wchar_t **)(local_d8[0] + 0x414);
    break;
  case 3:
    _Format = *(wchar_t **)(local_d8[0] + 0x418);
    break;
  case 4:
    _Format = *(wchar_t **)(local_d8[0] + 0x41c);
    break;
  case 5:
    _Format = *(wchar_t **)(local_d8[0] + 0x420);
  }
  sVar4 = FUN_00ace02d((short *)&DAT_00d52624);
  FUN_0040cae0(&local_d0,L" x ",sVar4);
  sVar4 = _swprintf(local_8c,0xd18f7c,_Format);
  FUN_0040cae0(&local_d0,local_8c,sVar4);
  sVar4 = FUN_00ace02d(L"</e2></td></tr></table>");
  FUN_0040cae0(&local_d0,L"</e2></td></tr></table>",sVar4);
  (**(code **)(*this + 0x54))(&local_d0);
  local_d8[0] = -0x1000000;
  FUN_00830550(this,8,(char *)local_d8);
  uVar2 = 0;
  this[0xd5] = 0x43480000;
  *(undefined1 *)(this + 0xd6) = 1;
  (**(code **)(*this + 0x84))();
  piVar1 = local_4;
  _Memory = local_4;
  (**(code **)(*this + 100))(1,local_4,unaff_retaddr);
  (**(code **)(*this + 0x5c))(1,piVar1,0);
  (**(code **)(*piVar1 + 0xc))(this,1);
  (**(code **)(*this + 0x14))();
  if (uVar2 < 0xb) {
    ExceptionList = pvStack_34;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_007a8df0 @ 007a8df0 ////

void FUN_007a8df0(undefined4 param_1,undefined4 param_2,wchar_t *param_3,size_t param_4)

{
  int *piVar1;
  int *this;
  uint uVar2;
  size_t sVar3;
  uint unaff_retaddr;
  wchar_t *in_stack_0000002c;
  void *_Memory;
  undefined2 *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_a4 [10];
  undefined4 *local_90;
  wchar_t local_8c [44];
  void *pvStack_34;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *local_4;
  
  puStack_8 = &LAB_00cdd391;
  pvStack_c = ExceptionList;
  local_4 = (int *)0x0;
  ExceptionList = &pvStack_c;
  local_90 = operator_new(0x3fc);
  local_4._0_1_ = 1;
  if (local_90 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_00833290(local_90);
  }
  local_b0 = local_a4;
  local_a4[0] = 0;
  local_ac = 0;
  local_a8 = 10;
  uVar2 = FUN_00ace02d(L"<table><tr><td align=center width=300><e2><translate>");
  FUN_004036d0(&local_b0,L"<table><tr><td align=center width=300><e2><translate>",uVar2);
  local_4 = (int *)CONCAT31(local_4._1_3_,2);
  FUN_0040cae0(&local_b0,param_3,param_4);
  sVar3 = FUN_00ace02d(L"</translate>");
  FUN_0040cae0(&local_b0,L"</translate>",sVar3);
  sVar3 = FUN_00ace02d((short *)&DAT_00d52624);
  FUN_0040cae0(&local_b0,L" x ",sVar3);
  sVar3 = _swprintf(local_8c,0xd18f7c,in_stack_0000002c);
  FUN_0040cae0(&local_b0,local_8c,sVar3);
  sVar3 = FUN_00ace02d(L"</e2></td></tr></table>");
  FUN_0040cae0(&local_b0,L"</e2></td></tr></table>",sVar3);
  (**(code **)(*this + 0x54))(&local_b0);
  FUN_00830550(this,8,&stack0xffffff48);
  this[0xd5] = 0x43480000;
  *(undefined1 *)(this + 0xd6) = 1;
  (**(code **)(*this + 0x84))(0);
  piVar1 = local_4;
  _Memory = (void *)0x1;
  (**(code **)(*this + 100))(1,local_4);
  (**(code **)(*this + 0x5c))(1,piVar1,0);
  (**(code **)(*piVar1 + 0xc))(this,1);
  (**(code **)(*this + 0x14))();
  if (10 < unaff_retaddr) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (10 < uStack_14) {
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  ExceptionList = pvStack_34;
  return;
}


//// FUNCTION FUN_007a9030 @ 007a9030 ////

void __fastcall FUN_007a9030(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d526f8;
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


//// FUNCTION FUN_007a9080 @ 007a9080 ////

void __fastcall FUN_007a9080(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdd3ee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d52724;
  param_1[0x14] = &PTR_FUN_00d52708;
  local_4 = 5;
  if ((int *)param_1[0xde] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xde] + 0xc))(0x3f000000);
    puVar2 = (undefined4 *)param_1[0xde];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      param_1[0xde] = 0;
    }
    param_1[0xdf] = 0;
  }
  if (10 < (uint)param_1[0xfd]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xfb]);
  }
  if (10 < (uint)param_1[0xf5]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf3]);
  }
  if (10 < (uint)param_1[0xed]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xeb]);
  }
  if (10 < (uint)param_1[0xe3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe1]);
  }
  param_1[0xd8] = &PTR_LAB_00d526f8;
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


//// FUNCTION FUN_007a91f0 @ 007a91f0 ////

undefined4 * __thiscall FUN_007a91f0(void *this,byte param_1)

{
  FUN_007a9080(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007a9210 @ 007a9210 ////

void __fastcall FUN_007a9210(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  void *pvVar8;
  float *pfVar9;
  undefined4 local_98 [2];
  undefined1 auStack_90 [4];
  undefined **ppuStack_8c;
  int iStack_88;
  int *piStack_84;
  undefined4 uStack_78;
  float afStack_64 [11];
  undefined1 auStack_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd41b;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x374) != 0) &&
     (pvVar8 = *(void **)(*(int *)(param_1 + 0x374) + 0xa4), pvVar8 != (void *)0x0)) {
    ExceptionList = &local_c;
    puVar2 = (undefined4 *)FUN_00585ff0(pvVar8,local_98);
    *(undefined4 *)(param_1 + 0x3a4) = *puVar2;
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x374) + 0xa4) + 0x298))();
    uVar4 = (**(code **)(*piVar3 + 0x28))();
    *(undefined4 *)(param_1 + 0x3a8) = uVar4;
    pvVar8 = (void *)(param_1 + 0x3ac);
    uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(pvVar8,(wchar_t *)&lpCaption_00d16918,uVar5);
    uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0((void *)(param_1 + 0x3cc),(wchar_t *)&lpCaption_00d16918,uVar5);
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x374) + 0xa4) + 0x1d4))();
    puVar2 = local_98;
    puVar6 = (uint *)(**(code **)(*piVar3 + 0x4c))();
    thunk_FUN_00444a70(puVar6,puVar2);
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x374) + 0xa4) + 0x1d4))();
    puVar6 = (uint *)(**(code **)(*piVar3 + 0x34))(&stack0xffffff64,(void *)(param_1 + 0x3cc));
    thunk_FUN_00444a70(puVar6,pvVar8);
    uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0((void *)(param_1 + 0x3ec),(wchar_t *)&lpCaption_00d16918,uVar5);
    iVar7 = FUN_00590d30(*(int *)(*(int *)(param_1 + 0x374) + 0xa4));
    if (iVar7 != 0) {
      FUN_004036d0((void *)(param_1 + 0x3ec),*(wchar_t **)(iVar7 + 0x70),*(uint *)(iVar7 + 0x74));
    }
    *(undefined4 *)(param_1 + 0x40c) = 0;
    *(undefined4 *)(param_1 + 0x410) = 0;
    *(undefined4 *)(param_1 + 0x414) = 0;
    *(undefined4 *)(param_1 + 0x418) = 0;
    *(undefined4 *)(param_1 + 0x41c) = 0;
    *(undefined4 *)(param_1 + 0x420) = 0;
    pvVar8 = FUN_00857d80(auStack_38);
    uStack_4 = 0;
    pfVar9 = FUN_00857ae0(pvVar8,*(float *)(*(int *)(param_1 + 0x374) + 0xa4));
    FUN_00500630(afStack_64,pfVar9);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    FUN_005005e0((int)auStack_38);
    while( true ) {
      pvVar8 = FUN_00857bd0(auStack_90);
      uStack_4._0_1_ = 3;
      bVar1 = FUN_00856dd0(afStack_64,(int)pvVar8);
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      ppuStack_8c = &PTR_FUN_00d1aed0;
      if (piStack_84 != (int *)0x0) {
        *piStack_84 = iStack_88;
      }
      if (iStack_88 != 0) {
        *(int **)(iStack_88 + 4) = piStack_84;
      }
      uStack_78 = 0;
      iStack_88 = 0;
      piStack_84 = (int *)0x0;
      if (!bVar1) break;
      iVar7 = FUN_00856d90((int)afStack_64);
      if (iVar7 == 0) goto switchD_007a943c_default;
      switch(*(undefined4 *)(iVar7 + 0x60)) {
      case 0:
        *(int *)(param_1 + 0x40c) = *(int *)(param_1 + 0x40c) + 1;
        FUN_00857260(afStack_64);
        break;
      case 1:
        *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
        FUN_00857260(afStack_64);
        break;
      case 2:
        *(int *)(param_1 + 0x414) = *(int *)(param_1 + 0x414) + 1;
        FUN_00857260(afStack_64);
        break;
      case 3:
        *(int *)(param_1 + 0x418) = *(int *)(param_1 + 0x418) + 1;
        FUN_00857260(afStack_64);
        break;
      case 4:
        *(int *)(param_1 + 0x41c) = *(int *)(param_1 + 0x41c) + 1;
        FUN_00857260(afStack_64);
        break;
      case 5:
        *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + 1;
      default:
switchD_007a943c_default:
        FUN_00857260(afStack_64);
      }
    }
    iVar7 = *(int *)(param_1 + 0x374);
    *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(*(int *)(iVar7 + 0xa4) + 0xbac);
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(*(int *)(iVar7 + 0xa4) + 0xbb0);
    *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(*(int *)(iVar7 + 0xa4) + 0xbb4);
    *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(*(int *)(iVar7 + 0xa4) + 3000);
    FUN_005005e0((int)afStack_64);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007a9570 @ 007a9570 ////

undefined4 * __thiscall FUN_007a9570(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *this_00;
  undefined4 *puVar3;
  uint uVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd486;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0069ce90(this);
  *(undefined ***)this = &PTR_FUN_00d52724;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d52708;
  piVar1 = (int *)((int)this + 0x364);
  *(undefined4 *)((int)this + 0x36c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x36c) = (undefined4 *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x360) = &PTR_LAB_00d526f8;
  *(int *)((int)this + 0x374) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x368) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  this_00 = (undefined4 *)((int)this + 900);
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined1 *)((int)this + 0x380) = 0;
  *(undefined1 *)((int)this + 0x381) = 0;
  *(undefined1 *)((int)this + 0x382) = 0;
  *this_00 = (undefined2 *)((int)this + 0x390);
  *(undefined2 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 10;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined2 **)((int)this + 0x3ac) = (undefined2 *)((int)this + 0x3b8);
  *(undefined2 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 10;
  *(undefined2 **)((int)this + 0x3cc) = (undefined2 *)((int)this + 0x3d8);
  *(undefined2 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 10;
  *(undefined2 **)((int)this + 0x3ec) = (undefined2 *)((int)this + 0x3f8);
  *(undefined2 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 10;
  local_2c = local_20;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined4 *)((int)this + 0x420) = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/timeline_retire.dds",0x16);
  local_28 = 0x16;
  local_2c[0x16] = '\0';
  local_4._0_1_ = 6;
  FUN_0069d030(this,&local_2c,0,0,0x3f800000,0x3f800000);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_00741630(this,5,0x7a8970,this,"TIMELINERETIRE");
  piVar1 = *(int **)(*(int *)((int)this + 0x374) + 0xa4);
  if (piVar1 == (int *)0x0) {
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(this_00,(wchar_t *)&lpCaption_00d16918,uVar4);
  }
  else {
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x5c))();
    FUN_004036d0(this_00,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    FUN_007a9210((int)this);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007a97a0 @ 007a97a0 ////

void __fastcall FUN_007a97a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  size_t sVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  float10 fVar11;
  float10 fVar12;
  wchar_t **ppwVar13;
  wchar_t *pwStack_2fc;
  undefined4 uStack_2f8;
  int *piStack_2f4;
  int *piStack_2d0;
  int *piStack_2cc;
  wchar_t *pwVar14;
  int *piStack_2a8;
  int *piStack_2a4;
  void *pvStack_28c;
  int *piStack_288;
  wchar_t *pwStack_284;
  uint uStack_280;
  int *piStack_27c;
  int iVar15;
  int *piStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  int *piStack_260;
  undefined4 *puStack_25c;
  char acStack_258 [4];
  int *piStack_254;
  char acStack_230 [4];
  int *piStack_22c;
  char acStack_208 [4];
  int *piStack_204;
  undefined4 uStack_1e0;
  int *piStack_1dc;
  float fVar16;
  char acStack_1b8 [4];
  int *piStack_1b4;
  float fVar17;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int *piStack_164;
  char acStack_140 [4];
  int *piStack_13c;
  char acStack_118 [4];
  undefined1 local_114;
  undefined1 local_113;
  undefined1 local_112;
  undefined1 local_111;
  float fStack_110;
  undefined1 uStack_f4;
  int *piStack_f0;
  undefined2 *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined2 local_e0 [10];
  undefined1 uStack_cc;
  float fStack_c0;
  undefined1 uStack_a4;
  int *piStack_a0;
  undefined1 uStack_7c;
  float fStack_78;
  float fStack_70;
  undefined4 uStack_58;
  undefined1 uStack_2c;
  float fStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00cdd599;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007a9210(param_1);
  piVar10 = (int *)0x0;
  local_111 = 0xff;
  local_112 = 0;
  local_113 = 0;
  local_114 = 0;
  puVar2 = operator_new(0x3fc);
  local_4 = (int *)0x0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
  }
  local_ec = local_e0;
  local_e0[0] = 0;
  local_e8 = 0;
  local_e4 = 10;
  uVar4 = FUN_00ace02d(
                      L"<table><tr><td align=center width=300><e1><translate>SITT_CAREER</translate></e1></td></tr></table>"
                      );
  FUN_004036d0(&local_ec,
               L"<table><tr><td align=center width=300><e1><translate>SITT_CAREER</translate></e1></td></tr></table>"
               ,uVar4);
  local_4 = (int *)0x1;
  (**(code **)(*piVar3 + 0x54))();
  piStack_13c = (int *)0x7a985c;
  FUN_00830550(piVar3,8,acStack_118);
  piVar3[0xd5] = 0x43340000;
  *(undefined1 *)(piVar3 + 0xd6) = 1;
  (**(code **)(*piVar3 + 0x84))();
  piVar1 = local_4;
  piStack_13c = local_4;
  acStack_140[0] = '\x01';
  acStack_140[1] = '\0';
  acStack_140[2] = '\0';
  acStack_140[3] = '\0';
  (**(code **)(*piVar3 + 100))();
  (**(code **)(*piVar3 + 0x5c))();
  (**(code **)(*piVar1 + 0xc))();
  fVar11 = (float10)(**(code **)(*piVar3 + 0x14))();
  fStack_20 = (float)(fVar11 + (float10)fStack_20);
  puVar2 = operator_new(0x3fc);
  uStack_2c = 2;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
  }
  uStack_2c = 1;
  uVar4 = FUN_00ace02d(
                      L"<table><tr><td align=left width=150><e1><translate>SITT_STAR_RATING</translate></e1></td></tr></table>"
                      );
  FUN_004036d0(&local_114,
               L"<table><tr><td align=left width=150><e1><translate>SITT_STAR_RATING</translate></e1></td></tr></table>"
               ,uVar4);
  (**(code **)(*piVar3 + 0x54))();
  piStack_164 = (int *)0x7a9923;
  FUN_00830550(piVar3,8,acStack_140);
  piVar3[0xd5] = 0x42c80000;
  *(undefined1 *)(piVar3 + 0xd6) = 1;
  (**(code **)(*piVar3 + 0x84))();
  piStack_164 = piVar1;
  (**(code **)(*piVar3 + 100))();
  (**(code **)(*piVar3 + 0x5c))();
  (**(code **)(*piVar1 + 0xc))();
  (**(code **)(*piVar3 + 0x50))();
  pvVar5 = operator_new(0x350);
  uStack_58._0_1_ = 3;
  if (pvVar5 != (void *)0x0) {
    piStack_164 = (int *)&stack0xfffffe78;
    uStack_18c = 0x7a99a7;
    piVar10 = FUN_0072e9f0(pvVar5,*(int *)(param_1 + 0x3a4),(int *)0x41800000);
  }
  uStack_58 = CONCAT31(uStack_58._1_3_,1);
  piStack_164 = piVar10;
  (**(code **)(*piVar10 + 0x10))();
  iVar15 = *piVar10;
  (**(code **)(*piVar3 + 0x10))();
  uStack_18c = 1;
  uStack_190 = 0x7a99e7;
  (**(code **)(iVar15 + 0x5c))();
  uStack_190 = uStack_58;
  (**(code **)(*piVar10 + 100))();
  (**(code **)(*piVar10 + 0x50))();
  (**(code **)(*piVar1 + 0xc))();
  fVar11 = (float10)(**(code **)(*piVar3 + 0x14))();
  fStack_70 = (float)(fVar11 + (float10)fStack_70);
  puVar2 = operator_new(0x3fc);
  uStack_7c = 4;
  if (puVar2 == (undefined4 *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = FUN_00833290(puVar2);
  }
  uStack_7c = 1;
  uVar4 = FUN_00ace02d(
                      L"<table><tr><td align=left width=150><e1><translate>LEAGUESCREEN_STARTABLE</translate></e1></td></tr></table>"
                      );
  FUN_004036d0(&piStack_164,
               L"<table><tr><td align=left width=150><e1><translate>LEAGUESCREEN_STARTABLE</translate></e1></td></tr></table>"
               ,uVar4);
  (**(code **)(*piVar10 + 0x54))();
  piStack_1b4 = (int *)0x7a9a8d;
  FUN_00830550(piVar10,8,(char *)&uStack_190);
  piVar10[0xd5] = 0x42c80000;
  *(undefined1 *)(piVar10 + 0xd6) = 1;
  (**(code **)(*piVar10 + 0x84))();
  piStack_1b4 = piVar1;
  acStack_1b8[0] = '\x01';
  acStack_1b8[1] = '\0';
  acStack_1b8[2] = '\0';
  acStack_1b8[3] = '\0';
  (**(code **)(*piVar10 + 100))();
  (**(code **)(*piVar10 + 0x5c))();
  (**(code **)(*piVar1 + 0xc))();
  puVar2 = operator_new(0x3fc);
  uStack_a4 = 5;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
    fVar17 = fStack_78;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
    fVar17 = fStack_78;
  }
  uStack_a4 = 1;
  uVar4 = FUN_00ace02d(L"<table><tr><td align=right width=150><e2>");
  FUN_004036d0(&uStack_18c,L"<table><tr><td align=right width=150><e2>",uVar4);
  piStack_1dc = (int *)0x7a9b39;
  sVar6 = _swprintf((wchar_t *)&stack0xfffffed4,0xd18f7c,*(wchar_t **)(param_1 + 0x3a8));
  FUN_0040cae0(&uStack_18c,(wchar_t *)&stack0xfffffed4,sVar6);
  sVar6 = FUN_00ace02d(L"</e2></td></tr></table>");
  FUN_0040cae0(&uStack_18c,L"</e2></td></tr></table>",sVar6);
  (**(code **)(*piVar3 + 0x54))();
  piStack_1dc = (int *)0x7a9b84;
  FUN_00830550(piVar3,8,acStack_1b8);
  piVar3[0xd5] = 0x42c80000;
  *(undefined1 *)(piVar3 + 0xd6) = 1;
  (**(code **)(*piVar3 + 0x84))();
  piStack_1dc = piVar1;
  uStack_1e0 = 1;
  (**(code **)(*piVar3 + 100))();
  (**(code **)(*piVar3 + 0x10))();
  iVar15 = *piVar3;
  (**(code **)(*piVar10 + 0x10))();
  (**(code **)(iVar15 + 0x5c))();
  (**(code **)(*piVar1 + 0xc))();
  fVar11 = (float10)(**(code **)(*piStack_a0 + 0x14))();
  fStack_c0 = (float)(fVar11 + (float10)fStack_c0);
  puVar2 = operator_new(0x3fc);
  uStack_cc = 6;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
    piVar10 = piStack_a0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
    piVar10 = piStack_a0;
  }
  uStack_cc = 1;
  uVar4 = FUN_00ace02d(
                      L"<table><tr><td align=left width=150><e1><translate>SITT_SALARY</translate></e1></td></tr></table>"
                      );
  FUN_004036d0(&piStack_1b4,
               L"<table><tr><td align=left width=150><e1><translate>SITT_SALARY</translate></e1></td></tr></table>"
               ,uVar4);
  (**(code **)(*piVar3 + 0x54))();
  piStack_204 = (int *)0x7a9c6e;
  FUN_00830550(piVar3,8,(char *)&uStack_1e0);
  piVar3[0xd5] = 0x42c80000;
  *(undefined1 *)(piVar3 + 0xd6) = 1;
  (**(code **)(*piVar3 + 0x84))();
  piStack_204 = piVar1;
  acStack_208[0] = '\x01';
  acStack_208[1] = '\0';
  acStack_208[2] = '\0';
  acStack_208[3] = '\0';
  (**(code **)(*piVar3 + 100))();
  (**(code **)(*piVar3 + 0x5c))();
  (**(code **)(*piVar1 + 0xc))();
  puVar2 = operator_new(0x3fc);
  uStack_f4 = 7;
  if (puVar2 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_00833290(puVar2);
  }
  uStack_f4 = 1;
  uVar4 = FUN_00ace02d(L"<table><tr><td align=right width=150><e2>");
  FUN_004036d0(&piStack_1dc,L"<table><tr><td align=right width=150><e2>",uVar4);
  FUN_0040cae0(&piStack_1dc,*(wchar_t **)(param_1 + 0x3ac),*(size_t *)(param_1 + 0x3b0));
  sVar6 = FUN_00ace02d(L"</e2></td></tr></table>");
  FUN_0040cae0(&piStack_1dc,L"</e2></td></tr></table>",sVar6);
  (**(code **)(*piVar7 + 0x54))();
  piStack_22c = (int *)0x7a9d4e;
  FUN_00830550(piVar7,8,acStack_208);
  piVar7[0xd5] = 0x42c80000;
  *(undefined1 *)(piVar7 + 0xd6) = 1;
  (**(code **)(*piVar7 + 0x84))();
  piStack_22c = piVar1;
  acStack_230[0] = '\x01';
  acStack_230[1] = '\0';
  acStack_230[2] = '\0';
  acStack_230[3] = '\0';
  (**(code **)(*piVar7 + 100))();
  (**(code **)(*piVar3 + 0x10))();
  iVar15 = *piVar7;
  (**(code **)(*piVar3 + 0x10))();
  (**(code **)(iVar15 + 0x5c))();
  (**(code **)(*piVar1 + 0xc))();
  fVar11 = (float10)(**(code **)(*piStack_f0 + 0x14))();
  fStack_110 = (float)(fVar11 + (float10)fStack_110);
  puVar2 = operator_new(0x3fc);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
  }
  uVar4 = FUN_00ace02d(
                      L"<table><tr><td align=left width=150><e1><translate>RELEASE_EFFECTS_WAGES</translate></e1></td></tr></table>"
                      );
  FUN_004036d0(&piStack_204,
               L"<table><tr><td align=left width=150><e1><translate>RELEASE_EFFECTS_WAGES</translate></e1></td></tr></table>"
               ,uVar4);
  (**(code **)(*piVar3 + 0x54))();
  piStack_254 = (int *)0x7a9e38;
  FUN_00830550(piVar3,8,acStack_230);
  piVar3[0xd5] = 0x42c80000;
  *(undefined1 *)(piVar3 + 0xd6) = 1;
  (**(code **)(*piVar3 + 0x84))();
  piStack_254 = piVar1;
  acStack_258[0] = '\x01';
  acStack_258[1] = '\0';
  acStack_258[2] = '\0';
  acStack_258[3] = '\0';
  puStack_25c = (undefined4 *)0x7a9e67;
  (**(code **)(*piVar3 + 100))();
  puStack_25c = (undefined4 *)0x0;
  piStack_260 = piVar1;
  uStack_264 = 1;
  uStack_268 = 0x7a9e73;
  (**(code **)(*piVar3 + 0x5c))();
  uStack_268 = 1;
  piStack_26c = piVar3;
  (**(code **)(*piVar1 + 0xc))();
  puStack_25c = operator_new(0x3fc);
  if (puStack_25c == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_00833290(puStack_25c);
  }
  uVar4 = FUN_00ace02d(L"<table><tr><td align=right width=150><e2>");
  FUN_004036d0(&piStack_22c,L"<table><tr><td align=right width=150><e2>",uVar4);
  FUN_0040cae0(&piStack_22c,*(wchar_t **)(param_1 + 0x3cc),*(size_t *)(param_1 + 0x3d0));
  sVar6 = FUN_00ace02d(L"</e2></td></tr></table>");
  FUN_0040cae0(&piStack_22c,L"</e2></td></tr></table>",sVar6);
  (**(code **)(*piVar7 + 0x54))();
  piStack_27c = (int *)0x7a9f1c;
  FUN_00830550(piVar7,8,acStack_258);
  piVar7[0xd5] = 0x42c80000;
  *(undefined1 *)(piVar7 + 0xd6) = 1;
  (**(code **)(*piVar7 + 0x84))();
  piStack_27c = piVar1;
  uStack_280 = 1;
  pwStack_284 = (wchar_t *)0x7a9f4b;
  (**(code **)(*piVar7 + 100))();
  pwStack_284 = (wchar_t *)0x7a9f52;
  fVar11 = (float10)(**(code **)(*piVar3 + 0x10))();
  iVar15 = *piVar7;
  piStack_26c = (int *)(float)((float10)150.0 - fVar11);
  pwStack_284 = (wchar_t *)0x7a9f69;
  fVar11 = (float10)(**(code **)(*piVar3 + 0x10))();
  pwStack_284 = (wchar_t *)(float)(fVar11 + (float10)(float)piStack_26c);
  piStack_288 = piVar1;
  pvStack_28c = (void *)0x1;
  (**(code **)(iVar15 + 0x5c))();
  (**(code **)(*piVar1 + 0xc))();
  (**(code **)(*piVar3 + 0x14))();
  pwStack_284 = operator_new(0x3fc);
  if (pwStack_284 == (wchar_t *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_00833290((undefined4 *)pwStack_284);
  }
  uVar4 = FUN_00ace02d(
                      L"<table><tr><td align=center width=300><e1><translate>AWARDS_TYPES_MOVIES_BIGGESTMOVIE</translate></e1></td></tr></table>"
                      );
  FUN_004036d0(&piStack_254,
               L"<table><tr><td align=center width=300><e1><translate>AWARDS_TYPES_MOVIES_BIGGESTMOVIE</translate></e1></td></tr></table>"
               ,uVar4);
  (**(code **)(*piVar7 + 0x54))();
  piStack_2a4 = (int *)0x7aa004;
  FUN_00830550(piVar7,8,(char *)&uStack_280);
  uVar4 = 0;
  piVar7[0xd5] = 0x43480000;
  *(undefined1 *)(piVar7 + 0xd6) = 1;
  (**(code **)(*piVar7 + 0x84))();
  piStack_2a4 = piVar1;
  piStack_2a8 = (int *)0x1;
  (**(code **)(*piVar7 + 100))();
  (**(code **)(*piVar7 + 0x5c))();
  (**(code **)(*piVar1 + 0xc))();
  (**(code **)(*piVar7 + 0x14))();
  piVar8 = operator_new(0x3fc);
  if (piVar8 == (int *)0x0) {
    piStack_2a8 = (int *)0x0;
  }
  else {
    piStack_2a8 = FUN_00833290(piVar8);
  }
  uVar9 = FUN_00ace02d(L"<table><tr><td align=center width=300><e2>");
  FUN_004036d0(&piStack_27c,L"<table><tr><td align=center width=300><e2>",uVar9);
  sVar6 = *(size_t *)(param_1 + 0x3f0);
  if (sVar6 == 0) {
    sVar6 = FUN_00ace02d(L"<translate>SITT_DETAILS_CURRENT_PROJECT_NONE</translate>");
    pwVar14 = L"<translate>SITT_DETAILS_CURRENT_PROJECT_NONE</translate>";
  }
  else {
    pwVar14 = *(wchar_t **)(param_1 + 0x3ec);
  }
  FUN_0040cae0(&piStack_27c,pwVar14,sVar6);
  sVar6 = FUN_00ace02d(L"</e2></td></tr></table>");
  FUN_0040cae0(&piStack_27c,L"</e2></td></tr></table>",sVar6);
  (**(code **)(*piStack_2a8 + 0x54))();
  piStack_2cc = (int *)0x7aa124;
  FUN_00830550(piVar8,8,(char *)&piStack_2a8);
  piVar8[0xd5] = 0x43480000;
  *(undefined1 *)(piVar8 + 0xd6) = 1;
  (**(code **)(*piVar8 + 0x84))();
  piStack_2cc = piVar1;
  piStack_2d0 = (int *)0x1;
  (**(code **)(*piVar1 + 100))();
  (**(code **)(*piVar7 + 0x5c))();
  (**(code **)(*piVar1 + 0xc))();
  fVar11 = (float10)(**(code **)(*piStack_2d0 + 0x14))();
  fVar12 = (float10)(**(code **)(*piVar7 + 0x14))();
  piVar7 = (int *)0x0;
  fVar17 = (float)(fVar12 + (float10)(float)fVar11 + (float10)8.0 + (float10)fVar17);
  if (0 < *(int *)(param_1 + 0x41c) + *(int *)(param_1 + 0x420) + *(int *)(param_1 + 0x418) +
          *(int *)(param_1 + 0x414) + *(int *)(param_1 + 0x410) + *(int *)(param_1 + 0x40c)) {
    puVar2 = operator_new(0x3fc);
    if (puVar2 != (undefined4 *)0x0) {
      piVar7 = FUN_00833290(puVar2);
    }
    uVar9 = FUN_00ace02d(
                        L"<table><tr><td align=center width=300><e1><translate>LEAGUETABLE_AWARDS</translate></e1></td></tr></table>"
                        );
    FUN_004036d0(&piStack_2a4,
                 L"<table><tr><td align=center width=300><e1><translate>LEAGUETABLE_AWARDS</translate></e1></td></tr></table>"
                 ,uVar9);
    (**(code **)(*piVar7 + 0x54))();
    piStack_2f4 = (int *)0x7aa23b;
    FUN_00830550(piVar7,8,(char *)&piStack_2d0);
    piVar7[0xd5] = 0x43480000;
    *(undefined1 *)(piVar7 + 0xd6) = 1;
    (**(code **)(*piVar7 + 0x84))();
    piStack_2f4 = piVar1;
    uStack_2f8 = 1;
    pwStack_2fc = (wchar_t *)0x7aa26a;
    (**(code **)(*piVar7 + 100))();
    pwStack_2fc = (wchar_t *)0x0;
    (**(code **)(*piVar7 + 0x5c))();
    piVar8 = piVar7;
    (**(code **)(*piVar1 + 0xc))();
    fVar11 = (float10)(**(code **)(*piVar7 + 0x14))();
    fVar16 = (float)(fVar11 + (float10)(float)piVar10);
    if (0 < *(int *)(param_1 + 0x40c)) {
      FUN_007a8bb0(piVar1,fVar16,0);
      fVar11 = (float10)(**(code **)(*piVar3 + 0x14))();
      fVar16 = (float)(fVar11 + (float10)fVar16);
    }
    if (0 < *(int *)(param_1 + 0x410)) {
      FUN_007a8bb0(piVar1,fVar16,1);
      fVar11 = (float10)(**(code **)(*piVar3 + 0x14))();
      fVar16 = (float)(fVar11 + (float10)fVar16);
    }
    if (0 < *(int *)(param_1 + 0x414)) {
      FUN_007a8bb0(piVar1,fVar16,2);
      (**(code **)(*piVar3 + 0x14))();
    }
    if (0 < *(int *)(param_1 + 0x418)) {
      pwStack_2fc = operator_new(0x3fc);
      if (pwStack_2fc == (wchar_t *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = FUN_00833290((undefined4 *)pwStack_2fc);
      }
      uVar9 = FUN_00ace02d(L"<table><tr><td align=center width=300><e2>");
      FUN_004036d0(&stack0xfffffd14,L"<table><tr><td align=center width=300><e2>",uVar9);
      puVar2 = FUN_00861de0(&pvStack_28c,3);
      FUN_0040cae0(&stack0xfffffd14,(wchar_t *)*puVar2,puVar2[1]);
      if (&lpType_0000000a < pwStack_284) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_28c);
      }
      pwStack_2fc = *(wchar_t **)(param_1 + 0x418);
      sVar6 = FUN_00ace02d((short *)&DAT_00d52624);
      FUN_0040cae0(&stack0xfffffd14,L" x ",sVar6);
      sVar6 = _swprintf((wchar_t *)&piStack_26c,0xd18f7c,pwStack_2fc);
      FUN_0040cae0(&stack0xfffffd14,(wchar_t *)&piStack_26c,sVar6);
      sVar6 = FUN_00ace02d(L"</e2></td></tr></table>");
      FUN_0040cae0(&stack0xfffffd14,L"</e2></td></tr></table>",sVar6);
      (**(code **)(*piVar10 + 0x54))(&stack0xfffffd14);
      pwStack_2fc = (wchar_t *)0xff000000;
      FUN_00830550(piVar10,8,(char *)&pwStack_2fc);
      pvVar5 = (void *)0x0;
      piVar10[0xd5] = 0x43480000;
      *(undefined1 *)(piVar10 + 0xd6) = 1;
      (**(code **)(*piVar10 + 0x84))();
      (**(code **)(*piVar10 + 100))(1,piVar1,uStack_1e0);
      (**(code **)(*piVar10 + 0x5c))(1,piVar1,0);
      (**(code **)(*piVar1 + 0xc))(piVar10,1);
      (**(code **)(*piVar10 + 0x14))();
      if (&lpType_0000000a < piVar8) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar5);
      }
      (**(code **)(*piVar3 + 0x14))();
    }
    if (0 < *(int *)(param_1 + 0x41c)) {
      pwStack_2fc = operator_new(0x3fc);
      if (pwStack_2fc == (wchar_t *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = FUN_00833290((undefined4 *)pwStack_2fc);
      }
      uVar9 = FUN_00ace02d(L"<table><tr><td align=center width=300><e2>");
      FUN_004036d0(&stack0xfffffd14,L"<table><tr><td align=center width=300><e2>",uVar9);
      puVar2 = FUN_00861de0(&pvStack_28c,4);
      FUN_0040cae0(&stack0xfffffd14,(wchar_t *)*puVar2,puVar2[1]);
      if (&lpType_0000000a < pwStack_284) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_28c);
      }
      pwStack_2fc = *(wchar_t **)(param_1 + 0x41c);
      sVar6 = FUN_00ace02d((short *)&DAT_00d52624);
      FUN_0040cae0(&stack0xfffffd14,L" x ",sVar6);
      sVar6 = _swprintf((wchar_t *)&piStack_26c,0xd18f7c,pwStack_2fc);
      FUN_0040cae0(&stack0xfffffd14,(wchar_t *)&piStack_26c,sVar6);
      sVar6 = FUN_00ace02d(L"</e2></td></tr></table>");
      FUN_0040cae0(&stack0xfffffd14,L"</e2></td></tr></table>",sVar6);
      (**(code **)(*piVar10 + 0x54))(&stack0xfffffd14);
      pwStack_2fc = (wchar_t *)0xff000000;
      FUN_00830550(piVar10,8,(char *)&pwStack_2fc);
      pvVar5 = (void *)0x0;
      piVar10[0xd5] = 0x43480000;
      *(undefined1 *)(piVar10 + 0xd6) = 1;
      (**(code **)(*piVar10 + 0x84))();
      (**(code **)(*piVar10 + 100))(1,piVar1,uStack_1e0);
      (**(code **)(*piVar10 + 0x5c))(1,piVar1,0);
      (**(code **)(*piVar1 + 0xc))(piVar10,1);
      (**(code **)(*piVar10 + 0x14))();
      if (&lpType_0000000a < piVar8) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar5);
      }
      (**(code **)(*piVar3 + 0x14))();
    }
    if (0 < *(int *)(param_1 + 0x420)) {
      pwStack_2fc = operator_new(0x3fc);
      if (pwStack_2fc == (wchar_t *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = FUN_00833290((undefined4 *)pwStack_2fc);
      }
      uVar9 = FUN_00ace02d(L"<table><tr><td align=center width=300><e2>");
      FUN_004036d0(&stack0xfffffd14,L"<table><tr><td align=center width=300><e2>",uVar9);
      puVar2 = FUN_00861de0(&pvStack_28c,5);
      FUN_0040cae0(&stack0xfffffd14,(wchar_t *)*puVar2,puVar2[1]);
      if (&lpType_0000000a < pwStack_284) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_28c);
      }
      pwStack_2fc = *(wchar_t **)(param_1 + 0x420);
      sVar6 = FUN_00ace02d((short *)&DAT_00d52624);
      FUN_0040cae0(&stack0xfffffd14,L" x ",sVar6);
      sVar6 = _swprintf((wchar_t *)&piStack_26c,0xd18f7c,pwStack_2fc);
      FUN_0040cae0(&stack0xfffffd14,(wchar_t *)&piStack_26c,sVar6);
      sVar6 = FUN_00ace02d(L"</e2></td></tr></table>");
      FUN_0040cae0(&stack0xfffffd14,L"</e2></td></tr></table>",sVar6);
      (**(code **)(*piVar10 + 0x54))(&stack0xfffffd14);
      pwStack_2fc = (wchar_t *)0xff000000;
      FUN_00830550(piVar10,8,(char *)&pwStack_2fc);
      pvVar5 = (void *)0x0;
      piVar10[0xd5] = 0x43480000;
      *(undefined1 *)(piVar10 + 0xd6) = 1;
      (**(code **)(*piVar10 + 0x84))();
      (**(code **)(*piVar10 + 100))(1,piVar1,uStack_1e0);
      (**(code **)(*piVar10 + 0x5c))(1,piVar1,0);
      (**(code **)(*piVar1 + 0xc))(piVar10,1);
      (**(code **)(*piVar10 + 0x14))();
      if (&lpType_0000000a < piVar8) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar5);
      }
      (**(code **)(*piVar3 + 0x14))();
    }
    fVar11 = (float10)(**(code **)(*piVar3 + 0x14))();
    fVar17 = (float)(fVar11 + (float10)fVar17);
  }
  pwStack_284 = (wchar_t *)&stack0xfffffd88;
  uStack_280 = 0;
  piStack_27c = (int *)0xa;
  uVar9 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&pwStack_284,(wchar_t *)&lpCaption_00d16918,uVar9);
  if (0 < *(int *)(param_1 + 0x424)) {
    uVar9 = FUN_00ace02d((short *)&PTR_LAB_00d52900);
    FUN_004036d0(&pwStack_284,(wchar_t *)&PTR_LAB_00d52900,uVar9);
    ppwVar13 = &pwStack_2fc;
    pwStack_2fc = (wchar_t *)((uint)pwStack_2fc & 0xffff0000);
    sVar6 = 0;
    FUN_004036d0(&stack0xfffffcf8,pwStack_284,uStack_280);
    FUN_007a8df0(piVar1,fVar17,(wchar_t *)ppwVar13,sVar6);
    fVar11 = (float10)(**(code **)(*piVar3 + 0x14))();
    fVar17 = (float)(fVar11 + (float10)fVar17);
  }
  if (0 < *(int *)(param_1 + 0x428)) {
    uVar9 = FUN_00ace02d((short *)&PTR_LAB_00d528d4);
    FUN_004036d0(&pwStack_284,(wchar_t *)&PTR_LAB_00d528d4,uVar9);
    ppwVar13 = &pwStack_2fc;
    pwStack_2fc = (wchar_t *)((uint)pwStack_2fc & 0xffff0000);
    sVar6 = 0;
    FUN_004036d0(&stack0xfffffcf8,pwStack_284,uStack_280);
    FUN_007a8df0(piVar1,fVar17,(wchar_t *)ppwVar13,sVar6);
    fVar11 = (float10)(**(code **)(*piVar3 + 0x14))();
    fVar17 = (float)(fVar11 + (float10)fVar17);
  }
  if (0 < *(int *)(param_1 + 0x42c)) {
    uVar9 = FUN_00ace02d(L"ROOM_COSMETICSURGERY_NIP_TUCK");
    FUN_004036d0(&pwStack_284,L"ROOM_COSMETICSURGERY_NIP_TUCK",uVar9);
    ppwVar13 = &pwStack_2fc;
    pwStack_2fc = (wchar_t *)((uint)pwStack_2fc & 0xffff0000);
    sVar6 = 0;
    FUN_004036d0(&stack0xfffffcf8,pwStack_284,uStack_280);
    FUN_007a8df0(piVar1,fVar17,(wchar_t *)ppwVar13,sVar6);
    fVar11 = (float10)(**(code **)(*piVar3 + 0x14))();
    fVar17 = (float)(fVar11 + (float10)fVar17);
  }
  if (0 < *(int *)(param_1 + 0x430)) {
    uVar9 = FUN_00ace02d(L"ROOM_COSMETICSURGERY_IMPLANTS");
    FUN_004036d0(&pwStack_284,L"ROOM_COSMETICSURGERY_IMPLANTS",uVar9);
    ppwVar13 = &pwStack_2fc;
    pwStack_2fc = (wchar_t *)((uint)pwStack_2fc & 0xffff0000);
    sVar6 = 0;
    FUN_004036d0(&stack0xfffffcf8,pwStack_284,uStack_280);
    FUN_007a8df0(piVar1,fVar17,(wchar_t *)ppwVar13,sVar6);
    (**(code **)(*piVar3 + 0x14))();
  }
  if (piStack_27c < (int *)0xb) {
    if (uVar4 < 0xb) {
      ExceptionList = (void *)0x1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(piStack_2a4);
  }
                    /* WARNING: Subroutine does not return */
  _free(pwStack_284);
}


//// FUNCTION FUN_007aab30 @ 007aab30 ////

void __fastcall FUN_007aab30(int param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  size_t sVar8;
  undefined4 *puVar9;
  int iVar10;
  char cVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 **ppuVar14;
  undefined4 *puStack_a0;
  char *pcStack_9c;
  char *pcStack_98;
  uint uStack_94;
  uint uStack_90;
  char acStack_8c [16];
  float fStack_7c;
  undefined1 auStack_78 [4];
  undefined2 *puStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined2 auStack_68 [8];
  uint *puStack_58;
  void *pvStack_54;
  undefined4 uStack_50;
  uint auStack_4c [5];
  float fStack_38;
  undefined1 auStack_34 [4];
  wchar_t *pwStack_30;
  void *pvStack_2c;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd605;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x374) != 0) &&
     ((*(int *)(*(int *)(param_1 + 0x374) + 0xa4) != 0 || (*(int *)(param_1 + 0x388) != 0)))) {
    puVar9 = *(undefined4 **)(param_1 + 0x378);
    ExceptionList = &local_c;
    if (puVar9 != (undefined4 *)0x0) {
      piVar3 = puVar9 + 0x12;
      ExceptionList = &local_c;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar9)(1);
      }
      *(undefined4 *)(param_1 + 0x378) = 0;
    }
    puStack_a0 = operator_new(0x344);
    uStack_4 = 0;
    if (puStack_a0 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_007432f0(puStack_a0);
    }
    uStack_4 = 0xffffffff;
    puStack_a0 = operator_new(0x3fc);
    uStack_4 = 1;
    if (puStack_a0 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_00833290(puStack_a0);
    }
    uStack_4 = 0xffffffff;
    pcStack_9c = (char *)0xff000000;
    FUN_00830550(piVar4,8,(char *)&pcStack_9c);
    piVar4[0xd5] = 0x43340000;
    *(undefined1 *)(piVar4 + 0xd6) = 1;
    puStack_74 = auStack_68;
    auStack_68[0] = 0;
    uStack_70 = 0;
    uStack_6c = 10;
    uVar5 = FUN_00ace02d(L"No contents yet");
    FUN_004036d0(&puStack_74,L"No contents yet",uVar5);
    pcStack_98 = acStack_8c;
    uStack_4 = 2;
    acStack_8c[0] = '\0';
    uStack_94 = 0;
    uStack_90 = 0x14;
    _strncpy(pcStack_98,"",0);
    uStack_94 = 0;
    *pcStack_98 = '\0';
    ppuVar14 = &puStack_a0;
    uStack_4 = CONCAT31(uStack_4._1_3_,3);
    pvVar6 = (void *)(**(code **)(**(int **)(param_1 + 0x374) + 8))(ppuVar14,&DAT_00e4fa4c);
    uVar7 = FUN_0043b680(pvVar6,(float *)ppuVar14);
    if ((char)uVar7 == '\0') {
      if (uStack_94 < 0x19) {
        if (0x14 < uStack_94) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_9c);
        }
        uStack_94 = 0x20;
        pcStack_9c = _malloc(0x20);
      }
      _strncpy(pcStack_9c,"TIMELINE_STAR_HASRETIRED",0x18);
      pcStack_98 = (void *)0x18;
      pcStack_9c[0x18] = '\0';
      uVar5 = FUN_00ace02d(L"<table><tr><td width=300><e1><phrasebook>");
      FUN_004036d0(auStack_78,L"<table><tr><td width=300><e1><phrasebook>",uVar5);
    }
    else {
      if (uStack_94 < 0x19) {
        if (0x14 < uStack_94) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_9c);
        }
        uStack_94 = 0x20;
        pcStack_9c = _malloc(0x20);
      }
      _strncpy(pcStack_9c,"TIMELINE_STAR_WILLRETIRE",0x18);
      pcStack_98 = (void *)0x18;
      pcStack_9c[0x18] = '\0';
      uVar5 = FUN_00ace02d(L"<table><tr><td width=200><e1><phrasebook>");
      FUN_004036d0(auStack_78,L"<table><tr><td width=200><e1><phrasebook>",uVar5);
    }
    puStack_58 = auStack_4c;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    pvStack_54 = (void *)0x0;
    uStack_50 = 0x14;
    _strncpy((char *)puStack_58,"",0);
    pvStack_54 = (void *)0x0;
    *(char *)puStack_58 = '\0';
    puStack_8._0_1_ = 4;
    FUN_009b5030(&pwStack_30,&pcStack_9c);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,5);
    bVar2 = FUN_00431270(&pwStack_30,(wchar_t *)&lpCaption_00d16918);
    pvVar6 = pvStack_2c;
    if (!bVar2) {
      pvVar6 = (void *)FUN_00ace02d(L"ERROR, tell Kieran");
      pwStack_30 = L"ERROR, tell Kieran";
    }
    FUN_0040cae0(auStack_78,pwStack_30,(size_t)pvVar6);
    sVar8 = FUN_00ace02d(L"<phrase key=name>");
    FUN_0040cae0(auStack_78,L"<phrase key=name>",sVar8);
    FUN_0040cae0(auStack_78,*(wchar_t **)(param_1 + 900),*(size_t *)(param_1 + 0x388));
    sVar8 = FUN_00ace02d(L"</phrase><phrase key=date>");
    FUN_0040cae0(auStack_78,L"</phrase><phrase key=date>",sVar8);
    piVar1 = *(int **)(param_1 + 0x374);
    uVar7 = FUN_0043b520(auStack_34,0.0);
    pfVar13 = &fStack_38;
    pfVar12 = &fStack_7c;
    pvVar6 = (void *)(**(code **)(*piVar1 + 8))(pfVar12,pfVar13,uVar7);
    FUN_0043b600(pvVar6,pfVar12,pfVar13);
    puVar9 = FUN_0043c090();
    FUN_0040cae0(&fStack_7c,(wchar_t *)*puVar9,puVar9[1]);
    sVar8 = FUN_00ace02d(L"</phrase></phrasebook></e1></td></tr></table>");
    FUN_0040cae0(&fStack_7c,L"</phrase></phrasebook></e1></td></tr></table>",sVar8);
    (**(code **)(*piVar4 + 0x54))(&fStack_7c);
    (**(code **)(*piVar4 + 0x84))(0);
    (**(code **)(*piVar4 + 100))(1,piVar3,0);
    cVar11 = '\0';
    (**(code **)(*piVar4 + 0x5c))(1,piVar3);
    (**(code **)(*piVar3 + 0xc))(piVar4,1);
    if (cVar11 == '\0') {
      *(undefined4 *)(param_1 + 0x37c) = 2;
    }
    else {
      (**(code **)(*piVar4 + 0x14))();
      FUN_007a97a0(param_1);
      *(undefined4 *)(param_1 + 0x37c) = 100;
    }
    pvVar6 = operator_new(0x4e0);
    auStack_34[0] = 6;
    if (pvVar6 == (void *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_008dbd50(pvVar6,(int)piVar3);
    }
    *(undefined4 **)(param_1 + 0x378) = puVar9;
    puVar9[0x45] = 0xfff0f0f0;
    *(undefined4 *)(*(int *)(param_1 + 0x378) + 0x118) = 0xff000000;
    auStack_34[0] = 5;
    FUN_008d56d0(*(void **)(param_1 + 0x378),2);
    pvVar6 = operator_new(0x84);
    auStack_34[0] = 7;
    if (pvVar6 == (void *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_007a1f90(pvVar6,param_1,*(int *)(param_1 + 0x374),0);
    }
    auStack_34[0] = 5;
    FUN_008dcf70(*(void **)(param_1 + 0x378),puVar9);
    puVar9 = *(undefined4 **)(param_1 + 0x378);
    iVar10 = FUN_0071b2a0();
    pvVar6 = (void *)FUN_0071b910(iVar10);
    FUN_00640700(pvVar6,puVar9);
    (**(code **)(*piVar3 + 0x78))(0x43960000);
    piVar4 = piVar3 + 0x12;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*piVar3)(1);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x378) + 0x4ac) = 1;
    FUN_008dbf60(*(void **)(param_1 + 0x378),(int)piVar3);
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_2c);
    }
    if (0x14 < auStack_4c[0]) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_54);
    }
    if (0x14 < uStack_90) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_98);
    }
    if (10 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_74);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007ab0e0 @ 007ab0e0 ////

void __fastcall FUN_007ab0e0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  size_t sVar6;
  void *pvVar7;
  int iVar8;
  wchar_t *pwVar9;
  char acStack_90 [4];
  undefined2 *puStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined2 auStack_80 [10];
  char *pcStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  char acStack_60 [20];
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  wchar_t *pwStack_2c;
  size_t sStack_28;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd66b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x374) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x378);
    ExceptionList = &local_c;
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = puVar2 + 0x12;
      ExceptionList = &local_c;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(param_1 + 0x378) = 0;
    }
    puVar2 = operator_new(0x344);
    uStack_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_007432f0(puVar2);
    }
    uStack_4 = 0xffffffff;
    puVar2 = operator_new(0x3fc);
    uStack_4 = 1;
    if (puVar2 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_00833290(puVar2);
    }
    uStack_4 = 0xffffffff;
    acStack_90[3] = 0xff;
    acStack_90[2] = 0;
    acStack_90[1] = 0;
    acStack_90[0] = '\0';
    FUN_00830550(piVar4,8,acStack_90);
    piVar4[0xd5] = 0x43340000;
    *(undefined1 *)(piVar4 + 0xd6) = 1;
    puStack_8c = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0;
    uStack_84 = 10;
    uVar5 = FUN_00ace02d(L"No contents yet");
    FUN_004036d0(&puStack_8c,L"No contents yet",uVar5);
    pcStack_6c = acStack_60;
    uStack_4 = 2;
    acStack_60[0] = '\0';
    uStack_68 = 0;
    uStack_64 = 0x20;
    pcStack_6c = _malloc(0x20);
    _strncpy(pcStack_6c,"TIMELINE_STAR_RETIRINGNOW",0x19);
    uStack_68 = 0x19;
    pcStack_6c[0x19] = '\0';
    uVar5 = FUN_00ace02d(L"<table><tr><td align=center width=300><e1><phrasebook>");
    FUN_004036d0(&puStack_8c,L"<table><tr><td align=center width=300><e1><phrasebook>",uVar5);
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"",0);
    uStack_48 = 0;
    *pcStack_4c = '\0';
    uStack_4._0_1_ = 4;
    FUN_009b5030(&pwStack_2c,&pcStack_6c);
    uStack_4 = CONCAT31(uStack_4._1_3_,5);
    bVar1 = FUN_00431270(&pwStack_2c,(wchar_t *)&lpCaption_00d16918);
    pwVar9 = pwStack_2c;
    if (!bVar1) {
      sStack_28 = FUN_00ace02d(L"ERROR, tell Kieran");
      pwVar9 = L"ERROR, tell Kieran";
    }
    FUN_0040cae0(&puStack_8c,pwVar9,sStack_28);
    sVar6 = FUN_00ace02d(L"<phrase key=name>");
    FUN_0040cae0(&puStack_8c,L"<phrase key=name>",sVar6);
    FUN_0040cae0(&puStack_8c,*(wchar_t **)(param_1 + 900),*(size_t *)(param_1 + 0x388));
    sVar6 = FUN_00ace02d(L"</phrase>");
    FUN_0040cae0(&puStack_8c,L"</phrase>",sVar6);
    sVar6 = FUN_00ace02d(L"</phrasebook></e1></td></tr></table>");
    FUN_0040cae0(&puStack_8c,L"</phrasebook></e1></td></tr></table>",sVar6);
    (**(code **)(*piVar4 + 0x54))(&puStack_8c);
    (**(code **)(*piVar4 + 0x84))(0);
    (**(code **)(*piVar4 + 100))(1,piVar3,0);
    (**(code **)(*piVar4 + 0x5c))(1,piVar3,0);
    (**(code **)(*piVar3 + 0xc))(piVar4,1);
    (**(code **)(*piVar4 + 0x14))();
    FUN_007a97a0(param_1);
    *(undefined4 *)(param_1 + 0x37c) = 100;
    *(undefined1 *)(*(int *)(param_1 + 0x374) + 0xac) = 1;
    pvVar7 = operator_new(0x4e0);
    pwStack_2c._0_1_ = 6;
    if (pvVar7 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_008dbd50(pvVar7,(int)piVar3);
    }
    *(undefined4 **)(param_1 + 0x378) = puVar2;
    pwStack_2c = (wchar_t *)CONCAT31(pwStack_2c._1_3_,5);
    (**(code **)(*piVar3 + 0x78))(0x43960000);
    *(undefined4 *)(*(int *)(param_1 + 0x378) + 0x114) = 0xfff0f0f0;
    *(undefined4 *)(*(int *)(param_1 + 0x378) + 0x118) = 0xff000000;
    FUN_008d56d0(*(void **)(param_1 + 0x378),2);
    pvVar7 = operator_new(0x84);
    uStack_4._0_1_ = 7;
    if (pvVar7 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_007a1f90(pvVar7,param_1,*(int *)(param_1 + 0x374),0);
    }
    uStack_4 = CONCAT31(uStack_4._1_3_,5);
    FUN_008dcf70(*(void **)(param_1 + 0x378),puVar2);
    *(undefined1 *)(*(int *)(param_1 + 0x378) + 0x4ac) = 1;
    puVar2 = *(undefined4 **)(param_1 + 0x378);
    iVar8 = FUN_0071b2a0();
    pvVar7 = (void *)FUN_0071b910(iVar8);
    FUN_00640700(pvVar7,puVar2);
    piVar4 = piVar3 + 0x12;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*piVar3)(1);
    }
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_2c);
    }
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_6c);
    }
    if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_8c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007ab540 @ 007ab540 ////

void __fastcall FUN_007ab540(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  float10 fVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined1 *puVar9;
  uint auStack_28 [10];
  
  WWindow_Tick(param_1);
  if (param_1[0xdd] != 0) {
    if (*(char *)((int)param_1 + 0x381) == '\0') {
      if ((char)param_1[0xe0] != '\0') {
        (**(code **)(*param_1 + 0x74))(0x41800000,0x41800000);
        *(undefined1 *)(param_1 + 0xe0) = 0;
      }
    }
    else {
      pvVar3 = (void *)FUN_00ace790((int *)param_1[0x46],0,&TM::WWindow::RTTI_Type_Descriptor,
                                    &TM::WTimeline::RTTI_Type_Descriptor,0);
      fVar5 = (float10)(**(code **)(*(int *)param_1[0xdd] + 0x10))();
      uVar4 = FUN_00795fa0(pvVar3,(float)fVar5);
      if (((char)param_1[0xe0] == '\0') && ((char)uVar4 != '\0')) {
        *(undefined1 *)(param_1 + 0xe0) = 1;
        (**(code **)(*param_1 + 0x74))(0x42000000,0x42000000);
        FUN_0041c9c0(auStack_28,"HUD_TIMELINE_RETIRE_EVENT_HIGHLIGHTED");
        auStack_28[0] = auStack_28[0] & 0xfffffffe;
        puVar9 = &DAT_00d17518;
        iVar8 = 0;
        puVar7 = auStack_28;
        iVar6 = 2;
        pvVar3 = (void *)FUN_004f3b20();
        FUN_004f3270(pvVar3,iVar6,(byte *)puVar7,iVar8,puVar9);
      }
      if ((param_1[0xde] == 0) && ((char)uVar4 != '\0')) {
        FUN_007aab30((int)param_1);
      }
    }
  }
  if ((param_1[0xdf] != 0) && (*(char *)((int)param_1 + 0x381) == '\0')) {
    *(undefined1 *)((int)param_1 + 0x381) = 0;
    param_1[0xdf] = param_1[0xdf] + -1;
    return;
  }
  if (((int *)param_1[0xde] != (int *)0x0) && (*(char *)((int)param_1 + 0x381) == '\0')) {
    (**(code **)(*(int *)param_1[0xde] + 0xc))(0x3f000000);
    puVar2 = (undefined4 *)param_1[0xde];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      param_1[0xde] = 0;
    }
    param_1[0xdf] = 0;
  }
  *(undefined1 *)((int)param_1 + 0x381) = 0;
  return;
}


//// FUNCTION FUN_007ab7a0 @ 007ab7a0 ////

int * __thiscall FUN_007ab7a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007ab7e0 @ 007ab7e0 ////

void __thiscall FUN_007ab7e0(void *this,char param_1)

{
  bool bVar1;
  
  if ((param_1 != *(char *)((int)this + 0x47d)) && (*(void **)((int)this + 0x358) != (void *)0x0)) {
    *(char *)((int)this + 0x47d) = param_1;
    bVar1 = FUN_00881aa0(*(void **)((int)this + 0x358),"bonus");
    if (bVar1) {
      if (*(char *)((int)this + 0x47d) != '\0') {
        FUN_00881ac0(*(void **)((int)this + 0x358),"bonus","play");
        return;
      }
      FUN_00881ac0(*(void **)((int)this + 0x358),"bonus","none");
    }
  }
  return;
}


//// FUNCTION FUN_007ab850 @ 007ab850 ////

void __fastcall FUN_007ab850(int param_1,undefined4 param_2,int param_3,char param_4)

{
  void *this;
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  if (((((*(int *)(param_1 + 0x3f8) == 5) || (param_3 != 5)) || (param_4 != '\0')) ||
      (*(int *)(param_1 + 0x408) + 5000U <= (uint)uVar1)) &&
     ((*(int *)(param_1 + 0x408) == 0 || (param_3 != *(int *)(param_1 + 0x3f8))))) {
    this = *(void **)(param_1 + 0x358);
    *(int *)(param_1 + 0x3f8) = param_3;
    *(uint *)(param_1 + 0x408) = (uint)uVar1;
    if (this != (void *)0x0) {
      if (param_3 != 5) {
        FUN_00881ac0(this,*(char **)(param_1 + 0x3b8),(&PTR_DAT_00e5a1f0)[param_3 * 8]);
        return;
      }
      FUN_00881c00(this,*(char **)(param_1 + 0x3b8),0x51);
    }
  }
  return;
}


//// FUNCTION FUN_007ab8e0 @ 007ab8e0 ////

void __thiscall FUN_007ab8e0(void *this,undefined4 param_1)

{
  void *this_00;
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  this_00 = *(void **)((int)this + 0x358);
  *(undefined4 *)((int)this + 0x470) = *(undefined4 *)((int)this + 0x46c);
  *(undefined4 *)((int)this + 0x410) = param_1;
  if (((this_00 != (void *)0x0) && (*(int *)((int)this + 0x39c) != 0)) &&
     (uVar1 = *(uint *)((int)this + 0x394), uVar1 != 0)) {
    uVar3 = FUN_00acd42c();
    uVar2 = (uint)uVar3;
    if (uVar2 == uVar1) {
      uVar2 = uVar2 - 1;
    }
    *(float *)((int)this + 0x46c) = (float)(int)uVar2;
    FUN_00881c00(this_00,*(char **)((int)this + 0x398),uVar2);
  }
  return;
}


//// FUNCTION FUN_007ab960 @ 007ab960 ////

void __thiscall FUN_007ab960(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x410);
  return;
}


//// FUNCTION FUN_007ab970 @ 007ab970 ////

void __thiscall FUN_007ab970(void *this,char param_1)

{
  void *this_00;
  
  this_00 = *(void **)((int)this + 0x358);
  if (this_00 != (void *)0x0) {
    if (param_1 == '\0') {
      if (*(char *)((int)this + 0x40d) != '\0') {
        *(undefined1 *)((int)this + 0x40d) = 0;
        FUN_00881b80(this_00,"main_bar","green");
        FUN_00881b80(*(void **)((int)this + 0x358),"bar_bg_colour","red");
      }
    }
    else if (*(char *)((int)this + 0x40d) == '\0') {
      *(undefined1 *)((int)this + 0x40d) = 1;
      FUN_00881b80(this_00,"main_bar","red");
      FUN_00881b80(*(void **)((int)this + 0x358),"bar_bg_colour","green");
      return;
    }
  }
  return;
}


//// FUNCTION FUN_007aba00 @ 007aba00 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007aba00(void *this,int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  float local_1c;
  float local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)((int)this + 0x358) == 0) {
    return;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  param_1 = (int *)0x0;
  local_1c = 0.0;
  switch(*(undefined4 *)((int)this + 0x404)) {
  case 1:
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x27c))(), iVar3 != 0)) {
      puVar6 = &uStack_8;
      pvVar4 = (void *)(**(code **)(*piVar2 + 0x27c))();
      pfVar5 = (float *)CProjectCastEffect_GetEffectiveUpperMoodThreshold(pvVar4,puVar6);
      param_1 = (int *)(*pfVar5 * 100.0);
      puVar6 = &uStack_4;
      pvVar4 = (void *)(**(code **)(*piVar2 + 0x27c))();
      pfVar5 = (float *)CProjectCastEffect_GetEffectiveLowerMoodThreshold(pvVar4,puVar6);
      local_1c = *pfVar5 * 100.0;
LAB_007abb9f:
      if ((float)param_1 != 0.0) {
        if (99.0 < (float)param_1) {
LAB_007abbe5:
          param_1 = (int *)0x42c60000;
        }
        else if ((float)param_1 <= 1.0) {
          param_1 = (int *)0x3f800000;
        }
        else if (99.0 < (float)param_1) goto LAB_007abbe5;
        bVar1 = FUN_00881aa0(*(void **)((int)this + 0x358),"threshold01");
        if (bVar1) {
          uVar7 = FUN_00acd42c();
          FUN_00881c00(*(void **)((int)this + 0x358),"threshold01",(uint)uVar7);
        }
      }
      if (local_1c != 0.0) {
        if (99.0 < local_1c) {
LAB_007abc6b:
          local_1c = 99.0;
        }
        else if (local_1c <= 1.0) {
          local_1c = 1.0;
        }
        else if (99.0 < local_1c) goto LAB_007abc6b;
        bVar1 = FUN_00881aa0(*(void **)((int)this + 0x358),"threshold02");
        if (bVar1) {
          uVar7 = FUN_00acd42c();
          FUN_00881c00(*(void **)((int)this + 0x358),"threshold02",(uint)uVar7);
        }
      }
    }
    break;
  case 2:
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x294))(), iVar3 != 0)) {
      iVar3 = 0;
      puVar6 = &uStack_10;
LAB_007abb2a:
      pvVar4 = (void *)(**(code **)(*piVar2 + 0x294))();
      pfVar5 = (float *)FUN_00407290(pvVar4,puVar6,iVar3);
LAB_007aba98:
      param_1 = (int *)(100.0 - *pfVar5 * 100.0);
      goto LAB_007abb9f;
    }
    break;
  case 3:
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x294))(), iVar3 != 0)) {
      iVar3 = 1;
      puVar6 = &uStack_c;
      goto LAB_007abb2a;
    }
    break;
  case 4:
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x27c))(), iVar3 != 0)) {
      pfVar5 = &local_18;
      iVar3 = (**(code **)(*piVar2 + 0x27c))();
      pvVar4 = (void *)FUN_00473120(iVar3);
      pfVar5 = (float *)FUN_004732e0(pvVar4,pfVar5);
      goto LAB_007aba98;
    }
    break;
  case 5:
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x27c))(), iVar3 != 0)) {
      puVar6 = &uStack_14;
      iVar3 = (**(code **)(*piVar2 + 0x27c))();
      pvVar4 = (void *)FUN_00473120(iVar3);
      pfVar5 = (float *)FUN_00473370(pvVar4,puVar6);
      goto LAB_007aba98;
    }
  }
  *(int **)((int)this + 0x474) = param_1;
  *(float *)((int)this + 0x478) = local_1c;
  if (*(char *)((int)this + 0x40c) == '\0') {
    return;
  }
  local_18 = *(float *)((int)this + 0x410) * 100.0;
  bVar1 = FUN_00881aa0(*(void **)((int)this + 0x358),"bar_bg_colour");
  if (!bVar1) {
    return;
  }
  if (*(int *)((int)this + 0x404) == 1) {
    if (local_1c <= local_18) {
      if ((local_1c < local_18) && (local_18 < (local_1c + (float)param_1) * 0.5)) {
        pcVar8 = "2";
        goto LAB_007abdea;
      }
LAB_007abde5:
      pcVar8 = "1";
      goto LAB_007abdea;
    }
  }
  else if (*(int *)((int)this + 0x404) == 0) {
    if (_DAT_00e5a108 <= local_18) {
      if (local_18 < _DAT_00e5a104) {
        FUN_00881b80(*(void **)((int)this + 0x358),"bar_bg_colour","2");
        return;
      }
      FUN_00881b80(*(void **)((int)this + 0x358),"bar_bg_colour","1");
      return;
    }
  }
  else if ((float)param_1 <= local_18) {
    if (((float)param_1 < local_18) && (local_18 < ((float)param_1 + 100.0) * 0.5)) {
      pcVar8 = "2";
      goto LAB_007abdea;
    }
    goto LAB_007abde5;
  }
  pcVar8 = "3";
LAB_007abdea:
  FUN_00881b80(*(void **)((int)this + 0x358),"bar_bg_colour",pcVar8);
  return;
}


//// FUNCTION FUN_007abe20 @ 007abe20 ////

void __fastcall FUN_007abe20(float param_1)

{
  bool bVar1;
  int iVar2;
  void *this;
  float *pfVar3;
  ulonglong uVar4;
  float local_4;
  
  pfVar3 = &local_4;
  if ((*(int **)((int)param_1 + 0x4b4) != (int *)0x0) && (*(int *)((int)param_1 + 0x358) != 0)) {
    local_4 = param_1;
    iVar2 = (**(code **)(**(int **)((int)param_1 + 0x4b4) + 0x27c))();
    this = (void *)FUN_00472a30(iVar2);
    pfVar3 = (float *)FUN_0045b9a0(this,pfVar3);
    local_4 = *pfVar3 * 200.0;
    bVar1 = FUN_00881aa0(*(void **)((int)param_1 + 0x358),"bar_extra");
    if (bVar1) {
      uVar4 = FUN_00acd42c();
      FUN_00881c00(*(void **)((int)param_1 + 0x358),"bar_extra",(uint)uVar4);
    }
  }
  return;
}


//// FUNCTION FUN_007abe90 @ 007abe90 ////

void __thiscall FUN_007abe90(void *this,float param_1,char param_2)

{
  if ((*(int *)((int)this + 0x3fc) == 4) || (*(int *)((int)this + 0x3fc) == 5)) {
    param_1 = 1.0 - param_1;
    if (0.0 <= param_1) {
      if (1.0 < param_1) {
        param_1 = 1.0;
      }
    }
    else {
      param_1 = 0.0;
    }
  }
  FUN_00567380((void *)((int)this + 0x480),param_1);
  FUN_007ab8e0(this,param_1);
  if (param_2 != '\0') {
    (**(code **)(*(int *)this + 0x110))();
  }
  return;
}


//// FUNCTION FUN_007abfb0 @ 007abfb0 ////

void __fastcall FUN_007abfb0(int param_1)

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


//// FUNCTION FUN_007ac220 @ 007ac220 ////

void __fastcall FUN_007ac220(int param_1)

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


//// FUNCTION FUN_007ac240 @ 007ac240 ////

void __fastcall FUN_007ac240(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d531e0;
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


//// FUNCTION FUN_007ac290 @ 007ac290 ////

void __fastcall FUN_007ac290(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdd6b2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d5320c;
  param_1[0x14] = &PTR_FUN_00d531f0;
  local_4 = 3;
  if ((void *)param_1[0x114] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x114]);
  }
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  FUN_00526bb0(param_1 + 0x105);
  if (0x14 < (uint)param_1[0xf8]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf6]);
  }
  if (0x14 < (uint)param_1[0xf0]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xee]);
  }
  if (0x14 < (uint)param_1[0xe8]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe6]);
  }
  local_4 = 0xffffffff;
  FUN_0089eb00(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007ac380 @ 007ac380 ////

void __fastcall FUN_007ac380(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdd6c8;
  local_c = ExceptionList;
  local_4 = 0;
  if ((void *)param_1[0x12f] != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x12f]);
  }
  ExceptionList = &local_c;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  FUN_00526bb0(param_1 + 0x120);
  local_4 = 0xffffffff;
  FUN_007ac290(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007ac3f0 @ 007ac3f0 ////

undefined4 * __thiscall FUN_007ac3f0(void *this,int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *this_00;
  bool bVar1;
  undefined4 uVar2;
  float local_24;
  float local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd720;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0089ea20(this);
  *(undefined ***)this = &PTR_FUN_00d5320c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d531f0;
  *(undefined4 *)((int)this + 0x394) = 99;
  *(undefined4 *)((int)this + 0x398) = (undefined1 *)((int)this + 0x3a4);
  *(undefined1 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0x14;
  *(undefined1 **)((int)this + 0x3b8) = (undefined1 *)((int)this + 0x3c4);
  *(undefined1 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0x14;
  this_00 = (undefined4 *)((int)this + 0x3d8);
  *this_00 = (undefined1 *)((int)this + 0x3e4);
  *(undefined1 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0x14;
  *(undefined4 *)((int)this + 0x3f8) = 5;
  *(undefined4 *)((int)this + 0x404) = param_2;
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined1 *)((int)this + 0x40c) = 1;
  *(undefined1 *)((int)this + 0x40d) = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  FUN_00567760((undefined4 *)((int)this + 0x414));
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined1 *)((int)this + 0x47c) = 0;
  *(undefined1 *)((int)this + 0x47d) = 0;
  *(undefined1 *)((int)this + 0x363) = param_3;
  _param_3 = param_1;
  if (7 < param_1) {
    _param_3 = param_1 + -7;
  }
  if (param_1 == 6) {
    param_1 = 2;
    _param_3 = 2;
    *(undefined1 *)((int)this + 0x40c) = 0;
  }
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 2;
  FUN_004015d0(this_00,(&PTR_DAT_00e5a110)[_param_3 * 8],*(uint *)(&DAT_00e5a114 + _param_3 * 0x20))
  ;
  *(int *)((int)this + 0x3fc) = _param_3;
  *(undefined4 *)((int)this + 0x400) = 0;
  FUN_004015d0((undefined4 *)((int)this + 0x398),"bar_main",8);
  FUN_004015d0((void *)((int)this + 0x3b8),"bar_bg",6);
  *(undefined4 *)((int)this + 0x410) = 0;
  FUN_0089e070(this,this_00,0,1,'\x01');
  uVar2 = FUN_00882710(*(void **)((int)this + 0x358),local_14);
  if ((char)uVar2 != '\0') {
    local_24 = DAT_00e5a270;
    if (_param_3 == 3) {
      local_24 = 1.0;
    }
    FUN_0073e4e0(this,local_24 * local_14[0]);
    FUN_0089e5f0(this,'\x01');
  }
  if (((7 < param_1) && (*(void **)((int)this + 0x358) != (void *)0x0)) &&
     (*(char *)((int)this + 0x40d) == '\0')) {
    *(undefined1 *)((int)this + 0x40d) = 1;
    FUN_00881b80(*(void **)((int)this + 0x358),"main_bar","red");
    FUN_00881b80(*(void **)((int)this + 0x358),"bar_bg_colour","green");
  }
  bVar1 = FUN_00881aa0(*(void **)((int)this + 0x358),"super_state");
  if (bVar1) {
    FUN_00881b80(*(void **)((int)this + 0x358),"super_state","none");
  }
  bVar1 = FUN_00881aa0(*(void **)((int)this + 0x358),"bar_bg_colour");
  if (bVar1) {
    FUN_00881b80(*(void **)((int)this + 0x358),"bar_bg_colour","1");
  }
  bVar1 = FUN_00881aa0(*(void **)((int)this + 0x358),"threshold01");
  if (bVar1) {
    FUN_00881c00(*(void **)((int)this + 0x358),"threshold01",0);
  }
  bVar1 = FUN_00881aa0(*(void **)((int)this + 0x358),"threshold02");
  if (bVar1) {
    FUN_00881c00(*(void **)((int)this + 0x358),"threshold02",0);
  }
  bVar1 = FUN_00881aa0(*(void **)((int)this + 0x358),"bonus");
  if (bVar1) {
    FUN_00881c00(*(void **)((int)this + 0x358),"bonus",0);
  }
  FUN_007ab8e0(this,0);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007ac720 @ 007ac720 ////

undefined4 * __thiscall FUN_007ac720(void *this,byte param_1)

{
  FUN_007ac290(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007ac740 @ 007ac740 ////

undefined4 * __thiscall FUN_007ac740(void *this,int param_1,undefined4 param_2)

{
  FUN_007ac3f0(this,param_1,param_2,0);
  *(undefined ***)this = &PTR_FUN_00d53344;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5332c;
  *(undefined1 *)((int)this + 0x48c) = 0;
  *(int *)((int)this + 0x480) = (int)this + 0x48c;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0x14;
  *(undefined4 *)((int)this + 0x4ac) = 0;
  *(undefined4 *)((int)this + 0x4a4) = 0;
  *(undefined4 *)((int)this + 0x4a8) = 0;
  *(undefined4 **)((int)this + 0x4ac) = (undefined4 *)((int)this + 0x4a0);
  *(undefined4 *)((int)this + 0x4a0) = &PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x4b4) = 0;
  FUN_004015d0((int *)((int)this + 0x480),"bar_extra",9);
  *(undefined4 *)((int)this + 0x400) = 1;
  return this;
}


//// FUNCTION FUN_007ac7c0 @ 007ac7c0 ////

undefined4 * __thiscall FUN_007ac7c0(void *this,byte param_1)

{
  FUN_007ac7e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007ac7e0 @ 007ac7e0 ////

void __fastcall FUN_007ac7e0(undefined4 *param_1)

{
  param_1[0x128] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x12a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12a] = param_1[0x129];
  }
  if (param_1[0x129] != 0) {
    *(undefined4 *)(param_1[0x129] + 4) = param_1[0x12a];
  }
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[0x12d] = 0;
  if ((undefined4 *)param_1[0x12a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12a] = param_1[0x129];
  }
  if (param_1[0x129] != 0) {
    *(undefined4 *)(param_1[0x129] + 4) = param_1[0x12a];
  }
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  if (0x14 < (uint)param_1[0x122]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x120]);
  }
  FUN_007ac290(param_1);
  return;
}


//// FUNCTION FUN_007ac880 @ 007ac880 ////

undefined4 * __thiscall
FUN_007ac880(void *this,int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd746;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007ac3f0(this,param_1,param_2,param_4);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d53474;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5345c;
  FUN_00567760((undefined4 *)((int)this + 0x480));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)((int)this + 0x4d8) = param_3;
  FUN_00567380((undefined4 *)((int)this + 0x480),0.0);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007ac910 @ 007ac910 ////

undefined4 * __thiscall FUN_007ac910(void *this,byte param_1)

{
  FUN_007ac380(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007ac930 @ 007ac930 ////

undefined4 * __thiscall
FUN_007ac930(void *this,int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd774;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007ac880(this,param_1,param_4,1,0);
  piVar2 = (int *)((int)this + 0x4dc);
  *(undefined ***)this = &PTR_FUN_00d535ac;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d53590;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4e4) = 0;
  *(int **)((int)this + 0x4e8) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d531e0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  piVar1 = (int *)((int)this + 0x4f4);
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  *(int **)((int)this + 0x500) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d172b0;
  *(undefined4 *)((int)this + 0x508) = 0;
  local_4 = 2;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0x4f0) = param_2;
  (**(code **)*piVar2)();
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x508) = param_3;
  (**(code **)*piVar1)();
  *(undefined4 *)((int)this + 0x50c) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  piVar2 = (int *)FUN_00ace790(*(int **)((int)this + 0x508),0,&TM::TMInWorld::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x4f0) + 0x30))();
    FUN_007abe90(this,param_4,'\x01');
    FUN_007aba00(this,piVar2);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007aca60 @ 007aca60 ////

undefined4 * __thiscall FUN_007aca60(void *this,byte param_1)

{
  FUN_007aca80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007aca80 @ 007aca80 ////

void __fastcall FUN_007aca80(undefined4 *param_1)

{
  param_1[0x13d] = &PTR_FUN_00d172b0;
  if ((undefined4 *)param_1[0x13f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13f] = param_1[0x13e];
  }
  if (param_1[0x13e] != 0) {
    *(undefined4 *)(param_1[0x13e] + 4) = param_1[0x13f];
  }
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x142] = 0;
  if ((undefined4 *)param_1[0x13f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13f] = param_1[0x13e];
  }
  if (param_1[0x13e] != 0) {
    *(undefined4 *)(param_1[0x13e] + 4) = param_1[0x13f];
  }
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x137] = &PTR_FUN_00d531e0;
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
  FUN_007ac380(param_1);
  return;
}


//// FUNCTION FUN_007acb90 @ 007acb90 ////

void __fastcall FUN_007acb90(int *param_1)

{
  if (*(char *)((int)param_1 + 0x37d) != '\0') {
    FUN_0073f500(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_007acc10 @ 007acc10 ////

void __fastcall FUN_007acc10(int *param_1)

{
  int *piVar1;
  float local_8 [2];
  
  if (param_1[0xdd] == 0) {
    local_8[0] = 0.0;
    local_8[1] = 0.0;
    piVar1 = FUN_008ff850(param_1,local_8);
    (**(code **)(param_1[0xd8] + 4))();
    param_1[0xdd] = (int)piVar1;
    (**(code **)param_1[0xd8])();
  }
  return;
}


//// FUNCTION FUN_007acc70 @ 007acc70 ////

void __fastcall FUN_007acc70(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x374);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x360) + 4))();
    *(undefined4 *)(param_1 + 0x374) = 0;
                    /* WARNING: Could not recover jumptable at 0x007acca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(param_1 + 0x360))();
    return;
  }
  return;
}


//// FUNCTION FUN_007accb0 @ 007accb0 ////

undefined4 __fastcall FUN_007accb0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x358) + 0x378);
}


//// FUNCTION FUN_007accc0 @ 007accc0 ////

void __thiscall FUN_007accc0(void *this,char param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x358);
  if (piVar1 != (int *)0x0) {
    if (param_1 != '\0') {
      (**(code **)(*piVar1 + 0xfc))();
      return;
    }
    (**(code **)(*piVar1 + 0x100))();
  }
  return;
}


//// FUNCTION FUN_007accf0 @ 007accf0 ////

void __fastcall FUN_007accf0(int *param_1)

{
  int *piVar1;
  int iVar2;
  float unaff_EBX;
  float10 fVar3;
  int *piVar4;
  float fVar5;
  undefined2 uVar6;
  
  (**(code **)(*param_1 + 0x84))();
  piVar4 = (int *)param_1[0xd6];
  if (piVar4 != (int *)0x0) {
    piVar1 = (int *)param_1[0xdc];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))();
      (**(code **)(*piVar1 + 0x10))();
      piVar4 = (int *)param_1[0xd6];
      (**(code **)(*piVar4 + 0x14))();
      (**(code **)(*piVar4 + 0x10))();
      uVar6 = 1;
      (**(code **)(*(int *)param_1[0xdc] + 0x5c))(1,param_1,0);
      iVar2 = *(int *)param_1[0xdc];
      fVar3 = FUN_00acf400((double)((0.0 - unaff_EBX) * 0.5),uVar6);
      fVar5 = (float)fVar3;
      piVar4 = param_1;
      (**(code **)(iVar2 + 100))(1,param_1,fVar5);
      (**(code **)(*(int *)param_1[0xd6] + 0x5c))(1,param_1,unaff_EBX);
      (**(code **)(*(int *)param_1[0xd6] + 100))(1,param_1,((float)piVar4 - fVar5) * 0.5);
      return;
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x5c))(1,param_1,0);
      (**(code **)(*(int *)param_1[0xd6] + 100))(1,param_1,0);
      return;
    }
  }
  if ((int *)param_1[0xdc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xdc] + 0x5c))(1,param_1,0);
    (**(code **)(*(int *)param_1[0xdc] + 100))(1,param_1,0);
  }
  return;
}


//// FUNCTION FUN_007ace90 @ 007ace90 ////

void __fastcall FUN_007ace90(int *param_1)

{
  FUN_007accf0(param_1);
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_007acea0 @ 007acea0 ////

void __thiscall FUN_007acea0(void *this,int param_1)

{
  (**(code **)(*(int *)((int)this + 0x35c) + 4))();
  *(int *)((int)this + 0x370) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x35c))();
  (**(code **)(*(int *)this + 0xc))(*(undefined4 *)((int)this + 0x370),1);
  FUN_007accf0(this);
  return;
}


//// FUNCTION FUN_007acf30 @ 007acf30 ////

void __fastcall FUN_007acf30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5372c;
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


//// FUNCTION FUN_007acf80 @ 007acf80 ////

undefined4 * __thiscall FUN_007acf80(void *this,undefined4 param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  
  FUN_007432f0(this);
  *(undefined4 *)((int)this + 0x344) = param_1;
  *(undefined ***)this = &PTR_FUN_00d53754;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d5373c;
  piVar1 = (int *)((int)this + 0x34c);
  *(undefined4 *)((int)this + 0x354) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 **)((int)this + 0x354) = (undefined4 *)((int)this + 0x348);
  *(undefined4 *)((int)this + 0x348) = &PTR_FUN_00d172b0;
  *(int *)((int)this + 0x35c) = param_2;
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x18);
    *(int **)((int)this + 0x350) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 **)((int)this + 0x36c) = (undefined4 *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x360) = &PTR_FUN_00d18c2c;
  *(undefined1 *)((int)this + 0x37c) = param_3;
  *(undefined4 *)((int)this + 0x378) = 2;
  *(undefined1 *)((int)this + 0x37d) = 1;
  return this;
}


//// FUNCTION FUN_007ad020 @ 007ad020 ////

void __fastcall FUN_007ad020(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d53754;
  param_1[0x14] = &PTR_LAB_00d5373c;
  param_1[0xd1] = 0;
  param_1[0xd8] = &PTR_FUN_00d18c2c;
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
  param_1[0xd2] = &PTR_FUN_00d172b0;
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


//// FUNCTION FUN_007ad120 @ 007ad120 ////

undefined4 * __thiscall FUN_007ad120(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd7f4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d53874;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5385c;
  piVar1 = (int *)((int)this + 0x348);
  *(undefined4 *)((int)this + 0x350) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_LAB_00d5372c;
  *(int *)((int)this + 0x358) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x34c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x370) = 0;
  local_4 = 2;
  FUN_0073f6e0(this,*(int **)((int)this + 0x358));
  pvVar3 = (void *)0x1;
  (**(code **)(**(int **)((int)this + 0x358) + 0x5c))(1,this,0);
  (**(code **)(**(int **)((int)this + 0x358) + 100))(1,this,0);
  ExceptionList = pvVar3;
  return this;
}


//// FUNCTION FUN_007ad1f0 @ 007ad1f0 ////

void __fastcall FUN_007ad1f0(int *param_1)

{
  void *this;
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
  puStack_8 = &LAB_00cdd824;
  local_c = ExceptionList;
  if (param_1[0xdc] == 0) {
    ExceptionList = &local_c;
    this = operator_new(0x360);
    local_4 = 0;
    if (this == (void *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"ui/bonus_award.dds",0x12);
      local_28 = 0x12;
      local_2c[0x12] = '\0';
      local_4 = CONCAT31(local_4._1_3_,1);
      piVar1 = FUN_0069d820(this,&local_2c,0,0,0x3f800000,0x3f800000);
    }
    local_4 = 0xffffffff;
    if ((this != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    iVar2 = (**(code **)(*piVar1 + 0x108))();
    *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
    (**(code **)(*piVar1 + 0x74))();
    (**(code **)(param_1[0xd7] + 4))();
    param_1[0xdc] = (int)piVar1;
    (**(code **)param_1[0xd7])();
    (**(code **)(*param_1 + 0xc))();
    FUN_007accf0(param_1);
    FUN_007accf0(param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007ad340 @ 007ad340 ////

undefined4 * __thiscall FUN_007ad340(void *this,byte param_1)

{
  FUN_007ad020(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007ad360 @ 007ad360 ////

undefined4 * __thiscall FUN_007ad360(void *this,byte param_1)

{
  FUN_007ad380(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007ad380 @ 007ad380 ////

void __fastcall FUN_007ad380(undefined4 *param_1)

{
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
  param_1[0xd1] = &PTR_LAB_00d5372c;
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


//// FUNCTION FUN_007ad4a0 @ 007ad4a0 ////

int * __cdecl FUN_007ad4a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  size_t sVar5;
  int *piVar6;
  uint uVar7;
  wchar_t *pwVar8;
  undefined **ppuStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined *puStack_7c;
  void *pvStack_40;
  uint uStack_38;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [8];
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd861;
  local_c = ExceptionList;
  if ((param_1 == 0) || (param_2 == 0)) {
    return (int *)0x0;
  }
  ExceptionList = &local_c;
  puVar1 = operator_new(0x344);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007432f0(puVar1);
  }
  local_4 = 0xffffffff;
  puVar1 = operator_new(0x360);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_0069ce90(puVar1);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/timeline_award.dds",0x15);
  local_28 = 0x15;
  local_2c[0x15] = '\0';
  local_4 = 2;
  (**(code **)(*piVar3 + 0x100))();
  uStack_18 = 0xffffffff;
  if (0x14 < uStack_38) {
                    /* WARNING: Subroutine does not return */
    puStack_7c = &UNK_007ad5ac;
    _free(pvStack_40);
  }
  puStack_7c = (undefined *)0x41800000;
  uStack_80 = 0x7ad5c0;
  (**(code **)(*piVar3 + 0x74))();
  uStack_80 = 0;
  ppuStack_88 = (undefined **)0x1;
  piStack_84 = piVar2;
  (**(code **)(*piVar3 + 100))();
  (**(code **)(*piVar3 + 0x5c))(1,piVar2,0);
  iVar4 = (**(code **)(*piVar3 + 0x108))();
  *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 1;
  (**(code **)(*piVar2 + 0xc))(piVar3,1);
  ppuStack_88 = &puStack_7c;
  puStack_7c = (undefined *)((uint)puStack_7c & 0xffff0000);
  piStack_84 = (int *)0x0;
  uStack_80 = 10;
  sVar5 = FUN_00ace02d(L"<nobr><x6><translate>");
  FUN_0040cae0(&ppuStack_88,L"<nobr><x6><translate>",sVar5);
  if (*(int *)(uStack_38 + 0x60) == 0xc) {
    sVar5 = FUN_00ace02d(L"SITT_PROJECT_STATS_MOVIEFIRSTAWARD");
    pwVar8 = L"SITT_PROJECT_STATS_MOVIEFIRSTAWARD";
  }
  else {
    if (*(int *)(uStack_38 + 0x60) != 0xd) goto LAB_007ad673;
    sVar5 = FUN_00ace02d(L"SITT_PROJECT_STATS_MOVIESCRIPTAWARD");
    pwVar8 = L"SITT_PROJECT_STATS_MOVIESCRIPTAWARD";
  }
  FUN_0040cae0(&ppuStack_88,pwVar8,sVar5);
LAB_007ad673:
  sVar5 = FUN_00ace02d(L"</translate></x6></nobr>");
  FUN_0040cae0(&ppuStack_88,L"</translate></x6></nobr>",sVar5);
  puVar1 = operator_new(0x3fc);
  if (puVar1 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = FUN_00833290(puVar1);
  }
  (**(code **)(*piVar6 + 0x54))(&ppuStack_88);
  uVar7 = 2;
  (**(code **)(*piVar6 + 0x5c))(2,piVar3,0xc1200000);
  piVar3 = piVar2;
  (**(code **)(*piVar6 + 100))(1,piVar2,0);
  (**(code **)(*piVar6 + 0x84))(0);
  (**(code **)(*piVar2 + 0xc))(piVar6,1);
  (**(code **)(*piVar2 + 0x84))(0);
  if (10 < uVar7) {
                    /* WARNING: Subroutine does not return */
    _free(piVar3);
  }
  ExceptionList = &local_2c;
  return piVar2;
}


//// FUNCTION FUN_007ad7a0 @ 007ad7a0 ////

void __fastcall FUN_007ad7a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdd886;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d53a84;
  param_1[0x14] = &PTR_LAB_00d53a68;
  local_4 = 1;
  while ((param_1[0xe1] != 0 && ((int)(param_1[0xe2] - param_1[0xe1]) / 0x18 != 0))) {
    puVar1 = *(undefined4 **)(param_1[0xe2] + -4);
    if ((param_1[0xe1] != 0) &&
       (puVar2 = (undefined4 *)param_1[0xe2], ((int)puVar2 - param_1[0xe1]) / 0x18 != 0)) {
      puVar4 = puVar2 + -6;
      if (puVar4 != puVar2) {
        piVar3 = puVar2 + -4;
        do {
          *puVar4 = &PTR_FUN_00d18c2c;
          if ((int *)*piVar3 != (int *)0x0) {
            *(int *)*piVar3 = piVar3[-1];
          }
          if (piVar3[-1] != 0) {
            *(int *)(piVar3[-1] + 4) = *piVar3;
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
          piVar3[3] = 0;
          if ((int *)*piVar3 != (int *)0x0) {
            *(int *)*piVar3 = piVar3[-1];
          }
          if (piVar3[-1] != 0) {
            *(int *)(piVar3[-1] + 4) = *piVar3;
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
          puVar4 = puVar4 + 6;
          piVar3 = piVar3 + 6;
        } while (puVar4 != puVar2);
      }
      param_1[0xe2] = param_1[0xe2] + -0x18;
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  FUN_006e80c0((int)(param_1 + 0xe0));
  local_4 = 0xffffffff;
  FUN_007ad020(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007ad900 @ 007ad900 ////

undefined4 * __thiscall FUN_007ad900(void *this,byte param_1)

{
  FUN_007ad7a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007ad920 @ 007ad920 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007ad920(int *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  int *piVar6;
  undefined4 unaff_EBP;
  float local_64;
  undefined **local_60;
  int local_5c;
  int *local_58;
  undefined4 local_4c;
  undefined1 local_38 [4];
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined4 local_20;
  undefined1 uStack_1c;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd8a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((int *)param_1[0xd7] != (int *)0x0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_00ace790((int *)param_1[0xd7],0,&TM::TMInWorld::RTTI_Type_Descriptor,
                         &TM::CProjectObject::RTTI_Type_Descriptor,0);
    fVar3 = (float)FUN_005d1940(iVar2);
    if (fVar3 != 0.0) {
      FUN_00857d80(&local_64);
      local_4 = 0;
      FUN_00857ae0(&local_64,fVar3);
      while( true ) {
        pvVar4 = FUN_00857bd0(local_38);
        local_4._0_1_ = 1;
        bVar1 = FUN_00856dd0(&local_64,(int)pvVar4);
        local_4 = (uint)local_4._1_3_ << 8;
        local_34 = &PTR_FUN_00d1aed0;
        if (local_2c != (int *)0x0) {
          *local_2c = local_30;
        }
        if (local_30 != 0) {
          *(int **)(local_30 + 4) = local_2c;
        }
        local_20 = 0;
        local_30 = 0;
        local_2c = (int *)0x0;
        if (!bVar1) break;
        iVar2 = FUN_00856d90((int)&local_64);
        if (((iVar2 != 0) &&
            (fVar5 = (float)FUN_00ace790(*(int **)(iVar2 + 0xa0),0,
                                         &TM::TMObject::RTTI_Type_Descriptor,
                                         &TM::CProject::RTTI_Type_Descriptor,0), fVar5 == fVar3)) &&
           (piVar6 = FUN_007ad4a0(iVar2,(int)fVar3), piVar6 != (int *)0x0)) {
          (**(code **)(*piVar6 + 0x14))();
          (**(code **)(*piVar6 + 0x5c))(1,param_1,0);
          (**(code **)(*piVar6 + 100))(1,param_1,unaff_EBP);
          FUN_00447fc0(&stack0xffffff6c,(int)piVar6);
          uStack_1c = 2;
          FUN_006ea220(param_1 + 0xe0,(int)&stack0xffffff6c);
          uStack_1c = 0;
          FUN_00436190((undefined4 *)&stack0xffffff6c);
          (**(code **)(*param_1 + 0xc))(piVar6,1);
        }
        FUN_00857260(&local_64);
      }
      local_60 = &PTR_FUN_00d1aed0;
      local_4 = 0xffffffff;
      if (local_58 != (int *)0x0) {
        *local_58 = local_5c;
      }
      if (local_5c != 0) {
        *(int **)(local_5c + 4) = local_58;
      }
      local_4c = 0;
      local_5c = 0;
      local_58 = (int *)0x0;
    }
  }
  (**(code **)(*param_1 + 0x50))();
  (**(code **)(*param_1 + 0x84))();
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_007adb30 @ 007adb30 ////

int * __thiscall FUN_007adb30(void *this,undefined4 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd8d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007acf80(this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_FUN_00d53a84;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d53a68;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  local_4 = 1;
  if (*(int **)((int)this + 0x35c) != (int *)0x0) {
    iVar1 = FUN_00ace790(*(int **)((int)this + 0x35c),0,&TM::TMInWorld::RTTI_Type_Descriptor,
                         &TM::CProjectObject::RTTI_Type_Descriptor,0);
    iVar1 = FUN_005d1940(iVar1);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_005b22a0(iVar1);
      iVar1 = (**(code **)(*piVar2 + 0x24))();
      if (6 < iVar1) {
        FUN_007ad920(this);
      }
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007adc30 @ 007adc30 ////

int * __thiscall FUN_007adc30(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007adc70 @ 007adc70 ////

int __fastcall FUN_007adc70(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007adcd0 @ 007adcd0 ////

int __fastcall FUN_007adcd0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007add30 @ 007add30 ////

int * __thiscall FUN_007add30(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007add70 @ 007add70 ////

int * __thiscall FUN_007add70(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007adff0 @ 007adff0 ////

int * __thiscall FUN_007adff0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007ae010 @ 007ae010 ////

int * __thiscall FUN_007ae010(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007ae050 @ 007ae050 ////

undefined4 * __cdecl FUN_007ae050(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007ae090 @ 007ae090 ////

undefined4 * __cdecl FUN_007ae090(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007ae160 @ 007ae160 ////

void __fastcall FUN_007ae160(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  if (param_1[0xd6] == 0) {
    cVar1 = (**(code **)(*param_1 + 0xfc))();
    if (cVar1 != '\0') {
      piVar2 = FUN_008ff850(param_1,(float *)&DAT_0104e844);
      (**(code **)(param_1[0xd1] + 4))();
      param_1[0xd6] = (int)piVar2;
                    /* WARNING: Could not recover jumptable at 0x007ae1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)param_1[0xd1])();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_007ae1b0 @ 007ae1b0 ////

void __fastcall FUN_007ae1b0(int param_1)

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
                    /* WARNING: Could not recover jumptable at 0x007ae1e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(param_1 + 0x344))();
    return;
  }
  return;
}


//// FUNCTION FUN_007ae4a0 @ 007ae4a0 ////

void __cdecl FUN_007ae4a0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_007ae500 @ 007ae500 ////

void __cdecl FUN_007ae500(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_007ae560 @ 007ae560 ////

void __cdecl FUN_007ae560(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  void *this;
  int in_EAX;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar2 = (void *)FUN_005b25d0(in_EAX);
  *param_2 = 0;
  *param_3 = 0;
  iVar4 = 1;
  for (iVar1 = *(int *)(in_EAX + 0xac); iVar1 != in_EAX + 0xb8; iVar1 = *(int *)(iVar1 + 4)) {
    this = *(void **)(iVar1 + 8);
    if (this == pvVar2) {
      *param_2 = iVar4;
    }
    if (((*param_3 == 0) && (*param_2 != 0)) && (iVar3 = FUN_004e0620(this,param_1), iVar3 != 0)) {
      *param_3 = iVar4;
    }
    iVar4 = iVar4 + 1;
  }
  return;
}


//// FUNCTION FUN_007ae5e0 @ 007ae5e0 ////

void __thiscall FUN_007ae5e0(void *this,void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  size_t sVar3;
  void *unaff_ESI;
  undefined1 local_20 [4];
  uint uStack_1c;
  
  uVar1 = FUN_00ace02d(L"<nobr><x6>");
  FUN_004036d0(param_1,L"<nobr><x6>",uVar1);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x370) + 0x5c))(local_20);
  FUN_0040cae0(param_1,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  sVar3 = FUN_00ace02d(L"<br>");
  FUN_0040cae0(param_1,L"<br>",sVar3);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x370) + 0x1d8))();
  FUN_0040cae0(param_1,(wchar_t *)*puVar2,puVar2[1]);
  sVar3 = FUN_00ace02d(L"</x6></nobr>");
  FUN_0040cae0(param_1,L"</x6></nobr>",sVar3);
  return;
}


//// FUNCTION FUN_007ae690 @ 007ae690 ////

void __thiscall FUN_007ae690(void *this,void *param_1)

{
  wchar_t *pwVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  size_t sVar5;
  void *pvVar6;
  wchar_t *pwVar7;
  wchar_t awStack_80 [64];
  
  iVar4 = *(int *)((int)this + 0x370);
  if (*(int *)(iVar4 + 0x134) == 0) {
    pwVar7 = (wchar_t *)0x0;
  }
  else {
    pwVar7 = (wchar_t *)((*(int *)(iVar4 + 0x138) - *(int *)(iVar4 + 0x134)) / 0x18);
  }
  pwVar1 = *(wchar_t **)(iVar4 + 0x300);
  uVar2 = FUN_00ace02d(L"<table><tr>");
  FUN_004036d0(param_1,L"<table><tr>",uVar2);
  piVar3 = (int *)FUN_005b22a0(*(int *)((int)this + 0x370));
  if (pwVar7 < pwVar1) {
    iVar4 = (**(code **)(*piVar3 + 0x24))();
    if (iVar4 < 6) {
      sVar5 = FUN_00ace02d(
                          L"<td><nobr><x6><font color=#ff0000><phrasebook><translate>SITT_PROJECT_CASTANDCREW_CREW_REQUIRED</translate>"
                          );
      FUN_0040cae0(param_1,
                   L"<td><nobr><x6><font color=#ff0000><phrasebook><translate>SITT_PROJECT_CASTANDCREW_CREW_REQUIRED</translate>"
                   ,sVar5);
      sVar5 = FUN_00ace02d(L"<phrase key=needed>");
      FUN_0040cae0(param_1,L"<phrase key=needed>",sVar5);
      pvVar6 = FUN_004430d0(param_1,pwVar7);
      sVar5 = FUN_00ace02d(L"</phrase>");
      FUN_0040cae0(pvVar6,L"</phrase>",sVar5);
      sVar5 = FUN_00ace02d(L"</phrasebook></font></x6></nobr></td>");
      FUN_0040cae0(param_1,L"</phrasebook></font></x6></nobr></td>",sVar5);
      sVar5 = FUN_00ace02d(L"<td align=right><nobr><x6><font color=#ff0000><phrasebook>");
      FUN_0040cae0(param_1,L"<td align=right><nobr><x6><font color=#ff0000><phrasebook>",sVar5);
      sVar5 = FUN_00ace02d(L"<translate>SITT_PROJECT_CASTANDCREW_CREWNEEDMORE</translate>");
      FUN_0040cae0(param_1,L"<translate>SITT_PROJECT_CASTANDCREW_CREWNEEDMORE</translate>",sVar5);
      sVar5 = FUN_00ace02d(L"<phrase key=needed>");
      FUN_0040cae0(param_1,L"<phrase key=needed>",sVar5);
      pvVar6 = FUN_004430d0(param_1,(int)pwVar1 - (int)pwVar7);
      sVar5 = FUN_00ace02d(L"</phrase>");
      FUN_0040cae0(pvVar6,L"</phrase>",sVar5);
      sVar5 = FUN_00ace02d(L"</phrasebook></font></x6></nobr></td>");
      pwVar7 = L"</phrasebook></font></x6></nobr></td>";
      goto LAB_007ae892;
    }
  }
  sVar5 = FUN_00ace02d(
                      L"<td><nobr><x6><phrasebook><translate>SITT_PROJECT_CASTANDCREW_CREW_REQUIRED</translate>"
                      );
  FUN_0040cae0(param_1,
               L"<td><nobr><x6><phrasebook><translate>SITT_PROJECT_CASTANDCREW_CREW_REQUIRED</translate>"
               ,sVar5);
  sVar5 = FUN_00ace02d(L"<phrase key=needed>");
  FUN_0040cae0(param_1,L"<phrase key=needed>",sVar5);
  sVar5 = _swprintf(awStack_80,0xd18f7c,pwVar7);
  FUN_0040cae0(param_1,awStack_80,sVar5);
  sVar5 = FUN_00ace02d(L"</phrase>");
  FUN_0040cae0(param_1,L"</phrase>",sVar5);
  sVar5 = FUN_00ace02d(L"</phrasebook></x6></nobr></td>");
  pwVar7 = L"</phrasebook></x6></nobr></td>";
LAB_007ae892:
  FUN_0040cae0(param_1,pwVar7,sVar5);
  sVar5 = FUN_00ace02d(L"</tr></table>");
  FUN_0040cae0(param_1,L"</tr></table>",sVar5);
  return;
}


//// FUNCTION FUN_007ae8c0 @ 007ae8c0 ////

uint __fastcall FUN_007ae8c0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_005b22a0(*(int *)(param_1 + 0x370));
  uVar3 = (**(code **)(*piVar2 + 0x24))();
  if (uVar3 == 5) {
    iVar4 = FUN_005b25d0(*(int *)(param_1 + 0x370));
    uVar3 = 0;
    if ((iVar4 != 0) && (uVar3 = FUN_004de100(iVar4), uVar3 != 0)) {
      iVar4 = uVar3 + 0x14;
      for (iVar1 = *(int *)(uVar3 + 8); iVar1 != iVar4; iVar1 = *(int *)(iVar1 + 4)) {
        iVar5 = FUN_0048c9f0(*(int *)(iVar1 + 8));
        uVar3 = 0;
        if ((iVar5 != 0) && (uVar3 = FUN_005a6130(iVar5), uVar3 == 0)) {
          piVar2 = (int *)FUN_0048c950(*(int *)(iVar1 + 8));
          uVar3 = 0;
          if ((piVar2 != (int *)0x0) &&
             (uVar3 = (**(code **)(*piVar2 + 0x1d0))(), (char)uVar3 != '\0')) {
            return CONCAT31((int3)(uVar3 >> 8),1);
          }
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_007ae950 @ 007ae950 ////

undefined4 __fastcall FUN_007ae950(int param_1)

{
  uint in_EAX;
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x370) != 0) {
    piVar1 = (int *)FUN_005b22a0(*(int *)(param_1 + 0x370));
    in_EAX = (**(code **)(*piVar1 + 0x24))();
    if ((int)in_EAX < 6) {
      in_EAX = FUN_007ae8c0(param_1);
      if ((char)in_EAX == '\0') {
        iVar2 = FUN_005b2220(*(int *)(param_1 + 0x370));
        uVar3 = FUN_005a7400(iVar2);
        in_EAX = FUN_005a7430(iVar2);
        if (uVar3 <= in_EAX) goto LAB_007ae9a0;
      }
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
LAB_007ae9a0:
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_007ae9b0 @ 007ae9b0 ////

void __cdecl FUN_007ae9b0(int param_1,int param_2,void *param_3,undefined1 *param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined1 uVar7;
  wchar_t *pwVar8;
  int iStack_28;
  int iStack_24;
  void *apvStack_20 [2];
  uint uStack_18;
  
  piVar2 = (int *)FUN_005a6470(param_2);
  uVar7 = 0;
  if (piVar2 == (int *)0x0) {
    uVar3 = FUN_00ace02d(L"<nobr><x6><font color=#ff0000>");
    FUN_004036d0(param_3,L"<nobr><x6><font color=#ff0000>",uVar3);
    sVar4 = FUN_00ace02d(L"<translate>SITT_PROJECT_CASTANDCREW_ROLENOTFILLED</translate>");
    FUN_0040cae0(param_3,L"<translate>SITT_PROJECT_CASTANDCREW_ROLENOTFILLED</translate>",sVar4);
    sVar4 = FUN_00ace02d(L"</font></x6></nobr>");
    FUN_0040cae0(param_3,L"</font></x6></nobr>",sVar4);
    uVar7 = 1;
  }
  else {
    uVar3 = FUN_00ace02d(L"<nobr><x6>");
    FUN_004036d0(param_3,L"<nobr><x6>",uVar3);
    cVar1 = (**(code **)(*piVar2 + 0x1dc))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*piVar2 + 0x204))();
      if (cVar1 == '\0') {
        sVar4 = FUN_00ace02d(L"<font color=#ff0000>");
        FUN_0040cae0(param_3,L"<font color=#ff0000>",sVar4);
        puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(apvStack_20);
        FUN_0040cae0(param_3,(wchar_t *)*puVar5,puVar5[1]);
        if (10 < uStack_18) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_20[0]);
        }
        sVar4 = FUN_00ace02d(
                            L"<br><translate>SITT_PROJECT_CASTANDCREW_UNEMPLOYED</translate></font>"
                            );
        FUN_0040cae0(param_3,
                     L"<br><translate>SITT_PROJECT_CASTANDCREW_UNEMPLOYED</translate></font>",sVar4)
        ;
        uVar7 = 1;
      }
      else {
        puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(apvStack_20);
        FUN_0040cae0(param_3,(wchar_t *)*puVar5,puVar5[1]);
        if (10 < uStack_18) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_20[0]);
        }
        sVar4 = FUN_00ace02d(L"<br>");
        FUN_0040cae0(param_3,L"<br>",sVar4);
        if (param_1 != 0) {
          FUN_007ae560((int)piVar2,&iStack_24,&iStack_28);
          if (iStack_28 == iStack_24) {
            cVar1 = (**(code **)(*piVar2 + 0x1d0))();
            if (cVar1 == '\0') {
              puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x1d8))();
              FUN_0040d3a0(param_3,puVar5);
            }
            else {
              FUN_0040d3c0(param_3,L"<font color=#ff0000>");
              puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x1d8))();
              FUN_0040d3a0(param_3,puVar5);
              FUN_0040d3c0(param_3,L"</font>");
              uVar7 = 1;
            }
          }
          else {
            if (iStack_28 == 0) {
              pwVar8 = 
              L"<font color=#0000a0><translate>SITT_PROJECT_CASTANDCREW_STARFINISHED</translate></font>"
              ;
            }
            else {
              FUN_0040d3c0(param_3,
                           L"<font color=#0000a0><phrasebook><translate>SITT_PROJECT_CASTANDCREW_STARNEXTSCENE</translate>"
                          );
              pwVar8 = L"</phrase>";
              pvVar6 = FUN_0040d3c0(param_3,L"<phrase key=SCENE>");
              pvVar6 = FUN_004430d0(pvVar6,iStack_28);
              FUN_0040d3c0(pvVar6,pwVar8);
              pwVar8 = L"</phrasebook></font>";
            }
            FUN_0040d3c0(param_3,pwVar8);
          }
        }
      }
    }
    else {
      sVar4 = FUN_00ace02d(L"<font color=#ff0000>");
      FUN_0040cae0(param_3,L"<font color=#ff0000>",sVar4);
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(apvStack_20);
      FUN_0040cae0(param_3,(wchar_t *)*puVar5,puVar5[1]);
      if (10 < uStack_18) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_20[0]);
      }
      sVar4 = FUN_00ace02d(L"<br><translate>SITT_PROJECT_CASTANDCREW_DEAD</translate></font>");
      FUN_0040cae0(param_3,L"<br><translate>SITT_PROJECT_CASTANDCREW_DEAD</translate></font>",sVar4)
      ;
      uVar7 = 1;
    }
    sVar4 = FUN_00ace02d(L"</x6></nobr>");
    FUN_0040cae0(param_3,L"</x6></nobr>",sVar4);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar7;
  }
  return;
}


//// FUNCTION FUN_007aed20 @ 007aed20 ////

void __cdecl FUN_007aed20(int param_1,void *param_2,undefined1 *param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  void *unaff_EBX;
  void *pvStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  uVar6 = 0;
  piVar2 = (int *)FUN_005b2780(param_1);
  if (piVar2 == (int *)0x0) {
    uVar3 = FUN_00ace02d(
                        L"<nobr><x6><font color=#ff0000><translate>SITT_PROJECT_CASTANDCREW_NODIR</translate></font></x6></nobr>"
                        );
    FUN_004036d0(param_2,
                 L"<nobr><x6><font color=#ff0000><translate>SITT_PROJECT_CASTANDCREW_NODIR</translate></font></x6></nobr>"
                 ,uVar3);
    uVar6 = 1;
  }
  else {
    uVar3 = FUN_00ace02d(L"<nobr><x6>");
    FUN_004036d0(param_2,L"<nobr><x6>",uVar3);
    cVar1 = (**(code **)(*piVar2 + 0x1dc))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*piVar2 + 0x204))();
      if (cVar1 == '\0') {
        sVar4 = FUN_00ace02d(L"<font color=#ff0000>");
        FUN_0040cae0(param_2,L"<font color=#ff0000>",sVar4);
        puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(&pvStack_20);
        FUN_0040cae0(param_2,(wchar_t *)*puVar5,puVar5[1]);
        if (10 < uStack_18) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_20);
        }
        sVar4 = FUN_00ace02d(
                            L"<br><translate>SITT_PROJECT_CASTANDCREW_UNEMPLOYED</translate></font>"
                            );
        FUN_0040cae0(param_2,
                     L"<br><translate>SITT_PROJECT_CASTANDCREW_UNEMPLOYED</translate></font>",sVar4)
        ;
        uVar6 = 1;
      }
      else {
        puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(&pvStack_20);
        FUN_0040cae0(param_2,(wchar_t *)*puVar5,puVar5[1]);
        if (10 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
          _free(unaff_EBX);
        }
        sVar4 = FUN_00ace02d(L"<br>");
        FUN_0040cae0(param_2,L"<br>",sVar4);
        cVar1 = (**(code **)(*piVar2 + 0x1d0))();
        if (cVar1 == '\0') {
          puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x1d8))();
          FUN_0040cae0(param_2,(wchar_t *)*puVar5,puVar5[1]);
        }
        else {
          FUN_0040d3c0(param_2,L"<font color=#ff0000>");
          puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x1d8))();
          FUN_0040cae0(param_2,(wchar_t *)*puVar5,puVar5[1]);
          FUN_0040d3c0(param_2,L"</font>");
          uVar6 = 1;
        }
      }
    }
    else {
      sVar4 = FUN_00ace02d(L"<font color=#ff0000>");
      FUN_0040cae0(param_2,L"<font color=#ff0000>",sVar4);
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(&pvStack_20);
      FUN_0040cae0(param_2,(wchar_t *)*puVar5,puVar5[1]);
      if (10 < uStack_18) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_20);
      }
      sVar4 = FUN_00ace02d(L"<br><translate>SITT_PROJECT_CASTANDCREW_DEAD</translate></font>");
      FUN_0040cae0(param_2,L"<br><translate>SITT_PROJECT_CASTANDCREW_DEAD</translate></font>",sVar4)
      ;
      uVar6 = 1;
    }
    sVar4 = FUN_00ace02d(L"</x6></nobr>");
    FUN_0040cae0(param_2,L"</x6></nobr>",sVar4);
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = uVar6;
  }
  return;
}


//// FUNCTION FUN_007af040 @ 007af040 ////

void __fastcall FUN_007af040(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5436c;
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


//// FUNCTION FUN_007af0e0 @ 007af0e0 ////

void __fastcall FUN_007af0e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5437c;
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


//// FUNCTION FUN_007af180 @ 007af180 ////

void __fastcall FUN_007af180(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5438c;
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


//// FUNCTION FUN_007af220 @ 007af220 ////

void __fastcall FUN_007af220(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5439c;
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


//// FUNCTION FUN_007af2c0 @ 007af2c0 ////

void __fastcall FUN_007af2c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d543ac;
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


//// FUNCTION FUN_007af470 @ 007af470 ////

undefined4 * __thiscall FUN_007af470(void *this,byte param_1)

{
  FUN_007af220(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007af490 @ 007af490 ////

undefined4 * __thiscall FUN_007af490(void *this,byte param_1)

{
  FUN_007af2c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007af4b0 @ 007af4b0 ////

void FUN_007af4b0(wchar_t *param_1,void *param_2)

{
  void *this;
  int *piVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  wchar_t *pwStack_20;
  size_t sStack_1c;
  uint uStack_18;
  
  piVar1 = (int *)FUN_005b22a0((int)param_1);
  iVar2 = (**(code **)(*piVar1 + 0x24))();
  param_1 = L"SITT_PROJECT_SCRIPTWRITERS_TITLE";
  if (iVar2 != 2) {
    param_1 = L"SITT_PROJECT_CASTANDCREW_TITLE";
  }
  uVar3 = FUN_00ace02d(L"<nobr><x4><translate>");
  this = param_2;
  FUN_004036d0(param_2,L"<nobr><x4><translate>",uVar3);
  FUN_00568cb0(&param_1,&pwStack_20);
  FUN_0040cae0(this,pwStack_20,sStack_1c);
  if (10 < uStack_18) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_20);
  }
  sVar4 = FUN_00ace02d(L"</translate></x4></nobr>");
  FUN_0040cae0(this,L"</translate></x4></nobr>",sVar4);
  return;
}


//// FUNCTION FUN_007af550 @ 007af550 ////

undefined4 * __fastcall FUN_007af550(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d544bc;
  param_1[0x14] = &PTR_FUN_00d544a0;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = param_1 + 0xd1;
  param_1[0xd1] = &PTR_FUN_00d18c2c;
  param_1[0xd6] = 0;
  return param_1;
}


//// FUNCTION FUN_007af590 @ 007af590 ////

void __fastcall FUN_007af590(undefined4 *param_1)

{
  param_1[0xd1] = &PTR_FUN_00d18c2c;
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


//// FUNCTION FUN_007af610 @ 007af610 ////

undefined4 * __thiscall FUN_007af610(void *this,byte param_1)

{
  FUN_007af590(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007af6f0 @ 007af6f0 ////

int * __thiscall FUN_007af6f0(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 **ppuVar4;
  undefined2 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdd977;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined ***)this = &PTR_FUN_00d545dc;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d545c0;
  piVar1 = (int *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x368) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0x370) = param_1;
  if (param_1 != 0) {
    piVar3 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x364) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(int **)((int)this + 0x380) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x388) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  puVar2 = operator_new(0x3fc);
  local_4._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_007ae690(this,&local_2c);
  ppuVar4 = &local_2c;
  (**(code **)(*piVar3 + 0x54))();
  (**(code **)(*piVar3 + 0x84))(0);
  (**(code **)(*piVar3 + 0x5c))(1,this);
  (**(code **)(*piVar3 + 100))(1,this,0);
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x388) = piVar3;
  (**(code **)*piVar1)();
  FUN_0073f6e0(this,piVar3);
  FUN_0073f500(this);
  if (&lpType_0000000a < ppuVar4) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x0);
  }
  ExceptionList = local_2c;
  return this;
}


//// FUNCTION FUN_007af930 @ 007af930 ////

void __thiscall FUN_007af930(void *this,void *param_1)

{
  char cVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *_Format;
  uint uVar4;
  size_t sVar5;
  int *piVar6;
  void *this_00;
  LPCWSTR *local_a8;
  LPCWSTR *local_a4;
  wchar_t *pwStack_a0;
  size_t sStack_9c;
  uint uStack_98;
  wchar_t awStack_80 [64];
  
  iVar2 = FUN_005b2220(*(int *)((int)this + 0x370));
  pwVar3 = (wchar_t *)FUN_005a7400(iVar2);
  _Format = (wchar_t *)FUN_005a7430(iVar2);
  uVar4 = FUN_00ace02d(L"<table><tr>");
  FUN_004036d0(param_1,L"<table><tr>",uVar4);
  local_a4 = &lpCaption_00d16918;
  local_a8 = &lpCaption_00d16918;
  cVar1 = (**(code **)(*(int *)this + 0xfc))();
  if (cVar1 != '\0') {
    local_a4 = (LPCWSTR *)0xd34430;
    local_a8 = (LPCWSTR *)0xd28458;
  }
  FUN_00568cb0(&local_a4,&pwStack_a0);
  sVar5 = FUN_00ace02d(L"<td><nobr><x6>");
  FUN_0040cae0(param_1,L"<td><nobr><x6>",sVar5);
  FUN_0040cae0(param_1,pwStack_a0,sStack_9c);
  sVar5 = FUN_00ace02d(L"<phrasebook><translate>SITT_PROJECT_CASTANDCREW_MINORROLES2</translate>");
  FUN_0040cae0(param_1,L"<phrasebook><translate>SITT_PROJECT_CASTANDCREW_MINORROLES2</translate>",
               sVar5);
  if (10 < uStack_98) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_a0);
  }
  sVar5 = FUN_00ace02d(L"<phrase key=needed>");
  FUN_0040cae0(param_1,L"<phrase key=needed>",sVar5);
  sVar5 = _swprintf(awStack_80,0xd18f7c,_Format);
  FUN_0040cae0(param_1,awStack_80,sVar5);
  sVar5 = FUN_00ace02d(L"</phrase>");
  FUN_0040cae0(param_1,L"</phrase>",sVar5);
  FUN_00568cb0(&local_a8,&pwStack_a0);
  sVar5 = FUN_00ace02d(L"</phrasebook>");
  FUN_0040cae0(param_1,L"</phrasebook>",sVar5);
  FUN_0040cae0(param_1,pwStack_a0,sStack_9c);
  sVar5 = FUN_00ace02d(L"</x6></nobr></td>");
  FUN_0040cae0(param_1,L"</x6></nobr></td>",sVar5);
  if (10 < uStack_98) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_a0);
  }
  piVar6 = (int *)FUN_005b22a0(*(int *)((int)this + 0x370));
  if (_Format < pwVar3) {
    iVar2 = (**(code **)(*piVar6 + 0x24))();
    if (iVar2 < 6) {
      sVar5 = FUN_00ace02d(L"<td align=right><nobr><x6><font color=#ff0000><phrasebook>");
      FUN_0040cae0(param_1,L"<td align=right><nobr><x6><font color=#ff0000><phrasebook>",sVar5);
      sVar5 = FUN_00ace02d(L"<translate>SITT_PROJECT_CASTANDCREW_EXTRASNEEDMORE</translate>");
      FUN_0040cae0(param_1,L"<translate>SITT_PROJECT_CASTANDCREW_EXTRASNEEDMORE</translate>",sVar5);
      sVar5 = FUN_00ace02d(L"<phrase key=needed>");
      FUN_0040cae0(param_1,L"<phrase key=needed>",sVar5);
      this_00 = FUN_004430d0(param_1,(int)pwVar3 - (int)_Format);
      sVar5 = FUN_00ace02d(L"</phrase>");
      FUN_0040cae0(this_00,L"</phrase>",sVar5);
      sVar5 = FUN_00ace02d(L"</phrasebook></font></x6></nobr></td>");
      FUN_0040cae0(param_1,L"</phrasebook></font></x6></nobr></td>",sVar5);
    }
  }
  sVar5 = FUN_00ace02d(L"</tr></table>");
  FUN_0040cae0(param_1,L"</tr></table>",sVar5);
  return;
}


//// FUNCTION FUN_007afbb0 @ 007afbb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_007afbb0(void *this,int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  void *_Memory;
  undefined1 *puVar7;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [8];
  undefined1 uStack_38;
  undefined4 *puStack_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdda08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  piVar6 = (int *)0x0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined ***)this = &PTR_FUN_00d54854;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5483c;
  piVar1 = (int *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x368) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0x370) = param_1;
  if (param_1 != 0) {
    piVar5 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x364) = piVar5;
    *piVar1 = *piVar5;
    *(int **)(*piVar5 + 4) = piVar1;
    *piVar5 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x378);
  *(undefined4 *)((int)this + 0x380) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 **)((int)this + 0x380) = (undefined4 *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x374) = &PTR_FUN_00d1cafc;
  *(int *)((int)this + 0x388) = param_2;
  if (param_2 != 0) {
    piVar5 = (int *)(param_2 + 0x18);
    *(int **)((int)this + 0x37c) = piVar5;
    *piVar1 = *piVar5;
    *(int **)(*piVar5 + 4) = piVar1;
    *piVar5 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x38c);
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(int **)((int)this + 0x398) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 4;
  iVar3 = FUN_005a6130(param_2);
  if (iVar3 == 1) {
    if (local_44 < 0x18) {
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_44 = 0x20;
      local_4c = _malloc(0x20);
    }
    _strncpy(local_4c,"ui/button_dummy_red.dds",0x17);
    local_48 = 0x17;
    local_4c[0x17] = '\0';
  }
  else if (iVar3 == 2) {
    if (local_44 < 0x1a) {
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_44 = 0x20;
      local_4c = _malloc(0x20);
    }
    _strncpy(local_4c,"ui/button_dummy_green.dds",0x19);
    local_48 = 0x19;
    local_4c[0x19] = '\0';
  }
  else if (iVar3 == 3) {
    if (local_44 < 0x19) {
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_44 = 0x20;
      local_4c = _malloc(0x20);
    }
    _strncpy(local_4c,"ui/button_dummy_blue.dds",0x18);
    local_48 = 0x18;
    local_4c[0x18] = '\0';
  }
  puVar4 = operator_new(0x360);
  local_4._0_1_ = 5;
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_0069ce90(puVar4);
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  (**(code **)(*piVar5 + 0x100))(&local_4c);
  uVar2 = DAT_00e5a3b8;
  (**(code **)(*piVar5 + 0x74))(DAT_00e5a3b8);
  (**(code **)(*piVar5 + 0x5c))(1,this);
  (**(code **)(*piVar5 + 100))(1,this,0);
  FUN_0073f6e0(this,piVar5);
  puStack_30 = operator_new(0x3fc);
  uStack_38 = 6;
  if (puStack_30 != (undefined4 *)0x0) {
    piVar6 = FUN_00833290(puStack_30);
  }
  uStack_38 = 7;
  FUN_007ae9b0(*(int *)((int)this + 0x370),*(int *)((int)this + 0x388),&stack0xffffffa0,
               (undefined1 *)0x0);
  puVar7 = &stack0xffffffa0;
  (**(code **)(*piVar6 + 0x54))();
  (**(code **)(*piVar6 + 0x84))(0x40400000);
  _Memory = (void *)-_DAT_00e5a3ac;
  (**(code **)(*piVar6 + 0x5c))(2,piVar5);
  (**(code **)(*piVar6 + 100))(1,this,DAT_00e5a3b0);
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x3a0) = piVar6;
  (**(code **)*piVar1)();
  FUN_0073f6e0(this,piVar6);
  FUN_0073f500(this);
  if (uVar2 < 0xb) {
    if (puVar7 <= &DAT_00000014) {
      ExceptionList = &stack0xffffffac;
      return this;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)0x0);
}


//// FUNCTION FUN_007b0020 @ 007b0020 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_007b0020(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint unaff_EBP;
  int *piVar4;
  void *unaff_EDI;
  uint uVar5;
  char *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40 [8];
  undefined1 uStack_38;
  undefined4 *puStack_30;
  undefined1 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdda8a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  piVar4 = (int *)0x0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined ***)this = &PTR_FUN_00d54974;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d54958;
  piVar1 = (int *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x368) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0x370) = param_1;
  if (param_1 != 0) {
    piVar3 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x364) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(int **)((int)this + 0x380) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x388) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  puVar2 = operator_new(0x360);
  local_4._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_0069ce90(puVar2);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"ui/ppod_statbar_director.dds",0x1c);
  local_48 = 0x1c;
  local_4c[0x1c] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  (**(code **)(*piVar3 + 0x100))(&local_4c);
  uStack_18 = 2;
  if (0x14 < unaff_EBP) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  uVar5 = DAT_00e5a3b8;
  (**(code **)(*piVar3 + 0x74))(DAT_00e5a3b8);
  (**(code **)(*piVar3 + 0x5c))(1,this);
  (**(code **)(*piVar3 + 100))(1,this,0);
  FUN_0073f6e0(this,piVar3);
  puStack_30 = operator_new(0x3fc);
  uStack_38 = 5;
  if (puStack_30 != (undefined4 *)0x0) {
    piVar4 = FUN_00833290(puStack_30);
  }
  uStack_38 = 6;
  FUN_007aed20(*(int *)((int)this + 0x370),&stack0xffffffa0,(undefined1 *)0x0);
  (**(code **)(*piVar4 + 0x54))(&stack0xffffffa0);
  (**(code **)(*piVar4 + 0x84))(0x40400000);
  (**(code **)(*piVar4 + 0x5c))(2,piVar3,-_DAT_00e5a3ac);
  (**(code **)(*piVar4 + 100))(1,this,DAT_00e5a3b0);
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x388) = piVar4;
  (**(code **)*piVar1)();
  FUN_0073f6e0(this,piVar4);
  FUN_0073f500(this);
  if (10 < uVar5) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x0);
  }
  ExceptionList = &stack0xffffffac;
  return this;
}


//// FUNCTION FUN_007b0620 @ 007b0620 ////

void __fastcall FUN_007b0620(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x3ac);
  if ((iVar5 != 0) && (puVar2 = *(undefined4 **)(iVar5 + 0x358), puVar2 != (undefined4 *)0x0)) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(iVar5 + 0x344) + 4))();
    *(undefined4 *)(iVar5 + 0x358) = 0;
    (*(code *)**(undefined4 **)(iVar5 + 0x344))();
  }
  iVar5 = 0;
  for (uVar4 = 0;
      (*(int *)(param_1 + 0x3b4) != 0 &&
      (uVar4 < (uint)((*(int *)(param_1 + 0x3b8) - *(int *)(param_1 + 0x3b4)) / 0x18)));
      uVar4 = uVar4 + 1) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x3b4) + iVar5 + 0x14);
    if ((iVar3 != 0) && (puVar2 = *(undefined4 **)(iVar3 + 0x358), puVar2 != (undefined4 *)0x0)) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(*(int *)(iVar3 + 0x344) + 4))();
      *(undefined4 *)(iVar3 + 0x358) = 0;
      (*(code *)**(undefined4 **)(iVar3 + 0x344))();
    }
    iVar5 = iVar5 + 0x18;
  }
  iVar5 = 0;
  for (uVar4 = 0;
      (*(int *)(param_1 + 0x3c4) != 0 &&
      (uVar4 < (uint)((*(int *)(param_1 + 0x3c8) - *(int *)(param_1 + 0x3c4)) / 0x18)));
      uVar4 = uVar4 + 1) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x3c4) + 0x14 + iVar5);
    if ((iVar3 != 0) && (puVar2 = *(undefined4 **)(iVar3 + 0x358), puVar2 != (undefined4 *)0x0)) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(*(int *)(iVar3 + 0x344) + 4))();
      *(undefined4 *)(iVar3 + 0x358) = 0;
      (*(code *)**(undefined4 **)(iVar3 + 0x344))();
    }
    iVar5 = iVar5 + 0x18;
  }
  iVar5 = *(int *)(param_1 + 0x3e4);
  if ((iVar5 != 0) && (puVar2 = *(undefined4 **)(iVar5 + 0x358), puVar2 != (undefined4 *)0x0)) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(iVar5 + 0x344) + 4))();
    *(undefined4 *)(iVar5 + 0x358) = 0;
    (*(code *)**(undefined4 **)(iVar5 + 0x344))();
  }
  iVar5 = *(int *)(param_1 + 0x3fc);
  if ((iVar5 != 0) && (puVar2 = *(undefined4 **)(iVar5 + 0x358), puVar2 != (undefined4 *)0x0)) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(iVar5 + 0x344) + 4))();
    *(undefined4 *)(iVar5 + 0x358) = 0;
    (*(code *)**(undefined4 **)(iVar5 + 0x344))();
  }
  if ((*(int *)(param_1 + 0x414) != 0) &&
     (puVar2 = *(undefined4 **)(param_1 + 0x42c), puVar2 != (undefined4 *)0x0)) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x418) + 4))();
    *(undefined4 *)(param_1 + 0x42c) = 0;
                    /* WARNING: Could not recover jumptable at 0x007b0805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(param_1 + 0x418))();
    return;
  }
  return;
}


//// FUNCTION FUN_007b0810 @ 007b0810 ////

void __thiscall FUN_007b0810(void *this,wchar_t *param_1)

{
  undefined4 *puVar1;
  void *unaff_EBP;
  void *_Memory;
  uint uVar2;
  undefined2 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cddad3;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_007af4b0(param_1,&local_2c);
  puVar1 = operator_new(0x3fc);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00833290(puVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*(int *)((int)this + 0x380) + 4))();
  *(undefined4 **)((int)this + 0x394) = puVar1;
  (*(code *)**(undefined4 **)((int)this + 0x380))();
  (**(code **)(**(int **)((int)this + 0x394) + 0x54))(&local_2c);
  uVar2 = 1;
  (**(code **)(**(int **)((int)this + 0x394) + 0x5c))(1,this,0);
  _Memory = this;
  (**(code **)(**(int **)((int)this + 0x394) + 100))(1,this,0);
  (**(code **)(**(int **)((int)this + 0x394) + 0x84))(0);
  (**(code **)(*(int *)this + 0xc))(*(undefined4 *)((int)this + 0x394),1);
  if (10 < uVar2) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = unaff_EBP;
  return;
}


//// FUNCTION FUN_007b0920 @ 007b0920 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007b0920(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cddaeb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x38c);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    piVar2 = FUN_007b0020(pvVar1,param_1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)((int)this + 0x398) + 4))();
  *(int **)((int)this + 0x3ac) = piVar2;
  (*(code *)**(undefined4 **)((int)this + 0x398))();
  (**(code **)(**(int **)((int)this + 0x3ac) + 0x5c))(1,this,0x40a00000);
  pvVar1 = (void *)-_DAT_0104e840;
  (**(code **)(**(int **)((int)this + 0x3ac) + 100))(2,*(undefined4 *)((int)this + 0x394));
  (**(code **)(*(int *)this + 0xc))(*(undefined4 *)((int)this + 0x3ac),1);
  ExceptionList = pvVar1;
  return;
}


//// FUNCTION FUN_007b09e0 @ 007b09e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007b09e0(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cddb0b;
  pvStack_c = ExceptionList;
  iVar3 = *(int *)((int)this + 0x3e4);
  piVar2 = (int *)0x0;
  if (iVar3 == 0) {
    if (*(int *)((int)this + 0x3b4) != 0) {
      if ((*(int *)((int)this + 0x3b8) - *(int *)((int)this + 0x3b4)) / 0x18 != 0) {
        iVar3 = *(int *)(*(int *)((int)this + 0x3b8) + -4);
        goto LAB_007b0a42;
      }
    }
    iVar3 = *(int *)((int)this + 0x3ac);
  }
LAB_007b0a42:
  if (*(int *)(param_1 + 0x300) != 0) {
    ExceptionList = &pvStack_c;
    pvVar1 = operator_new(0x38c);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      piVar2 = FUN_007af6f0(pvVar1,param_1);
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)((int)this + 1000) + 4))();
    *(int **)((int)this + 0x3fc) = piVar2;
    (*(code *)**(undefined4 **)((int)this + 1000))();
    pvVar1 = (void *)0x1;
    (**(code **)(**(int **)((int)this + 0x3fc) + 0x5c))(1,this,0x40a00000);
    (**(code **)(**(int **)((int)this + 0x3fc) + 100))(2,iVar3,-_DAT_00e5a3bc);
    (**(code **)(*(int *)this + 0xc))(*(undefined4 *)((int)this + 0x3fc),1);
    ExceptionList = pvVar1;
    return;
  }
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 1000) + 4))();
  *(undefined4 *)((int)this + 0x3fc) = 0;
  (*(code *)**(undefined4 **)((int)this + 1000))();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007b0b20 @ 007b0b20 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_007b0b20(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint unaff_EBP;
  int *piVar4;
  void *unaff_EDI;
  uint uVar5;
  char *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40 [8];
  undefined1 uStack_38;
  undefined4 *puStack_30;
  undefined1 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cddb6a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  piVar4 = (int *)0x0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined ***)this = &PTR_FUN_00d54aa4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d54a8c;
  piVar1 = (int *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x368) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_FUN_00d18c4c;
  *(int *)((int)this + 0x370) = param_1;
  if (param_1 != 0) {
    piVar3 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x364) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(int **)((int)this + 0x380) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x388) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  puVar2 = operator_new(0x360);
  local_4._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_0069ce90(puVar2);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"ui/icon_writer.dds",0x12);
  local_48 = 0x12;
  local_4c[0x12] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  (**(code **)(*piVar3 + 0x100))(&local_4c);
  uStack_18 = 2;
  if (0x14 < unaff_EBP) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  uVar5 = DAT_00e5a3b8;
  (**(code **)(*piVar3 + 0x74))(DAT_00e5a3b8);
  (**(code **)(*piVar3 + 0x5c))(1,this);
  (**(code **)(*piVar3 + 100))(1,this,0);
  FUN_0073f6e0(this,piVar3);
  puStack_30 = operator_new(0x3fc);
  uStack_38 = 5;
  if (puStack_30 != (undefined4 *)0x0) {
    piVar4 = FUN_00833290(puStack_30);
  }
  uStack_38 = 6;
  FUN_007ae5e0(this,&stack0xffffffa0);
  (**(code **)(*piVar4 + 0x54))(&stack0xffffffa0);
  (**(code **)(*piVar4 + 0x84))(0x40400000);
  (**(code **)(*piVar4 + 0x5c))(2,piVar3,-_DAT_00e5a3ac);
  (**(code **)(*piVar4 + 100))(1,this,DAT_00e5a3b0);
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x388) = piVar4;
  (**(code **)*piVar1)();
  FUN_0073f6e0(this,piVar4);
  FUN_0073f500(this);
  if (10 < uVar5) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x0);
  }
  ExceptionList = &stack0xffffffac;
  return this;
}


//// FUNCTION FUN_007b0d80 @ 007b0d80 ////

undefined4 * __thiscall FUN_007b0d80(void *this,byte param_1)

{
  FUN_007b0da0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007b0da0 @ 007b0da0 ////

void __fastcall FUN_007b0da0(undefined4 *param_1)

{
  param_1[0xdd] = &PTR_FUN_00d195f8;
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
  param_1[0xd7] = &PTR_FUN_00d18c4c;
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
  FUN_007af590(param_1);
  return;
}


//// FUNCTION FUN_007b0e90 @ 007b0e90 ////

undefined4 * __thiscall FUN_007b0e90(void *this,byte param_1)

{
  FUN_007b0eb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007b0eb0 @ 007b0eb0 ////

void __fastcall FUN_007b0eb0(undefined4 *param_1)

{
  param_1[0xdd] = &PTR_FUN_00d195f8;
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
  param_1[0xd7] = &PTR_FUN_00d18c3c;
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
  FUN_007af590(param_1);
  return;
}


//// FUNCTION FUN_007b0fa0 @ 007b0fa0 ////

int * __thiscall FUN_007b0fa0(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 **ppuVar4;
  undefined2 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cddbb7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined ***)this = &PTR_FUN_00d54bc4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d54ba8;
  piVar1 = (int *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x368) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0x370) = param_1;
  if (param_1 != 0) {
    piVar3 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x364) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(int **)((int)this + 0x380) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x388) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  puVar2 = operator_new(0x3fc);
  local_4._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_007af930(this,&local_2c);
  ppuVar4 = &local_2c;
  (**(code **)(*piVar3 + 0x54))();
  (**(code **)(*piVar3 + 0x84))(0);
  (**(code **)(*piVar3 + 0x5c))(1,this);
  (**(code **)(*piVar3 + 100))(1,this,0);
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x388) = piVar3;
  (**(code **)*piVar1)();
  FUN_0073f6e0(this,piVar3);
  FUN_0073f500(this);
  if (&lpType_0000000a < ppuVar4) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x0);
  }
  ExceptionList = local_2c;
  return this;
}


//// FUNCTION FUN_007b1120 @ 007b1120 ////

undefined4 * __thiscall FUN_007b1120(void *this,byte param_1)

{
  FUN_007b1140(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007b1140 @ 007b1140 ////

void __fastcall FUN_007b1140(undefined4 *param_1)

{
  param_1[0xdd] = &PTR_FUN_00d195f8;
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
  param_1[0xd7] = &PTR_FUN_00d18c3c;
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
  FUN_007af590(param_1);
  return;
}


//// FUNCTION FUN_007b12f0 @ 007b12f0 ////

undefined4 * __thiscall FUN_007b12f0(void *this,byte param_1)

{
  FUN_007b1310(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007b1310 @ 007b1310 ////

void __fastcall FUN_007b1310(undefined4 *param_1)

{
  param_1[0xe3] = &PTR_FUN_00d195f8;
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
  param_1[0xdd] = &PTR_FUN_00d1cafc;
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
  param_1[0xd7] = &PTR_FUN_00d18c3c;
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
  FUN_007af590(param_1);
  return;
}


//// FUNCTION FUN_007b1470 @ 007b1470 ////

undefined4 * __thiscall FUN_007b1470(void *this,byte param_1)

{
  FUN_007b1490(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007b1490 @ 007b1490 ////

void __fastcall FUN_007b1490(undefined4 *param_1)

{
  param_1[0xdd] = &PTR_FUN_00d195f8;
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
  param_1[0xd7] = &PTR_FUN_00d18c3c;
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
  FUN_007af590(param_1);
  return;
}


//// FUNCTION FUN_007b15a0 @ 007b15a0 ////

void __cdecl FUN_007b15a0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d5439c;
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


//// FUNCTION FUN_007b1610 @ 007b1610 ////

void __cdecl FUN_007b1610(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d543ac;
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


//// FUNCTION FUN_007b1680 @ 007b1680 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007b1680(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cddbfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005b2220(param_1);
  iVar1 = FUN_005a7400(iVar1);
  if (iVar1 != 0) {
    this_00 = operator_new(0x38c);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_007b0fa0(this_00,param_1);
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)((int)this + 0x3d0) + 4))();
    *(int **)((int)this + 0x3e4) = piVar2;
    (*(code *)**(undefined4 **)((int)this + 0x3d0))();
    (**(code **)(**(int **)((int)this + 0x3e4) + 0x5c))(1,this,0x40a00000);
    if ((*(int *)((int)this + 0x3b4) == 0) ||
       (puStack_8 = (undefined1 *)
                    ((*(int *)((int)this + 0x3b8) - *(int *)((int)this + 0x3b4)) / 0x18),
       puStack_8 == (undefined1 *)0x0)) {
      uVar3 = *(undefined4 *)((int)this + 0x3ac);
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)((int)this + 0x3b8) + -4);
    }
    (**(code **)(**(int **)((int)this + 0x3e4) + 100))(2,uVar3,-_DAT_00e5a3bc);
    (**(code **)(*(int *)this + 0xc))(*(undefined4 *)((int)this + 0x3e4),1);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007b1790 @ 007b1790 ////

void __cdecl FUN_007b1790(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d5439c;
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


//// FUNCTION FUN_007b1830 @ 007b1830 ////

void __cdecl FUN_007b1830(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d543ac;
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


//// FUNCTION FUN_007b1a30 @ 007b1a30 ////

undefined4 * FUN_007b1a30(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007b1790(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007b1a60 @ 007b1a60 ////

void FUN_007b1a60(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007af2c0(param_1);
  }
  return;
}


//// FUNCTION FUN_007b1a90 @ 007b1a90 ////

void __fastcall FUN_007b1a90(int param_1)

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
    FUN_007af2c0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007b1ae0 @ 007b1ae0 ////

undefined4 * FUN_007b1ae0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007b1830(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007b1b10 @ 007b1b10 ////

void FUN_007b1b10(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007af220(param_1);
  }
  return;
}


//// FUNCTION FUN_007b1b40 @ 007b1b40 ////

void FUN_007b1b40(void)

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
  puStack_8 = &LAB_00cddc18;
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


//// FUNCTION FUN_007b1bb0 @ 007b1bb0 ////

void FUN_007b1bb0(void)

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
  puStack_8 = &LAB_00cddc38;
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


//// FUNCTION FUN_007b1c20 @ 007b1c20 ////

void __fastcall FUN_007b1c20(int param_1)

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
    FUN_007af2c0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007b1c30 @ 007b1c30 ////

void __fastcall FUN_007b1c30(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar1 = *(undefined4 **)(param_1 + 8), ((int)puVar1 - *(int *)(param_1 + 4)) / 0x18 != 0)) {
    for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      FUN_007af2c0(puVar2);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x18;
  }
  return;
}


//// FUNCTION FUN_007b1cd0 @ 007b1cd0 ////

void __fastcall FUN_007b1cd0(int param_1)

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
    FUN_007af220(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007b1d70 @ 007b1d70 ////

void __thiscall FUN_007b1d70(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cddc58;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d5439c;
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
      FUN_007b1b40();
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
        iVar3 = FUN_007adc70((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007b15a0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007b1790(puVar5,param_2,(int)&local_34);
      FUN_007b15a0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_007b1b10(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_007b15a0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007b1a30(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007ae4a0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007b15a0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007ae050((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007ae4a0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_007b20a0 @ 007b20a0 ////

void __thiscall FUN_007b20a0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cddc78;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d543ac;
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
      FUN_007b1bb0();
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
        iVar3 = FUN_007adcd0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007b1610(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007b1830(puVar5,param_2,(int)&local_34);
      FUN_007b1610((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_007b1a60(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_007b1610((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007b1ae0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007ae500(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007b1610((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007ae090((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007ae500(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_007b2400 @ 007b2400 ////

void __thiscall FUN_007b2400(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007b2445;
    }
  }
  iVar1 = 0;
LAB_007b2445:
  FUN_007b1d70(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_007b2470 @ 007b2470 ////

void __thiscall FUN_007b2470(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007b24b5;
    }
  }
  iVar1 = 0;
LAB_007b24b5:
  FUN_007b20a0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_007b24e0 @ 007b24e0 ////

void __fastcall FUN_007b24e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d54ce4;
  param_1[0x14] = &PTR_LAB_00d54cc8;
  param_1[0x106] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x108] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x108] = param_1[0x107];
  }
  if (param_1[0x107] != 0) {
    *(undefined4 *)(param_1[0x107] + 4) = param_1[0x108];
  }
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x10b] = 0;
  if ((undefined4 *)param_1[0x108] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x108] = param_1[0x107];
  }
  if (param_1[0x107] != 0) {
    *(undefined4 *)(param_1[0x107] + 4) = param_1[0x108];
  }
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x100] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x102] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x102] = param_1[0x101];
  }
  if (param_1[0x101] != 0) {
    *(undefined4 *)(param_1[0x101] + 4) = param_1[0x102];
  }
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x105] = 0;
  if ((undefined4 *)param_1[0x102] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x102] = param_1[0x101];
  }
  if (param_1[0x101] != 0) {
    *(undefined4 *)(param_1[0x101] + 4) = param_1[0x102];
  }
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0xfa] = &PTR_LAB_00d5438c;
  if ((undefined4 *)param_1[0xfc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfc] = param_1[0xfb];
  }
  if (param_1[0xfb] != 0) {
    *(undefined4 *)(param_1[0xfb] + 4) = param_1[0xfc];
  }
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xff] = 0;
  if ((undefined4 *)param_1[0xfc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfc] = param_1[0xfb];
  }
  if (param_1[0xfb] != 0) {
    *(undefined4 *)(param_1[0xfb] + 4) = param_1[0xfc];
  }
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xf4] = &PTR_LAB_00d5437c;
  if ((undefined4 *)param_1[0xf6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf6] = param_1[0xf5];
  }
  if (param_1[0xf5] != 0) {
    *(undefined4 *)(param_1[0xf5] + 4) = param_1[0xf6];
  }
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf9] = 0;
  if ((undefined4 *)param_1[0xf6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf6] = param_1[0xf5];
  }
  if (param_1[0xf5] != 0) {
    *(undefined4 *)(param_1[0xf5] + 4) = param_1[0xf6];
  }
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  FUN_007b1a90((int)(param_1 + 0xf0));
  FUN_007b1cd0((int)(param_1 + 0xec));
  param_1[0xe6] = &PTR_LAB_00d5436c;
  if ((undefined4 *)param_1[0xe8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe8] = param_1[0xe7];
  }
  if (param_1[0xe7] != 0) {
    *(undefined4 *)(param_1[0xe7] + 4) = param_1[0xe8];
  }
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xeb] = 0;
  if ((undefined4 *)param_1[0xe8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe8] = param_1[0xe7];
  }
  if (param_1[0xe7] != 0) {
    *(undefined4 *)(param_1[0xe7] + 4) = param_1[0xe8];
  }
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe0] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xe2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe2] = param_1[0xe1];
  }
  if (param_1[0xe1] != 0) {
    *(undefined4 *)(param_1[0xe1] + 4) = param_1[0xe2];
  }
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe5] = 0;
  if ((undefined4 *)param_1[0xe2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe2] = param_1[0xe1];
  }
  if (param_1[0xe1] != 0) {
    *(undefined4 *)(param_1[0xe1] + 4) = param_1[0xe2];
  }
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  FUN_007ad020(param_1);
  return;
}


//// FUNCTION FUN_007b27c0 @ 007b27c0 ////

void __thiscall FUN_007b27c0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007b1790(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_007b2400(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007b2850 @ 007b2850 ////

void __thiscall FUN_007b2850(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007b1830(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_007b2470(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007b28e0 @ 007b28e0 ////

undefined4 * __thiscall FUN_007b28e0(void *this,byte param_1)

{
  FUN_007b24e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007b2900 @ 007b2900 ////

int __thiscall FUN_007b2900(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *this_00;
  int *piVar3;
  int local_30;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  int *piStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cddca3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005b2220(param_1);
  local_30 = *(int *)(iVar1 + 100);
  iVar1 = FUN_005b2220(param_1);
  if (local_30 != *(int *)(iVar1 + 0x68)) {
    do {
      iVar1 = *(int *)(local_30 + 0x14);
      uVar2 = FUN_005a6140(iVar1);
      if ((char)uVar2 != '\0') {
        if ((*(int *)((int)this + 0x3b4) == 0) ||
           ((*(int *)((int)this + 0x3b8) - *(int *)((int)this + 0x3b4)) / 0x18 == 0)) {
          uVar2 = *(undefined4 *)((int)this + 0x3ac);
        }
        else {
          uVar2 = *(undefined4 *)(*(int *)((int)this + 0x3b8) + -4);
        }
        this_00 = operator_new(0x3a4);
        local_4 = 0;
        if (this_00 == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = FUN_007afbb0(this_00,param_1,iVar1);
        }
        local_4 = 0xffffffff;
        (**(code **)(*piVar3 + 0x5c))(1,this,0x40a00000);
        (**(code **)(*piVar3 + 100))(2,uVar2,DAT_00e5a3b4);
        (**(code **)(*(int *)this + 0xc))(piVar3,1);
        pppuStack_18 = &ppuStack_24;
        piStack_1c = piVar3 + 6;
        ppuStack_24 = &PTR_LAB_00d5439c;
        iStack_20 = *piStack_1c;
        *(int **)(*piStack_1c + 4) = &iStack_20;
        *piStack_1c = (int)&iStack_20;
        local_4 = 1;
        piStack_10 = piVar3;
        FUN_007b27c0((void *)((int)this + 0x3b0),(int)&ppuStack_24);
        local_4 = 0xffffffff;
        ppuStack_24 = &PTR_LAB_00d5439c;
        if (piStack_1c != (int *)0x0) {
          *piStack_1c = iStack_20;
        }
        if (iStack_20 != 0) {
          *(int **)(iStack_20 + 4) = piStack_1c;
        }
        piStack_10 = (int *)0x0;
        iStack_20 = 0;
        piStack_1c = (int *)0x0;
      }
      local_30 = local_30 + 0x18;
      iVar1 = FUN_005b2220(param_1);
    } while (local_30 != *(int *)(iVar1 + 0x68));
  }
  ExceptionList = local_c;
  return iVar1 + 0x60;
}


//// FUNCTION FUN_007b2ac0 @ 007b2ac0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007b2ac0(void *this,int param_1)

{
  int iVar1;
  void **ppvVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  size_t sVar7;
  undefined4 ****_Memory;
  float fVar8;
  undefined4 *local_54;
  undefined ****ppppuStack_4c;
  int iStack_48;
  int *piStack_44;
  undefined4 ***apppuStack_40 [2];
  int *piStack_38;
  undefined ****ppppuStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined2 auStack_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cddce9;
  local_c = ExceptionList;
  if (param_1 != 0) {
    local_54 = DAT_0104cfc8;
    ExceptionList = &local_c;
    ppvVar2 = &local_c;
    if (DAT_0104cfc8 != &DAT_0104cfd4) {
      do {
        ExceptionList = ppvVar2;
        iVar1 = local_54[2];
        if (((iVar1 != 0) && (*(int *)(iVar1 + 0x814) == 0xe)) &&
           (iVar3 = FUN_00577d80(iVar1), iVar3 == param_1)) {
          this_00 = operator_new(0x38c);
          local_4 = 0;
          if (this_00 == (void *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = FUN_007b0b20(this_00,iVar1);
          }
          local_4 = 0xffffffff;
          (**(code **)(*piVar4 + 0x5c))(1,this,0x40a00000);
          if ((*(int *)((int)this + 0x3c4) == 0) ||
             ((*(int *)((int)this + 0x3c8) - *(int *)((int)this + 0x3c4)) / 0x18 == 0)) {
            uVar5 = *(undefined4 *)((int)this + 0x394);
            fVar8 = -_DAT_0104e840;
          }
          else {
            uVar5 = *(undefined4 *)(*(int *)((int)this + 0x3c8) + -4);
            fVar8 = 0.0;
          }
          (**(code **)(*piVar4 + 100))(2,uVar5,fVar8);
          (**(code **)(*(int *)this + 0xc))(piVar4,1);
          piStack_44 = piVar4 + 6;
          apppuStack_40[0] = &ppppuStack_4c;
          ppppuStack_4c = (undefined ****)&PTR_LAB_00d543ac;
          iStack_48 = *piStack_44;
          *(int **)(*piStack_44 + 4) = &iStack_48;
          *piStack_44 = (int)&iStack_48;
          local_4 = 1;
          piStack_38 = piVar4;
          FUN_007b2850((void *)((int)this + 0x3c0),(int)&ppppuStack_4c);
          local_4 = 0xffffffff;
          FUN_007af2c0(&ppppuStack_4c);
        }
        local_54 = (undefined4 *)local_54[1];
        ppvVar2 = ExceptionList;
      } while (local_54 != &DAT_0104cfd4);
    }
    if ((*(int *)((int)this + 0x3c4) == 0) ||
       ((*(int *)((int)this + 0x3c8) - *(int *)((int)this + 0x3c4)) / 0x18 == 0)) {
      puVar6 = operator_new(0x3fc);
      local_4 = 2;
      if (puVar6 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_00833290(puVar6);
      }
      ppppuStack_4c = (undefined ****)apppuStack_40;
      apppuStack_40[0] = (undefined4 ***)((uint)apppuStack_40[0] & 0xffff0000);
      iStack_48 = 0;
      piStack_44 = (int *)&lpType_0000000a;
      local_4 = 3;
      sVar7 = FUN_00ace02d(L"<table><tr>");
      FUN_0040cae0(&ppppuStack_4c,L"<table><tr>",sVar7);
      sVar7 = FUN_00ace02d(L"<td align=right><nobr><x6>");
      FUN_0040cae0(&ppppuStack_4c,L"<td align=right><nobr><x6>",sVar7);
      sVar7 = FUN_00ace02d(
                          L"<font color=#ff0000><translate>SITT_PROJECT_CASTANDCREW_WRITERSNEEDED</translate></font>"
                          );
      FUN_0040cae0(&ppppuStack_4c,
                   L"<font color=#ff0000><translate>SITT_PROJECT_CASTANDCREW_WRITERSNEEDED</translate></font>"
                   ,sVar7);
      sVar7 = FUN_00ace02d(L"</x6></nobr></td>");
      FUN_0040cae0(&ppppuStack_4c,L"</x6></nobr></td>",sVar7);
      sVar7 = FUN_00ace02d(L"</tr></table>");
      FUN_0040cae0(&ppppuStack_4c,L"</tr></table>",sVar7);
      (**(code **)(*piVar4 + 0x54))(&ppppuStack_4c);
      (**(code **)(*piVar4 + 0x84))(0);
      (**(code **)(*piVar4 + 0x5c))(1,this,0);
      (**(code **)(*piVar4 + 100))(2,*(undefined4 *)((int)this + 0x394),-_DAT_0104e840);
      (**(code **)(*(int *)this + 0xc))(piVar4,1);
      (**(code **)(*(int *)((int)this + 0x400) + 4))();
      *(int **)((int)this + 0x414) = piVar4;
      (*(code *)**(undefined4 **)((int)this + 0x400))();
      _Memory = (undefined4 ****)ppppuStack_4c;
      if (&lpType_0000000a < piStack_44) {
LAB_007b2f33:
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
    else if ((*(int *)((int)this + 0x3c4) == 0) ||
            ((uint)((*(int *)((int)this + 0x3c8) - *(int *)((int)this + 0x3c4)) / 0x18) < 5)) {
      puVar6 = operator_new(0x3fc);
      local_4 = 4;
      if (puVar6 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_00833290(puVar6);
      }
      ppppuStack_2c = (undefined ****)auStack_20;
      auStack_20[0] = 0;
      uStack_28 = 0;
      uStack_24 = 10;
      local_4 = 5;
      sVar7 = FUN_00ace02d(L"<table><tr>");
      FUN_0040cae0(&ppppuStack_2c,L"<table><tr>",sVar7);
      sVar7 = FUN_00ace02d(L"<td align=right><nobr><x6>");
      FUN_0040cae0(&ppppuStack_2c,L"<td align=right><nobr><x6>",sVar7);
      sVar7 = FUN_00ace02d(
                          L"<font color=#ff0000><translate>SITT_PROJECT_CASTANDCREW_WRITERSPEED</translate></font>"
                          );
      FUN_0040cae0(&ppppuStack_2c,
                   L"<font color=#ff0000><translate>SITT_PROJECT_CASTANDCREW_WRITERSPEED</translate></font>"
                   ,sVar7);
      sVar7 = FUN_00ace02d(L"</x6></nobr></td>");
      FUN_0040cae0(&ppppuStack_2c,L"</x6></nobr></td>",sVar7);
      sVar7 = FUN_00ace02d(L"</tr></table>");
      FUN_0040cae0(&ppppuStack_2c,L"</tr></table>",sVar7);
      (**(code **)(*piVar4 + 0x54))(&ppppuStack_2c);
      (**(code **)(*piVar4 + 0x84))(0);
      (**(code **)(*piVar4 + 0x5c))(1,this,0);
      (**(code **)(*piVar4 + 100))
                (2,*(undefined4 *)(*(int *)((int)this + 0x3c8) + -4),-_DAT_00e5a3bc);
      (**(code **)(*(int *)this + 0xc))(piVar4,1);
      (**(code **)(*(int *)((int)this + 0x400) + 4))();
      *(int **)((int)this + 0x414) = piVar4;
      (*(code *)**(undefined4 **)((int)this + 0x400))();
      _Memory = (undefined4 ****)ppppuStack_2c;
      if (10 < uStack_24) goto LAB_007b2f33;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007b2f60 @ 007b2f60 ////

int * __thiscall FUN_007b2f60(void *this,undefined4 param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cddd78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007acf80(this,param_1,(int)param_2,param_3);
  *(undefined ***)this = &PTR_FUN_00d54ce4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d54cc8;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 **)((int)this + 0x38c) = (undefined4 *)((int)this + 0x380);
  *(undefined4 *)((int)this + 0x380) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 **)((int)this + 0x3a4) = (undefined4 *)((int)this + 0x398);
  *(undefined4 *)((int)this + 0x398) = &PTR_LAB_00d5436c;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 **)((int)this + 0x3dc) = (undefined4 *)((int)this + 0x3d0);
  *(undefined4 *)((int)this + 0x3d0) = &PTR_LAB_00d5437c;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 **)((int)this + 0x3f4) = (undefined4 *)((int)this + 1000);
  *(undefined4 *)((int)this + 1000) = &PTR_LAB_00d5438c;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined4 **)((int)this + 0x40c) = (undefined4 *)((int)this + 0x400);
  *(undefined4 *)((int)this + 0x400) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 **)((int)this + 0x424) = (undefined4 *)((int)this + 0x418);
  *(undefined4 *)((int)this + 0x418) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x42c) = 0;
  local_4 = 8;
  *(undefined1 *)((int)this + 0x430) = 0;
  if (param_2 != (int *)0x0) {
    iVar1 = FUN_00ace790(param_2,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                         &TM::CProjectObject::RTTI_Type_Descriptor,0);
    if (iVar1 != 0) {
      pwVar2 = (wchar_t *)FUN_005d1940(iVar1);
      piVar3 = (int *)FUN_005b22a0((int)pwVar2);
      FUN_007b0810(this,pwVar2);
      iVar1 = (**(code **)(*piVar3 + 0x24))();
      if (iVar1 == 2) {
        *(undefined1 *)((int)this + 0x430) = 1;
        FUN_007b2ac0(this,(int)pwVar2);
      }
      else {
        FUN_007b0920(this,(int)pwVar2);
        FUN_007b2900(this,(int)pwVar2);
        FUN_007b1680(this,(int)pwVar2);
        FUN_007b09e0(this,(int)pwVar2);
      }
    }
  }
  FUN_007acb90(this);
  piVar3 = *(int **)((int)this + 0x394);
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    fVar4 = FUN_0073e630((int)this);
    fVar5 = (float10)(**(code **)(*piVar3 + 0x10))();
    (**(code **)(iVar1 + 0x5c))(1,this,(float)(((float10)(float)fVar4 - fVar5) * (float10)0.5));
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007b3320 @ 007b3320 ////

void __fastcall FUN_007b3320(int *param_1)

{
  FUN_005e6f20((undefined4 *)param_1[0x116]);
  FUN_0073fb40(param_1);
  return;
}


//// FUNCTION FUN_007b3340 @ 007b3340 ////

uint FUN_007b3340(void *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x24))();
  if (iVar1 == 4) {
    uVar2 = FUN_005b20f0(param_1,'\x01');
    if ((char)uVar2 == '\0') {
      return uVar2;
    }
  }
  iVar1 = (**(code **)(*param_2 + 0x24))();
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 7);
}


//// FUNCTION FUN_007b3380 @ 007b3380 ////

void __fastcall FUN_007b3380(int param_1)

{
  int iVar1;
  void *this;
  float *pfVar2;
  float local_4;
  
  if ((*(int *)(param_1 + 0x394) != 0) && (*(int *)(param_1 + 0x450) != 0)) {
    iVar1 = FUN_005d1940(*(int *)(param_1 + 0x450));
    if (iVar1 != 0) {
      pfVar2 = &local_4;
      this = (void *)FUN_005d1940(*(int *)(param_1 + 0x450));
      FUN_005b27d0(this,pfVar2);
    }
    FUN_005e7160(*(undefined4 **)(param_1 + 0x458));
  }
  return;
}


//// FUNCTION FUN_007b33e0 @ 007b33e0 ////

void __fastcall FUN_007b33e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  
  if (*(int *)(param_1 + 0x450) != 0) {
    uStack_54 = 0x7b33fc;
    iVar2 = FUN_005d1940(*(int *)(param_1 + 0x450));
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x3ac) != 0)) {
      uStack_54 = 0x7b3413;
      piVar3 = (int *)FUN_005b22a0(iVar2);
      iVar1 = **(int **)(param_1 + 0x3ac);
      uStack_54 = 1;
      (**(code **)(*piVar3 + 0x38))(auStack_58);
      (**(code **)(iVar1 + 0x10c))();
      pvVar4 = (void *)FUN_005b25c0(iVar2);
      if (pvVar4 != (void *)0x0) {
        pvVar4 = FUN_004d72f0(pvVar4,&stack0xffffffb8);
        iVar2 = *(int *)((int)pvVar4 + 0x38);
        FUN_00526bb0((undefined4 *)&stack0xffffffb8);
        if (iVar2 == 1) {
          (**(code **)(**(int **)(param_1 + 0x3ac) + 0x20))(1);
          return;
        }
        (**(code **)(**(int **)(param_1 + 0x3ac) + 0x20))(0);
      }
    }
  }
  return;
}


//// FUNCTION FUN_007b3490 @ 007b3490 ////

void __fastcall FUN_007b3490(int *param_1)

{
  undefined4 *puVar1;
  void *unaff_EBX;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdddbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x3fc);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00833290(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(param_1[0x109] + 4))();
  param_1[0x10e] = (int)puVar2;
  (**(code **)param_1[0x109])();
  (**(code **)(*param_1 + 0xc))(param_1[0x10e],1);
  *(undefined1 *)(param_1 + 0x115) = 1;
  ExceptionList = unaff_EBX;
  return;
}


//// FUNCTION FUN_007b3520 @ 007b3520 ////

float10 __fastcall FUN_007b3520(int param_1)

{
  float10 fVar1;
  undefined4 local_4;
  
  local_4 = 100.0;
  if (*(int **)(param_1 + 0x408) != (int *)0x0) {
    fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x408) + 0x10))();
    if ((float10)100.0 <= fVar1) {
      fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x408) + 0x10))();
      local_4 = (float)fVar1;
    }
  }
  if (*(int **)(param_1 + 0x3ac) != (int *)0x0) {
    fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x3ac) + 0x10))();
    if ((float10)local_4 <= fVar1) {
      fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x3ac) + 0x10))();
      local_4 = (float)fVar1;
    }
  }
  if (*(int **)(param_1 + 0x3f0) != (int *)0x0) {
    fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x3f0) + 0x10))();
    if ((float10)local_4 <= fVar1) {
      fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x3f0) + 0x10))();
      local_4 = (float)fVar1;
    }
  }
  if (*(int **)(param_1 + 0x420) != (int *)0x0) {
    fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x420) + 0x10))();
    if ((float10)local_4 <= fVar1) {
      fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x420) + 0x10))();
      local_4 = (float)fVar1;
    }
  }
  if (*(int **)(param_1 + 0x438) != (int *)0x0) {
    fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x438) + 0x10))();
    if ((float10)local_4 <= fVar1) {
      fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x438) + 0x10))();
      return fVar1;
    }
  }
  return (float10)local_4;
}


//// FUNCTION FUN_007b3610 @ 007b3610 ////

void __fastcall FUN_007b3610(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  fVar6 = 0.0;
  *(undefined1 *)((int)param_1 + 0x37d) = 1;
  (**(code **)(*param_1 + 0x84))(0);
  *(undefined1 *)((int)param_1 + 0x37d) = 0;
  fVar4 = FUN_007b3520((int)param_1);
  piVar3 = (int *)param_1[0xe5];
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    fVar5 = (float10)(**(code **)(iVar1 + 0x10))();
    (**(code **)(iVar1 + 0x5c))(1,param_1,(float)(((float10)(float)fVar4 - fVar5) * (float10)0.5));
  }
  if ((int *)param_1[0xfc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xfc] + 100))(2,piVar3,DAT_00e5a594);
    iVar1 = *(int *)param_1[0xfc];
    fVar5 = (float10)(**(code **)(iVar1 + 0x10))();
    (**(code **)(iVar1 + 0x5c))(1,param_1,(float)(((float10)fVar6 - fVar5) * (float10)0.5));
    piVar3 = (int *)param_1[0xfc];
  }
  if ((int *)param_1[0x102] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x102] + 100))(2,piVar3,DAT_00e5a598);
    iVar1 = *(int *)param_1[0x102];
    fVar5 = (float10)(**(code **)(iVar1 + 0x10))();
    (**(code **)(iVar1 + 0x5c))(1,param_1,(float)(((float10)fVar6 - fVar5) * (float10)0.5));
    piVar3 = (int *)param_1[0x102];
  }
  if ((int *)param_1[0xeb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xeb] + 100))(2,piVar3,0);
    iVar1 = *(int *)param_1[0xeb];
    fVar5 = (float10)(**(code **)(iVar1 + 0x10))();
    (**(code **)(iVar1 + 0x5c))(1,param_1,(float)(((float10)fVar6 - fVar5) * (float10)0.5));
    piVar3 = (int *)param_1[0xeb];
  }
  if ((int *)param_1[0x108] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x108] + 100))(2,piVar3,0);
    iVar1 = *(int *)param_1[0x108];
    fVar5 = (float10)(**(code **)(iVar1 + 0x10))();
    (**(code **)(iVar1 + 0x5c))(1,param_1,(float)(((float10)fVar6 - fVar5) * (float10)0.5));
    piVar3 = (int *)param_1[0x108];
  }
  if ((int *)param_1[0x10e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10e] + 100))(2,piVar3,0xc0a00000);
    iVar1 = *(int *)param_1[0x10e];
    fVar5 = (float10)(**(code **)(iVar1 + 0x10))();
    (**(code **)(iVar1 + 0x5c))(1,param_1,(float)(((float10)fVar6 - fVar5) * (float10)0.5));
  }
  (**(code **)(*param_1 + 0x78))((float)fVar4);
  do {
    cVar2 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar2 != '\0');
  *(undefined1 *)(param_1 + 0x115) = 0;
  return;
}


//// FUNCTION FUN_007b37d0 @ 007b37d0 ////

void FUN_007b37d0(void *param_1)

{
  uint uVar1;
  size_t sVar2;
  wchar_t *local_2c;
  size_t local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdddd8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = L'\0';
  local_28 = 0;
  local_24 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_00444a70((uint *)&stack0x00000008,&local_2c);
  uVar1 = FUN_00ace02d(L"<table><tr><td><nobr><x2><phrasebook>");
  FUN_004036d0(param_1,L"<table><tr><td><nobr><x2><phrasebook>",uVar1);
  sVar2 = FUN_00ace02d(L"<translate>SITT_PROJECT_STATS_INCOME</translate>");
  FUN_0040cae0(param_1,L"<translate>SITT_PROJECT_STATS_INCOME</translate>",sVar2);
  sVar2 = FUN_00ace02d(L"<phrase key=REVENUE>");
  FUN_0040cae0(param_1,L"<phrase key=REVENUE>",sVar2);
  FUN_0040cae0(param_1,local_2c,local_28);
  sVar2 = FUN_00ace02d(L"</phrase></phrasebook></x2></nobr></td></tr></table>");
  FUN_0040cae0(param_1,L"</phrase></phrasebook></x2></nobr></td></tr></table>",sVar2);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007b38c0 @ 007b38c0 ////

void __thiscall FUN_007b38c0(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  ulonglong *puVar2;
  undefined *local_54;
  longlong *plVar3;
  undefined *local_44;
  undefined4 local_40;
  ulonglong local_3c;
  longlong local_34;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdddf8;
  local_c = ExceptionList;
  if ((*(int *)((int)this + 0x438) != 0) && (param_1 != 0)) {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 10;
    local_4 = 0;
    ExceptionList = &local_c;
    iVar1 = FUN_005b2bc0(param_1);
    if (iVar1 == 0) {
      local_3c = FUN_00acd42c();
      FUN_00471b10((longlong *)&local_3c);
      puVar2 = &local_3c;
    }
    else {
      plVar3 = &local_34;
      local_54 = (undefined *)0x7b3934;
      this_00 = (void *)FUN_005b2bc0(param_1);
      local_54 = (undefined *)0x7b393b;
      puVar2 = (ulonglong *)FUN_005cd100(this_00,plVar3);
    }
    local_44 = *(undefined **)puVar2;
    local_40 = *(undefined4 *)((int)puVar2 + 4);
    FUN_00471b10((longlong *)&local_44);
    local_54 = local_44;
    FUN_00471b10((longlong *)&local_54);
    FUN_007b37d0(&local_2c);
    local_54 = (undefined *)0x7b39aa;
    (**(code **)(**(int **)((int)this + 0x438) + 0x54))();
    local_54 = (undefined *)0x0;
    (**(code **)(**(int **)((int)this + 0x438) + 0x84))();
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      local_54 = &UNK_007b39cb;
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007b39f0 @ 007b39f0 ////

void __thiscall FUN_007b39f0(void *this,int param_1)

{
  void *this_00;
  size_t sVar1;
  undefined4 *puVar2;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdde18;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    this_00 = (void *)FUN_005b2770(param_1);
    if (this_00 != (void *)0x0) {
      sVar1 = FUN_00ace02d(L"<nobr><font size=12>");
      FUN_0040cae0(&local_4c,L"<nobr><font size=12>",sVar1);
      puVar2 = FUN_00449f50(this_00,local_2c);
      FUN_0040cae0(&local_4c,(wchar_t *)*puVar2,puVar2[1]);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      sVar1 = FUN_00ace02d(L"</font></nobr>");
      FUN_0040cae0(&local_4c,L"</font></nobr>",sVar1);
    }
    (**(code **)(**(int **)((int)this + 0x3f0) + 0x54))(&local_4c);
    (**(code **)(**(int **)((int)this + 0x3f0) + 0x84))(0);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007b3b00 @ 007b3b00 ////

void __thiscall FUN_007b3b00(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  size_t sVar3;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [8];
  void *pvStack_30;
  undefined1 local_2c [4];
  uint uStack_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdde38;
  local_c = ExceptionList;
  if (param_1 != (int *)0x0) {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4 = 0;
    ExceptionList = &local_c;
    uVar1 = FUN_00ace02d(L"<nobr><x6>");
    FUN_004036d0(&local_4c,L"<nobr><x6>",uVar1);
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x2c))(local_2c);
    FUN_0040cae0(&stack0xffffffb0,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_30);
    }
    sVar3 = FUN_00ace02d(L"</x6></nobr>");
    FUN_0040cae0(&stack0xffffffb0,L"</x6></nobr>",sVar3);
    (**(code **)(**(int **)((int)this + 0x408) + 0x54))(&stack0xffffffb0);
    (**(code **)(**(int **)((int)this + 0x408) + 0x84))(0);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007b3c00 @ 007b3c00 ////

void FUN_007b3c00(undefined4 *param_1,undefined1 *param_2,int param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  uint uVar10;
  int iVar11;
  char *pcStack_1b0;
  undefined4 uStack_1ac;
  uint uStack_1a8;
  char acStack_1a4 [20];
  uint local_190;
  int local_18c;
  char *pcStack_188;
  undefined4 uStack_184;
  uint uStack_180;
  char acStack_17c [16];
  undefined4 uStack_16c;
  void *apvStack_168 [2];
  uint uStack_160;
  void *apvStack_12c [2];
  uint uStack_124;
  void *apvStack_10c [2];
  uint uStack_104;
  void *apvStack_ec [2];
  uint uStack_e4;
  void *apvStack_cc [2];
  uint uStack_c4;
  void *apvStack_ac [2];
  uint uStack_a4;
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cddec6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = 0;
  *(undefined2 *)*param_1 = 0;
  local_190 = 0;
  cVar2 = (**(code **)(*param_4 + 0x28))();
  if ((cVar2 != '\0') &&
     ((iVar3 = (**(code **)(*param_4 + 0x24))(), iVar3 != 5 || (*(char *)(param_3 + 0x364) == '\0'))
     )) {
    *param_2 = 0;
    uVar4 = (**(code **)(*param_4 + 0x24))();
    switch(uVar4) {
    case 2:
      FUN_00401de0(&pcStack_1b0,"PHASE_WRITING_ADVANCE",0xffffffff);
      uStack_4 = 1;
      puVar5 = FUN_009b5030(apvStack_4c,&pcStack_1b0);
      FUN_00403e70(param_1,puVar5);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
      if (uStack_1a8 < 0x15) {
        ExceptionList = pvStack_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(pcStack_1b0);
    case 3:
      FUN_00401de0(&pcStack_188,"PHASE_DESIGN_ADVANCE",0xffffffff);
      uStack_4 = 0;
      puVar5 = FUN_009b5030(apvStack_ac,&pcStack_188);
      FUN_00403e70(param_1,puVar5);
      if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_ac[0]);
      }
      if (uStack_180 < 0x15) {
        ExceptionList = pvStack_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(pcStack_188);
    case 4:
      goto switchD_007b3c89_caseD_4;
    case 5:
      FUN_00401de0(apvStack_ec,"PHASE_SHOOTING_ADVANCE",0xffffffff);
      uStack_4 = 3;
      puVar5 = FUN_009b5030(apvStack_12c,apvStack_ec);
      FUN_00403e70(param_1,puVar5);
      if (10 < uStack_124) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_12c[0]);
      }
      if (uStack_e4 < 0x15) {
        ExceptionList = pvStack_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(apvStack_ec[0]);
    case 6:
      FUN_00401de0(apvStack_10c,"PHASE_READYFORRELEASE",0xffffffff);
      uStack_4 = 4;
      puVar5 = FUN_009b5030(apvStack_168,apvStack_10c);
      FUN_00403e70(param_1,puVar5);
      if (10 < uStack_160) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_168[0]);
      }
      if (uStack_104 < 0x15) {
        ExceptionList = pvStack_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(apvStack_10c[0]);
    default:
      ExceptionList = pvStack_c;
      return;
    }
  }
  iVar3 = (**(code **)(*param_4 + 0x24))();
  if (iVar3 == 7) {
    iVar3 = FUN_005b2bc0(param_3);
    if (iVar3 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    iVar3 = FUN_005b2bc0(param_3);
    uVar4 = FUN_005ccce0(iVar3);
    if ((char)uVar4 == '\0') {
      ExceptionList = pvStack_c;
      return;
    }
    pcStack_1b0 = acStack_1a4;
    *param_2 = 1;
    acStack_1a4[0] = '\0';
    uStack_1ac = 0;
    uStack_1a8 = 0x20;
    pcStack_1b0 = _malloc(0x20);
    _strncpy(pcStack_1b0,"PROJECT_PHASE_RELEASE_ARCHIVE",0x1d);
    uStack_1ac = 0x1d;
    pcStack_1b0[0x1d] = '\0';
    uStack_4 = 5;
    puVar5 = FUN_009b5030(apvStack_168,&pcStack_1b0);
    FUN_004036d0(param_1,(wchar_t *)*puVar5,puVar5[1]);
LAB_007b403d:
    if (10 < uStack_160) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_168[0]);
    }
    if (uStack_1a8 < 0x15) {
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1b0);
  }
  if (*(char *)(param_3 + 0x364) != '\0') {
    *param_2 = 1;
    iVar3 = (**(code **)(*param_4 + 0x24))();
    if (iVar3 == 4) {
      pcStack_188 = acStack_17c;
      acStack_17c[0] = '\0';
      uStack_184 = 0;
      uStack_180 = 0x20;
      pcStack_188 = _malloc(0x20);
      _strncpy(pcStack_188,"PHASE_PREPROD_STALLED",0x15);
      uStack_184 = 0x15;
      pcStack_188[0x15] = '\0';
      uStack_4 = 6;
      puVar5 = FUN_009b5030(apvStack_12c,&pcStack_188);
      FUN_00403e70(param_1,puVar5);
      if (10 < uStack_124) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_12c[0]);
      }
      if (uStack_180 < 0x15) {
        ExceptionList = pvStack_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(pcStack_188);
    }
    if (iVar3 != 5) {
      ExceptionList = pvStack_c;
      return;
    }
    pcStack_1b0 = acStack_1a4;
    acStack_1a4[0] = '\0';
    uStack_1ac = 0;
    uStack_1a8 = 0x20;
    pcStack_1b0 = _malloc(0x20);
    _strncpy(pcStack_1b0,"PHASE_SHOOTING_STALLED",0x16);
    uStack_1ac = 0x16;
    pcStack_1b0[0x16] = '\0';
    uStack_4 = 7;
    puVar5 = FUN_009b5030(apvStack_168,&pcStack_1b0);
    FUN_00403e70(param_1,puVar5);
    goto LAB_007b403d;
  }
  iVar3 = (**(code **)(*param_4 + 0x1c))(apvStack_168);
  iVar3 = *(int *)(iVar3 + 0x38);
  FUN_00526bb0(apvStack_168);
  if (iVar3 == 2) {
    ExceptionList = pvStack_c;
    return;
  }
  iVar3 = (**(code **)(*param_4 + 0x1c))(apvStack_168);
  iVar3 = *(int *)(iVar3 + 0x38);
  FUN_00526bb0(&uStack_16c);
  if (iVar3 == 3) {
    *(undefined1 *)param_1 = 1;
    iVar3 = (**(code **)(*param_4 + 0x24))();
    if (iVar3 != 2) {
      ExceptionList = pvStack_c;
      return;
    }
    FUN_00401de0(apvStack_10c,"PROJECT_PHASE_WRITING_ONHOLD",0xffffffff);
    uStack_4 = 8;
    puVar5 = FUN_009b5030(apvStack_168,apvStack_10c);
    FUN_00403e70(param_1,puVar5);
    if (uStack_160 < 0xb) {
      if (uStack_104 < 0x15) {
        ExceptionList = pvStack_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(apvStack_10c[0]);
    }
                    /* WARNING: Subroutine does not return */
    _free(apvStack_168[0]);
  }
  iVar3 = (**(code **)(*param_4 + 0x24))();
  if (iVar3 == 5) {
    iVar3 = (**(code **)(*param_4 + 0x1c))(apvStack_168);
    uVar10 = 1;
    if (*(int *)(iVar3 + 0x38) == 1) {
      bVar1 = true;
      goto LAB_007b421c;
    }
  }
  else {
    uVar10 = local_190 & 0xff;
  }
  bVar1 = false;
LAB_007b421c:
  if ((uVar10 & 1) != 0) {
    FUN_00526bb0(apvStack_168);
  }
  if (!bVar1) {
    ExceptionList = pvStack_c;
    return;
  }
  *param_2 = 0;
  iVar6 = FUN_005d1940(*(int *)(local_18c + 0x450));
  iVar7 = FUN_004013f0(iVar6 + 0xa4);
  iVar8 = FUN_005b25d0(iVar6);
  iVar11 = 1;
  for (iVar3 = *(int *)(iVar6 + 0xac); (iVar3 != iVar6 + 0xb8 && (iVar8 != *(int *)(iVar3 + 8)));
      iVar3 = *(int *)(iVar3 + 4)) {
    iVar11 = iVar11 + 1;
  }
  uVar10 = FUN_00ace02d(L"<phrasebook><translate>SITT_PROJECT_SHOT</translate>");
  FUN_004036d0(param_1,L"<phrasebook><translate>SITT_PROJECT_SHOT</translate>",uVar10);
  sVar9 = FUN_00ace02d(L"<phrase key=CURRENT>");
  FUN_0040cae0(param_1,L"<phrase key=CURRENT>",sVar9);
  puVar5 = FUN_00569d60(apvStack_12c,iVar11);
  uStack_4 = 9;
  puVar5 = FUN_00568790(apvStack_168,puVar5);
  FUN_0040cae0(param_1,(wchar_t *)*puVar5,puVar5[1]);
  if (10 < uStack_160) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_168[0]);
  }
  uStack_4 = 0xffffffff;
  if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_12c[0]);
  }
  sVar9 = FUN_00ace02d(L"</phrase>");
  FUN_0040cae0(param_1,L"</phrase>",sVar9);
  sVar9 = FUN_00ace02d(L"<phrase key=TOTAL>");
  FUN_0040cae0(param_1,L"<phrase key=TOTAL>",sVar9);
  puVar5 = FUN_00569d60(apvStack_2c,iVar7);
  uStack_4 = 10;
  puVar5 = FUN_00568790(apvStack_6c,puVar5);
  FUN_0040cae0(param_1,(wchar_t *)*puVar5,puVar5[1]);
  if (uStack_64 < 0xb) {
    if (uStack_24 < 0x15) {
      sVar9 = FUN_00ace02d(L"</phrase>");
      FUN_0040cae0(param_1,L"</phrase>",sVar9);
      sVar9 = FUN_00ace02d(L"</phrasebook>");
      FUN_0040cae0(param_1,L"</phrasebook>",sVar9);
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_6c[0]);
switchD_007b3c89_caseD_4:
  iVar3 = FUN_00ace790(param_4,0,&TM::CPhaseBase::RTTI_Type_Descriptor,
                       &TM::CPhasePreProduction::RTTI_Type_Descriptor,0);
  if (iVar3 == 0) {
    ExceptionList = pvStack_c;
    return;
  }
  uVar10 = FUN_005aaff0(iVar3);
  if ((char)uVar10 == '\0') {
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00401de0(apvStack_cc,"PHASE_PREPROD_ADVANCE",0xffffffff);
  uStack_4 = 2;
  puVar5 = FUN_009b5030(apvStack_8c,apvStack_cc);
  FUN_00403e70(param_1,puVar5);
  if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_8c[0]);
  }
  if (uStack_c4 < 0x15) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_cc[0]);
}


//// FUNCTION FUN_007b4430 @ 007b4430 ////

void __fastcall FUN_007b4430(undefined4 *param_1)

{
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cddf1e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d552cc;
  param_1[0x14] = &PTR_LAB_00d552b0;
  _Memory = (int *)param_1[0x116];
  local_4 = 5;
  if (_Memory != (int *)0x0) {
    FUN_005e7000(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0x10f] = &PTR_FUN_00d29d20;
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
  param_1[0x109] = &PTR_FUN_00d195f8;
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
  param_1[0x103] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x105] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x105] = param_1[0x104];
  }
  if (param_1[0x104] != 0) {
    *(undefined4 *)(param_1[0x104] + 4) = param_1[0x105];
  }
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x108] = 0;
  if ((undefined4 *)param_1[0x105] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x105] = param_1[0x104];
  }
  if (param_1[0x104] != 0) {
    *(undefined4 *)(param_1[0x104] + 4) = param_1[0x105];
  }
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0xfd] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xff] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xff] = param_1[0xfe];
  }
  if (param_1[0xfe] != 0) {
    *(undefined4 *)(param_1[0xfe] + 4) = param_1[0xff];
  }
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x102] = 0;
  if ((undefined4 *)param_1[0xff] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xff] = param_1[0xfe];
  }
  if (param_1[0xfe] != 0) {
    *(undefined4 *)(param_1[0xfe] + 4) = param_1[0xff];
  }
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
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
  local_4 = 0xffffffff;
  FUN_007bbf80(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007b46d0 @ 007b46d0 ////

void __thiscall FUN_007b46d0(void *this,int param_1,int *param_2)

{
  uint uVar1;
  size_t sVar2;
  void *unaff_ESI;
  wchar_t *pwVar3;
  undefined4 uStack_50;
  undefined2 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40 [4];
  void *pvStack_38;
  uint uStack_30;
  wchar_t *local_2c;
  size_t local_28;
  undefined4 local_24;
  wchar_t local_20 [4];
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cddf40;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = L'\0';
  local_28 = 0;
  local_24 = 10;
  local_4 = 0;
  uStack_50 = CONCAT13(1,(undefined3)uStack_50);
  ExceptionList = &pvStack_c;
  FUN_007b3c00(&local_2c,(undefined1 *)((int)&uStack_50 + 3),param_1,param_2);
  if (local_28 == 0) {
    (**(code **)(**(int **)((int)this + 0x420) + 0x20))(0);
  }
  else {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4 = CONCAT31(local_4._1_3_,1);
    if (uStack_50._3_1_ == '\0') {
      uVar1 = FUN_00ace02d(L"<nobr><x6>");
      FUN_004036d0(&local_4c,L"<nobr><x6>",uVar1);
      FUN_0040cae0(&local_4c,local_2c,local_28);
      sVar2 = FUN_00ace02d(L"</x6></nobr>");
      pwVar3 = L"</x6></nobr>";
    }
    else {
      uVar1 = FUN_00ace02d(L"<nobr><x6><font color=#ff0000>");
      FUN_004036d0(&local_4c,L"<nobr><x6><font color=#ff0000>",uVar1);
      FUN_0040cae0(&local_4c,local_2c,local_28);
      sVar2 = FUN_00ace02d(L"</font></x6></nobr>");
      pwVar3 = L"</font></x6></nobr>";
    }
    FUN_0040cae0(&local_4c,pwVar3,sVar2);
    (**(code **)(**(int **)((int)this + 0x420) + 0x20))(1);
    (**(code **)(**(int **)((int)this + 0x420) + 0x54))(&uStack_50);
    (**(code **)(**(int **)((int)this + 0x420) + 0x84))(0);
    if (10 < uStack_50) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_ESI);
    }
  }
  if (10 < uStack_30) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_38);
  }
  ExceptionList = pvStack_18;
  return;
}


//// FUNCTION FUN_007b4860 @ 007b4860 ////

void __fastcall FUN_007b4860(int *param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  uint uStack_4;
  
  if (((param_1[0x114] != 0) &&
      (pvVar1 = (void *)FUN_005d1940(param_1[0x114]), pvVar1 != (void *)0x0)) &&
     (piVar2 = (int *)FUN_005b22a0((int)pvVar1), piVar2 != (int *)0x0)) {
    if ((param_1[0x10e] == 0) && (iVar3 = (**(code **)(*piVar2 + 0x24))(), 6 < iVar3)) {
      FUN_007b3490(param_1);
    }
    if (param_1[0xeb] != 0) {
      uStack_4 = FUN_007b3340(pvVar1,piVar2);
      uStack_4 = uStack_4 & 0xff;
      (**(code **)(*(int *)param_1[0xeb] + 0x20))(uStack_4);
    }
    FUN_007b39f0(param_1,(int)pvVar1);
    FUN_007b3b00(param_1,piVar2);
    FUN_007b46d0(param_1,(int)pvVar1,piVar2);
    FUN_007b38c0(param_1,(int)pvVar1);
  }
  return;
}


//// FUNCTION FUN_007b4900 @ 007b4900 ////

int * __thiscall
FUN_007b4900(void *this,undefined4 param_1,undefined4 param_2,int *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  void *this_00;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cddfd5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007bbb10(this,param_1,param_2,param_3,param_4);
  piVar1 = (int *)((int)this + 0x3dc);
  puVar7 = (undefined4 *)0x0;
  *(undefined ***)this = &PTR_FUN_00d552cc;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d552b0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(int **)((int)this + 1000) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 **)((int)this + 0x400) = (undefined4 *)((int)this + 0x3f4);
  *(undefined4 *)((int)this + 0x3f4) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined4 **)((int)this + 0x418) = (undefined4 *)((int)this + 0x40c);
  *(undefined4 *)((int)this + 0x40c) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 **)((int)this + 0x430) = (undefined4 *)((int)this + 0x424);
  *(undefined4 *)((int)this + 0x424) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x438) = 0;
  piVar5 = (int *)((int)this + 0x43c);
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(int **)((int)this + 0x448) = piVar5;
  *piVar5 = (int)&PTR_FUN_00d29d20;
  *(undefined4 *)((int)this + 0x450) = 0;
  local_4._0_1_ = 5;
  local_4._1_3_ = 0;
  *(undefined1 *)((int)this + 0x454) = 1;
  iVar2 = FUN_00ace790(param_3,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  (**(code **)(*piVar5 + 4))();
  *(int *)((int)this + 0x450) = iVar2;
  (**(code **)*piVar5)();
  iVar2 = FUN_008819d0(*(void **)(*(int *)((int)this + 0x394) + 0x358),"fg");
  if (iVar2 != 0) {
    pvVar3 = operator_new(0x34);
    local_4._0_1_ = 6;
    if (pvVar3 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      iVar2 = *(int *)(*(int *)((int)this + 0x394) + 0x358);
      iVar8 = 1;
      iVar4 = FUN_005d1940(*(int *)((int)this + 0x450));
      this_00 = (void *)FUN_007ef840();
      iVar4 = FUN_007f05b0(this_00,iVar4);
      piVar5 = FUN_005e7240(pvVar3,iVar2,iVar4,iVar8);
    }
    local_4._0_1_ = 5;
    *(int **)((int)this + 0x458) = piVar5;
    FUN_007b3380((int)this);
  }
  puVar6 = operator_new(0x3fc);
  local_4._0_1_ = 7;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_00833290(puVar6);
  }
  local_4._0_1_ = 5;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x3f0) = puVar6;
  (**(code **)*piVar1)();
  FUN_0073f6e0(this,*(int **)((int)this + 0x3f0));
  puVar6 = operator_new(0x3fc);
  local_4._0_1_ = 8;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_00833290(puVar6);
  }
  local_4._0_1_ = 5;
  (**(code **)(*(int *)((int)this + 0x3f4) + 4))();
  *(undefined4 **)((int)this + 0x408) = puVar6;
  (*(code *)**(undefined4 **)((int)this + 0x3f4))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x408));
  pvVar3 = operator_new(0x480);
  local_4._0_1_ = 9;
  if (pvVar3 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_007ac3f0(pvVar3,3,0,0);
  }
  local_4._0_1_ = 5;
  (**(code **)(*(int *)((int)this + 0x398) + 4))();
  *(undefined4 **)((int)this + 0x3ac) = puVar6;
  (*(code *)**(undefined4 **)((int)this + 0x398))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x3ac));
  puVar6 = operator_new(0x3fc);
  local_4._0_1_ = 10;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = FUN_00833290(puVar6);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  (**(code **)(*(int *)((int)this + 0x40c) + 4))();
  *(undefined4 **)((int)this + 0x420) = puVar7;
  (*(code *)**(undefined4 **)((int)this + 0x40c))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x420));
  FUN_007b4860(this);
  FUN_007b33e0((int)this);
  FUN_007b3610(this);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007b4c10 @ 007b4c10 ////

undefined4 * __thiscall FUN_007b4c10(void *this,byte param_1)

{
  FUN_007b4430(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007b4c30 @ 007b4c30 ////

void __fastcall FUN_007b4c30(int *param_1)

{
  FUN_007b4860(param_1);
  FUN_007b3610(param_1);
  FUN_007bbac0(param_1);
  return;
}


//// FUNCTION WToolTipProjectShootSchedule_Tick @ 007b4c80 ////

void __fastcall WToolTipProjectShootSchedule_Tick(int *param_1)

{
  WWindow_Tick(param_1);
  (**(code **)(*param_1 + 0x84))(0);
  return;
}


//// FUNCTION FUN_007b4ca0 @ 007b4ca0 ////

int __fastcall FUN_007b4ca0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007b4de0 @ 007b4de0 ////

int * __thiscall FUN_007b4de0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007b4e10 @ 007b4e10 ////

undefined4 * __cdecl FUN_007b4e10(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007b4e50 @ 007b4e50 ////

void __thiscall FUN_007b4e50(void *this,int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x5c))(1,this,0);
    pvVar2 = *(void **)((int)this + 0x3a8);
    if (pvVar2 == (void *)0x0) {
      uVar1 = 1;
      pvVar2 = this;
    }
    else {
      uVar1 = 2;
    }
    (**(code **)(*param_1 + 100))(uVar1,pvVar2,0);
    (**(code **)(*(int *)this + 0xc))(param_1,1);
    (**(code **)(*(int *)((int)this + 0x394) + 4))();
    *(int **)((int)this + 0x3a8) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0x394))();
  }
  return;
}


//// FUNCTION FUN_007b4eb0 @ 007b4eb0 ////

void __fastcall FUN_007b4eb0(void *param_1)

{
  undefined4 *puVar1;
  void *unaff_ESI;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cddfeb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x344);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = FUN_007432f0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x7c))(0x41200000);
  (**(code **)(*piVar2 + 0x78))(0x41200000);
  FUN_007b4e50(param_1,piVar2);
  ExceptionList = unaff_ESI;
  return;
}


//// FUNCTION FUN_007b4f30 @ 007b4f30 ////

void __fastcall FUN_007b4f30(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x388);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x374) + 4))();
    *(undefined4 *)(param_1 + 0x388) = 0;
                    /* WARNING: Could not recover jumptable at 0x007b4f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(param_1 + 0x374))();
    return;
  }
  return;
}


//// FUNCTION FUN_007b5070 @ 007b5070 ////

void __cdecl FUN_007b5070(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_007b50d0 @ 007b50d0 ////

void __cdecl FUN_007b50d0(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  void *this;
  int *piVar7;
  undefined1 local_2d;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_004df4b0(param_1);
  piVar3 = FUN_004e03a0(param_1);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_004df220(param_1);
  }
  local_2d = 0;
  iVar4 = FUN_004cba90((int)piVar3);
  if (iVar4 == 0) {
    this = (void *)FUN_005295b0(piVar3);
    if (this != (void *)0x0) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"set",3);
      local_28 = 3;
      local_2c[3] = '\0';
      local_4 = 0;
      piVar7 = (int *)FUN_00938a70(this,&local_2c);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      iVar2 = FUN_00ace790(piVar7,0,&TM::TMRoom::RTTI_Type_Descriptor,
                           &TM::CRehearseRoom::RTTI_Type_Descriptor,0);
      if (iVar2 != 0) {
        iVar2 = FUN_0093d320(iVar2);
        if (0 < iVar2) {
          pwVar6 = L"SITT_PROJECT_SHOOTSCHEDULE_SETINUSEREHEARSE";
          goto LAB_007b5230;
        }
      }
      cVar1 = (**(code **)(*piVar3 + 0xc4))();
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*piVar3 + 0x164))();
        pwVar6 = L"SITT_PROJECT_SHOOTSCHEDULE_SETHIDDEN";
        if (cVar1 == '\0') {
          pwVar6 = L"SITT_PROJECT_SHOOTSCHEDULE_SETKNACKERED";
        }
        goto LAB_007b5230;
      }
    }
    if (piVar3[0xae] == 5) {
      pwVar6 = L"SITT_PROJECT_SHOOTSCHEDULE_SETNOTINUSE";
      goto LAB_007b5235;
    }
    pwVar6 = L"SITT_PROJECT_SHOOTSCHEDULE_SETNOTBUILT";
  }
  else {
    iVar5 = FUN_004df4b0(iVar4);
    if (iVar5 == iVar2) {
      if (iVar4 == param_1) {
        pwVar6 = L"SITT_PROJECT_SHOOTSCHEDULE_FILMINGSHOT";
      }
      else {
        pwVar6 = (wchar_t *)&lpCaption_00d16918;
      }
      goto LAB_007b5235;
    }
    pwVar6 = L"SITT_PROJECT_SHOOTSCHEDULE_SETINUSE";
  }
LAB_007b5230:
  local_2d = 1;
LAB_007b5235:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pwVar6;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = local_2d;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007b5310 @ 007b5310 ////

void __fastcall FUN_007b5310(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d55614;
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


//// FUNCTION FUN_007b5410 @ 007b5410 ////

undefined4 * __thiscall FUN_007b5410(void *this,byte param_1)

{
  FUN_007b5310(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007b5430 @ 007b5430 ////

void __thiscall FUN_007b5430(void *this,void *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  size_t sVar4;
  undefined4 unaff_EBP;
  wchar_t *pwVar5;
  undefined4 uStack_48;
  wchar_t *local_44;
  size_t sStack_40;
  uint uStack_3c;
  wchar_t awStack_38 [10];
  wchar_t *pwStack_24;
  size_t local_20;
  uint uStack_1c;
  
  piVar1 = (int *)FUN_004df220(*(int *)((int)this + 0x358));
  if (piVar1 == (int *)0x0) {
    uVar2 = FUN_00ace02d(
                        L"<nobr><x6><translate>SITT_PROJECT_SHOOTSCHEDULE_NOSET</translate></x6></nobr>"
                        );
    FUN_004036d0(param_1,
                 L"<nobr><x6><translate>SITT_PROJECT_SHOOTSCHEDULE_NOSET</translate></x6></nobr>",
                 uVar2);
    return;
  }
  local_44 = (wchar_t *)0x0;
  FUN_007b50d0(*(int *)((int)this + 0x358),&local_44,(undefined1 *)((int)&uStack_48 + 3));
  uVar2 = FUN_00ace02d(L"<nobr><x6>");
  FUN_004036d0(param_1,L"<nobr><x6>",uVar2);
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x5c))(&local_20);
  FUN_0040cae0(param_1,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_24);
  }
  if ((uStack_48 != (short *)0x0) && (*uStack_48 != 0)) {
    if (*(char *)((int)this + 0x38c) == '\0') {
      sVar4 = FUN_00ace02d(L"<br>");
      pwVar5 = L"<br>";
    }
    else {
      sVar4 = FUN_00ace02d((short *)&DAT_00d42108);
      pwVar5 = L" - ";
    }
    FUN_0040cae0(param_1,pwVar5,sVar4);
    local_44 = awStack_38;
    awStack_38[0] = L'\0';
    sStack_40 = 0;
    uStack_3c = 10;
    FUN_00568cb0(&uStack_48,&pwStack_24);
    sVar4 = FUN_00ace02d(L"<translate>");
    FUN_0040cae0(&local_44,L"<translate>",sVar4);
    FUN_0040cae0(&local_44,pwStack_24,local_20);
    sVar4 = FUN_00ace02d(L"</translate>");
    FUN_0040cae0(&local_44,L"</translate>",sVar4);
    if (10 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_24);
    }
    pwVar5 = local_44;
    sVar4 = sStack_40;
    if ((char)((uint)unaff_EBP >> 0x18) != '\0') {
      sVar4 = FUN_00ace02d(L"<font color=#ff0000>");
      FUN_0040cae0(param_1,L"<font color=#ff0000>",sVar4);
      FUN_0040cae0(param_1,local_44,sStack_40);
      sVar4 = FUN_00ace02d(L"</font>");
      pwVar5 = L"</font>";
    }
    FUN_0040cae0(param_1,pwVar5,sVar4);
    if (10 < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
  }
  sVar4 = FUN_00ace02d(L"</x6></nobr>");
  FUN_0040cae0(param_1,L"</x6></nobr>",sVar4);
  return;
}


//// FUNCTION FUN_007b5690 @ 007b5690 ////

void __fastcall FUN_007b5690(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  char local_5;
  int local_4;
  
  local_4 = 0;
  for (uVar3 = 0;
      (*(int *)(param_1 + 0x388) != 0 &&
      (uVar3 < (uint)((*(int *)(param_1 + 0x38c) - *(int *)(param_1 + 0x388)) / 0x18)));
      uVar3 = uVar3 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x388) + 0x14 + local_4);
    if (piVar1[0xe2] == 0) {
      FUN_007b50d0(piVar1[0xd6],(undefined4 *)0x0,&local_5);
      if (local_5 != '\0') {
        piVar2 = FUN_008ff850(piVar1,(float *)&DAT_00e5a604);
        (**(code **)(piVar1[0xdd] + 4))();
        piVar1[0xe2] = (int)piVar2;
        (**(code **)piVar1[0xdd])();
      }
    }
    local_4 = local_4 + 0x18;
  }
  return;
}


//// FUNCTION FUN_007b5750 @ 007b5750 ////

void __fastcall FUN_007b5750(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  for (uVar4 = 0;
      (*(int *)(param_1 + 0x388) != 0 &&
      (uVar4 < (uint)((*(int *)(param_1 + 0x38c) - *(int *)(param_1 + 0x388)) / 0x18)));
      uVar4 = uVar4 + 1) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x388) + 0x14 + iVar5);
    puVar3 = *(undefined4 **)(iVar2 + 0x388);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
      (**(code **)(*(int *)(iVar2 + 0x374) + 4))();
      *(undefined4 *)(iVar2 + 0x388) = 0;
      (*(code *)**(undefined4 **)(iVar2 + 0x374))();
    }
    iVar5 = iVar5 + 0x18;
  }
  return;
}


//// FUNCTION FUN_007b57e0 @ 007b57e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_007b57e0(void *this,int param_1,wchar_t *param_2,undefined1 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  size_t sVar5;
  int iVar6;
  void *this_00;
  int *piVar7;
  float fVar8;
  undefined4 uVar9;
  undefined2 **ppuVar10;
  float fVar11;
  char *pcStack_118;
  undefined4 uStack_114;
  undefined1 *puStack_110;
  char acStack_10c [4];
  uint uStack_108;
  char *pcStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  char acStack_ec [20];
  undefined1 auStack_d8 [8];
  undefined2 *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined2 local_c4 [6];
  char *pcStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  char acStack_ac [28];
  void *local_90;
  wchar_t local_8c [32];
  void *pvStack_4c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde0b4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_90 = this;
  FUN_007432f0(this);
  piVar7 = (int *)0x0;
  *(undefined ***)this = &PTR_FUN_00d5577c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d55760;
  piVar1 = (int *)((int)this + 0x348);
  *(undefined4 *)((int)this + 0x350) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_FUN_00d1ec60;
  *(int *)((int)this + 0x358) = param_1;
  if (param_1 != 0) {
    piVar4 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x34c) = piVar4;
    *piVar1 = *piVar4;
    *(int **)(*piVar4 + 4) = piVar1;
    *piVar4 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(int **)((int)this + 0x368) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 **)((int)this + 0x380) = (undefined4 *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x374) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x388) = 0;
  local_d0 = local_c4;
  *(undefined1 *)((int)this + 0x38c) = param_3;
  local_c4[0] = 0;
  local_cc = 0;
  local_c8 = 10;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  puVar3 = operator_new(0x3fc);
  local_4._0_1_ = 5;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar3);
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  sVar5 = FUN_00ace02d(L"<table><tr><td align=right width=20><x5>");
  FUN_0040cae0(&local_d0,L"<table><tr><td align=right width=20><x5>",sVar5);
  sVar5 = _swprintf(local_8c,0xd18f7c,param_2);
  FUN_0040cae0(&local_d0,local_8c,sVar5);
  sVar5 = FUN_00ace02d(L"</x5></td></tr></table>");
  FUN_0040cae0(&local_d0,L"</x5></td></tr></table>",sVar5);
  ppuVar10 = &local_d0;
  (**(code **)(*piVar4 + 0x54))();
  (**(code **)(*piVar4 + 0x84))();
  (**(code **)(*piVar4 + 0x10))();
  (**(code **)(*piVar4 + 0x14))();
  FUN_0073f6e0(this,piVar4);
  iVar6 = FUN_004df220(local_4);
  if (*(char *)((int)this + 0x38c) == '\0') {
    pcStack_118 = acStack_10c;
    acStack_10c[0] = '\0';
    uStack_114 = 0;
    puStack_110 = &DAT_00000014;
    pvStack_c._0_1_ = 6;
    if (iVar6 == 0) {
      puStack_110 = (undefined1 *)0x20;
      pcStack_118 = _malloc(0x20);
      _strncpy(pcStack_118,"ui/icon_facility.dds",0x14);
      uStack_114 = 0x14;
      pcStack_118[0x14] = '\0';
    }
    else {
      puVar3 = (undefined4 *)FUN_00528470(iVar6);
      puVar3 = FUN_0040d6b0(&pcStack_f8,"Thumbs/Sets/",puVar3);
      FUN_004073f0(&pcStack_118,(char *)*puVar3,puVar3[1]);
      if (0x14 < uStack_f0) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_f8);
      }
      pcStack_f8 = acStack_ec;
      acStack_ec[0] = '\0';
      uStack_f4 = 0;
      uStack_f0 = 0x14;
      _strncpy(pcStack_f8,".dds",4);
      uStack_f4 = 4;
      pcStack_f8[4] = '\0';
      pcStack_b8 = acStack_ac;
      acStack_ac[0] = '\0';
      uStack_b4 = 0;
      uStack_b0 = 0x14;
      _strncpy(pcStack_b8,".msh",4);
      uStack_b4 = 4;
      pcStack_b8[4] = '\0';
      pvStack_c._0_1_ = 8;
      FUN_00569860((int *)&pcStack_118,&pcStack_b8,&pcStack_f8);
      if (0x14 < uStack_b0) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_b8);
      }
      pvStack_c._0_1_ = 6;
      if (0x14 < uStack_f0) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_f8);
      }
    }
    this_00 = operator_new(0x360);
    pvStack_c._0_1_ = 9;
    if (this_00 != (void *)0x0) {
      piVar7 = FUN_0069d820(this_00,&pcStack_118,0,0,0x3f800000,0x3f800000);
    }
    uVar9 = 0x3f800000;
    pvStack_c._0_1_ = 6;
    (**(code **)(*piVar7 + 0x100))(&pcStack_118);
    (**(code **)(*piVar7 + 0x74))(DAT_00e5a5f4,DAT_00e5a5f4);
    (**(code **)(*piVar7 + 0x5c))(1,this,uVar9);
    (**(code **)(*piVar7 + 100))(1,this,0);
    FUN_0073f6e0(this,piVar7);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,4);
    if (&DAT_00000014 < puStack_110) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_118);
    }
  }
  piVar7 = (int *)0x0;
  FUN_007b5430(this,auStack_d8);
  puVar3 = operator_new(0x3fc);
  pvStack_c._0_1_ = 10;
  if (puVar3 != (undefined4 *)0x0) {
    piVar7 = FUN_00833290(puVar3);
  }
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,4);
  (**(code **)(*piVar7 + 0x54))();
  fVar11 = 0.0;
  if (*(char *)((int)this + 0x38c) == '\0') {
    fVar11 = 3.0;
  }
  (**(code **)(*piVar7 + 0x84))();
  (**(code **)(*piVar7 + 0x14))();
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x370) = piVar7;
  (**(code **)*piVar1)();
  FUN_0073f6e0(this,piVar7);
  fVar8 = 0.0;
  (**(code **)(*piVar4 + 0x5c))(1);
  (**(code **)(*piVar4 + 100))(1,this,(fVar11 - (float)ppuVar10) * 0.5);
  (**(code **)(*piVar7 + 0x5c))(1,this,_DAT_00e5a5f0 + fVar8);
  (**(code **)(*piVar7 + 100))(1,this,DAT_0104e84c);
  do {
    cVar2 = FUN_007421c0(this);
  } while (cVar2 != '\0');
  FUN_0073f500(this);
  if (10 < uStack_108) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_110);
  }
  ExceptionList = pvStack_4c;
  return this;
}


//// FUNCTION FUN_007b5d60 @ 007b5d60 ////

undefined4 * __thiscall FUN_007b5d60(void *this,byte param_1)

{
  FUN_007b5d80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007b5d80 @ 007b5d80 ////

void __fastcall FUN_007b5d80(undefined4 *param_1)

{
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
  param_1[0xd1] = &PTR_FUN_00d1ec60;
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


//// FUNCTION FUN_007b5fe0 @ 007b5fe0 ////

void __cdecl FUN_007b5fe0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d55614;
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


//// FUNCTION FUN_007b6050 @ 007b6050 ////

int * __cdecl FUN_007b6050(int param_1,undefined4 param_2,undefined1 param_3)

{
  void *this;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde0eb;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    this = operator_new(0x390);
    local_4 = 0;
    if (this != (void *)0x0) {
      piVar1 = FUN_007b57e0(this,param_1,param_2,param_3);
      ExceptionList = local_c;
      return piVar1;
    }
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_007b60c0 @ 007b60c0 ////

void __cdecl FUN_007b60c0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d55614;
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


//// FUNCTION FUN_007b6210 @ 007b6210 ////

undefined4 * FUN_007b6210(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007b60c0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007b6240 @ 007b6240 ////

void FUN_007b6240(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007b5310(param_1);
  }
  return;
}


//// FUNCTION FUN_007b6270 @ 007b6270 ////

void FUN_007b6270(void)

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
  puStack_8 = &LAB_00cde108;
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


//// FUNCTION FUN_007b6330 @ 007b6330 ////

void __fastcall FUN_007b6330(int param_1)

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
    FUN_007b5310(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007b6380 @ 007b6380 ////

void __thiscall FUN_007b6380(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cde128;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d55614;
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
      FUN_007b6270();
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
        iVar3 = FUN_007b4ca0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007b5fe0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007b60c0(puVar5,param_2,(int)&local_34);
      FUN_007b5fe0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_007b6240(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_007b5fe0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007b6210(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007b5070(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007b5fe0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007b4e10((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007b5070(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_007b66d0 @ 007b66d0 ////

void __thiscall FUN_007b66d0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007b6715;
    }
  }
  iVar1 = 0;
LAB_007b6715:
  FUN_007b6380(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_007b6740 @ 007b6740 ////

void __fastcall FUN_007b6740(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d55894;
  param_1[0x14] = &PTR_LAB_00d5587c;
  param_1[0xe5] = &PTR_FUN_00d18c2c;
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
  FUN_007b6330((int)(param_1 + 0xe1));
  FUN_007ad020(param_1);
  return;
}


//// FUNCTION FUN_007b67e0 @ 007b67e0 ////

void __thiscall FUN_007b67e0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007b60c0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_007b66d0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007b6870 @ 007b6870 ////

undefined4 * __thiscall FUN_007b6870(void *this,byte param_1)

{
  FUN_007b6740(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007b6890 @ 007b6890 ////

void __thiscall FUN_007b6890(void *this,int param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde148;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_007b6050(param_1,param_2,param_3);
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d55614;
  if (piVar1 != (int *)0x0) {
    local_1c = piVar1 + 6;
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  local_10 = piVar1;
  FUN_007b67e0((void *)((int)this + 900),(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_LAB_00d55614;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = (int *)0x0;
  local_20 = 0;
  local_1c = (int *)0x0;
  FUN_007b4e50(this,piVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007b6970 @ 007b6970 ////

void __fastcall FUN_007b6970(void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char local_15;
  uint local_14;
  uint local_10;
  int local_c;
  void *local_8;
  int local_4;
  
  if (((*(int **)((int)param_1 + 0x35c) != (int *)0x0) &&
      (local_8 = param_1,
      iVar2 = FUN_00ace790(*(int **)((int)param_1 + 0x35c),0,&TM::TMInWorld::RTTI_Type_Descriptor,
                           &TM::CProjectObject::RTTI_Type_Descriptor,0), iVar2 != 0)) &&
     (iVar2 = FUN_005d1940(iVar2), iVar2 != 0)) {
    iVar4 = *(int *)(iVar2 + 0xac);
    iVar3 = FUN_005b25d0(iVar2);
    iVar5 = 1;
    if (iVar3 != 0) {
      for (; (iVar4 != iVar2 + 0xb8 && (iVar3 != *(int *)(iVar4 + 8))); iVar4 = *(int *)(iVar4 + 4))
      {
        iVar5 = iVar5 + 1;
      }
    }
    iVar2 = iVar2 + 0xb8;
    local_14 = 0;
    local_c = iVar2;
    while ((iVar4 != iVar2 && (local_14 < DAT_00e5a5f8))) {
      iVar3 = *(int *)(iVar4 + 8);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c0) != 4)) {
        if (*(int *)((int)param_1 + 0x380) == 0) {
          FUN_007b6890(param_1,iVar3,iVar5,0);
        }
        local_14 = local_14 + 1;
      }
      iVar4 = *(int *)(iVar4 + 4);
      iVar5 = iVar5 + 1;
    }
    if (*(int *)((int)param_1 + 0x380) == 1) {
      local_4 = iVar5 + -1;
      local_14 = 0;
      local_10 = 0;
      if (iVar4 != iVar2) {
        do {
          iVar3 = *(int *)(iVar4 + 8);
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c0) != 4)) {
            bVar1 = false;
            if (local_14 < DAT_00e5a5fc) {
              local_14 = local_14 + 1;
LAB_007b6ab6:
              bVar1 = true;
            }
            else if ((local_10 < DAT_00e5a600) &&
                    (FUN_007b50d0(iVar3,(undefined4 *)0x0,&local_15), local_15 != '\0')) {
              local_10 = local_10 + 1;
              goto LAB_007b6ab6;
            }
            if ((*(int *)(iVar4 + 4) == local_c) || (iVar2 = local_c, bVar1)) {
              if (local_4 + 1 != iVar5) {
                FUN_007b4eb0(local_8);
              }
              FUN_007b6890(local_8,iVar3,iVar5,1);
              iVar2 = local_c;
              local_4 = iVar5;
            }
          }
          iVar4 = *(int *)(iVar4 + 4);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar2);
      }
    }
  }
  return;
}


//// FUNCTION FUN_007b6b00 @ 007b6b00 ////

int * __thiscall
FUN_007b6b00(void *this,undefined4 param_1,int param_2,undefined1 param_3,int param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde184;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007acf80(this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_FUN_00d55894;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d5587c;
  *(int *)((int)this + 0x380) = param_4;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 **)((int)this + 0x3a0) = (undefined4 *)((int)this + 0x394);
  *(undefined4 *)((int)this + 0x394) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  local_4 = 2;
  *(undefined4 *)((int)this + 0x378) = 4;
  FUN_007b6970(this);
  FUN_007acb90(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007b6be0 @ 007b6be0 ////

void __fastcall FUN_007b6be0(int *param_1)

{
  WWindow_Tick(param_1);
  (**(code **)(*param_1 + 0x84))(0);
  return;
}


//// FUNCTION FUN_007b6c00 @ 007b6c00 ////

void __cdecl FUN_007b6c00(int param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  void *this;
  undefined1 uVar4;
  int *piVar5;
  
  iVar2 = FUN_005a64e0(param_1);
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_005a6470(param_1);
  }
  else {
    piVar3 = (int *)FUN_005a64e0(param_1);
  }
  uVar4 = 0;
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 0x1dc))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*piVar3 + 0x204))();
      if (cVar1 != '\0') {
        if (param_2 == 0) goto LAB_007b6c93;
        iVar2 = FUN_005b25c0(param_2);
        if (iVar2 == 0) goto LAB_007b6c93;
        iVar2 = FUN_005b25c0(param_2);
        iVar2 = FUN_004d6c00(iVar2);
        if (iVar2 == 0) goto LAB_007b6c93;
        piVar5 = piVar3;
        iVar2 = FUN_005b25c0(param_2);
        this = (void *)FUN_004d6c00(iVar2);
        iVar2 = FUN_004e0620(this,(int)piVar5);
        if (iVar2 == 0) goto LAB_007b6c93;
        cVar1 = (**(code **)(*piVar3 + 0x1d0))();
        if (cVar1 == '\0') goto LAB_007b6c93;
      }
    }
  }
  uVar4 = 1;
LAB_007b6c93:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = uVar4;
  }
  return;
}


//// FUNCTION FUN_007b6ce0 @ 007b6ce0 ////

int __fastcall FUN_007b6ce0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007b6df0 @ 007b6df0 ////

int * __thiscall FUN_007b6df0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007b6e20 @ 007b6e20 ////

undefined4 * __cdecl FUN_007b6e20(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007b6e60 @ 007b6e60 ////

void __thiscall FUN_007b6e60(void *this,int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x5c))(1,this,0);
    pvVar2 = *(void **)((int)this + 0x3a4);
    if (pvVar2 == (void *)0x0) {
      uVar1 = 1;
      pvVar2 = this;
    }
    else {
      uVar1 = 2;
    }
    (**(code **)(*param_1 + 100))(uVar1,pvVar2,0);
    (**(code **)(*(int *)this + 0xc))(param_1,1);
    (**(code **)(*(int *)((int)this + 0x390) + 4))();
    *(int **)((int)this + 0x3a4) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0x390))();
  }
  return;
}


//// FUNCTION FUN_007b6ec0 @ 007b6ec0 ////

void __fastcall FUN_007b6ec0(void *param_1)

{
  undefined4 *puVar1;
  void *unaff_ESI;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde19b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x344);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = FUN_007432f0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x7c))(0x41200000);
  (**(code **)(*piVar2 + 0x78))(0x41200000);
  FUN_007b6e60(param_1,piVar2);
  ExceptionList = unaff_ESI;
  return;
}


//// FUNCTION FUN_007b6f40 @ 007b6f40 ////

void __fastcall FUN_007b6f40(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x3a0);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x38c) + 4))();
    *(undefined4 *)(param_1 + 0x3a0) = 0;
                    /* WARNING: Could not recover jumptable at 0x007b6f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(param_1 + 0x38c))();
    return;
  }
  return;
}


//// FUNCTION FUN_007b6f80 @ 007b6f80 ////

void __fastcall FUN_007b6f80(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x388);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x374) + 4))();
    *(undefined4 *)(param_1 + 0x388) = 0;
                    /* WARNING: Could not recover jumptable at 0x007b6fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(param_1 + 0x374))();
    return;
  }
  return;
}


