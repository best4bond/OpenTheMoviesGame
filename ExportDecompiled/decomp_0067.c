//// FUNCTION FUN_00c42350 @ 00c42350 ////

void __cdecl FUN_00c42350(int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  ushort uVar2;
  
  if (3 < *(uint *)(DAT_010d5dc4 + 0x1bc)) {
    if (*(char *)(param_2 + 0x2a1) == '\0') {
      uVar2 = *(ushort *)(param_2 + 0x2a2);
      piVar1 = param_3;
      param_3 = param_4;
    }
    else {
      uVar2 = *(ushort *)(param_2 + 0x2a2);
      piVar1 = param_4;
    }
    FUN_00c72990(param_1 + *(int *)(param_2 + 0x298) * -2,*(undefined1 (**) [16])(param_2 + 0x290),
                 *(undefined4 *)(param_2 + 0x29c),0x10,piVar1,param_3,uVar2,0,0x100);
    return;
  }
  FUN_00c6edd0(param_1 + *(int *)(param_2 + 0x298) * -2,*(undefined1 (**) [16])(param_2 + 0x290),
               *(undefined4 *)(param_2 + 0x29c),0x10,param_3,0,0x100);
  return;
}


//// FUNCTION FUN_00c423f0 @ 00c423f0 ////

void __cdecl FUN_00c423f0(int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  ushort uVar2;
  
  if (3 < *(uint *)(DAT_010d5dc4 + 0x1bc)) {
    if (*(char *)(param_2 + 0x2a1) == '\0') {
      uVar2 = *(ushort *)(param_2 + 0x2a2);
      piVar1 = param_3;
      param_3 = param_4;
    }
    else {
      uVar2 = *(ushort *)(param_2 + 0x2a2);
      piVar1 = param_4;
    }
    FUN_00c72990(param_1 + *(int *)(param_2 + 0x298) * -2,*(undefined1 (**) [16])(param_2 + 0x290),
                 *(undefined4 *)(param_2 + 0x29c),0x10,piVar1,param_3,uVar2,0x7fff,-0x100);
    return;
  }
  FUN_00c6edd0(param_1 + *(int *)(param_2 + 0x298) * -2,*(undefined1 (**) [16])(param_2 + 0x290),
               *(undefined4 *)(param_2 + 0x29c),0x10,param_3,0x7fff,-0x100);
  return;
}


//// FUNCTION FUN_00c424a0 @ 00c424a0 ////

void __cdecl FUN_00c424a0(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  if (*(char *)(param_3 + 0x2a0) == '\0') {
    if (*(uint *)(DAT_010d5dc4 + 0x1bc) < 4) {
      PolyphaseFIR_Resample8Phase
                (param_1 + *(int *)(param_3 + 0x298) * -2,*(undefined1 (**) [16])(param_3 + 0x290),
                 *(undefined4 *)(param_3 + 0x29c),param_2,param_4);
      return;
    }
    if (*(char *)(param_3 + 0x2a1) == '\0') {
      FUN_00c70c00(param_1 + *(int *)(param_3 + 0x298) * -2,*(undefined1 (**) [16])(param_3 + 0x290)
                   ,*(undefined4 *)(param_3 + 0x29c),param_2,param_4,param_5,
                   *(ushort *)(param_3 + 0x2a2));
      return;
    }
    FUN_00c70c00(param_1 + *(int *)(param_3 + 0x298) * -2,*(undefined1 (**) [16])(param_3 + 0x290),
                 *(undefined4 *)(param_3 + 0x29c),param_2,param_5,param_4,
                 *(ushort *)(param_3 + 0x2a2));
  }
  return;
}


//// FUNCTION FUN_00c426c0 @ 00c426c0 ////

void __thiscall FUN_00c426c0(void *this,int param_1,float param_2,int param_3)

{
  ushort uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  fVar2 = param_2 * *(float *)((int)this + 0x20) * 32767.0;
  if (*(uint *)(DAT_010d5dc4 + 0x1bc) < 4) {
    uVar5 = (uint)ROUND(fVar2);
    if (0x7fff < uVar5) {
      uVar5 = 0x7fff;
    }
    uVar1 = *(ushort *)(param_3 + 0x32);
    *(uint *)(param_1 + 0x294) = (uint)uVar1;
    uVar4 = uVar1 & 7;
    *(uint *)(param_1 + 0x29c) = uVar4;
    *(uint *)(param_1 + 0x298) = *(int *)(param_1 + 0x294) - uVar4;
    *(bool *)(param_1 + 0x2a0) = uVar5 == 0;
    FUN_00c6d140(param_3,*(int *)(param_1 + 0x29c),*(undefined4 **)(param_1 + 0x290),uVar5);
    return;
  }
  uVar5 = (uint)ROUND(fVar2 * *(float *)((int)this + 0xc5c));
  if (0x7fff < uVar5) {
    uVar5 = 0x7fff;
  }
  uVar4 = (uint)ROUND(fVar2 * *(float *)((int)this + 0xc60));
  if (0x7fff < uVar4) {
    uVar4 = 0x7fff;
  }
  uVar1 = *(ushort *)(param_3 + 0x32);
  *(uint *)(param_1 + 0x294) = (uint)uVar1;
  uVar3 = uVar1 & 7;
  *(uint *)(param_1 + 0x29c) = uVar3;
  *(uint *)(param_1 + 0x298) = *(int *)(param_1 + 0x294) - uVar3;
  if (*(char *)(param_1 + 0x2a1) != '\0') {
    *(bool *)(param_1 + 0x2a0) = uVar4 == 0;
    if (uVar4 != 0) {
      *(short *)(param_1 + 0x2a2) = (short)((uVar5 * 0x7fff) / uVar4);
    }
    FUN_00c6d140(param_3,*(int *)(param_1 + 0x29c),*(undefined4 **)(param_1 + 0x290),uVar4);
    return;
  }
  *(bool *)(param_1 + 0x2a0) = uVar5 == 0;
  if (uVar5 != 0) {
    *(short *)(param_1 + 0x2a2) = (short)((uVar4 * 0x7fff) / uVar5);
  }
  FUN_00c6d140(param_3,*(int *)(param_1 + 0x29c),*(undefined4 **)(param_1 + 0x290),uVar5);
  return;
}


//// FUNCTION FUN_00c42860 @ 00c42860 ////

void __thiscall FUN_00c42860(void *this,char param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  fVar1 = *(float *)((int)this + 0xc60);
  fVar2 = *(float *)((int)this + 0xc5c);
  *(char *)((int)this + 0x24) = param_1;
  if (param_1 == '\0') {
    *(bool *)(*(int *)((int)this + 0xc4c) + 0x545) = fVar2 < fVar1;
    *(bool *)(*(int *)((int)this + 0xc4c) + 0x2a1) = fVar2 < fVar1;
    FUN_00c426c0(this,*(int *)((int)this + 0xc4c),*(float *)((int)this + 0xc54),
                 *(int *)((int)this + 0xc64));
    iVar3 = *(int *)((int)this + 0xc4c);
  }
  else {
    *(bool *)(*(int *)((int)this + 0xc50) + 0x545) = fVar2 < fVar1;
    *(bool *)(*(int *)((int)this + 0xc50) + 0x2a1) = fVar2 < fVar1;
    FUN_00c426c0(this,*(int *)((int)this + 0xc50),*(float *)((int)this + 0xc54),
                 *(int *)((int)this + 0xc64));
    iVar3 = *(int *)((int)this + 0xc50);
  }
  FUN_00c426c0(this,iVar3 + 0x2a4,*(float *)((int)this + 0xc58),*(int *)((int)this + 0xc68));
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return;
}


//// FUNCTION ScalarDeletingDtor_00c42b40 @ 00c42b40 ////

undefined4 * __thiscall ScalarDeletingDtor_00c42b40(void *this,byte param_1)

{
  FUN_00c422f0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c42b60 @ 00c42b60 ////

void __fastcall FUN_00c42b60(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


//// FUNCTION FUN_00c42b70 @ 00c42b70 ////

uint __thiscall FUN_00c42b70(void *this,byte *param_1)

{
  byte bVar1;
  UINT UVar2;
  UINT UVar3;
  CHAR *pCVar4;
  int iVar5;
  MMRESULT MVar6;
  byte *pbVar7;
  UINT uMxId;
  bool bVar8;
  tMIXERCONTROLDETAILS local_108;
  tagMIXERLINECONTROLSA local_f0;
  tagMIXERCAPSA local_d8;
  tagMIXERLINEA local_a8;
  
  local_d8.szPname[0] = '\0';
  UVar2 = mixerGetNumDevs();
  uMxId = 0;
  UVar3 = UVar2;
  if (UVar2 != 0) {
    do {
      UVar3 = mixerGetDevCapsA(uMxId,&local_d8,0x30);
      if (UVar3 != 0) goto LAB_00c42cce;
      pCVar4 = local_d8.szPname;
      pbVar7 = param_1;
      do {
        bVar1 = *pCVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00c42bd5:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00c42bda;
        }
        if (bVar1 == 0) break;
        bVar1 = pCVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00c42bd5;
        pCVar4 = pCVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00c42bda:
      UVar3 = 0;
      if (iVar5 == 0) break;
      uMxId = uMxId + 1;
      UVar3 = UVar2;
    } while (uMxId < UVar2);
  }
  if (uMxId != UVar2) {
    UVar3 = mixerOpen(this,uMxId,0,0,0);
    if (UVar3 == 0) {
      local_a8.cbStruct = 0xa8;
      local_a8.dwComponentType = 0x1008;
      UVar3 = mixerGetLineInfoA(*(HMIXEROBJ *)this,&local_a8,0x80000003);
      if (UVar3 == 0) {
        local_f0.dwLineID = local_a8.dwLineID;
        local_f0.pamxctrl = (LPMIXERCONTROLA)((int)this + 4);
        local_f0.cbStruct = 0x18;
        local_f0.field2_0x8.dwControlID = 0x50030001;
        local_f0.cControls = 1;
        local_f0.cbmxctrl = 0x94;
        UVar3 = mixerGetLineControlsA(*(HMIXEROBJ *)this,&local_f0,0x80000002);
        if (UVar3 == 0) {
          local_108.dwControlID = *(DWORD *)((int)this + 8);
          local_108.paDetails = (LPVOID)((int)this + 0x98);
          local_108.cbStruct = 0x18;
          local_108.cChannels = 1;
          local_108.field3_0xc.hwndOwner = (HWND)0x0;
          local_108.cbDetails = 4;
          MVar6 = mixerGetControlDetailsA(*(HMIXEROBJ *)this,&local_108,0x80000000);
          return CONCAT31((int3)(-MVar6 >> 8),'\x01' - (MVar6 != 0));
        }
      }
    }
  }
LAB_00c42cce:
  return UVar3 & 0xffffff00;
}


//// FUNCTION FUN_00c42ce0 @ 00c42ce0 ////

void __fastcall FUN_00c42ce0(undefined4 *param_1)

{
  tMIXERCONTROLDETAILS local_18;
  
  if ((HMIXEROBJ)*param_1 != (HMIXEROBJ)0x0) {
    if (*(char *)(param_1 + 10) != '\0') {
      local_18.dwControlID = param_1[2];
      local_18.paDetails = param_1 + 0x26;
      local_18.cbStruct = 0x18;
      local_18.cChannels = 1;
      local_18.field3_0xc.hwndOwner = (HWND)0x0;
      local_18.cbDetails = 4;
      mixerSetControlDetails((HMIXEROBJ)*param_1,&local_18,0x80000000);
    }
    mixerClose((HMIXER)*param_1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00c42d50 @ 00c42d50 ////

void __thiscall FUN_00c42d50(void *this,int param_1)

{
  int iVar1;
  ulonglong uVar2;
  tMIXERCONTROLDETAILS local_18;
  
  iVar1 = *(int *)((int)this + 0x68);
  uVar2 = FUN_00acd42c();
  local_18.dwControlID = *(DWORD *)((int)this + 8);
  param_1 = (int)uVar2 + iVar1;
  local_18.paDetails = &param_1;
  local_18.cbStruct = 0x18;
  local_18.cChannels = 1;
  local_18.field3_0xc.hwndOwner = (HWND)0x0;
  local_18.cbDetails = 4;
  mixerSetControlDetails(*(HMIXEROBJ *)this,&local_18,0x80000000);
  return;
}


//// FUNCTION FUN_00c42dd0 @ 00c42dd0 ////

void __fastcall FUN_00c42dd0(undefined4 *param_1)

{
  tMIXERCONTROLDETAILS tStack_18;
  
  if ((HMIXEROBJ)*param_1 != (HMIXEROBJ)0x0) {
    if (*(char *)(param_1 + 10) != '\0') {
      tStack_18.dwControlID = param_1[2];
      tStack_18.paDetails = param_1 + 0x26;
      tStack_18.cbStruct = 0x18;
      tStack_18.cChannels = 1;
      tStack_18.field3_0xc.hwndOwner = (HWND)0x0;
      tStack_18.cbDetails = 4;
      mixerSetControlDetails((HMIXEROBJ)*param_1,&tStack_18,0x80000000);
    }
    mixerClose((HMIXER)*param_1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00c42e20 @ 00c42e20 ////

undefined4 * __fastcall FUN_00c42e20(undefined4 *param_1)

{
  FUN_00c3c690(param_1);
  *param_1 = &PTR_FUN_00dac928;
  return param_1;
}


//// FUNCTION FUN_00c42e60 @ 00c42e60 ////

void __thiscall FUN_00c42e60(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  uVar1 = 0;
  puVar3 = (undefined2 *)(param_1 + 4);
  do {
    iVar2 = *(int *)(uVar1 + *(int *)((int)this + 0x21c));
    if (iVar2 < 0x8000) {
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
    }
    else {
      iVar2 = 0x7fff;
    }
    puVar3[-2] = (short)iVar2;
    iVar2 = *(int *)(uVar1 + 4 + *(int *)((int)this + 0x21c));
    if (iVar2 < 0x8000) {
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
    }
    else {
      iVar2 = 0x7fff;
    }
    puVar3[-1] = (short)iVar2;
    iVar2 = *(int *)(uVar1 + 8 + *(int *)((int)this + 0x21c));
    if (iVar2 < 0x8000) {
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
    }
    else {
      iVar2 = 0x7fff;
    }
    *puVar3 = (short)iVar2;
    iVar2 = *(int *)(uVar1 + 0xc + *(int *)((int)this + 0x21c));
    if (iVar2 < 0x8000) {
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
    }
    else {
      iVar2 = 0x7fff;
    }
    puVar3[1] = (short)iVar2;
    uVar1 = uVar1 + 0x10;
    puVar3 = puVar3 + 4;
  } while (uVar1 < 0x200);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c433e0 @ 00c433e0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c433e0(void *this,byte param_1)

{
  FUN_00c43400(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c43400 @ 00c43400 ////

void __fastcall FUN_00c43400(undefined4 *param_1)

{
  undefined4 local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05278;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00dac928;
  local_4 = 0;
  local_14 = 0xffffd8f0;
  local_10 = param_1;
  if (DAT_010d6040 == (code *)0x0) {
    DAT_010d6040 = (code *)FUN_00c12920(&DAT_010d5f50,"EAXSet");
  }
  (*DAT_010d6040)(&DAT_00dac9c8,5,0,&local_14,4);
  *(undefined1 *)(param_1 + 1) = 0;
  local_4 = 0xffffffff;
  SetVtable_00d9fbe8_00c3c570(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c43640 @ 00c43640 ////

void __thiscall FUN_00c43640(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x28) & 0xfffffe7f;
  *(uint *)((int)this + 0x28) = uVar1;
  if (param_1 == 0) {
    *(uint *)((int)this + 0x28) = uVar1;
  }
  else {
    uVar2 = FUN_00acd42c();
    *(ulonglong *)((int)this + 0x80) = uVar2;
    if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x80) = 1;
      *(undefined4 *)((int)this + 0x84) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x3c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x78) = param_2;
  *(undefined4 *)((int)this + 0x7c) = param_3;
  return;
}


//// FUNCTION FUN_00c436b0 @ 00c436b0 ////

/* WARNING: Removing unreachable block (ram,0x00c43769) */

void __thiscall FUN_00c436b0(int param_1,undefined4 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  float10 fVar5;
  undefined8 uVar6;
  uint local_10;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  local_10 = uVar1 & 0x180;
  if (local_10 == 0) {
    if ((param_3._4_4_ < *(int *)(param_1 + 0x7c)) ||
       ((param_3._4_4_ <= *(int *)(param_1 + 0x7c) && ((uint)param_3 < *(uint *)(param_1 + 0x78)))))
    goto LAB_00c437d4;
    local_10 = 0x80;
  }
  else if ((local_10 != 0x80) && (local_10 != 0x100)) {
    *(uint *)(param_1 + 0x28) = uVar1;
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x80);
  uVar3 = *(uint *)(param_1 + 0x84);
  uVar6 = __alldiv(uVar2,uVar3,4,0);
  lVar4 = param_3 + CONCAT44(((int)((ulonglong)uVar6 >> 0x20) - *(int *)(param_1 + 0x7c)) -
                             (uint)((uint)uVar6 < *(uint *)(param_1 + 0x78)),
                             (uint)uVar6 - *(uint *)(param_1 + 0x78));
  __allrem((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),uVar2,uVar3);
  __alldiv(uVar2,uVar3,2,0);
  fVar5 = (float10)FUN_00ace9b0();
  *(float *)(param_1 + 0x3c) = (float)fVar5;
LAB_00c437d4:
  *(uint *)(param_1 + 0x28) = uVar1 & 0xfffffe7f | local_10;
  return;
}


//// FUNCTION FUN_00c437f0 @ 00c437f0 ////

void __thiscall FUN_00c437f0(void *this,undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_00acd42c();
  *(ulonglong *)((int)this + 0x70) = uVar2;
  if ((float10)(longlong)uVar2 == (float10)0.0) {
    *(undefined4 *)((int)this + 0x34) = 0x3f800000;
  }
  else {
    fVar1 = (float10)log2((float10)32768.0);
    *(float *)((int)this + 0x34) =
         (float)-(((float10)0.6931471805599453 * fVar1) / (float10)(longlong)uVar2);
  }
  *(ulonglong *)((int)this + 0x68) = uVar2 + CONCAT44(param_2,param_1);
  return;
}


//// FUNCTION FUN_00c43860 @ 00c43860 ////

void __thiscall FUN_00c43860(void *this,undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *(ulonglong *)((int)this + 0x70) = uVar1;
  if ((float)*(longlong *)((int)this + 0x70) != 0.0) {
    *(float *)((int)this + 0x34) = 1.0 / (float)*(longlong *)((int)this + 0x70);
    uVar1 = FUN_00acd42c();
    *(ulonglong *)((int)this + 0x68) = uVar1 + CONCAT44(param_2,param_1);
    return;
  }
  *(undefined4 *)((int)this + 0x34) = 0x3f800000;
  *(undefined4 *)((int)this + 0x6c) = param_2;
  *(undefined4 *)((int)this + 0x68) = param_1;
  return;
}


//// FUNCTION FUN_00c43930 @ 00c43930 ////

uint __thiscall FUN_00c43930(void *this,uint param_1,char param_2,uint param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [10];
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  byte local_1;
  
  uVar4 = param_1;
  bVar2 = 0;
  local_1 = 0;
  if (param_1 == 0) {
    if (param_2 == '\0') {
      return in_EAX & 0xffffff00;
    }
    *(undefined4 *)((int)this + 0x30) = 0x3f800000;
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
  uVar3 = *(uint *)((int)this + 0x28) & 0x5e;
  if (0x20 < uVar3) goto switchD_00c43986_default;
  local_1 = bVar2;
  switch(uVar3) {
  case 0:
    if ((*(int *)((int)this + 0x6c) <= param_4) &&
       ((*(int *)((int)this + 0x6c) < param_4 || (*(uint *)((int)this + 0x68) <= param_3)))) {
      param_1 = 2;
      FUN_00c43860(this,param_3,param_4);
      uVar3 = param_1;
      goto switchD_00c43986_caseD_2;
    }
    break;
  case 2:
switchD_00c43986_caseD_2:
    param_1 = uVar3;
    if (param_2 != '\0') {
      FUN_00c43860(this,param_3,param_4);
    }
    iVar1 = *(int *)((int)this + 0x6c);
    uVar4 = *(uint *)((int)this + 0x68);
    if ((param_4 < iVar1) || ((param_4 <= iVar1 && (param_3 < uVar4)))) {
      *(float *)((int)this + 0x30) =
           1.0 - (float)CONCAT44((iVar1 - param_4) - (uint)(uVar4 < param_3),uVar4 - param_3) *
                 *(float *)((int)this + 0x34);
      uVar3 = param_1;
      local_1 = 1;
    }
    else {
      *(undefined4 *)((int)this + 0x30) = 0x3f800000;
      uVar8 = FUN_00acd42c();
      *(ulonglong *)((int)this + 0x68) = uVar8 + CONCAT44(param_4,param_3);
      param_1 = 4;
      uVar3 = param_1;
      local_1 = 1;
    }
    break;
  case 4:
    if ((*(int *)((int)this + 0x6c) <= param_4) &&
       ((*(int *)((int)this + 0x6c) < param_4 || (*(uint *)((int)this + 0x68) <= param_3)))) {
      FUN_00c437f0(this,param_3,param_4);
      param_1 = 8;
      uVar3 = param_1;
      goto switchD_00c43986_caseD_8;
    }
    break;
  case 8:
switchD_00c43986_caseD_8:
    param_1 = uVar3;
    if (param_2 != '\0') {
      FUN_00c437f0(this,param_3,param_4);
      log2((float10)*(float *)((int)this + 0x30));
      uVar8 = FUN_00acd42c();
      *(ulonglong *)((int)this + 0x68) = uVar8 + CONCAT44(param_4,param_3);
    }
    if (*(float *)(uVar4 + 0x10) + 3.0517578e-05 <= *(float *)((int)this + 0x30)) {
      uVar4 = *(uint *)((int)this + 0x70) - *(uint *)((int)this + 0x68);
      auVar5 = FUN_0043b590((float)CONCAT44(((*(int *)((int)this + 0x74) -
                                             *(int *)((int)this + 0x6c)) -
                                            (uint)(*(uint *)((int)this + 0x70) <
                                                  *(uint *)((int)this + 0x68))) + param_4 +
                                            (uint)CARRY4(uVar4,param_3),uVar4 + param_3) *
                            *(float *)((int)this + 0x34));
      *(float *)((int)this + 0x30) = (float)(float10)auVar5;
      uVar3 = param_1;
      local_1 = 1;
    }
    else {
      *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(uVar4 + 0x10);
      param_1 = 0x10;
      uVar3 = param_1;
      local_1 = 1;
    }
    break;
  case 0x10:
    if (param_2 != '\0') {
      if (*(float *)((int)this + 0x30) != *(float *)(param_1 + 0x10)) {
        *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x10);
        bVar2 = 1;
      }
      goto switchD_00c43986_caseD_20;
    }
    goto LAB_00c43b5c;
  case 0x20:
switchD_00c43986_caseD_20:
    if (param_2 != '\0') {
      FUN_00c437f0(this,param_3,param_4);
      log2((float10)*(float *)((int)this + 0x30));
      uVar8 = FUN_00acd42c();
      *(ulonglong *)((int)this + 0x68) = uVar8 + CONCAT44(param_4,param_3);
    }
LAB_00c43b5c:
    local_1 = bVar2;
    if (3.0517578e-05 <= *(float *)((int)this + 0x30)) {
      uVar4 = *(uint *)((int)this + 0x70) - *(uint *)((int)this + 0x68);
      fVar7 = (float10)1.4426950408889634 *
              (float10)CONCAT44(((*(int *)((int)this + 0x74) - *(int *)((int)this + 0x6c)) -
                                (uint)(*(uint *)((int)this + 0x70) < *(uint *)((int)this + 0x68))) +
                                param_4 + (uint)CARRY4(uVar4,param_3),uVar4 + param_3) *
              (float10)*(float *)((int)this + 0x34);
      fVar6 = ROUND(fVar7);
      fVar7 = (float10)f2xm1(fVar7 - fVar6);
      fVar6 = (float10)fscale((float10)1 + fVar7,fVar6);
      *(float *)((int)this + 0x30) = (float)fVar6;
    }
    else {
      *(undefined4 *)((int)this + 0x30) = 0;
      *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xffffffdf | 0x40;
    }
  }
  param_1 = uVar3;
  uVar3 = param_1;
switchD_00c43986_default:
  param_1 = uVar3;
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xffffffa1 | param_1;
  return (uint)local_1;
}


//// FUNCTION FUN_00c43c40 @ 00c43c40 ////

void __thiscall FUN_00c43c40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x50) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alSourcef");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alSourcef");
    }
    *(FARPROC *)((int)this + 0x50) = pFVar1;
  }
  (**(code **)((int)this + 0x50))(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c43c90 @ 00c43c90 ////

void __thiscall FUN_00c43c90(void *this,undefined4 param_1)

{
  code *pcVar1;
  FARPROC pFVar2;
  
  if (*(int *)((int)this + 0x74) == 0) {
    if (*(char *)((int)this + 0x104) != '\0') {
      pcVar1 = (code *)FUN_00c12920(this,"alSourcePause");
      *(code **)((int)this + 0x74) = pcVar1;
      (*pcVar1)(param_1);
      return;
    }
    pFVar2 = GetProcAddress(*(HMODULE *)((int)this + 4),"alSourcePause");
    *(FARPROC *)((int)this + 0x74) = pFVar2;
  }
  (**(code **)((int)this + 0x74))(param_1);
  return;
}


//// FUNCTION FUN_00c43ce0 @ 00c43ce0 ////

void __thiscall FUN_00c43ce0(void *this,undefined4 param_1)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x84) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alSourceRewind");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alSourceRewind");
    }
    *(FARPROC *)((int)this + 0x84) = pFVar1;
  }
  (**(code **)((int)this + 0x84))(param_1);
  return;
}


//// FUNCTION FUN_00c43d30 @ 00c43d30 ////

undefined4 * __fastcall FUN_00c43d30(undefined4 *param_1)

{
  FUN_00c17030(param_1);
  *param_1 = &PTR_FUN_00dac978;
  return param_1;
}


//// FUNCTION FUN_00c44040 @ 00c44040 ////

int __fastcall FUN_00c44040(void *param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0xe0) == 0) {
    if (*(char *)((int)param_1 + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)param_1 + 4),"alGetError");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(param_1,"alGetError");
    }
    *(FARPROC *)((int)param_1 + 0xe0) = pFVar1;
  }
  iVar2 = (**(code **)((int)param_1 + 0xe0))();
  if (iVar2 != 0) {
    return (uint)(iVar2 == 0xa005) * 4 + -9;
  }
  return 0;
}


//// FUNCTION ScalarDeletingDtor_00c440a0 @ 00c440a0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c440a0(void *this,byte param_1)

{
  thunk_FUN_00be0c60(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c441d0 @ 00c441d0 ////

void __thiscall FUN_00c441d0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  iVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,&param_1);
  if (-1 < iVar2) {
    if (DAT_010d6030 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
      }
      else {
        DAT_010d6030 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetError");
      }
    }
    (*DAT_010d6030)();
    uVar1 = *(undefined4 *)((int)this + 0x58);
    if (DAT_010d5fac == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5fac = GetProcAddress(DAT_010d5f54,"alSourcei");
      }
      else {
        DAT_010d5fac = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alSourcei");
      }
    }
    (*DAT_010d5fac)(uVar1,0x1009,unaff_ESI);
    FUN_00c44040(&DAT_010d5f50);
  }
  return;
}


//// FUNCTION FUN_00c44280 @ 00c44280 ////

uint __thiscall
FUN_00c44280(void *this,int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 uVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  puVar5 = param_2;
  uVar7 = *param_2;
  if ((uVar7 & 0xe02) == 0) {
    if ((param_1[3] & 0x40000U) == 0) {
      if ((param_1[3] & 0x20000U) == 0) {
        uVar7 = uVar7 | 2;
      }
      else {
        uVar7 = uVar7 | 0x400;
      }
    }
    else {
      uVar7 = uVar7 | 0x800;
    }
  }
  uVar2 = param_2[6];
  uVar8 = *(uint *)((int)this + 0x28) & 0xffffffa1;
  *(uint *)((int)this + 0x28) = uVar8;
  if (uVar2 == 0) {
    *(undefined4 *)((int)this + 0x30) = 0x3f800000;
  }
  else {
    uVar9 = FUN_00acd42c();
    *(ulonglong *)((int)this + 0x68) = uVar9 + CONCAT44(param_4,param_3);
    *(undefined4 *)((int)this + 0x30) = 0;
    *(uint *)((int)this + 0x28) = uVar8;
  }
  puVar1 = param_2 + 6;
  param_2 = (uint *)(uVar7 | 5);
  if (*puVar1 != 0) {
    param_2 = (uint *)(uVar7 | 0xd);
  }
  pfVar3 = (float *)puVar5[8];
  FUN_00c43640(this,(int)pfVar3,param_3,param_4);
  if ((pfVar3 != (float *)0x0) && (0.0 < *pfVar3)) {
    uVar9 = FUN_00acd42c();
    *(ulonglong *)((int)this + 0x78) = uVar9 + CONCAT44(param_4,param_3);
  }
  if (puVar5[8] != 0) {
    param_2 = (uint *)((uint)param_2 | 0x20);
  }
  if ((param_1[3] & 0x2000U) == 0) {
    cVar6 = (**(code **)(*param_1 + 4))();
    if (cVar6 == '\0') {
      param_2 = (uint *)((uint)param_2 | 0x4000);
    }
    else {
      param_2 = (uint *)((uint)param_2 | 0x1000000);
    }
  }
  uVar4 = *(undefined4 *)((int)this + 0x58);
  if (DAT_010d5fa0 == (FARPROC)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d5fa0 = GetProcAddress(DAT_010d5f54,"alSourcef");
    }
    else {
      DAT_010d5fa0 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alSourcef");
    }
  }
  (*DAT_010d5fa0)(uVar4,0x1021,0);
  return (uint)param_2;
}


//// FUNCTION FUN_00c443d0 @ 00c443d0 ////

/* WARNING: Removing unreachable block (ram,0x00c44424) */

int __thiscall FUN_00c443d0(void *this,void *param_1,uint param_2,undefined4 param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  if (((*(int *)((int)this + 0x60) == *(int *)((int)param_1 + 8)) ||
      (uVar1 = FUN_00c4adf0(param_1,*(uint *)((int)this + 0x5c)), (char)uVar1 == '\0')) ||
     ((*(int *)((int)this + 0x5c) == 0 && (param_4 == '\0')))) {
    return 0;
  }
  uVar2 = FUN_00c4ac80(param_1,*(int *)((int)this + 0x5c));
  lVar4 = FUN_00c4ac90(param_1,*(int *)((int)this + 0x5c));
  if (lVar4 <= CONCAT44(param_3,param_2)) {
    iVar3 = (**(code **)(*(int *)this + 0x4c))(uVar2,&param_4);
    if (iVar3 < 0) {
      return iVar3;
    }
    FUN_00c14b20(&DAT_010d5f50);
    FUN_00c14a80(&DAT_010d5f50,*(undefined4 *)((int)this + 0x58),1,&param_2);
    iVar3 = FUN_00c44040(&DAT_010d5f50);
    if (iVar3 < 0) {
      return iVar3;
    }
    *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 1;
    *(uint *)((int)this + 0x5c) = (*(int *)((int)this + 0x5c) + 1U) % *(uint *)((int)param_1 + 8);
  }
  return 0;
}


//// FUNCTION FUN_00c44590 @ 00c44590 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00c44590(void *this,int *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  undefined4 local_8;
  
  if ((*(byte *)((int)this + 0x28) & 1) == 0) {
    uVar3 = param_1[5];
  }
  else {
    uVar3 = FUN_00c44280(this,param_1,(uint *)(param_1 + 5),param_2,param_3);
  }
  fVar5 = (float)(uVar3 | _DAT_010d6058);
  if (((uint)fVar5 & 1) != 0) {
    if ((param_1[0x1e] == 0) || (local_8 = 1, ((uint)param_1[4] >> 8 & 1) == 0)) {
      local_8 = 0;
    }
    uVar1 = *(undefined4 *)((int)this + 0x58);
    if (DAT_010d5fac == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5fac = GetProcAddress(DAT_010d5f54,"alSourcei");
      }
      else {
        DAT_010d5fac = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alSourcei");
      }
    }
    (*DAT_010d5fac)(uVar1,0x1007,local_8);
  }
  if ((((*(uint *)((int)this + 0x2c) >> 9 & 1) != 0) && (*(int *)((int)this + 0x24) <= param_3)) &&
     ((*(int *)((int)this + 0x24) < param_3 || (*(uint *)((int)this + 0x20) <= param_2)))) {
    uVar3 = *(uint *)((int)this + 0x28);
    uVar4 = uVar3 & 0xffffffa1;
    *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xfffffdff;
    *(uint *)((int)this + 0x28) = uVar4;
    if ((param_1[0xb] != 0) && ((uVar3 & 0x20) == 0)) {
      *(uint *)((int)this + 0x28) = uVar4 | 0x20;
      FUN_00c437f0(this,param_2,param_3);
    }
  }
  if (((*(uint *)((int)this + 0x28) >> 6 & 1) == 0) &&
     (uVar3 = FUN_00c43930(this,param_1[0xb],(byte)((uint)fVar5 >> 3) & 1,param_2,param_3),
     (char)uVar3 != '\0')) {
    fVar5 = (float)((uint)fVar5 | 8);
  }
  if ((((uint)fVar5 & 0x20) != 0) && ((*(byte *)((int)this + 0x28) & 1) == 0)) {
    FUN_00c43640(this,param_1[0xd],param_2,param_3);
  }
  if (param_1[0xd] != 0) {
    FUN_00c436b0((int)this,param_1[0xd],CONCAT44(param_3,param_2));
    fVar5 = (float)((uint)fVar5 | 0x20);
  }
  if ((fVar5 != 0.0) || (*(int *)(DAT_010d5dc4 + 0x54) != 0)) {
    cVar2 = (**(code **)(*(int *)this + 0x14))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 4))();
      FUN_00c74ac0(this,(float)(-(uint)(cVar2 != '\0') & (uint)param_1),(uint)fVar5);
      *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xfffffffe;
      return;
    }
    cVar2 = (**(code **)(*param_1 + 4))();
    FUN_00c44b60(this,~-(uint)(cVar2 != '\0') & (uint)param_1,fVar5);
  }
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xfffffffe;
  return;
}


//// FUNCTION FUN_00c447e0 @ 00c447e0 ////

undefined4 __thiscall FUN_00c447e0(void *this,int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  void *pvStack_4;
  
  piVar4 = param_1;
  pvStack_4 = this;
  FUN_00c44590(this,param_1,param_2,param_3);
  piVar1 = piVar4 + 0x15;
  if (((piVar4[4] & 0x7fU) == 1) || ((piVar4[4] & 0x7fU) == 0x10)) {
    uVar2 = *(undefined4 *)((int)this + 0x58);
    if (DAT_010d5fbc == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5fbc = GetProcAddress(DAT_010d5f54,"alSourcePlay");
      }
      else {
        DAT_010d5fbc = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alSourcePlay");
      }
    }
    (*DAT_010d5fbc)(uVar2);
  }
  if ((((*(uint *)((int)this + 0x2c) >> 7 & 1) != 0) && (*(int *)((int)this + 0x1c) <= param_3)) &&
     ((*(int *)((int)this + 0x1c) < param_3 || (*(uint *)((int)this + 0x18) <= param_2)))) {
    (**(code **)(*(int *)this + 0x2c))(0,0);
    return 8;
  }
  uVar2 = *(undefined4 *)((int)this + 0x58);
  if (piVar4[0x17] == 0) {
    if (DAT_010d5fb8 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5fb8 = GetProcAddress(DAT_010d5f54,"alGetSourcei");
      }
      else {
        DAT_010d5fb8 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetSourcei");
      }
    }
    (*DAT_010d5fb8)(uVar2,0x1010,&param_1);
    if (param_1 == (int *)0x1012) {
      return 2;
    }
  }
  else {
    if (DAT_010d5fb8 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5fb8 = GetProcAddress(DAT_010d5f54,"alGetSourcei");
      }
      else {
        DAT_010d5fb8 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetSourcei");
      }
    }
    (*DAT_010d5fb8)(uVar2,0x1016,&param_1);
    if (param_1 == (int *)0x0) {
LAB_00c44989:
      iVar5 = FUN_00c443d0(this,piVar1,param_2,param_3,(byte)((uint)piVar4[4] >> 8) & 1);
      if (iVar5 != 0) {
        return 0;
      }
      uVar2 = *(undefined4 *)((int)this + 0x58);
      if (DAT_010d5fb8 == (FARPROC)0x0) {
        if (DAT_010d6054 == '\0') {
          DAT_010d5fb8 = GetProcAddress(DAT_010d5f54,"alGetSourcei");
        }
        else {
          DAT_010d5fb8 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetSourcei");
        }
      }
      (*DAT_010d5fb8)(uVar2,0x1010,&param_2);
      if ((param_2 != 0x1012) && (*(int *)((int)this + 0x60) != 0)) {
        FUN_00c149e0(&DAT_010d5f50,*(undefined4 *)((int)this + 0x58));
      }
      return 2;
    }
    for (; 0 < (int)param_1; param_1 = (int *)((int)param_1 + -1)) {
      uVar2 = *(undefined4 *)((int)this + 0x58);
      *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + -1;
      if (DAT_010d5fe0 == (FARPROC)0x0) {
        if (DAT_010d6054 == '\0') {
          DAT_010d5fe0 = GetProcAddress(DAT_010d5f54,"alSourceUnqueueBuffers");
        }
        else {
          DAT_010d5fe0 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alSourceUnqueueBuffers");
        }
      }
      (*DAT_010d5fe0)(uVar2,1,&pvStack_4);
      FUN_00c4ace0(piVar1);
      FUN_00c49cd0((int)piVar4);
    }
    if ((piVar4[0x17] == 0) || (piVar4[0x1b] != 0)) {
      uVar3 = *(uint *)(*piVar1 + piVar4[0x19] * 4);
      if ((uVar3 != 0) && ((piVar4[0x19] != 0 || (((uint)piVar4[4] >> 8 & 1) != 0)))) {
        *(uint *)((int)this + 0xc) = -(uint)(piVar4[0x17] != 0) & uVar3;
        goto LAB_00c44989;
      }
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return 0;
}


//// FUNCTION FUN_00c44a80 @ 00c44a80 ////

int __thiscall FUN_00c44a80(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(*(int *)((int)this + 0xc) + 4) == 2) {
    *param_1 = *(undefined4 *)this;
    return iVar1;
  }
  if ((*(byte *)((int)this + 8) & 2) == 0) {
    iVar1 = FUN_00c61f20((int)this);
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return iVar1;
}


//// FUNCTION FUN_00c44ad0 @ 00c44ad0 ////

int FUN_00c44ad0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(*(int *)(param_1 + 0x3c) + 4) == 2) {
    *param_2 = *(undefined4 *)(param_1 + 0x30);
    return iVar1;
  }
  if ((*(byte *)(param_1 + 0x38) & 2) == 0) {
    iVar1 = FUN_00c61f20(param_1 + 0x30);
  }
  *param_2 = *(undefined4 *)(param_1 + 0x34);
  return iVar1;
}


//// FUNCTION FUN_00c44b10 @ 00c44b10 ////

void __thiscall
FUN_00c44b10(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0xf0) == 0) {
    uVar1 = FUN_00c12920(this,"EAXSet");
    *(undefined4 *)((int)this + 0xf0) = uVar1;
  }
  (**(code **)((int)this + 0xf0))(&DAT_00dac9d8,param_2,param_1,param_3,param_4);
  return;
}


//// FUNCTION FUN_00c44b60 @ 00c44b60 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00c44b60(void *this,int param_1,float param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = param_2;
  if (((uint)param_2 & 10) != 0) {
    param_2 = *(float *)(param_1 + 0x18) * *(float *)((int)this + 0x30) * _DAT_010d6048;
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
    uVar1 = *(undefined4 *)((int)this + 0x58);
    if (DAT_010d5fa0 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5fa0 = GetProcAddress(DAT_010d5f54,"alSourcef");
      }
      else {
        DAT_010d5fa0 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alSourcef");
      }
    }
    (*DAT_010d5fa0)(uVar1,0x100a,param_2);
  }
  if (((uint)fVar2 & 0x24) != 0) {
    if (DAT_010d6030 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
      }
      else {
        DAT_010d6030 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetError");
      }
    }
    (*DAT_010d6030)();
    param_2 = *(float *)(param_1 + 0x20) * *(float *)((int)this + 0x3c);
    do {
      if (param_2 <= 0.0) break;
      uVar1 = *(undefined4 *)((int)this + 0x58);
      if (DAT_010d5fa0 == (FARPROC)0x0) {
        if (DAT_010d6054 == '\0') {
          DAT_010d5fa0 = GetProcAddress(DAT_010d5f54,"alSourcef");
        }
        else {
          if ((DAT_010d6038 == (FARPROC)0x0) &&
             (DAT_010d6038 = GetProcAddress(DAT_010d5f54,"alGetProcAddress"), DAT_010d6054 != '\0'))
          {
            DAT_010d6038 = (FARPROC)(*DAT_010d6038)("alGetProcAddress");
          }
          DAT_010d5fa0 = (FARPROC)(*DAT_010d6038)("alSourcef");
        }
      }
      (*DAT_010d5fa0)(uVar1,0x1003,param_2);
      if (DAT_010d6030 == (FARPROC)0x0) {
        if (DAT_010d6054 == '\0') {
          DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
        }
        else {
          if ((DAT_010d6038 == (FARPROC)0x0) &&
             (DAT_010d6038 = GetProcAddress(DAT_010d5f54,"alGetProcAddress"), DAT_010d6054 != '\0'))
          {
            DAT_010d6038 = (FARPROC)(*DAT_010d6038)("alGetProcAddress");
          }
          DAT_010d6030 = (FARPROC)(*DAT_010d6038)("alGetError");
        }
      }
      param_2 = param_2 * 0.8;
      iVar3 = (*DAT_010d6030)();
    } while (iVar3 == 0xa003);
  }
  if (((uint)fVar2 & 0x2000) != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x58);
    if (DAT_010d6040 == (code *)0x0) {
      DAT_010d6040 = (code *)FUN_00c12920(&DAT_010d5f50,"EAXSet");
    }
    (*DAT_010d6040)(&DAT_00dac9d8,5,uVar1,param_1 + 0x100,4);
  }
  if (((uint)fVar2 & 0x4000) != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x58);
    if (DAT_010d6040 == (code *)0x0) {
      DAT_010d6040 = (code *)FUN_00c12920(&DAT_010d5f50,"EAXSet");
    }
    (*DAT_010d6040)(&DAT_00dac9d8,7,uVar1,param_1 + 0x104,4);
  }
  return;
}


//// FUNCTION FUN_00c44df0 @ 00c44df0 ////

void __thiscall FUN_00c44df0(void *this,char param_1)

{
  *(undefined ***)this = &PTR_FUN_00dac9e8;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(uint *)((int)this + 0xe8) = (uint)(param_1 != '\0');
  return;
}


//// FUNCTION FUN_00c44e20 @ 00c44e20 ////

void __fastcall FUN_00c44e20(int param_1)

{
  if (*(undefined4 **)(param_1 + 0xe4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xe4))(1);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  return;
}


//// FUNCTION FUN_00c44e40 @ 00c44e40 ////

undefined4 __fastcall FUN_00c44e40(int param_1)

{
  void *this;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0529b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)FUN_00c0ef90(0x4f0);
  local_4 = 0;
  if (this == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00c75590(this,1);
  }
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00c44ed0 @ 00c44ed0 ////

undefined4 FUN_00c44ed0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffc;
  if ((param_4 != 0) && (*(int *)(param_4 + 0x1f0) != 0)) {
    uVar1 = FUN_00c79910(param_1);
  }
  return uVar1;
}


//// FUNCTION FUN_00c44f10 @ 00c44f10 ////

undefined4 __thiscall FUN_00c44f10(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if ((param_1 != 0) && (*(int *)((int)this + 4) != 0)) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    iVar1 = *(int *)(param_1 + 0xc);
    if ((iVar1 < 1) && (-0x2711 < iVar1)) {
      *(int *)((int)this + 0x20) = iVar1;
    }
    else {
      *(uint *)((int)this + 0x20) = (0 < iVar1) - 1 & 0xffffd8f0;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if ((iVar1 < 1) && (-0x2711 < iVar1)) {
      *(int *)((int)this + 0x24) = iVar1;
    }
    else {
      *(uint *)((int)this + 0x24) = (0 < iVar1) - 1 & 0xffffd8f0;
    }
    if ((*(float *)(param_1 + 0x18) < 20.0 == (*(float *)(param_1 + 0x18) == 20.0)) ||
       (*(float *)(param_1 + 0x18) < 0.1)) {
      if (*(float *)(param_1 + 0x18) <= 20.0) {
        uVar2 = 0x3dcccccd;
      }
      else {
        uVar2 = 0x41a00000;
      }
      *(undefined4 *)((int)this + 0x2c) = uVar2;
    }
    else {
      *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x18);
    }
    if ((*(float *)(param_1 + 0x1c) < 2.0 == (*(float *)(param_1 + 0x1c) == 2.0)) ||
       (*(float *)(param_1 + 0x1c) < 0.1)) {
      if (*(float *)(param_1 + 0x1c) <= 2.0) {
        uVar2 = 0x3dcccccd;
      }
      else {
        uVar2 = 0x40000000;
      }
      *(undefined4 *)((int)this + 0x30) = uVar2;
    }
    else {
      *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x1c);
    }
    iVar1 = *(int *)(param_1 + 0x24);
    if ((iVar1 < 0x3e9) && (-0x2711 < iVar1)) {
      *(int *)((int)this + 0x38) = iVar1;
    }
    else {
      *(uint *)((int)this + 0x38) = ((iVar1 < 0x3e9) - 1 & 11000) - 10000;
    }
    if ((*(float *)(param_1 + 0x28) < 0.3 == (*(float *)(param_1 + 0x28) == 0.3)) ||
       (*(float *)(param_1 + 0x28) < 0.0)) {
      if (*(float *)(param_1 + 0x28) <= 0.3) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x3e99999a;
      }
      *(undefined4 *)((int)this + 0x3c) = uVar2;
    }
    else {
      *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    }
    iVar1 = *(int *)(param_1 + 0x38);
    if ((iVar1 < 0x7d1) && (-0x2711 < iVar1)) {
      *(int *)((int)this + 0x40) = iVar1;
    }
    else {
      *(uint *)((int)this + 0x40) = ((iVar1 < 0x7d1) - 1 & 12000) - 10000;
    }
    if ((0.1 <= *(float *)(param_1 + 0x3c)) || (*(float *)(param_1 + 0x3c) < 0.0)) {
      if (*(float *)(param_1 + 0x3c) <= 0.1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x3dcccccd;
      }
      *(undefined4 *)((int)this + 0x44) = uVar2;
    }
    else {
      *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x3c);
    }
    if ((100.0 <= *(float *)(param_1 + 4)) || (*(float *)(param_1 + 4) < 0.1)) {
      if (*(float *)(param_1 + 4) < 100.0) {
        uVar2 = 0x3dcccccd;
      }
      else {
        uVar2 = 0x42c80000;
      }
      *(undefined4 *)((int)this + 0x48) = uVar2;
    }
    else {
      *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 4);
    }
    if ((1.0 <= *(float *)(param_1 + 8)) || (*(float *)(param_1 + 8) < 0.0)) {
      if (*(float *)(param_1 + 8) <= 1.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x3f800000;
      }
      *(undefined4 *)((int)this + 0x4c) = uVar2;
    }
    else {
      *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 8);
    }
    if ((10.0 <= *(float *)(param_1 + 0x68)) || (*(float *)(param_1 + 0x68) < 0.0)) {
      if (*(float *)(param_1 + 0x68) < 10.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x41200000;
      }
      *(undefined4 *)((int)this + 0x6c) = uVar2;
    }
    else {
      *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x68);
    }
    if ((0.0 <= *(float *)(param_1 + 0x5c)) || (*(float *)(param_1 + 0x5c) < -100.0)) {
      if (*(float *)(param_1 + 0x5c) <= 0.0) {
        uVar2 = 0xffffff9c;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar3 = FUN_00acd42c();
      uVar2 = (undefined4)uVar3;
    }
    *(undefined4 *)((int)this + 0x70) = uVar2;
    FUN_00c62450(*(void **)((int)this + 4),(undefined4 *)((int)this + 8));
    FUN_00c62930(*(int *)((int)this + 4));
    uVar2 = 1;
  }
  return uVar2;
}


//// FUNCTION FUN_00c45580 @ 00c45580 ////

undefined4 FUN_00c45580(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  void *this;
  undefined4 uVar5;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)(param_1 + 0x21c);
  uVar5 = 0;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (((param_3 == 0) || (param_4 != 0)) && (param_2 == 2)) {
    uVar4 = *(uint *)(param_1 + 0x1a8);
    if ((0 < (int)uVar4) || ((int)uVar4 < -10000)) {
      uVar4 = (0 < (int)uVar4) - 1 & 0xffffd8f0;
    }
    uVar3 = *(uint *)(param_1 + 0x1ac);
    if ((0 < (int)uVar3) || ((int)uVar3 < -10000)) {
      uVar3 = (0 < (int)uVar3) - 1 & 0xffffd8f0;
    }
    local_28 = *(uint *)(param_1 + 0x1b0);
    if ((0 < (int)local_28) || ((int)local_28 < -10000)) {
      local_28 = (0 < (int)local_28) - 1 & 0xffffd8f0;
    }
    *(uint *)(param_1 + 500) = local_28;
    local_24 = *(uint *)(param_1 + 0x1b4);
    if ((0 < (int)local_24) || ((int)local_24 < -10000)) {
      local_24 = (0 < (int)local_24) - 1 & 0xffffd8f0;
    }
    *(uint *)(param_1 + 0x1f8) = local_24;
    local_20 = *(uint *)(param_1 + 0x1b8);
    if ((0 < (int)local_20) || ((int)local_20 < -10000)) {
      local_20 = (0 < (int)local_20) - 1 & 0xffffd8f0;
    }
    *(uint *)(param_1 + 0x1fc) = local_20;
    if ((*(float *)(param_1 + 0x1bc) < 1.0 == (*(float *)(param_1 + 0x1bc) == 1.0)) ||
       (*(float *)(param_1 + 0x1bc) < 0.0)) {
      if (*(float *)(param_1 + 0x1bc) <= 1.0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x200) = uVar5;
      local_1c = 0x3f800000;
      if (*(float *)(param_1 + 0x1bc) <= 1.0) {
        local_1c = 0;
      }
    }
    else {
      local_1c = *(undefined4 *)(param_1 + 0x1bc);
      *(undefined4 *)(param_1 + 0x200) = local_1c;
    }
    local_18 = *(uint *)(param_1 + 0x1c0);
    if ((0 < (int)local_18) || ((int)local_18 < -10000)) {
      local_18 = (0 < (int)local_18) - 1 & 0xffffd8f0;
    }
    *(uint *)(param_1 + 0x204) = local_18;
    if ((*(float *)(param_1 + 0x1c4) < 1.0 == (*(float *)(param_1 + 0x1c4) == 1.0)) ||
       (*(float *)(param_1 + 0x1c4) < 0.0)) {
      if (*(float *)(param_1 + 0x1c4) <= 1.0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x208) = uVar5;
      local_14 = 0x3f800000;
      if (*(float *)(param_1 + 0x1c4) <= 1.0) {
        local_14 = 0;
      }
    }
    else {
      local_14 = *(undefined4 *)(param_1 + 0x1c4);
      *(undefined4 *)(param_1 + 0x208) = local_14;
    }
    if ((*(float *)(param_1 + 0x1e4) < 10.0 == (*(float *)(param_1 + 0x1e4) == 10.0)) ||
       (*(float *)(param_1 + 0x1e4) < 0.0)) {
      if (*(float *)(param_1 + 0x1e4) <= 10.0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x41200000;
      }
      *(undefined4 *)(param_1 + 0x214) = uVar5;
      local_8 = 0x41200000;
      if (*(float *)(param_1 + 0x1e4) <= 10.0) {
        local_8 = 0;
      }
    }
    else {
      local_8 = *(undefined4 *)(param_1 + 0x1e4);
      *(undefined4 *)(param_1 + 0x214) = local_8;
    }
    if ((*(float *)(param_1 + 0x1e8) < 10.0 == (*(float *)(param_1 + 0x1e8) == 10.0)) ||
       (*(float *)(param_1 + 0x1e8) < 0.0)) {
      if (*(float *)(param_1 + 0x1e8) <= 10.0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x41200000;
      }
      *(undefined4 *)(param_1 + 0x218) = uVar5;
      local_4 = 0x41200000;
      if (*(float *)(param_1 + 0x1e8) <= 10.0) {
        local_4 = 0;
      }
    }
    else {
      local_4 = *(undefined4 *)(param_1 + 0x1e8);
      *(undefined4 *)(param_1 + 0x218) = local_4;
    }
    local_10 = *(uint *)(param_1 + 0x1d0);
    if ((0 < (int)local_10) || ((int)local_10 < -10000)) {
      local_10 = (0 < (int)local_10) - 1 & 0xffffd8f0;
    }
    *(uint *)(param_1 + 0x20c) = local_10;
    if ((*(float *)(param_1 + 0x1d4) < 1.0 == (*(float *)(param_1 + 0x1d4) == 1.0)) ||
       (*(float *)(param_1 + 0x1d4) < 0.0)) {
      if (*(float *)(param_1 + 0x1d4) <= 1.0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x210) = uVar5;
      local_c = 0x3f800000;
      if (*(float *)(param_1 + 0x1d4) <= 1.0) {
        local_c = 0;
      }
    }
    else {
      local_c = *(undefined4 *)(param_1 + 0x1d4);
      *(undefined4 *)(param_1 + 0x210) = local_c;
    }
    uVar5 = 1;
    cVar2 = (**(code **)(*piVar1 + 4))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*piVar1 + 4))();
      this = (void *)((uint)piVar1 & -(uint)(cVar2 != '\0'));
      FUN_00c63190(this,uVar4);
      FUN_00c631b0(this,uVar3);
      FUN_00c63a30(this,(int *)&local_28);
      return 1;
    }
    cVar2 = (**(code **)(*piVar1 + 4))();
    FUN_00c644e0((void *)(~-(uint)(cVar2 != '\0') & (uint)piVar1),uVar4);
    cVar2 = (**(code **)(*piVar1 + 4))();
    FUN_00c64500((void *)(~-(uint)(cVar2 != '\0') & (uint)piVar1),local_28);
  }
  return uVar5;
}


//// FUNCTION ScalarDeletingDtor_00c45d50 @ 00c45d50 ////

undefined4 * __thiscall ScalarDeletingDtor_00c45d50(void *this,byte param_1)

{
  FUN_00c45d70(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c45d70 @ 00c45d70 ////

void __fastcall FUN_00c45d70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d052b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00dac9e8;
  local_4 = 0;
  if ((undefined4 *)param_1[0x39] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x39])(1);
    param_1[0x39] = 0;
  }
  *param_1 = &PTR_LAB_00d9fbe8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c46150 @ 00c46150 ////

undefined4 FUN_00c46150(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = 4;
  bVar6 = true;
  piVar4 = param_1;
  piVar5 = &DAT_00dad6c0;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = 0x20000;
  }
  else {
    iVar3 = 4;
    bVar6 = true;
    piVar4 = param_1;
    piVar5 = &DAT_00dad6d0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      uVar1 = 0x40000;
    }
    else {
      iVar3 = 4;
      bVar6 = true;
      piVar4 = param_1;
      piVar5 = &DAT_00dad6e0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *piVar4 == *piVar5;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        uVar1 = 0x80000;
      }
      else {
        iVar3 = 4;
        bVar6 = true;
        piVar4 = param_1;
        piVar5 = &DAT_00dad6f0;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          uVar1 = 0x100000;
        }
        else {
          iVar3 = 4;
          bVar6 = true;
          piVar4 = param_1;
          piVar5 = &DAT_00dad6a0;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar6 = *piVar4 == *piVar5;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (bVar6);
          if (bVar6) {
            uVar1 = 0x200000;
          }
          else {
            iVar3 = 4;
            bVar6 = true;
            piVar4 = param_1;
            piVar5 = &DAT_00dad700;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar6 = *piVar4 == *piVar5;
              piVar4 = piVar4 + 1;
              piVar5 = piVar5 + 1;
            } while (bVar6);
            if (bVar6) {
              uVar1 = 4;
            }
            else {
              iVar3 = 4;
              bVar6 = true;
              piVar4 = param_1;
              piVar5 = &DAT_00dad670;
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar6 = *piVar4 == *piVar5;
                piVar4 = piVar4 + 1;
                piVar5 = piVar5 + 1;
              } while (bVar6);
              if (bVar6) {
                uVar1 = 0x10000;
              }
              else {
                bVar6 = true;
                iVar3 = 4;
                piVar4 = &DAT_00dad680;
                do {
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  bVar6 = *param_1 == *piVar4;
                  param_1 = param_1 + 1;
                  piVar4 = piVar4 + 1;
                } while (bVar6);
                uVar1 = !bVar6 - 1 & 2;
              }
            }
          }
        }
      }
    }
  }
  if ((char)uVar1 == '\0') {
    if ((((uVar1 & 0x3f0000) != 0) && (uVar1 == 0x10000)) && ((param_2 & 0x7fffffff) < 0x1a)) {
                    /* WARNING: Could not recover jumptable at 0x00c47e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(&DAT_00c484dc + param_2 * 4))();
      return uVar2;
    }
  }
  else if ((uVar1 == 2) && ((param_2 & 0x7fffffff) < 0x17)) {
                    /* WARNING: Could not recover jumptable at 0x00c47ac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&PTR_LAB_00c48480)[param_2])();
    return uVar2;
  }
  return 0;
}


//// FUNCTION FUN_00c48570 @ 00c48570 ////

void FUN_00c48570(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  do {
    if (param_1 == (int *)0x0) {
      return;
    }
    if (*param_1 != 0) {
      if (*param_1 == 1) {
        switch(param_1[1]) {
        case 1:
          uVar2 = 1;
          piVar1 = &DAT_00dad680;
          break;
        case 2:
          uVar2 = 2;
          piVar1 = &DAT_00dad680;
          break;
        case 3:
          uVar2 = 3;
          piVar1 = &DAT_00dad680;
          break;
        case 4:
          uVar2 = 4;
          piVar1 = &DAT_00dad680;
          break;
        case 5:
          uVar2 = 5;
          piVar1 = &DAT_00dad680;
          break;
        case 6:
          uVar2 = 6;
          piVar1 = &DAT_00dad680;
          break;
        case 7:
          uVar2 = 7;
          piVar1 = &DAT_00dad680;
          break;
        case 8:
          uVar2 = 8;
          piVar1 = &DAT_00dad680;
          break;
        case 9:
          uVar2 = 9;
          piVar1 = &DAT_00dad680;
          break;
        case 10:
          uVar2 = 10;
          piVar1 = &DAT_00dad680;
          break;
        case 0xb:
          uVar2 = 0xb;
          piVar1 = &DAT_00dad680;
          break;
        case 0xc:
          uVar2 = 0xc;
          piVar1 = &DAT_00dad680;
          break;
        case 0xd:
          uVar2 = 0xd;
          piVar1 = &DAT_00dad680;
          break;
        case 0xe:
          uVar2 = 0xe;
          piVar1 = &DAT_00dad680;
          break;
        case 0xf:
          uVar2 = 0xf;
          piVar1 = &DAT_00dad680;
          break;
        case 0x10:
          uVar2 = 0x10;
          piVar1 = &DAT_00dad680;
          break;
        case 0x11:
          uVar2 = 0x11;
          piVar1 = &DAT_00dad680;
          break;
        case 0x12:
          uVar2 = 0x12;
          piVar1 = &DAT_00dad680;
          break;
        case 0x13:
          uVar2 = 0x13;
          piVar1 = &DAT_00dad680;
          break;
        case 0x14:
          uVar2 = 0x14;
          piVar1 = &DAT_00dad680;
          break;
        case 0x15:
          uVar2 = 0x15;
          piVar1 = &DAT_00dad680;
          break;
        case 0x16:
          uVar2 = 0x16;
          piVar1 = &DAT_00dad680;
          break;
        default:
          goto switchD_00c485bf_default;
        }
        goto LAB_00c4891f;
      }
      goto switchD_00c485bf_default;
    }
    switch(param_1[1]) {
    case 1:
      uVar2 = 1;
      break;
    case 2:
      uVar2 = 2;
      break;
    case 3:
      FUN_00c46150(&DAT_00dad670,0x19);
      FUN_00c46150(&DAT_00dad670,3);
      goto LAB_00c48916;
    case 4:
      uVar2 = 4;
      break;
    case 5:
      uVar2 = 5;
      break;
    case 6:
      uVar2 = 6;
      break;
    case 7:
      uVar2 = 7;
      break;
    case 8:
      uVar2 = 8;
      break;
    case 9:
      uVar2 = 9;
      break;
    case 10:
      uVar2 = 10;
      break;
    case 0xb:
      uVar2 = 0xb;
      break;
    case 0xc:
      uVar2 = 0xc;
      break;
    case 0xd:
      uVar2 = 0xd;
      break;
    case 0xe:
      uVar2 = 0xe;
      break;
    case 0xf:
      uVar2 = 0xf;
      break;
    case 0x10:
      uVar2 = 0x10;
      break;
    case 0x11:
      uVar2 = 0x11;
      break;
    case 0x12:
      uVar2 = 0x12;
      break;
    case 0x13:
      uVar2 = 0x13;
      break;
    case 0x14:
      uVar2 = 0x14;
      break;
    case 0x15:
      uVar2 = 0x15;
      break;
    case 0x16:
      uVar2 = 0x16;
      break;
    case 0x17:
      uVar2 = 0x17;
      break;
    case 0x18:
      uVar2 = 0x18;
      break;
    case 0x19:
LAB_00c48916:
      uVar2 = 0x19;
      break;
    default:
      goto switchD_00c485bf_default;
    }
    piVar1 = &DAT_00dad670;
LAB_00c4891f:
    FUN_00c46150(piVar1,uVar2);
switchD_00c485bf_default:
    param_1 = (int *)param_1[0x25];
  } while( true );
}


//// FUNCTION FUN_00c48a50 @ 00c48a50 ////

int FUN_00c48a50(uint param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = -4;
  if ((param_4 != (int *)0x0) && (iVar1 = FUN_00c7b190((void *)param_4[0x7c],param_1), iVar1 == 0))
  {
    FUN_00c48570(param_4);
  }
  return iVar1;
}


//// FUNCTION FUN_00c48aa0 @ 00c48aa0 ////

int FUN_00c48aa0(uint param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if ((param_1 & 0x7fffffff) < 0x1c) {
                    /* WARNING: Could not recover jumptable at 0x00c48ac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(&PTR_LAB_00c49320)[param_1])();
    return iVar1;
  }
  iVar1 = -4;
  if (param_2 != 0) {
    iVar1 = FUN_00c7b190(*(void **)(param_2 + 0x1f0),param_1);
    if (iVar1 == 0) {
      FUN_00c48570(param_4);
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00c49390 @ 00c49390 ////

int * __fastcall FUN_00c49390(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int *local_74;
  uint local_70 [28];
  
  puVar2 = local_70;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[7] = 0xfffffc18;
  local_70[8] = 0xffffff9c;
  local_70[9] = 0;
  local_70[10] = 0x3fbeb852;
  local_70[0xb] = 0x3f547ae1;
  local_70[0xc] = 0x3f800000;
  local_70[0xd] = 0xfffff5d6;
  local_70[0xe] = 0x3be56042;
  local_70[0xf] = 200;
  local_70[0x10] = 0x3c343958;
  local_70[0x11] = 0x40f00000;
  local_70[0x12] = 0x3f800000;
  local_70[0x13] = 0x3f800000;
  local_70[0x14] = 0x3e800000;
  local_70[0x15] = 0;
  local_70[0x16] = 0x3e800000;
  local_70[0x17] = 0;
  local_70[0x18] = 5000;
  local_70[0x19] = 0xfa;
  local_70[0x1a] = 0;
  local_70[0x1b] = 0xfffffffb;
  puVar3 = (uint *)(param_1 + 8);
  for (iVar1 = 0x1b; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  local_74 = (int *)FUN_00c44e40(param_1);
  if (local_74 == (int *)0x0) {
    local_70[0] = 0xffffd8f0;
    FUN_00c7bc10(*(void **)(param_1 + 0xe4),0,5,local_70,4,&local_74);
    FUN_00c48570(local_74);
    local_74 = (int *)0x0;
  }
  return local_74;
}


//// FUNCTION FUN_00c494d0 @ 00c494d0 ////

int __thiscall FUN_00c494d0(void *this,int *param_1,uint param_2,uint *param_3,uint param_4)

{
  int iVar1;
  undefined4 *this_00;
  
  iVar1 = 0;
  if (*(int *)((int)this + 0xe8) == 0) {
    if (*(int *)((int)this + 4) == 0) {
      this_00 = FUN_00c38a30(&DAT_010da230);
      *(undefined4 **)((int)this + 4) = this_00;
      FUN_00c62450(this_00,(undefined4 *)((int)this + 8));
      FUN_00c62930(*(int *)((int)this + 4));
    }
    param_1 = (int *)0x0;
    iVar1 = FUN_00c7bc10(*(void **)((int)this + 0xe4),0,param_2,param_3,param_4,&param_1);
    FUN_00c48570(param_1);
  }
  else if (*(int *)((int)this + 0xe8) == 1) {
    iVar1 = FUN_00be03a0(DAT_010da234);
    return iVar1;
  }
  return iVar1;
}


//// FUNCTION FUN_00c49620 @ 00c49620 ////

float10 __cdecl FUN_00c49620(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fscale((float10)1,ROUND((float10)3.321928 * (float10)param_1));
  fVar2 = (float10)f2xm1((float10)3.321928 * (float10)param_1 -
                         (float10)(float)ROUND((float10)3.321928 * (float10)param_1));
  return (float10)(float)((fVar2 + (float10)1.0) * fVar1);
}


//// FUNCTION FUN_00c49740 @ 00c49740 ////

undefined4 * __fastcall FUN_00c49740(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d052d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c101c0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00da6ce8;
  FUN_00c4ac10(param_1 + 0x15);
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[0x3d] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c497b0 @ 00c497b0 ////

undefined4 __thiscall FUN_00c497b0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  uint uVar3;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d052fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  local_10 = this;
  FUN_00c37f20(&DAT_010da230,(undefined4 *)((int)this + 0xdc),(undefined4 *)((int)this + 0xe0));
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar3 = *(uint *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x3f800000;
  *(undefined4 *)((int)this + 0x20) = 0x3f800000;
  *(undefined4 *)((int)this + 0x10) = 0x100000;
  *(undefined4 *)((int)this + 0xf0) = 0;
  if ((uVar3 & 0x2000) == 0) {
LAB_00c49910:
    ExceptionList = local_c;
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  *(undefined4 *)((int)this + 0x10) = 0x120000;
  if ((DAT_010da248 == 0) && (puVar1 = FUN_00c38b60(0x10da230), puVar1 == (undefined4 *)0x0)) {
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = FUN_00c0ef90(0x228);
  *(int *)((int)this + 0xf4) = iVar2;
  if (iVar2 != 0) {
    this_00 = (void *)FUN_00c0ef90(0x3c0);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00c7cd00(this_00,*(int *)(DAT_010da248 + 0xe4),0,0,1,&local_10);
    }
    *(undefined4 **)((int)this + 0xf8) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)((int)this + 0xf4);
      for (iVar2 = 0x8a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      uVar3 = *(uint *)((int)this + 0xf8);
      *(uint *)(*(int *)((int)this + 0xf4) + 0x1f0) = uVar3;
      *(void **)(*(int *)((int)this + 0xf4) + 0x21c) = this;
      goto LAB_00c49910;
    }
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00c49930 @ 00c49930 ////

void __thiscall FUN_00c49930(void *this,float param_1)

{
  float10 fVar1;
  int iVar2;
  
  if (*(float *)((int)this + 0x18) == param_1) {
    return;
  }
  *(float *)((int)this + 0x18) = param_1;
  if (param_1 != 0.0) {
    fVar1 = (float10)log2((float10)param_1);
    iVar2 = (int)ROUND((float)((float10)0.3010299956639812 * fVar1 * (float10)2000.0));
    if (-0x2711 < iVar2) goto LAB_00c49985;
  }
  iVar2 = -10000;
LAB_00c49985:
  *(int *)((int)this + 0x1c) = iVar2;
  *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 2;
  return;
}


//// FUNCTION FUN_00c499c0 @ 00c499c0 ////

void __thiscall FUN_00c499c0(void *this,float param_1)

{
  if (*(float *)((int)this + 0x20) != param_1) {
    *(float *)((int)this + 0x20) = param_1;
    *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 4;
  }
  return;
}


//// FUNCTION FUN_00c499e0 @ 00c499e0 ////

void __thiscall FUN_00c499e0(void *this,float *param_1)

{
  float *pfVar1;
  
  if (param_1 == (float *)0x0) {
    if (*(int *)((int)this + 0x2c) != 0) {
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 8;
      return;
    }
  }
  else {
    pfVar1 = *(float **)((int)this + 0x2c);
    if (pfVar1 == (float *)0x0) {
      *(float **)((int)this + 0x2c) = (float *)((int)this + 0x7c);
      *(float *)((int)this + 0x7c) = *param_1;
      *(float *)((int)this + 0x80) = param_1[1];
      *(float *)((int)this + 0x84) = param_1[2];
      *(float *)((int)this + 0x88) = param_1[3];
      *(float *)((int)this + 0x8c) = param_1[4];
      *(float *)((int)this + 0x90) = param_1[5];
      *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 8;
      return;
    }
    if ((((*pfVar1 != *param_1) || (pfVar1[1] != param_1[1])) || (pfVar1[2] != param_1[2])) ||
       (((*pfVar1 != *param_1 || (pfVar1[4] != param_1[4])) || (pfVar1[5] != param_1[5])))) {
      *pfVar1 = *param_1;
      pfVar1[1] = param_1[1];
      pfVar1[2] = param_1[2];
      pfVar1[3] = param_1[3];
      pfVar1[4] = param_1[4];
      pfVar1[5] = param_1[5];
      *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 8;
    }
  }
  return;
}


//// FUNCTION FUN_00c49cd0 @ 00c49cd0 ////

void __fastcall FUN_00c49cd0(int param_1)

{
  undefined4 local_14 [5];
  
  if (*(int *)(param_1 + 0xd4) != 0) {
    FUN_00c4acb0((void *)(param_1 + 0x54),local_14);
    (**(code **)(param_1 + 0xd4))(param_1,local_14,*(undefined4 *)(param_1 + 0xd8));
  }
  return;
}


//// FUNCTION FUN_00c49d50 @ 00c49d50 ////

void __thiscall FUN_00c49d50(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0x50) + 0x30))(param_1,param_2);
  return;
}


//// FUNCTION FUN_00c49d70 @ 00c49d70 ////

uint __thiscall FUN_00c49d70(void *this,int param_1,byte param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = ~*(uint *)(param_3 + 8) & *(uint *)((int)this + 0xc);
  if ((param_1 == 0) || ((*(uint *)(param_1 + 0x2c) >> 2 & 1) == 0)) {
    bVar1 = false;
    if (uVar2 != 0) goto LAB_00c49def;
  }
  else {
    bVar1 = true;
    if (uVar2 != 0) {
      uVar2 = FUN_00c37ce0(&DAT_010da230,-0xe);
      goto LAB_00c49da5;
    }
  }
  if (param_1 != 0) {
    if ((((param_2 & 8) != 0) && ((*(uint *)(param_1 + 0x2c) >> 2 & 1) == 0)) &&
       ((param_2 & 0x10) == 0)) goto LAB_00c49def;
    puVar3 = (uint *)FUN_00c193f0(param_1);
    if ((*puVar3 & ~*(uint *)(param_3 + 0xc)) != 0) goto LAB_00c49def;
  }
  if (*(int *)(param_3 + 4) != 0) {
    return CONCAT31((int3)((uint)*(int *)(param_3 + 4) >> 8),1);
  }
  uVar2 = 0;
  if (bVar1) {
LAB_00c49da5:
    return uVar2 & 0xffffff00;
  }
LAB_00c49def:
  return CONCAT31((int3)((uint)*(int *)(param_4 + 4) >> 8),*(int *)(param_4 + 4) != 0);
}


//// FUNCTION FUN_00c49e00 @ 00c49e00 ////

void __thiscall FUN_00c49e00(void *this,int *param_1,int *param_2,int *param_3)

{
  if (param_3 == (int *)0x0) {
    if (*param_1 != 0) {
      *param_1 = 0;
      *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 0x80;
      return;
    }
  }
  else {
    if (*param_1 == 0) {
      *param_1 = (int)param_2;
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 0x80;
      return;
    }
    if ((*param_2 != *param_3) || ((float)param_2[1] != (float)param_3[1])) {
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 0x80;
    }
  }
  return;
}


//// FUNCTION FUN_00c49e80 @ 00c49e80 ////

void __thiscall FUN_00c49e80(void *this,int *param_1,int *param_2,int *param_3)

{
  if (param_3 == (int *)0x0) {
    if (*param_1 != 0) {
      *param_1 = 0;
      *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 0x100;
      return;
    }
  }
  else {
    if (*param_1 == 0) {
      *param_1 = (int)param_2;
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 0x100;
      return;
    }
    if (((*param_2 != *param_3) || ((float)param_2[1] != (float)param_3[1])) ||
       ((float)param_2[2] != (float)param_3[2])) {
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 0x100;
    }
  }
  return;
}


//// FUNCTION FUN_00c49f10 @ 00c49f10 ////

uint __fastcall FUN_00c49f10(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  if ((int *)param_1[0x14] != (int *)0x0) {
    uVar2 = (**(code **)(*(int *)param_1[0x14] + 0x10))();
    if ((char)uVar2 != '\0') {
      return uVar2 & 0xffffff00;
    }
  }
  cVar1 = (**(code **)(*param_1 + 4))();
  uVar2 = DAT_00ea7a50;
  if (cVar1 == '\0') {
    uVar2 = DAT_00ea7a38;
  }
  return CONCAT31((int3)(-(~uVar2 & param_1[3]) >> 8),'\x01' - ((~uVar2 & param_1[3]) != 0));
}


//// FUNCTION FUN_00c49f50 @ 00c49f50 ////

void __thiscall FUN_00c49f50(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0x7f;
  uVar1 = *(uint *)((int)this + 0x10) & 0x7f;
  if (uVar2 != uVar1) {
    if ((*(uint *)((int)this + 0x10) >> 9 & 1) == 0) {
      if (uVar2 == 0) {
        if (((uVar1 != 8) && (uVar1 != 1)) && (uVar1 != 0x10)) {
          FUN_00be0340(DAT_010da234,*(int **)((int)this + 0x50));
        }
        if ((*(uint *)((int)this + 0x10) >> 0x11 & 1) == 0) {
          FUN_00c0f350(DAT_010da234,*(int **)((int)this + 0x50));
          *(undefined4 *)((int)this + 0x50) = 0;
        }
      }
      else if (uVar2 == 2) {
        FUN_00be02e0(DAT_010da234,*(int **)((int)this + 0x50));
      }
      else if (((uVar2 == 8) && (uVar1 != 0)) && ((uVar1 != 1 && (uVar1 != 0x10)))) {
        FUN_00be0340(DAT_010da234,*(int **)((int)this + 0x50));
      }
    }
    uVar1 = *(uint *)((int)this + 0x10);
    *(uint *)((int)this + 0x10) = uVar1 & 0xffffff80 | uVar2;
    if (uVar2 == 0) {
      *(uint *)((int)this + 0x10) = uVar1 & 0xfffffe80;
    }
    if (*(code **)((int)this + 0xdc) != (code *)0x0) {
      (**(code **)((int)this + 0xdc))
                (this,*(uint *)((int)this + 0x10) & 0xffff,*(undefined4 *)((int)this + 0xe0));
    }
  }
  return;
}


//// FUNCTION FUN_00c4a0a0 @ 00c4a0a0 ////

void __fastcall FUN_00c4a0a0(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xffff) != 0) {
    uVar3 = uVar1 & 0x7f;
    if ((((uVar3 != 8) && (uVar3 != 0)) && (uVar3 != 1)) || ((uVar1 >> 9 & 1) != 0)) {
      FUN_00be0340(DAT_010da234,*(int **)(param_1 + 0x50));
    }
    piVar2 = *(int **)(param_1 + 0x50);
    if (piVar2 != (int *)0x0) {
      if ((*(uint *)(param_1 + 0x10) >> 0x11 & 1) == 0) {
        FUN_00c0f350(DAT_010da234,piVar2);
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      else {
        (**(code **)(*piVar2 + 0x2c))(0,0);
      }
    }
    *(undefined2 *)(param_1 + 0x10) = 0;
    if (*(code **)(param_1 + 0xdc) != (code *)0x0) {
      (**(code **)(param_1 + 0xdc))
                (param_1,*(uint *)(param_1 + 0x10) & 0xffff,*(undefined4 *)(param_1 + 0xe0));
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return;
}


//// FUNCTION FUN_00c4a160 @ 00c4a160 ////

void __thiscall FUN_00c4a160(void *this,int *param_1)

{
  FUN_00c49e00(this,(int *)((int)this + 0x24),(int *)((int)this + 0x3c),param_1);
  return;
}


//// FUNCTION FUN_00c4a180 @ 00c4a180 ////

void __thiscall FUN_00c4a180(void *this,int *param_1)

{
  FUN_00c49e80(this,(int *)((int)this + 0x28),(int *)((int)this + 0x44),param_1);
  return;
}


//// FUNCTION FUN_00c4a1a0 @ 00c4a1a0 ////

void __fastcall FUN_00c4a1a0(int param_1)

{
  undefined4 local_14 [5];
  
  FUN_00c4a0a0(param_1);
  FUN_00c4ad90((int *)(param_1 + 0x54));
  if (*(int *)(param_1 + 0xd4) != 0) {
    FUN_00c4acb0((int *)(param_1 + 0x54),local_14);
    (**(code **)(param_1 + 0xd4))(param_1,local_14,*(undefined4 *)(param_1 + 0xd8));
  }
  return;
}


//// FUNCTION FUN_00c4a1f0 @ 00c4a1f0 ////

void __fastcall FUN_00c4a1f0(int param_1)

{
  int *this;
  undefined4 local_14 [5];
  
  FUN_00c4a0a0(param_1);
  this = (int *)(param_1 + 0x54);
  FUN_00c4ad90(this);
  if (*(int *)(param_1 + 0xd4) != 0) {
    FUN_00c4acb0(this,local_14);
    (**(code **)(param_1 + 0xd4))(param_1,local_14,*(undefined4 *)(param_1 + 0xd8));
  }
  FUN_00c4af10(this);
  return;
}


//// FUNCTION FUN_00c4a2d0 @ 00c4a2d0 ////

void __thiscall FUN_00c4a2d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xf0) = param_1;
  if (*(int **)((int)this + 0x50) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c4a2e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)((int)this + 0x50) + 0x38))();
    return;
  }
  return;
}


//// FUNCTION FUN_00c4a2f0 @ 00c4a2f0 ////

uint __fastcall FUN_00c4a2f0(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_1[0x14] != 0) {
    return CONCAT31((int3)((uint)param_1[0x14] >> 8),1);
  }
  iVar5 = param_1[0x1e];
  if (iVar5 == 0) {
    if ((param_1[0x17] == 0) || (param_1[0x17] == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1[0x15] + param_1[0x19] * 4);
    }
  }
  cVar1 = (**(code **)(*param_1 + 4))();
  puVar4 = &DAT_00ea7a78;
  if (cVar1 == '\0') {
    puVar4 = &DAT_00ea7a60;
  }
  cVar1 = (**(code **)(*param_1 + 4))();
  puVar2 = &DAT_00ea7a48;
  if (cVar1 == '\0') {
    puVar2 = &DAT_00ea7a30;
  }
  uVar3 = FUN_00c49d70(param_1,iVar5,(byte)DAT_00ea7aa4,(int)puVar2,(int)puVar4);
  return uVar3;
}


//// FUNCTION FUN_00c4a360 @ 00c4a360 ////

void __thiscall FUN_00c4a360(void *this,undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0x2c))(param_1,param_2);
  if (cVar1 != '\0') {
    uVar2 = *(uint *)((int)this + 0x10) & 0x7f;
    if (uVar2 == 1) {
      FUN_00c49f50(this,0);
      return;
    }
    if (uVar2 != 8) {
      if ((((*(uint *)((int)this + 0x10) >> 9 & 1) == 0) && (uVar2 != 0)) && (uVar2 != 0x10)) {
        FUN_00be0340(DAT_010da234,*(int **)((int)this + 0x50));
      }
      uVar2 = *(uint *)((int)this + 0x10);
      *(uint *)((int)this + 0x10) = uVar2 & 0xffffff88 | 8;
      if (*(code **)((int)this + 0xdc) != (code *)0x0) {
        (**(code **)((int)this + 0xdc))(this,uVar2 & 0xff88 | 8,*(undefined4 *)((int)this + 0xe0));
      }
    }
  }
  return;
}


//// FUNCTION FUN_00c4a3f0 @ 00c4a3f0 ////

void __thiscall FUN_00c4a3f0(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint local_4;
  
  uVar1 = *(uint *)((int)this + 0x10);
  local_4 = uVar1 & 0x7f;
  *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | DAT_010da2d4;
  if (local_4 == 1) {
    if (*(int *)((int)this + 0x78) == 0) {
      local_4 = (**(code **)(**(int **)((int)this + 0x50) + 0x20))(this,param_1,param_2);
    }
    else {
      local_4 = (**(code **)(**(int **)((int)this + 0x50) + 0x1c))(this);
    }
  }
  else if (local_4 == 0x10) {
    local_4 = (**(code **)(**(int **)((int)this + 0x50) + 0x28))(param_1,param_2);
  }
  if ((((local_4 & 6) != 0) || ((uVar1 & 6) != 0)) || ((*(uint *)((int)this + 0x10) >> 9 & 1) != 0))
  {
    local_4 = (**(code **)(**(int **)((int)this + 0x50) + 0x24))(this,param_1,param_2);
  }
  if (local_4 == (*(uint *)((int)this + 0x10) & 0xffff)) {
    *(undefined4 *)((int)this + 0x14) = 0;
    return;
  }
  FUN_00c49f50(this,local_4);
  if (((local_4 & 0x200) != 0) && (uVar1 = *(uint *)((int)this + 0x10), (uVar1 >> 9 & 1) == 0)) {
    *(uint *)((int)this + 0x10) = uVar1 | 0x200;
    if (*(code **)((int)this + 0xdc) != (code *)0x0) {
      (**(code **)((int)this + 0xdc))(this,uVar1 & 0xffff | 0x200,*(undefined4 *)((int)this + 0xe0))
      ;
    }
  }
  if (((local_4 == 0) && (*(int *)((int)this + 0x5c) != 0)) &&
     ((*(int *)((int)this + 0x5c) == 0 || (*(int *)((int)this + 0x6c) != 0)))) {
    FUN_00c4a1a0((int)this);
    FUN_00c49cd0((int)this);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00c4a510 @ 00c4a510 ////

int __thiscall
FUN_00c4a510(void *this,int *param_1,byte param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  bool bVar1;
  int *this_00;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = param_3;
  piVar7 = param_1;
  *param_5 = 0;
  uVar3 = ~param_3[2] & *(uint *)((int)this + 0xc);
  if ((param_1 == (int *)0x0) || (((uint)param_1[0xb] >> 2 & 1) == 0)) {
    param_3 = (int *)((uint)param_3._1_3_ << 8);
    if (uVar3 == 0) goto LAB_00c4a55d;
  }
  else {
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
    if (uVar3 != 0) {
      return -0xe;
    }
LAB_00c4a55d:
    if ((param_1 == (int *)0x0) ||
       (((((param_2 & 8) == 0 || (((uint)param_1[0xb] >> 2 & 1) != 0)) || ((param_2 & 0x10) != 0))
        && (puVar4 = (uint *)FUN_00c193f0((int)param_1), (*puVar4 & ~piVar6[3]) == 0)))) {
      bVar1 = false;
      goto LAB_00c4a590;
    }
  }
  bVar1 = true;
LAB_00c4a590:
  this_00 = DAT_010da234;
  if (!bVar1) {
    if (piVar6[1] != 0) {
      cVar2 = (**(code **)(*(int *)this + 4))();
      if (cVar2 == '\0') {
        if (((((uint)piVar7[0xb] >> 2 & 1) == 0) || (((uint)piVar7[0xb] >> 3 & 1) == 0)) ||
           ((piVar6 = (int *)FUN_00c193f0((int)piVar7), *piVar6 != 1 &&
            (piVar7 = (int *)FUN_00c193f0((int)piVar7), *piVar7 != 0x40)))) {
          iVar5 = FUN_00c0f720(this_00,this,&param_1);
        }
        else {
          iVar5 = (**(code **)(*this_00 + 8))(this,&param_1);
        }
      }
      else {
        iVar5 = FUN_00c0f790(this_00,this,&param_1);
      }
      if (iVar5 != 0) {
        return iVar5;
      }
      if (((*(int *)((int)this + 0x78) != 0) || (*(int *)((int)this + 0x5c) != 0)) &&
         (iVar5 = (**(code **)(*param_1 + 0xc))(this), iVar5 != 0)) {
        FUN_00c0f350(this_00,param_1);
        return iVar5;
      }
      *param_5 = param_1;
      return 0;
    }
    if ((char)param_3 != '\0') {
      return (uint)(*piVar6 != 0) * 2 + -0xb;
    }
  }
  if (param_4[1] == 0) {
    iVar5 = (uint)(*param_4 != 0) * 2 + -0xb;
  }
  else {
    cVar2 = (**(code **)(*(int *)this + 4))();
    if (cVar2 == '\0') {
      iVar5 = FUN_00c0f800(this_00,this,&param_1);
    }
    else {
      iVar5 = FUN_00c0f8d0(this_00,this,&param_1);
    }
    if (iVar5 == 0) {
      if (((*(int *)((int)this + 0x78) != 0) || (*(int *)((int)this + 0x5c) != 0)) &&
         (iVar5 = (**(code **)(*param_1 + 0xc))(this), iVar5 != 0)) {
        FUN_00c0f350(this_00,param_1);
        return iVar5;
      }
      *param_5 = param_1;
      return 0;
    }
  }
  return iVar5;
}


//// FUNCTION FUN_00c4a710 @ 00c4a710 ////

uint __thiscall FUN_00c4a710(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(uint *)(param_1 + 0x2c) >> 2 & 1) != 0) {
    if (*(int **)((int)this + 0x50) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0x10))();
      if (cVar1 != '\0') goto LAB_00c4a7a4;
    }
    cVar1 = (**(code **)(*(int *)this + 4))();
    uVar3 = DAT_00ea7a50;
    if (cVar1 == '\0') {
      uVar3 = DAT_00ea7a38;
    }
    if ((~uVar3 & *(uint *)((int)this + 0xc)) != 0) goto LAB_00c4a7a4;
  }
  cVar1 = (**(code **)(*(int *)this + 4))();
  if (cVar1 != '\0') {
    iVar2 = FUN_00c193f0(param_1);
    if (1 < *(uint *)(iVar2 + 4)) goto LAB_00c4a7a4;
  }
  if ((((*(byte *)((int)this + 0x12) & 1) == 0) && (*(int *)((int)this + 0x24) == 0)) &&
     (iVar2 = 0, *(int *)((int)this + 0x28) == 0)) {
LAB_00c4a7b8:
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  iVar2 = FUN_00c193f0(param_1);
  if ((*(int *)(iVar2 + 4) != 1) || ((*(byte *)((int)this + 0x12) & 1) == 0)) {
    iVar2 = FUN_00c193f0(param_1);
    if ((*(uint *)(iVar2 + 4) < 2) || ((*(byte *)((int)this + 0x12) & 1) != 0)) goto LAB_00c4a7b8;
  }
LAB_00c4a7a4:
  uVar3 = FUN_00c37ce0(&DAT_010da230,-0xe);
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00c4a7c0 @ 00c4a7c0 ////

void __fastcall FUN_00c4a7c0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x1e];
  if (iVar1 == 0) {
    if ((param_1[0x17] != 0) && (param_1[0x17] != 0)) {
      (**(code **)(*param_1 + 0x20))
                (*(undefined4 *)(param_1[0x15] + param_1[0x19] * 4),param_1 + 0x14);
      return;
    }
    iVar1 = 0;
  }
  (**(code **)(*param_1 + 0x20))(iVar1,param_1 + 0x14);
  return;
}


//// FUNCTION FUN_00c4a800 @ 00c4a800 ////

uint __thiscall FUN_00c4a800(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    FUN_00c4a1f0((int)this);
  }
  uVar1 = FUN_00c4a0a0((int)this);
  if (param_1 != 0) {
    uVar1 = FUN_00c4a710(this,param_1);
    if ((char)uVar1 == '\0') goto LAB_00c4a84a;
  }
  if (*(int *)((int)this + 0x78) != param_1) {
    if (param_1 != 0) {
      iVar2 = FUN_00c37690(param_1);
      if (iVar2 < 0) {
        uVar1 = FUN_00c37ce0(&DAT_010da230,iVar2);
LAB_00c4a84a:
        return uVar1 & 0xffffff00;
      }
      uVar1 = FUN_00c37510(param_1);
      if ((char)uVar1 == '\0') goto LAB_00c4a84a;
    }
    if (*(int *)((int)this + 0x78) != 0) {
      uVar1 = FUN_00c37530(*(int *)((int)this + 0x78));
    }
    *(int *)((int)this + 0x78) = param_1;
    if (*(int **)((int)this + 0x50) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)((int)this + 0x50) + 0xc))(this);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = FUN_00c0f350(DAT_010da234,*(int **)((int)this + 0x50));
        *(undefined4 *)((int)this + 0x50) = 0;
      }
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_00c4a8a0 @ 00c4a8a0 ////

uint __thiscall FUN_00c4a8a0(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    FUN_00c4a1f0((int)this);
  }
  FUN_00c4a0a0((int)this);
  if (*(int *)((int)this + 0x78) != 0) {
    FUN_00c37530(*(int *)((int)this + 0x78));
    *(undefined4 *)((int)this + 0x78) = 0;
    if (*(int **)((int)this + 0x50) != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0xc))(this);
      if (iVar1 != 0) {
        FUN_00c0f350(DAT_010da234,*(int **)((int)this + 0x50));
        *(undefined4 *)((int)this + 0x50) = 0;
      }
    }
  }
  uVar2 = FUN_00c4ad20((int *)((int)this + 0x54),param_1);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  if (*(int **)((int)this + 0x50) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0xc))(this);
    uVar2 = 0;
    if (iVar1 != 0) {
      FUN_00c4af10((int *)((int)this + 0x54));
      uVar2 = FUN_00c37ce0(&DAT_010da230,iVar1);
      return uVar2 & 0xffffff00;
    }
  }
  *(undefined4 *)((int)this + 0xd4) = param_2;
  *(undefined4 *)((int)this + 0xd8) = param_3;
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION FUN_00c4a960 @ 00c4a960 ////

uint __thiscall FUN_00c4a960(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00c4a710(this,param_1);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_00c37690(param_1);
    if (-1 < iVar2) {
      uVar1 = FUN_00c4ae20((void *)((int)this + 0x54),param_1,param_2,param_3);
      return uVar1;
    }
    uVar1 = FUN_00c37ce0(&DAT_010da230,iVar2);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00c4a9b0 @ 00c4a9b0 ////

int __thiscall FUN_00c4a9b0(void *this,byte param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x10) & 0x7f;
  if (uVar3 == 0) {
    if ((*(int *)((int)this + 0x50) == 0) && (iVar2 = FUN_00c4a7c0(this), iVar2 != 0)) {
      return iVar2;
    }
    if ((*(uint *)((int)this + 0x10) & 0x7f) == 1) goto LAB_00c4aa12;
    uVar1 = *(uint *)((int)this + 0x10) & 0xffffff81 | 1;
  }
  else {
    if (uVar3 != 8) goto LAB_00c4aa12;
    uVar1 = *(uint *)((int)this + 0x10) & 0xffffff90 | 0x10;
  }
  *(uint *)((int)this + 0x10) = uVar1;
  if (*(code **)((int)this + 0xdc) != (code *)0x0) {
    (**(code **)((int)this + 0xdc))(this,uVar1 & 0xffff,*(undefined4 *)((int)this + 0xe0));
  }
LAB_00c4aa12:
  uVar1 = *(uint *)((int)this + 0x10);
  if (param_1 != ((byte)(uVar1 >> 8) & 1)) {
    if (param_1 == 0) {
      uVar1 = uVar1 & 0xfffffeff;
    }
    else {
      uVar1 = uVar1 | 0x100;
    }
    *(uint *)((int)this + 0x10) = uVar1;
    if (uVar3 != 0) {
      *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 1;
    }
    if (*(code **)((int)this + 0xdc) != (code *)0x0) {
      (**(code **)((int)this + 0xdc))
                (this,*(uint *)((int)this + 0x10) & 0xffff,*(undefined4 *)((int)this + 0xe0));
    }
  }
  return 0;
}


//// FUNCTION FUN_00c4ab50 @ 00c4ab50 ////

void __fastcall FUN_00c4ab50(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    param_1[0x37] = 0;
    if (param_1[0x17] != 0) {
      FUN_00c4a1f0((int)param_1);
    }
    FUN_00c4a0a0((int)param_1);
    if (param_1[0x1e] != 0) {
      FUN_00c37530(param_1[0x1e]);
      param_1[0x1e] = 0;
      if ((int *)param_1[0x14] != (int *)0x0) {
        iVar2 = (**(code **)(*(int *)param_1[0x14] + 0xc))(param_1);
        if (iVar2 != 0) {
          FUN_00c0f350(DAT_010da234,(int *)param_1[0x14]);
          param_1[0x14] = 0;
        }
      }
    }
    if ((int *)param_1[0x14] != (int *)0x0) {
      FUN_00c0f350(DAT_010da234,(int *)param_1[0x14]);
      param_1[0x14] = 0;
    }
    param_1[3] = -1;
  }
  if ((param_1[3] & 0x2000U) != 0) {
    if ((DAT_010da248 != 0) && (param_1[0x3e] != 0)) {
      FUN_00c75010(*(void **)(DAT_010da248 + 0xe4),param_1[0x3e]);
    }
    if (param_1[0x3d] != 0) {
      FUN_00c0efa0(param_1[0x3d]);
      param_1[0x3d] = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00c4ac10 @ 00c4ac10 ////

void __fastcall FUN_00c4ac10(undefined4 *param_1)

{
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}


//// FUNCTION FUN_00c4ac30 @ 00c4ac30 ////

uint __thiscall FUN_00c4ac30(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int *)this + param_1 * 4);
  if (*(int *)(*(int *)this + param_1 * 4) == 0) {
    return (uint)piVar1 & 0xffffff00;
  }
  *(int *)((int)this + 0x14) = *piVar1;
  FUN_00c37530(*piVar1);
  *(undefined4 *)(*(int *)this + param_1 * 4) = 0;
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar2 + param_1 * 8) = 0;
  *(undefined4 *)(iVar2 + 4 + param_1 * 8) = 0;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_00c4ac80 @ 00c4ac80 ////

undefined4 __thiscall FUN_00c4ac80(void *this,int param_1)

{
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}


//// FUNCTION FUN_00c4ac90 @ 00c4ac90 ////

undefined8 __thiscall FUN_00c4ac90(void *this,int param_1)

{
  return CONCAT44(*(undefined4 *)(*(int *)((int)this + 4) + 4 + param_1 * 8),
                  *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 8));
}


//// FUNCTION FUN_00c4acb0 @ 00c4acb0 ////

void __thiscall FUN_00c4acb0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 8);
  param_1[4] = *(undefined4 *)((int)this + 0x14);
  param_1[3] = *(undefined4 *)((int)this + 0x10);
  param_1[1] = *(undefined4 *)this;
  param_1[2] = *(undefined4 *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00c4ace0 @ 00c4ace0 ////

int __fastcall FUN_00c4ace0(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + param_1[4] * 4) != 0) {
    FUN_00c4ac30(param_1,param_1[4]);
    iVar1 = param_1[4];
    param_1[4] = iVar1 + 1;
    if (param_1[2] == iVar1 + 1) {
      param_1[4] = 0;
    }
  }
  return param_1[4];
}


//// FUNCTION FUN_00c4ad20 @ 00c4ad20 ////

uint __thiscall FUN_00c4ad20(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_00c0ef90(param_1 * 0xc);
  *(undefined4 **)this = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = FUN_00c37ce0(&DAT_010da230,-5);
    return uVar2 & 0xffffff00;
  }
  *(undefined4 **)((int)this + 4) = puVar1 + param_1;
  for (uVar2 = param_1 * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 1;
}


//// FUNCTION FUN_00c4ad90 @ 00c4ad90 ////

void __fastcall FUN_00c4ad90(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[2] != 0) {
    do {
      iVar1 = *(int *)(*param_1 + uVar2 * 4);
      if (iVar1 != 0) {
        param_1[5] = iVar1;
        FUN_00c37530(*(int *)(*param_1 + uVar2 * 4));
        *(undefined4 *)(*param_1 + uVar2 * 4) = 0;
        iVar1 = param_1[1];
        *(undefined4 *)(iVar1 + uVar2 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + uVar2 * 8) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[2]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00c4adf0 @ 00c4adf0 ////

uint __thiscall FUN_00c4adf0(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  if ((uVar1 != 0) && (param_1 < uVar1)) {
    return CONCAT31((int3)((uint)*(int *)this >> 8),*(int *)(*(int *)this + param_1 * 4) != 0);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00c4ae20 @ 00c4ae20 ////

uint __thiscall FUN_00c4ae20(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int local_1c [7];
  
  piVar2 = (int *)FUN_00c193f0(param_1);
  piVar5 = local_1c;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar5 = piVar5 + 1;
  }
  if ((*(int *)((int)this + 8) == 0) || (*(int *)((int)this + 0x18) != 0)) {
    if ((*(int *)((int)this + 0x1c) != local_1c[1]) || (*(int *)((int)this + 0x18) != local_1c[0]))
    {
      uVar3 = FUN_00c37ce0(&DAT_010da230,-0xe);
      return uVar3 & 0xffffff00;
    }
  }
  else {
    *(int *)((int)this + 0x18) = local_1c[0];
    *(int *)((int)this + 0x1c) = local_1c[1];
    *(int *)((int)this + 0x20) = local_1c[2];
  }
  if (*(int *)(*(int *)this + *(int *)((int)this + 0xc) * 4) == 0) {
    uVar3 = FUN_00c37510(param_1);
    if ((char)uVar3 != '\0') {
      *(int *)(*(int *)this + *(int *)((int)this + 0xc) * 4) = param_1;
      iVar4 = *(int *)((int)this + 0xc);
      iVar1 = *(int *)((int)this + 4);
      *(undefined4 *)(iVar1 + iVar4 * 8) = param_2;
      *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = param_3;
      iVar4 = *(int *)((int)this + 0xc) + 1;
      *(int *)((int)this + 0xc) = iVar4;
      if (*(int *)((int)this + 8) == iVar4) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
  }
  else {
    uVar3 = FUN_00c37ce0(&DAT_010da230,-0xf);
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00c4af10 @ 00c4af10 ////

void __fastcall FUN_00c4af10(int *param_1)

{
  if (param_1[2] != 0) {
    FUN_00c4ad90(param_1);
    FUN_00c0efa0(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


//// FUNCTION FUN_00c4af70 @ 00c4af70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c4af70(void)

{
  DWORD DVar1;
  _OSVERSIONINFOA local_94;
  
  DVar1 = GetVersion();
  _DAT_010daa00 = DVar1 & 0xff;
  DAT_010daa04 = DVar1 >> 8 & 0xff;
  if (DVar1 < 0x80000000) {
    _DAT_010da9fc = DVar1 >> 0x10;
    if (_DAT_010daa00 == 3) {
      DAT_010da9f6 = 1;
      DAT_010da9f0 = 1;
      return;
    }
    if (_DAT_010daa00 == 4) {
      DAT_010da9f7 = 1;
      DAT_010da9f0 = 1;
      return;
    }
    if (_DAT_010daa00 == 5) {
      if (DAT_010daa04 == 0) {
        DAT_010da9f8 = 1;
        DAT_010da9f0 = 1;
        return;
      }
      if (DAT_010daa04 == 1) {
        DAT_010da9f9 = 1;
        DAT_010da9f0 = 1;
        return;
      }
    }
  }
  else {
    if (_DAT_010daa00 < 4) {
      DAT_010da9f1 = 1;
      DAT_010da9f0 = 1;
      _DAT_010da9fc = DVar1 >> 0x10 & 0x7fff;
      return;
    }
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    _DAT_010da9fc = (uint)(ushort)local_94.dwBuildNumber;
    if (DAT_010daa04 == 0) {
      DAT_010da9f2 = 1;
      DAT_010da9f0 = 1;
      return;
    }
    if ((DAT_010daa04 < 0xb) && (_DAT_010da9fc < 0x8af)) {
      if (_DAT_010da9fc == 0x8ae) {
        DAT_010da9f4 = 1;
        DAT_010da9f0 = 1;
        return;
      }
      DAT_010da9f3 = 1;
      DAT_010da9f0 = 1;
      return;
    }
    DAT_010da9f5 = 1;
  }
  DAT_010da9f0 = 1;
  return;
}


//// FUNCTION FUN_00c4b0c0 @ 00c4b0c0 ////

undefined4 __fastcall FUN_00c4b0c0(undefined4 param_1)

{
  if (DAT_010da9f0 == '\0') {
    FUN_00c4af70();
  }
  return param_1;
}


//// FUNCTION FUN_00c4b0e0 @ 00c4b0e0 ////

void __fastcall FUN_00c4b0e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dacaf0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00c4b120 @ 00c4b120 ////

bool __thiscall FUN_00c4b120(void *this,HKEY param_1,LPCSTR param_2,REGSAM param_3)

{
  LONG LVar1;
  
  LVar1 = RegCreateKeyExA((HKEY)param_1,param_2,0,"",0,param_3,(LPSECURITY_ATTRIBUTES)0x0,
                          (PHKEY)((int)this + 4),(LPDWORD)0x0);
  return (bool)('\x01' - (LVar1 != 0));
}


//// FUNCTION FUN_00c4b150 @ 00c4b150 ////

void __fastcall FUN_00c4b150(int param_1)

{
  if (*(HKEY *)(param_1 + 4) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00c4b170 @ 00c4b170 ////

void __thiscall FUN_00c4b170(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_00c4b180 @ 00c4b180 ////

bool __thiscall FUN_00c4b180(void *this,LPCSTR param_1,LPBYTE param_2)

{
  LONG LVar1;
  DWORD local_4;
  
  local_4 = 4;
  LVar1 = RegQueryValueExA(*(HKEY *)((int)this + 4),param_1,(LPDWORD)0x0,(LPDWORD)&param_2,param_2,
                           &local_4);
  if ((LVar1 == 0) && (param_2 == (LPBYTE)0x4)) {
    return local_4 == 4;
  }
  return false;
}


//// FUNCTION FUN_00c4b2f0 @ 00c4b2f0 ////

void __fastcall FUN_00c4b2f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dacaf0;
  if ((HKEY)param_1[1] != (HKEY)0x0) {
    RegCloseKey((HKEY)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00c4b310 @ 00c4b310 ////

undefined4 * __thiscall ScalarDeletingDtor_00c4b310(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00dacaf0;
  if (*(HKEY *)((int)this + 4) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c4b490 @ 00c4b490 ////

void __fastcall FUN_00c4b490(int param_1)

{
  bool bVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05330;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = FUN_00bce880(param_1);
  if (bVar1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKDataReadAccessTypesCAccessWindow.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x17);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Reinitialising when there are windows dependant on this one");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00bce980(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c4b5a0 @ 00c4b5a0 ////

void __thiscall FUN_00c4b5a0(void *this,int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  LPCSTR pCVar2;
  uint uVar3;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00d05350;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00c4b490((int)this);
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 == 0) {
    *(int **)((int)this + 8) = param_1;
    *(int *)((int)this + 0xc) = param_2;
    *(undefined4 *)((int)this + 0x10) = param_3;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x10))();
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(iVar1 + 8);
    *(int *)((int)this + 0xc) = *(int *)(iVar1 + 0xc) + param_2;
    *(undefined4 *)((int)this + 0x10) = param_3;
  }
  if (*(int *)((int)this + 8) == 0) {
    ppuStack_110 = &PTR_LAB_00d9db7c;
    uStack_10c = 0;
    uStack_d = 0;
    uStack_4 = 0;
    LH_LogErrorMessage(&ppuStack_110,".\\PKDataReadAccessTypesCAccessWindow.cpp");
    LH_LogErrorMessage(&ppuStack_110,"(");
    FUN_00bbe970(0x38);
    LH_LogErrorMessage(&ppuStack_110,") : ");
    LH_LogErrorMessage(&ppuStack_110,"Null access");
    LH_LogErrorMessage(&ppuStack_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
    LH_Assert(&uStack_111,pCVar2);
    uStack_4 = 0xffffffff;
    DebugBreak();
  }
  uVar3 = (**(code **)(**(int **)((int)this + 8) + 8))();
  if (uVar3 < (uint)(*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10))) {
    ppuStack_110 = &PTR_LAB_00d9db7c;
    uStack_10c = 0;
    uStack_d = 0;
    uStack_4 = 1;
    LH_LogErrorMessage(&ppuStack_110,".\\PKDataReadAccessTypesCAccessWindow.cpp");
    LH_LogErrorMessage(&ppuStack_110,"(");
    FUN_00bbe970(0x3a);
    LH_LogErrorMessage(&ppuStack_110,") : ");
    LH_LogErrorMessage(&ppuStack_110,"Invalid access window size");
    LH_LogErrorMessage(&ppuStack_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
    LH_Assert(&uStack_111,pCVar2);
    uStack_4 = 0xffffffff;
    ppuStack_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  FUN_00bce870(*(int *)((int)this + 8));
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c4b790 @ 00c4b790 ////

void __thiscall FUN_00c4b790(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00c4b490((int)this);
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 == 0) {
    *(int **)((int)this + 8) = param_1;
    *(undefined4 *)((int)this + 0xc) = 0;
    uVar2 = (**(code **)(*param_1 + 8))();
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x10))();
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
  }
  *(undefined4 *)((int)this + 0x10) = uVar2;
  if (*(int *)((int)this + 8) != 0) {
    FUN_00bce870(*(int *)((int)this + 8));
  }
  return;
}


//// FUNCTION FUN_00c4b7f0 @ 00c4b7f0 ////

undefined4 * __fastcall FUN_00c4b7f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05362;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bce860(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00dacb84;
  param_1[2] = 0;
  thunk_FUN_00c4b490((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c4b840 @ 00c4b840 ////

undefined4 * __thiscall FUN_00c4b840(void *this,int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05374;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bce860(this);
  local_4 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_00dacb84;
  FUN_00c4b790(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c4b8a0 @ 00c4b8a0 ////

undefined4 * __thiscall FUN_00c4b8a0(void *this,int *param_1,int param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05386;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bce860(this);
  local_4 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_00dacb84;
  FUN_00c4b5a0(this,param_1,param_2,param_3);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c4b900 @ 00c4b900 ////

void * __thiscall FUN_00c4b900(void *this,int param_1)

{
  FUN_00c4b490((int)this);
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    thunk_FUN_00c4b490((int)this);
    return this;
  }
  FUN_00c4b790(this,*(int **)(param_1 + 8));
  return this;
}


//// FUNCTION FUN_00c4b930 @ 00c4b930 ////

void __fastcall FUN_00c4b930(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00dacb84;
  local_4 = 0;
  FUN_00c4b490((int)param_1);
  local_4 = 0xffffffff;
  FUN_00bce890(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c4b990 @ 00c4b990 ////

undefined4 * __thiscall ScalarDeletingDtor_00c4b990(void *this,byte param_1)

{
  FUN_00c4b930(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c4b9c0 @ 00c4b9c0 ////

void __thiscall FUN_00c4b9c0(void *this,undefined4 param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *(ulonglong *)((int)this + 0x40) = uVar1;
  *param_2 = param_1;
  *(undefined1 *)((int)this + 0x3c) = 1;
  return;
}


//// FUNCTION FUN_00c4ba10 @ 00c4ba10 ////

void __fastcall FUN_00c4ba10(int param_1)

{
  if (*(char *)(param_1 + 0x3c) != '\0') {
    (**(code **)(**(int **)(param_1 + 8) + 0x14))
              (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44),0,0);
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  return;
}


//// FUNCTION GetField_0x28_00c4ba40 @ 00c4ba40 ////

undefined4 __fastcall GetField_0x28_00c4ba40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


//// FUNCTION GetField_0x2c_00c4ba50 @ 00c4ba50 ////

undefined4 __fastcall GetField_0x2c_00c4ba50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


//// FUNCTION FUN_00c4ba60 @ 00c4ba60 ////

ulonglong FUN_00c4ba60(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_00c4bac0 @ 00c4bac0 ////

bool __fastcall FUN_00c4bac0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    return false;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8));
  return -1 < iVar1;
}


//// FUNCTION FUN_00c4bae0 @ 00c4bae0 ////

undefined4 __thiscall FUN_00c4bae0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uStack_20;
  undefined4 *puStack_1c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = param_2;
  pvVar3 = (void *)0x0;
  local_4 = 0;
  local_8 = 0;
  if (*(uint *)((int)this + 0x14) == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    return *(uint *)((int)this + 0x14) & 0xffffff00;
  }
  puStack_1c = &local_8;
  uStack_20 = 0;
  uVar2 = (**(code **)(**(int **)((int)this + 0x14) + 0x14))
                    (*(int **)((int)this + 0x14),&local_4,param_1,&param_2);
  if ((int)uVar2 < 0) {
    if (uVar2 != 0xc00d07f0) {
LAB_00c4bb40:
      return uVar2 & 0xffffff00;
    }
  }
  else if (uVar2 != 0xc00d07f0) {
    pvVar3 = operator_new(uStack_20 & 0xffff);
    uVar2 = 0;
    if (pvVar3 == (void *)0x0) goto LAB_00c4bb40;
    uVar2 = (**(code **)(**(int **)((int)this + 0x14) + 0x14))
                      (*(int **)((int)this + 0x14),&puStack_1c,param_1,&stack0xfffffff0,pvVar3,
                       &uStack_20);
  }
  *puVar1 = pvVar3;
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION FUN_00c4bb90 @ 00c4bb90 ////

undefined4 * __fastcall FUN_00c4bb90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dacbac;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  CoInitialize((LPVOID)0x0);
  return param_1;
}


//// FUNCTION FUN_00c4bbe0 @ 00c4bbe0 ////

void __fastcall FUN_00c4bbe0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d053bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00dacbac;
  piVar1 = (int *)param_1[2];
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  CoUninitialize();
  if ((void *)param_1[0x12] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x12]);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c4bc70 @ 00c4bc70 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_00c4bc70(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_828 [515];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00d053d3;
  local_14 = ExceptionList;
  local_1c = DAT_00e9a098;
  ExceptionList = &local_14;
  if (*(int *)((int)this + 0xc) == 0) {
    ExceptionList = &local_14;
    local_828[0] = operator_new(0xc);
    local_c = 0;
    if (local_828[0] == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00c7d4a0(local_828[0]);
    }
    *(int *)((int)this + 0xc) = iVar2;
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_00c4bddc;
  }
  local_c = 0xffffffff;
  uVar3 = FUN_00c7d350(*(void **)((int)this + 0xc),param_1);
  if (-1 < (int)uVar3) {
    puVar5 = (undefined4 *)((int)this + 8);
    uVar3 = WMCreateSyncReader(0,1,puVar5);
    if (((-1 < (int)uVar3) &&
        (uVar3 = (**(code **)(*(int *)*puVar5 + 0x5c))
                           ((int *)*puVar5,*(undefined4 *)((int)this + 0xc)), -1 < (int)uVar3)) &&
       (uVar3 = (*(code *)**(undefined4 **)*puVar5)
                          ((undefined4 *)*puVar5,&DAT_00d75f98,(int)this + 0x14), -1 < (int)uVar3))
    {
      (**(code **)(*(int *)*puVar5 + 0x48))((int *)*puVar5,0,0,(undefined4 *)((int)this + 0x10));
      piVar1 = *(int **)((int)this + 0x10);
      puVar5 = (undefined4 *)&stack0xfffff7d0;
      for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 **)((int)this + 0x18) = &stack0xfffff7d0;
      iVar4 = (**(code **)(*piVar1 + 0x10))(piVar1,&stack0xfffff7d0,&stack0xfffff7cc);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = -0x7fff0001;
      }
      iVar4 = *(int *)(*(int *)((int)this + 0x18) + 0x44);
      *(uint *)((int)this + 0x2c) = (uint)*(ushort *)(iVar4 + 2);
      *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(iVar4 + 8);
      local_828[0] = (undefined4 *)0x0;
      FUN_00c4bae0(this,L"Duration",local_828);
      if (local_828[0] == (undefined4 *)0x0) {
        *(undefined4 *)((int)this + 0x20) = 0;
        *(undefined4 *)((int)this + 0x24) = 0;
        uVar3 = 0;
      }
      else {
        *(undefined4 *)((int)this + 0x20) = *local_828[0];
        uVar3 = local_828[0][1];
        *(uint *)((int)this + 0x24) = uVar3;
      }
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
LAB_00c4bddc:
  ExceptionList = local_14;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00c4be10 @ 00c4be10 ////

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_00c4be10(void *this,undefined4 *param_1,undefined4 **param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *unaff_EBX;
  undefined4 **ppuVar6;
  undefined4 **ppuStack_40;
  int *piStack_3c;
  undefined4 *local_1c [2];
  int local_14;
  int local_10 [4];
  
  ppuVar6 = (undefined4 **)0x0;
  if (*(undefined4 ***)((int)this + 0x34) != (undefined4 **)0x0) {
    if (param_2 < *(undefined4 ***)((int)this + 0x34)) {
      piStack_3c = (int *)0xc4be40;
      puVar1 = (undefined4 *)FUN_00bbc590((void *)((int)this + 0x48),*(uint *)((int)this + 0x38));
      for (uVar4 = (uint)param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_1 = *puVar1;
        puVar1 = puVar1 + 1;
        param_1 = param_1 + 1;
      }
      for (uVar4 = (uint)param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)param_1 = *(undefined1 *)puVar1;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
      *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + (int)param_2;
      *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) - (int)param_2;
      *param_3 = param_2;
    }
    else {
      piStack_3c = (int *)0xc4be73;
      puVar1 = (undefined4 *)FUN_00bbc590((void *)((int)this + 0x48),*(uint *)((int)this + 0x38));
      uVar4 = *(uint *)((int)this + 0x34);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_1 = *puVar1;
        puVar1 = puVar1 + 1;
        param_1 = param_1 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)param_1 = *(undefined1 *)puVar1;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
      ppuVar6 = (undefined4 **)((int)param_2 - *(int *)((int)this + 0x34));
      *(undefined4 *)((int)this + 0x34) = 0;
      *(undefined4 *)((int)this + 0x38) = 0;
      if (ppuVar6 == (undefined4 **)0x0) {
        *param_3 = param_2;
        return;
      }
    }
  }
  if (*(int *)((int)this + 0x34) == 0) {
    if (ppuVar6 == (undefined4 **)0x0) {
      ppuVar6 = param_2;
    }
    while( true ) {
      FUN_00c4ba10((int)this);
      piStack_3c = &local_14;
      ppuStack_40 = local_1c + 1;
      iVar2 = (**(code **)(**(int **)((int)this + 8) + 0x1c))(*(int **)((int)this + 8));
      if (iVar2 < 0) break;
      local_1c[0] = (undefined4 *)0x0;
      ppuStack_40 = (undefined4 **)0x0;
      (**(code **)(*piStack_3c + 0x1c))(piStack_3c,local_1c,&ppuStack_40);
      if (ppuVar6 < local_1c) {
        puVar1 = unaff_EBX;
        puVar3 = (undefined4 *)0x0;
        for (uVar4 = (uint)ppuVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        for (uVar4 = (uint)ppuVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar1;
          puVar1 = (undefined4 *)((int)puVar1 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        uVar4 = (int)local_1c - (int)ppuVar6;
        unaff_EBX = (undefined4 *)((int)unaff_EBX + (int)ppuVar6);
        *(uint *)((int)this + 0x34) = uVar4;
        FUN_00bbc1d0((void *)((int)this + 0x48),uVar4);
        puVar3 = (undefined4 *)FUN_00bbc590((void *)((int)this + 0x48),0);
        uVar4 = *(uint *)((int)this + 0x34);
        puVar1 = unaff_EBX;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar1;
          puVar1 = (undefined4 *)((int)puVar1 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        ppuVar6 = (undefined4 **)0x0;
      }
      else {
        puVar1 = unaff_EBX;
        puVar3 = (undefined4 *)0x0;
        for (uVar4 = (uint)local_1c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar1;
          puVar1 = (undefined4 *)((int)puVar1 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        ppuVar6 = (undefined4 **)((int)ppuVar6 - (int)local_1c);
      }
      (**(code **)(local_10[0] + 8))(local_10);
      local_1c[0] = (undefined4 *)0x0;
      local_10[0] = 0;
      local_10[1] = 0;
      local_10[2] = 0;
      local_10[3] = 0;
      local_1c[1] = (undefined4 *)0x0;
      local_14 = 0;
      *param_3 = param_2;
      if (ppuVar6 == (undefined4 **)0x0) {
        return;
      }
    }
    *(undefined4 *)local_14 = 0;
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00c4c000 @ 00c4c000 ////

undefined4 * __thiscall ScalarDeletingDtor_00c4c000(void *this,byte param_1)

{
  FUN_00c4bbe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c4c030 @ 00c4c030 ////

int FUN_00c4c030(double param_1)

{
  return (int)ROUND(param_1);
}


//// FUNCTION FUN_00c4c060 @ 00c4c060 ////

undefined4 FUN_00c4c060(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (3 < *(int *)(unaff_ESI + 0x58)) {
    return 0;
  }
  if (*(int *)(unaff_ESI + 0x58) < 3) {
    return 0xffffff7f;
  }
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = *(int *)(unaff_ESI + 0x48);
  }
  else {
    iVar1 = *(int *)(unaff_ESI + 0x60) * 0x20 + *(int *)(unaff_ESI + 0x48);
  }
  iVar1 = FUN_00c317b0(unaff_ESI + 0x1e0,iVar1);
  if (iVar1 != 0) {
    return 0xffffff77;
  }
  FUN_00c30990((int *)(unaff_ESI + 0x1e0),(undefined4 *)(unaff_ESI + 0x250));
  *(undefined8 *)(unaff_ESI + 0x68) = 0;
  *(undefined4 *)(unaff_ESI + 0x58) = 4;
  *(undefined8 *)(unaff_ESI + 0x70) = 0;
  return 0;
}


//// FUNCTION FUN_00c4c0d0 @ 00c4c0d0 ////

void FUN_00c4c0d0(void)

{
  int unaff_ESI;
  
  FUN_00c30f20((undefined4 *)(unaff_ESI + 0x1e0));
  FUN_00c30ac0((undefined4 *)(unaff_ESI + 0x250));
  *(undefined4 *)(unaff_ESI + 0x58) = 2;
  return;
}


//// FUNCTION FUN_00c4c0f0 @ 00c4c0f0 ////

undefined4 __fastcall FUN_00c4c0f0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_00c30ac0(param_1 + 0x94);
    FUN_00c30f20(param_1 + 0x78);
    ogg_stream_clear(param_1 + 0x1e);
    if ((param_1[0x12] != 0) && (param_1[0xd] != 0)) {
      iVar2 = 0;
      if (0 < (int)param_1[0xd]) {
        iVar1 = 0;
        iVar3 = 0;
        do {
          vorbis_info_clear((undefined4 *)(param_1[0x12] + iVar3));
          vorbis_comment_clear((int *)(param_1[0x13] + iVar1));
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x20;
          iVar1 = iVar1 + 0x10;
        } while (iVar2 < (int)param_1[0xd]);
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x12]);
    }
    if ((void *)param_1[0xf] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0xf]);
    }
    if ((void *)param_1[0x11] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x11]);
    }
    if ((void *)param_1[0x10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x10]);
    }
    if ((void *)param_1[0xe] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0xe]);
    }
    ogg_sync_clear(param_1 + 6);
    for (iVar2 = 0xb0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00c4c240 @ 00c4c240 ////

undefined4 __fastcall FUN_00c4c240(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0xffffff7d;
  }
  uVar1 = FUN_00c7d820(*(int *)(param_1 + 0x48));
  return uVar1;
}


//// FUNCTION GetField_4_00c4c270 @ 00c4c270 ////

undefined4 __fastcall GetField_4_00c4c270(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


//// FUNCTION FUN_00c4c280 @ 00c4c280 ////

ulonglong __fastcall FUN_00c4c280(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  if (*(int *)(param_1 + 0x58) < 2) {
    return CONCAT44(param_2,0xffffff7d);
  }
  if (*(double *)(param_1 + 0x70) == 0.0) {
    return CONCAT44(param_2,0xffffffff);
  }
  uVar1 = FUN_00acd42c();
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return uVar1;
}


//// FUNCTION FUN_00c4c3a0 @ 00c4c3a0 ////

longlong __fastcall FUN_00c4c3a0(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((1 < *(int *)(param_1 + 0x58)) && (*(int *)(param_1 + 4) != 0)) &&
     (param_2 < *(int *)(param_1 + 0x34))) {
    if (-1 < param_2) {
      return CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc + param_2 * 0x10),
                      *(undefined4 *)(*(int *)(param_1 + 0x44) + 8 + param_2 * 0x10));
    }
    lVar1 = 0;
    lVar3 = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      do {
        lVar3 = FUN_00c4c3a0(param_1,iVar2);
        lVar3 = lVar3 + lVar1;
        iVar2 = iVar2 + 1;
        lVar1 = lVar3;
      } while (iVar2 < *(int *)(param_1 + 0x34));
    }
    return lVar3;
  }
  return -0x83;
}


//// FUNCTION FUN_00c4c410 @ 00c4c410 ////

float10 __fastcall FUN_00c4c410(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  undefined8 local_10;
  
  if (((1 < *(int *)(param_1 + 0x58)) && (*(int *)(param_1 + 4) != 0)) &&
     (param_2 < *(int *)(param_1 + 0x34))) {
    if (param_2 < 0) {
      iVar1 = 0;
      local_10 = 0.0;
      if (0 < *(int *)(param_1 + 0x34)) {
        do {
          fVar2 = FUN_00c4c410(param_1,iVar1);
          iVar1 = iVar1 + 1;
          local_10 = (double)(fVar2 + (float10)local_10);
        } while (iVar1 < *(int *)(param_1 + 0x34));
      }
      return (float10)local_10;
    }
    return (float10)*(longlong *)(*(int *)(param_1 + 0x44) + 8 + param_2 * 0x10) /
           (float10)*(int *)(*(int *)(param_1 + 0x48) + 8 + param_2 * 0x20);
  }
  return (float10)-131.0;
}


//// FUNCTION FUN_00c4c4b0 @ 00c4c4b0 ////

undefined8 __fastcall FUN_00c4c4b0(int param_1)

{
  if (*(int *)(param_1 + 0x58) < 2) {
    return 0xffffffffffffff7d;
  }
  return *(undefined8 *)(param_1 + 0x50);
}


//// FUNCTION FUN_00c4c4d0 @ 00c4c4d0 ////

float10 __fastcall FUN_00c4c4d0(int param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  longlong lVar9;
  uint local_18;
  double local_10;
  
  local_10 = 0.0;
  iVar7 = 0;
  if (*(int *)(param_1 + 0x58) < 2) {
    return (float10)-131.0;
  }
  lVar4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    lVar9 = FUN_00c4c3a0(param_1,-1);
    fVar8 = FUN_00c4c410(param_1,-1);
    local_10 = (double)fVar8;
    iVar7 = *(int *)(param_1 + 0x34) + -1;
    lVar4 = lVar9;
    if (-1 < iVar7) {
      puVar5 = (uint *)(*(int *)(param_1 + 0x44) + 8 + iVar7 * 0x10);
      do {
        local_18 = (uint)lVar9;
        uVar1 = *puVar5;
        iVar6 = ((int)((ulonglong)lVar9 >> 0x20) - puVar5[1]) - (uint)(local_18 < uVar1);
        lVar3 = lVar9 - *(longlong *)puVar5;
        lVar2 = lVar9 - *(longlong *)puVar5;
        lVar9 = lVar9 - *(longlong *)puVar5;
        fVar8 = FUN_00c4c410(param_1,iVar7);
        local_10 = (double)((float10)local_10 - fVar8);
        lVar4 = lVar9;
        if ((iVar6 < *(int *)(param_1 + 0x54)) ||
           ((iVar6 <= *(int *)(param_1 + 0x54) &&
            (lVar4 = lVar2, local_18 - uVar1 <= *(uint *)(param_1 + 0x50))))) break;
        iVar7 = iVar7 + -1;
        puVar5 = puVar5 + -4;
        lVar4 = lVar3;
      } while (-1 < iVar7);
    }
  }
  return (float10)CONCAT44((*(int *)(param_1 + 0x54) - (int)((ulonglong)lVar4 >> 0x20)) -
                           (uint)(*(uint *)(param_1 + 0x50) < (uint)lVar4),
                           *(uint *)(param_1 + 0x50) - (uint)lVar4) /
         (float10)*(int *)(*(int *)(param_1 + 0x48) + 8 + iVar7 * 0x20) + (float10)local_10;
}


//// FUNCTION FUN_00c4c5b0 @ 00c4c5b0 ////

int __fastcall FUN_00c4c5b0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (param_2 < 0) {
      if (*(int *)(param_1 + 0x58) < 3) goto LAB_00c4c5d7;
      param_2 = *(int *)(param_1 + 0x60);
    }
    else if (*(int *)(param_1 + 0x34) <= param_2) {
      return 0;
    }
    return param_2 * 0x20 + *(int *)(param_1 + 0x48);
  }
LAB_00c4c5d7:
  return *(int *)(param_1 + 0x48);
}


//// FUNCTION FUN_00c4c5e0 @ 00c4c5e0 ////

int __fastcall FUN_00c4c5e0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (param_2 < 0) {
      if (*(int *)(param_1 + 0x58) < 3) goto LAB_00c4c607;
      param_2 = *(int *)(param_1 + 0x60);
    }
    else if (*(int *)(param_1 + 0x34) <= param_2) {
      return 0;
    }
    return param_2 * 0x10 + *(int *)(param_1 + 0x4c);
  }
LAB_00c4c607:
  return *(int *)(param_1 + 0x4c);
}


//// FUNCTION FUN_00c4c610 @ 00c4c610 ////

undefined4 FUN_00c4c610(void)

{
  return 0;
}


//// FUNCTION FUN_00c4c620 @ 00c4c620 ////

void __fastcall
FUN_00c4c620(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,int param_7)

{
  float fVar1;
  int iVar2;
  int in_EAX;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  
  if (in_EAX < param_1) {
    param_1 = in_EAX;
    param_2 = param_7;
  }
  param_7 = 0;
  if (0 < param_5) {
    piVar6 = param_3;
    do {
      if (param_6 <= param_7) {
        return;
      }
      iVar9 = *piVar6;
      iVar2 = *(int *)((param_4 - (int)param_3) + (int)piVar6);
      iVar7 = 0;
      if (3 < param_1) {
        pfVar3 = (float *)(iVar9 + 4);
        pfVar4 = (float *)(iVar2 + 8);
        do {
          fVar1 = *(float *)(param_2 + iVar7 * 4);
          pfVar8 = (float *)((iVar2 - iVar9) + (int)pfVar3);
          iVar7 = iVar7 + 4;
          fVar1 = fVar1 * fVar1;
          pfVar3[-1] = fVar1 * pfVar3[-1] + (1.0 - fVar1) * pfVar4[-2];
          fVar1 = *(float *)((int)pfVar8 + (param_2 - iVar2));
          fVar1 = fVar1 * fVar1;
          *pfVar3 = fVar1 * *pfVar3 + (1.0 - fVar1) * *pfVar8;
          fVar1 = *(float *)((param_2 - iVar2) + -0x10 + (int)(pfVar4 + 4));
          fVar1 = fVar1 * fVar1;
          pfVar3[1] = fVar1 * pfVar3[1] + (1.0 - fVar1) * *pfVar4;
          fVar1 = *(float *)(param_2 + -4 + iVar7 * 4);
          fVar1 = fVar1 * fVar1;
          pfVar3[2] = fVar1 * pfVar3[2] + (1.0 - fVar1) * pfVar4[1];
          pfVar3 = pfVar3 + 4;
          pfVar4 = pfVar4 + 4;
        } while (iVar7 < param_1 + -3);
      }
      if (iVar7 < param_1) {
        iVar5 = param_1 - iVar7;
        pfVar3 = (float *)(iVar9 + iVar7 * 4);
        do {
          pfVar4 = (float *)((int)pfVar3 + (iVar2 - iVar9));
          fVar1 = *(float *)((int)pfVar4 + (param_2 - iVar2));
          iVar5 = iVar5 + -1;
          fVar1 = fVar1 * fVar1;
          *pfVar3 = fVar1 * *pfVar3 + (1.0 - fVar1) * *pfVar4;
          pfVar3 = pfVar3 + 1;
        } while (iVar5 != 0);
      }
      param_7 = param_7 + 1;
      piVar6 = piVar6 + 1;
    } while (param_7 < param_5);
  }
  for (; param_7 < param_6; param_7 = param_7 + 1) {
    iVar2 = param_3[param_7];
    iVar9 = 0;
    if (3 < param_1) {
      iVar7 = (param_1 - 4U >> 2) + 1;
      iVar9 = iVar7 * 4;
      pfVar3 = (float *)(iVar2 + 4);
      pfVar4 = (float *)(param_2 + 0xc);
      do {
        iVar7 = iVar7 + -1;
        pfVar3[-1] = pfVar4[-3] * pfVar4[-3] * pfVar3[-1];
        fVar1 = *(float *)((int)pfVar3 + (param_2 - iVar2));
        *pfVar3 = fVar1 * fVar1 * *pfVar3;
        pfVar3[1] = pfVar4[-1] * pfVar4[-1] * pfVar3[1];
        pfVar3[2] = *pfVar4 * *pfVar4 * pfVar3[2];
        pfVar3 = pfVar3 + 4;
        pfVar4 = pfVar4 + 4;
      } while (iVar7 != 0);
    }
    if (iVar9 < param_1) {
      iVar7 = param_1 - iVar9;
      pfVar3 = (float *)(iVar2 + iVar9 * 4);
      do {
        fVar1 = *(float *)((int)pfVar3 + (param_2 - iVar2));
        iVar7 = iVar7 + -1;
        *pfVar3 = fVar1 * fVar1 * *pfVar3;
        pfVar3 = pfVar3 + 1;
      } while (iVar7 != 0);
    }
  }
  return;
}


//// FUNCTION FUN_00c4c860 @ 00c4c860 ////

ulonglong __fastcall FUN_00c4c860(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_EDI;
  uint *puVar7;
  float10 fVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined2 uVar11;
  longlong local_8;
  
  uVar11 = (undefined2)unaff_EDI;
  if (*(int *)(param_1 + 0x58) < 2) {
    return CONCAT44(param_2,0xffffff7d);
  }
  iVar5 = *(int *)(param_1 + 0x34);
  iVar6 = param_2;
  while( true ) {
    if (iVar5 <= iVar6) {
      return CONCAT44(param_2,0xffffff7d);
    }
    if ((*(int *)(param_1 + 4) != 0) || (iVar6 == 0)) break;
    iVar6 = 0;
  }
  if (iVar6 < 0) {
    local_8 = 0;
    if (0 < iVar5) {
      puVar7 = *(uint **)(param_1 + 0x3c);
      puVar3 = *(uint **)(param_1 + 0x38);
      do {
        uVar1 = puVar3[2];
        lVar9 = __allmul(uVar1 - *puVar7,(puVar3[3] - puVar7[1]) - (uint)(uVar1 < *puVar7),8,0);
        uVar11 = (undefined2)unaff_EDI;
        local_8 = lVar9 + local_8;
        puVar7 = puVar7 + 2;
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + 2;
      } while (iVar5 != 0);
    }
    fVar8 = FUN_00c4c410(param_1,-1);
    FUN_00acf400((double)((float10)local_8 / fVar8 + (float10)0.5),uVar11);
    uVar10 = FUN_00acd42c();
    return uVar10;
  }
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x38) + 8 + iVar6 * 8);
    uVar2 = *(uint *)(*(int *)(param_1 + 0x3c) + iVar6 * 8);
    lVar9 = __allmul(uVar1 - uVar2,
                     (*(int *)(*(int *)(param_1 + 0x38) + 0xc + iVar6 * 8) -
                     *(int *)(*(int *)(param_1 + 0x3c) + 4 + iVar6 * 8)) - (uint)(uVar1 < uVar2),8,0
                    );
    fVar8 = FUN_00c4c410(param_1,iVar6);
    FUN_00acf400((double)((float10)lVar9 / fVar8 + (float10)0.5),uVar11);
    uVar10 = FUN_00acd42c();
    return uVar10;
  }
  iVar6 = iVar6 * 0x20;
  iVar5 = iVar6 + *(int *)(param_1 + 0x48);
  iVar4 = *(int *)(iVar5 + 0x10);
  if (iVar4 < 1) {
    iVar4 = *(int *)(iVar5 + 0xc);
    if (iVar4 < 1) {
      iVar4 = -1;
    }
    else {
      param_2 = *(int *)(iVar5 + 0x14);
      if (0 < param_2) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x48) + 0x14 + iVar6) +
                *(int *)(*(int *)(param_1 + 0x48) + 0xc + iVar6);
        return CONCAT44(iVar5 >> 0x1f,iVar5 / 2);
      }
    }
  }
  return CONCAT44(param_2,iVar4);
}


//// FUNCTION FUN_00c4c9e0 @ 00c4c9e0 ////

uint FUN_00c4c9e0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  LPCSTR pCVar5;
  int iVar6;
  uint uVar7;
  int *unaff_ESI;
  uint uVar8;
  undefined1 local_115;
  int local_114;
  undefined **local_110;
  char local_10c;
  void *pvStack_14;
  char local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d053eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_00ad4b6c();
  *piVar2 = 0;
  if (*unaff_ESI == 0) {
    ExceptionList = local_c;
    return 0;
  }
  local_114 = ogg_sync_buffer(unaff_ESI + 6,0x2134);
  iVar3 = GetField_4_00bd9ef0(*unaff_ESI);
  uVar4 = FUN_00bd9fd0((void *)*unaff_ESI,0,1);
  cVar1 = (char)uVar4;
  if (cVar1 == '\0') {
    local_110 = &PTR_LAB_00d9db7c;
    local_4 = 0;
    local_10c = cVar1;
    local_d = cVar1;
    LH_LogErrorMessage(&local_110,".\\OggVorbisLibWrapper.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x3c);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Error in data reader");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar5 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_115,pCVar5);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  iVar6 = GetField_4_00bd9ef0(*unaff_ESI);
  uVar8 = iVar6 - iVar3;
  FUN_00bd9fd0((void *)*unaff_ESI,iVar3,2);
  uVar7 = 0x2134;
  if ((uVar8 < 0x2134) && (uVar7 = uVar8, uVar8 == 0)) {
    ExceptionList = local_c;
    return 0;
  }
  cVar1 = (**(code **)(*(int *)*unaff_ESI + 4))(local_114,uVar7);
  if (cVar1 == '\0') {
    ExceptionList = pvStack_14;
    return 0xffffffff;
  }
  ogg_sync_wrote((int)(unaff_ESI + 6),uVar7);
  ExceptionList = pvStack_14;
  return uVar7;
}


//// FUNCTION FUN_00c4cb80 @ 00c4cb80 ////

void FUN_00c4cb80(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  LPCSTR pCVar3;
  undefined4 *unaff_ESI;
  undefined1 local_111;
  undefined **local_110;
  char local_10c;
  char local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05400;
  local_c = ExceptionList;
  if ((void *)*unaff_ESI != (void *)0x0) {
    ExceptionList = &local_c;
    uVar2 = FUN_00bd9fd0((void *)*unaff_ESI,param_1,2);
    cVar1 = (char)uVar2;
    if (cVar1 == '\0') {
      local_110 = &PTR_LAB_00d9db7c;
      local_4 = 0;
      local_10c = cVar1;
      local_d = cVar1;
      LH_LogErrorMessage(&local_110,".\\OggVorbisLibWrapper.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x5b);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"Error in data reader");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_111,pCVar3);
      DebugBreak();
    }
    unaff_ESI[2] = param_1;
    unaff_ESI[3] = param_2;
    ogg_sync_reset((int)(unaff_ESI + 6));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c4cc80 @ 00c4cc80 ////

undefined8 FUN_00c4cc80(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int in_EAX;
  uint uVar3;
  bool bVar4;
  
  if (param_3 < 0) goto LAB_00c4ccc0;
  if ((0 < param_3) || (param_2 != 0)) {
    bVar4 = CARRY4(param_2,*(uint *)(in_EAX + 8));
    param_2 = param_2 + *(uint *)(in_EAX + 8);
    param_3 = param_3 + *(int *)(in_EAX + 0xc) + (uint)bVar4;
  }
  while( true ) {
    while( true ) {
      if (((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) &&
         ((param_3 < *(int *)(in_EAX + 0xc) ||
          ((param_3 <= *(int *)(in_EAX + 0xc) && (param_2 <= *(uint *)(in_EAX + 8))))))) {
        return 0xffffffffffffffff;
      }
LAB_00c4ccc0:
      uVar3 = ogg_sync_pageseek((int *)(in_EAX + 0x18),param_1);
      if (-1 < (int)uVar3) break;
      uVar1 = *(uint *)(in_EAX + 8);
      *(uint *)(in_EAX + 8) = uVar1 - uVar3;
      *(uint *)(in_EAX + 0xc) =
           (*(int *)(in_EAX + 0xc) - ((int)uVar3 >> 0x1f)) - (uint)(uVar1 < uVar3);
    }
    if (uVar3 != 0) {
      uVar1 = *(uint *)(in_EAX + 8);
      uVar2 = *(undefined8 *)(in_EAX + 8);
      *(uint *)(in_EAX + 0xc) =
           ((int)uVar3 >> 0x1f) + *(int *)(in_EAX + 0xc) + (uint)CARRY4(uVar3,uVar1);
      *(uint *)(in_EAX + 8) = uVar3 + uVar1;
      return uVar2;
    }
    if (param_2 == 0 && param_3 == 0) break;
    uVar3 = FUN_00c4c9e0();
    if (uVar3 == 0) {
      return 0xfffffffffffffffe;
    }
    if ((int)uVar3 < 0) {
      return 0xffffffffffffff80;
    }
  }
  return 0xffffffffffffffff;
}


//// FUNCTION FUN_00c4cd40 @ 00c4cd40 ////

longlong FUN_00c4cd40(int *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  uint local_10;
  int local_c;
  undefined4 local_4;
  
  uVar1 = *(uint *)(in_EAX + 8);
  iVar2 = *(int *)(in_EAX + 0xc);
  lVar3 = -1;
  local_c = iVar2;
  local_10 = uVar1;
  do {
    bVar6 = 0x2133 < local_10;
    local_10 = local_10 - 0x2134;
    local_c = local_c + -1 + (uint)bVar6;
    if ((local_c < 1) && (local_c < 0)) {
      local_10 = 0;
      local_c = 0;
    }
    FUN_00c4cb80(local_10,local_c);
    iVar4 = *(int *)(in_EAX + 0xc);
    uVar5 = *(uint *)(in_EAX + 8);
    if (iVar4 <= iVar2) {
      lVar7 = lVar3;
      if (iVar4 < iVar2) goto LAB_00c4cda4;
      while (lVar3 = lVar7, uVar5 < uVar1) {
LAB_00c4cda4:
        do {
          lVar7 = FUN_00c4cc80(param_1,uVar1 - uVar5,(iVar2 - iVar4) - (uint)(uVar1 < uVar5));
          if (lVar7 == -0x80) {
            return -0x80;
          }
          if (lVar7 < 0) goto LAB_00c4cde4;
          uVar5 = *(uint *)(in_EAX + 8);
          iVar4 = *(int *)(in_EAX + 0xc);
          lVar3 = lVar7;
        } while (iVar4 < iVar2);
        if (iVar2 < iVar4) break;
      }
    }
LAB_00c4cde4:
    local_4 = (undefined4)((ulonglong)lVar3 >> 0x20);
    if (lVar3 != -1) {
      FUN_00c4cb80((int)lVar3,local_4);
      lVar7 = FUN_00c4cc80(param_1,0x2134,0);
      if (((int)((ulonglong)lVar7 >> 0x20) == 0 || lVar7 < 0) && (lVar7 < 0)) {
        return -0x81;
      }
      return lVar3;
    }
  } while( true );
}


//// FUNCTION FUN_00c4ce50 @ 00c4ce50 ////

/* WARNING: Removing unreachable block (ram,0x00c4cf71) */
/* WARNING: Removing unreachable block (ram,0x00c4cfac) */
/* WARNING: Removing unreachable block (ram,0x00c4ce87) */

undefined4 __fastcall
FUN_00c4ce50(int param_1,int param_2,undefined4 param_3,undefined4 param_4,longlong param_5,
            uint param_6,int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  uint local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_10;
  uint local_c;
  uint local_4;
  
  local_28 = param_6;
  local_24 = param_7;
  lVar4 = CONCAT44(param_7,param_6);
  lVar10 = CONCAT44(param_7,param_6);
  lVar3 = param_5;
  if (param_5 < CONCAT44(param_7,param_6)) {
    do {
      uVar1 = (uint)(local_28 < (uint)lVar3);
      uVar2 = local_24 - (int)((ulonglong)lVar3 >> 0x20);
      bVar8 = -1 < (int)(uVar2 - uVar1);
      if ((uVar2 != uVar1 && bVar8) ||
         ((param_5 = lVar3, bVar8 && (0x2133 < local_28 - (uint)lVar3)))) {
        lVar10 = lVar3 + CONCAT44(local_24,local_28);
        param_5 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),2,0);
      }
      FUN_00c4cb80((uint)param_5,param_5._4_4_);
      lVar9 = FUN_00c4cc80(&local_10,0xffffffff,-1);
      if (lVar9 == -0x80) {
        return 0xffffff80;
      }
      lVar10 = lVar4;
      if ((lVar9 < 0) || (iVar5 = ogg_page_serialno(&local_10), iVar5 != param_2)) {
        local_28 = (uint)param_5;
        local_24 = param_5._4_4_;
        if (-1 < lVar9) {
          lVar10 = lVar9;
        }
      }
      else {
        lVar3 = lVar9 + CONCAT44(((int)local_4 >> 0x1f) + ((int)local_c >> 0x1f) +
                                 (uint)CARRY4(local_4,local_c),local_4 + local_c);
      }
      lVar4 = lVar10;
    } while (lVar3 < CONCAT44(local_24,local_28));
  }
  local_1c = (undefined4)((ulonglong)lVar10 >> 0x20);
  local_20 = (int)lVar10;
  FUN_00c4cb80(local_20,local_1c);
  lVar10 = FUN_00c4cc80(&local_10,0xffffffff,-1);
  if (lVar10 == -0x80) {
    return 0xffffff80;
  }
  if ((lVar3 < CONCAT44(param_7,param_6)) && (-1 < lVar10)) {
    iVar5 = param_8 + 1;
    iVar6 = ogg_page_serialno(&local_10);
    iVar5 = FUN_00c4ce50(param_1,iVar6,local_20,local_1c,*(longlong *)(param_1 + 8),param_6,param_7,
                         iVar5);
    if (iVar5 == -0x80) {
      return 0xffffff80;
    }
  }
  else {
    *(int *)(param_1 + 0x34) = param_8 + 1;
    pvVar7 = _malloc((param_8 + 1) * 8 + 8);
    *(void **)(param_1 + 0x38) = pvVar7;
    pvVar7 = _malloc(*(int *)(param_1 + 0x34) << 2);
    iVar5 = *(int *)(param_1 + 0x38);
    *(void **)(param_1 + 0x40) = pvVar7;
    *(int *)(iVar5 + 8 + param_8 * 8) = (int)lVar3;
    *(int *)(iVar5 + 0xc + param_8 * 8) = (int)((ulonglong)lVar3 >> 0x20);
  }
  iVar5 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(iVar5 + param_8 * 8) = param_3;
  *(undefined4 *)(iVar5 + 4 + param_8 * 8) = param_4;
  *(int *)(*(int *)(param_1 + 0x40) + param_8 * 4) = param_2;
  return 0;
}


//// FUNCTION FUN_00c4d070 @ 00c4d070 ////

int __thiscall FUN_00c4d070(void *this,int param_1,undefined4 *param_2,int *param_3)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  longlong lVar3;
  int local_30 [4];
  undefined4 local_20 [8];
  
  if (in_EAX == (int *)0x0) {
    lVar3 = FUN_00c4cc80(local_30,0x2134,0);
    if (lVar3 == -0x80) {
      return -0x80;
    }
    if (((int)((ulonglong)lVar3 >> 0x20) == 0 || lVar3 < 0) && (lVar3 < 0)) {
      return -0x84;
    }
    in_EAX = local_30;
  }
  ogg_page_serialno(in_EAX);
  ogg_stream_reset_serialno(param_1 + 0x78);
  if (this != (void *)0x0) {
    *(undefined4 *)this = *(undefined4 *)(param_1 + 0x1c8);
  }
  *(undefined4 *)(param_1 + 0x58) = 3;
  vorbis_info_init(param_2);
  vorbis_comment_init(param_3);
  iVar2 = 0;
LAB_00c4d100:
  ogg_stream_pagein((int *)(param_1 + 0x78),in_EAX);
  if (iVar2 < 3) {
    while (iVar1 = ogg_stream_packetout(param_1 + 0x78,local_20), iVar1 != 0) {
      if (iVar1 == -1) goto LAB_00c4d16d;
      iVar1 = vorbis_synthesis_headerin(param_2,(int)param_3,local_20);
      if (iVar1 != 0) goto LAB_00c4d172;
      iVar2 = iVar2 + 1;
      if (2 < iVar2) {
        return 0;
      }
    }
    if (iVar2 < 3) goto code_r0x00c4d154;
  }
  return 0;
code_r0x00c4d154:
  lVar3 = FUN_00c4cc80(in_EAX,0x2134,0);
  if (lVar3 < 0) {
LAB_00c4d16d:
    iVar1 = -0x85;
LAB_00c4d172:
    vorbis_info_clear(param_2);
    vorbis_comment_clear(param_3);
    *(undefined4 *)(param_1 + 0x58) = 2;
    return iVar1;
  }
  goto LAB_00c4d100;
}


//// FUNCTION FUN_00c4d1a0 @ 00c4d1a0 ////

/* WARNING: Removing unreachable block (ram,0x00c4d377) */

void FUN_00c4d1a0(int param_1,int param_2)

{
  longlong *plVar1;
  int in_EAX;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_38;
  int local_30 [4];
  undefined4 local_20 [8];
  
  piVar2 = FUN_00ad58c5(*(int **)(in_EAX + 0x48),(uint *)(*(int *)(in_EAX + 0x34) << 5));
  *(int **)(in_EAX + 0x48) = piVar2;
  piVar2 = FUN_00ad58c5(*(int **)(in_EAX + 0x4c),(uint *)(*(int *)(in_EAX + 0x34) << 4));
  *(int **)(in_EAX + 0x4c) = piVar2;
  pvVar3 = _malloc(*(int *)(in_EAX + 0x34) << 3);
  *(void **)(in_EAX + 0x3c) = pvVar3;
  pvVar3 = _malloc(*(int *)(in_EAX + 0x34) << 4);
  *(void **)(in_EAX + 0x44) = pvVar3;
  iVar7 = 0;
  if (0 < *(int *)(in_EAX + 0x34)) {
    do {
      if (iVar7 == 0) {
        piVar2 = *(int **)(in_EAX + 0x3c);
        *piVar2 = param_1;
        piVar2[1] = param_2;
        FUN_00c4cb80(param_1,param_2);
      }
      else {
        FUN_00c4cb80(*(int *)(*(int *)(in_EAX + 0x38) + iVar7 * 8),
                     *(undefined4 *)(*(int *)(in_EAX + 0x38) + 4 + iVar7 * 8));
        iVar8 = FUN_00c4d070((void *)0x0,in_EAX,
                             (undefined4 *)(iVar7 * 0x20 + *(int *)(in_EAX + 0x48)),
                             (int *)(iVar7 * 0x10 + *(int *)(in_EAX + 0x4c)));
        if (iVar8 < 0) {
          iVar8 = *(int *)(in_EAX + 0x3c);
          *(undefined4 *)(iVar8 + iVar7 * 8) = 0xffffffff;
          *(undefined4 *)(iVar8 + 4 + iVar7 * 8) = 0xffffffff;
        }
        else {
          iVar8 = *(int *)(in_EAX + 0x3c);
          *(undefined4 *)(iVar8 + iVar7 * 8) = *(undefined4 *)(in_EAX + 8);
          *(undefined4 *)(iVar8 + 4 + iVar7 * 8) = *(undefined4 *)(in_EAX + 0xc);
        }
      }
      if ((*(uint *)(*(int *)(in_EAX + 0x3c) + iVar7 * 8) &
          *(uint *)(*(int *)(in_EAX + 0x3c) + 4 + iVar7 * 8)) != 0xffffffff) {
        piVar2 = (int *)(in_EAX + 0x78);
        local_38 = 0;
        iVar8 = -1;
        ogg_stream_reset_serialno((int)piVar2);
        lVar10 = FUN_00c4cc80(local_30,0xffffffff,-1);
        if (-1 < lVar10) {
          do {
            iVar4 = ogg_page_serialno(local_30);
            if (iVar4 != *(int *)(*(int *)(in_EAX + 0x40) + iVar7 * 4)) break;
            ogg_stream_pagein(piVar2,local_30);
            iVar4 = ogg_stream_packetout(piVar2,local_20);
            while (iVar4 != 0) {
              iVar5 = iVar8;
              if ((0 < iVar4) &&
                 (iVar5 = FUN_00c7d790(iVar7 * 0x20 + *(int *)(in_EAX + 0x48),local_20), iVar8 != -1
                 )) {
                uVar6 = iVar5 + iVar8 >> 2;
                local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20);
                local_38 = CONCAT44(local_38._4_4_ + (iVar5 + iVar8 >> 0x1f) +
                                    (uint)CARRY4((uint)local_38,uVar6),(uint)local_38 + uVar6);
              }
              iVar4 = ogg_stream_packetout(piVar2,local_20);
              iVar8 = iVar5;
            }
            lVar10 = ogg_page_granulepos(local_30);
            if (lVar10 != -1) {
              lVar10 = ogg_page_granulepos(local_30);
              local_38 = lVar10 - local_38;
              break;
            }
            lVar10 = FUN_00c4cc80(local_30,0xffffffff,-1);
          } while (((int)((ulonglong)lVar10 >> 0x20) != 0 && -1 < lVar10) || (-1 < lVar10));
          if ((local_38._4_4_ < 1) && (local_38 < 0)) {
            local_38 = 0;
          }
        }
        iVar8 = *(int *)(in_EAX + 0x44);
        *(uint *)(iVar7 * 0x10 + iVar8) = (uint)local_38;
        *(int *)(iVar7 * 0x10 + 4 + iVar8) = local_38._4_4_;
      }
      FUN_00c4cb80(*(int *)(*(int *)(in_EAX + 0x38) + 8 + iVar7 * 8),
                   *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0xc + iVar7 * 8));
      lVar10 = FUN_00c4cd40(local_30);
      bVar9 = -1 < lVar10;
      while (bVar9) {
        do {
          lVar11 = ogg_page_granulepos(local_30);
          if (lVar11 != -1) {
            plVar1 = (longlong *)(iVar7 * 0x10 + *(int *)(in_EAX + 0x44));
            lVar10 = ogg_page_granulepos(local_30);
            plVar1[1] = lVar10 - *plVar1;
            goto LAB_00c4d462;
          }
          *(longlong *)(in_EAX + 8) = lVar10;
          lVar10 = FUN_00c4cd40(local_30);
          bVar9 = -1 < lVar10;
        } while ((int)((ulonglong)lVar10 >> 0x20) != 0 && bVar9);
      }
      vorbis_info_clear((undefined4 *)(iVar7 * 0x20 + *(int *)(in_EAX + 0x48)));
      vorbis_comment_clear((int *)(iVar7 * 0x10 + *(int *)(in_EAX + 0x4c)));
LAB_00c4d462:
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_EAX + 0x34));
  }
  return;
}


//// FUNCTION FUN_00c4d480 @ 00c4d480 ////

int FUN_00c4d480(undefined4 *param_1,int param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  bool bVar10;
  undefined8 uVar11;
  int local_30;
  int local_2c;
  undefined4 local_20 [8];
  
  do {
    if (*(int *)(in_EAX + 0x58) == 4) {
      while( true ) {
        puVar8 = param_1;
        if (param_1 == (undefined4 *)0x0) {
          puVar8 = local_20;
        }
        iVar1 = ogg_stream_packetout(in_EAX + 0x78,puVar8);
        param_1 = (undefined4 *)0x0;
        if (iVar1 == -1) {
          return -3;
        }
        if (iVar1 < 1) break;
        uVar4 = puVar8[4];
        uVar6 = puVar8[5];
        iVar1 = FUN_00c7d570((int *)(in_EAX + 0x250),puVar8);
        if (iVar1 == 0) {
          iVar1 = FUN_00c32190(in_EAX + 0x1e0,(undefined4 *)0x0);
          if (iVar1 == 0) {
            FUN_00c317e0(in_EAX + 0x1e0,(int *)(in_EAX + 0x250));
            iVar1 = FUN_00c32190(in_EAX + 0x1e0,(undefined4 *)0x0);
            *(double *)(in_EAX + 0x70) = (double)iVar1 + *(double *)(in_EAX + 0x70);
            *(double *)(in_EAX + 0x68) = (double)(int)(puVar8[1] << 3) + *(double *)(in_EAX + 0x68);
            if (((uVar4 & uVar6) != 0xffffffff) && (puVar8[3] == 0)) {
              if (*(int *)(in_EAX + 4) == 0) {
                iVar1 = 0;
              }
              else {
                iVar1 = *(int *)(in_EAX + 0x60);
                if (0 < iVar1) {
                  uVar2 = *(uint *)(iVar1 * 0x10 + *(int *)(in_EAX + 0x44));
                  bVar10 = uVar4 < uVar2;
                  uVar4 = uVar4 - uVar2;
                  uVar6 = (uVar6 - *(int *)(iVar1 * 0x10 + 4 + *(int *)(in_EAX + 0x44))) -
                          (uint)bVar10;
                }
              }
              if (((int)uVar6 < 1) && ((int)uVar6 < 0)) {
                uVar4 = 0;
                uVar6 = 0;
              }
              uVar2 = FUN_00c32190(in_EAX + 0x1e0,(undefined4 *)0x0);
              uVar5 = uVar4 - uVar2;
              iVar7 = (uVar6 - ((int)uVar2 >> 0x1f)) - (uint)(uVar4 < uVar2);
              if (0 < iVar1) {
                puVar3 = (uint *)(*(int *)(in_EAX + 0x44) + 8);
                do {
                  bVar10 = CARRY4(uVar5,*puVar3);
                  uVar5 = uVar5 + *puVar3;
                  iVar7 = iVar7 + puVar3[1] + (uint)bVar10;
                  puVar3 = puVar3 + 4;
                  iVar1 = iVar1 + -1;
                } while (iVar1 != 0);
              }
              *(uint *)(in_EAX + 0x50) = uVar5;
              *(int *)(in_EAX + 0x54) = iVar7;
            }
            return 1;
          }
          return -0x81;
        }
      }
    }
    if (*(int *)(in_EAX + 0x58) < 2) {
LAB_00c4d57d:
      iVar1 = *(int *)(in_EAX + 0x58);
      if (iVar1 != 4) goto LAB_00c4d589;
    }
    else {
      if (param_2 == 0) {
        return 0;
      }
      uVar11 = FUN_00c4cc80(&local_30,0xffffffff,-1);
      if ((int)uVar11 < 0) {
        return -2;
      }
      iVar1 = *(int *)(in_EAX + 0x58);
      *(double *)(in_EAX + 0x68) = (double)(local_2c * 8) + *(double *)(in_EAX + 0x68);
      if (iVar1 == 4) {
        iVar1 = ogg_page_serialno(&local_30);
        if (*(int *)(in_EAX + 0x5c) != iVar1) {
          if (param_3 == 0) {
            return -2;
          }
          FUN_00c4c0d0();
          if (*(int *)(in_EAX + 4) == 0) {
            vorbis_info_clear(*(undefined4 **)(in_EAX + 0x48));
            vorbis_comment_clear(*(int **)(in_EAX + 0x4c));
          }
        }
        goto LAB_00c4d57d;
      }
LAB_00c4d589:
      if (iVar1 < 3) {
        if (*(int *)(in_EAX + 4) == 0) {
          iVar1 = FUN_00c4d070((void *)(in_EAX + 0x5c),in_EAX,*(undefined4 **)(in_EAX + 0x48),
                               *(int **)(in_EAX + 0x4c));
          if (iVar1 != 0) {
            return iVar1;
          }
          *(int *)(in_EAX + 0x60) = *(int *)(in_EAX + 0x60) + 1;
        }
        else {
          iVar1 = ogg_page_serialno(&local_30);
          iVar7 = 0;
          *(int *)(in_EAX + 0x5c) = iVar1;
          if (0 < *(int *)(in_EAX + 0x34)) {
            piVar9 = *(int **)(in_EAX + 0x40);
            iVar7 = 0;
            do {
              if (*piVar9 == iVar1) break;
              iVar7 = iVar7 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar7 < *(int *)(in_EAX + 0x34));
          }
          if (iVar7 == *(int *)(in_EAX + 0x34)) {
            return -0x89;
          }
          *(int *)(in_EAX + 0x60) = iVar7;
          ogg_stream_reset_serialno(in_EAX + 0x78);
          *(undefined4 *)(in_EAX + 0x58) = 3;
        }
      }
      iVar1 = FUN_00c4c060();
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    ogg_stream_pagein((int *)(in_EAX + 0x78),&local_30);
  } while( true );
}


//// FUNCTION FUN_00c4d720 @ 00c4d720 ////

int FUN_00c4d720(void *param_1,uint param_2)

{
  int *piVar1;
  undefined4 *in_EAX;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 *unaff_EBX;
  bool bVar7;
  
  pvVar4 = param_1;
  bVar7 = param_1 != (void *)0x0;
  param_1 = (void *)0xffffffff;
  if (bVar7) {
    uVar2 = FUN_00bd9fd0(pvVar4,0,0);
    if ((char)uVar2 == '\0') {
      param_1 = (void *)0xffffffff;
    }
    else {
      param_1 = (void *)GetField_4_00bd9ef0((int)pvVar4);
    }
  }
  puVar3 = unaff_EBX;
  for (iVar5 = 0xb0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *unaff_EBX = pvVar4;
  piVar1 = unaff_EBX + 6;
  ogg_sync_init(piVar1);
  if (in_EAX != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)ogg_sync_buffer(piVar1,param_2);
    for (uVar6 = param_2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = *in_EAX;
      in_EAX = in_EAX + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = param_2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)in_EAX;
      in_EAX = (undefined4 *)((int)in_EAX + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    ogg_sync_wrote((int)piVar1,param_2);
  }
  if (param_1 != (void *)0xffffffff) {
    unaff_EBX[1] = 1;
  }
  unaff_EBX[0xd] = 1;
  pvVar4 = _calloc(1,0x20);
  unaff_EBX[0x12] = pvVar4;
  pvVar4 = _calloc(unaff_EBX[0xd],0x10);
  unaff_EBX[0x13] = pvVar4;
  ogg_stream_init(unaff_EBX + 0x1e,0xffffffff);
  iVar5 = FUN_00c4d070(unaff_EBX + 0x17,(int)unaff_EBX,(undefined4 *)unaff_EBX[0x12],
                       (int *)unaff_EBX[0x13]);
  if (iVar5 < 0) {
    *unaff_EBX = 0;
    FUN_00c4c0f0(unaff_EBX);
    return iVar5;
  }
  unaff_EBX[0x16] = 1;
  return iVar5;
}


//// FUNCTION FUN_00c4d840 @ 00c4d840 ////

undefined4 __thiscall FUN_00c4d840(void *this,uint param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined3 extraout_var;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  longlong lVar10;
  uint local_1a0;
  int local_19c;
  int local_198 [4];
  undefined4 local_188 [4];
  uint local_178;
  uint local_174;
  int local_168 [90];
  
  if (*(int *)((int)this + 0x58) < 2) {
    return 0xffffff7d;
  }
  if (*(int *)((int)this + 4) == 0) {
    return 0xffffff76;
  }
  if (((param_2 < 0) || (*(int *)((int)this + 0x14) < param_2)) ||
     ((*(int *)((int)this + 0x14) <= param_2 && (*(uint *)((int)this + 0x10) < param_1)))) {
    return 0xffffff7d;
  }
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  ogg_stream_reset_serialno((int)this + 0x78);
  FUN_00c31750((int)this + 0x1e0);
  FUN_00c4cb80(param_1,param_2);
  local_19c = 0;
  local_1a0 = 0;
  ogg_stream_init(local_168,*(undefined4 *)((int)this + 0x5c));
  ogg_stream_reset((int)local_168);
  iVar5 = 0;
  iVar7 = 0;
LAB_00c4d8f4:
  while ((2 < *(int *)((int)this + 0x58) && (iVar2 = ogg_stream_packetout(local_168,local_188), 0 < iVar2)))
  {
    iVar2 = *(int *)((int)this + 0x48) + *(int *)((int)this + 0x60) * 0x20;
    if (*(int *)(iVar2 + 0x1c) == 0) {
      ogg_stream_packetout((int)this + 0x78,(void *)0x0);
      break;
    }
    local_19c = FUN_00c7d790(iVar2,local_188);
    if (local_19c < 0) {
      ogg_stream_packetout((int)this + 0x78,(void *)0x0);
      local_19c = 0;
    }
    else if (iVar5 == 0) {
      if (iVar7 != 0) {
        local_1a0 = local_1a0 + (local_19c + iVar7 >> 2);
      }
    }
    else {
      ogg_stream_packetout((int)this + 0x78,(void *)0x0);
    }
    iVar7 = local_19c;
    if ((local_178 & local_174) != 0xffffffff) {
      iVar5 = *(int *)((int)this + 0x60);
      iVar7 = *(int *)((int)this + 0x44);
      puVar3 = (uint *)(iVar5 * 0x10 + iVar7);
      uVar8 = local_178 - *puVar3;
      iVar2 = (local_174 - *(int *)(iVar5 * 0x10 + 4 + iVar7)) - (uint)(local_178 < *puVar3);
      if ((iVar2 < 1) && (iVar2 < 0)) {
        uVar8 = 0;
        iVar2 = 0;
      }
      if (0 < iVar5) {
        puVar3 = (uint *)(iVar7 + 8);
        do {
          bVar9 = CARRY4(uVar8,*puVar3);
          uVar8 = uVar8 + *puVar3;
          iVar2 = iVar2 + puVar3[1] + (uint)bVar9;
          puVar3 = puVar3 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(uint *)((int)this + 0x50) = uVar8 - local_1a0;
      *(uint *)((int)this + 0x54) = (iVar2 - ((int)local_1a0 >> 0x1f)) - (uint)(uVar8 < local_1a0);
LAB_00c4daf6:
      ogg_stream_clear(local_168);
      *(undefined8 *)((int)this + 0x68) = 0;
      *(undefined8 *)((int)this + 0x70) = 0;
      return 0;
    }
  }
  if (iVar7 == 0) {
    lVar10 = FUN_00c4cc80(local_198,0xffffffff,-1);
    if (-1 < lVar10) {
      if (*(int *)((int)this + 0x58) < 3) {
LAB_00c4d9e2:
        iVar5 = ogg_page_serialno(local_198);
        iVar2 = 0;
        *(int *)((int)this + 0x5c) = iVar5;
        if (0 < *(int *)((int)this + 0x34)) {
          piVar6 = *(int **)((int)this + 0x40);
          do {
            iVar7 = local_19c;
            if (*piVar6 == iVar5) break;
            iVar2 = iVar2 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar2 < *(int *)((int)this + 0x34));
        }
        if (iVar2 == *(int *)((int)this + 0x34)) {
          *(undefined4 *)((int)this + 0x50) = 0xffffffff;
          *(undefined4 *)((int)this + 0x54) = 0xffffffff;
          ogg_stream_clear(local_168);
          FUN_00c4c0d0();
          return 0xffffff77;
        }
        *(int *)((int)this + 0x60) = iVar2;
        ogg_stream_reset_serialno((int)this + 0x78);
        ogg_stream_reset_serialno((int)local_168);
        *(undefined4 *)((int)this + 0x58) = 3;
      }
      else {
        iVar5 = ogg_page_serialno(local_198);
        if (*(int *)((int)this + 0x5c) != iVar5) {
          FUN_00c4c0d0();
          ogg_stream_clear(local_168);
        }
        if (*(int *)((int)this + 0x58) < 3) goto LAB_00c4d9e2;
      }
      ogg_stream_pagein((int *)((int)this + 0x78),local_198);
      ogg_stream_pagein(local_168,local_198);
      bVar1 = ogg_page_eos(local_198);
      iVar5 = CONCAT31(extraout_var,bVar1);
      goto LAB_00c4d8f4;
    }
    lVar10 = FUN_00c4c3a0((int)this,-1);
    uVar4 = (undefined4)lVar10;
    *(int *)((int)this + 0x54) = (int)((ulonglong)lVar10 >> 0x20);
  }
  else {
    uVar4 = 0xffffffff;
    *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  }
  *(undefined4 *)((int)this + 0x50) = uVar4;
  goto LAB_00c4daf6;
}


//// FUNCTION FUN_00c4db40 @ 00c4db40 ////

/* WARNING: Removing unreachable block (ram,0x00c4dbaf) */
/* WARNING: Removing unreachable block (ram,0x00c4ddd6) */
/* WARNING: Removing unreachable block (ram,0x00c4e0d1) */

undefined4 __thiscall FUN_00c4db40(void *this,uint param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined3 extraout_var;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 local_84;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined8 local_6c;
  uint local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined8 local_38;
  int local_30 [4];
  undefined1 local_20 [16];
  uint local_10;
  uint local_c;
  
  local_6c = FUN_00c4c3a0((int)this,-1);
  if (*(int *)((int)this + 0x58) < 2) {
    return 0xffffff7d;
  }
  if (*(int *)((int)this + 4) == 0) {
    return 0xffffff76;
  }
  if ((param_2 < 0) || (local_6c < CONCAT44(param_2,param_1))) {
    return 0xffffff7d;
  }
  iVar12 = *(int *)((int)this + 0x34) + -1;
  if (-1 < iVar12) {
    puVar7 = (uint *)(iVar12 * 0x10 + 8 + *(int *)((int)this + 0x44));
    do {
      uVar3 = (uint)local_6c - *puVar7;
      iVar9 = ((int)((ulonglong)local_6c >> 0x20) - puVar7[1]) - (uint)((uint)local_6c < *puVar7);
      local_6c = local_6c - *(longlong *)puVar7;
      if ((iVar9 < param_2) || ((iVar9 <= param_2 && (uVar3 <= param_1)))) break;
      iVar12 = iVar12 + -1;
      puVar7 = puVar7 + -4;
    } while (-1 < iVar12);
    local_6c = CONCAT44(iVar9,uVar3);
  }
  iVar9 = *(int *)((int)this + 0x38);
  local_7c = *(uint *)(iVar9 + 8 + iVar12 * 8);
  uVar3 = *(uint *)(iVar9 + 4 + iVar12 * 8);
  puVar7 = (uint *)(iVar9 + iVar12 * 8);
  local_78 = puVar7[3];
  uVar10 = *(uint *)(iVar12 * 0x10 + *(int *)((int)this + 0x44));
  local_74 = *puVar7;
  iVar9 = iVar12 * 0x10 + *(int *)((int)this + 0x44);
  iVar4 = *(int *)(iVar9 + 4);
  local_38 = CONCAT44(*(int *)(iVar9 + 0xc) + iVar4 + (uint)CARRY4(*(uint *)(iVar9 + 8),uVar10),
                      *(uint *)(iVar9 + 8) + uVar10);
  uVar8 = (uVar10 - (uint)local_6c) + param_1;
  iVar9 = ((iVar4 - local_6c._4_4_) - (uint)(uVar10 < (uint)local_6c)) + param_2 +
          (uint)CARRY4(uVar10 - (uint)local_6c,param_1);
  local_50 = local_74;
  local_4c = uVar3;
  if (((int)uVar3 <= (int)local_78) &&
     ((lVar17 = CONCAT44(iVar4,uVar10), (int)uVar3 < (int)local_78 ||
      (lVar17 = CONCAT44(iVar4,uVar10), local_74 < local_7c)))) {
    do {
      local_54 = (int)((ulonglong)lVar17 >> 0x20);
      local_58 = (uint)lVar17;
      iVar4 = (local_78 - uVar3) - (uint)(local_7c < local_74);
      if ((0 < iVar4) ||
         ((uVar10 = local_74, uVar13 = uVar3, -1 < iVar4 && (0x2133 < local_7c - local_74)))) {
        lVar16 = __allmul(uVar8 - local_58,(iVar9 - local_54) - (uint)(uVar8 < local_58),
                          local_7c - local_74,iVar4);
        lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),(uint)local_38 - local_58,
                          (local_38._4_4_ - local_54) - (uint)((uint)local_38 < local_58));
        lVar16 = lVar16 + CONCAT44(uVar3,local_74);
        uVar13 = (uint)lVar16;
        uVar10 = uVar13 - 0x2134;
        uVar13 = (int)((ulonglong)lVar16 >> 0x20) - (uint)(uVar13 < 0x2134);
        if (((int)uVar13 <= (int)uVar3) && (((int)uVar13 < (int)uVar3 || (uVar10 <= local_74)))) {
          uVar10 = local_74 + 1;
          uVar13 = uVar3 + (0xfffffffe < local_74);
        }
      }
      FUN_00c4cb80(uVar10,uVar13);
LAB_00c4dd20:
      uVar15 = FUN_00c4cc80(local_30,local_7c - *(uint *)((int)this + 8),
                            (local_78 - *(int *)((int)this + 0xc)) -
                            (uint)(local_7c < *(uint *)((int)this + 8)));
      local_84 = uVar15;
      if (uVar15 == 0xffffffffffffff80) goto LAB_00c4e10b;
      local_84._4_4_ = (uint)(uVar15 >> 0x20);
      if (((int)local_84._4_4_ < 1) && ((longlong)uVar15 < 0)) {
        uVar5 = uVar3 + (0xfffffffe < local_74);
        if (((int)uVar13 < (int)uVar5) || (((int)uVar13 <= (int)uVar5 && (uVar10 <= local_74 + 1))))
        break;
        if (uVar10 == 0 && uVar13 == 0) goto LAB_00c4e10b;
        uVar11 = uVar10 - 0x2134;
        uVar13 = (uVar13 - 1) + (uint)(0x2133 < uVar10);
        uVar10 = uVar11;
        if (((int)uVar13 <= (int)uVar3) && (((int)uVar13 < (int)uVar3 || (uVar11 <= local_74)))) {
          uVar10 = local_74 + 1;
          uVar13 = uVar5;
        }
LAB_00c4de8b:
        FUN_00c4cb80(uVar10,uVar13);
LAB_00c4de92:
        if (((int)local_78 < (int)uVar3) ||
           (((int)local_78 <= (int)uVar3 && (local_7c <= local_74)))) break;
        goto LAB_00c4dd20;
      }
      lVar16 = ogg_page_granulepos(local_30);
      if (lVar16 == -1) goto LAB_00c4de92;
      local_84._0_4_ = (uint)uVar15;
      if (lVar16 < CONCAT44(iVar9,uVar8)) {
        uVar10 = *(uint *)((int)this + 8);
        uVar3 = *(uint *)((int)this + 0xc);
        local_50 = (uint)local_84;
        local_4c = local_84._4_4_;
        uVar13 = (uint)(uVar8 < (uint)lVar16);
        uVar5 = iVar9 - (int)((ulonglong)lVar16 >> 0x20);
        bVar14 = -1 < (int)(uVar5 - uVar13);
        local_74 = uVar10;
        lVar17 = lVar16;
        if ((uVar5 != uVar13 && bVar14) ||
           ((uVar13 = uVar3, bVar14 && (0xac44 < uVar8 - (uint)lVar16)))) goto LAB_00c4dec5;
        goto LAB_00c4de92;
      }
      local_48 = local_74 + 1;
      local_44 = uVar3 + (0xfffffffe < local_74);
      if (((int)uVar13 < (int)local_44) || (((int)uVar13 <= (int)local_44 && (uVar10 <= local_48))))
      break;
      if ((local_7c == *(uint *)((int)this + 8)) && (local_78 == *(uint *)((int)this + 0xc))) {
        uVar5 = uVar10 - 0x2134;
        uVar13 = (uVar13 - 1) + (uint)(0x2133 < uVar10);
        local_7c = (uint)local_84;
        local_78 = local_84._4_4_;
        uVar10 = uVar5;
        if (((int)uVar13 <= (int)uVar3) && (((int)uVar13 < (int)uVar3 || (uVar5 <= local_74)))) {
          uVar10 = local_48;
          uVar13 = local_44;
        }
        goto LAB_00c4de8b;
      }
      local_7c = (uint)local_84;
      local_78 = local_84._4_4_;
      local_38 = lVar16;
LAB_00c4dec5:
    } while (((int)uVar3 < (int)local_78) ||
            (((int)uVar3 <= (int)local_78 && (local_74 < local_7c))));
  }
  FUN_00c4cb80(local_50,local_4c);
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  lVar17 = FUN_00c4cc80((int *)&local_48,0xffffffff,-1);
  if (((int)((ulonglong)lVar17 >> 0x20) == 0 || lVar17 < 0) && (lVar17 < 0)) {
    return 0xfffffffe;
  }
  if (iVar12 == *(int *)((int)this + 0x60)) {
    FUN_00c31750((int)this + 0x1e0);
  }
  else {
    FUN_00c4c0d0();
    *(int *)((int)this + 0x60) = iVar12;
    uVar6 = ogg_page_serialno((int *)&local_48);
    *(undefined4 *)((int)this + 0x5c) = uVar6;
    *(undefined4 *)((int)this + 0x58) = 3;
  }
  piVar1 = (int *)((int)this + 0x78);
  ogg_stream_reset_serialno((int)piVar1);
  ogg_stream_pagein(piVar1,(int *)&local_48);
  iVar12 = ogg_stream_packetpeek(piVar1,local_20);
  do {
    if (iVar12 == 0) {
      FUN_00c4cb80(local_50,local_4c);
      uVar15 = FUN_00c4cd40((int *)&local_48);
      local_84 = uVar15 & 0xffffffff;
      if (-1 < (longlong)uVar15) {
        do {
          uVar18 = ogg_page_granulepos((int *)&local_48);
          if (((uint)((ulonglong)uVar18 >> 0x20) < 0x80000000) ||
             (bVar2 = ogg_page_continued((int *)&local_48), CONCAT31(extraout_var,bVar2) == 0)) {
            uVar6 = FUN_00c4d840(this,(uint)uVar15,(int)(uVar15 >> 0x20));
            return uVar6;
          }
          *(ulonglong *)((int)this + 8) = uVar15;
          uVar15 = FUN_00c4cd40((int *)&local_48);
        } while (((int)(uVar15 >> 0x20) != 0 && -1 < (longlong)uVar15) || (-1 < (longlong)uVar15));
        local_84 = uVar15 & 0xffffffff;
      }
LAB_00c4e10b:
      *(undefined4 *)((int)this + 0x50) = 0xffffffff;
      *(undefined4 *)((int)this + 0x54) = 0xffffffff;
      FUN_00c4c0d0();
      return (uint)local_84;
    }
    if (iVar12 >> 0x1f < 0) {
      local_84._0_4_ = 0xffffff78;
LAB_00c4e103:
      local_84 = CONCAT44(0xffffffff,(uint)local_84);
      goto LAB_00c4e10b;
    }
    if ((local_10 & local_c) != 0xffffffff) {
      iVar12 = *(int *)((int)this + 0x60) * 0x10;
      puVar7 = (uint *)(iVar12 + *(int *)((int)this + 0x44));
      iVar12 = (local_c - *(int *)(iVar12 + 4 + *(int *)((int)this + 0x44))) -
               (uint)(local_10 < *puVar7);
      *(uint *)((int)this + 0x50) = local_10 - *puVar7;
      *(int *)((int)this + 0x54) = iVar12;
      if ((iVar12 < 1) && (iVar12 < 0)) {
        *(undefined4 *)((int)this + 0x50) = 0;
        *(undefined4 *)((int)this + 0x54) = 0;
      }
      uVar3 = *(uint *)((int)this + 0x50);
      *(uint *)((int)this + 0x50) = uVar3 + (uint)local_6c;
      iVar12 = *(int *)((int)this + 0x54) + local_6c._4_4_ + (uint)CARRY4(uVar3,(uint)local_6c);
      *(int *)((int)this + 0x54) = iVar12;
      if ((iVar12 <= param_2) &&
         (((iVar12 < param_2 || (*(uint *)((int)this + 0x50) <= param_1)) &&
          (lVar17 = FUN_00c4c3a0((int)this,-1), CONCAT44(param_2,param_1) <= lVar17)))) {
        *(undefined8 *)((int)this + 0x68) = 0;
        *(undefined8 *)((int)this + 0x70) = 0;
        return 0;
      }
      local_84._0_4_ = 0xffffff7f;
      goto LAB_00c4e103;
    }
    ogg_stream_packetout(piVar1,(void *)0x0);
    iVar12 = ogg_stream_packetpeek(piVar1,local_20);
  } while( true );
}


//// FUNCTION FUN_00c4e140 @ 00c4e140 ////

int __thiscall FUN_00c4e140(void *this,uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  int local_30 [4];
  undefined4 local_20 [4];
  uint local_10;
  uint local_c;
  
  iVar2 = FUN_00c4db40(this,param_1,param_2);
  if ((iVar2 < 0) || (iVar2 = FUN_00c4c060(), iVar5 = 0, iVar2 != 0)) {
    return iVar2;
  }
  while( true ) {
    while( true ) {
      iVar2 = (int)this + 0x78;
      iVar3 = ogg_stream_packetpeek(iVar2,local_20);
      if (iVar3 < 1) break;
      iVar3 = FUN_00c7d790(*(int *)((int)this + 0x60) * 0x20 + *(int *)((int)this + 0x48),local_20);
      if (iVar3 < 0) {
        ogg_stream_packetout(iVar2,(void *)0x0);
      }
      else {
        if (iVar5 != 0) {
          uVar6 = *(uint *)((int)this + 0x50);
          uVar4 = iVar5 + iVar3 >> 2;
          *(uint *)((int)this + 0x50) = uVar6 + uVar4;
          *(uint *)((int)this + 0x54) =
               *(int *)((int)this + 0x54) + (iVar5 + iVar3 >> 0x1f) + (uint)CARRY4(uVar6,uVar4);
        }
        iVar5 = vorbis_info_blocksize(*(int *)((int)this + 0x48),1);
        uVar6 = iVar5 + iVar3 >> 2;
        iVar5 = (iVar5 + iVar3 >> 0x1f) + *(int *)((int)this + 0x54) +
                (uint)CARRY4(uVar6,*(uint *)((int)this + 0x50));
        if ((param_2 < iVar5) ||
           ((param_2 <= iVar5 && (param_1 <= uVar6 + *(uint *)((int)this + 0x50)))))
        goto LAB_00c4e33f;
        ogg_stream_packetout(iVar2,(void *)0x0);
        FUN_00c7d6c0((int *)((int)this + 0x250),local_20);
        FUN_00c317e0((int)this + 0x1e0,(int *)((int)this + 0x250));
        iVar5 = iVar3;
        if ((-2 < (int)local_c) && (local_c < 0x80000000)) {
          iVar2 = *(int *)((int)this + 0x44);
          iVar3 = *(int *)((int)this + 0x60) * 0x10;
          puVar7 = (uint *)(iVar3 + iVar2);
          iVar3 = (local_c - *(int *)(iVar3 + 4 + iVar2)) - (uint)(local_10 < *puVar7);
          *(uint *)((int)this + 0x50) = local_10 - *puVar7;
          iVar8 = 0;
          *(int *)((int)this + 0x54) = iVar3;
          if ((iVar3 < 1) && (iVar3 < 0)) {
            *(undefined4 *)((int)this + 0x50) = 0;
            *(undefined4 *)((int)this + 0x54) = 0;
          }
          if (0 < *(int *)((int)this + 0x60)) {
            puVar7 = (uint *)(iVar2 + 8);
            do {
              uVar6 = *puVar7;
              uVar4 = *(uint *)((int)this + 0x50);
              *(uint *)((int)this + 0x50) = uVar4 + uVar6;
              *(uint *)((int)this + 0x54) =
                   *(int *)((int)this + 0x54) + puVar7[1] + (uint)CARRY4(uVar4,uVar6);
              iVar8 = iVar8 + 1;
              puVar7 = puVar7 + 4;
            } while (iVar8 < *(int *)((int)this + 0x60));
          }
        }
      }
    }
    if (((iVar3 < 0) && (iVar3 != -3)) ||
       (lVar10 = FUN_00c4cc80(local_30,0xffffffff,-1), lVar10 < 0)) break;
    iVar2 = ogg_page_serialno(local_30);
    if (*(int *)((int)this + 0x5c) != iVar2) {
      FUN_00c4c0d0();
    }
    if (*(int *)((int)this + 0x58) < 3) {
      iVar2 = ogg_page_serialno(local_30);
      iVar5 = 0;
      *(int *)((int)this + 0x5c) = iVar2;
      if (0 < *(int *)((int)this + 0x34)) {
        piVar9 = *(int **)((int)this + 0x40);
        do {
          if (*piVar9 == iVar2) break;
          iVar5 = iVar5 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar5 < *(int *)((int)this + 0x34));
      }
      if (iVar5 == *(int *)((int)this + 0x34)) {
        return -0x89;
      }
      *(int *)((int)this + 0x60) = iVar5;
      ogg_stream_reset_serialno((int)this + 0x78);
      *(undefined4 *)((int)this + 0x58) = 3;
      iVar2 = FUN_00c4c060();
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar5 = 0;
    }
    ogg_stream_pagein((int *)((int)this + 0x78),local_30);
  }
LAB_00c4e33f:
  *(undefined8 *)((int)this + 0x68) = 0;
  *(undefined8 *)((int)this + 0x70) = 0;
  if (*(int *)((int)this + 0x54) <= param_2) {
    if (*(int *)((int)this + 0x54) < param_2) goto LAB_00c4e370;
    uVar6 = *(uint *)((int)this + 0x50);
    while (uVar6 < param_1) {
LAB_00c4e370:
      do {
        uVar4 = param_1 - *(uint *)((int)this + 0x50);
        iVar2 = (param_2 - *(int *)((int)this + 0x54)) -
                (uint)(param_1 < *(uint *)((int)this + 0x50));
        uVar6 = FUN_00c32190((int)this + 0x1e0,(undefined4 *)0x0);
        if ((iVar2 <= (int)uVar6 >> 0x1f) && ((iVar2 < (int)uVar6 >> 0x1f || (uVar4 < uVar6)))) {
          uVar6 = uVar4;
        }
        FUN_00c321e0((int)this + 0x1e0,uVar6);
        uVar1 = *(uint *)((int)this + 0x50);
        iVar5 = (int)uVar6 >> 0x1f;
        *(uint *)((int)this + 0x50) = uVar1 + uVar6;
        *(uint *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar5 + (uint)CARRY4(uVar1,uVar6)
        ;
        if ((iVar5 <= iVar2) &&
           (((iVar5 < iVar2 || (uVar6 < uVar4)) &&
            (iVar2 = FUN_00c4d480((undefined4 *)0x0,1,1), iVar2 < 1)))) {
          lVar10 = FUN_00c4c3a0((int)this,-1);
          *(longlong *)((int)this + 0x50) = lVar10;
        }
      } while (*(int *)((int)this + 0x54) < param_2);
      if (param_2 < *(int *)((int)this + 0x54)) {
        return 0;
      }
      uVar6 = *(uint *)((int)this + 0x50);
    }
  }
  return 0;
}


//// FUNCTION FUN_00c4e420 @ 00c4e420 ////

int __thiscall FUN_00c4e420(void *this,double param_1)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  FUN_00c4c3a0((int)this,-1);
  fVar3 = FUN_00c4c410((int)this,-1);
  dVar1 = (double)fVar3;
  if (1 < *(int *)((int)this + 0x58)) {
    if (*(int *)((int)this + 4) == 0) {
      return -0x8a;
    }
    if ((0.0 <= param_1) && (param_1 <= dVar1)) {
      iVar2 = *(int *)((int)this + 0x34);
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 < 0) break;
        fVar3 = FUN_00c4c410((int)this,iVar2);
        dVar1 = (double)((float10)dVar1 - fVar3);
      } while (param_1 < dVar1);
      uVar4 = FUN_00acd42c();
      iVar2 = FUN_00c4e140(this,(uint)uVar4,(int)(uVar4 >> 0x20));
      return iVar2;
    }
  }
  return -0x83;
}


//// FUNCTION FUN_00c4e530 @ 00c4e530 ////

undefined4 __thiscall FUN_00c4e530(void *this,double param_1)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  ulonglong uVar5;
  
  FUN_00c4c3a0((int)this,-1);
  fVar4 = FUN_00c4c410((int)this,-1);
  dVar1 = (double)fVar4;
  if (1 < *(int *)((int)this + 0x58)) {
    if (*(int *)((int)this + 4) == 0) {
      return 0xffffff76;
    }
    if ((0.0 <= param_1) && (param_1 <= dVar1)) {
      iVar2 = *(int *)((int)this + 0x34);
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 < 0) break;
        fVar4 = FUN_00c4c410((int)this,iVar2);
        dVar1 = (double)((float10)dVar1 - fVar4);
      } while (param_1 < dVar1);
      uVar5 = FUN_00acd42c();
      uVar3 = FUN_00c4db40(this,(uint)uVar5,(int)(uVar5 >> 0x20));
      return uVar3;
    }
  }
  return 0xffffff7d;
}


//// FUNCTION FUN_00c4e640 @ 00c4e640 ////

uint __fastcall
FUN_00c4e640(int param_1,short *param_2,int param_3,short *param_4,int param_5,int param_6,
            undefined4 *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int iVar4;
  uint local_2c;
  int local_20;
  int local_1c;
  short *local_18;
  short *local_14;
  int local_10;
  int local_c;
  
  local_14 = (short *)FUN_00c4c610();
  if (1 < *(int *)(param_1 + 0x58)) {
    while ((*(int *)(param_1 + 0x58) != 4 ||
           (local_2c = FUN_00c32190(param_1 + 0x1e0,&local_1c), local_2c == 0))) {
      uVar1 = FUN_00c4d480((undefined4 *)0x0,1,1);
      if (uVar1 == 0xfffffffe) {
        return 0;
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    if ((int)local_2c < 1) {
      return local_2c;
    }
    iVar2 = FUN_00c4c5b0(param_1,-1);
    iVar2 = *(int *)(iVar2 + 4);
    local_10 = iVar2 * param_5;
    if (param_3 / local_10 < (int)local_2c) {
      local_2c = param_3 / local_10;
    }
    if (0 < (int)local_2c) {
      if (param_5 == 1) {
        iVar4 = 0;
        if (0 < (int)local_2c) {
          do {
            iVar3 = 0;
            if (0 < iVar2) {
              do {
                iVar3 = FUN_00c4c030((double)(*(float *)(*(int *)(local_1c + iVar3 * 4) + iVar4 * 4)
                                             * 128.0));
                if (iVar3 < 0x80) {
                  if (iVar3 < -0x80) {
                    iVar3 = -0x80;
                  }
                }
                else {
                  iVar3 = 0x7f;
                }
                *(byte *)param_2 = (char)iVar3 + ((param_6 != 0) - 1U & 0x80);
                param_2 = (short *)((int)param_2 + 1);
                iVar3 = extraout_EDX + 1;
              } while (iVar3 < iVar2);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)local_2c);
        }
      }
      else {
        local_18 = (short *)((param_6 != 0) - 1 & 0x8000);
        if (local_14 == param_4) {
          if (param_6 == 0) {
            local_20 = 0;
            if (0 < iVar2) {
              do {
                local_c = *(int *)(local_1c + local_20 * 4);
                iVar4 = 0;
                local_14 = param_2;
                if (0 < (int)local_2c) {
                  do {
                    iVar4 = FUN_00c4c030((double)(*(float *)(local_c + iVar4 * 4) * 32768.0));
                    if (iVar4 < 0x8000) {
                      if (iVar4 < -0x8000) {
                        iVar4 = -0x8000;
                      }
                    }
                    else {
                      iVar4 = 0x7fff;
                    }
                    *param_2 = (short)local_18 + (short)iVar4;
                    param_2 = param_2 + iVar2;
                    iVar4 = extraout_EDX_01 + 1;
                  } while (iVar4 < (int)local_2c);
                }
                local_20 = local_20 + 1;
                param_2 = local_14 + 1;
                local_14 = param_2;
              } while (local_20 < iVar2);
            }
          }
          else {
            local_20 = 0;
            if (0 < iVar2) {
              do {
                iVar4 = *(int *)(local_1c + local_20 * 4);
                iVar3 = 0;
                local_18 = param_2;
                if (0 < (int)local_2c) {
                  local_14 = (short *)(iVar2 * 2);
                  do {
                    iVar3 = FUN_00c4c030((double)(*(float *)(iVar4 + iVar3 * 4) * 32768.0));
                    if (iVar3 < 0x8000) {
                      if (iVar3 < -0x8000) {
                        iVar3 = -0x8000;
                      }
                    }
                    else {
                      iVar3 = 0x7fff;
                    }
                    *param_2 = (short)iVar3;
                    param_2 = (short *)((int)param_2 + (int)local_14);
                    iVar3 = extraout_EDX_00 + 1;
                  } while (iVar3 < (int)local_2c);
                }
                local_20 = local_20 + 1;
                param_2 = local_18 + 1;
                local_18 = param_2;
              } while (local_20 < iVar2);
            }
          }
        }
        else if (param_4 == (short *)0x0) {
          iVar4 = 0;
          if (0 < (int)local_2c) {
            do {
              iVar3 = 0;
              if (0 < iVar2) {
                do {
                  iVar3 = FUN_00c4c030((double)(*(float *)(*(int *)(local_1c + iVar3 * 4) +
                                                          iVar4 * 4) * 32768.0));
                  if (iVar3 < 0x8000) {
                    if (iVar3 < -0x8000) {
                      iVar3 = -0x8000;
                    }
                  }
                  else {
                    iVar3 = 0x7fff;
                  }
                  *(char *)param_2 = (char)(iVar3 + (int)local_18);
                  *(char *)((int)param_2 + 1) = (char)((uint)(iVar3 + (int)local_18) >> 8);
                  param_2 = param_2 + 1;
                  iVar3 = extraout_EDX_03 + 1;
                } while (iVar3 < iVar2);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)local_2c);
          }
        }
        else {
          iVar4 = 0;
          if (0 < (int)local_2c) {
            do {
              iVar3 = 0;
              if (0 < iVar2) {
                do {
                  iVar3 = FUN_00c4c030((double)(*(float *)(*(int *)(local_1c + iVar3 * 4) +
                                                          iVar4 * 4) * 32768.0));
                  if (iVar3 < 0x8000) {
                    if (iVar3 < -0x8000) {
                      iVar3 = -0x8000;
                    }
                  }
                  else {
                    iVar3 = 0x7fff;
                  }
                  *(char *)param_2 = (char)((uint)(iVar3 + (int)local_18) >> 8);
                  *(char *)((int)param_2 + 1) = (char)(iVar3 + (int)local_18);
                  param_2 = param_2 + 1;
                  iVar3 = extraout_EDX_02 + 1;
                } while (iVar3 < iVar2);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)local_2c);
          }
        }
      }
      FUN_00c321e0(param_1 + 0x1e0,local_2c);
      uVar1 = *(uint *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = uVar1 + local_2c;
      *(uint *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) + ((int)local_2c >> 0x1f) + (uint)CARRY4(uVar1,local_2c);
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = *(undefined4 *)(param_1 + 0x60);
      }
      return local_10 * local_2c;
    }
  }
  return 0xffffff7d;
}


//// FUNCTION FUN_00c4eab0 @ 00c4eab0 ////

int FUN_00c4eab0(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x58);
  while( true ) {
    if (iVar1 == 4) {
      return 0;
    }
    iVar1 = FUN_00c4d480((undefined4 *)0x0,1,0);
    if ((iVar1 < 0) && (iVar1 != -3)) break;
    iVar1 = *(int *)(unaff_ESI + 0x58);
  }
  return iVar1;
}


//// FUNCTION FUN_00c4eae0 @ 00c4eae0 ////

int FUN_00c4eae0(void)

{
  int iVar1;
  int unaff_ESI;
  
  do {
    if (*(int *)(unaff_ESI + 0x58) == 4) {
      iVar1 = FUN_00c32190(unaff_ESI + 0x1e0,(undefined4 *)0x0);
      if (iVar1 != 0) {
        return 0;
      }
    }
    iVar1 = FUN_00c4d480((undefined4 *)0x0,1,0);
  } while ((-1 < iVar1) || (iVar1 == -3));
  return iVar1;
}


//// FUNCTION FUN_00c4eb20 @ 00c4eb20 ////

void FUN_00c4eb20(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar5 = 0;
  local_4 = 0;
  if (param_5 < 1) {
    return;
  }
  do {
    local_8 = FUN_00c32190(param_3,&local_c);
    if (local_8 == 0) {
      iVar2 = FUN_00c4d480((undefined4 *)0x0,1,0);
      if (iVar2 == -2) {
        if (param_5 <= iVar5) {
          return;
        }
        uVar1 = FUN_00c32200(param_1 + 0x1e0,&local_c);
        if (uVar1 == 0) {
          iVar2 = 0;
          if (*(int *)(param_2 + 4) < 1) {
            return;
          }
          uVar1 = param_5 * 4 - iVar5;
          do {
            puVar6 = (undefined4 *)(*(int *)(param_4 + iVar2 * 4) + iVar5 * 4);
            for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar6 = 0;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(param_2 + 4));
          return;
        }
        if (param_5 - iVar5 < (int)uVar1) {
          uVar1 = param_5 - iVar5;
        }
        iVar2 = 0;
        if (*(int *)(param_2 + 4) < 1) {
          return;
        }
        do {
          puVar6 = *(undefined4 **)(local_c + iVar2 * 4);
          puVar7 = (undefined4 *)(*(int *)(param_4 + iVar2 * 4) + iVar5 * 4);
          for (uVar3 = uVar1 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_2 + 4));
        return;
      }
    }
    else {
      if (param_5 - iVar5 < (int)local_8) {
        local_8 = param_5 - iVar5;
      }
      iVar4 = 0;
      iVar2 = iVar5;
      if (0 < *(int *)(param_2 + 4)) {
        do {
          puVar6 = *(undefined4 **)(local_c + iVar4 * 4);
          puVar7 = (undefined4 *)(*(int *)(param_4 + iVar4 * 4) + iVar5 * 4);
          for (uVar1 = local_8 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          iVar4 = iVar4 + 1;
          iVar2 = local_4;
        } while (iVar4 < *(int *)(param_2 + 4));
      }
      iVar5 = iVar2 + local_8;
      local_4 = iVar5;
      FUN_00c321e0(param_3,local_8);
    }
    if (param_5 <= iVar5) {
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00c4ecc0 @ 00c4ecc0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __fastcall FUN_00c4ecc0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 uStack_34;
  int local_10;
  undefined4 *local_c;
  undefined1 *local_8;
  
  if (param_1 != param_2) {
    if ((*(int *)(param_1 + 0x58) < 2) || (*(int *)(param_2 + 0x58) < 2)) {
      return -0x83;
    }
    uStack_34 = 0xc4ecff;
    iVar3 = FUN_00c4eab0();
    if (iVar3 != 0) {
      return iVar3;
    }
    uStack_34 = 0xc4ed0e;
    iVar3 = FUN_00c4eae0();
    if (iVar3 != 0) {
      return iVar3;
    }
    uStack_34 = 0xc4ed20;
    iVar4 = FUN_00c4c5b0(param_1,-1);
    uStack_34 = 0xc4ed2c;
    iVar5 = FUN_00c4c5b0(param_2,-1);
    uStack_34 = 0xc4ed36;
    uVar6 = FUN_00c4c240(param_1);
    uStack_34 = 0xc4ed40;
    FUN_00c4c240(param_2);
    iVar3 = *(int *)(iVar4 + 4);
    uStack_34 = 0xc4ed54;
    iVar2 = iVar3 * -4;
    local_8 = &stack0xffffffd0 + iVar2;
    puVar11 = &stack0xffffffd0 + iVar2;
    (&uStack_34)[-iVar3] = 0xc4ed60;
    iVar7 = vorbis_info_blocksize(iVar4,0);
    iVar7 = iVar7 >> ((char)uVar6 + 1U & 0x1f);
    (&uStack_34)[-iVar3] = 0xc4ed72;
    vorbis_info_blocksize(iVar5,0);
    (&uStack_34)[-iVar3] = 0xc4ed88;
    puVar8 = FUN_00c32530(param_1 + 0x1e0,0);
    (&uStack_34)[-iVar3] = 0xc4ed9e;
    puVar9 = FUN_00c32530(param_2 + 0x1e0,0);
    local_10 = 0;
    puVar10 = &stack0xffffffd0 + iVar2;
    if (0 < *(int *)(iVar4 + 4)) {
      do {
        *(undefined4 *)(puVar10 + -4) = 0xc4edc2;
        iVar3 = iVar7 * -4;
        puVar11 = puVar10 + iVar3;
        *(undefined1 **)(local_8 + local_10 * 4) = puVar10 + iVar3;
        local_10 = local_10 + 1;
        puVar10 = puVar10 + iVar3;
      } while (local_10 < *(int *)(iVar4 + 4));
    }
    puVar10 = local_8;
    *(int *)(puVar11 + -4) = iVar7;
    *(undefined1 **)(puVar11 + -8) = puVar10;
    *(int *)(puVar11 + -0xc) = param_1 + 0x1e0;
    *(int *)(puVar11 + -0x10) = iVar4;
    *(int *)(puVar11 + -0x14) = param_1;
    *(undefined4 *)(puVar11 + -0x18) = 0xc4edeb;
    FUN_00c4eb20(*(int *)(puVar11 + -0x14),*(int *)(puVar11 + -0x10),*(int *)(puVar11 + -0xc),
                 *(int *)(puVar11 + -8),*(int *)(puVar11 + -4));
    *(undefined4 *)(puVar11 + -4) = 0xc4edf6;
    FUN_00c32200(param_2 + 0x1e0,&local_c);
    uVar6 = *local_c;
    *(undefined4 *)(puVar11 + -4) = 0;
    *(undefined4 *)(puVar11 + -8) = 0;
    *(undefined4 *)(puVar11 + -0xc) = 0;
    *(undefined4 *)(puVar11 + -0x10) = 0;
    *(int *)(puVar11 + -0x14) = iVar7 * 2;
    *(undefined4 *)(puVar11 + -0x18) = uVar6;
    *(undefined4 *)(puVar11 + -0x1c) = 0xc4ee14;
    FUN_00c344a0(&DAT_00dacbf4,*(float **)(puVar11 + -0x18),*(int *)(puVar11 + -0x14),
                 *(int *)(puVar11 + -0x10),*(int *)(puVar11 + -0xc),*(uint *)(puVar11 + -8),
                 *(int *)(puVar11 + -4));
    uVar6 = local_c[1];
    *(undefined4 *)(puVar11 + -4) = 0;
    *(undefined4 *)(puVar11 + -8) = 0;
    *(undefined4 *)(puVar11 + -0xc) = 0;
    *(undefined4 *)(puVar11 + -0x10) = 0;
    *(int *)(puVar11 + -0x14) = iVar7 * 2;
    *(undefined4 *)(puVar11 + -0x18) = uVar6;
    *(undefined4 *)(puVar11 + -0x1c) = 0xc4ee30;
    FUN_00c344a0(&DAT_00dacbec,*(float **)(puVar11 + -0x18),*(int *)(puVar11 + -0x14),
                 *(int *)(puVar11 + -0x10),*(int *)(puVar11 + -0xc),*(uint *)(puVar11 + -8),
                 *(int *)(puVar11 + -4));
    puVar10 = local_8;
    uVar6 = *(undefined4 *)(iVar5 + 4);
    *(undefined **)(puVar11 + -4) = puVar9;
    uVar1 = *(undefined4 *)(iVar4 + 4);
    *(undefined4 *)(puVar11 + -8) = uVar6;
    *(undefined4 *)(puVar11 + -0xc) = uVar1;
    *(undefined1 **)(puVar11 + -0x10) = puVar10;
    *(undefined4 **)(puVar11 + -0x14) = local_c;
    *(undefined4 *)(puVar11 + -0x18) = 0xc4ee54;
    FUN_00c4c620(iVar7,(int)puVar8,*(int **)(puVar11 + -0x14),*(int *)(puVar11 + -0x10),
                 *(int *)(puVar11 + -0xc),*(int *)(puVar11 + -8),*(int *)(puVar11 + -4));
  }
  return 0;
}


//// FUNCTION FUN_00c4ee60 @ 00c4ee60 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_00c4ee60(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int extraout_ECX;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 *local_c;
  int local_8;
  
  if (1 < *(int *)(in_EAX + 0x58)) {
    iVar4 = FUN_00c4eab0();
    if (iVar4 == 0) {
      iVar4 = FUN_00c4c5b0(in_EAX,-1);
      local_18 = iVar4;
      local_14 = FUN_00c4c240(extraout_ECX);
      iVar1 = *(int *)(iVar4 + 4);
      local_14 = local_14 + 1;
      iVar5 = vorbis_info_blocksize(iVar4,0);
      iVar5 = iVar5 >> ((byte)local_14 & 0x1f);
      local_8 = in_EAX + 0x1e0;
      puVar6 = FUN_00c32530(local_8,0);
      iVar4 = iVar1 * -4;
      puVar9 = &stack0xffffffd4 + iVar4;
      puVar8 = &stack0xffffffd4 + iVar4;
      local_c = &stack0xffffffd4 + iVar4;
      local_10 = 0;
      if (0 < iVar1) {
        do {
          *(undefined4 *)(puVar8 + -4) = 0xc4ef02;
          iVar4 = iVar5 * -4;
          puVar9 = puVar8 + iVar4;
          *(undefined1 **)(local_c + local_10 * 4) = puVar8 + iVar4;
          local_10 = local_10 + 1;
          puVar8 = puVar8 + iVar4;
        } while (local_10 < iVar1);
      }
      iVar3 = local_8;
      puVar8 = local_c;
      iVar4 = local_18;
      *(int *)(puVar9 + -4) = iVar5;
      *(undefined1 **)(puVar9 + -8) = puVar8;
      *(int *)(puVar9 + -0xc) = iVar3;
      *(int *)(puVar9 + -0x10) = iVar4;
      *(int *)(puVar9 + -0x14) = in_EAX;
      *(undefined4 *)(puVar9 + -0x18) = 0xc4ef28;
      FUN_00c4eb20(*(int *)(puVar9 + -0x14),*(int *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),
                   *(int *)(puVar9 + -8),*(int *)(puVar9 + -4));
      *(undefined4 *)(puVar9 + -4) = param_2;
      *(undefined4 *)(puVar9 + -8) = param_1;
      puVar10 = puVar9 + -0xc;
      *(undefined4 *)(puVar9 + -0xc) = 0xc4ef35;
      iVar4 = (*(code *)param_3)();
      if (iVar4 == 0) {
        *(undefined4 *)(puVar10 + -4) = 0xc4ef3e;
        iVar4 = FUN_00c4eae0();
        if (iVar4 == 0) {
          *(undefined4 *)(puVar10 + -4) = 0xc4ef4c;
          iVar4 = FUN_00c4c5b0(in_EAX,-1);
          uVar2 = *(undefined4 *)(iVar4 + 4);
          *(undefined4 *)(puVar10 + -4) = 0xc4ef5b;
          vorbis_info_blocksize(iVar4,0);
          iVar4 = local_8;
          *(undefined4 *)(puVar10 + -4) = 0xc4ef6c;
          puVar7 = FUN_00c32530(iVar4,0);
          iVar4 = local_8;
          *(undefined4 *)(puVar10 + -4) = 0xc4ef7a;
          FUN_00c32200(iVar4,&local_1c);
          puVar8 = local_c;
          *(undefined **)(puVar10 + -4) = puVar7;
          *(undefined4 *)(puVar10 + -8) = uVar2;
          *(int *)(puVar10 + -0xc) = iVar1;
          *(undefined1 **)(puVar10 + -0x10) = puVar8;
          *(undefined4 *)(puVar10 + -0x14) = local_1c;
          *(undefined4 *)(puVar10 + -0x18) = 0xc4ef97;
          FUN_00c4c620(iVar5,(int)puVar6,*(int **)(puVar10 + -0x14),*(int *)(puVar10 + -0x10),
                       *(int *)(puVar10 + -0xc),*(int *)(puVar10 + -8),*(int *)(puVar10 + -4));
          iVar4 = 0;
        }
      }
    }
    return iVar4;
  }
  return -0x83;
}


//// FUNCTION FUN_00c4f010 @ 00c4f010 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_00c4f010(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int extraout_ECX;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 *local_c;
  int local_8;
  
  if (1 < *(int *)(in_EAX + 0x58)) {
    iVar4 = FUN_00c4eab0();
    if (iVar4 == 0) {
      iVar4 = FUN_00c4c5b0(in_EAX,-1);
      local_18 = iVar4;
      local_14 = FUN_00c4c240(extraout_ECX);
      iVar1 = *(int *)(iVar4 + 4);
      local_14 = local_14 + 1;
      iVar5 = vorbis_info_blocksize(iVar4,0);
      iVar5 = iVar5 >> ((byte)local_14 & 0x1f);
      local_8 = in_EAX + 0x1e0;
      puVar6 = FUN_00c32530(local_8,0);
      iVar4 = iVar1 * -4;
      puVar9 = &stack0xffffffd4 + iVar4;
      puVar8 = &stack0xffffffd4 + iVar4;
      local_c = &stack0xffffffd4 + iVar4;
      local_10 = 0;
      if (0 < iVar1) {
        do {
          *(undefined4 *)(puVar8 + -4) = 0xc4f0b2;
          iVar4 = iVar5 * -4;
          puVar9 = puVar8 + iVar4;
          *(undefined1 **)(local_c + local_10 * 4) = puVar8 + iVar4;
          local_10 = local_10 + 1;
          puVar8 = puVar8 + iVar4;
        } while (local_10 < iVar1);
      }
      iVar3 = local_8;
      puVar8 = local_c;
      iVar4 = local_18;
      *(int *)(puVar9 + -4) = iVar5;
      *(undefined1 **)(puVar9 + -8) = puVar8;
      *(int *)(puVar9 + -0xc) = iVar3;
      *(int *)(puVar9 + -0x10) = iVar4;
      *(int *)(puVar9 + -0x14) = in_EAX;
      *(undefined4 *)(puVar9 + -0x18) = 0xc4f0d8;
      FUN_00c4eb20(*(int *)(puVar9 + -0x14),*(int *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),
                   *(int *)(puVar9 + -8),*(int *)(puVar9 + -4));
      *(ulonglong *)(puVar9 + -8) = CONCAT44(param_2,param_1);
      puVar10 = puVar9 + -0xc;
      *(undefined4 *)(puVar9 + -0xc) = 0xc4f0e6;
      iVar4 = (*(code *)param_3)();
      if (iVar4 == 0) {
        *(undefined4 *)(puVar10 + -4) = 0xc4f0ef;
        iVar4 = FUN_00c4eae0();
        if (iVar4 == 0) {
          *(undefined4 *)(puVar10 + -4) = 0xc4f0fd;
          iVar4 = FUN_00c4c5b0(in_EAX,-1);
          uVar2 = *(undefined4 *)(iVar4 + 4);
          *(undefined4 *)(puVar10 + -4) = 0xc4f10c;
          vorbis_info_blocksize(iVar4,0);
          iVar4 = local_8;
          *(undefined4 *)(puVar10 + -4) = 0xc4f11d;
          puVar7 = FUN_00c32530(iVar4,0);
          iVar4 = local_8;
          *(undefined4 *)(puVar10 + -4) = 0xc4f12b;
          FUN_00c32200(iVar4,&local_1c);
          puVar8 = local_c;
          *(undefined **)(puVar10 + -4) = puVar7;
          *(undefined4 *)(puVar10 + -8) = uVar2;
          *(int *)(puVar10 + -0xc) = iVar1;
          *(undefined1 **)(puVar10 + -0x10) = puVar8;
          *(undefined4 *)(puVar10 + -0x14) = local_1c;
          *(undefined4 *)(puVar10 + -0x18) = 0xc4f148;
          FUN_00c4c620(iVar5,(int)puVar6,*(int **)(puVar10 + -0x14),*(int *)(puVar10 + -0x10),
                       *(int *)(puVar10 + -0xc),*(int *)(puVar10 + -8),*(int *)(puVar10 + -4));
          iVar4 = 0;
        }
      }
    }
    return iVar4;
  }
  return -0x83;
}


//// FUNCTION FUN_00c4f1a0 @ 00c4f1a0 ////

undefined4 FUN_00c4f1a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_ESI;
  longlong lVar6;
  int local_10 [4];
  
  iVar1 = unaff_ESI[3];
  iVar2 = unaff_ESI[2];
  iVar4 = unaff_ESI[0x17];
  FUN_00bd9fd0((void *)*unaff_ESI,0,1);
  iVar3 = GetField_4_00bd9ef0(*unaff_ESI);
  unaff_ESI[4] = iVar3;
  unaff_ESI[5] = 0;
  unaff_ESI[3] = unaff_ESI[5];
  unaff_ESI[2] = iVar3;
  lVar6 = FUN_00c4cd40(local_10);
  if (((int)((ulonglong)lVar6 >> 0x20) == 0 || lVar6 < 0) && (lVar6 < 0)) {
    return (int)lVar6;
  }
  iVar3 = ogg_page_serialno(local_10);
  if (iVar3 == iVar4) {
    iVar4 = FUN_00c4ce50((int)unaff_ESI,iVar4,0,0,lVar6,(uint)(lVar6 + 1),
                         (int)((ulonglong)(lVar6 + 1) >> 0x20),0);
    if (iVar4 == 0) goto LAB_00c4f256;
  }
  else {
    iVar4 = FUN_00c4ce50((int)unaff_ESI,iVar4,0,0,0,(uint)(lVar6 + 1),
                         (int)((ulonglong)(lVar6 + 1) >> 0x20),0);
    if (-1 < iVar4) {
LAB_00c4f256:
      FUN_00c4d1a0(iVar2,iVar1);
      uVar5 = FUN_00c4d840(unaff_ESI,0,0);
      return uVar5;
    }
  }
  return 0xffffff80;
}


//// FUNCTION FUN_00c4f280 @ 00c4f280 ////

int FUN_00c4f280(void)

{
  undefined4 *in_EAX;
  int iVar1;
  
  if (in_EAX[0x16] != 1) {
    return -0x83;
  }
  in_EAX[0x16] = 2;
  if (in_EAX[1] != 0) {
    iVar1 = FUN_00c4f1a0();
    if (iVar1 != 0) {
      *in_EAX = 0;
      FUN_00c4c0f0(in_EAX);
    }
    return iVar1;
  }
  in_EAX[0x16] = 3;
  return 0;
}


//// FUNCTION FUN_00c4f2d0 @ 00c4f2d0 ////

void __thiscall FUN_00c4f2d0(void *this,undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c4d720(this,param_2);
  if (iVar1 == 0) {
    FUN_00c4f280();
  }
  return;
}


//// FUNCTION FUN_00c4f330 @ 00c4f330 ////

undefined4 __fastcall FUN_00c4f330(float *param_1,float *param_2)

{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  if (*param_2 < *param_1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00c4f360 @ 00c4f360 ////

uint __fastcall FUN_00c4f360(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return (uint)(*param_2 < *param_1);
}


//// FUNCTION FUN_00c4f380 @ 00c4f380 ////

uint __fastcall FUN_00c4f380(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return (uint)(*param_2 < *param_1);
}


//// FUNCTION FUN_00c4f3a0 @ 00c4f3a0 ////

uint __fastcall FUN_00c4f3a0(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return (uint)(*param_2 < *param_1);
}


//// FUNCTION FUN_00c4f3c0 @ 00c4f3c0 ////

void __fastcall FUN_00c4f3c0(float *param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00c4f330(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00c4f330(param_1 + 1,param_2 + 1);
    if (iVar1 == 0) {
      uVar2 = FUN_00c4f360((int *)(param_1 + 2),(int *)(param_2 + 2));
      if (uVar2 == 0) {
        uVar2 = FUN_00c4f380((int *)(param_1 + 3),(int *)(param_2 + 3));
        if (uVar2 == 0) {
          FUN_00c4f3a0((int *)(param_1 + 4),(int *)(param_2 + 4));
          return;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00c4f420 @ 00c4f420 ////

void FUN_00c4f420(void)

{
  return;
}


//// FUNCTION FUN_00c4f430 @ 00c4f430 ////

int * __thiscall FUN_00c4f430(void *this,int param_1)

{
  float fVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  fVar1 = (float)param_1;
  *(int *)this = param_1 + 1;
  if (param_1 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar2 = -(param_1 + 1);
  *(int *)((int)this + 8) = iVar2;
  *(int *)((int)this + 0xc) = iVar2;
  *(float *)((int)this + 4) = fVar1 * fVar1;
  FUN_00c22820(this);
  return this;
}


//// FUNCTION FUN_00c4f490 @ 00c4f490 ////

void __fastcall FUN_00c4f490(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00c4f4b0 @ 00c4f4b0 ////

void FUN_00c4f4b0(void)

{
  return;
}


//// FUNCTION FUN_00c4f4c0 @ 00c4f4c0 ////

void __thiscall FUN_00c4f4c0(void *this,int *param_1)

{
  uint uVar1;
  
  *(undefined4 *)this = 1;
  uVar1 = FUN_00c1f1f0(param_1);
  *(uint *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}


//// FUNCTION FUN_00c4f4e0 @ 00c4f4e0 ////

int * FUN_00c4f4e0(void *param_1,float param_2,float *param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  piVar2 = (int *)FUN_00c1f4c0(param_1,param_2,(int *)&param_1);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  fVar4 = FUN_00bddd90((int)(piVar2 + 2));
  param_2 = (float)fVar4;
  iVar3 = (**(code **)(*piVar2 + 0x98))();
  fVar1 = (float)*(int *)(iVar3 + 8);
  if (*(int *)(iVar3 + 8) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *param_3 = (float)-(int)param_1 / (fVar1 * param_2);
  return piVar2;
}


//// FUNCTION FUN_00c4f550 @ 00c4f550 ////

undefined4 __fastcall FUN_00c4f550(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  return (int)((ulonglong)(((uint)uVar1 >> 1) + *(int *)(param_1 + 4)) / (uVar1 & 0xffffffff));
}


//// FUNCTION FUN_00c4f580 @ 00c4f580 ////

void __thiscall FUN_00c4f580(void *this,void *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
  if (*(int *)this == 1) {
    if (param_3 != '\0') {
      *(undefined4 *)this = 0;
      iVar1 = FUN_00c4f550((int)this);
      FUN_00c1f280(param_1,iVar1 + 1);
      *(int *)((int)this + 8) = iVar1;
      return;
    }
  }
  else {
    FUN_00c1f280(param_1,1);
    if (param_3 == '\0') {
      if (*(int *)((int)this + 8) != 0) {
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
      }
      if (*(int *)((int)this + 8) == 0) {
        *(undefined4 *)this = 1;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00c4f5f0 @ 00c4f5f0 ////

int * FUN_00c4f5f0(void *param_1,float param_2,float *param_3)

{
  int *piVar1;
  
  piVar1 = FUN_00c4f4e0(param_1,param_2,param_3);
  while ((piVar1 != (int *)0x0 && (1.0 <= *param_3))) {
    piVar1 = FUN_00c4f4e0(param_1,param_2,param_3);
  }
  return piVar1;
}


//// FUNCTION FUN_00c4f640 @ 00c4f640 ////

int * __fastcall FUN_00c4f640(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c4f690 @ 00c4f690 ////

void __fastcall FUN_00c4f690(int param_1)

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
  puStack_8 = &LAB_00d0541b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x38) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\MapAnalysisImpCRange.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x24);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null processor");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  FUN_00bcff70((void *)(*(int *)(param_1 + 0x38) + 0x28),(int *)(*(int *)(param_1 + 0x38) + 0x24),
               param_1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c4f780 @ 00c4f780 ////

void __fastcall FUN_00c4f780(int *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d05443;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  if (param_1[0xe] != 0) {
    ExceptionList = &local_c;
    FUN_00c4f690((int)param_1);
  }
  iVar1 = FUN_00bcecf0(param_1 + 0xc);
  while (iVar1 != 0) {
    FUN_00c4fbf0(iVar1);
    iVar1 = FUN_00bcecf0(param_1 + 0xc);
  }
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  param_1[0xb] = (int)&PTR_LAB_00dacc20;
  FUN_00bcffc0(param_1 + 0xc);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bcf880(param_1 + 5);
  local_4 = 0xffffffff;
  FUN_00bcf880(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c4f820 @ 00c4f820 ////

void __thiscall FUN_00c4f820(void *this,int param_1)

{
  if (*(int *)((int)this + 0x38) != 0) {
    FUN_00c4f690((int)this);
  }
  *(int *)((int)this + 0x38) = param_1;
  FUN_00bcfac0((void *)(param_1 + 0x28),(int *)(param_1 + 0x24),(int)this);
  return;
}


//// FUNCTION FUN_00c4f850 @ 00c4f850 ////

undefined4 * __fastcall FUN_00c4f850(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05460;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bcf160(param_1);
  local_4 = 0;
  FUN_00bcf160(param_1 + 5);
  param_1[10] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0xb] = &PTR_LAB_00dacc20;
  FUN_00bcf170(param_1 + 0xc);
  param_1[0xb] = &PTR_LAB_00dacc74;
  param_1[0xe] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c4f910 @ 00c4f910 ////

void __fastcall FUN_00c4f910(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacc20;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c4f9b0 @ 00c4f9b0 ////

undefined4 * __fastcall FUN_00c4f9b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacc20;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c4f9d0 @ 00c4f9d0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c4f9d0(void *this,byte param_1)

{
  FUN_00c4f910(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c4f9f0 @ 00c4f9f0 ////

void __fastcall FUN_00c4f9f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacc20;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c4fa00 @ 00c4fa00 ////

undefined4 * __fastcall FUN_00c4fa00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacc20;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00dacc74;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c4fa20 @ 00c4fa20 ////

undefined4 * __thiscall ScalarDeletingDtor_00c4fa20(void *this,byte param_1)

{
  FUN_00c4f9f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00dacc9c_00c4fa40 @ 00c4fa40 ////

void __fastcall SetVtable_00dacc9c_00c4fa40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacc9c;
  return;
}


//// FUNCTION FUN_00c4fad0 @ 00c4fad0 ////

undefined4 * __fastcall FUN_00c4fad0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0548e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00daccb4;
  FUN_00bcf160(param_1 + 1);
  local_4._0_1_ = 1;
  FUN_00bcf160(param_1 + 6);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00bcf160(param_1 + 0xb);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c4fb50 @ 00c4fb50 ////

void __fastcall FUN_00c4fb50(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00bed0b0(param_1,param_2);
  if (uVar1 == 0) {
    thunk_FUN_00c4f3c0((float *)(param_1 + 1),(float *)(param_2 + 1));
    return;
  }
  return;
}


//// FUNCTION FUN_00c4fbb0 @ 00c4fbb0 ////

void __fastcall FUN_00c4fbb0(int param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (*(int *)(param_1 + 0x60) == 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"ExternalGroup != NULL\n");
    DebugBreak();
  }
  FUN_00bcff70((void *)(*(int *)(param_1 + 0x60) + 0x1c),(int *)(*(int *)(param_1 + 0x60) + 0x18),
               param_1);
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


//// FUNCTION FUN_00c4fbf0 @ 00c4fbf0 ////

void __fastcall FUN_00c4fbf0(int param_1)

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
  puStack_8 = &LAB_00d054a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x58) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\MapAnalysisImpCModel.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x4e);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null range");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  FUN_00bcff70((void *)(*(int *)(param_1 + 0x58) + 0x30),(int *)(*(int *)(param_1 + 0x58) + 0x2c),
               param_1);
  *(undefined4 *)(param_1 + 0x58) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c4fce0 @ 00c4fce0 ////

void __fastcall FUN_00c4fce0(int param_1)

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
  puStack_8 = &LAB_00d054b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x5c) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\MapAnalysisImpCModel.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x68);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null group model");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  FUN_00bcff70((void *)(*(int *)(param_1 + 0x5c) + 0x34),(int *)(*(int *)(param_1 + 0x5c) + 0x30),
               param_1);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c4fdd0 @ 00c4fdd0 ////

void __thiscall FUN_00c4fdd0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x60) != 0) {
    FUN_00c4fbb0((int)this);
  }
  *(int *)((int)this + 0x60) = param_1;
  FUN_00bcfac0((void *)(param_1 + 0x1c),(int *)(param_1 + 0x18),(int)this);
  return;
}


//// FUNCTION FUN_00c4fe00 @ 00c4fe00 ////

void __fastcall FUN_00c4fe00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d054eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00daccb4;
  local_4 = 3;
  if (param_1[0x17] != 0) {
    FUN_00c4fce0((int)param_1);
  }
  if (param_1[0x16] != 0) {
    FUN_00c4fbf0((int)param_1);
  }
  if (param_1[0x18] != 0) {
    FUN_00c4fbb0((int)param_1);
  }
  local_4._0_1_ = 2;
  FUN_00bcf880(param_1 + 0xb);
  local_4._0_1_ = 1;
  FUN_00bcf880(param_1 + 6);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bcf880(param_1 + 1);
  *param_1 = &PTR_LAB_00dacc9c;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c4fe90 @ 00c4fe90 ////

void __thiscall FUN_00c4fe90(void *this,int param_1)

{
  if (*(int *)((int)this + 0x58) != 0) {
    FUN_00c4fbf0((int)this);
  }
  *(int *)((int)this + 0x58) = param_1;
  FUN_00bcfac0((void *)(param_1 + 0x30),(int *)(param_1 + 0x2c),(int)this);
  return;
}


//// FUNCTION FUN_00c4fec0 @ 00c4fec0 ////

void __thiscall FUN_00c4fec0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x5c) != 0) {
    FUN_00c4fce0((int)this);
  }
  *(int *)((int)this + 0x5c) = param_1;
  FUN_00bcfac0((void *)(param_1 + 0x34),(int *)(param_1 + 0x30),(int)this);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c50030 @ 00c50030 ////

undefined4 * __thiscall ScalarDeletingDtor_00c50030(void *this,byte param_1)

{
  FUN_00c4fe00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00dacd0c_00c50050 @ 00c50050 ////

void __fastcall SetVtable_00dacd0c_00c50050(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacd0c;
  return;
}


//// FUNCTION FUN_00c501c0 @ 00c501c0 ////

void __fastcall FUN_00c501c0(int param_1)

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
  puStack_8 = &LAB_00d05520;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x18) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\MapAnalysisImpCGroup.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x4f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null processor");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  FUN_00bcff70((void *)(*(int *)(param_1 + 0x18) + 0x34),(int *)(*(int *)(param_1 + 0x18) + 0x30),
               param_1);
  *(undefined4 *)(param_1 + 0x18) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c502b0 @ 00c502b0 ////

undefined4 * __thiscall FUN_00c502b0(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  LPCSTR pCVar1;
  undefined1 local_115;
  undefined4 *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05543;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (undefined4 *)
            FUN_00bcef50((void *)((int)this + 0x24),(void *)((int)this + 0x20),param_1,param_1);
  if (this_00 == (undefined4 *)0x0) {
    local_114 = operator_new(0x3c);
    local_4 = 0;
    this_00 = (undefined4 *)0x0;
    if (local_114 != (undefined4 *)0x0) {
      this_00 = FUN_00c7db40(local_114);
    }
    local_4 = 0xffffffff;
    if (this_00 == (undefined4 *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = 1;
      LH_LogErrorMessage(&local_110,".\\MapAnalysisImpCGroup.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x2e);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"EMEM");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_115,pCVar1);
      local_4 = 0xffffffff;
      local_110 = &PTR_LAB_00d9d9b4;
      DebugBreak();
    }
    this_00[7] = *param_1;
    this_00[8] = param_1[1];
    this_00[9] = param_1[2];
    this_00[10] = param_1[3];
    this_00[0xb] = param_1[4];
    FUN_00c7db10(this_00,(int)this);
  }
  ExceptionList = local_c;
  return this_00;
}


//// FUNCTION FUN_00c50410 @ 00c50410 ////

void __fastcall FUN_00c50410(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d0556b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00dacdb4;
  local_4 = 2;
  piVar1 = (int *)FUN_00bcecf0(param_1 + 9);
  while (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(1);
    piVar1 = (int *)FUN_00bcecf0(param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_00c501c0((int)param_1);
  }
  local_4._0_1_ = 1;
  param_1[8] = &PTR_LAB_00dacd48;
  FUN_00bcffc0(param_1 + 9);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bcf880(param_1 + 1);
  *param_1 = &PTR_LAB_00dacd0c;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c504b0 @ 00c504b0 ////

void __thiscall FUN_00c504b0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x18) != 0) {
    FUN_00c501c0((int)this);
  }
  *(int *)((int)this + 0x18) = param_1;
  FUN_00bcfac0((void *)(param_1 + 0x34),(int *)(param_1 + 0x30),(int)this);
  return;
}


//// FUNCTION FUN_00c504e0 @ 00c504e0 ////

undefined4 * __fastcall FUN_00c504e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05588;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00dacdb4;
  FUN_00bcf160(param_1 + 1);
  param_1[6] = 0;
  param_1[7] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[8] = &PTR_LAB_00dacd48;
  FUN_00bcf170(param_1 + 9);
  param_1[8] = &PTR_LAB_00dacd8c;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c50560 @ 00c50560 ////

int * __fastcall FUN_00c50560(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c50620 @ 00c50620 ////

void __fastcall FUN_00c50620(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacd48;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c506e0 @ 00c506e0 ////

undefined4 * __fastcall FUN_00c506e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacd48;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c50700 @ 00c50700 ////

undefined4 * __thiscall ScalarDeletingDtor_00c50700(void *this,byte param_1)

{
  FUN_00c50620(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c50720 @ 00c50720 ////

void __fastcall FUN_00c50720(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacd48;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c50750 @ 00c50750 ////

undefined4 * __fastcall FUN_00c50750(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacd48;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00dacd8c;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c50770 @ 00c50770 ////

undefined4 * __thiscall ScalarDeletingDtor_00c50770(void *this,byte param_1)

{
  FUN_00c50720(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c50790 @ 00c50790 ////

undefined4 * __thiscall ScalarDeletingDtor_00c50790(void *this,byte param_1)

{
  FUN_00c50410(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00dacdcc_00c507b0 @ 00c507b0 ////

void __fastcall SetVtable_00dacdcc_00c507b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacdcc;
  return;
}


//// FUNCTION FUN_00c507f0 @ 00c507f0 ////

int * __fastcall FUN_00c507f0(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c50820 @ 00c50820 ////

undefined4 __fastcall FUN_00c50820(int param_1)

{
  int iVar1;
  undefined2 unaff_SI;
  ulonglong uVar2;
  
  iVar1 = FUN_00bced20((undefined4 *)(param_1 + 0x28));
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00ad1180((double)(*(float *)(iVar1 + 0x28) / *(float *)(param_1 + 0x20)),unaff_SI);
  uVar2 = FUN_00acd42c();
  return (int)uVar2;
}


//// FUNCTION FUN_00c50960 @ 00c50960 ////

void __fastcall FUN_00c50960(int param_1)

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
  puStack_8 = &LAB_00d055c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x3c) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\MapAnalysisImpCProcessor.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x59);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null solver");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  FUN_00bcff70((void *)(*(int *)(param_1 + 0x3c) + 0x2c),(int *)(*(int *)(param_1 + 0x3c) + 0x28),
               param_1);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c50a50 @ 00c50a50 ////

void __fastcall FUN_00c50a50(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d055f3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00dacf00;
  local_4 = 3;
  piVar1 = (int *)FUN_00bcecf0(param_1 + 0xd);
  while (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(1);
    piVar1 = (int *)FUN_00bcecf0(param_1 + 0xd);
  }
  iVar2 = FUN_00bcecf0(param_1 + 10);
  while (iVar2 != 0) {
    FUN_00c4f690(iVar2);
    iVar2 = FUN_00bcecf0(param_1 + 10);
  }
  if (param_1[0xf] != 0) {
    FUN_00c50960((int)param_1);
  }
  local_4._0_1_ = 2;
  param_1[0xc] = &PTR_LAB_00dace5c;
  FUN_00bcffc0(param_1 + 0xd);
  local_4._0_1_ = 1;
  param_1[9] = &PTR_LAB_00dace34;
  FUN_00bcffc0(param_1 + 10);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bcf880(param_1 + 1);
  *param_1 = &PTR_LAB_00dacdcc;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c50b20 @ 00c50b20 ////

undefined4 * __thiscall FUN_00c50b20(void *this,undefined4 param_1)

{
  undefined4 *this_00;
  LPCSTR pCVar1;
  undefined1 local_115;
  undefined4 *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05616;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (undefined4 *)
            FUN_00bcef50((void *)((int)this + 0x34),(void *)((int)this + 0x30),&param_1,&param_1);
  if (this_00 == (undefined4 *)0x0) {
    local_114 = operator_new(0x2c);
    local_4 = 0;
    if (local_114 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00 = FUN_00c504e0(local_114);
    }
    local_4 = 0xffffffff;
    if (this_00 == (undefined4 *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = 1;
      LH_LogErrorMessage(&local_110,".\\MapAnalysisImpCProcessor.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x2f);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"EMEM");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_115,pCVar1);
      local_4 = 0xffffffff;
      local_110 = &PTR_LAB_00d9d9b4;
      DebugBreak();
    }
    this_00[7] = param_1;
    FUN_00c504b0(this_00,(int)this);
  }
  ExceptionList = local_c;
  return this_00;
}


//// FUNCTION FUN_00c50c70 @ 00c50c70 ////

void __thiscall FUN_00c50c70(void *this,int param_1)

{
  if (*(int *)((int)this + 0x3c) != 0) {
    FUN_00c50960((int)this);
  }
  *(int *)((int)this + 0x3c) = param_1;
  FUN_00bcfac0((void *)(param_1 + 0x2c),(int *)(param_1 + 0x28),(int)this);
  return;
}


//// FUNCTION FUN_00c50ca0 @ 00c50ca0 ////

undefined4 * __fastcall FUN_00c50ca0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0563e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00dacf00;
  FUN_00bcf160(param_1 + 1);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4._0_1_ = 1;
  param_1[9] = &PTR_LAB_00dace34;
  FUN_00bcf170(param_1 + 10);
  param_1[9] = &PTR_LAB_00daceb0;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0xc] = &PTR_LAB_00dace5c;
  FUN_00bcf170(param_1 + 0xd);
  param_1[0xc] = &PTR_LAB_00daced8;
  param_1[0xf] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c50d30 @ 00c50d30 ////

int * __fastcall FUN_00c50d30(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c50e40 @ 00c50e40 ////

void __fastcall FUN_00c50e40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dace34;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c50f10 @ 00c50f10 ////

void __fastcall FUN_00c50f10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dace5c;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c50fe0 @ 00c50fe0 ////

undefined4 * __fastcall FUN_00c50fe0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dace34;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c51000 @ 00c51000 ////

undefined4 * __fastcall FUN_00c51000(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dace5c;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c51020 @ 00c51020 ////

undefined4 * __thiscall ScalarDeletingDtor_00c51020(void *this,byte param_1)

{
  FUN_00c50e40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c51040 @ 00c51040 ////

undefined4 * __thiscall ScalarDeletingDtor_00c51040(void *this,byte param_1)

{
  FUN_00c50f10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c51060 @ 00c51060 ////

void __fastcall FUN_00c51060(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dace34;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c51070 @ 00c51070 ////

void __fastcall FUN_00c51070(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dace5c;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c510a0 @ 00c510a0 ////

undefined4 * __fastcall FUN_00c510a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dace34;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00daceb0;
  return param_1;
}


//// FUNCTION FUN_00c510c0 @ 00c510c0 ////

undefined4 * __fastcall FUN_00c510c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dace5c;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00daced8;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c510e0 @ 00c510e0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c510e0(void *this,byte param_1)

{
  FUN_00c51060(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c51100 @ 00c51100 ////

undefined4 * __thiscall ScalarDeletingDtor_00c51100(void *this,byte param_1)

{
  FUN_00c51070(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c51150 @ 00c51150 ////

undefined4 * __thiscall ScalarDeletingDtor_00c51150(void *this,byte param_1)

{
  FUN_00c50a50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00dacf20_00c51170 @ 00c51170 ////

void __fastcall SetVtable_00dacf20_00c51170(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacf20;
  return;
}


//// FUNCTION FUN_00c51220 @ 00c51220 ////

void __fastcall FUN_00c51220(int param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (*(int *)(param_1 + 0x24) == 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Solver != NULL\n");
    DebugBreak();
  }
  FUN_00bcff70((void *)(*(int *)(param_1 + 0x24) + 0x14),(int *)(*(int *)(param_1 + 0x24) + 0x10),
               param_1);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


//// FUNCTION FUN_00c51260 @ 00c51260 ////

void __fastcall FUN_00c51260(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d0566e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00dacfb8;
  local_4 = 2;
  piVar1 = (int *)FUN_00bcecf0(param_1 + 7);
  while (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(1);
    piVar1 = (int *)FUN_00bcecf0(param_1 + 7);
  }
  if (param_1[9] != 0) {
    FUN_00c51220((int)param_1);
  }
  local_4._0_1_ = 1;
  param_1[6] = &PTR_LAB_00dacf58;
  FUN_00bcffc0(param_1 + 7);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bcf880(param_1 + 1);
  *param_1 = &PTR_LAB_00dacf20;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c51300 @ 00c51300 ////

void __thiscall FUN_00c51300(void *this,int param_1)

{
  if (*(int *)((int)this + 0x24) != 0) {
    FUN_00c51220((int)this);
  }
  *(int *)((int)this + 0x24) = param_1;
  FUN_00bcfac0((void *)(param_1 + 0x14),(int *)(param_1 + 0x10),(int)this);
  return;
}


//// FUNCTION FUN_00c51330 @ 00c51330 ////

undefined4 * __fastcall FUN_00c51330(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0568b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00dacfb8;
  FUN_00bcf160(param_1 + 1);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[6] = &PTR_LAB_00dacf58;
  FUN_00bcf170(param_1 + 7);
  param_1[6] = &PTR_LAB_00dacf90;
  param_1[9] = 0;
  param_1[10] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c513b0 @ 00c513b0 ////

int * __fastcall FUN_00c513b0(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c51460 @ 00c51460 ////

void __fastcall FUN_00c51460(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacf58;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c51500 @ 00c51500 ////

undefined4 * __fastcall FUN_00c51500(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacf58;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c51520 @ 00c51520 ////

undefined4 * __thiscall ScalarDeletingDtor_00c51520(void *this,byte param_1)

{
  FUN_00c51460(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c51540 @ 00c51540 ////

void __fastcall FUN_00c51540(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacf58;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c51550 @ 00c51550 ////

undefined4 * __fastcall FUN_00c51550(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacf58;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00dacf90;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c51570 @ 00c51570 ////

undefined4 * __thiscall ScalarDeletingDtor_00c51570(void *this,byte param_1)

{
  FUN_00c51540(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c51590 @ 00c51590 ////

undefined4 * __thiscall ScalarDeletingDtor_00c51590(void *this,byte param_1)

{
  FUN_00c51260(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c515c0 @ 00c515c0 ////

float10 __fastcall FUN_00c515c0(int param_1)

{
  float10 fVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x98) != '\0') {
    return (float10)0.0;
  }
  fVar1 = FUN_00c2a000(*(int *)(param_1 + 0x1c));
  return fVar1 * (float10)*(float *)(*(int *)(param_1 + 0x18) + 0x68);
}


//// FUNCTION FUN_00c515f0 @ 00c515f0 ////

void __thiscall FUN_00c515f0(void *this,void *param_1)

{
  char cVar1;
  float10 fVar2;
  float afStack_c [3];
  
  fVar2 = FUN_00c515c0((int)this);
  FUN_00bedcd0(param_1,(float)fVar2);
  cVar1 = FUN_00beddc0();
  if (cVar1 != '\0') {
    FUN_00bf1cc0(afStack_c,(float *)((int)param_1 + 400),
                 (float *)(*(int *)((int)this + 0x18) + 0x6c));
    FUN_00bedd30(param_1,afStack_c);
  }
  return;
}


//// FUNCTION FUN_00c51640 @ 00c51640 ////

void __thiscall FUN_00c51640(void *this,int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  float10 fVar2;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined1 local_70 [40];
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  void *local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00bf2b90(&local_7c);
  local_48 = 0;
  local_44 = 0;
  local_40 = 1.0;
  local_3c = 0x3f800000;
  local_38 = 0;
  local_37 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = (void *)0x0;
  local_1c = 0.0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  local_4 = 0;
  local_c = *(undefined4 *)(*(int *)((int)this + 0x18) + 0x94);
  if (*(int *)(*(int *)((int)this + 0x18) + 0x8c) == 0) {
    local_88 = 0.0;
    local_84 = 0;
    local_80 = 0;
    local_1c = 0.0;
    local_18 = 0;
    local_14 = 0;
  }
  else {
    local_37 = 1;
    FUN_00c26560(&local_88,10.0);
    local_1c = local_88;
    local_18 = local_84;
    local_14 = 0;
    FUN_00bf2cd0(&local_7c,1);
  }
  fVar2 = FUN_00c515c0((int)this);
  local_40 = (float)fVar2;
  puVar1 = (undefined4 *)
           FUN_00bf1cc0(&local_88,&local_1c,(float *)(*(int *)((int)this + 0x18) + 0x6c));
  local_34 = *puVar1;
  local_30 = puVar1[1];
  local_2c = puVar1[2];
  local_48 = *(undefined4 *)(*(int *)((int)this + 0x18) + 0x44);
  local_38 = 1;
  local_20 = this;
  FUN_00bf2c10(&local_7c);
  local_78 = *(undefined4 *)(*(int *)((int)this + 0x18) + 0x9c);
  FUN_00bddfd0(local_70,*(undefined4 *)(*(int *)((int)this + 0x18) + 0x9c));
  FUN_00c29f50(*(void **)((int)this + 0x1c),&local_7c);
  FUN_00bc66e0(*(void **)(*(int *)(**(int **)(*(int *)((int)this + 0x18) + 0x60) + 4) + 0x48),
               param_1,param_2,&local_7c,(int *)0x0,(int *)0x0);
  return;
}


//// FUNCTION FUN_00c517e0 @ 00c517e0 ////

void __fastcall FUN_00c517e0(int param_1)

{
  int *this;
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  float10 fVar5;
  uint local_7c;
  undefined4 local_78;
  undefined1 local_70 [40];
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = (undefined4 *)FUN_00bcecf0((undefined4 *)(param_1 + 0x24));
  this = *(int **)(*(int *)(**(int **)(*(int *)(param_1 + 0x18) + 0x60) + 4) + 0x48);
  if (puVar2 != (undefined4 *)0x0) {
    do {
      fVar5 = FUN_00c515c0(param_1);
      if (fVar5 < (float10)0.0 == (fVar5 == (float10)0.0)) {
        if ((int)puVar2[1] < 0) {
          FUN_00bf2b90(&local_7c);
          iVar1 = *(int *)(param_1 + 0x18);
          local_44 = 0;
          local_3c = 0x3f800000;
          local_37 = 0;
          local_28 = 0;
          local_24 = 0;
          local_10 = 0;
          local_8 = 0;
          local_4 = 0;
          local_c = *(undefined4 *)(iVar1 + 0x94);
          local_34 = *(undefined4 *)(iVar1 + 0x6c);
          local_30 = *(undefined4 *)(iVar1 + 0x70);
          local_2c = *(undefined4 *)(iVar1 + 0x74);
          local_48 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44);
          local_1c = 0;
          local_18 = 0;
          local_14 = 0;
          local_40 = (float)fVar5;
          local_20 = param_1;
          if (*(int *)(*(int *)(param_1 + 0x18) + 0x8c) == 1) {
            local_38 = 0;
            local_37 = 1;
            FUN_00bf2cd0(&local_7c,1);
          }
          else {
            local_38 = 1;
          }
          FUN_00bf2c10(&local_7c);
          FUN_00bf2c30(&local_7c,0xffff);
          local_78 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x9c);
          FUN_00bddfd0(local_70,*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x9c));
          FUN_00c29f50(*(void **)(param_1 + 0x1c),&local_7c);
          pvVar3 = FUN_00bc66e0(this,(int *)*puVar2,0,&local_7c,(int *)0x0,(int *)0x0);
          if (pvVar3 == (void *)0x0) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = *(undefined4 *)((int)pvVar3 + 0x40);
          }
          puVar2[1] = uVar4;
        }
      }
      else if (-1 < (int)puVar2[1]) {
        (**(code **)(*this + 0x88))(puVar2[1]);
        puVar2[1] = 0xffffffff;
      }
      puVar2 = (undefined4 *)
               FUN_00bcf3f0((void *)(param_1 + 0x24),(int *)(param_1 + 0x20),(int)puVar2);
    } while (puVar2 != (undefined4 *)0x0);
  }
  return;
}


//// FUNCTION FUN_00c51a20 @ 00c51a20 ////

void __fastcall FUN_00c51a20(void *param_1)

{
  float fVar1;
  int *piVar2;
  void *pvVar3;
  float10 fVar4;
  float local_8;
  float local_4;
  
  local_4 = *(float *)(*(int *)(**(int **)(*(int *)((int)param_1 + 0x18) + 0x60) + 4) + 0x84);
  pvVar3 = (void *)(*(int *)(*(int *)((int)param_1 + 0x1c) + 0x30) + 0x14);
  fVar4 = FUN_00c515c0((int)param_1);
  fVar1 = local_4;
  FUN_00c4f580((void *)((int)param_1 + 0x2c),pvVar3,local_4,(float10)0.0 < fVar4);
  piVar2 = FUN_00c4f5f0(pvVar3,fVar1,&local_8);
  while (piVar2 != (int *)0x0) {
    FUN_00c51640(param_1,piVar2,local_8);
    piVar2 = FUN_00c4f5f0(pvVar3,fVar1,&local_8);
  }
  return;
}


//// FUNCTION FUN_00c51ab0 @ 00c51ab0 ////

void __fastcall FUN_00c51ab0(int param_1)

{
  void *_Memory;
  
  _Memory = (void *)FUN_00bcecf0((undefined4 *)(param_1 + 0x24));
  if (_Memory != (void *)0x0) {
    FUN_00bcff70((void *)(param_1 + 0x24),(int *)(param_1 + 0x20),(int)_Memory);
    if (-1 < *(int *)((int)_Memory + 4)) {
      (**(code **)(**(int **)(*(int *)(**(int **)(*(int *)(param_1 + 0x18) + 0x60) + 4) + 0x48) +
                  0x88))(*(int *)((int)_Memory + 4));
      *(undefined4 *)((int)_Memory + 4) = 0xffffffff;
    }
    FUN_00c7de00((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00c51b30 @ 00c51b30 ////

void __fastcall FUN_00c51b30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d056c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00dad040;
  local_4 = 3;
  FUN_00c51ab0((int)param_1);
  FUN_00bc4e00(*(void **)(*(int *)(**(int **)(param_1[6] + 0x60) + 4) + 0x48),(int)param_1);
  FUN_00bcff70((void *)(param_1[6] + 0x80),(int *)(param_1[6] + 0x7c),(int)param_1);
  local_4._0_1_ = 2;
  FUN_00c4f4b0();
  local_4._0_1_ = 1;
  param_1[8] = &PTR_LAB_00dacff0;
  FUN_00bcffc0(param_1 + 9);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bcf880(param_1 + 1);
  *param_1 = &PTR_LAB_00d9e7a0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c51bd0 @ 00c51bd0 ////

void __fastcall FUN_00c51bd0(void *param_1)

{
  FUN_00c517e0((int)param_1);
  FUN_00c51a20(param_1);
  return;
}


//// FUNCTION FUN_00c51be0 @ 00c51be0 ////

void __fastcall FUN_00c51be0(int param_1)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d056de;
  local_c = ExceptionList;
  this_00 = (void *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 8);
  uVar4 = 0;
  ExceptionList = &local_c;
  iVar1 = thunk_FUN_00bdbac0((int)this_00);
  if (iVar1 != 0) {
    do {
      this = operator_new(0x1c);
      puVar2 = (undefined4 *)0x0;
      local_4 = 0;
      if (this != (void *)0x0) {
        iVar1 = thunk_FUN_00be8f90(this_00,uVar4);
        puVar2 = FUN_00c7dde0(this,iVar1);
      }
      local_4 = 0xffffffff;
      FUN_00bcfac0((void *)(param_1 + 0x24),(int *)(param_1 + 0x20),(int)puVar2);
      uVar4 = uVar4 + 1;
      uVar3 = thunk_FUN_00bdbac0((int)this_00);
    } while (uVar4 < uVar3);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c51c70 @ 00c51c70 ////

undefined4 * __thiscall FUN_00c51c70(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05711;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00dad040;
  FUN_00bcf160((undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_1;
  local_4._0_1_ = 1;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_00dacff0;
  FUN_00bcf170((int *)((int)this + 0x24));
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_00dad018;
  local_4._0_1_ = 2;
  FUN_00c4f490((undefined4 *)((int)this + 0x2c));
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00bcfac0((void *)(*(int *)((int)this + 0x18) + 0x80),
               (int *)(*(int *)((int)this + 0x18) + 0x7c),(int)this);
  FUN_00c51be0((int)this);
  FUN_00c4f4c0((undefined4 *)((int)this + 0x2c),
               (int *)(*(int *)(*(int *)((int)this + 0x1c) + 0x30) + 0x14));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c51d30 @ 00c51d30 ////

void * __thiscall ScalarDeletingDtor_00c51d30(void *this,byte param_1)

{
  FUN_00c7de00((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c51d50 @ 00c51d50 ////

int * __fastcall FUN_00c51d50(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c51ea0 @ 00c51ea0 ////

void __fastcall FUN_00c51ea0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacff0;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c51f50 @ 00c51f50 ////

undefined4 * __fastcall FUN_00c51f50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacff0;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c51f70 @ 00c51f70 ////

undefined4 * __thiscall ScalarDeletingDtor_00c51f70(void *this,byte param_1)

{
  FUN_00c51ea0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c51f90 @ 00c51f90 ////

void __fastcall FUN_00c51f90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacff0;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c51fa0 @ 00c51fa0 ////

undefined4 * __fastcall FUN_00c51fa0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dacff0;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00dad018;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c51fc0 @ 00c51fc0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c51fc0(void *this,byte param_1)

{
  FUN_00c51f90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c51fe0 @ 00c51fe0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c51fe0(void *this,byte param_1)

{
  FUN_00c51b30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c52000 @ 00c52000 ////

void __thiscall FUN_00c52000(void *this,uint param_1,char param_2)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bc9ad0(param_1,param_2,(uint *)((int)this + 0x10),(uint *)((int)this + 0xc));
  local_4 = 0xffffffff;
  FUN_00bc1490(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c52070 @ 00c52070 ////

void __thiscall FUN_00c52070(void *this,uint param_1,char param_2)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0573a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bc9af0(param_1,param_2,(uint *)((int)this + 8),(uint *)((int)this + 4));
  local_4 = 0xffffffff;
  FUN_00bc1490(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c520e0 @ 00c520e0 ////

void * __thiscall FUN_00c520e0(void *this,void *param_1)

{
  FUN_00bf5ae0(param_1,*(uint *)((int)this + 0xc),*(uint *)((int)this + 0x10));
  FUN_00bf5b20(param_1,*(uint *)((int)this + 4),(ushort)*(undefined4 *)((int)this + 8));
  return param_1;
}


//// FUNCTION FUN_00c52110 @ 00c52110 ////

void __fastcall FUN_00c52110(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad048;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c52140 @ 00c52140 ////

undefined4 * __thiscall ScalarDeletingDtor_00c52140(void *this,byte param_1)

{
  SetVtable_00da6610_00c29f40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c52170 @ 00c52170 ////

int __fastcall FUN_00c52170(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05766;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00be1e00((undefined4 *)(param_1 + 0x20));
  local_4 = 0;
  FUN_00be1e00((undefined4 *)(param_1 + 0x28));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00be1e00((undefined4 *)(param_1 + 0x30));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c521d0 @ 00c521d0 ////

undefined4 * __fastcall FUN_00c521d0(undefined4 *param_1)

{
  FUN_00be1e00(param_1);
  return param_1;
}


//// FUNCTION FUN_00c521e0 @ 00c521e0 ////

int __fastcall FUN_00c521e0(int param_1)

{
  return param_1 + 4;
}


//// FUNCTION FUN_00c521f0 @ 00c521f0 ////

int __fastcall FUN_00c521f0(int param_1)

{
  return param_1 + 0x48;
}


//// FUNCTION FUN_00c52200 @ 00c52200 ////

int __fastcall FUN_00c52200(int param_1)

{
  return param_1 + 0x4c;
}


//// FUNCTION FUN_00c52210 @ 00c52210 ////

int __fastcall FUN_00c52210(int param_1)

{
  return param_1 + 0x5c;
}


//// FUNCTION FUN_00c52220 @ 00c52220 ////

int __fastcall FUN_00c52220(int param_1)

{
  return param_1 + 100;
}


//// FUNCTION FUN_00c52230 @ 00c52230 ////

int __fastcall FUN_00c52230(int param_1)

{
  return param_1 + 0x74;
}


//// FUNCTION FUN_00c52240 @ 00c52240 ////

int __fastcall FUN_00c52240(int param_1)

{
  return param_1 + 0x78;
}


//// FUNCTION FUN_00c52250 @ 00c52250 ////

void __fastcall FUN_00c52250(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c52256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 4) + 4))();
  return;
}


//// FUNCTION FUN_00c52270 @ 00c52270 ////

void __thiscall FUN_00c52270(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 local_98;
  undefined1 local_94 [108];
  undefined4 auStack_28 [2];
  undefined4 local_20 [3];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d057f1;
  pvStack_c = ExceptionList;
  local_98 = 7;
  ExceptionList = &pvStack_c;
  FUN_00c52170((int)local_94);
  local_4 = 0;
  FUN_00be1e00(local_20);
  local_4 = 1;
  piVar1 = (int *)FUN_00c52240((int)&local_98);
  (**(code **)(*piVar1 + 8))(param_1);
  piVar1[2] = param_1;
  piVar1[4] = param_3;
  piVar1[3] = param_2;
  FUN_00c52250((int)this);
  pvStack_c = (void *)0x2;
  FUN_00be1f10(auStack_28);
  pvStack_c = (void *)0xffffffff;
  FUN_00bcb500((int)&stack0xffffff64);
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00c52350 @ 00c52350 ////

void __thiscall
FUN_00c52350(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_98;
  undefined1 local_94 [112];
  undefined4 uStack_24;
  undefined4 local_20 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0581c;
  pvStack_c = ExceptionList;
  local_98 = 3;
  ExceptionList = &pvStack_c;
  FUN_00c52170((int)local_94);
  local_4 = 0;
  FUN_00be1e00(local_20);
  local_4 = 1;
  puVar1 = (undefined4 *)FUN_00c52200((int)&local_98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  FUN_00c52250((int)this);
  puStack_8 = (undefined1 *)0x2;
  FUN_00be1f10(&uStack_24);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00bcb500((int)&local_98);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00c52420 @ 00c52420 ////

void __thiscall
FUN_00c52420(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_98;
  undefined1 local_94 [112];
  undefined4 uStack_24;
  undefined4 local_20 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05847;
  pvStack_c = ExceptionList;
  local_98 = 5;
  ExceptionList = &pvStack_c;
  FUN_00c52170((int)local_94);
  local_4 = 0;
  FUN_00be1e00(local_20);
  local_4 = 1;
  puVar1 = (undefined4 *)FUN_00c52220((int)&local_98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  FUN_00c52250((int)this);
  puStack_8 = (undefined1 *)0x2;
  FUN_00be1f10(&uStack_24);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00bcb500((int)&local_98);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00c524f0 @ 00c524f0 ////

void __thiscall FUN_00c524f0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_98;
  undefined1 local_94 [112];
  undefined4 uStack_24;
  undefined4 local_20 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05872;
  pvStack_c = ExceptionList;
  local_98 = 4;
  ExceptionList = &pvStack_c;
  FUN_00c52170((int)local_94);
  local_4 = 0;
  FUN_00be1e00(local_20);
  local_4 = 1;
  puVar1 = (undefined4 *)FUN_00c52210((int)&local_98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_00c52250((int)this);
  puStack_8 = (undefined1 *)0x2;
  FUN_00be1f10(&uStack_24);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00bcb500((int)&local_98);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00c525b0 @ 00c525b0 ////

void __thiscall FUN_00c525b0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_98;
  undefined1 local_94 [112];
  undefined4 uStack_24;
  undefined4 local_20 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0589d;
  pvStack_c = ExceptionList;
  local_98 = 6;
  ExceptionList = &pvStack_c;
  FUN_00c52170((int)local_94);
  local_4 = 0;
  FUN_00be1e00(local_20);
  local_4 = 1;
  puVar1 = (undefined4 *)FUN_00c52230((int)&local_98);
  *puVar1 = param_1;
  FUN_00c52250((int)this);
  puStack_8 = (undefined1 *)0x2;
  FUN_00be1f10(&uStack_24);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00bcb500((int)&local_98);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00c52660 @ 00c52660 ////

void __thiscall
FUN_00c52660(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 uStack_a4;
  undefined4 local_98;
  undefined1 local_94 [100];
  undefined4 auStack_30 [4];
  undefined4 local_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d058c8;
  pvStack_c = ExceptionList;
  local_98 = 1;
  uStack_a4 = 0xc52691;
  ExceptionList = &pvStack_c;
  FUN_00c52170((int)local_94);
  local_4 = 0;
  uStack_a4 = 0xc526a8;
  FUN_00be1e00(&local_20);
  local_4 = 1;
  uStack_a4 = 0xc526b8;
  puVar1 = (undefined4 *)FUN_00c521e0((int)&local_98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 7) = (undefined1)param_4;
  puVar1[2] = param_3;
  uStack_a4 = param_5;
  (**(code **)(puVar1[8] + 8))();
  (**(code **)(puVar1[10] + 8))(param_5);
  (**(code **)(puVar1[0xc] + 8))(param_7);
  puVar1[0xe] = param_4;
  puVar1[0xf] = param_5;
  puVar1[3] = *param_7;
  puVar1[4] = param_7[1];
  puVar1[5] = param_7[2];
  puVar1[6] = param_7[3];
  puVar1[0x10] = param_8;
  FUN_00c52250((int)this);
  uStack_14 = 2;
  FUN_00be1f10(auStack_30);
  uStack_14 = 0xffffffff;
  FUN_00bcb500((int)&uStack_a4);
  ExceptionList = pvStack_1c;
  return;
}


//// FUNCTION FUN_00c527b0 @ 00c527b0 ////

void __thiscall FUN_00c527b0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_98;
  undefined1 local_94 [112];
  undefined4 uStack_24;
  undefined4 local_20 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d058f3;
  pvStack_c = ExceptionList;
  local_98 = 2;
  ExceptionList = &pvStack_c;
  FUN_00c52170((int)local_94);
  local_4 = 0;
  FUN_00be1e00(local_20);
  local_4 = 1;
  puVar1 = (undefined4 *)FUN_00c521f0((int)&local_98);
  *puVar1 = param_1;
  FUN_00c52250((int)this);
  puStack_8 = (undefined1 *)0x2;
  FUN_00be1f10(&uStack_24);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00bcb500((int)&local_98);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00c52860 @ 00c52860 ////

void __fastcall FUN_00c52860(int param_1)

{
  undefined4 local_98;
  undefined1 local_94 [112];
  undefined4 uStack_24;
  undefined4 local_20 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0591e;
  pvStack_c = ExceptionList;
  local_98 = 8;
  ExceptionList = &pvStack_c;
  FUN_00c52170((int)local_94);
  local_4 = 0;
  FUN_00be1e00(local_20);
  local_4 = 1;
  FUN_00c52250(param_1);
  puStack_8 = (undefined1 *)0x2;
  FUN_00be1f10(&uStack_24);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00bcb500((int)&local_98);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00c52900 @ 00c52900 ////

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_00c52900(int param_1)

{
  int *this;
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined **this_00;
  int *local_114;
  void *local_110;
  undefined1 local_109;
  undefined4 *local_108;
  int *local_104;
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  int local_f8;
  undefined4 local_f4;
  int *local_f0;
  undefined4 auStack_ec [2];
  undefined4 auStack_e4 [2];
  undefined1 local_dc [4];
  undefined1 *local_d8;
  undefined1 *local_d4;
  undefined1 *local_d0;
  int local_cc;
  uint local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0 [4];
  undefined1 *local_ac;
  undefined4 local_a8;
  undefined1 local_a4 [32];
  undefined4 local_84 [2];
  undefined4 local_7c [2];
  undefined4 local_74 [17];
  undefined4 local_30 [6];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00d05989;
  pvStack_14 = ExceptionList;
  this_00 = (undefined **)0x0;
  piVar9 = (int *)0x0;
  local_104 = (int *)0x0;
  local_108 = (undefined4 *)0x0;
  local_114 = (int *)0x0;
  local_f0 = (int *)(param_1 + 4);
  local_ac = local_a4;
  local_c = 0;
  ExceptionList = &pvStack_14;
  do {
    FUN_00c53470(local_f0);
    local_c._0_1_ = 1;
    switch(local_a8) {
    case 1:
      puVar8 = (undefined4 *)FUN_00c521e0((int)&local_a8);
      local_110 = operator_new(0x24);
      local_c._0_1_ = 4;
      if (local_110 == (void *)0x0) {
        this_00 = (undefined **)0x0;
      }
      else {
        this_00 = FUN_00bf7c10(local_110,*puVar8,(int *)puVar8[1],(int *)puVar8[2],
                               (undefined *)(uint)*(byte *)(puVar8 + 7),(undefined *)puVar8[0xe],
                               (int *)puVar8[0xf],puVar8 + 8,puVar8 + 10,puVar8 + 0xc);
      }
      local_c._0_1_ = 1;
      puVar3 = FUN_00bf7b40((int)this_00);
      puVar4 = FUN_00bf7b10((int)this_00);
      puVar7 = FUN_00bf7ad0((int)this_00);
      if ((((int)puVar3 < 1) || ((int)puVar4 < 1)) || ((int)puVar7 < 0)) {
        local_dc[0] = 0;
        if (this_00 != (undefined **)0x0) {
          FUN_00bf7b80((int *)this_00);
                    /* WARNING: Subroutine does not return */
          _free(this_00);
        }
        this_00 = (undefined **)0x0;
      }
      else {
        local_dc[0] = 1;
        local_d8 = puVar3;
        local_d4 = puVar4;
        local_d0 = puVar7;
      }
      (**(code **)(*(int *)puVar8[0x10] + 4))(local_dc);
      piVar9 = local_114;
      break;
    case 2:
      puVar8 = (undefined4 *)FUN_00c521f0((int)&local_a8);
      if (this_00 != (undefined **)0x0) {
        FUN_00bf7b80((int *)this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
      this_00 = (undefined **)0x0;
      (**(code **)(*(int *)*puVar8 + 4))(local_100);
      break;
    case 3:
      puVar8 = (undefined4 *)FUN_00c52200((int)&local_a8);
      if (this_00 != (undefined **)0x0) {
        FUN_00bf7810(this_00,*puVar8);
        iVar1 = FUN_00bf7920((int)this_00);
        if (-1 < iVar1) {
          local_fc[0] = 1;
          local_f8 = iVar1;
          local_f4 = FUN_00bf7b00((int)this_00);
          (**(code **)(*(int *)puVar8[3] + 4))(local_fc);
          break;
        }
      }
      local_fc[0] = 0;
      (**(code **)(*(int *)puVar8[3] + 4))(local_fc);
      break;
    case 4:
      piVar9 = (int *)FUN_00c52210((int)&local_a8);
      uVar10 = FUN_00bf7920((int)this_00);
      uVar11 = 0xffffffff;
      if (-1 < (int)uVar10) {
        iVar1 = ((int *)*piVar9)[1];
        iVar5 = (**(code **)(*(int *)*piVar9 + 0x10))();
        FUN_00c2f5e0(auStack_ec,iVar5,iVar1);
        local_c = CONCAT31(local_c._1_3_,3);
        uVar11 = FUN_00bf7930(this_00,auStack_ec,*(uint *)(*piVar9 + 8));
        if (-1 < (int)uVar11) {
          uVar10 = FUN_00bf7920((int)this_00);
        }
        local_c._0_1_ = 1;
        FUN_00c2f5a0();
      }
      *(uint *)(*piVar9 + 0x10) = ((int)uVar11 < 0) - 1 & uVar11;
      local_c8 = ((int)uVar10 < 0) - 1 & uVar10;
      local_cc = *piVar9;
      uStack_c4 = FUN_00bf7b00((int)this_00);
      (**(code **)(*(int *)piVar9[1] + 4))(&local_cc);
      piVar9 = local_114;
      break;
    case 5:
      piVar2 = (int *)FUN_00c52220((int)&local_a8);
      puVar8 = (undefined4 *)piVar2[2];
      if (piVar2[1] == 0) {
        puVar8 = (undefined4 *)0x0;
LAB_00c52a92:
        piVar2[1] = 0;
      }
      else if (puVar8 == (undefined4 *)0x0) goto LAB_00c52a92;
      if (puVar8 != local_108) {
        local_108 = puVar8;
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 4))();
          local_114 = (int *)0x0;
        }
        if (puVar8 != (undefined4 *)0x0) {
          puVar3 = FUN_00bf7b40((int)this_00);
          puVar4 = FUN_00bf7b10((int)this_00);
          iVar1 = (**(code **)*puVar8)(puVar3,puVar4);
          FUN_00c535e0(&local_114,iVar1);
        }
      }
      piVar9 = (int *)*piVar2;
      if ((piVar9 == (int *)0x0) && (piVar9 = (int *)piVar2[1], piVar9 == (int *)0x0)) {
        LH_Assert(&local_109,"frame != NULL\n");
        DebugBreak();
      }
      local_110 = (void *)FUN_00bf7920((int)this_00);
      uVar10 = 0xffffffff;
      if (-1 < (int)local_110) {
        iVar1 = piVar9[1];
        iVar5 = (**(code **)(*piVar9 + 0x10))();
        FUN_00c2f5e0(auStack_e4,iVar5,iVar1);
        local_c = CONCAT31(local_c._1_3_,2);
        uVar10 = FUN_00bf7930(this_00,auStack_e4,piVar9[2]);
        if (-1 < (int)uVar10) {
          local_110 = (void *)FUN_00bf7920((int)this_00);
        }
        local_c._0_1_ = 1;
        FUN_00c2f5a0();
      }
      piVar9[4] = ((int)uVar10 < 0) - 1 & uVar10;
      this = (int *)piVar2[1];
      if (this != (int *)0x0) {
        if (this != piVar9) {
          FUN_00c53c20(this,piVar9);
          piVar9 = (int *)piVar2[1];
        }
        puVar8 = (undefined4 *)*local_114;
        uVar6 = (**(code **)(*piVar9 + 0x14))();
        uVar6 = (**(code **)(*piVar9 + 0x10))(uVar6);
        (*(code *)*puVar8)(uVar6);
      }
      uStack_b8 = ((int)local_110 < 0) - 1 & (uint)local_110;
      uStack_b4 = FUN_00bf7b00((int)this_00);
      iStack_c0 = *piVar2;
      iStack_bc = piVar2[1];
      (**(code **)(*(int *)piVar2[3] + 4))(&iStack_c0);
      piVar9 = local_114;
      break;
    case 6:
      puVar8 = (undefined4 *)FUN_00c52230((int)&local_a8);
      local_104 = (int *)*puVar8;
      break;
    case 7:
      iVar1 = FUN_00c52240((int)&local_a8);
      if (this_00 != (undefined **)0x0) {
        FUN_00bf77e0((int)this_00);
      }
      (**(code **)(**(int **)(iVar1 + 0x10) + 4))(local_b0);
      break;
    case 8:
      if (this_00 != (undefined **)0x0) {
        FUN_00bf7b60((int)this_00);
      }
    }
    local_c._0_1_ = 5;
    FUN_00be1f10(local_30);
    local_c._0_1_ = 7;
    FUN_00be1f10(local_74);
    local_c._0_1_ = 6;
    FUN_00be1f10(local_7c);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00be1f10(local_84);
    if (local_104 != (int *)0x0) {
      (**(code **)(*local_104 + 4))(local_100);
      puStack_10 = (undefined1 *)0xffffffff;
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 4))();
      }
      ExceptionList = pvStack_18;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00c52e30 @ 00c52e30 ////

undefined4 * __fastcall FUN_00c52e30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad088;
  FUN_00c53300(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c52e50 @ 00c52e50 ////

void __fastcall FUN_00c52e50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad088;
  FUN_00c533e0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c52e60 @ 00c52e60 ////

undefined4 * __fastcall FUN_00c52e60(undefined4 *param_1)

{
  undefined4 *puVar1;
  LPCSTR pCVar2;
  undefined1 local_121;
  SIZE_T local_120 [2];
  void *local_118;
  undefined4 *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d059b7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_114 = param_1;
  FUN_00c52e30(param_1);
  local_4 = 0;
  param_1[0xd] = 0;
  local_120[1] = 0;
  local_120[0] = 0x3000;
  local_118 = operator_new(0xc);
  local_4._0_1_ = 1;
  if (local_118 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00bed240(local_118,param_1,local_120);
  }
  param_1[0xd] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = CONCAT31(local_4._1_3_,2);
    LH_LogErrorMessage(&local_110,".\\CASyncDecoder.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x12d);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"EMEM");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_121,pCVar2);
    DebugBreak();
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c52f80 @ 00c52f80 ////

void __fastcall FUN_00c52f80(undefined4 *param_1)

{
  void *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d059c9;
  pvStack_c = ExceptionList;
  _Memory = (void *)param_1[0xd];
  local_4 = 0;
  if (_Memory != (void *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_00bed120(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = &pvStack_c;
  param_1[0xd] = 0;
  local_4 = 0xffffffff;
  FUN_00c52e50(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c52ff0 @ 00c52ff0 ////

int * __thiscall ScalarDeletingDtor_00c52ff0(void *this,byte param_1)

{
  FUN_00bf7b80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00dad054_00c53010 @ 00c53010 ////

void __fastcall SetVtable_00dad054_00c53010(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad054;
  return;
}


//// FUNCTION FUN_00c53060 @ 00c53060 ////

undefined4 * __thiscall FUN_00c53060(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05786;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined1 *)((int)this + 0x1c) = *(undefined1 *)(param_1 + 7);
  FUN_00be2070((void *)((int)this + 0x20),(int)(param_1 + 8));
  local_4 = 0;
  FUN_00be2070((void *)((int)this + 0x28),(int)(param_1 + 10));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00be2070((void *)((int)this + 0x30),(int)(param_1 + 0xc));
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c53150 @ 00c53150 ////

undefined4 * __fastcall FUN_00c53150(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0579b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  FUN_00c52170((int)(param_1 + 1));
  local_4 = 0;
  FUN_00be1e00(param_1 + 0x1e);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c531a0 @ 00c531a0 ////

undefined4 * __thiscall FUN_00c531a0(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d057bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = param_1;
  FUN_00c52170((int)this + 4);
  local_4 = 0;
  FUN_00be1e00((undefined4 *)((int)this + 0x78));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c531f0 @ 00c531f0 ////

undefined4 * __thiscall FUN_00c531f0(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d059eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *param_1;
  FUN_00c53060((void *)((int)this + 4),param_1 + 1);
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
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
  local_4 = 0;
  FUN_00be2070((void *)((int)this + 0x78),(int)(param_1 + 0x1e));
  *(undefined4 *)((int)this + 0x80) = param_1[0x20];
  *(undefined4 *)((int)this + 0x84) = param_1[0x21];
  *(undefined4 *)((int)this + 0x88) = param_1[0x22];
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c53300 @ 00c53300 ////

undefined4 * __fastcall FUN_00c53300(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05a13;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00dad064;
  FUN_00bcea70((LPCRITICAL_SECTION)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bceaf0(param_1 + 7,0,1);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c53370 @ 00c53370 ////

uint __thiscall FUN_00c53370(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x10))(param_1);
  if ((char)uVar1 == '\0') {
    if (param_1 != 0) {
      return param_1 & 0xffffff00;
    }
    do {
      FUN_00bcebd0((undefined4 *)((int)this + 0x1c));
      uVar1 = (**(code **)(*(int *)this + 0x10))(0);
    } while ((char)uVar1 == '\0');
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00c533b0 @ 00c533b0 ////

bool __fastcall FUN_00c533b0(int param_1)

{
  int iVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)(param_1 + 4));
  iVar1 = *(int *)(param_1 + 0x24);
  FUN_00bc1490(local_8);
  return iVar1 == 0;
}


//// FUNCTION FUN_00c533e0 @ 00c533e0 ////

void __fastcall FUN_00c533e0(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d05a3e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00dad064;
  pvVar1 = (void *)param_1[8];
  local_4 = 2;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x8c,*(int *)((int)pvVar1 + -4),FUN_00bcb620);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00bceac0(param_1 + 7);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00dad054;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c53470 @ 00c53470 ////

void * __fastcall FUN_00c53470(int *param_1)

{
  void *pvVar1;
  char cVar2;
  LPCSTR pCVar3;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined1 local_198 [108];
  undefined4 auStack_12c [2];
  undefined4 local_124 [3];
  undefined **ppuStack_118;
  undefined1 uStack_114;
  undefined1 uStack_15;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_00d05a9b;
  pvStack_c = ExceptionList;
  local_1a0 = 0;
  local_19c = 0;
  ExceptionList = &pvStack_c;
  FUN_00c52170((int)local_198);
  local_4 = (void *)0x1;
  FUN_00be1e00(local_124);
  local_4 = (void *)0x2;
  cVar2 = (**(code **)(*param_1 + 8))(&local_19c,0);
  if (cVar2 == '\0') {
    ppuStack_118 = &PTR_LAB_00d9db7c;
    uStack_114 = 0;
    uStack_15 = 0;
    pvStack_c._0_1_ = 3;
    LH_LogErrorMessage(&ppuStack_118,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKMultithreadCMailbox.h")
    ;
    LH_LogErrorMessage(&ppuStack_118,"(");
    FUN_00bbe970(0x1e);
    LH_LogErrorMessage(&ppuStack_118,") : ");
    LH_LogErrorMessage(&ppuStack_118,"Mailbox shortcut went wrong");
    LH_LogErrorMessage(&ppuStack_118,"\n");
    pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_118);
    LH_Assert(&stack0xfffffe57,pCVar3);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
    DebugBreak();
  }
  pvVar1 = local_4;
  FUN_00c531f0(local_4,&uStack_1a4);
  pvStack_c = (void *)0x4;
  FUN_00be1f10(auStack_12c);
  pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
  FUN_00bcb500((int)&local_1a0);
  ExceptionList = pvStack_14;
  return pvVar1;
}


//// FUNCTION FUN_00c535e0 @ 00c535e0 ////

void __thiscall FUN_00c535e0(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05ac6;
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


//// FUNCTION ScalarDeletingDtor_00c53750 @ 00c53750 ////

undefined4 * __thiscall ScalarDeletingDtor_00c53750(void *this,byte param_1)

{
  FUN_00c533e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c53770 @ 00c53770 ////

uint __thiscall FUN_00c53770(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  uVar1 = FUN_00c53810((void *)((int)this + 0x20),param_1);
  if ((char)uVar1 == '\0') {
    local_4 = 0xffffffff;
    uVar1 = FUN_00bc1490(local_14);
    ExceptionList = local_c;
    return uVar1 & 0xffffff00;
  }
  FUN_00bcead0((undefined4 *)((int)this + 0x1c));
  local_4 = 0xffffffff;
  uVar2 = FUN_00bc1490(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00c53810 @ 00c53810 ////

uint __thiscall FUN_00c53810(void *this,undefined4 *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 == *(int *)((int)this + 4)) {
    if (iVar1 == 0) {
      puVar2 = (uint *)0x1;
    }
    else {
      puVar2 = (uint *)(iVar1 * 2);
    }
    uVar3 = FUN_00c53990(this,puVar2);
    if ((char)uVar3 == '\0') {
      return uVar3;
    }
  }
  puVar4 = FUN_00c53870((void *)(((uint)(*(int *)((int)this + 0xc) + *(int *)((int)this + 4)) %
                                 *(uint *)((int)this + 8)) * 0x8c + *(int *)this),param_1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)((uint)puVar4 >> 8),1);
}


//// FUNCTION FUN_00c53870 @ 00c53870 ////

undefined4 * __thiscall FUN_00c53870(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  FUN_00c53910((void *)((int)this + 4),param_1 + 1);
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
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
  FUN_00be2010((void *)((int)this + 0x78),(int)(param_1 + 0x1e));
  *(undefined4 *)((int)this + 0x80) = param_1[0x20];
  *(undefined4 *)((int)this + 0x84) = param_1[0x21];
  *(undefined4 *)((int)this + 0x88) = param_1[0x22];
  return this;
}


//// FUNCTION FUN_00c53910 @ 00c53910 ////

undefined4 * __thiscall FUN_00c53910(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined1 *)((int)this + 0x1c) = *(undefined1 *)(param_1 + 7);
  FUN_00be2010((void *)((int)this + 0x20),(int)(param_1 + 8));
  FUN_00be2010((void *)((int)this + 0x28),(int)(param_1 + 10));
  FUN_00be2010((void *)((int)this + 0x30),(int)(param_1 + 0xc));
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  return this;
}


//// FUNCTION FUN_00c53990 @ 00c53990 ////

uint __thiscall FUN_00c53990(void *this,uint *param_1)

{
  void *pvVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05afb;
  local_c = ExceptionList;
  if (param_1 != *(uint **)((int)this + 8)) {
    if (param_1 < *(uint **)((int)this + 4)) {
      return (uint)ExceptionList & 0xffffff00;
    }
    puVar4 = (uint *)0x0;
    bVar6 = param_1 != (uint *)0x0;
    param_1 = (uint *)0x0;
    ExceptionList = &local_c;
    if (bVar6) {
      ExceptionList = &local_c;
      puVar3 = operator_new((int)puVar2 * 0x8c + 4);
      local_4 = 0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = puVar3 + 1;
        *puVar3 = puVar2;
        _eh_vector_constructor_iterator_(puVar4,0x8c,(int)puVar2,FUN_00c53150,FUN_00bcb620);
      }
      uVar5 = 0;
      local_4 = 0xffffffff;
      param_1 = puVar4;
      if (*(int *)((int)this + 4) != 0) {
        do {
          FUN_00c53870(puVar4,(undefined4 *)
                              (((*(int *)((int)this + 0xc) + uVar5) % *(uint *)((int)this + 8)) *
                               0x8c + *(int *)this));
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 0x23;
        } while (uVar5 < *(uint *)((int)this + 4));
      }
    }
    pvVar1 = *(void **)this;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(uint **)((int)this + 8) = puVar2;
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x8c,*(int *)((int)pvVar1 + -4),FUN_00bcb620);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar1 + -4));
    }
    *(uint **)this = param_1;
    ExceptionList = (void *)0x0;
  }
  uVar5 = (uint)ExceptionList >> 8;
  ExceptionList = local_c;
  return CONCAT31((int3)uVar5,1);
}


//// FUNCTION FUN_00c53ab0 @ 00c53ab0 ////

uint __thiscall FUN_00c53ab0(void *this,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05b18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  uVar1 = FUN_00c53b20((void *)((int)this + 0x20),param_1);
  local_4 = 0xffffffff;
  uVar2 = FUN_00bc1490(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1);
}


//// FUNCTION FUN_00c53b20 @ 00c53b20 ////

undefined4 __thiscall FUN_00c53b20(void *this,void *param_1)

{
  uint uVar1;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  FUN_00c53870(param_1,(undefined4 *)(*(int *)((int)this + 0xc) * 0x8c + *(int *)this));
  uVar1 = *(int *)((int)this + 0xc) + 1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(uint *)((int)this + 0xc) = uVar1 % *(uint *)((int)this + 8);
  return CONCAT31((int3)((ulonglong)uVar1 / (ulonglong)*(uint *)((int)this + 8) >> 8),1);
}


//// FUNCTION SetVtable_00dad0a0_00c53b60 @ 00c53b60 ////

void __fastcall SetVtable_00dad0a0_00c53b60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad0a0;
  return;
}


//// FUNCTION FUN_00c53ba0 @ 00c53ba0 ////

void __fastcall FUN_00c53ba0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = *(int *)(param_1 + 4) * *(int *)(param_1 + 8);
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = uVar1 * 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  return;
}


//// FUNCTION FUN_00c53bd0 @ 00c53bd0 ////

void __fastcall FUN_00c53bd0(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  return;
}


//// FUNCTION FUN_00c53bf0 @ 00c53bf0 ////

void __fastcall FUN_00c53bf0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad0bc;
  FUN_00c53bd0((int)param_1);
  *param_1 = &PTR_LAB_00dad0a0;
  return;
}


//// FUNCTION FUN_00c53c20 @ 00c53c20 ////

void __thiscall FUN_00c53c20(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  piVar1 = param_1;
  if (*(uint *)((int)this + 8) < (uint)param_1[4]) {
    LH_Assert(&param_1,"MaxSamples >= Frame.FilledSamples\n");
    DebugBreak();
  }
  if (*(int *)((int)this + 4) != piVar1[1]) {
    LH_Assert(&param_1,"NumChannels == Frame.NumChannels\n");
    DebugBreak();
  }
  if (piVar1[4] != 0) {
    if (*(int *)((int)this + 0x14) == 0) {
      LH_Assert(&param_1,"Buffer != NULL\n");
      DebugBreak();
    }
    if (piVar1[5] == 0) {
      LH_Assert(&param_1,"Frame.Buffer != NULL\n");
      DebugBreak();
    }
    uVar2 = (**(code **)(*piVar1 + 0x14))();
    puVar4 = (undefined4 *)piVar1[5];
    puVar5 = *(undefined4 **)((int)this + 0x14);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(int *)((int)this + 0x10) = piVar1[4];
  }
  return;
}


//// FUNCTION FUN_00c53cc0 @ 00c53cc0 ////

void __fastcall FUN_00c53cc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad0bc;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00c53ce0 @ 00c53ce0 ////

void __thiscall FUN_00c53ce0(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  LPCSTR pCVar1;
  void *pvVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05b51;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c53bd0((int)this);
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = 0;
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\CFrame.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x25);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Expecting at least one channel!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (*(int *)((int)this + 8) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\CFrame.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x26);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Expecting frame to contain at least one sample!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  pvVar2 = operator_new(*(int *)((int)this + 8) * *(int *)((int)this + 4) * 2);
  *(void **)((int)this + 0x14) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 2;
    LH_LogErrorMessage(&local_110,".\\CFrame.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x28);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"EMEM");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c53f20 @ 00c53f20 ////

undefined4 * __thiscall FUN_00c53f20(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05b63;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined ***)this = &PTR_FUN_00dad0bc;
  FUN_00c53ce0(this,param_1,param_2,param_3);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c53f90 @ 00c53f90 ////

void __thiscall FUN_00c53f90(void *this,int param_1)

{
  if (((*(int *)(param_1 + 4) != *(int *)((int)this + 4)) ||
      (*(int *)(param_1 + 8) != *(int *)((int)this + 8))) ||
     (*(int *)(param_1 + 0xc) != *(int *)((int)this + 0xc))) {
    FUN_00c53ce0(this,*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00c54020 @ 00c54020 ////

undefined4 * __thiscall ScalarDeletingDtor_00c54020(void *this,byte param_1)

{
  FUN_00c53bf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00dad1a8_00c54040 @ 00c54040 ////

void __fastcall SetVtable_00dad1a8_00c54040(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad1a8;
  return;
}


//// FUNCTION FUN_00c54080 @ 00c54080 ////

void __thiscall FUN_00c54080(void *this,undefined4 param_1)

{
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05b98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  (**(code **)(**(int **)((int)this + 0xc) + 0x1c))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00bc1490((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00c540f0 @ 00c540f0 ////

void __thiscall FUN_00c540f0(void *this,undefined4 param_1)

{
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05baa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  (**(code **)(**(int **)((int)this + 0xc) + 0x20))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00bc1490((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00c54190 @ 00c54190 ////

int __fastcall FUN_00c54190(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c54950((LPCRITICAL_SECTION)(param_1 + 0x24));
  return *(int *)(param_1 + 0x44) - iVar1;
}


//// FUNCTION FUN_00c54320 @ 00c54320 ////

undefined4 * __thiscall
FUN_00c54320(void *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6)

{
  LPCSTR pCVar1;
  undefined4 uVar2;
  undefined1 local_155;
  uint local_154;
  int local_150;
  undefined4 *local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124;
  undefined1 local_123;
  void *local_120;
  void *local_11c;
  undefined1 local_118 [8];
  undefined **local_110;
  undefined1 local_10c;
  void *pvStack_18;
  undefined1 uStack_10;
  undefined1 local_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05c2a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_LAB_00dad260;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00dad1ec;
  local_4 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_11c = this;
  FUN_00c549d0((PRTL_CRITICAL_SECTION_DEBUG)((int)this + 0x10),param_4);
  local_4._0_1_ = 1;
  FUN_00c54850((void *)((int)this + 0x24),(PRTL_CRITICAL_SECTION_DEBUG)((int)this + 0x10),param_4);
  *(int *)((int)this + 0x44) = param_4;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)this + 0x48) = param_3;
  *(undefined4 *)((int)this + 0x4c) = param_2;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(void **)((int)this + 8) = this;
  if (param_4 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4._0_1_ = 3;
    LH_LogErrorMessage(&local_110,".\\CCodaFrameStreamer.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(100);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Expecting at least one frame.. sniff sniff");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_155,pCVar1);
    local_4 = CONCAT31(local_4._1_3_,2);
    DebugBreak();
  }
  local_154 = 0;
  if (*(int *)((int)this + 0x44) != 0) {
    do {
      local_120 = operator_new(0x18);
      local_4._0_1_ = 4;
      if (local_120 == (void *)0x0) {
        local_14c = (undefined4 *)0x0;
      }
      else {
        local_14c = FUN_00c53f20(local_120,*(int *)((int)this + 0x4c),param_5,
                                 *(undefined4 *)((int)this + 0x48));
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      if (local_14c == (undefined4 *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4._0_1_ = 5;
        LH_LogErrorMessage(&local_110,".\\CCodaFrameStreamer.cpp");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x6a);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"Null frame");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_155,pCVar1);
        local_4 = CONCAT31(local_4._1_3_,2);
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      FUN_00c548b0((void *)((int)this + 0x24),&local_14c);
      local_154 = local_154 + 1;
    } while (local_154 < *(uint *)((int)this + 0x44));
  }
  local_144 = *(undefined4 *)((int)this + 0x48);
  local_140 = *(undefined4 *)((int)this + 0x4c);
  local_12c = param_6;
  local_150 = (int)this + 4;
  local_138 = 0;
  local_134 = 0;
  local_130 = 0x3f800000;
  local_128 = 0x3f800000;
  local_124 = 0;
  local_123 = 0;
  local_13c = 0;
  local_148 = 0;
  FUN_00bc1470(local_118,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = CONCAT31(local_4._1_3_,6);
  uVar2 = (**(code **)(*param_1 + 8))(&local_144,&local_150,&local_148);
  *(undefined4 *)((int)this + 0xc) = uVar2;
  uStack_10 = 2;
  FUN_00bc1490((undefined4 *)&local_124);
  ExceptionList = pvStack_18;
  return this;
}


//// FUNCTION FUN_00c54600 @ 00c54600 ////

void __fastcall FUN_00c54600(int param_1)

{
  FUN_00c54bf0((LPCRITICAL_SECTION)(param_1 + 0x24));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}


//// FUNCTION FUN_00c54610 @ 00c54610 ////

void __fastcall FUN_00c54610(undefined4 *param_1)

{
  undefined4 *puVar1;
  LPCSTR pCVar2;
  undefined1 uStack_11d;
  LPCRITICAL_SECTION local_11c [2];
  undefined4 *local_114;
  undefined **ppuStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05c7c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00dad260;
  local_4 = 2;
  local_114 = param_1;
  FUN_00bc1470(local_11c,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4._0_1_ = 3;
  (**(code **)(*(int *)param_1[3] + 0x38))();
  param_1[3] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00bc1490(local_11c);
  local_11c[0] = (LPCRITICAL_SECTION)0x0;
  if (param_1[0x11] != 0) {
    do {
      puVar1 = (undefined4 *)FUN_00c54bf0((LPCRITICAL_SECTION)(param_1 + 9));
      if (puVar1 == (undefined4 *)0x0) {
        ppuStack_110 = &PTR_LAB_00d9db7c;
        uStack_10c = 0;
        uStack_d = 0;
        local_4._0_1_ = 4;
        LH_LogErrorMessage(&ppuStack_110,".\\CCodaFrameStreamer.cpp");
        LH_LogErrorMessage(&ppuStack_110,"(");
        FUN_00bbe970(0x40);
        LH_LogErrorMessage(&ppuStack_110,") : ");
        LH_LogErrorMessage(&ppuStack_110,"Null frame");
        LH_LogErrorMessage(&ppuStack_110,"\n");
        pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
        LH_Assert(&uStack_11d,pCVar2);
        local_4 = CONCAT31(local_4._1_3_,2);
        ppuStack_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      else {
        (**(code **)*puVar1)(1);
      }
      local_11c[0] = (LPCRITICAL_SECTION)((int)&local_11c[0]->DebugInfo + 1);
    } while (local_11c[0] < (LPCRITICAL_SECTION)param_1[0x11]);
  }
  local_4._0_1_ = 5;
  local_11c[0] = (LPCRITICAL_SECTION)(param_1 + 9);
  FUN_00bceac0(param_1 + 0x10);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bcea80((LPCRITICAL_SECTION)(param_1 + 9));
  FUN_00c54810(param_1 + 4);
  *param_1 = &PTR_LAB_00dad1a8;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c547a0 @ 00c547a0 ////

void __fastcall FUN_00c547a0(LPCRITICAL_SECTION param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05b78;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00bceac0(&param_1[1].LockCount);
  local_4 = 0xffffffff;
  FUN_00bcea80(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c54810 @ 00c54810 ////

void __fastcall FUN_00c54810(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad1cc;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[2]);
}


//// FUNCTION FUN_00c54850 @ 00c54850 ////

LPCRITICAL_SECTION __thiscall
FUN_00c54850(void *this,PRTL_CRITICAL_SECTION_DEBUG param_1,LONG param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bcea70(this);
  local_4 = 0;
  *(PRTL_CRITICAL_SECTION_DEBUG *)((int)this + 0x18) = param_1;
  FUN_00bceaf0((void *)((int)this + 0x1c),0,param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c548b0 @ 00c548b0 ////

undefined4 __thiscall FUN_00c548b0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 local_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05cb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(&local_14,this);
  local_4 = 0;
  iVar1 = (**(code **)(**(int **)((int)this + 0x18) + 0xc))();
  if (iVar1 != 0) {
    local_4 = 0xffffffff;
    FUN_00bc1490(&local_14);
    ExceptionList = pvStack_c;
    return 1;
  }
  FUN_00bcead0((undefined4 *)((int)this + 0x1c));
  (**(code **)(**(int **)((int)this + 0x18) + 4))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00bc1490((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return 0;
}


//// FUNCTION FUN_00c54950 @ 00c54950 ////

undefined4 __fastcall FUN_00c54950(LPCRITICAL_SECTION param_1)

{
  undefined4 uVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05cd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,param_1);
  local_4 = 0;
  uVar1 = (**(code **)(*(int *)param_1[1].DebugInfo + 8))();
  local_4 = 0xffffffff;
  FUN_00bc1490(local_14);
  ExceptionList = pvStack_c;
  return uVar1;
}


//// FUNCTION FUN_00c549d0 @ 00c549d0 ////

undefined4 * __thiscall FUN_00c549d0(void *this,int param_1)

{
  void *pvVar1;
  
  *(int *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_00dad1cc;
  pvVar1 = operator_new(param_1 << 2);
  *(void **)((int)this + 8) = pvVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return this;
}


//// FUNCTION FUN_00c54be0 @ 00c54be0 ////

int __fastcall FUN_00c54be0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
  if (iVar1 < 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 4);
  }
  return iVar1;
}


//// FUNCTION FUN_00c54bf0 @ 00c54bf0 ////

undefined4 __fastcall FUN_00c54bf0(LPCRITICAL_SECTION param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined4 uVar3;
  undefined1 uStack_119;
  undefined4 local_118 [2];
  undefined **ppuStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05d46;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bcebd0(&param_1[1].LockCount);
  FUN_00bc1470(local_118,param_1);
  local_4 = 0;
  iVar1 = (**(code **)(*(int *)param_1[1].DebugInfo + 8))();
  if (iVar1 == 0) {
    ppuStack_110 = &PTR_LAB_00d9db7c;
    uStack_10c = 0;
    uStack_d = 0;
    local_4._0_1_ = 1;
    LH_LogErrorMessage(&ppuStack_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCMailbox.h");
    LH_LogErrorMessage(&ppuStack_110,"(");
    FUN_00bbe970(0x3f);
    LH_LogErrorMessage(&ppuStack_110,") : ");
    LH_LogErrorMessage(&ppuStack_110,"the queue is out of step with the mailbox handler");
    LH_LogErrorMessage(&ppuStack_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
    LH_Assert(&uStack_119,pCVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    ppuStack_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  uVar3 = (*(code *)**(undefined4 **)param_1[1].DebugInfo)();
  local_4 = 0xffffffff;
  FUN_00bc1490(local_118);
  ExceptionList = pvStack_c;
  return uVar3;
}


//// FUNCTION ScalarDeletingDtor_00c54d10 @ 00c54d10 ////

undefined4 * __thiscall ScalarDeletingDtor_00c54d10(void *this,byte param_1)

{
  FUN_00c54610(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION oggpack_writeinit @ 00c54d30 ////

void __fastcall oggpack_writeinit(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = _malloc(0x100);
  param_1[2] = puVar1;
  param_1[3] = puVar1;
  *puVar1 = 0;
  param_1[4] = 0x100;
  return;
}


//// FUNCTION oggpack_write @ 00c54de0 ////

void __fastcall oggpack_write(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1[4] <= *param_1 + 4) {
    piVar1 = FUN_00ad58c5((int *)param_1[2],(uint *)(param_1[4] + 0x100));
    param_1[2] = (int)piVar1;
    param_1[4] = param_1[4] + 0x100;
    param_1[3] = *param_1 + (int)piVar1;
  }
  uVar3 = param_2 & *(uint *)(&DAT_00f77f78 + param_3 * 4);
  uVar4 = param_3 + param_1[1];
  *(byte *)param_1[3] = *(byte *)param_1[3] | (char)uVar3 << ((byte)param_1[1] & 0x1f);
  if ((((7 < (int)uVar4) &&
       (*(char *)(param_1[3] + 1) = (char)(uVar3 >> (8U - (char)param_1[1] & 0x1f)),
       0xf < (int)uVar4)) &&
      (*(char *)(param_1[3] + 2) = (char)(uVar3 >> (0x10U - (char)param_1[1] & 0x1f)),
      0x17 < (int)uVar4)) &&
     (*(char *)(param_1[3] + 3) = (char)(uVar3 >> (0x18U - (char)param_1[1] & 0x1f)),
     0x1f < (int)uVar4)) {
    if (param_1[1] == 0) {
      *(undefined1 *)(param_1[3] + 4) = 0;
    }
    else {
      *(char *)(param_1[3] + 4) = (char)(uVar3 >> (0x20U - (char)param_1[1] & 0x1f));
    }
  }
  iVar2 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  param_1[1] = uVar4 & 7;
  *param_1 = *param_1 + iVar2;
  param_1[3] = param_1[3] + iVar2;
  return;
}


//// FUNCTION oggpackB_write @ 00c54ee0 ////

void __fastcall oggpackB_write(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[4] <= *param_1 + 4) {
    piVar1 = FUN_00ad58c5((int *)param_1[2],(uint *)(param_1[4] + 0x100));
    param_1[2] = (int)piVar1;
    param_1[4] = param_1[4] + 0x100;
    param_1[3] = *param_1 + (int)piVar1;
  }
  uVar2 = (*(uint *)(&DAT_00f77f78 + param_3 * 4) & param_2) << (0x20U - (char)param_3 & 0x1f);
  uVar4 = param_3 + param_1[1];
  *(byte *)param_1[3] = *(byte *)param_1[3] | (byte)(uVar2 >> ((char)param_1[1] + 0x18U & 0x1f));
  if ((((7 < (int)uVar4) &&
       (*(char *)(param_1[3] + 1) = (char)(uVar2 >> ((char)param_1[1] + 0x10U & 0x1f)),
       0xf < (int)uVar4)) &&
      (*(char *)(param_1[3] + 2) = (char)(uVar2 >> ((char)param_1[1] + 8U & 0x1f)),
      0x17 < (int)uVar4)) &&
     (*(char *)(param_1[3] + 3) = (char)(uVar2 >> ((byte)param_1[1] & 0x1f)), 0x1f < (int)uVar4)) {
    if (param_1[1] == 0) {
      *(undefined1 *)(param_1[3] + 4) = 0;
    }
    else {
      *(char *)(param_1[3] + 4) = (char)uVar2 << (8U - (char)param_1[1] & 0x1f);
    }
  }
  iVar3 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  param_1[1] = uVar4 & 7;
  *param_1 = *param_1 + iVar3;
  param_1[3] = param_1[3] + iVar3;
  return;
}


//// FUNCTION oggpack_writealign @ 00c54fd0 ////

void __fastcall oggpack_writealign(int *param_1)

{
  if (8 - param_1[1] < 8) {
    oggpack_write(param_1,0,8 - param_1[1]);
  }
  return;
}


//// FUNCTION oggpack_reset @ 00c55110 ////

void __fastcall oggpack_reset(undefined4 *param_1)

{
  param_1[3] = (undefined1 *)param_1[2];
  *(undefined1 *)param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION oggpack_writeclear @ 00c55140 ////

void __fastcall oggpack_writeclear(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION oggpack_readinit @ 00c55180 ////

void __fastcall oggpack_readinit(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[3] = param_2;
  param_1[2] = param_2;
  param_1[4] = param_3;
  return;
}


//// FUNCTION oggpack_look @ 00c551c0 ////

uint __fastcall oggpack_look(int *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = param_1[1];
  iVar5 = param_2 + iVar1;
  if ((param_1[4] <= *param_1 + 4) && (param_1[4] * 8 < iVar5 + *param_1 * 8)) {
    return 0xffffffff;
  }
  pbVar2 = (byte *)param_1[3];
  uVar4 = (uint)(*pbVar2 >> (*(byte *)(param_1 + 1) & 0x1f));
  if (((8 < iVar5) &&
      (((cVar3 = (char)iVar1, uVar4 = uVar4 | (uint)pbVar2[1] << (8U - cVar3 & 0x1f), 0x10 < iVar5
        && (uVar4 = uVar4 | (uint)pbVar2[2] << (0x10U - cVar3 & 0x1f), 0x18 < iVar5)) &&
       (uVar4 = uVar4 | (uint)pbVar2[3] << (0x18U - cVar3 & 0x1f), 0x20 < iVar5)))) && (iVar1 != 0))
  {
    uVar4 = uVar4 | (uint)pbVar2[4] << (0x20U - cVar3 & 0x1f);
  }
  return uVar4 & *(uint *)(&DAT_00f77f78 + param_2 * 4);
}


//// FUNCTION oggpack_adv @ 00c55350 ////

void __fastcall oggpack_adv(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + param_1[1];
  iVar1 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  param_1[3] = param_1[3] + iVar1;
  param_1[1] = uVar2 & 7;
  *param_1 = *param_1 + iVar1;
  return;
}


//// FUNCTION oggpack_read @ 00c553c0 ////

uint __fastcall oggpack_read(int *param_1,int param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = param_1[1];
  uVar4 = param_2 + iVar3;
  if ((*param_1 + 4 < param_1[4]) ||
     (uVar5 = 0xffffffff, (int)(uVar4 + *param_1 * 8) <= param_1[4] * 8)) {
    pbVar1 = (byte *)param_1[3];
    uVar5 = (uint)(*pbVar1 >> (*(byte *)(param_1 + 1) & 0x1f));
    if (8 < (int)uVar4) {
      cVar2 = (char)iVar3;
      uVar5 = uVar5 | (uint)pbVar1[1] << (8U - cVar2 & 0x1f);
      if ((((0x10 < (int)uVar4) &&
           (uVar5 = uVar5 | (uint)pbVar1[2] << (0x10U - cVar2 & 0x1f), 0x18 < (int)uVar4)) &&
          (uVar5 = uVar5 | (uint)pbVar1[3] << (0x18U - cVar2 & 0x1f), 0x20 < (int)uVar4)) &&
         (iVar3 != 0)) {
        uVar5 = uVar5 | (uint)pbVar1[4] << (0x20U - cVar2 & 0x1f);
      }
    }
    uVar5 = uVar5 & *(uint *)(&DAT_00f77f78 + param_2 * 4);
  }
  iVar3 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  param_1[3] = param_1[3] + iVar3;
  *param_1 = iVar3 + *param_1;
  param_1[1] = uVar4 & 7;
  return uVar5;
}


//// FUNCTION oggpack_bytes @ 00c555d0 ////

int __fastcall oggpack_bytes(int *param_1)

{
  return ((int)(param_1[1] + 7 + (param_1[1] + 7 >> 0x1f & 7U)) >> 3) + *param_1;
}


//// FUNCTION GetField_8_00c55620 @ 00c55620 ////

undefined4 __fastcall GetField_8_00c55620(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_00c55640 @ 00c55640 ////

float10 FUN_00c55640(uint param_1)

{
  return (float10)(float)(param_1 & 0xbf800000 | 0x3f800000);
}


//// FUNCTION FUN_00c55660 @ 00c55660 ////

void __fastcall FUN_00c55660(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  puVar3 = _calloc(1,0x24);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar3[2] = iVar1 + 0xb34;
  puVar3[1] = uVar2;
  *puVar3 = 0xc61c3c00;
  return;
}


//// FUNCTION FUN_00c55690 @ 00c55690 ////

void __fastcall FUN_00c55690(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00c556e0 @ 00c556e0 ////

void __fastcall FUN_00c556e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1;
    for (iVar1 = 0x84; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00c55700 @ 00c55700 ////

void __fastcall FUN_00c55700(int param_1)

{
  int in_EAX;
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  
  pfVar1 = (float *)(param_1 + 4);
  pfVar2 = (float *)(in_EAX + 0xc);
  iVar3 = 7;
  do {
    if (pfVar2[-3] < pfVar1[-1]) {
      pfVar1[-1] = pfVar2[-3];
    }
    if (*(float *)((in_EAX - param_1) + (int)pfVar1) < *pfVar1) {
      *pfVar1 = *(float *)((in_EAX - param_1) + (int)pfVar1);
    }
    if (pfVar2[-1] < pfVar1[1]) {
      pfVar1[1] = pfVar2[-1];
    }
    if (*pfVar2 < pfVar1[2]) {
      pfVar1[2] = *pfVar2;
    }
    if (pfVar2[1] < pfVar1[3]) {
      pfVar1[3] = pfVar2[1];
    }
    if (pfVar2[2] < pfVar1[4]) {
      pfVar1[4] = pfVar2[2];
    }
    if (pfVar2[3] < pfVar1[5]) {
      pfVar1[5] = pfVar2[3];
    }
    if (pfVar2[4] < pfVar1[6]) {
      pfVar1[6] = pfVar2[4];
    }
    pfVar1 = pfVar1 + 8;
    pfVar2 = pfVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


//// FUNCTION FUN_00c557c0 @ 00c557c0 ////

void __fastcall FUN_00c557c0(int param_1)

{
  int in_EAX;
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  
  pfVar1 = (float *)(param_1 + 4);
  pfVar2 = (float *)(in_EAX + 0xc);
  iVar3 = 7;
  do {
    if (pfVar1[-1] < pfVar2[-3]) {
      pfVar1[-1] = pfVar2[-3];
    }
    if (*pfVar1 < *(float *)((in_EAX - param_1) + (int)pfVar1)) {
      *pfVar1 = *(float *)((in_EAX - param_1) + (int)pfVar1);
    }
    if (pfVar1[1] < pfVar2[-1]) {
      pfVar1[1] = pfVar2[-1];
    }
    if (pfVar1[2] < *pfVar2) {
      pfVar1[2] = *pfVar2;
    }
    if (pfVar1[3] < pfVar2[1]) {
      pfVar1[3] = pfVar2[1];
    }
    if (pfVar1[4] < pfVar2[2]) {
      pfVar1[4] = pfVar2[2];
    }
    if (pfVar1[5] < pfVar2[3]) {
      pfVar1[5] = pfVar2[3];
    }
    if (pfVar1[6] < pfVar2[4]) {
      pfVar1[6] = pfVar2[4];
    }
    pfVar1 = pfVar1 + 8;
    pfVar2 = pfVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


//// FUNCTION FUN_00c55880 @ 00c55880 ////

void FUN_00c55880(float param_1)

{
  int in_EAX;
  float *pfVar1;
  int iVar2;
  
  iVar2 = 7;
  pfVar1 = (float *)(in_EAX + 8);
  do {
    iVar2 = iVar2 + -1;
    pfVar1[-2] = param_1 + pfVar1[-2];
    pfVar1[-1] = param_1 + pfVar1[-1];
    *pfVar1 = param_1 + *pfVar1;
    pfVar1[1] = param_1 + pfVar1[1];
    pfVar1[2] = param_1 + pfVar1[2];
    pfVar1[3] = param_1 + pfVar1[3];
    pfVar1[4] = param_1 + pfVar1[4];
    pfVar1[5] = param_1 + pfVar1[5];
    pfVar1 = pfVar1 + 8;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_00c558f0 @ 00c558f0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __thiscall FUN_00c558f0(void *this,float param_1,int param_2,float *param_3,float param_4)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  float *pfVar6;
  float *extraout_ECX;
  undefined4 extraout_ECX_00;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  float *pfVar14;
  undefined4 *puVar15;
  float10 fVar16;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 uStack_7f30;
  undefined8 uStack_7f2c;
  float local_7f18 [55];
  float afStack_7e3c [7561];
  float local_818 [56];
  undefined1 local_738 [1568];
  float local_118 [56];
  double local_38;
  undefined8 local_30;
  undefined4 *local_28;
  int local_24;
  float *local_20;
  float *local_1c;
  void *local_18;
  float *local_14;
  float *local_10;
  float *local_c;
  int local_8;
  
  local_8 = 0xc558fd;
  uStack_7f2c._4_4_ = 0xc55913;
  iVar2 = param_2 * -4;
  local_28 = local_7f18 + (-3 - param_2);
  *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0x44;
  *(undefined4 *)((int)&uStack_7f2c + iVar2) = 0xc5591d;
  local_18 = _malloc(*(size_t *)((int)&uStack_7f2c + iVar2 + 4));
  pfVar6 = local_7f18;
  for (iVar5 = 0x1dc0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 1;
  }
  local_10 = local_7f18;
  local_14 = this;
  local_20 = (float *)&DAT_00f78180;
  local_1c = (float *)&DAT_00f78024;
  local_24 = 2 - (int)this;
  do {
    iVar5 = local_24 + (int)local_14;
    pfVar6 = local_118;
    iVar13 = 0x38;
    pfVar7 = local_1c;
    do {
      fVar1 = 999.0;
      if (iVar5 + -2 < 0x58) {
        if (pfVar7[-1] < 999.0) {
          fVar1 = pfVar7[-1];
        }
      }
      else if (_DAT_00f7817c < 999.0) {
        fVar1 = _DAT_00f7817c;
      }
      if (iVar5 + -1 < 0x58) {
        if (*pfVar7 < fVar1) {
          fVar1 = *pfVar7;
        }
      }
      else if (_DAT_00f7817c < fVar1) {
        fVar1 = _DAT_00f7817c;
      }
      if (iVar5 < 0x58) {
        if (pfVar7[1] < fVar1) {
          fVar1 = pfVar7[1];
        }
      }
      else if (_DAT_00f7817c < fVar1) {
        fVar1 = _DAT_00f7817c;
      }
      iVar5 = iVar5 + 1;
      if (iVar5 < 0x58) {
        if (pfVar7[2] < fVar1) {
          fVar1 = pfVar7[2];
        }
      }
      else if (_DAT_00f7817c < fVar1) {
        fVar1 = _DAT_00f7817c;
      }
      *pfVar6 = fVar1;
      pfVar7 = pfVar7 + 1;
      pfVar6 = pfVar6 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    pfVar6 = local_10 + 1;
    pfVar7 = local_20;
    pfVar14 = local_10 + 0x70;
    for (iVar5 = 0x150; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar14 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar14 = pfVar14 + 1;
    }
    pfVar7 = local_20;
    pfVar14 = local_10;
    for (iVar5 = 0x38; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar14 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar14 = pfVar14 + 1;
    }
    local_30 = (double)CONCAT44(local_10 + 0x38,(undefined4)local_30);
    pfVar7 = local_20;
    pfVar14 = local_10 + 0x38;
    for (iVar5 = 0x38; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar14 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar14 = pfVar14 + 1;
    }
    iVar5 = 8;
    do {
      uVar11 = 0xf;
      pfVar7 = pfVar6;
      do {
        uVar8 = (int)(uVar11 + 1) >> 0x1f;
        fVar1 = (float)(int)((uVar11 + 1 ^ uVar8) - uVar8) * param_4 + (float)param_3;
        if ((fVar1 < 0.0) && (0.0 < (float)param_3)) {
          fVar1 = 0.0;
        }
        if ((0.0 < fVar1) && ((float)param_3 < 0.0)) {
          fVar1 = 0.0;
        }
        pfVar7[-1] = fVar1 + pfVar7[-1];
        fVar1 = (float)(int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)) * param_4 +
                (float)param_3;
        if ((fVar1 < 0.0) && (0.0 < (float)param_3)) {
          fVar1 = 0.0;
        }
        if ((0.0 < fVar1) && ((float)param_3 < 0.0)) {
          fVar1 = 0.0;
        }
        uVar8 = (int)(uVar11 - 1) >> 0x1f;
        *pfVar7 = fVar1 + *pfVar7;
        fVar1 = (float)(int)((uVar11 - 1 ^ uVar8) - uVar8) * param_4 + (float)param_3;
        if ((fVar1 < 0.0) && (0.0 < (float)param_3)) {
          fVar1 = 0.0;
        }
        if ((0.0 < fVar1) && ((float)param_3 < 0.0)) {
          fVar1 = 0.0;
        }
        uVar8 = (int)(uVar11 - 2) >> 0x1f;
        pfVar7[1] = fVar1 + pfVar7[1];
        fVar1 = (float)(int)((uVar11 - 2 ^ uVar8) - uVar8) * param_4 + (float)param_3;
        if ((fVar1 < 0.0) && (0.0 < (float)param_3)) {
          fVar1 = 0.0;
        }
        if ((0.0 < fVar1) && ((float)param_3 < 0.0)) {
          fVar1 = 0.0;
        }
        uVar8 = (int)(uVar11 - 3) >> 0x1f;
        pfVar7[2] = fVar1 + pfVar7[2];
        fVar1 = (float)(int)((uVar11 - 3 ^ uVar8) - uVar8) * param_4 + (float)param_3;
        if ((fVar1 < 0.0) && (0.0 < (float)param_3)) {
          fVar1 = 0.0;
        }
        if ((0.0 < fVar1) && ((float)param_3 < 0.0)) {
          fVar1 = 0.0;
        }
        uVar8 = (int)(uVar11 - 4) >> 0x1f;
        pfVar7[3] = fVar1 + pfVar7[3];
        fVar1 = (float)(int)((uVar11 - 4 ^ uVar8) - uVar8) * param_4 + (float)param_3;
        if ((fVar1 < 0.0) && (0.0 < (float)param_3)) {
          fVar1 = 0.0;
        }
        if ((0.0 < fVar1) && ((float)param_3 < 0.0)) {
          fVar1 = 0.0;
        }
        uVar8 = (int)(uVar11 - 5) >> 0x1f;
        pfVar7[4] = fVar1 + pfVar7[4];
        fVar1 = (float)(int)((uVar11 - 5 ^ uVar8) - uVar8) * param_4 + (float)param_3;
        if ((fVar1 < 0.0) && (0.0 < (float)param_3)) {
          fVar1 = 0.0;
        }
        if ((0.0 < fVar1) && ((float)param_3 < 0.0)) {
          fVar1 = 0.0;
        }
        uVar8 = (int)(uVar11 - 6) >> 0x1f;
        pfVar7[5] = fVar1 + pfVar7[5];
        fVar1 = (float)(int)((uVar11 - 6 ^ uVar8) - uVar8) * param_4 + (float)param_3;
        if ((fVar1 < 0.0) && (0.0 < (float)param_3)) {
          fVar1 = 0.0;
        }
        if ((0.0 < fVar1) && ((float)param_3 < 0.0)) {
          fVar1 = 0.0;
        }
        uVar11 = uVar11 - 8;
        pfVar6 = pfVar7 + 8;
        pfVar7[6] = fVar1 + pfVar7[6];
        pfVar7 = pfVar6;
      } while (-0x29 < (int)uVar11);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_8 = 0;
    pfVar6 = local_818;
    local_38 = (double)(*local_14 + 100.0);
    pfVar7 = local_14;
    do {
      local_c = (float *)0x2;
      if (1 < local_8) {
        local_c = (float *)local_8;
      }
      *(float **)((int)&uStack_7f2c + iVar2 + 4) = pfVar7;
      *(float *)((int)&uStack_7f2c + iVar2 + 4) =
           ((float)local_38 - (float)(int)local_c * 10.0) - 30.0;
      *(undefined4 *)((int)&uStack_7f2c + iVar2) = 0xc55e12;
      FUN_00c55880(*(float *)((int)&uStack_7f2c + iVar2 + 4));
      fVar1 = (float)local_8;
      pfVar7 = local_118;
      pfVar14 = pfVar6;
      for (iVar5 = 0x38; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar14 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar14 = pfVar14 + 1;
      }
      *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0;
      *(float *)((int)&uStack_7f2c + iVar2 + 4) = (100.0 - fVar1 * 10.0) - 30.0;
      *(undefined4 *)((int)&uStack_7f2c + iVar2) = 0xc55e41;
      FUN_00c55880(*(float *)((int)&uStack_7f2c + iVar2 + 4));
      *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0xc55e4a;
      FUN_00c557c0((int)pfVar6);
      local_8 = local_8 + 1;
      pfVar6 = pfVar6 + 0x38;
      local_10 = local_10 + 0x38;
      pfVar7 = extraout_ECX;
    } while (local_8 < 8);
    puVar12 = local_738;
    iVar13 = 7;
    iVar5 = local_30._4_4_;
    do {
      *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0xc55e8d;
      FUN_00c55700((int)puVar12);
      *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0xc55e96;
      FUN_00c55700(iVar5);
      puVar12 = puVar12 + 0xe0;
      iVar5 = iVar5 + 0xe0;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    local_1c = local_1c + 4;
    local_20 = local_20 + 0x150;
    local_14 = local_14 + 1;
  } while ((int)local_1c < 0xf78134);
  local_30 = (double)param_1;
  local_c = (float *)0x0;
  do {
    pfVar6 = local_c;
    *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0x20;
    *(undefined4 *)((int)&uStack_7f2c + iVar2) = 0xc55ee7;
    pvVar4 = _malloc(*(size_t *)((int)&uStack_7f2c + iVar2 + 4));
    *(undefined4 *)((int)&uStack_7f2c + iVar2) = extraout_ECX_00;
    *(void **)((int)local_18 + (int)pfVar6 * 4) = pvVar4;
    local_38 = (double)((float10)(int)local_c * (float10)0.5);
    fVar17 = (float10)1.4426950408889634 *
             ((float10)(int)local_c * (float10)0.5 + (float10)5.965784072875977) *
             (float10)0.6931470036506653;
    fVar16 = ROUND(fVar17);
    fVar17 = (float10)f2xm1(fVar17 - fVar16);
    fVar16 = (float10)fscale((float10)1 + fVar17,fVar16);
    *(double *)((int)&uStack_7f2c + iVar2) = (double)(fVar16 / (float10)local_30);
    (&uStack_7f30)[-param_2] = 0xc55f27;
    FUN_00acf400(*(double *)((int)&uStack_7f2c + iVar2),*(undefined2 *)(local_7f18 + (-3 - param_2))
                );
    (&uStack_7f30)[-param_2] = 0xc55f2c;
    uVar18 = FUN_00acd42c();
    fVar16 = (float10)log2((float10)(int)uVar18 * (float10)param_1 + (float10)1.0);
    fVar16 = (float10)0.6931471805599453 * fVar16 * (float10)1.4426950216293335 -
             (float10)5.965784072875977;
    *(double *)((int)&uStack_7f2c + iVar2) = (double)(fVar16 + fVar16);
    (&uStack_7f30)[-param_2] = 0xc55f59;
    FUN_00ad1180(*(double *)((int)&uStack_7f2c + iVar2),*(undefined2 *)(local_7f18 + (-3 - param_2))
                );
    (&uStack_7f30)[-param_2] = 0xc55f5e;
    uVar19 = FUN_00acd42c();
    fVar16 = (float10)log2((float10)((int)uVar18 + 1) * (float10)param_1);
    fVar16 = (float10)0.6931471805599453 * fVar16 * (float10)1.4426950216293335 -
             (float10)5.965784072875977;
    *(double *)((int)&uStack_7f2c + iVar2) = (double)(fVar16 + fVar16);
    (&uStack_7f30)[-param_2] = 0xc55f89;
    FUN_00acf400(*(double *)((int)&uStack_7f2c + iVar2),*(undefined2 *)(local_7f18 + (-3 - param_2))
                );
    *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0xc55f91;
    uVar18 = FUN_00acd42c();
    local_24 = (int)uVar18;
    param_3 = (float *)uVar19;
    if ((int)pfVar6 < (int)(float *)uVar19) {
      param_3 = pfVar6;
    }
    if ((int)param_3 < 0) {
      param_3 = (float *)0x0;
    }
    if (0x10 < (int)uVar18) {
      local_24 = 0x10;
    }
    param_4 = 0.0;
    local_10 = (float *)((int)pfVar6 + 1);
    do {
      *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0xe8;
      *(undefined4 *)((int)&uStack_7f2c + iVar2) = 0xc55fcc;
      pvVar4 = _malloc(*(size_t *)((int)&uStack_7f2c + iVar2 + 4));
      puVar3 = local_28;
      *(void **)(*(int *)((int)local_18 + (int)pfVar6 * 4) + (int)param_4 * 4) = pvVar4;
      iVar5 = param_2;
      puVar15 = local_28;
      if (0 < param_2) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar15 = 0x4479c000;
          puVar15 = puVar15 + 1;
        }
      }
      local_1c = param_3;
      if ((int)param_3 <= local_24) {
        iVar5 = (int)param_4 + (int)param_3 * 8;
        local_20 = (float *)(iVar5 * 0x38);
        local_14 = afStack_7e3c + iVar5 * 0x38;
        do {
          iVar5 = 0;
          local_8 = 0;
          fVar16 = (float10)(int)local_1c * (float10)0.5;
          do {
            fVar17 = (float10)1.4426950408889634 *
                     ((((float10)local_8 * (float10)0.125 + fVar16) - (float10)2.0625) +
                     (float10)5.965784072875977) * (float10)0.6931470036506653;
            fVar16 = ROUND(fVar17);
            fVar17 = (float10)f2xm1(fVar17 - fVar16);
            fscale((float10)1 + fVar17,fVar16);
            *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0xc5606c;
            uVar18 = FUN_00acd42c();
            iVar13 = (int)uVar18;
            fVar17 = (float10)1.4426950408889634 *
                     ((extraout_ST0 - (float10)1.9375) + (float10)5.965784072875977) *
                     (float10)0.6931470036506653;
            fVar16 = ROUND(fVar17);
            fVar17 = (float10)f2xm1(fVar17 - fVar16);
            fscale((float10)1 + fVar17,fVar16);
            *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0xc560a3;
            uVar18 = FUN_00acd42c();
            iVar9 = (int)uVar18;
            if (iVar13 < 0) {
              iVar13 = 0;
            }
            if (param_2 < iVar13) {
              iVar13 = param_2;
            }
            if (iVar13 < iVar5) {
              iVar5 = iVar13;
            }
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            if (param_2 < iVar9) {
              iVar9 = param_2;
            }
            for (; (iVar5 < iVar9 && (iVar5 < param_2)); iVar5 = iVar5 + 1) {
              if (local_7f18[(int)local_20 + local_8] < (float)puVar3[iVar5]) {
                puVar3[iVar5] = local_7f18[(int)local_20 + local_8];
              }
            }
            local_8 = local_8 + 1;
            fVar16 = extraout_ST0_00;
          } while (local_8 < 0x38);
          if (iVar5 < param_2) {
            fVar1 = *local_14;
            do {
              if (fVar1 < (float)puVar3[iVar5]) {
                puVar3[iVar5] = fVar1;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < param_2);
          }
          local_1c = (float *)((int)local_1c + 1);
          local_20 = local_20 + 0x70;
          local_14 = local_14 + 0x1c0;
        } while ((int)local_1c <= local_24);
      }
      if ((int)local_10 < 0x11) {
        iVar5 = 0;
        local_8 = 0;
        do {
          iVar13 = local_8;
          fVar17 = (float10)1.4426950408889634 *
                   ((((float10)local_8 * (float10)0.125 + (float10)local_38) - (float10)2.0625) +
                   (float10)5.965784072875977) * (float10)0.6931470036506653;
          fVar16 = ROUND(fVar17);
          fVar17 = (float10)f2xm1(fVar17 - fVar16);
          fscale((float10)1 + fVar17,fVar16);
          *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0xc561ad;
          uVar18 = FUN_00acd42c();
          iVar9 = (int)uVar18;
          fVar17 = (float10)1.4426950408889634 *
                   ((extraout_ST0_01 - (float10)1.9375) + (float10)5.965784072875977) *
                   (float10)0.6931470036506653;
          fVar16 = ROUND(fVar17);
          fVar17 = (float10)f2xm1(fVar17 - fVar16);
          fscale((float10)1 + fVar17,fVar16);
          *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0xc561e4;
          uVar18 = FUN_00acd42c();
          iVar10 = (int)uVar18;
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          if (param_2 < iVar9) {
            iVar9 = param_2;
          }
          if (iVar9 < iVar5) {
            iVar5 = iVar9;
          }
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          if (param_2 < iVar10) {
            iVar10 = param_2;
          }
          for (; (iVar5 < iVar10 && (iVar5 < param_2)); iVar5 = iVar5 + 1) {
            if (local_7f18[((int)param_4 + (int)local_10 * 8) * 0x38 + iVar13] <
                (float)local_28[iVar5]) {
              local_28[iVar5] = local_7f18[((int)param_4 + (int)local_10 * 8) * 0x38 + iVar13];
            }
          }
          local_8 = iVar13 + 1;
        } while (local_8 < 0x38);
        if (iVar5 < param_2) {
          fVar1 = afStack_7e3c[((int)param_4 + (int)local_10 * 8) * 0x38];
          do {
            if (fVar1 < (float)local_28[iVar5]) {
              local_28[iVar5] = fVar1;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_2);
        }
      }
      pfVar6 = local_c;
      local_8 = 0;
      iVar5 = 8;
      do {
        fVar17 = (float10)1.4426950408889634 *
                 ((((float10)local_8 * (float10)0.125 + (float10)local_38) - (float10)2.0) +
                 (float10)5.965784072875977) * (float10)0.6931470036506653;
        fVar16 = ROUND(fVar17);
        fVar17 = (float10)f2xm1(fVar17 - fVar16);
        fscale((float10)1 + fVar17,fVar16);
        *(undefined4 *)((int)&uStack_7f2c + iVar2 + 4) = 0xc562db;
        uVar18 = FUN_00acd42c();
        iVar13 = (int)uVar18;
        if (iVar13 < 0) {
          *(undefined4 *)
           (iVar5 + *(int *)(*(int *)((int)local_18 + (int)pfVar6 * 4) + (int)param_4 * 4)) =
               0xc479c000;
        }
        else {
          iVar9 = *(int *)((int)local_18 + (int)pfVar6 * 4);
          if (iVar13 < param_2) {
            *(undefined4 *)(iVar5 + *(int *)(iVar9 + (int)param_4 * 4)) = local_28[iVar13];
          }
          else {
            *(undefined4 *)(iVar5 + *(int *)(iVar9 + (int)param_4 * 4)) = 0xc479c000;
          }
        }
        local_8 = local_8 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xe8);
      pfVar14 = *(float **)(*(int *)((int)local_18 + (int)pfVar6 * 4) + (int)param_4 * 4);
      iVar5 = 0;
      pfVar7 = pfVar14 + 3;
      do {
        if (-200.0 < pfVar7[-1]) break;
        if (-200.0 < *pfVar7) {
          iVar5 = iVar5 + 1;
          break;
        }
        if (-200.0 < pfVar7[1]) {
          iVar5 = iVar5 + 2;
          break;
        }
        if (-200.0 < pfVar7[2]) {
          iVar5 = iVar5 + 3;
          break;
        }
        if (-200.0 < pfVar7[3]) {
          iVar5 = iVar5 + 4;
          break;
        }
        if (-200.0 < pfVar7[4]) {
          iVar5 = iVar5 + 5;
          break;
        }
        if (-200.0 < pfVar7[5]) {
          iVar5 = iVar5 + 6;
          break;
        }
        if (-200.0 < pfVar7[6]) {
          iVar5 = iVar5 + 7;
          break;
        }
        iVar5 = iVar5 + 8;
        pfVar7 = pfVar7 + 8;
      } while (iVar5 < 0x10);
      local_8 = 0x37;
      *pfVar14 = (float)iVar5;
      iVar5 = *(int *)(*(int *)((int)local_18 + (int)pfVar6 * 4) + (int)param_4 * 4);
      pfVar7 = (float *)(iVar5 + 0xe0);
      do {
        if (-200.0 < pfVar7[1]) break;
        if (-200.0 < *pfVar7) {
          local_8 = local_8 + -1;
          break;
        }
        local_8 = local_8 + -2;
        pfVar7 = pfVar7 + -2;
      } while (0x11 < local_8);
      param_4 = (float)((int)param_4 + 1);
      *(float *)(iVar5 + 4) = (float)local_8;
    } while ((int)param_4 < 8);
    local_c = local_10;
    if (0x10 < (int)local_10) {
      return local_18;
    }
  } while( true );
}


//// FUNCTION FUN_00c56480 @ 00c56480 ////

void __fastcall FUN_00c56480(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  size_t _Size;
  float fVar1;
  float fVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_EDI;
  int iVar10;
  float10 fVar11;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float10 fVar12;
  float10 extraout_ST1_00;
  ulonglong uVar13;
  ulonglong uVar14;
  int local_28;
  int local_20;
  int local_1c;
  
  iVar3 = param_5;
  piVar7 = param_1;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  param_1[9] = *param_3;
  local_28 = -99;
  iVar9 = 1;
  fVar11 = (float10)log2((float10)*param_3 * (float10)8.0);
  fVar12 = (float10)log2((float10)2.0);
  FUN_00acf400((double)(((float10)0.6931471805599453 * fVar11) /
                        ((float10)0.6931471805599453 * fVar12) + (float10)0.5),(short)unaff_EDI);
  uVar13 = FUN_00acd42c();
  fVar11 = (float10)param_4;
  param_1[8] = (int)uVar13;
  log2(((float10)param_5 * (float10)0.25 * (float10)0.5) / fVar11);
  uVar13 = FUN_00acd42c();
  param_1[7] = (int)uVar13;
  log2((((float10)param_4 + (float10)0.25) * fVar11 * (float10)0.5) / extraout_ST1);
  uVar14 = FUN_00acd42c();
  _Size = param_4 * 4;
  param_1[10] = ((int)uVar14 - (int)uVar13) + 1;
  pvVar4 = _malloc(_Size);
  param_1[4] = (int)pvVar4;
  pvVar4 = _malloc(_Size);
  param_1[5] = (int)pvVar4;
  pvVar4 = _malloc(_Size);
  param_1[6] = (int)pvVar4;
  param_1[1] = param_2;
  *param_1 = param_4;
  param_1[0xb] = param_5;
  param_3 = (int *)0x0;
  iVar5 = 0;
  do {
    piVar7 = (int *)((int)param_3 + 1);
    fVar12 = (float10)1.4426950408889634 *
             (((float10)(int)piVar7 * (float10)0.125 - (float10)2.0) + (float10)5.965784072875977) *
             (float10)0.6931470036506653;
    fVar11 = ROUND(fVar12);
    fVar12 = (float10)f2xm1(fVar12 - fVar11);
    fVar11 = (float10)fscale((float10)1 + fVar12,fVar11);
    FUN_00acf400((double)((fVar11 * (float10)param_4 + fVar11 * (float10)param_4) / (float10)param_5
                         + (float10)0.5),(short)unaff_EDI);
    uVar13 = FUN_00acd42c();
    iVar8 = (int)uVar13;
    fVar1 = (float)(&DAT_00f78020)[(int)param_3];
    if (iVar5 < iVar8) {
      iVar6 = iVar8 - iVar5;
      fVar2 = (float)(&DAT_00f78024)[(int)param_3] - fVar1;
      do {
        if (param_4 <= iVar5) break;
        iVar5 = iVar5 + 1;
        *(float *)(param_1[4] + -4 + iVar5 * 4) = fVar1 + 100.0;
        fVar1 = fVar1 + fVar2 / (float)iVar6;
      } while (iVar5 < iVar8);
    }
    param_3 = piVar7;
  } while ((int)piVar7 < 0x57);
  if (0 < param_4) {
    iVar5 = param_5 / (param_4 * 2);
    iVar8 = iVar5 * iVar5;
    local_20 = 0;
    param_3 = (int *)0x0;
    iVar6 = 0;
    do {
      local_1c = *(int *)(param_2 + 0x78) + local_28;
      fVar11 = (float10)fpatan((float10)((int)param_3 * iVar6) * (float10)1.85e-08,(float10)1);
      fVar12 = (float10)fpatan((float10)local_20 * (float10)0.00074,(float10)1);
      fVar1 = (float)((float10)local_20 * (float10)0.0001 +
                     fVar12 * (float10)13.100000381469727 + fVar11 * (float10)2.240000009536743);
      if (local_1c < iVar6) {
        param_5 = iVar5 * local_28;
        iVar10 = iVar8 * local_28;
        do {
          fVar11 = (float10)fpatan((float10)(iVar10 * local_28) * (float10)1.85e-08,(float10)1);
          fVar12 = (float10)fpatan((float10)param_5 * (float10)0.00074,(float10)1);
          if ((float10)fVar1 - (float10)*(float *)(param_2 + 0x70) <=
              (float10)param_5 * (float10)0.0001 +
              fVar12 * (float10)13.100000381469727 + fVar11 * (float10)2.240000009536743) break;
          local_28 = local_28 + 1;
          param_5 = param_5 + iVar5;
          iVar10 = iVar10 + iVar8;
          local_1c = local_1c + 1;
        } while (local_1c < iVar6);
      }
      if (iVar9 <= param_4) {
        param_5 = iVar5 * iVar9;
        iVar10 = iVar8 * iVar9;
        do {
          if (*(int *)(param_2 + 0x7c) + iVar6 <= iVar9) {
            fVar11 = (float10)fpatan((float10)(iVar10 * iVar9) * (float10)1.85e-08,(float10)1);
            fVar12 = (float10)fpatan((float10)param_5 * (float10)0.00074,(float10)1);
            if ((float10)fVar1 + (float10)*(float *)(param_2 + 0x74) <=
                (float10)param_5 * (float10)0.0001 +
                fVar12 * (float10)13.100000381469727 + fVar11 * (float10)2.240000009536743) break;
          }
          param_5 = param_5 + iVar5;
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + iVar8;
        } while (iVar9 <= param_4);
      }
      *(int *)(param_1[6] + iVar6 * 4) = local_28 * 0x10000 + -0x10001 + iVar9;
      param_3 = (int *)((int)param_3 + iVar8);
      iVar6 = iVar6 + 1;
      local_20 = local_20 + iVar5;
    } while (iVar6 < param_4);
  }
  param_3 = (int *)0x0;
  if (0 < param_4) {
    do {
      log2((((float10)(int)param_3 + (float10)0.25) * (float10)iVar3 * (float10)0.5) /
           (float10)param_4);
      uVar13 = FUN_00acd42c();
      *(int *)(param_1[5] + (int)param_3 * 4) = (int)uVar13;
      param_3 = (int *)((int)param_3 + 1);
    } while ((int)param_3 < param_4);
  }
  pvVar4 = FUN_00c558f0((void *)(param_2 + 0x24),((float)iVar3 * 0.5) / (float)param_4,param_4,
                        *(float **)(param_2 + 0x18),*(float *)(param_2 + 0x1c));
  param_1[2] = (int)pvVar4;
  pvVar4 = _malloc(0xc);
  param_1[3] = (int)pvVar4;
  iVar5 = 0;
  do {
    pvVar4 = _malloc(param_4 * 4);
    *(void **)(iVar5 + param_1[3]) = pvVar4;
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0xc);
  param_3 = (int *)0x0;
  if (0 < param_4) {
    fVar11 = (float10)param_4 + (float10)param_4;
    do {
      log2((((float10)(int)param_3 + (float10)0.5) * (float10)iVar3) / fVar11);
      uVar13 = FUN_00acd42c();
      iVar5 = (int)uVar13;
      fVar11 = extraout_ST0 - (float10)iVar5;
      param_3 = (int *)((int)param_3 + 1);
      fVar12 = (float10)1.0 - fVar11;
      *(float *)(*(int *)param_1[3] + -4 + (int)param_3 * 4) =
           (float)((float10)*(float *)(param_1[1] + 0x84 + iVar5 * 4) * fVar12 +
                  fVar11 * (float10)*(float *)(param_1[1] + 0x88 + iVar5 * 4));
      *(float *)(*(int *)(param_1[3] + 4) + -4 + (int)param_3 * 4) =
           (float)((float10)*(float *)(param_1[1] + 200 + iVar5 * 4) * fVar12 +
                  fVar11 * (float10)*(float *)(param_1[1] + 0xcc + iVar5 * 4));
      *(float *)(*(int *)(param_1[3] + 8) + -4 + (int)param_3 * 4) =
           (float)((float10)*(float *)(param_1[1] + 0x10c + iVar5 * 4) * fVar12 +
                  fVar11 * (float10)*(float *)(param_1[1] + 0x110 + iVar5 * 4));
      fVar11 = extraout_ST1_00;
    } while ((int)param_3 < param_4);
  }
  return;
}


//// FUNCTION FUN_00c56a10 @ 00c56a10 ////

void __fastcall FUN_00c56a10(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[4]);
    }
    if ((void *)param_1[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[5]);
    }
    if ((void *)param_1[6] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[6]);
    }
    if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)**(undefined4 **)param_1[2]);
    }
    if (param_1[3] != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)param_1[3]);
    }
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00c56ae0 @ 00c56ae0 ////

void FUN_00c56ae0(int param_1,float param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int unaff_EDI;
  ulonglong uVar7;
  int iStack00000018;
  
  uVar7 = FUN_00acd42c();
  uVar3 = (uint)uVar7 & ((int)(uint)uVar7 < 1) - 1;
  if (6 < (int)uVar3) {
    uVar3 = 7;
  }
  iVar1 = *(int *)(param_1 + uVar3 * 4);
  uVar7 = FUN_00acd42c();
  iStack00000018 = (int)uVar7;
  uVar7 = FUN_00acd42c();
  iVar6 = (int)uVar7;
  uVar7 = FUN_00acd42c();
  iVar4 = (int)uVar7;
  if (3 < iStack00000018 - iVar4) {
    pfVar5 = (float *)(iVar1 + 0x10 + iVar4 * 4);
    do {
      if ((0 < iVar6) && (*(float *)(unaff_EDI + iVar6 * 4) < param_2 + pfVar5[-2])) {
        *(float *)(unaff_EDI + iVar6 * 4) = param_2 + pfVar5[-2];
      }
      iVar6 = iVar6 + param_5;
      if (param_4 <= iVar6) {
        return;
      }
      if ((0 < iVar6) && (*(float *)(unaff_EDI + iVar6 * 4) < param_2 + pfVar5[-1])) {
        *(float *)(unaff_EDI + iVar6 * 4) = param_2 + pfVar5[-1];
      }
      iVar6 = iVar6 + param_5;
      if (param_4 <= iVar6) {
        return;
      }
      if ((0 < iVar6) && (*(float *)(unaff_EDI + iVar6 * 4) < param_2 + *pfVar5)) {
        *(float *)(unaff_EDI + iVar6 * 4) = param_2 + *pfVar5;
      }
      iVar6 = iVar6 + param_5;
      if (param_4 <= iVar6) {
        return;
      }
      if ((0 < iVar6) && (*(float *)(unaff_EDI + iVar6 * 4) < param_2 + pfVar5[1])) {
        *(float *)(unaff_EDI + iVar6 * 4) = param_2 + pfVar5[1];
      }
      iVar6 = iVar6 + param_5;
      if (param_4 <= iVar6) {
        return;
      }
      iVar4 = iVar4 + 4;
      pfVar5 = pfVar5 + 4;
    } while (iVar4 < iStack00000018 + -3);
  }
  while( true ) {
    if (iStack00000018 <= iVar4) {
      return;
    }
    if ((0 < iVar6) &&
       (fVar2 = param_2 + *(float *)(iVar1 + 8 + iVar4 * 4),
       *(float *)(unaff_EDI + iVar6 * 4) < fVar2)) {
      *(float *)(unaff_EDI + iVar6 * 4) = fVar2;
    }
    iVar6 = iVar6 + param_5;
    if (param_4 <= iVar6) break;
    iVar4 = iVar4 + 1;
  }
  return;
}


//// FUNCTION FUN_00c56c60 @ 00c56c60 ////

void FUN_00c56c60(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *unaff_EBX;
  int iVar7;
  int iVar8;
  
  iVar3 = *unaff_EBX;
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      fVar2 = *(float *)(param_2 + iVar7 * 4);
      iVar4 = unaff_EBX[5];
      iVar6 = *(int *)(iVar4 + iVar7 * 4);
      iVar8 = iVar7 + 1;
      if (iVar8 < iVar3) {
        piVar5 = (int *)(iVar4 + 4 + iVar7 * 4);
        do {
          if (*piVar5 != iVar6) break;
          iVar1 = iVar7 * 4;
          iVar7 = iVar7 + 1;
          piVar5 = piVar5 + 1;
          iVar8 = iVar8 + 1;
          if (fVar2 < *(float *)(param_2 + 4 + iVar1)) {
            fVar2 = *(float *)(param_2 + iVar7 * 4);
          }
        } while (iVar8 < iVar3);
      }
      if (*(float *)(param_3 + iVar7 * 4) < fVar2 + 6.0) {
        iVar6 = iVar6 >> ((byte)unaff_EBX[8] & 0x1f);
        if (iVar6 < 0x11) {
          if (iVar6 < 0) {
            iVar6 = 0;
          }
        }
        else {
          iVar6 = 0x10;
        }
        FUN_00c56ae0(*(int *)(param_1 + iVar6 * 4),fVar2,*(int *)(iVar4 + iVar7 * 4) - unaff_EBX[7],
                     unaff_EBX[10],unaff_EBX[9]);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  return;
}


//// FUNCTION FUN_00c56d50 @ 00c56d50 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00c56d50(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  float *pfVar8;
  int iStack_30;
  float fStack_2c;
  int local_1c;
  undefined1 *local_8;
  
  fStack_2c = 1.8130852e-38;
  iVar3 = param_3 * -4;
  pfVar6 = (float *)(&stack0xffffffd8 + param_3 * -8);
  (&fStack_2c)[-param_3] = 1.8130877e-38;
  iVar5 = 0;
  iVar4 = 0;
  local_1c = 0;
  if (0 < param_3) {
    do {
      local_8 = &stack0xffffffd8 + iVar3;
      if (iVar4 < 2) {
        *(int *)(&stack0xffffffd8 + iVar4 * 4 + iVar3) = iVar5;
      }
      else {
        fVar2 = *(float *)(param_1 + iVar5 * 4);
        pfVar8 = &fStack_2c + param_3 * -2 + iVar4;
        if (*pfVar8 <= fVar2) {
          piVar7 = &iStack_30 + (iVar4 - param_3);
          do {
            if ((((piVar7[1] + param_2 <= iVar5) || (iVar4 < 2)) ||
                (*pfVar8 < *(float *)(&stack0xffffffd8 + (param_3 * -8 - (int)local_8) + (int)piVar7
                                     ) ==
                 (*pfVar8 ==
                 *(float *)(&stack0xffffffd8 + (param_3 * -8 - (int)local_8) + (int)piVar7)))) ||
               (*piVar7 + param_2 <= iVar5)) {
              *(int *)(local_8 + iVar4 * 4) = iVar5;
              goto LAB_00c56e1e;
            }
            pfVar1 = pfVar8 + -1;
            pfVar8 = pfVar8 + -1;
            iVar4 = iVar4 + -1;
            piVar7 = piVar7 + -1;
          } while (*pfVar1 <= fVar2);
        }
        *(int *)(&stack0xffffffd8 + iVar4 * 4 + iVar3) = iVar5;
      }
LAB_00c56e1e:
      *(undefined4 *)(&stack0xffffffd8 + iVar4 * 4 + param_3 * -8) =
           *(undefined4 *)(param_1 + iVar5 * 4);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_3);
  }
  local_8 = (undefined1 *)0x0;
  if (0 < iVar4) {
    piVar7 = (int *)(&stack0xffffffdc + iVar3);
    do {
      if ((iVar4 + -1 <= (int)local_8) || ((float)piVar7[-param_3] <= *pfVar6)) {
        iVar3 = piVar7[-1] + 1 + param_2;
      }
      else {
        iVar3 = *piVar7;
      }
      if (param_3 < iVar3) {
        iVar3 = param_3;
      }
      for (; local_1c < iVar3; local_1c = local_1c + 1) {
        *(float *)(param_1 + local_1c * 4) = *pfVar6;
      }
      local_8 = (undefined1 *)((int)local_8 + 1);
      piVar7 = piVar7 + 1;
      pfVar6 = pfVar6 + 1;
    } while ((int)local_8 < iVar4);
  }
  return;
}


//// FUNCTION FUN_00c56ec0 @ 00c56ec0 ////

void FUN_00c56ec0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_EDI;
  
  iVar5 = unaff_EDI[9];
  iVar6 = 0;
  FUN_00c56d50(param_1,iVar5,unaff_EDI[10]);
  iVar5 = (*(int *)unaff_EDI[5] - (iVar5 >> 1)) - unaff_EDI[7];
  if (1 < *unaff_EDI) {
    do {
      fVar2 = *(float *)(param_1 + iVar5 * 4);
      iVar3 = unaff_EDI[7];
      iVar4 = iVar5;
      if (*(float *)(unaff_EDI[1] + 0x20) < fVar2) {
        fVar2 = *(float *)(unaff_EDI[1] + 0x20);
      }
      while (iVar4 = iVar4 + 1,
            iVar4 <= (*(int *)(unaff_EDI[5] + iVar6 * 4 + 4) + *(int *)(unaff_EDI[5] + iVar6 * 4) >>
                     1) - iVar3) {
        iVar1 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        if (((-9999.0 < *(float *)(param_1 + 4 + iVar1)) &&
            (*(float *)(param_1 + iVar5 * 4) < fVar2)) || (fVar2 == -9999.0)) {
          fVar2 = *(float *)(param_1 + iVar5 * 4);
        }
      }
      if (iVar6 < *unaff_EDI) {
        do {
          if (iVar3 + iVar5 < *(int *)(unaff_EDI[5] + iVar6 * 4)) break;
          if (*(float *)(param_2 + iVar6 * 4) < fVar2) {
            *(float *)(param_2 + iVar6 * 4) = fVar2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *unaff_EDI);
      }
    } while (iVar6 + 1 < *unaff_EDI);
  }
  fVar2 = *(float *)(param_1 + -4 + unaff_EDI[10] * 4);
  if (iVar6 < *unaff_EDI) {
    do {
      if (*(float *)(param_2 + iVar6 * 4) < fVar2) {
        *(float *)(param_2 + iVar6 * 4) = fVar2;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *unaff_EDI);
  }
  return;
}


//// FUNCTION FUN_00c57010 @ 00c57010 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00c57010(int param_1,uint *param_2,float *param_3,int param_4,float param_5,int param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  uint **ppuVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  undefined4 uStack_88;
  uint *local_78;
  float local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined1 *local_5c;
  int local_58;
  uint *local_54;
  float *local_50;
  uint *local_4c;
  int local_48;
  int local_44;
  int local_40;
  float *local_3c;
  float *local_38;
  undefined1 *local_34;
  uint **local_30;
  float *local_2c;
  float local_28;
  float local_24;
  uint *local_20;
  float local_1c;
  float local_18;
  uint *local_14;
  int local_10;
  float local_c;
  float local_8;
  
  iVar1 = param_1 * -4;
  (&uStack_88)[-param_1] = 0xc5703b;
  (&uStack_88)[param_1 * -2] = 0xc5704a;
  (&uStack_88)[param_1 * -3] = 0xc5705d;
  local_50 = (float *)(&stack0xffffff7c + param_1 * -0x10);
  (&uStack_88)[param_1 * -4] = 0xc57071;
  pfVar9 = local_50;
  local_34 = &stack0xffffff7c + param_1 * -0x14;
  local_28 = 0.0;
  local_c = param_5 + *param_3;
  local_1c = 0.0;
  if (param_5 + *param_3 < 1.0) {
    local_c = 1.0;
  }
  local_10 = 1;
  local_8 = 1.0;
  puVar13 = (uint *)(local_c * local_c * 0.5);
  local_20 = puVar13;
  local_14 = puVar13;
  local_18 = (float)puVar13 * local_c;
  *(uint **)(&stack0xffffff7c + iVar1) = puVar13;
  *(uint **)(&stack0xffffff7c + param_1 * -8) = puVar13;
  fVar3 = local_18;
  *(undefined4 *)(&stack0xffffff7c + param_1 * -0xc) = 0;
  *local_50 = fVar3;
  *(undefined4 *)(&stack0xffffff7c + param_1 * -0x14) = 0;
  if (3 < param_1 + -1) {
    local_38 = local_50 + 1;
    local_3c = &local_74 + param_1 * -3;
    local_30 = &local_78 + param_1 * -2;
    local_2c = (float *)(&stack0xffffff84 + iVar1);
    local_40 = (int)param_3 - (int)(&stack0xffffff7c + iVar1);
    local_44 = iVar1;
    local_48 = param_1 * -8;
    local_4c = (uint *)((int)local_50 - (int)(&stack0xffffff7c + iVar1));
    local_60 = (int)param_3 - (int)(&stack0xffffff7c + param_1 * -8);
    local_64 = iVar1;
    local_68 = (int)local_50 - (int)(&stack0xffffff7c + param_1 * -8);
    local_6c = param_1 * -0xc;
    local_70 = (int)param_3 - (int)(&stack0xffffff7c + param_1 * -0xc);
    local_74 = (float)((int)local_50 - (int)(&stack0xffffff7c + param_1 * -0xc));
    local_58 = (int)param_3 - (int)local_50;
    local_54 = (uint *)((param_1 - 5U >> 2) + 1);
    local_5c = &stack0xffffff7c + (param_1 * -0x14 - (int)local_50);
    local_10 = (int)local_54 * 4 + 1;
    local_78 = (uint *)(param_1 * -8);
    local_50 = (float *)(param_1 * -0x10);
    do {
      local_c = param_5 + *(float *)(local_58 + (int)local_38);
      if (local_c < 1.0) {
        local_c = 1.0;
      }
      local_20 = (uint *)(local_c * local_c);
      local_24 = (float)local_20 + (float)puVar13;
      local_2c[-1] = local_24;
      fVar3 = local_8 * (float)local_20;
      local_14 = (uint *)((float)local_14 + fVar3);
      fVar2 = local_8 * local_8;
      local_30[-2] = local_14;
      local_1c = fVar2 * (float)local_20 + local_1c;
      fVar2 = (float)local_20 * local_c;
      local_3c[-3] = local_1c;
      pfVar14 = local_38;
      local_18 = fVar2 + local_18;
      *local_38 = local_18;
      pfVar15 = local_2c;
      fVar3 = fVar3 * local_c + local_28;
      *(float *)(local_5c + (int)pfVar14) = fVar3;
      local_8 = local_8 + 1.0;
      fVar2 = param_5 + *(float *)(local_40 + (int)local_2c);
      if (fVar2 < 1.0) {
        fVar2 = 1.0;
      }
      fVar4 = fVar2 * fVar2;
      local_24 = local_24 + fVar4;
      fVar7 = local_8 * fVar4;
      *local_2c = local_24;
      fVar8 = fVar7 + (float)local_14;
      fVar6 = local_8 * local_8 * fVar4 + local_1c;
      fVar4 = fVar4 * fVar2 + local_18;
      fVar3 = fVar7 * fVar2 + fVar3;
      *(float *)(local_44 + (int)pfVar15) = fVar8;
      *(float *)(local_48 + (int)pfVar15) = fVar6;
      *(float *)((int)local_4c + (int)pfVar15) = fVar4;
      *(float *)((int)local_50 + (int)pfVar15) = fVar3;
      local_8 = local_8 + 1.0;
      fVar2 = param_5 + *(float *)(local_60 + (int)local_30);
      if (fVar2 < 1.0) {
        fVar2 = 1.0;
      }
      fVar7 = fVar2 * fVar2;
      local_24 = local_24 + fVar7;
      local_1c = fVar6;
      local_18 = fVar4;
      local_14 = (uint *)fVar8;
      local_2c[1] = local_24;
      ppuVar10 = local_30;
      local_14 = (uint *)(local_8 * fVar7 + (float)local_14);
      local_20 = (uint *)(local_8 * fVar7);
      *local_30 = local_14;
      fVar6 = local_8 * local_8 * fVar7 + local_1c;
      fVar4 = fVar7 * fVar2 + local_18;
      fVar3 = fVar2 * (float)local_20 + fVar3;
      *(float *)(local_64 + (int)ppuVar10) = fVar6;
      *(float *)(local_68 + (int)ppuVar10) = fVar4;
      *(float *)(local_6c + (int)ppuVar10) = fVar3;
      local_8 = local_8 + 1.0;
      local_c = param_5 + *(float *)(local_70 + (int)local_3c);
      if (local_c < 1.0) {
        local_c = 1.0;
      }
      local_20 = (uint *)(local_c * local_c);
      puVar13 = (uint *)((float)local_20 + local_24);
      puVar5 = (uint *)((float)local_14 + local_8 * (float)local_20);
      local_14 = puVar5;
      local_1c = local_8 * local_8 * (float)local_20 + fVar6;
      local_18 = (float)local_20 * local_c + fVar4;
      local_28 = local_8 * (float)local_20 * local_c + fVar3;
      local_2c[2] = (float)puVar13;
      fVar3 = local_18;
      local_30[1] = puVar5;
      *local_3c = local_1c;
      *(float *)((int)local_74 + (int)local_3c) = fVar3;
      *(float *)((int)(local_78 + -4) + (int)(local_3c + 4)) = local_28;
      local_2c = local_2c + 4;
      local_38 = local_38 + 4;
      local_8 = local_8 + 1.0;
      local_3c = local_3c + 4;
      local_54 = (uint *)((int)local_54 + -1);
      local_30 = local_30 + 4;
    } while (local_54 != (uint *)0x0);
  }
  if (local_10 < param_1) {
    iVar11 = (int)param_3 - (int)(&stack0xffffff7c + iVar1);
    local_40 = iVar11;
    local_44 = iVar1;
    local_48 = param_1 * -8;
    local_4c = (uint *)((int)pfVar9 - (int)(&stack0xffffff7c + iVar1));
    param_3 = (float *)(param_1 - local_10);
    pfVar14 = (float *)(&stack0xffffff7c + local_10 * 4 + iVar1);
    do {
      fVar3 = param_5 + *(float *)(iVar11 + (int)pfVar14);
      if (fVar3 < 1.0) {
        fVar3 = 1.0;
      }
      fVar2 = fVar3 * fVar3;
      pfVar15 = pfVar14 + 1;
      puVar13 = (uint *)(fVar2 + (float)puVar13);
      local_20 = (uint *)(local_8 * fVar2);
      puVar5 = (uint *)((float)local_20 + (float)local_14);
      local_14 = puVar5;
      fVar4 = local_8 * local_8 * fVar2 + local_1c;
      local_1c = fVar4;
      fVar2 = fVar2 * fVar3 + local_18;
      local_18 = fVar2;
      fVar3 = (float)local_20 * fVar3 + local_28;
      local_28 = fVar3;
      *pfVar14 = (float)puVar13;
      pfVar15[-1 - param_1] = (float)puVar5;
      pfVar15[param_1 * -2 + -1] = fVar4;
      *(float *)(((int)pfVar9 - (int)(&stack0xffffff7c + iVar1)) + -4 + (int)pfVar15) = fVar2;
      *(float *)(local_34 + (-4 - (int)(&stack0xffffff7c + iVar1)) + (int)pfVar15) = fVar3;
      param_3 = (float *)((int)param_3 + -1);
      local_8 = local_8 + 1.0;
      pfVar14 = pfVar15;
    } while (param_3 != (float *)0x0);
  }
  local_78 = (uint *)*param_2;
  fVar3 = 0.0;
  iVar11 = (int)local_78 >> 0x10;
  local_10 = 0;
  if (iVar11 < 0) {
    local_54 = param_2;
    local_50 = (float *)(param_4 - (int)param_2);
    do {
      uVar12 = (uint)local_78 & 0xffff;
      iVar16 = iVar11 * -4;
      fVar2 = *(float *)(&stack0xffffff7c + uVar12 * 4 + param_1 * -8) -
              *(float *)(&stack0xffffff7c + iVar16 + param_1 * -8);
      local_1c = (pfVar9[uVar12] + pfVar9[-iVar11]) *
                 (*(float *)(&stack0xffffff7c + uVar12 * 4 + param_1 * -0xc) +
                 *(float *)(&stack0xffffff7c + iVar16 + param_1 * -0xc)) -
                 (*(float *)(local_34 + uVar12 * 4) - *(float *)(local_34 + iVar16)) * fVar2;
      local_20 = (uint *)((*(float *)(local_34 + uVar12 * 4) - *(float *)(local_34 + iVar16)) *
                          (*(float *)(&stack0xffffff7c + uVar12 * 4 + iVar1) +
                          *(float *)(&stack0xffffff7c + iVar16 + iVar1)) -
                         (pfVar9[uVar12] + pfVar9[-iVar11]) * fVar2);
      local_30 = (uint **)((*(float *)(&stack0xffffff7c + uVar12 * 4 + param_1 * -0xc) +
                           *(float *)(&stack0xffffff7c + iVar16 + param_1 * -0xc)) *
                           (*(float *)(&stack0xffffff7c + uVar12 * 4 + iVar1) +
                           *(float *)(&stack0xffffff7c + iVar16 + iVar1)) - fVar2 * fVar2);
      fVar2 = ((float)local_20 * fVar3 + local_1c) / (float)local_30;
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      local_54 = local_54 + 1;
      *(float *)((param_4 - (int)param_2) + -4 + (int)local_54) = fVar2 - param_5;
      fVar3 = fVar3 + 1.0;
      local_78 = (uint *)*local_54;
      local_10 = local_10 + 1;
      iVar11 = (int)local_78 >> 0x10;
    } while (iVar11 < 0);
  }
  local_78 = param_2 + local_10;
  uVar12 = *local_78;
  local_74 = (float)(uVar12 & 0xffff);
  if ((int)local_74 < param_1) {
    local_54 = local_78;
    local_50 = (float *)(param_4 - (int)param_2);
    do {
      param_3 = (float *)((int)uVar12 >> 0x10);
      fVar2 = *(float *)(&stack0xffffff7c + (int)local_74 * 4 + param_1 * -8) -
              *(float *)(&stack0xffffff7c + (int)param_3 * 4 + param_1 * -8);
      local_1c = (pfVar9[(int)local_74] - pfVar9[(int)param_3]) *
                 (*(float *)(&stack0xffffff7c + (int)local_74 * 4 + param_1 * -0xc) -
                 *(float *)(&stack0xffffff7c + (int)param_3 * 4 + param_1 * -0xc)) -
                 (*(float *)(local_34 + (int)local_74 * 4) - *(float *)(local_34 + (int)param_3 * 4)
                 ) * fVar2;
      local_20 = (uint *)((*(float *)(local_34 + (int)local_74 * 4) -
                          *(float *)(local_34 + (int)param_3 * 4)) *
                          (*(float *)(&stack0xffffff7c + (int)local_74 * 4 + iVar1) -
                          *(float *)(&stack0xffffff7c + (int)param_3 * 4 + iVar1)) -
                         (pfVar9[(int)local_74] - pfVar9[(int)param_3]) * fVar2);
      local_30 = (uint **)((*(float *)(&stack0xffffff7c + (int)local_74 * 4 + param_1 * -0xc) -
                           *(float *)(&stack0xffffff7c + (int)param_3 * 4 + param_1 * -0xc)) *
                           (*(float *)(&stack0xffffff7c + (int)local_74 * 4 + iVar1) -
                           *(float *)(&stack0xffffff7c + (int)param_3 * 4 + iVar1)) - fVar2 * fVar2)
      ;
      fVar2 = ((float)local_20 * fVar3 + local_1c) / (float)local_30;
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      puVar13 = local_54 + 1;
      *(float *)((int)local_54 + (param_4 - (int)param_2)) = fVar2 - param_5;
      fVar3 = fVar3 + 1.0;
      local_54 = puVar13;
      uVar12 = *puVar13;
      local_10 = local_10 + 1;
      local_74 = (float)(uVar12 & 0xffff);
    } while ((int)local_74 < param_1);
  }
  if (local_10 < param_1) {
    do {
      fVar2 = ((float)local_20 * fVar3 + local_1c) * (1.0 / (float)local_30);
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      local_10 = local_10 + 1;
      *(float *)(param_4 + -4 + local_10 * 4) = fVar2 - param_5;
      fVar3 = fVar3 + 1.0;
    } while (local_10 < param_1);
  }
  if (0 < param_6) {
    fVar3 = 0.0;
    iVar11 = param_6 / 2;
    local_10 = 0;
    if (iVar11 - param_6 < 0) {
      local_78 = (uint *)(iVar11 << 2);
      local_4c = (uint *)(iVar11 - param_6);
      local_50 = (float *)(iVar11 << 2);
      iVar16 = (iVar11 - param_6) * -4;
      local_54 = (uint *)((param_6 - iVar11) * 4);
      do {
        fVar2 = *(float *)(&stack0xffffff7c + (int)local_50 + param_1 * -8) -
                *(float *)(&stack0xffffff7c + iVar16 + param_1 * -8);
        fVar4 = *(float *)(iVar16 + (int)pfVar9) + *(float *)((int)local_50 + (int)pfVar9);
        local_1c = fVar4 * (*(float *)(&stack0xffffff7c + iVar16 + param_1 * -0xc) +
                           *(float *)(&stack0xffffff7c + (int)local_50 + param_1 * -0xc)) -
                   (*(float *)(local_34 + (int)local_50) - *(float *)(local_34 + iVar16)) * fVar2;
        local_20 = (uint *)((*(float *)(local_34 + (int)local_50) - *(float *)(local_34 + iVar16)) *
                            (*(float *)(&stack0xffffff7c + iVar16 + iVar1) +
                            *(float *)(&stack0xffffff7c + (int)local_50 + iVar1)) - fVar4 * fVar2);
        local_30 = (uint **)((*(float *)(&stack0xffffff7c + iVar16 + param_1 * -0xc) +
                             *(float *)(&stack0xffffff7c + (int)local_50 + param_1 * -0xc)) *
                             (*(float *)(&stack0xffffff7c + iVar16 + iVar1) +
                             *(float *)(&stack0xffffff7c + (int)local_50 + iVar1)) - fVar2 * fVar2);
        fVar2 = ((float)local_20 * fVar3 + local_1c) / (float)local_30 - param_5;
        if (fVar2 < *(float *)(param_4 + local_10 * 4)) {
          *(float *)(param_4 + local_10 * 4) = fVar2;
        }
        fVar3 = fVar3 + 1.0;
        local_10 = local_10 + 1;
        local_50 = (float *)((int)local_50 + 4);
        iVar16 = (int)local_54 + -4;
        local_4c = (uint *)((int)local_4c + 1);
        local_54 = (uint *)iVar16;
      } while ((int)local_4c < 0);
    }
    else {
      fVar3 = 0.0;
    }
    local_78 = (uint *)(local_10 + iVar11);
    if ((int)local_78 < param_1) {
      local_4c = local_78;
      local_50 = (float *)(((int)local_78 - param_6) * 4);
      local_54 = (uint *)((int)local_78 * 4);
      local_48 = (int)local_78 * 4;
      param_3 = (float *)(((iVar11 - param_6) + local_10) * 4);
      do {
        fVar8 = *(float *)(&stack0xffffff7c + local_48 + iVar1) -
                *(float *)((int)local_50 + (int)(&stack0xffffff7c + iVar1));
        fVar2 = *(float *)(&stack0xffffff7c + local_48 + param_1 * -8) -
                *(float *)((int)local_50 + (int)(&stack0xffffff7c + param_1 * -8));
        fVar7 = *(float *)(&stack0xffffff7c + local_48 + param_1 * -0xc) -
                *(float *)((int)local_50 + (int)(&stack0xffffff7c + param_1 * -0xc));
        fVar6 = *(float *)(local_48 + (int)pfVar9) - *(float *)((int)local_50 + (int)pfVar9);
        fVar4 = *(float *)(local_34 + local_48) - *(float *)((int)local_50 + (int)local_34);
        local_1c = fVar6 * fVar7 - fVar4 * fVar2;
        local_20 = (uint *)(fVar4 * fVar8 - fVar6 * fVar2);
        local_30 = (uint **)(fVar7 * fVar8 - fVar2 * fVar2);
        fVar2 = ((float)local_20 * fVar3 + local_1c) / (float)local_30 - param_5;
        if (fVar2 < *(float *)(param_4 + local_10 * 4)) {
          *(float *)(param_4 + local_10 * 4) = fVar2;
        }
        fVar3 = fVar3 + 1.0;
        local_10 = local_10 + 1;
        param_3 = param_3 + 1;
        local_54 = (uint *)(local_48 + 4);
        local_48 = local_48 + 4;
        local_4c = (uint *)((int)local_4c + 1);
        local_50 = param_3;
      } while ((int)local_4c < param_1);
    }
    if (local_10 < param_1) {
      do {
        fVar2 = ((float)local_20 * fVar3 + local_1c) * (1.0 / (float)local_30) - param_5;
        if (fVar2 < *(float *)(param_4 + local_10 * 4)) {
          *(float *)(param_4 + local_10 * 4) = fVar2;
        }
        local_10 = local_10 + 1;
        fVar3 = fVar3 + 1.0;
      } while (local_10 < param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00c57970 @ 00c57970 ////

void __fastcall FUN_00c57970(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar3 = *param_1;
  if (iVar3 < param_5) {
    param_5 = iVar3;
  }
  iVar4 = 0;
  if (3 < param_5) {
    pfVar2 = (float *)(param_2 + 4);
    pfVar5 = (float *)(param_4 + 8);
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 4;
      pfVar5[-2] = *(float *)(&DAT_00f7db08 + *(int *)(param_3 + iVar1) * 4) * pfVar2[-1];
      *(float *)((param_4 - param_2) + -0x10 + (int)(pfVar2 + 4)) =
           *(float *)(&DAT_00f7db08 + *(int *)((int)pfVar2 + (param_3 - param_2)) * 4) * *pfVar2;
      *pfVar5 = *(float *)(&DAT_00f7db08 +
                          *(int *)((param_3 - param_4) + -0x10 + (int)(pfVar5 + 4)) * 4) * pfVar2[1]
      ;
      pfVar5[1] = *(float *)(&DAT_00f7db08 + *(int *)(param_3 + -4 + iVar4 * 4) * 4) * pfVar2[2];
      pfVar2 = pfVar2 + 4;
      pfVar5 = pfVar5 + 4;
    } while (iVar4 < param_5 + -3);
  }
  if (iVar4 < param_5) {
    iVar6 = param_5 - iVar4;
    iVar1 = iVar4 * 4;
    iVar4 = iVar4 + iVar6;
    pfVar2 = (float *)(param_2 + iVar1);
    do {
      iVar6 = iVar6 + -1;
      *(float *)((int)pfVar2 + (param_4 - param_2)) =
           *(float *)(&DAT_00f7db08 + *(int *)((int)pfVar2 + (param_3 - param_2)) * 4) * *pfVar2;
      pfVar2 = pfVar2 + 1;
    } while (iVar6 != 0);
  }
  if (iVar4 < iVar3) {
    puVar7 = (undefined4 *)(param_4 + iVar4 * 4);
    for (iVar3 = iVar3 - iVar4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00c57a80 @ 00c57a80 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00c57a80(int *param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int aiStack_44 [5];
  float fStack_30;
  int iStack_2c;
  
  iVar1 = *param_1;
  iStack_2c = 0xc57aa5;
  iVar2 = iVar1 * -4;
  iVar7 = param_1[6];
  (&iStack_2c)[-iVar1] = 0xffffffff;
  (&fStack_30)[-iVar1] = 140.0;
  aiStack_44[4 - iVar1] = (int)param_3;
  aiStack_44[3 - iVar1] = param_2;
  aiStack_44[2 - iVar1] = iVar7;
  aiStack_44[1 - iVar1] = iVar1;
  aiStack_44[-iVar1] = 0xc57ac1;
  FUN_00c57010(aiStack_44[1 - iVar1],(uint *)aiStack_44[2 - iVar1],(float *)aiStack_44[3 - iVar1],
               aiStack_44[4 - iVar1],(&fStack_30)[-iVar1],(&iStack_2c)[-iVar1]);
  iVar7 = 0;
  if (3 < iVar1) {
    pfVar4 = param_3 + 1;
    pfVar5 = (float *)(&stack0xffffffe0 + iVar2);
    do {
      iVar6 = iVar7 * 4;
      iVar7 = iVar7 + 4;
      pfVar3 = pfVar4 + 4;
      pfVar5[-2] = *(float *)(param_2 + iVar6) - pfVar4[-1];
      *(float *)((int)aiStack_44 + (iVar2 - (int)param_3) + 0xc + (int)pfVar3) =
           *(float *)((param_2 - (int)param_3) + -0x10 + (int)pfVar3) - *pfVar4;
      *pfVar5 = *(float *)((param_2 - (int)(&stack0xffffffd8 + iVar2)) + -0x10 + (int)(pfVar5 + 4))
                - pfVar4[1];
      pfVar5[1] = *(float *)(param_2 + -4 + iVar7 * 4) - pfVar4[2];
      pfVar4 = pfVar3;
      pfVar5 = pfVar5 + 4;
    } while (iVar7 < iVar1 + -3);
  }
  if (iVar7 < iVar1) {
    iVar6 = iVar1 - iVar7;
    pfVar4 = param_3 + iVar7;
    do {
      iVar6 = iVar6 + -1;
      *(float *)((int)pfVar4 + (int)(&stack0xffffffd8 + (iVar2 - (int)param_3))) =
           *(float *)((int)pfVar4 + (param_2 - (int)param_3)) - *pfVar4;
      pfVar4 = pfVar4 + 1;
    } while (iVar6 != 0);
  }
  (&iStack_2c)[-iVar1] = *(undefined4 *)(param_1[1] + 0x80);
  iVar7 = param_1[6];
  (&fStack_30)[-iVar1] = 0.0;
  aiStack_44[4 - iVar1] = (int)param_3;
  aiStack_44[3 - iVar1] = (int)(&stack0xffffffd8 + iVar2);
  aiStack_44[2 - iVar1] = iVar7;
  aiStack_44[1 - iVar1] = iVar1;
  aiStack_44[-iVar1] = 0xc57b83;
  FUN_00c57010(aiStack_44[1 - iVar1],(uint *)aiStack_44[2 - iVar1],(float *)aiStack_44[3 - iVar1],
               aiStack_44[4 - iVar1],(&fStack_30)[-iVar1],(&iStack_2c)[-iVar1]);
  iVar7 = 0;
  if (3 < iVar1) {
    iVar6 = (iVar1 - 4U >> 2) + 1;
    iVar7 = iVar6 * 4;
    pfVar4 = (float *)(&stack0xffffffdc + iVar2);
    pfVar5 = (float *)(param_2 + 0xc);
    do {
      pfVar4[-1] = pfVar5[-3] - pfVar4[-1];
      iVar6 = iVar6 + -1;
      *pfVar4 = *(float *)((param_2 - (int)(&stack0xffffffd8 + iVar2)) + -0x10 + (int)(pfVar4 + 4))
                - *pfVar4;
      pfVar4[1] = pfVar5[-1] - pfVar4[1];
      pfVar4[2] = *pfVar5 - pfVar4[2];
      pfVar4 = pfVar4 + 4;
      pfVar5 = pfVar5 + 4;
    } while (iVar6 != 0);
  }
  if (iVar7 < iVar1) {
    iVar6 = iVar1 - iVar7;
    pfVar4 = (float *)(&stack0xffffffd8 + iVar7 * 4 + iVar2);
    do {
      iVar6 = iVar6 + -1;
      *pfVar4 = *(float *)((param_2 - (int)(&stack0xffffffd8 + iVar2)) + (int)pfVar4) - *pfVar4;
      pfVar4 = pfVar4 + 1;
    } while (iVar6 != 0);
  }
  if (0 < iVar1) {
    pfVar4 = param_3;
    iVar7 = iVar1;
    do {
      (&iStack_2c)[-iVar1] = 0xc57c2d;
      uVar8 = FUN_00acd42c();
      iVar6 = (int)uVar8;
      if (iVar6 < 0x28) {
        if (iVar6 < 0) {
          iVar6 = 0;
        }
      }
      else {
        iVar6 = 0x27;
      }
      iVar7 = iVar7 + -1;
      *pfVar4 = *(float *)(param_1[1] + 0x150 + iVar6 * 4) +
                *(float *)((int)&iStack_2c + (iVar2 - (int)param_3) + (int)(pfVar4 + 1));
      pfVar4 = pfVar4 + 1;
    } while (iVar7 != 0);
  }
  return;
}


//// FUNCTION FUN_00c57c70 @ 00c57c70 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __fastcall
FUN_00c57c70(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,float param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int aiStack_3c [4];
  int aiStack_2c [2];
  
  iVar2 = param_1[10];
  iVar3 = *param_1;
  aiStack_2c[1] = 0xc57c98;
  iVar4 = iVar2 * -4;
  fVar1 = param_5 + *(float *)(param_1[1] + 4);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(&stack0xffffffdc + iVar5 * 4 + iVar4) = 0xc61c3c00;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[10]);
  }
  if (fVar1 < *(float *)(param_1[1] + 8)) {
    fVar1 = *(float *)(param_1[1] + 8);
  }
  iVar5 = 0;
  if (3 < iVar3) {
    iVar7 = (iVar3 - 4U >> 2) + 1;
    iVar5 = iVar7 * 4;
    pfVar6 = (float *)(param_3 + 8);
    iVar8 = 8;
    do {
      pfVar6[-2] = fVar1 + *(float *)((int)pfVar6 + param_1[4] + -param_3 + -8);
      pfVar6[-1] = fVar1 + *(float *)((int)pfVar6 + param_1[4] + -param_3 + -4);
      iVar7 = iVar7 + -1;
      *pfVar6 = fVar1 + *(float *)(iVar8 + param_1[4]);
      pfVar6[1] = fVar1 + *(float *)((int)pfVar6 + param_1[4] + (4 - param_3));
      pfVar6 = pfVar6 + 4;
      iVar8 = iVar8 + 0x10;
    } while (iVar7 != 0);
  }
  while (iVar5 < iVar3) {
    iVar8 = iVar5 * 4;
    iVar5 = iVar5 + 1;
    *(float *)(param_3 + -4 + iVar5 * 4) = fVar1 + *(float *)(param_1[4] + iVar8);
  }
  iVar3 = param_1[2];
  aiStack_2c[1 - iVar2] = param_4;
  aiStack_2c[-iVar2] = (int)(&stack0xffffffdc + iVar4);
  aiStack_3c[3 - iVar2] = param_3;
  aiStack_3c[2 - iVar2] = param_2;
  aiStack_3c[1 - iVar2] = iVar3;
  aiStack_3c[-iVar2] = 0xc57d88;
  FUN_00c56c60(aiStack_3c[1 - iVar2],aiStack_3c[2 - iVar2],aiStack_3c[3 - iVar2]);
  aiStack_2c[1 - iVar2] = param_3;
  aiStack_2c[-iVar2] = (int)(&stack0xffffffdc + iVar4);
  aiStack_3c[3 - iVar2] = 0xc57d92;
  FUN_00c56ec0(aiStack_2c[-iVar2],aiStack_2c[1 - iVar2]);
  return;
}


//// FUNCTION FUN_00c57da0 @ 00c57da0 ////

void __fastcall FUN_00c57da0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  
  fVar1 = *(float *)(param_1[1] + 0xc + param_4 * 4);
  iVar3 = *param_1;
  iVar6 = 0;
  if (3 < iVar3) {
    pfVar4 = (float *)(param_5 + 8);
    pfVar5 = (float *)(param_3 + 4);
    do {
      fVar2 = *(float *)((int)pfVar5 + *(int *)(param_1[3] + param_4 * 4) + (-4 - param_3)) +
              *(float *)(param_2 + iVar6 * 4);
      if (*(float *)(param_1[1] + 0x6c) < fVar2) {
        fVar2 = *(float *)(param_1[1] + 0x6c);
      }
      if (fVar2 <= fVar1 + pfVar5[-1]) {
        fVar2 = fVar1 + pfVar5[-1];
      }
      pfVar4[-2] = fVar2;
      fVar2 = *(float *)((int)pfVar5 + *(int *)(param_1[3] + param_4 * 4) + 4 + (-4 - param_3)) +
              *(float *)((param_2 - param_3) + (int)pfVar5);
      if (*(float *)(param_1[1] + 0x6c) < fVar2) {
        fVar2 = *(float *)(param_1[1] + 0x6c);
      }
      if (fVar2 <= fVar1 + *pfVar5) {
        fVar2 = fVar1 + *pfVar5;
      }
      *(float *)((param_5 - param_3) + (int)pfVar5) = fVar2;
      fVar2 = *(float *)(*(int *)(param_1[3] + param_4 * 4) + (4 - param_3) + (int)pfVar5) +
              *(float *)((param_2 - param_5) + (int)pfVar4);
      if (*(float *)(param_1[1] + 0x6c) < fVar2) {
        fVar2 = *(float *)(param_1[1] + 0x6c);
      }
      if (fVar2 <= fVar1 + pfVar5[1]) {
        fVar2 = fVar1 + pfVar5[1];
      }
      *pfVar4 = fVar2;
      fVar2 = *(float *)(*(int *)(param_1[3] + param_4 * 4) + (8 - param_3) + (int)pfVar5) +
              *(float *)(param_2 + 0xc + iVar6 * 4);
      if (*(float *)(param_1[1] + 0x6c) < fVar2) {
        fVar2 = *(float *)(param_1[1] + 0x6c);
      }
      if (fVar2 <= fVar1 + pfVar5[2]) {
        fVar2 = fVar1 + pfVar5[2];
      }
      pfVar4[1] = fVar2;
      iVar6 = iVar6 + 4;
      pfVar5 = pfVar5 + 4;
      pfVar4 = pfVar4 + 4;
    } while (iVar6 < iVar3 + -3);
  }
  if (iVar6 < iVar3) {
    pfVar4 = (float *)(param_3 + iVar6 * 4);
    do {
      fVar2 = *(float *)(*(int *)(param_1[3] + param_4 * 4) + iVar6 * 4) +
              *(float *)((param_2 - param_3) + (int)pfVar4);
      if (*(float *)(param_1[1] + 0x6c) < fVar2) {
        fVar2 = *(float *)(param_1[1] + 0x6c);
      }
      if (fVar2 <= fVar1 + *pfVar4) {
        fVar2 = fVar1 + *pfVar4;
      }
      *(float *)((param_5 - param_3) + (int)pfVar4) = fVar2;
      iVar6 = iVar6 + 1;
      pfVar4 = pfVar4 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}


//// FUNCTION FUN_00c57fd0 @ 00c57fd0 ////

float10 __thiscall FUN_00c57fd0(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1c);
  fVar2 = ((float10)(*(int *)(iVar1 + *(int *)(param_1 + 0x28) * 4) / 2) /
          (float10)*(int *)(*(int *)(param_1 + 4) + 8)) * (float10)*(float *)(iVar1 + 0xb78) +
          (float10)param_2;
  if (fVar2 < (float10)-9999.0) {
    fVar2 = (float10)-9999.0;
  }
  return fVar2;
}


//// FUNCTION FUN_00c58020 @ 00c58020 ////

void __fastcall FUN_00c58020(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (uint)(ABS(*param_1) < ABS(*param_2)) - (uint)(ABS(*param_2) < ABS(*param_1));
  if (iVar3 == 0) {
    iVar3 = (uint)(ABS(param_4) < ABS(param_3)) * 2 + -1;
  }
  if (iVar3 == 1) {
    if (*param_2 <= 0.0) {
      *param_1 = *param_1 - *param_2;
    }
    else {
      *param_1 = *param_2 - *param_1;
    }
  }
  else {
    fVar1 = *param_1;
    if (*param_1 <= 0.0) {
      fVar2 = *param_1 - *param_2;
    }
    else {
      fVar2 = *param_2 - *param_1;
    }
    *param_1 = fVar2;
    *param_2 = fVar1;
  }
  if (ABS(*param_2) * 1.9999 < *param_1) {
    *param_1 = ABS(*param_2) * -2.0;
    *param_2 = -*param_2;
    return;
  }
  return;
}


//// FUNCTION FUN_00c580f0 @ 00c580f0 ////

void FUN_00c580f0(float param_1,float *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint unaff_ESI;
  uint unaff_EDI;
  
  uVar2 = (int)(unaff_EDI - unaff_ESI) >> 0x1f;
  uVar1 = ((int)unaff_ESI < (int)unaff_EDI) - 1;
  uVar2 = 0x1f - ((unaff_EDI - unaff_ESI ^ uVar2) - uVar2);
  *param_2 = (*(float *)(&DAT_00f7df08 + (((int)uVar2 < 0) - 1 & uVar2) * 4) + 1.0) *
             *(float *)(&DAT_00f7db08 + (~uVar1 & unaff_EDI | uVar1 & unaff_ESI) * 4) * param_1;
  *param_3 = 0;
  return;
}


//// FUNCTION FUN_00c58150 @ 00c58150 ////

float10 FUN_00c58150(float param_1,float param_2)

{
  if (param_1 <= 0.0) {
    if (param_2 < 0.0) {
      return -SQRT((float10)param_2 * (float10)param_2 + (float10)param_1 * (float10)param_1);
    }
    if ((float10)param_2 < -(float10)param_1) {
      return -SQRT((float10)param_1 * (float10)param_1 - (float10)param_2 * (float10)param_2);
    }
    return SQRT((float10)param_2 * (float10)param_2 - (float10)param_1 * (float10)param_1);
  }
  if (0.0 < param_2) {
    return SQRT((float10)param_2 * (float10)param_2 + (float10)param_1 * (float10)param_1);
  }
  if (-param_2 < param_1) {
    return SQRT((float10)param_1 * (float10)param_1 - (float10)param_2 * (float10)param_2);
  }
  return -SQRT((float10)param_2 * (float10)param_2 - (float10)param_1 * (float10)param_1);
}


//// FUNCTION FUN_00c58230 @ 00c58230 ////

float10 FUN_00c58230(float param_1,float param_2)

{
  float10 fVar1;
  
  if (param_1 <= 0.0) {
    if ((param_2 < 0.0) || (param_2 < -param_1)) {
      return -SQRT((float10)param_2 * (float10)param_2 + (float10)param_1 * (float10)param_1);
    }
  }
  else if (param_2 <= 0.0) {
    fVar1 = (float10)param_2 * (float10)param_2 + (float10)param_1 * (float10)param_1;
    if (param_1 <= -param_2) {
      return -SQRT(fVar1);
    }
    goto LAB_00c582bd;
  }
  fVar1 = (float10)param_2 * (float10)param_2 + (float10)param_1 * (float10)param_1;
LAB_00c582bd:
  return SQRT(fVar1);
}


//// FUNCTION FUN_00c582d0 @ 00c582d0 ////

int * __fastcall FUN_00c582d0(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  float *pfVar8;
  int extraout_EDX_00;
  int *piVar9;
  float10 fVar10;
  int local_10;
  
  iVar1 = *param_3;
  piVar5 = (int *)FUN_00c309e0(param_1,*(int *)(param_4 + 0x484) << 2);
  iVar2 = *(int *)(*(int *)param_3[1] * 0x3c + 0xa0 + param_2);
  local_10 = 0;
  if (0 < *(int *)(param_4 + 0x484)) {
    piVar7 = (int *)(param_4 + 0x888);
    piVar9 = piVar5;
    do {
      pfVar3 = *(float **)(param_5 + piVar7[-0x100] * 4);
      iVar4 = *(int *)(param_5 + *piVar7 * 4);
      iVar6 = FUN_00c309e0(param_1,iVar1 << 2);
      *piVar9 = iVar6;
      iVar6 = 0;
      if (0 < iVar2) {
        pfVar8 = pfVar3;
        do {
          fVar10 = FUN_00c58150(*pfVar8,*(float *)((iVar4 - (int)pfVar3) + (int)pfVar8));
          *(float *)(*piVar9 + extraout_ECX * 4) = (float)fVar10;
          iVar6 = extraout_ECX + 1;
          pfVar8 = (float *)(extraout_EDX + 4);
        } while (iVar6 < iVar2);
      }
      if (iVar6 < iVar1) {
        pfVar8 = pfVar3 + iVar6;
        do {
          fVar10 = FUN_00c58230(*pfVar8,*(float *)((int)pfVar8 + (iVar4 - (int)pfVar3)));
          *(float *)(*piVar9 + extraout_ECX_00 * 4) = (float)fVar10;
          pfVar8 = (float *)(extraout_EDX_00 + 4);
        } while (extraout_ECX_00 + 1 < iVar1);
      }
      local_10 = local_10 + 1;
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (local_10 < *(int *)(param_4 + 0x484));
  }
  return piVar5;
}


//// FUNCTION FUN_00c583f0 @ 00c583f0 ////

uint __cdecl FUN_00c583f0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(ABS(*(float *)*param_1) < ABS(*(float *)*param_2));
  if (ABS(*(float *)*param_2) < ABS(*(float *)*param_1)) {
    return uVar1 - 1;
  }
  return uVar1;
}


//// FUNCTION FUN_00c58440 @ 00c58440 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int * __fastcall FUN_00c58440(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t asStack_40 [4];
  undefined4 uStack_30;
  int local_18;
  int *local_c;
  int local_8;
  
  if (*(int *)(param_2[1] + 0x1f8) == 0) {
    return (int *)0x0;
  }
  iVar1 = *param_2;
  uStack_30 = 0xc58475;
  piVar3 = (int *)FUN_00c309e0(param_1,*(int *)(param_3 + 0x484) << 2);
  iVar2 = *(int *)(param_2[1] + 0x200);
  uStack_30 = 0xc58493;
  iVar6 = 0;
  local_c = piVar3;
  if (0 < *(int *)(param_3 + 0x484)) {
    do {
      asStack_40[4 - iVar2] = 0xc584bf;
      iVar4 = FUN_00c309e0(param_1,iVar1 << 2);
      *local_c = iVar4;
      local_18 = 0;
      if (0 < iVar1) {
        local_8 = 0;
        do {
          iVar5 = 0;
          iVar4 = local_8;
          if (0 < iVar2) {
            do {
              *(int *)(&stack0xffffffd4 + iVar2 * -4 + iVar5 * 4) =
                   *(int *)(param_4 + iVar6 * 4) + iVar4;
              iVar5 = iVar5 + 1;
              iVar4 = iVar4 + 4;
            } while (iVar5 < iVar2);
          }
          asStack_40[4 - iVar2] = (size_t)FUN_00c583f0;
          asStack_40[3 - iVar2] = 4;
          asStack_40[2 - iVar2] = iVar2;
          asStack_40[1 - iVar2] = (size_t)(&stack0xffffffd4 + iVar2 * -4);
          asStack_40[-iVar2] = 0xc58501;
          _qsort((void *)asStack_40[1 - iVar2],asStack_40[2 - iVar2],asStack_40[3 - iVar2],
                 (_PtFuncCompare *)asStack_40[4 - iVar2]);
          iVar5 = 0;
          iVar4 = local_8;
          if (0 < iVar2) {
            do {
              *(int *)(iVar4 + *local_c) =
                   *(int *)(&stack0xffffffd4 + iVar5 * 4 + iVar2 * -4) -
                   *(int *)(param_4 + iVar6 * 4) >> 2;
              iVar5 = iVar5 + 1;
              iVar4 = iVar4 + 4;
            } while (iVar5 < iVar2);
          }
          local_8 = local_8 + iVar2 * 4;
          local_18 = local_18 + iVar2;
        } while (local_18 < iVar1);
      }
      iVar6 = iVar6 + 1;
      local_c = local_c + 1;
    } while (iVar6 < *(int *)(param_3 + 0x484));
  }
  return piVar3;
}


//// FUNCTION FUN_00c58590 @ 00c58590 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00c58590(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  size_t asStack_30 [4];
  undefined4 uStack_20;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(param_1[1] + 0x200);
  uStack_20 = 0xc585bc;
  iVar4 = iVar2 * -4;
  iVar3 = *(int *)(param_1[1] + 0x1fc);
  iVar9 = iVar2;
  for (iVar8 = iVar3; iVar8 < iVar1; iVar8 = iVar8 + iVar9) {
    if (iVar1 < iVar8 + iVar9) {
      iVar9 = iVar1 - iVar8;
    }
    iVar5 = 0;
    if (0 < iVar9) {
      iVar6 = param_2 + iVar8 * 4;
      do {
        *(int *)(&stack0xffffffe4 + iVar5 * 4 + iVar4) = iVar6;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar5 < iVar9);
    }
    asStack_30[4 - iVar2] = (size_t)FUN_00c583f0;
    asStack_30[3 - iVar2] = 4;
    asStack_30[2 - iVar2] = iVar9;
    asStack_30[1 - iVar2] = (size_t)(&stack0xffffffe4 + iVar4);
    asStack_30[-iVar2] = 0xc58609;
    _qsort((void *)asStack_30[1 - iVar2],asStack_30[2 - iVar2],asStack_30[3 - iVar2],
           (_PtFuncCompare *)asStack_30[4 - iVar2]);
    iVar5 = 0;
    if (0 < iVar9) {
      piVar7 = (int *)(param_3 + (iVar8 - iVar3) * 4);
      do {
        *piVar7 = *(int *)(&stack0xffffffe4 + iVar5 * 4 + iVar4) - param_2 >> 2;
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar5 < iVar9);
    }
  }
  return;
}


//// FUNCTION FUN_00c58650 @ 00c58650 ////

void __fastcall FUN_00c58650(int *param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_EDI;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 extraout_ST1;
  float local_28;
  float *local_24;
  int *local_20;
  float *local_18;
  int *local_14;
  
  iVar10 = *param_1;
  iVar2 = param_1[1];
  iVar3 = *(int *)(iVar2 + 0x200);
  iVar11 = 0;
  iVar7 = *(int *)(iVar2 + 0x1fc);
  if (iVar10 < *(int *)(iVar2 + 0x1fc)) {
    iVar7 = iVar10;
  }
  if (*(int *)(iVar2 + 500) != 0) {
    if (0 < iVar7) {
      local_24 = param_3;
      local_18 = (float *)iVar7;
      do {
        fVar12 = FUN_00acf400((double)(*(float *)((param_2 - (int)param_3) + (int)local_24) + 0.5),
                              (short)unaff_EDI);
        *local_24 = (float)fVar12;
        local_24 = local_24 + 1;
        local_18 = (float *)((int)local_18 + -1);
        iVar11 = iVar7;
      } while (local_18 != (float *)0x0);
    }
    iVar9 = iVar3 + iVar11;
    if (iVar9 <= iVar10) {
      local_14 = (int *)(param_4 + (iVar11 - iVar7) * 4);
      local_18 = (float *)(param_2 + 8 + iVar11 * 4);
      do {
        fVar12 = (float10)0.0;
        iVar8 = iVar11;
        if (3 < iVar9 - iVar11) {
          iVar4 = ((iVar9 - iVar11) - 4U >> 2) + 1;
          iVar8 = iVar11 + iVar4 * 4;
          pfVar5 = local_18;
          do {
            iVar4 = iVar4 + -1;
            fVar12 = (float10)pfVar5[1] * (float10)pfVar5[1] +
                     (float10)*pfVar5 * (float10)*pfVar5 +
                     (float10)pfVar5[-1] * (float10)pfVar5[-1] +
                     (float10)pfVar5[-2] * (float10)pfVar5[-2] + fVar12;
            pfVar5 = pfVar5 + 4;
          } while (iVar4 != 0);
        }
        for (; iVar8 < iVar9; iVar8 = iVar8 + 1) {
          fVar13 = (float10)*(float *)(param_2 + iVar8 * 4);
          fVar12 = fVar13 * fVar13 + fVar12;
        }
        if (0 < iVar3) {
          local_20 = local_14;
          iVar8 = 0;
          do {
            local_28 = (float)fVar12;
            iVar4 = *local_20;
            fVar1 = *(float *)(param_2 + iVar4 * 4);
            if (fVar1 * fVar1 < 0.25) {
              if (fVar12 < (float10)*(double *)(iVar2 + 0x208)) {
                if (iVar8 < iVar3) {
                  piVar6 = (int *)(param_4 + ((iVar8 - iVar7) + iVar11) * 4);
                  iVar8 = iVar3 - iVar8;
                  do {
                    iVar4 = *piVar6;
                    piVar6 = piVar6 + 1;
                    iVar8 = iVar8 + -1;
                    param_3[iVar4] = 0.0;
                  } while (iVar8 != 0);
                }
                break;
              }
              fVar12 = FUN_00c55640(*(uint *)(param_2 + iVar4 * 4));
              param_3[iVar4] = (float)fVar12;
              fVar12 = extraout_ST1 - (float10)1.0;
            }
            else {
              fVar12 = FUN_00acf400((double)(*(float *)(param_2 + iVar4 * 4) + 0.5),(short)unaff_EDI
                                   );
              param_3[iVar4] = (float)fVar12;
              fVar12 = (float10)*(float *)(param_2 + iVar4 * 4);
              fVar12 = (float10)local_28 - fVar12 * fVar12;
            }
            iVar8 = iVar8 + 1;
            local_20 = local_20 + 1;
          } while (iVar8 < iVar3);
        }
        iVar9 = iVar9 + iVar3;
        iVar11 = iVar11 + iVar3;
        local_18 = local_18 + iVar3;
        local_14 = local_14 + iVar3;
      } while (iVar9 <= iVar10);
    }
  }
  if (iVar11 < iVar10) {
    pfVar5 = param_3 + iVar11;
    iVar10 = iVar10 - iVar11;
    do {
      fVar12 = FUN_00acf400((double)(*(float *)((param_2 - (int)param_3) + (int)pfVar5) + 0.5),
                            (short)unaff_EDI);
      *pfVar5 = (float)fVar12;
      pfVar5 = pfVar5 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}


//// FUNCTION FUN_00c58920 @ 00c58920 ////

void __fastcall
FUN_00c58920(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,int *param_7,
            undefined4 param_8,int param_9,int param_10)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int extraout_ECX;
  int iVar10;
  float *pfVar11;
  int iVar12;
  undefined4 unaff_EDI;
  int *piVar13;
  float10 fVar14;
  float local_74;
  int *local_6c;
  int local_60;
  int local_5c;
  int local_50;
  int local_3c;
  int local_34;
  int local_30;
  
  iVar4 = *param_3;
  local_30 = 0;
  if (0 < *(int *)(param_4 + 0x484)) {
    piVar13 = (int *)(param_4 + 0x888);
    local_6c = param_7;
    iVar9 = iVar4;
    do {
      if ((*(int *)(param_9 + piVar13[-0x100] * 4) != 0) || (*(int *)(param_9 + *piVar13 * 4) != 0))
      {
        iVar5 = *(int *)(piVar13[-0x100] * 4 + param_5);
        iVar6 = *(int *)(*piVar13 * 4 + param_5);
        iVar1 = iVar5 + iVar4 * 4;
        dVar2 = *(double *)(&DAT_00f7dac0 + *(int *)(param_2 + 0xfc + param_1 * 4) * 8);
        dVar3 = *(double *)(&DAT_00f7dac0 + *(int *)(param_2 + 0x138 + param_1 * 4) * 8);
        piVar7 = (int *)param_3[1];
        iVar10 = iVar9;
        if (piVar7[0x7e] != 0) {
          iVar10 = piVar7[0x80];
        }
        iVar8 = *(int *)(param_2 + 0x84 + (*piVar7 * 0xf + param_1) * 4);
        *(undefined4 *)(param_9 + piVar13[-0x100] * 4) = 1;
        *(undefined4 *)(param_9 + *piVar13 * 4) = 1;
        iVar9 = *param_3;
        local_34 = 0;
        if (0 < iVar9) {
          local_50 = 0;
          do {
            local_74 = 0.0;
            if (0 < iVar10) {
              pfVar11 = (float *)(local_50 + iVar6);
              iVar9 = iVar5 - iVar6;
              iVar12 = iVar1 - iVar6;
              local_60 = local_50;
              local_5c = local_34;
              local_3c = iVar10;
              do {
                if (local_5c < param_10) {
                  if ((((iVar8 <= local_5c) &&
                       (ABS(*(float *)(iVar9 + (int)pfVar11)) < (float)dVar3)) &&
                      (ABS(*pfVar11) < (float)dVar3)) ||
                     ((ABS(*(float *)(iVar9 + (int)pfVar11)) < (float)dVar2 &&
                      (ABS(*pfVar11) < (float)dVar2)))) {
                    FUN_00c580f0(*(float *)(*(int *)((int)local_6c + (param_6 - (int)param_7)) +
                                           local_60),(float *)(iVar12 + (int)pfVar11),
                                 pfVar11 + iVar4);
                    fVar14 = FUN_00acf400((double)(*(float *)(iVar12 + (int)pfVar11) + 0.5),
                                          (short)unaff_EDI);
                    if ((float10)0.0 == fVar14) {
                      local_74 = *(float *)(iVar12 + (int)pfVar11) *
                                 *(float *)(iVar12 + (int)pfVar11) + local_74;
                    }
                  }
                  else {
                    FUN_00c58020(pfVar11 + iVar4,(float *)(iVar12 + (int)pfVar11),
                                 *(float *)(iVar9 + (int)pfVar11),*pfVar11);
                  }
                }
                else {
                  *(undefined4 *)(iVar12 + (int)pfVar11) = 0;
                  pfVar11[iVar4] = 0.0;
                }
                local_60 = local_60 + 4;
                pfVar11 = pfVar11 + 1;
                local_5c = local_5c + 1;
                local_3c = local_3c + -1;
              } while (local_3c != 0);
            }
            if ((*(int *)(param_3[1] + 0x1f8) != 0) && (local_3c = 0, iVar9 = local_50, 0 < iVar10))
            {
              do {
                if (local_74 < (float)*(double *)(param_3[1] + 0x208)) break;
                iVar12 = *(int *)(iVar9 + *local_6c);
                if (((iVar12 < param_10) && (iVar8 <= iVar12)) &&
                   (fVar14 = FUN_00acf400((double)(*(float *)(iVar1 + iVar12 * 4) + 0.5),
                                          (short)unaff_EDI), (float10)0.0 == fVar14)) {
                  fVar14 = FUN_00c55640(*(uint *)(iVar1 + iVar12 * 4));
                  *(float *)(extraout_ECX + iVar12 * 4) = (float)fVar14;
                  local_74 = local_74 - 1.0;
                }
                local_3c = local_3c + 1;
                iVar9 = iVar9 + 4;
              } while (local_3c < iVar10);
            }
            local_50 = local_50 + iVar10 * 4;
            iVar9 = *param_3;
            local_34 = local_34 + iVar10;
          } while (local_34 < iVar9);
        }
      }
      local_30 = local_30 + 1;
      piVar13 = piVar13 + 1;
      local_6c = local_6c + 1;
    } while (local_30 < *(int *)(param_4 + 0x484));
  }
  return;
}


//// FUNCTION vorbis__ilog @ 00c58d20 ////

int __fastcall vorbis__ilog(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


//// FUNCTION vorbis__float32_unpack @ 00c58dd0 ////

float10 __fastcall vorbis__float32_unpack(uint param_1)

{
  double dVar1;
  
  dVar1 = (double)(param_1 & 0x1fffff);
  if ((int)param_1 < 0) {
    dVar1 = -dVar1;
  }
  dVar1 = _ldexp(dVar1,((int)param_1 >> 0x15 & 0x3ffU) - 0x314);
  return (float10)dVar1;
}


//// FUNCTION vorbis__make_words @ 00c58e10 ////

uint * __fastcall vorbis__make_words(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *_Memory;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint local_88 [34];
  
  uVar3 = param_3;
  if (param_3 == 0) {
    uVar3 = param_2;
  }
  local_88[0] = param_2;
  _Memory = _malloc(uVar3 << 2);
  puVar6 = local_88;
  iVar5 = 0;
  for (iVar4 = 0x21; puVar6 = puVar6 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
  }
  puVar6 = _Memory;
  if (0 < (int)param_2) {
    do {
      iVar4 = *(int *)(param_1 + iVar5 * 4);
      if (iVar4 < 1) {
        if (param_3 == 0) {
          puVar6 = puVar6 + 1;
        }
      }
      else {
        uVar3 = local_88[iVar4 + 1];
        if ((iVar4 < 0x20) && (uVar3 >> ((byte)iVar4 & 0x1f) != 0)) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        *puVar6 = uVar3;
        puVar6 = puVar6 + 1;
        iVar2 = iVar4;
        do {
          if ((local_88[iVar2 + 1] & 1) != 0) {
            if (iVar2 == 1) {
              local_88[2] = local_88[2] + 1;
            }
            else {
              local_88[iVar2 + 1] = local_88[iVar2] << 1;
            }
            break;
          }
          local_88[iVar2 + 1] = local_88[iVar2 + 1] + 1;
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
        while ((iVar2 = iVar4 + 1, iVar2 < 0x21 &&
               (uVar1 = local_88[iVar4 + 2], uVar1 >> 1 == uVar3))) {
          local_88[iVar4 + 2] = local_88[iVar2] << 1;
          uVar3 = uVar1;
          iVar4 = iVar2;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_2);
  }
  iVar4 = 0;
  puVar6 = _Memory;
  if (0 < (int)param_2) {
    do {
      iVar5 = *(int *)(param_1 + iVar4 * 4);
      uVar3 = 0;
      iVar2 = 0;
      if (0 < iVar5) {
        do {
          uVar3 = uVar3 * 2 | *puVar6 >> ((byte)iVar2 & 0x1f) & 1;
          iVar2 = iVar2 + 1;
          param_2 = local_88[0];
        } while (iVar2 < iVar5);
      }
      if ((param_3 == 0) || (iVar5 != 0)) {
        *puVar6 = uVar3;
        puVar6 = puVar6 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_2);
  }
  return _Memory;
}


//// FUNCTION vorbis__book_maptype1_quantvals @ 00c58f70 ////

void __fastcall vorbis__book_maptype1_quantvals(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DI;
  float10 fVar5;
  ulonglong uVar6;
  
  fVar5 = (float10)FUN_00ace9b0();
  FUN_00acf400((double)fVar5,unaff_DI);
  uVar6 = FUN_00acd42c();
  iVar1 = (int)uVar6;
  while( true ) {
    while( true ) {
      iVar2 = 1;
      iVar3 = 1;
      if (0 < *param_1) {
        iVar4 = *param_1;
        do {
          iVar2 = iVar2 * iVar1;
          iVar3 = iVar3 * (iVar1 + 1);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (iVar2 <= param_1[1]) break;
      iVar1 = iVar1 + -1;
    }
    if (param_1[1] < iVar3) break;
    iVar1 = iVar1 + 1;
  }
  return;
}


//// FUNCTION vorbis__book_unquantize @ 00c58fe0 ////

void * __fastcall vorbis__book_unquantize(int *param_1,int param_2,int param_3)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float local_14;
  float local_8;
  
  iVar6 = 0;
  if ((param_1[3] != 1) && (param_1[3] != 2)) {
    return (void *)0x0;
  }
  fVar8 = vorbis__float32_unpack(param_1[4]);
  fVar9 = vorbis__float32_unpack(param_1[5]);
  pvVar2 = _calloc(*param_1 * param_2,4);
  if (param_1[3] == 1) {
    iVar5 = vorbis__book_maptype1_quantvals(param_1);
    local_14 = 0.0;
    if (0 < param_1[1]) {
      do {
        if ((param_3 == 0) || (*(int *)(param_1[2] + (int)local_14 * 4) != 0)) {
          iVar3 = *param_1;
          iVar7 = 0;
          local_8 = 0.0;
          iVar4 = 1;
          if (0 < iVar3) {
            do {
              fVar1 = ABS((float)*(int *)(param_1[8] + (((int)local_14 / iVar4) % iVar5) * 4)) *
                      (float)fVar9 + local_8 + (float)fVar8;
              if (param_1[7] != 0) {
                local_8 = fVar1;
              }
              if (param_3 == 0) {
                *(float *)((int)pvVar2 + (iVar3 * iVar6 + iVar7) * 4) = fVar1;
              }
              else {
                *(float *)((int)pvVar2 + (*(int *)(param_3 + iVar6 * 4) * iVar3 + iVar7) * 4) =
                     fVar1;
              }
              iVar4 = iVar4 * iVar5;
              iVar3 = *param_1;
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar3);
          }
          iVar6 = iVar6 + 1;
        }
        local_14 = (float)((int)local_14 + 1);
      } while ((int)local_14 < param_1[1]);
    }
  }
  else if ((param_1[3] == 2) && (iVar5 = 0, 0 < param_1[1])) {
    do {
      if ((param_3 == 0) || (*(int *)(param_1[2] + iVar5 * 4) != 0)) {
        iVar3 = *param_1;
        iVar4 = 0;
        local_14 = 0.0;
        if (0 < iVar3) {
          do {
            fVar1 = ABS((float)*(int *)(param_1[8] + (iVar3 * iVar5 + iVar4) * 4)) * (float)fVar9 +
                    local_14 + (float)fVar8;
            if (param_1[7] != 0) {
              local_14 = fVar1;
            }
            if (param_3 == 0) {
              *(float *)((int)pvVar2 + (iVar3 * iVar6 + iVar4) * 4) = fVar1;
            }
            else {
              *(float *)((int)pvVar2 + (*(int *)(param_3 + iVar6 * 4) * iVar3 + iVar4) * 4) = fVar1;
            }
            iVar3 = *param_1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar3);
        }
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[1]);
    return pvVar2;
  }
  return pvVar2;
}


//// FUNCTION vorbis_staticbook_clear @ 00c591a0 ////

void __fastcall vorbis_staticbook_clear(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[0xc] != 0) {
    if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[8]);
    }
    if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[2]);
    }
    if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)param_1[9]);
    }
    if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)param_1[10]);
    }
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


//// FUNCTION vorbis_staticbook_destroy @ 00c59270 ////

void __fastcall vorbis_staticbook_destroy(undefined4 *param_1)

{
  if (param_1[0xc] != 0) {
    vorbis_staticbook_clear(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION vorbis_book_clear @ 00c59290 ////

void __fastcall vorbis_book_clear(undefined4 *param_1)

{
  int iVar1;
  
  if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[5]);
  }
  if ((void *)param_1[6] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[6]);
  }
  if ((void *)param_1[7] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[7]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION vorbis_book_init_encode @ 00c592f0 ////

undefined4 __fastcall vorbis_book_init_encode(int *param_1,int *param_2)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = param_1;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  param_1[3] = (int)param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[1];
  *param_1 = *param_2;
  puVar1 = vorbis__make_words(param_2[2],param_2[1],0);
  param_1[5] = (int)puVar1;
  pvVar2 = vorbis__book_unquantize(param_2,param_2[1],0);
  param_1[4] = (int)pvVar2;
  return 0;
}


//// FUNCTION vorbis_bitreverse @ 00c59340 ////

uint vorbis_bitreverse(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX >> 0x10 | in_EAX << 0x10;
  uVar1 = (uVar1 >> 8 ^ uVar1 << 8) & 0xff00ff ^ uVar1 << 8;
  uVar1 = (uVar1 >> 4 ^ uVar1 << 4) & 0xf0f0f0f ^ uVar1 << 4;
  uVar1 = (uVar1 >> 2 ^ uVar1 * 4) & 0x33333333 ^ uVar1 << 2;
  return (uVar1 >> 1 ^ uVar1 * 2) & 0x55555555 ^ uVar1 * 2;
}


//// FUNCTION vorbis_sort32a @ 00c593b0 ////

int __cdecl vorbis_sort32a(undefined4 *param_1,undefined4 *param_2)

{
  return (uint)(*(uint *)*param_2 < *(uint *)*param_1) -
         (uint)(*(uint *)*param_1 < *(uint *)*param_2);
}


//// FUNCTION vorbis_book_init_decode @ 00c593d0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __fastcall vorbis_book_init_decode(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint auStackY_3c [4];
  uint local_14;
  uint local_10;
  
  puVar8 = param_1;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  iVar6 = param_2[1];
  uVar7 = 0;
  if (0 < iVar6) {
    piVar5 = (int *)param_2[2];
    do {
      if (0 < *piVar5) {
        uVar7 = uVar7 + 1;
      }
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  param_1[1] = param_2[1];
  param_1[2] = uVar7;
  *param_1 = *param_2;
  auStackY_3c[3] = 0xc5941d;
  puVar1 = vorbis__make_words(param_2[2],param_2[1],uVar7);
  iVar6 = uVar7 * -4;
  piVar5 = (int *)(&stack0xffffffd8 + uVar7 * -8);
  if (puVar1 != (uint *)0x0) {
    if (0 < (int)uVar7) {
      puVar9 = puVar1;
      local_10 = uVar7;
      do {
        *(undefined4 *)(&stack0xffffffd4 + iVar6) = 0xc5946d;
        uVar2 = vorbis_bitreverse();
        *puVar9 = uVar2;
        *(uint **)(&stack0xffffffd8 + (iVar6 - (int)puVar1) + (int)puVar9) = puVar9;
        puVar9 = puVar9 + 1;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
    *(code **)(&stack0xffffffd4 + iVar6) = vorbis_sort32a;
    auStackY_3c[3 - uVar7] = 4;
    auStackY_3c[2 - uVar7] = uVar7;
    auStackY_3c[1 - uVar7] = (uint)(&stack0xffffffd8 + iVar6);
    auStackY_3c[-uVar7] = 0xc59495;
    _qsort((void *)auStackY_3c[1 - uVar7],auStackY_3c[2 - uVar7],auStackY_3c[3 - uVar7],
           *(_PtFuncCompare **)(&stack0xffffffd4 + iVar6));
    *(undefined4 *)(&stack0xffffffd4 + iVar6) = 0xc594a5;
    *(uint *)(&stack0xffffffd4 + uVar7 * -8) = uVar7 * 4;
    auStackY_3c[uVar7 * -2 + 3] = 0xc594ae;
    pvVar3 = _malloc(*(size_t *)(&stack0xffffffd4 + uVar7 * -8));
    param_1[5] = pvVar3;
    iVar4 = 0;
    if (0 < (int)uVar7) {
      do {
        *(int *)(&stack0xffffffd8 +
                (*(int *)(&stack0xffffffd8 + iVar4 * 4 + iVar6) - (int)puVar1 >> 2) * 4 + uVar7 * -8
                ) = iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar7);
      if (0 < (int)uVar7) {
        local_14 = uVar7;
        do {
          *(undefined4 *)(param_1[5] + *piVar5 * 4) =
               *(undefined4 *)(((int)puVar1 - (int)(&stack0xffffffd8 + uVar7 * -8)) + (int)piVar5);
          piVar5 = piVar5 + 1;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
    }
    *(uint **)(&stack0xffffffd4 + uVar7 * -8) = puVar1;
                    /* WARNING: Subroutine does not return */
    auStackY_3c[uVar7 * -2 + 3] = (uint)&UNK_00c59513;
    _free(*(void **)(&stack0xffffffd4 + uVar7 * -8));
  }
  *(undefined4 *)(&stack0xffffffd4 + iVar6) = 0xc5944a;
  vorbis_book_clear(param_1);
  return 0xffffffff;
}


//// FUNCTION vorbis__dist @ 00c59750 ////

float10 vorbis__dist(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int unaff_ESI;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float *local_c;
  float *local_8;
  float *local_4;
  
  fVar8 = (float10)0.0;
  iVar7 = 0;
  if (3 < param_1) {
    local_4 = param_3 + unaff_ESI * 3;
    local_8 = param_3 + unaff_ESI * 2;
    local_c = param_3 + unaff_ESI;
    iVar5 = (param_1 - 4U >> 2) + 1;
    iVar7 = iVar5 * 4;
    pfVar4 = (float *)(param_2 + 8);
    pfVar6 = param_3;
    do {
      fVar1 = *pfVar6;
      pfVar6 = pfVar6 + unaff_ESI * 4;
      fVar2 = *local_c;
      fVar3 = *local_8;
      local_c = local_c + unaff_ESI * 4;
      local_8 = local_8 + unaff_ESI * 4;
      fVar8 = ((float10)pfVar4[1] - (float10)*local_4) * ((float10)pfVar4[1] - (float10)*local_4) +
              ((float10)*pfVar4 - (float10)fVar3) * ((float10)*pfVar4 - (float10)fVar3) +
              ((float10)pfVar4[-1] - (float10)fVar2) * ((float10)pfVar4[-1] - (float10)fVar2) +
              ((float10)pfVar4[-2] - (float10)fVar1) * ((float10)pfVar4[-2] - (float10)fVar1) +
              fVar8;
      local_4 = local_4 + unaff_ESI * 4;
      iVar5 = iVar5 + -1;
      pfVar4 = pfVar4 + 4;
    } while (iVar5 != 0);
  }
  if (iVar7 < param_1) {
    pfVar4 = param_3 + iVar7 * unaff_ESI;
    do {
      iVar5 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      fVar9 = (float10)*(float *)(param_2 + iVar5) - (float10)*pfVar4;
      pfVar4 = pfVar4 + unaff_ESI;
      fVar8 = fVar9 * fVar9 + fVar8;
    } while (iVar7 < param_1);
  }
  return fVar8;
}


//// FUNCTION vorbis__best @ 00c59850 ////

int __fastcall vorbis__best(int *param_1,float *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  int local_24;
  float local_20;
  
  iVar8 = param_1[3];
  piVar4 = *(int **)(iVar8 + 0x28);
  iVar1 = *param_1;
  if (piVar4 != (int *)0x0) {
    local_24 = 0;
    if (0 < iVar1) {
      iVar8 = piVar4[3];
      iVar9 = *piVar4;
      iVar5 = iVar8 >> 1;
      pfVar7 = param_2 + (iVar1 + -1) * param_3;
      local_20 = (float)iVar1;
      do {
        if (*(float *)(iVar9 + iVar5 * 4) <= *pfVar7) {
          iVar6 = iVar5 + 1;
          iVar3 = iVar8 + -1;
          if (3 < iVar3 - iVar6) {
            pfVar2 = (float *)(iVar9 + 8 + iVar6 * 4);
            do {
              if (*pfVar7 < pfVar2[-2]) goto LAB_00c599d6;
              if (*pfVar7 < pfVar2[-1]) {
                iVar6 = iVar6 + 1;
                goto LAB_00c599d6;
              }
              if (*pfVar7 < *pfVar2) {
                iVar6 = iVar6 + 2;
                goto LAB_00c599d6;
              }
              if (*pfVar7 < pfVar2[1]) {
                iVar6 = iVar6 + 3;
                goto LAB_00c599d6;
              }
              iVar6 = iVar6 + 4;
              pfVar2 = pfVar2 + 4;
            } while (iVar6 < iVar8 + -4);
          }
          if (iVar6 < iVar3) {
            pfVar2 = (float *)(iVar9 + iVar6 * 4);
            do {
              if (*pfVar7 < *pfVar2) break;
              iVar6 = iVar6 + 1;
              pfVar2 = pfVar2 + 1;
            } while (iVar6 < iVar3);
          }
        }
        else {
          iVar6 = iVar5;
          if (3 < iVar5) {
            pfVar2 = (float *)(iVar9 + -8 + iVar5 * 4);
            do {
              if (pfVar2[1] <= *pfVar7) goto LAB_00c599d6;
              if (*pfVar2 <= *pfVar7) {
                iVar6 = iVar6 + -1;
                goto LAB_00c599d6;
              }
              if (pfVar2[-1] <= *pfVar7) {
                iVar6 = iVar6 + -2;
                goto LAB_00c599d6;
              }
              if (pfVar2[-2] <= *pfVar7) {
                iVar6 = iVar6 + -3;
                goto LAB_00c599d6;
              }
              iVar6 = iVar6 + -4;
              pfVar2 = pfVar2 + -4;
            } while (3 < iVar6);
          }
          if (0 < iVar6) {
            pfVar2 = (float *)(iVar9 + -4 + iVar6 * 4);
            do {
              if (*pfVar2 <= *pfVar7) break;
              iVar6 = iVar6 + -1;
              pfVar2 = pfVar2 + -1;
            } while (0 < iVar6);
          }
        }
LAB_00c599d6:
        pfVar7 = pfVar7 + -param_3;
        local_24 = piVar4[2] * local_24 + *(int *)(piVar4[1] + iVar6 * 4);
        local_20 = (float)((int)local_20 + -1);
      } while (local_20 != 0.0);
    }
    iVar8 = param_1[3];
    if (0 < *(int *)(*(int *)(iVar8 + 8) + local_24 * 4)) {
      return local_24;
    }
  }
  iVar9 = param_1[4];
  iVar5 = param_1[1];
  iVar6 = -1;
  local_20 = 0.0;
  if (0 < iVar5) {
    piVar4 = *(int **)(iVar8 + 8);
    iVar8 = 0;
    do {
      if ((0 < *piVar4) &&
         ((fVar10 = vorbis__dist(iVar1,iVar9,param_2), iVar6 == -1 || (fVar10 < (float10)local_20)))
         ) {
        local_20 = (float)fVar10;
        iVar6 = iVar8;
      }
      iVar9 = iVar9 + iVar1 * 4;
      iVar8 = iVar8 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar8 < iVar5);
  }
  return iVar6;
}


//// FUNCTION vorbis_staticbook_pack @ 00c59ae0 ////

undefined4 __fastcall vorbis_staticbook_pack(uint *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  oggpack_write(param_2,0x564342,0x18);
  oggpack_write(param_2,*param_1,0x10);
  oggpack_write(param_2,param_1[1],0x18);
  uVar4 = param_1[1];
  uVar1 = 1;
  if (1 < (int)uVar4) {
    piVar3 = (int *)param_1[2];
    do {
      if ((*piVar3 == 0) ||
         (*(int *)(param_1[2] + uVar1 * 4) < *(int *)((param_1[2] - 4) + uVar1 * 4))) break;
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar1 < (int)uVar4);
  }
  if (uVar1 == uVar4) {
    iVar6 = 0;
    oggpack_write(param_2,1,1);
    oggpack_write(param_2,*(int *)param_1[2] - 1,5);
    iVar5 = 1;
    if (1 < (int)param_1[1]) {
      do {
        local_4 = *(int *)(param_1[2] + iVar5 * 4);
        iVar2 = *(int *)(param_1[2] + iVar5 * 4 + -4);
        if (iVar2 < local_4) {
          local_4 = local_4 - iVar2;
          do {
            iVar2 = vorbis__ilog(param_1[1] - iVar6);
            oggpack_write(param_2,iVar5 - iVar6,iVar2);
            local_4 = local_4 + -1;
            iVar6 = iVar5;
          } while (local_4 != 0);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_1[1]);
    }
    iVar2 = vorbis__ilog(param_1[1] - iVar6);
    oggpack_write(param_2,iVar5 - iVar6,iVar2);
  }
  else {
    oggpack_write(param_2,0,1);
    uVar4 = param_1[1];
    uVar1 = 0;
    if (0 < (int)uVar4) {
      piVar3 = (int *)param_1[2];
      do {
        if (*piVar3 == 0) break;
        uVar1 = uVar1 + 1;
        piVar3 = piVar3 + 1;
      } while ((int)uVar1 < (int)uVar4);
    }
    if (uVar1 == uVar4) {
      oggpack_write(param_2,0,1);
      iVar6 = 0;
      if (0 < (int)param_1[1]) {
        do {
          oggpack_write(param_2,*(int *)(param_1[2] + iVar6 * 4) - 1,5);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_1[1]);
      }
    }
    else {
      oggpack_write(param_2,1,1);
      iVar6 = 0;
      if (0 < (int)param_1[1]) {
        do {
          iVar5 = 1;
          if (*(int *)(param_1[2] + iVar6 * 4) == 0) {
            uVar4 = 0;
          }
          else {
            oggpack_write(param_2,1,1);
            iVar5 = 5;
            uVar4 = *(int *)(param_1[2] + iVar6 * 4) - 1;
          }
          oggpack_write(param_2,uVar4,iVar5);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_1[1]);
      }
    }
  }
  oggpack_write(param_2,param_1[3],4);
  uVar4 = param_1[3];
  if (uVar4 != 0) {
    if ((((int)uVar4 < 1) || (2 < (int)uVar4)) || (param_1[8] == 0)) {
      return 0xffffffff;
    }
    oggpack_write(param_2,param_1[4],0x20);
    oggpack_write(param_2,param_1[5],0x20);
    oggpack_write(param_2,param_1[6] - 1,4);
    oggpack_write(param_2,param_1[7],1);
    if (param_1[3] == 1) {
      iVar6 = vorbis__book_maptype1_quantvals((int *)param_1);
    }
    else if (param_1[3] == 2) {
      iVar6 = param_1[1] * *param_1;
    }
    else {
      iVar6 = -1;
    }
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        uVar4 = *(uint *)(param_1[8] + iVar5 * 4);
        uVar1 = (int)uVar4 >> 0x1f;
        oggpack_write(param_2,(uVar4 ^ uVar1) - uVar1,param_1[6]);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
    }
  }
  return 0;
}


//// FUNCTION vorbis_staticbook_unpack @ 00c59d20 ////

undefined4 __fastcall vorbis_staticbook_unpack(int *param_1,uint *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  puVar7 = param_2;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  param_2[0xc] = 1;
  puVar1 = (undefined1 *)oggpack_read(param_1,0x18);
  if (puVar1 == &LAB_00564342) {
    uVar2 = oggpack_read(param_1,0x10);
    *param_2 = uVar2;
    uVar2 = oggpack_read(param_1,0x18);
    param_2[1] = uVar2;
    if (uVar2 != 0xffffffff) {
      uVar2 = oggpack_read(param_1,1);
      if (uVar2 == 0) {
        pvVar3 = _malloc(param_2[1] << 2);
        param_2[2] = (uint)pvVar3;
        uVar2 = oggpack_read(param_1,1);
        iVar6 = 0;
        if (uVar2 == 0) {
          if (0 < (int)param_2[1]) {
            do {
              uVar2 = oggpack_read(param_1,5);
              if (uVar2 == 0xffffffff) goto LAB_00c59f67;
              *(uint *)(param_2[2] + iVar6 * 4) = uVar2 + 1;
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)param_2[1]);
          }
        }
        else if (0 < (int)param_2[1]) {
          do {
            uVar2 = oggpack_read(param_1,1);
            if (uVar2 == 0) {
              *(undefined4 *)(param_2[2] + iVar6 * 4) = 0;
            }
            else {
              uVar2 = oggpack_read(param_1,5);
              if (uVar2 == 0xffffffff) goto LAB_00c59f67;
              *(uint *)(param_2[2] + iVar6 * 4) = uVar2 + 1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)param_2[1]);
        }
      }
      else {
        if (uVar2 != 1) {
          return 0xffffffff;
        }
        uVar2 = oggpack_read(param_1,5);
        pvVar3 = _malloc(param_2[1] << 2);
        param_2[2] = (uint)pvVar3;
        if (0 < (int)param_2[1]) {
          iVar6 = 0;
          do {
            uVar2 = uVar2 + 1;
            iVar4 = vorbis__ilog(param_2[1] - iVar6);
            uVar5 = oggpack_read(param_1,iVar4);
            if (uVar5 == 0xffffffff) goto LAB_00c59f67;
            iVar4 = 0;
            if (0 < (int)uVar5) {
              do {
                if ((int)param_2[1] <= iVar6) break;
                iVar4 = iVar4 + 1;
                *(uint *)(param_2[2] + iVar6 * 4) = uVar2;
                iVar6 = iVar6 + 1;
              } while (iVar4 < (int)uVar5);
            }
          } while (iVar6 < (int)param_2[1]);
        }
      }
      uVar2 = oggpack_read(param_1,4);
      param_2[3] = uVar2;
      if (uVar2 == 0) {
        return 0;
      }
      if ((0 < (int)uVar2) && ((int)uVar2 < 3)) {
        uVar2 = oggpack_read(param_1,0x20);
        param_2[4] = uVar2;
        uVar2 = oggpack_read(param_1,0x20);
        param_2[5] = uVar2;
        uVar2 = oggpack_read(param_1,4);
        param_2[6] = uVar2 + 1;
        uVar2 = oggpack_read(param_1,1);
        param_2[7] = uVar2;
        iVar6 = 0;
        if (param_2[3] == 1) {
          iVar6 = vorbis__book_maptype1_quantvals((int *)param_2);
        }
        else if (param_2[3] == 2) {
          iVar6 = *param_2 * param_2[1];
        }
        pvVar3 = _malloc(iVar6 * 4);
        iVar4 = 0;
        param_2[8] = (uint)pvVar3;
        if (0 < iVar6) {
          do {
            uVar2 = oggpack_read(param_1,param_2[6]);
            *(uint *)(param_2[8] + iVar4 * 4) = uVar2;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar6);
        }
        if (iVar6 == 0) {
          return 0;
        }
        if (*(int *)((param_2[8] - 4) + iVar6 * 4) != -1) {
          return 0;
        }
      }
    }
  }
LAB_00c59f67:
  vorbis_staticbook_clear(param_2);
  return 0xffffffff;
}


//// FUNCTION vorbis_book_encode @ 00c59f80 ////

undefined4 __fastcall vorbis_book_encode(int param_1,int param_2,int *param_3)

{
  oggpack_write(param_3,*(uint *)(*(int *)(param_1 + 0x14) + param_2 * 4),
               *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 8) + param_2 * 4));
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 8) + param_2 * 4);
}


//// FUNCTION vorbis_book_errorv @ 00c59fb0 ////

void __fastcall vorbis_book_errorv(int *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *param_1;
  iVar2 = vorbis__best(param_1,param_2,1);
  iVar6 = 0;
  if (3 < iVar1) {
    pfVar4 = param_2 + 2;
    iVar3 = iVar2 * iVar1 * 4;
    iVar5 = (iVar1 - 4U >> 2) + 1;
    iVar6 = iVar5 * 4;
    do {
      pfVar4[-2] = *(float *)(iVar3 + param_1[4]);
      pfVar4[-1] = *(float *)(param_1[4] + 4 + iVar3);
      *pfVar4 = *(float *)(param_1[4] + 8 + iVar3);
      pfVar4[1] = *(float *)(param_1[4] + 0xc + iVar3);
      iVar3 = iVar3 + 0x10;
      pfVar4 = pfVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (iVar6 < iVar1) {
    iVar2 = (iVar2 * iVar1 + iVar6) * 4;
    do {
      param_2[iVar6] = *(float *)(iVar2 + param_1[4]);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar6 < iVar1);
  }
  return;
}


//// FUNCTION vorbis_bitreverse_codebook @ 00c5a0f0 ////

uint vorbis_bitreverse_codebook(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX >> 0x10 | in_EAX << 0x10;
  uVar1 = (uVar1 >> 8 ^ uVar1 << 8) & 0xff00ff ^ uVar1 << 8;
  uVar1 = (uVar1 >> 4 ^ uVar1 << 4) & 0xf0f0f0f ^ uVar1 << 4;
  uVar1 = (uVar1 >> 2 ^ uVar1 * 4) & 0x33333333 ^ uVar1 << 2;
  return (uVar1 >> 1 ^ uVar1 * 2) & 0x55555555 ^ uVar1 * 2;
}


//// FUNCTION vorbis_decode_packed_entry_number @ 00c5a160 ////

uint vorbis_decode_packed_entry_number(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x28);
  uVar2 = oggpack_look(param_2,*(int *)(param_1 + 0x24));
  if ((int)uVar2 < 0) {
    iVar7 = *(int *)(param_1 + 8);
    uVar2 = 0;
  }
  else {
    uVar3 = *(uint *)(*(int *)(param_1 + 0x20) + uVar2 * 4);
    if (-1 < (int)uVar3) {
      oggpack_adv(param_2,(int)*(char *)(*(int *)(param_1 + 0x1c) + -1 + uVar3));
      return uVar3 - 1;
    }
    uVar2 = (int)uVar3 >> 0xf & 0x7fff;
    iVar7 = *(int *)(param_1 + 8) - (uVar3 & 0x7fff);
  }
  uVar3 = oggpack_look(param_2,iVar6);
  do {
    if (-1 < (int)uVar3) {
LAB_00c5a1f5:
      uVar3 = vorbis_bitreverse_codebook();
      iVar4 = iVar7 - uVar2;
      if (1 < iVar4) {
        do {
          uVar5 = iVar4 >> 1;
          uVar1 = (uint)(uVar3 < *(uint *)(*(int *)(param_1 + 0x14) + (uVar5 + uVar2) * 4));
          iVar7 = iVar7 - (-uVar1 & uVar5);
          uVar2 = uVar2 + (uVar1 - 1 & uVar5);
          iVar4 = iVar7 - uVar2;
        } while (1 < iVar4);
      }
      iVar7 = (int)*(char *)(*(int *)(param_1 + 0x1c) + uVar2);
      if (iVar6 < iVar7) {
        oggpack_adv(param_2,iVar6);
        return 0xffffffff;
      }
      oggpack_adv(param_2,iVar7);
      return uVar2;
    }
    if (iVar6 < 2) {
      if ((int)uVar3 < 0) {
        return 0xffffffff;
      }
      goto LAB_00c5a1f5;
    }
    iVar6 = iVar6 + -1;
    uVar3 = oggpack_look(param_2,iVar6);
  } while( true );
}


//// FUNCTION vorbis_book_decode @ 00c5a270 ////

uint __fastcall vorbis_book_decode(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = vorbis_decode_packed_entry_number(param_1,param_2);
  if (-1 < (int)uVar1) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x18) + uVar1 * 4);
  }
  return uVar1;
}


//// FUNCTION vorbis_book_decodevs_add @ 00c5a290 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __fastcall vorbis_book_decodevs_add(int *param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int aiStack_30 [3];
  float *local_8;
  
  iVar1 = param_4 / *param_1;
  aiStack_30[2] = 0xc5a2c0;
  piVar4 = (int *)(&stack0xffffffdc + iVar1 * -8);
  aiStack_30[2 - iVar1] = 0xc5a2d0;
  param_4 = 0;
  if (0 < iVar1) {
    do {
      aiStack_30[iVar1 * -2 + 2] = param_3;
      aiStack_30[iVar1 * -2 + 1] = (int)param_1;
      aiStack_30[iVar1 * -2] = 0xc5a2f2;
      uVar2 = vorbis_decode_packed_entry_number(aiStack_30[iVar1 * -2 + 1],(int *)aiStack_30[iVar1 * -2 + 2]);
      piVar4[iVar1] = uVar2;
      if (uVar2 == 0xffffffff) {
        return 0xffffffff;
      }
      param_4 = param_4 + 1;
      *piVar4 = param_1[4] + *param_1 * uVar2 * 4;
      piVar4 = piVar4 + 1;
    } while (param_4 < iVar1);
  }
  iVar5 = 0;
  param_4 = 0;
  param_3 = 0;
  local_8 = param_2;
  if (0 < *param_1) {
    do {
      iVar6 = 0;
      if (3 < iVar1) {
        iVar7 = (iVar1 - 4U >> 2) + 1;
        iVar6 = iVar7 * 4;
        pfVar3 = local_8;
        piVar4 = (int *)(&stack0xffffffe4 + iVar1 * -8);
        do {
          iVar7 = iVar7 + -1;
          *pfVar3 = *(float *)(piVar4[-2] + iVar5) + *pfVar3;
          pfVar3[1] = *(float *)(piVar4[-1] + iVar5) + pfVar3[1];
          pfVar3[2] = *(float *)(*piVar4 + iVar5) + pfVar3[2];
          pfVar3[3] = *(float *)(piVar4[1] + iVar5) + pfVar3[3];
          pfVar3 = pfVar3 + 4;
          piVar4 = piVar4 + 4;
        } while (iVar7 != 0);
      }
      if (iVar6 < iVar1) {
        pfVar3 = param_2 + iVar6 + param_3;
        do {
          iVar7 = iVar6 * 4;
          iVar6 = iVar6 + 1;
          *pfVar3 = *(float *)(*(int *)(&stack0xffffffdc + iVar7 + iVar1 * -8) + iVar5) + *pfVar3;
          pfVar3 = pfVar3 + 1;
        } while (iVar6 < iVar1);
      }
      param_3 = param_3 + iVar1;
      local_8 = local_8 + iVar1;
      param_4 = param_4 + 1;
      iVar5 = iVar5 + 4;
    } while (param_4 < *param_1);
  }
  return 0;
}


//// FUNCTION vorbis_book_decodev_set @ 00c5a540 ////

undefined4 __fastcall vorbis_book_decodev_set(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < param_4) {
    do {
      uVar3 = vorbis_decode_packed_entry_number((int)param_1,param_3);
      if (uVar3 == 0xffffffff) {
        return 0xffffffff;
      }
      iVar1 = *param_1;
      iVar2 = param_1[4];
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          *(undefined4 *)(param_2 + iVar5 * 4) =
               *(undefined4 *)(iVar2 + iVar1 * uVar3 * 4 + iVar4 * 4);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *param_1);
      }
    } while (iVar5 < param_4);
  }
  return 0;
}


//// FUNCTION vorbis_book_decodevv_add @ 00c5a5a0 ////

undefined4 __fastcall
vorbis_book_decodevv_add(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = param_3 / param_4;
  iVar7 = 0;
  while( true ) {
    if ((param_6 + param_3) / param_4 <= iVar4) {
      return 0;
    }
    uVar5 = vorbis_decode_packed_entry_number((int)param_1,param_5);
    if (uVar5 == 0xffffffff) break;
    iVar1 = *param_1;
    iVar2 = param_1[4];
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *(int *)(param_2 + iVar7 * 4);
        iVar7 = iVar7 + 1;
        *(float *)(iVar3 + iVar4 * 4) =
             *(float *)(iVar2 + iVar1 * uVar5 * 4 + iVar6 * 4) + *(float *)(iVar3 + iVar4 * 4);
        if (iVar7 == param_4) {
          iVar7 = 0;
          iVar4 = iVar4 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *param_1);
    }
  }
  return 0xffffffff;
}


//// FUNCTION vorbis_drfti1 @ 00c5a640 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vorbis_drfti1(int param_1,int param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  int *piVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  int *local_14;
  int local_10;
  int local_c;
  
  local_14 = param_3;
  puVar9 = (undefined *)0x0;
  iVar11 = 0;
  ppuVar7 = &PTR_PTR_00f7df9c;
  iVar2 = param_1;
  do {
    do {
      ppuVar7 = ppuVar7 + 1;
      if ((int)ppuVar7 < 0xf7dfb0) {
        puVar9 = *ppuVar7;
      }
      else {
        puVar9 = puVar9 + 2;
      }
    } while (iVar2 != (iVar2 / (int)puVar9) * (int)puVar9);
    iVar5 = iVar2 / (int)puVar9;
    piVar8 = param_3 + iVar11;
    local_c = iVar11;
    do {
      iVar2 = iVar5;
      iVar11 = local_c + 1;
      piVar8[2] = (int)puVar9;
      if ((puVar9 == (undefined *)0x2) && (iVar11 != 1)) {
        piVar3 = piVar8 + 1;
        iVar5 = local_c;
        if (1 < iVar11) {
          do {
            piVar3[1] = *piVar3;
            iVar5 = iVar5 + -1;
            piVar3 = piVar3 + -1;
          } while (iVar5 != 0);
        }
        param_3[2] = 2;
      }
      if (iVar2 == 1) {
        param_3[1] = iVar11;
        fVar1 = _DAT_00f7dfb0 / (float)param_1;
        *param_3 = param_1;
        param_3 = (int *)0x0;
        if ((local_c != 0) && (0 < local_c)) {
          local_14 = local_14 + 2;
          iVar2 = 1;
          do {
            iVar10 = *local_14 * iVar2;
            iVar5 = 0;
            iVar11 = param_1 / iVar10;
            local_10 = *local_14 + -1;
            if (0 < local_10) {
              pfVar12 = (float *)(param_2 + (int)param_3 * 4);
              param_3 = (int *)((int)param_3 + local_10 * iVar11);
              do {
                iVar5 = iVar5 + iVar2;
                fVar13 = (float10)0.0;
                if (2 < iVar11) {
                  iVar6 = (iVar11 - 3U >> 1) + 1;
                  pfVar4 = pfVar12;
                  do {
                    fVar13 = fVar13 + (float10)1.0;
                    iVar6 = iVar6 + -1;
                    fVar14 = (float10)((float)iVar5 * fVar1) * fVar13;
                    fVar15 = (float10)fcos(fVar14);
                    *pfVar4 = (float)fVar15;
                    fVar14 = (float10)fsin(fVar14);
                    pfVar4[1] = (float)fVar14;
                    pfVar4 = pfVar4 + 2;
                  } while (iVar6 != 0);
                }
                pfVar12 = pfVar12 + iVar11;
                local_10 = local_10 + -1;
              } while (local_10 != 0);
            }
            local_14 = local_14 + 1;
            local_c = local_c + -1;
            iVar2 = iVar10;
          } while (local_c != 0);
        }
        return;
      }
      iVar5 = iVar2 / (int)puVar9;
      piVar8 = piVar8 + 1;
      local_c = iVar11;
    } while (iVar2 == (iVar2 / (int)puVar9) * (int)puVar9);
  } while( true );
}


//// FUNCTION vorbis_fdrffti @ 00c5a7f0 ////

void __fastcall vorbis_fdrffti(int *param_1,int param_2)

{
  int in_EAX;
  
  if (in_EAX != 1) {
    vorbis_drfti1(in_EAX,param_2 + in_EAX * 4,param_1);
  }
  return;
}


//// FUNCTION vorbis_dradf2 @ 00c5a810 ////

void __fastcall vorbis_dradf2(uint param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float *in_EAX;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  float *local_10;
  int local_c;
  int local_8;
  
  iVar11 = param_1 * param_3;
  iVar4 = 0;
  local_24 = (float *)0x0;
  iVar6 = iVar11;
  if (3 < param_3) {
    local_10 = (float *)((param_3 - 4U >> 2) + 1);
    local_24 = (float *)((int)local_10 * 4);
    pfVar7 = param_2 + param_1 * 2 + -1;
    do {
      param_2[iVar4 * 2] = in_EAX[iVar6] + in_EAX[iVar4];
      iVar5 = iVar4 + param_1;
      iVar12 = iVar6 + param_1;
      *pfVar7 = in_EAX[iVar4] - in_EAX[iVar6];
      pfVar7 = pfVar7 + param_1 * 2;
      param_2[iVar5 * 2] = in_EAX[iVar12] + in_EAX[iVar5];
      iVar6 = iVar5 + param_1;
      iVar4 = iVar12 + param_1;
      *pfVar7 = in_EAX[iVar5] - in_EAX[iVar12];
      pfVar7 = pfVar7 + param_1 * 2;
      param_2[iVar6 * 2] = in_EAX[iVar4] + in_EAX[iVar6];
      iVar5 = iVar6 + param_1;
      iVar12 = iVar4 + param_1;
      *pfVar7 = in_EAX[iVar6] - in_EAX[iVar4];
      param_2[iVar5 * 2] = in_EAX[iVar12] + in_EAX[iVar5];
      iVar4 = iVar5 + param_1;
      iVar6 = iVar12 + param_1;
      pfVar7[param_1 * 2] = in_EAX[iVar5] - in_EAX[iVar12];
      pfVar7 = pfVar7 + param_1 * 2 + param_1 * 2;
      local_10 = (float *)((int)local_10 + -1);
    } while (local_10 != (float *)0x0);
  }
  if ((int)local_24 < param_3) {
    local_10 = param_2 + iVar4 * 2;
    pfVar7 = in_EAX + iVar4;
    local_20 = param_2 + param_1 * 2 + iVar4 * 2 + -1;
    pfVar10 = in_EAX + iVar6;
    iVar6 = param_3 - (int)local_24;
    do {
      *local_10 = *pfVar7 + *pfVar10;
      *local_20 = *pfVar7 - *pfVar10;
      local_10 = local_10 + param_1 * 2;
      pfVar7 = pfVar7 + param_1;
      local_20 = local_20 + param_1 * 2;
      pfVar10 = pfVar10 + param_1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (1 < (int)param_1) {
    if (param_1 != 2) {
      if (0 < param_3) {
        local_14 = in_EAX + iVar11;
        local_1c = param_2 + param_1 * 2;
        local_8 = param_3;
        local_18 = in_EAX;
        local_10 = param_2;
        do {
          if (2 < (int)param_1) {
            local_24 = local_1c;
            local_c = (param_1 - 3 >> 1) + 1;
            local_20 = local_10;
            pfVar7 = local_14;
            pfVar10 = (float *)(param_4 + 4);
            pfVar3 = local_18;
            do {
              pfVar8 = pfVar7 + 2;
              pfVar13 = pfVar3 + 2;
              fVar1 = *pfVar10 * *pfVar8 + pfVar10[-1] * pfVar7[1];
              fVar2 = pfVar10[-1] * *pfVar8 - *pfVar10 * pfVar7[1];
              local_20[2] = fVar2 + *pfVar13;
              local_24[-2] = fVar2 - *pfVar13;
              local_20[1] = fVar1 + pfVar3[1];
              local_24[-3] = pfVar3[1] - fVar1;
              local_c = local_c + -1;
              pfVar7 = pfVar8;
              pfVar10 = pfVar10 + 2;
              pfVar3 = pfVar13;
              local_24 = local_24 + -2;
              local_20 = local_20 + 2;
            } while (local_c != 0);
          }
          local_1c = local_1c + param_1 * 2;
          local_18 = local_18 + param_1;
          local_14 = local_14 + param_1;
          local_10 = local_10 + param_1 * 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      uVar9 = param_1 & 0x80000001;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
      }
      if (uVar9 == 1) {
        return;
      }
    }
    iVar6 = param_1 - 1;
    iVar11 = iVar6 + iVar11;
    local_24 = (float *)0x0;
    uVar9 = param_1;
    if (3 < param_3) {
      param_4 = (param_3 - 4U >> 2) + 1;
      local_24 = (float *)(param_4 * 4);
      do {
        param_2[uVar9] = -in_EAX[iVar11];
        param_2[uVar9 - 1] = in_EAX[iVar6];
        iVar4 = uVar9 + param_1 * 2;
        param_2[iVar4] = -in_EAX[iVar11 + param_1];
        param_2[iVar4 + -1] = in_EAX[iVar6 + param_1];
        iVar11 = iVar11 + param_1 + param_1;
        iVar4 = iVar4 + param_1 * 2;
        param_2[iVar4] = -in_EAX[iVar11];
        iVar6 = iVar6 + param_1 + param_1;
        param_2[iVar4 + -1] = in_EAX[iVar6];
        iVar11 = iVar11 + param_1;
        iVar4 = iVar4 + param_1 * 2;
        iVar6 = iVar6 + param_1;
        param_2[iVar4] = -in_EAX[iVar11];
        param_2[iVar4 + -1] = in_EAX[iVar6];
        uVar9 = iVar4 + param_1 * 2;
        iVar11 = iVar11 + param_1;
        iVar6 = iVar6 + param_1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    if ((int)local_24 < param_3) {
      pfVar7 = param_2 + uVar9;
      pfVar10 = in_EAX + iVar6;
      pfVar3 = in_EAX + iVar11;
      iVar6 = param_3 - (int)local_24;
      do {
        fVar1 = *pfVar3;
        pfVar3 = pfVar3 + param_1;
        *pfVar7 = -fVar1;
        pfVar7[-1] = *pfVar10;
        pfVar7 = pfVar7 + param_1 * 2;
        pfVar10 = pfVar10 + param_1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}


//// FUNCTION vorbis_dradf4 @ 00c5ab60 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
vorbis_dradf4(uint param_1,float *param_2,int param_3,float *param_4,float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int in_EAX;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  float *local_60;
  float *local_5c;
  float *local_58;
  float *local_54;
  float *local_4c;
  float *local_48;
  float *local_44;
  float *local_40;
  float *local_3c;
  int local_38;
  float *local_34;
  int local_10;
  int local_c;
  int local_8;
  
  iVar12 = param_1 * param_3;
  local_5c = (float *)(iVar12 * 2);
  iVar19 = 0;
  local_60 = (float *)(iVar12 * 3);
  local_54 = (float *)0x0;
  iVar16 = iVar12;
  if (3 < param_3) {
    local_34 = (float *)((param_3 - 4U >> 2) + 1);
    local_54 = (float *)((int)local_34 * 4);
    do {
      fVar1 = *(float *)(in_EAX + (int)local_60 * 4) + *(float *)(in_EAX + iVar16 * 4);
      fVar2 = *(float *)(in_EAX + iVar19 * 4) + *(float *)(in_EAX + (int)local_5c * 4);
      param_2[iVar19 * 4] = fVar2 + fVar1;
      param_2[iVar19 * 4 + param_1 * 4 + -1] = fVar2 - fVar1;
      iVar13 = iVar19 * 4 + param_1 * 2;
      iVar20 = iVar19 + param_1;
      param_2[iVar13 + -1] =
           *(float *)(in_EAX + iVar19 * 4) - *(float *)(in_EAX + (int)local_5c * 4);
      iVar15 = (int)local_60 + param_1;
      iVar21 = iVar16 + param_1;
      param_2[iVar13] = *(float *)(in_EAX + (int)local_60 * 4) - *(float *)(in_EAX + iVar16 * 4);
      iVar13 = (int)local_5c + param_1;
      fVar1 = *(float *)(in_EAX + iVar15 * 4) + *(float *)(in_EAX + iVar21 * 4);
      fVar2 = *(float *)(in_EAX + iVar20 * 4) + *(float *)(in_EAX + iVar13 * 4);
      param_2[iVar20 * 4] = fVar2 + fVar1;
      param_2[iVar20 * 4 + param_1 * 4 + -1] = fVar2 - fVar1;
      iVar17 = param_1 * 2;
      iVar16 = iVar20 * 4 + iVar17;
      iVar19 = iVar20 + param_1;
      param_2[iVar16 + -1] = *(float *)(in_EAX + iVar20 * 4) - *(float *)(in_EAX + iVar13 * 4);
      iVar22 = iVar21 + param_1;
      param_2[iVar16] = *(float *)(in_EAX + iVar15 * 4) - *(float *)(in_EAX + iVar21 * 4);
      iVar15 = iVar15 + param_1;
      iVar13 = iVar13 + param_1;
      fVar1 = *(float *)(in_EAX + iVar15 * 4) + *(float *)(in_EAX + iVar22 * 4);
      fVar2 = *(float *)(in_EAX + iVar19 * 4) + *(float *)(in_EAX + iVar13 * 4);
      param_2[iVar19 * 4] = fVar2 + fVar1;
      param_2[iVar19 * 4 + param_1 * 4 + -1] = fVar2 - fVar1;
      iVar16 = iVar19 * 4 + iVar17;
      iVar20 = iVar19 + param_1;
      param_2[iVar16 + -1] = *(float *)(in_EAX + iVar19 * 4) - *(float *)(in_EAX + iVar13 * 4);
      iVar21 = iVar22 + param_1;
      param_2[iVar16] = *(float *)(in_EAX + iVar15 * 4) - *(float *)(in_EAX + iVar22 * 4);
      iVar15 = iVar15 + param_1;
      iVar13 = iVar13 + param_1;
      fVar1 = *(float *)(in_EAX + iVar15 * 4) + *(float *)(in_EAX + iVar21 * 4);
      fVar2 = *(float *)(in_EAX + iVar20 * 4) + *(float *)(in_EAX + iVar13 * 4);
      param_2[iVar20 * 4] = fVar2 + fVar1;
      param_2[iVar20 * 4 + param_1 * 4 + -1] = fVar2 - fVar1;
      iVar17 = iVar20 * 4 + iVar17;
      iVar19 = iVar20 + param_1;
      param_2[iVar17 + -1] = *(float *)(in_EAX + iVar20 * 4) - *(float *)(in_EAX + iVar13 * 4);
      local_60 = (float *)(iVar15 + param_1);
      iVar16 = iVar21 + param_1;
      param_2[iVar17] = *(float *)(in_EAX + iVar15 * 4) - *(float *)(in_EAX + iVar21 * 4);
      local_5c = (float *)(iVar13 + param_1);
      local_34 = (float *)((int)local_34 + -1);
    } while (local_34 != (float *)0x0);
  }
  if ((int)local_54 < param_3) {
    local_58 = (float *)(in_EAX + (int)local_60 * 4);
    local_5c = (float *)(in_EAX + (int)local_5c * 4);
    local_38 = param_3 - (int)local_54;
    pfVar14 = (float *)(in_EAX + iVar16 * 4);
    do {
      fVar1 = *pfVar14;
      fVar2 = *local_58;
      fVar3 = *(float *)(in_EAX + iVar19 * 4) + *local_5c;
      param_2[iVar19 * 4] = fVar3 + fVar1 + fVar2;
      param_2[iVar19 * 4 + param_1 * 4 + -1] = fVar3 - (fVar1 + fVar2);
      iVar13 = iVar19 * 4 + param_1 * 2;
      iVar16 = iVar19 * 4;
      iVar19 = iVar19 + param_1;
      param_2[iVar13 + -1] = *(float *)(in_EAX + iVar16) - *local_5c;
      fVar1 = *pfVar14;
      pfVar14 = pfVar14 + param_1;
      param_2[iVar13] = *local_58 - fVar1;
      local_58 = local_58 + param_1;
      local_5c = local_5c + param_1;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  if (1 < (int)param_1) {
    if (param_1 != 2) {
      local_c = 0;
      if (0 < param_3) {
        local_38 = in_EAX + iVar12 * 4;
        local_34 = (float *)(in_EAX + iVar12 * 0xc);
        local_8 = param_3;
        local_3c = param_2;
        do {
          iVar19 = param_1 * 2;
          iVar16 = iVar19 + local_c * 4;
          if (2 < (int)param_1) {
            local_4c = local_3c;
            local_58 = param_6;
            pfVar11 = param_4 + 1;
            local_10 = (param_1 - 3 >> 1) + 1;
            pfVar14 = local_34;
            iVar13 = local_38;
            local_60 = (float *)(in_EAX + local_c * 4);
            local_54 = (float *)(in_EAX + (local_c + iVar12 * 2) * 4);
            local_48 = param_2 + iVar16;
            local_44 = param_2 + iVar19 + local_c * 4;
            local_40 = param_2 + iVar16 + iVar19;
            do {
              pfVar9 = local_54 + 2;
              pfVar18 = pfVar14 + 2;
              fVar1 = *(float *)(iVar13 + 8) * *pfVar11 + *(float *)(iVar13 + 4) * pfVar11[-1];
              pfVar10 = local_60 + 2;
              fVar4 = pfVar11[-1] * *(float *)(iVar13 + 8) - *(float *)(iVar13 + 4) * *pfVar11;
              iVar13 = iVar13 + 8;
              fVar5 = *(float *)((int)pfVar11 + ((int)param_5 - (int)param_4)) * *pfVar9 +
                      *(float *)((int)local_58 + ((int)param_5 - (int)param_6)) * local_54[1];
              fVar6 = *pfVar9 * *(float *)((int)local_58 + ((int)param_5 - (int)param_6)) -
                      *(float *)((int)pfVar11 + ((int)param_5 - (int)param_4)) * local_54[1];
              fVar3 = *local_58 * pfVar14[1] +
                      *pfVar18 * *(float *)((int)pfVar11 + ((int)param_6 - (int)param_4));
              fVar7 = *pfVar18 * *local_58 -
                      pfVar14[1] * *(float *)((int)pfVar11 + ((int)param_6 - (int)param_4));
              fVar2 = fVar3 + fVar1;
              fVar3 = fVar3 - fVar1;
              fVar1 = fVar7 + fVar4;
              fVar4 = fVar4 - fVar7;
              fVar7 = fVar6 + *pfVar10;
              fVar6 = *pfVar10 - fVar6;
              pfVar11 = pfVar11 + 2;
              fVar8 = fVar5 + local_60[1];
              fVar5 = local_60[1] - fVar5;
              local_4c[1] = fVar8 + fVar2;
              local_4c[2] = fVar7 + fVar1;
              local_48[-3] = fVar5 - fVar4;
              local_48[-2] = fVar3 - fVar6;
              local_44[1] = fVar5 + fVar4;
              local_44[2] = fVar6 + fVar3;
              local_40[-3] = fVar8 - fVar2;
              local_40[-2] = fVar1 - fVar7;
              local_58 = local_58 + 2;
              local_10 = local_10 + -1;
              pfVar14 = pfVar18;
              local_60 = pfVar10;
              local_54 = pfVar9;
              local_4c = local_4c + 2;
              local_48 = local_48 + -2;
              local_44 = local_44 + 2;
              local_40 = local_40 + -2;
            } while (local_10 != 0);
          }
          local_3c = local_3c + param_1 * 4;
          local_38 = local_38 + param_1 * 4;
          local_34 = local_34 + param_1;
          local_c = local_c + param_1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      if ((param_1 & 1) != 0) {
        return;
      }
    }
    iVar16 = iVar12 + -1 + param_1;
    local_60 = (float *)(iVar16 + iVar12 * 2);
    local_54 = (float *)0x0;
    uVar23 = param_1;
    local_58 = (float *)param_1;
    if (3 < param_3) {
      param_6 = param_2 + param_1 * 3;
      param_4 = (float *)(in_EAX + (iVar12 + iVar16) * 4);
      param_5 = (float *)(param_1 * 4 + -4 + in_EAX);
      local_8 = (param_3 - 4U >> 2) + 1;
      local_54 = (float *)(local_8 * 4);
      do {
        fVar1 = -((*(float *)(in_EAX + (int)local_60 * 4) + *(float *)(in_EAX + iVar16 * 4)) *
                 _DAT_00f7dfb4);
        iVar13 = iVar16 + param_1;
        fVar2 = (*(float *)(in_EAX + iVar16 * 4) - *(float *)(in_EAX + (int)local_60 * 4)) *
                _DAT_00f7dfb4;
        param_2[uVar23 - 1] = fVar2 + *param_5;
        param_6[-1] = *param_5 - fVar2;
        param_2[uVar23] = fVar1 - *param_4;
        *param_6 = fVar1 + *param_4;
        pfVar14 = param_4 + param_1;
        iVar19 = (int)local_60 + param_1;
        iVar17 = uVar23 + param_1 * 4;
        pfVar18 = param_6 + param_1 * 4;
        local_58 = (float *)((int)local_58 + param_1 * 4);
        pfVar11 = param_5 + param_1;
        fVar1 = -((*(float *)(in_EAX + iVar19 * 4) + *(float *)(in_EAX + iVar13 * 4)) *
                 _DAT_00f7dfb4);
        iVar16 = iVar13 + param_1;
        fVar2 = (*(float *)(in_EAX + iVar13 * 4) - *(float *)(in_EAX + iVar19 * 4)) * _DAT_00f7dfb4;
        param_2[iVar17 + -1] = fVar2 + *pfVar11;
        pfVar18[-1] = *pfVar11 - fVar2;
        param_2[iVar17] = fVar1 - *pfVar14;
        *pfVar18 = fVar1 + *pfVar14;
        pfVar14 = pfVar14 + param_1;
        iVar19 = iVar19 + param_1;
        iVar17 = iVar17 + param_1 * 4;
        pfVar18 = pfVar18 + param_1 * 4;
        pfVar11 = pfVar11 + param_1;
        fVar1 = -((*(float *)(in_EAX + iVar19 * 4) + *(float *)(in_EAX + iVar16 * 4)) *
                 _DAT_00f7dfb4);
        iVar13 = iVar16 + param_1;
        fVar2 = (*(float *)(in_EAX + iVar16 * 4) - *(float *)(in_EAX + iVar19 * 4)) * _DAT_00f7dfb4;
        param_2[iVar17 + -1] = fVar2 + *pfVar11;
        pfVar18[-1] = *pfVar11 - fVar2;
        param_2[iVar17] = fVar1 - *pfVar14;
        *pfVar18 = fVar1 + *pfVar14;
        pfVar14 = pfVar14 + param_1;
        iVar19 = iVar19 + param_1;
        iVar17 = iVar17 + param_1 * 4;
        pfVar18 = pfVar18 + param_1 * 4;
        pfVar11 = pfVar11 + param_1;
        fVar1 = -((*(float *)(in_EAX + iVar19 * 4) + *(float *)(in_EAX + iVar13 * 4)) *
                 _DAT_00f7dfb4);
        iVar16 = iVar13 + param_1;
        fVar2 = (*(float *)(in_EAX + iVar13 * 4) - *(float *)(in_EAX + iVar19 * 4)) * _DAT_00f7dfb4;
        param_2[iVar17 + -1] = fVar2 + *pfVar11;
        pfVar18[-1] = *pfVar11 - fVar2;
        param_2[iVar17] = fVar1 - *pfVar14;
        *pfVar18 = fVar1 + *pfVar14;
        param_4 = pfVar14 + param_1;
        local_60 = (float *)(iVar19 + param_1);
        uVar23 = iVar17 + param_1 * 4;
        param_6 = pfVar18 + param_1 * 4;
        param_5 = pfVar11 + param_1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    if ((int)local_54 < param_3) {
      pfVar14 = param_2 + uVar23;
      param_6 = (float *)(in_EAX + (int)local_60 * 4);
      pfVar11 = param_2 + uVar23 + param_1 * 2;
      pfVar18 = (float *)(in_EAX + iVar16 * 4);
      pfVar10 = (float *)(in_EAX + (iVar16 + iVar12) * 4);
      pfVar9 = (float *)(in_EAX + -4 + (int)local_58 * 4);
      param_3 = param_3 - (int)local_54;
      do {
        fVar3 = -((*param_6 + *pfVar18) * _DAT_00f7dfb4);
        fVar1 = *pfVar18;
        pfVar18 = pfVar18 + param_1;
        fVar2 = *param_6;
        param_6 = param_6 + param_1;
        fVar2 = (fVar1 - fVar2) * _DAT_00f7dfb4;
        pfVar14[-1] = fVar2 + *pfVar9;
        fVar1 = *pfVar9;
        pfVar9 = pfVar9 + param_1;
        pfVar11[-1] = fVar1 - fVar2;
        *pfVar14 = fVar3 - *pfVar10;
        pfVar14 = pfVar14 + param_1 * 4;
        fVar1 = *pfVar10;
        pfVar10 = pfVar10 + param_1;
        *pfVar11 = fVar3 + fVar1;
        pfVar11 = pfVar11 + param_1 * 4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}


//// FUNCTION vorbis_dradfg @ 00c5b440 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
vorbis_dradfg
          (float *param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6,
          float *param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_EAX;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float *pfVar23;
  float *pfVar24;
  int iVar25;
  float10 fVar26;
  float10 fVar27;
  int local_64;
  int local_60;
  float *local_50;
  int local_4c;
  float *local_48;
  float *local_44;
  float *local_40;
  float *local_3c;
  float *local_38;
  float *local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  int local_14;
  float *local_10;
  int local_c;
  int local_8;
  
                    /* Radix-2 FFT butterfly pass: computes twiddle factors via cos/sin(2*pi/N) and
                       performs the classic decimation butterfly recurrence over strided
                       real/imaginary buffers. Called twice in a row from vorbis_drftf1 (rows then
                       columns) -- a 2D FFT driver. Part of a ~226-function DSP/audio-processing
                       cluster in the 0xC50000-0xC90000 address range (2.8% of the priority-trace
                       queue) that is very likely a bundled signal-processing library rather than
                       hand-written gameplay logic -- see PolyphaseFIR_Resample8Phase (0xC6D230) in
                       the same range. Recommend deprioritizing this address range for gameplay
                       tracing. */
  pfVar16 = param_5;
  iVar18 = (int)param_3 + 1 >> 1;
  iVar19 = param_2 + -1 >> 1;
  iVar20 = param_2 * param_4;
  fVar26 = (float10)fcos((float10)_DAT_00f7dfb8 / (float10)(int)param_3);
  iVar21 = param_2 * (int)param_3;
  fVar27 = (float10)fsin((float10)_DAT_00f7dfb8 / (float10)(int)param_3);
  if (param_2 != 1) {
    local_40 = (float *)0x0;
    if (3 < (int)param_5) {
      local_3c = param_7 + 3;
      pfVar6 = param_8 + 1;
      iVar22 = ((uint)(param_5 + -1) >> 2) + 1;
      local_40 = (float *)(iVar22 * 4);
      do {
        pfVar6[-1] = local_3c[-3];
        *pfVar6 = *(float *)((int)pfVar6 + ((int)param_7 - (int)param_8));
        pfVar6[1] = local_3c[-1];
        pfVar6[2] = *local_3c;
        local_3c = local_3c + 4;
        pfVar6 = pfVar6 + 4;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
    }
    if ((int)local_40 < (int)param_5) {
      pfVar6 = param_8 + (int)local_40;
      iVar22 = (int)param_5 - (int)local_40;
      do {
        *pfVar6 = *(float *)((int)pfVar6 + ((int)param_7 - (int)param_8));
        pfVar6 = pfVar6 + 1;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
    }
    iVar22 = 0;
    if (1 < (int)param_3) {
      local_24 = (float *)((int)param_3 + -1);
      do {
        iVar22 = iVar22 + iVar20;
        local_64 = 0;
        iVar10 = iVar22;
        if (3 < param_4) {
          iVar8 = (param_4 - 4U >> 2) + 1;
          local_64 = iVar8 * 4;
          do {
            *(float *)(in_EAX + iVar10 * 4) = param_1[iVar10];
            iVar10 = iVar10 + param_2;
            *(float *)(in_EAX + iVar10 * 4) = param_1[iVar10];
            iVar10 = iVar10 + param_2;
            *(float *)(in_EAX + iVar10 * 4) = param_1[iVar10];
            iVar10 = iVar10 + param_2;
            *(float *)(in_EAX + iVar10 * 4) = param_1[iVar10];
            iVar10 = iVar10 + param_2;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        if (local_64 < param_4) {
          local_64 = param_4 - local_64;
          puVar11 = (undefined4 *)(in_EAX + iVar10 * 4);
          do {
            *puVar11 = *(undefined4 *)((int)puVar11 + ((int)param_1 - in_EAX));
            puVar11 = puVar11 + param_2;
            local_64 = local_64 + -1;
          } while (local_64 != 0);
        }
        local_24 = (float *)((int)local_24 + -1);
      } while (local_24 != (float *)0x0);
    }
    iVar22 = -param_2;
    local_60 = 0;
    if (param_4 < iVar19) {
      if (1 < (int)param_3) {
        local_28 = param_9 + (-1 - param_2);
        pfVar23 = (float *)(in_EAX + param_2 * -4);
        pfVar6 = param_1 + (-1 - param_2);
        local_40 = (float *)((int)param_3 + -1);
        do {
          pfVar23 = pfVar23 + iVar20;
          pfVar6 = pfVar6 + iVar20;
          local_28 = local_28 + param_2;
          if (0 < param_4) {
            local_3c = (float *)param_4;
            param_9 = pfVar23;
            local_2c = pfVar6;
            do {
              param_9 = param_9 + param_2;
              local_2c = local_2c + param_2;
              if (2 < param_2) {
                local_38 = (float *)((param_2 - 3U >> 1) + 1);
                pfVar7 = local_2c;
                pfVar17 = local_28;
                local_30 = param_9;
                do {
                  pfVar12 = pfVar7 + 2;
                  pfVar24 = pfVar17 + 2;
                  local_30 = local_30 + 2;
                  *(float *)((int)pfVar12 + (in_EAX - (int)param_1)) =
                       pfVar7[3] * *pfVar24 + pfVar7[2] * pfVar17[1];
                  *local_30 = pfVar7[3] * pfVar17[1] - *pfVar24 * *pfVar12;
                  local_38 = (float *)((int)local_38 + -1);
                  pfVar7 = pfVar12;
                  pfVar17 = pfVar24;
                } while (local_38 != (float *)0x0);
              }
              local_3c = (float *)((int)local_3c + -1);
            } while (local_3c != (float *)0x0);
          }
          local_40 = (float *)((int)local_40 + -1);
        } while (local_40 != (float *)0x0);
      }
    }
    else if (1 < (int)param_3) {
      local_28 = (float *)(iVar22 + -1);
      param_9 = param_9 + (-1 - param_2);
      local_30 = (float *)((int)param_3 + -1);
      iVar10 = iVar22;
      do {
        param_9 = param_9 + param_2;
        local_28 = (float *)((int)local_28 + param_2);
        iVar10 = iVar10 + param_2;
        local_60 = local_60 + iVar20;
        if (2 < param_2) {
          iVar8 = ((int)local_28 - iVar10) + 1 + local_60;
          local_2c = (float *)((param_2 - 3U >> 1) + 1);
          pfVar6 = param_9;
          do {
            iVar8 = iVar8 + 2;
            pfVar23 = pfVar6 + 2;
            local_64 = 0;
            iVar25 = iVar8;
            if (3 < param_4) {
              iVar9 = (param_4 - 4U >> 2) + 1;
              local_64 = iVar9 * 4;
              do {
                *(float *)(in_EAX + -4 + iVar25 * 4) =
                     *pfVar23 * param_1[iVar25] + pfVar6[1] * param_1[iVar25 + -1];
                *(float *)(in_EAX + iVar25 * 4) =
                     pfVar6[1] * param_1[iVar25] - *pfVar23 * param_1[iVar25 + -1];
                iVar25 = iVar25 + param_2;
                *(float *)(in_EAX + -4 + iVar25 * 4) =
                     *pfVar23 * param_1[iVar25] + pfVar6[1] * param_1[iVar25 + -1];
                *(float *)(in_EAX + iVar25 * 4) =
                     pfVar6[1] * param_1[iVar25] - *pfVar23 * param_1[iVar25 + -1];
                iVar25 = iVar25 + param_2;
                *(float *)(in_EAX + -4 + iVar25 * 4) =
                     *pfVar23 * param_1[iVar25] + pfVar6[1] * param_1[iVar25 + -1];
                *(float *)(in_EAX + iVar25 * 4) =
                     pfVar6[1] * param_1[iVar25] - *pfVar23 * param_1[iVar25 + -1];
                iVar25 = iVar25 + param_2;
                *(float *)(in_EAX + -4 + iVar25 * 4) =
                     *pfVar23 * param_1[iVar25] + pfVar6[1] * param_1[iVar25 + -1];
                *(float *)(in_EAX + iVar25 * 4) =
                     pfVar6[1] * param_1[iVar25] - *pfVar23 * param_1[iVar25 + -1];
                iVar25 = iVar25 + param_2;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            if (local_64 < param_4) {
              local_24 = (float *)(param_4 - local_64);
              pfVar7 = (float *)(in_EAX + iVar25 * 4);
              pfVar17 = param_1 + iVar25 + -1;
              do {
                *(float *)((int)pfVar17 + (in_EAX - (int)param_1)) =
                     *pfVar17 * pfVar6[1] + *pfVar23 * pfVar17[1];
                pfVar12 = pfVar17 + 1;
                fVar3 = *pfVar17;
                pfVar17 = pfVar17 + param_2;
                *pfVar7 = pfVar6[1] * *pfVar12 - fVar3 * *pfVar23;
                pfVar7 = pfVar7 + param_2;
                local_24 = (float *)((int)local_24 + -1);
              } while (local_24 != (float *)0x0);
            }
            local_2c = (float *)((int)local_2c + -1);
            pfVar6 = pfVar23;
          } while (local_2c != (float *)0x0);
        }
        local_30 = (float *)((int)local_30 + -1);
      } while (local_30 != (float *)0x0);
    }
    iVar10 = iVar20 * (int)param_3;
    local_60 = 0;
    if (iVar19 < param_4) {
      if (1 < iVar18) {
        local_3c = (float *)(iVar18 + -1);
        local_28 = (float *)iVar22;
        do {
          local_60 = local_60 + iVar20;
          local_28 = (float *)((int)local_28 + iVar20);
          iVar10 = iVar10 - iVar20;
          if (2 < param_2) {
            local_38 = (float *)((param_2 - 3U >> 1) + 1);
            iVar22 = (int)local_28;
            do {
              iVar22 = iVar22 + 2;
              iVar25 = iVar22 + (iVar10 - local_60);
              local_64 = 0;
              iVar8 = iVar22;
              if (3 < param_4) {
                iVar9 = (param_4 - 4U >> 2) + 1;
                local_64 = iVar9 * 4;
                do {
                  iVar25 = iVar25 + param_2;
                  iVar8 = iVar8 + param_2;
                  param_1[iVar8 + -1] =
                       *(float *)(in_EAX + -4 + iVar25 * 4) + *(float *)(in_EAX + -4 + iVar8 * 4);
                  param_1[iVar25 + -1] =
                       *(float *)(in_EAX + iVar8 * 4) - *(float *)(in_EAX + iVar25 * 4);
                  param_1[iVar8] = *(float *)(in_EAX + iVar8 * 4) + *(float *)(in_EAX + iVar25 * 4);
                  iVar13 = iVar8 + param_2;
                  param_1[iVar25] =
                       *(float *)(in_EAX + -4 + iVar25 * 4) - *(float *)(in_EAX + -4 + iVar8 * 4);
                  iVar25 = iVar25 + param_2;
                  param_1[iVar13 + -1] =
                       *(float *)(in_EAX + -4 + iVar25 * 4) + *(float *)(in_EAX + -4 + iVar13 * 4);
                  param_1[iVar25 + -1] =
                       *(float *)(in_EAX + iVar13 * 4) - *(float *)(in_EAX + iVar25 * 4);
                  param_1[iVar13] =
                       *(float *)(in_EAX + iVar13 * 4) + *(float *)(in_EAX + iVar25 * 4);
                  iVar14 = iVar13 + param_2;
                  param_1[iVar25] =
                       *(float *)(in_EAX + -4 + iVar25 * 4) - *(float *)(in_EAX + -4 + iVar13 * 4);
                  iVar25 = iVar25 + param_2;
                  param_1[iVar14 + -1] =
                       *(float *)(in_EAX + -4 + iVar25 * 4) + *(float *)(in_EAX + -4 + iVar14 * 4);
                  param_1[iVar25 + -1] =
                       *(float *)(in_EAX + iVar14 * 4) - *(float *)(in_EAX + iVar25 * 4);
                  param_1[iVar14] =
                       *(float *)(in_EAX + iVar14 * 4) + *(float *)(in_EAX + iVar25 * 4);
                  iVar8 = iVar14 + param_2;
                  param_1[iVar25] =
                       *(float *)(in_EAX + -4 + iVar25 * 4) - *(float *)(in_EAX + -4 + iVar14 * 4);
                  iVar25 = iVar25 + param_2;
                  iVar9 = iVar9 + -1;
                  param_1[iVar8 + -1] =
                       *(float *)(in_EAX + -4 + iVar25 * 4) + *(float *)(in_EAX + -4 + iVar8 * 4);
                  param_1[iVar25 + -1] =
                       *(float *)(in_EAX + iVar8 * 4) - *(float *)(in_EAX + iVar25 * 4);
                  param_1[iVar8] = *(float *)(in_EAX + iVar8 * 4) + *(float *)(in_EAX + iVar25 * 4);
                  param_1[iVar25] =
                       *(float *)(in_EAX + -4 + iVar25 * 4) - *(float *)(in_EAX + -4 + iVar8 * 4);
                } while (iVar9 != 0);
              }
              if (local_64 < param_4) {
                local_30 = param_1 + iVar25;
                local_2c = param_1 + iVar8;
                local_24 = (float *)(param_4 - local_64);
                pfVar6 = (float *)(in_EAX + -4 + iVar8 * 4);
                pfVar23 = (float *)(in_EAX + -4 + iVar25 * 4);
                do {
                  pfVar7 = pfVar6 + param_2;
                  pfVar17 = pfVar23 + param_2;
                  local_2c = local_2c + param_2;
                  pfVar6 = pfVar6 + param_2;
                  pfVar23 = pfVar23 + param_2;
                  local_30 = local_30 + param_2;
                  *(float *)((int)pfVar6 + ((int)param_1 - in_EAX)) = *pfVar7 + *pfVar17;
                  *(float *)((int)pfVar23 + ((int)param_1 - in_EAX)) = pfVar6[1] - pfVar23[1];
                  *local_2c = pfVar23[1] + pfVar6[1];
                  *local_30 = *pfVar23 - *pfVar6;
                  local_24 = (float *)((int)local_24 + -1);
                } while (local_24 != (float *)0x0);
              }
              local_38 = (float *)((int)local_38 + -1);
            } while (local_38 != (float *)0x0);
          }
          local_3c = (float *)((int)local_3c + -1);
        } while (local_3c != (float *)0x0);
      }
    }
    else if (1 < iVar18) {
      local_28 = param_1 + iVar10;
      local_2c = (float *)(in_EAX + -4 + iVar10 * 4);
      param_9 = (float *)(in_EAX + -4);
      local_48 = (float *)(iVar18 + -1);
      pfVar6 = param_1;
      do {
        param_9 = param_9 + iVar20;
        local_28 = local_28 + -iVar20;
        pfVar6 = pfVar6 + iVar20;
        local_2c = local_2c + -iVar20;
        if (0 < param_4) {
          local_44 = (float *)param_4;
          pfVar23 = local_2c;
          local_40 = local_28;
          local_3c = param_9;
          local_38 = pfVar6;
          do {
            if (2 < param_2) {
              local_30 = local_38;
              local_34 = local_40;
              iVar22 = (param_2 - 3U >> 1) + 1;
              pfVar7 = local_3c;
              pfVar17 = pfVar23;
              do {
                local_30 = local_30 + 2;
                pfVar12 = pfVar7 + 2;
                pfVar24 = pfVar17 + 2;
                local_34 = local_34 + 2;
                iVar22 = iVar22 + -1;
                *(float *)((int)pfVar12 + ((int)param_1 - in_EAX)) = pfVar7[2] + pfVar17[2];
                *(float *)((int)pfVar24 + ((int)param_1 - in_EAX)) = pfVar7[3] - pfVar17[3];
                *local_30 = pfVar17[3] + pfVar7[3];
                *local_34 = *pfVar24 - *pfVar12;
                pfVar7 = pfVar12;
                pfVar17 = pfVar24;
              } while (iVar22 != 0);
            }
            local_38 = local_38 + param_2;
            local_40 = local_40 + param_2;
            local_3c = local_3c + param_2;
            pfVar23 = pfVar23 + param_2;
            local_44 = (float *)((int)local_44 + -1);
          } while (local_44 != (float *)0x0);
        }
        local_48 = (float *)((int)local_48 + -1);
      } while (local_48 != (float *)0x0);
    }
  }
  iVar22 = 0;
  if (3 < (int)param_5) {
    param_9 = param_8 + 3;
    pfVar6 = param_7 + 1;
    iVar10 = ((uint)(param_5 + -1) >> 2) + 1;
    iVar22 = iVar10 * 4;
    do {
      pfVar6[-1] = param_9[-3];
      *pfVar6 = *(float *)(((int)param_8 - (int)param_7) + (int)pfVar6);
      pfVar6[1] = param_9[-1];
      pfVar6[2] = *param_9;
      param_9 = param_9 + 4;
      pfVar6 = pfVar6 + 4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (iVar22 < (int)param_5) {
    pfVar6 = param_7 + iVar22;
    param_9 = (float *)((int)param_5 - iVar22);
    do {
      *pfVar6 = *(float *)((int)pfVar6 + ((int)param_8 - (int)param_7));
      pfVar6 = pfVar6 + 1;
      param_9 = (float *)((int)param_9 + -1);
    } while (param_9 != (float *)0x0);
  }
  iVar22 = (int)param_3 * (int)param_5;
  if (1 < iVar18) {
    iVar10 = iVar22 - param_2;
    iVar8 = -param_2;
    local_24 = (float *)(iVar18 + -1);
    do {
      iVar10 = iVar10 - iVar20;
      iVar8 = iVar8 + iVar20;
      local_64 = 0;
      iVar25 = iVar8;
      iVar9 = iVar10;
      if (3 < param_4) {
        iVar13 = (param_4 - 4U >> 2) + 1;
        local_64 = iVar13 * 4;
        do {
          iVar9 = iVar9 + param_2;
          iVar25 = iVar25 + param_2;
          param_1[iVar25] = *(float *)(in_EAX + iVar9 * 4) + *(float *)(in_EAX + iVar25 * 4);
          iVar14 = iVar25 + param_2;
          param_1[iVar9] = *(float *)(in_EAX + iVar9 * 4) - *(float *)(in_EAX + iVar25 * 4);
          iVar9 = iVar9 + param_2;
          param_1[iVar14] = *(float *)(in_EAX + iVar9 * 4) + *(float *)(in_EAX + iVar14 * 4);
          iVar15 = iVar14 + param_2;
          param_1[iVar9] = *(float *)(in_EAX + iVar9 * 4) - *(float *)(in_EAX + iVar14 * 4);
          iVar9 = iVar9 + param_2;
          param_1[iVar15] = *(float *)(in_EAX + iVar9 * 4) + *(float *)(in_EAX + iVar15 * 4);
          iVar25 = iVar15 + param_2;
          param_1[iVar9] = *(float *)(in_EAX + iVar9 * 4) - *(float *)(in_EAX + iVar15 * 4);
          iVar9 = iVar9 + param_2;
          iVar13 = iVar13 + -1;
          param_1[iVar25] = *(float *)(in_EAX + iVar9 * 4) + *(float *)(in_EAX + iVar25 * 4);
          param_1[iVar9] = *(float *)(in_EAX + iVar9 * 4) - *(float *)(in_EAX + iVar25 * 4);
        } while (iVar13 != 0);
      }
      if (local_64 < param_4) {
        param_9 = (float *)(param_4 - local_64);
        pfVar6 = (float *)(in_EAX + iVar25 * 4);
        pfVar23 = (float *)(in_EAX + iVar9 * 4);
        do {
          pfVar7 = pfVar23 + param_2;
          pfVar23 = pfVar23 + param_2;
          pfVar17 = pfVar6 + param_2;
          pfVar6 = pfVar6 + param_2;
          *(float *)((int)pfVar6 + ((int)param_1 - in_EAX)) = *pfVar7 + *pfVar17;
          *(float *)((int)pfVar23 + ((int)param_1 - in_EAX)) = *pfVar23 - *pfVar6;
          param_9 = (float *)((int)param_9 + -1);
        } while (param_9 != (float *)0x0);
      }
      local_24 = (float *)((int)local_24 + -1);
    } while (local_24 != (float *)0x0);
  }
  iVar8 = 0;
  iVar10 = ((int)param_3 + -1) * (int)param_5;
  if (1 < iVar18) {
    fVar3 = 0.0;
    local_2c = param_8 + 2;
    local_30 = param_8 + iVar22 + 2;
    local_8 = iVar18 + -1;
    fVar1 = 1.0;
    do {
      local_2c = local_2c + (int)param_5;
      local_30 = local_30 + -(int)param_5;
      fVar5 = (float)fVar26 * fVar1 - fVar3 * (float)fVar27;
      iVar8 = iVar8 + (int)param_5;
      iVar22 = iVar22 - (int)param_5;
      iVar25 = 0;
      fVar3 = fVar3 * (float)fVar26 + fVar1 * (float)fVar27;
      local_48 = param_5;
      iVar9 = iVar22;
      local_50 = (float *)iVar8;
      local_28 = (float *)iVar10;
      if (3 < (int)param_5) {
        local_44 = param_7 + iVar10 + 2;
        local_3c = param_7 + 2;
        local_40 = param_7 + (int)param_5 + 2;
        iVar13 = ((uint)(param_5 + -1) >> 2) + 1;
        iVar25 = iVar13 * 4;
        local_50 = (float *)(iVar8 + iVar25);
        iVar9 = iVar22 + iVar25;
        local_28 = (float *)(iVar10 + iVar25);
        local_48 = param_5 + iVar13;
        pfVar6 = local_2c;
        local_38 = local_30;
        do {
          pfVar6[-2] = fVar5 * local_40[-2] + local_3c[-2];
          local_38[-2] = fVar3 * local_44[-2];
          pfVar6[-1] = fVar5 * local_40[-1] + local_3c[-1];
          local_38[-1] = fVar3 * local_44[-1];
          *pfVar6 = fVar5 * *local_40 + *local_3c;
          *local_38 = fVar3 * *local_44;
          pfVar6[1] = fVar5 * local_40[1] + local_3c[1];
          local_38[1] = fVar3 * local_44[1];
          local_44 = local_44 + 4;
          local_40 = local_40 + 4;
          local_3c = local_3c + 4;
          iVar13 = iVar13 + -1;
          pfVar6 = pfVar6 + 4;
          local_38 = local_38 + 4;
        } while (iVar13 != 0);
      }
      if (iVar25 < (int)param_5) {
        local_38 = param_8 + iVar9;
        local_3c = param_7 + (int)local_28;
        local_28 = param_8 + (int)local_50;
        local_48 = param_7 + (int)local_48;
        do {
          fVar1 = *local_48;
          local_48 = local_48 + 1;
          *local_28 = fVar5 * fVar1 + param_7[iVar25];
          *local_38 = fVar3 * *local_3c;
          local_28 = local_28 + 1;
          local_38 = local_38 + 1;
          local_3c = local_3c + 1;
          iVar25 = iVar25 + 1;
        } while (iVar25 < (int)param_5);
      }
      local_50 = param_5;
      if (2 < iVar18) {
        local_38 = param_7 + iVar10 + 2;
        local_24 = param_7 + (int)param_5 + 2;
        local_c = iVar18 + -2;
        fVar1 = fVar3;
        fVar2 = fVar5;
        local_4c = iVar10;
        do {
          local_24 = local_24 + (int)param_5;
          fVar4 = fVar5 * fVar2 - fVar1 * fVar3;
          local_4c = local_4c - (int)param_5;
          local_50 = (float *)((int)local_50 + (int)param_5);
          local_38 = local_38 + -(int)param_5;
          iVar25 = 0;
          fVar1 = fVar2 * fVar3 + fVar1 * fVar5;
          iVar9 = iVar22;
          iVar13 = iVar8;
          local_14 = local_4c;
          local_10 = local_50;
          if (3 < (int)param_5) {
            iVar14 = ((uint)(param_5 + -1) >> 2) + 1;
            iVar25 = iVar14 * 4;
            iVar13 = iVar8 + iVar25;
            iVar9 = iVar22 + iVar25;
            local_10 = local_50 + iVar14;
            local_14 = local_4c + iVar25;
            pfVar6 = local_2c;
            pfVar23 = local_30;
            local_40 = local_38;
            local_3c = local_24;
            do {
              pfVar6[-2] = fVar4 * local_3c[-2] + pfVar6[-2];
              pfVar23[-2] = fVar1 * local_40[-2] + pfVar23[-2];
              pfVar6[-1] = fVar4 * local_3c[-1] + pfVar6[-1];
              pfVar23[-1] = fVar1 * local_40[-1] + pfVar23[-1];
              *pfVar6 = fVar4 * *local_3c + *pfVar6;
              *pfVar23 = fVar1 * *local_40 + *pfVar23;
              pfVar6[1] = fVar4 * local_3c[1] + pfVar6[1];
              pfVar7 = local_40 + 1;
              local_3c = local_3c + 4;
              local_40 = local_40 + 4;
              iVar14 = iVar14 + -1;
              pfVar23[1] = fVar1 * *pfVar7 + pfVar23[1];
              pfVar6 = pfVar6 + 4;
              pfVar23 = pfVar23 + 4;
            } while (iVar14 != 0);
          }
          if (iVar25 < (int)param_5) {
            local_28 = param_7 + local_14;
            local_10 = param_7 + (int)local_10;
            iVar25 = (int)param_5 - iVar25;
            pfVar6 = param_8 + iVar13;
            local_3c = param_8 + iVar9;
            do {
              fVar2 = *local_10;
              local_10 = local_10 + 1;
              *pfVar6 = fVar4 * fVar2 + *pfVar6;
              *local_3c = fVar1 * *local_28 + *local_3c;
              local_28 = local_28 + 1;
              iVar25 = iVar25 + -1;
              pfVar6 = pfVar6 + 1;
              local_3c = local_3c + 1;
            } while (iVar25 != 0);
          }
          local_c = local_c + -1;
          fVar2 = fVar4;
        } while (local_c != 0);
      }
      local_8 = local_8 + -1;
      fVar1 = fVar5;
    } while (local_8 != 0);
  }
  local_60 = 0;
  if (1 < iVar18) {
    pfVar6 = param_7 + 2;
    param_5 = (float *)(iVar18 + -1);
    do {
      local_60 = local_60 + (int)pfVar16;
      pfVar6 = pfVar6 + (int)pfVar16;
      iVar22 = 0;
      iVar10 = local_60;
      if (3 < (int)pfVar16) {
        iVar8 = ((uint)(pfVar16 + -1) >> 2) + 1;
        iVar22 = iVar8 * 4;
        iVar10 = local_60 + iVar22;
        pfVar23 = param_8 + 2;
        pfVar7 = pfVar6;
        do {
          iVar8 = iVar8 + -1;
          pfVar23[-2] = pfVar7[-2] + pfVar23[-2];
          pfVar23[-1] = pfVar7[-1] + pfVar23[-1];
          *pfVar23 = *pfVar7 + *pfVar23;
          pfVar23[1] = pfVar7[1] + pfVar23[1];
          pfVar23 = pfVar23 + 4;
          pfVar7 = pfVar7 + 4;
        } while (iVar8 != 0);
      }
      if (iVar22 < (int)pfVar16) {
        pfVar23 = param_7 + iVar10;
        do {
          fVar3 = *pfVar23;
          pfVar23 = pfVar23 + 1;
          iVar10 = iVar22 + 1;
          param_8[iVar22] = fVar3 + param_8[iVar22];
          iVar22 = iVar10;
        } while (iVar10 < (int)pfVar16);
      }
      param_5 = (float *)((int)param_5 + -1);
    } while (param_5 != (float *)0x0);
  }
  if (param_2 < param_4) {
    param_8 = (float *)0x0;
    if (0 < param_2) {
      do {
        local_64 = 0;
        pfVar6 = param_8;
        pfVar16 = param_8;
        if (3 < param_4) {
          param_7 = (float *)((param_4 - 4U >> 2) + 1);
          local_64 = (int)param_7 * 4;
          do {
            param_6[(int)pfVar16] = *(float *)(in_EAX + (int)pfVar6 * 4);
            param_6[(int)pfVar16 + iVar21] = *(float *)(in_EAX + ((int)pfVar6 + param_2) * 4);
            iVar22 = (int)pfVar6 + param_2 + param_2;
            pfVar16 = (float *)((int)((int)pfVar16 + iVar21) + iVar21);
            param_6[(int)pfVar16] = *(float *)(in_EAX + iVar22 * 4);
            iVar22 = iVar22 + param_2;
            pfVar16 = (float *)((int)pfVar16 + iVar21);
            param_6[(int)pfVar16] = *(float *)(in_EAX + iVar22 * 4);
            pfVar6 = (float *)(iVar22 + param_2);
            pfVar16 = (float *)((int)pfVar16 + iVar21);
            param_7 = (float *)((int)param_7 + -1);
          } while (param_7 != (float *)0x0);
        }
        if (local_64 < param_4) {
          param_7 = (float *)(in_EAX + (int)pfVar6 * 4);
          pfVar16 = param_6 + (int)pfVar16;
          local_64 = param_4 - local_64;
          do {
            *pfVar16 = *param_7;
            param_7 = param_7 + param_2;
            pfVar16 = pfVar16 + iVar21;
            local_64 = local_64 + -1;
          } while (local_64 != 0);
        }
        param_8 = (float *)((int)param_8 + 1);
      } while ((int)param_8 < param_2);
    }
  }
  else {
    local_60 = 0;
    param_9 = (float *)0x0;
    if (0 < param_4) {
      param_5 = (float *)(in_EAX + 8);
      local_24 = param_6 + 2;
      local_8 = param_4;
      do {
        iVar22 = 0;
        iVar10 = local_60;
        pfVar16 = param_9;
        if (3 < param_2) {
          iVar8 = (param_2 - 4U >> 2) + 1;
          iVar22 = iVar8 * 4;
          iVar10 = local_60 + iVar22;
          pfVar16 = param_9 + iVar8;
          pfVar6 = local_24;
          pfVar23 = param_5;
          do {
            pfVar6[-2] = pfVar23[-2];
            pfVar6[-1] = pfVar23[-1];
            *pfVar6 = *pfVar23;
            pfVar6[1] = pfVar23[1];
            pfVar23 = pfVar23 + 4;
            pfVar6 = pfVar6 + 4;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        if (iVar22 < param_2) {
          pfVar16 = param_6 + (int)pfVar16;
          pfVar6 = (float *)(in_EAX + iVar10 * 4);
          iVar22 = param_2 - iVar22;
          do {
            *pfVar16 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar16 = pfVar16 + 1;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        param_5 = param_5 + param_2;
        param_9 = (float *)((int)param_9 + iVar21);
        local_24 = local_24 + iVar21;
        local_60 = local_60 + param_2;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  iVar10 = iVar20 * (int)param_3;
  iVar22 = 0;
  iVar8 = 0;
  if (1 < iVar18) {
    param_9 = (float *)(iVar18 + -1);
    iVar25 = iVar10;
    do {
      iVar22 = iVar22 + param_2 * 2;
      iVar8 = iVar8 + iVar20;
      iVar25 = iVar25 - iVar20;
      local_64 = 0;
      iVar9 = iVar22;
      iVar13 = iVar8;
      iVar14 = iVar25;
      if (3 < param_4) {
        param_8 = (float *)((param_4 - 4U >> 2) + 1);
        local_64 = (int)param_8 * 4;
        do {
          param_6[iVar9 + -1] = *(float *)(in_EAX + iVar13 * 4);
          param_6[iVar9] = *(float *)(in_EAX + iVar14 * 4);
          iVar9 = iVar9 + iVar21;
          param_6[iVar9 + -1] = *(float *)(in_EAX + (iVar13 + param_2) * 4);
          param_6[iVar9] = *(float *)(in_EAX + (iVar14 + param_2) * 4);
          iVar9 = iVar9 + iVar21;
          iVar13 = iVar13 + param_2 + param_2;
          param_6[iVar9 + -1] = *(float *)(in_EAX + iVar13 * 4);
          iVar14 = iVar14 + param_2 + param_2;
          param_6[iVar9] = *(float *)(in_EAX + iVar14 * 4);
          iVar9 = iVar9 + iVar21;
          iVar13 = iVar13 + param_2;
          param_6[iVar9 + -1] = *(float *)(in_EAX + iVar13 * 4);
          iVar14 = iVar14 + param_2;
          param_6[iVar9] = *(float *)(in_EAX + iVar14 * 4);
          iVar9 = iVar9 + iVar21;
          iVar13 = iVar13 + param_2;
          iVar14 = iVar14 + param_2;
          param_8 = (float *)((int)param_8 + -1);
        } while (param_8 != (float *)0x0);
      }
      if (local_64 < param_4) {
        param_3 = (float *)(in_EAX + iVar13 * 4);
        param_5 = (float *)(in_EAX + iVar14 * 4);
        pfVar16 = param_6 + iVar9;
        local_64 = param_4 - local_64;
        do {
          pfVar16[-1] = *param_3;
          *pfVar16 = *param_5;
          pfVar16 = pfVar16 + iVar21;
          param_3 = param_3 + param_2;
          param_5 = param_5 + param_2;
          local_64 = local_64 + -1;
        } while (local_64 != 0);
      }
      param_9 = (float *)((int)param_9 + -1);
    } while (param_9 != (float *)0x0);
  }
  if (param_2 != 1) {
    if (iVar19 < param_4) {
      iVar19 = 0;
      iVar22 = 0;
      if (1 < iVar18) {
        pfVar16 = (float *)0xfffffffe;
        local_c = iVar18 + -1;
        do {
          pfVar16 = (float *)((int)pfVar16 + param_2 * 2);
          iVar19 = iVar19 + param_2 * 2;
          iVar22 = iVar22 + iVar20;
          iVar10 = iVar10 - iVar20;
          if (2 < param_2) {
            local_8 = (param_2 - 3U >> 1) + 1;
            param_3 = pfVar16;
            iVar18 = iVar22;
            do {
              iVar18 = iVar18 + 2;
              local_48 = (float *)((iVar19 - iVar22) + iVar18);
              iVar25 = (iVar10 - iVar22) + iVar18;
              local_64 = 0;
              iVar8 = iVar18;
              pfVar6 = param_3;
              if (3 < param_4) {
                param_8 = (float *)((param_4 - 4U >> 2) + 1);
                local_64 = (int)param_8 * 4;
                do {
                  param_6[(int)local_48 + -1] =
                       *(float *)(in_EAX + -4 + iVar25 * 4) + *(float *)(in_EAX + -4 + iVar8 * 4);
                  param_6[(int)pfVar6 + -1] =
                       *(float *)(in_EAX + -4 + iVar8 * 4) - *(float *)(in_EAX + -4 + iVar25 * 4);
                  param_6[(int)local_48] =
                       *(float *)(in_EAX + iVar25 * 4) + *(float *)(in_EAX + iVar8 * 4);
                  iVar14 = iVar25 + param_2;
                  iVar9 = iVar8 + param_2;
                  param_6[(int)pfVar6] =
                       *(float *)(in_EAX + iVar25 * 4) - *(float *)(in_EAX + iVar8 * 4);
                  pfVar6 = (float *)((int)pfVar6 + iVar21);
                  iVar13 = (int)local_48 + iVar21;
                  param_6[iVar13 + -1] =
                       *(float *)(in_EAX + -4 + iVar14 * 4) + *(float *)(in_EAX + -4 + iVar9 * 4);
                  param_6[(int)pfVar6 + -1] =
                       *(float *)(in_EAX + -4 + iVar9 * 4) - *(float *)(in_EAX + -4 + iVar14 * 4);
                  param_6[iVar13] = *(float *)(in_EAX + iVar14 * 4) + *(float *)(in_EAX + iVar9 * 4)
                  ;
                  iVar25 = iVar14 + param_2;
                  iVar8 = iVar9 + param_2;
                  param_6[(int)pfVar6] =
                       *(float *)(in_EAX + iVar14 * 4) - *(float *)(in_EAX + iVar9 * 4);
                  pfVar6 = (float *)((int)pfVar6 + iVar21);
                  iVar13 = iVar13 + iVar21;
                  param_6[iVar13 + -1] =
                       *(float *)(in_EAX + -4 + iVar25 * 4) + *(float *)(in_EAX + -4 + iVar8 * 4);
                  param_6[(int)pfVar6 + -1] =
                       *(float *)(in_EAX + -4 + iVar8 * 4) - *(float *)(in_EAX + -4 + iVar25 * 4);
                  param_6[iVar13] = *(float *)(in_EAX + iVar25 * 4) + *(float *)(in_EAX + iVar8 * 4)
                  ;
                  iVar14 = iVar25 + param_2;
                  iVar9 = iVar8 + param_2;
                  param_6[(int)pfVar6] =
                       *(float *)(in_EAX + iVar25 * 4) - *(float *)(in_EAX + iVar8 * 4);
                  pfVar6 = (float *)((int)pfVar6 + iVar21);
                  iVar13 = iVar13 + iVar21;
                  param_6[iVar13 + -1] =
                       *(float *)(in_EAX + -4 + iVar14 * 4) + *(float *)(in_EAX + -4 + iVar9 * 4);
                  param_6[(int)pfVar6 + -1] =
                       *(float *)(in_EAX + -4 + iVar9 * 4) - *(float *)(in_EAX + -4 + iVar14 * 4);
                  param_6[iVar13] = *(float *)(in_EAX + iVar14 * 4) + *(float *)(in_EAX + iVar9 * 4)
                  ;
                  iVar25 = iVar14 + param_2;
                  iVar8 = iVar9 + param_2;
                  param_6[(int)pfVar6] =
                       *(float *)(in_EAX + iVar14 * 4) - *(float *)(in_EAX + iVar9 * 4);
                  pfVar6 = (float *)((int)pfVar6 + iVar21);
                  local_48 = (float *)(iVar13 + iVar21);
                  param_8 = (float *)((int)param_8 + -1);
                } while (param_8 != (float *)0x0);
              }
              if (local_64 < param_4) {
                local_48 = param_6 + (int)local_48;
                pfVar6 = param_6 + (int)pfVar6;
                local_64 = param_4 - local_64;
                pfVar23 = (float *)(in_EAX + iVar8 * 4);
                pfVar7 = (float *)(in_EAX + iVar25 * 4);
                do {
                  local_48[-1] = pfVar23[-1] + pfVar7[-1];
                  pfVar6[-1] = pfVar23[-1] - pfVar7[-1];
                  *local_48 = *pfVar23 + *pfVar7;
                  *pfVar6 = *pfVar7 - *pfVar23;
                  pfVar6 = pfVar6 + iVar21;
                  local_48 = local_48 + iVar21;
                  pfVar23 = pfVar23 + param_2;
                  pfVar7 = pfVar7 + param_2;
                  local_64 = local_64 + -1;
                } while (local_64 != 0);
              }
              param_3 = (float *)((int)param_3 + -2);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
          }
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
    }
    else if (1 < iVar18) {
      param_3 = (float *)(in_EAX + 8 + iVar10 * 4);
      param_7 = (float *)(in_EAX + 8);
      param_8 = param_6 + -2;
      param_6 = param_6 + 2;
      local_c = iVar18 + -1;
      do {
        param_8 = param_8 + param_2 * 2;
        param_6 = param_6 + param_2 * 2;
        param_7 = param_7 + iVar20;
        param_3 = param_3 + -iVar20;
        if (0 < param_4) {
          local_8 = param_4;
          pfVar16 = param_6;
          param_5 = param_8;
          param_9 = param_7;
          local_20 = param_3;
          do {
            if (2 < param_2) {
              iVar18 = (param_2 - 3U >> 1) + 1;
              pfVar6 = param_5;
              pfVar23 = local_20;
              pfVar7 = pfVar16;
              pfVar17 = param_9;
              do {
                iVar18 = iVar18 + -1;
                pfVar7[-1] = pfVar17[-1] + pfVar23[-1];
                pfVar6[-1] = pfVar17[-1] - pfVar23[-1];
                *pfVar7 = *pfVar17 + *pfVar23;
                *pfVar6 = *pfVar23 - *pfVar17;
                pfVar6 = pfVar6 + -2;
                pfVar23 = pfVar23 + 2;
                pfVar7 = pfVar7 + 2;
                pfVar17 = pfVar17 + 2;
              } while (iVar18 != 0);
            }
            param_5 = param_5 + iVar21;
            pfVar16 = pfVar16 + iVar21;
            param_9 = param_9 + param_2;
            local_20 = local_20 + param_2;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
        }
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  return;
}


//// FUNCTION vorbis_drftf1 @ 00c5ccc0 ////

void __thiscall vorbis_drftf1(void *this,int param_1,int param_2)

{
  float *in_EAX;
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *unaff_EDI;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_4;
  
  local_4 = *(int *)((int)this + 4);
  local_10 = 1;
  local_14 = param_1;
  if (0 < local_4) {
    local_c = (undefined4 *)((int)this + local_4 * 4 + 4);
    iVar5 = param_1;
    do {
      pfVar4 = (float *)*local_c;
      iVar1 = iVar5 / (int)pfVar4;
      uVar2 = param_1 / iVar5;
      local_14 = local_14 - ((int)pfVar4 + -1) * uVar2;
      local_10 = 1 - local_10;
      if (pfVar4 == (float *)0x4) {
        pfVar4 = in_EAX;
        if (local_10 != 0) {
          pfVar4 = unaff_EDI;
        }
        vorbis_dradf4(uVar2,pfVar4,iVar1,(float *)(param_2 + -4 + local_14 * 4),
                     (float *)(param_2 + -4 + (local_14 + uVar2) * 4),
                     (float *)(param_2 + -4 + (local_14 + uVar2 + uVar2) * 4));
      }
      else if (pfVar4 == (float *)0x2) {
        iVar5 = param_2 + -4 + local_14 * 4;
        if (local_10 == 0) {
          vorbis_dradf2(uVar2,in_EAX,iVar1,iVar5);
        }
        else {
          vorbis_dradf2(uVar2,unaff_EDI,iVar1,iVar5);
        }
      }
      else {
        if (uVar2 == 1) {
          local_10 = 1 - local_10;
        }
        pfVar3 = (float *)(param_2 + -4 + local_14 * 4);
        if (local_10 == 0) {
          vorbis_dradfg
                    (unaff_EDI,uVar2,pfVar4,iVar1,(float *)(uVar2 * iVar1),unaff_EDI,unaff_EDI,
                     in_EAX,pfVar3);
          local_10 = 1;
        }
        else {
          vorbis_dradfg
                    (in_EAX,uVar2,pfVar4,iVar1,(float *)(uVar2 * iVar1),in_EAX,in_EAX,unaff_EDI,
                     pfVar3);
          local_10 = 0;
        }
      }
      local_c = local_c + -1;
      local_4 = local_4 + -1;
      iVar5 = iVar1;
    } while (local_4 != 0);
    if (local_10 != 1) {
      iVar5 = 0;
      if (3 < param_1) {
        iVar1 = (param_1 - 4U >> 2) + 1;
        iVar5 = iVar1 * 4;
        pfVar4 = in_EAX + 3;
        pfVar3 = unaff_EDI + 1;
        do {
          pfVar3[-1] = pfVar4[-3];
          *pfVar3 = *(float *)((int)pfVar3 + ((int)in_EAX - (int)unaff_EDI));
          pfVar3[1] = pfVar4[-1];
          pfVar3[2] = *pfVar4;
          pfVar3 = pfVar3 + 4;
          pfVar4 = pfVar4 + 4;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (iVar5 < param_1) {
        pfVar4 = unaff_EDI + iVar5;
        iVar5 = param_1 - iVar5;
        do {
          *pfVar4 = *(float *)((int)pfVar4 + ((int)in_EAX - (int)unaff_EDI));
          pfVar4 = pfVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return;
}


//// FUNCTION vorbis_dradb2 @ 00c5cea0 ////

void __fastcall vorbis_dradb2(float *param_1,uint param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  float *local_20;
  float *local_1c;
  float *local_14;
  float *local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar6 = param_2 * param_3;
  iVar13 = 0;
  iVar7 = 0;
  local_20 = (float *)0x0;
  if (3 < param_3) {
    local_10 = (float *)((param_3 - 4U >> 2) + 1);
    local_20 = (float *)((int)local_10 * 4);
    pfVar5 = param_1 + iVar6;
    do {
      iVar8 = iVar13 + -1 + param_2 * 2;
      param_1[iVar7] = *(float *)(in_EAX + iVar8 * 4) + *(float *)(in_EAX + iVar13 * 4);
      iVar7 = iVar7 + param_2;
      *pfVar5 = *(float *)(in_EAX + iVar13 * 4) - *(float *)(in_EAX + iVar8 * 4);
      pfVar5 = pfVar5 + param_2;
      iVar13 = iVar7 * 2 + -1 + param_2 * 2;
      param_1[iVar7] = *(float *)(in_EAX + iVar13 * 4) + *(float *)(in_EAX + iVar7 * 8);
      iVar8 = iVar7 + param_2;
      *pfVar5 = *(float *)(in_EAX + iVar7 * 8) - *(float *)(in_EAX + iVar13 * 4);
      pfVar5 = pfVar5 + param_2;
      iVar13 = iVar8 * 2 + -1 + param_2 * 2;
      param_1[iVar8] = *(float *)(in_EAX + iVar13 * 4) + *(float *)(in_EAX + iVar8 * 8);
      iVar9 = iVar8 + param_2;
      *pfVar5 = *(float *)(in_EAX + iVar8 * 8) - *(float *)(in_EAX + iVar13 * 4);
      iVar13 = iVar9 * 2 + -1 + param_2 * 2;
      param_1[iVar9] = *(float *)(in_EAX + iVar13 * 4) + *(float *)(in_EAX + iVar9 * 8);
      iVar7 = iVar9 + param_2;
      pfVar5[param_2] = *(float *)(in_EAX + iVar9 * 8) - *(float *)(in_EAX + iVar13 * 4);
      pfVar5 = pfVar5 + param_2 + param_2;
      local_10 = (float *)((int)local_10 + -1);
      iVar13 = iVar7 * 2;
    } while (local_10 != (float *)0x0);
  }
  if ((int)local_20 < param_3) {
    local_10 = param_1 + iVar6 + iVar7;
    iVar8 = param_3 - (int)local_20;
    do {
      iVar9 = iVar13 + -1 + param_2 * 2;
      param_1[iVar7] = *(float *)(in_EAX + iVar9 * 4) + *(float *)(in_EAX + iVar13 * 4);
      iVar7 = iVar7 + param_2;
      *local_10 = *(float *)(in_EAX + iVar13 * 4) - *(float *)(in_EAX + iVar9 * 4);
      local_10 = local_10 + param_2;
      iVar8 = iVar8 + -1;
      iVar13 = iVar7 * 2;
    } while (iVar8 != 0);
  }
  if (1 < (int)param_2) {
    if (param_2 != 2) {
      iVar13 = 0;
      local_8 = 0;
      if (0 < param_3) {
        local_14 = param_1 + iVar6;
        local_4 = param_3;
        local_10 = param_1;
        do {
          if (2 < (int)param_2) {
            local_1c = local_10;
            local_20 = local_14;
            local_c = (param_2 - 3 >> 1) + 1;
            pfVar5 = (float *)(in_EAX + iVar13 * 4);
            pfVar12 = (float *)(param_4 + 4);
            pfVar14 = (float *)(in_EAX + (iVar13 + param_2 * 2) * 4);
            do {
              pfVar15 = pfVar14 + -2;
              pfVar10 = pfVar5 + 2;
              local_1c[1] = pfVar14[-3] + pfVar5[1];
              fVar1 = pfVar5[1];
              fVar2 = pfVar14[-3];
              local_1c[2] = *pfVar10 - *pfVar15;
              fVar3 = *pfVar10;
              fVar4 = *pfVar15;
              local_20[1] = (fVar1 - fVar2) * pfVar12[-1] - (fVar3 + fVar4) * *pfVar12;
              local_20[2] = (fVar1 - fVar2) * *pfVar12 + (fVar3 + fVar4) * pfVar12[-1];
              local_c = local_c + -1;
              pfVar5 = pfVar10;
              pfVar12 = pfVar12 + 2;
              pfVar14 = pfVar15;
              local_20 = local_20 + 2;
              local_1c = local_1c + 2;
            } while (local_c != 0);
          }
          local_14 = local_14 + param_2;
          local_8 = local_8 + param_2;
          local_10 = local_10 + param_2;
          iVar13 = local_8 * 2;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      uVar11 = param_2 & 0x80000001;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
      }
      if (uVar11 == 1) {
        return;
      }
    }
    iVar13 = param_2 - 1;
    local_20 = (float *)0x0;
    iVar7 = iVar13;
    if (3 < param_3) {
      param_4 = (param_3 - 4U >> 2) + 1;
      local_20 = (float *)(param_4 * 4);
      pfVar5 = param_1 + iVar6 + iVar13;
      do {
        fVar1 = *(float *)(in_EAX + iVar13 * 4);
        param_1[iVar7] = fVar1 + fVar1;
        fVar1 = *(float *)(in_EAX + 4 + iVar13 * 4);
        *pfVar5 = -(fVar1 + fVar1);
        pfVar5 = pfVar5 + param_2;
        iVar13 = iVar13 + param_2 * 2;
        fVar1 = *(float *)(in_EAX + iVar13 * 4);
        param_1[iVar7 + param_2] = fVar1 + fVar1;
        iVar7 = iVar7 + param_2 + param_2;
        fVar1 = *(float *)(in_EAX + 4 + iVar13 * 4);
        *pfVar5 = -(fVar1 + fVar1);
        pfVar5 = pfVar5 + param_2;
        iVar13 = iVar13 + param_2 * 2;
        fVar1 = *(float *)(in_EAX + iVar13 * 4);
        param_1[iVar7] = fVar1 + fVar1;
        iVar7 = iVar7 + param_2;
        fVar1 = *(float *)(in_EAX + 4 + iVar13 * 4);
        *pfVar5 = -(fVar1 + fVar1);
        iVar13 = iVar13 + param_2 * 2;
        fVar1 = *(float *)(in_EAX + iVar13 * 4);
        param_1[iVar7] = fVar1 + fVar1;
        iVar7 = iVar7 + param_2;
        fVar1 = *(float *)(in_EAX + 4 + iVar13 * 4);
        pfVar5[param_2] = -(fVar1 + fVar1);
        pfVar5 = pfVar5 + param_2 + param_2;
        iVar13 = iVar13 + param_2 * 2;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    if ((int)local_20 < param_3) {
      pfVar5 = (float *)(in_EAX + iVar13 * 4);
      pfVar12 = param_1 + iVar7;
      pfVar14 = param_1 + iVar7 + iVar6;
      iVar13 = param_3 - (int)local_20;
      do {
        *pfVar12 = *pfVar5 + *pfVar5;
        pfVar12 = pfVar12 + param_2;
        pfVar10 = pfVar5 + 1;
        pfVar5 = pfVar5 + param_2 * 2;
        *pfVar14 = -(*pfVar10 + *pfVar10);
        pfVar14 = pfVar14 + param_2;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
  return;
}


//// FUNCTION vorbis_dradb3 @ 00c5d240 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vorbis_dradb3(float *param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_EAX;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  int unaff_EDI;
  float *local_3c;
  float *local_38;
  float *local_30;
  float *local_2c;
  int local_28;
  float *local_24;
  float *local_8;
  
  iVar8 = unaff_EDI * (int)param_1;
  iVar12 = 0;
  iVar15 = 0;
  iVar9 = unaff_EDI * 2;
  local_30 = (float *)0x0;
  if (3 < (int)param_1) {
    local_3c = (float *)(param_2 + iVar8 * 8);
    pfVar6 = (float *)(param_2 + iVar8 * 4);
    local_24 = (float *)(((uint)(param_1 + -1) >> 2) + 1);
    local_30 = (float *)((int)local_24 * 4);
    do {
      fVar1 = in_EAX[iVar9 + -1] + in_EAX[iVar9 + -1];
      fVar2 = _DAT_00f7dfbc * fVar1 + in_EAX[iVar12];
      *(float *)(param_2 + iVar15 * 4) = fVar1 + in_EAX[iVar12];
      fVar1 = (in_EAX[iVar9] + in_EAX[iVar9]) * _DAT_00f7dfc0;
      *pfVar6 = fVar2 - fVar1;
      *local_3c = fVar1 + fVar2;
      pfVar6 = pfVar6 + unaff_EDI;
      local_3c = local_3c + unaff_EDI;
      iVar9 = iVar9 + unaff_EDI * 3;
      iVar12 = iVar12 + unaff_EDI * 3;
      fVar1 = in_EAX[iVar9 + -1] + in_EAX[iVar9 + -1];
      fVar2 = _DAT_00f7dfbc * fVar1 + in_EAX[iVar12];
      *(float *)(param_2 + (iVar15 + unaff_EDI) * 4) = fVar1 + in_EAX[iVar12];
      iVar15 = iVar15 + unaff_EDI + unaff_EDI;
      fVar1 = (in_EAX[iVar9] + in_EAX[iVar9]) * _DAT_00f7dfc0;
      *pfVar6 = fVar2 - fVar1;
      *local_3c = fVar1 + fVar2;
      pfVar6 = pfVar6 + unaff_EDI;
      local_3c = local_3c + unaff_EDI;
      iVar9 = iVar9 + unaff_EDI * 3;
      iVar12 = iVar12 + unaff_EDI * 3;
      fVar1 = in_EAX[iVar9 + -1] + in_EAX[iVar9 + -1];
      fVar2 = _DAT_00f7dfbc * fVar1 + in_EAX[iVar12];
      *(float *)(param_2 + iVar15 * 4) = fVar1 + in_EAX[iVar12];
      fVar1 = (in_EAX[iVar9] + in_EAX[iVar9]) * _DAT_00f7dfc0;
      *pfVar6 = fVar2 - fVar1;
      iVar15 = iVar15 + unaff_EDI;
      *local_3c = fVar1 + fVar2;
      iVar9 = iVar9 + unaff_EDI * 3;
      iVar12 = iVar12 + unaff_EDI * 3;
      fVar1 = in_EAX[iVar9 + -1] + in_EAX[iVar9 + -1];
      fVar2 = _DAT_00f7dfbc * fVar1 + in_EAX[iVar12];
      *(float *)(param_2 + iVar15 * 4) = fVar1 + in_EAX[iVar12];
      iVar15 = iVar15 + unaff_EDI;
      fVar1 = (in_EAX[iVar9] + in_EAX[iVar9]) * _DAT_00f7dfc0;
      pfVar6[unaff_EDI] = fVar2 - fVar1;
      local_3c[unaff_EDI] = fVar1 + fVar2;
      pfVar6 = pfVar6 + unaff_EDI + unaff_EDI;
      local_3c = local_3c + unaff_EDI + unaff_EDI;
      iVar9 = iVar9 + unaff_EDI * 3;
      iVar12 = iVar12 + unaff_EDI * 3;
      local_24 = (float *)((int)local_24 + -1);
    } while (local_24 != (float *)0x0);
  }
  if ((int)local_30 < (int)param_1) {
    local_24 = (float *)(param_2 + iVar15 * 4);
    local_3c = (float *)(param_2 + (iVar8 * 2 + iVar15) * 4);
    local_38 = (float *)(param_2 + (iVar15 + iVar8) * 4);
    pfVar6 = in_EAX + iVar9;
    pfVar7 = in_EAX + iVar12;
    iVar9 = (int)param_1 - (int)local_30;
    do {
      fVar1 = pfVar6[-1] + pfVar6[-1];
      fVar2 = _DAT_00f7dfbc * fVar1 + *pfVar7;
      *local_24 = fVar1 + *pfVar7;
      fVar1 = (*pfVar6 + *pfVar6) * _DAT_00f7dfc0;
      *local_38 = fVar2 - fVar1;
      *local_3c = fVar1 + fVar2;
      local_24 = local_24 + unaff_EDI;
      local_38 = local_38 + unaff_EDI;
      local_3c = local_3c + unaff_EDI;
      pfVar6 = pfVar6 + unaff_EDI * 3;
      pfVar7 = pfVar7 + unaff_EDI * 3;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((unaff_EDI != 1) && (0 < (int)param_1)) {
    pfVar6 = in_EAX + unaff_EDI * 2;
    local_24 = (float *)0x0;
    local_28 = 0;
    local_2c = (float *)(param_2 + iVar8 * 8);
    local_8 = param_1;
    do {
      if (2 < unaff_EDI) {
        param_1 = local_2c;
        local_38 = param_4;
        iVar9 = (unaff_EDI - 3U >> 1) + 1;
        pfVar7 = (float *)(param_3 + 4);
        pfVar10 = pfVar6;
        pfVar13 = pfVar6;
        pfVar16 = in_EAX;
        local_3c = (float *)(param_2 + ((local_28 - (int)local_24) + iVar8) * 4);
        local_30 = (float *)(param_2 + (local_28 - (int)local_24) * 4);
        do {
          pfVar14 = pfVar13 + -2;
          pfVar11 = pfVar10 + 2;
          pfVar17 = pfVar16 + 2;
          fVar1 = _DAT_00f7dfbc * (pfVar13[-3] + pfVar10[1]) + pfVar16[1];
          local_30[1] = pfVar13[-3] + pfVar10[1] + pfVar16[1];
          fVar2 = _DAT_00f7dfbc * (*pfVar11 - *pfVar14) + *pfVar17;
          local_30[2] = (*pfVar11 - *pfVar14) + *pfVar17;
          fVar5 = (pfVar10[1] - pfVar13[-3]) * _DAT_00f7dfc0;
          fVar4 = (*pfVar11 + *pfVar14) * _DAT_00f7dfc0;
          fVar3 = fVar1 - fVar4;
          fVar4 = fVar4 + fVar1;
          fVar1 = fVar5 + fVar2;
          fVar2 = fVar2 - fVar5;
          local_3c[1] = fVar3 * pfVar7[-1] - fVar1 * *pfVar7;
          local_3c[2] = fVar1 * pfVar7[-1] + fVar3 * *pfVar7;
          param_1[1] = fVar4 * *local_38 -
                       fVar2 * *(float *)((int)pfVar7 + ((int)param_4 - param_3));
          param_1[2] = fVar2 * *local_38 +
                       fVar4 * *(float *)((int)pfVar7 + ((int)param_4 - param_3));
          local_38 = local_38 + 2;
          iVar9 = iVar9 + -1;
          pfVar7 = pfVar7 + 2;
          pfVar10 = pfVar11;
          pfVar13 = pfVar14;
          pfVar16 = pfVar17;
          param_1 = param_1 + 2;
          local_3c = local_3c + 2;
          local_30 = local_30 + 2;
        } while (iVar9 != 0);
      }
      local_2c = local_2c + unaff_EDI;
      local_28 = local_28 + unaff_EDI * 3;
      local_24 = (float *)((int)local_24 + unaff_EDI * 2);
      pfVar6 = pfVar6 + unaff_EDI * 3;
      in_EAX = in_EAX + unaff_EDI * 3;
      local_8 = (float *)((int)local_8 + -1);
    } while (local_8 != (float *)0x0);
  }
  return;
}


//// FUNCTION vorbis_dradb4 @ 00c5d6f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
vorbis_dradb4(uint param_1,int param_2,int param_3,float *param_4,float *param_5,float *param_6)

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
  float fVar13;
  float fVar14;
  float fVar15;
  int in_EAX;
  float *pfVar16;
  int iVar17;
  uint uVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  float *pfVar24;
  int iVar25;
  float *local_5c;
  float *local_58;
  float *local_54;
  float *local_50;
  float *local_48;
  float *local_44;
  float *local_3c;
  float *local_38;
  float *local_34;
  float *local_30;
  float *local_2c;
  float *local_10;
  int local_c;
  int local_8;
  
  iVar21 = param_1 * param_3;
  iVar17 = 0;
  iVar25 = param_1 * 4;
  local_5c = (float *)0x0;
  local_44 = (float *)0x0;
  if (3 < param_3) {
    local_54 = (float *)(param_2 + iVar21 * 8);
    local_58 = (float *)(param_2 + iVar21 * 4);
    local_50 = (float *)(param_2 + iVar21 * 0xc);
    local_30 = (float *)((param_3 - 4U >> 2) + 1);
    pfVar16 = (float *)(in_EAX + -4 + param_1 * 0x10);
    local_44 = (float *)((int)local_30 * 4);
    pfVar19 = (float *)(in_EAX + param_1 * 8);
    do {
      fVar1 = pfVar19[-1] + pfVar19[-1];
      fVar3 = *pfVar19 + *pfVar19;
      fVar4 = *(float *)(in_EAX + iVar17 * 4) - *pfVar16;
      fVar2 = *pfVar16 + *(float *)(in_EAX + iVar17 * 4);
      *(float *)(param_2 + (int)local_5c * 4) = fVar2 + fVar1;
      *local_58 = fVar4 - fVar3;
      *local_54 = fVar2 - fVar1;
      *local_50 = fVar4 + fVar3;
      local_58 = local_58 + param_1;
      local_54 = local_54 + param_1;
      local_50 = local_50 + param_1;
      pfVar24 = pfVar19 + param_1 * 4;
      fVar1 = pfVar19[param_1 * 4 + -1] + pfVar19[param_1 * 4 + -1];
      iVar17 = iVar17 + iVar25;
      pfVar16 = pfVar16 + param_1 * 4;
      fVar3 = *pfVar24 + *pfVar24;
      fVar4 = *(float *)(in_EAX + iVar17 * 4) - *pfVar16;
      fVar2 = *pfVar16 + *(float *)(in_EAX + iVar17 * 4);
      *(float *)(param_2 + ((int)local_5c + param_1) * 4) = fVar2 + fVar1;
      iVar22 = (int)local_5c + param_1 + param_1;
      *local_58 = fVar4 - fVar3;
      *local_54 = fVar2 - fVar1;
      *local_50 = fVar4 + fVar3;
      local_58 = local_58 + param_1;
      local_54 = local_54 + param_1;
      local_50 = local_50 + param_1;
      iVar17 = iVar17 + iVar25;
      fVar1 = pfVar24[param_1 * 4 + -1] + pfVar24[param_1 * 4 + -1];
      pfVar16 = pfVar16 + param_1 * 4;
      fVar3 = pfVar24[param_1 * 4] + pfVar24[param_1 * 4];
      fVar4 = *(float *)(in_EAX + iVar17 * 4) - *pfVar16;
      fVar2 = *pfVar16 + *(float *)(in_EAX + iVar17 * 4);
      *(float *)(param_2 + iVar22 * 4) = fVar2 + fVar1;
      iVar22 = iVar22 + param_1;
      *local_58 = fVar4 - fVar3;
      *local_54 = fVar2 - fVar1;
      *local_50 = fVar4 + fVar3;
      fVar2 = pfVar24[param_1 * 8 + -1] + pfVar24[param_1 * 8 + -1];
      iVar17 = iVar17 + iVar25;
      fVar1 = pfVar24[param_1 * 8];
      fVar1 = fVar1 + fVar1;
      pfVar16 = pfVar16 + param_1 * 4;
      fVar4 = *(float *)(in_EAX + iVar17 * 4) - *pfVar16;
      fVar3 = *pfVar16 + *(float *)(in_EAX + iVar17 * 4);
      *(float *)(param_2 + iVar22 * 4) = fVar3 + fVar2;
      local_5c = (float *)(iVar22 + param_1);
      local_58[param_1] = fVar4 - fVar1;
      local_54[param_1] = fVar3 - fVar2;
      local_50[param_1] = fVar4 + fVar1;
      local_58 = local_58 + param_1 + param_1;
      local_54 = local_54 + param_1 + param_1;
      local_50 = local_50 + param_1 + param_1;
      iVar17 = iVar17 + iVar25;
      pfVar16 = pfVar16 + param_1 * 4;
      pfVar19 = pfVar24 + param_1 * 8 + param_1 * 4;
      local_30 = (float *)((int)local_30 + -1);
    } while (local_30 != (float *)0x0);
  }
  if ((int)local_44 < param_3) {
    local_50 = (float *)(param_2 + (int)local_5c * 4);
    local_48 = (float *)(in_EAX + iVar17 * 4);
    local_54 = (float *)(param_2 + ((int)local_5c + iVar21) * 4);
    local_30 = (float *)(in_EAX + (iVar17 + param_1 * 2) * 4);
    local_58 = (float *)(param_2 + ((int)local_5c + iVar21 * 2) * 4);
    local_5c = (float *)(param_2 + ((int)local_5c + iVar21 * 3) * 4);
    local_3c = (float *)(in_EAX + -4 + iVar17 * 4 + param_1 * 0x10);
    local_34 = (float *)(param_3 - (int)local_44);
    do {
      fVar5 = local_30[-1] + local_30[-1];
      fVar6 = *local_30 + *local_30;
      fVar1 = *local_48;
      fVar2 = *local_3c;
      fVar3 = *local_3c;
      fVar4 = *local_48;
      *local_50 = fVar3 + fVar4 + fVar5;
      *local_54 = (fVar1 - fVar2) - fVar6;
      *local_58 = (fVar3 + fVar4) - fVar5;
      *local_5c = (fVar1 - fVar2) + fVar6;
      local_50 = local_50 + param_1;
      local_54 = local_54 + param_1;
      local_58 = local_58 + param_1;
      local_5c = local_5c + param_1;
      local_30 = local_30 + param_1 * 4;
      local_3c = local_3c + param_1 * 4;
      local_48 = local_48 + param_1 * 4;
      local_34 = (float *)((int)local_34 + -1);
    } while (local_34 != (float *)0x0);
  }
  if (1 < (int)param_1) {
    if (param_1 != 2) {
      local_5c = (float *)0x0;
      if (0 < param_3) {
        local_54 = (float *)0x0;
        local_30 = (float *)(iVar21 * 3);
        local_8 = param_3;
        do {
          iVar17 = (int)local_5c * 4 + param_1 * 2;
          if (2 < (int)param_1) {
            iVar22 = (int)local_5c * 4 - (int)local_54;
            local_10 = param_6;
            pfVar19 = (float *)(in_EAX + iVar17 * 4);
            local_c = (param_1 - 3 >> 1) + 1;
            pfVar16 = param_4 + 1;
            local_50 = (float *)(param_2 + ((int)local_30 + (int)local_5c * 4) * 4);
            local_48 = (float *)(param_2 + ((iVar21 * 2 - (int)local_54) + (int)local_5c * 4) * 4);
            local_44 = pfVar19;
            local_3c = (float *)(in_EAX + (iVar17 + param_1 * 2) * 4);
            local_38 = (float *)(param_2 + iVar22 * 4);
            local_34 = (float *)(param_2 + (iVar22 + iVar21) * 4);
            local_2c = (float *)(in_EAX + (int)local_5c * 0x10);
            do {
              fVar1 = local_2c[2];
              pfVar24 = local_44 + -2;
              fVar2 = local_3c[-2];
              pfVar20 = pfVar19 + 2;
              fVar15 = local_2c[2] - local_3c[-2];
              fVar3 = *pfVar20;
              fVar4 = *pfVar24;
              fVar5 = *pfVar20;
              fVar6 = *pfVar24;
              fVar7 = local_2c[1];
              fVar8 = local_3c[-3];
              fVar9 = local_2c[1];
              fVar10 = local_3c[-3];
              fVar11 = pfVar19[1];
              fVar12 = local_44[-3];
              fVar13 = pfVar19[1];
              fVar14 = local_44[-3];
              local_38[1] = fVar9 + fVar10 + fVar13 + fVar14;
              fVar9 = (fVar9 + fVar10) - (fVar13 + fVar14);
              local_38[2] = (fVar3 - fVar4) + fVar15;
              fVar15 = fVar15 - (fVar3 - fVar4);
              fVar4 = (fVar7 - fVar8) - (fVar5 + fVar6);
              fVar5 = (fVar7 - fVar8) + fVar5 + fVar6;
              fVar3 = (fVar11 - fVar12) + fVar1 + fVar2;
              fVar1 = (fVar1 + fVar2) - (fVar11 - fVar12);
              local_34[1] = fVar4 * pfVar16[-1] - fVar3 * *pfVar16;
              local_34[2] = fVar3 * pfVar16[-1] + fVar4 * *pfVar16;
              local_48[1] = fVar9 * *(float *)((int)local_10 + ((int)param_5 - (int)param_6)) -
                            fVar15 * *(float *)((int)pfVar16 + ((int)param_5 - (int)param_4));
              local_48[2] = fVar9 * *(float *)((int)pfVar16 + ((int)param_5 - (int)param_4)) +
                            fVar15 * *(float *)((int)local_10 + ((int)param_5 - (int)param_6));
              local_50[1] = fVar5 * *local_10 -
                            fVar1 * *(float *)((int)pfVar16 + ((int)param_6 - (int)param_4));
              local_c = local_c + -1;
              local_50[2] = fVar5 * *(float *)((int)pfVar16 + ((int)param_6 - (int)param_4)) +
                            fVar1 * *local_10;
              pfVar16 = pfVar16 + 2;
              pfVar19 = pfVar20;
              local_50 = local_50 + 2;
              local_48 = local_48 + 2;
              local_44 = pfVar24;
              local_3c = local_3c + -2;
              local_38 = local_38 + 2;
              local_34 = local_34 + 2;
              local_2c = local_2c + 2;
              local_10 = local_10 + 2;
            } while (local_c != 0);
          }
          local_5c = (float *)((int)local_5c + param_1);
          local_54 = (float *)((int)local_54 + param_1 * 3);
          local_30 = (float *)((int)local_30 + param_1 * -3);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      uVar18 = param_1 & 0x80000001;
      if ((int)uVar18 < 0) {
        uVar18 = (uVar18 - 1 | 0xfffffffe) + 1;
      }
      if (uVar18 == 1) {
        return;
      }
    }
    param_6 = (float *)(param_1 - 1);
    iVar17 = param_1 * 3;
    local_44 = (float *)0x0;
    uVar18 = param_1;
    if (3 < param_3) {
      param_4 = (float *)(param_2 + (int)((int)param_6 + iVar21) * 4);
      param_5 = (float *)(param_2 + ((int)param_6 + iVar21 * 2) * 4);
      local_50 = (float *)(param_2 + ((int)param_6 + iVar21 * 3) * 4);
      local_8 = (param_3 - 4U >> 2) + 1;
      local_44 = (float *)(local_8 * 4);
      do {
        fVar4 = *(float *)(in_EAX + uVar18 * 4) + *(float *)(in_EAX + iVar17 * 4);
        fVar1 = *(float *)(in_EAX + iVar17 * 4) - *(float *)(in_EAX + uVar18 * 4);
        fVar2 = *(float *)(in_EAX + -4 + uVar18 * 4) - *(float *)(in_EAX + -4 + iVar17 * 4);
        fVar3 = *(float *)(in_EAX + -4 + uVar18 * 4) + *(float *)(in_EAX + -4 + iVar17 * 4);
        *(float *)(param_2 + (int)param_6 * 4) = fVar3 + fVar3;
        *param_4 = (fVar2 - fVar4) * _DAT_00f7dfc4;
        *param_5 = fVar1 + fVar1;
        *local_50 = -((fVar4 + fVar2) * _DAT_00f7dfc4);
        pfVar19 = param_4 + param_1;
        pfVar16 = param_5 + param_1;
        local_50 = local_50 + param_1;
        iVar22 = uVar18 + iVar25;
        iVar17 = iVar17 + iVar25;
        fVar4 = *(float *)(in_EAX + iVar22 * 4) + *(float *)(in_EAX + iVar17 * 4);
        fVar1 = *(float *)(in_EAX + iVar17 * 4) - *(float *)(in_EAX + iVar22 * 4);
        fVar2 = *(float *)(in_EAX + -4 + iVar22 * 4) - *(float *)(in_EAX + -4 + iVar17 * 4);
        fVar3 = *(float *)(in_EAX + -4 + iVar22 * 4) + *(float *)(in_EAX + -4 + iVar17 * 4);
        *(float *)(param_2 + ((int)param_6 + param_1) * 4) = fVar3 + fVar3;
        *pfVar19 = (fVar2 - fVar4) * _DAT_00f7dfc4;
        *pfVar16 = fVar1 + fVar1;
        *local_50 = -((fVar4 + fVar2) * _DAT_00f7dfc4);
        iVar23 = (int)param_6 + param_1 + param_1;
        pfVar19 = pfVar19 + param_1;
        pfVar16 = pfVar16 + param_1;
        local_50 = local_50 + param_1;
        iVar22 = iVar22 + iVar25;
        iVar17 = iVar17 + iVar25;
        fVar4 = *(float *)(in_EAX + iVar22 * 4) + *(float *)(in_EAX + iVar17 * 4);
        fVar1 = *(float *)(in_EAX + iVar17 * 4) - *(float *)(in_EAX + iVar22 * 4);
        fVar2 = *(float *)(in_EAX + -4 + iVar22 * 4) - *(float *)(in_EAX + -4 + iVar17 * 4);
        fVar3 = *(float *)(in_EAX + -4 + iVar22 * 4) + *(float *)(in_EAX + -4 + iVar17 * 4);
        *(float *)(param_2 + iVar23 * 4) = fVar3 + fVar3;
        *pfVar19 = (fVar2 - fVar4) * _DAT_00f7dfc4;
        *pfVar16 = fVar1 + fVar1;
        *local_50 = -((fVar4 + fVar2) * _DAT_00f7dfc4);
        iVar23 = iVar23 + param_1;
        iVar22 = iVar22 + iVar25;
        iVar17 = iVar17 + iVar25;
        fVar4 = *(float *)(in_EAX + iVar22 * 4) + *(float *)(in_EAX + iVar17 * 4);
        fVar1 = *(float *)(in_EAX + iVar17 * 4) - *(float *)(in_EAX + iVar22 * 4);
        fVar2 = *(float *)(in_EAX + -4 + iVar22 * 4) - *(float *)(in_EAX + -4 + iVar17 * 4);
        fVar3 = *(float *)(in_EAX + -4 + iVar22 * 4) + *(float *)(in_EAX + -4 + iVar17 * 4);
        *(float *)(param_2 + iVar23 * 4) = fVar3 + fVar3;
        pfVar19[param_1] = (fVar2 - fVar4) * _DAT_00f7dfc4;
        pfVar16[param_1] = fVar1 + fVar1;
        local_50[param_1] = -((fVar4 + fVar2) * _DAT_00f7dfc4);
        param_6 = (float *)(iVar23 + param_1);
        param_4 = pfVar19 + param_1 + param_1;
        param_5 = pfVar16 + param_1 + param_1;
        local_50 = local_50 + param_1 + param_1;
        uVar18 = iVar22 + iVar25;
        iVar17 = iVar17 + iVar25;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    if ((int)local_44 < param_3) {
      pfVar19 = (float *)(in_EAX + uVar18 * 4);
      pfVar16 = (float *)(in_EAX + iVar17 * 4);
      param_4 = (float *)(param_2 + (int)((int)param_6 + iVar21) * 4);
      pfVar24 = (float *)(param_2 + ((int)param_6 + iVar21 * 2) * 4);
      pfVar20 = (float *)(param_2 + (int)param_6 * 4 + iVar21 * 0xc);
      iVar25 = param_3 - (int)local_44;
      param_6 = (float *)(param_2 + (int)param_6 * 4);
      do {
        fVar1 = *pfVar16;
        fVar2 = *pfVar19;
        fVar3 = *pfVar16;
        fVar4 = *pfVar19;
        fVar5 = pfVar19[-1];
        fVar6 = pfVar16[-1];
        *param_6 = pfVar16[-1] + pfVar19[-1] + pfVar16[-1] + pfVar19[-1];
        *param_4 = ((fVar5 - fVar6) - (fVar1 + fVar2)) * _DAT_00f7dfc4;
        param_6 = param_6 + param_1;
        param_4 = param_4 + param_1;
        *pfVar24 = (fVar3 - fVar4) + (fVar3 - fVar4);
        pfVar24 = pfVar24 + param_1;
        pfVar19 = pfVar19 + param_1 * 4;
        pfVar16 = pfVar16 + param_1 * 4;
        *pfVar20 = -((fVar1 + fVar2 + (fVar5 - fVar6)) * _DAT_00f7dfc4);
        pfVar20 = pfVar20 + param_1;
        iVar25 = iVar25 + -1;
      } while (iVar25 != 0);
    }
  }
  return;
}


//// FUNCTION vorbis_dradbg @ 00c5e070 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
vorbis_dradbg(float *param_1,float *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_EAX;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int unaff_ESI;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  float10 fVar24;
  float10 fVar25;
  int local_74;
  int local_70;
  int local_6c;
  float *local_68;
  int local_64;
  int local_60;
  int local_5c;
  float *local_54;
  float *local_4c;
  float *local_48;
  float *local_44;
  float *local_40;
  float *local_3c;
  float *local_38;
  float *local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar17 = unaff_ESI * param_3;
  fVar24 = (float10)fcos((float10)_DAT_00f7dfc8 / (float10)param_3);
  iVar18 = unaff_ESI * param_4;
  fVar25 = (float10)fsin((float10)_DAT_00f7dfc8 / (float10)param_3);
  iVar19 = unaff_ESI + -1 >> 1;
  iVar20 = param_3 + 1 >> 1;
  if (unaff_ESI < param_4) {
    local_70 = 0;
    if (0 < unaff_ESI) {
      do {
        local_64 = 0;
        local_74 = local_70;
        local_5c = local_70;
        if (3 < param_4) {
          local_2c = (float *)((param_4 - 4U >> 2) + 1);
          local_64 = (int)local_2c * 4;
          do {
            in_EAX[local_74] = param_1[local_5c];
            in_EAX[local_74 + unaff_ESI] = param_1[local_5c + iVar17];
            local_74 = local_74 + unaff_ESI + unaff_ESI;
            local_5c = local_5c + iVar17 + iVar17;
            in_EAX[local_74] = param_1[local_5c];
            local_74 = local_74 + unaff_ESI;
            local_5c = local_5c + iVar17;
            in_EAX[local_74] = param_1[local_5c];
            local_74 = local_74 + unaff_ESI;
            local_5c = local_5c + iVar17;
            local_2c = (float *)((int)local_2c + -1);
          } while (local_2c != (float *)0x0);
        }
        if (local_64 < param_4) {
          local_2c = in_EAX + local_74;
          local_30 = param_1 + local_5c;
          local_34 = (float *)(param_4 - local_64);
          do {
            *local_2c = *local_30;
            local_2c = local_2c + unaff_ESI;
            local_30 = local_30 + iVar17;
            local_34 = (float *)((int)local_34 + -1);
          } while (local_34 != (float *)0x0);
        }
        local_70 = local_70 + 1;
      } while (local_70 < unaff_ESI);
    }
  }
  else {
    local_70 = 0;
    local_74 = 0;
    if (0 < param_4) {
      local_38 = param_1 + 2;
      local_34 = in_EAX + 2;
      local_3c = (float *)param_4;
      do {
        local_60 = local_74;
        iVar15 = 0;
        iVar14 = local_70;
        if (3 < unaff_ESI) {
          local_4c = local_38;
          local_2c = (float *)((unaff_ESI - 4U >> 2) + 1);
          iVar15 = (int)local_2c * 4;
          iVar14 = local_70 + iVar15;
          local_60 = local_74 + iVar15;
          pfVar22 = local_34;
          do {
            pfVar22[-2] = local_4c[-2];
            pfVar22[-1] = local_4c[-1];
            *pfVar22 = *local_4c;
            pfVar22[1] = local_4c[1];
            local_4c = local_4c + 4;
            pfVar22 = pfVar22 + 4;
            local_2c = (float *)((int)local_2c + -1);
          } while (local_2c != (float *)0x0);
        }
        if (iVar15 < unaff_ESI) {
          pfVar22 = in_EAX + iVar14;
          local_30 = param_1 + local_60;
          local_2c = (float *)(unaff_ESI - iVar15);
          do {
            *pfVar22 = *local_30;
            local_30 = local_30 + 1;
            pfVar22 = pfVar22 + 1;
            local_2c = (float *)((int)local_2c + -1);
          } while (local_2c != (float *)0x0);
        }
        local_70 = local_70 + unaff_ESI;
        local_34 = local_34 + unaff_ESI;
        local_74 = local_74 + iVar17;
        local_38 = local_38 + iVar17;
        local_3c = (float *)((int)local_3c + -1);
      } while (local_3c != (float *)0x0);
    }
  }
  iVar14 = iVar18 * param_3;
  local_70 = 0;
  if (1 < iVar20) {
    local_34 = (float *)(iVar20 + -1);
    iVar15 = iVar14;
    local_68 = (float *)(unaff_ESI * 2);
    do {
      iVar15 = iVar15 - iVar18;
      local_70 = local_70 + iVar18;
      local_64 = 0;
      iVar12 = local_70;
      pfVar22 = local_68;
      local_60 = iVar15;
      if (3 < param_4) {
        local_2c = (float *)((param_4 - 4U >> 2) + 1);
        local_64 = (int)local_2c * 4;
        do {
          in_EAX[iVar12] = param_1[(int)pfVar22 + -1] + param_1[(int)pfVar22 + -1];
          in_EAX[local_60] = param_1[(int)pfVar22] + param_1[(int)pfVar22];
          iVar21 = (int)pfVar22 + iVar17;
          in_EAX[iVar12 + unaff_ESI] = param_1[iVar21 + -1] + param_1[iVar21 + -1];
          iVar12 = iVar12 + unaff_ESI + unaff_ESI;
          in_EAX[local_60 + unaff_ESI] = param_1[iVar21] + param_1[iVar21];
          local_60 = local_60 + unaff_ESI + unaff_ESI;
          iVar21 = iVar21 + iVar17;
          in_EAX[iVar12] = param_1[iVar21 + -1] + param_1[iVar21 + -1];
          iVar12 = iVar12 + unaff_ESI;
          in_EAX[local_60] = param_1[iVar21] + param_1[iVar21];
          local_60 = local_60 + unaff_ESI;
          iVar21 = iVar21 + iVar17;
          in_EAX[iVar12] = param_1[iVar21 + -1] + param_1[iVar21 + -1];
          iVar12 = iVar12 + unaff_ESI;
          in_EAX[local_60] = param_1[iVar21] + param_1[iVar21];
          local_60 = local_60 + unaff_ESI;
          pfVar22 = (float *)(iVar21 + iVar17);
          local_2c = (float *)((int)local_2c + -1);
        } while (local_2c != (float *)0x0);
      }
      if (local_64 < param_4) {
        local_30 = in_EAX + local_60;
        pfVar7 = in_EAX + iVar12;
        local_64 = param_4 - local_64;
        pfVar22 = param_1 + (int)pfVar22;
        do {
          *pfVar7 = pfVar22[-1] + pfVar22[-1];
          *local_30 = *pfVar22 + *pfVar22;
          pfVar7 = pfVar7 + unaff_ESI;
          local_30 = local_30 + unaff_ESI;
          pfVar22 = pfVar22 + iVar17;
          local_64 = local_64 + -1;
        } while (local_64 != 0);
      }
      local_68 = (float *)((int)local_68 + unaff_ESI * 2);
      local_34 = (float *)((int)local_34 + -1);
    } while (local_34 != (float *)0x0);
  }
  if (unaff_ESI != 1) {
    if (iVar19 < param_4) {
      local_70 = 0;
      local_4c = (float *)0x0;
      if (1 < iVar20) {
        local_48 = (float *)(iVar20 + -1);
        local_74 = iVar14;
        do {
          local_70 = local_70 + iVar18;
          local_74 = local_74 - iVar18;
          local_4c = (float *)((int)local_4c + unaff_ESI * 2);
          if (2 < unaff_ESI) {
            local_44 = (float *)((unaff_ESI - 3U >> 1) + 1);
            iVar15 = (int)local_4c;
            local_30 = local_4c;
            do {
              local_30 = (float *)((int)local_30 + -2);
              iVar15 = iVar15 + 2;
              local_68 = (float *)((local_70 - (int)local_4c) + iVar15);
              local_6c = (local_74 - (int)local_4c) + iVar15;
              local_64 = 0;
              iVar12 = iVar15;
              local_3c = local_30;
              if (3 < param_4) {
                local_2c = (float *)((param_4 - 4U >> 2) + 1);
                local_64 = (int)local_2c * 4;
                do {
                  in_EAX[(int)local_68 + -1] = param_1[(int)local_3c + -1] + param_1[iVar12 + -1];
                  in_EAX[local_6c + -1] = param_1[iVar12 + -1] - param_1[(int)local_3c + -1];
                  in_EAX[(int)local_68] = param_1[iVar12] - param_1[(int)local_3c];
                  in_EAX[local_6c] = param_1[iVar12] + param_1[(int)local_3c];
                  iVar16 = (int)local_68 + unaff_ESI;
                  local_6c = local_6c + unaff_ESI;
                  iVar21 = (int)local_3c + iVar17;
                  iVar12 = iVar12 + iVar17;
                  in_EAX[iVar16 + -1] = param_1[iVar21 + -1] + param_1[iVar12 + -1];
                  in_EAX[local_6c + -1] = param_1[iVar12 + -1] - param_1[iVar21 + -1];
                  in_EAX[iVar16] = param_1[iVar12] - param_1[iVar21];
                  in_EAX[local_6c] = param_1[iVar12] + param_1[iVar21];
                  iVar16 = iVar16 + unaff_ESI;
                  local_6c = local_6c + unaff_ESI;
                  iVar21 = iVar21 + iVar17;
                  iVar12 = iVar12 + iVar17;
                  in_EAX[iVar16 + -1] = param_1[iVar21 + -1] + param_1[iVar12 + -1];
                  in_EAX[local_6c + -1] = param_1[iVar12 + -1] - param_1[iVar21 + -1];
                  in_EAX[iVar16] = param_1[iVar12] - param_1[iVar21];
                  in_EAX[local_6c] = param_1[iVar12] + param_1[iVar21];
                  iVar16 = iVar16 + unaff_ESI;
                  local_6c = local_6c + unaff_ESI;
                  iVar12 = iVar12 + iVar17;
                  iVar21 = iVar21 + iVar17;
                  in_EAX[iVar16 + -1] = param_1[iVar21 + -1] + param_1[iVar12 + -1];
                  in_EAX[local_6c + -1] = param_1[iVar12 + -1] - param_1[iVar21 + -1];
                  in_EAX[iVar16] = param_1[iVar12] - param_1[iVar21];
                  in_EAX[local_6c] = param_1[iVar12] + param_1[iVar21];
                  local_68 = (float *)(iVar16 + unaff_ESI);
                  local_6c = local_6c + unaff_ESI;
                  iVar12 = iVar12 + iVar17;
                  local_3c = (float *)(iVar21 + iVar17);
                  local_2c = (float *)((int)local_2c + -1);
                } while (local_2c != (float *)0x0);
              }
              if (local_64 < param_4) {
                local_34 = in_EAX + (int)local_68;
                local_40 = in_EAX + local_6c;
                pfVar22 = param_1 + (int)local_3c;
                pfVar7 = param_1 + iVar12;
                local_3c = (float *)(param_4 - local_64);
                do {
                  local_34[-1] = pfVar22[-1] + pfVar7[-1];
                  local_40[-1] = pfVar7[-1] - pfVar22[-1];
                  *local_34 = *pfVar7 - *pfVar22;
                  *local_40 = *pfVar22 + *pfVar7;
                  local_34 = local_34 + unaff_ESI;
                  local_40 = local_40 + unaff_ESI;
                  pfVar22 = pfVar22 + iVar17;
                  pfVar7 = pfVar7 + iVar17;
                  local_3c = (float *)((int)local_3c + -1);
                } while (local_3c != (float *)0x0);
              }
              local_44 = (float *)((int)local_44 + -1);
            } while (local_44 != (float *)0x0);
          }
          local_48 = (float *)((int)local_48 + -1);
        } while (local_48 != (float *)0x0);
      }
    }
    else if (1 < iVar20) {
      local_44 = in_EAX + iVar14;
      local_64 = iVar20 + -1;
      local_34 = param_1;
      local_30 = in_EAX;
      do {
        local_30 = local_30 + iVar18;
        local_44 = local_44 + -iVar18;
        local_34 = local_34 + unaff_ESI * 2;
        if (0 < param_4) {
          local_60 = param_4;
          pfVar22 = local_34;
          local_4c = local_30;
          local_48 = local_44;
          do {
            if (2 < unaff_ESI) {
              local_40 = local_48;
              local_3c = local_4c;
              local_2c = (float *)((unaff_ESI - 3U >> 1) + 1);
              pfVar7 = pfVar22;
              pfVar9 = pfVar22;
              do {
                pfVar11 = pfVar9 + 2;
                pfVar13 = pfVar7 + -2;
                local_3c[1] = pfVar9[1] + pfVar7[-3];
                local_40[1] = pfVar9[1] - pfVar7[-3];
                local_3c[2] = *pfVar11 - *pfVar13;
                local_40[2] = *pfVar13 + *pfVar11;
                local_2c = (float *)((int)local_2c + -1);
                pfVar7 = pfVar13;
                pfVar9 = pfVar11;
                local_40 = local_40 + 2;
                local_3c = local_3c + 2;
              } while (local_2c != (float *)0x0);
            }
            local_48 = local_48 + unaff_ESI;
            local_4c = local_4c + unaff_ESI;
            pfVar22 = pfVar22 + iVar17;
            local_60 = local_60 + -1;
          } while (local_60 != 0);
        }
        local_64 = local_64 + -1;
      } while (local_64 != 0);
    }
  }
  local_74 = param_3 * param_5;
  iVar17 = (param_3 + -1) * param_5;
  local_70 = 0;
  if (1 < iVar20) {
    fVar1 = 0.0;
    iVar15 = local_74 - param_5;
    local_30 = (float *)(param_6 + 8);
    local_34 = (float *)(param_6 + 8 + local_74 * 4);
    local_10 = iVar20 + -1;
    fVar2 = 1.0;
    do {
      local_70 = local_70 + param_5;
      local_30 = local_30 + param_5;
      fVar5 = (float)fVar24 * fVar2 - fVar1 * (float)fVar25;
      local_74 = local_74 - param_5;
      local_34 = local_34 + -param_5;
      fVar1 = fVar1 * (float)fVar24 + fVar2 * (float)fVar25;
      local_4c = (float *)param_5;
      local_64 = 0;
      iVar12 = local_74;
      local_60 = local_70;
      local_2c = (float *)iVar17;
      if (3 < param_5) {
        local_40 = (float *)(param_7 + 8 + iVar17 * 4);
        local_44 = (float *)(param_7 + 8);
        local_48 = (float *)(param_7 + 8 + param_5 * 4);
        iVar21 = (param_5 - 4U >> 2) + 1;
        local_64 = iVar21 * 4;
        local_60 = local_70 + local_64;
        local_4c = (float *)(local_64 + param_5);
        iVar12 = local_74 + local_64;
        local_2c = (float *)(iVar17 + local_64);
        pfVar22 = local_30;
        local_3c = local_34;
        do {
          pfVar22[-2] = fVar5 * local_48[-2] + local_44[-2];
          local_3c[-2] = fVar1 * local_40[-2];
          pfVar22[-1] = fVar5 * local_48[-1] + local_44[-1];
          local_3c[-1] = fVar1 * local_40[-1];
          *pfVar22 = fVar5 * *local_48 + *local_44;
          *local_3c = fVar1 * *local_40;
          pfVar22[1] = fVar5 * local_48[1] + local_44[1];
          local_3c[1] = fVar1 * local_40[1];
          local_48 = local_48 + 4;
          local_44 = local_44 + 4;
          local_40 = local_40 + 4;
          iVar21 = iVar21 + -1;
          pfVar22 = pfVar22 + 4;
          local_3c = local_3c + 4;
        } while (iVar21 != 0);
      }
      if (local_64 < param_5) {
        local_40 = (float *)(param_6 + iVar12 * 4);
        local_68 = (float *)(param_7 + (int)local_2c * 4);
        local_3c = (float *)(param_6 + local_60 * 4);
        local_48 = (float *)(param_7 + local_64 * 4);
        local_44 = (float *)(param_7 + (int)local_4c * 4);
        local_64 = param_5 - local_64;
        do {
          *local_3c = fVar5 * *local_44 + *local_48;
          *local_40 = fVar1 * *local_68;
          local_3c = local_3c + 1;
          local_40 = local_40 + 1;
          local_44 = local_44 + 1;
          local_48 = local_48 + 1;
          local_68 = local_68 + 1;
          local_64 = local_64 + -1;
        } while (local_64 != 0);
      }
      local_6c = param_5;
      if (2 < iVar20) {
        local_44 = (float *)(param_7 + 8 + iVar15 * 4);
        local_48 = (float *)(param_7 + 8 + param_5 * 4);
        local_14 = iVar20 + -2;
        fVar2 = fVar1;
        fVar4 = fVar5;
        local_4c = (float *)iVar15;
        do {
          local_6c = local_6c + param_5;
          local_48 = local_48 + param_5;
          fVar3 = fVar5 * fVar4 - fVar2 * fVar1;
          local_4c = (float *)((int)local_4c - param_5);
          local_44 = local_44 + -param_5;
          fVar2 = fVar4 * fVar1 + fVar2 * fVar5;
          local_64 = 0;
          iVar12 = local_74;
          local_60 = local_70;
          local_3c = local_4c;
          local_18 = local_6c;
          if (3 < param_5) {
            local_1c = (float *)((param_5 - 4U >> 2) + 1);
            local_64 = (int)local_1c * 4;
            local_60 = local_70 + local_64;
            iVar12 = local_74 + local_64;
            local_18 = local_6c + local_64;
            local_3c = (float *)((int)local_4c + local_64);
            pfVar22 = local_30;
            pfVar7 = local_48;
            pfVar9 = local_34;
            local_2c = local_44;
            do {
              pfVar22[-2] = fVar3 * pfVar7[-2] + pfVar22[-2];
              pfVar9[-2] = fVar2 * local_2c[-2] + pfVar9[-2];
              pfVar22[-1] = fVar3 * pfVar7[-1] + pfVar22[-1];
              pfVar9[-1] = fVar2 * local_2c[-1] + pfVar9[-1];
              *pfVar22 = fVar3 * *pfVar7 + *pfVar22;
              *pfVar9 = fVar2 * *local_2c + *pfVar9;
              pfVar22[1] = fVar3 * pfVar7[1] + pfVar22[1];
              local_1c = (float *)((int)local_1c + -1);
              pfVar9[1] = fVar2 * local_2c[1] + pfVar9[1];
              pfVar22 = pfVar22 + 4;
              pfVar7 = pfVar7 + 4;
              pfVar9 = pfVar9 + 4;
              local_2c = local_2c + 4;
            } while (local_1c != (float *)0x0);
          }
          if (local_64 < param_5) {
            local_3c = (float *)(param_7 + (int)local_3c * 4);
            local_2c = (float *)(param_7 + local_18 * 4);
            local_64 = param_5 - local_64;
            pfVar22 = (float *)(param_6 + local_60 * 4);
            local_1c = (float *)(param_6 + iVar12 * 4);
            do {
              *pfVar22 = fVar3 * *local_2c + *pfVar22;
              *local_1c = fVar2 * *local_3c + *local_1c;
              local_2c = local_2c + 1;
              local_3c = local_3c + 1;
              local_64 = local_64 + -1;
              pfVar22 = pfVar22 + 1;
              local_1c = local_1c + 1;
            } while (local_64 != 0);
          }
          local_14 = local_14 + -1;
          fVar4 = fVar3;
        } while (local_14 != 0);
      }
      local_10 = local_10 + -1;
      fVar2 = fVar5;
    } while (local_10 != 0);
  }
  local_70 = 0;
  if (1 < iVar20) {
    local_2c = (float *)(param_7 + 8);
    local_14 = iVar20 + -1;
    do {
      local_70 = local_70 + param_5;
      local_2c = local_2c + param_5;
      iVar17 = 0;
      local_74 = local_70;
      if (3 < param_5) {
        local_10 = (param_5 - 4U >> 2) + 1;
        iVar17 = local_10 * 4;
        local_74 = local_70 + iVar17;
        pfVar22 = (float *)(param_7 + 8);
        local_30 = local_2c;
        do {
          pfVar22[-2] = local_30[-2] + pfVar22[-2];
          pfVar22[-1] = local_30[-1] + pfVar22[-1];
          *pfVar22 = *pfVar22 + *local_30;
          local_10 = local_10 + -1;
          pfVar22[1] = local_30[1] + pfVar22[1];
          pfVar22 = pfVar22 + 4;
          local_30 = local_30 + 4;
        } while (local_10 != 0);
      }
      if (iVar17 < param_5) {
        pfVar22 = (float *)(param_7 + local_74 * 4);
        do {
          iVar15 = iVar17 * 4;
          iVar17 = iVar17 + 1;
          *(float *)(param_7 + -4 + iVar17 * 4) = *(float *)(param_7 + iVar15) + *pfVar22;
          pfVar22 = pfVar22 + 1;
        } while (iVar17 < param_5);
      }
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  iVar17 = 0;
  if (1 < iVar20) {
    local_14 = iVar20 + -1;
    iVar15 = iVar14;
    do {
      iVar17 = iVar17 + iVar18;
      iVar15 = iVar15 - iVar18;
      local_64 = 0;
      iVar12 = iVar17;
      iVar21 = iVar15;
      if (3 < param_4) {
        iVar16 = (param_4 - 4U >> 2) + 1;
        local_64 = iVar16 * 4;
        do {
          in_EAX[iVar12] = param_2[iVar12] - param_2[iVar21];
          iVar6 = iVar12 + unaff_ESI;
          in_EAX[iVar21] = param_2[iVar21] + param_2[iVar12];
          iVar21 = iVar21 + unaff_ESI;
          in_EAX[iVar6] = param_2[iVar6] - param_2[iVar21];
          iVar12 = iVar6 + unaff_ESI;
          in_EAX[iVar21] = param_2[iVar21] + param_2[iVar6];
          iVar21 = iVar21 + unaff_ESI;
          in_EAX[iVar12] = param_2[iVar12] - param_2[iVar21];
          iVar6 = iVar12 + unaff_ESI;
          in_EAX[iVar21] = param_2[iVar21] + param_2[iVar12];
          iVar21 = iVar21 + unaff_ESI;
          in_EAX[iVar6] = param_2[iVar6] - param_2[iVar21];
          iVar12 = iVar6 + unaff_ESI;
          in_EAX[iVar21] = param_2[iVar21] + param_2[iVar6];
          iVar21 = iVar21 + unaff_ESI;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      if (local_64 < param_4) {
        local_10 = param_4 - local_64;
        pfVar22 = param_2 + iVar12;
        pfVar7 = param_2 + iVar21;
        do {
          *(float *)((int)pfVar22 + ((int)in_EAX - (int)param_2)) = *pfVar22 - *pfVar7;
          *(float *)((int)pfVar7 + ((int)in_EAX - (int)param_2)) = *pfVar7 + *pfVar22;
          pfVar22 = pfVar22 + unaff_ESI;
          pfVar7 = pfVar7 + unaff_ESI;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (unaff_ESI != 1) {
    if (iVar19 < param_4) {
      iVar17 = 0;
      if (1 < iVar20) {
        local_18 = iVar20 + -1;
        local_74 = iVar14;
        do {
          iVar17 = iVar17 + iVar18;
          local_74 = local_74 - iVar18;
          if (2 < unaff_ESI) {
            local_14 = (unaff_ESI - 3U >> 1) + 1;
            iVar20 = iVar17;
            do {
              iVar20 = iVar20 + 2;
              iVar15 = (local_74 - iVar17) + iVar20;
              local_64 = 0;
              iVar14 = iVar20;
              if (3 < param_4) {
                iVar12 = (param_4 - 4U >> 2) + 1;
                local_64 = iVar12 * 4;
                do {
                  in_EAX[iVar14 + -1] = param_2[iVar14 + -1] - param_2[iVar15];
                  in_EAX[iVar15 + -1] = param_2[iVar14 + -1] + param_2[iVar15];
                  in_EAX[iVar14] = param_2[iVar15 + -1] + param_2[iVar14];
                  iVar21 = iVar14 + unaff_ESI;
                  in_EAX[iVar15] = param_2[iVar14] - param_2[iVar15 + -1];
                  iVar15 = iVar15 + unaff_ESI;
                  in_EAX[iVar21 + -1] = param_2[iVar21 + -1] - param_2[iVar15];
                  in_EAX[iVar15 + -1] = param_2[iVar21 + -1] + param_2[iVar15];
                  in_EAX[iVar21] = param_2[iVar15 + -1] + param_2[iVar21];
                  iVar14 = iVar21 + unaff_ESI;
                  in_EAX[iVar15] = param_2[iVar21] - param_2[iVar15 + -1];
                  iVar15 = iVar15 + unaff_ESI;
                  in_EAX[iVar14 + -1] = param_2[iVar14 + -1] - param_2[iVar15];
                  in_EAX[iVar15 + -1] = param_2[iVar14 + -1] + param_2[iVar15];
                  in_EAX[iVar14] = param_2[iVar15 + -1] + param_2[iVar14];
                  iVar21 = iVar14 + unaff_ESI;
                  in_EAX[iVar15] = param_2[iVar14] - param_2[iVar15 + -1];
                  iVar15 = iVar15 + unaff_ESI;
                  in_EAX[iVar21 + -1] = param_2[iVar21 + -1] - param_2[iVar15];
                  in_EAX[iVar15 + -1] = param_2[iVar21 + -1] + param_2[iVar15];
                  in_EAX[iVar21] = param_2[iVar15 + -1] + param_2[iVar21];
                  iVar14 = iVar21 + unaff_ESI;
                  in_EAX[iVar15] = param_2[iVar21] - param_2[iVar15 + -1];
                  iVar15 = iVar15 + unaff_ESI;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
              }
              if (local_64 < param_4) {
                local_30 = in_EAX + iVar15;
                local_2c = in_EAX + iVar14;
                local_10 = param_4 - local_64;
                pfVar22 = param_2 + iVar15 + -1;
                pfVar7 = param_2 + iVar14 + -1;
                do {
                  *(float *)((int)pfVar7 + ((int)in_EAX - (int)param_2)) = *pfVar7 - pfVar22[1];
                  *(float *)((int)pfVar22 + ((int)in_EAX - (int)param_2)) = *pfVar7 + pfVar22[1];
                  *local_2c = *pfVar22 + pfVar7[1];
                  pfVar9 = pfVar7 + 1;
                  pfVar7 = pfVar7 + unaff_ESI;
                  fVar1 = *pfVar22;
                  pfVar22 = pfVar22 + unaff_ESI;
                  *local_30 = *pfVar9 - fVar1;
                  local_2c = local_2c + unaff_ESI;
                  local_30 = local_30 + unaff_ESI;
                  local_10 = local_10 + -1;
                } while (local_10 != 0);
              }
              local_14 = local_14 + -1;
            } while (local_14 != 0);
          }
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
    }
    else if (1 < iVar20) {
      local_34 = in_EAX + iVar14;
      local_38 = param_2 + iVar14 + -1;
      local_30 = param_2 + -1;
      local_1c = (float *)(iVar20 + -1);
      local_2c = in_EAX;
      do {
        local_2c = local_2c + iVar18;
        local_30 = local_30 + iVar18;
        local_34 = local_34 + -iVar18;
        local_38 = local_38 + -iVar18;
        if (0 < param_4) {
          local_18 = param_4;
          pfVar22 = local_38;
          local_54 = local_34;
          local_48 = local_30;
          local_44 = local_2c;
          do {
            if (2 < unaff_ESI) {
              local_3c = local_44;
              local_10 = (unaff_ESI - 3U >> 1) + 1;
              local_40 = local_54;
              pfVar7 = local_48;
              pfVar9 = pfVar22;
              do {
                local_3c = local_3c + 2;
                pfVar13 = pfVar7 + 2;
                pfVar11 = pfVar9 + 2;
                local_40 = local_40 + 2;
                *(float *)((int)pfVar13 + ((int)in_EAX - (int)param_2)) = pfVar7[2] - pfVar9[3];
                *(float *)((int)pfVar11 + ((int)in_EAX - (int)param_2)) = *pfVar13 + pfVar9[3];
                *local_3c = *pfVar11 + pfVar7[3];
                *local_40 = pfVar7[3] - *pfVar11;
                local_10 = local_10 + -1;
                pfVar7 = pfVar13;
                pfVar9 = pfVar11;
              } while (local_10 != 0);
            }
            local_44 = local_44 + unaff_ESI;
            local_48 = local_48 + unaff_ESI;
            local_54 = local_54 + unaff_ESI;
            pfVar22 = pfVar22 + unaff_ESI;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
        local_1c = (float *)((int)local_1c + -1);
      } while (local_1c != (float *)0x0);
    }
    iVar17 = 0;
    if (3 < param_5) {
      local_38 = (float *)(param_7 + 0xc);
      puVar8 = (undefined4 *)(param_6 + 4);
      local_10 = (param_5 - 4U >> 2) + 1;
      iVar17 = local_10 * 4;
      do {
        puVar8[-1] = local_38[-3];
        *puVar8 = *(undefined4 *)((param_7 - param_6) + (int)puVar8);
        puVar8[1] = local_38[-1];
        puVar8[2] = *local_38;
        local_38 = local_38 + 4;
        puVar8 = puVar8 + 4;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    if (iVar17 < param_5) {
      puVar8 = (undefined4 *)(param_6 + iVar17 * 4);
      iVar17 = param_5 - iVar17;
      do {
        *puVar8 = *(undefined4 *)((int)puVar8 + (param_7 - param_6));
        puVar8 = puVar8 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    iVar17 = 0;
    if (1 < param_3) {
      local_10 = param_3 + -1;
      do {
        iVar17 = iVar17 + iVar18;
        iVar20 = 0;
        iVar14 = iVar17;
        if (3 < param_4) {
          iVar15 = (param_4 - 4U >> 2) + 1;
          iVar20 = iVar15 * 4;
          do {
            param_2[iVar14] = in_EAX[iVar14];
            iVar14 = iVar14 + unaff_ESI;
            param_2[iVar14] = in_EAX[iVar14];
            iVar14 = iVar14 + unaff_ESI;
            param_2[iVar14] = in_EAX[iVar14];
            iVar14 = iVar14 + unaff_ESI;
            param_2[iVar14] = in_EAX[iVar14];
            iVar14 = iVar14 + unaff_ESI;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        if (iVar20 < param_4) {
          pfVar22 = param_2 + iVar14;
          iVar20 = param_4 - iVar20;
          do {
            *pfVar22 = *(float *)((int)pfVar22 + ((int)in_EAX - (int)param_2));
            pfVar22 = pfVar22 + unaff_ESI;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
        }
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    if (param_4 < iVar19) {
      if (1 < param_3) {
        pfVar22 = (float *)(param_8 + (-1 - unaff_ESI) * 4);
        local_2c = in_EAX + -1;
        local_18 = param_3 + -1;
        local_28 = param_2;
        do {
          local_28 = local_28 + iVar18;
          local_2c = local_2c + iVar18;
          pfVar22 = pfVar22 + unaff_ESI;
          if (0 < param_4) {
            local_14 = param_4;
            pfVar7 = local_28;
            local_30 = local_2c;
            do {
              if (2 < unaff_ESI) {
                iVar17 = (unaff_ESI - 3U >> 1) + 1;
                pfVar9 = local_30;
                pfVar13 = pfVar7;
                pfVar11 = pfVar22;
                do {
                  pfVar23 = pfVar11 + 2;
                  pfVar10 = pfVar9 + 2;
                  pfVar13 = pfVar13 + 2;
                  iVar17 = iVar17 + -1;
                  *(float *)((int)pfVar10 + ((int)param_2 - (int)in_EAX)) =
                       pfVar11[1] * pfVar9[2] - *pfVar23 * pfVar9[3];
                  *pfVar13 = pfVar11[1] * pfVar9[3] + *pfVar10 * *pfVar23;
                  pfVar9 = pfVar10;
                  pfVar11 = pfVar23;
                } while (iVar17 != 0);
              }
              local_30 = local_30 + unaff_ESI;
              pfVar7 = pfVar7 + unaff_ESI;
              local_14 = local_14 + -1;
            } while (local_14 != 0);
          }
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        return;
      }
    }
    else {
      iVar17 = 0;
      if (1 < param_3) {
        local_18 = param_3 + -1;
        pfVar22 = (float *)(param_8 + (-1 - unaff_ESI) * 4);
        do {
          pfVar22 = pfVar22 + unaff_ESI;
          iVar17 = iVar17 + iVar18;
          if (2 < unaff_ESI) {
            local_14 = (unaff_ESI - 3U >> 1) + 1;
            iVar19 = iVar17;
            pfVar7 = pfVar22;
            do {
              iVar19 = iVar19 + 2;
              pfVar9 = pfVar7 + 2;
              local_64 = 0;
              iVar20 = iVar19;
              if (3 < param_4) {
                iVar14 = (param_4 - 4U >> 2) + 1;
                local_64 = iVar14 * 4;
                do {
                  param_2[iVar20 + -1] = pfVar7[1] * in_EAX[iVar20 + -1] - *pfVar9 * in_EAX[iVar20];
                  param_2[iVar20] = pfVar7[1] * in_EAX[iVar20] + *pfVar9 * in_EAX[iVar20 + -1];
                  iVar20 = iVar20 + unaff_ESI;
                  param_2[iVar20 + -1] = pfVar7[1] * in_EAX[iVar20 + -1] - *pfVar9 * in_EAX[iVar20];
                  param_2[iVar20] = pfVar7[1] * in_EAX[iVar20] + *pfVar9 * in_EAX[iVar20 + -1];
                  iVar20 = iVar20 + unaff_ESI;
                  param_2[iVar20 + -1] = pfVar7[1] * in_EAX[iVar20 + -1] - *pfVar9 * in_EAX[iVar20];
                  param_2[iVar20] = pfVar7[1] * in_EAX[iVar20] + *pfVar9 * in_EAX[iVar20 + -1];
                  iVar20 = iVar20 + unaff_ESI;
                  param_2[iVar20 + -1] = pfVar7[1] * in_EAX[iVar20 + -1] - *pfVar9 * in_EAX[iVar20];
                  param_2[iVar20] = pfVar7[1] * in_EAX[iVar20] + *pfVar9 * in_EAX[iVar20 + -1];
                  iVar20 = iVar20 + unaff_ESI;
                  iVar14 = iVar14 + -1;
                } while (iVar14 != 0);
              }
              if (local_64 < param_4) {
                local_10 = param_4 - local_64;
                pfVar13 = param_2 + iVar20;
                pfVar11 = in_EAX + iVar20 + -1;
                do {
                  *(float *)((int)pfVar11 + ((int)param_2 - (int)in_EAX)) =
                       pfVar7[1] * *pfVar11 - *pfVar9 * pfVar11[1];
                  pfVar10 = pfVar11 + 1;
                  fVar1 = *pfVar11;
                  pfVar11 = pfVar11 + unaff_ESI;
                  *pfVar13 = *pfVar9 * fVar1 + pfVar7[1] * *pfVar10;
                  pfVar13 = pfVar13 + unaff_ESI;
                  local_10 = local_10 + -1;
                } while (local_10 != 0);
              }
              local_14 = local_14 + -1;
              pfVar7 = pfVar9;
            } while (local_14 != 0);
          }
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
    }
  }
  return;
}


//// FUNCTION vorbis_drftb1 @ 00c5f830 ////

void __fastcall
vorbis_drftb1(undefined4 param_1,int param_2,int param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  int in_EAX;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *local_10;
  int local_c;
  int local_8;
  
  pfVar1 = param_4;
  local_8 = *(int *)(param_2 + 4);
  param_4 = (float *)0x0;
  local_c = 1;
  if (0 < local_8) {
    local_10 = (int *)(param_2 + 8);
    pfVar4 = (float *)0x1;
    do {
      iVar6 = *local_10;
      uVar2 = param_3 / (iVar6 * (int)pfVar4);
      if (iVar6 == 4) {
        pfVar3 = param_5;
        if (param_4 != (float *)0x0) {
          pfVar3 = pfVar1;
        }
        vorbis_dradb4(uVar2,(int)pfVar3,(int)pfVar4,(float *)(in_EAX + -4 + local_c * 4),
                     (float *)(in_EAX + -4 + (uVar2 + local_c) * 4),
                     (float *)(in_EAX + -4 + (uVar2 + local_c + uVar2) * 4));
LAB_00c5f98f:
        param_4 = (float *)(1 - (int)param_4);
      }
      else if (iVar6 == 2) {
        if (param_4 == (float *)0x0) {
          iVar5 = in_EAX + -4 + local_c * 4;
          pfVar3 = param_5;
        }
        else {
          iVar5 = in_EAX + -4 + local_c * 4;
          pfVar3 = pfVar1;
        }
        vorbis_dradb2(pfVar3,uVar2,(int)pfVar4,iVar5);
        param_4 = (float *)(1 - (int)param_4);
      }
      else {
        if (iVar6 == 3) {
          pfVar3 = (float *)(in_EAX + -4 + (uVar2 + local_c) * 4);
          iVar5 = in_EAX + -4 + local_c * 4;
          if (param_4 == (float *)0x0) {
            vorbis_dradb3(pfVar4,(int)param_5,iVar5,pfVar3);
          }
          else {
            vorbis_dradb3(pfVar4,(int)pfVar1,iVar5,pfVar3);
          }
          goto LAB_00c5f98f;
        }
        pfVar3 = pfVar1;
        pfVar7 = param_5;
        if (param_4 != (float *)0x0) {
          pfVar3 = param_5;
          pfVar7 = pfVar1;
        }
        vorbis_dradbg(pfVar3,pfVar3,iVar6,(int)pfVar4,uVar2 * (int)pfVar4,(int)pfVar3,(int)pfVar7,
                     in_EAX + -4 + local_c * 4);
        if (uVar2 == 1) {
          param_4 = (float *)(1 - (int)param_4);
        }
      }
      local_c = local_c + (iVar6 + -1) * uVar2;
      local_10 = local_10 + 1;
      local_8 = local_8 + -1;
      pfVar4 = (float *)(iVar6 * (int)pfVar4);
    } while (local_8 != 0);
    if (param_4 != (float *)0x0) {
      iVar6 = 0;
      if (3 < param_3) {
        pfVar4 = param_5 + 3;
        iVar5 = (param_3 - 4U >> 2) + 1;
        iVar6 = iVar5 * 4;
        pfVar3 = pfVar1 + 1;
        do {
          pfVar3[-1] = pfVar4[-3];
          *pfVar3 = *(float *)(((int)param_5 - (int)pfVar1) + (int)pfVar3);
          pfVar3[1] = pfVar4[-1];
          pfVar3[2] = *pfVar4;
          pfVar3 = pfVar3 + 4;
          pfVar4 = pfVar4 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (iVar6 < param_3) {
        pfVar4 = pfVar1 + iVar6;
        iVar6 = param_3 - iVar6;
        do {
          *pfVar4 = *(float *)((int)pfVar4 + ((int)param_5 - (int)pfVar1));
          pfVar4 = pfVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  return;
}


//// FUNCTION vorbis_drft_forward @ 00c5fa50 ////

void __fastcall vorbis_drft_forward(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 1) {
    vorbis_drftf1((void *)param_1[2],iVar1,param_1[1] + iVar1 * 4);
  }
  return;
}


//// FUNCTION FUN_00c5fa90 @ 00c5fa90 ////

void __fastcall FUN_00c5fa90(int *param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  
  *param_1 = param_2;
  pvVar1 = _calloc(param_2 * 3,4);
  param_1[1] = (int)pvVar1;
  piVar2 = _calloc(0x20,4);
  param_1[2] = (int)piVar2;
  vorbis_fdrffti(piVar2,param_1[1]);
  return;
}


//// FUNCTION FUN_00c5fad0 @ 00c5fad0 ////

void __fastcall FUN_00c5fad0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[1]);
    }
    if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[2]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


//// FUNCTION vorbis_mdct_init @ 00c5fb10 ////

void __fastcall vorbis_mdct_init(int *param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  byte bVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined2 unaff_DI;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  ulonglong uVar13;
  int local_14;
  int local_10;
  
  iVar8 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
  pvVar1 = _malloc(iVar8 * 4);
  pvVar2 = _malloc((iVar8 + param_2) * 4);
  fVar11 = (float10)log2((float10)param_2);
  fVar12 = (float10)log2((float10)2.0);
  FUN_00acf400((double)(((float10)0.6931471805599453 * fVar11) /
                        ((float10)0.6931471805599453 * fVar12) + (float10)0.5),unaff_DI);
  uVar13 = FUN_00acd42c();
  param_1[1] = (int)uVar13;
  iVar3 = 0;
  *param_1 = param_2;
  param_1[2] = (int)pvVar2;
  param_1[3] = (int)pvVar1;
  if (0 < iVar8) {
    local_14 = 0;
    local_10 = 1;
    pfVar5 = (float *)((int)pvVar2 + (param_2 >> 1) * 4);
    do {
      fVar11 = (float10)local_14;
      local_14 = local_14 + 4;
      fVar11 = fVar11 * ((float10)3.1415927 / (float10)param_2);
      iVar3 = iVar3 + 1;
      fVar12 = (float10)fcos(fVar11);
      *(float *)((int)pvVar2 + iVar3 * 8 + -8) = (float)fVar12;
      fVar11 = (float10)fsin(fVar11);
      *(float *)((int)pvVar2 + iVar3 * 8 + -4) = (float)-fVar11;
      fVar11 = (float10)local_10 * ((float10)3.1415927 / (float10)(param_2 * 2));
      fVar12 = (float10)fcos(fVar11);
      *pfVar5 = (float)fVar12;
      fVar11 = (float10)fsin(fVar11);
      pfVar5[1] = (float)fVar11;
      pfVar5 = pfVar5 + 2;
      local_10 = local_10 + 2;
    } while (iVar3 < iVar8);
  }
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  if (0 < iVar3) {
    local_10 = 2;
    iVar8 = iVar3;
    pfVar5 = (float *)((int)pvVar2 + param_2 * 4);
    do {
      fVar11 = (float10)local_10;
      local_10 = local_10 + 4;
      iVar8 = iVar8 + -1;
      fVar11 = fVar11 * ((float10)3.1415927 / (float10)param_2);
      fVar12 = (float10)fcos(fVar11);
      *pfVar5 = (float)(fVar12 * (float10)0.5);
      fVar11 = (float10)fsin(fVar11);
      pfVar5[1] = (float)(fVar11 * (float10)-0.5);
      pfVar5 = pfVar5 + 2;
    } while (iVar8 != 0);
  }
  uVar9 = 1 << ((char)uVar13 - 2U & 0x1f);
  uVar10 = 0;
  if (0 < iVar3) {
    do {
      uVar7 = 0;
      bVar4 = 0;
      uVar6 = uVar9;
      while (uVar6 != 0) {
        if ((uVar10 & uVar6) != 0) {
          uVar7 = uVar7 | 1 << (bVar4 & 0x1f);
        }
        bVar4 = bVar4 + 1;
        uVar6 = (int)uVar9 >> (bVar4 & 0x1f);
      }
      *(uint *)((int)pvVar1 + uVar10 * 8) = (~uVar7 & (1 << ((char)uVar13 - 1U & 0x1f)) - 1U) - 1;
      *(uint *)((int)pvVar1 + uVar10 * 8 + 4) = uVar7;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar3);
  }
  param_1[4] = (int)(4.0 / (float)param_2);
  return;
}


//// FUNCTION vorbis_mdct_butterfly_8 @ 00c5fcf0 ////

void vorbis_mdct_butterfly_8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_EAX;
  
  fVar1 = in_EAX[6];
  fVar2 = in_EAX[6];
  fVar3 = in_EAX[4];
  fVar4 = *in_EAX;
  in_EAX[6] = *in_EAX + in_EAX[4] + in_EAX[2] + fVar1;
  in_EAX[4] = (in_EAX[2] + fVar1) - (*in_EAX + in_EAX[4]);
  fVar1 = in_EAX[3];
  *in_EAX = (fVar2 - in_EAX[2]) + (in_EAX[5] - in_EAX[1]);
  in_EAX[2] = (fVar2 - in_EAX[2]) - (in_EAX[5] - in_EAX[1]);
  fVar2 = in_EAX[1];
  fVar5 = in_EAX[3];
  fVar6 = in_EAX[7];
  in_EAX[3] = (fVar3 - fVar4) + (in_EAX[7] - fVar1);
  in_EAX[1] = (in_EAX[7] - fVar1) - (fVar3 - fVar4);
  in_EAX[7] = fVar5 + fVar6 + fVar2 + in_EAX[5];
  in_EAX[5] = (fVar5 + fVar6) - (fVar2 + in_EAX[5]);
  return;
}


//// FUNCTION vorbis_mdct_butterfly_16 @ 00c5fd70 ////

void vorbis_mdct_butterfly_16(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_EAX;
  
  pfVar1 = in_EAX + 8;
  fVar2 = in_EAX[9];
  fVar3 = *in_EAX;
  fVar4 = *pfVar1;
  *pfVar1 = *pfVar1 + *in_EAX;
  in_EAX[9] = in_EAX[9] + in_EAX[1];
  *in_EAX = ((fVar3 - fVar4) + (in_EAX[1] - fVar2)) * 0.70710677;
  in_EAX[1] = ((in_EAX[1] - fVar2) - (fVar3 - fVar4)) * 0.70710677;
  fVar2 = in_EAX[0xb];
  fVar3 = in_EAX[10];
  fVar4 = in_EAX[2];
  in_EAX[10] = in_EAX[2] + in_EAX[10];
  in_EAX[0xb] = in_EAX[3] + in_EAX[0xb];
  in_EAX[2] = in_EAX[3] - fVar2;
  in_EAX[3] = fVar3 - fVar4;
  fVar2 = in_EAX[0xc];
  fVar3 = in_EAX[4];
  fVar4 = in_EAX[0xd];
  in_EAX[0xc] = in_EAX[0xc] + in_EAX[4];
  in_EAX[0xd] = in_EAX[5] + in_EAX[0xd];
  in_EAX[4] = ((fVar2 - fVar3) - (fVar4 - in_EAX[5])) * 0.70710677;
  in_EAX[5] = ((fVar4 - in_EAX[5]) + (fVar2 - fVar3)) * 0.70710677;
  fVar2 = in_EAX[0xe];
  fVar3 = in_EAX[0xf];
  in_EAX[0xe] = in_EAX[0xe] + in_EAX[6];
  in_EAX[0xf] = in_EAX[7] + in_EAX[0xf];
  in_EAX[6] = fVar2 - in_EAX[6];
  in_EAX[7] = fVar3 - in_EAX[7];
  vorbis_mdct_butterfly_8();
  vorbis_mdct_butterfly_8();
  return;
}


//// FUNCTION vorbis_mdct_butterfly_32 @ 00c5fe40 ////

void vorbis_mdct_butterfly_32(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_EAX;
  
  fVar2 = in_EAX[0x1e];
  fVar3 = in_EAX[0x1f];
  in_EAX[0x1e] = in_EAX[0xe] + in_EAX[0x1e];
  in_EAX[0x1f] = in_EAX[0x1f] + in_EAX[0xf];
  in_EAX[0xe] = fVar2 - in_EAX[0xe];
  in_EAX[0xf] = fVar3 - in_EAX[0xf];
  fVar2 = in_EAX[0x1c];
  fVar3 = in_EAX[0xc];
  fVar4 = in_EAX[0x1d];
  in_EAX[0x1c] = in_EAX[0xc] + in_EAX[0x1c];
  in_EAX[0x1d] = in_EAX[0x1d] + in_EAX[0xd];
  in_EAX[0xc] = (fVar2 - fVar3) * 0.9238795 - (fVar4 - in_EAX[0xd]) * 0.38268343;
  in_EAX[0xd] = (fVar2 - fVar3) * 0.38268343 + (fVar4 - in_EAX[0xd]) * 0.9238795;
  fVar2 = in_EAX[0x1a];
  fVar3 = in_EAX[10];
  fVar4 = in_EAX[0x1b];
  in_EAX[0x1a] = in_EAX[10] + in_EAX[0x1a];
  in_EAX[0x1b] = in_EAX[0x1b] + in_EAX[0xb];
  in_EAX[10] = ((fVar2 - fVar3) - (fVar4 - in_EAX[0xb])) * 0.70710677;
  in_EAX[0xb] = ((fVar4 - in_EAX[0xb]) + (fVar2 - fVar3)) * 0.70710677;
  fVar2 = in_EAX[0x18];
  fVar3 = in_EAX[8];
  fVar4 = in_EAX[0x19];
  in_EAX[0x18] = in_EAX[8] + in_EAX[0x18];
  in_EAX[0x19] = in_EAX[0x19] + in_EAX[9];
  in_EAX[8] = (fVar2 - fVar3) * 0.38268343 - (fVar4 - in_EAX[9]) * 0.9238795;
  in_EAX[9] = (fVar2 - fVar3) * 0.9238795 + (fVar4 - in_EAX[9]) * 0.38268343;
  fVar2 = in_EAX[0x16];
  pfVar1 = in_EAX + 0x10;
  fVar3 = in_EAX[6];
  fVar4 = in_EAX[0x17];
  in_EAX[0x16] = in_EAX[6] + in_EAX[0x16];
  in_EAX[0x17] = in_EAX[7] + in_EAX[0x17];
  in_EAX[6] = in_EAX[7] - fVar4;
  in_EAX[7] = fVar2 - fVar3;
  fVar2 = in_EAX[4];
  fVar3 = in_EAX[0x14];
  fVar4 = in_EAX[0x15];
  in_EAX[0x14] = in_EAX[0x14] + in_EAX[4];
  in_EAX[0x15] = in_EAX[5] + in_EAX[0x15];
  in_EAX[4] = (fVar2 - fVar3) * 0.38268343 + (in_EAX[5] - fVar4) * 0.9238795;
  in_EAX[5] = (in_EAX[5] - fVar4) * 0.38268343 - (fVar2 - fVar3) * 0.9238795;
  fVar2 = in_EAX[2];
  fVar3 = in_EAX[0x12];
  fVar4 = in_EAX[0x13];
  in_EAX[0x12] = in_EAX[0x12] + in_EAX[2];
  in_EAX[0x13] = in_EAX[0x13] + in_EAX[3];
  in_EAX[2] = ((in_EAX[3] - fVar4) + (fVar2 - fVar3)) * 0.70710677;
  in_EAX[3] = ((in_EAX[3] - fVar4) - (fVar2 - fVar3)) * 0.70710677;
  fVar2 = *in_EAX;
  fVar3 = *pfVar1;
  fVar4 = in_EAX[0x11];
  *pfVar1 = *pfVar1 + *in_EAX;
  in_EAX[0x11] = in_EAX[0x11] + in_EAX[1];
  *in_EAX = (fVar2 - fVar3) * 0.9238795 + (in_EAX[1] - fVar4) * 0.38268343;
  in_EAX[1] = (in_EAX[1] - fVar4) * 0.9238795 - (fVar2 - fVar3) * 0.38268343;
  vorbis_mdct_butterfly_16();
  vorbis_mdct_butterfly_16();
  return;
}


//// FUNCTION vorbis_mdct_butterfly_first @ 00c60020 ////

void __fastcall vorbis_mdct_butterfly_first(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *unaff_EDI;
  
  pfVar7 = unaff_EDI + (param_1 >> 1) + -8 + (param_1 - (param_1 >> 1)) + 7;
  pfVar5 = unaff_EDI + (param_1 >> 1) + -8;
  do {
    fVar1 = pfVar7[-1];
    fVar2 = pfVar5[6];
    fVar3 = *pfVar7;
    fVar4 = pfVar5[7];
    pfVar7[-1] = pfVar7[-1] + pfVar5[6];
    *pfVar7 = pfVar5[7] + *pfVar7;
    pfVar5[6] = (fVar1 - fVar2) * *param_2 + (fVar3 - fVar4) * param_2[1];
    pfVar5[7] = (fVar3 - fVar4) * *param_2 - (fVar1 - fVar2) * param_2[1];
    fVar1 = pfVar7[-3];
    fVar2 = pfVar5[4];
    fVar3 = pfVar7[-2];
    fVar4 = pfVar5[5];
    pfVar7[-3] = pfVar7[-3] + pfVar5[4];
    pfVar7[-2] = pfVar7[-2] + pfVar5[5];
    pfVar5[4] = (fVar1 - fVar2) * param_2[4] + (fVar3 - fVar4) * param_2[5];
    pfVar5[5] = (fVar3 - fVar4) * param_2[4] - (fVar1 - fVar2) * param_2[5];
    fVar1 = pfVar7[-5];
    fVar2 = pfVar5[2];
    fVar3 = pfVar7[-4];
    fVar4 = pfVar5[3];
    pfVar7[-5] = pfVar5[2] + pfVar7[-5];
    pfVar7[-4] = pfVar5[3] + pfVar7[-4];
    pfVar5[2] = (fVar1 - fVar2) * param_2[8] + (fVar3 - fVar4) * param_2[9];
    pfVar5[3] = (fVar3 - fVar4) * param_2[8] - (fVar1 - fVar2) * param_2[9];
    fVar1 = pfVar7[-7];
    fVar2 = *pfVar5;
    fVar3 = pfVar7[-6];
    fVar4 = pfVar5[1];
    pfVar7[-7] = pfVar7[-7] + *pfVar5;
    pfVar7[-6] = pfVar5[1] + pfVar7[-6];
    pfVar6 = pfVar5 + -8;
    pfVar7 = pfVar7 + -8;
    *pfVar5 = (fVar1 - fVar2) * param_2[0xc] + (fVar3 - fVar4) * param_2[0xd];
    pfVar5[1] = (fVar3 - fVar4) * param_2[0xc] - (fVar1 - fVar2) * param_2[0xd];
    pfVar5 = pfVar6;
    param_2 = param_2 + 0x10;
  } while (unaff_EDI <= pfVar6);
  return;
}


//// FUNCTION vorbis_mdct_butterfly_generic @ 00c60130 ////

void __fastcall vorbis_mdct_butterfly_generic(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *unaff_EBX;
  
  pfVar6 = unaff_EBX + (param_1 >> 1) + -8 + (param_1 - (param_1 >> 1)) + 7;
  pfVar5 = unaff_EBX + (param_1 >> 1) + -8;
  do {
    fVar1 = pfVar6[-1];
    fVar2 = pfVar5[6];
    fVar3 = *pfVar6;
    fVar4 = pfVar5[7];
    pfVar6[-1] = pfVar6[-1] + pfVar5[6];
    *pfVar6 = pfVar5[7] + *pfVar6;
    pfVar5[6] = (fVar1 - fVar2) * *param_2 + (fVar3 - fVar4) * param_2[1];
    pfVar7 = param_2 + param_3;
    pfVar5[7] = (fVar3 - fVar4) * *param_2 - (fVar1 - fVar2) * param_2[1];
    fVar1 = pfVar6[-3];
    fVar2 = pfVar5[4];
    fVar3 = pfVar6[-2];
    fVar4 = pfVar5[5];
    pfVar6[-3] = pfVar5[4] + pfVar6[-3];
    pfVar6[-2] = pfVar5[5] + pfVar6[-2];
    pfVar5[4] = (fVar1 - fVar2) * *pfVar7 + (fVar3 - fVar4) * pfVar7[1];
    pfVar8 = pfVar7 + param_3;
    pfVar5[5] = (fVar3 - fVar4) * *pfVar7 - (fVar1 - fVar2) * pfVar7[1];
    fVar1 = pfVar6[-5];
    fVar2 = pfVar5[2];
    fVar3 = pfVar6[-4];
    fVar4 = pfVar5[3];
    pfVar6[-5] = pfVar5[2] + pfVar6[-5];
    pfVar6[-4] = pfVar5[3] + pfVar6[-4];
    pfVar5[2] = (fVar1 - fVar2) * *pfVar8 + (fVar3 - fVar4) * pfVar8[1];
    pfVar9 = pfVar8 + param_3;
    pfVar5[3] = (fVar3 - fVar4) * *pfVar8 - (fVar1 - fVar2) * pfVar8[1];
    fVar1 = pfVar6[-7];
    fVar2 = *pfVar5;
    fVar3 = pfVar6[-6];
    fVar4 = pfVar5[1];
    pfVar6[-7] = *pfVar5 + pfVar6[-7];
    pfVar6[-6] = pfVar6[-6] + pfVar5[1];
    pfVar7 = pfVar5 + -8;
    pfVar6 = pfVar6 + -8;
    *pfVar5 = (fVar1 - fVar2) * *pfVar9 + (fVar3 - fVar4) * pfVar9[1];
    param_2 = pfVar9 + param_3;
    pfVar5[1] = (fVar3 - fVar4) * *pfVar9 - (fVar1 - fVar2) * pfVar9[1];
    pfVar5 = pfVar7;
  } while (unaff_EBX <= pfVar7);
  return;
}


//// FUNCTION vorbis_mdct_butterflies @ 00c60240 ////

void vorbis_mdct_butterflies(undefined4 param_1,int param_2)

{
  float *pfVar1;
  int in_EAX;
  int iVar2;
  byte bVar3;
  undefined4 local_8;
  
  pfVar1 = *(float **)(in_EAX + 8);
  local_8 = *(int *)(in_EAX + 4);
  if (0 < local_8 + -6) {
    vorbis_mdct_butterfly_first(param_2,pfVar1);
  }
  local_8 = local_8 + -7;
  bVar3 = 1;
  if (0 < local_8) {
    do {
      iVar2 = 1 << (bVar3 & 0x1f);
      if (0 < iVar2) {
        do {
          vorbis_mdct_butterfly_generic(param_2 >> (bVar3 & 0x1f),pfVar1,4 << (bVar3 & 0x1f));
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      bVar3 = bVar3 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  if (0 < param_2) {
    iVar2 = (param_2 - 1U >> 5) + 1;
    do {
      vorbis_mdct_butterfly_32();
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


//// FUNCTION vorbis_mdct_clear @ 00c60300 ////

void __fastcall vorbis_mdct_clear(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[2]);
    }
    if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[3]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}


//// FUNCTION vorbis_mdct_bitreverse @ 00c60340 ////

void __fastcall vorbis_mdct_bitreverse(undefined4 param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *in_EAX;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int *piVar10;
  int iVar11;
  
  piVar10 = (int *)in_EAX[3];
  iVar11 = *in_EAX >> 1;
  pfVar7 = (float *)(in_EAX[2] + *in_EAX * 4);
  pfVar8 = param_2 + iVar11 + 3;
  pfVar9 = param_2;
  do {
    iVar2 = piVar10[1];
    pfVar1 = param_2 + iVar11 + *piVar10;
    fVar4 = (param_2[iVar11 + *piVar10 + 1] - param_2[iVar11 + iVar2 + 1]) * pfVar7[1] +
            (param_2[iVar11 + iVar2] + *pfVar1) * *pfVar7;
    fVar3 = (param_2[iVar11 + iVar2] + *pfVar1) * pfVar7[1] -
            (param_2[iVar11 + *piVar10 + 1] - param_2[iVar11 + iVar2 + 1]) * *pfVar7;
    fVar5 = ((param_2 + iVar11 + iVar2)[1] + pfVar1[1]) * 0.5;
    fVar6 = (*pfVar1 - param_2[iVar11 + iVar2]) * 0.5;
    *pfVar9 = fVar4 + fVar5;
    pfVar8[-5] = fVar5 - fVar4;
    pfVar9[1] = fVar6 + fVar3;
    pfVar8[-4] = fVar3 - fVar6;
    iVar2 = piVar10[3];
    pfVar1 = param_2 + iVar11 + piVar10[2];
    fVar4 = (param_2[iVar11 + piVar10[2] + 1] - param_2[iVar11 + iVar2 + 1]) * pfVar7[3] +
            (param_2[iVar11 + iVar2] + *pfVar1) * pfVar7[2];
    fVar3 = (param_2[iVar11 + iVar2] + *pfVar1) * pfVar7[3] -
            (param_2[iVar11 + piVar10[2] + 1] - param_2[iVar11 + iVar2 + 1]) * pfVar7[2];
    fVar5 = ((param_2 + iVar11 + iVar2)[1] + pfVar1[1]) * 0.5;
    fVar6 = (*pfVar1 - param_2[iVar11 + iVar2]) * 0.5;
    pfVar9[2] = fVar4 + fVar5;
    pfVar8[-7] = fVar5 - fVar4;
    pfVar9[3] = fVar6 + fVar3;
    pfVar9 = pfVar9 + 4;
    pfVar1 = pfVar8 + -7;
    pfVar7 = pfVar7 + 4;
    piVar10 = piVar10 + 4;
    pfVar8[-6] = fVar3 - fVar6;
    pfVar8 = pfVar8 + -4;
  } while (pfVar9 < pfVar1);
  return;
}


//// FUNCTION vorbis_mdct_backward @ 00c60460 ////

void __fastcall vorbis_mdct_backward(int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 extraout_ECX;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  
  iVar2 = *param_1 >> 2;
  iVar9 = *param_1 >> 1;
  pfVar4 = param_3 + iVar2 + iVar9;
  pfVar3 = (float *)(param_1[2] + iVar2 * 4);
  pfVar5 = param_2 + iVar9 + -7;
  pfVar8 = pfVar4;
  do {
    pfVar10 = pfVar5 + -8;
    pfVar8[-4] = -(pfVar5[2] * pfVar3[3]) - *pfVar5 * pfVar3[2];
    pfVar8[-3] = *pfVar5 * pfVar3[3] - pfVar5[2] * pfVar3[2];
    pfVar8[-2] = -(pfVar3[1] * pfVar5[6]) - pfVar5[4] * *pfVar3;
    pfVar8[-1] = pfVar3[1] * pfVar5[4] - *pfVar3 * pfVar5[6];
    pfVar3 = pfVar3 + 4;
    pfVar5 = pfVar10;
    pfVar8 = pfVar8 + -4;
  } while (param_2 <= pfVar10);
  pfVar3 = (float *)(param_1[2] + iVar2 * 4);
  pfVar5 = param_2 + iVar9 + -8;
  pfVar8 = pfVar4;
  do {
    pfVar10 = pfVar3 + -4;
    pfVar6 = pfVar5 + -8;
    *pfVar8 = pfVar3[-2] * pfVar5[6] + pfVar5[4] * pfVar3[-1];
    pfVar8[1] = pfVar5[4] * pfVar3[-2] - pfVar3[-1] * pfVar5[6];
    pfVar8[2] = *pfVar5 * pfVar3[-3] + pfVar5[2] * *pfVar10;
    pfVar8[3] = *pfVar5 * *pfVar10 - pfVar3[-3] * pfVar5[2];
    pfVar3 = pfVar10;
    pfVar5 = pfVar6;
    pfVar8 = pfVar8 + 4;
  } while (param_2 <= pfVar6);
  vorbis_mdct_butterflies(param_3 + iVar9,iVar9);
  vorbis_mdct_bitreverse(extraout_ECX,param_3);
  pfVar3 = (float *)(param_1[2] + iVar9 * 4);
  pfVar5 = param_3 + 3;
  pfVar8 = pfVar4;
  pfVar10 = pfVar4;
  do {
    pfVar7 = pfVar8 + -4;
    pfVar6 = pfVar5 + 5;
    pfVar8[-1] = pfVar3[1] * pfVar5[-3] - *pfVar3 * pfVar5[-2];
    *pfVar10 = -(pfVar5[-3] * *pfVar3 + pfVar3[1] * pfVar5[-2]);
    pfVar8[-2] = pfVar5[-1] * pfVar3[3] - *pfVar5 * pfVar3[2];
    pfVar10[1] = -(*pfVar5 * pfVar3[3] + pfVar5[-1] * pfVar3[2]);
    pfVar8[-3] = pfVar5[1] * pfVar3[5] - pfVar5[2] * pfVar3[4];
    pfVar10[2] = -(pfVar5[1] * pfVar3[4] + pfVar5[2] * pfVar3[5]);
    *pfVar7 = pfVar5[3] * pfVar3[7] - pfVar5[4] * pfVar3[6];
    pfVar10[3] = -(pfVar5[3] * pfVar3[6] + pfVar5[4] * pfVar3[7]);
    pfVar3 = pfVar3 + 8;
    pfVar5 = pfVar5 + 8;
    pfVar8 = pfVar7;
    pfVar10 = pfVar10 + 4;
  } while (pfVar6 < pfVar7);
  pfVar3 = pfVar4;
  pfVar5 = param_3 + iVar2 + 2;
  pfVar8 = pfVar4 + (2 - iVar9);
  do {
    fVar1 = pfVar3[-1];
    pfVar7 = pfVar3 + -4;
    pfVar8[-3] = fVar1;
    pfVar5[-2] = -fVar1;
    pfVar10 = pfVar5 + 2;
    fVar1 = pfVar3[-2];
    pfVar8[-4] = fVar1;
    pfVar5[-1] = -fVar1;
    fVar1 = pfVar3[-3];
    pfVar8[-5] = fVar1;
    *pfVar5 = -fVar1;
    fVar1 = *pfVar7;
    pfVar8[-6] = fVar1;
    pfVar5[1] = -fVar1;
    pfVar3 = pfVar7;
    pfVar6 = pfVar4;
    pfVar5 = pfVar5 + 4;
    pfVar8 = pfVar8 + -4;
  } while (pfVar10 < pfVar7);
  do {
    pfVar3 = pfVar4 + -4;
    *pfVar3 = pfVar6[3];
    pfVar4[-3] = pfVar6[2];
    pfVar4[-2] = pfVar6[1];
    pfVar4[-1] = *pfVar6;
    pfVar4 = pfVar3;
    pfVar6 = pfVar6 + 4;
  } while (param_3 + iVar9 < pfVar3);
  return;
}


//// FUNCTION vorbis_mdct_forward @ 00c606b0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __fastcall vorbis_mdct_forward(int *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 extraout_ECX;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  float afStack_3c [3];
  float *local_c;
  float *local_8;
  
  iVar17 = *param_1;
  iVar7 = iVar17 >> 1;
  iVar8 = iVar17 >> 2;
  iVar15 = iVar17 >> 3;
  afStack_3c[2] = 1.8185902e-38;
  iVar5 = iVar17 * -4;
  pfVar18 = (float *)(&stack0xffffffd0 + iVar5);
  iVar13 = iVar7 * 4;
  local_8 = (float *)(param_2 + (iVar8 + iVar7) * 4);
  local_c = local_8 + 1;
  pfVar6 = (float *)(param_1[2] + iVar13);
  iVar9 = 0;
  pfVar12 = pfVar6;
  iVar10 = iVar9;
  if (0 < iVar15) {
    do {
      fVar1 = local_8[-2];
      local_8 = local_8 + -4;
      fVar2 = *local_c;
      pfVar6 = pfVar12 + -2;
      fVar3 = local_c[2];
      fVar4 = *local_8;
      iVar9 = iVar10 + 2;
      afStack_3c[(iVar7 + iVar10 + 3) - iVar17] =
           (fVar1 + fVar2) * *pfVar6 + (fVar3 + fVar4) * pfVar12[-1];
      afStack_3c[(iVar7 + iVar10 + 4) - iVar17] =
           (fVar3 + fVar4) * *pfVar6 - (fVar1 + fVar2) * pfVar12[-1];
      local_c = local_c + 4;
      pfVar12 = pfVar6;
      iVar10 = iVar9;
    } while (iVar9 < iVar15);
  }
  pfVar12 = (float *)(param_2 + 4);
  for (; iVar9 < iVar7 - iVar15; iVar9 = iVar9 + 2) {
    fVar1 = local_8[-2];
    local_8 = local_8 + -4;
    fVar2 = *pfVar12;
    pfVar16 = pfVar6 + -2;
    fVar3 = *local_8;
    fVar4 = pfVar12[2];
    pfVar12 = pfVar12 + 4;
    afStack_3c[(iVar7 + iVar9 + 3) - iVar17] =
         (fVar1 - fVar2) * *pfVar16 + (fVar3 - fVar4) * pfVar6[-1];
    afStack_3c[(iVar7 + iVar9 + 4) - iVar17] =
         (fVar3 - fVar4) * *pfVar16 - (fVar1 - fVar2) * pfVar6[-1];
    pfVar6 = pfVar16;
  }
  pfVar16 = (float *)(param_2 + iVar17 * 4);
  for (; iVar9 < iVar7; iVar9 = iVar9 + 2) {
    fVar1 = pfVar16[-2];
    pfVar16 = pfVar16 + -4;
    pfVar11 = pfVar6 + -2;
    fVar2 = *pfVar12;
    fVar3 = *pfVar16;
    fVar4 = pfVar12[2];
    pfVar12 = pfVar12 + 4;
    afStack_3c[(iVar7 + iVar9 + 3) - iVar17] =
         (-fVar1 - fVar2) * *pfVar11 + (-fVar3 - fVar4) * pfVar6[-1];
    afStack_3c[(iVar7 + iVar9 + 4) - iVar17] =
         (-fVar3 - fVar4) * *pfVar11 - (-fVar1 - fVar2) * pfVar6[-1];
    pfVar6 = pfVar11;
  }
  afStack_3c[2 - iVar17] = (float)iVar7;
  afStack_3c[1 - iVar17] = (float)(&stack0xffffffd0 + iVar13 + iVar5);
  afStack_3c[-iVar17] = 1.8186372e-38;
  vorbis_mdct_butterflies(afStack_3c[1 - iVar17],(int)afStack_3c[2 - iVar17]);
  afStack_3c[2 - iVar17] = 1.8186385e-38;
  vorbis_mdct_bitreverse(extraout_ECX,(float *)(&stack0xffffffd0 + iVar5));
  pfVar6 = (float *)(param_1[2] + iVar13);
  pfVar12 = (float *)(param_3 + iVar13);
  iVar13 = 0;
  if (3 < iVar8) {
    iVar17 = (iVar8 - 4U >> 2) + 1;
    iVar13 = iVar17 * 4;
    pfVar16 = pfVar6;
    pfVar11 = pfVar12;
    pfVar14 = (float *)(param_3 + 8);
    pfVar19 = (float *)(&stack0xffffffd0 + iVar5);
    do {
      pfVar18 = pfVar19 + 8;
      pfVar12 = pfVar11 + -4;
      pfVar6 = pfVar16 + 8;
      iVar17 = iVar17 + -1;
      pfVar14[-2] = (pfVar16[1] * pfVar19[1] + *pfVar16 * *pfVar19) * (float)param_1[4];
      pfVar11[-1] = (pfVar16[1] * *pfVar19 - *pfVar16 * pfVar19[1]) * (float)param_1[4];
      pfVar14[-1] = (pfVar16[3] * pfVar19[3] + pfVar16[2] * pfVar19[2]) * (float)param_1[4];
      pfVar11[-2] = (pfVar16[3] * pfVar19[2] - pfVar16[2] * pfVar19[3]) * (float)param_1[4];
      *pfVar14 = (pfVar16[4] * pfVar19[4] + pfVar19[5] * pfVar16[5]) * (float)param_1[4];
      pfVar11[-3] = (pfVar16[5] * pfVar19[4] - pfVar19[5] * pfVar16[4]) * (float)param_1[4];
      pfVar14[1] = (pfVar16[7] * pfVar19[7] + pfVar16[6] * pfVar19[6]) * (float)param_1[4];
      *pfVar12 = (pfVar16[7] * pfVar19[6] - pfVar16[6] * pfVar19[7]) * (float)param_1[4];
      pfVar16 = pfVar6;
      pfVar11 = pfVar12;
      pfVar14 = pfVar14 + 4;
      pfVar19 = pfVar18;
    } while (iVar17 != 0);
  }
  while (iVar13 < iVar8) {
    pfVar12 = pfVar12 + -1;
    iVar13 = iVar13 + 1;
    *(float *)(param_3 + -4 + iVar13 * 4) =
         (pfVar6[1] * pfVar18[1] + *pfVar6 * *pfVar18) * (float)param_1[4];
    *pfVar12 = (pfVar6[1] * *pfVar18 - *pfVar6 * pfVar18[1]) * (float)param_1[4];
    pfVar6 = pfVar6 + 2;
    pfVar18 = pfVar18 + 2;
  }
  return;
}


//// FUNCTION FUN_00c60980 @ 00c60980 ////

float10 FUN_00c60980(void)

{
  uint *in_EAX;
  
  return (float10)(*in_EAX & 0x7fffffff) * (float10)7.1771143e-07 - (float10)764.2712;
}


//// FUNCTION FUN_00c609a0 @ 00c609a0 ////

void __fastcall FUN_00c609a0(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  float10 fVar6;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  iVar3 = *(int *)(param_2 + 4);
  param_1[1] = 0x80;
  param_1[2] = 0x40;
  param_1[3] = *(int *)(iVar2 + 0xb74);
  *param_1 = iVar3;
  param_1[0x29] = 0x80;
  param_1[0x2c] = *(int *)(iVar2 + 4) / 2;
  pvVar4 = _calloc(0x80,4);
  param_1[9] = (int)pvVar4;
  vorbis_mdct_init(param_1 + 4,0x80);
  local_c = 0;
  do {
    fVar6 = (float10)fsin((float10)local_c * (float10)0.024736950716634433);
    *(float *)(param_1[9] + local_c * 4) = (float)fVar6;
    fVar1 = *(float *)(param_1[9] + local_c * 4);
    iVar2 = local_c * 4;
    local_c = local_c + 1;
    *(float *)(param_1[9] + iVar2) = fVar1 * fVar1;
  } while (local_c < 0x80);
  param_1[0x12] = 6;
  param_1[0x13] = 6;
  param_1[10] = 2;
  param_1[0xb] = 4;
  param_1[0xe] = 4;
  param_1[0xf] = 5;
  param_1[0x16] = 9;
  param_1[0x17] = 8;
  param_1[0x1a] = 0xd;
  param_1[0x1b] = 8;
  param_1[0x1e] = 0x11;
  param_1[0x1f] = 8;
  param_1[0x22] = 0x16;
  param_1[0x23] = 8;
  local_8 = 7;
  pfVar5 = (float *)(param_1 + 0xd);
  do {
    fVar1 = pfVar5[-2];
    pvVar4 = _malloc((int)fVar1 * 4);
    pfVar5[-1] = (float)pvVar4;
    local_c = 0;
    if (0 < (int)fVar1) {
      do {
        fVar6 = (float10)local_c;
        local_c = local_c + 1;
        fVar6 = (float10)fsin(((fVar6 + (float10)0.5) / (float10)(int)fVar1) *
                              (float10)3.1415927410125732);
        *(float *)((int)pvVar4 + local_c * 4 + -4) = (float)fVar6;
        pvVar4 = (void *)pfVar5[-1];
        *pfVar5 = *(float *)((int)pvVar4 + local_c * 4 + -4) + *pfVar5;
      } while (local_c < (int)fVar1);
    }
    local_8 = local_8 + -1;
    *pfVar5 = 1.0 / *pfVar5;
    pfVar5 = pfVar5 + 4;
  } while (local_8 != 0);
  pvVar4 = _calloc(iVar3 * 7,0x90);
  param_1[0x26] = (int)pvVar4;
  pvVar4 = _calloc(param_1[0x29],4);
  param_1[0x28] = (int)pvVar4;
  return;
}


//// FUNCTION FUN_00c60b40 @ 00c60b40 ////

void __fastcall FUN_00c60b40(int param_1)

{
  vorbis_mdct_clear((undefined4 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x30));
}


//// FUNCTION FUN_00c60ba0 @ 00c60ba0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

uint FUN_00c60ba0(int param_1,float param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int extraout_EDX;
  int *piVar11;
  int iVar12;
  float10 fVar13;
  float10 extraout_ST1;
  int iStack_44;
  int iStack_40;
  float *local_24;
  int *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  float local_c;
  
  fVar2 = *(float *)(in_EAX + 0xc);
  iVar12 = *(int *)(in_EAX + 4);
  local_14 = 0;
  iStack_40 = 0xc60bd3;
  iVar3 = iVar12 * -4;
  iVar4 = *(int *)(in_EAX + 0x9c) / 2;
  local_10 = 2;
  if (1 < iVar4) {
    local_10 = iVar4;
  }
  local_c = *(float *)(param_1 + 0x3c) - (float)(iVar4 + -2);
  if (local_c < 0.0) {
    local_c = 0.0;
  }
  if (*(float *)(param_1 + 0x3c) < local_c) {
    local_c = *(float *)(param_1 + 0x3c);
  }
  iVar4 = 0;
  if (3 < iVar12) {
    iVar10 = (iVar12 - 4U >> 2) + 1;
    iVar4 = iVar10 * 4;
    pfVar5 = (float *)(&stack0xffffffc8 + iVar3);
    pfVar8 = (float *)((int)param_2 + 0xc);
    do {
      pfVar5[-1] = *(float *)((int)pfVar5 +
                             *(int *)(in_EAX + 0x24) + -(int)(&stack0xffffffc4 + iVar3) + -4) *
                   pfVar8[-3];
      *pfVar5 = *(float *)(((int)param_2 - (int)(&stack0xffffffc4 + iVar3)) + (int)pfVar5) *
                *(float *)((int)pfVar5 + *(int *)(in_EAX + 0x24) + -(int)(&stack0xffffffc4 + iVar3))
      ;
      iVar10 = iVar10 + -1;
      pfVar5[1] = *(float *)((int)pfVar5 +
                            *(int *)(in_EAX + 0x24) + (4 - (int)(&stack0xffffffc4 + iVar3))) *
                  pfVar8[-1];
      pfVar5[2] = *(float *)((int)pfVar5 +
                            *(int *)(in_EAX + 0x24) + (8 - (int)(&stack0xffffffc4 + iVar3))) *
                  *pfVar8;
      pfVar5 = pfVar5 + 4;
      pfVar8 = pfVar8 + 4;
    } while (iVar10 != 0);
  }
  if (iVar4 < iVar12) {
    pfVar5 = (float *)(&stack0xffffffc4 + iVar4 * 4 + iVar3);
    do {
      iVar10 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *pfVar5 = *(float *)(*(int *)(in_EAX + 0x24) + iVar10) *
                *(float *)((int)pfVar5 + ((int)param_2 - (int)(&stack0xffffffc4 + iVar3)));
      pfVar5 = pfVar5 + 1;
    } while (iVar4 < iVar12);
  }
  *(undefined1 **)((int)&iStack_40 + iVar12 * -4) = &stack0xffffffc4 + iVar3;
  (&iStack_44)[-iVar12] = 0xc60d04;
  vorbis_mdct_forward((int *)(in_EAX + 0x10),(int)(&stack0xffffffc4 + iVar3),
               *(int *)((int)&iStack_40 + iVar12 * -4));
  iVar4 = *(int *)(param_4 + 0x8c);
  iVar10 = 0;
  fVar6 = *(float *)(&stack0xffffffcc + iVar3) * *(float *)(&stack0xffffffcc + iVar3) * 0.2 +
          *(float *)(&stack0xffffffc8 + iVar3) * *(float *)(&stack0xffffffc8 + iVar3) * 0.7 +
          *(float *)(&stack0xffffffc4 + iVar3) * *(float *)(&stack0xffffffc4 + iVar3);
  if (iVar4 == 0) {
    *(float *)(param_4 + 0x84) = fVar6 + *(float *)(param_4 + 0x88);
    fVar1 = fVar6;
  }
  else {
    *(float *)(param_4 + 0x84) = fVar6 + *(float *)(param_4 + 0x84);
    fVar1 = fVar6 + *(float *)(param_4 + 0x88);
  }
  *(float *)(param_4 + 0x88) = fVar1;
  *(float *)(param_4 + 0x84) = *(float *)(param_4 + 0x84) - *(float *)(param_4 + 0x48 + iVar4 * 4);
  *(float *)(param_4 + 0x48 + iVar4 * 4) = fVar6;
  iVar4 = *(int *)(param_4 + 0x8c) + 1;
  *(int *)(param_4 + 0x8c) = iVar4;
  if (0xe < iVar4) {
    *(undefined4 *)(param_4 + 0x8c) = 0;
  }
  *(undefined4 *)((int)&iStack_40 + iVar12 * -4) = 0xc60daa;
  FUN_00c60980();
  if (0 < iVar12 / 2) {
    do {
      *(undefined4 *)((int)&iStack_40 + iVar12 * -4) = 0xc60de3;
      fVar13 = FUN_00c60980();
      fVar13 = fVar13 * (float10)0.5;
      if (fVar13 < extraout_ST1) {
        fVar13 = extraout_ST1;
      }
      if (fVar13 < (float10)fVar2) {
        fVar13 = (float10)fVar2;
      }
      *(float *)(&stack0xffffffc4 + (iVar10 >> 1) * 4 + iVar3) = (float)fVar13;
      iVar10 = iVar10 + 2;
    } while (iVar10 < extraout_EDX);
  }
  local_24 = (float *)(param_1 + 0x20);
  local_1c = (int *)(param_4 + 0x44);
  local_18 = 0;
  piVar11 = (int *)(param_3 + 8);
  do {
    iVar4 = piVar11[-1];
    fVar2 = 0.0;
    iVar12 = 0;
    if (3 < iVar4) {
      iVar10 = (iVar4 - 4U >> 2) + 1;
      iVar12 = iVar10 * 4;
      pfVar5 = (float *)(*piVar11 + 8);
      pfVar8 = (float *)(&stack0xffffffcc + piVar11[-2] * 4 + iVar3);
      do {
        iVar10 = iVar10 + -1;
        fVar2 = pfVar8[1] * pfVar5[1] +
                *pfVar5 * *pfVar8 + pfVar8[-1] * pfVar5[-1] + pfVar8[-2] * pfVar5[-2] + fVar2;
        pfVar5 = pfVar5 + 4;
        pfVar8 = pfVar8 + 4;
      } while (iVar10 != 0);
    }
    if (iVar12 < iVar4) {
      pfVar5 = (float *)(*piVar11 + iVar12 * 4);
      pfVar8 = (float *)(&stack0xffffffc4 + (piVar11[-2] + iVar12) * 4 + iVar3);
      iVar4 = iVar4 - iVar12;
      do {
        fVar6 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        iVar4 = iVar4 + -1;
        fVar2 = fVar6 * fVar1 + fVar2;
      } while (iVar4 != 0);
    }
    fVar2 = fVar2 * (float)piVar11[1];
    iVar12 = *local_1c + -1;
    param_2 = -99999.0;
    if (iVar12 < 0) {
      iVar12 = *local_1c + 0x10;
    }
    pfVar5 = (float *)(param_4 + (local_18 + iVar12) * 4);
    fVar6 = fVar2;
    if (fVar2 <= *(float *)(param_4 + (local_18 + iVar12) * 4)) {
      fVar6 = *pfVar5;
    }
    fVar1 = 99999.0;
    fVar7 = fVar2;
    if (*pfVar5 <= fVar2) {
      fVar7 = *pfVar5;
    }
    iVar4 = 0;
    if (3 < local_10) {
      iVar10 = (local_10 - 4U >> 2) + 1;
      iVar4 = iVar10 * 4;
      do {
        iVar9 = iVar12 + -1;
        pfVar8 = pfVar5 + -1;
        if (iVar9 < 0) {
          iVar9 = iVar12 + 0x10;
          pfVar8 = pfVar5 + 0x10;
        }
        if (param_2 <= *pfVar8) {
          param_2 = *pfVar8;
        }
        if (*pfVar8 <= fVar1) {
          fVar1 = *pfVar8;
        }
        iVar12 = iVar9 + -1;
        pfVar5 = pfVar8 + -1;
        if (iVar12 < 0) {
          iVar12 = iVar9 + 0x10;
          pfVar5 = pfVar8 + 0x10;
        }
        if (param_2 <= *pfVar5) {
          param_2 = *pfVar5;
        }
        if (*pfVar5 <= fVar1) {
          fVar1 = *pfVar5;
        }
        iVar9 = iVar12 + -1;
        pfVar8 = pfVar5 + -1;
        if (iVar9 < 0) {
          iVar9 = iVar12 + 0x10;
          pfVar8 = pfVar5 + 0x10;
        }
        if (param_2 <= *pfVar8) {
          param_2 = *pfVar8;
        }
        if (*pfVar8 <= fVar1) {
          fVar1 = *pfVar8;
        }
        iVar12 = iVar9 + -1;
        pfVar5 = pfVar8 + -1;
        if (iVar12 < 0) {
          iVar12 = iVar9 + 0x10;
          pfVar5 = pfVar8 + 0x10;
        }
        if (param_2 <= *pfVar5) {
          param_2 = *pfVar5;
        }
        if (*pfVar5 <= fVar1) {
          fVar1 = *pfVar5;
        }
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (iVar4 < local_10) {
      iVar4 = local_10 - iVar4;
      pfVar5 = (float *)(param_4 + (local_18 + iVar12) * 4);
      do {
        iVar10 = iVar12 + -1;
        pfVar8 = pfVar5 + -1;
        if (iVar10 < 0) {
          iVar10 = iVar12 + 0x10;
          pfVar8 = pfVar5 + 0x10;
        }
        if (param_2 <= *pfVar8) {
          param_2 = *pfVar8;
        }
        if (*pfVar8 <= fVar1) {
          fVar1 = *pfVar8;
        }
        iVar4 = iVar4 + -1;
        iVar12 = iVar10;
        pfVar5 = pfVar8;
      } while (iVar4 != 0);
    }
    *(float *)(param_4 + (*local_1c + local_18) * 4) = fVar2;
    iVar12 = *local_1c;
    *local_1c = iVar12 + 1;
    if (0x10 < iVar12 + 1) {
      *local_1c = 0;
    }
    if (local_c + local_24[-7] < fVar6 - param_2) {
      local_14 = local_14 | 5;
    }
    if (fVar7 - fVar1 < *local_24 - local_c) {
      local_14 = local_14 | 2;
    }
    local_18 = local_18 + 0x24;
    local_1c = local_1c + 0x24;
    local_24 = local_24 + 1;
    piVar11 = piVar11 + 4;
  } while (local_18 < 0xfc);
  return local_14;
}


//// FUNCTION FUN_00c610c0 @ 00c610c0 ////

undefined4 __fastcall FUN_00c610c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint local_10;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
  piVar2 = (int *)**(int **)(param_1 + 0x68);
  iVar5 = piVar2[0x2a] / piVar2[2];
  iVar6 = *(int *)(param_1 + 0x14) / piVar2[2];
  iVar10 = iVar6 + -4;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  iVar6 = iVar6 + 2;
  if (piVar2[0x29] < iVar6) {
    piVar2[0x29] = iVar6;
    piVar7 = FUN_00ad58c5((int *)piVar2[0x28],(uint *)(iVar6 * 4));
    piVar2[0x28] = (int)piVar7;
  }
  for (; iVar5 < iVar10; iVar5 = iVar5 + 1) {
    iVar6 = piVar2[0x27];
    uVar8 = 0;
    local_10 = 0;
    piVar2[0x27] = iVar6 + 1;
    if (0x18 < iVar6 + 1) {
      piVar2[0x27] = 0x18;
    }
    iVar6 = 0;
    if (0 < *piVar2) {
      iVar9 = 0;
      do {
        uVar8 = FUN_00c60ba0((int)(piVar1 + 0x2cd),
                             (float)(*(int *)(*(int *)(param_1 + 8) + iVar6 * 4) +
                                    piVar2[2] * iVar5 * 4),(int)(piVar2 + 10),piVar2[0x26] + iVar9);
        uVar8 = local_10 | uVar8;
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 0x3f0;
        local_10 = uVar8;
      } while (iVar6 < *piVar2);
    }
    *(undefined4 *)(piVar2[0x28] + 8 + iVar5 * 4) = 0;
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(piVar2[0x28] + iVar5 * 4) = 1;
      *(undefined4 *)(piVar2[0x28] + 4 + iVar5 * 4) = 1;
    }
    if (((uVar8 & 2) != 0) && (*(undefined4 *)(piVar2[0x28] + iVar5 * 4) = 1, 0 < iVar5)) {
      *(undefined4 *)(piVar2[0x28] + -4 + iVar5 * 4) = 1;
    }
    if ((uVar8 & 4) != 0) {
      piVar2[0x27] = -1;
    }
  }
  iVar6 = piVar2[2];
  iVar10 = iVar6 * iVar10;
  piVar2[0x2a] = iVar10;
  iVar5 = *(int *)(param_1 + 0x30);
  iVar9 = piVar1[*(int *)(param_1 + 0x28)];
  iVar3 = piVar1[1];
  iVar4 = *piVar1;
  iVar11 = piVar2[0x2c];
  if (iVar11 < iVar10 - iVar6) {
    do {
      if (((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) +
          iVar3 / 2 + iVar5 + ((int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2) <= iVar11) {
        return 1;
      }
      piVar2[0x2c] = iVar11;
      if ((*(int *)(piVar2[0x28] + (iVar11 / iVar6) * 4) != 0) && (iVar5 < iVar11)) {
        piVar2[0x2b] = iVar11;
        return 0;
      }
      iVar11 = iVar11 + iVar6;
    } while (iVar11 < piVar2[0x2a] - piVar2[2]);
  }
  return 0xffffffff;
}


//// FUNCTION FUN_00c612e0 @ 00c612e0 ////

undefined4 __fastcall FUN_00c612e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = **(int **)(param_1 + 0x68);
  piVar4 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
  iVar2 = (int)(piVar4[*(int *)(param_1 + 0x28)] + (piVar4[*(int *)(param_1 + 0x28)] >> 0x1f & 3U))
          >> 2;
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar3 = (int)(*piVar4 + (*piVar4 >> 0x1f & 3U)) >> 2;
    iVar5 = iVar3;
  }
  else {
    iVar3 = (int)(piVar4[*(int *)(param_1 + 0x2c)] + (piVar4[*(int *)(param_1 + 0x2c)] >> 0x1f & 3U)
                 ) >> 2;
    iVar5 = (int)(piVar4[*(int *)(param_1 + 0x24)] + (piVar4[*(int *)(param_1 + 0x24)] >> 0x1f & 3U)
                 ) >> 2;
  }
  iVar5 = (*(int *)(param_1 + 0x30) - iVar2) - iVar5;
  iVar3 = *(int *)(param_1 + 0x30) + iVar2 + iVar3;
  if ((iVar5 <= *(int *)(iVar1 + 0xac)) && (*(int *)(iVar1 + 0xac) < iVar3)) {
    return 1;
  }
  iVar3 = iVar3 / *(int *)(iVar1 + 8);
  iVar5 = iVar5 / *(int *)(iVar1 + 8);
  if (iVar5 < iVar3) {
    piVar4 = (int *)(*(int *)(iVar1 + 0xa0) + iVar5 * 4);
    do {
      if (*piVar4 != 0) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}


//// FUNCTION FUN_00c613a0 @ 00c613a0 ////

void __fastcall FUN_00c613a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 / *(int *)(param_1 + 8);
  _memmove(*(void **)(param_1 + 0xa0),(void *)((int)*(void **)(param_1 + 0xa0) + iVar1 * 4),
           (*(int *)(param_1 + 0xa8) / *(int *)(param_1 + 8) - iVar1) * 4 + 8);
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - param_2;
  if (-1 < *(int *)(param_1 + 0xac)) {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) - param_2;
  }
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) - param_2;
  return;
}


//// FUNCTION FUN_00c61410 @ 00c61410 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

float10 __fastcall FUN_00c61410(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  float *pfVar9;
  double *pdVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  undefined8 uStack_2c;
  uint local_14;
  undefined4 *local_10;
  double *local_c;
  int local_8;
  
  local_10 = param_2;
  local_8 = param_1;
  uStack_2c._4_4_ = 0xc61437;
  iVar3 = -(param_4 * 8 + 8);
  local_c = (double *)(&stack0xffffffdc + iVar3);
  *(undefined4 *)((int)&uStack_2c + iVar3 + 4) = 0xc61447;
  iVar4 = param_4 * -8;
  iVar14 = param_4 + 1;
  if (iVar14 != 0) {
    iVar8 = param_3 - iVar14;
    pfVar11 = (float *)(local_8 + 8 + iVar14 * 4);
    do {
      dVar2 = 0.0;
      iVar14 = iVar14 + -1;
      pfVar11 = pfVar11 + -1;
      iVar8 = iVar8 + 1;
      iVar16 = iVar14;
      if (3 < iVar8) {
        iVar5 = ((param_3 - iVar14) - 4U >> 2) + 1;
        iVar16 = iVar14 + iVar5 * 4;
        pfVar9 = pfVar11;
        pfVar12 = (float *)(local_8 + 8);
        do {
          iVar5 = iVar5 + -1;
          dVar2 = (double)pfVar12[1] * (double)pfVar9[1] +
                  (double)*pfVar12 * (double)*pfVar9 +
                  (double)pfVar12[-1] * (double)pfVar9[-1] +
                  (double)pfVar12[-2] * (double)pfVar9[-2] + dVar2;
          pfVar9 = pfVar9 + 4;
          pfVar12 = pfVar12 + 4;
        } while (iVar5 != 0);
      }
      if (iVar16 < param_3) {
        pfVar9 = (float *)(local_8 + (iVar16 - iVar14) * 4);
        do {
          iVar5 = iVar16 * 4;
          iVar16 = iVar16 + 1;
          fVar1 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          dVar2 = (double)*(float *)(local_8 + iVar5) * (double)fVar1 + dVar2;
        } while (iVar16 < param_3);
      }
      local_c[iVar14] = dVar2;
    } while (iVar14 != 0);
  }
  fVar17 = (float10)*local_c;
  local_14 = 0;
  if (0 < param_4) {
    pdVar7 = local_c + -2;
    iVar14 = (iVar4 + iVar3) - (int)local_c;
    do {
      uVar15 = local_14;
      fVar18 = -(float10)pdVar7[3];
      if (fVar17 == (float10)0.0) {
        for (; param_4 != 0; param_4 = param_4 + -1) {
          *local_10 = 0;
          local_10 = local_10 + 1;
        }
        return (float10)0.0;
      }
      iVar8 = 0;
      if (3 < (int)local_14) {
        iVar16 = (local_14 - 4 >> 2) + 1;
        iVar8 = iVar16 * 4;
        pdVar6 = (double *)((int)&local_14 + iVar4 + iVar3);
        pdVar10 = pdVar7;
        do {
          iVar16 = iVar16 + -1;
          fVar18 = (((fVar18 - (float10)pdVar10[2] * (float10)pdVar6[-2]) -
                    (float10)pdVar10[1] * (float10)pdVar6[-1]) -
                   (float10)*pdVar6 * (float10)*pdVar10) - (float10)pdVar10[-1] * (float10)pdVar6[1]
          ;
          pdVar6 = pdVar6 + 4;
          pdVar10 = pdVar10 + -4;
        } while (iVar16 != 0);
      }
      if (iVar8 < (int)local_14) {
        pdVar6 = local_c + (local_14 - iVar8);
        do {
          iVar16 = iVar8 * 8;
          iVar8 = iVar8 + 1;
          dVar2 = *pdVar6;
          pdVar6 = pdVar6 + -1;
          fVar18 = fVar18 - (float10)*(double *)(&stack0xffffffdc + iVar16 + iVar4 + iVar3) *
                            (float10)dVar2;
        } while (iVar8 < (int)local_14);
      }
      fVar18 = fVar18 / fVar17;
      iVar16 = (int)local_14 / 2;
      iVar8 = 0;
      *(double *)(&stack0xffffffdc + local_14 * 8 + iVar4 + iVar3) = (double)fVar18;
      if (3 < iVar16) {
        iVar5 = (iVar16 - 4U >> 2) + 1;
        iVar8 = iVar5 * 4;
        pdVar6 = (double *)((int)&local_14 + iVar4 + iVar3);
        pdVar10 = (double *)(&stack0xffffffdc + iVar14 + (int)pdVar7);
        do {
          dVar2 = pdVar6[-2];
          iVar5 = iVar5 + -1;
          pdVar6[-2] = (double)(fVar18 * (float10)pdVar10[1] + (float10)pdVar6[-2]);
          pdVar10[1] = (double)((float10)dVar2 * fVar18 + (float10)pdVar10[1]);
          dVar2 = pdVar6[-1];
          pdVar6[-1] = (double)(fVar18 * (float10)*pdVar10 + (float10)pdVar6[-1]);
          *pdVar10 = (double)((float10)dVar2 * fVar18 + (float10)*pdVar10);
          dVar2 = *pdVar6;
          *pdVar6 = (double)(fVar18 * (float10)pdVar10[-1] + (float10)*pdVar6);
          pdVar10[-1] = (double)((float10)dVar2 * fVar18 + (float10)pdVar10[-1]);
          dVar2 = pdVar6[1];
          pdVar6[1] = (double)(fVar18 * (float10)pdVar10[-2] + (float10)pdVar6[1]);
          pdVar10[-2] = (double)((float10)dVar2 * fVar18 + (float10)pdVar10[-2]);
          pdVar6 = pdVar6 + 4;
          pdVar10 = pdVar10 + -4;
          uVar15 = local_14;
        } while (iVar5 != 0);
      }
      if (iVar8 < iVar16) {
        pdVar6 = (double *)((int)&uStack_2c + (uVar15 - iVar8) * 8 + iVar4 + iVar3);
        do {
          dVar2 = *(double *)(&stack0xffffffdc + iVar8 * 8 + iVar4 + iVar3);
          iVar8 = iVar8 + 1;
          *(double *)((int)&uStack_2c + iVar8 * 8 + iVar4 + iVar3) =
               (double)(fVar18 * (float10)*pdVar6 +
                       (float10)*(double *)((int)&uStack_2c + iVar8 * 8 + iVar4 + iVar3));
          *pdVar6 = (double)((float10)dVar2 * fVar18 + (float10)*pdVar6);
          pdVar6 = pdVar6 + -1;
        } while (iVar8 < iVar16);
      }
      uVar13 = uVar15 & 0x80000001;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffffe) + 1;
      }
      if (uVar13 != 0) {
        *(double *)(&stack0xffffffdc + iVar8 * 8 + iVar4 + iVar3) =
             (double)(((float10)1.0 + fVar18) *
                     (float10)*(double *)(&stack0xffffffdc + iVar8 * 8 + iVar4 + iVar3));
      }
      pdVar7 = pdVar7 + 1;
      local_14 = uVar15 + 1;
      fVar17 = ((float10)1.0 - fVar18 * fVar18) * fVar17;
    } while ((int)(uVar15 + 1) < param_4);
  }
  iVar14 = 0;
  if (3 < param_4) {
    iVar8 = (param_4 - 4U >> 2) + 1;
    iVar14 = iVar8 * 4;
    pdVar7 = (double *)((int)&local_14 + iVar4 + iVar3);
    pfVar11 = (float *)(local_10 + 2);
    do {
      pfVar11[-2] = (float)pdVar7[-2];
      iVar8 = iVar8 + -1;
      pfVar11[-1] = (float)pdVar7[-1];
      *pfVar11 = (float)*pdVar7;
      pfVar11[1] = (float)pdVar7[1];
      pdVar7 = pdVar7 + 4;
      pfVar11 = pfVar11 + 4;
    } while (iVar8 != 0);
  }
  for (; iVar14 < param_4; iVar14 = iVar14 + 1) {
    local_10[iVar14] = (float)*(double *)(&stack0xffffffdc + iVar14 * 8 + iVar4 + iVar3);
  }
  return fVar17;
}


//// FUNCTION FUN_00c61730 @ 00c61730 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_00c61730(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *local_8;
  
  iVar3 = param_3;
  iVar1 = (param_5 + param_3) * -4;
  puVar5 = (undefined4 *)(&stack0xffffffe0 + iVar1);
  if (param_2 == 0) {
    if (0 < param_3) {
      for (; param_3 != 0; param_3 = param_3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
  }
  else {
    iVar11 = 0;
    if (3 < param_3) {
      puVar5 = (undefined4 *)(param_2 + 0xc);
      iVar9 = (param_3 - 4U >> 2) + 1;
      iVar11 = iVar9 * 4;
      puVar4 = (undefined4 *)(&stack0xffffffe4 + iVar1);
      do {
        puVar4[-1] = puVar5[-3];
        *puVar4 = *(undefined4 *)((param_2 - (int)(&stack0xffffffe0 + iVar1)) + (int)puVar4);
        puVar4[1] = puVar5[-1];
        puVar4[2] = *puVar5;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (iVar11 < param_3) {
      puVar5 = (undefined4 *)(&stack0xffffffe0 + iVar11 * 4 + iVar1);
      iVar11 = param_3 - iVar11;
      do {
        *puVar5 = *(undefined4 *)((int)puVar5 + (param_2 - (int)(&stack0xffffffe0 + iVar1)));
        puVar5 = puVar5 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  param_3 = 0;
  if (0 < param_5) {
    local_8 = (float *)(&stack0xffffffe8 + iVar1);
    do {
      fVar2 = 0.0;
      iVar11 = 0;
      iVar9 = param_3;
      iVar10 = iVar3;
      if (3 < iVar3) {
        iVar6 = (iVar3 - 4U >> 2) + 1;
        iVar11 = iVar6 * 4;
        iVar9 = param_3 + iVar11;
        iVar10 = iVar3 + iVar6 * -4;
        pfVar7 = local_8;
        pfVar8 = (float *)(param_1 + -8 + iVar3 * 4);
        do {
          iVar6 = iVar6 + -1;
          fVar2 = (((fVar2 - pfVar8[1] * pfVar7[-2]) - pfVar7[-1] * *pfVar8) - pfVar8[-1] * *pfVar7)
                  - pfVar8[-2] * pfVar7[1];
          pfVar7 = pfVar7 + 4;
          pfVar8 = pfVar8 + -4;
        } while (iVar6 != 0);
      }
      if (iVar11 < iVar3) {
        pfVar7 = (float *)(param_1 + iVar10 * 4);
        iVar11 = iVar3 - iVar11;
        do {
          iVar10 = iVar9 * 4;
          pfVar7 = pfVar7 + -1;
          iVar9 = iVar9 + 1;
          iVar11 = iVar11 + -1;
          fVar2 = fVar2 - *(float *)(&stack0xffffffe0 + iVar10 + iVar1 + -0x20 + 0x20) * *pfVar7;
        } while (iVar11 != 0);
      }
      *(float *)(&stack0xffffffe0 + iVar9 * 4 + iVar1 + -0x20 + 0x20) = fVar2;
      *(float *)(param_4 + param_3 * 4) = fVar2;
      param_3 = param_3 + 1;
      local_8 = local_8 + 1;
    } while (param_3 < param_5);
  }
  return;
}


//// FUNCTION FUN_00c618b0 @ 00c618b0 ////

undefined * __fastcall FUN_00c618b0(int param_1)

{
  return (&PTR_DAT_00f85f50)[param_1];
}


//// FUNCTION FUN_00c618c0 @ 00c618c0 ////

void __fastcall
FUN_00c618c0(undefined4 *param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  undefined4 *puVar15;
  
  uVar6 = -(uint)(param_5 != 0) & param_4;
  uVar9 = -(uint)(param_5 != 0) & param_6;
  puVar3 = (&PTR_DAT_00f85f50)[*(int *)(param_2 + uVar9 * 4)];
  pfVar8 = (float *)(&PTR_DAT_00f85f50)[*(int *)(param_2 + uVar6 * 4)];
  iVar12 = *(int *)(param_3 + uVar6 * 4);
  iVar11 = *(int *)(param_3 + param_5 * 4);
  iVar4 = *(int *)(param_3 + uVar9 * 4);
  iVar10 = (int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2;
  iVar13 = iVar10 - ((int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2);
  iVar10 = (iVar11 / 2 - ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2)) + iVar10;
  iVar1 = iVar4 / 2 + iVar10;
  iVar7 = iVar13;
  puVar15 = param_1;
  iVar5 = 0;
  if (0 < iVar13) {
    for (; iVar5 = iVar13, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
  }
  for (; iVar5 < iVar12 / 2 + iVar13; iVar5 = iVar5 + 1) {
    fVar2 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    param_1[iVar5] = fVar2 * (float)param_1[iVar5];
  }
  iVar12 = iVar4 / 2 + -1;
  if (3 < iVar1 - iVar10) {
    iVar4 = iVar12 * 4;
    iVar7 = ((iVar1 - iVar10) - 4U >> 2) + 1;
    iVar5 = iVar10 + 2;
    iVar10 = iVar10 + iVar7 * 4;
    iVar12 = iVar12 + iVar7 * -4;
    pfVar8 = (float *)(param_1 + iVar5);
    pfVar14 = (float *)(puVar3 + iVar4 + -8);
    do {
      iVar7 = iVar7 + -1;
      pfVar8[-2] = pfVar14[2] * pfVar8[-2];
      pfVar8[-1] = pfVar14[1] * pfVar8[-1];
      *pfVar8 = *pfVar14 * *pfVar8;
      pfVar8[1] = pfVar14[-1] * pfVar8[1];
      pfVar8 = pfVar8 + 4;
      pfVar14 = pfVar14 + -4;
    } while (iVar7 != 0);
  }
  if (iVar10 < iVar1) {
    pfVar8 = (float *)(puVar3 + iVar12 * 4);
    iVar12 = iVar10;
    do {
      fVar2 = *pfVar8;
      pfVar8 = pfVar8 + -1;
      iVar10 = iVar12 + 1;
      param_1[iVar12] = fVar2 * (float)param_1[iVar12];
      iVar12 = iVar10;
    } while (iVar10 < iVar1);
  }
  if (iVar10 < iVar11) {
    puVar15 = param_1 + iVar10;
    for (iVar11 = iVar11 - iVar10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00c61a40 @ 00c61a40 ////

void __thiscall FUN_00c61a40(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_00dad3f8;
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION SetVtable_00dad3f8_00c61a60 @ 00c61a60 ////

void __fastcall SetVtable_00dad3f8_00c61a60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad3f8;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c61a70 @ 00c61a70 ////

undefined4 * __thiscall ScalarDeletingDtor_00c61a70(void *this,byte param_1)

{
  SetVtable_00dad3f8_00c61a60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c61a90 @ 00c61a90 ////

ulonglong FUN_00c61a90(void)

{
  ulonglong uVar1;
  
  _rand();
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_00c61b10 @ 00c61b10 ////

void __fastcall FUN_00c61b10(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0xc0daf00d;
  *param_1 = 0xc0daf00d;
  return;
}


//// FUNCTION FUN_00c61b30 @ 00c61b30 ////

void __fastcall FUN_00c61b30(undefined4 *param_1)

{
  char cVar1;
  
  FUN_00c13580(&DAT_010d5f50);
  if (DAT_010d6030 == (FARPROC)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
    }
    else {
      DAT_010d6030 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetError");
    }
  }
  (*DAT_010d6030)();
  cVar1 = DAT_010d6100;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    if (DAT_010d5f6c == (FARPROC)0x0) {
      DAT_010d5f6c = GetProcAddress(DAT_010d5f54,"alcSuspendContext");
    }
    (*DAT_010d5f6c)(DAT_010d6050);
    DAT_010d6100 = '\x01';
    if (DAT_010d5f80 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5f80 = GetProcAddress(DAT_010d5f54,"alDeleteBuffers");
      }
      else {
        DAT_010d5f80 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alDeleteBuffers");
      }
    }
    (*DAT_010d5f80)(1,param_1);
    if (cVar1 == '\0') {
      if (DAT_010d5f70 == (FARPROC)0x0) {
        DAT_010d5f70 = GetProcAddress(DAT_010d5f54,"alcProcessContext");
      }
      (*DAT_010d5f70)(DAT_010d6050);
      DAT_010d6100 = '\0';
    }
    if (DAT_010d6030 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
      }
      else {
        DAT_010d6030 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetError");
      }
    }
    (*DAT_010d6030)();
  }
  cVar1 = DAT_010d6100;
  if ((*(byte *)(param_1 + 2) & 2) != 0) {
    if (DAT_010d5f6c == (FARPROC)0x0) {
      DAT_010d5f6c = GetProcAddress(DAT_010d5f54,"alcSuspendContext");
    }
    (*DAT_010d5f6c)(DAT_010d6050);
    DAT_010d6100 = '\x01';
    if (DAT_010d5f80 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5f80 = GetProcAddress(DAT_010d5f54,"alDeleteBuffers");
      }
      else {
        DAT_010d5f80 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alDeleteBuffers");
      }
    }
    (*DAT_010d5f80)(1,param_1 + 1);
    if (cVar1 == '\0') {
      if (DAT_010d5f70 == (FARPROC)0x0) {
        DAT_010d5f70 = GetProcAddress(DAT_010d5f54,"alcProcessContext");
      }
      (*DAT_010d5f70)(DAT_010d6050);
      DAT_010d6100 = '\0';
    }
    if (DAT_010d6030 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
      }
      else {
        DAT_010d6030 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetError");
      }
    }
    (*DAT_010d6030)();
  }
  param_1[1] = 0xc0daf00d;
  *param_1 = 0xc0daf00d;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


//// FUNCTION FUN_00c61d60 @ 00c61d60 ////

undefined4 __thiscall FUN_00c61d60(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (2 < (uint)param_1[1]) {
    return 0xfffffff2;
  }
  if (DAT_010d6030 == (FARPROC)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
    }
    else {
      DAT_010d6030 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetError");
    }
  }
  (*DAT_010d6030)();
  cVar1 = DAT_010d6100;
  if (DAT_010d5f6c == (FARPROC)0x0) {
    DAT_010d5f6c = GetProcAddress(DAT_010d5f54,"alcSuspendContext");
  }
  (*DAT_010d5f6c)(DAT_010d6050);
  DAT_010d6100 = '\x01';
  if (DAT_010d5f7c == (FARPROC)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d5f7c = GetProcAddress(DAT_010d5f54,"alGenBuffers");
    }
    else {
      DAT_010d5f7c = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGenBuffers");
    }
  }
  (*DAT_010d5f7c)(1,this);
  if (cVar1 == '\0') {
    if (DAT_010d5f70 == (FARPROC)0x0) {
      DAT_010d5f70 = GetProcAddress(DAT_010d5f54,"alcProcessContext");
    }
    (*DAT_010d5f70)(DAT_010d6050);
    DAT_010d6100 = '\0';
  }
  iVar2 = FUN_00c44040(&DAT_010d5f50);
  if (-1 < iVar2) {
    if (*param_1 == 1) {
      iVar2 = (uint)(param_1[1] != 1) * 2 + 0x1101;
    }
    else if (*param_1 == 2) {
      iVar2 = (uint)(param_1[1] != 1) * 2 + 0x1100;
    }
    else {
      iVar2 = 0;
    }
    FUN_00c14850(&DAT_010d5f50,*(undefined4 *)this,iVar2,param_1[6],param_1[3],param_1[2]);
    iVar2 = FUN_00c44040(&DAT_010d5f50);
    cVar1 = DAT_010d6100;
    if (-1 < iVar2) {
      *(int **)((int)this + 0xc) = param_1;
      *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 1;
      DAT_010d6104 = DAT_010d6104 + 1;
      return 0;
    }
    FUN_00c12a50(0x10d5f50);
    FUN_00c14800(&DAT_010d5f50,1,this);
    if (cVar1 == '\0') {
      FUN_00c12a90(0x10d5f50);
    }
    return 0xfffffff2;
  }
  return 0xfffffffb;
}


//// FUNCTION FUN_00c61f20 @ 00c61f20 ////

int __fastcall FUN_00c61f20(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  undefined4 local_8;
  
  iVar7 = FUN_00c0ef90(*(int *)(*(int *)(param_1 + 0xc) + 0xc) << 1);
  if (iVar7 == 0) {
    return -5;
  }
  piVar3 = *(int **)(param_1 + 0xc);
  if (*piVar3 == 1) {
    iVar9 = piVar3[6];
    uVar8 = 0;
    if ((piVar3[3] & 0xfffffffeU) != 0) {
      do {
        uVar2 = *(undefined2 *)(iVar9 + uVar8 * 2);
        *(undefined2 *)(iVar7 + uVar8 * 4) = uVar2;
        *(undefined2 *)(iVar7 + 2 + uVar8 * 4) = uVar2;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(*(int *)(param_1 + 0xc) + 0xc) >> 1);
    }
    local_8 = 0x1103;
  }
  else {
    if (*piVar3 != 2) {
      FUN_00c0efa0(iVar7);
      return -0xe;
    }
    iVar9 = piVar3[6];
    uVar8 = 0;
    if (piVar3[3] != 0) {
      do {
        uVar1 = *(undefined1 *)(uVar8 + iVar9);
        *(undefined1 *)(iVar7 + uVar8 * 2) = uVar1;
        *(undefined1 *)(iVar7 + 1 + uVar8 * 2) = uVar1;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(*(int *)(param_1 + 0xc) + 0xc));
    }
    local_8 = 0x1102;
  }
  pcVar10 = GetProcAddress_exref;
  if (DAT_010d6030 == (FARPROC)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
    }
    else {
      DAT_010d6030 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetError");
      pcVar10 = GetProcAddress_exref;
    }
  }
  (*DAT_010d6030)();
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    if (DAT_010d6030 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d6030 = (FARPROC)(*pcVar10)(DAT_010d5f54);
      }
      else {
        DAT_010d6030 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetError");
      }
    }
    (*DAT_010d6030)();
    cVar6 = DAT_010d6100;
    if (DAT_010d5f6c == (code *)0x0) {
      DAT_010d5f6c = (code *)(*pcVar10)(DAT_010d5f54,"alcSuspendContext");
    }
    (*DAT_010d5f6c)(DAT_010d6050);
    DAT_010d6100 = '\x01';
    if (DAT_010d5f7c == (code *)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5f7c = (code *)(*pcVar10)(DAT_010d5f54);
      }
      else {
        DAT_010d5f7c = (code *)FUN_00c12920(&DAT_010d5f50,"alGenBuffers");
      }
    }
    (*DAT_010d5f7c)(1,param_1 + 4);
    if (cVar6 == '\0') {
      if (DAT_010d5f70 == (code *)0x0) {
        DAT_010d5f70 = (code *)(*pcVar10)(DAT_010d5f54,"alcProcessContext");
      }
      (*DAT_010d5f70)(DAT_010d6050);
      DAT_010d6100 = '\0';
    }
    iVar9 = FUN_00c44040(&DAT_010d5f50);
    if (iVar9 < 0) {
      FUN_00c0efa0(iVar7);
      return iVar9;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  }
  iVar9 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 8);
  uVar5 = *(undefined4 *)(param_1 + 4);
  if (DAT_010d5f88 == (FARPROC)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d5f88 = GetProcAddress(DAT_010d5f54,"alBufferData");
    }
    else {
      DAT_010d5f88 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alBufferData");
    }
  }
  (*DAT_010d5f88)(uVar5,local_8,iVar7,iVar9 << 1,uVar4);
  pcVar10 = GetProcAddress_exref;
  if (DAT_010d6030 == (FARPROC)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
    }
    else {
      DAT_010d6030 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetError");
      pcVar10 = GetProcAddress_exref;
    }
  }
  iVar9 = (*DAT_010d6030)();
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (uint)(iVar9 == 0xa005) * 4 + -9;
  }
  FUN_00c0efa0(iVar7);
  cVar6 = DAT_010d6100;
  if (-1 < iVar9) {
    return 0;
  }
  if (DAT_010d5f6c == (code *)0x0) {
    DAT_010d5f6c = (code *)(*pcVar10)(DAT_010d5f54,"alcSuspendContext");
  }
  (*DAT_010d5f6c)(DAT_010d6050);
  DAT_010d6100 = '\x01';
  if (DAT_010d5f80 == (code *)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d5f80 = (code *)(*pcVar10)(DAT_010d5f54);
    }
    else {
      DAT_010d5f80 = (code *)FUN_00c12920(&DAT_010d5f50,"alDeleteBuffers");
    }
  }
  (*DAT_010d5f80)(1,(undefined4 *)(param_1 + 4));
  if (cVar6 == '\0') {
    if (DAT_010d5f70 == (code *)0x0) {
      DAT_010d5f70 = (code *)(*pcVar10)(DAT_010d5f54,"alcProcessContext");
    }
    (*DAT_010d5f70)(DAT_010d6050);
    DAT_010d6100 = '\0';
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
  *(undefined4 *)(param_1 + 4) = 0xc0daf00d;
  return iVar9;
}


//// FUNCTION FUN_00c622d0 @ 00c622d0 ////

int __thiscall FUN_00c622d0(void *this,int *param_1)

{
  int iVar1;
  
  if (2 < (uint)param_1[1]) {
    return -0xe;
  }
  if ((*(byte *)((int)this + 8) & 1) == 0) {
    iVar1 = FUN_00c61d60(this,param_1);
    return iVar1;
  }
  FUN_00c14b20(&DAT_010d5f50);
  if (*param_1 == 1) {
    iVar1 = (uint)(param_1[1] != 1) * 2 + 0x1101;
  }
  else if (*param_1 == 2) {
    iVar1 = (uint)(param_1[1] != 1) * 2 + 0x1100;
  }
  else {
    iVar1 = 0;
  }
  FUN_00c14850(&DAT_010d5f50,*(undefined4 *)this,iVar1,param_1[6],param_1[3],param_1[2]);
  iVar1 = FUN_00c44040(&DAT_010d5f50);
  if ((-1 < iVar1) && ((*(byte *)((int)this + 8) & 2) != 0)) {
    iVar1 = FUN_00c61f20((int)this);
  }
  return iVar1;
}


//// FUNCTION FUN_00c62370 @ 00c62370 ////

int __fastcall FUN_00c62370(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bdfdf0(DAT_010da234);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0xffffd8f0;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffd8f0;
    *(undefined4 *)(param_1 + 0x44) = 0xffffd8f0;
    *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x40) = 0x3ca3d70a;
    *(undefined4 *)(param_1 + 0x48) = 0x3d23d70a;
    *(undefined4 *)(param_1 + 0x4c) = 0x40f00000;
    *(undefined4 *)(param_1 + 0x58) = 0x3d99999a;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x3d23d70a;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 5000;
    *(undefined4 *)(param_1 + 0x6c) = 200;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0xfffffffb;
    *(undefined4 *)(param_1 + 0x78) = 0xfffff;
    DAT_010daa08 = 0x1000000;
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00c62420 @ 00c62420 ////

void __fastcall FUN_00c62420(int param_1)

{
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_00bdfee0(DAT_010da234);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  DAT_010daa08 = DAT_010daa08 | 0x1000000;
  return;
}


//// FUNCTION FUN_00c62450 @ 00c62450 ////

void __thiscall FUN_00c62450(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(uint *)((int)this + 0x78) = *(uint *)((int)this + 0x78) | 0xfffff;
  DAT_010daa08 = DAT_010daa08 | 0x1000000;
  return;
}


//// FUNCTION FUN_00c62930 @ 00c62930 ////

void __fastcall FUN_00c62930(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    fVar1 = *(float *)(param_1 + 0xc);
    fVar3 = *(float *)(param_1 + 0x10);
    fVar2 = *(float *)(param_1 + 0x14);
    fVar4 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    if (1.0 < fVar4) {
      fVar4 = 1.0 / fVar4;
      *(float *)(param_1 + 0xc) = fVar4 * fVar1;
      *(float *)(param_1 + 0x10) = fVar3 * fVar4;
      *(float *)(param_1 + 0x14) = fVar2 * fVar4;
    }
    fVar3 = *(float *)(param_1 + 0x1c);
    fVar1 = *(float *)(param_1 + 0x18);
    fVar2 = *(float *)(param_1 + 0x20);
    fVar4 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    if (1.0 < fVar4) {
      fVar4 = 1.0 / fVar4;
      *(float *)(param_1 + 0x18) = fVar4 * fVar1;
      *(float *)(param_1 + 0x1c) = fVar3 * fVar4;
      *(float *)(param_1 + 0x20) = fVar2 * fVar4;
    }
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x14))(param_1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return;
}


//// FUNCTION FUN_00c62a40 @ 00c62a40 ////

void __fastcall FUN_00c62a40(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c62a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x7c) + 0x18))();
  return;
}


//// FUNCTION FUN_00c62a50 @ 00c62a50 ////

float10 __cdecl FUN_00c62a50(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fscale((float10)1,ROUND((float10)3.321928 * (float10)param_1));
  fVar2 = (float10)f2xm1((float10)3.321928 * (float10)param_1 -
                         (float10)(float)ROUND((float10)3.321928 * (float10)param_1));
  return (float10)(float)((fVar2 + (float10)1.0) * fVar1);
}


//// FUNCTION FUN_00c62ad0 @ 00c62ad0 ////

float10 __cdecl FUN_00c62ad0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  if (param_1 < -9999) {
    return (float10)0.0;
  }
  fVar1 = ROUND((float10)3.321928 * (float10)((float)param_1 * 0.0005));
  fVar2 = (float10)fscale((float10)1,fVar1);
  fVar1 = (float10)f2xm1((float10)3.321928 * (float10)((float)param_1 * 0.0005) -
                         (float10)(float)fVar1);
  return (float10)(float)((fVar1 + (float10)1.0) * fVar2);
}


//// FUNCTION FUN_00c62b40 @ 00c62b40 ////

int __cdecl FUN_00c62b40(float param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1 != 0.0) {
    fVar2 = (float10)log2((float10)param_1);
    iVar1 = (int)ROUND((float)((float10)0.3010299956639812 * fVar2 * (float10)2000.0));
    if (-0x2711 < iVar1) {
      return iVar1;
    }
  }
  return -10000;
}


//// FUNCTION FUN_00c62c50 @ 00c62c50 ////

uint __thiscall FUN_00c62c50(void *this,uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1 & 0x100000) == 0) {
    if ((param_1 & 0x200000) == 0) {
      *(uint *)((int)this + 0x1cc) = param_1 & 0x400000;
    }
    else {
      *(undefined4 *)((int)this + 0x1cc) = 0x200000;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x1cc) = 0x100000;
  }
  uVar2 = FUN_00c497b0(this,param_1);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  if (((DAT_00ea7a4c == 0) || ((param_1 & ~DAT_00ea7a50) != 0)) && (DAT_00ea7a7c == -1)) {
    iVar3 = FUN_00c0f8d0(DAT_010da234,this,(undefined4 *)((int)this + 0x50));
    if (iVar3 != 0) {
      FUN_00c37ce0(&DAT_010da230,iVar3);
      uVar2 = (**(code **)(*(int *)this + 0x10))();
      return uVar2 & 0xffffff00;
    }
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 0x20000;
  }
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0x3f800000;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0x3f800000;
  *(undefined4 *)((int)this + 400) = 0x168;
  *(undefined4 *)((int)this + 0x194) = 0x168;
  *(undefined4 *)((int)this + 0x17c) = 0x7f7fffff;
  *(undefined4 *)((int)this + 0x180) = 0x3f800000;
  *(undefined4 *)((int)this + 0x184) = 0x3f800000;
  *(undefined4 *)((int)this + 0x188) = 0x3f800000;
  *(undefined4 *)((int)this + 0x18c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x198) = 0x3f800000;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  if ((param_1 & 0x80) != 0) {
    *(undefined4 *)((int)this + 0x1a4) = 0;
    *(undefined4 *)((int)this + 0x1a8) = 0;
    *(undefined4 *)((int)this + 0x1ac) = 0;
    *(undefined4 *)((int)this + 0x1b0) = 0;
    *(undefined4 *)((int)this + 0x1b4) = 0;
    *(undefined4 *)((int)this + 0x1b8) = 0;
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(undefined4 *)((int)this + 0x1c0) = 0;
    *(undefined4 *)((int)this + 0x1c4) = 0x3f800000;
    *(undefined4 *)((int)this + 0x1c8) = 0x3f800000;
  }
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)((int)this + 0x158);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)((int)this + 0x15c);
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)((int)this + 0x160);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)((int)this + 0x164);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)((int)this + 0x168);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)((int)this + 0x16c);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)((int)this + 0x170);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)((int)this + 0x174);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)((int)this + 0x178);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)this + 0x158);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)this + 0x15c);
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)((int)this + 0x160);
  *(undefined4 *)((int)this + 300) = 0x3f800000;
  *(undefined4 *)((int)this + 0x130) = 0x3f800000;
  *(undefined4 *)((int)this + 0x134) = 0x3f800000;
  *(undefined4 *)((int)this + 0x138) = 0x3f800000;
  *(undefined4 *)((int)this + 0x154) = 0x3f800000;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  uVar1 = DAT_010da2b8;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x144) = uVar1;
  *(uint *)((int)this + 0x148) = ((param_1 & 0x80) != 0) - 1 & 0xffffd8f0;
  *(undefined4 *)((int)this + 0x150) = 5000;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00c62f10 @ 00c62f10 ////

void __thiscall FUN_00c62f10(void *this,float *param_1)

{
  if (((*(float *)((int)this + 0x158) != *param_1) || (*(float *)((int)this + 0x15c) != param_1[1]))
     || (*(float *)((int)this + 0x160) != param_1[2])) {
    *(float *)((int)this + 0x158) = *param_1;
    *(float *)((int)this + 0x15c) = param_1[1];
    *(float *)((int)this + 0x160) = param_1[2];
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x8000;
  }
  return;
}


//// FUNCTION FUN_00c62f70 @ 00c62f70 ////

void __thiscall FUN_00c62f70(void *this,float *param_1)

{
  if (((*(float *)((int)this + 0x164) != *param_1) || (*(float *)((int)this + 0x168) != param_1[1]))
     || (*(float *)((int)this + 0x16c) != param_1[2])) {
    *(float *)((int)this + 0x164) = *param_1;
    *(float *)((int)this + 0x168) = param_1[1];
    *(float *)((int)this + 0x16c) = param_1[2];
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x10000;
  }
  return;
}


//// FUNCTION FUN_00c62fd0 @ 00c62fd0 ////

void __thiscall FUN_00c62fd0(void *this,float *param_1)

{
  if (((*(float *)((int)this + 0x170) != *param_1) || (*(float *)((int)this + 0x174) != param_1[1]))
     || (*(float *)((int)this + 0x178) != param_1[2])) {
    *(float *)((int)this + 0x170) = *param_1;
    *(float *)((int)this + 0x174) = param_1[1];
    *(float *)((int)this + 0x178) = param_1[2];
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x80000;
  }
  return;
}


//// FUNCTION FUN_00c63030 @ 00c63030 ////

void __thiscall FUN_00c63030(void *this,float param_1)

{
  if (*(float *)((int)this + 0x17c) != param_1) {
    *(float *)((int)this + 0x17c) = param_1;
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x40000;
  }
  return;
}


//// FUNCTION FUN_00c63120 @ 00c63120 ////

void __thiscall FUN_00c63120(void *this,int param_1)

{
  if (*(int *)((int)this + 400) != param_1) {
    *(int *)((int)this + 400) = param_1;
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x100000;
  }
  return;
}


//// FUNCTION FUN_00c63140 @ 00c63140 ////

void __thiscall FUN_00c63140(void *this,int param_1)

{
  if (*(int *)((int)this + 0x194) != param_1) {
    *(int *)((int)this + 0x194) = param_1;
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x100000;
  }
  return;
}


//// FUNCTION FUN_00c63190 @ 00c63190 ////

void __thiscall FUN_00c63190(void *this,int param_1)

{
  if (*(int *)((int)this + 0x19c) != param_1) {
    *(int *)((int)this + 0x19c) = param_1;
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x400000;
  }
  return;
}


//// FUNCTION FUN_00c631b0 @ 00c631b0 ////

void __thiscall FUN_00c631b0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x1a0) != param_1) {
    *(int *)((int)this + 0x1a0) = param_1;
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x400000;
  }
  return;
}


//// FUNCTION FUN_00c63390 @ 00c63390 ////

void __thiscall FUN_00c63390(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x1d0) = param_1;
  *(undefined4 *)((int)this + 0x1d4) = param_2;
  *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x40000;
  return;
}


//// FUNCTION FUN_00c633e0 @ 00c633e0 ////

void __thiscall FUN_00c633e0(void *this,char param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (param_1 == '\0') {
    if ((uVar1 & 0x40000) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfffbffff;
  }
  else {
    if ((uVar1 & 0x40000) != 0) {
      return;
    }
    uVar1 = uVar1 | 0x40000;
  }
  *(uint *)((int)this + 0x10) = uVar1;
  uVar1 = 0xbf8000;
  if ((*(uint *)((int)this + 0xc) & 0x2000) == 0) {
    uVar1 = 0x1ff8000;
  }
  *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | uVar1;
  return;
}


//// FUNCTION FUN_00c634e0 @ 00c634e0 ////

float10 FUN_00c634e0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 1.0;
    return (float10)0.0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  FUN_00c38fb0(param_1);
  return (float10)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
}


//// FUNCTION FUN_00c63580 @ 00c63580 ////

float10 __fastcall FUN_00c63580(int param_1)

{
  float10 fVar1;
  
  if (((*(uint *)(param_1 + 0x10) >> 0x13 & 1) != 0) &&
     (*(float *)(param_1 + 0x17c) <= *(float *)(param_1 + 300))) {
    return (float10)0.0;
  }
  fVar1 = (float10)FUN_00ace9b0();
  return fVar1;
}


//// FUNCTION FUN_00c63610 @ 00c63610 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00c63610(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)1.0 -
          ((float10)*(float *)(param_1 + 0x120) * (float10)*(float *)(param_1 + 0x108) +
          (float10)*(float *)(param_1 + 0x124) * (float10)*(float *)(param_1 + 0x10c) +
          (float10)*(float *)(param_1 + 0x128) * (float10)*(float *)(param_1 + 0x110)) *
          (float10)*(float *)(param_1 + 0x18c) * (float10)_DAT_010da2c8;
  if (fVar1 < (float10)0.0) {
    fVar1 = (float10)0.0;
  }
  return fVar1;
}


//// FUNCTION FUN_00c63660 @ 00c63660 ////

float10 __fastcall FUN_00c63660(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)*(float *)(param_1 + 0x114) - (float10)*(float *)(param_1 + 0x120);
  fVar5 = (float10)*(float *)(param_1 + 0x118) - (float10)*(float *)(param_1 + 0x124);
  fVar6 = (float10)*(float *)(param_1 + 0x11c) - (float10)*(float *)(param_1 + 0x128);
  fVar1 = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 0x114);
  fVar2 = *(float *)(param_1 + 0x124) + *(float *)(param_1 + 0x118);
  fVar3 = *(float *)(param_1 + 0x128) + *(float *)(param_1 + 0x11c);
  fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
  fVar5 = SQRT((float10)fVar1 * (float10)fVar1 +
               (float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3);
  if (fVar4 <= fVar5) {
    fVar4 = (float10)fpatan(fVar4,fVar5);
    fVar4 = (float10)360.0 - fVar4 * (float10)229.1831;
  }
  else {
    fVar4 = (float10)fpatan(fVar5,fVar4);
    fVar4 = fVar4 * (float10)229.1831;
  }
  fVar1 = (float)*(int *)(param_1 + 400);
  if (*(int *)(param_1 + 400) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)*(int *)(param_1 + 0x194);
  if (*(int *)(param_1 + 0x194) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  if (fVar4 < (float10)fVar1 != (fVar4 == (float10)fVar1)) {
    return (float10)1.0;
  }
  if ((float10)fVar2 <= fVar4) {
    return (float10)*(float *)(param_1 + 0x198);
  }
  return (((float10)*(float *)(param_1 + 0x198) - (float10)1.0) * (fVar4 - (float10)fVar1)) /
         ((float10)fVar2 - (float10)fVar1) + (float10)1.0;
}


//// FUNCTION FUN_00c637a0 @ 00c637a0 ////

float10 __fastcall FUN_00c637a0(int param_1)

{
  float10 fVar1;
  
  if (((*(uint *)(param_1 + 0x10) >> 0x13 & 1) != 0) &&
     (*(float *)(param_1 + 0x17c) <= *(float *)(param_1 + 300))) {
    return (float10)0.0;
  }
  fVar1 = (float10)FUN_00ace9b0();
  return fVar1;
}


//// FUNCTION FUN_00c63830 @ 00c63830 ////

void __thiscall FUN_00c63830(void *this,float *param_1)

{
  void *this_00;
  void *this_01;
  int extraout_ECX;
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = param_1[1];
  local_c = *param_1;
  local_4 = param_1[2];
  FUN_00c62f10(this,&local_c);
  local_8 = param_1[4];
  local_c = param_1[3];
  local_4 = param_1[5];
  FUN_00c62f70(this_00,&local_c);
  local_8 = param_1[7];
  local_c = param_1[6];
  local_4 = param_1[8];
  FUN_00c62fd0(this_01,&local_c);
  if (*(float *)(extraout_ECX + 0x17c) != param_1[0xe]) {
    *(float *)(extraout_ECX + 0x17c) = param_1[0xe];
    *(uint *)(extraout_ECX + 0x1d8) = *(uint *)(extraout_ECX + 0x1d8) | 0x40000;
  }
  if (*(float *)(extraout_ECX + 0x180) != param_1[0xc]) {
    *(float *)(extraout_ECX + 0x180) = param_1[0xc];
    *(uint *)(extraout_ECX + 0x1d8) = *(uint *)(extraout_ECX + 0x1d8) | 0x40000;
  }
  if (*(float *)(extraout_ECX + 0x184) != param_1[0xd]) {
    *(float *)(extraout_ECX + 0x184) = param_1[0xd];
    *(uint *)(extraout_ECX + 0x1d8) = *(uint *)(extraout_ECX + 0x1d8) | 0x40000;
  }
  if (*(float *)(extraout_ECX + 400) != param_1[9]) {
    *(float *)(extraout_ECX + 400) = param_1[9];
    *(uint *)(extraout_ECX + 0x1d8) = *(uint *)(extraout_ECX + 0x1d8) | 0x100000;
  }
  if (*(float *)(extraout_ECX + 0x194) != param_1[10]) {
    *(float *)(extraout_ECX + 0x194) = param_1[10];
    *(uint *)(extraout_ECX + 0x1d8) = *(uint *)(extraout_ECX + 0x1d8) | 0x100000;
  }
  if (*(float *)(extraout_ECX + 0x198) != param_1[0xb]) {
    *(float *)(extraout_ECX + 0x198) = param_1[0xb];
    *(uint *)(extraout_ECX + 0x1d8) = *(uint *)(extraout_ECX + 0x1d8) | 0x200000;
  }
  if (*(float *)(extraout_ECX + 0x188) != param_1[0xf]) {
    *(float *)(extraout_ECX + 0x188) = param_1[0xf];
    *(uint *)(extraout_ECX + 0x1d8) = *(uint *)(extraout_ECX + 0x1d8) | 0x40000;
  }
  if (*(float *)(extraout_ECX + 0x18c) != param_1[0x10]) {
    *(float *)(extraout_ECX + 0x18c) = param_1[0x10];
    *(uint *)(extraout_ECX + 0x1d8) = *(uint *)(extraout_ECX + 0x1d8) | 0x10000;
  }
  if (*(float *)(extraout_ECX + 0x19c) != param_1[0x11]) {
    *(float *)(extraout_ECX + 0x19c) = param_1[0x11];
    *(uint *)(extraout_ECX + 0x1d8) = *(uint *)(extraout_ECX + 0x1d8) | 0x400000;
  }
  if (*(float *)(extraout_ECX + 0x1a0) != param_1[0x12]) {
    *(float *)(extraout_ECX + 0x1a0) = param_1[0x12];
    *(uint *)(extraout_ECX + 0x1d8) = *(uint *)(extraout_ECX + 0x1d8) | 0x400000;
  }
  return;
}


//// FUNCTION FUN_00c63a30 @ 00c63a30 ////

void __thiscall FUN_00c63a30(void *this,int *param_1)

{
  if (*(int *)((int)this + 0x1a4) != *param_1) {
    *(int *)((int)this + 0x1a4) = *param_1;
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x1000000;
  }
  if (*(int *)((int)this + 0x1a8) != param_1[1]) {
    *(int *)((int)this + 0x1a8) = param_1[1];
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x1000000;
  }
  if (*(int *)((int)this + 0x1ac) != param_1[2]) {
    *(int *)((int)this + 0x1ac) = param_1[2];
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x400000;
  }
  if (*(float *)((int)this + 0x1b0) != (float)param_1[3]) {
    *(int *)((int)this + 0x1b0) = param_1[3];
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x400000;
  }
  if (*(int *)((int)this + 0x1b4) != param_1[4]) {
    *(int *)((int)this + 0x1b4) = param_1[4];
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x1400000;
  }
  if (*(float *)((int)this + 0x1b8) != (float)param_1[5]) {
    *(int *)((int)this + 0x1b8) = param_1[5];
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x1400000;
  }
  if (*(int *)((int)this + 0x1bc) != param_1[6]) {
    *(int *)((int)this + 0x1bc) = param_1[6];
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x1000000;
  }
  if (*(float *)((int)this + 0x1c0) != (float)param_1[7]) {
    *(int *)((int)this + 0x1c0) = param_1[7];
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x1000000;
  }
  if (*(float *)((int)this + 0x1c4) != (float)param_1[8]) {
    *(int *)((int)this + 0x1c4) = param_1[8];
    *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x1000000;
  }
  if (*(float *)((int)this + 0x1c8) == (float)param_1[9]) {
    return;
  }
  *(int *)((int)this + 0x1c8) = param_1[9];
  *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x1000000;
  return;
}


//// FUNCTION FUN_00c63ba0 @ 00c63ba0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00c63ba0(void *this,int param_1,int param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int extraout_EDX;
  int iVar7;
  float10 fVar8;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar5 = *(uint *)((int)this + 0x1d8) | (uint)param_3;
  *(uint *)((int)this + 0x1d8) = uVar5;
  if (uVar5 != 0) {
    if ((*(uint *)((int)this + 0x10) >> 0x12 & 1) == 0) {
      if ((uVar5 & 0x20000) != 0) {
        *(uint *)((int)this + 0x1d8) = uVar5 | 0x8000;
      }
      iVar7 = *(int *)(param_1 + 4);
      local_18 = *(float *)((int)this + 0x158) - *(float *)(iVar7 + 0xc);
      local_14 = *(float *)((int)this + 0x15c) - *(float *)(iVar7 + 0x10);
      local_10 = *(float *)((int)this + 0x160) - *(float *)(iVar7 + 0x14);
      param_3 = local_18 * local_18 + local_14 * local_14 + local_10 * local_10;
      for (iVar4 = *(int *)(iVar7 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
        fVar2 = *(float *)((int)this + 0x158) - *(float *)(iVar4 + 0xc);
        local_8 = *(float *)((int)this + 0x15c) - *(float *)(iVar4 + 0x10);
        local_4 = *(float *)((int)this + 0x160) - *(float *)(iVar4 + 0x14);
        fVar3 = fVar2 * fVar2 + local_8 * local_8 + local_4 * local_4;
        if (fVar3 < param_3) {
          iVar7 = iVar4;
          param_3 = fVar3;
          local_18 = fVar2;
          local_14 = local_8;
          local_10 = local_4;
        }
      }
      uVar5 = *(uint *)((int)this + 0x1d8);
      if ((uVar5 & 0x88000) != 0) {
        local_8 = *(float *)(iVar7 + 0x40);
        local_4 = *(float *)(iVar7 + 0x44);
        local_c = _DAT_010da2bc * *(float *)(iVar7 + 0x3c);
      }
      if ((char)(uVar5 >> 8) < '\0') {
        *(float *)((int)this + 0xfc) = local_18 * local_c + local_8 * local_14 + local_4 * local_10;
        *(float *)((int)this + 0x100) =
             local_18 * *(float *)(iVar7 + 0x30) +
             local_14 * *(float *)(iVar7 + 0x34) + local_10 * *(float *)(iVar7 + 0x38);
        *(float *)((int)this + 0x104) =
             local_18 * *(float *)(iVar7 + 0x24) +
             local_14 * *(float *)(iVar7 + 0x28) + local_10 * *(float *)(iVar7 + 0x2c);
      }
      if ((uVar5 & 0x10000) != 0) {
        fVar2 = *(float *)(iVar7 + 0x18);
        fVar3 = *(float *)(iVar7 + 0x1c);
        *(float *)((int)this + 0x110) = *(float *)((int)this + 0x16c) - *(float *)(iVar7 + 0x20);
        *(float *)((int)this + 0x108) = *(float *)((int)this + 0x164) - fVar2;
        *(float *)((int)this + 0x10c) = *(float *)((int)this + 0x168) - fVar3;
      }
      if ((*(uint *)((int)this + 0x1d8) & 0x80000) != 0) {
        pfVar1 = (float *)((int)this + 0x170);
        FUN_00c38fb0(pfVar1);
        *(float *)((int)this + 0x114) =
             local_c * *pfVar1 +
             local_8 * *(float *)((int)this + 0x174) + local_4 * *(float *)((int)this + 0x178);
        *(float *)((int)this + 0x118) =
             *(float *)(iVar7 + 0x30) * *pfVar1 +
             *(float *)(iVar7 + 0x34) * *(float *)((int)this + 0x174) +
             *(float *)(iVar7 + 0x38) * *(float *)((int)this + 0x178);
        *(float *)((int)this + 0x11c) =
             *(float *)(iVar7 + 0x24) * *pfVar1 +
             *(float *)(iVar7 + 0x28) * *(float *)((int)this + 0x174) +
             *(float *)(iVar7 + 0x2c) * *(float *)((int)this + 0x178);
      }
    }
    else {
      iVar7 = 0;
      if ((char)(uVar5 >> 8) < '\0') {
        *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)((int)this + 0x158);
        *(undefined4 *)((int)this + 0x100) = *(undefined4 *)((int)this + 0x15c);
        *(undefined4 *)((int)this + 0x104) = *(undefined4 *)((int)this + 0x160);
      }
      if ((*(uint *)((int)this + 0x1d8) & 0x10000) != 0) {
        *(undefined4 *)((int)this + 0x108) = *(undefined4 *)((int)this + 0x164);
        *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)((int)this + 0x168);
        *(undefined4 *)((int)this + 0x110) = *(undefined4 *)((int)this + 0x16c);
      }
      if ((*(uint *)((int)this + 0x1d8) & 0x80000) != 0) {
        FUN_00c38fb0((float *)((int)this + 0x170));
        *(float *)((int)this + 0x114) = *(float *)((int)this + 0x170);
        *(undefined4 *)((int)this + 0x118) = *(undefined4 *)((int)this + 0x174);
        *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)((int)this + 0x178);
      }
    }
    if ((char)((uint)*(undefined4 *)((int)this + 0x1d8) >> 8) < '\0') {
      fVar8 = FUN_00c634e0((float *)((int)this + 0x120),(float *)((int)this + 0xfc));
      *(float *)((int)this + 300) = (float)fVar8;
      *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0xd0000;
    }
    if ((*(uint *)((int)this + 0x1d8) & 0x40000) != 0) {
      if (*(code **)((int)this + 0x1d0) == (code *)0x0) {
        fVar8 = FUN_00c63580((int)this);
      }
      else {
        fVar8 = (float10)(**(code **)((int)this + 0x1d0))
                                   (this,iVar7,*(undefined4 *)((int)this + 300),
                                    *(undefined4 *)((int)this + 0x1d4));
      }
      *(float *)((int)this + 0x130) = (float)fVar8;
      *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x1800000;
    }
    uVar5 = *(uint *)((int)this + 0x1d8);
    if ((uVar5 & 0x10000) != 0) {
      fVar8 = FUN_00c63610((int)this);
      *(float *)((int)this + 0x138) = (float)fVar8;
    }
    if ((uVar5 & 0x380000) != 0) {
      fVar8 = FUN_00c63660((int)this);
      *(float *)((int)this + 0x134) = (float)fVar8;
      *(uint *)((int)this + 0x1d8) = uVar5 | 0x200000;
    }
    if ((*(uint *)((int)this + 0x1d8) & 0x1400000) != 0) {
      *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)((int)this + 0x19c);
      *(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)this + 0x1a0);
      *(undefined4 *)((int)this + 0x144) = DAT_010da2b8;
      *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) | 0x1400000;
    }
    if ((*(uint *)((int)this + 0xc) & 0x1000) == 0) {
      *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) & 0xffbfffff;
    }
    if (-1 < (char)*(uint *)((int)this + 0xc)) {
      *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) & 0xfeffffff;
    }
    if (((*(uint *)((int)this + 0x1d8) & 0x1000000) != 0) &&
       (iVar7 = *(int *)(param_2 + 4), iVar7 != 0)) {
      fVar8 = FUN_00c637a0((int)this);
      iVar4 = (int)ROUND(((float)*(int *)((int)this + 0x1b4) * *(float *)((int)this + 0x1b8) +
                         (float)*(int *)((int)this + 0x1ac) * *(float *)((int)this + 0x1b0)) - 0.5);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = *(int *)((int)this + 0x13c) + iVar4;
      *(int *)((int)this + 0x13c) = iVar4;
      iVar6 = -10000;
      if (iVar4 < -10000) {
        *(undefined4 *)((int)this + 0x13c) = 0xffffd8f0;
      }
      iVar4 = (int)ROUND(((float)*(int *)(iVar7 + 0x74) * *(float *)((int)this + 0x1c8) *
                          *(float *)((int)this + 300) +
                         (1.0 - *(float *)((int)this + 0x1b8)) * (float)*(int *)((int)this + 0x1b4)
                         + (1.0 - *(float *)((int)this + 0x1b0)) *
                           (float)*(int *)((int)this + 0x1ac)) - 0.5);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = *(int *)((int)this + 0x140) + iVar4;
      *(int *)((int)this + 0x140) = iVar4;
      if (iVar4 < -10000) {
        *(undefined4 *)((int)this + 0x140) = 0xffffd8f0;
      }
      *(undefined4 *)((int)this + 0x144) = *(undefined4 *)(iVar7 + 0x68);
      *(undefined4 *)((int)this + 0x148) = *(undefined4 *)((int)this + 0x1a4);
      iVar4 = (int)ROUND(((float)*(int *)((int)this + 0x1bc) * *(float *)((int)this + 0x1c0) +
                         (float)*(int *)((int)this + 0x1b4) * *(float *)((int)this + 0x1b8)) - 0.5);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      *(int *)((int)this + 0x148) = *(int *)((int)this + 0x148) + iVar4;
      if ((float)fVar8 != 1.0) {
        iVar4 = FUN_00c62b40((float)fVar8);
        *(int *)((int)this + 0x148) = *(int *)((int)this + 0x148) + iVar4;
        iVar6 = extraout_EDX;
      }
      if (*(int *)((int)this + 0x148) < iVar6) {
        *(int *)((int)this + 0x148) = iVar6;
      }
      else if (0 < *(int *)((int)this + 0x148)) {
        *(undefined4 *)((int)this + 0x148) = 0;
      }
      *(undefined4 *)((int)this + 0x14c) = *(undefined4 *)((int)this + 0x1a8);
      iVar4 = (int)ROUND(((1.0 - *(float *)((int)this + 0x1c0)) * (float)*(int *)((int)this + 0x1bc)
                         + (1.0 - *(float *)((int)this + 0x1b8)) *
                           (float)*(int *)((int)this + 0x1b4)) - 0.5);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = *(int *)((int)this + 0x14c) + iVar4;
      *(int *)((int)this + 0x14c) = iVar4;
      if (iVar4 < iVar6) {
        *(int *)((int)this + 0x14c) = iVar6;
      }
      *(undefined4 *)((int)this + 0x150) = *(undefined4 *)(iVar7 + 0x68);
    }
    if ((*(uint *)((int)this + 0xc) & 0x800000) == 0) {
      *(uint *)((int)this + 0x1d8) = *(uint *)((int)this + 0x1d8) & 0xff7fffff;
    }
    *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | *(uint *)((int)this + 0x1d8);
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  return;
}


//// FUNCTION FUN_00c641d0 @ 00c641d0 ////

undefined4 * __fastcall FUN_00c641d0(undefined4 *param_1)

{
  FUN_00c49740(param_1);
  param_1[0x47] = param_1 + 0x4a;
  *param_1 = &PTR_LAB_00dad424;
  param_1[0x49] = param_1 + 0x5a;
  return param_1;
}


//// FUNCTION FUN_00c644e0 @ 00c644e0 ////

void __thiscall FUN_00c644e0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x100) != param_1) {
    *(int *)((int)this + 0x100) = param_1;
    *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 0x2000;
  }
  return;
}


//// FUNCTION FUN_00c64500 @ 00c64500 ////

void __thiscall FUN_00c64500(void *this,int param_1)

{
  if (*(int *)((int)this + 0x104) != param_1) {
    *(int *)((int)this + 0x104) = param_1;
    *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) | 0x4000;
  }
  return;
}


//// FUNCTION FUN_00c64550 @ 00c64550 ////

undefined4 __fastcall FUN_00c64550(int param_1)

{
  uint in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0xc) & 0x40000) != 0) {
    *(int **)(param_1 + 0x108) = (int *)(param_1 + 0x118);
    iVar2 = 0;
    in_EAX = 1;
    if (0 < DAT_00ea7aac) {
      puVar1 = (undefined4 *)(param_1 + 300);
      do {
        for (; (in_EAX & DAT_00ea7ab0) == 0; in_EAX = in_EAX << 1) {
        }
        puVar1[-1] = in_EAX;
        *puVar1 = 0x3f800000;
        in_EAX = in_EAX << 1;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 2;
      } while (iVar2 < DAT_00ea7aac);
    }
    *(int *)(param_1 + 0x118) = DAT_00ea7aac;
  }
  if ((*(uint *)(param_1 + 0xc) & 0x20000) != 0) {
    *(int **)(param_1 + 0x10c) = (int *)(param_1 + 0x120);
    iVar2 = 0;
    in_EAX = 1;
    if (0 < DAT_00ea7aac) {
      puVar1 = (undefined4 *)(param_1 + 0x16c);
      do {
        for (; (in_EAX & DAT_00ea7ab0) == 0; in_EAX = in_EAX << 1) {
        }
        puVar1[-1] = in_EAX;
        *puVar1 = 0;
        in_EAX = in_EAX << 1;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 2;
      } while (iVar2 < DAT_00ea7aac);
    }
    *(int *)(param_1 + 0x120) = DAT_00ea7aac;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


//// FUNCTION ScalarDeletingDtor_00c64620 @ 00c64620 ////

int * __thiscall ScalarDeletingDtor_00c64620(void *this,byte param_1)

{
  thunk_FUN_00c37b80(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c64640 @ 00c64640 ////

uint __thiscall FUN_00c64640(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00c497b0(this,param_1);
  if ((char)uVar1 == '\0') {
LAB_00c646d8:
    return uVar1 & 0xffffff00;
  }
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(uint *)((int)this + 0x104) = (-(uint)((param_1 & 0x80) != 0) & 10000) - 10000;
  if (((DAT_00ea7a34 == 0) || ((param_1 & ~DAT_00ea7a38) != 0)) && (DAT_00ea7a64 == -1)) {
    iVar2 = FUN_00c0f800(DAT_010da234,this,(undefined4 *)((int)this + 0x50));
    if (iVar2 != 0) {
      FUN_00c37ce0(&DAT_010da230,iVar2);
      uVar1 = (**(code **)(*(int *)this + 0x10))();
      goto LAB_00c646d8;
    }
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 0x20000;
  }
  uVar1 = FUN_00c64550((int)this);
  return uVar1;
}


//// FUNCTION FUN_00c64740 @ 00c64740 ////

void FUN_00c64740(int *param_1)

{
  FUN_00c38260(&DAT_010da230,param_1);
  return;
}


//// FUNCTION FUN_00c64750 @ 00c64750 ////

bool FUN_00c64750(void *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else if ((((*(uint *)(param_2 + 0x2c) >> 2 & 1) != 0) &&
           ((*(uint *)(param_2 + 0x2c) >> 3 & 1) != 0)) && (*(int *)(param_2 + 0xc) != 0)) {
    FUN_00c37ce0(&DAT_010da230,-6);
    return false;
  }
  uVar1 = FUN_00c4a800(param_1,param_2);
  return (char)uVar1 != '\0';
}


//// FUNCTION FUN_00c647a0 @ 00c647a0 ////

bool FUN_00c647a0(void *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_00c4a8a0(param_1,param_2,param_3,param_4);
  return (char)uVar1 != '\0';
}


//// FUNCTION FUN_00c647d0 @ 00c647d0 ////

bool FUN_00c647d0(void *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((((*(uint *)(param_2 + 0x2c) >> 2 & 1) != 0) && ((*(uint *)(param_2 + 0x2c) >> 3 & 1) != 0))
     && (*(int *)(param_2 + 0xc) != 0)) {
    FUN_00c37ce0(&DAT_010da230,-6);
    return false;
  }
  uVar1 = FUN_00c4a960(param_1,param_2,param_3,param_4);
  return (char)uVar1 != '\0';
}


//// FUNCTION FUN_00c648b0 @ 00c648b0 ////

void FUN_00c648b0(void *param_1,float param_2)

{
  FUN_00c49930(param_1,param_2);
  return;
}


//// FUNCTION FUN_00c648d0 @ 00c648d0 ////

void FUN_00c648d0(void *param_1,float param_2)

{
  FUN_00c499c0(param_1,param_2);
  return;
}


//// FUNCTION FUN_00c648f0 @ 00c648f0 ////

void FUN_00c648f0(void *param_1,float *param_2)

{
  FUN_00c499e0(param_1,param_2);
  return;
}


//// FUNCTION FUN_00c649f0 @ 00c649f0 ////

void FUN_00c649f0(void *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(uint *)((int)param_1 + 0x10) & 0x217) != 0) {
    FUN_00c4a360(param_1,param_2,param_3);
  }
  return;
}


//// FUNCTION FUN_00c64a10 @ 00c64a10 ////

void FUN_00c64a10(void *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)((int)param_1 + 0x10) & 0x13) != 0) {
    if ((*(int *)((int)param_1 + 0x2c) == 0) && (*(int *)((int)param_1 + 0x30) == 0)) {
      FUN_00c4a360(param_1,param_2,param_3);
      return;
    }
    FUN_00c49d50(param_1,param_2,param_3);
  }
  return;
}


//// FUNCTION FUN_00c64a50 @ 00c64a50 ////

uint FUN_00c64a50(int param_1)

{
  return *(uint *)(param_1 + 0x10) & 0xffff;
}


//// FUNCTION FUN_00c64a60 @ 00c64a60 ////

bool FUN_00c64a60(int param_1)

{
  return (*(uint *)(param_1 + 0x10) & 0x217) != 0;
}


//// FUNCTION FUN_00c64a80 @ 00c64a80 ////

undefined4 FUN_00c64a80(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x50) != 0) && ((*(uint *)(param_1 + 0x10) & 0x21e) != 0)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x50) + 0x34))();
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0xf0);
}


//// FUNCTION FUN_00c64b20 @ 00c64b20 ////

void FUN_00c64b20(void *param_1)

{
  if (*(int *)((int)param_1 + 0x5c) == 0) {
    if (*(int *)((int)param_1 + 0x78) != 0) {
      FUN_00c4a800(param_1,0);
      return;
    }
  }
  else {
    FUN_00c4a1f0((int)param_1);
  }
  return;
}


//// FUNCTION FUN_00c64ba0 @ 00c64ba0 ////

undefined4 FUN_00c64ba0(void *param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)((int)param_1 + 0x78) == 0) &&
     ((*(int *)((int)param_1 + 0x5c) == 0 ||
      ((*(int *)((int)param_1 + 0x5c) != 0 && (*(int *)((int)param_1 + 0x6c) == 0)))))) {
    FUN_00c37ce0(&DAT_010da230,-7);
    return 0;
  }
  iVar1 = FUN_00c4a9b0(param_1,param_2 != 0);
  if (iVar1 != 0) {
    FUN_00c37ce0(&DAT_010da230,iVar1);
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00c64c00 @ 00c64c00 ////

void FUN_00c64c00(void *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x78);
  if (iVar1 == 0) {
    if ((*(int *)((int)param_1 + 0x5c) == 0) ||
       ((*(int *)((int)param_1 + 0x5c) != 0 && (*(int *)((int)param_1 + 0x6c) == 0)))) {
      FUN_00c37ce0(&DAT_010da230,-7);
      return;
    }
    if (*(int *)((int)param_1 + 0x5c) != 0) {
      FUN_00c193f0(*(int *)(*(int *)((int)param_1 + 0x54) + *(int *)((int)param_1 + 100) * 4));
      FUN_00c4a2d0(param_1,param_2);
      return;
    }
    iVar1 = 0;
  }
  FUN_00c193f0(iVar1);
  FUN_00c4a2d0(param_1,param_2);
  return;
}


//// FUNCTION FUN_00c64c80 @ 00c64c80 ////

void __fastcall FUN_00c64c80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad448;
  param_1[1] = 0;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c64d80 @ 00c64d80 ////

undefined4 * __thiscall ScalarDeletingDtor_00c64d80(void *this,byte param_1)

{
  SetVtable_00da6d74_00c39ad0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c64db0 @ 00c64db0 ////

void __fastcall FUN_00c64db0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad474;
  param_1[1] = 0;
  return;
}


