//// FUNCTION FUN_0044eab0 @ 0044eab0 ////

void __fastcall FUN_0044eab0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca16b0;
  local_c = ExceptionList;
  uVar7 = 0;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\GraphData.cpp";
    puVar8 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      puVar8 = puVar8 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar8 = *(undefined2 *)pcVar6;
    DAT_010581d4 = 0x2a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar2 = (char *)FUN_00ace33d(0xe4f6dc);
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("DaysPerSample");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x28),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\GraphData.cpp";
    puVar8 = &DAT_010581d8;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      puVar8 = puVar8 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar8 = *(undefined2 *)pcVar6;
    DAT_010581d4 = 0x2b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe30);
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("MaxSamples");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\GraphData.cpp";
    puVar8 = &DAT_010581d8;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      puVar8 = puVar8 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar8 = *(undefined2 *)pcVar6;
    DAT_010581d4 = 0x2c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("MaxSamplesSet");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x30),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\GraphData.cpp";
    puVar8 = &DAT_010581d8;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      puVar8 = puVar8 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar8 = *(undefined2 *)pcVar6;
    DAT_010581d4 = 0x2d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe18);
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("MostRecentSample");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x34),4);
  }
  uVar3 = FUN_0098b490("Series");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      local_30 = *(undefined4 *)(param_1 + 0x48);
      FUN_0098a3a0(&local_30);
      for (uVar7 = *(uint *)(param_1 + 0x44);
          uVar7 != *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x44); uVar7 = uVar7 + 1) {
        uVar4 = uVar7;
        if (*(uint *)(param_1 + 0x40) <= uVar7) {
          uVar4 = uVar7 - *(uint *)(param_1 + 0x40);
        }
        FUN_0044d890(*(undefined4 **)(*(int *)(param_1 + 0x3c) + uVar4 * 4));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_34 = 0;
      FUN_0044e1f0(param_1 + 0x38);
      SLVAR_LoadUint(&local_34);
      if (local_34 != 0) {
        do {
          FUN_0043b510(&local_2c);
          FUN_0044d890(&local_2c);
          FUN_0044ea00((void *)(param_1 + 0x38),&local_2c);
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_34);
      }
    }
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0044ef10 @ 0044ef10 ////

void __fastcall FUN_0044ef10(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_20 [8];
  
  FUN_0043b510(local_20);
  FUN_0044dcc0(local_20);
  FUN_0044ea00((void *)(param_1 + 0x9c),local_20);
  if (*(char *)(param_1 + 0x94) != '\0') {
    if (*(uint *)(param_1 + 0x90) < *(uint *)(param_1 + 0xac)) {
      if (*(int *)(param_1 + 0xac) == 0) {
        *(undefined4 *)(param_1 + 0x98) = DAT_00e4fa4c;
        return;
      }
      uVar2 = *(int *)(param_1 + 0xa8) + 1;
      *(uint *)(param_1 + 0xa8) = uVar2;
      if (*(uint *)(param_1 + 0xa4) <= uVar2) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
      iVar1 = *(int *)(param_1 + 0xac) + -1;
      *(int *)(param_1 + 0xac) = iVar1;
      if (iVar1 != 0) goto LAB_0044ef9e;
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    *(undefined4 *)(param_1 + 0x98) = DAT_00e4fa4c;
    return;
  }
LAB_0044ef9e:
  *(undefined4 *)(param_1 + 0x98) = DAT_00e4fa4c;
  return;
}


//// FUNCTION FUN_0044efb0 @ 0044efb0 ////

void __fastcall FUN_0044efb0(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 local_8;
  
  uVar3 = FUN_00acd42c();
  iVar2 = (int)uVar3;
  local_8 = DAT_00e4fa4c - (float)iVar2 * *(float *)(param_1 + 0x8c);
  if (-1 < iVar2 + -1) {
    do {
      FUN_0044ef10(param_1);
      uVar1 = (*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8)) - 1;
      if (*(uint *)(param_1 + 0xa4) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(param_1 + 0xa4);
      }
      iVar2 = iVar2 + -1;
      **(float **)(*(int *)(param_1 + 0xa0) + uVar1 * 4) = local_8;
      *(float *)(param_1 + 0x98) = local_8;
      local_8 = local_8 + *(float *)(param_1 + 0x8c);
    } while (iVar2 != 0);
  }
  return;
}


//// FUNCTION FUN_0044f050 @ 0044f050 ////

void __cdecl FUN_0044f050(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float local_48;
  uint local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0044e1b0((int)param_1);
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0xc);
  uVar3 = iVar2 - 1;
  if (*(uint *)(param_2 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(param_2 + 8);
  }
  local_48 = **(float **)(*(int *)(param_2 + 4) + uVar3 * 4);
  local_24 = iVar2;
  FUN_0043b620(&local_48,&local_40,(float *)&stack0x0000000c);
  do {
    if (local_24 == *(int *)(param_2 + 0xc)) {
      return;
    }
    local_28 = param_2;
    uVar4 = FUN_0043b6a0(&local_48,&local_40);
    if ((char)uVar4 == '\0') {
      return;
    }
    uVar3 = iVar2 - 1;
    if (*(uint *)(param_2 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(param_2 + 8);
    }
    local_3c = **(undefined4 **)(*(int *)(param_2 + 4) + uVar3 * 4);
    pfVar5 = (float *)FUN_0043b520(local_2c,0.08219178);
    FUN_0043b620(&local_3c,&local_38,pfVar5);
    for (; local_24 != *(int *)(param_2 + 0xc); local_24 = local_24 + -1) {
      uVar3 = local_24 - 1;
      if (*(uint *)(param_2 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_2 + 8);
      }
      local_34 = **(undefined4 **)(*(int *)(param_2 + 4) + uVar3 * 4);
      uVar4 = FUN_0043b680(&local_34,&local_38);
      if ((char)uVar4 == '\0') break;
    }
    if (local_24 != *(int *)(param_2 + 0xc)) {
      FUN_0043b510(&local_20);
      uVar3 = iVar2 - 1;
      if (*(uint *)(param_2 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_2 + 8);
      }
      local_20 = **(undefined4 **)(*(int *)(param_2 + 4) + uVar3 * 4);
      uVar3 = iVar2 - 1;
      if (*(uint *)(param_2 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_2 + 8);
      }
      local_1c = *(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + uVar3 * 4) + 4);
      uVar3 = iVar2 - 1;
      if (*(uint *)(param_2 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_2 + 8);
      }
      uVar7 = local_24 - 1;
      if (*(uint *)(param_2 + 8) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(param_2 + 8);
      }
      local_18 = *(float *)(*(int *)(*(int *)(param_2 + 4) + uVar3 * 4) + 8) -
                 *(float *)(*(int *)(*(int *)(param_2 + 4) + uVar7 * 4) + 8);
      uVar3 = iVar2 - 1;
      if (*(uint *)(param_2 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_2 + 8);
      }
      uVar7 = local_24 - 1;
      if (*(uint *)(local_28 + 8) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(local_28 + 8);
      }
      local_14 = *(float *)(*(int *)(*(int *)(param_2 + 4) + uVar3 * 4) + 0xc) -
                 *(float *)(*(int *)(*(int *)(local_28 + 4) + uVar7 * 4) + 0xc);
      uVar3 = iVar2 - 1;
      if (*(uint *)(param_2 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_2 + 8);
      }
      uVar7 = local_24 - 1;
      if (*(uint *)(param_2 + 8) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(param_2 + 8);
      }
      local_10 = *(float *)(*(int *)(*(int *)(param_2 + 4) + uVar3 * 4) + 0x10) -
                 *(float *)(*(int *)(*(int *)(param_2 + 4) + uVar7 * 4) + 0x10);
      uVar3 = iVar2 - 1;
      if (*(uint *)(param_2 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_2 + 8);
      }
      uVar7 = local_24 - 1;
      if (*(uint *)(param_2 + 8) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(param_2 + 8);
      }
      local_4 = *(float *)(*(int *)(*(int *)(param_2 + 4) + uVar3 * 4) + 0x1c) -
                *(float *)(*(int *)(*(int *)(param_2 + 4) + uVar7 * 4) + 0x1c);
      uVar3 = iVar2 - 1;
      if (*(uint *)(param_2 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_2 + 8);
      }
      uVar7 = local_24 - 1;
      if (*(uint *)(param_2 + 8) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(param_2 + 8);
      }
      local_c = *(float *)(*(int *)(*(int *)(param_2 + 4) + uVar3 * 4) + 0x14) -
                *(float *)(*(int *)(*(int *)(param_2 + 4) + uVar7 * 4) + 0x14);
      local_44 = iVar2 - 1;
      if (*(uint *)(param_2 + 8) <= local_44) {
        local_44 = local_44 - *(uint *)(param_2 + 8);
      }
      uVar3 = local_24 - 1;
      if (*(uint *)(param_2 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_2 + 8);
      }
      local_8 = *(float *)(*(int *)(*(int *)(param_2 + 4) + local_44 * 4) + 0x18) -
                *(float *)(*(int *)(*(int *)(param_2 + 4) + uVar3 * 4) + 0x18);
      iVar1 = **(int **)((int)param_1 + 4);
      iVar6 = FUN_0044e2e0(iVar1,*(undefined4 *)(iVar1 + 4),&local_20);
      FUN_0044e7d0(param_1,1);
      *(int *)(iVar1 + 4) = iVar6;
      **(int **)(iVar6 + 4) = iVar6;
    }
    FUN_0043b5f0(&local_48,(float *)&stack0x00000010);
    for (; iVar2 != *(int *)(param_2 + 0xc); iVar2 = iVar2 + -1) {
      uVar3 = iVar2 - 1;
      if (*(uint *)(param_2 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_2 + 8);
      }
      local_30 = **(undefined4 **)(*(int *)(param_2 + 4) + uVar3 * 4);
      uVar4 = FUN_0043b680(&local_30,&local_48);
      if ((char)uVar4 == '\0') break;
    }
  } while( true );
}


//// FUNCTION FUN_0044f380 @ 0044f380 ////

void __cdecl FUN_0044f380(void *param_1)

{
  int iVar1;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  iVar1 = DAT_00f886a8;
  FUN_0043b520(local_8,0.08219178);
  FUN_0043b520(local_4,1.2);
  FUN_0044f050(param_1,iVar1 + 0x9c);
  return;
}


//// FUNCTION FUN_0044f3d0 @ 0044f3d0 ////

void __cdecl FUN_0044f3d0(void *param_1)

{
  int iVar1;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  iVar1 = DAT_00f886c0;
  FUN_0043b520(local_8,0.08219178);
  FUN_0043b520(local_4,11.0);
  FUN_0044f050(param_1,iVar1 + 0x9c);
  return;
}


//// FUNCTION FUN_0044f420 @ 0044f420 ////

void __cdecl FUN_0044f420(void *param_1)

{
  int iVar1;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  iVar1 = DAT_00f886c0;
  FUN_0043b520(local_8,0.08219178);
  FUN_0043b520(local_4,2000.0);
  FUN_0044f050(param_1,iVar1 + 0x9c);
  return;
}


//// FUNCTION FUN_0044f4b0 @ 0044f4b0 ////

int * __thiscall FUN_0044f4b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0044f4f0 @ 0044f4f0 ////

undefined4 * __fastcall FUN_0044f4f0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca16d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d1a674;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  puVar2 = FUN_0040a690(100,'\0');
  param_1[0x1e] = puVar2;
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  *(undefined4 *)(param_1[0x1e] + 0x18) = uVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined1 *)(*(int *)(param_1[0x1e] + 0x18) + 0xc) = 6;
  pvVar4 = FUN_0099bb50("fx_circle.dds",0,0,0,'\0');
  if (*(void **)((int)*(void **)(param_1[0x1e] + 0x18) + 0x18) != pvVar4) {
    Engine_SetResourceReference(*(void **)(param_1[0x1e] + 0x18),(int)pvVar4);
  }
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  puVar1 = (uint *)(*(int *)(param_1[0x1e] + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  FUN_0099a220((void *)param_1[0x1e],1);
  *(byte *)(param_1[0x1e] + 0x24) = *(byte *)(param_1[0x1e] + 0x24) | 0x40;
  FUN_0040a6f0(param_1[0x1e]);
  puVar1 = (uint *)(*(int *)(param_1[0x1e] + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xfeffffff;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0044f5f0 @ 0044f5f0 ////

void __fastcall FUN_0044f5f0(undefined4 *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca16e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1a674;
  _Memory = *(void **)(param_1[0x1e] + 0x18);
  local_4 = 0;
  if (_Memory == (void *)0x0) {
    *(undefined4 *)(param_1[0x1e] + 0x18) = 0;
    puVar1 = (undefined4 *)param_1[0x1e];
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 4);
      uVar2 = DAT_0105b588;
      if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_0105b588 = uVar2;
      param_1[0x1e] = 0;
    }
    local_4 = 0xffffffff;
    FUN_0053ddb0(param_1);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0044f6a0 @ 0044f6a0 ////

void __fastcall FUN_0044f6a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 < *(int *)(param_1 + 0x80)) {
    iVar3 = iVar2 * 0x34;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0x20);
      *(uint *)(iVar1 + iVar3 + 0x30) = *(uint *)(iVar1 + 0x30 + iVar3) | 0x100;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x34;
    } while (iVar2 < *(int *)(param_1 + 0x80));
  }
  FUN_00995ba0(*(int **)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}


//// FUNCTION FUN_0044f700 @ 0044f700 ////

void __thiscall FUN_0044f700(void *this,undefined4 *param_1,float param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((*(int *)((int)this + 0x7c) < 100) && (0.0 <= (float)param_1[2])) {
    iVar2 = *(int *)((int)this + 0x7c) * 0x34;
    iVar1 = *(int *)(*(int *)((int)this + 0x78) + 0x20);
    puVar3 = (undefined4 *)(iVar2 + iVar1);
    puVar3[0xc] = *(uint *)(iVar2 + 0x30 + iVar1) & 0xfffffeff;
    *puVar3 = *param_1;
    puVar3[1] = param_1[1];
    puVar3[2] = param_1[2];
    if (param_2 < 0.001) {
      param_2 = 0.001;
    }
    puVar3[9] = param_2;
    puVar3[0xb] = *param_3;
    *(int *)((int)this + 0x7c) = *(int *)((int)this + 0x7c) + 1;
  }
  return;
}


//// FUNCTION FUN_0044f780 @ 0044f780 ////

undefined4 FUN_0044f780(void)

{
  return DAT_00f886d8;
}


//// FUNCTION FUN_0044f790 @ 0044f790 ////

void FUN_0044f790(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca170b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x84);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0044f4f0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_00f886c4[1])();
  DAT_00f886d8 = puVar2;
  (*(code *)*DAT_00f886c4)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0044f810 @ 0044f810 ////

void FUN_0044f810(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f886d8;
  if (DAT_00f886d8 != (undefined4 *)0x0) {
    iVar1 = DAT_00f886d8[0x12];
    DAT_00f886d8[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f886c4[1])();
    DAT_00f886d8 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0044f850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_00f886c4)();
    return;
  }
  return;
}


//// FUNCTION FUN_0044f890 @ 0044f890 ////

undefined4 * __thiscall FUN_0044f890(void *this,byte param_1)

{
  FUN_0044f5f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0044f8b0 @ 0044f8b0 ////

void __fastcall FUN_0044f8b0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d1a69c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0044f900 @ 0044f900 ////

void __fastcall FUN_0044f900(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1a69c;
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


//// FUNCTION FUN_0044f9a0 @ 0044f9a0 ////

int * __thiscall FUN_0044f9a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0044fa30 @ 0044fa30 ////

int __thiscall FUN_0044fa30(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)this * 0x19660d + 0x3c6ef35f;
  *(uint *)this = uVar1;
  return uVar1 % (uint)(param_2 - param_1) + param_1;
}


//// FUNCTION FUN_0044fa90 @ 0044fa90 ////

/* WARNING: Removing unreachable block (ram,0x0044fab2) */

float10 __thiscall FUN_0044fa90(uint *param_1,float param_2,float param_3)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x19660d + 0x3c6ef35f;
  *param_1 = uVar1;
  return ((float10)param_3 - (float10)param_2) *
         (float10)(uVar1 >> 6 & 0x7fffff) * (float10)1.192093e-07 + (float10)param_2;
}


//// FUNCTION FUN_0044fad0 @ 0044fad0 ////

void __fastcall FUN_0044fad0(undefined4 *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca1728;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1a6e8;
  local_4 = 0;
  if (param_1[0x1d] != 0) {
    _Memory = *(void **)(param_1[0x1d] + 0x18);
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)(param_1[0x1d] + 0x18) = 0;
    puVar1 = (undefined4 *)param_1[0x1d];
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 4);
      uVar2 = DAT_0105b588;
      if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_0105b588 = uVar2;
      param_1[0x1d] = 0;
    }
  }
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0044fb90 @ 0044fb90 ////

void __thiscall FUN_0044fb90(void *this,float param_1)

{
  uint *puVar1;
  void *this_00;
  int iVar2;
  undefined1 uVar3;
  LONG LVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float10 extraout_ST0;
  ulonglong uVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca174b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)this + 0x74) != 0) {
    pvVar5 = *(void **)(*(int *)((int)this + 0x74) + 0x18);
    if (pvVar5 != (void *)0x0) {
      ExceptionList = &pvStack_c;
      FUN_00990ec0((int)pvVar5);
                    /* WARNING: Subroutine does not return */
      _free(pvVar5);
    }
    ExceptionList = &pvStack_c;
    *(undefined4 *)(*(int *)((int)this + 0x74) + 0x18) = 0;
    puVar6 = *(undefined4 **)((int)this + 0x74);
    if (puVar6 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar6 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
      DAT_0105b588 = uVar3;
      *(undefined4 *)((int)this + 0x74) = 0;
    }
  }
  if (0.0 < param_1) {
    uVar8 = FUN_00acd42c();
    *(float *)((int)this + 0x68) = (float)(extraout_ST0 + (float10)80.0);
    *(int *)((int)this + 100) = 0x400 - (int)uVar8;
    pvVar5 = FUN_0099bb50("fx/grass.dds",0,0,0,'\0');
    puVar6 = FUN_0040a690(*(uint *)((int)this + 100),'\0');
    *(undefined4 **)((int)this + 0x74) = puVar6;
    FUN_0099a220(puVar6,4);
    FUN_0040a6f0(*(int *)((int)this + 0x74));
    puVar6 = operator_new(0x24);
    uStack_4 = 0;
    if (puVar6 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_009910f0(puVar6);
    }
    *(undefined4 *)(*(int *)((int)this + 0x74) + 0x18) = uVar7;
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x74) + 0x18) + 0xc) = 6;
    this_00 = *(void **)(*(int *)((int)this + 0x74) + 0x18);
    uStack_4 = 0xffffffff;
    if (*(void **)((int)this_00 + 0x18) != pvVar5) {
      Engine_SetResourceReference(this_00,(int)pvVar5);
    }
    puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x74) + 0x18) + 0x10);
    *puVar1 = *puVar1 & 0xbfffffff;
    iVar2 = *(int *)(*(int *)((int)this + 0x74) + 0x18);
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xfeffffff;
    if (pvVar5 != (void *)0x0) {
      FUN_0099b400(pvVar5);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0044fd10 @ 0044fd10 ////

uint __thiscall FUN_0044fd10(void *this,float *param_1,float param_2)

{
  uint *puVar1;
  float fVar2;
  undefined4 in_EAX;
  uint uVar3;
  ushort uVar7;
  float *pfVar4;
  undefined2 extraout_var;
  int iVar5;
  int iVar6;
  undefined2 uVar8;
  float10 fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_18;
  float local_14 [2];
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = ((DAT_0105c3a8 - *param_1) * (DAT_0105c3a8 - *param_1) +
          (DAT_0105c3ac - param_1[1]) * (DAT_0105c3ac - param_1[1]) +
          (DAT_0105c3b0 - param_1[2]) * (DAT_0105c3b0 - param_1[2])) - *(float *)((int)this + 0x68);
  if (fVar2 <= 0.001) {
    fVar2 = 0.001;
  }
  fVar2 = 50.0 / fVar2;
  if ((fVar2 < 0.8) &&
     (uVar3 = CONCAT22((short)((uint)in_EAX >> 0x10),
                       (ushort)(fVar2 < 0.1) << 8 | (ushort)NAN(fVar2) << 10 |
                       (ushort)(fVar2 == 0.1) << 0xe), fVar2 < 0.1)) {
    *(undefined4 *)((int)this + 0x6c) = 0xffffffff;
LAB_0044feb3:
    return uVar3 & 0xffffff00;
  }
  uVar3 = FUN_009a1b30(&DAT_0105c2e8,param_1,local_14);
  if ((char)uVar3 == '\0') goto LAB_0044feb3;
  uVar7 = (ushort)(uVar3 >> 0x10);
  if ((local_14[0] < -32.0) || (DAT_0105c400 + 32.0 < local_14[0])) {
    uVar3 = (uint)uVar7 << 0x10;
    if ((0.0 <= param_2) ||
       (uVar3 = CONCAT22(uVar7,(ushort)(local_14[0] < -32.0) << 8 | (ushort)NAN(local_14[0]) << 10 |
                               (ushort)(local_14[0] == -32.0) << 0xe), local_14[0] >= -32.0)) {
      uVar8 = (undefined2)(uVar3 >> 0x10);
      uVar3 = CONCAT22(uVar8,(ushort)(param_2 < 0.0) << 8 | (ushort)NAN(param_2) << 10 |
                             (ushort)(param_2 == 0.0) << 0xe);
      if (param_2 < 0.0 == 0 && (param_2 == 0.0) == 0) {
        fVar2 = DAT_0105c400 + 32.0;
        uVar3 = CONCAT22(uVar8,(ushort)(fVar2 < local_14[0]) << 8 |
                               (ushort)(NAN(fVar2) || NAN(local_14[0])) << 10 |
                               (ushort)(fVar2 == local_14[0]) << 0xe);
        if (fVar2 < local_14[0]) goto LAB_0044feb3;
      }
LAB_0045010f:
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    goto LAB_0044feb3;
  }
  pfVar4 = (float *)FUN_004533a0(DAT_00f88720,&param_2,param_1);
  param_2 = *pfVar4;
  uVar3 = CONCAT22((short)((uint)pfVar4 >> 0x10),
                   (ushort)(param_2 < 0.0) << 8 | (ushort)NAN(param_2) << 10 |
                   (ushort)(param_2 == 0.0) << 0xe);
  if (param_2 < 0.0 != 0 || (param_2 == 0.0) != 0) goto LAB_0045010f;
  uVar10 = FUN_00acd42c();
  uVar11 = FUN_00acd42c();
  local_18 = ((((int)uVar10 * 0x200 + (int)uVar11) * -0x19660d + 0x3c6ef35fU >> 0x10) * 0x19660d +
              0x3c6ef35f >> 0x10) * 0x19660d + 0x3c6ef35f >> 0x10;
  fVar9 = FUN_0044fa90(&local_18,0.5,1.5);
  fVar9 = fVar9 * (float10)param_2 * (float10)16.0;
  param_2 = (float)fVar9;
  if (fVar9 < (float10)16.0) {
    iVar6 = CONCAT22(extraout_var,
                     (ushort)(param_2 < 1.0) << 8 | (ushort)NAN(param_2) << 10 |
                     (ushort)(param_2 == 1.0) << 0xe);
    if (param_2 < 1.0 != 0) goto LAB_004500b2;
  }
  else {
    param_2 = 16.0;
  }
  uVar10 = FUN_00acd42c();
  *(char *)(*(int *)(*(int *)((int)this + 0x74) + 0x20) + 0x30 + *(int *)((int)this + 0x6c) * 0x34)
       = (char)uVar10 + -1;
  fVar9 = (float10)FUN_0043b5b0(param_2);
  param_2 = (float)((((float10)param_2 - fVar9) * (float10)0.25 + (float10)1.0) * (float10)0.15);
  FUN_0040a660((void *)(*(int *)((int)this + 0x6c) * 0x34 +
                       *(int *)(*(int *)((int)this + 0x74) + 0x20)),param_2);
  fVar9 = FUN_0044fa90(&local_18,-0.18,0.18);
  local_c = (float)(fVar9 + (float10)*param_1);
  fVar9 = FUN_0044fa90(&local_18,-0.18,0.18);
  local_8 = (float)(fVar9 + (float10)param_1[1]);
  local_4 = param_2;
  pfVar4 = (float *)(*(int *)(*(int *)((int)this + 0x74) + 0x20) + *(int *)((int)this + 0x6c) * 0x34
                    );
  *pfVar4 = local_c;
  pfVar4[1] = local_8;
  pfVar4[2] = param_2;
  *(undefined4 *)
   (*(int *)(*(int *)((int)this + 0x74) + 0x20) + 0x28 + *(int *)((int)this + 0x6c) * 0x34) =
       *(undefined4 *)((int)this + 0x70);
  puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x74) + 0x20) + 0x30 +
                   *(int *)((int)this + 0x6c) * 0x34);
  *puVar1 = *puVar1 | 0x400;
  iVar5 = *(int *)((int)this + 0x6c) * 0x34;
  iVar6 = *(int *)(*(int *)((int)this + 0x74) + 0x20);
  *(uint *)(iVar5 + iVar6 + 0x30) = *(uint *)(iVar5 + 0x30 + iVar6) & 0xfffffeff;
  uVar10 = FUN_00acd42c();
  FUN_0040a4f0(&param_2,(int)uVar10);
  *(undefined1 *)
   (*(int *)(*(int *)((int)this + 0x74) + 0x20) + 0x2f + *(int *)((int)this + 0x6c) * 0x34) =
       param_2._0_1_;
  uVar3 = local_18 * 0x19660d + 0x3c6ef35f;
  FUN_0040a4f0(&param_2,uVar3 % 0x1c + 0xb4);
  *(undefined1 *)
   (*(int *)(*(int *)((int)this + 0x74) + 0x20) + 0x2e + *(int *)((int)this + 0x6c) * 0x34) =
       param_2._0_1_;
  uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
  FUN_0040a4f0(&param_2,uVar3 % 0x1c + 0xb4);
  *(undefined1 *)
   (*(int *)(*(int *)((int)this + 0x74) + 0x20) + 0x2d + *(int *)((int)this + 0x6c) * 0x34) =
       param_2._0_1_;
  FUN_0040a4f0(&param_2,(uVar3 * 0x19660d + 0x3c6ef35f) % 0x1c + 0xb4);
  iVar6 = *(int *)((int)this + 0x6c) * 0x34;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x74) + 0x20) + 0x2c + iVar6) = param_2._0_1_;
  *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + -1;
LAB_004500b2:
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}


//// FUNCTION FUN_00450120 @ 00450120 ////

undefined4 FUN_00450120(void)

{
  return DAT_00f886f4;
}


//// FUNCTION FUN_00450130 @ 00450130 ////

void FUN_00450130(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f886f4;
  if (DAT_00f886f4 != (undefined4 *)0x0) {
    iVar1 = DAT_00f886f4[0x12];
    DAT_00f886f4[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f886e0[1])();
    DAT_00f886f4 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00450170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_00f886e0)();
    return;
  }
  return;
}


//// FUNCTION FUN_00450210 @ 00450210 ////

undefined4 * __fastcall FUN_00450210(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d1a6e8;
  param_1[0x1d] = 0;
  if (DAT_0105be18 == 1) {
    FUN_0044fb90(param_1,0.1);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00450280 @ 00450280 ////

undefined4 * __thiscall FUN_00450280(void *this,byte param_1)

{
  FUN_0044fad0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004502a0 @ 004502a0 ////

void __fastcall FUN_004502a0(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  undefined2 unaff_SI;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
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
  
  if (*(int *)((int)param_1 + 0x74) != 0) {
    FUN_0040a6f0(*(int *)((int)param_1 + 0x74));
    local_50 = DAT_0105c400 * 0.5;
    local_4c = DAT_0105c404;
    FUN_00538ef0(&local_18,&local_50,0.0);
    local_50 = DAT_0105c400;
    local_4c = DAT_0105c404;
    FUN_00538ef0(&local_c,&local_50,0.0);
    fVar11 = FUN_00acf400((double)(local_18 * 2.7777777),unaff_SI);
    local_18 = (float)(fVar11 * (float10)0.36);
    fVar11 = FUN_00acf400((double)(local_14 * 2.7777777),unaff_SI);
    local_14 = (float)(fVar11 * (float10)0.36);
    fVar11 = FUN_00acf400((double)(local_c * 2.7777777),unaff_SI);
    local_c = (float)(fVar11 * (float10)0.36);
    fVar11 = FUN_00acf400((double)(local_8 * 2.7777777),unaff_SI);
    local_8 = (float)(fVar11 * (float10)0.36);
    fVar1 = ABS(local_c - local_18);
    fVar3 = ABS(local_8 - local_14);
    local_34 = 0.0;
    local_28 = 0.0;
    if (fVar1 <= fVar3) {
      local_24 = 0.0;
      local_20 = 0.36;
      local_6c = (fVar1 + fVar1) - fVar3;
      fVar2 = fVar3;
    }
    else {
      local_24 = 0.36;
      local_20 = 0.0;
      local_6c = (fVar3 + fVar3) - fVar1;
      fVar2 = fVar1;
      fVar1 = fVar3;
    }
    local_68 = fVar1 * 0.5;
    local_3c = local_24;
    fVar1 = (fVar1 - fVar2) * 0.5;
    local_30 = 0.36;
    local_38 = local_20;
    local_2c = 0.36;
    if (local_c - local_18 < 0.0) {
      local_3c = -local_24;
      local_30 = -0.36;
    }
    if (local_8 - local_14 < 0.0) {
      local_38 = -local_20;
      local_2c = -0.36;
    }
    local_24 = local_38 + local_38 + local_18;
    iVar8 = *(int *)((int)param_1 + 100) + -1;
    *(int *)((int)param_1 + 0x6c) = iVar8;
    iVar10 = 0x800;
    local_60 = 0.0;
    local_20 = local_14 - (local_3c + local_3c);
    local_1c = local_10;
    while ((-1 < iVar8 && (-1 < iVar10))) {
      fVar11 = FUN_00566c00(DAT_0104cdf4);
      fVar2 = local_20;
      fVar3 = local_24;
      fVar12 = (float10)*(int *)(DAT_0104cdf4 + 0x3c);
      if (*(int *)(DAT_0104cdf4 + 0x3c) < 0) {
        fVar12 = fVar12 + (float10)4.2949673e+09;
      }
      iVar8 = *(int *)((int)param_1 + 0x6c);
      fVar11 = (float10)fsin((fVar12 + fVar11) * (float10)0.3 + (float10)local_60);
      *(float *)((int)param_1 + 0x70) = (float)(fVar11 * (float10)0.1);
      local_70 = local_6c;
      local_48 = local_24;
      local_44 = local_20;
      local_40 = local_1c;
      while (((-1 < iVar8 && (-1 < iVar10)) &&
             (uVar9 = FUN_0044fd10(param_1,&local_48,1.0), (char)uVar9 != '\0'))) {
        fVar4 = local_28;
        fVar5 = fVar1;
        fVar6 = local_30;
        fVar7 = local_2c;
        if (local_70 < 0.0) {
          fVar4 = local_34;
          fVar5 = local_68;
          fVar6 = local_3c;
          fVar7 = local_38;
        }
        local_44 = local_44 + fVar7;
        local_48 = local_48 + fVar6;
        local_70 = local_70 + fVar5;
        local_40 = fVar4 + local_40;
        iVar8 = *(int *)((int)param_1 + 0x6c);
        iVar10 = iVar10 + -1;
      }
      local_70 = local_6c;
      local_48 = fVar3;
      local_44 = fVar2;
      local_40 = local_1c;
      if (-1 < *(int *)((int)param_1 + 0x6c)) {
        while (-1 < iVar10) {
          fVar3 = local_28;
          fVar2 = fVar1;
          fVar4 = local_30;
          fVar5 = local_2c;
          if (local_70 < 0.0) {
            fVar3 = local_34;
            fVar2 = local_68;
            fVar4 = local_3c;
            fVar5 = local_38;
          }
          local_44 = local_44 - fVar5;
          local_48 = local_48 - fVar4;
          local_70 = local_70 + fVar2;
          local_40 = local_40 - fVar3;
          uVar9 = FUN_0044fd10(param_1,&local_48,-1.0);
          if (((char)uVar9 == '\0') || (iVar10 = iVar10 + -1, *(int *)((int)param_1 + 0x6c) < 0))
          break;
        }
      }
      iVar8 = *(int *)((int)param_1 + 0x6c);
      local_24 = local_24 - local_38;
      local_20 = local_20 + local_3c;
      local_60 = local_60 + 0.25;
    }
  }
  return;
}


//// FUNCTION FUN_004506e0 @ 004506e0 ////

void FUN_004506e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca178b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x78);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00450210(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_00f886e0[1])();
  DAT_00f886f4 = puVar2;
  (*(code *)*DAT_00f886e0)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00450750 @ 00450750 ////

void __fastcall FUN_00450750(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d1a72c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_004507a0 @ 004507a0 ////

void __fastcall FUN_004507a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1a72c;
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


//// FUNCTION FUN_00450840 @ 00450840 ////

uint __cdecl FUN_00450840(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((-1 < (int)param_1) && ((int)param_1 < 0x100)) && (-1 < param_2)) && (param_2 < 0x100)) {
    iVar1 = param_1 * 0x100 + param_2;
    iVar2 = iVar1 + (iVar1 >> 0x1f & 7U);
    iVar3 = iVar2 >> 3;
    return CONCAT31((int3)(iVar2 >> 0xb),
                    (*(byte *)(g_OccupancyGrid256_A + iVar3) &
                    (byte)(1 << ((char)iVar1 + (char)iVar3 * -8 & 0x1fU))) != 0);
  }
  return param_1 & 0xffffff00;
}


//// FUNCTION FUN_004508b0 @ 004508b0 ////

void FUN_004508b0(int param_1,undefined4 param_2)

{
  int local_8;
  undefined4 local_4;
  
  local_8 = param_1;
  local_4 = param_2;
  FUN_009e4760(2,&local_8);
  return;
}


//// FUNCTION FUN_00450920 @ 00450920 ////

void __fastcall FUN_00450920(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puVar15 = &DAT_00f88d90;
  for (iVar12 = 0x50; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  puVar15 = &DAT_00f88c50;
  for (iVar12 = 0x50; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  puVar15 = &DAT_00f88b10;
  for (iVar12 = 0x50; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  puVar15 = &DAT_00f889d0;
  for (iVar12 = 0x50; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  puVar15 = &DAT_00f88890;
  for (iVar12 = 0x50; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  puVar15 = &DAT_00f88750;
  for (iVar12 = 0x50; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  iVar12 = param_1 + 0xc078;
  local_20 = 3;
  do {
    local_8 = 0.0;
    local_c = 0.0;
    local_10 = 0.0;
    local_14 = 0.0;
    local_18 = 0.0;
    local_1c = 0.0;
    iVar11 = 3;
    iVar1 = local_20 + -3;
    iVar14 = 0;
    iVar16 = iVar12;
    do {
      if ((((iVar14 < -0xc0) || (0x133f < iVar14)) || (local_20 < 0)) ||
         (iVar13 = iVar16, 0x3f < local_20)) {
        iVar13 = 0;
      }
      fVar3 = *(float *)(iVar13 + *(int *)(param_1 + 0x1bb0d0) * 4);
      fVar4 = local_1c + fVar3;
      fVar5 = local_18 + fVar4;
      fVar6 = fVar5 + local_14;
      fVar7 = local_10 + fVar6;
      fVar8 = local_c + fVar7;
      local_8 = fVar8 + local_8;
      fVar9 = local_8 + (float)(&DAT_00f88d90)[iVar11];
      (&DAT_00f88d90)[iVar11] = local_8;
      fVar10 = fVar9 + (float)(&DAT_00f88c50)[iVar11];
      (&DAT_00f88c50)[iVar11] = fVar9;
      fVar9 = fVar10 + (float)(&DAT_00f88b10)[iVar11];
      (&DAT_00f88b10)[iVar11] = fVar10;
      fVar10 = fVar9 + (float)(&DAT_00f889d0)[iVar11];
      (&DAT_00f889d0)[iVar11] = fVar9;
      fVar9 = fVar10 + (float)(&DAT_00f88890)[iVar11];
      (&DAT_00f88890)[iVar11] = fVar10;
      if (((iVar11 + -3 < 0) || (0x4f < iVar11 + -3)) || ((iVar1 < 0 || (0x3f < iVar1)))) {
        iVar13 = 0;
      }
      else {
        iVar13 = (iVar14 + iVar1) * 0xfc + 0x84 + param_1;
      }
      pfVar2 = (float *)(&DAT_00f88750 + iVar11);
      iVar14 = iVar14 + 0x40;
      iVar11 = iVar11 + 1;
      iVar16 = iVar16 + 0x3f00;
      *(float *)(iVar13 + *(int *)(param_1 + 0x1bb0d0) * 4) = (fVar9 + *pfVar2) * 0.00024414062;
      (&DAT_00f8874c)[iVar11] = fVar9;
      local_1c = fVar3;
      local_18 = fVar4;
      local_14 = fVar5;
      local_10 = fVar6;
      local_c = fVar7;
      local_8 = fVar8;
    } while (iVar14 < 0x1340);
    local_20 = local_20 + 1;
    iVar12 = iVar12 + 0xfc;
  } while (local_20 < 0x40);
  return;
}


//// FUNCTION FUN_00450b40 @ 00450b40 ////

undefined4 __thiscall FUN_00450b40(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (((((int)param_1 < (int)*(uint *)((int)this + 0x1bb0d4)) ||
       (param_2 < *(int *)((int)this + 0x1bb0d8))) ||
      (*(int *)((int)this + 0x1bb0dc) <= (int)param_1)) ||
     (*(int *)((int)this + 0x1bb0e0) <= param_2)) {
    return *(uint *)((int)this + 0x1bb0d4) & 0xffffff00;
  }
  uVar1 = param_1 - 1;
  uVar2 = FUN_00450840(uVar1,param_2);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_00450840(uVar1,param_2 + 1);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_00450840(uVar1,param_2 + -1);
      if ((char)uVar2 == '\0') {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
  }
  uVar2 = param_1 + 1;
  uVar3 = FUN_00450840(uVar2,param_2);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_00450840(uVar2,param_2 + 1);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_00450840(uVar2,param_2 + -1);
      if ((char)uVar3 == '\0') goto LAB_00450bf0;
    }
  }
  iVar4 = param_2 + -1;
  uVar3 = FUN_00450840(param_1,iVar4);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_00450840(uVar2,iVar4);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_00450840(uVar1,iVar4);
      if ((char)uVar3 == '\0') goto LAB_00450bf0;
    }
  }
  iVar4 = param_2 + 1;
  uVar3 = FUN_00450840(param_1,iVar4);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_00450840(uVar2,iVar4);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_00450840(uVar1,iVar4);
      if ((char)uVar3 == '\0') {
LAB_00450bf0:
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00450c90 @ 00450c90 ////

void __fastcall FUN_00450c90(int param_1)

{
  *(undefined1 *)(param_1 + 0x1bb0ec) = 1;
  return;
}


//// FUNCTION FUN_00450ca0 @ 00450ca0 ////

void __fastcall FUN_00450ca0(int param_1)

{
  if (10 < *(int *)(param_1 + 0x1bb0c8)) {
    *(undefined4 *)(param_1 + 0x1bb0c8) = 0;
  }
  return;
}


//// FUNCTION FUN_00450cc0 @ 00450cc0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00450cc0(undefined4 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  float local_20 [2];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_009840b0(local_20,param_1);
  uVar2 = WorldToOccupancyGridCoord(local_20);
  iVar3 = (int)((ulonglong)uVar2 >> 0x20);
  uVar1 = FUN_00450840((uint)uVar2,iVar3);
  if ((char)uVar1 != '\0') {
    return (float10)_DAT_00e4ff34;
  }
  FUN_009e2490((uint)uVar2,iVar3,&local_18);
  return (float10)_DAT_00e4ff3c * (float10)local_10 +
         (float10)_DAT_00e4ff40 * (float10)local_4 +
         (float10)_DAT_00e4ff44 * (float10)local_18 +
         (float10)_DAT_00e4ff48 * (float10)local_8 +
         ((float10)local_c + (float10)local_14) * (float10)_DAT_00e4ff38;
}


//// FUNCTION FUN_00450d60 @ 00450d60 ////

void __thiscall FUN_00450d60(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x1bb108) = param_1;
  return;
}


//// FUNCTION FUN_00450d70 @ 00450d70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00450d70(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined1 uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_4;
  
  uVar4 = 0;
  FUN_009e2490((int)param_1,(int)param_2,&local_18);
  fVar1 = local_10 + local_c + local_14;
  uVar3 = CONCAT22(extraout_var,
                   (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                   (ushort)(fVar1 == 0.0) << 0xe);
  if (fVar1 < 0.0 == 0 && (fVar1 == 0.0) == 0) {
    uVar3 = CONCAT22(extraout_var,
                     (ushort)(local_4 < 0.5) << 8 | (ushort)NAN(local_4) << 10 |
                     (ushort)(local_4 == 0.5) << 0xe);
    if (local_4 < 0.5) {
      uVar3 = CONCAT22(extraout_var,
                       (ushort)(param_3 < _DAT_00e4ff54) << 8 |
                       (ushort)(NAN(param_3) || NAN(_DAT_00e4ff54)) << 10 |
                       (ushort)(param_3 == _DAT_00e4ff54) << 0xe);
      if (param_3 < _DAT_00e4ff54) {
        fVar1 = local_10 + local_c + local_14;
        uVar4 = 1;
        fVar2 = (_DAT_00e4ff54 - param_3) / _DAT_00e4ff54;
        fVar5 = FUN_00990e30(0.90909094,20.0);
        fVar5 = ((float10)local_10 / (float10)fVar1 + (float10)0.1) * fVar5;
        fVar6 = (float10)fVar2;
        uVar3 = CONCAT22(extraout_var_00,
                         (ushort)(fVar5 < fVar6) << 8 | (ushort)(NAN(fVar5) || NAN(fVar6)) << 10 |
                         (ushort)(fVar5 == fVar6) << 0xe);
        if (fVar5 < fVar6) {
          local_20 = param_1;
          local_1c = param_2;
          FUN_009e4760(2,(int *)&local_20);
          fVar1 = fVar1 * 0.5;
          fVar6 = FUN_009e23b0(param_1,param_2,3);
          fVar5 = FUN_009e23b0(param_1,param_2,2);
          fVar7 = FUN_009e23b0(param_1,param_2,1);
          fVar7 = fVar7 + (float10)(float)(fVar5 + (float10)(float)fVar6);
          fVar6 = (float10)fVar1;
          uVar3 = CONCAT22(extraout_var_01,
                           (ushort)(fVar7 < fVar6) << 8 | (ushort)(NAN(fVar7) || NAN(fVar6)) << 10 |
                           (ushort)(fVar7 == fVar6) << 0xe);
          if (fVar7 < fVar6) {
            do {
              FUN_009e4760(2,(int *)&local_20);
              fVar6 = FUN_009e23b0(param_1,param_2,3);
              fVar5 = FUN_009e23b0(param_1,param_2,2);
              fVar7 = FUN_009e23b0(param_1,param_2,1);
              fVar7 = fVar7 + (float10)(float)(fVar5 + (float10)(float)fVar6);
              fVar6 = (float10)fVar1;
              uVar3 = CONCAT22(extraout_var_02,
                               (ushort)(fVar7 < fVar6) << 8 |
                               (ushort)(NAN(fVar7) || NAN(fVar6)) << 10 |
                               (ushort)(fVar7 == fVar6) << 0xe);
            } while (fVar7 < fVar6);
          }
        }
      }
    }
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),uVar4);
}


//// FUNCTION FUN_00450ef0 @ 00450ef0 ////

void __thiscall FUN_00450ef0(void *this,int param_1,int param_2)

{
  uint uVar1;
  int local_20;
  int local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_4;
  
  FUN_009e2490(param_1,param_2,&local_18);
  local_20 = param_1;
  local_1c = param_2;
  if (0.5 <= local_4) {
    uVar1 = 5;
  }
  else {
    if (local_10 + local_c + local_14 < 0.1) goto LAB_00450f6b;
    uVar1 = FUN_00990ce0();
    if ((uVar1 & 1) == 0) {
      uVar1 = 3;
    }
    else {
      uVar1 = 1;
    }
  }
  FUN_009e4760(uVar1,&local_20);
LAB_00450f6b:
  *(undefined4 *)((int)this + (param_1 * 0x100 + param_2) * 8 + 0x13b084) = 0;
  return;
}


//// FUNCTION FUN_00450f90 @ 00450f90 ////

void __thiscall FUN_00450f90(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  for (; param_2 <= param_4; param_2 = param_2 + 1) {
    if (param_1 <= param_3) {
      puVar2 = (undefined4 *)((int)this + (param_1 * 0x100 + param_2) * 8 + 0x13b084);
      iVar1 = (param_3 - param_1) + 1;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 0x200;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}


//// FUNCTION FUN_00450fe0 @ 00450fe0 ////

void FUN_00450fe0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_20;
  uint local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar3 = FUN_00450840(uVar2,uVar1);
  if ((char)uVar3 == '\0') {
    FUN_009e2490(uVar2,uVar1,&local_18);
    if ((local_4 < 0.5) && (0.0 < local_10 + local_c + local_14)) {
      local_20 = *param_1;
      local_1c = param_1[1];
      if (local_18 < local_8) {
        FUN_009e4760(4,(int *)&local_20);
        return;
      }
      FUN_009e4760(0,(int *)&local_20);
    }
  }
  return;
}


//// FUNCTION FUN_00451090 @ 00451090 ////

void __thiscall FUN_00451090(void *this,float param_1)

{
  *(float *)((int)this + 0x80) = param_1 + *(float *)((int)this + 0x80);
  return;
}


//// FUNCTION FUN_00451110 @ 00451110 ////

void FUN_00451110(void)

{
  DAT_00e4ff50 = 1;
  return;
}


//// FUNCTION FUN_00451120 @ 00451120 ////

float10 __thiscall FUN_00451120(float *param_1,float *param_2)

{
  return ((float10)*param_1 - (float10)*param_2) * ((float10)*param_1 - (float10)*param_2) +
         ((float10)param_1[1] - (float10)param_2[1]) * ((float10)param_1[1] - (float10)param_2[1]);
}


//// FUNCTION FUN_00451140 @ 00451140 ////

void __thiscall FUN_00451140(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  float local_8 [2];
  
  FUN_009840b0(local_8,param_1);
  uVar6 = WorldToOccupancyGridCoord(local_8);
  iVar5 = (int)((ulonglong)uVar6 >> 0x20);
  iVar4 = (int)uVar6;
  FUN_00450ef0(this,iVar4,iVar5);
  FUN_00450ef0(this,iVar4,iVar5);
  FUN_00450ef0(this,iVar4,iVar5);
  FUN_00450ef0(this,iVar4,iVar5);
  FUN_00450ef0(this,iVar4,iVar5);
  FUN_00450ef0(this,iVar4,iVar5);
  iVar1 = iVar4 + 1;
  FUN_00450ef0(this,iVar1,iVar5);
  FUN_00450ef0(this,iVar1,iVar5);
  local_8[0] = (float)(iVar4 + -1);
  FUN_00450ef0(this,(int)local_8[0],iVar5);
  FUN_00450ef0(this,(int)local_8[0],iVar5);
  iVar2 = iVar5 + 1;
  FUN_00450ef0(this,iVar4,iVar2);
  FUN_00450ef0(this,iVar4,iVar2);
  iVar5 = iVar5 + -1;
  FUN_00450ef0(this,iVar4,iVar5);
  FUN_00450ef0(this,iVar4,iVar5);
  FUN_00450ef0(this,iVar1,iVar2);
  fVar3 = local_8[0];
  FUN_00450ef0(this,(int)local_8[0],iVar2);
  FUN_00450ef0(this,iVar1,iVar5);
  FUN_00450ef0(this,(int)fVar3,iVar5);
  return;
}


//// FUNCTION FUN_00451240 @ 00451240 ////

int * __thiscall FUN_00451240(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00451280 @ 00451280 ////

int * __thiscall FUN_00451280(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004512c0 @ 004512c0 ////

undefined4 __thiscall FUN_004512c0(void *this,float *param_1)

{
  if (*(float *)((int)this + 4) <= *(float *)((int)this + 0xc)) {
    if ((((*(float *)this <= *param_1) &&
         (*param_1 < *(float *)((int)this + 8) != (*param_1 == *(float *)((int)this + 8)))) &&
        (param_1[1] < *(float *)((int)this + 0xc) != (param_1[1] == *(float *)((int)this + 0xc))))
       && (*(float *)((int)this + 4) <= param_1[1])) {
      return 1;
    }
  }
  else if (((*(float *)this <= *param_1) &&
           (*param_1 < *(float *)((int)this + 8) != (*param_1 == *(float *)((int)this + 8)))) &&
          ((*(float *)((int)this + 0xc) <= param_1[1] &&
           (param_1[1] < *(float *)((int)this + 4) != (param_1[1] == *(float *)((int)this + 4))))))
  {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00451340 @ 00451340 ////

int __fastcall FUN_00451340(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3;
}


//// FUNCTION FUN_004515d0 @ 004515d0 ////

undefined4 __thiscall FUN_004515d0(void *this,int *param_1)

{
  if ((*param_1 == *(int *)this) && (param_1[1] == *(int *)((int)this + 4))) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_004518f0 @ 004518f0 ////

void __cdecl FUN_004518f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00451910 @ 00451910 ////

void __cdecl FUN_00451910(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00451930 @ 00451930 ////

void __cdecl FUN_00451930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00451970 @ 00451970 ////

void __cdecl FUN_00451970(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_004519b0 @ 004519b0 ////

void __cdecl FUN_004519b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_00451f00 @ 00451f00 ////

undefined4 * __fastcall FUN_00451f00(undefined4 *param_1)

{
  FUN_00999750(param_1);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_00d1a780;
  param_1[0xc] = param_1[0xc] & 0xfffffffc;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xc] = param_1[0xc] & 0xfffffffb | 8;
  return param_1;
}


//// FUNCTION FUN_00451f50 @ 00451f50 ////

undefined4 * __thiscall FUN_00451f50(void *this,byte param_1)

{
  FUN_00451f70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00451f70 @ 00451f70 ////

void __fastcall FUN_00451f70(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca17a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1a780;
  local_4 = 0;
  FUN_009999a0(param_1);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[10]);
}


//// FUNCTION FUN_00452010 @ 00452010 ////

undefined4 * FUN_00452010(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca17cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x44);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00451f00(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00452080 @ 00452080 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452080(int *param_1,float *param_2)

{
  float fVar1;
  undefined2 in_FPUControlWord;
  
  fVar1 = param_2[1];
  _DAT_00f886f8 = CONCAT22(DAT_00f886f8_2,in_FPUControlWord);
  *param_1 = (int)ROUND((*param_2 - -160.0) * 0.25);
  param_1[1] = (int)ROUND((fVar1 - -24.0) * 0.25);
  return;
}


//// FUNCTION FUN_004520f0 @ 004520f0 ////

void FUN_004520f0(float *param_1,int param_2,int param_3)

{
  *param_1 = (float)(param_2 * 4 + -0xa0);
  param_1[1] = (float)(param_3 * 4 + -0x18);
  return;
}


//// FUNCTION FUN_00452180 @ 00452180 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00452180(void *this,undefined4 *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 local_4;
  
  local_4 = 0;
  if ((param_2 != 0.0) && ((*(byte *)((int)param_2 + 0xf8) & 4) == 0)) {
    if ((DAT_00f88ed8 & 1) == 0) {
      DAT_00f88ed8 = DAT_00f88ed8 | 1;
      DAT_00f88ed4 = 0xff00ff00;
    }
    uVar2 = DAT_00f88ed4;
    if ((DAT_00f88ed8 & 2) == 0) {
      DAT_00f88ed8 = DAT_00f88ed8 | 2;
      DAT_00f88ed0 = 0xffff0000;
    }
    uVar1 = DAT_00f88ed0;
    if ((*(float *)((int)this + 0x1bb0e4) < 0.0 != (*(float *)((int)this + 0x1bb0e4) == 0.0)) ||
       (1.0 <= *(float *)((int)this + 0x1bb0e4))) {
      param_2 = *(float *)((int)param_2 + (*(uint *)((int)this + 0x1bb0d0) ^ 1) * 4);
    }
    else {
      param_2 = *(float *)((int)param_2 + (*(uint *)((int)this + 0x1bb0d0) ^ 1) * 4) *
                *(float *)((int)this + 0x1bb0e4) +
                (1.0 - *(float *)((int)this + 0x1bb0e4)) *
                *(float *)((int)param_2 + *(uint *)((int)this + 0x1bb0d0) * 4);
    }
    if (param_2 <= 1.5258789e-05) {
      if (param_2 < -1.5258789e-05) {
        param_2 = -param_2;
        if (1.0 < param_2) {
          param_2 = 1.0;
        }
        FUN_00ace9b0();
        uVar3 = FUN_00acd42c();
        FUN_0040a4f0(&param_2,(int)uVar3);
        local_4._0_3_ = (undefined3)uVar1;
        local_4 = CONCAT13(param_2._0_1_,(undefined3)local_4);
      }
    }
    else if (_DAT_00e4ff00 != 0.0) {
      if (1.0 < param_2) {
        param_2 = 1.0;
      }
      FUN_00ace9b0();
      uVar3 = FUN_00acd42c();
      FUN_0040a4f0(&param_2,(int)uVar3);
      local_4._0_3_ = (undefined3)uVar2;
      local_4 = CONCAT13(param_2._0_1_,(undefined3)local_4);
      *param_1 = local_4;
      return;
    }
  }
  *param_1 = local_4;
  return;
}


//// FUNCTION FUN_00452360 @ 00452360 ////

void FUN_00452360(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_3;
  iVar7 = 0;
  iVar5 = 0;
  iVar6 = 0;
  iVar2 = 0;
  if (0 < param_3) {
    pbVar3 = (byte *)(param_2 + 2);
    do {
      iVar7 = iVar7 + (uint)pbVar3[1];
      iVar5 = iVar5 + (uint)*pbVar3;
      iVar6 = iVar6 + (uint)pbVar3[-1];
      iVar2 = iVar2 + (uint)pbVar3[-2];
      pbVar3 = pbVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  iVar2 = iVar2 / iVar1;
  iVar6 = iVar6 / iVar1;
  iVar5 = iVar5 / iVar1;
  iVar7 = iVar7 / iVar1;
  *param_1 = 0xff;
  param_1[1] = 0xff;
  param_1[2] = 0xff;
  param_1[3] = 0xff;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  else if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  param_1[3] = (char)iVar7;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  param_1[2] = (char)iVar5;
  if (iVar6 < 0) {
    uVar4 = 0;
  }
  else if (iVar6 < 0x100) {
    uVar4 = (undefined1)iVar6;
  }
  else {
    uVar4 = 0xff;
  }
  param_1[1] = uVar4;
  if (iVar2 < 0) {
    *param_1 = 0;
    return;
  }
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  *param_1 = (char)iVar2;
  return;
}


//// FUNCTION FUN_00452440 @ 00452440 ////

int __thiscall FUN_00452440(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = param_1[1];
  iVar4 = *param_1;
  iVar3 = iVar4 + -1;
  iVar5 = iVar2 + -1;
  if ((((iVar3 < 0) || (0x4f < iVar3)) || (iVar5 < 0)) ||
     (((0x3f < iVar5 || (iVar8 = (iVar3 * 0x40 + iVar5) * 0xfc + 0x84 + (int)this, iVar8 == 0)) ||
      (*(int *)(iVar8 + 0xec) == 0)))) {
    iVar8 = 0;
  }
  else {
    iVar8 = 1;
  }
  if (((iVar4 < 0) || (0x4f < iVar4)) ||
     ((iVar5 < 0 ||
      (((0x3f < iVar5 || (iVar9 = (iVar4 * 0x40 + iVar5) * 0xfc + 0x84 + (int)this, iVar9 == 0)) ||
       (*(int *)(iVar9 + 0xec) == 0)))))) {
    iVar9 = 0;
  }
  else {
    iVar9 = 1;
  }
  iVar1 = iVar4 + 1;
  if (((iVar1 < 0) || (0x4f < iVar1)) ||
     (((iVar5 < 0 ||
       ((0x3f < iVar5 || (iVar5 = (int)this + (iVar1 * 0x40 + iVar5) * 0xfc + 0x84, iVar5 == 0))))
      || (*(int *)(iVar5 + 0xec) == 0)))) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
  }
  if (((((iVar3 < 0) || (0x4f < iVar3)) || (iVar2 < 0)) ||
      ((0x3f < iVar2 || (iVar6 = (iVar3 * 0x40 + iVar2) * 0xfc + 0x84 + (int)this, iVar6 == 0)))) ||
     (*(int *)(iVar6 + 0xec) == 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
  }
  if (((iVar1 < 0) || (0x4f < iVar1)) ||
     ((iVar2 < 0 ||
      (((0x3f < iVar2 || (iVar7 = (iVar1 * 0x40 + iVar2) * 0xfc + 0x84 + (int)this, iVar7 == 0)) ||
       (*(int *)(iVar7 + 0xec) == 0)))))) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  iVar2 = iVar2 + 1;
  if ((((iVar3 < 0) || (0x4f < iVar3)) ||
      ((iVar2 < 0 ||
       ((0x3f < iVar2 || (iVar3 = (iVar3 * 0x40 + iVar2) * 0xfc + 0x84 + (int)this, iVar3 == 0))))))
     || (*(int *)(iVar3 + 0xec) == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  if ((((iVar4 < 0) || (0x4f < iVar4)) || (iVar2 < 0)) ||
     (((0x3f < iVar2 || (iVar4 = (iVar4 * 0x40 + iVar2) * 0xfc + 0x84 + (int)this, iVar4 == 0)) ||
      (*(int *)(iVar4 + 0xec) == 0)))) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  iVar4 = iVar8 + iVar9 + iVar5 + iVar6 + iVar7 + iVar3 + iVar4;
  if (((-1 < iVar1) && (iVar1 < 0x50)) &&
     ((-1 < iVar2 &&
      (((iVar2 < 0x40 && (iVar3 = (iVar1 * 0x40 + iVar2) * 0xfc + 0x84 + (int)this, iVar3 != 0)) &&
       (*(int *)(iVar3 + 0xec) != 0)))))) {
    return iVar4 + 1;
  }
  return iVar4;
}


//// FUNCTION FUN_00452670 @ 00452670 ////

undefined1 __fastcall FUN_00452670(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined8 uVar8;
  char local_1d;
  undefined8 local_1c;
  float local_14 [2];
  float local_c [3];
  
  local_1d = '\0';
  if (DAT_0104e720 == (void *)0x0) {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  bVar1 = FUN_00413cc0((int)DAT_00f87aa0);
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x68) = 0;
    uVar3 = FUN_00554030(0x73);
    if ((char)uVar3 != '\0') {
      pfVar4 = (float *)FUN_00538ef0(local_c,(float *)&DAT_0104cce0,0.0);
      FUN_0041b5a0(DAT_00f87aa0,pfVar4);
    }
  }
  else {
    uVar5 = FUN_0078bab0();
    if (((((char)uVar5 == '\0') && (*(char *)(param_1 + 0x68) == '\0')) && (DAT_00f885f4 == 0)) &&
       ((uVar5 = FUN_0053c9f0(), (char)uVar5 == '\0' && (DAT_0104c6b0 == 0)))) {
      cVar2 = FUN_00553f70(0x73);
      if ((cVar2 == '\0') && (cVar2 = FUN_00553f70(0x74), cVar2 == '\0')) {
        FUN_00538ef0(local_c,(float *)&DAT_0104cce0,0.0);
        FUN_009840b0(&local_1c,local_c);
        uVar8 = WorldToOccupancyGridCoord((float *)&local_1c);
        local_1c = uVar8;
        if (DAT_00f890c0 != 0) {
          FUN_009840b0(local_14,local_c);
          uVar5 = FUN_004512c0((void *)(DAT_00f890c0 + 0x44c),local_14);
          if (((char)uVar5 != '\0') &&
             (uVar5 = FUN_004515d0(&local_1c,(int *)(param_1 + 0x78)), (char)uVar5 != '\0')) {
            iVar7 = (int)((ulonglong)uVar8 >> 0x20);
            uVar3 = FUN_00450840((uint)uVar8,iVar7);
            if ((char)uVar3 != '\0') {
              uVar5 = FUN_0078c470((uint)uVar8,iVar7);
              local_1d = (char)uVar5;
            }
          }
        }
        *(undefined8 *)(param_1 + 0x78) = uVar8;
        *(undefined1 *)(param_1 + 0x68) = 0;
        if (local_1d != '\0') {
          iVar7 = *(int *)(param_1 + 0x6c) + 1;
          *(int *)(param_1 + 0x6c) = iVar7;
          if (iVar7 < 10) {
            return 0;
          }
          iVar7 = FUN_0078c380((float *)&DAT_0104cce0,'\x01');
          *(int *)(param_1 + 0x70) = iVar7;
          *(undefined4 *)(param_1 + 0x74) = extraout_EDX;
          return 0;
        }
      }
      else if (9 < *(int *)(param_1 + 0x6c)) {
        cVar2 = FUN_00553f70(0x74);
        uVar3 = -(uint)(cVar2 != '\0') & 2;
        FUN_00538ef0(local_c,(float *)(&DAT_0104cd00 + uVar3 * 2),0.0);
        FUN_009840b0(local_14,local_c);
        uVar8 = WorldToOccupancyGridCoord(local_14);
        uVar6 = FUN_00450840((uint)uVar8,(int)((ulonglong)uVar8 >> 0x20));
        if ((char)uVar6 != '\0') {
          FUN_0078df70(1);
          FUN_0078b940(DAT_0104e720,0,uVar3 == 2);
          iVar7 = FUN_0078c380((float *)(&DAT_0104cd00 + uVar3 * 2),'\x01');
          local_1c = CONCAT44(extraout_EDX_00,iVar7);
          FUN_0078d410(DAT_0104e720,(undefined4 *)&local_1c);
          *(undefined1 *)(param_1 + 0x68) = 1;
          *(undefined4 *)(param_1 + 0x6c) = 0;
          return 1;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return 0;
}


//// FUNCTION FUN_00452900 @ 00452900 ////

void __thiscall FUN_00452900(void *this,float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  float local_8;
  float local_4;
  
  local_8 = *param_1 - param_2;
  local_4 = param_1[1] - param_2;
  FUN_00452080((int *)&local_10,&local_8);
  local_8 = param_2 + *param_1;
  local_4 = param_2 + param_1[1];
  FUN_00452080((int *)&local_18,&local_8);
  fVar1 = param_2 * param_2;
  local_10 = ((int)local_10 < 0) - 1 & local_10;
  if (0x4f < (int)local_10) {
    local_10 = 0x4f;
  }
  local_c = local_c & ((int)local_c < 0) - 1;
  if (0x3f < (int)local_c) {
    local_c = 0x3f;
  }
  local_18 = ((int)local_18 < 0) - 1 & local_18;
  if (0x4f < (int)local_18) {
    local_18 = 0x4f;
  }
  local_14 = ((int)local_14 < 0) - 1 & local_14;
  if (0x3f < (int)local_14) {
    local_14 = 0x3f;
  }
  if ((int)local_c <= (int)local_14) {
    param_2 = (float)(local_c * 4 + -0x18);
    do {
      if ((int)local_10 <= (int)local_18) {
        iVar5 = local_10 * 4 + -0xa0;
        iVar6 = (local_10 * 0x40 + local_c) * 0xfc + 0x84 + (int)this;
        iVar4 = (local_18 - local_10) + 1;
        do {
          fVar2 = ((float)(int)param_2 - param_1[1]) * ((float)(int)param_2 - param_1[1]) +
                  ((float)iVar5 - *param_1) * ((float)iVar5 - *param_1);
          if (fVar2 < fVar1 != (fVar2 == fVar1)) {
            if ((((iVar5 < -0xa0) || (0x9f < iVar5)) || ((int)param_2 < -0x18)) ||
               (iVar3 = iVar6, 0xe7 < (int)param_2)) {
              iVar3 = 0;
            }
            *(float *)(iVar3 + *(int *)((int)this + 0x1bb0d0) * 4) =
                 param_3 + *(float *)(iVar3 + *(int *)((int)this + 0x1bb0d0) * 4);
          }
          iVar5 = iVar5 + 4;
          iVar6 = iVar6 + 0x3f00;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_c = local_c + 1;
      param_2 = (float)((int)param_2 + 4);
    } while ((int)local_c <= (int)local_14);
  }
  return;
}


//// FUNCTION FUN_00452af0 @ 00452af0 ////

void __thiscall FUN_00452af0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x1bb10c);
  return;
}


//// FUNCTION FUN_00452b00 @ 00452b00 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00452b00(void *this,float *param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  longlong lVar6;
  float local_8;
  float local_4;
  
  fVar3 = FUN_00990e30(0.0,6.2831855);
  fVar4 = FUN_00990e30(0.0,1.5);
  fVar4 = FUN_00990e30(0.0,(float)fVar4);
  fVar5 = (float10)fcos((float10)(float)fVar3);
  local_8 = (float)(fVar5 * fVar4 + (float10)*param_1 + (float10)1.0);
  fVar3 = (float10)fsin((float10)(float)fVar3);
  local_4 = (float)(fVar3 * fVar4 + (float10)param_1[1] + (float10)1.0);
  lVar6 = WorldToOccupancyGridCoord(&local_8);
  iVar2 = (int)lVar6;
  if ((((0 < iVar2) && (iVar2 < 0xff)) && (0xffffffff < lVar6)) &&
     ((lVar6 < 0xff00000000 &&
      (pfVar1 = (float *)((int)this +
                         (iVar2 * 0x100 + (int)((ulonglong)lVar6 >> 0x20)) * 8 + 0x13b084),
      *pfVar1 < _DAT_00e4ff0c * 8.0 + _DAT_00e4ff10)))) {
    *pfVar1 = *pfVar1 + 1.0;
  }
  return;
}


//// FUNCTION FUN_00452bc0 @ 00452bc0 ////

void FUN_00452bc0(float *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  float local_28 [2];
  undefined4 local_20;
  float local_1c;
  float local_14;
  
  uVar15 = WorldToOccupancyGridCoord(param_1);
  iVar11 = (int)((ulonglong)uVar15 >> 0x20);
  iVar5 = (int)uVar15;
  iVar14 = iVar5 + -8;
  local_44 = 1;
  local_50 = 0.0;
  if (iVar14 < iVar5 + 8) {
    iVar12 = iVar14 - iVar5;
    local_38 = iVar14 * 0x100;
    while( true ) {
      local_40 = (int)((ulonglong)uVar15 >> 0x20);
      iVar13 = local_40 + -8;
      iVar8 = (int)uVar15;
      if (iVar13 < iVar11 + 8) {
        local_40 = iVar13 - local_40;
        do {
          FUN_0046cf10(local_28,iVar14,iVar13);
          uVar6 = FUN_004512c0((void *)(DAT_00f890c0 + 0x44c),local_28);
          fVar2 = local_50;
          iVar8 = local_4c;
          iVar3 = local_48;
          if (((char)uVar6 != '\0') && (cVar4 = FUN_0046d260(local_28,0x71), cVar4 != '\0')) {
            FUN_009e2490(iVar14,iVar13,&local_20);
            fVar1 = local_14 + local_1c;
            if (((fVar1 <= 0.5) || (fVar1 < local_50)) ||
               ((((-1 < local_38 && (local_38 < 0x10000)) && (-1 < iVar13)) &&
                ((iVar13 < 0x100 &&
                 (iVar10 = local_38 + iVar13, iVar7 = (int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3,
                 (*(byte *)(g_OccupancyGrid256_A + iVar7) &
                 (byte)(1 << ((char)iVar10 + (char)iVar7 * -8 & 0x1fU))) != 0)))))) {
              if (local_50 == 0.0) {
                iVar8 = FUN_00990d30(0,local_44);
                if (iVar8 == 0) {
                  local_4c = iVar13;
                  local_48 = iVar14;
                }
                local_44 = local_44 + 1;
                iVar8 = local_4c;
                iVar3 = local_48;
              }
            }
            else {
              fVar2 = fVar1;
              iVar8 = iVar13;
              iVar3 = iVar14;
              if ((fVar1 <= local_50) &&
                 (fVar2 = local_50, iVar8 = local_4c, iVar3 = local_48,
                 iVar12 * iVar12 + local_40 * local_40 <
                 (local_48 - iVar5) * (local_48 - iVar5) + (local_4c - iVar11) * (local_4c - iVar11)
                 )) {
                fVar2 = fVar1;
                iVar8 = iVar13;
                iVar3 = iVar14;
              }
            }
          }
          local_48 = iVar3;
          local_4c = iVar8;
          local_50 = fVar2;
          iVar13 = iVar13 + 1;
          local_40 = local_40 + 1;
          iVar8 = iVar5;
        } while (iVar13 < iVar11 + 8);
      }
      iVar14 = iVar14 + 1;
      local_38 = local_38 + 0x100;
      iVar12 = iVar12 + 1;
      if (iVar8 + 8 <= iVar14) break;
      uVar15 = CONCAT44(iVar11,iVar8);
    }
  }
  puVar9 = (undefined4 *)FUN_0046cf10(local_28,local_48,local_4c);
  *param_2 = *puVar9;
  param_2[1] = puVar9[1];
  return;
}


//// FUNCTION FUN_00452e20 @ 00452e20 ////

void FUN_00452e20(float *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_8;
  
  local_8 = WorldToOccupancyGridCoord(param_1);
  iVar2 = (int)((ulonglong)local_8 >> 0x20);
  iVar1 = (int)local_8;
  FUN_00450fe0((uint *)&local_8);
  FUN_00450fe0((uint *)&local_8);
  FUN_00450fe0((uint *)&local_8);
  local_8._0_4_ = iVar1 + 1;
  FUN_00450fe0((uint *)&local_8);
  local_8 = CONCAT44(local_8._4_4_,iVar1 + -1);
  FUN_00450fe0((uint *)&local_8);
  local_8 = CONCAT44(iVar2 + 1,iVar1);
  FUN_00450fe0((uint *)&local_8);
  local_8 = CONCAT44(iVar2 + -1,(uint)local_8);
  FUN_00450fe0((uint *)&local_8);
  return;
}


//// FUNCTION FUN_00452ec0 @ 00452ec0 ////

void FUN_00452ec0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  void *this;
  float *pfVar4;
  undefined8 uVar5;
  int local_38;
  int local_34;
  int local_30;
  undefined8 local_2c;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  int local_c;
  
  if (param_1 != (int *)0x0) {
    local_38 = 0;
    local_30 = 0;
    if (0 < param_1[1]) {
      do {
        local_34 = 0;
        if (0 < param_1[2]) {
          do {
            if ((*(byte *)(local_38 + *param_1) & 1) != 0) {
              FUN_00acd42c();
              FUN_00acd42c();
              uVar5 = FUN_0046c0a0();
              iVar2 = (int)((ulonglong)uVar5 >> 0x20);
              fVar1 = (float)uVar5;
              local_2c = CONCAT44(iVar2,(int)fVar1 + 1);
              FUN_009e4760(2,(int *)&local_2c);
              local_24 = (int)fVar1 + -1;
              local_20 = iVar2;
              FUN_009e4760(2,&local_24);
              local_18 = (float)(iVar2 + 1);
              local_1c = fVar1;
              FUN_009e4760(2,(int *)&local_1c);
              local_c = iVar2 + -1;
              local_10 = fVar1;
              FUN_009e4760(2,(int *)&local_10);
            }
            local_38 = local_38 + 1;
            local_34 = local_34 + 1;
          } while (local_34 < param_1[2]);
        }
        local_30 = local_30 + 1;
      } while (local_30 < param_1[1]);
    }
    local_38 = 0;
    local_30 = 0;
    if (0 < param_1[1]) {
      do {
        local_34 = 0;
        if (0 < param_1[2]) {
          do {
            if ((*(byte *)(local_38 + *param_1) & 1) != 0) {
              FUN_00acd42c();
              FUN_00acd42c();
              local_2c = FUN_0046c0a0();
              iVar2 = FUN_00990d30(0,2);
              iVar3 = FUN_00990d30(0,2);
              if (0 < iVar2) {
                do {
                  local_10 = (float)local_2c;
                  local_c = local_2c._4_4_;
                  FUN_009e4760(-(uint)(iVar3 != 0) & 4,(int *)&local_10);
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
            }
            local_38 = local_38 + 1;
            local_34 = local_34 + 1;
          } while (local_34 < param_1[2]);
        }
        local_30 = local_30 + 1;
      } while (local_30 < param_1[1]);
    }
    iVar2 = FUN_009e6b20(param_1);
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x3fU)) >> 6;
    if (0 < iVar2) {
      do {
        this = (void *)FUN_00463630(0);
        if (this != (void *)0x0) {
          pfVar4 = (float *)FUN_0046da60(&local_10,param_1);
          local_1c = *pfVar4;
          local_18 = pfVar4[1];
          local_14 = 0;
          FUN_00463b80(this,&local_1c);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}


//// FUNCTION FUN_00453110 @ 00453110 ////

void FUN_00453110(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float local_50;
  float local_4c;
  undefined8 local_48;
  int local_3c;
  float local_38;
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
  
  if (param_1 != 0) {
    FUN_00acd42c();
    FUN_00acd42c();
    uVar7 = FUN_0046c0a0();
    local_3c = (int)((ulonglong)uVar7 >> 0x20);
    FUN_00acd42c();
    FUN_00acd42c();
    local_48 = FUN_0046c0a0();
    local_34 = *(undefined4 *)(DAT_00f890c0 + 0x450);
    local_38 = *(float *)(DAT_00f890c0 + 0x44c);
    uVar8 = WorldToOccupancyGridCoord(&local_38);
    iVar3 = (int)((ulonglong)uVar8 >> 0x20);
    local_4c = *(float *)(DAT_00f890c0 + 0x458);
    local_50 = *(float *)(DAT_00f890c0 + 0x454);
    uVar9 = WorldToOccupancyGridCoord(&local_50);
    iVar5 = (int)((ulonglong)uVar9 >> 0x20);
    iVar4 = (int)uVar7;
    if ((int)uVar7 <= (int)uVar8) {
      iVar4 = (int)uVar8;
    }
    if (local_3c <= iVar3) {
      local_3c = iVar3;
    }
    if ((int)uVar9 <= (int)local_48) {
      local_48._0_4_ = (int)uVar9;
    }
    if (iVar5 <= local_48._4_4_) {
      local_48._4_4_ = iVar5;
    }
    if (iVar4 <= (int)local_48) {
      iVar6 = iVar4 << 8;
      iVar3 = local_48._4_4_;
      iVar5 = local_3c;
      do {
        iVar2 = iVar5;
        if (iVar5 <= iVar3) {
          do {
            if ((((-1 < iVar6) && (iVar6 < 0x10000)) && (-1 < iVar5)) &&
               ((iVar5 < 0x100 &&
                (iVar3 = iVar6 + iVar5, iVar2 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3,
                (*(byte *)(iVar2 + g_OccupancyGrid256_A) &
                (byte)(1 << ((char)iVar3 + (char)iVar2 * -8 & 0x1fU))) != 0)))) {
              FUN_0046cf10(&local_50,iVar4,iVar5);
              local_30 = local_50 + 1.0;
              local_2c = local_4c + 1.0;
              cVar1 = FUN_0046d260(&local_30,1);
              if (cVar1 == '\0') {
                local_28 = local_50 - 1.6;
                local_24 = local_4c - 1.6;
                cVar1 = FUN_0046d260(&local_28,1);
                if (cVar1 == '\0') {
                  local_20 = local_50 + 3.6;
                  local_1c = local_4c - 1.6;
                  cVar1 = FUN_0046d260(&local_20,1);
                  if (cVar1 == '\0') {
                    local_18 = local_50 + 3.6;
                    local_14 = local_4c + 3.6;
                    cVar1 = FUN_0046d260(&local_18,1);
                    if (cVar1 == '\0') {
                      local_10 = local_50 - 1.6;
                      local_c = local_4c + 3.6;
                      cVar1 = FUN_0046d260(&local_10,1);
                      if (cVar1 == '\0') {
                        FUN_00465a00(iVar4,iVar5);
                      }
                    }
                  }
                }
              }
            }
            iVar5 = iVar5 + 1;
            iVar3 = local_48._4_4_;
            iVar2 = local_3c;
          } while (iVar5 <= local_48._4_4_);
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x100;
        iVar5 = iVar2;
      } while (iVar4 <= (int)local_48);
    }
  }
  return;
}


//// FUNCTION FUN_004533a0 @ 004533a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004533a0(void *this,undefined4 *param_1,float *param_2)

{
  int iVar1;
  longlong lVar2;
  float local_8;
  float local_4;
  
  if ((_DAT_00f88ee4 & 1) == 0) {
    _DAT_00f88ee4 = _DAT_00f88ee4 | 1;
    _DAT_00f88edc = 1.0;
    _DAT_00f88ee0 = 1.0;
  }
  local_8 = _DAT_00f88edc + *param_2;
  local_4 = _DAT_00f88ee0 + param_2[1];
  lVar2 = WorldToOccupancyGridCoord(&local_8);
  iVar1 = (int)lVar2;
  if ((((0 < iVar1) && (iVar1 < 0xff)) && (0xffffffff < lVar2)) && (lVar2 < 0xff00000000)) {
    FUN_00407070(param_1,*(float *)((int)this +
                                   (iVar1 * 0x100 + (int)((ulonglong)lVar2 >> 0x20)) * 8 + 0x13b088)
                );
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


//// FUNCTION FUN_00453450 @ 00453450 ////

void FUN_00453450(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00523eb0();
  FUN_00450130();
  puVar2 = DAT_00f88720;
  if (DAT_00f88720 != (undefined4 *)0x0) {
    iVar1 = DAT_00f88720[0x12];
    DAT_00f88720[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f8870c[1])();
    DAT_00f88720 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0045349a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_00f8870c)();
    return;
  }
  return;
}


//// FUNCTION FUN_00453850 @ 00453850 ////

void __cdecl FUN_00453850(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00453880 @ 00453880 ////

void __cdecl FUN_00453880(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_004538c0 @ 004538c0 ////

void __cdecl FUN_004538c0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00453900 @ 00453900 ////

void __cdecl FUN_00453900(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00453930 @ 00453930 ////

void __cdecl FUN_00453930(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


//// FUNCTION FUN_00453c40 @ 00453c40 ////

void __cdecl FUN_00453c40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00453cf0 @ 00453cf0 ////

void FUN_00453cf0(float *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  *param_1 = (float)(*param_2 * 4 + -0xa0);
  param_1[1] = (float)(iVar1 * 4 + -0x18);
  return;
}


//// FUNCTION FUN_00453d40 @ 00453d40 ////

bool FUN_00453d40(int *param_1)

{
  char cVar1;
  float local_8;
  float local_4;
  
  local_8 = (float)(*param_1 * 4 + -0xa0);
  local_4 = (float)(param_1[1] * 4 + -0x18);
  cVar1 = FUN_0046d260(&local_8,1);
  return (bool)('\x01' - (cVar1 != '\0'));
}


//// FUNCTION FUN_00453da0 @ 00453da0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00453da0(int *param_1)

{
  uint uVar1;
  float fVar2;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  float local_10;
  float local_c;
  
  local_28 = (float)(*param_1 * 4 + -0xa0);
  local_30 = param_1[1] * 4 + -0x18;
  local_24 = (float)local_30;
  local_10 = (local_28 - 2.0) + _DAT_01049118 * 0.5;
  local_c = (local_24 - 2.0) + _DAT_01049118 * 0.5;
  local_20 = local_28;
  local_1c = local_24;
  FUN_0046cad0(&local_18,&local_10);
  local_10 = (local_28 + 2.0) - _DAT_01049118 * 0.5;
  local_c = (local_24 + 2.0) - _DAT_01049118 * 0.5;
  FUN_0046cad0((int *)&local_20,&local_10);
  local_30 = local_18;
  local_2c = local_14;
  fVar2 = local_1c;
  if (local_18 <= (int)local_20) {
    do {
      local_18 = local_2c;
      if (local_2c <= (int)fVar2) {
        do {
          uVar1 = FUN_0046c5d0(&local_30,1);
          if ((char)uVar1 != '\0') {
            return uVar1 & 0xffffff00;
          }
          local_2c = local_2c + 1;
          local_18 = local_14;
          fVar2 = local_1c;
        } while (local_2c <= (int)local_1c);
      }
      local_30 = local_30 + 1;
      local_2c = local_18;
    } while (local_30 <= (int)local_20);
  }
  return CONCAT31((int3)((uint)local_18 >> 8),1);
}


//// FUNCTION FUN_00453f30 @ 00453f30 ////

int __thiscall FUN_00453f30(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float local_10;
  float local_c;
  int local_8 [2];
  
  local_c = param_1[1];
  local_10 = *param_1;
  piVar3 = (int *)FUN_00452080(local_8,&local_10);
  iVar1 = piVar3[1];
  iVar2 = *piVar3;
  if ((((-1 < iVar2) && (iVar2 < 0x50)) && (-1 < iVar1)) && (iVar1 < 0x40)) {
    return (iVar2 * 0x40 + iVar1) * 0xfc + 0x84 + (int)this;
  }
  return 0;
}


//// FUNCTION FUN_00453fa0 @ 00453fa0 ////

void __fastcall FUN_00453fa0(void *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  int local_5c;
  int local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  if (0 < DAT_0105be08) {
    local_5c = 0;
    do {
      local_58 = 0;
      iVar8 = local_5c;
      do {
        iVar4 = local_58;
        if ((((iVar8 < 0) || (0x4f < iVar8)) || (local_58 < 0)) || (0x3f < local_58)) {
          iVar9 = 0;
        }
        else {
          iVar9 = (iVar8 * 0x40 + local_58) * 0xfc + 0x84 + (int)param_1;
        }
        pfVar1 = (float *)(iVar9 + *(int *)((int)param_1 + 0x1bb0d0) * 4);
        if (-*(float *)((int)param_1 + 0x1bb100) < *pfVar1) {
          iVar6 = *(int *)(iVar9 + 0xec);
          if (*pfVar1 < *(float *)((int)param_1 + 0x1bb104)) {
            if (iVar6 != 0) goto LAB_00454305;
          }
          else if (iVar6 == 0) {
            iVar6 = FUN_00452440(param_1,&local_5c);
            fVar2 = (float)(local_5c * 4 + -0xa0);
            fVar3 = (float)(iVar4 * 4 + -0x18);
            fStack_3c = fVar2;
            fStack_38 = fVar3;
            fStack_1c = fVar2;
            fStack_18 = fVar3;
            cVar5 = FUN_0046d260(&fStack_1c,1);
            iVar8 = local_5c;
            if ((cVar5 != '\0') &&
               (iVar6 = FUN_00990d30(0,(iVar6 + 1) * 5), iVar8 = local_5c, iVar6 == 0)) {
              uStack_c = 0;
              fStack_34 = fVar2;
              fStack_30 = fVar3;
              fStack_2c = fVar2;
              fStack_28 = fVar3;
              fStack_14 = fVar2;
              fStack_10 = fVar3;
              fVar10 = FUN_00990e30(-2.0,2.0);
              fStack_14 = (float)(fVar10 + (float10)fStack_14);
              fVar10 = FUN_00990e30(-2.0,2.0);
              fStack_10 = (float)(fVar10 + (float10)fStack_10);
              uStack_c = 0x3f800000;
              puVar7 = FUN_0040b300(*(void **)((int)param_1 + 0x1bb0f4),&fStack_14,0);
              (**(code **)(*(int *)(iVar9 + 0xd8) + 4))();
              *(undefined4 **)(iVar9 + 0xec) = puVar7;
              (*(code *)**(undefined4 **)(iVar9 + 0xd8))();
              iVar8 = local_5c;
            }
          }
          else {
            iVar6 = FUN_0040a9c0(iVar6);
            if ((iVar6 != *(int *)((int)param_1 + 0x1bb0f4)) ||
               (iVar6 = FUN_00990d30(0,0x32), iVar6 == 0)) {
              FUN_0040a3b0(*(int *)(iVar9 + 0xec));
              (**(code **)(*(int *)(iVar9 + 0xd8) + 4))();
              *(undefined4 *)(iVar9 + 0xec) = 0;
              (*(code *)**(undefined4 **)(iVar9 + 0xd8))();
            }
          }
        }
        else if (*(int *)(iVar9 + 0xec) == 0) {
          iVar6 = FUN_00452440(param_1,&local_5c);
          fVar2 = (float)(local_5c * 4 + -0xa0);
          fVar3 = (float)(iVar4 * 4 + -0x18);
          fStack_54 = fVar2;
          fStack_50 = fVar3;
          fStack_24 = fVar2;
          fStack_20 = fVar3;
          cVar5 = FUN_0046d260(&fStack_24,1);
          iVar8 = local_5c;
          if ((cVar5 != '\0') &&
             (iVar6 = FUN_00990d30(0,(iVar6 + 1) * 5), iVar8 = local_5c, iVar6 == 0)) {
            uStack_c = 0;
            fStack_4c = fVar2;
            fStack_48 = fVar3;
            fStack_44 = fVar2;
            fStack_40 = fVar3;
            fStack_14 = fVar2;
            fStack_10 = fVar3;
            fVar10 = FUN_00990e30(-2.0,2.0);
            fStack_14 = (float)(fVar10 + (float10)fStack_14);
            fVar10 = FUN_00990e30(-2.0,2.0);
            fStack_10 = (float)(fVar10 + (float10)fStack_10);
            uStack_c = 0x3f800000;
            puVar7 = FUN_0040b300(*(void **)((int)param_1 + 0x1bb0f0),&fStack_14,0);
            (**(code **)(*(int *)(iVar9 + 0xd8) + 4))();
            *(undefined4 **)(iVar9 + 0xec) = puVar7;
            (*(code *)**(undefined4 **)(iVar9 + 0xd8))();
            iVar8 = local_5c;
          }
        }
        else {
          iVar6 = FUN_0040a9c0(*(int *)(iVar9 + 0xec));
          if ((iVar6 != *(int *)((int)param_1 + 0x1bb0f0)) ||
             (iVar6 = FUN_00990d30(0,0x32), iVar6 == 0)) {
            iVar6 = *(int *)(iVar9 + 0xec);
LAB_00454305:
            FUN_0040a3b0(iVar6);
            (**(code **)(*(int *)(iVar9 + 0xd8) + 4))();
            *(undefined4 *)(iVar9 + 0xec) = 0;
            (*(code *)**(undefined4 **)(iVar9 + 0xd8))();
          }
        }
        local_58 = iVar4 + 1;
      } while (local_58 < 0x40);
      local_5c = iVar8 + 1;
    } while (local_5c < 0x50);
  }
  return;
}


//// FUNCTION FUN_00454330 @ 00454330 ////

/* WARNING: Removing unreachable block (ram,0x00454435) */
/* WARNING: Removing unreachable block (ram,0x0045450c) */
/* WARNING: Removing unreachable block (ram,0x0045454f) */

void FUN_00454330(void)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  undefined8 uVar14;
  float fVar15;
  uint local_bc;
  char local_b5;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  float local_98;
  float local_94;
  float local_90;
  int local_8c;
  uint local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28 [2];
  float local_20 [2];
  float local_18 [2];
  float local_10 [3];
  
  if (0 < DAT_0105be08) {
    FUN_00452080(&local_74,(float *)(DAT_00f890c0 + 0x44c));
    FUN_00452080(&local_3c,(float *)(DAT_00f890c0 + 0x454));
    local_8c = 0x4d2;
    local_a4 = local_74;
    if (local_74 < 0x50) {
      local_a0 = 0;
      iVar11 = local_74;
LAB_004543c0:
      do {
        if ((((local_74 < iVar11) && (iVar11 < local_3c)) && (local_70 < local_a0)) &&
           (local_a0 < local_38)) {
          uVar10 = local_8c * 0x19660d + 0x3c6ef35f;
          local_bc = uVar10 * 0x19660d + 0x3c6ef35f;
          local_88 = local_bc >> 6 & 0x7fffff;
          local_8c = local_8c + 1 + uVar10 % 0x1f;
          fVar15 = (float)local_88 * 1.192093e-07 * 0.7 + 0.1;
          if (((iVar11 < 0) || (0x4f < iVar11)) || ((local_a0 < 0 || (0x3f < local_a0)))) {
            iVar12 = 0;
          }
          else {
            iVar12 = (iVar11 * 0x40 + local_a0) * 0xfc + 0x84 + local_9c;
          }
          if (*(float *)(iVar12 + *(int *)(local_9c + 0x1bb0d0) * 4) <= fVar15) {
            iVar7 = *(int *)(iVar12 + 0xf4);
            if (-fVar15 <= *(float *)(iVar12 + *(int *)(local_9c + 0x1bb0d0) * 4)) {
              if (iVar7 != 0) {
                *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) | 0x100;
                *(undefined4 *)(iVar12 + 0xf4) = 0;
              }
              if (*(int *)(iVar12 + 0xf0) != 0) {
                puVar1 = (uint *)(*(int *)(iVar12 + 0xf0) + 0x30);
                *puVar1 = *puVar1 | 0x100;
                *(undefined4 *)(iVar12 + 0xf0) = 0;
              }
            }
            else {
              if (iVar7 != 0) {
                *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) | 0x100;
                *(undefined4 *)(iVar12 + 0xf4) = 0;
              }
              pfVar8 = (float *)FUN_00453cf0(local_10,&local_a4);
              local_b4 = *pfVar8;
              local_34 = local_b4 - 1.0;
              local_b0 = pfVar8[1];
              local_30 = local_b0 - 1.0;
              local_ac = 0.0;
              local_2c = 0;
              FUN_009840b0(local_20,&local_34);
              uVar14 = WorldToOccupancyGridCoord(local_20);
              iVar11 = (int)((ulonglong)uVar14 >> 0x20);
              uVar10 = (uint)uVar14;
              uVar9 = FUN_00450840(uVar10,iVar11);
              local_b5 = (char)uVar9;
              uVar9 = FUN_00450840(uVar10 + 1,iVar11);
              cVar5 = (char)uVar9;
              uVar9 = FUN_00450840(uVar10,iVar11 + 1);
              cVar6 = (char)uVar9;
              uVar10 = FUN_00450840(uVar10 + 1,iVar11 + 1);
              cVar4 = (char)uVar10;
              iVar11 = local_a4;
              if (local_b5 == '\0') {
                if (cVar5 == '\0') goto LAB_004547ca;
                if (cVar4 != '\0') goto LAB_00454831;
LAB_00454825:
                cVar3 = local_b5;
                if (cVar6 != '\0') {
joined_r0x0045482f:
                  if (cVar3 != '\0') goto LAB_00454831;
                }
                if (*(int *)(iVar12 + 0xf0) != 0) {
                  puVar1 = (uint *)(*(int *)(iVar12 + 0xf0) + 0x30);
                  *puVar1 = *puVar1 | 0x100;
                  *(undefined4 *)(iVar12 + 0xf0) = 0;
                }
              }
              else {
                if (cVar5 == '\0') {
LAB_004547ca:
                  cVar3 = cVar6;
                  if (cVar4 == '\0') goto LAB_00454825;
                  goto joined_r0x0045482f;
                }
LAB_00454831:
                iVar7 = *(int *)(iVar12 + 0xf0);
                if (((iVar7 != 0) && (*(float *)(iVar7 + 0x28) != 0.0)) &&
                   ((iVar2 = *(int *)(iVar7 + 0x28), iVar2 != 0x3fc90fdb &&
                    ((iVar2 != 0x40490fdb && (iVar2 != 0x4096cbe4)))))) {
                  *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) | 0x100;
                  *(undefined4 *)(iVar12 + 0xf0) = 0;
                }
                if (*(int *)(iVar12 + 0xf0) == 0) {
                  iVar11 = 1;
                  local_90 = 0.0;
                  local_94 = 0.0;
                  local_98 = 0.0;
                  if (local_b5 == '\0') {
LAB_004548ee:
                    local_90 = 0.0;
                    local_98 = 0.0;
                    if (cVar5 == '\0') goto LAB_00454935;
                    if (cVar4 != '\0') {
                      iVar7 = FUN_0044fa30(&local_bc,0,iVar11);
                      if (iVar7 == 0) {
                        local_60 = 0x3f800000;
                        local_98 = 1.0;
                        iVar11 = iVar11 + 1;
                        local_a8 = 0.0;
                        local_94 = 0.0;
                        local_90 = 0.0;
                        local_5c = 0;
                        local_58 = 0;
                      }
                      goto LAB_00454935;
                    }
LAB_0045498e:
                    if (((cVar6 != '\0') && (local_b5 != '\0')) &&
                       (iVar11 = FUN_0044fa30(&local_bc,0,iVar11), iVar11 == 0)) {
                      local_54 = 0xbf800000;
                      local_98 = -1.0;
                      local_a8 = 0.0;
                      local_94 = 0.0;
                      local_90 = 0.0;
                      local_50 = 0;
                      local_4c = 0;
                    }
                  }
                  else {
                    if (cVar5 != '\0') {
                      local_6c = 0;
                      local_68 = 0xbf800000;
                      local_64 = 0;
                      local_94 = -1.0;
                      local_a8 = 1.5707964;
                      iVar11 = 2;
                      goto LAB_004548ee;
                    }
LAB_00454935:
                    if (cVar4 == '\0') goto LAB_0045498e;
                    if (cVar6 != '\0') {
                      iVar7 = FUN_0044fa30(&local_bc,0,iVar11);
                      if (iVar7 == 0) {
                        local_44 = 0x3f800000;
                        local_94 = 1.0;
                        local_a8 = 1.5707964;
                        iVar11 = iVar11 + 1;
                        local_98 = 0.0;
                        local_90 = 0.0;
                        local_48 = 0;
                        local_40 = 0;
                      }
                      goto LAB_0045498e;
                    }
                  }
                  local_b4 = local_98 + local_b4;
                  local_b0 = local_94 + local_b0;
                  uVar10 = local_bc * 0x19660d + 0x3c6ef35f;
                  local_ac = local_90 + local_ac;
                  if ((uVar10 & 1) != 0) {
                    local_a8 = local_a8 + 3.1415927;
                  }
                  uVar9 = FUN_00995d50(*(int *)(local_9c + 0x1bb110));
                  iVar11 = local_a4;
                  if (-1 < (int)uVar9) {
                    iVar11 = uVar9 * 0x34 + *(int *)(*(int *)(local_9c + 0x1bb110) + 0x20);
                    *(int *)(iVar12 + 0xf0) = iVar11;
                    puVar1 = (uint *)(iVar11 + 0x30);
                    *puVar1 = *puVar1 & 0xfffffeff;
                    pfVar8 = *(float **)(iVar12 + 0xf0);
                    *pfVar8 = local_b4;
                    pfVar8[1] = local_b0;
                    pfVar8[2] = local_ac;
                    *(float *)(*(int *)(iVar12 + 0xf0) + 0x28) = local_a8;
                    FUN_0040a660(*(void **)(iVar12 + 0xf0),1.0);
                    iVar11 = uVar10 * 0x19660d + 0x3c6ef35f;
                    *(byte *)(*(int *)(iVar12 + 0xf0) + 0x30) = (byte)iVar11 & 7;
                    uVar10 = *(uint *)(*(int *)(iVar12 + 0xf0) + 0x30);
                    *(uint *)(*(int *)(iVar12 + 0xf0) + 0x30) =
                         uVar10 ^ ((iVar11 * 0x19660d + 0x3c6ef35fU & 0xff) << 9 ^ uVar10) & 0x200;
                    iVar11 = local_a4;
                  }
                }
              }
            }
          }
          else {
            if (*(int *)(iVar12 + 0xf0) != 0) {
              puVar1 = (uint *)(*(int *)(iVar12 + 0xf0) + 0x30);
              *puVar1 = *puVar1 | 0x100;
              *(undefined4 *)(iVar12 + 0xf0) = 0;
            }
            local_84 = (float)(iVar11 * 4 + -0xa0);
            uVar10 = local_bc * 0x19660d + 0x3c6ef35f;
            local_80 = (float)(local_a0 * 4 + -0x18);
            local_bc = uVar10 * 0x19660d + 0x3c6ef35f;
            local_88 = local_bc >> 6 & 0x7fffff;
            local_b4 = ((float)(uVar10 >> 6 & 0x7fffff) * 1.192093e-07 * 4.0 + local_84) - 2.0;
            local_ac = 0.06;
            local_b0 = ((float)local_88 * 1.192093e-07 * 4.0 + local_80) - 2.0;
            local_7c = local_84;
            local_78 = local_80;
            FUN_009840b0(local_28,&local_b4);
            uVar14 = WorldToOccupancyGridCoord(local_28);
            fVar15 = (float)((ulonglong)uVar14 >> 0x20);
            uVar10 = FUN_00450840((uint)(float)uVar14,(int)fVar15);
            if ((char)uVar10 == '\0') {
              FUN_009840b0(local_18,&local_b4);
              cVar4 = FUN_0046d260(local_18,1);
              if ((cVar4 != '\0') &&
                 (fVar13 = FUN_009e23b0((float)uVar14,fVar15,5), iVar7 = local_9c,
                 fVar13 < (float10)0.5)) {
                if ((*(int *)(iVar12 + 0xf4) == 0) &&
                   (uVar10 = FUN_00995d50(*(int *)(local_9c + 0x1bb114)), -1 < (int)uVar10)) {
                  iVar7 = uVar10 * 0x34 + *(int *)(*(int *)(iVar7 + 0x1bb114) + 0x20);
                  *(int *)(iVar12 + 0xf4) = iVar7;
                  puVar1 = (uint *)(iVar7 + 0x30);
                  *puVar1 = *puVar1 & 0xfffffeff;
                  pfVar8 = *(float **)(iVar12 + 0xf4);
                  *pfVar8 = local_b4;
                  pfVar8[1] = local_b0;
                  pfVar8[2] = local_ac;
                  fVar13 = FUN_0044fa90(&local_bc,0.0,6.2831855);
                  *(float *)(*(int *)(iVar12 + 0xf4) + 0x28) = (float)fVar13;
                  FUN_0040a660(*(void **)(iVar12 + 0xf4),0.3);
                  iVar7 = local_bc * 0x19660d + 0x3c6ef35f;
                  *(byte *)(*(int *)(iVar12 + 0xf4) + 0x30) = (byte)iVar7 & 0xf;
                  uVar10 = *(uint *)(*(int *)(iVar12 + 0xf4) + 0x30);
                  *(uint *)(*(int *)(iVar12 + 0xf4) + 0x30) =
                       uVar10 ^ ((iVar7 * 0x19660d + 0x3c6ef35fU & 0xff) << 9 ^ uVar10) & 0x200;
                }
                goto LAB_004547f9;
              }
            }
            if (*(int *)(iVar12 + 0xf4) != 0) {
              puVar1 = (uint *)(*(int *)(iVar12 + 0xf4) + 0x30);
              *puVar1 = *puVar1 | 0x100;
              *(undefined4 *)(iVar12 + 0xf4) = 0;
            }
          }
        }
LAB_004547f9:
        local_a0 = local_a0 + 1;
      } while (local_a0 < 0x40);
      iVar11 = iVar11 + 1;
      if (iVar11 < 0x50) {
        local_a0 = 0;
        local_a4 = iVar11;
        goto LAB_004543c0;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00454b10 @ 00454b10 ////

void __thiscall FUN_00454b10(void *this,float *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = FUN_00453f30(this,param_1);
  if (iVar1 != 0) {
    *(float *)(iVar1 + *(int *)((int)this + 0x1bb0d0) * 4) =
         param_2 + *(float *)(iVar1 + *(int *)((int)this + 0x1bb0d0) * 4);
  }
  return;
}


//// FUNCTION FUN_00454b40 @ 00454b40 ////

undefined4 * __thiscall FUN_00454b40(void *this,undefined4 *param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00453f30(this,param_2);
  if (iVar1 != 0) {
    FUN_00407070(param_1,*(float *)(iVar1 + (*(uint *)((int)this + 0x1bb0d0) ^ 1) * 4) + 0.5);
    return param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 0x1bb10c);
  return param_1;
}


//// FUNCTION FUN_00454b90 @ 00454b90 ////

void __thiscall FUN_00454b90(void *this,int *param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_c [12];
  
  piVar1 = param_1 + 0x34;
  if ((int *)param_1[0x35] != (int *)0x0) {
    *(int *)param_1[0x35] = *piVar1;
  }
  if (*piVar1 != 0) {
    *(int *)(*piVar1 + 4) = param_1[0x35];
  }
  *piVar1 = 0;
  param_1[0x35] = 0;
  pfVar2 = (float *)(**(code **)(*param_1 + 0x34))(local_c);
  iVar3 = FUN_00453f30(this,pfVar2);
  if (iVar3 != 0) {
    piVar4 = (int *)(iVar3 + 0x1c);
    param_1[0x35] = (int)piVar4;
    *piVar1 = *piVar4;
    *(int **)(*piVar4 + 4) = piVar1;
    *piVar4 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00454c00 @ 00454c00 ////

void __thiscall FUN_00454c00(void *this,int *param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_c [12];
  
  piVar1 = param_1 + 0x34;
  if ((int *)param_1[0x35] != (int *)0x0) {
    *(int *)param_1[0x35] = *piVar1;
  }
  if (*piVar1 != 0) {
    *(int *)(*piVar1 + 4) = param_1[0x35];
  }
  *piVar1 = 0;
  param_1[0x35] = 0;
  pfVar2 = (float *)(**(code **)(*param_1 + 0x34))(local_c);
  iVar3 = FUN_00453f30(this,pfVar2);
  if (iVar3 != 0) {
    piVar4 = (int *)(iVar3 + 0x50);
    param_1[0x35] = (int)piVar4;
    *piVar1 = *piVar4;
    *(int **)(*piVar4 + 4) = piVar1;
    *piVar4 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00454c70 @ 00454c70 ////

void __thiscall FUN_00454c70(void *this,int *param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_c [12];
  
  piVar1 = param_1 + 0x34;
  if ((int *)param_1[0x35] != (int *)0x0) {
    *(int *)param_1[0x35] = *piVar1;
  }
  if (*piVar1 != 0) {
    *(int *)(*piVar1 + 4) = param_1[0x35];
  }
  *piVar1 = 0;
  param_1[0x35] = 0;
  pfVar2 = (float *)(**(code **)(*param_1 + 0x34))(local_c);
  iVar3 = FUN_00453f30(this,pfVar2);
  if (iVar3 != 0) {
    piVar4 = (int *)(iVar3 + 0x84);
    param_1[0x35] = (int)piVar4;
    *piVar1 = *piVar4;
    *(int **)(*piVar4 + 4) = piVar1;
    *piVar4 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00454ce0 @ 00454ce0 ////

void __thiscall FUN_00454ce0(void *this,int *param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_c [12];
  
  piVar1 = param_1 + 0x34;
  if ((int *)param_1[0x35] != (int *)0x0) {
    *(int *)param_1[0x35] = *piVar1;
  }
  if (*piVar1 != 0) {
    *(int *)(*piVar1 + 4) = param_1[0x35];
  }
  *piVar1 = 0;
  param_1[0x35] = 0;
  pfVar2 = (float *)(**(code **)(*param_1 + 0x34))(local_c);
  iVar3 = FUN_00453f30(this,pfVar2);
  if (iVar3 != 0) {
    piVar4 = (int *)(iVar3 + 0xb8);
    param_1[0x35] = (int)piVar4;
    *piVar1 = *piVar4;
    *(int **)(*piVar4 + 4) = piVar1;
    *piVar4 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00454d50 @ 00454d50 ////

void * __thiscall FUN_00454d50(void *this,float *param_1,float param_2)

{
  int iVar1;
  void *this_00;
  float fVar2;
  float *pfVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  void *this_01;
  int iVar10;
  undefined4 uStack_30;
  float local_2c;
  float local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 auStack_c [3];
  
  pfVar3 = param_1;
  local_2c = *param_1 - param_2;
  local_28 = param_1[1] - param_2;
  piVar5 = (int *)FUN_00452080(&local_14,&local_2c);
  local_2c = param_2 + *param_1;
  iVar10 = *piVar5;
  iVar1 = piVar5[1];
  local_28 = param_2 + param_1[1];
  local_10 = iVar1;
  piVar5 = (int *)FUN_00452080(&local_1c,&local_2c);
  iVar8 = piVar5[1];
  this_01 = (void *)0x0;
  if (iVar10 <= *piVar5) {
    iVar9 = iVar10 << 6;
    param_1 = (float *)((*piVar5 - iVar10) + 1);
    local_20 = iVar1;
    local_18 = iVar8;
    do {
      iVar10 = local_20;
      if (local_20 <= iVar8) {
        do {
          if ((((-1 < iVar9) && (iVar9 < 0x1400)) && (-1 < local_20)) &&
             ((local_20 < 0x40 &&
              (iVar10 = (iVar9 + local_20) * 0xfc + 0x84 + (int)this, iVar10 != 0)))) {
            for (iVar1 = *(int *)(iVar10 + 0x10); iVar1 != iVar10 + 0x1c;
                iVar1 = *(int *)(iVar1 + 4)) {
              uVar6 = FUN_00598ee0(*(int *)(iVar1 + 8));
              if ((((char)uVar6 != '\0') &&
                  (cVar4 = (**(code **)(**(int **)(iVar1 + 8) + 0x13c))(), cVar4 != '\0')) &&
                 ((this_00 = *(void **)(iVar1 + 8), this_00 != (void *)0x0 &&
                  (pfVar7 = (float *)FUN_00598e50(this_00,auStack_c),
                  fVar2 = (*pfVar3 - *pfVar7) * (*pfVar3 - *pfVar7) +
                          (pfVar3[1] - pfVar7[1]) * (pfVar3[1] - pfVar7[1]) +
                          (pfVar3[2] - pfVar7[2]) * (pfVar3[2] - pfVar7[2]),
                  fVar2 < param_2 * param_2 != (fVar2 == param_2 * param_2))))) {
                if (this_01 != (void *)0x0) {
                  pfVar7 = (float *)FUN_00585ff0(this_00,&uStack_30);
                  fVar2 = *pfVar7;
                  pfVar7 = (float *)FUN_00585ff0(this_01,&local_2c);
                  if (fVar2 <= *pfVar7) goto LAB_00454eda;
                }
                this_01 = this_00;
              }
LAB_00454eda:
            }
          }
          local_20 = local_20 + 1;
          iVar8 = local_18;
          iVar10 = local_10;
        } while (local_20 <= local_18);
      }
      iVar9 = iVar9 + 0x40;
      param_1 = (float *)((int)param_1 + -1);
      local_20 = iVar10;
    } while (param_1 != (float *)0x0);
  }
  return this_01;
}


//// FUNCTION FUN_00454f30 @ 00454f30 ////

int __thiscall FUN_00454f30(void *this,float *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_34;
  float local_2c;
  float local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [12];
  
  pfVar3 = param_1;
  local_2c = *param_1 - param_2;
  local_28 = param_1[1] - param_2;
  local_34 = 0;
  piVar4 = (int *)FUN_00452080(&local_14,&local_2c);
  local_2c = param_2 + *param_1;
  iVar8 = *piVar4;
  iVar1 = piVar4[1];
  local_28 = param_2 + param_1[1];
  local_10 = iVar1;
  piVar4 = (int *)FUN_00452080(&local_1c,&local_2c);
  local_2c = param_2 * param_2;
  iVar6 = piVar4[1];
  if (iVar8 <= *piVar4) {
    iVar7 = iVar8 << 6;
    param_1 = (float *)((*piVar4 - iVar8) + 1);
    local_20 = iVar1;
    local_18 = iVar6;
    do {
      iVar8 = local_20;
      if (local_20 <= iVar6) {
        do {
          if ((((-1 < iVar7) && (iVar7 < 0x1400)) && (-1 < local_20)) &&
             ((local_20 < 0x40 && (iVar8 = (iVar7 + local_20) * 0xfc + 0x84 + (int)this, iVar8 != 0)
              ))) {
            for (iVar1 = *(int *)(iVar8 + 0x44); iVar1 != iVar8 + 0x50; iVar1 = *(int *)(iVar1 + 4))
            {
              piVar4 = *(int **)(iVar1 + 8);
              pfVar5 = (float *)(**(code **)(*piVar4 + 0x34))(local_c);
              fVar2 = (*pfVar3 - *pfVar5) * (*pfVar3 - *pfVar5) +
                      (pfVar3[1] - pfVar5[1]) * (pfVar3[1] - pfVar5[1]) +
                      (pfVar3[2] - pfVar5[2]) * (pfVar3[2] - pfVar5[2]);
              if ((fVar2 < local_2c != (fVar2 == local_2c)) && (piVar4[0xae] != 0)) {
                local_34 = local_34 + 1;
              }
            }
          }
          local_20 = local_20 + 1;
          iVar6 = local_18;
          iVar8 = local_10;
        } while (local_20 <= local_18);
      }
      iVar7 = iVar7 + 0x40;
      param_1 = (float *)((int)param_1 + -1);
      local_20 = iVar8;
    } while (param_1 != (float *)0x0);
  }
  return local_34;
}


//// FUNCTION FUN_004550c0 @ 004550c0 ////

int __thiscall FUN_004550c0(void *this,float *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  char cVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_34;
  float local_2c;
  float local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 auStack_c [12];
  
  pfVar3 = param_1;
  local_2c = *param_1 - param_2;
  local_28 = param_1[1] - param_2;
  local_34 = 0;
  piVar5 = (int *)FUN_00452080(&local_14,&local_2c);
  local_2c = param_2 + *param_1;
  iVar9 = *piVar5;
  iVar1 = piVar5[1];
  local_28 = param_2 + param_1[1];
  local_10 = iVar1;
  piVar5 = (int *)FUN_00452080(&local_1c,&local_2c);
  local_2c = param_2 * param_2;
  iVar7 = piVar5[1];
  if (iVar9 <= *piVar5) {
    iVar8 = iVar9 << 6;
    param_1 = (float *)((*piVar5 - iVar9) + 1);
    local_20 = iVar1;
    local_18 = iVar7;
    do {
      iVar9 = local_20;
      if (local_20 <= iVar7) {
        do {
          if ((((-1 < iVar8) && (iVar8 < 0x1400)) && (-1 < local_20)) &&
             ((local_20 < 0x40 && (iVar9 = (iVar8 + local_20) * 0xfc + 0x84 + (int)this, iVar9 != 0)
              ))) {
            for (iVar1 = *(int *)(iVar9 + 0x78); iVar1 != iVar9 + 0x84; iVar1 = *(int *)(iVar1 + 4))
            {
              piVar5 = *(int **)(iVar1 + 8);
              cVar4 = (**(code **)(*piVar5 + 0x164))();
              if (((cVar4 == '\0') &&
                  (pfVar6 = (float *)(**(code **)(*piVar5 + 0x34))(auStack_c),
                  fVar2 = (*pfVar3 - *pfVar6) * (*pfVar3 - *pfVar6) +
                          (pfVar3[1] - pfVar6[1]) * (pfVar3[1] - pfVar6[1]) +
                          (pfVar3[2] - pfVar6[2]) * (pfVar3[2] - pfVar6[2]),
                  fVar2 < local_2c != (fVar2 == local_2c))) && (piVar5[0xae] != 0)) {
                local_34 = local_34 + 1;
              }
            }
          }
          local_20 = local_20 + 1;
          iVar7 = local_18;
          iVar9 = local_10;
        } while (local_20 <= local_18);
      }
      iVar8 = iVar8 + 0x40;
      param_1 = (float *)((int)param_1 + -1);
      local_20 = iVar9;
    } while (param_1 != (float *)0x0);
  }
  return local_34;
}


//// FUNCTION FUN_00455270 @ 00455270 ////

int __thiscall FUN_00455270(void *this,float *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_34;
  float local_2c;
  float local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [12];
  
  pfVar3 = param_1;
  local_2c = *param_1 - param_2;
  local_28 = param_1[1] - param_2;
  local_34 = 0;
  piVar4 = (int *)FUN_00452080(&local_14,&local_2c);
  local_2c = param_2 + *param_1;
  iVar8 = *piVar4;
  iVar1 = piVar4[1];
  local_28 = param_2 + param_1[1];
  local_10 = iVar1;
  piVar4 = (int *)FUN_00452080(&local_1c,&local_2c);
  local_2c = param_2 * param_2;
  iVar6 = piVar4[1];
  if (iVar8 <= *piVar4) {
    iVar7 = iVar8 << 6;
    param_1 = (float *)((*piVar4 - iVar8) + 1);
    local_20 = iVar1;
    local_18 = iVar6;
    do {
      iVar8 = local_20;
      if (local_20 <= iVar6) {
        do {
          if ((((-1 < iVar7) && (iVar7 < 0x1400)) && (-1 < local_20)) &&
             ((local_20 < 0x40 && (iVar8 = (iVar7 + local_20) * 0xfc + 0x84 + (int)this, iVar8 != 0)
              ))) {
            for (iVar1 = *(int *)(iVar8 + 0xac); iVar1 != iVar8 + 0xb8; iVar1 = *(int *)(iVar1 + 4))
            {
              piVar4 = *(int **)(iVar1 + 8);
              pfVar5 = (float *)(**(code **)(*piVar4 + 0x34))(local_c);
              fVar2 = (*pfVar3 - *pfVar5) * (*pfVar3 - *pfVar5) +
                      (pfVar3[1] - pfVar5[1]) * (pfVar3[1] - pfVar5[1]) +
                      (pfVar3[2] - pfVar5[2]) * (pfVar3[2] - pfVar5[2]);
              if ((fVar2 < local_2c != (fVar2 == local_2c)) && (piVar4[0xae] != 0)) {
                local_34 = local_34 + 1;
              }
            }
          }
          local_20 = local_20 + 1;
          iVar6 = local_18;
          iVar8 = local_10;
        } while (local_20 <= local_18);
      }
      iVar7 = iVar7 + 0x40;
      param_1 = (float *)((int)param_1 + -1);
      local_20 = iVar8;
    } while (param_1 != (float *)0x0);
  }
  return local_34;
}


//// FUNCTION FUN_00455410 @ 00455410 ////

float10 FUN_00455410(float *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float local_8 [2];
  
  FUN_009840b0(local_8,param_1);
  cVar1 = FUN_0046d260(local_8,1);
  if (cVar1 != '\0') {
    return (float10)0.0;
  }
  if (DAT_0104c560 != &DAT_0104c56c) {
    fVar3 = (float10)0.0;
    puVar2 = DAT_0104c560;
    do {
      if (fVar3 != (float10)0.0) {
        return fVar3;
      }
      fVar3 = FUN_005354c0((int *)puVar2[2],param_1);
      puVar2 = (undefined4 *)puVar2[1];
    } while (puVar2 != &DAT_0104c56c);
    return fVar3;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_004554a0 @ 004554a0 ////

undefined4 FUN_004554a0(float *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  float10 fVar3;
  float local_8 [2];
  
  FUN_009840b0(local_8,param_1);
  cVar2 = FUN_0046d260(local_8,1);
  puVar1 = DAT_0104c560;
  if (cVar2 != '\0') {
    return 0;
  }
  while( true ) {
    if (puVar1 == &DAT_0104c56c) {
      return 0;
    }
    fVar3 = FUN_005354c0((int *)puVar1[2],param_1);
    if ((float10)0.0 < fVar3) break;
    puVar1 = (undefined4 *)puVar1[1];
  }
  return *(undefined4 *)(puVar1[2] + 0x11c);
}


//// FUNCTION FUN_00455520 @ 00455520 ////

void __thiscall FUN_00455520(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *this_00;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  void *local_58;
  int iStack_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float afStack_1c [4];
  float fStack_c;
  
  if (DAT_00e4ff50 != '\0') {
    local_48 = 0.0;
    local_44 = 0x40a00000;
    local_50 = 5.0;
    local_4c = 5.0;
    puVar6 = DAT_0104c560;
    local_58 = this;
    if (DAT_0104c560 != &DAT_0104c56c) {
      do {
        cVar3 = (**(code **)(*(int *)puVar6[2] + 0x118))();
        if (((cVar3 == '\0') && (this_00 = *(void **)(puVar6[2] + 0x11c), this_00 != (void *)0x0))
           && (iVar4 = FUN_0097e350(this_00,0), iVar4 != 0)) {
          iVar4 = FUN_0097e350(this_00,0);
          fStack_40 = *(float *)((int)this_00 + 0x3c);
          fStack_3c = *(float *)((int)this_00 + 0x40);
          pfVar7 = (float *)(iVar4 + 200);
          pfVar8 = afStack_1c;
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            *pfVar8 = *pfVar7;
            pfVar7 = pfVar7 + 1;
            pfVar8 = pfVar8 + 1;
          }
          fStack_34 = fStack_40 + afStack_1c[0];
          fStack_38 = *(float *)((int)this_00 + 0x44);
          fStack_30 = fStack_3c + afStack_1c[1];
          fStack_2c = fStack_38 + afStack_1c[2];
          fVar2 = fStack_c;
          if (fStack_c < afStack_1c[3]) {
            fVar2 = afStack_1c[3];
          }
          if (local_4c <= fStack_30 + fVar2) {
            local_4c = fStack_30 + fVar2;
          }
          if (fStack_34 - fVar2 <= local_48) {
            local_48 = fStack_34 - fVar2;
          }
          this = local_58;
          fStack_28 = fStack_34;
          fStack_24 = fStack_30;
          fStack_20 = fStack_2c;
          if (local_50 <= fVar2 + fStack_34) {
            local_50 = fVar2 + fStack_34;
          }
        }
        puVar1 = puVar6 + 1;
        puVar6 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != &DAT_0104c56c);
    }
    FUN_00452080((int *)&local_58,&local_48);
    FUN_00452080((int *)&local_48,&local_50);
    *(float *)((int)this + 0x1bb124) = (float)iStack_54;
    *(float *)((int)this + 0x1bb11c) = (float)local_44;
    *(float *)((int)this + 0x1bb118) = (float)(int)local_58;
    *(float *)((int)this + 0x1bb120) = (float)(int)local_48;
    DAT_00e4ff50 = '\0';
  }
  *param_1 = *(undefined4 *)((int)this + 0x1bb118);
  param_1[1] = *(undefined4 *)((int)this + 0x1bb11c);
  *param_1 = *(undefined4 *)((int)this + 0x1bb118);
  param_1[1] = *(undefined4 *)((int)this + 0x1bb11c);
  param_1[2] = *(undefined4 *)((int)this + 0x1bb120);
  param_1[3] = *(undefined4 *)((int)this + 0x1bb124);
  param_1[2] = *(undefined4 *)((int)this + 0x1bb120);
  param_1[3] = *(undefined4 *)((int)this + 0x1bb124);
  return;
}


//// FUNCTION FUN_00455740 @ 00455740 ////

undefined4 __thiscall FUN_00455740(void *this,undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined3 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  char local_71;
  int local_70;
  int local_6c;
  float local_64;
  int local_58;
  int local_54;
  int local_50;
  undefined8 local_4c;
  float local_44 [2];
  float local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_71 = '\0';
  FUN_009840b0(&local_4c,param_1);
  uVar11 = WorldToOccupancyGridCoord((float *)&local_4c);
  local_58 = (int)((ulonglong)uVar11 >> 0x20);
  FUN_00455520(this,local_3c);
  uVar12 = FUN_00acd42c();
  uVar13 = FUN_00acd42c();
  local_4c = CONCAT44((float)((int)uVar13 * 4 + -0x18),(float)((int)uVar12 * 4 + -0xa0));
  uVar14 = WorldToOccupancyGridCoord((float *)&local_4c);
  uVar12 = FUN_00acd42c();
  uVar13 = FUN_00acd42c();
  local_4c = CONCAT44((float)((int)uVar13 * 4 + -0x18),(float)((int)uVar12 * 4 + -0xa0));
  local_4c = WorldToOccupancyGridCoord((float *)&local_4c);
  local_64 = -3.4028235e+38;
  iVar7 = 0;
  local_6c = 1;
  local_70 = 1;
  iVar8 = 1;
  do {
    iVar9 = (int)((ulonglong)uVar11 >> 0x20);
    uVar10 = (uint)uVar11;
    local_54 = (int)uVar14;
    if ((((local_54 <= (int)uVar10) && ((int)uVar10 <= (int)(float)local_4c)) &&
        (local_50 = (int)((ulonglong)uVar14 >> 0x20), local_50 <= iVar9)) &&
       (iVar9 <= local_4c._4_4_)) {
      FUN_009e2490(uVar10,iVar9,&local_20);
      fVar2 = local_18;
      fVar1 = local_14 + local_1c;
      iVar9 = local_58;
      if ((0.15 < local_18) || ((0.15 < fVar1 && (fVar1 < 0.85)))) {
        puVar4 = (undefined4 *)FUN_0046cf10(local_3c,uVar10,local_58);
        local_2c = *puVar4;
        local_28 = puVar4[1];
        local_24 = 0;
        uVar5 = FUN_00450840(uVar10,local_58);
        if ((char)uVar5 == '\0') {
          FUN_009840b0(local_44,&local_2c);
          cVar3 = FUN_0046d260(local_44,0x3d);
          if (cVar3 != '\0') {
            fVar1 = (fVar2 + fVar2) - fVar1;
            if (local_64 < fVar1) {
              *param_2 = local_2c;
              param_2[1] = local_28;
              param_2[2] = local_24;
              local_64 = fVar1;
            }
            local_71 = '\x01';
          }
        }
      }
    }
    local_58 = iVar9 + iVar7;
    uVar11 = CONCAT44(local_58,uVar10 + iVar8);
    uVar6 = (undefined3)((uint)local_58 >> 8);
    if (local_70 < 1) {
      if (iVar8 == 0) {
        iVar9 = -iVar7;
        iVar7 = 0;
        local_70 = local_6c + 1;
        local_6c = local_70;
        if (local_71 != '\0') {
          return CONCAT31(uVar6,local_71);
        }
      }
      else {
        iVar9 = 0;
        local_70 = local_6c;
        iVar7 = iVar8;
      }
    }
    else {
      local_70 = local_70 + -1;
      iVar9 = iVar8;
    }
    iVar8 = iVar9;
  } while (local_6c < 0x20);
  return CONCAT31(uVar6,local_71);
}


//// FUNCTION FUN_00455a70 @ 00455a70 ////

void __fastcall FUN_00455a70(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d1a7e8;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00455ac0 @ 00455ac0 ////

void __fastcall FUN_00455ac0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1a7e8;
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


//// FUNCTION FUN_00455b70 @ 00455b70 ////

void __fastcall FUN_00455b70(int param_1)

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


//// FUNCTION FUN_00455bd0 @ 00455bd0 ////

void __fastcall FUN_00455bd0(int param_1)

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


//// FUNCTION FUN_00455ce0 @ 00455ce0 ////

void * FUN_00455ce0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00455d10 @ 00455d10 ////

void * FUN_00455d10(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00455d40 @ 00455d40 ////

void * FUN_00455d40(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00455d70 @ 00455d70 ////

void * FUN_00455d70(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00455ea0 @ 00455ea0 ////

void __cdecl FUN_00455ea0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00455f10 @ 00455f10 ////

void __cdecl FUN_00455f10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00455f40 @ 00455f40 ////

void __cdecl FUN_00455f40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00455f70 @ 00455f70 ////

void __thiscall FUN_00455f70(void *this,int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float local_dc;
  float local_d0;
  float local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 local_8e;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7a;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_66;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2a;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 local_14 [4];
  undefined4 local_10 [2];
  int local_8;
  undefined4 local_4;
  
  local_b8 = -NAN;
  local_b4 = -NAN;
  FUN_00455520(this,&local_24);
  local_98 = 0;
  do {
    local_dc = (float)(local_98 * 0xfc + 0x84 + (int)this);
    local_3c = (float)(local_98 * 4 + -0x18);
    local_c0 = 0.0;
    local_bc = 0.0;
    local_9c = 0;
    local_94 = 0;
    local_a0 = -0xa0;
    iVar7 = local_98;
    do {
      iVar6 = local_a0;
      local_ac = (float)local_a0;
      local_50 = local_3c;
      local_a8 = local_3c;
      local_a4 = 0;
      local_54 = local_ac;
      local_40 = local_ac;
      uVar2 = FUN_009a20f0(&DAT_0105c2e8,&local_ac,8.0);
      if ((char)uVar2 == '\0') {
        local_c0 = 0.0;
        local_bc = 0.0;
      }
      else {
        if (((float)local_9c < local_24) || (local_1c < (float)local_9c)) {
          local_c8 = 0.0;
          local_b8 = 0.0;
          local_d0 = local_c8;
        }
        else {
          if (((float)local_98 < local_18) || (local_20 < (float)local_98)) {
            local_b8 = 0.0;
          }
          else {
            if ((((iVar6 < -0xa0) || (0x9f < iVar6)) || (iVar7 < 0)) ||
               (fVar3 = local_dc, 0x3f < iVar7)) {
              fVar3 = 0.0;
            }
            pfVar4 = (float *)FUN_00452180(this,local_10,fVar3);
            local_b8 = *pfVar4;
          }
          local_8 = iVar7 + 1;
          if (((float)local_8 < local_18) || (local_20 < (float)local_8)) {
            local_d0 = 0.0;
          }
          else if (((iVar6 < -0xa0) || (0x9f < iVar6)) || ((local_8 < 0 || (0x3f < local_8)))) {
            pfVar4 = (float *)FUN_00452180(this,&local_4,0.0);
            local_d0 = *pfVar4;
          }
          else {
            pfVar4 = (float *)FUN_00452180(this,&local_4,
                                           (float)((local_8 + local_94) * 0xfc + 0x84 + (int)this));
            local_d0 = *pfVar4;
          }
        }
        local_b4 = local_d0;
        if ((((local_c0._3_1_ != '\0') || (local_bc._3_1_ != '\0')) ||
            ((char)((uint)local_b8 >> 0x18) != '\0')) || ((char)((uint)local_d0 >> 0x18) != '\0')) {
          pfVar4 = (float *)param_1[10];
          pfVar5 = (float *)FUN_00452360(local_14,(int)&local_c0,4);
          pfVar4[3] = *pfVar5;
          local_88 = local_ac - 2.0;
          local_80 = 0;
          *pfVar4 = local_88;
          local_84 = local_a8 + 2.0;
          local_6c = 0;
          local_58 = 0;
          pfVar4[1] = local_84;
          pfVar4[2] = 0.0;
          pfVar4[9] = local_c0;
          local_74 = local_ac - 4.0;
          local_70 = local_a8;
          pfVar4[6] = local_74;
          pfVar4[7] = local_a8;
          pfVar4[8] = 0.0;
          pfVar4[0xf] = local_bc;
          local_60 = local_ac - 4.0;
          pfVar4[0xc] = local_60;
          local_5c = local_a8 + 4.0;
          local_44 = 0;
          local_30 = 0;
          pfVar4[0xd] = local_5c;
          pfVar4[0xe] = 0.0;
          pfVar4[0x15] = local_d0;
          local_48 = local_a8 + 4.0;
          local_4c = local_ac;
          pfVar4[0x12] = local_ac;
          pfVar4[0x13] = local_48;
          pfVar4[0x14] = 0.0;
          pfVar4[0x1b] = local_b8;
          local_38 = local_ac;
          local_34 = local_a8;
          pfVar4[0x18] = local_ac;
          pfVar4[0x19] = local_a8;
          pfVar4[0x1a] = 0.0;
          puVar1 = (undefined4 *)param_1[0xb];
          local_7a = 0x30000;
          *puVar1 = 0x30000;
          *(undefined2 *)(puVar1 + 1) = 2;
          local_8e = 0x20000;
          *(undefined4 *)((int)puVar1 + 6) = 0x20000;
          *(undefined2 *)((int)puVar1 + 10) = 1;
          local_2a = 0x10000;
          puVar1[3] = 0x10000;
          *(undefined2 *)(puVar1 + 4) = 4;
          local_66 = 0x40000;
          *(undefined4 *)((int)puVar1 + 0x12) = 0x40000;
          *(undefined2 *)((int)puVar1 + 0x16) = 3;
          FUN_009e6680(param_1);
          iVar6 = local_a0;
        }
        local_c0 = local_b8;
        iVar7 = local_98;
        local_bc = local_d0;
      }
      local_9c = local_9c + 1;
      local_a0 = iVar6 + 4;
      local_94 = local_94 + 0x40;
      local_dc = (float)((int)local_dc + 0x3f00);
    } while (local_a0 < 0xa0);
    local_98 = iVar7 + 1;
  } while (local_98 < 0x40);
  return;
}


//// FUNCTION FUN_00456490 @ 00456490 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00456490(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  float local_88;
  int local_80;
  float *local_7c;
  int local_6c;
  float local_68;
  undefined8 local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30 [2];
  int local_28 [2];
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_c;
  
  local_3c = *(undefined4 *)(DAT_00f890c0 + 0x450);
  local_40 = *(float *)(DAT_00f890c0 + 0x44c);
  lVar10 = WorldToOccupancyGridCoord(&local_40);
  fVar8 = (float)((ulonglong)lVar10 >> 0x20);
  fVar9 = (float)lVar10;
  local_4c = *(float *)(DAT_00f890c0 + 0x458);
  local_50 = *(float *)(DAT_00f890c0 + 0x454);
  local_48 = fVar9;
  lVar11 = WorldToOccupancyGridCoord(&local_50);
  iVar7 = (int)((ulonglong)lVar11 >> 0x20);
  if ((int)fVar9 < 1) {
    local_48 = 1.4013e-45;
    fVar9 = 1.4013e-45;
  }
  if (lVar10 < 0x100000000) {
    fVar8 = 1.4013e-45;
  }
  local_60 = lVar11;
  if (0xff < (int)lVar11) {
    local_60 = CONCAT44(iVar7,0xff);
  }
  if (0xffffffffff < lVar11) {
    local_60 = CONCAT44(0xff,(int)local_60);
    iVar7 = 0xff;
  }
  if ((int)fVar8 < iVar7) {
    local_6c = 0x100 - (int)fVar8;
    do {
      if ((int)fVar9 < (int)local_60) {
        iVar7 = (int)fVar9 * 0x100 + -0x100;
        iVar3 = (int)fVar9 * 0x100 + (int)fVar8;
        local_80 = iVar3 + -0x100;
        local_7c = (float *)(param_1 + 0x13b084 + iVar3 * 8);
        do {
          pfVar4 = (float *)FUN_0046cf10(local_30,(int)fVar9,(int)fVar8);
          local_34 = pfVar4[1];
          local_38 = *pfVar4;
          piVar5 = (int *)FUN_00452080(local_28,&local_38);
          iVar3 = piVar5[1];
          iVar6 = *piVar5;
          if ((((iVar6 < 0) || (0x4f < iVar6)) || (iVar3 < 0)) ||
             ((0x3f < iVar3 || (iVar3 = (iVar6 * 0x40 + iVar3) * 0xfc + 0x84 + param_1, iVar3 == 0))
             )) {
            local_68 = *(float *)(param_1 + 0x1bb10c);
          }
          else {
            local_68 = *(float *)(iVar3 + (*(uint *)(param_1 + 0x1bb0d0) ^ 1) * 4) + 0.5;
            if (0.0 <= local_68) {
              if (1.0 < local_68) {
                local_68 = 1.0;
              }
            }
            else {
              local_68 = 0.0;
            }
          }
          FUN_00450d70(fVar9,fVar8,local_68);
          if (0.0 < *local_7c) {
            local_88 = *local_7c - *(float *)(param_1 + 0x80);
            if (local_88 <= 0.0) {
              local_88 = 0.0;
            }
            FUN_009e2490((int)fVar9,(int)fVar8,&local_20);
            fVar2 = local_18;
            fVar1 = local_14 + local_1c;
            if (local_c < 0.5) {
              if (_DAT_00e4ff0c < local_88) {
                do {
                  if (((((-0x101 < iVar7) && (iVar7 < 0xff00)) &&
                       ((-1 < (int)fVar8 &&
                        (((int)fVar8 < 0x100 &&
                         (iVar6 = local_80 + 0x100, iVar3 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3
                         , (*(byte *)(iVar3 + g_OccupancyGrid256_A) &
                           (byte)(1 << ((char)iVar6 + (char)iVar3 * -8 & 0x1fU))) != 0)))))) ||
                      (((iVar3 = (int)fVar9 + -1, -1 < iVar3 &&
                        ((((iVar3 < 0x100 && (-1 < (int)fVar8)) && ((int)fVar8 < 0x100)) &&
                         (iVar6 = (int)(local_80 + (local_80 >> 0x1f & 7U)) >> 3,
                         (*(byte *)(iVar6 + g_OccupancyGrid256_A) &
                         (byte)(1 << ((char)local_80 + (char)iVar6 * -8 & 0x1fU))) != 0)))) ||
                       (((-1 < iVar3 && (iVar3 < 0x100)) &&
                        ((iVar3 = (int)fVar8 + -1, -1 < iVar3 &&
                         ((iVar3 < 0x100 &&
                          (iVar3 = iVar7 + iVar3, iVar6 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3,
                          (*(byte *)(iVar6 + g_OccupancyGrid256_A) &
                          (byte)(1 << ((char)iVar3 + (char)iVar6 * -8 & 0x1fU))) != 0)))))))))) ||
                     (((-0x101 < iVar7 &&
                       ((((iVar7 < 0xff00 && (iVar3 = (int)fVar8 + -1, -1 < iVar3)) &&
                         (iVar3 < 0x100)) &&
                        (iVar3 = local_6c + local_80 + iVar3,
                        iVar6 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3,
                        (*(byte *)(iVar6 + g_OccupancyGrid256_A) &
                        (byte)(1 << ((char)iVar3 + (char)iVar6 * -8 & 0x1fU))) != 0)))) ||
                      ((fVar1 == 0.0 && (fVar2 == 0.0)))))) goto LAB_00456935;
                  local_88 = local_88 - _DAT_00e4ff0c;
                  if ((fVar1 <= 0.0) || (1.0 <= fVar2)) {
                    uVar12 = 4;
                  }
                  else {
                    uVar12 = 2;
                  }
                  local_50 = fVar9;
                  local_4c = fVar8;
                  FUN_009e4760(uVar12,(int *)&local_50);
                } while (_DAT_00e4ff0c < local_88);
                *local_7c = local_88;
                goto LAB_0045694b;
              }
            }
            else {
              if (_DAT_00e4ff14 < local_c) {
                if (local_88 <= _DAT_00e4ff10) goto LAB_0045693d;
                local_58 = fVar9;
                local_54 = fVar8;
                FUN_009e4760(4,(int *)&local_58);
                if (0.15 < fVar2 + fVar1) {
                  FUN_009e4760(5,(int *)&local_58);
                  *local_7c = 0.0;
                  goto LAB_0045694b;
                }
              }
LAB_00456935:
              local_88 = 0.0;
            }
LAB_0045693d:
            *local_7c = local_88;
          }
LAB_0045694b:
          fVar9 = (float)((int)fVar9 + 1);
          local_80 = local_80 + 0x100;
          local_7c = local_7c + 0x200;
          iVar7 = iVar7 + 0x100;
        } while ((int)fVar9 < (int)local_60);
        iVar7 = local_60._4_4_;
        fVar9 = local_48;
      }
      fVar8 = (float)((int)fVar8 + 1);
      local_6c = local_6c + -1;
    } while ((int)fVar8 < iVar7);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}


//// FUNCTION FUN_004569b0 @ 004569b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004569b0(void *param_1,undefined4 param_2)

{
  uint *puVar1;
  void *this;
  undefined2 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  size_t sVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  float10 fVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined4 *local_140;
  undefined4 local_13c;
  undefined2 *puStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined2 auStack_12c [10];
  undefined2 *puStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined2 auStack_10c [10];
  undefined2 *puStack_f8;
  undefined4 uStack_f4;
  uint uStack_d8;
  float afStack_d4 [3];
  undefined2 *puStack_c8;
  undefined4 uStack_c4;
  uint uStack_a8;
  float afStack_a4 [3];
  wchar_t awStack_98 [66];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ca1804;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  uVar10 = FUN_00990ae0(param_1,param_2);
  iVar6 = *(int *)((int)param_1 + 0x1bb0e8);
  *(int *)((int)param_1 + 0x1bb0e8) = (int)uVar10;
  puVar8 = (undefined4 *)((int)uVar10 - iVar6);
  if (*(float *)((int)param_1 + 0x1bb0e4) < 1.0) {
    fVar12 = (float)(int)puVar8;
    if ((int)puVar8 < 0) {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    fVar12 = fVar12 * 0.001 * 0.5 + *(float *)((int)param_1 + 0x1bb0e4);
    *(float *)((int)param_1 + 0x1bb0e4) = fVar12;
    local_140 = puVar8;
    if (1.0 < fVar12) {
      *(undefined4 *)((int)param_1 + 0x1bb0e4) = 0x3f800000;
    }
  }
  if (9 < *(int *)((int)param_1 + 0x6c)) {
    FUN_0078c9a0((int *)((int)param_1 + 0x70),'\x01');
  }
  if (*(char *)((int)param_1 + 0x1bb108) != '\0') {
    if (*(int *)((int)param_1 + 0x1bb084) == 0) {
      puVar8 = FUN_00452010();
      *(undefined4 **)((int)param_1 + 0x1bb084) = puVar8;
      FUN_009e6720(puVar8,5,4);
      iVar6 = *(int *)(*(int *)((int)param_1 + 0x1bb084) + 0x28);
      *(undefined4 *)(iVar6 + 0x10) = 0x3f000000;
      *(undefined4 *)(iVar6 + 0x14) = 0x3f000000;
      iVar6 = *(int *)(*(int *)((int)param_1 + 0x1bb084) + 0x28);
      *(undefined4 *)(iVar6 + 0x28) = 0;
      *(undefined4 *)(iVar6 + 0x2c) = 0;
      iVar6 = *(int *)(*(int *)((int)param_1 + 0x1bb084) + 0x28);
      *(undefined4 *)(iVar6 + 0x40) = 0;
      *(undefined4 *)(iVar6 + 0x44) = 0x3f800000;
      iVar6 = *(int *)(*(int *)((int)param_1 + 0x1bb084) + 0x28);
      *(undefined4 *)(iVar6 + 0x58) = 0x3f800000;
      *(undefined4 *)(iVar6 + 0x5c) = 0x3f800000;
      iVar6 = *(int *)(*(int *)((int)param_1 + 0x1bb084) + 0x28);
      local_140 = (undefined4 *)0x3f800000;
      *(undefined4 *)(iVar6 + 0x70) = 0x3f800000;
      local_13c = 0;
      *(undefined4 *)(iVar6 + 0x74) = 0;
      local_140 = operator_new(0x24);
      local_c = 0;
      if (local_140 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_009910f0(local_140);
      }
      *(undefined4 *)(*(int *)((int)param_1 + 0x1bb084) + 0x40) = uVar3;
      *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x1bb084) + 0x40) + 0xc) = 6;
      puVar1 = (uint *)(*(int *)(*(int *)((int)param_1 + 0x1bb084) + 0x40) + 0x10);
      *puVar1 = *puVar1 & 0xbfffffff;
      puVar1 = (uint *)(*(int *)(*(int *)((int)param_1 + 0x1bb084) + 0x40) + 0x10);
      *puVar1 = *puVar1 | 0x80000000;
      puVar1 = (uint *)(*(int *)(*(int *)((int)param_1 + 0x1bb084) + 0x40) + 0x14);
      *puVar1 = *puVar1 & 0xfffffffe;
      iVar6 = *(int *)(*(int *)((int)param_1 + 0x1bb084) + 0x40);
      local_c = 0xffffffff;
      *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) & 0xfeffffff;
      pvVar4 = FUN_0099bb50("ui/groundstripe.dds",0,0,0,'\0');
      this = *(void **)(*(int *)((int)param_1 + 0x1bb084) + 0x40);
      if (*(void **)((int)this + 0x18) != pvVar4) {
        Engine_SetResourceReference(this,(int)pvVar4);
      }
      if (pvVar4 != (void *)0x0) {
        FUN_0099b400(pvVar4);
      }
    }
    if ((*(byte *)(*(int *)((*(int **)((int)param_1 + 0x1bb084))[0x10] + 0x18) + 0x54) & 8) != 0) {
      FUN_00455f70(param_1,*(int **)((int)param_1 + 0x1bb084));
    }
  }
  (**(code **)(**(int **)((int)param_1 + 0x1bb114) + 8))();
  if (_DAT_00f886fc != 0.0) {
    FUN_00538ef0(afStack_d4,(float *)&DAT_0104cce0,0.0);
    FUN_009840b0(&local_140,afStack_d4);
    uVar11 = WorldToOccupancyGridCoord((float *)&local_140);
    puStack_138 = auStack_12c;
    auStack_12c[0] = 0;
    uStack_134 = 0;
    uStack_130 = 10;
    local_c = 1;
    sVar5 = FUN_00ace02d(L"sand     ");
    FUN_0040cae0(&puStack_138,L"sand     ",sVar5);
    fVar12 = (float)uVar11;
    fVar13 = (float)((ulonglong)uVar11 >> 0x20);
    fVar9 = FUN_009e23b0(fVar12,fVar13,0);
    sVar5 = _swprintf(awStack_98,0xd18f84,SUB84((double)fVar9,0),
                      (int)((ulonglong)(double)fVar9 >> 0x20));
    FUN_0040cae0(&puStack_138,awStack_98,sVar5);
    sVar5 = FUN_00ace02d((short *)&DAT_00d1966c);
    FUN_0040cae0(&puStack_138,L"\n",sVar5);
    sVar5 = FUN_00ace02d(L"grass    ");
    FUN_0040cae0(&puStack_138,L"grass    ",sVar5);
    fVar9 = FUN_009e23b0(fVar12,fVar13,1);
    sVar5 = _swprintf(awStack_98,0xd18f84,SUB84((double)fVar9,0),
                      (int)((ulonglong)(double)fVar9 >> 0x20));
    FUN_0040cae0(&puStack_138,awStack_98,sVar5);
    sVar5 = FUN_00ace02d((short *)&DAT_00d1966c);
    FUN_0040cae0(&puStack_138,L"\n",sVar5);
    sVar5 = FUN_00ace02d(L"scorched ");
    FUN_0040cae0(&puStack_138,L"scorched ",sVar5);
    fVar9 = FUN_009e23b0(fVar12,fVar13,2);
    sVar5 = _swprintf(awStack_98,0xd18f84,SUB84((double)fVar9,0),
                      (int)((ulonglong)(double)fVar9 >> 0x20));
    FUN_0040cae0(&puStack_138,awStack_98,sVar5);
    sVar5 = FUN_00ace02d((short *)&DAT_00d1966c);
    FUN_0040cae0(&puStack_138,L"\n",sVar5);
    sVar5 = FUN_00ace02d(L"grass2   ");
    FUN_0040cae0(&puStack_138,L"grass2   ",sVar5);
    fVar9 = FUN_009e23b0(fVar12,fVar13,3);
    sVar5 = _swprintf(awStack_98,0xd18f84,SUB84((double)fVar9,0),
                      (int)((ulonglong)(double)fVar9 >> 0x20));
    FUN_0040cae0(&puStack_138,awStack_98,sVar5);
    sVar5 = FUN_00ace02d((short *)&DAT_00d1966c);
    FUN_0040cae0(&puStack_138,L"\n",sVar5);
    sVar5 = FUN_00ace02d(L"rock     ");
    FUN_0040cae0(&puStack_138,L"rock     ",sVar5);
    fVar9 = FUN_009e23b0(fVar12,fVar13,4);
    sVar5 = _swprintf(awStack_98,0xd18f84,SUB84((double)fVar9,0),
                      (int)((ulonglong)(double)fVar9 >> 0x20));
    FUN_0040cae0(&puStack_138,awStack_98,sVar5);
    sVar5 = FUN_00ace02d((short *)&DAT_00d1966c);
    FUN_0040cae0(&puStack_138,L"\n",sVar5);
    sVar5 = FUN_00ace02d(L"concrete ");
    FUN_0040cae0(&puStack_138,L"concrete ",sVar5);
    fVar9 = FUN_009e23b0(fVar12,fVar13,5);
    sVar5 = _swprintf(awStack_98,0xd18f84,SUB84((double)fVar9,0),
                      (int)((ulonglong)(double)fVar9 >> 0x20));
    FUN_0040cae0(&puStack_138,awStack_98,sVar5);
    sVar5 = FUN_00ace02d((short *)&DAT_00d1966c);
    FUN_0040cae0(&puStack_138,L"\n",sVar5);
    puVar2 = puStack_138;
    uStack_c4 = 0xffffffff;
    FUN_009a8100(&puStack_c8);
    puStack_c8 = puVar2;
    uStack_a8 = uStack_a8 | 1;
    FUN_009a8d90(&puStack_c8);
    local_c = 0xffffffff;
    if (10 < uStack_130) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_138);
    }
  }
  if (_DAT_00f88700 != 0.0) {
    FUN_00538ef0(afStack_a4,(float *)&DAT_0104cce0,0.0);
    puStack_118 = auStack_10c;
    auStack_10c[0] = 0;
    uStack_114 = 0;
    uStack_110 = 10;
    local_c = 2;
    iVar6 = FUN_00453f30(param_1,afStack_a4);
    if (iVar6 == 0) {
      fVar12 = *(float *)((int)param_1 + 0x1bb10c);
    }
    else {
      fVar12 = *(float *)(iVar6 + (*(uint *)((int)param_1 + 0x1bb0d0) ^ 1) * 4) + 0.5;
      if (0.0 <= fVar12) {
        if (1.0 < fVar12) {
          fVar12 = 1.0;
        }
      }
      else {
        fVar12 = 0.0;
      }
    }
    sVar5 = _swprintf(awStack_98,0xd18f84,SUB84((double)fVar12,0),
                      (int)((ulonglong)(double)fVar12 >> 0x20));
    FUN_0040cae0(&puStack_118,awStack_98,sVar5);
    piVar7 = (int *)FUN_00ace790(DAT_00f885f4,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                                 &TM::TMFixedAsset::RTTI_Type_Descriptor,0);
    if (piVar7 != (int *)0x0) {
      puVar8 = (undefined4 *)FUN_00528450((int)piVar7);
      puVar8 = FUN_00568790(&puStack_138,puVar8);
      sVar5 = FUN_00ace02d((short *)&DAT_00d1966c);
      FUN_0040cae0(&puStack_118,L"\n",sVar5);
      FUN_0040cae0(&puStack_118,(wchar_t *)*puVar8,puVar8[1]);
      if (10 < uStack_130) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_138);
      }
      sVar5 = FUN_00ace02d(L"\nniceness: ");
      FUN_0040cae0(&puStack_118,L"\nniceness: ",sVar5);
      fVar9 = FUN_00528480((int)piVar7);
      FUN_0043bd80(&puStack_118,(float)fVar9);
      sVar5 = FUN_00ace02d(L"\nenviroimpact: ");
      FUN_0040cae0(&puStack_118,L"\nenviroimpact: ",sVar5);
      fVar9 = (float10)(**(code **)(*piVar7 + 0x15c))();
      FUN_0043bd80(&puStack_118,(float)fVar9);
    }
    puVar2 = puStack_118;
    uStack_f4 = 0xffffffff;
    FUN_009a8100(&puStack_f8);
    local_140 = (undefined4 *)0xffff00ff;
    uStack_d8 = uStack_d8 | 1;
    puStack_f8 = puVar2;
    uStack_f4 = 0xffff00ff;
    FUN_009a8d90(&puStack_f8);
    if (10 < uStack_110) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_118);
    }
  }
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_004571e0 @ 004571e0 ////

void __fastcall FUN_004571e0(int param_1)

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


//// FUNCTION FUN_00457210 @ 00457210 ////

void __fastcall FUN_00457210(int param_1)

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


//// FUNCTION FUN_00457240 @ 00457240 ////

undefined4 * FUN_00457240(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00457270 @ 00457270 ////

undefined4 * FUN_00457270(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004572a0 @ 004572a0 ////

void __fastcall FUN_004572a0(int param_1)

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


//// FUNCTION FUN_004572d0 @ 004572d0 ////

undefined4 * FUN_004572d0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00457300 @ 00457300 ////

void __fastcall FUN_00457300(int param_1)

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


//// FUNCTION FUN_00457330 @ 00457330 ////

undefined4 * FUN_00457330(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004574e0 @ 004574e0 ////

void __fastcall FUN_004574e0(int param_1)

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


//// FUNCTION FUN_00457510 @ 00457510 ////

void __fastcall FUN_00457510(int param_1)

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


//// FUNCTION FUN_00457540 @ 00457540 ////

undefined4 * FUN_00457540(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00455ea0(param_1,param_2,param_3);
  return param_1 + param_2 * 2;
}


//// FUNCTION FUN_00457600 @ 00457600 ////

void __fastcall FUN_00457600(int param_1)

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


//// FUNCTION FUN_00457660 @ 00457660 ////

void __fastcall FUN_00457660(int param_1)

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


//// FUNCTION FUN_00457690 @ 00457690 ////

void __fastcall FUN_00457690(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1a8bc;
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


//// FUNCTION FUN_004576e0 @ 004576e0 ////

void __fastcall FUN_004576e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1a8c8;
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


//// FUNCTION FUN_00457730 @ 00457730 ////

void __fastcall FUN_00457730(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1a8d4;
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


//// FUNCTION FUN_00457780 @ 00457780 ////

undefined4 * __thiscall FUN_00457780(void *this,byte param_1)

{
  FUN_00457690(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004577a0 @ 004577a0 ////

undefined4 * __thiscall FUN_004577a0(void *this,byte param_1)

{
  FUN_004576e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004577c0 @ 004577c0 ////

undefined4 * __thiscall FUN_004577c0(void *this,byte param_1)

{
  FUN_00457730(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004577e0 @ 004577e0 ////

void FUN_004577e0(void)

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
  puStack_8 = &LAB_00ca1818;
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


//// FUNCTION FUN_00457850 @ 00457850 ////

void FUN_00457850(void)

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
  puStack_8 = &LAB_00ca1838;
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


//// FUNCTION FUN_004578c0 @ 004578c0 ////

void __thiscall FUN_004578c0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_004577e0();
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
      _Dst = FUN_00457240((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00455ce0(param_1,iVar5,param_1 + param_2);
      FUN_00457240(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_004518f0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00455ce0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00453850(param_1,(int)pvVar3,iVar5);
    FUN_004518f0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00457aa0 @ 00457aa0 ////

void __thiscall FUN_00457aa0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00457850();
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
      _Dst = FUN_00457270((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00455d10(param_1,iVar5,param_1 + param_2);
      FUN_00457270(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00451910(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00455d10(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00453880(param_1,(int)pvVar3,iVar5);
    FUN_00451910(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00457c80 @ 00457c80 ////

void FUN_00457c80(void)

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
  puStack_8 = &LAB_00ca1858;
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


//// FUNCTION FUN_00457cf0 @ 00457cf0 ////

void FUN_00457cf0(void)

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
  puStack_8 = &LAB_00ca1878;
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


//// FUNCTION FUN_00457d60 @ 00457d60 ////

void FUN_00457d60(void)

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
  puStack_8 = &LAB_00ca1898;
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


//// FUNCTION FUN_00457dd0 @ 00457dd0 ////

void __fastcall FUN_00457dd0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1a8e0;
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


//// FUNCTION FUN_00457e20 @ 00457e20 ////

undefined4 * __thiscall FUN_00457e20(void *this,byte param_1)

{
  FUN_00457dd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00457e40 @ 00457e40 ////

void __fastcall FUN_00457e40(int param_1)

{
  *(undefined ***)(param_1 + 0xd8) = &PTR_LAB_00d1a7d8;
  if (*(undefined4 **)(param_1 + 0xe0) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xdc);
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xdc) + 4) = *(undefined4 *)(param_1 + 0xe0);
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  if (*(undefined4 **)(param_1 + 0xe0) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xdc);
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xdc) + 4) = *(undefined4 *)(param_1 + 0xe0);
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  FUN_00457730((undefined4 *)(param_1 + 0xa4));
  FUN_004576e0((undefined4 *)(param_1 + 0x70));
  FUN_00457dd0((undefined4 *)(param_1 + 0x3c));
  FUN_00457690((undefined4 *)(param_1 + 8));
  return;
}


//// FUNCTION FUN_00457ee0 @ 00457ee0 ////

void __fastcall FUN_00457ee0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined1 uVar4;
  LONG LVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00ca190e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1a8ec;
  local_4 = 5;
  FUN_0078ba40();
  puVar2 = (undefined4 *)param_1[0x6ec3c];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x6ec3c] = 0;
  }
  puVar2 = (undefined4 *)param_1[0x6ec3d];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x6ec3d] = 0;
  }
  puVar2 = (undefined4 *)param_1[0x6ec3e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x6ec3e] = 0;
  }
  puVar2 = (undefined4 *)param_1[0x6ec3f];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x6ec3f] = 0;
  }
  if (param_1[0x6ec21] != 0) {
    pvVar3 = *(void **)(param_1[0x6ec21] + 0x40);
    if (pvVar3 != (void *)0x0) {
      FUN_00990ec0((int)pvVar3);
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
    *(undefined4 *)(param_1[0x6ec21] + 0x40) = 0;
    puVar2 = (undefined4 *)param_1[0x6ec21];
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 4);
      uVar4 = DAT_0105b588;
      if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar4;
      param_1[0x6ec21] = 0;
    }
  }
  pvVar3 = *(void **)(param_1[0x6ec44] + 0x18);
  if (pvVar3 != (void *)0x0) {
    FUN_00990ec0((int)pvVar3);
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  *(undefined4 *)(param_1[0x6ec44] + 0x18) = 0;
  puVar2 = (undefined4 *)param_1[0x6ec44];
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 4);
    uVar4 = DAT_0105b588;
    if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar4;
    param_1[0x6ec44] = 0;
  }
  pvVar3 = *(void **)(param_1[0x6ec45] + 0x18);
  if (pvVar3 != (void *)0x0) {
    FUN_00990ec0((int)pvVar3);
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  *(undefined4 *)(param_1[0x6ec45] + 0x18) = 0;
  puVar2 = (undefined4 *)param_1[0x6ec45];
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 4);
    uVar4 = DAT_0105b588;
    if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar4;
    param_1[0x6ec45] = 0;
  }
  if ((void *)param_1[0x6ec2f] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x6ec2f]);
  }
  param_1[0x6ec2f] = 0;
  param_1[0x6ec30] = 0;
  param_1[0x6ec31] = 0;
  if ((void *)param_1[0x6ec2b] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x6ec2b]);
  }
  param_1[0x6ec2b] = 0;
  param_1[0x6ec2c] = 0;
  param_1[0x6ec2d] = 0;
  if ((void *)param_1[0x6ec27] == (void *)0x0) {
    param_1[0x6ec27] = 0;
    param_1[0x6ec28] = 0;
    param_1[0x6ec29] = 0;
    if ((void *)param_1[0x6ec23] == (void *)0x0) {
      param_1[0x6ec23] = 0;
      param_1[0x6ec24] = 0;
      param_1[0x6ec25] = 0;
      local_4 = local_4 & 0xffffff00;
      _eh_vector_destructor_iterator_(param_1 + 0x21,0xfc,0x1400,FUN_00457e40);
      local_4 = 0xffffffff;
      FUN_0053c500(param_1);
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x6ec23]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x6ec27]);
}


//// FUNCTION FUN_004581a0 @ 004581a0 ////

void __thiscall FUN_004581a0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca1920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_004577e0();
    param_1 = extraout_EDX;
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 2;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 4);
    local_8 = 0;
    FUN_00455f10(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00458270 @ 00458270 ////

void __thiscall FUN_00458270(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca1930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_00457850();
    param_1 = extraout_EDX;
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 2;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 4);
    local_8 = 0;
    FUN_00455f40(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00458570 @ 00458570 ////

void __thiscall FUN_00458570(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00457c80();
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
      _Dst = FUN_004572d0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00455d40(param_1,iVar5,param_1 + param_2);
      FUN_004572d0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00451930(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00455d40(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_004538c0(param_1,(int)pvVar3,iVar5);
    FUN_00451930(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00458750 @ 00458750 ////

void __thiscall FUN_00458750(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00457cf0();
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
      _Dst = FUN_00457330((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00455d70(param_1,iVar5,param_1 + param_2);
      FUN_00457330(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00451970(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00455d70(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00453900(param_1,(int)pvVar3,iVar5);
    FUN_00451970(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00458930 @ 00458930 ////

void __thiscall FUN_00458930(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00ca1940;
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
      uVar2 = FUN_00457d60();
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
      puVar5 = (undefined4 *)FUN_00453c40(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00455ea0(puVar5,param_2,&local_20);
      FUN_00453c40(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
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
      FUN_00453c40(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_00457540(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_004519b0(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00453c40(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00453930((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_004519b0(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00458b80 @ 00458b80 ////

undefined4 * __thiscall FUN_00458b80(void *this,byte param_1)

{
  FUN_00457ee0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00458d80 @ 00458d80 ////

void * __thiscall FUN_00458d80(void *this,float *param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float *pfVar4;
  char cVar5;
  void *pvVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  int *local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  undefined1 auStack_c [12];
  
  pfVar4 = param_1;
  if (*(void **)((int)this + 0x1bb08c) != *(void **)((int)this + 0x1bb090)) {
    pvVar6 = _memmove(*(void **)((int)this + 0x1bb08c),*(void **)((int)this + 0x1bb090),0);
    *(void **)((int)this + 0x1bb090) = pvVar6;
  }
  local_2c = *param_1 - param_2;
  local_28 = param_1[1] - param_2;
  piVar7 = (int *)FUN_00452080(&local_14,&local_2c);
  local_18 = piVar7[1];
  local_2c = param_2 + *param_1;
  iVar1 = *piVar7;
  local_28 = param_2 + param_1[1];
  piVar7 = (int *)FUN_00452080(&local_24,&local_2c);
  iVar9 = piVar7[1];
  if (iVar1 <= *piVar7) {
    iVar10 = iVar1 << 6;
    param_1 = (float *)((*piVar7 - iVar1) + 1);
    local_10 = iVar9;
    do {
      local_20 = local_18;
      if (local_18 <= iVar9) {
        do {
          if ((((-1 < iVar10) && (iVar10 < 0x1400)) && (-1 < local_20)) &&
             ((local_20 < 0x40 &&
              (iVar1 = (iVar10 + local_20) * 0xfc + 0x84 + (int)this, iVar1 != 0)))) {
            fVar11 = *(float *)(iVar1 + 0x10);
            local_2c = (float)(iVar1 + 0x1c);
            if (fVar11 != local_2c) {
              do {
                piVar7 = *(int **)((int)fVar11 + 8);
                local_30 = piVar7;
                cVar5 = (**(code **)(*piVar7 + 0x13c))();
                if ((cVar5 != '\0') &&
                   (pfVar8 = (float *)(**(code **)(*piVar7 + 0x34))(auStack_c),
                   fVar3 = (*pfVar4 - *pfVar8) * (*pfVar4 - *pfVar8) +
                           (pfVar4[1] - pfVar8[1]) * (pfVar4[1] - pfVar8[1]) +
                           (pfVar4[2] - pfVar8[2]) * (pfVar4[2] - pfVar8[2]),
                   fVar3 < param_2 * param_2 != (fVar3 == param_2 * param_2))) {
                  iVar1 = *(int *)((int)this + 0x1bb08c);
                  if ((iVar1 == 0) ||
                     ((uint)(*(int *)((int)this + 0x1bb094) - iVar1 >> 2) <=
                      (uint)(*(int *)((int)this + 0x1bb090) - iVar1 >> 2))) {
                    FUN_004578c0((void *)((int)this + 0x1bb088),
                                 *(undefined4 **)((int)this + 0x1bb090),1,&local_30);
                  }
                  else {
                    puVar2 = *(undefined4 **)((int)this + 0x1bb090);
                    *puVar2 = piVar7;
                    *(undefined4 **)((int)this + 0x1bb090) = puVar2 + 1;
                  }
                }
                fVar11 = *(float *)((int)fVar11 + 4);
              } while (fVar11 != local_2c);
            }
          }
          local_20 = local_20 + 1;
          iVar9 = local_10;
        } while (local_20 <= local_10);
      }
      iVar10 = iVar10 + 0x40;
      param_1 = (float *)((int)param_1 + -1);
    } while (param_1 != (float *)0x0);
  }
  return (void *)((int)this + 0x1bb088);
}


//// FUNCTION FUN_00458fa0 @ 00458fa0 ////

void * __thiscall FUN_00458fa0(void *this,float *param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  void *pvVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int *local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [12];
  
  pfVar4 = param_1;
  if (*(void **)((int)this + 0x1bb09c) != *(void **)((int)this + 0x1bb0a0)) {
    pvVar5 = _memmove(*(void **)((int)this + 0x1bb09c),*(void **)((int)this + 0x1bb0a0),0);
    *(void **)((int)this + 0x1bb0a0) = pvVar5;
  }
  local_2c = *param_1 - param_2;
  local_28 = param_1[1] - param_2;
  piVar6 = (int *)FUN_00452080(&local_14,&local_2c);
  local_18 = piVar6[1];
  local_2c = param_2 + *param_1;
  iVar1 = *piVar6;
  local_28 = param_2 + param_1[1];
  piVar6 = (int *)FUN_00452080(&local_24,&local_2c);
  iVar8 = piVar6[1];
  if (iVar1 <= *piVar6) {
    iVar9 = iVar1 << 6;
    param_1 = (float *)((*piVar6 - iVar1) + 1);
    local_10 = iVar8;
    do {
      local_20 = local_18;
      if (local_18 <= iVar8) {
        do {
          if ((((-1 < iVar9) && (iVar9 < 0x1400)) && (-1 < local_20)) &&
             ((local_20 < 0x40 && (iVar1 = (iVar9 + local_20) * 0xfc + 0x84 + (int)this, iVar1 != 0)
              ))) {
            fVar10 = *(float *)(iVar1 + 0x44);
            local_2c = (float)(iVar1 + 0x50);
            if (fVar10 != local_2c) {
              do {
                piVar6 = *(int **)((int)fVar10 + 8);
                local_30 = piVar6;
                pfVar7 = (float *)(**(code **)(*piVar6 + 0x34))(local_c);
                fVar3 = (*pfVar4 - *pfVar7) * (*pfVar4 - *pfVar7) +
                        (pfVar4[1] - pfVar7[1]) * (pfVar4[1] - pfVar7[1]) +
                        (pfVar4[2] - pfVar7[2]) * (pfVar4[2] - pfVar7[2]);
                if ((fVar3 < param_2 * param_2 != (fVar3 == param_2 * param_2)) &&
                   (piVar6[0xae] != 0)) {
                  iVar1 = *(int *)((int)this + 0x1bb09c);
                  if ((iVar1 == 0) ||
                     ((uint)(*(int *)((int)this + 0x1bb0a4) - iVar1 >> 2) <=
                      (uint)(*(int *)((int)this + 0x1bb0a0) - iVar1 >> 2))) {
                    FUN_00457aa0((void *)((int)this + 0x1bb098),
                                 *(undefined4 **)((int)this + 0x1bb0a0),1,&local_30);
                  }
                  else {
                    piVar2 = *(int **)((int)this + 0x1bb0a0);
                    *piVar2 = (int)piVar6;
                    *(int **)((int)this + 0x1bb0a0) = piVar2 + 1;
                  }
                }
                fVar10 = *(float *)((int)fVar10 + 4);
              } while (fVar10 != local_2c);
            }
          }
          local_20 = local_20 + 1;
          iVar8 = local_10;
        } while (local_20 <= local_10);
      }
      iVar9 = iVar9 + 0x40;
      param_1 = (float *)((int)param_1 + -1);
    } while (param_1 != (float *)0x0);
  }
  return (void *)((int)this + 0x1bb098);
}


//// FUNCTION FUN_00459200 @ 00459200 ////

void __thiscall FUN_00459200(void *this,undefined4 *param_1)

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
  FUN_00458750(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00459250 @ 00459250 ////

void __thiscall FUN_00459250(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00455ea0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_00458930(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_004592c0 @ 004592c0 ////

void __thiscall FUN_004592c0(void *this,uint param_1,uint param_2,void *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint local_8;
  uint local_4;
  
  if (*(int *)((int)this + 0x1bb0d4) <= (int)param_1) {
    while ((((*(int *)((int)this + 0x1bb0d8) <= (int)param_2 &&
             ((int)param_1 < *(int *)((int)this + 0x1bb0dc))) &&
            ((int)param_2 < *(int *)((int)this + 0x1bb0e0))) &&
           (uVar1 = FUN_00450840(param_1,param_2), (char)uVar1 != '\0'))) {
      for (puVar2 = *(uint **)((int)param_3 + 4); puVar2 != *(uint **)((int)param_3 + 8);
          puVar2 = puVar2 + 2) {
        if ((*puVar2 == param_1) && (puVar2[1] == param_2)) {
          return;
        }
      }
      local_8 = param_1;
      local_4 = param_2;
      FUN_00459250(param_3,&local_8);
      if ((*(int *)((int)param_3 + 4) != 0) &&
         (0xf < (uint)(*(int *)((int)param_3 + 8) - *(int *)((int)param_3 + 4) >> 3))) {
        return;
      }
      FUN_004592c0(this,param_1 + 1,param_2,param_3);
      if ((*(int *)((int)param_3 + 4) != 0) &&
         (0xf < (uint)(*(int *)((int)param_3 + 8) - *(int *)((int)param_3 + 4) >> 3))) {
        return;
      }
      FUN_004592c0(this,param_1,param_2 + 1,param_3);
      if ((*(int *)((int)param_3 + 4) != 0) &&
         (0xf < (uint)(*(int *)((int)param_3 + 8) - *(int *)((int)param_3 + 4) >> 3))) {
        return;
      }
      FUN_004592c0(this,param_1 - 1,param_2,param_3);
      uVar1 = FUN_00451340((int)param_3);
      if (0xf < uVar1) {
        return;
      }
      param_2 = param_2 - 1;
      if ((int)param_1 < *(int *)((int)this + 0x1bb0d4)) {
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_004593e0 @ 004593e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004593e0(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  float *pfVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  byte bVar15;
  uint local_50;
  float local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  float local_38 [2];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ca195e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((DAT_00f88ef8 & 1) == 0) {
    DAT_00f88ef8 = DAT_00f88ef8 | 1;
    DAT_00f88eec = 0;
    DAT_00f88ef0 = 0;
    _DAT_00f88ef4 = 0;
    ExceptionList = &pvStack_14;
    _atexit(FUN_00d10e90);
  }
  local_c = 0xffffffff;
  local_40 = 0xc3200000;
  local_3c = 0xc1c00000;
  local_48 = (undefined4 *)0xc3200000;
  local_44 = 0xc1c00000;
  uVar14 = WorldToOccupancyGridCoord((float *)&local_48);
  *(undefined8 *)((int)param_1 + 0x1bb0d4) = uVar14;
  local_40 = 0x43200000;
  local_3c = 0x43680000;
  local_48 = (undefined4 *)0x43200000;
  local_44 = 0x43680000;
  uVar14 = WorldToOccupancyGridCoord((float *)&local_48);
  *(undefined8 *)((int)param_1 + 0x1bb0dc) = uVar14;
  local_48 = operator_new(((int)uVar14 - *(int *)((int)param_1 + 0x1bb0d4)) * 4);
  puVar12 = local_48;
  for (uVar10 = *(int *)((int)param_1 + 0x1bb0dc) - *(int *)((int)param_1 + 0x1bb0d4) & 0x3fffffff;
      uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined1 *)puVar12 = 0;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  uVar10 = *(uint *)((int)param_1 + 0x1bb0d8);
  if ((int)uVar10 < *(int *)((int)param_1 + 0x1bb0e0)) {
    do {
      uVar13 = *(uint *)((int)param_1 + 0x1bb0d4);
      local_50 = 0;
      if ((int)uVar13 < *(int *)((int)param_1 + 0x1bb0dc)) {
        local_40 = uVar13 * 0x100 + uVar10;
        do {
          bVar15 = 1;
          local_4c = 0.0;
          pfVar7 = (float *)FUN_0046cf10(local_38,uVar13,uVar10);
          cVar6 = FUN_0046d260(pfVar7,bVar15);
          if (cVar6 != '\0') {
            if (((((int)uVar13 < 0) || (0xff < (int)uVar13)) || ((int)uVar10 < 0)) ||
               ((0xff < (int)uVar10 ||
                (iVar11 = (int)(local_40 + (local_40 >> 0x1f & 7U)) >> 3,
                (*(byte *)(g_OccupancyGrid256_A + iVar11) &
                (byte)(1 << ((char)local_40 + (char)iVar11 * -8 & 0x1fU))) == 0)))) {
              FUN_009e2490(uVar13,uVar10,&local_30);
              fVar1 = _DAT_00e4ff20 * local_2c;
              fVar5 = _DAT_00e4ff20 * local_24;
              local_50 = 0;
              fVar4 = _DAT_00e4ff24 * local_28;
              fVar3 = _DAT_00e4ff28 * local_1c;
              fVar2 = _DAT_00e4ff2c * local_30;
              local_4c = _DAT_00e4ff30 * local_20;
              local_48[uVar13 - *(int *)((int)param_1 + 0x1bb0d4)] = 0;
              local_4c = local_4c + fVar2 + fVar3 + fVar4 + fVar5 + fVar1;
            }
            else {
              if (local_50 <= (uint)local_48[uVar13 - *(int *)((int)param_1 + 0x1bb0d4)]) {
                local_50 = local_48[uVar13 - *(int *)((int)param_1 + 0x1bb0d4)];
              }
              if (local_50 == 0) {
                if (DAT_00f88eec != DAT_00f88ef0) {
                  DAT_00f88ef0 = DAT_00f88eec;
                }
                FUN_004592c0(param_1,uVar13,uVar10,&DAT_00f88ee8);
                if (DAT_00f88eec == 0) {
                  local_50 = 0;
                }
                else {
                  local_50 = DAT_00f88ef0 - DAT_00f88eec >> 3;
                }
              }
              uVar8 = FUN_00450b40(param_1,uVar13,uVar10);
              if ((char)uVar8 == '\0') {
                local_4c = DAT_00e4ff1c;
              }
              else {
                local_4c = (float)(int)local_50;
                if ((int)local_50 < 0) {
                  local_4c = local_4c + 4.2949673e+09;
                }
                local_4c = local_4c * _DAT_00e4ff18;
              }
              local_48[uVar13 - *(int *)((int)param_1 + 0x1bb0d4)] = local_50;
            }
          }
          iVar11 = (int)((uVar13 - *(int *)((int)param_1 + 0x1bb0d4)) * 0x50) /
                   (*(int *)((int)param_1 + 0x1bb0dc) - *(int *)((int)param_1 + 0x1bb0d4));
          iVar9 = (int)((uVar10 - *(int *)((int)param_1 + 0x1bb0d8)) * 0x40) /
                  (*(int *)((int)param_1 + 0x1bb0e0) - *(int *)((int)param_1 + 0x1bb0d8));
          if (((-1 < iVar11) && (iVar11 < 0x50)) &&
             ((-1 < iVar9 &&
              ((iVar9 < 0x40 &&
               (iVar11 = (iVar11 * 0x40 + iVar9) * 0xfc + 0x84 + (int)param_1, iVar11 != 0)))))) {
            *(float *)(iVar11 + *(int *)((int)param_1 + 0x1bb0d0) * 4) =
                 local_4c + *(float *)(iVar11 + *(int *)((int)param_1 + 0x1bb0d0) * 4);
          }
          uVar13 = uVar13 + 1;
          local_40 = local_40 + 0x100;
        } while ((int)uVar13 < *(int *)((int)param_1 + 0x1bb0dc));
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)((int)param_1 + 0x1bb0e0));
  }
                    /* WARNING: Subroutine does not return */
  _free(local_48);
}


//// FUNCTION FUN_00459790 @ 00459790 ////

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00459790(void *param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float10 extraout_ST0;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 fVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float local_6c;
  float *local_68;
  int local_64;
  undefined8 local_60;
  uint local_58;
  int local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  float local_40 [2];
  float local_38 [2];
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar6 = *(int *)((int)param_1 + 100) + 1;
  *(int *)((int)param_1 + 100) = iVar6;
  switch(iVar6) {
  default:
    goto switchD_004597b1_caseD_0;
  case 1:
    *(undefined4 *)((int)param_1 + 0x1bb0e4) = 0x3f800000;
    if (*(char *)((int)param_1 + 0x1bb0ec) == '\0') {
      iVar6 = 0;
      do {
        iVar7 = 0;
        do {
          if (((iVar6 < 0) || (0x13ff < iVar6)) || ((iVar7 < 0 || (0x3f < iVar7)))) {
            iVar2 = 0;
          }
          else {
            iVar2 = (iVar6 + iVar7) * 0xfc + 0x84 + (int)param_1;
          }
          iVar7 = iVar7 + 1;
          *(undefined4 *)(iVar2 + *(int *)((int)param_1 + 0x1bb0d0) * 4) = 0;
        } while (iVar7 < 0x40);
        iVar6 = iVar6 + 0x40;
      } while (iVar6 < 0x1400);
      return;
    }
    local_68 = (float *)0x0;
    do {
      pfVar3 = local_68;
      local_64 = 0;
      do {
        iVar6 = local_64;
        if ((((int)pfVar3 < 0) || (0x4f < (int)pfVar3)) || ((local_64 < 0 || (0x3f < local_64)))) {
          iVar7 = 0;
        }
        else {
          iVar7 = ((int)pfVar3 * 0x40 + local_64) * 0xfc + 0x84 + (int)param_1;
        }
        *(undefined4 *)(iVar7 + *(int *)((int)param_1 + 0x1bb0d0) * 4) = 0;
        uVar8 = FUN_00453da0((int *)&local_68);
        local_64 = iVar6 + 1;
        *(uint *)(iVar7 + 0xf8) =
             *(uint *)(iVar7 + 0xf8) ^ ((uVar8 & 0xff) << 2 ^ *(uint *)(iVar7 + 0xf8)) & 4;
      } while (local_64 < 0x40);
      local_68 = (float *)((int)pfVar3 + 1);
    } while ((int)local_68 < 0x50);
    *(undefined1 *)((int)param_1 + 0x1bb0ec) = 0;
    return;
  case 2:
    FUN_004593e0(param_1);
    return;
  case 3:
    FUN_005301a0();
    return;
  case 4:
    FUN_00462db0();
    return;
  case 5:
  case 6:
    FUN_00450920((int)param_1);
    return;
  case 7:
    FUN_00452080((int *)&local_58,(float *)(DAT_00f890c0 + 0x44c));
    FUN_00452080((int *)&local_60,(float *)(DAT_00f890c0 + 0x454));
    iVar7 = 0;
    iVar6 = 0;
    do {
      iVar2 = 0;
      do {
        if (((iVar7 <= (int)local_58) || ((int)local_60 <= iVar7)) ||
           ((iVar2 <= local_54 || (local_60._4_4_ <= iVar2)))) {
          if ((((iVar6 < 0) || (0x13ff < iVar6)) || (iVar2 < 0)) || (0x3f < iVar2)) {
            iVar5 = 0;
          }
          else {
            iVar5 = (iVar6 + iVar2) * 0xfc + 0x84 + (int)param_1;
          }
          *(undefined4 *)(iVar5 + *(int *)((int)param_1 + 0x1bb0d0) * 4) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
      iVar6 = iVar6 + 0x40;
      iVar7 = iVar7 + 1;
    } while (iVar6 < 0x1400);
    return;
  case 8:
    FUN_00453fa0(param_1);
    return;
  case 9:
    FUN_00454330();
    return;
  case 10:
    FUN_00455520(param_1,&local_30);
    uVar12 = FUN_00acd42c();
    pfVar3 = (float *)uVar12;
    fVar11 = extraout_ST1;
    local_68 = pfVar3;
    if ((float)(int)pfVar3 < local_28 != ((float)(int)pfVar3 == local_28)) {
      uVar12 = FUN_00acd42c();
      iVar6 = (int)uVar12;
      iVar7 = (int)pfVar3 << 6;
      fVar10 = extraout_ST0;
      fVar11 = extraout_ST1_00;
      do {
        local_64 = iVar6;
        if ((float)iVar6 < local_2c != ((float)iVar6 == local_2c)) {
          do {
            if (((((-1 < iVar7) && (iVar7 < 0x1400)) && (-1 < local_64)) &&
                ((local_64 < 0x40 &&
                 (iVar2 = (iVar7 + local_64) * 0xfc + 0x84 + (int)param_1, iVar2 != 0)))) &&
               ((*(byte *)(iVar2 + 0xf8) & 4) == 0)) {
              fVar9 = (float10)*(float *)(iVar2 + *(int *)((int)param_1 + 0x1bb0d0) * 4);
              if (fVar9 <= (float10)1.0) {
                if (fVar9 < (float10)-1.0) {
                  fVar9 = (float10)-1.0;
                }
              }
              else {
                fVar9 = (float10)1.0;
              }
              fVar11 = fVar9 + fVar11;
              fVar10 = fVar10 + (float10)1.0;
            }
            local_64 = local_64 + 1;
          } while ((float)local_64 < local_2c != ((float)local_64 == local_2c));
        }
        pfVar3 = (float *)((int)pfVar3 + 1);
        iVar7 = iVar7 + 0x40;
      } while ((float)(int)pfVar3 < local_28 != ((float)(int)pfVar3 == local_28));
      local_68 = pfVar3;
      if (fVar10 != (float10)0.0) {
        fVar11 = fVar11 / fVar10;
      }
    }
    FUN_00407070(&local_68,
                 (float)(((float10)_DAT_00e4ff04 * fVar11 - (float10)_DAT_00f88704) /
                        ((float10)1.0 - (float10)_DAT_00f88704)));
    *(float **)((int)param_1 + 0x1bb10c) = local_68;
    if (DAT_0105be18 != 0) {
      return;
    }
    break;
  case 0xb:
    local_4c = *(undefined4 *)(DAT_00f890c0 + 0x450);
    local_50 = *(float *)(DAT_00f890c0 + 0x44c);
    lVar13 = WorldToOccupancyGridCoord(&local_50);
    iVar6 = (int)((ulonglong)lVar13 >> 0x20);
    local_44 = *(undefined4 *)(DAT_00f890c0 + 0x458);
    local_48 = *(float *)(DAT_00f890c0 + 0x454);
    local_58 = (uint)lVar13;
    lVar14 = WorldToOccupancyGridCoord(&local_48);
    iVar7 = (int)((ulonglong)lVar14 >> 0x20);
    if ((int)(uint)lVar13 < 1) {
      local_58 = 1;
    }
    if (lVar13 < 0x100000000) {
      iVar6 = 1;
    }
    local_60 = lVar14;
    if (0xff < (int)lVar14) {
      local_60 = CONCAT44(iVar7,0xff);
    }
    if (0xffffffffff < lVar14) {
      iVar7 = 0xff;
      local_60 = CONCAT44(0xff,(int)local_60);
    }
    if ((_DAT_00f88f08 & 1) == 0) {
      _DAT_00f88f08 = _DAT_00f88f08 | 1;
      _DAT_00f88efc = 0.0;
      _DAT_00f88f00 = 0.0;
      DAT_00f88f04 = 0.0;
    }
    if (iVar6 < iVar7) {
      do {
        if ((int)local_58 < (int)local_60) {
          local_68 = (float *)((int)param_1 + (local_58 * 0x100 + iVar6) * 8 + 0x13b088);
          uVar8 = local_58;
          do {
            local_6c = 0.0;
            pfVar3 = (float *)FUN_0046cf10(local_38,uVar8,iVar6);
            local_30 = *pfVar3 + _DAT_00f88efc;
            local_28 = DAT_00f88f04;
            local_2c = pfVar3[1] + _DAT_00f88f00;
            FUN_009840b0(local_40,&local_30);
            cVar1 = FUN_0046d260(local_40,1);
            if ((cVar1 != '\0') && (uVar4 = FUN_00450840(uVar8,iVar6), (char)uVar4 == '\0')) {
              uVar4 = FUN_00450840(uVar8 - 1,iVar6);
              if (((char)uVar4 == '\0') &&
                 ((uVar4 = FUN_00450840(uVar8 - 1,iVar6 + -1), (char)uVar4 == '\0' &&
                  (uVar4 = FUN_00450840(uVar8,iVar6 + -1), (char)uVar4 == '\0')))) {
                FUN_009e2490(uVar8,iVar6,&local_20);
                local_6c = local_18 * 0.1 + local_14 + local_1c;
                if (0.0 <= local_6c) {
                  if (1.0 < local_6c) {
                    local_6c = 1.0;
                  }
                }
                else {
                  local_6c = 0.0;
                }
              }
            }
            *local_68 = local_6c;
            local_68 = local_68 + 0x200;
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)local_60);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_60._4_4_);
    }
  }
  DAT_00e52590 = 1;
  *(undefined4 *)((int)param_1 + 0x1bb0e4) = 0;
  *(uint *)((int)param_1 + 0x1bb0d0) = *(uint *)((int)param_1 + 0x1bb0d0) ^ 1;
switchD_004597b1_caseD_0:
  *(undefined4 *)((int)param_1 + 100) = 0xffffffff;
  return;
}


//// FUNCTION FUN_00459d80 @ 00459d80 ////

void __fastcall FUN_00459d80(void *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  iVar3 = FUN_00423320(DAT_00f87b04);
  if (iVar3 != 1) {
    uVar4 = FUN_005541d0(8);
    if ((char)uVar4 != '\0') {
      *(bool *)((int)param_1 + 0x1bb108) = *(char *)((int)param_1 + 0x1bb108) == '\0';
    }
    if ((((*(int *)((int)param_1 + 0x1bb0c8) < 0x61) ||
         (cVar2 = FUN_004201b0(DAT_00f87b04), cVar2 == '\0')) &&
        (iVar3 = *(int *)((int)param_1 + 0x1bb0c8) + -1, *(int *)((int)param_1 + 0x1bb0c8) = iVar3,
        iVar3 < 1)) && (*(int *)((int)param_1 + 100) == -1)) {
      *(undefined4 *)((int)param_1 + 0x1bb0c8) = 0x61;
      *(undefined4 *)((int)param_1 + 100) = 0;
    }
    FUN_00459790(param_1);
    uVar1 = *(uint *)(DAT_0104cdf4 + 0x3c);
    if (*(uint *)((int)param_1 + 0x1bb0cc) <= uVar1) {
      uVar5 = FUN_00acd42c();
      *(uint *)((int)param_1 + 0x1bb0cc) = (int)uVar5 + uVar1;
      FUN_00456490((int)param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00459e40 @ 00459e40 ////

void * __thiscall FUN_00459e40(void *this,float *param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  char cVar5;
  void *pvVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  int *local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  undefined1 auStack_c [12];
  
  pfVar4 = param_1;
  if (*(void **)((int)this + 0x1bb0bc) != *(void **)((int)this + 0x1bb0c0)) {
    pvVar6 = _memmove(*(void **)((int)this + 0x1bb0bc),*(void **)((int)this + 0x1bb0c0),0);
    *(void **)((int)this + 0x1bb0c0) = pvVar6;
  }
  local_2c = *param_1 - param_2;
  local_28 = param_1[1] - param_2;
  piVar7 = (int *)FUN_00452080(&local_14,&local_2c);
  local_18 = piVar7[1];
  local_2c = param_2 + *param_1;
  iVar1 = *piVar7;
  local_28 = param_2 + param_1[1];
  piVar7 = (int *)FUN_00452080(&local_24,&local_2c);
  iVar9 = piVar7[1];
  if (iVar1 <= *piVar7) {
    iVar10 = iVar1 << 6;
    param_1 = (float *)((*piVar7 - iVar1) + 1);
    local_10 = iVar9;
    do {
      local_20 = local_18;
      if (local_18 <= iVar9) {
        do {
          if ((((-1 < iVar10) && (iVar10 < 0x1400)) && (-1 < local_20)) &&
             ((local_20 < 0x40 &&
              (iVar1 = (iVar10 + local_20) * 0xfc + 0x84 + (int)this, iVar1 != 0)))) {
            fVar11 = *(float *)(iVar1 + 0x78);
            local_2c = (float)(iVar1 + 0x84);
            if (fVar11 != local_2c) {
              do {
                piVar7 = *(int **)((int)fVar11 + 8);
                local_30 = piVar7;
                cVar5 = (**(code **)(*piVar7 + 0x164))();
                if (((cVar5 == '\0') &&
                    (pfVar8 = (float *)(**(code **)(*piVar7 + 0x34))(auStack_c),
                    fVar3 = (*pfVar4 - *pfVar8) * (*pfVar4 - *pfVar8) +
                            (pfVar4[1] - pfVar8[1]) * (pfVar4[1] - pfVar8[1]) +
                            (pfVar4[2] - pfVar8[2]) * (pfVar4[2] - pfVar8[2]),
                    fVar3 < param_2 * param_2 != (fVar3 == param_2 * param_2))) &&
                   (piVar7[0xae] != 0)) {
                  iVar1 = *(int *)((int)this + 0x1bb0bc);
                  if ((iVar1 == 0) ||
                     ((uint)(*(int *)((int)this + 0x1bb0c4) - iVar1 >> 2) <=
                      (uint)(*(int *)((int)this + 0x1bb0c0) - iVar1 >> 2))) {
                    FUN_00458750((void *)((int)this + 0x1bb0b8),
                                 *(undefined4 **)((int)this + 0x1bb0c0),1,&local_30);
                  }
                  else {
                    piVar2 = *(int **)((int)this + 0x1bb0c0);
                    *piVar2 = (int)piVar7;
                    *(int **)((int)this + 0x1bb0c0) = piVar2 + 1;
                  }
                }
                fVar11 = *(float *)((int)fVar11 + 4);
              } while (fVar11 != local_2c);
            }
          }
          local_20 = local_20 + 1;
          iVar9 = local_10;
        } while (local_20 <= local_10);
      }
      iVar10 = iVar10 + 0x40;
      param_1 = (float *)((int)param_1 + -1);
    } while (param_1 != (float *)0x0);
  }
  return (void *)((int)this + 0x1bb0b8);
}


//// FUNCTION FUN_0045a060 @ 0045a060 ////

void * __thiscall FUN_0045a060(void *this,float *param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  void *pvVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int *local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [12];
  
  pfVar4 = param_1;
  if (*(void **)((int)this + 0x1bb0ac) != *(void **)((int)this + 0x1bb0b0)) {
    pvVar5 = _memmove(*(void **)((int)this + 0x1bb0ac),*(void **)((int)this + 0x1bb0b0),0);
    *(void **)((int)this + 0x1bb0b0) = pvVar5;
  }
  local_2c = *param_1 - param_2;
  local_28 = param_1[1] - param_2;
  piVar6 = (int *)FUN_00452080(&local_14,&local_2c);
  local_18 = piVar6[1];
  local_2c = param_2 + *param_1;
  iVar1 = *piVar6;
  local_28 = param_2 + param_1[1];
  piVar6 = (int *)FUN_00452080(&local_24,&local_2c);
  iVar8 = piVar6[1];
  if (iVar1 <= *piVar6) {
    iVar9 = iVar1 << 6;
    param_1 = (float *)((*piVar6 - iVar1) + 1);
    local_10 = iVar8;
    do {
      local_20 = local_18;
      if (local_18 <= iVar8) {
        do {
          if ((((-1 < iVar9) && (iVar9 < 0x1400)) && (-1 < local_20)) &&
             ((local_20 < 0x40 && (iVar1 = (iVar9 + local_20) * 0xfc + 0x84 + (int)this, iVar1 != 0)
              ))) {
            fVar10 = *(float *)(iVar1 + 0xac);
            local_2c = (float)(iVar1 + 0xb8);
            if (fVar10 != local_2c) {
              do {
                piVar6 = *(int **)((int)fVar10 + 8);
                local_30 = piVar6;
                pfVar7 = (float *)(**(code **)(*piVar6 + 0x34))(local_c);
                fVar3 = (*pfVar4 - *pfVar7) * (*pfVar4 - *pfVar7) +
                        (pfVar4[1] - pfVar7[1]) * (pfVar4[1] - pfVar7[1]) +
                        (pfVar4[2] - pfVar7[2]) * (pfVar4[2] - pfVar7[2]);
                if ((fVar3 < param_2 * param_2 != (fVar3 == param_2 * param_2)) &&
                   (piVar6[0xae] != 0)) {
                  iVar1 = *(int *)((int)this + 0x1bb0ac);
                  if ((iVar1 == 0) ||
                     ((uint)(*(int *)((int)this + 0x1bb0b4) - iVar1 >> 2) <=
                      (uint)(*(int *)((int)this + 0x1bb0b0) - iVar1 >> 2))) {
                    FUN_00458570((void *)((int)this + 0x1bb0a8),
                                 *(undefined4 **)((int)this + 0x1bb0b0),1,&local_30);
                  }
                  else {
                    piVar2 = *(int **)((int)this + 0x1bb0b0);
                    *piVar2 = (int)piVar6;
                    *(int **)((int)this + 0x1bb0b0) = piVar2 + 1;
                  }
                }
                fVar10 = *(float *)((int)fVar10 + 4);
              } while (fVar10 != local_2c);
            }
          }
          local_20 = local_20 + 1;
          iVar8 = local_10;
        } while (local_20 <= local_10);
      }
      iVar9 = iVar9 + 0x40;
      param_1 = (float *)((int)param_1 + -1);
    } while (param_1 != (float *)0x0);
  }
  return (void *)((int)this + 0x1bb0a8);
}


//// FUNCTION FUN_0045a280 @ 0045a280 ////

void __fastcall FUN_0045a280(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1a8e0;
  return;
}


//// FUNCTION FUN_0045a2e0 @ 0045a2e0 ////

void __fastcall FUN_0045a2e0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1a8bc;
  return;
}


//// FUNCTION FUN_0045a340 @ 0045a340 ////

void __fastcall FUN_0045a340(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1a8c8;
  return;
}


//// FUNCTION FUN_0045a3a0 @ 0045a3a0 ////

void __fastcall FUN_0045a3a0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1a8d4;
  return;
}


//// FUNCTION FUN_0045a400 @ 0045a400 ////

void __fastcall FUN_0045a400(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = param_1 + 7;
  param_1[9] = 0;
  *puVar1 = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[2] = &PTR_LAB_00d1a8bc;
  param_1[4] = puVar1;
  *puVar1 = param_1 + 3;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar1 = param_1 + 0x14;
  param_1[0x16] = 0;
  *puVar1 = 0;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0xf] = &PTR_LAB_00d1a8e0;
  param_1[0x11] = puVar1;
  *puVar1 = param_1 + 0x10;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  puVar1 = param_1 + 0x21;
  param_1[0x23] = 0;
  *puVar1 = 0;
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x1c] = &PTR_LAB_00d1a8c8;
  param_1[0x1e] = puVar1;
  *puVar1 = param_1 + 0x1d;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  puVar1 = param_1 + 0x2e;
  param_1[0x30] = 0;
  *puVar1 = 0;
  param_1[0x2f] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x2b] = puVar1;
  *puVar1 = param_1 + 0x2a;
  param_1[0x29] = &PTR_LAB_00d1a8d4;
  param_1[0x39] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = param_1 + 0x36;
  param_1[0x3b] = 0;
  param_1[0x36] = &PTR_LAB_00d1a7d8;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = param_1[0x3e] & 0xfffffffb;
  return;
}


//// FUNCTION FUN_0045a530 @ 0045a530 ////

undefined4 * __fastcall FUN_0045a530(undefined4 *param_1)

{
  uint *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1b20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d1a8ec;
  param_1[0x19] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x21,0xfc,0x1400,FUN_0045a400,FUN_00457e40);
  param_1[0x6ec21] = 0;
  param_1[0x6ec23] = 0;
  param_1[0x6ec24] = 0;
  param_1[0x6ec25] = 0;
  param_1[0x6ec27] = 0;
  param_1[0x6ec28] = 0;
  param_1[0x6ec29] = 0;
  param_1[0x6ec2b] = 0;
  param_1[0x6ec2c] = 0;
  param_1[0x6ec2d] = 0;
  param_1[0x6ec2f] = 0;
  param_1[0x6ec30] = 0;
  param_1[0x6ec31] = 0;
  param_1[0x6ec32] = 0;
  param_1[0x6ec33] = 0;
  param_1[0x6ec34] = 0;
  param_1[0x6ec39] = 0;
  param_1[0x6ec3a] = 0;
  *(undefined1 *)(param_1 + 0x6ec3b) = 1;
  *(undefined1 *)(param_1 + 0x6ec42) = 0;
  param_1[0x6ec43] = 0;
  param_1[0x6ec47] = 0;
  param_1[0x6ec49] = 0;
  param_1[0x6ec48] = 0;
  param_1[0x6ec46] = 0;
  DAT_00e4ff50 = 1;
  local_4._0_1_ = 5;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  FUN_004581a0(param_1 + 0x6ec22,0x40);
  FUN_00458270(param_1 + 0x6ec26,0x40);
  puVar3 = param_1 + 0x4ec21;
  for (iVar5 = 0x20000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  pvVar2 = operator_new(0xb8);
  local_4._0_1_ = 6;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0040af20(pvVar2,"ui/fbad.dds",4,0,-1);
  }
  local_4._0_1_ = 5;
  param_1[0x6ec3c] = puVar3;
  pvVar2 = operator_new(0xb8);
  local_4._0_1_ = 7;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0040af20(pvVar2,"ui/fgood.dds",4,0,-1);
  }
  local_4._0_1_ = 5;
  param_1[0x6ec3d] = puVar3;
  pvVar2 = operator_new(0xb8);
  local_4._0_1_ = 8;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0040af20(pvVar2,"ui/feedback_prestige_minus.dds",1,0,-1);
  }
  local_4._0_1_ = 5;
  param_1[0x6ec3f] = puVar3;
  pvVar2 = operator_new(0xb8);
  local_4._0_1_ = 9;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0040af20(pvVar2,"ui/feedback_prestige_plus.dds",1,0,-1);
  }
  param_1[0x6ec3e] = puVar3;
  local_4._0_1_ = 5;
  param_1[0x6ec40] = 0x3f666666;
  param_1[0x6ec41] = 0x3f666666;
  pvVar2 = FUN_0099bb50("fx_weeds.dds",0,0,0,'\0');
  puVar3 = FUN_0040a690(0x100,'\0');
  param_1[0x6ec44] = puVar3;
  puVar3 = operator_new(0x24);
  local_4._0_1_ = 10;
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_009910f0(puVar3);
  }
  *(undefined4 *)(param_1[0x6ec44] + 0x18) = uVar4;
  *(undefined1 *)(*(int *)(param_1[0x6ec44] + 0x18) + 0xc) = 6;
  local_4 = CONCAT31(local_4._1_3_,5);
  if (*(void **)((int)*(void **)(param_1[0x6ec44] + 0x18) + 0x18) != pvVar2) {
    Engine_SetResourceReference(*(void **)(param_1[0x6ec44] + 0x18),(int)pvVar2);
  }
  puVar1 = (uint *)(*(int *)(param_1[0x6ec44] + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  *(uint *)(*(int *)(param_1[0x6ec44] + 0x18) + 0x10) =
       *(uint *)(*(int *)(param_1[0x6ec44] + 0x18) + 0x10) & 0xfeffffff;
  FUN_0099a250((void *)param_1[0x6ec44],2,4,'\0');
  FUN_0040a6f0(param_1[0x6ec44]);
  *(byte *)(param_1[0x6ec44] + 0x24) = *(byte *)(param_1[0x6ec44] + 0x24) | 0x40;
  if (pvVar2 != (void *)0x0) {
    FUN_0099b400(pvVar2);
  }
  pvVar2 = FUN_0099bb50("fx_flowers.dds",0,0,0,'\0');
  puVar3 = FUN_0040a690(0x100,'\0');
  param_1[0x6ec45] = puVar3;
  puVar3 = operator_new(0x24);
  local_4._0_1_ = 0xb;
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_009910f0(puVar3);
  }
  *(undefined4 *)(param_1[0x6ec45] + 0x18) = uVar4;
  *(undefined1 *)(*(int *)(param_1[0x6ec45] + 0x18) + 0xc) = 6;
  local_4 = CONCAT31(local_4._1_3_,5);
  if (*(void **)((int)*(void **)(param_1[0x6ec45] + 0x18) + 0x18) != pvVar2) {
    Engine_SetResourceReference(*(void **)(param_1[0x6ec45] + 0x18),(int)pvVar2);
  }
  puVar1 = (uint *)(*(int *)(param_1[0x6ec45] + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  puVar1 = (uint *)(*(int *)(param_1[0x6ec45] + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xfeffffff;
  FUN_0099a220((void *)param_1[0x6ec45],4);
  FUN_0040a6f0(param_1[0x6ec45]);
  *(byte *)(param_1[0x6ec45] + 0x24) = *(byte *)(param_1[0x6ec45] + 0x24) | 0x40;
  *(undefined4 *)(param_1[0x6ec45] + 0x28) = 0x3e800000;
  *(byte *)(param_1[0x6ec45] + 0x25) = *(byte *)(param_1[0x6ec45] + 0x25) | 0x80;
  if (pvVar2 != (void *)0x0) {
    FUN_0099b400(pvVar2);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION GroundSystem_Constructor @ 0045a910 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GroundSystem_Constructor(void)

{
  undefined4 *puVar1;
  float10 fVar2;
  ulonglong uVar3;
  char *local_138;
  undefined4 local_134;
  uint local_130;
  char local_12c [20];
  undefined1 *puStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  char *local_108;
  undefined4 local_104;
  uint local_100;
  char local_fc [20];
  undefined4 *local_e8;
  undefined4 local_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1cb4;
  pvStack_c = ExceptionList;
  local_108 = local_fc;
  local_fc[0] = '\0';
  local_104 = 0;
  local_100 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_108,"ground",6);
  local_104 = 6;
  local_108[6] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_108);
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"pathlengthedgemult",0x12);
  local_134 = 0x12;
  local_138[0x12] = '\0';
  local_4._0_1_ = 3;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff18 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"pavementniceness",0x10);
  local_134 = 0x10;
  local_138[0x10] = '\0';
  local_4._0_1_ = 4;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  DAT_00e4ff1c = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"grassniceness",0xd);
  local_134 = 0xd;
  local_138[0xd] = '\0';
  local_4._0_1_ = 5;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff20 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"scorchedniceness",0x10);
  local_134 = 0x10;
  local_138[0x10] = '\0';
  local_4._0_1_ = 6;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff24 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"concreteniceness",0x10);
  local_134 = 0x10;
  local_138[0x10] = '\0';
  local_4._0_1_ = 7;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff28 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"sandniceness",0xc);
  local_134 = 0xc;
  local_138[0xc] = '\0';
  local_4._0_1_ = 8;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff2c = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"rockniceness",0xc);
  local_134 = 0xc;
  local_138[0xc] = '\0';
  local_4._0_1_ = 9;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff30 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"overallscale",0xc);
  local_134 = 0xc;
  local_138[0xc] = '\0';
  local_4._0_1_ = 10;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff04 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"nicenesszeropoint",0x11);
  local_134 = 0x11;
  local_138[0x11] = '\0';
  local_4._0_1_ = 0xb;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00f88704 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"pavementspeed",0xd);
  local_134 = 0xd;
  local_138[0xd] = '\0';
  local_4._0_1_ = 0xc;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff34 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"grassspeed",10);
  local_134 = 10;
  local_138[10] = '\0';
  local_4._0_1_ = 0xd;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff38 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"scorchedspeed",0xd);
  local_134 = 0xd;
  local_138[0xd] = '\0';
  local_4._0_1_ = 0xe;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff3c = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"concretespeed",0xd);
  local_134 = 0xd;
  local_138[0xd] = '\0';
  local_4._0_1_ = 0xf;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff40 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"sandspeed",9);
  local_134 = 9;
  local_138[9] = '\0';
  local_4._0_1_ = 0x10;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff44 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"rockspeed",9);
  local_134 = 9;
  local_138[9] = '\0';
  local_4._0_1_ = 0x11;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff48 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"layoutshowlevel",0xf);
  local_134 = 0xf;
  local_138[0xf] = '\0';
  local_4._0_1_ = 0x12;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00f88708 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"costpavement",0xc);
  local_134 = 0xc;
  local_138[0xc] = '\0';
  local_4._0_1_ = 0x13;
  FUN_00558610(local_e4,&local_138,0.0);
  uVar3 = FUN_00acd42c();
  DAT_00f8872c = (undefined4)(uVar3 >> 0x20);
  DAT_00f88728 = (undefined4)uVar3;
  FUN_00471b10((longlong *)&DAT_00f88728);
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"costunpave",10);
  local_134 = 10;
  local_138[10] = '\0';
  local_4._0_1_ = 0x14;
  FUN_00558610(local_e4,&local_138,0.0);
  uVar3 = FUN_00acd42c();
  DAT_00f88734 = (undefined4)(uVar3 >> 0x20);
  DAT_00f88730 = (undefined4)uVar3;
  FUN_00471b10((longlong *)&DAT_00f88730);
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"costgrass",9);
  local_134 = 9;
  local_138[9] = '\0';
  local_4._0_1_ = 0x15;
  FUN_00558610(local_e4,&local_138,0.0);
  uVar3 = FUN_00acd42c();
  DAT_00f8873c = (undefined4)(uVar3 >> 0x20);
  DAT_00f88738 = (undefined4)uVar3;
  FUN_00471b10((longlong *)&DAT_00f88738);
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"costsand",8);
  local_134 = 8;
  local_138[8] = '\0';
  local_4._0_1_ = 0x16;
  FUN_00558610(local_e4,&local_138,0.0);
  uVar3 = FUN_00acd42c();
  DAT_00f88744 = (undefined4)(uVar3 >> 0x20);
  DAT_00f88740 = (undefined4)uVar3;
  FUN_00471b10((longlong *)&DAT_00f88740);
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"costconcrete",0xc);
  local_134 = 0xc;
  local_138[0xc] = '\0';
  local_4._0_1_ = 0x17;
  FUN_00558610(local_e4,&local_138,0.0);
  uVar3 = FUN_00acd42c();
  DAT_00f8874c = (undefined4)(uVar3 >> 0x20);
  DAT_00f88748 = (undefined4)uVar3;
  FUN_00471b10((longlong *)&DAT_00f88748);
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"wiltlevel",9);
  local_134 = 9;
  local_138[9] = '\0';
  local_4._0_1_ = 0x18;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff54 = (float)fVar2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"maxlayarea",10);
  local_134 = 10;
  local_138[10] = '\0';
  local_4._0_1_ = 0x19;
  fVar2 = FUN_00558610(local_e4,&local_138,0.0);
  _DAT_00e4ff4c = (float)fVar2;
  local_4._0_1_ = 2;
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_e8 = operator_new(0x1bb128);
  local_4._0_1_ = 0x1a;
  if (local_e8 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0045a530(local_e8);
  }
  local_4._0_1_ = 2;
  (*(code *)DAT_00f8870c[1])();
  DAT_00f88720 = puVar1;
  (*(code *)*DAT_00f8870c)();
  uStack_10c = uStack_10c & 0xfffffffe | 2;
  uStack_110 = 0;
  puStack_118 = &LAB_004571b0;
  uStack_114 = 5;
  FUN_009a14d0((int *)&puStack_118);
  local_138 = local_12c;
  DAT_0105f8ec = &LAB_004528d0;
  DAT_0105f8f4 = 0;
  DAT_0105f8f0 = &LAB_00450c70;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"gnd_showterrain",0xf);
  local_134 = 0xf;
  local_138[0xf] = '\0';
  local_4._0_1_ = 0x1b;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"gnd_showniceness",0x10);
  local_134 = 0x10;
  local_138[0x10] = '\0';
  local_4._0_1_ = 0x1c;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"gnd_showgoodbits",0x10);
  local_134 = 0x10;
  local_138[0x10] = '\0';
  local_4._0_1_ = 0x1d;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"gnd_scuffthreshold",0x12);
  local_134 = 0x12;
  local_138[0x12] = '\0';
  local_4._0_1_ = 0x1e;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"gnd_wearthreshold",0x11);
  local_134 = 0x11;
  local_138[0x11] = '\0';
  local_4._0_1_ = 0x1f;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"gnd_wearlimit",0xd);
  local_134 = 0xd;
  local_138[0xd] = '\0';
  local_4._0_1_ = 0x20;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"gnd_scuffperiod",0xf);
  local_134 = 0xf;
  local_138[0xf] = '\0';
  local_4._0_1_ = 0x21;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x14;
  _strncpy(local_138,"gnd_overallscale",0x10);
  local_134 = 0x10;
  local_138[0x10] = '\0';
  local_4._0_1_ = 0x22;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_134 = 0;
  local_130 = 0x20;
  local_138 = _malloc(0x20);
  _strncpy(local_138,"gnd_nicenesszeropoint",0x15);
  local_134 = 0x15;
  local_138[0x15] = '\0';
  local_4._0_1_ = 0x23;
  CVarSystem_Register_STUBBED();
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  FUN_004506e0();
  TerrainBlobRenderer_Constructor();
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0045b760 @ 0045b760 ////

void __fastcall FUN_0045b760(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0045b790 @ 0045b790 ////

void FUN_0045b790(void)

{
  return;
}


//// FUNCTION FUN_0045b7b0 @ 0045b7b0 ////

void __fastcall FUN_0045b7b0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0045b7e0 @ 0045b7e0 ////

void FUN_0045b7e0(void)

{
  return;
}


//// FUNCTION FUN_0045b800 @ 0045b800 ////

int * __thiscall FUN_0045b800(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0045b820 @ 0045b820 ////

int * __thiscall FUN_0045b820(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0045b9a0 @ 0045b9a0 ////

void __thiscall FUN_0045b9a0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x60);
  return;
}


//// FUNCTION FUN_0045b9d0 @ 0045b9d0 ////

void __fastcall FUN_0045b9d0(int param_1)

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


//// FUNCTION FUN_0045ba40 @ 0045ba40 ////

void __fastcall FUN_0045ba40(int *param_1)

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
  puStack_8 = &LAB_00ca1cc8;
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


//// FUNCTION FUN_0045bb10 @ 0045bb10 ////

int __fastcall FUN_0045bb10(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca1ce8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x8c) == 0) {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = 0;
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0xcc) != 0) {
      pcVar4 = "gender_female";
      if (*(int *)(*(int *)(param_1 + 0xcc) + 0x4a0) != 0) {
        pcVar4 = "gender_male";
      }
      pcVar2 = pcVar4;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_c;
      FUN_004015d0(&local_2c,pcVar4,(int)pcVar2 - (int)(pcVar4 + 1));
    }
    iVar3 = FUN_009b5f90((undefined4 *)(param_1 + 0x68),0xffffffff,&local_2c);
    if (iVar3 != 0) {
      FUN_004036d0((void *)(param_1 + 0x88),*(wchar_t **)(iVar3 + 0x40),*(uint *)(iVar3 + 0x44));
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return param_1 + 0x88;
}


//// FUNCTION FUN_0045bbf0 @ 0045bbf0 ////

void __fastcall FUN_0045bbf0(int *param_1)

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
  puStack_8 = &LAB_00ca1d08;
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


//// FUNCTION FUN_0045bcc0 @ 0045bcc0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0045bcc0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (0.45 <= *(float *)(param_1 + 0x60)) {
    if ((0.55 < *(float *)(param_1 + 0x60)) && (*(int *)(param_1 + 0xac) != 0)) {
      puVar1 = (undefined4 *)FUN_0045bb10(*(int *)(param_1 + 0xac));
      return puVar1;
    }
  }
  else if (*(int *)(param_1 + 0xc4) != 0) {
    puVar1 = (undefined4 *)FUN_0045bb10(*(int *)(param_1 + 0xc4));
    return puVar1;
  }
  if ((DAT_00f88f2c & 1) == 0) {
    DAT_00f88f2c = DAT_00f88f2c | 1;
    DAT_00f88f0c = &DAT_00f88f18;
    _DAT_00f88f18 = 0;
    _DAT_00f88f10 = 0;
    DAT_00f88f14 = 10;
    uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&DAT_00f88f0c,(wchar_t *)&lpCaption_00d16918,uVar2);
    _atexit(FUN_00d10ed0);
  }
  return &DAT_00f88f0c;
}


//// FUNCTION FUN_0045bdd0 @ 0045bdd0 ////

void __fastcall FUN_0045bdd0(int param_1)

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


//// FUNCTION FUN_0045bdf0 @ 0045bdf0 ////

void __fastcall FUN_0045bdf0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1abd0;
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


//// FUNCTION FUN_0045be40 @ 0045be40 ////

void __fastcall FUN_0045be40(int param_1)

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
  puStack_8 = &LAB_00ca1d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Grudges.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x16;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("Opinion");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x28),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Grudges.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("ForgetRate");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2c),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Grudges.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 2;
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
  uVar3 = FUN_0098b490("Reason");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x30));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Grudges.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x19;
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
  uVar3 = FUN_0098b490("Readable");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x50));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Grudges.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 4;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x80));
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
    FUN_00990970((int *)(param_1 + 0x80));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION CGrudges_RegisterSaveFields @ 0045c2c0 ////

void __fastcall CGrudges_RegisterSaveFields(int param_1)

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
  puStack_8 = &LAB_00ca1d78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Grudges.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x61;
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
  uVar3 = FUN_0098b490("Happiness");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Grudges.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x62;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x90));
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
    FUN_00990970((int *)(param_1 + 0x90));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Grudges.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 99;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("Grudge");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x2c);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0045c5a0 @ 0045c5a0 ////

void __fastcall FUN_0045c5a0(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  int iVar4;
  float local_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca1d98;
  pvStack_c = ExceptionList;
  local_18 = &local_24;
  local_28 = 0.0;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d1abd0;
  local_10 = (undefined4 *)0x0;
  iVar4 = *(int *)(param_1 + 0x6c);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  ppvVar3 = &pvStack_c;
  if (iVar4 != param_1 + 0x78) {
    do {
      ExceptionList = ppvVar3;
      puVar2 = *(undefined4 **)(iVar4 + 8);
      (*(code *)local_24[1])();
      local_10 = puVar2;
      (*(code *)*local_24)();
      iVar4 = *(int *)(iVar4 + 4);
      local_10[0x18] = (float)local_10[0x19] + (float)local_10[0x18];
      if (0.0 <= (float)local_10[0x19] * (float)local_10[0x18]) {
        if ((undefined4 *)local_10[0x2b] != (undefined4 *)0x0) {
          *(undefined4 *)local_10[0x2b] = local_10[0x2a];
        }
        if (local_10[0x2a] != 0) {
          *(undefined4 *)(local_10[0x2a] + 4) = local_10[0x2b];
        }
        local_10[0x2a] = 0;
        local_10[0x2b] = 0;
        (**(code **)*local_10)(1);
      }
      if (local_10 != (undefined4 *)0x0) {
        if ((*(int *)(param_1 + 0xac) == 0) ||
           (*(float *)(*(int *)(param_1 + 0xac) + 0x60) < (float)local_10[0x18])) {
          (**(code **)(*(int *)(param_1 + 0x98) + 4))();
          *(undefined4 **)(param_1 + 0xac) = local_10;
          (*(code *)**(undefined4 **)(param_1 + 0x98))();
        }
        if ((*(int *)(param_1 + 0xc4) == 0) ||
           ((float)local_10[0x18] < *(float *)(*(int *)(param_1 + 0xc4) + 0x60))) {
          (**(code **)(*(int *)(param_1 + 0xb0) + 4))();
          *(undefined4 **)(param_1 + 0xc4) = local_10;
          (*(code *)**(undefined4 **)(param_1 + 0xb0))();
        }
        local_28 = local_28 + (float)local_10[0x18];
      }
      ppvVar3 = ExceptionList;
    } while (iVar4 != param_1 + 0x78);
  }
  local_28 = local_28 + 0.5;
  if (0.0 <= local_28) {
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
  }
  else {
    local_28 = 0.0;
  }
  *(float *)(param_1 + 0x60) = local_28;
  if ((*(int *)(param_1 + 0xac) != 0) &&
     (fVar1 = *(float *)(*(int *)(param_1 + 0xac) + 0x60), fVar1 < 0.0 != (fVar1 == 0.0))) {
    (**(code **)(*(int *)(param_1 + 0x98) + 4))();
    *(undefined4 *)(param_1 + 0xac) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x98))();
  }
  if ((*(int *)(param_1 + 0xc4) != 0) && (0.0 <= *(float *)(*(int *)(param_1 + 0xc4) + 0x60))) {
    (**(code **)(*(int *)(param_1 + 0xb0) + 4))();
    *(undefined4 *)(param_1 + 0xc4) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0xb0))();
  }
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION CGrudges_HasGrudge @ 0045c7f0 ////

uint __thiscall CGrudges_HasGrudge(void *this,undefined4 *param_1)

{
  byte bVar1;
  uint in_EAX;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)((int)this + 0x6c);
  if (iVar4 != (int)this + 0x78) {
    do {
      pbVar2 = *(byte **)(*(int *)(iVar4 + 8) + 0x68);
      pbVar3 = (byte *)*param_1;
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_0045c834:
          in_EAX = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_0045c839;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_0045c834;
        pbVar2 = pbVar2 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      in_EAX = 0;
LAB_0045c839:
      if (in_EAX == 0) {
        return 1;
      }
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != (int)this + 0x78);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_0045c860 @ 0045c860 ////

void __fastcall FUN_0045c860(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1ac40;
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


//// FUNCTION FUN_0045c8b0 @ 0045c8b0 ////

undefined4 * __thiscall FUN_0045c8b0(void *this,byte param_1)

{
  FUN_0045c860(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0045c8d0 @ 0045c8d0 ////

void __fastcall FUN_0045c8d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00ca1e14;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1ac6c;
  param_1[0xe] = &PTR_LAB_00d1ac4c;
  local_4 = 5;
  if ((undefined4 *)param_1[0x1b] != param_1 + 0x1e) {
    do {
      piVar1 = (int *)param_1[0x1e];
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
        (**(code **)*puVar2)(1);
      }
    } while ((undefined4 *)param_1[0x1b] != param_1 + 0x1e);
  }
  param_1[0x32] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x34] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x34] = param_1[0x33];
  }
  if (param_1[0x33] != 0) {
    *(undefined4 *)(param_1[0x33] + 4) = param_1[0x34];
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  if ((undefined4 *)param_1[0x34] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x34] = param_1[0x33];
  }
  if (param_1[0x33] != 0) {
    *(undefined4 *)(param_1[0x33] + 4) = param_1[0x34];
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x2c] = &PTR_FUN_00d1abd0;
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2e] = param_1[0x2d];
  }
  if (param_1[0x2d] != 0) {
    *(undefined4 *)(param_1[0x2d] + 4) = param_1[0x2e];
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2e] = param_1[0x2d];
  }
  if (param_1[0x2d] != 0) {
    *(undefined4 *)(param_1[0x2d] + 4) = param_1[0x2e];
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x26] = &PTR_FUN_00d1abd0;
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x28] = param_1[0x27];
  }
  if (param_1[0x27] != 0) {
    *(undefined4 *)(param_1[0x27] + 4) = param_1[0x28];
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x28] = param_1[0x27];
  }
  if (param_1[0x27] != 0) {
    *(undefined4 *)(param_1[0x27] + 4) = param_1[0x28];
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUN_0045c860(param_1 + 0x19);
  local_4 = local_4 & 0xffffff00;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0045caf0 @ 0045caf0 ////

undefined4 * __thiscall FUN_0045caf0(void *this,byte param_1)

{
  FUN_0045c8d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0045cb10 @ 0045cb10 ////

void __fastcall FUN_0045cb10(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1ac40;
  return;
}


//// FUNCTION FUN_0045cb70 @ 0045cb70 ////

undefined4 * __fastcall FUN_0045cb70(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1e88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d1ac94;
  param_1[0xe] = &PTR_LAB_00d1ac74;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = param_1 + 0x1d;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x14;
  param_1[0x22] = param_1 + 0x25;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 10;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = param_1 + 0x2e;
  param_1[0x2e] = &PTR_FUN_00d18c4c;
  param_1[0x33] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x2c] = param_1;
  FUN_00acdb9e(0xe500fc);
  iVar1 = FUN_0097dda0();
  param_1[0x2d] = iVar1;
  if (DAT_00e500f8 != '\0') {
    iVar1 = 0xa8;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe500fc);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    DAT_00e500f8 = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0045ccb0 @ 0045ccb0 ////

undefined4 * __thiscall FUN_0045ccb0(void *this,byte param_1)

{
  FUN_0045ccd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0045ccd0 @ 0045ccd0 ////

void __fastcall FUN_0045ccd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca1ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[0x2e] = &PTR_FUN_00d18c4c;
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
  if ((undefined4 *)param_1[0x2b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2b] = param_1[0x2a];
  }
  if (param_1[0x2a] != 0) {
    *(undefined4 *)(param_1[0x2a] + 4) = param_1[0x2b];
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  if (10 < (uint)param_1[0x24]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x22]);
  }
  if (0x14 < (uint)param_1[0x1c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1a]);
  }
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


//// FUNCTION FUN_0045ce00 @ 0045ce00 ////

undefined4 * __thiscall FUN_0045ce00(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1ee9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x38));
  *(undefined ***)this = &PTR_FUN_00d1ac6c;
  *(undefined4 *)((int)this + 0x38) = &PTR_LAB_00d1ac4c;
  *(undefined4 *)((int)this + 0x60) = 0x3f000000;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x80) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *puVar1 = (undefined4 *)((int)this + 0x68);
  *(undefined4 **)((int)this + 0x6c) = puVar1;
  *(undefined ***)((int)this + 100) = &PTR_LAB_00d1ac40;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined ***)((int)this + 0x98) = &PTR_FUN_00d1abd0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(int *)((int)this + 0xa4) = (int)this + 0x98;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 **)((int)this + 0xbc) = (undefined4 *)((int)this + 0xb0);
  *(undefined4 *)((int)this + 0xb0) = &PTR_FUN_00d1abd0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  piVar2 = (int *)((int)this + 0xcc);
  *(undefined4 *)((int)this + 0xd4) = 0;
  *piVar2 = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 **)((int)this + 0xd4) = (undefined4 *)((int)this + 200);
  *(undefined4 *)((int)this + 200) = &PTR_FUN_00d18c4c;
  *(int *)((int)this + 0xdc) = param_1;
  if (param_1 != 0) {
    piVar3 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0xd0) = piVar3;
    *piVar2 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar2;
    *piVar3 = (int)piVar2;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0045cf20 @ 0045cf20 ////

undefined4 * __fastcall FUN_0045cf20(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1f29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d1ac6c;
  param_1[0xe] = &PTR_LAB_00d1ac4c;
  param_1[0x18] = 0x3f000000;
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
  param_1[0x1b] = puVar1;
  *puVar1 = param_1 + 0x1a;
  param_1[0x19] = &PTR_LAB_00d1ac40;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x26] = &PTR_FUN_00d1abd0;
  param_1[0x29] = param_1 + 0x26;
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = param_1 + 0x2c;
  param_1[0x2c] = &PTR_FUN_00d1abd0;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x35] = param_1 + 0x32;
  param_1[0x32] = &PTR_FUN_00d18c4c;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION CGrudge_Constructor @ 0045d020 ////

undefined4 * __thiscall
CGrudge_Constructor(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4
                   )

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1f88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x38));
  *(undefined4 *)((int)this + 100) = param_2;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined ***)this = &PTR_FUN_00d1ac94;
  *(undefined4 *)((int)this + 0x38) = &PTR_LAB_00d1ac74;
  *(undefined4 *)((int)this + 0x68) = (undefined1 *)((int)this + 0x74);
  *(undefined1 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x68),(char *)*param_3,param_3[1]);
  *(undefined2 **)((int)this + 0x88) = (undefined2 *)((int)this + 0x94);
  *(undefined2 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 10;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  piVar1 = (int *)((int)this + 0xbc);
  *(undefined4 *)((int)this + 0xc4) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 **)((int)this + 0xc4) = (undefined4 *)((int)this + 0xb8);
  *(undefined4 *)((int)this + 0xb8) = &PTR_FUN_00d18c4c;
  *(int *)((int)this + 0xcc) = param_4;
  if (param_4 != 0) {
    piVar2 = (int *)(param_4 + 0x18);
    *(int **)((int)this + 0xc0) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  *(void **)((int)this + 0xb0) = this;
  FUN_00acdb9e(0xe500fc);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0xb4) = iVar3;
  if (s__PAVCGrudge_TM___00e50104[0x11] != '\0') {
    iVar3 = 0xa8;
    pcVar5 = "Link";
    pcVar4 = (char *)FUN_00acdb9e(0xe500fc);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    s__PAVCGrudge_TM___00e50104[0x11] = '\0';
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION CGrudges_AddOrRefreshGrudge @ 0045d180 ////

void __thiscall
CGrudges_AddOrRefreshGrudge(void *this,float param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1fab;
  local_c = ExceptionList;
  if ((param_1 != 0.0) && (DAT_010583e4 == '\0')) {
    iVar7 = *(int *)((int)this + 0x6c);
    if (iVar7 != (int)this + 0x78) {
      do {
        pbVar2 = *(byte **)(*(int *)(iVar7 + 8) + 0x68);
        pbVar6 = (byte *)*param_3;
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0045d1fc:
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0045d201;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0045d1fc;
          pbVar2 = pbVar2 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_0045d201:
        if (iVar3 == 0) {
          if (*(int *)(iVar7 + 8) != 0) {
            *(float *)(*(int *)(iVar7 + 8) + 0x60) = param_1;
            return;
          }
          break;
        }
        iVar7 = *(int *)(iVar7 + 4);
      } while (iVar7 != (int)this + 0x78);
    }
    ExceptionList = &local_c;
    this_00 = operator_new(0xd0);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = CGrudge_Constructor(this_00,param_1,param_2,param_3,*(int *)((int)this + 0xdc));
    }
    piVar5 = puVar4 + 0x2a;
    *piVar5 = (int)this + 0x68;
    puVar4[0x2b] = *(undefined4 *)((int)this + 0x6c);
    **(undefined4 **)((int)this + 0x6c) = piVar5;
    *(int **)((int)this + 0x6c) = piVar5;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION CStudioAI_RosterManager_Constructor @ 0045d2a0 ////

undefined4 * __fastcall CStudioAI_RosterManager_Constructor(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1fc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d1ac9c;
  local_4 = 0;
  if (DAT_0104a981 == '\0') {
    CStudioAI_SpawnDueRivalsAndScheduleDates('\x01');
    iVar1 = FUN_0045f420();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_0045f420();
      (**(code **)(*piVar2 + 0xc))();
    }
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION GameSession_InitEconomySystems @ 0045d330 ////

void GameSession_InitEconomySystems(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca1feb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  StudioReputation_Constructor();
  CityTraffic_Constructor();
  puVar1 = operator_new(100);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    DAT_00f88f30 = CStudioAI_RosterManager_Constructor(puVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_00f88f30 = (undefined4 *)0x0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0045d3a0 @ 0045d3a0 ////

undefined4 * __thiscall FUN_0045d3a0(void *this,byte param_1)

{
  thunk_FUN_0053c500(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0045d3d0 @ 0045d3d0 ////

void FUN_0045d3d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f88f30;
  if (DAT_00f88f30 != (undefined4 *)0x0) {
    iVar1 = DAT_00f88f30[0x12];
    DAT_00f88f30[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_00f88f30 = (undefined4 *)0x0;
  }
  FUN_0042f250();
  FUN_00512450();
  return;
}


//// FUNCTION FUN_0045d450 @ 0045d450 ////

void __thiscall FUN_0045d450(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xdc);
  param_1[1] = *(undefined4 *)((int)this + 0xe0);
  param_1[2] = *(undefined4 *)((int)this + 0xe4);
  return;
}


//// FUNCTION FUN_0045d480 @ 0045d480 ////

void __fastcall FUN_0045d480(int param_1)

{
  if (-1 < *(int *)(param_1 + 100)) {
    FUN_009b11d0(*(int *)(param_1 + 100));
  }
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd0) = 2;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  (**(code **)(*(int *)(param_1 + 0xb4) + 4))();
  *(undefined4 *)(param_1 + 200) = 0;
                    /* WARNING: Could not recover jumptable at 0x0045d4cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(param_1 + 0xb4))();
  return;
}


//// FUNCTION FUN_0045d4d0 @ 0045d4d0 ////

void __fastcall FUN_0045d4d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca2008;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1acc0;
  local_4 = 0;
  piVar4 = param_1 + 0x1e;
  iVar3 = 4;
  do {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_4 = 0xffffffff;
  FUN_0053ddb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0045d550 @ 0045d550 ////

void FUN_0045d550(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f88f34;
  if (DAT_00f88f34 != (undefined4 *)0x0) {
    iVar1 = DAT_00f88f34[0x12];
    DAT_00f88f34[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_00f88f34 = (undefined4 *)0x0;
  }
  return;
}


//// FUNCTION FUN_0045d590 @ 0045d590 ////

void __thiscall FUN_0045d590(void *this,int param_1)

{
  void *this_00;
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined1 *puVar5;
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
  
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  local_c = 0;
  local_8 = 0;
  local_20 = 0xffffffff;
  local_4 = 0;
  if (*(int *)(param_1 + 0x4a0) == 0) {
    uVar1 = *(undefined4 *)((int)this + 0x74);
  }
  else {
    uVar1 = *(undefined4 *)((int)this + 0x94);
  }
  local_24 = FUN_009b01a0(uVar1);
  local_1c = *(undefined4 *)((int)this + 0x68);
  local_28 = local_28 | 1;
  puVar5 = &DAT_00d17518;
  local_18 = *(undefined4 *)((int)this + 0x6c);
  local_14 = *(undefined4 *)((int)this + 0x70);
  puVar3 = &local_28;
  iVar4 = 0;
  iVar2 = 2;
  this_00 = (void *)FUN_004f3b20();
  uVar1 = FUN_004f3270(this_00,iVar2,(byte *)puVar3,iVar4,puVar5);
  *(undefined4 *)((int)this + 100) = uVar1;
  FUN_009b10a0(uVar1,0);
  *(undefined4 *)((int)this + 0xcc) = 0;
  (**(code **)(*(int *)((int)this + 0xb4) + 4))();
  *(int *)((int)this + 200) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xb4))();
  *(undefined4 *)((int)this + 0xd4) = 2;
  return;
}


//// FUNCTION FUN_0045d680 @ 0045d680 ////

void __fastcall FUN_0045d680(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  fVar2 = *(float *)(param_1 + 0xcc) + 1.0;
  *(float *)(param_1 + 0xcc) = fVar2;
  *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + -1;
  if (*(int *)(param_1 + 0xd0) == 0) {
    if (fVar2 * 0.1 <= 1.0) {
      FUN_009b10a0(*(undefined4 *)(param_1 + 100),fVar2 * 0.1);
    }
    else {
      *(undefined4 *)(param_1 + 0xd0) = 1;
      FUN_009b10a0(*(undefined4 *)(param_1 + 100),0x3f800000);
    }
  }
  else if (*(int *)(param_1 + 0xd0) == 2) {
    iVar1 = *(int *)(param_1 + 100);
    if (fVar2 * 0.1 <= 1.0) {
      FUN_009b10a0(iVar1,1.0 - fVar2 * 0.1);
    }
    else {
      *(undefined4 *)(param_1 + 0xd0) = 3;
      if (-1 < iVar1) {
        FUN_009b11d0(iVar1);
      }
      *(undefined4 *)(param_1 + 100) = 0xffffffff;
    }
  }
  if (*(int **)(param_1 + 200) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 200) + 0x34))(&local_c);
    uStack_4 = 0x3f800000;
    FUN_009b0880(*(undefined4 *)(param_1 + 100),&local_c);
    *(undefined4 *)(param_1 + 0x68) = local_c;
    *(undefined4 *)(param_1 + 0x6c) = uStack_8;
    *(undefined4 *)(param_1 + 0x70) = uStack_4;
  }
  if ((((*(int *)(param_1 + 200) == 0) || (*(int *)(param_1 + 0xd4) < 1)) &&
      (*(int *)(param_1 + 0xd0) != 2)) && (*(int *)(param_1 + 0xd0) != 3)) {
    FUN_0045d480(param_1);
  }
  return;
}


//// FUNCTION FUN_0045d7d0 @ 0045d7d0 ////

undefined4 * __thiscall FUN_0045d7d0(void *this,byte param_1)

{
  FUN_0045d4d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0045d7f0 @ 0045d7f0 ////

void __thiscall FUN_0045d7f0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)((int)this + 0x78);
  iVar1 = 0;
  piVar2 = piVar3;
  do {
    if (*(int *)(*piVar2 + 200) == param_1) {
      *(undefined4 *)(*(int *)((int)this + iVar1 * 4 + 0x78) + 0xd4) = 2;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 4);
  iVar1 = 0;
  do {
    if (*(int *)(*piVar3 + 0xd0) == 3) {
      FUN_0045d590(*(void **)((int)this + iVar1 * 4 + 0x78),param_1);
      return;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 < 4);
  return;
}


//// FUNCTION FUN_0045d860 @ 0045d860 ////

void __fastcall FUN_0045d860(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca204f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1ace8;
  local_4 = 3;
  if (-1 < (int)param_1[0x19]) {
    FUN_009b11d0(param_1[0x19]);
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0xffffffff;
  param_1[0x1c] = 0xc2c80000;
  param_1[0x34] = 3;
  param_1[0x35] = 0;
  param_1[0x2d] = &PTR_FUN_00d165ac;
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
  if (0x14 < (uint)param_1[0x27]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x25]);
  }
  if (0x14 < (uint)param_1[0x1f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1d]);
  }
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0045d9b0 @ 0045d9b0 ////

undefined4 * __thiscall FUN_0045d9b0(void *this,byte param_1)

{
  FUN_0045d860(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0045d9d0 @ 0045d9d0 ////

undefined4 * __fastcall FUN_0045d9d0(undefined4 *param_1)

{
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d1ace8;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = param_1 + 0x20;
  param_1[0x1f] = 0x14;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x27] = 0x14;
  param_1[0x26] = 0;
  param_1[0x25] = param_1 + 0x28;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = param_1 + 0x2d;
  param_1[0x2d] = &PTR_FUN_00d165ac;
  param_1[0x32] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xc2c80000;
  param_1[0x19] = 0xffffffff;
  param_1[0x34] = 3;
  param_1[0x35] = 0;
  return param_1;
}


//// FUNCTION FUN_0045da80 @ 0045da80 ////

undefined4 * __fastcall FUN_0045da80(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2073;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(param_1);
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_00d1acc0;
  param_1[0x22] = 0x41200000;
  puVar4 = param_1 + 0x1e;
  iVar3 = 4;
  do {
    local_4._0_1_ = 0;
    puVar1 = operator_new(0xd8);
    local_4._0_1_ = 1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_0045d9d0(puVar1);
    }
    *puVar4 = puVar1;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
    local_4._0_1_ = 0;
  } while (iVar3 != 0);
  iVar3 = param_1[0x1e];
  piVar5 = (int *)(iVar3 + 0x74);
  if (*(uint *)(iVar3 + 0x7c) < 0xe) {
    if (0x14 < *(uint *)(iVar3 + 0x7c)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar5);
    }
    *(undefined4 *)(iVar3 + 0x7c) = 0x20;
    pvVar2 = _malloc(0x20);
    *piVar5 = (int)pvVar2;
  }
  _strncpy((char *)*piVar5,"HUBUB_MALE_01",0xd);
  *(undefined4 *)(iVar3 + 0x78) = 0xd;
  *(undefined1 *)(*piVar5 + 0xd) = 0;
  iVar3 = param_1[0x1f];
  piVar5 = (int *)(iVar3 + 0x74);
  if (*(uint *)(iVar3 + 0x7c) < 0xe) {
    if (0x14 < *(uint *)(iVar3 + 0x7c)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar5);
    }
    *(undefined4 *)(iVar3 + 0x7c) = 0x20;
    pvVar2 = _malloc(0x20);
    *piVar5 = (int)pvVar2;
  }
  _strncpy((char *)*piVar5,"HUBUB_MALE_02",0xd);
  *(undefined4 *)(iVar3 + 0x78) = 0xd;
  *(undefined1 *)(*piVar5 + 0xd) = 0;
  iVar3 = param_1[0x20];
  piVar5 = (int *)(iVar3 + 0x74);
  if (*(uint *)(iVar3 + 0x7c) < 0xe) {
    if (0x14 < *(uint *)(iVar3 + 0x7c)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar5);
    }
    *(undefined4 *)(iVar3 + 0x7c) = 0x20;
    pvVar2 = _malloc(0x20);
    *piVar5 = (int)pvVar2;
  }
  _strncpy((char *)*piVar5,"HUBUB_MALE_03",0xd);
  *(undefined4 *)(iVar3 + 0x78) = 0xd;
  *(undefined1 *)(*piVar5 + 0xd) = 0;
  iVar3 = param_1[0x21];
  piVar5 = (int *)(iVar3 + 0x74);
  if (*(uint *)(iVar3 + 0x7c) < 0xe) {
    if (0x14 < *(uint *)(iVar3 + 0x7c)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar5);
    }
    *(undefined4 *)(iVar3 + 0x7c) = 0x20;
    pvVar2 = _malloc(0x20);
    *piVar5 = (int)pvVar2;
  }
  _strncpy((char *)*piVar5,"HUBUB_MALE_04",0xd);
  *(undefined4 *)(iVar3 + 0x78) = 0xd;
  *(undefined1 *)(*piVar5 + 0xd) = 0;
  iVar3 = param_1[0x1e];
  piVar5 = (int *)(iVar3 + 0x94);
  if (*(uint *)(iVar3 + 0x9c) < 0x10) {
    if (0x14 < *(uint *)(iVar3 + 0x9c)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar5);
    }
    *(undefined4 *)(iVar3 + 0x9c) = 0x20;
    pvVar2 = _malloc(0x20);
    *piVar5 = (int)pvVar2;
  }
  _strncpy((char *)*piVar5,"HUBUB_FEMALE_01",0xf);
  *(undefined4 *)(iVar3 + 0x98) = 0xf;
  *(undefined1 *)(*piVar5 + 0xf) = 0;
  iVar3 = param_1[0x1f];
  piVar5 = (int *)(iVar3 + 0x94);
  if (*(uint *)(iVar3 + 0x9c) < 0x10) {
    if (0x14 < *(uint *)(iVar3 + 0x9c)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar5);
    }
    *(undefined4 *)(iVar3 + 0x9c) = 0x20;
    pvVar2 = _malloc(0x20);
    *piVar5 = (int)pvVar2;
  }
  _strncpy((char *)*piVar5,"HUBUB_FEMALE_02",0xf);
  *(undefined4 *)(iVar3 + 0x98) = 0xf;
  *(undefined1 *)(*piVar5 + 0xf) = 0;
  iVar3 = param_1[0x20];
  piVar5 = (int *)(iVar3 + 0x94);
  if (*(uint *)(iVar3 + 0x9c) < 0x10) {
    if (0x14 < *(uint *)(iVar3 + 0x9c)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar5);
    }
    *(undefined4 *)(iVar3 + 0x9c) = 0x20;
    pvVar2 = _malloc(0x20);
    *piVar5 = (int)pvVar2;
  }
  _strncpy((char *)*piVar5,"HUBUB_FEMALE_03",0xf);
  *(undefined4 *)(iVar3 + 0x98) = 0xf;
  *(undefined1 *)(*piVar5 + 0xf) = 0;
  iVar3 = param_1[0x21];
  piVar5 = (int *)(iVar3 + 0x94);
  if (*(uint *)(iVar3 + 0x9c) < 0x10) {
    if (0x14 < *(uint *)(iVar3 + 0x9c)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar5);
    }
    *(undefined4 *)(iVar3 + 0x9c) = 0x20;
    pvVar2 = _malloc(0x20);
    *piVar5 = (int)pvVar2;
  }
  _strncpy((char *)*piVar5,"HUBUB_FEMALE_04",0xf);
  *(undefined4 *)(iVar3 + 0x98) = 0xf;
  *(undefined1 *)(*piVar5 + 0xf) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0045dd90 @ 0045dd90 ////

void __fastcall FUN_0045dd90(void *param_1)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  uint uVar5;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_00f88f38 < 0x32) {
    DAT_00f88f38 = DAT_00f88f38 + 1;
    return;
  }
  local_c = *(float *)(DAT_00f87aa0 + 0xdc);
  local_8 = *(undefined4 *)(DAT_00f87aa0 + 0xe0);
  local_4 = *(undefined4 *)(DAT_00f87aa0 + 0xe4);
  pvVar3 = FUN_00458d80(DAT_00f88720,&local_c,10.0);
  piVar4 = *(int **)((int)pvVar3 + 4);
  uVar5 = 0;
  if (piVar4 != *(int **)((int)pvVar3 + 8)) {
    do {
      if (3 < uVar5) {
        return;
      }
      piVar1 = (int *)*piVar4;
      if ((((7 < piVar1[0x131]) || ((char)piVar1[0x1cb] == '\0')) &&
          (cVar2 = (**(code **)(*piVar1 + 0x13c))(), cVar2 != '\0')) &&
         ((*(int *)((int)pvVar3 + 4) != 0 &&
          (1 < (uint)(*(int *)((int)pvVar3 + 8) - *(int *)((int)pvVar3 + 4) >> 2))))) {
        FUN_0045d7f0(param_1,(int)piVar1);
      }
      piVar4 = piVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (piVar4 != *(int **)((int)pvVar3 + 8));
  }
  return;
}


//// FUNCTION FUN_0045de50 @ 0045de50 ////

void FUN_0045de50(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca208b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x8c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    DAT_00f88f34 = FUN_0045da80(puVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_00f88f34 = (undefined4 *)0x0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0045df10 @ 0045df10 ////

void __fastcall FUN_0045df10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1ad88;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  param_1[4] = 0;
  return;
}


//// FUNCTION Input_CheckGlobalShortcuts @ 0045df30 ////

void __fastcall Input_CheckGlobalShortcuts(int param_1)

{
  SHORT SVar1;
  HWND pHVar2;
  
  pHVar2 = GetForegroundWindow();
  if (((((pHVar2 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(0x1b), SVar1 < 0)) ||
       ((pHVar2 = GetForegroundWindow(), pHVar2 == DAT_0105beb0 &&
        (SVar1 = GetAsyncKeyState(0x20), SVar1 < 0)))) ||
      ((pHVar2 = GetForegroundWindow(), pHVar2 == DAT_0105beb0 &&
       (SVar1 = GetAsyncKeyState(0xd), SVar1 < 0)))) && (DAT_00f88f3c == '\0')) {
    *(undefined1 *)(param_1 + 0x14) = 1;
    DAT_00f88f3c = '\x01';
  }
  pHVar2 = GetForegroundWindow();
  if ((pHVar2 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(0x1b), SVar1 < 0)) {
    return;
  }
  pHVar2 = GetForegroundWindow();
  if ((pHVar2 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(0x20), SVar1 < 0)) {
    return;
  }
  pHVar2 = GetForegroundWindow();
  if ((pHVar2 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(0xd), SVar1 < 0)) {
    return;
  }
  DAT_00f88f3c = 0;
  return;
}


//// FUNCTION FUN_0045e000 @ 0045e000 ////

undefined4 * __thiscall FUN_0045e000(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00d1ad88;
  if (*(undefined4 **)((int)this + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x10))(1);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ProcessIntroOrMenuState @ 0045e050 ////

void __fastcall ProcessIntroOrMenuState(int param_1)

{
  if (*(char *)(param_1 + 0x16) == '\0') {
    LH_State_IntroSplashScreen();
    return;
  }
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    QueueRenderPrimitive(*(undefined4 **)(param_1 + 0xc));
    return;
  }
  return;
}


//// FUNCTION FUN_0045e090 @ 0045e090 ////

void __thiscall FUN_0045e090(void *this,char *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca20b3;
  pvStack_c = ExceptionList;
  DAT_0105cc5c = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0099bb50(param_1,0,0,0,'\0');
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 0xc));
}


//// FUNCTION FUN_0045e1d0 @ 0045e1d0 ////

void __fastcall FUN_0045e1d0(int param_1)

{
  void *_Memory;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  _Memory = *(void **)(*(int *)(param_1 + 0xc) + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0xc));
}


//// FUNCTION GameStateManager_Constructor @ 0045e220 ////

undefined4 * __fastcall GameStateManager_Constructor(undefined4 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca20c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d1ad88;
  puVar1 = MediaPlayer_Constructor();
  param_1[4] = puVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_2c = local_20;
  *(bool *)((int)param_1 + 0x16) = DAT_0105be08 == 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"Open Count",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  lVar2 = Config_GetOrCreateInt(g_configRegistryPath,&local_2c,0);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(bool *)((int)param_1 + 0x15) = 1 < lVar2;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0045e2f0 @ 0045e2f0 ////

void __thiscall FUN_0045e2f0(void *this,int param_1)

{
  DWORD DVar1;
  char *pcVar2;
  
  if (param_1 == *(int *)((int)this + 4)) {
    return;
  }
  switch(param_1) {
  case 0:
  case 6:
    *(undefined1 *)((int)this + 0x14) = 0;
  default:
    *(int *)((int)this + 4) = param_1;
    return;
  case 1:
    *(undefined1 *)((int)this + 0x14) = 0;
    if (*(char *)((int)this + 0x16) == '\0') {
      LogoScreen_Initialize();
      *(int *)((int)this + 4) = param_1;
      return;
    }
    pcVar2 = "ui/lionhead_splash.dds";
    break;
  case 2:
    *(undefined1 *)((int)this + 0x14) = 0;
    if (*(char *)((int)this + 0x16) == '\0') {
      (**(code **)(**(int **)((int)this + 0x10) + 8))(L"data/intro/atvi_logo.wmv",0,0,0,0);
      (**(code **)(**(int **)((int)this + 0x10) + 0x18))();
      *(int *)((int)this + 4) = param_1;
      return;
    }
    pcVar2 = "ui/activision_screen.dds";
    break;
  case 3:
    *(undefined1 *)((int)this + 0x14) = 0;
    pcVar2 = "ui/intel_splash.dds";
    break;
  case 4:
    *(undefined1 *)((int)this + 0x14) = 0;
    pcVar2 = "ui/ati_splash.dds";
    break;
  case 5:
    *(undefined1 *)((int)this + 0x14) = 0;
    FUN_0045e090(this,"legal/chineselegal.jpg");
    DVar1 = GetTickCount();
    *(int *)((int)this + 4) = param_1;
    *(DWORD *)((int)this + 8) = DVar1 + 12000;
    return;
  }
  FUN_0045e090(this,pcVar2);
  DVar1 = GetTickCount();
  *(int *)((int)this + 4) = param_1;
  *(DWORD *)((int)this + 8) = DVar1 + 3000;
  return;
}


//// FUNCTION UpdateIntroSplashScreens @ 0045e3f0 ////

uint __fastcall UpdateIntroSplashScreens(void *param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  
  uVar2 = *(uint *)((int)param_1 + 4);
  switch(uVar2) {
  case 0:
    iVar1 = FUN_009b4250();
    uVar2 = *(uint *)((int)param_1 + 4);
    if (iVar1 == 0xd) {
      if (uVar2 != 5) {
        *(undefined1 *)((int)param_1 + 0x14) = 0;
        FUN_0045e090(param_1,"legal/chineselegal.jpg");
        DVar3 = GetTickCount();
        *(undefined4 *)((int)param_1 + 4) = 5;
        *(DWORD *)((int)param_1 + 8) = DVar3 + 12000;
        return DVar3 + 12000 & 0xffffff00;
      }
    }
    else if (uVar2 != 1) {
      *(undefined1 *)((int)param_1 + 0x14) = 0;
      if (*(char *)((int)param_1 + 0x16) != '\0') {
        FUN_0045e090(param_1,"ui/lionhead_splash.dds");
        DVar3 = GetTickCount();
        *(DWORD *)((int)param_1 + 8) = DVar3 + 3000;
        *(undefined4 *)((int)param_1 + 4) = 1;
        return DVar3 + 3000 & 0xffffff00;
      }
LAB_0045e6ec:
      uVar2 = LogoScreen_Initialize();
      *(undefined4 *)((int)param_1 + 4) = 1;
      return uVar2 & 0xffffff00;
    }
    break;
  case 1:
    if (*(char *)((int)param_1 + 0x16) == '\0') {
      uVar2 = FUN_009ec720();
      if (((char)uVar2 != '\0') && (uVar2 = *(uint *)((int)param_1 + 4), uVar2 != 2)) {
        *(undefined1 *)((int)param_1 + 0x14) = 0;
        if (*(char *)((int)param_1 + 0x16) != '\0') {
          FUN_0045e090(param_1,"ui/activision_screen.dds");
          DVar3 = GetTickCount();
          *(DWORD *)((int)param_1 + 8) = DVar3 + 3000;
          *(undefined4 *)((int)param_1 + 4) = 2;
          return DVar3 + 3000 & 0xffffff00;
        }
LAB_0045e4ec:
        (**(code **)(**(int **)((int)param_1 + 0x10) + 8))(L"data/intro/atvi_logo.wmv",0,0,0,0);
        uVar2 = (**(code **)(**(int **)((int)param_1 + 0x10) + 0x18))();
        *(undefined4 *)((int)param_1 + 4) = 2;
        return uVar2 & 0xffffff00;
      }
    }
    else if ((*(char *)((int)param_1 + 0x14) != '\0') ||
            (uVar2 = GetTickCount(), *(uint *)((int)param_1 + 8) <= uVar2)) {
      FUN_0045e1d0((int)param_1);
      uVar2 = *(uint *)((int)param_1 + 4);
      if (uVar2 != 2) {
        *(undefined1 *)((int)param_1 + 0x14) = 0;
        if (*(char *)((int)param_1 + 0x16) != '\0') {
          FUN_0045e090(param_1,"ui/activision_screen.dds");
          DVar3 = GetTickCount();
          *(DWORD *)((int)param_1 + 8) = DVar3 + 3000;
          *(undefined4 *)((int)param_1 + 4) = 2;
          return DVar3 + 3000 & 0xffffff00;
        }
        goto LAB_0045e4ec;
      }
    }
    break;
  case 2:
    if (*(char *)((int)param_1 + 0x16) == '\0') {
      Sleep(10);
      if (*(char *)((int)param_1 + 0x14) != '\0') {
        (**(code **)(**(int **)((int)param_1 + 0x10) + 0x1c))();
      }
      if (((*(int **)((int)param_1 + 0x10) == (int *)0x0) ||
          (uVar2 = (**(code **)(**(int **)((int)param_1 + 0x10) + 0x28))(), (char)uVar2 != '\0')) &&
         (uVar2 = *(uint *)((int)param_1 + 4), uVar2 != 3)) {
        *(undefined1 *)((int)param_1 + 0x14) = 0;
        FUN_0045e090(param_1,"ui/intel_splash.dds");
        DVar3 = GetTickCount();
        *(undefined4 *)((int)param_1 + 4) = 3;
        *(DWORD *)((int)param_1 + 8) = DVar3 + 3000;
        return DVar3 + 3000 & 0xffffff00;
      }
    }
    else if ((*(char *)((int)param_1 + 0x14) != '\0') ||
            (uVar2 = GetTickCount(), *(uint *)((int)param_1 + 8) <= uVar2)) {
      FUN_0045e1d0((int)param_1);
      uVar2 = *(uint *)((int)param_1 + 4);
      if (uVar2 != 3) {
        *(undefined1 *)((int)param_1 + 0x14) = 0;
        FUN_0045e090(param_1,"ui/intel_splash.dds");
        DVar3 = GetTickCount();
        uVar2 = DVar3 + 3000;
        *(undefined4 *)((int)param_1 + 4) = 3;
        *(uint *)((int)param_1 + 8) = uVar2;
      }
    }
    break;
  case 3:
    if (((*(char *)((int)param_1 + 0x14) != '\0') && (*(char *)((int)param_1 + 0x15) != '\0')) ||
       (uVar2 = GetTickCount(), *(uint *)((int)param_1 + 8) <= uVar2)) {
      FUN_0045e1d0((int)param_1);
      uVar2 = *(uint *)((int)param_1 + 4);
      if (uVar2 != 4) {
        *(undefined1 *)((int)param_1 + 0x14) = 0;
        FUN_0045e090(param_1,"ui/ati_splash.dds");
        DVar3 = GetTickCount();
        *(undefined4 *)((int)param_1 + 4) = 4;
        *(DWORD *)((int)param_1 + 8) = DVar3 + 3000;
        return DVar3 + 3000 & 0xffffff00;
      }
    }
    break;
  case 4:
    if ((((*(char *)((int)param_1 + 0x14) != '\0') && (*(char *)((int)param_1 + 0x15) != '\0')) ||
        (uVar2 = GetTickCount(), *(uint *)((int)param_1 + 8) <= uVar2)) &&
       (uVar2 = FUN_0045e1d0((int)param_1), *(int *)((int)param_1 + 4) != 6)) {
      *(undefined4 *)((int)param_1 + 4) = 6;
      *(undefined1 *)((int)param_1 + 0x14) = 0;
      return uVar2 & 0xffffff00;
    }
    break;
  case 5:
    if ((*(char *)((int)param_1 + 0x14) != '\0') ||
       (uVar2 = GetTickCount(), *(uint *)((int)param_1 + 8) <= uVar2)) {
      FUN_0045e1d0((int)param_1);
      uVar2 = 0;
      if (*(int *)((int)param_1 + 4) != 1) {
        *(undefined1 *)((int)param_1 + 0x14) = 0;
        if (*(char *)((int)param_1 + 0x16) != '\0') {
          FUN_0045e090(param_1,"ui/lionhead_splash.dds");
          DVar3 = GetTickCount();
          *(DWORD *)((int)param_1 + 8) = DVar3 + 3000;
          *(undefined4 *)((int)param_1 + 4) = 1;
          return DVar3 + 3000 & 0xffffff00;
        }
        goto LAB_0045e6ec;
      }
    }
    break;
  case 6:
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION LH_MasterGameLoop @ 0045e720 ////

uint LH_MasterGameLoop(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  undefined4 *GameStateManager;
  tagMSG local_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* LH_MasterGameLoop - NOT an alternate game loop. Confirmed 2026-10-01: this is
                       a self-contained intro/splash-screen loop with its own PeekMessageA/
                       TranslateMessage/DispatchMessageA message pump and its own GameStateManager
                       object (constructed fresh each call via GameStateManager_Constructor). Per-
                       iteration it calls UpdateIntroSplashScreens(GameStateManager) and
                       Input_CheckGlobalShortcuts(), then switches on GameStateManager[1]:
                         case 1 -> LH_State_IntroSplashScreen() (only if GameStateManager+0x16 byte
                       is 0)
                         case 2 -> virtual call through GameStateManager[4]'s vtable slot 0x2c
                       (ditto gate)
                         case 3/4/5 -> shared fallthrough: QueueRenderPrimitive(GameStateManager[3])
                       Loop exits (and calls a virtual "finalize" method via GameStateManager's own
                       vtable slot 0, passing 1) when WM_QUIT/WM_CLOSE(0x10 or 0x12) is seen OR
                       UpdateIntroSplashScreens() signals completion via its return value.
                       
                       Crucially, this function NEVER calls Game_MainLoop and NEVER touches
                       Game_TickOneFrame - it is a fully separate code path. In WinMain, it only
                       runs in the `else` branch (when FUN_004ef580() is false), and WinMain falls
                       back to calling Game_MainLoop() directly only if LH_MasterGameLoop() returns
                       false - so in the common case this IS the real, normally-taken path for
                       showing the startup splash/logo sequence before the real game loop starts,
                       not dead/legacy code.
                       
                       Runtime implication (debugger DLL, 2026-10-01 session): the ~27s gap between
                       DLL attach and the first Game_TickOneFrame state-change log is almost
                       certainly time spent entirely inside this function (the Lionhead Studios
                       logo sequence) - Game_TickOneFrame can't fire until this returns and
                       Game_MainLoop actually starts. This corrects an earlier (wrong) guess that
                       logged state "2" (a 37s dwell right after the first state change) was the
                       logo - it isn't, since by the time Game_TickOneFrame can log anything at
                       all, this function has already finished. State 2 is more likely a loading
                       screen for the save file instead. See project_the_movies_re.md for the full
                       correction. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca20eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x18);
  GameStateManager = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    GameStateManager = GameStateManager_Constructor(puVar2);
  }
  local_4 = 0xffffffff;
  do {
    bVar1 = false;
    iVar3 = PeekMessageA(&local_28,(HWND)0x0,0,0,1);
    while (iVar3 != 0) {
      switch(local_28.message) {
      case 8:
      case 0x105:
        break;
      default:
        TranslateMessage(&local_28);
        DispatchMessageA(&local_28);
        break;
      case 0x10:
      case 0x12:
        bVar1 = true;
      }
      iVar3 = PeekMessageA(&local_28,(HWND)0x0,0,0,1);
    }
    uVar4 = UpdateIntroSplashScreens(GameStateManager);
    Input_CheckGlobalShortcuts((int)GameStateManager);
    FUN_009a56b0(0xff000000,'\x01');
    FUN_009a1410();
    switch(GameStateManager[1]) {
    case 1:
      if (*(char *)((int)GameStateManager + 0x16) != '\0') goto switchD_0045e816_caseD_3;
      LH_State_IntroSplashScreen();
      break;
    case 2:
      if (*(char *)((int)GameStateManager + 0x16) != '\0') goto switchD_0045e816_caseD_3;
      (**(code **)(*(int *)GameStateManager[4] + 0x2c))();
      break;
    case 3:
    case 4:
    case 5:
switchD_0045e816_caseD_3:
      if ((undefined4 *)GameStateManager[3] != (undefined4 *)0x0) {
        QueueRenderPrimitive((undefined4 *)GameStateManager[3]);
      }
    }
    FUN_009a1460();
    FUN_009a6360();
    if (bVar1 || (char)uVar4 != '\0') {
      uVar5 = (**(code **)*GameStateManager)(1);
      ExceptionList = (void *)local_28.pt.y;
      return CONCAT31((int3)((uint)uVar5 >> 8),(char)((uint)unaff_EBX >> 0x18));
    }
  } while( true );
}


//// FUNCTION FUN_0045e9a0 @ 0045e9a0 ////

void FUN_0045e9a0(void)

{
  return;
}


//// FUNCTION FUN_0045e9d0 @ 0045e9d0 ////

float10 __cdecl FUN_0045e9d0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float local_4;
  
  piVar2 = param_2;
  local_4 = 0.0;
  iVar1 = (**(code **)(*param_2 + 0x270))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x270))();
    pfVar3 = (float *)(**(code **)(*piVar2 + 0x1cc))(&param_2);
    local_4 = *pfVar3;
  }
  piVar2 = param_1;
  param_2 = (int *)0x0;
  iVar1 = (**(code **)(*param_1 + 0x270))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x270))();
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x1cc))(&param_1);
    param_2 = (int *)*puVar4;
  }
  if ((float)param_2 < local_4) {
    return ((float10)local_4 - (float10)(float)param_2) / (float10)local_4;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_0045ea70 @ 0045ea70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ea70(void)

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
  puStack_8 = &LAB_00ca2142;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00559fb0(local_e4);
  local_104 = local_f8;
  local_4 = 0;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"jealousy",8);
  local_100 = 8;
  local_104[8] = '\0';
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
  _strncpy(local_104,"jealousy",8);
  local_100 = 8;
  local_104[8] = '\0';
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
  _strncpy(local_104,"Money",5);
  local_100 = 5;
  local_104[5] = '\0';
  local_4._0_1_ = 3;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f88f50 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"Trailer",7);
  local_100 = 7;
  local_104[7] = '\0';
  local_4._0_1_ = 4;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f88f54 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"Love",4);
  local_100 = 4;
  local_104[4] = '\0';
  local_4 = CONCAT31(local_4._1_3_,5);
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f88f4c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0045ed00 @ 0045ed00 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0045ed00(float *param_1,int *param_2,int *param_3)

{
  float fVar1;
  float10 fVar2;
  
  _DAT_00f88f44 = 0.0;
  _DAT_00f88f40 = 0.0;
  fVar2 = FUN_0045e9d0(param_2,param_3);
  _DAT_00f88f48 = (float)fVar2;
  fVar1 = _DAT_00f88f54 * _DAT_00f88f48 +
          _DAT_00f88f50 * _DAT_00f88f44 + _DAT_00f88f4c * _DAT_00f88f40;
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


//// FUNCTION FUN_0045ed90 @ 0045ed90 ////

void __fastcall FUN_0045ed90(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0045edc0 @ 0045edc0 ////

void FUN_0045edc0(void)

{
  return;
}


//// FUNCTION FUN_0045ee70 @ 0045ee70 ////

void __fastcall FUN_0045ee70(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0045eec0 @ 0045eec0 ////

undefined4 FUN_0045eec0(void)

{
  return DAT_00f88f58;
}


//// FUNCTION FUN_0045eed0 @ 0045eed0 ////

undefined4 FUN_0045eed0(void)

{
  return DAT_00f88f5c;
}


//// FUNCTION FUN_0045eee0 @ 0045eee0 ////

undefined4 FUN_0045eee0(void)

{
  return DAT_00f88f60;
}


//// FUNCTION FUN_0045eef0 @ 0045eef0 ////

int * __thiscall FUN_0045eef0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0045ef60 @ 0045ef60 ////

int * __thiscall FUN_0045ef60(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0045efa0 @ 0045efa0 ////

int * __thiscall FUN_0045efa0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0045f090 @ 0045f090 ////

int __fastcall FUN_0045f090(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x98); iVar1 != param_1 + 0xa4; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


//// FUNCTION FUN_0045f110 @ 0045f110 ////

void FUN_0045f110(void)

{
  FUN_0098fdd0("PLeagueStar",&DAT_00f88f64);
  FUN_0098fdd0("PLeagueMovie",&DAT_00f88f7c);
  FUN_0098fdd0("PLeagueStudio",&DAT_00f88f94);
  return;
}


//// FUNCTION FUN_0045f150 @ 0045f150 ////

void FUN_0045f150(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f88f78;
  if (DAT_00f88f78 != (undefined4 *)0x0) {
    iVar1 = DAT_00f88f78[0x12];
    DAT_00f88f78[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f88f64[1])();
    DAT_00f88f78 = (undefined4 *)0x0;
    (*(code *)*DAT_00f88f64)();
  }
  puVar2 = DAT_00f88f90;
  if (DAT_00f88f90 != (undefined4 *)0x0) {
    iVar1 = DAT_00f88f90[0x12];
    DAT_00f88f90[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f88f7c[1])();
    DAT_00f88f90 = (undefined4 *)0x0;
    (*(code *)*DAT_00f88f7c)();
  }
  puVar2 = DAT_00f88fa8;
  if (DAT_00f88fa8 != (undefined4 *)0x0) {
    iVar1 = DAT_00f88fa8[0x12];
    DAT_00f88fa8[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f88f94[1])();
    DAT_00f88fa8 = (undefined4 *)0x0;
    (*(code *)*DAT_00f88f94)();
  }
  puVar2 = DAT_00f88f58;
  if (DAT_00f88f58 != (undefined4 *)0x0) {
    iVar1 = DAT_00f88f58[0x12];
    DAT_00f88f58[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_00f88f58 = (undefined4 *)0x0;
  }
  puVar2 = DAT_00f88f5c;
  if (DAT_00f88f5c != (undefined4 *)0x0) {
    iVar1 = DAT_00f88f5c[0x12];
    DAT_00f88f5c[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_00f88f5c = (undefined4 *)0x0;
  }
  puVar2 = DAT_00f88f60;
  if (DAT_00f88f60 != (undefined4 *)0x0) {
    iVar1 = DAT_00f88f60[0x12];
    DAT_00f88f60[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_00f88f60 = (undefined4 *)0x0;
  }
  return;
}


//// FUNCTION FUN_0045f350 @ 0045f350 ////

undefined4 FUN_0045f350(int *param_1)

{
  float *pfVar1;
  undefined1 local_8 [4];
  float fStack_4;
  
  (**(code **)(*param_1 + 0x18))(local_8);
  pfVar1 = (float *)(**(code **)(*param_1 + 0x18))(local_8);
  if (*pfVar1 <= fStack_4) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0045f3a0 @ 0045f3a0 ////

void FUN_0045f3a0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  
  piVar1 = param_3;
  for (piVar2 = param_2; piVar2 != piVar1; piVar2 = (int *)piVar2[1]) {
    (**(code **)(*(int *)piVar2[2] + 0x18))(&param_3);
    pfVar3 = (float *)(**(code **)(*param_1 + 0x18))(&stack0x00000000);
    if ((float)param_2 < *pfVar3) break;
  }
  piVar1 = param_1 + 0x18;
  param_1[0x19] = (int)piVar2;
  *piVar1 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar1;
  *piVar2 = (int)piVar1;
  return;
}


//// FUNCTION FUN_0045f400 @ 0045f400 ////

undefined4 FUN_0045f400(void)

{
  return DAT_00f88f78;
}


//// FUNCTION FUN_0045f410 @ 0045f410 ////

undefined4 FUN_0045f410(void)

{
  return DAT_00f88f90;
}


//// FUNCTION FUN_0045f420 @ 0045f420 ////

undefined4 FUN_0045f420(void)

{
  return DAT_00f88fa8;
}


//// FUNCTION FUN_0045f430 @ 0045f430 ////

void __thiscall FUN_0045f430(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(param_1 + 0x60);
  piVar2 = (int *)((int)this + 0xa4);
  *(int **)(param_1 + 100) = piVar2;
  *piVar1 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar1;
  *piVar2 = (int)piVar1;
  return;
}


//// FUNCTION FUN_0045f450 @ 0045f450 ////

void __fastcall FUN_0045f450(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      iVar1 = _toupper((int)*(char *)(uVar2 + *param_1));
      *(char *)(uVar2 + *param_1) = (char)iVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_0045f480 @ 0045f480 ////

void __fastcall FUN_0045f480(int param_1)

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


//// FUNCTION FUN_0045f4a0 @ 0045f4a0 ////

void __fastcall FUN_0045f4a0(int param_1)

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


//// FUNCTION FUN_0045f5b0 @ 0045f5b0 ////

void __fastcall FUN_0045f5b0(int param_1)

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


//// FUNCTION FUN_0045f620 @ 0045f620 ////

undefined4 * __thiscall FUN_0045f620(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x25c),*(uint *)((int)this + 0x260));
  return param_1;
}


//// FUNCTION FUN_0045f660 @ 0045f660 ////

void __fastcall FUN_0045f660(int *param_1)

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
  puStack_8 = &LAB_00ca2158;
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


//// FUNCTION FUN_0045f730 @ 0045f730 ////

void __fastcall FUN_0045f730(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = FUN_00ace790(*(int **)(param_1 + 0x98),0,&TM::TMObject::RTTI_Type_Descriptor,
                       &TM::CStar::RTTI_Type_Descriptor,0);
  if (iVar2 == 0) {
    iVar2 = FUN_00ace790(*(int **)(param_1 + 0x98),0,&TM::TMObject::RTTI_Type_Descriptor,
                         &TM::CProject::RTTI_Type_Descriptor,0);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_00ace790(*(int **)(param_1 + 0x98),0,&TM::TMObject::RTTI_Type_Descriptor,
                             &TM::CProjectAI::RTTI_Type_Descriptor,0), iVar2 == 0)) {
      iVar2 = FUN_00ace790(*(int **)(param_1 + 0x98),0,&TM::TMObject::RTTI_Type_Descriptor,
                           &TM::CStudio::RTTI_Type_Descriptor,0);
      if (iVar2 == 0) {
        return;
      }
      piVar3 = (int *)(DAT_00f88fa8 + 0xa4);
      piVar1 = (int *)(param_1 + 0x60);
      *(int **)(param_1 + 100) = piVar3;
      *piVar1 = *piVar3;
      *(int **)(*piVar3 + 4) = piVar1;
      *piVar3 = (int)piVar1;
      iVar2 = FUN_0045f090(DAT_00f88fa8);
      *(int *)(param_1 + 0x70) = iVar2;
      *(undefined4 *)(param_1 + 0x74) = 0;
      return;
    }
    piVar3 = (int *)(DAT_00f88f90 + 0xa4);
    piVar1 = (int *)(param_1 + 0x60);
    *(int **)(param_1 + 100) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
    iVar4 = 0;
    for (iVar2 = *(int *)(DAT_00f88f90 + 0x98); iVar2 != DAT_00f88f90 + 0xa4;
        iVar2 = *(int *)(iVar2 + 4)) {
      iVar4 = iVar4 + 1;
    }
  }
  else {
    piVar3 = (int *)(DAT_00f88f78 + 0xa4);
    piVar1 = (int *)(param_1 + 0x60);
    *(int **)(param_1 + 100) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
    iVar2 = *(int *)(DAT_00f88f78 + 0x98);
    iVar4 = 0;
    if (iVar2 != DAT_00f88f78 + 0xa4) {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        iVar4 = iVar4 + 1;
      } while (iVar2 != DAT_00f88f78 + 0xa4);
      *(int *)(param_1 + 0x70) = iVar4;
      *(undefined4 *)(param_1 + 0x74) = 0;
      return;
    }
  }
  *(int *)(param_1 + 0x70) = iVar4;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}


//// FUNCTION FUN_0045f9b0 @ 0045f9b0 ////

void __fastcall FUN_0045f9b0(int *param_1)

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
  puStack_8 = &LAB_00ca2178;
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


//// FUNCTION FUN_0045fa80 @ 0045fa80 ////

uint __fastcall FUN_0045fa80(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_10;
  float fStack_c;
  undefined1 local_8 [8];
  
  uStack_10 = 0;
  if (*(uint *)(param_1 + 0x98) == param_1 + 0xa4U) {
    return param_1 + 0xa4U & 0xffffff00;
  }
  piVar6 = *(int **)(param_1 + 0x98);
  iVar5 = 1;
  piVar1 = piVar6;
  do {
    iVar5 = iVar5 + -1;
    piVar2 = (int *)0x0;
    if (piVar1 == (int *)0x0) break;
    piVar1 = (int *)piVar1[1];
    piVar2 = piVar1;
  } while (0 < iVar5);
  if (piVar2 == (int *)(param_1 + 0xa4U)) {
    return (uint)piVar2 & 0xffffff00;
  }
  do {
    iVar5 = 1;
    piVar1 = piVar6;
    do {
      iVar5 = iVar5 + -1;
      piVar2 = (int *)0x0;
      if (piVar1 == (int *)0x0) break;
      piVar1 = (int *)piVar1[1];
      piVar2 = piVar1;
    } while (0 < iVar5);
    if (piVar2 == (int *)(param_1 + 0xa4)) {
      return CONCAT31((int3)((uint)(param_1 + 0xa4) >> 8),uStack_10._3_1_);
    }
    piVar1 = (int *)piVar2[2];
    puVar3 = (undefined4 *)(**(code **)(*(int *)piVar6[2] + 0x18))(local_8);
    uStack_10 = *puVar3;
    pfVar4 = (float *)(**(code **)(*piVar1 + 0x18))(local_8);
    if (*pfVar4 <= fStack_c) {
      piVar6 = (int *)piVar6[1];
    }
    else {
      piVar1 = (int *)piVar2[2];
      if ((int *)piVar2[1] != (int *)0x0) {
        *(int *)piVar2[1] = *piVar2;
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      FUN_0045f3a0(piVar1,*(int **)(param_1 + 0x98),piVar6);
      uStack_10 = 0x1000000;
    }
  } while( true );
}


//// FUNCTION FUN_0045fb80 @ 0045fb80 ////

void __fastcall FUN_0045fb80(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 1;
  for (iVar1 = *(int *)(param_1 + 0x98); iVar1 != param_1 + 0xa4; iVar1 = *(int *)(iVar1 + 4)) {
    piVar2 = *(int **)(iVar1 + 8);
    if (((iVar3 < 0xb) && (*(char *)(param_1 + 0x8c) == '\0')) && (10 < piVar2[0x1d])) {
      *(undefined1 *)(piVar2 + 0x27) = 1;
    }
    (**(code **)(*piVar2 + 0x20))(iVar3);
    iVar3 = iVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x8c) = 0;
  return;
}


//// FUNCTION FUN_0045fe00 @ 0045fe00 ////

void __fastcall FUN_0045fe00(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x98) != param_1 + 0xa4) {
    do {
      piVar1 = *(int **)(param_1 + 0x98);
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
        (**(code **)*puVar2)(1);
      }
    } while (*(int *)(param_1 + 0x98) != param_1 + 0xa4);
  }
  return;
}


//// FUNCTION FUN_0045fec0 @ 0045fec0 ////

void __fastcall FUN_0045fec0(undefined4 *param_1)

{
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


//// FUNCTION FUN_0045ff10 @ 0045ff10 ////

void __thiscall FUN_0045ff10(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d1aee0;
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


//// FUNCTION FUN_0045ff60 @ 0045ff60 ////

void __fastcall FUN_0045ff60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1aee0;
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


//// FUNCTION FUN_0045ffe0 @ 0045ffe0 ////

void __fastcall FUN_0045ffe0(int param_1)

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


//// FUNCTION FUN_00460000 @ 00460000 ////

void __fastcall FUN_00460000(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1aef0;
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


//// FUNCTION FUN_00460050 @ 00460050 ////

void __fastcall FUN_00460050(int param_1)

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
  puStack_8 = &LAB_00ca21f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\LeagueTable.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
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
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x4c));
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
    FUN_00990970((int *)(param_1 + 0x4c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\LeagueTable.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x1f;
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
  uVar3 = FUN_0098b490("Rank");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x38),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\LeagueTable.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x20;
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
  uVar3 = FUN_0098b490("LastRank");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x3c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\LeagueTable.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x21;
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
  uVar3 = FUN_0098b490("RankAtLastAwards");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x40),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\LeagueTable.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x22;
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
  uVar3 = FUN_0098b490("Metric");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x44));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\LeagueTable.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x23;
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
  uVar3 = FUN_0098b490("MetricAtLastAwards");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x48));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004605a0 @ 004605a0 ////

void __fastcall FUN_004605a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca2208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d1af8c;
  param_1[0xe] = &PTR_LAB_00d1af6c;
  local_4 = 0;
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x19] = param_1[0x18];
  }
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1[0x18] + 4) = param_1[0x19];
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x21] = &PTR_FUN_00d1aed0;
  if ((undefined4 *)param_1[0x23] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x23] = param_1[0x22];
  }
  if (param_1[0x22] != 0) {
    *(undefined4 *)(param_1[0x22] + 4) = param_1[0x23];
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  if ((undefined4 *)param_1[0x23] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x23] = param_1[0x22];
  }
  if (param_1[0x22] != 0) {
    *(undefined4 *)(param_1[0x22] + 4) = param_1[0x23];
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x19] = param_1[0x18];
  }
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1[0x18] + 4) = param_1[0x19];
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004606c0 @ 004606c0 ////

void __fastcall FUN_004606c0(int param_1)

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
  puStack_8 = &LAB_00ca2230;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\LeagueTable.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x130;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("Entries");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x2c);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\LeagueTable.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x131;
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
  uVar3 = FUN_0098b490("(int&)(Type)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x78),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004609b0 @ 004609b0 ////

undefined4 * __thiscall FUN_004609b0(void *this,byte param_1)

{
  FUN_004605a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004609d0 @ 004609d0 ////

void __fastcall FUN_004609d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1afdc;
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


//// FUNCTION FUN_00460a20 @ 00460a20 ////

undefined4 * __thiscall FUN_00460a20(void *this,byte param_1)

{
  FUN_004609d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00460a40 @ 00460a40 ////

void __fastcall FUN_00460a40(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00ca228b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1b008;
  param_1[0x19] = &PTR_LAB_00d1afe8;
  local_4 = 3;
  FUN_0045fe00((int)param_1);
  param_1[0x31] = &PTR_FUN_00d1aef0;
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x33] = param_1[0x32];
  }
  if (param_1[0x32] != 0) {
    *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x33] = param_1[0x32];
  }
  if (param_1[0x32] != 0) {
    *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_004609d0(param_1 + 0x24);
  local_4 = local_4 & 0xffffff00;
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00460b40 @ 00460b40 ////

undefined4 * __thiscall FUN_00460b40(void *this,byte param_1)

{
  FUN_00460a40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00460b60 @ 00460b60 ////

void __fastcall FUN_00460b60(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1afdc;
  return;
}


//// FUNCTION FUN_00460bc0 @ 00460bc0 ////

undefined4 * __fastcall FUN_00460bc0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca22ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d1af8c;
  param_1[0xe] = &PTR_LAB_00d1af6c;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = param_1 + 0x21;
  param_1[0x21] = &PTR_FUN_00d1aed0;
  param_1[0x26] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  param_1[0x1a] = param_1;
  FUN_00acdb9e(0xe50254);
  iVar1 = FUN_0097dda0();
  param_1[0x1b] = iVar1;
  if (s___AV__InList_VCLeagueTableEntry__00e50228[0x2a] != '\0') {
    iVar1 = 0x60;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe50254);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__InList_VCLeagueTableEntry__00e50228[0x2a] = '\0';
  }
  *(undefined1 *)(param_1 + 0x27) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00460cc0 @ 00460cc0 ////

int * __cdecl FUN_00460cc0(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uStackY_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca230b;
  pvStack_c = ExceptionList;
  uStackY_1c = 0x460ce1;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa0);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = FUN_00460bc0(puVar1);
  }
  local_4 = 0xffffffff;
  uStackY_1c = 0x460d0f;
  (**(code **)(*piVar2 + 8))();
  uStackY_1c = param_1;
  (**(code **)(*piVar2 + 0x10))();
  FUN_0045f730((int)piVar2);
  ExceptionList = &uStackY_1c;
  return piVar2;
}


//// FUNCTION FUN_00460d40 @ 00460d40 ////

undefined4 * __thiscall FUN_00460d40(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2365;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 100));
  *(undefined ***)this = &PTR_FUN_00d1b008;
  *(undefined4 *)((int)this + 100) = &PTR_LAB_00d1afe8;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  puVar1 = (undefined4 *)((int)this + 0xa4);
  *(undefined4 *)((int)this + 0xac) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined ***)((int)this + 0x90) = &PTR_LAB_00d1afdc;
  *(undefined4 **)((int)this + 0x98) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0x94);
  piVar2 = (int *)((int)this + 0xc4);
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(int **)((int)this + 0xd0) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d1aef0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = param_1;
  local_4 = CONCAT31(local_4._1_3_,5);
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0xd8) = 0;
  (**(code **)*piVar2)();
  *(undefined1 *)((int)this + 0x8c) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00460e20 @ 00460e20 ////

undefined4 * __fastcall FUN_00460e20(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca23b5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d1b008;
  param_1[0x19] = &PTR_LAB_00d1afe8;
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  puVar1 = param_1 + 0x29;
  param_1[0x2b] = 0;
  *puVar1 = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x24] = &PTR_LAB_00d1afdc;
  param_1[0x26] = puVar1;
  *puVar1 = param_1 + 0x25;
  piVar2 = param_1 + 0x31;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = piVar2;
  *piVar2 = (int)&PTR_FUN_00d1aef0;
  param_1[0x36] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  (**(code **)(*piVar2 + 4))();
  param_1[0x36] = 0;
  (**(code **)*piVar2)();
  *(undefined1 *)(param_1 + 0x23) = 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00460ef0 @ 00460ef0 ////

void __cdecl FUN_00460ef0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca23cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xe0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00460e20(puVar1);
    puVar1[0x37] = param_1;
    ExceptionList = local_c;
    return;
  }
  uRam000000dc = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00460f60 @ 00460f60 ////

void __cdecl FUN_00460f60(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca23eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xe0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00460e20(puVar1);
    puVar1[0x37] = param_1;
    ExceptionList = local_c;
    return;
  }
  uRam000000dc = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00460fd0 @ 00460fd0 ////

undefined4 * __thiscall FUN_00460fd0(void *this,int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca242c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x38) = &PTR_LAB_00d1af6c;
  piVar1 = (int *)((int)this + 0x60);
  *(undefined ***)this = &PTR_FUN_00d1af8c;
  *(undefined4 *)((int)this + 0x68) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = param_2;
  *(undefined4 *)((int)this + 0x80) = param_2;
  piVar6 = (int *)((int)this + 0x88);
  *(undefined4 *)((int)this + 0x90) = 0;
  *piVar6 = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 **)((int)this + 0x90) = (undefined4 *)((int)this + 0x84);
  *(undefined4 *)((int)this + 0x84) = &PTR_FUN_00d1aed0;
  *(int **)((int)this + 0x98) = param_1;
  if (param_1 != (int *)0x0) {
    piVar2 = param_1 + 6;
    *(int **)((int)this + 0x8c) = piVar2;
    *piVar6 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar6;
    *piVar2 = (int)piVar6;
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  *(void **)((int)this + 0x68) = this;
  FUN_00acdb9e(0xe50254);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x6c) = iVar3;
  if (s__PAVCLeagueTableEntry_TM___00e5025c[0x1b] != '\0') {
    iVar3 = 0x60;
    pcVar7 = "Link";
    pcVar4 = (char *)FUN_00acdb9e(0xe50254);
    FUN_0097df60(pcVar4,pcVar7,iVar3);
    s__PAVCLeagueTableEntry_TM___00e5025c[0x1b] = '\0';
  }
  iVar5 = FUN_00ace790(param_1,0,&TM::TMObject::RTTI_Type_Descriptor,
                       &TM::CStar::RTTI_Type_Descriptor,0);
  iVar3 = DAT_00f88f78;
  if ((((iVar5 != 0) ||
       (iVar5 = FUN_00ace790(param_1,0,&TM::TMObject::RTTI_Type_Descriptor,
                             &TM::CProject::RTTI_Type_Descriptor,0), iVar3 = DAT_00f88f90,
       iVar5 != 0)) ||
      (iVar5 = FUN_00ace790(param_1,0,&TM::TMObject::RTTI_Type_Descriptor,
                            &TM::CProjectAI::RTTI_Type_Descriptor,0), iVar3 = DAT_00f88f90,
      iVar5 != 0)) ||
     (iVar5 = FUN_00ace790(param_1,0,&TM::TMObject::RTTI_Type_Descriptor,
                           &TM::CStudio::RTTI_Type_Descriptor,0), iVar3 = DAT_00f88fa8, iVar5 != 0))
  {
    piVar6 = (int *)(iVar3 + 0xa4);
    *(int **)((int)this + 100) = piVar6;
    *piVar1 = *piVar6;
    *(int **)(*piVar6 + 4) = piVar1;
    *piVar6 = (int)piVar1;
  }
  *(undefined1 *)((int)this + 0x9c) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00461180 @ 00461180 ////

void FUN_00461180(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00460ef0(0);
  (*(code *)DAT_00f88f64[1])();
  DAT_00f88f78 = uVar1;
  (*(code *)*DAT_00f88f64)();
  uVar1 = FUN_00460ef0(1);
  (*(code *)DAT_00f88f7c[1])();
  DAT_00f88f90 = uVar1;
  (*(code *)*DAT_00f88f7c)();
  uVar1 = FUN_00460ef0(2);
  (*(code *)DAT_00f88f94[1])();
                    /* WARNING: Could not recover jumptable at 0x00461204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DAT_00f88fa8 = uVar1;
  (*(code *)*DAT_00f88f94)();
  return;
}


//// FUNCTION FUN_00461210 @ 00461210 ////

void FUN_00461210(void)

{
  DAT_00f88f58 = FUN_00460ef0(0);
  DAT_00f88f5c = FUN_00460ef0(1);
  DAT_00f88f60 = FUN_00460ef0(2);
  return;
}


//// FUNCTION FUN_004612c0 @ 004612c0 ////

void __fastcall FUN_004612c0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00461310 @ 00461310 ////

void __fastcall FUN_00461310(int param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 0x11c) != 0) {
    bVar1 = FUN_00413cc0(DAT_00f87aa0);
    if (!bVar1) {
      (**(code **)(**(int **)(param_1 + 0x11c) + 0x10))(0,1);
    }
  }
  return;
}


//// FUNCTION FUN_00461340 @ 00461340 ////

int * __thiscall FUN_00461340(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00461360 @ 00461360 ////

int * __thiscall FUN_00461360(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004613c0 @ 004613c0 ////

int * __thiscall FUN_004613c0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00461600 @ 00461600 ////

void __cdecl FUN_00461600(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00461620 @ 00461620 ////

void __cdecl FUN_00461620(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_004616b0 @ 004616b0 ////

undefined4 * __fastcall FUN_004616b0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2453;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(param_1);
  *param_1 = &PTR_FUN_00d1b04c;
  local_4 = 0;
  puVar2 = FUN_0040a690(DAT_00f88fb0 * 2,'\0');
  param_1[0x1e] = puVar2;
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  *(undefined4 *)(param_1[0x1e] + 0x18) = uVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined1 *)(*(int *)(param_1[0x1e] + 0x18) + 0xc) = 6;
  pvVar4 = FUN_0099bb50("fx/smudge.dds",0,0,0,'\0');
  if (*(void **)((int)*(void **)(param_1[0x1e] + 0x18) + 0x18) != pvVar4) {
    Engine_SetResourceReference(*(void **)(param_1[0x1e] + 0x18),(int)pvVar4);
  }
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  puVar1 = (uint *)(*(int *)(param_1[0x1e] + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  FUN_0099a220((void *)param_1[0x1e],1);
  *(byte *)(param_1[0x1e] + 0x24) = *(byte *)(param_1[0x1e] + 0x24) | 0x40;
  FUN_0040a6f0(param_1[0x1e]);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004617a0 @ 004617a0 ////

void __fastcall FUN_004617a0(undefined4 *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca2468;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1b04c;
  _Memory = *(void **)(param_1[0x1e] + 0x18);
  local_4 = 0;
  if (_Memory == (void *)0x0) {
    *(undefined4 *)(param_1[0x1e] + 0x18) = 0;
    puVar1 = (undefined4 *)param_1[0x1e];
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 4);
      uVar2 = DAT_0105b588;
      if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_0105b588 = uVar2;
      param_1[0x1e] = 0;
    }
    local_4 = 0xffffffff;
    FUN_0053ddb0(param_1);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00461850 @ 00461850 ////

undefined4 * __thiscall FUN_00461850(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = FUN_00995d50(*(int *)((int)this + 0x78));
  if (-1 < (int)uVar2) {
    iVar1 = *(int *)(*(int *)((int)this + 0x78) + 0x20);
    puVar3 = (undefined4 *)(uVar2 * 0x34 + iVar1);
    puVar3[0xc] = *(uint *)(uVar2 * 0x34 + 0x30 + iVar1) & 0xfffffeff;
    *puVar3 = *param_1;
    puVar3[1] = param_1[1];
    puVar3[2] = param_1[2];
    puVar3[2] = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00461cd0 @ 00461cd0 ////

void __thiscall FUN_00461cd0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x17c);
  if ((iVar1 != 0) && (iVar1 != param_1)) {
    iVar1 = FUN_005998e0(iVar1);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(iVar1 + 0x25c) + 4))();
    }
  }
  (**(code **)(*(int *)((int)this + 0x168) + 4))();
  *(int *)((int)this + 0x17c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x168))();
  *(undefined4 *)((int)this + 0x180) = 100;
  return;
}


//// FUNCTION FUN_00461d40 @ 00461d40 ////

void __thiscall FUN_00461d40(void *this,int param_1)

{
  int iVar1;
  
  if (*(char *)((int)this + 0x1b0) == '\0') {
    (**(code **)(*(int *)((int)this + 0x168) + 4))();
    *(int *)((int)this + 0x17c) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0x168))();
    *(undefined4 *)((int)this + 0x180) = 100;
  }
  else if (param_1 != 0) {
    iVar1 = FUN_005998e0(param_1);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(iVar1 + 0x25c) + 4))();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00461da0 @ 00461da0 ////

undefined4 FUN_00461da0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = DAT_00f88fd4;
  if (DAT_00f88fd4 != &DAT_00f88fe0) {
    do {
      puVar1 = (undefined4 *)puVar1[1];
      uVar2 = uVar2 + 1;
    } while (puVar1 != &DAT_00f88fe0);
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),uVar2 < DAT_00f88fb0);
}


//// FUNCTION FUN_00461dd0 @ 00461dd0 ////

undefined4 FUN_00461dd0(void)

{
  if (DAT_00f88fd4 != &DAT_00f88fe0) {
    return *(undefined4 *)(DAT_00f88fe0 + 8);
  }
  return 0;
}


//// FUNCTION FUN_00461df0 @ 00461df0 ////

void __fastcall FUN_00461df0(int param_1)

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


//// FUNCTION FUN_00461fa0 @ 00461fa0 ////

void * FUN_00461fa0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00462020 @ 00462020 ////

void __fastcall FUN_00462020(int *param_1)

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
  puStack_8 = &LAB_00ca24a8;
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


//// FUNCTION FUN_004620f0 @ 004620f0 ////

void __fastcall FUN_004620f0(int param_1)

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
  puStack_8 = &LAB_00ca24e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Litter.cpp";
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
    DAT_010581d4 = 0x20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("Smudge");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 300),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Litter.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x21;
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
  uVar3 = FUN_0098b490("SmudgeMax");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x130),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Litter.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x22;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("Age");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x134),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Litter.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x23;
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
  uVar3 = FUN_0098b490("Biodegrade");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x138),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Litter.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x24;
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
  uVar3 = FUN_0098b490("(int&)(MyType)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x13c),4);
  }
  FUN_00539430(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00462590 @ 00462590 ////

undefined4 * __thiscall FUN_00462590(void *this,byte param_1)

{
  FUN_004617a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00462670 @ 00462670 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00462670(void *this,int *param_1,int *param_2)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  float10 fVar4;
  int *piVar5;
  int *piVar6;
  char **ppcVar7;
  undefined4 *local_38;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca252e;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0x70) == '\0') {
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x2e0);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    fVar4 = FUN_004012c0(0.0);
    piVar2 = FUN_00445f60(pvVar1,(float *)((int)this + 0x218),(float)fVar4);
  }
  local_4 = 0xffffffff;
  pvVar1 = operator_new(0x2b4);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    local_38 = (undefined4 *)0x0;
  }
  else {
    local_38 = FUN_00402380(pvVar1,(int)param_1,piVar2);
  }
  local_2c = local_20;
  local_4 = 0xffffffff;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"propinteract",0xc);
  ppcVar7 = &local_2c;
  piVar6 = param_2 + 0x19;
  local_28 = 0xc;
  piVar5 = piVar6;
  local_2c[0xc] = '\0';
  uVar3 = FUN_00401ec0(piVar5,ppcVar7);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_24 = 0x14;
  local_28 = 0;
  local_20[0] = '\0';
  if ((char)uVar3 == '\0') {
    _strncpy(local_20,"task_janitor",0xc);
    ppcVar7 = &local_2c;
    local_28 = 0xc;
    piVar5 = piVar6;
    local_2c[0xc] = '\0';
    uVar3 = FUN_00401ec0(piVar5,ppcVar7);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_24 = 0x14;
    local_28 = 0;
    local_20[0] = '\0';
    if ((char)uVar3 == '\0') {
      local_2c = local_20;
      _strncpy(local_20,"sniff",5);
      ppcVar7 = &local_2c;
      local_28 = 5;
      local_2c[5] = '\0';
      uVar3 = FUN_00401ec0(piVar6,ppcVar7);
      param_1 = (int *)CONCAT31(param_1._1_3_,(char)uVar3);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if ((char)uVar3 != '\0') {
        local_2c = local_20;
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x14;
        _strncpy(local_2c,"ai_dog_sniff.flm",0x10);
        local_28 = 0x10;
        local_2c[0x10] = '\0';
        local_4 = 4;
        (**(code **)(*piVar2 + 0xb0))();
        puStack_8 = (undefined1 *)0xffffffff;
        if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar1);
        }
        (**(code **)(*param_1 + 0x38))(0x3e4ccccd);
      }
    }
    else {
      local_2c = local_20;
      _strncpy(local_20,"ai_tidy.flm",0xb);
      local_28 = 0xb;
      local_2c[0xb] = '\0';
      local_4 = 3;
      (**(code **)(*piVar2 + 0xb0))();
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      pvVar1 = (void *)FUN_00ace790(param_2,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                                    &TM::DesireTaskJanitor::RTTI_Type_Descriptor,0);
      if (pvVar1 != (void *)0x0) {
        FUN_00840510(pvVar1,*(undefined4 *)((int)this + 0x248));
        FUN_00461d40(*(void **)((int)this + 0x248),(int)param_1);
      }
    }
  }
  else {
    _strncpy(local_2c,"ai_banana_slip.flm",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 2;
    (**(code **)(*piVar2 + 0xb0))();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    FUN_00461d40(*(void **)((int)this + 0x248),(int)param_1);
    _DAT_00f88fac = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
    *(undefined1 *)((int)piVar2 + 0x2b3) = 0;
    FUN_004016f0(local_38,this);
  }
  *(undefined1 *)(piVar2 + 0xb7) = 1;
  FUN_00401a00(local_38,param_2);
  piVar5 = piVar2 + 0x12;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    (**(code **)*piVar2)();
  }
  ExceptionList = local_c;
  return local_38;
}


//// FUNCTION FUN_00462a50 @ 00462a50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00462a50(void *this,undefined4 param_1,int *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint in_EAX;
  float *pfVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  char **ppcVar10;
  undefined1 local_38 [8];
  undefined1 auStack_30 [16];
  char *local_20;
  undefined4 local_1c;
  uint local_18;
  char local_14 [16];
  float *pfStack_4;
  
  if (*(char *)((int)this + 0x70) == '\0') {
    return in_EAX & 0xffffff00;
  }
  piVar5 = *(int **)(*(int *)((int)this + 0x248) + 0x17c);
  if ((piVar5 != (int *)0x0) && (piVar5 != param_2)) {
LAB_00462a7f:
    return (uint)piVar5 & 0xffffff00;
  }
  if (*(char *)((int)this + 0x22c) != '\0') {
    pfVar4 = (float *)(**(code **)(*param_2 + 0x34))(local_38);
    fVar1 = *pfVar4 - *(float *)((int)this + 0x218);
    fVar3 = pfVar4[1] - *(float *)((int)this + 0x21c);
    fVar2 = pfVar4[2] - *(float *)((int)this + 0x220);
    fVar2 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar1 = *(float *)((int)this + 0x228);
    piVar5 = (int *)CONCAT22((short)((uint)pfVar4 >> 0x10),
                             (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) goto LAB_00462a7f;
  }
  local_20 = local_14;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x14;
  _strncpy(local_20,"propinteract",0xc);
  ppcVar10 = &local_20;
  local_1c = 0xc;
  puVar9 = param_3;
  local_20[0xc] = '\0';
  uVar6 = FUN_00401ec0(puVar9,ppcVar10);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (((char)uVar6 == '\0') ||
     (uVar7 = DAT_0104cdf4, 5999 < (uint)(*(int *)(DAT_0104cdf4 + 0x3c) - _DAT_00f88fac))) {
    uVar7 = FUN_00401ec0(param_3,(undefined4 *)((int)this + 0x74));
    if ((char)uVar7 != '\0') {
      piVar5 = *(int **)((int)this + 0x248);
      pfVar4 = (float *)(**(code **)(*param_2 + 0x34))(local_38);
      pfVar8 = (float *)(**(code **)(*piVar5 + 0x34))(auStack_30);
      *pfStack_4 = SQRT((pfVar8[1] - pfVar4[1]) * (pfVar8[1] - pfVar4[1]) +
                        (*pfVar8 - *pfVar4) * (*pfVar8 - *pfVar4) +
                        (pfVar8[2] - pfVar4[2]) * (pfVar8[2] - pfVar4[2]));
      return CONCAT31((int3)((uint)pfVar8 >> 8),1);
    }
  }
  return uVar7 & 0xffffff00;
}


//// FUNCTION CStaff_AssignToFacilityTask @ 00462be0 ////

void __fastcall CStaff_AssignToFacilityTask(int param_1)

{
  int *piVar1;
  int *piVar2;
  void *this;
  void *this_00;
  undefined4 *this_01;
  undefined4 *puVar3;
  float10 fVar4;
  int *unaff_retaddr;
  void ***this_02;
  void *local_48;
  float fStack_44;
  undefined4 uStack_40;
  void *pvStack_30;
  void **local_2c;
  uint local_28;
  undefined4 local_24;
  void *local_20 [5];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca255e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_48 = operator_new(0x2e0);
  local_4 = 0;
  if (local_48 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00445f60(local_48,(float *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0xc4));
  }
  local_2c = local_20;
  local_28 = 0;
  local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
  local_24 = 0x14;
  _strncpy((char *)local_2c,"ai_tidy.flm",0xb);
  local_28 = 0xb;
  *(char *)((int)local_2c + 0xb) = '\0';
  this_02 = &local_2c;
  local_4 = 1;
  (**(code **)(*piVar2 + 0xb0))();
  puStack_8 = (undefined1 *)0xffffffff;
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  this = (void *)FUN_0059c530((int)unaff_retaddr);
  FUN_00840510(this,param_1);
  this_00 = operator_new(0x2b4);
  puStack_8 = (undefined1 *)0x2;
  if (this_00 == (void *)0x0) {
    this_01 = (undefined4 *)0x0;
  }
  else {
    this_01 = FUN_00402380(this_00,(int)unaff_retaddr,piVar2);
  }
  local_48 = (void *)0x0;
  fStack_44 = 0.0;
  uStack_40 = 0;
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar2 + 0xd8))(&local_48);
  fVar4 = FUN_004012c0(fStack_44);
  puStack_8 = (undefined1 *)(float)fVar4;
  (**(code **)(*unaff_retaddr + 0x28))(&stack0xffffffb0,&puStack_8);
  FUN_00401a00(this_01,this);
  FUN_00401050(this_01,0);
  piVar1 = piVar2 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar2)(1);
  }
  puVar3 = (undefined4 *)FUN_005998e0((int)unaff_retaddr);
  TMCharacter_CancelAction(unaff_retaddr,puVar3);
  TMCharacter_AddAction(unaff_retaddr,(int)this_01);
  *(undefined1 *)((int)this_01 + 0x292) = 1;
  this_01[0x90] = 2;
  FUN_00461cd0(this_02,(int)unaff_retaddr);
  ExceptionList = local_20[0];
  return;
}


//// FUNCTION FUN_00462db0 @ 00462db0 ////

void FUN_00462db0(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_00f88fd4; puVar1 != &DAT_00f88fe0; puVar1 = (undefined4 *)puVar1[1]) {
    FUN_00454b10(DAT_00f88720,(float *)(puVar1[2] + 0x100),DAT_00f88fb4);
  }
  return;
}


//// FUNCTION FUN_00462df0 @ 00462df0 ////

void __fastcall FUN_00462df0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d1b118;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00462e20 @ 00462e20 ////

void __fastcall FUN_00462e20(int param_1)

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


//// FUNCTION FUN_00462e40 @ 00462e40 ////

void __fastcall FUN_00462e40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1b118;
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


//// FUNCTION FUN_00462f10 @ 00462f10 ////

void __fastcall FUN_00462f10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1b128;
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


//// FUNCTION FUN_00462f70 @ 00462f70 ////

undefined4 * FUN_00462f70(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00462fb0 @ 00462fb0 ////

undefined4 * __thiscall FUN_00462fb0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char acStack_58 [8];
  undefined4 uStack_50;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [16];
  undefined4 uStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2591;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008bcfe0(this);
  piVar1 = (int *)((int)this + 0x234);
  *(undefined ***)this = &PTR_FUN_00d1b184;
  *(undefined ***)((int)this + 200) = &PTR_LAB_00d1b15c;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(int **)((int)this + 0x240) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1b118;
  *(undefined4 *)((int)this + 0x248) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x248) = param_1;
  (**(code **)*piVar1)();
  uStack_28 = 0x463026;
  puVar2 = operator_new(0x60);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_008ade90(puVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(*(int *)((int)this + 0xac) + 4))();
  *(undefined4 **)((int)this + 0xc0) = puVar2;
  (*(code *)**(undefined4 **)((int)this + 0xac))();
  puStack_44 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0;
  uStack_3c = 0x14;
  uStack_50 = 0x46308e;
  FUN_004015d0(&puStack_44,"desire_propinteract",0x13);
  pcVar3 = acStack_58;
  acStack_58[0] = '\0';
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff9c,"ai_ai_interact",0xe);
  FUN_008ad970(*(void **)((int)this + 0xc0),pcVar3,uVar4,uVar5);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00463110 @ 00463110 ////

undefined4 * __fastcall FUN_00463110(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  float10 fVar6;
  uint uVar7;
  uint uVar8;
  char local_58 [4];
  undefined4 uStack_54;
  char *pcVar9;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca25fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00539710(param_1);
  *param_1 = &PTR_FUN_00d1b214;
  param_1[0x1e] = &PTR_LAB_00d1b1f0;
  param_1[0x28] = &PTR_FUN_00d1b1d8;
  param_1[0x54] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  piVar1 = param_1 + 0x5a;
  param_1[0x5d] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d165ac;
  param_1[0x5f] = 0;
  param_1[0x66] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = param_1 + 99;
  param_1[99] = &PTR_LAB_00d1b128;
  param_1[0x68] = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  param_1[0x6d] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x47] = 0;
  param_1[0x62] = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  fVar6 = FUN_00990e30(0.0,6.2831855);
  fVar6 = FUN_004012c0((float)fVar6);
  param_1[0x31] = (float)fVar6;
  pvVar2 = operator_new(0x24c);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00462fb0(pvVar2,param_1);
  }
  param_1[0x56] = puVar3;
  pcVar5 = local_58;
  local_4._0_1_ = 3;
  local_58[0] = '\0';
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xffffff9c,"sweep",5);
  FUN_008b94b0(param_1[0x56],pcVar5,uVar7,uVar8);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,"Litter",6);
  FUN_004015d0((void *)(param_1[0x56] + 0x180),local_2c,local_28);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  uStack_54 = 0x4632d6;
  _strncpy(local_2c,"sweep",5);
  local_28 = 5;
  local_2c[5] = '\0';
  FUN_004015d0((void *)(param_1[0x56] + 0x74),local_2c,local_28);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)(param_1[0x56] + 0x70) = 0;
  pvVar2 = operator_new(0x24c);
  local_4._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00462fb0(pvVar2,param_1);
  }
  local_2c = local_20;
  param_1[0x57] = puVar3;
  local_4._0_1_ = 3;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  uStack_54 = 0x463370;
  _strncpy(local_2c,"task_janitor",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  FUN_004015d0((void *)(param_1[0x57] + 0x74),local_2c,local_28);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pcVar5 = local_58;
  local_58[0] = '\0';
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xffffff9c,"task_janitor",0xc);
  FUN_008b94b0(param_1[0x57],pcVar5,uVar7,uVar8);
  *(undefined1 *)(param_1[0x57] + 0x70) = 0;
  pvVar2 = operator_new(0x24c);
  local_4._0_1_ = 6;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00462fb0(pvVar2,param_1);
  }
  param_1[0x58] = puVar3;
  pcVar5 = local_58;
  local_4._0_1_ = 3;
  local_58[0] = '\0';
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xffffff9c,"sniff",5);
  FUN_008b94b0(param_1[0x58],pcVar5,uVar7,uVar8);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"sniff",5);
  local_28 = 5;
  local_2c[5] = '\0';
  FUN_004015d0((void *)(param_1[0x58] + 0x74),local_2c,local_28);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)(param_1[0x58] + 0x70) = 0;
  pvVar2 = operator_new(0x24c);
  local_4._0_1_ = 7;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00462fb0(pvVar2,param_1);
  }
  param_1[0x59] = puVar3;
  pcVar5 = local_58;
  local_4 = CONCAT31(local_4._1_3_,3);
  local_58[0] = '\0';
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xffffff9c,"propinteract",0xc);
  FUN_008b94b0(param_1[0x59],pcVar5,uVar7,uVar8);
  FUN_008bc620((void *)param_1[0x59],0x3f800000);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  uStack_54 = 0x463541;
  _strncpy(local_2c,"propinteract",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  FUN_004015d0((void *)(param_1[0x59] + 0x74),local_2c,local_28);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)(param_1[0x59] + 0x70) = 0;
  param_1[0x54] = param_1;
  FUN_00acdb9e(0xe503a8);
  iVar4 = FUN_0097dda0();
  param_1[0x55] = iVar4;
  if (s___AVCLitterExplainer_TM___00e5038c[0x1a] != '\0') {
    iVar4 = 0x148;
    pcVar9 = "LitterLink";
    uStack_54 = 0x4635da;
    pcVar5 = (char *)FUN_00acdb9e(0xe503a8);
    uStack_54 = 0x4635e1;
    FUN_0097df60(pcVar5,pcVar9,iVar4);
    s___AVCLitterExplainer_TM___00e5038c[0x1a] = '\0';
  }
  (**(code **)(*piVar1 + 4))();
  param_1[0x5f] = 0;
  (**(code **)*piVar1)();
  *(undefined1 *)(param_1 + 0x61) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00463630 @ 00463630 ////

void __cdecl FUN_00463630(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca261b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x1b8);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00463110(puVar2);
  }
  puVar2[0x6d] = param_1;
  piVar1 = puVar2 + 0x52;
  puVar2[0x53] = &DAT_00f88fe0;
  *piVar1 = (int)DAT_00f88fe0;
  *(int **)((int)DAT_00f88fe0 + 4) = piVar1;
  DAT_00f88fe0 = piVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00463710 @ 00463710 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00463710(undefined4 *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int iVar6;
  LONG LVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca2662;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1b214;
  param_1[0x1e] = &PTR_LAB_00d1b1f0;
  param_1[0x28] = &PTR_FUN_00d1b1d8;
  local_4 = 3;
  if ((undefined4 *)param_1[0x53] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x53] = param_1[0x52];
  }
  if (param_1[0x52] != 0) {
    *(undefined4 *)(param_1[0x52] + 4) = param_1[0x53];
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  iVar3 = param_1[0x56];
  iVar6 = *(int *)(iVar3 + 0x110) + -1;
  *(int *)(iVar3 + 0x110) = iVar6;
  if (iVar6 == 0) {
    (*(code *)**(undefined4 **)(iVar3 + 200))(1);
  }
  iVar3 = param_1[0x57];
  iVar6 = *(int *)(iVar3 + 0x110) + -1;
  *(int *)(iVar3 + 0x110) = iVar6;
  if (iVar6 == 0) {
    (*(code *)**(undefined4 **)(iVar3 + 200))(1);
  }
  iVar3 = param_1[0x58];
  iVar6 = *(int *)(iVar3 + 0x110) + -1;
  *(int *)(iVar3 + 0x110) = iVar6;
  if (iVar6 == 0) {
    (*(code *)**(undefined4 **)(iVar3 + 200))(1);
  }
  iVar3 = param_1[0x59];
  iVar6 = *(int *)(iVar3 + 0x110) + -1;
  *(int *)(iVar3 + 0x110) = iVar6;
  if (iVar6 == 0) {
    (*(code *)**(undefined4 **)(iVar3 + 200))(1);
  }
  if (param_1[0x62] != 0) {
    puVar1 = (uint *)(param_1[0x62] + 0x30);
    *puVar1 = *puVar1 | 0x100;
  }
  puVar4 = (undefined4 *)param_1[0x47];
  if (puVar4 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar4 + 4);
    uVar5 = DAT_0105b588;
    if ((LVar7 == 0) && (DAT_0105b588 = 1, puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    DAT_0105b588 = uVar5;
    param_1[0x47] = 0;
  }
  puVar4 = (undefined4 *)param_1[0x68];
  if (puVar4 != (undefined4 *)0x0) {
    piVar2 = puVar4 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(1);
    }
    (**(code **)(param_1[99] + 4))();
    param_1[0x68] = 0;
    (**(code **)param_1[99])();
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    _DAT_00f8904c = _DAT_00f8904c - 1.0;
  }
  param_1[99] = &PTR_LAB_00d1b128;
  if ((undefined4 *)param_1[0x65] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x65] = param_1[100];
  }
  if (param_1[100] != 0) {
    *(undefined4 *)(param_1[100] + 4) = param_1[0x65];
  }
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  if ((undefined4 *)param_1[0x65] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x65] = param_1[100];
  }
  if (param_1[100] != 0) {
    *(undefined4 *)(param_1[100] + 4) = param_1[0x65];
  }
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x5a] = &PTR_FUN_00d165ac;
  if ((undefined4 *)param_1[0x5c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5c] = param_1[0x5b];
  }
  if (param_1[0x5b] != 0) {
    *(undefined4 *)(param_1[0x5b] + 4) = param_1[0x5c];
  }
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  if ((undefined4 *)param_1[0x5c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5c] = param_1[0x5b];
  }
  if (param_1[0x5b] != 0) {
    *(undefined4 *)(param_1[0x5b] + 4) = param_1[0x5c];
  }
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  if ((undefined4 *)param_1[0x53] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x53] = param_1[0x52];
  }
  if (param_1[0x52] != 0) {
    *(undefined4 *)(param_1[0x52] + 4) = param_1[0x53];
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  local_4 = 0xffffffff;
  FUN_00539940(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004639d0 @ 004639d0 ////

void FUN_004639d0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_00f88fd4 != &DAT_00f88fe0) {
    do {
      piVar4 = DAT_00f88fd4;
      puVar2 = (undefined4 *)DAT_00f88fd4[2];
      piVar1 = DAT_00f88fd4 + 1;
      if ((int *)DAT_00f88fd4[1] != (int *)0x0) {
        *(int *)DAT_00f88fd4[1] = *DAT_00f88fd4;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    } while (DAT_00f88fd4 != &DAT_00f88fe0);
  }
  puVar2 = DAT_00f88fbc;
  if (DAT_00f88fbc != (undefined4 *)0x0) {
    iVar3 = DAT_00f88fbc[0x12];
    DAT_00f88fbc[0x12] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_00f88fbc = (undefined4 *)0x0;
  }
  return;
}


//// FUNCTION FUN_00463a50 @ 00463a50 ////

undefined4 * __thiscall FUN_00463a50(void *this,byte param_1)

{
  FUN_00463a70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00463a70 @ 00463a70 ////

void __fastcall FUN_00463a70(undefined4 *param_1)

{
  param_1[0x8d] = &PTR_FUN_00d1b118;
  if ((undefined4 *)param_1[0x8f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8f] = param_1[0x8e];
  }
  if (param_1[0x8e] != 0) {
    *(undefined4 *)(param_1[0x8e] + 4) = param_1[0x8f];
  }
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  if ((undefined4 *)param_1[0x8f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8f] = param_1[0x8e];
  }
  if (param_1[0x8e] != 0) {
    *(undefined4 *)(param_1[0x8e] + 4) = param_1[0x8f];
  }
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  FUN_008bd1c0(param_1);
  return;
}


//// FUNCTION FUN_00463af0 @ 00463af0 ////

undefined4 * __thiscall FUN_00463af0(void *this,byte param_1)

{
  FUN_00463710(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00463b10 @ 00463b10 ////

undefined4 * __cdecl FUN_00463b10(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_00f89004 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_00f89008 - DAT_00f89004 >> 5;
  }
  iVar1 = FUN_00990d30(0,iVar1);
  puVar2 = (undefined4 *)(iVar1 * 0x20 + DAT_00f89004);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,(char *)*puVar2,puVar2[1]);
  return param_1;
}


//// FUNCTION FUN_00463b80 @ 00463b80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00463b80(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  float10 fVar6;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2678;
  local_c = ExceptionList;
  _DAT_00f8904c = _DAT_00f8904c + 1.0;
  ExceptionList = &local_c;
  FUN_00538800(this,param_1);
  iVar1 = *(int *)((int)this + 0x158);
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *(undefined4 *)(iVar1 + 0x218) = *param_1;
  *(undefined4 *)(iVar1 + 0x21c) = uVar2;
  *(undefined4 *)(iVar1 + 0x220) = uVar3;
  fVar6 = FUN_004012c0(0.0);
  *(float *)(*(int *)((int)this + 0x158) + 0x214) = (float)fVar6;
  *(undefined1 *)((int)this + 0x184) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x158) + 0x70) = 1;
  iVar1 = *(int *)((int)this + 0x15c);
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *(undefined4 *)(iVar1 + 0x218) = *param_1;
  *(undefined4 *)(iVar1 + 0x21c) = uVar2;
  *(undefined4 *)(iVar1 + 0x220) = uVar3;
  fVar6 = FUN_004012c0(0.0);
  *(float *)(*(int *)((int)this + 0x15c) + 0x214) = (float)fVar6;
  *(undefined1 *)(*(int *)((int)this + 0x15c) + 0x70) = 1;
  iVar1 = *(int *)((int)this + 0x160);
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *(undefined4 *)(iVar1 + 0x218) = *param_1;
  *(undefined4 *)(iVar1 + 0x21c) = uVar2;
  *(undefined4 *)(iVar1 + 0x220) = uVar3;
  fVar6 = FUN_004012c0(0.0);
  *(float *)(*(int *)((int)this + 0x160) + 0x214) = (float)fVar6;
  *(undefined1 *)(*(int *)((int)this + 0x160) + 0x70) = 1;
  iVar1 = *(int *)((int)this + 0x164);
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *(undefined4 *)(iVar1 + 0x218) = *param_1;
  *(undefined4 *)(iVar1 + 0x21c) = uVar2;
  *(undefined4 *)(iVar1 + 0x220) = uVar3;
  fVar6 = FUN_004012c0(0.0);
  *(float *)(*(int *)((int)this + 0x164) + 0x214) = (float)fVar6;
  *(undefined1 *)(*(int *)((int)this + 0x164) + 0x70) = 1;
  if (*(int *)((int)this + 0x1b4) != 2) {
    puVar5 = FUN_00433eb0();
    *(undefined4 **)((int)this + 0x11c) = puVar5;
    if (*(int *)((int)this + 0x1b4) == 1) {
      pbVar4 = FUN_009de1d0("p_horseturd.msh",1);
    }
    else {
      puVar5 = FUN_00463b10(local_2c);
      local_4 = 0;
      pbVar4 = FUN_009de1d0((char *)*puVar5,1);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
    (**(code **)(**(int **)((int)this + 0x11c) + 0x18))(pbVar4);
    if (pbVar4 != (byte *)0x0) {
      FUN_009de3b0(pbVar4);
    }
    iVar1 = **(int **)((int)this + 0x11c);
    fVar6 = FUN_00990e30(1.0,1.75);
    (**(code **)(iVar1 + 0x20))((int)this + 0x100,*(undefined4 *)((int)this + 0xc4),(float)fVar6);
  }
  puVar5 = FUN_00461850(DAT_00f88fbc,(undefined4 *)((int)this + 0x100));
  *(undefined4 **)((int)this + 0x188) = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[9] = *(undefined4 *)((int)this + 0x1a4);
    *(undefined1 *)(*(int *)((int)this + 0x188) + 0x2f) = 0x50;
    fVar6 = FUN_00990e30(0.0,6.2831855);
    *(float *)(*(int *)((int)this + 0x188) + 0x28) = (float)fVar6;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00463e20 @ 00463e20 ////

void __cdecl FUN_00463e20(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this;
  int iVar4;
  float afStack_28 [2];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [16];
  
  iVar2 = FUN_00567d80(param_1);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)(*DAT_00f890c0 + 0x7c))(auStack_14);
      uStack_20 = *puVar3;
      uStack_1c = puVar3[1];
      uStack_18 = puVar3[2];
      FUN_009840b0(afStack_28,&uStack_20);
      cVar1 = FUN_0046d260(afStack_28,1);
      if (cVar1 != '\0') {
        this = (void *)FUN_00463630(0);
        FUN_00463b80(this,&uStack_20);
        iVar4 = iVar4 + 1;
      }
    } while (iVar4 < iVar2);
  }
  return;
}


//// FUNCTION FUN_00463ee0 @ 00463ee0 ////

undefined4 __fastcall FUN_00463ee0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00538fc0(param_1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_00463b80((void *)(param_1 + -0x78),(undefined4 *)(param_1 + 0x88));
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00463f10 @ 00463f10 ////

void FUN_00463f10(void)

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
  puStack_8 = &LAB_00ca2698;
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


//// FUNCTION FUN_00463f80 @ 00463f80 ////

void __fastcall FUN_00463f80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1b2c8;
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


//// FUNCTION FUN_00463fd0 @ 00463fd0 ////

undefined4 * __thiscall FUN_00463fd0(void *this,byte param_1)

{
  FUN_00463f80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00463ff0 @ 00463ff0 ////

void __thiscall FUN_00463ff0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00463f10();
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
      _Dst = FUN_00462f70((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00461fa0(param_1,iVar5,param_1 + param_2);
      FUN_00462f70(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00461600(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00461fa0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00461620(param_1,(int)pvVar3,iVar5);
    FUN_00461600(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_004642c0 @ 004642c0 ////

void FUN_004642c0(void)

{
  undefined *local_4;
  
  local_4 = &DAT_00f88fcc;
  if ((DAT_010584c8 != 0) &&
     ((uint)((int)DAT_010584cc - DAT_010584c8 >> 2) < (uint)(DAT_010584d0 - DAT_010584c8 >> 2))) {
    *DAT_010584cc = &DAT_00f88fcc;
    DAT_010584cc = DAT_010584cc + 1;
    return;
  }
  FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  return;
}


//// FUNCTION LitterScatter_Constructor @ 00464320 ////

void LitterScatter_Constructor(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  char *local_140;
  undefined4 local_13c;
  uint local_138;
  char local_134 [20];
  char *local_120;
  undefined4 local_11c;
  uint local_118;
  char local_114 [20];
  undefined4 *local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca270b;
  local_c = ExceptionList;
  local_120 = local_114;
  local_114[0] = '\0';
  local_11c = 0;
  local_118 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_120,"lit_scatter",0xb);
  local_11c = 0xb;
  local_120[0xb] = '\0';
  local_4 = 0;
  FUN_005434b0();
  if (0x14 < local_118) {
                    /* WARNING: Subroutine does not return */
    _free(local_120);
  }
  local_120 = local_114;
  local_114[0] = '\0';
  local_11c = 0;
  local_118 = 0x14;
  _strncpy(local_120,"litter",6);
  local_11c = 6;
  local_120[6] = '\0';
  local_4 = 1;
  FUN_0055c540(local_e4,&local_120);
  if (0x14 < local_118) {
                    /* WARNING: Subroutine does not return */
    _free(local_120);
  }
  local_140 = local_134;
  local_134[0] = '\0';
  local_13c = 0;
  local_138 = 0x14;
  _strncpy(local_140,"maxlitterobjects",0x10);
  local_13c = 0x10;
  local_140[0x10] = '\0';
  local_4._0_1_ = 4;
  DAT_00f88fb0 = FUN_00558750(local_e4,&local_140,0);
  if (0x14 < local_138) {
                    /* WARNING: Subroutine does not return */
    _free(local_140);
  }
  local_140 = local_134;
  local_134[0] = '\0';
  local_13c = 0;
  local_138 = 0x14;
  _strncpy(local_140,"enviroperitem",0xd);
  local_13c = 0xd;
  local_140[0xd] = '\0';
  local_4._0_1_ = 5;
  fVar5 = FUN_00558610(local_e4,&local_140,0.0);
  DAT_00f88fb4 = (float)fVar5;
  if (0x14 < local_138) {
                    /* WARNING: Subroutine does not return */
    _free(local_140);
  }
  local_140 = local_134;
  local_134[0] = '\0';
  local_13c = 0;
  local_138 = 0x14;
  _strncpy(local_140,"meshes",6);
  local_13c = 6;
  local_140[6] = '\0';
  local_4._0_1_ = 6;
  uVar3 = FUN_00558a50(local_e4,&local_140,(undefined4 *)0x0);
  local_4._0_1_ = 3;
  if (0x14 < local_138) {
                    /* WARNING: Subroutine does not return */
    _free(local_140);
  }
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_00558120(local_e4,0);
    cVar2 = (char)uVar3;
    while (cVar2 != '\0') {
      puVar4 = FUN_00558de0(local_e4,&local_140);
      piVar1 = DAT_00f89008;
      local_4 = CONCAT31(local_4._1_3_,7);
      if ((DAT_00f89004 == 0) ||
         ((uint)(DAT_00f8900c - DAT_00f89004 >> 5) <= (uint)((int)DAT_00f89008 - DAT_00f89004 >> 5))
         ) {
        FUN_00439fd0(&DAT_00f89000,DAT_00f89008,1,puVar4);
      }
      else {
        FUN_00439ea0(DAT_00f89008,1,puVar4);
        DAT_00f89008 = piVar1 + 8;
      }
      local_4._0_1_ = 3;
      if (0x14 < local_138) {
                    /* WARNING: Subroutine does not return */
        _free(local_140);
      }
      uVar3 = FUN_00558120(local_e4,2);
      cVar2 = (char)uVar3;
    }
  }
  local_100 = operator_new(0x7c);
  local_4._0_1_ = 8;
  if (local_100 == (undefined4 *)0x0) {
    DAT_00f88fbc = (undefined4 *)0x0;
  }
  else {
    DAT_00f88fbc = FUN_004616b0(local_100);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  FUN_004038e0(&local_fc,"ai_tidy.flm",0);
  DAT_00f88fc8 = local_f4;
  DAT_00f88fc0 = local_fc;
  DAT_00f88fc4 = local_f8;
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004646a0 @ 004646a0 ////

void __fastcall FUN_004646a0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1b2c8;
  return;
}


//// FUNCTION FUN_00464700 @ 00464700 ////

void __fastcall FUN_00464700(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00464730 @ 00464730 ////

void FUN_00464730(void)

{
  return;
}


//// FUNCTION FUN_00464740 @ 00464740 ////

undefined4 __fastcall FUN_00464740(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}


//// FUNCTION FUN_00464750 @ 00464750 ////

int __fastcall FUN_00464750(int param_1)

{
  return param_1 + 100;
}


//// FUNCTION FUN_00464780 @ 00464780 ////

void __fastcall FUN_00464780(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00ca277a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d1b334;
  param_1[0xe] = &PTR_LAB_00d1b314;
  local_4 = 2;
  if ((void *)param_1[0x18] != (void *)0x0) {
    FUN_0099b400((void *)param_1[0x18]);
    param_1[0x18] = 0;
  }
  if (10 < (uint)param_1[0x1b]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x19]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00464820 @ 00464820 ////

undefined4 * __fastcall FUN_00464820(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca27a6;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x60) == 0) {
    return (undefined4 *)0x0;
  }
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
  if (*(int *)((int)puVar1[1] + 0x18) != *(int *)(param_1 + 0x60)) {
    Engine_SetResourceReference((void *)puVar1[1],*(int *)(param_1 + 0x60));
  }
  puVar1[10] = 0;
  puVar1[0xd] = 0x3f800000;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0x3f800000;
  puVar1[2] = 0xffffffff;
  this = operator_new(0x360);
  local_4 = 1;
  if (this != (void *)0x0) {
    puVar1 = FUN_0069d790(this,(int)puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00464970 @ 00464970 ////

void __fastcall FUN_00464970(int *param_1)

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
  puStack_8 = &LAB_00ca27b8;
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


//// FUNCTION FUN_00464a40 @ 00464a40 ////

undefined4 * __thiscall FUN_00464a40(void *this,byte param_1)

{
  FUN_00464780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00464ae0 @ 00464ae0 ////

void __fastcall FUN_00464ae0(int param_1)

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
  puStack_8 = &LAB_00ca27e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Logo.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x11;
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
  uVar3 = FUN_0098b490("Name");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x2c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Logo.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x12;
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
  uVar3 = FUN_0098b490("PlayerStudio");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x50),1);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00464cd0 @ 00464cd0 ////

undefined4 * __fastcall FUN_00464cd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca27f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_00d1b334;
  param_1[0xe] = &PTR_LAB_00d1b314;
  param_1[0x19] = param_1 + 0x1c;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 10;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00464d50 @ 00464d50 ////

undefined4 * __cdecl FUN_00464d50(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca281b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x8c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00464cd0(puVar1);
  }
  local_4 = 0xffffffff;
  pvVar2 = FUN_0099bb50((char *)*param_1,0,0,0,'\0');
  puVar1[0x18] = pvVar2;
  puVar3 = FUN_00568790(local_2c,param_1);
  FUN_004036d0(puVar1 + 0x19,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  puVar1[0x21] = 0;
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_00464e10 @ 00464e10 ////

undefined4 * __cdecl FUN_00464e10(int param_1,char param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca283b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x8c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00464cd0(puVar1);
  }
  local_4 = 0xffffffff;
  *(char *)(puVar1 + 0x22) = param_2;
  puVar1[0x21] = param_1;
  if (param_2 == '\0') {
    pvVar2 = FUN_009efb70(param_1);
  }
  else {
    FUN_009efad0(param_1);
    pvVar2 = (void *)FUN_009ef750();
  }
  puVar1[0x18] = pvVar2;
  puVar3 = FUN_009efc60(local_2c,param_1);
  FUN_004036d0(puVar1 + 0x19,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_00464ee0 @ 00464ee0 ////

void __fastcall FUN_00464ee0(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00464f00 @ 00464f00 ////

void __fastcall FUN_00464f00(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00464f50 @ 00464f50 ////

void __thiscall FUN_00464f50(void *this,undefined4 *param_1,char param_2)

{
  (**(code **)(*(int *)this + 0x1b4))();
  FUN_0052bf80(this,param_1,param_2);
  (**(code **)(*(int *)this + 0x1b0))();
  return;
}


//// FUNCTION FUN_00464f80 @ 00464f80 ////

undefined4 * __thiscall FUN_00464f80(void *this,byte param_1)

{
  FUN_009f0680(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00464fa0 @ 00464fa0 ////

void __fastcall FUN_00464fa0(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00465030 @ 00465030 ////

int * __thiscall FUN_00465030(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00465050 @ 00465050 ////

int __fastcall FUN_00465050(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}


//// FUNCTION FUN_00465070 @ 00465070 ////

int * __thiscall FUN_00465070(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004650b0 @ 004650b0 ////

int * __thiscall FUN_004650b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004650e0 @ 004650e0 ////

int * __thiscall FUN_004650e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00465120 @ 00465120 ////

void __thiscall FUN_00465120(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 1.0 / param_2;
  fVar1 = *(float *)((int)this + 8);
  fVar2 = *(float *)((int)this + 4);
  *param_1 = fVar3 * *(float *)this;
  param_1[1] = fVar3 * fVar2;
  param_1[2] = fVar3 * fVar1;
  return;
}


//// FUNCTION FUN_004652f0 @ 004652f0 ////

void __cdecl FUN_004652f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00465330 @ 00465330 ////

void __cdecl FUN_00465330(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}


//// FUNCTION FUN_004653f0 @ 004653f0 ////

void __cdecl FUN_004653f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -3;
    param_3 = param_3 + -3;
  }
  return;
}


//// FUNCTION FUN_00465510 @ 00465510 ////

void FUN_00465510(void)

{
  FUN_0098fdd0("PLot",&DAT_00f890ac);
  FUN_0098fdd0("PBillboard1",&DAT_00f89094);
  FUN_0098fdd0("PGatehouse",&DAT_00f89064);
  FUN_0098fdd0("PTheLandscape",&DAT_00f8907c);
  return;
}


//// FUNCTION FUN_00465550 @ 00465550 ////

float * __cdecl FUN_00465550(int *param_1,undefined4 param_2,int *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 *puStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  undefined1 local_18 [8];
  undefined1 auStack_10 [12];
  float *pfStack_4;
  
  puStack_40 = local_18;
  pfVar1 = (float *)(**(code **)(*param_3 + 0x34))();
  pfVar2 = (float *)(**(code **)(*param_1 + 0x34))(auStack_10);
  fStack_24 = pfVar1[2] + pfVar2[2];
  fStack_38 = (*pfVar1 + *pfVar2) * 0.5;
  fStack_34 = (pfVar1[1] + pfVar2[1]) * 0.5;
  fStack_30 = fStack_24 * 0.5;
  FUN_009840b0(&puStack_40,&fStack_38);
  if ((float)puStack_40 < *(float *)(DAT_00f890c0 + 0x44c)) {
    puStack_40 = *(undefined1 **)(DAT_00f890c0 + 0x44c);
  }
  if (*(float *)(DAT_00f890c0 + 0x454) < (float)puStack_40) {
    puStack_40 = *(undefined1 **)(DAT_00f890c0 + 0x454);
  }
  FUN_0046d2b0(pfStack_4,(float *)&puStack_40,0x31,2);
  return pfStack_4;
}


//// FUNCTION FUN_00465650 @ 00465650 ////

void FUN_00465650(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  local_24 = (float)(param_1 + -0x80) + (float)(param_1 + -0x80);
  iVar2 = (-(uint)((char)param_3 != '\0') & 0xffffff84) + 0x3e;
  local_20 = (float)(param_2 + -0x80) + (float)(param_2 + -0x80);
  iVar1 = (-(uint)((char)param_3 != '\0') & 0xffffffa0) + 0x30;
  local_14 = local_24;
  local_10 = local_20;
  FUN_0046d620(&local_24,iVar1,2,param_3);
  local_2c = local_14 + 0.5;
  local_20 = local_10;
  local_24 = local_2c;
  FUN_0046d620(&local_24,iVar2,2,param_3);
  local_28 = local_14 + 1.0;
  local_20 = local_10;
  local_24 = local_28;
  FUN_0046d620(&local_24,iVar2,2,param_3);
  local_34 = local_14 + 1.5;
  local_30 = local_10;
  local_24 = local_34;
  FUN_0046d620(&local_34,iVar1,2,param_3);
  local_34 = local_10 + 0.5;
  local_1c = local_14;
  local_18 = local_34;
  FUN_0046d620(&local_1c,iVar2,2,param_3);
  local_1c = local_2c;
  local_18 = local_34;
  FUN_0046d620(&local_1c,iVar2,2,param_3);
  local_1c = local_28;
  local_18 = local_34;
  FUN_0046d620(&local_1c,iVar2,2,param_3);
  local_1c = local_24;
  local_18 = local_34;
  FUN_0046d620(&local_1c,iVar2,2,param_3);
  local_34 = local_10 + 1.0;
  local_1c = local_14;
  local_18 = local_34;
  FUN_0046d620(&local_1c,iVar2,2,param_3);
  local_1c = local_2c;
  local_18 = local_34;
  FUN_0046d620(&local_1c,iVar2,2,param_3);
  local_1c = local_28;
  local_18 = local_34;
  FUN_0046d620(&local_1c,iVar2,2,param_3);
  local_1c = local_24;
  local_18 = local_34;
  FUN_0046d620(&local_1c,iVar2,2,param_3);
  local_1c = local_14;
  local_34 = local_10 + 1.5;
  local_18 = local_34;
  FUN_0046d620(&local_1c,iVar1,2,param_3);
  local_1c = local_2c;
  local_18 = local_34;
  FUN_0046d620(&local_1c,iVar2,2,param_3);
  local_1c = local_28;
  local_18 = local_34;
  FUN_0046d620(&local_1c,iVar2,2,param_3);
  local_1c = local_24;
  local_18 = local_34;
  FUN_0046d620(&local_1c,iVar1,2,param_3);
  return;
}


//// FUNCTION FUN_004658d0 @ 004658d0 ////

void FUN_004658d0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *_Memory;
  undefined1 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *local_c;
  int local_8;
  
  uVar4 = DAT_0105f8e8;
  local_c = &DAT_010b6fe0;
  _Memory = DAT_010b6fe0;
  while( true ) {
    if (_Memory == (undefined4 *)0x0) {
      local_c = param_1;
      local_8 = param_2;
      FUN_009e1980((int *)&local_c);
      FUN_00465650((int)param_1,param_2,1);
      DAT_0105f8e8 = uVar4;
      return;
    }
    iVar1 = _Memory[3];
    iVar2 = _Memory[4];
    puVar5 = (undefined4 *)(iVar1 + 0x80);
    iVar6 = iVar2 + 0x80;
    if ((((param_1 == puVar5) && (param_2 == iVar6)) ||
        ((iVar3 = _Memory[5], iVar3 == 0 &&
         (((param_1 == (undefined4 *)(iVar1 + 0x81) && (param_2 == iVar6)) ||
          ((param_1 == puVar5 && (param_2 == iVar2 + 0x81)))))))) ||
       (((iVar3 == 1 &&
         (((param_1 == (undefined4 *)(iVar1 + 0x7f) && (param_2 == iVar6)) ||
          ((param_1 == puVar5 && (param_2 == iVar2 + 0x81)))))) ||
        (((iVar3 == 2 &&
          (((param_1 == (undefined4 *)(iVar1 + 0x7f) && (param_2 == iVar6)) ||
           ((param_1 == puVar5 && (param_2 == iVar2 + 0x7f)))))) ||
         ((iVar3 == 3 &&
          (((param_1 == (undefined4 *)(iVar1 + 0x81) && (param_2 == iVar6)) ||
           ((param_1 == puVar5 && (param_2 == iVar2 + 0x7f)))))))))))) break;
    _Memory = (undefined4 *)_Memory[6];
    local_c = _Memory + 6;
  }
  *local_c = _Memory[6];
  FUN_009f0680(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00465a00 @ 00465a00 ////

void FUN_00465a00(int param_1,int param_2)

{
  undefined1 uVar1;
  int local_8;
  int local_4;
  
  uVar1 = DAT_0105f8e8;
  local_8 = param_1;
  local_4 = param_2;
  FUN_009e1ff0(&local_8);
  FUN_00465650(param_1,param_2,0);
  DAT_0105f8e8 = uVar1;
  return;
}


//// FUNCTION CLot_RefreshOccupancyGridForBounds @ 00465a50 ////

void __fastcall CLot_RefreshOccupancyGridForBounds(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *local_c;
  
  local_c = &DAT_010b6fe0;
  puVar8 = DAT_010b6fe0;
  while( true ) {
    if (puVar8 == (undefined4 *)0x0) {
      lVar9 = WorldToOccupancyGridCoord((float *)(param_1 + 0x44c));
      iVar3 = (int)((ulonglong)lVar9 >> 0x20);
      uVar10 = WorldToOccupancyGridCoord((float *)(param_1 + 0x454));
      while (iVar3 < (int)((ulonglong)uVar10 >> 0x20)) {
        iVar3 = (int)((ulonglong)lVar9 >> 0x20);
        local_c = (undefined4 *)lVar9;
        if ((int)local_c < (int)uVar10) {
          iVar5 = (int)local_c * 0x100 + iVar3;
          puVar8 = local_c;
          do {
            if (((-1 < (int)puVar8) && ((int)puVar8 < 0x100)) &&
               ((-1 < lVar9 &&
                ((lVar9 < 0x10000000000 &&
                 (iVar7 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3,
                 (*(byte *)(iVar7 + g_OccupancyGrid256_A) &
                 (byte)(1 << ((char)iVar5 + (char)iVar7 * -8 & 0x1fU))) != 0)))))) {
              FUN_00465650((int)puVar8,iVar3,1);
            }
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            iVar5 = iVar5 + 0x100;
          } while ((int)puVar8 < (int)uVar10);
        }
        iVar3 = iVar3 + 1;
        lVar9 = CONCAT44(iVar3,local_c);
      }
      DAT_0105f8e8 = 0;
      return;
    }
    iVar3 = puVar8[3];
    iVar5 = puVar8[4];
    iVar6 = iVar3 + 0x80;
    iVar7 = iVar5 + 0x80;
    if ((((((((-1 < iVar6) && (iVar6 < 0x100)) && (-1 < iVar7)) &&
           ((iVar7 < 0x100 &&
            (iVar4 = iVar6 * 0x100 + iVar7, iVar1 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3,
            (*(byte *)(iVar1 + g_OccupancyGrid256_A) &
            (byte)(1 << ((char)iVar4 + (char)iVar1 * -8 & 0x1fU))) != 0)))) ||
          ((iVar1 = puVar8[5], iVar1 == 0 &&
           ((((iVar4 = iVar3 + 0x81, -1 < iVar4 && (iVar4 < 0x100)) &&
             ((-1 < iVar7 &&
              ((iVar7 < 0x100 &&
               (iVar4 = iVar4 * 0x100 + iVar7, iVar2 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3,
               (*(byte *)(iVar2 + g_OccupancyGrid256_A) &
               (byte)(1 << ((char)iVar4 + (char)iVar2 * -8 & 0x1fU))) != 0)))))) ||
            (((iVar4 = iVar5 + 0x81, -1 < iVar6 &&
              (((iVar6 < 0x100 && (-1 < iVar4)) && (iVar4 < 0x100)))) &&
             (iVar4 = iVar6 * 0x100 + iVar4, iVar2 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3,
             (*(byte *)(iVar2 + g_OccupancyGrid256_A) &
             (byte)(1 << ((char)iVar4 + (char)iVar2 * -8 & 0x1fU))) != 0)))))))) ||
         ((iVar1 == 1 &&
          ((((iVar4 = iVar3 + 0x7f, -1 < iVar4 && (iVar4 < 0x100)) &&
            ((-1 < iVar7 &&
             ((iVar7 < 0x100 &&
              (iVar4 = iVar4 * 0x100 + iVar7, iVar2 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3,
              (*(byte *)(iVar2 + g_OccupancyGrid256_A) &
              (byte)(1 << ((char)iVar4 + (char)iVar2 * -8 & 0x1fU))) != 0)))))) ||
           ((iVar4 = iVar5 + 0x81, -1 < iVar6 &&
            ((((iVar6 < 0x100 && (-1 < iVar4)) && (iVar4 < 0x100)) &&
             (iVar4 = iVar6 * 0x100 + iVar4, iVar2 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3,
             (*(byte *)(iVar2 + g_OccupancyGrid256_A) &
             (byte)(1 << ((char)iVar4 + (char)iVar2 * -8 & 0x1fU))) != 0)))))))))) ||
        ((iVar1 == 2 &&
         ((((iVar4 = iVar3 + 0x7f, -1 < iVar4 && (iVar4 < 0x100)) &&
           ((-1 < iVar7 &&
            ((iVar7 < 0x100 &&
             (iVar4 = iVar4 * 0x100 + iVar7, iVar2 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3,
             (*(byte *)(iVar2 + g_OccupancyGrid256_A) &
             (byte)(1 << ((char)iVar4 + (char)iVar2 * -8 & 0x1fU))) != 0)))))) ||
          ((iVar4 = iVar5 + 0x7f, -1 < iVar6 &&
           ((((iVar6 < 0x100 && (-1 < iVar4)) && (iVar4 < 0x100)) &&
            (iVar4 = iVar6 * 0x100 + iVar4, iVar2 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3,
            (*(byte *)(iVar2 + g_OccupancyGrid256_A) &
            (byte)(1 << ((char)iVar4 + (char)iVar2 * -8 & 0x1fU))) != 0)))))))))) ||
       ((iVar1 == 3 &&
        ((((iVar3 = iVar3 + 0x81, -1 < iVar3 && (iVar3 < 0x100)) &&
          ((-1 < iVar7 &&
           ((iVar7 < 0x100 &&
            (iVar7 = iVar3 * 0x100 + iVar7, iVar3 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3,
            (*(byte *)(iVar3 + g_OccupancyGrid256_A) &
            (byte)(1 << ((char)iVar7 + (char)iVar3 * -8 & 0x1fU))) != 0)))))) ||
         (((iVar5 = iVar5 + 0x7f, -1 < iVar6 &&
           (((iVar6 < 0x100 && (-1 < iVar5)) && (iVar5 < 0x100)))) &&
          (iVar5 = iVar6 * 0x100 + iVar5, iVar3 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3,
          (*(byte *)(iVar3 + g_OccupancyGrid256_A) &
          (byte)(1 << ((char)iVar5 + (char)iVar3 * -8 & 0x1fU))) != 0)))))))) break;
    puVar8 = (undefined4 *)puVar8[6];
    local_c = puVar8 + 6;
  }
  *local_c = puVar8[6];
  FUN_009f0680(puVar8);
                    /* WARNING: Subroutine does not return */
  _free(puVar8);
}


//// FUNCTION FUN_00465e60 @ 00465e60 ////

void __thiscall FUN_00465e60(void *this,float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = FUN_00990e30(*(float *)((int)this + 0x44c),*(float *)((int)this + 0x454));
  fVar2 = FUN_00990e30(*(float *)((int)this + 0x458),*(float *)((int)this + 0x450));
  *param_1 = (float)fVar1;
  param_1[1] = (float)fVar2;
  param_1[2] = 0.0;
  return;
}


//// FUNCTION FUN_00465ec0 @ 00465ec0 ////

void __thiscall FUN_00465ec0(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  float afStack_28 [2];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 local_14 [16];
  
  do {
    puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0x7c))(local_14);
    uStack_20 = *puVar2;
    uStack_1c = puVar2[1];
    uStack_18 = puVar2[2];
    FUN_009840b0(afStack_28,&uStack_20);
    cVar1 = FUN_0046d260(afStack_28,0x41);
  } while (cVar1 == '\0');
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  return;
}


//// FUNCTION FUN_00465f40 @ 00465f40 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465f40(float *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_8;
  
  local_8 = 0.0;
  iVar2 = GetPlayerStudio();
  if (iVar2 != 0) {
    iVar2 = GetPlayerStudio();
    iVar2 = FUN_0050ab40(iVar2);
    if (DAT_00e50430 <= (float)iVar2) {
      iVar2 = GetPlayerStudio();
      iVar2 = FUN_0050ab40(iVar2);
      local_8 = (float)iVar2;
    }
    else {
      local_8 = DAT_00e50430;
    }
    piVar3 = (int *)GetPlayerStudio();
    iVar2 = (**(code **)(*piVar3 + 0x8c))();
    fVar1 = _DAT_00e50434;
    if (_DAT_00e50434 <= (float)iVar2) {
      piVar3 = (int *)GetPlayerStudio();
      iVar2 = (**(code **)(*piVar3 + 0x8c))();
      fVar1 = (float)iVar2;
    }
    local_8 = (_DAT_00e50420 * local_8 + fVar1 * _DAT_00e50424) * 0.5;
    local_8 = (_DAT_00f89044 - local_8) / local_8;
    if (local_8 < 0.0) {
      *param_1 = 0.0;
      return;
    }
    if (1.0 < local_8) {
      *param_1 = 1.0;
      return;
    }
  }
  *param_1 = local_8;
  return;
}


//// FUNCTION FUN_00466060 @ 00466060 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466060(float *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_8;
  
  local_8 = 0.0;
  iVar2 = GetPlayerStudio();
  if (iVar2 != 0) {
    iVar2 = GetPlayerStudio();
    iVar2 = FUN_0050ab40(iVar2);
    if (DAT_00e50430 <= (float)iVar2) {
      iVar2 = GetPlayerStudio();
      iVar2 = FUN_0050ab40(iVar2);
      local_8 = (float)iVar2;
    }
    else {
      local_8 = DAT_00e50430;
    }
    piVar3 = (int *)GetPlayerStudio();
    iVar2 = (**(code **)(*piVar3 + 0x8c))();
    fVar1 = _DAT_00e50434;
    if (_DAT_00e50434 <= (float)iVar2) {
      piVar3 = (int *)GetPlayerStudio();
      iVar2 = (**(code **)(*piVar3 + 0x8c))();
      fVar1 = (float)iVar2;
    }
    local_8 = (_DAT_00e50418 * local_8 + fVar1 * _DAT_00e5041c) * 0.5;
    local_8 = (_DAT_00f89040 - local_8) / local_8;
    if (local_8 < 0.0) {
      *param_1 = 0.0;
      return;
    }
    if (1.0 < local_8) {
      *param_1 = 1.0;
      return;
    }
  }
  *param_1 = local_8;
  return;
}


//// FUNCTION FUN_00466180 @ 00466180 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466180(float *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_8;
  
  local_8 = 0.0;
  iVar2 = GetPlayerStudio();
  if (iVar2 != 0) {
    iVar2 = GetPlayerStudio();
    iVar2 = FUN_0050ab40(iVar2);
    if (DAT_00e50430 <= (float)iVar2) {
      iVar2 = GetPlayerStudio();
      iVar2 = FUN_0050ab40(iVar2);
      local_8 = (float)iVar2;
    }
    else {
      local_8 = DAT_00e50430;
    }
    piVar3 = (int *)GetPlayerStudio();
    iVar2 = (**(code **)(*piVar3 + 0x8c))();
    fVar1 = _DAT_00e50434;
    if (_DAT_00e50434 <= (float)iVar2) {
      piVar3 = (int *)GetPlayerStudio();
      iVar2 = (**(code **)(*piVar3 + 0x8c))();
      fVar1 = (float)iVar2;
    }
    local_8 = _DAT_00f89048 / (_DAT_00e50428 * local_8 + _DAT_00e5042c * fVar1);
    if (local_8 < 0.0) {
      *param_1 = 0.0;
      return;
    }
    if (1.0 < local_8) {
      *param_1 = 1.0;
      return;
    }
  }
  *param_1 = local_8;
  return;
}


//// FUNCTION FUN_00466290 @ 00466290 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466290(float *param_1)

{
  float fVar1;
  
  fVar1 = 1.0 - _DAT_00f8904c / _DAT_00e50438;
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


//// FUNCTION FUN_004662e0 @ 004662e0 ////

undefined4 FUN_004662e0(void)

{
  return *(undefined4 *)(DAT_00f890c0 + 0x480);
}


//// FUNCTION FUN_004662f0 @ 004662f0 ////

void FUN_004662f0(void)

{
  if (*(int *)(DAT_00f890c0 + 0x47c) < 1) {
    *(undefined4 *)(DAT_00f890c0 + 0x47c) = 7;
  }
  return;
}


//// FUNCTION FUN_004663a0 @ 004663a0 ////

void __fastcall FUN_004663a0(int param_1)

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


//// FUNCTION FUN_004665c0 @ 004665c0 ////

void __cdecl FUN_004665c0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00466690 @ 00466690 ////

void __cdecl FUN_00466690(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00466710 @ 00466710 ////

void __fastcall FUN_00466710(int *param_1)

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
  puStack_8 = &LAB_00ca2858;
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


//// FUNCTION FUN_004667e0 @ 004667e0 ////

void __fastcall FUN_004667e0(int param_1)

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
  puStack_8 = &LAB_00ca28a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Lot.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x6f;
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
  uVar3 = FUN_0098b490("(int&)(CurrentSize)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x408),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Lot.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x70;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe5043c);
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
  uVar3 = FUN_0098b490("SL_CamPos");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x428),0xc);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Lot.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x71;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar2 = (char *)FUN_00ace33d(0xe5043c);
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
  uVar3 = FUN_0098b490("SL_CamFoc");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x434),0xc);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Lot.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x72;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("SL_CamRot");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x444),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Lot.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x73;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("SL_CamZoo");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x440),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Lot.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x74;
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
  uVar3 = FUN_0098b490("SL_GameSpeed");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x448),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Lot.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x75;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
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
  uVar3 = FUN_0098b490("SL_Version");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x44c));
  }
  FUN_0052a850(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00466e40 @ 00466e40 ////

uint __thiscall FUN_00466e40(void *this,float *param_1)

{
  uint uVar1;
  void *pvVar2;
  float local_10 [2];
  float local_8 [2];
  
  FUN_009840b0(local_10,param_1);
  uVar1 = FUN_004512c0((void *)((int)this + 0x44c),local_10);
  if ((char)uVar1 != '\0') {
    if (*(char *)(DAT_00f87b04 + 4) == '\0') {
      uVar1 = FUN_009a20f0(&DAT_0105c2e8,param_1,3.0);
      if ((char)uVar1 != '\0') goto LAB_00466ecb;
    }
    FUN_009840b0(local_8,param_1);
    uVar1 = FUN_0046d260(local_8,0x31);
    if ((char)uVar1 != '\0') {
      pvVar2 = FUN_00458d80(DAT_00f88720,param_1,0.25);
      if ((*(int *)((int)pvVar2 + 4) == 0) ||
         (uVar1 = *(int *)((int)pvVar2 + 8) - *(int *)((int)pvVar2 + 4) >> 2, pvVar2 = (void *)0x0,
         uVar1 == 0)) {
        return CONCAT31((int3)((uint)pvVar2 >> 8),1);
      }
    }
  }
LAB_00466ecb:
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00466ee0 @ 00466ee0 ////

void __thiscall FUN_00466ee0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  float10 fVar5;
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
  undefined4 local_4;
  
  local_c = 5.0;
  local_8 = 5.0;
  local_4 = 0;
  FUN_009840b0(&local_30,&local_c);
  fVar1 = local_30 + *(float *)((int)this + 0x44c);
  local_c = 5.0;
  local_8 = 5.0;
  fVar2 = local_2c + *(float *)((int)this + 0x450);
  local_4 = 0;
  FUN_009840b0(&local_24,&local_c);
  local_30 = *(float *)((int)this + 0x454) - local_24;
  local_10 = param_2[2];
  local_2c = *(float *)((int)this + 0x458) - local_20;
  local_18 = *param_2;
  if (*param_2 <= fVar1) {
    local_18 = fVar1;
  }
  if (local_30 <= local_18) {
    local_18 = local_30;
  }
  local_14 = param_2[1];
  if (param_2[1] <= fVar2) {
    local_14 = fVar2;
  }
  if (local_2c <= local_14) {
    local_14 = local_2c;
  }
  uVar3 = FUN_00466e40(this,&local_18);
  if ((char)uVar3 != '\0') goto LAB_00467243;
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  if ((*(char *)(DAT_00f87b04 + 4) == '\0') &&
     (uVar4 = FUN_009a20f0(&DAT_0105c2e8,&local_24,3.0), (char)uVar4 != '\0')) {
    local_4 = 0;
    local_1c = 0.0;
    local_24 = fVar1;
    local_20 = fVar2;
    local_c = fVar1;
    local_8 = fVar2;
    uVar4 = FUN_009a20f0(&DAT_0105c2e8,&local_24,3.0);
    if ((char)uVar4 == '\0') goto LAB_00467154;
    local_c = local_30;
    local_24 = local_30;
    local_4 = 0;
    local_1c = 0.0;
    local_20 = fVar2;
    local_8 = fVar2;
    uVar4 = FUN_009a20f0(&DAT_0105c2e8,&local_24,3.0);
    if ((char)uVar4 == '\0') goto LAB_00467154;
    local_c = local_30;
    local_24 = local_30;
    local_8 = local_2c;
    local_4 = 0;
    local_20 = local_2c;
    local_1c = 0.0;
    uVar4 = FUN_009a20f0(&DAT_0105c2e8,&local_24,3.0);
    if ((char)uVar4 == '\0') goto LAB_00467154;
    local_8 = local_2c;
    local_4 = 0;
    local_20 = local_2c;
    local_1c = 0.0;
    local_24 = fVar1;
    local_c = fVar1;
    uVar4 = FUN_009a20f0(&DAT_0105c2e8,&local_24,3.0);
    if ((char)uVar4 == '\0') goto LAB_00467154;
  }
  else {
LAB_00467154:
    local_30 = local_24 - local_18;
    local_2c = local_20 - local_14;
    local_28 = local_1c - local_10;
    fVar5 = FUN_00412e20(&local_30);
    local_30 = local_30 * 0.4;
    local_2c = local_2c * 0.4;
    local_28 = local_28 * 0.4;
    param_2 = (float *)(float)(fVar5 * (float10)2.5);
    if ((float10)0.0 < fVar5 * (float10)2.5) {
      do {
        uVar3 = FUN_00466e40(this,&local_18);
        if ((char)uVar3 != '\0') goto LAB_00467243;
        local_18 = local_30 + local_18;
        local_14 = local_2c + local_14;
        local_10 = local_28 + local_10;
        param_2 = (float *)((float)param_2 - 1.0);
      } while (0.0 < (float)param_2);
    }
  }
  local_18 = -27.0;
  local_14 = 7.0;
  local_10 = 0.0;
LAB_00467243:
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  return;
}


//// FUNCTION CLot_ComputeWorldBoundsFromTier @ 00467260 ////

void CLot_ComputeWorldBoundsFromTier(void)

{
  int iVar1;
  float10 extraout_ST0;
  float10 fVar2;
  ulonglong uVar3;
  float local_10 [3];
  float local_4;
  
  iVar1 = DAT_00f890c0;
  uVar3 = FUN_00acd42c();
  local_10[1] = -45.0;
  fVar2 = extraout_ST0 - (float10)((int)uVar3 / 2) * (float10)20.0;
  *(float *)(iVar1 + 0x44c) = (float)fVar2;
  *(float *)(DAT_00f890c0 + 0x450) = *(float *)(DAT_00f890c0 + 0x420) + 2.0;
  *(float *)(DAT_00f890c0 + 0x454) =
       (float)(fVar2 + (float10)*(float *)(DAT_00f890c0 + 0x484 + *(int *)(DAT_00f890c0 + 0x480) * 8
                                          ));
  *(float *)(DAT_00f890c0 + 0x458) =
       *(float *)(DAT_00f890c0 + 0x488 + *(int *)(DAT_00f890c0 + 0x480) * 8) +
       *(float *)(DAT_00f890c0 + 0x420) + 2.0;
  local_10[0] = (float)fVar2;
  local_4 = *(float *)(DAT_00f890c0 + 0x488 + *(int *)(DAT_00f890c0 + 0x480) * 8) + 45.0;
  local_10[2] = *(float *)(DAT_00f890c0 + 0x484 + *(int *)(DAT_00f890c0 + 0x480) * 8);
  FUN_0046dda0(local_10 + 2,local_10,(float *)&DAT_00d1b43c);
  DAT_00f89050 = 0;
  if (*(int *)(DAT_00f890c0 + 0x47c) < 1) {
    *(undefined4 *)(DAT_00f890c0 + 0x47c) = 7;
  }
  return;
}


//// FUNCTION CLot_LoadSizeTiers @ 004675f0 ////

int __fastcall CLot_LoadSizeTiers(int param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  float10 extraout_ST0;
  ulonglong uVar4;
  ulonglong uVar5;
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
  puStack_8 = &LAB_00ca2928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)FUN_00528140(param_1);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"size",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_4 = 0;
  FUN_00558a50(this,&local_4c,(undefined4 *)0x1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"0",1);
  local_48 = 1;
  local_4c[1] = '\0';
  local_4 = 1;
  puVar1 = FUN_005584e0(this,local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,2);
  puVar1 = (undefined4 *)FUN_00567da0(local_54,puVar1,'\0');
  *(undefined4 *)(param_1 + 0x484) = *puVar1;
  *(undefined4 *)(param_1 + 0x488) = puVar1[1];
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
  _strncpy(local_4c,"1",1);
  local_48 = 1;
  local_4c[1] = '\0';
  local_4 = 3;
  puVar1 = FUN_005584e0(this,local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,4);
  puVar1 = (undefined4 *)FUN_00567da0(local_54,puVar1,'\0');
  *(undefined4 *)(param_1 + 0x48c) = *puVar1;
  *(undefined4 *)(param_1 + 0x490) = puVar1[1];
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
  _strncpy(local_4c,"2",1);
  local_48 = 1;
  local_4c[1] = '\0';
  local_4 = 5;
  puVar1 = FUN_005584e0(this,local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,6);
  puVar1 = (undefined4 *)FUN_00567da0(local_54,puVar1,'\0');
  *(undefined4 *)(param_1 + 0x494) = *puVar1;
  *(undefined4 *)(param_1 + 0x498) = puVar1[1];
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  uVar4 = FUN_00acd42c();
  iVar2 = 3;
  pfVar3 = (float *)(param_1 + 0x488);
  do {
    uVar5 = FUN_00acd42c();
    local_54[0] = (float)((int)uVar5 / 0x14 - (int)uVar4 / 0x14);
    pfVar3[-1] = (float)((float10)(int)local_54[0] * (float10)20.0 + extraout_ST0);
    uVar5 = FUN_00acd42c();
    local_54[0] = (float)((int)uVar5 / 0x14);
    iVar2 = iVar2 + -1;
    *pfVar3 = (float)(int)local_54[0] * 20.0;
    pfVar3 = pfVar3 + 2;
  } while (iVar2 != 0);
  ExceptionList = local_c;
  return (int)uVar5 * 0x66666667;
}


//// FUNCTION FUN_00467910 @ 00467910 ////

void __fastcall FUN_00467910(int param_1)

{
  undefined4 *puVar1;
  void *local_20 [2];
  uint local_18;
  
  ISerializable_WriteObjectHeader();
  FUN_00412b60(DAT_00f87aa0,(undefined4 *)(param_1 + 0x428),(undefined4 *)(param_1 + 0x434),
               (undefined4 *)(param_1 + 0x440),(undefined4 *)(param_1 + 0x444));
  puVar1 = FUN_00421700();
  puVar1 = FUN_00568870(local_20,puVar1);
  FUN_004015d0((void *)(param_1 + 0x44c),(char *)*puVar1,puVar1[1]);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return;
}


//// FUNCTION FUN_004679d0 @ 004679d0 ////

void __fastcall FUN_004679d0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d1b478;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00467a20 @ 00467a20 ////

void __fastcall FUN_00467a20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1b478;
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


//// FUNCTION FUN_00467a70 @ 00467a70 ////

void __fastcall FUN_00467a70(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d1b488;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00467aa0 @ 00467aa0 ////

void __fastcall FUN_00467aa0(int param_1)

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


//// FUNCTION FUN_00467ac0 @ 00467ac0 ////

void __fastcall FUN_00467ac0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1b488;
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


//// FUNCTION FUN_00467b10 @ 00467b10 ////

void __fastcall FUN_00467b10(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d1b498;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00467b60 @ 00467b60 ////

void __fastcall FUN_00467b60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1b498;
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


//// FUNCTION FUN_00467bb0 @ 00467bb0 ////

void __fastcall FUN_00467bb0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d1b4a8;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00467c00 @ 00467c00 ////

void __fastcall FUN_00467c00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1b4a8;
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


//// FUNCTION FUN_00467ca0 @ 00467ca0 ////

void * FUN_00467ca0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00467cd0 @ 00467cd0 ////

void __cdecl FUN_00467cd0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    param_1 = param_1 + 3;
  }
  return;
}


//// FUNCTION FUN_00467d50 @ 00467d50 ////

void FUN_00467d50(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = DAT_00f890c0;
  if (DAT_00f890c0 != 0) {
    piVar1 = (int *)(DAT_00f890c0 + 0x158);
    if (*(int **)(DAT_00f890c0 + 0x15c) != (int *)0x0) {
      **(int **)(DAT_00f890c0 + 0x15c) = *piVar1;
    }
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(iVar3 + 0x15c);
    }
    *piVar1 = 0;
    *(undefined4 *)(iVar3 + 0x15c) = 0;
  }
  if ((int **)DAT_0104c4d8 != &DAT_0104c4e4) {
    do {
      piVar4 = DAT_0104c4d8;
      puVar2 = (undefined4 *)DAT_0104c4d8[2];
      piVar1 = DAT_0104c4d8 + 1;
      if ((int *)DAT_0104c4d8[1] != (int *)0x0) {
        *(int *)DAT_0104c4d8[1] = *DAT_0104c4d8;
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
    } while ((int **)DAT_0104c4d8 != &DAT_0104c4e4);
  }
  if (DAT_00f890c0 != 0) {
    piVar1 = (int *)(DAT_00f890c0 + 0x158);
    *(int ***)(DAT_00f890c0 + 0x15c) = &DAT_0104c4e4;
    *piVar1 = (int)DAT_0104c4e4;
    *(int **)((int)DAT_0104c4e4 + 4) = piVar1;
    DAT_0104c4e4 = piVar1;
  }
  return;
}


//// FUNCTION FUN_00467e10 @ 00467e10 ////

void __fastcall FUN_00467e10(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_00423320(DAT_00f87b04);
  if (iVar2 == 0) {
    cVar1 = FUN_004201b0(DAT_00f87b04);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(DAT_0104cdf4 + 0x38);
    }
    else {
      *(undefined4 *)(param_1 + 0x4c0) = 0;
    }
  }
  piVar3 = *(int **)(param_1 + 0x464);
  if (piVar3 != *(int **)(param_1 + 0x468)) {
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 0x10))(0,1);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 0x468));
  }
  return;
}


//// FUNCTION FUN_00467f60 @ 00467f60 ////

void FUN_00467f60(float *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float local_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  local_c = 1.0;
  puVar4 = DAT_0104c4d8;
  if (DAT_0104c4d8 != &DAT_0104c4e4) {
    do {
      cVar2 = (**(code **)(*(int *)puVar4[2] + 0x10c))();
      if ((cVar2 != '\0') &&
         (pfVar3 = (float *)(**(code **)(*(int *)puVar4[2] + 0xb8))(auStack_8), *pfVar3 <= local_c))
      {
        pfVar3 = (float *)(**(code **)(*(int *)puVar4[2] + 0xb8))(auStack_4);
        local_c = *pfVar3;
      }
      puVar1 = puVar4 + 1;
      puVar4 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104c4e4);
    if (local_c < 0.0) {
      *param_1 = 0.0;
      return;
    }
    if (1.0 < local_c) {
      *param_1 = 1.0;
      return;
    }
  }
  *param_1 = local_c;
  return;
}


//// FUNCTION FUN_00468030 @ 00468030 ////

void FUN_00468030(float *param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float local_c;
  undefined1 local_8 [4];
  undefined1 auStack_4 [4];
  
  local_c = 1.0;
  puVar3 = DAT_0104c4d8;
  if (DAT_0104c4d8 != &DAT_0104c4e4) {
    do {
      pfVar2 = (float *)(**(code **)(*(int *)puVar3[2] + 0xf0))(local_8);
      if (*pfVar2 <= local_c) {
        pfVar2 = (float *)(**(code **)(*(int *)puVar3[2] + 0xf0))(auStack_4);
        local_c = *pfVar2;
      }
      puVar1 = puVar3 + 1;
      puVar3 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104c4e4);
    if (local_c < 0.0) {
      *param_1 = 0.0;
      return;
    }
    if (1.0 < local_c) {
      *param_1 = 1.0;
      return;
    }
  }
  *param_1 = local_c;
  return;
}


//// FUNCTION FUN_00468100 @ 00468100 ////

void __fastcall FUN_00468100(int param_1)

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


//// FUNCTION FUN_00468130 @ 00468130 ////

undefined4 * FUN_00468130(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00468220 @ 00468220 ////

void __fastcall FUN_00468220(int param_1)

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


//// FUNCTION FUN_00468250 @ 00468250 ////

void __fastcall FUN_00468250(int param_1)

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


//// FUNCTION FUN_00468280 @ 00468280 ////

undefined4 * FUN_00468280(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00467cd0(param_1,param_2,param_3);
  return param_1 + param_2 * 3;
}


//// FUNCTION FUN_004682c0 @ 004682c0 ////

void __fastcall FUN_004682c0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca2964;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1b4f4;
  param_1[0x1e] = &PTR_LAB_00d1b4d0;
  param_1[0x28] = &PTR_FUN_00d1b4b8;
  local_4 = 2;
  if (g_TMLandscape != (undefined4 *)0x0) {
    (**(code **)*g_TMLandscape)(1);
  }
  (*(code *)DAT_00f8907c[1])();
  g_TMLandscape = (undefined4 *)0x0;
  (*(code *)*DAT_00f8907c)();
  if ((void *)param_1[0x11e] != (void *)0x0) {
    FUN_009de3b0((void *)param_1[0x11e]);
    param_1[0x11e] = 0;
  }
  if ((void *)param_1[0x11c] != (void *)0x0) {
    FUN_009de3b0((void *)param_1[0x11c]);
    param_1[0x11c] = 0;
  }
  if ((void *)param_1[0x11d] != (void *)0x0) {
    FUN_009de3b0((void *)param_1[0x11d]);
    param_1[0x11d] = 0;
  }
  if (0x14 < (uint)param_1[0x133]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x131]);
  }
  if ((void *)param_1[0x119] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x119]);
  }
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  local_4 = 0xffffffff;
  FUN_005328f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00468470 @ 00468470 ////

void __fastcall FUN_00468470(int param_1)

{
  undefined4 *this;
  undefined1 uVar1;
  int *piVar2;
  LONG LVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x464);
  if (puVar4 != *(undefined4 **)(param_1 + 0x468)) {
    do {
      this = (undefined4 *)*puVar4;
      if (this != (undefined4 *)0x0) {
        piVar2 = FUN_0097fc60(this,(int *)0x0,2);
        if (DAT_00f89050 != '\0') {
          FUN_0046d730(piVar2,-0x7ff,1);
        }
        if (piVar2 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar2);
        }
        FUN_009e45b0(this);
        LVar3 = InterlockedDecrement(this + 4);
        uVar1 = DAT_0105b588;
        DAT_0105b588 = uVar1;
        if (LVar3 == 0) {
          DAT_0105b588 = 1;
          (**(code **)*this)(1);
          DAT_0105b588 = uVar1;
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(param_1 + 0x468));
  }
  if (*(void **)(param_1 + 0x464) == (void *)0x0) {
    *(undefined4 *)(param_1 + 0x464) = 0;
    *(undefined4 *)(param_1 + 0x468) = 0;
    *(undefined4 *)(param_1 + 0x46c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x464));
}


//// FUNCTION FUN_004685f0 @ 004685f0 ////

void FUN_004685f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0046a9c0();
  FUN_00468470((int)DAT_00f890c0);
  FUN_008b7c00();
  FUN_00467d50();
  puVar2 = DAT_00f890c0;
  if (DAT_00f890c0 != (undefined4 *)0x0) {
    iVar1 = DAT_00f890c0[0x12];
    DAT_00f890c0[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f890ac[1])();
    DAT_00f890c0 = (undefined4 *)0x0;
    (*(code *)*DAT_00f890ac)();
  }
  FUN_0046e4c0();
  FUN_009e4ce0();
  FUN_008446d0();
  FUN_004d3950();
  FUN_0048a7d0();
  FUN_0048ac00();
  return;
}


//// FUNCTION FUN_00468670 @ 00468670 ////

void __fastcall FUN_00468670(int param_1)

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


//// FUNCTION FUN_004686a0 @ 004686a0 ////

undefined4 * __thiscall FUN_004686a0(void *this,byte param_1)

{
  FUN_004682c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004686c0 @ 004686c0 ////

void __fastcall FUN_004686c0(int param_1)

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


//// FUNCTION FUN_004686f0 @ 004686f0 ////

void FUN_004686f0(void)

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
  puStack_8 = &LAB_00ca2978;
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


//// FUNCTION FUN_00468760 @ 00468760 ////

void FUN_00468760(void)

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
  puStack_8 = &LAB_00ca2998;
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


//// FUNCTION FUN_004687d0 @ 004687d0 ////

void __fastcall FUN_004687d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1b6c8;
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


//// FUNCTION FUN_00468820 @ 00468820 ////

undefined4 * __thiscall FUN_00468820(void *this,byte param_1)

{
  FUN_004687d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004688e0 @ 004688e0 ////

void __thiscall FUN_004688e0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_004686f0();
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
      _Dst = FUN_00468130((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00467ca0(param_1,iVar5,param_1 + param_2);
      FUN_00468130(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_004652f0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00467ca0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_004665c0(param_1,(int)pvVar3,iVar5);
    FUN_004652f0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00468ac0 @ 00468ac0 ////

void __thiscall FUN_00468ac0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca29b0;
  local_10 = ExceptionList;
  local_20 = *param_3;
  local_1c = param_3[1];
  iVar3 = *(int *)((int)this + 4);
  local_18 = param_3[2];
  local_14 = &stack0xffffffd4;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0xc;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd4;
    if (0x15555555U - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_00468760();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0x15555555 - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0xc;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_00465050((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0xc);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_00466690(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00467cd0(puVar5,param_2,&local_20);
      FUN_00466690(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 3);
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 3;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 3;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 0xc) < param_2) {
      FUN_00466690(param_1,puVar4,param_1 + param_2 * 3);
      local_8 = 2;
      FUN_00468280(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0xc,&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 0xc;
      *(int *)((int)this + 8) = iVar3;
      FUN_00465330(param_1,(undefined4 *)(iVar3 + param_2 * -0xc),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00466690(puVar4 + param_2 * -3,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_004653f0(param_1,puVar4 + param_2 * -3,puVar4);
    FUN_00465330(param_1,param_1 + param_2 * 3,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00468df0 @ 00468df0 ////

void __thiscall FUN_00468df0(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0xc != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0xc;
      goto LAB_00468e33;
    }
  }
  iVar1 = 0;
LAB_00468e33:
  FUN_00468ac0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0xc;
  return;
}


//// FUNCTION FUN_00468e60 @ 00468e60 ////

undefined4 * __fastcall FUN_00468e60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca29c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00534f30(param_1);
  *param_1 = &PTR_FUN_00d1b4f4;
  param_1[0x1e] = &PTR_LAB_00d1b4d0;
  param_1[0x28] = &PTR_FUN_00d1b4b8;
  param_1[0x114] = 0;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  param_1[0x113] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0x14;
  param_1[0x131] = param_1 + 0x134;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0xc1e00000;
  param_1[0x10b] = 0x41200000;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0xc2326666;
  param_1[0x10e] = 0x400ccccd;
  param_1[0x10f] = 0;
  param_1[0x110] = 0x41e60000;
  param_1[0x111] = 0x400ccccd;
  param_1[0x104] = 0;
  param_1[0x11e] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11f] = 0;
  param_1[0x117] = 0;
  *(undefined1 *)(param_1 + 0x105) = 0;
  param_1[0x112] = 0;
  *(undefined1 *)(param_1 + 0x127) = 0;
  param_1[0x120] = 2;
  param_1[0x106] = 5;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00468fe0 @ 00468fe0 ////

int * FUN_00468fe0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  void *unaff_EBX;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca29f3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x4e4);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00468e60(puVar1);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"lot",3);
  local_28 = 3;
  local_2c[3] = '\0';
  local_4 = 1;
  (**(code **)(*piVar2 + 0x1a4))(&local_2c,0);
  if (&DAT_00000014 < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  ExceptionList = pvStack_14;
  return piVar2;
}


//// FUNCTION FUN_004690a0 @ 004690a0 ////

void __thiscall FUN_004690a0(void *this,undefined4 *param_1)

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
  FUN_004688e0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION SpawnPointList_Append @ 004690f0 ////

void __thiscall SpawnPointList_Append(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0xc) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0xc))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00467cd0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 3;
    return;
  }
  FUN_00468df0(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00469170 @ 00469170 ////

void __thiscall FUN_00469170(void *this,float *param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 uVar5;
  float *pfStack_20;
  int *local_10;
  float fStack_c;
  float fStack_8;
  
  pfStack_20 = (float *)0x46917d;
  piVar3 = FUN_00433eb0();
  piVar3[0x27] = piVar3[0x27] & 0xfffffffdU | 0x80;
  pfStack_20 = param_1;
  local_10 = piVar3;
  (**(code **)(*piVar3 + 0x18))();
  uVar5 = 0x3f800000;
  fVar4 = FUN_004012c0(param_2);
  local_10 = (int *)(*(float *)((int)this + 0x41c) + *param_1);
  fStack_c = *(float *)((int)this + 0x420) + param_1[1];
  fStack_8 = *(float *)((int)this + 0x424) + param_1[2];
  (**(code **)(*piVar3 + 0x20))(&local_10,(float)fVar4,uVar5);
  FUN_009e4330(piVar3);
  iVar1 = *(int *)((int)this + 0x464);
  if ((iVar1 == 0) ||
     ((uint)(*(int *)((int)this + 0x46c) - iVar1 >> 2) <=
      (uint)(*(int *)((int)this + 0x468) - iVar1 >> 2))) {
    FUN_004688e0((void *)((int)this + 0x460),*(undefined4 **)((int)this + 0x468),1,&pfStack_20);
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 0x468);
    *puVar2 = piVar3;
    *(undefined4 **)((int)this + 0x468) = puVar2 + 1;
  }
  piVar3 = FUN_0097fc60(piVar3,(int *)0x0,2);
  FUN_0046d730(piVar3,0x7ff,1);
  DAT_00f89050 = 1;
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*piVar3);
  }
  return;
}


//// FUNCTION CLot_BuildPerimeterWallAndGate @ 00469290 ////

void __fastcall CLot_BuildPerimeterWallAndGate(void *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if ((((*(int *)((int)param_1 + 0x470) != 0) && (*(int *)((int)param_1 + 0x474) != 0)) &&
      (*(int *)((int)param_1 + 0x478) != 0)) &&
     ((((*(uint *)(*(int *)((int)param_1 + 0x470) + 0xe4) >> 6 & 1) != 0 &&
       ((*(uint *)(*(int *)((int)param_1 + 0x474) + 0xe4) >> 6 & 1) != 0)) &&
      ((*(uint *)(*(int *)((int)param_1 + 0x478) + 0xe4) >> 6 & 1) != 0)))) {
    FUN_00468470((int)param_1);
    uVar4 = FUN_00acd42c();
    local_18 = *(float *)((int)param_1 + 0x434);
    local_14 = *(float *)((int)param_1 + 0x438);
    local_10 = *(undefined4 *)((int)param_1 + 0x43c);
    iVar3 = (int)uVar4 / 2;
    iVar2 = iVar3;
    if (0 < iVar3) {
      do {
        local_18 = local_18 - 20.0;
        FUN_00469170(param_1,*(float **)((int)param_1 + 0x470),(float)&local_18);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_c = *(float *)((int)param_1 + 0x440);
    local_8 = *(float *)((int)param_1 + 0x444);
    local_4 = *(undefined4 *)((int)param_1 + 0x448);
    iVar3 = (int)uVar4 - iVar3;
    if (0 < iVar3) {
      do {
        FUN_00469170(param_1,*(float **)((int)param_1 + 0x470),(float)&local_c);
        iVar3 = iVar3 + -1;
        local_c = local_c + 20.0;
      } while (iVar3 != 0);
    }
    uVar4 = FUN_00acd42c();
    iVar2 = (int)uVar4;
    if (0 < iVar2) {
      do {
        FUN_00469170(param_1,*(float **)((int)param_1 + 0x470),(float)&local_18);
        FUN_00469170(param_1,*(float **)((int)param_1 + 0x470),(float)&local_c);
        iVar2 = iVar2 + -1;
        local_14 = local_14 + 20.0;
        local_8 = local_8 + 20.0;
      } while (iVar2 != 0);
    }
    FUN_00469170(param_1,*(float **)((int)param_1 + 0x474),(float)&local_c);
    uVar4 = FUN_00acd42c();
    iVar2 = (int)uVar4 / 2;
    if (0 < iVar2) {
      do {
        FUN_00469170(param_1,*(float **)((int)param_1 + 0x470),(float)&local_18);
        local_18 = local_18 + 20.0;
        local_c = local_c - 20.0;
        FUN_00469170(param_1,*(float **)((int)param_1 + 0x470),(float)&local_c);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    fVar1 = local_18 - local_c;
    while (fVar1 < 0.0) {
      FUN_00469170(param_1,*(float **)((int)param_1 + 0x470),(float)&local_18);
      local_18 = local_18 + 20.0;
      fVar1 = local_18 - local_c;
    }
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = 0;
    FUN_00469170(param_1,*(float **)((int)param_1 + 0x478),(float)&local_c);
    if (*(void **)((int)param_1 + 0x478) != (void *)0x0) {
      FUN_009de3b0(*(void **)((int)param_1 + 0x478));
      *(undefined4 *)((int)param_1 + 0x478) = 0;
    }
    if (*(void **)((int)param_1 + 0x470) != (void *)0x0) {
      FUN_009de3b0(*(void **)((int)param_1 + 0x470));
      *(undefined4 *)((int)param_1 + 0x470) = 0;
    }
    if (*(void **)((int)param_1 + 0x474) != (void *)0x0) {
      FUN_009de3b0(*(void **)((int)param_1 + 0x474));
      *(undefined4 *)((int)param_1 + 0x474) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_004695b0 @ 004695b0 ////

void __fastcall FUN_004695b0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1b6c8;
  return;
}


//// FUNCTION FUN_00469610 @ 00469610 ////

/* WARNING: Removing unreachable block (ram,0x00469851) */
/* WARNING: Removing unreachable block (ram,0x0046985c) */

void FUN_00469610(void)

{
  int **ppiVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  int **ppiVar6;
  float local_48;
  int local_3c;
  int **local_38;
  undefined4 local_34;
  int *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca2a38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(DAT_00f890c0 + 0x45c) = 0;
  local_34 = 0;
  local_3c = 0;
  local_24 = 0;
  local_28 = (undefined4 *)0x0;
  local_38 = &local_2c;
  local_2c = &local_3c;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  local_48 = 0.0;
  puVar4 = DAT_0104c4d8;
  if (DAT_0104c4d8 != &DAT_0104c4e4) {
    do {
      cVar2 = (**(code **)(*(int *)puVar4[2] + 0x180))();
      if (cVar2 != '\0') {
        local_48 = local_48 + 1.0;
        *(undefined4 *)(puVar4[2] + 0x19c) = 0;
        piVar3 = (int *)(puVar4[2] + 0x148);
        *(int ***)(puVar4[2] + 0x14c) = &local_2c;
        *piVar3 = (int)local_2c;
        local_2c[1] = (int)piVar3;
        local_2c = piVar3;
      }
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != &DAT_0104c4e4);
    if (local_48 != 0.0) {
      if (local_48 == 1.0) {
        local_38[2][0x67] = 0;
      }
      else {
        if (local_38 != &local_2c) {
          ppiVar5 = local_38;
          do {
            FUN_009e2580();
            (**(code **)(*ppiVar5[2] + 0x17c))();
            ppiVar5[2][0x67] = 0;
            ppiVar6 = local_38;
            if (local_38 != &local_2c) {
              do {
                if ((ppiVar5[2] != ppiVar6[2]) &&
                   (cVar2 = (**(code **)(*ppiVar6[2] + 0x178))(), cVar2 != '\0')) {
                  ppiVar5[2][0x67] = (int)((float)ppiVar5[2][0x67] + 1.0);
                }
                ppiVar1 = ppiVar6 + 1;
                ppiVar6 = (int **)*ppiVar1;
              } while ((int **)*ppiVar1 != &local_2c);
            }
            ppiVar5[2][0x67] = (int)((1.0 / (local_48 - 1.0)) * (float)ppiVar5[2][0x67]);
            *(float *)(DAT_00f890c0 + 0x45c) =
                 (float)ppiVar5[2][0x67] + *(float *)(DAT_00f890c0 + 0x45c);
            ppiVar5 = (int **)ppiVar5[1];
          } while (ppiVar5 != &local_2c);
        }
        *(float *)(DAT_00f890c0 + 0x45c) = *(float *)(DAT_00f890c0 + 0x45c) / local_48;
      }
      goto LAB_004697f6;
    }
  }
  *(undefined4 *)(DAT_00f890c0 + 0x45c) = 0x3f800000;
LAB_004697f6:
  if (local_38 != &local_2c) {
    do {
      *local_38 = (int *)0x0;
      local_38 = (int **)local_38[1];
      (*local_38)[1] = 0;
    } while (local_38 != &local_2c);
  }
  local_38 = (int **)0x0;
  local_2c = (int *)0x0;
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  if (local_28 != (undefined4 *)0x0) {
    *local_28 = 0;
  }
  if (local_3c != 0) {
    *(undefined4 *)(local_3c + 4) = 0;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION CLot_LoadPerimeterAssets @ 00469980 ////

void __fastcall CLot_LoadPerimeterAssets(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2a63;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (g_GatehouseFacilityDef == (int *)0x0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    ExceptionList = &pvStack_c;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"facility/facility_gatehouse",0x1b);
    local_28 = 0x1b;
    local_2c[0x1b] = '\0';
    local_4 = 0;
    piVar1 = FUN_008480b0(&local_2c,0);
    (*(code *)DAT_00f89064[1])();
    g_GatehouseFacilityDef = piVar1;
    (*(code *)*DAT_00f89064)();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    FUN_004012c0(0.0);
    (**(code **)(*g_GatehouseFacilityDef + 0x28))();
  }
  if (g_TMLandscape == (undefined4 *)0x0) {
    puVar2 = operator_new(0x6c);
    local_4 = 1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = TMLandscape_Constructor(puVar2);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_00f8907c[1])();
    g_TMLandscape = puVar2;
    (*(code *)*DAT_00f8907c)();
  }
  if (*(int *)(param_1 + 0x474) == 0) {
    pbVar3 = FUN_009de1d0("lot_wallcorner.msh",1);
    *(byte **)(param_1 + 0x474) = pbVar3;
  }
  if (*(int *)(param_1 + 0x478) == 0) {
    pbVar3 = FUN_009de1d0("lot_gate.msh",1);
    *(byte **)(param_1 + 0x478) = pbVar3;
  }
  if (*(int *)(param_1 + 0x470) == 0) {
    pbVar3 = FUN_009de1d0("lot_wall_concrete.msh",1);
    *(byte **)(param_1 + 0x470) = pbVar3;
  }
  if (DAT_00f890a8 == (int *)0x0) {
    FUN_004012c0(0.0);
    piVar1 = FUN_004fb990();
    (*(code *)DAT_00f89094[1])();
    DAT_00f890a8 = piVar1;
    (*(code *)*DAT_00f89094)();
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00469bb0 @ 00469bb0 ////

void __fastcall FUN_00469bb0(void *param_1)

{
  FUN_00468470((int)param_1);
  CLot_LoadPerimeterAssets((int)param_1);
  CLot_BuildPerimeterWallAndGate(param_1);
  return;
}


//// FUNCTION CLot_ApplySizeTier @ 00469be0 ////

void CLot_ApplySizeTier(int param_1)

{
  int *piVar1;
  
  DAT_00f890c0[0x120] = param_1;
  (**(code **)(*DAT_00f890c0 + 0x1b4))();
  CLot_ComputeWorldBoundsFromTier();
  piVar1 = DAT_00f890c0;
  FUN_00468470((int)DAT_00f890c0);
  CLot_LoadPerimeterAssets((int)piVar1);
  CLot_BuildPerimeterWallAndGate(piVar1);
                    /* WARNING: Could not recover jumptable at 0x00469c41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_00f890c0 + 0x1b0))();
  return;
}


//// FUNCTION FUN_00469c50 @ 00469c50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469c50(void)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  float10 fVar4;
  char *local_130;
  undefined4 local_12c;
  uint local_128;
  char local_124 [20];
  char *local_110;
  undefined4 local_10c;
  uint local_108;
  char local_104 [20];
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 auStack_e0 [53];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2bf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0046bc20();
  local_130 = local_124;
  _DAT_00f89040 = 0;
  _DAT_00f89044 = 0;
  _DAT_00f89048 = 0;
  _DAT_00f8904c = 0;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  _strncpy(local_130,"studio",6);
  local_12c = 6;
  local_130[6] = '\0';
  local_4 = 0;
  FUN_00558a50(DAT_00f88624,&local_130,(undefined4 *)0x1);
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  local_130 = local_124;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  _strncpy(local_130,"toiletsperstar",0xe);
  local_12c = 0xe;
  local_130[0xe] = '\0';
  local_4 = 1;
  fVar4 = FUN_00558610(DAT_00f88624,&local_130,0.0);
  _DAT_00e50418 = (float)fVar4;
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  local_130 = local_124;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  _strncpy(local_130,"toiletsperstaff",0xf);
  local_12c = 0xf;
  local_130[0xf] = '\0';
  local_4 = 2;
  fVar4 = FUN_00558610(DAT_00f88624,&local_130,0.0);
  _DAT_00e5041c = (float)fVar4;
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  local_130 = local_124;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  _strncpy(local_130,"cateringperstar",0xf);
  local_12c = 0xf;
  local_130[0xf] = '\0';
  local_4 = 3;
  fVar4 = FUN_00558610(DAT_00f88624,&local_130,0.0);
  _DAT_00e50420 = (float)fVar4;
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  local_130 = local_124;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  _strncpy(local_130,"cateringperstaff",0x10);
  local_12c = 0x10;
  local_130[0x10] = '\0';
  local_4 = 4;
  fVar4 = FUN_00558610(DAT_00f88624,&local_130,0.0);
  _DAT_00e50424 = (float)fVar4;
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  local_130 = local_124;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  _strncpy(local_130,"ornamentsperstar",0x10);
  local_12c = 0x10;
  local_130[0x10] = '\0';
  local_4 = 5;
  fVar4 = FUN_00558610(DAT_00f88624,&local_130,0.0);
  _DAT_00e50428 = (float)fVar4;
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  local_130 = local_124;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  _strncpy(local_130,"ornamentsperstaff",0x11);
  local_12c = 0x11;
  local_130[0x11] = '\0';
  local_4 = 6;
  fVar4 = FUN_00558610(DAT_00f88624,&local_130,0.0);
  _DAT_00e5042c = (float)fVar4;
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  local_130 = local_124;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  _strncpy(local_130,"minconsideredstar",0x11);
  local_12c = 0x11;
  local_130[0x11] = '\0';
  local_4 = 7;
  fVar4 = FUN_00558610(DAT_00f88624,&local_130,0.0);
  DAT_00e50430 = (float)fVar4;
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  local_130 = local_124;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  _strncpy(local_130,"minconsideredstaff",0x12);
  local_12c = 0x12;
  local_130[0x12] = '\0';
  local_4 = 8;
  fVar4 = FUN_00558610(DAT_00f88624,&local_130,0.0);
  _DAT_00e50434 = (float)fVar4;
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  local_130 = local_124;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  _strncpy(local_130,"littermax",9);
  local_12c = 9;
  local_130[9] = '\0';
  local_4 = 9;
  fVar4 = FUN_00558610(DAT_00f88624,&local_130,0.0);
  _DAT_00e50438 = (float)fVar4;
  local_4 = 0xffffffff;
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  FUN_0048c2d0();
  OrnamentClustering_Constructor();
  FUN_004d4500();
  FacilitySystem_Constructor();
  FUN_00559fb0(&local_e4);
  local_130 = local_124;
  local_4 = 10;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  _strncpy(local_130,"spawnpoints",0xb);
  local_12c = 0xb;
  local_130[0xb] = '\0';
  local_4._0_1_ = 0xb;
  FUN_0055be10(&local_e4,&local_130,'\0');
  local_4 = CONCAT31(local_4._1_3_,10);
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  cVar1 = FUN_00558bb0(&local_e4,2);
  if (cVar1 != '\0') {
    local_e8 = 0;
    do {
      local_130 = local_124;
      local_124[0] = '\0';
      local_12c = 0;
      local_128 = 0x14;
      _strncpy(local_130,"x",1);
      local_12c = 1;
      local_130[1] = '\0';
      local_4._0_1_ = 0xc;
      fVar4 = FUN_00558610(&local_e4,&local_130,0.0);
      local_f0 = (float)fVar4;
      if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
        _free(local_130);
      }
      local_110 = local_104;
      local_104[0] = '\0';
      local_10c = 0;
      local_108 = 0x14;
      _strncpy(local_110,"y",1);
      local_10c = 1;
      local_110[1] = '\0';
      local_4._0_1_ = 0xd;
      fVar4 = FUN_00558610(&local_e4,&local_110,0.0);
      local_ec = (float)fVar4;
      local_4 = CONCAT31(local_4._1_3_,10);
      if (0x14 < local_108) {
                    /* WARNING: Subroutine does not return */
        _free(local_110);
      }
      SpawnPointList_Append(&DAT_00f89054,&local_f0);
      cVar1 = FUN_00558bb0(&local_e4,2);
    } while (cVar1 != '\0');
  }
  OccupancyGrid_InitGlobals();
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0xe;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,0,0x7d,0x86);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0xf;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,2,0x82,0x7d);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x10;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,3,0x7d,0x7d);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x11;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,1,0x82,0x86);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x12;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,0,0x85,0x86);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x13;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,0,0x79,0x70);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x14;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,1,0x86,0x70);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x15;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,3,0x79,0x62);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x16;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,2,0x70,0x62);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x17;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,2,0x86,0x5b);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x18;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,1,0x86,0x56);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x19;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,2,0x86,0x4f);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x1a;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,0,0xda,0x70);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x1b;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,1,0x52,0x70);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x1c;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,2,0x52,0x6e);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x1d;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,0,0x4d,0x70);
  }
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x1c);
  local_4._0_1_ = 0x1e;
  if (pvVar2 != (void *)0x0) {
    FUN_009f07d0(pvVar2,1,0x25,0x70);
  }
  local_4 = CONCAT31(local_4._1_3_,10);
  MinimapOverlap_Constructor();
  piVar3 = FUN_00468fe0();
  (*(code *)DAT_00f890ac[1])();
  DAT_00f890c0 = piVar3;
  (*(code *)*DAT_00f890ac)();
  CLot_LoadSizeTiers((int)DAT_00f890c0);
  CLot_ApplySizeTier(DAT_00f890c0[0x120]);
  FUN_008b7010();
  FUN_005e9e50(DAT_0104d82c,0x464ff0);
  FUN_005e9e50(DAT_0104d82c,0x465000);
  FUN_0046cee0();
  FUN_00558920(auStack_e0);
  ExceptionList = puStack_8;
  return;
}


//// FUNCTION FUN_0046a6b0 @ 0046a6b0 ////

undefined4 __fastcall FUN_0046a6b0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 5;
  uVar1 = FUN_0052e490(param_1);
  if ((char)uVar1 == '\0') {
    return uVar1 & 0xffffff00;
  }
  CLot_LoadSizeTiers(param_1 + -0x78);
  CLot_ApplySizeTier(*(int *)(param_1 + 0x408));
  FUN_008b7010();
  FUN_00412b10(DAT_00f87aa0,(undefined4 *)(param_1 + 0x428),(undefined4 *)(param_1 + 0x434),
               *(undefined4 *)(param_1 + 0x440),*(undefined4 *)(param_1 + 0x444));
  FUN_004201a0(DAT_00f87b04,0);
  if (1.0 <= *(float *)(param_1 + 0x448)) {
    if (1.0 < *(float *)(param_1 + 0x448)) {
      uVar2 = FUN_00566c20(DAT_0104cdf4,*(undefined4 *)(param_1 + 0x448));
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x39c) = 1;
  }
  uVar2 = FUN_00566c20(DAT_0104cdf4,0x3f800000);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_0046a780 @ 0046a780 ////

/* WARNING: Removing unreachable block (ram,0x0046a7fd) */

void __cdecl FUN_0046a780(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  char *in_stack_ffffff94;
  uint local_64;
  char local_60 [20];
  uint *local_4c;
  void *local_48;
  undefined4 local_44;
  uint local_40 [5];
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2c20;
  pvStack_c = ExceptionList;
  if (param_1[1] == 0) {
    in_stack_ffffff94 = local_60;
    local_60[0] = '\0';
    local_64 = 0x14;
    ExceptionList = &pvStack_c;
    _strncpy(in_stack_ffffff94,"lots/basic_lot",0xe);
    in_stack_ffffff94[0xe] = '\0';
    local_4 = 0;
    FUN_0046bab0(DAT_00f890d8,(undefined4 *)&stack0xffffff94,'\0');
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_0046bab0(DAT_00f890d8,param_1,'\0');
  }
  local_4c = local_40;
  local_40[0] = local_40[0] & 0xffffff00;
  local_48 = (void *)0x0;
  local_44 = 0x14;
  local_4 = 1;
  puVar1 = FUN_0040d6b0(local_2c,"data/",param_1);
  puVar1 = FUN_004312e0((undefined4 *)&stack0xffffff94,puVar1,".lnd");
  FUN_004015d0(&local_4c,(char *)*puVar1,puVar1[1]);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_ffffff94);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  FUN_009e5ec0((char *)local_4c,'\x01');
  iVar2 = FUN_00523ea0();
  if (iVar2 != 0) {
    pvVar3 = (void *)FUN_00523ea0();
    FUN_00525910(pvVar3);
  }
  CLot_ApplySizeTier(*(int *)(DAT_00f890c0 + 0x480));
  if (local_40[0] < 0x15) {
    ExceptionList = puStack_8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_48);
}


//// FUNCTION FUN_0046a960 @ 0046a960 ////

int * __thiscall FUN_0046a960(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0046a9c0 @ 0046a9c0 ////

void FUN_0046a9c0(void)

{
  if (DAT_00f890d8 != (undefined4 *)0x0) {
    (**(code **)*DAT_00f890d8)(1);
  }
  (*(code *)DAT_00f890c4[1])();
  DAT_00f890d8 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0046a9f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00f890c4)();
  return;
}


//// FUNCTION FUN_0046aa00 @ 0046aa00 ////

void FUN_0046aa00(void)

{
  int *piVar1;
  int *piVar2;
  float10 fVar3;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  fVar3 = FUN_00990e30(1.0,1.0);
  local_10 = (float)(fVar3 + (float10)20.0);
  fVar3 = FUN_00990e30(-1.0,1.0);
  local_c = (float)fVar3;
  local_8 = local_10;
  local_4 = 0;
  piVar1 = FUN_00581830();
  piVar2 = (int *)GetPlayerStudio();
  (**(code **)(*piVar2 + 0x30))(piVar1);
  (**(code **)(*piVar1 + 0x2c))(&local_10);
  (**(code **)(*piVar1 + 0x224))(local_4,0);
  return;
}


//// FUNCTION FUN_0046ab70 @ 0046ab70 ////

void __fastcall FUN_0046ab70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2c60;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"",0);
  local_28 = 0;
  *local_2c = '\0';
  local_4 = 0;
  FUN_00558a50(*(void **)(param_1 + 0x38),&local_2c,(undefined4 *)0x1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"hired_staff",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4 = 1;
  uVar1 = FUN_00558a50(*(void **)(param_1 + 0x38),&local_2c,(undefined4 *)0x1);
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
    _strncpy(local_2c,"builders",8);
    local_28 = 8;
    local_2c[8] = '\0';
    local_4 = 2;
    iVar2 = FUN_00558750(*(void **)(param_1 + 0x38),&local_2c,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"janitors",8);
    local_28 = 8;
    local_2c[8] = '\0';
    local_4 = 3;
    iVar3 = FUN_00558750(*(void **)(param_1 + 0x38),&local_2c,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"crew",4);
    local_28 = 4;
    local_2c[4] = '\0';
    local_4 = 4;
    iVar4 = FUN_00558750(*(void **)(param_1 + 0x38),&local_2c,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"writers",7);
    local_28 = 7;
    local_2c[7] = '\0';
    local_4 = 5;
    iVar5 = FUN_00558750(*(void **)(param_1 + 0x38),&local_2c,0);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (0 < iVar2) {
      do {
        FUN_0046aa00();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (0 < iVar3) {
      do {
        FUN_0046aa00();
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (0 < iVar4) {
      do {
        FUN_0046aa00();
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (0 < iVar5) {
      do {
        FUN_0046aa00();
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0046ae60 @ 0046ae60 ////

void __thiscall FUN_0046ae60(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d1b860;
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


//// FUNCTION FUN_0046aeb0 @ 0046aeb0 ////

void __fastcall FUN_0046aeb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1b860;
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


//// FUNCTION FUN_0046af20 @ 0046af20 ////

void __fastcall FUN_0046af20(int param_1)

{
  byte bVar1;
  char *_Source;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  byte *pbVar12;
  byte *pbVar13;
  float10 fVar14;
  float fStack_188;
  char *local_184;
  uint local_180;
  uint local_17c;
  char local_178 [20];
  float fStack_164;
  undefined4 local_160;
  float local_15c;
  undefined4 local_158;
  char *local_154;
  undefined4 local_150;
  uint local_14c;
  char local_148 [20];
  char *local_134;
  undefined4 local_130;
  uint local_12c;
  char local_128 [20];
  char *local_114;
  undefined4 local_110;
  uint local_10c;
  char local_108 [20];
  char *local_f4;
  undefined4 local_f0;
  uint local_ec;
  char local_e8 [20];
  byte *local_d4;
  undefined4 local_d0;
  uint local_cc;
  byte local_c8 [20];
  char *local_b4;
  undefined4 local_b0;
  uint local_ac;
  char local_a8 [20];
  float local_94 [2];
  void *local_8c [2];
  uint local_84;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2d12;
  local_c = ExceptionList;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  ExceptionList = &local_c;
  cVar5 = FUN_00558bb0(*(void **)(param_1 + 0x38),0);
  do {
    if (cVar5 == '\0') {
      ExceptionList = local_c;
      return;
    }
    local_184 = local_178;
    local_178[0] = '\0';
    local_180 = 0;
    local_17c = 0x14;
    local_154 = local_148;
    local_4 = 0;
    local_148[0] = '\0';
    local_150 = 0;
    local_14c = 0x14;
    _strncpy(local_154,"name",4);
    local_150 = 4;
    local_154[4] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar7 = FUN_005584e0(*(void **)(param_1 + 0x38),local_8c,&local_154);
    uVar10 = puVar7[1];
    _Source = (char *)*puVar7;
    if (local_17c <= uVar10) {
      if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
        _free(local_184);
      }
      local_17c = uVar10 + 0x20 & 0xffffffe0;
      local_184 = _malloc(local_17c);
    }
    _strncpy(local_184,_Source,uVar10);
    local_184[uVar10] = '\0';
    local_180 = uVar10;
    bVar6 = FUN_00430950(&local_184,"");
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    if (0x14 < local_14c) {
                    /* WARNING: Subroutine does not return */
      _free(local_154);
    }
    if (bVar6) {
      local_b4 = local_a8;
      local_a8[0] = '\0';
      local_b0 = 0;
      local_ac = 0x14;
      _strncpy(local_b4,"cityobject",10);
      local_b0 = 10;
      local_b4[10] = '\0';
      local_4 = CONCAT31(local_4._1_3_,2);
      uVar8 = FUN_00558490(*(void **)(param_1 + 0x38),&local_b4);
      if ((char)uVar8 == '\0') {
LAB_0046b1ff:
        bVar6 = false;
      }
      else {
        local_d4 = local_c8;
        local_c8[0] = 0;
        local_d0 = 0;
        local_cc = 0x14;
        _strncpy((char *)local_d4,"1",1);
        local_d0 = 1;
        local_d4[1] = 0;
        local_f4 = local_e8;
        local_e8[0] = '\0';
        local_f0 = 0;
        local_ec = 0x14;
        _strncpy(local_f4,"cityobject",10);
        local_f0 = 10;
        local_f4[10] = '\0';
        local_4 = 4;
        puVar7 = FUN_005584e0(*(void **)(param_1 + 0x38),local_4c,&local_f4);
        pbVar12 = (byte *)*puVar7;
        bVar4 = true;
        bVar3 = true;
        bVar2 = true;
        pbVar13 = local_d4;
        do {
          bVar1 = *pbVar12;
          bVar6 = bVar1 < *pbVar13;
          if (bVar1 != *pbVar13) {
LAB_0046b1ed:
            iVar9 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_0046b1f2;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar6 = bVar1 < pbVar13[1];
          if (bVar1 != pbVar13[1]) goto LAB_0046b1ed;
          pbVar12 = pbVar12 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar1 != 0);
        iVar9 = 0;
LAB_0046b1f2:
        bVar6 = true;
        if (iVar9 != 0) goto LAB_0046b1ff;
      }
      if ((bVar2) && (bVar2 = false, 0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if ((bVar3) && (bVar3 = false, 0x14 < local_ec)) {
                    /* WARNING: Subroutine does not return */
        _free(local_f4);
      }
      if ((bVar4) && (bVar4 = false, 0x14 < local_cc)) {
                    /* WARNING: Subroutine does not return */
        _free(local_d4);
      }
      local_4 = 0;
      if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
        _free(local_b4);
      }
      if (!bVar6) {
        uVar10 = FUN_00413450(&local_184,"facility/",0,9);
        if (uVar10 == 0) {
          piVar11 = FUN_008480b0(&local_184,0);
        }
        else {
          uVar10 = FUN_00413450(&local_184,"set/",0,4);
          if (uVar10 == 0) {
            piVar11 = FUN_004d2430(&local_184,0);
          }
          else {
            uVar10 = FUN_00413450(&local_184,"ornament/",0,9);
            if (uVar10 != 0) goto LAB_0046b502;
            piVar11 = FUN_0048bfd0(&local_184,'\0');
          }
        }
        if (piVar11 != (int *)0x0) {
          local_134 = local_128;
          local_128[0] = '\0';
          local_130 = 0;
          local_12c = 0x14;
          _strncpy(local_134,"position",8);
          local_130 = 8;
          local_134[8] = '\0';
          local_4._0_1_ = 5;
          puVar7 = FUN_005584e0(*(void **)(param_1 + 0x38),local_6c,&local_134);
          local_4._0_1_ = 6;
          puVar7 = (undefined4 *)FUN_00567da0(local_94,puVar7,'\0');
          local_160 = *puVar7;
          local_15c = (float)puVar7[1];
          local_158 = 0;
          if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c[0]);
          }
          if (0x14 < local_12c) {
                    /* WARNING: Subroutine does not return */
            _free(local_134);
          }
          local_114 = local_108;
          local_108[0] = '\0';
          local_110 = 0;
          local_10c = 0x14;
          _strncpy(local_114,"angle",5);
          local_110 = 5;
          local_114[5] = '\0';
          local_4._0_1_ = 7;
          puVar7 = FUN_005584e0(*(void **)(param_1 + 0x38),local_2c,&local_114);
          local_4._0_1_ = 8;
          fVar14 = FUN_00567d60(puVar7);
          fStack_164 = (float)fVar14;
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          if (0x14 < local_10c) {
                    /* WARNING: Subroutine does not return */
            _free(local_114);
          }
          fVar14 = FUN_004012c0(fStack_164);
          fStack_188 = (float)fVar14;
          (**(code **)(*piVar11 + 0x28))(&local_160,&fStack_188);
          iVar9 = FUN_005291b0((int)piVar11);
          *(undefined1 *)(iVar9 + 0x60) = 1;
          if (local_15c < -1.0) {
            FUN_00527fd0(piVar11);
          }
        }
      }
    }
LAB_0046b502:
    local_4 = 0xffffffff;
    if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
      _free(local_184);
    }
    cVar5 = FUN_00558bb0(*(void **)(param_1 + 0x38),2);
  } while( true );
}


//// FUNCTION FUN_0046b550 @ 0046b550 ////

void FUN_0046b550(undefined4 *param_1)

{
  undefined1 *_Count;
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float10 fVar9;
  char *pcVar10;
  uint *local_208;
  undefined1 *local_204;
  undefined1 *local_200;
  uint local_1fc [5];
  float fStack_1e8;
  char *local_1e4;
  undefined4 local_1e0;
  uint local_1dc;
  char local_1d8 [20];
  float fStack_1c4;
  int iStack_1c0;
  void *apvStack_1bc [2];
  uint uStack_1b4;
  void *apvStack_19c [2];
  uint uStack_194;
  void *apvStack_17c [2];
  uint uStack_174;
  void *apvStack_15c [2];
  uint uStack_154;
  void *apvStack_13c [2];
  uint uStack_134;
  void *apvStack_11c [2];
  uint uStack_114;
  undefined1 auStack_fc [8];
  undefined1 auStack_f4 [16];
  undefined4 local_e4;
  undefined4 auStack_e0 [53];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2d8e;
  pvStack_c = ExceptionList;
  local_208 = local_1fc;
  local_1fc[0] = local_1fc[0] & 0xffffff00;
  local_204 = (undefined1 *)0x0;
  local_200 = &DAT_00000014;
  ExceptionList = &pvStack_c;
  FUN_004015d0(&local_208,(char *)*param_1,param_1[1]);
  local_4 = 0;
  if (local_204 == (undefined1 *)0x0) {
    if (local_200 < (undefined1 *)0x8) {
      if (&DAT_00000014 < local_200) {
                    /* WARNING: Subroutine does not return */
        _free(local_208);
      }
      local_200 = (undefined1 *)0x20;
      local_208 = _malloc(0x20);
    }
    _strncpy((char *)local_208,"default",7);
    local_204 = (undefined1 *)0x7;
    *(undefined1 *)((int)local_208 + 7) = 0;
  }
  FUN_00559fb0(&local_e4);
  local_1e4 = local_1d8;
  local_1d8[0] = '\0';
  local_1e0 = 0;
  local_1dc = 0x14;
  _strncpy(local_1e4,"size",4);
  local_1e0 = 4;
  local_1e4[4] = '\0';
  local_4._0_1_ = 2;
  iVar3 = FUN_004662e0();
  FUN_00557fe0(&local_e4,&local_1e4,(float)iVar3);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
    _free(local_1e4);
  }
  puVar8 = DAT_0104c5ec;
  if (DAT_0104c5ec != &DAT_0104c5f8) {
    do {
      piVar4 = (int *)FUN_00ace790((int *)puVar8[2],0,&TM::TMObject::RTTI_Type_Descriptor,
                                   &TM::TMFixedAsset::RTTI_Type_Descriptor,0);
      if ((piVar4 != (int *)0x0) && (piVar4 != DAT_00f890c0)) {
        pcVar10 = "facility_health";
        puVar5 = (undefined4 *)FUN_00528450((int)piVar4);
        bVar1 = FUN_00430950(puVar5,pcVar10);
        if (bVar1) {
          pcVar10 = "facility_gatehouse";
          puVar5 = (undefined4 *)FUN_00528450((int)piVar4);
          bVar1 = FUN_00430950(puVar5,pcVar10);
          if (bVar1) {
            pcVar10 = "p_billboard";
            puVar5 = (undefined4 *)FUN_00528450((int)piVar4);
            bVar1 = FUN_00430950(puVar5,pcVar10);
            if (bVar1) {
              pcVar10 = "fac_colonialgates";
              puVar5 = (undefined4 *)FUN_00528450((int)piVar4);
              bVar1 = FUN_00430950(puVar5,pcVar10);
              if ((bVar1) &&
                 (((piVar6 = (int *)FUN_00ace790(piVar4,0,&TM::TMFixedAsset::RTTI_Type_Descriptor,
                                                 &TM::CSet::RTTI_Type_Descriptor,0),
                   piVar6 == (int *)0x0 || (cVar2 = (**(code **)(*piVar6 + 0x164))(), cVar2 == '\0')
                   ) && (cVar2 = (**(code **)(*piVar4 + 0x118))(), cVar2 == '\0')))) {
                FUN_00558bb0(&local_e4,1);
                puVar5 = FUN_005562f0(&local_e4,apvStack_13c,0);
                local_4._0_1_ = 3;
                fVar9 = FUN_00567d60(puVar5);
                puVar5 = FUN_00569c30(apvStack_11c,(float)(fVar9 + (float10)1.0));
                local_4._0_1_ = 4;
                FUN_00558a50(&local_e4,puVar5,(undefined4 *)0x1);
                if (0x14 < uStack_114) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_11c[0]);
                }
                if (0x14 < uStack_134) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_13c[0]);
                }
                FUN_00401de0(&local_1e4,"name",0xffffffff);
                local_4._0_1_ = 5;
                puVar5 = (undefined4 *)FUN_00528460((int)piVar4);
                FUN_00557fa0(&local_e4,&local_1e4,puVar5);
                if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
                  _free(local_1e4);
                }
                FUN_00401de0(apvStack_15c,"position",0xffffffff);
                local_4._0_1_ = 6;
                (**(code **)(*piVar4 + 0x34))(auStack_fc);
                pfVar7 = (float *)(**(code **)(*piVar4 + 0x34))(auStack_f4);
                fStack_1c4 = *pfVar7;
                iStack_1c0 = iVar3;
                puVar5 = FUN_00569f40(apvStack_19c,&fStack_1c4);
                local_4._0_1_ = 7;
                FUN_00557fa0(&local_e4,apvStack_15c,puVar5);
                if (0x14 < uStack_194) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_19c[0]);
                }
                if (0x14 < uStack_154) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_15c[0]);
                }
                FUN_00401de0(apvStack_17c,"angle",0xffffffff);
                fStack_1e8 = *(float *)(piVar4[0x47] + 0x80);
                local_4._0_1_ = 8;
                puVar5 = FUN_00569c30(apvStack_1bc,fStack_1e8);
                local_4._0_1_ = 9;
                FUN_00557fa0(&local_e4,apvStack_17c,puVar5);
                if (0x14 < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_1bc[0]);
                }
                local_4 = CONCAT31(local_4._1_3_,1);
                if (0x14 < uStack_174) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_17c[0]);
                }
              }
            }
          }
        }
      }
      puVar5 = puVar8 + 1;
      puVar8 = (undefined4 *)*puVar5;
    } while ((undefined4 *)*puVar5 != &DAT_0104c5f8);
  }
  FUN_0055ab40(&local_e4,&local_208);
  puVar8 = FUN_0040d6b0(apvStack_19c,"data/",&local_208);
  puVar8 = FUN_004312e0(apvStack_1bc,puVar8,".lnd");
  _Count = (undefined1 *)puVar8[1];
  pcVar10 = (char *)*puVar8;
  if (local_200 <= _Count) {
    if (&DAT_00000014 < local_200) {
                    /* WARNING: Subroutine does not return */
      _free(local_208);
    }
    local_200 = (undefined1 *)((uint)(_Count + 0x20) & 0xffffffe0);
    local_208 = _malloc((size_t)local_200);
  }
  _strncpy((char *)local_208,pcVar10,(size_t)_Count);
  _Count[(int)local_208] = 0;
  local_204 = _Count;
  if (0x14 < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_1bc[0]);
  }
  if (0x14 < uStack_194) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_19c[0]);
  }
  FUN_009e5e10((char *)local_208);
  FUN_00558920(auStack_e0);
  if (local_1fc[0] < 0x15) {
    ExceptionList = puStack_8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_204);
}


//// FUNCTION FUN_0046bab0 @ 0046bab0 ////

/* WARNING: Removing unreachable block (ram,0x0046bbab) */

void __thiscall FUN_0046bab0(void *this,undefined4 *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca2db3;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_2 != '\0') {
    ExceptionList = &pvStack_c;
    FUN_00467d50();
    FUN_0048ea00();
    if (DAT_0104cfc8 != &DAT_0104cfd4) {
      do {
        piVar3 = DAT_0104cfc8;
        puVar4 = (undefined4 *)DAT_0104cfc8[2];
        piVar1 = DAT_0104cfc8 + 1;
        if ((int *)DAT_0104cfc8[1] != (int *)0x0) {
          *(int *)DAT_0104cfc8[1] = *DAT_0104cfc8;
        }
        iVar2 = *piVar3;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 4) = *piVar1;
        }
        *piVar3 = 0;
        *piVar1 = 0;
        if (puVar4 != (undefined4 *)0x0) {
          piVar1 = puVar4 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(1);
          }
        }
      } while (DAT_0104cfc8 != &DAT_0104cfd4);
    }
  }
  puVar4 = operator_new(0xd8);
  local_4._0_1_ = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00559fb0(puVar4);
  }
  *(undefined4 **)((int)this + 0x38) = puVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_1[1] != 0) {
    FUN_0055be10(puVar4,param_1,'\x01');
    FUN_0046af20((int)this);
    FUN_0046ab70((int)this);
  }
  if (*(undefined4 **)((int)this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x38))(1);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0046bbd0 @ 0046bbd0 ////

undefined4 * __fastcall FUN_0046bbd0(undefined4 *param_1)

{
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d1b8f4;
  return param_1;
}


//// FUNCTION FUN_0046bbf0 @ 0046bbf0 ////

undefined4 * __thiscall FUN_0046bbf0(void *this,byte param_1)

{
  thunk_FUN_00526bb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0046bc20 @ 0046bc20 ////

void FUN_0046bc20(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2dcb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x3c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0040a070(puVar1);
    *puVar1 = &PTR_FUN_00d1b8f4;
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_00f890c4[1])();
  DAT_00f890d8 = puVar1;
  (*(code *)*DAT_00f890c4)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0046bd60 @ 0046bd60 ////

void FUN_0046bd60(void)

{
  return;
}


//// FUNCTION FUN_0046bd70 @ 0046bd70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0046bd70(float *param_1)

{
  if ((((_DAT_01049120 <= *param_1) && (*param_1 <= _DAT_01049128 + _DAT_01049120)) &&
      (_DAT_01049124 <= param_1[1])) && (param_1[1] <= _DAT_0104912c + _DAT_01049124)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0046bdd0 @ 0046bdd0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046bdd0(void)

{
  return (float10)_DAT_01049118;
}


//// FUNCTION FUN_0046be00 @ 0046be00 ////

uint __cdecl FUN_0046be00(int param_1,byte param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),param_2);
  if (((((((param_2 & 1) == 0) || ((*(byte *)(param_1 + 4) & 0x20) == 0)) &&
        (((param_2 & 0x10) == 0 || ((*(byte *)(param_1 + 4) & 0xf) == 0)))) &&
       (((param_2 & 4) == 0 || ((*(byte *)(param_1 + 4) & 0x40) == 0)))) &&
      (((param_2 & 8) == 0 || (-1 < *(char *)(param_1 + 4))))) &&
     (((((param_2 & 0x20) == 0 || ((*(uint *)(param_1 + 4) & 0x100) == 0)) &&
       (((param_2 & 0x40) == 0 || ((*(uint *)(param_1 + 4) & 0x200) == 0)))) &&
      ((-1 < (char)param_2 || (uVar1 = *(uint *)(param_1 + 4), (uVar1 & 0x400) == 0)))))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_0046be60 @ 0046be60 ////

void __cdecl FUN_0046be60(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8bc);
  if (*(int *)(param_1 + 0x24) == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8bc);
    return;
  }
  if (0 < *(int *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)**(undefined4 **)(param_1 + 0x24));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x24));
}


//// FUNCTION FUN_0046bf20 @ 0046bf20 ////

int __cdecl FUN_0046bf20(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1] - param_2[1] >> 0x1f;
  uVar2 = *param_1 - *param_2 >> 0x1f;
  return ((*param_1 - *param_2 ^ uVar2) - uVar2) + ((param_1[1] - param_2[1] ^ uVar1) - uVar1);
}


//// FUNCTION WorldToOccupancyGridCoord @ 0046bfd0 ////

undefined8 __cdecl WorldToOccupancyGridCoord(float *param_1)

{
  undefined2 unaff_DI;
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_00acf400((double)((*param_1 + 256.0) * 0.5),unaff_DI);
  uVar1 = FUN_00acd42c();
  FUN_00acf400((double)((param_1[1] + 256.0) * 0.5),unaff_DI);
  uVar2 = FUN_00acd42c();
  return CONCAT44((int)uVar2,(int)uVar1);
}


//// FUNCTION FUN_0046c0a0 @ 0046c0a0 ////

undefined8 FUN_0046c0a0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_00acd42c();
  uVar2 = FUN_00acd42c();
  return CONCAT44((int)uVar2,(int)uVar1);
}


//// FUNCTION FUN_0046c0d0 @ 0046c0d0 ////

int __fastcall FUN_0046c0d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3;
}


//// FUNCTION FUN_0046c280 @ 0046c280 ////

void __cdecl FUN_0046c280(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_0046c3e0 @ 0046c3e0 ////

void __cdecl FUN_0046c3e0(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = param_3[1];
  *param_1 = param_2 * *param_3;
  param_1[1] = param_2 * fVar1;
  return;
}


//// FUNCTION Viewport_ClosestPointOnBoundary @ 0046c460 ////

void __cdecl Viewport_ClosestPointOnBoundary(float *param_1,float *param_2,float param_3)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  float local_4;
  
  pfVar3 = param_2;
  local_10 = param_2[1];
  fVar5 = *param_2;
  param_2 = (float *)0x0;
  local_c = 0;
  local_14 = fVar5;
  local_4 = local_10;
  uVar4 = FUN_009a20f0(&DAT_0105c2e8,&local_14,param_3);
  if ((char)uVar4 != '\0') {
    uVar4 = 0;
    do {
      uVar1 = uVar4 + 1;
      local_34 = (float)(&DAT_0105c5a8)[(uVar1 & 3) * 2] - (float)(&DAT_0105c5a8)[uVar4 * 2];
      local_30 = (float)(&DAT_0105c5ac)[(uVar1 & 3) * 2] - (float)(&DAT_0105c5ac)[uVar4 * 2];
      local_2c = local_34;
      local_28 = local_30;
      FUN_00412c90(&local_34);
      local_20 = (*pfVar3 - (float)(&DAT_0105c5a8)[uVar4 * 2]) * local_34 +
                 local_30 * (pfVar3[1] - (float)(&DAT_0105c5ac)[uVar4 * 2]);
      local_24 = local_34 * local_20;
      local_20 = local_30 * local_20;
      local_14 = local_24 + (float)(&DAT_0105c5a8)[uVar4 * 2];
      local_10 = local_20 + (float)(&DAT_0105c5ac)[uVar4 * 2];
      pfVar2 = (float *)((*pfVar3 - local_14) * (*pfVar3 - local_14) +
                        (pfVar3[1] - local_10) * (pfVar3[1] - local_10));
      if ((uVar4 == 0) || ((float)pfVar2 < (float)param_2)) {
        fVar5 = local_14;
        param_2 = pfVar2;
        local_4 = local_10;
      }
      uVar4 = uVar1;
      local_1c = local_24;
      local_18 = local_20;
    } while ((int)uVar1 < 4);
  }
  *param_1 = fVar5;
  param_1[1] = local_4;
  return;
}


//// FUNCTION FUN_0046c5d0 @ 0046c5d0 ////

uint __cdecl FUN_0046c5d0(int *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[1];
  iVar1 = *param_1;
  if ((((DAT_0104913c != 0) && (-1 < iVar1)) && (iVar1 < DAT_01049130)) &&
     (((-1 < (int)uVar2 && ((int)uVar2 < DAT_01049134)) &&
      (iVar1 = *(int *)(DAT_0104913c + iVar1 * 4) + uVar2 * 8, iVar1 != 0)))) {
    uVar2 = *(uint *)(iVar1 + 4);
    if (((((((uVar2 >> 1 | uVar2) >> 1 | uVar2) >> 1 | uVar2) >> 1 | uVar2) >> 1 | uVar2) >> 5 & 1)
        == 0 && (uVar2 & 0xf) == 0) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    uVar2 = FUN_0046be00(iVar1,param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_0046c640 @ 0046c640 ////

uint __cdecl FUN_0046c640(int *param_1,byte param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = *param_1 - param_3;
  iVar1 = uVar4 + param_3 * 2;
  iVar7 = param_1[1] - param_3;
  uVar6 = uVar4;
  if ((int)uVar4 < iVar1) {
    uVar6 = iVar7 + param_3 * 2;
    iVar3 = iVar7;
    do {
      for (; iVar3 < (int)uVar6; iVar3 = iVar3 + 1) {
        uVar5 = uVar6;
        if ((((((DAT_0104913c == 0) || ((int)uVar4 < 0)) || (DAT_01049130 <= (int)uVar4)) ||
             ((iVar3 < 0 || (DAT_01049134 <= iVar3)))) ||
            (iVar2 = *(int *)(DAT_0104913c + uVar4 * 4) + iVar3 * 8, iVar2 == 0)) ||
           ((uVar5 = *(uint *)(iVar2 + 4),
            ((((((uVar5 >> 1 | uVar5) >> 1 | uVar5) >> 1 | uVar5) >> 1 | uVar5) >> 1 | uVar5) >> 5 &
            1) != 0 || (uVar5 & 0xf) != 0 &&
            (((((((param_2 & 1) != 0 && ((uVar5 & 0x20) != 0)) ||
                (((param_2 & 0x10) != 0 && ((*(byte *)(iVar2 + 4) & 0xf) != 0)))) ||
               ((((param_2 & 4) != 0 && ((*(byte *)(iVar2 + 4) & 0x40) != 0)) ||
                (((param_2 & 8) != 0 &&
                 (uVar5 = CONCAT31((int3)(uVar5 >> 8),*(char *)(iVar2 + 4)),
                 *(char *)(iVar2 + 4) < '\0')))))) ||
              ((((param_2 & 0x20) != 0 && (uVar5 = *(uint *)(iVar2 + 4), (uVar5 & 0x100) != 0)) ||
               (((param_2 & 0x40) != 0 && (uVar5 = *(uint *)(iVar2 + 4), (uVar5 & 0x200) != 0))))))
             || (((char)param_2 < '\0' && (uVar5 = *(uint *)(iVar2 + 4), (uVar5 & 0x400) != 0)))))))
           ) {
          return uVar5 & 0xffffff00;
        }
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar7;
    } while ((int)uVar4 < iVar1);
  }
  return CONCAT31((int3)(uVar6 >> 8),1);
}


//// FUNCTION FUN_0046c780 @ 0046c780 ////

void __cdecl FUN_0046c780(int *param_1,int param_2,byte param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar5 = param_1[1];
  iVar4 = *param_1;
  if (((((DAT_0104913c != 0) && (-1 < iVar4)) && (iVar4 < DAT_01049130)) &&
      ((-1 < iVar5 && (iVar5 < DAT_01049134)))) &&
     (piVar1 = (int *)(*(int *)(DAT_0104913c + iVar4 * 4) + iVar5 * 8), piVar1 != (int *)0x0)) {
    if ((param_3 & 1) != 0) {
      piVar1[1] = piVar1[1] ^ ((param_4 & 0xff) << 5 ^ piVar1[1]) & 0x20;
    }
    if ((param_3 & 0x10) != 0) {
      uVar2 = piVar1[1];
      uVar3 = uVar2 + 1;
      if ((char)param_4 == '\0') {
        uVar3 = uVar2 - 1;
      }
      piVar1[1] = (uVar3 ^ uVar2) & 0xf ^ uVar2;
    }
    if ((param_3 & 2) != 0) {
      piVar1[1] = piVar1[1] ^ ((param_4 & 0xff) << 4 ^ piVar1[1]) & 0x10;
    }
    if ((param_3 & 4) != 0) {
      piVar1[1] = piVar1[1] ^ ((param_4 & 0xff) << 6 ^ piVar1[1]) & 0x40;
    }
    if ((param_3 & 8) != 0) {
      piVar1[1] = piVar1[1] ^ ((param_4 & 0xff) << 7 ^ piVar1[1]) & 0x80;
    }
    if ((param_3 & 0x20) != 0) {
      piVar1[1] = piVar1[1] ^ ((param_4 & 0xff) << 8 ^ piVar1[1]) & 0x100;
    }
    if ((param_3 & 0x40) != 0) {
      piVar1[1] = piVar1[1] ^ ((param_4 & 0xff) << 9 ^ piVar1[1]) & 0x200;
    }
    if ((char)param_3 < '\0') {
      param_2 = param_2 / 2;
      iVar5 = -2;
      do {
        iVar4 = -2;
        do {
          if ((iVar5 != 0) || (iVar4 != 0)) {
            local_8 = *param_1 + iVar5;
            local_4 = param_1[1] + iVar4;
            FUN_0046c780(&local_8,(int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3,0,param_4);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      piVar1[1] = piVar1[1] ^ ((param_4 & 0xff) << 10 ^ piVar1[1]) & 0x400;
    }
    *piVar1 = *piVar1 + param_2;
  }
  return;
}


//// FUNCTION FUN_0046c920 @ 0046c920 ////

void __cdecl FUN_0046c920(float *param_1,float *param_2,float *param_3,float param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  undefined2 unaff_DI;
  float10 fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8bc);
  *param_1 = param_4;
  fVar4 = 1.0 / param_4;
  param_1[1] = fVar4;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  fVar6 = FUN_00acf400((double)(fVar4 * param_1[2]),unaff_DI);
  param_1[2] = (float)(fVar6 * (float10)param_4);
  fVar6 = FUN_00acf400((double)(fVar4 * param_1[3]),unaff_DI);
  param_1[3] = (float)(fVar6 * (float10)param_4);
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  fVar6 = FUN_00acf400((double)(fVar4 * param_1[4]),unaff_DI);
  param_1[4] = (float)(fVar6 * (float10)param_4);
  fVar6 = FUN_00acf400((double)(fVar4 * param_1[5]),unaff_DI);
  param_1[5] = (float)(fVar6 * (float10)param_4);
  uVar7 = FUN_00acd42c();
  if ((int)uVar7 != 0) {
    FUN_00acd42c();
  }
  uVar8 = FUN_00acd42c();
  param_1[6] = (float)uVar8;
  if ((int)uVar7 != 0) {
    FUN_00acd42c();
  }
  uVar7 = FUN_00acd42c();
  param_1[8] = param_4 + param_4;
  param_1[7] = (float)uVar7;
  pvVar1 = operator_new((int)param_1[6] << 2);
  param_1[9] = (float)pvVar1;
  iVar5 = 0;
  if (0 < (int)param_1[6]) {
    do {
      fVar4 = param_1[7];
      puVar2 = operator_new((int)fVar4 * 8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar3 = puVar2;
        if (-1 < (int)fVar4 + -1) {
          do {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[1] = puVar3[1] | 0x8000000;
            *puVar3 = 0x5f;
            fVar4 = (float)((int)fVar4 + -1);
            puVar3 = puVar3 + 2;
          } while (fVar4 != 0.0);
        }
      }
      *(undefined4 **)((int)param_1[9] + iVar5 * 4) = puVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[6]);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8bc);
  return;
}


//// FUNCTION FUN_0046cad0 @ 0046cad0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046cad0(int *param_1,float *param_2)

{
  float fVar1;
  undefined2 in_FPUControlWord;
  
  fVar1 = (param_2[1] - _DAT_01049124) * _DAT_0104911c;
  _DAT_00f890f0 = CONCAT22(DAT_00f890f0_2,in_FPUControlWord);
  *param_1 = (int)ROUND((*param_2 - _DAT_01049120) * _DAT_0104911c);
  param_1[1] = (int)ROUND(fVar1);
  return;
}


//// FUNCTION FUN_0046cb40 @ 0046cb40 ////

void __cdecl FUN_0046cb40(int *param_1,byte param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_40;
  float local_3c;
  int local_34;
  int local_30;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  float local_4;
  
  if (DAT_00f890c0 != 0) {
    local_8 = (float)*param_1;
    local_4 = (float)param_1[1];
    FUN_0046cad0(&local_20,(float *)(DAT_00f890c0 + 0x44c));
    FUN_0046cad0(&local_18,(float *)(DAT_00f890c0 + 0x454));
    iVar5 = local_20 + 1;
    local_18 = local_18 + -1;
    local_1c = local_1c + 3;
    local_14 = local_14 + -1;
    if (*param_1 < iVar5) {
      *param_1 = iVar5;
    }
    else if (local_18 < *param_1) {
      *param_1 = local_18;
    }
    if (param_1[1] < local_1c) {
      param_1[1] = local_1c;
    }
    else if (local_14 < param_1[1]) {
      param_1[1] = local_14;
    }
    local_20 = iVar5;
    uVar2 = FUN_0046c5d0(param_1,param_2);
    if ((char)uVar2 == '\0') {
      local_3c = 512.0;
      local_40 = 0;
      do {
        local_28 = *param_1 - local_40;
        local_30 = *param_1 + local_40;
        iVar4 = param_1[1] - local_40;
        iVar3 = param_1[1] + local_40;
        if (local_28 < iVar5) {
          local_28 = iVar5;
        }
        if (iVar4 < local_1c) {
          iVar4 = local_1c;
        }
        if (local_18 < local_30) {
          local_30 = local_18;
        }
        local_c = iVar4;
        if (local_14 < iVar3) {
          iVar3 = local_14;
        }
        for (; local_c <= iVar3; local_c = local_c + 1) {
          local_10 = local_28;
          if ((iVar4 < local_c) && (local_c < iVar3)) {
            local_34 = local_40 * 2;
          }
          else {
            local_34 = 1;
          }
          for (; local_10 <= local_30; local_10 = local_10 + local_34) {
            if (((((((DAT_0104913c != 0) && (-1 < local_10)) && (local_10 < DAT_01049130)) &&
                  ((-1 < local_c && (local_c < DAT_01049134)))) &&
                 (iVar5 = *(int *)(DAT_0104913c + local_10 * 4) + local_c * 8, iVar5 != 0)) &&
                ((uVar2 = *(uint *)(iVar5 + 4),
                 ((((((uVar2 >> 1 | uVar2) >> 1 | uVar2) >> 1 | uVar2) >> 1 | uVar2) >> 1 | uVar2)
                  >> 5 & 1) == 0 && (uVar2 & 0xf) == 0 ||
                 ((((((param_2 & 1) == 0 || ((uVar2 & 0x20) == 0)) &&
                    (((param_2 & 0x10) == 0 || ((*(byte *)(iVar5 + 4) & 0xf) == 0)))) &&
                   ((((param_2 & 4) == 0 || ((*(byte *)(iVar5 + 4) & 0x40) == 0)) &&
                    (((param_2 & 8) == 0 || (-1 < *(char *)(iVar5 + 4))))))) &&
                  (((((param_2 & 0x20) == 0 || ((*(uint *)(iVar5 + 4) & 0x100) == 0)) &&
                    (((param_2 & 0x40) == 0 || ((*(uint *)(iVar5 + 4) & 0x200) == 0)))) &&
                   ((-1 < (char)param_2 || ((*(uint *)(iVar5 + 4) & 0x400) == 0)))))))))) &&
               (fVar1 = SQRT((local_8 - (float)local_10) * (local_8 - (float)local_10) +
                             (local_4 - (float)local_c) * (local_4 - (float)local_c)),
               fVar1 < local_3c)) {
              *param_1 = local_10;
              param_1[1] = local_c;
              local_3c = fVar1;
            }
          }
        }
        iVar5 = param_1[1];
        iVar4 = *param_1;
      } while (((((DAT_0104913c == 0) || (iVar4 < 0)) || (DAT_01049130 <= iVar4)) ||
               (((iVar5 < 0 || (DAT_01049134 <= iVar5)) ||
                ((iVar5 = *(int *)(DAT_0104913c + iVar4 * 4) + iVar5 * 8, iVar5 == 0 ||
                 ((uVar2 = *(uint *)(iVar5 + 4),
                  ((((((uVar2 >> 1 | uVar2) >> 1 | uVar2) >> 1 | uVar2) >> 1 | uVar2) >> 1 | uVar2)
                   >> 5 & 1) != 0 || (uVar2 & 0xf) != 0 &&
                  (uVar2 = FUN_0046be00(iVar5,param_2), (char)uVar2 == '\0')))))))) &&
              (local_40 = local_40 + 1, iVar5 = local_20,
              (float)local_40 < local_3c != ((float)local_40 == local_3c)));
    }
  }
  return;
}


//// FUNCTION FUN_0046ce60 @ 0046ce60 ////

void FUN_0046ce60(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (-1 < DAT_00f89104) {
    puVar4 = &DAT_00f89114;
    iVar5 = DAT_0104913c;
    do {
      uVar3 = *puVar4 >> 0xc & 0x3ff;
      uVar2 = *puVar4 >> 2 & 0x3ff;
      if ((((iVar5 != 0) && ((int)uVar2 < DAT_01049130)) && ((int)uVar3 < DAT_01049134)) &&
         (iVar1 = *(int *)(iVar5 + uVar2 * 4) + uVar3 * 8, iVar1 != 0)) {
        *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xf80007ff | 0x8000000;
        iVar5 = DAT_0104913c;
      }
      *puVar4 = *puVar4 & 0xfffffffc;
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar6 <= DAT_00f89104);
  }
  return;
}


//// FUNCTION FUN_0046cee0 @ 0046cee0 ////

void FUN_0046cee0(void)

{
  FUN_0046cad0(&DAT_00f890e8,(float *)(DAT_00f890c0 + 0x44c));
  FUN_0046cad0(&DAT_00f890e0,(float *)(DAT_00f890c0 + 0x454));
  return;
}


//// FUNCTION FUN_0046cf10 @ 0046cf10 ////

void __cdecl FUN_0046cf10(float *param_1,int param_2,int param_3)

{
  *param_1 = ((float)param_2 + (float)param_2) - 256.0;
  param_1[1] = ((float)param_3 + (float)param_3) - 256.0;
  return;
}


//// FUNCTION FUN_0046cf50 @ 0046cf50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cdecl FUN_0046cf50(float param_1,float param_2)

{
  float local_10;
  float local_c;
  undefined8 local_8;
  
  local_10 = (param_1 - 256.0) + _DAT_01049178;
  local_c = (param_2 - 256.0) + _DAT_01049174;
  FUN_0046cad0((int *)&local_8,&local_10);
  return local_8;
}


//// FUNCTION FUN_0046d100 @ 0046d100 ////

void __cdecl FUN_0046d100(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3 = param_3 + 2;
  }
  return;
}


//// FUNCTION FUN_0046d130 @ 0046d130 ////

void __cdecl FUN_0046d130(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


//// FUNCTION FUN_0046d1c0 @ 0046d1c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046d1c0(float *param_1,float *param_2,byte param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  
  FUN_0046cad0(&local_10,param_2);
  iVar3 = local_c;
  iVar2 = local_10;
  FUN_0046cb40(&local_10,param_3);
  if ((iVar2 == local_10) && (iVar3 == local_c)) {
    fVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = fVar1;
    return;
  }
  fVar1 = (float)local_c * _DAT_01049118 + _DAT_01049124;
  *param_1 = (float)local_10 * _DAT_01049118 + _DAT_01049120;
  param_1[1] = fVar1;
  return;
}


//// FUNCTION FUN_0046d260 @ 0046d260 ////

void __cdecl FUN_0046d260(float *param_1,byte param_2)

{
  undefined4 uVar1;
  int local_8 [2];
  
  if (DAT_00f890c0 != 0) {
    uVar1 = FUN_004512c0((void *)(DAT_00f890c0 + 0x44c),param_1);
    if ((char)uVar1 == '\0') {
      return;
    }
  }
  FUN_0046cad0(local_8,param_1);
  FUN_0046c5d0(local_8,param_2);
  return;
}


//// FUNCTION FUN_0046d2b0 @ 0046d2b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046d2b0(float *param_1,float *param_2,byte param_3,int param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_2c;
  int local_18;
  int local_14;
  int local_10;
  
  FUN_0046cad0(&local_18,param_2);
  uVar3 = FUN_0046c640(&local_18,param_3,param_4);
  if ((char)uVar3 == '\0') {
    iVar6 = local_18 - local_14;
    local_2c = 0;
    iVar4 = local_14;
    iVar5 = local_14;
    do {
      local_10 = iVar6 + iVar4;
      for (local_14 = iVar4; local_14 <= iVar5; local_14 = local_14 + 1) {
        iVar2 = local_10;
        if ((iVar4 < local_14) && (local_14 < iVar5)) {
          iVar7 = local_2c * 2;
        }
        else {
          iVar7 = 1;
        }
        for (; iVar2 <= iVar6 + iVar5; iVar2 = iVar2 + iVar7) {
          local_18 = iVar2;
          uVar3 = FUN_0046c640(&local_18,param_3,param_4);
          if ((char)uVar3 != '\0') {
            fVar1 = (float)local_14 * _DAT_01049118 + _DAT_01049124;
            *param_1 = (float)local_18 * _DAT_01049118 + _DAT_01049120;
            param_1[1] = fVar1;
            return;
          }
        }
      }
      local_2c = local_2c + 1;
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + 1;
    } while ((float)local_2c < 512.0 != ((float)local_2c == 512.0));
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}


//// FUNCTION FUN_0046d400 @ 0046d400 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0046d400(int *param_1,byte param_2)

{
  int *piVar1;
  float fVar2;
  uint in_EAX;
  uint uVar3;
  void *this;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return in_EAX & 0xffffff00;
  }
  local_1c = ((float)param_1[3] - 256.0) + _DAT_01049178;
  local_18 = ((float)param_1[4] - 256.0) + _DAT_01049174;
  FUN_0046cad0((int *)&local_14,&local_1c);
  fVar2 = local_14;
  local_24 = (((float)param_1[1] * 0.5 + (float)param_1[3]) - 256.0) + _DAT_01049178;
  local_20 = (((float)param_1[2] * 0.5 + (float)param_1[4]) - 256.0) + _DAT_01049174;
  FUN_0046cad0((int *)&local_1c,&local_24);
  if (((((int)fVar2 <= DAT_01049130) && (local_10 <= DAT_01049134)) && (-1 < (int)local_1c)) &&
     (-1 < (int)local_18)) {
    param_1 = (int *)0x1;
    param_1._0_1_ = 1;
    fVar4 = local_18;
    local_24 = fVar2;
    if ((int)fVar2 < (int)local_1c) {
      do {
        if (local_10 < (int)fVar4) {
          local_28 = (float)((int)local_24 - (int)local_14);
          iVar5 = local_10;
          do {
            local_2c = iVar5 - local_10;
            local_20 = (float)iVar5;
            uVar6 = FUN_00acd42c();
            local_2c = (int)uVar6;
            uVar6 = FUN_00acd42c();
            if ((*(char *)(local_2c + (int)uVar6 * piVar1[2] + *piVar1) != '\0') &&
               (uVar3 = FUN_0046c5d0((int *)&local_24,param_2), (char)uVar3 == '\0')) {
              if (_DAT_01049114 == 0.0) {
                return CONCAT22((short)(uVar3 >> 0x10),
                                (ushort)(_DAT_01049114 < 0.0) << 8 |
                                (ushort)NAN(_DAT_01049114) << 10 |
                                (ushort)(_DAT_01049114 == 0.0) << 0xe);
              }
              iVar10 = 1;
              uVar9 = 0x3f800000;
              puVar8 = (undefined4 *)&local_30;
              local_2d = 0xff;
              local_2e = 0xff;
              local_c = (float)(int)local_24 * _DAT_01049118 + _DAT_01049120;
              pfVar7 = &local_c;
              local_4 = 0;
              local_2f = 0;
              local_30 = 0;
              local_8 = (float)(int)local_20 * _DAT_01049118 + _DAT_01049124;
              this = (void *)FUN_0054ae80();
              FUN_0054aba0(this,pfVar7,puVar8,uVar9,iVar10);
              param_1 = (int *)0x0;
            }
            iVar5 = iVar5 + 1;
            fVar4 = local_18;
          } while (iVar5 < (int)local_18);
        }
        local_24 = (float)((int)local_24 + 1);
      } while ((int)local_24 < (int)local_1c);
    }
    return CONCAT31((int3)((uint)fVar4 >> 8),param_1._0_1_);
  }
  return (uint)local_18 & 0xffffff00;
}


//// FUNCTION FUN_0046d620 @ 0046d620 ////

void __cdecl FUN_0046d620(float *param_1,int param_2,byte param_3,uint param_4)

{
  int local_8 [2];
  
  FUN_0046cad0(local_8,param_1);
  FUN_0046c780(local_8,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_0046d650 @ 0046d650 ////

void __cdecl FUN_0046d650(float *param_1,int param_2,byte param_3,uint param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  
  local_20 = *param_1 - *param_5;
  local_1c = param_1[1] - *param_5;
  local_18 = *param_1 + *param_5;
  local_14 = param_1[1] + *param_5;
  FUN_0046cad0((int *)&local_10,&local_20);
  FUN_0046cad0((int *)&local_20,&local_18);
  fVar2 = local_1c;
  local_18 = local_10;
  iVar1 = local_c;
  if ((int)local_10 <= (int)local_20) {
    do {
      for (; iVar1 <= (int)fVar2; iVar1 = iVar1 + 1) {
        local_14 = (float)iVar1;
        FUN_0046c780((int *)&local_18,param_2,param_3,param_4);
      }
      local_18 = (float)((int)local_18 + 1);
      iVar1 = local_c;
    } while ((int)local_18 <= (int)local_20);
  }
  return;
}


//// FUNCTION FUN_0046d730 @ 0046d730 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046d730(int *param_1,int param_2,byte param_3)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar3 = param_1;
  if (param_1 != (int *)0x0) {
    local_18 = (float)param_1[1] * 0.5 + (float)param_1[3];
    local_14 = (float)param_1[2] * 0.5 + (float)param_1[4];
    local_20 = ((float)param_1[3] - 256.0) + _DAT_01049178;
    local_1c = ((float)param_1[4] - 256.0) + _DAT_01049174;
    FUN_0046cad0(&local_10,&local_20);
    iVar6 = local_c;
    iVar5 = local_10;
    local_20 = (local_18 - 256.0) + _DAT_01049178;
    local_1c = (local_14 - 256.0) + _DAT_01049174;
    FUN_0046cad0((int *)&local_18,&local_20);
    if ((((iVar5 <= DAT_01049130) && (iVar6 <= DAT_01049134)) && (-1 < (int)local_18)) &&
       ((-1 < (int)local_14 && (piVar1 = param_1 + 1, param_1 = (int *)0x0, 0 < *piVar1)))) {
      do {
        local_18 = (float)piVar3[2];
        local_20 = 0.0;
        if (0 < (int)local_18) {
          do {
            fVar4 = local_20;
            uVar7 = FUN_00acd42c();
            uVar8 = FUN_00acd42c();
            bVar2 = *(byte *)((int)uVar7 + (int)uVar8 + *piVar3);
            if ((bVar2 != 0) &&
               (((((bVar2 & 2) != 0 && ((param_3 & 0x40) != 0)) ||
                 (((bVar2 & 1) != 0 && ((param_3 & 1) != 0)))) ||
                (((bVar2 & 1) != 0 && ((char)param_3 < '\0')))))) {
              local_8 = (int)param_1 + local_10;
              local_4 = local_c + (int)fVar4;
              FUN_0046c780(&local_8,param_2,param_3,
                           CONCAT31((int3)((uint)*piVar3 >> 8),-1 < param_2));
            }
            local_18 = (float)piVar3[2];
            local_20 = (float)((int)fVar4 + 1);
          } while ((int)local_20 < (int)local_18);
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < piVar3[1]);
    }
  }
  return;
}


//// FUNCTION FUN_0046d8f0 @ 0046d8f0 ////

void __cdecl FUN_0046d8f0(float *param_1,undefined4 param_2,int param_3,byte param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_0046cad0(&local_18,param_1);
  uVar5 = FUN_00acd42c();
  iVar2 = (int)uVar5;
  local_10 = local_18 - iVar2;
  iVar3 = local_18 + iVar2;
  if (local_10 <= iVar3) {
    iVar4 = local_14 - iVar2;
    iVar1 = iVar4;
    local_18 = iVar4;
    do {
      for (; iVar1 <= local_14 + iVar2; iVar1 = iVar1 + 1) {
        local_c = iVar1;
        FUN_0046c780(&local_10,param_3,param_4,param_5);
        iVar4 = local_18;
      }
      local_10 = local_10 + 1;
      iVar1 = iVar4;
    } while (local_10 <= iVar3);
  }
  return;
}


//// FUNCTION FUN_0046d990 @ 0046d990 ////

undefined4 FUN_0046d990(void)

{
  undefined4 *puVar1;
  int local_8;
  int local_4;
  
  FUN_0046cad0(&local_8,(float *)&stack0x00000004);
  if ((((DAT_0104913c != 0) && (-1 < local_8)) && (local_8 < DAT_01049130)) &&
     (((-1 < local_4 && (local_4 < DAT_01049134)) &&
      (puVar1 = (undefined4 *)(*(int *)(DAT_0104913c + local_8 * 4) + local_4 * 8),
      puVar1 != (undefined4 *)0x0)))) {
    return *puVar1;
  }
  return 0x7ff;
}


//// FUNCTION FUN_0046d9f0 @ 0046d9f0 ////

uint __cdecl FUN_0046d9f0(float *param_1,float *param_2)

{
  uint uVar1;
  float *extraout_EDX;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar1 = FUN_0046bd70(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_0046bd70(param_2);
    if ((char)uVar1 != '\0') {
      FUN_0046cad0(&local_10,extraout_EDX);
      FUN_0046cad0(&local_8,param_2);
      if ((local_10 == local_8) && (local_c == local_4)) {
        return 1;
      }
      return 0;
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_0046da60 @ 0046da60 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046da60(float *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_10;
  float local_c;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  do {
    iVar2 = FUN_00990d30(0,param_2[1]);
    iVar3 = FUN_00990d30(0,param_2[2]);
    if ((*(byte *)(param_2[2] * iVar2 + *param_2 + iVar3) & 1) != 0) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  local_10 = (((float)iVar2 * 0.5 + (float)param_2[3]) - 256.0) + _DAT_01049178;
  local_c = (((float)iVar3 * 0.5 + (float)param_2[4]) - 256.0) + _DAT_01049174;
  FUN_0046cad0(&local_8,&local_10);
  fVar1 = (float)local_4 * _DAT_01049118 + _DAT_01049124;
  *param_1 = (float)local_8 * _DAT_01049118 + _DAT_01049120;
  param_1[1] = fVar1;
  return;
}


//// FUNCTION FUN_0046db50 @ 0046db50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046db50(float *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar7 = FUN_00acd42c();
  FUN_0046cad0(&local_8,param_1);
  FUN_0046cad0(&local_10,param_2);
  if ((((local_8 <= DAT_01049130) && (local_4 <= DAT_01049134)) && (-1 < local_10)) &&
     (-1 < local_c)) {
    for (; iVar2 = local_8, local_4 < local_c; local_4 = local_4 + 1) {
      for (; iVar2 < local_10; iVar2 = iVar2 + 1) {
        iVar6 = 0;
        iVar4 = 0;
        if (0.0 < _DAT_01049138) {
          do {
            iVar5 = 0;
            iVar3 = local_4;
            do {
              if (((DAT_0104913c == 0) || (iVar2 + iVar4 < 0)) ||
                 ((DAT_01049130 <= iVar2 + iVar4 || ((iVar3 < 0 || (DAT_01049134 <= iVar3)))))) {
                iVar6 = iVar6 + 0x3ff;
              }
              else {
                iVar6 = iVar6 + 0x5f;
              }
              iVar5 = iVar5 + 1;
              iVar3 = iVar3 + 1;
            } while ((float)iVar5 < _DAT_01049138);
            iVar4 = iVar4 + 1;
          } while ((float)iVar4 < _DAT_01049138);
        }
        if (((((DAT_0104913c != 0) && (-1 < iVar2)) && (iVar2 < DAT_01049130)) &&
            ((-1 < local_4 && (local_4 < DAT_01049134)))) &&
           (piVar1 = (int *)(*(int *)(DAT_0104913c + iVar2 * 4) + local_4 * 8), piVar1 != (int *)0x0
           )) {
          *piVar1 = iVar6 / (int)uVar7;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_0046dd70 @ 0046dd70 ////

void __cdecl FUN_0046dd70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0046dda0 @ 0046dda0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046dda0(float *param_1,float *param_2,float *param_3)

{
  float local_8;
  float local_4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8bc);
  FUN_004ac6f0();
  FUN_0046be60(0x1049118);
  FUN_0046c920((float *)&DAT_01049118,param_2,param_1,*param_3);
  local_8 = _DAT_01049128 + _DAT_01049120;
  local_4 = _DAT_0104912c + _DAT_01049124;
  FUN_0046db50((float *)&DAT_01049120,&local_8);
  if (DAT_00f890c0 != 0) {
    CLot_RefreshOccupancyGridForBounds(DAT_00f890c0);
  }
  FUN_0052b300();
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8bc);
  return;
}


//// FUNCTION FUN_0046de40 @ 0046de40 ////

void __fastcall FUN_0046de40(int param_1)

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


//// FUNCTION FUN_0046deb0 @ 0046deb0 ////

void __cdecl FUN_0046deb0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION MinimapOverlap_Constructor @ 0046df10 ////

void MinimapOverlap_Constructor(void)

{
  float local_40;
  float local_3c [4];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca2de8;
  local_c = ExceptionList;
  local_40 = 0.5;
  local_3c[0] = -109.0;
  local_3c[1] = -40.0;
  local_3c[2] = 217.0;
  local_3c[3] = 217.0;
  ExceptionList = &local_c;
  FUN_0046dda0(local_3c + 2,local_3c,&local_40);
  local_2c = local_20;
  DAT_00f89108 = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"map_showoverlap",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4 = 0;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_3c[2] = 0.0;
  local_3c[3] = 0.0;
  FUN_0046cad0((int *)&DAT_00f890fc,local_3c + 2);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0046e000 @ 0046e000 ////

void __thiscall FUN_0046e000(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  *(int *)this = iVar1 + 1;
  iVar1 = iVar1 + 1;
  while (1 < iVar1) {
    iVar2 = *(int *)(*(int *)((int)this + 8) + (iVar1 / 2) * 4);
    if (*(ushort *)(iVar2 + 2) <= *(ushort *)(*param_1 + 2)) break;
    *(int *)(*(int *)((int)this + 8) + iVar1 * 4) = iVar2;
    iVar1 = iVar1 / 2;
  }
  *(int *)(*(int *)((int)this + 8) + iVar1 * 4) = *param_1;
  return;
}


//// FUNCTION FUN_0046e050 @ 0046e050 ////

void __fastcall FUN_0046e050(int param_1)

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


//// FUNCTION FUN_0046e090 @ 0046e090 ////

void __fastcall FUN_0046e090(int param_1)

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


//// FUNCTION FUN_0046e0c0 @ 0046e0c0 ////

void __thiscall FUN_0046e0c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  iVar1 = *(int *)(*(int *)((int)this + 8) + param_1 * 4);
  if (param_1 * 2 <= iVar3) {
    do {
      iVar2 = param_1 * 2;
      if ((iVar2 != iVar3) &&
         (*(ushort *)(*(int *)(*(int *)((int)this + 8) + 4 + param_1 * 8) + 2) <
          *(ushort *)(*(int *)(*(int *)((int)this + 8) + param_1 * 8) + 2))) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = *(int *)((int)this + 8);
      if (*(ushort *)(iVar1 + 2) <= *(ushort *)(*(int *)(iVar3 + iVar2 * 4) + 2)) break;
      *(undefined4 *)(iVar3 + param_1 * 4) = *(undefined4 *)(iVar3 + iVar2 * 4);
      iVar3 = *(int *)this;
      param_1 = iVar2;
    } while (iVar2 * 2 <= iVar3);
  }
  *(int *)(*(int *)((int)this + 8) + param_1 * 4) = iVar1;
  return;
}


//// FUNCTION FUN_0046e130 @ 0046e130 ////

void __thiscall FUN_0046e130(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 **)((int)this + 8);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0046e1a0 @ 0046e1a0 ////

void FUN_0046e1a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0046dd70(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_0046e1c0 @ 0046e1c0 ////

void __fastcall FUN_0046e1c0(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_0046e1f0 @ 0046e1f0 ////

void __cdecl FUN_0046e1f0(uint param_1,uint param_2,ushort *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint local_8;
  uint local_4;
  
  local_8 = *(int *)param_3 + param_1;
  iVar2 = *(int *)(DAT_0104913c + local_8 * 4);
  local_4 = *(int *)(param_3 + 2) + param_2;
  uVar5 = *(uint *)(iVar2 + 4 + local_4 * 8);
  piVar1 = (int *)(iVar2 + local_4 * 8);
  if (((uVar5 & 0x2f) == 0) && ((uVar5 & 0x100) == 0)) {
    if ((uVar5 & 0x8000000) == 0) {
      uVar5 = uVar5 >> 0xb & 0xffff;
    }
    else {
      DAT_00f89104 = DAT_00f89104 + 1;
      piVar1[1] = (DAT_00f89104 & 0xffff) << 0xb | piVar1[1] & 0xf00007ffU;
      uVar5 = DAT_00f89104;
    }
    iVar6 = *piVar1;
    iVar2 = uVar5 * 0xc;
    param_3 = (ushort *)(&DAT_00f89110 + iVar2);
    if (((param_1 ^ param_2) & 1) == 0) {
      iVar6 = (iVar6 * 3) / 2;
    }
    iVar6 = iVar6 + (uint)*DAT_00f89108;
    uVar7 = (&DAT_00f89114)[uVar5 * 3] & 3;
    uVar8 = (ushort)iVar6;
    if (uVar7 == 0) {
      (&DAT_00f89114)[uVar5 * 3] =
           ((local_4 & 0x3ff) << 10 | local_8 & 0x3ff) << 2 |
           (&DAT_00f89114)[uVar5 * 3] & 0xffc00003;
      *(ushort **)(&DAT_00f89118 + iVar2) = DAT_00f89108;
      *param_3 = uVar8;
      (&DAT_00f89114)[uVar5 * 3] = (&DAT_00f89114)[uVar5 * 3] & 0xfffffffd | 1;
      uVar8 = (ushort)((int)(local_4 - param_4[1]) >> 0x1f);
      uVar3 = (ushort)((int)(local_8 - *param_4) >> 0x1f);
      *(ushort *)(&DAT_00f89112 + iVar2) =
           (((ushort)(local_4 - param_4[1]) ^ uVar8) - uVar8) +
           (((ushort)(local_8 - *param_4) ^ uVar3) - uVar3) + *param_3;
      FUN_0046e000(&DAT_01049140,(int *)&param_3);
    }
    else if (uVar7 == 1) {
      if (iVar6 < (int)(uint)*param_3) {
        *(ushort **)(&DAT_00f89118 + iVar2) = DAT_00f89108;
        *param_3 = uVar8;
        uVar4 = (ushort)((int)(local_4 - param_4[1]) >> 0x1f);
        uVar3 = (ushort)((int)(local_8 - *param_4) >> 0x1f);
        *(ushort *)(&DAT_00f89112 + iVar2) =
             (((ushort)(local_8 - *param_4) ^ uVar3) - uVar3) +
             (((ushort)(local_4 - param_4[1]) ^ uVar4) - uVar4) + uVar8;
        return;
      }
    }
    else if (((uVar7 == 2) && (iVar6 < (int)(uint)*param_3)) &&
            (*(ushort **)(&DAT_00f89118 + iVar2) != DAT_00f89108)) {
      *(ushort **)(&DAT_00f89118 + iVar2) = DAT_00f89108;
      *param_3 = uVar8;
      iVar6 = FUN_0046bf20((int *)&local_8,param_4);
      *(ushort *)(&DAT_00f89112 + iVar2) = (short)iVar6 + uVar8;
      (&DAT_00f89114)[uVar5 * 3] = (&DAT_00f89114)[uVar5 * 3] & 0xfffffffd | 1;
      FUN_0046e000(&DAT_01049140,(int *)&param_3);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0046e3c0 @ 0046e3c0 ////

void __fastcall FUN_0046e3c0(int param_1)

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


//// FUNCTION FUN_0046e3f0 @ 0046e3f0 ////

void __thiscall FUN_0046e3f0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar3 = param_2;
  puVar2 = param_2;
  while (puVar2 = puVar2 + 2, puVar2 != puVar1) {
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3 = puVar3 + 2;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -8;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0046e430 @ 0046e430 ////

void __fastcall FUN_0046e430(int param_1)

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


//// FUNCTION FUN_0046e490 @ 0046e490 ////

undefined4 * FUN_0046e490(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0046deb0(param_1,param_2,param_3);
  return param_1 + param_2 * 2;
}


//// FUNCTION FUN_0046e4c0 @ 0046e4c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e4c0(void)

{
  if (DAT_01049158 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_01049158);
  }
  DAT_01049158 = (void *)0x0;
  _DAT_0104915c = 0;
  _DAT_01049160 = 0;
  FUN_0046be60(0x1049118);
  return;
}


//// FUNCTION FUN_0046e500 @ 0046e500 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0046e500(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int local_20;
  int local_1c;
  int local_18;
  undefined *local_14;
  uint local_10;
  undefined *local_c;
  
  uVar6 = param_3;
  _DAT_00f890f4 = param_3;
  _DAT_00f890f8 = param_4;
  FUN_0046ce60();
  uVar5 = DAT_00f89114 ^ (param_1 * 4 ^ DAT_00f89114) & 0xffc;
  DAT_00f89104 = 0;
  DAT_01049140 = 0;
  _DAT_00f89110 = 0;
  uVar5 = uVar5 ^ (param_2 << 0xc ^ uVar5) & 0x3ff000;
  uVar3 = (ushort)((int)(param_2 - param_4) >> 0x1f);
  uVar2 = (ushort)((int)(param_1 - uVar6) >> 0x1f);
  _DAT_00f89112 =
       (((ushort)(param_2 - param_4) ^ uVar3) - uVar3) +
       (((ushort)(param_1 - uVar6) ^ uVar2) - uVar2);
  DAT_00f89114 = uVar5 & 0xfffffffd | 1;
  puVar4 = (undefined *)((uVar5 & 0x3ff000) >> 0xc);
  uVar6 = (uVar5 & 0xffc) >> 2;
  DAT_00f89108 = &DAT_00f89110;
  _DAT_00f89118 = 0;
  if (((DAT_0104913c != 0) && ((int)uVar6 < DAT_01049130)) && ((int)puVar4 < DAT_01049134)) {
    iVar1 = *(int *)(DAT_0104913c + uVar6 * 4) + (int)puVar4 * 8;
    puVar4 = (undefined *)0x0;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xf00007ff;
      FUN_0046e000(&DAT_01049140,(int *)&DAT_00f89108);
      uVar6 = param_3;
      uVar5 = param_1;
      if ((int)param_3 <= (int)param_1) {
        uVar5 = param_3;
      }
      local_20 = uVar5 - 0x80;
      uVar5 = param_2;
      if ((int)param_4 <= (int)param_2) {
        uVar5 = param_4;
      }
      local_1c = uVar5 - 0x80;
      if ((int)param_1 <= (int)param_3) {
        param_1 = param_3;
      }
      local_18 = param_1 + 0x80;
      uVar5 = param_2;
      if ((int)param_2 <= (int)param_4) {
        uVar5 = param_4;
      }
      local_14 = (undefined *)(uVar5 + 0x80);
      if (local_20 < DAT_00f890e8) {
        local_20 = DAT_00f890e8;
      }
      if (DAT_00f890e0 < local_18) {
        local_18 = DAT_00f890e0;
      }
      if (local_1c < 2) {
        local_1c = 2;
      }
      if ((int)DAT_00f890e4 < (int)local_14) {
        local_14 = DAT_00f890e4;
      }
      if (((DAT_00f890ec <= (int)param_2) && (DAT_00f890ec <= (int)param_4)) &&
         (local_1c < DAT_00f890ec)) {
        local_1c = DAT_00f890ec;
      }
      if (local_20 < 1) {
        local_20 = 1;
      }
      if (DAT_01049130 + -3 < local_18) {
        local_18 = DAT_01049130 + -3;
      }
      if (local_1c < 1) {
        local_1c = 1;
      }
      puVar4 = (undefined *)(DAT_01049134 + -3);
      iVar1 = DAT_01049140;
      if ((int)puVar4 < (int)local_14) {
        local_14 = puVar4;
      }
      while ((DAT_01049140 = iVar1, iVar1 != 0 && (DAT_00f89104 < 0xfff6))) {
        DAT_00f89108 = *(undefined **)(DAT_01049148 + 4);
        DAT_01049140 = iVar1 + -1;
        *(undefined4 *)(DAT_01049148 + 4) = *(undefined4 *)(DAT_01049148 + iVar1 * 4);
        FUN_0046e0c0(&DAT_01049140,1);
        if (((*(uint *)(DAT_00f89108 + 4) >> 2 & 0x3ff) == uVar6) &&
           (uVar5 = *(uint *)(DAT_00f89108 + 4) >> 0xc & 0x3ff, uVar5 == param_4)) {
          return CONCAT31((int3)(uVar5 >> 8),1);
        }
        local_10 = *(uint *)(DAT_00f89108 + 4) >> 2 & 0x3ff;
        local_c = (undefined *)(*(uint *)(DAT_00f89108 + 4) >> 0xc & 0x3ff);
        puVar4 = local_c;
        iVar1 = DAT_01049140;
        if ((((local_20 <= (int)local_10) && ((int)local_10 <= local_18)) &&
            (local_1c <= (int)local_c)) && ((int)local_c <= (int)local_14)) {
          FUN_0046e1f0(0xffffffff,0,(ushort *)&local_10,(int *)&param_3);
          FUN_0046e1f0(1,0,(ushort *)&local_10,(int *)&param_3);
          FUN_0046e1f0(0,0xffffffff,(ushort *)&local_10,(int *)&param_3);
          FUN_0046e1f0(0,1,(ushort *)&local_10,(int *)&param_3);
          FUN_0046e1f0(0xffffffff,0xffffffff,(ushort *)&local_10,(int *)&param_3);
          FUN_0046e1f0(0xffffffff,1,(ushort *)&local_10,(int *)&param_3);
          FUN_0046e1f0(1,0xffffffff,(ushort *)&local_10,(int *)&param_3);
          FUN_0046e1f0(1,1,(ushort *)&local_10,(int *)&param_3);
          puVar4 = DAT_00f89108;
          *(uint *)(DAT_00f89108 + 4) = *(uint *)(DAT_00f89108 + 4) & 0xfffffffe | 2;
          iVar1 = DAT_01049140;
        }
      }
    }
  }
  return (uint)puVar4 & 0xffffff00;
}


//// FUNCTION FUN_0046e880 @ 0046e880 ////

void FUN_0046e880(void)

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
  puStack_8 = &LAB_00ca2e08;
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


//// FUNCTION FUN_0046e8f0 @ 0046e8f0 ////

void FUN_0046e8f0(void)

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
  puStack_8 = &LAB_00ca2e28;
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


//// FUNCTION FUN_0046e960 @ 0046e960 ////

undefined4 __thiscall FUN_0046e960(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x1fffffff < param_1) {
    param_1 = FUN_0046e880();
  }
  pvVar1 = operator_new(param_1 * 8);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 8 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_0046e9b0 @ 0046e9b0 ////

void __thiscall FUN_0046e9b0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00ca2e40;
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
      uVar2 = FUN_0046e880();
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
      puVar5 = (undefined4 *)FUN_0046dd70(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0046deb0(puVar5,param_2,&local_20);
      FUN_0046dd70(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
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
      FUN_0046dd70(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_0046e490(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_0046c280(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0046dd70(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_0046d130((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_0046c280(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0046ec60 @ 0046ec60 ////

void __thiscall FUN_0046ec60(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2 >> 3;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2 >> 3;
    }
    FUN_0046e9b0(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if ((iVar2 != 0) && (param_1 < (uint)((int)*(undefined4 **)((int)this + 8) - iVar2 >> 3))) {
    FUN_0046e130(this,&param_1,(undefined4 *)(iVar2 + param_1 * 8),*(undefined4 **)((int)this + 8));
  }
  return;
}


