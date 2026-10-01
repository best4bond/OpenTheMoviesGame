//// FUNCTION FUN_00c8c4e0 @ 00c8c4e0 ////

undefined4 FUN_00c8c4e0(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + -100);
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(param_1 + -200) != 0) && (1 < *(int *)(param_1 + 0x44))) {
    uVar1 = *(int *)(param_1 + 0x44) - 1;
    uVar2 = __alldiv(*(uint *)(param_1 + 0x48),*(uint *)(param_1 + 0x4c),uVar1,(int)uVar1 >> 0x1f);
    *param_2 = (int)uVar2;
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *param_2 = 0;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


//// FUNCTION Math_IntegerSqrt @ 00c8c550 ////

int Math_IntegerSqrt(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x40000000 < param_1) {
    return 0x8000;
  }
  if (1 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 * iVar1 < param_1);
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = (iVar1 * iVar1 + param_1) / (iVar1 * 2);
  if ((-1 < iVar1) && (iVar1 = (iVar1 * iVar1 + param_1) / (iVar1 * 2), -1 < iVar1)) {
    iVar1 = (iVar1 * iVar1 + param_1) / (iVar1 * 2);
  }
  return iVar1;
}


//// FUNCTION FUN_00c8c5c0 @ 00c8c5c0 ////

undefined4 __thiscall
FUN_00c8c5c0(void *this,uint param_1,int *param_2,uint param_3,int param_4,uint param_5,uint param_6
            )

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06178;
  local_c = ExceptionList;
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  local_4 = 0;
  if ((*(int *)((int)this + 0x18) == 0) || ((int)param_1 < 2)) {
    *param_2 = 0;
  }
  else {
    lVar2 = Math_Divide64bit(param_5,param_6,param_5,param_6,param_1,(int)param_1 >> 0x1f,0,0);
    uVar3 = __alldiv(param_3 - (uint)lVar2,
                     (param_4 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_3 < (uint)lVar2),
                     param_1 - 1,(int)(param_1 - 1) >> 0x1f);
    iVar1 = Math_IntegerSqrt((int)uVar3);
    *param_2 = iVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00c8c780 @ 00c8c780 ////

void FUN_00c8c780(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *unaff_ESI;
  
  puVar1 = param_2;
  if ((param_2 == (undefined4 *)0x0) && (param_1[0xd] != 0)) {
    (**(code **)*param_1)(param_1,&riid_00daf4dc,&param_2);
    FUN_00c8de20(param_1 + -3,0x15,unaff_ESI,0);
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  Audio_SetDeviceSource((int)param_1,puVar1,param_3);
  return;
}


//// FUNCTION Ctor_vt00dada30_00c8c830 @ 00c8c830 ////

undefined4 * __thiscall
Ctor_vt00dada30_00c8c830(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d061ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c929e0(this,param_2,param_3,(LPCRITICAL_SECTION)((int)this + 0x7c),param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FileFormat_DispatchFormat_00dada30;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00dad9f0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00dad9dc;
  *(undefined4 *)((int)this + 0x50) = 0;
  Wrap_CreateEventA_00c93a60((void *)((int)this + 0x54),0);
  local_4._0_1_ = 1;
  Wrap_CreateEventA_00c93a60((void *)((int)this + 0x58),1);
  local_4 = CONCAT31(local_4._1_3_,2);
  Wrap_CreateEventA_00c93a60((undefined4 *)((int)this + 0x5c),1);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 1;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc4));
  SetEvent(*(HANDLE *)((int)this + 0x5c));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Dtor_00c8c970 @ 00c8c970 ////

void __fastcall Dtor_00c8c970(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d06210;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FileFormat_DispatchFormat_00dada30;
  param_1[3] = (int)&PTR_FUN_00dad9f0;
  param_1[4] = (int)&PTR_LAB_00dad9dc;
  local_4 = 6;
  FUN_00c8b4d0(param_1);
  FUN_00c8b290((int)param_1);
  if (param_1[0x14] != 0) {
    (**(code **)(*(int *)(param_1[0x14] + 8) + 0xc))(1);
    param_1[0x14] = 0;
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 0xc))(1);
    param_1[0x1e] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  local_4._0_1_ = 2;
  Wrap_CloseHandle_00c93a80(param_1 + 0x17);
  local_4._0_1_ = 1;
  Wrap_CloseHandle_00c93a80(param_1 + 0x16);
  local_4 = (uint)local_4._1_3_ << 8;
  Wrap_CloseHandle_00c93a80(param_1 + 0x15);
  local_4 = 0xffffffff;
  FUN_00c90d30((int)param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c8ca50 @ 00c8ca50 ////

undefined4 __thiscall FUN_00c8ca50(void *this,undefined4 param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  void *local_18;
  LPCRITICAL_SECTION local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06233;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc4);
  ExceptionList = &pvStack_c;
  local_14 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)((int)this + 0x50);
  local_4 = 0;
  if (iVar2 == 0) {
    local_18 = (void *)0x0;
    this_00 = operator_new(0x50);
    local_4._0_1_ = 1;
    local_10 = this_00;
    if (this_00 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar2 = (**(code **)(*(int *)this + 0x1c))(0);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + 0xc;
      }
      puVar3 = Ctor_vt00db1878_00c99790(this_00,0,*(int *)((int)this + 4),&local_18,iVar2);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *(undefined4 **)((int)this + 0x50) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = pvStack_c;
      return 0x8007000e;
    }
    if ((int)local_18 < 0) {
      (**(code **)(puVar3[2] + 0xc))(1);
      *(undefined4 *)((int)this + 0x50) = 0;
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_10;
      return 0x80004002;
    }
    uVar1 = (**(code **)(*(int *)this + 0x24))(param_1,param_2);
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(iVar2 + 8))(iVar2 + 8,param_1,param_2);
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_18;
  return uVar1;
}


//// FUNCTION Audio_WaitForBufferEvent @ 00c8cbb0 ////

undefined4 __fastcall Audio_WaitForBufferEvent(int *param_1)

{
  DWORD DVar1;
  HANDLE local_8;
  int local_4;
  
  local_4 = param_1[0x15];
  local_8 = (HANDLE)param_1[0x16];
  (**(code **)(*param_1 + 0x48))();
  do {
    DVar1 = WaitForMultipleObjects(2,&local_8,0,10000);
  } while (DVar1 == 0x102);
  (**(code **)(*param_1 + 0x4c))();
  if (DVar1 == 0) {
    return 0x80040223;
  }
  param_1[0x1a] = 0;
  return 0;
}


//// FUNCTION FUN_00c8cc20 @ 00c8cc20 ////

undefined4 FUN_00c8cc20(int param_1,uint param_2,undefined4 *param_3)

{
  DWORD DVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  DVar1 = LH_DirectShow_MessagePump(*(HANDLE *)(param_1 + 0x50),param_2,(HWND)0x0,0,0);
  if (DVar1 == 0x102) {
    *param_3 = *(undefined4 *)(param_1 + 8);
    return 0x40237;
  }
  *param_3 = *(undefined4 *)(param_1 + 8);
  return 0;
}


//// FUNCTION FUN_00c8cc70 @ 00c8cc70 ////

undefined4 __thiscall FUN_00c8cc70(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)this + 0x78) + 0x18) != 0) {
    if (*(int *)((int)this + 0x70) == 1) {
      SetEvent(*(HANDLE *)((int)this + 0x5c));
      return 0;
    }
    iVar1 = (**(code **)(*(int *)this + 0xa0))();
    if ((iVar1 != 1) || (param_1 == 0)) {
      ResetEvent(*(HANDLE *)((int)this + 0x5c));
      return 1;
    }
  }
  SetEvent(*(HANDLE *)((int)this + 0x5c));
  return 0;
}


//// FUNCTION CAudioBank_Stop @ 00c8cdb0 ////

int CAudioBank_Stop(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06268;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 1) {
    iVar3 = (**(code **)(*(int *)(param_1 + -0xc) + 0x30))(1);
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x6c) + 0x18) == 0) {
      *(undefined4 *)(param_1 + 8) = 1;
      iVar3 = (**(code **)(*(int *)(param_1 + -0xc) + 0x30))(1);
    }
    else {
      iVar3 = FUN_00c90f50(param_1);
      if (-1 < iVar3) {
        piVar1 = (int *)(param_1 + -0xc);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
        *(undefined4 *)(param_1 + 0xa4) = 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
        (**(code **)(*piVar1 + 0x80))();
        (**(code **)(*piVar1 + 0x28))(1);
        (**(code **)(*piVar1 + 0x6c))();
        if (*(UINT *)(param_1 + 0xb4) != 0) {
          timeKillEvent(*(UINT *)(param_1 + 0xb4));
          *(undefined4 *)(param_1 + 0xb4) = 0;
        }
        piVar2 = *(int **)(*(int *)(param_1 + 0x6c) + 0x9c);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x14))(piVar2);
        }
        if (unaff_retaddr == 0) {
          *(undefined4 *)(param_1 + 0x54) = 0;
          (**(code **)(*piVar1 + 0x70))();
        }
        iVar3 = (**(code **)(*piVar1 + 0x30))(unaff_retaddr);
        LeaveCriticalSection(lpCriticalSection);
        ExceptionList = pvStack_c;
        return iVar3;
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  ExceptionList = pvStack_c;
  return iVar3;
}


//// FUNCTION FUN_00c8cef0 @ 00c8cef0 ////

int FUN_00c8cef0(int *param_1,int param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  int unaff_retaddr;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06288;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (param_1[2] != 2) {
    if (*(int *)(param_1[0x1b] + 0x18) != 0) {
      SetEvent((HANDLE)param_1[0x14]);
      iVar2 = FUN_00c91010(param_1,param_2,param_3);
      if (iVar2 < 0) {
        LeaveCriticalSection(lpCriticalSection);
        ExceptionList = local_c;
        return iVar2;
      }
      (**(code **)(param_1[-3] + 0x28))(1);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
      param_1[0x29] = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
      piVar1 = *(int **)(param_1[0x1b] + 0x9c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))(piVar1);
      }
      if (unaff_retaddr == 0) {
        param_1[0x15] = 0;
        (**(code **)(param_1[-3] + 0x70))();
      }
      iVar2 = (**(code **)(param_1[-3] + 0x7c))();
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = lpCriticalSection;
      return iVar2;
    }
    FUN_00c8de20(param_1 + -3,1,0,-(uint)(param_1 != (int *)0xc) & (uint)param_1);
    param_1[2] = 2;
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00c8d030 @ 00c8d030 ////

undefined4 __thiscall FUN_00c8d030(void *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  void *this_00;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d062b3;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc4);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x78) != 0) {
LAB_00c8d0df:
      uVar1 = *(undefined4 *)((int)this + 0x78);
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return uVar1;
    }
    param_1 = 0;
    this_00 = operator_new(0xe0);
    local_4._0_1_ = 1;
    if (this_00 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = Ctor_vt00dad9a0_00c8b5e0(this_00,(int)this,&param_1,&DAT_00d73f30);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *(int **)((int)this + 0x78) = piVar2;
    if (piVar2 != (int *)0x0) {
      if (-1 < param_1) goto LAB_00c8d0df;
      (**(code **)(*piVar2 + 0xc))(1);
      *(undefined4 *)((int)this + 0x78) = 0;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION AudioThread_RequestStop @ 00c8d100 ////

undefined4 __fastcall AudioThread_RequestStop(int *param_1)

{
  if ((param_1[5] != 0) && (param_1[0x1c] = 1, param_1[0x1b] == 0)) {
    SetEvent((HANDLE)param_1[0x17]);
    if (param_1[0x19] != 0) {
      (**(code **)(*param_1 + 0x60))();
    }
  }
  return 0;
}


//// FUNCTION AudioThread_StopAndWait @ 00c8d140 ////

undefined4 __fastcall AudioThread_StopAndWait(int *param_1)

{
  if (param_1[5] == 1) {
    ResetEvent((HANDLE)param_1[0x17]);
  }
  (**(code **)(*param_1 + 0x28))(0);
  (**(code **)(*param_1 + 0x6c))();
  (**(code **)(*param_1 + 0x70))();
  ThreadMsg_PumpAndWaitForCompletion((int)param_1);
  return 0;
}


//// FUNCTION FUN_00c8d180 @ 00c8d180 ////

int __fastcall FUN_00c8d180(int *param_1)

{
  int iVar1;
  
  param_1[0x18] = 0;
  if (param_1[5] == 2) {
    iVar1 = (**(code **)(*param_1 + 0x7c))();
    if (-1 < iVar1) {
      FUN_00c8b540(param_1,0);
      return 0;
    }
  }
  else {
    FUN_00c8b540(param_1,1);
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00c8d1c0 @ 00c8d1c0 ////

undefined4 __fastcall FUN_00c8d1c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x2b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2b] = 0;
  }
  if (*(int *)(param_1[0x1e] + 0x18) == 0) {
    return 1;
  }
  if ((param_1[5] != 0) && (*(char *)(param_1[0x1e] + 0x25) == '\0')) {
    return 0x80040224;
  }
  FUN_00c8b540(param_1,0);
  (**(code **)(*param_1 + 100))();
  (**(code **)(*param_1 + 0x70))();
  param_1[0x18] = 0;
  if (param_1[5] == 2) {
    (**(code **)(*param_1 + 0x80))();
  }
  return 0;
}


//// FUNCTION FUN_00c8d240 @ 00c8d240 ////

int __thiscall FUN_00c8d240(void *this,int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d062d0;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x7c);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  *(undefined4 *)((int)this + 0xb4) = 1;
  iVar1 = FUN_00c8ee00(*(int *)((int)this + 0x78) + 0x98,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0xb4) = 0;
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return -0x7fffbffb;
  }
  iVar1 = (*(int **)((int)this + 0x78))[0x33];
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x78) + 0x24))(iVar1);
    if (iVar1 < 0) {
      *(undefined4 *)((int)this + 0xb4) = 0;
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return iVar1;
    }
  }
  lpCriticalSection_00 = (LPCRITICAL_SECTION)((int)this + 0x94);
  EnterCriticalSection(lpCriticalSection_00);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (((*(int *)((int)this + 0x6c) == 0) && (*(int *)((int)this + 0x70) == 0)) &&
     (*(int *)((int)this + 0x60) == 0)) {
    if (*(void **)((int)this + 0x50) != (void *)0x0) {
      FUN_00c976c0(*(void **)((int)this + 0x50),param_1);
    }
    if (*(int *)((int)this + 100) == 1) {
      iVar1 = (**(code **)(*(int *)this + 0x54))(param_1);
      if (iVar1 == 0) {
        *(undefined4 *)((int)this + 0xb4) = 0;
        LeaveCriticalSection(lpCriticalSection_00);
        LeaveCriticalSection(lpCriticalSection);
        ExceptionList = local_c;
        return -0x7ffbfdd5;
      }
    }
    *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(*(int *)((int)this + 0x78) + 0xc0);
    *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(*(int *)((int)this + 0x78) + 0xc4);
    *(int **)((int)this + 0x6c) = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    if (*(int *)((int)this + 100) == 0) {
      FUN_00c8b540(this,1);
    }
    LeaveCriticalSection(lpCriticalSection_00);
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = lpCriticalSection;
    return 0;
  }
  SetEvent(*(HANDLE *)((int)this + 0x5c));
  *(undefined4 *)((int)this + 0xb4) = 0;
  LeaveCriticalSection(lpCriticalSection_00);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return -0x7fff0001;
}


//// FUNCTION FUN_00c8d590 @ 00c8d590 ////

undefined4 __fastcall FUN_00c8d590(void *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  MMRESULT MVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_8;
  int iStack_4;
  
  if (((*(int *)((int)param_1 + 0x70) != 0) && (*(int *)((int)param_1 + 0x74) == 0)) &&
     (*(int *)((int)param_1 + 0xc0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      uVar2 = *(uint *)((int)param_1 + 0x20);
      iVar3 = *(int *)((int)param_1 + 0x24);
      iVar4 = *(int *)((int)param_1 + 0xbc);
      uVar5 = *(uint *)((int)param_1 + 0xb8);
      uVar8 = uVar5 + uVar2;
      (**(code **)(*piVar1 + 0xc))(piVar1,&local_8);
      uVar9 = __alldiv(uVar8 - local_8,
                       ((iVar4 + iVar3 + (uint)CARRY4(uVar5,uVar2)) - iStack_4) -
                       (uint)(uVar8 < local_8),10000,0);
      if (0x31 < (int)(UINT)uVar9) {
        MVar6 = timeSetEvent((UINT)uVar9,10,&fptc_00c8d580,(DWORD_PTR)param_1,0);
        *(MMRESULT *)((int)param_1 + 0xc0) = MVar6;
        if (MVar6 != 0) {
          return 0;
        }
      }
    }
    uVar7 = FUN_00c8b360(param_1);
    return uVar7;
  }
  return 0;
}


//// FUNCTION FUN_00c8d630 @ 00c8d630 ////

undefined4 __fastcall FUN_00c8d630(int param_1)

{
  if (*(UINT *)(param_1 + 0xc0) != 0) {
    timeKillEvent(*(UINT *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  return 0;
}


//// FUNCTION FUN_00c8d680 @ 00c8d680 ////

void __fastcall FUN_00c8d680(void *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x94));
  local_4 = 0;
  if ((((*(int *)((int)param_1 + 0x60) == 0) &&
       (iVar1 = *(int *)((int)param_1 + 0x78), *(int *)(iVar1 + 0x18) != 0)) &&
      (*(char *)(iVar1 + 0xa1) == '\0')) &&
     ((*(int *)((int)param_1 + 0x70) == 0 && (*(int *)((int)param_1 + 0xb0) == 1)))) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + 0xc;
    }
    FUN_00c8de20(param_1,5,iVar1,0);
    FUN_00c8b540(param_1,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x94));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c8d720 @ 00c8d720 ////

undefined4 __fastcall FUN_00c8d720(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06338;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x25);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  iVar1 = param_1[0x1e];
  local_4 = 0;
  if (*(int *)(iVar1 + 0x18) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0;
  }
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 + 0xc;
  }
  (**(code **)(*(int *)(iVar1 + 0xc) + 4))(iVar1 + 0xc);
  FUN_00c8de20(param_1,0x16,iVar2,0);
  param_1[0x18] = 1;
  (**(code **)(*param_1 + 0x70))();
  (**(code **)(*(int *)(param_1[0x1e] + 0xc) + 8))(param_1[0x1e] + 0xc);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = unaff_ESI;
  return 1;
}


//// FUNCTION ScalarDeletingDtor_00c8d7e0 @ 00c8d7e0 ////

void * __thiscall ScalarDeletingDtor_00c8d7e0(void *this,byte param_1)

{
  thunk_FUN_00c8ebb0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00c8d910 @ 00c8d910 ////

void __fastcall Dtor_00c8d910(int *param_1)

{
  *param_1 = (int)&PTR_LAB_00dadb70;
  param_1[3] = (int)&PTR_FUN_00dadb30;
  param_1[4] = (int)&PTR_LAB_00dadb1c;
  param_1[0x38] = (int)&PTR_LAB_00dadaf8;
  param_1[0x39] = (int)&PTR_LAB_00dadae4;
  Dtor_00c8c970(param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c8d940 @ 00c8d940 ////

int * __thiscall ScalarDeletingDtor_00c8d940(void *this,byte param_1)

{
  Dtor_00c8c970(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00dadb70_00c8d960 @ 00c8d960 ////

undefined4 * __thiscall
Ctor_vt00dadb70_00c8d960(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  Ctor_vt00dada30_00c8c830(this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_LAB_00dadb70;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00dadb30;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00dadb1c;
  *(undefined ***)((int)this + 0xe0) = &PTR_LAB_00dadaf8;
  *(undefined ***)((int)this + 0xe4) = &PTR_LAB_00dadae4;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  FUN_00c8b910((int)this);
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c8d9d0 @ 00c8d9d0 ////

int * __thiscall ScalarDeletingDtor_00c8d9d0(void *this,byte param_1)

{
  Dtor_00c8d910(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c8da10 @ 00c8da10 ////

int FUN_00c8da10(LPUNKNOWN param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  HRESULT HVar2;
  int iVar3;
  int *unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  int *piVar4;
  
  piVar1 = param_4;
  *param_4 = 0;
  HVar2 = CoCreateInstance((IID *)&rclsid_00db076c,(LPUNKNOWN)param_1,1,(IID *)&riid_00db2a9c,
                           &param_4);
  if (HVar2 < 0) {
    return HVar2;
  }
  piVar4 = param_4;
  iVar3 = (**(code **)*param_4)(param_4,&DAT_00daf2bc,&param_1);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,unaff_EDI,unaff_retaddr);
    (**(code **)(*piVar4 + 8))(piVar4);
    if (-1 < iVar3) {
      *piVar1 = (int)param_1;
      return 0;
    }
  }
  (*param_1->lpVtbl->Release)(param_1);
  return iVar3;
}


//// FUNCTION FUN_00c8db00 @ 00c8db00 ////

void FUN_00c8db00(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  IID **ppIVar3;
  int *piVar4;
  bool bVar5;
  
  iVar1 = 4;
  bVar5 = true;
  piVar2 = param_2;
  ppIVar3 = &riid_00daf4dc;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = (IID *)*piVar2 == *ppIVar3;
    piVar2 = piVar2 + 1;
    ppIVar3 = ppIVar3 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar1 = 4;
    bVar5 = true;
    piVar2 = param_2;
    piVar4 = &DAT_00daf4ec;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *piVar2 == *piVar4;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar1 = 4;
      bVar5 = true;
      piVar2 = param_2;
      piVar4 = &DAT_00db298c;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *piVar2 == *piVar4;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (!bVar5) {
        iVar1 = 4;
        bVar5 = true;
        piVar2 = param_2;
        piVar4 = &DAT_00daf45c;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar5 = *piVar2 == *piVar4;
          piVar2 = piVar2 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (!bVar5) {
          FUN_00c92de0(param_1,param_2,param_3);
          return;
        }
        if (param_1 != (int *)0x0) {
          FUN_00c92d10(param_1 + 4,param_3);
          return;
        }
        goto LAB_00c8db33;
      }
    }
  }
  if (param_1 != (int *)0x0) {
    FUN_00c92d10(param_1 + 3,param_3);
    return;
  }
LAB_00c8db33:
  FUN_00c92d10((int *)0x0,param_3);
  return;
}


//// FUNCTION FUN_00c8dc80 @ 00c8dc80 ////

void __fastcall FUN_00c8dc80(int param_1)

{
  if (param_1 != 0) {
    FUN_00c92c80();
    return;
  }
  FUN_00c92c80();
  return;
}


//// FUNCTION FUN_00c8dcf0 @ 00c8dcf0 ////

undefined4 FUN_00c8dcf0(int param_1,short *param_2)

{
  int *piVar1;
  
  if (param_2 == (short *)0x0) {
    return 0x80004003;
  }
  if (*(short **)(param_1 + 0x30) == (short *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_00c93b80(param_2,*(short **)(param_1 + 0x30),0x80);
  }
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x34);
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return 0;
}


//// FUNCTION Audio_SetDeviceSource @ 00c8dd40 ////

undefined4 Audio_SetDeviceSource(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06378;
  pvStack_c = ExceptionList;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  *(undefined4 **)(param_1 + 0x34) = param_2;
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_00daf3bc,(undefined4 *)(param_1 + 0x38));
    if (-1 < iVar2) {
      piVar1 = *(int **)(param_1 + 0x38);
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x30));
  }
  if (param_3 != (undefined4 *)0x0) {
    iVar2 = FUN_00c93c70((int)param_3);
    uVar5 = (iVar2 + 1U) * 2;
    puVar3 = operator_new(uVar5);
    *(undefined4 **)(param_1 + 0x30) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      for (uVar4 = (iVar2 + 1U & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION FUN_00c8de20 @ 00c8de20 ////

undefined4 __thiscall FUN_00c8de20(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)((int)this + 0x44);
  if (piVar1 == (int *)0x0) {
    return 0x80004001;
  }
  if (param_1 == 1) {
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,1,param_2,(int)this + 0xc);
    return uVar2;
  }
  uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1,param_2,param_3);
  return uVar2;
}


//// FUNCTION Dtor_00c8df10 @ 00c8df10 ////

void __fastcall Dtor_00c8df10(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0639b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00dadc34;
  local_4 = 0;
  (**(code **)(*(int *)(param_1[3] + 0xc) + 8))(param_1[3] + 0xc);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00c9a310(param_1 + 6);
  ExceptionList = param_1;
  return;
}


//// FUNCTION Wrap_InterlockedDecrement_00c8dff0 @ 00c8dff0 ////

LONG Wrap_InterlockedDecrement_00c8dff0(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 5);
  if ((LVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x1c))(1);
  }
  return LVar1;
}


//// FUNCTION FUN_00c8e020 @ 00c8e020 ////

undefined4 FUN_00c8e020(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_00c99dc0((undefined4 *)(param_1 + 0x18));
  return 0;
}


//// FUNCTION FUN_00c8e050 @ 00c8e050 ////

undefined4 FUN_00c8e050(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}


//// FUNCTION Wrap_InterlockedDecrement_00c8e120 @ 00c8e120 ////

LONG Wrap_InterlockedDecrement_00c8e120(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 4);
  if ((LVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x1c))(1);
  }
  return LVar1;
}


//// FUNCTION FUN_00c8e150 @ 00c8e150 ////

undefined4 FUN_00c8e150(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 0;
}


//// FUNCTION FUN_00c8e170 @ 00c8e170 ////

void __fastcall FUN_00c8e170(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d063c3;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x14));
}


//// FUNCTION FUN_00c8e1d0 @ 00c8e1d0 ////

void FUN_00c8e1d0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_2;
  piVar3 = &DAT_00daf53c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    if (param_1 != (int *)0x0) {
      FUN_00c92d10(param_1 + 3,param_3);
      return;
    }
  }
  else {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = param_2;
    piVar3 = &DAT_00daf3fc;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      FUN_00c92de0(param_1,param_2,param_3);
      return;
    }
    if (param_1 != (int *)0x0) {
      FUN_00c92d10(param_1 + 4,param_3);
      return;
    }
  }
  FUN_00c92d10((int *)0x0,param_3);
  return;
}


//// FUNCTION FUN_00c8e2b0 @ 00c8e2b0 ////

undefined4 FUN_00c8e2b0(void)

{
  return 0;
}


//// FUNCTION FUN_00c8e2d0 @ 00c8e2d0 ////

uint __thiscall FUN_00c8e2d0(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_00c95060((void *)((int)this + 0x34),param_1);
  return uVar1 & (-1 < (int)uVar1) - 1;
}


//// FUNCTION FUN_00c8e300 @ 00c8e300 ////

uint __thiscall FUN_00c8e300(void *this,int *param_1)

{
  int unaff_ESI;
  
  (**(code **)(*param_1 + 0x24))(param_1,&param_1);
  return (unaff_ESI != *(int *)((int)this + 0x1c)) - 1 & 0x80040208;
}


//// FUNCTION FUN_00c8e330 @ 00c8e330 ////

bool __fastcall FUN_00c8e330(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  return iVar1 != *(int *)(param_1 + 0x10);
}


//// FUNCTION FUN_00c8e350 @ 00c8e350 ////

bool __fastcall FUN_00c8e350(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  return iVar1 != *(int *)(param_1 + 0xc);
}


//// FUNCTION GetWideStringData_CopyToOutput @ 00c8e690 ////

undefined4 GetWideStringData_CopyToOutput(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + 0xc;
  }
  *param_2 = iVar1;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 4))(iVar1 + 0xc);
  }
  if (*(short **)(param_1 + 8) != (short *)0x0) {
    FUN_00c93b80((short *)(param_2 + 2),*(short **)(param_1 + 8),0x80);
    param_2[1] = *(int *)(param_1 + 0x10);
    return 0;
  }
  *(undefined2 *)(param_2 + 2) = 0;
  param_2[1] = *(int *)(param_1 + 0x10);
  return 0;
}


//// FUNCTION FUN_00c8e7d0 @ 00c8e7d0 ////

undefined4 FUN_00c8e7d0(void)

{
  return 0;
}


//// FUNCTION FUN_00c8e820 @ 00c8e820 ////

undefined4
FUN_00c8e820(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined8 param_6)

{
  *(undefined4 *)(param_1 + 0x74) = param_2;
  *(undefined4 *)(param_1 + 0x78) = param_3;
  *(undefined4 *)(param_1 + 0x7c) = param_4;
  *(undefined4 *)(param_1 + 0x80) = param_5;
  *(undefined8 *)(param_1 + 0x84) = param_6;
  return 0;
}


//// FUNCTION FUN_00c8e870 @ 00c8e870 ////

void __fastcall FUN_00c8e870(int *param_1)

{
  (**(code **)(*param_1 + 0x38))(param_1[0x27],param_1 + 0x26);
  return;
}


//// FUNCTION FUN_00c8e890 @ 00c8e890 ////

uint __thiscall FUN_00c8e890(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int unaff_ESI;
  
  piVar1 = param_1;
  (**(code **)(*param_1 + 0x24))(param_1,&param_1);
  if (unaff_ESI == *(int *)((int)this + 0x1c)) {
    return 0x80040208;
  }
  uVar2 = (**(code **)*piVar1)(piVar1,&DAT_00daf46c,(int)this + 0x9c);
  return uVar2 & (-1 < (int)uVar2) - 1;
}


//// FUNCTION FUN_00c8e8e0 @ 00c8e8e0 ////

int __fastcall FUN_00c8e8e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
    if (iVar2 < 0) {
      return iVar2;
    }
    (**(code **)(**(int **)(param_1 + 0x98) + 8))(*(int **)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return 0;
}


//// FUNCTION Com_CreateWithFallback @ 00c8e950 ////

int __thiscall Com_CreateWithFallback(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piStack_24;
  int *piStack_20;
  int local_10 [4];
  
  local_10[0] = 0;
  piStack_20 = local_10;
  local_10[1] = 0;
  *param_2 = 0;
  local_10[2] = 0;
  piStack_24 = param_1;
  local_10[3] = 0;
  (**(code **)(*param_1 + 0x14))();
  if (local_10[0] == 0) {
    local_10[0] = 1;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(int *)this + 0x3c))(*param_2,&piStack_20);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1,*param_2,0);
      if (-1 < iVar2) {
        return 0;
      }
    }
  }
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_2 = 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0x48))(param_2);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(int *)this + 0x3c))(*param_2,&piStack_24);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1,*param_2,0);
      if (-1 < iVar2) {
        return 0;
      }
    }
  }
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00c8eac0 @ 00c8eac0 ////

undefined4 __fastcall FUN_00c8eac0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    return 0x8004020a;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98));
  return uVar1;
}


//// FUNCTION FUN_00c8eae0 @ 00c8eae0 ////

undefined4 __fastcall FUN_00c8eae0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x24) = 0;
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 == (int *)0x0) {
    return 0x8004020a;
  }
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  return uVar2;
}


//// FUNCTION FUN_00c8ebb0 @ 00c8ebb0 ////

void __fastcall FUN_00c8ebb0(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d06418;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x9c);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00c8e170(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c8edc0 @ 00c8edc0 ////

int __fastcall FUN_00c8edc0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
    if (iVar2 < 0) {
      return iVar2;
    }
    (**(code **)(**(int **)(param_1 + 0x9c) + 8))(*(int **)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return 0;
}


//// FUNCTION FUN_00c8ee00 @ 00c8ee00 ////

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00c8ee00(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_EDI;
  
  piVar1 = param_2;
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + -0x98) + 0x38))();
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = (**(code **)*piVar1)(piVar1,&DAT_00daf4ac);
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0x30;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
    }
    iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
    }
    iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
    }
    iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,param_1 + 0x20,param_1 + 0x28);
    if (-1 < iVar2) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x110;
    }
    iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,param_1 + 0x34);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
    }
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1 + 0x38);
    uVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    uVar3 = (**(code **)(*piVar1 + 0x10))(piVar1);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
  }
  else {
    iVar2 = (**(code **)(*unaff_EDI + 0x4c))(unaff_EDI,0x30,param_1 + 0x10);
    (*(code *)param_2[2])(&param_2);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  if (((*(byte *)(param_1 + 0x18) & 8) != 0) &&
     (iVar2 = (**(code **)(*(int *)(param_1 + -0x98) + 0x20))(*(undefined4 *)(param_1 + 0x34)),
     iVar2 != 0)) {
    *(undefined1 *)(param_1 + -0x74) = 1;
    (**(code **)(*(int *)(param_1 + -0x8c) + 0x38))(param_1 + -0x8c);
    piVar1 = *(int **)(*(int *)(param_1 + -0x70) + 0x44);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,3,0x8004022a,0);
    }
    return -0x7ffbfe00;
  }
  return 0;
}


//// FUNCTION FUN_00c8ef60 @ 00c8ef60 ////

int FUN_00c8ef60(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if (param_2 == 0) {
    return -0x7fffbffd;
  }
  *param_4 = 0;
  while( true ) {
    if (param_3 < 1) {
      return 0;
    }
    param_3 = param_3 + -1;
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined4 *)(param_2 + *param_4 * 4));
    if (iVar1 != 0) break;
    *param_4 = *param_4 + 1;
  }
  return iVar1;
}


//// FUNCTION FUN_00c8efc0 @ 00c8efc0 ////

uint FUN_00c8efc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *unaff_EDI;
  int iVar5;
  int *piVar6;
  int iStack_c;
  int *piStack_8;
  int iStack_4;
  
  puVar1 = param_1;
  iStack_4 = (**(code **)(*(int *)param_1[-0x1c] + 0x18))();
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iStack_4) {
    do {
      iVar2 = (**(code **)(*(int *)puVar1[-0x1c] + 0x1c))(iVar5);
      piVar6 = (int *)(iVar2 + 0xc);
      uVar3 = (**(code **)(*piVar6 + 0x24))(piVar6,&iStack_c);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if ((piStack_8 == (int *)0x1) &&
         (iVar2 = (**(code **)(*piVar6 + 0x18))(piVar6,&param_1), -1 < iVar2)) {
        piVar6 = &iStack_c;
        iVar4 = iVar4 + 1;
        iVar2 = (**(code **)*param_1)(param_1,&DAT_00daf46c);
        (**(code **)(*piStack_8 + 8))(piStack_8);
        if (iVar2 < 0) {
          return 0;
        }
        iVar2 = (**(code **)(*unaff_EDI + 0x20))(unaff_EDI);
        (**(code **)(*piVar6 + 8))(piVar6);
        if (iVar2 != 1) {
          return 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iStack_4);
  }
  return (uint)(iVar4 != 0);
}


//// FUNCTION FUN_00c8f080 @ 00c8f080 ////

undefined4 FUN_00c8f080(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


//// FUNCTION Audio_ResetFlaggedState @ 00c8f0b0 ////

undefined4 Audio_ResetFlaggedState(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


//// FUNCTION FUN_00c8f170 @ 00c8f170 ////

undefined4 __thiscall FUN_00c8f170(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_EBX;
  int *unaff_EDI;
  int *piVar4;
  void *local_4;
  
  local_4 = this;
  if (*(int *)((int)this + 0x2c) != 0) {
    if (*(int *)((int)this + 0x28) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x28) + 0xc;
    }
    uVar3 = (**(code **)(**(int **)((int)this + 0x2c) + 0xc))
                      (*(int **)((int)this + 0x2c),iVar2,*param_1,param_1[1],param_1[2],param_1[3],
                       param_1[4],param_1[5]);
    return uVar3;
  }
  puVar1 = *(undefined4 **)((int)this + 0x18);
  uVar3 = 0x80040216;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00daf3fc,&local_4);
    if (unaff_EDI != (int *)0x0) {
      if (*(int *)((int)this + 0x28) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 0x28) + 0xc;
      }
      piVar4 = (int *)unaff_EBX[1];
      uVar3 = (**(code **)(*unaff_EDI + 0xc))
                        (unaff_EDI,iVar2,*unaff_EBX,piVar4,unaff_EBX[2],unaff_EBX[3],unaff_EBX[4],
                         unaff_EBX[5]);
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  return uVar3;
}


//// FUNCTION FUN_00c8f2f0 @ 00c8f2f0 ////

LONG FUN_00c8f2f0(int *param_1)

{
  LONG LVar1;
  
  if (param_1[0x11] == 1) {
    param_1[0x11] = 0;
  }
  else {
    LVar1 = InterlockedDecrement(param_1 + 0x11);
    if (LVar1 != 0) {
      return LVar1;
    }
  }
  if ((*(byte *)(param_1 + 1) & 8) != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x10] = 0;
  (**(code **)(*(int *)(param_1[6] + 0xc) + 0x20))((int *)(param_1[6] + 0xc),param_1);
  return 0;
}


//// FUNCTION FUN_00c8f660 @ 00c8f660 ////

undefined4 FUN_00c8f660(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (*(LPVOID *)(param_1 + 0x3c) != (LPVOID)0x0) {
    FUN_00c95130(*(LPVOID *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
    return 0;
  }
  puVar1 = FUN_00c95180(param_2);
  *(undefined4 **)(param_1 + 0x3c) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
    return 0x8007000e;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  return 0;
}


//// FUNCTION Dtor_00c8f900 @ 00c8f900 ////

void __fastcall Dtor_00c8f900(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dadd40;
  param_1[3] = &PTR_FUN_00dadcf8;
  param_1[4] = &PTR_LAB_00dadce0;
  param_1[0x28] = &PTR_LAB_00dadcd0;
  if ((HANDLE)param_1[0x2f] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x2f]);
  }
  if ((HANDLE)param_1[0x30] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x30]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  FUN_00c8e170((int)param_1);
  return;
}


//// FUNCTION FUN_00c8f960 @ 00c8f960 ////

void FUN_00c8f960(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c8f96d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + -8))();
  return;
}


//// FUNCTION FUN_00c8f970 @ 00c8f970 ////

void FUN_00c8f970(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c8f97d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + -8) + 4))();
  return;
}


//// FUNCTION FUN_00c8f980 @ 00c8f980 ////

void FUN_00c8f980(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c8f98d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + -8) + 8))();
  return;
}


//// FUNCTION FUN_00c8fa90 @ 00c8fa90 ////

void __fastcall FUN_00c8fa90(int param_1)

