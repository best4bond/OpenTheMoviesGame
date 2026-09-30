//// FUNCTION FUN_00bc3980 @ 00bc3980 ////

void __thiscall FUN_00bc3980(void *this,undefined4 param_1)

{
  void *this_00;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfebca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  this_00 = (void *)FUN_00bef810((void *)((int)this + 0x5c),param_1);
  while (this_00 != (void *)0x0) {
    FUN_00beefc0(this_00,this);
    this_00 = (void *)FUN_00bef810((void *)((int)this + 0x5c),param_1);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc3a00 @ 00bc3a00 ////

void __thiscall FUN_00bc3a00(void *this,int param_1)

{
  void *this_00;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfebdc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  this_00 = (void *)((int)this + 0x5c);
  local_4 = 0;
  FUN_00bef8a0(this_00,(int)this,param_1);
  FUN_00bef900(this_00,(int)this,param_1);
  FUN_00bef970(this_00,param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc3a80 @ 00bc3a80 ////

undefined4 __fastcall FUN_00bc3a80(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  void *local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfebee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar2 = (int *)FUN_00befbf0(param_1 + 0x5c);
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x3c))(param_1);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*piVar2 + 0x38))(param_1);
      pvStack_c = (void *)0xffffffff;
      PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe4);
      ExceptionList = local_14[0];
      return uVar3;
    }
    (**(code **)(*piVar2 + 0x14))();
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return 0xffffffff;
}


//// FUNCTION FUN_00bc3b30 @ 00bc3b30 ////

void __thiscall FUN_00bc3b30(void *this,undefined4 param_1)

{
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfec00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  (**(code **)(**(int **)(*(int *)((int)this + 0x5ec) + 0xc) + 0x40))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bc3ba0 @ 00bc3ba0 ////

void __thiscall FUN_00bc3ba0(void *this,undefined4 param_1)

{
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfec12;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  (**(code **)(**(int **)(*(int *)((int)this + 0x5ec) + 0xc) + 0x44))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bc3c20 @ 00bc3c20 ////

undefined1 __fastcall FUN_00bc3c20(int param_1)

{
  undefined1 uVar1;
  undefined4 local_1c [2];
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfec2c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bc1470(local_1c,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4._0_1_ = 1;
  uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x5ec) + 0xc) + 0x14))();
  local_4 = (uint)local_4._1_3_ << 8;
  PKCProtectionInstance_Leave(local_1c);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return uVar1;
}


//// FUNCTION FUN_00bc3cb0 @ 00bc3cb0 ////

void __thiscall FUN_00bc3cb0(void *this,undefined4 param_1)

{
  undefined1 local_1c [4];
  undefined4 uStack_18;
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfec46;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bc1470(local_1c,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(**(int **)(*(int *)((int)this + 0x5ec) + 0xc) + 0x18))(param_1);
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe0);
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave(&uStack_18);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bc3d40 @ 00bc3d40 ////

void __thiscall FUN_00bc3d40(void *this,float *param_1,float *param_2,float *param_3)

{
  undefined4 local_38 [2];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfec58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_38,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_10 = param_1[2];
  local_4 = 0;
  local_14 = param_1[1];
  local_18 = *param_1;
  local_24 = *param_2;
  local_1c = param_2[2];
  local_20 = param_2[1];
  local_30 = *param_3;
  local_28 = param_3[2];
  local_2c = param_3[1];
  FUN_00bc28d0(this,&local_18,&local_24,&local_30);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_38);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc3e00 @ 00bc3e00 ////

void __thiscall FUN_00bc3e00(void *this,float *param_1)

{
  undefined4 local_20 [2];
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfec6a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_20,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_10 = param_1[2];
  local_14 = param_1[1];
  local_18 = *param_1;
  local_4 = 0;
  FUN_00bc2a50(this,&local_18);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_20);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc3e80 @ 00bc3e80 ////

undefined1 __fastcall FUN_00bc3e80(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x764) == 0) {
    return 0;
  }
  uVar1 = GetField_8_00bed0e0(*(int *)(param_1 + 0x764) + 8);
  return uVar1;
}


//// FUNCTION FUN_00bc3f60 @ 00bc3f60 ////

void __fastcall FUN_00bc3f60(int param_1)

