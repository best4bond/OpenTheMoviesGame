//// FUNCTION FUN_00433f70 @ 00433f70 ////

undefined4 __fastcall FUN_00433f70(int param_1)

{
  if (*(int *)(param_1 + 0xcc) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0xcc) + 0x28);
  }
  return 0;
}


//// FUNCTION FUN_00434090 @ 00434090 ////

void __cdecl FUN_00434090(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_004340f0 @ 004340f0 ////

void __fastcall FUN_004340f0(int param_1)

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


//// FUNCTION FUN_004341d0 @ 004341d0 ////

void __fastcall FUN_004341d0(int param_1,undefined4 param_2)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  float extraout_EDX_01;
  float extraout_EDX_02;
  float extraout_EDX_03;
  float extraout_EDX_04;
  float extraout_EDX_05;
  float extraout_EDX_06;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  ulonglong uVar11;
  
  uVar11 = FUN_00990ae0(param_1,param_2);
  iVar7 = (int)uVar11 - *(int *)(param_1 + 800);
  uVar11 = FUN_00990ae0(*(int *)(param_1 + 800),(int)(uVar11 >> 0x20));
  *(int *)(param_1 + 800) = (int)uVar11;
  pvVar1 = *(void **)(*(int *)(param_1 + 0x208) + 200);
  if ((pvVar1 != (void *)0x0) && (*(char *)(param_1 + 0x238) == '\0')) {
    Model_UpdateVisuals(pvVar1);
    uVar4 = extraout_ECX;
    uVar6 = extraout_EDX;
    if (*(char *)(param_1 + 0x358) != '\0') {
      uVar4 = 0;
      if (*(void **)(param_1 + 500) != (void *)0x0) {
        Model_UpdateVisuals(*(void **)(param_1 + 500));
        uVar4 = extraout_ECX_00;
        uVar6 = extraout_EDX_00;
      }
    }
    if ((DAT_0104d8e8 != 0) &&
       (uVar11 = FUN_00990ae0(uVar4,uVar6), (uint)uVar11 < *(uint *)(param_1 + 0x32c))) {
      if (*(char *)(param_1 + 0x358) == '\0') {
        pvVar1 = *(void **)(param_1 + 500);
      }
      else {
        pvVar1 = *(void **)(param_1 + 0x118);
      }
      if (pvVar1 != (void *)0x0) {
        Model_UpdateVisuals(pvVar1);
      }
    }
  }
  if (*(char *)(param_1 + 0x35d) == '\0') {
    fVar10 = FUN_0066a990(DAT_0104daa0);
    if (fVar10 <= (float10)*(float *)(param_1 + 0x324)) {
      fVar10 = FUN_0066a990(DAT_0104daa0);
      if (fVar10 < (float10)*(float *)(param_1 + 0x324)) {
        *(float *)(param_1 + 0x324) = *(float *)(param_1 + 0x324) - 0.02;
        fVar10 = FUN_0066a990(DAT_0104daa0);
        if ((float10)*(float *)(param_1 + 0x324) < fVar10) goto LAB_004342ba;
      }
    }
    else {
      *(float *)(param_1 + 0x324) = *(float *)(param_1 + 0x324) + 0.02;
      fVar10 = FUN_0066a990(DAT_0104daa0);
      if (fVar10 < (float10)*(float *)(param_1 + 0x324)) {
LAB_004342ba:
        fVar10 = FUN_0066a990(DAT_0104daa0);
        *(float *)(param_1 + 0x324) = (float)fVar10;
      }
    }
  }
  else {
    if (*(float *)(param_1 + 0x324) < 1.0) {
      *(float *)(param_1 + 0x324) = *(float *)(param_1 + 0x324) + 0.04;
    }
    if (1.0 <= *(float *)(param_1 + 0x324)) {
      *(undefined4 *)(param_1 + 0x324) = 0x3f800000;
    }
  }
  if ((*(char *)(param_1 + 0x35d) != '\0') && (1.0 <= *(float *)(param_1 + 0x324))) {
    *(undefined1 *)(param_1 + 0x35d) = 0;
    if (*(char *)(param_1 + 0x35b) == '\0') {
      if (*(char *)(param_1 + 0x35a) != '\0') {
        puVar8 = (undefined4 *)(param_1 + 0x284);
        goto LAB_0043439e;
      }
    }
    else {
      puVar8 = (undefined4 *)(param_1 + 0x2a8);
LAB_0043439e:
      puVar9 = (undefined4 *)(param_1 + 0x2f0);
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
    }
    puVar8 = (undefined4 *)(param_1 + 0x260);
    puVar9 = (undefined4 *)(param_1 + 0x2cc);
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x328);
  }
  fVar2 = *(float *)(param_1 + 0x324);
  if ((fVar2 < 1.0) && (0.0 <= fVar2)) {
    fVar10 = FUN_004337b0(*(float *)(param_1 + 0x2cc),*(float *)(param_1 + 0x2f0),fVar2);
    *(float *)(param_1 + 0x23c) = (float)fVar10;
    fVar10 = FUN_004337b0(*(float *)(param_1 + 0x2d8),*(float *)(param_1 + 0x2fc),extraout_EDX_01);
    *(float *)(param_1 + 0x248) = (float)fVar10;
    fVar10 = FUN_004337b0(*(float *)(param_1 + 0x2dc),*(float *)(param_1 + 0x300),extraout_EDX_02);
    *(float *)(param_1 + 0x24c) = (float)fVar10;
    fVar10 = FUN_004337b0(*(float *)(param_1 + 0x2e0),*(float *)(param_1 + 0x304),extraout_EDX_03);
    *(float *)(param_1 + 0x250) = (float)fVar10;
    fVar10 = FUN_004337b0(*(float *)(param_1 + 0x2e4),*(float *)(param_1 + 0x308),extraout_EDX_04);
    *(float *)(param_1 + 0x254) = (float)fVar10;
    fVar10 = FUN_004337b0(*(float *)(param_1 + 0x2e8),*(float *)(param_1 + 0x30c),extraout_EDX_05);
    *(float *)(param_1 + 600) = (float)fVar10;
    fVar10 = FUN_004337b0(*(float *)(param_1 + 0x2ec),*(float *)(param_1 + 0x310),extraout_EDX_06);
    *(float *)(param_1 + 0x25c) = (float)fVar10;
    FUN_009a2d40((float *)(param_1 + 0x23c));
  }
  if (DAT_0104daa0 == 0) {
    return;
  }
  fVar10 = FUN_0066a980(DAT_0104daa0);
  fVar2 = (float)((fVar10 - (float10)0.5) * (float10)6.2831855);
  fVar3 = (float)iVar7;
  *(float *)(param_1 + 0x318) = fVar2;
  if (iVar7 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  if (*(float *)(param_1 + 0x31c) <= fVar2) {
    fVar3 = fVar3 * 0.01 + *(float *)(param_1 + 0x31c);
    *(float *)(param_1 + 0x31c) = fVar3;
    if (fVar3 < fVar2) goto LAB_00434557;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x31c) - fVar3 * 0.01;
    *(float *)(param_1 + 0x31c) = fVar3;
    if (fVar2 < fVar3) goto LAB_00434557;
  }
  fVar3 = fVar2;
LAB_00434557:
  *(float *)(param_1 + 0x31c) = fVar3;
  fVar10 = FUN_004012c0(*(float *)(param_1 + 0x31c));
  *(float *)(*(int *)(param_1 + 0x118) + 0xc0) = (float)fVar10;
  if ((DAT_0104d8e8 != 0) && (DAT_0104da70 != 0)) {
    fVar10 = FUN_004012c0(*(float *)(param_1 + 0x31c));
    *(float *)(*(int *)(param_1 + 500) + 0xc0) = (float)fVar10;
  }
  FUN_009a2d40((float *)(param_1 + 0x23c));
  return;
}


//// FUNCTION FUN_004345e0 @ 004345e0 ////

undefined4 FUN_004345e0(void)

{
  return DAT_00f87c7c;
}


//// FUNCTION FUN_004345f0 @ 004345f0 ////

undefined4 __fastcall FUN_004345f0(int param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_0066a990(DAT_0104daa0);
  if ((float10)*(float *)(param_1 + 0x324) != fVar1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00434620 @ 00434620 ////

undefined4 __fastcall FUN_00434620(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x208) + 0x14);
}


//// FUNCTION FUN_00434630 @ 00434630 ////

uint FUN_00434630(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((((((iVar1 != 0) && (param_1 = param_2, -1 < (int)param_2)) &&
        ((int)param_2 < *(int *)(iVar1 + 0x28))) &&
       (param_1 = *(uint *)(param_2 * 0x2c + *(int *)(iVar1 + 0x2c) + 4), param_1 != 1)) &&
      ((param_3 != 0 || (((param_1 != 2 && (param_1 != 3)) && ((param_1 != 4 && (param_1 != 0xc)))))
       ))) && (((param_1 != 5 || (param_3 != 1)) && (param_1 != 6)))) {
    return CONCAT31((int3)(param_1 >> 8),param_1 != 0xd);
  }
  return param_1 & 0xffffff00;
}


//// FUNCTION FUN_004346a0 @ 004346a0 ////

void __fastcall FUN_004346a0(int param_1)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  
  if (*(char *)(param_1 + 0x35c) == '\0') {
    return;
  }
  bVar1 = *(float *)(param_1 + 0x324) == 0.0;
  if (*(float *)(param_1 + 0x308) == *(float *)(param_1 + 0x2c0)) {
    if (bVar1) {
      puVar4 = (undefined4 *)(param_1 + 0x284);
LAB_00434815:
      puVar5 = (undefined4 *)(param_1 + 0x2f0);
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)(param_1 + 0x35d) = 0;
      puVar4 = (undefined4 *)(param_1 + 0x260);
      goto LAB_00434981;
    }
    *(undefined1 *)(param_1 + 0x35d) = 1;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar6 = FUN_004337b0(*(float *)(param_1 + 0x260),*(float *)(param_1 + 0x284),(float)fVar6);
    *(float *)(param_1 + 0x2f0) = (float)fVar6;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar6 = FUN_004337b0(*(float *)(param_1 + 0x26c),*(float *)(param_1 + 0x290),(float)fVar6);
    *(float *)(param_1 + 0x2fc) = (float)fVar6;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar6 = FUN_004337b0(*(float *)(param_1 + 0x270),*(float *)(param_1 + 0x294),(float)fVar6);
    *(float *)(param_1 + 0x300) = (float)fVar6;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar6 = FUN_004337b0(*(float *)(param_1 + 0x274),*(float *)(param_1 + 0x298),(float)fVar6);
    *(float *)(param_1 + 0x304) = (float)fVar6;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar6 = FUN_004337b0(*(float *)(param_1 + 0x278),*(float *)(param_1 + 0x29c),(float)fVar6);
    *(float *)(param_1 + 0x308) = (float)fVar6;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar6 = FUN_004337b0(*(float *)(param_1 + 0x27c),*(float *)(param_1 + 0x2a0),(float)fVar6);
    *(float *)(param_1 + 0x30c) = (float)fVar6;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar2 = *(float *)(param_1 + 0x2a4);
  }
  else {
    if (bVar1) {
      puVar4 = (undefined4 *)(param_1 + 0x2a8);
      goto LAB_00434815;
    }
    *(undefined1 *)(param_1 + 0x35d) = 1;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar6 = FUN_004337b0(*(float *)(param_1 + 0x260),*(float *)(param_1 + 0x2a8),(float)fVar6);
    *(float *)(param_1 + 0x2f0) = (float)fVar6;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar6 = FUN_004337b0(*(float *)(param_1 + 0x26c),*(float *)(param_1 + 0x2b4),(float)fVar6);
    *(float *)(param_1 + 0x2fc) = (float)fVar6;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar6 = FUN_004337b0(*(float *)(param_1 + 0x270),*(float *)(param_1 + 0x2b8),(float)fVar6);
    *(float *)(param_1 + 0x300) = (float)fVar6;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar6 = FUN_004337b0(*(float *)(param_1 + 0x274),*(float *)(param_1 + 700),(float)fVar6);
    *(float *)(param_1 + 0x304) = (float)fVar6;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar6 = FUN_004337b0(*(float *)(param_1 + 0x278),*(float *)(param_1 + 0x2c0),(float)fVar6);
    *(float *)(param_1 + 0x308) = (float)fVar6;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar6 = FUN_004337b0(*(float *)(param_1 + 0x27c),*(float *)(param_1 + 0x2c4),(float)fVar6);
    *(float *)(param_1 + 0x30c) = (float)fVar6;
    fVar6 = FUN_0066a990(DAT_0104daa0);
    fVar2 = *(float *)(param_1 + 0x2c8);
  }
  fVar6 = FUN_004337b0(*(float *)(param_1 + 0x280),fVar2,(float)fVar6);
  *(float *)(param_1 + 0x310) = (float)fVar6;
  FUN_009a2d40((float *)(param_1 + 0x2f0));
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x324);
  *(undefined4 *)(param_1 + 0x324) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x23c);
LAB_00434981:
  puVar5 = (undefined4 *)(param_1 + 0x2cc);
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(param_1 + 0x35c) = 0;
  return;
}


//// FUNCTION FUN_004349a0 @ 004349a0 ////

undefined4 __fastcall FUN_004349a0(int param_1)

{
  if ((DAT_0104d8e8 != 0) && (*(int *)(param_1 + 0x140) != 0)) {
    return *(undefined4 *)(param_1 + 0x1f0);
  }
  return 0;
}


//// FUNCTION FUN_004349c0 @ 004349c0 ////

int __thiscall FUN_004349c0(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  puVar2 = *(undefined4 **)this;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(int *)this = param_1;
  return param_1;
}


//// FUNCTION FUN_004349f0 @ 004349f0 ////

int __thiscall FUN_004349f0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (this != param_1) {
    iVar2 = *param_1;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
    }
    puVar3 = *(undefined4 **)this;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    *(int *)this = iVar2;
  }
  return *(int *)this;
}


//// FUNCTION FUN_00434a20 @ 00434a20 ////

void __fastcall FUN_00434a20(int param_1)

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


//// FUNCTION FUN_00434a40 @ 00434a40 ////

void __fastcall FUN_00434a40(int param_1)

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


//// FUNCTION FUN_00434ae0 @ 00434ae0 ////

void __fastcall FUN_00434ae0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00c9fe1c;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x8c),0x20,2,FUN_00401490);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x4c),0x20,2,FUN_00401490);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0xc),0x20,2,FUN_00401490);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00434bd0 @ 00434bd0 ////

void __cdecl FUN_00434bd0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00434c50 @ 00434c50 ////

undefined4 * __thiscall FUN_00434c50(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x364),*(uint *)((int)this + 0x368));
  return param_1;
}


//// FUNCTION FUN_00434c90 @ 00434c90 ////

void __thiscall FUN_00434c90(void *this,char *param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  ulonglong uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char *pcStack_2c;
  uint uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fe38;
  pvStack_c = ExceptionList;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  if (DAT_0104da70 == *(int *)(*(int *)((int)this + 0x208) + 0x14)) {
    local_34 = 0x3fc00000;
  }
  pvVar2 = *(void **)(*(int *)((int)this + 0x208) + 200);
  ExceptionList = &pvStack_c;
  if (pvVar2 != (void *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_00971df0(pvVar2);
    *(undefined4 *)(*(int *)((int)this + 0x208) + 200) = 0;
  }
  pvVar2 = FUN_0097c450(param_1,0,(undefined4 *)0x0,0);
  pcStack_2c = acStack_20;
  *(void **)(*(int *)((int)this + 0x208) + 200) = pvVar2;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&pcStack_2c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  FUN_004015d0((void *)(*(int *)((int)this + 0x208) + 0x74),pcStack_2c,uStack_28);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  *(undefined1 *)(*(int *)((int)this + 0x208) + 0xd0) = 0;
  iVar4 = *(int *)((int)this + 0x208);
  if (*(int *)(iVar4 + 200) == 0) {
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00978310(*(void **)(iVar4 + 200),0,0,*(void **)(iVar4 + 0xc0));
  uVar9 = 0;
  fVar6 = FUN_004012c0(0.0);
  FUN_00978350(*(void **)(*(int *)((int)this + 0x208) + 200),&local_38,(float)fVar6,uVar9);
  param_1 = (char *)0x0;
  if (*(int *)(*(int *)((int)this + 0x208) + 0xb4) != 0) {
    param_1 = (char *)0x3f800000;
  }
  FUN_009757a0(*(void **)(*(int *)((int)this + 0x208) + 200),(byte *)"ai_gender",(float)param_1,0);
  FUN_009757a0(*(void **)(*(int *)((int)this + 0x208) + 200),(byte *)"ai_react",0.0,0);
  fVar6 = FUN_004012c0(*(float *)((int)this + 0x31c));
  *(float *)(*(int *)(*(int *)((int)this + 0x208) + 200) + 0xc0) = (float)fVar6;
  if (DAT_0104da80 == 0) {
    pvVar2 = *(void **)(*(int *)((int)this + 0x208) + 200);
    fVar8 = 0.0;
  }
  else {
    pvVar2 = *(void **)(*(int *)((int)this + 0x208) + 200);
    fVar8 = 1.0;
  }
  FUN_009757a0(pvVar2,(byte *)"ai_moviemaker",fVar8,0);
  if (*(int *)(*(int *)((int)this + 0x208) + 0x14) != 0) {
    uVar7 = FUN_0043b560();
    param_1 = (char *)0x3f800000;
    if (0x7bb < (int)uVar7) {
      param_1 = (char *)0x0;
    }
    FUN_009757a0(*(void **)(*(int *)((int)this + 0x208) + 200),(byte *)"ai_is_70s",(float)param_1,0)
    ;
    if (DAT_0104daa0 == 0) {
      uVar9 = FUN_00598ee0(*(int *)(*(int *)((int)this + 0x208) + 0x14));
      if ((char)uVar9 != '\0') {
        pvVar2 = (void *)FUN_00ace790(*(int **)(*(int *)((int)this + 0x208) + 0x14),0,
                                      &TM::CStaff::RTTI_Type_Descriptor,
                                      &TM::CStar::RTTI_Type_Descriptor,0);
        iVar4 = FUN_0059c6e0(pvVar2,'\0');
        FUN_00403de0(&pcStack_2c,(undefined4 *)(iVar4 + 0x78));
        uStack_4 = 0;
        fVar8 = (float)FUN_00959a40(&pcStack_2c);
        pfVar5 = (float *)FUN_0058fb60(pvVar2,&uStack_3c,fVar8);
        FUN_009757a0(*(void **)(*(int *)((int)this + 0x208) + 200),(byte *)0xd18bbc,*pfVar5,0);
        uStack_4 = 0xffffffff;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_2c);
        }
        goto LAB_00434fa9;
      }
      fVar8 = 0.51;
    }
    else {
      fVar8 = *(float *)(DAT_0104daa0 + 0x74c);
    }
    FUN_009757a0(*(void **)(*(int *)((int)this + 0x208) + 200),(byte *)0xd18bbc,fVar8,0);
  }
LAB_00434fa9:
  FUN_009b00b0(*(int *)(*(int *)((int)this + 0x208) + 200));
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00434fe0 @ 00434fe0 ////

undefined4 __fastcall FUN_00434fe0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x208) + 0x18);
}


//// FUNCTION FUN_00434ff0 @ 00434ff0 ////

void __thiscall FUN_00434ff0(void *this,int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (*(int *)((int)this + 0x34c) == 0) {
    piVar3 = (int *)(*(int *)((int)this + 0x208) + 0x1c);
    if (param_1 != 0) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
    puVar2 = (undefined4 *)*piVar3;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *piVar3 = param_1;
    if (param_3 != 0) {
      *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
    }
    puVar2 = *(undefined4 **)((int)this + 0x374);
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = puVar2 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(*(int *)((int)this + 0x360) + 4))();
      *(undefined4 *)((int)this + 0x374) = 0;
      (*(code *)**(undefined4 **)((int)this + 0x360))();
    }
    (**(code **)(*(int *)((int)this + 0x360) + 4))();
    *(int *)((int)this + 0x374) = param_3;
    (*(code *)**(undefined4 **)((int)this + 0x360))();
    (**(code **)(*(int *)((int)this + 0x20c) + 4))();
    *(undefined4 *)((int)this + 0x220) = param_2;
    (*(code *)**(undefined4 **)((int)this + 0x20c))();
    *(undefined4 *)((int)this + 0x348) = 0;
    *(undefined4 *)((int)this + 0x34c) = 2;
    if ((DAT_0104d8e8 != 0) && (param_1 != 0)) {
      *(undefined4 *)(*(int *)(*(int *)((int)this + 0x208) + 0x1c) + 0xb8) = 3;
    }
  }
  return;
}


//// FUNCTION FUN_004350e0 @ 004350e0 ////

void __thiscall FUN_004350e0(void *this,int param_1)

{
  void *this_00;
  
  this_00 = *(void **)(*(int *)((int)this + 0x208) + 0xc4);
  if (this_00 != (void *)0x0) {
    FUN_009d12f0(this_00,param_1,(void *)0x1);
    if (DAT_0104da84 != (void *)0x0) {
      FUN_0048dd10(DAT_0104da84,*(int *)(*(int *)((int)this + 0x208) + 0x18));
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00435120 @ 00435120 ////

void __thiscall FUN_00435120(void *this,int param_1)

{
  void *this_00;
  
  this_00 = *(void **)(*(int *)((int)this + 0x208) + 0xc4);
  if (this_00 != (void *)0x0) {
    FUN_009d12f0(this_00,param_1,(void *)0x0);
    if (DAT_0104da84 != (void *)0x0) {
      FUN_0048dd10(DAT_0104da84,*(int *)(*(int *)((int)this + 0x208) + 0x18));
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00435160 @ 00435160 ////

undefined4 __fastcall FUN_00435160(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x208) + 0x18);
  if (iVar1 != 0) {
    uVar2 = FUN_004319b0(iVar1);
    return uVar2;
  }
  return 0;
}


//// FUNCTION FUN_00435180 @ 00435180 ////

undefined4 __fastcall FUN_00435180(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00959a40((undefined4 *)(*(int *)(*(int *)(param_1 + 0x208) + 0x18) + 0x78));
  if (iVar2 != 0) {
    cVar1 = FUN_00960f30(iVar2);
    if ((cVar1 != '\0') && (iVar2 = *(int *)(*(int *)(param_1 + 0x208) + 0x18), iVar2 != 0)) {
      iVar2 = FUN_004319b0(iVar2);
      if (iVar2 != 0) {
        iVar2 = FUN_004319b0(*(int *)(*(int *)(param_1 + 0x208) + 0x18));
        if (*(int *)(iVar2 + 0xcc) != 0) {
          return *(undefined4 *)(*(int *)(iVar2 + 0xcc) + 0x28);
        }
        return 0;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_004351f0 @ 004351f0 ////

float10 __thiscall FUN_004351f0(int param_1,int param_2)

{
  int iVar1;
  void *this;
  undefined4 uVar2;
  char *pcVar3;
  float local_5c;
  float local_58;
  float local_54 [3];
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
  
  FUN_009a2210(&local_24);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_48[0] = '\0';
  local_28 = 0.0;
  local_4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x208) + 0x18);
  if (iVar1 != 0) {
    pcVar3 = local_48;
    this = (void *)FUN_004319b0(iVar1);
    FUN_009cfb20(this,param_2,pcVar3);
  }
  local_54[2] = local_28 + local_28;
  local_54[0] = 0.0;
  local_54[1] = 0.0;
  uVar2 = FUN_009a1b30(&DAT_0105c2e8,local_54,&local_5c);
  if ((char)uVar2 != '\0') {
    return (float10)local_58;
  }
  return (float10)0.5;
}


//// FUNCTION FUN_004352b0 @ 004352b0 ////

void __fastcall FUN_004352b0(void *param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined4 *)((int)param_1 + 0x23c);
  puVar4 = (undefined4 *)((int)param_1 + 0x2cc);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = param_3;
  puVar4 = (undefined4 *)((int)param_1 + 0x2f0);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar6 = FUN_00990ae0(0,param_2);
  *(int *)((int)param_1 + 0x314) = (int)uVar6;
  if (param_3 == (undefined4 *)((int)param_1 + 0x284)) {
    iVar2 = *(int *)((int)param_1 + 0x208);
    FUN_004015d0((void *)(iVar2 + 0x94),*(char **)(iVar2 + 0x74),*(uint *)(iVar2 + 0x78));
    bVar1 = FUN_00430950((undefined4 *)(*(int *)((int)param_1 + 0x208) + 0x94),"cos_closeup.flm");
    if (bVar1) {
      FUN_00434c90(param_1,"cos_closeup.flm");
      FUN_009757a0(*(void **)(*(int *)((int)param_1 + 0x208) + 200),(byte *)"ai_closeup",1.0,0);
    }
  }
  else {
    FUN_00434c90(param_1,"cos_generic.flm");
  }
  fVar5 = FUN_004012c0(*(float *)((int)param_1 + 0x31c));
  *(float *)(*(int *)(*(int *)((int)param_1 + 0x208) + 200) + 0xc0) = (float)fVar5;
  return;
}


//// FUNCTION FUN_00435390 @ 00435390 ////

undefined4 * __thiscall FUN_00435390(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9fe5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 0;
  local_4 = 0;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
  }
  puVar2 = *(undefined4 **)((int)this + 4);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(int *)((int)this + 4) = param_2;
  *(undefined4 *)this = param_1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00435400 @ 00435400 ////

void __fastcall FUN_00435400(void *param_1)

{
  bool bVar1;
  int extraout_ECX;
  int iVar2;
  float extraout_EDX;
  float fVar3;
  float10 fVar4;
  ulonglong uVar5;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fe78;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,*(char **)(*(int *)((int)param_1 + 0x208) + 0x74),
               *(uint *)(*(int *)((int)param_1 + 0x208) + 0x78));
  local_4 = 0;
  bVar1 = FUN_00430950(&local_2c,"cos_closeup.flm");
  if (!bVar1) {
    fVar4 = FUN_009722e0(*(int *)(*(int *)((int)param_1 + 0x208) + 200),(byte *)"ai_closeup");
    iVar2 = extraout_ECX;
    fVar3 = extraout_EDX;
    if ((float10)1.0 != fVar4) goto LAB_004354e5;
  }
  FUN_004015d0((void *)(*(int *)((int)param_1 + 0x208) + 0x94),local_2c,local_28);
  FUN_00434c90(param_1,"cos_closeup.flm");
  fVar4 = FUN_004012c0(*(float *)((int)param_1 + 0x31c));
  fVar3 = (float)fVar4;
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x208) + 200);
  *(float *)(iVar2 + 0xc0) = fVar3;
LAB_004354e5:
  *(undefined1 *)(*(int *)((int)param_1 + 0x208) + 0xd0) = 1;
  uVar5 = FUN_00990ae0(iVar2,fVar3);
  *(int *)(*(int *)((int)param_1 + 0x208) + 0xcc) = (int)uVar5 + 30000;
  FUN_009757a0(*(void **)(*(int *)((int)param_1 + 0x208) + 200),(byte *)"ai_closeup",0.0,0);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00435550 @ 00435550 ////

/* WARNING: Removing unreachable block (ram,0x00435643) */

void __fastcall FUN_00435550(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *_Dest;
  bool bVar5;
  float10 fVar6;
  byte local_40 [15];
  undefined1 local_31;
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9feb1;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,*(char **)(*(int *)(param_1 + 0x208) + 0x74),
               *(uint *)(*(int *)(param_1 + 0x208) + 0x78));
  _Dest = local_40;
  local_4 = 0;
  local_40[0] = 0;
  _strncpy((char *)_Dest,"cos_closeup.flm",0xf);
  local_31 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  pbVar2 = local_2c;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *_Dest;
    if (bVar1 != *_Dest) {
LAB_00435618:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_0043561d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < _Dest[1];
    if (bVar1 != _Dest[1]) goto LAB_00435618;
    pbVar2 = pbVar2 + 2;
    _Dest = _Dest + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0043561d:
  if (iVar3 == 0) {
    uVar4 = FUN_0066b820();
    bVar5 = true;
    if ((char)uVar4 == '\0') goto LAB_00435639;
  }
  bVar5 = false;
LAB_00435639:
  local_4 = 0;
  if (bVar5) {
    FUN_009757a0(*(void **)(*(int *)(param_1 + 0x208) + 200),(byte *)"ai_closeup",1.0,0);
    fVar6 = FUN_004012c0(*(float *)(param_1 + 0x31c));
    *(float *)(*(int *)(*(int *)(param_1 + 0x208) + 200) + 0xc0) = (float)fVar6;
    *(undefined1 *)(*(int *)(param_1 + 0x208) + 0xd0) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x208) + 0xcc) = 0;
  }
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_004356e0 @ 004356e0 ////

uint * __thiscall FUN_004356e0(void *this,uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  uint uVar5;
  void *pvVar6;
  uint *puVar7;
  uint *puVar8;
  int local_c;
  
  puVar4 = param_1;
  *(uint *)this = *(uint *)this ^ (*param_1 ^ *(uint *)this) & 1;
  *(uint *)((int)this + 4) = param_1[1];
  puVar7 = param_1 + 3;
  *(uint *)((int)this + 8) = param_1[2];
  puVar8 = (uint *)((int)this + 0x14);
  local_c = 2;
  do {
    uVar2 = *(uint *)((int)puVar8 + (int)param_1 + (-4 - (int)this));
    pcVar3 = (char *)*puVar7;
    if (*puVar8 <= uVar2) {
      if (0x14 < *puVar8) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar8[-2]);
      }
      uVar5 = uVar2 + 0x20 & 0xffffffe0;
      *puVar8 = uVar5;
      pvVar6 = _malloc(uVar5);
      puVar8[-2] = (uint)pvVar6;
    }
    _strncpy((char *)puVar8[-2],pcVar3,uVar2);
    puVar8[-1] = uVar2;
    *(undefined1 *)(uVar2 + puVar8[-2]) = 0;
    puVar7 = puVar7 + 8;
    puVar8 = puVar8 + 8;
    local_c = local_c + -1;
  } while (local_c != 0);
  puVar8 = param_1 + 0x13;
  puVar7 = (uint *)((int)this + 0x54);
  local_c = 2;
  do {
    uVar2 = *(uint *)((int)puVar7 + (int)param_1 + (-4 - (int)this));
    pcVar3 = (char *)*puVar8;
    if (*puVar7 <= uVar2) {
      if (0x14 < *puVar7) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar7[-2]);
      }
      uVar5 = uVar2 + 0x20 & 0xffffffe0;
      *puVar7 = uVar5;
      pvVar6 = _malloc(uVar5);
      puVar7[-2] = (uint)pvVar6;
    }
    _strncpy((char *)puVar7[-2],pcVar3,uVar2);
    puVar7[-1] = uVar2;
    *(undefined1 *)(uVar2 + puVar7[-2]) = 0;
    puVar8 = puVar8 + 8;
    puVar7 = puVar7 + 8;
    local_c = local_c + -1;
  } while (local_c != 0);
  puVar8 = param_1 + 0x23;
  puVar7 = (uint *)((int)this + 0x94);
  param_1 = (uint *)0x2;
  do {
    uVar2 = *(uint *)((int)puVar7 + (int)puVar4 + (-4 - (int)this));
    pcVar3 = (char *)*puVar8;
    if (*puVar7 <= uVar2) {
      if (0x14 < *puVar7) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar7[-2]);
      }
      uVar5 = uVar2 + 0x20 & 0xffffffe0;
      *puVar7 = uVar5;
      pvVar6 = _malloc(uVar5);
      puVar7[-2] = (uint)pvVar6;
    }
    _strncpy((char *)puVar7[-2],pcVar3,uVar2);
    puVar1 = puVar7 + -2;
    puVar7[-1] = uVar2;
    puVar8 = puVar8 + 8;
    puVar7 = puVar7 + 8;
    param_1 = (uint *)((int)param_1 + -1);
    *(undefined1 *)(uVar2 + *puVar1) = 0;
  } while (param_1 != (uint *)0x0);
  return this;
}


//// FUNCTION FUN_00435890 @ 00435890 ////

void FUN_00435890(int *param_1,int *param_2,undefined4 *param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvVar7;
  uint *puVar8;
  float10 fVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1a8 [4];
  uint auStack_1a4 [51];
  uint auStack_d8 [51];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fed6;
  local_c = ExceptionList;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 4))();
  param_1[5] = (int)param_2;
  (**(code **)*param_1)();
  puVar6 = (undefined4 *)param_1[6];
  if (puVar6 != param_3) {
    if (puVar6 != (undefined4 *)0x0) {
      piVar5 = puVar6 + 0x12;
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        (**(code **)*puVar6)(1);
      }
    }
    param_1[6] = (int)param_3;
  }
  param_1[0x2d] = param_2[0x128];
  iVar3 = DAT_0104da84;
  (**(code **)(param_1[9] + 4))();
  param_1[0xe] = iVar3;
  (**(code **)param_1[9])();
  pfVar2 = (float *)(**(code **)(*param_2 + 0x1e0))(auStack_1a8);
  fVar9 = FUN_0043b710(pfVar2);
  param_1[0x2e] = (int)(float)fVar9;
  iVar3 = FUN_0059c6e0(param_2,'\x01');
  iVar4 = FUN_0059c6e0(param_2,'\0');
  *(bool *)((int)param_1 + 0xd1) = iVar4 != iVar3;
  if (((iVar4 != iVar3) && ((int *)param_1[5] != (int *)0x0)) &&
     (iVar3 = (**(code **)(*(int *)param_1[5] + 0xf0))(), *(int *)(iVar3 + 0xc) != 0)) {
    iVar3 = (**(code **)(*(int *)param_1[5] + 0xf0))();
    iVar3 = *(int *)(iVar3 + 0xc);
    param_1[0x35] = iVar3;
    piVar5 = (int *)(iVar3 + 0xa0);
    *piVar5 = *piVar5 + 1;
  }
  piVar5 = (int *)FUN_00ace790(param_2,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar5 == (int *)0x0) {
    iVar3 = FUN_00ace790(param_2,0,&TM::CStaff::RTTI_Type_Descriptor,
                         &TM::CExtra::RTTI_Type_Descriptor,0);
    if (iVar3 != 0) {
      param_1[0x2f] = *(int *)(iVar3 + 0xa90);
    }
  }
  else {
    fVar9 = FUN_00585e20((int)piVar5);
    param_1[0x2f] = (int)(float)fVar9;
  }
  iVar3 = (**(code **)(*(int *)param_1[5] + 0xf0))();
  iVar3 = *(int *)(iVar3 + 0xc);
  param_1[0x14] = iVar3;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0xa0) = *(int *)(iVar3 + 0xa0) + 1;
  }
  puVar6 = FUN_00433eb0();
  param_1[0x30] = (int)puVar6;
  FUN_0097e2b0((int)puVar6);
  FUN_0097e330((void *)param_1[0x30],1);
  *(uint *)(param_1[0x30] + 0x9c) = *(uint *)(param_1[0x30] + 0x9c) | 8;
  *(uint *)(param_1[0x30] + 0x9c) = *(uint *)(param_1[0x30] + 0x9c) | 0x8000000;
  if (param_1[5] == 0) {
    ExceptionList = local_c;
    return;
  }
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)FUN_00ace790(param_2,0,&TM::CStaff::RTTI_Type_Descriptor,
                                 &TM::CExtra::RTTI_Type_Descriptor,0);
    if (piVar5 == (int *)0x0) goto LAB_00435b68;
    FUN_009d2990(auStack_d8,(char *)0x0,(char *)0x0,0.0);
    uStack_4 = 1;
    iVar3 = (**(code **)(*piVar5 + 0xf0))();
    FUN_004356e0(auStack_d8,(uint *)(iVar3 + 0x38));
    pvVar7 = FUN_009d30f0(param_1[0x30],(uint)(param_1[0x2d] == 1),1,auStack_d8,'\0');
    param_1[0x31] = (int)pvVar7;
    (**(code **)(*piVar5 + 0x220))(pvVar7);
    puVar8 = auStack_d8;
  }
  else {
    FUN_009d2990(auStack_1a4,(char *)0x0,(char *)0x0,0.0);
    uStack_4 = 0;
    iVar3 = (**(code **)(*piVar5 + 0xf0))();
    FUN_004356e0(auStack_1a4,(uint *)(iVar3 + 0x38));
    pvVar7 = FUN_009d30f0(param_1[0x30],(uint)(param_1[0x2d] == 1),1,auStack_1a4,'\0');
    param_1[0x31] = (int)pvVar7;
    (**(code **)(*piVar5 + 0x220))(pvVar7);
    puVar8 = auStack_1a4;
  }
  uStack_4 = 0xffffffff;
  FUN_00434ae0((int)puVar8);
LAB_00435b68:
  if (param_1[0x31] != 0) {
    iVar3 = (**(code **)(*(int *)param_1[5] + 0xf0))();
    FUN_009d1330((void *)param_1[0x31],*(int *)(iVar3 + 0x248));
    iVar3 = (**(code **)(*(int *)param_1[5] + 0xf0))();
    FUN_009d60a0((void *)param_1[0x31],(char *)(iVar3 + 0x250));
    fVar1 = (float)param_1[6];
    if (fVar1 != 0.0) {
      piVar5 = (int *)param_1[5];
      fVar12 = fVar1;
      fVar9 = (float10)(**(code **)(*piVar5 + 0x1b0))();
      fVar9 = (float10)(**(code **)(*piVar5 + 0x1ac))(fVar1,(float)fVar9);
      fVar11 = (float)fVar9;
      cVar10 = '\0';
      pvVar7 = (void *)FUN_004319b0((int)fVar1);
      FUN_009d2c50((void *)param_1[0x31],pvVar7,cVar10,fVar11,fVar12);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00435c10 @ 00435c10 ////

void __fastcall FUN_00435c10(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


//// FUNCTION FUN_00435c30 @ 00435c30 ////

void __thiscall FUN_00435c30(void *this,void *param_1)

{
  void *this_00;
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *this_01;
  ulonglong uVar6;
  
  this_00 = param_1;
  uVar5 = 0;
  if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0xcc) != 0)) {
    param_1 = (void *)0x0;
    while( true ) {
      iVar4 = *(int *)((int)this_00 + 0xcc);
      if (iVar4 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar4 + 0x28);
      }
      if (iVar2 <= (int)uVar5) break;
      uVar3 = FUN_00434630((uint)this_00,uVar5,
                           *(int *)(*(int *)(*(int *)((int)this + 0x208) + 0x14) + 0x4a0));
      if ((char)uVar3 != '\0') {
        this_01 = (void *)(*(int *)(iVar4 + 0x2c) + (int)param_1);
        iVar4 = FUN_009ce940(this_00,uVar5);
        if (iVar4 != 0) {
          uVar3 = FUN_00990d30(0,iVar4);
          bVar1 = FUN_009ccf60((int)this_01);
          if (bVar1) {
            uVar6 = FUN_00433c10();
            uVar3 = FUN_009d8b10((uint)((*(uint *)((int)this_00 + 0xa4) & 0x6000) != 0),(int)uVar6);
          }
          FUN_009ce200(this_01,uVar3,this_00);
        }
      }
      uVar5 = uVar5 + 1;
      param_1 = (void *)((int)param_1 + 0x2c);
    }
  }
  return;
}


//// FUNCTION FUN_00435d10 @ 00435d10 ////

void __fastcall FUN_00435d10(void *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x208);
  FUN_004015d0((void *)(iVar1 + 0x94),*(char **)(iVar1 + 0x74),*(uint *)(iVar1 + 0x78));
  bVar2 = FUN_00430950((undefined4 *)(*(int *)((int)param_1 + 0x208) + 0x94),"cos_closeup.flm");
  if (bVar2) {
    FUN_00434c90(param_1,"cos_closeup.flm");
    FUN_009757a0(*(void **)(*(int *)((int)param_1 + 0x208) + 200),(byte *)"ai_closeup",1.0,0);
  }
  return;
}


//// FUNCTION FUN_00435d80 @ 00435d80 ////

void __fastcall FUN_00435d80(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d18c2c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00435da0 @ 00435da0 ////

void __fastcall FUN_00435da0(int param_1)

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


//// FUNCTION FUN_00435e20 @ 00435e20 ////

void __fastcall FUN_00435e20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d18c3c;
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


//// FUNCTION FUN_00435ea0 @ 00435ea0 ////

void __fastcall FUN_00435ea0(int param_1)

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


//// FUNCTION FUN_00435ec0 @ 00435ec0 ////

void __fastcall FUN_00435ec0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d18c4c;
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


//// FUNCTION FUN_00435f30 @ 00435f30 ////

void __fastcall FUN_00435f30(int param_1)

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


//// FUNCTION FUN_00435f60 @ 00435f60 ////

void __fastcall FUN_00435f60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d18c5c;
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


//// FUNCTION FUN_00436020 @ 00436020 ////

void __fastcall FUN_00436020(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d18c6c;
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


//// FUNCTION FUN_00436070 @ 00436070 ////

void __fastcall FUN_00436070(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d18c7c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00436090 @ 00436090 ////

void __fastcall FUN_00436090(int param_1)

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


//// FUNCTION FUN_004360c0 @ 004360c0 ////

void __fastcall FUN_004360c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d18c7c;
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


//// FUNCTION FUN_00436160 @ 00436160 ////

void * FUN_00436160(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00436190 @ 00436190 ////

void __fastcall FUN_00436190(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d18c2c;
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


//// FUNCTION FUN_004361e0 @ 004361e0 ////

void __thiscall FUN_004361e0(void *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *local_164;
  undefined4 local_160;
  uint local_15c;
  char local_158 [20];
  undefined1 *local_144;
  int local_140;
  uint local_13c;
  undefined1 local_138 [20];
  char *local_124;
  int local_120;
  uint local_11c;
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9ff22;
  local_c = ExceptionList;
  if (param_1 != 0) {
    local_144 = local_138;
    local_138[0] = 0;
    local_140 = 0;
    local_13c = 0x14;
    pcVar2 = (char *)(param_1 + 0x80);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_c;
    FUN_004015d0(&local_144,(char *)(param_1 + 0x80),(int)pcVar2 - (param_1 + 0x81));
    local_4 = 0;
    puVar3 = FUN_00430770(&local_144,&local_124,0,local_140 - 4);
    FUN_004015d0(&local_144,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    puVar3 = FUN_0040d6b0(local_104,"costume/",&local_144);
    local_4._0_1_ = 1;
    FUN_0055c540(local_e4,puVar3);
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    local_164 = local_158;
    local_158[0] = '\0';
    local_160 = 0;
    local_15c = 0x14;
    _strncpy(local_164,"animation",9);
    local_160 = 9;
    local_164[9] = '\0';
    local_4._0_1_ = 4;
    uVar4 = FUN_00558a50(local_e4,&local_164,(undefined4 *)0x1);
    local_4._0_1_ = 3;
    if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
      _free(local_164);
    }
    if ((char)uVar4 != '\0') {
      local_164 = local_158;
      local_158[0] = '\0';
      local_160 = 0;
      local_15c = 0x14;
      _strncpy(local_164,"name",4);
      local_160 = 4;
      local_164[4] = '\0';
      local_4._0_1_ = 5;
      FUN_005584e0(local_e4,&local_124,&local_164);
      local_4._0_1_ = 7;
      if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
        _free(local_164);
      }
      if (local_120 != 0) {
        FUN_00434c90(this,local_124);
        if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
          _free(local_124);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00558920(local_e4);
        if (local_13c < 0x15) {
          ExceptionList = local_c;
          return;
        }
        goto LAB_00436445;
      }
      local_4._0_1_ = 3;
      if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_124);
      }
    }
    local_4._0_1_ = 3;
    FUN_00434c90(this,"cos_generic.flm");
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00558920(local_e4);
    if (0x14 < local_13c) {
LAB_00436445:
                    /* WARNING: Subroutine does not return */
      _free(local_144);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00436470 @ 00436470 ////

void __fastcall FUN_00436470(void *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 *puVar9;
  wchar_t *in_stack_fffffef4;
  uint in_stack_fffffef8;
  uint in_stack_fffffefc;
  char cVar10;
  float fVar11;
  void **ppvVar12;
  char **ppcVar13;
  float fVar14;
  undefined4 *puStack_d8;
  undefined1 local_d4;
  char *local_d0;
  undefined4 local_cc;
  uint local_c8;
  char local_c4 [20];
  void *pvStack_b0;
  void *apvStack_ac [2];
  uint uStack_a4;
  char acStack_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9ff75;
  local_c = ExceptionList;
  if ((*(int *)(*(int *)((int)param_1 + 0x208) + 0x1c) != 0) &&
     (*(int *)(*(int *)((int)param_1 + 0x208) + 0x18) != 0)) {
    local_d4 = DAT_0105cc5c;
    DAT_0105cc5c = 0;
    piVar1 = (int *)(*(int *)((int)param_1 + 0x208) + 0x1c);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x208) + 0x18);
    local_4 = 0;
    ExceptionList = &local_c;
    if (piVar2 != piVar1) {
      iVar7 = *piVar1;
      ExceptionList = &local_c;
      if (iVar7 != 0) {
        ExceptionList = &local_c;
        *(int *)(iVar7 + 0x48) = *(int *)(iVar7 + 0x48) + 1;
      }
      puVar5 = (undefined4 *)*piVar2;
      if (puVar5 != (undefined4 *)0x0) {
        piVar1 = puVar5 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar5)();
        }
      }
      *piVar2 = iVar7;
    }
    local_d0 = local_c4;
    local_c4[0] = '\0';
    local_cc = 0;
    local_c8 = 0x14;
    _strncpy(local_d0,"category_custom",0xf);
    local_cc = 0xf;
    local_d0[0xf] = '\0';
    ppvVar12 = apvStack_ac;
    local_4._0_1_ = 1;
    pvVar4 = (void *)FUN_0066b3a0(DAT_0104daa0);
    puVar5 = FUN_00434c50(pvVar4,ppvVar12);
    uVar6 = FUN_00401ec0(puVar5,&local_d0);
    if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_ac[0]);
    }
    local_4._0_1_ = 0;
    uVar3 = (undefined1)local_4;
    local_4._0_1_ = 0;
    if (0x14 < local_c8) {
                    /* WARNING: Subroutine does not return */
      _free(local_d0);
    }
    if ((char)uVar6 == '\0') {
      local_4._0_1_ = uVar3;
      iVar7 = FUN_004319b0(*(int *)(*(int *)((int)param_1 + 0x208) + 0x18));
      if (iVar7 == 0) {
        _sprintf(acStack_8c,"%s.cos");
        puVar5 = FUN_009cfaa0(acStack_8c);
      }
      else {
        iVar7 = FUN_004319b0(*(int *)(*(int *)((int)param_1 + 0x208) + 0x18));
        puVar8 = FUN_009ce790(iVar7);
        puVar5 = FUN_009d03c0((int)puVar8);
        if (puVar8 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(puVar8);
        }
      }
    }
    else {
      iVar7 = FUN_004319b0(*(int *)(*(int *)((int)param_1 + 0x208) + 0x18));
      puVar8 = FUN_009ce790(iVar7);
      puVar5 = FUN_009d03c0((int)puVar8);
      if (puVar8 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(puVar8);
      }
      ppcVar13 = &local_d0;
      pvVar4 = (void *)FUN_0066b3a0(DAT_0104daa0);
      FUN_006839b0(pvVar4,ppcVar13);
      local_4._0_1_ = 2;
      iVar7 = FUN_0066b3a0(DAT_0104daa0);
      CostumeList_BuildFilteredAndSorted(iVar7);
      puStack_d8 = (undefined4 *)&stack0xfffffef4;
      FUN_00421290(&stack0xfffffef4,&local_d0);
      local_4._0_1_ = 2;
      pvVar4 = (void *)FUN_0066b3a0(DAT_0104daa0);
      FUN_00683df0(pvVar4,in_stack_fffffef4,in_stack_fffffef8,in_stack_fffffefc);
      local_4._0_1_ = 0;
      if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
        _free(local_d0);
      }
    }
    pvVar4 = *(void **)(*(int *)((int)param_1 + 0x208) + 0x18);
    FUN_004306b0(pvVar4,puVar5,(undefined4 *)((int)pvVar4 + 0x78));
    if (puVar5 != (undefined4 *)0x0) {
      FUN_009cfb00(puVar5);
    }
    iVar7 = *(int *)((int)param_1 + 0x208);
    fVar11 = *(float *)(iVar7 + 0xbc);
    fVar14 = *(float *)(iVar7 + 0xb8);
    cVar10 = '\x01';
    pvVar4 = (void *)FUN_004319b0(*(int *)(iVar7 + 0x18));
    FUN_009d2c50(*(void **)(*(int *)((int)param_1 + 0x208) + 0xc4),pvVar4,cVar10,fVar14,fVar11);
    uVar6 = extraout_EDX;
    if (*(void **)((int)param_1 + 0x220) != (void *)0x0) {
      FUN_0048dd10(*(void **)((int)param_1 + 0x220),*(int *)(*(int *)((int)param_1 + 0x208) + 0x18))
      ;
      uVar6 = extraout_EDX_00;
    }
    if (DAT_0104daa0 != 0) {
      FUN_0066b3b0(DAT_0104daa0);
      uVar6 = extraout_EDX_01;
    }
    if (*(char *)((int)param_1 + 0x359) != '\0') {
      pvVar4 = (void *)FUN_004319b0(*(int *)(*(int *)((int)param_1 + 0x208) + 0x18));
      FUN_00435c30(param_1,pvVar4);
      *(undefined1 *)((int)param_1 + 0x359) = 0;
      uVar6 = extraout_EDX_02;
    }
    if (*(int *)((int)param_1 + 0x374) != 0) {
      *(undefined1 *)((int)param_1 + 0x356) = 1;
    }
    if (*(int *)((int)param_1 + 0x140) != 0) {
      puStack_d8 = (undefined4 *)0x0;
      local_4._0_1_ = 4;
      pvStack_b0 = operator_new(0xe0);
      local_4._0_1_ = 5;
      if (pvStack_b0 == (void *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = FUN_00432150(pvStack_b0,*(int *)(*(int *)((int)param_1 + 0x208) + 0x18));
      }
      local_4._0_1_ = 4;
      puVar9 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar9 = puVar5;
        puStack_d8 = puVar5;
      }
      FUN_004349f0((void *)((int)param_1 + 0x144),(int *)&puStack_d8);
      fVar14 = -1.0;
      fVar11 = -1.0;
      cVar10 = '\x01';
      pvVar4 = (void *)FUN_004319b0((int)puVar9);
      FUN_009d2c50(*(void **)((int)param_1 + 0x1f0),pvVar4,cVar10,fVar11,fVar14);
      local_4._0_1_ = 0;
      uVar6 = extraout_EDX_03;
      if (puVar9 != (undefined4 *)0x0) {
        piVar1 = puVar9 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar9)();
          uVar6 = extraout_EDX_04;
        }
      }
    }
    FUN_004352b0(param_1,uVar6,(undefined4 *)((int)param_1 + 0x260));
    if (DAT_0104daa0 != 0) {
      *(undefined4 *)(DAT_0104daa0 + 0x760) = 0;
      FUN_0066bbb0(DAT_0104daa0);
    }
    DAT_0105cc5c = local_d4;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004368d0 @ 004368d0 ////

void FUN_004368d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *this;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 0x40);
  iVar1 = *(int *)(param_1 + 0xac);
  do {
    if ((iVar1 == param_1 + 0xb8) || (piVar4 == *(int **)(param_2 + 0x44))) {
      return;
    }
    this = (void *)FUN_004e0620(*(void **)(iVar1 + 8),*(int *)(param_2 + 0x14));
    piVar2 = (int *)*piVar4;
    if ((this != (void *)0x0) && ((piVar2 != (int *)0x0 && (iVar3 = piVar2[1], iVar3 != 0)))) {
      if (*piVar2 == 1) {
        FUN_0048dd10(this,iVar3);
      }
      else {
        if (*piVar2 != 2) goto LAB_0043693b;
        FUN_0048dfb0(this,iVar3);
      }
      FUN_0048dd70((int)this);
    }
LAB_0043693b:
    iVar1 = *(int *)(iVar1 + 4);
    piVar4 = piVar4 + 1;
  } while( true );
}


//// FUNCTION FUN_00436950 @ 00436950 ////

void * __thiscall FUN_00436950(void *this,byte param_1)

{
  FUN_00435c10((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00436970 @ 00436970 ////

void __fastcall FUN_00436970(void *param_1)

{
  undefined3 uVar1;
  undefined3 extraout_var;
  bool bVar2;
  
  if ((((*(int *)((int)param_1 + 0x118) != 0) && (*(int *)((int)param_1 + 500) != 0)) &&
      (*(int *)((int)param_1 + 100) != 0)) && (*(int *)((int)param_1 + 0x140) != 0)) {
    *(int *)((int)param_1 + 0x208) = (int)param_1 + 300;
    FUN_004361e0(param_1,*(int *)(*(int *)((int)param_1 + 0x1f0) + 0xc));
    *(int *)((int)param_1 + 0x208) = (int)param_1 + 0x50;
    uVar1 = (undefined3)((uint)((int)param_1 + 0x50) >> 8);
    bVar2 = *(char *)((int)param_1 + 0x358) == '\0';
    if (!bVar2) {
      if (*(char *)((int)param_1 + 0x35b) != '\0') {
        *(undefined1 *)((int)param_1 + 0x35c) = 1;
        FUN_004346a0((int)param_1);
        uVar1 = extraout_var;
      }
      bVar2 = *(char *)((int)param_1 + 0x358) == '\0';
    }
    *(bool *)((int)param_1 + 0x358) = bVar2;
    *(undefined1 *)((int)param_1 + 0x35a) = 0;
    *(undefined1 *)((int)param_1 + 0x35b) = 0;
    (**(code **)(**(int **)(DAT_0104daa0 + 0x6f8) + 0x20))(CONCAT31(uVar1,bVar2 == false));
  }
  return;
}


//// FUNCTION FUN_00436a30 @ 00436a30 ////

/* WARNING: Removing unreachable block (ram,0x00436b02) */

void __fastcall FUN_00436a30(void *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *_Dest;
  bool bVar4;
  byte local_40 [15];
  undefined1 local_31;
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9ff88;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,*(char **)(*(int *)((int)param_1 + 0x208) + 0x74),
               *(uint *)(*(int *)((int)param_1 + 0x208) + 0x78));
  _Dest = local_40;
  local_4 = 0;
  local_40[0] = 0;
  _strncpy((char *)_Dest,"cos_closeup.flm",0xf);
  local_31 = 0;
  pbVar2 = local_2c;
  do {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *_Dest;
    if (bVar1 != *_Dest) {
LAB_00436ae9:
      iVar3 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_00436aee;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < _Dest[1];
    if (bVar1 != _Dest[1]) goto LAB_00436ae9;
    pbVar2 = pbVar2 + 2;
    _Dest = _Dest + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00436aee:
  if (iVar3 == 0) {
    bVar4 = FUN_00430950((undefined4 *)(*(int *)((int)param_1 + 0x208) + 0x94),"");
    if (bVar4) {
      FUN_00434c90(param_1,*(char **)(*(int *)((int)param_1 + 0x208) + 0x94));
      FUN_009757a0(*(void **)(*(int *)((int)param_1 + 0x208) + 200),(byte *)"ai_closeup",0.0,0);
    }
    else {
      FUN_004361e0(param_1,*(int *)(*(int *)(*(int *)((int)param_1 + 0x208) + 0xc4) + 0xc));
    }
  }
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00436ba0 @ 00436ba0 ////

void __fastcall FUN_00436ba0(int param_1)

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


//// FUNCTION FUN_00436bd0 @ 00436bd0 ////

undefined4 * FUN_00436bd0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00437200 @ 00437200 ////

void __fastcall FUN_00437200(int param_1)

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


//// FUNCTION FUN_00437230 @ 00437230 ////

void __fastcall FUN_00437230(int param_1)

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


//// FUNCTION FUN_00437260 @ 00437260 ////

void __fastcall FUN_00437260(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00c9ffde;
  pvStack_c = ExceptionList;
  local_4 = 2;
  if (0x14 < (uint)param_1[0x27]) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x25]);
  }
  if (0x14 < (uint)param_1[0x1f]) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1d]);
  }
  if (0x14 < (uint)param_1[0x17]) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x15]);
  }
  if ((void *)param_1[0x10] != (void *)0x0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10]);
  }
  ExceptionList = &pvStack_c;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[9] = &PTR_FUN_00d18c6c;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb] = param_1[10];
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1[10] + 4) = param_1[0xb];
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb] = param_1[10];
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1[10] + 4) = param_1[0xb];
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar2 = (undefined4 *)param_1[8];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[8] = 0;
  puVar2 = (undefined4 *)param_1[7];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[7] = 0;
  puVar2 = (undefined4 *)param_1[6];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00d18c4c;
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
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004373d0 @ 004373d0 ////

void __thiscall FUN_004373d0(void *this,float param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined1 uVar3;
  float fVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  void *pvVar12;
  LONG LVar13;
  char cVar14;
  float10 fVar15;
  undefined4 uVar16;
  float fVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  void *pvStack_18;
  void *local_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  fVar4 = param_1;
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0003;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == 0.0) goto LAB_00437b37;
  ExceptionList = &pvStack_c;
  if (*(void **)((int)param_1 + 0xc4) != (void *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_009d2c50(*(void **)((int)param_1 + 0xc4),(void *)0x0,'\x01',-1.0,-1.0);
    if (*(undefined4 **)((int)fVar4 + 0xc4) != (undefined4 *)0x0) {
      FUN_009d2b50(*(undefined4 **)((int)fVar4 + 0xc4));
      *(undefined4 *)((int)fVar4 + 0xc4) = 0;
    }
  }
  param_1 = (float)((uint)param_1 & 0xffffff00);
  if ((*(void **)((int)fVar4 + 0x14) != (void *)0x0) &&
     (iVar5 = FUN_0059c6e0(*(void **)((int)fVar4 + 0x14),'\0'), *(int *)((int)fVar4 + 0x18) == iVar5
     )) {
    param_1 = (float)CONCAT31(param_1._1_3_,1);
  }
  iVar5 = *(int *)((int)fVar4 + 0x14);
  iVar10 = *(int *)((int)this + 0x140);
  local_14 = (void *)0x0;
  if (*(char *)((int)this + 0x350) == '\0') {
    pvVar12 = *(void **)((int)fVar4 + 0x50);
    pvVar6 = (void *)FUN_004319b0(*(int *)((int)fVar4 + 0x18));
    if (pvVar12 == pvVar6) goto LAB_0043747b;
  }
  else {
LAB_0043747b:
    pvVar12 = *(void **)((int)fVar4 + 0x4c);
  }
  if (*(char *)((int)fVar4 + 0xd1) == '\0') {
    piVar1 = *(int **)((int)fVar4 + 0x14);
    if ((piVar1 == (int *)0x0) ||
       ((((param_1._0_1_ != '\0' && (*(char *)((int)this + 0x357) == '\0')) ||
         (*(char *)((int)fVar4 + 0xd8) != '\0')) || (iVar5 == iVar10)))) {
      if (piVar1 != (int *)0x0) {
        if (((param_1._0_1_ == '\0') || (*(char *)((int)this + 0x357) != '\0')) &&
           (*(char *)((int)fVar4 + 0xd8) == '\0')) {
          iVar5 = FUN_0059bbd0(piVar1);
          pvVar12 = (void *)FUN_004319b0(iVar5);
          fVar19 = *(float *)((int)fVar4 + 0xbc);
          fVar21 = *(float *)((int)fVar4 + 0xb8);
          cVar14 = '\0';
          pvVar6 = (void *)(**(code **)(**(int **)((int)fVar4 + 0x14) + 0xf0))();
        }
        else {
          if ((piVar1 == (int *)0x0) || (*(char *)((int)this + 0x350) != '\0')) goto LAB_00437657;
          fVar19 = *(float *)((int)fVar4 + 0xbc);
          fVar21 = *(float *)((int)fVar4 + 0xb8);
          cVar14 = '\0';
          pvVar6 = (void *)(**(code **)(*piVar1 + 0xf0))();
        }
        FUN_009d2c50(pvVar6,pvVar12,cVar14,fVar21,fVar19);
        iVar5 = **(int **)((int)fVar4 + 0x14);
        uVar9 = 1;
        iVar10 = FUN_0059bbd0(*(int **)((int)fVar4 + 0x14));
        (**(code **)(iVar5 + 0x128))(iVar10,uVar9);
      }
    }
    else {
      if (*(char *)((int)this + 0x357) != '\0') {
        local_14 = (void *)FUN_004319b0(*(int *)((int)fVar4 + 0x18));
      }
      fVar19 = *(float *)((int)fVar4 + 0xbc);
      fVar21 = *(float *)((int)fVar4 + 0xb8);
      cVar14 = '\0';
      pvVar6 = pvVar12;
      pvVar7 = (void *)(**(code **)(**(int **)((int)fVar4 + 0x14) + 0xf0))();
      FUN_009d2c50(pvVar7,pvVar6,cVar14,fVar21,fVar19);
      uVar9 = *(undefined4 *)((int)fVar4 + 0xb8);
      pvVar6 = (void *)FUN_0059c6e0(*(void **)((int)fVar4 + 0x14),'\0');
      FUN_0042ff20(pvVar6,uVar9);
      uVar9 = *(undefined4 *)((int)fVar4 + 0xbc);
      pvVar6 = (void *)FUN_0059c6e0(*(void **)((int)fVar4 + 0x14),'\0');
      FUN_0042ff10(pvVar6,uVar9);
      iVar5 = FUN_0059c6e0(*(void **)((int)fVar4 + 0x14),'\0');
      puVar8 = (undefined4 *)(iVar5 + 0x78);
      pvVar6 = pvVar12;
      pvVar7 = (void *)FUN_0059c6e0(*(void **)((int)fVar4 + 0x14),'\0');
      FUN_004306b0(pvVar7,pvVar6,puVar8);
      piVar1 = *(int **)((int)fVar4 + 0x14);
      pvVar6 = (void *)FUN_0059bbd0(piVar1);
      pvVar7 = (void *)FUN_0059c6e0(piVar1,'\0');
      uVar9 = FUN_00430dd0(pvVar7,pvVar6);
      if ((char)uVar9 != '\0') {
        uVar9 = *(undefined4 *)((int)fVar4 + 0xb8);
        pvVar6 = (void *)FUN_0059bbd0(*(int **)((int)fVar4 + 0x14));
        FUN_0042ff20(pvVar6,uVar9);
        uVar9 = *(undefined4 *)((int)fVar4 + 0xbc);
        pvVar6 = (void *)FUN_0059bbd0(*(int **)((int)fVar4 + 0x14));
        FUN_0042ff10(pvVar6,uVar9);
        iVar5 = FUN_0059bbd0(*(int **)((int)fVar4 + 0x14));
        puVar8 = (undefined4 *)(iVar5 + 0x78);
        pvVar6 = (void *)FUN_0059bbd0(*(int **)((int)fVar4 + 0x14));
        FUN_004306b0(pvVar6,pvVar12,puVar8);
      }
    }
  }
LAB_00437657:
  if (*(char *)((int)this + 0x351) == '\0') {
    if (((*(void **)((int)fVar4 + 0x14) != (void *)0x0) && (*(int *)((int)fVar4 + 0x18) != 0)) &&
       (*(char *)((int)this + 0x352) != '\0')) {
      FUN_0059bba0(*(void **)((int)fVar4 + 0x14),*(int *)((int)fVar4 + 0x18));
      cVar14 = (**(code **)(**(int **)((int)fVar4 + 0x14) + 0x1c4))();
      if (cVar14 == '\0') {
        FUN_0059bb60(*(void **)((int)fVar4 + 0x14),*(int *)((int)fVar4 + 0x18));
      }
      if (*(char *)((int)this + 0x353) != '\0') {
        if ((param_1._0_1_ != '\0') || (*(char *)((int)fVar4 + 0xd8) != '\0')) {
          piVar1 = *(int **)((int)fVar4 + 0x14);
          fVar21 = *(float *)((int)fVar4 + 0x18);
          fVar20 = fVar21;
          fVar15 = (float10)(**(code **)(*piVar1 + 0x1b0))();
          fVar19 = (float)fVar15;
          fVar17 = fVar21;
          fVar15 = (float10)(**(code **)(*piVar1 + 0x1ac))();
          cVar14 = SUB41(fVar17,0);
          pvVar12 = (void *)(float)fVar15;
          uVar16 = 0;
          uVar9 = FUN_004319b0((int)fVar21);
          pvVar6 = (void *)(**(code **)(*piVar1 + 0xf0))(uVar9,uVar16);
          FUN_009d2c50(pvVar6,pvVar12,cVar14,fVar19,fVar20);
        }
        (**(code **)(**(int **)((int)fVar4 + 0x14) + 0x128))(*(undefined4 *)((int)fVar4 + 0x18),1);
      }
    }
    if ((*(int *)((int)this + 0x374) != 0) && (*(char *)((int)this + 0x356) != '\0')) {
      if (param_1._0_1_ == '\0') {
        iVar5 = *(int *)((int)fVar4 + 0x18);
        iVar10 = *(int *)((int)fVar4 + 0x14);
        pvVar12 = (void *)FUN_005b2220(*(int *)((int)this + 0x374));
        FUN_005a91f0(pvVar12,iVar10,iVar5);
        FUN_005b48f0(*(void **)((int)this + 0x374),*(int *)((int)fVar4 + 0x14),
                     *(int *)((int)fVar4 + 0x18));
      }
      else {
        pvStack_18 = (void *)0x0;
        iStack_4 = 0;
        pvStack_10 = operator_new(0xe0);
        iStack_4._0_1_ = 1;
        if (pvStack_10 == (void *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = FUN_00432150(pvStack_10,*(int *)((int)fVar4 + 0x18));
        }
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_00430190(&pvStack_18,puVar8);
        pvVar12 = pvStack_18;
        if (local_14 != (void *)0x0) {
          FUN_004306b0(pvStack_18,local_14,(undefined4 *)(*(int *)((int)fVar4 + 0x18) + 0x78));
        }
        *(undefined4 *)((int)pvVar12 + 0xb8) = 3;
        iVar5 = *(int *)((int)fVar4 + 0x14);
        pvVar6 = pvVar12;
        pvVar7 = (void *)FUN_005b2220(*(int *)((int)this + 0x374));
        FUN_005a91f0(pvVar7,iVar5,(int)pvVar6);
        FUN_005b48f0(*(void **)((int)this + 0x374),*(int *)((int)fVar4 + 0x14),(int)pvVar12);
        iStack_4 = 0xffffffff;
        FUN_00430830((int *)&pvStack_18);
      }
    }
    iVar5 = FUN_00ace790(*(int **)((int)fVar4 + 0x14),0,&TM::CStaff::RTTI_Type_Descriptor,
                         &TM::CStar::RTTI_Type_Descriptor,0);
    if (iVar5 != 0) {
      pvVar12 = (void *)FUN_007fd5d0();
      pvVar12 = (void *)FUN_007fea40(pvVar12,iVar5);
      if ((pvVar12 != (void *)0x0) && (FUN_007fa1e0((int)pvVar12), DAT_0104d8e8 == 0)) {
        FUN_007fa210(pvVar12,0x1e,SUB41(param_1,0));
      }
    }
  }
  else {
    if ((*(void **)((int)fVar4 + 0x18) != (void *)0x0) &&
       (*(void **)((int)fVar4 + 0x4c) != (void *)0x0)) {
      FUN_004306b0(*(void **)((int)fVar4 + 0x18),*(void **)((int)fVar4 + 0x4c),
                   (undefined4 *)((int)fVar4 + 0x54));
    }
    if (*(char *)((int)this + 0x350) == '\0') {
      pvVar12 = *(void **)((int)fVar4 + 0x50);
    }
    else {
      pvVar12 = *(void **)((int)fVar4 + 0x4c);
    }
    if (((*(int *)((int)fVar4 + 0x18) != 0) && (pvVar12 != (void *)0x0)) &&
       (*(char *)((int)fVar4 + 0xd1) == '\0')) {
      puVar8 = (undefined4 *)((int)fVar4 + 0x54);
      pvVar6 = pvVar12;
      pvVar7 = (void *)FUN_0059c6e0(*(void **)((int)fVar4 + 0x14),'\0');
      FUN_004306b0(pvVar7,pvVar6,puVar8);
      fVar19 = *(float *)((int)fVar4 + 0xbc);
      fVar21 = *(float *)((int)fVar4 + 0xb8);
      cVar14 = param_1._0_1_ == '\0';
      pvVar6 = (void *)(**(code **)(**(int **)((int)fVar4 + 0x14) + 0xf0))();
      FUN_009d2c50(pvVar6,pvVar12,cVar14,fVar21,fVar19);
    }
    if (*(int *)((int)this + 0x374) != 0) {
      if (*(char *)((int)this + 0x355) == '\0') {
        if (*(char *)((int)fVar4 + 0xd1) == '\0') {
          FUN_0059bba0(*(void **)((int)fVar4 + 0x14),*(int *)((int)fVar4 + 0x20));
          FUN_0059bb60(*(void **)((int)fVar4 + 0x14),*(int *)((int)fVar4 + 0x20));
          (**(code **)(**(int **)((int)fVar4 + 0x14) + 0x128))(*(undefined4 *)((int)fVar4 + 0x20),1)
          ;
        }
      }
      else {
        iVar5 = *(int *)((int)fVar4 + 0x20);
        iVar10 = *(int *)((int)fVar4 + 0x14);
        pvVar12 = (void *)FUN_005b2220(*(int *)((int)this + 0x374));
        FUN_005a91f0(pvVar12,iVar10,iVar5);
      }
      FUN_004368d0(*(int *)((int)this + 0x374),(int)fVar4);
    }
    if (DAT_0104da84 != 0) {
      if (*(char *)((int)this + 0x354) == '\0') {
        FUN_0048dd10(*(void **)((int)fVar4 + 0x38),0);
        FUN_0048dfb0(*(void **)((int)fVar4 + 0x38),*(int *)((int)fVar4 + 0x20));
      }
      else {
        FUN_0048dd10(*(void **)((int)fVar4 + 0x38),*(int *)((int)fVar4 + 0x20));
      }
    }
    if (*(char *)((int)fVar4 + 0xd1) != '\0') {
      iVar5 = **(int **)((int)fVar4 + 0x14);
      uVar9 = 1;
      iVar10 = FUN_0059c6e0(*(int **)((int)fVar4 + 0x14),'\0');
      (**(code **)(iVar5 + 0x128))(iVar10,uVar9);
      iVar5 = (**(code **)(**(int **)((int)fVar4 + 0x14) + 0xf0))();
      *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | 0x20;
    }
  }
  if ((*(char *)((int)this + 0x350) != '\0') && (*(void **)((int)fVar4 + 0x14) != (void *)0x0)) {
    iVar5 = FUN_0059c6e0(*(void **)((int)fVar4 + 0x14),'\0');
    cVar14 = FUN_00430e40(iVar5);
    if (cVar14 != '\0') {
      iVar5 = FUN_00ace790(*(int **)((int)fVar4 + 0x14),0,&TM::CStaff::RTTI_Type_Descriptor,
                           &TM::CStar::RTTI_Type_Descriptor,0);
      iVar10 = FUN_00ace790(*(int **)((int)fVar4 + 0x14),0,&TM::CStaff::RTTI_Type_Descriptor,
                            &TM::CExtra::RTTI_Type_Descriptor,0);
      param_1 = -1.0;
      if (iVar5 == 0) {
        if (iVar10 != 0) {
          param_1 = *(float *)(iVar10 + 0xa90);
        }
      }
      else {
        fVar15 = FUN_00585e20(iVar5);
        param_1 = (float)fVar15;
      }
      piVar1 = *(int **)((int)fVar4 + 0x14);
      pcVar2 = (char *)piVar1[0x128];
      pfVar18 = &param_1;
      fVar19 = param_1;
      pfVar11 = (float *)(**(code **)(*piVar1 + 0x1e0))();
      fVar15 = FUN_0043b710(pfVar11);
      cVar14 = SUB41((float)fVar15,0);
      pvVar6 = (void *)0x1;
      uVar9 = FUN_0042fed0(pcVar2);
      pvVar12 = (void *)(**(code **)(*piVar1 + 0xf0))(uVar9);
      FUN_009d2c50(pvVar12,pvVar6,cVar14,(float)pfVar18,fVar19);
    }
  }
  if (((*(int **)((int)fVar4 + 0x14) == (int *)0x0) ||
      (iVar5 = (**(code **)(**(int **)((int)fVar4 + 0x14) + 0xf0))(), iVar5 == 0)) ||
     ((iVar5 = (**(code **)(**(int **)((int)fVar4 + 0x14) + 0xf0))(), *(int *)(iVar5 + 0xc) != 0 ||
      ((*(char *)((int)fVar4 + 0xd1) == '\0' ||
       (pvVar12 = *(void **)((int)fVar4 + 0xd4), pvVar12 == (void *)0x0)))))) {
    if (*(void **)((int)fVar4 + 0xd4) != (void *)0x0) {
      FUN_009cfb00(*(void **)((int)fVar4 + 0xd4));
    }
  }
  else {
    fVar21 = -1.0;
    fVar19 = -1.0;
    cVar14 = '\x01';
    pvVar6 = (void *)(**(code **)(**(int **)((int)fVar4 + 0x14) + 0xf0))();
    FUN_009d2c50(pvVar6,pvVar12,cVar14,fVar19,fVar21);
    FUN_009cfb00(*(void **)((int)fVar4 + 0xd4));
    iVar5 = (**(code **)(**(int **)((int)fVar4 + 0x14) + 0xf0))();
    *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | 0x20;
    FUN_009d10d0();
  }
LAB_00437b37:
  if (*(void **)((int)fVar4 + 0x50) != (void *)0x0) {
    FUN_009cfb00(*(void **)((int)fVar4 + 0x50));
    *(undefined4 *)((int)fVar4 + 0x50) = 0;
  }
  if (*(void **)((int)fVar4 + 0x4c) != (void *)0x0) {
    FUN_009cfb00(*(void **)((int)fVar4 + 0x4c));
    *(undefined4 *)((int)fVar4 + 0x4c) = 0;
  }
  puVar8 = *(undefined4 **)((int)fVar4 + 0xc0);
  if (puVar8 != (undefined4 *)0x0) {
    LVar13 = InterlockedDecrement(puVar8 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar13 == 0) && (DAT_0105b588 = 1, puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    DAT_0105b588 = uVar3;
    *(undefined4 *)((int)fVar4 + 0xc0) = 0;
  }
  if (*(void **)((int)fVar4 + 200) != (void *)0x0) {
    FUN_00971df0(*(void **)((int)fVar4 + 200));
    *(undefined4 *)((int)fVar4 + 200) = 0;
  }
  puVar8 = *(undefined4 **)((int)fVar4 + 0x40);
  if (puVar8 != *(undefined4 **)((int)fVar4 + 0x44)) {
    do {
      pvVar12 = (void *)*puVar8;
      if (pvVar12 != (void *)0x0) {
        puVar8 = *(undefined4 **)((int)pvVar12 + 4);
        if (puVar8 != (undefined4 *)0x0) {
          piVar1 = puVar8 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar8)(1);
          }
        }
        *(undefined4 *)((int)pvVar12 + 4) = 0;
                    /* WARNING: Subroutine does not return */
        _free(pvVar12);
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != *(undefined4 **)((int)fVar4 + 0x44));
  }
  if (*(void **)((int)fVar4 + 0x40) == (void *)0x0) {
    *(undefined4 *)((int)fVar4 + 0x40) = 0;
    *(undefined4 *)((int)fVar4 + 0x44) = 0;
    *(undefined4 *)((int)fVar4 + 0x48) = 0;
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)fVar4 + 0x40));
}


//// FUNCTION FUN_00437c20 @ 00437c20 ////

/* WARNING: Removing unreachable block (ram,0x00437d31) */
/* WARNING: Removing unreachable block (ram,0x00437d85) */
/* WARNING: Removing unreachable block (ram,0x00437cda) */

void FUN_00437c20(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char acStack_14 [20];
  
  (**(code **)(*param_1 + 4))();
  param_1[5] = 0;
  (**(code **)*param_1)();
  param_1[0x13] = 0;
  puVar2 = (undefined4 *)param_1[6];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[6] = 0;
  puVar2 = (undefined4 *)param_1[7];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[7] = 0;
  puVar2 = (undefined4 *)param_1[8];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[8] = 0;
  param_1[0x2e] = -0x40800000;
  *(undefined1 *)(param_1 + 0x34) = 0;
  acStack_14[0] = '\0';
  _strncpy(acStack_14,"",0);
  acStack_14[0] = '\0';
  FUN_004015d0(param_1 + 0x15,acStack_14,0);
  acStack_14[0] = '\0';
  _strncpy(acStack_14,"",0);
  acStack_14[0] = '\0';
  FUN_004015d0(param_1 + 0x25,acStack_14,0);
  acStack_14[0] = '\0';
  _strncpy(acStack_14,"",0);
  acStack_14[0] = '\0';
  FUN_004015d0(param_1 + 0x1d,acStack_14,0);
  param_1[0x2d] = 3;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  (**(code **)(param_1[9] + 4))();
  param_1[0xe] = 0;
  (**(code **)param_1[9])();
  if ((void *)param_1[0x10] == (void *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x14] = 0;
    param_1[0x33] = 0;
    *(undefined1 *)((int)param_1 + 0xd1) = 0;
    param_1[0x35] = 0;
    *(undefined1 *)(param_1 + 0x36) = 0;
    param_1[0x2f] = -0x40800000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x10]);
}


//// FUNCTION FUN_00437e10 @ 00437e10 ////

void __fastcall FUN_00437e10(undefined4 *param_1)

{
  undefined1 *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca0069;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d18cbc;
  local_4 = 6;
  FUN_009d86b0(0);
  DAT_0105eaac = 0;
  _Memory = (undefined1 *)param_1[0x8d];
  if (_Memory != (undefined1 *)0x0) {
    DAT_0105cc5c = *_Memory;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0x8d] = 0;
  if (param_1[0x19] != 0) {
    FUN_004373d0(param_1,(float)(param_1 + 0x14));
  }
  if (param_1[0x50] != 0) {
    FUN_004373d0(param_1,(float)(param_1 + 0x4b));
  }
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
  param_1[0xcc] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xce] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xce] = param_1[0xcd];
  }
  if (param_1[0xcd] != 0) {
    *(undefined4 *)(param_1[0xcd] + 4) = param_1[0xce];
  }
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xd1] = 0;
  if ((undefined4 *)param_1[0xce] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xce] = param_1[0xcd];
  }
  if (param_1[0xcd] != 0) {
    *(undefined4 *)(param_1[0xcd] + 4) = param_1[0xce];
  }
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  if ((void *)param_1[0x8a] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x8a]);
  }
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x83] = &PTR_FUN_00d18c6c;
  if ((undefined4 *)param_1[0x85] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x85] = param_1[0x84];
  }
  if (param_1[0x84] != 0) {
    *(undefined4 *)(param_1[0x84] + 4) = param_1[0x85];
  }
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x88] = 0;
  if ((undefined4 *)param_1[0x85] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x85] = param_1[0x84];
  }
  if (param_1[0x84] != 0) {
    *(undefined4 *)(param_1[0x84] + 4) = param_1[0x85];
  }
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  local_4._0_1_ = 1;
  FUN_00437260(param_1 + 0x4b);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00437260(param_1 + 0x14);
  local_4 = 0xffffffff;
  FUN_0053d4f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00438050 @ 00438050 ////

undefined4 * __thiscall FUN_00438050(void *this,byte param_1)

{
  FUN_00437e10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00438070 @ 00438070 ////

void FUN_00438070(void)

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
  puStack_8 = &LAB_00ca0088;
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


//// FUNCTION FUN_00438130 @ 00438130 ////

void __thiscall FUN_00438130(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00438070();
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
      _Dst = FUN_00436bd0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00436160(param_1,iVar5,param_1 + param_2);
      FUN_00436bd0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00434090(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00436160(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00434bd0(param_1,(int)pvVar3,iVar5);
    FUN_00434090(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00438370 @ 00438370 ////

int * __fastcall FUN_00438370(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca0103;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (int)param_1;
  *param_1 = (int)&PTR_FUN_00d18c4c;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  piVar1 = param_1 + 9;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (int)piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c6c;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = (int)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x14;
  param_1[0x1d] = (int)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x14;
  param_1[0x25] = (int)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x14;
  local_4 = 8;
  (**(code **)(*param_1 + 4))();
  param_1[5] = 0;
  (**(code **)*param_1)();
  puVar3 = (undefined4 *)param_1[6];
  if (puVar3 != (undefined4 *)0x0) {
    piVar2 = puVar3 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  param_1[6] = 0;
  puVar3 = (undefined4 *)param_1[7];
  if (puVar3 != (undefined4 *)0x0) {
    piVar2 = puVar3 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  param_1[7] = 0;
  puVar3 = (undefined4 *)param_1[8];
  if (puVar3 != (undefined4 *)0x0) {
    piVar2 = puVar3 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  param_1[8] = 0;
  (**(code **)(*piVar1 + 4))();
  param_1[0xe] = 0;
  (**(code **)*piVar1)();
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_004015d0(param_1 + 0x15,"",0);
  FUN_004015d0(param_1 + 0x1d,"",0);
  FUN_004015d0(param_1 + 0x25,"",0);
  param_1[0x2e] = -0x40800000;
  param_1[0x2f] = -0x40800000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x2d] = 2;
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_00438550 @ 00438550 ////

void __thiscall FUN_00438550(void *this,int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piStack_2c;
  int local_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca012e;
  local_c = ExceptionList;
  local_28 = param_1 + 0xb8;
  if (*(int *)(param_1 + 0xac) != local_28) {
    ExceptionList = &local_c;
    param_1 = *(int *)(param_1 + 0xac);
    do {
      local_4 = 0xffffffff;
      iVar3 = FUN_004e0620(*(void **)(param_1 + 8),DAT_0104da6c);
      local_18 = &local_24;
      local_20 = 0;
      local_1c = (int *)0x0;
      local_24 = &PTR_FUN_00d18c5c;
      local_10 = 0;
      local_4 = 0;
      if (iVar3 == 0) {
        FUN_00433d00((int)&local_24);
        local_10 = 0;
        (*(code *)*local_24)();
        piStack_2c = operator_new(8);
        local_4._0_1_ = 2;
        if (piStack_2c == (int *)0x0) {
          piStack_2c = (int *)0x0;
        }
        else {
          piStack_2c = FUN_00435390(piStack_2c,0,local_10);
        }
        iVar3 = *(int *)((int)this + 0x228);
        local_4 = (uint)local_4._1_3_ << 8;
        if ((iVar3 == 0) ||
           ((uint)(*(int *)((int)this + 0x230) - iVar3 >> 2) <=
            (uint)(*(int *)((int)this + 0x22c) - iVar3 >> 2))) goto LAB_004386f3;
        puVar1 = *(undefined4 **)((int)this + 0x22c);
        *puVar1 = piStack_2c;
        *(undefined4 **)((int)this + 0x22c) = puVar1 + 1;
      }
      else {
        iVar4 = FUN_0048e140(iVar3);
        (*(code *)local_24[1])();
        local_10 = iVar4;
        (*(code *)*local_24)();
        if (local_10 != 0) {
          *(int *)(local_10 + 0x48) = *(int *)(local_10 + 0x48) + 1;
        }
        piStack_2c = operator_new(8);
        local_4._0_1_ = 1;
        if (piStack_2c == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = FUN_00435390(piStack_2c,0,local_10);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        piStack_2c = piVar5;
        bVar2 = FUN_0048cc40(iVar3);
        *piVar5 = 2 - (uint)bVar2;
        iVar3 = *(int *)((int)this + 0x228);
        if ((iVar3 == 0) ||
           ((uint)(*(int *)((int)this + 0x230) - iVar3 >> 2) <=
            (uint)(*(int *)((int)this + 0x22c) - iVar3 >> 2))) {
LAB_004386f3:
          FUN_00438130((void *)((int)this + 0x224),*(undefined4 **)((int)this + 0x22c),1,&piStack_2c
                      );
        }
        else {
          puVar1 = *(undefined4 **)((int)this + 0x22c);
          *puVar1 = piVar5;
          *(undefined4 **)((int)this + 0x22c) = puVar1 + 1;
        }
      }
      local_24 = &PTR_FUN_00d18c5c;
      if (local_1c != (int *)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != 0) {
        *(int **)(local_20 + 4) = local_1c;
      }
      param_1 = *(int *)(param_1 + 4);
      local_10 = 0;
      local_20 = 0;
      local_1c = (int *)0x0;
    } while (param_1 != local_28);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00438770 @ 00438770 ////

void FUN_00438770(int param_1,int param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piStack_2c;
  int local_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca015e;
  local_c = ExceptionList;
  local_28 = param_1 + 0xb8;
  if (*(int *)(param_1 + 0xac) != local_28) {
    ExceptionList = &local_c;
    param_1 = *(int *)(param_1 + 0xac);
    do {
      local_4 = 0xffffffff;
      iVar3 = FUN_004e0620(*(void **)(param_1 + 8),*(int *)(param_2 + 0x14));
      local_18 = &local_24;
      local_20 = 0;
      local_1c = (int *)0x0;
      local_24 = &PTR_FUN_00d18c5c;
      local_10 = 0;
      local_4 = 0;
      if (iVar3 == 0) {
        FUN_00433d00((int)&local_24);
        local_10 = 0;
        (*(code *)*local_24)();
        piStack_2c = operator_new(8);
        local_4._0_1_ = 2;
        if (piStack_2c == (int *)0x0) {
          piStack_2c = (int *)0x0;
        }
        else {
          piStack_2c = FUN_00435390(piStack_2c,0,local_10);
        }
        iVar3 = *(int *)(param_2 + 0x40);
        local_4 = (uint)local_4._1_3_ << 8;
        if ((iVar3 == 0) ||
           ((uint)(*(int *)(param_2 + 0x48) - iVar3 >> 2) <=
            (uint)(*(int *)(param_2 + 0x44) - iVar3 >> 2))) goto LAB_00438915;
        puVar1 = *(undefined4 **)(param_2 + 0x44);
        *puVar1 = piStack_2c;
        *(undefined4 **)(param_2 + 0x44) = puVar1 + 1;
      }
      else {
        iVar4 = FUN_0048e140(iVar3);
        (*(code *)local_24[1])();
        local_10 = iVar4;
        (*(code *)*local_24)();
        if (local_10 != 0) {
          *(int *)(local_10 + 0x48) = *(int *)(local_10 + 0x48) + 1;
        }
        piStack_2c = operator_new(8);
        local_4._0_1_ = 1;
        if (piStack_2c == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = FUN_00435390(piStack_2c,0,local_10);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        piStack_2c = piVar5;
        bVar2 = FUN_0048cc40(iVar3);
        *piVar5 = 2 - (uint)bVar2;
        iVar3 = *(int *)(param_2 + 0x40);
        if ((iVar3 == 0) ||
           ((uint)(*(int *)(param_2 + 0x48) - iVar3 >> 2) <=
            (uint)(*(int *)(param_2 + 0x44) - iVar3 >> 2))) {
LAB_00438915:
          FUN_00438130((void *)(param_2 + 0x3c),*(undefined4 **)(param_2 + 0x44),1,&piStack_2c);
        }
        else {
          puVar1 = *(undefined4 **)(param_2 + 0x44);
          *puVar1 = piVar5;
          *(undefined4 **)(param_2 + 0x44) = puVar1 + 1;
        }
      }
      local_24 = &PTR_FUN_00d18c5c;
      if (local_1c != (int *)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != 0) {
        *(int **)(local_20 + 4) = local_1c;
      }
      param_1 = *(int *)(param_1 + 4);
      local_10 = 0;
      local_20 = 0;
      local_1c = (int *)0x0;
    } while (param_1 != local_28);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00438990 @ 00438990 ////

void FUN_00438990(int *param_1,int *param_2,float param_3)

{
  float *this;
  bool bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 *puVar7;
  float10 fVar8;
  void *pvVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  uint **ppuVar13;
  float fVar14;
  uint *puStack_e0;
  void *local_dc;
  uint auStack_d8 [51];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca01bb;
  local_c = ExceptionList;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_3 == 0.0) {
    return;
  }
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 4))();
  param_1[5] = (int)param_2;
  (**(code **)*param_1)();
  this = (float *)(param_1 + 6);
  *(int *)((int)param_3 + 0x48) = *(int *)((int)param_3 + 0x48) + 1;
  puVar7 = (undefined4 *)*this;
  if (puVar7 != (undefined4 *)0x0) {
    piVar5 = puVar7 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar7)(1);
    }
  }
  *this = param_3;
  param_1[0x2d] = param_2[0x128];
  puStack_e0 = DAT_0104da84;
  (**(code **)(param_1[9] + 4))();
  param_1[0xe] = (int)puStack_e0;
  (**(code **)param_1[9])();
  ppuVar13 = &puStack_e0;
  pfVar2 = (float *)(**(code **)(*param_2 + 0x1e0))();
  fVar8 = FUN_0043b710(pfVar2);
  param_1[0x2e] = (int)(float)fVar8;
  iVar3 = FUN_0059c6e0(param_2,'\x01');
  iVar4 = FUN_0059c6e0(param_2,'\0');
  *(bool *)((int)param_1 + 0xd1) = iVar4 != iVar3;
  if (((iVar4 != iVar3) && ((int *)param_1[5] != (int *)0x0)) &&
     (iVar3 = (**(code **)(*(int *)param_1[5] + 0xf0))(), *(int *)(iVar3 + 0xc) != 0)) {
    iVar3 = (**(code **)(*(int *)param_1[5] + 0xf0))();
    iVar3 = *(int *)(iVar3 + 0xc);
    param_1[0x35] = iVar3;
    piVar5 = (int *)(iVar3 + 0xa0);
    *piVar5 = *piVar5 + 1;
  }
  piVar5 = (int *)FUN_00ace790(param_2,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar5 == (int *)0x0) {
    iVar3 = FUN_00ace790(param_2,0,&TM::CStaff::RTTI_Type_Descriptor,
                         &TM::CExtra::RTTI_Type_Descriptor,0);
    if (iVar3 != 0) {
      param_1[0x2f] = *(int *)(iVar3 + 0xa90);
    }
  }
  else {
    fVar8 = FUN_00585e20((int)piVar5);
    param_1[0x2f] = (int)(float)fVar8;
  }
  iVar3 = (**(code **)(*(int *)param_1[5] + 0xf0))();
  iVar3 = *(int *)(iVar3 + 0xc);
  param_1[0x14] = iVar3;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0xa0) = *(int *)(iVar3 + 0xa0) + 1;
  }
  fVar11 = -1.0;
  cVar10 = '\0';
  pvVar9 = (void *)0x1;
  pvVar6 = (void *)(**(code **)(*(int *)param_1[5] + 0xf0))(0);
  FUN_009d2c50(pvVar6,pvVar9,cVar10,fVar11,(float)ppuVar13);
  if ((DAT_00f87c7c != 0) && (*(char *)(DAT_00f87c7c + 0x350) != '\0')) {
    iVar3 = FUN_004319b0((int)*this);
    puStack_e0 = FUN_009ce790(iVar3);
    puVar7 = FUN_009d03c0((int)puStack_e0);
    param_1[0x13] = (int)puVar7;
    if (puStack_e0 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_e0);
    }
    FUN_00401e30(param_1 + 0x15,(undefined4 *)((int)*this + 0x78));
  }
  puVar7 = FUN_00433eb0();
  param_1[0x30] = (int)puVar7;
  FUN_0097e2b0((int)puVar7);
  FUN_0097e330((void *)param_1[0x30],1);
  *(uint *)(param_1[0x30] + 0x9c) = *(uint *)(param_1[0x30] + 0x9c) | 8;
  *(uint *)(param_1[0x30] + 0x9c) = *(uint *)(param_1[0x30] + 0x9c) | 0x8000000;
  if (param_1[5] == 0) {
    ExceptionList = local_c;
    return;
  }
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)FUN_00ace790(param_2,0,&TM::CStaff::RTTI_Type_Descriptor,
                                 &TM::CExtra::RTTI_Type_Descriptor,0);
    if (piVar5 == (int *)0x0) goto LAB_00438cbd;
    FUN_009d2990(auStack_d8,(char *)0x0,(char *)0x0,0.0);
    uStack_4 = 1;
    iVar3 = (**(code **)(*piVar5 + 0xf0))();
    FUN_004356e0(auStack_d8,(uint *)(iVar3 + 0x38));
    iVar3 = param_1[0x30];
    iVar4 = param_1[0x2d];
  }
  else {
    FUN_009d2990(auStack_d8,(char *)0x0,(char *)0x0,0.0);
    uStack_4 = 0;
    iVar3 = (**(code **)(*piVar5 + 0xf0))();
    FUN_004356e0(auStack_d8,(uint *)(iVar3 + 0x38));
    iVar4 = param_1[0x2d];
    iVar3 = param_1[0x30];
  }
  pvVar6 = FUN_009d30f0(iVar3,(uint)(iVar4 == 1),1,auStack_d8,'\0');
  param_1[0x31] = (int)pvVar6;
  (**(code **)(*piVar5 + 0x220))(pvVar6);
  uStack_4 = 0xffffffff;
  FUN_00434ae0((int)auStack_d8);
LAB_00438cbd:
  if (param_1[0x31] != 0) {
    iVar3 = (**(code **)(*(int *)param_1[5] + 0xf0))();
    FUN_009d1330((void *)param_1[0x31],*(int *)(iVar3 + 0x248));
    iVar3 = (**(code **)(*(int *)param_1[5] + 0xf0))();
    FUN_009d60a0((void *)param_1[0x31],(char *)(iVar3 + 0x250));
    fVar11 = *this;
    if (fVar11 != 0.0) {
      piVar5 = (int *)param_1[5];
      fVar14 = fVar11;
      fVar8 = (float10)(**(code **)(*piVar5 + 0x1b0))();
      fVar8 = (float10)(**(code **)(*piVar5 + 0x1ac))(fVar11,(float)fVar8);
      fVar12 = (float)fVar8;
      cVar10 = '\0';
      pvVar6 = (void *)FUN_004319b0((int)fVar11);
      FUN_009d2c50((void *)param_1[0x31],pvVar6,cVar10,fVar12,fVar14);
    }
  }
  if ((DAT_0104da80 != 0) && (DAT_0104d8e8 != 0)) {
    FUN_00438770(DAT_0104da80,(int)param_1);
    if ((DAT_0104da80 == 0) || (param_1[0xe] != 0)) {
      if (param_1[0xe] != 0) {
        bVar1 = FUN_0048cc40(param_1[0xe]);
        piVar5 = param_1 + 8;
        if (bVar1) {
          *(undefined1 *)((int)local_dc + 0x354) = 1;
        }
        iVar3 = FUN_0048e140(param_1[0xe]);
        FUN_004349c0(piVar5,iVar3);
        if (*piVar5 != 0) {
          iVar3 = FUN_004319b0(*piVar5);
          if (iVar3 != 0) {
            *(int *)(iVar3 + 0xa0) = *(int *)(iVar3 + 0xa0) + 1;
          }
          if ((void *)param_1[0x13] != (void *)0x0) {
            FUN_009cfb00((void *)param_1[0x13]);
            param_1[0x13] = 0;
          }
          param_1[0x13] = iVar3;
          FUN_00401e30(param_1 + 0x15,(undefined4 *)(*piVar5 + 0x78));
          puStack_e0 = (uint *)0x0;
          uStack_4 = 4;
          local_dc = operator_new(0xe0);
          uStack_4._0_1_ = 5;
          if (local_dc == (void *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = FUN_00432150(local_dc,*piVar5);
          }
          uStack_4 = CONCAT31(uStack_4._1_3_,4);
          FUN_00430190(&puStack_e0,puVar7);
          FUN_004349f0(this,(int *)&puStack_e0);
          bVar1 = FUN_0048cc40(param_1[0xe]);
          if (bVar1) {
            FUN_0048dd10((void *)param_1[0xe],(int)*this);
            FUN_0048dd70(param_1[0xe]);
          }
          else {
            bVar1 = FUN_0048cc60(param_1[0xe]);
            if (bVar1) {
              FUN_0048dfb0((void *)param_1[0xe],(int)*this);
              FUN_0048dd70(param_1[0xe]);
            }
            else {
              FUN_0048e0d0((void *)param_1[0xe],(int)*this);
            }
          }
          piVar5 = (int *)param_1[5];
          fVar12 = *this;
          fVar14 = fVar12;
          fVar8 = (float10)(**(code **)(*piVar5 + 0x1b0))();
          fVar8 = (float10)(**(code **)(*piVar5 + 0x1ac))(fVar12,(float)fVar8);
          fVar11 = (float)fVar8;
          cVar10 = '\0';
          pvVar6 = (void *)FUN_004319b0((int)fVar12);
          FUN_009d2c50((void *)param_1[0x31],pvVar6,cVar10,fVar11,fVar14);
          uStack_4 = 0xffffffff;
          FUN_00430830((int *)&puStack_e0);
        }
      }
    }
    else {
      if (DAT_0104d8e8 != 0) {
        iVar3 = FUN_005f5ba0(DAT_0104d8e8);
        FUN_00433ba0((void *)((int)local_dc + 0x360),iVar3);
        iVar3 = param_1[5];
        pvVar6 = (void *)FUN_005b2220(*(int *)((int)local_dc + 0x374));
        iVar3 = FUN_005a76f0(pvVar6,iVar3);
        FUN_004349c0(param_1 + 8,iVar3);
        if (param_1[8] == 0) {
          *(undefined1 *)((int)local_dc + 0x356) = 1;
          *(undefined1 *)((int)local_dc + 0x357) = 1;
        }
      }
      piVar5 = param_1 + 8;
      if (param_1[8] != 0) {
        *(undefined1 *)((int)local_dc + 0x355) = 1;
      }
      if (*this != 0.0) {
        if (*piVar5 == 0) {
          if (*this != 0.0) {
            if ((void *)param_1[0x13] != (void *)0x0) {
              FUN_009cfb00((void *)param_1[0x13]);
              param_1[0x13] = 0;
            }
            iVar3 = FUN_004319b0((int)*this);
            puVar7 = FUN_009d06a0(iVar3);
            param_1[0x13] = (int)puVar7;
            FUN_00401e30(param_1 + 0x15,(undefined4 *)((int)*this + 0x78));
            local_dc = operator_new(0xe0);
            uStack_4 = 3;
            if (local_dc == (void *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar7 = FUN_00432150(local_dc,(int)*this);
            }
            uStack_4 = 0xffffffff;
            FUN_00430190(piVar5,puVar7);
            FUN_004306b0((void *)*piVar5,(void *)param_1[0x13],param_1 + 0x15);
          }
        }
        else {
          if ((void *)param_1[0x13] != (void *)0x0) {
            FUN_009cfb00((void *)param_1[0x13]);
            param_1[0x13] = 0;
          }
          iVar3 = FUN_004319b0((int)*this);
          puVar7 = FUN_009d06a0(iVar3);
          param_1[0x13] = (int)puVar7;
          FUN_00401e30(param_1 + 0x15,(undefined4 *)((int)*this + 0x78));
          local_dc = operator_new(0xe0);
          uStack_4 = 2;
          if (local_dc == (void *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = FUN_00432150(local_dc,*piVar5);
          }
          uStack_4 = 0xffffffff;
          FUN_00430190(piVar5,puVar7);
          FUN_004306b0((void *)*piVar5,(void *)param_1[0x13],param_1 + 0x15);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00439080 @ 00439080 ////

/* WARNING: Removing unreachable block (ram,0x004393c1) */

undefined4 * __thiscall
FUN_00439080(void *this,int *param_1,float param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  ulonglong uVar7;
  int *piVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca026b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053d690(this);
  piVar1 = (int *)((int)this + 0x50);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d18cbc;
  FUN_00438370(piVar1);
  local_4._0_1_ = 1;
  FUN_00438370((int *)((int)this + 300));
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 **)((int)this + 0x218) = (undefined4 *)((int)this + 0x20c);
  *(undefined4 *)((int)this + 0x20c) = &PTR_FUN_00d18c6c;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  local_4._0_1_ = 4;
  *(undefined1 *)((int)this + 0x238) = 0;
  FUN_009a2210((undefined4 *)((int)this + 0x23c));
  FUN_009a2210((undefined4 *)((int)this + 0x260));
  FUN_009a2210((undefined4 *)((int)this + 0x284));
  FUN_009a2210((undefined4 *)((int)this + 0x2a8));
  FUN_009a2210((undefined4 *)((int)this + 0x2cc));
  FUN_009a2210((undefined4 *)((int)this + 0x2f0));
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 **)((int)this + 0x33c) = (undefined4 *)((int)this + 0x330);
  *(undefined4 *)((int)this + 0x330) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined1 *)((int)this + 0x350) = param_3;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined1 *)((int)this + 0x351) = 0;
  *(undefined1 *)((int)this + 0x352) = param_4;
  *(undefined1 *)((int)this + 0x353) = param_5;
  *(undefined1 *)((int)this + 0x354) = 0;
  *(undefined1 *)((int)this + 0x355) = 0;
  *(undefined1 *)((int)this + 0x356) = 0;
  *(undefined1 *)((int)this + 0x357) = 0;
  *(undefined1 *)((int)this + 0x358) = 0;
  *(undefined1 *)((int)this + 0x359) = 0;
  *(undefined1 *)((int)this + 0x35a) = 0;
  *(undefined1 *)((int)this + 0x35b) = 0;
  *(undefined1 *)((int)this + 0x35c) = 0;
  *(undefined1 *)((int)this + 0x35d) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 **)((int)this + 0x36c) = (undefined4 *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x360) = &PTR_FUN_00d18c3c;
  *(undefined4 *)((int)this + 0x374) = 0;
  local_4._0_1_ = 6;
  FUN_00437c20(piVar1);
  FUN_00437c20((int *)((int)this + 300));
  puVar4 = DAT_00f87c7c;
  if (DAT_00f87c7c != (undefined4 *)0x0) {
    iVar3 = DAT_00f87c7c[0x12];
    DAT_00f87c7c[0x12] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)*puVar4)(1);
    }
    (*(code *)DAT_00f87c68[1])();
    DAT_00f87c7c = (undefined4 *)0x0;
    (*(code *)*DAT_00f87c68)();
  }
  (*(code *)DAT_00f87c68[1])();
  DAT_00f87c7c = this;
  (*(code *)*DAT_00f87c68)();
  FUN_00438990(piVar1,param_1,param_2);
  *(int **)((int)this + 0x208) = piVar1;
  if ((DAT_0104d8e8 == (int *)0x0) || (DAT_0104da70 == (int *)0x0)) goto LAB_00439456;
  piVar8 = DAT_0104da70;
  pvVar2 = (void *)FUN_005b2220(DAT_0104da80);
  iVar3 = FUN_005a76f0(pvVar2,(int)piVar8);
  if (DAT_0104da84 == 0) {
    if (iVar3 != 0) {
      pvVar2 = operator_new(0xe0);
      local_4 = CONCAT31(local_4._1_3_,7);
      if (pvVar2 == (void *)0x0) goto LAB_004393aa;
      piVar8 = DAT_0104da70;
      this_00 = (void *)FUN_005b2220(DAT_0104da80);
      iVar3 = FUN_005a76f0(this_00,(int)piVar8);
      puVar4 = FUN_00432150(pvVar2,iVar3);
      goto LAB_004393ac;
    }
LAB_004393b7:
    if (param_2 != 0.0) goto LAB_004393f9;
    pvVar2 = operator_new(0xe0);
    local_4 = CONCAT31(local_4._1_3_,0xb);
    if (pvVar2 == (void *)0x0) goto LAB_00439421;
    iVar3 = FUN_0059bbd0(DAT_0104da70);
    puVar4 = FUN_00432150(pvVar2,iVar3);
  }
  else {
    piVar8 = DAT_0104da70;
    pvVar2 = (void *)(**(code **)(*DAT_0104d8e8 + 0x100))();
    iVar3 = FUN_004e0620(pvVar2,(int)piVar8);
    if (iVar3 == 0) {
      piVar8 = DAT_0104da70;
      pvVar2 = (void *)FUN_005b2220(DAT_0104da80);
      iVar3 = FUN_005a76f0(pvVar2,(int)piVar8);
      pvVar2 = operator_new(0xe0);
      if (iVar3 == 0) {
        local_4 = CONCAT31(local_4._1_3_,10);
        if (pvVar2 == (void *)0x0) goto LAB_004393aa;
        puVar4 = FUN_00432150(pvVar2,DAT_0104da74);
        goto LAB_004393ac;
      }
      local_4 = CONCAT31(local_4._1_3_,9);
    }
    else {
      iVar3 = FUN_0048e140(iVar3);
      if (iVar3 == 0) goto LAB_004393b7;
      pvVar2 = operator_new(0xe0);
      local_4 = CONCAT31(local_4._1_3_,8);
    }
    if (pvVar2 == (void *)0x0) {
LAB_004393aa:
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_00432150(pvVar2,iVar3);
    }
LAB_004393ac:
    local_4._0_1_ = 6;
    if (puVar4 == (undefined4 *)0x0) goto LAB_004393b7;
LAB_004393f9:
    pvVar2 = operator_new(0xe0);
    local_4 = CONCAT31(local_4._1_3_,0xc);
    if (pvVar2 == (void *)0x0) {
LAB_00439421:
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_00432150(pvVar2,(int)param_2);
    }
  }
  local_4._0_1_ = 6;
  FUN_00435890((int *)((int)this + 300),DAT_0104da70,puVar4);
  *(int **)((int)this + 0x208) = (int *)((int)this + 300);
  FUN_00434c90(this,"cos_generic.flm");
  *(int **)((int)this + 0x208) = piVar1;
LAB_00439456:
  *(int **)((int)this + 0x208) = piVar1;
  puVar5 = operator_new(1);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
    uVar6 = extraout_ECX;
  }
  else {
    uVar6 = CONCAT31((int3)((uint)extraout_ECX >> 8),DAT_0105cc5c);
    *puVar5 = DAT_0105cc5c;
    DAT_0105cc5c = 0;
  }
  *(undefined1 **)((int)this + 0x234) = puVar5;
  DAT_0105eaac = 1;
  uVar7 = FUN_00990ae0(uVar6,extraout_EDX);
  *(int *)((int)this + 800) = (int)uVar7;
  iVar3 = FUN_004319b0((int)param_2);
  FUN_004361e0(this,iVar3);
  FUN_004338c0((int)this);
  FUN_009d86b0(*(int *)((int)this + 0x114));
  FUN_009b0f60(4);
  uVar7 = FUN_00990ae0(extraout_ECX_00,extraout_EDX_00);
  *(int *)((int)this + 0x32c) = (int)uVar7 + 0x5dc;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00439500 @ 00439500 ////

void __fastcall FUN_00439500(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00439530 @ 00439530 ////

void FUN_00439530(void)

{
  return;
}


//// FUNCTION FUN_00439700 @ 00439700 ////

void __fastcall FUN_00439700(int *param_1)

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
  puStack_8 = &LAB_00ca0288;
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


//// FUNCTION FUN_004397d0 @ 004397d0 ////

void __thiscall FUN_004397d0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d18c4c;
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


//// FUNCTION FUN_00439810 @ 00439810 ////

void __cdecl FUN_00439810(int *param_1,int *param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  int iVar1;
  uint _Size;
  void *pvVar2;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    _Count = param_3[1];
    _Source = (char *)*param_3;
    if ((uint)param_1[2] <= _Count) {
      if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar2 = _malloc(_Size);
      *param_1 = (int)pvVar2;
    }
    _strncpy((char *)*param_1,_Source,_Count);
    iVar1 = *param_1;
    param_1[1] = _Count;
    param_1 = param_1 + 8;
    *(undefined1 *)(_Count + iVar1) = 0;
  } while( true );
}


//// FUNCTION FUN_00439880 @ 00439880 ////

int * __cdecl FUN_00439880(int param_1,int param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int *piVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = *(uint *)(param_2 + -0x1c);
    _Source = *(char **)(param_2 + -0x20);
    param_2 = param_2 + -0x20;
    piVar2 = param_3 + -8;
    if ((uint)param_3[-6] <= _Count) {
      if (0x14 < (uint)param_3[-6]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar2);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-6] = _Size;
      pvVar1 = _malloc(_Size);
      *piVar2 = (int)pvVar1;
    }
    _strncpy((char *)*piVar2,_Source,_Count);
    param_3[-7] = _Count;
    *(undefined1 *)(_Count + *piVar2) = 0;
    param_3 = piVar2;
  } while (param_2 != param_1);
  return piVar2;
}


//// FUNCTION FUN_00439900 @ 00439900 ////

void __cdecl FUN_00439900(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,(char *)*param_2,param_2[1]);
  }
  return;
}


//// FUNCTION FUN_00439930 @ 00439930 ////

void __fastcall FUN_00439930(int param_1)

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
  puStack_8 = &LAB_00ca02c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Credit.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x17;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("(int&)(StaffType)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x28),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Credit.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x18;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x2c));
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
  uVar3 = FUN_0098b490("PProject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x2c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Credit.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x19;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x44));
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
  uVar3 = FUN_0098b490("PStaff");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x44));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Credit.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x1a;
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
  uVar3 = FUN_0098b490("CreditAs");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x5c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Credit.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x1b;
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
  uVar3 = FUN_0098b490("CreditIs");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x7c));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00439e00 @ 00439e00 ////

int * __cdecl FUN_00439e00(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (int *)0x0) {
      *param_3 = (int)(param_3 + 3);
      *(undefined1 *)(param_3 + 3) = 0;
      param_3[1] = 0;
      param_3[2] = 0x14;
      _Count = param_1[1];
      _Source = (char *)*param_1;
      if (0x13 < _Count) {
        _Size = _Count + 0x20 & 0xffffffe0;
        param_3[2] = _Size;
        pvVar1 = _malloc(_Size);
        *param_3 = (int)pvVar1;
      }
      _strncpy((char *)*param_3,_Source,_Count);
      param_3[1] = _Count;
      *(undefined1 *)(_Count + *param_3) = 0;
    }
    param_1 = param_1 + 8;
    param_3 = param_3 + 8;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00439ea0 @ 00439ea0 ////

void __cdecl FUN_00439ea0(int *param_1,int param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (int *)0x0) {
      *param_1 = (int)(param_1 + 3);
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      _Count = param_3[1];
      _Source = (char *)*param_3;
      if (0x13 < _Count) {
        _Size = _Count + 0x20 & 0xffffffe0;
        param_1[2] = _Size;
        pvVar1 = _malloc(_Size);
        *param_1 = (int)pvVar1;
      }
      _strncpy((char *)*param_1,_Source,_Count);
      param_1[1] = _Count;
      *(undefined1 *)(_Count + *param_1) = 0;
    }
    param_1 = param_1 + 8;
  }
  return;
}


//// FUNCTION FUN_00439f80 @ 00439f80 ////

void FUN_00439f80(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  FUN_00439e00(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00439fa0 @ 00439fa0 ////

int * FUN_00439fa0(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_00439ea0(param_1,param_2,param_3);
  return param_1 + param_2 * 8;
}


//// FUNCTION FUN_00439fd0 @ 00439fd0 ////

void __thiscall FUN_00439fd0(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int extraout_ECX;
  int iVar6;
  undefined1 *local_3c;
  undefined4 local_38;
  uint local_34;
  undefined1 local_30 [20];
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca02e8;
  local_10 = ExceptionList;
  local_3c = local_30;
  local_14 = &stack0xffffffb8;
  local_30[0] = 0;
  local_38 = 0;
  local_34 = 0x14;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004015d0(&local_3c,(char *)*param_3,param_3[1]);
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
      uVar2 = FUN_004061d0();
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
      piVar5 = FUN_00439e00(*(undefined4 **)((int)this + 4),param_1,piVar4);
      FUN_00439ea0(piVar5,param_2,&local_3c);
      FUN_00439e00(param_1,*(undefined4 **)((int)this + 8),piVar5 + param_2 * 8);
      puVar1 = *(undefined4 **)((int)this + 4);
      if (puVar1 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - (int)puVar1 >> 5;
      }
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00405fe0(puVar1,*(undefined4 **)((int)this + 8));
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
        FUN_00439e00(param_1,local_1c,param_1 + param_2 * 8);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00439fa0(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1 >> 5),&local_3c);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x20;
        *(int *)((int)this + 8) = iVar3;
        FUN_00439810(param_1,(int *)(iVar3 + param_2 * -0x20),&local_3c);
      }
      else {
        piVar5 = local_1c + param_2 * -8;
        piVar4 = FUN_00439e00(piVar5,local_1c,local_1c);
        *(int **)((int)this + 8) = piVar4;
        FUN_00439880((int)param_1,(int)piVar5,local_1c);
        FUN_00439810(param_1,param_1 + param_2 * 8,&local_3c);
      }
    }
  }
  if (0x14 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0043a2d0 @ 0043a2d0 ////

void __thiscall FUN_0043a2d0(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 5) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 5))
     ) {
    piVar2 = *(int **)((int)this + 8);
    FUN_00439ea0(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 8;
    return;
  }
  FUN_00439fd0(this,*(int **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0043a340 @ 0043a340 ////

void FUN_0043a340(void)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *local_124;
  undefined4 local_120;
  uint local_11c;
  char local_118 [20];
  char *local_104;
  undefined4 local_100;
  uint local_fc;
  char local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0424;
  local_c = ExceptionList;
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_104,"credits",7);
  local_100 = 7;
  local_104[7] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_104);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"soundman",8);
  local_120 = 8;
  local_124[8] = '\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar3 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
  if (((char)uVar3 == '\0') || (uVar3 = FUN_00558120(local_e4,0), (char)uVar3 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_4 = 2;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  if (bVar1) {
    do {
      puVar4 = FUN_00558590(local_e4,&local_124,4);
      piVar2 = DAT_00f87d08;
      local_4 = CONCAT31(local_4._1_3_,4);
      if ((DAT_00f87d04 == 0) ||
         ((uint)(DAT_00f87d0c - DAT_00f87d04 >> 5) <= (uint)((int)DAT_00f87d08 - DAT_00f87d04 >> 5))
         ) {
        FUN_00439fd0(&DAT_00f87d00,DAT_00f87d08,1,puVar4);
      }
      else {
        FUN_00439ea0(DAT_00f87d08,1,puVar4);
        DAT_00f87d08 = piVar2 + 8;
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_124);
      }
      uVar3 = FUN_00558120(local_e4,2);
    } while ((char)uVar3 != '\0');
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"cameraman",9);
  local_120 = 9;
  local_124[9] = '\0';
  local_4 = CONCAT31(local_4._1_3_,5);
  uVar3 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
  if (((char)uVar3 == '\0') || (uVar3 = FUN_00558120(local_e4,0), (char)uVar3 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_4 = 2;
  if (local_11c < 0x15) {
    if (bVar1) {
      do {
        puVar4 = FUN_00558590(local_e4,&local_124,4);
        piVar2 = DAT_00f87cf8;
        local_4 = CONCAT31(local_4._1_3_,6);
        if ((DAT_00f87cf4 == 0) ||
           ((uint)(DAT_00f87cfc - DAT_00f87cf4 >> 5) <=
            (uint)((int)DAT_00f87cf8 - DAT_00f87cf4 >> 5))) {
          FUN_00439fd0(&DAT_00f87cf0,DAT_00f87cf8,1,puVar4);
        }
        else {
          FUN_00439ea0(DAT_00f87cf8,1,puVar4);
          DAT_00f87cf8 = piVar2 + 8;
        }
        local_4 = CONCAT31(local_4._1_3_,2);
        if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
          _free(local_124);
        }
        uVar3 = FUN_00558120(local_e4,2);
      } while ((char)uVar3 != '\0');
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"runner",6);
    local_120 = 6;
    local_124[6] = '\0';
    local_4 = CONCAT31(local_4._1_3_,7);
    uVar3 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
    if (((char)uVar3 == '\0') || (uVar3 = FUN_00558120(local_e4,0), (char)uVar3 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    local_4 = 2;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    if (bVar1) {
      do {
        puVar4 = FUN_00558590(local_e4,&local_124,4);
        piVar2 = DAT_00f87d28;
        local_4 = CONCAT31(local_4._1_3_,8);
        if ((DAT_00f87d24 == 0) ||
           ((uint)(DAT_00f87d2c - DAT_00f87d24 >> 5) <=
            (uint)((int)DAT_00f87d28 - DAT_00f87d24 >> 5))) {
          FUN_00439fd0(&DAT_00f87d20,DAT_00f87d28,1,puVar4);
        }
        else {
          FUN_00439ea0(DAT_00f87d28,1,puVar4);
          DAT_00f87d28 = piVar2 + 8;
        }
        local_4 = CONCAT31(local_4._1_3_,2);
        if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
          _free(local_124);
        }
        uVar3 = FUN_00558120(local_e4,2);
      } while ((char)uVar3 != '\0');
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"clapperman",10);
    local_120 = 10;
    local_124[10] = '\0';
    local_4 = CONCAT31(local_4._1_3_,9);
    uVar3 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
    if (((char)uVar3 == '\0') || (uVar3 = FUN_00558120(local_e4,0), (char)uVar3 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    local_4 = 2;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    if (bVar1) {
      do {
        puVar4 = FUN_00558590(local_e4,&local_124,4);
        piVar2 = DAT_00f87d48;
        local_4 = CONCAT31(local_4._1_3_,10);
        if ((DAT_00f87d44 == 0) ||
           ((uint)(DAT_00f87d4c - DAT_00f87d44 >> 5) <=
            (uint)((int)DAT_00f87d48 - DAT_00f87d44 >> 5))) {
          FUN_00439fd0(&DAT_00f87d40,DAT_00f87d48,1,puVar4);
        }
        else {
          FUN_00439ea0(DAT_00f87d48,1,puVar4);
          DAT_00f87d48 = piVar2 + 8;
        }
        local_4 = CONCAT31(local_4._1_3_,2);
        if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
          _free(local_124);
        }
        uVar3 = FUN_00558120(local_e4,2);
      } while ((char)uVar3 != '\0');
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"extra",5);
    local_120 = 5;
    local_124[5] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xb);
    uVar3 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
    if (((char)uVar3 == '\0') || (uVar3 = FUN_00558120(local_e4,0), (char)uVar3 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    local_4 = 2;
    if (local_11c < 0x15) {
      if (bVar1) {
        do {
          puVar4 = FUN_00558590(local_e4,&local_124,4);
          piVar2 = DAT_00f87cc8;
          local_4 = CONCAT31(local_4._1_3_,0xc);
          if ((DAT_00f87cc4 == 0) ||
             ((uint)(DAT_00f87ccc - DAT_00f87cc4 >> 5) <=
              (uint)((int)DAT_00f87cc8 - DAT_00f87cc4 >> 5))) {
            FUN_00439fd0(&DAT_00f87cc0,DAT_00f87cc8,1,puVar4);
          }
          else {
            FUN_00439ea0(DAT_00f87cc8,1,puVar4);
            DAT_00f87cc8 = piVar2 + 8;
          }
          local_4 = CONCAT31(local_4._1_3_,2);
          if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
            _free(local_124);
          }
          uVar3 = FUN_00558120(local_e4,2);
        } while ((char)uVar3 != '\0');
      }
      local_124 = local_118;
      local_118[0] = '\0';
      local_120 = 0;
      local_11c = 0x14;
      _strncpy(local_124,"stuntman",8);
      local_120 = 8;
      local_124[8] = '\0';
      local_4 = CONCAT31(local_4._1_3_,0xd);
      uVar3 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
      if (((char)uVar3 == '\0') || (uVar3 = FUN_00558120(local_e4,0), (char)uVar3 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      local_4 = 2;
      if (local_11c < 0x15) {
        if (bVar1) {
          do {
            puVar4 = FUN_00558590(local_e4,&local_124,4);
            piVar2 = DAT_00f87d88;
            local_4 = CONCAT31(local_4._1_3_,0xe);
            if ((DAT_00f87d84 == 0) ||
               ((uint)(DAT_00f87d8c - DAT_00f87d84 >> 5) <=
                (uint)((int)DAT_00f87d88 - DAT_00f87d84 >> 5))) {
              FUN_00439fd0(&DAT_00f87d80,DAT_00f87d88,1,puVar4);
            }
            else {
              FUN_00439ea0(DAT_00f87d88,1,puVar4);
              DAT_00f87d88 = piVar2 + 8;
            }
            local_4 = CONCAT31(local_4._1_3_,2);
            if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
              _free(local_124);
            }
            uVar3 = FUN_00558120(local_e4,2);
          } while ((char)uVar3 != '\0');
        }
        local_4 = 0xffffffff;
        FUN_00558920(local_e4);
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_124);
}


//// FUNCTION FUN_0043ab40 @ 0043ab40 ////

undefined4 * __fastcall FUN_0043ab40(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0483;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d18da4;
  param_1[0xe] = &PTR_LAB_00d18d84;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_1 + 0x19;
  param_1[0x19] = &PTR_FUN_00d18c3c;
  param_1[0x1e] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = param_1 + 0x1f;
  param_1[0x1f] = &PTR_FUN_00d18c4c;
  param_1[0x24] = 0;
  param_1[0x25] = param_1 + 0x28;
  *(undefined2 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x25,(wchar_t *)&lpCaption_00d16918,uVar1);
  param_1[0x2d] = param_1 + 0x30;
  *(undefined2 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x2d,(wchar_t *)&lpCaption_00d16918,uVar1);
  param_1[0x37] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  param_1[0x37] = param_1;
  FUN_00acdb9e(0xe4fa1c);
  iVar2 = FUN_0097dda0();
  param_1[0x38] = iVar2;
  if (s___AVCCostumeFiddler_TM___00e4fa00[0x19] != '\0') {
    iVar2 = 0xd4;
    pcVar4 = "ProjectLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe4fa1c);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVCCostumeFiddler_TM___00e4fa00[0x19] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0043acc0 @ 0043acc0 ////

undefined4 * __thiscall FUN_0043acc0(void *this,byte param_1)

{
  FUN_0043ace0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0043ace0 @ 0043ace0 ////

void __fastcall FUN_0043ace0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca0498;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *(undefined4 *)param_1[0x36] = param_1[0x35];
  }
  if (param_1[0x35] != 0) {
    *(undefined4 *)(param_1[0x35] + 4) = param_1[0x36];
  }
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  if (10 < (uint)param_1[0x2f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2d]);
  }
  if (10 < (uint)param_1[0x27]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x25]);
  }
  param_1[0x1f] = &PTR_FUN_00d18c4c;
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
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_1 + 0xe;
  }
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0043ae50 @ 0043ae50 ////

void __cdecl FUN_0043ae50(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 *_Memory;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_2c [4];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca04bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  _Memory = operator_new(0xe4);
  puVar4 = (undefined4 *)0x0;
  local_4 = 0;
  if (_Memory != (undefined4 *)0x0) {
    puVar4 = FUN_0043ab40(_Memory);
  }
  puVar4[0x18] = param_4;
  local_4 = 0xffffffff;
  (**(code **)(puVar4[0x19] + 4))();
  puVar4[0x1e] = param_1;
  (**(code **)puVar4[0x19])();
  (**(code **)(puVar4[0x1f] + 4))();
  puVar4[0x24] = param_2;
  (**(code **)puVar4[0x1f])();
  FUN_004036d0(puVar4 + 0x25,(wchar_t *)*param_3,param_3[1]);
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x5c))(auStack_2c);
  FUN_004036d0(puVar4 + 0x2d,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  piVar1 = (int *)(param_1 + 0xec);
  piVar2 = puVar4 + 0x35;
  puVar4[0x36] = piVar1;
  *piVar2 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar2;
  *piVar1 = (int)piVar2;
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0043af50 @ 0043af50 ////

void __cdecl FUN_0043af50(int param_1,int *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint _Count;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca04d8;
  local_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0xe0);
  do {
    ppvVar2 = &local_c;
    if (piVar1 == (int *)(param_1 + 0xec)) {
LAB_0043afc2:
      ExceptionList = ppvVar2;
      local_2c = local_20;
      local_20[0] = L'\0';
      local_28 = 0;
      local_24 = 10;
      _Count = FUN_00ace02d((short *)&lpCaption_00d16918);
      if (local_24 <= _Count) {
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        local_24 = _Count + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24 * 2);
      }
      _wcsncpy(local_2c,(wchar_t *)&lpCaption_00d16918,_Count);
      local_2c[_Count] = L'\0';
      local_4 = 0;
      local_28 = _Count;
      FUN_0043ae50(param_1,param_2,&local_2c,3);
      if (local_24 < 0xb) {
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (*(int *)(piVar1[2] + 0x60) == 3) {
      if (*(int **)(piVar1[2] + 0x90) == param_2) {
        return;
      }
      ExceptionList = &local_c;
      if ((int *)piVar1[1] != (int *)0x0) {
        ExceptionList = &local_c;
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      ppvVar2 = ExceptionList;
      goto LAB_0043afc2;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}


//// FUNCTION FUN_0043b080 @ 0043b080 ////

void __cdecl FUN_0043b080(int param_1,int *param_2)

{
  int iVar1;
  void *this;
  int *piVar2;
  uint _Count;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca04f8;
  local_c = ExceptionList;
  for (iVar1 = *(int *)(param_1 + 0xe0); iVar1 != param_1 + 0xec; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(int **)(*(int *)(iVar1 + 8) + 0x90) == param_2) {
      return;
    }
  }
  ExceptionList = &local_c;
  iVar1 = FUN_005b2220(param_1);
  if (iVar1 == 0) {
    local_2c = local_20;
    local_20[0] = L'\0';
    local_28 = 0;
    local_24 = 10;
    _Count = FUN_00ace02d((short *)&lpCaption_00d16918);
    if (local_24 <= _Count) {
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      local_24 = _Count + 0x20 & 0xffffffe0;
      local_2c = _malloc(local_24 * 2);
    }
    _wcsncpy(local_2c,(wchar_t *)&lpCaption_00d16918,_Count);
    local_2c[_Count] = L'\0';
    local_4 = 0;
    local_28 = _Count;
    FUN_0043ae50(param_1,param_2,&local_2c,2);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  else {
    iVar1 = 0;
    piVar2 = param_2;
    this = (void *)FUN_005b2220(param_1);
    iVar1 = FUN_005a7640(this,(int)piVar2,iVar1);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_005a6470(iVar1);
      if (piVar2 == param_2) {
        FUN_0043ae50(param_1,param_2,(undefined4 *)(iVar1 + 0x60),2);
        ExceptionList = local_c;
        return;
      }
      piVar2 = (int *)FUN_005a64e0(iVar1);
      if (piVar2 == param_2) {
        FUN_0043ae50(param_1,param_2,(undefined4 *)(iVar1 + 0x60),0x10);
        ExceptionList = local_c;
        return;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0043b220 @ 0043b220 ////

void __cdecl FUN_0043b220(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char *_Source;
  wchar_t *_Source_00;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca0520;
  local_c = ExceptionList;
  iVar1 = param_2[0x205];
  iVar5 = iVar1 * 0x10;
  uVar3 = 0;
  if (*(int *)(&DAT_00f87c84 + iVar5) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)(&DAT_00f87c88 + iVar5) - *(int *)(&DAT_00f87c84 + iVar5) >> 5;
  }
  iVar2 = *(int *)(param_1 + 0xe0);
  while ((iVar2 != param_1 + 0xec && (uVar3 <= uVar6))) {
    if (*(int *)(*(int *)(iVar2 + 8) + 0x60) == iVar1) {
      if (*(int **)(*(int *)(iVar2 + 8) + 0x90) == param_2) {
        return;
      }
      uVar3 = uVar3 + 1;
    }
    iVar2 = *(int *)(iVar2 + 4);
  }
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((*(int *)(&DAT_00f87c84 + iVar5) != 0) &&
     (ExceptionList = &local_c,
     uVar3 < (uint)(*(int *)(&DAT_00f87c88 + iVar5) - *(int *)(&DAT_00f87c84 + iVar5) >> 5))) {
    puVar4 = (undefined4 *)(uVar3 * 0x20 + *(int *)(&DAT_00f87c84 + iVar5));
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    uVar3 = puVar4[1];
    _Source = (char *)*puVar4;
    ExceptionList = &local_c;
    if (0x13 < uVar3) {
      local_44 = uVar3 + 0x20 & 0xffffffe0;
      ExceptionList = &local_c;
      local_4c = _malloc(local_44);
    }
    _strncpy(local_4c,_Source,uVar3);
    local_4c[uVar3] = '\0';
    local_4._0_1_ = 1;
    local_48 = uVar3;
    if (uVar3 != 0) {
      puVar4 = FUN_009b5030(local_2c,&local_4c);
      uVar3 = puVar4[1];
      _Source_00 = (wchar_t *)*puVar4;
      if (local_64 <= uVar3) {
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        local_64 = uVar3 + 0x20 & 0xffffffe0;
        local_6c = _malloc(local_64 * 2);
      }
      _wcsncpy(local_6c,_Source_00,uVar3);
      local_6c[uVar3] = L'\0';
      local_68 = uVar3;
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  FUN_0043ae50(param_1,param_2,&local_6c,iVar1);
  if (local_64 < 0xb) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_0043b440 @ 0043b440 ////

void __thiscall FUN_0043b440(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  return;
}


//// FUNCTION FUN_0043b460 @ 0043b460 ////

void __fastcall FUN_0043b460(undefined4 *param_1)

{
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_0043b470 @ 0043b470 ////

void __fastcall FUN_0043b470(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00990d30(0,*param_1);
  param_1[1] = *(int *)(DAT_0104cdf4 + 0x3c) - iVar1;
  return;
}


//// FUNCTION FUN_0043b490 @ 0043b490 ////

uint __fastcall FUN_0043b490(uint *param_1)

{
  uint uVar1;
  
  if ((char)param_1[3] == '\0') {
    uVar1 = *(uint *)(DAT_0104cdf4 + 0x3c);
    if (*param_1 <= uVar1 - param_1[1]) {
      param_1[1] = uVar1;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  else {
    uVar1 = param_1[2] + 1;
    param_1[2] = uVar1;
    if (*param_1 <= uVar1) {
      param_1[2] = 0;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_0043b4d0 @ 0043b4d0 ////

void __thiscall FUN_0043b4d0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}


//// FUNCTION FUN_0043b4f0 @ 0043b4f0 ////

int __fastcall FUN_0043b4f0(int *param_1)

{
  return *param_1 * 100;
}


//// FUNCTION FUN_0043b500 @ 0043b500 ////

void __fastcall FUN_0043b500(undefined4 *param_1)

{
  param_1[2] = *param_1;
  return;
}


//// FUNCTION FUN_0043b510 @ 0043b510 ////

void __fastcall FUN_0043b510(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_0043b520 @ 0043b520 ////

void __thiscall FUN_0043b520(void *this,float param_1)

{
  *(float *)this = param_1 * 365.0;
  return;
}


//// FUNCTION FUN_0043b540 @ 0043b540 ////

void __thiscall FUN_0043b540(void *this,float param_1,float param_2)

{
  *(float *)this = param_1 * 365.0 + param_2;
  return;
}


//// FUNCTION FUN_0043b560 @ 0043b560 ////

ulonglong FUN_0043b560(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_0043b570 @ 0043b570 ////

ulonglong FUN_0043b570(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_0043b590 @ 0043b590 ////

undefined1  [10] __cdecl FUN_0043b590(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  undefined1 auVar3 [10];
  
  fVar1 = ROUND((float10)1.4426950408889634 * (float10)param_1);
  fVar2 = (float10)f2xm1((float10)1.4426950408889634 * (float10)param_1 - fVar1);
  auVar3 = (undefined1  [10])fscale((float10)1 + fVar2,fVar1);
  return auVar3;
}


//// FUNCTION FUN_0043b5b0 @ 0043b5b0 ////

void __cdecl FUN_0043b5b0(float param_1)

{
  undefined2 unaff_retaddr;
  
  FUN_00acf400((double)param_1,unaff_retaddr);
  return;
}


//// FUNCTION FUN_0043b5e0 @ 0043b5e0 ////

void __thiscall FUN_0043b5e0(void *this,float *param_1)

{
  *(float *)this = *param_1 + *(float *)this;
  return;
}


//// FUNCTION FUN_0043b5f0 @ 0043b5f0 ////

void __thiscall FUN_0043b5f0(void *this,float *param_1)

{
  *(float *)this = *(float *)this - *param_1;
  return;
}


//// FUNCTION FUN_0043b600 @ 0043b600 ////

void __thiscall FUN_0043b600(void *this,float *param_1,float *param_2)

{
  *param_1 = *param_2 + *(float *)this;
  return;
}


//// FUNCTION FUN_0043b620 @ 0043b620 ////

void __thiscall FUN_0043b620(void *this,float *param_1,float *param_2)

{
  *param_1 = *(float *)this - *param_2;
  return;
}


//// FUNCTION FUN_0043b640 @ 0043b640 ////

undefined4 __thiscall FUN_0043b640(void *this,float *param_1)

{
  if (*(float *)this == *param_1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0043b660 @ 0043b660 ////

undefined4 __thiscall FUN_0043b660(void *this,float *param_1)

{
  if (*(float *)this != *param_1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0043b680 @ 0043b680 ////

undefined4 __thiscall FUN_0043b680(void *this,float *param_1)

{
  if (*param_1 < *(float *)this) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0043b6a0 @ 0043b6a0 ////

undefined4 __thiscall FUN_0043b6a0(void *this,float *param_1)

{
  if (*param_1 <= *(float *)this) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0043b6c0 @ 0043b6c0 ////

undefined4 __thiscall FUN_0043b6c0(void *this,float *param_1)

{
  if (*(float *)this < *param_1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0043b6e0 @ 0043b6e0 ////

undefined4 __thiscall FUN_0043b6e0(void *this,float *param_1)

{
  if (*(float *)this < *param_1 != (*(float *)this == *param_1)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0043b700 @ 0043b700 ////

void __thiscall FUN_0043b700(void *this,float param_1)

{
  *(float *)this = param_1 * 365.0;
  return;
}


//// FUNCTION FUN_0043b710 @ 0043b710 ////

float10 __fastcall FUN_0043b710(float *param_1)

{
  return (float10)*param_1 * (float10)0.002739726;
}


//// FUNCTION FUN_0043b720 @ 0043b720 ////

float * __thiscall FUN_0043b720(void *this,float param_1)

{
  ulonglong uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(float *)this = param_1 * 365.0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  uVar1 = FUN_00acd42c();
  *(int *)((int)this + 0x14) = (int)uVar1;
  return this;
}


//// FUNCTION FUN_0043b760 @ 0043b760 ////

int __thiscall FUN_0043b760(void *this,int *param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined2 extraout_var;
  uint3 uVar4;
  undefined2 unaff_DI;
  float10 fVar5;
  
  *param_1 = *param_1 + 1;
  iVar1 = *(int *)((int)this + 0x14);
  fVar5 = FUN_00acf400((double)*param_2,unaff_DI);
  fVar2 = (float)fVar5;
  fVar3 = 1.0 / (float)iVar1 + *param_2;
  *param_2 = fVar3;
  fVar5 = FUN_00acf400((double)fVar3,unaff_DI);
  fVar3 = (float)fVar5;
  uVar4 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(fVar3 < fVar2) << 8 | (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
                           (ushort)(fVar3 == fVar2) << 0xe) >> 8);
  if (fVar3 < fVar2 == 0 && (fVar3 == fVar2) == 0) {
    *param_1 = 0;
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}


//// FUNCTION FUN_0043b800 @ 0043b800 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043b800(float *param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  fVar1 = *param_1 * 0.002739726;
  if (_DAT_00e4fa44 <= fVar1) {
    uVar4 = FUN_00acd42c();
    param_1[5] = (float)uVar4;
    return;
  }
  if (((NAN(fVar1) || NAN(_DAT_00e4fa40)) || fVar1 < _DAT_00e4fa40 == (fVar1 == _DAT_00e4fa40)) &&
     (_DAT_00e4fa38 != _DAT_00e4fa3c)) {
    fVar3 = (float10)1.4426950408889634 *
            ((float10)fVar1 - (float10)_DAT_00e4fa40) * (float10)_DAT_00e4fa48;
    fVar2 = ROUND(fVar3);
    fVar3 = (float10)f2xm1(fVar3 - fVar2);
    fscale((float10)1 + fVar3,fVar2);
    uVar4 = FUN_00acd42c();
    param_1[5] = (float)uVar4;
    return;
  }
  uVar4 = FUN_00acd42c();
  param_1[5] = (float)uVar4;
  return;
}


//// FUNCTION FUN_0043b8c0 @ 0043b8c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043b8c0(float *param_1)

{
  int iVar1;
  
  if (_DAT_00f87d90 == 0.0) {
    iVar1 = FUN_0043b760(param_1,(int *)(param_1 + 2),param_1);
    if ((char)iVar1 != '\0') {
      param_1[1] = (float)(((int)param_1[1] + 1) % 7);
      FUN_0043b800(param_1);
      return;
    }
  }
  else {
    FUN_0043b760(param_1,(int *)(param_1 + 3),param_1 + 4);
  }
  FUN_0043b800(param_1);
  return;
}


//// FUNCTION FUN_0043b920 @ 0043b920 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_0043b920(int param_1)

{
  if (_DAT_00f87d90 != 0.0) {
    return *(int *)(param_1 + 0xc) == 0;
  }
  return *(int *)(param_1 + 8) == 0;
}


//// FUNCTION FUN_0043b960 @ 0043b960 ////

float10 __fastcall FUN_0043b960(int param_1)

{
  return (float10)*(int *)(param_1 + 0x14);
}


//// FUNCTION FUN_0043b970 @ 0043b970 ////

float10 __fastcall FUN_0043b970(int param_1)

{
  return (float10)(*(int *)(param_1 + 0x14) * 0x16d);
}


//// FUNCTION FUN_0043b9a0 @ 0043b9a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b9a0(void)

{
  _DAT_00f87d90 = 0x3f800000;
  return;
}


//// FUNCTION FUN_0043b9b0 @ 0043b9b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b9b0(void)

{
  _DAT_00f87d90 = 0;
  return;
}


//// FUNCTION FUN_0043b9c0 @ 0043b9c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043b9c0(void)

{
  if (_DAT_00f87d90 != 0.0) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0043ba50 @ 0043ba50 ////

undefined8 FUN_0043ba50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = 0;
  uVar4 = FUN_00acd42c();
  iVar2 = (int)(uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  if (0x1f < iVar1) {
    iVar2 = 0x1f;
    do {
      iVar1 = iVar1 - iVar2;
      iVar3 = iVar3 + 1;
      iVar2 = (&DAT_00d18ed4)[iVar3 % 0xc];
    } while (iVar2 < iVar1);
  }
  return CONCAT44(iVar2,iVar3);
}


//// FUNCTION FUN_0043ba90 @ 0043ba90 ////

undefined8 FUN_0043ba90(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = FUN_00acd42c();
  uVar6 = FUN_00acd42c();
  iVar4 = (int)(uVar6 >> 0x20);
  iVar2 = (int)uVar6 + (int)uVar5 * 0x16d;
  if (0x1e < iVar2) {
    piVar3 = &DAT_00d18ed4;
    do {
      if (0xd18f03 < (int)piVar3) break;
      iVar1 = *piVar3;
      iVar4 = piVar3[1];
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 - iVar1;
    } while (iVar4 <= iVar2);
  }
  return CONCAT44(iVar4,iVar2 + 1);
}


//// FUNCTION FUN_0043bae0 @ 0043bae0 ////

int FUN_0043bae0(void)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_00acd42c();
  uVar4 = FUN_00acd42c();
  iVar1 = (int)uVar4 + (int)uVar3 * 0x16d + -0x1f;
  for (iVar2 = 0; (-1 < iVar1 && (iVar2 < 0xc)); iVar2 = iVar2 + 1) {
    iVar1 = iVar1 - (&DAT_00d18ed8)[iVar2];
  }
  return iVar2;
}


//// FUNCTION FUN_0043bb30 @ 0043bb30 ////

undefined4 * __cdecl FUN_0043bb30(undefined4 *param_1,undefined4 param_2)

{
  FUN_009b4f80(param_1,param_2);
  return param_1;
}


//// FUNCTION FUN_0043bb60 @ 0043bb60 ////

void FUN_0043bb60(void)

{
  return;
}


//// FUNCTION FUN_0043bb70 @ 0043bb70 ////

undefined4 * FUN_0043bb70(undefined4 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  FUN_0043bb30(param_1,(int)uVar1);
  return param_1;
}


//// FUNCTION FUN_0043bba0 @ 0043bba0 ////

undefined4 * __cdecl FUN_0043bba0(undefined4 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0538;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = "date_january" + param_2 * 0x10;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,"date_january" + param_2 * 0x10,
               (int)pcVar2 - (int)("date_january" + param_2 * 0x10 + 1));
  local_4 = 0;
  FUN_009b5030(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0043bc50 @ 0043bc50 ////

undefined4 * __cdecl FUN_0043bc50(undefined4 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0558;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = "date_jan" + param_2 * 9;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,"date_jan" + param_2 * 9,(int)pcVar2 - (int)("date_jan" + param_2 * 9 + 1))
  ;
  local_4 = 0;
  FUN_009b5030(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0043bcf0 @ 0043bcf0 ////

void * __thiscall FUN_0043bcf0(void *this,wchar_t *param_1)

{
  size_t sVar1;
  
  sVar1 = FUN_00ace02d(param_1);
  FUN_0040cae0(this,param_1,sVar1);
  return this;
}


//// FUNCTION FUN_0043bd20 @ 0043bd20 ////

void * __thiscall FUN_0043bd20(void *this,undefined4 *param_1)

{
  FUN_0040cae0(this,(wchar_t *)*param_1,param_1[1]);
  return this;
}


//// FUNCTION FUN_0043bd40 @ 0043bd40 ////

void * __thiscall FUN_0043bd40(void *this,wchar_t *param_1)

{
  size_t sVar1;
  wchar_t local_80 [64];
  
  sVar1 = _swprintf(local_80,0xd18f7c,param_1);
  FUN_0040cae0(this,local_80,sVar1);
  return this;
}


//// FUNCTION FUN_0043bd80 @ 0043bd80 ////

void * __thiscall FUN_0043bd80(void *this,float param_1)

{
  size_t sVar1;
  wchar_t local_80 [64];
  
  sVar1 = _swprintf(local_80,0xd18f84,SUB84((double)param_1,0));
  FUN_0040cae0(this,local_80,sVar1);
  return this;
}


//// FUNCTION FUN_0043bdc0 @ 0043bdc0 ////

undefined4 * __cdecl FUN_0043bdc0(undefined4 *param_1,wchar_t *param_2,undefined4 *param_3)

{
  uint uVar1;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  uVar1 = FUN_00ace02d(param_2);
  FUN_004036d0(&local_20,param_2,uVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_3,param_3[1]);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_20,local_1c);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_0043be60 @ 0043be60 ////

undefined4 * __cdecl FUN_0043be60(undefined4 *param_1,undefined4 *param_2,wchar_t *param_3)

{
  size_t sVar1;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  FUN_004036d0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d(param_3);
  FUN_0040cae0(&local_20,param_3,sVar1);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_20,local_1c);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_0043c030 @ 0043c030 ////

undefined4 * FUN_0043c030(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043bae0();
  FUN_0043bba0(param_1,iVar1);
  return param_1;
}


//// FUNCTION FUN_0043c060 @ 0043c060 ////

undefined4 * FUN_0043c060(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043bae0();
  FUN_0043bc50(param_1,iVar1);
  return param_1;
}


//// FUNCTION FUN_0043c090 @ 0043c090 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0043c090(void)

{
  int iVar1;
  size_t sVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  void *local_a0 [2];
  uint local_98;
  wchar_t local_80 [64];
  
  if ((DAT_00f87db4 & 1) == 0) {
    DAT_00f87db4 = DAT_00f87db4 | 1;
    DAT_00f87d94 = &DAT_00f87da0;
    DAT_00f87da0 = 0;
    _DAT_00f87d98 = 0;
    DAT_00f87d9c = 10;
    _atexit(FUN_00d10c90);
  }
  iVar1 = FUN_009b4250();
  _DAT_00f87d98 = 0;
  if (iVar1 == 0xe) {
    *DAT_00f87d94 = 0;
    puVar3 = FUN_0043bb70(local_a0);
    FUN_0040cae0(&DAT_00f87d94,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0[0]);
    }
    sVar2 = FUN_00ace02d((short *)&DAT_00d184c4);
    FUN_0040cae0(&DAT_00f87d94,L" ",sVar2);
    puVar3 = FUN_0043c030(local_a0);
    FUN_0040cae0(&DAT_00f87d94,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0[0]);
    }
    sVar2 = FUN_00ace02d((short *)&DAT_00d184c4);
    FUN_0040cae0(&DAT_00f87d94,L" ",sVar2);
    uVar4 = FUN_0043ba90();
    sVar2 = _swprintf(local_80,0xd18f7c,(wchar_t *)uVar4);
    FUN_0040cae0(&DAT_00f87d94,local_80,sVar2);
  }
  else {
    *DAT_00f87d94 = 0;
    uVar4 = FUN_0043ba90();
    sVar2 = _swprintf(local_80,0xd18f7c,(wchar_t *)uVar4);
    FUN_0040cae0(&DAT_00f87d94,local_80,sVar2);
    sVar2 = FUN_00ace02d((short *)&DAT_00d184c4);
    FUN_0040cae0(&DAT_00f87d94,L" ",sVar2);
    puVar3 = FUN_0043c030(local_a0);
    FUN_0040cae0(&DAT_00f87d94,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0[0]);
    }
    sVar2 = FUN_00ace02d((short *)&DAT_00d184c4);
    FUN_0040cae0(&DAT_00f87d94,L" ",sVar2);
    puVar3 = FUN_0043bb70(local_a0);
    FUN_0040cae0(&DAT_00f87d94,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0[0]);
    }
  }
  return &DAT_00f87d94;
}


//// FUNCTION FUN_0043c2c0 @ 0043c2c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0043c2c0(void)

{
  int iVar1;
  size_t sVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  void *local_a0 [2];
  uint local_98;
  wchar_t local_80 [64];
  
  if ((DAT_00f87dd8 & 1) == 0) {
    DAT_00f87dd8 = DAT_00f87dd8 | 1;
    DAT_00f87db8 = &DAT_00f87dc4;
    DAT_00f87dc4 = 0;
    _DAT_00f87dbc = 0;
    DAT_00f87dc0 = 10;
    _atexit(FUN_00d10cb0);
  }
  iVar1 = FUN_009b4250();
  _DAT_00f87dbc = 0;
  if (iVar1 == 0xe) {
    *DAT_00f87db8 = 0;
    puVar3 = FUN_0043bb70(local_a0);
    FUN_0040cae0(&DAT_00f87db8,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0[0]);
    }
    sVar2 = FUN_00ace02d((short *)&DAT_00d184c4);
    FUN_0040cae0(&DAT_00f87db8,L" ",sVar2);
    puVar3 = FUN_0043c030(local_a0);
    FUN_0040cae0(&DAT_00f87db8,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0[0]);
    }
    sVar2 = FUN_00ace02d((short *)&DAT_00d184c4);
    FUN_0040cae0(&DAT_00f87db8,L" ",sVar2);
    uVar4 = FUN_0043ba90();
    sVar2 = _swprintf(local_80,0xd18f7c,(wchar_t *)uVar4);
    FUN_0040cae0(&DAT_00f87db8,local_80,sVar2);
  }
  else {
    *DAT_00f87db8 = 0;
    uVar4 = FUN_0043ba90();
    sVar2 = _swprintf(local_80,0xd18f7c,(wchar_t *)uVar4);
    FUN_0040cae0(&DAT_00f87db8,local_80,sVar2);
    sVar2 = FUN_00ace02d((short *)&DAT_00d184c4);
    FUN_0040cae0(&DAT_00f87db8,L" ",sVar2);
    puVar3 = FUN_0043c030(local_a0);
    FUN_0040cae0(&DAT_00f87db8,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0[0]);
    }
    sVar2 = FUN_00ace02d((short *)&DAT_00d184c4);
    FUN_0040cae0(&DAT_00f87db8,L" ",sVar2);
    puVar3 = FUN_0043bb70(local_a0);
    FUN_0040cae0(&DAT_00f87db8,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0[0]);
    }
  }
  return &DAT_00f87db8;
}


//// FUNCTION FUN_0043c4f0 @ 0043c4f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0043c4f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  void *local_20 [2];
  uint local_18;
  
  if ((DAT_00f87dfc & 1) == 0) {
    DAT_00f87dfc = DAT_00f87dfc | 1;
    DAT_00f87ddc = &DAT_00f87de8;
    _DAT_00f87de8 = 0;
    _DAT_00f87de0 = 0;
    DAT_00f87de4 = 10;
    _atexit(FUN_00d10cd0);
  }
  iVar1 = FUN_009b4250();
  if (iVar1 == 0xe) {
    puVar2 = FUN_0043bb70(local_20);
    FUN_004036d0(&DAT_00f87ddc,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    sVar3 = FUN_00ace02d((short *)&DAT_00d184c4);
    FUN_0040cae0(&DAT_00f87ddc,L" ",sVar3);
    puVar2 = FUN_0043c060(local_20);
  }
  else {
    puVar2 = FUN_0043c060(local_20);
    FUN_004036d0(&DAT_00f87ddc,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    sVar3 = FUN_00ace02d((short *)&DAT_00d184c4);
    FUN_0040cae0(&DAT_00f87ddc,L" ",sVar3);
    puVar2 = FUN_0043bb70(local_20);
  }
  FUN_0040cae0(&DAT_00f87ddc,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return &DAT_00f87ddc;
}


//// FUNCTION FUN_0043c630 @ 0043c630 ////

undefined4 * __cdecl
FUN_0043c630(undefined4 *param_1,uint param_2,uint param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 param_7)

{
  char cVar1;
  uint uVar2;
  size_t sVar3;
  undefined4 *puVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 *local_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined1 local_c0 [20];
  wchar_t *local_ac;
  uint local_a8;
  uint local_a4;
  wchar_t local_a0 [10];
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
  int local_4;
  
  puStack_8 = &LAB_00ca0630;
  local_c = ExceptionList;
  local_ac = local_a0;
  local_a0[0] = L'\0';
  local_a8 = 0;
  local_a4 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_00ace02d(L"<phrasebook>");
  FUN_004036d0(&local_ac,L"<phrasebook>",uVar2);
  sVar3 = FUN_00ace02d(L"<translate>SAVE_FILE_DATE_STRING</translate>");
  FUN_0040cae0(&local_ac,L"<translate>SAVE_FILE_DATE_STRING</translate>",sVar3);
  bVar6 = 9 < param_2;
  if (bVar6) {
    puVar4 = FUN_00569df0(local_8c,param_2);
  }
  else {
    puVar4 = FUN_00569df0(local_6c,param_2);
    puVar4 = FUN_0043bdc0(local_4c,L"0",puVar4);
  }
  puVar4 = FUN_0043bdc0(local_2c,L"<phrase key=hour>",puVar4);
  puVar4 = FUN_0043be60(&local_cc,puVar4,L"</phrase>");
  FUN_0040cae0(&local_ac,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (bVar6) {
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
  }
  if (!bVar6) {
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
  }
  local_4 = 0;
  if ((!bVar6) && (10 < local_64)) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  bVar6 = 9 < param_3;
  if (bVar6) {
    puVar4 = FUN_00569df0(local_8c,param_3);
  }
  else {
    puVar4 = FUN_00569df0(&local_cc,param_3);
    puVar4 = FUN_0043bdc0(local_2c,L"0",puVar4);
  }
  puVar4 = FUN_0043bdc0(local_4c,L"<phrase key=mins>",puVar4);
  puVar4 = FUN_0043be60(local_6c,puVar4,L"</phrase>");
  FUN_0040cae0(&local_ac,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if ((bVar6) && (10 < local_84)) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c[0]);
  }
  if ((!bVar6) && (10 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = 0;
  if ((!bVar6) && (10 < local_c4)) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  local_cc = local_c0;
  local_c0[0] = 0;
  local_c8 = 0;
  local_c4 = 0x14;
  pcVar5 = "date_sunday" + param_4 * 0xf;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_cc,"date_sunday" + param_4 * 0xf,
               (int)pcVar5 - (int)("date_sunday" + param_4 * 0xf + 1));
  local_4._0_1_ = 5;
  puVar4 = FUN_009b5030(local_8c,&local_cc);
  puVar4 = FUN_0043bdc0(local_4c,L"<phrase key=weekday>",puVar4);
  puVar4 = FUN_0043be60(local_6c,puVar4,L"</phrase>");
  FUN_0040cae0(&local_ac,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c[0]);
  }
  local_4._0_1_ = 0;
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  puVar4 = FUN_00569df0(local_8c,param_5);
  puVar4 = FUN_0043bdc0(local_4c,L"<phrase key=day>",puVar4);
  puVar4 = FUN_0043be60(local_6c,puVar4,L"</phrase>");
  FUN_0040cae0(&local_ac,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c[0]);
  }
  local_cc = local_c0;
  local_c0[0] = 0;
  local_c8 = 0;
  local_c4 = 0x14;
  pcVar5 = &DAT_00d18d98 + param_6 * 0x10;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_cc,&DAT_00d18d98 + param_6 * 0x10,
               (int)pcVar5 - (int)(&DAT_00d18d99 + param_6 * 0x10));
  local_4._0_1_ = 6;
  puVar4 = FUN_009b5030(local_8c,&local_cc);
  puVar4 = FUN_0043bdc0(local_4c,L"<phrase key=month>",puVar4);
  puVar4 = FUN_0043be60(local_6c,puVar4,L"</phrase>");
  FUN_0040cae0(&local_ac,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c[0]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  puVar4 = FUN_00569df0(local_8c,param_7);
  puVar4 = FUN_0043bdc0(local_4c,L"<phrase key=year>",puVar4);
  puVar4 = FUN_0043be60(local_6c,puVar4,L"</phrase>");
  FUN_0040cae0(&local_ac,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c[0]);
  }
  sVar3 = FUN_00ace02d(L"</phrasebook>");
  FUN_0040cae0(&local_ac,L"</phrasebook>",sVar3);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_ac,local_a8);
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION GameCalendar_Constructor @ 0043cc50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameCalendar_Constructor(void)

{
  float10 fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float local_54 [2];
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
  puStack_8 = &LAB_00ca0680;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_4c,"dat_year",8);
  local_48 = 8;
  local_4c[8] = '\0';
  local_4 = 0;
  FUN_005434b0();
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"dat_words",9);
  local_48 = 9;
  local_4c[9] = '\0';
  local_4 = 1;
  FUN_005434b0();
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"dat_halt",8);
  local_48 = 8;
  local_4c[8] = '\0';
  local_4 = 2;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"time",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_4 = 3;
  FUN_00558a50(DAT_00f88624,&local_4c,(undefined4 *)0x1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"start",5);
  local_48 = 5;
  local_4c[5] = '\0';
  local_4 = 4;
  puVar2 = FUN_005584e0(DAT_00f88624,local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,5);
  pfVar3 = (float *)FUN_00567da0(local_54,puVar2,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _DAT_00e4fa38 = pfVar3[1];
  _DAT_00e4fa40 = *pfVar3;
  _strncpy(local_4c,"end",3);
  local_48 = 3;
  local_4c[3] = '\0';
  local_4 = 6;
  puVar2 = FUN_005584e0(DAT_00f88624,local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,7);
  pfVar3 = (float *)FUN_00567da0(local_54,puVar2,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  _DAT_00e4fa3c = pfVar3[1];
  _DAT_00e4fa44 = *pfVar3;
  ExceptionList = local_c;
  fVar1 = (float10)log2((float10)0.5 / ((float10)pfVar3[1] - (float10)_DAT_00e4fa38));
  _DAT_00e4fa48 =
       (float)(((float10)0.6931471805599453 * fVar1) / ((float10)*pfVar3 - (float10)_DAT_00e4fa40));
  return;
}


//// FUNCTION FUN_0043cfb0 @ 0043cfb0 ////

void __fastcall FUN_0043cfb0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0043cff0 @ 0043cff0 ////

void __fastcall FUN_0043cff0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca0698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d19178;
  param_1[0xe] = &PTR_LAB_00d19158;
  local_4 = 0;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0043d050 @ 0043d050 ////

void FUN_0043d050(void)

{
  return;
}


//// FUNCTION FUN_0043d060 @ 0043d060 ////

int __fastcall FUN_0043d060(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 100;
}


//// FUNCTION FUN_0043d0b0 @ 0043d0b0 ////

int * __thiscall FUN_0043d0b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0043d230 @ 0043d230 ////

void __fastcall FUN_0043d230(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x10]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe]);
  }
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_0043d250 @ 0043d250 ////

void FUN_0043d250(void)

{
  FUN_0098fd30("ListOffset",&DAT_00f87e00,1);
  return;
}


//// FUNCTION FUN_0043d270 @ 0043d270 ////

undefined4 * __thiscall FUN_0043d270(void *this,byte param_1)

{
  FUN_0043cff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0043d290 @ 0043d290 ////

int __cdecl FUN_0043d290(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)DAT_00f87e38 >> 8);
  if ((DAT_00f87e38 != 0) &&
     ((param_1 < *(int *)(DAT_00f87e38 + 0x58) || (*(int *)(DAT_00f87e38 + 0x5c) < param_1)))) {
    return (uint)uVar1 << 8;
  }
  return CONCAT31(uVar1,1);
}


//// FUNCTION FUN_0043d2b0 @ 0043d2b0 ////

bool FUN_0043d2b0(void)

{
  return DAT_00f87e38 != 0;
}


//// FUNCTION FUN_0043d2c0 @ 0043d2c0 ////

undefined4 FUN_0043d2c0(void)

{
  if (DAT_00f87e38 != 0) {
    return CONCAT31((int3)((uint)DAT_00f87e38 >> 8),*(undefined1 *)(DAT_00f87e38 + 0x60));
  }
  return 0;
}


//// FUNCTION FUN_0043d2d0 @ 0043d2d0 ////

undefined4 FUN_0043d2d0(void)

{
  if (DAT_00f87e18 == 0) {
    return 1;
  }
  return CONCAT31((int3)(DAT_00f87e1c - DAT_00f87e18 >> 10),DAT_00f87e1c - DAT_00f87e18 >> 2 == 0);
}


//// FUNCTION FUN_0043d300 @ 0043d300 ////

uint FUN_0043d300(void)

{
  int iVar1;
  
  if (DAT_00f87e08 == 0) {
    return (uint)(-1 < DAT_00f87e00);
  }
  iVar1 = (DAT_00f87e0c - DAT_00f87e08) / 100;
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 <= DAT_00f87e00);
}


//// FUNCTION FUN_0043d530 @ 0043d530 ////

void __cdecl FUN_0043d530(void *param_1)

{
  if (((DAT_00f87e38 != 0) && (DAT_00f87e18 != 0)) && (DAT_00f87e1c - DAT_00f87e18 >> 2 != 0)) {
    FUN_004015d0(param_1,*(char **)(DAT_00f87e38 + 0x38),*(uint *)(DAT_00f87e38 + 0x3c));
    return;
  }
  FUN_004015d0(param_1,"",0);
  return;
}


//// FUNCTION FUN_0043d590 @ 0043d590 ////

void __thiscall FUN_0043d590(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d1918c;
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


//// FUNCTION FUN_0043d5e0 @ 0043d5e0 ////

void __fastcall FUN_0043d5e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1918c;
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


//// FUNCTION FUN_0043d6b0 @ 0043d6b0 ////

int __cdecl FUN_0043d6b0(int param_1,int param_2,int param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = *(uint *)(param_2 + -0x28);
    _Source = *(char **)(param_2 + -0x2c);
    iVar3 = param_2 + -100;
    iVar2 = param_3 + -100;
    if (*(uint *)(param_3 + -0x24) <= _Count) {
      if (0x14 < *(uint *)(param_3 + -0x24)) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_3 + -0x2c));
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      *(uint *)(param_3 + -0x24) = _Size;
      pvVar1 = _malloc(_Size);
      *(void **)(param_3 + -0x2c) = pvVar1;
    }
    _strncpy(*(char **)(param_3 + -0x2c),_Source,_Count);
    *(uint *)(param_3 + -0x28) = _Count;
    *(undefined1 *)(_Count + *(int *)(param_3 + -0x2c)) = 0;
    *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined1 *)(param_3 + -4) = *(undefined1 *)(param_2 + -4);
    param_3 = iVar2;
    param_2 = iVar3;
  } while (iVar3 != param_1);
  return iVar2;
}


//// FUNCTION FUN_0043d740 @ 0043d740 ////

undefined4 * __fastcall FUN_0043d740(undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,"",0);
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}


//// FUNCTION FUN_0043d780 @ 0043d780 ////

int __cdecl FUN_0043d780(int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    if (DAT_00f87e08 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (DAT_00f87e0c - DAT_00f87e08) / 100;
    }
    if (param_1 < iVar1) {
      return param_1 * 100 + DAT_00f87e08;
    }
  }
  return 0;
}


//// FUNCTION FUN_0043d830 @ 0043d830 ////

void __cdecl FUN_0043d830(int param_1,int param_2,int param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    _Count = *(uint *)(param_3 + 0x3c);
    _Source = *(char **)(param_3 + 0x38);
    if (*(uint *)(param_1 + 0x40) <= _Count) {
      if (0x14 < *(uint *)(param_1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x38));
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      *(uint *)(param_1 + 0x40) = _Size;
      pvVar1 = _malloc(_Size);
      *(void **)(param_1 + 0x38) = pvVar1;
    }
    _strncpy(*(char **)(param_1 + 0x38),_Source,_Count);
    *(uint *)(param_1 + 0x3c) = _Count;
    *(undefined1 *)(_Count + *(int *)(param_1 + 0x38)) = 0;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_3 + 0x5c);
    *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_3 + 0x60);
    param_1 = param_1 + 100;
  } while( true );
}


//// FUNCTION FUN_0043d8e0 @ 0043d8e0 ////

void FUN_0043d8e0(void)

{
  if (DAT_00f87e18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f87e18);
  }
  DAT_00f87e18 = (void *)0x0;
  DAT_00f87e1c = 0;
  DAT_00f87e20 = 0;
  (*(code *)DAT_00f87e24[1])();
  DAT_00f87e38 = 0;
                    /* WARNING: Could not recover jumptable at 0x0043d926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00f87e24)();
  return;
}


//// FUNCTION FUN_0043d930 @ 0043d930 ////

void FUN_0043d930(void)

{
  if (DAT_00f87e18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f87e18);
  }
  DAT_00f87e18 = (void *)0x0;
  DAT_00f87e1c = 0;
  DAT_00f87e20 = 0;
  DAT_00f87e00 = 0;
  (*(code *)DAT_00f87e24[1])();
  DAT_00f87e38 = 0;
                    /* WARNING: Could not recover jumptable at 0x0043d97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00f87e24)();
  return;
}


//// FUNCTION FUN_0043d980 @ 0043d980 ////

undefined4 __cdecl FUN_0043d980(char param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = DAT_00f87e18;
  if (((DAT_00f87e38 != 0) && (DAT_00f87e18 != (undefined4 *)0x0)) &&
     (iVar2 = DAT_00f87e1c - (int)DAT_00f87e18 >> 2, iVar2 != 0)) {
    if (param_1 != '\0') {
      iVar2 = FUN_00990d30(0,iVar2);
      puVar3 = puVar3 + iVar2;
    }
    uVar1 = *puVar3;
    _memmove(puVar3,puVar3 + 1,(DAT_00f87e1c - (int)(puVar3 + 1) >> 2) << 2);
    DAT_00f87e1c = DAT_00f87e1c + -4;
    return uVar1;
  }
  return 0xffffffff;
}


//// FUNCTION FUN_0043da00 @ 0043da00 ////

void FUN_0043da00(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x19) {
    (**(code **)*param_1)(0);
  }
  return;
}


//// FUNCTION FUN_0043da30 @ 0043da30 ////

void __fastcall FUN_0043da30(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x19) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0043daa0 @ 0043daa0 ////

void FUN_0043daa0(void)

{
  FUN_0043da30(0xf87e04);
  return;
}


//// FUNCTION FUN_0043dab0 @ 0043dab0 ////

void FUN_0043dab0(void)

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
  puStack_8 = &LAB_00ca06d8;
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


//// FUNCTION FUN_0043db80 @ 0043db80 ////

void __fastcall FUN_0043db80(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d16abc;
  return;
}


//// FUNCTION FUN_0043dbe0 @ 0043dbe0 ////

void FUN_0043dbe0(void)

{
  int iVar1;
  int iVar2;
  int iStack_4;
  
  iVar1 = 0;
  if (DAT_00f87e08 != 0) {
    iVar1 = (DAT_00f87e0c - DAT_00f87e08) / 100;
  }
  if (DAT_00f87e00 < iVar1) {
    iVar1 = FUN_0043d780(DAT_00f87e00);
    (*(code *)DAT_00f87e24[1])();
    DAT_00f87e38 = iVar1;
    (*(code *)*DAT_00f87e24)();
    if (DAT_00f87e18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_00f87e18);
    }
    DAT_00f87e18 = (void *)0x0;
    DAT_00f87e1c = (int *)0x0;
    DAT_00f87e20 = 0;
    if (DAT_00f87e38 != 0) {
      iVar2 = 0;
      iStack_4 = 0;
      iVar1 = FUN_009b0520(*(undefined4 *)(DAT_00f87e38 + 0x38));
      if (0 < iVar1) {
        do {
          if ((DAT_00f87e18 == (void *)0x0) ||
             ((uint)(DAT_00f87e20 - (int)DAT_00f87e18 >> 2) <=
              (uint)((int)DAT_00f87e1c - (int)DAT_00f87e18 >> 2))) {
            FUN_0040ec60(&DAT_00f87e14,DAT_00f87e1c,1,&iStack_4);
          }
          else {
            *DAT_00f87e1c = iVar2;
            DAT_00f87e1c = DAT_00f87e1c + 1;
          }
          iVar2 = iVar2 + 1;
          iStack_4 = iVar2;
          iVar1 = FUN_009b0520(*(undefined4 *)(DAT_00f87e38 + 0x38));
        } while (iVar2 < iVar1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0043dd00 @ 0043dd00 ////

void __fastcall FUN_0043dd00(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_00d16b44;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = param_1 + 6;
  param_1[8] = 0;
  *puVar1 = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[3] = puVar1;
  *puVar1 = param_1 + 2;
  param_1[1] = &PTR_LAB_00d16abc;
  return;
}


//// FUNCTION FUN_0043dd60 @ 0043dd60 ////

undefined4 * __fastcall FUN_0043dd60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0738;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  param_1[0xe] = &PTR_LAB_00d19158;
  *param_1 = &PTR_FUN_00d19178;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0043ddd0 @ 0043ddd0 ////

undefined4 * __thiscall FUN_0043ddd0(void *this,int param_1)

{
  FUN_0043dd00(this);
  *(undefined ***)this = &PTR_FUN_00d1919c;
  *(undefined4 *)((int)this + 0x38) = (undefined1 *)((int)this + 0x44);
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x38),*(char **)(param_1 + 0x38),*(uint *)(param_1 + 0x3c)
              );
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined1 *)((int)this + 0x60) = *(undefined1 *)(param_1 + 0x60);
  return this;
}


//// FUNCTION FUN_0043de30 @ 0043de30 ////

undefined4 * __thiscall FUN_0043de30(void *this,byte param_1)

{
  FUN_0043d230(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0043de50 @ 0043de50 ////

void __cdecl FUN_0043de50(void *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca0761;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_0043ddd0(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0043dea0 @ 0043dea0 ////

undefined4 * __fastcall FUN_0043dea0(undefined4 *param_1)

{
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d1919c;
  param_1[0xe] = param_1 + 0x11;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x14;
  return param_1;
}


//// FUNCTION FUN_0043def0 @ 0043def0 ////

undefined4 * __cdecl FUN_0043def0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0797;
  local_c = ExceptionList;
  if (param_1 != param_2) {
    puVar3 = param_3 + 3;
    ExceptionList = &local_c;
    do {
      if (param_3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar1 = puVar3 + 3;
        puVar3[5] = 0;
        *puVar1 = 0;
        puVar3[4] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        *puVar3 = puVar1;
        *puVar1 = puVar3 + -1;
        puVar3[-2] = &PTR_LAB_00d16abc;
        *param_3 = &PTR_FUN_00d1919c;
        puVar3[0xb] = puVar3 + 0xe;
        *(undefined1 *)(puVar3 + 0xe) = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0x14;
        _Count = *(uint *)(param_1 + 0x3c);
        _Source = *(char **)(param_1 + 0x38);
        if (0x13 < _Count) {
          _Size = _Count + 0x20 & 0xffffffe0;
          puVar3[0xd] = _Size;
          pvVar2 = _malloc(_Size);
          puVar3[0xb] = pvVar2;
        }
        _strncpy((char *)puVar3[0xb],_Source,_Count);
        puVar3[0xc] = _Count;
        *(undefined1 *)(puVar3[0xb] + _Count) = 0;
        puVar3[0x13] = *(undefined4 *)(param_1 + 0x58);
        puVar3[0x14] = *(undefined4 *)(param_1 + 0x5c);
        *(undefined1 *)(puVar3 + 0x15) = *(undefined1 *)(param_1 + 0x60);
      }
      param_3 = param_3 + 0x19;
      param_1 = param_1 + 100;
      puVar3 = puVar3 + 0x19;
    } while (param_1 != param_2);
    ExceptionList = local_c;
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_0043e010 @ 0043e010 ////

void __cdecl FUN_0043e010(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca07d7;
  local_c = ExceptionList;
  if (param_2 != 0) {
    puVar3 = param_1 + 3;
    ExceptionList = &local_c;
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar1 = puVar3 + 3;
        puVar3[5] = 0;
        *puVar1 = 0;
        puVar3[4] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        *puVar3 = puVar1;
        *puVar1 = puVar3 + -1;
        puVar3[-2] = &PTR_LAB_00d16abc;
        *param_1 = &PTR_FUN_00d1919c;
        puVar3[0xb] = puVar3 + 0xe;
        *(undefined1 *)(puVar3 + 0xe) = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0x14;
        _Count = *(uint *)(param_3 + 0x3c);
        _Source = *(char **)(param_3 + 0x38);
        if (0x13 < _Count) {
          _Size = _Count + 0x20 & 0xffffffe0;
          puVar3[0xd] = _Size;
          pvVar2 = _malloc(_Size);
          puVar3[0xb] = pvVar2;
        }
        _strncpy((char *)puVar3[0xb],_Source,_Count);
        puVar3[0xc] = _Count;
        *(undefined1 *)(_Count + puVar3[0xb]) = 0;
        puVar3[0x13] = *(undefined4 *)(param_3 + 0x58);
        puVar3[0x14] = *(undefined4 *)(param_3 + 0x5c);
        *(undefined1 *)(puVar3 + 0x15) = *(undefined1 *)(param_3 + 0x60);
      }
      param_1 = param_1 + 0x19;
      puVar3 = puVar3 + 0x19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0043e1a0 @ 0043e1a0 ////

undefined4 * FUN_0043e1a0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_0043e010(param_1,param_2,param_3);
  return param_1 + param_2 * 0x19;
}


//// FUNCTION FUN_0043e1d0 @ 0043e1d0 ////

void __thiscall FUN_0043e1d0(void *this,int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 local_80 [14];
  void *local_48;
  uint local_40;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca07f8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff74;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_0043ddd0(local_80,param_3);
  iVar2 = *(int *)((int)this + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar5 = (*(int *)((int)this + 0xc) - iVar2) / 100;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 100;
    }
    if (0x28f5c28U - iVar1 < param_2) {
      FUN_0043dab0();
      uVar5 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 100;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0x28f5c28 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 100;
      }
      if (uVar5 < iVar2 + param_2) {
        iVar2 = FUN_0043d060((int)this);
        uVar5 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar5 * 100);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar3;
      puVar4 = FUN_0043def0(*(int *)((int)this + 4),param_1,puVar3);
      FUN_0043e010(puVar4,param_2,(int)local_80);
      FUN_0043def0(param_1,*(int *)((int)this + 8),puVar4 + param_2 * 0x19);
      local_8 = 0;
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 100;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_0043da00(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar5 * 0x19;
      *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 0x19;
      *(undefined4 **)((int)this + 4) = puVar3;
    }
    else {
      iVar2 = *(int *)((int)this + 8);
      if ((uint)((iVar2 - param_1) / 100) < param_2) {
        FUN_0043def0(param_1,iVar2,(undefined4 *)(param_2 * 100 + param_1));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0043e1a0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - param_1) / 100,(int)local_80)
        ;
        iVar2 = *(int *)((int)this + 8) + param_2 * 100;
        *(int *)((int)this + 8) = iVar2;
        FUN_0043d830(param_1,iVar2 + param_2 * -100,(int)local_80);
      }
      else {
        iVar1 = iVar2 + param_2 * -100;
        puVar3 = FUN_0043def0(iVar1,iVar2,(undefined4 *)iVar2);
        *(undefined4 **)((int)this + 8) = puVar3;
        FUN_0043d6b0(param_1,iVar1,iVar2);
        FUN_0043d830(param_1,param_2 * 100 + param_1,(int)local_80);
      }
    }
  }
  local_8 = 0xffffffff;
  if (0x14 < local_40) {
                    /* WARNING: Subroutine does not return */
    _free(local_48);
  }
  FUN_00526bb0(local_80);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0043e4d0 @ 0043e4d0 ////

void __thiscall FUN_0043e4d0(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 100 != 0) {
      iVar1 = (param_2 - iVar1) / 100;
      goto LAB_0043e515;
    }
  }
  iVar1 = 0;
LAB_0043e515:
  FUN_0043e1d0(this,param_2,1,param_3);
  *param_1 = iVar1 * 100 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_0043e540 @ 0043e540 ////

void __thiscall FUN_0043e540(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 100) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 100))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0043e010(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 0x19;
    return;
  }
  FUN_0043e4d0(this,&param_1,*(int *)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0043e5d0 @ 0043e5d0 ////

void __cdecl FUN_0043e5d0(char *param_1)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *local_138;
  undefined4 local_134;
  uint local_130;
  undefined1 local_12c [20];
  char *local_118;
  undefined4 local_114;
  undefined4 local_110;
  char local_10c [20];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined **local_f0;
  undefined **local_ec;
  undefined4 local_e8;
  undefined4 **local_e4;
  undefined4 local_e0;
  undefined4 *local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  char *local_b8;
  uint local_b4;
  uint local_b0;
  char local_ac [20];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  void *local_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint local_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0873;
  pvStack_c = ExceptionList;
  local_118 = local_10c;
  local_10c[0] = '\0';
  local_114 = 0;
  local_110 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_118,"",0);
  local_114 = 0;
  *local_118 = '\0';
  local_f8 = 0;
  local_f4 = 0;
  local_138 = local_12c;
  local_4 = 0;
  local_12c[0] = 0;
  local_134 = 0;
  local_130 = 0x14;
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  FUN_004015d0(&local_138,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4._0_1_ = 1;
  bVar1 = FUN_00553a50(&local_118,&local_138);
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  if (bVar1) {
    local_138 = local_12c;
    local_12c[0] = 0;
    local_134 = 0;
    local_130 = 0x14;
    local_4 = CONCAT31(local_4._1_3_,2);
    uVar4 = FUN_00552520(&local_118,&local_138);
    if ((char)uVar4 != '\0') {
      uVar4 = FUN_00552520(&local_118,&local_138);
      cVar2 = (char)uVar4;
      while (cVar2 != '\0') {
        local_e0 = 0;
        local_e8 = 0;
        local_d0 = 0;
        local_d4 = 0;
        local_e4 = &local_d8;
        local_d8 = &local_e8;
        local_b8 = local_ac;
        local_c4 = 0;
        local_c0 = 0;
        local_bc = 0;
        local_ec = &PTR_LAB_00d16abc;
        local_f0 = &PTR_FUN_00d1919c;
        local_ac[0] = '\0';
        local_b4 = 0;
        local_b0 = 0x14;
        local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
        local_4 = CONCAT31(local_4._1_3_,5);
        puVar5 = FUN_0056ac50(local_6c,&local_138);
        uVar4 = puVar5[1];
        pcVar3 = (char *)*puVar5;
        if (local_b0 <= uVar4) {
          if (0x14 < local_b0) {
                    /* WARNING: Subroutine does not return */
            _free(local_b8);
          }
          local_b0 = uVar4 + 0x20 & 0xffffffe0;
          local_b8 = _malloc(local_b0);
        }
        _strncpy(local_b8,pcVar3,uVar4);
        local_b8[uVar4] = '\0';
        local_b4 = uVar4;
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        puVar5 = FUN_0056ac50(local_8c,&local_138);
        local_4._0_1_ = 6;
        uStack_98 = FUN_00567d80(puVar5);
        local_4._0_1_ = 5;
        if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c[0]);
        }
        puVar5 = FUN_0056ac50(apvStack_2c,&local_138);
        local_4._0_1_ = 7;
        uStack_94 = FUN_00567d80(puVar5);
        local_4._0_1_ = 5;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        puVar5 = FUN_0056ac50(apvStack_4c,&local_138);
        local_4._0_1_ = 8;
        iVar6 = FUN_00567d80(puVar5);
        uStack_90 = iVar6 != 0;
        local_4._0_1_ = 5;
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        FUN_0043e540(&DAT_00f87e04,(int)&local_f0);
        local_4 = CONCAT31(local_4._1_3_,2);
        if (0x14 < local_b0) {
                    /* WARNING: Subroutine does not return */
          _free(local_b8);
        }
        FUN_00526bb0(&local_f0);
        uVar4 = FUN_00552520(&local_118,&local_138);
        cVar2 = (char)uVar4;
      }
    }
    if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
      _free(local_138);
    }
  }
  local_4 = 0xffffffff;
  FUN_00552ce0(&local_118);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0043e980 @ 0043e980 ////

void FUN_0043e980(void)

{
  FUN_0043e5d0("data/audio/radiostinginfo.csv");
  return;
}


//// FUNCTION FUN_0043e9c0 @ 0043e9c0 ////

void __cdecl FUN_0043e9c0(char param_1)

{
  FUN_009d10d0();
  if (param_1 != '\0') {
    FUN_009a56b0(0xff000000,'\x01');
  }
  FUN_009a1410();
  return;
}


//// FUNCTION FUN_0043ea00 @ 0043ea00 ////

void __fastcall FUN_0043ea00(int param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_00566c00(DAT_0104cdf4);
  fVar1 = (fVar1 + (float10)*(int *)(param_1 + 0x90)) * (float10)0.05;
  if (fVar1 <= (float10)0.0) {
    fVar1 = (float10)0.0;
  }
  **(float **)(param_1 + 0x8c) =
       (float)(fVar1 * (float10)*(float *)(param_1 + 0x70) + (float10)*(float *)(param_1 + 100));
  *(float *)(*(int *)(param_1 + 0x8c) + 4) =
       (float)(fVar1 * (float10)*(float *)(param_1 + 0x74) + (float10)*(float *)(param_1 + 0x68));
  *(float *)(*(int *)(param_1 + 0x8c) + 8) =
       (float)((((float10)0.0 * fVar1 + (float10)*(float *)(param_1 + 0x78)) * fVar1 +
               (float10)*(float *)(param_1 + 0x6c)) - (float10)0.1);
  return;
}


//// FUNCTION FUN_0043eaa0 @ 0043eaa0 ////

int * __thiscall FUN_0043eaa0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0043eb40 @ 0043eb40 ////

void FUN_0043eb40(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f87e60;
  if (DAT_00f87e60 != (undefined4 *)0x0) {
    iVar1 = DAT_00f87e60[0x12];
    DAT_00f87e60[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f87e4c[1])();
    DAT_00f87e60 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0043eb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_00f87e4c)();
    return;
  }
  return;
}


//// FUNCTION FUN_0043ec00 @ 0043ec00 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0043ec00(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  float10 fVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0893;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  *(undefined ***)this = &PTR_FUN_00d191e0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  local_4 = 1;
  if ((_DAT_00f87e48 & 1) == 0) {
    _DAT_00f87e48 = _DAT_00f87e48 | 1;
    DAT_00f87e3c = 0;
    DAT_00f87e40 = 0;
    DAT_00f87e44 = 0x3f000000;
  }
  *(void **)((int)this + 0x84) = this;
  FUN_00acdb9e(0xe4fac0);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0x88) = iVar2;
  if (s___AVCDrunkBubble_TM___00e4faa8[0x16] != '\0') {
    iVar2 = 0x7c;
    pcVar5 = "BubbleLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe4fac0);
    FUN_0097df60(pcVar3,pcVar5,iVar2);
    s___AVCDrunkBubble_TM___00e4faa8[0x16] = '\0';
  }
  *(undefined4 *)((int)this + 100) = *param_2;
  *(undefined4 *)((int)this + 0x68) = param_2[1];
  *(undefined4 *)((int)this + 0x6c) = param_2[2];
  *(undefined4 *)((int)this + 0x70) = DAT_00f87e3c;
  *(undefined4 *)((int)this + 0x74) = DAT_00f87e40;
  *(undefined4 *)((int)this + 0x78) = DAT_00f87e44;
  *(int *)((int)this + 0x8c) = param_1;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffeff;
  puVar1 = *(undefined4 **)((int)this + 0x8c);
  *puVar1 = *(undefined4 *)((int)this + 100);
  puVar1[1] = *(undefined4 *)((int)this + 0x68);
  puVar1[2] = *(undefined4 *)((int)this + 0x6c);
  fVar4 = FUN_00990e30(0.02,0.05);
  if (fVar4 < (float10)0.001) {
    fVar4 = (float10)0.001;
  }
  *(float *)(*(int *)((int)this + 0x8c) + 0x24) = (float)fVar4;
  *(undefined4 *)((int)this + 0x90) = 0;
  FUN_0043ea00((int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0043ed80 @ 0043ed80 ////

/* WARNING: Removing unreachable block (ram,0x0043edb7) */

void __fastcall FUN_0043ed80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d191e0;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_0043ede0 @ 0043ede0 ////

undefined4 * __cdecl FUN_0043ede0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *this;
  undefined4 *puVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca08ab;
  local_c = ExceptionList;
  if (DAT_00f87e60 == 0) {
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_c;
  uVar2 = FUN_00995d50(*(int *)(DAT_00f87e60 + 0x78));
  if (-1 < (int)uVar2) {
    this = operator_new(0x94);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_0043ec00(this,uVar2 * 0x34 + *(int *)(*(int *)(DAT_00f87e60 + 0x78) + 0x20),
                            param_1);
    }
    piVar1 = puVar3 + 0x1f;
    piVar4 = (int *)(DAT_00f87e60 + 0x90);
    puVar3[0x20] = piVar4;
    *piVar1 = *piVar4;
    *(int **)(*piVar4 + 4) = piVar1;
    *piVar4 = (int)piVar1;
    ExceptionList = local_c;
    return puVar3;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0043eeb0 @ 0043eeb0 ////

void __fastcall FUN_0043eeb0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d19200;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0043ef00 @ 0043ef00 ////

void __fastcall FUN_0043ef00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d19200;
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


//// FUNCTION FUN_0043ef80 @ 0043ef80 ////

undefined4 * __thiscall FUN_0043ef80(void *this,byte param_1)

{
  FUN_0043ed80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0043efa0 @ 0043efa0 ////

void __fastcall FUN_0043efa0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d19210;
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


//// FUNCTION FUN_0043eff0 @ 0043eff0 ////

undefined4 * __thiscall FUN_0043eff0(void *this,byte param_1)

{
  FUN_0043efa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0043f010 @ 0043f010 ////

void __fastcall FUN_0043f010(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Memory;
  undefined1 uVar3;
  LONG LVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca08d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1921c;
  local_4 = 1;
  if ((undefined4 *)param_1[0x21] != param_1 + 0x24) {
    do {
      piVar1 = (int *)param_1[0x21];
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
    } while ((undefined4 *)param_1[0x21] != param_1 + 0x24);
  }
  _Memory = *(void **)(param_1[0x1e] + 0x18);
  if (_Memory == (void *)0x0) {
    *(undefined4 *)(param_1[0x1e] + 0x18) = 0;
    puVar2 = (undefined4 *)param_1[0x1e];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar3;
      param_1[0x1e] = 0;
    }
    FUN_0043efa0(param_1 + 0x1f);
    local_4 = 0xffffffff;
    FUN_0053ddb0(param_1);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0043f120 @ 0043f120 ////

undefined4 * __thiscall FUN_0043f120(void *this,byte param_1)

{
  FUN_0043f010(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0043f140 @ 0043f140 ////

void __fastcall FUN_0043f140(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d19210;
  return;
}


//// FUNCTION FUN_0043f1a0 @ 0043f1a0 ////

undefined4 * __fastcall FUN_0043f1a0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0934;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(param_1);
  *param_1 = &PTR_FUN_00d1921c;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar2 = param_1 + 0x24;
  param_1[0x26] = 0;
  *puVar2 = 0;
  param_1[0x25] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x1f] = &PTR_LAB_00d19210;
  param_1[0x21] = puVar2;
  *puVar2 = param_1 + 0x20;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  puVar2 = FUN_0040a690(0x40,'\0');
  param_1[0x1e] = puVar2;
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 4;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  *(undefined4 *)(param_1[0x1e] + 0x18) = uVar3;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined1 *)(*(int *)(param_1[0x1e] + 0x18) + 0xc) = 6;
  pvVar4 = FUN_0099bb50("fx_bubble.dds",0,0,0,'\0');
  if (*(void **)((int)*(void **)(param_1[0x1e] + 0x18) + 0x18) != pvVar4) {
    Engine_SetResourceReference(*(void **)(param_1[0x1e] + 0x18),(int)pvVar4);
  }
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  puVar1 = (uint *)(*(int *)(param_1[0x1e] + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  FUN_0099a220((void *)param_1[0x1e],1);
  FUN_0040a6f0(param_1[0x1e]);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0043f2c0 @ 0043f2c0 ////

void FUN_0043f2c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca094b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0043f1a0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_00f87e4c[1])();
  DAT_00f87e60 = puVar2;
  (*(code *)*DAT_00f87e4c)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0043f770 @ 0043f770 ////

void __cdecl FUN_0043f770(undefined4 *param_1,undefined4 *param_2)

{
  int *this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca09b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004335f0((int *)&local_10,param_1,0,0,0,0);
  local_4 = 0;
  FUN_004335f0((int *)&local_14,param_2,1,0,0,0);
  local_4._0_1_ = 1;
  puVar2 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      this = (int *)puVar2[2];
      if (this[0x128] == 0) {
        (**(code **)(*this + 0x128))(local_10);
        FUN_0059bb60(this,(int)local_10);
        puVar3 = local_10;
      }
      else {
        (**(code **)(*this + 0x128))(local_14,1);
        FUN_0059bb60(this,(int)local_14);
        puVar3 = local_14;
      }
      FUN_0059bba0(this,(int)puVar3);
      puVar3 = puVar2 + 1;
      puVar2 = (undefined4 *)*puVar3;
    } while ((undefined4 *)*puVar3 != &DAT_0104cfd4);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_14 != (undefined4 *)0x0) &&
     (iVar1 = local_14[0x12], local_14[0x12] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)*local_14)(1);
  }
  local_14 = (undefined4 *)0x0;
  local_4 = 0xffffffff;
  if ((local_10 != (undefined4 *)0x0) &&
     (iVar1 = local_10[0x12], local_10[0x12] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)*local_10)(1);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0043fb80 @ 0043fb80 ////

/* WARNING: Removing unreachable block (ram,0x0043fdd6) */
/* WARNING: Removing unreachable block (ram,0x0043fd14) */
/* WARNING: Removing unreachable block (ram,0x0043fc52) */
/* WARNING: Removing unreachable block (ram,0x0043fcb3) */
/* WARNING: Removing unreachable block (ram,0x0043fd75) */
/* WARNING: Removing unreachable block (ram,0x0043fe39) */
/* WARNING: Removing unreachable block (ram,0x0043fbf1) */

void FUN_0043fb80(void)

{
  char local_20 [7];
  undefined1 local_19;
  undefined1 local_17;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_f;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Registers 7 unused "Easter Egg" toggles via the stubbed command registration
                       (FUN_005434b0): ee_rabbitsecurity, ee_halloween, ee_apes, ee_fights,
                       ee_bloodlust, ee_thriller, ee_starshiptycoon. All inert in retail. Two have
                       matching custom AI behavior/animation files elsewhere in the data:
                       ai_ee_fightclub.flm and ai_ee_rabbitsecurity.flm — the other five have no
                       known matching content asset. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0a58;
  local_c = ExceptionList;
  local_20[0] = '\0';
  ExceptionList = &local_c;
  _strncpy(local_20,"ee_rabbitsecurity",0x11);
  local_f = 0;
  local_4 = 0;
  FUN_005434b0();
  local_20[0] = '\0';
  _strncpy(local_20,"ee_halloween",0xc);
  local_14 = 0;
  local_4 = 1;
  FUN_005434b0();
  local_20[0] = '\0';
  _strncpy(local_20,"ee_apes",7);
  local_19 = 0;
  local_4 = 2;
  FUN_005434b0();
  local_20[0] = '\0';
  _strncpy(local_20,"ee_fights",9);
  local_17 = 0;
  local_4 = 3;
  FUN_005434b0();
  local_20[0] = '\0';
  _strncpy(local_20,"ee_bloodlust",0xc);
  local_14 = 0;
  local_4 = 4;
  FUN_005434b0();
  local_20[0] = '\0';
  _strncpy(local_20,"ee_thriller",0xb);
  local_15 = 0;
  local_4 = 5;
  FUN_005434b0();
  local_20[0] = '\0';
  _strncpy(local_20,"ee_starshiptycoon",0x11);
  local_f = 0;
  local_4 = 6;
  FUN_005434b0();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0043fe60 @ 0043fe60 ////

void __fastcall FUN_0043fe60(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0043fe90 @ 0043fe90 ////

void FUN_0043fe90(void)

{
  return;
}


//// FUNCTION FUN_0043feb0 @ 0043feb0 ////

void FUN_0043feb0(void)

{
  return;
}


//// FUNCTION FUN_0043fec0 @ 0043fec0 ////

float10 __cdecl FUN_0043fec0(int param_1)

{
  return (float10)*(float *)(&DAT_00f87e70 + param_1 * 4);
}


//// FUNCTION FUN_0043ffe0 @ 0043ffe0 ////

void __cdecl FUN_0043ffe0(int *param_1)

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


//// FUNCTION FUN_00440030 @ 00440030 ////

void __cdecl FUN_00440030(int param_1)

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


//// FUNCTION FUN_00440060 @ 00440060 ////

void __fastcall FUN_00440060(int *param_1)

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


//// FUNCTION FUN_00440130 @ 00440130 ////

void __cdecl FUN_00440130(float *param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(&DAT_00f87e70 + param_2 * 4);
  if (fVar1 < 0.0) {
    *param_1 = 0.0;
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_004401b0 @ 004401b0 ////

void __fastcall FUN_004401b0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00440230 @ 00440230 ////

void __fastcall FUN_00440230(int *param_1)

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


//// FUNCTION FUN_004402a0 @ 004402a0 ////

void __thiscall FUN_004402a0(void *this,int param_1)

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


//// FUNCTION FUN_00440300 @ 00440300 ////

void __thiscall FUN_00440300(void *this,int *param_1)

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


//// FUNCTION FUN_00440360 @ 00440360 ////

int * __fastcall FUN_00440360(int *param_1)

{
  FUN_00440060(param_1);
  return param_1;
}


//// FUNCTION FUN_004403c0 @ 004403c0 ////

void __fastcall FUN_004403c0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_004403e0 @ 004403e0 ////

void __fastcall FUN_004403e0(int *param_1)

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
  puStack_8 = &LAB_00ca0a78;
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


//// FUNCTION FUN_004404b0 @ 004404b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004404b0(void)

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
  puStack_8 = &LAB_00ca0ba3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00559fb0(local_e4);
  local_104 = local_f8;
  local_4 = 0;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"experience",10);
  local_100 = 10;
  local_104[10] = '\0';
  local_4._0_1_ = 1;
  FUN_0055be10(local_e4,&local_104,'\0');
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"",0);
  local_100 = 0;
  *local_104 = '\0';
  local_4._0_1_ = 2;
  FUN_00558a50(local_e4,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"LOT_PERHAMMERBUILD",0x12);
  local_100 = 0x12;
  local_104[0x12] = '\0';
  local_4._0_1_ = 3;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87e70 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"LOT_PERLITTERSWEPT",0x12);
  local_100 = 0x12;
  local_104[0x12] = '\0';
  local_4._0_1_ = 4;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87e74 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"LOT_PERHAMMERREPAIR",0x13);
  local_100 = 0x13;
  local_104[0x13] = '\0';
  local_4._0_1_ = 5;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87e78 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"SET_REHEARSELOOP",0x10);
  local_100 = 0x10;
  local_104[0x10] = '\0';
  local_4._0_1_ = 6;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87e7c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"SET_WATCHSHOOTLOOP",0x12);
  local_100 = 0x12;
  local_104[0x12] = '\0';
  local_4._0_1_ = 7;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87e84 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"SET_WATCHREHEARSELOOP",0x15);
  local_100 = 0x15;
  local_104[0x15] = '\0';
  local_4._0_1_ = 8;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87e80 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOVIES_WRITERSTART",0x12);
  local_100 = 0x12;
  local_104[0x12] = '\0';
  local_4._0_1_ = 9;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87e98 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"MOVIES_SCIENTISTSTART",0x15);
  local_100 = 0x15;
  local_104[0x15] = '\0';
  local_4._0_1_ = 10;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87e9c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x40;
  local_104 = _malloc(0x40);
  _strncpy(local_104,"MOVIES_SCIENTIST_INCREMENT_PER_MONTH",0x24);
  local_100 = 0x24;
  local_104[0x24] = '\0';
  local_4._0_1_ = 0xb;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87ea0 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOVIES_CREWPERSHOT",0x12);
  local_100 = 0x12;
  local_104[0x12] = '\0';
  local_4._0_1_ = 0xc;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87ea4 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"SET_REHEARSE_TIME",0x11);
  local_100 = 0x11;
  local_104[0x11] = '\0';
  local_4._0_1_ = 0xd;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87e94 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"SET_REHEARSE_INCREMENT",0x16);
  local_100 = 0x16;
  local_104[0x16] = '\0';
  local_4._0_1_ = 0xe;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87e88 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"SET_WATCH_INCREMENT",0x13);
  local_100 = 0x13;
  local_104[0x13] = '\0';
  local_4._0_1_ = 0xf;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87e8c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"SET_WATCHSHOOT_INCREMENT",0x18);
  local_100 = 0x18;
  local_104[0x18] = '\0';
  local_4._0_1_ = 0x10;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87e90 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOVIES_LEADROLE",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 0x11;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87ea8 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOVIES_SUPPORTROLE",0x12);
  local_100 = 0x12;
  local_104[0x12] = '\0';
  local_4._0_1_ = 0x12;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87eac = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOVIES_DIRECTOR",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 0x13;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87eb0 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOVIES_STUNTMAN",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 0x14;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87ebc = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"SCRIPT_QUALITY_GAIN",0x13);
  local_100 = 0x13;
  local_104[0x13] = '\0';
  local_4._0_1_ = 0x15;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87eb4 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"SCRIPT_EXP_GAIN",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 0x16;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87eb8 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"stars_experience_interval",0x19);
  local_100 = 0x19;
  local_104[0x19] = '\0';
  local_4._0_1_ = 0x17;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00e4fb60 = (float)(fVar1 * (float10)10.0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"stars_experience_decay",0x16);
  local_100 = 0x16;
  local_104[0x16] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0x18);
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00e4fb5c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00440f00 @ 00440f00 ////

int * __fastcall FUN_00440f00(int *param_1)

{
  FUN_00440230(param_1);
  return param_1;
}


//// FUNCTION FUN_00440f10 @ 00440f10 ////

undefined4 * __thiscall FUN_00440f10(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00440f50 @ 00440f50 ////

int * __fastcall FUN_00440f50(int *param_1)

{
  FUN_00440060(param_1);
  return param_1;
}


//// FUNCTION FUN_00440f90 @ 00440f90 ////

undefined4 * __thiscall FUN_00440f90(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00441030 @ 00441030 ////

void * __thiscall FUN_00441030(void *this,byte param_1)

{
  FUN_004403c0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00441050 @ 00441050 ////

int * __fastcall FUN_00441050(int *param_1)

{
  FUN_00440230(param_1);
  return param_1;
}


//// FUNCTION FUN_00441060 @ 00441060 ////

undefined4 FUN_00441060(undefined4 *param_1,undefined4 *param_2)

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


//// FUNCTION FUN_004410c0 @ 004410c0 ////

undefined4 * __thiscall FUN_004410c0(void *this,undefined4 *param_1)

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
LAB_00441104:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00441109;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00441104;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00441109:
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


//// FUNCTION FUN_00441140 @ 00441140 ////

void FUN_00441140(void)

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


//// FUNCTION FUN_004411a0 @ 004411a0 ////

undefined4 * __thiscall
FUN_004411a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_00441210 @ 00441210 ////

int * __thiscall FUN_00441210(void *this,int *param_1)

{
  int *_Dest;
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint _Size;
  void *pvVar4;
  float local_4c;
  int local_48;
  void *local_44;
  char *local_40;
  uint local_3c;
  uint local_38;
  char local_34 [20];
  char *local_20;
  uint local_1c;
  uint local_18;
  char local_14 [20];
  
  local_40 = local_34;
  local_48 = 0;
  local_34[0] = '\0';
  local_3c = 0;
  local_38 = 0x14;
  local_44 = this;
  _strncpy(local_40,"",0);
  local_3c = 0;
  *local_40 = '\0';
  local_48 = **(int **)((int)this + 0x90);
  local_4c = 0.0;
  if ((int *)local_48 != *(int **)((int)this + 0x90)) {
    do {
      iVar2 = local_48;
      local_20 = local_14;
      local_14[0] = '\0';
      local_1c = 0;
      local_18 = 0x14;
      uVar3 = *(uint *)(local_48 + 0x10);
      pcVar1 = *(char **)(local_48 + 0xc);
      if (0x13 < uVar3) {
        local_18 = uVar3 + 0x20 & 0xffffffe0;
        local_20 = _malloc(local_18);
      }
      _strncpy(local_20,pcVar1,uVar3);
      local_20[uVar3] = '\0';
      local_1c = uVar3;
      uVar3 = FUN_00413450(&local_20,"genre_",0,6);
      if ((uVar3 != 0xffffffff) && (local_4c < *(float *)(iVar2 + 0x2c))) {
        uVar3 = *(uint *)(iVar2 + 0x10);
        local_4c = *(float *)(iVar2 + 0x2c);
        pcVar1 = *(char **)(iVar2 + 0xc);
        if (local_38 <= uVar3) {
          if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
            _free(local_40);
          }
          local_38 = uVar3 + 0x20 & 0xffffffe0;
          local_40 = _malloc(local_38);
        }
        _strncpy(local_40,pcVar1,uVar3);
        local_40[uVar3] = '\0';
        local_3c = uVar3;
      }
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
      FUN_00440230(&local_48);
      uVar3 = local_3c;
      pcVar1 = local_40;
    } while (local_48 != *(int *)((int)local_44 + 0x90));
    if (0.0 < local_4c) {
      *param_1 = (int)(param_1 + 3);
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      if (0x13 < local_3c) {
        _Size = local_3c + 0x20 & 0xffffffe0;
        param_1[2] = _Size;
        pvVar4 = _malloc(_Size);
        *param_1 = (int)pvVar4;
      }
      _strncpy((char *)*param_1,pcVar1,uVar3);
      param_1[1] = uVar3;
      *(undefined1 *)(uVar3 + *param_1) = 0;
      if (local_38 < 0x15) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
  }
  _Dest = param_1 + 3;
  *param_1 = (int)_Dest;
  *(char *)_Dest = '\0';
  param_1[1] = 0;
  param_1[2] = 0x14;
  _strncpy((char *)_Dest,"",0);
  param_1[1] = 0;
  *(undefined1 *)*param_1 = 0;
  if (local_38 < 0x15) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_40);
}


//// FUNCTION FUN_00441450 @ 00441450 ////

float10 __fastcall FUN_00441450(int param_1)

{
  char *_Source;
  int iVar1;
  uint uVar2;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  char *local_20;
  uint local_1c;
  uint local_18;
  char local_14 [20];
  
  local_28 = **(int **)(param_1 + 0x90);
  local_2c = 0.0;
  local_30 = 0;
  local_24 = param_1;
  if ((int *)local_28 != *(int **)(param_1 + 0x90)) {
    do {
      iVar1 = local_28;
      local_20 = local_14;
      local_14[0] = '\0';
      local_1c = 0;
      local_18 = 0x14;
      uVar2 = *(uint *)(local_28 + 0x10);
      _Source = *(char **)(local_28 + 0xc);
      if (0x13 < uVar2) {
        local_18 = uVar2 + 0x20 & 0xffffffe0;
        local_20 = _malloc(local_18);
      }
      _strncpy(local_20,_Source,uVar2);
      local_20[uVar2] = '\0';
      local_1c = uVar2;
      uVar2 = FUN_00413450(&local_20,"genre_",0,6);
      if (uVar2 != 0xffffffff) {
        local_2c = local_2c + *(float *)(iVar1 + 0x2c);
        local_30 = local_30 + 1;
      }
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
      FUN_00440230(&local_28);
    } while (local_28 != *(int *)(local_24 + 0x90));
  }
  return (float10)local_2c / (float10)local_30;
}


//// FUNCTION FUN_00441540 @ 00441540 ////

void __thiscall FUN_00441540(void *this,float *param_1)

{
  int *piVar1;
  float fVar2;
  float local_8;
  int *local_4;
  
  piVar1 = *(int **)((int)this + 0x90);
  local_4 = (int *)*piVar1;
  local_8 = 0.0;
  while (local_4 != piVar1) {
    local_8 = local_8 + (float)local_4[0xb];
    FUN_00440230((int *)&local_4);
  }
  fVar2 = 1.0 - 1.0 / (local_8 + 1.0);
  if (fVar2 < 0.0) {
    *param_1 = 0.0;
    return;
  }
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  *param_1 = fVar2;
  return;
}


//// FUNCTION FUN_00441600 @ 00441600 ////

void __fastcall FUN_00441600(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00441140();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00441640 @ 00441640 ////

void * FUN_00441640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_004411a0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00441680 @ 00441680 ////

void __thiscall FUN_00441680(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_004410c0(this,param_2);
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


//// FUNCTION FUN_004416e0 @ 004416e0 ////

int __fastcall FUN_004416e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00441140();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00441710 @ 00441710 ////

void FUN_00441710(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00441710(*(void **)((int)param_1 + 8));
    FUN_004403c0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00441750 @ 00441750 ////

void __thiscall FUN_00441750(void *this,undefined4 *param_1,undefined4 *param_2)

{
  FUN_00441680((void *)((int)this + 0x8c),(int *)&param_2,param_2);
  if (param_2 != *(undefined4 **)((int)this + 0x90)) {
    *param_1 = param_2[0xb];
    return;
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00441790 @ 00441790 ////

uint __thiscall FUN_00441790(void *this,undefined4 *param_1)

{
  FUN_00441680((void *)((int)this + 0x8c),(int *)&param_1,param_1);
  if (param_1 == *(undefined4 **)((int)this + 0x90)) {
    return (uint)param_1 & 0xffffff00;
  }
  if (0.0 < (float)param_1[0xb]) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_004417e0 @ 004417e0 ////

void __fastcall FUN_004417e0(int param_1)

{
  FUN_00441710(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00441810 @ 00441810 ////

void __thiscall
FUN_00441810(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca0bb8;
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
  piVar3 = FUN_00441640(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0044190b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_004402a0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_00440300(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_0044190b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00440300(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_004402a0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_004419c0 @ 004419c0 ////

void __thiscall FUN_004419c0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca0bd8;
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
  FUN_00440230((int *)&param_2);
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
      goto LAB_00441b31;
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
      piVar2 = (int *)FUN_0043ffe0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00440030((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00441b31:
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
            FUN_004402a0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00440300(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_004402a0(this,(int)piVar5);
              break;
            }
LAB_00441bf4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00440300(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00441bf4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_004402a0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00440300(this,piVar5);
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


//// FUNCTION FUN_00441c90 @ 00441c90 ////

void __thiscall FUN_00441c90(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_00441cf4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00441cf9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00441cf4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00441cf9:
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
      puVar5 = (undefined4 *)FUN_00441810(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00440060((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00441810(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00441db0 @ 00441db0 ////

void __thiscall FUN_00441db0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00441710((void *)piVar6[1]);
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
    FUN_004419c0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00441e70 @ 00441e70 ////

undefined4 * __thiscall FUN_00441e70(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00441810(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_00441810(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_00441810(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00440060((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_00441810(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00441810(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00440230((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00441ff2;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_00441810(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00441810(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00441ff2:
  puVar4 = (undefined4 *)FUN_00441c90(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00442050 @ 00442050 ////

int * __thiscall FUN_00442050(void *this,undefined4 *param_1)

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
  puStack_8 = &LAB_00ca0bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_004410c0(this,param_1);
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
  piVar2 = FUN_00441e70(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_00442310 @ 00442310 ////

void __fastcall FUN_00442310(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00441db0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00442340 @ 00442340 ////

void __fastcall FUN_00442340(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca0c6d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1959c;
  param_1[0x19] = &PTR_LAB_00d1957c;
  local_4 = 2;
  FUN_00441710(*(void **)(param_1[0x24] + 4));
  *(undefined4 *)(param_1[0x24] + 4) = param_1[0x24];
  param_1[0x25] = 0;
  *(undefined4 *)param_1[0x24] = param_1[0x24];
  *(undefined4 *)(param_1[0x24] + 8) = param_1[0x24];
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00441db0(param_1 + 0x23,&local_10,*(int **)param_1[0x24],(int *)param_1[0x24]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x24]);
}


//// FUNCTION FUN_00442410 @ 00442410 ////

void __thiscall FUN_00442410(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_00441710(*(void **)(*(int *)((int)this + 0x90) + 4));
  piVar2 = param_1;
  *(int *)(*(int *)((int)this + 0x90) + 4) = *(int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0x90);
  *(int *)(*(int *)((int)this + 0x90) + 8) = *(int *)((int)this + 0x90);
  piVar3 = param_1 + 0x24;
  param_1 = *(int **)*piVar3;
  if (param_1 != (int *)*piVar3) {
    do {
      iVar1 = param_1[0xb];
      piVar3 = FUN_00442050((void *)((int)this + 0x8c),param_1 + 3);
      *piVar3 = iVar1;
      FUN_00440230((int *)&param_1);
    } while (param_1 != (int *)piVar2[0x24]);
  }
  return;
}


//// FUNCTION FUN_00442490 @ 00442490 ////

void __thiscall FUN_00442490(void *this,undefined4 *param_1,float param_2)

{
  float *pfVar1;
  
  if (0.0 <= param_2) {
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  pfVar1 = (float *)FUN_00442050((void *)((int)this + 0x8c),param_1);
  *pfVar1 = param_2;
  return;
}


//// FUNCTION FUN_004424f0 @ 004424f0 ////

int __fastcall FUN_004424f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00441140();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00442520 @ 00442520 ////

undefined4 * __fastcall FUN_00442520(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0ca1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  param_1[0x19] = &PTR_LAB_00d1957c;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00d1959c;
  iVar1 = FUN_00441140();
  param_1[0x24] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x24] + 4) = param_1[0x24];
  *(undefined4 *)param_1[0x24] = param_1[0x24];
  *(undefined4 *)(param_1[0x24] + 8) = param_1[0x24];
  param_1[0x25] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00441710(*(void **)(param_1[0x24] + 4));
  *(undefined4 *)(param_1[0x24] + 4) = param_1[0x24];
  param_1[0x25] = 0;
  *(undefined4 *)param_1[0x24] = param_1[0x24];
  *(undefined4 *)(param_1[0x24] + 8) = param_1[0x24];
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004425d0 @ 004425d0 ////

undefined4 * __thiscall FUN_004425d0(void *this,byte param_1)

{
  FUN_00442340(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004425f0 @ 004425f0 ////

float10 __thiscall FUN_004425f0(void *param_1,undefined4 *param_2,float param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *this;
  float10 fVar5;
  undefined4 *puVar6;
  
  iVar4 = AwardBonusManager_Get();
  puVar2 = param_2;
  if (iVar4 != 0) {
    iVar4 = 1;
    this = (void *)AwardBonusManager_Get();
    cVar3 = AwardBonusManager_IsBonusActive(this,iVar4);
    if (cVar3 != '\0') {
      iVar4 = 1;
      puVar6 = puVar2;
      AwardBonusManager_Get();
      fVar5 = AwardBonus_GetValue(iVar4,puVar6);
      param_3 = (float)(fVar5 * (float10)param_3);
    }
  }
  FUN_00441680((void *)((int)param_1 + 0x8c),(int *)&param_2,puVar2);
  if (param_2 != *(undefined4 **)((int)param_1 + 0x90)) {
    pfVar1 = (float *)(param_2 + 0xb);
    param_2 = (undefined4 *)((1.0 - *pfVar1) * param_3);
    FUN_00442490(param_1,puVar2,*pfVar1 + (float)param_2);
    return (float10)(float)param_2;
  }
  param_2 = (undefined4 *)param_3;
  FUN_00442490(param_1,puVar2,param_3);
  return (float10)(float)param_2;
}


//// FUNCTION FUN_00442690 @ 00442690 ////

void __thiscall FUN_00442690(void *this,undefined4 *param_1,int param_2)

{
  FUN_004425f0(this,param_1,*(float *)(&DAT_00f87e70 + param_2 * 4));
  return;
}


//// FUNCTION FUN_004426b0 @ 004426b0 ////

void __fastcall FUN_004426b0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00442760 @ 00442760 ////

int * __thiscall FUN_00442760(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004427a0 @ 004427a0 ////

int * __thiscall FUN_004427a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00442880 @ 00442880 ////

undefined4 * __thiscall FUN_00442880(void *this,undefined4 param_1)

{
  *(undefined1 *)((int)this + 4) = 0xff;
  *(undefined1 *)((int)this + 5) = 0xff;
  *(undefined1 *)((int)this + 6) = 0xff;
  *(undefined1 *)((int)this + 7) = 0xff;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  FUN_009a8100(this);
  *(undefined4 *)this = param_1;
  return this;
}


//// FUNCTION FUN_004428c0 @ 004428c0 ////

ulonglong * __fastcall FUN_004428c0(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *param_1 = uVar1;
  FUN_00471b10((longlong *)param_1);
  return param_1;
}


//// FUNCTION FUN_004428f0 @ 004428f0 ////

longlong * __thiscall FUN_004428f0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  FUN_00471b10(this);
  return this;
}


//// FUNCTION FUN_00442920 @ 00442920 ////

void __fastcall FUN_00442920(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *param_1 = uVar1;
  FUN_00471b10((longlong *)param_1);
  return;
}


//// FUNCTION FUN_00442950 @ 00442950 ////

void __thiscall FUN_00442950(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  FUN_00471b10(this);
  return;
}


//// FUNCTION FUN_00442970 @ 00442970 ////

void __thiscall FUN_00442970(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = *(uint *)this;
  *(uint *)this = uVar2 + uVar1;
  *(uint *)((int)this + 4) = *(int *)((int)this + 4) + param_1[1] + (uint)CARRY4(uVar2,uVar1);
  FUN_00471b10(this);
  return;
}


//// FUNCTION FUN_00442a20 @ 00442a20 ////

void FUN_00442a20(void)

{
  FUN_0098fdd0("PFinance",&DAT_00f87ec4);
  return;
}


//// FUNCTION FUN_00442ae0 @ 00442ae0 ////

void __thiscall FUN_00442ae0(void *this,uint param_1,int param_2,int param_3)

{
  longlong *plVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x90);
  *(uint *)((int)this + 0x90) = uVar2 - param_1;
  *(uint *)((int)this + 0x94) = (*(int *)((int)this + 0x94) - param_2) - (uint)(uVar2 < param_1);
  FUN_00471b10((longlong *)((int)this + 0x90));
  if (param_3 != 8) {
    uVar2 = *(uint *)((int)this + param_3 * 8 + 0xd8);
    plVar1 = (longlong *)((int)this + param_3 * 8 + 0xd8);
    *(uint *)plVar1 = uVar2 + param_1;
    *(uint *)((int)plVar1 + 4) = *(int *)((int)plVar1 + 4) + param_2 + (uint)CARRY4(uVar2,param_1);
    FUN_00471b10(plVar1);
  }
  uVar2 = *(uint *)((int)this + 0x118);
  *(uint *)((int)this + 0x118) = uVar2 + param_1;
  *(uint *)((int)this + 0x11c) = *(int *)((int)this + 0x11c) + param_2 + (uint)CARRY4(uVar2,param_1)
  ;
  FUN_00471b10((longlong *)((int)this + 0x118));
  return;
}


//// FUNCTION FUN_00442b60 @ 00442b60 ////

void __thiscall FUN_00442b60(void *this,uint param_1,int param_2,int param_3)

{
  longlong *plVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x90);
  *(uint *)((int)this + 0x90) = uVar2 + param_1;
  *(uint *)((int)this + 0x94) = *(int *)((int)this + 0x94) + param_2 + (uint)CARRY4(uVar2,param_1);
  FUN_00471b10((longlong *)((int)this + 0x90));
  if (param_3 != 8) {
    uVar2 = *(uint *)((int)this + param_3 * 8 + 0x120);
    plVar1 = (longlong *)((int)this + param_3 * 8 + 0x120);
    *(uint *)plVar1 = uVar2 + param_1;
    *(uint *)((int)plVar1 + 4) = *(int *)((int)plVar1 + 4) + param_2 + (uint)CARRY4(uVar2,param_1);
    FUN_00471b10(plVar1);
  }
  uVar2 = *(uint *)((int)this + 0x160);
  *(uint *)((int)this + 0x160) = uVar2 + param_1;
  *(uint *)((int)this + 0x164) = *(int *)((int)this + 0x164) + param_2 + (uint)CARRY4(uVar2,param_1)
  ;
  FUN_00471b10((longlong *)((int)this + 0x160));
  return;
}


//// FUNCTION FUN_00442be0 @ 00442be0 ////

void __thiscall FUN_00442be0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x90) = param_1;
  *(undefined4 *)((int)this + 0x94) = param_2;
  FUN_00471b10((longlong *)((int)this + 0x90));
  *(undefined4 *)((int)this + 0x98) = param_1;
  *(undefined4 *)((int)this + 0x9c) = param_2;
  FUN_00471b10((longlong *)((int)this + 0x98));
  return;
}


//// FUNCTION FUN_00442c20 @ 00442c20 ////

longlong * __thiscall FUN_00442c20(void *this,longlong *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)this + 0x9c);
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_00442ca0 @ 00442ca0 ////

void FUN_00442ca0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f87ed8;
  if (DAT_00f87ed8 != (undefined4 *)0x0) {
    iVar1 = DAT_00f87ed8[0x12];
    DAT_00f87ed8[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f87ec4[1])();
    DAT_00f87ed8 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00442ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_00f87ec4)();
    return;
  }
  return;
}


//// FUNCTION FUN_00442cf0 @ 00442cf0 ////

ulonglong * __cdecl FUN_00442cf0(ulonglong *param_1)

{
  ulonglong uVar1;
  int iStack00000008;
  
  uVar1 = FUN_00acd42c();
  iStack00000008 = (int)uVar1 - (int)((uVar1 & 0xffffffff) % 5);
  uVar1 = FUN_00acd42c();
  *param_1 = uVar1;
  FUN_00471b10((longlong *)param_1);
  return param_1;
}


//// FUNCTION FUN_00442da0 @ 00442da0 ////

void __fastcall FUN_00442da0(int param_1)

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


//// FUNCTION FUN_00442df0 @ 00442df0 ////

int __thiscall FUN_00442df0(void *this,short *param_1,uint param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  
  if ((param_3 != 0) && (param_2 < *(uint *)((int)this + 4))) {
    iVar1 = *(int *)this;
    for (psVar2 = (short *)(iVar1 + param_2 * 2);
        psVar2 < (short *)(iVar1 + *(uint *)((int)this + 4) * 2); psVar2 = psVar2 + 1) {
      psVar3 = param_1;
      iVar4 = param_3;
      do {
        if (*psVar3 == *psVar2) {
          return (int)psVar2 - iVar1 >> 1;
        }
        psVar3 = psVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return -1;
}


//// FUNCTION FUN_00442e50 @ 00442e50 ////

longlong * __thiscall FUN_00442e50(void *this,longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)this;
  uVar2 = *param_2;
  *(uint *)((int)param_1 + 4) = (*(int *)((int)this + 4) - param_2[1]) - (uint)(uVar1 < *param_2);
  *(uint *)param_1 = uVar1 - uVar2;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_00442ec0 @ 00442ec0 ////

void __fastcall FUN_00442ec0(int *param_1)

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
  puStack_8 = &LAB_00ca0cb8;
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


//// FUNCTION FUN_00442fd0 @ 00442fd0 ////

undefined ** FUN_00442fd0(void)

{
  undefined4 *puVar1;
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
  puStack_8 = &LAB_00ca0cd8;
  local_c = ExceptionList;
  if (DAT_00e4fb6c == 0) {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x20;
    ExceptionList = &local_c;
    local_4c = _malloc(0x20);
    _strncpy(local_4c,"MONEY_SYMBOL_PLACING",0x14);
    local_48 = 0x14;
    local_4c[0x14] = '\0';
    local_4 = 0;
    puVar1 = FUN_009b5030(local_2c,&local_4c);
    FUN_004036d0(&PTR_DAT_00e4fb68,(wchar_t *)*puVar1,puVar1[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return &PTR_DAT_00e4fb68;
}


//// FUNCTION FUN_004430a0 @ 004430a0 ////

void __thiscall FUN_004430a0(void *this,short *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00ace02d(param_1);
  FUN_00442df0(this,param_1,param_2,iVar1);
  return;
}


//// FUNCTION FUN_004430d0 @ 004430d0 ////

void * __thiscall FUN_004430d0(void *this,wchar_t *param_1)

{
  size_t sVar1;
  wchar_t local_80 [64];
  
  sVar1 = _swprintf(local_80,0xd18f7c,param_1);
  FUN_0040cae0(this,local_80,sVar1);
  return this;
}


//// FUNCTION FUN_00443110 @ 00443110 ////

void __thiscall FUN_00443110(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d195e8;
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


//// FUNCTION FUN_00443160 @ 00443160 ////

void __fastcall FUN_00443160(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d195e8;
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


//// FUNCTION FUN_004431b0 @ 004431b0 ////

void __fastcall FUN_004431b0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d195f8;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_004431e0 @ 004431e0 ////

void __fastcall FUN_004431e0(int param_1)

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


//// FUNCTION FUN_00443200 @ 00443200 ////

void __fastcall FUN_00443200(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d195f8;
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


//// FUNCTION FUN_00443250 @ 00443250 ////

undefined4 * __cdecl FUN_00443250(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  FUN_004036d0(&local_20,(wchar_t *)*param_2,param_2[1]);
  FUN_0040cae0(&local_20,(wchar_t *)*param_3,param_3[1]);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_20,local_1c);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_00443300 @ 00443300 ////

void __fastcall FUN_00443300(int param_1)

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
  puStack_8 = &LAB_00ca0d20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Finance.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x2b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar2 = (char *)FUN_00ace33d(0xe4fbd4);
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
  uVar3 = FUN_0098b490("Capital");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2c),8);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Finance.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x2c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4fbd4);
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
  uVar3 = FUN_0098b490("Daily");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x34),8);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Finance.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 2;
    pcVar2 = (char *)FUN_00ace33d(0xe4fbd4);
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
  uVar3 = FUN_0098b490("Previous");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x3c),8);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Finance.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 3;
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
  uVar3 = FUN_0098b490("LastYearLogged");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x6c),4);
  }
  local_34 = (undefined4 *)(param_1 + 0x74);
  local_30 = 9;
  do {
    if (DAT_00e67469 == '\0') {
      pcVar5 = "C:\\movies\\dev\\TheMovies\\Finance.cpp";
      puVar6 = &DAT_010581d8;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      local_2c = local_20;
      DAT_010581d4 = 0x2f;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"SLVAR CALLED: ",0xe);
      local_28 = 0xe;
      local_2c[0xe] = '\0';
      local_4 = 4;
      pcVar2 = (char *)FUN_00ace33d(0xe4fbd4);
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
    uVar3 = FUN_0098b490("Spent[x]");
    if ((char)uVar3 != '\0') {
      FUN_0098a430(local_34,8);
    }
    local_34 = local_34 + 2;
    local_30 = local_30 + -1;
  } while (local_30 != 0);
  local_34 = (undefined4 *)(param_1 + 0xbc);
  local_30 = 9;
  do {
    if (DAT_00e67469 == '\0') {
      local_2c = local_20;
      pcVar5 = "C:\\movies\\dev\\TheMovies\\Finance.cpp";
      puVar6 = &DAT_010581d8;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
      local_4 = 5;
      pcVar2 = (char *)FUN_00ace33d(0xe4fbd4);
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
    uVar3 = FUN_0098b490("Earned[x]");
    if ((char)uVar3 != '\0') {
      FUN_0098a430(local_34,8);
    }
    local_34 = local_34 + 2;
    local_30 = local_30 + -1;
    if (local_30 == 0) {
      FUN_00989780();
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_004438b0 @ 004438b0 ////

void __cdecl FUN_004438b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  size_t sVar4;
  ulonglong uVar5;
  undefined1 *local_ec;
  int local_e8;
  uint local_e4;
  undefined1 local_e0 [20];
  undefined2 *local_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined2 local_c0 [10];
  void *local_ac [2];
  uint local_a4;
  wchar_t awStack_8c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca0d46;
  pvStack_c = ExceptionList;
  local_ec = local_e0;
  local_e0[0] = 0;
  local_e8 = 0;
  local_e4 = 0x14;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_004302c0(param_1,&DAT_00d19690,0xffffffff,1);
  if (iVar1 == -1) {
    FUN_004015d0(&local_ec,(char *)*param_1,param_1[1]);
  }
  else {
    puVar2 = FUN_00430770(param_1,local_ac,iVar1 + 1,0xffffffff);
    FUN_004015d0(&local_ec,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac[0]);
    }
  }
  FUN_0056a1d0((int *)&local_ec);
  iVar1 = DAT_00f87ed8;
  if (local_e8 != 0) {
    FUN_00567d60(&local_ec);
    uVar5 = FUN_00acd42c();
    *(ulonglong *)(iVar1 + 0x90) = uVar5;
    FUN_00471b10((longlong *)(iVar1 + 0x90));
  }
  local_cc = local_c0;
  local_c0[0] = 0;
  local_c8 = 0;
  local_c4 = 10;
  uVar3 = FUN_00ace02d(L"fin_capital = ");
  FUN_004036d0(&local_cc,L"fin_capital = ",uVar3);
  local_4 = CONCAT31(local_4._1_3_,1);
  sVar4 = _swprintf(awStack_8c,0xd18f84,
                    SUB84((double)((float)*(longlong *)(DAT_00f87ed8 + 0x90) * 1.1920929e-07),0));
  FUN_0040cae0(&local_cc,awStack_8c,sVar4);
  sVar4 = FUN_00ace02d((short *)&DAT_00d1966c);
  FUN_0040cae0(&local_cc,L"\n",sVar4);
  FUN_00544a20(DAT_0104c8f4,&local_cc);
  if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00443a80 @ 00443a80 ////

void __thiscall FUN_00443a80(void *this,void *param_1,wchar_t *param_2)

{
  size_t sVar1;
  wchar_t *_Format;
  wchar_t local_80 [64];
  
  sVar1 = FUN_00ace02d(L"<tr><td bgcolor=#00000000 width=");
  FUN_0040cae0(param_1,L"<tr><td bgcolor=#00000000 width=",sVar1);
  sVar1 = _swprintf(local_80,0xd18f7c,*(wchar_t **)((int)this + 0xb4));
  FUN_0040cae0(param_1,local_80,sVar1);
  sVar1 = FUN_00ace02d(L"></td><td><expand id=");
  FUN_0040cae0(param_1,L"></td><td><expand id=",sVar1);
  _Format = (wchar_t *)(*(int *)((int)this + 0xa8) + 1);
  *(wchar_t **)((int)this + 0xa8) = _Format;
  sVar1 = _swprintf(local_80,0xd18f7c,_Format);
  FUN_0040cae0(param_1,local_80,sVar1);
  sVar1 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(param_1,L">",sVar1);
  sVar1 = FUN_00ace02d(L"<ed>");
  FUN_0040cae0(param_1,L"<ed>",sVar1);
  sVar1 = FUN_00ace02d(param_2);
  FUN_0040cae0(param_1,param_2,sVar1);
  sVar1 = FUN_00ace02d(L"</ed>");
  FUN_0040cae0(param_1,L"</ed>",sVar1);
  sVar1 = FUN_00ace02d(L"<ed>");
  FUN_0040cae0(param_1,L"<ed>",sVar1);
  sVar1 = FUN_00ace02d(param_2);
  FUN_0040cae0(param_1,param_2,sVar1);
  sVar1 = FUN_00ace02d(L"<br>");
  FUN_0040cae0(param_1,L"<br>",sVar1);
  sVar1 = FUN_00ace02d(L"<table width=100% cellspacing=1 bgcolor=#18000000>");
  FUN_0040cae0(param_1,L"<table width=100% cellspacing=1 bgcolor=#18000000>",sVar1);
  return;
}


//// FUNCTION FUN_00443bf0 @ 00443bf0 ////

void FUN_00443bf0(void *param_1,float param_2)

{
  size_t sVar1;
  int in_ECX;
  wchar_t local_80 [64];
  
  sVar1 = FUN_00ace02d(L"</table>");
  FUN_0040cae0(param_1,L"</table>",sVar1);
  sVar1 = FUN_00ace02d(L"</ed></expand></td><td width=");
  FUN_0040cae0(param_1,L"</ed></expand></td><td width=",sVar1);
  sVar1 = _swprintf(local_80,0xd18f7c,*(wchar_t **)(in_ECX + 0xb0));
  FUN_0040cae0(param_1,local_80,sVar1);
  sVar1 = FUN_00ace02d(L" align=right valign=bottom><money>");
  FUN_0040cae0(param_1,L" align=right valign=bottom><money>",sVar1);
  sVar1 = _swprintf(local_80,0xd18f84,SUB84((double)param_2,0));
  FUN_0040cae0(param_1,local_80,sVar1);
  sVar1 = FUN_00ace02d(L"</money></td></tr>");
  FUN_0040cae0(param_1,L"</money></td></tr>",sVar1);
  return;
}


//// FUNCTION FUN_00443cd0 @ 00443cd0 ////

void __thiscall FUN_00443cd0(void *this,void *param_1,wchar_t *param_2,float param_3,int param_4)

{
  size_t sVar1;
  void *this_00;
  wchar_t local_80 [64];
  
  sVar1 = FUN_00ace02d(L"<tr><td bgcolor=#00000000 width=");
  FUN_0040cae0(param_1,L"<tr><td bgcolor=#00000000 width=",sVar1);
  sVar1 = _swprintf(local_80,0xd18f7c,*(wchar_t **)((int)this + 0xb4));
  FUN_0040cae0(param_1,local_80,sVar1);
  sVar1 = FUN_00ace02d(L"></td><td>");
  FUN_0040cae0(param_1,L"></td><td>",sVar1);
  if ((*(int *)((int)this + 0xcc) == 0) || (param_4 == 0)) {
    sVar1 = FUN_00ace02d(param_2);
    FUN_0040cae0(param_1,param_2,sVar1);
  }
  else {
    *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + 1;
    sVar1 = FUN_00ace02d(L"<a href=%");
    FUN_0040cae0(param_1,L"<a href=%",sVar1);
    this_00 = FUN_004430d0(param_1,*(undefined4 *)((int)this + 0xac));
    sVar1 = FUN_00ace02d((short *)&DAT_00d19724);
    FUN_0040cae0(this_00,L">",sVar1);
    sVar1 = FUN_00ace02d(param_2);
    FUN_0040cae0(param_1,param_2,sVar1);
    sVar1 = FUN_00ace02d(L"</a>");
    FUN_0040cae0(param_1,L"</a>",sVar1);
    (*(code *)**(undefined4 **)(*(int *)((int)this + 0xcc) + 0x344))
              (*(undefined4 *)((int)this + 0xac),&LAB_004426e0);
  }
  sVar1 = FUN_00ace02d(L"</td><td width=");
  FUN_0040cae0(param_1,L"</td><td width=",sVar1);
  sVar1 = _swprintf(local_80,0xd18f7c,*(wchar_t **)((int)this + 0xb0));
  FUN_0040cae0(param_1,local_80,sVar1);
  sVar1 = FUN_00ace02d(L" align=right><money>");
  FUN_0040cae0(param_1,L" align=right><money>",sVar1);
  sVar1 = _swprintf(local_80,0xd18f84,SUB84((double)param_3,0));
  FUN_0040cae0(param_1,local_80,sVar1);
  sVar1 = FUN_00ace02d(L"</money></td></tr>");
  FUN_0040cae0(param_1,L"</money></td></tr>",sVar1);
  return;
}


//// FUNCTION FUN_00443ed0 @ 00443ed0 ////

longlong * __thiscall FUN_00443ed0(void *this,longlong *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  void *local_54;
  int local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  void *pvStack_38;
  uint uStack_30;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ca0d58;
  pvStack_14 = ExceptionList;
  local_48 = 0;
  local_44 = 0;
  local_50 = 0;
  uStack_4c = 0;
  ExceptionList = &pvStack_14;
  local_54 = this;
  FUN_00443a80(this,param_2,L"<translate>budget_actors</translate>");
  puVar7 = DAT_0104d05c;
  if (DAT_0104d05c != &DAT_0104d068) {
    do {
      piVar1 = (int *)puVar7[2];
      iVar2 = FUN_005773c0((int)piVar1);
      iVar3 = GetPlayerStudio();
      if (iVar2 == iVar3) {
        piVar4 = (int *)(**(code **)(*piVar1 + 0x1d4))();
        puVar5 = (uint *)(**(code **)(*piVar4 + 8))(auStack_40);
        uStack_4c = *puVar5;
        local_48 = puVar5[1];
        FUN_00471b10((longlong *)&uStack_4c);
        bVar8 = CARRY4((uint)local_54,uStack_4c);
        local_54 = (void *)((int)local_54 + uStack_4c);
        local_50 = local_50 + local_48 + (uint)bVar8;
        FUN_00471b10((longlong *)&local_54);
        puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x5c))(auStack_3c);
        uStack_c = 0;
        FUN_00443cd0(local_54,param_2,(wchar_t *)*puVar6,
                     (float)CONCAT44(local_44,local_48) * 1.1920929e-07,puVar7[2]);
        uStack_c = 0xffffffff;
        if (10 < uStack_30) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_38);
        }
      }
      puVar6 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar6;
    } while ((undefined4 *)*puVar6 != &DAT_0104d068);
  }
  FUN_00443bf0(param_2,(float)CONCAT44(uStack_4c,local_50) * 1.1920929e-07);
  *(int *)param_1 = local_50;
  *(uint *)((int)param_1 + 4) = uStack_4c;
  FUN_00471b10(param_1);
  ExceptionList = pvStack_14;
  return param_1;
}


//// FUNCTION FUN_00444050 @ 00444050 ////

uint * __thiscall FUN_00444050(void *this,uint *param_1,void *param_2)

{
  uint *puVar1;
  bool bVar2;
  uint local_10;
  uint uStack_c;
  longlong local_8;
  
  local_10 = 0;
  uStack_c = 0;
  FUN_00443a80(this,param_2,L"<translate>budget_stars</translate>");
  puVar1 = (uint *)FUN_00443ed0(this,&local_8,param_2);
  bVar2 = CARRY4(local_10,*puVar1);
  local_10 = local_10 + *puVar1;
  uStack_c = uStack_c + puVar1[1] + (uint)bVar2;
  FUN_00471b10((longlong *)&local_10);
  FUN_00443bf0(param_2,(float)CONCAT44(uStack_c,local_10) * 1.1920929e-07);
  param_1[1] = uStack_c;
  *param_1 = local_10;
  FUN_00471b10((longlong *)param_1);
  return param_1;
}


//// FUNCTION FUN_004440e0 @ 004440e0 ////

uint * __thiscall FUN_004440e0(void *this,uint *param_1,void *param_2)

{
  bool bVar1;
  uint local_10;
  uint uStack_c;
  uint local_8;
  int local_4;
  
  local_10 = 0;
  uStack_c = 0;
  FUN_00443a80(this,param_2,L"<translate>budget_staff</translate>");
  local_8 = 0;
  local_4 = 0;
  FUN_00471b10((longlong *)&local_8);
  bVar1 = CARRY4(local_10,local_8);
  local_10 = local_10 + local_8;
  uStack_c = uStack_c + local_4 + (uint)bVar1;
  FUN_00471b10((longlong *)&local_10);
  local_8 = 0;
  local_4 = 0;
  FUN_00471b10((longlong *)&local_8);
  bVar1 = CARRY4(local_10,local_8);
  local_10 = local_10 + local_8;
  uStack_c = uStack_c + local_4 + (uint)bVar1;
  FUN_00471b10((longlong *)&local_10);
  local_8 = 0;
  local_4 = 0;
  FUN_00471b10((longlong *)&local_8);
  bVar1 = CARRY4(local_10,local_8);
  local_10 = local_10 + local_8;
  uStack_c = uStack_c + local_4 + (uint)bVar1;
  FUN_00471b10((longlong *)&local_10);
  local_8 = 0;
  local_4 = 0;
  FUN_00471b10((longlong *)&local_8);
  bVar1 = CARRY4(local_10,local_8);
  local_10 = local_10 + local_8;
  uStack_c = uStack_c + local_4 + (uint)bVar1;
  FUN_00471b10((longlong *)&local_10);
  FUN_00443bf0(param_2,(float)CONCAT44(uStack_c,local_10) * 1.1920929e-07);
  *param_1 = local_10;
  param_1[1] = uStack_c;
  FUN_00471b10((longlong *)param_1);
  return param_1;
}


//// FUNCTION FUN_00444220 @ 00444220 ////

longlong * __thiscall FUN_00444220(void *this,longlong *param_1,void *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uStack_54;
  int local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  undefined1 auStack_3c [4];
  void *pvStack_38;
  uint uStack_30;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ca0d78;
  pvStack_14 = ExceptionList;
  local_48 = 0;
  local_44 = 0;
  local_50 = 0;
  uStack_4c = 0;
  ExceptionList = &pvStack_14;
  FUN_00443a80(this,param_2,L"<translate>budget_sets</translate>");
  puVar1 = DAT_0104acbc;
  while( true ) {
    if (puVar1 == &DAT_0104acc8) {
      FUN_00443bf0(param_2,(float)CONCAT44(uStack_4c,local_50) * 1.1920929e-07);
      *(int *)param_1 = local_50;
      *(uint *)((int)param_1 + 4) = uStack_4c;
      FUN_00471b10(param_1);
      ExceptionList = pvStack_14;
      return param_1;
    }
    piVar2 = (int *)FUN_005291b0(puVar1[2]);
    puVar3 = (uint *)(**(code **)(*piVar2 + 8))(local_40);
    uStack_4c = *puVar3;
    local_48 = puVar3[1];
    FUN_00471b10((longlong *)&uStack_4c);
    bVar5 = CARRY4(uStack_54,uStack_4c);
    uStack_54 = uStack_54 + uStack_4c;
    local_50 = local_50 + local_48 + (uint)bVar5;
    FUN_00471b10((longlong *)&uStack_54);
    puVar4 = (undefined4 *)(**(code **)(*(int *)puVar1[2] + 0x5c))(auStack_3c);
    uStack_c = 0;
    FUN_00443cd0(this,param_2,(wchar_t *)*puVar4,(float)CONCAT44(local_44,local_48) * 1.1920929e-07,
                 puVar1[2]);
    uStack_c = 0xffffffff;
    if (10 < uStack_30) break;
    puVar1 = (undefined4 *)puVar1[1];
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_38);
}


//// FUNCTION FUN_00444370 @ 00444370 ////

longlong * __thiscall FUN_00444370(void *this,longlong *param_1,void *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uStack_54;
  int local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  undefined1 auStack_3c [4];
  void *pvStack_38;
  uint uStack_30;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ca0d98;
  pvStack_14 = ExceptionList;
  local_48 = 0;
  local_44 = 0;
  local_50 = 0;
  uStack_4c = 0;
  ExceptionList = &pvStack_14;
  FUN_00443a80(this,param_2,L"<translate>budget_facilities</translate>");
  puVar1 = DAT_0104ed18;
  while( true ) {
    if (puVar1 == &DAT_0104ed24) {
      FUN_00443bf0(param_2,(float)CONCAT44(uStack_4c,local_50) * 1.1920929e-07);
      *(int *)param_1 = local_50;
      *(uint *)((int)param_1 + 4) = uStack_4c;
      FUN_00471b10(param_1);
      ExceptionList = pvStack_14;
      return param_1;
    }
    piVar2 = (int *)FUN_005291b0(puVar1[2]);
    puVar3 = (uint *)(**(code **)(*piVar2 + 8))(local_40);
    uStack_4c = *puVar3;
    local_48 = puVar3[1];
    FUN_00471b10((longlong *)&uStack_4c);
    bVar5 = CARRY4(uStack_54,uStack_4c);
    uStack_54 = uStack_54 + uStack_4c;
    local_50 = local_50 + local_48 + (uint)bVar5;
    FUN_00471b10((longlong *)&uStack_54);
    puVar4 = (undefined4 *)(**(code **)(*(int *)puVar1[2] + 0x5c))(auStack_3c);
    uStack_c = 0;
    FUN_00443cd0(this,param_2,(wchar_t *)*puVar4,(float)CONCAT44(local_44,local_48) * 1.1920929e-07,
                 puVar1[2]);
    uStack_c = 0xffffffff;
    if (10 < uStack_30) break;
    puVar1 = (undefined4 *)puVar1[1];
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_38);
}


//// FUNCTION FUN_004444c0 @ 004444c0 ////

longlong * __thiscall FUN_004444c0(void *this,void *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  longlong *unaff_retaddr;
  undefined1 local_8 [8];
  
  piVar4 = (int *)FUN_005291b0(DAT_00f890c0);
  plVar5 = (longlong *)(**(code **)(*piVar4 + 8))(local_8);
  lVar3 = *plVar5;
  uVar1 = *(undefined4 *)((int)plVar5 + 4);
  lVar2 = *plVar5;
  FUN_00471b10((longlong *)&stack0xffffffec);
  FUN_00443cd0(this,param_1,L"<translate>budget_ground-rent</translate>",
               (float)lVar2 * 1.1920929e-07,0);
  *(int *)unaff_retaddr = (int)lVar3;
  *(undefined4 *)((int)unaff_retaddr + 4) = uVar1;
  FUN_00471b10(unaff_retaddr);
  return unaff_retaddr;
}


//// FUNCTION FUN_00444740 @ 00444740 ////

undefined4 * __thiscall FUN_00444740(void *this,undefined4 *param_1)

{
  size_t sVar1;
  uint *puVar2;
  bool bVar3;
  uint local_bc;
  int iStack_b8;
  wchar_t *local_b4;
  uint local_b0;
  uint local_ac;
  wchar_t local_a8 [10];
  uint local_94 [2];
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca0ddb;
  local_c = ExceptionList;
  local_b4 = local_a8;
  local_a8[0] = L'\0';
  local_b0 = 0;
  local_ac = 10;
  local_4 = 0;
  local_bc = 0;
  iStack_b8 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  sVar1 = FUN_00ace02d(L"<t2><table width=100% cellspacing=1 bgcolor=#18000000>");
  FUN_0040cae0(&local_b4,L"<t2><table width=100% cellspacing=1 bgcolor=#18000000>",sVar1);
  puVar2 = FUN_00444050(this,local_94,&local_b4);
  bVar3 = CARRY4(local_bc,*puVar2);
  local_bc = local_bc + *puVar2;
  iStack_b8 = iStack_b8 + puVar2[1] + (uint)bVar3;
  FUN_00471b10((longlong *)&local_bc);
  puVar2 = FUN_004440e0(this,local_94,&local_b4);
  bVar3 = CARRY4(local_bc,*puVar2);
  local_bc = local_bc + *puVar2;
  iStack_b8 = iStack_b8 + puVar2[1] + (uint)bVar3;
  FUN_00471b10((longlong *)&local_bc);
  puVar2 = (uint *)FUN_00444220(this,(longlong *)local_94,&local_b4);
  bVar3 = CARRY4(local_bc,*puVar2);
  local_bc = local_bc + *puVar2;
  iStack_b8 = iStack_b8 + puVar2[1] + (uint)bVar3;
  FUN_00471b10((longlong *)&local_bc);
  puVar2 = (uint *)FUN_00444370(this,(longlong *)local_94,&local_b4);
  bVar3 = CARRY4(local_bc,*puVar2);
  local_bc = local_bc + *puVar2;
  iStack_b8 = iStack_b8 + puVar2[1] + (uint)bVar3;
  FUN_00471b10((longlong *)&local_bc);
  puVar2 = (uint *)FUN_004444c0(this,local_94);
  bVar3 = CARRY4(local_bc,*puVar2);
  local_bc = local_bc + *puVar2;
  iStack_b8 = iStack_b8 + puVar2[1] + (uint)bVar3;
  FUN_00471b10((longlong *)&local_bc);
  sVar1 = FUN_00ace02d(L"<tr><td bgcolor=#00000000></td><td bgcolor=#00000000>");
  FUN_0040cae0(&local_b4,L"<tr><td bgcolor=#00000000></td><td bgcolor=#00000000>",sVar1);
  sVar1 = FUN_00ace02d(L"</td><td width=");
  FUN_0040cae0(&local_b4,L"</td><td width=",sVar1);
  sVar1 = _swprintf(local_8c,0xd18f7c,*(wchar_t **)((int)this + 0xb0));
  FUN_0040cae0(&local_b4,local_8c,sVar1);
  sVar1 = FUN_00ace02d(L" align=right><money>");
  FUN_0040cae0(&local_b4,L" align=right><money>",sVar1);
  sVar1 = _swprintf(local_8c,0xd18f84,
                    SUB84((double)((float)CONCAT44(iStack_b8,local_bc) * 1.1920929e-07),0));
  FUN_0040cae0(&local_b4,local_8c,sVar1);
  sVar1 = FUN_00ace02d(L"</money></td></tr>");
  FUN_0040cae0(&local_b4,L"</money></td></tr>",sVar1);
  sVar1 = FUN_00ace02d(L"</table></t2>");
  FUN_0040cae0(&local_b4,L"</table></t2>",sVar1);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_b4,local_b0);
  if (10 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004449d0 @ 004449d0 ////

void __thiscall FUN_004449d0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  undefined4 uStack_2c;
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0df8;
  pvStack_c = ExceptionList;
  piVar1 = (int *)((int)this + 0xb8);
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0xb8) + 4))();
  *(undefined4 *)((int)this + 0xcc) = param_1;
  (**(code **)*piVar1)();
  puVar2 = FUN_00444740(this,&uStack_2c);
  uStack_4 = 0;
  (**(code **)(**(int **)((int)this + 0xcc) + 0x54))(puVar2);
  puStack_8 = (undefined1 *)0xffffffff;
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0xcc) = 0;
  (**(code **)*piVar1)();
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00444a70 @ 00444a70 ////

void __cdecl FUN_00444a70(uint *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **this;
  uint uVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  bool bVar7;
  undefined8 uVar8;
  int local_134;
  wchar_t *local_130;
  size_t local_12c;
  uint local_128;
  wchar_t local_124 [10];
  wchar_t *local_110;
  size_t local_10c;
  uint local_108;
  wchar_t local_104 [10];
  uint local_f0;
  wchar_t *local_ec;
  size_t local_e8;
  uint local_e4;
  wchar_t local_e0 [10];
  wchar_t *local_cc;
  undefined4 local_c8;
  uint local_c4;
  wchar_t local_c0 [10];
  wchar_t *local_ac;
  size_t local_a8;
  uint local_a4;
  wchar_t *local_8c;
  undefined4 local_88;
  uint local_84;
  wchar_t local_80 [10];
  undefined4 local_6c [8];
  undefined1 local_4c [32];
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca0e44;
  local_c = ExceptionList;
  local_110 = local_104;
  local_104[0] = L'\0';
  local_10c = 0;
  local_108 = 10;
  local_ec = local_e0;
  local_4 = 0;
  local_e0[0] = L'\0';
  local_e8 = 0;
  local_e4 = 10;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_ec,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4._0_1_ = 1;
  FUN_009b4f00(&local_ac);
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar8 = FUN_00471af0(param_1);
  iVar2 = (int)uVar8;
  bVar7 = -1 < iVar2;
  if (!bVar7) {
    iVar2 = -iVar2;
  }
  puVar3 = FUN_009b4f80(&local_130,iVar2);
  FUN_0040cae0(&local_110,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  if (bVar7) {
    puVar3 = FUN_0056b470(&local_130,&local_110);
    FUN_004036d0(&local_110,(wchar_t *)*puVar3,puVar3[1]);
  }
  else {
    FUN_0056b470(&local_130,&local_110);
    uVar1 = FUN_00ace02d((short *)&DAT_00d19bd4);
    FUN_004036d0(&local_110,L"-",uVar1);
    FUN_0040cae0(&local_110,local_130,local_12c);
  }
  if (10 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  this = FUN_00442fd0();
  iVar2 = FUN_00ace02d((short *)&DAT_00d19bd0);
  uVar1 = FUN_00442df0(this,(short *)&DAT_00d19bd0,0,iVar2);
  iVar2 = FUN_00ace02d((short *)&DAT_00d19bd0);
  uVar4 = FUN_00442df0(this,(short *)&DAT_00d19bd0,uVar1 + 1,iVar2);
  iVar2 = FUN_00ace02d((short *)&DAT_00d19bd0);
  local_f0 = FUN_00442df0(this,(short *)&DAT_00d19bd0,uVar4 + 1,iVar2);
  if (((uVar1 == 0xffffffff) || (uVar4 == 0xffffffff)) || (local_f0 == 0xffffffff)) {
    FUN_0040cae0(param_2,local_110,local_10c);
    FUN_0040cae0(param_2,local_ec,local_e8);
    FUN_0040cae0(param_2,local_ac,local_a8);
  }
  else {
    _eh_vector_constructor_iterator_(local_6c,0x20,3,FUN_00403e50,FUN_00403650);
    puVar3 = FUN_004211c0(this,&local_130,uVar1,3);
    FUN_004036d0(local_6c,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    puVar3 = FUN_004211c0(this,&local_130,uVar4,3);
    FUN_004036d0(local_4c,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    puVar3 = FUN_004211c0(this,&local_130,local_f0,3);
    FUN_004036d0(local_2c,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    local_134 = 0;
    puVar3 = local_6c;
    do {
      local_8c = local_80;
      local_80[0] = L'\0';
      local_88 = 0;
      local_84 = 10;
      uVar1 = FUN_00ace02d((short *)&PTR_DAT_00d19bc8);
      FUN_004036d0(&local_8c,(wchar_t *)&PTR_DAT_00d19bc8,uVar1);
      iVar2 = _wcscmp((wchar_t *)*puVar3,local_8c);
      if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c);
      }
      sVar5 = local_10c;
      pwVar6 = local_110;
      if (iVar2 != 0) {
        local_cc = local_c0;
        local_c0[0] = L'\0';
        local_c8 = 0;
        local_c4 = 10;
        uVar1 = FUN_00ace02d((short *)&DAT_00d19bc0);
        FUN_004036d0(&local_cc,L"<a>",uVar1);
        iVar2 = _wcscmp((wchar_t *)*puVar3,local_cc);
        if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_cc);
        }
        sVar5 = local_e8;
        pwVar6 = local_ec;
        if (iVar2 != 0) {
          local_130 = local_124;
          local_124[0] = L'\0';
          local_12c = 0;
          local_128 = 10;
          uVar1 = FUN_00ace02d((short *)&DAT_00d19bb8);
          FUN_004036d0(&local_130,L"<$>",uVar1);
          iVar2 = _wcscmp((wchar_t *)*puVar3,local_130);
          if (10 < local_128) {
                    /* WARNING: Subroutine does not return */
            _free(local_130);
          }
          sVar5 = local_a8;
          pwVar6 = local_ac;
          if (iVar2 != 0) {
            puVar3 = FUN_00443250(&local_cc,&local_110,&local_ec);
            puVar3 = FUN_00443250(&local_130,puVar3,&local_ac);
            FUN_004036d0(param_2,(wchar_t *)*puVar3,puVar3[1]);
            if (10 < local_128) {
                    /* WARNING: Subroutine does not return */
              _free(local_130);
            }
            if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
              _free(local_cc);
            }
            local_4 = CONCAT31(local_4._1_3_,2);
            _eh_vector_destructor_iterator_(local_6c,0x20,3,FUN_00403650);
            if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
              _free(local_ac);
            }
            if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
              _free(local_ec);
            }
            goto joined_r0x00444f95;
          }
        }
      }
      FUN_0040cae0(param_2,pwVar6,sVar5);
      local_134 = local_134 + 1;
      puVar3 = puVar3 + 8;
    } while (local_134 < 3);
    local_4 = CONCAT31(local_4._1_3_,2);
    _eh_vector_destructor_iterator_(local_6c,0x20,3,FUN_00403650);
  }
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
joined_r0x00444f95:
  if (10 < local_108) {
                    /* WARNING: Subroutine does not return */
    _free(local_110);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION StudioFinance_Constructor @ 00445050 ////

undefined4 * __fastcall StudioFinance_Constructor(undefined4 *param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined4 local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0e89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  param_1[0x19] = &PTR_LAB_00d19c1c;
  *param_1 = &PTR_FUN_00d19bfc;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  puVar1 = (ulonglong *)(param_1 + 0x24);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  plVar2 = (longlong *)(param_1 + 0x26);
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = param_1 + 0x2e;
  param_1[0x2e] = &PTR_FUN_00d195f8;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  local_4._0_1_ = 2;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  uVar3 = FUN_00acd42c();
  *puVar1 = uVar3;
  FUN_00471b10((longlong *)puVar1);
  local_30 = (undefined4)(uVar3 >> 0x20);
  local_34 = (undefined4)uVar3;
  param_1[0x27] = local_30;
  *(undefined4 *)plVar2 = local_34;
  FUN_00471b10(plVar2);
  param_1[0x28] = local_34;
  param_1[0x29] = local_30;
  FUN_00471b10((longlong *)(param_1 + 0x28));
  local_2c = local_20;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x60;
  param_1[0x2d] = 0x20;
  param_1[0x34] = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"studio",6);
  local_28 = 6;
  local_2c[6] = '\0';
  local_4._0_1_ = 3;
  FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
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
  local_4._0_1_ = 4;
  FUN_00558610(DAT_00f88624,&local_2c,0.0);
  uVar3 = FUN_00acd42c();
  *puVar1 = uVar3;
  FUN_00471b10((longlong *)puVar1);
  local_4._0_1_ = 2;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(int *)plVar2 = (int)*puVar1;
  param_1[0x27] = param_1[0x25];
  FUN_00471b10(plVar2);
  param_1[0x28] = (int)*plVar2;
  param_1[0x29] = param_1[0x27];
  FUN_00471b10((longlong *)(param_1 + 0x28));
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"fin_capital",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004453a0 @ 004453a0 ////

undefined4 * __thiscall FUN_004453a0(void *this,byte param_1)

{
  FUN_004453c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004453c0 @ 004453c0 ////

void __fastcall FUN_004453c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca0ea8;
  pvStack_c = ExceptionList;
  puVar1 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  param_1[0x2e] = &PTR_FUN_00d195f8;
  local_4 = 0;
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x30] = param_1[0x2f];
  }
  if (param_1[0x2f] != 0) {
    *(undefined4 *)(param_1[0x2f] + 4) = param_1[0x30];
  }
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x30] = param_1[0x2f];
  }
  if (param_1[0x2f] != 0) {
    *(undefined4 *)(param_1[0x2f] + 4) = param_1[0x30];
  }
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 0x19;
  }
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FinanceUI_Constructor @ 00445480 ////

/* WARNING: Removing unreachable block (ram,0x00445545) */

void FinanceUI_Constructor(void)

{
  undefined4 *puVar1;
  char acStack_20 [8];
  undefined1 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0ed3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x168);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = StudioFinance_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_00f87ec4[1])();
  DAT_00f87ed8 = puVar1;
  (*(code *)*DAT_00f87ec4)();
  acStack_20[0] = '\0';
  _strncpy(acStack_20,"fin_show",8);
  uStack_18 = 0;
  local_4 = 1;
  CVarSystem_Register_STUBBED();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00445570 @ 00445570 ////

void __fastcall FUN_00445570(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004455a0 @ 004455a0 ////

void FUN_004455a0(void)

{
  return;
}


//// FUNCTION FUN_00445630 @ 00445630 ////

void __thiscall FUN_00445630(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0eeb;
  pvStack_c = ExceptionList;
  puVar2 = *(undefined4 **)((int)this + 0xa8);
  ExceptionList = &pvStack_c;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)((int)this + 0xa8) = 0;
  }
  (**(code **)(*(int *)((int)this + 0xac) + 4))();
  *(undefined4 *)((int)this + 0xc0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xac))();
  puVar2 = operator_new(0x8c);
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00472380(puVar2);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0xa8) = puVar2;
  FUN_00471c10(puVar2,param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004456e0 @ 004456e0 ////

longlong * __fastcall FUN_004456e0(int *param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  longlong *unaff_retaddr;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  (**(code **)(*param_1 + 0x10))();
  if (param_1[0x30] != 0) {
    uVar2 = unaff_ESI;
    uVar3 = local_10;
    FUN_00471b10((longlong *)&stack0xffffffdc);
    FUN_00471f30((void *)param_1[0x2a],uVar2,uVar3);
  }
  iVar1 = FUN_00ace790((int *)param_1[0x30],0,&TM::TMFixedAsset::RTTI_Type_Descriptor,
                       &TM::CSet::RTTI_Type_Descriptor,0);
  uStack_c = unaff_ESI;
  if (iVar1 != 0) {
    uStack_8 = local_10;
    FUN_00471b10((longlong *)&uStack_c);
    *(undefined4 *)((int)unaff_retaddr + 4) = uStack_8;
    *(undefined4 *)unaff_retaddr = uStack_c;
    FUN_00471b10(unaff_retaddr);
    *(undefined4 *)(unaff_retaddr + 1) = 3;
    return unaff_retaddr;
  }
  uStack_8 = local_10;
  FUN_00471b10((longlong *)&uStack_c);
  *(undefined4 *)unaff_retaddr = uStack_c;
  *(undefined4 *)((int)unaff_retaddr + 4) = uStack_8;
  FUN_00471b10(unaff_retaddr);
  *(undefined4 *)(unaff_retaddr + 1) = 4;
  return unaff_retaddr;
}


//// FUNCTION FUN_004457d0 @ 004457d0 ////

longlong * __fastcall FUN_004457d0(int *param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_retaddr;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x20))();
  if (param_1[0x30] != 0) {
    uVar1 = unaff_ESI;
    uVar2 = local_8;
    FUN_00471b10((longlong *)&stack0xffffffe4);
    FUN_00471f30((void *)param_1[0x2a],uVar1,uVar2);
  }
  *(undefined4 *)unaff_retaddr = unaff_ESI;
  *(undefined4 *)((int)unaff_retaddr + 4) = local_8;
  FUN_00471b10(unaff_retaddr);
  return unaff_retaddr;
}


//// FUNCTION FUN_00445840 @ 00445840 ////

longlong * __thiscall FUN_00445840(void *this,longlong *param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined8 local_8;
  
  FUN_00526da0(this,(longlong *)&local_10);
  local_8 = FUN_00acd42c();
  FUN_00471b10(&local_8);
  local_10 = (undefined4)local_8;
  uStack_c = local_8._4_4_;
  FUN_00471b10((longlong *)&local_10);
  *(undefined4 *)((int)param_1 + 4) = uStack_c;
  *(undefined4 *)param_1 = local_10;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_004458d0 @ 004458d0 ////

longlong * __thiscall FUN_004458d0(void *this,longlong *param_1)

{
  ulonglong *puVar1;
  undefined8 local_10;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_10 = FUN_00acd42c();
  FUN_00471b10(&local_10);
  if (*(char *)((int)this + 0x60) == '\0') {
    *(undefined1 *)((int)this + 0x60) = 1;
    if (*(int *)((int)this + 0xc0) != 0) {
      (**(code **)(*(int *)this + 0x18))();
      FUN_00471b10((longlong *)&stack0xffffffe0);
      FUN_00471f30(*(void **)((int)this + 0xa8),local_8,uStack_4);
    }
    puVar1 = (ulonglong *)(**(code **)(*(int *)this + 0x18))();
    local_10 = *puVar1;
    FUN_00471b10(&local_10);
  }
  *(undefined4 *)((int)param_1 + 4) = local_10._4_4_;
  *(undefined4 *)param_1 = (undefined4)local_10;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_00445980 @ 00445980 ////

void __fastcall FUN_00445980(int *param_1)

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
  puStack_8 = &LAB_00ca0f08;
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


//// FUNCTION FUN_00445a70 @ 00445a70 ////

void __fastcall FUN_00445a70(int param_1)

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
  puStack_8 = &LAB_00ca0f30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\FixedAssetCosts.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x11;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x74));
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
  uVar3 = FUN_0098b490("POwner");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x74));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\FixedAssetCosts.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x12;
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
  uVar3 = FUN_0098b490("Capacity");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x94),4);
  }
  FUN_005271c0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00445c70 @ 00445c70 ////

undefined4 * __fastcall FUN_00445c70(undefined4 *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0f56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005278e0(param_1);
  piVar1 = param_1 + 0x2b;
  *param_1 = &PTR_FUN_00d19ca4;
  param_1[0xe] = &PTR_LAB_00d19c80;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16bec;
  param_1[0x30] = 0;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 1;
  local_4 = 1;
  param_1[0x33] = 0x3f800000;
  param_1[0x31] = 0;
  param_1[0x2a] = 0;
  (**(code **)(*piVar1 + 4))();
  param_1[0x30] = 0;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00445d20 @ 00445d20 ////

void __fastcall FUN_00445d20(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca0f76;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d19ca4;
  param_1[0xe] = &PTR_LAB_00d19c80;
  puVar2 = (undefined4 *)param_1[0x2a];
  local_4 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x2a] = 0;
  }
  param_1[0x2b] = &PTR_FUN_00d16bec;
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
  local_4 = 0xffffffff;
  FUN_005270c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00445e10 @ 00445e10 ////

undefined4 * __cdecl FUN_00445e10(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0f8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xd0);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_00445c70(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_00445630(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00445e80 @ 00445e80 ////

undefined4 * __thiscall FUN_00445e80(void *this,byte param_1)

{
  FUN_00445d20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00445f00 @ 00445f00 ////

undefined4 __thiscall FUN_00445f00(void *this,float *param_1)

{
  if (((*(float *)this == *param_1) && (*(float *)((int)this + 4) == param_1[1])) &&
     (*(float *)((int)this + 8) == param_1[2])) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00445f60 @ 00445f60 ////

undefined4 * __thiscall FUN_00445f60(void *this,float *param_1,undefined4 param_2)

{
  float10 fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0fa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00406c00(this);
  *(undefined ***)this = &PTR_FUN_00d19d34;
  *(undefined ***)((int)this + 0x78) = &PTR_LAB_00d19d10;
  *(undefined ***)((int)this + 0xa0) = &PTR_FUN_00d19cf8;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined1 *)((int)this + 0x2dc) = 0;
  *(undefined1 *)((int)this + 0x2dd) = 0;
  *(undefined1 *)((int)this + 0x2de) = 0;
  *(undefined1 *)((int)this + 0x2df) = 0;
  *(undefined4 *)((int)this + 700) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2d8) = param_2;
  *(float *)((int)this + 0x2cc) = *param_1;
  *(float *)((int)this + 0x2d0) = param_1[1];
  *(float *)((int)this + 0x2d4) = param_1[2];
  local_4 = 0;
  fVar1 = FUN_00455410(param_1);
  *(float *)((int)this + 0x2d4) = (float)fVar1;
  *(float *)((int)this + 0x100) = *param_1;
  *(float *)((int)this + 0x104) = param_1[1];
  *(float *)((int)this + 0x108) = param_1[2];
  if (*(void **)((int)this + 0x214) != (void *)0x0) {
    FUN_00978350(*(void **)((int)this + 0x214),(float *)((int)this + 0x2cc),
                 *(float *)((int)this + 0x2d8),0);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00446060 @ 00446060 ////

undefined4 * __thiscall FUN_00446060(void *this,byte param_1)

{
  FUN_00446080(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00446080 @ 00446080 ////

void __fastcall FUN_00446080(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d19d34;
  param_1[0x1e] = &PTR_LAB_00d19d10;
  param_1[0x28] = &PTR_FUN_00d19cf8;
  FUN_004064d0(param_1);
  return;
}


//// FUNCTION FUN_004460b0 @ 004460b0 ////

undefined4 __thiscall FUN_004460b0(void *this,undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float unaff_EBX;
  float unaff_ESI;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float *pfStack_8;
  int iStack_4;
  
  iVar3 = param_2;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_28 = 0.0;
  local_2c = 0.0;
  param_2 = FUN_004031a0();
  uVar4 = (**(code **)(*(int *)this + 0xdc))(iVar3,&local_2c);
  if (*(void **)((int)this + 0x214) != (void *)0x0) {
    uVar4 = FUN_009782d0(*(void **)((int)this + 0x214),iStack_4,(int)&param_2,
                         (float *)&stack0xffffffd0,(float *)&stack0xffffffcc);
    if ((char)uVar4 != '\0') {
      fVar1 = *(float *)((int)this + 0x230);
      fVar2 = *(float *)((int)this + 0x234);
      *pfStack_8 = unaff_EBX + *(float *)((int)this + 0x22c);
      pfStack_8[1] = local_2c + fVar1;
      pfStack_8[2] = local_28 + fVar2;
      pfStack_8[3] = fStack_18;
      pfStack_8[4] = fStack_14;
      pfStack_8[5] = fStack_10;
      if (*(char *)((int)this + 0x2dd) != '\0') {
        fVar1 = *(float *)(iVar3 + 0xc4);
        pfStack_8[3] = fVar1;
        return CONCAT31((int3)((uint)fVar1 >> 8),1);
      }
      pfStack_8[3] = unaff_ESI;
      return CONCAT31((int3)((uint)fStack_18 >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_00446210 @ 00446210 ////

void __thiscall FUN_00446210(void *this,int param_1)

{
  int *piVar1;
  undefined4 local_c [3];
  
  FUN_00405780(this,param_1);
  piVar1 = *(int **)(param_1 + 300);
  if (*(char *)((int)this + 0x2dc) != '\0') {
    *(int *)((int)this + 0x2d8) = piVar1[0x31];
  }
  if (*(char *)((int)this + 0x2dd) != '\0') {
    (**(code **)(*piVar1 + 0x34))(local_c);
    FUN_00978610(*(void **)((int)this + 0x214),local_c,(float *)(piVar1 + 0x31),
                 (float *)((int)this + 0x2cc),(float *)((int)this + 0x2d8));
  }
  FUN_00978350(*(void **)((int)this + 0x214),(undefined4 *)((int)this + 0x2cc),
               *(float *)((int)this + 0x2d8),0);
  return;
}


//// FUNCTION FUN_004462a0 @ 004462a0 ////

void __thiscall FUN_004462a0(void *this,float param_1)

{
  if ((*(void **)((int)this + 0x214) != (void *)0x0) && (*(float *)((int)this + 0x2d8) != param_1))
  {
    *(float *)((int)this + 0x2d8) = param_1;
    FUN_00978350(*(void **)((int)this + 0x214),(undefined4 *)((int)this + 0x2cc),param_1,0);
  }
  return;
}


//// FUNCTION FUN_004462e0 @ 004462e0 ////

void __thiscall FUN_004462e0(void *this,float *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(int *)((int)this + 0x214) != 0) {
    pfVar1 = (float *)((int)this + 0x2cc);
    uVar2 = FUN_00445f00(param_1,pfVar1);
    if ((char)uVar2 != '\0') {
      *pfVar1 = *param_1;
      *(float *)((int)this + 0x2d0) = param_1[1];
      *(float *)((int)this + 0x2d4) = param_1[2];
      fVar3 = FUN_00455410(param_1);
      *(float *)((int)this + 0x2d4) = (float)fVar3;
      FUN_00978350(*(void **)((int)this + 0x214),pfVar1,*(float *)((int)this + 0x2d8),0);
    }
  }
  *(float *)((int)this + 0x100) = *param_1;
  *(float *)((int)this + 0x104) = param_1[1];
  *(float *)((int)this + 0x108) = param_1[2];
  return;
}


//// FUNCTION FUN_00446360 @ 00446360 ////

void __fastcall FUN_00446360(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  float10 fVar5;
  undefined4 *puVar6;
  char **ppcVar7;
  float local_2c [3];
  char *local_20;
  undefined4 local_1c;
  uint local_18;
  char local_14 [20];
  
  FUN_00405930(param_1);
  if (((char)param_1[0xad] == '\0') && (*(char *)((int)param_1 + 0x2de) != '\0')) {
    FUN_009840b0(local_2c,param_1 + 0xb3);
    cVar1 = FUN_0046d260(local_2c,0x20);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 4))();
      return;
    }
  }
  if ((int *)param_1[0x6d] != param_1 + 0x70) {
    iVar2 = FUN_00401c30(((int *)param_1[0x6d])[2]);
    local_20 = local_14;
    local_14[0] = '\0';
    local_1c = 0;
    local_18 = 0x14;
    _strncpy(local_20,"tantrum",7);
    ppcVar7 = &local_20;
    puVar6 = (undefined4 *)(iVar2 + 100);
    local_1c = 7;
    local_20[7] = '\0';
    uVar3 = FUN_00401ec0(puVar6,ppcVar7);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    if ((char)uVar3 != '\0') {
      uVar3 = 0;
      fVar5 = FUN_0083f4a0(iVar2);
      FUN_009757a0((void *)param_1[0x85],(byte *)0xd19e30,(float)fVar5,uVar3);
    }
  }
  if (((((*(byte *)(param_1 + 0x9e) & 4) == 0) && ((char)param_1[0xb7] != '\0')) &&
      (*(char *)((int)param_1 + 0x2df) == '\0')) &&
     ((pfVar4 = (float *)(**(code **)(**(int **)(*(int *)(param_1[0x6d] + 8) + 300) + 0x34))
                                   (local_2c),
      SQRT((pfVar4[1] - (float)param_1[0xb4]) * (pfVar4[1] - (float)param_1[0xb4]) +
           (*pfVar4 - (float)param_1[0xb3]) * (*pfVar4 - (float)param_1[0xb3]) +
           (pfVar4[2] - (float)param_1[0xb5]) * (pfVar4[2] - (float)param_1[0xb5])) < 2.0 &&
      (iVar2 = *(int *)(*(int *)(param_1[0x6d] + 8) + 300),
      0.1 < ABS((float)param_1[0xb6] - *(float *)(iVar2 + 0xc4)))))) {
    FUN_004462a0(param_1,*(float *)(iVar2 + 0xc4));
    *(undefined1 *)((int)param_1 + 0x2df) = 1;
  }
  return;
}


//// FUNCTION FUN_00446520 @ 00446520 ////

void __fastcall FUN_00446520(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d19e48;
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_00446540 @ 00446540 ////

int * __thiscall FUN_00446540(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00446570 @ 00446570 ////

int * __thiscall FUN_00446570(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00446590 @ 00446590 ////

undefined4 * __thiscall FUN_00446590(void *this,byte param_1)

{
  FUN_00446520(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004465b0 @ 004465b0 ////

void FUN_004465b0(void)

{
  if (DAT_00f87ef4 != (undefined4 *)0x0) {
    (**(code **)*DAT_00f87ef4)(1);
  }
  (*(code *)DAT_00f87ee0[1])();
  DAT_00f87ef4 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x004465e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00f87ee0)();
  return;
}


//// FUNCTION FUN_004465f0 @ 004465f0 ////

undefined4 FUN_004465f0(void)

{
  return DAT_00f87ef4;
}


//// FUNCTION FUN_00446600 @ 00446600 ////

void FUN_00446600(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 4))();
  param_1[5] = 0;
  (**(code **)*param_1)();
  FUN_00487420(1,-1,'\0');
  iVar1 = FUN_00487530(DAT_00f87edc,'\x01');
  (**(code **)(*param_1 + 4))();
  param_1[5] = iVar1;
  (**(code **)*param_1)();
  return;
}


//// FUNCTION FUN_004466a0 @ 004466a0 ////

void __thiscall FUN_004466a0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d19e50;
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


//// FUNCTION FUN_004466f0 @ 004466f0 ////

void __fastcall FUN_004466f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d19e50;
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


//// FUNCTION FUN_00446740 @ 00446740 ////

undefined4 * __fastcall FUN_00446740(undefined4 *param_1)

{
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d19e48;
  return param_1;
}


//// FUNCTION FUN_00446760 @ 00446760 ////

void FUN_00446760(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca0fcb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x38);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0040a070(puVar1);
    *puVar1 = &PTR_FUN_00d19e48;
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_00f87ee0[1])();
  DAT_00f87ef4 = puVar1;
  (*(code *)*DAT_00f87ee0)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004467e0 @ 004467e0 ////

void FUN_004467e0(void)

{
  return;
}


//// FUNCTION FUN_00446820 @ 00446820 ////

byte * __cdecl FUN_00446820(char *param_1,undefined4 param_2,uint param_3)

{
  byte *pbVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca0fe8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  pbVar1 = Anim_LoadByName(param_1);
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return pbVar1;
}


//// FUNCTION FUN_00446880 @ 00446880 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446880(void)

{
  float fVar1;
  uint _Count;
  char *_Source;
  undefined4 *puVar2;
  uint _Size;
  void *pvVar3;
  byte *pbVar4;
  int *piVar5;
  float *pfVar6;
  char *local_104;
  undefined4 local_100;
  uint local_fc;
  char local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1016;
  local_c = ExceptionList;
  if (DAT_00f87fb8 == '\0') {
    DAT_00f87fb8 = '\x01';
    ExceptionList = &local_c;
    FUN_00559fb0(local_e4);
    local_104 = local_f8;
    local_4 = 0;
    local_f8[0] = '\0';
    local_100 = 0;
    local_fc = 0x14;
    _strncpy(local_104,"gait",4);
    local_100 = 4;
    local_104[4] = '\0';
    local_4._0_1_ = 1;
    FUN_0055be10(local_e4,&local_104,'\0');
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104);
    }
    if (DAT_00f87fc8 < 0xc) {
      if (0x14 < DAT_00f87fc8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f87fc0);
      }
      DAT_00f87fc8 = 0x20;
      DAT_00f87fc0 = _malloc(0x20);
    }
    _strncpy(DAT_00f87fc0,"A_MALE_WALK",0xb);
    DAT_00f87fc4 = 0xb;
    DAT_00f87fc0[0xb] = '\0';
    if (DAT_00f87fe8 < 0x13) {
      if (0x14 < DAT_00f87fe8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f87fe0);
      }
      DAT_00f87fe8 = 0x20;
      DAT_00f87fe0 = _malloc(0x20);
    }
    _strncpy(DAT_00f87fe0,"A_MALE_WALK_MIDDLE",0x12);
    _DAT_00f87fe4 = 0x12;
    DAT_00f87fe0[0x12] = '\0';
    if (DAT_00f88008 < 0x13) {
      if (0x14 < DAT_00f88008) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88000);
      }
      DAT_00f88008 = 0x20;
      DAT_00f88000 = _malloc(0x20);
    }
    _strncpy(DAT_00f88000,"A_MALE_WALK_MATURE",0x12);
    _DAT_00f88004 = 0x12;
    DAT_00f88000[0x12] = '\0';
    if (DAT_00f88028 < 0x10) {
      if (0x14 < DAT_00f88028) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88020);
      }
      DAT_00f88028 = 0x20;
      DAT_00f88020 = _malloc(0x20);
    }
    _strncpy(DAT_00f88020,"A_MALE_WALK_OLD",0xf);
    _DAT_00f88024 = 0xf;
    DAT_00f88020[0xf] = '\0';
    if (DAT_00f88048 < 0x10) {
      if (0x14 < DAT_00f88048) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88040);
      }
      DAT_00f88048 = 0x20;
      DAT_00f88040 = _malloc(0x20);
    }
    _strncpy(DAT_00f88040,"A_MALE_WALK_FAT",0xf);
    _DAT_00f88044 = 0xf;
    DAT_00f88040[0xf] = '\0';
    if (DAT_00f88068 < 0x17) {
      if (0x14 < DAT_00f88068) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88060);
      }
      DAT_00f88068 = 0x20;
      DAT_00f88060 = _malloc(0x20);
    }
    _strncpy(DAT_00f88060,"A_MALE_WALK_FAT_MATURE",0x16);
    _DAT_00f88064 = 0x16;
    DAT_00f88060[0x16] = '\0';
    if (DAT_00f88088 < 0x14) {
      if (0x14 < DAT_00f88088) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88080);
      }
      DAT_00f88088 = 0x20;
      DAT_00f88080 = _malloc(0x20);
    }
    _strncpy(DAT_00f88080,"A_MALE_WALK_FAT_OLD",0x13);
    _DAT_00f88084 = 0x13;
    DAT_00f88080[0x13] = '\0';
    if (DAT_00f880e8 < 0xe) {
      if (0x14 < DAT_00f880e8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f880e0);
      }
      DAT_00f880e8 = 0x20;
      DAT_00f880e0 = _malloc(0x20);
    }
    _strncpy(DAT_00f880e0,"A_MALE_STROLL",0xd);
    _DAT_00f880e4 = 0xd;
    DAT_00f880e0[0xd] = '\0';
    if (DAT_00f88108 < 0xb) {
      if (0x14 < DAT_00f88108) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88100);
      }
      DAT_00f88108 = 0x20;
      DAT_00f88100 = _malloc(0x20);
    }
    _strncpy(DAT_00f88100,"A_MALE_RUN",10);
    _DAT_00f88104 = 10;
    DAT_00f88100[10] = '\0';
    if (DAT_00f880a8 < 0xf) {
      if (0x14 < DAT_00f880a8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f880a0);
      }
      DAT_00f880a8 = 0x20;
      DAT_00f880a0 = _malloc(0x20);
    }
    _strncpy(DAT_00f880a0,"A_MALE_RUN_OLD",0xe);
    _DAT_00f880a4 = 0xe;
    DAT_00f880a0[0xe] = '\0';
    if (DAT_00f880c8 < 0x11) {
      if (0x14 < DAT_00f880c8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f880c0);
      }
      DAT_00f880c8 = 0x20;
      DAT_00f880c0 = _malloc(0x20);
    }
    _strncpy(DAT_00f880c0,"A_FEMALE_RUN_OLD",0x10);
    _DAT_00f880c4 = 0x10;
    DAT_00f880c0[0x10] = '\0';
    if (DAT_00f88128 < 0xe) {
      if (0x14 < DAT_00f88128) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88120);
      }
      DAT_00f88128 = 0x20;
      DAT_00f88120 = _malloc(0x20);
    }
    _strncpy(DAT_00f88120,"A_FEMALE_WALK",0xd);
    _DAT_00f88124 = 0xd;
    DAT_00f88120[0xd] = '\0';
    if (DAT_00f88148 < 0xf) {
      if (0x14 < DAT_00f88148) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88140);
      }
      DAT_00f88148 = 0x20;
      DAT_00f88140 = _malloc(0x20);
    }
    _strncpy(DAT_00f88140,"A_FEMALE_WALK2",0xe);
    _DAT_00f88144 = 0xe;
    DAT_00f88140[0xe] = '\0';
    if (DAT_00f88168 < 0x15) {
      DAT_00f88168 = 0x20;
      DAT_00f88160 = _malloc(0x20);
    }
    _strncpy(DAT_00f88160,"A_FEMALE_WALK_MIDDLE",0x14);
    _DAT_00f88164 = 0x14;
    DAT_00f88160[0x14] = '\0';
    if (DAT_00f88188 < 0x15) {
      DAT_00f88188 = 0x20;
      DAT_00f88180 = _malloc(0x20);
    }
    _strncpy(DAT_00f88180,"A_FEMALE_WALK_MATURE",0x14);
    _DAT_00f88184 = 0x14;
    DAT_00f88180[0x14] = '\0';
    if (DAT_00f881a8 < 0x1a) {
      if (0x14 < DAT_00f881a8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f881a0);
      }
      DAT_00f881a8 = 0x20;
      DAT_00f881a0 = _malloc(0x20);
    }
    _strncpy(DAT_00f881a0,"A_FEMALE_WALK_MORE_MATURE",0x19);
    _DAT_00f881a4 = 0x19;
    DAT_00f881a0[0x19] = '\0';
    if (DAT_00f881c8 < 0x12) {
      if (0x14 < DAT_00f881c8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f881c0);
      }
      DAT_00f881c8 = 0x20;
      DAT_00f881c0 = _malloc(0x20);
    }
    _strncpy(DAT_00f881c0,"A_FEMALE_WALK_OLD",0x11);
    _DAT_00f881c4 = 0x11;
    DAT_00f881c0[0x11] = '\0';
    if (DAT_00f881e8 < 0x12) {
      if (0x14 < DAT_00f881e8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f881e0);
      }
      DAT_00f881e8 = 0x20;
      DAT_00f881e0 = _malloc(0x20);
    }
    _strncpy(DAT_00f881e0,"A_FEMALE_WALK_FAT",0x11);
    _DAT_00f881e4 = 0x11;
    DAT_00f881e0[0x11] = '\0';
    if (DAT_00f88208 < 0x19) {
      if (0x14 < DAT_00f88208) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88200);
      }
      DAT_00f88208 = 0x20;
      DAT_00f88200 = _malloc(0x20);
    }
    _strncpy(DAT_00f88200,"A_FEMALE_WALK_FAT_MATURE",0x18);
    _DAT_00f88204 = 0x18;
    DAT_00f88200[0x18] = '\0';
    if (DAT_00f88228 < 0x16) {
      if (0x14 < DAT_00f88228) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88220);
      }
      DAT_00f88228 = 0x20;
      DAT_00f88220 = _malloc(0x20);
    }
    _strncpy(DAT_00f88220,"A_FEMALE_WALK_FAT_OLD",0x15);
    _DAT_00f88224 = 0x15;
    DAT_00f88220[0x15] = '\0';
    if (DAT_00f88248 < 0x10) {
      if (0x14 < DAT_00f88248) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88240);
      }
      DAT_00f88248 = 0x20;
      DAT_00f88240 = _malloc(0x20);
    }
    _strncpy(DAT_00f88240,"A_FEMALE_STROLL",0xf);
    _DAT_00f88244 = 0xf;
    DAT_00f88240[0xf] = '\0';
    if (DAT_00f88268 < 0xd) {
      if (0x14 < DAT_00f88268) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88260);
      }
      DAT_00f88268 = 0x20;
      DAT_00f88260 = _malloc(0x20);
    }
    _strncpy(DAT_00f88260,"A_FEMALE_RUN",0xc);
    _DAT_00f88264 = 0xc;
    DAT_00f88260[0xc] = '\0';
    if (DAT_00f88288 < 0x12) {
      if (0x14 < DAT_00f88288) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88280);
      }
      DAT_00f88288 = 0x20;
      DAT_00f88280 = _malloc(0x20);
    }
    _strncpy(DAT_00f88280,"A_MALE_BORED_WALK",0x11);
    _DAT_00f88284 = 0x11;
    DAT_00f88280[0x11] = '\0';
    if (DAT_00f882a8 < 0x14) {
      if (0x14 < DAT_00f882a8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f882a0);
      }
      DAT_00f882a8 = 0x20;
      DAT_00f882a0 = _malloc(0x20);
    }
    _strncpy(DAT_00f882a0,"A_FEMALE_BORED_WALK",0x13);
    _DAT_00f882a4 = 0x13;
    DAT_00f882a0[0x13] = '\0';
    if (DAT_00f882c8 < 0x10) {
      if (0x14 < DAT_00f882c8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f882c0);
      }
      DAT_00f882c8 = 0x20;
      DAT_00f882c0 = _malloc(0x20);
    }
    _strncpy(DAT_00f882c0,"A_MALE_SAD_WALK",0xf);
    _DAT_00f882c4 = 0xf;
    DAT_00f882c0[0xf] = '\0';
    if (DAT_00f882e8 < 0x12) {
      if (0x14 < DAT_00f882e8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f882e0);
      }
      DAT_00f882e8 = 0x20;
      DAT_00f882e0 = _malloc(0x20);
    }
    _strncpy(DAT_00f882e0,"A_FEMALE_SAD_WALK",0x11);
    _DAT_00f882e4 = 0x11;
    DAT_00f882e0[0x11] = '\0';
    if (DAT_00f88308 < 0xd) {
      if (0x14 < DAT_00f88308) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88300);
      }
      DAT_00f88308 = 0x20;
      DAT_00f88300 = _malloc(0x20);
    }
    _strncpy(DAT_00f88300,"A_HAPPY_WALK",0xc);
    _DAT_00f88304 = 0xc;
    DAT_00f88300[0xc] = '\0';
    if (DAT_00f88328 < 0x13) {
      if (0x14 < DAT_00f88328) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88320);
      }
      DAT_00f88328 = 0x20;
      DAT_00f88320 = _malloc(0x20);
    }
    _strncpy(DAT_00f88320,"A_MALE_LOWEGO_WALK",0x12);
    _DAT_00f88324 = 0x12;
    DAT_00f88320[0x12] = '\0';
    if (DAT_00f88348 < 0x15) {
      DAT_00f88348 = 0x20;
      DAT_00f88340 = _malloc(0x20);
    }
    _strncpy(DAT_00f88340,"A_FEMALE_LOWEGO_WALK",0x14);
    _DAT_00f88344 = 0x14;
    DAT_00f88340[0x14] = '\0';
    if (DAT_00f88368 < 0x14) {
      if (0x14 < DAT_00f88368) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88360);
      }
      DAT_00f88368 = 0x20;
      DAT_00f88360 = _malloc(0x20);
    }
    _strncpy(DAT_00f88360,"A_MALE_HIGHEGO_WALK",0x13);
    _DAT_00f88364 = 0x13;
    DAT_00f88360[0x13] = '\0';
    if (DAT_00f88388 < 0x16) {
      if (0x14 < DAT_00f88388) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88380);
      }
      DAT_00f88388 = 0x20;
      DAT_00f88380 = _malloc(0x20);
    }
    _strncpy(DAT_00f88380,"A_FEMALE_HIGHEGO_WALK",0x15);
    _DAT_00f88384 = 0x15;
    DAT_00f88380[0x15] = '\0';
    if (DAT_00f883a8 < 0x13) {
      if (0x14 < DAT_00f883a8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f883a0);
      }
      DAT_00f883a8 = 0x20;
      DAT_00f883a0 = _malloc(0x20);
    }
    _strncpy(DAT_00f883a0,"A_MALE_MIDEGO_WALK",0x12);
    _DAT_00f883a4 = 0x12;
    DAT_00f883a0[0x12] = '\0';
    if (DAT_00f883c8 < 0x15) {
      DAT_00f883c8 = 0x20;
      DAT_00f883c0 = _malloc(0x20);
    }
    _strncpy(DAT_00f883c0,"A_FEMALE_MIDEGO_WALK",0x14);
    _DAT_00f883c4 = 0x14;
    DAT_00f883c0[0x14] = '\0';
    if (DAT_00f883e8 < 0xd) {
      if (0x14 < DAT_00f883e8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f883e0);
      }
      DAT_00f883e8 = 0x20;
      DAT_00f883e0 = _malloc(0x20);
    }
    _strncpy(DAT_00f883e0,"A_RUNNER_RUN",0xc);
    _DAT_00f883e4 = 0xc;
    DAT_00f883e0[0xc] = '\0';
    if (DAT_00f88408 < 0xe) {
      if (0x14 < DAT_00f88408) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88400);
      }
      DAT_00f88408 = 0x20;
      DAT_00f88400 = _malloc(0x20);
    }
    _strncpy(DAT_00f88400,"A_RUNNER_RUN2",0xd);
    _DAT_00f88404 = 0xd;
    DAT_00f88400[0xd] = '\0';
    if (DAT_00f88428 < 0xe) {
      if (0x14 < DAT_00f88428) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88420);
      }
      DAT_00f88428 = 0x20;
      DAT_00f88420 = _malloc(0x20);
    }
    _strncpy(DAT_00f88420,"A_TURN_POS_10",0xd);
    _DAT_00f88424 = 0xd;
    DAT_00f88420[0xd] = '\0';
    if (DAT_00f88448 < 0xe) {
      if (0x14 < DAT_00f88448) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88440);
      }
      DAT_00f88448 = 0x20;
      DAT_00f88440 = _malloc(0x20);
    }
    _strncpy(DAT_00f88440,"A_TURN_POS_22",0xd);
    _DAT_00f88444 = 0xd;
    DAT_00f88440[0xd] = '\0';
    if (DAT_00f88468 < 0xe) {
      if (0x14 < DAT_00f88468) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88460);
      }
      DAT_00f88468 = 0x20;
      DAT_00f88460 = _malloc(0x20);
    }
    _strncpy(DAT_00f88460,"A_TURN_POS_45",0xd);
    _DAT_00f88464 = 0xd;
    DAT_00f88460[0xd] = '\0';
    if (DAT_00f88488 < 0xe) {
      if (0x14 < DAT_00f88488) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88480);
      }
      DAT_00f88488 = 0x20;
      DAT_00f88480 = _malloc(0x20);
    }
    _strncpy(DAT_00f88480,"A_TURN_NEG_10",0xd);
    _DAT_00f88484 = 0xd;
    DAT_00f88480[0xd] = '\0';
    if (DAT_00f884a8 < 0xe) {
      if (0x14 < DAT_00f884a8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f884a0);
      }
      DAT_00f884a8 = 0x20;
      DAT_00f884a0 = _malloc(0x20);
    }
    _strncpy(DAT_00f884a0,"A_TURN_NEG_22",0xd);
    _DAT_00f884a4 = 0xd;
    DAT_00f884a0[0xd] = '\0';
    if (DAT_00f884c8 < 0xe) {
      if (0x14 < DAT_00f884c8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f884c0);
      }
      DAT_00f884c8 = 0x20;
      DAT_00f884c0 = _malloc(0x20);
    }
    _strncpy(DAT_00f884c0,"A_TURN_NEG_45",0xd);
    _DAT_00f884c4 = 0xd;
    DAT_00f884c0[0xd] = '\0';
    if (DAT_00f884e8 < 7) {
      if (0x14 < DAT_00f884e8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f884e0);
      }
      DAT_00f884e8 = 0x20;
      DAT_00f884e0 = _malloc(0x20);
    }
    _strncpy(DAT_00f884e0,"A_IDLE",6);
    _DAT_00f884e4 = 6;
    DAT_00f884e0[6] = '\0';
    if (DAT_00f88508 < 0x12) {
      if (0x14 < DAT_00f88508) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88500);
      }
      DAT_00f88508 = 0x20;
      DAT_00f88500 = _malloc(0x20);
    }
    _strncpy(DAT_00f88500,"A_MALE_DRUNK_WALK",0x11);
    _DAT_00f88504 = 0x11;
    DAT_00f88500[0x11] = '\0';
    if (DAT_00f88528 < 0x14) {
      if (0x14 < DAT_00f88528) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88520);
      }
      DAT_00f88528 = 0x20;
      DAT_00f88520 = _malloc(0x20);
    }
    _strncpy(DAT_00f88520,"A_FEMALE_DRUNK_WALK",0x13);
    _DAT_00f88524 = 0x13;
    DAT_00f88520[0x13] = '\0';
    if (DAT_00f88548 < 0xe) {
      if (0x14 < DAT_00f88548) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88540);
      }
      DAT_00f88548 = 0x20;
      DAT_00f88540 = _malloc(0x20);
    }
    _strncpy(DAT_00f88540,"A_VDRUNK_WALK",0xd);
    _DAT_00f88544 = 0xd;
    DAT_00f88540[0xd] = '\0';
    if (DAT_00f88568 < 0xd) {
      if (0x14 < DAT_00f88568) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88560);
      }
      DAT_00f88568 = 0x20;
      DAT_00f88560 = _malloc(0x20);
    }
    _strncpy(DAT_00f88560,"A_WALK_THINK",0xc);
    _DAT_00f88564 = 0xc;
    DAT_00f88560[0xc] = '\0';
    if (DAT_00f88588 < 0x13) {
      if (0x14 < DAT_00f88588) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f88580);
      }
      DAT_00f88588 = 0x20;
      DAT_00f88580 = _malloc(0x20);
    }
    _strncpy(DAT_00f88580,"A_WALK_WOUNDED_BIT",0x12);
    _DAT_00f88584 = 0x12;
    DAT_00f88580[0x12] = '\0';
    if (DAT_00f885a8 < 0x13) {
      if (0x14 < DAT_00f885a8) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_00f885a0);
      }
      DAT_00f885a8 = 0x20;
      DAT_00f885a0 = _malloc(0x20);
    }
    _strncpy(DAT_00f885a0,"A_WALK_WOUNDED_LOT",0x12);
    _DAT_00f885a4 = 0x12;
    DAT_00f885a0[0x12] = '\0';
    piVar5 = (int *)&DAT_00f87fc0;
    do {
      puVar2 = FUN_005584e0(local_e4,&local_104,piVar5);
      _Count = puVar2[1];
      _Source = (char *)*puVar2;
      if ((uint)piVar5[2] <= _Count) {
        if (0x14 < (uint)piVar5[2]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar5);
        }
        _Size = _Count + 0x20 & 0xffffffe0;
        piVar5[2] = _Size;
        pvVar3 = _malloc(_Size);
        *piVar5 = (int)pvVar3;
      }
      _strncpy((char *)*piVar5,_Source,_Count);
      piVar5[1] = _Count;
      *(undefined1 *)(_Count + *piVar5) = 0;
      if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_104);
      }
      piVar5 = piVar5 + 8;
    } while ((int)piVar5 < 0xf885c0);
    pfVar6 = (float *)&DAT_00f87ef8;
    puVar2 = &DAT_00f87fc0;
    do {
      pbVar4 = Anim_LoadByName((char *)*puVar2);
      if (pbVar4 != (byte *)0x0) {
        if (pbVar4[0x33] == 0) {
          fVar1 = 0.0;
        }
        else {
          fVar1 = *(float *)(*(int *)(pbVar4 + 0x6c) + 4);
        }
        *pfVar6 = fVar1 * 0.1;
        FUN_00985de0(pbVar4);
      }
      puVar2 = puVar2 + 8;
      pfVar6 = pfVar6 + 1;
    } while ((int)puVar2 < 0xf885c0);
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00447aa0 @ 00447aa0 ////

void __cdecl FUN_00447aa0(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  char local_14 [20];
  
  pcVar1 = local_14;
  local_14[0] = '\0';
  uVar2 = 0;
  uVar3 = 0x14;
  FUN_004015d0(&stack0xffffffe0,(char *)(&DAT_00f87fc0)[param_1 * 8],(&DAT_00f87fc4)[param_1 * 8]);
  FUN_00446820(pcVar1,uVar2,uVar3);
  return;
}


//// FUNCTION FUN_00447ae0 @ 00447ae0 ////

void __cdecl FUN_00447ae0(void *param_1)

{
  void *pvVar1;
  float10 fVar2;
  float10 fVar3;
  int iVar4;
  
  fVar2 = FUN_004012c0(*(float *)((int)param_1 + 0x478) - *(float *)((int)param_1 + 0x47c));
  fVar3 = fVar2 * (float10)57.295776;
  if (fVar2 <= (float10)0.0) {
    fVar3 = fVar3 * (float10)-1.0;
    if (fVar3 < (float10)5.0) {
      return;
    }
    if ((float10)12.0 <= fVar3) {
      if ((float10)36.0 <= fVar3) {
        iVar4 = 0x28;
      }
      else {
        iVar4 = 0x27;
      }
    }
    else {
      iVar4 = 0x26;
    }
  }
  else {
    if (fVar3 < (float10)5.0) {
      return;
    }
    if ((float10)12.0 <= fVar3) {
      if ((float10)36.0 <= fVar3) {
        iVar4 = 0x25;
      }
      else {
        iVar4 = 0x24;
      }
    }
    else {
      iVar4 = 0x23;
    }
  }
  pvVar1 = (void *)FUN_00447aa0(iVar4);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  FUN_00526890(param_1,pvVar1);
  FUN_00985de0(pvVar1);
  return;
}


//// FUNCTION FUN_00447bb0 @ 00447bb0 ////

void * __thiscall FUN_00447bb0(void *this,byte param_1)

{
  FUN_00423750((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00447bd0 @ 00447bd0 ////

int * __thiscall FUN_00447bd0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00447c00 @ 00447c00 ////

void __fastcall FUN_00447c00(int param_1)

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


//// FUNCTION Game_MainLoop @ 00447c30 ////

void Game_MainLoop(byte *param_1)

{
  char cVar1;
  void *this;
  int *gameState;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca102b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0xcc);
  local_4 = 0;
  if (this == (void *)0x0) {
    gameState = (int *)0x0;
  }
  else {
    gameState = FUN_004291c0(this,param_1);
  }
  cVar1 = *(char *)((int)gameState + 6);
  local_4 = 0xffffffff;
  while (cVar1 == '\0') {
    FUN_009b3890();
    for (iVar2 = FUN_00566b10(DAT_0104cdf4); iVar2 != 0; iVar2 = iVar2 + -1) {
      Game_TickOneFrame(gameState);
    }
    FUN_00423670((int)gameState);
    if (*(char *)((int)gameState + 6) != '\0') break;
    cVar1 = FUN_005422b0();
    *(char *)((int)gameState + 6) = cVar1;
  }
  FUN_00423750((int)gameState);
                    /* WARNING: Subroutine does not return */
  _free(gameState);
}


//// FUNCTION FUN_00447cf0 @ 00447cf0 ////

uint FUN_00447cf0(void)

{
  if ((DAT_00f885dc != 0) && (DAT_00f885dc != DAT_00f885f4)) {
    return 0;
  }
  return -(uint)(DAT_00f885c4 != '\0') & DAT_00f885f4;
}


//// FUNCTION FUN_00447d20 @ 00447d20 ////

void FUN_00447d20(void)

{
  if (DAT_00f88624 != (undefined4 *)0x0) {
    (**(code **)*DAT_00f88624)(1);
  }
  (*(code *)DAT_00f88610[1])();
  DAT_00f88624 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00447d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00f88610)();
  return;
}


//// FUNCTION FUN_00447d90 @ 00447d90 ////

void FUN_00447d90(void)

{
  undefined4 *puVar1;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1053;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xd8);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00559fb0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_00f88610[1])();
  DAT_00f88624 = puVar1;
  (*(code *)*DAT_00f88610)();
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"global",6);
  uStack_28 = 6;
  pcStack_2c[6] = '\0';
  local_4 = 1;
  FUN_0055be10(DAT_00f88624,&pcStack_2c,'\0');
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00447e80 @ 00447e80 ////

void __fastcall FUN_00447e80(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d1a200;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00447ea0 @ 00447ea0 ////

void __fastcall FUN_00447ea0(int param_1)

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


//// FUNCTION FUN_00447ed0 @ 00447ed0 ////

void __fastcall FUN_00447ed0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d1a210;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00447f20 @ 00447f20 ////

void __fastcall FUN_00447f20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1a210;
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


//// FUNCTION FUN_00447f70 @ 00447f70 ////

void __fastcall FUN_00447f70(undefined4 *param_1)

{
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


//// FUNCTION FUN_00447fc0 @ 00447fc0 ////

void __thiscall FUN_00447fc0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d18c2c;
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


//// FUNCTION FUN_00448000 @ 00448000 ////

void __cdecl FUN_00448000(int *param_1)

{
  void **ppvVar1;
  char cVar2;
  int iVar3;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_00ca1068;
  ExceptionList = &pvStack_c;
  local_18 = (undefined1 *)&local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d18c2c;
  ppvVar1 = &pvStack_c;
  if (param_1 != (int *)0x0) {
    local_1c = param_1 + 6;
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
    ppvVar1 = ExceptionList;
  }
  ExceptionList = ppvVar1;
  local_4 = 0;
  local_10 = param_1;
  while (local_10 != (int *)0x0) {
    FUN_0053d440();
    FUN_005550b0();
    FUN_00554680();
    (**(code **)(*local_10 + 0x28))();
    cVar2 = (**(code **)(*DAT_0104c8f4 + 4))();
    if (cVar2 == '\0') {
      iVar3 = FUN_0071b2a0();
      (*(code *)**(undefined4 **)(iVar3 + 0x50))();
    }
    FUN_00423670(DAT_00f87b04);
    cVar2 = FUN_005422b0();
    if (cVar2 != '\0') {
      (*(code *)local_24[1])();
      local_10 = (int *)0x0;
      (*(code *)*local_24)();
    }
    FUN_009d9830(0x21);
    FUN_009b3890();
    *(uint *)(DAT_00f87b04 + 0x88) = *(uint *)(DAT_00f87b04 + 0x88) & 0xfffffffe;
  }
  FUN_00990a00();
  FUN_0053d440();
  FUN_00554680();
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00448130 @ 00448130 ////

void __fastcall FUN_00448130(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x50));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00448160 @ 00448160 ////

void FUN_00448160(void)

{
  return;
}


//// FUNCTION FUN_00448220 @ 00448220 ////

int __thiscall FUN_00448220(void *this,void *param_1,uint param_2,size_t param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  
  if ((param_3 != 0) && (uVar1 = *(uint *)((int)this + 4), param_2 < uVar1)) {
    iVar2 = *(int *)this;
    for (pcVar4 = (char *)(iVar2 + param_2); pcVar4 < (char *)(iVar2 + uVar1); pcVar4 = pcVar4 + 1)
    {
      pvVar3 = _memchr(param_1,(int)*pcVar4,param_3);
      if (pvVar3 != (void *)0x0) {
        return (int)pcVar4 - *(int *)this;
      }
    }
  }
  return -1;
}


//// FUNCTION FUN_00448290 @ 00448290 ////

void __fastcall FUN_00448290(int *param_1)

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
  puStack_8 = &LAB_00ca1088;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x50);
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
            ((char *)(-(uint)(param_1 != (int *)0x140) & (uint)param_1),param_1 + -0x50);
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


//// FUNCTION FUN_00448370 @ 00448370 ////

void __thiscall FUN_00448370(void *this,char *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00448220(this,param_1,param_2,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


//// FUNCTION FUN_004483a0 @ 004483a0 ////

void __fastcall FUN_004483a0(int param_1)

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
  puStack_8 = &LAB_00ca10b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Gear.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1d;
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
  uVar3 = FUN_0098b490("TypeString");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x1d8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Gear.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1e;
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
  uVar3 = FUN_0098b490("MeshName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x2d8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Gear.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x1c0));
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
  uVar3 = FUN_0098b490("Carrier");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x1c0));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00448680 @ 00448680 ////

undefined4 * __fastcall FUN_00448680(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1144;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008ab900(param_1);
  local_4 = 0;
  FUN_00526ab0(param_1 + 0x32);
  piVar1 = param_1 + 0xb7;
  *param_1 = &PTR_FUN_00d1a3a0;
  param_1[0x32] = &PTR_LAB_00d1a2bc;
  param_1[0x50] = &PTR_LAB_00d1a298;
  param_1[0x5a] = &PTR_FUN_00d1a280;
  param_1[0xb9] = 0;
  *piVar1 = 0;
  param_1[0xb8] = 0;
  param_1[0xbd] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  piVar2 = param_1 + 0xc0;
  *(undefined1 *)(param_1 + 0xbf) = 1;
  param_1[0xc3] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = piVar2;
  *piVar2 = (int)&PTR_FUN_00d165ac;
  param_1[0xc5] = 0;
  param_1[0xc6] = param_1 + 0xc9;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  param_1[199] = 0;
  param_1[200] = 0x14;
  local_4._0_1_ = 5;
  _eh_vector_constructor_iterator_(param_1 + 0xce,0x20,7,FUN_00401dc0,FUN_00401490);
  param_1[0x106] = param_1 + 0x109;
  *(undefined1 *)(param_1 + 0x109) = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0x14;
  local_4 = CONCAT31(local_4._1_3_,7);
  param_1[0xb9] = param_1;
  FUN_00acdb9e(0xe4fd30);
  iVar3 = FUN_0097dda0();
  param_1[0xba] = iVar3;
  if (DAT_00e4fd2d != '\0') {
    iVar3 = 0x2dc;
    pcVar6 = "PropLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe4fd30);
    FUN_0097df60(pcVar4,pcVar6,iVar3);
    DAT_00e4fd2d = '\0';
  }
  param_1[0xbd] = param_1;
  FUN_00acdb9e(0xe4fd30);
  iVar3 = FUN_0097dda0();
  param_1[0xbe] = iVar3;
  if (DAT_00e4fd2c != '\0') {
    iVar3 = 0x2ec;
    pcVar6 = "MetaLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe4fd30);
    FUN_0097df60(pcVar4,pcVar6,iVar3);
    DAT_00e4fd2c = '\0';
  }
  (**(code **)(*piVar2 + 4))();
  param_1[0xc5] = 0;
  (**(code **)*piVar2)();
  param_1[0xb8] = &DAT_00f8863c;
  *piVar1 = (int)DAT_00f8863c;
  *(int **)((int)DAT_00f8863c + 4) = piVar1;
  DAT_00f8863c = piVar1;
  puVar5 = FUN_00433eb0();
  param_1[0x79] = puVar5;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004488e0 @ 004488e0 ////

void __fastcall FUN_004488e0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca11df;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d1a3a0;
  param_1[0x32] = &PTR_LAB_00d1a2bc;
  param_1[0x50] = &PTR_LAB_00d1a298;
  param_1[0x5a] = &PTR_FUN_00d1a280;
  iVar1 = param_1[0xc5];
  local_4 = 7;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x11c) != 0)) {
    FUN_00983060(*(int *)(iVar1 + 0x11c),param_1[0x79],0);
  }
  if ((undefined4 *)param_1[0xbc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xbc] = param_1[0xbb];
  }
  if (param_1[0xbb] != 0) {
    *(undefined4 *)(param_1[0xbb] + 4) = param_1[0xbc];
  }
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  if ((undefined4 *)param_1[0xb8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb8] = param_1[0xb7];
  }
  if (param_1[0xb7] != 0) {
    *(undefined4 *)(param_1[0xb7] + 4) = param_1[0xb8];
  }
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  if (0x14 < (uint)param_1[0x108]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x106]);
  }
  local_4._0_1_ = 5;
  _eh_vector_destructor_iterator_(param_1 + 0xce,0x20,7,FUN_00401490);
  if (0x14 < (uint)param_1[200]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xc6]);
  }
  param_1[0xc0] = &PTR_FUN_00d165ac;
  if ((undefined4 *)param_1[0xc2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xc2] = param_1[0xc1];
  }
  if (param_1[0xc1] != 0) {
    *(undefined4 *)(param_1[0xc1] + 4) = param_1[0xc2];
  }
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc5] = 0;
  if ((undefined4 *)param_1[0xc2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xc2] = param_1[0xc1];
  }
  if (param_1[0xc1] != 0) {
    *(undefined4 *)(param_1[0xc1] + 4) = param_1[0xc2];
  }
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  if ((undefined4 *)param_1[0xbc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xbc] = param_1[0xbb];
  }
  if (param_1[0xbb] != 0) {
    *(undefined4 *)(param_1[0xbb] + 4) = param_1[0xbc];
  }
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  if ((undefined4 *)param_1[0xb8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb8] = param_1[0xb7];
  }
  if (param_1[0xb7] != 0) {
    *(undefined4 *)(param_1[0xb7] + 4) = param_1[0xb8];
  }
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005267f0(param_1 + 0x32);
  local_4 = 0xffffffff;
  FUN_008ab6b0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00448b10 @ 00448b10 ////

void __thiscall FUN_00448b10(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  char local_170 [4];
  undefined4 uStack_16c;
  char *local_14c;
  undefined4 local_148;
  uint local_144;
  char local_140 [23];
  undefined1 local_129;
  byte *local_128;
  undefined4 local_124;
  uint local_120;
  byte local_11c [20];
  undefined1 *local_108;
  byte *local_104 [2];
  uint uStack_fc;
  undefined4 local_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1274;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004015d0((void *)((int)this + 0x318),(char *)*param_1,param_1[1]);
  FUN_00559fb0(local_e4);
  local_14c = local_140;
  local_4 = 0;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  uStack_16c = 0x448b85;
  _strncpy(local_14c,"gear",4);
  local_148 = 4;
  local_14c[4] = '\0';
  local_4._0_1_ = 1;
  FUN_0055be10(local_e4,&local_14c,'\0');
  local_4._0_1_ = 0;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  FUN_00558a50(local_e4,param_1,(undefined4 *)0x1);
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  uStack_16c = 0x448c01;
  _strncpy(local_14c,"putdown",7);
  local_148 = 7;
  local_14c[7] = '\0';
  local_4._0_1_ = 2;
  uStack_16c = 0x448c2e;
  puVar3 = FUN_005584e0(local_e4,&local_128,&local_14c);
  FUN_004015d0((void *)((int)this + 0x338),(char *)*puVar3,puVar3[1]);
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  uStack_16c = 0x448c89;
  _strncpy(local_14c,"walk",4);
  local_148 = 4;
  local_14c[4] = '\0';
  local_4._0_1_ = 3;
  uStack_16c = 0x448cba;
  puVar3 = FUN_005584e0(local_e4,&local_128,&local_14c);
  FUN_004015d0((void *)((int)this + 0x358),(char *)*puVar3,puVar3[1]);
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  uStack_16c = 0x448d15;
  _strncpy(local_14c,"run",3);
  local_148 = 3;
  local_14c[3] = '\0';
  local_4._0_1_ = 4;
  uStack_16c = 0x448d46;
  puVar3 = FUN_005584e0(local_e4,&local_128,&local_14c);
  FUN_004015d0((void *)((int)this + 0x378),(char *)*puVar3,puVar3[1]);
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  uStack_16c = 0x448da1;
  _strncpy(local_14c,"idle",4);
  local_148 = 4;
  local_14c[4] = '\0';
  local_4._0_1_ = 5;
  uStack_16c = 0x448dd2;
  puVar3 = FUN_005584e0(local_e4,&local_128,&local_14c);
  FUN_004015d0((void *)((int)this + 0x398),(char *)*puVar3,puVar3[1]);
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  uStack_16c = 0x448e2c;
  _strncpy(local_14c,"turnpos",7);
  local_148 = 7;
  local_14c[7] = '\0';
  local_4._0_1_ = 6;
  uStack_16c = 0x448e59;
  puVar3 = FUN_005584e0(local_e4,&local_128,&local_14c);
  FUN_004015d0((void *)((int)this + 0x3b8),(char *)*puVar3,puVar3[1]);
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  uStack_16c = 0x448eb3;
  _strncpy(local_14c,"turnneg",7);
  local_148 = 7;
  local_14c[7] = '\0';
  local_4._0_1_ = 7;
  uStack_16c = 0x448ee0;
  puVar3 = FUN_005584e0(local_e4,&local_128,&local_14c);
  FUN_004015d0((void *)((int)this + 0x3d8),(char *)*puVar3,puVar3[1]);
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  uStack_16c = 0x448f3b;
  _strncpy(local_14c,"interact",8);
  local_148 = 8;
  local_14c[8] = '\0';
  local_4._0_1_ = 8;
  uStack_16c = 0x448f6c;
  puVar3 = FUN_005584e0(local_e4,&local_128,&local_14c);
  FUN_004015d0((void *)((int)this + 0x3f8),(char *)*puVar3,puVar3[1]);
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  uStack_16c = 0x448fc7;
  _strncpy(local_14c,"mesh",4);
  local_148 = 4;
  local_14c[4] = '\0';
  local_4._0_1_ = 9;
  uStack_16c = 0x448ff9;
  puVar4 = FUN_005584e0(local_e4,&local_128,&local_14c);
  puVar3 = (undefined4 *)((int)this + 0x418);
  FUN_004015d0(puVar3,(char *)*puVar4,puVar4[1]);
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  if (param_2[1] != 0) {
    FUN_004015d0(puVar3,(char *)*param_2,param_2[1]);
  }
  uStack_16c = 0x449062;
  iVar5 = FUN_00448220(puVar3,&DAT_00d1a3f0,0,1);
  if (iVar5 == -1) {
    pcVar6 = (char *)FUN_00494df0((char *)*puVar3);
    pcVar8 = pcVar6;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0((void *)((int)this + 0x418),pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  uStack_16c = 0x4490b1;
  _strncpy(local_14c,"category",8);
  local_148 = 8;
  local_14c[8] = '\0';
  local_4._0_1_ = 10;
  uStack_16c = 0x4490e3;
  FUN_005584e0(local_e4,local_104,&local_14c);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_128 = local_11c;
  local_11c[0] = 0;
  local_124 = 0;
  local_120 = 0x14;
  uStack_16c = 0x449121;
  _strncpy((char *)local_128,"essential",9);
  local_124 = 9;
  local_128[9] = 0;
  pbVar7 = local_128;
  pbVar9 = local_104[0];
  do {
    bVar2 = *pbVar9;
    bVar10 = bVar2 < *pbVar7;
    if (bVar2 != *pbVar7) {
LAB_00449165:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0044916a;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar9[1];
    bVar10 = bVar2 < pbVar7[1];
    if (bVar2 != pbVar7[1]) goto LAB_00449165;
    pbVar9 = pbVar9 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_0044916a:
  local_129 = iVar5 == 0;
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  *(uint *)((int)this + 0x438) = (uint)!(bool)local_129;
  if (*(int *)((int)this + 0x41c) != 0) {
    pbVar7 = FUN_009de1d0(*(char **)((int)this + 0x418),1);
    (**(code **)(**(int **)((int)this + 0x1e4) + 0x18))();
    if (pbVar7 != (byte *)0x0) {
      FUN_009de3b0(pbVar7);
    }
  }
  if (*(int *)((int)this + 0x3fc) != 0) {
    local_108 = &stack0xfffffe84;
    pcVar8 = local_170;
    local_170[0] = '\0';
    uVar11 = 0;
    uVar12 = 0x14;
    FUN_004015d0(&stack0xfffffe84,"propinteract",0xc);
    FUN_008b9420((int *)((int)this + 0x2ec),pcVar8,uVar11,uVar12);
  }
  if (0x14 < uStack_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104[0]);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00449250 @ 00449250 ////

undefined4 __thiscall FUN_00449250(void *this,undefined4 param_1,int *param_2,undefined4 *param_3)

{
  float10 fVar1;
  uint in_EAX;
  undefined4 uVar2;
  undefined2 extraout_var;
  float10 fVar3;
  float *unaff_retaddr;
  char **ppcVar4;
  undefined1 local_2c [12];
  char *local_20;
  undefined4 local_1c;
  uint local_18;
  char local_14 [20];
  
  if (*(int *)((int)this + 0x438) == 1) {
    local_20 = local_14;
    local_14[0] = '\0';
    local_1c = 0;
    local_18 = 0x14;
    _strncpy(local_20,"propinteract",0xc);
    ppcVar4 = &local_20;
    local_1c = 0xc;
    local_20[0xc] = '\0';
    uVar2 = FUN_00401ec0(param_3,ppcVar4);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    in_EAX = local_18;
    if ((((char)uVar2 != '\0') && (in_EAX = *(uint *)((int)this + 0x314), in_EAX == 0)) &&
       (in_EAX = 0, *(int *)((int)this + 0x3fc) != 0)) {
      (**(code **)(*param_2 + 0x34))(local_2c);
      fVar3 = (float10)FUN_00412f50();
      fVar1 = (float10)400.0;
      in_EAX = CONCAT22(extraout_var,
                        (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                        (ushort)(fVar3 == fVar1) << 0xe);
      if (fVar3 < fVar1) {
        *unaff_retaddr = (float)fVar3;
        return CONCAT31((int3)((uint)unaff_retaddr >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00449330 @ 00449330 ////

/* WARNING: Removing unreachable block (ram,0x004493db) */

undefined4 * __thiscall FUN_00449330(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  void *pvVar5;
  int *this_00;
  byte *_Dest;
  undefined4 *this_01;
  bool bVar6;
  int unaff_retaddr;
  byte local_20 [12];
  void *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1296;
  local_c = ExceptionList;
  _Dest = local_20;
  local_20[0] = 0;
  ExceptionList = &local_c;
  _strncpy((char *)_Dest,"propinteract",0xc);
                    /* WARNING: Ignoring partial resolution of indirect */
  local_14._0_1_ = 0;
  pbVar3 = *(byte **)(param_2 + 100);
  do {
    bVar2 = *pbVar3;
    bVar6 = bVar2 < *_Dest;
    if (bVar2 != *_Dest) {
LAB_004493c8:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004493cd;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar6 = bVar2 < _Dest[1];
    if (bVar2 != _Dest[1]) goto LAB_004493c8;
    pbVar3 = pbVar3 + 2;
    _Dest = _Dest + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_004493cd:
  if (iVar4 != 0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  pvVar5 = operator_new(0x2e0);
  this_01 = (undefined4 *)0x0;
  local_4 = 0;
  if (pvVar5 == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = FUN_00445f60(pvVar5,(float *)((int)this + 0x1c8),*(undefined4 *)((int)this + 0x18c));
  }
  local_4 = 0xffffffff;
  (**(code **)(*this_00 + 0xb0))((int)this + 0x3f8);
  FUN_004039a0(this_00,this);
  pvVar5 = operator_new(0x2b4);
  puStack_8 = (undefined1 *)0x1;
  if (pvVar5 != (void *)0x0) {
    this_01 = FUN_00402380(pvVar5,unaff_retaddr,this_00);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_004016f0(this_01,this);
  FUN_00401a00(this_01,param_1);
  (**(code **)(*this_00 + 0xe8))(unaff_retaddr);
  piVar1 = this_00 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*this_00)(1);
  }
  ExceptionList = local_14;
  return this_01;
}


//// FUNCTION FUN_004494e0 @ 004494e0 ////

void __fastcall FUN_004494e0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void *this;
  undefined4 *puVar5;
  undefined4 uVar6;
  void **ppvVar7;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca12b9;
  pvStack_c = ExceptionList;
  bVar2 = false;
  bVar1 = false;
  iVar4 = param_1[0x93];
  ExceptionList = &pvStack_c;
  if ((iVar4 == 0) || (ExceptionList = &pvStack_c, 7 < *(int *)(iVar4 + 0x4c4))) goto LAB_00449608;
  if (*(int *)(iVar4 + 0x814) == 0xd) {
    ExceptionList = &pvStack_c;
    *(undefined1 *)(param_1 + 0x8d) = 1;
    goto LAB_00449608;
  }
  ExceptionList = &pvStack_c;
  iVar4 = FUN_0053ae00(iVar4);
  if (iVar4 == 0) {
LAB_004495b5:
    bVar3 = false;
  }
  else {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"room_preprod_crew",0x11);
    local_48 = 0x11;
    local_4c[0x11] = '\0';
    ppvVar7 = local_2c;
    local_4 = 0;
    this = (void *)FUN_0053ae00(param_1[0x93]);
    puVar5 = FUN_0093c060(this,ppvVar7);
    bVar2 = true;
    bVar1 = true;
    uVar6 = FUN_00401ec0(puVar5,&local_4c);
    bVar3 = true;
    if ((char)uVar6 == '\0') goto LAB_004495b5;
  }
  if ((bVar1) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = 0xffffffff;
  if ((bVar2) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  *(bool *)(param_1 + 0x8d) = !bVar3;
LAB_00449608:
  local_4 = 0xffffffff;
  FUN_005268e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00449620 @ 00449620 ////

undefined4 * __thiscall FUN_00449620(void *this,byte param_1)

{
  FUN_004488e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00449640 @ 00449640 ////

undefined4 * __thiscall FUN_00449640(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1344;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008ab900(this);
  local_4 = 0;
  FUN_00526ab0((undefined4 *)((int)this + 200));
  piVar1 = (int *)((int)this + 0x2dc);
  *(undefined ***)this = &PTR_FUN_00d1a3a0;
  *(undefined4 *)((int)this + 200) = &PTR_LAB_00d1a2bc;
  *(undefined ***)((int)this + 0x140) = &PTR_LAB_00d1a298;
  *(undefined ***)((int)this + 0x168) = &PTR_FUN_00d1a280;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  piVar2 = (int *)((int)this + 0x300);
  *(undefined1 *)((int)this + 0x2fc) = 1;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(int **)((int)this + 0x30c) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d165ac;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined1 **)((int)this + 0x318) = (undefined1 *)((int)this + 0x324);
  *(undefined1 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 800) = 0x14;
  local_4._0_1_ = 5;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x338),0x20,7,FUN_00401dc0,FUN_00401490);
  *(undefined1 **)((int)this + 0x418) = (undefined1 *)((int)this + 0x424);
  *(undefined1 *)((int)this + 0x424) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined4 *)((int)this + 0x420) = 0x14;
  local_4 = CONCAT31(local_4._1_3_,7);
  *(void **)((int)this + 0x2e4) = this;
  FUN_00acdb9e(0xe4fd30);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x2e8) = iVar3;
  if (DAT_00e4fd48 != '\0') {
    iVar3 = 0x2dc;
    pcVar6 = "PropLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe4fd30);
    FUN_0097df60(pcVar4,pcVar6,iVar3);
    DAT_00e4fd48 = '\0';
  }
  *(void **)((int)this + 0x2f4) = this;
  FUN_00acdb9e(0xe4fd30);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x2f8) = iVar3;
  if (s__PAVCGear_TM___00e4fd38[0xf] != '\0') {
    iVar3 = 0x2ec;
    pcVar6 = "MetaLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe4fd30);
    FUN_0097df60(pcVar4,pcVar6,iVar3);
    s__PAVCGear_TM___00e4fd38[0xf] = '\0';
  }
  *(int ***)((int)this + 0x2e0) = &DAT_00f8863c;
  *piVar1 = (int)DAT_00f8863c;
  *(int **)((int)DAT_00f8863c + 4) = piVar1;
  DAT_00f8863c = piVar1;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0x314) = 0;
  (**(code **)*piVar2)();
  puVar5 = FUN_00433eb0();
  *(undefined4 **)((int)this + 0x1e4) = puVar5;
  FUN_00448b10(this,param_1,param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00449890 @ 00449890 ////

void FUN_00449890(void)

{
  return;
}


//// FUNCTION FUN_004498a0 @ 004498a0 ////

undefined4 * __cdecl FUN_004498a0(undefined4 *param_1,undefined4 *param_2)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca135b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x43c);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00449640(this,param_1,param_2);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_004499a0 @ 004499a0 ////

void FUN_004499a0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (DAT_00f88630 != &DAT_00f8863c) {
    do {
      piVar3 = DAT_00f88630;
      iVar2 = DAT_00f88630[2];
      piVar1 = DAT_00f88630 + 1;
      if ((int *)DAT_00f88630[1] != (int *)0x0) {
        *(int *)DAT_00f88630[1] = *DAT_00f88630;
      }
      iVar4 = *piVar3;
      if (iVar4 != 0) {
        *(int *)(iVar4 + 4) = *piVar1;
      }
      *piVar3 = 0;
      *piVar1 = 0;
      if (iVar2 != 0) {
        iVar4 = *(int *)(iVar2 + 0x110) + -1;
        *(int *)(iVar2 + 0x110) = iVar4;
        if (iVar4 == 0) {
          (*(code *)**(undefined4 **)(iVar2 + 200))(1);
        }
      }
    } while (DAT_00f88630 != &DAT_00f8863c);
  }
  return;
}


//// FUNCTION FUN_00449a10 @ 00449a10 ////

void __fastcall FUN_00449a10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1a45c;
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


//// FUNCTION FUN_00449a60 @ 00449a60 ////

undefined4 * __thiscall FUN_00449a60(void *this,byte param_1)

{
  FUN_00449a10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00449a80 @ 00449a80 ////

void __fastcall FUN_00449a80(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1a45c;
  return;
}


//// FUNCTION FUN_00449ae0 @ 00449ae0 ////

void __fastcall FUN_00449ae0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x14));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00449b20 @ 00449b20 ////

void FUN_00449b20(void)

{
  return;
}


//// FUNCTION FUN_00449b40 @ 00449b40 ////

int __fastcall FUN_00449b40(int param_1)

{
  return param_1 + 0x8c;
}


//// FUNCTION FUN_00449b50 @ 00449b50 ////

undefined4 __fastcall FUN_00449b50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}


//// FUNCTION FUN_00449b70 @ 00449b70 ////

void __thiscall FUN_00449b70(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x80);
  return;
}


//// FUNCTION FUN_00449b80 @ 00449b80 ////

float10 __fastcall FUN_00449b80(int param_1)

{
  return (float10)*(float *)(param_1 + 0x88);
}


//// FUNCTION FUN_00449b90 @ 00449b90 ////

float10 __fastcall FUN_00449b90(int param_1)

{
  return (float10)*(float *)(param_1 + 0x84);
}


//// FUNCTION FUN_00449bc0 @ 00449bc0 ////

int * __thiscall FUN_00449bc0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00449c90 @ 00449c90 ////

void __cdecl FUN_00449c90(int param_1)

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


//// FUNCTION FUN_00449cb0 @ 00449cb0 ////

void __cdecl FUN_00449cb0(int *param_1)

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


//// FUNCTION FUN_00449cf0 @ 00449cf0 ////

void __thiscall FUN_00449cf0(void *this,int *param_1)

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


//// FUNCTION FUN_00449dd0 @ 00449dd0 ////

void __fastcall FUN_00449dd0(int *param_1)

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


//// FUNCTION FUN_00449e80 @ 00449e80 ////

void __fastcall FUN_00449e80(int *param_1)

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


//// FUNCTION FUN_00449f50 @ 00449f50 ////

undefined4 * __thiscall FUN_00449f50(void *this,undefined4 *param_1)

{
  FUN_009b5030(param_1,(undefined4 *)((int)this + 0x8c));
  return param_1;
}


//// FUNCTION FUN_00449f90 @ 00449f90 ////

void __fastcall FUN_00449f90(int param_1)

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


//// FUNCTION FUN_00449fb0 @ 00449fb0 ////

void __fastcall FUN_00449fb0(int param_1)

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


//// FUNCTION FUN_00449fe0 @ 00449fe0 ////

void __fastcall FUN_00449fe0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0044a000 @ 0044a000 ////

void __thiscall FUN_0044a000(void *this,int param_1)

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


//// FUNCTION FUN_0044a080 @ 0044a080 ////

int * __fastcall FUN_0044a080(int *param_1)

{
  FUN_00449dd0(param_1);
  return param_1;
}


//// FUNCTION FUN_0044a0c0 @ 0044a0c0 ////

int * __fastcall FUN_0044a0c0(int *param_1)

{
  FUN_00449e80(param_1);
  return param_1;
}


//// FUNCTION FUN_0044a120 @ 0044a120 ////

void __fastcall FUN_0044a120(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_0044a140 @ 0044a140 ////

void __fastcall FUN_0044a140(int *param_1)

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
  puStack_8 = &LAB_00ca1398;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x14);
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
            ((char *)(-(uint)(param_1 != (int *)0x50) & (uint)param_1),param_1 + -0x14);
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


//// FUNCTION CGenre_Constructor @ 0044a210 ////

undefined4 * __fastcall CGenre_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca13c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x14);
  *param_1 = &PTR_FUN_00d1a48c;
  param_1[0x14] = &PTR_LAB_00d1a46c;
  *(undefined1 *)(param_1 + 0x1f) = 0xff;
  *(undefined1 *)((int)param_1 + 0x7d) = 0xff;
  *(undefined1 *)((int)param_1 + 0x7e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x7f) = 0xff;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x1f] = 0xffffffff;
  FUN_0043b510(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x24] = 0;
  param_1[0x23] = param_1 + 0x26;
  param_1[0x25] = 0x14;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x14;
  param_1[0x2b] = param_1 + 0x2e;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x33] = param_1 + 0x36;
  param_1[0x34] = 0;
  param_1[0x35] = 0x14;
  param_1[0x3b] = param_1 + 0x3e;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x14;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0044a320 @ 0044a320 ////

undefined4 * __thiscall FUN_0044a320(void *this,byte param_1)

{
  FUN_0044a340(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0044a340 @ 0044a340 ////

void __fastcall FUN_0044a340(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca13d8;
  local_c = ExceptionList;
  local_4 = 0;
  if (0x14 < (uint)param_1[0x3d]) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3b]);
  }
  if (0x14 < (uint)param_1[0x35]) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x33]);
  }
  if (0x14 < (uint)param_1[0x2d]) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2b]);
  }
  if (0x14 < (uint)param_1[0x25]) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x23]);
  }
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_1 + 0x14;
  }
  ExceptionList = &local_c;
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_0053d4f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0044a420 @ 0044a420 ////

void __thiscall FUN_0044a420(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d1a49c;
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


//// FUNCTION FUN_0044a470 @ 0044a470 ////

void __fastcall FUN_0044a470(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1a49c;
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


//// FUNCTION FUN_0044a4d0 @ 0044a4d0 ////

int * __fastcall FUN_0044a4d0(int *param_1)

{
  FUN_00449dd0(param_1);
  return param_1;
}


//// FUNCTION FUN_0044a4e0 @ 0044a4e0 ////

undefined4 * __thiscall FUN_0044a4e0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_0044a520 @ 0044a520 ////

int * __fastcall FUN_0044a520(int *param_1)

{
  FUN_00449e80(param_1);
  return param_1;
}


//// FUNCTION FUN_0044a580 @ 0044a580 ////

undefined4 * __thiscall FUN_0044a580(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_0044a5c0 @ 0044a5c0 ////

void * __thiscall FUN_0044a5c0(void *this,byte param_1)

{
  FUN_0044a120((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0044a5e0 @ 0044a5e0 ////

int __cdecl FUN_0044a5e0(int param_1)

{
  int *piVar1;
  int *local_4;
  
  piVar1 = DAT_00f88660;
  local_4 = (int *)*DAT_00f88660;
  if (local_4 == DAT_00f88660) {
    return 0;
  }
  do {
    if (*(int *)(local_4[0xb] + 0x78) == param_1) {
      return local_4[0xb];
    }
    FUN_00449dd0((int *)&local_4);
  } while (local_4 != piVar1);
  return 0;
}


//// FUNCTION FUN_0044a630 @ 0044a630 ////

undefined4 * __thiscall FUN_0044a630(void *this,undefined4 *param_1)

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
LAB_0044a674:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0044a679;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0044a674;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0044a679:
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


//// FUNCTION FUN_0044a6b0 @ 0044a6b0 ////

void FUN_0044a6b0(void)

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


//// FUNCTION FUN_0044a6f0 @ 0044a6f0 ////

undefined4 * __thiscall
FUN_0044a6f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_0044a790 @ 0044a790 ////

void __fastcall FUN_0044a790(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044a6b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0044a7c0 @ 0044a7c0 ////

void * FUN_0044a7c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_0044a6f0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_0044a860 @ 0044a860 ////

int __fastcall FUN_0044a860(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044a6b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0044a890 @ 0044a890 ////

void FUN_0044a890(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_0044a890(*(void **)((int)param_1 + 8));
    FUN_0044a120((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION GenreKey_ToEnum @ 0044a8d0 ////

int __cdecl GenreKey_ToEnum(undefined4 *param_1)

{
  undefined4 uVar1;
  int **ppiVar2;
  int *piVar3;
  int *local_8;
  int *local_4;
  
  local_8 = FUN_0044a630(&DAT_00f8865c,param_1);
  local_4 = DAT_00f88660;
  if (local_8 != DAT_00f88660) {
    uVar1 = FUN_00441060(param_1,local_8 + 3);
    if ((char)uVar1 == '\0') {
      ppiVar2 = &local_8;
      goto LAB_0044a916;
    }
  }
  ppiVar2 = &local_4;
LAB_0044a916:
  piVar3 = *ppiVar2;
  if ((piVar3 == local_4) && (piVar3 = (int *)*local_4, piVar3 == local_4)) {
    return 0;
  }
  return piVar3[0xb];
}


//// FUNCTION FUN_0044a940 @ 0044a940 ////

void __fastcall FUN_0044a940(int param_1)

{
  FUN_0044a890(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0044a970 @ 0044a970 ////

void __cdecl FUN_0044a970(int *param_1)

{
  int iVar1;
  char *local_2c;
  int local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca13f8;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (DAT_010583e0 == 0) {
    iVar1 = param_1[5];
    if (iVar1 == 0) {
      ExceptionList = &pvStack_c;
      _strncpy(local_20,"",0);
      local_28 = 0;
      *local_2c = '\0';
    }
    else {
      ExceptionList = &pvStack_c;
      FUN_004015d0(&local_2c,*(char **)(iVar1 + 0x8c),*(uint *)(iVar1 + 0x90));
    }
    FUN_0098be10(&local_2c);
  }
  if (DAT_010583e0 == 1) {
    SLVAR_LoadString(&local_2c);
    if (local_28 == 0) {
      (**(code **)(*param_1 + 4))();
      param_1[5] = 0;
      (**(code **)*param_1)();
    }
    else {
      iVar1 = GenreKey_ToEnum(&local_2c);
      (**(code **)(*param_1 + 4))();
      param_1[5] = iVar1;
      (**(code **)*param_1)();
    }
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0044aa80 @ 0044aa80 ////

void __thiscall FUN_0044aa80(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca1418;
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
  FUN_00449dd0((int *)&param_2);
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
      goto LAB_0044abf1;
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
      piVar2 = (int *)FUN_00449cb0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00449c90((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0044abf1:
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
            FUN_0044a000(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00449cf0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_0044a000(this,(int)piVar5);
              break;
            }
LAB_0044acb4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00449cf0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_0044acb4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_0044a000(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00449cf0(this,piVar5);
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


//// FUNCTION FUN_0044ad50 @ 0044ad50 ////

void __thiscall FUN_0044ad50(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0044a890((void *)piVar6[1]);
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
    FUN_0044aa80(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0044ae10 @ 0044ae10 ////

void __thiscall
FUN_0044ae10(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca1438;
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
  piVar3 = FUN_0044a7c0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0044af0b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0044a000(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_00449cf0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_0044af0b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00449cf0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_0044a000(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_0044afc0 @ 0044afc0 ////

void __fastcall FUN_0044afc0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  while (DAT_00f88664 != 0) {
    puVar2 = *(undefined4 **)(*DAT_00f88660 + 0x2c);
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    FUN_0044aa80(&DAT_00f8865c,&uStack_4,(int *)*DAT_00f88660);
  }
  FUN_0044c0b0();
  return;
}


//// FUNCTION FUN_0044b040 @ 0044b040 ////

void __thiscall FUN_0044b040(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_0044b0a4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0044b0a9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0044b0a4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0044b0a9:
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
      puVar5 = (undefined4 *)FUN_0044ae10(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00449e80((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_0044ae10(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_0044b190 @ 0044b190 ////

undefined4 * __thiscall FUN_0044b190(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0044ae10(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_0044ae10(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_0044ae10(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00449e80((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_0044ae10(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_0044ae10(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00449dd0((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_0044b312;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_0044ae10(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_0044ae10(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_0044b312:
  puVar4 = (undefined4 *)FUN_0044b040(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_0044b340 @ 0044b340 ////

void __fastcall FUN_0044b340(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0044ad50(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0044b370 @ 0044b370 ////

int __fastcall FUN_0044b370(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044a6b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0044b3a0 @ 0044b3a0 ////

int * __thiscall FUN_0044b3a0(void *this,undefined4 *param_1)

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
  puStack_8 = &LAB_00ca1458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_0044a630(this,param_1);
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
  piVar2 = FUN_0044b190(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_0044b470 @ 0044b470 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b470(void)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  void *pvVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  char *local_2a8;
  undefined4 local_2a4;
  uint local_2a0;
  char local_29c [20];
  char *local_288;
  undefined4 local_284;
  uint local_280;
  char local_27c [20];
  char *local_268;
  undefined4 local_264;
  uint local_260;
  char local_25c [20];
  char *local_248;
  undefined4 local_244;
  uint local_240;
  char local_23c [20];
  char *local_228;
  undefined4 local_224;
  uint local_220;
  char local_21c [20];
  char *local_208;
  undefined4 local_204;
  uint local_200;
  char local_1fc [20];
  char *local_1e8;
  undefined4 local_1e4;
  uint local_1e0;
  char local_1dc [20];
  char *local_1c8;
  undefined4 local_1c4;
  uint local_1c0;
  char local_1bc [20];
  int local_1a8;
  void *local_1a4 [2];
  uint local_19c;
  void *local_184 [2];
  uint local_17c;
  void *local_164 [2];
  uint local_15c;
  void *local_144 [2];
  uint local_13c;
  void *local_124 [2];
  uint local_11c;
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca14ec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0044c2f0();
  FUN_0044a890(*(void **)(DAT_00f88660 + 4));
  *(int *)(DAT_00f88660 + 4) = DAT_00f88660;
  DAT_00f88664 = 0;
  *(int *)DAT_00f88660 = DAT_00f88660;
  local_268 = local_25c;
  *(int *)(DAT_00f88660 + 8) = DAT_00f88660;
  local_25c[0] = '\0';
  local_264 = 0;
  local_260 = 0x14;
  _strncpy(local_268,"genre",5);
  local_264 = 5;
  local_268[5] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_268);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_260) {
                    /* WARNING: Subroutine does not return */
    _free(local_268);
  }
  cVar3 = FUN_00558bb0(local_e4,0);
  do {
    if (cVar3 == '\0') {
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      ExceptionList = pvStack_c;
      return;
    }
    cVar3 = FUN_00558bb0(local_e4,6);
    if (cVar3 != '\0') {
      puVar4 = operator_new(0x10c);
      local_4._0_1_ = 3;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = CGenre_Constructor(puVar4);
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      puVar5 = FUN_00556390(local_e4,local_104);
      puVar5 = FUN_00430770(puVar5,local_1a4,6,0xffffffff);
      uVar1 = puVar5[1];
      pcVar2 = (char *)*puVar5;
      piVar9 = puVar4 + 0x23;
      if ((uint)puVar4[0x25] <= uVar1) {
        if (0x14 < (uint)puVar4[0x25]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar9);
        }
        uVar6 = uVar1 + 0x20 & 0xffffffe0;
        puVar4[0x25] = uVar6;
        pvVar7 = _malloc(uVar6);
        *piVar9 = (int)pvVar7;
      }
      _strncpy((char *)*piVar9,pcVar2,uVar1);
      puVar4[0x24] = uVar1;
      *(undefined1 *)(uVar1 + *piVar9) = 0;
      if (0x14 < local_19c) {
                    /* WARNING: Subroutine does not return */
        _free(local_1a4[0]);
      }
      if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_104[0]);
      }
      local_1e8 = local_1dc;
      puVar4[0x1e] = DAT_00f88664 + 1;
      local_1dc[0] = '\0';
      local_1e4 = 0;
      local_1e0 = 0x14;
      _strncpy(local_1e8,"colour",6);
      local_1e4 = 6;
      local_1e8[6] = '\0';
      local_4._0_1_ = 4;
      piVar8 = FUN_005584e0(local_e4,local_144,&local_1e8);
      local_4._0_1_ = 5;
      puVar5 = (undefined4 *)FUN_00569b90(&local_1a8,piVar8);
      puVar4[0x1f] = *puVar5;
      if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
        _free(local_144[0]);
      }
      local_4._0_1_ = 2;
      if (0x14 < local_1e0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1e8);
      }
      piVar9 = FUN_0044b3a0(&DAT_00f8865c,piVar9);
      local_228 = local_21c;
      *piVar9 = (int)puVar4;
      local_21c[0] = '\0';
      local_224 = 0;
      local_220 = 0x14;
      _strncpy(local_228,"male_walk_cycle",0xf);
      local_224 = 0xf;
      local_228[0xf] = '\0';
      local_4 = CONCAT31(local_4._1_3_,6);
      puVar5 = FUN_005584e0(local_e4,local_184,&local_228);
      uVar1 = puVar5[1];
      pcVar2 = (char *)*puVar5;
      if ((uint)puVar4[0x2d] <= uVar1) {
        if (0x14 < (uint)puVar4[0x2d]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar4[0x2b]);
        }
        uVar6 = uVar1 + 0x20 & 0xffffffe0;
        puVar4[0x2d] = uVar6;
        pvVar7 = _malloc(uVar6);
        puVar4[0x2b] = pvVar7;
      }
      _strncpy((char *)puVar4[0x2b],pcVar2,uVar1);
      puVar4[0x2c] = uVar1;
      *(undefined1 *)(uVar1 + puVar4[0x2b]) = 0;
      if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
        _free(local_184[0]);
      }
      if (0x14 < local_220) {
                    /* WARNING: Subroutine does not return */
        _free(local_228);
      }
      local_208 = local_1fc;
      local_1fc[0] = '\0';
      local_204 = 0;
      local_200 = 0x14;
      _strncpy(local_208,"female_walk_cycle",0x11);
      local_204 = 0x11;
      local_208[0x11] = '\0';
      local_4 = CONCAT31(local_4._1_3_,7);
      puVar5 = FUN_005584e0(local_e4,local_164,&local_208);
      uVar1 = puVar5[1];
      pcVar2 = (char *)*puVar5;
      if ((uint)puVar4[0x35] <= uVar1) {
        if (0x14 < (uint)puVar4[0x35]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar4[0x33]);
        }
        uVar6 = uVar1 + 0x20 & 0xffffffe0;
        puVar4[0x35] = uVar6;
        pvVar7 = _malloc(uVar6);
        puVar4[0x33] = pvVar7;
      }
      _strncpy((char *)puVar4[0x33],pcVar2,uVar1);
      puVar4[0x34] = uVar1;
      *(undefined1 *)(uVar1 + puVar4[0x33]) = 0;
      if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
        _free(local_164[0]);
      }
      if (0x14 < local_200) {
                    /* WARNING: Subroutine does not return */
        _free(local_208);
      }
      local_248 = local_23c;
      local_23c[0] = '\0';
      local_244 = 0;
      local_240 = 0x14;
      _strncpy(local_248,"QueueAnim",9);
      local_244 = 9;
      local_248[9] = '\0';
      local_4 = CONCAT31(local_4._1_3_,8);
      puVar5 = FUN_005584e0(local_e4,local_124,&local_248);
      uVar1 = puVar5[1];
      pcVar2 = (char *)*puVar5;
      if ((uint)puVar4[0x3d] <= uVar1) {
        if (0x14 < (uint)puVar4[0x3d]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar4[0x3b]);
        }
        uVar6 = uVar1 + 0x20 & 0xffffffe0;
        puVar4[0x3d] = uVar6;
        pvVar7 = _malloc(uVar6);
        puVar4[0x3b] = pvVar7;
      }
      _strncpy((char *)puVar4[0x3b],pcVar2,uVar1);
      puVar4[0x3c] = uVar1;
      *(undefined1 *)(uVar1 + puVar4[0x3b]) = 0;
      if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_124[0]);
      }
      if (0x14 < local_240) {
                    /* WARNING: Subroutine does not return */
        _free(local_248);
      }
      local_2a8 = local_29c;
      local_29c[0] = '\0';
      local_2a4 = 0;
      local_2a0 = 0x14;
      _strncpy(local_2a8,"age",3);
      local_2a4 = 3;
      local_2a8[3] = '\0';
      local_4._0_1_ = 9;
      fVar11 = FUN_00558610(local_e4,&local_2a8,0.0);
      FUN_0043b700(puVar4 + 0x20,(float)fVar11);
      if (0x14 < local_2a0) {
                    /* WARNING: Subroutine does not return */
        _free(local_2a8);
      }
      local_1c8 = local_1bc;
      local_1bc[0] = '\0';
      local_1c4 = 0;
      local_1c0 = 0x14;
      _strncpy(local_1c8,"attractiveness",0xe);
      local_1c4 = 0xe;
      local_1c8[0xe] = '\0';
      local_4._0_1_ = 10;
      fVar11 = FUN_00558610(local_e4,&local_1c8,0.0);
      puVar4[0x22] = (float)fVar11;
      if (0x14 < local_1c0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1c8);
      }
      local_288 = local_27c;
      local_27c[0] = '\0';
      local_284 = 0;
      local_280 = 0x14;
      _strncpy(local_288,"physique",8);
      local_284 = 8;
      local_288[8] = '\0';
      local_4._0_1_ = 0xb;
      fVar11 = FUN_00558610(local_e4,&local_288,0.0);
      puVar4[0x21] = (float)fVar11;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0x14 < local_280) {
                    /* WARNING: Subroutine does not return */
        _free(local_288);
      }
      iVar10 = FUN_00990d30(0,DAT_00f88664);
      if (iVar10 == 0) {
        (*(code *)DAT_00f88668[1])();
        _DAT_00f8867c = puVar4;
        (*(code *)*DAT_00f88668)();
      }
      FUN_00558bb0(local_e4,5);
    }
    cVar3 = FUN_00558bb0(local_e4,2);
  } while( true );
}


//// FUNCTION FUN_0044bc50 @ 0044bc50 ////

undefined4 * __fastcall FUN_0044bc50(undefined4 *param_1)

{
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d1a510;
  param_1[0x19] = 1000;
  return param_1;
}


//// FUNCTION GenreSaturationTracker_GetInstance @ 0044bc70 ////

void GenreSaturationTracker_GetInstance(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca150b;
  local_c = ExceptionList;
  if (DAT_00f88680 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x68);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_00f88680 = (undefined4 *)0x0;
    }
    else {
      FUN_0053c420(puVar1);
      *puVar1 = &PTR_FUN_00d1a510;
      puVar1[0x19] = 1000;
      DAT_00f88680 = puVar1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0044bd40 @ 0044bd40 ////

void __cdecl FUN_0044bd40(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x1d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x1d);
  }
  return;
}


//// FUNCTION FUN_0044bd60 @ 0044bd60 ////

void __cdecl FUN_0044bd60(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x1d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x1d);
  }
  return;
}


//// FUNCTION FUN_0044bda0 @ 0044bda0 ////

void __thiscall FUN_0044bda0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x1d) == '\0') {
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


//// FUNCTION FUN_0044bee0 @ 0044bee0 ////

void __fastcall FUN_0044bee0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x1d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x1d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x1d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x1d);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x1d);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_0044bf90 @ 0044bf90 ////

void __fastcall FUN_0044bf90(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x1d) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x1d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x1d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x1d) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x1d) == '\0');
    if (*(char *)((int)piVar4 + 0x1d) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_0044c080 @ 0044c080 ////

undefined4 * __thiscall FUN_0044c080(void *this,byte param_1)

{
  thunk_FUN_0053c500(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0044c0b0 @ 0044c0b0 ////

void FUN_0044c0b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f88680;
  if (DAT_00f88680 != (undefined4 *)0x0) {
    iVar1 = DAT_00f88680[0x12];
    DAT_00f88680[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_00f88680 = (undefined4 *)0x0;
  }
  return;
}


//// FUNCTION FUN_0044c110 @ 0044c110 ////

void __thiscall FUN_0044c110(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x1d) == '\0') {
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


//// FUNCTION FUN_0044c1a0 @ 0044c1a0 ////

int * __fastcall FUN_0044c1a0(int *param_1)

{
  FUN_0044bee0(param_1);
  return param_1;
}


//// FUNCTION FUN_0044c210 @ 0044c210 ////

int * __fastcall FUN_0044c210(int *param_1)

{
  FUN_0044bf90(param_1);
  return param_1;
}


//// FUNCTION FUN_0044c220 @ 0044c220 ////

void FUN_0044c220(void *param_1)

{
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    FUN_0044c220(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0044c2f0 @ 0044c2f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044c2f0(void)

{
  undefined4 *puVar1;
  float10 fVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1543;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x68);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0053c420(puVar1);
    *puVar1 = &PTR_FUN_00d1a510;
    puVar1[0x19] = 1000;
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  DAT_00f88680 = puVar1;
  _strncpy(local_2c,"genre",5);
  local_28 = 5;
  local_2c[5] = '\0';
  local_4 = 1;
  FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"boredomboost",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4 = 2;
  fVar2 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e4fd9c = (float)fVar2;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"boredomhalflife",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4 = 3;
  fVar2 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  DAT_00e4fda0 = (float)fVar2;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0044c4c0 @ 0044c4c0 ////

int * __fastcall FUN_0044c4c0(int *param_1)

{
  FUN_0044bee0(param_1);
  return param_1;
}


//// FUNCTION FUN_0044c510 @ 0044c510 ////

int * __fastcall FUN_0044c510(int *param_1)

{
  FUN_0044bf90(param_1);
  return param_1;
}


//// FUNCTION FUN_0044c520 @ 0044c520 ////

void __fastcall FUN_0044c520(int param_1)

{
  FUN_0044c220(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0044c550 @ 0044c550 ////

undefined4 *
FUN_0044c550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca1561;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x20);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    FUN_00494f40(puVar1 + 4,param_4 + 1);
    *(undefined1 *)(puVar1 + 7) = param_5;
    *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_0044c640 @ 0044c640 ////

void __thiscall FUN_0044c640(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x1d) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x1d) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_0044c6c0 @ 0044c6c0 ////

void FUN_0044c6c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 7) = 1;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  return;
}


//// FUNCTION GenreSaturationTracker_Query @ 0044c700 ////

void GenreSaturationTracker_Query(undefined4 *param_1,float param_2)

{
  undefined4 *puVar1;
  undefined4 local_8;
  int local_4;
  
  local_8 = 0;
  param_2 = (float)FUN_0044d2c0((int)param_2);
  FUN_0044c640(&DAT_00f88684,&local_4,(uint *)&param_2);
  if (local_4 != DAT_00f88688) {
    puVar1 = (undefined4 *)FUN_004950c0((void *)(local_4 + 0x10),&param_2);
    local_8 = *puVar1;
  }
  *param_1 = local_8;
  return;
}


//// FUNCTION FUN_0044c760 @ 0044c760 ////

void __fastcall FUN_0044c760(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044c6c0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0044c790 @ 0044c790 ////

int __fastcall FUN_0044c790(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044c6c0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0044c7c0 @ 0044c7c0 ////

void __thiscall FUN_0044c7c0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca1578;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x1d) != '\0') {
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
  FUN_0044bee0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x1d) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x1d) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x1d) == '\0') {
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
      iVar1 = param_2[7];
      *(char *)(param_2 + 7) = (char)_Memory[7];
      *(char *)(_Memory + 7) = (char)iVar1;
      goto LAB_0044c931;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x1d) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x1d) == '\0') {
      piVar2 = (int *)FUN_0044bd60(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x1d) == '\0') {
      uVar3 = FUN_0044bd40((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0044c931:
  if ((char)_Memory[7] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[7] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[7] == '\0') {
            *(undefined1 *)(piVar4 + 7) = 1;
            *(undefined1 *)(piVar5 + 7) = 0;
            FUN_0044c110(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x1d) == '\0') {
            if ((*(char *)(*piVar4 + 0x1c) != '\x01') || (*(char *)(piVar4[2] + 0x1c) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x1c) = 1;
                *(undefined1 *)(piVar4 + 7) = 0;
                FUN_0044bda0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 7) = (char)piVar5[7];
              *(undefined1 *)(piVar5 + 7) = 1;
              *(undefined1 *)(piVar4[2] + 0x1c) = 1;
              FUN_0044c110(this,(int)piVar5);
              break;
            }
LAB_0044c9f4:
            *(undefined1 *)(piVar4 + 7) = 0;
          }
        }
        else {
          if ((char)piVar4[7] == '\0') {
            *(undefined1 *)(piVar4 + 7) = 1;
            *(undefined1 *)(piVar5 + 7) = 0;
            FUN_0044bda0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x1d) == '\0') {
            if ((*(char *)(piVar4[2] + 0x1c) == '\x01') && (*(char *)(*piVar4 + 0x1c) == '\x01'))
            goto LAB_0044c9f4;
            if (*(char *)(*piVar4 + 0x1c) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x1c) = 1;
              *(undefined1 *)(piVar4 + 7) = 0;
              FUN_0044c110(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 7) = (char)piVar5[7];
            *(undefined1 *)(piVar5 + 7) = 1;
            *(undefined1 *)(*piVar4 + 0x1c) = 1;
            FUN_0044bda0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 7) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0044ca80 @ 0044ca80 ////

void __thiscall FUN_0044ca80(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0044c220((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x1d) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x1d) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x1d);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x1d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x1d);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x1d);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0044c7c0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0044cb40 @ 0044cb40 ////

void __thiscall
FUN_0044cb40(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca1598;
  local_c = ExceptionList;
  if (0xffffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0044c550(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x1c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x1c) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[7] == '\0') {
LAB_0044cc3b:
        *(undefined1 *)(*piVar4 + 0x1c) = 1;
        *(undefined1 *)(piVar5 + 7) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x1c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0044c110(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x1c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
        FUN_0044bda0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[7] == '\0') goto LAB_0044cc3b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0044bda0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x1c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
      FUN_0044c110(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x1c);
  } while( true );
}


//// FUNCTION FUN_0044cdb0 @ 0044cdb0 ////

void __thiscall FUN_0044cdb0(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  bool local_4;
  
  puVar2 = param_2;
  puVar5 = *(uint **)((int)this + 4);
  local_4 = true;
  if (*(char *)((int)puVar5[1] + 0x1d) == '\0') {
    puVar3 = (uint *)puVar5[1];
    do {
      puVar5 = puVar3;
      local_4 = *param_2 < puVar5[3];
      if (local_4) {
        puVar3 = (uint *)*puVar5;
      }
      else {
        puVar3 = (uint *)puVar5[2];
      }
    } while (*(char *)((int)puVar3 + 0x1d) == '\0');
  }
  param_2 = puVar5;
  if (local_4) {
    if (puVar5 == (uint *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_0044cb40(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_0044bf90((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_0044cb40(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0044cea0 @ 0044cea0 ////

undefined4 * __thiscall FUN_0044cea0(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0044cb40(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_0044cb40(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_0044cb40(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_0044bf90((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x1d) != '\0') {
          FUN_0044cb40(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_0044cb40(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_0044bee0((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x1d) != '\0') {
          FUN_0044cb40(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_0044cb40(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_0044cdb0(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_0044d010 @ 0044d010 ////

void __fastcall FUN_0044d010(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0044ca80(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0044d040 @ 0044d040 ////

int __fastcall FUN_0044d040(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044c6c0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0044d070 @ 0044d070 ////

uint * __thiscall FUN_0044d070(void *this,uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  float *pfVar4;
  int *piVar5;
  uint *puVar6;
  float fVar7;
  undefined4 local_20;
  undefined1 local_1c [12];
  uint local_10;
  undefined1 local_c [12];
  
  puVar1 = param_1;
  puVar6 = *(uint **)((int)this + 4);
  if (*(char *)((int)puVar6[1] + 0x1d) == '\0') {
    puVar2 = (uint *)puVar6[1];
    do {
      if (puVar2[3] < *param_1) {
        puVar3 = (uint *)puVar2[2];
      }
      else {
        puVar3 = (uint *)*puVar2;
        puVar6 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x1d) == '\0');
  }
  if ((puVar6 != *(uint **)((int)this + 4)) && (puVar6[3] <= *param_1)) {
    return puVar6 + 4;
  }
  fVar7 = DAT_00e4fa4c;
  pfVar4 = (float *)FUN_0043b520(&param_1,0.1);
  pfVar4 = FUN_00495060(local_1c,0.0,*pfVar4,fVar7);
  local_10 = *puVar1;
  FUN_00494f40(local_c,pfVar4);
  piVar5 = FUN_0044cea0(this,&local_20,puVar6,&local_10);
  return (uint *)(*piVar5 + 0x10);
}


//// FUNCTION GenreSaturationTracker_Push @ 0044d120 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GenreSaturationTracker_Push(uint param_1,float param_2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float extraout_ECX;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_14;
  float local_10;
  undefined1 local_c [12];
  
  pfVar2 = (float *)FUN_0043b520(&local_14,1920.0);
  pfVar2 = (float *)FUN_0043b620(&DAT_00e4fa4c,&local_10,pfVar2);
  fVar4 = FUN_0043b710(pfVar2);
  uVar1 = param_1;
  if (fVar4 <= (float10)10.0) {
    return;
  }
  fVar4 = (fVar4 - (float10)10.0) * (float10)0.1;
  if ((float10)0.0 <= fVar4) {
    if ((float10)1.0 < fVar4) {
      fVar4 = (float10)1.0;
    }
  }
  else {
    fVar4 = (float10)0.0;
  }
  param_2 = (float)((float10)_DAT_00e4fd9c * fVar4 * (float10)param_2);
  param_1 = FUN_0044d2c0(param_1);
  FUN_0044c640(&DAT_00f88684,&local_14,&param_1);
  if (local_14 != DAT_00f88688) {
    fVar6 = extraout_ECX;
    fVar5 = DAT_00e4fa4c;
    FUN_00407070(&stack0xffffffdc,param_2);
    FUN_004950a0((void *)(local_14 + 0x10),fVar6,fVar5);
    return;
  }
  param_1 = FUN_0044d2c0(uVar1);
  pfVar2 = (float *)FUN_0043b520(&local_10,DAT_00e4fda0);
  fVar6 = *pfVar2;
  fVar5 = DAT_00e4fa4c;
  fVar7 = DAT_00e4fa4c;
  FUN_00407070(&stack0xffffffd8,param_2);
  pfVar2 = FUN_00495060(local_c,fVar5,fVar6,fVar7);
  pfVar3 = (float *)FUN_0044d070(&DAT_00f88684,&param_1);
  *pfVar3 = *pfVar2;
  pfVar3[1] = pfVar2[1];
  pfVar3[2] = pfVar2[2];
  return;
}


//// FUNCTION FUN_0044d270 @ 0044d270 ////

void __thiscall FUN_0044d270(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x38) = param_1;
  return;
}


//// FUNCTION FUN_0044d280 @ 0044d280 ////

void __thiscall FUN_0044d280(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x3c) < 3) {
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + -1;
    uVar1 = FUN_00449b50(param_1);
    *(int *)((int)this + 0x44) =
         *(int *)((int)this + 0x44) + (1 << ((char)uVar1 * '\x03' - 3U & 0x1f));
    *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) + 1;
  }
  return;
}


//// FUNCTION FUN_0044d2c0 @ 0044d2c0 ////

undefined4 __fastcall FUN_0044d2c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = FUN_00449b50(*(int *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (1 << ((char)uVar1 * '\x03' - 3U & 0x1f));
  }
  return *(undefined4 *)(param_1 + 0x44);
}


//// FUNCTION FUN_0044d2f0 @ 0044d2f0 ////

undefined4 * __fastcall FUN_0044d2f0(undefined4 *param_1)

{
  FUN_0040a070(param_1);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_00d1a550;
  param_1[0x10] = 7;
  return param_1;
}


//// FUNCTION FUN_0044d320 @ 0044d320 ////

undefined4 * __thiscall FUN_0044d320(void *this,byte param_1)

{
  thunk_FUN_00526bb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0044d370 @ 0044d370 ////

void __fastcall FUN_0044d370(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0044d3a0 @ 0044d3a0 ////

undefined4 * __fastcall FUN_0044d3a0(undefined4 *param_1)

{
  FUN_0043b510(param_1);
  return param_1;
}


//// FUNCTION FUN_0044d3b0 @ 0044d3b0 ////

void FUN_0044d3b0(void)

{
  return;
}


//// FUNCTION FUN_0044d400 @ 0044d400 ////

void __fastcall FUN_0044d400(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)param_1);
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0044d470 @ 0044d470 ////

int * __thiscall FUN_0044d470(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0044d890 @ 0044d890 ////

void __cdecl FUN_0044d890(undefined4 *param_1)

{
  FUN_0098a430(param_1,4);
  FUN_0098a430(param_1 + 1,4);
  FUN_0098a430(param_1 + 2,4);
  FUN_0098a430(param_1 + 3,4);
  FUN_0098a430(param_1 + 4,4);
  FUN_0098a430(param_1 + 7,4);
  FUN_0098a430(param_1 + 5,4);
  FUN_0098a430(param_1 + 6,4);
  return;
}


//// FUNCTION FUN_0044d8f0 @ 0044d8f0 ////

void FUN_0044d8f0(void)

{
  FUN_0098fdd0("OneYearSeries",&DAT_00f88694);
  FUN_0098fdd0("LifetimeSeries",&DAT_00f886ac);
  return;
}


//// FUNCTION FUN_0044d920 @ 0044d920 ////

void FUN_0044d920(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f886a8;
  if (DAT_00f886a8 != (undefined4 *)0x0) {
    iVar1 = DAT_00f886a8[0x12];
    DAT_00f886a8[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f88694[1])();
    DAT_00f886a8 = (undefined4 *)0x0;
    (*(code *)*DAT_00f88694)();
  }
  puVar2 = DAT_00f886c0;
  if (DAT_00f886c0 != (undefined4 *)0x0) {
    iVar1 = DAT_00f886c0[0x12];
    DAT_00f886c0[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f886ac[1])();
    DAT_00f886c0 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0044d9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_00f886ac)();
    return;
  }
  return;
}


//// FUNCTION FUN_0044dcc0 @ 0044dcc0 ////

void __fastcall FUN_0044dcc0(undefined4 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  int local_10 [3];
  
  *param_1 = DAT_00e4fa4c;
  piVar1 = (int *)GetPlayerStudio();
  plVar2 = (longlong *)(**(code **)(*piVar1 + 0x24))(local_10);
  param_1[1] = (float)*plVar2 * 1.1920929e-07;
  uStack_1c = *(uint *)(DAT_00f87ed8 + 0x160);
  iStack_18 = *(undefined4 *)(DAT_00f87ed8 + 0x164);
  FUN_00471b10((longlong *)&uStack_1c);
  param_1[2] = (float)CONCAT44(iStack_18,uStack_1c) * 1.1920929e-07;
  uStack_1c = *(uint *)(DAT_00f87ed8 + 0xe0);
  iStack_18 = *(undefined4 *)(DAT_00f87ed8 + 0xe4);
  FUN_00471b10((longlong *)&uStack_1c);
  param_1[3] = (float)CONCAT44(iStack_18,uStack_1c) * 1.1920929e-07;
  uStack_1c = *(uint *)(DAT_00f87ed8 + 0xe8);
  iStack_18 = *(undefined4 *)(DAT_00f87ed8 + 0xec);
  FUN_00471b10((longlong *)&uStack_1c);
  param_1[4] = (float)CONCAT44(iStack_18,uStack_1c) * 1.1920929e-07;
  uStack_24 = *(uint *)(DAT_00f87ed8 + 0x100);
  iStack_20 = *(int *)(DAT_00f87ed8 + 0x104);
  FUN_00471b10((longlong *)&uStack_24);
  uStack_34 = *(uint *)(DAT_00f87ed8 + 0xf0);
  iStack_30 = *(int *)(DAT_00f87ed8 + 0xf4);
  FUN_00471b10((longlong *)&uStack_34);
  uStack_2c = *(uint *)(DAT_00f87ed8 + 0xf8);
  iStack_28 = *(int *)(DAT_00f87ed8 + 0xfc);
  FUN_00471b10((longlong *)&uStack_2c);
  uStack_1c = uStack_34 + uStack_2c;
  iStack_18 = iStack_30 + iStack_28 + (uint)CARRY4(uStack_34,uStack_2c);
  FUN_00471b10((longlong *)&uStack_1c);
  iStack_14 = uStack_24 + uStack_1c;
  local_10[0] = iStack_20 + iStack_18 + (uint)CARRY4(uStack_24,uStack_1c);
  FUN_00471b10((longlong *)&iStack_14);
  param_1[7] = (float)CONCAT44(local_10[0],iStack_14) * 1.1920929e-07;
  iStack_14 = *(undefined4 *)(DAT_00f87ed8 + 0x110);
  local_10[0] = *(int *)(DAT_00f87ed8 + 0x114);
  FUN_00471b10((longlong *)&iStack_14);
  param_1[5] = (float)CONCAT44(local_10[0],iStack_14) * 1.1920929e-07;
  iStack_14 = *(undefined4 *)(DAT_00f87ed8 + 0x108);
  local_10[0] = *(int *)(DAT_00f87ed8 + 0x10c);
  FUN_00471b10((longlong *)&iStack_14);
  param_1[6] = (float)CONCAT44(local_10[0],iStack_14) * 1.1920929e-07;
  return;
}


//// FUNCTION FUN_0044dea0 @ 0044dea0 ////

void __fastcall FUN_0044dea0(int *param_1)

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
  puStack_8 = &LAB_00ca15b8;
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


//// FUNCTION FUN_0044df70 @ 0044df70 ////

void __fastcall FUN_0044df70(int *param_1)

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
  puStack_8 = &LAB_00ca15d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1);
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
  Serialization_RegisterPointerMapEntry((char *)param_1,param_1);
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


//// FUNCTION FUN_0044e030 @ 0044e030 ////

void FUN_0044e030(void)

{
  DAT_00f88690 = 0;
  FUN_0044d920();
  return;
}


//// FUNCTION FUN_0044e110 @ 0044e110 ////

void __fastcall FUN_0044e110(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d1a578;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0044e160 @ 0044e160 ////

void __fastcall FUN_0044e160(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1a578;
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


//// FUNCTION FUN_0044e1b0 @ 0044e1b0 ////

void __fastcall FUN_0044e1b0(int param_1)

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


//// FUNCTION FUN_0044e1f0 @ 0044e1f0 ////

void __fastcall FUN_0044e1f0(int param_1)

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


//// FUNCTION FUN_0044e2e0 @ 0044e2e0 ////

void FUN_0044e2e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0044e370 @ 0044e370 ////

void __fastcall FUN_0044e370(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar3 = *(int *)(param_1 + 0xac);
  while( true ) {
    if (iVar3 == 0) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0xa8);
    if (*(uint *)(param_1 + 0xa4) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(param_1 + 0xa4);
    }
    local_4 = **(undefined4 **)(*(int *)(param_1 + 0xa0) + uVar1 * 4);
    uVar2 = FUN_0043b6c0(&local_4,(float *)&stack0x00000004);
    if ((char)uVar2 == '\0') break;
    if (*(int *)(param_1 + 0xac) != 0) {
      uVar1 = *(int *)(param_1 + 0xa8) + 1;
      *(uint *)(param_1 + 0xa8) = uVar1;
      if (*(uint *)(param_1 + 0xa4) <= uVar1) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
      iVar3 = *(int *)(param_1 + 0xac) + -1;
      *(int *)(param_1 + 0xac) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
    }
    iVar3 = *(int *)(param_1 + 0xac);
  }
  return;
}


//// FUNCTION FUN_0044e400 @ 0044e400 ////

void FUN_0044e400(void)

{
  FUN_0044e370(DAT_00f886c0);
  FUN_0044e370(DAT_00f886a8);
  return;
}


//// FUNCTION FUN_0044e4a0 @ 0044e4a0 ////

undefined4 * __fastcall FUN_0044e4a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1603;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_00d1a5a8;
  param_1[0x19] = &PTR_LAB_00d1a588;
  param_1[0x23] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_0043b520(param_1 + 0x26,0.0);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0044e540 @ 0044e540 ////

undefined4 * __thiscall FUN_0044e540(void *this,byte param_1)

{
  FUN_0044e560(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0044e560 @ 0044e560 ////

void __fastcall FUN_0044e560(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca1618;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1a5a8;
  param_1[0x19] = &PTR_LAB_00d1a588;
  local_4 = 0;
  FUN_0044e1f0((int)(param_1 + 0x27));
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0044e5d0 @ 0044e5d0 ////

void FUN_0044e5d0(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1646;
  pvStack_c = ExceptionList;
  DAT_00f88690 = 1;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb0);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0044e4a0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_00f88694[1])();
  DAT_00f886a8 = puVar1;
  (*(code *)*DAT_00f88694)();
  puVar1 = DAT_00f886a8;
  *(undefined1 *)(DAT_00f886a8 + 0x25) = 1;
  puVar1[0x24] = 400;
  DAT_00f886a8[0x23] = 0x3f800000;
  puVar1 = operator_new(0xb0);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0044e4a0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_00f886ac[1])();
  DAT_00f886c0 = puVar1;
  (*(code *)*DAT_00f886ac)();
  DAT_00f886c0[0x23] = 0x41f35555;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0044e6e0 @ 0044e6e0 ////

undefined8 __fastcall FUN_0044e6e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = 0;
  if (DAT_0104c5ec != &DAT_0104c5f8) {
    uVar2 = FUN_0043b560();
    uVar3 = FUN_0043b560();
    param_2 = (undefined4)(uVar3 >> 0x20);
    iVar1 = (int)uVar3 - (int)uVar2;
  }
  return CONCAT44(param_2,iVar1);
}


//// FUNCTION FUN_0044e760 @ 0044e760 ////

void FUN_0044e760(void)

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
  puStack_8 = &LAB_00ca1658;
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


//// FUNCTION FUN_0044e7d0 @ 0044e7d0 ////

void __thiscall FUN_0044e7d0(void *this,uint param_1)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1678;
  local_c = ExceptionList;
  if (0x7ffffffU - *(int *)((int)this + 8) < param_1) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_00405d50(local_50,(undefined4 *)"list<T> too long",0x10);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddceb4);
  }
  *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  return;
}


//// FUNCTION FUN_0044e870 @ 0044e870 ////

void __thiscall FUN_0044e870(void *this,uint param_1)

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
  if (0x7ffffff - uVar1 < param_1) {
    uVar1 = FUN_0044e760();
  }
  uVar4 = uVar1 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  if ((param_1 < uVar4) && (uVar1 <= 0x7ffffff - uVar4)) {
    param_1 = uVar4;
  }
  uVar4 = *(uint *)((int)this + 0xc);
  _Dst = operator_new((uVar1 + param_1) * 4);
  iVar6 = uVar4 * 4;
  pvVar3 = (void *)(iVar6 + *(int *)((int)this + 4));
  sVar2 = ((*(int *)((int)this + 8) * 4 - (int)pvVar3) + *(int *)((int)this + 4) >> 2) * 4;
  pvVar3 = _memmove(_Dst + uVar4,pvVar3,sVar2);
  pvVar3 = (void *)((int)pvVar3 + sVar2);
  if (param_1 < uVar4) {
    _memmove(pvVar3,*(void **)((int)this + 4),((int)(param_1 * 4) >> 2) << 2);
    pvVar3 = (void *)(param_1 * 4 + *(int *)((int)this + 4));
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


//// FUNCTION FUN_0044ea00 @ 0044ea00 ////

void __thiscall FUN_0044ea00(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    FUN_0044e870(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 8);
  }
  if (*(int *)(*(int *)((int)this + 4) + uVar3 * 4) == 0) {
    pvVar1 = operator_new(0x20);
    *(void **)(*(int *)((int)this + 4) + uVar3 * 4) = pvVar1;
  }
  puVar4 = *(undefined4 **)(*(int *)((int)this + 4) + uVar3 * 4);
  if (puVar4 != (undefined4 *)0x0) {
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}


//// FUNCTION FUN_0044ea70 @ 0044ea70 ////

void __thiscall FUN_0044ea70(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)((int)this + 4);
  iVar2 = FUN_0044e2e0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  FUN_0044e7d0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