{
  ResetEvent(*(HANDLE *)(param_1 + 0xbc));
  SetEvent(*(HANDLE *)(param_1 + 0xc0));
  CloseHandle(*(HANDLE *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0xc4) = 2;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}


//// FUNCTION FUN_00c8fad0 @ 00c8fad0 ////

undefined4 __fastcall FUN_00c8fad0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa4);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0xc4) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  SetEvent(*(HANDLE *)(param_1 + 0xbc));
  if (*(HANDLE *)(param_1 + 0xc0) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0xc0));
    CloseHandle(*(HANDLE *)(param_1 + 0xc0));
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


//// FUNCTION FUN_00c8fb50 @ 00c8fb50 ////

uint __fastcall FUN_00c8fb50(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  HANDLE local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06498;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa4);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0xc4);
  local_4 = 0;
  while( true ) {
    if (iVar1 != 2) {
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    local_14 = *(HANDLE *)(param_1 + 0xbc);
    local_10 = *(undefined4 *)(param_1 + 0xd0);
    DVar2 = WaitForMultipleObjects(2,&local_14,0,0xffffffff);
    EnterCriticalSection(lpCriticalSection);
    if (DVar2 != 0) break;
    iVar1 = *(int *)(param_1 + 0xc4);
  }
  if (DVar2 != 1) {
    if (DVar2 != 0xffffffff) {
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return 0x8000ffff;
    }
    uVar3 = Win32ErrorToHRESULT();
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return uVar3;
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0x80040223;
}


//// FUNCTION FUN_00c8fc70 @ 00c8fc70 ////

void __fastcall FUN_00c8fc70(int param_1)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa4));
  piVar1 = (int *)(param_1 + 0xcc);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    FUN_00c8fa90(param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa4));
  return;
}


//// FUNCTION FUN_00c8fcb0 @ 00c8fcb0 ////

bool __fastcall FUN_00c8fcb0(int param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa4));
  iVar1 = *(int *)(param_1 + 0xcc);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa4));
  return iVar1 != 0;
}


//// FUNCTION Wrap_ResetEvent_00c8fd00 @ 00c8fd00 ////

undefined4 __fastcall Wrap_ResetEvent_00c8fd00(int param_1)

{
  undefined4 uVar1;
  
  if ((*(HANDLE *)(param_1 + 0xd0) != (HANDLE)0x0) && (*(int *)(param_1 + 0xd4) != 0)) {
    ResetEvent(*(HANDLE *)(param_1 + 0xd0));
    if (*(int *)(param_1 + 0x98) == 0) {
      return 0x8004020a;
    }
    uVar1 = (**(code **)(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98));
    return uVar1;
  }
  return 0x80004005;
}


//// FUNCTION Wrap_SetEvent_00c8fd50 @ 00c8fd50 ////

undefined4 __fastcall Wrap_SetEvent_00c8fd50(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  SetEvent(*(HANDLE *)(param_1 + 0xd0));
  *(undefined1 *)(param_1 + 0x24) = 0;
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 == (int *)0x0) {
    return 0x8004020a;
  }
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  return uVar2;
}


//// FUNCTION Wrap_SetEvent_00c8fd80 @ 00c8fd80 ////

undefined4 __fastcall Wrap_SetEvent_00c8fd80(int param_1)

{
  undefined4 uVar1;
  
  SetEvent(*(HANDLE *)(param_1 + 0xd0));
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0x80040209;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(*(int **)(param_1 + 0x18));
  return uVar1;
}


//// FUNCTION Wrap_ResetEvent_00c8fdb0 @ 00c8fdb0 ////

undefined4 __fastcall Wrap_ResetEvent_00c8fdb0(int param_1)

{
  undefined4 uVar1;
  
  ResetEvent(*(HANDLE *)(param_1 + 0xd0));
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0x80040209;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x40))(*(int **)(param_1 + 0x18));
  return uVar1;
}


//// FUNCTION FUN_00c8fde0 @ 00c8fde0 ////

int __thiscall FUN_00c8fde0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  int iStack_20;
  
  if (this == (void *)0x0) {
    iStack_24 = 0;
  }
  else {
    iStack_24 = (int)this + 0xc;
  }
  piStack_28 = *(int **)((int)this + 0x18);
  iStack_20 = param_1;
  iStack_2c = 0xc8fe04;
  iVar2 = (**(code **)(*piStack_28 + 0x10))();
  if (-1 < iVar2) {
    iStack_2c = param_1;
    iVar2 = (**(code **)(*(int *)this + 0x24))();
    if (-1 < iVar2) {
      piVar1 = *(int **)((int)this + 0x9c);
      if (piVar1 != (int *)0x0) {
        iStack_20 = 0;
        (**(code **)(*piVar1 + 0x14))(piVar1,&iStack_20);
        if (iStack_20 == 0) {
          iStack_20 = 1;
        }
        iVar2 = (**(code **)(**(int **)((int)this + 0x98) + 0x18))(*(int **)((int)this + 0x98));
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(*(int *)this + 0x3c))(*(undefined4 *)((int)this + 0x98),&iStack_2c);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(**(int **)((int)this + 0x98) + 0x14))(*(int **)((int)this + 0x98));
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(**(int **)((int)this + 0x9c) + 0x10))
                          (*(int **)((int)this + 0x9c),*(undefined4 *)((int)this + 0x98),
                           *(undefined4 *)((int)this + 0xd8));
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00c8fef0 @ 00c8fef0 ////

void __fastcall FUN_00c8fef0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1[0x27],param_1 + 0x26);
  if (((-1 < iVar2) && (*(int *)(param_1[10] + 0x14) != 0)) &&
     (piVar1 = (int *)param_1[0x26], piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x14))(piVar1);
  }
  return;
}


//// FUNCTION FUN_00c8ff70 @ 00c8ff70 ////

void __fastcall FUN_00c8ff70(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d064df;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (*(HANDLE *)(param_1 + 0x30) != (HANDLE)0x0) {
    ExceptionList = &pvStack_c;
    CloseHandle(*(HANDLE *)(param_1 + 0x30));
  }
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  local_4 = 0xffffffff;
  FUN_00c92c80();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c90130 @ 00c90130 ////

undefined4 FUN_00c90130(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  EnterCriticalSection(lpCriticalSection);
  param_2[1] = *(undefined4 *)(param_1 + 0x34);
  *param_2 = *(undefined4 *)(param_1 + 0x2c);
  param_2[2] = *(undefined4 *)(param_1 + 0x38);
  param_2[3] = *(undefined4 *)(param_1 + 0x3c);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


//// FUNCTION FUN_00c902b0 @ 00c902b0 ////

undefined4 FUN_00c902b0(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  EnterCriticalSection(lpCriticalSection);
  *param_2 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x20);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


//// FUNCTION Wrap_ReleaseSemaphore_00c902f0 @ 00c902f0 ////

void __fastcall Wrap_ReleaseSemaphore_00c902f0(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    ReleaseSemaphore(*(HANDLE *)(param_1 + 0x30),*(int *)(param_1 + 0x34),(LPLONG)0x0);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


//// FUNCTION FUN_00c903d0 @ 00c903d0 ////

undefined4 FUN_00c903d0(int *param_1)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06538;
  local_c = ExceptionList;
  if (param_1 == (int *)0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  }
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if ((param_1[0x11] == 0) && (param_1[0x12] == 0)) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    iVar2 = param_1[8];
    iVar1 = param_1[0xc];
    param_1[0x11] = 0;
    if (iVar1 <= iVar2) {
      param_1[0x12] = 0;
      (**(code **)(param_1[-3] + 0x10))();
    }
    else {
      param_1[0x12] = 1;
    }
    if (param_1[10] != 0) {
      ReleaseSemaphore((HANDLE)param_1[9],param_1[10],(LPLONG)0x0);
      param_1[10] = 0;
    }
    local_4 = 0xffffffff;
    LeaveCriticalSection(lpCriticalSection);
    if (iVar1 <= iVar2) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00c90500 @ 00c90500 ////

undefined4 FUN_00c90500(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  _SYSTEM_INFO local_24;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  EnterCriticalSection(lpCriticalSection);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  GetSystemInfo(&local_24);
  iVar1 = param_2[2];
  if ((iVar1 == 0) || ((iVar1 - 1U & local_24.dwAllocationGranularity) != 0)) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x8004020e;
  }
  if (*(int *)(param_1 + 0x44) == 1) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x8004020f;
  }
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x30)) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x80040210;
  }
  iVar3 = param_2[1] + param_2[3];
  if (iVar3 % iVar1 != 0) {
    iVar3 = iVar3 + (iVar1 - iVar3 % iVar1);
  }
  iVar1 = param_2[3];
  *(int *)(param_1 + 0x34) = iVar3 - iVar1;
  param_3[1] = iVar3 - iVar1;
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *param_3 = uVar2;
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  param_3[2] = uVar2;
  uVar2 = param_2[3];
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  param_3[3] = uVar2;
  *(undefined4 *)(param_1 + 0x40) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


//// FUNCTION FUN_00c90630 @ 00c90630 ////

void __fastcall FUN_00c90630(int param_1)

{
  int *piVar1;
  
  while (piVar1 = *(int **)(param_1 + 0x28), piVar1 != (int *)0x0) {
    *(int *)(param_1 + 0x28) = piVar1[7];
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    (**(code **)(*piVar1 + 0x54))(1);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(LPVOID *)(param_1 + 0x60) != (LPVOID)0x0) {
    VirtualFree(*(LPVOID *)(param_1 + 0x60),0,0x8000);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}


//// FUNCTION Dtor_00c90680 @ 00c90680 ////

void __fastcall Dtor_00c90680(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d06558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00daddd4;
  param_1[3] = &PTR_LAB_00dadda8;
  local_4 = 0;
  FUN_00c903d0(param_1 + 3);
  FUN_00c90630((int)param_1);
  local_4 = 0xffffffff;
  FUN_00c8ff70((int)param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c90710 @ 00c90710 ////

uint FUN_00c90710(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_EBX;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  
  iVar7 = 0;
  if (param_1 == (int *)0x0) {
    return 1;
  }
  puVar1 = (undefined4 *)*param_1;
  piVar9 = param_2;
  uVar3 = (**(code **)(*param_2 + 0x1c))(param_2,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  if (unaff_EBX != 0) {
    puVar1 = (undefined4 *)*param_1;
    uVar3 = (**(code **)(*param_2 + 0xc))
                      (param_2,*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1[1],param_1[2]);
    if ((-1 < (int)uVar3) && (uVar10 = 0, param_1[3] != 0)) {
      while( true ) {
        iVar4 = param_1[4];
        puVar5 = (undefined4 *)(iVar4 + iVar7);
        puVar1 = *(undefined4 **)(iVar4 + iVar7 + 0x14);
        puVar2 = (undefined4 *)*param_1;
        uVar3 = (**(code **)(*param_2 + 0x14))
                          (param_2,*puVar2,puVar2[1],puVar2[2],puVar2[3],*puVar5,puVar5[1],puVar5[2]
                           ,puVar5[3],puVar5[4],*puVar1,puVar1[1],puVar1[2],puVar1[3],
                           *(undefined4 *)(iVar4 + 0x18 + iVar7));
        if ((int)uVar3 < 0) break;
        iVar4 = param_1[4];
        uVar8 = 0;
        piVar6 = param_2;
        if (*(int *)(iVar7 + 0x1c + iVar4) != 0) {
          do {
            param_2 = piVar9;
            piVar9 = (int *)(*(int *)(iVar7 + 0x20 + iVar4) + uVar8 * 8);
            puVar1 = (undefined4 *)piVar9[1];
            puVar2 = (undefined4 *)*piVar9;
            puVar5 = (undefined4 *)*param_1;
            piVar9 = param_2;
            uVar3 = (**(code **)(*piVar6 + 0x18))
                              (param_2,*puVar5,puVar5[1],puVar5[2],puVar5[3],
                               *(undefined4 *)(iVar7 + iVar4),*puVar2,puVar2[1],puVar2[2],puVar2[3],
                               *puVar1,puVar1[1],puVar1[2],puVar1[3]);
            if ((int)uVar3 < 0) goto LAB_00c908d8;
            iVar4 = param_1[4];
            uVar8 = uVar8 + 1;
            piVar6 = param_2;
          } while (uVar8 < *(uint *)(iVar7 + 0x1c + iVar4));
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + 0x24;
        if ((uint)param_1[3] <= uVar10) break;
      }
    }
  }
LAB_00c908d8:
  return uVar3 & (uVar3 == 0x80070002) - 1;
}


//// FUNCTION FUN_00c90950 @ 00c90950 ////

void __fastcall FUN_00c90950(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


//// FUNCTION FUN_00c90a00 @ 00c90a00 ////

void __fastcall FUN_00c90a00(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d06578;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x14);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00c92c80();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c90d30 @ 00c90d30 ////

void __fastcall FUN_00c90d30(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d065f8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x3c));
}


//// FUNCTION FUN_00c90ea0 @ 00c90ea0 ////

int FUN_00c90ea0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06658;
  pvStack_c = ExceptionList;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  iVar4 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x18))();
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        piVar2 = (int *)(**(code **)(*(int *)(param_1 + -0xc) + 0x1c))(iVar5);
        if (((piVar2[6] != 0) && (iVar3 = (**(code **)(*piVar2 + 0x18))(), iVar3 < 0)) &&
           (-1 < iVar4)) {
          iVar4 = iVar3;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_c;
  return iVar4;
}


//// FUNCTION FUN_00c90f50 @ 00c90f50 ////

int FUN_00c90f50(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06678;
  pvStack_c = ExceptionList;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  iVar4 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x18))();
    if (0 < iVar1) {
      do {
        piVar2 = (int *)(**(code **)(*(int *)(param_1 + -0xc) + 0x1c))(iVar4);
        if ((piVar2[6] != 0) && (iVar3 = (**(code **)(*piVar2 + 0x14))(), iVar3 < 0)) {
          LeaveCriticalSection(lpCriticalSection);
          ExceptionList = pvStack_c;
          return iVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  *(undefined4 *)(param_1 + 8) = 1;
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION FUN_00c91010 @ 00c91010 ////

int FUN_00c91010(int *param_1,int param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06698;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xb];
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  iVar4 = 0;
  param_1[5] = param_2;
  param_1[6] = param_3;
  local_4 = 0;
  if ((param_1[2] == 0) && (iVar1 = (**(code **)(*param_1 + 0x14))(param_1), iVar1 < 0)) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = pvStack_c;
    return iVar1;
  }
  if (param_1[2] != 2) {
    iVar1 = (**(code **)(param_1[-3] + 0x18))();
    if (0 < iVar1) {
      do {
        piVar2 = (int *)(**(code **)(param_1[-3] + 0x1c))(iVar4);
        if ((piVar2[6] != 0) && (iVar3 = (**(code **)(*piVar2 + 0x1c))(param_2,param_3), iVar3 < 0))
        {
          LeaveCriticalSection(lpCriticalSection);
          ExceptionList = pvStack_c;
          return iVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  param_1[2] = 2;
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION FUN_00c91120 @ 00c91120 ////

undefined4 FUN_00c91120(int param_1,ushort *param_2,int *param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d066b8;
  local_c = ExceptionList;
  iVar5 = 0;
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  iVar2 = (**(code **)(*(int *)(param_1 + -0xc) + 0x18))();
  if (0 < iVar2) {
    do {
      iVar3 = (**(code **)(*(int *)(param_1 + -0xc) + 0x1c))(iVar5);
      iVar4 = FUN_00c93bc0(*(ushort **)(iVar3 + 0x14),param_2);
      if (iVar4 == 0) {
        piVar1 = (int *)(iVar3 + 0xc);
        *param_3 = (int)piVar1;
        (**(code **)(*piVar1 + 4))(piVar1);
        LeaveCriticalSection(lpCriticalSection);
        ExceptionList = lpCriticalSection;
        return 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  *param_3 = 0;
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0x80040216;
}


//// FUNCTION ScalarDeletingDtor_00c91300 @ 00c91300 ////

undefined4 * __thiscall ScalarDeletingDtor_00c91300(void *this,byte param_1)

{
  Dtor_00c8df10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c91330 @ 00c91330 ////

uint FUN_00c91330(int param_1,uint param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_4;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  if (param_4 == (uint *)0x0) {
    if (1 < param_2) {
      return 0x80070057;
    }
  }
  else {
    *param_4 = 0;
  }
  local_4 = 0;
  iVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  if (iVar2 != *(int *)(param_1 + 0x10)) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    *(undefined4 *)(param_1 + 8) = uVar3;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  uVar6 = param_2;
  if ((int)uVar4 < (int)param_2) {
    uVar6 = uVar4;
  }
  if (uVar6 == 0) {
    return 1;
  }
  do {
    iVar2 = *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 8) == iVar2) break;
    *(int *)(param_1 + 4) = iVar2 + 1;
    iVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(iVar2);
    if (iVar2 == 0) {
      return 0x80040203;
    }
    iVar5 = FUN_00c99e40((void *)(param_1 + 0x18),iVar2);
    if (iVar5 == 0) {
      piVar1 = (int *)(iVar2 + 0xc);
      *param_3 = (int)piVar1;
      (**(code **)(*piVar1 + 4))(piVar1);
      local_4 = local_4 + 1;
      param_3 = param_3 + 1;
      FUN_00c99ee0((void *)(param_1 + 0x18),iVar2);
      uVar6 = uVar6 - 1;
    }
  } while (uVar6 != 0);
  if (param_4 != (uint *)0x0) {
    *param_4 = local_4;
  }
  return (uint)(param_2 != local_4);
}


//// FUNCTION FUN_00c91450 @ 00c91450 ////

undefined4 FUN_00c91450(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  if (iVar1 != *(int *)(param_1 + 0x10)) {
    return 0x80040203;
  }
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) < param_2) {
    return 1;
  }
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  return 0;
}


//// FUNCTION Ctor_vt00dadc54_00c91490 @ 00c91490 ////

undefined4 * __fastcall Ctor_vt00dadc54_00c91490(undefined4 *param_1)

{
  byte unaff_retaddr;
  
  *param_1 = &PTR_LAB_00dadc54;
  (**(code **)(*(int *)(param_1[2] + 0xc) + 8))((int *)(param_1[2] + 0xc));
  if ((unaff_retaddr & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}


//// FUNCTION FUN_00c91700 @ 00c91700 ////

int __thiscall FUN_00c91700(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)this + 0x28))(param_1);
  if (iVar2 < 0) {
    (**(code **)(*(int *)this + 0x2c))();
    return iVar2;
  }
  iVar2 = (**(code **)(*(int *)this + 0x20))(param_1);
  if (iVar2 == 0) {
    *(int **)((int)this + 0x18) = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    iVar2 = (**(code **)(*(int *)this + 0x24))(param_1);
    if ((-1 < iVar2) &&
       (iVar2 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0xc,param_1), -1 < iVar2)) {
      iVar2 = (**(code **)(*(int *)this + 0x30))(param_1);
      if (-1 < iVar2) {
        return iVar2;
      }
      (**(code **)(*param_1 + 0x14))(param_1);
    }
  }
  else if (((-1 < iVar2) || (iVar2 == -0x7fffbffb)) || (iVar2 == -0x7ff8ffa9)) {
    iVar2 = -0x7ffbfdd6;
  }
  (**(code **)(*(int *)this + 0x2c))();
  piVar1 = *(int **)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00c917b0 @ 00c917b0 ////

/* WARNING: Removing unreachable block (ram,0x00c917fc) */
/* WARNING: Removing unreachable block (ram,0x00c9180a) */

int FUN_00c917b0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined1 *puStack_1c;
  LPVOID apvStack_8 [2];
  
  piVar1 = param_3;
  iVar2 = (**(code **)(*param_3 + 0x14))();
  if (iVar2 < 0) {
    return iVar2;
  }
  puStack_1c = &stack0xfffffff4;
  param_2 = 0;
  iVar2 = 0;
  iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,1,&param_2);
  if (iVar3 == 0) {
    do {
      iVar3 = FUN_00c91700(unaff_ESI,piVar1);
      if ((((iVar3 < 0) && (-1 < iVar2)) && (iVar3 != -0x7fffbffb)) &&
         ((iVar3 != -0x7ff8ffa9 && (iVar3 != -0x7ffbfdd6)))) {
        iVar2 = iVar3;
      }
      FUN_00c95130(apvStack_8[0]);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,1,apvStack_8,&puStack_1c);
    } while (iVar3 == 0);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return -0x7ffbfdf9;
}


//// FUNCTION FUN_00c91890 @ 00c91890 ////

int __thiscall FUN_00c91890(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int local_4;
  
  piVar1 = param_2;
  local_8 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    iVar2 = FUN_00c94d00(param_2);
    if (iVar2 == 0) {
      iVar2 = FUN_00c91700(this,param_1);
      return iVar2;
    }
  }
  local_4 = -0x7ffbfdf9;
  param_2 = (int *)0x0;
  do {
    if (param_2 == (int *)(uint)*(byte *)((int)this + 0x26)) {
      iVar2 = (**(code **)(*param_1 + 0x30))(param_1,&local_8);
    }
    else {
      iVar2 = (**(code **)(*(int *)((int)this + 0xc) + 0x30))((int)this + 0xc,&local_8);
    }
    if (-1 < iVar2) {
      iVar2 = FUN_00c917b0(param_1,piVar1,local_8);
      (**(code **)(*local_8 + 8))(local_8);
      if (-1 < iVar2) {
        return 0;
      }
      if (((iVar2 != -0x7fffbffb) && (iVar2 != -0x7ff8ffa9)) && (iVar2 != -0x7ffbfdd6)) {
        local_4 = iVar2;
      }
    }
    param_2 = (int *)((int)param_2 + 1);
  } while ((int)param_2 < 2);
  return local_4;
}


//// FUNCTION ScalarDeletingDtor_00c91a30 @ 00c91a30 ////

undefined4 * __thiscall ScalarDeletingDtor_00c91a30(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_LAB_00dadc78;
  if (*(LPVOID *)((int)this + 0x3c) != (LPVOID)0x0) {
    FUN_00c95130(*(LPVOID *)((int)this + 0x3c));
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c91a70 @ 00c91a70 ////

undefined4 * __thiscall ScalarDeletingDtor_00c91a70(void *this,byte param_1)

{
  Dtor_00c8f900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c91a90 @ 00c91a90 ////

uint __thiscall FUN_00c91a90(void *this,HANDLE param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  DWORD DVar2;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  uint uVar3;
  LPHANDLE lpTargetHandle;
  WINBOOL WVar4;
  DWORD dwOptions;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06738;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xa4);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (*(int *)((int)this + 0xc4) == 0) {
    dwOptions = 0;
    WVar4 = 0;
    DVar2 = 2;
    lpTargetHandle = (LPHANDLE)((int)this + 0xc0);
    hTargetProcessHandle = GetCurrentProcess();
    hSourceProcessHandle = GetCurrentProcess();
    WVar4 = DuplicateHandle(hSourceProcessHandle,param_1,hTargetProcessHandle,lpTargetHandle,DVar2,
                            WVar4,dwOptions);
    if (WVar4 == 0) {
      uVar3 = Win32ErrorToHRESULT();
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return uVar3;
    }
    *(undefined4 *)((int)this + 0xc4) = 1;
    DVar2 = GetCurrentThreadId();
    *(DWORD *)((int)this + 200) = DVar2;
    cVar1 = (**(code **)(*(int *)this + 100))();
    if (cVar1 == '\0') {
      FUN_00c8fa90((int)this);
    }
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0;
  }
  DVar2 = GetCurrentThreadId();
  if (*(DWORD *)((int)this + 200) == DVar2) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0x80040293;
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0x80040294;
}


//// FUNCTION CAudioBank_LoadAsync @ 00c91bb0 ////

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall CAudioBank_LoadAsync(void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  void *unaff_EDI;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d06758;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0x18) == 0) {
    return -0x7ffbfdf7;
  }
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  (**(code **)**(undefined4 **)((int)param_1 + 0x18))
            (*(undefined4 **)((int)param_1 + 0x18),&DAT_00daee4c);
  puVar1 = puStack_8;
  if ((&local_10 == (int *)0x0) ||
     (iVar2 = (**(code **)(local_10 + 0xc))(&local_10,puStack_8), iVar2 != 0)) {
    if ((*(int *)((int)param_1 + 0xd4) == 0) || (*(int *)((int)param_1 + 0xd0) == 0)) {
      iVar2 = -0x7fffbffb;
    }
    else {
      iVar2 = (**(code **)(**(int **)((int)param_1 + 0xd4) + 0xc))
                        (*(int **)((int)param_1 + 0xd4),(int)param_1 + 0xc,0,puVar1,0,
                         *(int *)((int)param_1 + 0xd0),2);
    }
    local_10 = -1;
    if (&local_10 != (int *)0x0) {
      (*pcRam00000007)(&local_10);
    }
  }
  else {
    iVar2 = FUN_00c8fde0(param_1,(int)puVar1);
    local_10 = -1;
    if (-1 < iVar2) {
      if (&local_10 != (int *)0x0) {
        (*pcRam00000007)(&local_10);
      }
      ExceptionList = unaff_EDI;
      return 0;
    }
    if (&local_10 != (int *)0x0) {
      (*pcRam00000007)(&local_10);
      ExceptionList = &local_10;
      return iVar2;
    }
  }
  ExceptionList = unaff_EDI;
  return iVar2;
}


//// FUNCTION ScalarDeletingDtor_00c91df0 @ 00c91df0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c91df0(void *this,byte param_1)

{
  Dtor_00c90680(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00dadc34_00c91e90 @ 00c91e90 ////

undefined4 * __thiscall Ctor_vt00dadc34_00c91e90(void *this,int param_1)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0679b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_LAB_00dadc34;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = 1;
  FUN_00c99da0((undefined4 *)((int)this + 0x18));
  local_4 = 0;
  (**(code **)(*(int *)(*(int *)((int)this + 0xc) + 0xc) + 4))(*(int *)((int)this + 0xc) + 0xc);
  if (param_1 == 0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x14))();
    *(undefined4 *)((int)this + 0x10) = uVar1;
    uVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x18))();
    *(undefined4 *)((int)this + 8) = uVar1;
    ExceptionList = this;
    return this;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_00c99fc0((undefined4 *)((int)this + 0x18),(int *)(param_1 + 0x18));
  ExceptionList = this;
  return this;
}


//// FUNCTION Ctor_vt00dadc54_00c92000 @ 00c92000 ////

undefined4 * __thiscall Ctor_vt00dadc54_00c92000(void *this,int param_1)

{
  undefined4 uVar1;
  
  *(int *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_00dadc54;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 1;
  (**(code **)(*(int *)(param_1 + 0xc) + 4))((int *)(param_1 + 0xc));
  if (param_1 == 0) {
    uVar1 = (**(code **)(**(int **)((int)this + 8) + 0x10))();
    *(undefined4 *)((int)this + 0xc) = uVar1;
    return this;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}


//// FUNCTION FUN_00c92100 @ 00c92100 ////

void * __thiscall
FUN_00c92100(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06803;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Wrap_InterlockedIncrement_00c92db0(this,param_1,0);
  *(undefined4 *)((int)this + 0x1c) = param_6;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x25) = 0;
  *(undefined1 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 1;
  FUN_00c94f10((undefined4 *)((int)this + 0x34));
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0xffffffff;
  *(undefined4 *)((int)this + 0x8c) = 0x7fffffff;
  *(undefined8 *)((int)this + 0x90) = 0x3ff0000000000000;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_5 != (undefined4 *)0x0) {
    iVar1 = FUN_00c93c70((int)param_5);
    uVar4 = (iVar1 + 1U) * 2;
    puVar2 = operator_new(uVar4);
    *(undefined4 **)((int)this + 0x14) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      for (uVar3 = (iVar1 + 1U & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *param_5;
        param_5 = param_5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_5;
        param_5 = (undefined4 *)((int)param_5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
    ExceptionList = local_c;
    return this;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c92310 @ 00c92310 ////

uint FUN_00c92310(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0683b;
  local_c = ExceptionList;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  ExceptionList = &local_c;
  puVar1 = operator_new(0x14);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = param_1 + -3;
    *puVar1 = &PTR_LAB_00dadc54;
    puVar1[1] = 0;
    puVar1[4] = 1;
    (**(code **)(*param_1 + 4))(param_1);
    uVar2 = (**(code **)(*(int *)puVar1[2] + 0x10))();
    puVar1[3] = uVar2;
  }
  *param_2 = puVar1;
  ExceptionList = local_c;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x8007000e;
}


//// FUNCTION FUN_00c923c0 @ 00c923c0 ////

void * __thiscall
FUN_00c923c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  FUN_00c92100(this,param_1,param_2,param_3,param_4,param_5,1);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  return this;
}


//// FUNCTION FUN_00c92400 @ 00c92400 ////

void * __thiscall
FUN_00c92400(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00c92100(this,param_1,param_2,param_3,param_4,param_5,0);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined1 *)((int)this + 0xa1) = 0;
  puVar2 = (undefined4 *)((int)this + 0xa8);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}


//// FUNCTION Ctor_vt00dadd40_00c924a0 @ 00c924a0 ////

undefined4 * __thiscall
Ctor_vt00dadd40_00c924a0
          (void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
          undefined4 *param_5)

{
  HANDLE pvVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06866;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c92100(this,param_1,param_2,param_3,param_4,param_5,1);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_00dadd40;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00dadcf8;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00dadce0;
  *(undefined ***)((int)this + 0xa0) = &PTR_LAB_00dadcd0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0xbc) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = Win32ErrorToHRESULT();
    if ((int)uVar2 < 0) {
      *param_4 = uVar2;
    }
  }
  else {
    *(undefined1 *)((int)this + 0x25) = 1;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c925a0 @ 00c925a0 ////

uint __fastcall FUN_00c925a0(void *param_1)

{
  HANDLE hHandle;
  uint uVar1;
  DWORD DVar2;
  
  hHandle = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (hHandle == (HANDLE)0x0) {
    uVar1 = Win32ErrorToHRESULT();
    return uVar1;
  }
  uVar1 = FUN_00c91a90(param_1,hHandle);
  if ((int)uVar1 < 0) {
    CloseHandle(hHandle);
    return uVar1;
  }
  DVar2 = WaitForSingleObject(hHandle,0xffffffff);
  if (DVar2 == 0) {
    CloseHandle(hHandle);
    return 0;
  }
  if (DVar2 != 0xffffffff) {
    CloseHandle(hHandle);
    return 0x8000ffff;
  }
  uVar1 = Win32ErrorToHRESULT();
  CloseHandle(hHandle);
  return (-1 < (int)uVar1) - 1 & uVar1;
}


//// FUNCTION FUN_00c92640 @ 00c92640 ////

int __thiscall
FUN_00c92640(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  int iVar1;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_54 [48];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06878;
  local_c = ExceptionList;
  uStack_68 = 0xc9266c;
  ExceptionList = &local_c;
  FUN_00c94f70(local_54,param_1,(int *)0x0);
  local_4 = 0;
  iVar1 = CAudioBank_LoadAsync(this);
  if (iVar1 < 0) {
    local_4 = 0xffffffff;
    FUN_00c94ed0((int)local_54);
    ExceptionList = local_c;
    return iVar1;
  }
  uStack_68 = param_5;
  uStack_6c = param_4;
  iVar1 = (**(code **)(*(int *)this + 0x58))(param_2,param_3);
  uStack_1c = 0xffffffff;
  FUN_00c94ed0((int)&uStack_6c);
  if (iVar1 < 0) {
    ExceptionList = pvStack_24;
    return iVar1;
  }
  ExceptionList = pvStack_24;
  return 0;
}


//// FUNCTION FUN_00c929e0 @ 00c929e0 ////

void * __thiscall
FUN_00c929e0(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  Wrap_InterlockedIncrement_00c92db0(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = *param_4;
  *(undefined4 *)((int)this + 0x2c) = param_4[1];
  *(undefined4 *)((int)this + 0x30) = param_4[2];
  *(undefined4 *)((int)this + 0x34) = param_4[3];
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x38) = param_3;
  *(undefined4 *)((int)this + 0x48) = 1;
  return this;
}


//// FUNCTION FUN_00c92ad0 @ 00c92ad0 ////

uint FUN_00c92ad0(int param_1,uint param_2,HANDLE param_3)

{
  WINBOOL WVar1;
  uint uVar2;
  void *this;
  
  if ((param_2 & 0xfffffffe) != 0) {
    return 0x80070057;
  }
  if (((param_2 & 1) != 0) && (param_3 != (HANDLE)0x0)) {
    WVar1 = ResetEvent(param_3);
    if (WVar1 == 0) {
      uVar2 = Win32ErrorToHRESULT();
      return uVar2;
    }
  }
  if ((param_2 == 0) && (param_3 != (HANDLE)0x0)) {
    return 0x80070057;
  }
  this = (void *)(param_1 + -0xa0);
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_00c8fad0((int)this);
    return uVar2 & (-1 < (int)uVar2) - 1;
  }
  if (param_3 == (HANDLE)0x0) {
    uVar2 = FUN_00c925a0(this);
    return uVar2 & (-1 < (int)uVar2) - 1;
  }
  uVar2 = FUN_00c91a90(this,param_3);
  return uVar2 & (-1 < (int)uVar2) - 1;
}


//// FUNCTION Ctor_vt00daddd4_00c92b80 @ 00c92b80 ////

undefined4 * Ctor_vt00daddd4_00c92b80(int param_1,undefined4 *param_2)

{
  undefined4 *this;
  HANDLE pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d068db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(100);
  local_4 = 0;
  if (this != (undefined4 *)0x0) {
    Wrap_InterlockedIncrement_00c92db0(this,0,param_1);
    InitializeCriticalSection((LPCRITICAL_SECTION)(this + 4));
    this[10] = 0;
    this[0xb] = 0;
    this[0xc] = 0;
    this[0xd] = 0;
    this[0xe] = 0;
    this[0xf] = 0;
    this[0x10] = 0;
    this[0x11] = 0;
    this[0x12] = 0;
    this[0x13] = 0;
    this[0x14] = 0;
    this[0x15] = 0;
    this[0x16] = 0;
    this[0x17] = 1;
    pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0);
    this[0xc] = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      *param_2 = 0x8007000e;
    }
    this[0x18] = 0;
    *this = &PTR_LAB_00daddd4;
    this[3] = &PTR_LAB_00dadda8;
    ExceptionList = local_c;
    return this;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00c92c80 @ 00c92c80 ////

void FUN_00c92c80(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)&lpAddend_010daa2c);
  if ((LVar1 == 0) && (DAT_010daa28 != (HMODULE)0x0)) {
    FreeLibrary(DAT_010daa28);
    DAT_010daa28 = (HMODULE)0x0;
  }
  return;
}


//// FUNCTION Wrap_LoadLibraryA_00c92cb0 @ 00c92cb0 ////

void Wrap_LoadLibraryA_00c92cb0(void)

{
  if (DAT_010daa28 == (HMODULE)0x0) {
    DAT_010daa28 = LoadLibraryA("OleAut32.dll");
  }
  return;
}


//// FUNCTION FUN_00c92d10 @ 00c92d10 ////

undefined4 FUN_00c92d10(int *param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}


//// FUNCTION Wrap_InterlockedIncrement_00c92db0 @ 00c92db0 ////

int __thiscall Wrap_InterlockedIncrement_00c92db0(void *this,undefined4 param_1,int param_2)

{
  InterlockedIncrement((LONG *)&lpAddend_010daa2c);
  if (param_2 == 0) {
    param_2 = (int)this;
  }
  *(int *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  return (int)this;
}


//// FUNCTION FUN_00c92de0 @ 00c92de0 ////

undefined4 FUN_00c92de0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  IID **ppIVar2;
  bool bVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  iVar1 = 4;
  bVar3 = true;
  ppIVar2 = &riid_00db2a9c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = (IID *)*param_2 == *ppIVar2;
    param_2 = param_2 + 1;
    ppIVar2 = ppIVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    *param_3 = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


//// FUNCTION Wrap_InterlockedIncrement_00c92e30 @ 00c92e30 ////

uint Wrap_InterlockedIncrement_00c92e30(int param_1)

{
  uint uVar1;
  
  InterlockedIncrement((LONG *)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}


//// FUNCTION FUN_00c92e90 @ 00c92e90 ////

undefined4 __thiscall FUN_00c92e90(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)((int)this + 0x50);
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)((int)this + 0x54);
    do {
      if (*piVar3 == param_1) {
        if (iVar1 != 1) {
          iVar2 = iVar2 + 1;
          if (iVar2 < iVar1) {
            do {
              *(undefined4 *)(*(int *)((int)this + 0x54) + iVar2 * 4 + -4) =
                   *(undefined4 *)(*(int *)((int)this + 0x54) + iVar2 * 4);
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)((int)this + 0x50));
          }
          *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + -1;
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        _free(*(int **)((int)this + 0x54));
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)((int)this + 0x50));
  }
  return 1;
}


//// FUNCTION FUN_00c92f20 @ 00c92f20 ////

undefined4 FUN_00c92f20(int param_1,wchar_t *param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  lVar1 = __wtol(param_2);
  iVar2 = (**(code **)(*(int *)(param_1 + -0xc) + 0x1c))(lVar1 + -1);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(iVar2 + 0xc);
  }
  *param_3 = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
    return 0;
  }
  return 0x80040216;
}


//// FUNCTION FUN_00c92f80 @ 00c92f80 ////

int __thiscall FUN_00c92f80(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x50)) {
    piVar3 = *(int **)((int)this + 0x54);
    do {
      if (*piVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3 + 0x54;
      }
      if (iVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < *(int *)((int)this + 0x50));
  }
  return -1;
}


//// FUNCTION FUN_00c92fc0 @ 00c92fc0 ////

undefined4 FUN_00c92fc0(uint param_1,undefined4 *param_2)

{
  int iVar1;
  LPWSTR pWVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  iVar1 = FUN_00c92f80(*(void **)(param_1 + 0x94),-(uint)(param_1 != 0x54) & param_1);
  if (iVar1 + 1 < 1) {
    return 0x80040216;
  }
  pWVar2 = CoTaskMemAlloc(8);
  *param_2 = pWVar2;
  if (pWVar2 == (LPWSTR)0x0) {
    return 0x8007000e;
  }
  FUN_00c93d10(iVar1 + 1,pWVar2);
  return 0;
}


