//// FUNCTION FUN_00bf32d0 @ 00bf32d0 ////

float10 __thiscall FUN_00bf32d0(uint *param_1,int param_2)

{
  uint uVar1;
  undefined1 local_19;
  float local_18;
  float local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  undefined1 local_4;
  
  uVar1 = LHAudioParams_GetIs3D(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert(&local_19,"GetIs3D ()\n");
    DebugBreak();
  }
  local_10 = param_1[1];
  local_c = param_1[2];
  local_8 = param_1[3];
  local_4 = (undefined1)param_1[4];
  FUN_00bf24a0((void *)(param_2 + 0x6d8),&local_18,&local_10);
  return (float10)local_14;
}


//// FUNCTION FUN_00bf3340 @ 00bf3340 ////

void __thiscall FUN_00bf3340(void *this,undefined4 *param_1)

{
  uint uVar1;
  uint *extraout_ECX;
  
  uVar1 = FUN_00bf31b0(this);
  if ((char)uVar1 != '\0') {
    FUN_00c2a350(extraout_ECX + 0xe,param_1);
    return;
  }
  *extraout_ECX = *extraout_ECX | 2;
  FUN_00c2a350(extraout_ECX + 0xe,param_1);
  FUN_00c2a3b0(extraout_ECX + 0xe);
  return;
}


//// FUNCTION FUN_00bf3380 @ 00bf3380 ////

float10 __fastcall FUN_00bf3380(int param_1)

{
  return (float10)*(float *)(param_1 + 0x88) * (float10)*(float *)(param_1 + 0x80);
}


//// FUNCTION FUN_00bf3390 @ 00bf3390 ////

float10 __fastcall FUN_00bf3390(int param_1)

{
  return (float10)*(float *)(param_1 + 0x80);
}


//// FUNCTION FUN_00bf33a0 @ 00bf33a0 ////

float10 __fastcall FUN_00bf33a0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x84);
}


//// FUNCTION FUN_00bf33b0 @ 00bf33b0 ////

void __thiscall FUN_00bf33b0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x88) = param_1;
  return;
}


//// FUNCTION FUN_00bf33c0 @ 00bf33c0 ////

void __thiscall FUN_00bf33c0(void *this,int param_1)

{
  FUN_00bca020(*(int *)(*(int *)(param_1 + 0x28) + 0x44),1.0,*(uint *)((int)this + 0x9c));
  return;
}


//// FUNCTION GetField_0x9c_00bf33e0 @ 00bf33e0 ////

undefined4 __fastcall GetField_0x9c_00bf33e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}


//// FUNCTION FUN_00bf33f0 @ 00bf33f0 ////

undefined4 __thiscall FUN_00bf33f0(void *this,float param_1)

{
  float fVar1;
  undefined4 in_EAX;
  
  fVar1 = *(float *)((int)this + 0x98);
  if (fVar1 == param_1) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),
                    (ushort)(fVar1 < param_1) << 8 | (ushort)(NAN(fVar1) || NAN(param_1)) << 10 |
                    (ushort)(fVar1 == param_1) << 0xe);
  }
  *(float *)((int)this + 0x98) = param_1;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


//// FUNCTION FUN_00bf3420 @ 00bf3420 ////

undefined4 __thiscall FUN_00bf3420(void *this,float param_1)

{
  float fVar1;
  undefined4 in_EAX;
  
  fVar1 = *(float *)((int)this + 0x90);
  if (fVar1 == param_1) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),
                    (ushort)(fVar1 < param_1) << 8 | (ushort)(NAN(fVar1) || NAN(param_1)) << 10 |
                    (ushort)(fVar1 == param_1) << 0xe);
  }
  *(float *)((int)this + 0x90) = param_1;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


//// FUNCTION FUN_00bf3450 @ 00bf3450 ////

undefined4 __thiscall FUN_00bf3450(void *this,float param_1,float param_2)

{
  float fVar1;
  undefined4 in_EAX;
  
  if (*(float *)((int)this + 0x30) == param_2) {
    fVar1 = *(float *)((int)this + 0x2c);
    if (fVar1 == param_1) {
      return CONCAT22((short)((uint)in_EAX >> 0x10),
                      (ushort)(fVar1 < param_1) << 8 | (ushort)(NAN(fVar1) || NAN(param_1)) << 10 |
                      (ushort)(fVar1 == param_1) << 0xe);
    }
  }
  *(float *)((int)this + 0x2c) = param_1;
  *(float *)((int)this + 0x30) = param_2;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


//// FUNCTION FUN_00bf3490 @ 00bf3490 ////

undefined4 __thiscall FUN_00bf3490(void *this,float param_1)

{
  if (*(float *)((int)this + 0x34) == param_1) {
    return 0;
  }
  *(float *)((int)this + 0x34) = param_1;
  return 1;
}


//// FUNCTION FUN_00bf34c0 @ 00bf34c0 ////

undefined4 __thiscall FUN_00bf34c0(void *this,float *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00bf1ba0((float *)((int)this + 4),param_1);
  if ((char)uVar1 != '\0') {
    return 0;
  }
  *(float *)((int)this + 4) = *param_1;
  *(float *)((int)this + 8) = param_1[1];
  *(float *)((int)this + 0xc) = param_1[2];
  return 1;
}


//// FUNCTION FUN_00bf3500 @ 00bf3500 ////

void __thiscall FUN_00bf3500(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x34);
  return;
}


//// FUNCTION FUN_00bf3510 @ 00bf3510 ////

float10 __fastcall FUN_00bf3510(uint *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  uVar1 = LHAudioParams_GetIs3D(param_1);
  if ((char)uVar1 != '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"!GetIs3D ()\n");
    DebugBreak();
  }
  return (float10)(float)param_1[0xd];
}


//// FUNCTION FUN_00bf3540 @ 00bf3540 ////

uint * __fastcall FUN_00bf3540(uint *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  uVar1 = LHAudioParams_GetIs3D(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"GetIs3D ()\n");
    DebugBreak();
  }
  return param_1 + 1;
}


//// FUNCTION FUN_00bf35a0 @ 00bf35a0 ////

void __thiscall FUN_00bf35a0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 4);
  param_1[1] = *(undefined4 *)((int)this + 8);
  param_1[2] = *(undefined4 *)((int)this + 0xc);
  return;
}


//// FUNCTION GetField_0x10_00bf35c0 @ 00bf35c0 ////

undefined1 __fastcall GetField_0x10_00bf35c0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}


//// FUNCTION FUN_00bf35d0 @ 00bf35d0 ////

void __thiscall FUN_00bf35d0(void *this,int param_1)

{
  uint uVar1;
  float *pfVar2;
  float10 fVar3;
  undefined1 local_1d;
  float local_1c [3];
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  char local_4;
  
  uVar1 = LHAudioParams_GetIs3D(this);
  if ((char)uVar1 == '\0') {
    LH_Assert(&local_1d,"GetIs3D ()\n");
    DebugBreak();
  }
  local_4 = *(char *)((int)this + 0x10);
  local_10 = *(float *)((int)this + 0x14);
  local_c = *(undefined4 *)((int)this + 0x18);
  local_8 = *(undefined4 *)((int)this + 0x1c);
  if (local_4 == '\0') {
    FUN_00bf1c90(local_1c,&local_10,(float *)(param_1 + 0x38));
    pfVar2 = local_1c;
  }
  else {
    pfVar2 = &local_10;
  }
  fVar3 = Math_Vector3Length(pfVar2);
  FUN_00c2cc90((int *)((int)this + 0x20),(float)fVar3);
  return;
}


//// FUNCTION FUN_00bf3660 @ 00bf3660 ////

void __thiscall FUN_00bf3660(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  void *this_00;
  float10 fVar4;
  float10 extraout_ST0;
  float10 fVar5;
  
  fVar1 = *(float *)((int)this + 0x90);
  fVar2 = *(float *)((int)this + 0x8c);
  fVar4 = (float10)FUN_00bf33c0(this,param_1);
  fVar4 = fVar4 * (float10)(fVar1 * fVar2);
  if ((float10)0.0 < fVar4) {
    uVar3 = LHAudioParams_GetIs3D(this);
    fVar5 = extraout_ST0;
    if ((char)uVar3 != '\0') {
      fVar5 = (float10)FUN_00bf35d0(this_00,param_1);
      fVar5 = fVar5 * (float10)(float)fVar4;
    }
    if ((float10)0.0 < fVar5) {
      uVar3 = FUN_00bf31b0(this);
      if ((char)uVar3 != '\0') {
        FUN_00c2a3e0((float *)((int)this + 0x38));
      }
    }
  }
  return;
}


//// FUNCTION FUN_00bf36e0 @ 00bf36e0 ////

undefined4 * __fastcall FUN_00bf36e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00c2cc40(param_1 + 8);
  param_1[0xd] = 0;
  FUN_00c2a440(param_1 + 0xe);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x22] = 0x3f800000;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0x3f800000;
  param_1[0x26] = 0x3f800000;
  return param_1;
}


//// FUNCTION FUN_00bf3760 @ 00bf3760 ////

undefined4 __thiscall FUN_00bf3760(void *this,int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  undefined2 extraout_var;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  local_24 = 1.0;
  uVar2 = LHAudioParams_GetIs3D(this);
  if ((char)uVar2 != '\0') {
    local_20 = *(undefined4 *)((int)this + 4);
    local_1c = *(undefined4 *)((int)this + 8);
    local_18 = *(undefined4 *)((int)this + 0xc);
    local_14 = *(undefined1 *)((int)this + 0x10);
    FUN_00bf2520((void *)(param_1 + 0x6d8),&local_10,&local_20);
    *(undefined4 *)((int)this + 0x14) = local_10;
    *(undefined4 *)((int)this + 0x18) = local_c;
    *(undefined4 *)((int)this + 0x1c) = local_8;
    local_24 = local_4;
  }
  uVar2 = FUN_00bf31b0(this);
  bVar3 = (char)uVar2 != '\0';
  if (bVar3) {
    FUN_00c2a470((void *)((int)this + 0x38),param_2);
  }
  fVar4 = (float10)FUN_00bf3660(this,param_1);
  fVar1 = *(float *)((int)this + 0x80);
  *(float *)((int)this + 0x80) = (float)(fVar4 * (float10)local_24);
  fVar5 = (float10)FUN_00bf3230(this,param_1);
  fVar6 = (float10)*(float *)((int)this + 0x84);
  *(float *)((int)this + 0x84) = (float)fVar5;
  return CONCAT31((int3)(CONCAT22(extraout_var,
                                  (ushort)(fVar5 < fVar6) << 8 |
                                  (ushort)(NAN(fVar5) || NAN(fVar6)) << 10 |
                                  (ushort)(fVar5 == fVar6) << 0xe) >> 8),
                  fVar5 != fVar6 || (fVar4 * (float10)local_24 != (float10)fVar1 || bVar3));
}


//// FUNCTION FUN_00bf3890 @ 00bf3890 ////

void __fastcall FUN_00bf3890(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x68) + 0x1c))();
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}


//// FUNCTION FUN_00bf38b0 @ 00bf38b0 ////

undefined4 __fastcall FUN_00bf38b0(int *param_1,int *param_2)

{
  uint uVar1;
  int unaff_ESI;
  int unaff_EDI;
  undefined1 local_4 [4];
  
  uVar1 = (**(code **)(*param_1 + 0xc))(local_4);
  if ((char)uVar1 != '\0') {
    uVar1 = (**(code **)*param_1)(&stack0xfffffff4);
    if ((char)uVar1 != '\0') {
      *param_2 = unaff_EDI * unaff_ESI * 2;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00bf3900 @ 00bf3900 ////

undefined4 __thiscall FUN_00bf3900(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 0x58) = param_1[1];
  *(undefined4 *)((int)this + 0x5c) = *param_1;
  *(undefined4 *)((int)this + 0x70) = 0;
  uVar1 = (**(code **)(**(int **)((int)this + 0x68) + 0x14))();
  *(undefined4 *)((int)this + 0x74) = uVar1;
  uVar1 = param_1[2];
  *(undefined4 *)((int)this + 0x60) = uVar1;
  *(undefined4 *)((int)this + 100) = param_1[2];
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION GetField_0x74_00bf3940 @ 00bf3940 ////

undefined4 __fastcall GetField_0x74_00bf3940(int param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}


//// FUNCTION FUN_00bf3950 @ 00bf3950 ////

void __thiscall FUN_00bf3950(void *this,int param_1)

{
  FUN_00c2b150((void *)(param_1 + 0x194),*(int *)((int)this + 0x6c));
  return;
}


//// FUNCTION FUN_00bf3970 @ 00bf3970 ////

bool __thiscall FUN_00bf3970(void *this,uint param_1)

{
  return (bool)('\x01' - (*(uint *)((int)this + 0x7c) < param_1));
}


//// FUNCTION FUN_00bf3990 @ 00bf3990 ////

undefined4 * __fastcall FUN_00bf3990(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01cce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  RedBlackTree_Node_Ctor(param_1);
  local_4 = 0;
  RedBlackTree_Node_Ctor(param_1 + 5);
  local_4._0_1_ = 1;
  RedBlackTree_Node_Ctor(param_1 + 10);
  local_4 = CONCAT31(local_4._1_3_,2);
  RedBlackTree_Node_Ctor(param_1 + 0xf);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00bf3a20 @ 00bf3a20 ////

void __thiscall FUN_00bf3a20(void *this,undefined4 param_1)

{
  undefined4 uStack_4;
  
  if (*(int *)((int)this + 0x80) != 0) {
    uStack_4 = this;
    LH_Assert((void *)((int)&uStack_4 + 3),"Allocator == NULL\n");
    DebugBreak();
    *(undefined4 *)((int)this + 0x80) = param_1;
    return;
  }
  *(undefined4 *)((int)this + 0x80) = param_1;
  return;
}


//// FUNCTION FUN_00bf3a60 @ 00bf3a60 ////

int __fastcall FUN_00bf3a60(int param_1)

{
  return param_1 + 0x78;
}


//// FUNCTION FUN_00bf3a70 @ 00bf3a70 ////

int __fastcall FUN_00bf3a70(int param_1)

{
  return param_1 + 0x7c;
}


//// FUNCTION FUN_00bf3a80 @ 00bf3a80 ////

int __fastcall FUN_00bf3a80(int param_1)

{
  return param_1 + 0x68;
}


//// FUNCTION GetField_0x68_00bf3a90 @ 00bf3a90 ////

undefined4 __fastcall GetField_0x68_00bf3a90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}


//// FUNCTION Dtor_00bf3aa0 @ 00bf3aa0 ////

void __fastcall Dtor_00bf3aa0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d01cf6;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  RedBlackTree_Node_Dtor(param_1 + 0xf);
  local_4._0_1_ = 1;
  RedBlackTree_Node_Dtor(param_1 + 10);
  local_4 = (uint)local_4._1_3_ << 8;
  RedBlackTree_Node_Dtor(param_1 + 5);
  local_4 = 0xffffffff;
  RedBlackTree_Node_Dtor(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf3b10 @ 00bf3b10 ////

int __thiscall FUN_00bf3b10(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bf3950(this,param_1);
  return iVar1 + *(int *)((int)this + 0x70);
}


//// FUNCTION FUN_00bf3b30 @ 00bf3b30 ////

undefined4 __fastcall FUN_00bf3b30(int param_1)

{
  int iVar1;
  int *this;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  void *this_00;
  undefined4 *unaff_retaddr;
  void *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_00d01d10;
  local_c = ExceptionList;
  uVar3 = 0;
  if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    this = (int *)(**(code **)**(undefined4 **)(param_1 + 0x54))
                            (*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x58));
    iVar2 = *(int *)(param_1 + 0x6c);
    this_00 = (void *)(iStack_4 + 0x194);
    local_c = (void *)0x0;
    FUN_00c2b190(this_00,iVar2);
    iVar2 = FUN_00c2b150(this_00,iVar2);
    if (iVar2 == 0) {
      LH_Assert(&iStack_4,"Memory != NULL\n");
      DebugBreak();
    }
    iVar1 = *(int *)(param_1 + 0x70);
    local_c = (void *)CONCAT31(local_c._1_3_,1);
    if ((LPCRITICAL_SECTION)*unaff_retaddr != (LPCRITICAL_SECTION)0x0) {
      Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)*unaff_retaddr);
    }
    (**(code **)*this)(iVar1 + iVar2,*(undefined4 *)(param_1 + 0x74));
    if ((LPCRITICAL_SECTION)*puStack_8 != (LPCRITICAL_SECTION)0x0) {
      Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)*puStack_8);
    }
    if (iVar2 != 0) {
      FUN_00c2b1b0(this,unaff_EBP);
    }
    uVar3 = (**(code **)(*this + 4))();
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00bf3c30 @ 00bf3c30 ////

void __thiscall
FUN_00bf3c30(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x50) = 1;
  *(int *)((int)this + 0x68) = param_2;
  FUN_00be8790(param_2);
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x6c) = param_3;
  *(undefined4 *)((int)this + 0x7c) = param_4;
  FUN_00bcfac0((void *)(param_1 + 0x188),(int *)(param_1 + 0x184),(int)this);
  FUN_00c2b190((void *)(param_1 + 0x194),*(int *)((int)this + 0x6c));
  return;
}


//// FUNCTION FUN_00bf3c90 @ 00bf3c90 ////

void __thiscall FUN_00bf3c90(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x50) == 1) {
    piVar1 = (int *)(param_1 + 0x184);
  }
  else {
    if (*(int *)((int)this + 0x50) != 3) goto LAB_00bf3cd3;
    FUN_00bcff70((void *)(param_1 + 0x170),(int *)(param_1 + 0x16c),(int)this);
    piVar1 = (int *)(param_1 + 0x160);
  }
  FUN_00bcff70(piVar1 + 1,piVar1,(int)this);
  *(undefined4 *)((int)this + 0x50) = 0;
LAB_00bf3cd3:
  FUN_00c2b460((void *)(param_1 + 0x194),*(int *)((int)this + 0x6c));
  *(undefined4 *)((int)this + 0x6c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int **)((int)this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x68) + 0x1c))();
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  return;
}


//// FUNCTION FUN_00bf3d10 @ 00bf3d10 ////

void __thiscall FUN_00bf3d10(void *this,int param_1,int param_2)

{
  if (*(int *)((int)this + 0x50) == 2) {
    FUN_00bcff70((void *)(param_1 + 0x17c),(int *)(param_1 + 0x178),(int)this);
  }
  else if (*(int *)((int)this + 0x50) == 3) {
    FUN_00bcff70((void *)(param_1 + 0x170),(int *)(param_1 + 0x16c),(int)this);
    FUN_00c2b190((void *)(param_1 + 0x194),*(int *)((int)this + 0x6c));
  }
  *(int *)((int)this + 0x7c) = *(int *)((int)this + 0x7c) + param_2;
  FUN_00bcfac0((void *)(param_1 + 0x17c),(int *)(param_1 + 0x178),(int)this);
  *(undefined4 *)((int)this + 0x50) = 2;
  return;
}


//// FUNCTION FUN_00bf3d80 @ 00bf3d80 ////

void __thiscall FUN_00bf3d80(void *this,int param_1,int param_2)

{
  int iVar1;
  
  FUN_00bcff70((void *)(param_1 + 0x17c),(int *)(param_1 + 0x178),(int)this);
  iVar1 = *(int *)((int)this + 0x7c) - param_2;
  *(int *)((int)this + 0x7c) = iVar1;
  if (iVar1 != 0) {
    FUN_00bcfac0((void *)(param_1 + 0x17c),(int *)(param_1 + 0x178),(int)this);
    *(undefined4 *)((int)this + 0x50) = 2;
    return;
  }
  FUN_00c2b1b0((void *)(param_1 + 0x194),*(int *)((int)this + 0x6c));
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 400);
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  FUN_00bcfac0((void *)(param_1 + 0x170),(int *)(param_1 + 0x16c),(int)this);
  *(undefined4 *)((int)this + 0x50) = 3;
  return;
}


//// FUNCTION FUN_00bf3e00 @ 00bf3e00 ////

uint __thiscall FUN_00bf3e00(void *this,int param_1,undefined4 *param_2)

{
  void *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iStack_c4;
  int local_c0;
  void *local_bc;
  int local_b8;
  undefined **appuStack_b4 [2];
  void *local_ac;
  undefined1 local_a5;
  int aiStack_a4 [4];
  int aiStack_94 [2];
  undefined4 uStack_8c;
  undefined4 auStack_88 [13];
  undefined4 uStack_54;
  undefined4 uStack_50;
  short sStack_3c;
  ushort uStack_3a;
  undefined4 uStack_38;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01d5c;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)((int)this + 0x6c);
  this_00 = (void *)(param_1 + 0x194);
  ExceptionList = &pvStack_c;
  local_c0 = iVar2;
  local_bc = this_00;
  local_ac = this_00;
  FUN_00c2b190(this_00,iVar2);
  iVar2 = FUN_00c2b150(this_00,iVar2);
  local_b8 = iVar2;
  if (iVar2 == 0) {
    LH_Assert(&local_a5,"Memory != NULL\n");
    DebugBreak();
  }
  local_4 = 0;
  uVar3 = (**(code **)(**(int **)((int)this + 0x68) + 0x14))();
  Ctor_vt00d9f574_00bda1d0(aiStack_a4,iVar2,uVar3);
  local_4._0_1_ = 1;
  FUN_00bd58a0(auStack_88);
  local_4._0_1_ = 2;
  uVar3 = FUN_00bd5db0(auStack_88,aiStack_a4);
  if ((char)uVar3 == '\0') goto LAB_00bf3fb4;
  *(uint *)((int)this + 0x5c) = (uint)uStack_3a;
  *(undefined4 *)((int)this + 0x58) = uStack_38;
  piVar4 = (int *)std__String__Constructor(appuStack_b4,0xd9f634);
  local_4._0_1_ = 3;
  iVar5 = FUN_00bd5960(auStack_88,piVar4);
  local_4._0_1_ = 2;
  appuStack_b4[0] = &PTR_LAB_00d9d9b4;
  if (iVar5 == 0) {
    *(undefined4 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 100) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)((int)this + 100) = *(undefined4 *)(iVar5 + 0xc);
  }
  uVar6 = FUN_00bd57f0(auStack_88,aiStack_a4);
  if ((char)uVar6 == '\0') {
    if (sStack_3c == 0x50) {
      piVar4 = (int *)CCodecName_MPEG2LayerII_Constructor(*(void **)(param_1 + 0x28));
LAB_00bf3fa4:
      if (piVar4 == (int *)0x0) goto LAB_00bf3fa8;
    }
    else {
      if (sStack_3c == 0x69) {
        piVar4 = (int *)CCodecName_XBoxADPCM_Constructor(*(void **)(param_1 + 0x28));
        goto LAB_00bf3fa4;
      }
LAB_00bf3fa8:
      piVar4 = (int *)CCodecName_WindowsACM_Constructor(*(void **)(param_1 + 0x28));
      if (piVar4 == (int *)0x0) {
LAB_00bf3fb4:
        local_4._0_1_ = 1;
        FUN_00bd5a40(auStack_88);
        local_4 = (uint)local_4._1_3_ << 8;
        uVar6 = Dtor_00bda170(aiStack_a4);
        local_4 = 0xffffffff;
        if (iVar2 != 0) {
          uVar6 = FUN_00c2b1b0(local_bc,local_c0);
        }
        ExceptionList = pvStack_c;
        return uVar6 & 0xffffff00;
      }
    }
    appuStack_b4[0] = (undefined **)(**(code **)(*piVar4 + 0xc))(aiStack_a4);
    local_4._0_1_ = 4;
    if (appuStack_b4[0] != (undefined **)0x0) {
      piVar4 = (int *)PKCAutoDeleteMe_Get_00be85f0((int *)appuStack_b4);
      uVar3 = FUN_00bf38b0(piVar4,&iStack_c4);
      if (((char)uVar3 != '\0') &&
         (iVar2 = FUN_00bef610((void *)(param_1 + 0x5c),param_1,iStack_c4,*(int *)((int)this + 0x7c)
                              ), -1 < iVar2)) {
        FUN_00bf42e0(aiStack_94,local_ac,iVar2);
        local_4 = CONCAT31(local_4._1_3_,5);
        if ((LPCRITICAL_SECTION)*param_2 != (LPCRITICAL_SECTION)0x0) {
          Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)*param_2);
        }
        cVar1 = (**(code **)(*appuStack_b4[0] + 0x10))(uStack_8c,iStack_c4,&iStack_c4);
        if (cVar1 != '\0') {
          if ((LPCRITICAL_SECTION)*param_2 != (LPCRITICAL_SECTION)0x0) {
            Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)*param_2);
          }
          FUN_00bf4330(&local_c0);
          FUN_00bf4330(aiStack_94);
          FUN_00c2b460(local_ac,*(int *)((int)this + 0x6c));
          *(int *)((int)this + 0x6c) = iVar2;
          *(undefined4 *)((int)this + 0x70) = 0;
          *(int *)((int)this + 0x74) = iStack_c4;
          local_4._0_1_ = 4;
          FUN_00bf4370(aiStack_94);
          local_4._0_1_ = 2;
          FUN_00bbc8e0((int *)appuStack_b4);
          local_4._0_1_ = 1;
          FUN_00bd5a40(auStack_88);
          local_4 = (uint)local_4._1_3_ << 8;
          Dtor_00bda170(aiStack_a4);
          local_4 = 0xffffffff;
          uVar3 = FUN_00bf4370(&local_c0);
          goto LAB_00bf419f;
        }
        FUN_00bf4330(aiStack_94);
        FUN_00c2b460(local_ac,iVar2);
        if ((LPCRITICAL_SECTION)*param_2 != (LPCRITICAL_SECTION)0x0) {
          Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)*param_2);
        }
        local_4._0_1_ = 4;
        FUN_00bf4370(aiStack_94);
      }
      local_4._0_1_ = 2;
      FUN_00bbc8e0((int *)appuStack_b4);
    }
    local_4._0_1_ = 1;
    FUN_00bd5a40(auStack_88);
    local_4 = (uint)local_4._1_3_ << 8;
    Dtor_00bda170(aiStack_a4);
    local_4 = 0xffffffff;
    uVar6 = FUN_00bf4370(&local_c0);
    uVar6 = uVar6 & 0xffffff00;
  }
  else {
    *(undefined4 *)((int)this + 0x70) = uStack_54;
    *(undefined4 *)((int)this + 0x74) = uStack_50;
    local_4._0_1_ = 1;
    FUN_00bd5a40(auStack_88);
    local_4 = (uint)local_4._1_3_ << 8;
    uVar3 = Dtor_00bda170(aiStack_a4);
    local_4 = 0xffffffff;
    if (iVar2 != 0) {
      uVar3 = FUN_00c2b1b0(local_bc,local_c0);
    }
LAB_00bf419f:
    uVar6 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  ExceptionList = pvStack_c;
  return uVar6;
}


//// FUNCTION FUN_00bf41c0 @ 00bf41c0 ////

undefined4 __thiscall FUN_00bf41c0(void *this,int param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  uint3 extraout_var;
  undefined4 uVar2;
  undefined1 local_10 [16];
  
  FUN_00c2b1b0((void *)(param_1 + 0x194),*(int *)((int)this + 0x6c));
  *(undefined4 *)((int)this + 0x7c) = 0;
  if ((*(int **)((int)this + 0x68) == (int *)0x0) || (param_3 == '\0')) {
    return (uint)extraout_var << 8;
  }
  cVar1 = (**(code **)(**(int **)((int)this + 0x68) + 0x10))(local_10);
  if (cVar1 == '\0') {
    uVar2 = FUN_00bf3e00(this,param_1,(undefined4 *)param_1);
  }
  else {
    uVar2 = FUN_00bf3900(this,(undefined4 *)&stack0xffffffec);
  }
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  FUN_00bf3b30((int)this);
  FUN_00bcff70((void *)(param_1 + 0x188),(int *)(param_1 + 0x184),(int)this);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 400);
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  FUN_00bcfac0((void *)(param_1 + 0x170),(int *)(param_1 + 0x16c),(int)this);
  uVar2 = FUN_00bcfac0((void *)(param_1 + 0x164),(int *)(param_1 + 0x160),(int)this);
  *(undefined4 *)((int)this + 0x50) = 3;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00bf42a0 @ 00bf42a0 ////

void __fastcall FUN_00bf42a0(int *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[0x20] == 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Allocator != NULL\n");
    DebugBreak();
  }
  PKAllocatorsLinkTime_Free_00bf4590((void *)param_1[0x20],param_1);
  return;
}


//// FUNCTION FUN_00bf42e0 @ 00bf42e0 ////

int * __thiscall FUN_00bf42e0(void *this,void *param_1,int param_2)

{
  int iVar1;
  
  *(int *)this = param_2;
  *(void **)((int)this + 4) = param_1;
  FUN_00c2b190(param_1,param_2);
  iVar1 = FUN_00c2b150(*(void **)((int)this + 4),*(int *)this);
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 == 0) {
    LH_Assert(&param_2,"Memory != NULL\n");
    DebugBreak();
  }
  return this;
}


//// FUNCTION FUN_00bf4330 @ 00bf4330 ////

void __fastcall FUN_00bf4330(int *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] == 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Memory != NULL\n");
    DebugBreak();
  }
  FUN_00c2b1b0((void *)param_1[1],*param_1);
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00bf4370 @ 00bf4370 ////

void __fastcall FUN_00bf4370(int *param_1)

{
  if (param_1[2] != 0) {
    FUN_00c2b1b0((void *)param_1[1],*param_1);
    param_1[2] = 0;
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00bf43b0 @ 00bf43b0 ////

int * __thiscall ScalarDeletingDtor_00bf43b0(void *this,byte param_1)

{
  Dtor_00bf3aa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bf4450 @ 00bf4450 ////

void __fastcall FUN_00bf4450(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bf4570 @ 00bf4570 ////

void __fastcall FUN_00bf4570(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
    *param_1 = 0;
  }
  return;
}


//// FUNCTION PKAllocatorsLinkTime_Free_00bf4590 @ 00bf4590 ////

void __thiscall PKAllocatorsLinkTime_Free_00bf4590(void *this,int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01d7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 == (int *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKAllocatorsLinkTime.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x28);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  Dtor_00bf3aa0(param_1);
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)((int)this + 0x14));
  PKAllocatorsCPooledMemory_Free(this,param_1);
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)((int)this + 0x14));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf46b0 @ 00bf46b0 ////

void __thiscall FUN_00bf46b0(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) | 4;
    return;
  }
  *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) & 0xfffffffb;
  return;
}


//// FUNCTION FUN_00bf46d0 @ 00bf46d0 ////

void __thiscall FUN_00bf46d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x40) = param_1;
  return;
}


//// FUNCTION Ctor_vt00da2168_00bf46e0 @ 00bf46e0 ////

undefined4 * __fastcall Ctor_vt00da2168_00bf46e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01db1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da2168;
  RedBlackTree_Node_Ctor(param_1 + 1);
  local_4 = 0;
  RedBlackTree_Node_Ctor(param_1 + 6);
  local_4._0_1_ = 1;
  RedBlackTree_Node_Ctor(param_1 + 0xb);
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x10] = 0;
  FUN_00bed050(param_1 + 0x11);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION Dtor_00bf4760 @ 00bf4760 ////

void __fastcall Dtor_00bf4760(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d01ddc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da2168;
  local_4 = 2;
  FUN_00becf90();
  local_4._0_1_ = 1;
  RedBlackTree_Node_Dtor(param_1 + 0xb);
  local_4 = (uint)local_4._1_3_ << 8;
  RedBlackTree_Node_Dtor(param_1 + 6);
  local_4 = 0xffffffff;
  RedBlackTree_Node_Dtor(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf47d0 @ 00bf47d0 ////

void __thiscall FUN_00bf47d0(void *this,int param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = this;
  if ((*(byte *)((int)this + 0x54) & 2) != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"!(EventFlags & E_EVENT_FLAG_IN_ID_LIST )\n");
    DebugBreak();
  }
  FUN_00bcfac0((void *)(param_1 + 0xcc),(int *)(param_1 + 200),(int)this);
  *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) | 2;
  return;
}


//// FUNCTION FUN_00bf4810 @ 00bf4810 ////

void __thiscall FUN_00bf4810(void *this,int param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = this;
  if ((*(byte *)((int)this + 0x54) & 2) == 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"EventFlags & E_EVENT_FLAG_IN_ID_LIST\n");
    DebugBreak();
  }
  FUN_00bcff70((void *)(param_1 + 0xcc),(int *)(param_1 + 200),(int)this);
  *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) & 0xfffffffd;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  return;
}


//// FUNCTION FUN_00bf4860 @ 00bf4860 ////

void __thiscall FUN_00bf4860(void *this,int param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = this;
  if ((*(byte *)((int)this + 0x54) & 1) != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"!(EventFlags & E_EVENT_FLAG_IN_BEHAVIOUR_LIST )\n");
    DebugBreak();
  }
  FUN_00bcfac0((void *)(param_1 + 0xe4),(int *)(param_1 + 0xe0),(int)this);
  FUN_00bcfac0((void *)(param_1 + 0xd8),(int *)(param_1 + 0xd4),(int)this);
  *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) | 1;
  return;
}


//// FUNCTION FUN_00bf48c0 @ 00bf48c0 ////

void __thiscall FUN_00bf48c0(void *this,int param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = this;
  if ((*(byte *)((int)this + 0x54) & 1) == 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"EventFlags & E_EVENT_FLAG_IN_BEHAVIOUR_LIST\n");
    DebugBreak();
  }
  FUN_00bcff70((void *)(param_1 + 0xd8),(int *)(param_1 + 0xd4),(int)this);
  FUN_00bcff70((void *)(param_1 + 0xe4),(int *)(param_1 + 0xe0),(int)this);
  *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) & 0xfffffffe;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bf4990 @ 00bf4990 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf4990(void *this,byte param_1)

{
  Dtor_00bf4760(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bf4a70 @ 00bf4a70 ////

void __thiscall FUN_00bf4a70(void *this,int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(float *)((int)this + 0xf8) < 0.0 == (*(float *)((int)this + 0xf8) == 0.0)) {
    fVar1 = *(float *)((int)this + 0xf8) - 1000.0 / *(float *)(param_1[10] + 0x84);
    *(float *)((int)this + 0xf8) = fVar1;
    if ((fVar1 < 0.0 != (fVar1 == 0.0)) && (*(int **)((int)this + 0xf0) != (int *)0x0)) {
      *(undefined4 *)((int)this + 0xd0) = 0;
      *(undefined2 *)((int)this + 0xcc) = 0;
      *(undefined4 *)((int)this + 0xa8) = 0x45;
      puVar3 = FUN_00bc42c0(param_1,*(int **)((int)this + 0xf0),(undefined4 *)((int)this + 0x74),
                            (undefined4 *)0x0);
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)((int)this + 0xf4) = puVar3[0x10];
        return;
      }
      *(undefined4 *)((int)this + 0xf4) = 0xffffffff;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0xb4))(*(undefined4 *)((int)this + 0xf4));
    if (iVar2 < 0) {
      *(undefined4 *)((int)this + 0xf4) = 0xffffffff;
      *(undefined1 *)((int)this + 0xfc) = 1;
      return;
    }
  }
  return;
}


//// FUNCTION Dtor_00bf4b30 @ 00bf4b30 ////

void __fastcall Dtor_00bf4b30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d01df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da2290;
  local_4 = 0;
  RedBlackTree_Node_Dtor(param_1 + 0x18);
  local_4 = 0xffffffff;
  Dtor_00bf4760(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf4b90 @ 00bf4b90 ////

void __thiscall FUN_00bf4b90(void *this,int *param_1)

{
  if (*(int *)((int)this + 0xf4) < 0) {
    *(undefined4 *)((int)this + 0xf0) = 0;
    *(undefined1 *)((int)this + 0xfc) = 1;
    return;
  }
  (**(code **)(*param_1 + 0x88))(*(int *)((int)this + 0xf4));
  *(undefined1 *)((int)this + 0xfc) = 1;
  return;
}


//// FUNCTION Ctor_vt00da2290_00bf4f10 @ 00bf4f10 ////

undefined4 * __fastcall Ctor_vt00da2290_00bf4f10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01e15;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da2168_00bf46e0(param_1);
  local_4 = 0;
  *param_1 = &PTR_LAB_00da2290;
  RedBlackTree_Node_Ctor(param_1 + 0x18);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bc7600(param_1 + 0x1d);
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x3d] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bf4ff0 @ 00bf4ff0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf4ff0(void *this,byte param_1)

{
  Dtor_00bf4b30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bf50a0 @ 00bf50a0 ////

void __fastcall Dtor_00bf50a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da2308;
  RedBlackTree_Node_Dtor(param_1 + 7);
  return;
}


//// FUNCTION FUN_00bf50b0 @ 00bf50b0 ////

void __thiscall FUN_00bf50b0(void *this,float param_1)

{
  float10 fVar1;
  undefined1 auStack_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00d01e28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  fVar1 = (float10)FUN_00bc3700((int)param_1);
  param_1 = (float)fVar1;
  if (*(char *)(*(int *)((int)this + 4) + 0x9c) == '\0') {
    param_1 = 0.0;
  }
  FUN_00bc1470(auStack_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  uStack_4 = 0;
  (**(code **)(**(int **)((int)this + 8) + 0x24))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bf5150 @ 00bf5150 ////

void __thiscall FUN_00bf5150(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01e3a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  piVar1 = (int *)(**(code **)(**(int **)((int)this + 8) + 0x10))();
  (**(code **)(*piVar1 + 4))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bf51c0 @ 00bf51c0 ////

void __thiscall FUN_00bf51c0(void *this,undefined4 param_1)

{
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01e4c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  (**(code **)(**(int **)((int)this + 8) + 0x18))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bf5230 @ 00bf5230 ////

void __thiscall FUN_00bf5230(void *this,undefined4 param_1)

{
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01e5e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  (**(code **)(**(int **)((int)this + 8) + 0x1c))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bf52a0 @ 00bf52a0 ////

void __thiscall FUN_00bf52a0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01e70;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  piVar1 = (int *)(**(code **)(**(int **)((int)this + 8) + 0xc))();
  (**(code **)(*piVar1 + 4))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bf53d0 @ 00bf53d0 ////

void __fastcall FUN_00bf53d0(int param_1)

{
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01e94;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  (**(code **)(**(int **)(param_1 + 8) + 0x2c))();
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bf54a0 @ 00bf54a0 ////

void __fastcall FUN_00bf54a0(int param_1)

{
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01eb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  (**(code **)(**(int **)(param_1 + 8) + 0x30))();
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bf5500 @ 00bf5500 ////

void __thiscall FUN_00bf5500(void *this,undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01eca;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  cVar1 = (**(code **)(**(int **)((int)this + 8) + 0x28))();
  if (cVar1 != (char)param_1) {
    if ((char)param_1 != '\0') {
      piVar2 = (int *)(**(code **)(**(int **)((int)this + 8) + 4))();
      fVar3 = (float10)(**(code **)(*piVar2 + 4))((int)this + 0x14);
      *(float *)((int)this + 0x10) = (float)fVar3;
    }
    (**(code **)(**(int **)((int)this + 8) + 0x20))(param_1);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bf5590 @ 00bf5590 ////

undefined1 __fastcall FUN_00bf5590(int param_1)

{
  undefined1 uVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01edc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x14))();
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return uVar1;
}


//// FUNCTION FUN_00bf55f0 @ 00bf55f0 ////

void __thiscall FUN_00bf55f0(void *this,int param_1)

{
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01eee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  (**(code **)(**(int **)((int)this + 8) + 0x38))();
  *(undefined4 *)((int)this + 8) = 0;
  FUN_00bef7a0((void *)(param_1 + 0x5c),(int)this);
  FUN_00befc10((void *)(param_1 + 0x5c),this);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bf5670 @ 00bf5670 ////

void __thiscall FUN_00bf5670(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01f00;
  pvStack_c = ExceptionList;
  this_00 = (void *)(param_1 + 0x5c);
  ExceptionList = &pvStack_c;
  FUN_00bef7c0(this_00,(int)this);
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  iVar1 = **(int **)((int)this + 8);
  local_4 = 0;
  uVar3 = FUN_00acd42c();
  (**(code **)(iVar1 + 0x34))((int)uVar3);
  *(undefined4 *)((int)this + 4) = 0;
  cVar2 = (**(code **)(**(int **)((int)this + 8) + 0x14))();
  if (cVar2 == '\0') {
    FUN_00bef780(this_00,(int)this);
  }
  else {
    (**(code **)(**(int **)((int)this + 8) + 0x38))();
    *(undefined4 *)((int)this + 8) = 0;
    FUN_00befc10(this_00,this);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION Ctor_vt00da2308_00bf5730 @ 00bf5730 ////

undefined4 * __fastcall Ctor_vt00da2308_00bf5730(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da2308;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  RedBlackTree_Node_Ctor(param_1 + 7);
  return param_1;
}


//// FUNCTION FUN_00bf5750 @ 00bf5750 ////

void __thiscall
FUN_00bf5750(void *this,int param_1,char *param_2,int param_3,float *param_4,undefined4 param_5,
            void *param_6)

{
  float fVar1;
  void *this_00;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  ulonglong uVar5;
  undefined1 auStack_60 [8];
  float local_58;
  float local_54;
  undefined4 uStack_50;
  char cStack_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  float local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00d01f12;
  pvStack_c = ExceptionList;
  local_58 = *param_4;
  local_54 = param_4[1];
  fVar1 = param_4[2];
  if ((((uint)fVar1 & 6) != 0) || ((1.0 <= local_58 && (local_54 == 0.0)))) {
    local_58 = 1.0;
    local_54 = 0.0;
  }
  ExceptionList = &pvStack_c;
  *(float *)((int)this + 0x10) = local_58;
  *(float *)((int)this + 0x14) = local_54;
  *(int *)((int)this + 4) = param_3;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_3 + 0x98);
  this_00 = *(void **)(param_3 + 0x184);
  local_30 = 0;
  local_2c = 0;
  local_14 = 1.0;
  local_10 = local_10 & 0xffff0000;
  uVar5 = FUN_00acd42c();
  local_24 = (undefined4)uVar5;
  uVar5 = FUN_00acd42c();
  local_20 = (undefined4)uVar5;
  local_28 = 0;
  local_18 = param_6;
  local_1c = param_5;
  if (*(char *)(param_3 + 0x9c) == '\0') {
    local_14 = 0.0;
  }
  else {
    fVar4 = (float10)FUN_00bc3700(param_1);
    local_14 = (float)fVar4;
  }
  iVar2 = param_1;
  local_2c = *(undefined4 *)((int)this_00 + 0x5c);
  local_30 = *(undefined4 *)((int)this_00 + 0x58);
  local_10._0_2_ = CONCAT11('\x01' - ((SUB41(fVar1,0) & 1) != 1),(undefined1)local_10);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  uStack_38 = 0;
  fStack_34 = 0.0;
  local_48 = FUN_00bf3b10(this_00,param_1);
  local_44 = GetField_0x74_00bf3940((int)this_00);
  fStack_34 = local_54;
  param_3 = GetField_0x74_00bf3940((int)this_00);
  uVar5 = FUN_00acd42c();
  uStack_38 = (undefined4)
              ((uVar5 & 0xffffffff) / (ulonglong)(uint)(*(int *)((int)this_00 + 0x5c) << 1));
  local_40 = *(undefined4 *)((int)this_00 + 0x60);
  local_3c = *(undefined4 *)((int)this_00 + 100);
  FUN_00bc1470(auStack_60,(LPCRITICAL_SECTION)&DAT_010ced14);
  uStack_4 = 0;
  if (*param_2 == '\0') {
    param_1 = *(int *)(param_2 + 0x20);
    uVar3 = (**(code **)(**(int **)(*(int *)(iVar2 + 0x5ec) + 0xc) + 0x10))
                      (&local_30,&local_48,&param_1);
  }
  else {
    local_58 = *(float *)(param_2 + 4);
    local_54 = *(float *)(param_2 + 8);
    uStack_50 = *(undefined4 *)(param_2 + 0xc);
    cStack_4c = param_2[1];
    uVar3 = (**(code **)(**(int **)(*(int *)(iVar2 + 0x5ec) + 0xc) + 0xc))
                      (&local_30,&local_48,&local_58);
  }
  *(undefined4 *)((int)this + 8) = uVar3;
  FUN_00bcfac0((void *)(iVar2 + 0x120),(int *)(iVar2 + 0x11c),(int)this);
  local_10 = 0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffff94);
  ExceptionList = local_18;
  return;
}


//// FUNCTION FUN_00bf5a40 @ 00bf5a40 ////

byte __fastcall FUN_00bf5a40(int param_1)

{
  return *(byte *)(param_1 + 0x58) & 1;
}


//// FUNCTION FUN_00bf5a50 @ 00bf5a50 ////

byte __fastcall FUN_00bf5a50(int param_1)

{
  return *(byte *)(param_1 + 0x58) >> 1 & 1;
}


//// FUNCTION FUN_00bf5a60 @ 00bf5a60 ////

uint __fastcall FUN_00bf5a60(int param_1)

{
  return (*(byte *)(param_1 + 0x58) & 4) >> 2;
}


//// FUNCTION FUN_00bf5a70 @ 00bf5a70 ////

void __thiscall FUN_00bf5a70(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  FUN_00bddfd0((void *)((int)this + 0xc),param_2);
  return;
}


//// FUNCTION FUN_00bf5a90 @ 00bf5a90 ////

uint __thiscall FUN_00bf5a90(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  uVar2 = GetField_8_00bdde50((int)this + 0xc);
  return uVar2 | param_1 & ~uVar1 | *(uint *)((int)this + 4);
}


//// FUNCTION FUN_00bf5ac0 @ 00bf5ac0 ////

void __thiscall FUN_00bf5ac0(void *this,undefined4 param_1,undefined2 param_2)

{
  *(undefined4 *)((int)this + 8) = param_1;
  FUN_00bddfe0((void *)((int)this + 0xc),param_2);
  return;
}


//// FUNCTION FUN_00bf5ae0 @ 00bf5ae0 ////

void __thiscall FUN_00bf5ae0(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 | *(uint *)((int)this + 4);
  uVar1 = GetField_8_00bdde50((int)this + 0xc);
  FUN_00bf5a70(this,uVar2,uVar1 & *(uint *)((int)this + 4) | uVar2 & param_2);
  return;
}


//// FUNCTION FUN_00bf5b20 @ 00bf5b20 ////

void __thiscall FUN_00bf5b20(void *this,uint param_1,ushort param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = param_1 | *(uint *)((int)this + 8);
  uVar1 = GetField_4_00bdde60((int)this + 0xc);
  FUN_00bf5ac0(this,uVar2,uVar1 & (ushort)*(undefined4 *)((int)this + 8) | (ushort)uVar2 & param_2);
  return;
}


//// FUNCTION FUN_00bf5b60 @ 00bf5b60 ////

void __thiscall FUN_00bf5b60(void *this,void *param_1,uint *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01f28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(uint *)((int)this + 0x70) = param_2[2];
  *(uint *)((int)this + 0x74) = param_2[3];
  uVar2 = std__String__Constructor(&local_18,param_2[4]);
  local_4 = 0;
  uVar2 = FUN_00bba600(param_1,uVar2);
  *(undefined4 *)((int)this + 0x78) = uVar2;
  *(uint *)((int)this + 0x34) = *param_2;
  *(uint *)((int)this + 0x38) = param_2[1];
  *(uint *)((int)this + 0x3c) = param_2[5];
  *(uint *)((int)this + 0x40) = param_2[6];
  *(char *)((int)this + 0x44) = (char)param_2[7];
  *(undefined1 *)((int)this + 0x45) = *(undefined1 *)((int)param_2 + 0x1d);
  *(uint *)((int)this + 0x48) = param_2[8];
  *(uint *)((int)this + 0x4c) = param_2[9];
  *(uint *)((int)this + 0x50) = param_2[10];
  *(uint *)((int)this + 0x54) = param_2[0xb];
  uVar1 = *(undefined2 *)((int)param_2 + 0x32);
  local_18 = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 0x58) = uVar1;
  local_14 = 0;
  local_10 = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  local_4 = 0xffffffff;
  if ((param_2[0xc] & 1) != 0) {
    FUN_00bf2bb0(this);
  }
  if ((param_2[0xc] & 2) != 0) {
    FUN_00bf2bd0(this);
  }
  if ((param_2[0xc] & 4) != 0) {
    FUN_00bf2c70(this);
  }
  if ((param_2[0xc] & 8) != 0) {
    FUN_00bf2c90(this);
  }
  if ((*(byte *)((int)param_2 + 0x31) & 8) != 0) {
    FUN_00bf2cf0(this,(short)param_2[0x17]);
  }
  if ((*(byte *)((int)param_2 + 0x31) & 4) != 0) {
    FUN_00bf2cd0(this,(short)param_2[0x16]);
  }
  if ((param_2[0xc] & 0x10) != 0) {
    FUN_00bf2cb0(this,(short)param_2[0x18]);
  }
  if ((param_2[0xc] & 0x20) != 0) {
    FUN_00bf2c30(this,(short)param_2[0x19]);
  }
  if ((param_2[0xc] & 0x40) != 0) {
    FUN_00bf2d90(this,(short)param_2[0x1c]);
  }
  if ((char)param_2[0xc] < '\0') {
    FUN_00bf2c50(this,(char)param_2[0x1d]);
  }
  if ((*(byte *)((int)param_2 + 0x31) & 1) != 0) {
    FUN_00bf2bf0(this);
  }
  if ((*(byte *)((int)param_2 + 0x31) & 2) != 0) {
    FUN_00bf2c10(this);
  }
  if ((*(byte *)((int)param_2 + 0x31) & 0x10) != 0) {
    FUN_00bf2db0(this,(char)param_2[0x1f],param_2[0x20],param_2[0x21],param_2[0x22]);
  }
  FUN_00bf5a70(this,param_2[0xd],param_2[0x1a]);
  FUN_00bf5ac0(this,param_2[0xe],(short)param_2[0x1b]);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00da2330_00bf60d0 @ 00bf60d0 ////

undefined4 * __fastcall Ctor_vt00da2330_00bf60d0(undefined4 *param_1)

{
  Ctor_vt00da2168_00bf46e0(param_1);
  *param_1 = &PTR_LAB_00da2330;
  param_1[0x18] = 0;
  return param_1;
}


//// FUNCTION Dtor_00bf60f0 @ 00bf60f0 ////

void __fastcall Dtor_00bf60f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da2330;
  Dtor_00bf4760(param_1);
  return;
}


//// FUNCTION FUN_00bf6100 @ 00bf6100 ////

void __thiscall FUN_00bf6100(void *this,int param_1)

{
  *(void **)(param_1 + 0xa0) = this;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)((int)this + 0x60);
  *(int *)((int)this + 0x60) = param_1;
  return;
}


//// FUNCTION FUN_00bf6120 @ 00bf6120 ////

void __thiscall FUN_00bf6120(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x60);
  if (iVar1 == param_2) {
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_2 + 0xa4);
  }
  else {
    iVar2 = *(int *)(iVar1 + 0xa4);
    while (iVar2 != param_2) {
      iVar1 = *(int *)(iVar1 + 0xa4);
      iVar2 = *(int *)(iVar1 + 0xa4);
    }
    *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  }
  *(undefined4 *)(param_2 + 0xa4) = 0;
  *(undefined4 *)(param_2 + 0xa0) = 0;
  if (*(int *)((int)this + 0x60) == 0) {
    FUN_00bf4810(this,param_1);
    FUN_00befc20((void *)(param_1 + 0x5c),this);
  }
  return;
}


//// FUNCTION FUN_00bf6190 @ 00bf6190 ////

void __thiscall FUN_00bf6190(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_00bf46d0(this,param_2);
  FUN_00bf47d0(this,param_1);
  FUN_00bf6100(this,param_3);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bf61e0 @ 00bf61e0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf61e0(void *this,byte param_1)

{
  Dtor_00bf60f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bf62d0 @ 00bf62d0 ////

void __thiscall FUN_00bf62d0(void *this,float param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)fcos((float10)param_1);
  fVar3 = (float10)fsin((float10)param_1);
  fVar1 = *(float *)((int)this + 4);
  *(float *)((int)this + 4) =
       (float)(fVar2 * (float10)*(float *)((int)this + 4) +
              fVar3 * (float10)*(float *)((int)this + 8));
  *(float *)((int)this + 8) =
       (float)(fVar2 * (float10)*(float *)((int)this + 8) - fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x10) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x10) +
              fVar3 * (float10)*(float *)((int)this + 0x14));
  *(float *)((int)this + 0x14) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x14) - fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x1c);
  *(float *)((int)this + 0x1c) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x1c) +
              fVar3 * (float10)*(float *)((int)this + 0x20));
  *(float *)((int)this + 0x20) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x20) - fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x28) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x28) +
              fVar3 * (float10)*(float *)((int)this + 0x2c));
  *(float *)((int)this + 0x2c) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x2c) -
              (float10)(float)(fVar3 * (float10)fVar1));
  return;
}


//// FUNCTION FUN_00bf6360 @ 00bf6360 ////

void __thiscall FUN_00bf6360(void *this,float param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)fcos((float10)param_1);
  fVar3 = (float10)fsin((float10)param_1);
  fVar1 = *(float *)this;
  *(float *)this =
       (float)(fVar2 * (float10)*(float *)this - fVar3 * (float10)*(float *)((int)this + 8));
  *(float *)((int)this + 8) =
       (float)(fVar2 * (float10)*(float *)((int)this + 8) + fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0xc);
  *(float *)((int)this + 0xc) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0xc) -
              fVar3 * (float10)*(float *)((int)this + 0x14));
  *(float *)((int)this + 0x14) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x14) + fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x18) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x18) -
              fVar3 * (float10)*(float *)((int)this + 0x20));
  *(float *)((int)this + 0x20) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x20) + fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x24) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x24) -
              fVar3 * (float10)*(float *)((int)this + 0x2c));
  *(float *)((int)this + 0x2c) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x2c) +
              (float10)(float)(fVar3 * (float10)fVar1));
  return;
}


//// FUNCTION FUN_00bf6480 @ 00bf6480 ////

float10 FUN_00bf6480(float param_1,float param_2)

{
  float10 fVar1;
  
  if ((param_2 <= param_1) && (-param_2 < param_1 != (-param_2 == param_1))) {
    fVar1 = (float10)fpatan((float10)param_2 / (float10)param_1,(float10)1);
    return fVar1;
  }
  if ((param_1 <= param_2) && (-param_1 < param_2 != (-param_1 == param_2))) {
    fVar1 = (float10)fpatan((float10)param_1 / (float10)param_2,(float10)1);
    return (float10)1.5707964 - fVar1;
  }
  if ((param_1 <= -param_2) && (param_1 < param_2)) {
    fVar1 = (float10)fpatan((float10)param_2 / (float10)param_1,(float10)1);
    if (0.0 <= param_2) {
      return fVar1 + (float10)3.1415927;
    }
    return fVar1 - (float10)3.1415927;
  }
  fVar1 = (float10)fpatan((float10)param_1 / (float10)param_2,(float10)1);
  return (float10)-1.5707964 - fVar1;
}


//// FUNCTION FUN_00bf65e0 @ 00bf65e0 ////

void __thiscall FUN_00bf65e0(void *this,float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  float local_30 [6];
  float local_18;
  float local_14;
  float local_10;
  
  pfVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *(float *)this;
    this = (float *)((int)this + 4);
    pfVar2 = pfVar2 + 1;
  }
  fVar3 = FUN_00bf6480(local_10,-local_18);
  *param_1 = (float)fVar3;
  FUN_00bf6360(local_30,(float)-fVar3);
  fVar3 = FUN_00bf6480(local_10,local_14);
  *param_2 = (float)fVar3;
  FUN_00bf62d0(local_30,(float)-fVar3);
  fVar3 = FUN_00bf6480(local_30[0],-local_30[1]);
  *param_3 = (float)fVar3;
  return;
}


//// FUNCTION FUN_00bf6770 @ 00bf6770 ////

void __fastcall FUN_00bf6770(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *param_1;
  fVar5 = param_1[2];
  fVar2 = param_1[1];
  fVar3 = param_1[3];
  fVar6 = param_1[4];
  fVar4 = param_1[6];
  fVar7 = param_1[5];
  fVar8 = param_1[7];
  fVar9 = param_1[8];
  *param_1 = fVar1 * *param_2 + fVar3 * param_2[1] + fVar4 * param_2[2];
  param_1[1] = fVar2 * *param_2 + fVar6 * param_2[1] + fVar8 * param_2[2];
  param_1[2] = fVar5 * *param_2 + fVar7 * param_2[1] + fVar9 * param_2[2];
  param_1[3] = fVar3 * param_2[4] + fVar4 * param_2[5] + fVar1 * param_2[3];
  param_1[4] = fVar6 * param_2[4] + fVar8 * param_2[5] + fVar2 * param_2[3];
  param_1[5] = fVar7 * param_2[4] + fVar9 * param_2[5] + fVar5 * param_2[3];
  param_1[6] = fVar3 * param_2[7] + fVar4 * param_2[8] + fVar1 * param_2[6];
  param_1[7] = fVar6 * param_2[7] + fVar8 * param_2[8] + fVar2 * param_2[6];
  param_1[8] = fVar7 * param_2[7] + fVar9 * param_2[8] + fVar5 * param_2[6];
  param_1[9] = fVar3 * param_2[10] + fVar4 * param_2[0xb] + fVar1 * param_2[9] + param_1[9];
  param_1[10] = fVar6 * param_2[10] + fVar8 * param_2[0xb] + fVar2 * param_2[9] + param_1[10];
  param_1[0xb] = fVar7 * param_2[10] + fVar9 * param_2[0xb] + fVar5 * param_2[9] + param_1[0xb];
  return;
}


//// FUNCTION FUN_00bf68f0 @ 00bf68f0 ////

void __fastcall FUN_00bf68f0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_1;
  fVar4 = param_1[3];
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  fVar7 = param_1[6];
  fVar8 = param_1[7];
  fVar9 = param_1[8];
  fVar10 = param_1[9];
  fVar11 = param_1[10];
  fVar12 = param_1[0xb];
  *param_1 = fVar1 * *param_2 + fVar2 * param_2[3] + fVar3 * param_2[6];
  param_1[1] = fVar2 * param_2[4] + fVar3 * param_2[7] + fVar1 * param_2[1];
  param_1[2] = fVar2 * param_2[5] + fVar3 * param_2[8] + fVar1 * param_2[2];
  param_1[3] = fVar4 * *param_2 + fVar5 * param_2[3] + fVar6 * param_2[6];
  param_1[4] = fVar5 * param_2[4] + fVar6 * param_2[7] + fVar4 * param_2[1];
  param_1[5] = fVar5 * param_2[5] + fVar6 * param_2[8] + fVar4 * param_2[2];
  param_1[6] = fVar7 * *param_2 + fVar8 * param_2[3] + fVar9 * param_2[6];
  param_1[7] = fVar8 * param_2[4] + fVar9 * param_2[7] + fVar7 * param_2[1];
  param_1[8] = fVar8 * param_2[5] + fVar9 * param_2[8] + fVar7 * param_2[2];
  param_1[9] = fVar10 * *param_2 + fVar11 * param_2[3] + fVar12 * param_2[6] + param_2[9];
  param_1[10] = fVar11 * param_2[4] + fVar12 * param_2[7] + fVar10 * param_2[1] + param_2[10];
  param_1[0xb] = fVar11 * param_2[5] + fVar12 * param_2[8] + fVar10 * param_2[2] + param_2[0xb];
  return;
}


//// FUNCTION FUN_00bf6a80 @ 00bf6a80 ////

void __fastcall FUN_00bf6a80(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  
  fVar12 = (float10)fcos((float10)param_3);
  fVar13 = (float10)fsin((float10)param_3);
  fVar15 = (float10)*param_2 * (float10)*param_2;
  fVar10 = param_2[1] * param_2[1];
  fVar11 = param_2[2] * param_2[2];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = *param_2;
  fVar4 = param_2[2];
  fVar5 = param_2[2];
  fVar6 = param_2[1];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  *param_1 = (float)(((float10)1.0 - fVar15) * fVar12 + fVar15);
  fVar15 = (float10)(fVar1 * fVar2) - (float10)(fVar1 * fVar2) * fVar12;
  param_1[3] = (float)((float10)(float)(fVar13 * (float10)fVar9) + fVar15);
  fVar14 = (float10)(fVar3 * fVar4) - (float10)(fVar3 * fVar4) * fVar12;
  param_1[6] = (float)(fVar14 - (float10)(float)(fVar13 * (float10)fVar8));
  param_1[1] = (float)(fVar15 - (float10)(float)(fVar13 * (float10)fVar9));
  param_1[4] = (float)(((float10)1.0 - (float10)fVar10) * fVar12 + (float10)fVar10);
  fVar15 = (float10)(fVar5 * fVar6) - (float10)(fVar5 * fVar6) * fVar12;
  param_1[7] = (float)(fVar15 + (float10)(float)(fVar13 * (float10)fVar7));
  param_1[2] = (float)(fVar14 + (float10)(float)(fVar13 * (float10)fVar8));
  param_1[5] = (float)fVar15 - (float)(fVar13 * (float10)fVar7);
  param_1[0xb] = 0.0;
  param_1[10] = 0.0;
  param_1[9] = 0.0;
  param_1[8] = (float)(((float10)1.0 - (float10)fVar11) * fVar12 + (float10)fVar11);
  return;
}


//// FUNCTION FUN_00bf6b90 @ 00bf6b90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00bf6b90(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_2[8] * param_2[4] - param_2[7] * param_2[5]) * *param_2 +
          (param_2[5] * param_2[1] - param_2[2] * param_2[4]) * param_2[6] +
          (param_2[2] * param_2[7] - param_2[8] * param_2[1]) * param_2[3];
  fVar2 = fVar1;
  if ((ABS(fVar1) < _DAT_00ea7a14) && (fVar2 = _DAT_00ea7a14, fVar1 < 0.0)) {
    fVar2 = -_DAT_00ea7a14;
  }
  fVar2 = 1.0 / fVar2;
  *param_1 = (param_2[8] * param_2[4] - param_2[7] * param_2[5]) * fVar2;
  param_1[3] = (param_2[6] * param_2[5] - param_2[8] * param_2[3]) * fVar2;
  param_1[6] = (param_2[7] * param_2[3] - param_2[6] * param_2[4]) * fVar2;
  param_1[1] = (param_2[2] * param_2[7] - param_2[8] * param_2[1]) * fVar2;
  param_1[4] = (param_2[8] * *param_2 - param_2[6] * param_2[2]) * fVar2;
  param_1[7] = (param_2[6] * param_2[1] - *param_2 * param_2[7]) * fVar2;
  param_1[2] = (param_2[5] * param_2[1] - param_2[2] * param_2[4]) * fVar2;
  param_1[5] = (param_2[2] * param_2[3] - *param_2 * param_2[5]) * fVar2;
  param_1[8] = (*param_2 * param_2[4] - param_2[3] * param_2[1]) * fVar2;
  param_1[9] = -(param_2[10] * param_1[3] + param_2[9] * *param_1 + param_2[0xb] * param_1[6]);
  param_1[10] = -(param_1[7] * param_2[0xb] + param_2[9] * param_1[1] + param_2[10] * param_1[4]);
  param_1[0xb] = -(param_1[2] * param_2[9] + param_2[10] * param_1[5] + param_2[0xb] * param_1[8]);
  return;
}


//// FUNCTION FUN_00bf6cf0 @ 00bf6cf0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00bf6cf0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar11 = param_1;
  pfVar12 = local_30;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  fVar1 = local_30[1] * local_1c - local_30[2] * local_20;
  fVar2 = local_30[2] * local_14 - local_30[1] * local_10;
  fVar3 = local_10 * local_20 - local_1c * local_14;
  fVar4 = fVar3 * local_30[0] + fVar2 * local_30[3] + fVar1 * local_18;
  fVar5 = fVar4;
  if ((ABS(fVar4) < _DAT_00ea7a14) && (fVar5 = _DAT_00ea7a14, fVar4 < 0.0)) {
    fVar5 = -_DAT_00ea7a14;
  }
  fVar5 = 1.0 / fVar5;
  fVar3 = fVar3 * fVar5;
  *param_1 = fVar3;
  fVar4 = (local_18 * local_1c - local_30[3] * local_10) * fVar5;
  param_1[3] = fVar4;
  fVar6 = (local_30[3] * local_14 - local_18 * local_20) * fVar5;
  param_1[6] = fVar6;
  fVar2 = fVar2 * fVar5;
  param_1[1] = fVar2;
  fVar7 = (local_10 * local_30[0] - local_18 * local_30[2]) * fVar5;
  param_1[4] = fVar7;
  fVar8 = (local_18 * local_30[1] - local_14 * local_30[0]) * fVar5;
  param_1[7] = fVar8;
  fVar1 = fVar1 * fVar5;
  param_1[2] = fVar1;
  fVar9 = (local_30[2] * local_30[3] - local_1c * local_30[0]) * fVar5;
  param_1[5] = fVar9;
  fVar5 = (local_20 * local_30[0] - local_30[1] * local_30[3]) * fVar5;
  param_1[8] = fVar5;
  param_1[9] = -(fVar3 * local_c + fVar4 * local_8 + fVar6 * local_4);
  param_1[10] = -(fVar2 * local_c + fVar7 * local_8 + fVar8 * local_4);
  param_1[0xb] = -(fVar1 * local_c + fVar9 * local_8 + fVar5 * local_4);
  return;
}


//// FUNCTION FUN_00bf6eb0 @ 00bf6eb0 ////

void __fastcall FUN_00bf6eb0(float *param_1)

{
  FUN_00bf1b00(param_1);
  FUN_00bf1b00(param_1 + 3);
  FUN_00bf1b00(param_1 + 6);
  return;
}


//// FUNCTION FUN_00bf6ed0 @ 00bf6ed0 ////

undefined1 * __fastcall FUN_00bf6ed0(undefined1 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01f56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  Ctor_vt00d9feb8_00be1e00((undefined4 *)(param_1 + 8));
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  Ctor_vt00d9feb8_00be1e00((undefined4 *)(param_1 + 0x34));
  local_4 = CONCAT31(local_4._1_3_,1);
  Ctor_vt00d9feb8_00be1e00((undefined4 *)(param_1 + 0x3c));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00bf6f50 @ 00bf6f50 ////

void __thiscall FUN_00bf6f50(void *this,undefined4 param_1)

{
  void *this_00;
  int iVar1;
  
  this_00 = (void *)((int)this + 0x1c);
  iVar1 = 2;
  do {
    FUN_00c2cd70(this_00,param_1);
    this_00 = (void *)((int)this_00 + 0x200);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


//// FUNCTION FUN_00bf6f80 @ 00bf6f80 ////

void __thiscall FUN_00bf6f80(void *this,int param_1,float param_2,float param_3)

{
  bool bVar1;
  void *this_00;
  undefined4 local_4;
  
  this_00 = (void *)((int)this + 0x1c);
  local_4 = 2;
  do {
    bVar1 = FUN_00c2cd40((int)this_00);
    if (!bVar1) {
      FUN_00c2ce90(this_00,param_1,param_2,param_3);
    }
    this_00 = (void *)((int)this_00 + 0x200);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}


//// FUNCTION FUN_00bf6fd0 @ 00bf6fd0 ////

undefined1 __fastcall FUN_00bf6fd0(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 1;
  iVar3 = param_1 + 0x1c;
  iVar4 = 2;
  do {
    bVar1 = FUN_00c2cd40(iVar3);
    if (bVar1) {
      FUN_00c2cd50(iVar3);
    }
    bVar1 = FUN_00c2cd30(iVar3);
    if (!bVar1) {
      uVar2 = 0;
    }
    iVar3 = iVar3 + 0x200;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar2;
}


//// FUNCTION FUN_00bf7010 @ 00bf7010 ////

void __thiscall FUN_00bf7010(void *this,float param_1)

{
  bool bVar1;
  void *this_00;
  int iVar2;
  
  *(undefined1 *)((int)this + 0x46c) = 0;
  this_00 = (void *)((int)this + 0x168);
  iVar2 = 2;
  do {
    bVar1 = FUN_00c2cd40((int)this_00 + -0x14c);
    if (!bVar1) {
      FUN_00c2f3e0(this_00,0.0,param_1);
    }
    this_00 = (void *)((int)this_00 + 0x200);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_00bf7060 @ 00bf7060 ////

void __fastcall FUN_00bf7060(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + 0x1c;
  iVar3 = 2;
  do {
    bVar1 = FUN_00c2cd40(iVar2);
    if (!bVar1) {
      FUN_00c2cd90(iVar2);
    }
    iVar2 = iVar2 + 0x200;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


//// FUNCTION FUN_00bf70a0 @ 00bf70a0 ////

void __fastcall FUN_00bf70a0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + 0x1c;
  iVar3 = 2;
  do {
    bVar1 = FUN_00c2cd40(iVar2);
    if (!bVar1) {
      FUN_00c2cec0(iVar2);
    }
    iVar2 = iVar2 + 0x200;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


//// FUNCTION FUN_00bf70d0 @ 00bf70d0 ////

void __thiscall
FUN_00bf70d0(void *this,int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  void *this_00;
  undefined4 local_4;
  
  this_00 = (void *)((int)this + 0x1c);
  local_4 = 2;
  do {
    bVar1 = FUN_00c2cd40((int)this_00);
    if (!bVar1) {
      FUN_00c2cf10(this_00,param_1,param_2,param_3,param_4);
    }
    this_00 = (void *)((int)this_00 + 0x200);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}


//// FUNCTION FUN_00bf7130 @ 00bf7130 ////

int __fastcall FUN_00bf7130(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x46c) == '\0') &&
     (iVar1 = *(int *)(param_1 + 0x41c) * 0x200 + param_1, *(int *)(iVar1 + 300) != 0)) {
    return iVar1 + 0x1c;
  }
  return 0;
}


//// FUNCTION FUN_00bf7170 @ 00bf7170 ////

undefined4 * __thiscall
FUN_00bf7170(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4
            ,undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01f87;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *param_3;
  *(undefined4 *)((int)this + 4) = param_3[1];
  *(undefined4 *)((int)this + 8) = param_3[2];
  *(undefined4 *)((int)this + 0xc) = param_3[3];
  this_00 = (void *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = param_5;
  *(undefined4 *)((int)this + 0x18) = param_6;
  _eh_vector_constructor_iterator_(this_00,0x200,2,Ctor_vt00da6774_00c2d100,FUN_00c2d350);
  *(undefined4 *)((int)this + 0x420) = param_1;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined4 *)((int)this + 0x424) = param_2;
  FUN_00bf6ed0((undefined1 *)((int)this + 0x428));
  *(undefined1 *)((int)this + 0x46c) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = 2;
  do {
    FUN_00c2cd70(this_00,param_7);
    this_00 = (void *)((int)this_00 + 0x200);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bf7240 @ 00bf7240 ////

void __fastcall FUN_00bf7240(void *param_1)

{
  FUN_00bf7010(param_1,0.0);
  FUN_00bf6fd0((int)param_1);
  return;
}


//// FUNCTION Dtor_00bf7260 @ 00bf7260 ////

void __fastcall Dtor_00bf7260(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d01fb8;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00bf7010(param_1,0.0);
  local_4 = local_4 & 0xffffff00;
  FUN_00bf7700((int)param_1 + 0x428);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)((int)param_1 + 0x1c),0x200,2,FUN_00c2d350);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf7350 @ 00bf7350 ////

undefined4 __thiscall
FUN_00bf7350(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_EDX;
  
  iVar1 = FUN_00bf7130((int)this);
  if (iVar1 == 0) {
    *param_3 = 0xffffffff;
    *param_1 = 0xffffffff;
    *param_2 = 0;
    if (*(char *)(extraout_EDX + 0x46c) == '\0') {
      return 0;
    }
  }
  else {
    uVar2 = GetField_0x1bc_00c2cef0(iVar1);
    *param_1 = uVar2;
    uVar2 = GetField_0x1b8_00c2cf00(iVar1);
    *param_3 = uVar2;
    uVar2 = GetField_0x1c0_00c2cee0(iVar1);
    *param_2 = uVar2;
  }
  return 1;
}


//// FUNCTION FUN_00bf73c0 @ 00bf73c0 ////

void __thiscall FUN_00bf73c0(void *this,int param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = param_2;
  if (*(int *)(param_2 + 0x2c) == 0) {
    LH_Assert(&param_2,"Params.Codec != NULL\n");
    DebugBreak();
  }
  FUN_00c2cdb0((void *)(param_1 * 0x200 + 0x1c + (int)this),*(undefined4 *)(pbVar1 + 0x28),
               *(undefined4 *)(pbVar1 + 0x2c),*(undefined4 *)(pbVar1 + 0x30),
               *(undefined4 *)((int)this + 0x420),(uint)*pbVar1,pbVar1 + 8,pbVar1 + 0x34,
               pbVar1 + 0x3c,*(undefined4 *)(pbVar1 + 0x10),*(undefined4 *)(pbVar1 + 0x14),
               *(undefined4 *)(pbVar1 + 0x18),*(undefined4 **)(pbVar1 + 0x1c),
               *(undefined4 *)(pbVar1 + 0x20),this,*(float *)(pbVar1 + 0x24),*(float *)(pbVar1 + 4))
  ;
  return;
}


//// FUNCTION FUN_00bf7440 @ 00bf7440 ////

int __fastcall FUN_00bf7440(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = param_1 + 0x1c;
  iVar4 = 2;
  do {
    bVar3 = FUN_00c2cd40(iVar5);
    if (!bVar3) {
      if (iVar6 != 0) {
        fVar1 = *(float *)(iVar5 + 0x14c);
        if (*(char *)(iVar5 + 0x17c) != '\0') {
          if (fVar1 < 3.1415927) {
            if (fVar1 < -3.1415927) {
              fVar1 = fVar1 + 6.2831855;
            }
          }
          else {
            fVar1 = fVar1 - 6.2831855;
          }
        }
        fVar2 = *(float *)(iVar6 + 0x14c);
        if (*(char *)(iVar6 + 0x17c) != '\0') {
          if (fVar2 < 3.1415927) {
            if (fVar2 < -3.1415927) {
              fVar2 = fVar2 + 6.2831855;
            }
          }
          else {
            fVar2 = fVar2 - 6.2831855;
          }
        }
        if (fVar2 <= fVar1) goto LAB_00bf74e2;
      }
      iVar6 = iVar5;
    }
LAB_00bf74e2:
    iVar5 = iVar5 + 0x200;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return iVar6;
    }
  } while( true );
}


//// FUNCTION FUN_00bf7650 @ 00bf7650 ////

void __thiscall FUN_00bf7650(void *this,undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  void *this_00;
  
  uVar2 = 0;
  this_00 = (void *)((int)this + 0x1c);
  do {
    bVar1 = FUN_00c2cd40((int)this_00);
    if (!bVar1) {
      *(undefined4 *)((int)this_00 + 0x1e8) = param_1;
      *(undefined4 *)((int)this_00 + 0x1cc) = param_2;
      CInstance_UpdateState(this_00,*(int **)((int)this + 0x424),*(uint *)((int)this + 0x10),
                   *(undefined4 *)((int)this + 0x14),*(uint *)((int)this + 0x18));
      bVar1 = FUN_00c2cd40((int)this_00);
      if ((bVar1) && (*(char *)((int)this + 0x46c) != '\0')) {
        FUN_00bf73c0(this,uVar2,(byte *)((int)this + 0x428));
        *(uint *)((int)this + 0x41c) = uVar2;
        CInstance_UpdateState(this_00,*(int **)((int)this + 0x424),*(uint *)((int)this + 0x10),
                     *(undefined4 *)((int)this + 0x14),*(uint *)((int)this + 0x18));
        *(undefined1 *)((int)this + 0x46c) = 0;
      }
    }
    uVar2 = uVar2 + 1;
    this_00 = (void *)((int)this_00 + 0x200);
  } while (uVar2 < 2);
  return;
}


//// FUNCTION FUN_00bf7700 @ 00bf7700 ////

void __fastcall FUN_00bf7700(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d01ff6;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  PKStringsCHeapString_Dtor((undefined4 *)(param_1 + 0x3c));
  local_4 = local_4 & 0xffffff00;
  PKStringsCHeapString_Dtor((undefined4 *)(param_1 + 0x34));
  local_4 = 0xffffffff;
  PKStringsCHeapString_Dtor((undefined4 *)(param_1 + 8));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf77e0 @ 00bf77e0 ////

void __fastcall FUN_00bf77e0(int param_1)

{
  char cVar1;
  int *piVar2;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x14))();
    cVar1 = (**(code **)(*piVar2 + 8))();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00bf7802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00bf7810 @ 00bf7810 ////

int __thiscall FUN_00bf7810(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined3 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined4 unaff_retaddr;
  uint local_4;
  
  piVar1 = *(int **)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = (undefined3)((uint)this >> 8);
    local_4 = (uint)this & 0xffffff00;
    switch(param_1) {
    case 1:
      local_4 = CONCAT31(uVar2,1);
    case 2:
      goto LAB_00bf78a1;
    case 3:
      local_4 = CONCAT31(uVar2,1);
    case 4:
      cVar3 = (**(code **)(*piVar1 + 0xc))(&param_1);
      break;
    case 5:
      local_4 = CONCAT31(uVar2,1);
    default:
      cVar3 = (**(code **)(*piVar1 + 4))(&param_1);
    }
    if (cVar3 != '\0') {
LAB_00bf78a1:
      uVar4 = FUN_00acd42c();
      cVar3 = (**(code **)(**(int **)((int)this + 4) + 8))((int)uVar4,local_4,&stack0x00000008);
      if (cVar3 == '\0') {
        *(undefined4 *)((int)this + 0x10) = 0;
      }
      else {
        *(uint *)((int)this + 0x10) = local_4;
      }
      if ((*(int *)((int)this + 0x20) != 0) &&
         (*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x20) < *(int *)((int)this + 0x10))) {
        *(undefined4 *)((int)this + 0x14) = 0;
        *(undefined1 *)((int)this + 0x18) = 0;
        return *(int *)((int)this + 0x10);
      }
      *(undefined1 *)((int)this + 0x18) = 0;
      *(undefined4 *)((int)this + 0x14) = unaff_retaddr;
      return *(int *)((int)this + 0x10);
    }
  }
  return -1;
}


//// FUNCTION FUN_00bf7920 @ 00bf7920 ////

undefined4 __fastcall FUN_00bf7920(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x10);
}


//// FUNCTION FUN_00bf7930 @ 00bf7930 ////

int __thiscall FUN_00bf7930(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_24;
  uint local_1c;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02008;
  if ((*(int *)((int)this + 4) == 0) || (*(int *)((int)this + 0x10) < 0)) {
    return -1;
  }
  if (*(char *)((int)this + 0x18) != '\0') {
    return 0;
  }
  local_14 = *param_1;
  local_10 = param_1[1];
  local_4 = 0;
  local_24 = 0;
  uVar7 = param_2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
joined_r0x00bf79a9:
  do {
    if (uVar7 == 0) goto LAB_00bf7a9e;
    bVar2 = false;
    param_2 = 0;
    uVar5 = uVar7;
    if ((*(int *)((int)this + 0x20) != 0) && (iVar1 = *(int *)((int)this + 0x14), iVar1 != 0)) {
      uVar6 = *(uint *)((int)this + 0x1c);
      uVar4 = *(int *)((int)this + 0x20) + uVar6;
      if (uVar4 < *(int *)((int)this + 0x10) + uVar7) {
        uVar5 = uVar4 - *(int *)((int)this + 0x10);
        *(uint *)((int)this + 0x10) = uVar6;
        bVar2 = true;
        param_2 = uVar6;
        if (0 < iVar1) {
          *(int *)((int)this + 0x14) = iVar1 + -1;
        }
      }
    }
    cVar3 = (**(code **)(**(int **)((int)this + 4) + 0x10))(local_14,local_10 * uVar5 * 2,&local_1c)
    ;
    if (cVar3 == '\0') {
      *(undefined4 *)((int)this + 0x10) = 0xffffffff;
      goto LAB_00bf7a9e;
    }
    uVar6 = local_1c / (uint)(local_10 * 2);
    local_24 = local_24 + uVar6;
    *(uint *)((int)this + 0x10) = *(int *)((int)this + 0x10) + uVar6;
    FUN_00c2f5b0(&local_14,uVar6);
    uVar7 = uVar7 - uVar6;
    if (uVar6 == uVar5) {
LAB_00bf7a60:
      if (!bVar2) goto joined_r0x00bf79a9;
    }
    else {
      iVar1 = *(int *)((int)this + 0x14);
      if (iVar1 == 0) {
        *(undefined1 *)((int)this + 0x18) = 1;
        uVar7 = 0;
        goto LAB_00bf7a60;
      }
      if (0 < iVar1) {
        *(int *)((int)this + 0x14) = iVar1 + -1;
      }
      param_2 = 0;
    }
    cVar3 = (**(code **)(**(int **)((int)this + 4) + 8))(param_2,1,auStack_18);
    if (cVar3 == '\0') {
      local_24 = -1;
LAB_00bf7a9e:
      local_4 = 0xffffffff;
      FUN_00c2f5a0();
      ExceptionList = local_c;
      return local_24;
    }
  } while( true );
}


//// FUNCTION FUN_00bf7ad0 @ 00bf7ad0 ////

undefined1 * __fastcall FUN_00bf7ad0(int param_1)

{
  char cVar1;
  int local_4;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    local_4 = param_1;
    cVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
    if (cVar1 != '\0') {
      return (undefined1 *)&local_4;
    }
  }
  return (undefined1 *)0xffffffff;
}


//// FUNCTION FUN_00bf7b00 @ 00bf7b00 ////

undefined4 __fastcall FUN_00bf7b00(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x14);
}


//// FUNCTION FUN_00bf7b10 @ 00bf7b10 ////

undefined1 * __fastcall FUN_00bf7b10(int param_1)

{
  char cVar1;
  int local_4;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    local_4 = param_1;
    cVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))();
    if (cVar1 != '\0') {
      return (undefined1 *)&local_4;
    }
  }
  return (undefined1 *)0xffffffff;
}


//// FUNCTION FUN_00bf7b40 @ 00bf7b40 ////

undefined1 * __fastcall FUN_00bf7b40(int param_1)

{
  char cVar1;
  int local_4;
  
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    local_4 = param_1;
    cVar1 = (**(code **)**(undefined4 **)(param_1 + 4))();
    if (cVar1 != '\0') {
      return (undefined1 *)&local_4;
    }
  }
  return (undefined1 *)0xffffffff;
}


//// FUNCTION FUN_00bf7b60 @ 00bf7b60 ////

void __fastcall FUN_00bf7b60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


//// FUNCTION Dtor_00bf7b80 @ 00bf7b80 ////

void __fastcall Dtor_00bf7b80(int *param_1)

{
  void *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d02028;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if ((int *)param_1[1] != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)param_1[1] + 0x1c))();
    param_1[1] = 0;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0xc))();
    *param_1 = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
    param_1[3] = 0;
  }
  _Memory = (void *)param_1[2];
  local_4 = 0xffffffff;
  if (_Memory != (void *)0x0) {
    Dtor_00c081b0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bf7c10 @ 00bf7c10 ////

undefined ** __thiscall
FUN_00bf7c10(void *this,undefined4 param_1,int *param_2,int *param_3,undefined *param_4,
            undefined *param_5,int *param_6,int *param_7,int *param_8,undefined4 *param_9)

{
  int *this_00;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int *unaff_retaddr;
  int *piVar7;
  undefined **local_20 [2];
  void *pvStack_18;
  int iStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02066;
  pvStack_c = ExceptionList;
  piVar7 = (int *)((int)this + 8);
  ExceptionList = &pvStack_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *piVar7 = 0;
  this_00 = (int *)((int)this + 0xc);
  *this_00 = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  local_4 = 1;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  piVar5 = param_8;
  if ((char)param_4 == '\0') {
    piVar5 = param_7;
  }
  iVar3 = *param_3;
  local_20[0] = this;
  iVar2 = FUN_00bbf3a0(piVar5);
  iVar3 = (**(code **)(iVar3 + 4))(iVar2);
  *(int *)this = iVar3;
  if (iVar3 != 0) {
    param_7 = operator_new(0x9c);
    puVar1 = param_9;
    puStack_8._0_1_ = 2;
    if (param_7 == (int *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = PKDiskBufferingCReader_Ctor(param_7,*(undefined4 *)this,*param_9);
    }
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    PKCAutoDelete_Set_00bf8040(piVar7,(int)puVar4);
    if (*piVar7 == 0) {
      LH_Assert(&param_7,"FileReader.IsValid ()\n");
      DebugBreak();
    }
    PKDiskBufferingCReader_ResizeBuffer((void *)*piVar7,puVar1[1]);
    FUN_00c078b0((void *)*piVar7,puVar1[2],puVar1[3]);
    piVar5 = operator_new(0xc);
    puStack_8._0_1_ = 3;
    param_7 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      iVar3 = PKCAutoDelete_Get_00bf7f70(piVar7);
      FUN_00bce860(piVar5);
      *piVar5 = (int)&PTR_FUN_00d9f134;
      piVar5[2] = iVar3;
    }
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    PKCAutoDelete_Set_00bf8280(this_00,(int)piVar5);
    if (*this_00 == 0) {
      LH_Assert(&param_7,"FileAccess.IsValid ()\n");
      DebugBreak();
    }
    if ((char)param_3 == '\0') {
      iVar3 = *unaff_retaddr;
      iVar2 = PKCAutoDelete_Get_00bf81b0(this_00);
      uVar6 = (**(code **)(iVar3 + 0xc))(iVar2);
      *(undefined4 *)((int)this + 4) = uVar6;
    }
    else {
      iVar3 = FUN_00bbf3a0(param_6);
      Ctor_vt00d9f1ec_00bf83f0(local_20,param_2,iVar3);
      puStack_8._0_1_ = 4;
      if (iStack_14 == 0) {
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
        local_20[0] = &PTR_FUN_00d9e4b0;
        if (pvStack_18 == (void *)0x0) {
          PKDataReadCAccess_Dtor(local_20);
          ExceptionList = pvStack_10;
          return this;
        }
                    /* WARNING: Subroutine does not return */
        _free(pvStack_18);
      }
      iVar3 = *unaff_retaddr;
      piVar7 = param_8;
      iVar2 = PKCAutoDelete_Get_00bf81b0(this_00);
      uVar6 = (**(code **)(iVar3 + 0x10))(param_2,param_1,local_20,iVar2,piVar7);
      *(undefined4 *)((int)this + 4) = uVar6;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
      local_20[0] = &PTR_FUN_00d9e4b0;
      if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_18);
      }
      PKDataReadCAccess_Dtor(local_20);
    }
    *(undefined **)((int)this + 0x1c) = param_4;
    *(undefined **)((int)this + 0x20) = param_5;
  }
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_00bf7ea0 @ 00bf7ea0 ////

void __fastcall FUN_00bf7ea0(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00bf7ec0 @ 00bf7ec0 ////

void * __thiscall ScalarDeletingDtor_00bf7ec0(void *this,byte param_1)

{
  Dtor_00c081b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bf7ef0 @ 00bf7ef0 ////

void __fastcall FUN_00bf7ef0(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bf7f10 @ 00bf7f10 ////

void __fastcall FUN_00bf7f10(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    Dtor_00c081b0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bf7f40 @ 00bf7f40 ////

void __fastcall FUN_00bf7f40(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    Dtor_00c081b0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION PKCAutoDelete_Get_00bf7f70 @ 00bf7f70 ////

int __fastcall PKCAutoDelete_Get_00bf7f70(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0207b;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x25);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION PKCAutoDelete_Set_00bf8040 @ 00bf8040 ////

void __thiscall PKCAutoDelete_Set_00bf8040(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d020a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x36);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Leak!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x37);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION PKCAutoDelete_Get_00bf81b0 @ 00bf81b0 ////

int __fastcall PKCAutoDelete_Get_00bf81b0(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d020bb;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x25);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION PKCAutoDelete_Set_00bf8280 @ 00bf8280 ////

void __thiscall PKCAutoDelete_Set_00bf8280(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d020e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x36);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Leak!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x37);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00d9f1ec_00bf83f0 @ 00bf83f0 ////

undefined4 * __thiscall Ctor_vt00d9f1ec_00bf83f0(void *this,int *param_1,undefined4 param_2)

{
  undefined4 *this_00;
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint unaff_ESI;
  undefined4 uStack_54;
  void *local_50;
  undefined **ppuStack_20;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = -1;
  puStack_8 = &LAB_00d02108;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_50 = this;
  Ctor_vt00d9e4b0_00bc12f0(this,0);
  *(undefined ***)this = &PTR_FUN_00d9f1ec;
  local_4 = 0;
  piVar2 = (int *)(**(code **)(*param_1 + 4))(param_2);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)*piVar2)(&stack0xffffffa8);
    if ((cVar1 == '\0') || (unaff_ESI == 0)) {
      pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
      (**(code **)(*piVar2 + 0xc))();
    }
    else {
      this_00 = (undefined4 *)((int)this + 8);
      FUN_00bbc1d0(this_00,unaff_ESI);
      iVar3 = FUN_00bbc3b0(&local_4);
      FUN_00bbd250(&uStack_54,iVar3);
      pvStack_c._0_1_ = 2;
      if (*(int *)((int)this + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00bbc590(this_00,0);
      }
      uVar4 = FUN_00bbd200(&uStack_54,0,unaff_ESI,iVar3);
      if ((char)uVar4 == '\0') {
        if (*(int *)((int)this + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*this_00);
        }
        pvStack_c._0_1_ = 1;
        ppuStack_20 = &PTR_LAB_00d9da84;
        FUN_00bbb7a0(&uStack_54);
        pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
        (**(code **)(*piVar2 + 0xc))();
      }
      else {
        pvStack_c._0_1_ = 1;
        ppuStack_20 = &PTR_LAB_00d9da84;
        FUN_00bbb7a0(&uStack_54);
        pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
        (**(code **)(*piVar2 + 0xc))();
      }
    }
  }
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION Ctor_vt00da241c_00bf8530 @ 00bf8530 ////

undefined4 * __fastcall Ctor_vt00da241c_00bf8530(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da68fc_00c2f760(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00da241c;
  Ctor_vt00d9feb8_00be1e00(param_1 + 7);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION Dtor_00bf8580 @ 00bf8580 ////

void __fastcall Dtor_00bf8580(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0213a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da241c;
  local_4 = 0;
  PKStringsCHeapString_Dtor(param_1 + 7);
  local_4 = 0xffffffff;
  Dtor_00c2f780(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bf86c0 @ 00bf86c0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf86c0(void *this,byte param_1)

{
  Dtor_00bf8580(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00da2424_00bf86e0 @ 00bf86e0 ////

undefined4 * __fastcall Ctor_vt00da2424_00bf86e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0217e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da68fc_00c2f760(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00da2424;
  Ctor_vt00d9feb8_00be1e00(param_1 + 7);
  local_4._0_1_ = 1;
  Ctor_vt00d9feb8_00be1e00(param_1 + 9);
  local_4 = CONCAT31(local_4._1_3_,2);
  Ctor_vt00d9feb8_00be1e00(param_1 + 0xb);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION Dtor_00bf8750 @ 00bf8750 ////

void __fastcall Dtor_00bf8750(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d021a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da2424;
  local_4 = 2;
  PKStringsCHeapString_Dtor(param_1 + 0xb);
  local_4._0_1_ = 1;
  PKStringsCHeapString_Dtor(param_1 + 9);
  local_4 = (uint)local_4._1_3_ << 8;
  PKStringsCHeapString_Dtor(param_1 + 7);
  local_4 = 0xffffffff;
  Dtor_00c2f780(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bf88d0 @ 00bf88d0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf88d0(void *this,byte param_1)

{
  Dtor_00bf8750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00da242c_00bf88f0 @ 00bf88f0 ////

void __fastcall SetVtable_00da242c_00bf88f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da242c;
  return;
}


//// FUNCTION Dtor_00bf89e0 @ 00bf89e0 ////

void __fastcall Dtor_00bf89e0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d021fc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00da2444;
  local_4 = 3;
  if ((int *)param_1[0x2c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2c] + 0x1c))();
    param_1[0x2c] = 0;
  }
  local_4._0_1_ = 2;
  param_1[0x29] = &PTR_FUN_00d9f134;
  PKDataReadCAccess_Dtor(param_1 + 0x29);
  local_4._0_1_ = 1;
  Dtor_00c081b0(param_1 + 2);
  local_4 = (uint)local_4._1_3_ << 8;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
    param_1[1] = 0;
  }
  *param_1 = &PTR_LAB_00da242c;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Ctor_vt00da2444_00bf8a80 @ 00bf8a80 ////

undefined4 * __thiscall Ctor_vt00da2444_00bf8a80(void *this,undefined4 param_1,int *param_2,undefined4 *param_3)

{
  void *this_00;
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00d02240;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_LAB_00da2444;
  *(undefined4 *)((int)this + 4) = param_1;
  this_00 = (void *)((int)this + 8);
  local_4 = 1;
  uStack_3 = 0;
  PKDiskBufferingCReader_Ctor(this_00,param_1,*param_3);
  puVar1 = (undefined4 *)((int)this + 0xa4);
  local_4 = 2;
  FUN_00bce860(puVar1);
  *puVar1 = &PTR_FUN_00d9f134;
  *(void **)((int)this + 0xac) = this_00;
  *(undefined4 *)((int)this + 0xb0) = 0;
  _local_4 = CONCAT31(uStack_3,4);
  PKDiskBufferingCReader_ResizeBuffer(this_00,param_3[1]);
  FUN_00c078b0(this_00,param_3[2],param_3[3]);
  iVar2 = (**(code **)(*param_2 + 0xc))(puVar1);
  PKCAutoDeleteMe_Set_00bf8b50((void *)((int)this + 0xb0),iVar2);
  ExceptionList = this;
  return this;
}


//// FUNCTION PKCAutoDeleteMe_Set_00bf8b50 @ 00bf8b50 ////

void __thiscall PKCAutoDeleteMe_Set_00bf8b50(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02266;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteMe.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x35);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Leak!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteMe.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x36);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bf8cc0 @ 00bf8cc0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf8cc0(void *this,byte param_1)

{
  Dtor_00bf89e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bf8cf0 @ 00bf8cf0 ////

int __fastcall FUN_00bf8cf0(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (*(int *)(param_2 + 0x28) == 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Options.Output != NULL\n");
    DebugBreak();
  }
  iVar2 = 0;
  cVar1 = (**(code **)(**(int **)(param_2 + 0x28) + 4))(*param_1,param_1[1]);
  if (cVar1 != '\0') {
    iVar2 = param_1[1];
  }
  cVar1 = (**(code **)(**(int **)(param_2 + 0x28) + 4))(param_1[2],param_1[3]);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + param_1[3];
  }
  return iVar2;
}


//// FUNCTION FUN_00bf8d50 @ 00bf8d50 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall FUN_00bf8d50(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var;
  int iVar6;
  undefined4 *puVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar8;
  float10 fVar9;
  int local_338;
  int local_334;
  int local_330;
  int iStack_328;
  int iStack_324;
  int iStack_31c;
  int local_318 [8];
  int aiStack_2f8 [4];
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  int aiStack_2b8 [28];
  int aiStack_248 [8];
  undefined4 auStack_228 [8];
  undefined4 auStack_208 [8];
  int aiStack_1e8 [28];
  int aiStack_178 [91];
  undefined4 local_c;
  
  local_c = DAT_00e9a098;
  uVar4 = param_1[9];
  if ((uVar4 == 0) || (param_1[10] == 0)) goto LAB_00bf8e7a;
  local_334 = 0;
  local_330 = 0;
  local_338 = 0;
  if (0xff < (int)param_1[1]) {
    uVar4 = 0;
    if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
      uVar4 = (*(code *)**(undefined4 **)param_1[0xb])();
      return uVar4 & 0xffffff00;
    }
    goto LAB_00bf8e7a;
  }
  if ((param_1[3] == 0) && ((-1 < (int)param_1[5] || (-1 < (int)param_1[6])))) {
    uVar4 = 0;
    if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
      uVar4 = (*(code *)**(undefined4 **)param_1[0xb])();
      return uVar4 & 0xffffff00;
    }
    goto LAB_00bf8e7a;
  }
  iVar8 = param_1[8];
  if ((((int)param_1[4] < 0) && ((int)param_1[5] < 0)) && ((int)param_1[6] < 0)) {
    iVar8 = 1;
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0x10))(param_1[4],param_1[7],iVar8,param_1[3],param_1[5]);
  }
  vorbis_info_init(local_318);
  if (iVar8 < 1) {
    if ((int)param_1[5] < 1) {
      iVar8 = -1;
    }
    else {
      iVar8 = param_1[5] * 1000;
    }
    if ((int)param_1[6] < 1) {
      iVar6 = -1;
    }
    else {
      iVar6 = param_1[6] * 1000;
    }
    iVar8 = FUN_00c35ec0(local_318,param_1[1],param_1[2],iVar6,param_1[4] * 1000,iVar8);
    if (iVar8 == 0) goto LAB_00bf8ed9;
    if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)param_1[0xb];
      goto LAB_00bf8e6f;
    }
  }
  else {
    iVar8 = FUN_00c35e10((int)local_318,param_1[1],param_1[2],(float)param_1[7]);
    if (iVar8 == 0) {
      if ((0 < (int)param_1[6]) || (0 < (int)param_1[5])) {
        FUN_00c36010((int)local_318,0x10,(double *)&uStack_2e8);
        uStack_2e8._4_4_ = param_1[5];
        uStack_2e0 = param_1[6];
        uStack_2e8._0_4_ = 1;
        FUN_00c36010((int)local_318,0x11,(double *)&uStack_2e8);
      }
LAB_00bf8ed9:
      vorbis_comment_init(aiStack_2f8);
      if (param_1[3] == 0) {
LAB_00bf8f58:
        uVar4 = 0x11;
      }
      else {
        if (-1 < (int)param_1[4]) {
          uVar5 = extraout_EDX;
          if (param_1[3] != 0) goto LAB_00bf8f68;
          goto LAB_00bf8f58;
        }
        uVar4 = 0x12;
      }
      FUN_00c36010((int)local_318,uVar4,(double *)0x0);
      uVar5 = extraout_EDX_00;
LAB_00bf8f68:
      FUN_00c357b0(local_318,uVar5);
      FUN_00c30ec0((int)aiStack_2b8,(int)local_318);
      FUN_00c30990(aiStack_2b8,aiStack_1e8);
      ogg_stream_init(aiStack_178,*param_1);
      vorbis_analysis_headerout((int)aiStack_2b8,aiStack_2f8,auStack_208,auStack_228,(undefined4 *)&uStack_2e8);
      ogg_stream_packetin(aiStack_178,auStack_208);
      ogg_stream_packetin(aiStack_178,auStack_228);
      ogg_stream_packetin(aiStack_178,(undefined4 *)&uStack_2e8);
      iVar8 = ogg_stream_flush(aiStack_178,&iStack_328);
      do {
        if (iVar8 == 0) {
          bVar1 = false;
          do {
            bVar2 = false;
            uVar5 = FUN_00c31140((int)aiStack_2b8,0x400);
            iVar8 = (**(code **)(*(int *)param_1[9] + 4))(uVar5,param_1[1],0x400);
            if (iVar8 == 0) {
              iVar8 = 0;
            }
            else {
              local_334 = local_334 + iVar8;
              if ((0x27 < local_338) && ((int *)param_1[0xb] != (int *)0x0)) {
                (**(code **)(*(int *)param_1[0xb] + 4))();
                iVar6 = *(int *)param_1[0xb];
                local_338 = 0;
                (*(code *)**(undefined4 **)param_1[9])(local_334);
                (**(code **)(iVar6 + 8))();
                bVar2 = bVar1;
              }
            }
            FUN_00c31310((int)aiStack_2b8,iVar8);
            iVar8 = FUN_00c31450((int)aiStack_2b8,aiStack_1e8);
            while (iVar8 == 1) {
              FUN_00c34410((int)aiStack_1e8,(undefined4 *)0x0);
              FUN_00c338a0((int)aiStack_1e8);
              iVar8 = FUN_00c34330((int)aiStack_2b8,aiStack_248);
              while (iVar8 != 0) {
                ogg_stream_packetin(aiStack_178,aiStack_248);
                local_338 = local_338 + 1;
                if (!bVar2) {
                  do {
                    iVar8 = ogg_stream_pageout(aiStack_178,&iStack_328);
                    if (iVar8 == 0) goto LAB_00bf91b1;
                    iVar8 = FUN_00bf8cf0(&iStack_328,(int)param_1);
                    if (iVar8 != iStack_31c + iStack_324) {
                      if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
                        (*(code *)**(undefined4 **)param_1[0xb])();
                      }
                      bVar1 = true;
                      goto LAB_00bf91f2;
                    }
                    local_330 = local_330 + iVar8;
                    bVar3 = ogg_page_eos(&iStack_328);
                  } while (CONCAT31(extraout_var,bVar3) == 0);
                  bVar2 = true;
                  bVar1 = true;
                }
LAB_00bf91b1:
                iVar8 = FUN_00c34330((int)aiStack_2b8,aiStack_248);
              }
              iVar8 = FUN_00c31450((int)aiStack_2b8,aiStack_1e8);
            }
          } while (!bVar2);
          bVar1 = false;
LAB_00bf91f2:
          ogg_stream_clear(aiStack_178);
          FUN_00c30ac0(aiStack_1e8);
          FUN_00c30f20(aiStack_2b8);
          vorbis_info_clear(local_318);
          if ((int *)param_1[0xb] != (int *)0x0) {
            fVar9 = (float10)(**(code **)(*(int *)param_1[0xb] + 4))();
            (**(code **)(*(int *)param_1[0xb] + 0xc))((double)fVar9,param_1[2],local_334,local_330);
          }
          vorbis_comment_clear(aiStack_2f8);
          return (uint)!bVar1;
        }
        iVar8 = FUN_00bf8cf0(&iStack_328,(int)param_1);
        if (iVar8 != iStack_31c + iStack_324) {
          if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)param_1[0xb])();
          }
          bVar1 = true;
          goto LAB_00bf91f2;
        }
        iVar8 = ogg_stream_flush(aiStack_178,&iStack_328);
      } while( true );
    }
    if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)param_1[0xb];
LAB_00bf8e6f:
      (*(code *)*puVar7)();
    }
  }
  uVar4 = vorbis_info_clear(local_318);
LAB_00bf8e7a:
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_00bf92a0 @ 00bf92a0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

uint __thiscall FUN_00bf92a0(void *this,int param_1,uint param_2,int param_3,uint *param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined3 uVar9;
  uint uVar8;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_4 = 0;
  puVar5 = *(uint **)this;
  if ((uint *)param_2 != puVar5) {
LAB_00bf9347:
    return (uint)puVar5 & 0xffffff00;
  }
  uVar10 = *(uint *)((int)this + 4) >> 3;
  puVar4 = (uint *)((int)puVar5 * uVar10 * param_3);
  uStack_18 = 0xbf92d9;
  puVar5 = (uint *)FUN_00bd9f00((int)this + 0xc);
  if (puVar5 <= puVar4 && (int)puVar4 - (int)puVar5 != 0) {
    puVar4 = puVar5;
  }
  if (puVar4 != (uint *)0x0) {
    puVar6 = (undefined1 *)((int)puVar4 + 3U & 0xfffffffc);
    uStack_18 = 0xbf92f4;
    iVar3 = -(int)puVar6;
    puVar13 = &stack0xffffffec + iVar3;
    if (&stack0xffffffec == puVar6) {
      *(char **)((int)&uStack_18 + iVar3) = "buf != NULL\n";
      *(undefined4 *)((int)&uStack_1c + iVar3) = 0xbf9307;
      LH_Assert((void *)((int)&param_2 + 3),*(LPCSTR *)((int)&uStack_18 + iVar3));
      puVar13 = (undefined1 *)((int)&uStack_18 + iVar3);
      *(undefined4 *)((int)&uStack_18 + iVar3) = 0xbf930d;
      DebugBreak();
    }
    iVar1 = *(int *)((int)this + 0xc);
    *(uint **)(puVar13 + -4) = puVar4;
    *(undefined1 **)(puVar13 + -8) = &stack0xffffffec + iVar3;
    pcVar2 = *(code **)(iVar1 + 4);
    *(undefined4 *)(puVar13 + -0xc) = 0xbf9318;
    puVar5 = (uint *)(*pcVar2)();
    if ((char)puVar5 == '\0') goto LAB_00bf9347;
    puVar5 = (uint *)((uint)puVar4 / (*(int *)this * uVar10));
    *param_4 = (uint)puVar5;
    iVar1 = *(int *)((int)this + 4);
    if (iVar1 == 8) {
      uVar10 = 0;
      if (puVar5 != (uint *)0x0) {
        uVar11 = *(uint *)this;
        do {
          uVar8 = 0;
          if (uVar11 != 0) {
            do {
              iVar12 = uVar11 * uVar10 + uVar8;
              iVar1 = uVar8 * 4;
              uVar8 = uVar8 + 1;
              *(float *)(*(int *)(param_1 + iVar1) + uVar10 * 4) =
                   (float)(int)((byte)(&stack0xffffffec)[iVar12 + iVar3] - 0x80) * 0.0078125;
              uVar11 = *(uint *)this;
            } while (uVar8 < uVar11);
          }
          uVar10 = uVar10 + 1;
          puVar5 = param_4;
        } while (uVar10 < *param_4);
      }
    }
    else if (iVar1 == 0x10) {
      uVar10 = 0;
      uVar9 = (undefined3)((uint)param_4 >> 8);
      if (*(char *)((int)this + 8) == '\0') {
        if (puVar5 != (uint *)0x0) {
          uVar11 = *(uint *)this;
          do {
            uVar8 = 0;
            if (uVar11 != 0) {
              do {
                iVar12 = uVar11 * uVar10 + uVar8;
                iVar1 = uVar8 * 4;
                uVar8 = uVar8 + 1;
                *(float *)(*(int *)(param_1 + iVar1) + uVar10 * 4) =
                     (float)(int)CONCAT11((&stack0xffffffed)[iVar12 * 2 + iVar3],
                                          (&stack0xffffffec)[iVar12 * 2 + iVar3]) * 3.0517578e-05;
                uVar11 = *(uint *)this;
              } while (uVar8 < uVar11);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *param_4);
          return CONCAT31(uVar9,1);
        }
      }
      else if (puVar5 != (uint *)0x0) {
        uVar11 = *(uint *)this;
        do {
          uVar8 = 0;
          if (uVar11 != 0) {
            do {
              iVar12 = uVar11 * uVar10 + uVar8;
              iVar1 = uVar8 * 4;
              uVar8 = uVar8 + 1;
              *(float *)(*(int *)(param_1 + iVar1) + uVar10 * 4) =
                   (float)(int)CONCAT11((&stack0xffffffec)[iVar12 * 2 + iVar3],
                                        (&stack0xffffffed)[iVar12 * 2 + iVar3]) * 3.0517578e-05;
              uVar11 = *(uint *)this;
            } while (uVar8 < uVar11);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *param_4);
        return CONCAT31(uVar9,1);
      }
    }
    else {
      if ((iVar1 != 0x18) || (*(char *)((int)this + 8) != '\0')) goto LAB_00bf9347;
      param_2 = 0;
      if (puVar5 != (uint *)0x0) {
        uVar10 = *(uint *)this;
        do {
          uVar11 = 0;
          if (uVar10 != 0) {
            do {
              iVar7 = uVar10 * param_2 + uVar11;
              iVar12 = iVar7 * 2 + iVar3 + -0x14;
              iVar1 = uVar11 * 4;
              uVar11 = uVar11 + 1;
              *(float *)(*(int *)(param_1 + iVar1) + param_2 * 4) =
                   (float)(int)CONCAT21(CONCAT11((&stack0xffffffec + iVar7 + iVar12 + 0x14)[2],
                                                 (&stack0xffffffed)[iVar7 + iVar12 + 0x14]),
                                        (&stack0xffffffec)[iVar7 + iVar12 + 0x14]) * 1.1920929e-07;
              uVar10 = *(uint *)this;
            } while (uVar11 < uVar10);
          }
          param_2 = param_2 + 1;
        } while (param_2 < *param_4);
        return CONCAT31((int3)(uVar10 >> 8),1);
      }
    }
  }
  return CONCAT31((int3)((uint)puVar5 >> 8),1);
}


//// FUNCTION FUN_00bf94f0 @ 00bf94f0 ////

void __thiscall FUN_00bf94f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  return;
}


//// FUNCTION FUN_00bf9520 @ 00bf9520 ////

void FUN_00bf9520(void)

{
  return;
}


//// FUNCTION FUN_00bf9530 @ 00bf9530 ////

undefined4 __thiscall FUN_00bf9530(void *this,int param_1)

{
  if (param_1 == 0) {
    return *(undefined4 *)((int)this + 0x10);
  }
  if (param_1 != 1) {
    return 0;
  }
  return *(undefined4 *)((int)this + 0xc);
}


//// FUNCTION FUN_00bf9560 @ 00bf9560 ////

void __fastcall FUN_00bf9560(void *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00bbf530(param_1,'\\');
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  FUN_00bbfe10(param_1,iVar1,param_2);
  FUN_00bbee10(param_2,'\\');
  uVar2 = FUN_00bbf530(param_2,'.');
  if (-1 < (int)uVar2) {
    FUN_00bbe930(param_2,uVar2,'\0');
  }
  return;
}


//// FUNCTION FUN_00bf95a0 @ 00bf95a0 ////

uint __fastcall FUN_00bf95a0(int param_1,void *param_2,undefined2 *param_3,void *param_4)

{
  uint uVar1;
  void *this;
  undefined4 uVar2;
  undefined4 local_34;
  undefined1 *local_30;
  uint local_2c;
  undefined1 local_28 [40];
  
  uVar1 = LH_SortedArray_FindObject_00bc1130(param_4,(uint *)(param_3 + 4));
  if (uVar1 == 0) {
    this = LH_BeginWarningMessage(param_1);
    LH_LogErrorMessage(this,"Could not find resource number ");
    uVar1 = LH_PrintResourceID(this,*(uint *)(param_3 + 4));
  }
  else if ((*(byte *)(param_3 + 0x16) & 4) != 0) {
    FUN_00bde190(local_28);
    FUN_00bde000(local_28,*(byte *)(param_3 + 0x16) >> 3 & 1);
    FUN_00bddff0(local_28,param_3[0xb]);
    FUN_00bddfc0(local_28,(short)*(undefined4 *)(param_3 + 0xe));
    if ((*(byte *)(param_3 + 0x16) & 0x20) != 0) {
      FUN_00bddf90((int)local_28);
    }
    if ((*(byte *)(param_3 + 0x16) & 0x10) != 0) {
      FUN_00bddf70((int)local_28);
    }
    FUN_00bde0b0(local_28,*param_3);
    FUN_00bde090(local_28,param_3[1]);
    FUN_00bddf30((int)local_28);
    FUN_00bddf50((int)local_28);
    if (*(int *)(param_3 + 0xc) != 0) {
      FUN_00bddfb0(local_28,(short)*(int *)(param_3 + 0xc));
    }
    if (*(int *)(param_3 + 0x1c) != -1) {
      FUN_00bde060((int)local_28);
    }
    FUN_00bddf00(local_28);
    FUN_00bddfd0(local_28,(uint)(ushort)param_3[0x11]);
    FUN_00bddfe0(local_28,param_3[0x10]);
    FUN_00bde0c0(local_28,*(byte *)(param_3 + 0x16) >> 6 & 1,*(undefined4 *)(param_3 + 0x1e),
                 *(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x22));
    if ((*(byte *)(param_3 + 0x16) & 1) != 0) {
      FUN_00bde020(local_28,'\x01');
    }
    if ((*(byte *)(param_3 + 0x16) & 2) != 0) {
      FUN_00bde040(local_28,'\x01');
    }
    local_34 = *(undefined4 *)(param_3 + 2);
    local_30 = local_28;
    local_2c = uVar1;
    uVar2 = FUN_00c364d0(param_2,&local_34);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00bf97b0 @ 00bf97b0 ////

void __thiscall FUN_00bf97b0(void *this,uint param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (param_2 != 0) {
    iVar1 = LH_SortedArray_FindObject_00bd1600((void *)(*(int *)((int)this + 4) + 0x68),&param_1);
    if (iVar1 == 0) {
      pvVar2 = LH_BeginWarningMessage(*(int *)((int)this + 8));
      LH_LogErrorMessage(pvVar2,"Trying to add driver to atmos group. Could not find driver number "
                        );
      LH_PrintResourceID(pvVar2,param_1);
      return;
    }
    pvVar2 = (void *)LH_SortedArray_FindObject_00bd1650((void *)(*(int *)((int)this + 4) + 0x74),&param_2);
    if (pvVar2 == (void *)0x0) {
      LH_Assert(&param_1,"atmosGroup != NULL\n");
      DebugBreak();
    }
    FUN_00be89b0(pvVar2,iVar1);
  }
  return;
}


//// FUNCTION FUN_00bf9830 @ 00bf9830 ////

void __fastcall FUN_00bf9830(int param_1,void *param_2,void *param_3,int *param_4,void *param_5)

{
  void *pvVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (*(uint *)((int)param_5 + 4) != 0) {
    LH_Array_Reserve_00be8c50(param_2,*(uint *)((int)param_5 + 4));
    uVar5 = 0;
    if (*(int *)((int)param_5 + 4) != 0) {
      do {
        puVar2 = (uint *)PKCAutoDeleteArray_At_00bd4710(param_5,uVar5);
        iVar3 = LH_SortedArray_FindObject_00bd1600(param_3,puVar2);
        if (iVar3 == 0) {
          pvVar1 = LH_BeginWarningMessage(param_1);
          LH_LogErrorMessage(pvVar1,"Cannot find driver (");
          puVar4 = (undefined4 *)PKCAutoDeleteArray_At_00bd4710(param_5,uVar5);
          LH_PrintResourceID(pvVar1,*puVar4);
          LH_LogErrorMessage(pvVar1,") for text trigger \'");
          FUN_00bbf750(pvVar1,param_4);
          LH_LogErrorMessage(pvVar1,"\'");
        }
        else {
          FUN_00be9380(param_2,iVar3);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)((int)param_5 + 4));
    }
    return;
  }
  pvVar1 = LH_BeginWarningMessage(param_1);
  LH_LogErrorMessage(pvVar1,"Sub event for text trigger \'");
  FUN_00bbf750(pvVar1,param_4);
  LH_LogErrorMessage(pvVar1,"\' contains no drivers!");
  return;
}


//// FUNCTION FUN_00bf9910 @ 00bf9910 ////

void __fastcall FUN_00bf9910(int param_1,void *param_2,int *param_3,void *param_4)

{
  int *this;
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  undefined1 local_19;
  undefined4 *local_18;
  void *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d023d1;
  local_c = ExceptionList;
  uVar8 = param_3[3];
  local_14 = param_2;
  local_10 = param_1;
  if (uVar8 == 0) {
    ExceptionList = &local_c;
    pvVar1 = LH_BeginWarningMessage(param_1);
    LH_LogErrorMessage(pvVar1,"Text trigger \'");
    FUN_00bbf750(pvVar1,this);
    LH_LogErrorMessage(pvVar1,"\' contains no events!!");
    ExceptionList = local_c;
    return;
  }
  if (uVar8 == 1) {
    ExceptionList = &local_c;
    pvVar1 = (void *)PKCAutoDeleteArray_At_00bd4820(param_3 + 2,0);
    if (*(uint *)((int)pvVar1 + 4) < 2) {
      if (*(uint *)((int)pvVar1 + 4) != 1) {
        pvVar1 = LH_BeginWarningMessage(param_1);
        LH_LogErrorMessage(pvVar1,"Text trigger \'");
        FUN_00bbf750(pvVar1,this);
        LH_LogErrorMessage(pvVar1,"\' contains 1 event, but no drivers!");
        ExceptionList = local_c;
        return;
      }
      puVar5 = (uint *)PKCAutoDeleteArray_At_00bd4710(pvVar1,0);
      iVar6 = LH_SortedArray_FindObject_00bd1600(param_4,puVar5);
      if (iVar6 == 0) {
        pvVar1 = LH_BeginWarningMessage(param_1);
        LH_LogErrorMessage(pvVar1,"Cannot find driver for text trigger \'");
        pvVar1 = FUN_00bbb460(pvVar1,this);
        LH_LogErrorMessage(pvVar1,"\'");
        ExceptionList = local_c;
        return;
      }
      pvVar1 = operator_new(0xc);
      local_4 = 1;
      param_4 = pvVar1;
      if (pvVar1 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        uVar3 = FUN_00bbf720(this,0);
        puVar4 = Ctor_vt00da6a68_00c369a0(pvVar1,uVar3);
      }
      local_4 = 0xffffffff;
      if (puVar4 == (undefined4 *)0x0) {
        LH_Assert(&param_4,"eventTrigger != NULL\n");
        DebugBreak();
      }
      puVar4[2] = iVar6;
    }
    else {
      piVar2 = operator_new(0x14);
      local_4 = 0;
      param_3 = piVar2;
      if (piVar2 == (int *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        uVar3 = FUN_00bbf720(this,0);
        puVar4 = Ctor_vt00da6a88_00c36ab0(piVar2,uVar3);
      }
      local_4 = 0xffffffff;
      if (puVar4 == (undefined4 *)0x0) {
        LH_Assert(&param_3,"eventTrigger != NULL\n");
        DebugBreak();
      }
      FUN_00bf9830(param_1,puVar4 + 2,param_4,this,pvVar1);
    }
  }
  else {
    if (uVar8 < 2) {
      return;
    }
    ExceptionList = &local_c;
    piVar2 = operator_new(0x14);
    local_4 = 2;
    param_3 = piVar2;
    if (piVar2 == (int *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      uVar3 = FUN_00bbf720(this,0);
      local_18 = Ctor_vt00da6a48_00c36550(piVar2,uVar3);
    }
    puVar4 = local_18;
    local_4 = 0xffffffff;
    if (local_18 == (undefined4 *)0x0) {
      LH_Assert(&param_3,"eventTrigger != NULL\n");
      DebugBreak();
    }
    LH_Array_Reserve_00bfb0f0(puVar4 + 2,this[3]);
    uVar8 = 0;
    if (this[3] != 0) {
      do {
        pvVar1 = (void *)PKCAutoDeleteArray_At_00bd4820(this + 2,uVar8);
        puVar4 = operator_new(0xc);
        if (puVar4 == (undefined4 *)0x0) {
          pvVar7 = (void *)0x0;
LAB_00bf9b9b:
          LH_Assert(&local_19,"destSubEvent != NULL\n");
          DebugBreak();
        }
        else {
          pvVar7 = (void *)FUN_00be8b90(puVar4);
          if (pvVar7 == (void *)0x0) goto LAB_00bf9b9b;
        }
        FUN_00bfbc20(local_18 + 2,pvVar7);
        FUN_00bf9830(local_10,pvVar7,param_4,this,pvVar1);
        uVar8 = uVar8 + 1;
        puVar4 = local_18;
      } while (uVar8 < (uint)this[3]);
    }
  }
  PKCAutoDelete_Set_00bfc840(local_14,(int)puVar4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf9c00 @ 00bf9c00 ////

void __fastcall FUN_00bf9c00(int param_1,void *param_2,int param_3,void *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 local_38 [4];
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d023eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da26c4_00bfbc40(local_38);
  uVar5 = 0;
  local_4 = 0;
  uVar1 = LH_Array_GetCount((int)param_4);
  FUN_00bfbc70(local_38,uVar1);
  uVar1 = LH_Array_GetCount((int)param_4);
  PKCAutoDeleteArray_Resize_00bfc480((void *)(param_3 + 0x44),uVar1);
  iVar2 = LH_Array_GetCount((int)param_4);
  if (iVar2 != 0) {
    do {
      puVar3 = (undefined4 *)thunk_FUN_00bd3ed0(param_4,uVar5);
      pvVar4 = (void *)PKCAutoDeleteArray_At_00bfca20((void *)(param_3 + 0x44),uVar5);
      local_28 = *puVar3;
      local_24 = FUN_00c36c70((int)puVar3);
      local_10 = param_3;
      local_14 = puVar3[3];
      local_18 = puVar3[4];
      local_20 = FUN_00c36d40((int)puVar3);
      local_1c = FUN_00c36d60((int)puVar3);
      FUN_00c363e0(pvVar4,&local_28);
      FUN_00bfcd80(local_38,pvVar4);
      uVar5 = uVar5 + 1;
      uVar1 = LH_Array_GetCount((int)param_4);
    } while (uVar5 < uVar1);
  }
  Ctor_vt00d9f0cc_00bfbc80(&local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bff0d0(&local_28,local_38);
  iVar2 = FUN_00bd1100((int)&local_28);
  while (iVar2 != 0) {
    pvVar4 = LH_BeginWarningMessage(param_1);
    LH_LogErrorMessage(pvVar4,"Duplicate resource (");
    LH_PrintResourceID(pvVar4,*(undefined4 *)(iVar2 + 4));
    LH_LogErrorMessage(pvVar4,")");
    iVar2 = FUN_00bd1100((int)&local_28);
  }
  local_4 = local_4 & 0xffffff00;
  Dtor_00bd16a0(&local_28);
  thunk_FUN_00bfedd0(param_2,local_38);
  local_4 = 0xffffffff;
  Dtor_00bfbc60(local_38);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf9da0 @ 00bf9da0 ////

void __fastcall FUN_00bf9da0(int param_1,int param_2,void *param_3,void *param_4,void *param_5)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02405;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Ctor_vt00da26c8_00bfbca0(local_2c);
  uVar7 = 0;
  local_4 = 0;
  uVar1 = thunk_FUN_00bd3890((int)param_5);
  FUN_00bfbcd0(local_2c,uVar1);
  uVar1 = thunk_FUN_00bd3890((int)param_5);
  PKCAutoDeleteArray_Resize_00bfd1d0((void *)(param_2 + 0x4c),uVar1);
  iVar2 = thunk_FUN_00bd3890((int)param_5);
  if (iVar2 != 0) {
    do {
      puVar3 = (undefined2 *)thunk_FUN_00bd4010(param_5,uVar7);
      pvVar4 = (void *)PKCAutoDeleteArray_At_00bfcb30((void *)(param_2 + 0x4c),uVar7);
      uVar5 = FUN_00bf95a0(param_1,pvVar4,puVar3,param_4);
      if ((char)uVar5 != '\0') {
        FUN_00bfcd90(local_2c,pvVar4);
      }
      uVar7 = uVar7 + 1;
      uVar1 = thunk_FUN_00bd3890((int)param_5);
    } while (uVar7 < uVar1);
  }
  Ctor_vt00d9f0d0_00bfbce0(local_1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bff210(local_1c,local_2c);
  piVar6 = (int *)FUN_00bd1150((int)local_1c);
  while (piVar6 != (int *)0x0) {
    pvVar4 = LH_BeginWarningMessage(param_1);
    LH_LogErrorMessage(pvVar4,"Clash on driver id (");
    LH_PrintResourceID(pvVar4,piVar6[1]);
    LH_LogErrorMessage(pvVar4,")");
    (**(code **)(*piVar6 + 0x90))(1);
    piVar6 = (int *)FUN_00bd1150((int)local_1c);
  }
  local_4 = local_4 & 0xffffff00;
  Dtor_00bd16f0(local_1c);
  thunk_FUN_00bfee10(param_3,local_2c);
  local_4 = 0xffffffff;
  Dtor_00bfbcc0(local_2c);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bf9f10 @ 00bf9f10 ////

void __fastcall FUN_00bf9f10(undefined4 param_1,int param_2,undefined4 param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined **local_28;
  int local_24 [2];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0241f;
  local_c = ExceptionList;
  local_28 = &PTR_LAB_00da2678;
  ExceptionList = &local_c;
  RedBlackTree_Ctor(local_24);
  pvVar4 = param_4;
  local_28 = &PTR_LAB_00da273c;
  uVar5 = 0;
  local_4 = 0;
  iVar1 = thunk_FUN_00bd3890((int)param_4);
  if (iVar1 != 0) {
    do {
      iVar1 = thunk_FUN_00bd4010(pvVar4,uVar5);
      if (*(ushort *)(iVar1 + 0x14) != 0) {
        param_4 = (void *)(uint)*(ushort *)(iVar1 + 0x14);
        iVar2 = RedBlackTree_Find(local_24,&local_28,&param_4,&param_4);
        if (iVar2 == 0) {
          param_4 = (void *)(uint)*(ushort *)(iVar1 + 0x14);
          FUN_00bfc680(&local_28,&param_4);
        }
      }
      uVar5 = uVar5 + 1;
      uVar3 = thunk_FUN_00bd3890((int)pvVar4);
    } while (uVar5 < uVar3);
  }
  iVar1 = RedBlackTree_GetMinObject(local_24);
  if (iVar1 != 0) {
    Ctor_vt00da26cc_00bfbd00(local_1c);
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar5 = RedBlackTree_Count(local_24);
    FUN_00bfbd30(local_1c,uVar5);
    uVar5 = RedBlackTree_Count(local_24);
    PKCAutoDeleteArray_Resize_00bfea50((void *)(param_2 + 0x54),uVar5);
    uVar5 = 0;
    iVar1 = RedBlackTree_GetMinObject(local_24);
    while (iVar1 != 0) {
      pvVar4 = (void *)PKCAutoDeleteArray_At_00bfcc40((void *)(param_2 + 0x54),uVar5);
      FUN_00c36520(pvVar4,param_2,*(undefined4 *)(iVar1 + 0x14));
      FUN_00bfcda0(local_1c,pvVar4);
      iVar1 = RedBlackTree_GetSuccessor(local_24,(int *)&local_28,iVar1);
      uVar5 = uVar5 + 1;
    }
    thunk_FUN_00bff080((void *)(param_2 + 0x74),local_1c);
    local_4 = local_4 & 0xffffff00;
    Dtor_00bfbd20(local_1c);
  }
  local_4 = 0xffffffff;
  FUN_00bfd410((int *)&local_28);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bfa090 @ 00bfa090 ////

void __fastcall FUN_00bfa090(int param_1,void *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02444;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da26d0_00bfe4e0(local_2c,param_2);
  uVar7 = 0;
  local_4 = 0;
  iVar1 = FUN_00bfbd60((int)local_2c);
  pvVar6 = param_3;
  iVar2 = thunk_FUN_00bfb1b0((int)param_3);
  FUN_00bfbd50(local_2c,iVar1 + iVar2);
  iVar1 = thunk_FUN_00bfb1b0((int)pvVar6);
  if (iVar1 != 0) {
    do {
      this = (void *)thunk_FUN_00bfbe40(pvVar6,uVar7);
      puVar3 = operator_new(0xc);
      local_4._0_1_ = 1;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        Ctor_vt00d9feb8_00be1e00(puVar3 + 1);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (puVar3 == (undefined4 *)0x0) {
        LH_Assert(&param_3,"debugInfo != NULL\n");
        DebugBreak();
      }
      uVar4 = FUN_00bbf720(this,0);
      *puVar3 = uVar4;
      FUN_00be2010(puVar3 + 1,(int)this);
      FUN_00bfcdb0(local_2c,puVar3);
      uVar7 = uVar7 + 1;
      uVar5 = thunk_FUN_00bfb1b0((int)pvVar6);
    } while (uVar7 < uVar5);
  }
  Ctor_vt00d9ee00_00bcc660(local_1c);
  local_4._0_1_ = 2;
  FUN_00bff350(local_1c,local_2c);
  puVar3 = (undefined4 *)FUN_00bcc6e0((int)local_1c);
  if (puVar3 != (undefined4 *)0x0) {
    pvVar6 = LH_BeginWarningMessage(param_1);
    LH_LogErrorMessage(pvVar6,"Collision in Atmos Trigger debug names (");
    LH_PrintResourceID(pvVar6,*puVar3);
    LH_LogErrorMessage(pvVar6,", \'");
    FUN_00bbf750(pvVar6,puVar3 + 1);
    LH_LogErrorMessage(pvVar6,"\')");
    PKStringsCHeapString_Dtor(puVar3 + 1);
                    /* WARNING: Subroutine does not return */
    _free(puVar3);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  Dtor_00bcc680(local_1c);
  thunk_FUN_00bfed90(param_2,local_2c);
  local_4 = 0xffffffff;
  Dtor_00bfbd40(local_2c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bfa240 @ 00bfa240 ////

void __fastcall FUN_00bfa240(int param_1,int param_2,void *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  void *this;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  uint local_3c;
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02469;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Ctor_vt00da26d4_00bfe540(local_2c,param_3);
  local_4 = 0;
  iVar1 = FUN_00bfbd90((int)local_2c);
  pvVar7 = param_4;
  iVar2 = thunk_FUN_00bfb1b0((int)param_4);
  FUN_00bfbd80(local_2c,iVar1 + iVar2);
  local_3c = 0;
  iVar1 = thunk_FUN_00bfb1b0((int)pvVar7);
  if (iVar1 != 0) {
    do {
      this = (void *)thunk_FUN_00bfbe40(pvVar7,local_3c);
      iVar1 = LH_SortedArray_FindObject_00bd1650((void *)(param_2 + 0x74),(uint *)((int)this + 0xc));
      if (iVar1 == 0) {
        pvVar3 = LH_BeginWarningMessage(param_1);
        LH_LogErrorMessage(pvVar3,"[Adding atmos triggers] - could not find atmos group ");
        LH_PrintResourceID(pvVar3,*(uint *)((int)this + 0xc));
      }
      else {
        pvVar3 = operator_new(0x14);
        local_4._0_1_ = 1;
        if (pvVar3 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          uVar4 = FUN_00bbf720(this,0);
          puVar6 = Ctor_vt00da6aa8_00c36e90(pvVar3,uVar4);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (puVar6 == (undefined4 *)0x0) {
          LH_Assert(&param_4,"eventTrigger != NULL\n");
          DebugBreak();
        }
        puVar6[2] = iVar1;
        *(undefined1 *)(puVar6 + 4) = *(undefined1 *)((int)this + 0x10);
        puVar6[3] = *(undefined4 *)((int)this + 8);
        FUN_00bfcdc0(local_2c,puVar6);
      }
      local_3c = local_3c + 1;
      uVar5 = thunk_FUN_00bfb1b0((int)pvVar7);
    } while (local_3c < uVar5);
  }
  Ctor_vt00d9ee30_00bccf30(local_1c);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00bff480(local_1c,local_2c);
  puVar6 = (undefined4 *)FUN_00bccfb0((int)local_1c);
  while (puVar6 != (undefined4 *)0x0) {
    pvVar7 = LH_BeginWarningMessage(param_1);
    LH_LogErrorMessage(pvVar7,"Collision (internal) in Atmos Trigger (");
    LH_PrintResourceID(pvVar7,puVar6[1]);
    LH_LogErrorMessage(pvVar7,")");
    (**(code **)*puVar6)(1);
    puVar6 = (undefined4 *)FUN_00bccfb0((int)local_1c);
  }
  local_4 = local_4 & 0xffffff00;
  Dtor_00bccf50(local_1c);
  thunk_FUN_00bfed50(param_3,local_2c);
  local_4 = 0xffffffff;
  Dtor_00bfbd70(local_2c);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bfa440 @ 00bfa440 ////

void __fastcall FUN_00bfa440(int param_1,void *param_2,void *param_3,void *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0248e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Ctor_vt00da26d4_00bfe540(local_2c,param_2);
  uVar8 = 0;
  local_4 = 0;
  iVar2 = FUN_00bfbd90((int)local_2c);
  pvVar7 = param_3;
  iVar3 = thunk_FUN_00bd3890((int)param_3);
  FUN_00bfbd80(local_2c,iVar2 + iVar3);
  iVar2 = thunk_FUN_00bd3890((int)pvVar7);
  if (iVar2 != 0) {
    do {
      iVar2 = thunk_FUN_00bd4010(pvVar7,uVar8);
      puVar1 = (uint *)(iVar2 + 4);
      iVar2 = LH_SortedArray_FindObject_00bd1600(param_4,puVar1);
      if (iVar2 == 0) {
        pvVar4 = LH_BeginWarningMessage(param_1);
        LH_LogErrorMessage(pvVar4,
                           "Trying to add numeric event triggers. Could not find driver number ");
        LH_PrintResourceID(pvVar4,*puVar1);
      }
      else {
        pvVar4 = operator_new(0xc);
        local_4._0_1_ = 1;
        if (pvVar4 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = Ctor_vt00da6a68_00c369a0(pvVar4,*puVar1);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (puVar6 == (undefined4 *)0x0) {
          LH_Assert(&param_3,"eventTrigger != NULL\n");
          DebugBreak();
        }
        puVar6[2] = iVar2;
        LH_Container_AddObject_00bfd530(local_2c,(int)puVar6);
      }
      uVar8 = uVar8 + 1;
      uVar5 = thunk_FUN_00bd3890((int)pvVar7);
    } while (uVar8 < uVar5);
  }
  Ctor_vt00d9ee30_00bccf30(local_1c);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00bff480(local_1c,local_2c);
  puVar6 = (undefined4 *)FUN_00bccfb0((int)local_1c);
  while (puVar6 != (undefined4 *)0x0) {
    pvVar7 = LH_BeginWarningMessage(param_1);
    LH_LogErrorMessage(pvVar7,"Duplate numeric event trigger (");
    LH_PrintResourceID(pvVar7,puVar6[1]);
    LH_LogErrorMessage(pvVar7,")");
    (**(code **)*puVar6)(1);
    puVar6 = (undefined4 *)FUN_00bccfb0((int)local_1c);
  }
  local_4 = local_4 & 0xffffff00;
  Dtor_00bccf50(local_1c);
  thunk_FUN_00bfed50(param_2,local_2c);
  local_4 = 0xffffffff;
  Dtor_00bfbd70(local_2c);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bfa600 @ 00bfa600 ////

void __fastcall
FUN_00bfa600(int param_1,void *param_2,void *param_3,void *param_4,void *param_5,void *param_6,
            char param_7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 local_14e;
  undefined1 local_14d;
  uint local_14c;
  undefined4 local_148 [4];
  void *local_138;
  undefined4 *local_134;
  undefined4 local_130 [4];
  undefined4 local_120 [4];
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d024eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_138 = param_2;
  Ctor_vt00da26d4_00bfe540(local_130,param_2);
  uVar9 = 0;
  local_4 = 0;
  Ctor_vt00da26d0_00bfe4e0(local_120,param_3);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar2 = FUN_00bfbd90((int)local_130);
  iVar3 = LH_Array_GetCount((int)param_4);
  FUN_00bfbd80(local_130,iVar2 + iVar3);
  if (param_7 != '\0') {
    iVar2 = FUN_00bfbd60((int)local_120);
    iVar3 = LH_Array_GetCount((int)param_4);
    FUN_00bfbd50(local_120,iVar2 + iVar3);
  }
  local_14c = 0;
  iVar2 = thunk_FUN_00bd3890((int)param_5);
  if (iVar2 != 0) {
    do {
      iVar2 = thunk_FUN_00bd4010(param_5,uVar9);
      puVar1 = (uint *)(iVar2 + 8);
      if (*(uint *)(iVar2 + 4) == *puVar1) {
        iVar3 = LH_SortedArray_FindObject_00bd4940(param_4,puVar1);
        iVar4 = LH_SortedArray_FindObject_00bd1600(param_6,(uint *)(iVar2 + 4));
        if (iVar3 == 0) {
          pvVar5 = LH_BeginWarningMessage(param_1);
          LH_LogErrorMessage(pvVar5,"Missing resource (");
          uVar9 = *puVar1;
        }
        else {
          if (iVar4 != 0) {
            local_110 = &PTR_LAB_00d9db7c;
            local_10c = 0;
            local_d = 0;
            local_4._0_1_ = 2;
            FUN_00bf9560((void *)(iVar3 + 4),(int *)&local_110);
            FUN_00bbf360(&local_110);
            pvVar5 = operator_new(0xc);
            local_4._0_1_ = 3;
            local_134 = pvVar5;
            if (pvVar5 == (void *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              uVar6 = FUN_00bbf720(&local_110,0);
              puVar8 = Ctor_vt00da6a68_00c369a0(pvVar5,uVar6);
            }
            local_4._0_1_ = 2;
            if (puVar8 == (undefined4 *)0x0) {
              LH_Assert(&local_14d,"eventTrigger_Driver != NULL\n");
              DebugBreak();
            }
            puVar8[2] = iVar4;
            LH_Container_AddObject_00bfd530(local_130,(int)puVar8);
            puVar8 = operator_new(0xc);
            local_4._0_1_ = 4;
            local_134 = puVar8;
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              Ctor_vt00d9feb8_00be1e00(puVar8 + 1);
            }
            local_4._0_1_ = 2;
            if (puVar8 == (undefined4 *)0x0) {
              LH_Assert(&local_14e,"debugInfo != NULL\n");
              DebugBreak();
            }
            uVar6 = FUN_00bbf720(&local_110,0);
            *puVar8 = uVar6;
            (**(code **)(puVar8[1] + 8))(&local_110);
            LH_Container_AddObject_00bfd500(local_120,(int)puVar8);
            local_4 = CONCAT31(local_4._1_3_,1);
            local_110 = &PTR_LAB_00d9d9b4;
            goto LAB_00bfa860;
          }
          pvVar5 = LH_BeginWarningMessage(param_1);
          LH_LogErrorMessage(pvVar5,"Missing driver (");
          uVar9 = *(uint *)(iVar2 + 4);
        }
        LH_PrintResourceID(pvVar5,uVar9);
        LH_LogErrorMessage(pvVar5,")");
      }
LAB_00bfa860:
      uVar9 = local_14c + 1;
      local_14c = uVar9;
      uVar7 = thunk_FUN_00bd3890((int)param_5);
    } while (uVar9 < uVar7);
  }
  Ctor_vt00d9ee30_00bccf30(local_148);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00bff480(local_148,local_130);
  puVar8 = (undefined4 *)FUN_00bccfb0((int)local_148);
  while (puVar8 != (undefined4 *)0x0) {
    pvVar5 = LH_BeginWarningMessage(param_1);
    LH_LogErrorMessage(pvVar5,"Event trigger collision (");
    LH_PrintResourceID(pvVar5,puVar8[1]);
    LH_LogErrorMessage(pvVar5,")");
    (**(code **)*puVar8)(1);
    puVar8 = (undefined4 *)FUN_00bccfb0((int)local_148);
  }
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  Dtor_00bccf50(local_148);
  Ctor_vt00d9ee00_00bcc660(local_148);
  local_4._0_1_ = 6;
  FUN_00bff350(local_148,local_120);
  puVar8 = (undefined4 *)FUN_00bcc6e0((int)local_148);
  if (puVar8 != (undefined4 *)0x0) {
    pvVar5 = LH_BeginWarningMessage(param_1);
    LH_LogErrorMessage(pvVar5,"Event trigger collision (");
    LH_PrintResourceID(pvVar5,*puVar8);
    LH_LogErrorMessage(pvVar5,", ");
    FUN_00bbf750(pvVar5,puVar8 + 1);
    LH_LogErrorMessage(pvVar5,")");
    PKStringsCHeapString_Dtor(puVar8 + 1);
                    /* WARNING: Subroutine does not return */
    _free(puVar8);
  }
  local_4._0_1_ = 1;
  Dtor_00bcc680(local_148);
  thunk_FUN_00bfed50(local_138,local_130);
  thunk_FUN_00bfed90(param_3,local_120);
  local_4 = (uint)local_4._1_3_ << 8;
  Dtor_00bfbd40(local_120);
  local_4 = 0xffffffff;
  Dtor_00bfbd70(local_130);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bfaa10 @ 00bfaa10 ////

void __fastcall
FUN_00bfaa10(int param_1,void *param_2,void *param_3,undefined4 *param_4,void *param_5,char param_6)

{
  int iVar1;
  int iVar2;
  int *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  uint local_48;
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02528;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Ctor_vt00da26d4_00bfe540(local_2c,param_2);
  local_4 = 0;
  Ctor_vt00da26d0_00bfe4e0(local_3c,param_3);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = FUN_00bfbd90((int)local_2c);
  puVar6 = param_4;
  iVar2 = thunk_FUN_00bd38a0((int)param_4);
  FUN_00bfbd80(local_2c,iVar1 + iVar2);
  if (param_6 != '\0') {
    iVar1 = FUN_00bfbd60((int)local_3c);
    iVar2 = thunk_FUN_00bd38a0((int)puVar6);
    FUN_00bfbd50(local_3c,iVar1 + iVar2);
  }
  local_48 = 0;
  iVar1 = thunk_FUN_00bd38a0((int)puVar6);
  if (iVar1 != 0) {
    do {
      this = (int *)thunk_FUN_00bd4040(puVar6,local_48);
      param_4 = (undefined4 *)0x0;
      local_4._0_1_ = 2;
      FUN_00bf9910(param_1,&param_4,this,param_5);
      if (param_4 != (undefined4 *)0x0) {
        iVar1 = PKCAutoDelete_Release_00bfc770((int *)&param_4);
        LH_Container_AddObject_00bfd530(local_2c,iVar1);
        if (param_6 != '\0') {
          puVar3 = operator_new(0xc);
          local_4._0_1_ = 3;
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            Ctor_vt00d9feb8_00be1e00(puVar3 + 1);
          }
          local_4._0_1_ = 2;
          uVar4 = FUN_00bbf720(this,0);
          *puVar3 = uVar4;
          FUN_00be2010(puVar3 + 1,(int)this);
          LH_Container_AddObject_00bfd500(local_3c,(int)puVar3);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      if (param_4 != (undefined4 *)0x0) {
        (**(code **)*param_4)(1);
      }
      local_48 = local_48 + 1;
      uVar5 = thunk_FUN_00bd38a0((int)puVar6);
    } while (local_48 < uVar5);
  }
  Ctor_vt00d9ee30_00bccf30(local_1c);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00bff480(local_1c,local_2c);
  puVar6 = (undefined4 *)FUN_00bccfb0((int)local_1c);
  while (puVar6 != (undefined4 *)0x0) {
    pvVar7 = LH_BeginWarningMessage(param_1);
    LH_LogErrorMessage(pvVar7,"Event trigger collision (");
    LH_PrintResourceID(pvVar7,puVar6[1]);
    LH_LogErrorMessage(pvVar7,")");
    (**(code **)*puVar6)(1);
    puVar6 = (undefined4 *)FUN_00bccfb0((int)local_1c);
  }
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  Dtor_00bccf50(local_1c);
  Ctor_vt00d9ee00_00bcc660(local_1c);
  local_4._0_1_ = 5;
  FUN_00bff350(local_1c,local_3c);
  puVar6 = (undefined4 *)FUN_00bcc6e0((int)local_1c);
  if (puVar6 != (undefined4 *)0x0) {
    pvVar7 = LH_BeginWarningMessage(param_1);
    LH_LogErrorMessage(pvVar7,"Event trigger collision (");
    LH_PrintResourceID(pvVar7,*puVar6);
    LH_LogErrorMessage(pvVar7,", ");
    FUN_00bbf750(pvVar7,puVar6 + 1);
    LH_LogErrorMessage(pvVar7,")");
    PKStringsCHeapString_Dtor(puVar6 + 1);
                    /* WARNING: Subroutine does not return */
    _free(puVar6);
  }
  local_4._0_1_ = 1;
  Dtor_00bcc680(local_1c);
  thunk_FUN_00bfed50(param_2,local_2c);
  thunk_FUN_00bfed90(param_3,local_3c);
  local_4 = (uint)local_4._1_3_ << 8;
  Dtor_00bfbd40(local_3c);
  local_4 = 0xffffffff;
  Dtor_00bfbd70(local_2c);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bface0 @ 00bface0 ////

void __fastcall FUN_00bface0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *this;
  
  FUN_00bf9f10(param_1[2],param_1[1],param_1[1] + 0x74,(void *)(*param_1 + 0x2c));
  this = (void *)(*param_1 + 0x2c);
  uVar3 = 0;
  iVar1 = thunk_FUN_00bd3890((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = thunk_FUN_00bd4010(this,uVar3);
      FUN_00bf97b0(param_1,*(uint *)(iVar1 + 4),(uint)*(ushort *)(iVar1 + 0x14));
      this = (void *)(*param_1 + 0x2c);
      uVar3 = uVar3 + 1;
      uVar2 = thunk_FUN_00bd3890((int)this);
    } while (uVar3 < uVar2);
  }
  return;
}


//// FUNCTION FUN_00bfad40 @ 00bfad40 ////

void __fastcall FUN_00bfad40(int *param_1)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  void *this;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  
  bVar2 = LH_CheckLoadStatus(param_1[2]);
  if (bVar2) {
    iVar3 = FUN_00bf9530(param_1,*(int *)(*param_1 + 8));
    param_1[5] = iVar3;
    iVar3 = FUN_00bf9530(param_1,*(int *)(extraout_EDX + 4));
    param_1[6] = iVar3;
    iVar3 = FUN_00bf9530(this,*(int *)(extraout_EDX_00 + 0xc));
    param_1[7] = iVar3;
    FUN_00bf9c00(param_1[2],(void *)(param_1[1] + 0x5c),param_1[1],(void *)(extraout_EDX_01 + 0x20))
    ;
    bVar2 = LH_CheckLoadStatus(param_1[2]);
    if (bVar2) {
      iVar3 = param_1[1];
      FUN_00bf9da0(param_1[2],iVar3,(void *)(iVar3 + 0x68),(void *)(iVar3 + 0x5c),
                   (void *)(*param_1 + 0x2c));
      bVar2 = LH_CheckLoadStatus(param_1[2]);
      if (bVar2) {
        if (param_1[6] != 0) {
          FUN_00bfa440(param_1[2],(void *)(param_1[6] + 0xc),(void *)(*param_1 + 0x2c),
                       (void *)(param_1[1] + 0x68));
          bVar2 = LH_CheckLoadStatus(param_1[2]);
          if (!bVar2) {
            return;
          }
        }
        FUN_00bface0(param_1);
        bVar2 = LH_CheckLoadStatus(param_1[2]);
        if (bVar2) {
          pvVar1 = (void *)param_1[5];
          if ((pvVar1 != (void *)0x0) && (iVar3 = *param_1, *(int *)(iVar3 + 0x10) != 0)) {
            FUN_00bfa600(param_1[2],pvVar1,(void *)((int)pvVar1 + 0x18),(void *)(iVar3 + 0x20),
                         (void *)(iVar3 + 0x2c),(void *)(param_1[1] + 0x68),(char)param_1[8]);
            bVar2 = LH_CheckLoadStatus(param_1[2]);
            if (!bVar2) {
              return;
            }
          }
          pvVar1 = (void *)param_1[5];
          if (pvVar1 != (void *)0x0) {
            FUN_00bfaa10(param_1[2],pvVar1,(void *)((int)pvVar1 + 0x18),
                         (undefined4 *)(*param_1 + 0x38),(void *)(param_1[1] + 0x68),
                         (char)param_1[8]);
            bVar2 = LH_CheckLoadStatus(param_1[2]);
            if (!bVar2) {
              return;
            }
          }
          if ((void *)param_1[7] != (void *)0x0) {
            FUN_00bfa240(param_1[2],param_1[1],(void *)param_1[7],(void *)(*param_1 + 0x14));
            bVar2 = LH_CheckLoadStatus(param_1[2]);
            if (!bVar2) {
              return;
            }
          }
          if (((char)param_1[8] != '\0') && (param_1[7] != 0)) {
            FUN_00bfa090(param_1[2],(void *)(param_1[7] + 0x18),(void *)(*param_1 + 0x14));
            LH_CheckLoadStatus(param_1[2]);
            return;
          }
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00bfaed0 @ 00bfaed0 ////

int __fastcall FUN_00bfaed0(int param_1)

{
  Ctor_vt00d9feb8_00be1e00((undefined4 *)(param_1 + 4));
  return param_1;
}


//// FUNCTION Ctor_vt00da25d8_00bfaf70 @ 00bfaf70 ////

undefined4 * __fastcall Ctor_vt00da25d8_00bfaf70(undefined4 *param_1)

{
  Ctor_vt00da1428_00be7f30(param_1);
  *param_1 = &PTR_LAB_00da25d8;
  return param_1;
}


//// FUNCTION Ctor_vt00da2674_00bfafa0 @ 00bfafa0 ////

undefined4 * __fastcall Ctor_vt00da2674_00bfafa0(undefined4 *param_1)

{
  Ctor_vt00da1508_00be8830(param_1);
  *param_1 = &PTR_LAB_00da2674;
  return param_1;
}


//// FUNCTION FUN_00bfb030 @ 00bfb030 ////

undefined4 * __thiscall FUN_00bfb030(void *this,undefined4 *param_1)

{
  RedBlackTree_Node_Ctor(this);
  *(undefined4 *)((int)this + 0x14) = *param_1;
  return this;
}


//// FUNCTION FUN_00bfb050 @ 00bfb050 ////

int * __fastcall FUN_00bfb050(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bfb070 @ 00bfb070 ////

void __fastcall FUN_00bfb070(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION LH_Array_Reserve_00bfb0f0 @ 00bfb0f0 ////

void __thiscall LH_Array_Reserve_00bfb0f0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 4) < param_1) {
    uStack_4 = this;
    puVar2 = operator_new(param_1 * 4);
    if (puVar2 == (undefined4 *)0x0) {
      LH_Assert((void *)((int)&uStack_4 + 3),"data != NULL\n");
      DebugBreak();
    }
    if (*(int *)((int)this + 4) != 0) {
      if (*(int *)this == 0) {
        LH_Assert((void *)((int)&uStack_4 + 3),"Data != NULL\n");
        DebugBreak();
      }
      iVar3 = *(int *)((int)this + 8);
      if (iVar3 != 0) {
        puVar4 = *(undefined4 **)this;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    if (*(int *)this != 0) {
      LH_Assert(&param_1,"Data == NULL\n");
      DebugBreak();
    }
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 4) = uVar1;
  }
  return;
}


//// FUNCTION GetField_8_00bfb1b0 @ 00bfb1b0 ////

undefined4 __fastcall GetField_8_00bfb1b0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_00bfb1c0 @ 00bfb1c0 ////

void __thiscall FUN_00bfb1c0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00bfb0f0(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION LH_Array_GetAt_00bfb200 @ 00bfb200 ////

undefined4 __thiscall LH_Array_GetAt_00bfb200(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    return *(undefined4 *)(*(int *)this + uVar1 * 4);
  }
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}


//// FUNCTION LH_Sort_Compare_00bfb240 @ 00bfb240 ////

uint __fastcall LH_Sort_Compare_00bfb240(int *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_4;
  
  uVar5 = param_1[2];
  uVar6 = 1;
  uStack_4 = param_1;
  if (1 < uVar5) {
    do {
      iVar1 = *(int *)(*param_1 + -4 + uVar6 * 4);
      iVar2 = *(int *)(*param_1 + uVar6 * 4);
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( object1 != NULL ) && ( object2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      if (*puVar3 <= *puVar4) {
        return (uint)puVar4 & 0xffffff00;
      }
      uVar5 = param_1[2];
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}


//// FUNCTION LH_Sort_Compare_00bfb2b0 @ 00bfb2b0 ////

uint __fastcall LH_Sort_Compare_00bfb2b0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_4;
  
  uVar5 = param_1[2];
  uVar6 = 1;
  uStack_4 = param_1;
  if (1 < uVar5) {
    do {
      iVar1 = *(int *)(*param_1 + -4 + uVar6 * 4);
      iVar2 = *(int *)(*param_1 + uVar6 * 4);
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( object1 != NULL ) && ( object2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8810(iVar2);
      puVar4 = (uint *)FUN_00be8810(iVar1);
      if (*puVar3 <= *puVar4) {
        return (uint)puVar4 & 0xffffff00;
      }
      uVar5 = param_1[2];
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}


//// FUNCTION LH_Sort_Compare_00bfb320 @ 00bfb320 ////

undefined4 LH_Sort_Compare_00bfb320(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) {
    LH_Assert(&param_1,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  puVar3 = (uint *)FUN_00be8740(iVar2);
  puVar4 = (uint *)FUN_00be8740(iVar1);
  if (*puVar4 < *puVar3) {
    return 0xffffff01;
  }
  return 0;
}


//// FUNCTION LH_Sort_Compare_00bfb380 @ 00bfb380 ////

undefined4 LH_Sort_Compare_00bfb380(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) {
    LH_Assert(&param_1,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  puVar3 = (uint *)FUN_00be7050(iVar2);
  puVar4 = (uint *)FUN_00be7050(iVar1);
  if (*puVar4 < *puVar3) {
    return 0xffffff01;
  }
  return 0;
}


//// FUNCTION LH_Sort_Compare_00bfb4a0 @ 00bfb4a0 ////

undefined4 LH_Sort_Compare_00bfb4a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) {
    LH_Assert(&param_1,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  puVar3 = (uint *)FUN_00be8810(iVar2);
  puVar4 = (uint *)FUN_00be8810(iVar1);
  if (*puVar4 < *puVar3) {
    return 0xffffff01;
  }
  return 0;
}


//// FUNCTION LH_Sort_PushHeap_00bfb540 @ 00bfb540 ////

void __fastcall LH_Sort_PushHeap_00bfb540(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined1 local_5;
  uint *local_4;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  while( true ) {
    iVar3 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar3 * 4);
    if ((iVar1 == 0) || (param_4 == 0)) {
      LH_Assert(&local_5,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    local_4 = (uint *)FUN_00be8740(param_4);
    puVar2 = (uint *)FUN_00be8740(iVar1);
    if (*local_4 <= *puVar2) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    param_2 = iVar3;
    if (iVar3 <= param_3) {
      *(int *)(param_1 + iVar3 * 4) = param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00bfb5f0 @ 00bfb5f0 ////

void __fastcall FUN_00bfb5f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = param_3;
  puVar6 = (undefined4 *)((int)param_3 - (int)param_1 >> 2);
  puVar5 = (undefined4 *)(param_2 - (int)param_1 >> 2);
  puVar7 = puVar5;
  param_3 = puVar6;
  while (puVar2 = puVar7, puVar2 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)((int)param_3 % (int)puVar2);
    param_3 = puVar2;
  }
  if (((int)param_3 < (int)puVar6) && (0 < (int)param_3)) {
    puVar7 = param_1 + (int)param_3;
    do {
      uVar1 = *puVar7;
      puVar6 = puVar7 + (int)puVar5;
      puVar2 = puVar7;
      if (puVar7 + (int)puVar5 == puVar3) {
        puVar6 = param_1;
      }
      while (puVar6 != puVar7) {
        *puVar2 = *puVar6;
        iVar4 = (int)puVar3 - (int)puVar6 >> 2;
        puVar2 = puVar6;
        if ((int)puVar5 < iVar4) {
          puVar6 = puVar6 + (int)puVar5;
        }
        else {
          puVar6 = param_1 + ((int)puVar5 - iVar4);
        }
      }
      *puVar2 = uVar1;
      puVar7 = puVar7 + -1;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
  }
  return;
}


//// FUNCTION LH_Sort_PushHeap_00bfb690 @ 00bfb690 ////

void __fastcall LH_Sort_PushHeap_00bfb690(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined1 local_5;
  uint *local_4;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  while( true ) {
    iVar3 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar3 * 4);
    if ((iVar1 == 0) || (param_4 == 0)) {
      LH_Assert(&local_5,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    local_4 = (uint *)FUN_00be7050(param_4);
    puVar2 = (uint *)FUN_00be7050(iVar1);
    if (*local_4 <= *puVar2) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    param_2 = iVar3;
    if (iVar3 <= param_3) {
      *(int *)(param_1 + iVar3 * 4) = param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00bfb740 @ 00bfb740 ////

void __fastcall FUN_00bfb740(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = param_3;
  puVar6 = (undefined4 *)((int)param_3 - (int)param_1 >> 2);
  puVar5 = (undefined4 *)(param_2 - (int)param_1 >> 2);
  puVar7 = puVar5;
  param_3 = puVar6;
  while (puVar2 = puVar7, puVar2 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)((int)param_3 % (int)puVar2);
    param_3 = puVar2;
  }
  if (((int)param_3 < (int)puVar6) && (0 < (int)param_3)) {
    puVar7 = param_1 + (int)param_3;
    do {
      uVar1 = *puVar7;
      puVar6 = puVar7 + (int)puVar5;
      puVar2 = puVar7;
      if (puVar7 + (int)puVar5 == puVar3) {
        puVar6 = param_1;
      }
      while (puVar6 != puVar7) {
        *puVar2 = *puVar6;
        iVar4 = (int)puVar3 - (int)puVar6 >> 2;
        puVar2 = puVar6;
        if ((int)puVar5 < iVar4) {
          puVar6 = puVar6 + (int)puVar5;
        }
        else {
          puVar6 = param_1 + ((int)puVar5 - iVar4);
        }
      }
      *puVar2 = uVar1;
      puVar7 = puVar7 + -1;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
  }
  return;
}


//// FUNCTION LH_Sort_PushHeap_00bfb800 @ 00bfb800 ////

void __fastcall LH_Sort_PushHeap_00bfb800(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined1 local_5;
  uint *local_4;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  while( true ) {
    iVar3 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar3 * 4);
    if ((iVar1 == 0) || (param_4 == 0)) {
      LH_Assert(&local_5,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    local_4 = (uint *)FUN_00be8810(param_4);
    puVar2 = (uint *)FUN_00be8810(iVar1);
    if (*local_4 <= *puVar2) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    param_2 = iVar3;
    if (iVar3 <= param_3) {
      *(int *)(param_1 + iVar3 * 4) = param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00bfb8b0 @ 00bfb8b0 ////

void __fastcall FUN_00bfb8b0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = param_3;
  puVar6 = (undefined4 *)((int)param_3 - (int)param_1 >> 2);
  puVar5 = (undefined4 *)(param_2 - (int)param_1 >> 2);
  puVar7 = puVar5;
  param_3 = puVar6;
  while (puVar2 = puVar7, puVar2 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)((int)param_3 % (int)puVar2);
    param_3 = puVar2;
  }
  if (((int)param_3 < (int)puVar6) && (0 < (int)param_3)) {
    puVar7 = param_1 + (int)param_3;
    do {
      uVar1 = *puVar7;
      puVar6 = puVar7 + (int)puVar5;
      puVar2 = puVar7;
      if (puVar7 + (int)puVar5 == puVar3) {
        puVar6 = param_1;
      }
      while (puVar6 != puVar7) {
        *puVar2 = *puVar6;
        iVar4 = (int)puVar3 - (int)puVar6 >> 2;
        puVar2 = puVar6;
        if ((int)puVar5 < iVar4) {
          puVar6 = puVar6 + (int)puVar5;
        }
        else {
          puVar6 = param_1 + ((int)puVar5 - iVar4);
        }
      }
      *puVar2 = uVar1;
      puVar7 = puVar7 + -1;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
  }
  return;
}


//// FUNCTION Dtor_00bfb950 @ 00bfb950 ////

void __fastcall Dtor_00bfb950(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da2678;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bfba10 @ 00bfba10 ////

void __fastcall FUN_00bfba10(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00bfbae0 @ 00bfbae0 ////

int * __thiscall ScalarDeletingDtor_00bfbae0(void *this,byte param_1)

{
  thunk_FUN_00bcf880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bfbb00 @ 00bfbb00 ////

undefined4 * __thiscall ScalarDeletingDtor_00bfbb00(void *this,byte param_1)

{
  Dtor_00bfb950(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bfbc20 @ 00bfbc20 ////

void __thiscall FUN_00bfbc20(void *this,undefined4 param_1)

{
  FUN_00bfb1c0(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION Ctor_vt00da26c4_00bfbc40 @ 00bfbc40 ////

undefined4 * __fastcall Ctor_vt00da26c4_00bfbc40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da26c4;
  FUN_00bd0950(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00bfbc60 @ 00bfbc60 ////

void __fastcall Dtor_00bfbc60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da26c4;
  LH_Array_FreeBuffer_00bd0960(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bfbc70 @ 00bfbc70 ////

void __thiscall FUN_00bfbc70(void *this,uint param_1)

{
  LH_Array_Reserve_00bd0c60((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION Ctor_vt00d9f0cc_00bfbc80 @ 00bfbc80 ////

undefined4 * __fastcall Ctor_vt00d9f0cc_00bfbc80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9f0cc;
  FUN_00bd0950(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da26c8_00bfbca0 @ 00bfbca0 ////

undefined4 * __fastcall Ctor_vt00da26c8_00bfbca0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da26c8;
  FUN_00bd0a40(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00bfbcc0 @ 00bfbcc0 ////

void __fastcall Dtor_00bfbcc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da26c8;
  LH_Array_FreeBuffer_00bd0a50(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bfbcd0 @ 00bfbcd0 ////

void __thiscall FUN_00bfbcd0(void *this,uint param_1)

{
  LH_Array_Reserve_00bd0d50((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION Ctor_vt00d9f0d0_00bfbce0 @ 00bfbce0 ////

undefined4 * __fastcall Ctor_vt00d9f0d0_00bfbce0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9f0d0;
  FUN_00bd0a40(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da26cc_00bfbd00 @ 00bfbd00 ////

undefined4 * __fastcall Ctor_vt00da26cc_00bfbd00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da26cc;
  FUN_00bd0b30(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00bfbd20 @ 00bfbd20 ////

void __fastcall Dtor_00bfbd20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da26cc;
  LH_Array_FreeBuffer_00bd0b40(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bfbd30 @ 00bfbd30 ////

void __thiscall FUN_00bfbd30(void *this,uint param_1)

{
  LH_Array_Reserve_00bd0e40((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION Dtor_00bfbd40 @ 00bfbd40 ////

void __fastcall Dtor_00bfbd40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da26d0;
  LH_Array_FreeBuffer_00bcc0f0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bfbd50 @ 00bfbd50 ////

void __thiscall FUN_00bfbd50(void *this,uint param_1)

{
  LH_Array_Reserve_00bcc2a0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfbd60 @ 00bfbd60 ////

void __fastcall FUN_00bfbd60(int param_1)

{
  GetField_8_00bcc0a0(param_1 + 4);
  return;
}


//// FUNCTION Dtor_00bfbd70 @ 00bfbd70 ////

void __fastcall Dtor_00bfbd70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da26d4;
  LH_Array_FreeBuffer_00bcc840(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bfbd80 @ 00bfbd80 ////

void __thiscall FUN_00bfbd80(void *this,uint param_1)

{
  LH_Array_Reserve_00bcc1b0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfbd90 @ 00bfbd90 ////

void __fastcall FUN_00bfbd90(int param_1)

{
  GetField_8_00bcbbd0(param_1 + 4);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bfbda0 @ 00bfbda0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bfbda0(void *this,byte param_1)

{
  Dtor_00bfbc60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bfbdc0 @ 00bfbdc0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bfbdc0(void *this,byte param_1)

{
  Dtor_00bfbcc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bfbde0 @ 00bfbde0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bfbde0(void *this,byte param_1)

{
  Dtor_00bfbd20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bfbe00 @ 00bfbe00 ////

undefined4 * __thiscall ScalarDeletingDtor_00bfbe00(void *this,byte param_1)

{
  Dtor_00bfbd40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bfbe20 @ 00bfbe20 ////

undefined4 * __thiscall ScalarDeletingDtor_00bfbe20(void *this,byte param_1)

{
  Dtor_00bfbd70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_Map_GetObject_00bfbe40 @ 00bfbe40 ////

int __thiscall LH_Map_GetObject_00bfbe40(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = LH_Array_GetAt_00bfb200(this,param_1);
  if (iVar1 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar1;
}


//// FUNCTION FUN_00bfbe80 @ 00bfbe80 ////

void __thiscall FUN_00bfbe80(void *this,undefined4 param_1)

{
  FUN_00bd0f30(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00bfbeb0 @ 00bfbeb0 ////

void __thiscall FUN_00bfbeb0(void *this,undefined4 param_1)

{
  FUN_00bd0f70(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00bfbed0 @ 00bfbed0 ////

void __thiscall FUN_00bfbed0(void *this,undefined4 param_1)

{
  FUN_00bd0fb0(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00bfbf00 @ 00bfbf00 ////

void __thiscall FUN_00bfbf00(void *this,undefined4 param_1)

{
  FUN_00bcc3d0(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00bfbf30 @ 00bfbf30 ////

void __thiscall FUN_00bfbf30(void *this,undefined4 param_1)

{
  FUN_00bcc390(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00bfbf50 @ 00bfbf50 ////

void __thiscall FUN_00bfbf50(void *this,undefined4 *param_1)

{
  FUN_00bd13e0((int)this);
  FUN_00bd17f0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION LH_Sort_Compare_00bfbf70 @ 00bfbf70 ////

uint __fastcall LH_Sort_Compare_00bfbf70(int *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_4;
  
  uVar5 = param_1[2];
  uVar6 = 1;
  uStack_4 = param_1;
  if (1 < uVar5) {
    do {
      iVar1 = *(int *)(*param_1 + -4 + uVar6 * 4);
      iVar2 = *(int *)(*param_1 + uVar6 * 4);
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( object1 != NULL ) && ( object2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8740(iVar2);
      puVar4 = (uint *)FUN_00be8740(iVar1);
      if (*puVar3 <= *puVar4) {
        return (uint)puVar4 & 0xffffff00;
      }
      uVar5 = param_1[2];
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}


//// FUNCTION FUN_00bfbfe0 @ 00bfbfe0 ////

void __thiscall FUN_00bfbfe0(void *this,undefined4 *param_1)

{
  FUN_00bd1430((int)this);
  FUN_00bd1840((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfc020 @ 00bfc020 ////

void __fastcall FUN_00bfc020(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = LH_Sort_Compare_00bfb320(*param_2,*param_1);
  if ((char)uVar2 != '\0') {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  uVar2 = LH_Sort_Compare_00bfb320(*param_3,*param_2);
  if ((char)uVar2 != '\0') {
    iVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  uVar2 = LH_Sort_Compare_00bfb320(*param_2,*param_1);
  if ((char)uVar2 != '\0') {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}


//// FUNCTION FUN_00bfc090 @ 00bfc090 ////

void __fastcall FUN_00bfc090(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined1 local_9;
  int local_8;
  int local_4;
  
  local_8 = param_2;
  local_4 = param_2;
  while( true ) {
    iVar3 = local_8 * 2;
    iVar6 = iVar3 + 2;
    if (param_3 <= iVar6) break;
    iVar1 = *(int *)(param_1 + iVar6 * 4);
    iVar2 = *(int *)(param_1 + -4 + iVar6 * 4);
    if ((iVar1 == 0) || (iVar2 == 0)) {
      LH_Assert(&local_9,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    puVar4 = (uint *)FUN_00be8740(iVar2);
    puVar5 = (uint *)FUN_00be8740(iVar1);
    if (*puVar5 < *puVar4) {
      iVar6 = iVar3 + 1;
    }
    *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
    local_8 = iVar6;
  }
  if (iVar6 == param_3) {
    *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    local_8 = param_3 + -1;
  }
  LH_Sort_PushHeap_00bfb540(param_1,local_8,local_4,param_4);
  return;
}


//// FUNCTION FUN_00bfc160 @ 00bfc160 ////

void __fastcall FUN_00bfc160(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = LH_Sort_Compare_00bfb380(*param_2,*param_1);
  if ((char)uVar2 != '\0') {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  uVar2 = LH_Sort_Compare_00bfb380(*param_3,*param_2);
  if ((char)uVar2 != '\0') {
    iVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  uVar2 = LH_Sort_Compare_00bfb380(*param_2,*param_1);
  if ((char)uVar2 != '\0') {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}


//// FUNCTION FUN_00bfc1d0 @ 00bfc1d0 ////

void __fastcall FUN_00bfc1d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined1 local_9;
  int local_8;
  int local_4;
  
  local_8 = param_2;
  local_4 = param_2;
  while( true ) {
    iVar3 = local_8 * 2;
    iVar6 = iVar3 + 2;
    if (param_3 <= iVar6) break;
    iVar1 = *(int *)(param_1 + iVar6 * 4);
    iVar2 = *(int *)(param_1 + -4 + iVar6 * 4);
    if ((iVar1 == 0) || (iVar2 == 0)) {
      LH_Assert(&local_9,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    puVar4 = (uint *)FUN_00be7050(iVar2);
    puVar5 = (uint *)FUN_00be7050(iVar1);
    if (*puVar5 < *puVar4) {
      iVar6 = iVar3 + 1;
    }
    *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
    local_8 = iVar6;
  }
  if (iVar6 == param_3) {
    *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    local_8 = param_3 + -1;
  }
  LH_Sort_PushHeap_00bfb690(param_1,local_8,local_4,param_4);
  return;
}


//// FUNCTION FUN_00bfc310 @ 00bfc310 ////

void __fastcall FUN_00bfc310(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = LH_Sort_Compare_00bfb4a0(*param_2,*param_1);
  if ((char)uVar2 != '\0') {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  uVar2 = LH_Sort_Compare_00bfb4a0(*param_3,*param_2);
  if ((char)uVar2 != '\0') {
    iVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  uVar2 = LH_Sort_Compare_00bfb4a0(*param_2,*param_1);
  if ((char)uVar2 != '\0') {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}


//// FUNCTION FUN_00bfc380 @ 00bfc380 ////

void __fastcall FUN_00bfc380(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined1 local_9;
  int local_8;
  int local_4;
  
  local_8 = param_2;
  local_4 = param_2;
  while( true ) {
    iVar3 = local_8 * 2;
    iVar6 = iVar3 + 2;
    if (param_3 <= iVar6) break;
    iVar1 = *(int *)(param_1 + iVar6 * 4);
    iVar2 = *(int *)(param_1 + -4 + iVar6 * 4);
    if ((iVar1 == 0) || (iVar2 == 0)) {
      LH_Assert(&local_9,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    puVar4 = (uint *)FUN_00be8810(iVar2);
    puVar5 = (uint *)FUN_00be8810(iVar1);
    if (*puVar5 < *puVar4) {
      iVar6 = iVar3 + 1;
    }
    *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
    local_8 = iVar6;
  }
  if (iVar6 == param_3) {
    *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    local_8 = param_3 + -1;
  }
  LH_Sort_PushHeap_00bfb800(param_1,local_8,local_4,param_4);
  return;
}


//// FUNCTION PKCAutoDeleteArray_Resize_00bfc480 @ 00bfc480 ////

void __thiscall PKCAutoDeleteArray_Resize_00bfc480(void *this,uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  LPCSTR pCVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02289;
  local_c = ExceptionList;
  if (param_1 != *(uint *)((int)this + 4)) {
    puVar5 = (uint *)0x0;
    if (param_1 == 0) {
      if (*(uint *)((int)this + 4) != 0) {
        puVar1 = *(undefined4 **)this;
        if (puVar1 != (undefined4 *)0x0) {
          if (puVar1[-1] != 0) {
            ExceptionList = &local_c;
            (**(code **)*puVar1)(3);
            *(undefined4 *)this = 0;
            *(undefined4 *)((int)this + 4) = 0;
            ExceptionList = local_c;
            return;
          }
          ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
          _free(puVar1 + -1);
        }
        *(undefined4 *)this = 0;
      }
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      ExceptionList = &local_c;
      puVar3 = operator_new(param_1 * 0x24 + 4);
      local_4 = 0;
      if (puVar3 != (uint *)0x0) {
        puVar5 = puVar3 + 1;
        *puVar3 = param_1;
        _eh_vector_constructor_iterator_(puVar5,0x24,param_1,Ctor_vt00da6a10_00c36330,Dtor_00c36350);
      }
      local_4 = 0xffffffff;
      if (puVar5 == (uint *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x46);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_111,pCVar4);
        local_4 = 0xffffffff;
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      uVar6 = param_1;
      if (*(uint *)((int)this + 4) < param_1) {
        uVar6 = *(uint *)((int)this + 4);
      }
      if (uVar6 != 0) {
        puVar3 = puVar5 + 2;
        do {
          iVar2 = *(int *)this + (-8 - (int)puVar5);
          puVar3[-1] = *(uint *)((int)puVar3 + iVar2 + 4);
          *puVar3 = *(uint *)((int)puVar3 + iVar2 + 8);
          puVar3[1] = *(uint *)((int)puVar3 + iVar2 + 0xc);
          puVar3[2] = *(uint *)((int)puVar3 + iVar2 + 0x10);
          *(undefined2 *)(puVar3 + 3) = *(undefined2 *)((int)puVar3 + iVar2 + 0x14);
          *(undefined2 *)((int)puVar3 + 0xe) = *(undefined2 *)((int)puVar3 + iVar2 + 0x16);
          puVar3[4] = *(uint *)((int)puVar3 + iVar2 + 0x18);
          puVar3[5] = *(uint *)((int)puVar3 + iVar2 + 0x1c);
          puVar3[6] = *(uint *)((int)puVar3 + iVar2 + 0x20);
          puVar3 = puVar3 + 9;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar1 = *(undefined4 **)this;
      if (puVar1 != (undefined4 *)0x0) {
        if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
          _free(puVar1 + -1);
        }
        (**(code **)*puVar1)(3);
      }
      *(uint **)this = puVar5;
      *(uint *)((int)this + 4) = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bfc680 @ 00bfc680 ////

void __thiscall FUN_00bfc680(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d022ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x18);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    RedBlackTree_Node_Ctor(puVar1);
    puVar1[5] = *param_1;
  }
  local_4 = 0xffffffff;
  if (puVar1 == (undefined4 *)0x0) {
    LH_Assert(&param_1,"i != NULL\n");
    DebugBreak();
  }
  FUN_00bcfac0((void *)((int)this + 4),this,(int)puVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Dtor_00bfc760 @ 00bfc760 ////

void __fastcall Dtor_00bfc760(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da2678;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION PKCAutoDelete_Release_00bfc770 @ 00bfc770 ////

int __fastcall PKCAutoDelete_Release_00bfc770(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d022cb;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Shouls have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  iVar1 = *param_1;
  *param_1 = 0;
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION PKCAutoDelete_Set_00bfc840 @ 00bfc840 ////

void __thiscall PKCAutoDelete_Set_00bfc840(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d022f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x36);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Leak!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x37);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00da2678_00bfc9e0 @ 00bfc9e0 ////

undefined4 * __fastcall Ctor_vt00da2678_00bfc9e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da2678;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION PKCAutoDeleteArray_At_00bfca20 @ 00bfca20 ////

int __thiscall PKCAutoDeleteArray_At_00bfca20(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0230b;
  local_c = ExceptionList;
  if (*(uint *)((int)this + 4) <= param_1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Index ");
    LH_PrintResourceID(&local_110,param_1);
    LH_LogErrorMessage(&local_110," is out of range (");
    LH_PrintResourceID(&local_110,*(undefined4 *)((int)this + 4));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *(int *)this + param_1 * 0x24;
}


//// FUNCTION PKCAutoDeleteArray_At_00bfcb30 @ 00bfcb30 ////

int __thiscall PKCAutoDeleteArray_At_00bfcb30(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0232b;
  local_c = ExceptionList;
  if (*(uint *)((int)this + 4) <= param_1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Index ");
    LH_PrintResourceID(&local_110,param_1);
    LH_LogErrorMessage(&local_110," is out of range (");
    LH_PrintResourceID(&local_110,*(undefined4 *)((int)this + 4));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return param_1 * 0x34 + *(int *)this;
}


//// FUNCTION PKCAutoDeleteArray_At_00bfcc40 @ 00bfcc40 ////

int __thiscall PKCAutoDeleteArray_At_00bfcc40(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0234b;
  local_c = ExceptionList;
  if (*(uint *)((int)this + 4) <= param_1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Index ");
    LH_PrintResourceID(&local_110,param_1);
    LH_LogErrorMessage(&local_110," is out of range (");
    LH_PrintResourceID(&local_110,*(undefined4 *)((int)this + 4));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *(int *)this + param_1 * 0x28;
}


//// FUNCTION FUN_00bfcd80 @ 00bfcd80 ////

void __thiscall FUN_00bfcd80(void *this,undefined4 param_1)

{
  FUN_00bfbe80((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfcd90 @ 00bfcd90 ////

void __thiscall FUN_00bfcd90(void *this,undefined4 param_1)

{
  FUN_00bfbeb0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfcda0 @ 00bfcda0 ////

void __thiscall FUN_00bfcda0(void *this,undefined4 param_1)

{
  FUN_00bfbed0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfcdb0 @ 00bfcdb0 ////

void __thiscall FUN_00bfcdb0(void *this,undefined4 param_1)

{
  FUN_00bfbf00((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfcdc0 @ 00bfcdc0 ////

void __thiscall FUN_00bfcdc0(void *this,undefined4 param_1)

{
  FUN_00bfbf30((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfcdd0 @ 00bfcdd0 ////

void __thiscall FUN_00bfcdd0(void *this,undefined4 *param_1)

{
  FUN_00bd17f0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfcde0 @ 00bfcde0 ////

void __thiscall FUN_00bfcde0(void *this,undefined4 *param_1)

{
  FUN_00bd1840((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfcdf0 @ 00bfcdf0 ////

void __thiscall FUN_00bfcdf0(void *this,undefined4 *param_1)

{
  FUN_00bcd0a0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfce00 @ 00bfce00 ////

void __thiscall FUN_00bfce00(void *this,undefined4 *param_1)

{
  FUN_00bcd050((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfce10 @ 00bfce10 ////

void __thiscall FUN_00bfce10(void *this,undefined4 *param_1)

{
  FUN_00bd1890((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bfce20 @ 00bfce20 ////

void __fastcall FUN_00bfce20(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00bfc020(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_00bfc020(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_00bfc020(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_00bfc020(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_00bfc020(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00bfcec0 @ 00bfcec0 ////

void __fastcall FUN_00bfcec0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    FUN_00bfc090(param_1,iVar3,iVar2,*(int *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00bfcf20 @ 00bfcf20 ////

void __fastcall FUN_00bfcf20(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00bfc160(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_00bfc160(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_00bfc160(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_00bfc160(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_00bfc160(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00bfcfc0 @ 00bfcfc0 ////

void __fastcall FUN_00bfcfc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    FUN_00bfc1d0(param_1,iVar3,iVar2,*(int *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00bfd080 @ 00bfd080 ////

void __fastcall FUN_00bfd080(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00bfc310(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_00bfc310(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_00bfc310(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_00bfc310(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_00bfc310(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00bfd120 @ 00bfd120 ////

void __fastcall FUN_00bfd120(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    FUN_00bfc380(param_1,iVar3,iVar2,*(int *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION PKCAutoDeleteArray_Resize_00bfd1d0 @ 00bfd1d0 ////

void __thiscall PKCAutoDeleteArray_Resize_00bfd1d0(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  LPCSTR pCVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *local_11c;
  uint local_118;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02379;
  local_c = ExceptionList;
  if (param_1 != *(uint *)((int)this + 4)) {
    if (param_1 == 0) {
      if (*(uint *)((int)this + 4) != 0) {
        piVar1 = *(int **)this;
        if (piVar1 != (int *)0x0) {
          if (piVar1[-1] != 0) {
            ExceptionList = &local_c;
            (**(code **)(*piVar1 + 0x90))(3);
            *(undefined4 *)this = 0;
            *(undefined4 *)((int)this + 4) = 0;
            ExceptionList = local_c;
            return;
          }
          ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
          _free(piVar1 + -1);
        }
        *(undefined4 *)this = 0;
      }
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      ExceptionList = &local_c;
      puVar3 = operator_new(param_1 * 0x34 + 4);
      local_4 = 0;
      if (puVar3 == (uint *)0x0) {
        local_11c = (uint *)0x0;
      }
      else {
        local_11c = puVar3 + 1;
        *puVar3 = param_1;
        _eh_vector_constructor_iterator_(local_11c,0x34,param_1,Ctor_vt00da25d8_00bfaf70,thunk_FUN_00be70b0);
      }
      local_4 = 0xffffffff;
      if (local_11c == (uint *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x46);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_111,pCVar4);
        local_4 = 0xffffffff;
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      local_118 = param_1;
      if (*(uint *)((int)this + 4) < param_1) {
        local_118 = *(uint *)((int)this + 4);
      }
      if (local_118 != 0) {
        puVar3 = local_11c + 2;
        do {
          iVar2 = *(int *)this + -(int)local_11c + -8;
          puVar3[-1] = *(uint *)((int)puVar3 + *(int *)this + -(int)local_11c + -4);
          puVar6 = (uint *)((int)puVar3 + iVar2 + 8);
          puVar7 = puVar3;
          for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar3[10] = *(uint *)((int)puVar3 + iVar2 + 0x30);
          puVar3 = puVar3 + 0xd;
          local_118 = local_118 - 1;
        } while (local_118 != 0);
      }
      piVar1 = *(int **)this;
      if (piVar1 != (int *)0x0) {
        if (piVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
          _free(piVar1 + -1);
        }
        (**(code **)(*piVar1 + 0x90))(3);
      }
      *(uint **)this = local_11c;
      *(uint *)((int)this + 4) = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bfd410 @ 00bfd410 ////

void __fastcall FUN_00bfd410(int *param_1)

{
  int *this;
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02398;
  local_c = ExceptionList;
  this = param_1 + 1;
  local_4 = 0;
  ExceptionList = &local_c;
  _Memory = (int *)RedBlackTree_GetMinObject(this);
  while( true ) {
    if (_Memory == (int *)0x0) {
      local_4 = 0xffffffff;
      *param_1 = (int)&PTR_LAB_00da2678;
      RedBlackTree_Dtor(this);
      ExceptionList = local_c;
      return;
    }
    FUN_00bcff70(this,param_1,(int)_Memory);
    if (_Memory != (int *)0x0) break;
    _Memory = (int *)RedBlackTree_GetMinObject(this);
  }
  RedBlackTree_Node_Dtor(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION Ctor_vt00da273c_00bfd4a0 @ 00bfd4a0 ////

undefined4 * __fastcall Ctor_vt00da273c_00bfd4a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da2678;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da273c;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bfd4c0 @ 00bfd4c0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bfd4c0(void *this,byte param_1)

{
  Dtor_00bfc760(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_Container_AddObject_00bfd500 @ 00bfd500 ////

void __thiscall LH_Container_AddObject_00bfd500(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    LH_Assert(&param_1,"Object != NULL\n");
    DebugBreak();
  }
  FUN_00bfcdb0(this,iVar1);
  return;
}


//// FUNCTION LH_Container_AddObject_00bfd530 @ 00bfd530 ////

void __thiscall LH_Container_AddObject_00bfd530(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    LH_Assert(&param_1,"Object != NULL\n");
    DebugBreak();
  }
  FUN_00bfcdc0(this,iVar1);
  return;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00bfd560 @ 00bfd560 ////

void __thiscall LH_Array_AdoptRequireEmpty_00bfd560(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd0910((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00bd17f0(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00bfd5a0 @ 00bfd5a0 ////

void __thiscall LH_Array_AdoptRequireEmpty_00bfd5a0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd0a00((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00bd1840(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00bfd5e0 @ 00bfd5e0 ////

void __thiscall LH_Array_AdoptRequireEmpty_00bfd5e0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bcc0a0((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00bcd0a0(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00bfd620 @ 00bfd620 ////

void __thiscall LH_Array_AdoptRequireEmpty_00bfd620(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bcbbd0((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00bcd050(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION LH_Sort_UnguardedPartition_00bfd660 @ 00bfd660 ////

void __fastcall LH_Sort_UnguardedPartition_00bfd660(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  undefined4 *local_4;
  
  piVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_8 = param_2;
  local_4 = param_1;
  FUN_00bfce20(param_2,piVar5,param_3 + -1);
  piVar7 = piVar5 + 1;
  local_10 = piVar7;
  if (param_2 < piVar5) {
    while( true ) {
      iVar1 = piVar5[-1];
      iVar2 = *piVar5;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8740(iVar2);
      puVar4 = (uint *)FUN_00be8740(iVar1);
      if (*puVar4 < *puVar3) break;
      iVar1 = *piVar5;
      iVar2 = piVar5[-1];
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8740(iVar2);
      puVar4 = (uint *)FUN_00be8740(iVar1);
      if ((*puVar4 < *puVar3) || (piVar5 = piVar5 + -1, piVar5 <= local_8)) break;
    }
  }
  piVar8 = piVar7;
  piVar9 = local_10;
  local_c = piVar5;
  piVar6 = piVar5;
  if (piVar7 < param_3) {
    while( true ) {
      iVar1 = *piVar7;
      iVar2 = *piVar5;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8740(iVar2);
      puVar4 = (uint *)FUN_00be8740(iVar1);
      piVar8 = piVar7;
      piVar9 = piVar7;
      if (*puVar4 < *puVar3) break;
      iVar1 = *piVar5;
      iVar2 = *piVar7;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8740(iVar2);
      puVar4 = (uint *)FUN_00be8740(iVar1);
      if ((*puVar4 < *puVar3) ||
         (piVar7 = piVar7 + 1, piVar8 = piVar7, piVar9 = piVar7, param_3 <= piVar7)) break;
    }
  }
joined_r0x00bfd7a8:
  do {
    local_10 = piVar9;
    if (param_3 <= piVar7) {
LAB_00bfd84c:
      bVar10 = piVar5 == local_8;
      piVar9 = piVar8;
      if (local_8 < piVar5) {
        do {
          iVar1 = piVar5[-1];
          iVar2 = *piVar6;
          if ((iVar1 == 0) || (iVar2 == 0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          puVar3 = (uint *)FUN_00be8740(iVar2);
          puVar4 = (uint *)FUN_00be8740(iVar1);
          if (*puVar3 <= *puVar4) {
            iVar1 = *piVar6;
            iVar2 = local_c[-1];
            if ((iVar1 == 0) || (iVar2 == 0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            puVar3 = (uint *)FUN_00be8740(iVar2);
            puVar4 = (uint *)FUN_00be8740(iVar1);
            if (*puVar4 < *puVar3) break;
            iVar1 = piVar6[-1];
            piVar6 = piVar6 + -1;
            *piVar6 = local_c[-1];
            local_c[-1] = iVar1;
          }
          piVar5 = local_c + -1;
          local_c = piVar5;
        } while (local_8 < piVar5);
        bVar10 = local_c == local_8;
        piVar5 = local_c;
        piVar9 = local_10;
      }
      if (bVar10) {
        if (piVar7 == param_3) {
          local_4[1] = piVar9;
          *local_4 = piVar6;
          return;
        }
        if (piVar9 != piVar7) {
          iVar1 = *piVar6;
          *piVar6 = *piVar9;
          *piVar9 = iVar1;
        }
        iVar1 = *piVar6;
        *piVar6 = *piVar7;
        *piVar7 = iVar1;
        piVar7 = piVar7 + 1;
        piVar8 = piVar9 + 1;
        piVar9 = piVar9 + 1;
        piVar6 = piVar6 + 1;
      }
      else {
        piVar5 = piVar5 + -1;
        local_c = piVar5;
        if (piVar7 == param_3) {
          piVar6 = piVar6 + -1;
          if (piVar5 != piVar6) {
            iVar1 = *piVar5;
            *piVar5 = *piVar6;
            *piVar6 = iVar1;
          }
          iVar1 = *piVar6;
          piVar8 = piVar9 + -1;
          *piVar6 = piVar9[-1];
          *piVar8 = iVar1;
          piVar9 = piVar8;
        }
        else {
          iVar1 = *piVar7;
          *piVar7 = *piVar5;
          *piVar5 = iVar1;
          piVar7 = piVar7 + 1;
          piVar8 = piVar9;
          piVar9 = local_10;
        }
      }
      goto joined_r0x00bfd7a8;
    }
    iVar1 = *piVar6;
    iVar2 = *piVar7;
    if ((iVar1 == 0) || (iVar2 == 0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    puVar3 = (uint *)FUN_00be8740(iVar2);
    puVar4 = (uint *)FUN_00be8740(iVar1);
    if (*puVar3 <= *puVar4) {
      iVar1 = *piVar7;
      iVar2 = *piVar6;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8740(iVar2);
      puVar4 = (uint *)FUN_00be8740(iVar1);
      piVar5 = local_c;
      piVar8 = local_10;
      if (*puVar4 < *puVar3) goto LAB_00bfd84c;
      iVar1 = *local_10;
      *local_10 = *piVar7;
      *piVar7 = iVar1;
      local_10 = local_10 + 1;
    }
    piVar7 = piVar7 + 1;
    piVar5 = local_c;
    piVar8 = local_10;
    piVar9 = local_10;
  } while( true );
}


//// FUNCTION LH_Sort_InsertionSort_00bfd9c0 @ 00bfd9c0 ////

void __fastcall LH_Sort_InsertionSort_00bfd9c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  if ((param_1 != param_2) && (piVar6 = param_1 + 1, piVar6 != param_2)) {
    local_10 = param_1 + 2;
    local_8 = param_1;
    local_4 = param_2;
    do {
      iVar1 = *piVar6;
      iVar2 = *param_1;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8740(iVar2);
      puVar4 = (uint *)FUN_00be8740(iVar1);
      piVar5 = piVar6;
      if (*puVar4 < *puVar3) {
        if ((param_1 != piVar6) && (piVar6 != local_10)) {
          FUN_00bfb5f0(param_1,(int)piVar6,local_10);
        }
      }
      else {
        do {
          iVar1 = *piVar6;
          iVar2 = piVar5[-1];
          local_c = piVar5;
          if ((iVar1 == 0) || (iVar2 == 0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          puVar3 = (uint *)FUN_00be8740(iVar2);
          puVar4 = (uint *)FUN_00be8740(iVar1);
          piVar5 = piVar5 + -1;
        } while (*puVar4 < *puVar3);
        param_1 = local_8;
        if ((local_c != piVar6) && (piVar6 != local_10)) {
          FUN_00bfb5f0(local_c,(int)piVar6,local_10);
          param_1 = local_8;
        }
      }
      piVar6 = piVar6 + 1;
      local_10 = local_10 + 1;
    } while (piVar6 != local_4);
  }
  return;
}


//// FUNCTION LH_Sort_UnguardedPartition_00bfdae0 @ 00bfdae0 ////

void __fastcall LH_Sort_UnguardedPartition_00bfdae0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  undefined4 *local_4;
  
  piVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_8 = param_2;
  local_4 = param_1;
  FUN_00bfcf20(param_2,piVar5,param_3 + -1);
  piVar7 = piVar5 + 1;
  local_10 = piVar7;
  if (param_2 < piVar5) {
    while( true ) {
      iVar1 = piVar5[-1];
      iVar2 = *piVar5;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      if (*puVar4 < *puVar3) break;
      iVar1 = *piVar5;
      iVar2 = piVar5[-1];
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      if ((*puVar4 < *puVar3) || (piVar5 = piVar5 + -1, piVar5 <= local_8)) break;
    }
  }
  piVar8 = piVar7;
  piVar9 = local_10;
  local_c = piVar5;
  piVar6 = piVar5;
  if (piVar7 < param_3) {
    while( true ) {
      iVar1 = *piVar7;
      iVar2 = *piVar5;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      piVar8 = piVar7;
      piVar9 = piVar7;
      if (*puVar4 < *puVar3) break;
      iVar1 = *piVar5;
      iVar2 = *piVar7;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      if ((*puVar4 < *puVar3) ||
         (piVar7 = piVar7 + 1, piVar8 = piVar7, piVar9 = piVar7, param_3 <= piVar7)) break;
    }
  }
joined_r0x00bfdc28:
  do {
    local_10 = piVar9;
    if (param_3 <= piVar7) {
LAB_00bfdccc:
      bVar10 = piVar5 == local_8;
      piVar9 = piVar8;
      if (local_8 < piVar5) {
        do {
          iVar1 = piVar5[-1];
          iVar2 = *piVar6;
          if ((iVar1 == 0) || (iVar2 == 0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          puVar3 = (uint *)FUN_00be7050(iVar2);
          puVar4 = (uint *)FUN_00be7050(iVar1);
          if (*puVar3 <= *puVar4) {
            iVar1 = *piVar6;
            iVar2 = local_c[-1];
            if ((iVar1 == 0) || (iVar2 == 0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            puVar3 = (uint *)FUN_00be7050(iVar2);
            puVar4 = (uint *)FUN_00be7050(iVar1);
            if (*puVar4 < *puVar3) break;
            iVar1 = piVar6[-1];
            piVar6 = piVar6 + -1;
            *piVar6 = local_c[-1];
            local_c[-1] = iVar1;
          }
          piVar5 = local_c + -1;
          local_c = piVar5;
        } while (local_8 < piVar5);
        bVar10 = local_c == local_8;
        piVar5 = local_c;
        piVar9 = local_10;
      }
      if (bVar10) {
        if (piVar7 == param_3) {
          local_4[1] = piVar9;
          *local_4 = piVar6;
          return;
        }
        if (piVar9 != piVar7) {
          iVar1 = *piVar6;
          *piVar6 = *piVar9;
          *piVar9 = iVar1;
        }
        iVar1 = *piVar6;
        *piVar6 = *piVar7;
        *piVar7 = iVar1;
        piVar7 = piVar7 + 1;
        piVar8 = piVar9 + 1;
        piVar9 = piVar9 + 1;
        piVar6 = piVar6 + 1;
      }
      else {
        piVar5 = piVar5 + -1;
        local_c = piVar5;
        if (piVar7 == param_3) {
          piVar6 = piVar6 + -1;
          if (piVar5 != piVar6) {
            iVar1 = *piVar5;
            *piVar5 = *piVar6;
            *piVar6 = iVar1;
          }
          iVar1 = *piVar6;
          piVar8 = piVar9 + -1;
          *piVar6 = piVar9[-1];
          *piVar8 = iVar1;
          piVar9 = piVar8;
        }
        else {
          iVar1 = *piVar7;
          *piVar7 = *piVar5;
          *piVar5 = iVar1;
          piVar7 = piVar7 + 1;
          piVar8 = piVar9;
          piVar9 = local_10;
        }
      }
      goto joined_r0x00bfdc28;
    }
    iVar1 = *piVar6;
    iVar2 = *piVar7;
    if ((iVar1 == 0) || (iVar2 == 0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    puVar3 = (uint *)FUN_00be7050(iVar2);
    puVar4 = (uint *)FUN_00be7050(iVar1);
    if (*puVar3 <= *puVar4) {
      iVar1 = *piVar7;
      iVar2 = *piVar6;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      piVar5 = local_c;
      piVar8 = local_10;
      if (*puVar4 < *puVar3) goto LAB_00bfdccc;
      iVar1 = *local_10;
      *local_10 = *piVar7;
      *piVar7 = iVar1;
      local_10 = local_10 + 1;
    }
    piVar7 = piVar7 + 1;
    piVar5 = local_c;
    piVar8 = local_10;
    piVar9 = local_10;
  } while( true );
}


//// FUNCTION LH_Sort_InsertionSort_00bfde40 @ 00bfde40 ////

void __fastcall LH_Sort_InsertionSort_00bfde40(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  if ((param_1 != param_2) && (piVar6 = param_1 + 1, piVar6 != param_2)) {
    local_10 = param_1 + 2;
    local_8 = param_1;
    local_4 = param_2;
    do {
      iVar1 = *piVar6;
      iVar2 = *param_1;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      piVar5 = piVar6;
      if (*puVar4 < *puVar3) {
        if ((param_1 != piVar6) && (piVar6 != local_10)) {
          FUN_00bfb740(param_1,(int)piVar6,local_10);
        }
      }
      else {
        do {
          iVar1 = *piVar6;
          iVar2 = piVar5[-1];
          local_c = piVar5;
          if ((iVar1 == 0) || (iVar2 == 0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          puVar3 = (uint *)FUN_00be7050(iVar2);
          puVar4 = (uint *)FUN_00be7050(iVar1);
          piVar5 = piVar5 + -1;
        } while (*puVar4 < *puVar3);
        param_1 = local_8;
        if ((local_c != piVar6) && (piVar6 != local_10)) {
          FUN_00bfb740(local_c,(int)piVar6,local_10);
          param_1 = local_8;
        }
      }
      piVar6 = piVar6 + 1;
      local_10 = local_10 + 1;
    } while (piVar6 != local_4);
  }
  return;
}


//// FUNCTION LH_Sort_UnguardedPartition_00bfdfe0 @ 00bfdfe0 ////

void __fastcall LH_Sort_UnguardedPartition_00bfdfe0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  undefined4 *local_4;
  
  piVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_8 = param_2;
  local_4 = param_1;
  FUN_00bfd080(param_2,piVar5,param_3 + -1);
  piVar7 = piVar5 + 1;
  local_10 = piVar7;
  if (param_2 < piVar5) {
    while( true ) {
      iVar1 = piVar5[-1];
      iVar2 = *piVar5;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8810(iVar2);
      puVar4 = (uint *)FUN_00be8810(iVar1);
      if (*puVar4 < *puVar3) break;
      iVar1 = *piVar5;
      iVar2 = piVar5[-1];
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8810(iVar2);
      puVar4 = (uint *)FUN_00be8810(iVar1);
      if ((*puVar4 < *puVar3) || (piVar5 = piVar5 + -1, piVar5 <= local_8)) break;
    }
  }
  piVar8 = piVar7;
  piVar9 = local_10;
  local_c = piVar5;
  piVar6 = piVar5;
  if (piVar7 < param_3) {
    while( true ) {
      iVar1 = *piVar7;
      iVar2 = *piVar5;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8810(iVar2);
      puVar4 = (uint *)FUN_00be8810(iVar1);
      piVar8 = piVar7;
      piVar9 = piVar7;
      if (*puVar4 < *puVar3) break;
      iVar1 = *piVar5;
      iVar2 = *piVar7;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8810(iVar2);
      puVar4 = (uint *)FUN_00be8810(iVar1);
      if ((*puVar4 < *puVar3) ||
         (piVar7 = piVar7 + 1, piVar8 = piVar7, piVar9 = piVar7, param_3 <= piVar7)) break;
    }
  }
joined_r0x00bfe128:
  do {
    local_10 = piVar9;
    if (param_3 <= piVar7) {
LAB_00bfe1cc:
      bVar10 = piVar5 == local_8;
      piVar9 = piVar8;
      if (local_8 < piVar5) {
        do {
          iVar1 = piVar5[-1];
          iVar2 = *piVar6;
          if ((iVar1 == 0) || (iVar2 == 0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          puVar3 = (uint *)FUN_00be8810(iVar2);
          puVar4 = (uint *)FUN_00be8810(iVar1);
          if (*puVar3 <= *puVar4) {
            iVar1 = *piVar6;
            iVar2 = local_c[-1];
            if ((iVar1 == 0) || (iVar2 == 0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            puVar3 = (uint *)FUN_00be8810(iVar2);
            puVar4 = (uint *)FUN_00be8810(iVar1);
            if (*puVar4 < *puVar3) break;
            iVar1 = piVar6[-1];
            piVar6 = piVar6 + -1;
            *piVar6 = local_c[-1];
            local_c[-1] = iVar1;
          }
          piVar5 = local_c + -1;
          local_c = piVar5;
        } while (local_8 < piVar5);
        bVar10 = local_c == local_8;
        piVar5 = local_c;
        piVar9 = local_10;
      }
      if (bVar10) {
        if (piVar7 == param_3) {
          local_4[1] = piVar9;
          *local_4 = piVar6;
          return;
        }
        if (piVar9 != piVar7) {
          iVar1 = *piVar6;
          *piVar6 = *piVar9;
          *piVar9 = iVar1;
        }
        iVar1 = *piVar6;
        *piVar6 = *piVar7;
        *piVar7 = iVar1;
        piVar7 = piVar7 + 1;
        piVar8 = piVar9 + 1;
        piVar9 = piVar9 + 1;
        piVar6 = piVar6 + 1;
      }
      else {
        piVar5 = piVar5 + -1;
        local_c = piVar5;
        if (piVar7 == param_3) {
          piVar6 = piVar6 + -1;
          if (piVar5 != piVar6) {
            iVar1 = *piVar5;
            *piVar5 = *piVar6;
            *piVar6 = iVar1;
          }
          iVar1 = *piVar6;
          piVar8 = piVar9 + -1;
          *piVar6 = piVar9[-1];
          *piVar8 = iVar1;
          piVar9 = piVar8;
        }
        else {
          iVar1 = *piVar7;
          *piVar7 = *piVar5;
          *piVar5 = iVar1;
          piVar7 = piVar7 + 1;
          piVar8 = piVar9;
          piVar9 = local_10;
        }
      }
      goto joined_r0x00bfe128;
    }
    iVar1 = *piVar6;
    iVar2 = *piVar7;
    if ((iVar1 == 0) || (iVar2 == 0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    puVar3 = (uint *)FUN_00be8810(iVar2);
    puVar4 = (uint *)FUN_00be8810(iVar1);
    if (*puVar3 <= *puVar4) {
      iVar1 = *piVar7;
      iVar2 = *piVar6;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8810(iVar2);
      puVar4 = (uint *)FUN_00be8810(iVar1);
      piVar5 = local_c;
      piVar8 = local_10;
      if (*puVar4 < *puVar3) goto LAB_00bfe1cc;
      iVar1 = *local_10;
      *local_10 = *piVar7;
      *piVar7 = iVar1;
      local_10 = local_10 + 1;
    }
    piVar7 = piVar7 + 1;
    piVar5 = local_c;
    piVar8 = local_10;
    piVar9 = local_10;
  } while( true );
}


//// FUNCTION LH_Sort_InsertionSort_00bfe340 @ 00bfe340 ////

void __fastcall LH_Sort_InsertionSort_00bfe340(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  if ((param_1 != param_2) && (piVar6 = param_1 + 1, piVar6 != param_2)) {
    local_10 = param_1 + 2;
    local_8 = param_1;
    local_4 = param_2;
    do {
      iVar1 = *piVar6;
      iVar2 = *param_1;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be8810(iVar2);
      puVar4 = (uint *)FUN_00be8810(iVar1);
      piVar5 = piVar6;
      if (*puVar4 < *puVar3) {
        if ((param_1 != piVar6) && (piVar6 != local_10)) {
          FUN_00bfb8b0(param_1,(int)piVar6,local_10);
        }
      }
      else {
        do {
          iVar1 = *piVar6;
          iVar2 = piVar5[-1];
          local_c = piVar5;
          if ((iVar1 == 0) || (iVar2 == 0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          puVar3 = (uint *)FUN_00be8810(iVar2);
          puVar4 = (uint *)FUN_00be8810(iVar1);
          piVar5 = piVar5 + -1;
        } while (*puVar4 < *puVar3);
        param_1 = local_8;
        if ((local_c != piVar6) && (piVar6 != local_10)) {
          FUN_00bfb8b0(local_c,(int)piVar6,local_10);
          param_1 = local_8;
        }
      }
      piVar6 = piVar6 + 1;
      local_10 = local_10 + 1;
    } while (piVar6 != local_4);
  }
  return;
}


//// FUNCTION Ctor_vt00da273c_00bfe4a0 @ 00bfe4a0 ////

undefined4 * __fastcall Ctor_vt00da273c_00bfe4a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da2678;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da273c;
  return param_1;
}


//// FUNCTION Ctor_vt00da26d0_00bfe4e0 @ 00bfe4e0 ////

undefined4 * __thiscall Ctor_vt00da26d0_00bfe4e0(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0254b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da26d0;
  FUN_00bcc0e0((undefined4 *)((int)this + 4));
  local_4 = 0;
  LH_Array_AdoptRequireEmpty_00bfd5e0(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Ctor_vt00da26d4_00bfe540 @ 00bfe540 ////

undefined4 * __thiscall Ctor_vt00da26d4_00bfe540(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0256b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da26d4;
  FUN_00bcbbe0((undefined4 *)((int)this + 4));
  local_4 = 0;
  LH_Array_AdoptRequireEmpty_00bfd620(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bfe5a0 @ 00bfe5a0 ////

void __fastcall FUN_00bfe5a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    iVar1 = *(int *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00bfc090((int)param_1,0,iVar2 + -4 >> 2,iVar1);
  }
  return;
}


//// FUNCTION FUN_00bfe5f0 @ 00bfe5f0 ////

void __fastcall FUN_00bfe5f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    iVar1 = *(int *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00bfc1d0((int)param_1,0,iVar2 + -4 >> 2,iVar1);
  }
  return;
}


//// FUNCTION FUN_00bfe640 @ 00bfe640 ////

void __fastcall FUN_00bfe640(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    iVar1 = *(int *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00bfc380((int)param_1,0,iVar2 + -4 >> 2,iVar1);
  }
  return;
}


//// FUNCTION FUN_00bfe6d0 @ 00bfe6d0 ////

void __fastcall FUN_00bfe6d0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00bfe763:
      if (1 < iVar2) {
        LH_Sort_InsertionSort_00bfd9c0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00bfcec0((int)param_1,(int)param_2);
        }
        FUN_00bfe5a0(param_1,(int)param_2);
        return;
      }
      goto LAB_00bfe763;
    }
    LH_Sort_UnguardedPartition_00bfd660(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00bfe6d0(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00bfe6d0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00bfe7c0 @ 00bfe7c0 ////

void __fastcall FUN_00bfe7c0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00bfe853:
      if (1 < iVar2) {
        LH_Sort_InsertionSort_00bfde40(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00bfcfc0((int)param_1,(int)param_2);
        }
        FUN_00bfe5f0(param_1,(int)param_2);
        return;
      }
      goto LAB_00bfe853;
    }
    LH_Sort_UnguardedPartition_00bfdae0(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00bfe7c0(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00bfe7c0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00bfe8b0 @ 00bfe8b0 ////

void __fastcall FUN_00bfe8b0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00bfe943:
      if (1 < iVar2) {
        LH_Sort_InsertionSort_00bfe340(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00bfd120((int)param_1,(int)param_2);
        }
        FUN_00bfe640(param_1,(int)param_2);
        return;
      }
      goto LAB_00bfe943;
    }
    LH_Sort_UnguardedPartition_00bfdfe0(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00bfe8b0(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00bfe8b0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION PKCAutoDeleteArray_Resize_00bfea50 @ 00bfea50 ////

void __thiscall PKCAutoDeleteArray_Resize_00bfea50(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  LPCSTR pCVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 local_119;
  int *local_118;
  uint local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02599;
  local_c = ExceptionList;
  if (param_1 != *(uint *)((int)this + 4)) {
    puVar6 = (uint *)0x0;
    local_118 = this;
    if (param_1 == 0) {
      if (*(uint *)((int)this + 4) != 0) {
        pvVar1 = *(void **)this;
        if (pvVar1 != (void *)0x0) {
          ExceptionList = &local_c;
          _eh_vector_destructor_iterator_(pvVar1,0x28,*(int *)((int)pvVar1 + -4),thunk_FUN_00be88b0)
          ;
                    /* WARNING: Subroutine does not return */
          _free((void *)((int)pvVar1 + -4));
        }
        *(undefined4 *)this = 0;
      }
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      ExceptionList = &local_c;
      puVar3 = operator_new(param_1 * 0x28 + 4);
      local_4 = 0;
      if (puVar3 != (uint *)0x0) {
        puVar6 = puVar3 + 1;
        *puVar3 = param_1;
        _eh_vector_constructor_iterator_(puVar6,0x28,param_1,Ctor_vt00da2674_00bfafa0,thunk_FUN_00be88b0);
      }
      local_4 = 0xffffffff;
      if (puVar6 == (uint *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x46);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_119,pCVar4);
        local_4 = 0xffffffff;
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      uVar5 = param_1;
      if (*(uint *)((int)this + 4) < param_1) {
        uVar5 = *(uint *)((int)this + 4);
      }
      if (uVar5 != 0) {
        puVar3 = puVar6 + 8;
        local_114 = uVar5;
        do {
          iVar2 = *(int *)this + -(int)puVar6 + -0x20;
          puVar3[-7] = *(uint *)((int)puVar3 + *(int *)this + -(int)puVar6 + -0x1c);
          puVar3[-6] = *(uint *)((int)puVar3 + iVar2 + 8);
          puVar3[-5] = *(uint *)((int)puVar3 + iVar2 + 0xc);
          puVar3[-4] = *(uint *)((int)puVar3 + iVar2 + 0x10);
          puVar3[-2] = *(uint *)((int)puVar3 + iVar2 + 0x18);
          puVar3[-1] = *(uint *)((int)puVar3 + iVar2 + 0x1c);
          *puVar3 = *(uint *)((int)puVar3 + iVar2 + 0x20);
          puVar3[1] = *(uint *)((int)puVar3 + iVar2 + 0x24);
          puVar3 = puVar3 + 10;
          local_114 = local_114 - 1;
          this = local_118;
        } while (local_114 != 0);
        local_114 = 0;
      }
      pvVar1 = *(void **)this;
      if (pvVar1 != (void *)0x0) {
        _eh_vector_destructor_iterator_(pvVar1,0x28,*(int *)((int)pvVar1 + -4),thunk_FUN_00be88b0);
                    /* WARNING: Subroutine does not return */
        _free((void *)((int)pvVar1 + -4));
      }
      *(uint **)this = puVar6;
      *(uint *)((int)this + 4) = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bfec60 @ 00bfec60 ////

void __fastcall FUN_00bfec60(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00bfe6d0(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION FUN_00bfec90 @ 00bfec90 ////

void __fastcall FUN_00bfec90(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00bfe7c0(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION LH_Array_SortAndVerifyUnique_00bfecc0 @ 00bfecc0 ////

void __fastcall LH_Array_SortAndVerifyUnique_00bfecc0(int *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00bfec60(param_1);
  uVar1 = LH_Sort_Compare_00bfbf70(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"unique\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION LH_Array_SortAndVerifyUnique_00bfecf0 @ 00bfecf0 ////

void __fastcall LH_Array_SortAndVerifyUnique_00bfecf0(int *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00bfec90(param_1);
  uVar1 = LH_Sort_Compare_00bfb240(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"unique\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00bfed20 @ 00bfed20 ////

void __fastcall FUN_00bfed20(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00bfe8b0(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION LH_Array_CopySorted_00bfed50 @ 00bfed50 ////

void __thiscall LH_Array_CopySorted_00bfed50(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bcbbd0((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bfce00(param_1,this);
  LH_Array_SortAndVerifyUnique_00bce140(this);
  return;
}


//// FUNCTION LH_Array_CopySorted_00bfed90 @ 00bfed90 ////

void __thiscall LH_Array_CopySorted_00bfed90(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bcc0a0((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bfcdf0(param_1,this);
  LH_Array_SortAndVerifyUnique_00bce170(this);
  return;
}


//// FUNCTION LH_Array_CopySorted_00bfedd0 @ 00bfedd0 ////

void __thiscall LH_Array_CopySorted_00bfedd0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd0910((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bfcdd0(param_1,this);
  LH_Array_SortAndVerifyUnique_00bfecc0(this);
  return;
}


//// FUNCTION LH_Array_CopySorted_00bfee10 @ 00bfee10 ////

void __thiscall LH_Array_CopySorted_00bfee10(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd0a00((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bfcde0(param_1,this);
  LH_Array_SortAndVerifyUnique_00bfecf0(this);
  return;
}


//// FUNCTION LH_Array_CopySorted_00bfee50 @ 00bfee50 ////

void __thiscall LH_Array_CopySorted_00bfee50(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd0910((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bfbf50(param_1,this);
  LH_Array_SortAndVerifyUnique_00bfecc0(this);
  return;
}


//// FUNCTION LH_Array_CopySorted_00bfee90 @ 00bfee90 ////

void __thiscall LH_Array_CopySorted_00bfee90(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd0a00((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bfbfe0(param_1,this);
  LH_Array_SortAndVerifyUnique_00bfecf0(this);
  return;
}


//// FUNCTION LH_Array_SortAndVerifyUnique_00bfeed0 @ 00bfeed0 ////

void __fastcall LH_Array_SortAndVerifyUnique_00bfeed0(int *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00bfed20(param_1);
  uVar1 = LH_Sort_Compare_00bfb2b0(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"unique\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00bfef40 @ 00bfef40 ////

undefined4 * __thiscall FUN_00bfef40(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d025b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bcbbe0(this);
  local_4 = 0;
  LH_Array_CopySorted_00bce1a0(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bfef90 @ 00bfef90 ////

undefined4 * __thiscall FUN_00bfef90(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d025d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bcc0e0(this);
  local_4 = 0;
  LH_Array_CopySorted_00bce1e0(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bfefe0 @ 00bfefe0 ////

undefined4 * __thiscall FUN_00bfefe0(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d025f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bd0950(this);
  local_4 = 0;
  LH_Array_CopySorted_00bfee50(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bff030 @ 00bff030 ////

undefined4 * __thiscall FUN_00bff030(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bd0a40(this);
  local_4 = 0;
  LH_Array_CopySorted_00bfee90(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION LH_Array_CopySorted_00bff080 @ 00bff080 ////

void __thiscall LH_Array_CopySorted_00bff080(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd0af0((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bfce10(param_1,this);
  LH_Array_SortAndVerifyUnique_00bfeed0(this);
  return;
}


//// FUNCTION FUN_00bff0d0 @ 00bff0d0 ////

void __thiscall FUN_00bff0d0(void *this,void *param_1)

{
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_22;
  undefined1 local_21;
  uint local_20;
  void *local_1c;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02638;
  pvStack_c = ExceptionList;
  this_00 = (undefined4 *)((int)this + 4);
  ExceptionList = &pvStack_c;
  local_1c = this;
  iVar1 = GetField_8_00bd0910((int)this_00);
  if (iVar1 != 0) {
    LH_Assert(&local_22,"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bfcdd0(param_1,this_00);
  FUN_00bfec60(this_00);
  local_20 = 1;
  uVar2 = GetField_8_00bd0910((int)this_00);
  uVar6 = 1;
  if (1 < uVar2) {
    do {
      iVar1 = thunk_FUN_00bc0f80(this_00,uVar6 - 1);
      iVar3 = thunk_FUN_00bc0f80(this_00,uVar6);
      if ((iVar1 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_21,"( o1 != NULL ) && ( o2 != NULL )\n");
        DebugBreak();
      }
      puVar4 = (uint *)FUN_00be8740(iVar3);
      puVar5 = (uint *)FUN_00be8740(iVar1);
      uVar2 = *puVar5;
      uVar7 = *puVar4;
      if ((uVar2 > uVar7 || uVar7 == uVar2) && (uVar2 <= uVar7)) {
        FUN_00bfcd80(param_1,iVar1);
        LH_Array_SetAt_00bd0ba0(this_00,uVar6 - 1,0);
      }
      uVar7 = local_20 + 1;
      local_20 = uVar7;
      uVar2 = GetField_8_00bd0910((int)this_00);
      uVar6 = local_20;
      this = local_1c;
    } while (uVar7 < uVar2);
  }
  FUN_00bfefe0(local_18,this);
  local_4 = 0;
  FUN_00bfcdd0(param_1,this_00);
  LH_Array_AdoptRequireEmpty_00bfd560(param_1,local_18);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00bd10a0(local_18);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bff210 @ 00bff210 ////

void __thiscall FUN_00bff210(void *this,void *param_1)

{
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_22;
  undefined1 local_21;
  uint local_20;
  void *local_1c;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02658;
  pvStack_c = ExceptionList;
  this_00 = (undefined4 *)((int)this + 4);
  ExceptionList = &pvStack_c;
  local_1c = this;
  iVar1 = GetField_8_00bd0a00((int)this_00);
  if (iVar1 != 0) {
    LH_Assert(&local_22,"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bfcde0(param_1,this_00);
  FUN_00bfec90(this_00);
  local_20 = 1;
  uVar2 = GetField_8_00bd0a00((int)this_00);
  uVar6 = 1;
  if (1 < uVar2) {
    do {
      iVar1 = thunk_FUN_00bd09c0(this_00,uVar6 - 1);
      iVar3 = thunk_FUN_00bd09c0(this_00,uVar6);
      if ((iVar1 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_21,"( o1 != NULL ) && ( o2 != NULL )\n");
        DebugBreak();
      }
      puVar4 = (uint *)FUN_00be7050(iVar3);
      puVar5 = (uint *)FUN_00be7050(iVar1);
      uVar2 = *puVar5;
      uVar7 = *puVar4;
      if ((uVar2 > uVar7 || uVar7 == uVar2) && (uVar2 <= uVar7)) {
        FUN_00bfcd90(param_1,iVar1);
        LH_Array_SetAt_00bd0be0(this_00,uVar6 - 1,0);
      }
      uVar7 = local_20 + 1;
      local_20 = uVar7;
      uVar2 = GetField_8_00bd0a00((int)this_00);
      uVar6 = local_20;
      this = local_1c;
    } while (uVar7 < uVar2);
  }
  FUN_00bff030(local_18,this);
  local_4 = 0;
  FUN_00bfcde0(param_1,this_00);
  LH_Array_AdoptRequireEmpty_00bfd5a0(param_1,local_18);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00bd10c0(local_18);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bff350 @ 00bff350 ////

void __thiscall FUN_00bff350(void *this,void *param_1)

{
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_22;
  undefined1 local_21;
  uint local_20;
  void *local_1c;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02678;
  pvStack_c = ExceptionList;
  this_00 = (undefined4 *)((int)this + 4);
  ExceptionList = &pvStack_c;
  local_1c = this;
  iVar1 = GetField_8_00bcc0a0((int)this_00);
  if (iVar1 != 0) {
    LH_Assert(&local_22,"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bfcdf0(param_1,this_00);
  FUN_00bce110(this_00);
  local_20 = 1;
  uVar2 = GetField_8_00bcc0a0((int)this_00);
  uVar5 = 1;
  if (1 < uVar2) {
    do {
      puVar3 = (uint *)thunk_FUN_00bcc020(this_00,uVar5 - 1);
      puVar4 = (uint *)thunk_FUN_00bcc020(this_00,uVar5);
      if ((puVar3 == (uint *)0x0) || (puVar4 == (uint *)0x0)) {
        LH_Assert(&local_21,"( o1 != NULL ) && ( o2 != NULL )\n");
        DebugBreak();
      }
      uVar2 = *puVar3;
      uVar6 = *puVar4;
      if ((uVar2 > uVar6 || uVar6 == uVar2) && (uVar2 <= uVar6)) {
        FUN_00bfcdb0(param_1,puVar3);
        LH_Array_SetAt_00bcc060(this_00,uVar5 - 1,0);
      }
      uVar6 = local_20 + 1;
      local_20 = uVar6;
      uVar2 = GetField_8_00bcc0a0((int)this_00);
      this = local_1c;
      uVar5 = local_20;
    } while (uVar6 < uVar2);
  }
  FUN_00bfef90(local_18,this);
  local_4 = 0;
  FUN_00bfcdf0(param_1,this_00);
  LH_Array_AdoptRequireEmpty_00bfd5e0(param_1,local_18);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00bcc640(local_18);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bff480 @ 00bff480 ////

void __thiscall FUN_00bff480(void *this,void *param_1)

{
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_22;
  undefined1 local_21;
  uint local_20;
  void *local_1c;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02698;
  pvStack_c = ExceptionList;
  this_00 = (undefined4 *)((int)this + 4);
  ExceptionList = &pvStack_c;
  local_1c = this;
  iVar1 = GetField_8_00bcbbd0((int)this_00);
  if (iVar1 != 0) {
    LH_Assert(&local_22,"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bfce00(param_1,this_00);
  FUN_00bce0e0(this_00);
  local_20 = 1;
  uVar2 = GetField_8_00bcbbd0((int)this_00);
  uVar4 = 1;
  if (1 < uVar2) {
    do {
      iVar1 = thunk_FUN_00bcc790(this_00,uVar4 - 1);
      iVar3 = thunk_FUN_00bcc790(this_00,uVar4);
      if ((iVar1 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_21,"( o1 != NULL ) && ( o2 != NULL )\n");
        DebugBreak();
      }
      uVar2 = *(uint *)(iVar1 + 4);
      uVar5 = *(uint *)(iVar3 + 4);
      if ((uVar2 > uVar5 || uVar5 == uVar2) && (uVar2 <= uVar5)) {
        FUN_00bfcdc0(param_1,iVar1);
        LH_Array_SetAt_00bcc7d0(this_00,uVar4 - 1,0);
      }
      uVar5 = local_20 + 1;
      local_20 = uVar5;
      uVar2 = GetField_8_00bcbbd0((int)this_00);
      this = local_1c;
      uVar4 = local_20;
    } while (uVar5 < uVar2);
  }
  FUN_00bfef40(local_18,this);
  local_4 = 0;
  FUN_00bfce00(param_1,this_00);
  LH_Array_AdoptRequireEmpty_00bfd620(param_1,local_18);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00bcced0(local_18);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION LH_CheckLoadStatus @ 00bff5b0 ////

bool __fastcall LH_CheckLoadStatus(int param_1)

{
  return *(int *)(param_1 + 0xc) == 0;
}


//// FUNCTION LH_LogStream_EndLine @ 00bff5c0 ////

void __fastcall LH_LogStream_EndLine(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_00bbf470((int *)(param_1 + 4));
  if (!bVar1) {
    LH_LogErrorMessage((int *)(param_1 + 4),"\n");
  }
  return;
}


//// FUNCTION FUN_00bff5e0 @ 00bff5e0 ////

undefined1 * __fastcall FUN_00bff5e0(undefined1 *param_1)

{
  *param_1 = 1;
  Ctor_vt00d9feb8_00be1e00((undefined4 *)(param_1 + 4));
  *(undefined ***)(param_1 + 4) = &PTR_LAB_00da2a08;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}


//// FUNCTION FUN_00bff610 @ 00bff610 ////

void __fastcall FUN_00bff610(int param_1)

{
  *(undefined4 *)(param_1 + 4) = &PTR_LAB_00da2a08;
  PKStringsCHeapString_Dtor((undefined4 *)(param_1 + 4));
  return;
}


//// FUNCTION LH_BeginWarningMessage @ 00bff620 ////

void * __fastcall LH_BeginWarningMessage(int param_1)

{
  LH_LogStream_EndLine(param_1);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  LH_LogErrorMessage((void *)(param_1 + 4),"Warning: ");
  return (void *)(param_1 + 4);
}


//// FUNCTION LH_BeginErrorMessage @ 00bff640 ////

void * __fastcall LH_BeginErrorMessage(int param_1)

{
  LH_LogStream_EndLine(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  LH_LogErrorMessage((void *)(param_1 + 4),"Error: ");
  return (void *)(param_1 + 4);
}


//// FUNCTION FUN_00bff660 @ 00bff660 ////

void __fastcall FUN_00bff660(int param_1)

{
  int *this;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined **local_210;
  undefined1 local_20c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d026bb;
  local_c = ExceptionList;
  this = (int *)(param_1 + 4);
  ExceptionList = &local_c;
  bVar1 = FUN_00bbf470(this);
  if (!bVar1) {
    LH_LogErrorMessage(this,"\n");
  }
  if ((*(int *)(param_1 + 0x10) != 0) || (*(int *)(param_1 + 0xc) != 0)) {
    local_210 = &PTR_LAB_00da2a24;
    local_20c = 0;
    local_d = 0;
    iVar3 = 0;
    local_4 = 0;
    iVar2 = FUN_00bbf560(this,'\n',0);
    while (-1 < iVar2) {
      FUN_00bbfb80(this,iVar3,iVar2 - iVar3,(int *)&local_210);
      iVar3 = iVar2 + 1;
      iVar2 = FUN_00bbf560(this,'\n',iVar3);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00da2a08_00bff720 @ 00bff720 ////

undefined4 * __fastcall Ctor_vt00da2a08_00bff720(undefined4 *param_1)

{
  Ctor_vt00d9feb8_00be1e00(param_1);
  *param_1 = &PTR_LAB_00da2a08;
  return param_1;
}


//// FUNCTION Dtor_00bff740 @ 00bff740 ////

void __fastcall Dtor_00bff740(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da2a08;
  PKStringsCHeapString_Dtor(param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bff750 @ 00bff750 ////

undefined4 * __thiscall ScalarDeletingDtor_00bff750(void *this,byte param_1)

{
  Dtor_00bff740(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9d9b4_00bff820 @ 00bff820 ////

void __fastcall SetVtable_00d9d9b4_00bff820(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9b4;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bff830 @ 00bff830 ////

undefined4 * __thiscall ScalarDeletingDtor_00bff830(void *this,byte param_1)

{
  SetVtable_00d9d9b4_00bff820(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bff8e0 @ 00bff8e0 ////

void * __thiscall ScalarDeletingDtor_00bff8e0(void *this,byte param_1)

{
  FUN_00c36de0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bff900 @ 00bff900 ////

void * __thiscall ScalarDeletingDtor_00bff900(void *this,byte param_1)

{
  FUN_00c37020((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_IsNormalLUG @ 00bff930 ////

undefined4 LH_IsNormalLUG(void)

{
  bool bVar1;
  undefined4 uVar2;
  void *unaff_ESI;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02702;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = std__String__Constructor(local_1c,0xd9f374);
  local_4 = 0;
  bVar1 = CLHSegmentReader_HasSegment(unaff_ESI,uVar2);
  if (bVar1) {
    uVar2 = std__String__Constructor(local_14,0xd9f1d4);
    local_4 = 1;
    bVar1 = CLHSegmentReader_HasSegment(unaff_ESI,uVar2);
    if (bVar1) {
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION LH_LoadGlobalProperties @ 00bff9d0 ////

void LH_LoadGlobalProperties(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  void *pvVar3;
  int unaff_EBX;
  void *unaff_ESI;
  undefined **local_3c [2];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined4 local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02724;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = std__String__Constructor(local_2c,0xd9f1bc);
  local_4 = 0;
  uVar1 = CLHSegmentReader_CacheSegment(unaff_ESI,param_1,uVar1);
  local_4 = 0xffffffff;
  if ((char)uVar1 == '\0') {
    FUN_00c06940(param_2);
    ExceptionList = local_c;
    return;
  }
  uVar1 = std__String__Constructor(local_3c,0xd9f1bc);
  local_4 = 1;
  piVar2 = (int *)CLHSegmentReader_GetCachedSegmentStream(unaff_ESI,uVar1);
  local_4 = 0xffffffff;
  local_3c[0] = &PTR_LAB_00d9d9b4;
  if (piVar2 == (int *)0x0) {
    pvVar3 = LH_BeginErrorMessage(unaff_EBX);
    LH_LogErrorMessage(pvVar3,"Global properties could not be serialsed");
    ExceptionList = local_c;
    return;
  }
  Ctor_vt00d9f52c_00bd9d00(local_24,piVar2);
  local_4 = 2;
  LH_Archive_InitForLoading(local_34,local_24);
  uVar1 = LH_SerializeGlobalProperties(param_2,(int)local_34);
  if ((char)uVar1 == '\0') {
    pvVar3 = LH_BeginErrorMessage(unaff_EBX);
    LH_LogErrorMessage(pvVar3,"Global properties could not be serialised");
  }
  local_4 = 0xffffffff;
  Dtor_00bd9e50(local_24);
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_ValidateFileBank @ 00bffb00 ////

void __thiscall LH_ValidateFileBank(void *this,int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  undefined **local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02736;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = std__String__Constructor(local_14,0xd9f148);
  local_4 = 0;
  uVar1 = CLHSegmentReader_CacheSegment(this,param_1,uVar1);
  local_4 = 0xffffffff;
  local_14[0] = &PTR_LAB_00d9d9b4;
  if ((char)uVar1 == '\0') {
    pvVar2 = LH_BeginErrorMessage(unaff_EBX);
    LH_LogErrorMessage(pvVar2,"Unable to cache the bank info segment");
    ExceptionList = local_c;
    return;
  }
  iVar3 = LH_GetFileSegmentBankInfo(this);
  if (iVar3 < 0) {
    pvVar2 = LH_BeginErrorMessage(unaff_EBX);
    LH_LogErrorMessage(pvVar2,"Could not extract the version number");
    ExceptionList = local_c;
    return;
  }
  iVar4 = LH_IsNormalLUG();
  if (iVar4 == 0) {
    pvVar2 = LH_BeginErrorMessage(unaff_EBX);
    LH_LogErrorMessage(pvVar2,"This bank is not a normal LUG!");
    ExceptionList = local_c;
    return;
  }
  if (iVar3 != 0) {
    pvVar2 = LH_BeginErrorMessage(unaff_EBX);
    LH_LogErrorMessage(pvVar2,"Expecting normal version number ");
    FUN_00bbe970(0);
    LH_LogErrorMessage(pvVar2,"... got ");
    FUN_00bbe970(iVar3);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_OpenWavSegment @ 00bffc30 ////

void LH_OpenWavSegment(int param_1,void *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  void *this;
  undefined4 local_18;
  undefined **local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = std__String__Constructor(local_14,0xd9f374);
  local_4 = 0;
  uVar1 = CLHSegmentReader_GetSegmentOffsetAndSize(param_2,uVar1,param_3,&local_18);
  local_4 = 0xffffffff;
  local_14[0] = &PTR_LAB_00d9d9b4;
  if ((char)uVar1 == '\0') {
    this = LH_BeginErrorMessage(param_1);
    LH_LogErrorMessage(this,"Could not open the wav segment");
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_LoadRLMParams @ 00bffcc0 ////

void LH_LoadRLMParams(int *param_1,void *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  void *pvVar3;
  int unaff_EBX;
  void *unaff_ESI;
  undefined **local_3c [2];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined4 local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0276a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = std__String__Constructor(local_2c,0xd9f344);
  local_4 = 0;
  uVar1 = CLHSegmentReader_CacheSegment(unaff_ESI,param_1,uVar1);
  local_4 = 0xffffffff;
  if ((char)uVar1 != '\0') {
    uVar1 = std__String__Constructor(local_3c,0xd9f344);
    local_4 = 1;
    piVar2 = (int *)CLHSegmentReader_GetCachedSegmentStream(unaff_ESI,uVar1);
    local_4 = 0xffffffff;
    local_3c[0] = &PTR_LAB_00d9d9b4;
    if (piVar2 == (int *)0x0) {
      pvVar3 = LH_BeginErrorMessage(unaff_EBX);
      LH_LogErrorMessage(pvVar3,"Global properties could not be serialsed");
      ExceptionList = local_c;
      return;
    }
    Ctor_vt00d9f52c_00bd9d00(local_24,piVar2);
    local_4 = 2;
    LH_Archive_InitForLoading(local_34,local_24);
    uVar1 = FUN_00c07320(param_2,(int)local_34);
    if ((char)uVar1 == '\0') {
      pvVar3 = LH_BeginErrorMessage(unaff_EBX);
      LH_LogErrorMessage(pvVar3,"Global properties could not be serialised");
    }
    local_4 = 0xffffffff;
    Dtor_00bd9e50(local_24);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bffdd0 @ 00bffdd0 ////

void FUN_00bffdd0(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  uint *puVar2;
  void *this;
  uint uVar3;
  void *this_00;
  uint uVar4;
  
  this_00 = (void *)(in_EAX + 4);
  uVar4 = 0;
  iVar1 = thunk_FUN_00bd3950((int)this_00);
  if (iVar1 != 0) {
    do {
      puVar2 = (uint *)thunk_FUN_00c02010(this_00,uVar4);
      iVar1 = LH_SortedArray_FindObject_00c02de0((void *)(param_2 + 0x2c),puVar2);
      if (iVar1 == 0) {
        this = LH_BeginWarningMessage(param_1);
        LH_LogErrorMessage(this,"Could not find driver ");
        LH_PrintResourceID(this,*puVar2);
        LH_LogErrorMessage(this," when inserting RLM params");
      }
      else {
        *(byte *)(iVar1 + 0x2c) = *(byte *)(iVar1 + 0x2c) | 0x40;
        *(uint *)(iVar1 + 0x3c) = puVar2[1];
        *(uint *)(iVar1 + 0x40) = puVar2[2];
        *(uint *)(iVar1 + 0x44) = puVar2[3];
      }
      uVar4 = uVar4 + 1;
      uVar3 = thunk_FUN_00bd3950((int)this_00);
    } while (uVar4 < uVar3);
  }
  return;
}


//// FUNCTION LH_LoadSampleBankTable @ 00bffe70 ////

void __fastcall LH_LoadSampleBankTable(void *param_1,void *param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint local_38;
  undefined **local_34 [2];
  undefined1 local_2c [8];
  undefined4 local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0278c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = std__String__Constructor(local_2c,0xd9f1d4);
  local_4 = 0;
  uVar1 = CLHSegmentReader_CacheSegment(param_2,param_4,uVar1);
  local_4 = 0xffffffff;
  if ((char)uVar1 == '\0') {
    pvVar2 = LH_BeginErrorMessage(param_3);
    LH_LogErrorMessage(pvVar2,"Could not cache the bank sample table");
    ExceptionList = local_c;
    return;
  }
  uVar1 = std__String__Constructor(local_34,0xd9f1d4);
  local_4 = 1;
  piVar3 = (int *)CLHSegmentReader_GetCachedSegmentStream(param_2,uVar1);
  local_4 = 0xffffffff;
  local_34[0] = &PTR_LAB_00d9d9b4;
  if (piVar3 == (int *)0x0) {
    pvVar2 = LH_BeginErrorMessage(param_3);
    LH_LogErrorMessage(pvVar2,"Could not cache the SampleBank segment");
    ExceptionList = local_c;
    return;
  }
  Ctor_vt00d9f52c_00bd9d00(local_24,piVar3);
  local_4 = 2;
  uVar4 = LH_ReadFileData(local_24,&local_38,4);
  if ((char)uVar4 == '\0') {
    pvVar2 = LH_BeginErrorMessage(param_3);
    pcVar7 = "Could not read the number of samples!";
LAB_00bfffea:
    LH_LogErrorMessage(pvVar2,pcVar7);
  }
  else {
    local_38 = local_38 & 0xffff;
    PKCAutoDeleteArray_Resize_00c02990(param_1,local_38);
    uVar4 = 0;
    if (local_38 != 0) {
      do {
        iVar8 = 0x28c;
        iVar5 = PKCAutoDeleteArray_At_00c02bb0(param_1,uVar4);
        uVar6 = LH_ReadFileData(local_24,iVar5,iVar8);
        if ((char)uVar6 == '\0') {
          pvVar2 = LH_BeginErrorMessage(param_3);
          LH_LogErrorMessage(pvVar2,"Could not read in sample (index=");
          LH_PrintResourceID(pvVar2,uVar4);
          pcVar7 = ")";
          goto LAB_00bfffea;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_38);
    }
  }
  local_4 = 0xffffffff;
  Dtor_00bd9e50(local_24);
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_CountLoopingSamples @ 00c00020 ////

void LH_CountLoopingSamples(int *param_1)

{
  int iVar1;
  int *unaff_EBX;
  uint uVar2;
  void *unaff_EDI;
  
  *param_1 = 0;
  *unaff_EBX = 0;
  uVar2 = 0;
  if (*(int *)((int)unaff_EDI + 4) != 0) {
    do {
      iVar1 = PKCAutoDeleteArray_At_00c02bb0(unaff_EDI,uVar2);
      if ((*(int *)(iVar1 + 0x104) != 0) && (*(int *)(iVar1 + 0x108) == *(int *)(iVar1 + 0x104))) {
        *param_1 = *param_1 + 1;
      }
      if (*(int *)(iVar1 + 0x104) != 0) {
        *unaff_EBX = *unaff_EBX + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)unaff_EDI + 4));
  }
  return;
}


//// FUNCTION LH_LoadBankCriteriaInfo @ 00c00080 ////

void __thiscall LH_LoadBankCriteriaInfo(void *this,int param_1,int *param_2,void *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  char *pcVar7;
  uint local_4c;
  undefined1 local_48 [8];
  undefined **local_40 [2];
  undefined1 local_38 [8];
  undefined4 local_30 [7];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Segment tag string at 0xd9f32c is the real on-disk tag
                       "LHAudioBankCriteiaInfo" - note the typo (missing the "r" in "Criteria").
                       Confirmed by hex-dumping real .lug files in Data\Audio\. The typo is baked
                       into shipped game data, so it must be preserved exactly if ever
                       re-implementing a .lug reader/writer. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_00d027ae;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar3 = std__String__Constructor(local_38,0xd9f32c);
  local_c = 0;
  uVar3 = CLHSegmentReader_CacheSegment(this,param_2,uVar3);
  local_c = 0xffffffff;
  if ((char)uVar3 != '\0') {
    uVar3 = std__String__Constructor(local_40,0xd9f32c);
    local_c = 1;
    piVar4 = (int *)CLHSegmentReader_GetCachedSegmentStream(this,uVar3);
    local_c = 0xffffffff;
    local_40[0] = &PTR_LAB_00d9d9b4;
    if (piVar4 == (int *)0x0) {
      pvVar5 = LH_BeginErrorMessage(param_1);
      LH_LogErrorMessage(pvVar5,"Could not cache the BankCriteriaInfo segment");
      ExceptionList = local_14;
      return;
    }
    Ctor_vt00d9f52c_00bd9d00(local_30,piVar4);
    local_c = 2;
    LH_Archive_InitForLoading(local_48,local_30);
    cVar1 = LH_Archive_TransferU32((int)local_48);
    if (cVar1 == '\0') {
      pvVar5 = LH_BeginErrorMessage(param_1);
      pcVar7 = "Could not read the number of criteria entries!";
LAB_00c001f9:
      LH_LogErrorMessage(pvVar5,pcVar7);
    }
    else {
      PKCAutoDeleteArray_Resize_00c044b0(param_3,local_4c);
      uVar6 = 0;
      if (local_4c != 0) {
        do {
          piVar4 = (int *)PKCAutoDeleteArray_At_00c02cc0(param_3,uVar6);
          bVar2 = LH_Archive_SerializeString((int)local_48,piVar4);
          if (!bVar2) {
            pvVar5 = LH_BeginErrorMessage(param_1);
            pcVar7 = "Could not read the criteria name (index=";
LAB_00c001e1:
            LH_LogErrorMessage(pvVar5,pcVar7);
            LH_PrintResourceID(pvVar5,uVar6);
            pcVar7 = ")";
            goto LAB_00c001f9;
          }
          cVar1 = LH_Archive_SerializeCriteriaSampleIds((uint)local_48,piVar4 + 2);
          if (cVar1 == '\0') {
            pvVar5 = LH_BeginErrorMessage(param_1);
            pcVar7 = "Could not read in the driver table for criteria entry (index=";
            goto LAB_00c001e1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_4c);
      }
    }
    local_c = 0xffffffff;
    Dtor_00bd9e50(local_30);
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION LH_BuildTriggersFromCriteria @ 00c00220 ////

void LH_BuildTriggersFromCriteria(void *param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  undefined ***pppuVar9;
  int iVar10;
  undefined1 local_45;
  undefined4 *local_44;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  undefined **local_20;
  undefined1 local_1c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d027db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da2b98_00c01e50(local_40);
  pvVar3 = param_1;
  uVar6 = 0;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  FUN_00c01e80(local_40,*(uint *)((int)param_1 + 4));
  if (*(int *)((int)pvVar3 + 4) != 0) {
    do {
      iVar1 = PKCAutoDeleteArray_At_00c02cc0(pvVar3,uVar6);
      local_44 = operator_new(0x10);
      local_4._0_1_ = 1;
      if (local_44 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_00c371f0(local_44);
      }
      local_4._0_1_ = 0;
      if (piVar2 == (int *)0x0) {
        LH_Assert(&local_45,"trigger != NULL\n");
        DebugBreak();
      }
      FUN_00be2010(piVar2,iVar1);
      PKCAutoDeleteArray_Resize_00c042d0(piVar2 + 2,1);
      pvVar7 = (void *)(iVar1 + 8);
      pvVar3 = (void *)PKCAutoDeleteArray_At_00bd4820(piVar2 + 2,0);
      FUN_00c03310(pvVar3,pvVar7);
      local_20 = &PTR_LAB_00da2b6c;
      local_1c = 0;
      local_d = 0;
      pppuVar9 = &local_20;
      uVar8 = 3;
      local_4 = CONCAT31(local_4._1_3_,2);
      iVar1 = PKString_GetLength(piVar2);
      FUN_00bbfb80(piVar2,iVar1 + -4,uVar8,(int *)pppuVar9);
      iVar1 = FUN_00bbf6e0(&local_20,"SUB");
      if (iVar1 == 0) {
        iVar10 = 4;
        iVar1 = PKString_GetLength(piVar2);
        FUN_00bbf1f0(piVar2,iVar1 + -4,iVar10);
      }
      LH_Container_AddObject_00c03450(local_40,(int)piVar2);
      uVar6 = uVar6 + 1;
      local_4._0_1_ = 0;
      local_20 = &PTR_LAB_00d9d9b4;
      pvVar3 = param_1;
    } while (uVar6 < *(uint *)((int)param_1 + 4));
  }
  Ctor_vt00da2b9c_00c01e90(local_30);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00c04ea0(local_30,local_40);
  pvVar3 = (void *)((int)param_2 + 0x38);
  param_2 = pvVar3;
  thunk_FUN_00c04be0(pvVar3,local_40);
  piVar2 = (int *)FUN_00c01f00((int)local_30);
  while (piVar2 != (int *)0x0) {
    iVar1 = LH_SortedArray_FindObject_00c01c00(pvVar3,piVar2);
    if (iVar1 == 0) {
      LH_Assert(&param_1,"trigger != NULL\n");
      DebugBreak();
    }
    uVar6 = *(uint *)(iVar1 + 0xc);
    PKCAutoDeleteArray_Resize_00c042d0((void *)(iVar1 + 8),uVar6 + 1);
    pvVar3 = (void *)PKCAutoDeleteArray_At_00bd4820((void *)(iVar1 + 8),uVar6);
    pvVar7 = (void *)PKCAutoDeleteArray_Get_00c028c0(piVar2 + 2);
    PKCAutoDeleteArray_Resize_00bd45c0(pvVar3,*(uint *)((int)pvVar7 + 4));
    uVar6 = 0;
    if (*(int *)((int)pvVar7 + 4) != 0) {
      do {
        puVar4 = (undefined4 *)PKCAutoDeleteArray_At_00bd4710(pvVar7,uVar6);
        puVar5 = (undefined4 *)PKCAutoDeleteArray_At_00bd4710(pvVar3,uVar6);
        *puVar5 = *puVar4;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)((int)pvVar7 + 4));
    }
    piVar2 = (int *)FUN_00c01f00((int)local_30);
    pvVar3 = param_2;
  }
  local_4 = local_4 & 0xffffff00;
  Dtor_00c01eb0(local_30);
  local_4 = 0xffffffff;
  Dtor_00c01e70(local_40);
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_ExtractResources @ 00c00480 ////

void LH_ExtractResources(int param_1,int param_2,uint param_3,int param_4)

{
  char *pcVar1;
  LH_ResourceHeader *puVar2;
  LH_ResourceHeader *puVar3;
  undefined4 *_Memory;
  void *this;
  void *unaff_EBX;
  uint uVar2;
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02800;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da2b88_00c01c50(local_2c);
  uVar2 = 0;
  local_4 = 0;
  FUN_00c01c80(local_2c,param_3);
  if (*(int *)((int)unaff_EBX + 4) != 0) {
    do {
      pcVar1 = (char *)PKCAutoDeleteArray_At_00c02bb0(unaff_EBX,uVar2);
      if ((*(int *)(pcVar1 + 0x104) != 0) && (*(int *)(pcVar1 + 0x108) == *(int *)(pcVar1 + 0x104)))
      {
        puVar2 = operator_new(0x24);
        local_4._0_1_ = 1;
        if (puVar2 == (LH_ResourceHeader *)0x0) {
          puVar3 = (LH_ResourceHeader *)0x0;
        }
        else {
          puVar3 = (LH_ResourceHeader *)FUN_00c36db0(&puVar2->ResourceID);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (puVar3 == (LH_ResourceHeader *)0x0) {
          LH_Assert(&param_3,"resource != NULL\n");
          DebugBreak();
        }
        puVar3->ResourceID = *(dword *)(pcVar1 + 0x104);
        FUN_00bbfaa0(&puVar3->Name,pcVar1);
        puVar3->UncompressedSize = *(dword *)(pcVar1 + 0x10c);
        puVar3->FileSize = *(int *)(pcVar1 + 0x110) + param_4;
        puVar3->Channels = *(word *)(pcVar1 + 0x126);
        puVar3->FormatTag = *(word *)(pcVar1 + 0x124);
        puVar3->SampleRate = *(dword *)(pcVar1 + 0x128);
        puVar3->LoopStart = *(dword *)(pcVar1 + 0x138);
        puVar3->LoopEnd = *(dword *)(pcVar1 + 0x13c);
        LH_AddResourceToList(local_2c,(int)puVar3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)unaff_EBX + 4));
  }
  Ctor_vt00da2b8c_00c01c90(local_1c);
  local_4._0_1_ = 2;
  FUN_00c05090(local_1c,local_2c);
  _Memory = (undefined4 *)FUN_00c01d00((int)local_1c);
  if (_Memory != (undefined4 *)0x0) {
    this = LH_BeginWarningMessage(param_1);
    LH_LogErrorMessage(this,"Resource collision, id (");
    LH_PrintResourceID(this,*_Memory);
    LH_LogErrorMessage(this,")");
    FUN_00c36de0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  Dtor_00c01cb0(local_1c);
  LH_StoreExtractedResources((void *)(param_2 + 0x20),local_2c);
  local_4 = 0xffffffff;
  Dtor_00c01c70(local_2c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_BuildDriverTable @ 00c00660 ////

void LH_BuildDriverTable(int param_1,int param_2,void *param_3,uint param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  void *_Memory;
  void *this;
  uint uVar7;
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02825;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da2b90_00c01d50(local_2c);
  local_4 = 0;
  FUN_00c01d80(local_2c,param_4);
  uVar7 = 0;
  if (*(int *)((int)param_3 + 4) != 0) {
    do {
      iVar5 = PKCAutoDeleteArray_At_00c02bb0(param_3,uVar7);
      if (*(int *)(iVar5 + 0x104) != 0) {
        puVar6 = operator_new(0x48);
        local_4._0_1_ = 1;
        if (puVar6 == (undefined2 *)0x0) {
          puVar6 = (undefined2 *)0x0;
        }
        else {
          puVar6 = FUN_00c36fc0(puVar6);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (puVar6 == (undefined2 *)0x0) {
          LH_Assert(&param_4,"driver != NULL\n");
          DebugBreak();
        }
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(iVar5 + 0x104);
        puVar6[0x16] = 0;
        *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(iVar5 + 0x108);
        FUN_00bbfaa0(puVar6 + 6,(char *)(iVar5 + 0x140));
        puVar6[10] = *(undefined2 *)(iVar5 + 0x11a);
        puVar6[0xb] = *(undefined2 *)(iVar5 + 0x118);
        if (*(int *)(iVar5 + 0x278) != 0) {
          *(byte *)(puVar6 + 0x16) = *(byte *)(puVar6 + 0x16) | 4;
        }
        if (((*(uint *)(iVar5 + 0x244) & 0x400) == 0) || (*(int *)(iVar5 + 0x274) != 2)) {
          *(byte *)(puVar6 + 0x16) = *(byte *)(puVar6 + 0x16) | 8;
        }
        *(undefined4 *)(puVar6 + 0xe) = 0;
        if ((*(byte *)(iVar5 + 0x244) & 0x40) != 0) {
          *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(iVar5 + 0x248);
        }
        *(undefined4 *)(puVar6 + 0x1a) = 0;
        if ((*(uint *)(iVar5 + 0x244) & 0x100) != 0) {
          uVar2 = *(undefined4 *)(iVar5 + 0x26c);
          *(byte *)(puVar6 + 0x16) = *(byte *)(puVar6 + 0x16) | 0x20;
          *(undefined4 *)(puVar6 + 0x1a) = uVar2;
        }
        *(undefined4 *)(puVar6 + 0x18) = 0;
        if (*(char *)(iVar5 + 0x244) < '\0') {
          uVar2 = *(undefined4 *)(iVar5 + 0x268);
          *(byte *)(puVar6 + 0x16) = *(byte *)(puVar6 + 0x16) | 0x10;
          *(undefined4 *)(puVar6 + 0x18) = uVar2;
        }
        *puVar6 = *(undefined2 *)(iVar5 + 0x270);
        puVar6[1] = *(undefined2 *)(iVar5 + 0x272);
        *(undefined4 *)(puVar6 + 0x12) = 100;
        if ((*(byte *)(iVar5 + 0x244) & 1) != 0) {
          *(uint *)(puVar6 + 0x12) = (uint)*(ushort *)(iVar5 + 0x260);
        }
        puVar6[0x17] = *(undefined2 *)(iVar5 + 0x264);
        *(undefined4 *)(puVar6 + 0xc) = 1;
        if (*(int *)(iVar5 + 0x240) != 0) {
          *(int *)(puVar6 + 0xc) = *(int *)(iVar5 + 0x240);
        }
        *(undefined4 *)(puVar6 + 0x1c) = 1;
        if (*(int *)(iVar5 + 0x27c) != -1) {
          *(int *)(puVar6 + 0x1c) = *(int *)(iVar5 + 0x27c);
        }
        uVar3 = *(uint *)(iVar5 + 0x244);
        if (((uVar3 & 0x20) == 0) || ((uVar3 & 0x1000) == 0)) {
          if ((uVar3 & 0x20) == 0) {
            if ((uVar3 & 0x1000) == 0) {
              uVar4 = 0x7f;
              puVar6[0x14] = 0x7f;
            }
            else {
              puVar6[0x14] = *(undefined2 *)(iVar5 + 0x25e);
              uVar4 = *(undefined2 *)(iVar5 + 0x25e);
            }
          }
          else {
            puVar6[0x14] = *(undefined2 *)(iVar5 + 0x25c);
            uVar4 = *(undefined2 *)(iVar5 + 0x25c);
          }
        }
        else {
          puVar6[0x14] = *(undefined2 *)(iVar5 + 0x25c);
          uVar4 = *(undefined2 *)(iVar5 + 0x25e);
        }
        puVar6[0x15] = uVar4;
        uVar1 = puVar6[0x14];
        if ((ushort)puVar6[0x15] < uVar1) {
          puVar6[0x14] = puVar6[0x15];
          puVar6[0x15] = uVar1;
        }
        puVar6[0x11] = 0;
        if ((*(byte *)(iVar5 + 0x244) & 8) != 0) {
          puVar6[0x11] = *(undefined2 *)(iVar5 + 0x254);
        }
        puVar6[0x10] = 0;
        if ((*(byte *)(iVar5 + 0x244) & 4) != 0) {
          puVar6[0x10] = *(undefined2 *)(iVar5 + 0x250);
        }
        if ((*(byte *)(iVar5 + 0x244) & 0x10) != 0) {
          if ((*(byte *)(iVar5 + 600) & 1) != 0) {
            puVar6[0x16] = puVar6[0x16] | 1;
          }
          if ((*(byte *)(iVar5 + 600) & 2) != 0) {
            *(byte *)(puVar6 + 0x16) = *(byte *)(puVar6 + 0x16) | 2;
          }
        }
        LH_Container_AddObject_00c03410(local_2c,(int)puVar6);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((int)param_3 + 4));
  }
  Ctor_vt00da2b94_00c01d90(local_1c);
  local_4._0_1_ = 2;
  FUN_00c051c0(local_1c,local_2c);
  _Memory = (void *)FUN_00c01e00((int)local_1c);
  if (_Memory == (void *)0x0) {
    local_4 = (uint)local_4._1_3_ << 8;
    Dtor_00c01db0(local_1c);
    thunk_FUN_00c04d70((void *)(param_2 + 0x2c),local_2c);
    local_4 = 0xffffffff;
    Dtor_00c01d70(local_2c);
    ExceptionList = local_c;
    return;
  }
  this = LH_BeginWarningMessage(param_1);
  LH_LogErrorMessage(this,"Driver collision, id (");
  LH_PrintResourceID(this,*(undefined4 *)((int)_Memory + 4));
  LH_LogErrorMessage(this,")");
  FUN_00c37020((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION LH_LoadLUGAsset @ 00c009c0 ////

void LH_LoadLUGAsset(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  void *this;
  uint local_30;
  uint local_2c;
  undefined4 sampleBankArray;
  undefined4 local_24;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar1 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0284f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CLHSegmentReader_Constructor(local_18);
  local_4 = 0;
  uVar3 = LH_DecodeSegmentStructure(local_18,param_1);
  if ((char)uVar3 == '\0') {
    this = LH_BeginErrorMessage(iVar1);
    LH_LogErrorMessage(this,"There were problems decoding the file segment structure");
    local_4 = 0xffffffff;
    CLHSegmentReader_Destructor(local_18);
    ExceptionList = local_c;
    return;
  }
  LH_LoadGlobalProperties(param_1,param_2);
  bVar2 = LH_CheckLoadStatus(iVar1);
  if (bVar2) {
    LH_ValidateFileBank(local_18,param_1);
    bVar2 = LH_CheckLoadStatus(iVar1);
    if (bVar2) {
      LH_OpenWavSegment(iVar1,local_18,&param_3);
      bVar2 = LH_CheckLoadStatus(iVar1);
      if (bVar2) {
        sampleBankArray = 0;
        local_24 = 0;
        local_4._0_1_ = 1;
        LH_LoadSampleBankTable(&sampleBankArray,local_18,iVar1,param_1);
        bVar2 = LH_CheckLoadStatus(iVar1);
        if (bVar2) {
          LH_CountLoopingSamples((int *)&local_30);
          LH_ExtractResources(iVar1,(int)param_2,local_30,param_3);
          bVar2 = LH_CheckLoadStatus(iVar1);
          if (bVar2) {
            LH_BuildDriverTable(iVar1,(int)param_2,&sampleBankArray,local_2c);
            bVar2 = LH_CheckLoadStatus(iVar1);
            if (bVar2) {
              local_4._0_1_ = 0;
              LH_FreeIfNonNull(&sampleBankArray);
                    /* // reused from here on to hold RLM params, not the sample bank */
              LH_Array_Constructor(&sampleBankArray);
              local_4._0_1_ = 2;
              LH_LoadRLMParams(param_1,&sampleBankArray);
              bVar2 = LH_CheckLoadStatus(iVar1);
              if (bVar2) {
                FUN_00bffdd0(iVar1,(int)param_2);
                bVar2 = LH_CheckLoadStatus(iVar1);
                if (bVar2) {
                  local_4._0_1_ = 0;
                  LH_Array_Destructor((int)&sampleBankArray);
                  sampleBankArray = 0;
                  local_24 = 0;
                  local_4 = CONCAT31(local_4._1_3_,3);
                  LH_LoadBankCriteriaInfo(local_18,iVar1,param_1,&sampleBankArray);
                  bVar2 = LH_CheckLoadStatus(iVar1);
                  if (bVar2) {
                    LH_BuildTriggersFromCriteria(&sampleBankArray,param_2);
                    LH_CheckLoadStatus(iVar1);
                  }
                  local_4 = local_4 & 0xffffff00;
                  FUN_00c03370(&sampleBankArray);
                }
                else {
                  local_4 = (uint)local_4._1_3_ << 8;
                  LH_Array_Destructor((int)&sampleBankArray);
                }
              }
              else {
                local_4 = (uint)local_4._1_3_ << 8;
                LH_Array_Destructor((int)&sampleBankArray);
              }
              goto LAB_00c00bdb;
            }
          }
        }
        LH_FreeIfNonNull(&sampleBankArray);
      }
    }
  }
LAB_00c00bdb:
  local_4 = 0xffffffff;
  CLHSegmentReader_Destructor(local_18);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c00c10 @ 00c00c10 ////

void FUN_00c00c10(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int local_58 [19];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02861;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bbd390(local_58,param_1);
  local_4 = 0;
  LH_LoadLUGAsset(local_58,param_2,param_3);
  local_4 = 0xffffffff;
  FUN_00bbbe80(local_58);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c00c80 @ 00c00c80 ////

void __fastcall FUN_00c00c80(undefined4 param_1,undefined4 *param_2,int param_3)

{
  FUN_00c00c10(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c00c90 @ 00c00c90 ////

void __fastcall FUN_00c00c90(int *param_1,undefined4 *param_2,int param_3)

{
  LH_LoadLUGAsset(param_1,param_2,param_3);
  return;
}


//// FUNCTION LH_FreeIfNonNull @ 00c00cb0 ////

void __fastcall LH_FreeIfNonNull(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION SetVtable_00d9d9b4_00c00d00 @ 00c00d00 ////

void __fastcall SetVtable_00d9d9b4_00c00d00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9b4;
  return;
}


//// FUNCTION FUN_00c00d20 @ 00c00d20 ////

void __fastcall FUN_00c00d20(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION LH_Array_Reserve_00c00d50 @ 00c00d50 ////

void __thiscall LH_Array_Reserve_00c00d50(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 4) < param_1) {
    uStack_4 = this;
    puVar2 = operator_new(param_1 * 4);
    if (puVar2 == (undefined4 *)0x0) {
      LH_Assert((void *)((int)&uStack_4 + 3),"data != NULL\n");
      DebugBreak();
    }
    if (*(int *)((int)this + 4) != 0) {
      if (*(int *)this == 0) {
        LH_Assert((void *)((int)&uStack_4 + 3),"Data != NULL\n");
        DebugBreak();
      }
      iVar3 = *(int *)((int)this + 8);
      if (iVar3 != 0) {
        puVar4 = *(undefined4 **)this;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    if (*(int *)this != 0) {
      LH_Assert(&param_1,"Data == NULL\n");
      DebugBreak();
    }
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 4) = uVar1;
  }
  return;
}


//// FUNCTION LH_Array_SetAt_00c00e10 @ 00c00e10 ////

void __thiscall LH_Array_SetAt_00c00e10(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    *(undefined4 *)(*(int *)this + uVar1 * 4) = param_2;
    return;
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


//// FUNCTION LH_Array_SetFilledSize_00c00e50 @ 00c00e50 ////

void __thiscall LH_Array_SetFilledSize_00c00e50(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) < param_1) {
    LH_Assert(&param_1,"NewSize <= FilledSize\n");
    DebugBreak();
  }
  *(uint *)((int)this + 8) = uVar1;
  return;
}


//// FUNCTION FUN_00c00e80 @ 00c00e80 ////

void __fastcall FUN_00c00e80(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00c00e90 @ 00c00e90 ////

void __fastcall LH_Array_FreeBuffer_00c00e90(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00c00ef0 @ 00c00ef0 ////

int __thiscall FUN_00c00ef0(void *this,int *param_1,undefined1 *param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_5;
  int *local_4;
  
  *param_2 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar7 = *(int *)((int)this + 8) + -1;
  iVar5 = 0;
  local_4 = this;
  if (-1 < iVar7) {
    do {
      iVar6 = (iVar7 + iVar5) / 2;
      piVar1 = *(int **)(*local_4 + iVar6 * 4);
      if (piVar1 == (int *)0x0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
      }
      pbVar2 = (byte *)FUN_00bbf3a0(piVar1);
      iVar3 = FUN_00bbf680(param_1,pbVar2);
      if (iVar3 < 0) {
        iVar7 = iVar6 + -1;
      }
      else {
        pbVar2 = (byte *)FUN_00bbf3a0(param_1);
        iVar5 = FUN_00bbf680(piVar1,pbVar2);
        if (-1 < iVar5) {
          *param_2 = 1;
          return iVar6;
        }
        iVar5 = iVar6 + 1;
      }
    } while (iVar5 <= iVar7);
  }
  iVar5 = (iVar7 + iVar5) / 2;
  piVar1 = *(int **)(*local_4 + iVar5 * 4);
  if (piVar1 == (int *)0x0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  uVar4 = FUN_00bd6650(param_1,piVar1);
  if (-1 < (int)uVar4) {
    iVar5 = iVar5 + 1;
  }
  return iVar5;
}


//// FUNCTION LH_Array_Reserve_00c00fe0 @ 00c00fe0 ////

void __thiscall LH_Array_Reserve_00c00fe0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 4) < param_1) {
    uStack_4 = this;
    puVar2 = operator_new(param_1 * 4);
    if (puVar2 == (undefined4 *)0x0) {
      LH_Assert((void *)((int)&uStack_4 + 3),"data != NULL\n");
      DebugBreak();
    }
    if (*(int *)((int)this + 4) != 0) {
      if (*(int *)this == 0) {
        LH_Assert((void *)((int)&uStack_4 + 3),"Data != NULL\n");
        DebugBreak();
      }
      iVar3 = *(int *)((int)this + 8);
      if (iVar3 != 0) {
        puVar4 = *(undefined4 **)this;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    if (*(int *)this != 0) {
      LH_Assert(&param_1,"Data == NULL\n");
      DebugBreak();
    }
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 4) = uVar1;
  }
  return;
}


//// FUNCTION LH_Array_SetAt_00c010a0 @ 00c010a0 ////

void __thiscall LH_Array_SetAt_00c010a0(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    *(undefined4 *)(*(int *)this + uVar1 * 4) = param_2;
    return;
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


//// FUNCTION LH_Array_SetFilledSize_00c010e0 @ 00c010e0 ////

void __thiscall LH_Array_SetFilledSize_00c010e0(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) < param_1) {
    LH_Assert(&param_1,"NewSize <= FilledSize\n");
    DebugBreak();
  }
  *(uint *)((int)this + 8) = uVar1;
  return;
}


//// FUNCTION FUN_00c01110 @ 00c01110 ////

void __fastcall FUN_00c01110(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00c01120 @ 00c01120 ////

void __fastcall LH_Array_FreeBuffer_00c01120(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION LH_Array_Reserve_00c01180 @ 00c01180 ////

void __thiscall LH_Array_Reserve_00c01180(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 4) < param_1) {
    uStack_4 = this;
    puVar2 = operator_new(param_1 * 4);
    if (puVar2 == (undefined4 *)0x0) {
      LH_Assert((void *)((int)&uStack_4 + 3),"data != NULL\n");
      DebugBreak();
    }
    if (*(int *)((int)this + 4) != 0) {
      if (*(int *)this == 0) {
        LH_Assert((void *)((int)&uStack_4 + 3),"Data != NULL\n");
        DebugBreak();
      }
      iVar3 = *(int *)((int)this + 8);
      if (iVar3 != 0) {
        puVar4 = *(undefined4 **)this;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    if (*(int *)this != 0) {
      LH_Assert(&param_1,"Data == NULL\n");
      DebugBreak();
    }
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 4) = uVar1;
  }
  return;
}


//// FUNCTION LH_Array_SetAt_00c01240 @ 00c01240 ////

void __thiscall LH_Array_SetAt_00c01240(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    *(undefined4 *)(*(int *)this + uVar1 * 4) = param_2;
    return;
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


//// FUNCTION LH_Array_SetFilledSize_00c01280 @ 00c01280 ////

void __thiscall LH_Array_SetFilledSize_00c01280(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) < param_1) {
    LH_Assert(&param_1,"NewSize <= FilledSize\n");
    DebugBreak();
  }
  *(uint *)((int)this + 8) = uVar1;
  return;
}


//// FUNCTION FUN_00c012b0 @ 00c012b0 ////

void __fastcall FUN_00c012b0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00c012c0 @ 00c012c0 ////

void __fastcall LH_Array_FreeBuffer_00c012c0(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00c01320 @ 00c01320 ////

void __fastcall FUN_00c01320(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = LH_Array_GetCount((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Array_GetAt_00bd3830(this,uVar4);
      if (iVar1 != 0) {
        LH_Array_SetAt_00c01240(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = LH_Array_GetCount((int)this);
    } while (uVar4 < uVar2);
  }
  LH_Array_SetFilledSize_00c01280(this,uVar3);
  return;
}


//// FUNCTION FUN_00c01370 @ 00c01370 ////

void __fastcall FUN_00c01370(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = GetField_8_00bd3890((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Array_GetAt_00bd3960(this,uVar4);
      if (iVar1 != 0) {
        LH_Array_SetAt_00c00e10(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bd3890((int)this);
    } while (uVar4 < uVar2);
  }
  LH_Array_SetFilledSize_00c00e50(this,uVar3);
  return;
}


//// FUNCTION FUN_00c013c0 @ 00c013c0 ////

void __fastcall FUN_00c013c0(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = GetField_8_00bd38a0((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Array_GetAt_00bd39a0(this,uVar4);
      if (iVar1 != 0) {
        LH_Array_SetAt_00c010a0(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bd38a0((int)this);
    } while (uVar4 < uVar2);
  }
  LH_Array_SetFilledSize_00c010e0(this,uVar3);
  return;
}


//// FUNCTION LH_Array_GetAt_00c01410 @ 00c01410 ////

undefined4 __thiscall LH_Array_GetAt_00c01410(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    return *(undefined4 *)(*(int *)this + uVar1 * 4);
  }
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}


//// FUNCTION FUN_00c01450 @ 00c01450 ////

void __thiscall FUN_00c01450(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00c01180(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00c01490 @ 00c01490 ////

void __thiscall FUN_00c01490(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00c01450(this,param_1[2]);
    puVar3 = (undefined4 *)*param_1;
    puVar4 = (undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4);
    for (uVar1 = param_1[2] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1[2];
  }
  return;
}


//// FUNCTION FUN_00c014e0 @ 00c014e0 ////

void __fastcall FUN_00c014e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}


//// FUNCTION FUN_00c01510 @ 00c01510 ////

void __thiscall FUN_00c01510(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00c00d50(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00c01550 @ 00c01550 ////

void __thiscall FUN_00c01550(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00c01510(this,param_1[2]);
    puVar3 = (undefined4 *)*param_1;
    puVar4 = (undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4);
    for (uVar1 = param_1[2] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1[2];
  }
  return;
}


//// FUNCTION FUN_00c015a0 @ 00c015a0 ////

void __fastcall FUN_00c015a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}


//// FUNCTION FUN_00c015d0 @ 00c015d0 ////

void __thiscall FUN_00c015d0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00c00fe0(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00c01610 @ 00c01610 ////

void __thiscall FUN_00c01610(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00c015d0(this,param_1[2]);
    puVar3 = (undefined4 *)*param_1;
    puVar4 = (undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4);
    for (uVar1 = param_1[2] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1[2];
  }
  return;
}


//// FUNCTION FUN_00c01660 @ 00c01660 ////

void __fastcall FUN_00c01660(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}


//// FUNCTION LH_Sort_Compare_00c01690 @ 00c01690 ////

uint __fastcall LH_Sort_Compare_00c01690(int *param_1)

{
  int *this;
  int *this_00;
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_4;
  
  uVar3 = param_1[2];
  uVar4 = 1;
  uStack_4 = param_1;
  if (1 < uVar3) {
    do {
      this = *(int **)(*param_1 + -4 + uVar4 * 4);
      this_00 = *(int **)(*param_1 + uVar4 * 4);
      if ((this == (int *)0x0) || (this_00 == (int *)0x0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( object1 != NULL ) && ( object2 != NULL )\n");
        DebugBreak();
      }
      pbVar1 = (byte *)FUN_00bbf3a0(this_00);
      iVar2 = FUN_00bbf680(this,pbVar1);
      if (-1 < iVar2) {
        pbVar1 = (byte *)FUN_00bbf3a0(this);
        uVar3 = FUN_00bbf680(this_00,pbVar1);
        return uVar3 & 0xffffff00;
      }
      uVar3 = param_1[2];
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION LH_Sort_Compare_00c01710 @ 00c01710 ////

undefined4 LH_Sort_Compare_00c01710(int *param_1,int *param_2)

{
  int *this;
  int *this_00;
  byte *pbVar1;
  int iVar2;
  
  this_00 = param_2;
  this = param_1;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    LH_Assert(&param_1,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  pbVar1 = (byte *)FUN_00bbf3a0(this_00);
  iVar2 = FUN_00bbf680(this,pbVar1);
  if (iVar2 < 0) {
    return 0xffffff01;
  }
  pbVar1 = (byte *)FUN_00bbf3a0(this);
  FUN_00bbf680(this_00,pbVar1);
  return 0;
}


//// FUNCTION FUN_00c018a0 @ 00c018a0 ////

void __fastcall FUN_00c018a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = param_3;
  puVar6 = (undefined4 *)((int)param_3 - (int)param_1 >> 2);
  puVar5 = (undefined4 *)(param_2 - (int)param_1 >> 2);
  puVar7 = puVar5;
  param_3 = puVar6;
  while (puVar2 = puVar7, puVar2 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)((int)param_3 % (int)puVar2);
    param_3 = puVar2;
  }
  if (((int)param_3 < (int)puVar6) && (0 < (int)param_3)) {
    puVar7 = param_1 + (int)param_3;
    do {
      uVar1 = *puVar7;
      puVar6 = puVar7 + (int)puVar5;
      puVar2 = puVar7;
      if (puVar7 + (int)puVar5 == puVar3) {
        puVar6 = param_1;
      }
      while (puVar6 != puVar7) {
        *puVar2 = *puVar6;
        iVar4 = (int)puVar3 - (int)puVar6 >> 2;
        puVar2 = puVar6;
        if ((int)puVar5 < iVar4) {
          puVar6 = puVar6 + (int)puVar5;
        }
        else {
          puVar6 = param_1 + ((int)puVar5 - iVar4);
        }
      }
      *puVar2 = uVar1;
      puVar7 = puVar7 + -1;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
  }
  return;
}


//// FUNCTION FUN_00c01940 @ 00c01940 ////

void __fastcall FUN_00c01940(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = param_3;
  puVar6 = (undefined4 *)((int)param_3 - (int)param_1 >> 2);
  puVar5 = (undefined4 *)(param_2 - (int)param_1 >> 2);
  puVar7 = puVar5;
  param_3 = puVar6;
  while (puVar2 = puVar7, puVar2 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)((int)param_3 % (int)puVar2);
    param_3 = puVar2;
  }
  if (((int)param_3 < (int)puVar6) && (0 < (int)param_3)) {
    puVar7 = param_1 + (int)param_3;
    do {
      uVar1 = *puVar7;
      puVar6 = puVar7 + (int)puVar5;
      puVar2 = puVar7;
      if (puVar7 + (int)puVar5 == puVar3) {
        puVar6 = param_1;
      }
      while (puVar6 != puVar7) {
        *puVar2 = *puVar6;
        iVar4 = (int)puVar3 - (int)puVar6 >> 2;
        puVar2 = puVar6;
        if ((int)puVar5 < iVar4) {
          puVar6 = puVar6 + (int)puVar5;
        }
        else {
          puVar6 = param_1 + ((int)puVar5 - iVar4);
        }
      }
      *puVar2 = uVar1;
      puVar7 = puVar7 + -1;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
  }
  return;
}


//// FUNCTION FUN_00c019e0 @ 00c019e0 ////

void __fastcall FUN_00c019e0(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(int **)(param_1 + param_2 * 4) = param_4;
    return;
  }
  do {
    iVar2 = (param_2 + -1) / 2;
    uVar1 = LH_Sort_Compare_00c01710(*(int **)(param_1 + iVar2 * 4),param_4);
    if ((char)uVar1 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  } while (param_3 < iVar2);
  *(int **)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00c01a50 @ 00c01a50 ////

void __fastcall FUN_00c01a50(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = param_3;
  puVar6 = (undefined4 *)((int)param_3 - (int)param_1 >> 2);
  puVar5 = (undefined4 *)(param_2 - (int)param_1 >> 2);
  puVar7 = puVar5;
  param_3 = puVar6;
  while (puVar2 = puVar7, puVar2 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)((int)param_3 % (int)puVar2);
    param_3 = puVar2;
  }
  if (((int)param_3 < (int)puVar6) && (0 < (int)param_3)) {
    puVar7 = param_1 + (int)param_3;
    do {
      uVar1 = *puVar7;
      puVar6 = puVar7 + (int)puVar5;
      puVar2 = puVar7;
      if (puVar7 + (int)puVar5 == puVar3) {
        puVar6 = param_1;
      }
      while (puVar6 != puVar7) {
        *puVar2 = *puVar6;
        iVar4 = (int)puVar3 - (int)puVar6 >> 2;
        puVar2 = puVar6;
        if ((int)puVar5 < iVar4) {
          puVar6 = puVar6 + (int)puVar5;
        }
        else {
          puVar6 = param_1 + ((int)puVar5 - iVar4);
        }
      }
      *puVar2 = uVar1;
      puVar7 = puVar7 + -1;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00c01b50 @ 00c01b50 ////

undefined4 * __thiscall ScalarDeletingDtor_00c01b50(void *this,byte param_1)

{
  SetVtable_00d9d9b4_00c00d00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c01b70 @ 00c01b70 ////

void __fastcall FUN_00c01b70(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00c01b80 @ 00c01b80 ////

void __fastcall FUN_00c01b80(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00c01ba0 @ 00c01ba0 ////

undefined4 * __fastcall FUN_00c01ba0(undefined4 *param_1)

{
  Ctor_vt00d9feb8_00be1e00(param_1);
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}


//// FUNCTION FUN_00c01bc0 @ 00c01bc0 ////

void __fastcall FUN_00c01bc0(undefined4 *param_1)

{
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  PKStringsCHeapString_Dtor(param_1);
  return;
}


//// FUNCTION LH_SortedArray_FindObject_00c01c00 @ 00c01c00 ////

int __thiscall LH_SortedArray_FindObject_00c01c00(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00c00ef0(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  iVar2 = LH_Array_GetAt_00bd39a0(this,uVar1);
  if (iVar2 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar2;
}


//// FUNCTION Ctor_vt00da2b88_00c01c50 @ 00c01c50 ////

undefined4 * __fastcall Ctor_vt00da2b88_00c01c50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da2b88;
  FUN_00c012b0(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00c01c70 @ 00c01c70 ////

void __fastcall Dtor_00c01c70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da2b88;
  LH_Array_FreeBuffer_00c012c0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c01c80 @ 00c01c80 ////

void __thiscall FUN_00c01c80(void *this,uint param_1)

{
  LH_Array_Reserve_00c01180((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION Ctor_vt00da2b8c_00c01c90 @ 00c01c90 ////

undefined4 * __fastcall Ctor_vt00da2b8c_00c01c90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da2b8c;
  FUN_00c012b0(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00c01cb0 @ 00c01cb0 ////

void __fastcall Dtor_00c01cb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0287b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da2b8c;
  local_4 = 0;
  FUN_00c01320((int)param_1);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00c012c0(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c01d00 @ 00c01d00 ////

int __fastcall FUN_00c01d00(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = LH_Array_GetCount((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = LH_Array_GetCount((int)this);
    iVar2 = LH_Array_GetAt_00bd3830(this,iVar1 - 1U);
    LH_Array_SetFilledSize_00c01280(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = LH_Array_GetCount((int)this);
  }
  return iVar2;
}


//// FUNCTION Ctor_vt00da2b90_00c01d50 @ 00c01d50 ////

undefined4 * __fastcall Ctor_vt00da2b90_00c01d50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da2b90;
  FUN_00c00e80(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00c01d70 @ 00c01d70 ////

void __fastcall Dtor_00c01d70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da2b90;
  LH_Array_FreeBuffer_00c00e90(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c01d80 @ 00c01d80 ////

void __thiscall FUN_00c01d80(void *this,uint param_1)

{
  LH_Array_Reserve_00c00d50((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION Ctor_vt00da2b94_00c01d90 @ 00c01d90 ////

undefined4 * __fastcall Ctor_vt00da2b94_00c01d90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da2b94;
  FUN_00c00e80(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00c01db0 @ 00c01db0 ////

void __fastcall Dtor_00c01db0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0289b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da2b94;
  local_4 = 0;
  FUN_00c01370((int)param_1);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00c00e90(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c01e00 @ 00c01e00 ////

int __fastcall FUN_00c01e00(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = GetField_8_00bd3890((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = GetField_8_00bd3890((int)this);
    iVar2 = LH_Array_GetAt_00bd3960(this,iVar1 - 1U);
    LH_Array_SetFilledSize_00c00e50(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = GetField_8_00bd3890((int)this);
  }
  return iVar2;
}


//// FUNCTION Ctor_vt00da2b98_00c01e50 @ 00c01e50 ////

undefined4 * __fastcall Ctor_vt00da2b98_00c01e50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da2b98;
  FUN_00c01110(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00c01e70 @ 00c01e70 ////

void __fastcall Dtor_00c01e70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da2b98;
  LH_Array_FreeBuffer_00c01120(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c01e80 @ 00c01e80 ////

void __thiscall FUN_00c01e80(void *this,uint param_1)

{
  LH_Array_Reserve_00c00fe0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION Ctor_vt00da2b9c_00c01e90 @ 00c01e90 ////

undefined4 * __fastcall Ctor_vt00da2b9c_00c01e90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da2b9c;
  FUN_00c01110(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00c01eb0 @ 00c01eb0 ////

void __fastcall Dtor_00c01eb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d028bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da2b9c;
  local_4 = 0;
  FUN_00c013c0((int)param_1);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00c01120(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c01f00 @ 00c01f00 ////

int __fastcall FUN_00c01f00(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = GetField_8_00bd38a0((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = GetField_8_00bd38a0((int)this);
    iVar2 = LH_Array_GetAt_00bd39a0(this,iVar1 - 1U);
    LH_Array_SetFilledSize_00c010e0(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = GetField_8_00bd38a0((int)this);
  }
  return iVar2;
}


//// FUNCTION ScalarDeletingDtor_00c01f50 @ 00c01f50 ////

undefined4 * __thiscall ScalarDeletingDtor_00c01f50(void *this,byte param_1)

{
  Dtor_00c01c70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c01f70 @ 00c01f70 ////

undefined4 * __thiscall ScalarDeletingDtor_00c01f70(void *this,byte param_1)

{
  Dtor_00c01cb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c01f90 @ 00c01f90 ////

undefined4 * __thiscall ScalarDeletingDtor_00c01f90(void *this,byte param_1)

{
  Dtor_00c01d70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c01fb0 @ 00c01fb0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c01fb0(void *this,byte param_1)

{
  Dtor_00c01db0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c01fd0 @ 00c01fd0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c01fd0(void *this,byte param_1)

{
  Dtor_00c01e70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c01ff0 @ 00c01ff0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c01ff0(void *this,byte param_1)

{
  Dtor_00c01eb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_Map_GetObject_00c02010 @ 00c02010 ////

int __thiscall LH_Map_GetObject_00c02010(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = LH_Array_GetAt_00c01410(this,param_1);
  if (iVar1 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar1;
}


//// FUNCTION LH_Array_FreeBuffer_00c02040 @ 00c02040 ////

void __fastcall LH_Array_FreeBuffer_00c02040(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00c02050 @ 00c02050 ////

void __fastcall LH_Array_FreeBuffer_00c02050(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00c02060 @ 00c02060 ////

int __thiscall FUN_00c02060(void *this,uint *param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_5;
  int *local_4;
  
  *param_2 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar5 = *(int *)((int)this + 8) + -1;
  iVar3 = 0;
  local_4 = this;
  if (-1 < iVar5) {
    do {
      iVar4 = (iVar5 + iVar3) / 2;
      iVar1 = *(int *)(*(int *)this + iVar4 * 4);
      if (iVar1 == 0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
        this = local_4;
      }
      uVar2 = *(uint *)(iVar1 + 4);
      if (*param_1 < uVar2) {
        iVar5 = iVar4 + -1;
      }
      else {
        if (*param_1 <= uVar2) {
          *param_2 = 1;
          return iVar4;
        }
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= iVar5);
  }
  iVar3 = (iVar5 + iVar3) / 2;
  iVar5 = *(int *)(*(int *)this + iVar3 * 4);
  if (iVar5 == 0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  if (*(uint *)(iVar5 + 4) <= *param_1) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


//// FUNCTION LH_Array_FreeBuffer_00c02140 @ 00c02140 ////

void __fastcall LH_Array_FreeBuffer_00c02140(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00c02170 @ 00c02170 ////

void __thiscall FUN_00c02170(void *this,undefined4 param_1)

{
  FUN_00c01450(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00c02190 @ 00c02190 ////

void __thiscall FUN_00c02190(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00c014e0(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      LH_Array_Reserve_00c01180(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00c01490(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00c021e0 @ 00c021e0 ////

void __thiscall FUN_00c021e0(void *this,undefined4 param_1)

{
  FUN_00c01510(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00c02200 @ 00c02200 ////

void __thiscall FUN_00c02200(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00c015a0(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      LH_Array_Reserve_00c00d50(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00c01550(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00c02250 @ 00c02250 ////

void __thiscall FUN_00c02250(void *this,undefined4 param_1)

{
  FUN_00c015d0(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00c02270 @ 00c02270 ////

void __thiscall FUN_00c02270(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00c01660(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      LH_Array_Reserve_00c00fe0(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00c01610(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00c022c0 @ 00c022c0 ////

void __thiscall FUN_00c022c0(void *this,undefined4 *param_1)

{
  FUN_00c01320((int)this);
  FUN_00c02190((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION LH_Array_CheckUnique @ 00c022e0 ////

uint __fastcall LH_Array_CheckUnique(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint extraout_EAX;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_4;
  
  uVar4 = param_1[2];
  uVar5 = 1;
  uStack_4 = param_1;
  if (1 < uVar4) {
    do {
      iVar1 = *param_1;
      puVar2 = *(uint **)(iVar1 + -4 + uVar5 * 4);
      puVar3 = *(uint **)(iVar1 + uVar5 * 4);
      uVar4 = iVar1 + uVar5 * 4;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( object1 != NULL ) && ( object2 != NULL )\n");
        DebugBreak();
        uVar4 = extraout_EAX;
      }
      if (*puVar3 <= *puVar2) {
        return uVar4 & 0xffffff00;
      }
      uVar4 = param_1[2];
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}


//// FUNCTION FUN_00c02340 @ 00c02340 ////

void __thiscall FUN_00c02340(void *this,undefined4 *param_1)

{
  FUN_00c01370((int)this);
  FUN_00c02200((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION LH_Array_IsSortedUnique_00c02360 @ 00c02360 ////

uint __fastcall LH_Array_IsSortedUnique_00c02360(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint extraout_EAX;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_4;
  
  uVar4 = param_1[2];
  uVar5 = 1;
  uStack_4 = param_1;
  if (1 < uVar4) {
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)(iVar1 + -4 + uVar5 * 4);
      iVar3 = *(int *)(iVar1 + uVar5 * 4);
      uVar4 = iVar1 + uVar5 * 4;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( object1 != NULL ) && ( object2 != NULL )\n");
        DebugBreak();
        uVar4 = extraout_EAX;
      }
      if (*(uint *)(iVar3 + 4) <= *(uint *)(iVar2 + 4)) {
        return uVar4 & 0xffffff00;
      }
      uVar4 = param_1[2];
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}


//// FUNCTION FUN_00c023c0 @ 00c023c0 ////

void __thiscall FUN_00c023c0(void *this,undefined4 *param_1)

{
  FUN_00c013c0((int)this);
  FUN_00c02270((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION LH_Sort_Med3_00c024c0 @ 00c024c0 ////

void __fastcall LH_Sort_Med3_00c024c0(int *param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uStack_4;
  
  puVar1 = (uint *)*param_2;
  puVar2 = (uint *)*param_1;
  uStack_4 = param_1;
  if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*puVar1 < *puVar2) {
    iVar3 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar3;
  }
  puVar1 = (uint *)*param_3;
  puVar2 = (uint *)*param_2;
  if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*puVar1 < *puVar2) {
    iVar3 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar3;
  }
  puVar1 = (uint *)*param_2;
  puVar2 = (uint *)*param_1;
  if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
    LH_Assert(&param_3,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*puVar1 < *puVar2) {
    iVar3 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar3;
  }
  return;
}


//// FUNCTION LH_Array_MedianOfThree_00c02590 @ 00c02590 ////

void __fastcall LH_Array_MedianOfThree_00c02590(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  uStack_4 = param_1;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 4) < *(uint *)(iVar2 + 4)) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = *param_3;
  iVar2 = *param_2;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 4) < *(uint *)(iVar2 + 4)) {
    iVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  iVar1 = *param_2;
  iVar2 = *param_1;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    LH_Assert(&param_3,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 4) < *(uint *)(iVar2 + 4)) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}


//// FUNCTION FUN_00c02660 @ 00c02660 ////

void __fastcall FUN_00c02660(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = LH_Sort_Compare_00c01710((int *)*param_2,(int *)*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = LH_Sort_Compare_00c01710((int *)*param_3,(int *)*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = LH_Sort_Compare_00c01710((int *)*param_2,(int *)*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}


//// FUNCTION FUN_00c026d0 @ 00c026d0 ////

void __fastcall FUN_00c026d0(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2;
  while( true ) {
    iVar2 = iVar3 * 2 + 2;
    if (param_3 <= iVar2) break;
    uVar1 = LH_Sort_Compare_00c01710(*(int **)(param_1 + iVar2 * 4),*(int **)(param_1 + -4 + iVar2 * 4));
    if ((char)uVar1 != '\0') {
      iVar2 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar3 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar3 = param_3 + -1;
  }
  FUN_00c019e0(param_1,iVar3,param_2,param_4);
  return;
}


//// FUNCTION LH_Sort_PushHeap_00c02770 @ 00c02770 ////

void __fastcall LH_Sort_PushHeap_00c02770(int param_1,int param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_3 < param_2) {
    do {
      iVar2 = (param_2 + -1) / 2;
      puVar1 = *(uint **)(param_1 + iVar2 * 4);
      if ((puVar1 == (uint *)0x0) || (param_4 == (uint *)0x0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
    } while ((*puVar1 < *param_4) &&
            (*(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4),
            param_2 = iVar2, param_3 < iVar2));
    *(uint **)(param_1 + param_2 * 4) = param_4;
    return;
  }
  *(uint **)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION LH_Array_PushHeap_00c02800 @ 00c02800 ////

void __fastcall LH_Array_PushHeap_00c02800(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_3 < param_2) {
    do {
      iVar2 = (param_2 + -1) / 2;
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if ((iVar1 == 0) || (param_4 == 0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
    } while ((*(uint *)(iVar1 + 4) < *(uint *)(param_4 + 4)) &&
            (*(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4),
            param_2 = iVar2, param_3 < iVar2));
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION PKCAutoDeleteArray_Get_00c028c0 @ 00c028c0 ////

int __fastcall PKCAutoDeleteArray_Get_00c028c0(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d028db;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x79);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION PKCAutoDeleteArray_Resize_00c02990 @ 00c02990 ////

void __thiscall PKCAutoDeleteArray_Resize_00c02990(void *this,uint param_1)

{
  void *pvVar1;
  LPCSTR pCVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d028fb;
  local_c = ExceptionList;
  if (param_1 != *(uint *)((int)this + 4)) {
    if (param_1 == 0) {
      if (*(uint *)((int)this + 4) != 0) {
        ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
        _free(*(void **)this);
      }
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      ExceptionList = &local_c;
      pvVar1 = operator_new(param_1 * 0x28c);
      if (pvVar1 == (void *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 0;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x46);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_111,pCVar2);
        DebugBreak();
      }
      uVar5 = param_1;
      if (*(uint *)((int)this + 4) < param_1) {
        uVar5 = *(uint *)((int)this + 4);
      }
      if (uVar5 != 0) {
        iVar3 = 0;
        do {
          puVar6 = (undefined4 *)(*(int *)this + iVar3);
          puVar7 = (undefined4 *)(iVar3 + (int)pvVar1);
          iVar3 = iVar3 + 0x28c;
          uVar5 = uVar5 - 1;
          for (iVar4 = 0xa3; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        } while (uVar5 != 0);
      }
      if (*(void **)this != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)this);
      }
      *(void **)this = pvVar1;
      *(uint *)((int)this + 4) = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION PKCAutoDeleteArray_At_00c02bb0 @ 00c02bb0 ////

int __thiscall PKCAutoDeleteArray_At_00c02bb0(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0291b;
  local_c = ExceptionList;
  if (*(uint *)((int)this + 4) <= param_1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Index ");
    LH_PrintResourceID(&local_110,param_1);
    LH_LogErrorMessage(&local_110," is out of range (");
    LH_PrintResourceID(&local_110,*(undefined4 *)((int)this + 4));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return param_1 * 0x28c + *(int *)this;
}


//// FUNCTION PKCAutoDeleteArray_At_00c02cc0 @ 00c02cc0 ////

int __thiscall PKCAutoDeleteArray_At_00c02cc0(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0293b;
  local_c = ExceptionList;
  if (*(uint *)((int)this + 4) <= param_1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Index ");
    LH_PrintResourceID(&local_110,param_1);
    LH_LogErrorMessage(&local_110," is out of range (");
    LH_PrintResourceID(&local_110,*(undefined4 *)((int)this + 4));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return param_1 * 0x10 + *(int *)this;
}


//// FUNCTION LH_SortedArray_FindObject_00c02de0 @ 00c02de0 ////

int __thiscall LH_SortedArray_FindObject_00c02de0(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00c02060(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  iVar2 = LH_Array_GetAt_00bd3960(this,uVar1);
  if (iVar2 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar2;
}


//// FUNCTION FUN_00c02e30 @ 00c02e30 ////

void __thiscall FUN_00c02e30(void *this,undefined4 param_1)

{
  FUN_00c02170((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION LH_Array_CopyItems @ 00c02e40 ////

void __thiscall LH_Array_CopyItems(void *this,undefined4 *param_1)

{
  FUN_00c02190((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00c02e50 @ 00c02e50 ////

void __thiscall FUN_00c02e50(void *this,undefined4 param_1)

{
  FUN_00c021e0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00c02e60 @ 00c02e60 ////

void __thiscall FUN_00c02e60(void *this,undefined4 *param_1)

{
  FUN_00c02200((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00c02e70 @ 00c02e70 ////

void __thiscall FUN_00c02e70(void *this,undefined4 param_1)

{
  FUN_00c02250((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00c02e80 @ 00c02e80 ////

void __thiscall FUN_00c02e80(void *this,undefined4 *param_1)

{
  FUN_00c02270((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00c02ec0 @ 00c02ec0 ////

void __fastcall FUN_00c02ec0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    LH_Sort_Med3_00c024c0(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    LH_Sort_Med3_00c024c0(param_2 + -iVar1,param_2,param_2 + iVar1);
    LH_Sort_Med3_00c024c0(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    LH_Sort_Med3_00c024c0(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  LH_Sort_Med3_00c024c0(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c02f80 @ 00c02f80 ////

void __fastcall FUN_00c02f80(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    LH_Array_MedianOfThree_00c02590(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    LH_Array_MedianOfThree_00c02590(param_2 + -iVar1,param_2,param_2 + iVar1);
    LH_Array_MedianOfThree_00c02590(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    LH_Array_MedianOfThree_00c02590(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  LH_Array_MedianOfThree_00c02590(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c03040 @ 00c03040 ////

void __fastcall FUN_00c03040(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00c02660(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_00c02660(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_00c02660(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_00c02660(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_00c02660(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c030e0 @ 00c030e0 ////

void __fastcall FUN_00c030e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    FUN_00c026d0(param_1,iVar3,iVar2,*(int **)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION LH_Sort_AdjustHeap_00c03140 @ 00c03140 ////

void __fastcall LH_Sort_AdjustHeap_00c03140(int param_1,int param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined1 local_9;
  uint *local_8;
  int local_4;
  
  local_4 = param_2;
  while( true ) {
    iVar2 = param_2 * 2 + 2;
    if (param_3 <= iVar2) break;
    puVar1 = *(uint **)(param_1 + iVar2 * 4);
    local_8 = *(uint **)(param_1 + -4 + iVar2 * 4);
    if ((puVar1 == (uint *)0x0) || (local_8 == (uint *)0x0)) {
      LH_Assert(&local_9,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*puVar1 < *local_8) {
      iVar2 = param_2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    param_2 = param_3 + -1;
  }
  LH_Sort_PushHeap_00c02770(param_1,param_2,local_4,param_4);
  return;
}


//// FUNCTION LH_Array_AdjustHeap_00c031e0 @ 00c031e0 ////

void __fastcall LH_Array_AdjustHeap_00c031e0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_9;
  int local_8;
  int local_4;
  
  local_4 = param_2;
  while( true ) {
    iVar2 = param_2 * 2 + 2;
    if (param_3 <= iVar2) break;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    local_8 = *(int *)(param_1 + -4 + iVar2 * 4);
    if ((iVar1 == 0) || (local_8 == 0)) {
      LH_Assert(&local_9,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*(uint *)(iVar1 + 4) < *(uint *)(local_8 + 4)) {
      iVar2 = param_2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    param_2 = param_3 + -1;
  }
  LH_Array_PushHeap_00c02800(param_1,param_2,local_4,param_4);
  return;
}


//// FUNCTION FUN_00c03310 @ 00c03310 ////

void * __thiscall FUN_00c03310(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  PKCAutoDeleteArray_Resize_00bd45c0(this,*(uint *)((int)param_1 + 4));
  uVar3 = 0;
  if (*(int *)((int)param_1 + 4) != 0) {
    do {
      puVar1 = (undefined4 *)PKCAutoDeleteArray_At_00bd4710(param_1,uVar3);
      puVar2 = (undefined4 *)PKCAutoDeleteArray_At_00bd4710(this,uVar3);
      *puVar2 = *puVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)param_1 + 4));
  }
  return this;
}


//// FUNCTION FUN_00c03370 @ 00c03370 ////

void __fastcall FUN_00c03370(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_00c01bc0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  return;
}


//// FUNCTION LH_AddResourceToList @ 00c033e0 ////

void __thiscall LH_AddResourceToList(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    LH_Assert(&param_1,"Object != NULL\n");
    DebugBreak();
  }
  FUN_00c02e30(this,iVar1);
  return;
}


//// FUNCTION LH_Container_AddObject_00c03410 @ 00c03410 ////

void __thiscall LH_Container_AddObject_00c03410(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    LH_Assert(&param_1,"Object != NULL\n");
    DebugBreak();
  }
  FUN_00c02e50(this,iVar1);
  return;
}


//// FUNCTION LH_Archive_SerializeCriteriaSampleIds @ 00c03440 ////

void __fastcall LH_Archive_SerializeCriteriaSampleIds(uint param_1,void *param_2)

{
  LH_Archive_SerializeU32Array(param_2,param_1);
  return;
}


//// FUNCTION LH_Container_AddObject_00c03450 @ 00c03450 ////

void __thiscall LH_Container_AddObject_00c03450(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    LH_Assert(&param_1,"Object != NULL\n");
    DebugBreak();
  }
  FUN_00c02e70(this,iVar1);
  return;
}


//// FUNCTION FUN_00c03480 @ 00c03480 ////

void __thiscall FUN_00c03480(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = LH_Array_GetCount((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00c02190(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00c034c0 @ 00c034c0 ////

void __thiscall LH_Array_AdoptRequireEmpty_00c034c0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd3890((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00c02200(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00c03500 @ 00c03500 ////

void __thiscall LH_Array_AdoptRequireEmpty_00c03500(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd38a0((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00c02270(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION LH_Sort_UnguardedPartition_00c03540 @ 00c03540 ////

void __fastcall LH_Sort_UnguardedPartition_00c03540(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  undefined4 *local_4;
  
  piVar7 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_8 = param_2;
  local_4 = param_1;
  FUN_00c02ec0(param_2,piVar7,param_3 + -1);
  piVar6 = piVar7 + 1;
  local_10 = piVar6;
  if (param_2 < piVar7) {
    while( true ) {
      puVar2 = (uint *)piVar7[-1];
      puVar3 = (uint *)*piVar7;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if (*puVar2 < *puVar3) break;
      puVar2 = (uint *)*piVar7;
      puVar3 = (uint *)piVar7[-1];
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*puVar2 < *puVar3) || (piVar7 = piVar7 + -1, piVar7 <= local_8)) break;
    }
  }
  piVar5 = piVar6;
  piVar1 = local_10;
  local_c = piVar7;
  if (piVar6 < param_3) {
    while( true ) {
      puVar2 = (uint *)*piVar6;
      puVar3 = (uint *)*piVar7;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar5 = piVar6;
      piVar1 = piVar6;
      if (*puVar2 < *puVar3) break;
      puVar2 = (uint *)*piVar7;
      puVar3 = (uint *)*piVar6;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*puVar2 < *puVar3) ||
         (piVar6 = piVar6 + 1, piVar5 = piVar6, piVar1 = piVar6, param_3 <= piVar6)) break;
    }
  }
joined_r0x00c03649:
  do {
    local_10 = piVar1;
    if (param_3 <= piVar5) {
LAB_00c036c2:
      if (local_8 < local_c) {
        do {
          puVar2 = (uint *)local_c[-1];
          puVar3 = (uint *)*piVar7;
          if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          if (*puVar3 <= *puVar2) {
            puVar2 = (uint *)*piVar7;
            puVar3 = (uint *)local_c[-1];
            if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            piVar6 = local_10;
            if (*puVar2 < *puVar3) break;
            iVar4 = piVar7[-1];
            piVar7 = piVar7 + -1;
            *piVar7 = local_c[-1];
            local_c[-1] = iVar4;
          }
          local_c = local_c + -1;
          piVar6 = local_10;
        } while (local_8 < local_c);
      }
      if (local_c == local_8) {
        if (piVar5 == param_3) {
          *local_4 = piVar7;
          local_4[1] = piVar6;
          return;
        }
        if (piVar6 != piVar5) {
          iVar4 = *piVar7;
          *piVar7 = *piVar6;
          *piVar6 = iVar4;
        }
        iVar4 = *piVar7;
        piVar6 = piVar6 + 1;
        *piVar7 = *piVar5;
        *piVar5 = iVar4;
        piVar5 = piVar5 + 1;
        piVar1 = piVar6;
        piVar7 = piVar7 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar5 == param_3) {
          piVar7 = piVar7 + -1;
          if (local_c != piVar7) {
            iVar4 = *local_c;
            *local_c = *piVar7;
            *piVar7 = iVar4;
          }
          piVar1 = piVar6 + -1;
          iVar4 = *piVar7;
          piVar6 = piVar6 + -1;
          *piVar7 = *piVar1;
          *piVar6 = iVar4;
          piVar1 = piVar6;
        }
        else {
          iVar4 = *piVar5;
          *piVar5 = *local_c;
          *local_c = iVar4;
          piVar5 = piVar5 + 1;
          piVar1 = local_10;
        }
      }
      goto joined_r0x00c03649;
    }
    puVar2 = (uint *)*piVar7;
    puVar3 = (uint *)*piVar5;
    if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*puVar3 <= *puVar2) {
      puVar2 = (uint *)*piVar5;
      puVar3 = (uint *)*piVar7;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar6 = local_10;
      if (*puVar2 < *puVar3) goto LAB_00c036c2;
      iVar4 = *local_10;
      *local_10 = *piVar5;
      *piVar5 = iVar4;
      local_10 = local_10 + 1;
    }
    piVar6 = local_10;
    piVar5 = piVar5 + 1;
    piVar1 = local_10;
  } while( true );
}


//// FUNCTION LH_Sort_InsertionSort_00c037f0 @ 00c037f0 ////

void __fastcall LH_Sort_InsertionSort_00c037f0(int *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  if ((param_1 != param_2) && (piVar3 = param_1 + 1, piVar3 != param_2)) {
    local_10 = param_1 + 2;
    local_8 = param_1;
    local_4 = param_2;
    do {
      puVar1 = (uint *)*piVar3;
      puVar2 = (uint *)*param_1;
      if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar4 = piVar3;
      if (*puVar1 < *puVar2) {
        if ((param_1 != piVar3) && (piVar3 != local_10)) {
          FUN_00c018a0(param_1,(int)piVar3,local_10);
        }
      }
      else {
        do {
          puVar1 = (uint *)*piVar3;
          puVar2 = (uint *)piVar4[-1];
          local_c = piVar4;
          if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          piVar4 = piVar4 + -1;
        } while (*puVar1 < *puVar2);
        param_1 = local_8;
        if ((local_c != piVar3) && (piVar3 != local_10)) {
          FUN_00c018a0(local_c,(int)piVar3,local_10);
          param_1 = local_8;
        }
      }
      piVar3 = piVar3 + 1;
      local_10 = local_10 + 1;
    } while (piVar3 != local_4);
  }
  return;
}


//// FUNCTION LH_Sort_UnguardedPartition_00c038f0 @ 00c038f0 ////

void __fastcall LH_Sort_UnguardedPartition_00c038f0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  undefined4 *local_4;
  
  piVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_8 = param_2;
  local_4 = param_1;
  FUN_00c02f80(param_2,piVar6,param_3 + -1);
  piVar5 = piVar6 + 1;
  local_10 = piVar5;
  if (param_2 < piVar6) {
    while( true ) {
      iVar2 = piVar6[-1];
      iVar3 = *piVar6;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if (*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) break;
      iVar2 = *piVar6;
      iVar3 = piVar6[-1];
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) || (piVar6 = piVar6 + -1, piVar6 <= local_8)
         ) break;
    }
  }
  piVar4 = piVar5;
  piVar1 = local_10;
  local_c = piVar6;
  if (piVar5 < param_3) {
    while( true ) {
      iVar2 = *piVar5;
      iVar3 = *piVar6;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar4 = piVar5;
      piVar1 = piVar5;
      if (*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) break;
      iVar2 = *piVar6;
      iVar3 = *piVar5;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) ||
         (piVar5 = piVar5 + 1, piVar4 = piVar5, piVar1 = piVar5, param_3 <= piVar5)) break;
    }
  }
joined_r0x00c03a04:
  do {
    local_10 = piVar1;
    if (param_3 <= piVar4) {
LAB_00c03a7a:
      if (local_8 < local_c) {
        do {
          iVar2 = local_c[-1];
          iVar3 = *piVar6;
          if ((iVar2 == 0) || (iVar3 == 0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          if (*(uint *)(iVar3 + 4) <= *(uint *)(iVar2 + 4)) {
            iVar2 = *piVar6;
            iVar3 = local_c[-1];
            if ((iVar2 == 0) || (iVar3 == 0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            piVar5 = local_10;
            if (*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) break;
            iVar2 = piVar6[-1];
            piVar6 = piVar6 + -1;
            *piVar6 = local_c[-1];
            local_c[-1] = iVar2;
          }
          local_c = local_c + -1;
          piVar5 = local_10;
        } while (local_8 < local_c);
      }
      if (local_c == local_8) {
        if (piVar4 == param_3) {
          *local_4 = piVar6;
          local_4[1] = piVar5;
          return;
        }
        if (piVar5 != piVar4) {
          iVar2 = *piVar6;
          *piVar6 = *piVar5;
          *piVar5 = iVar2;
        }
        iVar2 = *piVar6;
        piVar5 = piVar5 + 1;
        *piVar6 = *piVar4;
        *piVar4 = iVar2;
        piVar4 = piVar4 + 1;
        piVar1 = piVar5;
        piVar6 = piVar6 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar4 == param_3) {
          piVar6 = piVar6 + -1;
          if (local_c != piVar6) {
            iVar2 = *local_c;
            *local_c = *piVar6;
            *piVar6 = iVar2;
          }
          piVar1 = piVar5 + -1;
          iVar2 = *piVar6;
          piVar5 = piVar5 + -1;
          *piVar6 = *piVar1;
          *piVar5 = iVar2;
          piVar1 = piVar5;
        }
        else {
          iVar2 = *piVar4;
          *piVar4 = *local_c;
          *local_c = iVar2;
          piVar4 = piVar4 + 1;
          piVar1 = local_10;
        }
      }
      goto joined_r0x00c03a04;
    }
    iVar2 = *piVar6;
    iVar3 = *piVar4;
    if ((iVar2 == 0) || (iVar3 == 0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*(uint *)(iVar3 + 4) <= *(uint *)(iVar2 + 4)) {
      iVar2 = *piVar4;
      iVar3 = *piVar6;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar5 = local_10;
      if (*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) goto LAB_00c03a7a;
      iVar2 = *local_10;
      *local_10 = *piVar4;
      *piVar4 = iVar2;
      local_10 = local_10 + 1;
    }
    piVar5 = local_10;
    piVar4 = piVar4 + 1;
    piVar1 = local_10;
  } while( true );
}


//// FUNCTION LH_Sort_InsertionSort_00c03bb0 @ 00c03bb0 ////

void __fastcall LH_Sort_InsertionSort_00c03bb0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  if ((param_1 != param_2) && (piVar3 = param_1 + 1, piVar3 != param_2)) {
    local_10 = param_1 + 2;
    local_8 = param_1;
    local_4 = param_2;
    do {
      iVar1 = *piVar3;
      iVar2 = *param_1;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar4 = piVar3;
      if (*(uint *)(iVar1 + 4) < *(uint *)(iVar2 + 4)) {
        if ((param_1 != piVar3) && (piVar3 != local_10)) {
          FUN_00c01940(param_1,(int)piVar3,local_10);
        }
      }
      else {
        do {
          iVar1 = *piVar3;
          iVar2 = piVar4[-1];
          local_c = piVar4;
          if ((iVar1 == 0) || (iVar2 == 0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          piVar4 = piVar4 + -1;
        } while (*(uint *)(iVar1 + 4) < *(uint *)(iVar2 + 4));
        param_1 = local_8;
        if ((local_c != piVar3) && (piVar3 != local_10)) {
          FUN_00c01940(local_c,(int)piVar3,local_10);
          param_1 = local_8;
        }
      }
      piVar3 = piVar3 + 1;
      local_10 = local_10 + 1;
    } while (piVar3 != local_4);
  }
  return;
}


//// FUNCTION LH_Sort_UnguardedPartition_00c03cb0 @ 00c03cb0 ////

void __fastcall LH_Sort_UnguardedPartition_00c03cb0(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  uint *local_4;
  
  piVar8 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_c = param_2;
  local_4 = param_1;
  FUN_00c03040(param_2,piVar8,param_3 + -1);
  piVar7 = piVar8 + 1;
  local_14 = piVar7;
  piVar4 = piVar7;
  if (param_2 < piVar8) {
    do {
      piVar1 = (int *)piVar8[-1];
      piVar9 = (int *)*piVar8;
      if ((piVar1 == (int *)0x0) || (piVar9 == (int *)0x0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      pbVar5 = (byte *)FUN_00bbf3a0(piVar9);
      iVar6 = FUN_00bbf680(piVar1,pbVar5);
      piVar4 = local_14;
      if (iVar6 < 0) break;
      pbVar5 = (byte *)FUN_00bbf3a0(piVar1);
      FUN_00bbf680(piVar9,pbVar5);
      piVar1 = (int *)*piVar8;
      piVar9 = (int *)piVar8[-1];
      if ((piVar1 == (int *)0x0) || (piVar9 == (int *)0x0)) {
        LH_Assert(&local_17,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      pbVar5 = (byte *)FUN_00bbf3a0(piVar9);
      iVar6 = FUN_00bbf680(piVar1,pbVar5);
      piVar4 = local_14;
      if (iVar6 < 0) break;
      pbVar5 = (byte *)FUN_00bbf3a0(piVar1);
      FUN_00bbf680(piVar9,pbVar5);
      piVar8 = piVar8 + -1;
      piVar4 = local_14;
    } while (local_c < piVar8);
  }
  do {
    piVar1 = piVar7;
    local_10 = piVar8;
    piVar9 = piVar8;
    if (param_3 <= piVar7) break;
    piVar2 = (int *)*piVar7;
    piVar3 = (int *)*piVar8;
    if ((piVar2 == (int *)0x0) || (piVar3 == (int *)0x0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    pbVar5 = (byte *)FUN_00bbf3a0(piVar3);
    iVar6 = FUN_00bbf680(piVar2,pbVar5);
    piVar4 = piVar7;
    if (iVar6 < 0) break;
    pbVar5 = (byte *)FUN_00bbf3a0(piVar2);
    FUN_00bbf680(piVar3,pbVar5);
    piVar2 = (int *)*piVar8;
    piVar3 = (int *)*piVar7;
    if ((piVar2 == (int *)0x0) || (piVar3 == (int *)0x0)) {
      LH_Assert(&local_17,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    pbVar5 = (byte *)FUN_00bbf3a0(piVar3);
    iVar6 = FUN_00bbf680(piVar2,pbVar5);
    if (iVar6 < 0) break;
    pbVar5 = (byte *)FUN_00bbf3a0(piVar2);
    FUN_00bbf680(piVar3,pbVar5);
    piVar7 = piVar7 + 1;
    piVar4 = piVar7;
  } while( true );
joined_r0x00c03e37:
  local_14 = piVar4;
  if (param_3 <= piVar1) {
LAB_00c03efe:
    bVar10 = piVar8 == local_c;
    if (local_c < piVar8) {
      do {
        piVar7 = (int *)piVar8[-1];
        local_8 = (int *)*piVar9;
        if ((piVar7 == (int *)0x0) || (local_8 == (int *)0x0)) {
          LH_Assert(&local_16,"( C1 != NULL ) && ( C2 != NULL )\n");
          DebugBreak();
        }
        pbVar5 = (byte *)FUN_00bbf3a0(local_8);
        iVar6 = FUN_00bbf680(piVar7,pbVar5);
        if (-1 < iVar6) {
          pbVar5 = (byte *)FUN_00bbf3a0(piVar7);
          FUN_00bbf680(local_8,pbVar5);
          piVar7 = (int *)*piVar9;
          local_8 = (int *)piVar8[-1];
          if ((piVar7 == (int *)0x0) || (local_8 == (int *)0x0)) {
            LH_Assert(&local_15,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          pbVar5 = (byte *)FUN_00bbf3a0(local_8);
          iVar6 = FUN_00bbf680(piVar7,pbVar5);
          if (iVar6 < 0) break;
          pbVar5 = (byte *)FUN_00bbf3a0(piVar7);
          FUN_00bbf680(local_8,pbVar5);
          iVar6 = piVar9[-1];
          piVar9 = piVar9 + -1;
          *piVar9 = piVar8[-1];
          piVar8[-1] = iVar6;
        }
        piVar8 = piVar8 + -1;
        local_10 = piVar8;
      } while (local_c < piVar8);
      bVar10 = piVar8 == local_c;
      piVar7 = local_14;
    }
    if (bVar10) {
      if (piVar1 == param_3) {
        *local_4 = (uint)piVar9;
        local_4[1] = (uint)piVar7;
        return;
      }
      if (piVar7 != piVar1) {
        iVar6 = *piVar9;
        *piVar9 = *piVar7;
        *piVar7 = iVar6;
      }
      iVar6 = *piVar9;
      *piVar9 = *piVar1;
      piVar7 = piVar7 + 1;
      *piVar1 = iVar6;
      piVar1 = piVar1 + 1;
      piVar4 = piVar7;
      piVar9 = piVar9 + 1;
    }
    else {
      piVar8 = piVar8 + -1;
      local_10 = piVar8;
      if (piVar1 == param_3) {
        piVar9 = piVar9 + -1;
        if (piVar8 != piVar9) {
          iVar6 = *piVar8;
          *piVar8 = *piVar9;
          *piVar9 = iVar6;
        }
        piVar4 = piVar7 + -1;
        iVar6 = *piVar9;
        piVar7 = piVar7 + -1;
        *piVar9 = *piVar4;
        *piVar7 = iVar6;
        piVar4 = piVar7;
      }
      else {
        iVar6 = *piVar1;
        *piVar1 = *piVar8;
        *piVar8 = iVar6;
        piVar1 = piVar1 + 1;
        piVar4 = local_14;
      }
    }
    goto joined_r0x00c03e37;
  }
  piVar7 = (int *)*piVar9;
  local_8 = (int *)*piVar1;
  if ((piVar7 == (int *)0x0) || (local_8 == (int *)0x0)) {
    LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  pbVar5 = (byte *)FUN_00bbf3a0(local_8);
  iVar6 = FUN_00bbf680(piVar7,pbVar5);
  if (-1 < iVar6) {
    pbVar5 = (byte *)FUN_00bbf3a0(piVar7);
    FUN_00bbf680(local_8,pbVar5);
    piVar4 = (int *)*piVar1;
    piVar2 = (int *)*piVar9;
    if ((piVar4 == (int *)0x0) || (piVar2 == (int *)0x0)) {
      LH_Assert(&local_17,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    pbVar5 = (byte *)FUN_00bbf3a0(piVar2);
    iVar6 = FUN_00bbf680(piVar4,pbVar5);
    piVar7 = local_14;
    piVar8 = local_10;
    if (iVar6 < 0) goto LAB_00c03efe;
    pbVar5 = (byte *)FUN_00bbf3a0(piVar4);
    FUN_00bbf680(piVar2,pbVar5);
    iVar6 = *local_14;
    *local_14 = *piVar1;
    *piVar1 = iVar6;
    piVar8 = local_10;
    local_14 = local_14 + 1;
  }
  piVar7 = local_14;
  piVar1 = piVar1 + 1;
  piVar4 = local_14;
  goto joined_r0x00c03e37;
}


//// FUNCTION LH_Sort_InsertionSort_00c04080 @ 00c04080 ////

void __fastcall LH_Sort_InsertionSort_00c04080(undefined4 *param_1,undefined4 *param_2)

{
  int *this;
  int *this_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((param_1 != param_2) && (puVar7 = param_1 + 1, puVar7 != param_2)) {
    puVar5 = param_1 + 2;
    do {
      uVar2 = LH_Sort_Compare_00c01710((int *)*puVar7,(int *)*param_1);
      puVar1 = puVar7;
      if ((char)uVar2 == '\0') {
        do {
          puVar6 = puVar1;
          this = (int *)*puVar7;
          this_00 = (int *)puVar6[-1];
          if ((this == (int *)0x0) || (this_00 == (int *)0x0)) {
            LH_Assert(&stack0x00000004,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          pbVar3 = (byte *)FUN_00bbf3a0(this_00);
          iVar4 = FUN_00bbf680(this,pbVar3);
          puVar1 = puVar6 + -1;
        } while (iVar4 < 0);
        pbVar3 = (byte *)FUN_00bbf3a0(this);
        FUN_00bbf680(this_00,pbVar3);
        if ((puVar6 != puVar7) && (puVar7 != puVar5)) {
          FUN_00c01a50(puVar6,(int)puVar7,puVar5);
        }
      }
      else if ((param_1 != puVar7) && (puVar7 != puVar5)) {
        FUN_00c01a50(param_1,(int)puVar7,puVar5);
      }
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar7 != param_2);
  }
  return;
}


//// FUNCTION FUN_00c04190 @ 00c04190 ////

void __fastcall FUN_00c04190(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    LH_Sort_AdjustHeap_00c03140(param_1,iVar3,iVar2,*(uint **)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00c041d0 @ 00c041d0 ////

void __fastcall FUN_00c041d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    LH_Array_AdjustHeap_00c031e0(param_1,iVar3,iVar2,*(int *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION PKCAutoDeleteArray_Resize_00c042d0 @ 00c042d0 ////

void __thiscall PKCAutoDeleteArray_Resize_00c042d0(void *this,uint param_1)

{
  void *pvVar1;
  uint *puVar2;
  LPCSTR pCVar3;
  uint uVar4;
  uint uVar5;
  uint *local_118;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02969;
  local_c = ExceptionList;
  if (param_1 != *(uint *)((int)this + 4)) {
    if (param_1 == 0) {
      if (*(uint *)((int)this + 4) != 0) {
        pvVar1 = *(void **)this;
        if (pvVar1 != (void *)0x0) {
          ExceptionList = &local_c;
          _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),FUN_00c01b80);
                    /* WARNING: Subroutine does not return */
          _free((void *)((int)pvVar1 + -4));
        }
        *(undefined4 *)this = 0;
      }
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      ExceptionList = &local_c;
      puVar2 = operator_new(param_1 * 8 + 4);
      local_4 = 0;
      if (puVar2 == (uint *)0x0) {
        local_118 = (uint *)0x0;
      }
      else {
        local_118 = puVar2 + 1;
        *puVar2 = param_1;
        _eh_vector_constructor_iterator_(local_118,8,param_1,FUN_00c01b70,FUN_00c01b80);
      }
      local_4 = 0xffffffff;
      if (local_118 == (uint *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x46);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_111,pCVar3);
        local_4 = 0xffffffff;
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      uVar5 = param_1;
      if (*(uint *)((int)this + 4) < param_1) {
        uVar5 = *(uint *)((int)this + 4);
      }
      if ((uVar5 != 0) && (uVar4 = 0, uVar5 != 0)) {
        do {
          FUN_00c03310(local_118 + uVar4 * 2,(void *)(*(int *)this + uVar4 * 8));
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      pvVar1 = *(void **)this;
      if (pvVar1 != (void *)0x0) {
        _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),FUN_00c01b80);
                    /* WARNING: Subroutine does not return */
        _free((void *)((int)pvVar1 + -4));
      }
      *(uint **)this = local_118;
      *(uint *)((int)this + 4) = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION PKCAutoDeleteArray_Resize_00c044b0 @ 00c044b0 ////

void __thiscall PKCAutoDeleteArray_Resize_00c044b0(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  LPCSTR pCVar4;
  uint uVar5;
  int iVar6;
  uint *local_11c;
  undefined1 local_115;
  int *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02999;
  local_c = ExceptionList;
  if (param_1 != *(uint *)((int)this + 4)) {
    local_114 = this;
    if (param_1 == 0) {
      if (*(uint *)((int)this + 4) != 0) {
        pvVar1 = *(void **)this;
        if (pvVar1 != (void *)0x0) {
          ExceptionList = &local_c;
          _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_00c01bc0);
                    /* WARNING: Subroutine does not return */
          _free((void *)((int)pvVar1 + -4));
        }
        *(undefined4 *)this = 0;
      }
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      ExceptionList = &local_c;
      puVar3 = operator_new(param_1 * 0x10 + 4);
      local_4 = 0;
      if (puVar3 == (uint *)0x0) {
        local_11c = (uint *)0x0;
      }
      else {
        local_11c = puVar3 + 1;
        *puVar3 = param_1;
        _eh_vector_constructor_iterator_(local_11c,0x10,param_1,FUN_00c01ba0,FUN_00c01bc0);
      }
      local_4 = 0xffffffff;
      if (local_11c == (uint *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x46);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_115,pCVar4);
        local_4 = 0xffffffff;
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      uVar5 = param_1;
      if (*(uint *)((int)this + 4) < param_1) {
        uVar5 = *(uint *)((int)this + 4);
      }
      if (uVar5 != 0) {
        iVar6 = 0;
        puVar3 = local_11c;
        do {
          iVar2 = *(int *)this;
          FUN_00be2010(puVar3,iVar2 + iVar6);
          FUN_00c03310(puVar3 + 2,(void *)(iVar2 + iVar6 + 8));
          iVar6 = iVar6 + 0x10;
          puVar3 = puVar3 + 4;
          uVar5 = uVar5 - 1;
          this = local_114;
        } while (uVar5 != 0);
      }
      pvVar1 = *(void **)this;
      if (pvVar1 != (void *)0x0) {
        _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_00c01bc0);
                    /* WARNING: Subroutine does not return */
        _free((void *)((int)pvVar1 + -4));
      }
      *(uint **)this = local_11c;
      *(uint *)((int)this + 4) = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c046e0 @ 00c046e0 ////

void __fastcall FUN_00c046e0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    piVar1 = *(int **)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00c026d0((int)param_1,0,iVar2 + -4 >> 2,piVar1);
  }
  return;
}


//// FUNCTION FUN_00c047b0 @ 00c047b0 ////

void __fastcall FUN_00c047b0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00c04843:
      if (1 < iVar2) {
        LH_Sort_InsertionSort_00c04080(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00c030e0((int)param_1,(int)param_2);
        }
        FUN_00c046e0(param_1,(int)param_2);
        return;
      }
      goto LAB_00c04843;
    }
    LH_Sort_UnguardedPartition_00c03cb0(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00c047b0(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00c047b0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00c048a0 @ 00c048a0 ////

void __fastcall FUN_00c048a0(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    puVar1 = *(uint **)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    LH_Sort_AdjustHeap_00c03140((int)param_1,0,iVar2 + -4 >> 2,puVar1);
  }
  return;
}


//// FUNCTION FUN_00c048f0 @ 00c048f0 ////

void __fastcall FUN_00c048f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    iVar1 = *(int *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    LH_Array_AdjustHeap_00c031e0((int)param_1,0,iVar2 + -4 >> 2,iVar1);
  }
  return;
}


//// FUNCTION FUN_00c04960 @ 00c04960 ////

void __fastcall FUN_00c04960(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00c049f3:
      if (1 < iVar2) {
        LH_Sort_InsertionSort_00c037f0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00c04190((int)param_1,(int)param_2);
        }
        FUN_00c048a0(param_1,(int)param_2);
        return;
      }
      goto LAB_00c049f3;
    }
    LH_Sort_UnguardedPartition_00c03540(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00c04960(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00c04960(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00c04a50 @ 00c04a50 ////

void __fastcall FUN_00c04a50(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00c04ae3:
      if (1 < iVar2) {
        LH_Sort_InsertionSort_00c03bb0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00c041d0((int)param_1,(int)param_2);
        }
        FUN_00c048f0(param_1,(int)param_2);
        return;
      }
      goto LAB_00c04ae3;
    }
    LH_Sort_UnguardedPartition_00c038f0(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00c04a50(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00c04a50(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00c04b40 @ 00c04b40 ////

void __fastcall FUN_00c04b40(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00c047b0(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION LH_Array_SortAndVerifyUnique_00c04b70 @ 00c04b70 ////

void __fastcall LH_Array_SortAndVerifyUnique_00c04b70(int *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00c04b40(param_1);
  uVar1 = LH_Sort_Compare_00c01690(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"unique\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION LH_Array_CopySorted_00c04be0 @ 00c04be0 ////

void __thiscall LH_Array_CopySorted_00c04be0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd38a0((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00c02e80(param_1,this);
  LH_Array_SortAndVerifyUnique_00c04b70(this);
  return;
}


//// FUNCTION LH_Array_Sort @ 00c04c20 ////

void __fastcall LH_Array_Sort(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00c04960(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION FUN_00c04c50 @ 00c04c50 ////

void __fastcall FUN_00c04c50(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00c04a50(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION LH_Array_SortAndVerifyUnique @ 00c04c80 ////

void __fastcall LH_Array_SortAndVerifyUnique(int *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  LH_Array_Sort(param_1);
  uVar1 = LH_Array_CheckUnique(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"unique\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION LH_Array_SortAndVerifyUnique_00c04cb0 @ 00c04cb0 ////

void __fastcall LH_Array_SortAndVerifyUnique_00c04cb0(int *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00c04c50(param_1);
  uVar1 = LH_Array_IsSortedUnique_00c02360(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"unique\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION LH_Array_CopySorted_00c04ce0 @ 00c04ce0 ////

void __thiscall LH_Array_CopySorted_00c04ce0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd38a0((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00c023c0(param_1,this);
  LH_Array_SortAndVerifyUnique_00c04b70(this);
  return;
}


//// FUNCTION LH_StoreExtractedResources @ 00c04d30 ////

void __thiscall LH_StoreExtractedResources(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = LH_Array_GetCount((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  LH_Array_CopyItems(param_1,this);
  LH_Array_SortAndVerifyUnique(this);
  return;
}


//// FUNCTION LH_Array_CopySorted_00c04d70 @ 00c04d70 ////

void __thiscall LH_Array_CopySorted_00c04d70(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd3890((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00c02e60(param_1,this);
  LH_Array_SortAndVerifyUnique_00c04cb0(this);
  return;
}


//// FUNCTION FUN_00c04db0 @ 00c04db0 ////

undefined4 * __thiscall FUN_00c04db0(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d029b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c01110(this);
  local_4 = 0;
  LH_Array_CopySorted_00c04ce0(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c04e00 @ 00c04e00 ////

void __thiscall FUN_00c04e00(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = LH_Array_GetCount((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00c022c0(param_1,this);
  LH_Array_SortAndVerifyUnique(this);
  return;
}


//// FUNCTION LH_Array_CopySorted_00c04e40 @ 00c04e40 ////

void __thiscall LH_Array_CopySorted_00c04e40(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd3890((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00c02340(param_1,this);
  LH_Array_SortAndVerifyUnique_00c04cb0(this);
  return;
}


//// FUNCTION FUN_00c04ea0 @ 00c04ea0 ////

void __thiscall FUN_00c04ea0(void *this,void *param_1)

{
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  int *this_01;
  byte *pbVar3;
  uint uVar4;
  undefined1 local_22;
  undefined1 local_21;
  int *local_20;
  void *local_1c;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d029d8;
  pvStack_c = ExceptionList;
  this_00 = (undefined4 *)((int)this + 4);
  ExceptionList = &pvStack_c;
  local_1c = this;
  iVar1 = GetField_8_00bd38a0((int)this_00);
  if (iVar1 != 0) {
    LH_Assert(&local_22,"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00c02e80(param_1,this_00);
  FUN_00c04b40(this_00);
  uVar4 = 1;
  uVar2 = GetField_8_00bd38a0((int)this_00);
  if (1 < uVar2) {
    do {
      this_01 = (int *)thunk_FUN_00bd39a0(this_00,uVar4 - 1);
      local_20 = (int *)thunk_FUN_00bd39a0(this_00,uVar4);
      if ((this_01 == (int *)0x0) || (local_20 == (int *)0x0)) {
        LH_Assert(&local_21,"( o1 != NULL ) && ( o2 != NULL )\n");
        DebugBreak();
      }
      pbVar3 = (byte *)FUN_00bbf3a0(local_20);
      iVar1 = FUN_00bbf680(this_01,pbVar3);
      if (-1 < iVar1) {
        pbVar3 = (byte *)FUN_00bbf3a0(this_01);
        iVar1 = FUN_00bbf680(local_20,pbVar3);
        if (-1 < iVar1) {
          FUN_00c02e70(param_1,this_01);
          LH_Array_SetAt_00c010a0(this_00,uVar4 - 1,0);
        }
      }
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bd38a0((int)this_00);
      this = local_1c;
    } while (uVar4 < uVar2);
  }
  FUN_00c04db0(local_18,this);
  local_4 = 0;
  FUN_00c02e80(param_1,this_00);
  LH_Array_AdoptRequireEmpty_00c03500(param_1,local_18);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00c02140(local_18);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c04ff0 @ 00c04ff0 ////

undefined4 * __thiscall FUN_00c04ff0(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d029f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c012b0(this);
  local_4 = 0;
  FUN_00c04e00(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c05040 @ 00c05040 ////

undefined4 * __thiscall FUN_00c05040(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02a18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c00e80(this);
  local_4 = 0;
  LH_Array_CopySorted_00c04e40(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c05090 @ 00c05090 ////

void __thiscall FUN_00c05090(void *this,void *param_1)

{
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_22;
  undefined1 local_21;
  uint local_20;
  void *local_1c;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02a38;
  pvStack_c = ExceptionList;
  this_00 = (undefined4 *)((int)this + 4);
  ExceptionList = &pvStack_c;
  local_1c = this;
  iVar1 = LH_Array_GetCount((int)this_00);
  if (iVar1 != 0) {
    LH_Assert(&local_22,"Array.Count () == 0\n");
    DebugBreak();
  }
  LH_Array_CopyItems(param_1,this_00);
  LH_Array_Sort(this_00);
  local_20 = 1;
  uVar2 = LH_Array_GetCount((int)this_00);
  uVar5 = 1;
  if (1 < uVar2) {
    do {
      puVar3 = (uint *)thunk_FUN_00bd3830(this_00,uVar5 - 1);
      puVar4 = (uint *)thunk_FUN_00bd3830(this_00,uVar5);
      if ((puVar3 == (uint *)0x0) || (puVar4 == (uint *)0x0)) {
        LH_Assert(&local_21,"( o1 != NULL ) && ( o2 != NULL )\n");
        DebugBreak();
      }
      uVar2 = *puVar3;
      uVar6 = *puVar4;
      if ((uVar2 > uVar6 || uVar6 == uVar2) && (uVar2 <= uVar6)) {
        FUN_00c02e30(param_1,puVar3);
        LH_Array_SetAt_00c01240(this_00,uVar5 - 1,0);
      }
      uVar6 = local_20 + 1;
      local_20 = uVar6;
      uVar2 = LH_Array_GetCount((int)this_00);
      this = local_1c;
      uVar5 = local_20;
    } while (uVar6 < uVar2);
  }
  FUN_00c04ff0(local_18,this);
  local_4 = 0;
  LH_Array_CopyItems(param_1,this_00);
  FUN_00c03480(param_1,local_18);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00c02040(local_18);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c051c0 @ 00c051c0 ////

void __thiscall FUN_00c051c0(void *this,void *param_1)

{
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_22;
  undefined1 local_21;
  uint local_20;
  void *local_1c;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02a58;
  pvStack_c = ExceptionList;
  this_00 = (undefined4 *)((int)this + 4);
  ExceptionList = &pvStack_c;
  local_1c = this;
  iVar1 = GetField_8_00bd3890((int)this_00);
  if (iVar1 != 0) {
    LH_Assert(&local_22,"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00c02e60(param_1,this_00);
  FUN_00c04c50(this_00);
  local_20 = 1;
  uVar2 = GetField_8_00bd3890((int)this_00);
  uVar4 = 1;
  if (1 < uVar2) {
    do {
      iVar1 = thunk_FUN_00bd3960(this_00,uVar4 - 1);
      iVar3 = thunk_FUN_00bd3960(this_00,uVar4);
      if ((iVar1 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_21,"( o1 != NULL ) && ( o2 != NULL )\n");
        DebugBreak();
      }
      uVar2 = *(uint *)(iVar1 + 4);
      uVar5 = *(uint *)(iVar3 + 4);
      if ((uVar2 > uVar5 || uVar5 == uVar2) && (uVar2 <= uVar5)) {
        FUN_00c02e50(param_1,iVar1);
        LH_Array_SetAt_00c00e10(this_00,uVar4 - 1,0);
      }
      uVar5 = local_20 + 1;
      local_20 = uVar5;
      uVar2 = GetField_8_00bd3890((int)this_00);
      this = local_1c;
      uVar4 = local_20;
    } while (uVar5 < uVar2);
  }
  FUN_00c05040(local_18,this);
  local_4 = 0;
  FUN_00c02e60(param_1,this_00);
  LH_Array_AdoptRequireEmpty_00c034c0(param_1,local_18);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00c02050(local_18);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c052f0 @ 00c052f0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c052f0(void *this,byte param_1)

{
  Dtor_00c37210(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c05320 @ 00c05320 ////

undefined4 * __thiscall ScalarDeletingDtor_00c05320(void *this,byte param_1)

{
  Dtor_00c1cd00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c05340 @ 00c05340 ////

void __fastcall FUN_00c05340(int param_1,void *param_2)

{
  FUN_00c1cc90(param_2,param_1);
  return;
}


//// FUNCTION FUN_00c05360 @ 00c05360 ////

undefined4 * __fastcall FUN_00c05360(undefined4 *param_1)

{
  FUN_00c067d0(param_1);
  FUN_00c05980(param_1 + 8);
  FUN_00c05990(param_1 + 0xb);
  FUN_00c05740(param_1 + 0xe);
  param_1[0x11] = 0;
  return param_1;
}


//// FUNCTION LH_DeserializeMetaDataSegment @ 00c05390 ////

undefined4 __thiscall LH_DeserializeMetaDataSegment(void *this,void *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = FUN_00be65f0(param_1,3);
  if (bVar1) {
    uVar2 = LH_SerializeGlobalProperties(this,(int)param_1);
    if ((char)uVar2 != '\0') {
      uVar2 = LH_SerializeResourceHeaderArray((void *)((int)this + 0x20),(int)param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = LH_SerializeDriverArray((void *)((int)this + 0x2c),(int)param_1);
        if ((char)uVar2 != '\0') {
          uVar2 = LH_SerializeRLMParamArray((void *)((int)this + 0x38),(uint)param_1);
          if ((char)uVar2 != '\0') {
            uVar2 = FUN_00c05e80((void *)((int)this + 0x44),(int)param_1);
            if ((char)uVar2 != '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00c05400 @ 00c05400 ////

void __fastcall FUN_00c05400(int param_1)

{
  void *_Memory;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da2b8c_00c06610(local_1c,(void *)(param_1 + 0x20));
  local_4 = 0;
  _Memory = (void *)FUN_00c01d00((int)local_1c);
  if (_Memory != (void *)0x0) {
    FUN_00c36de0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4 = 0xffffffff;
  Dtor_00c01cb0(local_1c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c05480 @ 00c05480 ////

void __fastcall FUN_00c05480(int param_1)

{
  void *_Memory;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02c4a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da2b94_00c06670(local_1c,(void *)(param_1 + 0x2c));
  local_4 = 0;
  _Memory = (void *)FUN_00c01e00((int)local_1c);
  if (_Memory != (void *)0x0) {
    FUN_00c37020((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4 = 0xffffffff;
  Dtor_00c01db0(local_1c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c05500 @ 00c05500 ////

void __fastcall FUN_00c05500(int param_1)

{
  undefined4 *_Memory;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02c5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da2b9c_00c066d0(local_1c,(void *)(param_1 + 0x38));
  local_4 = 0;
  _Memory = (undefined4 *)FUN_00c01f00((int)local_1c);
  if (_Memory != (undefined4 *)0x0) {
    Dtor_00c37210(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4 = 0xffffffff;
  Dtor_00c01eb0(local_1c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c05580 @ 00c05580 ////

void __fastcall FUN_00c05580(int param_1)

{
  undefined4 *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d02c9a;
  pvStack_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &pvStack_c;
  FUN_00c05500(param_1);
  FUN_00c05480(param_1);
  FUN_00c05400(param_1);
  _Memory = *(undefined4 **)(param_1 + 0x44);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (_Memory != (undefined4 *)0x0) {
    Dtor_00c1cd00(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4._0_1_ = 2;
  LH_Array_FreeBuffer_00c02140((undefined4 *)(param_1 + 0x38));
  local_4._0_1_ = 1;
  LH_Array_FreeBuffer_00c02050((undefined4 *)(param_1 + 0x2c));
  local_4 = (uint)local_4._1_3_ << 8;
  LH_Array_FreeBuffer_00c02040((undefined4 *)(param_1 + 0x20));
  local_4 = 0xffffffff;
  FUN_00c06870(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c05660 @ 00c05660 ////

void __fastcall FUN_00c05660(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_00c36de0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00c05690 @ 00c05690 ////

void __fastcall FUN_00c05690(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_00c37020((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