{
  void *this;
  void *pvVar1;
  undefined4 uVar2;
  
  this = (void *)RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0x114));
  if (this != (void *)0x0) {
    do {
      pvVar1 = (void *)RedBlackTree_GetSuccessor((void *)(param_1 + 0x114),(int *)(param_1 + 0x110),(int)this);
      uVar2 = FUN_00bedc00();
      if ((char)uVar2 == '\0') {
        FUN_00beec10(this,param_1);
      }
      this = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


//// FUNCTION FUN_00bc3fc0 @ 00bc3fc0 ////

void __fastcall FUN_00bc3fc0(void *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)RedBlackTree_GetMinObject((undefined4 *)((int)param_1 + 0xfc));
  if (pvVar1 != (void *)0x0) {
    do {
      iVar2 = FUN_00bef5e0((int)param_1 + 0x5c);
      if (iVar2 == 0) break;
      FUN_00bee920(pvVar1,(int)param_1,iVar2);
      pvVar1 = (void *)RedBlackTree_GetMinObject((undefined4 *)((int)param_1 + 0xfc));
    } while (pvVar1 != (void *)0x0);
  }
  do {
    pvVar1 = (void *)RedBlackTree_GetMinObject((undefined4 *)((int)param_1 + 0x108));
    if (pvVar1 == (void *)0x0) {
      return;
    }
    iVar2 = FUN_00beef90(pvVar1,param_1);
  } while (-1 < iVar2);
  return;
}


//// FUNCTION CEngine_ProcessActiveResource @ 00bc4030 ////

void __thiscall CEngine_ProcessActiveResource(void *this,int *param_1,char param_2)

{
  LPCSTR pCVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_115;
  LPCRITICAL_SECTION local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00cfec8a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 == (int *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = param_1;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\CEngine.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x22b);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null active resource");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_115,pCVar1);
    local_4 = (int *)0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  local_114 = (LPCRITICAL_SECTION)&DAT_010ced2c;
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = (int *)0x1;
  uVar2 = FUN_00bf41c0(param_1,(int)this,&local_114,param_2);
  iVar3 = GetField_0x68_00bf3a90((int)param_1);
  if (iVar3 != 0) {
    if ((char)uVar2 == '\0') {
      *(int *)((int)this + 0x6cc) = *(int *)((int)this + 0x6cc) + 1;
      FUN_00be86f0(iVar3);
    }
    else {
      FUN_00be8700(iVar3);
    }
    FUN_00bc3980(this,iVar3);
  }
  if ((char)uVar2 == '\0') {
    FUN_00bf3c90(param_1,(int)this);
    FUN_00bf42a0(param_1);
  }
  local_4 = (int *)0xffffffff;
  if (local_114 != (LPCRITICAL_SECTION)0x0) {
    Wrap_LeaveCriticalSection_00bceaa0(local_114);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION CEngine_ProcessMailboxLoop @ 00bc41a0 ////

void __fastcall CEngine_ProcessMailboxLoop(void *param_1)

{
  char cVar1;
  LPCSTR pCVar2;
  undefined1 uStack_121;
  void *local_120;
  int local_11c [2];
  int *piStack_114;
  undefined **ppuStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfec9f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_120 = param_1;
  while( true ) {
    cVar1 = (**(code **)(*(int *)((int)local_120 + 0x768) + 8))(local_11c,0);
    if (cVar1 == '\0') {
      ppuStack_110 = &PTR_LAB_00d9db7c;
      uStack_10c = 0;
      uStack_d = 0;
      uStack_4 = 0;
      LH_LogErrorMessage(&ppuStack_110,".\\CEngine.cpp");
      LH_LogErrorMessage(&ppuStack_110,"(");
      FUN_00bbe970(0x259);
      LH_LogErrorMessage(&ppuStack_110,") : ");
      LH_LogErrorMessage(&ppuStack_110,"Error receiving from mailbox...");
      LH_LogErrorMessage(&ppuStack_110,"\n");
      pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
      LH_Assert(&uStack_121,pCVar2);
      uStack_4 = 0xffffffff;
      ppuStack_110 = &PTR_LAB_00d9d9b4;
      DebugBreak();
    }
    if (local_11c[0] != 0) break;
    CEngine_ProcessActiveResource(local_120,piStack_114,(char)local_11c[1]);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc42c0 @ 00bc42c0 ////

undefined4 * __thiscall
FUN_00bc42c0(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfecbc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(&local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (0.0 < (float)param_2[0x1d]) {
    param_3 = operator_new(0x100);
    local_4._0_1_ = 1;
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = Ctor_vt00da2290_00bf4f10(param_3);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (puVar2 == (undefined4 *)0x0) {
      LH_Assert(&param_3,"event != NULL\n");
      DebugBreak();
    }
    puVar2[0x3c] = param_1;
    puVar3 = param_2;
    puVar4 = puVar2 + 0x1d;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar2[0x3a] = 0;
    puVar2[0x3e] = param_2[0x1d];
    FUN_00becfd0(puVar2 + 0x11,param_2[0xd],puVar2);
    iVar1 = *(int *)((int)this + 0x7a4);
    *(int *)((int)this + 0x7a4) = iVar1 + 1;
    FUN_00bf46d0(puVar2,iVar1);
    FUN_00bcfac0((void *)((int)this + 0x614),(int *)((int)this + 0x610),(int)puVar2);
    FUN_00bf47d0(puVar2,(int)this);
    FUN_00bf4860(puVar2,(int)this);
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(&local_14);
    ExceptionList = local_c;
    return puVar2;
  }
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0xc))(this,param_2,param_3);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[0x17] = param_2[0xe];
  }
  uStack_10 = 0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe0);
  ExceptionList = unaff_EBX;
  return puVar2;
}


//// FUNCTION FUN_00bc4430 @ 00bc4430 ////

void __thiscall FUN_00bc4430(void *this,uint param_1)

{
  void *this_00;
  int iVar1;
  void *this_01;
  
  this_00 = (void *)((int)this + 0x5c);
  iVar1 = thunk_FUN_00beff70((int)this_00);
  if (iVar1 == 0) {
    FUN_00bc3f60((int)this);
    iVar1 = thunk_FUN_00beff70((int)this_00);
    if (iVar1 == 0) {
      this_01 = (void *)FUN_00bef760(this_00,param_1);
      if (this_01 != (void *)0x0) {
        *(int *)((int)this + 0x6c8) = *(int *)((int)this + 0x6c8) + 1;
        FUN_00beec10(this_01,(int)this);
      }
      thunk_FUN_00beff70((int)this_00);
    }
  }
  return;
}


//// FUNCTION FUN_00bc4490 @ 00bc4490 ////

void __fastcall FUN_00bc4490(void *param_1)

{
  int *piVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfecce;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00befbf0((int)param_1 + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(param_1);
    FUN_00bc3fc0(param_1);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc4510 @ 00bc4510 ////

void __fastcall FUN_00bc4510(void *param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfece0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = RedBlackTree_GetMinObject((undefined4 *)((int)param_1 + 0x120));
  if (iVar1 != 0) {
    do {
      iVar2 = RedBlackTree_GetSuccessor((void *)((int)param_1 + 0x120),(int *)((int)param_1 + 0x11c),iVar1);
      this = *(void **)(iVar1 + 4);
      uVar3 = FUN_00bedc00();
      if ((char)uVar3 == '\0') {
        FUN_00beec10(this,(int)param_1);
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
  }
  FUN_00bc3fc0(param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc45c0 @ 00bc45c0 ////

void __fastcall FUN_00bc45c0(float param_1)

{
  void *this;
  
  this = (void *)RedBlackTree_GetMinObject((undefined4 *)((int)param_1 + 0x120));
  if (this != (void *)0x0) {
    do {
      thunk_FUN_00bf50b0(this,param_1);
      this = (void *)RedBlackTree_GetSuccessor((void *)((int)param_1 + 0x120),(int *)((int)param_1 + 0x11c),
                                  (int)this);
    } while (this != (void *)0x0);
  }
  return;
}


//// FUNCTION FUN_00bc4600 @ 00bc4600 ////

void __fastcall FUN_00bc4600(float param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)param_1 + 0x7a8) != '\0') {
    pfVar1 = (float *)((int)param_1 + 0x620);
    FUN_00bf2880(pfVar1);
    FUN_00bc45c0(param_1);
    if ((*(char *)((int)param_1 + 0x670) != '\0') &&
       (uVar2 = FUN_00bf2720((int)pfVar1), (char)uVar2 != '\0')) {
      FUN_00bed6f0(*(void **)((int)param_1 + 0x5ec),(undefined4 *)((int)param_1 + 0x674));
      *(undefined1 *)((int)param_1 + 0x670) = 0;
      FUN_00bf2740((int)pfVar1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00bc4660 @ 00bc4660 ////

void __thiscall FUN_00bc4660(void *this,int param_1)

{
  void *this_00;
  void *pvVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfecf2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  this_00 = (void *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x114));
  if (this_00 != (void *)0x0) {
    do {
      pvVar1 = (void *)RedBlackTree_GetSuccessor((void *)((int)this + 0x114),(int *)((int)this + 0x110),
                                    (int)this_00);
      if (*(int *)((int)this_00 + 0x184) == param_1) {
        FUN_00bee8d0(this_00,(int)this);
      }
      this_00 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc48f0 @ 00bc48f0 ////

undefined4 __thiscall FUN_00bc48f0(void *this,int param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_94;
  undefined4 local_90 [2];
  undefined4 local_88 [13];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfed1c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_90,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  local_94 = 0xffffffff;
  FUN_00bf2b90(local_88);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0x3f800000;
  local_48 = 0x3f800000;
  local_44 = 0;
  local_43 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_14 = 0;
  local_10 = 0;
  FUN_00bf5b60(local_88,*(void **)((int)this + 0x28),param_2);
  piVar1 = (int *)FUN_00bdb410(*(void **)(*(int *)((int)this + 0x28) + 0x7c),param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))();
    puVar2 = FUN_00bc42c0(this,piVar1,local_88,(undefined4 *)param_2[0xf]);
    if (puVar2 != (undefined4 *)0x0) {
      local_94 = puVar2[0x10];
    }
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_90);
  ExceptionList = pvStack_c;
  return local_94;
}


//// FUNCTION FUN_00bc4a30 @ 00bc4a30 ////

undefined4 __thiscall FUN_00bc4a30(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfed2e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar2 = FUN_00bdb410(*(void **)(*(int *)((int)this + 0x28) + 0x7c),param_2);
  if (iVar2 != 0) {
    for (uVar3 = RedBlackTree_FindFirst((void *)((int)this + 0xd8),(int *)((int)this + 0xd4),&param_1);
        uVar3 != 0; uVar3 = FUN_00bcfbd0((void *)((int)this + 0xd8),(int *)((int)this + 0xd4),uVar3)
        ) {
      if (*(int *)(uVar3 + 0x58) == iVar2) {
        uVar1 = *(undefined4 *)(uVar3 + 0x40);
        local_4 = 0xffffffff;
        PKCProtectionInstance_Leave(local_14);
        ExceptionList = local_c;
        return uVar1;
      }
    }
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return 0xffffffff;
}


//// FUNCTION FUN_00bc4b00 @ 00bc4b00 ////

void __fastcall FUN_00bc4b00(int param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfed40;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0xcc));
  if (piVar1 != (int *)0x0) {
    do {
      piVar2 = (int *)RedBlackTree_GetSuccessor((void *)(param_1 + 0xcc),(int *)(param_1 + 200),(int)piVar1);
      (**(code **)(*piVar1 + 0x14))(param_1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  pvVar3 = (void *)RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0x114));
  if (pvVar3 != (void *)0x0) {
    do {
      pvVar4 = (void *)RedBlackTree_GetSuccessor((void *)(param_1 + 0x114),(int *)(param_1 + 0x110),(int)pvVar3);
      FUN_00beec10(pvVar3,param_1);
      pvVar3 = pvVar4;
    } while (pvVar4 != (void *)0x0);
  }
  pvVar3 = (void *)RedBlackTree_GetMinObject((undefined4 *)(param_1 + 300));
  while (pvVar3 != (void *)0x0) {
    FUN_00bf55f0(pvVar3,param_1);
    pvVar3 = (void *)RedBlackTree_GetMinObject((undefined4 *)(param_1 + 300));
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc4bf0 @ 00bc4bf0 ////

void __thiscall FUN_00bc4bf0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfed52;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0xcc));
  if (piVar1 != (int *)0x0) {
    do {
      piVar2 = (int *)RedBlackTree_GetSuccessor((void *)((int)this + 0xcc),(int *)((int)this + 200),(int)piVar1);
      if (piVar1[0x17] == param_1) {
        (**(code **)(*piVar1 + 0x18))(this,param_2);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc4ca0 @ 00bc4ca0 ////

void __thiscall FUN_00bc4ca0(void *this,byte param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfed64;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0xcc));
  if (piVar1 != (int *)0x0) {
    do {
      piVar2 = (int *)RedBlackTree_GetSuccessor((void *)((int)this + 0xcc),(int *)((int)this + 200),(int)piVar1);
      uVar3 = (**(code **)(*piVar1 + 0x6c))(this);
      if ((1 << (param_1 & 0x1f) & uVar3) != 0) {
        (**(code **)(*piVar1 + 0x18))(this,param_2);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc4d60 @ 00bc4d60 ////

void __thiscall FUN_00bc4d60(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfed76;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0xcc));
  if (piVar1 != (int *)0x0) {
    do {
      piVar2 = (int *)RedBlackTree_GetSuccessor((void *)((int)this + 0xcc),(int *)((int)this + 200),(int)piVar1);
      if (piVar1[0x17] == param_1) {
        (**(code **)(*piVar1 + 0x14))(this);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc4e00 @ 00bc4e00 ////

void __thiscall FUN_00bc4e00(void *this,int param_1)

{
  void *this_00;
  void *pvVar1;
  
  if ((param_1 != 0) &&
     (this_00 = (void *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x114)), this_00 != (void *)0x0)) {
    do {
      pvVar1 = (void *)RedBlackTree_GetSuccessor((void *)((int)this + 0x114),(int *)((int)this + 0x110),
                                    (int)this_00);
      if (*(int *)((int)this_00 + 0x18c) == param_1) {
        FUN_00beec10(this_00,(int)this);
      }
      this_00 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


//// FUNCTION FUN_00bc4e70 @ 00bc4e70 ////

void __thiscall FUN_00bc4e70(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfed88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0xe4));
  if (piVar1 != (int *)0x0) {
    do {
      piVar2 = (int *)RedBlackTree_GetSuccessor((void *)((int)this + 0xe4),(int *)((int)this + 0xe0),(int)piVar1)
      ;
      if (piVar1[0x11] == param_1) {
        (**(code **)(*piVar1 + 0x18))(this,param_2);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc4f20 @ 00bc4f20 ////

void __thiscall FUN_00bc4f20(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfed9a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0xe4));
  if (piVar1 != (int *)0x0) {
    do {
      piVar2 = (int *)RedBlackTree_GetSuccessor((void *)((int)this + 0xe4),(int *)((int)this + 0xe0),(int)piVar1)
      ;
      if (piVar1[0x11] == param_1) {
        (**(code **)(*piVar1 + 0x60))(this,param_2);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc4fd0 @ 00bc4fd0 ////

void __thiscall FUN_00bc4fd0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfedac;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0xe4));
  if (piVar1 != (int *)0x0) {
    do {
      piVar2 = (int *)RedBlackTree_GetSuccessor((void *)((int)this + 0xe4),(int *)((int)this + 0xe0),(int)piVar1)
      ;
      if (piVar1[0x11] == param_1) {
        (**(code **)(*piVar1 + 0x14))(this);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc5070 @ 00bc5070 ////

void __thiscall FUN_00bc5070(void *this,byte param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfedbe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0xcc));
  if (piVar1 != (int *)0x0) {
    do {
      piVar2 = (int *)RedBlackTree_GetSuccessor((void *)((int)this + 0xcc),(int *)((int)this + 200),(int)piVar1);
      uVar3 = (**(code **)(*piVar1 + 0x6c))(this);
      if ((1 << (param_1 & 0x1f) & uVar3) != 0) {
        (**(code **)(*piVar1 + 0x14))(this);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc5130 @ 00bc5130 ////

void __thiscall FUN_00bc5130(void *this,int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfedd0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x114));
  if (iVar1 != 0) {
    do {
      if (*(int *)(iVar1 + 0x44) == param_1) {
        *(undefined4 *)(iVar1 + 0x18c) = 0;
        *(undefined2 *)(iVar1 + 0x1a6) = 0;
      }
      iVar1 = RedBlackTree_GetSuccessor((void *)((int)this + 0x114),(int *)((int)this + 0x110),iVar1);
    } while (iVar1 != 0);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc51d0 @ 00bc51d0 ////

int __fastcall FUN_00bc51d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfede2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  iVar3 = 0;
  local_4 = 0;
  iVar1 = RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0x114));
  if (iVar1 != 0) {
    do {
      uVar2 = FUN_00bedde0();
      if ((char)uVar2 != '\0') {
        iVar3 = iVar3 + 1;
      }
      iVar1 = RedBlackTree_GetSuccessor((void *)(param_1 + 0x114),(int *)(param_1 + 0x110),iVar1);
    } while (iVar1 != 0);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar3;
}


//// FUNCTION FUN_00bc5270 @ 00bc5270 ////

int __fastcall FUN_00bc5270(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfedf4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  iVar3 = 0;
  local_4 = 0;
  iVar2 = RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0x114));
  if (iVar2 != 0) {
    do {
      bVar1 = FUN_00bede10();
      if ((bVar1) || (bVar1 = FUN_00bede30(), bVar1)) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = RedBlackTree_GetSuccessor((void *)(param_1 + 0x114),(int *)(param_1 + 0x110),iVar2);
    } while (iVar2 != 0);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar3;
}


//// FUNCTION FUN_00bc5310 @ 00bc5310 ////

void __thiscall FUN_00bc5310(void *this,undefined4 param_1,undefined4 *param_2)

{
  int *_Memory;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfee11;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  piVar2 = (int *)((int)this + 0x10);
  local_4 = 0;
  _Memory = (int *)RedBlackTree_Find((void *)((int)this + 0x14),piVar2,&param_1,&param_1);
  if ((char)param_2 == '\0') {
    if (_Memory != (int *)0x0) {
      FUN_00bcff70((void *)((int)this + 0x14),piVar2,(int)_Memory);
      thunk_FUN_00bcf880(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  else if (_Memory == (int *)0x0) {
    param_2 = operator_new(0x18);
    local_4._0_1_ = 1;
    if (param_2 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00bc31b0(param_2);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (puVar1 == (undefined4 *)0x0) {
      LH_Assert(&param_2,"link != NULL\n");
      DebugBreak();
    }
    puVar1[5] = param_1;
    FUN_00bcfac0((void *)((int)this + 0x14),piVar2,(int)puVar1);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc5400 @ 00bc5400 ////

void __thiscall FUN_00bc5400(void *this,int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *_Memory;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfee2e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  piVar1 = (int *)((int)this + 4);
  local_4 = 0;
  _Memory = (int *)RedBlackTree_Find((void *)((int)this + 8),piVar1,&param_1,&param_1);
  puVar2 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    if (_Memory != (int *)0x0) {
      FUN_00bcff70((void *)((int)this + 8),piVar1,(int)_Memory);
      thunk_FUN_00bcf880(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  else {
    if (_Memory == (int *)0x0) {
      param_2 = operator_new(0x1c);
      local_4._0_1_ = 1;
      if (param_2 == (undefined4 *)0x0) {
        _Memory = (int *)0x0;
      }
      else {
        _Memory = FUN_00bc26b0(param_2);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (_Memory == (int *)0x0) {
        LH_Assert(&param_2,"link != NULL\n");
        DebugBreak();
      }
      _Memory[5] = param_1;
      FUN_00bcfac0((void *)((int)this + 8),piVar1,(int)_Memory);
    }
    _Memory[6] = (int)puVar2;
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc54f0 @ 00bc54f0 ////

undefined4 __thiscall FUN_00bc54f0(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_19;
  undefined4 *local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfee4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  puVar1 = (undefined4 *)
           RedBlackTree_Find((void *)((int)this + 0x30),(int *)((int)this + 0x2c),&param_1,&param_1);
  if (puVar1 == (undefined4 *)0x0) {
    local_18 = operator_new(0x24);
    local_4._0_1_ = 1;
    if (local_18 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00bc2580(local_18);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (puVar1 == (undefined4 *)0x0) {
      LH_Assert(&local_19,"group != NULL\n");
      DebugBreak();
    }
    puVar1[5] = param_1;
    FUN_00bcfac0((void *)((int)this + 0x30),(int *)((int)this + 0x2c),(int)puVar1);
    iVar2 = RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x114));
    if (iVar2 != 0) {
      do {
        if (*(int *)(iVar2 + 0x88) == param_1) {
          puVar1[8] = puVar1[8] + 1;
        }
        iVar2 = RedBlackTree_GetSuccessor((void *)((int)this + 0x114),(int *)((int)this + 0x110),iVar2);
      } while (iVar2 != 0);
    }
  }
  puVar1[6] = param_2;
  puVar1[7] = param_3;
  local_4 = 0xffffffff;
  uVar3 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00bc5610 @ 00bc5610 ////

uint __thiscall FUN_00bc5610(void *this,int param_1)

{
  int *_Memory;
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_19;
  int *local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfee5d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  piVar4 = (int *)((int)this + 0x2c);
  local_4 = 0;
  local_18 = piVar4;
  _Memory = (int *)RedBlackTree_Find((void *)((int)this + 0x30),piVar4,&param_1,&param_1);
  if (_Memory != (int *)0x0) {
    iVar2 = RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x114));
    if (iVar2 != 0) {
      do {
        iVar3 = RedBlackTree_GetSuccessor((void *)((int)this + 0x114),(int *)((int)this + 0x110),iVar2);
        if (*(int *)(iVar2 + 0x88) == param_1) {
          _Memory[8] = _Memory[8] + -1;
        }
        piVar4 = local_18;
        iVar2 = iVar3;
      } while (iVar3 != 0);
    }
    if (_Memory[8] != 0) {
      LH_Assert(&local_19,"group->NumSlots == 0\n");
      DebugBreak();
    }
    FUN_00bcff70(piVar4 + 1,piVar4,(int)_Memory);
    thunk_FUN_00bcf880(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4 = 0xffffffff;
  uVar1 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar1 & 0xffffff00;
}


//// FUNCTION Dtor_00bc5730 @ 00bc5730 ////

void __fastcall Dtor_00bc5730(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *_Memory;
  int *piVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cfef1e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9eb88;
  local_4 = 0xd;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  FUN_00bc4b00((int)param_1);
  pvVar1 = (void *)param_1[0x17c];
  if (pvVar1 != (void *)0x0) {
    FUN_00bf1dc0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  _Memory = (undefined4 *)param_1[0x17b];
  if (_Memory != (undefined4 *)0x0) {
    Dtor_00bed860(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  piVar2 = (int *)RedBlackTree_GetMinObject(param_1 + 5);
  if (piVar2 != (int *)0x0) {
    do {
      FUN_00bcff70(param_1 + 5,param_1 + 4,(int)piVar2);
      if (piVar2 != (int *)0x0) {
        thunk_FUN_00bcf880(piVar2);
                    /* WARNING: Subroutine does not return */
        _free(piVar2);
      }
      piVar2 = (int *)RedBlackTree_GetMinObject(param_1 + 5);
    } while (piVar2 != (int *)0x0);
  }
  piVar2 = (int *)RedBlackTree_GetMinObject(param_1 + 2);
  if (piVar2 != (int *)0x0) {
    do {
      FUN_00bcff70(param_1 + 2,param_1 + 1,(int)piVar2);
      if (piVar2 != (int *)0x0) {
        thunk_FUN_00bcf880(piVar2);
                    /* WARNING: Subroutine does not return */
        _free(piVar2);
      }
      piVar2 = (int *)RedBlackTree_GetMinObject(param_1 + 2);
    } while (piVar2 != (int *)0x0);
  }
  piVar2 = (int *)RedBlackTree_GetMinObject(param_1 + 0xc);
  if (piVar2 != (int *)0x0) {
    do {
      FUN_00bcff70(param_1 + 0xc,param_1 + 0xb,(int)piVar2);
      if (piVar2 != (int *)0x0) {
        thunk_FUN_00bcf880(piVar2);
                    /* WARNING: Subroutine does not return */
        _free(piVar2);
      }
      piVar2 = (int *)RedBlackTree_GetMinObject(param_1 + 0xc);
    } while (piVar2 != (int *)0x0);
  }
  local_4._0_1_ = 0xd;
  PKCProtectionInstance_Leave(local_14);
  param_1[0x1e6] = &PTR_LAB_00d9da84;
  local_4._0_1_ = 0xb;
  Dtor_00bc7fd0(param_1 + 0x1da);
  pvVar1 = (void *)param_1[0x1d9];
  local_4 = CONCAT31(local_4._1_3_,10);
  if (pvVar1 != (void *)0x0) {
    Dtor_00bed120((void *)((int)pvVar1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  param_1[0x1d6] = &PTR_LAB_00d9e7b0;
  local_4._0_1_ = 8;
  FUN_00bf1fd0();
  local_4._0_1_ = 7;
  FUN_00bf27d0();
  local_4._0_1_ = 6;
  param_1[0x184] = &PTR_LAB_00d9e94c;
  RedBlackTree_Dtor(param_1 + 0x185);
  param_1[0x17e] = &PTR_LAB_00d9e7a0;
  local_4._0_1_ = 4;
  FUN_00bef9d0(param_1 + 0x17);
  local_4._0_1_ = 3;
  param_1[0xb] = &PTR_LAB_00d9e924;
  RedBlackTree_Dtor(param_1 + 0xc);
  local_4._0_1_ = 2;
  LH_Array_FreeBuffer_00bc73b0(param_1 + 7);
  local_4._0_1_ = 1;
  param_1[4] = &PTR_LAB_00d9e8fc;
  RedBlackTree_Dtor(param_1 + 5);
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[1] = &PTR_LAB_00d9e8d4;
  RedBlackTree_Dtor(param_1 + 2);
  *param_1 = &PTR_LAB_00d9e6c8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc5990 @ 00bc5990 ////

int __thiscall FUN_00bc5990(void *this,undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *this_00;
  undefined4 uVar3;
  ulonglong uVar4;
  
  this_00 = (int *)RedBlackTree_Find((void *)((int)this + 0xe4),(void *)((int)this + 0xe0),param_1,
                                param_1);
  uVar3 = 0;
  if (this_00 != (int *)0x0) {
    cVar2 = (**(code **)(*this_00 + 0x3c))(this);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*this_00 + 0x40))(this);
      if (cVar2 == '\0') {
        if ((((uint)this_00[0x15] >> 2 & 1) == 0) && ((char)param_1 == '\0')) {
          return ((uint)this_00[0x15] >> 10) << 8;
        }
        if ((*(byte *)(this_00 + 0x15) & 1) != 0) {
          FUN_00bf48c0(this_00,(int)this);
        }
        iVar1 = *this_00;
        uVar4 = FUN_00acd42c();
        uVar3 = (**(code **)(iVar1 + 0x60))(this,(int)uVar4);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    uVar3 = (**(code **)(*this_00 + 100))(this);
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00bc5a20 @ 00bc5a20 ////

undefined4 __thiscall
FUN_00bc5a20(void *this,int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfef30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bed050(local_1c);
  local_4 = 0;
  if ((param_3 == 0) || (param_3 == 0x8000)) {
    if (param_2 == 0) {
      param_2 = FUN_00bc7410(param_1);
    }
    FUN_00becfd0(local_1c,param_4,param_2);
  }
  else if (param_3 < 0x8001) {
    uVar1 = (**(code **)(*param_1 + 0x18))();
    uVar1 = FUN_00bc2190(uVar1);
    FUN_00bed010(local_1c,param_4,uVar1,param_3);
  }
  else {
    FUN_00becff0(local_1c,param_4,param_3);
  }
  uVar1 = FUN_00bc5990(this,local_1c);
  local_4 = 0xffffffff;
  if ((char)uVar1 == '\0') {
    FUN_00becf90();
    ExceptionList = local_c;
    return 0;
  }
  FUN_00becf90();
  ExceptionList = local_c;
  return 1;
}


//// FUNCTION FUN_00bc5b10 @ 00bc5b10 ////

void __thiscall FUN_00bc5b10(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  int *this_00;
  undefined4 uVar2;
  undefined4 local_24 [2];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfef4a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_24,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  this_00 = (int *)FUN_00befbf0((int)this + 0x5c);
  if (this_00 == (int *)0x0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_24);
    ExceptionList = local_c;
    return;
  }
  piVar1 = this_00 + 0x11;
  if (param_2 != this_00[0x11]) {
    local_1c = *piVar1;
    local_18 = this_00[0x12];
    local_14 = this_00[0x13];
    local_10 = this_00[0x14];
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00becfa0(&local_1c,param_2);
    if ((*(byte *)(this_00 + 0x15) & 1) == 0) {
      *piVar1 = local_1c;
      this_00[0x12] = local_18;
      this_00[0x13] = local_14;
      this_00[0x14] = local_10;
    }
    else {
      uVar2 = FUN_00bc5990(this,&local_1c);
      if ((char)uVar2 == '\0') {
        (**(code **)(*this_00 + 0x14))();
      }
      else {
        FUN_00bf48c0(this_00,(int)this);
        *piVar1 = local_1c;
        this_00[0x12] = local_18;
        this_00[0x13] = local_14;
        this_00[0x14] = local_10;
        FUN_00bf4860(this_00,(int)this);
      }
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00becf90();
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_24);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc5c60 @ 00bc5c60 ////

void __thiscall FUN_00bc5c60(void *this,int param_1)

{
  void *this_00;
  void *pvVar1;
  int *this_01;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfef5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  this_00 = (void *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x114));
  if (this_00 != (void *)0x0) {
    do {
      pvVar1 = (void *)RedBlackTree_GetSuccessor((void *)((int)this + 0x114),(int *)((int)this + 0x110),
                                    (int)this_00);
      if (*(int *)((int)this_00 + 0xa8) == param_1) {
        FUN_00beec10(this_00,(int)this);
      }
      this_00 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  this_01 = (int *)RedBlackTree_Find((void *)((int)this + 0x164),(void *)((int)this + 0x160),&param_1,
                                &param_1);
  if (this_01 != (int *)0x0) {
    FUN_00bf3c90(this_01,(int)this);
    FUN_00bf42a0(this_01);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc5d40 @ 00bc5d40 ////

undefined4 __thiscall FUN_00bc5d40(void *this,undefined4 param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_24 [2];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  uint uVar2;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfef76;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_24,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (param_2 == (int *)0x0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_24);
    ExceptionList = local_c;
    return 0xffffffff;
  }
  FUN_00bed050(local_1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = GetField_0x10_00bdde70((int)(param_2 + 2));
  uVar2 = CONCAT22(extraout_var,uVar1);
  if ((uVar2 == 0) || (uVar2 == 0x8000)) {
    uVar4 = FUN_00bc7420(param_2);
    FUN_00becfd0(local_1c,param_1,uVar4);
  }
  else if (uVar2 < 0x8001) {
    piVar3 = (int *)(**(code **)(*param_2 + 0x98))();
    uVar4 = (**(code **)(*piVar3 + 0x18))();
    uVar4 = FUN_00bc2190(uVar4);
    FUN_00bed010(local_1c,param_1,uVar4,uVar2);
  }
  else {
    FUN_00becff0(local_1c,param_1,uVar2);
  }
  iVar5 = RedBlackTree_Find((void *)((int)this + 0xe4),(void *)((int)this + 0xe0),local_1c,local_1c);
  local_4 = local_4 & 0xffffff00;
  if (iVar5 == 0) {
    FUN_00becf90();
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_24);
    ExceptionList = local_c;
    return 0xffffffff;
  }
  uVar4 = *(undefined4 *)(iVar5 + 0x40);
  FUN_00becf90();
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_24);
  ExceptionList = local_c;
  return uVar4;
}


//// FUNCTION Ctor_vt00d9eb88_00bc5ea0 @ 00bc5ea0 ////

undefined4 * __thiscall
Ctor_vt00d9eb88_00bc5ea0(void *this,int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  SIZE_T local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff050;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d9eb88;
  local_4 = 0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00d9e8d4;
  RedBlackTree_Ctor((int *)((int)this + 8));
  *(undefined ***)((int)this + 4) = &PTR_LAB_00d9eae8;
  local_4._0_1_ = 1;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00d9e8fc;
  RedBlackTree_Ctor((int *)((int)this + 0x14));
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00d9eb10;
  FUN_00bc73a0((undefined4 *)((int)this + 0x1c));
  *(int *)((int)this + 0x28) = param_1;
  local_4._0_1_ = 3;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_00d9e924;
  RedBlackTree_Ctor((int *)((int)this + 0x30));
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_00d9eb38;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x3f800000;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0x3f800000;
  local_4._0_1_ = 4;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  FUN_00befc30((void *)((int)this + 0x5c),param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0x5f0) = 0;
  *(undefined4 *)((int)this + 0x5f4) = 0;
  *(undefined ***)((int)this + 0x5f8) = &PTR_FUN_00d9e82c;
  *(undefined4 *)((int)this + 0x5fc) = 0;
  *(uint *)((int)this + 0x608) = param_2;
  *(undefined4 *)((int)this + 0x600) = 0;
  *(int *)((int)this + 0x604) = param_3;
  *(undefined4 *)((int)this + 0x60c) = param_6;
  local_4._0_1_ = 6;
  *(undefined ***)((int)this + 0x610) = &PTR_LAB_00d9e94c;
  RedBlackTree_Ctor((int *)((int)this + 0x614));
  *(undefined ***)((int)this + 0x610) = &PTR_LAB_00d9eb60;
  *(undefined4 *)((int)this + 0x61c) = param_7;
  local_4._0_1_ = 7;
  FUN_00bf2950((void *)((int)this + 0x620),1000.0 / *(float *)(param_1 + 0x84));
  *(undefined1 *)((int)this + 0x670) = 0;
  puVar1 = (undefined4 *)((int)this + 0x674);
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_4._0_1_ = 8;
  *(undefined4 *)((int)this + 0x6c8) = 0;
  *(undefined4 *)((int)this + 0x6cc) = 0;
  *(undefined4 *)((int)this + 0x6d0) = 0;
  *(undefined1 *)((int)this + 0x6d4) = 0;
  FUN_00bf2610((void *)((int)this + 0x6d8));
  *(undefined4 *)((int)this + 0x758) = &PTR_FUN_00d9e974;
  *(undefined4 *)((int)this + 0x75c) = 0;
  *(undefined4 *)((int)this + 0x760) = 0;
  *(undefined4 *)((int)this + 0x764) = 0;
  local_4._0_1_ = 0xb;
  Ctor_vt00d9e97c_00bc7f20((undefined4 *)((int)this + 0x768));
  *(undefined ***)((int)this + 0x798) = &PTR_FUN_00d9e7c8;
  *(undefined4 *)((int)this + 0x79c) = 0;
  *(undefined4 *)((int)this + 0x7a0) = 0;
  local_4._0_1_ = 0xd;
  *(undefined4 *)((int)this + 0x7a4) = 0;
  *(undefined1 *)((int)this + 0x7a8) = 0;
  LH_Array_Reserve_00bc72a0((undefined4 *)((int)this + 0x1c),param_2);
  *(void **)((int)this + 0x760) = this;
  *(code **)((int)this + 0x75c) = CEngine_ProcessMailboxLoop;
  puVar1 = operator_new(0x14);
  local_4._0_1_ = 0xe;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_LAB_00d9e840;
    puVar1[1] = (undefined4 *)((int)this + 0x758);
    PKCThreadManager_StartThread(puVar1 + 2,puVar1,(SIZE_T *)0x0);
  }
  local_4._0_1_ = 0xd;
  FUN_00bc86b0((void *)((int)this + 0x764),(int)puVar1);
  *(void **)((int)this + 0x7a0) = this;
  *(code **)((int)this + 0x79c) = FUN_00bc2b60;
  pvVar2 = operator_new(0x18);
  local_4._0_1_ = 0xf;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = Ctor_vt00da192c_00bed800(pvVar2,this,param_8);
  }
  local_4._0_1_ = 0xd;
  *(undefined4 **)((int)this + 0x5ec) = puVar1;
  FUN_00bed5e0((int)puVar1);
  local_14 = 0x3000;
  local_10 = FUN_00bc2b90(param_5);
  pvVar2 = operator_new(0x18);
  local_4 = CONCAT31(local_4._1_3_,0x10);
  if (pvVar2 == (void *)0x0) {
    *(undefined4 *)((int)this + 0x5f0) = 0;
  }
  else {
    pvVar2 = PKCTimerManager_Ctor(pvVar2,0x42200000,0,*(undefined4 *)((int)this + 0x5ec),&local_14);
    *(void **)((int)this + 0x5f0) = pvVar2;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bc61a0 @ 00bc61a0 ////

uint __thiscall
FUN_00bc61a0(void *this,int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,
            void *param_5,int *param_6)

{
  int *piVar1;
  void *this_00;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  undefined2 uVar7;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  void *this_01;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined2 extraout_var_06;
  undefined3 extraout_var;
  int iVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined4 *puVar17;
  float *pfVar18;
  char cVar19;
  undefined4 uVar20;
  char cVar21;
  undefined4 uVar22;
  undefined1 uVar23;
  int local_b0;
  undefined4 local_ac [10];
  float local_84;
  uint local_80;
  void *local_7c;
  int local_78;
  undefined4 local_74 [2];
  float local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined2 extraout_var_05;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff062;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_3c = this;
  FUN_00bc1470(local_74,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bde190((undefined1 *)local_ac);
  if (param_2 == (undefined4 *)0x0) {
    FUN_00bde0f0((undefined1 *)local_ac);
  }
  else {
    puVar12 = local_ac;
    for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar12 = *param_2;
      param_2 = param_2 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  FUN_00bf2de0(param_5,(undefined1 *)local_ac);
  if (*(int *)((int)param_5 + 0x70) != 0x3f800000) {
    FUN_00bdde20((int)local_ac);
    FUN_00bddf90((int)local_ac);
    FUN_00bdde10((int)local_ac);
    FUN_00bddf70((int)local_ac);
  }
  fVar13 = FUN_00bddeb0((int)local_ac);
  if (fVar13 < (float10)0.0 == (fVar13 == (float10)0.0)) {
    iVar11 = _rand();
    fVar13 = FUN_00bddeb0((int)local_ac);
    if ((float10)((float)iVar11 * 3.051851e-05) <= fVar13) {
      GetField_0xe_00bdde30((int)local_ac);
      FUN_00bdde80((int)local_ac);
      uVar22 = *(undefined4 *)((int)param_5 + 0x34);
      uVar7 = GetField_0x10_00bdde70((int)local_ac);
      iVar11 = FUN_00bc5a20(this,param_1,param_4,CONCAT22(extraout_var_00,uVar7),uVar22);
      if (iVar11 != 0) {
        uVar7 = GetField_0xe_00bdde30((int)local_ac);
        if (CONCAT22(extraout_var_01,uVar7) == 0) {
          FUN_00bddfb0(local_ac,1);
        }
        uVar7 = GetField_0xe_00bdde30((int)local_ac);
        this_01 = (void *)FUN_00bc4430(this,CONCAT22(extraout_var_02,uVar7));
        local_7c = this_01;
        if (this_01 == (void *)0x0) {
          local_4 = 0xffffffff;
          PKCProtectionInstance_Leave(local_74);
          ExceptionList = local_c;
          return 0;
        }
        local_6c = 1.0;
        local_68 = 0x3f800000;
        local_64 = 1.0;
        local_60 = 0x3f800000;
        local_5c = 0;
        local_58 = 0;
        FUN_00bddd50(local_ac,&local_84,&local_44);
        iVar11 = _rand();
        local_6c = (local_44 - local_84) * (float)iVar11 * 3.051851e-05 + local_84;
        iVar11 = _rand();
        fVar13 = FUN_00bdddb0((int)local_ac);
        fVar14 = FUN_00bddd90((int)local_ac);
        local_64 = (float)(fVar14 + (float10)(float)(fVar13 * (float10)(((float)iVar11 +
                                                                        (float)iVar11) *
                                                                        3.051851e-05 - 1.0)));
        local_5c = GetField_8_00bdde50((int)local_ac);
        uVar7 = GetField_4_00bdde60((int)local_ac);
        local_58 = CONCAT22(extraout_var_03,uVar7);
        local_68 = *(undefined4 *)((int)param_5 + 0x3c);
        local_60 = *(undefined4 *)((int)param_5 + 0x40);
        local_10 = *(undefined4 *)((int)param_5 + 0x54);
        local_30 = *(char *)((int)param_5 + 0x44);
        local_2f = *(undefined1 *)((int)param_5 + 0x45);
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_18 = 0;
        local_14 = 0;
        fVar13 = (float10)FUN_00bdde20((int)local_ac);
        local_1c = (float)fVar13;
        fVar13 = (float10)FUN_00bdde10((int)local_ac);
        local_20 = (float)fVar13;
        uVar7 = GetField_0x18_00bde080((int)local_ac);
        local_18 = CONCAT22(extraout_var_04,uVar7);
        local_14 = FUN_00bde0a0((int)local_ac);
        local_2c = *(undefined4 *)((int)param_5 + 0x48);
        local_28 = *(undefined4 *)((int)param_5 + 0x4c);
        local_24 = *(undefined4 *)((int)param_5 + 0x50);
        local_54 = 0;
        local_50 = 0;
        local_4c = 0;
        local_50 = FUN_00bdde40((int)local_ac);
        local_b0 = *(int *)((int)param_5 + 0x5c);
        local_54 = param_3;
        if (local_b0 == 0) {
          local_b0 = (int)this + 0x5f8;
        }
        uVar8 = FUN_00bdded0(local_ac,&local_38,&local_40,&local_48);
        local_34 = CONCAT31(local_34._1_3_,(char)uVar8);
        local_78 = 0;
        iVar11 = RedBlackTree_GetMinObject((undefined4 *)((int)this + 8));
        if (iVar11 != 0) {
          do {
            iVar9 = RedBlackTree_GetSuccessor((void *)((int)this + 8),(int *)((int)this + 4),iVar11);
            if ((*(uint *)(iVar11 + 0x14) < 0x20) &&
               ((local_5c & 1 << ((byte)*(uint *)(iVar11 + 0x14) & 0x1f)) != 0)) {
              local_78 = *(int *)(iVar11 + 0x18);
              iVar9 = 0;
            }
            this_01 = local_7c;
            iVar11 = iVar9;
          } while (iVar9 != 0);
        }
        local_80 = local_80 & 0xffffff00;
        if ((local_50 != -1) &&
           (iVar11 = RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x14)), iVar11 != 0)) {
          piVar1 = (int *)((int)this + 0x10);
          this_00 = (void *)((int)this + 0x14);
          do {
            iVar9 = RedBlackTree_GetSuccessor(this_00,piVar1,iVar11);
            if ((*(uint *)(iVar11 + 0x14) < 0x20) &&
               ((local_5c & 1 << ((byte)*(uint *)(iVar11 + 0x14) & 0x1f)) != 0)) {
              local_80 = CONCAT31(local_80._1_3_,1);
              iVar9 = 0;
            }
            this = local_3c;
            this_01 = local_7c;
            iVar11 = iVar9;
          } while (iVar9 != 0);
        }
        if (param_6 == (int *)0x0) {
          iVar11 = *(int *)((int)this + 0x7a4);
          *(int *)((int)this + 0x7a4) = iVar11 + 1;
        }
        else {
          iVar11 = *param_6;
        }
        uVar22 = *(undefined4 *)((int)param_5 + 0x78);
        uVar20 = *(undefined4 *)((int)param_5 + 0x6c);
        puVar12 = (undefined4 *)((int)param_5 + 0x60);
        uVar15 = local_34;
        iVar9 = local_78;
        uVar8 = local_80;
        bVar2 = FUN_00bdde90((int)local_ac);
        uVar23 = (undefined1)uVar8;
        cVar21 = (char)uVar15;
        uVar8 = FUN_00bf5a60((int)param_5);
        cVar19 = (char)uVar8;
        bVar3 = FUN_00bf5a50((int)param_5);
        bVar4 = FUN_00bf5a40((int)param_5);
        puVar17 = &local_54;
        pcVar16 = &local_30;
        pfVar18 = &local_6c;
        bVar5 = FUN_00bdde80((int)local_ac);
        uVar15 = *(undefined4 *)((int)param_5 + 0x34);
        uVar8 = (uint)bVar5;
        uVar7 = GetField_0x10_00bdde70((int)local_ac);
        uVar10 = CONCAT22(extraout_var_05,uVar7);
        uVar7 = GetField_0xe_00bdde30((int)local_ac);
        FUN_00bef0c0(this_01,this,iVar11,CONCAT22(extraout_var_06,uVar7),(int)param_1,param_4,uVar10
                     ,uVar15,uVar8,pcVar16,puVar17,(uint *)pfVar18,bVar4,bVar3,cVar19,bVar2,local_b0
                     ,puVar12,uVar20,cVar21,local_38,local_40,local_48,uVar22,iVar9,uVar23);
        bVar6 = FUN_00bedac0((int)this_01);
        local_4 = 0xffffffff;
        PKCProtectionInstance_Leave(local_74);
        ExceptionList = local_c;
        return -(uint)(CONCAT31(extraout_var,bVar6) != 0) & (uint)this_01;
      }
    }
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_74);
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00bc66e0 @ 00bc66e0 ////

void * __thiscall
FUN_00bc66e0(void *this,int *param_1,undefined4 param_2,void *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  void *this_00;
  int iVar4;
  int *piVar5;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff074;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  piVar5 = param_1 + 2;
  local_4 = 0;
  piVar2 = (int *)(**(code **)(*param_1 + 0x98))();
  pvVar3 = (void *)FUN_00bc61a0(this,piVar2,piVar5,param_2,(int)param_1,param_3,param_4);
  if (param_5 == (int *)0x0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = pvStack_c;
    return pvVar3;
  }
  this_00 = (void *)(**(code **)(*param_5 + 4))();
  if (this_00 == (void *)0x0) {
    iVar4 = (**(code **)*param_5)();
    if (iVar4 == 0) {
      local_4 = 0xffffffff;
      PKCProtectionInstance_Leave(local_14);
      ExceptionList = pvStack_c;
      return pvVar3;
    }
    this_00 = (void *)FUN_00bef750((int)this + 0x5c);
    iVar1 = *(int *)((int)this + 0x7a4);
    *(int *)((int)this + 0x7a4) = iVar1 + 1;
    FUN_00bf6190(this_00,(int)this,iVar1,iVar4);
  }
  FUN_00bf6100(this_00,(int)pvVar3);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return this_00;
}


//// FUNCTION FUN_00bc6810 @ 00bc6810 ////

uint __thiscall
FUN_00bc6810(void *this,int *param_1,undefined4 *param_2,undefined4 param_3,void *param_4)

{
  uint uVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff086;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = FUN_00bc61a0(this,param_1,param_2,param_3,0,param_4,(int *)0x0);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00bc6890 @ 00bc6890 ////

undefined4 __thiscall FUN_00bc6890(void *this,int *param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_90 [2];
  undefined4 local_88 [31];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff09b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_90,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (param_1 == (int *)0x0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_90);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00bc7600(local_88);
    FUN_00bf5b60(local_88,*(void **)((int)this + 0x28),param_3);
    pvVar2 = FUN_00bc66e0(this,param_1,param_2,local_88,(int *)0x0,(int *)0x0);
    if (pvVar2 == (void *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)((int)pvVar2 + 0x40);
      *(uint *)((int)pvVar2 + 0x5c) = param_3[1];
    }
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_90);
  }
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00bc6970 @ 00bc6970 ////

void __thiscall FUN_00bc6970(void *this,int *param_1)

{
  undefined4 *this_00;
  int *piVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  float fVar8;
  
  piVar3 = param_1;
  if (param_1[8] != 0) {
    this_00 = (undefined4 *)((int)this + 0x1c);
    iVar4 = GetField_8_00bc7360((int)this_00);
    if (iVar4 != 0) {
      LH_Assert(&param_1,"CullingArray.Count () == 0\n");
      DebugBreak();
    }
    iVar4 = RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x114));
    if (iVar4 != 0) {
      param_1 = (int *)((int)this + 0x110);
      do {
        iVar5 = RedBlackTree_GetSuccessor(param_1 + 1,param_1,iVar4);
        if (*(int *)(iVar4 + 0x88) == piVar3[5]) {
          FUN_00bc8390(this_00,iVar4);
        }
        iVar4 = iVar5;
      } while (iVar5 != 0);
    }
    FUN_00bc9370(this_00);
    piVar1 = (int *)piVar3[6];
    param_1 = (int *)(piVar3[7] + (int)piVar1);
    piVar7 = (int *)0x0;
    iVar4 = GetField_8_00bc7360((int)this_00);
    if (iVar4 != 0) {
      do {
        if (piVar7 < piVar1) {
          fVar8 = 1.0;
        }
        else if (piVar7 < param_1) {
          iVar4 = piVar3[7];
          iVar5 = (iVar4 - (int)piVar7) + (int)piVar1;
          fVar8 = (float)iVar5;
          if (iVar5 < 0) {
            fVar8 = fVar8 + 4.2949673e+09;
          }
          fVar2 = (float)iVar4;
          if (iVar4 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          fVar8 = fVar8 / fVar2;
        }
        else {
          fVar8 = 0.0;
        }
        iVar4 = thunk_FUN_00bc7470(this_00,(uint)piVar7);
        FUN_00bf33b0((void *)(iVar4 + 0xac),fVar8);
        piVar7 = (int *)((int)piVar7 + 1);
        piVar6 = (int *)GetField_8_00bc7360((int)this_00);
      } while (piVar7 < piVar6);
    }
    LH_Array_SetFilledSize_00bc7370(this_00,0);
  }
  return;
}


//// FUNCTION FUN_00bc6aa0 @ 00bc6aa0 ////

void __fastcall FUN_00bc6aa0(int *param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff0ad;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bf23c0(param_1 + 0x1b6,param_1 + 0xe,param_1 + 0x11,param_1 + 0x14);
  pvVar2 = (void *)RedBlackTree_GetMinObject(param_1 + 0x4b);
  if (pvVar2 != (void *)0x0) {
    do {
      pvVar3 = (void *)RedBlackTree_GetSuccessor(param_1 + 0x4b,param_1 + 0x4a,(int)pvVar2);
      cVar1 = FUN_00bf5590((int)pvVar2);
      if (cVar1 != '\0') {
        FUN_00bf55f0(pvVar2,(int)param_1);
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != (void *)0x0);
  }
  pvVar2 = (void *)RedBlackTree_GetMinObject(param_1 + 0x45);
  if (pvVar2 != (void *)0x0) {
    do {
      pvVar3 = (void *)RedBlackTree_GetSuccessor(param_1 + 0x45,param_1 + 0x44,(int)pvVar2);
      FUN_00beeff0(pvVar2,param_1,param_1[0x17d]);
      pvVar2 = pvVar3;
    } while (pvVar3 != (void *)0x0);
  }
  piVar4 = (int *)RedBlackTree_GetMinObject(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    do {
      FUN_00bc6970(param_1,piVar4);
      piVar4 = (int *)RedBlackTree_GetSuccessor(param_1 + 0xc,param_1 + 0xb,(int)piVar4);
    } while (piVar4 != (int *)0x0);
  }
  iVar5 = RedBlackTree_GetMinObject(param_1 + 0x45);
  if (iVar5 != 0) {
    do {
      iVar6 = RedBlackTree_GetSuccessor(param_1 + 0x45,param_1 + 0x44,iVar5);
      FUN_00bee4d0(iVar5);
      iVar5 = iVar6;
    } while (iVar6 != 0);
  }
  param_1[0x17d] = 0;
  piVar4 = (int *)RedBlackTree_GetMinObject(param_1 + 0x185);
  if (piVar4 != (int *)0x0) {
    do {
      piVar7 = (int *)RedBlackTree_GetSuccessor(param_1 + 0x185,param_1 + 0x184,(int)piVar4);
      if ((char)piVar4[0x3f] == '\0') {
        FUN_00bf4a70(piVar4,param_1);
      }
      else {
        if ((*(byte *)(piVar4 + 0x15) & 1) != 0) {
          FUN_00bf48c0(piVar4,(int)param_1);
        }
        FUN_00bf4810(piVar4,(int)param_1);
        FUN_00bcff70(param_1 + 0x185,param_1 + 0x184,(int)piVar4);
        (**(code **)(*piVar4 + 0x10))(1);
      }
      piVar4 = piVar7;
    } while (piVar7 != (int *)0x0);
  }
  FUN_00bc3fc0(param_1);
  FUN_00bc4600((float)param_1);
  FUN_00bed580(param_1[0x17b]);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION SetVtable_00d9e6c8_00bc6c70 @ 00bc6c70 ////

void __fastcall SetVtable_00d9e6c8_00bc6c70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e6c8;
  return;
}


//// FUNCTION SetVtable_00d9e7a0_00bc6ca0 @ 00bc6ca0 ////

void __fastcall SetVtable_00d9e7a0_00bc6ca0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e7a0;
  return;
}


//// FUNCTION SetVtable_00d9e7a0_00bc6cd0 @ 00bc6cd0 ////

void __fastcall SetVtable_00d9e7a0_00bc6cd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e7a0;
  return;
}


//// FUNCTION FUN_00bc6d50 @ 00bc6d50 ////

void __fastcall FUN_00bc6d50(int param_1)

{
  Dtor_00bed120((void *)(param_1 + 8));
  return;
}


//// FUNCTION ScalarDeletingDtor_00bc6d70 @ 00bc6d70 ////

int * __thiscall ScalarDeletingDtor_00bc6d70(void *this,byte param_1)

{
  thunk_FUN_00bcf880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc6d90 @ 00bc6d90 ////

int * __thiscall ScalarDeletingDtor_00bc6d90(void *this,byte param_1)

{
  thunk_FUN_00bcf880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc6de0 @ 00bc6de0 ////

void * __thiscall ScalarDeletingDtor_00bc6de0(void *this,byte param_1)

{
  FUN_00bf1dc0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc6e00 @ 00bc6e00 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc6e00(void *this,byte param_1)

{
  Dtor_00bed860(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bc6e60 @ 00bc6e60 ////

int * __fastcall FUN_00bc6e60(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bc6e80 @ 00bc6e80 ////

int * __fastcall FUN_00bc6e80(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bc6ea0 @ 00bc6ea0 ////

int * __fastcall FUN_00bc6ea0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bc6ec0 @ 00bc6ec0 ////

int * __fastcall FUN_00bc6ec0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION SetVtable_00d9e7b8_00bc6f20 @ 00bc6f20 ////

void __fastcall SetVtable_00d9e7b8_00bc6f20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e7b8;
  return;
}


//// FUNCTION SetVtable_00d9d9b4_00bc6fb0 @ 00bc6fb0 ////

void __fastcall SetVtable_00d9d9b4_00bc6fb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9b4;
  return;
}


//// FUNCTION FUN_00bc7200 @ 00bc7200 ////

void __fastcall FUN_00bc7200(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00bc7230 @ 00bc7230 ////

void * __thiscall ScalarDeletingDtor_00bc7230(void *this,byte param_1)

{
  FUN_00bc6d50((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_Array_Reserve_00bc72a0 @ 00bc72a0 ////

void __thiscall LH_Array_Reserve_00bc72a0(void *this,uint param_1)

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


//// FUNCTION GetField_8_00bc7360 @ 00bc7360 ////

undefined4 __fastcall GetField_8_00bc7360(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION LH_Array_SetFilledSize_00bc7370 @ 00bc7370 ////

void __thiscall LH_Array_SetFilledSize_00bc7370(void *this,uint param_1)

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


//// FUNCTION FUN_00bc73a0 @ 00bc73a0 ////

void __fastcall FUN_00bc73a0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00bc73b0 @ 00bc73b0 ////

void __fastcall LH_Array_FreeBuffer_00bc73b0(undefined4 *param_1)

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


//// FUNCTION FUN_00bc7410 @ 00bc7410 ////

undefined4 __fastcall FUN_00bc7410(undefined4 param_1)

{
  return param_1;
}


//// FUNCTION FUN_00bc7420 @ 00bc7420 ////

undefined4 __fastcall FUN_00bc7420(undefined4 param_1)

{
  return param_1;
}


//// FUNCTION FUN_00bc7430 @ 00bc7430 ////

void __thiscall FUN_00bc7430(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00bc72a0(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION LH_Array_GetAt_00bc7470 @ 00bc7470 ////

undefined4 __thiscall LH_Array_GetAt_00bc7470(void *this,uint param_1)

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


//// FUNCTION FUN_00bc7510 @ 00bc7510 ////

void __fastcall FUN_00bc7510(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION ScalarDeletingDtor_00bc75e0 @ 00bc75e0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc75e0(void *this,byte param_1)

{
  SetVtable_00d9e7a0_00bc6cd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bc7600 @ 00bc7600 ////

undefined4 * __fastcall FUN_00bc7600(undefined4 *param_1)

{
  FUN_00bf2b90(param_1);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0x3f800000;
  return param_1;
}


//// FUNCTION FUN_00bc7650 @ 00bc7650 ////

undefined4 * __thiscall FUN_00bc7650(void *this,LPCRITICAL_SECTION param_1)

{
  *(LPCRITICAL_SECTION *)this = param_1;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    Wrap_EnterCriticalSection_00bcea90(param_1);
  }
  return this;
}


//// FUNCTION FUN_00bc7670 @ 00bc7670 ////

void __fastcall FUN_00bc7670(undefined4 *param_1)

{
  if ((LPCRITICAL_SECTION)*param_1 != (LPCRITICAL_SECTION)0x0) {
    Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)*param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00bc7680 @ 00bc7680 ////

undefined4 __fastcall FUN_00bc7680(int param_1,int param_2)

{
  float10 fVar1;
  undefined1 local_5;
  float local_4;
  
  fVar1 = FUN_00bf3390(param_2 + 0xac);
  local_4 = (float)fVar1;
  fVar1 = FUN_00bf3390(param_1 + 0xac);
  if (fVar1 < (float10)local_4) {
    return 1;
  }
  if ((float10)local_4 < fVar1) {
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 0x40) < *(uint *)(param_2 + 0x40)) {
    return 0xffffffff;
  }
  if (*(uint *)(param_2 + 0x40) < *(uint *)(param_1 + 0x40)) {
    return 1;
  }
  LH_Assert(&local_5,"ret != 0\n");
  DebugBreak();
  return 0;
}


//// FUNCTION ScalarDeletingDtor_00bc7780 @ 00bc7780 ////

int * __thiscall ScalarDeletingDtor_00bc7780(void *this,byte param_1)

{
  thunk_FUN_00bcf880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9e7b0_00bc77a0 @ 00bc77a0 ////

void __fastcall SetVtable_00d9e7b0_00bc77a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e7b0;
  return;
}


//// FUNCTION SetVtable_00d9da84_00bc77b0 @ 00bc77b0 ////

void __fastcall SetVtable_00d9da84_00bc77b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9da84;
  return;
}


//// FUNCTION Dtor_00bc7b10 @ 00bc7b10 ////

void __fastcall Dtor_00bc7b10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e8d4;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bc7bf0 @ 00bc7bf0 ////

void __fastcall Dtor_00bc7bf0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e8fc;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bc7cd0 @ 00bc7cd0 ////

void __fastcall Dtor_00bc7cd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e924;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bc7db0 @ 00bc7db0 ////

void __fastcall Dtor_00bc7db0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e94c;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Ctor_vt00d9e97c_00bc7f20 @ 00bc7f20 ////

undefined4 * __fastcall Ctor_vt00d9e97c_00bc7f20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff0f3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9e97c;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  PKCSemaphore_Create(param_1 + 7,0,1);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00bc7f90 @ 00bc7f90 ////

uint __thiscall FUN_00bc7f90(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x10))(param_1);
  if ((char)uVar1 == '\0') {
    if (param_1 != 0) {
      return param_1 & 0xffffff00;
    }
    do {
      PKCSemaphore_Wait((undefined4 *)((int)this + 0x1c));
      uVar1 = (**(code **)(*(int *)this + 0x10))(0);
    } while ((char)uVar1 == '\0');
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION Dtor_00bc7fd0 @ 00bc7fd0 ////

void __fastcall Dtor_00bc7fd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cff113;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9e97c;
  local_4 = 1;
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  local_4 = local_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00d9e7b8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc8040 @ 00bc8040 ////

bool __fastcall FUN_00bc8040(int param_1)

{
  int iVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)(param_1 + 4));
  iVar1 = *(int *)(param_1 + 0x24);
  PKCProtectionInstance_Leave(local_8);
  return iVar1 == 0;
}


//// FUNCTION FUN_00bc8070 @ 00bc8070 ////

uint __thiscall FUN_00bc8070(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)((int)this + 4));
  if (*(int *)((int)this + 0x24) == 0) {
    uVar2 = PKCProtectionInstance_Leave(local_8);
    return uVar2 & 0xffffff00;
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x2c) * 0xc);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
  *(uint *)((int)this + 0x2c) = (*(int *)((int)this + 0x2c) + 1U) % *(uint *)((int)this + 0x28);
  uVar3 = PKCProtectionInstance_Leave(local_8);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION ScalarDeletingDtor_00bc8230 @ 00bc8230 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc8230(void *this,byte param_1)

{
  SetVtable_00d9d9b4_00bc6fb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc8250 @ 00bc8250 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc8250(void *this,byte param_1)

{
  SetVtable_00d9e7b0_00bc77a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc8270 @ 00bc8270 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc8270(void *this,byte param_1)

{
  Dtor_00bc7fd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc8290 @ 00bc8290 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc8290(void *this,byte param_1)

{
  SetVtable_00d9da84_00bc77b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bc82b0 @ 00bc82b0 ////

void __fastcall FUN_00bc82b0(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_00bc6d50((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bc8390 @ 00bc8390 ////

void __thiscall FUN_00bc8390(void *this,undefined4 param_1)

{
  FUN_00bc7430(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00bc8400 @ 00bc8400 ////

void __fastcall FUN_00bc8400(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4;
  
  iVar2 = *param_2;
  iVar1 = *param_1;
  uStack_4 = param_1;
  if ((iVar2 == 0) || (iVar1 == 0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  iVar2 = FUN_00bc7680(iVar2,iVar1);
  if (iVar2 < 0) {
    iVar2 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar2;
  }
  iVar2 = *param_3;
  iVar1 = *param_2;
  if ((iVar2 == 0) || (iVar1 == 0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  iVar2 = FUN_00bc7680(iVar2,iVar1);
  if (iVar2 < 0) {
    iVar2 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar2;
  }
  iVar2 = *param_2;
  iVar1 = *param_1;
  if ((iVar2 == 0) || (iVar1 == 0)) {
    LH_Assert(&param_3,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  iVar2 = FUN_00bc7680(iVar2,iVar1);
  if (iVar2 < 0) {
    iVar2 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00bc84e0 @ 00bc84e0 ////

void __fastcall FUN_00bc84e0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  while( true ) {
    iVar2 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if ((iVar1 == 0) || (param_4 == 0)) {
      LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    iVar1 = FUN_00bc7680(iVar1,param_4);
    if (-1 < iVar1) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
    if (iVar2 <= param_3) {
      *(int *)(param_1 + iVar2 * 4) = param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION Ctor_vt00d9e8d4_00bc8580 @ 00bc8580 ////

undefined4 * __fastcall Ctor_vt00d9e8d4_00bc8580(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e8d4;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00d9e8fc_00bc85a0 @ 00bc85a0 ////

undefined4 * __fastcall Ctor_vt00d9e8fc_00bc85a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e8fc;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00d9e924_00bc85c0 @ 00bc85c0 ////

undefined4 * __fastcall Ctor_vt00d9e924_00bc85c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e924;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00d9e94c_00bc85e0 @ 00bc85e0 ////

undefined4 * __fastcall Ctor_vt00d9e94c_00bc85e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e94c;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bc8600 @ 00bc8600 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc8600(void *this,byte param_1)

{
  Dtor_00bc7b10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc8620 @ 00bc8620 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc8620(void *this,byte param_1)

{
  Dtor_00bc7bf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc8640 @ 00bc8640 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc8640(void *this,byte param_1)

{
  Dtor_00bc7cd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc8660 @ 00bc8660 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc8660(void *this,byte param_1)

{
  Dtor_00bc7db0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bc8680 @ 00bc8680 ////

void __fastcall FUN_00bc8680(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_00bc6d50((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bc86b0 @ 00bc86b0 ////

void __thiscall FUN_00bc86b0(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff156;
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


//// FUNCTION Dtor_00bc8860 @ 00bc8860 ////

void __fastcall Dtor_00bc8860(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e8d4;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bc8890 @ 00bc8890 ////

void __fastcall Dtor_00bc8890(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e8fc;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bc88c0 @ 00bc88c0 ////

void __fastcall Dtor_00bc88c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e924;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bc88f0 @ 00bc88f0 ////

void __fastcall Dtor_00bc88f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e94c;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bc8900 @ 00bc8900 ////

uint __thiscall FUN_00bc8900(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  uVar1 = FUN_00bc89a0((void *)((int)this + 0x20),param_1);
  if ((char)uVar1 == '\0') {
    local_4 = 0xffffffff;
    uVar2 = PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  Wrap_ReleaseSemaphore_00bcead0((undefined4 *)((int)this + 0x1c));
  local_4 = 0xffffffff;
  uVar1 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00bc89a0 @ 00bc89a0 ////

undefined4 __thiscall FUN_00bc89a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 == *(int *)((int)this + 4)) {
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = iVar2 * 2;
    }
    uVar4 = FUN_00bc8a00(this,uVar3);
    if ((char)uVar4 == '\0') {
      return uVar4;
    }
  }
  puVar1 = (undefined4 *)
           (*(int *)this +
           ((uint)(*(int *)((int)this + 0xc) + *(int *)((int)this + 4)) % *(uint *)((int)this + 8))
           * 0xc);
  *puVar1 = *param_1;
  uVar4 = param_1[1];
  puVar1[1] = uVar4;
  puVar1[2] = param_1[2];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION FUN_00bc8a00 @ 00bc8a00 ////

uint __thiscall FUN_00bc8a00(void *this,uint param_1)

{
  undefined4 *puVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 != *(uint *)((int)this + 8)) {
    if (param_1 < *(uint *)((int)this + 4)) {
      return in_EAX & 0xffffff00;
    }
    puVar4 = (undefined4 *)0x0;
    if (param_1 != 0) {
      puVar4 = operator_new(param_1 * 0xc);
      uVar3 = 0;
      puVar5 = puVar4;
      if (*(int *)((int)this + 4) != 0) {
        do {
          uVar2 = *(int *)((int)this + 0xc) + uVar3;
          uVar3 = uVar3 + 1;
          puVar1 = (undefined4 *)(*(int *)this + (uVar2 % *(uint *)((int)this + 8)) * 0xc);
          *puVar5 = *puVar1;
          puVar5[1] = puVar1[1];
          puVar5[2] = puVar1[2];
          puVar5 = puVar5 + 3;
        } while (uVar3 < *(uint *)((int)this + 4));
      }
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(uint *)((int)this + 8) = param_1;
    if (*(void **)this != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    *(undefined4 **)this = puVar4;
    in_EAX = 0;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


//// FUNCTION FUN_00bc8aa0 @ 00bc8aa0 ////

void __fastcall FUN_00bc8aa0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00bc8400(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_00bc8400(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_00bc8400(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_00bc8400(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_00bc8400(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00bc8b60 @ 00bc8b60 ////

void __fastcall FUN_00bc8b60(int param_1,int param_2,int param_3,int param_4)

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
    iVar1 = FUN_00bc7680(iVar1,local_8);
    if (iVar1 < 0) {
      iVar2 = param_2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    param_2 = param_3 + -1;
  }
  FUN_00bc84e0(param_1,param_2,local_4,param_4);
  return;
}


//// FUNCTION Ctor_vt00d9eae8_00bc8c30 @ 00bc8c30 ////

undefined4 * __fastcall Ctor_vt00d9eae8_00bc8c30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e8d4;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9eae8;
  return param_1;
}


//// FUNCTION Ctor_vt00d9eb10_00bc8c50 @ 00bc8c50 ////

undefined4 * __fastcall Ctor_vt00d9eb10_00bc8c50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e8fc;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9eb10;
  return param_1;
}


//// FUNCTION Ctor_vt00d9eb38_00bc8c70 @ 00bc8c70 ////

undefined4 * __fastcall Ctor_vt00d9eb38_00bc8c70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e924;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9eb38;
  return param_1;
}


//// FUNCTION Ctor_vt00d9eb60_00bc8c90 @ 00bc8c90 ////

undefined4 * __fastcall Ctor_vt00d9eb60_00bc8c90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e94c;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9eb60;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bc8cb0 @ 00bc8cb0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc8cb0(void *this,byte param_1)

{
  Dtor_00bc8860(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc8cd0 @ 00bc8cd0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc8cd0(void *this,byte param_1)

{
  Dtor_00bc8890(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc8cf0 @ 00bc8cf0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc8cf0(void *this,byte param_1)

{
  Dtor_00bc88c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc8d10 @ 00bc8d10 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc8d10(void *this,byte param_1)

{
  Dtor_00bc88f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bc8d30 @ 00bc8d30 ////

void __fastcall FUN_00bc8d30(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int local_8;
  undefined4 *local_4;
  
  piVar7 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_c = param_2;
  local_4 = param_1;
  FUN_00bc8aa0(param_2,piVar7,param_3 + -1);
  piVar6 = piVar7 + 1;
  local_10 = piVar6;
  if (param_2 < piVar7) {
    while( true ) {
      iVar4 = piVar7[-1];
      iVar2 = *piVar7;
      if ((iVar4 == 0) || (iVar2 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      iVar4 = FUN_00bc7680(iVar4,iVar2);
      if (iVar4 < 0) break;
      iVar4 = *piVar7;
      iVar2 = piVar7[-1];
      if ((iVar4 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      iVar4 = FUN_00bc7680(iVar4,iVar2);
      if ((iVar4 < 0) || (piVar7 = piVar7 + -1, piVar7 <= local_c)) break;
    }
  }
  piVar3 = piVar6;
  piVar1 = local_10;
  piVar5 = piVar7;
  if (piVar6 < param_3) {
    while( true ) {
      iVar4 = *piVar6;
      iVar2 = *piVar7;
      if ((iVar4 == 0) || (iVar2 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      iVar4 = FUN_00bc7680(iVar4,iVar2);
      piVar3 = piVar6;
      piVar1 = piVar6;
      if (iVar4 < 0) break;
      iVar4 = *piVar7;
      iVar2 = *piVar6;
      if ((iVar4 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      iVar4 = FUN_00bc7680(iVar4,iVar2);
      if ((iVar4 < 0) || (piVar6 = piVar6 + 1, piVar3 = piVar6, piVar1 = piVar6, param_3 <= piVar6))
      break;
    }
  }
joined_r0x00bc8e54:
  do {
    local_10 = piVar1;
    if (param_3 <= piVar3) {
LAB_00bc8eee:
      bVar8 = piVar5 == local_c;
      if (local_c < piVar5) {
        do {
          iVar4 = piVar5[-1];
          local_8 = *piVar7;
          if ((iVar4 == 0) || (local_8 == 0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          iVar4 = FUN_00bc7680(iVar4,local_8);
          if (-1 < iVar4) {
            iVar4 = *piVar7;
            local_8 = piVar5[-1];
            if ((iVar4 == 0) || (local_8 == 0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            iVar4 = FUN_00bc7680(iVar4,local_8);
            if (iVar4 < 0) break;
            iVar4 = piVar7[-1];
            piVar7 = piVar7 + -1;
            *piVar7 = piVar5[-1];
            piVar5[-1] = iVar4;
          }
          piVar5 = piVar5 + -1;
        } while (local_c < piVar5);
        bVar8 = piVar5 == local_c;
        piVar6 = local_10;
      }
      if (bVar8) {
        if (piVar3 == param_3) {
          *local_4 = piVar7;
          local_4[1] = piVar6;
          return;
        }
        if (piVar6 != piVar3) {
          iVar4 = *piVar7;
          *piVar7 = *piVar6;
          *piVar6 = iVar4;
        }
        iVar4 = *piVar7;
        *piVar7 = *piVar3;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
        *piVar3 = iVar4;
        piVar3 = piVar3 + 1;
        piVar1 = piVar6;
      }
      else {
        piVar5 = piVar5 + -1;
        if (piVar3 == param_3) {
          piVar7 = piVar7 + -1;
          if (piVar5 != piVar7) {
            iVar4 = *piVar5;
            *piVar5 = *piVar7;
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
          iVar4 = *piVar3;
          *piVar3 = *piVar5;
          *piVar5 = iVar4;
          piVar3 = piVar3 + 1;
          piVar1 = local_10;
        }
      }
      goto joined_r0x00bc8e54;
    }
    iVar4 = *piVar7;
    local_8 = *piVar3;
    if ((iVar4 == 0) || (local_8 == 0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    iVar4 = FUN_00bc7680(iVar4,local_8);
    if (-1 < iVar4) {
      iVar4 = *piVar3;
      local_8 = *piVar7;
      if ((iVar4 == 0) || (local_8 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      iVar4 = FUN_00bc7680(iVar4,local_8);
      piVar6 = local_10;
      if (iVar4 < 0) goto LAB_00bc8eee;
      iVar4 = *local_10;
      *local_10 = *piVar3;
      *piVar3 = iVar4;
      local_10 = local_10 + 1;
    }
    piVar6 = local_10;
    piVar3 = piVar3 + 1;
    piVar1 = local_10;
  } while( true );
}


//// FUNCTION FUN_00bc9020 @ 00bc9020 ////

void __fastcall FUN_00bc9020(int *param_1,int *param_2)

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
      iVar2 = *piVar3;
      iVar1 = *param_1;
      if ((iVar2 == 0) || (iVar1 == 0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      iVar2 = FUN_00bc7680(iVar2,iVar1);
      piVar4 = piVar3;
      if (iVar2 < 0) {
        if ((param_1 != piVar3) && (piVar3 != local_10)) {
          FUN_00bc7510(param_1,(int)piVar3,local_10);
        }
      }
      else {
        do {
          iVar2 = *piVar3;
          iVar1 = piVar4[-1];
          local_c = piVar4;
          if ((iVar2 == 0) || (iVar1 == 0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          iVar2 = FUN_00bc7680(iVar2,iVar1);
          piVar4 = piVar4 + -1;
        } while (iVar2 < 0);
        param_1 = local_8;
        if ((local_c != piVar3) && (piVar3 != local_10)) {
          FUN_00bc7510(local_c,(int)piVar3,local_10);
          param_1 = local_8;
        }
      }
      piVar3 = piVar3 + 1;
      local_10 = local_10 + 1;
    } while (piVar3 != local_4);
  }
  return;
}


//// FUNCTION FUN_00bc9120 @ 00bc9120 ////

void __fastcall FUN_00bc9120(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    FUN_00bc8b60(param_1,iVar3,iVar2,*(int *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00bc9190 @ 00bc9190 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc9190(void *this,byte param_1)

{
  Dtor_00bc5730(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bc9210 @ 00bc9210 ////

void __fastcall FUN_00bc9210(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    iVar1 = *(int *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00bc8b60((int)param_1,0,iVar2 + -4 >> 2,iVar1);
  }
  return;
}


//// FUNCTION FUN_00bc9260 @ 00bc9260 ////

void __fastcall FUN_00bc9260(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00bc92f3:
      if (1 < iVar2) {
        FUN_00bc9020(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00bc9120((int)param_1,(int)param_2);
        }
        FUN_00bc9210(param_1,(int)param_2);
        return;
      }
      goto LAB_00bc92f3;
    }
    FUN_00bc8d30(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00bc9260(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00bc9260(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00bc9370 @ 00bc9370 ////

void __fastcall FUN_00bc9370(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00bc9260(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION SetVtable_00d9ec7c_00bc93a0 @ 00bc93a0 ////

void __fastcall SetVtable_00d9ec7c_00bc93a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9ec7c;
  return;
}


//// FUNCTION FUN_00bc93f0 @ 00bc93f0 ////

int * __thiscall FUN_00bc93f0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 8))(param_1);
  return this;
}


//// FUNCTION Dtor_00bc9420 @ 00bc9420 ////

void __fastcall Dtor_00bc9420(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cff1a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9ecac;
  local_4 = 1;
  _eh_vector_destructor_iterator_(param_1 + 0x1e9,8,8,PKStringsCHeapString_Dtor);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0x1a9,8,0x20,PKStringsCHeapString_Dtor);
  *param_1 = &PTR_LAB_00d9ec7c;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc94c0 @ 00bc94c0 ////

void __thiscall FUN_00bc94c0(void *this,uint param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 local_1c [2];
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff1ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_1c,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (param_1 < 0x20) {
    puVar1 = Ctor_vt00d9feb8_00be1e50(local_14,param_2);
    local_4._0_1_ = 1;
    FUN_00be2010((void *)((int)this + param_1 * 8 + 0x6a4),(int)puVar1);
    local_4 = (uint)local_4._1_3_ << 8;
    PKStringsCHeapString_Dtor(local_14);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_1c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc9550 @ 00bc9550 ////

int __thiscall FUN_00bc9550(void *this,uint param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff1cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (0x1f < param_1) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = FUN_00bbf3a0((int *)((int)this + param_1 * 8 + 0x6a4));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00bc95f0 @ 00bc95f0 ////

float10 __thiscall FUN_00bc95f0(int param_1,uint param_2)

{
  float fVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff1de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0xffffffff;
  if (7 < param_2) {
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return (float10)0.0;
  }
  fVar1 = *(float *)(param_1 + 0x684 + param_2 * 4);
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return (float10)fVar1;
}


//// FUNCTION FUN_00bc9680 @ 00bc9680 ////

void __thiscall FUN_00bc9680(void *this,uint param_1,float param_2)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff1f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if ((param_1 < 8) && (*(float *)((int)this + param_1 * 4 + 0x684) != param_2)) {
    *(float *)((int)this + param_1 * 4 + 0x684) = param_2;
    FUN_00bc2c10(*(int *)(*(int *)((int)this + 0x7e4) + 0x48));
    iVar1 = *(int *)(*(int *)((int)this + 0x7e4) + 0x74);
    if (iVar1 != 0) {
      FUN_00bca640(iVar1);
    }
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc9720 @ 00bc9720 ////

undefined4 FUN_00bc9720(void)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  PKCProtectionInstance_Leave(local_8);
  return 8;
}


//// FUNCTION FUN_00bc9750 @ 00bc9750 ////

void __thiscall FUN_00bc9750(void *this,uint param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 local_1c [2];
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff20a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_1c,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (param_1 < 8) {
    puVar1 = Ctor_vt00d9feb8_00be1e50(local_14,param_2);
    local_4._0_1_ = 1;
    FUN_00be2010((void *)((int)this + param_1 * 8 + 0x7a4),(int)puVar1);
    local_4 = (uint)local_4._1_3_ << 8;
    PKStringsCHeapString_Dtor(local_14);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_1c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc97e0 @ 00bc97e0 ////

int __thiscall FUN_00bc97e0(void *this,uint param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff21c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (7 < param_1) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = FUN_00bbf3a0((int *)((int)this + param_1 * 8 + 0x7a4));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00bc9880 @ 00bc9880 ////

void __fastcall FUN_00bc9880(float *param_1,uint param_2,float param_3,int param_4)

{
  for (; ((param_3 != 0.0 && (param_2 != 0)) && (param_4 != 0)); param_4 = param_4 + -1) {
    if ((param_2 & 1) != 0) {
      param_3 = param_3 * *param_1;
    }
    param_2 = param_2 >> 1;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00bc98d0 @ 00bc98d0 ////

void * __fastcall FUN_00bc98d0(void *param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int local_20 [3];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cff247;
  local_14 = ExceptionList;
  uVar2 = 0;
  ExceptionList = &local_14;
  Ctor_vt00d9feb8_00be1e00(local_20);
  local_c = 1;
  if (param_4 == 0) {
    LH_LogErrorMessage(local_20,"[not set]");
    Ctor_vt00d9feb8_00be2070(param_1,(int)local_20);
    local_c = local_c & 0xffffff00;
    PKStringsCHeapString_Dtor(local_20);
    ExceptionList = local_14;
    return param_1;
  }
  do {
    if (param_3 <= uVar2) break;
    if ((param_4 & 1) != 0) {
      iVar1 = PKString_GetLength(local_20);
      if (iVar1 != 0) {
        LH_LogErrorMessage(local_20," + ");
      }
      LH_LogErrorMessage(local_20,"\'");
      FUN_00bbf750(local_20,param_2);
      LH_LogErrorMessage(local_20,"\'");
    }
    param_4 = param_4 >> 1;
    uVar2 = uVar2 + 1;
    param_2 = param_2 + 2;
  } while (param_4 != 0);
  Ctor_vt00d9feb8_00be2070(param_1,(int)local_20);
  local_c = local_c & 0xffffff00;
  PKStringsCHeapString_Dtor(local_20);
  ExceptionList = local_14;
  return param_1;
}


//// FUNCTION FUN_00bc9a60 @ 00bc9a60 ////

void __fastcall FUN_00bc9a60(uint param_1,char param_2,uint *param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  
  if (param_1 < param_5) {
    uVar1 = 1 << ((byte)param_1 & 0x1f);
    if (param_4 != (uint *)0x0) {
      *param_4 = *param_4 | uVar1;
    }
    if (param_3 != (uint *)0x0) {
      if (param_2 != '\0') {
        *param_3 = *param_3 | uVar1;
        return;
      }
      *param_3 = *param_3 & ~uVar1;
    }
  }
  return;
}


//// FUNCTION FUN_00bc9ad0 @ 00bc9ad0 ////

void __fastcall FUN_00bc9ad0(uint param_1,char param_2,uint *param_3,uint *param_4)

{
  FUN_00bc9a60(param_1,param_2,param_3,param_4,0x20);
  return;
}


//// FUNCTION FUN_00bc9af0 @ 00bc9af0 ////

void __fastcall FUN_00bc9af0(uint param_1,char param_2,uint *param_3,uint *param_4)

{
  FUN_00bc9a60(param_1,param_2,param_3,param_4,8);
  return;
}


//// FUNCTION FUN_00bc9b10 @ 00bc9b10 ////

void __fastcall FUN_00bc9b10(int param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  
  bVar1 = false;
  pfVar3 = (float *)(param_1 + 0x1c);
  iVar2 = 0x20;
  do {
    if (pfVar3[-1] != *pfVar3) {
      FUN_00bca3e0(pfVar3 + -6,1000.0 / *(float *)(*(int *)(param_1 + 0x7e4) + 0x84));
      bVar1 = true;
    }
    pfVar3 = pfVar3 + 0xd;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (bVar1) {
    FUN_00bc2bd0(*(int *)(*(int *)(param_1 + 0x7e4) + 0x48));
    iVar2 = *(int *)(*(int *)(param_1 + 0x7e4) + 0x74);
    if (iVar2 != 0) {
      FUN_00bca5c0(iVar2);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00bc9d20 @ 00bc9d20 ////

float10 __thiscall FUN_00bc9d20(int param_1,float param_2,uint param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00bc9880((float *)(param_1 + 0x684),param_3,param_2,8);
  if (fVar1 < (float10)0.25) {
    return (float10)0.25;
  }
  if ((float10)4.0 < fVar1) {
    fVar1 = (float10)4.0;
  }
  return fVar1;
}


//// FUNCTION FUN_00bc9d70 @ 00bc9d70 ////

void __fastcall FUN_00bc9d70(float *param_1,uint param_2,float param_3,int param_4)

{
  float fVar1;
  
  for (; ((param_3 != 0.0 && (param_2 != 0)) && (param_4 != 0)); param_4 = param_4 + -1) {
    if ((param_2 & 1) != 0) {
      fVar1 = *param_1;
      if (*(char *)(param_1 + 0xc) != '\0') {
        if (fVar1 < 3.1415927) {
          if (fVar1 < -3.1415927) {
            fVar1 = fVar1 + 6.2831855;
          }
        }
        else {
          fVar1 = fVar1 - 6.2831855;
        }
      }
      param_3 = fVar1 * param_3;
    }
    param_2 = param_2 >> 1;
    param_1 = param_1 + 0xd;
  }
  return;
}


//// FUNCTION Ctor_vt00d9ecac_00bc9df0 @ 00bc9df0 ////

undefined4 * __thiscall Ctor_vt00d9ecac_00bc9df0(void *this,undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff2bd;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_00d9ecac;
  iVar3 = 0x20;
  puVar1 = this;
  do {
    puVar1 = puVar1 + 0x34;
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar6 = (int *)((int)this + 0x6a4);
  _eh_vector_constructor_iterator_(piVar6,8,0x20,Ctor_vt00d9feb8_00be1e00,PKStringsCHeapString_Dtor);
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x7a4),8,8,Ctor_vt00d9feb8_00be1e00,PKStringsCHeapString_Dtor);
  *(undefined4 *)((int)this + 0x7e4) = param_1;
  uVar5 = 0;
  local_4._0_1_ = 2;
  puVar4 = (undefined4 *)((int)this + 0x20);
  do {
    puVar4[-6] = 0x3f800000;
    puVar4[-7] = 0x3f800000;
    *puVar4 = 0x3f800000;
    puVar4[-1] = 0;
    puVar4[-2] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[-3] = 0;
    puVar4[2] = 0;
    puVar4[-4] = 0;
    puVar4[1] = 0;
    puVar4[-5] = 0;
    puVar2 = Ctor_vt00d9feb8_00be1e50(local_14,"G");
    local_4._0_1_ = 3;
    LH_PrintResourceID(puVar2,uVar5);
    (**(code **)(*piVar6 + 8))(puVar2);
    local_4._0_1_ = 2;
    PKStringsCHeapString_Dtor(local_14);
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 0xd;
    piVar6 = piVar6 + 2;
  } while (uVar5 < 0x20);
  uVar5 = 0;
  piVar6 = (int *)((int)this + 0x7a4);
  puVar4 = (undefined4 *)((int)this + 0x684);
  do {
    *puVar4 = 0x3f800000;
    puVar2 = Ctor_vt00d9feb8_00be1e50(local_14,"P");
    local_4._0_1_ = 4;
    LH_PrintResourceID(puVar2,uVar5);
    (**(code **)(*piVar6 + 8))(puVar2);
    local_4._0_1_ = 2;
    PKStringsCHeapString_Dtor(local_14);
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 1;
    piVar6 = piVar6 + 2;
  } while (uVar5 < 8);
  FUN_00bc9b10((int)this);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00bc9f80 @ 00bc9f80 ////

void __thiscall FUN_00bc9f80(void *this,uint param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff2cf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (param_1 < 0x20) {
    FUN_00bca1a0((void *)(param_1 * 0x34 + 4 + (int)this),param_2,0.0,param_3);
    FUN_00bc2bd0(*(int *)(*(int *)((int)this + 0x7e4) + 0x48));
    iVar1 = *(int *)(*(int *)((int)this + 0x7e4) + 0x74);
    if (iVar1 != 0) {
      FUN_00bca5c0(iVar1);
    }
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bca020 @ 00bca020 ////

float10 __thiscall FUN_00bca020(int param_1,float param_2,uint param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00bc9d70((float *)(param_1 + 4),param_3,param_2,0x20);
  if (fVar1 < (float10)0.0) {
    return (float10)0.0;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  return fVar1;
}


//// FUNCTION FUN_00bca0f0 @ 00bca0f0 ////

float10 FUN_00bca0f0(float param_1)

{
  if (3.1415927 <= param_1) {
    return (float10)param_1 - (float10)6.2831855;
  }
  if ((float10)param_1 < (float10)-3.1415927) {
    return (float10)param_1 + (float10)6.2831855;
  }
  return (float10)param_1;
}


//// FUNCTION FUN_00bca140 @ 00bca140 ////

void __thiscall FUN_00bca140(void *this,float param_1)

{
  if (*(char *)((int)this + 0x30) != '\0') {
    if (param_1 < 3.1415927) {
      if (param_1 < -3.1415927) {
        param_1 = param_1 + 6.2831855;
      }
    }
    else {
      param_1 = param_1 - 6.2831855;
    }
  }
  *(float *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(float *)this = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(float *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}


//// FUNCTION FUN_00bca1a0 @ 00bca1a0 ////

void __thiscall FUN_00bca1a0(void *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_3 < 0.001) {
    FUN_00bca140(this,param_1);
    return;
  }
  if (*(char *)((int)this + 0x30) == '\0') {
    fVar3 = (float10)param_1;
  }
  else {
    fVar3 = FUN_00bca0f0(param_1);
    if (fVar3 - (float10)*(float *)this < (float10)3.1415927) {
      if (fVar3 - (float10)*(float *)this < (float10)-3.1415927) {
        *(float *)this = *(float *)this - 6.2831855;
      }
    }
    else {
      *(float *)this = *(float *)this + 6.2831855;
    }
  }
  *(float *)((int)this + 4) = (float)fVar3;
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)this;
  local_58 = param_3 * param_3 * 0.5;
  *(float *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0xc);
  *(float *)((int)this + 0x18) = param_3;
  local_5c = param_3 * local_58 * 0.33333334;
  local_44 = param_3;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_60 = local_58 * local_58 * 0.16666667;
  local_4c = param_3;
  local_40 = 0x3f800000;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_54 = local_5c;
  local_50 = local_58;
  local_48 = local_58;
  FUN_00bf6b90(&local_30,&local_60);
  fVar1 = (*(float *)((int)this + 4) - *(float *)((int)this + 0x1c)) -
          *(float *)((int)this + 0x20) * *(float *)((int)this + 0x18);
  fVar2 = *(float *)((int)this + 8) - *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x2c) = local_18 * 0.0 + local_30 * fVar1 + local_24 * fVar2 + local_c;
  *(float *)((int)this + 0x24) = local_10 * 0.0 + local_28 * fVar1 + local_1c * fVar2 + local_4;
  *(float *)((int)this + 0x28) = local_14 * 0.0 + local_20 * fVar2 + local_2c * fVar1 + local_8;
  return;
}


//// FUNCTION FUN_00bca3e0 @ 00bca3e0 ////

void __thiscall FUN_00bca3e0(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)((int)this + 0x14);
  fVar2 = param_1 + *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x14) = fVar2;
  if (fVar2 < *(float *)((int)this + 0x18)) {
    fVar3 = fVar2 * fVar2 * 0.5;
    fVar1 = fVar2 * fVar3 * 0.33333334;
    *(float *)((int)this + 0xc) =
         fVar1 * *(float *)((int)this + 0x2c) +
         fVar2 * *(float *)((int)this + 0x24) + fVar3 * *(float *)((int)this + 0x28) +
         *(float *)((int)this + 0x20);
    *(float *)this =
         fVar3 * *(float *)((int)this + 0x24) +
         fVar1 * *(float *)((int)this + 0x28) +
         fVar2 * *(float *)((int)this + 0x20) +
         fVar3 * fVar3 * 0.16666667 * *(float *)((int)this + 0x2c) + *(float *)((int)this + 0x1c);
    return;
  }
  if (fVar1 < *(float *)((int)this + 0x18)) {
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 8);
    *(undefined4 *)this = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x18);
    return;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)this;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x18);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bca4b0 @ 00bca4b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bca4b0(void *this,byte param_1)

{
  Dtor_00bc9420(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9ecf8_00bca500 @ 00bca500 ////

void __fastcall SetVtable_00d9ecf8_00bca500(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9ecf8;
  return;
}


//// FUNCTION FUN_00bca540 @ 00bca540 ////

undefined4 __thiscall
FUN_00bca540(void *this,int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bf70d0(*(void **)((int)this + 8),param_1,param_2,param_3,param_4);
  local_4 = 0xffffffff;
  uVar1 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00bca5c0 @ 00bca5c0 ////

void __fastcall FUN_00bca5c0(int param_1)

{
  float10 fVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff31a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  fVar1 = FUN_00bca020(*(int *)(*(int *)(param_1 + 4) + 0x44),1.0,*(uint *)(param_1 + 0xc));
  FUN_00bf6f50(*(void **)(param_1 + 8),(float)fVar1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bca640 @ 00bca640 ////

void __fastcall FUN_00bca640(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff32c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bc9d20(*(int *)(*(int *)(param_1 + 4) + 0x44),1.0,*(uint *)(param_1 + 0x10));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bca6b0 @ 00bca6b0 ////

void __fastcall FUN_00bca6b0(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff33e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_00bf7240(*(void **)(param_1 + 8));
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bca710 @ 00bca710 ////

undefined1 __fastcall FUN_00bca710(int param_1)

{
  undefined1 uVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff350;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return 1;
  }
  uVar1 = FUN_00bf6fd0(*(int *)(param_1 + 8));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00bca7a0 @ 00bca7a0 ////

void __thiscall FUN_00bca7a0(void *this,int param_1)

{
  float fVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff362;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  fVar1 = (float)param_1;
  local_4 = 0;
  if (param_1 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_00bf7010(*(void **)((int)this + 8),fVar1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bca820 @ 00bca820 ////

void __fastcall FUN_00bca820(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff374;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bf7060(*(int *)(param_1 + 8));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bca890 @ 00bca890 ////

void __fastcall FUN_00bca890(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff386;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bf70a0(*(int *)(param_1 + 8));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bca8f0 @ 00bca8f0 ////

void __thiscall FUN_00bca8f0(void *this,int param_1,float param_2,int param_3)

{
  float fVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  fVar1 = (float)param_3;
  local_4 = 0;
  if (param_3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_00bf6f80(*(void **)((int)this + 8),param_1,param_2,fVar1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bca970 @ 00bca970 ////

undefined4 __thiscall FUN_00bca970(void *this,float *param_1)

{
  undefined4 uVar1;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff3aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = FUN_00bf7350(*(void **)((int)this + 8),&local_20,&local_18,&local_1c);
  if ((char)uVar1 == '\0') {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return 0;
  }
  if ((-1 < local_20) && (-1 < local_1c)) {
    local_4 = 0xffffffff;
    *param_1 = (float)local_20 / (float)local_1c;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return 2;
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return 1;
}


//// FUNCTION FUN_00bcaa50 @ 00bcaa50 ////

void FUN_00bcaa50(void)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  PKCProtectionInstance_Leave(local_8);
  return;
}


//// FUNCTION FUN_00bcaac0 @ 00bcaac0 ////

void __thiscall FUN_00bcaac0(void *this,undefined4 *param_1)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  **(undefined4 **)((int)this + 8) = *param_1;
  *(undefined4 *)(*(int *)((int)this + 8) + 4) = param_1[1];
  *(undefined4 *)(*(int *)((int)this + 8) + 8) = param_1[2];
  *(undefined4 *)(*(int *)((int)this + 8) + 0xc) = param_1[3];
  PKCProtectionInstance_Leave(local_8);
  return;
}


//// FUNCTION FUN_00bcab10 @ 00bcab10 ////

undefined4 FUN_00bcab10(void)

{
  undefined4 uVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  uVar1 = PKCProtectionInstance_Leave(local_8);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00bcab40 @ 00bcab40 ////

undefined4 FUN_00bcab40(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  *param_1 = DAT_010d5dc0;
  uVar1 = PKCProtectionInstance_Leave(local_8);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00bcab70 @ 00bcab70 ////

undefined4 FUN_00bcab70(void)

{
  undefined4 uVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  uVar1 = PKCProtectionInstance_Leave(local_8);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00bcaba0 @ 00bcaba0 ////

undefined4 FUN_00bcaba0(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  DAT_010d5dc0 = *param_1;
  uVar1 = PKCProtectionInstance_Leave(local_8);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00bcabd0 @ 00bcabd0 ////

void __thiscall FUN_00bcabd0(void *this,int param_1)

{
  undefined4 uVar1;
  undefined **local_1c [2];
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff3c4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = std__String__Constructor(local_1c,param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = FUN_00bba600(*(void **)((int)this + 4),uVar1);
  *(undefined4 *)((int)this + 0x68) = uVar1;
  local_1c[0] = &PTR_LAB_00d9d9b4;
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bcac50 @ 00bcac50 ////

undefined4 __thiscall
FUN_00bcac50(void *this,undefined4 param_1,float param_2,undefined4 param_3,float *param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float local_98 [37];
  
  iVar1 = *(int *)((int)this + 4);
  pfVar3 = local_98;
  for (iVar2 = 0x23; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *param_4;
    param_4 = param_4 + 1;
    pfVar3 = pfVar3 + 1;
  }
  local_98[3] = local_98[3] + param_2;
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x58))(param_3,local_98);
  *(int *)((int)this + 0x24) = iVar1;
  *(undefined4 *)((int)this + 0x2c) = param_5;
  if (-1 < iVar1) {
    (**(code **)**(undefined4 **)(*(int *)((int)this + 4) + 0x44))(param_5,param_1,param_2);
    FUN_00bca1a0((void *)((int)this + 0x30),0.0,0.0,param_2);
    *(float *)((int)this + 0x28) = param_2;
  }
  return *(undefined4 *)((int)this + 0x24);
}


//// FUNCTION FUN_00bcacd0 @ 00bcacd0 ////

undefined4 __thiscall
FUN_00bcacd0(void *this,undefined4 param_1,float param_2,undefined4 param_3,float *param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float local_98 [37];
  
  iVar1 = *(int *)((int)this + 4);
  pfVar3 = local_98;
  for (iVar2 = 0x23; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *param_4;
    param_4 = param_4 + 1;
    pfVar3 = pfVar3 + 1;
  }
  local_98[3] = local_98[3] + param_2;
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x54))(param_3,0,local_98);
  *(int *)((int)this + 0x24) = iVar1;
  *(undefined4 *)((int)this + 0x2c) = param_5;
  if (-1 < iVar1) {
    (**(code **)**(undefined4 **)(*(int *)((int)this + 4) + 0x44))(param_5,param_1,param_2);
    FUN_00bca1a0((void *)((int)this + 0x30),0.0,0.0,param_2);
    *(float *)((int)this + 0x28) = param_2;
  }
  return *(undefined4 *)((int)this + 0x24);
}


//// FUNCTION FUN_00bcad50 @ 00bcad50 ////

void __fastcall FUN_00bcad50(int param_1)

{
  float fVar1;
  int iVar2;
  DWORD DVar3;
  float fStack_18;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff3d6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (-1 < *(int *)(param_1 + 0x24)) {
    iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x48) + 0xb4))(*(int *)(param_1 + 0x24))
    ;
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
      (**(code **)**(undefined4 **)(*(int *)(param_1 + 4) + 0x44))
                (*(undefined4 *)(param_1 + 0x2c),0x3f800000,*(undefined4 *)(param_1 + 0x28));
      FUN_00bca1a0((void *)(param_1 + 0x30),1.0,0.0,*(float *)(param_1 + 0x28));
    }
  }
  DVar3 = GetTickCount();
  iVar2 = DVar3 - *(int *)(param_1 + 100);
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_00bca3e0((float *)(param_1 + 0x30),fVar1);
  *(DWORD *)(param_1 + 100) = DVar3;
  fStack_18 = *(float *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x60) != '\0') {
    if (fStack_18 < 3.1415927) {
      if (fStack_18 < -3.1415927) {
        fStack_18 = fStack_18 + 6.2831855;
      }
    }
    else {
      fStack_18 = fStack_18 - 6.2831855;
    }
  }
  if (0.0 <= fStack_18) {
    if (1.0 < fStack_18) {
      fStack_18 = 1.0;
    }
  }
  else {
    fStack_18 = 0.0;
  }
  FUN_00bf7650(*(void **)(param_1 + 8),fStack_18,*(undefined4 *)(param_1 + 0x68));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bcaea0 @ 00bcaea0 ////

undefined4 __thiscall FUN_00bcaea0(void *this,char *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff3f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  puVar1 = operator_new(0x24);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = Ctor_vt00da241c_00bf8530(puVar1);
  }
  puVar1[6] = *(undefined4 *)((int)this + 0x20);
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bbfaa0(puVar1 + 7,param_1);
  FUN_00bcfac0((void *)((int)this + 0x18),(int *)((int)this + 0x14),(int)puVar1);
  *param_2 = puVar1[6];
  local_4 = 0xffffffff;
  uVar2 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00bcaf50 @ 00bcaf50 ////

undefined4 __thiscall
FUN_00bcaf50(void *this,char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff410;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  puVar1 = operator_new(0x34);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = Ctor_vt00da2424_00bf86e0(puVar1);
  }
  puVar1[6] = *(undefined4 *)((int)this + 0x20);
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bbfaa0(puVar1 + 7,param_2);
  FUN_00bbfaa0(puVar1 + 9,param_1);
  FUN_00bbfaa0(puVar1 + 0xb,param_3);
  FUN_00bcfac0((void *)((int)this + 0x18),(int *)((int)this + 0x14),(int)puVar1);
  *param_4 = puVar1[6];
  local_4 = 0xffffffff;
  uVar2 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION Dtor_00bcb020 @ 00bcb020 ////

void __fastcall Dtor_00bcb020(undefined4 *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cff42d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d9edb8;
  _Memory = (void *)param_1[2];
  local_4 = 1;
  if (_Memory == (void *)0x0) {
    param_1[2] = 0;
    puVar1 = (undefined4 *)RedBlackTree_GetMinObject(param_1 + 6);
    if (puVar1 != (undefined4 *)0x0) {
      do {
        FUN_00bcff70(param_1 + 6,param_1 + 5,(int)puVar1);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        puVar1 = (undefined4 *)RedBlackTree_GetMinObject(param_1 + 6);
      } while (puVar1 != (undefined4 *)0x0);
    }
    local_4 = local_4 & 0xffffff00;
    param_1[5] = &PTR_LAB_00d9ed64;
    RedBlackTree_Dtor(param_1 + 6);
    *param_1 = &PTR_LAB_00d9ecf8;
    ExceptionList = pvStack_c;
    return;
  }
  Dtor_00bf7260(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00bcb0d0 @ 00bcb0d0 ////

uint __fastcall FUN_00bcb0d0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff43f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(&local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  puVar1 = (undefined4 *)
           RedBlackTree_Find((void *)(param_1 + 0x18),(int *)(param_1 + 0x14),&stack0x00000004,
                        &stack0x00000004);
  if (puVar1 == (undefined4 *)0x0) {
    local_4 = 0xffffffff;
    uVar2 = PKCProtectionInstance_Leave(&local_14);
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  FUN_00bcff70((void *)(param_1 + 0x18),(int *)(param_1 + 0x14),(int)puVar1);
  (**(code **)*puVar1)(1);
  puStack_8 = (undefined1 *)0xffffffff;
  uVar3 = PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00bcb180 @ 00bcb180 ////

void __thiscall FUN_00bcb180(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff451;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)RedBlackTree_Find((void *)((int)this + 0x18),(void *)((int)this + 0x14),&param_1,
                               &param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(this,param_2);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Ctor_vt00d9edb8_00bcb3b0 @ 00bcb3b0 ////

undefined4 * __thiscall Ctor_vt00d9edb8_00bcb3b0(void *this,undefined4 param_1,undefined4 *param_2)

{
  DWORD DVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff4b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d9edb8;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = *param_2;
  *(undefined4 *)((int)this + 0x10) = param_2[1];
  local_4 = 0;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_00d9ed64;
  RedBlackTree_Ctor((int *)((int)this + 0x18));
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_00d9ed8c;
  *(undefined4 *)((int)this + 0x20) = 200;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)((int)this + 0x60) = 0;
  FUN_00bca140((void *)((int)this + 0x30),1.0);
  *(undefined4 *)((int)this + 0x68) = 0;
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 100) = DVar1;
  local_18 = param_2[6];
  local_1c = param_2[5];
  local_14 = param_2[7];
  local_10 = param_2[8];
  fVar4 = FUN_00bca020(*(int *)(*(int *)((int)this + 4) + 0x44),1.0,*(uint *)((int)this + 0xc));
  fVar8 = (float)fVar4;
  this_00 = operator_new(0x470);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (this_00 == (void *)0x0) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    uVar7 = param_2[4];
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    puVar3 = &local_1c;
    iVar2 = FUN_00bcb9a0((int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x48) + 0x5ec) + 0xc));
    puVar3 = FUN_00bf7170(this_00,*(undefined4 *)(*(int *)((int)this + 4) + 0x70),iVar2,puVar3,uVar5
                          ,uVar6,uVar7,fVar8);
    *(undefined4 **)((int)this + 8) = puVar3;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bcb500 @ 00bcb500 ////

void __fastcall FUN_00bcb500(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cff2f6;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  PKStringsCHeapString_Dtor((undefined4 *)(param_1 + 0x30));
  local_4 = local_4 & 0xffffff00;
  PKStringsCHeapString_Dtor((undefined4 *)(param_1 + 0x28));
  local_4 = 0xffffffff;
  PKStringsCHeapString_Dtor((undefined4 *)(param_1 + 0x20));
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bcb570 @ 00bcb570 ////

void * __thiscall ScalarDeletingDtor_00bcb570(void *this,byte param_1)

{
  Dtor_00bf7260(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bcb590 @ 00bcb590 ////

int * __fastcall FUN_00bcb590(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bcb600 @ 00bcb600 ////

void __fastcall FUN_00bcb600(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)();
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bcb620 @ 00bcb620 ////

void __fastcall FUN_00bcb620(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff4cb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  PKStringsCHeapString_Dtor((undefined4 *)(param_1 + 0x78));
  local_4 = 0xffffffff;
  FUN_00bcb500(param_1 + 4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Dtor_00bcb730 @ 00bcb730 ////

void __fastcall Dtor_00bcb730(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9ed64;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bcb7c0 @ 00bcb7c0 ////

void __fastcall FUN_00bcb7c0(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)();
    *param_1 = 0;
  }
  return;
}


//// FUNCTION Ctor_vt00d9ed64_00bcb860 @ 00bcb860 ////

undefined4 * __fastcall Ctor_vt00d9ed64_00bcb860(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9ed64;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bcb880 @ 00bcb880 ////

undefined4 * __thiscall ScalarDeletingDtor_00bcb880(void *this,byte param_1)

{
  Dtor_00bcb730(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bcb8a0 @ 00bcb8a0 ////

int __fastcall FUN_00bcb8a0(int *param_1)

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
  
  puStack_8 = &LAB_00cff4eb;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteMe.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2e);
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


//// FUNCTION Dtor_00bcb970 @ 00bcb970 ////

void __fastcall Dtor_00bcb970(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9ed64;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bcb9a0 @ 00bcb9a0 ////

int __fastcall FUN_00bcb9a0(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff50b;
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


//// FUNCTION FUN_00bcba70 @ 00bcba70 ////

int __fastcall FUN_00bcba70(int *param_1)

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
  
  puStack_8 = &LAB_00cff52b;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteMe.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2e);
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


//// FUNCTION Ctor_vt00d9ed8c_00bcbb40 @ 00bcbb40 ////

undefined4 * __fastcall Ctor_vt00d9ed8c_00bcbb40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9ed64;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9ed8c;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bcbb60 @ 00bcbb60 ////

undefined4 * __thiscall ScalarDeletingDtor_00bcbb60(void *this,byte param_1)

{
  Dtor_00bcb970(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bcbb80 @ 00bcbb80 ////

undefined4 * __thiscall ScalarDeletingDtor_00bcbb80(void *this,byte param_1)

{
  Dtor_00bcb020(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bcbbc0 @ 00bcbbc0 ////

void __fastcall FUN_00bcbbc0(int param_1)

{
  PKStringsCHeapString_Dtor((undefined4 *)(param_1 + 4));
  return;
}


//// FUNCTION GetField_8_00bcbbd0 @ 00bcbbd0 ////

undefined4 __fastcall GetField_8_00bcbbd0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_00bcbbe0 @ 00bcbbe0 ////

void __fastcall FUN_00bcbbe0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00bcbc00 @ 00bcbc00 ////

undefined4 * __fastcall FUN_00bcbc00(undefined4 *param_1)

{
  FUN_00bccec0(param_1);
  FUN_00bccec0(param_1 + 3);
  FUN_00bcc630(param_1 + 6);
  return param_1;
}


//// FUNCTION FUN_00bcbc20 @ 00bcbc20 ////

void __fastcall FUN_00bcbc20(void *param_1)

{
  undefined4 *puVar1;
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff588;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Ctor_vt00d9ee30_00bccf30(local_1c);
  local_4 = 0;
  thunk_FUN_00bcdcc0(local_1c,param_1);
  puVar1 = (undefined4 *)FUN_00bccfb0((int)local_1c);
  while (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    puVar1 = (undefined4 *)FUN_00bccfb0((int)local_1c);
  }
  thunk_FUN_00bcdcc0(local_1c,(void *)((int)param_1 + 0xc));
  puVar1 = (undefined4 *)FUN_00bccfb0((int)local_1c);
  while (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    puVar1 = (undefined4 *)FUN_00bccfb0((int)local_1c);
  }
  local_4 = 0xffffffff;
  Dtor_00bccf50(local_1c);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bcbcd0 @ 00bcbcd0 ////

void __fastcall FUN_00bcbcd0(int param_1)

{
  void *_Memory;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff59a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9ee00_00bcc660(local_1c);
  local_4 = 0;
  thunk_FUN_00bcdd00(local_1c,(void *)(param_1 + 0x18));
  _Memory = (void *)FUN_00bcc6e0((int)local_1c);
  if (_Memory != (void *)0x0) {
    PKStringsCHeapString_Dtor((undefined4 *)((int)_Memory + 4));
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4 = 0xffffffff;
  Dtor_00bcc680(local_1c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bcbd60 @ 00bcbd60 ////

void __fastcall FUN_00bcbd60(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cff5c2;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  FUN_00bcbc20(param_1);
  FUN_00bcbcd0((int)param_1);
  local_4._0_1_ = 1;
  LH_Array_FreeBuffer_00bcc640(param_1 + 6);
  local_4 = (uint)local_4._1_3_ << 8;
  LH_Array_FreeBuffer_00bcced0(param_1 + 3);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00bcced0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bcbdd0 @ 00bcbdd0 ////

void __thiscall FUN_00bcbdd0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff5d4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Ctor_vt00d9ee30_00bccf30(local_1c);
  uVar6 = 0;
  local_4 = 0;
  thunk_FUN_00bcdcc0(local_1c,this);
  iVar3 = FUN_00bcc650((int)local_1c);
  uVar1 = param_1;
  if (iVar3 != 0) {
    do {
      piVar4 = (int *)thunk_FUN_00bcc970(local_1c,uVar6);
      if (piVar4 == (int *)0x0) {
        LH_Assert(&param_1,"eventTrigger != NULL\n");
        DebugBreak();
      }
      cVar2 = (**(code **)(*piVar4 + 8))(uVar1);
      if (cVar2 != '\0') {
        FUN_00bcd000(local_1c,uVar6);
        (**(code **)*piVar4)(1);
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_00bcc650((int)local_1c);
    } while (uVar6 < uVar5);
  }
  thunk_FUN_00bce1a0(this,local_1c);
  thunk_FUN_00bcdcc0(local_1c,(void *)((int)this + 0xc));
  uVar6 = 0;
  iVar3 = FUN_00bcc650((int)local_1c);
  if (iVar3 != 0) {
    do {
      piVar4 = (int *)thunk_FUN_00bcc970(local_1c,uVar6);
      if (piVar4 == (int *)0x0) {
        LH_Assert(&param_1,"eventTrigger != NULL\n");
        DebugBreak();
      }
      cVar2 = (**(code **)(*piVar4 + 8))(uVar1);
      if (cVar2 != '\0') {
        FUN_00bcd000(local_1c,uVar6);
        (**(code **)*piVar4)(1);
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_00bcc650((int)local_1c);
    } while (uVar6 < uVar5);
  }
  thunk_FUN_00bce1a0((void *)((int)this + 0xc),local_1c);
  local_4 = 0xffffffff;
  Dtor_00bccf50(local_1c);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bcbf30 @ 00bcbf30 ////

void __thiscall FUN_00bcbf30(void *this,undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint *_Memory;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_1d;
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff5e6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Ctor_vt00d9ee00_00bcc660(local_1c);
  uVar5 = 0;
  local_4 = 0;
  thunk_FUN_00bcdd00(local_1c,(void *)((int)this + 0x18));
  iVar2 = FUN_00bcc760((int)local_1c);
  if (iVar2 != 0) {
    do {
      _Memory = (uint *)thunk_FUN_00bcc150(local_1c,uVar5);
      if (_Memory == (uint *)0x0) {
        LH_Assert(&local_1d,"debugInfo != NULL\n");
        DebugBreak();
      }
      piVar3 = (int *)LH_SortedArray_FindObject_00bccee0(this,_Memory);
      if (((piVar3 != (int *)0x0) && (cVar1 = (**(code **)(*piVar3 + 8))(param_1), cVar1 != '\0'))
         && (FUN_00bcc730(local_1c,uVar5), _Memory != (uint *)0x0)) {
        PKStringsCHeapString_Dtor(_Memory + 1);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      uVar5 = uVar5 + 1;
      uVar4 = FUN_00bcc760((int)local_1c);
    } while (uVar5 < uVar4);
  }
  thunk_FUN_00bce1e0((void *)((int)this + 0x18),local_1c);
  local_4 = 0xffffffff;
  Dtor_00bcc680(local_1c);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION LH_Array_GetAt_00bcc020 @ 00bcc020 ////

undefined4 __thiscall LH_Array_GetAt_00bcc020(void *this,uint param_1)

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


//// FUNCTION LH_Array_SetAt_00bcc060 @ 00bcc060 ////

void __thiscall LH_Array_SetAt_00bcc060(void *this,uint param_1,undefined4 param_2)

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


//// FUNCTION GetField_8_00bcc0a0 @ 00bcc0a0 ////

undefined4 __fastcall GetField_8_00bcc0a0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION LH_Array_SetFilledSize_00bcc0b0 @ 00bcc0b0 ////

void __thiscall LH_Array_SetFilledSize_00bcc0b0(void *this,uint param_1)

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


//// FUNCTION FUN_00bcc0e0 @ 00bcc0e0 ////

void __fastcall FUN_00bcc0e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00bcc0f0 @ 00bcc0f0 ////

void __fastcall LH_Array_FreeBuffer_00bcc0f0(undefined4 *param_1)

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


//// FUNCTION FUN_00bcc150 @ 00bcc150 ////

void __thiscall FUN_00bcc150(void *this,uint param_1)

{
  LH_Array_GetAt_00bcc020((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bcc160 @ 00bcc160 ////

void __fastcall FUN_00bcc160(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = GetField_8_00bcc0a0((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Array_GetAt_00bcc020(this,uVar4);
      if (iVar1 != 0) {
        LH_Array_SetAt_00bcc060(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bcc0a0((int)this);
    } while (uVar4 < uVar2);
  }
  LH_Array_SetFilledSize_00bcc0b0(this,uVar3);
  return;
}


//// FUNCTION LH_Array_Reserve_00bcc1b0 @ 00bcc1b0 ////

void __thiscall LH_Array_Reserve_00bcc1b0(void *this,uint param_1)

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


//// FUNCTION FUN_00bcc270 @ 00bcc270 ////

void __fastcall FUN_00bcc270(undefined4 *param_1,undefined4 *param_2)

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


//// FUNCTION LH_Array_Reserve_00bcc2a0 @ 00bcc2a0 ////

void __thiscall LH_Array_Reserve_00bcc2a0(void *this,uint param_1)

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


//// FUNCTION FUN_00bcc360 @ 00bcc360 ////

void __fastcall FUN_00bcc360(undefined4 *param_1,undefined4 *param_2)

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


//// FUNCTION FUN_00bcc390 @ 00bcc390 ////

void __thiscall FUN_00bcc390(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00bcc1b0(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00bcc3d0 @ 00bcc3d0 ////

void __thiscall FUN_00bcc3d0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00bcc2a0(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00bcc4d0 @ 00bcc4d0 ////

void __fastcall FUN_00bcc4d0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00bcc570 @ 00bcc570 ////

void __fastcall FUN_00bcc570(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION ScalarDeletingDtor_00bcc610 @ 00bcc610 ////

void * __thiscall ScalarDeletingDtor_00bcc610(void *this,byte param_1)

{
  FUN_00bcbbc0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bcc630 @ 00bcc630 ////

undefined4 * __fastcall FUN_00bcc630(undefined4 *param_1)

{
  FUN_00bcc0e0(param_1);
  return param_1;
}


//// FUNCTION LH_Array_FreeBuffer_00bcc640 @ 00bcc640 ////

void __fastcall LH_Array_FreeBuffer_00bcc640(undefined4 *param_1)

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


//// FUNCTION FUN_00bcc650 @ 00bcc650 ////

void __fastcall FUN_00bcc650(int param_1)

{
  GetField_8_00bcbbd0(param_1 + 4);
  return;
}


//// FUNCTION Ctor_vt00d9ee00_00bcc660 @ 00bcc660 ////

undefined4 * __fastcall Ctor_vt00d9ee00_00bcc660(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9ee00;
  FUN_00bcc0e0(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00bcc680 @ 00bcc680 ////

void __fastcall Dtor_00bcc680(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff54b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9ee00;
  local_4 = 0;
  FUN_00bcc160((int)param_1);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00bcc0f0(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bcc6e0 @ 00bcc6e0 ////

int __fastcall FUN_00bcc6e0(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = GetField_8_00bcc0a0((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = GetField_8_00bcc0a0((int)this);
    iVar2 = LH_Array_GetAt_00bcc020(this,iVar1 - 1U);
    LH_Array_SetFilledSize_00bcc0b0(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = GetField_8_00bcc0a0((int)this);
  }
  return iVar2;
}


//// FUNCTION FUN_00bcc730 @ 00bcc730 ////

undefined4 __thiscall FUN_00bcc730(void *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = LH_Array_GetAt_00bcc020((void *)((int)this + 4),param_1);
  LH_Array_SetAt_00bcc060((void *)((int)this + 4),param_1,0);
  return uVar1;
}


//// FUNCTION FUN_00bcc760 @ 00bcc760 ////

void __fastcall FUN_00bcc760(int param_1)

{
  GetField_8_00bcc0a0(param_1 + 4);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bcc770 @ 00bcc770 ////

undefined4 * __thiscall ScalarDeletingDtor_00bcc770(void *this,byte param_1)

{
  Dtor_00bcc680(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_Array_GetAt_00bcc790 @ 00bcc790 ////

undefined4 __thiscall LH_Array_GetAt_00bcc790(void *this,uint param_1)

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


//// FUNCTION LH_Array_SetAt_00bcc7d0 @ 00bcc7d0 ////

void __thiscall LH_Array_SetAt_00bcc7d0(void *this,uint param_1,undefined4 param_2)

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


//// FUNCTION LH_Array_SetFilledSize_00bcc810 @ 00bcc810 ////

void __thiscall LH_Array_SetFilledSize_00bcc810(void *this,uint param_1)

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


//// FUNCTION LH_Array_FreeBuffer_00bcc840 @ 00bcc840 ////

void __fastcall LH_Array_FreeBuffer_00bcc840(undefined4 *param_1)

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


//// FUNCTION FUN_00bcc8a0 @ 00bcc8a0 ////

int __thiscall FUN_00bcc8a0(void *this,uint *param_1,undefined1 *param_2)

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


//// FUNCTION FUN_00bcc970 @ 00bcc970 ////

void __thiscall FUN_00bcc970(void *this,uint param_1)

{
  LH_Array_GetAt_00bcc790((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bcc980 @ 00bcc980 ////

void __fastcall FUN_00bcc980(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = GetField_8_00bcbbd0((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Array_GetAt_00bcc790(this,uVar4);
      if (iVar1 != 0) {
        LH_Array_SetAt_00bcc7d0(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bcbbd0((int)this);
    } while (uVar4 < uVar2);
  }
  LH_Array_SetFilledSize_00bcc810(this,uVar3);
  return;
}


//// FUNCTION LH_Array_IsSortedUnique_00bcc9d0 @ 00bcc9d0 ////

uint __fastcall LH_Array_IsSortedUnique_00bcc9d0(int *param_1)

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


//// FUNCTION FUN_00bcca30 @ 00bcca30 ////

uint __fastcall FUN_00bcca30(int *param_1)

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


//// FUNCTION FUN_00bcca90 @ 00bcca90 ////

void __thiscall FUN_00bcca90(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00bcc390(this,param_1[2]);
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


//// FUNCTION FUN_00bccae0 @ 00bccae0 ////

void __thiscall FUN_00bccae0(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00bcc3d0(this,param_1[2]);
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


//// FUNCTION LH_Array_MedianOfThree_00bccc00 @ 00bccc00 ////

void __fastcall LH_Array_MedianOfThree_00bccc00(int *param_1,int *param_2,int *param_3)

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


//// FUNCTION FUN_00bcccd0 @ 00bcccd0 ////

void __fastcall FUN_00bcccd0(int *param_1,int *param_2,int *param_3)

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


//// FUNCTION LH_Array_PushHeap_00bccda0 @ 00bccda0 ////

void __fastcall LH_Array_PushHeap_00bccda0(int param_1,int param_2,int param_3,int param_4)

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


//// FUNCTION FUN_00bcce30 @ 00bcce30 ////

void __fastcall FUN_00bcce30(int param_1,int param_2,int param_3,uint *param_4)

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


//// FUNCTION FUN_00bccec0 @ 00bccec0 ////

undefined4 * __fastcall FUN_00bccec0(undefined4 *param_1)

{
  FUN_00bcbbe0(param_1);
  return param_1;
}


//// FUNCTION LH_Array_FreeBuffer_00bcced0 @ 00bcced0 ////

void __fastcall LH_Array_FreeBuffer_00bcced0(undefined4 *param_1)

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


//// FUNCTION LH_SortedArray_FindObject_00bccee0 @ 00bccee0 ////

int __thiscall LH_SortedArray_FindObject_00bccee0(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00bcc8a0(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  iVar2 = LH_Array_GetAt_00bcc790(this,uVar1);
  if (iVar2 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar2;
}


//// FUNCTION Ctor_vt00d9ee30_00bccf30 @ 00bccf30 ////

undefined4 * __fastcall Ctor_vt00d9ee30_00bccf30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9ee30;
  FUN_00bcbbe0(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00bccf50 @ 00bccf50 ////

void __fastcall Dtor_00bccf50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff56b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9ee30;
  local_4 = 0;
  FUN_00bcc980((int)param_1);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00bcc840(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bccfb0 @ 00bccfb0 ////

int __fastcall FUN_00bccfb0(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = GetField_8_00bcbbd0((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = GetField_8_00bcbbd0((int)this);
    iVar2 = LH_Array_GetAt_00bcc790(this,iVar1 - 1U);
    LH_Array_SetFilledSize_00bcc810(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = GetField_8_00bcbbd0((int)this);
  }
  return iVar2;
}


//// FUNCTION FUN_00bcd000 @ 00bcd000 ////

undefined4 __thiscall FUN_00bcd000(void *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = LH_Array_GetAt_00bcc790((void *)((int)this + 4),param_1);
  LH_Array_SetAt_00bcc7d0((void *)((int)this + 4),param_1,0);
  return uVar1;
}


//// FUNCTION ScalarDeletingDtor_00bcd030 @ 00bcd030 ////

undefined4 * __thiscall ScalarDeletingDtor_00bcd030(void *this,byte param_1)

{
  Dtor_00bccf50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bcd050 @ 00bcd050 ////

void __thiscall FUN_00bcd050(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00bcc270(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      LH_Array_Reserve_00bcc1b0(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00bcca90(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00bcd0a0 @ 00bcd0a0 ////

void __thiscall FUN_00bcd0a0(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00bcc360(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      LH_Array_Reserve_00bcc2a0(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00bccae0(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00bcd0f0 @ 00bcd0f0 ////

void __fastcall FUN_00bcd0f0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    LH_Array_MedianOfThree_00bccc00(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    LH_Array_MedianOfThree_00bccc00(param_2 + -iVar1,param_2,param_2 + iVar1);
    LH_Array_MedianOfThree_00bccc00(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    LH_Array_MedianOfThree_00bccc00(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  LH_Array_MedianOfThree_00bccc00(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00bcd1b0 @ 00bcd1b0 ////

void __fastcall FUN_00bcd1b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00bcccd0(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_00bcccd0(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_00bcccd0(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_00bcccd0(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_00bcccd0(param_1,param_2,param_3);
  return;
}


//// FUNCTION LH_Array_AdjustHeap_00bcd270 @ 00bcd270 ////

void __fastcall LH_Array_AdjustHeap_00bcd270(int param_1,int param_2,int param_3,int param_4)

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
  LH_Array_PushHeap_00bccda0(param_1,param_2,local_4,param_4);
  return;
}


//// FUNCTION FUN_00bcd310 @ 00bcd310 ////

void __fastcall FUN_00bcd310(int param_1,int param_2,int param_3,uint *param_4)

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
  FUN_00bcce30(param_1,param_2,local_4,param_4);
  return;
}


//// FUNCTION FUN_00bcd420 @ 00bcd420 ////

void __thiscall FUN_00bcd420(void *this,undefined4 *param_1)

{
  FUN_00bcc980((int)this);
  FUN_00bcd050((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bcd450 @ 00bcd450 ////

void __thiscall FUN_00bcd450(void *this,undefined4 *param_1)

{
  FUN_00bcc160((int)this);
  FUN_00bcd0a0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bcd470 @ 00bcd470 ////

void __fastcall FUN_00bcd470(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

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
  FUN_00bcd0f0(param_2,piVar6,param_3 + -1);
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
joined_r0x00bcd584:
  do {
    local_10 = piVar1;
    if (param_3 <= piVar4) {
LAB_00bcd5fa:
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
      goto joined_r0x00bcd584;
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
      if (*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) goto LAB_00bcd5fa;
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


//// FUNCTION FUN_00bcd730 @ 00bcd730 ////

void __fastcall FUN_00bcd730(int *param_1,int *param_2)

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
          FUN_00bcc4d0(param_1,(int)piVar3,local_10);
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
          FUN_00bcc4d0(local_c,(int)piVar3,local_10);
          param_1 = local_8;
        }
      }
      piVar3 = piVar3 + 1;
      local_10 = local_10 + 1;
    } while (piVar3 != local_4);
  }
  return;
}


//// FUNCTION FUN_00bcd830 @ 00bcd830 ////

void __fastcall FUN_00bcd830(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

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
  FUN_00bcd1b0(param_2,piVar7,param_3 + -1);
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
joined_r0x00bcd939:
  do {
    local_10 = piVar1;
    if (param_3 <= piVar5) {
LAB_00bcd9b2:
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
      goto joined_r0x00bcd939;
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
      if (*puVar2 < *puVar3) goto LAB_00bcd9b2;
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


//// FUNCTION FUN_00bcdae0 @ 00bcdae0 ////

void __fastcall FUN_00bcdae0(int *param_1,int *param_2)

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
          FUN_00bcc570(param_1,(int)piVar3,local_10);
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
          FUN_00bcc570(local_c,(int)piVar3,local_10);
          param_1 = local_8;
        }
      }
      piVar3 = piVar3 + 1;
      local_10 = local_10 + 1;
    } while (piVar3 != local_4);
  }
  return;
}


//// FUNCTION FUN_00bcdbe0 @ 00bcdbe0 ////

void __fastcall FUN_00bcdbe0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    LH_Array_AdjustHeap_00bcd270(param_1,iVar3,iVar2,*(int *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00bcdc20 @ 00bcdc20 ////

void __fastcall FUN_00bcdc20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    FUN_00bcd310(param_1,iVar3,iVar2,*(uint **)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00bcdcc0 @ 00bcdcc0 ////

void __thiscall LH_Array_AdoptRequireEmpty_00bcdcc0(void *this,void *param_1)

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


//// FUNCTION LH_Array_AdoptRequireEmpty_00bcdd00 @ 00bcdd00 ////

void __thiscall LH_Array_AdoptRequireEmpty_00bcdd00(void *this,void *param_1)

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


//// FUNCTION FUN_00bcde20 @ 00bcde20 ////

void __fastcall FUN_00bcde20(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    iVar1 = *(int *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    LH_Array_AdjustHeap_00bcd270((int)param_1,0,iVar2 + -4 >> 2,iVar1);
  }
  return;
}


//// FUNCTION FUN_00bcde70 @ 00bcde70 ////

void __fastcall FUN_00bcde70(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    puVar1 = *(uint **)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00bcd310((int)param_1,0,iVar2 + -4 >> 2,puVar1);
  }
  return;
}


//// FUNCTION FUN_00bcdec0 @ 00bcdec0 ////

void __fastcall FUN_00bcdec0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00bcdf53:
      if (1 < iVar2) {
        FUN_00bcd730(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00bcdbe0((int)param_1,(int)param_2);
        }
        FUN_00bcde20(param_1,(int)param_2);
        return;
      }
      goto LAB_00bcdf53;
    }
    FUN_00bcd470(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00bcdec0(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00bcdec0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00bcdfb0 @ 00bcdfb0 ////

void __fastcall FUN_00bcdfb0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00bce043:
      if (1 < iVar2) {
        FUN_00bcdae0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00bcdc20((int)param_1,(int)param_2);
        }
        FUN_00bcde70(param_1,(int)param_2);
        return;
      }
      goto LAB_00bce043;
    }
    FUN_00bcd830(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00bcdfb0(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00bcdfb0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00bce0e0 @ 00bce0e0 ////

void __fastcall FUN_00bce0e0(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00bcdec0(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION FUN_00bce110 @ 00bce110 ////

void __fastcall FUN_00bce110(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00bcdfb0(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION LH_Array_SortAndVerifyUnique_00bce140 @ 00bce140 ////

void __fastcall LH_Array_SortAndVerifyUnique_00bce140(int *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00bce0e0(param_1);
  uVar1 = LH_Array_IsSortedUnique_00bcc9d0(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"unique\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION LH_Array_SortAndVerifyUnique_00bce170 @ 00bce170 ////

void __fastcall LH_Array_SortAndVerifyUnique_00bce170(int *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00bce110(param_1);
  uVar1 = FUN_00bcca30(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"unique\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION LH_Array_CopySorted_00bce1a0 @ 00bce1a0 ////

void __thiscall LH_Array_CopySorted_00bce1a0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bcbbd0((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bcd420(param_1,this);
  LH_Array_SortAndVerifyUnique_00bce140(this);
  return;
}


//// FUNCTION LH_Array_CopySorted_00bce1e0 @ 00bce1e0 ////

void __thiscall LH_Array_CopySorted_00bce1e0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bcc0a0((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bcd450(param_1,this);
  LH_Array_SortAndVerifyUnique_00bce170(this);
  return;
}


//// FUNCTION SetVtable_00d9ee80_00bce240 @ 00bce240 ////

void __fastcall SetVtable_00d9ee80_00bce240(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9ee80;
  return;
}


//// FUNCTION FUN_00bce2c0 @ 00bce2c0 ////

int __fastcall FUN_00bce2c0(int param_1)

{
  Ctor_vt00d9f52c_00bd9f70((undefined4 *)(param_1 + 0xc));
  return param_1;
}


//// FUNCTION FUN_00bce2d0 @ 00bce2d0 ////

void __fastcall FUN_00bce2d0(int param_1)

{
  Dtor_00bd9e50((undefined4 *)(param_1 + 0xc));
  return;
}


//// FUNCTION FUN_00bce2e0 @ 00bce2e0 ////

void __fastcall
FUN_00bce2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_28 = param_3;
  local_8 = param_5;
  local_20 = *param_4;
  local_4 = param_6;
  local_1c = param_4[1];
  local_18 = param_4[2];
  local_30 = 0;
  local_14 = 0x3e99999a;
  local_10 = 0xffffffff;
  local_24 = 1;
  local_2c = param_2;
  local_c = param_1;
  FUN_00bf8d50(&local_30);
  return;
}


//// FUNCTION FUN_00bce350 @ 00bce350 ////

void __fastcall
FUN_00bce350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = 0;
  local_24 = 0;
  local_20 = 0xffffffff;
  local_1c = 0xffffffff;
  local_18 = 0xffffffff;
  local_28 = param_3;
  local_8 = param_5;
  local_14 = *param_4;
  local_4 = param_6;
  local_10 = 1;
  local_2c = param_2;
  local_c = param_1;
  FUN_00bf8d50(&local_30);
  return;
}


//// FUNCTION FUN_00bce3b0 @ 00bce3b0 ////

undefined1 __fastcall
FUN_00bce3b0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  undefined **local_38 [4];
  undefined4 local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff640;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9ee8c_00bce4f0(local_38,param_1,param_2);
  local_4 = 0;
  uVar1 = FUN_00bce2e0(local_38,param_2,param_3,param_4,param_5,param_6);
  local_38[0] = &PTR_LAB_00d9ee8c;
  local_4 = 1;
  Dtor_00bd9e50(local_28);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00bce430 @ 00bce430 ////

undefined1 __fastcall
FUN_00bce430(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  undefined **local_38 [4];
  undefined4 local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff65a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9ee8c_00bce4f0(local_38,param_1,param_2);
  local_4 = 0;
  uVar1 = FUN_00bce350(local_38,param_2,param_3,param_4,param_5,param_6);
  local_38[0] = &PTR_LAB_00d9ee8c;
  local_4 = 1;
  Dtor_00bd9e50(local_28);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00bce4b0 @ 00bce4b0 ////

void __fastcall
FUN_00bce4b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_4 = 0;
  local_8 = 0x10;
  local_c = param_1;
  FUN_00bce430(&local_c,param_2,param_3,&param_4,param_5,param_6);
  return;
}


//// FUNCTION Ctor_vt00d9ee8c_00bce4f0 @ 00bce4f0 ////

undefined4 * __thiscall Ctor_vt00d9ee8c_00bce4f0(void *this,undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff603;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_LAB_00d9ee8c;
  Ctor_vt00d9f52c_00bd9f70((undefined4 *)((int)this + 0x10));
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)(param_1 + 2);
  *(undefined4 *)((int)this + 8) = param_1[1];
  *(int *)((int)this + 4) = param_2;
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((int *)*param_1 != (int *)0x0) {
    FUN_00bd9b40((void *)((int)this + 0x10),(int *)*param_1);
  }
  uVar1 = FUN_00bd9f00((int)this + 0x10);
  uVar2 = __aulldiv((uint)((ulonglong)uVar1 * 8),(uint)((ulonglong)uVar1 * 8 >> 0x20),
                    param_1[1] * param_2,0);
  *(int *)((int)this + 0x28) = (int)uVar2;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION Dtor_00bce5d0 @ 00bce5d0 ////

void __fastcall Dtor_00bce5d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d9ee8c;
  local_4 = 0;
  Dtor_00bd9e50(param_1 + 4);
  *param_1 = &PTR_LAB_00d9ee80;
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bce620 @ 00bce620 ////

undefined4 * __thiscall ScalarDeletingDtor_00bce620(void *this,byte param_1)

{
  Dtor_00bce5d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bce650 @ 00bce650 ////

undefined4 FUN_00bce650(void)

{
  return 0x2e;
}


//// FUNCTION FUN_00bce660 @ 00bce660 ////

undefined4 __fastcall
FUN_00bce660(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint3 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_30 [12];
  
  uVar1 = FUN_00bce7e0(local_30,param_5,param_3,param_4);
  uVar2 = (uint3)((uint)uVar1 >> 8);
  if ((param_1 != (undefined4 *)0x0) && (0x2d < param_2)) {
    puVar4 = local_30;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_1 = *puVar4;
      puVar4 = puVar4 + 1;
      param_1 = param_1 + 1;
    }
    *(undefined2 *)param_1 = *(undefined2 *)puVar4;
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


//// FUNCTION FUN_00bce6b0 @ 00bce6b0 ////

undefined1 __fastcall FUN_00bce6b0(int *param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *_Memory;
  int iVar4;
  undefined4 uVar5;
  int *unaff_retaddr;
  undefined1 auStack_3c [40];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cff678;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 8))();
  FUN_00bce7e0(auStack_3c,iVar2,param_2,param_3);
  cVar1 = (**(code **)(*param_4 + 4))(auStack_3c);
  if (cVar1 == '\0') {
    ExceptionList = pvStack_14;
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0) {
    ExceptionList = pvStack_14;
    return 1;
  }
  uVar3 = (**(code **)(*param_1 + 8))();
  _Memory = operator_new(uVar3);
  pvStack_c = (void *)0x0;
  iVar4 = FUN_00bbc590(&stack0xffffffb4,0);
  iVar2 = *param_1;
  uVar5 = (**(code **)(iVar2 + 8))();
  cVar1 = (**(code **)(iVar2 + 4))(iVar4,0,uVar5);
  if (cVar1 != '\0') {
    iVar4 = FUN_00bbc590(&stack0xffffffb4,0);
    iVar2 = *unaff_retaddr;
    uVar5 = (**(code **)(*param_1 + 8))();
    cVar1 = (**(code **)(iVar2 + 4))(iVar4,uVar5);
    if (cVar1 != '\0') {
      if (_Memory == (void *)0x0) {
        ExceptionList = pvStack_14;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if (_Memory == (void *)0x0) {
    ExceptionList = pvStack_14;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00bce7e0 @ 00bce7e0 ////

void __thiscall FUN_00bce7e0(void *this,int param_1,int param_2,int param_3)

{
  *(int *)((int)this + 4) = param_1 + 0x26;
  *(short *)((int)this + 0x16) = (short)param_2;
  *(int *)((int)this + 0x1c) = param_2 * param_3 * 2;
  *(int *)((int)this + 0x18) = param_3;
  *(undefined4 *)this = 0x46464952;
  *(undefined4 *)((int)this + 8) = 0x45564157;
  *(undefined4 *)((int)this + 0xc) = 0x20746d66;
  *(undefined4 *)((int)this + 0x10) = 0x12;
  *(undefined2 *)((int)this + 0x14) = 1;
  *(short *)((int)this + 0x20) = (short)param_2 * 2;
  *(undefined2 *)((int)this + 0x22) = 0x10;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x26) = 0x61746164;
  *(int *)((int)this + 0x2a) = param_1;
  return;
}


//// FUNCTION FUN_00bce860 @ 00bce860 ////

void __fastcall FUN_00bce860(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9ee98;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00bce870 @ 00bce870 ////

void __fastcall FUN_00bce870(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


//// FUNCTION FUN_00bce880 @ 00bce880 ////

bool __fastcall FUN_00bce880(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}


//// FUNCTION PKDataReadCAccess_Dtor @ 00bce890 ////

void __fastcall PKDataReadCAccess_Dtor(undefined4 *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff69b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9ee98;
  if (param_1[1] != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKDataReadCAccess.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0xd);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"There are still ");
    LH_PrintResourceID(&local_110,param_1[1]);
    LH_LogErrorMessage(&local_110," references still out there!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION PKDataReadCAccess_ReleaseReference @ 00bce980 ////

void __fastcall PKDataReadCAccess_ReleaseReference(int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff6b0;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKDataReadCAccess.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x17);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Reference count out of sync");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bcea50 @ 00bcea50 ////

undefined4 * __thiscall ScalarDeletingDtor_00bcea50(void *this,byte param_1)

{
  PKDataReadCAccess_Dtor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Wrap_InitializeCriticalSection_00bcea70 @ 00bcea70 ////

LPCRITICAL_SECTION __fastcall Wrap_InitializeCriticalSection_00bcea70(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)param_1);
  return param_1;
}


//// FUNCTION Wrap_DeleteCriticalSection_00bcea80 @ 00bcea80 ////

void __fastcall Wrap_DeleteCriticalSection_00bcea80(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}


//// FUNCTION Wrap_EnterCriticalSection_00bcea90 @ 00bcea90 ////

void __fastcall Wrap_EnterCriticalSection_00bcea90(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}


//// FUNCTION Wrap_LeaveCriticalSection_00bceaa0 @ 00bceaa0 ////

void __fastcall Wrap_LeaveCriticalSection_00bceaa0(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}


//// FUNCTION Wrap_CloseHandle_00bceac0 @ 00bceac0 ////

void __fastcall Wrap_CloseHandle_00bceac0(undefined4 *param_1)

{
  CloseHandle((HANDLE)*param_1);
  return;
}


//// FUNCTION Wrap_ReleaseSemaphore_00bcead0 @ 00bcead0 ////

bool __fastcall Wrap_ReleaseSemaphore_00bcead0(undefined4 *param_1)

{
  WINBOOL WVar1;
  
  WVar1 = ReleaseSemaphore((HANDLE)*param_1,1,(LPLONG)0x0);
  return WVar1 != 0;
}


//// FUNCTION PKCSemaphore_Create @ 00bceaf0 ////

undefined4 * __thiscall PKCSemaphore_Create(void *this,LONG param_1,LONG param_2)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  HANDLE local_4;
  
  local_4 = (HANDLE)0xffffffff;
  puStack_8 = &LAB_00cff6cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,(LPCSTR)0x0);
  *(HANDLE *)this = local_4;
  if (local_4 == (HANDLE)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    LH_LogErrorMessage(&local_110,".\\PKCSemaphore.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(9);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Could not create semaphore");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION PKCSemaphore_Wait @ 00bcebd0 ////

void __fastcall PKCSemaphore_Wait(undefined4 *param_1)

{
  DWORD DVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff6e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DVar1 = WaitForSingleObjectEx((HANDLE)*param_1,0xffffffff,1);
  if (DVar1 == 0xffffffff) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKCSemaphore.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x15);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Waiting for semaphore unit failed");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION RedBlackTree_GetMinObject @ 00bcecf0 ////

int __fastcall RedBlackTree_GetMinObject(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)*param_1;
  piVar1 = (int *)param_1[1];
  if (piVar3 != piVar1) {
    do {
      piVar2 = (int *)*piVar3;
      if (piVar2 == piVar1) break;
      piVar3 = piVar2;
    } while (piVar2 != piVar1);
    if (piVar3 != piVar1) {
      return piVar3[4];
    }
  }
  return 0;
}


//// FUNCTION RedBlackTree_GetMaxObject @ 00bced20 ////

undefined4 __fastcall RedBlackTree_GetMaxObject(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)*param_1;
  iVar1 = param_1[1];
  if (iVar3 != iVar1) {
    do {
      iVar2 = *(int *)(iVar3 + 4);
      if (iVar2 == iVar1) break;
      iVar3 = iVar2;
    } while (iVar2 != iVar1);
    if (iVar3 != iVar1) {
      return *(undefined4 *)(iVar3 + 0x10);
    }
  }
  return 0;
}


//// FUNCTION RedBlackTree_CompareViaVtable @ 00bced50 ////

void __thiscall RedBlackTree_CompareViaVtable(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (*(code *)**(undefined4 **)this)(param_1);
  uVar2 = (*(code *)**(undefined4 **)this)(param_1);
  iVar3 = (**(code **)(*(int *)this + 4))(uVar1,uVar2);
  if (iVar3 == 0) {
    uVar1 = (**(code **)(*(int *)this + 8))(param_1);
    uVar2 = (**(code **)(*(int *)this + 8))(param_1);
    (**(code **)(*(int *)this + 0xc))(uVar1,uVar2);
  }
  return;
}


//// FUNCTION RedBlackTree_CompareKeyToObject @ 00bceda0 ////

void __thiscall RedBlackTree_CompareKeyToObject(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_retaddr;
  
  uVar1 = (*(code *)**(undefined4 **)this)(param_2);
  iVar2 = (**(code **)(*(int *)this + 4))(*unaff_retaddr,uVar1);
  if (iVar2 == 0) {
    uVar1 = (**(code **)(*(int *)this + 8))(param_2);
    (**(code **)(*(int *)this + 0xc))(unaff_retaddr[1],uVar1);
  }
  return;
}


//// FUNCTION RedBlackTree_CompareKeyToObject2 @ 00bcede0 ////

void __thiscall RedBlackTree_CompareKeyToObject2(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 unaff_retaddr;
  
  uVar1 = (*(code *)**(undefined4 **)this)(param_2);
  (**(code **)(*(int *)this + 4))(unaff_retaddr,uVar1);
  return;
}


//// FUNCTION RedBlackTree_CountNodes_Recursive @ 00bcee00 ////

void __thiscall RedBlackTree_CountNodes_Recursive(void *this,undefined4 *param_1,int *param_2)

{
  if (param_1 != *(undefined4 **)((int)this + 4)) {
    do {
      RedBlackTree_CountNodes_Recursive(this,(undefined4 *)*param_1,param_2);
      *param_2 = *param_2 + 1;
      param_1 = (undefined4 *)param_1[1];
    } while (param_1 != *(undefined4 **)((int)this + 4));
  }
  return;
}


//// FUNCTION RedBlackTree_ForEach_Recursive @ 00bcee30 ////

void __thiscall RedBlackTree_ForEach_Recursive(void *this,undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != *(undefined4 **)((int)this + 4)) {
    do {
      RedBlackTree_ForEach_Recursive(this,(undefined4 *)*param_1,param_2);
      (**(code **)*param_2)(param_1 + 4);
      param_1 = (undefined4 *)param_1[1];
    } while (param_1 != *(undefined4 **)((int)this + 4));
  }
  return;
}


//// FUNCTION RedBlackTree_NextNode @ 00bcee70 ////

int * __thiscall RedBlackTree_NextNode(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  piVar1 = *(int **)((int)this + 4);
  piVar2 = *(int **)(param_1 + 4);
  if (piVar1 == piVar2) {
    piVar2 = *(int **)(param_1 + 8);
    piVar3 = piVar2;
    if (param_1 == piVar2[1]) {
      do {
        piVar2 = (int *)piVar3[2];
        bVar4 = piVar3 == (int *)piVar2[1];
        piVar3 = piVar2;
      } while (bVar4);
    }
    if (piVar2 == *(int **)this) {
      piVar2 = piVar1;
    }
  }
  else {
    piVar3 = (int *)*piVar2;
    if (piVar3 != piVar1) {
      do {
        piVar2 = piVar3;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != piVar1);
      return piVar2;
    }
  }
  return piVar2;
}


//// FUNCTION RedBlackTree_PrevNode @ 00bceec0 ////

int * __thiscall RedBlackTree_PrevNode(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  piVar1 = *(int **)((int)this + 4);
  piVar2 = (int *)*param_1;
  if (piVar1 == piVar2) {
    piVar2 = (int *)param_1[2];
    if (param_1 == (undefined4 *)*piVar2) {
      piVar3 = piVar2;
      while (piVar2 = piVar1, piVar3 != *(int **)this) {
        piVar2 = (int *)piVar3[2];
        bVar4 = piVar3 != (int *)*piVar2;
        piVar3 = piVar2;
        if (bVar4) {
          return piVar2;
        }
      }
    }
  }
  else {
    piVar3 = (int *)piVar2[1];
    if (piVar3 != piVar1) {
      do {
        piVar2 = piVar3;
        piVar3 = (int *)piVar3[1];
      } while (piVar3 != piVar1);
      return piVar2;
    }
  }
  return piVar2;
}


//// FUNCTION RedBlackTree_Node_Init @ 00bcef10 ////

void __fastcall RedBlackTree_Node_Init(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  return;
}


//// FUNCTION RedBlackTree_Node_IsInitialised @ 00bcef20 ////

undefined4 __fastcall RedBlackTree_Node_IsInitialised(int *param_1)

{
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) && (param_1[4] != 0)) {
    return 1;
  }
  return 0;
}


//// FUNCTION RedBlackTree_Find @ 00bcef50 ////

undefined4 __thiscall RedBlackTree_Find(void *this,void *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = (undefined4 *)**(int **)this;
  local_8 = param_2;
  local_4 = param_3;
  if (puVar2 != *(undefined4 **)((int)this + 4)) {
    do {
      iVar1 = RedBlackTree_CompareKeyToObject(param_1,&local_8,puVar2[4]);
      if (iVar1 == 0) {
        return puVar2[4];
      }
      if (iVar1 < 0) {
        puVar2 = (undefined4 *)*puVar2;
      }
      else {
        puVar2 = (undefined4 *)puVar2[1];
      }
    } while (puVar2 != *(undefined4 **)((int)this + 4));
  }
  return 0;
}


//// FUNCTION RedBlackTree_FindNode @ 00bcefb0 ////

undefined4 * __thiscall RedBlackTree_FindNode(void *this,void *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(int **)this;
  if (puVar2 != *(undefined4 **)((int)this + 4)) {
    do {
      iVar1 = RedBlackTree_CompareKeyToObject2(param_1,param_2,puVar2[4]);
      if (iVar1 == 0) {
        return puVar2;
      }
      if (iVar1 < 0) {
        puVar2 = (undefined4 *)*puVar2;
      }
      else {
        puVar2 = (undefined4 *)puVar2[1];
      }
    } while (puVar2 != *(undefined4 **)((int)this + 4));
  }
  return puVar2;
}


//// FUNCTION RedBlackTree_FindFirst @ 00bceff0 ////

int __thiscall RedBlackTree_FindFirst(void *this,void *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = RedBlackTree_FindNode(this,param_1,param_2);
  if (piVar1[4] != 0) {
    piVar2 = RedBlackTree_PrevNode(this,piVar1);
    iVar3 = piVar2[4];
    while ((iVar3 != 0 && (iVar3 = RedBlackTree_CompareKeyToObject2(param_1,param_2,iVar3), iVar3 == 0))) {
      piVar4 = RedBlackTree_PrevNode(this,piVar2);
      iVar3 = piVar4[4];
      piVar1 = piVar2;
      piVar2 = piVar4;
    }
    return piVar1[4];
  }
  return 0;
}


//// FUNCTION RedBlackTree_Count @ 00bcf120 ////

int __fastcall RedBlackTree_Count(undefined4 *param_1)

{
  int local_4;
  
  local_4 = 0;
  RedBlackTree_CountNodes_Recursive(param_1,*(undefined4 **)*param_1,&local_4);
  return local_4;
}


//// FUNCTION RedBlackTree_ForEach @ 00bcf140 ////

void __thiscall RedBlackTree_ForEach(void *this,undefined4 *param_1)

{
  RedBlackTree_ForEach_Recursive(this,(undefined4 *)**(undefined4 **)this,param_1);
  return;
}


//// FUNCTION RedBlackTree_Node_Ctor @ 00bcf160 ////

undefined4 __fastcall RedBlackTree_Node_Ctor(undefined4 *param_1)

{
  undefined4 extraout_ECX;
  
  RedBlackTree_Node_Init(param_1);
  return extraout_ECX;
}


//// FUNCTION RedBlackTree_Ctor @ 00bcf170 ////

int * __fastcall RedBlackTree_Ctor(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = RedBlackTree_Node_Ctor(puVar1);
  }
  param_1[1] = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  *(undefined4 *)(param_1[1] + 4) = *(undefined4 *)(param_1[1] + 8);
  *(undefined4 *)param_1[1] = ((undefined4 *)param_1[1])[1];
  *(undefined4 *)(param_1[1] + 0xc) = 0;
  *(undefined4 *)(param_1[1] + 0x10) = 0;
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = RedBlackTree_Node_Ctor(puVar1);
  }
  *param_1 = iVar2;
  *(int *)(iVar2 + 4) = param_1[1];
  *(undefined4 *)*param_1 = ((undefined4 *)*param_1)[1];
  ((undefined4 *)*param_1)[2] = *(undefined4 *)*param_1;
  *(undefined4 *)(*param_1 + 0xc) = 0;
  *(undefined4 *)(*param_1 + 0x10) = 0;
  return param_1;
}


//// FUNCTION RedBlackTree_Insert @ 00bcf1f0 ////

void __thiscall RedBlackTree_Insert(void *this,void *param_1,int *param_2)

{
  int iVar1;
  LPCSTR pCVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff706;
  local_c = ExceptionList;
  iVar1 = *(int *)((int)this + 4);
  ExceptionList = &local_c;
  param_2[1] = iVar1;
  *param_2 = iVar1;
  piVar3 = *(int **)this;
  piVar4 = (int *)*piVar3;
  if ((int *)*piVar3 != (int *)*(int *)((int)this + 4)) {
    do {
      piVar3 = piVar4;
      iVar1 = RedBlackTree_CompareViaVtable(param_1,piVar3[4]);
      if (iVar1 == 0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 0;
        LH_LogErrorMessage(&local_110,".\\PKContainersCRedBlackTree.cpp");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x17f);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"Object already inserted");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_111,pCVar2);
        local_4 = 0xffffffff;
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
LAB_00bcf2ea:
        piVar4 = (int *)piVar3[1];
      }
      else {
        if (iVar1 < 1) goto LAB_00bcf2ea;
        piVar4 = (int *)*piVar3;
      }
    } while (piVar4 != *(int **)((int)this + 4));
  }
  param_2[2] = (int)piVar3;
  if (piVar3 == *(int **)this) {
LAB_00bcf3ea:
    *piVar3 = (int)param_2;
  }
  else {
    iVar1 = RedBlackTree_CompareViaVtable(param_1,piVar3[4]);
    if (iVar1 == 0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = 1;
      LH_LogErrorMessage(&local_110,".\\PKContainersCRedBlackTree.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x19f);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"Object already inserted");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_111,pCVar2);
      DebugBreak();
    }
    else if (0 < iVar1) goto LAB_00bcf3ea;
    piVar3[1] = (int)param_2;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION RedBlackTree_GetSuccessor @ 00bcf3f0 ////

int __thiscall RedBlackTree_GetSuccessor(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  LPCSTR pCVar3;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cff71b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*param_1 + 0x10))();
  piVar2 = RedBlackTree_NextNode(this,iVar1 + param_2);
  if (piVar2 == (int *)0x0) {
    ppuStack_110 = &PTR_LAB_00d9db7c;
    uStack_10c = 0;
    uStack_d = 0;
    uStack_4 = 0;
    LH_LogErrorMessage(&ppuStack_110,".\\PKContainersCRedBlackTree.cpp");
    LH_LogErrorMessage(&ppuStack_110,"(");
    FUN_00bbe970(0x227);
    LH_LogErrorMessage(&ppuStack_110,") : ");
    LH_LogErrorMessage(&ppuStack_110,"Null successor");
    LH_LogErrorMessage(&ppuStack_110,"\n");
    pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
    LH_Assert(&uStack_111,pCVar3);
    DebugBreak();
  }
  ExceptionList = pvStack_c;
  return piVar2[4];
}


//// FUNCTION RedBlackTree_GetPredecessor @ 00bcf4e0 ////

int __thiscall RedBlackTree_GetPredecessor(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  LPCSTR pCVar3;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cff730;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*param_1 + 0x10))();
  piVar2 = RedBlackTree_PrevNode(this,(undefined4 *)(iVar1 + param_2));
  if (piVar2 == (int *)0x0) {
    ppuStack_110 = &PTR_LAB_00d9db7c;
    uStack_10c = 0;
    uStack_d = 0;
    uStack_4 = 0;
    LH_LogErrorMessage(&ppuStack_110,".\\PKContainersCRedBlackTree.cpp");
    LH_LogErrorMessage(&ppuStack_110,"(");
    FUN_00bbe970(0x23c);
    LH_LogErrorMessage(&ppuStack_110,") : ");
    LH_LogErrorMessage(&ppuStack_110,"Null predecessor");
    LH_LogErrorMessage(&ppuStack_110,"\n");
    pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
    LH_Assert(&uStack_111,pCVar3);
    DebugBreak();
  }
  ExceptionList = pvStack_c;
  return piVar2[4];
}


//// FUNCTION RedBlackTree_CheckAssumptions @ 00bcf5d0 ////

void __fastcall RedBlackTree_CheckAssumptions(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff766;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1[1] + 0x10) != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKContainersCRedBlackTree.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x379);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"CheckAssumptions");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (*(int *)(*param_1 + 0x10) != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\PKContainersCRedBlackTree.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x37a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"CheckAssumptions");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (*(int *)(param_1[1] + 0xc) != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 2;
    LH_LogErrorMessage(&local_110,".\\PKContainersCRedBlackTree.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x37b);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"CheckAssumptions");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (*(int *)(*param_1 + 0xc) != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 3;
    LH_LogErrorMessage(&local_110,".\\PKContainersCRedBlackTree.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x37c);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"CheckAssumptions");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION RedBlackTree_Node_Dtor @ 00bcf880 ////

void __fastcall RedBlackTree_Node_Dtor(int *param_1)

{
  undefined4 uVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff77b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = RedBlackTree_Node_IsInitialised(param_1);
  if ((char)uVar1 != '\0') {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKContainersCRedBlackTree.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x387);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Node still initialised!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION RedBlackTree_LeftRotate @ 00bcf960 ////

void __thiscall RedBlackTree_LeftRotate(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  LPCSTR pCVar3;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff790;
  local_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 4);
  ExceptionList = &local_c;
  *(int *)(param_1 + 4) = *piVar1;
  if (*piVar1 != *(int *)((int)this + 4)) {
    *(int *)(*piVar1 + 8) = param_1;
  }
  piVar1[2] = *(int *)(param_1 + 8);
  piVar2 = *(int **)(param_1 + 8);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
  }
  else {
    piVar2[1] = (int)piVar1;
  }
  *piVar1 = param_1;
  *(int **)(param_1 + 8) = piVar1;
  RedBlackTree_CheckAssumptions(this);
  if (*(int *)(*(int *)((int)this + 4) + 0xc) != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKContainersCRedBlackTree.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x124);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Nil not Red in RedBlackTree::LeftRotate");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar3);
    DebugBreak();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bcfa70 @ 00bcfa70 ////

void __thiscall FUN_00bcfa70(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 4);
  if (*(int *)((int)this + 4) != *(int *)(iVar1 + 4)) {
    *(int **)(*(int *)(iVar1 + 4) + 8) = param_1;
  }
  *(int *)(iVar1 + 8) = param_1[2];
  piVar2 = (int *)param_1[2];
  if (param_1 == (int *)*piVar2) {
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = param_1;
    param_1[2] = iVar1;
    RedBlackTree_CheckAssumptions(this);
    return;
  }
  piVar2[1] = iVar1;
  *(int **)(iVar1 + 4) = param_1;
  param_1[2] = iVar1;
  RedBlackTree_CheckAssumptions(this);
  return;
}


//// FUNCTION FUN_00bcfac0 @ 00bcfac0 ////

void __thiscall FUN_00bcfac0(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  
  piVar1 = param_1;
  iVar3 = (**(code **)(*param_1 + 0x10))();
  iVar2 = param_2;
  piVar6 = (int *)(iVar3 + param_2);
  if ((piVar6 == (int *)0x0) || (uVar4 = RedBlackTree_Node_IsInitialised(piVar6), (char)uVar4 != '\0')) {
    LH_Assert(&param_1,"x && !x->IsInitialised ()\n");
    DebugBreak();
  }
  piVar6[4] = iVar2;
  RedBlackTree_Insert(this,piVar1,piVar6);
  piVar6[3] = 1;
  piVar1 = (int *)piVar6[2];
  iVar2 = piVar1[3];
  do {
    if (iVar2 == 0) {
      *(undefined4 *)(**(int **)this + 0xc) = 0;
      RedBlackTree_CheckAssumptions(this);
      return;
    }
    piVar5 = *(int **)piVar1[2];
    if (piVar1 == piVar5) {
      piVar5 = (int *)((int *)piVar1[2])[1];
      if (piVar5[3] == 0) {
        if (piVar6 == (int *)piVar1[1]) {
          RedBlackTree_LeftRotate(this,(int)piVar1);
          piVar6 = piVar1;
        }
        *(undefined4 *)(piVar6[2] + 0xc) = 0;
        *(undefined4 *)(*(int *)(piVar6[2] + 8) + 0xc) = 1;
        FUN_00bcfa70(this,*(int **)(piVar6[2] + 8));
      }
      else {
LAB_00bcfb31:
        *(undefined4 *)(piVar6[2] + 0xc) = 0;
        piVar5[3] = 0;
        *(undefined4 *)(*(int *)(piVar6[2] + 8) + 0xc) = 1;
        piVar6 = *(int **)(piVar6[2] + 8);
      }
    }
    else {
      if (piVar5[3] != 0) goto LAB_00bcfb31;
      if (piVar6 == (int *)*piVar1) {
        FUN_00bcfa70(this,piVar1);
        piVar6 = piVar1;
      }
      *(undefined4 *)(piVar6[2] + 0xc) = 0;
      *(undefined4 *)(*(int *)(piVar6[2] + 8) + 0xc) = 1;
      RedBlackTree_LeftRotate(this,*(int *)(piVar6[2] + 8));
    }
    piVar1 = (int *)piVar6[2];
    iVar2 = piVar1[3];
  } while( true );
}


//// FUNCTION FUN_00bcfbd0 @ 00bcfbd0 ////

uint __thiscall FUN_00bcfbd0(void *this,int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = RedBlackTree_GetSuccessor(this,param_1,param_2);
  if (uVar2 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)*param_1;
  uVar3 = (*(code *)*puVar1)(uVar2);
  uVar3 = (**(code **)*param_1)(param_2,uVar3);
  iVar4 = (*(code *)puVar1[1])(uVar3);
  return ~-(uint)(iVar4 != 0) & uVar2;
}


//// FUNCTION FUN_00bcfc70 @ 00bcfc70 ////

void __thiscall FUN_00bcfc70(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)**(int **)this;
  iVar2 = param_1[3];
  do {
    if ((iVar2 != 0) || (piVar1 == param_1)) {
      param_1[3] = 0;
      RedBlackTree_CheckAssumptions(this);
      return;
    }
    piVar3 = (int *)param_1[2];
    piVar4 = (int *)*piVar3;
    if (param_1 == piVar4) {
      piVar4 = (int *)piVar3[1];
      if (piVar4[3] != 0) {
        piVar4[3] = 0;
        *(undefined4 *)(param_1[2] + 0xc) = 1;
        RedBlackTree_LeftRotate(this,param_1[2]);
        piVar3 = (int *)param_1[2];
        piVar4 = (int *)piVar3[1];
      }
      if (*(int *)(piVar4[1] + 0xc) == 0) {
        if (*(int *)(*piVar4 + 0xc) == 0) {
          piVar4[3] = 1;
          param_1 = (int *)param_1[2];
          goto LAB_00bcfd9d;
        }
        *(undefined4 *)(*piVar4 + 0xc) = 0;
        piVar4[3] = 1;
        FUN_00bcfa70(this,piVar4);
        piVar3 = (int *)param_1[2];
        piVar4 = (int *)piVar3[1];
      }
      piVar4[3] = piVar3[3];
      *(undefined4 *)(param_1[2] + 0xc) = 0;
      *(undefined4 *)(piVar4[1] + 0xc) = 0;
      RedBlackTree_LeftRotate(this,param_1[2]);
      param_1 = piVar1;
    }
    else {
      if (piVar4[3] != 0) {
        piVar4[3] = 0;
        *(undefined4 *)(param_1[2] + 0xc) = 1;
        FUN_00bcfa70(this,(int *)param_1[2]);
        piVar3 = (int *)param_1[2];
        piVar4 = (int *)*piVar3;
      }
      if ((*(int *)(piVar4[1] + 0xc) == 0) && (*(int *)(*piVar4 + 0xc) == 0)) {
        piVar4[3] = 1;
        param_1 = (int *)param_1[2];
      }
      else {
        if (*(int *)(*piVar4 + 0xc) == 0) {
          *(undefined4 *)(piVar4[1] + 0xc) = 0;
          piVar4[3] = 1;
          RedBlackTree_LeftRotate(this,(int)piVar4);
          piVar3 = (int *)param_1[2];
          piVar4 = (int *)*piVar3;
        }
        piVar4[3] = piVar3[3];
        *(undefined4 *)(param_1[2] + 0xc) = 0;
        *(undefined4 *)(*piVar4 + 0xc) = 0;
        FUN_00bcfa70(this,(int *)param_1[2]);
        param_1 = piVar1;
      }
    }
LAB_00bcfd9d:
    iVar2 = param_1[3];
  } while( true );
}


//// FUNCTION RedBlackTree_Remove @ 00bcfdc0 ////

void __thiscall RedBlackTree_Remove(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  LPCSTR pCVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_111;
  undefined **local_110;
  char local_10c;
  char local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff7a5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = RedBlackTree_Node_IsInitialised(param_1);
  cVar3 = (char)uVar4;
  if (cVar3 == '\0') {
    local_110 = &PTR_LAB_00d9db7c;
    local_4 = 0;
    local_10c = cVar3;
    local_d = cVar3;
    LH_LogErrorMessage(&local_110,".\\PKContainersCRedBlackTree.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x333);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Not in a list");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar5 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar5);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  piVar1 = *(int **)((int)this + 4);
  piVar6 = param_1;
  if (((int *)*param_1 != piVar1) && ((int *)param_1[1] != piVar1)) {
    piVar6 = RedBlackTree_NextNode(this,(int)param_1);
  }
  piVar7 = (int *)*piVar6;
  if (piVar7 == piVar1) {
    piVar7 = (int *)piVar6[1];
  }
  puVar2 = (undefined4 *)piVar6[2];
  piVar7[2] = (int)puVar2;
  if (*(undefined4 **)this == puVar2) {
    **(undefined4 **)this = piVar7;
  }
  else {
    piVar1 = (int *)piVar6[2];
    if (piVar6 == (int *)*piVar1) {
      *piVar1 = (int)piVar7;
    }
    else {
      piVar1[1] = (int)piVar7;
    }
  }
  if (piVar6 == param_1) {
    if (piVar6[3] == 0) {
      FUN_00bcfc70(this,piVar7);
    }
  }
  else {
    *piVar6 = *param_1;
    piVar6[1] = param_1[1];
    piVar6[2] = param_1[2];
    *(int **)(param_1[1] + 8) = piVar6;
    *(int **)(*param_1 + 8) = piVar6;
    if (param_1 == *(int **)param_1[2]) {
      *(int **)param_1[2] = piVar6;
    }
    else {
      *(int **)(param_1[2] + 4) = piVar6;
    }
    if (piVar6[3] == 0) {
      piVar6[3] = param_1[3];
      FUN_00bcfc70(this,piVar7);
      piVar6 = param_1;
    }
    else {
      piVar6[3] = param_1[3];
      piVar6 = param_1;
    }
  }
  RedBlackTree_Node_Init(piVar6);
  RedBlackTree_CheckAssumptions(this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bcff70 @ 00bcff70 ////

void __thiscall FUN_00bcff70(void *this,int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  RedBlackTree_Remove(this,(int *)(iVar1 + param_2));
  return;
}


//// FUNCTION FUN_00bcff90 @ 00bcff90 ////

void __fastcall FUN_00bcff90(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)*param_1;
  if (piVar1 != (int *)param_1[1]) {
    do {
      RedBlackTree_Remove(param_1,piVar1);
      piVar1 = *(int **)*param_1;
    } while (piVar1 != (int *)param_1[1]);
  }
  return;
}


//// FUNCTION RedBlackTree_Dtor @ 00bcffc0 ////

void __fastcall RedBlackTree_Dtor(undefined4 *param_1)

{
  int *piVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff7ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)*param_1 != param_1[1]) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKContainersCRedBlackTree.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x27c);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"There is still something in this list");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    RedBlackTree_Node_Dtor(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    RedBlackTree_Node_Dtor(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bd00d0 @ 00bd00d0 ////

int * __thiscall ScalarDeletingDtor_00bd00d0(void *this,byte param_1)

{
  RedBlackTree_Node_Dtor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9f090_00bd0100 @ 00bd0100 ////

void __fastcall SetVtable_00d9f090_00bd0100(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f090;
  return;
}


//// FUNCTION FUN_00bd0140 @ 00bd0140 ////

uint FUN_00bd0140(void)

{
  uint uVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  uVar1 = PKCProtectionInstance_Leave(local_8);
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00bd0170 @ 00bd0170 ////

int __fastcall FUN_00bd0170(int param_1)

{
  return param_1 + 8;
}


//// FUNCTION FUN_00bd0190 @ 00bd0190 ////

undefined4 __fastcall FUN_00bd0190(int *param_1)

{
  undefined4 uVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff7d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = (**(code **)(*param_1 + 0x24))();
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return uVar1;
}


//// FUNCTION FUN_00bd01f0 @ 00bd01f0 ////

undefined4 FUN_00bd01f0(void)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  PKCProtectionInstance_Leave(local_8);
  return 0;
}


//// FUNCTION Ctor_vt00d9f0a4_00bd0220 @ 00bd0220 ////

undefined4 * __thiscall Ctor_vt00d9f0a4_00bd0220(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff800;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 8) = param_2;
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_00d9f0a4;
  *(undefined4 *)((int)this + 4) = param_1;
  FUN_00bcbc00((undefined4 *)((int)this + 0xc));
  local_4._0_1_ = 1;
  RedBlackTree_Node_Ctor((undefined4 *)((int)this + 0x30));
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00bcfac0((void *)(*(int *)((int)this + 4) + 0x30),(int *)(*(int *)((int)this + 4) + 0x2c),
               (int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bd02a0 @ 00bd02a0 ////

void __fastcall FUN_00bd02a0(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  undefined4 local_2c [4];
  undefined4 auStack_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff81a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Ctor_vt00d9ee30_00bccf30(local_2c);
  local_4 = 0;
  LH_Array_AdoptRequireEmpty_00bcdcc0(local_2c,(void *)(param_1 + 0x18));
  puVar1 = (undefined4 *)FUN_00bccfb0((int)local_2c);
  while (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    puVar1 = (undefined4 *)FUN_00bccfb0((int)local_2c);
  }
  LH_Array_AdoptRequireEmpty_00bcdcc0(local_2c,(void *)(param_1 + 0xc));
  puVar1 = (undefined4 *)FUN_00bccfb0((int)local_2c);
  while (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    puVar1 = (undefined4 *)FUN_00bccfb0((int)local_2c);
  }
  local_4 = 0xffffffff;
  Dtor_00bccf50(local_2c);
  Ctor_vt00d9ee00_00bcc660(auStack_1c);
  local_4 = 1;
  LH_Array_AdoptRequireEmpty_00bcdd00(auStack_1c,(void *)(param_1 + 0x24));
  _Memory = (void *)FUN_00bcc6e0((int)auStack_1c);
  if (_Memory == (void *)0x0) {
    local_4 = 0xffffffff;
    Dtor_00bcc680(auStack_1c);
    ExceptionList = pvStack_c;
    return;
  }
  PKStringsCHeapString_Dtor((undefined4 *)((int)_Memory + 4));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION Dtor_00bd03b0 @ 00bd03b0 ////

void __fastcall Dtor_00bd03b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cff842;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d9f0a4;
  local_4 = 2;
  FUN_00bd02a0((int)param_1);
  FUN_00bcff70((void *)(param_1[1] + 0x30),(int *)(param_1[1] + 0x2c),(int)param_1);
  local_4._0_1_ = 1;
  RedBlackTree_Node_Dtor(param_1 + 0xc);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bcbd60(param_1 + 3);
  *param_1 = &PTR_LAB_00d9f090;
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bd0480 @ 00bd0480 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd0480(void *this,byte param_1)

{
  Dtor_00bd03b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bd04d0 @ 00bd04d0 ////

int __fastcall FUN_00bd04d0(int param_1)

{
  return param_1 + 0x80;
}


//// FUNCTION FUN_00bd0520 @ 00bd0520 ////

int __thiscall FUN_00bd0520(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff8b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = thunk_FUN_00bd0a00((int)this + 0x68);
  if (uVar1 <= param_1) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = thunk_FUN_00bd11f0((void *)((int)this + 0x68),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar2;
}


//// FUNCTION Ctor_vt00d9f0d8_00bd05c0 @ 00bd05c0 ////

undefined4 * __thiscall Ctor_vt00d9f0d8_00bd05c0(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9f0a4_00bd0220(this,param_1,param_2);
  *(undefined ***)this = &PTR_LAB_00d9f0d8;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  FUN_00bd1090((undefined4 *)((int)this + 0x5c));
  FUN_00bd10b0((undefined4 *)((int)this + 0x68));
  FUN_00bd10e0((undefined4 *)((int)this + 0x74));
  local_4._0_1_ = 6;
  Ctor_vt00d9feb8_00be1eb0((void *)((int)this + 0x80),param_3);
  local_4._0_1_ = 7;
  RedBlackTree_Node_Ctor((undefined4 *)((int)this + 0x88));
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00bcfac0((void *)(param_1 + 0x3c),(int *)(param_1 + 0x38),(int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Dtor_00bd0670 @ 00bd0670 ////

void __fastcall Dtor_00bd0670(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cff9b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d9f0d8;
  local_4 = 8;
  Ctor_vt00d9f0cc_00bd19d0(local_1c,param_1 + 0x17);
  local_4._0_1_ = 9;
  do {
    iVar4 = FUN_00bd1100((int)local_1c);
  } while (iVar4 != 0);
  local_4._0_1_ = 8;
  Dtor_00bd16a0(local_1c);
  Ctor_vt00d9f0d0_00bd1a30(local_1c,param_1 + 0x1a);
  local_4._0_1_ = 10;
  do {
    iVar4 = FUN_00bd1150((int)local_1c);
  } while (iVar4 != 0);
  local_4._0_1_ = 8;
  Dtor_00bd16f0(local_1c);
  Ctor_vt00d9f0d4_00bd1a90(local_1c,param_1 + 0x1d);
  local_4._0_1_ = 0xb;
  do {
    iVar4 = FUN_00bd11a0((int)local_1c);
  } while (iVar4 != 0);
  local_4._0_1_ = 8;
  Dtor_00bd1740(local_1c);
  FUN_00bcff70((void *)(param_1[1] + 0x3c),(int *)(param_1[1] + 0x38),(int)param_1);
  local_4._0_1_ = 7;
  RedBlackTree_Node_Dtor(param_1 + 0x22);
  local_4._0_1_ = 6;
  PKStringsCHeapString_Dtor(param_1 + 0x20);
  local_4._0_1_ = 5;
  LH_Array_FreeBuffer_00bd10f0(param_1 + 0x1d);
  local_4._0_1_ = 4;
  LH_Array_FreeBuffer_00bd10c0(param_1 + 0x1a);
  local_4._0_1_ = 3;
  LH_Array_FreeBuffer_00bd10a0(param_1 + 0x17);
  pvVar1 = (void *)param_1[0x15];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x28,*(int *)((int)pvVar1 + -4),thunk_FUN_00be88b0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  piVar2 = (int *)param_1[0x13];
  local_4._0_1_ = 1;
  if (piVar2 != (int *)0x0) {
    if (piVar2[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(piVar2 + -1);
    }
    (**(code **)(*piVar2 + 0x90))(3);
    param_1[0x13] = 0;
  }
  puVar3 = (undefined4 *)param_1[0x11];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar3[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar3 + -1);
    }
    (**(code **)*puVar3)(3);
    param_1[0x11] = 0;
  }
  local_4 = 0xffffffff;
  Dtor_00bd03b0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bd0840 @ 00bd0840 ////

void __fastcall FUN_00bd0840(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  if (puVar1[-1] != 0) {
    (**(code **)*puVar1)(3);
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puVar1 + -1);
}


//// FUNCTION FUN_00bd0890 @ 00bd0890 ////

void __fastcall FUN_00bd0890(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (piVar1[-1] != 0) {
    (**(code **)(*piVar1 + 0x90))(3);
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(piVar1 + -1);
}


//// FUNCTION GetField_8_00bd0910 @ 00bd0910 ////

undefined4 __fastcall GetField_8_00bd0910(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION LH_Array_SetFilledSize_00bd0920 @ 00bd0920 ////

void __thiscall LH_Array_SetFilledSize_00bd0920(void *this,uint param_1)

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


//// FUNCTION FUN_00bd0950 @ 00bd0950 ////

void __fastcall FUN_00bd0950(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00bd0960 @ 00bd0960 ////

void __fastcall LH_Array_FreeBuffer_00bd0960(undefined4 *param_1)

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


//// FUNCTION LH_Array_GetAt_00bd09c0 @ 00bd09c0 ////

undefined4 __thiscall LH_Array_GetAt_00bd09c0(void *this,uint param_1)

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


//// FUNCTION GetField_8_00bd0a00 @ 00bd0a00 ////

undefined4 __fastcall GetField_8_00bd0a00(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION LH_Array_SetFilledSize_00bd0a10 @ 00bd0a10 ////

void __thiscall LH_Array_SetFilledSize_00bd0a10(void *this,uint param_1)

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


//// FUNCTION FUN_00bd0a40 @ 00bd0a40 ////

void __fastcall FUN_00bd0a40(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00bd0a50 @ 00bd0a50 ////

void __fastcall LH_Array_FreeBuffer_00bd0a50(undefined4 *param_1)

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


//// FUNCTION LH_Array_GetAt_00bd0ab0 @ 00bd0ab0 ////

undefined4 __thiscall LH_Array_GetAt_00bd0ab0(void *this,uint param_1)

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


//// FUNCTION GetField_8_00bd0af0 @ 00bd0af0 ////

undefined4 __fastcall GetField_8_00bd0af0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION LH_Array_SetFilledSize_00bd0b00 @ 00bd0b00 ////

void __thiscall LH_Array_SetFilledSize_00bd0b00(void *this,uint param_1)

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


//// FUNCTION FUN_00bd0b30 @ 00bd0b30 ////

void __fastcall FUN_00bd0b30(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00bd0b40 @ 00bd0b40 ////

void __fastcall LH_Array_FreeBuffer_00bd0b40(undefined4 *param_1)

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


//// FUNCTION LH_Array_SetAt_00bd0ba0 @ 00bd0ba0 ////

void __thiscall LH_Array_SetAt_00bd0ba0(void *this,uint param_1,undefined4 param_2)

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


//// FUNCTION LH_Array_SetAt_00bd0be0 @ 00bd0be0 ////

void __thiscall LH_Array_SetAt_00bd0be0(void *this,uint param_1,undefined4 param_2)

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


//// FUNCTION LH_Array_SetAt_00bd0c20 @ 00bd0c20 ////

void __thiscall LH_Array_SetAt_00bd0c20(void *this,uint param_1,undefined4 param_2)

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


//// FUNCTION LH_Array_Reserve_00bd0c60 @ 00bd0c60 ////

void __thiscall LH_Array_Reserve_00bd0c60(void *this,uint param_1)

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


//// FUNCTION FUN_00bd0d20 @ 00bd0d20 ////

void __fastcall FUN_00bd0d20(undefined4 *param_1,undefined4 *param_2)

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


//// FUNCTION LH_Array_Reserve_00bd0d50 @ 00bd0d50 ////

void __thiscall LH_Array_Reserve_00bd0d50(void *this,uint param_1)

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


//// FUNCTION FUN_00bd0e10 @ 00bd0e10 ////

void __fastcall FUN_00bd0e10(undefined4 *param_1,undefined4 *param_2)

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


//// FUNCTION LH_Array_Reserve_00bd0e40 @ 00bd0e40 ////

void __thiscall LH_Array_Reserve_00bd0e40(void *this,uint param_1)

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


//// FUNCTION FUN_00bd0f00 @ 00bd0f00 ////

void __fastcall FUN_00bd0f00(undefined4 *param_1,undefined4 *param_2)

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


//// FUNCTION FUN_00bd0f30 @ 00bd0f30 ////

void __thiscall FUN_00bd0f30(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00bd0c60(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00bd0f70 @ 00bd0f70 ////

void __thiscall FUN_00bd0f70(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00bd0d50(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00bd0fb0 @ 00bd0fb0 ////

void __thiscall FUN_00bd0fb0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00bd0e40(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00bd1090 @ 00bd1090 ////

undefined4 * __fastcall FUN_00bd1090(undefined4 *param_1)

{
  FUN_00bd0950(param_1);
  return param_1;
}


//// FUNCTION LH_Array_FreeBuffer_00bd10a0 @ 00bd10a0 ////

void __fastcall LH_Array_FreeBuffer_00bd10a0(undefined4 *param_1)

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


//// FUNCTION FUN_00bd10b0 @ 00bd10b0 ////

undefined4 * __fastcall FUN_00bd10b0(undefined4 *param_1)

{
  FUN_00bd0a40(param_1);
  return param_1;
}


//// FUNCTION LH_Array_FreeBuffer_00bd10c0 @ 00bd10c0 ////

void __fastcall LH_Array_FreeBuffer_00bd10c0(undefined4 *param_1)

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


//// FUNCTION FUN_00bd10e0 @ 00bd10e0 ////

undefined4 * __fastcall FUN_00bd10e0(undefined4 *param_1)

{
  FUN_00bd0b30(param_1);
  return param_1;
}


//// FUNCTION LH_Array_FreeBuffer_00bd10f0 @ 00bd10f0 ////

void __fastcall LH_Array_FreeBuffer_00bd10f0(undefined4 *param_1)

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


//// FUNCTION FUN_00bd1100 @ 00bd1100 ////

int __fastcall FUN_00bd1100(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = GetField_8_00bd0910((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = GetField_8_00bd0910((int)this);
    iVar2 = LH_Array_GetAt_00bc0f80(this,iVar1 - 1U);
    LH_Array_SetFilledSize_00bd0920(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = GetField_8_00bd0910((int)this);
  }
  return iVar2;
}


//// FUNCTION FUN_00bd1150 @ 00bd1150 ////

int __fastcall FUN_00bd1150(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = GetField_8_00bd0a00((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = GetField_8_00bd0a00((int)this);
    iVar2 = LH_Array_GetAt_00bd09c0(this,iVar1 - 1U);
    LH_Array_SetFilledSize_00bd0a10(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = GetField_8_00bd0a00((int)this);
  }
  return iVar2;
}


//// FUNCTION FUN_00bd11a0 @ 00bd11a0 ////

int __fastcall FUN_00bd11a0(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = GetField_8_00bd0af0((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = GetField_8_00bd0af0((int)this);
    iVar2 = LH_Array_GetAt_00bd0ab0(this,iVar1 - 1U);
    LH_Array_SetFilledSize_00bd0b00(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = GetField_8_00bd0af0((int)this);
  }
  return iVar2;
}


//// FUNCTION LH_Map_GetObject_00bd11f0 @ 00bd11f0 ////

int __thiscall LH_Map_GetObject_00bd11f0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = LH_Array_GetAt_00bd09c0(this,param_1);
  if (iVar1 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar1;
}


//// FUNCTION LH_SortedArray_FindIndex_00bd1220 @ 00bd1220 ////

int __thiscall LH_SortedArray_FindIndex_00bd1220(void *this,uint *param_1,undefined1 *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_5;
  int *local_4;
  
  *param_2 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 8) + -1;
  iVar4 = 0;
  local_4 = this;
  if (-1 < iVar3) {
    do {
      iVar5 = (iVar3 + iVar4) / 2;
      iVar1 = *(int *)(*local_4 + iVar5 * 4);
      if (iVar1 == 0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
      }
      puVar2 = (uint *)FUN_00be7050(iVar1);
      if (*param_1 < *puVar2) {
        iVar3 = iVar5 + -1;
      }
      else {
        if (*param_1 <= *puVar2) {
          *param_2 = 1;
          return iVar5;
        }
        iVar4 = iVar5 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  iVar4 = (iVar3 + iVar4) / 2;
  iVar3 = *(int *)(*local_4 + iVar4 * 4);
  if (iVar3 == 0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  puVar2 = (uint *)FUN_00be7050(iVar3);
  if (*puVar2 <= *param_1) {
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}


//// FUNCTION LH_SortedArray_FindIndex_00bd1300 @ 00bd1300 ////

int __thiscall LH_SortedArray_FindIndex_00bd1300(void *this,uint *param_1,undefined1 *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_5;
  int *local_4;
  
  *param_2 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 8) + -1;
  iVar4 = 0;
  local_4 = this;
  if (-1 < iVar3) {
    do {
      iVar5 = (iVar3 + iVar4) / 2;
      iVar1 = *(int *)(*local_4 + iVar5 * 4);
      if (iVar1 == 0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
      }
      puVar2 = (uint *)FUN_00be8810(iVar1);
      if (*param_1 < *puVar2) {
        iVar3 = iVar5 + -1;
      }
      else {
        if (*param_1 <= *puVar2) {
          *param_2 = 1;
          return iVar5;
        }
        iVar4 = iVar5 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  iVar4 = (iVar3 + iVar4) / 2;
  iVar3 = *(int *)(*local_4 + iVar4 * 4);
  if (iVar3 == 0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  puVar2 = (uint *)FUN_00be8810(iVar3);
  if (*puVar2 <= *param_1) {
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}


//// FUNCTION FUN_00bd13e0 @ 00bd13e0 ////

void __fastcall FUN_00bd13e0(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = GetField_8_00bd0910((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Array_GetAt_00bc0f80(this,uVar4);
      if (iVar1 != 0) {
        LH_Array_SetAt_00bd0ba0(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bd0910((int)this);
    } while (uVar4 < uVar2);
  }
  LH_Array_SetFilledSize_00bd0920(this,uVar3);
  return;
}


//// FUNCTION FUN_00bd1430 @ 00bd1430 ////

void __fastcall FUN_00bd1430(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = GetField_8_00bd0a00((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Array_GetAt_00bd09c0(this,uVar4);
      if (iVar1 != 0) {
        LH_Array_SetAt_00bd0be0(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bd0a00((int)this);
    } while (uVar4 < uVar2);
  }
  LH_Array_SetFilledSize_00bd0a10(this,uVar3);
  return;
}


//// FUNCTION FUN_00bd1480 @ 00bd1480 ////

void __fastcall FUN_00bd1480(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = GetField_8_00bd0af0((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Array_GetAt_00bd0ab0(this,uVar4);
      if (iVar1 != 0) {
        LH_Array_SetAt_00bd0c20(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bd0af0((int)this);
    } while (uVar4 < uVar2);
  }
  LH_Array_SetFilledSize_00bd0b00(this,uVar3);
  return;
}


//// FUNCTION FUN_00bd14d0 @ 00bd14d0 ////

void __thiscall FUN_00bd14d0(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00bd0f30(this,param_1[2]);
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


//// FUNCTION FUN_00bd1520 @ 00bd1520 ////

void __thiscall FUN_00bd1520(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00bd0f70(this,param_1[2]);
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


//// FUNCTION FUN_00bd1570 @ 00bd1570 ////

void __thiscall FUN_00bd1570(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00bd0fb0(this,param_1[2]);
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


//// FUNCTION FUN_00bd15c0 @ 00bd15c0 ////

void __fastcall FUN_00bd15c0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x28,*(int *)((int)pvVar1 + -4),thunk_FUN_00be88b0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  return;
}


//// FUNCTION LH_SortedArray_FindObject_00bd1600 @ 00bd1600 ////

int __thiscall LH_SortedArray_FindObject_00bd1600(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = LH_SortedArray_FindIndex_00bd1220(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  iVar2 = LH_Array_GetAt_00bd09c0(this,uVar1);
  if (iVar2 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar2;
}


//// FUNCTION LH_SortedArray_FindObject_00bd1650 @ 00bd1650 ////

int __thiscall LH_SortedArray_FindObject_00bd1650(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = LH_SortedArray_FindIndex_00bd1300(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  iVar2 = LH_Array_GetAt_00bd0ab0(this,uVar1);
  if (iVar2 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar2;
}


//// FUNCTION Dtor_00bd16a0 @ 00bd16a0 ////

void __fastcall Dtor_00bd16a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff85b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9f0cc;
  local_4 = 0;
  FUN_00bd13e0((int)param_1);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00bd0960(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Dtor_00bd16f0 @ 00bd16f0 ////

void __fastcall Dtor_00bd16f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff87b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9f0d0;
  local_4 = 0;
  FUN_00bd1430((int)param_1);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00bd0a50(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Dtor_00bd1740 @ 00bd1740 ////

void __fastcall Dtor_00bd1740(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cff89b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9f0d4;
  local_4 = 0;
  FUN_00bd1480((int)param_1);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00bd0b40(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bd1790 @ 00bd1790 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd1790(void *this,byte param_1)

{
  Dtor_00bd16a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bd17b0 @ 00bd17b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd17b0(void *this,byte param_1)

{
  Dtor_00bd16f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bd17d0 @ 00bd17d0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd17d0(void *this,byte param_1)

{
  Dtor_00bd1740(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bd17f0 @ 00bd17f0 ////

void __thiscall FUN_00bd17f0(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00bd0d20(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      LH_Array_Reserve_00bd0c60(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00bd14d0(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00bd1840 @ 00bd1840 ////

void __thiscall FUN_00bd1840(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00bd0e10(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      LH_Array_Reserve_00bd0d50(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00bd1520(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00bd1890 @ 00bd1890 ////

void __thiscall FUN_00bd1890(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00bd0f00(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      LH_Array_Reserve_00bd0e40(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00bd1570(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00bd1910 @ 00bd1910 ////

void __thiscall LH_Array_AdoptRequireEmpty_00bd1910(void *this,void *param_1)

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


//// FUNCTION LH_Array_AdoptRequireEmpty_00bd1950 @ 00bd1950 ////

void __thiscall LH_Array_AdoptRequireEmpty_00bd1950(void *this,void *param_1)

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


//// FUNCTION LH_Array_AdoptRequireEmpty_00bd1990 @ 00bd1990 ////

void __thiscall LH_Array_AdoptRequireEmpty_00bd1990(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd0af0((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00bd1890(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION Ctor_vt00d9f0cc_00bd19d0 @ 00bd19d0 ////

undefined4 * __thiscall Ctor_vt00d9f0cc_00bd19d0(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff9cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d9f0cc;
  FUN_00bd0950((undefined4 *)((int)this + 4));
  local_4 = 0;
  LH_Array_AdoptRequireEmpty_00bd1910(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Ctor_vt00d9f0d0_00bd1a30 @ 00bd1a30 ////

undefined4 * __thiscall Ctor_vt00d9f0d0_00bd1a30(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cff9eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d9f0d0;
  FUN_00bd0a40((undefined4 *)((int)this + 4));
  local_4 = 0;
  LH_Array_AdoptRequireEmpty_00bd1950(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Ctor_vt00d9f0d4_00bd1a90 @ 00bd1a90 ////

undefined4 * __thiscall Ctor_vt00d9f0d4_00bd1a90(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffa0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d9f0d4;
  FUN_00bd0b30((undefined4 *)((int)this + 4));
  local_4 = 0;
  LH_Array_AdoptRequireEmpty_00bd1990(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bd1af0 @ 00bd1af0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd1af0(void *this,byte param_1)

{
  Dtor_00bd0670(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION std__String__Constructor @ 00bd1ba0 ////

void __thiscall std__String__Constructor(void *this,int param_1)

{
  *(undefined ***)this = &PTR_LAB_00d9f10c;
  *(int *)((int)this + 4) = param_1;
  if (param_1 == 0) {
    *(undefined **)((int)this + 4) = PTR_lpClass_00d16914_00ea5100;
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00bd1bf0 @ 00bd1bf0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd1bf0(void *this,byte param_1)

{
  FUN_00bbb6b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_CommitLoadedBank @ 00bd1df0 ////

void __fastcall LH_CommitLoadedBank(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_ESI;
  int local_30 [3];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffa28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* build a small result/status object from the just-loaded bank */
  FUN_00bf94f0(local_30,param_2,param_1,param_3);
  local_20 = unaff_ESI[1];
  local_24 = *unaff_ESI;
                    /* pull 3 fields out of it */
  local_10 = *(undefined1 *)(unaff_ESI + 2);
  local_4 = 0;
  FUN_00bfad40(local_30);
  local_4 = 0xffffffff;
  FUN_00bf9520();
  ExceptionList = local_c;
                    /* commit using those fields, then cleanup */
  return;
}


//// FUNCTION FUN_00bd1e60 @ 00bd1e60 ////

uint __cdecl FUN_00bd1e60(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffa3a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bff5e0(local_20);
  local_4 = 0;
  FUN_00c00c90(param_1,param_2,(int)local_20);
  bVar1 = LH_CheckLoadStatus((int)local_20);
  local_4 = 0xffffffff;
  if (!bVar1) {
    uVar2 = FUN_00bff610((int)local_20);
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  uVar3 = FUN_00bff610((int)local_20);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION LH_GetFileSegmentBankInfo @ 00bd1ef0 ////

undefined4 __fastcall LH_GetFileSegmentBankInfo(void *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_38;
  undefined **local_34 [2];
  undefined1 local_2c [8];
  undefined4 local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffa5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = std__String__Constructor(local_2c,0xd9f148);
  local_4 = 0;
  bVar1 = CLHSegmentReader_HasSegment(param_1,uVar2);
  local_4 = 0xffffffff;
  if (bVar1) {
    uVar2 = std__String__Constructor(local_34,0xd9f148);
    local_4 = 1;
    piVar3 = (int *)CLHSegmentReader_GetCachedSegmentStream(param_1,uVar2);
    Ctor_vt00d9f52c_00bd9d60(local_24,piVar3);
    local_4 = CONCAT31(local_4._1_3_,3);
    local_34[0] = &PTR_LAB_00d9d9b4;
    uVar2 = PKDataReadCStreamer_Seek(local_24,0x208,0);
    if ((char)uVar2 != '\0') {
      iVar4 = FUN_00bd9f00((int)local_24);
      if (iVar4 == 0) {
        local_4 = 0xffffffff;
        Dtor_00bd9e50(local_24);
        ExceptionList = local_c;
        return 0;
      }
      local_38 = 0;
      uVar5 = LH_ReadFileData(local_24,&local_38,4);
      uVar2 = local_38;
      local_4 = 0xffffffff;
      if ((char)uVar5 != '\0') {
        Dtor_00bd9e50(local_24);
        ExceptionList = local_c;
        return uVar2;
      }
    }
    local_4 = 0xffffffff;
    Dtor_00bd9e50(local_24);
  }
  ExceptionList = local_c;
  return 0xffffffff;
}


//// FUNCTION FUN_00bd2010 @ 00bd2010 ////

void FUN_00bd2010(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  void *this;
  int unaff_ESI;
  undefined4 local_54 [18];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffa6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c05360(local_54);
  local_4 = 0;
  FUN_00c00c80(param_1,local_54,unaff_ESI);
  bVar1 = LH_CheckLoadStatus(unaff_ESI);
  if (bVar1) {
    cVar2 = FUN_00bd3df0(local_54,param_2);
    if (cVar2 == '\0') {
      this = LH_BeginErrorMessage(unaff_ESI);
      LH_LogErrorMessage(this,"There was a problem serialising the extracted meta data.");
    }
  }
  local_4 = 0xffffffff;
  FUN_00c05580((int)local_54);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bd20a0 @ 00bd20a0 ////

uint __cdecl FUN_00bd20a0(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cffa88;
  pvStack_c = ExceptionList;
  iVar4 = *param_1;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00bbf3a0(param_2);
  piVar3 = (int *)(**(code **)(iVar4 + 4))(iVar2);
  puStack_8 = (undefined1 *)0x0;
  uVar5 = 0;
  if (piVar3 != (int *)0x0) {
    FUN_00bff5e0(&stack0xffffffdc);
    puVar7 = &stack0xffffffdc;
    puStack_8._0_1_ = 1;
    iVar4 = FUN_00bbc3b0((int *)&stack0x00000000);
    FUN_00c00c80(iVar4,param_2,(int)puVar7);
    bVar1 = LH_CheckLoadStatus((int)&stack0xffffffdc);
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    if (bVar1) {
      FUN_00bff610((int)&stack0xffffffdc);
      puStack_8 = (undefined1 *)0xffffffff;
      uVar6 = (**(code **)(*piVar3 + 0xc))();
      ExceptionList = pvStack_10;
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
    FUN_00bff610((int)&stack0xffffffdc);
    puStack_8 = (undefined1 *)0xffffffff;
    uVar5 = (**(code **)(*piVar3 + 0xc))();
  }
  ExceptionList = pvStack_10;
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_00bd2170 @ 00bd2170 ////

uint __cdecl FUN_00bd2170(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cffaa2;
  pvStack_c = ExceptionList;
  iVar4 = *param_1;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00bbf3a0(param_2);
  piVar3 = (int *)(**(code **)(iVar4 + 4))(iVar2);
  puStack_8 = (undefined1 *)0x0;
  uVar5 = 0;
  if (piVar3 != (int *)0x0) {
    FUN_00bff5e0(&stack0xffffffdc);
    puStack_8._0_1_ = 1;
    iVar4 = FUN_00bbc3b0((int *)&stack0x00000000);
    FUN_00bd2010(iVar4,param_2);
    FUN_00bff660((int)&stack0xffffffdc);
    bVar1 = LH_CheckLoadStatus((int)&stack0xffffffdc);
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    if (bVar1) {
      FUN_00bff610((int)&stack0xffffffdc);
      puStack_8 = (undefined1 *)0xffffffff;
      uVar6 = (**(code **)(*piVar3 + 0xc))();
      ExceptionList = pvStack_10;
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
    FUN_00bff610((int)&stack0xffffffdc);
    puStack_8 = (undefined1 *)0xffffffff;
    uVar5 = (**(code **)(*piVar3 + 0xc))();
  }
  ExceptionList = pvStack_10;
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_00bd2250 @ 00bd2250 ////

int __fastcall FUN_00bd2250(undefined4 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_25;
  undefined4 *local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffac7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_24 = operator_new(0x48);
  local_4 = 0;
  if (local_24 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00c05360(local_24);
  }
  local_4 = 1;
  local_24 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    LH_Assert(&local_25,"data.IsValid ()\n");
    DebugBreak();
  }
  FUN_00bff5e0(local_20);
  puVar5 = local_20;
  local_4._0_1_ = 2;
  puVar3 = (undefined4 *)FUN_00bd4350((int *)&local_24);
  FUN_00c00c80(param_1,puVar3,(int)puVar5);
  bVar1 = LH_CheckLoadStatus((int)local_20);
  if (!bVar1) {
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00bff610((int)local_20);
    local_4 = 0xffffffff;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00c05580((int)puVar2);
                    /* WARNING: Subroutine does not return */
      _free(puVar2);
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar4 = FUN_00bd4420((int *)&local_24);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bff610((int)local_20);
  puVar2 = local_24;
  local_4 = 0xffffffff;
  if (local_24 != (undefined4 *)0x0) {
    FUN_00c05580((int)local_24);
                    /* WARNING: Subroutine does not return */
    _free(puVar2);
  }
  ExceptionList = local_c;
  return iVar4;
}


//// FUNCTION FUN_00bd2380 @ 00bd2380 ////

uint __fastcall FUN_00bd2380(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  void *local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffad9;
  local_c = ExceptionList;
  pvVar6 = ExceptionList;
  if (param_3 != 0) {
    ExceptionList = &local_c;
    local_14 = operator_new(param_3);
    local_10 = param_3;
    local_4 = 0;
    puVar3 = (undefined4 *)FUN_00bbc590(&local_14,0);
    for (uVar7 = param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    uVar7 = PKString_GetLength(param_2);
    if (param_3 < uVar7) {
      uVar7 = param_3;
    }
    puVar4 = (undefined4 *)FUN_00bbc590(&local_14,0);
    puVar3 = (undefined4 *)FUN_00bbf3a0(param_2);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    iVar1 = *param_1;
    iVar5 = FUN_00bbc590(&local_14,0);
    cVar2 = (**(code **)(iVar1 + 4))(iVar5,param_3);
    if (cVar2 != '\0') {
      if (local_14 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_14);
      }
      ExceptionList = local_c;
      return 1;
    }
    pvVar6 = (void *)0x0;
    if (local_14 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_14);
    }
  }
  ExceptionList = local_c;
  return (uint)pvVar6 & 0xffffff00;
}


//// FUNCTION FUN_00bd2490 @ 00bd2490 ////

bool __fastcall FUN_00bd2490(int *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = PKString_GetLength(param_2);
  if ((uVar2 != 0) && (uVar2 < 0x20)) {
    uVar2 = FUN_00bd2380(param_1,param_2,0x20);
    if ((char)uVar2 != '\0') {
      cVar1 = (**(code **)(*param_1 + 4))(&stack0x00000004,4);
      return cVar1 != '\0';
    }
  }
  return false;
}


//// FUNCTION FUN_00bd24e0 @ 00bd24e0 ////

undefined4 __thiscall FUN_00bd24e0(void *this,uint param_1)

{
  int iVar1;
  void *_Memory;
  int iVar2;
  uint uVar3;
  int *unaff_EDI;
  void *pvStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cffaeb;
  local_c = ExceptionList;
  if (param_1 == 0) {
    return CONCAT31((int3)((uint)ExceptionList >> 8),1);
  }
  ExceptionList = &local_c;
  _Memory = operator_new(param_1);
  uStack_10 = param_1;
  iVar1 = *(int *)this;
  uStack_4 = 0;
  uVar3 = param_1;
  pvStack_14 = _Memory;
  iVar2 = FUN_00bbc590(&pvStack_14,0);
  uVar3 = (**(code **)(iVar1 + 4))(iVar2,uVar3);
  if ((char)uVar3 != '\0') {
    iVar1 = *unaff_EDI;
    iVar2 = FUN_00bbc590(&stack0xffffffe4,0);
    uVar3 = (**(code **)(iVar1 + 4))(iVar2,param_1);
    if ((char)uVar3 != '\0') {
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      ExceptionList = pvStack_14;
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_14;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00bd251d @ 00bd251d ////

uint FUN_00bd251d(undefined4 param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *_Memory;
  int iVar2;
  uint uVar3;
  uint unaff_ESI;
  int *unaff_EDI;
  int *unaff_retaddr;
  undefined4 uStack0000001c;
  
  _Memory = operator_new(unaff_ESI);
  iVar1 = *unaff_EDI;
  uStack0000001c = 0;
  param_3 = _Memory;
  iVar2 = FUN_00bbc590(&param_3,0);
  uVar3 = (**(code **)(iVar1 + 4))(iVar2);
  if ((char)uVar3 != '\0') {
    iVar1 = *unaff_retaddr;
    iVar2 = FUN_00bbc590(&param_1,0);
    uVar3 = (**(code **)(iVar1 + 4))(iVar2);
    if ((char)uVar3 != '\0') {
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      ExceptionList = param_3;
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = param_3;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00bd25c0 @ 00bd25c0 ////

bool __fastcall FUN_00bd25c0(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined **local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffafd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = (int *)std__String__Constructor(local_14,0xd9f148);
  local_4 = 0;
  bVar1 = FUN_00bd2490(param_1,piVar2);
  local_4 = 0xffffffff;
  local_14[0] = &PTR_LAB_00d9d9b4;
  if (bVar1) {
    uVar3 = FUN_00bd2380(param_1,param_2,0x104);
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_00bd2380(param_1,param_3,0x104);
      ExceptionList = local_c;
      return (char)uVar3 != '\0';
    }
  }
  ExceptionList = local_c;
  return false;
}


//// FUNCTION LH_SaveGlobalProperties @ 00bd2670 ////

bool __fastcall LH_SaveGlobalProperties(int *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 local_18;
  undefined **local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffb0f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = LH_CountGlobalProperties(param_2,&local_18);
  if (cVar1 != '\0') {
    piVar3 = (int *)std__String__Constructor(local_14,0xd9f1bc);
    local_4 = 0;
    bVar2 = FUN_00bd2490(param_1,piVar3);
    local_4 = 0xffffffff;
    local_14[0] = &PTR_LAB_00d9d9b4;
    if (bVar2) {
      cVar1 = LH_WriteGlobalProperties(param_2,param_1);
      ExceptionList = local_c;
      return cVar1 != '\0';
    }
  }
  ExceptionList = local_c;
  return false;
}


//// FUNCTION FUN_00bd2710 @ 00bd2710 ////

int __fastcall FUN_00bd2710(int param_1,int param_2)

{
  void *this;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 0x2c);
  iVar3 = 0;
  uVar4 = 0;
  iVar1 = thunk_FUN_00bd3890((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = thunk_FUN_00bd4010(this,uVar4);
      if (*(int *)(iVar1 + 8) == param_2) {
        iVar3 = iVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = thunk_FUN_00bd3890((int)this);
    } while (uVar4 < uVar2);
  }
  return iVar3;
}


//// FUNCTION LH_SaveSampleBankTable @ 00bd2750 ////

undefined4 __fastcall LH_SaveSampleBankTable(int *param_1,int param_2,int param_3)

{
  void *this;
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint local_2bc [2];
  int *local_2b4;
  char local_2ad;
  int local_2ac;
  undefined4 auStack_2a8 [65];
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  int iStack_194;
  undefined4 uStack_190;
  undefined2 uStack_184;
  undefined2 uStack_182;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cffb24;
  local_14 = ExceptionList;
  this = (void *)(param_2 + 0x2c);
  ExceptionList = &local_14;
  local_2b4 = param_1;
  local_2ac = param_2;
  thunk_FUN_00bd3890((int)this);
  piVar2 = (int *)std__String__Constructor(local_2bc,0xd9f1d4);
  local_c = 0;
  bVar1 = FUN_00bd2490(local_2b4,piVar2);
  local_2ad = '\x01' - bVar1;
  uVar7 = CONCAT31(extraout_var,local_2ad);
  local_c = 0xffffffff;
  if (local_2ad == '\0') {
    uVar7 = 0;
    local_2bc[0] = 0;
    iVar3 = thunk_FUN_00bd3890((int)this);
    if (iVar3 != 0) {
      do {
        iVar3 = thunk_FUN_00bd4010(this,uVar7);
        if (*(short *)(iVar3 + 0x14) != 0) {
          local_2bc[0] = local_2bc[0] + 1;
        }
        uVar7 = uVar7 + 1;
        uVar4 = thunk_FUN_00bd3890((int)this);
      } while (uVar7 < uVar4);
    }
    uVar7 = thunk_FUN_00bd3890((int)this);
    local_2bc[0] = uVar7 & 0xffff | local_2bc[0] << 0x10;
    uVar7 = (**(code **)(*local_2b4 + 4))(local_2bc,4);
    if ((char)uVar7 != '\0') {
      local_2bc[0] = 0;
      iVar3 = thunk_FUN_00bd3890((int)this);
      uVar7 = 0;
      if (iVar3 != 0) {
        do {
          puVar5 = (undefined4 *)thunk_FUN_00bd4010((void *)(param_2 + 0x2c),local_2bc[0]);
          iVar3 = LH_SortedArray_FindObject_00bd4940((void *)(param_2 + 0x20),puVar5 + 2);
          uVar7 = 0;
          if (iVar3 == 0) goto LAB_00bd2b4f;
          puVar8 = auStack_2a8;
          for (iVar6 = 0xa3; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          FUN_00bd3c80(auStack_2a8,iVar3 + 4);
          iVar6 = local_2ac;
          uStack_1a4 = puVar5[1];
          uStack_1a0 = puVar5[2];
          uStack_19c = *(undefined4 *)(iVar3 + 0xc);
          iStack_198 = *(int *)(iVar3 + 0x10) - param_3;
          iStack_194 = FUN_00bd2710(local_2ac,puVar5[2]);
          uStack_190 = CONCAT22(*(undefined2 *)(puVar5 + 5),*(undefined2 *)((int)puVar5 + 0x16));
          uStack_182 = *(undefined2 *)(iVar3 + 0x14);
          uStack_180 = *(undefined4 *)(iVar3 + 0x18);
          uStack_184 = *(undefined2 *)(iVar3 + 0x16);
          uStack_170 = *(undefined4 *)(iVar3 + 0x1c);
          uStack_16c = *(undefined4 *)(iVar3 + 0x20);
          FUN_00bd3cf0(auStack_2a8,puVar5 + 3);
          uStack_68 = puVar5[6];
          if ((*(byte *)(puVar5 + 0xb) & 4) != 0) {
            uStack_30 = 1;
          }
          iStack_34 = ((*(byte *)(puVar5 + 0xb) >> 3 & 1) != 0) + 2;
          uStack_48 = (uint)*(ushort *)(puVar5 + 9);
          uVar7 = uStack_64 | 0x401;
          if ((*(byte *)(puVar5 + 0xb) & 0x10) != 0) {
            uStack_40 = puVar5[0xc];
            uVar7 = uStack_64 | 0x481;
          }
          uStack_64 = uVar7;
          if ((*(byte *)(puVar5 + 0xb) & 0x20) != 0) {
            uStack_3c = puVar5[0xd];
            uStack_64 = uStack_64 | 0x100;
          }
          if (puVar5[7] != 0) {
            uStack_64 = uStack_64 | 0x40;
            iStack_60 = puVar5[7];
          }
          uStack_44 = (uint)*(ushort *)((int)puVar5 + 0x2e);
          uStack_2c = puVar5[0xe];
          uStack_54 = (uint)*(ushort *)((int)puVar5 + 0x22);
          uStack_58 = (uint)*(ushort *)(puVar5 + 8);
          uVar7 = uStack_64 | 0xc;
          if ((*(byte *)(puVar5 + 0xb) & 1) != 0) {
            uStack_50 = uStack_50 | 1;
            uVar7 = uStack_64 | 0x1c;
          }
          uStack_64 = uVar7;
          if ((*(byte *)(puVar5 + 0xb) & 2) != 0) {
            uStack_64 = uStack_64 | 0x10;
            uStack_50 = uStack_50 | 2;
          }
          uVar7 = uStack_64 | 0x20;
          uStack_4c = uStack_4c & 0xffff0000 | (uint)(ushort)puVar5[10];
          if (*(short *)(puVar5 + 10) != *(short *)((int)puVar5 + 0x2a)) {
            uVar7 = uStack_64 | 0x1020;
            uStack_4c = puVar5[10];
          }
          uStack_64 = uVar7;
          uStack_38 = *puVar5;
          uVar7 = (**(code **)(*local_2b4 + 4))(auStack_2a8,0x28c);
          if ((char)uVar7 == '\0') goto LAB_00bd2b4f;
          uVar4 = local_2bc[0] + 1;
          local_2bc[0] = uVar4;
          uVar7 = thunk_FUN_00bd3890(iVar6 + 0x2c);
          param_2 = local_2ac;
        } while (uVar4 < uVar7);
      }
      ExceptionList = local_14;
      return CONCAT31((int3)(uVar7 >> 8),1);
    }
  }
LAB_00bd2b4f:
  ExceptionList = local_14;
  return uVar7 & 0xffffff00;
}


//// FUNCTION LH_LoadLUGAsset_AutoDetectFormat @ 00bd2b70 ////

void __thiscall LH_LoadLUGAsset_AutoDetectFormat(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  undefined **local_250 [2];
  undefined1 *local_248;
  char local_241;
  uint local_240;
  int local_23c [2];
  undefined1 local_234 [4];
  int local_230;
  int local_22c [6];
  undefined1 local_214 [8];
  undefined4 local_20c [6];
  undefined4 local_1f4 [18];
  undefined1 local_1ac [156];
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffb86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PKDiskBufferingCReader_Ctor(local_1ac,param_1,0x1000);
  local_4 = 0;
  PKDiskBufferingCReader_ResizeBuffer(local_1ac,0x1000);
  FUN_00bce860(local_250);
  local_248 = local_1ac;
  local_250[0] = &PTR_FUN_00d9f134;
  local_4._0_1_ = 1;
  Ctor_vt00d9f52c_00bd9d00(local_22c,(int *)local_250);
  local_4._0_1_ = 2;
  uVar3 = LH_VerifyLUGHeader(local_22c);
  if ((char)uVar3 == '\0') {
    pvVar4 = LH_BeginErrorMessage((int)this);
    LH_LogErrorMessage(pvVar4,"Could not verify LUG header");
    goto LAB_00bd2e0b;
  }
  local_110 = &PTR_LAB_00d9db7c;
  local_10c = 0;
  local_d = 0;
  local_4._0_1_ = 3;
  uVar3 = LH_GetFirstSegmentInfo(local_22c,&local_110);
  if ((char)uVar3 == '\0') {
    pvVar4 = LH_BeginErrorMessage((int)this);
    LH_LogErrorMessage(pvVar4,"Could not extract first segment details...");
  }
  else {
    FUN_00c05360(local_1f4);
    local_4._0_1_ = 4;
    piVar5 = (int *)std__String__Constructor(local_214,0xd9f254);
    local_4._0_1_ = 5;
    pbVar6 = (byte *)FUN_00bbf3a0(piVar5);
    iVar7 = FUN_00bbf680(&local_110,pbVar6);
    local_241 = '\x01' - (iVar7 != 0);
    local_4._0_1_ = 4;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 4;
    if (local_241 == '\0') {
      local_4._0_1_ = uVar1;
      FUN_00c00c80(param_1,local_1f4,(int)this);
      bVar2 = LH_CheckLoadStatus((int)this);
      if (bVar2) {
LAB_00bd2dd7:
        LH_CommitLoadedBank(param_2,local_1f4,this);
      }
    }
    else {
      Ctor_vt00d9e4b0_00bc12f0(local_23c,local_240);
      local_4._0_1_ = 6;
      if (local_230 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_00bbc590(local_234,0);
      }
      uVar3 = LH_ReadFileData(local_22c,iVar7,local_240);
      if ((char)uVar3 == '\0') {
        pvVar4 = LH_BeginErrorMessage((int)this);
        LH_LogErrorMessage(pvVar4,"Could not cache the META Data segment");
        local_4._0_1_ = 4;
        Dtor_00bc1280(local_23c);
      }
      else {
        Ctor_vt00d9f52c_00bd9d00(local_20c,local_23c);
        local_4._0_1_ = 7;
        LH_Archive_InitForLoading(local_214,local_20c);
        uVar8 = LH_DeserializeMetaDataSegment(local_1f4,local_214);
        if ((char)uVar8 != '\0') {
          local_4._0_1_ = 6;
          Dtor_00bd9e50(local_20c);
          local_4._0_1_ = 4;
          Dtor_00bc1280(local_23c);
          goto LAB_00bd2dd7;
        }
        pvVar4 = LH_BeginErrorMessage((int)this);
        LH_LogErrorMessage(pvVar4,"Could not serialise the META Data segment");
        local_4._0_1_ = 6;
        Dtor_00bd9e50(local_20c);
        local_4._0_1_ = 4;
        Dtor_00bc1280(local_23c);
      }
    }
    local_4._0_1_ = 3;
    FUN_00c05580((int)local_1f4);
  }
  local_110 = &PTR_LAB_00d9d9b4;
LAB_00bd2e0b:
  local_4._0_1_ = 1;
  Dtor_00bd9e50(local_22c);
  local_250[0] = &PTR_FUN_00d9f134;
  local_4 = (uint)local_4._1_3_ << 8;
  PKDataReadCAccess_Dtor(local_250);
  local_4 = 0xffffffff;
  Dtor_00c081b0(local_1ac);
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_LoadMetFile @ 00bd2e70 ////

void __fastcall LH_LoadMetFile(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *_Memory;
  void *this;
  int iVar1;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffb98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  _Memory = (undefined4 *)FUN_00bd5370(param_1);
  local_4 = 0;
  local_10 = _Memory;
  if (_Memory == (undefined4 *)0x0) {
    this = LH_BeginErrorMessage(param_2);
    LH_LogErrorMessage(this,"Could not load from file");
    ExceptionList = local_c;
    return;
  }
                    /* process the loaded blob */
  iVar1 = FUN_00bd4350((int *)&local_10);
  LH_CommitLoadedBank(param_3,iVar1,param_2);
  local_4 = 0xffffffff;
  FUN_00c05580((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION LH_LoadBank @ 00bd2f10 ////

void __fastcall LH_LoadBank(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  void *unaff_EBX;
  int *unaff_EDI;
  undefined4 unaff_retaddr;
  undefined **ppuStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_13;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cffbb2;
  pvStack_c = ExceptionList;
  iVar4 = *param_1;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00bbf3a0(unaff_EDI);
  piVar2 = (int *)(**(code **)(iVar4 + 4))(iVar1);
  puStack_8 = (undefined1 *)0x0;
  if (piVar2 == (int *)0x0) {
    pvVar3 = LH_BeginErrorMessage((int)unaff_EBX);
    LH_LogErrorMessage(pvVar3,"Could not open ");
    FUN_00bbf750(pvVar3,unaff_EDI);
    ExceptionList = pvStack_10;
    return;
  }
  ppuStack_20 = &PTR_LAB_00d9dd5c;
  uStack_1c = 0;
  uStack_13 = 0;
  puStack_8 = (undefined1 *)0x1;
  FUN_00bbfb30(unaff_EDI,4,(int *)&ppuStack_20);
  iVar4 = FUN_00bbf6e0(&ppuStack_20,".lug");
  if (iVar4 == 0) {
    iVar4 = FUN_00bbc3b0((int *)&stack0xffffffdc);
    LH_LoadLUGAsset_AutoDetectFormat(unaff_EBX,iVar4,unaff_retaddr);
  }
  else {
    iVar4 = FUN_00bbf6e0(&ppuStack_20,".met");
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)FUN_00bbc3b0((int *)&stack0xffffffdc);
      LH_LoadMetFile(puVar5,(int)unaff_EBX,unaff_retaddr);
    }
    else {
      pvVar3 = LH_BeginErrorMessage((int)unaff_EBX);
      LH_LogErrorMessage(pvVar3,"This bank is not a recognised format (.lug, .met)");
    }
  }
  ppuStack_20 = &PTR_LAB_00d9d9b4;
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar2 + 0xc))();
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION LH_TryLoadBank @ 00bd3040 ////

uint __fastcall LH_TryLoadBank(int *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffbc4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bff5e0(local_20);
  local_4 = 0;
  LH_LoadBank(param_1);
  FUN_00bff660((int)local_20);
  bVar1 = LH_CheckLoadStatus((int)local_20);
  local_4 = 0xffffffff;
  if (!bVar1) {
    uVar2 = FUN_00bff610((int)local_20);
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  uVar3 = FUN_00bff610((int)local_20);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION LH_SaveBankCriteriaInfo @ 00bd30e0 ////

undefined4 __fastcall LH_SaveBankCriteriaInfo(int *param_1,int param_2)

{
  void *this;
  bool bVar1;
  char extraout_AL;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint3 extraout_var;
  uint3 extraout_var_00;
  void *pvVar5;
  uint3 extraout_var_01;
  uint3 uVar6;
  uint uVar7;
  uint uVar8;
  uint local_30 [2];
  int *local_28 [2];
  undefined1 local_20 [12];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cffbde;
  local_14 = ExceptionList;
  this = (void *)(param_2 + 0x38);
  uVar7 = 0;
  local_30[0] = 0;
  ExceptionList = &local_14;
  local_28[0] = param_1;
  iVar3 = thunk_FUN_00bd38a0((int)this);
  if (iVar3 != 0) {
    do {
      piVar4 = (int *)thunk_FUN_00bd4040(this,uVar7);
      uVar8 = 0;
      if (piVar4[3] != 0) {
        do {
          FUN_00bd4820(piVar4 + 2,uVar8);
          PKString_GetLength(piVar4);
          uVar8 = uVar8 + 1;
          uVar7 = local_30[0];
        } while (uVar8 < (uint)piVar4[3]);
      }
      uVar7 = uVar7 + 1;
      local_30[0] = uVar7;
      uVar8 = thunk_FUN_00bd38a0((int)this);
      param_1 = local_28[0];
    } while (uVar7 < uVar8);
  }
  piVar4 = (int *)std__String__Constructor(local_30,0xd9f32c);
  local_c = 0;
  bVar1 = FUN_00bd2490(param_1,piVar4);
  local_c = 0xffffffff;
  uVar6 = extraout_var;
  if (bVar1) {
    FUN_00be63a0(local_20,param_1);
    LH_Archive_TransferU32((int)local_20);
    uVar6 = extraout_var_00;
    if (extraout_AL != '\0') {
      uVar7 = 0;
      local_30[0] = 0;
      iVar3 = thunk_FUN_00bd38a0((int)this);
      if (iVar3 == 0) {
        ExceptionList = local_14;
        return 1;
      }
      do {
        iVar3 = thunk_FUN_00bd4040(this,uVar7);
        uVar8 = 0;
        if (*(int *)(iVar3 + 0xc) != 0) {
          do {
            pvVar5 = (void *)FUN_00bd4820((void *)(iVar3 + 8),uVar8);
            Ctor_vt00d9feb8_00be2070(local_28,iVar3);
            local_c = 1;
            if (uVar8 != 0) {
              LH_LogErrorMessage(local_28,"SUB");
              LH_PrintResourceID(local_28,uVar8 + 1);
            }
            bVar1 = LH_Archive_SerializeString((int)local_20,(int *)local_28);
            if (!bVar1) {
LAB_00bd32df:
              local_c = 0xffffffff;
              PKStringsCHeapString_Dtor(local_28);
              uVar6 = extraout_var_01;
              goto LAB_00bd32e4;
            }
            cVar2 = FUN_00bd5530((uint)local_20,pvVar5);
            local_c = 0xffffffff;
            if (cVar2 == '\0') goto LAB_00bd32df;
            PKStringsCHeapString_Dtor(local_28);
            uVar8 = uVar8 + 1;
            uVar7 = local_30[0];
          } while (uVar8 < *(uint *)(iVar3 + 0xc));
        }
        uVar7 = uVar7 + 1;
        local_30[0] = uVar7;
        uVar8 = thunk_FUN_00bd38a0((int)this);
        if (uVar8 <= uVar7) {
          ExceptionList = local_14;
          return CONCAT31((int3)(uVar8 >> 8),1);
        }
      } while( true );
    }
  }
LAB_00bd32e4:
  ExceptionList = local_14;
  return (uint)uVar6 << 8;
}


//// FUNCTION LH_SaveRLMParamsSegment @ 00bd3300 ////

uint __fastcall LH_SaveRLMParamsSegment(int *param_1,int param_2)

{
  void *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  char local_39;
  undefined **local_38 [2];
  int *local_30;
  undefined4 local_2c;
  undefined1 local_28 [12];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffc13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_30 = param_1;
  LH_Array_Constructor(&local_2c);
  uVar8 = 0;
  local_4 = 0;
  Ctor_vt00d9f160_00bd3e30(local_1c);
  this = (void *)(param_2 + 0x2c);
  local_4._0_1_ = 1;
  iVar3 = thunk_FUN_00bd3890((int)this);
  if (iVar3 != 0) {
    do {
      iVar3 = thunk_FUN_00bd4010(this,uVar8);
      if ((*(byte *)(iVar3 + 0x2c) & 0x40) != 0) {
        local_38[0] = operator_new(0x10);
        local_4._0_1_ = 2;
        if (local_38[0] == (undefined **)0x0) {
          ppuVar4 = (undefined **)0x0;
        }
        else {
          ppuVar4 = (undefined **)FUN_00c071e0(local_38[0]);
        }
        local_4._0_1_ = 3;
        local_38[0] = ppuVar4;
        if (ppuVar4 == (undefined **)0x0) {
          LH_Assert(&local_39,"params.IsValid ()\n");
          DebugBreak();
        }
        *ppuVar4 = *(undefined **)(iVar3 + 4);
        ppuVar4[2] = *(undefined **)(iVar3 + 0x40);
        ppuVar4[1] = *(undefined **)(iVar3 + 0x3c);
        ppuVar4[3] = *(undefined **)(iVar3 + 0x44);
        iVar3 = FUN_00bd44f0((int *)local_38);
        LH_Container_AddObject_00bd5540(local_1c,iVar3);
        local_4._0_1_ = 1;
        if (local_38[0] != (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_38[0]);
        }
      }
      uVar8 = uVar8 + 1;
      uVar5 = thunk_FUN_00bd3890((int)this);
      param_1 = local_30;
    } while (uVar8 < uVar5);
  }
  thunk_FUN_00bd5790(local_28,local_1c);
  cVar1 = FUN_00bd4a30(&local_2c,&local_30);
  if (cVar1 != '\0') {
    piVar6 = (int *)std__String__Constructor(local_38,0xd9f344);
    local_4._0_1_ = 4;
    bVar2 = FUN_00bd2490(param_1,piVar6);
    local_39 = '\x01' - bVar2;
    local_4._0_1_ = 1;
    local_38[0] = &PTR_LAB_00d9d9b4;
    if (local_39 == '\0') {
      cVar1 = FUN_00bd3e60(&local_2c,param_1);
      local_4 = (uint)local_4._1_3_ << 8;
      if (cVar1 != '\0') {
        Dtor_00bd3e50(local_1c);
        local_4 = 0xffffffff;
        uVar7 = LH_Array_Destructor((int)&local_2c);
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      }
      goto LAB_00bd3462;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
LAB_00bd3462:
  Dtor_00bd3e50(local_1c);
  local_4 = 0xffffffff;
  uVar8 = LH_Array_Destructor((int)&local_2c);
  ExceptionList = local_c;
  return uVar8 & 0xffffff00;
}


//// FUNCTION LH_BuildLUGAsset @ 00bd34d0 ////

bool __cdecl LH_BuildLUGAsset(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  void *pvVar16;
  undefined4 *unaff_retaddr;
  int aiStack_3c [2];
  undefined1 auStack_34 [8];
  undefined4 auStack_2c [6];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
  piVar1 = param_3;
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_00cffc4d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = (**(code **)(*param_3 + 8))();
  std__String__Constructor(aiStack_3c,0xd9f384);
  iVar8 = *piVar1;
  iVar14 = 0;
  pvStack_4 = (void *)0x0;
  iVar5 = PKString_GetLength(aiStack_3c);
  iVar6 = FUN_00bbf3a0(aiStack_3c);
  cVar2 = (**(code **)(iVar8 + 4))(iVar6,iVar5);
  if ((cVar2 != '\0') && (cVar2 = FUN_00bd4ab0(pvStack_4,&param_1), cVar2 != '\0')) {
    piVar7 = (int *)std__String__Constructor(&stack0xffffffb4,0xd9f254);
    iVar8 = param_1;
    pvStack_c._0_1_ = 1;
    bVar3 = FUN_00bd2490(piVar1,piVar7);
    param_1 = CONCAT31(param_1._1_3_,'\x01' - bVar3);
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    if ((char)('\x01' - bVar3) == '\0') {
      iVar5 = (**(code **)(*piVar1 + 8))();
      param_1 = iVar5 + 0x24 + (iVar8 - iVar4);
      pvVar16 = (void *)((int)pvStack_4 + 0x20);
      uVar15 = 0;
      iVar8 = LH_Array_GetCount((int)pvVar16);
      if (iVar8 != 0) {
        do {
          iVar8 = thunk_FUN_00bd3ed0(pvVar16,uVar15);
          if (*(int *)(iVar8 + 0x10) != 0) {
            ExceptionList = pvStack_14;
            return false;
          }
          if (*(int *)(iVar8 + 0xc) == 0) {
            ExceptionList = pvStack_14;
            return false;
          }
          iVar4 = param_1 + iVar14;
          iVar14 = iVar14 + *(int *)(iVar8 + 0xc);
          *(int *)(iVar8 + 0x10) = iVar4;
          uVar15 = uVar15 + 1;
          uVar9 = LH_Array_GetCount((int)pvVar16);
        } while (uVar15 < uVar9);
      }
      cVar2 = FUN_00bd3df0(pvStack_4,piVar1);
      if (cVar2 != '\0') {
        piVar7 = (int *)std__String__Constructor(&stack0xffffffb4,0xd9f374);
        pvStack_c._0_1_ = 2;
        bVar3 = FUN_00bd2490(piVar1,piVar7);
        param_1 = CONCAT31(param_1._1_3_,'\x01' - bVar3);
        pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
        if ((char)('\x01' - bVar3) == '\0') {
          iVar8 = (**(code **)(*piVar1 + 8))();
          uVar15 = 0;
          iVar4 = LH_Array_GetCount((int)pvVar16);
          if (iVar4 != 0) {
            do {
              puVar10 = (undefined4 *)thunk_FUN_00bd3ed0(pvVar16,uVar15);
              Ctor_vt00d9f52c_00bd9f70(auStack_2c);
              pvStack_c._0_1_ = 3;
              cVar2 = (**(code **)*unaff_retaddr)(*puVar10,auStack_2c);
              if (cVar2 == '\0') {
                pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
LAB_00bd373d:
                Dtor_00bd9e50(auStack_2c);
                ExceptionList = pvStack_14;
                return false;
              }
              uVar9 = puVar10[3];
              uVar11 = FUN_00bd9f00((int)auStack_2c);
              if (uVar11 != uVar9) {
                pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
                Dtor_00bd9e50(auStack_2c);
                ExceptionList = pvStack_14;
                return false;
              }
              uVar12 = FUN_00bd24e0(auStack_2c,uVar9);
              pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
              if ((char)uVar12 == '\0') goto LAB_00bd373d;
              Dtor_00bd9e50(auStack_2c);
              uVar15 = uVar15 + 1;
              uVar9 = LH_Array_GetCount((int)pvVar16);
            } while (uVar15 < uVar9);
          }
          piVar7 = (int *)std__String__Constructor(aiStack_3c,0xd67d30);
          pvStack_c._0_1_ = 4;
          piVar13 = (int *)std__String__Constructor(auStack_34,0xd67d30);
          pvStack_c._0_1_ = 5;
          bVar3 = FUN_00bd25c0(piVar1,piVar13,piVar7);
          pvVar16 = pvStack_4;
          param_1 = CONCAT31(param_1._1_3_,'\x01' - bVar3);
          pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
          if (((((char)('\x01' - bVar3) == '\0') &&
               (bVar3 = LH_SaveGlobalProperties(piVar1,pvStack_4), bVar3)) &&
              (uVar12 = LH_SaveBankCriteriaInfo(piVar1,(int)pvVar16), (char)uVar12 != '\0')) &&
             (uVar12 = LH_SaveRLMParamsSegment(piVar1,(int)pvVar16), (char)uVar12 != '\0')) {
            uVar12 = LH_SaveSampleBankTable(piVar1,(int)pvVar16,iVar8);
            ExceptionList = pvStack_14;
            return (char)uVar12 != '\0';
          }
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return false;
}


//// FUNCTION FUN_00bd37f0 @ 00bd37f0 ////

void __fastcall FUN_00bd37f0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00bd3810 @ 00bd3810 ////

void * __thiscall ScalarDeletingDtor_00bd3810(void *this,byte param_1)

{
  FUN_00c05580((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_Array_GetAt_00bd3830 @ 00bd3830 ////

undefined4 __thiscall LH_Array_GetAt_00bd3830(void *this,uint param_1)

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


//// FUNCTION LH_Array_GetCount @ 00bd3870 ////

undefined4 __fastcall LH_Array_GetCount(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION SetVtable_00d9d9ac_00bd3880 @ 00bd3880 ////

void __fastcall SetVtable_00d9d9ac_00bd3880(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9ac;
  return;
}


//// FUNCTION GetField_8_00bd3890 @ 00bd3890 ////

undefined4 __fastcall GetField_8_00bd3890(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION GetField_8_00bd38a0 @ 00bd38a0 ////

undefined4 __fastcall GetField_8_00bd38a0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_00bd38b0 @ 00bd38b0 ////

void __fastcall FUN_00bd38b0(void *param_1,void *param_2)

{
  LH_DeserializeMetaDataSegment(param_2,param_1);
  return;
}


//// FUNCTION LH_SerializeGlobalProperties_Thunk @ 00bd38c0 ////

void __fastcall LH_SerializeGlobalProperties_Thunk(int param_1,void *param_2)

{
  LH_SerializeGlobalProperties(param_2,param_1);
  return;
}


//// FUNCTION LH_Array_ZeroHeader @ 00bd38d0 ////

void __fastcall LH_Array_ZeroHeader(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00bd38e0 @ 00bd38e0 ////

void __fastcall LH_Array_FreeBuffer_00bd38e0(undefined4 *param_1)

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


//// FUNCTION FUN_00bd3940 @ 00bd3940 ////

void __fastcall FUN_00bd3940(int param_1,void *param_2)

{
  FUN_00c07320(param_2,param_1);
  return;
}


//// FUNCTION GetField_8_00bd3950 @ 00bd3950 ////

undefined4 __fastcall GetField_8_00bd3950(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION LH_Array_GetAt_00bd3960 @ 00bd3960 ////

undefined4 __thiscall LH_Array_GetAt_00bd3960(void *this,uint param_1)

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


//// FUNCTION LH_Array_GetAt_00bd39a0 @ 00bd39a0 ////

undefined4 __thiscall LH_Array_GetAt_00bd39a0(void *this,uint param_1)

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


//// FUNCTION LH_Array_Reserve_00bd39e0 @ 00bd39e0 ////

void __thiscall LH_Array_Reserve_00bd39e0(void *this,uint param_1)

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


//// FUNCTION FUN_00bd3aa0 @ 00bd3aa0 ////

void __fastcall FUN_00bd3aa0(undefined4 *param_1,undefined4 *param_2)

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


//// FUNCTION FUN_00bd3b30 @ 00bd3b30 ////

void __fastcall FUN_00bd3b30(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00bd3bd0 @ 00bd3bd0 ////

int * __thiscall FUN_00bd3bd0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 8))(param_1);
  return this;
}


//// FUNCTION Ctor_vt00d9f134_00bd3bf0 @ 00bd3bf0 ////

undefined4 * __thiscall Ctor_vt00d9f134_00bd3bf0(void *this,undefined4 param_1)

{
  FUN_00bce860(this);
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_FUN_00d9f134;
  return this;
}


//// FUNCTION Dtor_00bd3c10 @ 00bd3c10 ////

void __fastcall Dtor_00bd3c10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9f134;
  PKDataReadCAccess_Dtor(param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bd3c60 @ 00bd3c60 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd3c60(void *this,byte param_1)

{
  Dtor_00bd3c10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bd3c80 @ 00bd3c80 ////

void __thiscall FUN_00bd3c80(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_18 [2];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffc68;
  pvStack_c = ExceptionList;
  puVar2 = this;
  ExceptionList = &pvStack_c;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  Ctor_vt00d9e214_00bc0130(local_18,(int)this,0x104);
  local_4 = 0;
  (**(code **)(local_18[0] + 8))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  SetVtable_00d9d9b4_00bc00d0((undefined4 *)&stack0xffffffe4);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bd3cf0 @ 00bd3cf0 ////

void __thiscall FUN_00bd3cf0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_18 [2];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffc88;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)((int)this + 0x140);
  ExceptionList = &pvStack_c;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  Ctor_vt00d9e214_00bc0130(local_18,(int)this + 0x140,0x100);
  local_4 = 0;
  (**(code **)(local_18[0] + 8))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  SetVtable_00d9d9b4_00bc00d0((undefined4 *)&stack0xffffffe4);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bd3d70 @ 00bd3d70 ////

void __fastcall FUN_00bd3d70(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00bd3d90 @ 00bd3d90 ////

void __fastcall FUN_00bd3d90(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_00c05580((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bd3df0 @ 00bd3df0 ////

void __fastcall FUN_00bd3df0(void *param_1,undefined4 param_2)

{
  undefined1 local_8 [8];
  
  FUN_00be63a0(local_8,param_2);
  FUN_00bd38b0(local_8,param_1);
  return;
}


//// FUNCTION LH_WriteGlobalProperties @ 00bd3e10 ////

void __fastcall LH_WriteGlobalProperties(void *param_1,undefined4 param_2)

{
  undefined1 local_8 [8];
  
  FUN_00be63a0(local_8,param_2);
  LH_SerializeGlobalProperties_Thunk((int)local_8,param_1);
  return;
}


//// FUNCTION Ctor_vt00d9f160_00bd3e30 @ 00bd3e30 ////

undefined4 * __fastcall Ctor_vt00d9f160_00bd3e30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9f160;
  LH_Array_ZeroHeader(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00bd3e50 @ 00bd3e50 ////

void __fastcall Dtor_00bd3e50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9f160;
  LH_Array_FreeBuffer_00bd38e0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bd3e60 @ 00bd3e60 ////

void __fastcall FUN_00bd3e60(void *param_1,undefined4 param_2)

{
  undefined1 local_8 [8];
  
  FUN_00be63a0(local_8,param_2);
  FUN_00bd3940((int)local_8,param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bd3e80 @ 00bd3e80 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd3e80(void *this,byte param_1)

{
  Dtor_00bd3e50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bd3ea0 @ 00bd3ea0 ////

void __fastcall Dtor_00bd3ea0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9e4b0;
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  PKDataReadCAccess_Dtor(param_1);
  return;
}


//// FUNCTION LH_Map_GetObject_00bd3ed0 @ 00bd3ed0 ////

int __thiscall LH_Map_GetObject_00bd3ed0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = LH_Array_GetAt_00bd3830(this,param_1);
  if (iVar1 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar1;
}


//// FUNCTION FUN_00bd3f20 @ 00bd3f20 ////

int __thiscall FUN_00bd3f20(void *this,uint *param_1,undefined1 *param_2)

{
  uint *puVar1;
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
      puVar1 = *(uint **)(*(int *)this + iVar4 * 4);
      if (puVar1 == (uint *)0x0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
        this = local_4;
      }
      uVar2 = *puVar1;
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
  puVar1 = *(uint **)(*(int *)this + iVar3 * 4);
  if (puVar1 == (uint *)0x0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  if (*puVar1 <= *param_1) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


//// FUNCTION ScalarDeletingDtor_00bd3ff0 @ 00bd3ff0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd3ff0(void *this,byte param_1)

{
  SetVtable_00d9d9ac_00bd3880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_Map_GetObject_00bd4010 @ 00bd4010 ////

int __thiscall LH_Map_GetObject_00bd4010(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = LH_Array_GetAt_00bd3960(this,param_1);
  if (iVar1 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar1;
}


//// FUNCTION LH_Map_GetObject_00bd4040 @ 00bd4040 ////

int __thiscall LH_Map_GetObject_00bd4040(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = LH_Array_GetAt_00bd39a0(this,param_1);
  if (iVar1 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar1;
}


//// FUNCTION FUN_00bd4070 @ 00bd4070 ////

void __thiscall FUN_00bd4070(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00bd39e0(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00bd40b0 @ 00bd40b0 ////

uint __fastcall FUN_00bd40b0(int *param_1)

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


//// FUNCTION FUN_00bd4110 @ 00bd4110 ////

void __thiscall FUN_00bd4110(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00bd4070(this,param_1[2]);
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


//// FUNCTION FUN_00bd41c0 @ 00bd41c0 ////

void __fastcall FUN_00bd41c0(int *param_1,int *param_2,int *param_3)

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


//// FUNCTION FUN_00bd4290 @ 00bd4290 ////

void __fastcall FUN_00bd4290(int param_1,int param_2,int param_3,uint *param_4)

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


//// FUNCTION FUN_00bd4320 @ 00bd4320 ////

void __fastcall FUN_00bd4320(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_00c05580((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bd4350 @ 00bd4350 ////

int __fastcall FUN_00bd4350(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cffcab;
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


//// FUNCTION FUN_00bd4420 @ 00bd4420 ////

int __fastcall FUN_00bd4420(int *param_1)

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
  
  puStack_8 = &LAB_00cffccb;
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