//// FUNCTION Dtor_00c93030 @ 00c93030 ////

void __fastcall Dtor_00c93030(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d0691f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00db12a4;
  param_1[0x12] = &PTR_FUN_00db1248;
  param_1[0x15] = &PTR_FUN_00db1200;
  param_1[0x16] = &PTR_LAB_00db11ec;
  local_4 = 1;
  FUN_00c92e90((void *)param_1[0x3a],(int)param_1);
  local_4 = local_4 & 0xffffff00;
  FUN_00c8e170((int)(param_1 + 0x12));
  local_4 = 0xffffffff;
  FUN_00c946f0((int)param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c930b0 @ 00c930b0 ////

void __fastcall FUN_00c930b0(int param_1)

{
  HANDLE hHandle;
  
  hHandle = (HANDLE)InterlockedExchange((LONG *)(param_1 + 0x14),0);
  if (hHandle != (HANDLE)0x0) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle(hHandle);
  }
  return;
}


//// FUNCTION FUN_00c93100 @ 00c93100 ////

undefined4 __fastcall FUN_00c93100(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(param_1 + 0x14) != 1) && (*(int *)(param_1 + 0x14) != 2)) {
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 1;
}


//// FUNCTION Ctor_vt00db1314_00c93190 @ 00c93190 ////

undefined4 * __thiscall Ctor_vt00db1314_00c93190(void *this,undefined4 param_1,int param_2)

{
  FUN_00c929e0(this,param_1,param_2,(LPCRITICAL_SECTION)((int)this + 0x58),
               (undefined4 *)&stack0x0000000c);
  *(undefined ***)this = &PTR_FUN_00db1314;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00db12d8;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00db12c4;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x58));
  return this;
}


//// FUNCTION Dtor_00c93230 @ 00c93230 ////

void __fastcall Dtor_00c93230(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_00d06943;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00db1314;
  param_1[3] = &PTR_FUN_00db12d8;
  param_1[4] = &PTR_LAB_00db12c4;
  iVar1 = param_1[0x14];
  local_4 = 1;
  while (iVar1 != 0) {
    piVar2 = *(int **)(param_1[0x15] + -4 + param_1[0x14] * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(1);
    }
    iVar1 = param_1[0x14];
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  local_4 = 0xffffffff;
  FUN_00c90d30((int)param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c932c0 @ 00c932c0 ////

undefined4 __thiscall FUN_00c932c0(void *this,undefined4 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06958;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x58);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  puVar1 = operator_new(*(int *)((int)this + 0x50) * 4 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0x8007000e;
  }
  if (*(undefined4 **)((int)this + 0x54) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)((int)this + 0x54);
    puVar5 = puVar1;
    for (uVar2 = *(uint *)((int)this + 0x50) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar1[*(int *)((int)this + 0x50)] = param_1;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x54));
  }
  *(undefined4 **)((int)this + 0x54) = puVar1;
  puVar1[*(int *)((int)this + 0x50)] = param_1;
  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00c933a0 @ 00c933a0 ////

undefined4 __fastcall FUN_00c933a0(int param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return uVar1;
}


//// FUNCTION FUN_00c933c0 @ 00c933c0 ////

int __thiscall FUN_00c933c0(void *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x58);
  EnterCriticalSection(lpCriticalSection);
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0x50))) {
    iVar1 = *(int *)(*(int *)((int)this + 0x54) + param_1 * 4);
    if (iVar1 != 0) {
      LeaveCriticalSection(lpCriticalSection);
      return iVar1 + 0x48;
    }
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


//// FUNCTION Ctor_vt00db12a4_00c93420 @ 00c93420 ////

undefined4 * __thiscall
Ctor_vt00db12a4_00c93420
          (void *this,undefined4 param_1,undefined4 *param_2,void *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06983;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c946a0((int)this);
  local_4 = 0;
  FUN_00c923c0((undefined4 *)((int)this + 0x48),param_1,param_3,(int)param_3 + 0x58,param_2,param_4)
  ;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)this = &PTR_FUN_00db12a4;
  *(undefined4 *)((int)this + 0x48) = &PTR_FUN_00db1248;
  *(undefined ***)((int)this + 0x54) = &PTR_FUN_00db1200;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_00db11ec;
  *(void **)((int)this + 0xe8) = param_3;
  uVar1 = FUN_00c932c0(param_3,this);
  *param_2 = uVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c934c0 @ 00c934c0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c934c0(void *this,byte param_1)

{
  Dtor_00c93030(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c934e0 @ 00c934e0 ////

undefined4 __fastcall FUN_00c934e0(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int *unaff_retaddr;
  LPCRITICAL_SECTION local_58;
  undefined4 local_54 [17];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d069a0;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xa0) + 0x58);
  ExceptionList = &pvStack_c;
  local_58 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  FUN_00c94f10(local_54);
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(*(int *)(param_1 + -0x48) + 0x1c))(local_54);
  iVar1 = FUN_00c94fd0(&local_58,unaff_retaddr);
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if (iVar1 != 0) {
    FUN_00c94ed0((int)&local_58);
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = pvStack_10;
    return 0;
  }
  FUN_00c94ed0((int)&local_58);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_10;
  return 0x80004005;
}


//// FUNCTION FUN_00c935a0 @ 00c935a0 ////

undefined4 __thiscall FUN_00c935a0(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d069b8;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)((int)this + 0xa0) + 0x58);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (param_1 < 0) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0x80070057;
  }
  if (0 < param_1) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0x40103;
  }
  uVar1 = (**(code **)(*(int *)((int)this + -0x48) + 0x1c))(param_2);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = lpCriticalSection;
  return uVar1;
}


//// FUNCTION FUN_00c93650 @ 00c93650 ////

int __fastcall FUN_00c93650(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection_00;
  LPVOID this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d069d8;
  local_c = ExceptionList;
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xa0) + 0x58);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection_00);
  iVar2 = *(int *)(param_1 + 0xa0);
  lpCriticalSection = *(LPCRITICAL_SECTION *)(iVar2 + 0x38);
  local_4 = 0;
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)(iVar2 + 0x14);
  if ((iVar2 == 1) || (iVar2 == 2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  LeaveCriticalSection(lpCriticalSection);
  if (bVar1) {
    LeaveCriticalSection(lpCriticalSection_00);
    ExceptionList = local_c;
    return 1;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    LeaveCriticalSection(lpCriticalSection_00);
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = FUN_00c8eac0(param_1);
  if (-1 < iVar2) {
    this = (LPVOID)(param_1 + -0x48);
    iVar2 = FUN_00c947a0(this);
    if (iVar2 == 0) {
      LeaveCriticalSection(lpCriticalSection_00);
      ExceptionList = local_c;
      return -0x7fffbffb;
    }
    iVar2 = FUN_00c94800(this,0);
    if (-1 < iVar2) {
      iVar2 = FUN_00c94800(this,1);
      LeaveCriticalSection(lpCriticalSection_00);
      ExceptionList = local_c;
      return iVar2;
    }
  }
  LeaveCriticalSection(lpCriticalSection_00);
  ExceptionList = local_c;
  return iVar2;
}


//// FUNCTION FUN_00c93780 @ 00c93780 ////

int __fastcall FUN_00c93780(int param_1)

{
  int iVar1;
  void *this;
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d069f8;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xa0) + 0x58);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = FUN_00c8eae0(param_1);
  if (-1 < iVar1) {
    if (*(int *)(param_1 + -0x34) == 0) {
LAB_00c9382f:
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return 0;
    }
    this = (void *)(param_1 + -0x48);
    iVar1 = FUN_00c94800(this,3);
    if (-1 < iVar1) {
      iVar1 = FUN_00c94800(this,4);
      if (-1 < iVar1) {
        FUN_00c930b0((int)this);
        goto LAB_00c9382f;
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00c93850 @ 00c93850 ////

bool __fastcall FUN_00c93850(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  while (iVar1 = Wrap_WaitForSingleObject_00c94860((int)param_1), iVar1 != 0) {
    FUN_00c948b0(param_1,0x8000ffff);
  }
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 < 0) {
    (**(code **)(*param_1 + 0x10))();
    FUN_00c948b0(param_1,iVar1);
    return true;
  }
  FUN_00c948b0(param_1,0);
  do {
    iVar1 = Wrap_WaitForSingleObject_00c94860((int)param_1);
    switch(iVar1) {
    case 1:
    case 2:
      FUN_00c948b0(param_1,0);
      (**(code **)(*param_1 + 0x18))();
      goto LAB_00c938d0;
    case 3:
    case 4:
      uVar2 = 0;
      break;
    default:
      uVar2 = 0x80004001;
    }
    FUN_00c948b0(param_1,uVar2);
LAB_00c938d0:
    if (iVar1 == 4) {
      iVar1 = (**(code **)(*param_1 + 0x10))();
      return iVar1 < 0;
    }
  } while( true );
}


//// FUNCTION FUN_00c93900 @ 00c93900 ////

int __fastcall FUN_00c93900(int *param_1)

{
  int iVar1;
  int *unaff_EBX;
  int *unaff_EBP;
  undefined4 uVar2;
  undefined4 uStack_8;
  int iStack_4;
  
  (**(code **)(*param_1 + 0x14))();
LAB_00c93914:
  do {
    iVar1 = Wrap_WaitForSingleObject_00c94880(param_1,&iStack_4);
    if (iVar1 == 0) {
      do {
        iVar1 = (**(code **)(param_1[0x12] + 0x40))(&uStack_8,0,0,0);
        if (-1 < iVar1) {
          iVar1 = (**(code **)(*param_1 + 8))(uStack_8);
          if (iVar1 != 0) {
            if (iVar1 != 1) {
              (**(code **)(*unaff_EBX + 8))(unaff_EBX);
              (**(code **)(param_1[0x12] + 0x4c))();
              FUN_00c8de20((void *)param_1[0x3a],3,iVar1,0);
              return iVar1;
            }
            (**(code **)(*unaff_EBX + 8))();
            (**(code **)(param_1[0x12] + 0x4c))();
            return 0;
          }
          iVar1 = (**(code **)(param_1[0x12] + 0x44))();
          (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          if (iVar1 != 0) {
            return 0;
          }
          goto LAB_00c93914;
        }
        Sleep(1);
        iVar1 = Wrap_WaitForSingleObject_00c94880(param_1,&iStack_4);
      } while (iVar1 == 0);
    }
    if ((iStack_4 == 2) || (iStack_4 == 1)) {
      uVar2 = 0;
    }
    else {
      if (iStack_4 == 3) {
        return 1;
      }
      uVar2 = 0x8000ffff;
    }
    FUN_00c948b0(param_1,uVar2);
    if (iStack_4 == 3) {
      return 1;
    }
  } while( true );
}


//// FUNCTION ScalarDeletingDtor_00c93a10 @ 00c93a10 ////

undefined4 * __thiscall ScalarDeletingDtor_00c93a10(void *this,byte param_1)

{
  Dtor_00c93230(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION EnlargedUnsignedDivide @ 00c93a30 ////

/* Library Function - Single Match
    unsigned long __stdcall EnlargedUnsignedDivide(union _ULARGE_INTEGER,unsigned long,unsigned long
   *)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

ulong EnlargedUnsignedDivide(_ULARGE_INTEGER param_1,ulong param_2,ulong *param_3)

{
  if (param_3 != (ulong *)0x0) {
    *param_3 = (ulong)((ulonglong)param_1 % (ulonglong)param_2);
  }
  return (ulong)((ulonglong)param_1 / (ulonglong)param_2);
}


//// FUNCTION Wrap_CreateEventA_00c93a60 @ 00c93a60 ////

undefined4 * __thiscall Wrap_CreateEventA_00c93a60(void *this,BOOL param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_1,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return this;
}


//// FUNCTION Wrap_CloseHandle_00c93a80 @ 00c93a80 ////

void __fastcall Wrap_CloseHandle_00c93a80(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}


//// FUNCTION LH_TimedWait @ 00c93a90 ////

bool __thiscall LH_TimedWait(void *this,DWORD param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  tagMSG local_1c;
  
  DVar1 = param_1;
  DVar3 = param_1;
  if (param_1 != 0xffffffff) {
    DVar2 = timeGetTime();
    param_1 = DVar2;
  }
  while (DVar2 = MsgWaitForMultipleObjects(1,this,0,DVar3,0x40), DVar2 == 1) {
    PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
    if (DVar3 != 0xffffffff) {
      DVar3 = timeGetTime();
      if (DVar3 - param_1 < DVar1) {
        DVar3 = DVar1 - (DVar3 - param_1);
      }
      else {
        DVar3 = 0;
      }
    }
  }
  return DVar2 == 0;
}


//// FUNCTION FUN_00c93b50 @ 00c93b50 ////

short * FUN_00c93b50(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *param_2;
    *param_1 = sVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  return psVar2;
}


//// FUNCTION FUN_00c93b80 @ 00c93b80 ////

short * FUN_00c93b80(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  if (param_3 != 0) {
    while (param_3 = param_3 + -1, param_3 != 0) {
      sVar1 = *param_2;
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (sVar1 == 0) {
        return psVar2;
      }
    }
    *param_1 = 0;
  }
  return psVar2;
}


//// FUNCTION FUN_00c93bc0 @ 00c93bc0 ////

int FUN_00c93bc0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  do {
    uVar1 = *param_1;
    uVar2 = *param_2;
    if (uVar1 != uVar2) {
      return (uint)uVar1 - (uint)uVar2;
    }
    param_1 = param_1 + 1;
  } while ((uVar1 != 0) && (param_2 = param_2 + 1, uVar2 != 0));
  return 0;
}


//// FUNCTION FUN_00c93c70 @ 00c93c70 ////

void FUN_00c93c70(int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  do {
    iVar1 = iVar1 + 1;
  } while (*(short *)(param_1 + iVar1 * 2) != 0);
  return;
}


//// FUNCTION FUN_00c93d10 @ 00c93d10 ////

void FUN_00c93d10(undefined4 param_1,LPWSTR param_2)

{
  CHAR local_20 [32];
  
  wsprintfA(local_20,(LPCSTR)&param_2_00d1b93c,param_1);
  MultiByteToWideChar(0,0,local_20,-1,param_2,0x20);
  return;
}


//// FUNCTION MemMove @ 00c93d50 ////

void MemMove(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)((int)param_2 + param_3))) {
    puVar3 = (undefined1 *)((int)param_2 + param_3);
    puVar4 = (undefined1 *)((int)param_1 + param_3);
    while( true ) {
      puVar4 = puVar4 + -1;
      puVar3 = puVar3 + -1;
      if (param_3 == 0) break;
      param_3 = param_3 - 1;
      *puVar4 = *puVar3;
    }
    return;
  }
  uVar2 = param_3 & 3;
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  if (uVar2 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
  }
  return;
}


//// FUNCTION Math_Divide64bit @ 00c93db0 ////

/* WARNING: Removing unreachable block (ram,0x00c93fae) */

longlong Math_Divide64bit(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                         uint param_6,uint param_7,uint param_8)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_ECX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  if ((int)param_2 < 0) {
    bVar13 = param_1 != 0;
    param_1 = -param_1;
    local_1c = -(param_2 + bVar13);
  }
  else {
    local_1c = param_2;
  }
  if ((int)param_4 < 0) {
    local_28 = -param_3;
    local_24 = -(param_4 + (param_3 != 0));
  }
  else {
    local_28 = param_3;
    local_24 = param_4;
  }
  uVar3 = param_6;
  uVar5 = param_5;
  if ((int)param_6 < 0) {
    uVar3 = -(param_6 + (param_5 != 0));
    uVar5 = -param_5;
  }
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  if (((int)param_4 < 1) && ((int)param_4 < 0)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  bVar13 = (bool)(bVar2 ^ bVar1);
  uVar14 = __allmul(param_1,0,local_28,0);
  uVar8 = (uint)uVar14;
  lVar15 = __allmul(local_24,0,param_1,0);
  lVar16 = __allmul(local_1c,0,local_28,0);
  uVar14 = lVar15 + lVar16 + (uVar14 >> 0x20);
  uVar9 = (uint)uVar14;
  lVar15 = __allmul(local_24,0,local_1c,0);
  uVar14 = lVar15 + (uVar14 >> 0x20);
  if (param_7 == 0 && param_8 == 0) goto LAB_00c93f83;
  if (bVar13) {
    local_20 = -param_7;
    uVar6 = -(param_8 + (param_7 != 0));
    if (((int)param_8 < 0) || (((int)param_8 < 1 && (param_7 == 0)))) {
LAB_00c93f13:
      uVar10 = 0;
      param_8 = uVar6;
    }
    else {
      uVar10 = 0xffffffff;
      param_8 = uVar6;
    }
  }
  else {
    local_20 = param_7;
    uVar6 = param_8;
    if ((0 < (int)param_8) || (-1 < (int)param_8)) goto LAB_00c93f13;
    uVar10 = 0xffffffff;
  }
  bVar11 = CARRY4(uVar8,local_20);
  uVar8 = uVar8 + local_20;
  bVar12 = CARRY4(param_8,uVar9);
  uVar6 = param_8 + uVar9;
  uVar9 = bVar11 + uVar6;
  uVar6 = (uint)bVar12 + (uint)CARRY4((uint)bVar11,uVar6);
  lVar15 = CONCAT44(uVar10 + CARRY4(uVar6,uVar10),uVar6 + uVar10);
  lVar16 = uVar14 + lVar15;
  uVar14 = uVar14 + lVar15;
  if (lVar16 < 0) {
    bVar13 = !bVar13;
    uVar6 = ~uVar8;
    uVar8 = uVar6 + 1;
    uVar9 = ~uVar9 + (uint)(0xfffffffe < uVar6);
    uVar6 = (uint)(uVar8 == 0 && uVar9 == 0);
    uVar14 = CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) + (uint)CARRY4(~(uint)lVar16,uVar6),
                      ~(uint)lVar16 + uVar6);
  }
LAB_00c93f83:
  if (((int)param_6 < 1) && ((int)param_6 < 0)) {
    bVar13 = !bVar13;
  }
  if (CONCAT44(uVar3,uVar5) <= uVar14) {
    if (!bVar13) {
      return 0x7fffffffffffffff;
    }
    return -0x8000000000000000;
  }
  if (uVar14 == 0) {
    lVar15 = __aulldiv(uVar8,uVar9,uVar5,uVar3);
    if (bVar13) {
      return CONCAT44(-((int)((ulonglong)lVar15 >> 0x20) + (uint)((int)lVar15 != 0)),-(int)lVar15);
    }
  }
  else {
    if (uVar3 == 0) {
      lVar16 = __aulldvrm(uVar9,(uint)uVar14,uVar5,0);
      lVar15 = __aulldiv(uVar8,extraout_ECX,uVar5,0);
      lVar15 = lVar15 + (lVar16 << 0x20);
      if (bVar13) {
        lVar15 = CONCAT44(-((int)((ulonglong)lVar15 >> 0x20) + (uint)((int)lVar15 != 0)),
                          -(int)lVar15);
      }
      return lVar15;
    }
    uVar10 = 0;
    uVar6 = 0;
    param_5 = 0x40;
    do {
      uVar6 = uVar6 << 1 | uVar10 >> 0x1f;
      uVar7 = (int)(uVar14 >> 0x20) << 1 | (uint)uVar14 >> 0x1f;
      uVar10 = uVar10 * 2;
      uVar4 = (uint)uVar14 * 2;
      if ((int)uVar9 < 0) {
        uVar4 = uVar4 + 1;
      }
      uVar9 = uVar9 << 1 | uVar8 >> 0x1f;
      uVar8 = uVar8 << 1;
      if ((uVar3 <= uVar7) && ((uVar3 < uVar7 || (uVar5 <= uVar4)))) {
        bVar11 = uVar4 < uVar5;
        uVar4 = uVar4 - uVar5;
        uVar7 = (uVar7 - uVar3) - (uint)bVar11;
        bVar11 = 0xfffffffe < uVar10;
        uVar10 = uVar10 + 1;
        uVar6 = uVar6 + bVar11;
      }
      uVar14 = CONCAT44(uVar7,uVar4);
      param_5 = param_5 - 1;
    } while (param_5 != 0);
    if (bVar13) {
      bVar13 = uVar10 != 0;
      uVar10 = -uVar10;
      uVar6 = -(uVar6 + bVar13);
    }
    lVar15 = CONCAT44(uVar6,uVar10);
  }
  return lVar15;
}


//// FUNCTION SignedDecimal_Divide @ 00c94100 ////

/* WARNING: Removing unreachable block (ram,0x00c942cc) */

undefined8 SignedDecimal_Divide(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  undefined8 local_14;
  
  uVar6 = param_2;
  uVar5 = param_2;
  if ((int)param_2 < 0) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    uVar5 = -(param_2 + bVar10);
  }
  if ((int)param_3 < 0) {
    param_2 = -param_3;
  }
  else {
    param_2 = param_3;
  }
  uVar4 = param_4;
  if ((int)param_4 < 0) {
    uVar4 = -param_4;
  }
  if (((int)uVar6 < 1) && ((int)uVar6 < 0)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  bVar10 = (bool)((int)param_3 < 0 ^ bVar2);
  local_14 = __allmul(param_1,0,param_2,0);
  uVar6 = (uint)((ulonglong)local_14 >> 0x20);
  if (uVar5 == 0) {
    uVar1 = (ulonglong)uVar6;
  }
  else {
    lVar12 = __allmul(uVar5,0,param_2,0);
    uVar1 = lVar12 + (ulonglong)uVar6;
    local_14 = CONCAT44((int)uVar1,(uint)local_14);
  }
  if (param_5 != 0) {
    uVar6 = (int)param_5 >> 0x1f;
    if (bVar10) {
      param_1 = -param_5;
      uVar6 = -(uVar6 + (param_5 != 0));
      bVar11 = (int)param_5 < 1;
    }
    else {
      bVar11 = -1 < (int)param_5;
      param_1 = param_5;
    }
    param_5 = bVar11 - 1;
    uVar5 = (uint)local_14 + param_1;
    uVar7 = uVar6 + (uint)uVar1;
    uVar9 = CARRY4((uint)local_14,param_1) + uVar7;
    uVar6 = (int)(uVar1 >> 0x20) +
            (uint)CARRY4(uVar6,(uint)uVar1) +
            (uint)CARRY4((uint)CARRY4((uint)local_14,param_1),uVar7) + param_5;
    uVar1 = CONCAT44(uVar6,uVar9);
    local_14 = CONCAT44(uVar9,uVar5);
    if ((int)uVar6 < 0) {
      bVar10 = !bVar10;
      uVar5 = ~uVar5;
      iVar3 = uVar5 + 1;
      iVar8 = ~uVar9 + (uint)(0xfffffffe < uVar5);
      local_14 = CONCAT44(iVar8,iVar3);
      uVar1 = CONCAT44(~uVar6 + (uint)(iVar3 == 0 && iVar8 == 0),iVar8);
    }
  }
  uVar5 = (uint)(uVar1 >> 0x20);
  uVar6 = (uint)uVar1;
  if ((int)param_4 < 0) {
    bVar10 = !bVar10;
  }
  if (uVar4 <= uVar5) {
    if (bVar10) {
      return 0x8000000000000000;
    }
    return 0x7fffffffffffffff;
  }
  if ((uVar5 == 0) && (uVar6 < uVar4)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)(uVar1 / uVar4);
    if (&stack0x00000000 != &DAT_00000010) {
                    /* WARNING: Ignoring partial resolution of indirect */
      local_14._4_4_ = (int)(uVar1 % (ulonglong)uVar4);
    }
    uVar6 = local_14._4_4_;
  }
  iVar8 = (int)(CONCAT44(uVar6,(uint)local_14) / (ulonglong)uVar4);
  if (bVar10) {
    bVar10 = iVar8 != 0;
    iVar8 = -iVar8;
    iVar3 = -(iVar3 + (uint)bVar10);
  }
  return CONCAT44(iVar3,iVar8);
}


//// FUNCTION FUN_00c94350 @ 00c94350 ////

undefined4 FUN_00c94350(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  iVar1 = -1;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(short *)((int)param_1 + iVar1 * 2) != 0);
  uVar5 = iVar2 + 3 + iVar1;
  puVar3 = CoTaskMemAlloc(uVar5);
  *param_2 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return 0;
}


//// FUNCTION LH_DirectShow_MessagePump @ 00c943b0 ////

DWORD LH_DirectShow_MessagePump(HANDLE param_1,uint param_2,HWND param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint wMsgFilterMin;
  DWORD DVar2;
  int iVar3;
  HANDLE pvVar4;
  HANDLE pvVar5;
  DWORD DVar6;
  UINT UVar7;
  uint nCount;
  uint dwMilliseconds;
  WPARAM wParam;
  LPARAM lParam;
  HANDLE local_24;
  int local_20;
  tagMSG local_1c;
  
  wMsgFilterMin = param_4;
  bVar1 = false;
  local_24 = param_1;
  local_20 = param_5;
  if ((param_2 != 0xffffffff) && (param_2 != 0)) {
    param_1 = (HANDLE)GetTickCount();
  }
  nCount = (param_5 != 0) + 1;
  DVar2 = WaitForMultipleObjects(nCount,&local_24,0,0);
  if (nCount <= DVar2) {
    do {
      dwMilliseconds = param_2;
      if (10 < param_2) {
        dwMilliseconds = 10;
      }
      DVar2 = MsgWaitForMultipleObjects
                        (nCount,&local_24,0,dwMilliseconds,(uint)(param_3 != (HWND)0x0) * 8 + 0x40);
      if ((DVar2 != nCount) && ((DVar2 != 0x102 || (dwMilliseconds == param_2)))) break;
      if (param_3 != (HWND)0x0) {
        iVar3 = PeekMessageA(&local_1c,(HWND)param_3,wMsgFilterMin,wMsgFilterMin,1);
        while (iVar3 != 0) {
          DispatchMessageA(&local_1c);
          iVar3 = PeekMessageA(&local_1c,(HWND)param_3,wMsgFilterMin,wMsgFilterMin,1);
        }
      }
      PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
      if ((param_2 != 0xffffffff) && (param_2 != 0)) {
        pvVar4 = (HANDLE)GetTickCount();
        if (param_2 < (uint)((int)pvVar4 - (int)param_1)) {
          param_2 = 0;
          param_1 = pvVar4;
        }
        else {
          param_2 = param_2 - ((int)pvVar4 - (int)param_1);
          param_1 = pvVar4;
        }
      }
      if (!bVar1) {
        pvVar5 = GetCurrentThread();
        param_4 = GetThreadPriority(pvVar5);
        if (param_4 < 2) {
          iVar3 = 2;
          pvVar5 = GetCurrentThread();
          SetThreadPriority(pvVar5,iVar3);
        }
        bVar1 = true;
      }
      DVar2 = WaitForMultipleObjects(nCount,&local_24,0,0);
    } while (nCount <= DVar2);
    if (bVar1) {
      pvVar5 = GetCurrentThread();
      SetThreadPriority(pvVar5,param_4);
      DVar6 = GetQueueStatus(8);
      if ((DVar6 >> 0x10 & 8) != 0) {
        if (DAT_010daa30 != 0) goto LAB_00c94580;
        DAT_010daa30 = RegisterWindowMessageA("AMUnblock");
        UVar7 = DAT_010daa30;
        while (UVar7 != 0) {
LAB_00c94580:
          UVar7 = PeekMessageA(&local_1c,(HWND)0xffffffff,DAT_010daa30,DAT_010daa30,1);
        }
        lParam = 0;
        wParam = 0;
        UVar7 = DAT_010daa30;
        DVar6 = GetCurrentThreadId();
        PostThreadMessageA(DVar6,UVar7,wParam,lParam);
      }
    }
  }
  return DVar2;
}


//// FUNCTION Win32ErrorToHRESULT @ 00c945c0 ////

uint Win32ErrorToHRESULT(void)

{
  uint uVar1;
  
  uVar1 = GetLastError();
  if (uVar1 == 0) {
    uVar1 = 0x80004005;
  }
  else if (0 < (int)uVar1) {
    return uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}


//// FUNCTION FUN_00c946a0 @ 00c946a0 ////

int __fastcall FUN_00c946a0(int param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 4) = pvVar1;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 8) = pvVar1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}


//// FUNCTION FUN_00c946f0 @ 00c946f0 ////

void __fastcall FUN_00c946f0(int param_1)

{
  HANDLE hHandle;
  
  hHandle = (HANDLE)InterlockedExchange((LONG *)(param_1 + 0x14),0);
  if (hHandle != (HANDLE)0x0) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle(hHandle);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 8));
  }
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
  }
  return;
}


//// FUNCTION lpStartAddress_00c94750 @ 00c94750 ////

/* lpStartAddress parameter of CreateThread
    */

undefined4 lpStartAddress_00c94750(undefined4 *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = -0x7fffbffb;
  hModule = GetModuleHandleA("ole32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CoInitializeEx");
    if (pFVar1 != (FARPROC)0x0) {
      iVar3 = (*pFVar1)(0,4);
    }
  }
  uVar2 = (**(code **)*param_1)();
  if (-1 < iVar3) {
    CoUninitialize();
  }
  return uVar2;
}


//// FUNCTION FUN_00c947a0 @ 00c947a0 ////

undefined4 __fastcall FUN_00c947a0(LPVOID param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE pvVar1;
  LPVOID local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x18);
  local_4 = param_1;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)param_1 + 0x14) == 0) {
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,lpStartAddress_00c94750,param_1,0,
                          (LPDWORD)&local_4);
    *(HANDLE *)((int)param_1 + 0x14) = pvVar1;
    if (pvVar1 != (HANDLE)0x0) {
      LeaveCriticalSection(lpCriticalSection);
      return 1;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


//// FUNCTION FUN_00c94800 @ 00c94800 ////

undefined4 __thiscall FUN_00c94800(void *this,undefined4 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0x14) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  *(undefined4 *)((int)this + 0xc) = param_1;
  SetEvent(*(HANDLE *)((int)this + 4));
  WaitForSingleObject(*(HANDLE *)((int)this + 8),0xffffffff);
  uVar1 = *(undefined4 *)((int)this + 0x10);
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}


//// FUNCTION Wrap_WaitForSingleObject_00c94860 @ 00c94860 ////

undefined4 __fastcall Wrap_WaitForSingleObject_00c94860(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  return *(undefined4 *)(param_1 + 0xc);
}


//// FUNCTION Wrap_WaitForSingleObject_00c94880 @ 00c94880 ////

undefined4 __thiscall Wrap_WaitForSingleObject_00c94880(void *this,undefined4 *param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)((int)this + 4),0);
  if (DVar1 != 0) {
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0xc);
  }
  return 1;
}


//// FUNCTION FUN_00c948b0 @ 00c948b0 ////

void __thiscall FUN_00c948b0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x10) = param_1;
  ResetEvent(*(HANDLE *)((int)this + 4));
                    /* WARNING: Could not recover jumptable at 0x00c948cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEvent(*(HANDLE *)((int)this + 8));
  return;
}


//// FUNCTION FUN_00c948e0 @ 00c948e0 ////

void __fastcall FUN_00c948e0(int param_1)

{
  void *_Memory;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d06a26;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  local_10 = param_1;
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    ExceptionList = &local_c;
    WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + 8));
  }
  local_14 = *(int *)(param_1 + 0xc);
  if (local_14 != 0) {
    _Memory = (void *)FUN_00c99e00(&local_14);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_00c99dc0((undefined4 *)(param_1 + 0xc));
  if (*(HANDLE *)(param_1 + 0x3c) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x3c));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  local_4 = 0xffffffff;
  FUN_00c9a310((undefined4 *)(param_1 + 0xc));
  ExceptionList = local_c;
  return;
}


//// FUNCTION COM_CoInitializeMainLoop @ 00c94990 ////

int COM_CoInitializeMainLoop(int *param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  CoInitialize((LPVOID)0x0);
  (**(code **)(*param_1 + 4))();
  do {
    (**(code **)*param_1)(&local_10);
    iVar1 = (**(code **)(*param_1 + 8))(unaff_EBX,local_10,local_c,local_8);
  } while (iVar1 == 0);
  CoUninitialize();
  return iVar1;
}


//// FUNCTION FUN_00c94a00 @ 00c94a00 ////

void __thiscall FUN_00c94a00(void *this,undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06a38;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x24);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  _Memory = (undefined4 *)FUN_00c9a380((undefined4 *)((int)this + 0xc));
  while (_Memory == (undefined4 *)0x0) {
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
    LeaveCriticalSection(lpCriticalSection);
    WaitForSingleObject(*(HANDLE *)((int)this + 0x3c),0xffffffff);
    EnterCriticalSection(lpCriticalSection);
    local_4 = 0;
    _Memory = (undefined4 *)FUN_00c9a380((undefined4 *)((int)this + 0xc));
  }
  local_4 = 0xffffffff;
  LeaveCriticalSection(lpCriticalSection);
  *param_1 = *_Memory;
  param_1[1] = _Memory[1];
  param_1[2] = _Memory[2];
  param_1[3] = _Memory[3];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION Std_MemCmp_Dwords @ 00c94b40 ////

bool __fastcall Std_MemCmp_Dwords(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  bVar3 = true;
  iVar1 = 4;
  piVar2 = &DAT_00db24dc;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_1 == *piVar2;
    param_1 = param_1 + 1;
    piVar2 = piVar2 + 1;
  } while (bVar3);
  return !bVar3;
}


//// FUNCTION FUN_00c94b60 @ 00c94b60 ////

void __thiscall FUN_00c94b60(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return;
}


//// FUNCTION FUN_00c94b80 @ 00c94b80 ////

void __thiscall FUN_00c94b80(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = param_1[1];
  *(undefined4 *)((int)this + 0x18) = param_1[2];
  *(undefined4 *)((int)this + 0x1c) = param_1[3];
  return;
}


//// FUNCTION FUN_00c94bb0 @ 00c94bb0 ////

void __thiscall FUN_00c94bb0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x24) = param_1;
  return;
}


//// FUNCTION FUN_00c94bc0 @ 00c94bc0 ////

void __thiscall FUN_00c94bc0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x2c) = *param_1;
  *(undefined4 *)((int)this + 0x30) = param_1[1];
  *(undefined4 *)((int)this + 0x34) = param_1[2];
  *(undefined4 *)((int)this + 0x38) = param_1[3];
  return;
}


//// FUNCTION Wrap_CoTaskMemFree_00c94be0 @ 00c94be0 ////

void __fastcall Wrap_CoTaskMemFree_00c94be0(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    CoTaskMemFree(*(LPVOID *)(param_1 + 0x44));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}


//// FUNCTION FUN_00c94c00 @ 00c94c00 ////

LPVOID __thiscall FUN_00c94c00(void *this,uint param_1)

{
  LPVOID pvVar1;
  
  if (*(uint *)((int)this + 0x40) == param_1) {
    return *(LPVOID *)((int)this + 0x44);
  }
  pvVar1 = CoTaskMemAlloc(param_1);
  if (pvVar1 == (LPVOID)0x0) {
    if (param_1 <= *(uint *)((int)this + 0x40)) {
      return *(LPVOID *)((int)this + 0x44);
    }
    return (LPVOID)0x0;
  }
  if (*(uint *)((int)this + 0x40) != 0) {
    CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
  }
  *(LPVOID *)((int)this + 0x44) = pvVar1;
  *(uint *)((int)this + 0x40) = param_1;
  return pvVar1;
}


//// FUNCTION FUN_00c94c60 @ 00c94c60 ////

undefined4 * __thiscall FUN_00c94c60(void *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(uint *)((int)this + 0x40) == param_1) {
    return *(undefined4 **)((int)this + 0x44);
  }
  puVar1 = CoTaskMemAlloc(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    if (param_1 <= *(uint *)((int)this + 0x40)) {
      return *(undefined4 **)((int)this + 0x44);
    }
    return (undefined4 *)0x0;
  }
  uVar3 = *(uint *)((int)this + 0x40);
  if (uVar3 != 0) {
    if (param_1 < uVar3) {
      uVar3 = param_1;
    }
    puVar4 = *(undefined4 **)((int)this + 0x44);
    puVar5 = puVar1;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
  }
  *(undefined4 **)((int)this + 0x44) = puVar1;
  *(uint *)((int)this + 0x40) = param_1;
  return puVar1;
}


//// FUNCTION FUN_00c94ce0 @ 00c94ce0 ////

void __fastcall FUN_00c94ce0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[10] = 1;
  param_1[8] = 1;
  return;
}


//// FUNCTION FUN_00c94d00 @ 00c94d00 ////

undefined4 __fastcall FUN_00c94d00(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_1;
  piVar3 = &DAT_00db24dc;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = param_1 + 0xb;
    piVar3 = &DAT_00db24dc;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      return 0;
    }
  }
  return 1;
}


//// FUNCTION FUN_00c94d40 @ 00c94d40 ////

undefined4 __thiscall FUN_00c94d40(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar1 = 4;
  bVar6 = true;
  piVar2 = param_1;
  piVar4 = &DAT_00db24dc;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *piVar2 == *piVar4;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar1 = 4;
    bVar6 = true;
    piVar2 = this;
    piVar4 = param_1;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *piVar2 == *piVar4;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar6);
    if (!bVar6) {
      return 0;
    }
  }
  iVar1 = 4;
  bVar6 = true;
  piVar2 = param_1 + 4;
  piVar4 = &DAT_00db24dc;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *piVar2 == *piVar4;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar1 = 4;
    bVar6 = true;
    piVar2 = (int *)((int)this + 0x10);
    piVar4 = param_1 + 4;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *piVar2 == *piVar4;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar6);
    if (!bVar6) {
      return 0;
    }
  }
  iVar1 = 4;
  bVar6 = true;
  piVar2 = param_1 + 0xb;
  piVar4 = &DAT_00db24dc;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *piVar2 == *piVar4;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar1 = 4;
    bVar6 = true;
    piVar2 = (int *)((int)this + 0x2c);
    piVar4 = param_1 + 0xb;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *piVar2 == *piVar4;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar6);
    if ((!bVar6) || (iVar1 = *(int *)((int)this + 0x40), iVar1 != param_1[0x10])) {
      return 0;
    }
    if (iVar1 != 0) {
      bVar6 = true;
      pcVar3 = *(char **)((int)this + 0x44);
      pcVar5 = (char *)param_1[0x11];
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = *pcVar3 == *pcVar5;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (!bVar6) {
        return 0;
      }
    }
  }
  return 1;
}


//// FUNCTION COM_CopyVariant @ 00c94df0 ////

undefined4 COM_CopyVariant(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar2 = param_2;
  puVar6 = param_1;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  if (param_2[0x10] != 0) {
    puVar2 = CoTaskMemAlloc(param_2[0x10]);
    param_1[0x11] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x10] = 0;
      return 0x8007000e;
    }
    uVar5 = param_1[0x10];
    puVar6 = (undefined4 *)param_2[0x11];
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  piVar1 = (int *)param_1[0xf];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return 0;
}


//// FUNCTION FUN_00c94ed0 @ 00c94ed0 ////

void __fastcall FUN_00c94ed0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    CoTaskMemFree(*(LPVOID *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


//// FUNCTION FUN_00c94f10 @ 00c94f10 ////

undefined4 * __fastcall FUN_00c94f10(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[10] = 1;
  param_1[8] = 1;
  return param_1;
}


//// FUNCTION FUN_00c94f70 @ 00c94f70 ////

undefined4 * __thiscall FUN_00c94f70(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = COM_CopyVariant(this,param_1);
  if ((iVar1 < 0) && (param_2 != (int *)0x0)) {
    *param_2 = iVar1;
  }
  return this;
}


//// FUNCTION FUN_00c94fd0 @ 00c94fd0 ////

undefined4 __thiscall FUN_00c94fd0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar1 = 4;
  bVar6 = true;
  piVar2 = this;
  piVar4 = param_1;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *piVar2 == *piVar4;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar6);
  if (bVar6) {
    iVar1 = 4;
    bVar6 = true;
    piVar2 = (int *)((int)this + 0x10);
    piVar4 = param_1 + 4;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *piVar2 == *piVar4;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar6);
    if (bVar6) {
      iVar1 = 4;
      bVar6 = true;
      piVar2 = (int *)((int)this + 0x2c);
      piVar4 = param_1 + 0xb;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = *piVar2 == *piVar4;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar6);
      if ((bVar6) && (iVar1 = *(int *)((int)this + 0x40), iVar1 == param_1[0x10])) {
        if (iVar1 != 0) {
          bVar6 = true;
          pcVar3 = *(char **)((int)this + 0x44);
          pcVar5 = (char *)param_1[0x11];
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar6 = *pcVar3 == *pcVar5;
            pcVar3 = pcVar3 + 1;
            pcVar5 = pcVar5 + 1;
          } while (bVar6);
          if (!bVar6) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00c95060 @ 00c95060 ////

undefined4 __thiscall FUN_00c95060(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != this) {
    if (*(int *)((int)this + 0x40) != 0) {
      CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      *(undefined4 *)((int)this + 0x40) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    piVar1 = *(int **)((int)this + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    iVar2 = COM_CopyVariant(this,param_1);
    if (iVar2 < 0) {
      return 0x8007000e;
    }
  }
  return 0;
}


//// FUNCTION FUN_00c950d0 @ 00c950d0 ////

void __thiscall FUN_00c950d0(void *this,int param_1)

{
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x20) = 0;
    return;
  }
  *(undefined4 *)((int)this + 0x20) = 1;
  *(int *)((int)this + 0x28) = param_1;
  return;
}


//// FUNCTION FUN_00c95130 @ 00c95130 ////

void FUN_00c95130(LPVOID param_1)

{
  int *piVar1;
  
  if (param_1 != (LPVOID)0x0) {
    if (*(int *)((int)param_1 + 0x40) != 0) {
      CoTaskMemFree(*(LPVOID *)((int)param_1 + 0x44));
      *(undefined4 *)((int)param_1 + 0x40) = 0;
      *(undefined4 *)((int)param_1 + 0x44) = 0;
    }
    piVar1 = *(int **)((int)param_1 + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)param_1 + 0x3c) = 0;
    }
    CoTaskMemFree(param_1);
  }
  return;
}


//// FUNCTION FUN_00c95180 @ 00c95180 ////

undefined4 * FUN_00c95180(undefined4 *param_1)

{
  undefined4 *pv;
  int iVar1;
  
  pv = CoTaskMemAlloc(0x48);
  if (pv != (undefined4 *)0x0) {
    iVar1 = COM_CopyVariant(pv,param_1);
    if (-1 < iVar1) {
      return pv;
    }
    CoTaskMemFree(pv);
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00c95210 @ 00c95210 ////

void * __thiscall FUN_00c95210(void *this,undefined4 *param_1)

{
  FUN_00c95060(this,param_1);
  return this;
}


//// FUNCTION FUN_00c95390 @ 00c95390 ////

int FUN_00c95390(int param_1)

{
  int iVar1;
  
  iVar1 = ((uint)*(ushort *)(param_1 + 0xe) * *(int *)(param_1 + 4) + 0x1f >> 3 & 0x1ffffffc) *
          *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}


//// FUNCTION FUN_00c953c0 @ 00c953c0 ////

void FUN_00c953c0(undefined4 *param_1,int param_2)

{
  if ((*(int *)(param_2 + 0x10) == 0) ||
     (((*(int *)(param_2 + 0x28) == 0x7c00 && (*(int *)(param_2 + 0x2c) == 0x3e0)) &&
      (*(int *)(param_2 + 0x30) == 0x1f)))) {
    *param_1 = 0xe436eb7c;
    param_1[1] = 0x11ce524f;
    param_1[2] = 0x2000539f;
    param_1[3] = 0x70a70baf;
    return;
  }
  if (((*(int *)(param_2 + 0x28) == 0xf800) && (*(int *)(param_2 + 0x2c) == 0x7e0)) &&
     (*(int *)(param_2 + 0x30) == 0x1f)) {
    *param_1 = 0xe436eb7b;
    param_1[1] = 0x11ce524f;
    param_1[2] = 0x2000539f;
    param_1[3] = 0x70a70baf;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


//// FUNCTION FUN_00c95640 @ 00c95640 ////

int * FUN_00c95640(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10 [4];
  
  iVar1 = *(int *)(param_2 + 0x10);
  if ((iVar1 != 0) && (iVar1 != 3)) {
    *param_1 = iVar1;
    param_1[1] = 0x100000;
    param_1[2] = -0x55ffff80;
    param_1[3] = 0x719b3800;
    return param_1;
  }
  switch(*(undefined2 *)(param_2 + 0xe)) {
  case 1:
    *param_1 = -0x1bc91488;
    param_1[1] = 0x11ce524f;
    param_1[2] = 0x2000539f;
    param_1[3] = 0x70a70baf;
    return param_1;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1;
  case 4:
    *param_1 = -0x1bc91487;
    param_1[1] = 0x11ce524f;
    param_1[2] = 0x2000539f;
    param_1[3] = 0x70a70baf;
    return param_1;
  case 8:
    *param_1 = -0x1bc91486;
    param_1[1] = 0x11ce524f;
    param_1[2] = 0x2000539f;
    param_1[3] = 0x70a70baf;
    return param_1;
  case 0x10:
    piVar2 = (int *)FUN_00c953c0(local_10,param_2);
    *param_1 = *piVar2;
    param_1[1] = piVar2[1];
    param_1[2] = piVar2[2];
    param_1[3] = piVar2[3];
    return param_1;
  case 0x18:
    *param_1 = -0x1bc91483;
    param_1[1] = 0x11ce524f;
    param_1[2] = 0x2000539f;
    param_1[3] = 0x70a70baf;
    return param_1;
  case 0x20:
    *param_1 = -0x1bc91482;
    param_1[1] = 0x11ce524f;
    param_1[2] = 0x2000539f;
    param_1[3] = 0x70a70baf;
    return param_1;
  }
}


//// FUNCTION FUN_00c95860 @ 00c95860 ////

undefined4 FUN_00c95860(int param_1,ushort *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  iVar1 = FUN_00c93bc0(param_2,(ushort *)&DAT_00d73f30);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x1c))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)(iVar1 + 0xc);
      goto LAB_00c958c7;
    }
  }
  else {
    iVar1 = FUN_00c93bc0(param_2,(ushort *)&DAT_00d7b610);
    if (iVar1 != 0) {
      *param_3 = 0;
      return 0x80040216;
    }
    iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x1c))(1);
    if (iVar1 != 0) {
      piVar2 = (int *)(iVar1 + 0xc);
      goto LAB_00c958c7;
    }
  }
  piVar2 = (int *)0x0;
LAB_00c958c7:
  *param_3 = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    return 0;
  }
  return 0x8007000e;
}


//// FUNCTION Ctor_vt00db15e8_00c95a00 @ 00c95a00 ////

undefined4 * __thiscall
Ctor_vt00db15e8_00c95a00
          (void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00c92400(this,param_1,param_2,param_2 + 0x5c,param_3,param_4);
  *(int *)((int)this + 0xd8) = param_2;
  *(undefined ***)this = &PTR_LAB_00db15e8;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00db15a0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00db1588;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_00db1564;
  return this;
}


//// FUNCTION FUN_00c95a80 @ 00c95a80 ////

void __fastcall FUN_00c95a80(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x4c))(0);
  FUN_00c8edc0(param_1);
  return;
}


//// FUNCTION Dtor_00c95c40 @ 00c95c40 ////

void __fastcall Dtor_00c95c40(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d06a98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00db1680;
  param_1[3] = &PTR_FUN_00db1638;
  param_1[4] = &PTR_LAB_00db1624;
  piVar1 = (int *)param_1[0x29];
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  local_4 = 0xffffffff;
  FUN_00c8e170((int)param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c95cb0 @ 00c95cb0 ////

int FUN_00c95cb0(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  if (param_3 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  iVar2 = 4;
  bVar5 = true;
  *param_3 = 0;
  piVar3 = param_2;
  piVar4 = &DAT_00dafa9c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar2 = 4;
    bVar5 = true;
    piVar3 = param_2;
    piVar4 = &DAT_00daf44c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = FUN_00c8e1d0(param_1,param_2,param_3);
      return iVar2;
    }
  }
  if (param_1[0x29] == 0) {
    if (*(int *)(param_1[0x28] + 0x8c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1[0x28] + 0x8c) + 0xc;
    }
    iVar2 = FUN_00c8da10((LPUNKNOWN)param_1[1],0,iVar2,param_1 + 0x29);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  puVar1 = (undefined4 *)param_1[0x29];
  iVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3);
  return iVar2;
}


//// FUNCTION FUN_00c95d60 @ 00c95d60 ////

void __fastcall FUN_00c95d60(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xa0) + 0x4c))(1);
  FUN_00c8e8e0(param_1);
  return;
}


//// FUNCTION FUN_00c95df0 @ 00c95df0 ////

void FUN_00c95df0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = param_8;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x40))(param_3,param_4,param_5,param_6,param_7);
  if (iVar1 == 1) {
    FUN_00c8f170(*(void **)(*(int *)(param_1 + 0x90) + 0x8c),&local_c);
  }
  return;
}


//// FUNCTION FUN_00c95e70 @ 00c95e70 ////

void * __thiscall FUN_00c95e70(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  FUN_00c929e0(this,param_1,param_2,(LPCRITICAL_SECTION)((int)this + 0x5c),param_3);
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x5c));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x74));
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  return this;
}


//// FUNCTION FUN_00c95ec0 @ 00c95ec0 ////

void __fastcall FUN_00c95ec0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d06ace;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)(param_1 + 0x8c) + 0xc))(1);
  }
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0xc))(1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c));
  local_4 = 0xffffffff;
  FUN_00c90d30(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c95f40 @ 00c95f40 ////

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall FUN_00c95f40(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_1c;
  undefined4 *puStack_c;
  
  iVar3 = *(int *)(param_1 + 0x8c);
  uVar1 = *(uint *)(iVar3 + 0xb0);
  puStack_5c = (undefined4 *)(uint)(*(int *)(param_1 + 0x54) != 0);
  if ((uVar1 & 1) == 0) {
    puStack_5c = (undefined4 *)((uint)puStack_5c | 2);
  }
  if ((uVar1 & 0x100) == 0) {
    iStack_60 = 0;
  }
  else {
    iStack_60 = iVar3 + 0xc0;
  }
  if ((uVar1 & 0x10) == 0) {
    piStack_64 = (int *)0x0;
  }
  else {
    piStack_64 = (int *)(iVar3 + 0xb8);
  }
  piStack_6c = *(int **)(*(int *)(param_1 + 0x90) + 0x98);
  piStack_68 = &local_48;
  iVar2 = (**(code **)(*piStack_6c + 0x1c))();
  *puStack_c = puStack_5c;
  if (-1 < iVar2) {
    iVar2 = (**(code **)*puStack_5c)(puStack_5c);
    if (-1 < iVar2) {
      piVar4 = (int *)&stack0xffffffb0;
      (**(code **)(*piStack_64 + 0x4c))(piStack_64,0x10);
      uStack_40 = *(undefined4 *)(iVar3 + 0xc4);
      local_48 = *(int *)(iVar3 + 0xbc);
      uStack_44 = *(undefined4 *)(iVar3 + 0xc0);
      puStack_5c = (undefined4 *)0x20;
      (**(code **)(*(int *)(iVar3 + 0xac) + 0x50))(&stack0xffffffa8,0x20,&puStack_5c);
      if ((*(byte *)(iVar3 + 0xb0) & 4) != 0) {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      (**(code **)(*piVar4 + 8))(piVar4);
      return 0;
    }
    if ((*(byte *)(iVar3 + 0xb0) & 0x10) != 0) {
      (**(code **)(*piStack_68 + 0x18))(piStack_68,iVar3 + 0xb8,iVar3 + 0xc0);
    }
    if ((*(byte *)(iVar3 + 0xb0) & 1) != 0) {
      (**(code **)(*piStack_68 + 0x20))(piStack_68,1);
    }
    if ((*(byte *)(iVar3 + 0xb0) & 4) != 0) {
      (**(code **)(*piStack_68 + 0x40))(piStack_68,1);
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    iVar3 = (**(code **)(*piStack_1c + 0x44))(piStack_1c,&stack0xffffffa8,&iStack_60);
    if (iVar3 == 0) {
      (*pcRam36b738cc)(&DAT_00daf4ac,&piStack_64,&piStack_6c);
    }
    iVar2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00c960c0 @ 00c960c0 ////

int __thiscall FUN_00c960c0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(*(int *)((int)this + 0x8c) + 200) != 0) {
    piVar1 = *(int **)(*(int *)((int)this + 0x90) + 0x9c);
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_1);
    return iVar2;
  }
  iVar2 = FUN_00c95f40((int)this);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(int *)this + 0x24))(param_1,param_1);
    if (-1 < iVar2) {
      if (iVar2 == 0) {
        piVar1 = *(int **)(*(int *)((int)this + 0x90) + 0x9c);
        iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_1);
        *(undefined4 *)((int)this + 0x54) = 0;
      }
      else if (iVar2 == 1) {
        (**(code **)(*param_1 + 8))(param_1);
        *(undefined4 *)((int)this + 0x54) = 1;
        if (*(int *)((int)this + 0x58) == 0) {
          FUN_00c8de20(this,0xb,0,0);
          *(undefined4 *)((int)this + 0x58) = 1;
        }
        return 0;
      }
    }
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar2;
}


//// FUNCTION FUN_00c96180 @ 00c96180 ////

int FUN_00c96180(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06af0;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x50);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x80);
  if (((piVar1 != (int *)0x0) && (piVar1[6] != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x84) + 0x18) != 0)) {
    (**(code **)(*piVar1 + 0x18))();
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    local_4 = CONCAT31(local_4._1_3_,1);
    (**(code **)(**(int **)(param_1 + 0x84) + 0x18))();
    iVar2 = (**(code **)(*(int *)(param_1 + -0xc) + 0x3c))();
    if (-1 < iVar2) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return iVar2;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00c96270 @ 00c96270 ////

int FUN_00c96270(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION p_Var1;
  LPCRITICAL_SECTION p_Var2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  p_Var2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06b10;
  pvStack_c = ExceptionList;
  p_Var1 = param_1 + 3;
  ExceptionList = &pvStack_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&p_Var1->RecursionCount);
  iVar3 = 0;
  local_4 = 0;
  if (p_Var2->RecursionCount != 1) {
    if ((p_Var2[5].RecursionCount == 0) || (*(int *)(p_Var2[5].RecursionCount + 0x18) == 0)) {
      if ((p_Var2[5].OwningThread != (int *)0x0) && (p_Var2[2].SpinCount == 0)) {
        (**(code **)(*(int *)p_Var2[5].OwningThread + 0x4c))();
        p_Var2[2].SpinCount = 1;
      }
    }
    else if (*(int *)((int)p_Var2[5].OwningThread + 0x18) != 0) {
      if (p_Var2->RecursionCount == 0) {
        FUN_00a2ca60(&param_1,(LPCRITICAL_SECTION)&p_Var2[4].RecursionCount);
        local_4._0_1_ = 1;
        iVar3 = (**(code **)((int)p_Var2[-1].OwningThread + 0x38))();
        local_4 = (uint)local_4._1_3_ << 8;
        LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
        if (iVar3 < 0) goto LAB_00c96326;
      }
      iVar3 = FUN_00c90f50((int)p_Var2);
      goto LAB_00c96326;
    }
    p_Var2->RecursionCount = 1;
  }
LAB_00c96326:
  p_Var2[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  p_Var2[3].LockCount = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&p_Var1->RecursionCount);
  ExceptionList = pvStack_c;
  return iVar3;
}


//// FUNCTION ScalarDeletingDtor_00c963a0 @ 00c963a0 ////

void * __thiscall ScalarDeletingDtor_00c963a0(void *this,byte param_1)

{
  thunk_FUN_00c8ebb0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00db1680_00c965d0 @ 00c965d0 ////

undefined4 * __thiscall
Ctor_vt00db1680_00c965d0
          (void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00c923c0(this,param_1,param_2,param_2 + 0x5c,param_3,param_4);
  *(int *)((int)this + 0xa0) = param_2;
  *(undefined ***)this = &PTR_FUN_00db1680;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00db1638;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00db1624;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c96620 @ 00c96620 ////

undefined4 * __thiscall ScalarDeletingDtor_00c96620(void *this,byte param_1)

{
  Dtor_00c95c40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c96640 @ 00c96640 ////

uint __thiscall FUN_00c96640(void *this,int *param_1)

{
  uint uVar1;
  
  if (*(int *)(*(int *)(*(int *)((int)this + 0xa0) + 0x8c) + 0x18) == 0) {
    return 0x8000ffff;
  }
  uVar1 = (**(code **)(**(int **)((int)this + 0xa0) + 0x48))(1,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_00c8e890(this,param_1);
  }
  return uVar1;
}


//// FUNCTION FUN_00c96700 @ 00c96700 ////

undefined4 __thiscall FUN_00c96700(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06b76;
  local_c = ExceptionList;
  local_14 = 0;
  if (*(int *)((int)this + 0x8c) == 0) {
    ExceptionList = &local_c;
    local_10 = operator_new(0xe0);
    local_4 = 0;
    if (local_10 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = Ctor_vt00db15e8_00c95a00(local_10,0,(int)this,&local_14,(undefined4 *)L"XForm In");
    }
    local_4 = 0xffffffff;
    *(undefined4 **)((int)this + 0x8c) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
    local_10 = operator_new(0xa8);
    local_4 = 1;
    if (local_10 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = Ctor_vt00db1680_00c965d0(local_10,0,(int)this,&local_14,(undefined4 *)L"XForm Out");
    }
    local_4 = 0xffffffff;
    *(undefined4 **)((int)this + 0x90) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      if (*(int **)((int)this + 0x8c) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x8c) + 0xc))(1);
      }
      *(undefined4 *)((int)this + 0x8c) = 0;
    }
  }
  if (param_1 == 0) {
    ExceptionList = local_c;
    return *(undefined4 *)((int)this + 0x8c);
  }
  if (param_1 != 1) {
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return *(undefined4 *)((int)this + 0x90);
}


//// FUNCTION FUN_00c96830 @ 00c96830 ////

void __fastcall FUN_00c96830(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


//// FUNCTION COM_LoadTypeLibrary @ 00c96860 ////

uint COM_LoadTypeLibrary(int *param_1,int *param_2,int param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  HMODULE hModule;
  DWORD DVar2;
  FARPROC pFVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = param_5;
  if (param_5 == (int *)0x0) {
    return 0x80004003;
  }
  *param_5 = 0;
  if (param_3 != 0) {
    return 0x8002802b;
  }
  if (*param_1 == 0) {
    hModule = (HMODULE)Wrap_LoadLibraryA_00c92cb0();
    if ((hModule == (HMODULE)0x0) ||
       (pFVar3 = GetProcAddress(hModule,"LoadRegTypeLib"), pFVar3 == (FARPROC)0x0)) {
LAB_00c968a5:
      DVar2 = GetLastError();
      return DVar2 | 0x80070000;
    }
    iVar4 = (*pFVar3)(&DAT_00dafaec,1,0,param_4,&param_5);
    if (iVar4 < 0) {
      pFVar3 = GetProcAddress(hModule,"LoadTypeLib");
      if (pFVar3 == (FARPROC)0x0) goto LAB_00c968a5;
      uVar5 = (*pFVar3)(L"control.tlb",&param_5);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
    uVar5 = (**(code **)(*param_5 + 0x18))(param_5,param_2,param_1);
    (**(code **)(*param_2 + 8))(param_2);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
  }
  *piVar1 = *param_1;
  (**(code **)(*(int *)*param_1 + 4))((int *)*param_1);
  return 0;
}


//// FUNCTION FUN_00c96eb0 @ 00c96eb0 ////

undefined4 __thiscall FUN_00c96eb0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 **ppuStack_c;
  
  puVar2 = param_1;
  *param_1 = 0;
  piVar1 = *(int **)((int)this + 0x18);
  ppuStack_c = &param_1;
  iVar3 = (**(code **)(*piVar1 + 0x18))();
  if (-1 < iVar3) {
    puVar4 = &DAT_00dafa9c;
    iVar3 = (*(code *)**(undefined4 **)this)(this,&DAT_00dafa9c,&ppuStack_c);
    (**(code **)(*piVar1 + 8))(piVar1);
    if (-1 < iVar3) {
      *puVar2 = puVar4;
      return 0;
    }
  }
  return 0x80004001;
}


//// FUNCTION FUN_00c96f10 @ 00c96f10 ////

undefined4 __thiscall FUN_00c96f10(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 **ppuStack_c;
  
  puVar2 = param_1;
  *param_1 = 0;
  piVar1 = *(int **)((int)this + 0x18);
  ppuStack_c = &param_1;
  iVar3 = (**(code **)(*piVar1 + 0x18))();
  if (-1 < iVar3) {
    puVar4 = &DAT_00daf44c;
    iVar3 = (*(code *)**(undefined4 **)this)(this,&DAT_00daf44c,&ppuStack_c);
    (**(code **)(*piVar1 + 8))(piVar1);
    if (-1 < iVar3) {
      *puVar2 = puVar4;
      return 0;
    }
  }
  return 0x80004001;
}


//// FUNCTION FUN_00c976c0 @ 00c976c0 ////

int __thiscall FUN_00c976c0(void *this,int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 local_14 [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06b88;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x1c);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,&local_1c,local_14);
  if (iVar1 < 0) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = pvStack_18;
    return iVar1;
  }
  *(undefined4 *)((int)this + 0x38) = unaff_ESI;
  *(undefined4 *)((int)this + 0x3c) = unaff_EBX;
  *(LPCRITICAL_SECTION *)((int)this + 0x40) = lpCriticalSection;
  *(undefined4 *)((int)this + 0x44) = local_1c;
  *(undefined4 *)((int)this + 0x48) = 0;
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_18;
  return 0;
}


//// FUNCTION FUN_00c97770 @ 00c97770 ////

undefined4 __thiscall
FUN_00c97770(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0x40) = param_3;
  *(undefined4 *)((int)this + 0x44) = param_4;
  *(undefined4 *)((int)this + 0x48) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return 0;
}


//// FUNCTION FUN_00c977b0 @ 00c977b0 ////

int __thiscall FUN_00c977b0(void *this,undefined4 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06ba8;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x1c);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (*(int *)((int)this + 0x48) == 1) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return -0x7fffbffb;
  }
  pvVar2 = *(void **)((int)this + 0x3c);
  iVar1 = (**(code **)(*(int *)this + 0x34))
                    (this,param_1,0,*(undefined4 *)((int)this + 0x38),pvVar2,&DAT_00dafe2c);
  if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (-1 < iVar1)) {
    iVar1 = (**(code **)(*(int *)this + 0x34))
                      (this,lpCriticalSection,0,*(undefined4 *)((int)this + 0x40),
                       *(undefined4 *)((int)this + 0x44),&DAT_00dafe2c);
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvVar2;
  return iVar1;
}


//// FUNCTION FUN_00c97870 @ 00c97870 ////

undefined4 __fastcall FUN_00c97870(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return 0;
}


//// FUNCTION FUN_00c978a0 @ 00c978a0 ////

int __fastcall FUN_00c978a0(int *param_1)

{
  int iVar1;
  int unaff_EBX;
  int unaff_ESI;
  undefined1 local_8 [8];
  
  if (param_1[0x12] == 1) {
    return -0x7fffbffb;
  }
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,local_8);
  if (-1 < iVar1) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
    param_1[0x10] = unaff_EBX;
    param_1[0x11] = unaff_ESI;
    param_1[0xe] = unaff_EBX;
    param_1[0xf] = unaff_ESI;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  }
  return iVar1;
}


//// FUNCTION FUN_00c97c20 @ 00c97c20 ////

undefined4 __thiscall FUN_00c97c20(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int unaff_retaddr;
  undefined4 local_8;
  int *local_4;
  
  if ((*(int *)((int)this + 0x60) != 0) && ((param_3 == 0 || (*(int *)((int)this + 100) != 0)))) {
    piVar1 = *(int **)((int)this + 0x60);
    local_8 = 0;
    local_4 = (int *)0x0;
    (**(code **)(*piVar1 + 0xc))();
    if ((unaff_retaddr <= (int)&local_8) && ((unaff_retaddr < (int)&local_8 || (local_4 <= piVar1)))
       ) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00c98460 @ 00c98460 ////

int * __thiscall FUN_00c98460(void *this,uint param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  ushort *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(uint *)((int)this + 8) = param_1;
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
  }
  else {
    pvVar4 = operator_new(param_1 << 4);
    *(void **)this = pvVar4;
    if (pvVar4 == (void *)0x0) {
      *(undefined4 *)((int)this + 8) = 0;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0x8007000e;
        return this;
      }
    }
    else {
      param_1 = 0;
      if (*(int *)((int)this + 8) != 0) {
        piVar8 = (int *)(param_2 + 8);
        do {
          iVar3 = piVar8[-2];
          puVar7 = (undefined2 *)((int)piVar8 + *(int *)this + (-8 - param_2));
          *puVar7 = (short)iVar3;
          switch((short)iVar3) {
          case 2:
            puVar7[4] = (short)*piVar8;
            break;
          case 3:
          case 4:
            *(int *)(puVar7 + 4) = *piVar8;
            break;
          case 5:
          case 7:
            *(undefined8 *)(puVar7 + 4) = *(undefined8 *)piVar8;
            break;
          case 6:
            *(int *)(puVar7 + 4) = *piVar8;
            *(int *)(puVar7 + 6) = piVar8[1];
            break;
          case 8:
            if (*piVar8 == 0) {
              *(undefined4 *)(puVar7 + 4) = 0;
              *(int *)(puVar7 + 4) = *piVar8;
            }
            else {
              uVar1 = *(ushort *)(*piVar8 + -2);
              puVar5 = operator_new((uint)uVar1 * 2 + 2);
              if (puVar5 == (ushort *)0x0) {
                *(uint *)((int)this + 8) = param_1;
                if (param_3 != (undefined4 *)0x0) {
                  *param_3 = 0x8007000e;
                }
                *(int *)(puVar7 + 4) = *piVar8;
              }
              else {
                *puVar5 = uVar1;
                *(ushort **)(puVar7 + 4) = puVar5 + 1;
                puVar9 = (undefined4 *)*piVar8;
                puVar5 = puVar5 + 1;
                for (uVar6 = (uint)(uVar1 >> 1); uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(undefined4 *)puVar5 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar5 = puVar5 + 2;
                }
                for (uVar6 = (uint)uVar1 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(undefined1 *)puVar5 = *(undefined1 *)puVar9;
                  puVar9 = (undefined4 *)((int)puVar9 + 1);
                  puVar5 = (ushort *)((int)puVar5 + 1);
                }
                *(int *)(puVar7 + 4) = *piVar8;
              }
            }
            break;
          case 9:
            piVar2 = (int *)*piVar8;
            *(int **)(puVar7 + 4) = piVar2;
            (**(code **)(*piVar2 + 4))(piVar2);
            break;
          case 10:
            *(int *)(puVar7 + 4) = *piVar8;
            break;
          case 0xb:
            puVar7[4] = (short)*piVar8;
            break;
          case 0xd:
            piVar2 = (int *)*piVar8;
            *(int **)(puVar7 + 4) = piVar2;
            (**(code **)(*piVar2 + 4))(piVar2);
            break;
          case 0x11:
            *(char *)(puVar7 + 4) = (char)*piVar8;
          }
          param_1 = param_1 + 1;
          piVar8 = piVar8 + 4;
        } while (param_1 < *(uint *)((int)this + 8));
        return this;
      }
    }
  }
  return this;
}


//// FUNCTION FUN_00c98660 @ 00c98660 ////

void __fastcall FUN_00c98660(int *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1[2] != 0) {
    iVar4 = 0;
    do {
      sVar1 = *(short *)(*param_1 + iVar4);
      iVar2 = *param_1 + iVar4;
      if (sVar1 == 8) {
        if (*(int *)(iVar2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)(*(int *)(iVar2 + 8) + -2));
        }
      }
      else if (sVar1 == 9) {
        (**(code **)(**(int **)(iVar2 + 8) + 8))(*(int **)(iVar2 + 8));
      }
      else if (sVar1 == 0xd) {
        (**(code **)(**(int **)(iVar2 + 8) + 8))(*(int **)(iVar2 + 8));
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar3 < (uint)param_1[2]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00c98730 @ 00c98730 ////

int FUN_00c98730(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return -0x7ffbfdcc;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))(param_1 + -0xc);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 4) = 0;
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION COM_InitializeTypeLibrary @ 00c98800 ////

uint __fastcall COM_InitializeTypeLibrary(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  undefined4 unaff_EBX;
  int *unaff_EBP;
  int *piVar6;
  int *piVar7;
  int *local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0x80040234;
  }
  local_28 = *(undefined4 *)(param_1 + 0x20);
  piVar6 = (int *)0x0;
  piVar7 = (int *)(param_1 + 0x48);
  if (&stack0x00000000 == (undefined1 *)0x2c) {
    return 0x80004003;
  }
  if (*piVar7 == 0) {
    hModule = (HMODULE)Wrap_LoadLibraryA_00c92cb0();
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = GetProcAddress(hModule,"LoadRegTypeLib"), pFVar1 == (FARPROC)0x0)) {
LAB_00c988c5:
      DVar4 = GetLastError();
      uVar3 = DVar4 | 0x80070000;
    }
    else {
      iVar2 = (*pFVar1)(&DAT_00dafaec,1,0,0,&local_30);
      if (iVar2 < 0) {
        pFVar1 = GetProcAddress(hModule,"LoadTypeLib");
        if (pFVar1 == (FARPROC)0x0) goto LAB_00c988c5;
        uVar3 = (*pFVar1)(L"control.tlb",&local_30);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      uVar3 = (**(code **)(*local_30 + 0x18))(local_30,local_28,piVar7);
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      if (-1 < (int)uVar3) goto LAB_00c988ba;
    }
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  else {
LAB_00c988ba:
    piVar6 = (int *)*piVar7;
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  uVar3 = (**(code **)**(undefined4 **)(param_1 + 0x14))
                    (*(undefined4 **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x20),local_2c);
  if (-1 < (int)uVar3) {
    piVar7 = *(int **)(param_1 + 0x2c);
    uVar5 = (**(code **)(*piVar6 + 0x2c))
                      (piVar6,unaff_EBX,*(undefined4 *)(param_1 + 0x24),
                       CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x28)),param_1 + 0x34,piVar7,
                       local_2c,&local_30);
    *(undefined4 *)(param_1 + 0x4c) = uVar5;
    (**(code **)(*piVar7 + 8))(piVar7);
    (**(code **)(*piVar6 + 8))(piVar6);
    uVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(param_1);
    *(undefined4 *)(param_1 + 0x10) = 0;
    return uVar3;
  }
  (**(code **)(*piVar6 + 8))(piVar6);
  return uVar3;
}


//// FUNCTION FUN_00c989f0 @ 00c989f0 ////

void FUN_00c989f0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c989f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}


//// FUNCTION FUN_00c98a00 @ 00c98a00 ////

void FUN_00c98a00(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c98a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4c))();
  return;
}


//// FUNCTION FUN_00c98a10 @ 00c98a10 ////

void FUN_00c98a10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c98a16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))();
  return;
}


//// FUNCTION FUN_00c98a20 @ 00c98a20 ////

void FUN_00c98a20(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c98a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}


//// FUNCTION FUN_00c98a60 @ 00c98a60 ////

void __fastcall FUN_00c98a60(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d06be7;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x10);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  local_4 = 0xffffffff;
  if ((param_1 != 0) && (param_1 != -4)) {
    FUN_00c92c80();
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00c92c80();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c98b20 @ 00c98b20 ////

void __fastcall FUN_00c98b20(int param_1)

{
  if (param_1 != 0) {
    FUN_00c98a60(param_1 + 4);
    return;
  }
  FUN_00c98a60(0);
  return;
}


//// FUNCTION FUN_00c98b40 @ 00c98b40 ////

int FUN_00c98b40(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = (**(code **)(*param_1 + 0x50))(param_2,0);
  if (-1 < iVar1) {
    return 0;
  }
  iVar1 = FUN_00c96f10(param_1,(undefined4 *)&stack0xfffffffc);
  if (-1 < iVar1) {
    iVar1 = FUN_00c98a20(unaff_ESI);
    (**(code **)(*unaff_ESI + 8))(unaff_ESI,param_2);
  }
  return iVar1;
}


//// FUNCTION Ctor_vt00db175c_00c98ce0 @ 00c98ce0 ////

int * __thiscall
Ctor_vt00db175c_00c98ce0
          (void *this,int *param_1,int param_2,uint *param_3,int param_4,short param_5,
          undefined4 param_6,int param_7,int param_8,undefined2 param_9,uint param_10,int param_11,
          int param_12,undefined4 param_13,int param_14)

{
  int *piVar1;
  uint uVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  int iVar4;
  DWORD DVar5;
  void *unaff_EBX;
  int *unaff_ESI;
  ulonglong uVar6;
  uint *unaff_retaddr;
  undefined1 local_14 [4];
  int *local_10;
  int *piStack_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00d06c1e;
  piStack_c = ExceptionList;
  ExceptionList = &piStack_c;
  local_10 = this;
  Wrap_InterlockedIncrement_00c92db0(this,0,param_2);
  *(int **)((int)this + 0x10) = param_1;
  *(int *)((int)this + 0x14) = param_4;
  *(int *)((int)this + 0x20) = param_7;
  *(int *)((int)this + 0x24) = param_8;
  *(undefined2 *)((int)this + 0x28) = param_9;
  *(int *)((int)this + 0x2c) = param_12;
  *(int *)((int)this + 0x30) = param_14;
  local_4 = (int *)0x0;
  *(undefined ***)this = &PTR_LAB_00db175c;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_00db1740;
  FUN_00c98460((void *)((int)this + 0x34),param_10,param_11,param_3);
  piVar1 = (int *)((int)this + 0x48);
  *piVar1 = 0;
  local_4 = (int *)CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)this + 0x4c) = 0x80004004;
  uVar6 = FUN_00acd42c();
  *(ulonglong *)((int)this + 0x18) = uVar6;
  uVar2 = (**(code **)**(undefined4 **)((int)this + 0x14))
                    (*(undefined4 **)((int)this + 0x14),*(undefined4 *)((int)this + 0x20),local_14);
  if ((int)uVar2 < 0) {
LAB_00c98ed1:
    *param_3 = uVar2;
  }
  else {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    param_1 = (int *)0x0;
    if (&stack0x00000000 == (undefined1 *)0xfffffffc) {
      *param_3 = 0x80004003;
      ExceptionList = unaff_EBX;
      return this;
    }
    if (*piVar1 == 0) {
      hModule = (HMODULE)Wrap_LoadLibraryA_00c92cb0();
      param_3 = unaff_retaddr;
      if ((hModule == (HMODULE)0x0) ||
         (pFVar3 = GetProcAddress(hModule,"LoadRegTypeLib"), pFVar3 == (FARPROC)0x0)) {
LAB_00c98ebe:
        DVar5 = GetLastError();
        uVar2 = DVar5 | 0x80070000;
      }
      else {
        iVar4 = (*pFVar3)(&DAT_00dafaec,1,0,0,&local_4);
        if (iVar4 < 0) {
          pFVar3 = GetProcAddress(hModule,"LoadTypeLib");
          if (pFVar3 == (FARPROC)0x0) goto LAB_00c98ebe;
          uVar2 = (*pFVar3)(L"control.tlb",&local_4);
          if ((int)uVar2 < 0) goto LAB_00c98ed1;
        }
        uVar2 = (**(code **)(*local_4 + 0x18))(local_4,param_4,piVar1);
        (**(code **)(*local_10 + 8))(local_10);
        if (-1 < (int)uVar2) goto LAB_00c98e62;
      }
      if ((int)uVar2 < 0) goto LAB_00c98ed1;
    }
    else {
LAB_00c98e62:
      param_1 = (int *)*piVar1;
      (**(code **)(*param_1 + 4))(param_1);
    }
    (**(code **)(*param_1 + 8))(param_1);
    if (param_5 == 4) {
      *(undefined4 *)((int)this + 0x40) = 1;
      *(undefined4 *)((int)this + 0x44) = 0xfffffffd;
      *(undefined4 **)((int)this + 0x38) = (undefined4 *)((int)this + 0x44);
    }
    uVar2 = (**(code **)(*piStack_c + 8))(this);
    if ((int)uVar2 < 0) {
      *unaff_retaddr = uVar2;
    }
  }
  ExceptionList = unaff_EBX;
  return this;
}


//// FUNCTION FUN_00c98f30 @ 00c98f30 ////

void __fastcall FUN_00c98f30(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d06c43;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x48);
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00c98660((int *)(param_1 + 0x34));
  local_4 = 0xffffffff;
  if (param_1 != 0) {
    FUN_00c92c80();
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00c92c80();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c98fb0 @ 00c98fb0 ////

int __fastcall FUN_00c98fb0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06c71;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_4 = 0;
  FUN_00c99da0((undefined4 *)(param_1 + 0x20));
  local_4._0_1_ = 1;
  FUN_00c99da0((undefined4 *)(param_1 + 0x38));
  local_4 = CONCAT31(local_4._1_3_,2);
  Wrap_CreateEventA_00c93a60((void *)(param_1 + 0x50),1);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c99030 @ 00c99030 ////

void __fastcall FUN_00c99030(int param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  int local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d06cac;
  local_14 = *(int *)(param_1 + 0x20);
  local_4 = 3;
  ppvVar2 = &pvStack_c;
  local_10 = param_1;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar2, local_14 != 0) {
    iVar3 = FUN_00c99e00(&local_14);
    (**(code **)(*(int *)(iVar3 + 0xc) + 8))(iVar3 + 0xc);
    ppvVar2 = ExceptionList;
  }
  FUN_00c99dc0((undefined4 *)(param_1 + 0x20));
  local_14 = *(int *)(param_1 + 0x38);
  while (local_14 != 0) {
    iVar3 = FUN_00c99e00(&local_14);
    (**(code **)(*(int *)(iVar3 + 0xc) + 8))(iVar3 + 0xc);
  }
  FUN_00c99dc0((undefined4 *)(param_1 + 0x38));
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x54) != 0) {
      (**(code **)(*piVar1 + 0x18))(piVar1,*(int *)(param_1 + 0x54));
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x60) + 8))(*(int **)(param_1 + 0x60));
  }
  local_4._0_1_ = 2;
  Wrap_CloseHandle_00c93a80((undefined4 *)(param_1 + 0x50));
  local_4._0_1_ = 1;
  FUN_00c9a310((undefined4 *)(param_1 + 0x38));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00c9a310((undefined4 *)(param_1 + 0x20));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c99130 @ 00c99130 ////

uint __thiscall
FUN_00c99130(void *this,undefined4 *param_1,int param_2,undefined8 param_3,int param_4,int param_5,
            undefined2 param_6,uint param_7,int param_8,int param_9,undefined4 param_10,int param_11
            )

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *this_00;
  int *piVar1;
  uint uVar2;
  uint local_14;
  LPCRITICAL_SECTION local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06cd3;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  ExceptionList = &local_c;
  local_10 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  local_14 = 0;
  *param_1 = 0;
  this_00 = operator_new(0x50);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (this_00 != (void *)0x0) {
    piVar1 = Ctor_vt00db175c_00c98ce0
                       (this_00,this,0,&local_14,param_2,(short)param_3,
                        (int)((ulonglong)param_3 >> 0x20),param_4,param_5,param_6,param_7,param_8,
                        param_9,param_10,param_11);
    if (piVar1 != (int *)0x0) {
      *param_1 = piVar1;
      uVar2 = local_14;
      goto LAB_00c991e3;
    }
  }
  uVar2 = 0x8007000e;
LAB_00c991e3:
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return uVar2;
}


//// FUNCTION FUN_00c99200 @ 00c99200 ////

void __fastcall FUN_00c99200(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    ResetEvent(*(HANDLE *)(param_1 + 0x50));
    uVar4 = 0;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      iVar3 = FUN_00c99e20(*(int *)(param_1 + 0x20));
      uVar4 = *(uint *)(iVar3 + 0x18);
      iVar3 = *(int *)(iVar3 + 0x1c);
    }
    if ((*(int *)(param_1 + 100) != 0) && (0 < *(int *)(param_1 + 0x40))) {
      iVar1 = FUN_00c99e20(*(int *)(param_1 + 0x38));
      uVar2 = *(uint *)(iVar1 + 0x18) + *(uint *)(param_1 + 0x68);
      iVar1 = *(int *)(iVar1 + 0x1c) + *(int *)(param_1 + 0x6c) +
              (uint)CARRY4(*(uint *)(iVar1 + 0x18),*(uint *)(param_1 + 0x68));
      if ((uVar4 == 0 && iVar3 == 0) || ((iVar1 <= iVar3 && ((iVar1 < iVar3 || (uVar2 < uVar4))))))
      {
        iVar3 = iVar1;
        uVar4 = uVar2;
      }
    }
    if (((-1 < iVar3) && ((0 < iVar3 || (uVar4 != 0)))) &&
       ((uVar4 != *(uint *)(param_1 + 0x58) || (iVar3 != *(int *)(param_1 + 0x5c))))) {
      if (*(int *)(param_1 + 0x54) != 0) {
        (**(code **)(**(int **)(param_1 + 0x60) + 0x18))
                  (*(int **)(param_1 + 0x60),*(int *)(param_1 + 0x54));
        ResetEvent(*(HANDLE *)(param_1 + 0x50));
      }
      (**(code **)(**(int **)(param_1 + 0x60) + 0x10))
                (*(int **)(param_1 + 0x60),uVar4,iVar3,0,0,*(undefined4 *)(param_1 + 0x50),
                 param_1 + 0x54);
      *(uint *)(param_1 + 0x58) = uVar4;
      *(int *)(param_1 + 0x5c) = iVar3;
    }
  }
  return;
}


//// FUNCTION FUN_00c992d0 @ 00c992d0 ////

undefined4 __thiscall FUN_00c992d0(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 0x6c) = param_2;
  *(undefined4 *)((int)this + 0x68) = param_1;
  local_4 = 0;
  *(undefined4 *)((int)this + 100) = 1;
  FUN_00c99200((int)this);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00c99340 @ 00c99340 ////

undefined4 __fastcall FUN_00c99340(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06d08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_4 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_00c99200(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00c993a0 @ 00c993a0 ////

undefined4 __thiscall FUN_00c993a0(void *this,undefined4 param_1,DWORD param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  int *unaff_retaddr;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06d28;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  ExceptionList = &local_c;
  do {
    EnterCriticalSection(lpCriticalSection);
    iVar4 = 0;
    local_4 = 0;
    if (0 < *(int *)((int)this + 0x28)) {
      iVar4 = FUN_00c99e20(*(int *)((int)this + 0x20));
    }
    if ((*(int *)((int)this + 100) != 0) && (0 < *(int *)((int)this + 0x40))) {
      iVar1 = FUN_00c99e20(*(int *)((int)this + 0x38));
      iVar3 = *(int *)((int)this + 0x6c) + *(int *)(iVar1 + 0x1c) +
              (uint)CARRY4(*(uint *)((int)this + 0x68),*(uint *)(iVar1 + 0x18));
      if (iVar4 != 0) {
        if ((*(int *)(iVar4 + 0x1c) < iVar3) ||
           ((*(int *)(iVar4 + 0x1c) <= iVar3 &&
            (*(uint *)(iVar4 + 0x18) <= *(uint *)((int)this + 0x68) + *(uint *)(iVar1 + 0x18)))))
        goto LAB_00c9942b;
      }
      iVar4 = iVar1;
    }
LAB_00c9942b:
    if ((iVar4 != 0) &&
       (iVar1 = FUN_00c97c20(this,*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c),
                             *(int *)(iVar4 + 0x30)), iVar1 != 0)) {
      (**(code **)(*(int *)(iVar4 + 0xc) + 4))(iVar4 + 0xc);
      *unaff_retaddr = iVar4;
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = lpCriticalSection;
      return 0;
    }
    local_4 = 0xffffffff;
    LeaveCriticalSection(lpCriticalSection);
    DVar2 = WaitForSingleObject(*(HANDLE *)((int)this + 0x50),param_2);
    if (DVar2 != 0) {
      ExceptionList = local_c;
      return 0x80004004;
    }
  } while( true );
}


//// FUNCTION FUN_00c994c0 @ 00c994c0 ////

undefined4 __thiscall FUN_00c994c0(void *this,uint param_1,int *param_2,int *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  LPCRITICAL_SECTION unaff_EBX;
  int iVar2;
  int iVar3;
  uint local_1c;
  int local_18;
  uint local_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06d48;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  iVar3 = 0;
  iVar2 = 0;
  local_4 = 0;
  if (0 < *(int *)((int)this + 0x40)) {
    iVar2 = FUN_00c99e20(*(int *)((int)this + 0x38));
  }
  if ((0 < *(int *)((int)this + 0x28)) &&
     (iVar3 = FUN_00c99e20(*(int *)((int)this + 0x20)), iVar3 != 0)) {
    local_14 = *(uint *)(iVar3 + 0x18);
    iVar1 = *(int *)(iVar3 + 0x1c);
    if (*(int *)((int)this + 0x60) != 0) {
      local_1c = 0;
      local_18 = 0;
      (**(code **)(**(int **)((int)this + 0x60) + 0xc))(*(int **)((int)this + 0x60),&local_1c);
      if ((iVar1 <= local_18) && ((iVar1 < local_18 || (local_14 <= local_1c)))) {
        (**(code **)(*(int *)(iVar3 + 0xc) + 4))(iVar3 + 0xc);
        *param_2 = iVar3;
        LeaveCriticalSection(unaff_EBX);
        ExceptionList = pvStack_10;
        return 0;
      }
    }
  }
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) <= (int)param_2)) &&
     ((*(int *)(iVar2 + 0x1c) < (int)param_2 || (*(uint *)(iVar2 + 0x18) <= param_1)))) {
    (**(code **)(*(int *)(iVar3 + 0xc) + 4))(iVar3 + 0xc);
    *param_2 = iVar2;
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = pvStack_10;
    return 0;
  }
  if ((*(int *)((int)this + 100) != 0) && (iVar3 != 0)) {
    iVar2 = (int)param_2 +
            (uint)CARRY4(*(uint *)((int)this + 0x68),param_1) + *(int *)((int)this + 0x6c);
    if ((*(int *)(iVar3 + 0x1c) <= iVar2) &&
       ((*(int *)(iVar3 + 0x1c) < iVar2 ||
        (*(uint *)(iVar3 + 0x18) <= *(uint *)((int)this + 0x68) + param_1)))) {
      *param_3 = iVar3;
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = pvStack_c;
      return 0;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_c;
  return 0x80040216;
}


//// FUNCTION ScalarDeletingDtor_00c99770 @ 00c99770 ////

void * __thiscall ScalarDeletingDtor_00c99770(void *this,byte param_1)

{
  FUN_00c98b20((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00db1878_00c99790 @ 00c99790 ////

undefined4 * __thiscall
Ctor_vt00db1878_00c99790(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  Wrap_InterlockedIncrement_00c92db0((void *)((int)this + 8),param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined ***)this = &PTR_LAB_00db17c8;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00db1780;
  *(undefined ***)((int)this + 8) = &PTR_LAB_00db176c;
  *(int *)((int)this + 0x18) = param_4;
  if (param_4 == 0) {
    *param_3 = 0x80004003;
  }
  *(undefined ***)this = &PTR_LAB_00db1878;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00db1830;
  *(undefined ***)((int)this + 8) = &PTR_LAB_00db181c;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 1;
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c99820 @ 00c99820 ////

void * __thiscall ScalarDeletingDtor_00c99820(void *this,byte param_1)

{
  FUN_00c99840((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c99840 @ 00c99840 ////

void __fastcall FUN_00c99840(int param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  if (param_1 != 0) {
    FUN_00c98a60(param_1 + 4);
    return;
  }
  FUN_00c98a60(0);
  return;
}


//// FUNCTION FUN_00c99940 @ 00c99940 ////

undefined4 __thiscall FUN_00c99940(void *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined4 *this_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06d68;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  (**(code **)(*(int *)(param_1 + 0xc) + 4))(param_1 + 0xc);
  this_00 = (undefined4 *)((int)this + 0x38);
  if (*(int *)(param_1 + 0x30) == 0) {
    this_00 = (undefined4 *)((int)this + 0x20);
  }
  piVar1 = (int *)*this_00;
  if (piVar1 == (int *)0x0) {
LAB_00c999e0:
    FUN_00c99ee0(this_00,param_1);
  }
  else {
    do {
      iVar2 = FUN_00c99e20((int)piVar1);
      if ((*(int *)(param_1 + 0x1c) < *(int *)(iVar2 + 0x1c)) ||
         ((*(int *)(param_1 + 0x1c) <= *(int *)(iVar2 + 0x1c) &&
          (*(uint *)(param_1 + 0x18) < *(uint *)(iVar2 + 0x18))))) {
        if (piVar1 == (int *)0x0) goto LAB_00c999e0;
        FUN_00c9a120(this_00,piVar1,param_1);
        goto LAB_00c999f3;
      }
      FUN_00c99e00((int *)&stack0xffffffe8);
    } while (piVar1 != (int *)0x0);
    FUN_00c99ee0(this_00,param_1);
  }
LAB_00c999f3:
  FUN_00c99200((int)this);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = lpCriticalSection;
  return 0;
}


//// FUNCTION FUN_00c99a20 @ 00c99a20 ////

undefined4 __thiscall FUN_00c99a20(void *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *this_00;
  undefined4 uVar2;
  int *local_18;
  undefined4 local_14;
  LPCRITICAL_SECTION local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06d88;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  ExceptionList = &local_c;
  local_10 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  local_14 = 0;
  this_00 = (int *)((int)this + 0x38);
  if (*(int *)(param_1 + 0x30) == 0) {
    this_00 = (int *)((int)this + 0x20);
  }
  local_18 = (int *)*this_00;
  if (local_18 == (int *)0x0) {
LAB_00c99aa0:
    uVar2 = 0x80040216;
  }
  else {
    do {
      iVar1 = FUN_00c99e20((int)local_18);
      if (iVar1 == param_1) {
        if (local_18 == (int *)0x0) goto LAB_00c99aa0;
        FUN_00c99e70(this_00,local_18);
        (**(code **)(*(int *)(param_1 + 0xc) + 8))(param_1 + 0xc);
        FUN_00c99200((int)this);
        uVar2 = local_14;
        goto LAB_00c99ac4;
      }
      FUN_00c99e00((int *)&local_18);
    } while (local_18 != (int *)0x0);
    uVar2 = 0x80040216;
  }
LAB_00c99ac4:
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return uVar2;
}


//// FUNCTION FUN_00c99af0 @ 00c99af0 ////

undefined4 __thiscall FUN_00c99af0(void *this,int *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06da8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  local_4 = 0;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  piVar1 = *(int **)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)this + 0x54) != 0) {
      (**(code **)(*piVar1 + 0x18))(piVar1,*(int *)((int)this + 0x54));
      *(undefined4 *)((int)this + 0x54) = 0;
    }
    (**(code **)(**(int **)((int)this + 0x60) + 8))(*(int **)((int)this + 0x60));
  }
  *(int **)((int)this + 0x60) = param_1;
  FUN_00c99200((int)this);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION FUN_00c99cd0 @ 00c99cd0 ////

void __fastcall FUN_00c99cd0(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}


//// FUNCTION FUN_00c99da0 @ 00c99da0 ////

void __fastcall FUN_00c99da0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 10;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00c99dc0 @ 00c99dc0 ////

void __fastcall FUN_00c99dc0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00c99e00 @ 00c99e00 ////

undefined4 FUN_00c99e00(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *(int *)(iVar1 + 4);
  return *(undefined4 *)(iVar1 + 8);
}


//// FUNCTION FUN_00c99e20 @ 00c99e20 ////

undefined4 FUN_00c99e20(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_00c99e40 @ 00c99e40 ////

int __thiscall FUN_00c99e40(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 8) == param_1) break;
    iVar2 = *(int *)this;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00c99e70 @ 00c99e70 ////

int __thiscall FUN_00c99e70(void *this,int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    *(int *)this = param_1[1];
  }
  else {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] == (int *)0x0) {
    *(int *)((int)this + 4) = *param_1;
  }
  else {
    *(int *)param_1[1] = *param_1;
  }
  iVar1 = param_1[2];
  if (*(int *)((int)this + 0x10) < *(int *)((int)this + 0xc)) {
    param_1[1] = *(int *)((int)this + 0x14);
    *(int **)((int)this + 0x14) = param_1;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00c99ee0 @ 00c99ee0 ////

void __thiscall FUN_00c99ee0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x14) = puVar1[1];
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    if (puVar1 != (undefined4 *)0x0) goto LAB_00c99f0d;
  }
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
LAB_00c99f0d:
  puVar1[2] = param_1;
  puVar1[1] = 0;
  *puVar1 = *(undefined4 *)((int)this + 4);
  if (*(int *)((int)this + 4) == 0) {
    *(undefined4 **)this = puVar1;
    *(undefined4 **)((int)this + 4) = puVar1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    return;
  }
  *(undefined4 **)(*(int *)((int)this + 4) + 4) = puVar1;
  *(undefined4 **)((int)this + 4) = puVar1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00c99f50 @ 00c99f50 ////

void __thiscall FUN_00c99f50(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x14) = puVar1[1];
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    if (puVar1 != (undefined4 *)0x0) goto LAB_00c99f7d;
  }
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
LAB_00c99f7d:
  puVar1[2] = param_1;
  *puVar1 = 0;
  puVar1[1] = *(undefined4 *)this;
  if (*(undefined4 **)this == (undefined4 *)0x0) {
    *(undefined4 **)((int)this + 4) = puVar1;
    *(undefined4 **)this = puVar1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    return;
  }
  **(undefined4 **)this = puVar1;
  *(undefined4 **)this = puVar1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00c99fc0 @ 00c99fc0 ////

undefined4 __thiscall FUN_00c99fc0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  do {
    if (iVar2 == 0) {
      return 1;
    }
    puVar1 = (undefined4 *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 4);
    iVar3 = FUN_00c99ee0(this,*puVar1);
  } while (iVar3 != 0);
  return 0;
}


//// FUNCTION FUN_00c9a120 @ 00c9a120 ////

void __thiscall FUN_00c9a120(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    FUN_00c99ee0(this,param_2);
    return;
  }
  if (param_1 == *(int **)this) {
    FUN_00c99f50(this,param_2);
    return;
  }
  piVar2 = *(int **)((int)this + 0x14);
  if (piVar2 != (int *)0x0) {
    *(int *)((int)this + 0x14) = piVar2[1];
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    if (piVar2 != (int *)0x0) goto LAB_00c9a17b;
  }
  piVar2 = operator_new(0xc);
  if (piVar2 == (int *)0x0) {
    return;
  }
LAB_00c9a17b:
  piVar2[2] = param_2;
  iVar1 = *param_1;
  *piVar2 = iVar1;
  piVar2[1] = (int)param_1;
  *param_1 = (int)piVar2;
  *(int **)(iVar1 + 4) = piVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00c9a310 @ 00c9a310 ////

void __fastcall FUN_00c9a310(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d06dcb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00c99dc0(param_1);
  local_4 = 0xffffffff;
  if ((void *)param_1[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[5]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c9a380 @ 00c9a380 ////

void __fastcall FUN_00c9a380(undefined4 *param_1)

{
  FUN_00c99e70(param_1,(int *)*param_1);
  return;
}


//// FUNCTION FUN_00c9a3a0 @ 00c9a3a0 ////

/* WARNING: Removing unreachable block (ram,0x00c9a3c0) */

uint FUN_00c9a3a0(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_00c9a410();
  if (uVar2 != 0) {
    iVar1 = cpuid_Version_info(1);
    return *(uint *)(iVar1 + 4) >> 0x18;
  }
  return 0xff;
}


//// FUNCTION FUN_00c9a3d0 @ 00c9a3d0 ////

/* WARNING: Removing unreachable block (ram,0x00c9a3ea) */

uint FUN_00c9a3d0(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = FUN_00c9a410();
  if (uVar2 != 0) {
    iVar1 = cpuid_Version_info(1);
    return *(uint *)(iVar1 + 4) >> 0x10 & 0xff;
  }
  lVar3 = FUN_00c9a630();
  if ((int)lVar3 != 0) {
    return (int)lVar3 + 1;
  }
  return CONCAT31((int3)((ulonglong)lVar3 >> 8),1);
}


//// FUNCTION FUN_00c9a410 @ 00c9a410 ////

/* WARNING: Removing unreachable block (ram,0x00c9a45c) */
/* WARNING: Removing unreachable block (ram,0x00c9a44c) */

uint FUN_00c9a410(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  if (((((*puVar2 & 0xf00) == 0xf00) || ((*puVar2 & 0xf00000) != 0)) &&
      (*(int *)(iVar1 + 4) == 0x756e6547)) &&
     ((*(int *)(iVar1 + 8) == 0x49656e69 && (*(int *)(iVar1 + 0xc) == 0x6c65746e)))) {
    return puVar2[2] & 0x10000000;
  }
  return 0;
}


//// FUNCTION FUN_00c9a4e0 @ 00c9a4e0 ////

/* WARNING: Removing unreachable block (ram,0x00c9a4f1) */

ulonglong FUN_00c9a4e0(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)cpuid_Version_info(1);
  uVar2 = *puVar1;
  if ((((uVar2 & 0x3000) == 0) && ((uVar2 & 0xf00) == 0x600)) &&
     (uVar2 = uVar2 & 0xf0, (char)uVar2 == -0x70)) {
    return CONCAT44(puVar1[2],1);
  }
  return CONCAT44(puVar1[2],uVar2) & 0xffffffffffffff00;
}


//// FUNCTION FUN_00c9a530 @ 00c9a530 ////

/* WARNING: Removing unreachable block (ram,0x00c9a541) */

bool FUN_00c9a530(void)

{
  int iVar1;
  
  iVar1 = cpuid_Version_info(1);
  return (*(uint *)(iVar1 + 8) & 0x800000) != 0;
}


//// FUNCTION FUN_00c9a570 @ 00c9a570 ////

/* WARNING: Removing unreachable block (ram,0x00c9a581) */

bool FUN_00c9a570(void)

{
  int iVar1;
  
  iVar1 = cpuid_Version_info(1);
  return (*(uint *)(iVar1 + 8) & 0x2000000) != 0;
}


//// FUNCTION FUN_00c9a5b0 @ 00c9a5b0 ////

/* WARNING: Removing unreachable block (ram,0x00c9a5c1) */

bool FUN_00c9a5b0(void)

{
  int iVar1;
  
  iVar1 = cpuid_Version_info(1);
  return (*(uint *)(iVar1 + 8) & 0x4000000) != 0;
}


//// FUNCTION FUN_00c9a5f0 @ 00c9a5f0 ////

/* WARNING: Removing unreachable block (ram,0x00c9a601) */

undefined8 FUN_00c9a5f0(void)

{
  int iVar1;
  
  iVar1 = cpuid_Version_info(1);
  return CONCAT44(*(undefined4 *)(iVar1 + 8),(uint)((*(uint *)(iVar1 + 0xc) & 1) != 0));
}


//// FUNCTION FUN_00c9a630 @ 00c9a630 ////

/* WARNING: Removing unreachable block (ram,0x00c9a6ac) */
/* WARNING: Removing unreachable block (ram,0x00c9a66c) */

longlong FUN_00c9a630(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)cpuid_basic_info(0);
  if ((((puVar1[1] == 0x756e6547) && (puVar1[2] == 0x49656e69)) && (puVar1[3] == 0x6c65746e)) &&
     (3 < *puVar1)) {
    puVar1 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
    return CONCAT44(puVar1[2],*puVar1 >> 0x1a);
  }
  return (ulonglong)puVar1[2] << 0x20;
}


//// FUNCTION FUN_00c9a700 @ 00c9a700 ////

char __cdecl FUN_00c9a700(byte *param_1,byte *param_2,byte *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  HANDLE pvVar4;
  WINBOOL WVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  longlong lVar12;
  byte local_48;
  char local_47;
  char local_46;
  char local_45;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  HANDLE local_2c;
  uint local_28;
  _SYSTEM_INFO local_24;
  
  *param_3 = 0;
  *param_1 = 1;
  local_48 = 0xff;
  local_45 = '\0';
  local_38 = CONCAT31(local_38._1_3_,1);
  *param_2 = 1;
  local_24.dwNumberOfProcessors = 0;
  GetSystemInfo(&local_24);
  *param_3 = (byte)local_24.dwNumberOfProcessors;
  lVar12 = FUN_00c9a630();
  bVar10 = (char)lVar12 + 1;
  local_30 = CONCAT31(local_30._1_3_,bVar10);
  uVar3 = FUN_00c9a410();
  if (uVar3 == 0) {
    bVar2 = 1;
    bVar8 = 0;
    param_1._0_1_ = 0;
    if (1 < bVar10) {
      do {
        bVar2 = bVar2 << 1;
        bVar8 = bVar8 + 1;
        param_1._0_1_ = bVar8;
      } while (bVar2 < bVar10);
    }
    pvVar4 = GetCurrentProcess();
    GetProcessAffinityMask(pvVar4,&local_44,&local_34);
    if (local_44 != local_34) {
      *param_3 = 0xff;
      return '\t';
    }
    uVar3 = 1;
    do {
      if (local_44 < uVar3) break;
      bVar10 = local_48;
      if (((local_44 & uVar3) != 0) && (WVar5 = SetProcessAffinityMask(pvVar4,uVar3), WVar5 != 0)) {
        Sleep(0);
        uVar7 = FUN_00c9a3a0();
        bVar2 = (byte)uVar7 >> ((byte)param_1 & 0x1f);
        bVar10 = bVar2;
        if ((local_48 != 0xff) && (bVar10 = local_48, local_48 == bVar2)) {
          *param_2 = *param_2 + 1;
        }
      }
      local_48 = bVar10;
      uVar3 = uVar3 << 1;
    } while (uVar3 != 0);
    SetProcessAffinityMask(pvVar4,local_44);
    uVar3 = (uint)*param_2;
    if (*param_2 < 2) {
      return '\x04';
    }
    cVar11 = '\x05';
  }
  else {
    local_28 = FUN_00c9a3d0();
    local_2c = (HANDLE)CONCAT31(local_2c._1_3_,(char)local_28);
    local_28 = local_28 & 0xff;
    bVar8 = 1;
    local_47 = -1;
    local_40 = local_40 & 0xffffff00;
    local_3c = CONCAT31(local_3c._1_3_,0xff);
    local_46 = '\0';
    bVar2 = (byte)((ulonglong)local_28 / (ulonglong)(longlong)(int)(local_30 & 0xff));
    if (1 < bVar2) {
      do {
        local_47 = local_47 << 1;
        bVar8 = bVar8 << 1;
        local_40 = CONCAT31(local_40._1_3_,(char)local_40 + '\x01');
      } while (bVar8 < bVar2);
    }
    if (1 < bVar10) {
      bVar2 = 1;
      do {
        bVar2 = bVar2 << 1;
        local_47 = local_47 << 1;
        local_46 = local_46 + '\x01';
      } while (bVar2 < bVar10);
      local_3c = CONCAT31(local_3c._1_3_,local_47);
    }
    pvVar4 = GetCurrentProcess();
    local_2c = pvVar4;
    GetProcessAffinityMask(pvVar4,&local_44,&local_34);
    uVar7 = local_3c;
    uVar3 = local_40;
    if (local_44 != local_34) {
      *param_3 = 0xff;
      return '\b';
    }
    local_30 = 1;
    do {
      if (local_44 < local_30) break;
      bVar10 = local_48;
      cVar11 = local_45;
      if (((local_44 & local_30) != 0) &&
         (WVar5 = SetProcessAffinityMask(pvVar4,local_30), WVar5 != 0)) {
        Sleep(0);
        uVar6 = FUN_00c9a3a0();
        local_3c = CONCAT31(local_3c._1_3_,(byte)uVar6);
        bVar2 = (byte)uVar6 >> ((byte)uVar3 + local_46 & 0x1f);
        cVar9 = (char)((int)(~(uVar7 & 0xff) & uVar6 & 0xff) >> ((byte)uVar3 & 0x1f));
        bVar10 = bVar2;
        cVar11 = cVar9;
        if ((local_48 != 0xff) &&
           ((bVar10 = local_48, cVar11 = local_45, local_48 == bVar2 &&
            (*param_1 = *param_1 + 1, local_45 == cVar9)))) {
          local_38 = CONCAT31(local_38._1_3_,(char)local_38 + '\x01');
        }
      }
      local_45 = cVar11;
      local_48 = bVar10;
      local_30 = local_30 << 1;
      pvVar4 = local_2c;
    } while (local_30 != 0);
    SetProcessAffinityMask(pvVar4,local_44);
    uVar1 = (ulonglong)*param_1 / (ulonglong)(longlong)(int)(local_38 & 0xff);
    uVar3 = (uint)uVar1;
    bVar10 = (byte)uVar1;
    *param_2 = bVar10;
    if (bVar10 < *param_1) {
      *param_3 = (byte)((longlong)(ulonglong)*param_3 / (longlong)(int)local_28);
      return (-(1 < bVar10) & 5U) + 1;
    }
    if (bVar10 < 2) {
      return '\x02';
    }
    cVar11 = '\a';
  }
  *param_3 = (byte)((ulonglong)*param_3 / (ulonglong)(longlong)(int)uVar3);
  return cVar11;
}


//// FUNCTION Unlink @ 00c9b1c8 ////

/* Library Function - Single Match
    public: void __thiscall ULI::Unlink(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall ULI::Unlink(ULI *this)

{
  ULI *pUVar1;
  int iVar2;
  ULI *pUVar3;
  
  pUVar3 = (ULI *)&DAT_010daa34;
  iVar2 = DAT_010daa34;
  while (iVar2 != 0) {
    pUVar1 = *(ULI **)pUVar3;
    if (pUVar1 == this) goto LAB_00c9b1e7;
    pUVar3 = pUVar1;
    iVar2 = *(int *)pUVar1;
  }
  if (*(ULI **)pUVar3 == this) {
LAB_00c9b1e7:
    *(int *)pUVar3 = *(int *)this;
  }
  return;
}


//// FUNCTION ___delayLoadHelper2@8 @ 00c9b296 ////

/* Library Function - Single Match
    ___delayLoadHelper2@8
   
   Library: Visual Studio 2003 Release */

FARPROC ___delayLoadHelper2_8(uint *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  FARPROC pFVar4;
  HMODULE hLibModule;
  HMODULE pHVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint local_48;
  uint *local_44;
  int *local_40;
  LPCSTR local_3c;
  uint local_38;
  char *local_34;
  HMODULE local_30;
  FARPROC local_2c;
  DWORD local_28;
  int *local_1c;
  int local_10;
  uint local_8;
  
  puVar3 = param_1;
  local_1c = (int *)(param_1[2] + 0x400000);
  local_10 = param_1[5] + 0x400000;
  local_3c = (LPCSTR)(param_1[1] + 0x400000);
  puVar1 = param_1 + 4;
  local_8 = param_1[7];
  local_40 = param_2;
  local_48 = 0x24;
  local_44 = param_1;
  local_38 = 0;
  local_34 = (char *)0x0;
  local_30 = (HMODULE)0x0;
  local_2c = (FARPROC)0x0;
  local_28 = 0;
  if ((*param_1 & 1) == 0) {
    param_2 = (int *)&local_48;
    RaiseException(0xc06d0057,0,1,(ULONG_PTR *)&param_2);
    pFVar4 = (FARPROC)0x0;
  }
  else {
    hLibModule = (HMODULE)*local_1c;
    param_1 = (uint *)(((int)((int)param_2 - (param_1[3] + 0x400000)) >> 2) * 4);
    uVar2 = *(uint *)(*puVar1 + 0x400000 + (int)param_1);
    local_38 = ~(uVar2 >> 0x1f) & 1;
    if (local_38 == 0) {
      local_34 = (char *)(uVar2 & 0xffff);
    }
    else {
      local_34 = IMAGE_DOS_HEADER_00400000.e_magic + uVar2 + 2;
    }
    pFVar4 = (FARPROC)0x0;
    if ((DAT_010daa3c == (code *)0x0) ||
       (pFVar4 = (FARPROC)(*DAT_010daa3c)(0,&local_48), pFVar4 == (FARPROC)0x0)) {
      if (hLibModule == (HMODULE)0x0) {
        if ((((DAT_010daa3c == (code *)0x0) ||
             (hLibModule = (HMODULE)(*DAT_010daa3c)(1,&local_48), hLibModule == (HMODULE)0x0)) &&
            (hLibModule = LoadLibraryA(local_3c), hLibModule == (HMODULE)0x0)) &&
           ((local_28 = GetLastError(), DAT_010daa38 == (code *)0x0 ||
            (hLibModule = (HMODULE)(*DAT_010daa38)(3,&local_48), hLibModule == (HMODULE)0x0)))) {
          param_2 = (int *)&local_48;
          RaiseException(0xc06d007e,0,1,(ULONG_PTR *)&param_2);
          return (FARPROC)local_2c;
        }
        pHVar5 = (HMODULE)InterlockedExchange(local_1c,(LONG)hLibModule);
        if (pHVar5 == hLibModule) {
          FreeLibrary(hLibModule);
        }
        else if ((puVar3[6] != 0) && (puVar6 = LocalAlloc(0x40,8), puVar6 != (undefined4 *)0x0)) {
          puVar6[1] = puVar3;
          *puVar6 = DAT_010daa34;
          DAT_010daa34 = puVar6;
        }
      }
      local_30 = hLibModule;
      if (DAT_010daa3c != (code *)0x0) {
        pFVar4 = (FARPROC)(*DAT_010daa3c)(2,&local_48);
      }
      if (((pFVar4 == (FARPROC)0x0) &&
          (((((puVar3[5] == 0 || (puVar3[7] == 0)) ||
             (piVar7 = (int *)((int)&hLibModule->unused + hLibModule[0xf].unused), *piVar7 != 0x4550
             )) || ((piVar7[2] != local_8 || (hLibModule != (HMODULE)piVar7[0xd])))) ||
           (pFVar4 = *(FARPROC *)((int)param_1 + local_10),
           *(FARPROC *)((int)param_1 + local_10) == (FARPROC)0x0)))) &&
         (pFVar4 = GetProcAddress(hLibModule,local_34), pFVar4 == (FARPROC)0x0)) {
        local_28 = GetLastError();
        if (DAT_010daa38 != (code *)0x0) {
          pFVar4 = (FARPROC)(*DAT_010daa38)(4,&local_48);
        }
        if (pFVar4 == (FARPROC)0x0) {
          param_1 = &local_48;
          RaiseException(0xc06d007f,0,1,(ULONG_PTR *)&param_1);
          pFVar4 = local_2c;
        }
      }
      *param_2 = (int)pFVar4;
    }
    if (DAT_010daa3c != (code *)0x0) {
      local_28 = 0;
      local_30 = hLibModule;
      local_2c = pFVar4;
      (*DAT_010daa3c)(5,&local_48);
    }
  }
  return (FARPROC)pFVar4;
}


//// FUNCTION `scalar_deleting_destructor' @ 00c9b4d9 ////

/* Library Function - Single Match
    public: void * __thiscall ULI::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void * __thiscall ULI::_scalar_deleting_destructor_(ULI *this,uint param_1)

{
  Unlink(this);
  if ((param_1 & 1) != 0) {
    LocalFree(this);
  }
  return this;
}


//// FUNCTION ___HrLoadAllImportsForDll@4 @ 00c9b4f5 ////

/* Library Function - Single Match
    ___HrLoadAllImportsForDll@4
   
   Library: Visual Studio 2003 Release */

undefined4 ___HrLoadAllImportsForDll_4(char *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  ImgDelayDescr *pIVar6;
  int *piVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 local_8;
  
  local_8 = 0x8007007e;
  for (pIVar6 = &ImgDelayDescr_00e4a85c; iVar2 = pIVar6->szName, iVar2 != 0; pIVar6 = pIVar6 + 1) {
    pcVar4 = (char *)(iVar2 + 0x400000);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar4 - (iVar2 + 0x400001);
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar5 == (int)pcVar4 - (int)(param_1 + 1)) {
      bVar9 = true;
      pcVar4 = param_1;
      pcVar8 = (char *)(iVar2 + 0x400000);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar9 = *pcVar4 == *pcVar8;
        pcVar4 = pcVar4 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar9);
      if (bVar9) break;
    }
  }
  if (pIVar6->szName != 0) {
    piVar7 = (int *)(pIVar6->pIAT + 0x400000);
    iVar5 = 0;
    iVar2 = *piVar7;
    piVar3 = piVar7;
    while (iVar2 != 0) {
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + 1;
      iVar2 = *piVar3;
    }
    piVar3 = piVar7 + iVar5;
    for (; piVar7 < piVar3; piVar7 = piVar7 + 1) {
      ___delayLoadHelper2_8(&pIVar6->grAttrs,piVar7);
    }
    local_8 = 0;
  }
  return local_8;
}


//// FUNCTION ___FUnloadDelayLoadedDLL2@4 @ 00c9b5a5 ////

/* Library Function - Single Match
    ___FUnloadDelayLoadedDLL2@4
   
   Library: Visual Studio 2003 Release */

undefined4 ___FUnloadDelayLoadedDLL2_4(char *param_1)

{
  char cVar1;
  HMODULE hLibModule;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  bool bVar10;
  undefined4 local_c;
  ULI *local_8;
  
  local_c = 0;
  local_8 = DAT_010daa34;
  if (DAT_010daa34 != (ULI *)0x0) {
    do {
      pcVar8 = (char *)(*(int *)(*(int *)(local_8 + 4) + 4) + 0x400000);
      pcVar2 = pcVar8;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iVar3 = (int)pcVar2 - (*(int *)(*(int *)(local_8 + 4) + 4) + 0x400001);
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if (iVar3 == (int)pcVar2 - (int)(param_1 + 1)) {
        bVar10 = true;
        pcVar2 = param_1;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar10 = *pcVar2 == *pcVar8;
          pcVar2 = pcVar2 + 1;
          pcVar8 = pcVar8 + 1;
        } while (bVar10);
        if (bVar10) break;
      }
      local_8 = *(ULI **)local_8;
    } while (local_8 != (ULI *)0x0);
    if ((local_8 != (ULI *)0x0) && (iVar3 = *(int *)(local_8 + 4), *(int *)(iVar3 + 0x18) != 0)) {
      puVar6 = (undefined4 *)(*(int *)(iVar3 + 8) + 0x400000);
      hLibModule = (HMODULE)*puVar6;
      piVar9 = (int *)(*(int *)(iVar3 + 0xc) + 0x400000);
      piVar7 = (int *)(*(int *)(iVar3 + 0x18) + 0x400000);
      iVar4 = 0;
      iVar3 = *piVar9;
      piVar5 = piVar9;
      while (iVar3 != 0) {
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + 1;
        iVar3 = *piVar5;
      }
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      FreeLibrary(hLibModule);
      *puVar6 = 0;
      ULI::Unlink(local_8);
      LocalFree(local_8);
      local_c = 1;
    }
  }
  return local_c;
}


//// FUNCTION DelayLoad_WMCreateSyncReader @ 00c9b666 ////

void DelayLoad_WMCreateSyncReader(void)

{
  FUN_00aa603f();
  return;
}


//// FUNCTION __wcsnicmp @ 00c9b676 ////

/* Library Function - Single Match
    __wcsnicmp
   
   Library: Visual Studio 2003 Release */

int __cdecl __wcsnicmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  wchar_t wVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  iVar5 = 0;
  p_Var2 = __getptd();
  ptVar3 = (pthreadlocinfo)p_Var2->_tfpecode;
  if (ptVar3 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar3 = ___updatetlocinfo();
  }
  if (_MaxCount != 0) {
    if (ptVar3->lc_handle[2] == 0) {
      do {
        wVar1 = *_Str1;
        local_8 = (uint)(ushort)wVar1;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          local_8 = local_8 + 0x20;
        }
        wVar1 = *_Str2;
        uVar4 = (uint)(ushort)wVar1;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          uVar4 = uVar4 + 0x20;
        }
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
        _MaxCount = _MaxCount - 1;
      } while (((_MaxCount != 0) && ((short)local_8 != 0)) && ((short)local_8 == (short)uVar4));
    }
    else {
      do {
        local_8 = ___towlower_mt((int)ptVar3,(uint)(ushort)*_Str1);
        _Str1 = _Str1 + 1;
        uVar4 = ___towlower_mt((int)ptVar3,(uint)(ushort)*_Str2);
        _Str2 = _Str2 + 1;
        _MaxCount = _MaxCount - 1;
        if ((_MaxCount == 0) || ((short)local_8 == 0)) break;
      } while ((short)local_8 == (short)uVar4);
    }
    iVar5 = (local_8 & 0xffff) - (uVar4 & 0xffff);
  }
  return iVar5;
}


//// FUNCTION FUN_00c9b736 @ 00c9b736 ////

undefined4 __cdecl FUN_00c9b736(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


//// FUNCTION FUN_00c9b73e @ 00c9b73e ////

void __cdecl FUN_00c9b73e(int param_1,wchar_t *param_2,undefined4 *param_3)

{
  FUN_00ae91b0(param_1,param_2,param_3,(undefined4 *)0x0);
  return;
}


//// FUNCTION __memccpy @ 00c9b760 ////

/* Library Function - Single Match
    __memccpy
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void * __cdecl __memccpy(void *_Dst,void *_Src,int _Val,size_t _MaxCount)

{
  char cVar1;
  char cVar3;
  uint uVar2;
  
  if (_MaxCount != 0) {
    uVar2 = (_Val & 0xffU) << 8;
    if ((_MaxCount & 1) == 0) goto LAB_00c9b791;
    cVar1 = *(char *)_Src;
    uVar2 = (uint)CONCAT11((char)_Val,cVar1);
    *(char *)_Dst = cVar1;
    _Dst = (void *)((int)_Dst + 1);
    if (cVar1 == (char)_Val) {
      return _Dst;
    }
    _Src = (char *)((int)_Src + 1);
    for (_MaxCount = _MaxCount - 1; _MaxCount != 0; _MaxCount = _MaxCount - 2) {
LAB_00c9b791:
      cVar1 = *(char *)_Src;
      cVar3 = (char)(uVar2 >> 8);
      if (cVar1 == cVar3) {
        *(char *)_Dst = cVar1;
        return (char *)((int)_Dst + 1);
      }
      *(char *)_Dst = cVar1;
      cVar1 = *(char *)((int)_Src + 1);
      uVar2 = CONCAT31((int3)(uVar2 >> 8),cVar1);
      *(char *)((int)_Dst + 1) = cVar1;
      _Dst = (void *)((int)_Dst + 2);
      if (cVar1 == cVar3) {
        return _Dst;
      }
      _Src = (char *)((int)_Src + 2);
    }
  }
  return (void *)0x0;
}


//// FUNCTION FUN_00c9b7bb @ 00c9b7bb ////

undefined4 __cdecl FUN_00c9b7bb(LPCSTR param_1)

{
  WINBOOL WVar1;
  ulong uVar2;
  
  WVar1 = RemoveDirectoryA(param_1);
  if (WVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    __dosmaperr(uVar2);
    return 0xffffffff;
  }
  return 0;
}


//// FUNCTION FUN_00c9b7e5 @ 00c9b7e5 ////

undefined4 __cdecl FUN_00c9b7e5(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_010cbbc4;
  DAT_010cbbc4 = param_1 & 0x180;
  return uVar1;
}


//// FUNCTION __ftol @ 00c9b7fc ////

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}


//// FUNCTION _longjmp @ 00c9b824 ////

/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    _longjmp
   
   Library: Visual Studio 2003 Release */

void __cdecl _longjmp(int *_Buf,int _Value)

{
  PVOID pvVar1;
  int iVar2;
  
  pvVar1 = (PVOID)_Buf[6];
  if (pvVar1 != ExceptionList) {
    __global_unwind2(pvVar1);
  }
  if (pvVar1 != (PVOID)0x0) {
    iVar2 = __rt_probe_read4_4();
    if ((iVar2 == 0) || (_Buf[8] != 0x56433230)) {
      __local_unwind2((int)pvVar1,_Buf[7]);
    }
    else if ((code *)_Buf[9] != (code *)0x0) {
      (*(code *)_Buf[9])(_Buf);
    }
  }
  FUN_00acdaaa();
                    /* WARNING: Could not recover jumptable at 0x00c9b899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_Buf[5])();
  return;
}


//// FUNCTION __setjmp3 @ 00c9b8a0 ////

/* Library Function - Single Match
    __setjmp3
   
   Library: Visual Studio */

undefined4 __cdecl __setjmp3(undefined4 *param_1,int param_2,void *param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar3;
  undefined4 unaff_EDI;
  undefined4 *puVar4;
  undefined4 unaff_retaddr;
  
  *param_1 = unaff_EBP;
  param_1[1] = unaff_EBX;
  param_1[2] = unaff_EDI;
  param_1[3] = unaff_ESI;
  param_1[4] = register0x00000010;
  param_1[5] = unaff_retaddr;
  param_1[8] = 0x56433230;
  param_1[9] = 0;
  pvVar1 = ExceptionList;
  param_1[6] = ExceptionList;
  if (pvVar1 == (void *)0xffffffff) {
    param_1[7] = 0xffffffff;
  }
  else if ((param_2 == 0) || (param_1[9] = param_3, pvVar1 = param_3, param_2 == 1)) {
    param_1[7] = *(undefined4 *)((int)pvVar1 + 0xc);
  }
  else {
    param_1[7] = param_4;
    uVar2 = param_2 - 2;
    if (uVar2 != 0) {
      puVar3 = (undefined4 *)&stack0x00000014;
      puVar4 = param_1 + 10;
      if (6 < uVar2) {
        uVar2 = 6;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  return 0;
}


//// FUNCTION __vsnprintf @ 00c9b91b ////

/* Library Function - Single Match
    __vsnprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  FILE local_24;
  
  local_24._cnt = _Count;
  local_24._flag = 0x42;
  local_24._base = _Dest;
  local_24._ptr = _Dest;
  iVar1 = FUN_00ae1640(&local_24,(byte *)_Format,(wchar_t *)_Args);
  if (_Dest != (char *)0x0) {
    local_24._cnt = local_24._cnt - 1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar1;
}


//// FUNCTION _frexp @ 00c9b971 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _frexp
   
   Library: Visual Studio 2003 Release */

double __cdecl _frexp(double _X,int *_Y)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  
  uVar2 = __ctrlfp();
  uVar5 = (uint)((ulonglong)_X >> 0x20);
  if ((_X._6_2_ & 0x7ff0) != 0x7ff0) {
    fVar4 = __decomp(SUB84(_X,0),uVar5,_Y);
    __ctrlfp();
    fVar4 = (float10)(double)fVar4;
    goto LAB_00c9ba19;
  }
  *_Y = -1;
  iVar3 = __sptype(SUB84(_X,0),uVar5);
  if (iVar3 < 1) {
LAB_00c9b9d7:
    dVar1 = _X + 1.0;
  }
  else {
    dVar1 = _DAT_00e9a968;
    if (2 < iVar3) {
      if (iVar3 == 3) {
        fVar4 = __handle_qnan1(0x17,_X);
        goto LAB_00c9ba19;
      }
      goto LAB_00c9b9d7;
    }
  }
  fVar4 = __except1(8,0x17,_X,dVar1,uVar2);
LAB_00c9ba19:
  return (double)fVar4;
}


//// FUNCTION __snprintf @ 00c9ba1d ////

/* Library Function - Single Match
    __snprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  FILE local_24;
  
  local_24._cnt = _Count;
  local_24._flag = 0x42;
  local_24._base = _Dest;
  local_24._ptr = _Dest;
  iVar1 = FUN_00ae1640(&local_24,(byte *)_Format,(wchar_t *)&stack0x00000010);
  if (_Dest != (char *)0x0) {
    local_24._cnt = local_24._cnt - 1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar1;
}


//// FUNCTION init_namebuf @ 00c9ba74 ////

/* Library Function - Single Match
    _init_namebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl init_namebuf(int param_1)

{
  undefined1 *puVar1;
  char *_Dest;
  DWORD _Value;
  uint *puVar2;
  int _Radix;
  
  puVar2 = (uint *)&DAT_010daa40;
  if (param_1 != 0) {
    puVar2 = (uint *)&DAT_010daa50;
  }
  FUN_00ada2e0(puVar2,(uint *)&DAT_00d1835c);
  puVar1 = (undefined1 *)((int)puVar2 + 1);
  if (((char)*puVar2 != '\\') && ((char)*puVar2 != '/')) {
    *puVar1 = 0x5c;
    puVar1 = (undefined1 *)((int)puVar2 + 2);
  }
  if (param_1 == 0) {
    *puVar1 = 0x73;
  }
  else {
    *puVar1 = 0x74;
  }
  _Dest = puVar1 + 1;
  _Radix = 0x20;
  _Value = GetCurrentProcessId();
  __ultoa(_Value,_Dest,_Radix);
  FUN_00ada2f0(puVar2,(uint *)&DAT_00d1a3f0);
  return;
}


//// FUNCTION genfname @ 00c9bad5 ////

/* Library Function - Single Match
    _genfname
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl genfname(uchar *param_1)

{
  uchar *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  uint *puVar4;
  char local_8 [4];
  
  puVar1 = __mbsrchr(param_1,0x2e);
  uVar2 = _strtoul((char *)(puVar1 + 1),(char **)0x0,0x20);
  if (uVar2 + 1 < 0x7fff) {
    puVar4 = (uint *)__ultoa(uVar2 + 1,local_8,0x20);
    FUN_00ada2e0((uint *)(puVar1 + 1),puVar4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


//// FUNCTION _tmpfile @ 00c9bbdd ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _tmpfile
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl _tmpfile(void)

{
  int iVar1;
  FILE *pFVar2;
  int *piVar3;
  char *pcVar4;
  FILE *local_28;
  
  local_28 = (FILE *)0x0;
  iVar1 = FUN_00ad7039(2);
  if (iVar1 == 0) {
    return (FILE *)0x0;
  }
  __lock(2);
  if (DAT_010daa50 == '\0') {
    init_namebuf(1);
  }
  else {
    iVar1 = genfname((uchar *)&DAT_010daa50);
    if (iVar1 != 0) goto LAB_00c9bccc;
  }
  pFVar2 = (FILE *)FUN_00ae480e();
  if (pFVar2 == (FILE *)0x0) {
    piVar3 = FUN_00ad4b6c();
    *piVar3 = 0x18;
  }
  else {
    while (iVar1 = __sopen(&DAT_010daa50,0x8542,0x40,0x180), iVar1 == -1) {
      piVar3 = FUN_00ad4b6c();
      if ((*piVar3 != 0x11) || (iVar1 = genfname((uchar *)&DAT_010daa50), iVar1 != 0))
      goto LAB_00c9bccc;
    }
    pcVar4 = __strdup(&DAT_010daa50);
    pFVar2->_tmpfname = pcVar4;
    if (pcVar4 == (char *)0x0) {
      __close(iVar1);
    }
    else {
      pFVar2->_cnt = 0;
      pFVar2->_ptr = (char *)0x0;
      pFVar2->_base = (char *)0x0;
      pFVar2->_flag = DAT_010cc0c4 | 0x80;
      pFVar2->_file = iVar1;
      local_28 = pFVar2;
    }
  }
LAB_00c9bccc:
  FUN_00c9bce1();
  return local_28;
}


//// FUNCTION FUN_00c9bce1 @ 00c9bce1 ////

void FUN_00c9bce1(void)

{
  int unaff_EBP;
  FILE *unaff_ESI;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    __unlock_file(unaff_ESI);
  }
  FUN_00ad700c(2);
  return;
}


//// FUNCTION FUN_00c9bd18 @ 00c9bd18 ////

void __fastcall FUN_00c9bd18(undefined4 param_1)

{
  __cintrindisp1(param_1,0xf8791a);
  return;
}


//// FUNCTION FUN_00c9bd22 @ 00c9bd22 ////

void FUN_00c9bd22(void)

{
  undefined4 in_ECX;
  
  __cintrindisp1(in_ECX,0xf8793a);
  return;
}


//// FUNCTION FUN_00c9bd29 @ 00c9bd29 ////

void FUN_00c9bd29(void)

{
  undefined4 in_ECX;
  
  __cintrindisp1(in_ECX,0xf8795a);
  return;
}


//// FUNCTION FUN_00c9bd6c @ 00c9bd6c ////

void __fastcall FUN_00c9bd6c(undefined4 param_1)

{
  ushort in_FPUControlWord;
  
  if ((DAT_010dadc0 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00c9c110();
    return;
  }
  __cintrindisp1(param_1,0xe9a66a);
  return;
}


//// FUNCTION _perror @ 00c9bdbb ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _perror
   
   Library: Visual Studio 2003 Release */

void __cdecl _perror(char *_ErrMsg)

{
  char *_Str;
  size_t sVar1;
  int *piVar2;
  int iVar3;
  
  __lock_fhandle(2);
  if ((_ErrMsg != (char *)0x0) && (*_ErrMsg != '\0')) {
    sVar1 = _strlen(_ErrMsg);
    __write_lk(2,_ErrMsg,sVar1);
    __write_lk(2,": ",2);
  }
  piVar2 = FUN_00ad4b6c();
  iVar3 = DAT_00f87a30;
  if ((-1 < *piVar2) && (piVar2 = FUN_00ad4b6c(), iVar3 = DAT_00f87a30, *piVar2 < DAT_00f87a30)) {
    piVar2 = FUN_00ad4b6c();
    iVar3 = *piVar2;
  }
  _Str = (&PTR_s_No_error_00f87980)[iVar3];
  sVar1 = _strlen(_Str);
  __write_lk(2,_Str,sVar1);
  __write_lk(2,"\n",1);
  FUN_00c9be5e();
  return;
}


//// FUNCTION FUN_00c9be5e @ 00c9be5e ////

void FUN_00c9be5e(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + -0x1c));
  return;
}


//// FUNCTION __allrem @ 00c9be70 ////

/* Library Function - Single Match
    __allrem
   
   Library: Visual Studio */

undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar4 = param_1;
  uVar3 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_00c9bf1d;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar7 = uVar8 >> 1;
      uVar4 = (uint)(CONCAT14((uVar8 & 1) != 0,uVar4) >> 1);
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT44(uVar7,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY4(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_00c9bf1d;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_00c9bf1d:
  return CONCAT44(iVar6,iVar5);
}


//// FUNCTION __rt_probe_read4@4 @ 00c9bf22 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __rt_probe_read4@4
   
   Library: Visual Studio 2003 Release */

void __rt_probe_read4_4(void)

{
  return;
}


//// FUNCTION FUN_00c9c110 @ 00c9c110 ////

void FUN_00c9c110(void)

{
  float10 in_ST0;
  
  FUN_00c9c12e(SUB84((double)in_ST0,0),(uint)((ulonglong)(double)in_ST0 >> 0x20));
  return;
}


//// FUNCTION FUN_00c9c12e @ 00c9c12e ////

float10 __cdecl FUN_00c9c12e(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  double in_XMM0_Qa;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined2 uStack_c;
  undefined6 uStack_a;
  undefined2 uStack_4;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar4 = in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0;
    dVar5 = (in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0) - 6755399441055744.0;
    uVar1 = SUB84(dVar4,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar3 = (in_XMM0_Qa - (dVar4 - 6755399441055744.0) * 0.010830424696223417) -
            (dVar4 - 6755399441055744.0) * 2.572804622327669e-14;
    dVar5 = (in_XMM0_Qa - dVar5 * 0.010830424696223417) - dVar5 * 2.572804622327669e-14;
    dVar4 = (double)(*(ulonglong *)(&UNK_00db2bc8 + iVar2) |
                    ((ulonglong)dVar4 & 0xffffffc0) + 0xffc0 << 0x2e);
    dVar3 = dVar5 * dVar5 * (dVar5 * 0.16666666669815094 + 0.4999999999995663) +
            dVar3 + *(double *)(&DAT_00db2bc0 + iVar2) +
            dVar3 * dVar3 * dVar3 * dVar3 * (dVar3 * 0.008332168270616733 + 0.04166672086872847);
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar3 * dVar4 + dVar4);
    }
    dVar5 = (double)(*(ulonglong *)(&UNK_00db2bc8 + iVar2) & 0xfffffffffffff |
                    (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    uStack_4 = (undefined2)((ulonglong)dVar5 >> 0x30);
    in_XMM0_Qa = (double)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
                 (dVar5 + dVar3 * dVar5);
    if (((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)in_XMM0_Qa & 0x7ff0000000000000) != 0) goto LAB_00c9c322;
      iVar2 = 0xf;
    }
    else {
      iVar2 = 0xe;
    }
  }
  else {
    uVar1 = param_2 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)((double)CONCAT44(param_2,param_1) + 1.0);
    }
    if (uVar1 < 0x7ff00000) {
      if (param_2 < 0x80000000) {
        in_XMM0_Qa = INFINITY;
        iVar2 = 0xe;
      }
      else {
        in_XMM0_Qa = 0.0;
        iVar2 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && (param_1 == 0)) {
        if (param_2 != 0x7ff00000) {
          return (float10)0.0;
        }
        return (float10)INFINITY;
      }
      iVar2 = 0x3ea;
    }
  }
  uStack_c = SUB82(in_XMM0_Qa,0);
  uStack_a = (undefined6)((ulonglong)in_XMM0_Qa >> 0x10);
  ___libm_error_support((undefined8 *)&param_1,(undefined8 *)&param_1,(undefined8 *)&uStack_c,iVar2)
  ;
  in_XMM0_Qa = (double)CONCAT62(uStack_a,uStack_c);
LAB_00c9c322:
  return (float10)in_XMM0_Qa;
}


//// FUNCTION FUN_00c9c3dc @ 00c9c3dc ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

LPCSTR __cdecl FUN_00c9c3dc(LPCSTR param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  _ptiddata p_Var4;
  pthreadlocinfo ptVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined4 uStackY_5c;
  
  bVar3 = false;
  p_Var4 = __getptd();
  ptVar5 = (pthreadlocinfo)p_Var4->_tfpecode;
  if (ptVar5 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar5 = ___updatetlocinfo();
  }
  if (ptVar5->lc_handle[2] == 0) {
    cVar1 = *param_1;
    pcVar9 = param_1;
    while (cVar1 != '\0') {
      cVar1 = *pcVar9;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *pcVar9 = cVar1 + -0x20;
      }
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
    }
    return param_1;
  }
  uStackY_5c = 0xc9c450;
  uVar6 = FUN_00ad696b(ptVar5->lc_handle[2],0x200,param_1,0xffffffff,(LPSTR)0x0,0,
                       ptVar5->lc_codepage,1);
  if (uVar6 == 0) {
    return param_1;
  }
  puVar7 = (undefined1 *)(uVar6 + 3 & 0xfffffffc);
  iVar2 = -(int)puVar7;
  puVar8 = &stack0xffffffc8 + iVar2;
  if (&stack0xffffffc8 == puVar7) {
    *(uint *)(&stack0xffffffc4 + iVar2) = uVar6;
    *(undefined4 *)(&stack0xffffffc0 + iVar2) = 0xc9c49d;
    puVar8 = _malloc(*(size_t *)(&stack0xffffffc4 + iVar2));
    bVar3 = true;
    if (puVar8 == (void *)0x0) goto LAB_00c9c4d8;
  }
  *(undefined4 *)(&stack0xffffffc4 + iVar2) = 1;
  *(uint *)(&stack0xffffffc0 + iVar2) = ptVar5->lc_codepage;
  *(uint *)(&stack0xffffffbc + iVar2) = uVar6;
  *(undefined1 **)(&stack0xffffffb8 + iVar2) = puVar8;
  *(undefined4 *)(&stack0xffffffb4 + iVar2) = 0xffffffff;
  *(LPCSTR *)(&stack0xffffffb0 + iVar2) = param_1;
  *(undefined4 *)(&stack0xffffffac + iVar2) = 0x200;
  *(ulong *)(&stack0xffffffa8 + iVar2) = ptVar5->lc_handle[2];
  *(undefined4 *)((int)&uStackY_5c + iVar2) = 0xc9c4c6;
  uVar6 = FUN_00ad696b(*(LCID *)(&stack0xffffffa8 + iVar2),*(uint *)(&stack0xffffffac + iVar2),
                       *(LPCSTR *)(&stack0xffffffb0 + iVar2),*(size_t *)(&stack0xffffffb4 + iVar2),
                       *(LPSTR *)(&stack0xffffffb8 + iVar2),*(int *)(&stack0xffffffbc + iVar2),
                       *(UINT *)(&stack0xffffffc0 + iVar2),*(int *)(&stack0xffffffc4 + iVar2));
  if (uVar6 != 0) {
    *(undefined1 **)(&stack0xffffffc4 + iVar2) = puVar8;
    *(LPCSTR *)(&stack0xffffffc0 + iVar2) = param_1;
    *(undefined4 *)(&stack0xffffffbc + iVar2) = 0xc9c4d6;
    FUN_00ada2e0(*(uint **)(&stack0xffffffc0 + iVar2),*(uint **)(&stack0xffffffc4 + iVar2));
  }
LAB_00c9c4d8:
  if (!bVar3) {
    return param_1;
  }
  *(undefined1 **)(&stack0xffffffc4 + iVar2) = puVar8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(&stack0xffffffc0 + iVar2) = &UNK_00c9c4e3;
  _free(*(void **)(&stack0xffffffc4 + iVar2));
}


//// FUNCTION FUN_00d07820 @ 00d07820 ////

void FUN_00d07820(void)

{
  _atexit(FUN_00d113d0);
  return;
}


//// FUNCTION FUN_00d07830 @ 00d07830 ////

void FUN_00d07830(void)

{
  _atexit(FUN_00d113e0);
  return;
}


//// FUNCTION FUN_00d07840 @ 00d07840 ////

void FUN_00d07840(void)

{
  FUN_0049ad00(&DAT_0104a704,0);
  _atexit(FUN_00d11400);
  return;
}


//// FUNCTION Research_AtExitRegistration_1 @ 00d0784c ////

void Research_AtExitRegistration_1(void)

{
  _atexit(FUN_00d11400);
  return;
}


//// FUNCTION ResearchCategoryPackNames_StaticInit @ 00d07860 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ResearchCategoryPackNames_StaticInit(void)

{
  _strncpy(&DAT_00e50f14,"STARSANDLOT",0xb);
  _DAT_00e50f0c = 0xb;
  PTR_DAT_00e50f08[0xb] = 0;
  DAT_00e50f28 = &DAT_00e50f34;
  DAT_00e50f34 = 0;
  _DAT_00e50f2c = 0;
  _DAT_00e50f30 = 0x14;
  _strncpy(&DAT_00e50f34,"MAINSTREAM",10);
  _DAT_00e50f2c = 10;
  DAT_00e50f28[10] = 0;
  DAT_00e50f48 = &DAT_00e50f54;
  DAT_00e50f54 = 0;
  _DAT_00e50f4c = 0;
  _DAT_00e50f50 = 0x14;
  _strncpy(&DAT_00e50f54,"CULT",4);
  _DAT_00e50f4c = 4;
  DAT_00e50f48[4] = 0;
  DAT_00e50f68 = &DAT_00e50f74;
  DAT_00e50f74 = 0;
  _DAT_00e50f6c = 0;
  _DAT_00e50f70 = 0x14;
  _strncpy(&DAT_00e50f74,"MOVIEMAKING",0xb);
  _DAT_00e50f6c = 0xb;
  DAT_00e50f68[0xb] = 0;
  DAT_00e50f88 = &DAT_00e50f94;
  DAT_00e50f94 = 0;
  _DAT_00e50f8c = 0;
  _DAT_00e50f90 = 0x14;
  _strncpy(&DAT_00e50f94,"DOWNLOADS",9);
  _DAT_00e50f8c = 9;
  DAT_00e50f88[9] = 0;
  DAT_00e50fa8 = &DAT_00e50fb4;
  DAT_00e50fb4 = 0;
  _DAT_00e50fac = 0;
  _DAT_00e50fb0 = 0x14;
  _strncpy(&DAT_00e50fb4,"STUNTS",6);
  _DAT_00e50fac = 6;
  DAT_00e50fa8[6] = 0;
  _atexit(FUN_00d11410);
  return;
}


//// FUNCTION ResearchCategoryRoomNames_StaticInit @ 00d079e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ResearchCategoryRoomNames_StaticInit(void)

{
  _strncpy(&DAT_00e50fd4,"cos",3);
  _DAT_00e50fcc = 3;
  PTR_DAT_00e50fc8[3] = 0;
  DAT_00e50fe8 = &DAT_00e50ff4;
  DAT_00e50ff4 = 0;
  _DAT_00e50fec = 0;
  _DAT_00e50ff0 = 0x14;
  _strncpy(&DAT_00e50ff4,"fac",3);
  _DAT_00e50fec = 3;
  DAT_00e50fe8[3] = 0;
  DAT_00e51008 = &DAT_00e51014;
  DAT_00e51014 = 0;
  _DAT_00e5100c = 0;
  _DAT_00e51010 = 0x14;
  _strncpy(&DAT_00e51014,"set",3);
  _DAT_00e5100c = 3;
  DAT_00e51008[3] = 0;
  DAT_00e51028 = &DAT_00e51034;
  DAT_00e51034 = 0;
  _DAT_00e5102c = 0;
  _DAT_00e51030 = 0x14;
  _strncpy(&DAT_00e51034,"mov",3);
  _DAT_00e5102c = 3;
  DAT_00e51028[3] = 0;
  DAT_00e51048 = &DAT_00e51054;
  DAT_00e51054 = 0;
  _DAT_00e5104c = 0;
  _DAT_00e51050 = 0x14;
  _strncpy(&DAT_00e51054,"INVALID",7);
  _DAT_00e5104c = 7;
  DAT_00e51048[7] = 0;
  DAT_00e51068 = &DAT_00e51074;
  DAT_00e51074 = 0;
  _DAT_00e5106c = 0;
  _DAT_00e51070 = 0x14;
  _strncpy(&DAT_00e51074,"INVALID",7);
  _DAT_00e5106c = 7;
  DAT_00e51068[7] = 0;
  _atexit(FUN_00d11430);
  return;
}


//// FUNCTION FUN_00d08b10 @ 00d08b10 ////

void FUN_00d08b10(void)

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
  puStack_8 = &LAB_00cafee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00567ff0(local_2c);
  local_4 = 0;
  puVar1 = FUN_00568870(local_4c,puVar1);
  FUN_004312e0(&DAT_0104c964,puVar1,"\\The Movies\\Logs\\");
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  _atexit(FUN_00d11ec0);
  ExceptionList = local_c;
  return;
}


//// FUNCTION JobNames_StaticInit @ 00d09220 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void JobNames_StaticInit(void)

{
  _strncpy(&DAT_00e54084,"unemployed",10);
  _DAT_00e5407c = 10;
  PTR_DAT_00e54078[10] = 0;
  DAT_00e54098 = &DAT_00e540a4;
  DAT_00e540a4 = 0;
  _DAT_00e5409c = 0;
  _DAT_00e540a0 = 0x14;
  _strncpy(&DAT_00e540a4,"staff",5);
  _DAT_00e5409c = 5;
  DAT_00e54098[5] = 0;
  DAT_00e540b8 = &DAT_00e540c4;
  DAT_00e540c4 = 0;
  _DAT_00e540bc = 0;
  _DAT_00e540c0 = 0x14;
  _strncpy(&DAT_00e540c4,"actor",5);
  _DAT_00e540bc = 5;
  DAT_00e540b8[5] = 0;
  DAT_00e540d8 = &DAT_00e540e4;
  DAT_00e540e4 = 0;
  _DAT_00e540dc = 0;
  _DAT_00e540e0 = 0x14;
  _strncpy(&DAT_00e540e4,"director",8);
  _DAT_00e540dc = 8;
  DAT_00e540d8[8] = 0;
  DAT_00e540f8 = &DAT_00e54104;
  DAT_00e54104 = 0;
  _DAT_00e540fc = 0;
  _DAT_00e54100 = 0x14;
  _strncpy(&DAT_00e54104,"extra",5);
  _DAT_00e540fc = 5;
  DAT_00e540f8[5] = 0;
  DAT_00e54118 = &DAT_00e54124;
  DAT_00e54124 = 0;
  _DAT_00e5411c = 0;
  _DAT_00e54120 = 0x14;
  _strncpy(&DAT_00e54124,"builder",7);
  _DAT_00e5411c = 7;
  DAT_00e54118[7] = 0;
  DAT_00e54138 = &DAT_00e54144;
  DAT_00e54144 = 0;
  _DAT_00e5413c = 0;
  _DAT_00e54140 = 0x14;
  _strncpy(&DAT_00e54144,"janitor",7);
  _DAT_00e5413c = 7;
  DAT_00e54138[7] = 0;
  DAT_00e54158 = &DAT_00e54164;
  DAT_00e54164 = 0;
  _DAT_00e5415c = 0;
  _DAT_00e54160 = 0x14;
  _strncpy(&DAT_00e54164,"cameraman",9);
  _DAT_00e5415c = 9;
  DAT_00e54158[9] = 0;
  DAT_00e54178 = &DAT_00e54184;
  DAT_00e54184 = 0;
  _DAT_00e5417c = 0;
  _DAT_00e54180 = 0x14;
  _strncpy(&DAT_00e54184,"soundman",8);
  _DAT_00e5417c = 8;
  DAT_00e54178[8] = 0;
  DAT_00e54198 = &DAT_00e541a4;
  DAT_00e541a4 = 0;
  _DAT_00e5419c = 0;
  _DAT_00e541a0 = 0x14;
  _strncpy(&DAT_00e541a4,"directorsassistant",0x12);
  _DAT_00e5419c = 0x12;
  DAT_00e54198[0x12] = 0;
  DAT_00e541b8 = &DAT_00e541c4;
  DAT_00e541c4 = 0;
  _DAT_00e541bc = 0;
  _DAT_00e541c0 = 0x14;
  _strncpy(&DAT_00e541c4,"dollyop",7);
  _DAT_00e541bc = 7;
  DAT_00e541b8[7] = 0;
  DAT_00e541d8 = &DAT_00e541e4;
  DAT_00e541e4 = 0;
  _DAT_00e541dc = 0;
  _DAT_00e541e0 = 0x14;
  _strncpy(&DAT_00e541e4,"setop",5);
  _DAT_00e541dc = 5;
  DAT_00e541d8[5] = 0;
  DAT_00e541f8 = &DAT_00e54204;
  DAT_00e54204 = 0;
  _DAT_00e541fc = 0;
  _DAT_00e54200 = 0x14;
  _strncpy(&DAT_00e54204,"clapperman",10);
  _DAT_00e541fc = 10;
  DAT_00e541f8[10] = 0;
  DAT_00e54218 = &DAT_00e54224;
  DAT_00e54224 = 0;
  _DAT_00e5421c = 0;
  _DAT_00e54220 = 0x14;
  _strncpy(&DAT_00e54224,"assistant",9);
  _DAT_00e5421c = 9;
  DAT_00e54218[9] = 0;
  DAT_00e54238 = &DAT_00e54244;
  DAT_00e54244 = 0;
  _DAT_00e5423c = 0;
  _DAT_00e54240 = 0x14;
  _strncpy(&DAT_00e54244,"writer",6);
  _DAT_00e5423c = 6;
  DAT_00e54238[6] = 0;
  DAT_00e54258 = &DAT_00e54264;
  DAT_00e54264 = 0;
  _DAT_00e5425c = 0;
  _DAT_00e54260 = 0x14;
  _strncpy(&DAT_00e54264,"scientist",9);
  _DAT_00e5425c = 9;
  DAT_00e54258[9] = 0;
  DAT_00e54278 = &DAT_00e54284;
  DAT_00e54284 = 0;
  _DAT_00e5427c = 0;
  _DAT_00e54280 = 0x14;
  _strncpy(&DAT_00e54284,"stuntman",8);
  _DAT_00e5427c = 8;
  DAT_00e54278[8] = 0;
  _atexit(FUN_00d12180);
  return;
}


//// FUNCTION FUN_00d09e70 @ 00d09e70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d09e70(void)

{
  PTR_DAT_00e55440 = _malloc(0x40);
  _strncpy(PTR_DAT_00e55440,"RELATIONSHIPNEW_STATE_SS_NEMESES",0x20);
  _DAT_00e55444 = 0x20;
  PTR_DAT_00e55440[0x20] = 0;
  DAT_00e55460 = &DAT_00e5546c;
  DAT_00e5546c = 0;
  _DAT_00e55464 = 0;
  _DAT_00e55468 = 0x40;
  DAT_00e55460 = _malloc(0x40);
  _strncpy(DAT_00e55460,"RELATIONSHIPNEW_STATE_SS_ENEMIES",0x20);
  _DAT_00e55464 = 0x20;
  DAT_00e55460[0x20] = '\0';
  DAT_00e55480 = &DAT_00e5548c;
  DAT_00e5548c = 0;
  _DAT_00e55484 = 0;
  _DAT_00e55488 = 0x40;
  DAT_00e55480 = _malloc(0x40);
  _strncpy(DAT_00e55480,"RELATIONSHIPNEW_STATE_SS_ACQUAINTANCES",0x26);
  _DAT_00e55484 = 0x26;
  DAT_00e55480[0x26] = '\0';
  DAT_00e554a0 = &DAT_00e554ac;
  DAT_00e554ac = 0;
  _DAT_00e554a4 = 0;
  _DAT_00e554a8 = 0x40;
  DAT_00e554a0 = _malloc(0x40);
  _strncpy(DAT_00e554a0,"RELATIONSHIPNEW_STATE_SS_FRIENDS",0x20);
  _DAT_00e554a4 = 0x20;
  DAT_00e554a0[0x20] = '\0';
  DAT_00e554c0 = &DAT_00e554cc;
  DAT_00e554cc = 0;
  _DAT_00e554c4 = 0;
  _DAT_00e554c8 = 0x40;
  DAT_00e554c0 = _malloc(0x40);
  _strncpy(DAT_00e554c0,"RELATIONSHIPNEW_STATE_SS_BEST_FRIENDS",0x25);
  _DAT_00e554c4 = 0x25;
  DAT_00e554c0[0x25] = '\0';
  DAT_00e554e0 = &DAT_00e554ec;
  DAT_00e554ec = 0;
  _DAT_00e554e4 = 0;
  _DAT_00e554e8 = 0x40;
  DAT_00e554e0 = _malloc(0x40);
  _strncpy(DAT_00e554e0,"RELATIONSHIPNEW_STATE_SS_SOUL_MATES",0x23);
  _DAT_00e554e4 = 0x23;
  DAT_00e554e0[0x23] = '\0';
  DAT_00e55500 = &DAT_00e5550c;
  DAT_00e5550c = 0;
  _DAT_00e55504 = 0;
  _DAT_00e55508 = 0x20;
  DAT_00e55500 = _malloc(0x20);
  _strncpy(DAT_00e55500,"RELATIONSHIPNEW_STATE_SS_LOVERS",0x1f);
  _DAT_00e55504 = 0x1f;
  DAT_00e55500[0x1f] = '\0';
  _atexit(FUN_00d12470);
  return;
}


//// FUNCTION RelationshipIcons_StaticInit @ 00d0a060 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RelationshipIcons_StaticInit(void)

{
  _strncpy(&DAT_00e5552c,"ui/relate_1.dds",0xf);
  _DAT_00e55524 = 0xf;
  PTR_DAT_00e55520[0xf] = 0;
  DAT_00e55540 = &DAT_00e5554c;
  DAT_00e5554c = 0;
  _DAT_00e55544 = 0;
  _DAT_00e55548 = 0x14;
  _strncpy(&DAT_00e5554c,"ui/relate_2.dds",0xf);
  _DAT_00e55544 = 0xf;
  DAT_00e55540[0xf] = 0;
  DAT_00e55560 = &DAT_00e5556c;
  DAT_00e5556c = 0;
  _DAT_00e55564 = 0;
  _DAT_00e55568 = 0x14;
  _strncpy(&DAT_00e5556c,"ui/relate_3.dds",0xf);
  _DAT_00e55564 = 0xf;
  DAT_00e55560[0xf] = 0;
  DAT_00e55580 = &DAT_00e5558c;
  DAT_00e5558c = 0;
  _DAT_00e55584 = 0;
  _DAT_00e55588 = 0x14;
  _strncpy(&DAT_00e5558c,"ui/relate_4.dds",0xf);
  _DAT_00e55584 = 0xf;
  DAT_00e55580[0xf] = 0;
  DAT_00e555a0 = &DAT_00e555ac;
  DAT_00e555ac = 0;
  _DAT_00e555a4 = 0;
  _DAT_00e555a8 = 0x14;
  _strncpy(&DAT_00e555ac,"ui/relate_5.dds",0xf);
  _DAT_00e555a4 = 0xf;
  DAT_00e555a0[0xf] = 0;
  DAT_00e555c0 = &DAT_00e555cc;
  DAT_00e555cc = 0;
  _DAT_00e555c4 = 0;
  _DAT_00e555c8 = 0x14;
  _strncpy(&DAT_00e555cc,"ui/relate_6.dds",0xf);
  _DAT_00e555c4 = 0xf;
  DAT_00e555c0[0xf] = 0;
  DAT_00e555e0 = &DAT_00e555ec;
  DAT_00e555ec = 0;
  _DAT_00e555e4 = 0;
  _DAT_00e555e8 = 0x14;
  _strncpy(&DAT_00e555ec,"ui/relate_7.dds",0xf);
  _DAT_00e555e4 = 0xf;
  DAT_00e555e0[0xf] = 0;
  _atexit(FUN_00d12490);
  return;
}


//// FUNCTION FUN_00d0b600 @ 00d0b600 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d0b600(void)

{
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  
  FUN_00568cb0(&PTR_lpCaption_00d16918_00e598ac,&local_20);
  DAT_0104e5f8 = &DAT_0104e604;
  _DAT_0104e604 = 0;
  DAT_0104e5fc = 0;
  DAT_0104e600 = 10;
  FUN_004036d0(&DAT_0104e5f8,local_20,local_1c);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  _atexit(FUN_00d12fd0);
  return;
}


//// FUNCTION FUN_00d0b670 @ 00d0b670 ////

void FUN_00d0b670(void)

{
  char *_Source;
  char *local_20;
  uint local_1c;
  uint local_18;
  
  FUN_0048f010(&PTR_lpClass_00d16914_00e598b0,&local_20);
  _Source = local_20;
  DAT_0104e618 = &DAT_0104e624;
  DAT_0104e624 = 0;
  DAT_0104e61c = 0;
  DAT_0104e620 = 0x14;
  if (0x13 < local_1c) {
    DAT_0104e620 = local_1c + 0x20 & 0xffffffe0;
    DAT_0104e618 = _malloc(DAT_0104e620);
  }
  _strncpy(DAT_0104e618,_Source,local_1c);
  DAT_0104e61c = local_1c;
  DAT_0104e618[local_1c] = '\0';
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  _atexit(FUN_00d12ff0);
  return;
}


//// FUNCTION FUN_00d0c510 @ 00d0c510 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d0c510(void)

{
  _strncpy(&DAT_00e5d2ec,"STARS_FIRSTPLACED",0x11);
  _DAT_00e5d2e4 = 0x11;
  PTR_DAT_00e5d2e0[0x11] = 0;
  DAT_00e5d300 = &DAT_00e5d30c;
  DAT_00e5d30c = 0;
  _DAT_00e5d304 = 0;
  _DAT_00e5d308 = 0x20;
  DAT_00e5d300 = _malloc(0x20);
  _strncpy(DAT_00e5d300,"STARS_HIGHESTCLIMBER",0x14);
  _DAT_00e5d304 = 0x14;
  DAT_00e5d300[0x14] = '\0';
  DAT_00e5d320 = &DAT_00e5d32c;
  DAT_00e5d32c = 0;
  _DAT_00e5d324 = 0;
  _DAT_00e5d328 = 0x14;
  _strncpy(&DAT_00e5d32c,"STARS_BESTNEWCOMER",0x12);
  _DAT_00e5d324 = 0x12;
  DAT_00e5d320[0x12] = 0;
  DAT_00e5d340 = &DAT_00e5d34c;
  DAT_00e5d34c = 0;
  _DAT_00e5d344 = 0;
  _DAT_00e5d348 = 0x14;
  _strncpy(&DAT_00e5d34c,"STARS_BESTDIRECTOR",0x12);
  _DAT_00e5d344 = 0x12;
  DAT_00e5d340[0x12] = 0;
  DAT_00e5d360 = &DAT_00e5d36c;
  DAT_00e5d36c = 0;
  _DAT_00e5d364 = 0;
  _DAT_00e5d368 = 0x14;
  _strncpy(&DAT_00e5d36c,"STARS_BESTACTOR",0xf);
  _DAT_00e5d364 = 0xf;
  DAT_00e5d360[0xf] = 0;
  DAT_00e5d380 = &DAT_00e5d38c;
  DAT_00e5d38c = 0;
  _DAT_00e5d384 = 0;
  _DAT_00e5d388 = 0x14;
  _strncpy(&DAT_00e5d38c,"STARS_MOSTPROLIFIC",0x12);
  _DAT_00e5d384 = 0x12;
  DAT_00e5d380[0x12] = 0;
  DAT_00e5d3a0 = &DAT_00e5d3ac;
  DAT_00e5d3ac = 0;
  _DAT_00e5d3a4 = 0;
  _DAT_00e5d3a8 = 0x14;
  _strncpy(&DAT_00e5d3ac,"STUDIOS_FIRSTPLACED",0x13);
  _DAT_00e5d3a4 = 0x13;
  DAT_00e5d3a0[0x13] = 0;
  DAT_00e5d3c0 = &DAT_00e5d3cc;
  DAT_00e5d3cc = 0;
  _DAT_00e5d3c4 = 0;
  _DAT_00e5d3c8 = 0x20;
  DAT_00e5d3c0 = _malloc(0x20);
  _strncpy(DAT_00e5d3c0,"STUDIOS_HIGHESTCLIMBER",0x16);
  _DAT_00e5d3c4 = 0x16;
  DAT_00e5d3c0[0x16] = '\0';
  DAT_00e5d3e0 = &DAT_00e5d3ec;
  DAT_00e5d3ec = 0;
  _DAT_00e5d3e4 = 0;
  _DAT_00e5d3e8 = 0x20;
  DAT_00e5d3e0 = _malloc(0x20);
  _strncpy(DAT_00e5d3e0,"STUDIOS_QUALITYOUTPUT",0x15);
  _DAT_00e5d3e4 = 0x15;
  DAT_00e5d3e0[0x15] = '\0';
  DAT_00e5d400 = &DAT_00e5d40c;
  DAT_00e5d40c = 0;
  _DAT_00e5d404 = 0;
  _DAT_00e5d408 = 0x20;
  DAT_00e5d400 = _malloc(0x20);
  _strncpy(DAT_00e5d400,"STUDIOS_MOSTPROLIFIC",0x14);
  _DAT_00e5d404 = 0x14;
  DAT_00e5d400[0x14] = '\0';
  DAT_00e5d420 = &DAT_00e5d42c;
  DAT_00e5d42c = 0;
  _DAT_00e5d424 = 0;
  _DAT_00e5d428 = 0x14;
  _strncpy(&DAT_00e5d42c,"STUDIOS_BESTLOT",0xf);
  _DAT_00e5d424 = 0xf;
  DAT_00e5d420[0xf] = 0;
  DAT_00e5d440 = &DAT_00e5d44c;
  DAT_00e5d44c = 0;
  _DAT_00e5d444 = 0;
  _DAT_00e5d448 = 0x20;
  DAT_00e5d440 = _malloc(0x20);
  _strncpy(DAT_00e5d440,"STUDIOS_BESTEMPLOYER",0x14);
  _DAT_00e5d444 = 0x14;
  DAT_00e5d440[0x14] = '\0';
  DAT_00e5d460 = &DAT_00e5d46c;
  DAT_00e5d46c = 0;
  _DAT_00e5d464 = 0;
  _DAT_00e5d468 = 0x14;
  _strncpy(&DAT_00e5d46c,"MOVIES_FIRSTPLACED",0x12);
  _DAT_00e5d464 = 0x12;
  DAT_00e5d460[0x12] = 0;
  DAT_00e5d480 = &DAT_00e5d48c;
  DAT_00e5d48c = 0;
  _DAT_00e5d484 = 0;
  _DAT_00e5d488 = 0x14;
  _strncpy(&DAT_00e5d48c,"MOVIES_BESTSCRIPT",0x11);
  _DAT_00e5d484 = 0x11;
  DAT_00e5d480[0x11] = 0;
  DAT_00e5d4a0 = &DAT_00e5d4ac;
  DAT_00e5d4ac = 0;
  _DAT_00e5d4a4 = 0;
  _DAT_00e5d4a8 = 0x20;
  DAT_00e5d4a0 = _malloc(0x20);
  _strncpy(DAT_00e5d4a0,"ACHIEVEMENT_CASHRICH1",0x15);
  _DAT_00e5d4a4 = 0x15;
  DAT_00e5d4a0[0x15] = '\0';
  DAT_00e5d4c0 = &DAT_00e5d4cc;
  DAT_00e5d4cc = 0;
  _DAT_00e5d4c4 = 0;
  _DAT_00e5d4c8 = 0x20;
  DAT_00e5d4c0 = _malloc(0x20);
  _strncpy(DAT_00e5d4c0,"ACHIEVEMENT_CASHRICH2",0x15);
  _DAT_00e5d4c4 = 0x15;
  DAT_00e5d4c0[0x15] = '\0';
  DAT_00e5d4e0 = &DAT_00e5d4ec;
  DAT_00e5d4ec = 0;
  _DAT_00e5d4e4 = 0;
  _DAT_00e5d4e8 = 0x20;
  DAT_00e5d4e0 = _malloc(0x20);
  _strncpy(DAT_00e5d4e0,"ACHIEVEMENT_CASHRICH3",0x15);
  _DAT_00e5d4e4 = 0x15;
  DAT_00e5d4e0[0x15] = '\0';
  DAT_00e5d500 = &DAT_00e5d50c;
  DAT_00e5d50c = 0;
  _DAT_00e5d504 = 0;
  _DAT_00e5d508 = 0x20;
  DAT_00e5d500 = _malloc(0x20);
  _strncpy(DAT_00e5d500,"ACHIEVEMENT_CASHRICH4",0x15);
  _DAT_00e5d504 = 0x15;
  DAT_00e5d500[0x15] = '\0';
  DAT_00e5d520 = &DAT_00e5d52c;
  DAT_00e5d52c = 0;
  _DAT_00e5d524 = 0;
  _DAT_00e5d528 = 0x20;
  DAT_00e5d520 = _malloc(0x20);
  _strncpy(DAT_00e5d520,"ACHIEVEMENT_MOVIEMILESTONE1",0x1b);
  _DAT_00e5d524 = 0x1b;
  DAT_00e5d520[0x1b] = '\0';
  DAT_00e5d540 = &DAT_00e5d54c;
  DAT_00e5d54c = 0;
  _DAT_00e5d544 = 0;
  _DAT_00e5d548 = 0x20;
  DAT_00e5d540 = _malloc(0x20);
  _strncpy(DAT_00e5d540,"ACHIEVEMENT_MOVIEMILESTONE2",0x1b);
  _DAT_00e5d544 = 0x1b;
  DAT_00e5d540[0x1b] = '\0';
  DAT_00e5d560 = &DAT_00e5d56c;
  DAT_00e5d56c = 0;
  _DAT_00e5d564 = 0;
  _DAT_00e5d568 = 0x20;
  DAT_00e5d560 = _malloc(0x20);
  _strncpy(DAT_00e5d560,"ACHIEVEMENT_MOVIEMILESTONE3",0x1b);
  _DAT_00e5d564 = 0x1b;
  DAT_00e5d560[0x1b] = '\0';
  DAT_00e5d580 = &DAT_00e5d58c;
  DAT_00e5d58c = 0;
  _DAT_00e5d584 = 0;
  _DAT_00e5d588 = 0x20;
  DAT_00e5d580 = _malloc(0x20);
  _strncpy(DAT_00e5d580,"ACHIEVEMENT_MOVIEMILESTONE4",0x1b);
  _DAT_00e5d584 = 0x1b;
  DAT_00e5d580[0x1b] = '\0';
  DAT_00e5d5a0 = &DAT_00e5d5ac;
  DAT_00e5d5ac = 0;
  _DAT_00e5d5a4 = 0;
  _DAT_00e5d5a8 = 0x20;
  DAT_00e5d5a0 = _malloc(0x20);
  _strncpy(DAT_00e5d5a0,"ACHIEVEMENT_STARMILESTONE1",0x1a);
  _DAT_00e5d5a4 = 0x1a;
  DAT_00e5d5a0[0x1a] = '\0';
  DAT_00e5d5c0 = &DAT_00e5d5cc;
  DAT_00e5d5cc = 0;
  _DAT_00e5d5c4 = 0;
  _DAT_00e5d5c8 = 0x20;
  DAT_00e5d5c0 = _malloc(0x20);
  _strncpy(DAT_00e5d5c0,"ACHIEVEMENT_STARMILESTONE2",0x1a);
  _DAT_00e5d5c4 = 0x1a;
  DAT_00e5d5c0[0x1a] = '\0';
  DAT_00e5d5e0 = &DAT_00e5d5ec;
  DAT_00e5d5ec = 0;
  _DAT_00e5d5e4 = 0;
  _DAT_00e5d5e8 = 0x20;
  DAT_00e5d5e0 = _malloc(0x20);
  _strncpy(DAT_00e5d5e0,"ACHIEVEMENT_STARMILESTONE3",0x1a);
  _DAT_00e5d5e4 = 0x1a;
  DAT_00e5d5e0[0x1a] = '\0';
  DAT_00e5d600 = &DAT_00e5d60c;
  DAT_00e5d60c = 0;
  _DAT_00e5d604 = 0;
  _DAT_00e5d608 = 0x20;
  DAT_00e5d600 = _malloc(0x20);
  _strncpy(DAT_00e5d600,"ACHIEVEMENT_STARMILESTONE4",0x1a);
  _DAT_00e5d604 = 0x1a;
  DAT_00e5d600[0x1a] = '\0';
  DAT_00e5d620 = &DAT_00e5d62c;
  DAT_00e5d62c = 0;
  _DAT_00e5d624 = 0;
  _DAT_00e5d628 = 0x20;
  DAT_00e5d620 = _malloc(0x20);
  _strncpy(DAT_00e5d620,"ACHIEVEMENT_STUDIOMILESTONE1",0x1c);
  _DAT_00e5d624 = 0x1c;
  DAT_00e5d620[0x1c] = '\0';
  DAT_00e5d640 = &DAT_00e5d64c;
  DAT_00e5d64c = 0;
  _DAT_00e5d644 = 0;
  _DAT_00e5d648 = 0x20;
  DAT_00e5d640 = _malloc(0x20);
  _strncpy(DAT_00e5d640,"ACHIEVEMENT_STUDIOMILESTONE2",0x1c);
  _DAT_00e5d644 = 0x1c;
  DAT_00e5d640[0x1c] = '\0';
  DAT_00e5d660 = &DAT_00e5d66c;
  DAT_00e5d66c = 0;
  _DAT_00e5d664 = 0;
  _DAT_00e5d668 = 0x20;
  DAT_00e5d660 = _malloc(0x20);
  _strncpy(DAT_00e5d660,"ACHIEVEMENT_STUDIOMILESTONE3",0x1c);
  _DAT_00e5d664 = 0x1c;
  DAT_00e5d660[0x1c] = '\0';
  DAT_00e5d680 = &DAT_00e5d68c;
  DAT_00e5d68c = 0;
  _DAT_00e5d684 = 0;
  _DAT_00e5d688 = 0x20;
  DAT_00e5d680 = _malloc(0x20);
  _strncpy(DAT_00e5d680,"ACHIEVEMENT_STUDIOMILESTONE4",0x1c);
  _DAT_00e5d684 = 0x1c;
  DAT_00e5d680[0x1c] = '\0';
  DAT_00e5d6a0 = &DAT_00e5d6ac;
  DAT_00e5d6ac = 0;
  _DAT_00e5d6a4 = 0;
  _DAT_00e5d6a8 = 0x20;
  DAT_00e5d6a0 = _malloc(0x20);
  _strncpy(DAT_00e5d6a0,"ACHIEVEMENT_HIGHLYPROLIFIC1",0x1b);
  _DAT_00e5d6a4 = 0x1b;
  DAT_00e5d6a0[0x1b] = '\0';
  DAT_00e5d6c0 = &DAT_00e5d6cc;
  DAT_00e5d6cc = 0;
  _DAT_00e5d6c4 = 0;
  _DAT_00e5d6c8 = 0x20;
  DAT_00e5d6c0 = _malloc(0x20);
  _strncpy(DAT_00e5d6c0,"ACHIEVEMENT_HIGHLYPROLIFIC2",0x1b);
  _DAT_00e5d6c4 = 0x1b;
  DAT_00e5d6c0[0x1b] = '\0';
  DAT_00e5d6e0 = &DAT_00e5d6ec;
  DAT_00e5d6ec = 0;
  _DAT_00e5d6e4 = 0;
  _DAT_00e5d6e8 = 0x20;
  DAT_00e5d6e0 = _malloc(0x20);
  _strncpy(DAT_00e5d6e0,"ACHIEVEMENT_HIGHLYPROLIFIC3",0x1b);
  _DAT_00e5d6e4 = 0x1b;
  DAT_00e5d6e0[0x1b] = '\0';
  DAT_00e5d700 = &DAT_00e5d70c;
  DAT_00e5d70c = 0;
  _DAT_00e5d704 = 0;
  _DAT_00e5d708 = 0x20;
  DAT_00e5d700 = _malloc(0x20);
  _strncpy(DAT_00e5d700,"ACHIEVEMENT_HIGHLYPROLIFIC4",0x1b);
  _DAT_00e5d704 = 0x1b;
  DAT_00e5d700[0x1b] = '\0';
  DAT_00e5d720 = &DAT_00e5d72c;
  DAT_00e5d72c = 0;
  _DAT_00e5d724 = 0;
  _DAT_00e5d728 = 0x20;
  DAT_00e5d720 = _malloc(0x20);
  _strncpy(DAT_00e5d720,"ACHIEVEMENT_MONEYMAKER1",0x17);
  _DAT_00e5d724 = 0x17;
  DAT_00e5d720[0x17] = '\0';
  DAT_00e5d740 = &DAT_00e5d74c;
  DAT_00e5d74c = 0;
  _DAT_00e5d744 = 0;
  _DAT_00e5d748 = 0x20;
  DAT_00e5d740 = _malloc(0x20);
  _strncpy(DAT_00e5d740,"ACHIEVEMENT_MONEYMAKER2",0x17);
  _DAT_00e5d744 = 0x17;
  DAT_00e5d740[0x17] = '\0';
  DAT_00e5d760 = &DAT_00e5d76c;
  DAT_00e5d76c = 0;
  _DAT_00e5d764 = 0;
  _DAT_00e5d768 = 0x20;
  DAT_00e5d760 = _malloc(0x20);
  _strncpy(DAT_00e5d760,"ACHIEVEMENT_MONEYMAKER3",0x17);
  _DAT_00e5d764 = 0x17;
  DAT_00e5d760[0x17] = '\0';
  DAT_00e5d780 = &DAT_00e5d78c;
  DAT_00e5d78c = 0;
  _DAT_00e5d784 = 0;
  _DAT_00e5d788 = 0x20;
  DAT_00e5d780 = _malloc(0x20);
  _strncpy(DAT_00e5d780,"ACHIEVEMENT_MONEYMAKER4",0x17);
  _DAT_00e5d784 = 0x17;
  DAT_00e5d780[0x17] = '\0';
  DAT_00e5d7a0 = &DAT_00e5d7ac;
  DAT_00e5d7ac = 0;
  _DAT_00e5d7a4 = 0;
  _DAT_00e5d7a8 = 0x20;
  DAT_00e5d7a0 = _malloc(0x20);
  _strncpy(DAT_00e5d7a0,"ACHIEVEMENT_BIGOUTPUT1",0x16);
  _DAT_00e5d7a4 = 0x16;
  DAT_00e5d7a0[0x16] = '\0';
  DAT_00e5d7c0 = &DAT_00e5d7cc;
  DAT_00e5d7cc = 0;
  _DAT_00e5d7c4 = 0;
  _DAT_00e5d7c8 = 0x20;
  DAT_00e5d7c0 = _malloc(0x20);
  _strncpy(DAT_00e5d7c0,"ACHIEVEMENT_BIGOUTPUT2",0x16);
  _DAT_00e5d7c4 = 0x16;
  DAT_00e5d7c0[0x16] = '\0';
  DAT_00e5d7e0 = &DAT_00e5d7ec;
  DAT_00e5d7ec = 0;
  _DAT_00e5d7e4 = 0;
  _DAT_00e5d7e8 = 0x20;
  DAT_00e5d7e0 = _malloc(0x20);
  _strncpy(DAT_00e5d7e0,"ACHIEVEMENT_BIGOUTPUT3",0x16);
  _DAT_00e5d7e4 = 0x16;
  DAT_00e5d7e0[0x16] = '\0';
  DAT_00e5d800 = &DAT_00e5d80c;
  DAT_00e5d80c = 0;
  _DAT_00e5d804 = 0;
  _DAT_00e5d808 = 0x20;
  DAT_00e5d800 = _malloc(0x20);
  _strncpy(DAT_00e5d800,"ACHIEVEMENT_BIGOUTPUT4",0x16);
  _DAT_00e5d804 = 0x16;
  DAT_00e5d800[0x16] = '\0';
  DAT_00e5d820 = &DAT_00e5d82c;
  DAT_00e5d82c = 0;
  _DAT_00e5d824 = 0;
  _DAT_00e5d828 = 0x20;
  DAT_00e5d820 = _malloc(0x20);
  _strncpy(DAT_00e5d820,"ACHIEVEMENT_CONSISTENTQUALITY1",0x1e);
  _DAT_00e5d824 = 0x1e;
  DAT_00e5d820[0x1e] = '\0';
  DAT_00e5d840 = &DAT_00e5d84c;
  DAT_00e5d84c = 0;
  _DAT_00e5d844 = 0;
  _DAT_00e5d848 = 0x20;
  DAT_00e5d840 = _malloc(0x20);
  _strncpy(DAT_00e5d840,"ACHIEVEMENT_CONSISTENTQUALITY2",0x1e);
  _DAT_00e5d844 = 0x1e;
  DAT_00e5d840[0x1e] = '\0';
  DAT_00e5d860 = &DAT_00e5d86c;
  DAT_00e5d86c = 0;
  _DAT_00e5d864 = 0;
  _DAT_00e5d868 = 0x20;
  DAT_00e5d860 = _malloc(0x20);
  _strncpy(DAT_00e5d860,"ACHIEVEMENT_CONSISTENTQUALITY3",0x1e);
  _DAT_00e5d864 = 0x1e;
  DAT_00e5d860[0x1e] = '\0';
  DAT_00e5d880 = &DAT_00e5d88c;
  DAT_00e5d88c = 0;
  _DAT_00e5d884 = 0;
  _DAT_00e5d888 = 0x14;
  _strncpy(&DAT_00e5d88c,"ACHIEVEMENT_AWARDS1",0x13);
  _DAT_00e5d884 = 0x13;
  DAT_00e5d880[0x13] = 0;
  DAT_00e5d8a0 = &DAT_00e5d8ac;
  DAT_00e5d8ac = 0;
  _DAT_00e5d8a4 = 0;
  _DAT_00e5d8a8 = 0x14;
  _strncpy(&DAT_00e5d8ac,"ACHIEVEMENT_AWARDS2",0x13);
  _DAT_00e5d8a4 = 0x13;
  DAT_00e5d8a0[0x13] = 0;
  DAT_00e5d8c0 = &DAT_00e5d8cc;
  DAT_00e5d8cc = 0;
  _DAT_00e5d8c4 = 0;
  _DAT_00e5d8c8 = 0x14;
  _strncpy(&DAT_00e5d8cc,"ACHIEVEMENT_AWARDS3",0x13);
  _DAT_00e5d8c4 = 0x13;
  DAT_00e5d8c0[0x13] = 0;
  DAT_00e5d8e0 = &DAT_00e5d8ec;
  DAT_00e5d8ec = 0;
  _DAT_00e5d8e4 = 0;
  _DAT_00e5d8e8 = 0x14;
  _strncpy(&DAT_00e5d8ec,"ACHIEVEMENT_AWARDS4",0x13);
  _DAT_00e5d8e4 = 0x13;
  DAT_00e5d8e0[0x13] = 0;
  DAT_00e5d900 = &DAT_00e5d90c;
  DAT_00e5d90c = 0;
  _DAT_00e5d904 = 0;
  _DAT_00e5d908 = 0x14;
  _strncpy(&DAT_00e5d90c,"STUNT_BESTPERFORMER",0x13);
  _DAT_00e5d904 = 0x13;
  DAT_00e5d900[0x13] = 0;
  DAT_00e5d920 = &DAT_00e5d92c;
  DAT_00e5d92c = 0;
  _DAT_00e5d924 = 0;
  _DAT_00e5d928 = 0x14;
  _strncpy(&DAT_00e5d92c,"STUNT_BESTMOVIE",0xf);
  _DAT_00e5d924 = 0xf;
  DAT_00e5d920[0xf] = 0;
  DAT_00e5d940 = &DAT_00e5d94c;
  DAT_00e5d94c = 0;
  _DAT_00e5d944 = 0;
  _DAT_00e5d948 = 0x14;
  _strncpy(&DAT_00e5d94c,"STUNT_DAREDEVIL",0xf);
  _DAT_00e5d944 = 0xf;
  DAT_00e5d940[0xf] = 0;
  DAT_00e5d960 = &DAT_00e5d96c;
  DAT_00e5d96c = 0;
  _DAT_00e5d964 = 0;
  _DAT_00e5d968 = 0x40;
  DAT_00e5d960 = _malloc(0x40);
  _strncpy(DAT_00e5d960,"STUNTACHIEVEMENT_MOVIEDIFFICULTY1",0x21);
  _DAT_00e5d964 = 0x21;
  DAT_00e5d960[0x21] = '\0';
  DAT_00e5d980 = &DAT_00e5d98c;
  DAT_00e5d98c = 0;
  _DAT_00e5d984 = 0;
  _DAT_00e5d988 = 0x40;
  DAT_00e5d980 = _malloc(0x40);
  _strncpy(DAT_00e5d980,"STUNTACHIEVEMENT_MOVIEDIFFICULTY2",0x21);
  _DAT_00e5d984 = 0x21;
  DAT_00e5d980[0x21] = '\0';
  DAT_00e5d9a0 = &DAT_00e5d9ac;
  DAT_00e5d9ac = 0;
  _DAT_00e5d9a4 = 0;
  _DAT_00e5d9a8 = 0x40;
  DAT_00e5d9a0 = _malloc(0x40);
  _strncpy(DAT_00e5d9a0,"STUNTACHIEVEMENT_MOVIEDIFFICULTY3",0x21);
  _DAT_00e5d9a4 = 0x21;
  DAT_00e5d9a0[0x21] = '\0';
  DAT_00e5d9c0 = &DAT_00e5d9cc;
  DAT_00e5d9cc = 0;
  _DAT_00e5d9c4 = 0;
  _DAT_00e5d9c8 = 0x40;
  DAT_00e5d9c0 = _malloc(0x40);
  _strncpy(DAT_00e5d9c0,"STUNTACHIEVEMENT_TOTALDIFFICULTY1",0x21);
  _DAT_00e5d9c4 = 0x21;
  DAT_00e5d9c0[0x21] = '\0';
  DAT_00e5d9e0 = &DAT_00e5d9ec;
  DAT_00e5d9ec = 0;
  _DAT_00e5d9e4 = 0;
  _DAT_00e5d9e8 = 0x40;
  DAT_00e5d9e0 = _malloc(0x40);
  _strncpy(DAT_00e5d9e0,"STUNTACHIEVEMENT_TOTALDIFFICULTY2",0x21);
  _DAT_00e5d9e4 = 0x21;
  DAT_00e5d9e0[0x21] = '\0';
  DAT_00e5da00 = &DAT_00e5da0c;
  DAT_00e5da0c = 0;
  _DAT_00e5da04 = 0;
  _DAT_00e5da08 = 0x40;
  DAT_00e5da00 = _malloc(0x40);
  _strncpy(DAT_00e5da00,"STUNTACHIEVEMENT_TOTALDIFFICULTY3",0x21);
  _DAT_00e5da04 = 0x21;
  DAT_00e5da00[0x21] = '\0';
  DAT_00e5da20 = &DAT_00e5da2c;
  DAT_00e5da2c = 0;
  _DAT_00e5da24 = 0;
  _DAT_00e5da28 = 0x40;
  DAT_00e5da20 = _malloc(0x40);
  _strncpy(DAT_00e5da20,"STUNTACHIEVEMENT_SCENEDIFFICULTY1",0x21);
  _DAT_00e5da24 = 0x21;
  DAT_00e5da20[0x21] = '\0';
  DAT_00e5da40 = &DAT_00e5da4c;
  DAT_00e5da4c = 0;
  _DAT_00e5da44 = 0;
  _DAT_00e5da48 = 0x40;
  DAT_00e5da40 = _malloc(0x40);
  _strncpy(DAT_00e5da40,"STUNTACHIEVEMENT_SCENEDIFFICULTY2",0x21);
  _DAT_00e5da44 = 0x21;
  DAT_00e5da40[0x21] = '\0';
  DAT_00e5da60 = &DAT_00e5da6c;
  DAT_00e5da6c = 0;
  _DAT_00e5da64 = 0;
  _DAT_00e5da68 = 0x40;
  DAT_00e5da60 = _malloc(0x40);
  _strncpy(DAT_00e5da60,"STUNTACHIEVEMENT_SCENEDIFFICULTY3",0x21);
  _DAT_00e5da64 = 0x21;
  DAT_00e5da60[0x21] = '\0';
  DAT_00e5da80 = &DAT_00e5da8c;
  DAT_00e5da8c = 0;
  _DAT_00e5da84 = 0;
  _DAT_00e5da88 = 0x20;
  DAT_00e5da80 = _malloc(0x20);
  _strncpy(DAT_00e5da80,"STUNTACHIEVEMENT_BESTPERFORMER1",0x1f);
  _DAT_00e5da84 = 0x1f;
  DAT_00e5da80[0x1f] = '\0';
  DAT_00e5daa0 = &DAT_00e5daac;
  DAT_00e5daac = 0;
  _DAT_00e5daa4 = 0;
  _DAT_00e5daa8 = 0x20;
  DAT_00e5daa0 = _malloc(0x20);
  _strncpy(DAT_00e5daa0,"STUNTACHIEVEMENT_BESTPERFORMER2",0x1f);
  _DAT_00e5daa4 = 0x1f;
  DAT_00e5daa0[0x1f] = '\0';
  DAT_00e5dac0 = &DAT_00e5dacc;
  DAT_00e5dacc = 0;
  _DAT_00e5dac4 = 0;
  _DAT_00e5dac8 = 0x20;
  DAT_00e5dac0 = _malloc(0x20);
  _strncpy(DAT_00e5dac0,"STUNTACHIEVEMENT_BESTPERFORMER3",0x1f);
  _DAT_00e5dac4 = 0x1f;
  DAT_00e5dac0[0x1f] = '\0';
  DAT_00e5dae0 = &DAT_00e5daec;
  DAT_00e5daec = 0;
  _DAT_00e5dae4 = 0;
  _DAT_00e5dae8 = 0x20;
  DAT_00e5dae0 = _malloc(0x20);
  _strncpy(DAT_00e5dae0,"STUNTACHIEVEMENT_BESTMOVIE1",0x1b);
  _DAT_00e5dae4 = 0x1b;
  DAT_00e5dae0[0x1b] = '\0';
  DAT_00e5db00 = &DAT_00e5db0c;
  DAT_00e5db0c = 0;
  _DAT_00e5db04 = 0;
  _DAT_00e5db08 = 0x20;
  DAT_00e5db00 = _malloc(0x20);
  _strncpy(DAT_00e5db00,"STUNTACHIEVEMENT_BESTMOVIE2",0x1b);
  _DAT_00e5db04 = 0x1b;
  DAT_00e5db00[0x1b] = '\0';
  DAT_00e5db20 = &DAT_00e5db2c;
  DAT_00e5db2c = 0;
  _DAT_00e5db24 = 0;
  _DAT_00e5db28 = 0x20;
  DAT_00e5db20 = _malloc(0x20);
  _strncpy(DAT_00e5db20,"STUNTACHIEVEMENT_BESTMOVIE3",0x1b);
  _DAT_00e5db24 = 0x1b;
  DAT_00e5db20[0x1b] = '\0';
  DAT_00e5db40 = &DAT_00e5db4c;
  DAT_00e5db4c = 0;
  _DAT_00e5db44 = 0;
  _DAT_00e5db48 = 0x20;
  DAT_00e5db40 = _malloc(0x20);
  _strncpy(DAT_00e5db40,"STUNTACHIEVEMENT_DAREDEVIL1",0x1b);
  _DAT_00e5db44 = 0x1b;
  DAT_00e5db40[0x1b] = '\0';
  DAT_00e5db60 = &DAT_00e5db6c;
  DAT_00e5db6c = 0;
  _DAT_00e5db64 = 0;
  _DAT_00e5db68 = 0x20;
  DAT_00e5db60 = _malloc(0x20);
  _strncpy(DAT_00e5db60,"STUNTACHIEVEMENT_DAREDEVIL2",0x1b);
  _DAT_00e5db64 = 0x1b;
  DAT_00e5db60[0x1b] = '\0';
  DAT_00e5db80 = &DAT_00e5db8c;
  DAT_00e5db8c = 0;
  _DAT_00e5db84 = 0;
  _DAT_00e5db88 = 0x20;
  DAT_00e5db80 = _malloc(0x20);
  _strncpy(DAT_00e5db80,"STUNTACHIEVEMENT_DAREDEVIL3",0x1b);
  _DAT_00e5db84 = 0x1b;
  DAT_00e5db80[0x1b] = '\0';
  _atexit(FUN_00d13630);
  return;
}


//// FUNCTION FUN_00d0f490 @ 00d0f490 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d0f490(void)

{
  _DAT_01050614 = _DAT_00e66090 * 0.0055555557 * 3.1415927;
  _DAT_01050618 = _DAT_00e66094 * 0.0055555557 * 3.1415927;
  _DAT_0105061c = _DAT_00e66098 * 0.0055555557 * 3.1415927;
  return;
}


//// FUNCTION FUN_00d0fa80 @ 00d0fa80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d0fa80(void)

{
  _DAT_01059564 = 0x3f800000;
  _DAT_01059568 = 0x3f800000;
  return;
}


//// FUNCTION FUN_00d0fc70 @ 00d0fc70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d0fc70(void)

{
  _strncpy(&DAT_00e68054,"EN-UK",5);
  DAT_00e6804c = 5;
  PTR_DAT_00e68048[5] = 0;
  DAT_00e68068 = &DAT_00e68074;
  DAT_00e68074 = 0;
  DAT_00e6806c = 0;
  _DAT_00e68070 = 0x14;
  _strncpy(&DAT_00e68074,"DUT-DUT",7);
  DAT_00e6806c = 7;
  DAT_00e68068[7] = 0;
  DAT_00e68088 = &DAT_00e68094;
  DAT_00e68094 = 0;
  _DAT_00e6808c = 0;
  _DAT_00e68090 = 0x14;
  _strncpy(&DAT_00e68094,"SE-SE",5);
  _DAT_00e6808c = 5;
  DAT_00e68088[5] = 0;
  DAT_00e680a8 = &DAT_00e680b4;
  DAT_00e680b4 = 0;
  _DAT_00e680ac = 0;
  _DAT_00e680b0 = 0x14;
  _strncpy(&DAT_00e680b4,"NO-NO",5);
  _DAT_00e680ac = 5;
  DAT_00e680a8[5] = 0;
  DAT_00e680c8 = &DAT_00e680d4;
  DAT_00e680d4 = 0;
  _DAT_00e680cc = 0;
  _DAT_00e680d0 = 0x14;
  _strncpy(&DAT_00e680d4,"DK-DK",5);
  _DAT_00e680cc = 5;
  DAT_00e680c8[5] = 0;
  DAT_00e680e8 = &DAT_00e680f4;
  DAT_00e680f4 = 0;
  _DAT_00e680ec = 0;
  _DAT_00e680f0 = 0x14;
  _strncpy(&DAT_00e680f4,"FI-FI",5);
  _DAT_00e680ec = 5;
  DAT_00e680e8[5] = 0;
  DAT_00e68108 = &DAT_00e68114;
  DAT_00e68114 = 0;
  _DAT_00e6810c = 0;
  _DAT_00e68110 = 0x14;
  _strncpy(&DAT_00e68114,"FR-FR",5);
  _DAT_00e6810c = 5;
  DAT_00e68108[5] = 0;
  DAT_00e68128 = &DAT_00e68134;
  DAT_00e68134 = 0;
  _DAT_00e6812c = 0;
  _DAT_00e68130 = 0x14;
  _strncpy(&DAT_00e68134,"IT-IT",5);
  _DAT_00e6812c = 5;
  DAT_00e68128[5] = 0;
  DAT_00e68148 = &DAT_00e68154;
  DAT_00e68154 = 0;
  _DAT_00e6814c = 0;
  _DAT_00e68150 = 0x14;
  _strncpy(&DAT_00e68154,"ES-ES",5);
  _DAT_00e6814c = 5;
  DAT_00e68148[5] = 0;
  DAT_00e68168 = &DAT_00e68174;
  DAT_00e68174 = 0;
  _DAT_00e6816c = 0;
  _DAT_00e68170 = 0x14;
  _strncpy(&DAT_00e68174,"DE-DE",5);
  _DAT_00e6816c = 5;
  DAT_00e68168[5] = 0;
  DAT_00e68188 = &DAT_00e68194;
  DAT_00e68194 = 0;
  _DAT_00e6818c = 0;
  _DAT_00e68190 = 0x14;
  _strncpy(&DAT_00e68194,"RU-RU",5);
  _DAT_00e6818c = 5;
  DAT_00e68188[5] = 0;
  DAT_00e681a8 = &DAT_00e681b4;
  DAT_00e681b4 = 0;
  _DAT_00e681ac = 0;
  _DAT_00e681b0 = 0x14;
  _strncpy(&DAT_00e681b4,"PL-PL",5);
  _DAT_00e681ac = 5;
  DAT_00e681a8[5] = 0;
  DAT_00e681c8 = &DAT_00e681d4;
  DAT_00e681d4 = 0;
  _DAT_00e681cc = 0;
  _DAT_00e681d0 = 0x14;
  _strncpy(&DAT_00e681d4,"CH-TRA",6);
  _DAT_00e681cc = 6;
  DAT_00e681c8[6] = 0;
  DAT_00e681e8 = &DAT_00e681f4;
  DAT_00e681f4 = 0;
  _DAT_00e681ec = 0;
  _DAT_00e681f0 = 0x14;
  _strncpy(&DAT_00e681f4,"CH-SI",5);
  _DAT_00e681ec = 5;
  DAT_00e681e8[5] = 0;
  DAT_00e68208 = &DAT_00e68214;
  DAT_00e68214 = 0;
  _DAT_00e6820c = 0;
  _DAT_00e68210 = 0x14;
  _strncpy(&DAT_00e68214,"JT-JT",5);
  _DAT_00e6820c = 5;
  DAT_00e68208[5] = 0;
  DAT_00e68228 = &DAT_00e68234;
  DAT_00e68234 = 0;
  _DAT_00e6822c = 0;
  _DAT_00e68230 = 0x14;
  _strncpy(&DAT_00e68234,"KR-KR",5);
  _DAT_00e6822c = 5;
  DAT_00e68228[5] = 0;
  DAT_00e68248 = &DAT_00e68254;
  DAT_00e68254 = 0;
  _DAT_00e6824c = 0;
  _DAT_00e68250 = 0x14;
  _strncpy(&DAT_00e68254,"",0);
  _DAT_00e6824c = 0;
  *DAT_00e68248 = 0;
  DAT_00e68268 = &DAT_00e68274;
  DAT_00e68274 = 0;
  _DAT_00e6826c = 0;
  _DAT_00e68270 = 0x14;
  _strncpy(&DAT_00e68274,"",0);
  _DAT_00e6826c = 0;
  *DAT_00e68268 = 0;
  _atexit(FUN_00d14830);
  return;
}


//// FUNCTION FUN_00d10b00 @ 00d10b00 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d10b00(void)

{
  if (DAT_00f87a68 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f87a68);
  }
  DAT_00f87a68 = (void *)0x0;
  DAT_00f87a6c = 0;
  _DAT_00f87a70 = 0;
  return;
}


//// FUNCTION FUN_00d10b40 @ 00d10b40 ////

void FUN_00d10b40(void)

{
  FUN_00412630(&DAT_00f87a78);
  return;
}


//// FUNCTION FUN_00d10b50 @ 00d10b50 ////

void FUN_00d10b50(void)

{
  FUN_0040b8f0((undefined4 *)&DAT_00f87ae0);
  return;
}


//// FUNCTION FUN_00d10b60 @ 00d10b60 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d10b60(void)

{
  if (DAT_00f87ac4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f87ac4);
  }
  DAT_00f87ac4 = (void *)0x0;
  DAT_00f87ac8 = 0;
  _DAT_00f87acc = 0;
  return;
}


//// FUNCTION FUN_00d10ba0 @ 00d10ba0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d10ba0(void)

{
  if (DAT_00f87ad4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f87ad4);
  }
  DAT_00f87ad4 = (void *)0x0;
  DAT_00f87ad8 = 0;
  _DAT_00f87adc = 0;
  return;
}


//// FUNCTION FUN_00d10be0 @ 00d10be0 ////

void FUN_00d10be0(void)

{
  if (10 < DAT_00f87b18) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f87b10);
  }
  return;
}


//// FUNCTION FUN_00d10c00 @ 00d10c00 ////

void FUN_00d10c00(void)

{
  if (0x14 < DAT_00e4e608) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e4e600);
  }
  return;
}


//// FUNCTION FUN_00d10c20 @ 00d10c20 ////

void FUN_00d10c20(void)

{
  FUN_0042d770(&DAT_00f87be8);
  return;
}


//// FUNCTION FUN_00d10c30 @ 00d10c30 ////

void FUN_00d10c30(void)

{
  FUN_0042dae0((undefined4 *)&DAT_00f87c00);
  return;
}


//// FUNCTION FUN_00d10c40 @ 00d10c40 ////

void FUN_00d10c40(void)

{
  FUN_0042f5e0(&DAT_00f87c34);
  return;
}


//// FUNCTION FUN_00d10c50 @ 00d10c50 ////

void FUN_00d10c50(void)

{
  FUN_004325b0(0xf87c58);
  return;
}


//// FUNCTION FUN_00d10c60 @ 00d10c60 ////

void FUN_00d10c60(void)

{
  FUN_004360c0(&DAT_00f87c68);
  return;
}


//// FUNCTION FUN_00d10c70 @ 00d10c70 ////

void FUN_00d10c70(void)

{
  _eh_vector_destructor_iterator_(&DAT_00f87c80,0x10,0x11,FUN_004063b0);
  return;
}


//// FUNCTION FUN_00d10c90 @ 00d10c90 ////

void FUN_00d10c90(void)

{
  if (10 < DAT_00f87d9c) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f87d94);
  }
  return;
}


//// FUNCTION FUN_00d10cb0 @ 00d10cb0 ////

void FUN_00d10cb0(void)

{
  if (10 < DAT_00f87dc0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f87db8);
  }
  return;
}


//// FUNCTION FUN_00d10cd0 @ 00d10cd0 ////

void FUN_00d10cd0(void)

{
  if (10 < DAT_00f87de4) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f87ddc);
  }
  return;
}


//// FUNCTION FUN_00d10cf0 @ 00d10cf0 ////

void FUN_00d10cf0(void)

{
  FUN_0043d5e0(&DAT_00f87e24);
  return;
}


//// FUNCTION FUN_00d10d00 @ 00d10d00 ////

void FUN_00d10d00(void)

{
  if (DAT_00f87e18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f87e18);
  }
  DAT_00f87e18 = (void *)0x0;
  DAT_00f87e1c = 0;
  DAT_00f87e20 = 0;
  return;
}


//// FUNCTION FUN_00d10d40 @ 00d10d40 ////

void FUN_00d10d40(void)

{
  FUN_0043da30(0xf87e04);
  return;
}


//// FUNCTION FUN_00d10d50 @ 00d10d50 ////

void FUN_00d10d50(void)

{
  FUN_0043ef00(&DAT_00f87e4c);
  return;
}


//// FUNCTION FUN_00d10d60 @ 00d10d60 ////

void FUN_00d10d60(void)

{
  if (10 < DAT_00e4fb70) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e4fb68);
  }
  return;
}


//// FUNCTION FUN_00d10d80 @ 00d10d80 ////

void FUN_00d10d80(void)

{
  FUN_00443160(&DAT_00f87ec4);
  return;
}


//// FUNCTION FUN_00d10d90 @ 00d10d90 ////

void FUN_00d10d90(void)

{
  FUN_004466f0(&DAT_00f87ee0);
  return;
}


//// FUNCTION FUN_00d10da0 @ 00d10da0 ////

void FUN_00d10da0(void)

{
  _eh_vector_destructor_iterator_(&DAT_00f87fc0,0x20,0x30,FUN_00401490);
  return;
}


//// FUNCTION FUN_00d10dc0 @ 00d10dc0 ////

void FUN_00d10dc0(void)

{
  FUN_00447f70(&DAT_00f885c8);
  return;
}


//// FUNCTION FUN_00d10dd0 @ 00d10dd0 ////

void FUN_00d10dd0(void)

{
  FUN_00417a10(&DAT_00f885e0);
  return;
}


//// FUNCTION FUN_00d10de0 @ 00d10de0 ////

void FUN_00d10de0(void)

{
  FUN_00417a10(&DAT_00f885f8);
  return;
}


//// FUNCTION FUN_00d10df0 @ 00d10df0 ////

void FUN_00d10df0(void)

{
  FUN_00447f20(&DAT_00f88610);
  return;
}


//// FUNCTION FUN_00d10e00 @ 00d10e00 ////

void FUN_00d10e00(void)

{
  FUN_00449a10((undefined4 *)&DAT_00f88628);
  return;
}


//// FUNCTION FUN_00d10e10 @ 00d10e10 ////

void FUN_00d10e10(void)

{
  FUN_0044a470(&DAT_00f88668);
  return;
}


//// FUNCTION FUN_00d10e20 @ 00d10e20 ////

void FUN_00d10e20(void)

{
  FUN_0044b340(&DAT_00f8865c);
  return;
}


//// FUNCTION FUN_00d10e30 @ 00d10e30 ////

void FUN_00d10e30(void)

{
  FUN_0044d010(&DAT_00f88684);
  return;
}


//// FUNCTION FUN_00d10e40 @ 00d10e40 ////

void FUN_00d10e40(void)

{
  FUN_0044e160(&DAT_00f88694);
  return;
}


//// FUNCTION FUN_00d10e50 @ 00d10e50 ////

void FUN_00d10e50(void)

{
  FUN_0044e160(&DAT_00f886ac);
  return;
}


//// FUNCTION FUN_00d10e60 @ 00d10e60 ////

void FUN_00d10e60(void)

{
  FUN_0044f900(&DAT_00f886c4);
  return;
}


//// FUNCTION FUN_00d10e70 @ 00d10e70 ////

void FUN_00d10e70(void)

{
  FUN_004507a0(&DAT_00f886e0);
  return;
}


//// FUNCTION FUN_00d10e80 @ 00d10e80 ////

void FUN_00d10e80(void)

{
  FUN_00455ac0(&DAT_00f8870c);
  return;
}


//// FUNCTION FUN_00d10e90 @ 00d10e90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d10e90(void)

{
  if (DAT_00f88eec != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f88eec);
  }
  DAT_00f88eec = (void *)0x0;
  DAT_00f88ef0 = 0;
  _DAT_00f88ef4 = 0;
  return;
}


//// FUNCTION FUN_00d10ed0 @ 00d10ed0 ////

void FUN_00d10ed0(void)

{
  if (10 < DAT_00f88f14) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f88f0c);
  }
  return;
}


//// FUNCTION FUN_00d10ef0 @ 00d10ef0 ////

void FUN_00d10ef0(void)

{
  FUN_0045ff60(&DAT_00f88f64);
  return;
}


//// FUNCTION FUN_00d10f00 @ 00d10f00 ////

void FUN_00d10f00(void)

{
  FUN_0045ff60(&DAT_00f88f7c);
  return;
}


//// FUNCTION FUN_00d10f10 @ 00d10f10 ////

void FUN_00d10f10(void)

{
  FUN_0045ff60(&DAT_00f88f94);
  return;
}


//// FUNCTION FUN_00d10f20 @ 00d10f20 ////

void FUN_00d10f20(void)

{
  FUN_004022e0(&DAT_00f89010);
  return;
}


//// FUNCTION FUN_00d10f30 @ 00d10f30 ////

void FUN_00d10f30(void)

{
  FUN_00462e40(&DAT_00f89028);
  return;
}


//// FUNCTION FUN_00d10f40 @ 00d10f40 ////

void FUN_00d10f40(void)

{
  FUN_00463f80((undefined4 *)&DAT_00f88fcc);
  return;
}


//// FUNCTION FUN_00d10f50 @ 00d10f50 ////

void FUN_00d10f50(void)

{
  if (DAT_00f89004 != (undefined4 *)0x0) {
    FUN_00405fe0(DAT_00f89004,DAT_00f89008);
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f89004);
  }
  DAT_00f89004 = (undefined4 *)0x0;
  DAT_00f89008 = (undefined4 *)0x0;
  DAT_00f8900c = 0;
  return;
}


//// FUNCTION FUN_00d10fa0 @ 00d10fa0 ////

void FUN_00d10fa0(void)

{
  FUN_00467ac0(&DAT_00f89064);
  return;
}


//// FUNCTION FUN_00d10fb0 @ 00d10fb0 ////

void FUN_00d10fb0(void)

{
  FUN_00467c00(&DAT_00f8907c);
  return;
}


//// FUNCTION FUN_00d10fc0 @ 00d10fc0 ////

void FUN_00d10fc0(void)

{
  FUN_00467b60(&DAT_00f89094);
  return;
}


//// FUNCTION FUN_00d10fd0 @ 00d10fd0 ////

void FUN_00d10fd0(void)

{
  FUN_00467a20(&DAT_00f890ac);
  return;
}


//// FUNCTION FUN_00d10fe0 @ 00d10fe0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d10fe0(void)

{
  if (DAT_00f89058 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f89058);
  }
  DAT_00f89058 = (void *)0x0;
  _DAT_00f8905c = 0;
  _DAT_00f89060 = 0;
  return;
}


//// FUNCTION FUN_00d11020 @ 00d11020 ////

void FUN_00d11020(void)

{
  FUN_0046aeb0(&DAT_00f890c4);
  return;
}


//// FUNCTION FUN_00d11030 @ 00d11030 ////

void FUN_00d11030(void)

{
  FUN_0046e1c0(0x1049140);
  return;
}


//// FUNCTION FUN_00d11040 @ 00d11040 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d11040(void)

{
  if (DAT_01049158 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_01049158);
  }
  DAT_01049158 = (void *)0x0;
  _DAT_0104915c = 0;
  _DAT_01049160 = 0;
  return;
}


//// FUNCTION FUN_00d11080 @ 00d11080 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d11080(void)

{
  if (DAT_01049168 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_01049168);
  }
  DAT_01049168 = (void *)0x0;
  _DAT_0104916c = 0;
  _DAT_01049170 = 0;
  return;
}


//// FUNCTION FUN_00d110c0 @ 00d110c0 ////

void FUN_00d110c0(void)

{
  FUN_00470240(&DAT_01049180);
  return;
}


//// FUNCTION FUN_00d110d0 @ 00d110d0 ////

void FUN_00d110d0(void)

{
  FUN_00471810(&DAT_01049198);
  return;
}


//// FUNCTION FUN_00d110e0 @ 00d110e0 ////

void FUN_00d110e0(void)

{
  if (0x14 < DAT_00e50864) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e5085c);
  }
  return;
}


//// FUNCTION FUN_00d11100 @ 00d11100 ////

void FUN_00d11100(void)

{
  if (0x14 < DAT_00e50884) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e5087c);
  }
  return;
}


//// FUNCTION FUN_00d11120 @ 00d11120 ////

void FUN_00d11120(void)

{
  if (0x14 < DAT_00e508a4) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e5089c);
  }
  return;
}


//// FUNCTION FUN_00d11140 @ 00d11140 ////

void FUN_00d11140(void)

{
  if (0x14 < DAT_00e508c4) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e508bc);
  }
  return;
}


//// FUNCTION FUN_00d11160 @ 00d11160 ////

void FUN_00d11160(void)

{
  if (0x14 < DAT_00e508e4) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e508dc);
  }
  return;
}


//// FUNCTION FUN_00d11180 @ 00d11180 ////

void FUN_00d11180(void)

{
  if (DAT_0104a57c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a57c);
  }
  DAT_0104a57c = (void *)0x0;
  DAT_0104a580 = 0;
  DAT_0104a584 = 0;
  return;
}


//// FUNCTION FUN_00d111c0 @ 00d111c0 ////

void FUN_00d111c0(void)

{
  _eh_vector_destructor_iterator_(&DAT_01049210,0x48,0x45,FUN_004809a0);
  return;
}


//// FUNCTION FUN_00d111e0 @ 00d111e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d111e0(void)

{
  if (DAT_010491f4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010491f4);
  }
  DAT_010491f4 = (void *)0x0;
  _DAT_010491f8 = 0;
  _DAT_010491fc = 0;
  return;
}


//// FUNCTION FUN_00d11220 @ 00d11220 ////

void FUN_00d11220(void)

{
  if (DAT_01049204 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_01049204);
  }
  DAT_01049204 = (void *)0x0;
  DAT_01049208 = 0;
  DAT_0104920c = 0;
  return;
}


//// FUNCTION FUN_00d11260 @ 00d11260 ////

void FUN_00d11260(void)

{
  FUN_00486a50(0x104a588);
  return;
}


//// FUNCTION FUN_00d11270 @ 00d11270 ////

void FUN_00d11270(void)

{
  thunk_FUN_00486c50(0x104a598);
  return;
}


//// FUNCTION FUN_00d11280 @ 00d11280 ////

void FUN_00d11280(void)

{
  FUN_00447f20((undefined4 *)&DAT_0104a5e0);
  return;
}


//// FUNCTION FUN_00d11290 @ 00d11290 ////

void FUN_00d11290(void)

{
  FUN_0048ba70(&DAT_0104a604);
  return;
}


//// FUNCTION FUN_00d112a0 @ 00d112a0 ////

void FUN_00d112a0(void)

{
  FUN_00457dd0((undefined4 *)&DAT_0104a5ac);
  return;
}


//// FUNCTION FUN_00d112b0 @ 00d112b0 ////

void FUN_00d112b0(void)

{
  FUN_00471810(&DAT_0104a5f8);
  return;
}


//// FUNCTION FUN_00d112c0 @ 00d112c0 ////

void FUN_00d112c0(void)

{
  FUN_004060b0((undefined4 *)&DAT_0104a61c);
  return;
}


//// FUNCTION FUN_00d112d0 @ 00d112d0 ////

void FUN_00d112d0(void)

{
  if (0x14 < DAT_00e50b5c) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e50b54);
  }
  return;
}


//// FUNCTION FUN_00d112f0 @ 00d112f0 ////

void FUN_00d112f0(void)

{
  if (0x14 < DAT_00e50b7c) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e50b74);
  }
  return;
}


//// FUNCTION FUN_00d11310 @ 00d11310 ////

void FUN_00d11310(void)

{
  if (0x14 < DAT_00e50b9c) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e50b94);
  }
  return;
}


//// FUNCTION FUN_00d11330 @ 00d11330 ////

void FUN_00d11330(void)

{
  FUN_00447f20(&DAT_0104a664);
  return;
}


//// FUNCTION FUN_00d11340 @ 00d11340 ////

void FUN_00d11340(void)

{
  FUN_00490060(&DAT_0104a658);
  return;
}


//// FUNCTION FUN_00d11350 @ 00d11350 ////

void FUN_00d11350(void)

{
  if (DAT_0104a680 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a680);
  }
  DAT_0104a680 = (void *)0x0;
  DAT_0104a684 = 0;
  DAT_0104a688 = 0;
  return;
}


//// FUNCTION FUN_00d11390 @ 00d11390 ////

void FUN_00d11390(void)

{
  if (0x14 < DAT_0104a694) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a68c);
  }
  return;
}


//// FUNCTION FUN_00d113b0 @ 00d113b0 ////

void FUN_00d113b0(void)

{
  if (0x14 < DAT_0104a6b8) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a6b0);
  }
  return;
}


//// FUNCTION FUN_00d113d0 @ 00d113d0 ////

void FUN_00d113d0(void)

{
  FUN_004984a0(0x104a6e4);
  return;
}


//// FUNCTION FUN_00d113e0 @ 00d113e0 ////

void FUN_00d113e0(void)

{
  FUN_004984a0(0x104a6f4);
  return;
}


//// FUNCTION FUN_00d113f0 @ 00d113f0 ////

void FUN_00d113f0(void)

{
  FUN_00499500(&DAT_0104a6d8);
  return;
}


//// FUNCTION FUN_00d11400 @ 00d11400 ////

void FUN_00d11400(void)

{
  FUN_0049ad50(&DAT_0104a704);
  return;
}


//// FUNCTION FUN_00d11410 @ 00d11410 ////

void FUN_00d11410(void)

{
  _eh_vector_destructor_iterator_(&PTR_DAT_00e50f08,0x20,6,FUN_00401490);
  return;
}


//// FUNCTION FUN_00d11430 @ 00d11430 ////

void FUN_00d11430(void)

{
  _eh_vector_destructor_iterator_(&PTR_DAT_00e50fc8,0x20,6,FUN_00401490);
  return;
}


//// FUNCTION FUN_00d11450 @ 00d11450 ////

void FUN_00d11450(void)

{
  if (0x14 < DAT_00e51090) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51088);
  }
  return;
}


//// FUNCTION FUN_00d11470 @ 00d11470 ////

void FUN_00d11470(void)

{
  if (DAT_0104a724 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a724);
  }
  DAT_0104a724 = (void *)0x0;
  DAT_0104a728 = 0;
  DAT_0104a72c = 0;
  return;
}


//// FUNCTION FUN_00d114b0 @ 00d114b0 ////

void FUN_00d114b0(void)

{
  if (0x14 < DAT_0104a774) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a76c);
  }
  return;
}


//// FUNCTION FUN_00d114d0 @ 00d114d0 ////

void FUN_00d114d0(void)

{
  if (0x14 < DAT_0104a794) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a78c);
  }
  return;
}


//// FUNCTION FUN_00d114f0 @ 00d114f0 ////

void FUN_00d114f0(void)

{
  if (0x14 < DAT_0104a7b4) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a7ac);
  }
  return;
}


//// FUNCTION FUN_00d11510 @ 00d11510 ////

void FUN_00d11510(void)

{
  if (0x14 < DAT_0104a7d4) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a7cc);
  }
  return;
}


//// FUNCTION FUN_00d11530 @ 00d11530 ////

void FUN_00d11530(void)

{
  if (0x14 < DAT_0104a7f4) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a7ec);
  }
  return;
}


//// FUNCTION FUN_00d11550 @ 00d11550 ////

void FUN_00d11550(void)

{
  if (0x14 < DAT_0104a814) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a80c);
  }
  return;
}


//// FUNCTION FUN_00d11570 @ 00d11570 ////

void FUN_00d11570(void)

{
  if (0x14 < DAT_0104a834) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a82c);
  }
  return;
}


//// FUNCTION FUN_00d11590 @ 00d11590 ////

void FUN_00d11590(void)

{
  if (0x14 < DAT_0104a854) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a84c);
  }
  return;
}


//// FUNCTION FUN_00d115b0 @ 00d115b0 ////

void FUN_00d115b0(void)

{
  if (0x14 < DAT_0104a874) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a86c);
  }
  return;
}


//// FUNCTION FUN_00d115d0 @ 00d115d0 ////

void FUN_00d115d0(void)

{
  FUN_0049fd10((undefined4 *)&DAT_0104a738);
  return;
}


//// FUNCTION FUN_00d115e0 @ 00d115e0 ////

void FUN_00d115e0(void)

{
  FUN_004a71c0(&DAT_0104a898);
  return;
}


//// FUNCTION FUN_00d115f0 @ 00d115f0 ////

void FUN_00d115f0(void)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*DAT_0104a8f0;
  *DAT_0104a8f0 = DAT_0104a8f0;
  DAT_0104a8f0[1] = DAT_0104a8f0;
  DAT_0104a8f4 = 0;
  if (_Memory != DAT_0104a8f0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_0104a8f0);
}


//// FUNCTION FUN_00d11650 @ 00d11650 ////

void FUN_00d11650(void)

{
  FUN_004ac590(0x104a908);
  return;
}


//// FUNCTION FUN_00d11660 @ 00d11660 ////

void FUN_00d11660(void)

{
  FUN_004acc80(0x104a8f8);
                    /* WARNING: Subroutine does not return */
  _free(DAT_0104a8fc);
}


//// FUNCTION FUN_00d11690 @ 00d11690 ////

void FUN_00d11690(void)

{
  FUN_004af6d0(&DAT_0104a960);
  return;
}


//// FUNCTION FUN_00d116a0 @ 00d116a0 ////

void FUN_00d116a0(void)

{
  if (10 < DAT_00e51460) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51458);
  }
  return;
}


//// FUNCTION FUN_00d116c0 @ 00d116c0 ////

void FUN_00d116c0(void)

{
  if (0x14 < DAT_00e51480) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51478);
  }
  return;
}


//// FUNCTION FUN_00d116e0 @ 00d116e0 ////

void FUN_00d116e0(void)

{
  if (0x14 < DAT_00e514a0) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51498);
  }
  return;
}


//// FUNCTION FUN_00d11700 @ 00d11700 ////

void FUN_00d11700(void)

{
  _eh_vector_destructor_iterator_(&PTR_DAT_00e514b8,0x20,2,FUN_00401490);
  return;
}


//// FUNCTION FUN_00d11720 @ 00d11720 ////

void FUN_00d11720(void)

{
  if (10 < DAT_0104a9c8) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a9c0);
  }
  return;
}


//// FUNCTION FUN_00d11740 @ 00d11740 ////

void FUN_00d11740(void)

{
  if (10 < DAT_0104a9a8) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a9a0);
  }
  return;
}


//// FUNCTION FUN_00d11760 @ 00d11760 ////

void FUN_00d11760(void)

{
  if (10 < DAT_00e51500) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e514f8);
  }
  return;
}


//// FUNCTION FUN_00d11780 @ 00d11780 ////

void FUN_00d11780(void)

{
  if (10 < DAT_0104a9e8) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a9e0);
  }
  return;
}


//// FUNCTION FUN_00d117a0 @ 00d117a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d117a0(void)

{
  if (DAT_0104a988 != (undefined4 *)0x0) {
    FUN_00481090(DAT_0104a988,DAT_0104a98c);
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a988);
  }
  DAT_0104a988 = (undefined4 *)0x0;
  DAT_0104a98c = (undefined4 *)0x0;
  _DAT_0104a990 = 0;
  return;
}


//// FUNCTION FUN_00d117f0 @ 00d117f0 ////

void FUN_00d117f0(void)

{
  FUN_004b2e40(&DAT_0104aa08);
  return;
}


//// FUNCTION FUN_00d11800 @ 00d11800 ////

void FUN_00d11800(void)

{
  _eh_vector_destructor_iterator_(&DAT_0104aa68,0x20,0xc,FUN_00401490);
  return;
}


//// FUNCTION FUN_00d11820 @ 00d11820 ////

void FUN_00d11820(void)

{
  FUN_004b7ed0(0x104aa24);
  return;
}


//// FUNCTION FUN_00d11830 @ 00d11830 ////

void FUN_00d11830(void)

{
  FUN_004b82c0((undefined4 *)&DAT_0104aa34);
  return;
}


//// FUNCTION FUN_00d11840 @ 00d11840 ////

void FUN_00d11840(void)

{
  FUN_004ba400(&DAT_0104aa18);
  return;
}


//// FUNCTION FUN_00d11850 @ 00d11850 ////

void FUN_00d11850(void)

{
  FUN_004bfb00((undefined4 *)&DAT_0104ac48);
  return;
}


//// FUNCTION FUN_00d11860 @ 00d11860 ////

void FUN_00d11860(void)

{
  FUN_004bfb00((undefined4 *)&DAT_0104ac7c);
  return;
}


//// FUNCTION FUN_00d11870 @ 00d11870 ////

void FUN_00d11870(void)

{
  FUN_00447f20((undefined4 *)&DAT_0104ace8);
  return;
}


//// FUNCTION FUN_00d11880 @ 00d11880 ////

void FUN_00d11880(void)

{
  FUN_004576e0((undefined4 *)&DAT_0104acb4);
  return;
}


//// FUNCTION FUN_00d11890 @ 00d11890 ////

void FUN_00d11890(void)

{
  FUN_004576e0((undefined4 *)&DAT_0104ad0c);
  return;
}


//// FUNCTION FUN_00d118a0 @ 00d118a0 ////

void FUN_00d118a0(void)

{
  FUN_004576e0((undefined4 *)&DAT_0104ad40);
  return;
}


//// FUNCTION FUN_00d118b0 @ 00d118b0 ////

void FUN_00d118b0(void)

{
  FUN_004d15e0(&DAT_0104ad00);
  return;
}


//// FUNCTION FUN_00d118c0 @ 00d118c0 ////

void FUN_00d118c0(void)

{
  FUN_004d1610(&DAT_0104ad74);
  return;
}


//// FUNCTION FUN_00d118d0 @ 00d118d0 ////

void FUN_00d118d0(void)

{
  FUN_004d1610(&DAT_0104ad80);
  return;
}


//// FUNCTION FUN_00d118e0 @ 00d118e0 ////

void FUN_00d118e0(void)

{
  FUN_004ebfb0(0x104addc);
  return;
}


//// FUNCTION FUN_00d118f0 @ 00d118f0 ////

void FUN_00d118f0(void)

{
  FUN_009d3750((undefined4 *)&DAT_0104b0e8);
  return;
}


//// FUNCTION FUN_00d11900 @ 00d11900 ////

void FUN_00d11900(void)

{
  FUN_004f44e0(&DAT_0104b0d0);
  return;
}


//// FUNCTION FUN_00d11910 @ 00d11910 ////

void FUN_00d11910(void)

{
  FUN_004fbd80((undefined4 *)&DAT_0104b120);
  return;
}


//// FUNCTION FUN_00d11920 @ 00d11920 ////

void FUN_00d11920(void)

{
  FUN_004fca60(0x104b110);
  return;
}


//// FUNCTION FUN_00d11930 @ 00d11930 ////

void FUN_00d11930(void)

{
  if (0x14 < DAT_00e51d98) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51d90);
  }
  return;
}


//// FUNCTION FUN_00d11950 @ 00d11950 ////

void FUN_00d11950(void)

{
  if (0x14 < DAT_00e51db8) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51db0);
  }
  return;
}


//// FUNCTION FUN_00d11970 @ 00d11970 ////

void FUN_00d11970(void)

{
  if (0x14 < DAT_00e51dd8) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51dd0);
  }
  return;
}


//// FUNCTION FUN_00d11990 @ 00d11990 ////

void FUN_00d11990(void)

{
  if (0x14 < DAT_00e51df8) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51df0);
  }
  return;
}


//// FUNCTION FUN_00d119b0 @ 00d119b0 ////

void FUN_00d119b0(void)

{
  if (0x14 < DAT_00e51e18) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51e10);
  }
  return;
}


//// FUNCTION FUN_00d119d0 @ 00d119d0 ////

void FUN_00d119d0(void)

{
  if (0x14 < DAT_00e51e38) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51e30);
  }
  return;
}


//// FUNCTION FUN_00d119f0 @ 00d119f0 ////

void FUN_00d119f0(void)

{
  if (0x14 < DAT_00e51e58) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51e50);
  }
  return;
}


//// FUNCTION FUN_00d11a10 @ 00d11a10 ////

void FUN_00d11a10(void)

{
  if (0x14 < DAT_00e51e78) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51e70);
  }
  return;
}


//// FUNCTION FUN_00d11a30 @ 00d11a30 ////

void FUN_00d11a30(void)

{
  if (0x14 < DAT_00e51e98) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51e90);
  }
  return;
}


//// FUNCTION FUN_00d11a50 @ 00d11a50 ////

void FUN_00d11a50(void)

{
  if (0x14 < DAT_00e51eb8) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e51eb0);
  }
  return;
}


//// FUNCTION FUN_00d11a70 @ 00d11a70 ////

void FUN_00d11a70(void)

{
  _eh_vector_destructor_iterator_(&DAT_0104b1c0,0x48,0x25,FUN_004809a0);
  return;
}


//// FUNCTION FUN_00d11a90 @ 00d11a90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d11a90(void)

{
  if (DAT_0104b1a0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104b1a0);
  }
  DAT_0104b1a0 = (void *)0x0;
  _DAT_0104b1a4 = 0;
  _DAT_0104b1a8 = 0;
  return;
}


//// FUNCTION FUN_00d11ad0 @ 00d11ad0 ////

void FUN_00d11ad0(void)

{
  if (DAT_0104b1b0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104b1b0);
  }
  DAT_0104b1b0 = (void *)0x0;
  DAT_0104b1b4 = 0;
  DAT_0104b1b8 = 0;
  return;
}


//// FUNCTION FUN_00d11b10 @ 00d11b10 ////

void FUN_00d11b10(void)

{
  FUN_00506b10(&DAT_0104bc2c);
  return;
}


//// FUNCTION FUN_00d11b20 @ 00d11b20 ////

void FUN_00d11b20(void)

{
  FUN_00507df0(&DAT_0104bc4c);
  return;
}


//// FUNCTION FUN_00d11b30 @ 00d11b30 ////

void FUN_00d11b30(void)

{
  FUN_00508760((undefined4 *)&DAT_0104bc64);
  return;
}


//// FUNCTION FUN_00d11b40 @ 00d11b40 ////

void FUN_00d11b40(void)

{
  FUN_005098e0((undefined4 *)&DAT_0104bc98);
  return;
}


//// FUNCTION FUN_00d11b50 @ 00d11b50 ////

void FUN_00d11b50(void)

{
  FUN_004be9d0(&DAT_0104bcd0);
  return;
}


//// FUNCTION FUN_00d11b60 @ 00d11b60 ////

void FUN_00d11b60(void)

{
  if (DAT_0104bd34 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104bd34);
  }
  DAT_0104bd34 = (void *)0x0;
  DAT_0104bd38 = 0;
  DAT_0104bd3c = 0;
  return;
}


//// FUNCTION FUN_00d11ba0 @ 00d11ba0 ////

void FUN_00d11ba0(void)

{
  FUN_0050dd00((undefined4 *)&DAT_0104bce8);
  return;
}


//// FUNCTION FUN_00d11bb0 @ 00d11bb0 ////

void FUN_00d11bb0(void)

{
  if (0x14 < DAT_00e52368) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e52360);
  }
  return;
}


//// FUNCTION FUN_00d11bd0 @ 00d11bd0 ////

void FUN_00d11bd0(void)

{
  if (0x14 < DAT_00e52388) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e52380);
  }
  return;
}


//// FUNCTION FUN_00d11bf0 @ 00d11bf0 ////

void FUN_00d11bf0(void)

{
  if (0x14 < DAT_00e523a8) {
                    /* WARNING: Subroutine does not return */
    _free(PTR_DAT_00e523a0);
  }
  return;
}


//// FUNCTION FUN_00d11c10 @ 00d11c10 ////

void FUN_00d11c10(void)

{
  _eh_vector_destructor_iterator_(&DAT_0104bdd0,0x48,0x16,FUN_004809a0);
  return;
}


//// FUNCTION FUN_00d11c30 @ 00d11c30 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d11c30(void)

{
  if (DAT_0104bdb0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104bdb0);
  }
  DAT_0104bdb0 = (void *)0x0;
  DAT_0104bdb4 = 0;
  _DAT_0104bdb8 = 0;
  return;
}


//// FUNCTION FUN_00d11c70 @ 00d11c70 ////

void FUN_00d11c70(void)

{
  if (DAT_0104bdc0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104bdc0);
  }
  DAT_0104bdc0 = (void *)0x0;
  DAT_0104bdc4 = 0;
  DAT_0104bdc8 = 0;
  return;
}


//// FUNCTION FUN_00d11cb0 @ 00d11cb0 ////

void FUN_00d11cb0(void)

{
  FUN_00525190(&DAT_0104c420);
  return;
}


//// FUNCTION FUN_00d11cc0 @ 00d11cc0 ////

void FUN_00d11cc0(void)

{
  FUN_00525ef0((undefined4 *)&DAT_0104c450);
  return;
}


//// FUNCTION FUN_00d11cd0 @ 00d11cd0 ////

void FUN_00d11cd0(void)

{
  FUN_00527810((undefined4 *)&DAT_0104c484);
  return;
}


//// FUNCTION FUN_00d11ce0 @ 00d11ce0 ////

void FUN_00d11ce0(void)

{
  FUN_0040b8f0(&DAT_0104c504);
  return;
}


//// FUNCTION FUN_00d11cf0 @ 00d11cf0 ////

void FUN_00d11cf0(void)

{
  FUN_0040b8f0((undefined4 *)&DAT_0104c51c);
  return;
}


//// FUNCTION FUN_00d11d00 @ 00d11d00 ////

void FUN_00d11d00(void)

{
  FUN_004687d0((undefined4 *)&DAT_0104c4d0);
  return;
}


//// FUNCTION FUN_00d11d10 @ 00d11d10 ////

void FUN_00d11d10(void)

{
  FUN_00536a80((undefined4 *)&DAT_0104c558);
  return;
}


//// FUNCTION FUN_00d11d20 @ 00d11d20 ////

void FUN_00d11d20(void)

{
  FUN_00539d00((undefined4 *)&DAT_0104c5b0);
  return;
}


//// FUNCTION FUN_00d11d30 @ 00d11d30 ////

void FUN_00d11d30(void)

{
  FUN_0053c640((undefined4 *)&DAT_0104c5e4);
  return;
}


//// FUNCTION FUN_00d11d40 @ 00d11d40 ////

void FUN_00d11d40(void)

{
  FUN_0053d280(&DAT_0104c69c);
  return;
}


//// FUNCTION FUN_00d11d50 @ 00d11d50 ////

void FUN_00d11d50(void)

{
  FUN_0053d280(&DAT_0104c6b4);
  return;
}


//// FUNCTION FUN_00d11d60 @ 00d11d60 ////

void FUN_00d11d60(void)

{
  FUN_0053d280(&DAT_0104c6cc);
  return;
}


//// FUNCTION FUN_00d11d70 @ 00d11d70 ////

void FUN_00d11d70(void)

{
  FUN_0053d2d0((undefined4 *)&DAT_0104c634);
  return;
}


//// FUNCTION FUN_00d11d80 @ 00d11d80 ////

void FUN_00d11d80(void)

{
  FUN_0053d2d0((undefined4 *)&DAT_0104c668);
  return;
}


//// FUNCTION FUN_00d11d90 @ 00d11d90 ////

void FUN_00d11d90(void)

{
  FUN_0053d5c0((undefined4 *)&DAT_0104c6e4);
  return;
}


//// FUNCTION FUN_00d11da0 @ 00d11da0 ////

void FUN_00d11da0(void)

{
  FUN_0053de50((undefined4 *)&DAT_0104c71c);
  return;
}


//// FUNCTION FUN_00d11db0 @ 00d11db0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d11db0(void)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*DAT_0104c7dc;
  *DAT_0104c7dc = DAT_0104c7dc;
  DAT_0104c7dc[1] = DAT_0104c7dc;
  _DAT_0104c7e0 = 0;
  if (_Memory != DAT_0104c7dc) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_0104c7dc);
}


