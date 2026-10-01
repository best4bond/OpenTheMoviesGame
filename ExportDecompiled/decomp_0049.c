//// FUNCTION FUN_00a50060 @ 00a50060 ////

int __fastcall FUN_00a50060(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a4f200();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a50090 @ 00a50090 ////

int * __thiscall FUN_00a50090(void *this,undefined4 *param_1)

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
  puStack_8 = &LAB_00cfaf98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_00a4f180(this,param_1);
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
  piVar2 = FUN_00a4fe80(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_00a50160 @ 00a50160 ////

void __cdecl FUN_00a50160(char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  int **ppiVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *this;
  int *piVar9;
  byte *pbVar10;
  bool bVar11;
  int *local_34;
  int *local_30;
  byte *local_2c;
  uint local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfafce;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_0048ad50((int *)&local_2c);
  local_34 = FUN_00a4f180(&DAT_010bb49c,&local_2c);
  if (local_34 != DAT_010bb4a0) {
    pbVar10 = (byte *)local_34[3];
    pbVar4 = local_2c;
    do {
      bVar2 = *pbVar4;
      bVar11 = bVar2 < *pbVar10;
      if (bVar2 != *pbVar10) {
LAB_00a50209:
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00a5020e;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar11 = bVar2 < pbVar10[1];
      if (bVar2 != pbVar10[1]) goto LAB_00a50209;
      pbVar4 = pbVar4 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00a5020e:
    if (-1 < iVar5) {
      ppiVar6 = &local_34;
      goto LAB_00a50220;
    }
  }
  local_30 = DAT_010bb4a0;
  ppiVar6 = &local_30;
LAB_00a50220:
  if ((*ppiVar6 == DAT_010bb4a0) && (uVar7 = FUN_009d3720(&local_2c), 0 < (int)uVar7)) {
    piVar8 = operator_new(0x54);
    local_4._0_1_ = 1;
    local_30 = piVar8;
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      FUN_009b38a0(piVar8);
      *piVar8 = (int)&PTR_FUN_00d79330;
    }
    local_4._0_1_ = 0;
    FUN_004015d0(piVar8 + 1,(char *)local_2c,local_28);
    piVar8[0xb] = uVar7;
    local_30 = operator_new(0x3c);
    local_4._0_1_ = 2;
    if (local_30 == (int *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      this = FUN_00a4efb0(local_30);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004015d0(this,(char *)local_2c,local_28);
    this[8] = 0;
    *(undefined1 *)(this + 10) = 0;
    this[9] = uVar7;
    piVar9 = FUN_00a50090(&DAT_010bb49c,&local_2c);
    *piVar9 = (int)this;
    piVar9 = this + 0xb;
    this[0xc] = &DAT_010bb4bc;
    *piVar9 = (int)DAT_010bb4bc;
    *(int **)((int)DAT_010bb4bc + 4) = piVar9;
    DAT_010bb4bc = piVar9;
    AsyncLoadJob_ExecuteSync(piVar8);
    DAT_010bb498 = DAT_010bb498 + uVar7;
  }
  FUN_00a4fb60();
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00a50330 @ 00a50330 ////

uint __cdecl FUN_00a50330(char *param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 **ppuVar6;
  int *piVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  bool bVar13;
  undefined4 *local_34;
  undefined4 *local_30;
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfafe8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,param_1,(int)pcVar4 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_0048ad50((int *)&local_2c);
  local_34 = FUN_00a4f180(&DAT_010bb49c,&local_2c);
  if (local_34 != DAT_010bb4a0) {
    pbVar12 = (byte *)local_34[3];
    pbVar9 = local_2c;
    do {
      bVar2 = *pbVar9;
      bVar13 = bVar2 < *pbVar12;
      if (bVar2 != *pbVar12) {
LAB_00a503d9:
        iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_00a503de;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar13 = bVar2 < pbVar12[1];
      if (bVar2 != pbVar12[1]) goto LAB_00a503d9;
      pbVar9 = pbVar9 + 2;
      pbVar12 = pbVar12 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00a503de:
    if (-1 < iVar5) {
      ppuVar6 = &local_34;
      goto LAB_00a503f0;
    }
  }
  local_30 = DAT_010bb4a0;
  ppuVar6 = &local_30;
LAB_00a503f0:
  if (*ppuVar6 == DAT_010bb4a0) {
    FUN_00a50160(param_1);
  }
  do {
    puVar8 = DAT_010bb4a0;
    local_30 = FUN_00a4f180(&DAT_010bb49c,&local_2c);
    if (local_30 == puVar8) {
LAB_00a50454:
      local_34 = puVar8;
      ppuVar6 = &local_34;
    }
    else {
      pbVar12 = (byte *)local_30[3];
      pbVar9 = local_2c;
      do {
        bVar2 = *pbVar9;
        bVar13 = bVar2 < *pbVar12;
        if (bVar2 != *pbVar12) {
LAB_00a50445:
          iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_00a5044a;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar13 = bVar2 < pbVar12[1];
        if (bVar2 != pbVar12[1]) goto LAB_00a50445;
        pbVar9 = pbVar9 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_00a5044a:
      if (iVar5 < 0) goto LAB_00a50454;
      ppuVar6 = &local_30;
    }
    if ((*ppuVar6 == puVar8) || (*(char *)((*ppuVar6)[0xb] + 0x28) != '\0')) break;
    FUN_009d9830(0);
    FUN_009b3890();
  } while( true );
  uVar11 = 0;
  local_30 = FUN_00a4f180(&DAT_010bb49c,&local_2c);
  if (local_30 != puVar8) {
    pbVar12 = (byte *)local_30[3];
    pbVar9 = local_2c;
    do {
      bVar2 = *pbVar9;
      bVar13 = bVar2 < *pbVar12;
      if (bVar2 != *pbVar12) {
LAB_00a504c4:
        iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_00a504c9;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar13 = bVar2 < pbVar12[1];
      if (bVar2 != pbVar12[1]) goto LAB_00a504c4;
      pbVar9 = pbVar9 + 2;
      pbVar12 = pbVar12 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00a504c9:
    if (-1 < iVar5) {
      ppuVar6 = &local_30;
      goto LAB_00a504db;
    }
  }
  local_34 = puVar8;
  ppuVar6 = &local_34;
LAB_00a504db:
  puVar3 = *ppuVar6;
  if (puVar3 != puVar8) {
    uVar11 = *(uint *)(puVar3[0xb] + 0x24);
    if ((int)param_3 <= (int)uVar11) {
      uVar11 = param_3;
    }
    puVar8 = *(undefined4 **)(puVar3[0xb] + 0x20);
    for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *param_2 = *puVar8;
      puVar8 = puVar8 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar10 = uVar11 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    iVar5 = puVar3[0xb];
    piVar7 = (int *)(iVar5 + 0x2c);
    if (*(int **)(iVar5 + 0x30) != (int *)0x0) {
      **(int **)(iVar5 + 0x30) = *piVar7;
    }
    if (*piVar7 != 0) {
      *(undefined4 *)(*piVar7 + 4) = *(undefined4 *)(iVar5 + 0x30);
    }
    *piVar7 = 0;
    *(undefined4 *)(iVar5 + 0x30) = 0;
    puVar8 = (undefined4 *)(puVar3[0xb] + 0x2c);
    *(undefined4 ***)(puVar3[0xb] + 0x30) = &DAT_010bb4bc;
    *puVar8 = DAT_010bb4bc;
    *(undefined4 **)((int)DAT_010bb4bc + 4) = puVar8;
    DAT_010bb4bc = puVar8;
  }
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00a50580 @ 00a50580 ////

void __fastcall FUN_00a50580(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d79344;
  return;
}


//// FUNCTION FUN_00a505e0 @ 00a505e0 ////

void __fastcall FUN_00a505e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = DAT_010bb4e0;
  do {
    if (iVar2 == 0) {
LAB_00a50614:
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 0x14));
    }
    if (iVar2 == param_1) {
      if (iVar1 == 0) {
        DAT_010bb4e0 = *(int *)(iVar2 + 0x18);
      }
      else {
        *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
      }
      goto LAB_00a50614;
    }
    iVar1 = iVar2;
    iVar2 = *(int *)(iVar2 + 0x18);
  } while( true );
}


//// FUNCTION FUN_00a50630 @ 00a50630 ////

void * __thiscall FUN_00a50630(void *this,byte param_1)

{
  FUN_00a505e0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a50650 @ 00a50650 ////

void __fastcall FUN_00a50650(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  piVar1 = (int *)((int)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  pvVar2 = DAT_010bb4e8;
  pvVar4 = (void *)0x0;
  if (DAT_010bb4e8 != (void *)0x0) {
    while (pvVar3 = pvVar2, pvVar3 != param_1) {
      pvVar2 = *(void **)((int)pvVar3 + 4);
      pvVar4 = pvVar3;
      if (*(void **)((int)pvVar3 + 4) == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
    }
    if (pvVar4 != (void *)0x0) {
      *(undefined4 *)((int)pvVar4 + 4) = *(undefined4 *)((int)pvVar3 + 4);
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    DAT_010bb4e8 = *(void **)((int)pvVar3 + 4);
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00a506a0 @ 00a506a0 ////

uint * __cdecl FUN_00a506a0(uint param_1,uint param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  uVar1 = param_3 * 0x14 + 0x1c;
  puVar2 = operator_new(uVar1);
  puVar6 = puVar2;
  for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  puVar2[4] = param_2;
  *puVar2 = uVar1;
  puVar2[3] = param_1;
  puVar2[2] = 1;
  puVar2[6] = puVar2[6] & 0xfffffffe;
  puVar2[5] = (uint)(puVar2 + 7);
  if (0 < param_3) {
    iVar5 = 0;
    do {
      iVar3 = FUN_00a76d00((void *)(puVar2[5] + iVar5),param_4);
      param_4 = (undefined4 *)((int)param_4 + iVar3);
      iVar5 = iVar5 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  puVar2[1] = (uint)DAT_010bb4e8;
  DAT_010bb4e8 = puVar2;
  return puVar2;
}


//// FUNCTION FUN_00a50730 @ 00a50730 ////

void __fastcall FUN_00a50730(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_009ac1e0(*(byte **)(param_1 + 0x14),*(uint *)(param_1 + 0xc));
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}


//// FUNCTION FUN_00a50750 @ 00a50750 ////

void __fastcall FUN_00a50750(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_009ac1e0((byte *)param_1[4],*param_1);
  param_1[1] = uVar1;
  return;
}


//// FUNCTION FUN_00a50770 @ 00a50770 ////

void __fastcall FUN_00a50770(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_009ac1e0((byte *)param_1[5],*param_1);
  param_1[1] = uVar1;
  return;
}


//// FUNCTION FUN_00a50840 @ 00a50840 ////

undefined4 * __thiscall
FUN_00a50840(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb036;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  puVar1 = this;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_4 = 0;
  if ((param_4 != (undefined4 *)0x0) && (param_3 != 0)) {
    uVar4 = param_3 * 6;
    *(undefined4 *)this = param_1;
    *(undefined4 *)((int)this + 4) = param_2;
    *(undefined4 *)((int)this + 8) = 1;
    *(int *)((int)this + 0x10) = param_3;
    puVar1 = operator_new(uVar4);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00401380(puVar1,6,param_3,&LAB_009d72d0);
    }
    *(undefined4 **)((int)this + 0x14) = puVar1;
    if (param_5 == '\0') {
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = *param_4;
        param_4 = param_4 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    else {
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = *param_4;
        param_4 = param_4 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(void **)((int)this + 0x18) = DAT_010bb4e0;
    DAT_010bb4e0 = this;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION LH_BuildPrimitiveIndexBuffer @ 00a50940 ////

int * __cdecl
LH_BuildPrimitiveIndexBuffer(int param_1,int param_2,int param_3,undefined4 *param_4,char param_5)

{
  void *this;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb04b;
  local_c = ExceptionList;
  if (param_3 != 0) {
    piVar1 = DAT_010bb4e0;
    if (param_2 != -1) {
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[6]) {
        if ((param_1 == *piVar1) && (param_2 == piVar1[1])) {
          piVar1[2] = piVar1[2] + 1;
          return piVar1;
        }
      }
    }
    ExceptionList = &local_c;
    this = operator_new(0x34);
    local_4 = 0;
    if (this != (void *)0x0) {
      piVar1 = FUN_00a50840(this,param_1,param_2,param_3,param_4,param_5);
      ExceptionList = local_c;
      return piVar1;
    }
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_00a509f0 @ 00a509f0 ////

void __fastcall FUN_00a509f0(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_00a505e0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a50a10 @ 00a50a10 ////

char __fastcall FUN_00a50a10(int param_1)

{
  int iVar1;
  bool bVar2;
  int *this;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char local_a;
  uint local_8;
  undefined4 local_4;
  
  local_a = '\x01';
  if (*(int *)(param_1 + 0x10) == 0) {
    return '\0';
  }
  iVar1 = *(int *)(param_1 + 0x10) * 3;
  if (*(int *)(param_1 + 0x2c) == 0) {
    local_4 = 0;
    local_8 = 0;
    bVar2 = false;
    this = DAT_010bb22c;
    while (this != (int *)0x0) {
      if (bVar2) {
        if (this != (int *)0x0) goto LAB_00a50aaa;
        break;
      }
      bVar2 = FUN_00a3a260(this,iVar1,2,&local_8);
      if (!bVar2) {
        this = (int *)this[3];
      }
      bVar2 = bVar2;
    }
    this = (int *)FUN_00a3b270();
    if (this == (int *)0x0) {
LAB_00a50b1c:
      *(undefined4 *)(param_1 + 0x28) = DAT_0105bec0;
      return '\0';
    }
    FUN_00a3a0b0((int)this);
    bVar2 = FUN_00a3a260(this,iVar1,2,&local_8);
    if (!bVar2) goto LAB_00a50b1c;
LAB_00a50aaa:
    puVar3 = (undefined4 *)FUN_00a3a7d0(this,(int *)(param_1 + 0x1c),(int *)&local_8);
    if ((puVar3 == (undefined4 *)0x0) || (*(int *)(param_1 + 0x2c) == 0)) {
      local_a = '\0';
    }
    else {
      uVar4 = *(int *)(param_1 + 0x10) * 6;
      puVar6 = *(undefined4 **)(param_1 + 0x14);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    FUN_00a3a090(this);
    if (local_a == '\0') goto LAB_00a50b08;
  }
  (**(code **)(*g_pDirect3DDevice + 0x1a0))(g_pDirect3DDevice,**(undefined4 **)(param_1 + 0x2c));
LAB_00a50b08:
  *(undefined4 *)(param_1 + 0x28) = DAT_0105bec0;
  return local_a;
}


//// FUNCTION FUN_00a50b40 @ 00a50b40 ////

undefined4 * __thiscall
FUN_00a50b40(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb06b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  local_4 = 0;
  puVar4 = this;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if ((param_4 != (undefined4 *)0x0) && (param_3 != 0)) {
    *(undefined4 *)this = param_1;
    *(undefined4 *)((int)this + 4) = param_2;
    uVar1 = param_3 * 0x20;
    *(undefined4 *)((int)this + 8) = 1;
    *(int *)((int)this + 0xc) = param_3;
    if (param_5 != (undefined4 *)0x0) {
      uVar1 = param_3 * 0x28;
    }
    puVar2 = operator_new(uVar1);
    *(undefined4 **)((int)this + 0x10) = puVar2;
    puVar4 = puVar2;
    for (iVar3 = (*(uint *)((int)this + 0xc) & 0x7ffffff) << 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_4;
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    if (param_5 != (undefined4 *)0x0) {
      *(undefined4 **)((int)this + 0x14) = puVar2 + *(uint *)((int)this + 0xc) * 8;
      puVar4 = puVar2 + *(uint *)((int)this + 0xc) * 8;
      for (iVar3 = (*(uint *)((int)this + 0xc) & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *param_5;
        param_5 = param_5 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_5;
        param_5 = (undefined4 *)((int)param_5 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    *(void **)((int)this + 0x20) = DAT_010bb4e4;
    DAT_010bb4e4 = this;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a50c50 @ 00a50c50 ////

void __fastcall FUN_00a50c50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = DAT_010bb4e4;
  do {
    if (iVar2 == 0) {
LAB_00a50c85:
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 0x10));
    }
    if (iVar2 == param_1) {
      if (iVar1 == 0) {
        DAT_010bb4e4 = *(int *)(iVar2 + 0x20);
      }
      else {
        *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
      }
      goto LAB_00a50c85;
    }
    iVar1 = iVar2;
    iVar2 = *(int *)(iVar2 + 0x20);
  } while( true );
}


//// FUNCTION FUN_00a50cd0 @ 00a50cd0 ////

int * __cdecl
FUN_00a50cd0(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  void *this;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb08b;
  local_c = ExceptionList;
  piVar1 = DAT_010bb4e4;
  if (param_2 != -1) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
      if ((param_1 == *piVar1) && (param_2 == piVar1[1])) {
        piVar1[2] = piVar1[2] + 1;
        return piVar1;
      }
    }
  }
  ExceptionList = &local_c;
  this = operator_new(0x44);
  local_4 = 0;
  if (this == (void *)0x0) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  piVar1 = FUN_00a50b40(this,param_1,param_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return piVar1;
}


//// FUNCTION FUN_00a50d80 @ 00a50d80 ////

void * __thiscall FUN_00a50d80(void *this,byte param_1)

{
  FUN_00a50c50((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a50da0 @ 00a50da0 ////

void __thiscall
FUN_00a50da0(void *this,int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  int *piVar1;
  
  *(int *)this = param_1;
  if (param_1 != 0) {
    piVar1 = LH_BuildPrimitiveIndexBuffer(param_4,param_5,param_2,param_3,'\0');
    *(int **)((int)this + 4) = piVar1;
  }
  return;
}


//// FUNCTION FUN_00a50de0 @ 00a50de0 ////

void __cdecl FUN_00a50de0(uint param_1,uint param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = DAT_010bb4e8;
  if (param_2 != 0xffffffff) {
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if ((param_1 == *(uint *)(iVar1 + 0xc)) && (param_2 == *(uint *)(iVar1 + 0x10))) {
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        return;
      }
    }
  }
  FUN_00a506a0(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_00a50e20 @ 00a50e20 ////

void __fastcall FUN_00a50e20(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *param_1;
  puVar2 = operator_new(uVar1);
  puVar4 = param_1;
  puVar5 = puVar2;
  for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar5 = (char)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  puVar2[4] = 0xffffffff;
  puVar2[3] = uVar1 - 0x1c;
  puVar2[5] = (uint)(puVar2 + 7);
  puVar2[1] = 0;
  puVar2[2] = 1;
  puVar2[6] = puVar2[6] ^ (param_1[6] ^ puVar2[6]) & 1;
  return;
}


//// FUNCTION FUN_00a50e80 @ 00a50e80 ////

int __cdecl FUN_00a50e80(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_010bb4e8;
  if (param_2 == -1) {
    return 0;
  }
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((param_1 == *(int *)(iVar1 + 0xc)) && (param_2 == *(int *)(iVar1 + 0x10))) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}


//// FUNCTION FUN_00a50ec0 @ 00a50ec0 ////

int * __cdecl FUN_00a50ec0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = DAT_010bb4e4;
  if (param_2 == -1) {
    return (int *)0x0;
  }
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((param_1 == *piVar1) && (param_2 == piVar1[1])) break;
    piVar1 = (int *)piVar1[8];
  }
  return piVar1;
}


//// FUNCTION FUN_00a50f00 @ 00a50f00 ////

undefined4 * __fastcall FUN_00a50f00(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = operator_new(0x44);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0xffffffff;
    *puVar1 = 0;
    puVar1[0xc] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xd] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar5 = puVar1;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar1[2] = 1;
  }
  puVar1[1] = 0xffffffff;
  *puVar1 = *param_1;
  puVar1[3] = param_1[3];
  iVar3 = param_1[9];
  puVar1[9] = iVar3;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  }
  puVar1[10] = puVar1[10] ^ (param_1[10] ^ puVar1[10]) & 2;
  uVar4 = param_1[3] * 0x20;
  if (param_1[5] != 0) {
    uVar4 = param_1[3] * 0x28;
  }
  puVar2 = operator_new(uVar4);
  puVar1[4] = puVar2;
  puVar5 = (undefined4 *)param_1[4];
  puVar6 = puVar2;
  for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  if (param_1[5] != 0) {
    puVar1[5] = puVar2 + param_1[3] * 8;
  }
  puVar1[8] = 0;
  return puVar1;
}


//// FUNCTION FUN_00a50fd0 @ 00a50fd0 ////

int * __cdecl FUN_00a50fd0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = DAT_010bb4e0;
  if (param_2 == -1) {
    return (int *)0x0;
  }
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((param_1 == *piVar1) && (param_2 == piVar1[1])) break;
    piVar1 = (int *)piVar1[6];
  }
  return piVar1;
}


//// FUNCTION FUN_00a51010 @ 00a51010 ////

undefined4 * __fastcall FUN_00a51010(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb0ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x34);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0xffffffff;
    *puVar1 = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar2 = puVar1;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar1[2] = 1;
  }
  puVar1[1] = 0xffffffff;
  *puVar1 = *param_1;
  puVar1[4] = param_1[4];
  puVar1[3] = puVar1[3] ^ (param_1[3] ^ puVar1[3]) & 1;
  iVar3 = param_1[4];
  if (iVar3 != 0) {
    puVar2 = operator_new(iVar3 * 6);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00401380(puVar2,6,iVar3,&LAB_009d72d0);
    }
    puVar1[5] = puVar2;
    iVar3 = param_1[4];
    puVar5 = (undefined4 *)param_1[5];
    for (uVar4 = (uint)(iVar3 * 6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = iVar3 * 6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  puVar1[6] = 0;
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_00a51110 @ 00a51110 ////

undefined4 __cdecl FUN_00a51110(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint in_EAX;
  undefined3 extraout_var;
  short *psVar4;
  undefined4 uVar5;
  short sVar6;
  
  *param_2 = 0;
  if (0 < param_1) {
    if ((DAT_010bb4dc != 0) && (param_1 < 0x201)) {
      cVar3 = FUN_00a50a10(DAT_010bb4dc);
      iVar1 = DAT_010bb4dc;
      in_EAX = CONCAT31(extraout_var,cVar3);
      if (cVar3 != '\0') {
        *param_2 = *(int *)(DAT_010bb4dc + 0x24);
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
    }
    if (DAT_010bb234 != (int *)0x0) {
      psVar4 = (short *)FUN_00a3a530(DAT_010bb234,param_1 * 6,param_2);
      if (psVar4 != (short *)0x0) {
        sVar6 = 0;
        if (0 < param_1) {
          do {
            *psVar4 = sVar6;
            psVar4[1] = sVar6 + 1;
            psVar4[2] = sVar6 + 2;
            psVar4[3] = sVar6;
            psVar4[4] = sVar6 + 2;
            psVar4[5] = sVar6 + 3;
            psVar4 = psVar4 + 6;
            sVar6 = sVar6 + 4;
            param_1 = param_1 + -1;
          } while (param_1 != 0);
        }
        FUN_008d9640();
        piVar2 = g_pDirect3DDevice;
        iVar1 = *g_pDirect3DDevice;
        uVar5 = FUN_008d9650();
        uVar5 = (**(code **)(iVar1 + 0x1a0))(piVar2,uVar5);
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      in_EAX = 0;
      if (DAT_010bb234 != (int *)0x0) {
        in_EAX = FUN_00a3a5d0(DAT_010bb234);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00a511e0 @ 00a511e0 ////

void __fastcall FUN_00a511e0(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_00a50c50((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a51200 @ 00a51200 ////

char __thiscall FUN_00a51200(void *this,char param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined3 extraout_var;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint *puVar13;
  char local_35;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28 [4];
  int local_18;
  int local_14;
  
  piVar5 = g_pDirect3DDevice;
  iVar10 = 0;
  local_35 = '\x01';
  if ((*(int *)((int)this + 0xc) == 0) || (*(int *)((int)this + 0x10) == 0)) {
    return '\0';
  }
  if (param_1 != '\0') {
    if (param_2 != -1) {
      iVar4 = *g_pDirect3DDevice;
      uVar3 = FUN_008d9580(param_2);
      (**(code **)(iVar4 + 0x164))(piVar5,uVar3);
      piVar5 = g_pDirect3DDevice;
      if (DAT_010bb230 != 0) {
        iVar10 = *(int *)(DAT_010bb230 + 4);
      }
      iVar4 = *g_pDirect3DDevice;
      uVar3 = FUN_008d9510(param_2);
      (**(code **)(iVar4 + 400))(piVar5,0,iVar10,0,uVar3);
      return '\x01';
    }
    iVar4 = *g_pDirect3DDevice;
    uVar3 = FUN_00a4cb90((int)this);
    (**(code **)(iVar4 + 0x164))(piVar5,uVar3);
    piVar5 = g_pDirect3DDevice;
    if (DAT_010bb230 != 0) {
      iVar10 = *(int *)(DAT_010bb230 + 4);
    }
    iVar4 = *g_pDirect3DDevice;
    uVar3 = FUN_00a4cb40((int)this);
    (**(code **)(iVar4 + 400))(piVar5,0,iVar10,0,uVar3);
    return '\x01';
  }
  if (*(int *)((int)this + 0x3c) == 0) {
    bVar1 = false;
    local_2c = 0;
    local_30 = 0;
    _param_1 = DAT_010bb228;
    while (_param_1 != (undefined4 *)0x0) {
      if (bVar1) {
        if (_param_1 != (undefined4 *)0x0) goto LAB_00a51362;
        break;
      }
      puVar13 = &local_30;
      iVar4 = FUN_00a4cb40((int)this);
      bVar1 = FUN_00a3a9c0(_param_1,*(int *)((int)this + 0xc),iVar4,puVar13);
      if (!bVar1) {
        _param_1 = (undefined4 *)*_param_1;
      }
      bVar1 = bVar1;
    }
    _param_1 = FUN_00a3b2c0();
    if (_param_1 != (undefined4 *)0x0) {
      FUN_00a3a020((int)_param_1);
      puVar13 = &local_30;
      iVar4 = FUN_00a4cb40((int)this);
      bVar1 = FUN_00a3a9c0(_param_1,*(int *)((int)this + 0xc),iVar4,puVar13);
      if (bVar1) {
LAB_00a51362:
        puVar13 = &local_30;
        piVar5 = (int *)((int)this + 0x2c);
        uVar3 = FUN_00a4cb40((int)this);
        piVar5 = (int *)FUN_00a3a6d0(_param_1,uVar3,piVar5,(int *)puVar13);
        if ((piVar5 == (int *)0x0) || (*(int *)((int)this + 0x3c) == 0)) {
switchD_00a513a3_caseD_1:
          local_35 = '\0';
        }
        else {
          bVar2 = FUN_00a4ca90((int)this);
          switch(CONCAT31(extraout_var,bVar2)) {
          case 0:
            iVar10 = 0;
            if (0 < *(int *)((int)this + 0xc)) {
              iVar4 = 0;
              do {
                puVar7 = (undefined4 *)(*(int *)((int)this + 0x10) + iVar4);
                puVar11 = (undefined4 *)(iVar4 + (int)piVar5);
                for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar11 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar11 = puVar11 + 1;
                }
                iVar10 = iVar10 + 1;
                iVar4 = iVar4 + 0x20;
              } while (iVar10 < *(int *)((int)this + 0xc));
            }
            break;
          default:
            goto switchD_00a513a3_caseD_1;
          case 4:
            if (*(int *)((int)this + 0x18) == 0) {
              if (0 < *(int *)((int)this + 0xc)) {
                iVar4 = 0;
                do {
                  FUN_00a4caf0(local_28,(undefined4 *)(*(int *)((int)this + 0x10) + iVar4));
                  *piVar5 = local_28[0];
                  piVar5[1] = local_28[1];
                  piVar5[2] = local_28[2];
                  piVar5[3] = local_28[3];
                  piVar5[4] = local_18;
                  piVar5[5] = local_14;
                  piVar5[3] = -1;
                  iVar10 = iVar10 + 1;
                  iVar4 = iVar4 + 0x20;
                  piVar5 = piVar5 + 6;
                } while (iVar10 < *(int *)((int)this + 0xc));
              }
            }
            else {
              iVar4 = 0;
              if (0 < *(int *)((int)this + 0xc)) {
                do {
                  FUN_00a4caf0(local_28,(undefined4 *)(*(int *)((int)this + 0x10) + iVar10));
                  *piVar5 = local_28[0];
                  piVar5[1] = local_28[1];
                  piVar5[2] = local_28[2];
                  piVar5[3] = local_28[3];
                  piVar5[4] = local_18;
                  piVar5[5] = local_14;
                  piVar5[3] = (-(uint)((*(byte *)(iVar4 + *(int *)((int)this + 0x18)) & 1) != 0) &
                              0xff000000) + 0xffffff;
                  iVar4 = iVar4 + 1;
                  iVar10 = iVar10 + 0x20;
                  piVar5 = piVar5 + 6;
                } while (iVar4 < *(int *)((int)this + 0xc));
              }
            }
            break;
          case 7:
            local_34 = 0;
            if (0 < *(int *)((int)this + 0xc)) {
              param_2 = 0;
              do {
                FUN_00a4cdb0(local_28,(undefined4 *)(*(int *)((int)this + 0x10) + param_2));
                piVar8 = local_28;
                piVar9 = piVar5;
                for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *piVar9 = *piVar8;
                  piVar8 = piVar8 + 1;
                  piVar9 = piVar9 + 1;
                }
                iVar10 = *(int *)((int)this + 0x14);
                piVar5[8] = *(int *)(iVar10 + local_34 * 8);
                piVar5[9] = *(int *)(iVar10 + 4 + local_34 * 8);
                local_34 = local_34 + 1;
                param_2 = param_2 + 0x20;
                piVar5 = piVar5 + 10;
              } while (local_34 < *(int *)((int)this + 0xc));
            }
            break;
          case 8:
            iVar10 = 0;
            if (0 < *(int *)((int)this + 0xc)) {
              iVar4 = 0;
              do {
                piVar8 = (int *)(*(int *)((int)this + 0x10) + iVar4);
                *piVar5 = *piVar8;
                piVar5[1] = piVar8[1];
                piVar5[2] = piVar8[2];
                iVar10 = iVar10 + 1;
                iVar4 = iVar4 + 0x20;
                piVar5 = piVar5 + 3;
              } while (iVar10 < *(int *)((int)this + 0xc));
            }
            break;
          case 9:
            param_2 = 0;
            if (0 < *(int *)((int)this + 0xc)) {
              piVar8 = piVar5 + 3;
              do {
                FUN_00a4ce20(local_28,(undefined4 *)
                                      ((int)piVar8 +
                                      *(int *)((int)this + 0x10) + (-0xc - (int)piVar5)));
                piVar9 = local_28;
                piVar12 = piVar8 + -3;
                for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *piVar12 = *piVar9;
                  piVar9 = piVar9 + 1;
                  piVar12 = piVar12 + 1;
                }
                iVar10 = *(int *)((int)this + 0x14);
                piVar8[3] = *(int *)(iVar10 + param_2 * 8);
                piVar8[4] = *(int *)(iVar10 + 4 + param_2 * 8);
                *piVar8 = (-(uint)((*(byte *)(param_2 + *(int *)((int)this + 0x18)) & 1) != 0) &
                          0xff000000) + 0xffffff;
                param_2 = param_2 + 1;
                piVar8 = piVar8 + 8;
              } while (param_2 < *(int *)((int)this + 0xc));
            }
          }
        }
        FUN_00a3a000((int)_param_1);
        if (local_35 == '\0') goto LAB_00a51630;
        goto LAB_00a515f9;
      }
    }
    local_35 = '\0';
  }
  else {
LAB_00a515f9:
    piVar5 = g_pDirect3DDevice;
    iVar10 = *g_pDirect3DDevice;
    uVar3 = FUN_00a4cb90((int)this);
    (**(code **)(iVar10 + 0x164))(piVar5,uVar3);
    piVar5 = g_pDirect3DDevice;
    iVar10 = *g_pDirect3DDevice;
    uVar3 = FUN_00a4cb40((int)this);
    (**(code **)(iVar10 + 400))(piVar5,0,*(undefined4 *)(*(int *)((int)this + 0x3c) + 4),0,uVar3);
  }
LAB_00a51630:
  *(undefined4 *)((int)this + 0x38) = DAT_0105bec0;
  return local_35;
}


//// FUNCTION FUN_00a51690 @ 00a51690 ////

void FUN_00a51690(void)

{
                    /* WARNING: Subroutine does not return */
  _free(DAT_010bb4f0);
}


//// FUNCTION FUN_00a516b0 @ 00a516b0 ////

void FUN_00a516b0(void)

{
                    /* WARNING: Subroutine does not return */
  _free(DAT_010bb4f0);
}


//// FUNCTION FUN_00a516e0 @ 00a516e0 ////

void FUN_00a516e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar3 = 0;
  if (0 < DAT_010bb4fc) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + DAT_010bb4f0;
      uVar5 = FUN_00acd42c();
      iVar2 = (int)uVar5;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x3ff < iVar2) {
        iVar2 = 0x3ff;
      }
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(DAT_010bb4ec + iVar2 * 4);
      *(int *)(DAT_010bb4ec + iVar2 * 4) = iVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < DAT_010bb4fc);
  }
  return;
}


//// FUNCTION FUN_00a51770 @ 00a51770 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a51770(void)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb0cb;
  local_c = ExceptionList;
  if (DAT_010bb4f0 == (void *)0x0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x3000);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar1,0xc,0x400,&LAB_00a51680);
    }
    local_4 = 0xffffffff;
    DAT_010bb500 = 0x400;
    DAT_010bb4f0 = pvVar1;
    DAT_010bb4ec = operator_new(0x1000);
  }
  _DAT_010bb4f4 = 0x7f7fffff;
  _DAT_010bb4f8 = 0xff7fffff;
  DAT_010bb4fc = 0;
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + (int)DAT_010bb4ec) = 0;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x1000);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a51840 @ 00a51840 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a51840(undefined4 param_1,float param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb0eb;
  local_c = ExceptionList;
  if (DAT_010bb4fc == DAT_010bb500) {
    iVar3 = DAT_010bb500 + 0x200;
    ExceptionList = &local_c;
    puVar1 = operator_new(iVar3 * 0xc);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00401380(puVar1,0xc,iVar3,&LAB_00a51680);
    }
    puVar4 = DAT_010bb4f0;
    for (uVar2 = DAT_010bb4fc * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
                    /* WARNING: Subroutine does not return */
    _free(DAT_010bb4f0);
  }
  puVar1 = DAT_010bb4f0 + DAT_010bb4fc * 3;
  puVar1[1] = param_2;
  *puVar1 = param_1;
  if (DAT_010bb4fc == 0) {
    _DAT_010bb4f8 = param_2;
  }
  else if (_DAT_010bb4f4 <= param_2) {
    if (_DAT_010bb4f8 < param_2) {
      _DAT_010bb4f8 = param_2;
    }
    goto LAB_00a5193a;
  }
  _DAT_010bb4f4 = param_2;
LAB_00a5193a:
  DAT_010bb4fc = DAT_010bb4fc + 1;
  return;
}


//// FUNCTION FUN_00a519d0 @ 00a519d0 ////

void __thiscall FUN_00a519d0(void *this,int param_1)

{
  if (*(void **)this != (void *)0x0) {
    FUN_0099b400(*(void **)this);
    *(undefined4 *)this = 0;
  }
  *(int *)this = param_1;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  return;
}


//// FUNCTION FUN_00a51a00 @ 00a51a00 ////

void __fastcall FUN_00a51a00(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  
  iVar4 = DAT_010bb504;
  if (DAT_010bb504 != param_1) {
    do {
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar3 + 0x24);
    } while (iVar4 != param_1);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
      goto LAB_00a51a2e;
    }
  }
  DAT_010bb504 = *(int *)(iVar4 + 0x24);
LAB_00a51a2e:
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = puVar1[1] | 1;
    if ((void *)*puVar1 != (void *)0x0) {
      FUN_0099b400((void *)*puVar1);
      *puVar1 = 0;
    }
    FUN_0099f2f0((int)puVar1);
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    FUN_0099b400(*(void **)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


//// FUNCTION FUN_00a51ab0 @ 00a51ab0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a51ab0(int param_1)

{
  float local_8;
  float local_4;
  
  if ((DAT_0105bec5 == '\0') && (*(void **)(param_1 + 0x2c) != (void *)0x0)) {
    local_8 = (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x1c)) * _DAT_0105be84 +
              *(float *)(param_1 + 0x1c);
    if (local_8 <= 0.001) {
      local_8 = 0.001;
    }
    local_4 = local_8;
    FUN_0099f770(*(void **)(param_1 + 0x2c),(float *)(param_1 + 8),&local_8,
                 *(float *)(param_1 + 0x18));
  }
  return;
}


//// FUNCTION FUN_00a51d00 @ 00a51d00 ////

undefined4 * __thiscall FUN_00a51d00(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  
  *(undefined4 *)((int)this + 0x30) = param_1[0xe];
  *(int *)((int)this + 4) = param_1[0xd] + 0x28;
  *(undefined4 *)((int)this + 8) = *param_1;
  *(undefined4 *)((int)this + 0xc) = param_1[1];
  *(undefined4 *)((int)this + 0x10) = param_1[2];
  *(undefined4 *)((int)this + 0x14) = param_1[3];
  *(undefined4 *)((int)this + 0x18) = param_1[4];
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x34) = param_1[0xf];
  *(uint *)((int)this + 0x38) =
       *(uint *)((int)this + 0x38) ^ (param_1[0x10] ^ *(uint *)((int)this + 0x38)) & 1;
  if (*(int *)((int)this + 0x34) != 0) {
    InterlockedIncrement((LONG *)(*(int *)((int)this + 0x34) + 0x10));
  }
  if (((*(uint *)((int)this + 0x38) & 1) != 0) && (*(int *)((int)this + 0x34) == 0)) {
    *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) & 0xfffffffe;
  }
  if ((*(byte *)((int)this + 0x38) & 1) != 0) {
    *(undefined4 *)((int)this + 4) = 0x154;
  }
  if (*(char *)(param_1 + 5) != '\0') {
    pvVar2 = FUN_0099bb50((char *)(param_1 + 5),0,0,0,'\0');
    *(void **)((int)this + 0x28) = pvVar2;
  }
  *(void **)((int)this + 0x24) = DAT_010bb504;
  DAT_010bb504 = this;
  *(undefined4 *)this = 0;
  piVar3 = FUN_0099f680('\0',(void *)0x0);
  *(int **)((int)this + 0x2c) = piVar3;
  if (piVar3 != (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x28);
    if ((void *)*piVar3 != (void *)0x0) {
      FUN_0099b400((void *)*piVar3);
      *piVar3 = 0;
    }
    *piVar3 = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
    }
    return this;
  }
  FUN_00a51a00((int)this);
                    /* WARNING: Subroutine does not return */
  _free(this);
}


//// FUNCTION FUN_00a51e20 @ 00a51e20 ////

void __fastcall FUN_00a51e20(int *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float local_8;
  float local_4;
  
  if (param_1[0xb] != 0) {
    puVar1 = (uint *)(param_1[0xb] + 4);
    *puVar1 = *puVar1 | 4;
  }
  iVar4 = param_1[1];
  param_1[7] = param_1[8];
  iVar2 = *param_1;
  if (iVar4 < iVar2) {
    FUN_00a51a00((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  param_1[8] = param_1[5];
  if (iVar2 < 0x14) {
    iVar4 = -iVar2;
  }
  else {
    if (iVar2 <= iVar4 + -0x14) goto LAB_00a51e98;
    iVar4 = iVar2 - iVar4;
  }
  param_1[8] = (int)((1.0 - (float)(iVar4 + 0x14) * 0.05) * (float)param_1[5]);
LAB_00a51e98:
  *param_1 = iVar2 + 1;
  local_8 = (float)param_1[7];
  local_4 = local_8;
  FUN_0099f770((void *)param_1[0xb],(float *)(param_1 + 2),&local_8,(float)param_1[6]);
  if ((param_1[0xe] & 1U) != 0) {
    puVar3 = (undefined4 *)param_1[0xd];
    if (puVar3[4] == 1) {
      if (puVar3 != (undefined4 *)0x0) {
        FUN_0040a5b0(puVar3);
        param_1[0xd] = 0;
      }
      param_1[0xe] = param_1[0xe] & 0xfffffffe;
      *param_1 = param_1[1] + 1;
      return;
    }
    if ((puVar3[0x1e] != 0) && (1.0 < *(float *)(puVar3[0x1e] + 0x3c))) {
      *param_1 = param_1[1] + -0x14;
      param_1[0xe] = param_1[0xe] & 0xfffffffe;
    }
  }
  return;
}


//// FUNCTION FUN_00a520e0 @ 00a520e0 ////

void __cdecl FUN_00a520e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a52120 @ 00a52120 ////

void __cdecl FUN_00a52120(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a52540 @ 00a52540 ////

void __cdecl FUN_00a52540(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a52570 @ 00a52570 ////

void __cdecl FUN_00a52570(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a526e0 @ 00a526e0 ////

void __fastcall FUN_00a526e0(int param_1)

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


//// FUNCTION FUN_00a52760 @ 00a52760 ////

void * FUN_00a52760(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a52790 @ 00a52790 ////

void * FUN_00a52790(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a527e0 @ 00a527e0 ////

void __fastcall FUN_00a527e0(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  LONG LVar3;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  }
  local_8 = 0;
  if (0 < local_c) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + local_8 * 4) + 4);
      (**(code **)(*piVar1 + 8))();
      piVar1[0x27] = piVar1[0x27] & 0x7fffffff;
      if (piVar1[0x1e] != 0) {
        *(undefined4 *)(piVar1[0x1e] + 0x84) = 0;
      }
      LVar3 = InterlockedDecrement(piVar1 + 4);
      uVar2 = DAT_0105b588;
      if (LVar3 == 0) {
        DAT_0105b588 = 1;
        (**(code **)*piVar1)(1);
      }
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x14) + local_8 * 4) + 4);
      DAT_0105b588 = uVar2;
      (**(code **)(*piVar1 + 8))();
      piVar1[0x27] = piVar1[0x27] & 0x7fffffff;
      if (piVar1[0x1e] != 0) {
        *(undefined4 *)(piVar1[0x1e] + 0x84) = 0;
      }
      LVar3 = InterlockedDecrement(piVar1 + 4);
      uVar2 = DAT_0105b588;
      if (LVar3 == 0) {
        DAT_0105b588 = 1;
        (**(code **)*piVar1)(1);
      }
      local_8 = local_8 + 1;
      DAT_0105b588 = uVar2;
    } while (local_8 < local_c);
  }
  if (local_4 != local_c) {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + -4 + local_4 * 4) + 4);
    (**(code **)(*piVar1 + 8))();
    piVar1[0x27] = piVar1[0x27] & 0x7fffffff;
    if (piVar1[0x1e] != 0) {
      *(undefined4 *)(piVar1[0x1e] + 0x84) = 0;
    }
    LVar3 = InterlockedDecrement(piVar1 + 4);
    uVar2 = DAT_0105b588;
    DAT_0105b588 = uVar2;
    if (LVar3 == 0) {
      DAT_0105b588 = 1;
      (**(code **)*piVar1)(1);
      DAT_0105b588 = uVar2;
    }
  }
  return;
}


//// FUNCTION FUN_00a52970 @ 00a52970 ////

void __fastcall FUN_00a52970(int param_1)

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


//// FUNCTION FUN_00a529d0 @ 00a529d0 ////

void __fastcall FUN_00a529d0(int param_1)

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


//// FUNCTION FUN_00a52a00 @ 00a52a00 ////

void __fastcall FUN_00a52a00(int param_1)

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


//// FUNCTION FUN_00a52a30 @ 00a52a30 ////

undefined4 * FUN_00a52a30(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a52a60 @ 00a52a60 ////

undefined4 * FUN_00a52a60(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a52a90 @ 00a52a90 ////

void __cdecl FUN_00a52a90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00a52ac0 @ 00a52ac0 ////

void __fastcall FUN_00a52ac0(int param_1)

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


//// FUNCTION FUN_00a52af0 @ 00a52af0 ////

void __fastcall FUN_00a52af0(int param_1)

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


//// FUNCTION FUN_00a52b50 @ 00a52b50 ////

/* WARNING: Removing unreachable block (ram,0x00a52b8e) */

void __fastcall FUN_00a52b50(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(void **)(param_1 + 0x14) == (void *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(void **)(param_1 + 4) == (void *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x14));
}


//// FUNCTION FUN_00a52bc0 @ 00a52bc0 ////

void * __thiscall FUN_00a52bc0(void *this,byte param_1)

{
  FUN_00a52b50((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a52be0 @ 00a52be0 ////

void __cdecl
FUN_00a52be0(undefined4 param_1,void *param_2,int param_3,undefined4 param_4,undefined4 *param_5,
            int param_6)

{
  undefined4 *puVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb128;
  local_c = ExceptionList;
  iVar4 = 0;
  local_4 = 0;
  if (param_2 == (void *)0x0) {
    return;
  }
  iVar3 = param_3 - (int)param_2 >> 2;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (iVar3 != 0) {
    do {
      puVar1 = *(undefined4 **)((int)param_2 + iVar4 * 4);
      FUN_0097ff00(puVar1[1]);
      FUN_00981500((void *)puVar1[1],param_5,param_6,(void *)*puVar1);
      if (*(int *)(puVar1[1] + 0x78) != 0) {
        *(undefined4 *)(*(int *)(puVar1[1] + 0x78) + 0x10) = 0;
      }
      iVar4 = iVar4 + 1;
      param_5 = param_5 + 0x30c;
      ppvVar2 = ExceptionList;
    } while (iVar4 != iVar3);
  }
  ExceptionList = ppvVar2;
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}


//// FUNCTION FUN_00a52ca0 @ 00a52ca0 ////

void FUN_00a52ca0(void)

{
  void *_Dst;
  void *pvVar1;
  int iVar2;
  
  if (DAT_010bb544 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_010bb548 - (int)DAT_010bb544 >> 2;
  }
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    pvVar1 = *(void **)((int)DAT_010bb544 + iVar2 * 4);
    if (pvVar1 != (void *)0x0) {
      FUN_00a52b50((int)pvVar1);
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    *(undefined4 *)((int)DAT_010bb544 + iVar2 * 4) = 0;
    _Dst = (void *)((int)DAT_010bb544 + iVar2 * 4);
    pvVar1 = (void *)((int)_Dst + 4);
    _memmove(_Dst,pvVar1,(DAT_010bb548 - (int)pvVar1 >> 2) << 2);
    DAT_010bb548 = DAT_010bb548 + -4;
  }
  if (DAT_010bb544 == (void *)0x0) {
    DAT_010bb544 = (void *)0x0;
    DAT_010bb548 = 0;
    DAT_010bb54c = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_010bb544);
}


//// FUNCTION FUN_00a52d60 @ 00a52d60 ////

void FUN_00a52d60(void)

{
  if (DAT_010bb53c != '\0') {
    SetEvent(DAT_010bb530);
    WaitForSingleObject(DAT_010bb52c,0xffffffff);
    CloseHandle(DAT_010bb52c);
    DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb50c);
    CloseHandle(DAT_010bb528);
    CloseHandle(DAT_010bb530);
    CloseHandle(DAT_010bb524);
    FUN_00a52ca0();
                    /* WARNING: Subroutine does not return */
    _free(DAT_010bb538);
  }
  return;
}


//// FUNCTION FUN_00a52e00 @ 00a52e00 ////

void FUN_00a52e00(void)

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
  puStack_8 = &LAB_00cfb148;
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


//// FUNCTION FUN_00a52e70 @ 00a52e70 ////

void FUN_00a52e70(void)

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
  puStack_8 = &LAB_00cfb168;
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


//// FUNCTION FUN_00a52f80 @ 00a52f80 ////

void __thiscall FUN_00a52f80(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a52e00();
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
      _Dst = FUN_00a52a30((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a52760(param_1,iVar5,param_1 + param_2);
      FUN_00a52a30(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a520e0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a52760(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a52540(param_1,(int)pvVar3,iVar5);
    FUN_00a520e0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a53160 @ 00a53160 ////

void __thiscall FUN_00a53160(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a52e70();
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
      _Dst = FUN_00a52a60((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a52790(param_1,iVar5,param_1 + param_2);
      FUN_00a52a60(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a52120(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a52790(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a52570(param_1,(int)pvVar3,iVar5);
    FUN_00a52120(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a53350 @ 00a53350 ////

int __thiscall FUN_00a53350(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfb180;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x3fffffff < uVar1) {
      uVar1 = FUN_00a52e00();
    }
    puVar2 = operator_new(uVar1 * 4);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1;
    local_8 = 0;
    uVar3 = FUN_00a52a90(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),puVar2);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_00a534c0 @ 00a534c0 ////

int __fastcall FUN_00a534c0(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvVar1 = ExceptionList;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x24);
  iVar3 = 0x10;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  ExceptionList = pvVar1;
  return param_1;
}


//// FUNCTION FUN_00a53550 @ 00a53550 ////

void FUN_00a53550(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_stack_ffffffd8;
  void *in_stack_ffffffdc;
  int in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  undefined4 *puVar3;
  int iVar4;
  
  DAT_010bb534 = 0;
  iVar2 = 0;
  while( true ) {
    if (DAT_010bb544 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_010bb548 - DAT_010bb544 >> 2;
    }
    if (iVar1 <= iVar2) break;
    iVar1 = *(int *)(DAT_010bb544 + iVar2 * 4);
    DAT_01050c90 = 1;
    if ((*(int *)(iVar1 + 0x14) != 0) && (*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2 != 0)
       ) {
      DAT_010bb534 = iVar1 + 0x10;
      ResetEvent(DAT_010bb524);
      SetEvent(DAT_010bb528);
    }
    puVar3 = DAT_010bb538;
    iVar4 = DAT_0105be8c;
    FUN_00a53350(&stack0xffffffd8,iVar1);
    FUN_00a52be0(in_stack_ffffffd8,in_stack_ffffffdc,in_stack_ffffffe0,in_stack_ffffffe4,puVar3,
                 iVar4);
    if ((*(int *)(iVar1 + 0x14) != 0) && (*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2 != 0)
       ) {
      in_stack_ffffffe4 = 0xa53605;
      WaitForSingleObject(DAT_010bb524,0xffffffff);
    }
    DAT_01050c90 = 0;
    ResetEvent(DAT_010bb528);
    FUN_00a527e0(iVar1);
    iVar2 = iVar2 + 1;
  }
  ResetEvent(DAT_010bb528);
  FUN_00a52ca0();
  return;
}


//// FUNCTION FUN_00a53640 @ 00a53640 ////

undefined4 FUN_00a53640(void)

{
  DWORD DVar1;
  undefined4 *puVar2;
  undefined4 in_stack_ffffffd4;
  void *pvVar3;
  int iVar4;
  HANDLE *lpHandles;
  int iVar5;
  HANDLE local_8;
  undefined4 local_4;
  
  local_8 = DAT_010bb530;
  local_4 = DAT_010bb528;
  while( true ) {
    lpHandles = &local_8;
    iVar4 = 2;
    pvVar3 = (void *)0xa53671;
    DVar1 = WaitForMultipleObjects(2,lpHandles,0,0xffffffff);
    if (DVar1 == 0) break;
    if (DVar1 == 1) {
      if (DAT_010bb534 != 0) {
        puVar2 = (undefined4 *)(DAT_010bb538 + 0x6180);
        iVar5 = DAT_010bb508;
        FUN_00a53350(&stack0xffffffd4,DAT_010bb534);
        FUN_00a52be0(in_stack_ffffffd4,pvVar3,iVar4,lpHandles,puVar2,iVar5);
        DAT_010bb534 = 0;
      }
      SetEvent(DAT_010bb524);
    }
  }
  return 0;
}


//// FUNCTION FUN_00a536d0 @ 00a536d0 ////

void __thiscall FUN_00a536d0(void *this,undefined4 *param_1)

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
  FUN_00a52f80(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00a53770 @ 00a53770 ////

void __fastcall FUN_00a53770(uint3 param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb1c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00aa9e90(param_1);
  DAT_010bb53c = (char)uVar1;
  if (DAT_010bb53c != '\0') {
    pvVar2 = operator_new(0xc300);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar2,0x30,0x410,FUN_0040b670);
    }
    local_4 = 0xffffffff;
    DAT_010bb538 = pvVar2;
    if (DAT_010bb544 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb544);
    }
    DAT_010bb544 = (void *)0x0;
    DAT_010bb548 = 0;
    DAT_010bb54c = 0;
    puVar3 = operator_new(0x120008);
    local_4 = 1;
    if (puVar3 == (undefined4 *)0x0) {
      DAT_010bb508 = (undefined4 *)0x0;
    }
    else {
      DAT_010bb508 = FUN_00a58000(puVar3);
    }
    DAT_010bb528 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    DAT_010bb524 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    DAT_010bb530 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    DAT_010bb52c = FUN_00acfa09((LPSECURITY_ATTRIBUTES)0x0,0,0xa53640,DAT_010bb530,0,(LPDWORD)0x0);
    InitializeCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb50c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a53890 @ 00a53890 ////

int FUN_00a53890(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb1db;
  local_c = ExceptionList;
  if ((DAT_010bb544 != 0) && (iVar4 = (int)DAT_010bb548 - DAT_010bb544 >> 2, iVar4 != 0)) {
    iVar1 = *(int *)(DAT_010bb544 + -4 + iVar4 * 4);
    iVar2 = *(int *)(iVar1 + 0x14);
    if ((iVar2 == 0) || (*(int *)(iVar1 + 0x18) - iVar2 >> 2 != 8)) {
      return *(int *)(DAT_010bb544 + -4 + iVar4 * 4);
    }
  }
  ExceptionList = &local_c;
  local_10 = operator_new(0xa4);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)FUN_00a534c0((int)local_10);
  }
  local_4 = 0xffffffff;
  if ((DAT_010bb544 != 0) &&
     ((uint)((int)DAT_010bb548 - DAT_010bb544 >> 2) < (uint)(DAT_010bb54c - DAT_010bb544 >> 2))) {
    *DAT_010bb548 = (int)pvVar3;
    DAT_010bb548 = DAT_010bb548 + 1;
    ExceptionList = local_c;
    return (int)pvVar3;
  }
  local_10 = pvVar3;
  FUN_00a53160(&DAT_010bb540,DAT_010bb548,1,&local_10);
  ExceptionList = local_c;
  return (int)pvVar3;
}


//// FUNCTION FUN_00a53990 @ 00a53990 ////

void __thiscall FUN_00a53990(void *this,int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
    }
    if (*(int *)((int)this + 0x14) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
    }
    if (iVar4 == iVar3) {
      FUN_00a536d0(this,&param_1);
      iVar4 = *piVar2;
      if (iVar4 != 0) {
        puVar1 = (uint *)(iVar4 + 4);
        *puVar1 = *puVar1 & 0xfffffff7;
        return;
      }
    }
    else {
      FUN_00a536d0((void *)((int)this + 0x10),&param_1);
      iVar4 = *piVar2;
      if (iVar4 != 0) {
        puVar1 = (uint *)(iVar4 + 4);
        *puVar1 = *puVar1 | 8;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a53a00 @ 00a53a00 ////

void __cdecl FUN_00a53a00(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  void *this;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != (int *)0x0) {
    piVar4 = FUN_0099f680('\x01',param_1);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a53a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
    this = (void *)FUN_00a53890();
    if (this != (void *)0x0) {
      InterlockedIncrement(param_1 + 4);
      if (param_1[0x1e] != 0) {
        *(undefined4 *)(param_1[0x1e] + 0x10) = *(undefined4 *)((int)this + 0x20);
      }
      piVar1 = (int *)((int)this + *(int *)((int)this + 0x20) * 8 + 0x24);
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
      piVar1[1] = (int)param_1;
      *piVar1 = (int)piVar4;
      if (((int *)param_1[0x1e] != (int *)0x0) && (iVar2 = *(int *)param_1[0x1e], iVar2 != 0)) {
        bVar3 = *(byte *)(iVar2 + 0x33);
        uVar5 = (uint)bVar3;
        iVar8 = 0;
        if (uVar5 != 0) {
          do {
            if (bVar3 == 0) {
              puVar6 = (uint *)0x0;
            }
            else {
              iVar7 = iVar8;
              if (iVar8 < 0) {
                iVar7 = 0;
              }
              if ((int)uVar5 <= iVar7) {
                iVar7 = uVar5 - 1;
              }
              puVar6 = *(uint **)(iVar2 + 0x6c + iVar7 * 4);
            }
            Anim_ExpandSetPoses(puVar6);
            bVar3 = *(byte *)(iVar2 + 0x33);
            uVar5 = (uint)bVar3;
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)uVar5);
        }
      }
      FUN_00a53990(this,piVar1);
    }
  }
  return;
}


//// FUNCTION FUN_00a53ac0 @ 00a53ac0 ////

void __thiscall FUN_00a53ac0(void *this,int *param_1)

{
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  else if (*(int *)this <= *param_1) {
    *param_1 = *(int *)this + -1;
  }
  if (-1 < param_1[1]) {
    if (*(int *)this <= param_1[1]) {
      param_1[1] = *(int *)this + -1;
    }
    return;
  }
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00a53b00 @ 00a53b00 ////

void __thiscall FUN_00a53b00(void *this,int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = param_1[1];
  iVar1 = param_2[1];
  piVar5 = param_2;
  if ((iVar2 < iVar1) || ((iVar2 == iVar1 && (*param_2 <= *param_1)))) {
    piVar3 = param_1;
    if ((param_3[1] <= iVar2) && ((iVar2 != param_3[1] || (*param_1 < *param_3))))
    goto LAB_00a53b35;
  }
  else {
    piVar3 = param_2;
    piVar5 = param_1;
    if ((param_3[1] <= iVar1) && ((iVar1 != param_3[1] || (*param_2 < *param_3)))) {
LAB_00a53b35:
      piVar3 = param_3;
      param_3 = param_1;
      piVar5 = param_2;
    }
  }
  iVar2 = *piVar5;
  if (iVar2 <= *param_3) {
    piVar4 = param_3;
    if (iVar2 != *param_3) goto LAB_00a53b7d;
    if (iVar2 < *piVar3) {
      if (piVar5[1] <= param_3[1]) goto LAB_00a53b7d;
    }
    else if (param_3[1] <= piVar5[1]) goto LAB_00a53b7d;
  }
  piVar4 = piVar5;
  piVar5 = param_3;
LAB_00a53b7d:
  *(int *)((int)this + 0x1c) = piVar3[1];
  iVar2 = piVar5[1];
  if (piVar5[1] <= piVar4[1]) {
    iVar2 = piVar4[1];
  }
  *(int *)((int)this + 0x20) = iVar2;
  (**(code **)((int)this + 0x2c))(piVar3,piVar5);
  (**(code **)((int)this + 0x2c))(piVar5,piVar4);
  (**(code **)((int)this + 0x2c))(piVar4,piVar3);
  (**(code **)((int)this + 0x30))();
  return;
}


//// FUNCTION FUN_00a53bc0 @ 00a53bc0 ////

void __fastcall FUN_00a53bc0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_00a53bf0 @ 00a53bf0 ////

void __fastcall FUN_00a53bf0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int local_10;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  piVar4 = (int *)(*(int *)(param_1 + 8) + iVar5 * 0x10);
  piVar3 = (int *)(*(int *)(param_1 + 0xc) + iVar5 * 0x10);
  iVar7 = (*(int *)(param_1 + 0x20) - iVar5) + 1;
  iVar5 = *(int *)(param_1 + 0x10) * iVar5 + *(int *)(param_1 + 0x14);
  do {
    if (iVar7 == 0) {
      return;
    }
    iVar2 = piVar4[1];
    local_10 = (piVar3[1] - iVar2) + 1;
    if (local_10 < 0) {
      iVar8 = *piVar3;
      local_10 = (iVar2 - piVar3[1]) + 1;
      if (local_10 != 0) {
        iVar1 = *piVar4;
        iVar2 = piVar3[1];
LAB_00a53c59:
        pbVar6 = (byte *)(iVar5 + iVar2);
        iVar2 = (iVar1 - iVar8) / local_10;
        do {
          if (iVar8 >> 0x10 < (int)(uint)*pbVar6) {
            *pbVar6 = (byte)((uint)iVar8 >> 0x10);
          }
          pbVar6 = pbVar6 + 1;
          iVar8 = iVar8 + iVar2;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
    else {
      iVar8 = *piVar4;
      if (local_10 != 0) {
        iVar1 = *piVar3;
        goto LAB_00a53c59;
      }
    }
    piVar4 = piVar4 + 4;
    iVar5 = iVar5 + *(int *)(param_1 + 0x10);
    piVar3 = piVar3 + 4;
    iVar7 = iVar7 + -1;
  } while( true );
}


//// FUNCTION FUN_00a53cb0 @ 00a53cb0 ////

void __fastcall FUN_00a53cb0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  piVar3 = (int *)(*(int *)(param_1 + 8) + iVar4 * 0x10);
  piVar6 = (int *)(*(int *)(param_1 + 0xc) + iVar4 * 0x10);
  iVar8 = (*(int *)(param_1 + 0x20) - iVar4) + 1;
  iVar4 = *(int *)(param_1 + 0x10) * iVar4 + *(int *)(param_1 + 0x14);
  do {
    if (iVar8 == 0) {
      return;
    }
    iVar1 = piVar3[1];
    local_14 = (piVar6[1] - iVar1) + 1;
    if (local_14 < 0) {
      iVar9 = *piVar6;
      local_14 = (iVar1 - piVar6[1]) + 1;
      local_28 = piVar6[2];
      local_24 = piVar6[3];
      if (local_14 != 0) {
        local_20 = (*piVar3 - iVar9) / local_14;
        local_1c = (piVar3[2] - local_28) / local_14;
        iVar5 = piVar3[3];
        iVar1 = piVar6[1];
LAB_00a53d79:
        pbVar7 = (byte *)(iVar4 + iVar1);
        iVar1 = (iVar5 - local_24) / local_14;
        do {
          iVar5 = local_28 >> 0x10;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (0x3f < iVar5) {
            iVar5 = 0x3f;
          }
          iVar2 = local_24 >> 0x10;
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          else if (0x3f < iVar2) {
            iVar2 = 0x3f;
          }
          iVar5 = 0xff - (int)((0xff - (iVar9 >> 0x10)) *
                              (uint)*(byte *)(iVar2 * 0x40 + *(int *)(param_1 + 0x24) + iVar5)) /
                         0xff;
          if (iVar5 < (int)(uint)*pbVar7) {
            *pbVar7 = (byte)iVar5;
          }
          iVar9 = iVar9 + local_20;
          local_28 = local_28 + local_1c;
          local_24 = local_24 + iVar1;
          pbVar7 = pbVar7 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
    else {
      iVar9 = *piVar3;
      local_28 = piVar3[2];
      local_24 = piVar3[3];
      if (local_14 != 0) {
        local_20 = (*piVar6 - iVar9) / local_14;
        local_1c = (piVar6[2] - local_28) / local_14;
        iVar5 = piVar6[3];
        goto LAB_00a53d79;
      }
    }
    iVar4 = iVar4 + *(int *)(param_1 + 0x10);
    piVar3 = piVar3 + 4;
    piVar6 = piVar6 + 4;
    iVar8 = iVar8 + -1;
  } while( true );
}


//// FUNCTION FUN_00a53e70 @ 00a53e70 ////

void __fastcall FUN_00a53e70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = *(int *)(param_1 + 0x1c);
  piVar5 = (int *)(*(int *)(param_1 + 8) + iVar6 * 0x10);
  piVar7 = (int *)(*(int *)(param_1 + 0xc) + iVar6 * 0x10);
  iVar1 = (*(int *)(param_1 + 0x20) - iVar6) + 1;
  iVar6 = *(int *)(param_1 + 0x10) * iVar6 + *(int *)(param_1 + 0x14);
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar3 = piVar5[1];
    iVar8 = (piVar7[1] - iVar3) + 1;
    if (iVar8 < 0) {
      iVar9 = *piVar7;
      iVar8 = (iVar3 - piVar7[1]) + 1;
      if (iVar8 != 0) {
        iVar2 = *piVar5;
        iVar3 = piVar7[1];
LAB_00a53edb:
        puVar4 = (undefined1 *)(iVar3 + iVar6);
        iVar3 = (iVar2 - iVar9) / iVar8;
        do {
          *puVar4 = (char)((uint)iVar9 >> 0x10);
          puVar4 = puVar4 + 1;
          iVar9 = iVar9 + iVar3;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      iVar9 = *piVar5;
      if (iVar8 != 0) {
        iVar2 = *piVar7;
        goto LAB_00a53edb;
      }
    }
    piVar5 = piVar5 + 4;
    iVar6 = iVar6 + *(int *)(param_1 + 0x10);
    piVar7 = piVar7 + 4;
    iVar1 = iVar1 + -1;
  } while( true );
}


//// FUNCTION FUN_00a54110 @ 00a54110 ////

void __thiscall FUN_00a54110(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_1 == *(int *)this) && (param_2 == *(int *)((int)this + 4))) {
    *(int *)((int)this + 0x14) = param_4;
    *(int *)((int)this + 0x10) = param_3;
    *(int *)((int)this + 0x18) = param_5;
    return;
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_2;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 8));
}


//// FUNCTION FUN_00a541e0 @ 00a541e0 ////

void __thiscall FUN_00a541e0(void *this,int param_1,float param_2,ushort param_3,ushort param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = (uint)param_4;
  iVar7 = *(int *)((int)this + 0x18) + 8;
  piVar1 = (int *)(iVar7 + ((uint)param_2 & 0xffff) * 0x18);
  piVar2 = (int *)(iVar7 + (uint)param_3 * 0x18);
  piVar3 = (int *)(iVar7 + uVar6 * 0x18);
  switch(param_1) {
  case 1:
    param_2 = (float)*piVar1;
    fVar4 = (float)*piVar2;
    break;
  case 2:
    param_2 = (float)(*(int *)this - *piVar1);
    fVar4 = (float)(*(int *)this - *piVar2);
    break;
  default:
    fVar4 = param_2;
    break;
  case 4:
    param_2 = (float)piVar1[1];
    fVar4 = (float)piVar2[1];
    break;
  case 8:
    param_2 = (float)(*(int *)this - piVar1[1]);
    fVar4 = (float)(*(int *)this - piVar2[1]);
  }
  fVar4 = param_2 / (param_2 - fVar4);
  fVar5 = 1.0 - fVar4;
  *piVar3 = (int)ROUND((float)*piVar2 * fVar4 + (float)*piVar1 * fVar5);
  piVar3[1] = (int)ROUND((float)piVar2[1] * fVar4 + (float)piVar1[1] * fVar5);
  piVar3[3] = (int)ROUND((float)piVar2[3] * fVar4 + (float)piVar1[3] * fVar5);
  if ((*(byte *)((int)this + 0x28) & 1) != 0) {
    piVar3[4] = (int)ROUND((float)piVar2[4] * fVar4 + (float)piVar1[4] * fVar5);
    piVar3[5] = (int)ROUND((float)piVar2[5] * fVar4 + (float)piVar1[5] * fVar5);
  }
  uVar8 = 0;
  if (param_1 != 2) {
    if (param_1 != 4) {
      if (param_1 != 8) {
        *(undefined4 *)(*(int *)((int)this + 0x18) + 0xc0008 + uVar6 * 4) = 0;
        return;
      }
      if (piVar3[1] < 0) {
        uVar8 = 4;
      }
    }
    if (*(int *)this <= *piVar3) {
      uVar8 = uVar8 | 2;
    }
  }
  if (*piVar3 < 0) {
    uVar8 = uVar8 | 1;
  }
  *(uint *)(*(int *)((int)this + 0x18) + 0xc0008 + uVar6 * 4) = uVar8;
  return;
}


//// FUNCTION FUN_00a54740 @ 00a54740 ////

void __thiscall FUN_00a54740(void *this,int param_1)

{
  if (param_1 == 1) {
    *(code **)((int)this + 0x30) = FUN_00a53bf0;
    *(undefined1 **)((int)this + 0x2c) = &LAB_00a53fd0;
    return;
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      *(code **)((int)this + 0x30) = FUN_00a53e70;
      *(undefined1 **)((int)this + 0x2c) = &LAB_00a53fd0;
      return;
    }
    *(undefined1 **)((int)this + 0x2c) = &LAB_00a54600;
    *(undefined1 **)((int)this + 0x30) = &LAB_00a53f20;
    return;
  }
  *(undefined1 **)((int)this + 0x2c) = &LAB_00a543b0;
  *(code **)((int)this + 0x30) = FUN_00a53cb0;
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) | 1;
  return;
}


//// FUNCTION FUN_00a547a0 @ 00a547a0 ////

undefined4 * __fastcall FUN_00a547a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0xb] = &LAB_00a53fd0;
  param_1[0xc] = FUN_00a53bf0;
  return param_1;
}


//// FUNCTION FUN_00a547c0 @ 00a547c0 ////

void __thiscall FUN_00a547c0(void *this,float param_1,int *param_2,float param_3,float param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  ushort uVar10;
  ushort uVar11;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  int *local_c;
  int *local_8;
  uint local_4;
  
  piVar1 = (int *)param_1;
  piVar3 = (int *)param_3;
  fVar7 = param_4;
  while (fVar7 != 0.0) {
    local_10 = *(void **)((int)this + 0x18);
    local_4 = *(uint *)((int)local_10 + ((uint)piVar1 & 0xffff) * 4 + 0xc0008);
    fVar9 = (float)((int)fVar7 >> 1);
    uVar10 = (ushort)piVar3;
    if (((uint)fVar7 & local_4) == 0) {
      uVar4 = *(uint *)((int)local_10 + ((uint)param_2 & 0xffff) * 4 + 0xc0008);
      if (((uint)fVar7 & uVar4) == 0) {
        uVar5 = *(uint *)((int)local_10 + ((uint)piVar3 & 0xffff) * 4 + 0xc0008);
        if (((uint)fVar7 & uVar5) == 0) {
          fVar7 = fVar9;
          if ((uVar5 == 0 && uVar4 == 0) && local_4 == 0) {
            iVar8 = *(int *)((int)this + 0x18) + 8;
            piVar1 = (int *)(iVar8 + ((uint)piVar1 & 0xffff) * 0x18);
            FUN_00a53ac0(this,piVar1);
            param_2 = (int *)(iVar8 + ((uint)param_2 & 0xffff) * 0x18);
            FUN_00a53ac0(this,param_2);
            piVar3 = (int *)(iVar8 + ((uint)piVar3 & 0xffff) * 0x18);
            FUN_00a53ac0(this,piVar3);
            FUN_00a53b00(this,piVar1,param_2,piVar3);
            return;
          }
        }
        else {
          FUN_009e68d0(local_10,(undefined2 *)&local_c,(undefined2 *)&local_8);
          FUN_00a541e0(this,(int)fVar7,(float)piVar1,uVar10,(ushort)local_c);
          piVar3 = param_2;
          FUN_00a541e0(this,(int)fVar7,(float)param_2,uVar10,(ushort)local_8);
          piVar2 = local_c;
          FUN_00a547c0(this,(float)local_c,piVar1,(float)piVar3,fVar9);
          piVar1 = piVar2;
          piVar3 = local_8;
          fVar7 = fVar9;
        }
      }
      else {
        FUN_009e68d0(local_10,(undefined2 *)&param_3,(undefined2 *)&local_1c);
        if ((*(uint *)((int)local_10 + ((uint)piVar3 & 0xffff) * 4 + 0xc0008) & (uint)fVar7) == 0) {
          FUN_00a541e0(this,(int)fVar7,(float)piVar1,(ushort)param_2,SUB42(param_3,0));
          FUN_00a541e0(this,(int)fVar7,(float)piVar3,(ushort)param_2,(ushort)local_1c);
          FUN_00a547c0(this,(float)piVar1,(int *)param_3,(float)piVar3,fVar9);
          piVar1 = (int *)param_3;
          param_2 = local_1c;
          fVar7 = fVar9;
        }
        else {
          FUN_00a541e0(this,(int)fVar7,(float)piVar1,(ushort)param_2,SUB42(param_3,0));
          FUN_00a541e0(this,(int)fVar7,(float)piVar1,uVar10,(ushort)local_1c);
          param_2 = (int *)param_3;
          piVar3 = local_1c;
          fVar7 = fVar9;
        }
      }
    }
    else {
      uVar11 = (ushort)piVar1;
      if ((*(uint *)((int)local_10 + ((uint)param_2 & 0xffff) * 4 + 0xc0008) & (uint)fVar7) == 0) {
        FUN_009e68d0(local_10,(undefined2 *)&param_1,(undefined2 *)&param_4);
        piVar1 = param_2;
        if ((*(uint *)((int)local_10 + ((uint)piVar3 & 0xffff) * 4 + 0xc0008) & (uint)fVar7) == 0) {
          FUN_00a541e0(this,(int)fVar7,(float)param_2,uVar11,SUB42(param_1,0));
          FUN_00a541e0(this,(int)fVar7,(float)piVar3,uVar11,SUB42(param_4,0));
          piVar1 = (int *)param_1;
          FUN_00a547c0(this,param_1,param_2,(float)piVar3,fVar9);
          param_2 = piVar3;
          piVar3 = (int *)param_4;
          fVar7 = fVar9;
        }
        else {
          FUN_00a541e0(this,(int)fVar7,(float)param_2,uVar11,SUB42(param_1,0));
          FUN_00a541e0(this,(int)fVar7,(float)piVar1,uVar10,SUB42(param_4,0));
          piVar1 = (int *)param_1;
          piVar3 = (int *)param_4;
          fVar7 = fVar9;
        }
      }
      else {
        if ((*(uint *)((int)local_10 + ((uint)piVar3 & 0xffff) * 4 + 0xc0008) & (uint)fVar7) != 0) {
          return;
        }
        FUN_009e68d0(local_10,(undefined2 *)&local_18,(undefined2 *)&local_14);
        FUN_00a541e0(this,(int)fVar7,(float)piVar3,uVar11,(ushort)local_18);
        FUN_00a541e0(this,(int)fVar7,(float)piVar3,(ushort)param_2,(ushort)local_14);
        piVar1 = piVar3;
        param_2 = local_18;
        piVar3 = local_14;
        fVar7 = fVar9;
      }
    }
  }
  iVar8 = *(int *)((int)this + 0x18) + 8;
  piVar1 = (int *)(iVar8 + ((uint)piVar1 & 0xffff) * 0x18);
  if (*piVar1 < 0) {
    *piVar1 = 0;
  }
  else if (*(int *)this <= *piVar1) {
    *piVar1 = *(int *)this + -1;
  }
  if (piVar1[1] < 0) {
    piVar1[1] = 0;
  }
  else if (*(int *)this <= piVar1[1]) {
    piVar1[1] = *(int *)this + -1;
  }
  iVar6 = *(int *)(iVar8 + ((uint)param_2 & 0xffff) * 0x18);
  piVar2 = (int *)(iVar8 + ((uint)param_2 & 0xffff) * 0x18);
  if (iVar6 < 0) {
    *piVar2 = 0;
  }
  else if (*(int *)this <= iVar6) {
    *piVar2 = *(int *)this + -1;
  }
  if (piVar2[1] < 0) {
    piVar2[1] = 0;
  }
  else if (*(int *)this <= piVar2[1]) {
    piVar2[1] = *(int *)this + -1;
  }
  piVar3 = (int *)(iVar8 + ((uint)piVar3 & 0xffff) * 0x18);
  if (*piVar3 < 0) {
    *piVar3 = 0;
  }
  else if (*(int *)this <= *piVar3) {
    *piVar3 = *(int *)this + -1;
  }
  if (piVar3[1] < 0) {
    piVar3[1] = 0;
    FUN_00a53b00(this,piVar1,piVar2,piVar3);
    return;
  }
  if (*(int *)this <= piVar3[1]) {
    piVar3[1] = *(int *)this + -1;
  }
  FUN_00a53b00(this,piVar1,piVar2,piVar3);
  return;
}


//// FUNCTION FUN_00a54b50 @ 00a54b50 ////

void * __thiscall FUN_00a54b50(void *this,byte param_1)

{
  FUN_00a53bc0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a54b70 @ 00a54b70 ////

void __fastcall FUN_00a54b70(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  param_1[1] = param_1[2];
  iVar1 = FUN_009e2750();
  *param_1 = iVar1;
  FUN_00a795a0(param_1);
  iVar1 = param_1[1];
  iVar5 = DAT_010bb578;
  iVar2 = FUN_009e2750();
  iVar3 = FUN_009e2750();
  iVar4 = FUN_009e2750();
  FUN_00a54110(DAT_010bb57c,iVar4,iVar3,iVar2,iVar1,iVar5);
  return;
}


//// FUNCTION FUN_00a54cf0 @ 00a54cf0 ////

void __cdecl FUN_00a54cf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a54e50 @ 00a54e50 ////

void FUN_00a54e50(void)

{
  int iVar1;
  
  iVar1 = DAT_010bb580;
  if (*(int *)(DAT_010bb580 + 0x1c) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
    *(undefined1 *)(iVar1 + 0x20) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
    WaitForSingleObject(DAT_010bb568,0xffffffff);
  }
  return;
}


//// FUNCTION FUN_00a54ed0 @ 00a54ed0 ////

void __thiscall FUN_00a54ed0(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)this = fVar1;
  *(float *)((int)this + 4) = fVar2;
  *(float *)((int)this + 0xc) = fVar1 + 64.0;
  *(float *)((int)this + 0x10) = fVar2 + 64.0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00a54f30 @ 00a54f30 ////

void __cdecl FUN_00a54f30(void *param_1,int param_2,byte *param_3,uint param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int local_c;
  int local_8;
  byte *local_4;
  
  if ((((param_1 != (void *)0x0) && (param_3 != (byte *)0x0)) &&
      (*(uint *)((int)param_1 + 0x44) == param_4)) && (*(int *)((int)param_1 + 0x48) == param_5)) {
    local_8 = 0;
    local_4 = (byte *)0x0;
    MediaPlayer_LockVideoBuffer(param_1,&local_8);
    if (local_4 != (byte *)0x0) {
      if (*(int *)((int)param_1 + 0x3c) == 0x18) {
        pbVar2 = local_4;
        if (0 < param_5) {
          do {
            iVar4 = 0;
            if (0 < (int)param_4) {
              do {
                uVar1 = (ushort)(*param_3 >> 3);
                *(ushort *)(pbVar2 + iVar4 * 2) = ((uVar1 | 0xffe0) << 5 | uVar1) << 5 | uVar1;
                iVar4 = iVar4 + 1;
                param_3 = param_3 + 1;
              } while (iVar4 < (int)param_4);
            }
            param_5 = param_5 + -1;
            pbVar2 = pbVar2 + (local_8 / 2) * 2;
          } while (param_5 != 0);
        }
      }
      else if (*(int *)((int)param_1 + 0x3c) == 0x32) {
        if (local_8 == param_2) {
          pbVar2 = local_4;
          for (uVar3 = param_4 * param_5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined4 *)pbVar2 = *(undefined4 *)param_3;
            param_3 = param_3 + 4;
            pbVar2 = pbVar2 + 4;
          }
          for (uVar3 = param_4 * param_5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pbVar2 = *param_3;
            param_3 = param_3 + 1;
            pbVar2 = pbVar2 + 1;
          }
          MediaPlayer_UnlockVideoBuffer((int)param_1);
          return;
        }
        if (0 < param_5) {
          local_c = param_5;
          pbVar2 = local_4;
          do {
            pbVar5 = param_3;
            pbVar6 = pbVar2;
            for (uVar3 = param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
              pbVar5 = pbVar5 + 4;
              pbVar6 = pbVar6 + 4;
            }
            for (uVar3 = param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pbVar6 = *pbVar5;
              pbVar5 = pbVar5 + 1;
              pbVar6 = pbVar6 + 1;
            }
            pbVar2 = pbVar2 + local_8;
            param_3 = param_3 + param_4;
            local_c = local_c + -1;
          } while (local_c != 0);
          MediaPlayer_UnlockVideoBuffer((int)param_1);
          return;
        }
      }
    }
    MediaPlayer_UnlockVideoBuffer((int)param_1);
  }
  return;
}


//// FUNCTION FUN_00a55150 @ 00a55150 ////

void __cdecl FUN_00a55150(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a551d0 @ 00a551d0 ////

void __thiscall FUN_00a551d0(void *this,void *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int *this_00;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  uint *puVar15;
  int local_ec;
  int local_e4;
  float local_d8;
  int local_d4;
  int local_d0;
  float local_cc [12];
  int local_9c;
  float local_98 [4];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  int *local_64;
  float local_60;
  float local_5c;
  undefined4 *local_58;
  uint local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  float local_30 [8];
  undefined4 local_10;
  
  if ((param_1 != (void *)0x0) && (iVar8 = FUN_0097e350(param_1,0), iVar8 != 0)) {
    uVar3 = *(undefined4 *)((int)param_1 + 0x7c);
    pfVar13 = (float *)((int)param_1 + 0x18);
    pfVar14 = local_30;
    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar14 + 1;
    }
    local_10 = uVar3;
    pfVar13 = local_30;
    pfVar14 = local_98;
    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar14 + 1;
    }
    local_cc[6] = (float)DAT_010bb59c;
    local_cc[7] = (float)DAT_010bb5a0;
    local_cc[0xb] = 0.0;
    local_cc[5] = 0.0;
    local_cc[3] = 0.0;
    local_cc[2] = 0.0;
    local_cc[1] = 0.0;
    local_cc[4] = 1.0;
    local_cc[0] = 1.0;
    local_cc[8] = (float)DAT_010bb5a4;
    iVar12 = *(int *)(*(int *)((int)this + 0x1c) + 0xc);
    local_cc[10] = -*(float *)(iVar12 + 0x10);
    local_cc[9] = -*(float *)(iVar12 + 0xc);
    local_9c = iVar8;
    iVar12 = FUN_009e2750();
    FUN_009e4b80(local_cc,(float)iVar12 * 0.015625);
    FUN_009aa830(local_98,local_cc);
    local_cc[0xb] = 0.0;
    local_cc[10] = 0.0;
    local_cc[9] = 0.0;
    local_cc[7] = 0.0;
    local_cc[6] = 0.0;
    local_cc[5] = 0.0;
    local_cc[2] = 0.0;
    local_cc[8] = 1.0;
    local_cc[4] = 0.0;
    local_cc[0] = 0.0;
    local_cc[3] = 1.0;
    local_cc[1] = 1.0;
    FUN_009aa830(local_98,local_cc);
    puVar15 = DAT_010bb578 + 0x30002;
    local_d4 = 0;
    if (0 < *(int *)(iVar8 + 0x28)) {
      do {
        this_00 = *(int **)(*(int *)(iVar8 + 0x2c) + local_d4 * 4);
        bVar7 = LH_Submesh_TestLightMask(this_00,*(uint *)((int)param_1 + 0x98) & 0xffff);
        if ((((*(byte *)(this_00 + 10) & 0x18) == 0) && (bVar7)) && (local_d0 = 0, 0 < *this_00)) {
          do {
            iVar12 = *(int *)(this_00[1] + local_d0 * 4);
            pfVar13 = *(float **)(iVar12 + 0x30);
            iVar8 = *(int *)(local_9c + 0x34) + (*(uint *)(iVar12 + 8) & 0xff) * 0x24;
            uVar10 = *(uint *)(iVar8 + 0x18);
            pfVar14 = (float *)(DAT_010bb578 + 2);
            if ((uVar10 == 0) || ((*(byte *)(uVar10 + 0x54) & 0x20) == 0)) {
LAB_00a55421:
              iVar9 = 1;
            }
            else {
              iVar9 = FUN_0099c150(uVar10);
              DAT_010bb57c[9] = iVar9;
              if (DAT_010bb57c[9] == 0) goto LAB_00a55421;
              iVar9 = 2;
            }
            FUN_00a54740(DAT_010bb57c,iVar9);
            if ((*(byte *)(iVar8 + 0x14) & 8) == 0) {
              local_e4 = 0;
              if (0 < *(int *)(iVar12 + 0x2c)) {
                do {
                  fVar4 = *pfVar13;
                  fVar5 = pfVar13[1];
                  local_d8 = pfVar13[2];
                  if (local_d8 < 0.0) {
                    local_d8 = 0.0;
                  }
                  *pfVar14 = local_98[0] * fVar4 + local_80 * local_d8 + local_98[3] * fVar5 +
                             local_74;
                  local_5c = *pfVar14;
                  pfVar14[1] = local_7c * local_d8 + local_98[1] * fVar4 + local_88 * fVar5 +
                               local_70;
                  pfVar14[2] = local_78 * local_d8 + local_98[2] * fVar4 + local_84 * fVar5 +
                               local_6c;
                  local_48 = (float)(int)ROUND(local_5c);
                  local_40 = pfVar14[1];
                  *pfVar14 = local_48;
                  local_38 = (float)(int)ROUND(local_40);
                  pfVar14[1] = local_38;
                  local_3c = (float)(int)ROUND(pfVar13[6] * 4.19424e+06);
                  pfVar14[4] = local_3c;
                  local_68 = (float)(int)ROUND(pfVar13[7] * 4.19424e+06);
                  pfVar14[5] = local_68;
                  if ((int)*pfVar14 < 0) {
                    *puVar15 = 1;
                  }
                  else {
                    *puVar15 = ((int)*pfVar14 < *DAT_010bb57c) - 1 & 2;
                  }
                  if ((int)pfVar14[1] < 0) {
                    uVar10 = *puVar15 | 4;
LAB_00a555ba:
                    *puVar15 = uVar10;
                  }
                  else if (*DAT_010bb57c <= (int)pfVar14[1]) {
                    uVar10 = *puVar15 | 8;
                    goto LAB_00a555ba;
                  }
                  local_d8 = local_d8 * 0.18157057;
                  if (1.0 < local_d8) {
                    local_d8 = 1.0;
                  }
                  local_44 = (int)ROUND(local_d8 * 80.0 + 70.0);
                  pfVar14[3] = (float)(local_44 << 0x10);
                  pfVar14 = pfVar14 + 6;
                  puVar15 = puVar15 + 1;
                  pfVar13 = pfVar13 + 8;
                  local_e4 = local_e4 + 1;
                } while (local_e4 < *(int *)(iVar12 + 0x2c));
              }
              puVar6 = DAT_010bb578;
              local_58 = DAT_010bb578 + 2;
              uVar3 = *(undefined4 *)(iVar12 + 0x2c);
              puVar15 = DAT_010bb578 + 0x30002;
              *DAT_010bb578 = 0;
              puVar6[1] = uVar3;
              local_ec = 0;
              if (0 < *(int *)(iVar12 + 0x1c)) {
                local_e4 = 0;
                do {
                  puVar11 = (ushort *)(*(int *)(iVar12 + 0x20) + local_e4);
                  uVar1 = puVar11[2];
                  local_4c = (float)(uint)uVar1;
                  uVar2 = puVar11[1];
                  local_64 = (int *)(uint)uVar2;
                  local_60 = (float)(uint)*puVar11;
                  local_34 = puVar15[uVar2];
                  local_54 = puVar15[(int)local_60] | local_34;
                  local_50 = local_60;
                  if (local_54 == 0 && puVar15[uVar1] == 0) {
                    FUN_00a53b00(DAT_010bb57c,local_58 + (int)local_60 * 6,
                                 local_58 + (uint)uVar2 * 6,local_58 + (uint)uVar1 * 6);
                  }
                  else if ((puVar15[uVar1] & puVar15[(int)local_60] & local_34) == 0) {
                    FUN_00a547c0(DAT_010bb57c,local_60,local_64,local_4c,1.12104e-44);
                  }
                  local_ec = local_ec + 1;
                  local_e4 = local_e4 + 6;
                } while (local_ec < *(int *)(iVar12 + 0x1c));
              }
            }
            local_d0 = local_d0 + 1;
            iVar8 = local_9c;
          } while (local_d0 < *this_00);
        }
        local_d4 = local_d4 + 1;
      } while (local_d4 < *(int *)(iVar8 + 0x28));
    }
    FUN_00a54740(DAT_010bb57c,1);
  }
  return;
}


//// FUNCTION FUN_00a557a0 @ 00a557a0 ////

void __cdecl FUN_00a557a0(float *param_1,void *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_c8;
  float local_c4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_90 [8];
  undefined4 local_70;
  float local_60 [24];
  
  if (param_2 != (void *)0x0) {
    iVar6 = FUN_0097e350(param_2,0);
    pfVar8 = (float *)((int)param_2 + 0x18);
    pfVar9 = local_90;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar9 = pfVar9 + 1;
    }
    local_70 = *(undefined4 *)((int)param_2 + 0x7c);
    FUN_00a47a40((void *)(iVar6 + 200),local_60,local_90);
    local_a8 = DAT_010bb59c;
    local_a4 = DAT_010bb5a0;
    local_a0 = DAT_010bb5a4;
    iVar6 = 0;
    do {
      pfVar8 = local_60 + iVar6 * 3;
      if (local_60[iVar6 * 3 + 2] < 0.0) {
        local_60[iVar6 * 3 + 2] = 0.0;
      }
      fVar1 = *pfVar8;
      fVar2 = local_60[iVar6 * 3 + 1];
      fVar3 = local_60[iVar6 * 3 + 2];
      fVar5 = fVar2 * 0.0;
      fVar4 = local_a8 * fVar3 + fVar5 + fVar1;
      *pfVar8 = fVar4;
      fVar1 = fVar1 * 0.0;
      fVar2 = local_a4 * fVar3 + fVar1 + fVar2;
      local_60[iVar6 * 3 + 1] = fVar2;
      local_60[iVar6 * 3 + 2] = local_a0 * fVar3 + fVar1 + fVar5;
      if (iVar6 == 0) {
        FUN_009840b0(&local_c8,pfVar8);
        local_ec = local_c8;
        local_e8 = local_c4;
        local_e4 = local_c8;
        local_e0 = local_c4;
        fVar1 = local_e0;
      }
      else {
        fVar1 = fVar4;
        if ((local_e4 <= fVar4) && (fVar1 = local_e4, local_ec < fVar4)) {
          local_ec = fVar4;
        }
        local_e4 = fVar1;
        fVar1 = fVar2;
        if ((local_e0 <= fVar2) && (fVar1 = local_e0, local_e8 < fVar2)) {
          local_e8 = fVar2;
        }
      }
      local_e0 = fVar1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
    param_1[1] = local_e0 - 1.0;
    *param_1 = local_e4 - 1.0;
    param_1[2] = 0.0;
    param_1[5] = 0.0;
    param_1[3] = local_ec + 1.0;
    param_1[4] = local_e8 + 1.0;
    return;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  return;
}


//// FUNCTION FUN_00a55a20 @ 00a55a20 ////

void __fastcall FUN_00a55a20(int param_1)

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


//// FUNCTION FUN_00a55a70 @ 00a55a70 ////

void * FUN_00a55a70(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a55aa0 @ 00a55aa0 ////

undefined4 FUN_00a55aa0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_4;
  
  if ((DAT_010bb590 != (undefined4 *)0x0) && (DAT_010bb594 - (int)DAT_010bb590 >> 2 != 0)) {
    fVar4 = FUN_009e3eb0(*(int *)*DAT_010bb590);
    local_4 = (float)fVar4;
    iVar1 = 1;
    iVar3 = 0;
    while( true ) {
      iVar2 = iVar1;
      if (DAT_010bb590 == (undefined4 *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = DAT_010bb594 - (int)DAT_010bb590 >> 2;
      }
      if (iVar1 <= iVar2) break;
      fVar4 = FUN_009e3eb0(*(int *)DAT_010bb590[iVar2]);
      if ((float10)local_4 <= fVar4) {
        iVar1 = iVar2 + 1;
      }
      else {
        local_4 = (float)fVar4;
        iVar1 = iVar2 + 1;
        iVar3 = iVar2;
      }
    }
    return DAT_010bb590[iVar3];
  }
  return 0;
}


//// FUNCTION FUN_00a55b20 @ 00a55b20 ////

void __fastcall FUN_00a55b20(int param_1)

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


//// FUNCTION FUN_00a55b80 @ 00a55b80 ////

void __fastcall FUN_00a55b80(int param_1)

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


//// FUNCTION FUN_00a55bb0 @ 00a55bb0 ////

undefined4 * FUN_00a55bb0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a55be0 @ 00a55be0 ////

void __cdecl FUN_00a55be0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (DAT_010bb590 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_010bb594 - DAT_010bb590 >> 2;
    }
    if (iVar1 <= iVar2) break;
    if (**(int **)(DAT_010bb590 + iVar2 * 4) == param_1) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(iVar2 * 4 + DAT_010bb590));
    }
    iVar2 = iVar2 + 1;
  }
  return;
}


//// FUNCTION FUN_00a55c60 @ 00a55c60 ////

void FUN_00a55c60(void)

{
  int iVar1;
  
  iVar1 = DAT_010bb580;
  if (*(int *)(DAT_010bb580 + 0x1c) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
    *(undefined1 *)(iVar1 + 0x20) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
    WaitForSingleObject(DAT_010bb568,0xffffffff);
  }
  if (DAT_010bb590 == (undefined4 *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_010bb594 - (int)DAT_010bb590 >> 2;
  }
  if (0 < iVar1) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*DAT_010bb590);
  }
  if (DAT_010bb590 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010bb590);
  }
  DAT_010bb590 = (undefined4 *)0x0;
  DAT_010bb594 = 0;
  DAT_010bb598 = 0;
  return;
}


//// FUNCTION FUN_00a55d10 @ 00a55d10 ////

void __fastcall FUN_00a55d10(int param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  LONG LVar4;
  int iVar5;
  
  iVar5 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
    }
    _Memory = *(void **)(param_1 + 0x10);
    if (iVar3 <= iVar5) break;
    puVar1 = *(undefined4 **)((int)_Memory + iVar5 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 4);
      uVar2 = DAT_0105b588;
      DAT_0105b588 = uVar2;
      if (LVar4 == 0) {
        DAT_0105b588 = 1;
        (**(code **)*puVar1)(1);
        DAT_0105b588 = uVar2;
      }
    }
    iVar5 = iVar5 + 1;
  }
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
  *(undefined1 *)(param_1 + 0x20) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
  DAT_010bb584 = 0;
  SetEvent(DAT_010bb568);
  return;
}


//// FUNCTION FUN_00a55dc0 @ 00a55dc0 ////

void __fastcall FUN_00a55dc0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    iVar2 = DAT_010bb580;
    if (param_1[4] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1[5] - param_1[4] >> 2;
    }
    if (iVar3 <= local_4) break;
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
    cVar1 = *(char *)(iVar2 + 0x20);
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
    if (cVar1 != '\0') break;
    FUN_00a551d0(param_1,*(void **)(param_1[4] + local_4 * 4));
    local_4 = local_4 + 1;
  }
  iVar2 = DAT_010bb580;
  if (param_1[2] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
    cVar1 = *(char *)(iVar2 + 0x20);
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
    if (cVar1 == '\0') {
      FUN_009e4b10(param_1);
    }
  }
  iVar2 = DAT_010bb580;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
  cVar1 = *(char *)(iVar2 + 0x20);
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
  if (cVar1 != '\0') {
    param_1[7] = 0;
  }
  FUN_00a55d10((int)param_1);
  return;
}


//// FUNCTION FUN_00a55e90 @ 00a55e90 ////

undefined4 FUN_00a55e90(void)

{
  int *piVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  HANDLE local_8;
  HANDLE local_4;
  
  local_8 = DAT_010bb570;
  local_4 = DAT_010bb56c;
  while( true ) {
    DVar3 = WaitForMultipleObjects(2,&local_8,0,0xffffffff);
    if (DVar3 == 0) break;
    if (DVar3 == 1) {
      ResetEvent(DAT_010bb56c);
      ResetEvent(DAT_010bb568);
      piVar2 = DAT_010bb580;
      piVar1 = DAT_010bb580 + 1;
      *piVar1 = DAT_010bb580[2];
      iVar4 = FUN_009e2750();
      *piVar2 = iVar4;
      FUN_00a795a0(piVar2);
      iVar4 = *piVar1;
      iVar8 = DAT_010bb578;
      iVar5 = FUN_009e2750();
      iVar6 = FUN_009e2750();
      iVar7 = FUN_009e2750();
      FUN_00a54110(DAT_010bb57c,iVar7,iVar6,iVar5,iVar4,iVar8);
      FUN_00a55dc0(DAT_010bb580);
    }
  }
  return 0;
}


//// FUNCTION FUN_00a55f40 @ 00a55f40 ////

void __fastcall FUN_00a55f40(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb1fb;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00a55d10(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_00a55fb0 @ 00a55fb0 ////

void * __thiscall FUN_00a55fb0(void *this,byte param_1)

{
  FUN_00a55f40((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a55fd0 @ 00a55fd0 ////

void FUN_00a55fd0(void)

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
  puStack_8 = &LAB_00cfb218;
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


//// FUNCTION FUN_00a56040 @ 00a56040 ////

void FUN_00a56040(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_010bb580;
  if (DAT_010bb588 == '\0') {
    return;
  }
  DAT_010bb588 = 0;
  if (*(int *)((int)DAT_010bb580 + 0x1c) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
    *(undefined1 *)((int)pvVar1 + 0x20) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
    WaitForSingleObject(DAT_010bb568,0xffffffff);
  }
  SetEvent(DAT_010bb570);
  WaitForSingleObject(DAT_010bb574,0xffffffff);
  CloseHandle(DAT_010bb574);
  pvVar1 = DAT_010bb580;
  if (DAT_010bb580 != (void *)0x0) {
    FUN_00a55f40((int)DAT_010bb580);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  DAT_010bb580 = (void *)0x0;
  CloseHandle(DAT_010bb570);
  CloseHandle(DAT_010bb56c);
  CloseHandle(DAT_010bb568);
  pvVar1 = DAT_010bb57c;
  if (DAT_010bb57c != (void *)0x0) {
    FUN_00a53bc0((int)DAT_010bb57c);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  DAT_010bb57c = (void *)0x0;
                    /* WARNING: Subroutine does not return */
  _free(DAT_010bb578);
}


//// FUNCTION FUN_00a56190 @ 00a56190 ////

void __thiscall FUN_00a56190(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a55fd0();
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
      _Dst = FUN_00a55bb0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a55a70(param_1,iVar5,param_1 + param_2);
      FUN_00a55bb0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a54cf0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a55a70(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a55150(param_1,(int)pvVar3,iVar5);
    FUN_00a54cf0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a563d0 @ 00a563d0 ////

undefined4 * __fastcall FUN_00a563d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
  *(undefined1 *)(param_1 + 8) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
  return param_1;
}


//// FUNCTION FUN_00a56480 @ 00a56480 ////

void FUN_00a56480(void)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  float local_24;
  float local_20;
  float local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb251;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_010bb588 != '\0') {
    ExceptionList = &local_c;
    FUN_00a56040();
  }
  DAT_010bb588 = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb550);
  puVar2 = operator_new(0x24);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    DAT_010bb580 = (undefined4 *)0x0;
  }
  else {
    DAT_010bb580 = FUN_00a563d0(puVar2);
  }
  local_4 = 0xffffffff;
  puVar2 = operator_new(0x34);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    DAT_010bb57c = (undefined4 *)0x0;
  }
  else {
    DAT_010bb57c = FUN_00a547a0(puVar2);
  }
  local_4 = 0xffffffff;
  puVar2 = operator_new(0x120008);
  local_4 = 2;
  if (puVar2 == (undefined4 *)0x0) {
    DAT_010bb578 = (undefined4 *)0x0;
  }
  else {
    DAT_010bb578 = FUN_00a58000(puVar2);
  }
  local_4 = 0xffffffff;
  DAT_010bb570 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  DAT_010bb56c = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  DAT_010bb568 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
  DAT_010bb574 = FUN_00acfa09((LPSECURITY_ATTRIBUTES)0x0,0,0xa55e90,0,0,(LPDWORD)0x0);
  iVar3 = FUN_009e2750();
  iVar4 = FUN_009e2750();
  uVar7 = iVar3 * iVar4;
  pvVar5 = operator_new(uVar7);
  DAT_010bb580[2] = pvVar5;
  puVar2 = (undefined4 *)DAT_010bb580[2];
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar2 = 0xbebebebe;
    puVar2 = puVar2 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar2 = 0xbe;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  local_1c = 125.398;
  local_24 = -50.121;
  local_20 = 61.797;
  FUN_00412e20(&local_24);
  fVar1 = 1.0 / local_1c;
  DAT_010bb59c = local_24 * fVar1;
  DAT_010bb5a0 = local_20 * fVar1;
  ExceptionList = local_c;
  DAT_010bb5a4 = fVar1 * local_1c;
  return;
}


//// FUNCTION FUN_00a56650 @ 00a56650 ////

void __cdecl FUN_00a56650(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1;
  if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
    if (param_1 == DAT_010bb584) {
      FUN_00a54e50();
    }
    iVar3 = 0;
    while( true ) {
      if (DAT_010bb590 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)DAT_010bb594 - DAT_010bb590 >> 2;
      }
      if (iVar2 <= iVar3) break;
      if ((int *)**(int **)(DAT_010bb590 + iVar3 * 4) == piVar1) {
        return;
      }
      iVar3 = iVar3 + 1;
    }
    param_1 = operator_new(4);
    if (param_1 == (int *)0x0) {
      param_1 = (int *)0x0;
    }
    else {
      *param_1 = (int)piVar1;
    }
    if ((DAT_010bb590 != 0) &&
       ((uint)((int)DAT_010bb594 - DAT_010bb590 >> 2) < (uint)(DAT_010bb598 - DAT_010bb590 >> 2))) {
      *DAT_010bb594 = param_1;
      DAT_010bb594 = DAT_010bb594 + 1;
      return;
    }
    FUN_00a56190(&DAT_010bb58c,DAT_010bb594,1,&param_1);
  }
  return;
}


//// FUNCTION FUN_00a56750 @ 00a56750 ////

void __cdecl FUN_00a56750(int param_1)

{
  float fVar1;
  void *this;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_64;
  void *local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_4c;
  float local_48;
  void *local_44;
  float local_40;
  void *local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb268;
  local_c = ExceptionList;
  DAT_010bb584 = param_1;
  local_48 = *(float *)(*(int *)(param_1 + 0xc) + 0x10) - 20.0;
  local_4c = *(float *)(*(int *)(param_1 + 0xc) + 0xc) - 20.0;
  local_5c = *(float *)(*(int *)(param_1 + 0xc) + 0x10) + 84.0;
  local_60 = (void *)(*(float *)(*(int *)(param_1 + 0xc) + 0xc) + 84.0);
  ExceptionList = &local_c;
  local_44 = local_60;
  local_40 = local_5c;
  FUN_009e4130(&local_64,(int)&local_4c);
  fVar1 = *(float *)(*(int *)(param_1 + 0xc) + 0x10);
  local_54 = *(float *)(*(int *)(param_1 + 0xc) + 0xc);
  local_5c = fVar1 + 64.0;
  local_58 = 0;
  local_60 = (void *)(local_54 + 64.0);
  local_28 = 0;
  local_4 = 0;
  local_2c = local_5c;
  local_30 = local_60;
  for (puVar2 = local_64; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[1]) {
    this = (void *)*puVar2;
    if ((((this != (void *)0x0) && (*(char *)((int)this + 0x9c) < '\0')) &&
        (FUN_00a557a0(&local_24,this), iVar3 = DAT_010bb580, local_24 <= (float)local_30)) &&
       (((local_20 <= local_2c && (local_54 <= local_18)) &&
        ((fVar1 <= local_14 &&
         (local_60 = this, iVar4 = FUN_0097e350(this,0), (*(byte *)(iVar4 + 0xe4) & 0x40) != 0))))))
    {
      InterlockedIncrement((LONG *)((int)this + 0x10));
      FUN_004690a0((void *)(iVar3 + 0xc),&local_60);
    }
  }
  *(int *)(DAT_010bb580 + 0x1c) = param_1;
  SetEvent(DAT_010bb56c);
  local_4 = 0xffffffff;
  FUN_009e42d0(&local_64);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a56940 @ 00a56940 ////

void FUN_00a56940(void)

{
  DWORD DVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (DAT_010bb584 == 0) {
    DVar1 = WaitForSingleObject(DAT_010bb568,0);
    if ((DVar1 == 0) && (DAT_010bb580[7] != 0)) {
      iVar2 = FUN_009e2750();
      uVar3 = FUN_009e2750();
      FUN_00a54f30((void *)**(undefined4 **)(DAT_010bb580[7] + 0xc),*DAT_010bb580,
                   (byte *)DAT_010bb580[1],uVar3,iVar2);
      DAT_010bb580[7] = 0;
    }
    piVar4 = (int *)FUN_00a55aa0();
    if (piVar4 != (int *)0x0) {
      iVar2 = *piVar4;
      FUN_00a55be0(iVar2);
      FUN_00a56750(iVar2);
    }
  }
  return;
}


//// FUNCTION FUN_00a56a90 @ 00a56a90 ////

void __cdecl FUN_00a56a90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a56b70 @ 00a56b70 ////

void __fastcall FUN_00a56b70(undefined4 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)*param_1 = 0;
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a56c30 @ 00a56c30 ////

void __cdecl FUN_00a56c30(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a56cb0 @ 00a56cb0 ////

undefined4 * __thiscall FUN_00a56cb0(void *this,byte param_1)

{
  FUN_00a56b70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a56d80 @ 00a56d80 ////

void * FUN_00a56d80(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a56dc0 @ 00a56dc0 ////

void __fastcall FUN_00a56dc0(int param_1)

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


//// FUNCTION FUN_00a56df0 @ 00a56df0 ////

undefined4 * FUN_00a56df0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a56e20 @ 00a56e20 ////

void __fastcall FUN_00a56e20(int param_1)

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


//// FUNCTION FUN_00a56e50 @ 00a56e50 ////

void __fastcall FUN_00a56e50(int param_1)

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


//// FUNCTION FUN_00a56e80 @ 00a56e80 ////

void FUN_00a56e80(void)

{
  if (DAT_010bb5ac != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010bb5ac);
  }
  DAT_010bb5ac = (void *)0x0;
  DAT_010bb5b0 = 0;
  DAT_010bb5b4 = 0;
  return;
}


//// FUNCTION FUN_00a56ec0 @ 00a56ec0 ////

void FUN_00a56ec0(void)

{
  undefined4 *_Memory;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (DAT_010bb5ac == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_010bb5b0 - (int)DAT_010bb5ac >> 2;
    }
    if (iVar1 <= iVar2) break;
    _Memory = *(undefined4 **)((int)DAT_010bb5ac + iVar2 * 4);
    if (_Memory != (undefined4 *)0x0) {
      FUN_00a56b70(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)((int)DAT_010bb5ac + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  }
  if (DAT_010bb5ac != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010bb5ac);
  }
  DAT_010bb5ac = (void *)0x0;
  DAT_010bb5b0 = 0;
  DAT_010bb5b4 = 0;
  return;
}


//// FUNCTION FUN_00a56f40 @ 00a56f40 ////

void FUN_00a56f40(void)

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
  puStack_8 = &LAB_00cfb288;
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


//// FUNCTION FUN_00a57000 @ 00a57000 ////

void __thiscall FUN_00a57000(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a56f40();
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
      _Dst = FUN_00a56df0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a56d80(param_1,iVar5,param_1 + param_2);
      FUN_00a56df0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a56a90(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a56d80(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a56c30(param_1,(int)pvVar3,iVar5);
    FUN_00a56a90(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a57290 @ 00a57290 ////

int __cdecl FUN_00a57290(byte *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int *piVar6;
  uint _Size;
  void *pvVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  bool bVar12;
  int local_134;
  int *local_130;
  char *local_12c;
  uint local_128;
  uint local_124;
  char local_120 [20];
  char local_10c [23];
  undefined1 local_f5;
  undefined1 local_f4;
  char local_f3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb2ab;
  local_c = ExceptionList;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  iVar11 = 0;
  while( true ) {
    if (DAT_010bb5ac == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)DAT_010bb5b0 - DAT_010bb5ac >> 2;
    }
    if (iVar3 <= iVar11) break;
    pbVar10 = (byte *)**(undefined4 **)(DAT_010bb5ac + iVar11 * 4);
    pbVar4 = param_1;
    do {
      bVar1 = *pbVar4;
      bVar12 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_00a57318:
        iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00a5731d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar12 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_00a57318;
      pbVar4 = pbVar4 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a5731d:
    if (iVar3 == 0) {
      return *(int *)(*(int *)(DAT_010bb5ac + iVar11 * 4) + 0x20);
    }
    iVar11 = iVar11 + 1;
  }
  iVar11 = 0;
  local_134 = 4;
  ExceptionList = &local_c;
  do {
    local_4 = 0xffffffff;
    _sprintf(local_10c,"Data\\Textures\\LightMap\\%s.dds",param_1);
    local_f3 = (char)local_134 + '0';
    local_12c = local_120;
    pcVar8 = local_10c;
    local_f5 = 0x6c;
    local_f4 = 0x66;
    local_120[0] = '\0';
    local_128 = 0;
    local_124 = 0x14;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar9 = (int)pcVar8 - (int)(local_10c + 1);
    if (0x13 < uVar9) {
      local_124 = uVar9 + 0x20 & 0xffffffe0;
      local_12c = _malloc(local_124);
    }
    _strncpy(local_12c,local_10c,uVar9);
    local_12c[uVar9] = '\0';
    local_4 = 0;
    local_128 = uVar9;
    uVar5 = FUN_009d3660(&local_12c,(uint *)0x0);
    local_4 = 0xffffffff;
    if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
      _free(local_12c);
    }
    if ((char)uVar5 == '\0') break;
    iVar11 = iVar11 + 1;
    local_134 = local_134 + 1;
  } while (local_134 < 9);
  piVar6 = operator_new(0x24);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    *piVar6 = (int)(piVar6 + 3);
    *(undefined1 *)(piVar6 + 3) = 0;
    piVar6[1] = 0;
    piVar6[2] = 0x14;
    pbVar10 = param_1;
    do {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar1 != 0);
    uVar9 = (int)pbVar10 - (int)(param_1 + 1);
    if (0x13 < uVar9) {
      _Size = uVar9 + 0x20 & 0xffffffe0;
      piVar6[2] = _Size;
      pvVar7 = _malloc(_Size);
      *piVar6 = (int)pvVar7;
    }
    _strncpy((char *)*piVar6,(char *)param_1,uVar9);
    piVar6[1] = uVar9;
    *(undefined1 *)(uVar9 + *piVar6) = 0;
    piVar6[8] = iVar11;
  }
  if ((DAT_010bb5ac == 0) ||
     ((uint)(DAT_010bb5b4 - DAT_010bb5ac >> 2) <= (uint)((int)DAT_010bb5b0 - DAT_010bb5ac >> 2))) {
    local_130 = piVar6;
    FUN_00a57000(&DAT_010bb5a8,DAT_010bb5b0,1,&local_130);
  }
  else {
    *DAT_010bb5b0 = piVar6;
    DAT_010bb5b0 = DAT_010bb5b0 + 1;
  }
  ExceptionList = local_c;
  return iVar11;
}


//// FUNCTION FUN_00a57510 @ 00a57510 ////

void FUN_00a57510(void)

{
  DAT_010bb5b8 = 0;
  return;
}


//// FUNCTION FUN_00a57520 @ 00a57520 ////

void FUN_00a57520(void)

{
                    /* WARNING: Subroutine does not return */
  _free(DAT_010bb5b8);
}


//// FUNCTION FUN_00a57540 @ 00a57540 ////

void FUN_00a57540(void)

{
  int iVar1;
  float10 fVar2;
  
  if (DAT_010bb5b8 == (void *)0x0) {
    DAT_010bb5b8 = operator_new(1000);
    iVar1 = 0;
    do {
      fVar2 = FUN_00990e30(0.2,0.5);
      *(float *)(iVar1 + (int)DAT_010bb5b8) = (float)fVar2;
      iVar1 = iVar1 + 4;
    } while (iVar1 < 1000);
  }
  return;
}


//// FUNCTION FUN_00a57590 @ 00a57590 ////

void * __cdecl FUN_00a57590(void *param_1,byte *param_2,byte *param_3)

{
  FUN_0040a530(param_1,((uint)param_2[3] * (uint)param_3[3]) / 0xff,
               ((uint)param_2[2] * (uint)param_3[2]) / 0xff,
               ((uint)param_2[1] * (uint)param_3[1]) / 0xff,((uint)*param_2 * (uint)*param_3) / 0xff
              );
  return param_1;
}


//// FUNCTION FUN_00a57630 @ 00a57630 ////

void __fastcall FUN_00a57630(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb2c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d793c8;
  local_4 = 0;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[8]);
}


//// FUNCTION FUN_00a57720 @ 00a57720 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00a57720(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  float fVar12;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)((int)this + 0x454) == 0) {
    fVar11 = FUN_00990e30(-*(float *)((int)this + 0x41c),*(float *)((int)this + 0x41c));
    fVar12 = *(float *)((int)this + 0x418);
    local_18 = -*(float *)((int)this + 0x418);
  }
  else {
    iVar9 = FUN_009f52d0(*(int *)((int)this + 0x454));
    uVar10 = FUN_00990d30(0,iVar9);
    FUN_009faca0(&local_18,*(int *)((int)this + 0x454),uVar10);
    if ((_DAT_010bb5c0 & 1) == 0) {
      _DAT_010bb5c0 = _DAT_010bb5c0 | 1;
      _DAT_010bb5bc = 2.0;
    }
    fVar11 = FUN_00990e30(local_14 - _DAT_010bb5bc,_DAT_010bb5bc + local_14);
    fVar12 = _DAT_010bb5bc + local_18;
    local_18 = local_18 - _DAT_010bb5bc;
  }
  local_1c = (float)fVar11;
  fVar11 = FUN_00990e30(local_18,fVar12);
  fVar12 = (float)fVar11;
  fVar1 = *(float *)((int)this + 0x43c);
  fVar2 = *(float *)((int)this + 0x430);
  fVar3 = *(float *)((int)this + 0x424);
  fVar4 = *(float *)((int)this + 0x448);
  fVar5 = *(float *)((int)this + 0x440);
  fVar6 = *(float *)((int)this + 0x434);
  fVar7 = *(float *)((int)this + 0x428);
  fVar8 = *(float *)((int)this + 0x44c);
  *param_1 = fVar12 * *(float *)((int)this + 0x420) +
             local_1c * *(float *)((int)this + 0x42c) + *(float *)((int)this + 0x438) * 0.0 +
             *(float *)((int)this + 0x444);
  param_1[1] = fVar12 * fVar3 + local_1c * fVar2 + fVar1 * 0.0 + fVar4;
  param_1[2] = fVar12 * fVar7 + local_1c * fVar6 + fVar5 * 0.0 + fVar8;
  return;
}


//// FUNCTION FUN_00a578d0 @ 00a578d0 ////

void __fastcall FUN_00a578d0(void *param_1)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  ulonglong uVar11;
  undefined4 local_34;
  int local_30;
  byte local_2c [4];
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(char *)((int)param_1 + 0x18) != '\0') {
    iVar5 = 0;
    local_30 = -0x24 - (int)param_1;
    local_34 = 2.3509886e-38;
    piVar8 = (int *)((int)param_1 + 0x24);
    do {
      pfVar7 = (float *)(*(int *)(*(int *)((int)param_1 + 0x40c) + 0x20) + iVar5);
      if (500 < *piVar8) {
        *piVar8 = 1;
        pfVar2 = (float *)FUN_00a57720(param_1,&local_c);
        *pfVar7 = *pfVar2;
        pfVar7[1] = pfVar2[1];
        pfVar7[2] = pfVar2[2];
        if (*(void **)((int)param_1 + 0x414) != (void *)0x0) {
          fVar10 = FUN_0097f880(*(void **)((int)param_1 + 0x414),pfVar7,(undefined4 *)0x0);
          pfVar7[2] = (float)(fVar10 + (float10)0.05);
        }
      }
      uVar11 = FUN_00acd42c();
      iVar6 = (int)uVar11;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      local_34 = (float)CONCAT13((char)iVar6,(undefined3)local_34);
      pfVar7[0xb] = local_34;
      iVar5 = iVar5 + 0x34;
      pfVar7[9] = (float)(extraout_ST0 * (float10)*(float *)((int)piVar8 + DAT_010bb5b8 + local_30))
      ;
      *piVar8 = *piVar8 + DAT_0105becc;
      piVar8 = piVar8 + 1;
    } while (iVar5 < 13000);
    LH_ApplyMeshMaterial(DAT_010b7040);
    puVar3 = (undefined4 *)FUN_00a57720(param_1,&local_c);
    puVar9 = (undefined4 *)(*(int *)((int)param_1 + 0x20) + *(int *)((int)param_1 + 0x450) * 0xc);
    *puVar9 = *puVar3;
    puVar9[1] = puVar3[1];
    puVar9[2] = puVar3[2];
    iVar5 = *(int *)((int)param_1 + 0x450) + 1;
    *(int *)((int)param_1 + 0x450) = iVar5;
    if (*(int *)((int)param_1 + 0x1c) <= iVar5) {
      *(undefined4 *)((int)param_1 + 0x450) = 0;
    }
    FUN_009a1480(&DAT_0105c2e8,(undefined4 *)&DAT_00e67be8,'\x01');
    iVar5 = FUN_00a3ac00((int *)(*(int *)((int)param_1 + 0x1c) << 1),(int)local_24);
    if (iVar5 != 0) {
      uVar11 = FUN_00acd42c();
      local_30 = (int)uVar11;
      local_34 = 0.0;
      *(float *)((int)param_1 + 0x410) = (float)(extraout_ST0_00 - (float10)local_30);
      if (0 < *(int *)((int)param_1 + 0x1c)) {
        iVar6 = 0;
        local_30 = -0x7f7f80;
        local_2c[0] = 0xff;
        local_2c[1] = 0xff;
        local_2c[2] = 0xff;
        local_2c[3] = 0xb0;
        local_28 = 0.61644137;
        local_1c = 0;
        local_14 = 0;
        puVar9 = (undefined4 *)(iVar5 + 0x28);
        do {
          puVar3 = (undefined4 *)(*(int *)((int)param_1 + 0x20) + iVar6);
          fVar1 = (float)(int)local_34 * 0.02 + *(float *)((int)param_1 + 0x410);
          puVar9[-10] = *puVar3;
          puVar9[-9] = puVar3[1];
          puVar9[-8] = puVar3[2];
          puVar3 = FUN_00a57590(local_20,local_2c,(byte *)&local_30);
          puVar9[-7] = *puVar3;
          puVar9[-6] = local_1c;
          puVar9[-5] = fVar1;
          iVar5 = *(int *)((int)param_1 + 0x20) + iVar6;
          local_c = *(float *)(*(int *)((int)param_1 + 0x20) + iVar6) + 5.0;
          local_34 = (float)((int)local_34 + 1);
          local_8 = *(float *)(iVar5 + 4) + 5.0;
          iVar6 = iVar6 + 0xc;
          local_4 = *(float *)(iVar5 + 8) + 30.0;
          puVar9[-4] = local_c;
          puVar9[-3] = local_8;
          puVar9[-2] = local_4;
          local_10 = local_28 + fVar1;
          puVar9[-1] = 0xffffff;
          *puVar9 = local_14;
          puVar9[1] = local_10;
          puVar9 = puVar9 + 0xc;
          local_18 = fVar1;
        } while ((int)local_34 < *(int *)((int)param_1 + 0x1c));
      }
      FUN_00a3a4e0();
      (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x142);
      if (DAT_010bb230 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(DAT_010bb230 + 4);
      }
      (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,uVar4,0,0x18);
      (**(code **)(*g_pDirect3DDevice + 0x144))
                (g_pDirect3DDevice,2,unaff_ESI,*(undefined4 *)((int)param_1 + 0x1c));
    }
  }
  return;
}


//// FUNCTION FUN_00a57bf0 @ 00a57bf0 ////

undefined4 * __thiscall FUN_00a57bf0(void *this,byte param_1)

{
  FUN_00a57630(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a57c10 @ 00a57c10 ////

void __fastcall FUN_00a57c10(void *param_1)

{
  float *pfVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  float10 extraout_ST0;
  ulonglong uVar9;
  undefined4 local_28;
  undefined4 *local_24;
  void *local_20;
  undefined4 local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb2eb;
  local_c = ExceptionList;
  if (((*(void **)((int)param_1 + 0x414) != (void *)0x0) &&
      (ExceptionList = &local_c, iVar2 = FUN_0097e350(*(void **)((int)param_1 + 0x414),0),
      iVar2 != 0)) && ((*(byte *)(iVar2 + 0xe4) & 0x40) != 0)) {
    *(undefined1 *)((int)param_1 + 0x18) = 1;
    FUN_00a57540();
    iVar7 = *(int *)((int)param_1 + 0x454);
    puVar4 = (undefined4 *)(*(int *)((int)param_1 + 0x414) + 0x18);
    puVar6 = (undefined4 *)((int)param_1 + 0x420);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar5 = 0;
    if (iVar7 == 0) {
      *(undefined4 *)((int)param_1 + 0x418) = *(undefined4 *)(iVar2 + 0xd4);
      *(undefined4 *)((int)param_1 + 0x41c) = *(undefined4 *)(iVar2 + 0xd8);
      FUN_009840b0(&local_20,(undefined4 *)(iVar2 + 200));
      local_18 = local_20;
      local_14 = local_1c;
      local_10 = 0;
      FUN_00a14640((void *)((int)param_1 + 0x420),(float *)&local_18);
    }
    *(undefined4 *)((int)param_1 + 0x410) = 0;
    *(undefined4 *)((int)param_1 + 0x450) = 0;
    if (*(int *)((int)param_1 + 0x454) != 0) {
      local_20 = (void *)FUN_009f52d0(*(int *)((int)param_1 + 0x454));
    }
    uVar9 = FUN_00acd42c();
    iVar2 = (int)uVar9;
    *(int *)((int)param_1 + 0x1c) = iVar2;
    if (iVar2 < 0x801) {
      if (iVar2 < 100) {
        *(undefined4 *)((int)param_1 + 0x1c) = 100;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x1c) = 0x800;
    }
    pvVar3 = operator_new(0x6000);
    local_4 = 0;
    local_20 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar3,0xc,0x800,&LAB_00403370);
    }
    local_4 = 0xffffffff;
    *(void **)((int)param_1 + 0x20) = pvVar3;
    if (0 < *(int *)((int)param_1 + 0x1c)) {
      iVar2 = 0;
      do {
        puVar4 = (undefined4 *)FUN_00a57720(param_1,(float *)&local_18);
        puVar6 = (undefined4 *)(*(int *)((int)param_1 + 0x20) + iVar2);
        *puVar6 = *puVar4;
        puVar6[1] = puVar4[1];
        puVar6[2] = puVar4[2];
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar5 < *(int *)((int)param_1 + 0x1c));
    }
    puVar4 = FUN_0040a690(0xfa,'\x01');
    *(undefined4 **)((int)param_1 + 0x40c) = puVar4;
    *(byte *)(puVar4 + 9) = *(byte *)(puVar4 + 9) | 0x40;
    local_24 = (undefined4 *)((int)param_1 + 0x24);
    iVar2 = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x40c) + 0x18) = DAT_010b7044;
    local_28 = 0xffffff;
    iVar7 = 0;
    do {
      fVar8 = FUN_00990e30(0.2,0.5);
      *(float *)(iVar2 + DAT_010bb5b8) = (float)fVar8;
      puVar6 = (undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x40c) + 0x20) + iVar7);
      puVar4 = (undefined4 *)FUN_00a57720(param_1,(float *)&local_18);
      *puVar6 = *puVar4;
      puVar6[1] = puVar4[1];
      puVar6[2] = puVar4[2];
      local_20 = (void *)FUN_00990d30(0,500);
      *local_24 = local_20;
      uVar9 = FUN_00acd42c();
      iVar5 = (int)uVar9;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0xff < iVar5) {
        iVar5 = 0xff;
      }
      local_28 = CONCAT13((char)iVar5,(undefined3)local_28);
      puVar6[0xb] = local_28;
      pfVar1 = (float *)(iVar2 + DAT_010bb5b8);
      iVar7 = iVar7 + 0x34;
      local_24 = local_24 + 1;
      iVar2 = iVar2 + 4;
      puVar6[9] = (float)(extraout_ST0 * (float10)*pfVar1);
    } while (iVar7 < 13000);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a57ee0 @ 00a57ee0 ////

void __fastcall FUN_00a57ee0(int *param_1)

{
  if ((char)param_1[6] == '\0') {
    FUN_00a57c10(param_1);
    return;
  }
  if ((int *)param_1[0x103] != (int *)0x0) {
    FUN_00995ba0((int *)param_1[0x103]);
  }
  FUN_00999900(param_1,4);
  return;
}


//// FUNCTION FUN_00a57f10 @ 00a57f10 ////

undefined4 * __thiscall FUN_00a57f10(void *this,int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00999750(this);
  *(undefined ***)this = &PTR_FUN_00d793c8;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 *)((int)this + 0x440) = 0x3f800000;
  *(undefined4 *)((int)this + 0x430) = 0x3f800000;
  *(undefined4 *)((int)this + 0x420) = 0x3f800000;
  *(undefined4 *)((int)this + 0x418) = 0x41a00000;
  *(undefined4 *)((int)this + 0x41c) = 0x41a00000;
  *(undefined4 *)((int)this + 0x454) = param_2;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(int *)((int)this + 0x414) = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 0x10));
  }
  FUN_00a57c10(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a58000 @ 00a58000 ////

undefined4 * __fastcall FUN_00a58000(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x48002; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}


//// FUNCTION FUN_00a58020 @ 00a58020 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00a58020(void *this,undefined4 param_1,ushort param_2,float param_3,ushort param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar2 = (float *)((int)this + ((uint)param_3 & 0xffff) * 0xc + 8);
  pfVar3 = (float *)((int)this + (uint)param_4 * 0xc + 8);
  pfVar6 = (float *)((int)this + (uint)param_2 * 0xc + 8);
  if (*(int *)((int)this + (uint)param_2 * 4 + 0xc0008) == 0) {
    local_4 = 1.0 / ((1.0 - pfVar6[2]) / _DAT_0105c3f4);
    local_c = ((*pfVar6 - _DAT_0105c410) / _DAT_0105c410) * local_4;
    pfVar1 = pfVar6 + 1;
    pfVar6 = &local_c;
    local_8 = ((_DAT_0105c414 - *pfVar1) / _DAT_0105c414) * local_4;
  }
  switch(param_1) {
  case 1:
    param_3 = pfVar6[2] - DAT_0105c3e0;
    fVar4 = pfVar2[2] - DAT_0105c3e0;
    break;
  case 2:
    param_3 = DAT_0105c3e4 + pfVar6[2];
    fVar4 = DAT_0105c3e4 + pfVar2[2];
    break;
  default:
    fVar4 = param_3;
    break;
  case 4:
    param_3 = pfVar6[2] + pfVar6[1];
    fVar4 = pfVar2[2] + pfVar2[1];
    break;
  case 8:
    param_3 = pfVar6[2] - pfVar6[1];
    fVar4 = pfVar2[2] - pfVar2[1];
    break;
  case 0x10:
    param_3 = pfVar6[2] + *pfVar6;
    fVar4 = pfVar2[2] + *pfVar2;
    break;
  case 0x20:
    param_3 = pfVar6[2] - *pfVar6;
    fVar4 = pfVar2[2] - *pfVar2;
  }
  fVar4 = param_3 / (param_3 - fVar4);
  fVar5 = 1.0 - fVar4;
  *pfVar3 = fVar4 * *pfVar2 + fVar5 * *pfVar6;
  pfVar3[1] = fVar4 * pfVar2[1] + fVar5 * pfVar6[1];
  uVar7 = 0;
  fVar4 = fVar4 * pfVar2[2] + fVar5 * pfVar6[2];
  pfVar3[2] = fVar4;
  switch(param_1) {
  default:
    break;
  case 0x20:
    if (*pfVar3 < -fVar4) {
      uVar7 = 0x10;
    }
  case 0x10:
    if (fVar4 < pfVar3[1]) {
      uVar7 = uVar7 | 8;
    }
  case 8:
    if (pfVar3[1] < -fVar4) {
      uVar7 = uVar7 | 4;
    }
  case 4:
    if (DAT_0105c3e4 < fVar4) {
      uVar7 = uVar7 | 2;
    }
  case 2:
    if (fVar4 < DAT_0105c3e0) {
      uVar7 = uVar7 | 1;
    }
  }
  *(uint *)((int)this + (uint)param_4 * 4 + 0xc0008) = uVar7;
  if (uVar7 == 0) {
    fVar4 = pfVar3[2];
    pfVar3[2] = 1.0 / fVar4;
    *pfVar3 = ((1.0 / fVar4) * *pfVar3 + 1.0) * _DAT_0105c410;
    pfVar3[1] = _DAT_0105c414 - _DAT_0105c414 * pfVar3[2] * pfVar3[1];
    pfVar3[2] = 1.0 - _DAT_0105c3f4 * pfVar3[2];
  }
  return;
}


//// FUNCTION FUN_00a58290 @ 00a58290 ////

void __thiscall FUN_00a58290(void *this,float param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  float fVar9;
  ushort uVar10;
  ushort uVar11;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar5 = param_1;
  fVar6 = param_3;
  fVar7 = param_4;
  while( true ) {
    while( true ) {
      while( true ) {
        uVar10 = SUB42(fVar6,0);
        uVar11 = SUB42(fVar5,0);
        if (fVar7 == 0.0) {
          if (0x10000 < *(int *)this + 3) {
            return;
          }
          *(ushort *)((int)this + *(int *)this * 2 + 0x100008) = uVar11;
          iVar4 = *(int *)this;
          *(int *)this = iVar4 + 1;
          *(undefined2 *)((int)this + (iVar4 + 1) * 2 + 0x100008) = param_2._0_2_;
          iVar4 = *(int *)this;
          *(int *)this = iVar4 + 1;
          *(ushort *)((int)this + (iVar4 + 1) * 2 + 0x100008) = uVar10;
          *(int *)this = *(int *)this + 1;
          return;
        }
        uVar1 = *(uint *)((int)this + ((uint)fVar5 & 0xffff) * 4 + 0xc0008);
        fVar9 = (float)((int)fVar7 >> 1);
        if (((uint)fVar7 & uVar1) != 0) break;
        uVar2 = *(uint *)((int)this + ((uint)param_2 & 0xffff) * 4 + 0xc0008);
        if (((uint)fVar7 & uVar2) == 0) {
          uVar3 = *(uint *)((int)this + ((uint)fVar6 & 0xffff) * 4 + 0xc0008);
          if (((uint)fVar7 & uVar3) == 0) {
            fVar7 = fVar9;
            if ((uVar3 == 0 && uVar2 == 0) && uVar1 == 0) {
              FUN_009e6880(this,uVar11,param_2._0_2_,uVar10);
              return;
            }
          }
          else {
            FUN_009e68d0(this,(undefined2 *)&local_8,(undefined2 *)&local_4);
            FUN_00a58020(this,fVar7,uVar11,fVar6,SUB42(local_8,0));
            fVar8 = param_2;
            FUN_00a58020(this,fVar7,SUB42(param_2,0),fVar6,SUB42(local_4,0));
            fVar6 = local_8;
            FUN_00a58290(this_03,local_8,fVar5,fVar8,fVar9);
            fVar5 = fVar6;
            fVar6 = local_4;
            fVar7 = fVar9;
          }
        }
        else {
          FUN_009e68d0(this,(undefined2 *)&param_3,(undefined2 *)&local_14);
          if ((*(uint *)((int)this + ((uint)fVar6 & 0xffff) * 4 + 0xc0008) & (uint)fVar7) == 0) {
            FUN_00a58020(this,fVar7,uVar11,param_2,SUB42(param_3,0));
            FUN_00a58020(this,fVar7,uVar10,param_2,SUB42(local_14,0));
            FUN_00a58290(this_02,fVar5,param_3,fVar6,fVar9);
            fVar5 = param_3;
            param_2 = local_14;
            fVar7 = fVar9;
          }
          else {
            FUN_00a58020(this,fVar7,uVar11,param_2,SUB42(param_3,0));
            FUN_00a58020(this_01,fVar7,uVar11,fVar6,SUB42(local_14,0));
            param_2 = param_3;
            fVar6 = local_14;
            fVar7 = fVar9;
          }
        }
      }
      if ((*(uint *)((int)this + ((uint)param_2 & 0xffff) * 4 + 0xc0008) & (uint)fVar7) != 0) break;
      FUN_009e68d0(this,(undefined2 *)&param_1,(undefined2 *)&param_4);
      uVar11 = SUB42(param_2,0);
      if ((*(uint *)((int)this + ((uint)fVar6 & 0xffff) * 4 + 0xc0008) & (uint)fVar7) == 0) {
        FUN_00a58020(this,fVar7,uVar11,fVar5,SUB42(param_1,0));
        FUN_00a58020(this,fVar7,uVar10,fVar5,SUB42(param_4,0));
        fVar5 = param_1;
        FUN_00a58290(this_00,param_1,param_2,fVar6,fVar9);
        param_2 = fVar6;
        fVar6 = param_4;
        fVar7 = fVar9;
      }
      else {
        FUN_00a58020(this,fVar7,uVar11,fVar5,SUB42(param_1,0));
        FUN_00a58020(this,fVar7,uVar11,fVar6,SUB42(param_4,0));
        fVar5 = param_1;
        fVar6 = param_4;
        fVar7 = fVar9;
      }
    }
    if ((*(uint *)((int)this + ((uint)fVar6 & 0xffff) * 4 + 0xc0008) & (uint)fVar7) != 0) break;
    FUN_009e68d0(this,(undefined2 *)&local_10,(undefined2 *)&local_c);
    FUN_00a58020(this,fVar7,uVar10,fVar5,SUB42(local_10,0));
    FUN_00a58020(this,fVar7,uVar10,param_2,SUB42(local_c,0));
    fVar5 = fVar6;
    param_2 = local_10;
    fVar6 = local_c;
    fVar7 = fVar9;
  }
  return;
}


//// FUNCTION FUN_00a58580 @ 00a58580 ////

void __thiscall FUN_00a58580(void *this,char *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 *_Memory;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_50;
  ushort local_4c;
  undefined4 local_48 [2];
  char local_40 [20];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb328;
  pvStack_c = ExceptionList;
  uVar1 = *(int *)((int)this + 4) * *(int *)this * 4 + 0x2c;
  local_4c = CONCAT11((*(byte *)((int)this + 0xc) & 1) << 5,0x20) | 0x800;
  local_50 = CONCAT22(*(undefined2 *)((int)this + 4),*(undefined2 *)this);
  ExceptionList = &pvStack_c;
  _Memory = operator_new(uVar1);
  puVar6 = _Memory;
  for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *_Memory = 0x20000;
  _Memory[1] = 0;
  _Memory[2] = 0;
  _Memory[3] = local_50;
  *(ushort *)(_Memory + 4) = local_4c;
  local_48[0] = 0;
  local_48[1] = 0;
  local_40[0] = '\0';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_40[4] = '\0';
  local_40[5] = '\0';
  local_40[6] = '\0';
  local_40[7] = '\0';
  local_40[8] = '\0';
  local_40[9] = '\0';
  local_40[10] = '\0';
  local_40[0xb] = '\0';
  local_40[0xc] = '\0';
  local_40[0xd] = '\0';
  local_40[0xe] = '\0';
  local_40[0xf] = '\0';
  local_40[0x10] = '\0';
  local_40[0x11] = '\0';
  _sprintf(local_40,"TRUEVISION-XFILE.");
  puVar6 = *(undefined4 **)((int)this + 8);
  puVar7 = (undefined4 *)((int)_Memory + 0x12);
  for (uVar4 = *(int *)((int)this + 4) * *(int *)this & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  puVar6 = local_48;
  puVar7 = (undefined4 *)((int)_Memory + 0x12) + *(int *)((int)this + 4) * *(int *)this;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  FUN_004015d0(&local_2c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_009d4370(&local_2c,_Memory,uVar1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a58720 @ 00a58720 ////

int * __thiscall FUN_00a58720(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  void *_Memory;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb353;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != (char *)0x0) {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_2c,param_1,(int)pcVar2 - (int)(param_1 + 1));
    local_4 = 0;
    uVar3 = FUN_009d3720(&local_2c);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (uVar3 != 0) {
      _Memory = operator_new(uVar3);
      if ((int)uVar3 <
          (int)*(short *)((int)_Memory + 0xe) * (int)*(short *)((int)_Memory + 0xc) * 4 + 0x12) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(int *)this = (int)*(short *)((int)_Memory + 0xc);
      iVar5 = *(int *)this * (int)*(short *)((int)_Memory + 0xe);
      *(int *)((int)this + 4) = (int)*(short *)((int)_Memory + 0xe);
      puVar4 = operator_new(iVar5 * 4);
      local_4 = 1;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        FUN_00401380(puVar4,4,iVar5,&LAB_0041e790);
      }
      *(undefined4 **)((int)this + 8) = puVar4;
      puVar6 = (undefined4 *)((int)_Memory + 0x12);
      for (uVar3 = *(int *)((int)this + 4) * *(int *)this & 0x3fffffff; uVar3 != 0;
          uVar3 = uVar3 - 1) {
        *puVar4 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a588d0 @ 00a588d0 ////

void __fastcall FUN_00a588d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00a58910 @ 00a58910 ////

int __thiscall FUN_00a58910(void *this,ushort *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((int)this + 0x10c) + -1;
  iVar4 = 0;
  if (-1 < iVar3) {
    while( true ) {
      iVar1 = (iVar4 + iVar3) / 2;
      uVar2 = (uint)*(ushort *)(iVar1 * 0x1c + *(int *)((int)this + 0x110));
      if (uVar2 == *param_1) break;
      if ((int)(uVar2 - *param_1) < 0) {
        iVar4 = iVar1 + 1;
      }
      else {
        iVar3 = iVar1 + -1;
      }
      if (iVar3 < iVar4) {
        return -1;
      }
    }
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  return -1;
}


//// FUNCTION FUN_00a58970 @ 00a58970 ////

void __fastcall FUN_00a58970(int param_1)

{
  if (*(void **)(param_1 + 0x110) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x110));
  }
  if (*(FILE **)(param_1 + 0x114) != (FILE *)0x0) {
    _fclose(*(FILE **)(param_1 + 0x114));
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  return;
}


//// FUNCTION FUN_00a589b0 @ 00a589b0 ////

void __fastcall FUN_00a589b0(int *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (*(char *)((int)param_1 + 5) != '\0') {
    do {
      iVar3 = (uint)bVar4 * 4;
      **(undefined2 **)(iVar3 + *param_1) = 0;
      pbVar1 = (byte *)(*(int *)(iVar3 + *param_1) + 0xe);
      *pbVar1 = *pbVar1 & 0xfb;
      puVar2 = (uint *)(*(int *)(iVar3 + *param_1) + 0xc);
      *puVar2 = *puVar2 & 0xfff7ffff;
      bVar4 = bVar4 + 1;
    } while (bVar4 < *(byte *)((int)param_1 + 5));
  }
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  return;
}


//// FUNCTION FUN_00a58a30 @ 00a58a30 ////

void __fastcall FUN_00a58a30(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00a58ab0 @ 00a58ab0 ////

void __fastcall FUN_00a58ab0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(byte *)(param_1 + 4) & 0x7f) != 0) {
    do {
      FUN_00a589b0((int *)(*(int *)(param_1 + 0x1c) + iVar1 * 8));
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(*(byte *)(param_1 + 4) & 0x7f));
  }
  return;
}


//// FUNCTION FUN_00a58ae0 @ 00a58ae0 ////

void __fastcall FUN_00a58ae0(int param_1)

{
  if ((*(byte *)(param_1 + 5) & 0x80) == 0) {
    MediaPlayer_LockVideoBuffer(*(void **)(param_1 + 0x18),param_1 + 0x10);
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
  }
  return;
}


//// FUNCTION FUN_00a58b00 @ 00a58b00 ////

void __fastcall FUN_00a58b00(int param_1)

{
  if ((*(byte *)(param_1 + 5) & 0x80) != 0) {
    MediaPlayer_UnlockVideoBuffer(*(int *)(param_1 + 0x18));
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x7f;
  }
  return;
}


//// FUNCTION FUN_00a58b20 @ 00a58b20 ////

void __cdecl FUN_00a58b20(ushort *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar4 = 0;
  bVar1 = false;
  if (0 < param_3) {
    do {
      uVar5 = (uint)(byte)*param_1;
      puVar2 = (ushort *)((int)param_1 + 1);
      if (uVar5 == 0xff) {
        uVar5 = (uint)*(ushort *)((int)param_1 + 1);
        puVar2 = (ushort *)((int)param_1 + 3);
      }
      param_1 = puVar2;
      if (param_3 < (int)(uVar5 + iVar4)) {
        uVar5 = param_3 - iVar4;
      }
      iVar4 = iVar4 + uVar5;
      if (uVar5 != 0) {
        puVar6 = param_2;
        for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
          puVar6 = puVar6 + 1;
        }
        for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(bool *)puVar6 = bVar1;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        param_2 = (undefined4 *)((int)param_2 + uVar5);
      }
      bVar1 = !bVar1;
    } while (iVar4 < param_3);
  }
  return;
}


//// FUNCTION FUN_00a58bc0 @ 00a58bc0 ////

void __cdecl FUN_00a58bc0(int param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  
  iVar1 = param_5;
  if ((*(ushort *)(param_5 + 4) & 0x8000) == 0) {
    MediaPlayer_LockVideoBuffer(*(void **)(param_5 + 0x18),param_5 + 0x10);
    *(ushort *)(param_5 + 4) = *(ushort *)(param_5 + 4) | 0x8000;
  }
  iVar2 = *(int *)(param_5 + 0x10) / 2;
  if ((*(byte *)(param_5 + 5) & 0x40) == 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    iVar5 = (*(uint *)(param_1 + 8) >> 8 & 0xf) * iVar2 * 0x29;
  }
  else {
    iVar5 = (*(uint *)(param_1 + 8) >> 0xc & 0xf) * iVar2 * 0x15;
    uVar3 = *(uint *)(param_1 + 0xc) >> 9;
  }
  puVar4 = (ushort *)(*(int *)(param_5 + 0x14) + (iVar5 + (uVar3 & 0x1ff)) * 2);
  if (0 < param_4) {
    param_5 = param_4;
    do {
      *puVar4 = 0xfff;
      puVar4 = puVar4 + 1;
      iVar5 = param_3;
      if (0 < param_3) {
        do {
          if (*(int *)(*(int *)(param_1 + 4) + 0x130) == 1) {
            *puVar4 = (ushort)(*param_2 >> 4) << 0xc | 0xfff;
          }
          else if (*param_2 == 0) {
            *puVar4 = 0xfff;
          }
          else {
            *puVar4 = 0xffff;
          }
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *puVar4 = 0xfff;
      puVar4 = puVar4 + (iVar2 - param_3) + -1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if ((*(byte *)(iVar1 + 5) & 0x80) != 0) {
    MediaPlayer_UnlockVideoBuffer(*(int *)(iVar1 + 0x18));
    *(byte *)(iVar1 + 5) = *(byte *)(iVar1 + 5) & 0x7f;
  }
  return;
}


//// FUNCTION FUN_00a58cd0 @ 00a58cd0 ////

void __cdecl FUN_00a58cd0(int param_1,ushort *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = param_3;
  if ((*(ushort *)(param_5 + 4) & 0x8000) == 0) {
    MediaPlayer_LockVideoBuffer(*(void **)(param_5 + 0x18),param_5 + 0x10);
    *(ushort *)(param_5 + 4) = *(ushort *)(param_5 + 4) | 0x8000;
  }
  iVar8 = param_3 / 2;
  iVar1 = param_3 * 2;
  iVar4 = *(int *)(param_5 + 0x10) / 2;
  puVar5 = (ushort *)
           (*(int *)(param_5 + 0x14) +
           ((*(uint *)(param_1 + 8) >> 0xc & 0xf) * iVar4 * 0x15 +
           (*(uint *)(param_1 + 0xc) >> 9 & 0x1ff)) * 2);
  param_3 = param_4 / 2;
  if (0 < param_3) {
    do {
      *puVar5 = 0xfff;
      puVar5 = puVar5 + 1;
      puVar3 = param_2;
      puVar6 = puVar5;
      iVar7 = iVar8;
      if (0 < iVar8) {
        do {
          puVar6 = puVar5 + 1;
          puVar3 = param_2 + 2;
          iVar7 = iVar7 + -1;
          *puVar5 = ((param_2[iVar2 + 1] >> 0xc) + (param_2[iVar2] >> 0xc) + (param_2[1] >> 0xc) +
                    (*param_2 >> 0xc)) * 0x400 | 0xfff;
          param_2 = puVar3;
          puVar5 = puVar6;
        } while (iVar7 != 0);
      }
      *puVar6 = 0xfff;
      puVar5 = puVar6 + (iVar4 - iVar8) + -1;
      param_2 = puVar3 + iVar1 + iVar8 * -2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if ((*(byte *)(param_5 + 5) & 0x80) != 0) {
    MediaPlayer_UnlockVideoBuffer(*(int *)(param_5 + 0x18));
    *(byte *)(param_5 + 5) = *(byte *)(param_5 + 5) & 0x7f;
  }
  return;
}


//// FUNCTION FUN_00a58e50 @ 00a58e50 ////

ushort * __cdecl FUN_00a58e50(ushort param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  ushort uVar5;
  
  uVar2 = param_1 << 5 | param_1 >> 0xb;
  uVar5 = param_1 ^ uVar2;
  bVar1 = (byte)(uVar5 >> 8);
  uVar2 = ~uVar2 ^ (CONCAT11(bVar1,(byte)uVar5 ^ *(byte *)(param_2 + 0x24)) << 3 |
                   (ushort)(bVar1 >> 5));
  uVar5 = ~uVar2;
  puVar3 = &DAT_010c16c8 +
           (CONCAT11((char)(uVar5 >> 8),(&DAT_010c96c8)[(ushort)(uVar2 >> 0xb ^ uVar5) & 0xff]) &
           0xffff07ff) * 8;
  iVar4 = 0;
  do {
    if ((*puVar3 == param_1) && (*(int *)(puVar3 + 2) == param_2)) {
      return puVar3;
    }
    puVar3 = puVar3 + 8;
    if ((ushort *)0x10c96c7 < puVar3) {
      puVar3 = &DAT_010c16c8;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x800);
  return (ushort *)0x0;
}


//// FUNCTION FUN_00a58ee0 @ 00a58ee0 ////

undefined4 * __thiscall FUN_00a58ee0(void *this,byte param_1)

{
  FUN_00aaa230(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a58f00 @ 00a58f00 ////

void * __thiscall FUN_00a58f00(void *this,byte param_1)

{
  FUN_00aaa8c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a58f20 @ 00a58f20 ////

undefined4 __cdecl FUN_00a58f20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = DAT_010c97d8;
  if (DAT_010c97d8 == param_1) {
    puVar1 = (undefined4 *)(DAT_010c97d8 + 0x158);
    DAT_010c97d8 = *puVar1;
    DAT_010c97e0 = DAT_010c97e0 + -1;
    return CONCAT31((int3)((uint)*puVar1 >> 8),1);
  }
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 == param_1) break;
    iVar3 = iVar2;
    iVar2 = *(int *)(iVar2 + 0x158);
  }
  *(undefined4 *)(iVar3 + 0x158) = *(undefined4 *)(iVar2 + 0x158);
  DAT_010c97e0 = DAT_010c97e0 + -1;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_00a58fa0 @ 00a58fa0 ////

undefined4 FUN_00a58fa0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar1 = FUN_00a3ac00(*(int **)(param_1 + 4),param_1 + 0x20);
  *(int *)(param_1 + 0x24) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_00a58ff0 @ 00a58ff0 ////

void __fastcall
FUN_00a58ff0(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

{
  float *unaff_EBX;
  float *unaff_ESI;
  float *unaff_EDI;
  
  if (*param_3 < DAT_0105cb50) {
    *unaff_EDI = (*unaff_ESI - *unaff_EDI) * ((DAT_0105cb50 - *param_3) / (*param_2 - *param_3)) +
                 *unaff_EDI;
    *param_3 = DAT_0105cb50;
  }
  if (DAT_0105cb58 < *param_2) {
    *unaff_ESI = (*unaff_EDI - *unaff_ESI) * ((DAT_0105cb58 - *param_2) / (*param_3 - *param_2)) +
                 *unaff_ESI;
    *param_2 = DAT_0105cb58;
  }
  if (*param_4 < DAT_0105cb5c) {
    *param_5 = (*param_6 - *param_5) * ((DAT_0105cb5c - *param_4) / (*unaff_EBX - *param_4)) +
               *param_5;
    *param_4 = DAT_0105cb5c;
  }
  if (DAT_0105cb54 < *unaff_EBX) {
    *param_6 = (*param_5 - *param_6) * ((DAT_0105cb54 - *unaff_EBX) / (*param_4 - *unaff_EBX)) +
               *param_6;
    *unaff_EBX = DAT_0105cb54;
  }
  return;
}


//// FUNCTION FUN_00a590d0 @ 00a590d0 ////

void FUN_00a590d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_010bb5c8;
  while( true ) {
    if (*piVar1 == param_2) {
      *(int *)(param_1 + 0x14) = piVar1[3];
      piVar1[3] = param_1;
      piVar1[1] = piVar1[1] + 1;
      return;
    }
    iVar2 = iVar2 + 1;
    if (*piVar1 == 0) break;
    piVar1 = piVar1 + 4;
    if (0x10bb6c7 < (int)piVar1) {
      return;
    }
  }
  DAT_010c97d4 = iVar2;
  *(int *)(param_1 + 0x14) = piVar1[3];
  piVar1[3] = param_1;
  *piVar1 = param_2;
  piVar1[1] = piVar1[1] + 1;
  return;
}


//// FUNCTION FUN_00a59140 @ 00a59140 ////

void FUN_00a59140(void)

{
  return;
}


//// FUNCTION FUN_00a59200 @ 00a59200 ////

/* WARNING: Removing unreachable block (ram,0x00a5924e) */

void __thiscall FUN_00a59200(void *this,undefined2 param_1,ushort param_2,char param_3)

{
  float fVar1;
  ushort uVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint *puVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb36b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined2 *)this = param_1;
  *(ushort *)((int)this + 2) = param_2;
  uVar9 = *(uint *)this;
  DAT_010c97f4 = DAT_010c97f4 + 1;
  uVar2 = (ushort)(param_3 != '\0') << 0xe;
  *(ushort *)((int)this + 4) = uVar2 | *(ushort *)((int)this + 4) & 0x3fff;
  *(float *)((int)this + 0xc) = 0.5 / (float)(uVar9 & 0xffff);
  fVar1 = (float)param_2;
  if (param_3 != '\0') {
    fVar1 = 21.0 / fVar1;
    uVar6 = (ushort)((uVar9 >> 3 & 0x7f) << 7) | param_2 / 0x15 & 0x7f;
  }
  else {
    fVar1 = 41.0 / fVar1;
    uVar6 = (ushort)((uVar9 >> 4 & 0x7f) << 7) | param_2 / 0x29 & 0x7f;
  }
  *(float *)((int)this + 8) = fVar1;
  *(ushort *)((int)this + 4) = uVar6 | uVar2;
  pvVar3 = FUN_0099bb50("Font Cache Page",0x1a,uVar9 & 0xffff,(uint)param_2,'\0');
  *(void **)((int)this + 0x18) = pvVar3;
  uVar4 = MediaPlayer_LockVideoBuffer(pvVar3,(int *)((int)this + 0x10));
  if ((char)uVar4 != '\0') {
    iVar13 = *(int *)((int)this + 0x10);
    puVar12 = *(undefined4 **)((int)this + 0x14);
    iVar10 = 0;
    if (*(short *)((int)this + 2) != 0) {
      do {
        uVar9 = *(uint *)this;
        puVar14 = puVar12;
        for (uVar7 = (uVar9 & 0xffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        for (iVar8 = (uVar9 & 1) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined1 *)puVar14 = 0;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        iVar10 = iVar10 + 1;
        puVar12 = (undefined4 *)((int)puVar12 + iVar13);
      } while (iVar10 < (int)(uint)*(ushort *)((int)this + 2));
    }
    MediaPlayer_UnlockVideoBuffer(*(int *)((int)this + 0x18));
  }
  uVar9 = *(byte *)((int)this + 4) & 0x7f;
  puVar5 = operator_new(uVar9 * 8 + 4);
  iVar13 = 0;
  local_4 = 0;
  if (puVar5 == (uint *)0x0) {
    puVar11 = (uint *)0x0;
  }
  else {
    puVar11 = puVar5 + 1;
    *puVar5 = uVar9;
    _eh_vector_constructor_iterator_(puVar11,8,uVar9,FUN_00a588d0,FUN_00a58a30);
  }
  local_4 = 0xffffffff;
  *(uint **)((int)this + 0x1c) = puVar11;
  if ((*(byte *)((int)this + 4) & 0x7f) != 0) {
    do {
      puVar12 = (undefined4 *)(*(int *)((int)this + 0x1c) + iVar13 * 8);
      uVar9 = (*(ushort *)((int)this + 4) & 0x3f80) >> 7;
      *(char *)(puVar12 + 1) = (char)uVar9;
      *(undefined2 *)((int)puVar12 + 6) = 0;
      *(undefined1 *)((int)puVar12 + 5) = 0;
      pvVar3 = operator_new(uVar9 * 4);
      *puVar12 = pvVar3;
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)(*(byte *)((int)this + 4) & 0x7f));
  }
  iVar13 = 0;
  if ((*(byte *)((int)this + 4) & 0x7f) != 0) {
    do {
      FUN_00a589b0((int *)(*(int *)((int)this + 0x1c) + iVar13 * 8));
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)(*(byte *)((int)this + 4) & 0x7f));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a59430 @ 00a59430 ////

void __fastcall FUN_00a59430(int param_1)

{
  void *pvVar1;
  
  if ((*(byte *)(param_1 + 5) & 0x80) != 0) {
    MediaPlayer_UnlockVideoBuffer(*(int *)(param_1 + 0x18));
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x7f;
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    FUN_0099b400(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x1c);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),FUN_00a58a30);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_00a59490 @ 00a59490 ////

uint __cdecl FUN_00a59490(uint param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ushort *_DstBuf;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x13c) == 0) {
    return param_1 & 0xffffff00;
  }
  iVar5 = (uint)*(ushort *)(param_1 + 2) * 0x1c;
  iVar6 = iVar5 + *(int *)(iVar1 + 0x138);
  uVar7 = (uint)*(ushort *)(iVar6 + 2);
  iVar4 = *(int *)(iVar1 + 0x28) * uVar7;
  _DstBuf = operator_new(*(int *)(iVar5 + 0x18 + *(int *)(iVar1 + 0x138)) << 1);
  _fseek(*(FILE **)(iVar1 + 0x13c),*(long *)(iVar6 + 0x14),0);
  _fread(_DstBuf,1,*(size_t *)(iVar6 + 0x18),*(FILE **)(iVar1 + 0x13c));
  if (*(int *)(iVar1 + 0x130) == 0) {
    uVar7 = iVar4 + uVar7 * 2;
    uVar8 = uVar7 * 2;
    puVar3 = operator_new(uVar8);
    puVar9 = puVar3;
    for (uVar7 = (uVar7 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    FUN_00a58b20(_DstBuf,puVar3,iVar4);
                    /* WARNING: Subroutine does not return */
    _free(_DstBuf);
  }
  *param_2 = _DstBuf;
  *param_3 = uVar7;
  uVar2 = *(undefined4 *)(iVar1 + 0x2c);
  *param_4 = uVar2;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00a59570 @ 00a59570 ////

void FUN_00a59570(int param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  ushort *_Memory;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  int local_10;
  
  if (*(char *)(*(int *)(param_1 + 4) + 0x155) != '\0') {
    FUN_00a58bc0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  iVar1 = param_3 / 2 + 2;
  uVar5 = iVar1 * param_4 * 2;
  _Memory = operator_new(uVar5);
  puVar7 = _Memory;
  for (uVar4 = (iVar1 * param_4 & 0x7fffffffU) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar7[0] = 0;
    puVar7[1] = 0;
    puVar7 = puVar7 + 2;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (ushort *)((int)puVar7 + 1);
  }
  if (0 < param_4) {
    local_10 = param_4;
    puVar7 = _Memory;
    do {
      *puVar7 = 0xfff;
      puVar7 = puVar7 + 1;
      if (0 < param_3) {
        pbVar2 = param_2 + param_3;
        iVar6 = (param_3 - 1U >> 1) + 1;
        do {
          *puVar7 = *(ushort *)
                     (&DAT_00d79414 +
                     ((uint)pbVar2[1 - param_3] + (uint)pbVar2[1] + (uint)*param_2 + (uint)*pbVar2)
                     * 2);
          puVar7 = puVar7 + 1;
          param_2 = param_2 + 2;
          pbVar2 = pbVar2 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *puVar7 = 0xfff;
      puVar7 = puVar7 + 1;
      param_2 = param_2 + param_3;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if ((*(ushort *)(param_5 + 4) & 0x4000) != 0) {
    FUN_00a58cd0(param_1,_Memory,iVar1,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (-1 < (short)*(ushort *)(param_5 + 4)) {
    MediaPlayer_LockVideoBuffer(*(void **)(param_5 + 0x18),param_5 + 0x10);
    *(byte *)(param_5 + 5) = *(byte *)(param_5 + 5) | 0x80;
  }
  iVar6 = *(int *)(param_5 + 0x10) / 2;
  puVar7 = (ushort *)
           (*(int *)(param_5 + 0x14) +
           ((*(uint *)(param_1 + 8) >> 8 & 0xf) * iVar6 * 0x29 + (*(uint *)(param_1 + 0xc) & 0x1ff))
           * 2);
  puVar8 = _Memory;
  if (0 < param_4) {
    do {
      iVar3 = iVar1;
      if (0 < iVar1) {
        do {
          *puVar7 = *puVar8;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      puVar7 = puVar7 + (iVar6 - param_3 / 2) + -2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((*(byte *)(param_5 + 5) & 0x80) != 0) {
    MediaPlayer_UnlockVideoBuffer(*(int *)(param_5 + 0x18));
    *(byte *)(param_5 + 5) = *(byte *)(param_5 + 5) & 0x7f;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a59730 @ 00a59730 ////

void __fastcall FUN_00a59730(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *_Memory_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb388;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00a58f20((int)param_1);
  FUN_00aaa350((void *)param_1[0x54],(int)param_1);
  if (*(char *)(param_1 + 0x55) == '\0') {
    _Memory = (undefined4 *)param_1[0x54];
    if (_Memory != (undefined4 *)0x0) {
      FUN_00aaa230(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    param_1[0x54] = 0;
  }
  _Memory_00 = (void *)param_1[0x53];
  if (_Memory_00 != (void *)0x0) {
    FUN_00aaa8c0();
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  param_1[0x53] = 0;
  if ((void *)param_1[0x4e] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x4e]);
  }
  if ((FILE *)param_1[0x4f] != (FILE *)0x0) {
    _fclose((FILE *)param_1[0x4f]);
    param_1[0x4f] = 0;
  }
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a59810 @ 00a59810 ////

undefined4 * __cdecl FUN_00a59810(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_010c97d8;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar2 = __stricmp((char *)*puVar1,param_1);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)puVar1[0x56];
  }
  return puVar1;
}


//// FUNCTION FUN_00a598e0 @ 00a598e0 ////

void FUN_00a598e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iStack_18;
  
  iStack_18 = 0xa598eb;
  FUN_00a3a4e0();
  iStack_18 = *(int *)(param_1 + 0x30);
  (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice);
  if (DAT_010bb230 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(DAT_010bb230 + 4);
  }
  (**(code **)(*g_pDirect3DDevice + 400))
            (g_pDirect3DDevice,0,uVar2,0,*(undefined4 *)(param_1 + 0x34));
  iVar4 = 0;
  iVar5 = 0;
  if (0 < DAT_010c97d4) {
    piVar3 = &DAT_010bb5d0;
    do {
      iVar1 = piVar3[-2];
      if ((*(byte *)(iVar1 + 5) & 0x80) != 0) {
        MediaPlayer_UnlockVideoBuffer(*(int *)(iVar1 + 0x18));
        *(byte *)(iVar1 + 5) = *(byte *)(iVar1 + 5) & 0x7f;
      }
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        iStack_18 = 0;
        uVar2 = FUN_00a51110((iVar1 * 2) / 2,&iStack_18);
        if ((char)uVar2 != '\0') {
          if (DAT_010c97e4[6] != *(int *)(piVar3[-2] + 0x18)) {
            Engine_SetResourceReference(DAT_010c97e4,*(int *)(piVar3[-2] + 0x18));
          }
          *DAT_010c97e4 = *(int *)(param_1 + 0x2c);
          LH_ApplyMeshMaterial(DAT_010c97e4);
          (**(code **)(*g_pDirect3DDevice + 0x148))
                    (g_pDirect3DDevice,4,*(int *)(param_1 + 0x20) + iVar4,0,iVar1 * 4,iStack_18,
                     iVar1 * 2);
          iVar4 = iVar4 + iVar1 * 4;
        }
      }
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar5 < DAT_010c97d4);
  }
  return;
}


//// FUNCTION FUN_00a59a10 @ 00a59a10 ////

/* WARNING: Removing unreachable block (ram,0x00a59cd7) */
/* WARNING: Removing unreachable block (ram,0x00a59bce) */
/* WARNING: Removing unreachable block (ram,0x00a59b8d) */
/* WARNING: Removing unreachable block (ram,0x00a59bac) */
/* WARNING: Removing unreachable block (ram,0x00a59c42) */
/* WARNING: Removing unreachable block (ram,0x00a59c20) */
/* WARNING: Removing unreachable block (ram,0x00a59c64) */
/* WARNING: Removing unreachable block (ram,0x00a59b39) */
/* WARNING: Removing unreachable block (ram,0x00a59cb8) */
/* WARNING: Removing unreachable block (ram,0x00a59cf9) */
/* WARNING: Removing unreachable block (ram,0x00a59b5b) */

undefined4 __thiscall FUN_00a59a10(void *this,int param_1,float param_2,uint *param_3)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  uint *puVar4;
  float fVar5;
  bool bVar6;
  float fVar7;
  uint *puVar8;
  undefined2 uVar12;
  undefined4 uVar9;
  float *pfVar10;
  int iVar11;
  uint uVar13;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  uint local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  puVar8 = param_3;
  fVar7 = param_2;
  local_38 = *(float *)(param_1 + 0xc);
  fVar1 = *(float *)(param_1 + 0x10);
  fVar3 = (float)*(ushort *)(*(int *)(param_1 + 8) + 2);
  local_1c = *(uint *)((int)param_2 + 0x1c);
  bVar6 = false;
  local_34 = fVar3 * *(float *)((int)param_2 + 0x14) + *(float *)(param_1 + 0xc) + 1.5;
  local_30 = ((float)*(int *)((int)param_2 + 8) + *(float *)(param_1 + 0x10)) - 1.0;
  if (((local_1c & 2) != 0) &&
     ((((uVar12 = (undefined2)(local_1c >> 0x10), local_38 < DAT_0105cb50 ||
        (DAT_0105cb58 <= local_34)) || (fVar1 < DAT_0105cb5c)) || (DAT_0105cb54 <= local_30)))) {
    bVar6 = true;
    uVar9 = CONCAT22(uVar12,(ushort)(local_38 < DAT_0105cb58) << 8 |
                            (ushort)(NAN(local_38) || NAN(DAT_0105cb58)) << 10 |
                            (ushort)(local_38 == DAT_0105cb58) << 0xe);
    if (((local_38 >= DAT_0105cb58) ||
        (uVar9 = CONCAT22(uVar12,(ushort)(local_34 < DAT_0105cb50) << 8 |
                                 (ushort)(NAN(local_34) || NAN(DAT_0105cb50)) << 10 |
                                 (ushort)(local_34 == DAT_0105cb50) << 0xe),
        local_34 < DAT_0105cb50 != (local_34 == DAT_0105cb50))) ||
       ((uVar9 = CONCAT22(uVar12,(ushort)(fVar1 < DAT_0105cb54) << 8 |
                                 (ushort)(NAN(fVar1) || NAN(DAT_0105cb54)) << 10 |
                                 (ushort)(fVar1 == DAT_0105cb54) << 0xe), fVar1 >= DAT_0105cb54 ||
        (uVar9 = CONCAT22(uVar12,(ushort)(local_30 < DAT_0105cb5c) << 8 |
                                 (ushort)(NAN(local_30) || NAN(DAT_0105cb5c)) << 10 |
                                 (ushort)(local_30 == DAT_0105cb5c) << 0xe),
        local_30 < DAT_0105cb5c != (local_30 == DAT_0105cb5c))))) {
      return uVar9;
    }
  }
  iVar11 = *(int *)(param_1 + 4);
  if (*(char *)((int)this + 0x155) == '\0') {
    if (*(char *)((int)param_2 + 0x10) == '\0') {
      fVar5 = (float)(*param_3 & 0xffff);
      local_20 = (float)(*(uint *)(iVar11 + 0xc) & 0x1ff) / fVar5 + (float)param_3[3];
      local_2c = (float)(*(uint *)(iVar11 + 8) >> 8 & 0xf) * (float)param_3[2] + (float)param_3[3];
      fVar3 = (fVar3 + 2.0) / (fVar5 + fVar5);
      fVar5 = (float)*(int *)((int)param_2 + 0xc) / (float)*(ushort *)((int)param_3 + 2);
    }
    else {
      fVar5 = (float)(*param_3 & 0xffff);
      local_20 = (float)(*(uint *)(iVar11 + 0xc) >> 9 & 0x1ff) / fVar5 + (float)param_3[3];
      local_2c = (float)(*(uint *)(iVar11 + 8) >> 0xc & 0xf) * (float)param_3[2] + (float)param_3[3]
      ;
      fVar3 = (fVar3 * 0.5 + 2.0) / (fVar5 + fVar5);
      fVar5 = ((float)*(int *)((int)param_2 + 0xc) / (float)*(ushort *)((int)param_3 + 2)) * 0.5;
    }
  }
  else {
    if (*(char *)((int)param_2 + 0x10) == '\0') {
      puVar4 = (uint *)(float)(*param_3 & 0xffff);
      uVar13 = *(uint *)(iVar11 + 8) >> 8;
      local_20 = (float)(*(uint *)(iVar11 + 0xc) & 0x1ff) / (float)puVar4 + (float)param_3[3];
      param_3 = puVar4;
    }
    else {
      puVar4 = (uint *)(float)(*param_3 & 0xffff);
      uVar13 = *(uint *)(iVar11 + 8) >> 0xc;
      local_20 = (float)(*(uint *)(iVar11 + 0xc) >> 9 & 0x1ff) / (float)puVar4 + (float)param_3[3];
      param_3 = puVar4;
    }
    local_2c = (float)(uVar13 & 0xf) * (float)puVar8[2] + (float)puVar8[3];
    fVar3 = (fVar3 + 2.0) / (float)param_3;
    fVar5 = (float)*(int *)((int)param_2 + 0xc) / (float)*(ushort *)((int)puVar8 + 2);
  }
  local_24 = local_2c;
  param_3 = (uint *)(fVar3 + local_20);
  local_28 = (fVar5 - ((float)puVar8[3] + (float)puVar8[3])) + local_2c;
  if ((local_1c & 1) == 0) {
    param_2 = fVar1;
    if (DAT_0105cb28 != '\0') {
      local_10 = 0;
      local_4 = 0;
      local_18 = local_38;
      local_14 = fVar1;
      local_c = local_34;
      local_8 = local_30;
      FUN_0040b490(&DAT_00e67bac,&local_18);
      FUN_0040b490(&DAT_00e67bac,&local_c);
      local_38 = local_18;
      param_2 = local_14;
      local_34 = local_c;
      local_30 = local_8;
    }
    if (bVar6) {
      FUN_00a58ff0(&local_38,&local_34,&local_38,&param_2,&local_24,&local_28);
    }
    pfVar2 = *(float **)((int)fVar7 + 0x28);
    *pfVar2 = local_34;
    pfVar2[4] = (float)param_3;
    pfVar2[5] = local_24;
    pfVar2[1] = param_2;
    pfVar2[2] = 0.0;
    pfVar2[3] = 1.0;
    pfVar2[6] = local_38;
    pfVar2[7] = param_2;
    pfVar2[10] = local_20;
    pfVar2[0xb] = local_24;
    pfVar2[9] = 1.0;
    pfVar2[8] = 0.0;
    pfVar2[0xc] = local_38;
    pfVar2[0xd] = local_30;
    pfVar2[0x10] = local_20;
    pfVar2[0x11] = local_28;
    pfVar2[0xf] = 1.0;
    pfVar2[0xe] = 0.0;
    pfVar10 = pfVar2 + 0x12;
    *pfVar10 = local_34;
    pfVar2[0x13] = local_30;
    pfVar2[0x15] = 1.0;
    pfVar2[0x16] = (float)param_3;
    pfVar2[0x17] = local_28;
  }
  else {
    pfVar2 = *(float **)((int)param_2 + 0x28);
    *pfVar2 = local_34;
    pfVar2[1] = fVar1;
    pfVar2[3] = (float)param_3;
    pfVar2[4] = local_28;
    pfVar2[2] = 0.0;
    pfVar2[8] = local_20;
    pfVar2[5] = local_38;
    pfVar2[6] = fVar1;
    pfVar2[9] = local_28;
    pfVar2[7] = 0.0;
    pfVar2[0xd] = local_20;
    pfVar2[10] = local_38;
    pfVar2[0xb] = local_30;
    pfVar2[0xe] = local_2c;
    pfVar2[0xc] = 0.0;
    pfVar10 = pfVar2 + 0xf;
    *pfVar10 = local_34;
    pfVar2[0x10] = local_30;
    pfVar2[0x12] = (float)param_3;
    pfVar2[0x13] = local_2c;
  }
  pfVar10[2] = 0.0;
  iVar11 = *(int *)((int)fVar7 + 0x34) * 4;
  *(int *)((int)fVar7 + 0x28) = *(int *)((int)fVar7 + 0x28) + iVar11;
  return CONCAT31((int3)((uint)iVar11 >> 8),1);
}


//// FUNCTION FUN_00a5a000 @ 00a5a000 ////

void __cdecl FUN_00a5a000(short *param_1,int param_2)

{
  short *psVar1;
  byte *_Memory;
  uint uVar2;
  uint local_8;
  byte *local_4;
  
  psVar1 = param_1;
  if (*param_1 != 0) {
    local_8 = 0xffffffff;
    param_1 = (short *)0xffffffff;
    local_4 = (byte *)0x0;
    uVar2 = FUN_00a59490((uint)psVar1,&local_4,&local_8,&param_1);
    _Memory = local_4;
    if ((char)uVar2 != '\0') {
      FUN_00a59570((int)psVar1,local_4,local_8,(int)param_1,param_2);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return;
}


//// FUNCTION FUN_00a5a070 @ 00a5a070 ////

void FUN_00a5a070(void)

{
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = &DAT_010c16c8;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 8;
  } while ((int)puVar2 < 0x10c96c8);
  FUN_00aaa330(DAT_010c97e8);
  for (iVar1 = DAT_010c97d8; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x158)) {
    FUN_00aaa330(*(int *)(iVar1 + 0x150));
    FUN_00aaa8d0(*(ushort **)(iVar1 + 0x14c));
  }
  return;
}


//// FUNCTION FUN_00a5a0d0 @ 00a5a0d0 ////

uint __cdecl FUN_00a5a0d0(ushort *param_1,char param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  undefined4 in_EAX;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  int *local_c;
  int local_8;
  uint local_4;
  
  uVar1 = *param_1;
  if ((uVar1 == 0) || (uVar1 == 0xffff)) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),uVar1) & 0xffffff00;
  }
  iVar2 = *(int *)(param_1 + 2);
  uVar4 = FUN_00a58910((void *)(iVar2 + 0x28),param_1);
  if (uVar4 != 0xffffffff) {
    param_1[1] = (ushort)uVar4;
    iVar5 = uVar4 * 0x1c + *(int *)(iVar2 + 0x138);
    local_c = (int *)0x0;
    local_8 = 0;
    if (*(char *)(iVar2 + 0x155) == '\0') {
      if (param_2 == '\0') {
        uVar1 = *(ushort *)(iVar5 + 2) >> 1;
      }
      else {
        uVar1 = *(ushort *)(iVar5 + 2) >> 2;
      }
    }
    else {
      uVar1 = *(ushort *)(iVar5 + 2);
    }
    local_4 = (uint)(param_2 != '\0') ^ (uVar1 + 2) * 0x800 & 0x7f800;
    bVar3 = FUN_00aaa880(*(void **)(iVar2 + 0x150),(int *)&local_c);
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3) {
      if (param_2 == '\0') {
        *(uint *)(param_1 + 4) =
             (local_4 & 0x1e) << 7 | local_4 >> 7 & 0xf | *(uint *)(param_1 + 4) & 0xfffff0f0;
        uVar4 = *(ushort *)((int)local_c + 6) & 0x1ff | *(uint *)(param_1 + 6) & 0xfffffe00 |
                0x40000;
      }
      else {
        *(uint *)(param_1 + 4) =
             local_4 >> 3 & 0xf0 | (local_4 & 0x1e) << 0xb | *(uint *)(param_1 + 4) & 0xffff0f0f;
        uVar4 = (local_c[1] & 0x1ff0000U | 0x4000000) >> 7 | *(uint *)(param_1 + 6) & 0xfffc01ff;
      }
      *(uint *)(param_1 + 6) = uVar4;
      *(ushort **)(*local_c + (uint)*(byte *)((int)local_c + 5) * 4) = param_1;
      *(char *)((int)local_c + 5) = *(char *)((int)local_c + 5) + '\x01';
      *(short *)((int)local_c + 6) =
           *(short *)((int)local_c + 6) + ((ushort)(local_4 >> 0xb) & 0xff);
      FUN_00aaa950(*(void **)(*(int *)(param_1 + 2) + 0x14c),*param_1,param_2);
      uVar6 = FUN_00a5a000((short *)param_1,local_8);
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_00a5a290 @ 00a5a290 ////

undefined4 * __thiscall FUN_00a5a290(void *this,byte param_1)

{
  FUN_00a59730(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5a2b0 @ 00a5a2b0 ////

undefined4 * __fastcall FUN_00a5a2b0(undefined4 *param_1)

{
  ushort *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb3b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  local_4 = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4d] = 0;
  FUN_004015d0(param_1,"",0);
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x55) = 1;
  *(undefined1 *)((int)param_1 + 0x155) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4d] = 0;
  puVar1 = operator_new(0x4002);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar1 == (ushort *)0x0) {
    puVar1 = (ushort *)0x0;
  }
  else {
    puVar1 = FUN_00aaa9e0(puVar1);
  }
  param_1[0x53] = puVar1;
  param_1[0x54] = DAT_010c97e8;
  param_1[0x57] = param_1[0x57] + 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00a5a380 @ 00a5a380 ////

void __fastcall FUN_00a5a380(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0x57;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_00a59730(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a5a3a0 @ 00a5a3a0 ////

undefined4 * __cdecl FUN_00a5a3a0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char local_104 [260];
  
  _sprintf(local_104,"%s%s.fnt",PTR_DAT_00e6956c,param_2);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  pcVar2 = local_104;
  param_1[1] = 0;
  param_1[2] = 0x14;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(param_1,local_104,(int)pcVar2 - (int)(local_104 + 1));
  return param_1;
}


//// FUNCTION FUN_00a5a420 @ 00a5a420 ////

void __thiscall FUN_00a5a420(void *this,float param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2[3];
  if (iVar2 != 0) {
    param_2[2] = 0;
    do {
      uVar1 = FUN_00a59a10(this,iVar2,param_1,(uint *)*param_2);
      if ((char)uVar1 != '\0') {
        param_2[2] = param_2[2] + 1;
      }
      iVar2 = *(int *)(iVar2 + 0x14);
    } while (iVar2 != 0);
  }
  return;
}


//// FUNCTION FUN_00a5a480 @ 00a5a480 ////

uint __thiscall FUN_00a5a480(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  FILE *_File;
  void *pvVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  int local_154;
  char *local_150 [2];
  uint local_148;
  long local_130 [2];
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  wchar_t local_11c [128];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cfb3cb;
  local_14 = ExceptionList;
  if (*(void **)((int)this + 0x110) != (void *)0x0) {
    ExceptionList = &local_14;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x110));
  }
  ExceptionList = &local_14;
  if (*(FILE **)((int)this + 0x114) != (FILE *)0x0) {
    ExceptionList = &local_14;
    _fclose(*(FILE **)((int)this + 0x114));
    *(undefined4 *)((int)this + 0x114) = 0;
  }
  FUN_00a5a3a0(local_150,param_1);
  local_c = 0;
  uVar2 = FUN_009d3660(local_150,(uint *)0x0);
  if ((char)uVar2 == '\0') {
    if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
      _free(local_150[0]);
    }
  }
  else {
    _File = _fopen(local_150[0],"rb");
    *(FILE **)((int)this + 0x114) = _File;
    if (_File != (FILE *)0x0) {
      plVar6 = local_130;
      for (iVar4 = 0x46; iVar4 != 0; iVar4 = iVar4 + -1) {
        *plVar6 = 0;
        plVar6 = plVar6 + 1;
      }
      _fread(local_130,0x118,1,_File);
      *(undefined4 *)((int)this + 0x108) = local_124;
      *(undefined4 *)this = local_120;
      *(undefined4 *)((int)this + 0x10c) = local_1c;
      _wcscpy((wchar_t *)((int)this + 8),local_11c);
      iVar4 = *(int *)this;
      if (*(int *)((int)this + 0x108) != 1) {
        iVar4 = iVar4 / 2;
      }
      *(int *)((int)this + 4) = iVar4;
      pvVar3 = operator_new(*(int *)((int)this + 0x10c) * 0x1c);
      *(void **)((int)this + 0x110) = pvVar3;
      _fseek(*(FILE **)((int)this + 0x114),local_130[1],0);
      _fread(*(void **)((int)this + 0x110),0x1c,*(size_t *)((int)this + 0x10c),
             *(FILE **)((int)this + 0x114));
      iVar4 = *(int *)((int)this + 0x10c);
      local_154 = 0;
      if (0 < iVar4) {
        iVar5 = *(int *)((int)this + 0x110);
        iVar4 = 0;
        do {
          *(int *)(iVar4 + 0x14 + iVar5) = *(int *)(iVar4 + 0x14 + iVar5) + local_128;
          iVar5 = *(int *)((int)this + 0x110);
          if (*(short *)(iVar4 + iVar5) == 0x20) {
            puVar1 = (undefined4 *)(iVar4 + 8 + iVar5);
            *(undefined4 *)((int)this + 0x118) = *puVar1;
            *(undefined4 *)((int)this + 0x11c) = puVar1[1];
            *(undefined4 *)((int)this + 0x120) = puVar1[2];
          }
          local_154 = local_154 + 1;
          iVar4 = iVar4 + 0x1c;
        } while (local_154 < *(int *)((int)this + 0x10c));
      }
      if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
        _free(local_150[0]);
      }
      ExceptionList = local_14;
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
    uVar2 = 0;
    if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
      _free(local_150[0]);
    }
  }
  ExceptionList = local_14;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00a5a6c0 @ 00a5a6c0 ////

void __thiscall FUN_00a5a6c0(void *this,char param_1)

{
  ushort uVar1;
  ushort uVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  uint local_c;
  int local_8;
  uint uVar8;
  
  uVar8 = 0;
  uVar7 = 0;
  local_c = 0;
  local_8 = 0;
  if (*(char *)((int)this + 5) != '\0') {
    do {
      psVar3 = *(short **)(*(int *)this + local_8 * 4);
      if (param_1 == '\0') {
        uVar5 = (*(uint *)(psVar3 + 6) ^ uVar8) & 0x1ff;
      }
      else {
        uVar5 = (uVar8 << 9 ^ *(uint *)(psVar3 + 6)) & 0x3fe00;
      }
      iVar6 = *(int *)(psVar3 + 2);
      *(uint *)(psVar3 + 6) = *(uint *)(psVar3 + 6) ^ uVar5;
      if (iVar6 != 0) {
        uVar1 = psVar3[1];
        iVar4 = *(int *)(iVar6 + 0x138);
        uVar2 = *(ushort *)((uint)uVar1 * 0x1c + 2 + iVar4);
        if (param_1 == '\0') {
          uVar8 = *(uint *)(psVar3 + 4);
          uVar2 = uVar2 >> 1;
        }
        else {
          uVar8 = *(uint *)(psVar3 + 4) >> 4;
          uVar2 = uVar2 >> 2;
        }
        iVar6 = FUN_00aa9ed0(*(void **)(iVar6 + 0x150),uVar8 & 0xf,param_1 != '\0');
        FUN_00a5a000(psVar3,iVar6);
        if (*(char *)(*(int *)(psVar3 + 2) + 0x155) != '\0') {
          uVar2 = *(ushort *)((uint)uVar1 * 0x1c + iVar4 + 2);
        }
        uVar8 = local_c + uVar2 + 2;
        local_c = uVar8;
      }
      uVar7 = (undefined2)uVar8;
      local_8 = local_8 + 1;
    } while (local_8 < (int)(uint)*(byte *)((int)this + 5));
  }
  *(undefined2 *)((int)this + 6) = uVar7;
  return;
}


//// FUNCTION FUN_00a5a7b0 @ 00a5a7b0 ////

void __thiscall FUN_00a5a7b0(void *this,int param_1,char param_2)

{
  undefined2 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 *_Memory;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  bVar3 = false;
  _Memory = operator_new((*(uint *)((int)this + 4) & 0xff) << 2);
  puVar7 = _Memory;
  for (uVar4 = *(uint *)((int)this + 4) & 0xff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  iVar6 = 0;
  iVar5 = 0;
  if (*(char *)((int)this + 5) != '\0') {
    do {
      puVar1 = *(undefined2 **)(*(int *)this + iVar5 * 4);
      if (*(int *)(puVar1 + 2) == param_1) {
        *puVar1 = 0;
        *(undefined4 *)(*(int *)(*(int *)this + iVar5 * 4) + 4) = 0;
        iVar2 = *(int *)(*(int *)this + iVar5 * 4);
        if (param_2 == '\0') {
          *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffbffff;
          bVar3 = true;
        }
        else {
          *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfff7ffff;
          bVar3 = true;
        }
      }
      else {
        _Memory[iVar6] = puVar1;
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)((int)this + 5));
    if (bVar3) {
      iVar5 = 0;
      *(char *)((int)this + 5) = (char)iVar6;
      if (0 < iVar6) {
        do {
          *(undefined4 *)(*(int *)this + iVar5 * 4) = _Memory[iVar5];
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
      FUN_00a5a6c0(this,param_2);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a5a890 @ 00a5a890 ////

void FUN_00a5a890(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  do {
    (&DAT_010c96c8)[iVar2] = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  iVar4 = 0x100;
  iVar2 = 0;
  do {
    iVar3 = _rand();
    iVar3 = iVar3 % iVar4;
    uVar1 = (&DAT_010c96c8)[iVar2];
    iVar4 = iVar4 + -1;
    (&DAT_010c96c8)[iVar2] = (&DAT_010c96c8)[iVar3];
    (&DAT_010c96c8)[iVar3] = uVar1;
    iVar2 = iVar2 + 1;
  } while (1 < iVar4);
  FUN_00a5a070();
  return;
}


//// FUNCTION FUN_00a5a8f0 @ 00a5a8f0 ////

ushort * __cdecl FUN_00a5a8f0(ushort param_1,int param_2,char param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  
  while( true ) {
    uVar3 = FUN_00aaa910(*(void **)(param_2 + 0x14c),param_1,'\x01');
    if ((((char)uVar3 != '\0') ||
        (uVar3 = FUN_00aaa910(*(void **)(param_2 + 0x14c),param_1,'\0'), (char)uVar3 != '\0')) &&
       (puVar4 = FUN_00a58e50(param_1,param_2), puVar4 != (ushort *)0x0)) {
      if (param_3 == '\0') {
        uVar3 = *(uint *)(puVar4 + 6) & 0x40000;
      }
      else {
        uVar3 = *(uint *)(puVar4 + 6) & 0x80000;
      }
      if (uVar3 != 0) {
        return puVar4;
      }
      FUN_00a5a0d0(puVar4,param_3);
      if (param_3 == '\0') {
        *(char *)(puVar4 + 5) = (char)(*(uint *)(*(int *)(param_2 + 0x150) + 0x44) >> 0x13);
        return puVar4;
      }
      *(char *)((int)puVar4 + 0xb) = (char)(*(uint *)(*(int *)(param_2 + 0x150) + 0x8c) >> 0x13);
      return puVar4;
    }
    uVar2 = param_1 << 5 | param_1 >> 0xb;
    uVar7 = param_1 ^ uVar2;
    bVar1 = (byte)(uVar7 >> 8);
    uVar2 = ~uVar2 ^ (CONCAT11(bVar1,(byte)uVar7 ^ *(byte *)(param_2 + 0x24)) << 3 |
                     (ushort)(bVar1 >> 5));
    uVar7 = ~uVar2;
    puVar4 = &DAT_010c16c8 +
             (CONCAT11((char)(uVar7 >> 8),(&DAT_010c96c8)[(ushort)(uVar2 >> 0xb ^ uVar7) & 0xff]) &
             0xffff07ff) * 8;
    iVar5 = 0;
    while( true ) {
      if (0x7ff < iVar5) {
        return (ushort *)0x0;
      }
      if (*puVar4 == 0) break;
      puVar4 = puVar4 + 8;
      if ((ushort *)0x10c96c7 < puVar4) {
        puVar4 = &DAT_010c16c8;
      }
      iVar5 = iVar5 + 1;
    }
    *puVar4 = param_1;
    *(int *)(puVar4 + 2) = param_2;
    uVar6 = FUN_00a5a0d0(puVar4,param_3);
    if ((char)uVar6 != '\0') break;
    *puVar4 = 0;
    if (param_1 == 0x3f) {
      return (ushort *)0x0;
    }
    param_1 = 0x3f;
  }
  if (param_3 == '\0') {
    *(char *)(puVar4 + 5) = (char)(*(uint *)(*(int *)(param_2 + 0x150) + 0x44) >> 0x13);
    return puVar4;
  }
  *(char *)((int)puVar4 + 0xb) = (char)(*(uint *)(*(int *)(param_2 + 0x150) + 0x8c) >> 0x13);
  return puVar4;
}


//// FUNCTION FUN_00a5aa80 @ 00a5aa80 ////

void FUN_00a5aa80(void)

{
  undefined4 *_Memory;
  
  FUN_00a5a070();
  _Memory = DAT_010c97d8;
  if (DAT_010c97d8 != (undefined4 *)0x0) {
    FUN_00a59730(DAT_010c97d8);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_010c97e0 = 0;
  return;
}


//// FUNCTION FUN_00a5aac0 @ 00a5aac0 ////

uint __thiscall FUN_00a5aac0(void *this,char *param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb3eb;
  local_c = ExceptionList;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  uVar3 = FUN_00a5a480((void *)((int)this + 0x28),param_1);
  if ((char)uVar3 == '\0') {
    ExceptionList = local_c;
    return uVar3;
  }
  if (*(int *)((int)this + 0x130) == 1) {
    *(undefined1 *)((int)this + 0x155) = 1;
  }
  if (param_2 != (int *)0x0) {
    *(undefined1 *)((int)this + 0x154) = 0;
    puVar4 = operator_new(0x90);
    local_4 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_00aaa1e0(puVar4);
    }
    local_4 = 0xffffffff;
    *(undefined4 **)((int)this + 0x150) = puVar4;
    uVar5 = FUN_00aaa280(puVar4,param_2);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  *(undefined1 *)((int)this + 0x154) = 1;
  ExceptionList = local_c;
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION FUN_00a5abb0 @ 00a5abb0 ////

undefined4 * __cdecl FUN_00a5abb0(char *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00cfb40b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_00a59810(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    ExceptionList = local_c;
    return puVar1;
  }
  if (DAT_010c97e0 < 0xf) {
    puVar2 = operator_new(0x160);
    if (puVar2 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      local_4 = puVar1;
      puVar1 = FUN_00a5a2b0(puVar2);
    }
    local_4 = (undefined4 *)0xffffffff;
    uVar3 = FUN_00a5aac0(puVar1,param_1,param_2);
    if ((char)uVar3 != '\0') {
      puVar1[9] = DAT_010c97e0;
      puVar1[0x56] = DAT_010c97d8;
      DAT_010c97d8 = puVar1;
      DAT_010c97e0 = DAT_010c97e0 + 1;
      ExceptionList = local_c;
      return puVar1;
    }
    FUN_009d9820();
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00a59730(puVar1);
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
  }
  ExceptionList = local_c;
  return DAT_010c97ec;
}


//// FUNCTION FUN_00a5aca0 @ 00a5aca0 ////

void __thiscall
FUN_00a5aca0(void *this,int param_1,int param_2,float param_3,float param_4,float param_5,
            int param_6,char param_7)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  float local_8;
  float local_4;
  
  puVar7 = &DAT_010bb5c8;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar5 = 0;
  DAT_010c97d4 = 0;
  local_8 = 0.0;
  local_4 = 0.0;
  if (0 < param_2) {
    puVar6 = &DAT_010bb6c8;
    do {
      uVar1 = *(ushort *)(param_1 + iVar5 * 2);
      *puVar6 = uVar1;
      if ((uVar1 == 10) || (uVar1 == 0xd)) {
        local_8 = 0.0;
        local_4 = (float)param_6 + local_4;
      }
      else if (uVar1 == 0x20) {
        local_8 = (*(float *)((int)this + 0x148) + *(float *)((int)this + 0x144) +
                  *(float *)((int)this + 0x140)) * param_5 + local_8;
      }
      else if (uVar1 != 0xf8fe) {
        puVar2 = FUN_00a5a8f0(uVar1,(int)this,param_7);
        *(ushort **)(puVar6 + 2) = puVar2;
        if (puVar2 != (ushort *)0x0) {
          *(uint *)(puVar6 + 4) = (uint)puVar2[1] * 0x1c + *(int *)((int)this + 0x138);
          bVar4 = (byte)puVar2[4];
          if (param_7 != '\0') {
            bVar4 = (byte)(*(uint *)(puVar2 + 4) >> 4);
          }
          iVar3 = FUN_00aa9ed0(*(void **)((int)this + 0x150),(uint)(bVar4 & 0xf),param_7);
          FUN_00a590d0((int)puVar6,iVar3);
          iVar3 = *(int *)(puVar6 + 4);
          local_8 = param_5 * *(float *)(iVar3 + 8) + local_8;
          *(float *)(puVar6 + 6) = param_3 + local_8;
          *(float *)(puVar6 + 8) = local_4 + param_4;
          local_8 = (*(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0xc)) * param_5 + local_8;
        }
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 0xc;
    } while (iVar5 < param_2);
  }
  return;
}


//// FUNCTION FUN_00a5adf0 @ 00a5adf0 ////

void __thiscall FUN_00a5adf0(void *this,short *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_38 [4];
  undefined1 local_28;
  float local_24;
  uint local_1c;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_38[0] = FUN_00ace02d(param_1);
  if ((local_38[0] < 0x400) && (0 < local_38[0])) {
    piVar4 = local_38;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    local_38[2] = *(int *)((int)this + 0x2c);
    local_24 = (float)local_38[2] / (float)*(int *)((int)this + 0x28);
    local_c = param_2;
    local_38[1] = local_38[0] * 4;
    local_1c = local_1c | 1;
    local_28 = 0;
    local_8 = 0x102;
    local_4 = 0x14;
    local_38[3] = local_38[2];
    FUN_00a5aca0(this,(int)param_1,local_38[0],0.0,0.0,local_24,local_38[2],'\0');
    uVar1 = FUN_00a58fa0((int)local_38);
    if ((char)uVar1 != '\0') {
      iVar2 = 0;
      if (0 < DAT_010c97d4) {
        puVar3 = &DAT_010bb5c8;
        do {
          FUN_00a5a420(this,(float)local_38,puVar3);
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 4;
        } while (iVar2 < DAT_010c97d4);
      }
      FUN_00a598e0((int)local_38);
    }
  }
  return;
}


//// FUNCTION FUN_00a5aee0 @ 00a5aee0 ////

int __thiscall FUN_00a5aee0(void *this,int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  FUN_00acd42c();
  uVar1 = (ushort)param_1;
  if (((uVar1 != 10) && (uVar1 != 0xd)) && (uVar1 != 0xf8fe)) {
    puVar2 = FUN_00a5a8f0(uVar1,(int)this,'\x01');
    param_1 = 0;
    if (puVar2 != (ushort *)0x0) {
      return (uint)puVar2[1] * 0x1c + *(int *)((int)this + 0x138);
    }
  }
  return param_1;
}


//// FUNCTION FUN_00a5af60 @ 00a5af60 ////

void __thiscall FUN_00a5af60(void *this,float *param_1,ushort *param_2,float param_3,float param_4)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  ushort *puVar4;
  int iVar5;
  float fVar6;
  float10 extraout_ST0;
  ulonglong uVar7;
  char local_10;
  float local_c;
  float local_4;
  
  fVar6 = param_3;
  if ((int)param_3 < 1) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    return;
  }
  uVar7 = FUN_00acd42c();
  local_c = 0.0;
  param_3 = 0.0;
  fVar3 = (float)(int)uVar7 + param_4;
  local_4 = fVar3;
  if (*(char *)((int)this + 0x155) == '\0') {
    local_10 = '\x01';
    if ((float10)fVar3 < (float10)0.6 * extraout_ST0) goto LAB_00a5b010;
  }
  else if (*(int *)((int)this + 0x28) < 0x15) {
    local_10 = '\x01';
    goto LAB_00a5b010;
  }
  local_10 = '\0';
LAB_00a5b010:
  do {
    uVar2 = *param_2;
    if ((uVar2 == 10) || (uVar2 == 0xd)) {
      param_3 = 0.0;
      local_4 = local_4 + fVar3;
    }
    else if ((uVar2 != 0xf8fe) &&
            (puVar4 = FUN_00a5a8f0(uVar2,(int)this,local_10), puVar4 != (ushort *)0x0)) {
      iVar1 = *(int *)((int)this + 0x138);
      iVar5 = (uint)puVar4[1] * 0x1c;
      param_3 = *(float *)(iVar5 + 0x10 + iVar1) + *(float *)(iVar5 + 0xc + iVar1) +
                *(float *)(iVar5 + 8 + iVar1) + param_3;
    }
    param_2 = param_2 + 1;
    if (local_c < param_3) {
      local_c = param_3;
    }
    fVar6 = (float)((int)fVar6 + -1);
  } while (fVar6 != 0.0);
  iVar1 = *(int *)((int)this + 0x28);
  param_1[1] = local_4;
  *param_1 = (local_c * fVar3) / (float)iVar1;
  return;
}


//// FUNCTION FUN_00a5b100 @ 00a5b100 ////

undefined4 FUN_00a5b100(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb436;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00aab900();
  puVar1 = operator_new(0x90);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    DAT_010c97e8 = (undefined4 *)0x0;
  }
  else {
    DAT_010c97e8 = FUN_00aaa1e0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_00aaa280(DAT_010c97e8,&DAT_00e6e468);
  FUN_00a5aa80();
  puVar1 = operator_new(0x24);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    DAT_010c97e4 = 0;
  }
  else {
    DAT_010c97e4 = FUN_009910f0(puVar1);
  }
  *(undefined1 *)(DAT_010c97e4 + 0xc) = 0x23;
  *(uint *)(DAT_010c97e4 + 0x10) = *(uint *)(DAT_010c97e4 + 0x10) & 0x7fffffff;
  *(uint *)(DAT_010c97e4 + 0x10) = *(uint *)(DAT_010c97e4 + 0x10) & 0xbfffffff;
  local_4 = 0xffffffff;
  *(uint *)(DAT_010c97e4 + 0x10) = *(uint *)(DAT_010c97e4 + 0x10) | 0x2000000;
  *(uint *)(DAT_010c97e4 + 0x10) = *(uint *)(DAT_010c97e4 + 0x10) & 0xfeffffff;
  *(uint *)(DAT_010c97e4 + 0x10) = *(uint *)(DAT_010c97e4 + 0x10) | 0x20000000;
  *(undefined1 *)(DAT_010c97e4 + 0xe) = 8;
  FUN_00a5a890();
  uVar2 = 0;
  while ((DAT_010ca02c != 0 && (uVar2 < (uint)(DAT_010ca030 - DAT_010ca02c >> 2)))) {
    puVar1 = *(undefined4 **)(DAT_010ca02c + uVar2 * 4);
    puVar1 = FUN_00a5abb0((char *)*puVar1,puVar1 + 9);
    if (DAT_010c97ec == (undefined4 *)0x0) {
      uVar2 = uVar2 + 1;
      DAT_010c97ec = puVar1;
    }
    else {
      if (DAT_010c97f0 == (undefined4 *)0x0) {
        DAT_010c97f0 = puVar1;
      }
      uVar2 = uVar2 + 1;
    }
  }
  if ((DAT_010c97ec == (undefined4 *)0x0) || (DAT_010c97f0 == (undefined4 *)0x0)) {
    local_1c[3] = 0x100;
    local_1c[2] = 0x100;
    local_1c[0] = 2;
    local_1c[1] = 1;
    if (DAT_010c97ec == (undefined4 *)0x0) {
      DAT_010c97ec = FUN_00a5abb0("default",local_1c);
    }
    if (DAT_010c97f0 == (undefined4 *)0x0) {
      DAT_010c97f0 = FUN_00a5abb0("default_bold",local_1c);
    }
  }
  DAT_010c97dc = 1;
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)DAT_010c97f0 >> 8),1);
}


//// FUNCTION FUN_00a5b2c0 @ 00a5b2c0 ////

void FUN_00a5b2c0(void)

{
  void *_Memory;
  undefined4 *_Memory_00;
  
  if (DAT_010c97dc != '\0') {
    FUN_00aab140();
    FUN_00a5a070();
    FUN_00a5aa80();
    _Memory_00 = DAT_010c97e8;
    _Memory = DAT_010c97e4;
    if (DAT_010c97e4 != (void *)0x0) {
      FUN_00990ec0((int)DAT_010c97e4);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    DAT_010c97e4 = (void *)0x0;
    if (DAT_010c97e8 != (undefined4 *)0x0) {
      FUN_00aaa230(DAT_010c97e8);
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
    DAT_010c97e8 = (undefined4 *)0x0;
    DAT_010c97dc = '\0';
  }
  return;
}


//// FUNCTION FUN_00a5b330 @ 00a5b330 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00a5b330(void *this,int param_1,int param_2,float param_3,float param_4,float param_5,
            undefined4 param_6,byte param_7)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  float10 extraout_ST0;
  ulonglong uVar6;
  int local_98 [4];
  char local_88;
  float local_84;
  uint local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char *local_60;
  undefined4 local_5c;
  uint local_58;
  char local_54 [20];
  char local_40 [64];
  
  if (0x3ff < param_2) {
    local_60 = local_54;
    local_54[0] = '\0';
    local_5c = 0;
    local_58 = 0x20;
    local_60 = _malloc(0x20);
    _strncpy(local_60,"Line exceeded max length! ",0x1a);
    local_5c = 0x1a;
    local_60[0x1a] = '\0';
    sVar1 = _sprintf(local_40,(char *)&param_2_00d1b93c,0x400);
    FUN_004073f0(&local_60,local_40,sVar1);
    if (local_58 < 0x15) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  if (param_2 < 1) {
    return;
  }
  uVar2 = *(undefined4 *)((int)this + 0x2c);
  local_6c = 0xffffffff;
  piVar5 = local_98;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_7c = local_7c & 0xfffffffe;
  local_98[0] = param_2;
  local_98[3] = uVar2;
  uVar6 = FUN_00acd42c();
  local_98[2] = (int)ROUND((float)(((float10)_DAT_010c97d0 * (float10)param_5) / extraout_ST0 +
                                  (float10)param_5));
  local_98[1] = param_2 * 4;
  local_6c = param_6;
  local_84 = (float)local_98[2] / (float)*(int *)((int)this + 0x28);
  local_7c = local_7c ^ ((uint)param_7 << 1 ^ local_7c) & 2;
  if (*(char *)((int)this + 0x155) == '\0') {
    if ((float)local_98[2] < (float)*(int *)((int)this + 0x2c) * 0.6) {
      local_88 = '\x01';
      goto LAB_00a5b4db;
    }
  }
  else if (*(int *)((int)this + 0x28) < 0x15) {
    local_88 = '\x01';
    goto LAB_00a5b4db;
  }
  local_88 = '\0';
LAB_00a5b4db:
  local_68 = 0x104;
  local_64 = 0x18;
  FUN_00a5aca0(this,param_1,param_2,param_3,param_4 - (float)(int)uVar6,local_84,local_98[2],
               local_88);
  uVar2 = FUN_00a58fa0((int)local_98);
  if ((char)uVar2 != '\0') {
    if (0 < DAT_010c97d4) {
      puVar4 = &DAT_010bb5c8;
      iVar3 = 0;
      do {
        FUN_00a5a420(this,(float)local_98,puVar4);
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 4;
      } while (iVar3 < DAT_010c97d4);
    }
    FUN_00a598e0((int)local_98);
  }
  return;
}


//// FUNCTION FUN_00a5b580 @ 00a5b580 ////

void __thiscall
FUN_00a5b580(void *this,ushort *param_1,float param_2,float param_3,float param_4,float param_5,
            undefined4 param_6)

{
  float local_8 [2];
  
  FUN_00a5af60(this,local_8,param_1,param_2,param_5);
  FUN_00a5b330(this,(int)param_1,(int)param_2,param_3 - local_8[0] * 0.5,param_5 * 0.5 + param_4,
               param_5,param_6,0);
  return;
}


//// FUNCTION FUN_00a5b5f0 @ 00a5b5f0 ////

void __fastcall FUN_00a5b5f0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(param_1 + 4))();
  iVar3 = iVar2 - *(int *)(param_1 + 8);
  fVar1 = (float)iVar3;
  if (iVar3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(int *)(param_1 + 8) = iVar2;
  *(float *)(param_1 + 0xc) = fVar1 * 0.001;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x10);
  return;
}


//// FUNCTION FUN_00a5b630 @ 00a5b630 ////

bool __fastcall FUN_00a5b630(int param_1)

{
  return *(int *)(param_1 + 0x2c) == 0;
}


//// FUNCTION FUN_00a5b640 @ 00a5b640 ////

void __thiscall FUN_00a5b640(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
  }
  return;
}


//// FUNCTION FUN_00a5b6a0 @ 00a5b6a0 ////

void __thiscall FUN_00a5b6a0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x45) == '\0') {
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


//// FUNCTION FUN_00a5b720 @ 00a5b720 ////

void __cdecl FUN_00a5b720(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x45);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x45);
  }
  return;
}


//// FUNCTION FUN_00a5b750 @ 00a5b750 ////

void __fastcall FUN_00a5b750(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x45) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x45) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x45);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x45);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x45) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x45) == '\0');
    if (*(char *)((int)piVar4 + 0x45) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00a5b810 @ 00a5b810 ////

void __fastcall FUN_00a5b810(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    puVar1 = (uint *)(*(int *)(param_1 + 0x2c) + 0x30);
    *puVar1 = *puVar1 | 0x100;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


//// FUNCTION FUN_00a5b830 @ 00a5b830 ////

void __thiscall FUN_00a5b830(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00a5b860 @ 00a5b860 ////

void __thiscall FUN_00a5b860(void *this,undefined1 param_1)

{
  if (*(int *)((int)this + 0x2c) != 0) {
    *(undefined1 *)(*(int *)((int)this + 0x2c) + 0x30) = param_1;
  }
  return;
}


//// FUNCTION FUN_00a5b8a0 @ 00a5b8a0 ////

void __thiscall FUN_00a5b8a0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x45) == '\0') {
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


//// FUNCTION FUN_00a5b900 @ 00a5b900 ////

int * __fastcall FUN_00a5b900(int *param_1)

{
  FUN_00a5b750(param_1);
  return param_1;
}


//// FUNCTION FUN_00a5b960 @ 00a5b960 ////

/* WARNING: Removing unreachable block (ram,0x00a5b9a6) */

void __fastcall FUN_00a5b960(undefined4 *param_1)

{
  uint *puVar1;
  
  *param_1 = &PTR_FUN_00d79484;
  if (param_1[0xb] != 0) {
    param_1[9] = 0xffffffff;
    puVar1 = (uint *)(param_1[0xb] + 0x30);
    *puVar1 = *puVar1 | 0x100;
    param_1[0xb] = 0;
  }
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[6] = param_1[5];
  }
  if (param_1[5] != 0) {
    *(undefined4 *)(param_1[5] + 4) = param_1[6];
  }
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_1[5] != 0) {
    *(undefined4 *)(param_1[5] + 4) = param_1[6];
  }
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


//// FUNCTION FUN_00a5b9c0 @ 00a5b9c0 ////

int * __fastcall FUN_00a5b9c0(int *param_1)

{
  FUN_00a5b750(param_1);
  return param_1;
}


//// FUNCTION FUN_00a5ba20 @ 00a5ba20 ////

undefined4 * __thiscall FUN_00a5ba20(void *this,byte param_1)

{
  FUN_00a5b960(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5ba50 @ 00a5ba50 ////

void FUN_00a5ba50(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x11) = 1;
  *(undefined1 *)((int)puVar1 + 0x45) = 0;
  return;
}


//// FUNCTION FUN_00a5ba90 @ 00a5ba90 ////

void __fastcall FUN_00a5ba90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a5ba50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00a5bac0 @ 00a5bac0 ////

int __fastcall FUN_00a5bac0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a5ba50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a5baf0 @ 00a5baf0 ////

void __fastcall FUN_00a5baf0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d71f0c;
  return;
}


//// FUNCTION FUN_00a5bb50 @ 00a5bb50 ////

void __thiscall FUN_00a5bb50(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x20) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 **)((int)this + 0xc) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 8);
  *(undefined ***)((int)this + 4) = &PTR_LAB_00d71f0c;
  return;
}


//// FUNCTION FUN_00a5bbb0 @ 00a5bbb0 ////

void __fastcall FUN_00a5bbb0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d71f0c;
  return;
}


//// FUNCTION FUN_00a5bc10 @ 00a5bc10 ////

void __thiscall FUN_00a5bc10(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x20) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 **)((int)this + 0xc) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 8);
  *(undefined ***)((int)this + 4) = &PTR_LAB_00d71f0c;
  return;
}


//// FUNCTION FUN_00a5bcb0 @ 00a5bcb0 ////

void __thiscall FUN_00a5bcb0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cfb4c8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x45) != '\0') {
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
  FUN_009ae8a0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x45) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x45) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x45) == '\0') {
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
      iVar1 = param_2[0x11];
      *(char *)(param_2 + 0x11) = (char)_Memory[0x11];
      *(char *)(_Memory + 0x11) = (char)iVar1;
      goto LAB_00a5be1f;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x45) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x45) == '\0') {
      piVar2 = (int *)FUN_009ae600(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x45) == '\0') {
      uVar3 = FUN_00a5b720((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00a5be1f:
  if ((char)_Memory[0x11] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0x11] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar5 + 0x11) = 0;
            FUN_00a5b8a0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(*piVar4 + 0x44) != '\x01') || (*(char *)(piVar4[2] + 0x44) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x44) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x44) = 1;
                *(undefined1 *)(piVar4 + 0x11) = 0;
                FUN_00a5b6a0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0x11) = (char)piVar5[0x11];
              *(undefined1 *)(piVar5 + 0x11) = 1;
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              FUN_00a5b8a0(this,(int)piVar5);
              break;
            }
LAB_00a5bee8:
            *(undefined1 *)(piVar4 + 0x11) = 0;
          }
        }
        else {
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar5 + 0x11) = 0;
            FUN_00a5b6a0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(piVar4[2] + 0x44) == '\x01') && (*(char *)(*piVar4 + 0x44) == '\x01'))
            goto LAB_00a5bee8;
            if (*(char *)(*piVar4 + 0x44) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              *(undefined1 *)(piVar4 + 0x11) = 0;
              FUN_00a5b8a0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0x11) = (char)piVar5[0x11];
            *(undefined1 *)(piVar5 + 0x11) = 1;
            *(undefined1 *)(*piVar4 + 0x44) = 1;
            FUN_00a5b6a0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0x11) = 1;
  }
  piVar4 = (int *)_Memory[6];
  _Memory[4] = (int)&PTR_LAB_00d71f0c;
  while (piVar4 != _Memory + 9) {
    *piVar4 = 0;
    piVar4 = (int *)piVar4[1];
    *(undefined4 *)(*piVar4 + 4) = 0;
  }
  _Memory[6] = 0;
  _Memory[9] = 0;
  FUN_00406010((int)(_Memory + 4));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a5bfb0 @ 00a5bfb0 ////

undefined4 *
FUN_00a5bfb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfb4f1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x48);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_00a5bb50(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0x11) = param_5;
    *(undefined1 *)((int)puVar1 + 0x45) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_00a5c050 @ 00a5c050 ////

void __thiscall
FUN_00a5c050(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cfb508;
  local_c = ExceptionList;
  if (0x4924922 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_00a5bfb0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x44);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x44) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x11] == '\0') {
LAB_00a5c14b:
        *(undefined1 *)(*piVar4 + 0x44) = 1;
        *(undefined1 *)(piVar5 + 0x11) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x44) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00a5b8a0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x44) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x44) = 0;
        FUN_00a5b6a0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x11] == '\0') goto LAB_00a5c14b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00a5b6a0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x44) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x44) = 0;
      FUN_00a5b8a0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x44);
  } while( true );
}


//// FUNCTION FUN_00a5c200 @ 00a5c200 ////

void __thiscall FUN_00a5c200(void *this,undefined4 *param_1,uint *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x45) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x45) == '\0');
  }
  param_2 = puVar5;
  if (local_4) {
    if (puVar5 == (uint *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_00a5c050(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00a5b750((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_00a5c050(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00a5c2c0 @ 00a5c2c0 ////

void __thiscall FUN_00a5c2c0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_009af8b0((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x45) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x45) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x45);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x45);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x45);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x45);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00a5bcb0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00a5c380 @ 00a5c380 ////

undefined4 * __thiscall FUN_00a5c380(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00a5c050(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_00a5c050(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_00a5c050(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_00a5b750((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x45) != '\0') {
          FUN_00a5c050(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_00a5c050(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_009ae8a0((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x45) != '\0') {
          FUN_00a5c050(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_00a5c050(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_00a5c200(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_00a5c520 @ 00a5c520 ////

uint * __thiscall FUN_00a5c520(void *this,uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined **local_78;
  undefined4 local_74;
  undefined4 **local_70;
  undefined4 local_6c;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined4 local_40 [13];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb540;
  local_c = ExceptionList;
  puVar4 = *(uint **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x45) == '\0') {
    puVar2 = (uint *)puVar4[1];
    do {
      if (puVar2[3] < *param_1) {
        puVar1 = (uint *)puVar2[2];
      }
      else {
        puVar1 = (uint *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x45) == '\0');
  }
  if ((puVar4 == *(uint **)((int)this + 4)) || (*param_1 < puVar4[3])) {
    local_6c = 0;
    local_74 = 0;
    local_5c = 0;
    local_60 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_70 = &local_64;
    local_64 = &local_74;
    local_78 = &PTR_LAB_00d71f0c;
    local_4 = 2;
    ExceptionList = &local_c;
    puVar2 = (uint *)FUN_00a5bc10(local_44,param_1);
    local_4 = CONCAT31(local_4._1_3_,3);
    puVar3 = FUN_00a5c380(this,&param_1,puVar4,puVar2);
    puVar4 = (uint *)*puVar3;
    FUN_009af7e0(local_40);
    FUN_009af7e0(&local_78);
  }
  ExceptionList = local_c;
  return puVar4 + 4;
}


//// FUNCTION FUN_00a5c640 @ 00a5c640 ////

void __fastcall FUN_00a5c640(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00a5c2c0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00a5c670 @ 00a5c670 ////

undefined4 * __thiscall FUN_00a5c670(void *this,uint param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb55b;
  pvStack_c = ExceptionList;
  puVar1 = (uint *)((int)this + 0x14);
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_00d79484;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_4 = 0;
  *(void **)((int)this + 0x1c) = this;
  FUN_00acdb9e(0xe69590);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x20) = iVar3;
  if (DAT_00e6958c != '\0') {
    iVar3 = 0x14;
    pcVar7 = "Link";
    pcVar4 = (char *)FUN_00acdb9e(0xe69590);
    FUN_0097df60(pcVar4,pcVar7,iVar3);
    DAT_00e6958c = '\0';
  }
  uVar2 = param_2;
  *(uint *)((int)this + 4) = param_1;
  param_1 = param_2;
  puVar5 = FUN_00a5c520(&DAT_010c97f8,&param_1);
  puVar5 = puVar5 + 5;
  *(uint **)((int)this + 0x18) = puVar5;
  *puVar1 = *puVar5;
  *(uint **)(*puVar5 + 4) = puVar1;
  *puVar5 = (uint)puVar1;
  *(int *)((int)this + 0x24) = param_3;
  *(uint *)((int)this + 0x28) = uVar2;
  iVar3 = param_3 * 0x34 + *(int *)(uVar2 + 0x20);
  *(int *)((int)this + 0x2c) = iVar3;
  puVar1 = (uint *)(iVar3 + 0x30);
  *puVar1 = *puVar1 & 0xfffffeff;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar6 = (**(code **)((int)this + 4))();
  *(undefined4 *)((int)this + 8) = uVar6;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00a5c780 @ 00a5c780 ////

int __fastcall FUN_00a5c780(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a5ba50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a5c7d0 @ 00a5c7d0 ////

undefined4 * __thiscall FUN_00a5c7d0(void *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009ae140(this,param_1,param_2,param_3);
  fVar2 = DAT_00e695bc;
  fVar1 = DAT_00e695b8;
  *(undefined ***)this = &PTR_FUN_00d79498;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  fVar4 = FUN_00990e30(fVar1,fVar2);
  FUN_009ae110(this,(float)fVar4);
  fVar4 = FUN_00990e30(-3.1415927,3.1415927);
  FUN_009ae0e0(this,(float)fVar4);
  fVar4 = FUN_00990e30(-DAT_00e695d0,DAT_00e695d0);
  fVar1 = DAT_00e695c0;
  *(float *)((int)this + 0x54) = (float)fVar4;
  fVar4 = FUN_00990e30(DAT_00e695c4,fVar1);
  local_10 = (float)fVar4;
  local_18 = 0;
  local_14 = 0;
  FUN_009ae120(this,&local_18);
  iVar3 = FUN_00990d30(0,6);
  *(undefined4 *)(*(int *)((int)this + 0x2c) + 0x2c) = *(undefined4 *)(&DAT_00e695f0 + iVar3 * 4);
  fVar4 = FUN_00990e30(-3.1415927,3.1415927);
  *(float *)((int)this + 0x60) = (float)fVar4;
  fVar4 = FUN_00990e30(DAT_00e695d4,DAT_00e695d8);
  *(float *)((int)this + 100) = (float)fVar4;
  fVar4 = FUN_00990e30(DAT_00e695b0,DAT_00e695b4);
  *(float *)((int)this + 0x6c) = (float)fVar4;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a5c920 @ 00a5c920 ////

undefined4 * __thiscall FUN_00a5c920(void *this,byte param_1)

{
  thunk_FUN_009ae0d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5c950 @ 00a5c950 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a5c950(int *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float10 fVar4;
  int local_24;
  float fStack_10;
  undefined4 local_c [3];
  
  FUN_009ae1e0((int)param_1);
  local_24 = 0xa5c96f;
  FUN_009ae360(param_1,_DAT_00e695e4 * (float)param_1[0xe]);
  fVar1 = (float)param_1[0x18];
  param_1[0x18] = (int)(fVar1 + (float)param_1[0x19]);
  if (6.2831855 <= fVar1 + (float)param_1[0x19]) {
    fVar1 = (float)param_1[0x18];
    do {
      fVar1 = fVar1 - 6.2831855;
    } while (6.2831855 <= fVar1);
    param_1[0x18] = (int)fVar1;
  }
  local_24 = 0xa5c9b2;
  FUN_00a5b830(param_1,local_c);
  local_24 = param_1[0x17];
  (**(code **)(*param_1 + 8))(param_1[0x16]);
  fVar2 = DAT_00e695cc;
  fVar1 = DAT_00e695c8;
  if (((char)param_1[0x1a] == '\0') && (_DAT_00e695ec < fStack_10)) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    FUN_00990e30(fVar2,fVar1);
    local_24 = 0;
    FUN_009ae120(param_1,&local_24);
    fVar4 = FUN_00990e30(DAT_00e695dc,DAT_00e695e0);
    param_1[0x19] = (int)(float)fVar4;
  }
  if (_DAT_00e695e8 < fStack_10) {
    bVar3 = FUN_00a5b630((int)param_1);
    if (!bVar3) {
      FUN_00a5b810((int)param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00a5ca70 @ 00a5ca70 ////

void __thiscall FUN_00a5ca70(void *this,float param_1,float param_2,undefined4 param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)*(float *)((int)this + 0x60));
  *(float *)((int)this + 0x58) = param_1;
  *(float *)((int)this + 0x5c) = param_2;
  fVar2 = (float10)fsin((float10)*(float *)((int)this + 0x60));
  FUN_00a5b640(this,(float)(fVar1 * (float10)*(float *)((int)this + 0x6c) + (float10)param_1),
               (float)(fVar2 * (float10)*(float *)((int)this + 0x6c) + (float10)param_2),param_3);
  return;
}


//// FUNCTION FUN_00a5caf0 @ 00a5caf0 ////

undefined4 * __thiscall FUN_00a5caf0(void *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00aabd60(this,param_1,param_2,param_3);
  fVar2 = DAT_00e69638;
  fVar1 = DAT_00e69634;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d794ac;
  fVar3 = FUN_00990e30(fVar1,fVar2);
  FUN_009ae110(this,(float)fVar3);
  fVar3 = FUN_00990e30(-3.1415927,3.1415927);
  FUN_009ae0e0(this,(float)fVar3);
  FUN_009ae360(this,DAT_00e6962c);
  *(undefined4 *)((int)this + 0x5c) = DAT_00e69630;
  fVar3 = FUN_00990e30(-3.1415927,3.1415927);
  *(float *)(*(int *)((int)this + 0x2c) + 0x28) = (float)fVar3;
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffffb | 2;
  fVar3 = FUN_00990e30(-0.3,0.3);
  *(float *)((int)this + 0x54) = (float)fVar3;
  *(undefined4 *)(*(int *)((int)this + 0x2c) + 0x2c) = DAT_00e69648;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a5cbe0 @ 00a5cbe0 ////

void __fastcall FUN_00a5cbe0(void *param_1)

{
  FUN_00aabdd0(param_1);
  if ((*(int *)((int)param_1 + 0x2c) != 0) &&
     (*(float *)((int)param_1 + 0x38) < 0.01 != (*(float *)((int)param_1 + 0x38) == 0.01))) {
    FUN_00a5b810((int)param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00a5cc10 @ 00a5cc10 ////

undefined4 * __thiscall FUN_00a5cc10(void *this,byte param_1)

{
  thunk_FUN_00aabda0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5cc60 @ 00a5cc60 ////

undefined4 * __thiscall FUN_00a5cc60(void *this,uint param_1,uint param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb5b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00aabd60(this,param_1,param_2,param_3);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d794bc;
  FUN_009ae110(this,0x3e6147ae);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffffe | 2;
  FUN_009ae360(this,0x3c23d70a);
  FUN_009ae2f0(this,0,0,0);
  *(undefined4 *)((int)this + 0x6c) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a5ccf0 @ 00a5ccf0 ////

void __fastcall FUN_00a5ccf0(void *param_1)

{
  float fVar1;
  
  FUN_00aabdd0(param_1);
  if (*(int *)((int)param_1 + 0x2c) != 0) {
    fVar1 = *(float *)((int)param_1 + 0xc) + *(float *)((int)param_1 + 0x6c);
    *(float *)((int)param_1 + 0x6c) = fVar1;
    if (0.6 <= fVar1) {
      if (fVar1 < 1.2) {
        FUN_009ae2f0(param_1,0x437f0000,0x437f0000,0x437f0000);
        FUN_009ae360(param_1,1.0 - (*(float *)((int)param_1 + 0x6c) - 0.6) * 1.6666666);
        return;
      }
      FUN_00a5b810((int)param_1);
      return;
    }
    FUN_009ae2f0(param_1,0x437f0000,0x437f0000,0x437f0000);
    FUN_009ae360(param_1,*(float *)((int)param_1 + 0x6c) * 1.6666666);
  }
  return;
}


//// FUNCTION FUN_00a5cd90 @ 00a5cd90 ////

undefined4 * __thiscall FUN_00a5cd90(void *this,byte param_1)

{
  thunk_FUN_00aabda0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5cdc0 @ 00a5cdc0 ////

undefined4 * __thiscall FUN_00a5cdc0(void *this,uint param_1,uint param_2,int param_3,char param_4)

{
  float *pfVar1;
  float10 fVar2;
  float10 fVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb5d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00aabd60(this,param_1,param_2,param_3);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d794d4;
  FUN_00a5b860(this,param_4 + -10);
  fVar2 = FUN_00990e30(DAT_00e696bc,DAT_00e696c0);
  FUN_009ae110(this,(float)fVar2);
  *(undefined4 *)((int)this + 0x5c) = DAT_00e696b8;
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffffd;
  fVar2 = FUN_00990e30(-3.1415927,3.1415927);
  *(float *)(*(int *)((int)this + 0x2c) + 0x28) = (float)fVar2;
  fVar2 = FUN_00990e30(-0.3,0.3);
  *(float *)((int)this + 0x54) = (float)fVar2;
  fVar2 = FUN_00990e30(-DAT_00e696cc,DAT_00e696cc);
  fVar3 = FUN_00990e30(-DAT_00e696cc,DAT_00e696cc);
  pfVar1 = (float *)((int)this + 0x48);
  *pfVar1 = (float)fVar3;
  *(float *)((int)this + 0x4c) = (float)fVar2;
  *(undefined4 *)((int)this + 0x50) = 0x3f800000;
  FUN_00412e20(pfVar1);
  fVar2 = FUN_00990e30(DAT_00e696c4,DAT_00e696c8);
  *pfVar1 = (float)(fVar2 * (float10)*pfVar1);
  *(float *)((int)this + 0x4c) = (float)(fVar2 * (float10)*(float *)((int)this + 0x4c));
  *(float *)((int)this + 0x50) = (float)(fVar2 * (float10)*(float *)((int)this + 0x50));
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 1;
  *(undefined4 *)((int)this + 0x60) = 0x3e4ccccd;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a5cf30 @ 00a5cf30 ////

undefined4 * __thiscall FUN_00a5cf30(void *this,byte param_1)

{
  thunk_FUN_00aabda0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5cf60 @ 00a5cf60 ////

void __fastcall FUN_00a5cf60(void *param_1)

{
  FUN_00aabdd0(param_1);
  if (*(int *)((int)param_1 + 0x2c) != 0) {
    FUN_009ae110(param_1,*(float *)((int)param_1 + 0xc) * 0.58 +
                         *(float *)(*(int *)((int)param_1 + 0x2c) + 0x24));
    if (*(float *)((int)param_1 + 0x38) < 0.01 != (*(float *)((int)param_1 + 0x38) == 0.01)) {
      FUN_00a5b810((int)param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a5cfa0 @ 00a5cfa0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00a5cfa0(void *this,uint param_1,uint param_2,float param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb5f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00aabd60(this,param_1,param_2,(int)param_3);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d794ec;
  switch(param_4) {
  case 2:
    fVar7 = 0.038;
    fVar6 = 0.025;
    break;
  default:
    fVar7 = 0.15;
    fVar6 = 0.05;
    break;
  case 4:
    fVar3 = FUN_00990e30(0.71,2.15);
    param_3 = (float)fVar3;
    FUN_009ae2f0(this,0x43260000,0x42fc0000,0x42b40000);
    goto LAB_00a5d081;
  case 5:
    fVar3 = FUN_00990e30(0.15,0.29);
    param_3 = (float)fVar3;
    FUN_009ae2f0(this,0x432f0000,0x432f0000,0x432f0000);
    goto LAB_00a5d081;
  case 6:
    fVar7 = 0.298;
    fVar6 = 0.155;
  }
  fVar3 = FUN_00990e30(fVar6,fVar7);
  param_3 = (float)fVar3;
LAB_00a5d081:
  FUN_009ae110(this,param_3);
  iVar2 = FUN_00990d30(0,4);
  FUN_00a5b860(this,(char)iVar2);
  fVar7 = DAT_00e696fc;
  fVar6 = DAT_00e696f8;
  *(float *)((int)this + 0x5c) = DAT_00e696f4;
  *(undefined4 *)((int)this + 0x58) = 0x3ba3d70a;
  fVar3 = FUN_00990e30(fVar6,fVar7);
  local_10 = (float)fVar3;
  local_18 = 0.0;
  local_14 = 0.0;
  FUN_009ae120(this,&local_18);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 4;
  if (param_4 == 5) {
    fVar3 = FUN_00990e30(DAT_00e69700,DAT_00e69704);
    local_10 = (float)fVar3;
    local_18 = 0.0;
    local_14 = 0.0;
    FUN_009ae120(this,&local_18);
    *(float *)((int)this + 0x5c) = DAT_00e696f4 + DAT_00e696f4;
  }
  else if (param_4 == 6) {
    fVar3 = FUN_00990e30(DAT_00e69708,DAT_00e6970c);
    fVar4 = FUN_00990e30(DAT_00e69708,DAT_00e6970c);
    fVar5 = FUN_00990e30(DAT_00e69708,DAT_00e6970c);
    local_18 = (float)fVar5;
    local_14 = (float)fVar4;
    local_10 = (float)fVar3;
    FUN_009ae120(this,&local_18);
    fVar6 = DAT_00e69718;
    uVar1 = DAT_00e69714;
    *(float *)((int)this + 0x5c) = _DAT_00e69710 * DAT_00e696f4;
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffffb;
    fVar7 = DAT_00e6971c;
    *(undefined4 *)((int)this + 0x58) = uVar1;
    fVar3 = FUN_00990e30(fVar6,fVar7);
    fVar6 = (float)fVar3;
    FUN_009ae2f0(this,fVar6,fVar6,fVar6);
  }
  fVar3 = FUN_00990e30(-3.1415927,3.1415927);
  *(float *)(*(int *)((int)this + 0x2c) + 0x28) = (float)fVar3;
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 2;
  fVar3 = FUN_00990e30(-0.3,0.3);
  *(float *)((int)this + 0x54) = (float)fVar3;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a5d250 @ 00a5d250 ////

undefined4 * __thiscall FUN_00a5d250(void *this,byte param_1)

{
  thunk_FUN_00aabda0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5d280 @ 00a5d280 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a5d280(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c [3];
  
  FUN_00a5d950(param_1);
  if (param_1[0xb] != 0) {
    iVar2 = FUN_00a5b830(param_1,local_c);
    if (_DAT_00e69740 < *(float *)(iVar2 + 8)) {
      fVar1 = _DAT_00e69744 * (float)param_1[3];
      local_1c = (float)param_1[0xf] - fVar1;
      param_1[0xf] = (int)local_1c;
      if (local_1c <= 0.0) {
        local_1c = 0.0;
      }
      param_1[0xf] = (int)local_1c;
      local_20 = (float)param_1[0x10] - fVar1;
      param_1[0x10] = (int)local_20;
      if (local_20 <= 0.0) {
        local_20 = 0.0;
      }
      param_1[0x10] = (int)local_20;
      local_24 = (float)param_1[0x11] - fVar1;
      param_1[0x11] = (int)local_24;
      if (local_24 <= 0.0) {
        local_24 = 0.0;
      }
      param_1[0x11] = (int)local_24;
      FUN_009ae2f0(param_1,local_1c,local_20,local_24);
    }
    iVar2 = FUN_00a5b830(param_1,local_c);
    if (_DAT_00e69754 < *(float *)(iVar2 + 8)) {
      param_1[0x17] = DAT_00e69750;
    }
    param_1[0x23] = (int)(_DAT_00e6974c * (float)param_1[3] + (float)param_1[0x23]);
    param_1[0x22] = (int)((float)param_1[0x24] * (float)param_1[3] + (float)param_1[0x22]);
    FUN_00a5b830(param_1,&local_18);
    fVar3 = (float10)fsin((float10)(float)param_1[0x22] * (float10)57.288353);
    local_18 = (float)(fVar3 * (float10)(float)param_1[0x23] * (float10)(float)param_1[3] +
                      (float10)local_18);
    fVar3 = (float10)fcos((float10)(float)param_1[0x22] * (float10)57.288353);
    local_14 = (float)((float10)local_14 -
                      fVar3 * (float10)(float)param_1[0x23] * (float10)(float)param_1[3]);
    (**(code **)(*param_1 + 8))(local_18,local_14,local_10);
    iVar2 = FUN_00a5b830(param_1,&local_18);
    if ((_DAT_00e69740 < *(float *)(iVar2 + 8)) && (1 < DAT_0105be08)) {
      local_18 = local_24;
      local_14 = local_20;
      local_10 = local_1c;
      fVar3 = FUN_00990e30(-DAT_00e69748,DAT_00e69748);
      local_18 = (float)(fVar3 + (float10)local_18);
      fVar3 = FUN_00990e30(-DAT_00e69748,DAT_00e69748);
      local_14 = (float)(fVar3 + (float10)local_14);
      fVar3 = FUN_00990e30(-DAT_00e69748,DAT_00e69748);
      local_10 = (float)(fVar3 + (float10)local_10);
      FUN_009af7b0(DAT_0105cbec,&local_18,(int *)&DAT_00000009,7,(undefined *)param_1[1]);
    }
  }
  return;
}


//// FUNCTION FUN_00a5d4c0 @ 00a5d4c0 ////

undefined4 * __thiscall
FUN_00a5d4c0(void *this,uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a5d8f0(this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_FUN_00d79504;
  *(undefined4 *)((int)this + 0x84) = param_4;
  local_4 = 0;
  FUN_009ae110(this,DAT_00e69760);
  local_18 = 0;
  local_14 = 0;
  local_10 = DAT_00e69764;
  FUN_009ae120(this,&local_18);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffffe | 2;
  iVar1 = _rand();
  FUN_00a5d9e0(this,iVar1 % DAT_00e6975c);
  FUN_00a5d8d0(this,DAT_00e6975c);
  FUN_00a5d8b0(this,DAT_00e69758);
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  iVar1 = _rand();
  *(float *)((int)this + 0x90) = (float)(iVar1 % 0x168) * 0.00027777778 + 0.001;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a5d5d0 @ 00a5d5d0 ////

undefined4 * __thiscall FUN_00a5d5d0(void *this,byte param_1)

{
  thunk_FUN_00a5d8a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5d790 @ 00a5d790 ////

undefined4 * __thiscall FUN_00a5d790(void *this,uint param_1,uint param_2,int param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a5d8f0(this,param_1,param_2,param_3);
  local_10 = DAT_00e697bc;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d7951c;
  local_18 = 0;
  local_14 = 0;
  FUN_009ae120(this,&local_18);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffffe | 2;
  FUN_00a5d9e0(this,0);
  FUN_00a5d8d0(this,1);
  FUN_00a5d8b0(this,-1.0);
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x2c) + 0x24) = 0x3727c5ac;
  *(undefined4 *)((int)this + 0x34) = 0x3727c5ac;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a5d850 @ 00a5d850 ////

undefined4 * __thiscall FUN_00a5d850(void *this,byte param_1)

{
  thunk_FUN_00a5d8a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5d8a0 @ 00a5d8a0 ////

void __fastcall FUN_00a5d8a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d79530;
  FUN_00aabda0(param_1);
  return;
}


//// FUNCTION FUN_00a5d8b0 @ 00a5d8b0 ////

void __thiscall FUN_00a5d8b0(void *this,float param_1)

{
  *(float *)((int)this + 0x78) =
       (param_1 / (float)(*(int *)((int)this + 0x6c) - *(int *)((int)this + 0x74))) * 0.001;
  return;
}


//// FUNCTION FUN_00a5d8d0 @ 00a5d8d0 ////

void __thiscall FUN_00a5d8d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x6c) = param_1;
  return;
}


//// FUNCTION FUN_00a5d8e0 @ 00a5d8e0 ////

void __thiscall FUN_00a5d8e0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x74) = param_1;
  return;
}


//// FUNCTION FUN_00a5d8f0 @ 00a5d8f0 ////

undefined4 * __thiscall FUN_00a5d8f0(void *this,uint param_1,uint param_2,int param_3)

{
  FUN_00aabd60(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined ***)this = &PTR_FUN_00d79530;
  *(undefined4 *)((int)this + 0x78) = 0x3dcccccd;
  return this;
}


//// FUNCTION FUN_00a5d930 @ 00a5d930 ////

undefined4 * __thiscall FUN_00a5d930(void *this,byte param_1)

{
  FUN_00a5d8a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5d950 @ 00a5d950 ////

void __fastcall FUN_00a5d950(void *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float10 extraout_ST0;
  ulonglong uVar4;
  
  FUN_00aabdd0(param_1);
  iVar1 = *(int *)((int)param_1 + 0x2c);
  if (iVar1 != 0) {
    if (*(float *)((int)param_1 + 0x78) <= 0.0) {
      *(undefined4 *)((int)param_1 + 0x70) = *(undefined4 *)((int)param_1 + 0x74);
      *(char *)(iVar1 + 0x30) = (char)*(undefined4 *)((int)param_1 + 0x74);
      return;
    }
    fVar3 = *(float *)((int)param_1 + 0xc) + *(float *)((int)param_1 + 0x80);
    *(float *)((int)param_1 + 0x80) = fVar3;
    if (*(float *)((int)param_1 + 0x78) <= fVar3) {
      uVar4 = FUN_00acd42c();
      iVar2 = *(int *)((int)param_1 + 0x74);
      *(float *)((int)param_1 + 0x80) =
           (float)(extraout_ST0 - (float10)(int)uVar4 * (float10)*(float *)((int)param_1 + 0x78));
      iVar2 = (((int)uVar4 - iVar2) + *(int *)((int)param_1 + 0x70)) %
              (*(int *)((int)param_1 + 0x6c) - iVar2) + iVar2;
      *(int *)((int)param_1 + 0x70) = iVar2;
      *(char *)(iVar1 + 0x30) = (char)iVar2;
    }
  }
  return;
}


//// FUNCTION FUN_00a5d9e0 @ 00a5d9e0 ////

void __thiscall FUN_00a5d9e0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x70) = param_1;
  if (*(int *)((int)this + 0x2c) != 0) {
    *(char *)(*(int *)((int)this + 0x2c) + 0x30) = (char)param_1;
  }
  return;
}


//// FUNCTION FUN_00a5da00 @ 00a5da00 ////

void __fastcall FUN_00a5da00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d79548;
  FUN_00a5d8a0(param_1);
  return;
}


//// FUNCTION FUN_00a5da10 @ 00a5da10 ////

undefined4 * __thiscall FUN_00a5da10(void *this,byte param_1)

{
  FUN_00a5da00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5da30 @ 00a5da30 ////

void __fastcall FUN_00a5da30(void *param_1)

{
  float fVar1;
  
  FUN_00a5d950(param_1);
  if (*(int *)((int)param_1 + 0x2c) != 0) {
    fVar1 = *(float *)((int)param_1 + 0xc) + *(float *)((int)param_1 + 0x84);
    *(float *)((int)param_1 + 0x84) = fVar1;
    if (0.4 <= fVar1) {
      if (fVar1 < 0.8) {
        FUN_009ae2f0(param_1,0x437f0000,0x437f0000,0x437f0000);
        FUN_009ae360(param_1,1.0 - (*(float *)((int)param_1 + 0x84) - 0.4) * 2.5);
        return;
      }
      FUN_00a5b810((int)param_1);
      return;
    }
    FUN_009ae2f0(param_1,0x437f0000,0x437f0000,0x437f0000);
    FUN_009ae360(param_1,*(float *)((int)param_1 + 0x84) * 2.5);
  }
  return;
}


//// FUNCTION FUN_00a5dae0 @ 00a5dae0 ////

undefined4 * __thiscall FUN_00a5dae0(void *this,uint param_1,uint param_2,int param_3)

{
  float10 fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a5d8f0(this,param_1,param_2,param_3);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d79548;
  fVar1 = FUN_00990e30(0.062,0.125);
  FUN_009ae110(this,(float)fVar1);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffffe | 2;
  FUN_00a5d9e0(this,0);
  FUN_00a5d8d0(this,1);
  FUN_00a5d8b0(this,-1.0);
  *(undefined4 *)((int)this + 0x54) = 0x3f060a92;
  fVar1 = FUN_00990e30(0.0,3.1415927);
  FUN_009ae0e0(this,(float)fVar1);
  FUN_009ae360(this,0x3c23d70a);
  FUN_009ae2f0(this,0,0,0);
  *(undefined4 *)((int)this + 0x50) = DAT_00e69804;
  *(undefined4 *)((int)this + 0x84) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a5dbd0 @ 00a5dbd0 ////

void __fastcall FUN_00a5dbd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7955c;
  FUN_00aabda0(param_1);
  return;
}


//// FUNCTION FUN_00a5dbe0 @ 00a5dbe0 ////

undefined4 * __thiscall FUN_00a5dbe0(void *this,byte param_1)

{
  FUN_00a5dbd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5dc00 @ 00a5dc00 ////

void __thiscall FUN_00a5dc00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x70) = param_1;
  *(undefined4 *)((int)this + 0x74) = param_2;
  *(undefined4 *)((int)this + 0x78) = param_3;
  return;
}


//// FUNCTION FUN_00a5dc20 @ 00a5dc20 ////

void __fastcall FUN_00a5dc20(void *param_1)

{
  float fVar1;
  
  FUN_00aabdd0(param_1);
  if (*(int *)((int)param_1 + 0x2c) != 0) {
    fVar1 = *(float *)((int)param_1 + 0xc) + *(float *)((int)param_1 + 0x6c);
    *(float *)((int)param_1 + 0x6c) = fVar1;
    if (fVar1 < *(float *)((int)param_1 + 0x70)) {
      FUN_009ae2f0(param_1,0x437f0000,0x437f0000,0x437f0000);
      FUN_009ae360(param_1,*(float *)((int)param_1 + 0x6c) / *(float *)((int)param_1 + 0x70));
      return;
    }
    if (*(float *)((int)param_1 + 0x70) + *(float *)((int)param_1 + 0x78) < fVar1) {
      FUN_009ae2f0(param_1,0x437f0000,0x437f0000,0x437f0000);
      FUN_009ae360(param_1,1.0 - (*(float *)((int)param_1 + 0x6c) -
                                 (*(float *)((int)param_1 + 0x70) + *(float *)((int)param_1 + 0x78))
                                 ) / *(float *)((int)param_1 + 0x74));
      return;
    }
    if (*(float *)((int)param_1 + 0x74) + *(float *)((int)param_1 + 0x70) +
        *(float *)((int)param_1 + 0x78) < fVar1) {
      FUN_00a5b810((int)param_1);
      return;
    }
    FUN_009ae2f0(param_1,0x437f0000,0x437f0000,0x437f0000);
    FUN_009ae360(param_1,0x3f800000);
  }
  return;
}


//// FUNCTION FUN_00a5dd00 @ 00a5dd00 ////

undefined4 * __thiscall FUN_00a5dd00(void *this,uint param_1,uint param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00aabd60(this,param_1,param_2,param_3);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d7955c;
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffffe | 2;
  FUN_009ae360(this,0x3c23d70a);
  FUN_009ae2f0(this,0,0,0);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0x40400000;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a5dd90 @ 00a5dd90 ////

void __fastcall FUN_00a5dd90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7956c;
  if (*(short *)(param_1 + 2) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)param_1[3]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[3]);
}


//// FUNCTION FUN_00a5dde0 @ 00a5dde0 ////

void __fastcall FUN_00a5dde0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      BuildAndDrawPrimitive(*(int *)(*(int *)(param_1 + 0xc) + iVar1 * 4) + 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x18));
  }
  return;
}


//// FUNCTION FUN_00a5de10 @ 00a5de10 ////

bool __thiscall FUN_00a5de10(void *this,int *param_1)

{
  return *(int *)((int)this + 0x18) <= *param_1;
}


//// FUNCTION FUN_00a5de70 @ 00a5de70 ////

int * __fastcall FUN_00a5de70(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < (int)(uint)*(ushort *)(param_1 + 8)) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xc) + iVar1 * 4);
    *piVar2 = iVar1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return piVar2;
  }
  return (int *)0x0;
}


//// FUNCTION FUN_00a5de90 @ 00a5de90 ////

void __fastcall FUN_00a5de90(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(param_1 + 4))();
  iVar3 = iVar2 - *(int *)(param_1 + 8);
  fVar1 = (float)iVar3;
  if (iVar3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(int *)(param_1 + 8) = iVar2;
  *(float *)(param_1 + 0xc) = fVar1 * 0.001;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x10);
  return;
}


//// FUNCTION FUN_00a5dee0 @ 00a5dee0 ////

void __fastcall FUN_00a5dee0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  piVar2 = *(int **)(param_1 + 0x2c);
  *(undefined4 *)(*(int *)(iVar1 + 0xc) + *piVar2 * 4) =
       *(undefined4 *)(*(int *)(iVar1 + 0xc) + -4 + *(int *)(iVar1 + 0x18) * 4);
  **(int **)(*(int *)(iVar1 + 0xc) + *piVar2 * 4) = *piVar2;
  *(int **)(*(int *)(iVar1 + 0xc) + -4 + *(int *)(iVar1 + 0x18) * 4) = piVar2;
  *piVar2 = *(int *)(iVar1 + 0x18) + -1;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + -1;
  *(undefined1 *)(param_1 + 0x24) = 1;
  return;
}


//// FUNCTION FUN_00a5df30 @ 00a5df30 ////

undefined4 * __thiscall FUN_00a5df30(void *this,byte param_1)

{
  FUN_00a5dd90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5df50 @ 00a5df50 ////

int __fastcall FUN_00a5df50(int param_1)

{
  FUN_0041f350((undefined4 *)(param_1 + 4));
  return param_1;
}


//// FUNCTION FUN_00a5df60 @ 00a5df60 ////

/* WARNING: Removing unreachable block (ram,0x00a5df8e) */

void __fastcall FUN_00a5df60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d79574;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[6] = param_1[5];
  }
  if (param_1[5] != 0) {
    *(undefined4 *)(param_1[5] + 4) = param_1[6];
  }
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_1[5] != 0) {
    *(undefined4 *)(param_1[5] + 4) = param_1[6];
  }
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


//// FUNCTION FUN_00a5dfb0 @ 00a5dfb0 ////

void __thiscall FUN_00a5dfb0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = *(float *)((int)this + 0x30) * 0.5;
  *(float *)((int)this + 0x34) = *param_1;
  *(float *)((int)this + 0x38) = param_1[1];
  fVar1 = *param_1;
  iVar3 = *(int *)((int)this + 0x2c);
  fVar2 = param_1[1];
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(float *)(iVar3 + 0x14) = fVar1 - fVar4;
  *(float *)(iVar3 + 0x18) = fVar2 - fVar4;
  iVar3 = *(int *)((int)this + 0x2c);
  fVar1 = *param_1;
  fVar2 = param_1[1];
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(float *)(iVar3 + 0x20) = fVar4 + fVar1;
  *(float *)(iVar3 + 0x24) = fVar4 + fVar2;
  return;
}


//// FUNCTION FUN_00a5e040 @ 00a5e040 ////

void __thiscall FUN_00a5e040(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x30) = param_1;
  FUN_00a5dfb0(this,(float *)((int)this + 0x34));
  return;
}


//// FUNCTION FUN_00a5e060 @ 00a5e060 ////

void __thiscall FUN_00a5e060(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x28) + 0x10);
    if (iVar1 <= param_1) {
      param_1 = iVar1 + -1;
    }
  }
  *(int *)((int)this + 0x3c) = param_1;
  iVar1 = *(int *)(*(int *)((int)this + 0x28) + 0x14);
  iVar2 = *(int *)((int)this + 0x2c);
  fVar3 = 1.0 / (float)(*(int *)(*(int *)((int)this + 0x28) + 0x10) / iVar1);
  *(float *)(iVar2 + 0x2c) = (float)(param_1 % iVar1) * (1.0 / (float)iVar1);
  *(float *)(iVar2 + 0x30) = (float)(param_1 / iVar1) * fVar3;
  iVar2 = *(int *)((int)this + 0x2c);
  *(float *)(iVar2 + 0x34) = (float)(param_1 % iVar1 + 1) * (1.0 / (float)iVar1);
  *(float *)(iVar2 + 0x38) = (float)(param_1 / iVar1 + 1) * fVar3;
  return;
}


//// FUNCTION FUN_00a5e120 @ 00a5e120 ////

undefined4 * __thiscall
FUN_00a5e120(void *this,ushort param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(ushort *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_FUN_00d7956c;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x18) = 0;
  pvVar1 = operator_new((uint)param_1 << 2);
  iVar2 = 0;
  *(void **)((int)this + 0xc) = pvVar1;
  if (*(short *)((int)this + 8) != 0) {
    do {
      pvVar1 = operator_new(0x40);
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        FUN_0041f350((undefined4 *)((int)pvVar1 + 4));
      }
      *(undefined4 *)((int)pvVar1 + 8) = *(undefined4 *)((int)this + 4);
      *(void **)(*(int *)((int)this + 0xc) + iVar2 * 4) = pvVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)((int)this + 8));
  }
  return this;
}


//// FUNCTION FUN_00a5e1b0 @ 00a5e1b0 ////

undefined4 * __thiscall
FUN_00a5e1b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb69b;
  pvStack_c = ExceptionList;
  piVar1 = (int *)((int)this + 0x14);
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_00d79574;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = param_3;
  *(undefined4 *)((int)this + 0x30) = 0x41200000;
  *(float *)((int)this + 0x34) = 0.0;
  *(undefined4 *)((int)this + 0x38) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  FUN_00a5dfb0(this,(float *)((int)this + 0x34));
  FUN_00a5e060(this,*(int *)((int)this + 0x3c));
  *(void **)((int)this + 0x1c) = this;
  FUN_00acdb9e(0xe69870);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0x20) = iVar2;
  if (s___AVCBaseParticle2D_MV___00e69854[0x19] != '\0') {
    iVar2 = 0x14;
    pcVar5 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe69870);
    FUN_0097df60(pcVar3,pcVar5,iVar2);
    s___AVCBaseParticle2D_MV___00e69854[0x19] = '\0';
  }
  *(undefined4 *)((int)this + 4) = param_1;
  *(int ***)((int)this + 0x18) = &DAT_010c9818;
  *piVar1 = (int)DAT_010c9818;
  *(int **)((int)DAT_010c9818 + 4) = piVar1;
  DAT_010c9818 = piVar1;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar4 = (**(code **)((int)this + 4))();
  *(undefined4 *)((int)this + 8) = uVar4;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00a5e2c0 @ 00a5e2c0 ////

undefined4 * __thiscall FUN_00a5e2c0(void *this,byte param_1)

{
  FUN_00a5df60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5e2e0 @ 00a5e2e0 ////

void __fastcall FUN_00a5e2e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d79580;
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


//// FUNCTION FUN_00a5e330 @ 00a5e330 ////

undefined4 * __thiscall FUN_00a5e330(void *this,byte param_1)

{
  FUN_00a5e2e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5e350 @ 00a5e350 ////

void __fastcall FUN_00a5e350(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d79580;
  return;
}


//// FUNCTION FUN_00a5e3b0 @ 00a5e3b0 ////

void __fastcall FUN_00a5e3b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d79590;
  FUN_00a5df60(param_1);
  return;
}


//// FUNCTION FUN_00a5e3c0 @ 00a5e3c0 ////

void __thiscall FUN_00a5e3c0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x50) = *param_1;
  *(undefined4 *)((int)this + 0x54) = param_1[1];
  return;
}


//// FUNCTION FUN_00a5e3e0 @ 00a5e3e0 ////

undefined4 * __thiscall
FUN_00a5e3e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  FUN_00a5e1b0(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x48) = 0x437f0000;
  *(undefined4 *)((int)this + 0x4c) = 0x437f0000;
  *(undefined4 *)((int)this + 0x44) = 0x437f0000;
  *(undefined ***)this = &PTR_FUN_00d79590;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  *(undefined4 *)(*(int *)((int)this + 0x2c) + 0xc) = 0xffffffff;
  fVar1 = FUN_004012c0(0.0);
  *(float *)(*(int *)((int)this + 0x2c) + 0x10) = (float)fVar1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  return this;
}


//// FUNCTION FUN_00a5e470 @ 00a5e470 ////

undefined4 * __thiscall FUN_00a5e470(void *this,byte param_1)

{
  FUN_00a5e3b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5e490 @ 00a5e490 ////

void __fastcall FUN_00a5e490(void *param_1)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  float local_10;
  float local_c;
  float local_4;
  
  FUN_00a5de90((int)param_1);
  bVar2 = FUN_00a5de10(*(void **)((int)param_1 + 0x28),*(int **)((int)param_1 + 0x2c));
  if (!bVar2) {
    local_4 = *(float *)((int)param_1 + 0xc) * *(float *)((int)param_1 + 0x54);
    local_10 = *(float *)((int)param_1 + 0xc) * *(float *)((int)param_1 + 0x50) +
               *(float *)((int)param_1 + 0x34);
    local_c = local_4 + *(float *)((int)param_1 + 0x38);
    FUN_00a5dfb0(param_1,&local_10);
    fVar3 = FUN_004012c0(*(float *)((int)param_1 + 0x58) * *(float *)((int)param_1 + 0xc));
    iVar1 = *(int *)((int)param_1 + 0x2c);
    fVar3 = FUN_004012c0((float)(fVar3 + (float10)*(float *)(iVar1 + 0x10)));
    *(float *)(iVar1 + 0x10) = (float)fVar3;
    if ((*(float *)((int)param_1 + 0x40) < 0.0 != (*(float *)((int)param_1 + 0x40) == 0.0)) ||
       (*(float *)((int)param_1 + 0x30) < 0.0)) {
      FUN_00a5dee0((int)param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00a5e540 @ 00a5e540 ////

void __thiscall FUN_00a5e540(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((int)this + 0x44) = param_1;
  *(undefined4 *)((int)this + 0x48) = param_2;
  *(undefined4 *)((int)this + 0x4c) = param_3;
  uVar4 = FUN_00acd42c();
  uVar5 = FUN_00acd42c();
  iVar1 = (int)uVar5;
  uVar5 = FUN_00acd42c();
  iVar2 = (int)uVar5;
  uVar5 = FUN_00acd42c();
  puVar3 = (undefined4 *)FUN_0040a530(&param_3,(int)uVar4,(int)uVar5,iVar2,iVar1);
  *(undefined4 *)(*(int *)((int)this + 0x2c) + 0xc) = *puVar3;
  return;
}


//// FUNCTION FUN_00a5e5a0 @ 00a5e5a0 ////

void __thiscall FUN_00a5e5a0(void *this,float param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_004012c0(param_1);
  *(float *)(*(int *)((int)this + 0x2c) + 0x10) = (float)fVar1;
  return;
}


//// FUNCTION FUN_00a5e5d0 @ 00a5e5d0 ////

void __thiscall FUN_00a5e5d0(void *this,undefined4 param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  *(undefined4 *)((int)this + 0x40) = param_1;
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    *(undefined1 *)(*(int *)((int)this + 0x2c) + 0xf) = 0xff;
    return;
  }
  *(char *)(*(int *)((int)this + 0x2c) + 0xf) = (char)iVar1;
  return;
}


//// FUNCTION FUN_00a5e680 @ 00a5e680 ////

void __fastcall FUN_00a5e680(void *param_1)

{
  float fVar1;
  bool bVar2;
  
  FUN_00aabfe0(param_1);
  bVar2 = FUN_00a5de10(*(void **)((int)param_1 + 0x28),*(int **)((int)param_1 + 0x2c));
  if (!bVar2) {
    FUN_00a5e540(param_1,0x437f0000,0x437f0000,0x437f0000);
    fVar1 = *(float *)((int)param_1 + 0x40);
    if (!NAN(fVar1) && fVar1 < 0.01 != (fVar1 == 0.01)) {
      bVar2 = FUN_00a5de10(*(void **)((int)param_1 + 0x28),*(int **)((int)param_1 + 0x2c));
      if (!bVar2) {
        FUN_00a5dee0((int)param_1);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a5e6e0 @ 00a5e6e0 ////

undefined4 * __thiscall
FUN_00a5e6e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb6d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00aabf70(this,param_1,param_2,param_3);
  uVar2 = DAT_00e698ec;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d795a0;
  FUN_00a5e040(this,uVar2);
  iVar4 = FUN_00990d30(0,*(int *)(*(int *)((int)this + 0x28) + 0x10));
  FUN_00a5e060(this,iVar4);
  fVar3 = DAT_00e698f8;
  fVar1 = -DAT_00e698f8;
  *(undefined4 *)((int)this + 0x60) = DAT_00e698f0;
  fVar5 = FUN_00990e30(fVar1,fVar3);
  fVar6 = FUN_00990e30(-DAT_00e698f8,DAT_00e698f8);
  local_14 = (float)fVar6;
  local_10 = (float)fVar5;
  FUN_00a5e3c0(this,&local_14);
  *(undefined4 *)((int)this + 0x5c) = DAT_00e698fc;
  fVar5 = FUN_00990e30(-3.1415927,3.1415927);
  fVar5 = FUN_004012c0((float)fVar5);
  *(float *)(*(int *)((int)this + 0x2c) + 0x10) = (float)fVar5;
  *(uint *)((int)this + 0x6c) = *(uint *)((int)this + 0x6c) & 0xfffffffc;
  fVar5 = FUN_00990e30(-0.7,0.7);
  *(float *)((int)this + 0x58) = (float)fVar5;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a5e810 @ 00a5e810 ////

undefined4 * __thiscall FUN_00a5e810(void *this,byte param_1)

{
  thunk_FUN_00aabfb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5e840 @ 00a5e840 ////

void __fastcall FUN_00a5e840(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d795b0;
  FUN_00aac140(param_1);
  return;
}


//// FUNCTION FUN_00a5e850 @ 00a5e850 ////

undefined4 * __thiscall FUN_00a5e850(void *this,byte param_1)

{
  FUN_00a5e840(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5e870 @ 00a5e870 ////

void __fastcall FUN_00a5e870(void *param_1)

{
  float fVar1;
  bool bVar2;
  
  FUN_00aac180(param_1);
  bVar2 = FUN_00a5de10(*(void **)((int)param_1 + 0x28),*(int **)((int)param_1 + 0x2c));
  if (!bVar2) {
    fVar1 = *(float *)((int)param_1 + 0xc) + *(float *)((int)param_1 + 0x8c);
    *(float *)((int)param_1 + 0x8c) = fVar1;
    if (0.4 <= fVar1) {
      if (fVar1 < 0.8) {
        FUN_00a5e540(param_1,0x437f0000,0x437f0000,0x437f0000);
        FUN_00a5e5d0(param_1,1.0 - (*(float *)((int)param_1 + 0x8c) - 0.4) * 2.5);
        return;
      }
      FUN_00a5dee0((int)param_1);
      return;
    }
    FUN_00a5e540(param_1,0x437f0000,0x437f0000,0x437f0000);
    FUN_00a5e5d0(param_1,*(float *)((int)param_1 + 0x8c) * 2.5);
  }
  return;
}


//// FUNCTION FUN_00a5e930 @ 00a5e930 ////

undefined4 * __thiscall
FUN_00a5e930(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb6f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00aac240(this,param_1,param_2,param_3,param_4);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d795b0;
  *(uint *)((int)this + 0x6c) = *(uint *)((int)this + 0x6c) | 1;
  FUN_00aac370(this,0);
  FUN_00aac220(this,6);
  FUN_00aac150(this,1000.0);
  *(undefined4 *)((int)this + 0x58) = 0x3f060a92;
  fVar1 = FUN_00990e30(0.0,3.1415927);
  FUN_00a5e5a0(this,(float)fVar1);
  FUN_00a5e5d0(this,0x3c23d70a);
  FUN_00a5e540(this,0,0,0);
  *(undefined4 *)((int)this + 0x8c) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a5ea30 @ 00a5ea30 ////

void __fastcall FUN_00a5ea30(int param_1)

{
  float10 fVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    fVar1 = FUN_009b3be0((int)DAT_0105cc64);
    fVar1 = fVar1 * (float10)*(float *)(param_1 + 8) + (float10)*(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0xc) = (float)fVar1;
    if ((float10)1.0 <= fVar1) {
      do {
        FUN_009b3a70(DAT_0105cc64,(float *)(param_1 + 0x10),*(float *)(param_1 + 0x1c),
                     *(float *)(param_1 + 0x18),*(undefined4 **)(param_1 + 0x24),
                     *(int *)(param_1 + 0x20),(undefined *)0x0);
        *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - 1.0;
      } while (1.0 <= *(float *)(param_1 + 0xc));
    }
  }
  return;
}


//// FUNCTION FUN_00a5eab0 @ 00a5eab0 ////

undefined4 * __fastcall FUN_00a5eab0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb71b;
  local_c = ExceptionList;
  piVar1 = param_1 + 0xb;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d795c0;
  param_1[3] = 0;
  param_1[6] = 0xbf800000;
  param_1[7] = 0xbf800000;
  param_1[10] = 0;
  param_1[0xd] = 0;
  *piVar1 = 0;
  param_1[0xc] = 0;
  local_4 = 0;
  param_1[0xd] = param_1;
  FUN_00acdb9e(0xe699b8);
  iVar2 = FUN_0097dda0();
  param_1[0xe] = iVar2;
  if (DAT_00e699b4 != '\0') {
    iVar2 = 0x2c;
    pcVar4 = "ListLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe699b8);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e699b4 = '\0';
  }
  param_1[0xc] = &DAT_010c984c;
  *piVar1 = (int)DAT_010c984c;
  *(int **)((int)DAT_010c984c + 4) = piVar1;
  DAT_010c984c = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00a5eb90 @ 00a5eb90 ////

undefined4 * __thiscall
FUN_00a5eb90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb73b;
  local_c = ExceptionList;
  piVar1 = (int *)((int)this + 0x2c);
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d795c0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xbf800000;
  *(undefined4 *)((int)this + 0x1c) = 0xbf800000;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = 0;
  *(void **)((int)this + 0x34) = this;
  FUN_00acdb9e(0xe699b8);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0x38) = iVar2;
  if (DAT_00e699dc != '\0') {
    iVar2 = 0x2c;
    pcVar4 = "ListLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe699b8);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e699dc = '\0';
  }
  *(int ***)((int)this + 0x30) = &DAT_010c984c;
  *piVar1 = (int)DAT_010c984c;
  *(int **)((int)DAT_010c984c + 4) = piVar1;
  DAT_010c984c = piVar1;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 8) = param_5;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a5ec90 @ 00a5ec90 ////

/* WARNING: Removing unreachable block (ram,0x00a5ecbe) */

void __fastcall FUN_00a5ec90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d795c0;
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xc] = param_1[0xb];
  }
  if (param_1[0xb] != 0) {
    *(undefined4 *)(param_1[0xb] + 4) = param_1[0xc];
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (param_1[0xb] != 0) {
    *(undefined4 *)(param_1[0xb] + 4) = param_1[0xc];
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}


//// FUNCTION FUN_00a5ece0 @ 00a5ece0 ////

undefined4 * __thiscall FUN_00a5ece0(void *this,byte param_1)

{
  FUN_00a5ec90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5ed00 @ 00a5ed00 ////

void __fastcall FUN_00a5ed00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d795cc;
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


//// FUNCTION FUN_00a5ed50 @ 00a5ed50 ////

undefined4 * __thiscall FUN_00a5ed50(void *this,byte param_1)

{
  FUN_00a5ed00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a5ed70 @ 00a5ed70 ////

void __fastcall FUN_00a5ed70(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d795cc;
  return;
}


//// FUNCTION FUN_00a5ee00 @ 00a5ee00 ////

void __cdecl FUN_00a5ee00(undefined4 param_1,int param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_2 < 1) {
    *param_3 = '\0';
    return;
  }
  iVar1 = param_2 + -1;
  switch(param_1) {
  case 0:
  case 1:
    pcVar2 = "mup_eyes_v";
    goto LAB_00a5ee9e;
  case 2:
    pcVar2 = "mup_lips_v";
    break;
  case 3:
    pcVar2 = "mup_beard_v";
    break;
  case 4:
    pcVar2 = "mup_tatoo_v";
    goto LAB_00a5ee9e;
  case 5:
    pcVar2 = "mup_meyebrow_v";
    if (9 < iVar1) {
      _sprintf(param_3,"%s%d.dds","mup_meyebrow_v",iVar1);
      return;
    }
    goto LAB_00a5ee72;
  case 6:
    pcVar2 = "mup_feyebrow_v";
LAB_00a5ee9e:
    if (9 < iVar1) {
      _sprintf(param_3,"%s%d.dds",pcVar2,iVar1);
      return;
    }
    _sprintf(param_3,"%s0%d.dds",pcVar2,iVar1);
    return;
  case 7:
    pcVar2 = "mup_nails_v";
    break;
  case 8:
    pcVar2 = "mup_mask_v";
    if (9 < iVar1) {
      _sprintf(param_3,"%s%d.dds","mup_mask_v",iVar1);
      return;
    }
LAB_00a5ee72:
    _sprintf(param_3,"%s0%d.dds",pcVar2,iVar1);
    return;
  default:
    goto switchD_00a5ee1f_default;
  }
  if (iVar1 < 10) {
    _sprintf(param_3,"%s0%d.dds",pcVar2,iVar1);
    return;
  }
  _sprintf(param_3,"%s%d.dds",pcVar2,iVar1);
switchD_00a5ee1f_default:
  return;
}


//// FUNCTION FUN_00a5ef20 @ 00a5ef20 ////

int __cdecl FUN_00a5ef20(int param_1)

{
  return *(int *)(&DAT_010c9870 + param_1 * 4) + 1;
}


//// FUNCTION FUN_00a5ef30 @ 00a5ef30 ////

int __cdecl FUN_00a5ef30(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_10c;
  char local_108;
  undefined4 local_107;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return 0;
  }
  local_108 = '\0';
  puVar4 = &local_107;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  switch(param_2) {
  case 0:
  case 1:
    pcVar2 = "mup_eyes_v";
    break;
  case 2:
    pcVar2 = "mup_lips_v";
    break;
  case 3:
    pcVar2 = "mup_beard_v";
    break;
  case 4:
    pcVar2 = "mup_tatoo_v";
    break;
  case 5:
    pcVar2 = "mup_meyebrow_v";
    break;
  case 6:
    pcVar2 = "mup_feyebrow_v";
    break;
  case 7:
    pcVar2 = "mup_nails_v";
    break;
  case 8:
    pcVar2 = "mup_mask_v";
    break;
  default:
    goto switchD_00a5ef70_default;
  }
  _sprintf(&local_108,pcVar2);
switchD_00a5ef70_default:
  pcVar2 = &local_108;
  local_10c = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = _strncmp(param_1,&local_108,(int)pcVar2 - (int)&local_107);
  if (iVar3 == 0) {
    FUN_009b7af0(param_1 + ((int)pcVar2 - (int)&local_107),&local_10c,(int *)0x0);
    local_10c = local_10c + 1;
  }
  return local_10c;
}


//// FUNCTION FUN_00a5f090 @ 00a5f090 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a5f090(void)

{
  char cVar1;
  undefined1 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 *unaff_FS_OFFSET;
  char *pcVar9;
  char *local_148;
  uint local_144;
  uint local_140;
  char local_13c [20];
  void *local_128;
  undefined4 local_124;
  undefined4 *local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  char local_10c [256];
  undefined4 local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cfb79f;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  uVar2 = DAT_0105cc5c;
  DAT_0105cc5c = 0;
  local_4 = 0;
  _DAT_010c9870 = FUN_009ad870(&DAT_010b9588,(byte *)"mup_eyes_v00.dds");
  _DAT_010c9874 = _DAT_010c9870;
  _DAT_010c9878 = FUN_009ad870(&DAT_010b9588,(byte *)"mup_lips_v00.dds");
  DAT_010c9890 = FUN_009ad870(&DAT_010b9588,(byte *)"mup_mask_v00.dds");
  DAT_010c9880 = FUN_009ad870(&DAT_010b9588,(byte *)"mup_tatoo_v00.dds");
  _DAT_010c987c = FUN_009ad870(&DAT_010b9588,(byte *)"mup_beard_v00.dds");
  _DAT_010c9884 = FUN_009ad870(&DAT_010b9588,(byte *)"mup_meyebrow_v00.dds");
  _DAT_010c9888 = FUN_009ad870(&DAT_010b9588,(byte *)"mup_feyebrow_v00.dds");
  _DAT_010c988c = FUN_009ad870(&DAT_010b9588,(byte *)"mup_nails_v00.dds");
  local_128 = FUN_0099bb50("Neck Color",0x15,8,8,'\0');
  iVar8 = DAT_010c9890;
  if (DAT_010c9890 != 0) {
    pvVar3 = operator_new(DAT_010c9890 * 8);
    local_4._0_1_ = 1;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar3,8,iVar8,&LAB_00a5f060);
    }
    iVar8 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    DAT_010c986c = pvVar3;
    if (0 < DAT_010c9890) {
      do {
        if (iVar8 < 10) {
          pcVar9 = "Data\\Textures\\MakeUp\\mup_body_v0%d.dds";
        }
        else {
          pcVar9 = "Data\\Textures\\MakeUp\\mup_body_v%d.dds";
        }
        _sprintf(local_10c,pcVar9,iVar8);
        local_148 = local_13c;
        pcVar9 = local_10c;
        local_13c[0] = '\0';
        local_144 = 0;
        local_140 = 0x14;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        uVar6 = (int)pcVar9 - (int)(local_10c + 1);
        if (0x13 < uVar6) {
          local_140 = uVar6 + 0x20 & 0xffffffe0;
          local_148 = _malloc(local_140);
        }
        _strncpy(local_148,local_10c,uVar6);
        local_148[uVar6] = '\0';
        local_4._0_1_ = 2;
        local_144 = uVar6;
        uVar4 = FUN_009d3660(&local_148,(uint *)0x0);
        local_4 = (uint)local_4._1_3_ << 8;
        if (0x14 < local_140) {
                    /* WARNING: Subroutine does not return */
          _free(local_148);
        }
        if ((char)uVar4 == '\0') {
          *(undefined1 *)((int)DAT_010c986c + iVar8 * 8) = 0;
        }
        else {
          *(undefined1 *)((int)DAT_010c986c + iVar8 * 8) = 1;
          if (iVar8 < 10) {
            pcVar9 = "mup_body_v0%d.dds";
          }
          else {
            pcVar9 = "mup_body_v%d.dds";
          }
          _sprintf(local_10c,pcVar9,iVar8);
          pvVar5 = FUN_0099bb50(local_10c,0,0,0,'\0');
          pvVar3 = local_128;
          local_118 = (float)*(int *)((int)pvVar5 + 0x48);
          local_110 = (float)(*(int *)((int)pvVar5 + 0x48) + -3);
          local_114 = (float)*(int *)((int)pvVar5 + 0x44);
          local_11c = 0;
          uVar6 = FUN_0099a9b0(local_128,0,(uint)pvVar5,(int)&local_11c);
          if ((char)uVar6 != '\0') {
            local_124 = 0;
            local_120 = (undefined4 *)0x0;
            MediaPlayer_LockVideoBuffer(pvVar3,&local_124);
            if (local_120 != (undefined4 *)0x0) {
              *(undefined4 *)((int)DAT_010c986c + iVar8 * 8 + 4) = *local_120;
            }
            MediaPlayer_UnlockVideoBuffer((int)pvVar3);
          }
          FUN_0099b400(pvVar5);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < DAT_010c9890);
    }
  }
  iVar8 = DAT_010c9880;
  if (DAT_010c9880 != 0) {
    DAT_010c9894 = operator_new(DAT_010c9880 * 8);
    if (DAT_010c9894 == (void *)0x0) {
      DAT_010c9894 = (void *)0x0;
    }
    else if (-1 < iVar8 + -1) {
      puVar7 = (undefined1 *)((int)DAT_010c9894 + 6);
      do {
        puVar7[-2] = 0xff;
        puVar7[-1] = 0xff;
        *puVar7 = 0xff;
        puVar7[1] = 0xff;
        *(undefined4 *)(puVar7 + -2) = 0xffffffff;
        *(undefined4 *)(puVar7 + -6) = 0;
        iVar8 = iVar8 + -1;
        *(undefined4 *)(puVar7 + -2) = 0;
        puVar7 = puVar7 + 8;
      } while (iVar8 != 0);
    }
    iVar8 = 0;
    if (0 < DAT_010c9880) {
      do {
        if (iVar8 < 10) {
          pcVar9 = "Data\\Textures\\MakeUp\\mup_bodytatoo_v0%d.dds";
        }
        else {
          pcVar9 = "Data\\Textures\\MakeUp\\mup_bodytatoo_v%d.dds";
        }
        _sprintf(local_10c,pcVar9,iVar8);
        local_148 = local_13c;
        pcVar9 = local_10c;
        local_13c[0] = '\0';
        local_144 = 0;
        local_140 = 0x14;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        uVar6 = (int)pcVar9 - (int)(local_10c + 1);
        if (0x13 < uVar6) {
          local_140 = uVar6 + 0x20 & 0xffffffe0;
          local_148 = _malloc(local_140);
        }
        _strncpy(local_148,local_10c,uVar6);
        local_148[uVar6] = '\0';
        local_4._0_1_ = 3;
        local_144 = uVar6;
        uVar4 = FUN_009d3660(&local_148,(uint *)0x0);
        local_4 = (uint)local_4._1_3_ << 8;
        if (0x14 < local_140) {
                    /* WARNING: Subroutine does not return */
          _free(local_148);
        }
        *(bool *)((int)DAT_010c9894 + iVar8 * 8) = (char)uVar4 != '\0';
        iVar8 = iVar8 + 1;
      } while (iVar8 < DAT_010c9880);
    }
  }
  if (local_128 == (void *)0x0) {
    DAT_0105cc5c = uVar2;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  FUN_0099b400(local_128);
  DAT_0105cc5c = uVar2;
  *unaff_FS_OFFSET = local_c;
  return;
}


//// FUNCTION FUN_00a5f720 @ 00a5f720 ////

bool __cdecl FUN_00a5f720(char *param_1,char *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint local_30c [65];
  char local_208 [260];
  char local_104 [260];
  
  iVar3 = (int)local_30c - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar3] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  FUN_009ac040((char *)local_30c);
  iVar3 = -(int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)(local_208 + iVar3)] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_009ac040(local_208);
  _sprintf(local_104," %s@%s ",param_3,param_4);
  if (param_3 != 0) {
    puVar2 = FUN_00ace080(local_30c,local_104);
    if (puVar2 == (uint *)0x0) {
      return false;
    }
  }
  puVar2 = FUN_00ace080(local_30c,local_208);
  return puVar2 != (uint *)0x0;
}


//// FUNCTION FUN_00a5f7f0 @ 00a5f7f0 ////

bool __cdecl FUN_00a5f7f0(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  DWORD DVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char local_320 [264];
  char local_218 [264];
  char local_110 [268];
  
  if (param_1 == (uint *)0x0) {
    return false;
  }
  pcVar4 = local_320;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  pcVar4 = local_110;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  pcVar4 = local_218;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  __splitpath((char *)param_1,local_320,local_110,(char *)0x0,local_218);
  if (local_218[0] != '\0') {
    puVar2 = FUN_00acecd0(param_1,'*');
    if (puVar2 == (uint *)0x0) {
      DVar3 = GetFileAttributesA((LPCSTR)param_1);
      return DVar3 != 0xffffffff;
    }
  }
  pcVar4 = local_110;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)local_110;
  pcVar4 = &stack0xfffffcdf;
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = local_110;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  DVar3 = GetFileAttributesA(local_320);
  return DVar3 != 0xffffffff;
}


//// FUNCTION FUN_00a5f8d0 @ 00a5f8d0 ////

void __cdecl FUN_00a5f8d0(char *param_1)

{
  char local_104 [260];
  
  _vsprintf(local_104,param_1,&stack0x00000008);
  FID_conflict___wsystem(local_104);
  return;
}


//// FUNCTION FUN_00a5f900 @ 00a5f900 ////

undefined4 FUN_00a5f900(void)

{
  int iVar1;
  char local_104 [260];
  
  _sprintf(local_104,"p4 revert -a");
  iVar1 = FID_conflict___wsystem(local_104);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_00a5f930 @ 00a5f930 ////

char __cdecl FUN_00a5f930(char *param_1)

{
  int iVar1;
  
  if (param_1 == (char *)0x0) {
    return '\a';
  }
  iVar1 = __stricmp(param_1,"edit");
  if (iVar1 == 0) {
    return '\x01';
  }
  iVar1 = __stricmp(param_1,"add");
  if (iVar1 == 0) {
    return '\x03';
  }
  iVar1 = __stricmp(param_1,"delete");
  if (iVar1 == 0) {
    return '\x02';
  }
  iVar1 = __stricmp(param_1,"updating");
  if (iVar1 == 0) {
    return '\x04';
  }
  iVar1 = __stricmp(param_1,"added");
  if (iVar1 == 0) {
    return '\x05';
  }
  iVar1 = __stricmp(param_1,"deleted");
  return (iVar1 != 0) + '\x06';
}


//// FUNCTION FUN_00a5f9e0 @ 00a5f9e0 ////

void __cdecl FUN_00a5f9e0(int param_1,char *param_2)

{
  if (param_2 != (char *)0x0) {
    if (param_1 < 0) {
      _sprintf(param_2,"default");
      return;
    }
    _sprintf(param_2,"%i",param_1);
  }
  return;
}


//// FUNCTION FUN_00a5fa20 @ 00a5fa20 ////

byte __cdecl FUN_00a5fa20(char *param_1,char *param_2,int param_3,int *param_4,byte param_5)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  uint uVar7;
  byte local_5;
  
  uVar7 = (uint)param_5;
  pbVar2 = operator_new(uVar7);
  pbVar5 = pbVar2;
  for (uVar4 = (uint)(param_5 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5 = pbVar5 + 4;
  }
  for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar5 = 0;
    pbVar5 = pbVar5 + 1;
  }
  local_5 = 0;
  pcVar3 = _strtok(param_1,param_2);
  while (pcVar3 != (char *)0x0) {
    if (param_5 != 0) {
      uVar4 = uVar7;
      pbVar5 = pbVar2;
      piVar6 = param_4;
      do {
        if (pbVar5[param_3 - (int)pbVar2] == local_5) {
          *pbVar5 = 1;
          *piVar6 = (int)pcVar3;
        }
        pbVar5 = pbVar5 + 1;
        piVar6 = piVar6 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    pcVar3 = _strtok((char *)0x0,param_2);
    local_5 = local_5 + 1;
  }
  bVar1 = *pbVar2;
  if (1 < param_5) {
    uVar4 = (uint)(byte)(param_5 - 1);
    do {
      pbVar2 = pbVar2 + 1;
      bVar1 = bVar1 & *pbVar2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return bVar1;
}


//// FUNCTION FUN_00a5fae0 @ 00a5fae0 ////

void __fastcall FUN_00a5fae0(undefined4 *param_1)

{
  if ((undefined1 *)param_1[3] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[3]);
  }
  if ((undefined1 *)*param_1 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a5fb10 @ 00a5fb10 ////

void __fastcall FUN_00a5fb10(undefined4 *param_1)

{
  if ((undefined1 *)*param_1 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a5fb60 @ 00a5fb60 ////

void __thiscall FUN_00a5fb60(void *this,void *param_1)

{
  FUN_00a10d90(param_1,"Change: new \n");
  FUN_00a10d90(param_1,"Status: new\n");
  FUN_00a10d90(param_1,"Description:");
  FUN_00a10d90(param_1,*(char **)((int)this + 0x30));
  FUN_00a10d90(param_1,"\n");
  FUN_00a10d90(param_1,"Files: ");
  FUN_00a10d90(param_1,*(char **)((int)this + 0x3c));
  FUN_00a10d90(param_1,"\n");
  return;
}


//// FUNCTION FUN_00a5fbd0 @ 00a5fbd0 ////

void __fastcall FUN_00a5fbd0(int param_1)

{
  if (*(int *)(param_1 + 0x10) < 2) {
    FUN_009d9820();
    return;
  }
  FUN_009d9820();
  FUN_009d9820();
  FUN_009d9820();
  return;
}


//// FUNCTION FUN_00a5fc20 @ 00a5fc20 ////

void __fastcall FUN_00a5fc20(int param_1)

{
  int iVar1;
  char *unaff_EBX;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
  FUN_009d9820();
  if (*(int *)(param_1 + 4) == 0) {
    FUN_009d9820();
    return;
  }
  FUN_009d9820();
  iVar2 = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x10))(0,local_10,local_18);
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar1 = 5;
    bVar5 = true;
    pcVar3 = unaff_EBX;
    pcVar4 = "func";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      FUN_009d9820();
    }
    iVar2 = iVar2 + 1;
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x10))(iVar2,&stack0xffffffe4,&stack0xffffffdc);
  } while( true );
}


//// FUNCTION FUN_00a5fcd0 @ 00a5fcd0 ////

void __thiscall FUN_00a5fcd0(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  long lVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  void *unaff_EBP;
  char *unaff_ESI;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  bool bVar9;
  char *local_14;
  undefined1 local_10 [8];
  int local_8 [2];
  
  if (param_1 != (int *)0x0) {
    local_14 = this;
    piVar2 = operator_new(0x220);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar7 = piVar2;
      for (iVar5 = 0x88; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      *piVar2 = 7;
      piVar2[0x83] = -2;
    }
    *piVar2 = 0;
    iVar5 = (**(code **)(*param_1 + 0x10))(0,local_8,local_10);
    pcVar3 = local_14;
    while (iVar5 != 0) {
      iVar5 = 5;
      bVar9 = true;
      pcVar6 = pcVar3;
      pcVar8 = "func";
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar9 = *pcVar6 == *pcVar8;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar9);
      local_14 = pcVar3;
      if (((!bVar9) && (pcVar3 != (char *)0x0)) && (unaff_ESI != (char *)0x0)) {
        iVar5 = __stricmp(pcVar3,"depotFile");
        if (iVar5 == 0) {
          pcVar3 = unaff_ESI;
          do {
            cVar1 = *pcVar3;
            pcVar3[(int)piVar2 + (4 - (int)unaff_ESI)] = cVar1;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
        }
        else {
          iVar5 = __stricmp(pcVar3,"clientFile");
          if (iVar5 == 0) {
            pcVar3 = unaff_ESI;
            do {
              cVar1 = *pcVar3;
              pcVar3[(int)piVar2 + (0x108 - (int)unaff_ESI)] = cVar1;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
          }
          else {
            iVar5 = __stricmp(pcVar3,"haveRev");
            if (iVar5 == 0) {
              lVar4 = _atol(unaff_ESI);
              piVar2[0x85] = lVar4;
            }
            else {
              iVar5 = __stricmp(pcVar3,"headRev");
              if (iVar5 == 0) {
                lVar4 = _atol(unaff_ESI);
                piVar2[0x84] = lVar4;
              }
              else {
                iVar5 = __stricmp(pcVar3,"action");
                if (iVar5 == 0) {
                  cVar1 = FUN_00a5f930(unaff_ESI);
                  *piVar2 = CONCAT31(extraout_var,cVar1);
                }
                else {
                  iVar5 = __stricmp(pcVar3,"headAction");
                  if (iVar5 == 0) {
                    if ((*piVar2 == 0) &&
                       (cVar1 = FUN_00a5f930(unaff_ESI), CONCAT31(extraout_var_00,cVar1) == 2)) {
                      *piVar2 = 2;
                    }
                  }
                  else {
                    iVar5 = __stricmp(pcVar3,"change");
                    if (iVar5 == 0) {
                      iVar5 = __stricmp(unaff_ESI,"default");
                      if (iVar5 == 0) {
                        piVar2[0x83] = -1;
                      }
                      else {
                        lVar4 = _atol(unaff_ESI);
                        piVar2[0x83] = lVar4;
                      }
                    }
                    else {
                      iVar5 = __stricmp(pcVar3,"otherOpen");
                      if (iVar5 == 0) {
                        *(undefined1 *)(piVar2 + 0x86) = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_8[0] = local_8[0] + 1;
      iVar5 = (**(code **)(*param_1 + 0x10))(local_8[0],&local_14,&stack0xffffffe4);
      this = unaff_EBP;
      pcVar3 = local_14;
    }
    piVar2[0x87] = *(int *)((int)this + 0x28);
    *(int **)((int)this + 0x28) = piVar2;
  }
  return;
}


//// FUNCTION FUN_00a5ffc0 @ 00a5ffc0 ////

undefined4 * __fastcall FUN_00a5ffc0(undefined4 *param_1)

{
  FUN_00a9f380(param_1);
  *param_1 = &PTR_FUN_00d7996c;
  param_1[9] = 0;
  return param_1;
}


//// FUNCTION FUN_00a5ffe0 @ 00a5ffe0 ////

void __fastcall FUN_00a5ffe0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7996c;
  FUN_00a9f3d0(param_1);
  return;
}


//// FUNCTION FUN_00a5fff0 @ 00a5fff0 ////

void FUN_00a5fff0(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  char local_408 [31];
  undefined4 local_3e9 [249];
  
  pcVar2 = "In MyFileSys::Open() in mode: ";
  pcVar3 = local_408;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *(undefined2 *)pcVar3 = *(undefined2 *)pcVar2;
  pcVar3[2] = pcVar2[2];
  puVar4 = local_3e9;
  for (iVar1 = 0xf8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = 0;
  pcVar2 = &stack0xfffffbf7;
  if (param_1 == 0) {
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (pcVar3[1] != '\0');
    builtin_strncpy(pcVar3 + 1,"read",5);
  }
  else if (param_1 == 1) {
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (pcVar3[1] != '\0');
    builtin_strncpy(pcVar3 + 1,"write",6);
  }
  else {
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (pcVar3[1] != '\0');
    builtin_strncpy(pcVar3 + 1,"unknow",7);
  }
  puVar5 = (undefined2 *)&stack0xfffffbf7;
  do {
    pcVar2 = (char *)((int)puVar5 + 1);
    puVar5 = (undefined2 *)((int)puVar5 + 1);
  } while (*pcVar2 != '\0');
  *puVar5 = 10;
  FUN_009d9820();
  return;
}


//// FUNCTION FUN_00a60170 @ 00a60170 ////

void __cdecl FUN_00a60170(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00a601a0 @ 00a601a0 ////

void __cdecl FUN_00a601a0(undefined4 *param_1)

{
  char *_Format;
  char local_14;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  FUN_009d9820();
  local_13 = 0;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_14 = '\0';
  local_1 = 0;
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)param_1[0x87]) {
    switch(*param_1) {
    case 0:
      _Format = "Not Opened";
      break;
    case 1:
      _Format = "Edit";
      break;
    case 2:
      _Format = "Delete";
      break;
    case 3:
      _Format = "ADD";
      break;
    default:
      _Format = "Unknow";
    }
    _sprintf(&local_14,_Format);
    FUN_009d9820();
  }
  return;
}


//// FUNCTION FUN_00a60290 @ 00a60290 ////

void __cdecl FUN_00a60290(int *param_1,int param_2)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  piVar1 = (int *)0x0;
  while( true ) {
    _Memory = piVar2;
    if (_Memory == (int *)0x0) {
      return;
    }
    if (*_Memory == param_2) break;
    piVar2 = (int *)_Memory[0x87];
    piVar1 = _Memory;
  }
  if (piVar1 == (int *)0x0) {
    *param_1 = _Memory[0x87];
  }
  else {
    piVar1[0x87] = _Memory[0x87];
  }
  _Memory[0x87] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a60370 @ 00a60370 ////

void __thiscall FUN_00a60370(void *this,undefined1 param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)((int)this + 4) = uVar1 + 1;
  if (*(int *)((int)this + 8) < (int)(uVar1 + 1)) {
    FUN_00a10e50(this,uVar1);
    *(undefined1 *)(uVar1 + *(int *)this) = param_1;
    return;
  }
  *(undefined1 *)(uVar1 + *(int *)this) = param_1;
  return;
}


//// FUNCTION FUN_00a603b0 @ 00a603b0 ////

void __fastcall FUN_00a603b0(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 + 1;
  if (param_1[2] < (int)(uVar1 + 1)) {
    FUN_00a10e50(param_1,uVar1);
  }
  *(undefined1 *)(uVar1 + *param_1) = 0;
  param_1[1] = param_1[1] + -1;
  return;
}


//// FUNCTION FUN_00a60400 @ 00a60400 ////

void __fastcall FUN_00a60400(undefined4 *param_1)

{
  uint uVar1;
  
  param_1[1] = 1;
  if ((int)param_1[2] < 1) {
    FUN_00a10e50(param_1,0);
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = param_1[1] + -1;
  param_1[4] = 0;
  uVar1 = param_1[4];
  param_1[4] = uVar1 + 1;
  if ((int)param_1[5] < (int)(uVar1 + 1)) {
    FUN_00a10e50(param_1 + 3,uVar1);
  }
  *(undefined1 *)(uVar1 + param_1[3]) = 0;
  param_1[4] = param_1[4] + -1;
  return;
}


//// FUNCTION FUN_00a60460 @ 00a60460 ////

undefined1 * __cdecl FUN_00a60460(char *param_1,char param_2,char param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  void **ppvVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  char *local_24;
  undefined1 *local_1c;
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb7b8;
  puVar1 = *(undefined4 **)(DAT_010c9aac + 0x2c);
  ppvVar3 = &local_c;
  puVar2 = (undefined1 *)0x0;
  local_c = ExceptionList;
  do {
    ExceptionList = ppvVar3;
    if (puVar1 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return puVar2;
    }
    pcVar9 = (char *)0x0;
    local_10 = 0;
    local_18 = &DAT_010b9370;
    local_4 = 0;
    local_14 = 0;
    FUN_00a10d40(&local_18,(undefined4 *)*puVar1,puVar1[1]);
    local_24 = (char *)0x0;
    cVar7 = '\0';
    pcVar4 = _strtok(local_18,param_1);
    local_1c = puVar2;
    if (pcVar4 != (char *)0x0) {
      do {
        if (cVar7 == param_2) {
          local_24 = pcVar4;
        }
        if (cVar7 == param_3) {
          pcVar9 = pcVar4;
        }
        cVar7 = cVar7 + '\x01';
        pcVar4 = _strtok((char *)0x0,param_1);
      } while (pcVar4 != (char *)0x0);
      if ((local_24 != (char *)0x0) && (pcVar9 != (char *)0x0)) {
        uVar8 = 0;
        iVar6 = 9;
        bVar11 = true;
        pcVar4 = pcVar9;
        pcVar10 = "reverted";
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar11 = *pcVar4 == *pcVar10;
          pcVar4 = pcVar4 + 1;
          pcVar10 = pcVar10 + 1;
        } while (bVar11);
        if (bVar11) {
          uVar8 = 3;
        }
        iVar6 = 5;
        bVar11 = true;
        pcVar4 = "edit";
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar11 = *pcVar9 == *pcVar4;
          pcVar9 = pcVar9 + 1;
          pcVar4 = pcVar4 + 1;
        } while (bVar11);
        if (bVar11) {
          uVar8 = 2;
        }
        puVar5 = operator_new(0x10c);
        local_1c = (undefined1 *)0x0;
        if (puVar5 != (undefined1 *)0x0) {
          *(undefined4 *)(puVar5 + 0x104) = 0;
          *(undefined4 *)(puVar5 + 0x108) = 0;
          *puVar5 = 0;
          local_1c = puVar5;
        }
        iVar6 = (int)local_1c - (int)local_24;
        do {
          cVar7 = *local_24;
          local_24[iVar6] = cVar7;
          local_24 = local_24 + 1;
        } while (cVar7 != '\0');
        *(undefined4 *)(local_1c + 0x104) = uVar8;
        *(undefined1 **)(local_1c + 0x108) = puVar2;
      }
    }
    puVar1 = (undefined4 *)puVar1[3];
    local_4 = 0xffffffff;
    ppvVar3 = ExceptionList;
    puVar2 = local_1c;
    if (local_18 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  } while( true );
}


//// FUNCTION FUN_00a60610 @ 00a60610 ////

undefined4 * __thiscall FUN_00a60610(void *this,byte param_1)

{
  FUN_00a5fb10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a60670 @ 00a60670 ////

undefined4 * __thiscall FUN_00a60670(void *this,byte param_1)

{
  FUN_00a60690(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a60690 @ 00a60690 ////

void __fastcall FUN_00a60690(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb7d8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00a10ef0((int)(param_1 + 4));
  local_4 = 0xffffffff;
  FUN_00a11660(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a606e0 @ 00a606e0 ////

undefined4 * FUN_00a606e0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb7fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x28);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00a9f380(puVar1);
    *puVar1 = &PTR_FUN_00d7996c;
    puVar1[9] = 0;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00a60750 @ 00a60750 ////

void __thiscall FUN_00a60750(void *this,int *param_1)

{
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a10f00((void *)((int)this + 0x10),param_1);
  local_10 = 0;
  local_14 = 0;
  local_18 = &DAT_010b9370;
  local_4 = 0;
  FUN_00a110b0(param_1,&local_18,2);
  FUN_009d9820();
  if (local_18 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a607e0 @ 00a607e0 ////

void FUN_00a607e0(void *param_1)

{
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb838;
  local_c = ExceptionList;
  local_10 = 0;
  local_14 = 0;
  local_18 = &DAT_010b9370;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00a110b0(param_1,&local_18,2);
  if (local_18 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a60850 @ 00a60850 ////

undefined4 * __thiscall FUN_00a60850(void *this,byte param_1)

{
  FUN_00a5ffe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a60870 @ 00a60870 ////

undefined4 * __fastcall FUN_00a60870(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb879;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d79aec;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = &DAT_010b9370;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = &DAT_010b9370;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = &DAT_010b9370;
  local_4 = 3;
  param_1[4] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_00a60400(param_1 + 0xc);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00a608f0 @ 00a608f0 ////

void __cdecl FUN_00a608f0(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00a5fb10(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00a60930 @ 00a60930 ////

undefined4 FUN_00a60930(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  DWORD local_2c;
  undefined4 *local_28;
  int local_24 [2];
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb8ab;
  local_c = ExceptionList;
  if (DAT_010c9aa4 != '\0') {
    DAT_010c9aa8 = DAT_010c9aa8 + 1;
    return CONCAT31((int3)((uint)ExceptionList >> 8),1);
  }
  local_2c = 0x104;
  ExceptionList = &local_c;
  GetUserNameA(&lpBuffer_010c99a0,&local_2c);
  local_2c = 0x104;
  GetComputerNameA((LPSTR)&lpBuffer_010c9898,&local_2c);
  FUN_009ac040(&lpBuffer_010c99a0);
  FUN_009ac040((char *)&lpBuffer_010c9898);
  iVar3 = 9;
  bVar6 = true;
  pcVar4 = &lpBuffer_010c99a0;
  pcVar5 = "jcottier";
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *pcVar4 == *pcVar5;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar3 = 8;
    bVar6 = true;
    pcVar4 = &lpBuffer_010c99a0;
    pcVar5 = "odawson";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) goto LAB_00a609e2;
  }
  DAT_00e69a14 = 0;
LAB_00a609e2:
  local_1c = 0;
  local_24[0] = 0;
  local_4 = 0;
  FUN_00a12330(&DAT_010c9ab0,local_24);
  if (local_24[0] < 2) {
    DAT_010c9aa4 = 1;
    local_28 = operator_new(0x48);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (local_28 == (undefined4 *)0x0) {
      DAT_010c9aac = (undefined4 *)0x0;
    }
    else {
      DAT_010c9aac = FUN_00a60870(local_28);
    }
    DAT_010c9aa8 = DAT_010c9aa8 + 1;
    local_4 = 0xffffffff;
    uVar2 = FUN_00a10ef0((int)local_24);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  local_10 = 0;
  local_14 = 0;
  local_18 = &DAT_010b9370;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00a110b0(local_24,&local_18,2);
  if (local_18 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  local_4 = 0xffffffff;
  uVar1 = FUN_00a10ef0((int)local_24);
  ExceptionList = local_c;
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00a60ac0 @ 00a60ac0 ////

void __fastcall FUN_00a60ac0(int param_1)

{
  uint uVar1;
  
  FUN_00a608f0((undefined4 *)(param_1 + 0x2c));
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_00a60400((undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar1 + 1;
  if (*(int *)(param_1 + 0x24) < (int)(uVar1 + 1)) {
    FUN_00a10e50((int *)(param_1 + 0x1c),uVar1);
  }
  *(undefined1 *)(uVar1 + *(int *)(param_1 + 0x1c)) = 0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  return;
}


//// FUNCTION FUN_00a60b40 @ 00a60b40 ////

bool __cdecl FUN_00a60b40(char *param_1,undefined4 *param_2,int param_3,char param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *this;
  
  if (DAT_010c9aa4 == '\0') {
    return false;
  }
  if (param_4 == '\0') {
    *(undefined4 *)(DAT_010c9aac + 0x20) = 0;
    iVar3 = DAT_010c9aac;
    piVar1 = (int *)(DAT_010c9aac + 0x24);
    this = (int *)(DAT_010c9aac + 0x1c);
    uVar2 = *(uint *)(DAT_010c9aac + 0x20);
    *(uint *)(DAT_010c9aac + 0x20) = uVar2 + 1;
    if (*piVar1 < (int)(uVar2 + 1)) {
      FUN_00a10e50(this,uVar2);
    }
    *(undefined1 *)(uVar2 + *this) = 0;
    *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + -1;
    *(undefined4 *)(DAT_010c9aac + 0x10) = 0;
  }
  else {
    FUN_00a60ac0(DAT_010c9aac);
  }
  if ((param_3 != 0) && (param_2 != (undefined4 *)0x0)) {
    FUN_00a12b50(&DAT_010c9ab0,param_3,param_2);
  }
  FUN_00a12360(&DAT_010c9ab0,param_1,DAT_010c9aac);
  return *(int *)(DAT_010c9aac + 0x10) < 2;
}


//// FUNCTION FUN_00a60c40 @ 00a60c40 ////

bool __cdecl FUN_00a60c40(int param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined3 extraout_var;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_48;
  undefined1 local_47;
  char *local_44;
  char *local_40;
  undefined2 *local_3c;
  char *local_38;
  char local_34 [52];
  
  *param_2 = 0;
  if (DAT_010c9aa4 == '\0') {
    return false;
  }
  if (param_1 < 0) {
    _sprintf(local_34,"default");
  }
  else {
    _sprintf(local_34,"%i",param_1);
  }
  local_38 = local_34;
  local_3c = &DAT_00d79b58;
  if (DAT_010c9aa4 != '\0') {
    FUN_00a60ac0(DAT_010c9aac);
    FUN_00a12b50(&DAT_010c9ab0,2,&local_3c);
    FUN_00a12360(&DAT_010c9ab0,"opened",DAT_010c9aac);
    iVar1 = *(int *)(DAT_010c9aac + 0x10);
    if ((iVar1 < 2) && (puVar7 = *(undefined4 **)(DAT_010c9aac + 0x2c), puVar7 != (undefined4 *)0x0)
       ) {
      local_48 = 0;
      local_47 = 2;
      do {
        local_44 = (char *)0x0;
        local_40 = (char *)0x0;
        bVar2 = FUN_00a5fa20((char *)*puVar7," -,#\n",(int)&local_48,(int *)&local_44,2);
        if (bVar2 != 0) {
          puVar4 = operator_new(0x220);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar8 = puVar4;
            for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            *puVar4 = 7;
            puVar4[0x83] = 0xfffffffe;
          }
          pcVar5 = local_44;
          do {
            cVar3 = *pcVar5;
            pcVar5[(int)puVar4 + (4 - (int)local_44)] = cVar3;
            pcVar5 = pcVar5 + 1;
          } while (cVar3 != '\0');
          cVar3 = FUN_00a5f930(local_40);
          *puVar4 = CONCAT31(extraout_var,cVar3);
          puVar4[0x87] = *param_2;
          *param_2 = puVar4;
        }
        puVar7 = (undefined4 *)puVar7[3];
      } while (puVar7 != (undefined4 *)0x0);
    }
    return iVar1 < 2;
  }
  return false;
}


//// FUNCTION FUN_00a60dc0 @ 00a60dc0 ////

bool __cdecl FUN_00a60dc0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 local_4;
  
  *param_2 = 0;
  if (DAT_010c9aa4 == '\0') {
    return false;
  }
  local_4 = param_1;
  FUN_00a60ac0(DAT_010c9aac);
  FUN_00a12b50(&DAT_010c9ab0,1,&local_4);
  FUN_00a12360(&DAT_010c9ab0,"dirs",DAT_010c9aac);
  bVar3 = *(int *)(DAT_010c9aac + 0x10) < 2;
  if (bVar3) {
    for (puVar2 = *(undefined4 **)(DAT_010c9aac + 0x2c); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[3]) {
      puVar4 = operator_new(0x220);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar8 = puVar4;
        for (iVar5 = 0x88; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        *puVar4 = 7;
        puVar4[0x83] = 0xfffffffe;
      }
      pcVar6 = (char *)*puVar2;
      pcVar7 = (char *)(puVar4 + 1);
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        *pcVar7 = cVar1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      puVar4[0x87] = *param_2;
      *param_2 = puVar4;
    }
  }
  return bVar3;
}


//// FUNCTION FUN_00a60ea0 @ 00a60ea0 ////

void __fastcall FUN_00a60ea0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cfb8e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d79aec;
  local_4 = 3;
  FUN_00a60ac0((int)param_1);
  if ((undefined1 *)param_1[0xf] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0xf]);
  }
  if ((undefined1 *)param_1[0xc] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0xc]);
  }
  if ((undefined1 *)param_1[7] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[7]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00a10ef0((int)(param_1 + 4));
  local_4 = 0xffffffff;
  FUN_00a11660(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a60f40 @ 00a60f40 ////

long __cdecl FUN_00a60f40(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined *local_8;
  char *local_4;
  
  local_8 = &DAT_00d79b74;
  local_4 = "pending";
  if (DAT_010c9aa4 != '\0') {
    FUN_00a60ac0(DAT_010c9aac);
    FUN_00a12b50(&DAT_010c9ab0,2,&local_8);
    FUN_00a12360(&DAT_010c9ab0,"changes",DAT_010c9aac);
    if ((*(int *)(DAT_010c9aac + 0x10) < 2) &&
       (puVar4 = *(undefined4 **)(DAT_010c9aac + 0x2c), puVar4 != (undefined4 *)0x0)) {
      while( true ) {
        pcVar2 = (char *)*puVar4;
        bVar1 = FUN_00a5f720(pcVar2,param_1,0x10c99a0,&lpBuffer_010c9898);
        if (bVar1) break;
        puVar4 = (undefined4 *)puVar4[3];
        if (puVar4 == (undefined4 *)0x0) {
          return -1;
        }
      }
      _strtok(pcVar2," ");
      pcVar2 = _strtok((char *)0x0," ");
      lVar3 = _atol(pcVar2);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  return -1;
}


//// FUNCTION FUN_00a61010 @ 00a61010 ////

long __cdecl FUN_00a61010(char *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  char *_Str;
  void *this;
  int iVar5;
  char *pcVar6;
  undefined *local_4;
  
  if ((DAT_010c9aa4 == '\0') || (param_1 == (char *)0x0)) {
    return -1;
  }
  lVar3 = FUN_00a60f40(param_1);
  if (lVar3 == -1) {
    FUN_00a60ac0(DAT_010c9aac);
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    this = (void *)(DAT_010c9aac + 0x30);
    *(undefined4 *)(DAT_010c9aac + 0x34) = 0;
    FUN_00a10d40(this,(undefined4 *)param_1,(int)pcVar4 - (int)(param_1 + 1));
    local_4 = &DAT_00d79b80;
    bVar2 = FUN_00a60b40("change",&local_4,1,'\0');
    if (bVar2) {
      _Str = operator_new(*(int *)(*(int *)(DAT_010c9aac + 0x2c) + 4) + 1);
      pcVar4 = (char *)**(undefined4 **)(DAT_010c9aac + 0x2c);
      pcVar6 = _Str;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar4 = _strtok(_Str," ");
      if (pcVar4 != (char *)0x0) {
        iVar5 = 7;
        bVar2 = true;
        pcVar6 = "Change";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar2 = *pcVar4 == *pcVar6;
          pcVar4 = pcVar4 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar2);
        if (bVar2) {
          pcVar4 = _strtok((char *)0x0," ");
          _atol(pcVar4);
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(_Str);
    }
  }
  return lVar3;
}


//// FUNCTION FUN_00a61120 @ 00a61120 ////

void FUN_00a61120(int param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  char *_Dest;
  int *piVar5;
  undefined2 *local_c;
  int *local_8;
  char *local_4;
  
  iVar4 = param_1;
  _Dest = operator_new(param_1 + 1);
  _sprintf(_Dest,"%i",iVar4);
  local_8 = &param_1;
  param_1 = CONCAT13(param_1._3_1_,0x632d);
  local_c = &DAT_00d79b88;
  local_4 = _Dest;
  if (DAT_010c9aa4 == '\0') {
    bVar3 = false;
  }
  else {
    *(undefined4 *)(DAT_010c9aac + 0x20) = 0;
    iVar4 = DAT_010c9aac;
    uVar2 = *(uint *)(DAT_010c9aac + 0x20);
    piVar1 = (int *)(DAT_010c9aac + 0x24);
    piVar5 = (int *)(DAT_010c9aac + 0x1c);
    *(uint *)(DAT_010c9aac + 0x20) = uVar2 + 1;
    if (*piVar1 < (int)(uVar2 + 1)) {
      FUN_00a10e50(piVar5,uVar2);
    }
    *(undefined1 *)(uVar2 + *piVar5) = 0;
    *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + -1;
    *(undefined4 *)(DAT_010c9aac + 0x10) = 0;
    FUN_00a12b50(&DAT_010c9ab0,3,&local_c);
    FUN_00a12360(&DAT_010c9ab0,"opened",DAT_010c9aac);
    bVar3 = *(int *)(DAT_010c9aac + 0x10) < 2;
  }
  if ((!bVar3) && (_sprintf((char *)&param_1,"-d"), DAT_010c9aa4 != '\0')) {
    *(undefined4 *)(DAT_010c9aac + 0x20) = 0;
    iVar4 = DAT_010c9aac;
    uVar2 = *(uint *)(DAT_010c9aac + 0x20);
    piVar1 = (int *)(DAT_010c9aac + 0x24);
    piVar5 = (int *)(DAT_010c9aac + 0x1c);
    *(uint *)(DAT_010c9aac + 0x20) = uVar2 + 1;
    if (*piVar1 < (int)(uVar2 + 1)) {
      FUN_00a10e50(piVar5,uVar2);
    }
    *(undefined1 *)(uVar2 + *piVar5) = 0;
    *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + -1;
    *(undefined4 *)(DAT_010c9aac + 0x10) = 0;
    FUN_00a12b50(&DAT_010c9ab0,2,&local_8);
    FUN_00a12360(&DAT_010c9ab0,"change",DAT_010c9aac);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Dest);
}


//// FUNCTION FUN_00a612c0 @ 00a612c0 ////

uint __cdecl FUN_00a612c0(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 local_21c;
  char local_218;
  undefined4 local_217;
  char local_110;
  undefined4 local_10f;
  
  local_21c = param_1;
  uVar3 = CONCAT31((int3)((uint)param_1 >> 8),DAT_010c9aa4);
  if (DAT_010c9aa4 != '\0') {
    FUN_00a60ac0(DAT_010c9aac);
    FUN_00a12b50(&DAT_010c9ab0,1,&local_21c);
    uVar3 = FUN_00a12360(&DAT_010c9ab0,"files",DAT_010c9aac);
    uVar3 = uVar3 & 0xffffff00;
    if (*(int *)(DAT_010c9aac + 0x10) < 2) {
      for (puVar2 = *(undefined4 **)(DAT_010c9aac + 0x2c); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)puVar2[3]) {
        puVar5 = (uint *)*puVar2;
        local_218 = '\0';
        puVar9 = &local_217;
        for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = 0;
        *(undefined1 *)((int)puVar9 + 2) = 0;
        local_110 = '\0';
        puVar9 = &local_10f;
        for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = 0;
        *(undefined1 *)((int)puVar9 + 2) = 0;
        __splitpath(param_1,(char *)0x0,(char *)0x0,&local_218,&local_110);
        pcVar4 = &local_110;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar3 = (int)pcVar4 - (int)&local_110;
        pcVar4 = (char *)((int)&local_21c + 3);
        do {
          pcVar8 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar8 != '\0');
        pcVar8 = &local_110;
        for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar4 = pcVar4 + 1;
        }
        puVar5 = FUN_00ace080(puVar5,&local_218);
        if (puVar5 != (uint *)0x0) {
          return CONCAT31((int3)((uint)puVar5 >> 8),1);
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00a613f0 @ 00a613f0 ////

undefined4 * __cdecl FUN_00a613f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_4;
  
  if ((DAT_010c9aa4 != '\0') && (param_1 != 0)) {
    local_4 = param_1;
    FUN_00a60ac0(DAT_010c9aac);
    FUN_00a12b50(&DAT_010c9ab0,1,&local_4);
    FUN_00a12360(&DAT_010c9ab0,"fstat",DAT_010c9aac);
    if (1 < *(int *)(DAT_010c9aac + 0x10)) {
      return (undefined4 *)0x0;
    }
    puVar2 = (undefined4 *)0x0;
    for (puVar1 = *(undefined4 **)(DAT_010c9aac + 0x28); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x87]) {
      puVar3 = operator_new(0x220);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar5 = puVar3;
        for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        *puVar3 = 7;
        puVar3[0x83] = 0xfffffffe;
      }
      puVar5 = puVar1;
      puVar6 = puVar3;
      for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar3[0x87] = puVar2;
      puVar2 = puVar3;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00a61840 @ 00a61840 ////

bool __cdecl FUN_00a61840(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int local_4;
  
  if ((DAT_010c9aa4 != '\0') && (param_1 != 0)) {
    iVar2 = 0;
    puVar1 = FUN_00a613f0(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      do {
        puVar1 = (undefined4 *)puVar1[0x87];
        iVar2 = iVar2 + 1;
      } while (puVar1 != (undefined4 *)0x0);
      if (iVar2 == 1) {
        FUN_009d9820();
        local_4 = param_1;
        if (DAT_010c9aa4 != '\0') {
          FUN_00a60ac0(DAT_010c9aac);
          FUN_00a12b50(&DAT_010c9ab0,1,&local_4);
          FUN_00a12360(&DAT_010c9ab0,"revert",DAT_010c9aac);
          return *(int *)(DAT_010c9aac + 0x10) < 2;
        }
      }
    }
    return false;
  }
  return false;
}


//// FUNCTION FUN_00a618f0 @ 00a618f0 ////

char __cdecl FUN_00a618f0(int *param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  bool bVar4;
  int *piVar5;
  char *pcVar6;
  void *pvVar7;
  undefined *local_8;
  int *local_4;
  
  pcVar3 = param_2;
  piVar2 = param_1;
  if ((param_1 != (int *)0x0) && (param_2 != (char *)0x0)) {
    if (DAT_010c9aa4 != '\0') {
      FUN_00a60ac0(DAT_010c9aac);
      piVar5 = FUN_00a613f0((int)piVar2);
      param_1 = piVar5;
      if (piVar5 != (int *)0x0) {
        do {
          if ((*piVar5 == 3) || (*piVar5 == 1)) {
            pvVar7 = (void *)(DAT_010c9aac + 0x3c);
            FUN_00a10d90(pvVar7,(char *)(piVar5 + 1));
            FUN_00a10d90(pvVar7,"\n");
          }
          piVar5 = (int *)piVar5[0x87];
        } while (piVar5 != (int *)0x0);
        pcVar6 = pcVar3;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        pvVar7 = (void *)(DAT_010c9aac + 0x30);
        *(undefined4 *)(DAT_010c9aac + 0x34) = 0;
        FUN_00a10d40(pvVar7,(undefined4 *)pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
        FUN_00a60170(&param_1);
        local_8 = &DAT_00d79b80;
        local_4 = piVar2;
        bVar4 = FUN_00a60b40("submit",&local_8,2,'\0');
        return bVar4 + '\x01';
      }
    }
    return '\x01';
  }
  return '\0';
}


//// FUNCTION FUN_00a619f0 @ 00a619f0 ////

uint __cdecl FUN_00a619f0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint in_EAX;
  undefined2 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  char local_20 [4];
  undefined1 *local_1c;
  undefined2 local_18;
  undefined1 local_16;
  undefined2 local_15;
  undefined2 local_13;
  undefined1 local_11;
  undefined2 local_10;
  undefined2 *local_c;
  undefined2 *local_8;
  char *local_4;
  
  if (DAT_010c9aa4 == '\0') {
    return in_EAX & 0xffffff00;
  }
  builtin_strncpy(local_20,"defa",4);
  local_1c = &LAB_00746c75;
  local_18 = 0x612d;
  local_16 = 0;
  local_13 = 0x632d;
  local_11 = 0;
  puVar1 = &local_18;
  local_8 = &local_13;
  local_4 = local_20;
  local_15 = 0;
  local_10 = 0;
  local_c = puVar1;
  if (0 < param_1) {
    puVar1 = (undefined2 *)_sprintf(local_4,"%i",param_1);
  }
  puVar2 = (undefined1 *)CONCAT31((int3)((uint)puVar1 >> 8),DAT_010c9aa4);
  puVar4 = (undefined1 *)0x0;
  if (DAT_010c9aa4 != '\0') {
    FUN_00a60ac0(DAT_010c9aac);
    FUN_00a12b50(&DAT_010c9ab0,3,&local_c);
    FUN_00a12360(&DAT_010c9ab0,"revert",DAT_010c9aac);
    puVar2 = (undefined1 *)(DAT_010c9aac & 0xffffff00);
    if (*(int *)(DAT_010c9aac + 0x10) < 2) {
      puVar2 = FUN_00a60460(" -,#\n",'\0','\x03');
      puVar4 = puVar2;
    }
  }
  uVar3 = (uint)puVar2 & 0xffffff00;
  if (0 < param_1) {
    uVar3 = FUN_00a61120(param_1);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = puVar4;
  }
  return uVar3;
}


//// FUNCTION FUN_00a61b00 @ 00a61b00 ////

bool __cdecl FUN_00a61b00(int param_1,undefined4 *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined4 *unaff_EDI;
  undefined4 *puVar11;
  bool bVar12;
  bool local_24d;
  undefined2 local_24c;
  undefined1 local_24a;
  undefined4 *local_248;
  char *local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined1 *local_234;
  undefined2 *local_230;
  undefined4 local_22c;
  char local_228;
  undefined4 local_227;
  char local_120;
  undefined4 local_11f;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cfb90b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_2 = 0;
  if ((param_3 != '\0') && (uVar2 = FUN_00a619f0(param_1,param_2,unaff_EDI), (char)uVar2 != '\0')) {
    ExceptionList = local_14;
    return true;
  }
  local_238 = 0x61666564;
  local_234 = &LAB_00746c75;
  local_24c = 0x632d;
  local_230 = &local_24c;
  local_22c = (char *)&local_238;
  local_24a = 0;
  if (0 < param_1) {
    _sprintf(local_22c,"%i",param_1);
  }
  if (DAT_010c9aa4 == '\0') {
    local_24d = false;
  }
  else {
    FUN_00a60ac0(DAT_010c9aac);
    FUN_00a12b50(&DAT_010c9ab0,2,&local_230);
    FUN_00a12360(&DAT_010c9ab0,"submit",DAT_010c9aac);
    local_24d = *(int *)(DAT_010c9aac + 0x10) < 2;
  }
  local_248 = *(undefined4 **)(DAT_010c9aac + 0x2c);
  do {
    if (local_248 == (undefined4 *)0x0) {
      ExceptionList = local_14;
      return local_24d;
    }
    local_23c = 0;
    local_244 = &DAT_010b9370;
    local_c = 0;
    local_240 = 0;
    FUN_00a10d40(&local_244,(undefined4 *)*local_248,local_248[1]);
    pcVar3 = _strtok(local_244," #\n");
    pcVar4 = _strtok((char *)0x0," #\n");
    if ((pcVar3 != (char *)0x0) && (pcVar4 != (char *)0x0)) {
      local_228 = '\0';
      puVar11 = &local_227;
      for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      *(undefined2 *)puVar11 = 0;
      *(undefined1 *)((int)puVar11 + 2) = 0;
      local_120 = '\0';
      puVar11 = &local_11f;
      for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      *(undefined2 *)puVar11 = 0;
      *(undefined1 *)((int)puVar11 + 2) = 0;
      __splitpath(pcVar4,(char *)0x0,(char *)0x0,&local_228,&local_120);
      pcVar4 = &local_120;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)&local_120;
      pcVar4 = (char *)((int)&local_22c + 3);
      do {
        pcVar10 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar10 != '\0');
      pcVar10 = &local_120;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar4 = pcVar4 + 1;
      }
      iVar7 = 4;
      bVar12 = true;
      pcVar4 = pcVar3;
      pcVar10 = "add";
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar12 = *pcVar4 == *pcVar10;
        pcVar4 = pcVar4 + 1;
        pcVar10 = pcVar10 + 1;
      } while (bVar12);
      if (bVar12) {
        puVar6 = operator_new(0x10c);
        puVar9 = (undefined1 *)0x0;
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 0x104) = 0;
          *(undefined4 *)(puVar6 + 0x108) = 0;
          puVar9 = puVar6;
        }
        pcVar3 = &local_228;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar3 - (int)&local_228;
        pcVar3 = puVar9 + -1;
        do {
          pcVar4 = pcVar3 + 1;
          pcVar3 = pcVar3 + 1;
        } while (*pcVar4 != '\0');
        pcVar4 = &local_228;
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        }
        *(undefined4 *)(puVar9 + 0x104) = 4;
      }
      else {
        iVar7 = 5;
        bVar12 = true;
        pcVar4 = "edit";
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar12 = *pcVar3 == *pcVar4;
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
        } while (bVar12);
        if (!bVar12) goto LAB_00a61dcf;
        puVar6 = operator_new(0x10c);
        puVar9 = (undefined1 *)0x0;
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 0x104) = 0;
          *(undefined4 *)(puVar6 + 0x108) = 0;
          puVar9 = puVar6;
        }
        pcVar3 = &local_228;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar3 - (int)&local_228;
        pcVar3 = puVar9 + -1;
        do {
          pcVar4 = pcVar3 + 1;
          pcVar3 = pcVar3 + 1;
        } while (*pcVar4 != '\0');
        pcVar4 = &local_228;
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        }
        *(undefined4 *)(puVar9 + 0x104) = 2;
      }
      *(undefined4 *)(puVar9 + 0x108) = *param_2;
      *param_2 = puVar9;
    }
LAB_00a61dcf:
    local_248 = (undefined4 *)local_248[3];
    local_c = 0xffffffff;
    if (local_244 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
      _free(local_244);
    }
  } while( true );
}


//// FUNCTION FUN_00a61e20 @ 00a61e20 ////

bool __cdecl FUN_00a61e20(char *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined3 extraout_var;
  int iVar9;
  undefined4 *puVar10;
  bool local_63d;
  undefined4 *local_63c;
  undefined1 local_638;
  undefined1 local_637;
  char *local_634;
  char *local_630;
  char *local_62c;
  char local_628;
  undefined4 local_627;
  char local_524;
  undefined4 local_523;
  char local_420;
  undefined4 local_41f;
  char local_31c;
  undefined4 local_31b;
  char local_218 [264];
  char local_110 [268];
  
  *param_3 = 0;
  if (DAT_010c9aa4 == '\0') {
    return false;
  }
  local_62c = param_1;
  FUN_00a60ac0(DAT_010c9aac);
  FUN_00a12b50(&DAT_010c9ab0,1,&local_62c);
  FUN_00a12360(&DAT_010c9ab0,"files",DAT_010c9aac);
  local_63d = *(int *)(DAT_010c9aac + 0x10) < 2;
  if ((*(int *)(DAT_010c9aac + 0x10) < 2) &&
     (puVar10 = *(undefined4 **)(DAT_010c9aac + 0x2c), local_63c = puVar10,
     puVar10 != (undefined4 *)0x0)) {
    local_638 = 0;
    local_637 = 2;
    do {
      local_634 = (char *)0x0;
      local_630 = (char *)0x0;
      local_63c = puVar10;
      bVar4 = FUN_00a5fa20((char *)*puVar10," -,#\n",(int)&local_638,(int *)&local_634,2);
      if (bVar4 != 0) {
        puVar7 = operator_new(0x220);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar10 = puVar7;
          for (iVar9 = 0x88; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          *puVar7 = 7;
          puVar7[0x83] = 0xfffffffe;
          puVar10 = local_63c;
        }
        pcVar8 = local_634;
        do {
          cVar5 = *pcVar8;
          pcVar8[(int)puVar7 + (4 - (int)local_634)] = cVar5;
          pcVar8 = pcVar8 + 1;
        } while (cVar5 != '\0');
        cVar5 = FUN_00a5f930(local_630);
        *puVar7 = CONCAT31(extraout_var,cVar5);
        puVar7[0x87] = *param_3;
        *param_3 = (int)puVar7;
      }
      puVar10 = (undefined4 *)puVar10[3];
      local_63c = puVar10;
    } while (puVar10 != (undefined4 *)0x0);
  }
  FUN_00a60290(param_3,2);
  if ((char)param_2 != '\0') {
    local_628 = '\0';
    puVar10 = &local_627;
    for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = 0;
    *(undefined1 *)((int)puVar10 + 2) = 0;
    local_524 = '\0';
    puVar10 = &local_523;
    for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = 0;
    *(undefined1 *)((int)puVar10 + 2) = 0;
    local_420 = '\0';
    puVar10 = &local_41f;
    for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = 0;
    *(undefined1 *)((int)puVar10 + 2) = 0;
    local_31c = '\0';
    puVar10 = &local_31b;
    for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = 0;
    *(undefined1 *)((int)puVar10 + 2) = 0;
    __splitpath(param_1,&local_628,&local_524,&local_420,&local_31c);
    _sprintf(local_110,"%s%s*",&local_628,&local_524);
    local_63c = (undefined4 *)0x0;
    bVar6 = FUN_00a60dc0(local_110,&local_63c);
    puVar7 = local_63c;
    puVar10 = local_63c;
    if (bVar6) {
      for (; puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)puVar10[0x87]) {
        _sprintf(local_218,"%s/%s%s",puVar10 + 1,&local_420,&local_31c);
        local_63c = (undefined4 *)0x0;
        bVar6 = FUN_00a61e20(local_218,param_2,(int *)&local_63c);
        local_63d = (bool)(local_63d & bVar6);
        if ((local_63d != false) && (local_63c != (undefined4 *)0x0)) {
          puVar3 = (undefined4 *)local_63c[0x87];
          puVar2 = local_63c;
          while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
            puVar2 = puVar1;
            puVar3 = (undefined4 *)puVar1[0x87];
          }
          puVar2[0x87] = *param_3;
          *param_3 = (int)local_63c;
        }
      }
      if (puVar7 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(puVar7);
      }
    }
  }
  return local_63d;
}


//// FUNCTION FUN_00a62110 @ 00a62110 ////

undefined4 * __thiscall FUN_00a62110(void *this,byte param_1)

{
  FUN_00a60ea0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a62130 @ 00a62130 ////

void FUN_00a62130(void)

{
  int aiStack_20 [2];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb930;
  local_c = ExceptionList;
  if ((DAT_010c9aa4 != '\0') && (DAT_010c9aa8 = DAT_010c9aa8 + -1, DAT_010c9aa8 < 1)) {
    ExceptionList = &local_c;
    if (DAT_00e69a18 != -1) {
      ExceptionList = &local_c;
      FUN_00a61120(DAT_00e69a18);
    }
    if (DAT_00e69a1c != -1) {
      FUN_00a61120(DAT_00e69a1c);
    }
    if (DAT_00e69a20 != -1) {
      FUN_00a61120(DAT_00e69a20);
    }
    uStack_18 = 0;
    aiStack_20[0] = 0;
    FUN_00a12380(&DAT_010c9ab0,aiStack_20);
    if (aiStack_20[0] < 2) {
      DAT_010c9aa4 = '\0';
      if (DAT_010c9aac != (undefined4 *)0x0) {
        (**(code **)*DAT_010c9aac)(1);
      }
      DAT_010c9aac = (undefined4 *)0x0;
    }
    else {
      local_c = (void *)0x0;
      uStack_10 = 0;
      puStack_14 = &DAT_010b9370;
      FUN_00a110b0(aiStack_20,&puStack_14,2);
      if (puStack_14 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_14);
      }
    }
    FUN_00a10ef0((int)aiStack_20);
  }
  ExceptionList = puStack_8;
  return;
}


//// FUNCTION FUN_00a62250 @ 00a62250 ////

void FUN_00a62250(void)

{
  if ((DAT_00e69a14 == '\0') && (DAT_00e69a18 == -1)) {
    DAT_00e69a18 = FUN_00a61010("New Files");
  }
  return;
}


//// FUNCTION FUN_00a622b0 @ 00a622b0 ////

void FUN_00a622b0(void)

{
  if ((DAT_00e69a14 == '\0') && (DAT_00e69a20 == -1)) {
    DAT_00e69a20 = FUN_00a61010("Deleted Files");
  }
  return;
}


//// FUNCTION FUN_00a62390 @ 00a62390 ////

bool __cdecl FUN_00a62390(uint *param_1,int param_2)

{
  bool bVar1;
  undefined2 *local_20;
  char *local_1c;
  uint *local_18;
  char local_14 [20];
  
  if ((DAT_010c9aa4 != '\0') && (param_1 != (uint *)0x0)) {
    bVar1 = FUN_00a5f7f0(param_1);
    if (bVar1) {
      FUN_009d9820();
      if (param_2 == -1) {
        param_2 = FUN_00a62250();
      }
      local_14[1] = '\0';
      local_14[2] = '\0';
      local_14[3] = '\0';
      local_14[4] = '\0';
      local_14[5] = '\0';
      local_14[6] = '\0';
      local_14[7] = '\0';
      local_14[8] = '\0';
      local_14[9] = '\0';
      local_14[10] = '\0';
      local_14[0xb] = '\0';
      local_14[0xc] = '\0';
      local_14[0xd] = '\0';
      local_14[0xe] = '\0';
      local_14[0xf] = '\0';
      local_14[0x10] = '\0';
      local_14[0x11] = '\0';
      local_14[0x12] = '\0';
      local_14[0] = '\0';
      local_14[0x13] = 0;
      FUN_00a5f9e0(param_2,local_14);
      local_1c = local_14;
      local_20 = &DAT_00d79b58;
      local_18 = param_1;
      if (DAT_010c9aa4 != '\0') {
        FUN_00a60ac0(DAT_010c9aac);
        FUN_00a12b50(&DAT_010c9ab0,3,&local_20);
        FUN_00a12360(&DAT_010c9ab0,"add",DAT_010c9aac);
        return *(int *)(DAT_010c9aac + 0x10) < 2;
      }
    }
  }
  return false;
}


//// FUNCTION FUN_00a624d0 @ 00a624d0 ////

/* WARNING: Removing unreachable block (ram,0x00a626ae) */

void __cdecl FUN_00a624d0(char *param_1,int param_2,uint param_3)

{
  char cVar1;
  char *_Memory;
  HANDLE hFindFile;
  char *pcVar2;
  CHAR *pCVar3;
  WINBOOL WVar4;
  int iVar5;
  bool bVar6;
  char in_stack_00000024;
  char *in_stack_fffffe38;
  int in_stack_fffffe3c;
  uint in_stack_fffffe40;
  char *local_194;
  undefined4 local_190;
  uint local_18c;
  char local_188 [20];
  HANDLE local_174;
  LPCSTR local_170;
  undefined4 local_16c;
  uint local_168;
  char local_164 [20];
  undefined1 *local_150;
  _WIN32_FIND_DATAA local_14c;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cfb95e;
  local_c = ExceptionList;
  local_4 = 0;
  uStack_3 = 0;
  _Memory = param_1;
  ExceptionList = &local_c;
  if (param_2 == 0) goto joined_r0x00a6250b;
  ExceptionList = &local_c;
  if (param_1[param_2 + -1] != '\\') {
    ExceptionList = &local_c;
    FUN_004073f0(&param_1,"\\",1);
  }
  _Memory = param_1;
  if (DAT_00e69a14 == '\0') {
    if (DAT_00e69a18 == -1) {
      DAT_00e69a18 = FUN_00a61010("New Files");
      goto LAB_00a6256a;
    }
LAB_00a6257f:
    FUN_00a5f8d0("p4 add -c %d %s*");
  }
  else {
LAB_00a6256a:
    if (DAT_00e69a18 != -1) goto LAB_00a6257f;
    FUN_00a5f8d0("p4 add -c %s*");
  }
  if (in_stack_00000024 != '\0') {
    local_170 = local_164;
    local_164[0] = '\0';
    local_16c = 0;
    local_168 = 0x14;
    _strncpy(local_170,"",0);
    local_16c = 0;
    *local_170 = '\0';
    local_4 = 1;
    pcVar2 = _Memory;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_170,_Memory,(int)pcVar2 - (int)(_Memory + 1));
    FUN_004073f0(&local_170,"*.*",3);
    local_174 = FindFirstFileA(local_170,&local_14c);
    if (local_174 != (HANDLE)0xffffffff) {
      local_194 = local_188;
      local_188[0] = '\0';
      local_190 = 0;
      local_18c = 0x14;
      _strncpy(local_194,"",0);
      local_190 = 0;
      *local_194 = '\0';
      local_4 = 2;
      do {
        if (((byte)local_14c.dwFileAttributes & 0x10) != 0) {
          iVar5 = 2;
          bVar6 = true;
          pCVar3 = local_14c.cFileName;
          pcVar2 = ".";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar6 = *pCVar3 == *pcVar2;
            pCVar3 = pCVar3 + 1;
            pcVar2 = pcVar2 + 1;
          } while (bVar6);
          if (!bVar6) {
            iVar5 = 3;
            bVar6 = true;
            pCVar3 = local_14c.cFileName;
            pcVar2 = "..";
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar6 = *pCVar3 == *pcVar2;
              pCVar3 = pCVar3 + 1;
              pcVar2 = pcVar2 + 1;
            } while (bVar6);
            if (!bVar6) {
              if (local_18c == 0) {
                local_18c = 0x20;
                local_194 = _malloc(0x20);
              }
              _strncpy(local_194,"",0);
              local_190 = 0;
              *local_194 = '\0';
              pcVar2 = _Memory;
              do {
                cVar1 = *pcVar2;
                pcVar2 = pcVar2 + 1;
              } while (cVar1 != '\0');
              FUN_004073f0(&local_194,_Memory,(int)pcVar2 - (int)(_Memory + 1));
              pCVar3 = local_14c.cFileName;
              do {
                cVar1 = *pCVar3;
                pCVar3 = pCVar3 + 1;
              } while (cVar1 != '\0');
              FUN_004073f0(&local_194,local_14c.cFileName,
                           (int)pCVar3 - (int)(local_14c.cFileName + 1));
              FUN_004073f0(&local_194,"\\",1);
              local_150 = &stack0xfffffe38;
              FUN_00403de0(&stack0xfffffe38,&local_194);
              FUN_00a624d0(in_stack_fffffe38,in_stack_fffffe3c,in_stack_fffffe40);
            }
          }
        }
        hFindFile = local_174;
        WVar4 = FindNextFileA(local_174,&local_14c);
      } while (WVar4 != 0);
      FindClose(hFindFile);
      if (0x14 < local_18c) {
                    /* WARNING: Subroutine does not return */
        _free(local_194);
      }
    }
    if (0x14 < local_168) {
                    /* WARNING: Subroutine does not return */
      _free(local_170);
    }
  }
joined_r0x00a6250b:
  if (param_3 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a627e0 @ 00a627e0 ////

bool __cdecl FUN_00a627e0(char *param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 *local_20;
  char *local_1c;
  char *local_18;
  char local_14 [20];
  
  if ((DAT_010c9aa4 != '\0') && (param_1 != (char *)0x0)) {
    uVar1 = FUN_00a612c0(param_1);
    if ((char)uVar1 != '\0') {
      FUN_00a61840((int)param_1);
      FUN_009d9820();
      if (param_2 == -1) {
        param_2 = FUN_00a622b0();
      }
      local_14[1] = '\0';
      local_14[2] = '\0';
      local_14[3] = '\0';
      local_14[4] = '\0';
      local_14[5] = '\0';
      local_14[6] = '\0';
      local_14[7] = '\0';
      local_14[8] = '\0';
      local_14[9] = '\0';
      local_14[10] = '\0';
      local_14[0xb] = '\0';
      local_14[0xc] = '\0';
      local_14[0xd] = '\0';
      local_14[0xe] = '\0';
      local_14[0xf] = '\0';
      local_14[0x10] = '\0';
      local_14[0x11] = '\0';
      local_14[0x12] = '\0';
      local_14[0] = '\0';
      local_14[0x13] = 0;
      FUN_00a5f9e0(param_2,local_14);
      local_1c = local_14;
      local_20 = &DAT_00d79b58;
      local_18 = param_1;
      if (DAT_010c9aa4 != '\0') {
        FUN_00a60ac0(DAT_010c9aac);
        FUN_00a12b50(&DAT_010c9ab0,3,&local_20);
        FUN_00a12360(&DAT_010c9ab0,"delete",DAT_010c9aac);
        return *(int *)(DAT_010c9aac + 0x10) < 2;
      }
    }
  }
  return false;
}


//// FUNCTION FUN_00a628d0 @ 00a628d0 ////

uint __cdecl FUN_00a628d0(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 *local_40;
  char *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 *local_2c;
  char *local_28;
  undefined4 *local_24;
  char local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined2 local_f;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar10 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb978;
  local_c = ExceptionList;
  if (param_1 == (undefined4 *)0x0) {
    return (uint)ExceptionList & 0xffffff00;
  }
  ExceptionList = &local_c;
  param_1 = FUN_00a613f0((int)param_1);
  FUN_00a60290((int *)&param_1,2);
  puVar11 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = FUN_009d9820();
    ExceptionList = local_c;
    return uVar3 & 0xffffff00;
  }
  local_1f = 0;
  local_1b = 0;
  local_17 = 0;
  local_13 = 0;
  local_f = 0;
  local_20 = '\0';
  local_d = 0;
  if ((DAT_00e69a14 == '\0') && (DAT_00e69a1c == -1)) {
    DAT_00e69a1c = FUN_00a61010("Updated Files");
  }
  if (DAT_00e69a1c < 0) {
    iVar4 = _sprintf(&local_20,"default");
  }
  else {
    iVar4 = _sprintf(&local_20,"%i",DAT_00e69a1c);
  }
  local_28 = &local_20;
  local_2c = &DAT_00d79b58;
  local_24 = puVar10;
  if (DAT_010c9aa4 != '\0') {
    FUN_00a60ac0(DAT_010c9aac);
    FUN_00a12b50(&DAT_010c9ab0,3,&local_2c);
    uVar5 = FUN_00a12360(&DAT_010c9ab0,"edit",DAT_010c9aac);
    bVar12 = *(int *)(DAT_010c9aac + 0x10) < 2;
    iVar4 = CONCAT31((int3)((uint)uVar5 >> 8),bVar12);
    if ((bVar12) &&
       (local_40 = *(undefined4 **)(DAT_010c9aac + 0x2c), local_40 != (undefined4 *)0x0)) {
      do {
        local_30 = 0;
        local_34 = 0;
        local_38 = &DAT_010b9370;
        local_4 = 0;
        FUN_00a10d90(&local_38,(char *)*local_40);
        pbVar6 = (byte *)_strtok(local_38," #-");
        if (pbVar6 != (byte *)0x0) {
          pbVar7 = (byte *)_strtok((char *)0x0," #-");
          pbVar9 = pbVar6;
          while (pbVar7 != (byte *)0x0) {
            pbVar8 = (byte *)_strtok((char *)0x0," #-");
            pbVar9 = pbVar7;
            pbVar7 = pbVar8;
          }
          iVar4 = 5;
          bVar12 = true;
          pbVar7 = &DAT_00d24318;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar12 = *pbVar9 == *pbVar7;
            pbVar9 = pbVar9 + 1;
            pbVar7 = pbVar7 + 1;
          } while (bVar12);
          if (bVar12) {
            puVar10 = (undefined4 *)0x0;
            for (puVar11 = param_1; puVar11 != (undefined4 *)0x0;
                puVar11 = (undefined4 *)puVar11[0x87]) {
              pbVar9 = (byte *)(puVar11 + 1);
              pbVar7 = pbVar6;
              do {
                bVar2 = *pbVar9;
                bVar12 = bVar2 < *pbVar7;
                if (bVar2 != *pbVar7) {
LAB_00a62af4:
                  iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_00a62af9;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar9[1];
                bVar12 = bVar2 < pbVar7[1];
                if (bVar2 != pbVar7[1]) goto LAB_00a62af4;
                pbVar9 = pbVar9 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar2 != 0);
              iVar4 = 0;
LAB_00a62af9:
              if (iVar4 == 0) {
                if (puVar10 == (undefined4 *)0x0) {
                  param_1 = (undefined4 *)puVar11[0x87];
                }
                else {
                  puVar10[0x87] = puVar11[0x87];
                }
                puVar11[0x87] = 0;
                    /* WARNING: Subroutine does not return */
                _free(puVar11);
              }
              puVar10 = puVar11;
            }
          }
        }
        local_4 = 0xffffffff;
        if (local_38 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
          _free(local_38);
        }
        local_40 = (undefined4 *)local_40[3];
      } while (local_40 != (undefined4 *)0x0);
      iVar4 = 0;
      puVar11 = param_1;
    }
  }
  puVar10 = puVar11;
  if (puVar11 != (undefined4 *)0x0) {
    do {
      FUN_009d9820();
      piVar1 = puVar10 + 0x87;
      puVar10 = (undefined4 *)*piVar1;
    } while ((undefined4 *)*piVar1 != (undefined4 *)0x0);
                    /* WARNING: Subroutine does not return */
    _free(puVar11);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}


//// FUNCTION FUN_00a62bd0 @ 00a62bd0 ////

uint __cdecl FUN_00a62bd0(byte *param_1,char param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *_Memory;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  byte local_20d;
  char *local_20c;
  char local_208 [260];
  byte local_104 [260];
  
  _sprintf(local_208,"%s*",param_1);
  uVar3 = FUN_00a628d0((undefined4 *)local_208);
  local_20d = (byte)uVar3;
  if (param_2 == '\0') {
    return uVar3;
  }
  local_20c = local_208;
  pcVar5 = local_20c;
  if (DAT_010c9aa4 != '\0') {
    FUN_00a60ac0((int)DAT_010c9aac);
    FUN_00a12b50(&DAT_010c9ab0,1,&local_20c);
    FUN_00a12360(&DAT_010c9ab0,"dirs",(int)DAT_010c9aac);
    pcVar5 = DAT_010c9aac;
    if (*(int *)(DAT_010c9aac + 0x10) < 2) {
      _Memory = (undefined4 *)0x0;
      for (puVar2 = *(undefined4 **)(DAT_010c9aac + 0x2c); puVar4 = _Memory,
          puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[3]) {
        puVar4 = operator_new(0x10);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4[2] = 0;
          puVar4[1] = 0;
          *puVar4 = &DAT_010b9370;
          puVar4[3] = 0;
        }
        pcVar5 = (char *)FUN_00a10d90(puVar4,(char *)*puVar2);
        puVar4[3] = _Memory;
        _Memory = puVar4;
      }
      do {
        if (puVar4 == (undefined4 *)0x0) {
          if (_Memory == (undefined4 *)0x0) {
            return CONCAT31((int3)((uint)pcVar5 >> 8),local_20d);
          }
          if ((undefined1 *)*_Memory != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
            _free((undefined1 *)*_Memory);
          }
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        _sprintf((char *)local_104,"%s/",*puVar4);
        pbVar6 = local_104;
        pbVar8 = param_1;
        do {
          bVar1 = *pbVar6;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00a62d0a:
            iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00a62d0f;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00a62d0a;
          pbVar6 = pbVar6 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00a62d0f:
        pcVar5 = (char *)0x0;
        if (iVar7 != 0) {
          pcVar5 = (char *)FUN_00a62bd0(local_104,'\x01');
          local_20d = local_20d & (byte)pcVar5;
        }
        puVar4 = (undefined4 *)puVar4[3];
      } while( true );
    }
  }
  return (uint)pcVar5 & 0xffffff00;
}


//// FUNCTION FUN_00a62da0 @ 00a62da0 ////

uint __thiscall FUN_00a62da0(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = ~*(uint *)(param_1 + 0xa0) & *(uint *)((int)this + 0xa0) |
          ~*(uint *)(param_1 + 0xa4) & *(uint *)((int)this + 0xa4);
  if (((uVar1 == 0) &&
      (uVar1 = ~*(uint *)(param_1 + 0xa8) & *(uint *)((int)this + 0xa8) |
               ~*(uint *)(param_1 + 0xac) & *(uint *)((int)this + 0xac), uVar1 == 0)) &&
     (uVar1 = 0, *(char *)((int)this + 0xb0) == *(char *)(param_1 + 0xb0))) {
    return (uint)(*(int *)((int)this + 0xb4) <= *(int *)(param_1 + 0xb4));
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00a62e90 @ 00a62e90 ////

ushort __thiscall FUN_00a62e90(void *this,float *param_1)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = *(float *)((int)this + 8) - param_1[2];
  fVar1 = fVar1 * fVar1 + (*(float *)this - *param_1) * (*(float *)this - *param_1);
  uVar2 = (ushort)(fVar1 < 9e-06) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 9e-06) << 0xe;
  if (fVar1 < 9e-06 || (fVar1 == 9e-06) != 0) {
    fVar1 = param_1[1] + *(float *)((int)this + 4);
    fVar1 = fVar1 * fVar1;
    uVar2 = (ushort)(fVar1 < 9e-06) << 8 | (ushort)NAN(fVar1) << 10 |
            (ushort)(fVar1 == 9e-06) << 0xe;
    if (fVar1 < 9e-06 || (fVar1 == 9e-06) != 0) {
      if (0.0 < *(float *)((int)this + 4)) {
        fVar1 = param_1[1];
        if (fVar1 >= 0.0 && (fVar1 == 0.0) == 0) {
          return (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                 (ushort)(fVar1 == 0.0) << 0xe;
        }
      }
      fVar1 = *(float *)((int)this + 4);
      uVar2 = (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.0) << 0xe;
      if (fVar1 < 0.0) {
        fVar1 = param_1[1];
        uVar2 = (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                (ushort)(fVar1 == 0.0) << 0xe;
        if (fVar1 < 0.0) {
          return uVar2;
        }
      }
      return CONCAT11((char)(uVar2 >> 8),1);
    }
  }
  return uVar2;
}


//// FUNCTION FUN_00a631b0 @ 00a631b0 ////

int __fastcall FUN_00a631b0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}


//// FUNCTION FUN_00a631d0 @ 00a631d0 ////

int __fastcall FUN_00a631d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
}


//// FUNCTION FUN_00a631f0 @ 00a631f0 ////

int __fastcall FUN_00a631f0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00a634d0 @ 00a634d0 ////

void __cdecl FUN_00a634d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a634f0 @ 00a634f0 ////

void __cdecl FUN_00a634f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a63510 @ 00a63510 ////

void __cdecl FUN_00a63510(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 10;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 10; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00a63860 @ 00a63860 ////

void __thiscall FUN_00a63860(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)((int)this + iVar1 * 4) == param_2) {
      *param_1 = *(undefined4 *)((int)this + iVar1 * 8 + 0x18);
      param_1[1] = *(undefined4 *)((int)this + iVar1 * 8 + 0x1c);
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00a638f0 @ 00a638f0 ////

void __thiscall FUN_00a638f0(void *this,int *param_1)

{
  *(void **)((int)this + 0x20) = DAT_010c9ff8;
  DAT_010c9ff8 = this;
  *(int *)this = DAT_010c9ff4;
  *(int *)((int)this + 4) = *param_1;
  *(int *)((int)this + 8) = param_1[1];
  *(int *)((int)this + 0xc) = param_1[2];
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  DAT_010c9ff4 = DAT_010c9ff4 + 1;
  *(undefined4 *)((int)this + 0x24) = 0;
  return;
}


//// FUNCTION FUN_00a63940 @ 00a63940 ////

int __thiscall FUN_00a63940(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  int iVar5;
  
  fVar1 = *(float *)((int)this + 4) - *param_1;
  fVar3 = *(float *)((int)this + 8) - param_1[1];
  fVar2 = *(float *)((int)this + 0xc) - param_1[2];
  fVar1 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
  while( true ) {
    if (SQRT(fVar1) < 0.001) {
      return (int)this;
    }
    pvVar4 = *(void **)((int)this + 0x1c);
    if (pvVar4 == (void *)0x0) break;
    fVar1 = *(float *)((int)pvVar4 + 4) - *param_1;
    fVar3 = *(float *)((int)pvVar4 + 8) - param_1[1];
    fVar2 = *(float *)((int)pvVar4 + 0xc) - param_1[2];
    fVar1 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    this = pvVar4;
  }
  pvVar4 = operator_new(0x28);
  if (pvVar4 != (void *)0x0) {
    iVar5 = FUN_00a638f0(pvVar4,(int *)param_1);
    *(int *)((int)this + 0x1c) = iVar5;
    return iVar5;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  return 0;
}


//// FUNCTION FUN_00a63a40 @ 00a63a40 ////

void __fastcall FUN_00a63a40(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = 0;
  if (0 < DAT_010c9abc) {
    iVar3 = 0;
    piVar1 = param_1 + 0xc;
    do {
      FUN_009a3f80(&local_10,(float *)(*param_1 + iVar3),(float *)(param_1[1] + iVar3),
                   (float *)(param_1[2] + iVar3));
      *piVar1 = local_10;
      piVar1[1] = local_c;
      piVar1[2] = local_8;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
      piVar1 = piVar1 + 3;
    } while (iVar2 < DAT_010c9abc);
  }
  return;
}


//// FUNCTION FUN_00a63cb0 @ 00a63cb0 ////

void __thiscall FUN_00a63cb0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  puVar3 = (undefined4 *)((int)this + 0xc);
  puVar2 = (undefined4 *)(((int)puVar3 - (int)this) + (int)param_1);
  iVar1 = 3;
  do {
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3 = puVar3 + 2;
    puVar2 = puVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return;
}


//// FUNCTION FUN_00a63d60 @ 00a63d60 ////

void __cdecl FUN_00a63d60(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a63d90 @ 00a63d90 ////

void __cdecl FUN_00a63d90(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a63dc0 @ 00a63dc0 ////

void __cdecl FUN_00a63dc0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_1 != param_2) {
    param_2 = param_2 + -10;
    param_3 = param_3 + -10;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00a63fe0 @ 00a63fe0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * __thiscall FUN_00a63fe0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  void *pvVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  ulonglong uVar12;
  int local_4070;
  int local_4068;
  int local_4064;
  int local_4060;
  int local_4058;
  undefined4 local_4008 [4095];
  undefined4 uStack_c;
  
  uStack_c = 0xa63ff0;
  DAT_010c9ff8 = (int *)0x0;
  FUN_009d9bb0(*(int *)((int)this + 0x30));
  puVar10 = local_4008;
  for (iVar5 = 0x1000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  iVar5 = *(int *)((int)this + 0x30);
  local_4060 = 0;
  bVar7 = 0;
  local_4064 = 0;
  if (0 < *(int *)(iVar5 + 0x28)) {
    do {
      piVar4 = *(int **)(*(int *)(iVar5 + 0x2c) + local_4064 * 4);
      local_4068 = 0;
      if (0 < *piVar4) {
        do {
          iVar5 = *(int *)(piVar4[1] + local_4068 * 4);
          local_4058 = 0;
          if (0 < *(int *)(iVar5 + 0x2c)) {
            local_4070 = 0;
            do {
              iVar1 = *(int *)(iVar5 + 0x30);
              uVar12 = FUN_00acd42c();
              iVar9 = (int)uVar12;
              if (iVar9 < 0) {
                iVar9 = 0;
              }
              else if (0xf < iVar9) {
                iVar9 = 0xf;
              }
              uVar12 = FUN_00acd42c();
              iVar11 = (int)uVar12;
              if (iVar11 < 0) {
                iVar11 = 0;
              }
              else if (0xf < iVar11) {
                iVar11 = 0xf;
              }
              uVar12 = FUN_00acd42c();
              iVar2 = (int)uVar12;
              if (iVar2 < 0) {
                iVar2 = 0;
              }
              else if (0xf < iVar2) {
                iVar2 = 0xf;
              }
              iVar9 = (iVar2 * 0x10 + iVar11) * 0x10 + iVar9;
              if ((void *)local_4008[iVar9] == (void *)0x0) {
                piVar3 = operator_new(0x28);
                if (piVar3 == (int *)0x0) {
                  piVar3 = (int *)0x0;
                }
                else {
                  iVar1 = *(int *)(iVar5 + 0x30);
                  piVar3[8] = (int)DAT_010c9ff8;
                  DAT_010c9ff8 = piVar3;
                  *piVar3 = DAT_010c9ff4;
                  piVar6 = (int *)(iVar1 + local_4070);
                  piVar3[1] = *piVar6;
                  piVar3[2] = piVar6[1];
                  piVar3[3] = piVar6[2];
                  piVar3[7] = 0;
                  piVar3[6] = 0;
                  piVar3[5] = 0;
                  piVar3[4] = 0;
                  DAT_010c9ff4 = DAT_010c9ff4 + 1;
                  piVar3[9] = 0;
                }
                local_4008[iVar9] = piVar3;
              }
              else {
                piVar3 = (int *)FUN_00a63940((void *)local_4008[iVar9],(float *)(iVar1 + local_4070)
                                            );
              }
              *(int *)(*(int *)((int)this + 0x38) + local_4060 * 4) = *piVar3;
              local_4060 = local_4060 + 1;
              piVar3[9] = piVar3[9] | 1 << (bVar7 & 0x1f);
              local_4058 = local_4058 + 1;
              local_4070 = local_4070 + 0x20;
            } while (local_4058 < *(int *)(iVar5 + 0x2c));
          }
          bVar7 = bVar7 + 1;
          local_4068 = local_4068 + 1;
        } while (local_4068 < *piVar4);
      }
      iVar5 = *(int *)((int)this + 0x30);
      local_4064 = local_4064 + 1;
    } while (local_4064 < *(int *)(iVar5 + 0x28));
  }
  piVar4 = DAT_010c9ff8;
  *param_1 = 0;
  while (piVar4 != (int *)0x0) {
    piVar4 = (int *)piVar4[8];
    *param_1 = *param_1 + 1;
  }
  pvVar8 = (void *)0x0;
  if (*param_1 != 0) {
    pvVar8 = operator_new(*param_1 << 4);
    piVar4 = DAT_010c9ff8;
    if (DAT_010c9ff8 == (int *)0x0) {
      DAT_010c9ff8 = (int *)0x0;
      return pvVar8;
    }
    do {
      piVar3 = (int *)(*piVar4 * 0x10 + (int)pvVar8);
      *piVar3 = piVar4[1];
      piVar3[1] = piVar4[2];
      piVar3[2] = piVar4[3];
      *(int *)(*piVar4 * 0x10 + 0xc + (int)pvVar8) = piVar4[9];
      piVar3 = piVar4 + 8;
      piVar4 = (int *)*piVar3;
    } while ((int *)*piVar3 != (int *)0x0);
  }
  if (DAT_010c9ff8 == (int *)0x0) {
    DAT_010c9ff8 = (int *)0x0;
    return pvVar8;
  }
  DAT_010c9ff4 = DAT_010c9ff4 + -1;
                    /* WARNING: Subroutine does not return */
  _free(DAT_010c9ff8);
}


//// FUNCTION FUN_00a64490 @ 00a64490 ////

void * FUN_00a64490(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a644c0 @ 00a644c0 ////

void * FUN_00a644c0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a64510 @ 00a64510 ////

void * __cdecl FUN_00a64510(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_00a63cb0(param_3,param_1);
    }
    param_1 = param_1 + 10;
    param_3 = (void *)((int)param_3 + 0x28);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00a64550 @ 00a64550 ////

void * __cdecl FUN_00a64550(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_00a63cb0(param_3,param_1);
    }
    param_1 = param_1 + 10;
    param_3 = (void *)((int)param_3 + 0x28);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00a645d0 @ 00a645d0 ////

uint __thiscall FUN_00a645d0(void *this,int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  for (uVar1 = 0;
      (*(int *)((int)this + 0x7c) != 0 &&
      (in_EAX = *(int *)((int)this + 0x80) - *(int *)((int)this + 0x7c) >> 2, uVar1 < in_EAX));
      uVar1 = uVar1 + 1) {
    in_EAX = *(int *)((int)this + 0x7c) + uVar1 * 4;
    if (*(int *)(*(int *)((int)this + 0x7c) + uVar1 * 4) == param_1) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00a64680 @ 00a64680 ////

void __fastcall FUN_00a64680(int param_1)

{
  uint uVar1;
  
  FUN_009d9820();
  for (uVar1 = 0;
      (*(int *)(param_1 + 0x8c) != 0 &&
      (uVar1 < (uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 2))); uVar1 = uVar1 + 1
      ) {
    FUN_009d9820();
  }
  FUN_009d9820();
  for (uVar1 = 0;
      (*(int *)(param_1 + 0x7c) != 0 &&
      (uVar1 < (uint)(*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x7c) >> 2))); uVar1 = uVar1 + 1
      ) {
    FUN_009d9820();
  }
  FUN_009d9820();
  return;
}


//// FUNCTION FUN_00a64780 @ 00a64780 ////

void __fastcall FUN_00a64780(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  void *this;
  ushort uVar4;
  float fVar5;
  float local_8;
  
  local_8 = 0.0;
  fVar1 = local_8;
  while ((local_8 = fVar1, *(int *)(param_1 + 0x14) != 0 &&
         ((uint)local_8 < (uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2)))) {
    fVar1 = (float)((int)local_8 + 1);
    for (fVar5 = fVar1;
        (iVar2 = *(int *)(param_1 + 0x14), iVar2 != 0 &&
        ((uint)fVar5 < (uint)(*(int *)(param_1 + 0x18) - iVar2 >> 2)));
        fVar5 = (float)((int)fVar5 + 1)) {
      pfVar3 = *(float **)(iVar2 + (int)fVar5 * 4);
      this = *(void **)(iVar2 + (int)local_8 * 4);
      if ((pfVar3[0x26] == pfVar3[0x34]) && (uVar4 = FUN_00a62e90(this,pfVar3), (char)uVar4 != '\0')
         ) {
        if (((*(byte *)((int)this + 0xdc) & 4) != 0) || (((uint)pfVar3[0x37] & 4) != 0)) {
          pfVar3[0x37] = (float)((uint)pfVar3[0x37] & 0xfffffffb);
          *(uint *)((int)this + 0xdc) = *(uint *)((int)this + 0xdc) & 0xfffffffb;
        }
        *(float *)((int)this + 0xd0) = fVar5;
        pfVar3[0x34] = local_8;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a64890 @ 00a64890 ////

uint __thiscall FUN_00a64890(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  byte *this_00;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  byte *pbVar14;
  float *pfVar15;
  char *pcVar16;
  int local_5c;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_30 [2];
  undefined4 *local_28;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    for (uVar11 = 0;
        (iVar8 = *(int *)((int)this + 4), iVar8 != 0 &&
        (uVar11 < (uint)(*(int *)((int)this + 8) - iVar8 >> 2))); uVar11 = uVar11 + 1) {
      FUN_00a63a40(*(int **)(iVar8 + uVar11 * 4));
    }
    return 1;
  }
  uVar11 = *(uint *)(*(int *)(param_1 + 0x40) + 8);
  if ((uVar11 & 0x100) == 0) {
    if ((uVar11 & 0x200) == 0) {
      if ((uVar11 & 0x400) == 0) {
        return 1;
      }
      pcVar16 = "lod_horse.anm";
    }
    else {
      pcVar16 = "lod_dog.anm";
    }
    this_00 = Anim_LoadByName(pcVar16);
  }
  else {
    this_00 = Anim_LoadByName("lod_human.anm");
  }
  local_4c = *(uint *)(this_00 + 0x30) & 0xffff;
  if (10 < local_4c) {
    local_4c = 10;
  }
  if (1 < local_4c) {
    local_3c = local_4c - 1;
    local_50 = 0xc;
    local_54 = 100;
    do {
      local_28 = FUN_009856c0();
      puVar12 = local_30;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      local_30[1] = local_54;
      local_30[0] = local_30[0] & 0xfffffff0 | 0x20;
      FUN_00987ae0(this_00,local_30);
      uVar11 = (uint)*(byte *)(*(int *)(this_00 + 0x6c) + 2);
      iVar8 = *(int *)(*(int *)(this_00 + 0x6c) + 0x30);
      uVar13 = 0;
      if (uVar11 != 0) {
        local_5c = 0;
        do {
          uVar9 = (uint)*(byte *)(uVar13 + iVar8);
          if (uVar9 != 0xff) {
            puVar6 = FUN_009856c0();
            pfVar10 = (float *)(puVar6 + uVar9 * 0xc);
            puVar6 = FUN_009856c0();
            FUN_009aa830((void *)((int)puVar6 + local_5c),pfVar10);
          }
          uVar13 = uVar13 + 1;
          local_5c = local_5c + 0x30;
        } while (uVar13 < uVar11);
      }
      if (uVar11 != 0) {
        iVar8 = 0;
        pfVar10 = (float *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x58);
        do {
          pfVar15 = pfVar10;
          puVar6 = FUN_009856c0();
          FUN_009aafb0((void *)((int)puVar6 + iVar8),pfVar15);
          iVar8 = iVar8 + 0x30;
          pfVar10 = pfVar10 + 0x22;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      iVar8 = 0;
      local_5c = 0;
      local_40 = 0;
      if (0 < *(int *)(param_1 + 0x28)) {
        do {
          piVar4 = *(int **)(*(int *)(param_1 + 0x2c) + local_40 * 4);
          local_44 = 0;
          if (0 < *piVar4) {
            do {
              piVar5 = *(int **)(piVar4[1] + local_44 * 4);
              if (*piVar5 == 0) {
                iVar8 = iVar8 + piVar5[0xb];
                local_5c = iVar8;
              }
              else {
                local_48 = 0;
                if (0 < piVar5[0xb]) {
                  pbVar14 = (byte *)(*piVar5 + 0x10);
                  do {
                    pfVar10 = *(float **)
                               (*(int *)((int)this + 0x14) +
                               *(int *)(*(int *)((int)this + 0x38) + iVar8 * 4) * 4);
                    if (((uint)pfVar10[0x37] & 8) == 0) {
                      puVar6 = FUN_009856c0();
                      pfVar7 = (float *)(puVar6 + (uint)*pbVar14 * 0xc);
                      pfVar15 = (float *)(local_50 + (int)pfVar10);
                      *pfVar15 = *pfVar10;
                      pfVar15[1] = pfVar10[1];
                      pfVar15[2] = pfVar10[2];
                      fVar1 = *pfVar15;
                      fVar2 = pfVar15[1];
                      fVar3 = pfVar15[2];
                      *pfVar15 = fVar1 * *pfVar7 + fVar2 * pfVar7[3] + fVar3 * pfVar7[6] + pfVar7[9]
                      ;
                      pfVar15[1] = fVar2 * pfVar7[4] + fVar1 * pfVar7[1] + fVar3 * pfVar7[7] +
                                   pfVar7[10];
                      pfVar15[2] = fVar2 * pfVar7[5] + fVar1 * pfVar7[2] + fVar3 * pfVar7[8] +
                                   pfVar7[0xb];
                      pfVar10[0x37] = (float)((uint)pfVar10[0x37] | 8);
                      iVar8 = local_5c;
                    }
                    local_48 = local_48 + 1;
                    pbVar14 = pbVar14 + 0x14;
                    iVar8 = iVar8 + 1;
                    local_5c = iVar8;
                  } while (local_48 < piVar5[0xb]);
                }
              }
              local_44 = local_44 + 1;
            } while (local_44 < *piVar4);
          }
          local_40 = local_40 + 1;
        } while (local_40 < *(int *)(param_1 + 0x28));
      }
      local_54 = local_54 + 100;
      local_50 = local_50 + 0xc;
      local_3c = local_3c + -1;
    } while (local_3c != 0);
  }
  FUN_00985de0(this_00);
  for (uVar11 = 0;
      (iVar8 = *(int *)((int)this + 4), iVar8 != 0 &&
      (uVar11 < (uint)(*(int *)((int)this + 8) - iVar8 >> 2))); uVar11 = uVar11 + 1) {
    FUN_00a63a40(*(int **)(iVar8 + uVar11 * 4));
  }
  return local_4c;
}


//// FUNCTION FUN_00a64c10 @ 00a64c10 ////

void __fastcall FUN_00a64c10(int param_1)

{
  uint *puVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char local_18 [12];
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = 0;
  do {
    cVar2 = *(char *)(param_1 + 0x35);
    local_18[iVar6] = '\0';
    if (iVar6 < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar6;
      if (9 < iVar6) {
        iVar4 = 9;
      }
    }
    if (cVar2 == '\0') {
      iVar4 = iVar4 + 0x14;
    }
    local_c = (float)(&DAT_00e68318)[iVar4 * 3];
    local_8 = (float)(&DAT_00e6831c)[iVar4 * 3];
    local_4 = (float)(&DAT_00e68320)[iVar4 * 3];
    for (uVar5 = 0;
        (iVar4 = *(int *)(param_1 + 0x14), iVar4 != 0 &&
        (uVar5 < (uint)(*(int *)(param_1 + 0x18) - iVar4 >> 2))); uVar5 = uVar5 + 1) {
      pfVar3 = *(float **)(iVar4 + uVar5 * 4);
      if ((*pfVar3 - local_c) * (*pfVar3 - local_c) +
          (pfVar3[2] - local_4) * (pfVar3[2] - local_4) +
          (pfVar3[1] - local_8) * (pfVar3[1] - local_8) < 0.0004) {
        pfVar3[0x37] = (float)((uint)pfVar3[0x37] | 0x20);
        local_18[iVar6] = '\x01';
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 10);
  uVar5 = (uint)(local_18[0] != '\0');
  if (local_18[1] != '\0') {
    uVar5 = uVar5 + 1;
  }
  if (local_18[2] != '\0') {
    uVar5 = uVar5 + 1;
  }
  if (local_18[3] != '\0') {
    uVar5 = uVar5 + 1;
  }
  if (local_18[4] != '\0') {
    uVar5 = uVar5 + 1;
  }
  if (local_18[5] != '\0') {
    uVar5 = uVar5 + 1;
  }
  if ((char)local_18._6_4_ != '\0') {
    uVar5 = uVar5 + 1;
  }
  if (SUB41(local_18._6_4_,1) != '\0') {
    uVar5 = uVar5 + 1;
  }
  if (SUB41(local_18._6_4_,2) != '\0') {
    uVar5 = uVar5 + 1;
  }
  if (SUB41(local_18._6_4_,3) != '\0') {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 == 10) {
    FUN_009d9820();
    for (uVar5 = 0;
        (iVar6 = *(int *)(param_1 + 0x14), iVar6 != 0 &&
        (uVar5 < (uint)(*(int *)(param_1 + 0x18) - iVar6 >> 2))); uVar5 = uVar5 + 1) {
      iVar6 = *(int *)(iVar6 + uVar5 * 4);
      if ((*(byte *)(iVar6 + 0xdc) & 0x20) != 0) {
        puVar1 = (uint *)(iVar6 + 0xdc);
        *puVar1 = *puVar1 & 0xffffffef;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a64d70 @ 00a64d70 ////

void __fastcall FUN_00a64d70(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  byte *this;
  byte *this_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  this = FUN_009de1d0("female_hand.msh",0);
  this_00 = FUN_009de1d0("jc.msh",0);
  uVar6 = 0;
LAB_00a64da0:
  do {
    iVar1 = *(int *)(param_1 + 0x14);
    if ((iVar1 == 0) || ((uint)(*(int *)(param_1 + 0x18) - iVar1 >> 2) <= uVar6)) {
      if (this != (byte *)0x0) {
        FUN_009de3b0(this);
      }
      if (this_00 != (byte *)0x0) {
        FUN_009de3b0(this_00);
      }
      return;
    }
    pfVar2 = *(float **)(iVar1 + uVar6 * 4);
    uVar4 = FUN_009dc210(this,pfVar2,0.0015);
    uVar5 = FUN_009dc210(this_00,pfVar2,0.0015);
    if ((char)uVar4 != '\0') {
      fVar3 = pfVar2[0x37];
      pfVar2[0x37] = (float)((uint)fVar3 | 0x80);
      if ((char)uVar5 != '\0') {
        pfVar2[0x37] = (float)((uint)fVar3 & 0xffffffef | 0x80);
        uVar6 = uVar6 + 1;
        goto LAB_00a64da0;
      }
      pfVar2[0x37] = (float)((uint)fVar3 & 0xfffffffe | 0xc0);
    }
    uVar6 = uVar6 + 1;
  } while( true );
}


//// FUNCTION FUN_00a64e70 @ 00a64e70 ////

void __fastcall FUN_00a64e70(int param_1)

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


//// FUNCTION FUN_00a64ed0 @ 00a64ed0 ////

void __fastcall FUN_00a64ed0(int param_1)

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


//// FUNCTION FUN_00a64f40 @ 00a64f40 ////

undefined4 * FUN_00a64f40(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a64f70 @ 00a64f70 ////

undefined4 * FUN_00a64f70(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a64fd0 @ 00a64fd0 ////

void __cdecl FUN_00a64fd0(void *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (void *)0x0) {
      FUN_00a63cb0(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x28);
  }
  return;
}


//// FUNCTION FUN_00a65030 @ 00a65030 ////

void __cdecl FUN_00a65030(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00a65060 @ 00a65060 ////

void __cdecl FUN_00a65060(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00a65090 @ 00a65090 ////

uint __thiscall FUN_00a65090(void *this,int param_1)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  
  for (uVar2 = 0;
      (*(int *)((int)this + 0x18) != 0 &&
      (in_EAX = *(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18) >> 2, uVar2 < in_EAX));
      uVar2 = uVar2 + 1) {
    for (uVar1 = 0;
        (*(int *)(param_1 + 0x18) != 0 &&
        (in_EAX = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2, uVar1 < in_EAX));
        uVar1 = uVar1 + 1) {
      in_EAX = *(uint *)(*(int *)((int)this + 0x18) + uVar2 * 4);
      if (in_EAX == *(uint *)(*(int *)(param_1 + 0x18) + uVar1 * 4)) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00a65100 @ 00a65100 ////

void __thiscall FUN_00a65100(void *this,int param_1)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  
  if (*(int *)((int)this + 0x8c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x90) - *(int *)((int)this + 0x8c) >> 2;
  }
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    _Dst = (void *)(*(int *)((int)this + 0x8c) + iVar1 * 4);
    if (*(int *)(*(int *)((int)this + 0x8c) + iVar1 * 4) == param_1) {
      _Src = (void *)((int)_Dst + 4);
      _memmove(_Dst,_Src,(*(int *)((int)this + 0x90) - (int)_Src >> 2) << 2);
      *(int *)((int)this + 0x90) = *(int *)((int)this + 0x90) + -4;
    }
  }
  return;
}


//// FUNCTION FUN_00a65180 @ 00a65180 ////

void __thiscall FUN_00a65180(void *this,int param_1)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  
  if (*(int *)((int)this + 0x7c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x80) - *(int *)((int)this + 0x7c) >> 2;
  }
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    _Dst = (void *)(*(int *)((int)this + 0x7c) + iVar1 * 4);
    if (*(int *)(*(int *)((int)this + 0x7c) + iVar1 * 4) == param_1) {
      _Src = (void *)((int)_Dst + 4);
      _memmove(_Dst,_Src,(*(int *)((int)this + 0x80) - (int)_Src >> 2) << 2);
      *(int *)((int)this + 0x80) = *(int *)((int)this + 0x80) + -4;
    }
  }
  return;
}


//// FUNCTION FUN_00a652f0 @ 00a652f0 ////

void __thiscall FUN_00a652f0(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = 0;
    for (uVar1 = 0;
        (*(int *)((int)this + 0x24) != 0 &&
        (uVar1 < (uint)((*(int *)((int)this + 0x28) - *(int *)((int)this + 0x24)) / 0x24)));
        uVar1 = uVar1 + 1) {
      if (*(int *)(*(int *)((int)this + 0x24) + 0xc + iVar2) == param_1) {
        *(int *)(*(int *)((int)this + 0x24) + iVar2 + 0xc) = param_2;
      }
      iVar2 = iVar2 + 0x24;
    }
  }
  return;
}


//// FUNCTION FUN_00a65350 @ 00a65350 ////

void __fastcall FUN_00a65350(int param_1)

{
  if (*(void **)(param_1 + 0x8c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x8c));
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (*(void **)(param_1 + 0x7c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x7c));
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}


//// FUNCTION FUN_00a65470 @ 00a65470 ////

void __fastcall FUN_00a65470(int param_1)

{
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00a654a0 @ 00a654a0 ////

void * __thiscall FUN_00a654a0(void *this,byte param_1)

{
  FUN_00a65350((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a654c0 @ 00a654c0 ////

void __fastcall FUN_00a654c0(int param_1)

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


//// FUNCTION FUN_00a654f0 @ 00a654f0 ////

void * FUN_00a654f0(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_00a64fd0(param_1,param_2,param_3);
  return (void *)((int)param_1 + param_2 * 0x28);
}


//// FUNCTION FUN_00a65560 @ 00a65560 ////

void * __thiscall FUN_00a65560(void *this,byte param_1)

{
  FUN_00a65470((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a65590 @ 00a65590 ////

void __fastcall FUN_00a65590(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 100));
}


//// FUNCTION FUN_00a655c0 @ 00a655c0 ////

void __fastcall FUN_00a655c0(int param_1)

{
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x10),0x10,4,FUN_009faef0);
  return;
}


//// FUNCTION FUN_00a655e0 @ 00a655e0 ////

void FUN_00a655e0(void)

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
  puStack_8 = &LAB_00cfb998;
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


//// FUNCTION FUN_00a65650 @ 00a65650 ////

void __thiscall FUN_00a65650(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_009c14f0();
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
      _Dst = FUN_00a64f40((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a64490(param_1,iVar5,param_1 + param_2);
      FUN_00a64f40(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a634d0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a64490(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a63d60(param_1,(int)pvVar3,iVar5);
    FUN_00a634d0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a65830 @ 00a65830 ////

void __thiscall FUN_00a65830(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_009c1560();
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
      _Dst = FUN_00a64f70((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a644c0(param_1,iVar5,param_1 + param_2);
      FUN_00a64f70(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a634f0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a644c0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a63d90(param_1,(int)pvVar3,iVar5);
    FUN_00a634f0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a65a10 @ 00a65a10 ////

void __thiscall FUN_00a65a10(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_3c [10];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfb9b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  ExceptionList = &local_10;
  FUN_00a63cb0(local_3c,param_3);
  iVar3 = *(int *)((int)this + 4);
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)((int)this + 0xc) - iVar3) / 0x28;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x28;
    }
    if (0x6666666U - iVar2 < param_2) {
      FUN_009c1640();
      uVar6 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x28;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x6666666 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x28;
      }
      if (uVar6 < iVar3 + param_2) {
        iVar3 = FUN_00a631d0((int)this);
        uVar6 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar6 * 0x28);
      local_8 = 0;
      pvVar5 = FUN_00a64550(*(undefined4 **)((int)this + 4),param_1,pvVar4);
      FUN_00a64fd0(pvVar5,param_2,local_3c);
      FUN_00a64550(param_1,*(undefined4 **)((int)this + 8),(void *)((int)pvVar5 + param_2 * 0x28));
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x28;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar6 * 0x28 + (int)pvVar4);
      *(void **)((int)this + 8) = (void *)((int)pvVar4 + (param_2 + iVar3) * 0x28);
      *(void **)((int)this + 4) = pvVar4;
      ExceptionList = local_10;
      return;
    }
    puVar1 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar1 - (int)param_1) / 0x28) < param_2) {
      FUN_00a64550(param_1,puVar1,param_1 + param_2 * 10);
      local_8 = 2;
      FUN_00a654f0(*(void **)((int)this + 8),
                   param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 0x28,local_3c);
      iVar3 = *(int *)((int)this + 8) + param_2 * 0x28;
      *(int *)((int)this + 8) = iVar3;
      FUN_00a63510(param_1,(undefined4 *)(iVar3 + param_2 * -0x28),local_3c);
      ExceptionList = local_10;
      return;
    }
    pvVar4 = FUN_00a64550(puVar1 + param_2 * -10,puVar1,puVar1);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a63dc0(param_1,puVar1 + param_2 * -10,puVar1);
    FUN_00a63510(param_1,param_1 + param_2 * 10,local_3c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a65d30 @ 00a65d30 ////

void __thiscall FUN_00a65d30(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfb9c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_009c14f0();
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
    FUN_00a65030(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
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


//// FUNCTION FUN_00a65e00 @ 00a65e00 ////

void __thiscall FUN_00a65e00(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfb9d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_009c1560();
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
    FUN_00a65060(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
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


//// FUNCTION FUN_00a65ed0 @ 00a65ed0 ////

void __thiscall FUN_00a65ed0(void *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfb9e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x6666666 < param_1) {
    ExceptionList = &local_10;
    FUN_009c1640();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x28;
  }
  if (uVar1 < param_1) {
    pvVar2 = operator_new(param_1 * 0x28);
    local_8 = 0;
    FUN_00a64510(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),pvVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(void **)((int)this + 0xc) = (void *)(param_1 * 0x28 + (int)pvVar2);
    *(void **)((int)this + 8) = pvVar2;
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a66060 @ 00a66060 ////

void __thiscall FUN_00a66060(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x28 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x28;
      goto LAB_00a660a5;
    }
  }
  iVar1 = 0;
LAB_00a660a5:
  FUN_00a65a10(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x28;
  return;
}


//// FUNCTION FUN_00a661f0 @ 00a661f0 ////

void __thiscall FUN_00a661f0(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x28) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x28))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_00a64fd0(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x28;
    return;
  }
  FUN_00a66060(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00a663a0 @ 00a663a0 ////

undefined4 * __cdecl FUN_00a663a0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x24;
    puVar2 = param_3 + -9;
    *puVar2 = *(undefined4 *)(param_2 + -0x24);
    param_3[-8] = *(undefined4 *)(param_2 + -0x20);
    param_3[-7] = *(undefined4 *)(param_2 + -0x1c);
    param_3[-6] = *(undefined4 *)(param_2 + -0x18);
    *(undefined1 *)(param_3 + -5) = *(undefined1 *)(param_2 + -0x14);
    FUN_00a36db0(param_3 + -4,(void *)(param_2 + -0x10));
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  return puVar2;
}


//// FUNCTION FUN_00a66400 @ 00a66400 ////

undefined4 * __cdecl FUN_00a66400(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x18;
    puVar2 = param_3 + -6;
    *puVar2 = *(undefined4 *)(param_2 + -0x18);
    param_3[-5] = *(undefined4 *)(param_2 + -0x14);
    FUN_00a36db0(param_3 + -4,(void *)(param_2 + -0x10));
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  return puVar2;
}


//// FUNCTION FUN_00a66450 @ 00a66450 ////

void __cdecl FUN_00a66450(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfba01;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    FUN_008a5820(param_1 + 5,(int)(param_2 + 5));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a664c0 @ 00a664c0 ////

void __cdecl FUN_00a664c0(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfba21;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    FUN_008a5820(param_1 + 2,(int)(param_2 + 2));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a66540 @ 00a66540 ////

void __thiscall FUN_00a66540(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(uint *)((int)this + 0xdc) = *(uint *)((int)this + 0xdc) & 0xfffffe11 | 0x11;
  *(undefined4 *)((int)this + 0x98) = param_1;
  *(undefined4 *)((int)this + 0xd0) = param_1;
  return;
}


//// FUNCTION FUN_00a665e0 @ 00a665e0 ////

float10 FUN_00a665e0(float *param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  void *_Memory;
  float local_44;
  float *local_3c;
  float local_38;
  int local_30;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfba58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar12 = FUN_00a62da0(param_1,param_2);
  if ((char)uVar12 == '\0') {
    ExceptionList = local_c;
    return (float10)1e+06;
  }
  local_38 = 0.0;
  local_30 = 0;
  if (DAT_010c9abc < 1) {
LAB_00a668ae:
    ExceptionList = local_c;
    return (float10)local_38 * (float10)1000.0;
  }
  pfVar14 = (float *)(param_2 + 4);
  iVar8 = -param_2;
  local_3c = param_1;
LAB_00a66680:
  fVar2 = *local_3c;
  local_44 = 0.0;
  fVar3 = pfVar14[-1];
  bVar11 = false;
  fVar9 = *(float *)(((int)param_1 - param_2) + (int)pfVar14) - *pfVar14;
  local_18 = (void *)0x0;
  fVar4 = local_3c[2];
  local_14 = (undefined4 *)0x0;
  fVar5 = pfVar14[1];
  local_10 = 0;
  local_4 = 0;
  uVar12 = 0;
  puVar16 = (undefined4 *)0x0;
  _Memory = (void *)0x0;
LAB_00a666cd:
  do {
    fVar6 = param_1[0x23];
    if ((fVar6 == 0.0) || ((uint)((int)param_1[0x24] - (int)fVar6 >> 2) <= uVar12)) break;
    piVar15 = *(int **)((int)fVar6 + uVar12 * 4);
    puVar1 = (undefined4 *)((int)fVar6 + uVar12 * 4);
    iVar13 = 0;
    do {
      if (*piVar15 == param_2) {
        if ((_Memory == (void *)0x0) ||
           ((uint)(local_10 - (int)_Memory >> 2) <= (uint)((int)puVar16 - (int)_Memory >> 2))) {
          FUN_00a65830(local_1c,puVar16,1,puVar1);
          uVar12 = uVar12 + 1;
          puVar16 = local_14;
          _Memory = local_18;
        }
        else {
          *puVar16 = *puVar1;
          local_14 = puVar16 + 1;
          uVar12 = uVar12 + 1;
          puVar16 = local_14;
        }
        goto LAB_00a666cd;
      }
      iVar13 = iVar13 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar13 < 3);
    uVar12 = uVar12 + 1;
  } while( true );
  uVar12 = 0;
  while ((param_1[0x23] != 0.0 && (uVar12 < (uint)((int)param_1[0x24] - (int)param_1[0x23] >> 2))))
  {
    fVar6 = 1.0;
    for (uVar17 = 0;
        (_Memory != (void *)0x0 && (uVar17 < (uint)((int)local_14 - (int)_Memory >> 2)));
        uVar17 = uVar17 + 1) {
      iVar13 = *(int *)((int)param_1[0x23] + uVar12 * 4);
      iVar7 = *(int *)((int)_Memory + uVar17 * 4);
      if (iVar13 != iVar7) {
        fVar10 = (1.0 - (*(float *)((int)pfVar14 + iVar7 + iVar8 + 0x2c) *
                         *(float *)((int)pfVar14 + iVar13 + iVar8 + 0x2c) +
                        *(float *)((int)pfVar14 + iVar7 + iVar8 + 0x30) *
                        *(float *)((int)pfVar14 + iVar13 + iVar8 + 0x30) +
                        *(float *)((int)pfVar14 + iVar7 + iVar8 + 0x34) *
                        *(float *)((int)pfVar14 + iVar13 + iVar8 + 0x34))) * 0.5;
        if (fVar10 <= fVar6) {
          fVar6 = fVar10;
        }
      }
    }
    if (fVar6 < local_44) {
      bVar11 = true;
      uVar12 = uVar12 + 1;
    }
    else {
      bVar11 = true;
      uVar12 = uVar12 + 1;
      local_44 = fVar6;
    }
  }
  if (!bVar11) {
    local_44 = 1.0;
  }
  local_44 = local_44 *
             SQRT((fVar2 - fVar3) * (fVar2 - fVar3) +
                  fVar9 * fVar9 + (fVar4 - fVar5) * (fVar4 - fVar5));
  if (local_38 <= local_44) {
    local_38 = local_44;
  }
  local_4 = 0xffffffff;
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  pfVar14 = pfVar14 + 3;
  local_3c = local_3c + 3;
  local_30 = local_30 + 1;
  if (DAT_010c9abc <= local_30) goto LAB_00a668ae;
  goto LAB_00a66680;
}


//// FUNCTION FUN_00a668d0 @ 00a668d0 ////

uint FUN_00a668d0(float *param_1)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  uint in_EAX;
  uint uVar4;
  undefined2 extraout_var;
  uint uVar5;
  float10 fVar6;
  
  uVar5 = 0;
  param_1[0x36] = 0.0;
  if ((param_1[0x1f] != 0.0) &&
     (uVar4 = (int)param_1[0x20] - (int)param_1[0x1f] >> 2, in_EAX = 0, uVar4 != 0)) {
    param_1[0x35] = 1e+06;
    while ((fVar2 = param_1[0x1f], fVar2 != 0.0 &&
           (uVar4 = (int)param_1[0x20] - (int)fVar2 >> 2, uVar5 < uVar4))) {
      iVar1 = uVar5 * 4;
      fVar6 = FUN_00a665e0(param_1,*(int *)((int)fVar2 + iVar1));
      fVar3 = (float10)param_1[0x35];
      uVar4 = CONCAT22(extraout_var,
                       (ushort)(fVar6 < fVar3) << 8 | (ushort)(NAN(fVar6) || NAN(fVar3)) << 10 |
                       (ushort)(fVar6 == fVar3) << 0xe);
      if (fVar6 < fVar3) {
        fVar2 = *(float *)((int)param_1[0x1f] + iVar1);
        param_1[0x35] = (float)fVar6;
        uVar4 = (int)param_1[0x1f] + iVar1;
        param_1[0x36] = fVar2;
        uVar5 = uVar5 + 1;
      }
      else {
        uVar5 = uVar5 + 1;
      }
    }
    return uVar4;
  }
  param_1[0x35] = -0.01;
  return in_EAX;
}


//// FUNCTION FUN_00a66a10 @ 00a66a10 ////

undefined4 __thiscall FUN_00a66a10(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  uint local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  undefined4 local_4;
  
  local_30 = 0;
  for (uVar4 = 0;
      (iVar1 = *(int *)((int)this + 4), iVar1 != 0 &&
      (uVar4 < (uint)(*(int *)((int)this + 8) - iVar1 >> 2))); uVar4 = uVar4 + 1) {
    piVar2 = *(int **)(iVar1 + uVar4 * 4);
    bVar3 = (*(byte *)(piVar2[2] + 0xdc) & 1) != 0 &&
            ((*(byte *)(piVar2[1] + 0xdc) & 1) != 0 && (*(byte *)(*piVar2 + 0xdc) & 1) != 0);
    if ((*piVar2 == piVar2[1]) || ((*piVar2 == piVar2[2] || (piVar2[1] == piVar2[2])))) {
      bVar3 = false;
    }
    *(bool *)(piVar2 + 0x2a) = bVar3;
    if (bVar3 != false) {
      local_30 = local_30 + 1;
    }
  }
  this_00 = (void *)(param_1 * 0x10 + 0x44 + (int)this);
  piVar2 = (int *)FUN_00a65ed0(this_00,local_30);
  uVar4 = 0;
  while( true ) {
    iVar1 = *(int *)((int)this + 4);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xa4 + (int)this) = 1;
      return CONCAT31((int3)((uint)piVar2 >> 8),1);
    }
    if ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) <= uVar4) break;
    piVar2 = *(int **)(iVar1 + uVar4 * 4);
    if ((char)piVar2[0x2a] != '\0') {
      local_1c = piVar2[6];
      local_20 = *(int *)(piVar2[2] + 0x98);
      local_24 = *(int *)(piVar2[1] + 0x98);
      local_28 = *(int *)(*piVar2 + 0x98);
      local_18 = piVar2[7];
      local_14 = piVar2[8];
      local_10 = piVar2[9];
      local_c = piVar2[10];
      local_8 = (int *)piVar2[0xb];
      local_4 = 0xffffffff;
      piVar2 = local_8;
      if ((((local_28 != local_24) && (local_28 != local_20)) && (local_24 != local_20)) &&
         (((piVar2 = *(int **)((int)this + 0x14), (*(byte *)(piVar2[local_28] + 0xdc) & 1) != 0 &&
           ((*(byte *)(piVar2[local_24] + 0xdc) & 1) != 0)) &&
          (piVar2 = (int *)piVar2[local_20], (*(byte *)(piVar2 + 0x37) & 1) != 0)))) {
        piVar2 = (int *)FUN_00a661f0(this_00,&local_28);
      }
    }
    uVar4 = uVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0xa4 + (int)this) = 1;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


//// FUNCTION FUN_00a66ba0 @ 00a66ba0 ////

undefined4 * __thiscall FUN_00a66ba0(void *this,int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfba86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x24),0x10,4,FUN_009fd0b0,FUN_009faef0);
  local_4 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  pvVar1 = operator_new(param_1 * 4);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(void **)((int)this + 100) = pvVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a66c30 @ 00a66c30 ////

undefined4 * __fastcall FUN_00a66c30(undefined4 *param_1)

{
  _eh_vector_constructor_iterator_(param_1 + 4,0x10,4,FUN_009fd0b0,FUN_009faef0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  return param_1;
}


//// FUNCTION FUN_00a66c70 @ 00a66c70 ////

void FUN_00a66c70(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    FUN_00a65470(param_1);
  }
  return;
}


//// FUNCTION FUN_00a66ca0 @ 00a66ca0 ////

void __fastcall FUN_00a66ca0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    FUN_00a65470(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00a66cf0 @ 00a66cf0 ////

void __cdecl FUN_00a66cf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 4);
      FUN_00a36db0(param_1 + 5,param_3 + 5);
      param_1 = param_1 + 9;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00a66d60 @ 00a66d60 ////

void __cdecl FUN_00a66d60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      FUN_00a36db0(param_1 + 2,param_3 + 2);
      param_1 = param_1 + 6;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00a66e00 @ 00a66e00 ////

undefined4 * __cdecl FUN_00a66e00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cfbaa1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
      FUN_008a5820(param_3 + 5,(int)(param_1 + 5));
    }
    param_3 = param_3 + 9;
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_00a66ed0 @ 00a66ed0 ////

undefined4 * __cdecl FUN_00a66ed0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cfbac1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      FUN_008a5820(param_3 + 2,(int)(param_1 + 2));
    }
    param_3 = param_3 + 6;
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_00a66f90 @ 00a66f90 ////

undefined4 * __cdecl FUN_00a66f90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cfbae1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
      FUN_008a5820(param_3 + 5,(int)(param_1 + 5));
    }
    param_3 = param_3 + 9;
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_00a67060 @ 00a67060 ////

undefined4 * __cdecl FUN_00a67060(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cfbb01;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      FUN_008a5820(param_3 + 2,(int)(param_1 + 2));
    }
    param_3 = param_3 + 6;
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_00a673b0 @ 00a673b0 ////

void __thiscall FUN_00a673b0(void *this,int param_1)

{
  byte bVar1;
  short sVar2;
  void *this_00;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  void *_Memory;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  char cVar12;
  float *pfVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int local_64;
  uint local_58;
  int local_50;
  int *local_48;
  uint local_40;
  short local_20;
  short local_1e;
  short local_1c;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbb1b;
  local_c = ExceptionList;
  if (param_1 == 0) {
    return;
  }
  DAT_0105eb38 = 1;
  ExceptionList = &local_c;
  iVar4 = FUN_009d9bf0((int)this);
  puVar5 = operator_new(iVar4 << 2);
  local_40 = 0;
  if (0 < *(int *)((int)this + 0x28)) {
    do {
      piVar15 = *(int **)(*(int *)((int)this + 0x2c) + local_40 * 4);
      if (0 < *piVar15) {
        this_00 = *(void **)piVar15[1];
        _Memory = operator_new(*(int *)((int)this_00 + 0x2c) << 2);
        pvVar6 = operator_new(0x6c);
        local_4 = 0;
        if (pvVar6 == (void *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = FUN_00a66ba0(pvVar6,*(int *)((int)this_00 + 0x2c));
        }
        *puVar5 = puVar7;
        *puVar7 = *(undefined4 *)((int)this_00 + 0x2c);
        iVar4 = 0;
        local_4 = 0xffffffff;
        if (0 < *(int *)((int)this_00 + 0x2c)) {
          do {
            *(undefined4 *)((int)_Memory + iVar4 * 4) = 0xffffffff;
            *(undefined4 *)(puVar7[0x19] + iVar4 * 4) = 0xffffffff;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)((int)this_00 + 0x2c));
        }
        local_48 = puVar7 + 5;
        iVar4 = param_1 + 0x44;
        local_50 = 0;
        do {
          iVar9 = 0;
          iVar10 = (-0x44 - param_1) + iVar4;
          local_58 = 0;
LAB_00a67514:
          if ((*(int *)(iVar4 + 4) != 0) &&
             (local_58 < (uint)((*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0x28))) {
            iVar16 = *(int *)(param_1 + 0x14);
            piVar15 = (int *)(*(int *)(iVar4 + 4) + iVar9);
            cVar12 = (*(uint *)(*(int *)(iVar16 + *piVar15 * 4) + 0xa0) & 1) != 0;
            if ((*(uint *)(*(int *)(iVar16 + piVar15[1] * 4) + 0xa0) & 1) != 0) {
              cVar12 = cVar12 + '\x01';
            }
            if ((*(uint *)(*(int *)(iVar16 + piVar15[2] * 4) + 0xa0) & 1) != 0) {
              cVar12 = cVar12 + '\x01';
            }
            if ((piVar15[9] == -1) && (cVar12 == '\x03')) {
              iVar16 = 0;
              piVar15[9] = 0;
              pfVar13 = (float *)(piVar15 + 3);
              local_18[0] = 0;
              local_18[1] = 0;
              local_18[2] = 0;
              do {
                iVar8 = FUN_009d5a10(this_00,*(float **)
                                              (*(int *)(param_1 + 0x14) + piVar15[iVar16] * 4),
                                     pfVar13);
                local_18[iVar16] = iVar8;
                iVar16 = iVar16 + 1;
                pfVar13 = pfVar13 + 2;
              } while (iVar16 < 3);
              if (*(int *)((int)_Memory + local_18[0] * 4) < local_50) {
                *(int *)((int)_Memory + local_18[0] * 4) = local_50;
              }
              if (*(int *)((int)_Memory + local_18[1] * 4) < local_50) {
                *(int *)((int)_Memory + local_18[1] * 4) = local_50;
              }
              if (*(int *)((int)_Memory + local_18[2] * 4) < local_50) {
                *(int *)((int)_Memory + local_18[2] * 4) = local_50;
              }
              uVar14 = 0;
              local_20 = (short)local_18[0];
              local_1e = (short)local_18[1];
              local_1c = (short)local_18[2];
              bVar3 = true;
              pvVar6 = (void *)(iVar10 + 0x24 + (int)puVar7);
              iVar16 = 0;
LAB_00a67670:
              do {
                while( true ) {
                  if ((*(int *)((int)pvVar6 + 4) == 0) ||
                     ((uint)((*(int *)((int)pvVar6 + 8) - *(int *)((int)pvVar6 + 4)) / 6) <= uVar14)
                     ) goto LAB_00a6770f;
                  iVar8 = *(int *)(iVar10 + 0x28 + (int)puVar7);
                  sVar2 = *(short *)(iVar8 + iVar16);
                  iVar8 = iVar8 + iVar16;
                  if (local_20 == sVar2) break;
                  if (local_20 != *(short *)(iVar8 + 2)) {
                    if (((local_20 == *(short *)(iVar8 + 4)) && (local_1e == sVar2)) &&
                       (local_1c == *(short *)(iVar8 + 2))) goto LAB_00a676fd;
                    goto LAB_00a67702;
                  }
                  if (local_1e != *(short *)(iVar8 + 4)) goto LAB_00a67702;
                  if (local_1c == sVar2) goto LAB_00a676fd;
                  uVar14 = uVar14 + 1;
                  iVar16 = iVar16 + 6;
                }
                if (local_1e == *(short *)(iVar8 + 2)) {
                  if (local_1c != *(short *)(iVar8 + 4)) {
                    uVar14 = uVar14 + 1;
                    iVar16 = iVar16 + 6;
                    goto LAB_00a67670;
                  }
LAB_00a676fd:
                  bVar3 = false;
                }
LAB_00a67702:
                uVar14 = uVar14 + 1;
                iVar16 = iVar16 + 6;
              } while( true );
            }
            goto LAB_00a67727;
          }
          local_50 = local_50 + 1;
          iVar4 = iVar4 + 0x10;
          local_48 = local_48 + 1;
          if (3 < local_50) {
            FUN_009d9820();
            iVar4 = 0;
            iVar9 = 3;
            do {
              iVar10 = 0;
              if (0 < *(int *)((int)this_00 + 0x2c)) {
                do {
                  if (*(int *)((int)_Memory + iVar10 * 4) == iVar9) {
                    *(int *)(puVar7[0x19] + iVar10 * 4) = iVar4;
                    iVar4 = iVar4 + 1;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < *(int *)((int)this_00 + 0x2c));
              }
              iVar9 = iVar9 + -1;
            } while (-2 < iVar9);
            iVar4 = 0;
            if (0 < *(int *)((int)this_00 + 0x2c)) {
              do {
                iVar9 = *(int *)((int)_Memory + iVar4 * 4);
                if (iVar9 != -1) {
                  puVar7[iVar9 + 1] = puVar7[iVar9 + 1] + 1;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)((int)this_00 + 0x2c));
            }
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
        } while( true );
      }
      local_40 = local_40 + 1;
    } while ((int)local_40 < *(int *)((int)this + 0x28));
  }
  local_40 = iVar4 * 4 + 0x14;
  local_64 = 0;
  param_1 = 0;
  if (0 < *(int *)((int)this + 0x28)) {
    do {
      piVar15 = *(int **)(*(int *)((int)this + 0x2c) + param_1 * 4);
      if (0 < *piVar15) {
        piVar17 = puVar5 + local_64;
        iVar4 = 0;
        do {
          *(int *)(*piVar17 + 0x68) = *(int *)(*(int *)(piVar15[1] + iVar4 * 4) + 0x2c) * 2 + 0x4c;
          iVar9 = 0;
          do {
            iVar10 = 0;
            if (iVar9 < 4) {
              piVar11 = (int *)(*piVar17 + 4 + iVar9 * 4);
              iVar16 = 4 - iVar9;
              do {
                iVar10 = iVar10 + *piVar11;
                piVar11 = piVar11 + 1;
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
            *(int *)(*piVar17 + 4 + iVar9 * 4) = iVar10;
            FUN_009d9820();
            iVar16 = *piVar17;
            iVar10 = iVar9 * 4;
            iVar9 = iVar9 + 1;
            *(int *)(iVar16 + 0x68) = *(int *)(iVar16 + 0x68) + *(int *)(iVar16 + 0x14 + iVar10) * 6
            ;
          } while (iVar9 < 4);
          bVar1 = *(byte *)(*piVar17 + 0x68);
          while ((bVar1 & 3) != 0) {
            *(int *)(*piVar17 + 0x68) = *(int *)(*piVar17 + 0x68) + 1;
            bVar1 = *(byte *)(*piVar17 + 0x68);
          }
          local_40 = local_40 + *(int *)(*piVar17 + 0x68);
          iVar4 = iVar4 + 1;
          local_64 = local_64 + 1;
          piVar17 = piVar17 + 1;
        } while (iVar4 < *piVar15);
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)((int)this + 0x28));
  }
  puVar5 = operator_new(local_40);
  for (uVar14 = local_40 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (local_40 = local_40 & 3; local_40 != 0; local_40 = local_40 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 0x8c));
LAB_00a6770f:
  if (bVar3) {
    *local_48 = *local_48 + 1;
    FUN_009fd770(pvVar6,(undefined4 *)&local_20);
  }
LAB_00a67727:
  local_58 = local_58 + 1;
  iVar9 = iVar9 + 0x28;
  goto LAB_00a67514;
}


//// FUNCTION FUN_00a67bc0 @ 00a67bc0 ////

void FUN_00a67bc0(undefined4 param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  void *pvVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int *local_15c;
  int *local_158;
  int local_154;
  int *local_150;
  int local_14c;
  int *local_148;
  int local_144;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined4 local_13c;
  undefined2 local_138;
  int *local_134;
  undefined4 *local_130;
  int *local_12c;
  int local_128;
  int local_124;
  void *local_120;
  int aiStack_11c [4];
  char local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbb3e;
  pvStack_c = ExceptionList;
  local_13e = DAT_0105eb38;
  DAT_0105eb38 = 1;
  local_13d = DAT_0105eb3a;
  DAT_0105eb3a = 0;
  iVar9 = 0;
  ExceptionList = &pvStack_c;
  do {
    if (iVar9 == 0) {
      _sprintf(local_10c,"%s.msh",param_1);
    }
    else {
      _sprintf(local_10c,"%s_l%d.msh",param_1,iVar9);
    }
    pbVar1 = FUN_009de1d0(local_10c,0);
    aiStack_11c[iVar9 + -1] = (int)pbVar1;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 5);
  iVar9 = FUN_009d9bf0((int)local_120);
  local_14c = iVar9;
  piVar2 = operator_new(iVar9 * 0x70 + 4);
  local_134 = piVar2;
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    local_158 = (int *)0x0;
  }
  else {
    *piVar2 = iVar9;
    _eh_vector_constructor_iterator_(piVar2 + 1,0x70,iVar9,FUN_00a66c30,FUN_00a655c0);
    local_158 = piVar2 + 1;
  }
  local_4 = 0xffffffff;
  local_160 = 0;
  do {
    iVar9 = aiStack_11c[local_160];
    local_164 = 0;
    if (0 < *(int *)(iVar9 + 0x28)) {
      do {
        piVar2 = *(int **)(*(int *)(iVar9 + 0x2c) + local_164 * 4);
        iVar12 = 0;
        if (0 < *piVar2) {
          do {
            iVar4 = *(int *)(piVar2[1] + iVar12 * 4);
            iVar3 = FUN_009da2e0(local_120,iVar4,(int *)&local_15c,(int *)&local_134);
            local_158[iVar3 * 0x1c + local_160] = iVar4;
            iVar4 = FUN_009d9d50(local_120,iVar3);
            local_158[iVar3 * 0x1c + 0x1a] = *(int *)(iVar4 + 0x2c);
            iVar12 = iVar12 + 1;
          } while (iVar12 < *piVar2);
        }
        local_164 = local_164 + 1;
      } while (local_164 < *(int *)(iVar9 + 0x28));
    }
    local_160 = local_160 + 1;
  } while (local_160 < 4);
  local_154 = 0;
  local_16c = 0;
  if (0 < *(int *)((int)local_120 + 0x28)) {
    do {
      local_15c = *(int **)(*(int *)((int)local_120 + 0x2c) + local_16c * 4);
      local_124 = 0;
      if (0 < *local_15c) {
        local_164 = local_154 * 7;
        local_144 = local_154 * 0x1c + 0x14;
        piVar2 = local_158 + local_154 * 0x1c + 0x19;
        local_150 = local_158 + local_154 * 0x1c + 0x14;
        do {
          pvVar11 = *(void **)(local_15c[1] + local_124 * 4);
          piVar2[-5] = 0;
          piVar2[-4] = 0;
          piVar2[-3] = 0;
          piVar2[-2] = 0;
          local_128 = 0;
          local_12c = piVar2 + -0x19;
          local_148 = piVar2;
          do {
            iVar9 = *local_12c;
            if ((iVar9 != 0) && (local_130 = (undefined4 *)0x0, 0 < *(int *)(iVar9 + 0x1c))) {
              local_134 = local_158 + (local_164 + 1 + local_128) * 4;
              local_168 = 0;
              do {
                iVar12 = *(int *)(iVar9 + 0x20);
                iVar4 = 0;
                local_138 = 0;
                local_13c._2_2_ = 0;
                local_13c._0_2_ = 0;
                do {
                  iVar3 = FUN_009d5be0(pvVar11,(float *)((uint)*(ushort *)
                                                                (iVar12 + local_168 + iVar4 * 2) *
                                                         0x20 + *(int *)(iVar9 + 0x30)));
                  *(short *)((int)&local_13c + iVar4 * 2) = (short)iVar3;
                  iVar4 = iVar4 + 1;
                } while (iVar4 < 3);
                FUN_009fd770(local_134,&local_13c);
                local_130 = (undefined4 *)((int)local_130 + 1);
                local_168 = local_168 + 6;
              } while ((int)local_130 < *(int *)(iVar9 + 0x1c));
            }
            local_128 = local_128 + 1;
            local_12c = local_12c + 1;
          } while (local_128 < 4);
          iVar9 = *(int *)((int)pvVar11 + 0x2c);
          puVar5 = operator_new(iVar9 * 4);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar13 = puVar5;
            if (-1 < iVar9 + -1) {
              for (; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar13 = 0;
                puVar13 = puVar13 + 1;
              }
            }
          }
          *piVar2 = (int)puVar5;
          local_168 = 0;
          do {
            iVar9 = local_164 + local_168;
            iVar12 = 0;
            for (uVar14 = 0;
                (local_158[iVar9 * 4 + 5] != 0 &&
                (uVar14 < (uint)((local_158[iVar9 * 4 + 6] - local_158[iVar9 * 4 + 5]) / 6)));
                uVar14 = uVar14 + 1) {
              iVar4 = local_158[iVar9 * 4 + 5] + iVar12;
              iVar3 = local_168 + 1;
              *(int *)(*piVar2 + (uint)*(ushort *)(local_158[iVar9 * 4 + 5] + iVar12) * 4) = iVar3;
              *(int *)(*local_148 + (uint)*(ushort *)(iVar4 + 2) * 4) = iVar3;
              *(int *)(*local_148 + (uint)*(ushort *)(iVar4 + 4) * 4) = iVar3;
              iVar12 = iVar12 + 6;
              piVar2 = local_148;
            }
            local_168 = local_168 + 1;
          } while (local_168 < 4);
          iVar9 = 0;
          do {
            if (0 < *(int *)((int)pvVar11 + 0x2c)) {
              iVar12 = 0;
              do {
                iVar4 = *(int *)(*piVar2 + iVar12 * 4) + -1;
                if (iVar4 == iVar9) {
                  local_158[local_144 + iVar4] = local_158[local_144 + iVar4] + 1;
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 < *(int *)((int)pvVar11 + 0x2c));
            }
            FUN_009d9820();
            iVar9 = iVar9 + 1;
          } while (iVar9 < 4);
          iVar12 = 0;
          pvVar6 = operator_new(*(int *)((int)pvVar11 + 0x2c) << 2);
          piVar2[-1] = (int)pvVar6;
          iVar9 = 0;
          if (0 < *(int *)((int)pvVar11 + 0x2c)) {
            do {
              *(int *)(piVar2[-1] + iVar9 * 4) = iVar9;
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)((int)pvVar11 + 0x2c));
          }
          iVar9 = 4;
          do {
            iVar4 = 0;
            if (0 < *(int *)((int)pvVar11 + 0x2c)) {
              do {
                if (*(int *)(*piVar2 + iVar4 * 4) == iVar9) {
                  *(int *)(piVar2[-1] + iVar4 * 4) = iVar12;
                  iVar12 = iVar12 + 1;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)((int)pvVar11 + 0x2c));
            }
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
          local_164 = local_164 + 7;
          local_124 = local_124 + 1;
          local_154 = local_154 + 1;
          local_150 = local_150 + 0x1c;
          local_144 = local_144 + 0x1c;
          piVar2 = piVar2 + 0x1c;
          local_148 = piVar2;
        } while (local_124 < *local_15c);
      }
      local_16c = local_16c + 1;
    } while (local_16c < *(int *)((int)local_120 + 0x28));
  }
  DAT_0105eb3a = local_13d;
  local_150 = (int *)(local_14c * 4 + 0x14);
  local_154 = 0;
  local_144 = 0;
  pvVar11 = local_120;
  if (0 < *(int *)((int)local_120 + 0x28)) {
    do {
      local_15c = *(int **)(*(int *)((int)local_120 + 0x2c) + local_144 * 4);
      local_148 = (int *)0x0;
      if (0 < *local_15c) {
        puVar15 = (uint *)(local_158 + local_154 * 0x1c + 0x1b);
        do {
          puVar8 = puVar15 + -0x16;
          puVar10 = puVar15 + -7;
          *puVar15 = *(int *)(*(int *)(local_15c[1] + (int)local_148 * 4) + 0x2c) * 2 + 0x4c;
          iVar9 = 0;
          do {
            uVar14 = 0;
            if (iVar9 < 4) {
              iVar12 = 4 - iVar9;
              puVar7 = puVar10;
              do {
                uVar14 = uVar14 + *puVar7;
                puVar7 = puVar7 + 1;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            *puVar10 = uVar14;
            if (*puVar8 == 0) {
              iVar12 = 0;
            }
            else {
              iVar12 = (int)(puVar8[1] - *puVar8) / 6;
            }
            FUN_009d9820();
            iVar9 = iVar9 + 1;
            puVar10 = puVar10 + 1;
            uVar14 = *puVar15 + iVar12 * 6;
            puVar8 = puVar8 + 4;
            *puVar15 = uVar14;
          } while (iVar9 < 4);
          while ((uVar14 & 3) != 0) {
            uVar14 = *puVar15 + 1;
            *puVar15 = uVar14;
          }
          local_150 = (int *)((int)local_150 + *puVar15);
          local_148 = (int *)((int)local_148 + 1);
          local_154 = local_154 + 1;
          puVar15 = puVar15 + 0x1c;
        } while ((int)local_148 < *local_15c);
      }
      local_144 = local_144 + 1;
      pvVar11 = local_120;
    } while (local_144 < *(int *)((int)local_120 + 0x28));
  }
  piVar2 = local_150;
  local_130 = operator_new((uint)local_150);
  puVar5 = local_130;
  for (uVar14 = (uint)piVar2 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar14 = (uint)piVar2 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)pvVar11 + 0x8c));
}


//// FUNCTION FUN_00a68540 @ 00a68540 ////

void __cdecl FUN_00a68540(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cfbb61;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 4);
      FUN_008a5820(param_1 + 5,(int)(param_3 + 5));
    }
    param_1 = param_1 + 9;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a68610 @ 00a68610 ////

void __cdecl FUN_00a68610(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cfbb81;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      FUN_008a5820(param_1 + 2,(int)(param_3 + 2));
    }
    param_1 = param_1 + 6;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a68720 @ 00a68720 ////

void FUN_00a68720(int param_1,int param_2)

{
  void *pvVar1;
  void *this;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float *pfVar10;
  float *local_3c;
  int local_38;
  float local_1c;
  float local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbb9b;
  local_c = ExceptionList;
  uVar8 = *(uint *)(param_1 + 0xdc);
  if ((uVar8 & 0x10) == 0) {
    ExceptionList = &local_c;
    FUN_009d9820();
    uVar8 = *(uint *)(param_1 + 0xdc);
  }
  else if (param_2 != 0) {
    if (*(int *)(param_1 + 0x8c) == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 2;
    }
    ExceptionList = &local_c;
    local_3c = operator_new(param_1 * 8);
    local_4 = 0;
    if (local_3c == (float *)0x0) {
      local_3c = (float *)0x0;
    }
    else {
      FUN_00401380(local_3c,8,param_1,&LAB_00403300);
    }
    local_4 = 0xffffffff;
    local_38 = 0;
    pfVar10 = local_3c;
    if (0 < param_1) {
      do {
        pvVar1 = *(void **)(*(int *)(iVar2 + 0x8c) + local_38 * 4);
        iVar3 = 0;
        do {
          if (*(int *)((int)pvVar1 + iVar3 * 4) == iVar2) {
            fVar9 = *(float *)((int)pvVar1 + iVar3 * 8 + 0x18);
            fVar4 = *(float *)((int)pvVar1 + iVar3 * 8 + 0x1c);
            goto LAB_00a68826;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 3);
        fVar9 = 0.0;
        fVar4 = 0.0;
LAB_00a68826:
        *pfVar10 = fVar9;
        pfVar10[1] = fVar4;
        iVar3 = 0;
        do {
          this = *(void **)(*(int *)(iVar2 + 0x8c) + iVar3 * 4);
          if ((pvVar1 != this) && (*(int *)((int)pvVar1 + 0xac) == *(int *)((int)this + 0xac))) {
            iVar5 = 0;
            do {
              if (*(int *)((int)this + iVar5 * 4) == param_2) {
                FUN_00a63860(this,&local_1c,iVar2);
                if ((local_1c == fVar9) && (local_18 == fVar4)) {
                  pfVar6 = (float *)FUN_00a63860(this,local_14,param_2);
                  *pfVar10 = *pfVar6;
                  pfVar10[1] = pfVar6[1];
                  iVar3 = param_1;
                }
                break;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 3);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_1);
        local_38 = local_38 + 1;
        pfVar10 = pfVar10 + 2;
      } while (local_38 < param_1);
    }
    if (*(int *)(iVar2 + 0x8c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 0x90) - *(int *)(iVar2 + 0x8c) >> 2;
    }
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      pfVar10 = local_3c + iVar3 * 2;
      do {
        iVar5 = *(int *)(*(int *)(iVar2 + 0x8c) + iVar3 * 4);
        iVar7 = 0;
        pfVar6 = (float *)(iVar5 + 0x18);
        do {
          if (*(int *)(iVar5 + iVar7 * 4) == iVar2) {
            *(int *)(iVar5 + iVar7 * 4) = param_2;
            *pfVar6 = *pfVar10;
            pfVar6[1] = pfVar10[1];
          }
          iVar7 = iVar7 + 1;
          pfVar6 = pfVar6 + 2;
        } while (iVar7 < 3);
        iVar3 = iVar3 + -1;
        pfVar10 = pfVar10 + -2;
      } while (-1 < iVar3);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  *(uint *)(param_1 + 0xdc) = uVar8 & 0xfffffffe;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a68a70 @ 00a68a70 ////

void __fastcall FUN_00a68a70(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfbbe4;
  pvStack_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &pvStack_c;
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_009de3b0(*(void **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x38));
}


//// FUNCTION FUN_00a68d20 @ 00a68d20 ////

bool __fastcall FUN_00a68d20(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  float local_8;
  
  pvVar1 = *(void **)(param_1 + 0x40);
  pvVar5 = (void *)0x0;
  local_8 = 0.0;
  for (; pvVar6 = pvVar5, pvVar1 != (void *)0x0; pvVar1 = *(void **)((int)pvVar1 + 0xe0)) {
    uVar4 = *(uint *)((int)pvVar1 + 0xdc);
    if (((uVar4 & 1) != 0) && ((uVar4 & 0x10) != 0)) {
      pvVar6 = pvVar1;
      if ((uVar4 & 0x40) != 0) break;
      if ((pvVar5 == (void *)0x0) || (*(float *)((int)pvVar1 + 0xd4) < local_8)) {
        local_8 = *(float *)((int)pvVar1 + 0xd4);
        pvVar5 = pvVar1;
      }
    }
  }
  local_8 = 0.0;
  if (pvVar6 == (void *)0x0) goto LAB_00a68e72;
  iVar2 = *(int *)((int)pvVar6 + 0xd8);
  if (((iVar2 != 0) && (*(int *)((int)pvVar6 + 0x98) != *(int *)((int)pvVar6 + 0xd0))) &&
     (*(int *)(iVar2 + 0x98) != *(int *)(iVar2 + 0xd0))) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x14) + *(int *)((int)pvVar6 + 0xd0) * 4);
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar2 + 0xd0) * 4);
    uVar4 = FUN_00a645d0(pvVar1,iVar3);
    if ((((char)uVar4 != '\0') && (pvVar6 != pvVar1)) && (iVar2 != iVar3)) {
      if (*(float *)((int)pvVar6 + 0xd4) == 0.0) {
        if (*(float *)((int)pvVar1 + 0xd4) <= 0.001) goto LAB_00a68e2f;
      }
      else if (ABS(*(float *)((int)pvVar6 + 0xd4) - *(float *)((int)pvVar1 + 0xd4)) <=
               *(float *)((int)pvVar6 + 0xd4) * 0.01) {
LAB_00a68e2f:
        if ((((*(byte *)((int)pvVar1 + 0xdc) & 1) != 0) && (iVar3 != 0)) &&
           ((*(byte *)(iVar3 + 0xdc) & 1) != 0)) {
          FUN_00a68720((int)pvVar1,iVar3);
          local_8 = 1.4013e-45;
        }
      }
    }
  }
  if ((*(byte *)((int)pvVar6 + 0xdc) & 1) != 0) {
    FUN_00a68720((int)pvVar6,iVar2);
    local_8 = (float)((int)local_8 + 1);
  }
LAB_00a68e72:
  return local_8 == 2.8026e-45;
}


//// FUNCTION FUN_00a68e90 @ 00a68e90 ////

void __thiscall FUN_00a68e90(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfbbf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x71c71c7 < param_1) {
    ExceptionList = &local_10;
    FUN_009c15d0();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x24;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 0x24);
    local_8 = 0;
    FUN_00a66e00(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(int *)((int)this + 4) != 0) {
      FUN_009c4090(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1 * 9;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a68f90 @ 00a68f90 ////

void __thiscall FUN_00a68f90(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfbc00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0xaaaaaaa < param_1) {
    ExceptionList = &local_10;
    FUN_00a655e0();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x18;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 0x18);
    local_8 = 0;
    FUN_00a66ed0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(int *)((int)this + 4) != 0) {
      FUN_00a66c70(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1 * 6;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a69090 @ 00a69090 ////

undefined4 * FUN_00a69090(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00a68540(param_1,param_2,param_3);
  return param_1 + param_2 * 9;
}


//// FUNCTION FUN_00a690c0 @ 00a690c0 ////

undefined4 * FUN_00a690c0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00a68610(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_00a690f0 @ 00a690f0 ////

void __thiscall FUN_00a690f0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2c [4];
  void *local_28;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfbc18;
  local_10 = ExceptionList;
  local_3c = param_3[1];
  local_40 = *param_3;
  local_38 = param_3[2];
  local_30 = *(undefined1 *)(param_3 + 4);
  local_14 = &stack0xffffffb4;
  local_34 = param_3[3];
  ExceptionList = &local_10;
  local_18 = this;
  FUN_008a5820(local_2c,(int)(param_3 + 5));
  iVar2 = *(int *)((int)this + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar5 = (*(int *)((int)this + 0xc) - iVar2) / 0x24;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x24;
    }
    if (0x71c71c7U - iVar1 < param_2) {
      FUN_009c15d0();
      uVar5 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x24;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0x71c71c7 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x24;
      }
      if (uVar5 < iVar2 + param_2) {
        iVar2 = FUN_00a631b0((int)this);
        uVar5 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar5 * 0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar3;
      puVar4 = FUN_00a66f90(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_00a68540(puVar4,param_2,&local_40);
      FUN_00a66f90(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2 * 9);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x24;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_009c4090(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar5 * 9;
      *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 9;
      *(undefined4 **)((int)this + 4) = puVar3;
    }
    else {
      puVar3 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar3 - (int)param_1) / 0x24) < param_2) {
        FUN_00a66f90(param_1,puVar3,param_1 + param_2 * 9);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00a69090(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x24,
                     &local_40);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x24;
        *(int *)((int)this + 8) = iVar2;
        local_8 = 0;
        FUN_00a66cf0(param_1,(undefined4 *)(iVar2 + param_2 * -0x24),&local_40);
      }
      else {
        puVar4 = FUN_00a66f90(puVar3 + param_2 * -9,puVar3,puVar3);
        *(undefined4 **)((int)this + 8) = puVar4;
        FUN_00a663a0((int)param_1,(int)(puVar3 + param_2 * -9),puVar3);
        FUN_00a66cf0(param_1,param_1 + param_2 * 9,&local_40);
      }
    }
  }
  if (local_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a69410 @ 00a69410 ////

void __thiscall FUN_00a69410(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  void *local_28;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfbc38;
  local_10 = ExceptionList;
  local_30 = param_3[1];
  local_34 = *param_3;
  local_14 = &stack0xffffffc0;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_008a5820(local_2c,(int)(param_3 + 2));
  iVar2 = *(int *)((int)this + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar5 = (*(int *)((int)this + 0xc) - iVar2) / 0x18;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x18;
    }
    if (0xaaaaaaaU - iVar1 < param_2) {
      FUN_00a655e0();
      uVar5 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x18;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0xaaaaaaa - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x18;
      }
      if (uVar5 < iVar2 + param_2) {
        iVar2 = FUN_00a631f0((int)this);
        uVar5 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar5 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar3;
      puVar4 = FUN_00a67060(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_00a68610(puVar4,param_2,&local_34);
      FUN_00a67060(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2 * 6);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x18;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_00a66c70(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar5 * 6;
      *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 6;
      *(undefined4 **)((int)this + 4) = puVar3;
    }
    else {
      puVar3 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar3 - (int)param_1) / 0x18) < param_2) {
        FUN_00a67060(param_1,puVar3,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00a690c0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     &local_34);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar2;
        local_8 = 0;
        FUN_00a66d60(param_1,(undefined4 *)(iVar2 + param_2 * -0x18),&local_34);
      }
      else {
        puVar4 = FUN_00a67060(puVar3 + param_2 * -6,puVar3,puVar3);
        *(undefined4 **)((int)this + 8) = puVar4;
        FUN_00a66400((int)param_1,(int)(puVar3 + param_2 * -6),puVar3);
        FUN_00a66d60(param_1,param_1 + param_2 * 6,&local_34);
      }
    }
  }
  if (local_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a69720 @ 00a69720 ////

void __fastcall FUN_00a69720(void *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  puVar6 = (undefined4 *)((int)param_1 + 0x48);
  iVar3 = 0;
  iVar4 = 0;
  do {
    if ((void *)*puVar6 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*puVar6);
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *(undefined1 *)((int)param_1 + iVar4 + 0xa4) = 0;
    iVar4 = iVar4 + 1;
    puVar6 = puVar6 + 4;
  } while (iVar4 < 4);
  for (uVar2 = 0;
      (iVar4 = *(int *)((int)param_1 + 0x14), iVar4 != 0 &&
      (uVar2 < (uint)(*(int *)((int)param_1 + 0x18) - iVar4 >> 2))); uVar2 = uVar2 + 1) {
    iVar4 = *(int *)(iVar4 + uVar2 * 4);
    *(uint *)(iVar4 + 0xdc) = *(uint *)(iVar4 + 0xdc) & 0xfffffe1d | 0x11;
  }
  for (uVar2 = 0;
      (iVar4 = *(int *)((int)param_1 + 4), iVar4 != 0 &&
      (uVar2 < (uint)(*(int *)((int)param_1 + 8) - iVar4 >> 2))); uVar2 = uVar2 + 1) {
    *(undefined1 *)(*(int *)(iVar4 + uVar2 * 4) + 0xa8) = 1;
  }
  if (*(char *)((int)param_1 + 0x34) != '\0') {
    FUN_00a64c10((int)param_1);
  }
  for (uVar2 = 0;
      (iVar4 = *(int *)((int)param_1 + 0x14), iVar4 != 0 &&
      (uVar2 < (uint)(*(int *)((int)param_1 + 0x18) - iVar4 >> 2))); uVar2 = uVar2 + 1) {
    FUN_00a668d0(*(float **)(iVar4 + uVar2 * 4));
  }
  iVar4 = 4;
  piVar5 = (int *)((int)param_1 + 0x94);
  do {
    uVar7 = FUN_00acd42c();
    *piVar5 = (int)uVar7;
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar7 = FUN_00acd42c();
  FUN_009d9820();
  if (0 < (int)uVar7) {
    do {
      bVar1 = FUN_00a68d20((int)param_1);
      if (bVar1) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = 0;
      piVar5 = (int *)((int)param_1 + 0x94);
      do {
        if ((*piVar5 <= iVar3) && (*(char *)((int)param_1 + iVar4 + 0xa4) == '\0')) {
          FUN_00a66a10(param_1,iVar4);
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar7);
  }
  for (uVar2 = 0;
      (iVar3 = *(int *)((int)param_1 + 4), iVar3 != 0 &&
      (uVar2 < (uint)(*(int *)((int)param_1 + 8) - iVar3 >> 2))); uVar2 = uVar2 + 1) {
    piVar5 = *(int **)(iVar3 + uVar2 * 4);
    bVar1 = (*(byte *)(piVar5[2] + 0xdc) & 1) != 0 &&
            ((*(byte *)(piVar5[1] + 0xdc) & 1) != 0 && (*(byte *)(*piVar5 + 0xdc) & 1) != 0);
    if ((*piVar5 == piVar5[1]) || ((*piVar5 == piVar5[2] || (piVar5[1] == piVar5[2])))) {
      bVar1 = false;
    }
    *(bool *)(piVar5 + 0x2a) = bVar1;
  }
  FUN_009d9820();
  iVar3 = 0;
  do {
    FUN_009d9820();
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}


//// FUNCTION FUN_00a699c0 @ 00a699c0 ////

void __thiscall FUN_00a699c0(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x24 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x24;
      goto LAB_00a69a05;
    }
  }
  iVar1 = 0;
LAB_00a69a05:
  FUN_00a690f0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x24;
  return;
}


//// FUNCTION FUN_00a69a30 @ 00a69a30 ////

void __thiscall FUN_00a69a30(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_00a69a75;
    }
  }
  iVar1 = 0;
LAB_00a69a75:
  FUN_00a69410(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_00a69aa0 @ 00a69aa0 ////

void __thiscall FUN_00a69aa0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x24) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x24))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00a68540(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 9;
    return;
  }
  FUN_00a699c0(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00a69b30 @ 00a69b30 ////

void __thiscall FUN_00a69b30(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00a68610(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_00a69a30(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00a69bc0 @ 00a69bc0 ////

uint __thiscall FUN_00a69bc0(void *this,float *param_1)

{
  int iVar1;
  uint uVar2;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  undefined1 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfbc58;
  local_c = ExceptionList;
  iVar1 = 0;
  uVar2 = 0;
  while( true ) {
    if ((*(int *)((int)this + 0x24) == 0) ||
       ((uint)((*(int *)((int)this + 0x28) - *(int *)((int)this + 0x24)) / 0x24) <= uVar2)) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_4 = 0;
      if (*(int *)((int)this + 0x24) == 0) {
        local_28 = 0;
      }
      else {
        local_28 = (*(int *)((int)this + 0x28) - *(int *)((int)this + 0x24)) / 0x24;
      }
      local_30 = *param_1;
      local_2c = param_1[1];
      local_20 = 0;
      ExceptionList = &local_c;
      local_24 = local_28;
      FUN_00a69aa0((void *)((int)this + 0x20),&local_30);
      iVar1 = 0;
      if (*(int *)((int)this + 0x24) != 0) {
        iVar1 = (*(int *)((int)this + 0x28) - *(int *)((int)this + 0x24)) / 0x24;
      }
      ExceptionList = local_c;
      return iVar1 - 1;
    }
    if ((*(float *)(*(int *)((int)this + 0x24) + iVar1) == *param_1) &&
       (*(float *)(*(int *)((int)this + 0x24) + iVar1 + 4) == param_1[1])) break;
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x24;
  }
  return uVar2;
}


//// FUNCTION FUN_00a69ce0 @ 00a69ce0 ////

void __fastcall FUN_00a69ce0(void *param_1)

{
  uint *puVar1;
  void *this;
  int iVar2;
  uint *puVar3;
  void *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *_Memory;
  uint *local_48;
  uint *local_44;
  uint local_40;
  uint local_3c;
  void *local_38;
  undefined1 local_34 [4];
  uint *local_30;
  uint *local_2c;
  undefined4 local_28;
  uint local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbc80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = param_1;
  for (local_48 = (uint *)0x0;
      (iVar10 = *(int *)((int)param_1 + 4), iVar10 != 0 &&
      (local_48 < (uint)(*(int *)((int)param_1 + 8) - iVar10 >> 2)));
      local_48 = (uint *)((int)local_48 + 1)) {
    iVar2 = *(int *)((int)param_1 + 0x24);
    iVar8 = *(int *)(*(int *)(iVar10 + (int)local_48 * 4) + 0x10) * 0x24;
    iVar5 = *(int *)(iVar8 + 0xc + iVar2);
    iVar4 = *(int *)(*(int *)(iVar10 + (int)local_48 * 4) + 0x14) * 0x24;
    if (*(int *)(iVar4 + 0xc + iVar2) <= iVar5) {
      iVar5 = *(int *)(iVar4 + 0xc + iVar2);
    }
    iVar10 = iVar2 + *(int *)(*(int *)(iVar10 + (int)local_48 * 4) + 0xc) * 0x24;
    iVar6 = *(int *)(iVar10 + 0xc);
    if ((iVar5 <= iVar6) &&
       (iVar6 = *(int *)(iVar8 + 0xc + iVar2), *(int *)(iVar4 + 0xc + iVar2) <= iVar6)) {
      iVar6 = *(int *)(iVar4 + 0xc + iVar2);
    }
    FUN_00a652f0(param_1,*(int *)(iVar10 + 0xc),iVar6);
    FUN_00a652f0(param_1,*(int *)(*(int *)((int)param_1 + 0x24) + 0xc + iVar8),iVar6);
    FUN_00a652f0(this_00,*(int *)(*(int *)((int)param_1 + 0x24) + 0xc + iVar4),iVar6);
  }
  local_30 = (uint *)0x0;
  local_2c = (uint *)0x0;
  local_28 = 0;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  FUN_00a68f90(local_34,0x14);
  local_48 = (uint *)0x0;
  local_40 = 0;
  do {
    if ((*(int *)((int)param_1 + 0x24) == 0) ||
       ((uint *)((*(int *)((int)param_1 + 0x28) - *(int *)((int)param_1 + 0x24)) / 0x24) <= local_48
       )) {
      local_48 = (uint *)0x0;
      for (local_44 = (uint *)0x0;
          (*(int *)((int)param_1 + 0x24) != 0 &&
          (local_44 <
           (uint *)((*(int *)((int)param_1 + 0x28) - *(int *)((int)param_1 + 0x24)) / 0x24)));
          local_44 = (uint *)((int)local_44 + 1)) {
        uVar9 = *(uint *)(*(int *)((int)param_1 + 0x24) + 0xc + (int)local_48);
        local_3c = *(int *)((int)param_1 + 0x24) + (int)local_48;
        uVar11 = 0;
        for (puVar7 = local_30;
            ((local_40 = uVar9, local_30 != (uint *)0x0 &&
             (uVar11 < (uint)(((int)local_2c - (int)local_30) / 0x18))) &&
            (local_40 = uVar11, *puVar7 != uVar9)); puVar7 = puVar7 + 6) {
          uVar11 = uVar11 + 1;
        }
        *(uint *)(local_3c + 0xc) = local_40;
        local_48 = (uint *)((int)local_48 + 0x24);
      }
      puVar7 = local_30;
      _Memory = local_30;
      for (local_44 = (uint *)0x0;
          (puVar3 = local_2c, _Memory != (uint *)0x0 &&
          (local_44 < (uint *)(((int)local_2c - (int)_Memory) / 0x18)));
          local_44 = (uint *)((int)local_44 + 1)) {
        local_40 = 0;
        while ((puVar7[3] != 0 && (local_40 < (uint)((int)(puVar7[4] - puVar7[3]) >> 2)))) {
          uVar9 = local_40 + 1;
          local_3c = uVar9;
          for (; (uVar11 = puVar7[3], uVar11 != 0 &&
                 (uVar9 < (uint)((int)(puVar7[4] - uVar11) >> 2))); uVar9 = uVar9 + 1) {
            iVar10 = *(int *)((int)param_1 + 0x24) + *(int *)(uVar11 + uVar9 * 4) * 0x24;
            this = (void *)(*(int *)((int)param_1 + 0x24) + *(int *)(uVar11 + local_40 * 4) * 0x24);
            uVar11 = FUN_00a65090(this,iVar10);
            if ((char)uVar11 != '\0') {
              *(undefined1 *)(iVar10 + 0x10) = 1;
              *(undefined1 *)((int)this + 0x10) = 1;
            }
            _Memory = local_30;
            param_1 = local_38;
          }
          local_40 = local_3c;
        }
        puVar7 = puVar7 + 6;
      }
      uVar9 = 0;
      while( true ) {
        if (_Memory == (uint *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if ((uint)(((int)puVar3 - (int)_Memory) / 0x18) <= uVar9) break;
        FUN_009d9820();
        uVar9 = uVar9 + 1;
      }
      if (_Memory != puVar3) {
        puVar7 = _Memory + 3;
        do {
          if ((void *)*puVar7 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free((void *)*puVar7);
          }
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar1 = puVar7 + 3;
          puVar7 = puVar7 + 6;
        } while (puVar1 != puVar3);
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_24[1] = 0;
    local_24[0] = *(uint *)(local_40 + 0xc + *(int *)((int)param_1 + 0x24));
    local_4._0_1_ = 1;
    uVar9 = 0;
    local_44 = local_30;
    while (local_30 != (uint *)0x0) {
      if ((uint)(((int)local_2c - (int)local_30) / 0x18) <= uVar9) {
        iVar10 = ((int)local_2c - (int)local_30) / 0x18;
        goto LAB_00a69f01;
      }
      if (*local_44 == local_24[0]) {
        local_30[uVar9 * 6 + 1] = local_30[uVar9 * 6 + 1] + 1;
        uVar11 = local_30[uVar9 * 6 + 3];
        local_44 = local_48;
        if ((uVar11 == 0) ||
           ((uint)((int)(local_30[uVar9 * 6 + 5] - uVar11) >> 2) <=
            (uint)((int)(local_30[uVar9 * 6 + 4] - uVar11) >> 2))) {
          FUN_0040ec60(local_30 + uVar9 * 6 + 2,(undefined4 *)local_30[uVar9 * 6 + 4],1,&local_44);
        }
        else {
          puVar7 = (uint *)local_30[uVar9 * 6 + 4];
          *puVar7 = (uint)local_48;
          local_30[uVar9 * 6 + 4] = (uint)(puVar7 + 1);
        }
        goto LAB_00a69f64;
      }
      local_44 = local_44 + 6;
      uVar9 = uVar9 + 1;
    }
    iVar10 = 0;
LAB_00a69f01:
    FUN_00a69b30(local_34,local_24);
    uVar9 = local_30[iVar10 * 6 + 3];
    local_44 = local_48;
    if ((uVar9 == 0) ||
       ((uint)((int)(local_30[iVar10 * 6 + 5] - uVar9) >> 2) <=
        (uint)((int)(local_30[iVar10 * 6 + 4] - uVar9) >> 2))) {
      FUN_0040ec60(local_30 + iVar10 * 6 + 2,(undefined4 *)local_30[iVar10 * 6 + 4],1,&local_44);
    }
    else {
      puVar7 = (uint *)local_30[iVar10 * 6 + 4];
      *puVar7 = (uint)local_48;
      local_30[iVar10 * 6 + 4] = (uint)(puVar7 + 1);
    }
LAB_00a69f64:
    local_48 = (uint *)((int)local_48 + 1);
    local_40 = local_40 + 0x24;
    local_4._0_1_ = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  } while( true );
}


//// FUNCTION FUN_00a6a190 @ 00a6a190 ////

void __thiscall FUN_00a6a190(void *this,char *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint local_48;
  undefined4 *local_44;
  undefined4 *local_2c;
  undefined4 *local_20;
  void *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbca6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x84) = 0x42960000;
  *(undefined4 *)((int)this + 0x88) = 0x42480000;
  *(undefined4 *)((int)this + 0x8c) = 0x41c80000;
  *(undefined4 *)((int)this + 0x90) = 0x41500000;
  DAT_010c9abc = 1;
  if (param_1 == (char *)0x0) {
    ExceptionList = pvVar2;
    return;
  }
  *(char **)((int)this + 0x30) = param_1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  uVar3 = FUN_009d9b70(*(int *)((int)this + 0x30));
  uVar4 = FUN_009d9bb0(*(int *)((int)this + 0x30));
  local_48 = uVar4;
  puVar5 = operator_new(uVar4 * 4);
  *(undefined4 **)((int)this + 0x38) = puVar5;
  for (uVar4 = uVar4 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  local_2c = FUN_00a63fe0(this,(int *)&local_48);
  FUN_00a65e00(this,uVar3);
  uVar3 = local_48;
  FUN_00a65d30((void *)((int)this + 0x10),local_48);
  iVar7 = 0;
  if (0 < (int)uVar3) {
    local_44 = local_2c;
    do {
      local_1c = operator_new(0xe8);
      local_4 = 0;
      if (local_1c == (void *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00a66540(local_1c,iVar7);
      }
      iVar6 = *(int *)((int)this + 0x14);
      local_4 = 0xffffffff;
      local_20 = puVar5;
      if ((iVar6 == 0) ||
         ((uint)(*(int *)((int)this + 0x1c) - iVar6 >> 2) <=
          (uint)(*(int *)((int)this + 0x18) - iVar6 >> 2))) {
        FUN_00a65650((void *)((int)this + 0x10),*(undefined4 **)((int)this + 0x18),1,&local_20);
      }
      else {
        puVar1 = *(undefined4 **)((int)this + 0x18);
        *puVar1 = puVar5;
        *(undefined4 **)((int)this + 0x18) = puVar1 + 1;
      }
      *puVar5 = *local_44;
      puVar5[1] = local_44[1];
      puVar5[2] = local_44[2];
      puVar5[0x28] = local_44[3];
      puVar5[0x29] = 0;
      if (ABS((float)puVar5[1]) < 0.01) {
        iVar6 = FUN_009d9bf0((int)param_1);
        uVar3 = 1 << ((byte)iVar6 & 0x1f);
        puVar5[0x28] = puVar5[0x28] | uVar3;
        puVar5[0x29] = puVar5[0x29] | (int)uVar3 >> 0x1f;
        puVar5[0x37] = puVar5[0x37] | 4;
      }
      iVar7 = iVar7 + 1;
      local_44 = local_44 + 4;
    } while (iVar7 < (int)local_48);
  }
  FUN_00a64780((int)this);
  *(undefined1 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x35) = 1;
  iVar7 = _strncmp("cos_f_",param_1,6);
  if (iVar7 == 0) {
    *(undefined1 *)((int)this + 0x35) = 0;
  }
  else {
    iVar7 = _strncmp("cos_g_",param_1,6);
    if ((iVar7 != 0) && (iVar7 = _strncmp("cos_m_",param_1,6), iVar7 != 0)) goto LAB_00a6a3c9;
  }
  *(undefined1 *)((int)this + 0x34) = 1;
LAB_00a6a3c9:
  if (*(int *)((int)this + 0x14) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
  }
  FUN_00a68e90((void *)((int)this + 0x20),uVar3);
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00a6a840 @ 00a6a840 ////

undefined4 FUN_00a6a840(void)

{
  return 0xc;
}


//// FUNCTION FUN_00a6a850 @ 00a6a850 ////

int __cdecl FUN_00a6a850(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar4 = 0;
  pbVar2 = param_1;
  pbVar5 = DAT_010c9ac0;
  pbVar6 = DAT_010c9ac0;
  if (0 < DAT_010c9ac4) {
LAB_00a6a870:
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a6a894;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
          if (bVar1 != 0) goto LAB_00a6a870;
        }
        iVar3 = 0;
      }
      else {
LAB_00a6a894:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar3 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      pbVar2 = param_1;
      pbVar5 = pbVar6 + 0x40;
      pbVar6 = pbVar6 + 0x40;
    } while (iVar4 < DAT_010c9ac4);
  }
  return 0;
}


//// FUNCTION FUN_00a6a8c0 @ 00a6a8c0 ////

void FUN_00a6a8c0(void)

{
  return;
}


//// FUNCTION FUN_00a6a8d0 @ 00a6a8d0 ////

void __thiscall FUN_00a6a8d0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *_Memory;
  undefined4 *puVar6;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbcbb;
  local_c = ExceptionList;
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc) == 3)) {
    ExceptionList = &local_c;
    puVar3 = operator_new(0x11820);
    local_4 = 0;
    _Memory = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_00401380(puVar3,0x18,0xbac,&LAB_009dc2f0);
      _Memory = puVar3;
    }
    puVar3 = *(undefined4 **)((int)this + 0x90);
    puVar6 = _Memory;
    for (iVar5 = 0x4608; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar5 = *(int *)((int)this + 0x90);
    local_10 = 0;
    puVar3 = _Memory;
    do {
      iVar2 = *(int *)(local_10 + *(int *)(param_1 + 0x10));
      iVar4 = 0;
      if (0 < *(int *)(iVar2 + 4)) {
        puVar6 = puVar3 + 0x2eb0;
        do {
          puVar1 = (undefined4 *)
                   (iVar5 + (uint)*(ushort *)(*(int *)(iVar2 + 0x48) + iVar4 * 2) * 0x18);
          *puVar1 = puVar6[-0x2eb0];
          puVar1[1] = puVar6[-0x2eaf];
          puVar1[2] = puVar6[-0x2eae];
          puVar1[3] = puVar6[-0x2ead];
          puVar1[4] = puVar6[-0x2eac];
          puVar1[5] = puVar6[-0x2eab];
          puVar1 = (undefined4 *)
                   (iVar5 + (*(ushort *)(*(int *)(iVar2 + 0x48) + iVar4 * 2) + 0x3e4) * 0x18);
          *puVar1 = puVar6[-0x1758];
          puVar1[1] = puVar6[-0x1757];
          puVar1[2] = puVar6[-0x1756];
          puVar1[3] = puVar6[-0x1755];
          puVar1[4] = puVar6[-0x1754];
          puVar1[5] = puVar6[-0x1753];
          puVar1 = (undefined4 *)
                   (iVar5 + (*(ushort *)(*(int *)(iVar2 + 0x48) + iVar4 * 2) + 0x7c8) * 0x18);
          *puVar1 = *puVar6;
          puVar1[1] = puVar6[1];
          puVar1[2] = puVar6[2];
          puVar1[3] = puVar6[3];
          puVar1[4] = puVar6[4];
          puVar1[5] = puVar6[5];
          iVar4 = iVar4 + 1;
          puVar6 = puVar6 + 6;
        } while (iVar4 < *(int *)(iVar2 + 4));
      }
      local_10 = local_10 + 4;
      puVar3 = puVar3 + *(int *)(iVar2 + 4) * 6;
      iVar5 = iVar5 + *(int *)(iVar2 + 4) * 0x18;
    } while (local_10 < 0xc);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00a6aa90 @ 00a6aa90 ////

int __fastcall FUN_00a6aa90(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xa4) >> 7 & 0x1f;
  if ((uVar2 != 0) &&
     (iVar1 = uVar2 * 0x78 + -0x78 + *(int *)(param_1 + 200), *(char *)(iVar1 + 0x20) == '\x04')) {
    return *(int *)(iVar1 + 0x2c) + -1;
  }
  return -1;
}


//// FUNCTION FUN_00a6aae0 @ 00a6aae0 ////

void __thiscall FUN_00a6aae0(void *this,int param_1)

{
  undefined1 uVar1;
  byte *pbVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = DAT_0105cc5c;
  puStack_8 = &LAB_00cfbcd8;
  local_c = ExceptionList;
  DAT_0105cc5c = 0;
  local_4 = 0;
  if ((*(char *)this == '\0') || (param_1 == 0)) {
    DAT_0105cc5c = uVar1;
    return;
  }
  ExceptionList = &local_c;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_009de3b0(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (((*(byte *)((int)this + 0xa4) & 1) != 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    DAT_0105ead8 = FUN_009d0f40('\0','\0');
    if (((char)((uint)*(undefined4 *)((int)this + 0xa4) >> 8) < '\0') &&
       (DAT_0105ead8 == 0x31545844)) {
      DAT_0105ead8 = 0x33545844;
    }
    DAT_0105ead4 = 1;
    DAT_0105ead0 = 0;
    pbVar2 = FUN_009de1d0(this,0);
    *(byte **)(param_1 + 0x18) = pbVar2;
    *(undefined4 *)(param_1 + 0x28) = DAT_0105ead0;
    DAT_0105ead4 = 0;
    DAT_0105cc5c = uVar1;
    ExceptionList = local_c;
    return;
  }
  pbVar2 = FUN_009de1d0(this,1);
  *(byte **)(param_1 + 0x18) = pbVar2;
  DAT_0105cc5c = uVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a6ac00 @ 00a6ac00 ////

void __thiscall FUN_00a6ac00(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  
  if ((*(byte *)((int)this + 0xa4) & 1) != 0) {
    iVar1 = 0;
    this_00 = (void *)FUN_0097e350(*(void **)(param_1 + 8),0);
    while (this_00 != (void *)0x0) {
      iVar1 = iVar1 + 1;
      if ((*(int *)((int)this_00 + 0x84) != 0) && (*(int *)((int)this_00 + 0xb0) == 0)) {
        FUN_009dbd30(this_00,*(int *)((int)this_00 + 0x84),*(float *)(param_1 + 0x120),
                     *(float *)(param_1 + 0x124));
      }
      this_00 = (void *)FUN_0097e350(*(void **)(param_1 + 8),iVar1);
    }
    FUN_00a48f10(*(void **)(param_1 + 0x18),*(uint *)((int)this + 0xa4) >> 0xd & 3);
  }
  return;
}


//// FUNCTION FUN_00a6ac80 @ 00a6ac80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a6ac80(int param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  void *pvVar4;
  int local_104;
  char local_100 [4];
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined1 local_f9;
  
  if (param_1 == 0) {
    _DAT_00000010 = _DAT_00000010 & 0xffffffbf;
    return;
  }
  pcVar3 = (char *)(param_1 + 0x208);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_104 = (int)pcVar3 - (param_1 + 0x209);
  if (local_104 != 0) {
    pvVar4 = FUN_0099bb50((char *)(param_1 + 0x208),0,0,0,'\0');
    FUN_009a57d0((int)pvVar4,0,0xffffffff,0,(undefined4 *)0x0);
    if (pvVar4 != (void *)0x0) {
      FUN_0099b400(pvVar4);
    }
  }
  pcVar3 = (char *)(param_1 + 0x1a8);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar3 - (param_1 + 0x1a9) == 0x11) {
    FUN_009b7af0((char *)(param_1 + 0x1b3),&local_104,(int *)0x0);
    if ((((DAT_010c9894 != 0) && (-1 < local_104)) && (local_104 <= DAT_010c9880)) &&
       (*(char *)(DAT_010c9894 + local_104 * 8) != '\0')) {
      _sprintf(local_100,"mup_bodytatoo_v%s",(char *)(param_1 + 0x1b3));
      pvVar4 = FUN_0099bb50(local_100,0,0,0,'\0');
      FUN_009a57d0((int)pvVar4,0,0xffffffff,0,(undefined4 *)0x0);
      if (pvVar4 != (void *)0x0) {
        FUN_0099b400(pvVar4);
      }
    }
  }
  pcVar3 = (char *)(param_1 + 0x228);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar3 - (param_1 + 0x229) == 0x10) {
    FUN_009b7af0((char *)(param_1 + 0x232),&local_104,(int *)0x0);
    if (((DAT_010c986c != 0) && (-1 < local_104)) &&
       ((local_104 <= DAT_010c9890 && (*(char *)(DAT_010c986c + local_104 * 8) != '\0')))) {
      _sprintf(local_100,(char *)(param_1 + 0x228));
      local_fc = 0x62;
      local_fb = 0x6f;
      local_fa = 100;
      local_f9 = 0x79;
      pvVar4 = FUN_0099bb50(local_100,0,0,0,'\0');
      FUN_009a57d0((int)pvVar4,0,0xffffffff,0,(undefined4 *)0x0);
      if (pvVar4 != (void *)0x0) {
        FUN_0099b400(pvVar4);
      }
      bVar2 = 1;
      goto LAB_00a6ae78;
    }
  }
  bVar2 = 0;
LAB_00a6ae78:
  *(uint *)(param_1 + 0x10) =
       *(uint *)(param_1 + 0x10) ^ ((uint)bVar2 << 6 ^ *(uint *)(param_1 + 0x10)) & 0x40;
  return;
}


//// FUNCTION FUN_00a6aea0 @ 00a6aea0 ////

void __thiscall FUN_00a6aea0(void *this,void *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_EDX;
  uint extraout_EDX_00;
  byte *pbVar10;
  float10 fVar11;
  ulonglong uVar12;
  char *pcVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 local_300;
  byte *local_2fc;
  char local_2f5;
  undefined1 *local_2f4;
  undefined1 local_2f0;
  char local_2ec [32];
  char local_2cc [32];
  char local_2ac [32];
  char local_28c [32];
  char local_26c [32];
  byte local_24c [64];
  char local_20c [256];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = DAT_0105cc5c;
  puStack_8 = &LAB_00cfbcfb;
  local_c = ExceptionList;
  if ((*(byte *)((int)this + 0xa4) & 1) == 0) {
    return;
  }
  local_2f0 = DAT_0105cc5c;
  DAT_0105cc5c = 0;
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x28) == 0) {
    DAT_0105beb4 = 0;
    DAT_0105cc5c = uVar4;
    return;
  }
  iVar14 = -1;
  DAT_0105bde0 = 1;
  ExceptionList = &local_c;
  iVar5 = FUN_009d0f30();
  FUN_009a63a0(iVar5,iVar14);
  FUN_009d62a0('\x01');
  DAT_0105beb4 = 1;
  FUN_009a6fb0('\x01');
  FUN_009a4f10();
  if ((*(byte *)((int)this + 0xa4) & 2) != 0) {
    pcVar13 = local_2cc;
    for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      pcVar13[2] = '\0';
      pcVar13[3] = '\0';
      pcVar13 = pcVar13 + 4;
    }
    FUN_009d1650(param_1,local_2cc);
    pvVar6 = FUN_0099bb50(local_2cc,0,0,0,'\0');
    local_2fc = &stack0xfffffce4;
    FUN_009a57d0((int)pvVar6,0,0xffffffff,0,(undefined4 *)0x0);
    if (pvVar6 != (void *)0x0) {
      FUN_0099b400(pvVar6);
    }
    local_300 = *(undefined4 *)((int)param_1 + 0x11c);
    pbVar10 = (byte *)((int)param_1 + 0x38);
    uVar15 = 1;
    local_2fc = pbVar10;
    fVar11 = FUN_009d1cb0(pbVar10);
    uVar12 = FUN_009d0f80(local_300,extraout_EDX,local_300,(float)fVar11,uVar15);
    iVar5 = (int)uVar12;
    if (iVar5 != 0) {
      pvVar6 = FUN_0099bb50(local_28c,0,0,0,'\0');
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0xff < iVar5) {
        iVar5 = 0xff;
      }
      local_300 = CONCAT13((char)iVar5,0xff0000);
      local_300 = CONCAT22(local_300._2_2_,0xff00);
      local_300 = CONCAT31(local_300._1_3_,0xff);
      FUN_009a57d0((int)pvVar6,0,local_300,0,(undefined4 *)0x0);
      if (pvVar6 != (void *)0x0) {
        FUN_0099b400(pvVar6);
      }
    }
    local_300 = *(uint *)((int)param_1 + 0x11c);
    uVar15 = 2;
    fVar11 = FUN_009d1cb0(pbVar10);
    uVar12 = FUN_009d0f80(extraout_ECX,local_300,local_300,(float)fVar11,uVar15);
    iVar5 = (int)uVar12;
    if (iVar5 != 0) {
      pvVar6 = FUN_0099bb50(local_2ac,0,0,0,'\0');
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0xff < iVar5) {
        iVar5 = 0xff;
      }
      local_300 = CONCAT13((char)iVar5,0xff0000);
      local_300 = CONCAT22(local_300._2_2_,0xff00);
      local_300 = CONCAT31(local_300._1_3_,0xff);
      FUN_009a57d0((int)pvVar6,0,local_300,0,(undefined4 *)0x0);
      pbVar10 = local_2fc;
      if (pvVar6 != (void *)0x0) {
        FUN_0099b400(pvVar6);
        pbVar10 = local_2fc;
      }
    }
    local_2fc = *(byte **)((int)param_1 + 0x11c);
    uVar15 = 3;
    fVar11 = FUN_009d1cb0(pbVar10);
    uVar12 = FUN_009d0f80(extraout_ECX_00,extraout_EDX_00,local_2fc,(float)fVar11,uVar15);
    iVar5 = (int)uVar12;
    if (iVar5 != 0) {
      pvVar6 = FUN_0099bb50(local_26c,0,0,0,'\0');
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0xff < iVar5) {
        iVar5 = 0xff;
      }
      local_300 = CONCAT13((char)iVar5,0xff0000);
      local_300 = CONCAT22(local_300._2_2_,0xff00);
      local_300 = CONCAT31(local_300._1_3_,0xff);
      FUN_009a57d0((int)pvVar6,0,local_300,0,(undefined4 *)0x0);
      if (pvVar6 != (void *)0x0) {
        FUN_0099b400(pvVar6);
      }
    }
    _sprintf(local_10c,"skin_blend_body_%d.dds");
    pvVar6 = FUN_0099bb50(local_10c,0,0,0,'\0');
    puVar7 = (undefined4 *)FUN_009d65c0(param_1,&local_2fc);
    FUN_009a57d0((int)pvVar6,0,*puVar7,0,(undefined4 *)0x0);
    FUN_00a6ac80((int)param_1);
    if ((*(byte *)((int)param_1 + 0x10) & 0x40) != 0) {
      FUN_009b7af0((char *)((int)param_1 + 0x232),(int *)&local_2fc,(int *)0x0);
      puVar7 = (undefined4 *)FUN_00a16c40(&local_300,(int)local_2fc);
      FUN_009a57d0((int)pvVar6,0,*puVar7,0,(undefined4 *)0x0);
    }
    if (pvVar6 != (void *)0x0) {
      FUN_0099b400(pvVar6);
    }
    iVar5 = FUN_00a6aa90((int)this);
    if (iVar5 != -1) {
      if (iVar5 < 10) {
        pcVar13 = "mup_latex_v0%d.dds";
      }
      else {
        pcVar13 = "mup_latex_v%d.dds";
      }
      _sprintf(local_20c,pcVar13);
      if (0 < *(int *)((*(uint *)((int)this + 0xa4) >> 7 & 0x1f) * 0x78 + *(int *)((int)this + 200)
                      + -0x28)) {
        pcVar13 = local_20c;
        do {
          pcVar8 = pcVar13;
          pcVar13 = pcVar8 + 1;
        } while (*pcVar8 != '\0');
        _sprintf(pcVar8 + -4,"_t%d.dds");
      }
      pvVar6 = FUN_0099bb50(local_20c,0,0,0,'\0');
      local_2fc = &stack0xfffffce4;
      FUN_009a57d0((int)pvVar6,0,0xffffffff,0,(undefined4 *)0x0);
      if (pvVar6 != (void *)0x0) {
        FUN_0099b400(pvVar6);
      }
    }
  }
  iVar5 = 0;
  local_2f5 = '\0';
  local_300 = 0;
  if ((*(uint *)((int)this + 0xa4) & 0x7c) != 0) {
    do {
      local_2fc = *(byte **)(*(int *)((int)this + 0xc4) + 0x2c + iVar5);
      bVar3 = false;
      if (((*(byte *)(*(int *)((int)this + 0xc4) + iVar5 + 0x50) & 1) != 0) &&
         (local_2fc == *(byte **)(*(int *)((int)this + 0xc4) + 0x28 + iVar5))) {
        bVar3 = true;
      }
      pcVar13 = (char *)(*(int *)((int)this + 0xc4) + iVar5);
      bVar1 = pcVar13[0x50];
      if ((bVar1 & 2) == 0) {
        if (!bVar3) {
LAB_00a6b3a7:
          pcVar13 = (char *)(*(int *)((int)this + 0xc4) + iVar5);
          if (*(int *)(pcVar13 + 0x28) < 2) {
            _sprintf(local_2ec,pcVar13);
          }
          else {
            FUN_009ad980(&DAT_010b9588,local_2ec,pcVar13,(int *)&local_2fc);
          }
          pvVar6 = FUN_0099bb50(local_2ec,0,0,0,'\0');
          local_2f4 = &stack0xfffffce4;
          if (*(int *)(*(int *)((int)this + 0xc4) + 0x20 + iVar5) == 1) {
            local_2f4 = &stack0xfffffce4;
            FUN_009a57d0((int)pvVar6,1,0xffffffff,0,(undefined4 *)0x0);
            local_2f5 = '\x01';
          }
          else {
            FUN_009a57d0((int)pvVar6,*(int *)(*(int *)((int)this + 0xc4) + 0x20 + iVar5),0xffffffff,
                         0,(undefined4 *)0x0);
          }
          if (pvVar6 != (void *)0x0) {
            FUN_0099b400(pvVar6);
          }
        }
      }
      else if ((bVar1 & 4) == 0) {
        FUN_009ad980(&DAT_010b9588,local_2cc,pcVar13,(int *)&local_2fc);
        pcVar13 = local_2cc;
        do {
          cVar2 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar2 != '\0');
        if (4 < (uint)((int)pcVar13 - (int)(local_2cc + 1))) {
          _sprintf((char *)local_24c,local_2cc);
          pbVar10 = local_24c;
          do {
            pbVar9 = pbVar10;
            pbVar10 = pbVar9 + 1;
          } while (*pbVar9 != 0);
          pbVar9[-4] = 0;
          iVar14 = FUN_0097e520(*(void **)((int)param_1 + 8),local_24c,'\0');
          if (iVar14 != 0) goto LAB_00a6b3a7;
        }
      }
      local_300 = local_300 + 1;
      iVar5 = iVar5 + 0x78;
    } while (local_300 < (*(uint *)((int)this + 0xa4) >> 2 & 0x1f));
    if (local_2f5 != '\0') goto LAB_00a6b4a1;
  }
  local_2f4 = &stack0xfffffce4;
  FUN_009a57d0(0,1,0xffffffff,0,(undefined4 *)0x0);
LAB_00a6b4a1:
  FUN_009a4fb0();
  local_2f4 = &stack0xfffffcec;
  FUN_009a56e0(*(int *)((int)param_1 + 0x28));
  FUN_009a6fb0('\0');
  FUN_009d62a0('\0');
  DAT_0105cc5c = local_2f0;
  DAT_0105beb4 = 0;
  DAT_0105bde0 = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a6b520 @ 00a6b520 ////

bool __cdecl FUN_00a6b520(undefined4 param_1,char *param_2)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 uVar6;
  float *pfVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  bool bVar15;
  int local_c84;
  int local_c80;
  int local_c7c [4];
  char *local_c6c;
  uint local_c68;
  uint local_c64;
  char local_c60 [20];
  int local_c4c;
  int local_c48;
  uint local_c44;
  int local_c40;
  int local_c3c;
  int *local_c38;
  int local_c34;
  undefined4 *local_c30;
  undefined1 *local_c2c;
  undefined4 local_c28;
  uint local_c24;
  undefined1 local_c20 [20];
  char local_c0c [1021];
  char acStack_80f [1024];
  char acStack_40f [1027];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbd5f;
  local_c = ExceptionList;
  DAT_0105eb3a = 0;
  ExceptionList = &local_c;
  _sprintf(local_c0c,"%s\\%s",&DAT_0105eb50,param_1);
  _sprintf(acStack_80f + 3,local_c0c);
  _sprintf(acStack_40f + 3,local_c0c);
  pcVar4 = local_c0c;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  _sprintf(pcVar4 + (int)(local_c0c + (0x3fc - (int)(local_c0c + 1))),"_fat.msh");
  _sprintf(pcVar4 + (int)(acStack_80f + (0x3ff - (int)(local_c0c + 1))),"_enh.msh");
  local_c6c = local_c60;
  pcVar4 = local_c0c;
  local_c60[0] = '\0';
  local_c68 = 0;
  local_c64 = 0x14;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  uVar8 = (int)pcVar4 - (int)(local_c0c + 1);
  if (0x13 < uVar8) {
    local_c64 = uVar8 + 0x20 & 0xffffffe0;
    local_c6c = _malloc(local_c64);
  }
  _strncpy(local_c6c,local_c0c,uVar8);
  local_c6c[uVar8] = '\0';
  bVar15 = false;
  local_4 = 0;
  local_c68 = uVar8;
  uVar8 = FUN_009d3720(&local_c6c);
  if (uVar8 != 0) {
    pcVar4 = acStack_80f + 3;
    local_c2c = local_c20;
    local_c20[0] = 0;
    local_c28 = 0;
    local_c24 = 0x14;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_004015d0(&local_c2c,acStack_80f + 3,(int)pcVar4 - (int)(acStack_80f + 4));
    bVar15 = true;
    local_4 = 1;
    uVar8 = FUN_009d3720(&local_c2c);
    bVar3 = false;
    if (uVar8 != 0) goto LAB_00a6b6c6;
  }
  bVar3 = true;
LAB_00a6b6c6:
  if ((bVar15) && (0x14 < local_c24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_c2c);
  }
  local_4 = 0xffffffff;
  if (0x14 < local_c64) {
                    /* WARNING: Subroutine does not return */
    _free(local_c6c);
  }
  if (!bVar3) {
    local_c80 = 1;
    pcVar4 = acStack_80f + 3;
    local_c84 = 2;
    do {
      local_4 = 0xffffffff;
      local_c6c = local_c60;
      local_c60[0] = '\0';
      local_c68 = 0;
      local_c64 = 0x14;
      pcVar9 = pcVar4;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      uVar8 = (int)pcVar9 - (int)(pcVar4 + 1);
      if (0x13 < uVar8) {
        local_c64 = uVar8 + 0x20 & 0xffffffe0;
        local_c6c = _malloc(local_c64);
      }
      _strncpy(local_c6c,pcVar4,uVar8);
      local_c6c[uVar8] = '\0';
      local_4 = 2;
      local_c68 = uVar8;
      uVar8 = FUN_009d3720(&local_c6c);
      local_4 = 0xffffffff;
      if (0x14 < local_c64) {
                    /* WARNING: Subroutine does not return */
        _free(local_c6c);
      }
      if (uVar8 != 0) {
        local_c80 = local_c80 + 1;
      }
      pcVar4 = pcVar4 + 0x400;
      local_c84 = local_c84 + -1;
    } while (local_c84 != 0);
    if (local_c80 == 3) {
      _sprintf(local_c0c,"%s",param_1);
      _sprintf(acStack_80f + 3,local_c0c);
      _sprintf(acStack_40f + 3,local_c0c);
      pcVar4 = local_c0c;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      _sprintf(pcVar4 + (int)(local_c0c + (0x3fc - (int)(local_c0c + 1))),"_fat.msh");
      _sprintf(pcVar4 + (int)(acStack_80f + (0x3ff - (int)(local_c0c + 1))),"_enh.msh");
      local_c7c[0] = 0;
      local_c7c[1] = 0;
      local_c7c[2] = 0;
      iVar12 = 0;
      pcVar4 = local_c0c;
      while( true ) {
        pbVar5 = FUN_009de1d0(pcVar4,0);
        local_c7c[iVar12] = (int)pbVar5;
        if ((iVar12 != 0) && (uVar6 = FUN_009dc040(local_c7c[0],(int)pbVar5), (char)uVar6 == '\0'))
        break;
        iVar12 = iVar12 + 1;
        pcVar4 = pcVar4 + 0x400;
        if (2 < iVar12) {
          iVar12 = FUN_009d9bb0(local_c7c[0]);
          uVar8 = iVar12 * 0x48 + 0x10;
          local_c48 = iVar12;
          local_c44 = uVar8;
          local_c30 = operator_new(uVar8);
          puVar14 = local_c30;
          for (uVar8 = uVar8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          }
          for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
            *(undefined1 *)puVar14 = 0;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          pfVar11 = (float *)(local_c30 + 4);
          local_c30[3] = pfVar11;
          local_c3c = iVar12 * 0x18;
          local_c80 = 0;
          local_c84 = 0;
          do {
            local_c40 = local_c7c[local_c80];
            local_c4c = 0;
            if (0 < *(int *)(local_c40 + 0x28)) {
              local_c34 = local_c40;
              do {
                local_c38 = *(int **)(*(int *)(local_c40 + 0x2c) + local_c4c * 4);
                local_c7c[3] = 0;
                if (0 < *local_c38) {
                  do {
                    iVar12 = *(int *)(local_c38[1] + local_c7c[3] * 4);
                    iVar10 = 0;
                    if (0 < *(int *)(iVar12 + 0x2c)) {
                      iVar13 = 0;
                      pfVar7 = pfVar11;
                      do {
                        pfVar11 = (float *)(*(int *)(iVar12 + 0x30) + iVar13);
                        *pfVar7 = *pfVar11;
                        pfVar7[1] = pfVar11[1];
                        pfVar7[2] = pfVar11[2];
                        if (local_c80 != 0) {
                          pfVar11 = (float *)((int)pfVar7 - local_c84);
                          *pfVar7 = *pfVar7 - *pfVar11;
                          pfVar7[1] = pfVar7[1] - pfVar11[1];
                          pfVar7[2] = pfVar7[2] - pfVar11[2];
                        }
                        pfVar1 = (float *)(iVar13 + 0xc + *(int *)(iVar12 + 0x30));
                        pfVar7[3] = *pfVar1;
                        pfVar7[4] = pfVar1[1];
                        pfVar11 = pfVar7 + 6;
                        pfVar7[5] = pfVar1[2];
                        iVar10 = iVar10 + 1;
                        iVar13 = iVar13 + 0x20;
                        pfVar7 = pfVar11;
                      } while (iVar10 < *(int *)(iVar12 + 0x2c));
                    }
                    local_c7c[3] = local_c7c[3] + 1;
                    iVar12 = local_c48;
                  } while (local_c7c[3] < *local_c38);
                }
                local_c4c = local_c4c + 1;
              } while (local_c4c < *(int *)(local_c40 + 0x28));
            }
            local_c80 = local_c80 + 1;
            local_c84 = local_c84 + local_c3c;
          } while (local_c80 < 3);
          bVar15 = (int)pfVar11 - (int)local_c30 == local_c44;
          local_c30[2] = iVar12;
          local_c30[1] = local_c44;
          *local_c30 = 1;
          if (*(void **)(local_c7c[0] + 0x84) == (void *)0x0) {
            *(undefined4 **)(local_c7c[0] + 0x84) = local_c30;
            FUN_00a49ab0(local_c7c[0]);
            iVar12 = 0;
            do {
              if ((void *)local_c7c[iVar12 + 1] != (void *)0x0) {
                FUN_009de3b0((void *)local_c7c[iVar12 + 1]);
                local_c7c[iVar12 + 1] = 0;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < 3);
            FUN_009c4d80(param_2);
            ExceptionList = puStack_8;
            return bVar15;
          }
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(local_c7c[0] + 0x84));
        }
      }
    }
  }
  ExceptionList = puStack_8;
  return false;
}


//// FUNCTION FUN_00a6bad0 @ 00a6bad0 ////

void __thiscall FUN_00a6bad0(void *this,char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *this_00;
  char *pcVar4;
  LONG LVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbd80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar3 = FUN_00433eb0();
  FUN_0097e2b0((int)puVar3);
  this_00 = FUN_009d30f0((int)puVar3,*(uint *)((int)this + 0xa4) >> 0xd & 3,1,(uint *)0x0,'\0');
  FUN_009d2c50(this_00,this,'\x01',-1.0,-1.0);
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
  FUN_009acf60(&local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  puVar6 = &stack0xffffff90;
  iVar7 = 0;
  uVar8 = 10;
  FUN_004036d0(&stack0xffffff84,local_2c,local_28);
  FUN_009d6610(this_00,puVar6,iVar7,uVar8);
  FUN_009d2c50(this_00,(void *)0x0,'\x01',-1.0,-1.0);
  if (this_00 != (undefined4 *)0x0) {
    FUN_009d2b50(this_00);
  }
  if (puVar3 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar3 + 4);
    uVar2 = DAT_0105b588;
    DAT_0105b588 = uVar2;
    if (LVar5 == 0) {
      DAT_0105b588 = 1;
      (**(code **)*puVar3)();
      DAT_0105b588 = uVar2;
    }
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a6bc40 @ 00a6bc40 ////

void __thiscall FUN_00a6bc40(void *this,undefined4 param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 *_Memory;
  byte *this_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *local_43c;
  size_t local_438;
  uint local_434;
  char *local_42c;
  uint local_428;
  uint local_424;
  char local_420 [20];
  char local_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbd9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  _sprintf(local_40c,"Data\\Costume\\Datas\\%s.cos",param_1);
  uVar8 = *(uint *)((int)this + 0xd0);
  iVar9 = uVar8 * 0x40;
  local_438 = iVar9 + (*(uint *)((int)this + 0xa4) >> 7 & 0x1f) * 0x78 + 0xa8 +
              (*(uint *)((int)this + 0xa4) >> 2 & 0x1f) * 0x78;
  _Memory = operator_new(local_438);
  local_43c = _Memory + 0x2a;
  puVar10 = _Memory;
  for (uVar4 = local_438 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar10 = 0;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  *_Memory = 7;
  *(byte *)(_Memory + 1) =
       *(byte *)(_Memory + 1) ^ (*(byte *)(_Memory + 1) ^ *(byte *)((int)this + 0xa4)) & 1;
  *(byte *)((int)_Memory + 5) = (byte)(*(uint *)((int)this + 0xa4) >> 1) & 1;
  *(byte *)((int)_Memory + 6) = (byte)(*(uint *)((int)this + 0xa4) >> 2) & 0x1f;
  *(byte *)((int)_Memory + 7) = (byte)(*(uint *)((int)this + 0xa4) >> 0xc) & 1;
  _Memory[0x23] = *(uint *)((int)this + 0xa4) >> 7 & 0x1f;
  *(byte *)(_Memory + 2) = (byte)(*(uint *)((int)this + 0xa4) >> 0xd) & 3;
  bVar1 = *(byte *)(_Memory + 1);
  *(byte *)(_Memory + 1) = bVar1 | 2;
  puVar10 = this;
  pcVar7 = (char *)(_Memory + 3);
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pcVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    pcVar7 = pcVar7 + 4;
  }
  puVar10 = (undefined4 *)((int)this + 0x20);
  puVar11 = _Memory + 0xb;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar10 = (undefined4 *)((int)this + 0x40);
  puVar11 = _Memory + 0x13;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar10 = (undefined4 *)((int)this + 0x60);
  puVar11 = _Memory + 0x1b;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  _Memory[0x24] = *(undefined4 *)((int)this + 0xa8);
  _Memory[0x25] = *(undefined4 *)((int)this + 0xac);
  _Memory[0x26] = *(undefined4 *)((int)this + 0xb0);
  _Memory[0x27] = *(undefined4 *)((int)this + 0xb4);
  _Memory[0x28] = *(undefined4 *)((int)this + 0xb8);
  _Memory[0x29] = *(undefined4 *)((int)this + 0xd0);
  *(undefined1 *)((int)_Memory + 9) = *(undefined1 *)((int)this + 0xbc);
  *(byte *)(_Memory + 1) = bVar1 & 0xfb | 2;
  this_00 = FUN_009de1d0((char *)(_Memory + 3),1);
  if (this_00 != (byte *)0x0) {
    bVar3 = FUN_009daa10(this_00,"[no latex]");
    if (bVar3) {
      *(byte *)(_Memory + 1) = *(byte *)(_Memory + 1) | 4;
    }
    FUN_009de3b0(this_00);
  }
  uVar4 = 0;
  if ((*(uint *)((int)this + 0xa4) & 0x7c) != 0) {
    iVar5 = 0;
    do {
      puVar10 = (undefined4 *)(*(int *)((int)this + 0xc4) + iVar5);
      puVar11 = local_43c;
      for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      local_43c = local_43c + 0x1e;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x78;
    } while (uVar4 < (*(uint *)((int)this + 0xa4) >> 2 & 0x1f));
  }
  local_434 = *(uint *)((int)this + 0xa4) >> 7 & 0x1f;
  if ((local_434 != 0) &&
     (*(char *)(local_434 * 0x78 + -0x58 + *(int *)((int)this + 200)) == '\x04')) {
    local_434 = local_434 - 1;
    local_438 = local_438 - 0x78;
    _Memory[0x23] = _Memory[0x23] + -1;
  }
  if (0 < (int)local_434) {
    iVar5 = 0;
    do {
      puVar10 = (undefined4 *)(*(int *)((int)this + 200) + iVar5);
      puVar11 = local_43c;
      for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      local_43c = local_43c + 0x1e;
      iVar5 = iVar5 + 0x78;
      local_434 = local_434 - 1;
    } while (local_434 != 0);
  }
  if (iVar9 != 0) {
    puVar10 = *(undefined4 **)((int)this + 0xd4);
    for (iVar9 = (uVar8 & 0x3ffffff) << 4; iVar9 != 0; iVar9 = iVar9 + -1) {
      *local_43c = *puVar10;
      puVar10 = puVar10 + 1;
      local_43c = local_43c + 1;
    }
    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined1 *)local_43c = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      local_43c = (undefined4 *)((int)local_43c + 1);
    }
  }
  local_42c = local_420;
  pcVar7 = local_40c;
  local_420[0] = '\0';
  local_428 = 0;
  local_424 = 0x14;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar8 = (int)pcVar7 - (int)(local_40c + 1);
  if (0x13 < uVar8) {
    local_424 = uVar8 + 0x20 & 0xffffffe0;
    local_42c = _malloc(local_424);
  }
  _strncpy(local_42c,local_40c,uVar8);
  local_42c[uVar8] = '\0';
  local_4 = 0;
  local_428 = uVar8;
  FUN_009d4370(&local_42c,_Memory,local_438);
  local_4 = 0xffffffff;
  if (0x14 < local_424) {
                    /* WARNING: Subroutine does not return */
    _free(local_42c);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a6bfc0 @ 00a6bfc0 ////

void FUN_00a6bfc0(void)

{
  undefined4 *this;
  uint uVar1;
  uint uVar2;
  undefined4 local_36c [18];
  int local_324;
  int local_320;
  char local_318 [260];
  char local_214 [260];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbdbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009c89a0(local_36c);
  local_4 = 0;
  FUN_009ca9d0(local_36c,"*.cos","Data\\costume\\Datas\\",(undefined1 *)0x1);
  if (local_324 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = local_320 - local_324 >> 2;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      __splitpath(*(char **)(local_324 + uVar2 * 4),(char *)0x0,(char *)0x0,local_214,local_110);
      _sprintf(local_318,"%s%s",local_214,local_110);
      FUN_009ac040(local_318);
      this = FUN_009cfaa0(local_318);
      _sprintf(local_318,"Data\\Textures\\Thumbs\\Costumes\\%s.dds",local_214);
      FUN_00a6bad0(this,local_318);
      if (this != (undefined4 *)0x0) {
        FUN_009cfb00(this);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  local_4 = 0xffffffff;
  FUN_009c8560(local_36c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a6c110 @ 00a6c110 ////

undefined4 __thiscall FUN_00a6c110(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 4))) {
    return *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 4);
  }
  return 0;
}


//// FUNCTION FUN_00a6c130 @ 00a6c130 ////

void __thiscall FUN_00a6c130(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar3 = *(uint *)((int)this + 8) & 0xff;
    uVar2 = *(uint *)(param_1 + 0x10 + uVar3 * 0x24);
    iVar1 = param_1 + uVar3 * 0x24;
    *(undefined1 *)(iVar1 + 10) = 0xff;
    *(uint *)(iVar1 + 0x10) = uVar2 & 0xfaffffff;
  }
  return;
}


//// FUNCTION FUN_00a6c160 @ 00a6c160 ////

undefined4 __thiscall FUN_00a6c160(void *this,char *param_1,char *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar6;
  int iVar7;
  ushort uVar8;
  undefined2 uVar5;
  
  iVar2 = *(int *)((int)this + 0x30);
  *param_1 = '\0';
  *param_2 = '\0';
  iVar3 = *(int *)((int)this + 0x2c);
  iVar7 = 0;
  if (0 < iVar3) {
    pfVar6 = (float *)(iVar2 + 0x1c);
    do {
      fVar1 = pfVar6[-1];
      uVar5 = (undefined2)((uint)iVar3 >> 0x10);
      uVar4 = CONCAT22(uVar5,(ushort)(fVar1 < -0.00390625) << 8 | (ushort)NAN(fVar1) << 10 |
                             (ushort)(fVar1 == -0.00390625) << 0xe);
      if (fVar1 < -0.00390625) {
LAB_00a6c1a0:
        *param_1 = '\x01';
        if (*param_2 != '\0') goto LAB_00a6c1eb;
      }
      else {
        fVar1 = pfVar6[-1];
        uVar4 = CONCAT22(uVar5,(ushort)(fVar1 < 1.0039062) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 1.0039062) << 0xe);
        if (fVar1 < 1.0039062 == 0 && (fVar1 == 1.0039062) == 0) goto LAB_00a6c1a0;
      }
      fVar1 = *pfVar6;
      uVar8 = (ushort)(fVar1 < -0.00390625) << 8 | (ushort)NAN(fVar1) << 10 |
              (ushort)(fVar1 == -0.00390625) << 0xe;
      if (fVar1 < -0.00390625) {
LAB_00a6c1c6:
        uVar4 = CONCAT22((short)((uint)uVar4 >> 0x10),uVar8);
        *param_2 = '\x01';
        if (*param_1 != '\0') {
LAB_00a6c1eb:
          return CONCAT31((int3)((uint)uVar4 >> 8),1);
        }
      }
      else {
        fVar1 = *pfVar6;
        uVar8 = (ushort)(fVar1 < 1.0039062) << 8 | (ushort)NAN(fVar1) << 10 |
                (ushort)(fVar1 == 1.0039062) << 0xe;
        if (fVar1 < 1.0039062 == 0 && (fVar1 == 1.0039062) == 0) goto LAB_00a6c1c6;
      }
      iVar3 = *(int *)((int)this + 0x2c);
      iVar7 = iVar7 + 1;
      pfVar6 = pfVar6 + 8;
    } while (iVar7 < iVar3);
  }
  if ((*param_1 == '\0') && (*param_2 == '\0')) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00a6c200 @ 00a6c200 ////

float10 __thiscall FUN_00a6c200(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  float10 fVar3;
  
  fVar3 = (float10)-1000.0;
  iVar1 = param_2 + (*(uint *)(param_1 + 8) & 0xff) * 0x24;
  bVar2 = *(byte *)(iVar1 + 0xc);
  if (3 < bVar2) {
    if (bVar2 < 8) {
      fVar3 = (float10)1000.0;
      if ((*(uint *)(iVar1 + 0x10) & 0x20000000) != 0) {
        fVar3 = (float10)990.0;
      }
    }
    else if (bVar2 == 0x1b) {
      fVar3 = (float10)-10000.0;
    }
  }
  if ((*(byte *)(iVar1 + 0x14) & 2) != 0) {
    fVar3 = (float10)2000.0;
  }
  return fVar3;
}


//// FUNCTION LH_GetPrimitiveDrawInfo_Impl @ 00a6c2a0 ////

void __thiscall LH_GetPrimitiveDrawInfo_Impl(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  param_1[2] = *(uint *)((int)this + 8) & 0xff;
  param_1[6] = *(undefined4 *)((int)this + 0x28);
  param_1[1] = *(undefined4 *)((int)this + 0x1c);
  *param_1 = *(undefined4 *)((int)this + 0x2c);
  param_1[5] = *(undefined4 *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 0x24);
  if ((iVar2 != 0) && (DAT_00e682c0 != '\0')) {
    if (DAT_01050c48 == 0) {
      if (DAT_0105eaf8 == 0) goto LAB_00a6c332;
      uVar3 = *(uint *)(DAT_0105eaf8 + 0x4c);
    }
    else {
      uVar3 = *(uint *)(DAT_01050c48 + 0x9c) >> 10 & 7;
    }
    if (uVar3 != 0) {
      piVar1 = (int *)(iVar2 + 4 + (uVar3 - 1) * 8);
      *param_1 = *(undefined4 *)(iVar2 + -8 + uVar3 * 8);
      param_1[5] = *piVar1;
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        param_1[1] = 0;
      }
      else {
        param_1[1] = *(undefined4 *)(iVar2 + 0x10);
      }
      if (uVar3 - 1 != 0) {
        return;
      }
    }
  }
LAB_00a6c332:
  if (*(int *)((int)this + 0x10) != 0) {
    param_1[5] = *(undefined4 *)((int)this + (*(uint *)(DAT_01050c48 + 0x9c) >> 0xe & 7) * 4 + 0xc);
  }
  return;
}


//// FUNCTION LH_GetPrimitiveDrawInfo @ 00a6c360 ////

char __thiscall LH_GetPrimitiveDrawInfo(void *this,int *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  
  LH_GetPrimitiveDrawInfo_Impl(this,param_1);
  if (((param_1[5] == 0) || (param_1[1] == 0)) || (*param_1 == 0)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_00a50a10(param_1[5]);
    if ((cVar1 != '\0') && (param_1[3] = *(int *)(param_1[5] + 0x24), param_2 == '\0')) {
      cVar2 = FUN_00a51200((void *)param_1[6],'\0',-1);
      cVar1 = '\0';
      if (cVar2 != '\0') {
        param_1[4] = *(int *)(param_1[6] + 0x34);
        return cVar2;
      }
    }
  }
  return cVar1;
}


//// FUNCTION FUN_00a6c3c0 @ 00a6c3c0 ////

void __fastcall FUN_00a6c3c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
    FUN_00a3a0e0(*(void **)(iVar1 + 0x3c),iVar1 + 0x2c);
  }
  return;
}


//// FUNCTION FUN_00a6c3e0 @ 00a6c3e0 ////

void __thiscall FUN_00a6c3e0(void *this,float *param_1,float *param_2)

{
  *param_1 = *param_2 * *(float *)this +
             *(float *)((int)this + 0x18) * param_2[2] + *(float *)((int)this + 0xc) * param_2[1];
  param_1[1] = *(float *)((int)this + 0x1c) * param_2[2] +
               *(float *)((int)this + 4) * *param_2 + *(float *)((int)this + 0x10) * param_2[1];
  param_1[2] = *(float *)((int)this + 0x20) * param_2[2] +
               *(float *)((int)this + 8) * *param_2 + *(float *)((int)this + 0x14) * param_2[1];
  return;
}


//// FUNCTION FUN_00a6c450 @ 00a6c450 ////

float10 __thiscall FUN_00a6c450(int param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  if (iVar5 != 0) {
    pfVar2 = *(float **)(param_1 + 0x30);
    iVar3 = 1;
    fVar9 = ((float10)*pfVar2 - (float10)*param_2) * ((float10)*pfVar2 - (float10)*param_2) +
            ((float10)pfVar2[1] - (float10)param_2[1]) * ((float10)pfVar2[1] - (float10)param_2[1])
            + ((float10)pfVar2[2] - (float10)param_2[2]) *
              ((float10)pfVar2[2] - (float10)param_2[2]);
    if (3 < iVar5 + -1) {
      iVar4 = (iVar5 - 5U >> 2) + 1;
      pfVar1 = pfVar2 + 0x12;
      iVar3 = iVar4 * 4 + 1;
      do {
        fVar6 = (float10)pfVar1[-10] - (float10)*param_2;
        fVar7 = (float10)pfVar1[-9] - (float10)param_2[1];
        fVar8 = (float10)pfVar1[-8] - (float10)param_2[2];
        if (fVar9 <= fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8) {
          fVar9 = (float10)(float)fVar6 * (float10)(float)fVar6 +
                  (float10)(float)fVar7 * (float10)(float)fVar7 +
                  (float10)(float)fVar8 * (float10)(float)fVar8;
        }
        fVar6 = (float10)pfVar1[-2] - (float10)*param_2;
        fVar7 = (float10)pfVar1[-1] - (float10)param_2[1];
        fVar8 = (float10)*pfVar1 - (float10)param_2[2];
        if (fVar9 <= fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8) {
          fVar9 = (float10)(float)fVar6 * (float10)(float)fVar6 +
                  (float10)(float)fVar7 * (float10)(float)fVar7 +
                  (float10)(float)fVar8 * (float10)(float)fVar8;
        }
        fVar6 = (float10)pfVar1[6] - (float10)*param_2;
        fVar7 = (float10)pfVar1[7] - (float10)param_2[1];
        fVar8 = (float10)pfVar1[8] - (float10)param_2[2];
        if (fVar9 <= fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8) {
          fVar9 = (float10)(float)fVar6 * (float10)(float)fVar6 +
                  (float10)(float)fVar7 * (float10)(float)fVar7 +
                  (float10)(float)fVar8 * (float10)(float)fVar8;
        }
        fVar6 = (float10)pfVar1[0xe] - (float10)*param_2;
        fVar7 = (float10)pfVar1[0xf] - (float10)param_2[1];
        fVar8 = (float10)pfVar1[0x10] - (float10)param_2[2];
        if (fVar9 <= fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8) {
          fVar9 = (float10)(float)fVar6 * (float10)(float)fVar6 +
                  (float10)(float)fVar7 * (float10)(float)fVar7 +
                  (float10)(float)fVar8 * (float10)(float)fVar8;
        }
        pfVar1 = pfVar1 + 0x20;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (iVar3 < iVar5) {
      pfVar2 = pfVar2 + iVar3 * 8 + 2;
      iVar5 = iVar5 - iVar3;
      do {
        fVar6 = (float10)pfVar2[-2] - (float10)*param_2;
        fVar7 = (float10)pfVar2[-1] - (float10)param_2[1];
        fVar8 = (float10)*pfVar2 - (float10)param_2[2];
        if (fVar9 <= fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8) {
          fVar9 = (float10)(float)fVar6 * (float10)(float)fVar6 +
                  (float10)(float)fVar7 * (float10)(float)fVar7 +
                  (float10)(float)fVar8 * (float10)(float)fVar8;
        }
        pfVar2 = pfVar2 + 8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    return fVar9;
  }
  return (float10)3.4028235e+38;
}


//// FUNCTION FUN_00a6c6e0 @ 00a6c6e0 ////

void __cdecl FUN_00a6c6e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  int local_30 [2];
  void *pvStack_28;
  undefined1 local_24;
  undefined1 local_21;
  uint local_20;
  int local_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbdd8;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(DAT_0105eb48 + 0x34) + param_1[2] * 0x24;
  ExceptionList = &pvStack_c;
  FUN_009910f0(local_30);
  local_20 = local_20 & 0xbcffffff | 0x18000000;
  iVar2 = *(int *)(*(int *)(DAT_0105eb48 + 0x3c) + (uint)*(byte *)(iVar1 + 9) * 4);
  local_4 = 0;
  if (local_18 != iVar2) {
    uStack_40 = 0xa6c753;
    Engine_SetResourceReference(local_30,iVar2);
  }
  if (*(char *)(iVar1 + 0xb) == -1) {
    local_24 = 0x12;
    local_21 = *(undefined1 *)(iVar1 + 0xf);
    if (DAT_01059548 != 0) {
      local_24 = 0x10;
    }
  }
  else {
    local_24 = 0x11;
    iVar2 = *(int *)(*(int *)(DAT_0105eb48 + 0x3c) + (uint)*(byte *)(iVar1 + 0xb) * 4);
    if (local_14 != iVar2) {
      uStack_40 = 0xa6c77e;
      FUN_00994bc0(local_30,iVar2);
    }
  }
  LH_ApplyMeshMaterial(local_30);
  if ((local_18 != 0) && (*(int *)(local_18 + 0x28) != 0)) {
    uStack_40 = 0;
    piStack_44 = g_pDirect3DDevice;
    uStack_48 = 0xa6c7c4;
    (**(code **)(*g_pDirect3DDevice + 0x104))();
  }
  if ((*(byte *)(iVar1 + 0x14) & 2) != 0) {
    if (DAT_01059048 != 3) {
      uStack_40 = 0x16;
      DAT_01059048 = 3;
      piStack_44 = g_pDirect3DDevice;
      uStack_48 = 0xa6c7ef;
      (**(code **)(*g_pDirect3DDevice + 0xe4))();
    }
    uStack_40 = param_1[3];
    piStack_44 = (int *)*param_1;
    uStack_4c = param_1[4];
    uStack_48 = 0;
    (**(code **)(*g_pDirect3DDevice + 0x148))(g_pDirect3DDevice,4);
    if (DAT_01059048 != 2) {
      uStack_40 = 0x16;
      DAT_01059048 = 2;
      piStack_44 = g_pDirect3DDevice;
      uStack_48 = 0xa6c835;
      (**(code **)(*g_pDirect3DDevice + 0xe4))();
    }
  }
  uStack_40 = param_1[3];
  piStack_44 = (int *)*param_1;
  uStack_4c = param_1[4];
  uStack_48 = 0;
  (**(code **)(*g_pDirect3DDevice + 0x148))(g_pDirect3DDevice,4);
  local_20 = 0xffffffff;
  FUN_00990ec0((int)&uStack_4c);
  ExceptionList = pvStack_28;
  return;
}


//// FUNCTION FUN_00a6c880 @ 00a6c880 ////

float10 __thiscall FUN_00a6c880(int param_1,void *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float local_4;
  
  local_4 = 0.0;
  if (*(int *)((int)param_2 + 0x2c) != 0) {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      iVar4 = *(int *)(param_1 + 0x30);
      iVar7 = 0;
      do {
        iVar4 = FUN_009d5b40(param_2,(float *)(iVar7 + iVar4));
        pfVar5 = (float *)(iVar4 * 0x20 + *(int *)((int)param_2 + 0x30));
        iVar4 = *(int *)(param_1 + 0x30);
        iVar6 = iVar6 + 1;
        fVar1 = *(float *)(iVar7 + iVar4) - *pfVar5;
        fVar3 = *(float *)(iVar7 + 4 + iVar4) - pfVar5[1];
        fVar2 = *(float *)(iVar7 + 8 + iVar4) - pfVar5[2];
        local_4 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) + local_4;
        iVar7 = iVar7 + 0x20;
      } while (iVar6 < *(int *)(param_1 + 0x2c));
    }
    return (float10)local_4;
  }
  return (float10)1e+07;
}


//// FUNCTION LH_DrawPrimitive_SoftwareSkin_Single @ 00a6c920 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall LH_DrawPrimitive_SoftwareSkin_Single(void *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_78;
  float local_74;
  float local_64 [3];
  float local_58 [3];
  int *local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c [2];
  void *local_34;
  int local_30 [3];
  undefined1 local_24;
  uint local_20;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* CONFIRMED: CPU software-skinning draw variant for a single-bone-weighted
                       primitive (one bone influence per vertex), used only as a debug/fallback path
                       when DAT_0105eaf4 is set (see the dispatcher FUN_00a71a80) - the
                       normal/default path for the same case is FUN_00a71490. Per-vertex position is
                       transformed by a single bone matrix looked up via a per-vertex bone-index
                       byte, using FUN_00411c70 (bone matrix lookup)/FUN_00412da0 (vector
                       transform). DOES read and apply the primitive's real material (same
                       `DAT_0105eb48+0x34 + materialIndex*0x24` pattern confirmed in FUN_00a71490),
                       then draws via DrawIndexedPrimitive (vtable+0x148). */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbdf8;
  local_c = ExceptionList;
  if (((((*(uint *)((int)param_1 + 8) & 0x4000) == 0) && (*(int *)((int)param_1 + 0x2c) != 0)) &&
      (*(int *)((int)param_1 + 0x1c) != 0)) &&
     (((DAT_0105eb48 != 0 && (*(int *)(*(int *)((int)param_1 + 0x28) + 0x1c) != 0)) &&
      ((DAT_01050c48 != 0 &&
       (ExceptionList = &local_c, cVar2 = LH_GetPrimitiveDrawInfo(param_1,(int *)&local_4c,'\x01'),
       cVar2 != '\0')))))) {
    *(uint *)((int)local_34 + 0x28) = *(uint *)((int)local_34 + 0x28) | 1;
    uVar1 = *(uint *)(DAT_01050c48 + 0xb8);
    FUN_00a4cb40((int)local_34);
    puVar3 = (undefined4 *)FUN_00a3ac00(local_4c,(int)local_3c);
    if (puVar3 != (undefined4 *)0x0) {
      local_78 = *(void **)((int)local_34 + 0x10);
      local_74 = (float)(uVar1 >> 0x18) * _DAT_0105eafc * 0.00039215686;
      if (*(float *)(DAT_01050c48 + 200) != 0.0) {
        local_74 = *(float *)(DAT_01050c48 + 200);
      }
      iVar6 = 0;
      if (0 < (int)local_4c) {
        puVar7 = puVar3 + 4;
        puVar8 = (undefined4 *)((int)local_78 + 0x18);
        do {
          pfVar4 = (float *)FUN_00411c70((void *)(*(int *)(DAT_0105eb48 + 0x7c) +
                                                 (uint)*(ushort *)
                                                        (*(int *)(*(int *)((int)param_1 + 0x28) +
                                                                 0x1c) + iVar6 * 2) * 0xc),local_64,
                                         local_74);
          puVar5 = (undefined4 *)FUN_00412da0(local_78,local_58,pfVar4);
          *puVar3 = *puVar5;
          puVar3[1] = puVar5[1];
          puVar3[2] = puVar5[2];
          puVar7[-1] = uVar1;
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
          iVar6 = iVar6 + 1;
          local_78 = (void *)((int)local_78 + 0x20);
          puVar3 = puVar3 + 6;
          puVar7 = puVar7 + 6;
          puVar8 = puVar8 + 8;
        } while (iVar6 < (int)local_4c);
      }
      FUN_00a3a4e0();
      cVar2 = FUN_00a51200(local_34,'\x01',-1);
      if (cVar2 != '\0') {
        FUN_009910f0(local_30);
        local_24 = 1;
        iVar6 = *(int *)(DAT_0105eb48 + 0x34) + (*(uint *)((int)param_1 + 8) & 0xff) * 0x24;
        local_4 = 0;
        if (*(char *)(iVar6 + 0xc) == '\x05') {
          local_24 = 0x1c;
          if (local_18 != *(int *)(iVar6 + 0x18)) {
            Engine_SetResourceReference(local_30,*(int *)(iVar6 + 0x18));
          }
        }
        local_20 = local_20 & 0xbeffffff ^
                   (*(uint *)(iVar6 + 0x10) ^ local_20 & 0xbeffffff) & 0x2000000;
        LH_ApplyMeshMaterial(local_30);
        FUN_00888020(0xc3,DAT_00e69ab0);
        (**(code **)(*g_pDirect3DDevice + 0x148))
                  (g_pDirect3DDevice,4,local_3c[0],0,local_4c,local_40,local_48);
        FUN_00888020(0xc3,0);
        local_4 = 0xffffffff;
        FUN_00990ec0((int)local_30);
      }
      *(uint *)((int)local_34 + 0x28) = *(uint *)((int)local_34 + 0x28) & 0xfffffffe;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_DrawPrimitive_SoftwareSkin_Multi @ 00a6cbd0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall LH_DrawPrimitive_SoftwareSkin_Multi(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  void *this;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  undefined4 *this_00;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float *local_f0;
  float *local_ec;
  float local_e8;
  undefined4 *local_e4;
  float *local_e0;
  undefined4 *local_dc;
  float local_d8;
  int *local_d0;
  undefined4 local_cc;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  void *local_b8;
  int local_b4 [3];
  undefined1 local_a8;
  uint local_a4;
  float local_90 [3];
  float local_84 [3];
  float local_78 [3];
  float local_6c [3];
  float local_60 [3];
  float local_54 [3];
  float local_48 [3];
  float local_3c [3];
  float local_30 [3];
  float local_24 [3];
  float local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* CONFIRMED: CPU software-skinning draw variant for a MULTI-bone-weighted
                       primitive (1-4 bone influences per vertex, full weighted blend - branches on
                       a 2-bit weight-count field at param_1[2] bits 8-9), used only as a
                       debug/fallback path when DAT_0105eaf4 is set (see dispatcher FUN_00a71a80) -
                       the normal/default path for the same case is FUN_00a6fad0 (not yet
                       individually inspected). Unlike its single-bone sibling FUN_00a6c920, this
                       one applies a THROWAWAY untextured material (TypeCode=1, built fresh via
                       FUN_009910f0) rather than the primitive's real material - plausibly because
                       this debug path is only used to visualize/verify the skin blend math itself,
                       or because the equivalent default path (FUN_00a6fad0) is where the real
                       material gets applied for multi-bone primitives instead. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbe1b;
  local_c = ExceptionList;
  if ((((param_1[0xb] != 0) && (param_1[7] != 0)) && (DAT_0105eb48 != 0)) &&
     (((*(int *)(param_1[10] + 0x1c) != 0 && (DAT_01050c48 != 0)) &&
      (ExceptionList = &local_c, local_e4 = param_1,
      cVar4 = LH_GetPrimitiveDrawInfo(param_1,(int *)&local_d0,'\x01'), cVar4 != '\0')))) {
    local_d8 = *(float *)(DAT_01050c48 + 0xb8);
    pfVar5 = (float *)FUN_00a3ac00(local_d0,(int)local_c0);
    if (pfVar5 != (float *)0x0) {
      local_e0 = (float *)((uint)local_d8 >> 0x18);
      pfVar11 = (float *)*param_1;
      pfVar7 = (float *)param_1[0xc];
      local_e8 = (float)(int)local_e0 * _DAT_0105eafc * 0.0002745098;
      if (*(float *)(DAT_01050c48 + 200) != 0.0) {
        local_e8 = *(float *)(DAT_01050c48 + 200);
      }
      uVar12 = (uint)param_1[2] >> 8 & 3;
      local_f0 = pfVar7;
      local_dc = FUN_009856c0();
      if (uVar12 == 1) {
        local_f4 = 0.0;
        if (0 < (int)local_d0) {
          local_e0 = pfVar7 + 6;
          do {
            local_f8 = pfVar11[1];
            pfVar6 = (float *)(local_dc + (uint)*(byte *)(pfVar11 + 4) * 0xc);
            if (local_f8 == 0.0) {
              pfVar9 = (float *)FUN_00411c70((void *)(*(int *)(DAT_0105eb48 + 0x7c) +
                                                     (uint)*(ushort *)
                                                            (*(int *)(local_e4[10] + 0x1c) +
                                                            (int)local_f4 * 2) * 0xc),local_60,
                                             local_e8);
              pfVar9 = (float *)FUN_00412da0(pfVar7,local_48,pfVar9);
              FUN_004d52e0(pfVar6,pfVar5,pfVar9);
            }
            else {
              local_ec = (float *)*pfVar11;
              pfVar10 = (float *)(local_dc + (uint)*(byte *)((int)pfVar11 + 0x11) * 0xc);
              pfVar7 = &local_104;
              pfVar9 = local_f0;
              this = (void *)FUN_00411c70((void *)(*(int *)(DAT_0105eb48 + 0x7c) +
                                                  (uint)*(ushort *)
                                                         (*(int *)(local_e4[10] + 0x1c) +
                                                         (int)local_f4 * 2) * 0xc),local_78,local_e8
                                         );
              FUN_00412da0(this,pfVar7,pfVar9);
              *pfVar5 = (local_104 * *pfVar10 + local_100 * pfVar10[3] + local_fc * pfVar10[6] +
                        pfVar10[9]) * local_f8 +
                        (local_104 * *pfVar6 + local_100 * pfVar6[3] + local_fc * pfVar6[6] +
                        pfVar6[9]) * (float)local_ec;
              pfVar5[1] = (local_104 * pfVar6[1] + local_100 * pfVar6[4] + local_fc * pfVar6[7] +
                          pfVar6[10]) * (float)local_ec +
                          (local_104 * pfVar10[1] + local_100 * pfVar10[4] + local_fc * pfVar10[7] +
                          pfVar10[10]) * local_f8;
              pfVar5[2] = (local_104 * pfVar6[2] + local_100 * pfVar6[5] + local_fc * pfVar6[8] +
                          pfVar6[0xb]) * (float)local_ec +
                          (local_104 * pfVar10[2] + local_100 * pfVar10[5] + local_fc * pfVar10[8] +
                          pfVar10[0xb]) * local_f8;
              pfVar7 = local_f0;
            }
            pfVar5[3] = local_d8;
            pfVar5[4] = *local_e0;
            pfVar6 = local_e0 + 1;
            local_e0 = local_e0 + 8;
            pfVar5[5] = *pfVar6;
            local_f4 = (float)((int)local_f4 + 1);
            pfVar7 = pfVar7 + 8;
            pfVar5 = pfVar5 + 6;
            pfVar11 = pfVar11 + 5;
            local_f0 = pfVar7;
          } while ((int)local_f4 < (int)local_d0);
        }
      }
      else if (uVar12 == 2) {
        local_ec = (float *)0x0;
        if (0 < (int)local_d0) {
          local_e0 = pfVar7 + 6;
          do {
            local_f8 = pfVar11[1];
            pfVar6 = (float *)(local_dc + (uint)*(byte *)(pfVar11 + 4) * 0xc);
            if (local_f8 == 0.0) {
              pfVar9 = (float *)FUN_00411c70((void *)(*(int *)(DAT_0105eb48 + 0x7c) +
                                                     (uint)*(ushort *)
                                                            (*(int *)(local_e4[10] + 0x1c) +
                                                            (int)local_ec * 2) * 0xc),local_54,
                                             local_e8);
              pfVar9 = (float *)FUN_00412da0(pfVar7,local_84,pfVar9);
              FUN_004d52e0(pfVar6,pfVar5,pfVar9);
            }
            else {
              pfVar9 = (float *)(local_dc + (uint)*(byte *)((int)pfVar11 + 0x11) * 0xc);
              local_f4 = *pfVar11;
              pfVar7 = (float *)FUN_00411c70((void *)(*(int *)(DAT_0105eb48 + 0x7c) +
                                                     (uint)*(ushort *)
                                                            (*(int *)(local_e4[10] + 0x1c) +
                                                            (int)local_ec * 2) * 0xc),local_3c,
                                             local_e8);
              FUN_00412da0(local_f0,&local_104,pfVar7);
              fVar1 = pfVar11[2];
              pfVar7 = local_f0;
              if (fVar1 == 0.0) {
                *pfVar5 = (local_104 * *pfVar6 + local_100 * pfVar6[3] + local_fc * pfVar6[6] +
                          pfVar6[9]) * local_f4 +
                          (local_104 * *pfVar9 + local_100 * pfVar9[3] + local_fc * pfVar9[6] +
                          pfVar9[9]) * local_f8;
                pfVar5[1] = (local_104 * pfVar9[1] + local_100 * pfVar9[4] + local_fc * pfVar9[7] +
                            pfVar9[10]) * local_f8 +
                            (local_104 * pfVar6[1] + local_100 * pfVar6[4] + local_fc * pfVar6[7] +
                            pfVar6[10]) * local_f4;
                pfVar5[2] = (local_104 * pfVar9[2] + local_100 * pfVar9[5] + local_fc * pfVar9[8] +
                            pfVar9[0xb]) * local_f8 +
                            (local_104 * pfVar6[2] + local_100 * pfVar6[5] + local_fc * pfVar6[8] +
                            pfVar6[0xb]) * local_f4;
              }
              else {
                pfVar10 = (float *)(local_dc + (uint)*(byte *)((int)pfVar11 + 0x12) * 0xc);
                *pfVar5 = (local_104 * *pfVar6 + local_100 * pfVar6[3] + local_fc * pfVar6[6] +
                          pfVar6[9]) * local_f4 +
                          (local_104 * *pfVar10 + local_100 * pfVar10[3] + local_fc * pfVar10[6] +
                          pfVar10[9]) * fVar1 +
                          (local_104 * *pfVar9 + local_100 * pfVar9[3] + local_fc * pfVar9[6] +
                          pfVar9[9]) * local_f8;
                pfVar5[1] = (local_104 * pfVar9[1] + local_100 * pfVar9[4] + local_fc * pfVar9[7] +
                            pfVar9[10]) * local_f8 +
                            (local_104 * pfVar6[1] + local_100 * pfVar6[4] + local_fc * pfVar6[7] +
                            pfVar6[10]) * local_f4 +
                            (local_104 * pfVar10[1] + local_100 * pfVar10[4] + local_fc * pfVar10[7]
                            + pfVar10[10]) * fVar1;
                pfVar5[2] = (local_104 * pfVar9[2] + local_100 * pfVar9[5] + local_fc * pfVar9[8] +
                            pfVar9[0xb]) * local_f8 +
                            (local_104 * pfVar6[2] + local_100 * pfVar6[5] + local_fc * pfVar6[8] +
                            pfVar6[0xb]) * local_f4 +
                            (local_104 * pfVar10[2] + local_100 * pfVar10[5] + local_fc * pfVar10[8]
                            + pfVar10[0xb]) * fVar1;
              }
            }
            pfVar5[3] = local_d8;
            pfVar5[4] = *local_e0;
            pfVar6 = local_e0 + 1;
            local_e0 = local_e0 + 8;
            pfVar5[5] = *pfVar6;
            local_ec = (float *)((int)local_ec + 1);
            pfVar7 = pfVar7 + 8;
            pfVar5 = pfVar5 + 6;
            pfVar11 = pfVar11 + 5;
            local_f0 = pfVar7;
          } while ((int)local_ec < (int)local_d0);
        }
      }
      else if (uVar12 == 3) {
        local_f4 = 0.0;
        if (0 < (int)local_d0) {
          local_ec = pfVar7 + 6;
          do {
            local_f8 = pfVar11[1];
            pfVar6 = (float *)(local_dc + (uint)*(byte *)(pfVar11 + 4) * 0xc);
            if (local_f8 == 0.0) {
              pfVar9 = (float *)FUN_00411c70((void *)(*(int *)(DAT_0105eb48 + 0x7c) +
                                                     (uint)*(ushort *)
                                                            (*(int *)(local_e4[10] + 0x1c) +
                                                            (int)local_f4 * 2) * 0xc),local_24,
                                             local_e8);
              pfVar9 = (float *)FUN_00412da0(pfVar7,local_6c,pfVar9);
              FUN_004d52e0(pfVar6,pfVar5,pfVar9);
            }
            else {
              pfVar9 = (float *)(local_dc + (uint)*(byte *)((int)pfVar11 + 0x11) * 0xc);
              pfVar7 = (float *)FUN_00411c70((void *)(*(int *)(DAT_0105eb48 + 0x7c) +
                                                     (uint)*(ushort *)
                                                            (*(int *)(local_e4[10] + 0x1c) +
                                                            (int)local_f4 * 2) * 0xc),local_18,
                                             local_e8);
              FUN_00412da0(local_f0,&local_104,pfVar7);
              fVar1 = *pfVar11;
              fVar2 = pfVar11[2];
              pfVar7 = local_f0;
              if (fVar2 == 0.0) {
                *pfVar5 = (local_104 * *pfVar6 + local_100 * pfVar6[3] + local_fc * pfVar6[6] +
                          pfVar6[9]) * fVar1 +
                          (local_104 * *pfVar9 + local_100 * pfVar9[3] + local_fc * pfVar9[6] +
                          pfVar9[9]) * local_f8;
                pfVar5[1] = (local_104 * pfVar6[1] + local_100 * pfVar6[4] + local_fc * pfVar6[7] +
                            pfVar6[10]) * fVar1 +
                            (local_104 * pfVar9[1] + local_100 * pfVar9[4] + local_fc * pfVar9[7] +
                            pfVar9[10]) * local_f8;
                pfVar5[2] = (local_104 * pfVar6[2] + local_100 * pfVar6[5] + local_fc * pfVar6[8] +
                            pfVar6[0xb]) * fVar1 +
                            (local_104 * pfVar9[2] + local_100 * pfVar9[5] + local_fc * pfVar9[8] +
                            pfVar9[0xb]) * local_f8;
              }
              else {
                fVar3 = pfVar11[3];
                pfVar10 = (float *)(local_dc + (uint)*(byte *)((int)pfVar11 + 0x12) * 0xc);
                if (fVar3 == 0.0) {
                  *pfVar5 = (local_104 * *pfVar10 + local_100 * pfVar10[3] + local_fc * pfVar10[6] +
                            pfVar10[9]) * fVar2 +
                            (local_104 * *pfVar6 + local_100 * pfVar6[3] + local_fc * pfVar6[6] +
                            pfVar6[9]) * fVar1 +
                            (local_104 * *pfVar9 + local_100 * pfVar9[3] + local_fc * pfVar9[6] +
                            pfVar9[9]) * local_f8;
                  pfVar5[1] = (local_104 * pfVar10[1] +
                               local_100 * pfVar10[4] + local_fc * pfVar10[7] + pfVar10[10]) * fVar2
                              + (local_104 * pfVar6[1] +
                                 local_100 * pfVar6[4] + local_fc * pfVar6[7] + pfVar6[10]) * fVar1
                                + (local_104 * pfVar9[1] +
                                   local_100 * pfVar9[4] + local_fc * pfVar9[7] + pfVar9[10]) *
                                  local_f8;
                  pfVar5[2] = (local_104 * pfVar10[2] +
                               local_100 * pfVar10[5] + local_fc * pfVar10[8] + pfVar10[0xb]) *
                              fVar2 + (local_104 * pfVar6[2] +
                                       local_100 * pfVar6[5] + local_fc * pfVar6[8] + pfVar6[0xb]) *
                                      fVar1 + (local_104 * pfVar9[2] +
                                               local_100 * pfVar9[5] + local_fc * pfVar9[8] +
                                              pfVar9[0xb]) * local_f8;
                }
                else {
                  pfVar8 = (float *)(local_dc + (uint)*(byte *)((int)pfVar11 + 0x13) * 0xc);
                  *pfVar5 = (local_104 * *pfVar10 + local_100 * pfVar10[3] + local_fc * pfVar10[6] +
                            pfVar10[9]) * fVar2 +
                            (local_104 * *pfVar8 + local_100 * pfVar8[3] + local_fc * pfVar8[6] +
                            pfVar8[9]) * fVar3 +
                            (local_104 * *pfVar6 + local_100 * pfVar6[3] + local_fc * pfVar6[6] +
                            pfVar6[9]) * fVar1 +
                            (local_104 * *pfVar9 + local_100 * pfVar9[3] + local_fc * pfVar9[6] +
                            pfVar9[9]) * local_f8;
                  pfVar5[1] = (local_104 * pfVar10[1] +
                               local_100 * pfVar10[4] + local_fc * pfVar10[7] + pfVar10[10]) * fVar2
                              + (local_104 * pfVar8[1] +
                                 local_100 * pfVar8[4] + local_fc * pfVar8[7] + pfVar8[10]) * fVar3
                                + (local_104 * pfVar6[1] +
                                   local_100 * pfVar6[4] + local_fc * pfVar6[7] + pfVar6[10]) *
                                  fVar1 + (local_104 * pfVar9[1] +
                                           local_100 * pfVar9[4] + local_fc * pfVar9[7] + pfVar9[10]
                                          ) * local_f8;
                  pfVar5[2] = (local_104 * pfVar10[2] +
                               local_100 * pfVar10[5] + local_fc * pfVar10[8] + pfVar10[0xb]) *
                              fVar2 + (local_104 * pfVar8[2] +
                                       local_100 * pfVar8[5] + local_fc * pfVar8[8] + pfVar8[0xb]) *
                                      fVar3 + (local_104 * pfVar6[2] +
                                               local_100 * pfVar6[5] + local_fc * pfVar6[8] +
                                              pfVar6[0xb]) * fVar1 +
                                              (local_104 * pfVar9[2] +
                                               local_100 * pfVar9[5] + local_fc * pfVar9[8] +
                                              pfVar9[0xb]) * local_f8;
                }
              }
            }
            pfVar5[3] = local_d8;
            pfVar5[4] = *local_ec;
            pfVar6 = local_ec + 1;
            local_ec = local_ec + 8;
            pfVar5[5] = *pfVar6;
            local_f4 = (float)((int)local_f4 + 1);
            pfVar7 = pfVar7 + 8;
            pfVar5 = pfVar5 + 6;
            pfVar11 = pfVar11 + 5;
            local_f0 = pfVar7;
          } while ((int)local_f4 < (int)local_d0);
        }
      }
      else {
        local_f4 = 0.0;
        if (0 < (int)local_d0) {
          local_ec = pfVar5 + 4;
          local_f0 = pfVar7 + 6;
          pfVar11 = pfVar11 + 4;
          do {
            this_00 = local_dc + (uint)*(byte *)pfVar11 * 0xc;
            pfVar6 = (float *)FUN_00411c70((void *)(*(int *)(DAT_0105eb48 + 0x7c) +
                                                   (uint)*(ushort *)
                                                          (*(int *)(local_e4[10] + 0x1c) +
                                                          (int)local_f4 * 2) * 0xc),local_30,
                                           local_e8);
            pfVar6 = (float *)FUN_00412da0(pfVar7,local_90,pfVar6);
            FUN_004d52e0(this_00,pfVar5,pfVar6);
            local_ec[-1] = local_d8;
            *local_ec = *local_f0;
            local_ec[1] = local_f0[1];
            local_ec = local_ec + 6;
            local_f4 = (float)((int)local_f4 + 1);
            local_f0 = local_f0 + 8;
            pfVar5 = pfVar5 + 6;
            pfVar7 = pfVar7 + 8;
            pfVar11 = pfVar11 + 5;
          } while ((int)local_f4 < (int)local_d0);
        }
      }
      FUN_00a3a4e0();
      *(uint *)((int)local_b8 + 0x28) = *(uint *)((int)local_b8 + 0x28) | 1;
      cVar4 = FUN_00a51200(local_b8,'\x01',-1);
      if (cVar4 != '\0') {
        FUN_009910f0(local_b4);
        local_a4 = local_a4 & 0xbeffffff;
        local_4 = 0;
        local_a8 = 1;
        LH_ApplyMeshMaterial(local_b4);
        (**(code **)(*g_pDirect3DDevice + 0x148))
                  (g_pDirect3DDevice,4,local_c0[0],0,local_d0,local_c4,local_cc);
        local_4 = 0xffffffff;
        FUN_00990ec0((int)local_b4);
      }
      *(uint *)((int)local_b8 + 0x28) = *(uint *)((int)local_b8 + 0x28) & 0xfffffffe;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a6d8d0 @ 00a6d8d0 ////

void __fastcall FUN_00a6d8d0(undefined4 *param_1)

{
  int *this;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  float *pfVar11;
  uint uVar12;
  undefined4 *puVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  char local_35;
  float *local_34;
  int local_30;
  int local_24;
  int *local_1c;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  void *local_4;
  
  LH_GetPrimitiveDrawInfo_Impl(param_1,&local_1c);
  if ((((local_8 != 0) && (local_18 != 0)) && (local_1c != (int *)0x0)) &&
     (local_35 = FUN_00a50a10(local_8), local_35 != '\0')) {
    local_10 = *(undefined4 *)(local_8 + 0x24);
    this = (int *)(*(int *)(DAT_0105eb48 + 0x34) + (param_1[2] & 0xff) * 0x24);
    pfVar11 = (float *)FUN_00a3ac00(local_1c,(int)&local_c);
    if (pfVar11 != (float *)0x0) {
      local_34 = (float *)*param_1;
      uVar12 = (uint)param_1[2] >> 8 & 3;
      pfVar18 = (float *)param_1[0xc];
      if (local_34 == (float *)0x0) {
        local_35 = '\0';
      }
      else {
        puVar13 = FUN_009856c0();
        if (uVar12 == 1) {
          local_30 = 0;
          if (0 < (int)local_1c) {
            pfVar16 = pfVar11 + 8;
            do {
              pfVar16[-2] = pfVar18[6];
              pfVar16[-1] = pfVar18[7];
              iVar7 = *(int *)(param_1[10] + 0x14);
              *pfVar16 = *(float *)(iVar7 + local_30 * 8);
              pfVar16[1] = *(float *)(iVar7 + 4 + local_30 * 8);
              fVar8 = local_34[1];
              pfVar15 = (float *)(puVar13 + (uint)*(byte *)(local_34 + 4) * 0xc);
              if (fVar8 == 0.0) {
                FUN_004d52e0(pfVar15,pfVar11,pfVar18);
              }
              else {
                fVar1 = *local_34;
                fVar2 = *pfVar18;
                fVar3 = pfVar18[1];
                fVar4 = pfVar18[2];
                pfVar17 = (float *)(puVar13 + (uint)*(byte *)((int)local_34 + 0x11) * 0xc);
                *pfVar11 = (fVar2 * *pfVar17 + fVar3 * pfVar17[3] + fVar4 * pfVar17[6] + pfVar17[9])
                           * fVar8 + (fVar2 * *pfVar15 + fVar3 * pfVar15[3] + fVar4 * pfVar15[6] +
                                     pfVar15[9]) * fVar1;
                pfVar16[-7] = (fVar2 * pfVar15[1] + fVar3 * pfVar15[4] + fVar4 * pfVar15[7] +
                              pfVar15[10]) * fVar1 +
                              (fVar2 * pfVar17[1] + fVar3 * pfVar17[4] + fVar4 * pfVar17[7] +
                              pfVar17[10]) * fVar8;
                pfVar16[-6] = (fVar2 * pfVar15[2] + fVar3 * pfVar15[5] + fVar4 * pfVar15[8] +
                              pfVar15[0xb]) * fVar1 +
                              (fVar2 * pfVar17[2] + fVar3 * pfVar17[5] + fVar4 * pfVar17[8] +
                              pfVar17[0xb]) * fVar8;
              }
              FUN_00a6c3e0(pfVar15,pfVar16 + -5,pfVar18 + 3);
              pfVar16 = pfVar16 + 10;
              local_30 = local_30 + 1;
              pfVar11 = pfVar11 + 10;
              pfVar18 = pfVar18 + 8;
              local_34 = local_34 + 5;
            } while (local_30 < (int)local_1c);
          }
        }
        else if (uVar12 == 2) {
          local_24 = 0;
          if (0 < (int)local_1c) {
            do {
              pfVar11[6] = pfVar18[6];
              pfVar11[7] = pfVar18[7];
              iVar7 = *(int *)(param_1[10] + 0x14);
              pfVar11[8] = *(float *)(iVar7 + local_24 * 8);
              pfVar11[9] = *(float *)(iVar7 + 4 + local_24 * 8);
              fVar8 = local_34[1];
              pfVar16 = (float *)(puVar13 + (uint)*(byte *)(local_34 + 4) * 0xc);
              if (fVar8 == 0.0) {
                FUN_004d52e0(pfVar16,pfVar11,pfVar18);
              }
              else {
                fVar1 = *local_34;
                fVar2 = *pfVar18;
                fVar3 = pfVar18[1];
                fVar4 = pfVar18[2];
                pfVar15 = (float *)(puVar13 + (uint)*(byte *)((int)local_34 + 0x11) * 0xc);
                fVar9 = local_34[2];
                if (fVar9 == 0.0) {
                  *pfVar11 = (fVar2 * *pfVar15 + fVar3 * pfVar15[3] + fVar4 * pfVar15[6] +
                             pfVar15[9]) * fVar8 +
                             (fVar2 * *pfVar16 + fVar3 * pfVar16[3] + fVar4 * pfVar16[6] +
                             pfVar16[9]) * fVar1;
                  pfVar11[1] = (fVar2 * pfVar16[1] + fVar3 * pfVar16[4] + fVar4 * pfVar16[7] +
                               pfVar16[10]) * fVar1 +
                               (fVar2 * pfVar15[1] + fVar3 * pfVar15[4] + fVar4 * pfVar15[7] +
                               pfVar15[10]) * fVar8;
                  pfVar11[2] = (fVar2 * pfVar16[2] + fVar3 * pfVar16[5] + fVar4 * pfVar16[8] +
                               pfVar16[0xb]) * fVar1 +
                               (fVar2 * pfVar15[2] + fVar3 * pfVar15[5] + fVar4 * pfVar15[8] +
                               pfVar15[0xb]) * fVar8;
                }
                else {
                  pfVar17 = (float *)(puVar13 + (uint)*(byte *)((int)local_34 + 0x12) * 0xc);
                  *pfVar11 = (fVar2 * *pfVar15 + fVar3 * pfVar15[3] + fVar4 * pfVar15[6] +
                             pfVar15[9]) * fVar8 +
                             (fVar2 * *pfVar16 + fVar3 * pfVar16[3] + fVar4 * pfVar16[6] +
                             pfVar16[9]) * fVar1 +
                             (fVar2 * *pfVar17 + fVar3 * pfVar17[3] + fVar4 * pfVar17[6] +
                             pfVar17[9]) * fVar9;
                  pfVar11[1] = (fVar2 * pfVar16[1] + fVar3 * pfVar16[4] + fVar4 * pfVar16[7] +
                               pfVar16[10]) * fVar1 +
                               (fVar2 * pfVar15[1] + fVar3 * pfVar15[4] + fVar4 * pfVar15[7] +
                               pfVar15[10]) * fVar8 +
                               (fVar2 * pfVar17[1] + fVar3 * pfVar17[4] + fVar4 * pfVar17[7] +
                               pfVar17[10]) * fVar9;
                  pfVar11[2] = (fVar2 * pfVar16[2] + fVar3 * pfVar16[5] + fVar4 * pfVar16[8] +
                               pfVar16[0xb]) * fVar1 +
                               (fVar2 * pfVar15[2] + fVar3 * pfVar15[5] + fVar4 * pfVar15[8] +
                               pfVar15[0xb]) * fVar8 +
                               (fVar2 * pfVar17[2] + fVar3 * pfVar17[5] + fVar4 * pfVar17[8] +
                               pfVar17[0xb]) * fVar9;
                }
              }
              FUN_00a6c3e0(pfVar16,pfVar11 + 3,pfVar18 + 3);
              local_24 = local_24 + 1;
              pfVar11 = pfVar11 + 10;
              pfVar18 = pfVar18 + 8;
              local_34 = local_34 + 5;
            } while (local_24 < (int)local_1c);
          }
        }
        else if (uVar12 == 3) {
          local_24 = 0;
          if (0 < (int)local_1c) {
            do {
              pfVar11[6] = pfVar18[6];
              pfVar11[7] = pfVar18[7];
              iVar7 = *(int *)(param_1[10] + 0x14);
              pfVar11[8] = *(float *)(iVar7 + local_24 * 8);
              pfVar11[9] = *(float *)(iVar7 + 4 + local_24 * 8);
              fVar8 = local_34[1];
              pfVar16 = (float *)(puVar13 + (uint)*(byte *)(local_34 + 4) * 0xc);
              if (fVar8 == 0.0) {
                FUN_004d52e0(pfVar16,pfVar11,pfVar18);
              }
              else {
                fVar1 = *local_34;
                fVar2 = *pfVar18;
                fVar3 = pfVar18[1];
                fVar4 = pfVar18[2];
                pfVar15 = (float *)(puVar13 + (uint)*(byte *)((int)local_34 + 0x11) * 0xc);
                fVar9 = local_34[2];
                if (fVar9 == 0.0) {
                  *pfVar11 = (fVar2 * *pfVar16 + fVar3 * pfVar16[3] + fVar4 * pfVar16[6] +
                             pfVar16[9]) * fVar1 +
                             (fVar2 * *pfVar15 + fVar3 * pfVar15[3] + fVar4 * pfVar15[6] +
                             pfVar15[9]) * fVar8;
                  pfVar11[1] = (fVar2 * pfVar16[1] + fVar3 * pfVar16[4] + fVar4 * pfVar16[7] +
                               pfVar16[10]) * fVar1 +
                               (fVar2 * pfVar15[1] + fVar3 * pfVar15[4] + fVar4 * pfVar15[7] +
                               pfVar15[10]) * fVar8;
                  fVar8 = (fVar2 * pfVar15[2] + fVar3 * pfVar15[5] + fVar4 * pfVar15[8] +
                          pfVar15[0xb]) * fVar8;
                }
                else {
                  fVar5 = local_34[3];
                  pfVar17 = (float *)(puVar13 + (uint)*(byte *)((int)local_34 + 0x12) * 0xc);
                  if (fVar5 != 0.0) {
                    pfVar14 = (float *)(puVar13 + (uint)*(byte *)((int)local_34 + 0x13) * 0xc);
                    *pfVar11 = (fVar2 * *pfVar14 + fVar3 * pfVar14[3] + fVar4 * pfVar14[6] +
                               pfVar14[9]) * fVar5 +
                               (fVar2 * *pfVar16 + fVar3 * pfVar16[3] + fVar4 * pfVar16[6] +
                               pfVar16[9]) * fVar1 +
                               (fVar2 * *pfVar15 + fVar3 * pfVar15[3] + fVar4 * pfVar15[6] +
                               pfVar15[9]) * fVar8 +
                               (fVar2 * *pfVar17 + fVar3 * pfVar17[3] + fVar4 * pfVar17[6] +
                               pfVar17[9]) * fVar9;
                    pfVar11[1] = (fVar2 * pfVar16[1] + fVar3 * pfVar16[4] + fVar4 * pfVar16[7] +
                                 pfVar16[10]) * fVar1 +
                                 (fVar2 * pfVar14[1] + fVar3 * pfVar14[4] + fVar4 * pfVar14[7] +
                                 pfVar14[10]) * fVar5 +
                                 (fVar2 * pfVar15[1] + fVar3 * pfVar15[4] + fVar4 * pfVar15[7] +
                                 pfVar15[10]) * fVar8 +
                                 (fVar2 * pfVar17[1] + fVar3 * pfVar17[4] + fVar4 * pfVar17[7] +
                                 pfVar17[10]) * fVar9;
                    pfVar11[2] = (fVar2 * pfVar16[2] + fVar3 * pfVar16[5] + fVar4 * pfVar16[8] +
                                 pfVar16[0xb]) * fVar1 +
                                 (fVar2 * pfVar14[2] + fVar3 * pfVar14[5] + fVar4 * pfVar14[8] +
                                 pfVar14[0xb]) * fVar5 +
                                 (fVar2 * pfVar15[2] + fVar3 * pfVar15[5] + fVar4 * pfVar15[8] +
                                 pfVar15[0xb]) * fVar8 +
                                 (fVar2 * pfVar17[2] + fVar3 * pfVar17[5] + fVar4 * pfVar17[8] +
                                 pfVar17[0xb]) * fVar9;
                    goto LAB_00a6ddf2;
                  }
                  *pfVar11 = (fVar2 * *pfVar16 + fVar3 * pfVar16[3] + fVar4 * pfVar16[6] +
                             pfVar16[9]) * fVar1 +
                             (fVar2 * *pfVar15 + fVar3 * pfVar15[3] + fVar4 * pfVar15[6] +
                             pfVar15[9]) * fVar8 +
                             (fVar2 * *pfVar17 + fVar3 * pfVar17[3] + fVar4 * pfVar17[6] +
                             pfVar17[9]) * fVar9;
                  pfVar11[1] = (fVar2 * pfVar16[1] + fVar3 * pfVar16[4] + fVar4 * pfVar16[7] +
                               pfVar16[10]) * fVar1 +
                               (fVar2 * pfVar15[1] + fVar3 * pfVar15[4] + fVar4 * pfVar15[7] +
                               pfVar15[10]) * fVar8 +
                               (fVar2 * pfVar17[1] + fVar3 * pfVar17[4] + fVar4 * pfVar17[7] +
                               pfVar17[10]) * fVar9;
                  fVar8 = (fVar2 * pfVar15[2] + fVar3 * pfVar15[5] + fVar4 * pfVar15[8] +
                          pfVar15[0xb]) * fVar8 +
                          (fVar2 * pfVar17[2] + fVar3 * pfVar17[5] + fVar4 * pfVar17[8] +
                          pfVar17[0xb]) * fVar9;
                }
                pfVar11[2] = (fVar2 * pfVar16[2] + fVar3 * pfVar16[5] + fVar4 * pfVar16[8] +
                             pfVar16[0xb]) * fVar1 + fVar8;
              }
LAB_00a6ddf2:
              FUN_00a6c3e0(pfVar16,pfVar11 + 3,pfVar18 + 3);
              local_24 = local_24 + 1;
              pfVar11 = pfVar11 + 10;
              pfVar18 = pfVar18 + 8;
              local_34 = local_34 + 5;
            } while (local_24 < (int)local_1c);
          }
        }
        else {
          local_30 = 0;
          if (0 < (int)local_1c) {
            local_34 = local_34 + 4;
            pfVar16 = pfVar11 + 8;
            do {
              pfVar16[-2] = pfVar18[6];
              pfVar16[-1] = pfVar18[7];
              iVar7 = *(int *)(param_1[10] + 0x14);
              *pfVar16 = *(float *)(iVar7 + local_30 * 8);
              pfVar16[1] = *(float *)(iVar7 + 4 + local_30 * 8);
              bVar6 = *(byte *)local_34;
              FUN_004d52e0(puVar13 + (uint)bVar6 * 0xc,pfVar11,pfVar18);
              FUN_00a6c3e0(puVar13 + (uint)bVar6 * 0xc,pfVar16 + -5,pfVar18 + 3);
              local_30 = local_30 + 1;
              local_34 = local_34 + 5;
              pfVar11 = pfVar11 + 10;
              pfVar16 = pfVar16 + 10;
              pfVar18 = pfVar18 + 8;
            } while (local_30 < (int)local_1c);
          }
        }
      }
      if (pfVar11 != (float *)0x0) {
        FUN_00a3a4e0();
      }
      if ((local_35 != '\0') && (cVar10 = FUN_00a51200(local_4,'\x01',-1), cVar10 != '\0')) {
        if ((*(byte *)(this + 5) & 2) == 0) {
          LH_ApplyMeshMaterial(this);
          (**(code **)(*g_pDirect3DDevice + 0x148))
                    (g_pDirect3DDevice,4,local_c,0,local_1c,local_10,local_18);
          if ((this[8] != 0) && (*(char *)((int)this + 7) != '\0')) {
            FUN_00994c40(this,'\x01');
            LH_ApplyMeshMaterial(this);
            (**(code **)(*g_pDirect3DDevice + 0x148))
                      (g_pDirect3DDevice,4,local_c,0,local_1c,local_10,local_18);
            FUN_00994c40(this,'\0');
          }
          if (DAT_00e67b8c == '\0') {
            return;
          }
          if (*(char *)((int)this + 9) == -1) {
            return;
          }
        }
        FUN_00a6c6e0(&local_1c);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a6e300 @ 00a6e300 ////

void __fastcall FUN_00a6e300(undefined4 *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 uVar16;
  float *pfVar17;
  undefined4 unaff_EBX;
  float *pfVar18;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  float *pfVar19;
  undefined4 uVar20;
  char local_6d;
  int local_6c;
  float *local_68;
  undefined4 *local_64;
  int local_5c;
  int *local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int aiStack_30 [3];
  undefined1 uStack_24;
  uint uStack_20;
  int iStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbe38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LH_GetPrimitiveDrawInfo_Impl(param_1,&local_4c);
  if ((((local_38 != 0) && (local_48 != 0)) && (local_4c != (int *)0x0)) &&
     (local_6d = FUN_00a50a10(local_38), local_6d != '\0')) {
    local_40 = *(undefined4 *)(local_38 + 0x24);
    piVar1 = (int *)(*(int *)(DAT_0105eb48 + 0x34) + (param_1[2] & 0xff) * 0x24);
    pfVar12 = (float *)FUN_00a3ac00(local_4c,(int)&local_3c);
    fVar11 = DAT_0105c3c8;
    fVar10 = DAT_0105c3c4;
    fVar9 = DAT_0105c3c0;
    if (pfVar12 != (float *)0x0) {
      local_5c = ((uint)param_1[2] >> 8 & 3) + 1;
      pfVar19 = (float *)param_1[0xc];
      pfVar18 = (float *)*param_1;
      if (pfVar18 == (float *)0x0) {
        local_6d = '\0';
      }
      else {
        local_64 = FUN_009856c0();
        if (local_5c == 2) {
          local_5c = 0;
          if (0 < (int)local_4c) {
            pfVar14 = pfVar12 + 5;
            do {
              pfVar14[1] = pfVar19[6];
              pfVar14[2] = pfVar19[7];
              fVar8 = pfVar18[1];
              pfVar15 = (float *)(local_64 + (uint)*(byte *)(pfVar18 + 4) * 0xc);
              if (fVar8 == 0.0) {
                FUN_004d52e0(pfVar15,pfVar12,pfVar19);
              }
              else {
                fVar2 = *pfVar18;
                fVar3 = *pfVar19;
                fVar4 = pfVar19[1];
                fVar5 = pfVar19[2];
                pfVar17 = (float *)(local_64 + (uint)*(byte *)((int)pfVar18 + 0x11) * 0xc);
                *pfVar12 = (fVar3 * *pfVar15 + fVar4 * pfVar15[3] + fVar5 * pfVar15[6] + pfVar15[9])
                           * fVar2 + (fVar3 * *pfVar17 + fVar4 * pfVar17[3] + fVar5 * pfVar17[6] +
                                     pfVar17[9]) * fVar8;
                pfVar14[-4] = (fVar3 * pfVar15[1] + fVar4 * pfVar15[4] + fVar5 * pfVar15[7] +
                              pfVar15[10]) * fVar2 +
                              (fVar3 * pfVar17[1] + fVar4 * pfVar17[4] + fVar5 * pfVar17[7] +
                              pfVar17[10]) * fVar8;
                pfVar14[-3] = (fVar3 * pfVar15[2] + fVar4 * pfVar15[5] + fVar5 * pfVar15[8] +
                              pfVar15[0xb]) * fVar2 +
                              (fVar3 * pfVar17[2] + fVar4 * pfVar17[5] + fVar5 * pfVar17[8] +
                              pfVar17[0xb]) * fVar8;
              }
              FUN_00a6c3e0(pfVar15,pfVar14 + -2,pfVar19 + 3);
              fVar8 = ABS(fVar9 * pfVar14[-2] + fVar11 * *pfVar14 + fVar10 * pfVar14[-1]);
              if (fVar8 < 0.9) {
                fVar8 = 0.9;
              }
              pfVar14[4] = 0.5;
              local_68 = pfVar14 + 10;
              local_5c = local_5c + 1;
              pfVar14[3] = (fVar8 - 0.9) * 9.999998;
              pfVar12 = pfVar12 + 10;
              pfVar19 = pfVar19 + 8;
              pfVar18 = pfVar18 + 5;
              pfVar14 = local_68;
            } while (local_5c < (int)local_4c);
          }
        }
        else if (local_5c == 3) {
          local_5c = 0;
          if (0 < (int)local_4c) {
            pfVar14 = pfVar12 + 5;
            do {
              pfVar14[1] = pfVar19[6];
              pfVar14[2] = pfVar19[7];
              fVar8 = pfVar18[1];
              pfVar15 = (float *)(local_64 + (uint)*(byte *)(pfVar18 + 4) * 0xc);
              if (fVar8 == 0.0) {
                FUN_004d52e0(pfVar15,pfVar12,pfVar19);
              }
              else {
                fVar2 = *pfVar18;
                fVar3 = *pfVar19;
                fVar4 = pfVar19[1];
                fVar5 = pfVar19[2];
                pfVar17 = (float *)(local_64 + (uint)*(byte *)((int)pfVar18 + 0x11) * 0xc);
                fVar6 = pfVar18[2];
                if (fVar6 == 0.0) {
                  *pfVar12 = (fVar3 * *pfVar17 + fVar4 * pfVar17[3] + fVar5 * pfVar17[6] +
                             pfVar17[9]) * fVar8 +
                             (fVar3 * *pfVar15 + fVar4 * pfVar15[3] + fVar5 * pfVar15[6] +
                             pfVar15[9]) * fVar2;
                  pfVar14[-4] = (fVar3 * pfVar15[1] + fVar4 * pfVar15[4] + fVar5 * pfVar15[7] +
                                pfVar15[10]) * fVar2 +
                                (fVar3 * pfVar17[1] + fVar4 * pfVar17[4] + fVar5 * pfVar17[7] +
                                pfVar17[10]) * fVar8;
                  pfVar14[-3] = (fVar3 * pfVar15[2] + fVar4 * pfVar15[5] + fVar5 * pfVar15[8] +
                                pfVar15[0xb]) * fVar2 +
                                (fVar3 * pfVar17[2] + fVar4 * pfVar17[5] + fVar5 * pfVar17[8] +
                                pfVar17[0xb]) * fVar8;
                }
                else {
                  pfVar13 = (float *)(local_64 + (uint)*(byte *)((int)pfVar18 + 0x12) * 0xc);
                  *pfVar12 = (fVar3 * *pfVar17 + fVar4 * pfVar17[3] + fVar5 * pfVar17[6] +
                             pfVar17[9]) * fVar8 +
                             (fVar3 * *pfVar13 + fVar4 * pfVar13[3] + fVar5 * pfVar13[6] +
                             pfVar13[9]) * fVar6 +
                             (fVar3 * *pfVar15 + fVar4 * pfVar15[3] + fVar5 * pfVar15[6] +
                             pfVar15[9]) * fVar2;
                  pfVar14[-4] = (fVar3 * pfVar15[1] + fVar4 * pfVar15[4] + fVar5 * pfVar15[7] +
                                pfVar15[10]) * fVar2 +
                                (fVar3 * pfVar17[1] + fVar4 * pfVar17[4] + fVar5 * pfVar17[7] +
                                pfVar17[10]) * fVar8 +
                                (fVar3 * pfVar13[1] + fVar4 * pfVar13[4] + fVar5 * pfVar13[7] +
                                pfVar13[10]) * fVar6;
                  pfVar14[-3] = (fVar3 * pfVar15[2] + fVar4 * pfVar15[5] + fVar5 * pfVar15[8] +
                                pfVar15[0xb]) * fVar2 +
                                (fVar3 * pfVar17[2] + fVar4 * pfVar17[5] + fVar5 * pfVar17[8] +
                                pfVar17[0xb]) * fVar8 +
                                (fVar3 * pfVar13[2] + fVar4 * pfVar13[5] + fVar5 * pfVar13[8] +
                                pfVar13[0xb]) * fVar6;
                }
              }
              FUN_00a6c3e0(pfVar15,pfVar14 + -2,pfVar19 + 3);
              fVar8 = ABS(fVar11 * *pfVar14 + fVar9 * pfVar14[-2] + fVar10 * pfVar14[-1]);
              if (fVar8 < 0.9) {
                fVar8 = 0.9;
              }
              pfVar14[4] = 0.5;
              local_68 = pfVar14 + 10;
              local_5c = local_5c + 1;
              pfVar14[3] = (fVar8 - 0.9) * 9.999998;
              pfVar12 = pfVar12 + 10;
              pfVar19 = pfVar19 + 8;
              pfVar18 = pfVar18 + 5;
              pfVar14 = local_68;
            } while (local_5c < (int)local_4c);
          }
        }
        else if (local_5c == 4) {
          local_5c = 0;
          pfVar14 = pfVar12;
          if (0 < (int)local_4c) {
            do {
              pfVar14[6] = pfVar19[6];
              pfVar14[7] = pfVar19[7];
              fVar8 = pfVar18[1];
              pfVar12 = (float *)(local_64 + (uint)*(byte *)(pfVar18 + 4) * 0xc);
              if (fVar8 == 0.0) {
                FUN_004d52e0(pfVar12,pfVar14,pfVar19);
              }
              else {
                fVar2 = *pfVar18;
                fVar3 = *pfVar19;
                fVar4 = pfVar19[1];
                fVar5 = pfVar19[2];
                pfVar15 = (float *)(local_64 + (uint)*(byte *)((int)pfVar18 + 0x11) * 0xc);
                local_68 = (float *)pfVar18[2];
                if ((float)local_68 == 0.0) {
                  *pfVar14 = (fVar3 * *pfVar12 + fVar4 * pfVar12[3] + fVar5 * pfVar12[6] +
                             pfVar12[9]) * fVar2 +
                             (fVar3 * *pfVar15 + fVar4 * pfVar15[3] + fVar5 * pfVar15[6] +
                             pfVar15[9]) * fVar8;
                  pfVar14[1] = (fVar3 * pfVar12[1] + fVar4 * pfVar12[4] + fVar5 * pfVar12[7] +
                               pfVar12[10]) * fVar2 +
                               (fVar3 * pfVar15[1] + fVar4 * pfVar15[4] + fVar5 * pfVar15[7] +
                               pfVar15[10]) * fVar8;
                  fVar8 = (fVar3 * pfVar15[2] + fVar4 * pfVar15[5] + fVar5 * pfVar15[8] +
                          pfVar15[0xb]) * fVar8;
                }
                else {
                  fVar6 = pfVar18[3];
                  pfVar17 = (float *)(local_64 + (uint)*(byte *)((int)pfVar18 + 0x12) * 0xc);
                  if (fVar6 != 0.0) {
                    pfVar13 = (float *)(local_64 + (uint)*(byte *)((int)pfVar18 + 0x13) * 0xc);
                    *pfVar14 = (fVar3 * *pfVar12 + fVar4 * pfVar12[3] + fVar5 * pfVar12[6] +
                               pfVar12[9]) * fVar2 +
                               (fVar3 * *pfVar15 + fVar4 * pfVar15[3] + fVar5 * pfVar15[6] +
                               pfVar15[9]) * fVar8 +
                               (fVar3 * *pfVar17 + fVar4 * pfVar17[3] + fVar5 * pfVar17[6] +
                               pfVar17[9]) * (float)local_68 +
                               (fVar3 * *pfVar13 + fVar4 * pfVar13[3] + fVar5 * pfVar13[6] +
                               pfVar13[9]) * fVar6;
                    pfVar14[1] = (fVar3 * pfVar13[1] + fVar4 * pfVar13[4] + fVar5 * pfVar13[7] +
                                 pfVar13[10]) * fVar6 +
                                 (fVar3 * pfVar12[1] + fVar4 * pfVar12[4] + fVar5 * pfVar12[7] +
                                 pfVar12[10]) * fVar2 +
                                 (fVar3 * pfVar15[1] + fVar4 * pfVar15[4] + fVar5 * pfVar15[7] +
                                 pfVar15[10]) * fVar8 +
                                 (fVar3 * pfVar17[1] + fVar4 * pfVar17[4] + fVar5 * pfVar17[7] +
                                 pfVar17[10]) * (float)local_68;
                    pfVar14[2] = (fVar3 * pfVar13[2] + fVar4 * pfVar13[5] + fVar5 * pfVar13[8] +
                                 pfVar13[0xb]) * fVar6 +
                                 (fVar3 * pfVar12[2] + fVar4 * pfVar12[5] + fVar5 * pfVar12[8] +
                                 pfVar12[0xb]) * fVar2 +
                                 (fVar3 * pfVar15[2] + fVar4 * pfVar15[5] + fVar5 * pfVar15[8] +
                                 pfVar15[0xb]) * fVar8 +
                                 (fVar3 * pfVar17[2] + fVar4 * pfVar17[5] + fVar5 * pfVar17[8] +
                                 pfVar17[0xb]) * (float)local_68;
                    goto LAB_00a6e871;
                  }
                  *pfVar14 = (fVar3 * *pfVar12 + fVar4 * pfVar12[3] + fVar5 * pfVar12[6] +
                             pfVar12[9]) * fVar2 +
                             (fVar3 * *pfVar15 + fVar4 * pfVar15[3] + fVar5 * pfVar15[6] +
                             pfVar15[9]) * fVar8 +
                             (fVar3 * *pfVar17 + fVar4 * pfVar17[3] + fVar5 * pfVar17[6] +
                             pfVar17[9]) * (float)local_68;
                  pfVar14[1] = (fVar3 * pfVar12[1] + fVar4 * pfVar12[4] + fVar5 * pfVar12[7] +
                               pfVar12[10]) * fVar2 +
                               (fVar3 * pfVar15[1] + fVar4 * pfVar15[4] + fVar5 * pfVar15[7] +
                               pfVar15[10]) * fVar8 +
                               (fVar3 * pfVar17[1] + fVar4 * pfVar17[4] + fVar5 * pfVar17[7] +
                               pfVar17[10]) * (float)local_68;
                  fVar8 = (fVar3 * pfVar15[2] + fVar4 * pfVar15[5] + fVar5 * pfVar15[8] +
                          pfVar15[0xb]) * fVar8 +
                          (fVar3 * pfVar17[2] + fVar4 * pfVar17[5] + fVar5 * pfVar17[8] +
                          pfVar17[0xb]) * (float)local_68;
                }
                pfVar14[2] = (fVar3 * pfVar12[2] + fVar4 * pfVar12[5] + fVar5 * pfVar12[8] +
                             pfVar12[0xb]) * fVar2 + fVar8;
              }
LAB_00a6e871:
              FUN_00a6c3e0(pfVar12,pfVar14 + 3,pfVar19 + 3);
              fVar8 = ABS(fVar9 * pfVar14[3] + fVar11 * pfVar14[5] + fVar10 * pfVar14[4]);
              if (fVar8 < 0.9) {
                fVar8 = 0.9;
              }
              pfVar14[9] = 0.5;
              local_5c = local_5c + 1;
              pfVar12 = pfVar14 + 10;
              pfVar19 = pfVar19 + 8;
              pfVar14[8] = (fVar8 - 0.9) * 9.999998;
              pfVar18 = pfVar18 + 5;
              pfVar14 = pfVar12;
            } while (local_5c < (int)local_4c);
          }
        }
        else {
          local_6c = 0;
          if (0 < (int)local_4c) {
            local_68 = pfVar18 + 4;
            pfVar18 = pfVar12 + 5;
            do {
              pfVar18[1] = pfVar19[6];
              pfVar18[2] = pfVar19[7];
              bVar7 = *(byte *)local_68;
              FUN_004d52e0(local_64 + (uint)bVar7 * 0xc,pfVar12,pfVar19);
              FUN_00a6c3e0(local_64 + (uint)bVar7 * 0xc,pfVar18 + -2,pfVar19 + 3);
              fVar8 = ABS(fVar9 * pfVar18[-2] + fVar11 * *pfVar18 + fVar10 * pfVar18[-1]);
              if (fVar8 < 0.9) {
                fVar8 = 0.9;
              }
              pfVar18[4] = 0.5;
              local_6c = local_6c + 1;
              local_68 = local_68 + 5;
              pfVar18[3] = (fVar8 - 0.9) * 9.999998;
              pfVar12 = pfVar12 + 10;
              pfVar18 = pfVar18 + 10;
              pfVar19 = pfVar19 + 8;
            } while (local_6c < (int)local_4c);
          }
        }
      }
      if (pfVar12 != (float *)0x0) {
        FUN_00a3a4e0();
      }
      if (local_6d != '\0') {
        uVar20 = 0x212;
        (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x212);
        if (DAT_010bb230 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = *(undefined4 *)(DAT_010bb230 + 4);
        }
        (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,uVar16,0,0x28);
        piVar1[4] = piVar1[4] & 0xbfffffff;
        LH_ApplyMeshMaterial(piVar1);
        (**(code **)(*g_pDirect3DDevice + 0x148))
                  (g_pDirect3DDevice,4,fVar9,0,local_68,local_5c,local_64);
        piVar1[4] = piVar1[4] | 0x40000000;
        LH_ApplyMeshMaterial(piVar1);
        (**(code **)(*g_pDirect3DDevice + 0x148))
                  (g_pDirect3DDevice,4,unaff_EBX,0,uVar20,unaff_EBP,unaff_EDI);
        if (piVar1[7] != 0) {
          FUN_009910f0(aiStack_30);
          uStack_4 = 0;
          uStack_24 = 0x1f;
          if (iStack_18 != piVar1[7]) {
            Engine_SetResourceReference(aiStack_30,piVar1[7]);
          }
          if (iStack_14 != DAT_0105eb10) {
            FUN_00994bc0(aiStack_30,DAT_0105eb10);
          }
          uStack_20 = uStack_20 & 0xbfffffff | 0x2000000;
          LH_ApplyMeshMaterial(aiStack_30);
          if (DAT_0105904c != 3) {
            DAT_0105904c = 3;
            (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x17,3);
          }
          (**(code **)(*g_pDirect3DDevice + 0x148))
                    (g_pDirect3DDevice,4,local_3c,0,local_4c,local_40,local_48);
          if (DAT_0105904c != 4) {
            DAT_0105904c = 4;
            (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x17,4);
          }
          uStack_4 = 0xffffffff;
          FUN_00990ec0((int)aiStack_30);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a6ef20 @ 00a6ef20 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00a6ef20(void *this,char param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  float *pfVar11;
  void *this_00;
  undefined4 *puVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *local_44;
  int local_34;
  float local_28;
  float local_24;
  float local_20;
  int *local_1c;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  void *local_4;
  
  if (((((*(int *)((int)this + 0x2c) != 0) && (*(int *)((int)this + 0x1c) != 0)) &&
       (DAT_0105eb48 != 0)) &&
      ((DAT_01050c48 != 0 && (LH_GetPrimitiveDrawInfo_Impl(this,&local_1c), local_8 != 0)))) &&
     ((local_18 != 0 &&
      ((local_1c != (int *)0x0 && (cVar10 = FUN_00a50a10(local_8), cVar10 != '\0')))))) {
    local_10 = *(undefined4 *)(local_8 + 0x24);
    pfVar11 = (float *)FUN_00a3ac00(local_1c,(int)&local_c);
    if (pfVar11 != (float *)0x0) {
      this_00 = (void *)(DAT_01050c48 + 0x18);
      pfVar17 = *(float **)((int)local_4 + 0x10);
      if (param_1 == '\0') {
        _param_1 = (float *)0x0;
        if (0 < (int)local_1c) {
          pfVar19 = pfVar17 + 3;
          pfVar18 = pfVar11 + 3;
          do {
            *pfVar11 = *pfVar17;
            pfVar11[1] = pfVar17[1];
            pfVar11[2] = pfVar17[2];
            local_28 = *pfVar19;
            local_24 = pfVar19[1];
            local_20 = pfVar19[2];
            FUN_00a42de0(this_00,&local_28);
            fVar8 = local_20 * _DAT_0105c610;
            pfVar11 = pfVar11 + 5;
            fVar3 = local_24 * _DAT_0105c60c;
            pfVar17 = pfVar17 + 8;
            pfVar19 = pfVar19 + 8;
            fVar2 = local_28 * _DAT_0105c608;
            pfVar18[1] = 0.5;
            _param_1 = (float *)((int)_param_1 + 1);
            *pfVar18 = (fVar2 + fVar3 + fVar8 + 1.0) * 0.5;
            pfVar18 = pfVar18 + 5;
          } while ((int)_param_1 < (int)local_1c);
        }
      }
      else {
        puVar12 = FUN_009856c0();
        local_44 = *(float **)this;
        if (local_44 != (float *)0x0) {
          uVar13 = *(uint *)((int)this + 8) >> 8 & 3;
          if (uVar13 == 1) {
            _param_1 = (float *)0x0;
            if (0 < (int)local_1c) {
              do {
                fVar8 = local_44[1];
                pfVar19 = (float *)(puVar12 + (uint)*(byte *)(local_44 + 4) * 0xc);
                if (fVar8 == 0.0) {
                  FUN_004d52e0(pfVar19,pfVar11,pfVar17);
                }
                else {
                  fVar2 = *local_44;
                  fVar3 = *pfVar17;
                  fVar4 = pfVar17[1];
                  fVar5 = pfVar17[2];
                  pfVar18 = (float *)(puVar12 + (uint)*(byte *)((int)local_44 + 0x11) * 0xc);
                  *pfVar11 = (fVar3 * *pfVar19 + fVar4 * pfVar19[3] + fVar5 * pfVar19[6] +
                             pfVar19[9]) * fVar2 +
                             (fVar3 * *pfVar18 + fVar4 * pfVar18[3] + fVar5 * pfVar18[6] +
                             pfVar18[9]) * fVar8;
                  pfVar11[1] = (fVar3 * pfVar19[1] + fVar4 * pfVar19[4] + fVar5 * pfVar19[7] +
                               pfVar19[10]) * fVar2 +
                               (fVar3 * pfVar18[1] + fVar4 * pfVar18[4] + fVar5 * pfVar18[7] +
                               pfVar18[10]) * fVar8;
                  pfVar11[2] = (fVar3 * pfVar19[2] + fVar4 * pfVar19[5] + fVar5 * pfVar19[8] +
                               pfVar19[0xb]) * fVar2 +
                               (fVar3 * pfVar18[2] + fVar4 * pfVar18[5] + fVar5 * pfVar18[8] +
                               pfVar18[0xb]) * fVar8;
                }
                local_28 = pfVar17[3];
                local_24 = pfVar17[4];
                local_20 = pfVar17[5];
                FUN_00a42de0(pfVar19,&local_28);
                FUN_00a42de0(this_00,&local_28);
                fVar8 = local_20 * _DAT_0105c610;
                fVar3 = local_24 * _DAT_0105c60c;
                pfVar17 = pfVar17 + 8;
                local_44 = local_44 + 5;
                fVar2 = local_28 * _DAT_0105c608;
                pfVar11[4] = 0.5;
                pfVar11[3] = (fVar2 + fVar3 + fVar8 + 1.0) * 0.5;
                _param_1 = (float *)((int)_param_1 + 1);
                pfVar11 = pfVar11 + 5;
              } while ((int)_param_1 < (int)local_1c);
            }
          }
          else {
            local_34 = 0;
            if (uVar13 == 2) {
              if (0 < (int)local_1c) {
                do {
                  fVar8 = local_44[1];
                  pfVar19 = (float *)(puVar12 + (uint)*(byte *)(local_44 + 4) * 0xc);
                  if (fVar8 == 0.0) {
                    FUN_004d52e0(pfVar19,pfVar11,pfVar17);
                  }
                  else {
                    fVar2 = *local_44;
                    fVar3 = *pfVar17;
                    fVar4 = pfVar17[1];
                    fVar5 = pfVar17[2];
                    pfVar18 = (float *)(puVar12 + (uint)*(byte *)((int)local_44 + 0x11) * 0xc);
                    fVar9 = local_44[2];
                    if (fVar9 == 0.0) {
                      *pfVar11 = (fVar3 * *pfVar19 + fVar4 * pfVar19[3] + fVar5 * pfVar19[6] +
                                 pfVar19[9]) * fVar2 +
                                 (fVar3 * *pfVar18 + fVar4 * pfVar18[3] + fVar5 * pfVar18[6] +
                                 pfVar18[9]) * fVar8;
                      pfVar11[1] = (fVar3 * pfVar19[1] + fVar4 * pfVar19[4] + fVar5 * pfVar19[7] +
                                   pfVar19[10]) * fVar2 +
                                   (fVar3 * pfVar18[1] + fVar4 * pfVar18[4] + fVar5 * pfVar18[7] +
                                   pfVar18[10]) * fVar8;
                      pfVar11[2] = (fVar3 * pfVar19[2] + fVar4 * pfVar19[5] + fVar5 * pfVar19[8] +
                                   pfVar19[0xb]) * fVar2 +
                                   (fVar3 * pfVar18[2] + fVar4 * pfVar18[5] + fVar5 * pfVar18[8] +
                                   pfVar18[0xb]) * fVar8;
                    }
                    else {
                      pfVar16 = (float *)(puVar12 + (uint)*(byte *)((int)local_44 + 0x12) * 0xc);
                      *pfVar11 = (fVar3 * *pfVar19 + fVar4 * pfVar19[3] + fVar5 * pfVar19[6] +
                                 pfVar19[9]) * fVar2 +
                                 (fVar3 * *pfVar18 + fVar4 * pfVar18[3] + fVar5 * pfVar18[6] +
                                 pfVar18[9]) * fVar8 +
                                 (fVar3 * *pfVar16 + fVar4 * pfVar16[3] + fVar5 * pfVar16[6] +
                                 pfVar16[9]) * fVar9;
                      pfVar11[1] = (fVar3 * pfVar19[1] + fVar4 * pfVar19[4] + fVar5 * pfVar19[7] +
                                   pfVar19[10]) * fVar2 +
                                   (fVar3 * pfVar18[1] + fVar4 * pfVar18[4] + fVar5 * pfVar18[7] +
                                   pfVar18[10]) * fVar8 +
                                   (fVar3 * pfVar16[1] + fVar4 * pfVar16[4] + fVar5 * pfVar16[7] +
                                   pfVar16[10]) * fVar9;
                      pfVar11[2] = (fVar3 * pfVar19[2] + fVar4 * pfVar19[5] + fVar5 * pfVar19[8] +
                                   pfVar19[0xb]) * fVar2 +
                                   (fVar3 * pfVar18[2] + fVar4 * pfVar18[5] + fVar5 * pfVar18[8] +
                                   pfVar18[0xb]) * fVar8 +
                                   (fVar3 * pfVar16[2] + fVar4 * pfVar16[5] + fVar5 * pfVar16[8] +
                                   pfVar16[0xb]) * fVar9;
                    }
                  }
                  local_28 = pfVar17[3];
                  local_24 = pfVar17[4];
                  local_20 = pfVar17[5];
                  FUN_00a42de0(pfVar19,&local_28);
                  FUN_00a42de0(this_00,&local_28);
                  fVar8 = local_20 * _DAT_0105c610;
                  fVar3 = local_24 * _DAT_0105c60c;
                  local_34 = local_34 + 1;
                  pfVar17 = pfVar17 + 8;
                  local_44 = local_44 + 5;
                  fVar2 = local_28 * _DAT_0105c608;
                  pfVar11[4] = 0.5;
                  pfVar11[3] = (fVar2 + fVar3 + fVar8 + 1.0) * 0.5;
                  pfVar11 = pfVar11 + 5;
                } while (local_34 < (int)local_1c);
              }
            }
            else if (uVar13 == 3) {
              if (0 < (int)local_1c) {
                do {
                  fVar8 = local_44[1];
                  pfVar19 = (float *)(puVar12 + (uint)*(byte *)(local_44 + 4) * 0xc);
                  if (fVar8 == 0.0) {
                    FUN_004d52e0(pfVar19,pfVar11,pfVar17);
                  }
                  else {
                    fVar2 = *local_44;
                    fVar3 = *pfVar17;
                    fVar4 = pfVar17[1];
                    fVar5 = pfVar17[2];
                    pfVar18 = (float *)(puVar12 + (uint)*(byte *)((int)local_44 + 0x11) * 0xc);
                    fVar9 = local_44[2];
                    if (fVar9 == 0.0) {
                      *pfVar11 = (fVar3 * *pfVar18 + fVar4 * pfVar18[3] + fVar5 * pfVar18[6] +
                                 pfVar18[9]) * fVar8 +
                                 (fVar3 * *pfVar19 + fVar4 * pfVar19[3] + fVar5 * pfVar19[6] +
                                 pfVar19[9]) * fVar2;
                      pfVar11[1] = (fVar3 * pfVar19[1] + fVar4 * pfVar19[4] + fVar5 * pfVar19[7] +
                                   pfVar19[10]) * fVar2 +
                                   (fVar3 * pfVar18[1] + fVar4 * pfVar18[4] + fVar5 * pfVar18[7] +
                                   pfVar18[10]) * fVar8;
                      fVar8 = (fVar3 * pfVar18[2] + fVar4 * pfVar18[5] + fVar5 * pfVar18[8] +
                              pfVar18[0xb]) * fVar8;
                    }
                    else {
                      fVar6 = local_44[3];
                      pfVar16 = (float *)(puVar12 + (uint)*(byte *)((int)local_44 + 0x12) * 0xc);
                      if (fVar6 != 0.0) {
                        pfVar14 = (float *)(puVar12 + (uint)*(byte *)((int)local_44 + 0x13) * 0xc);
                        *pfVar11 = (fVar3 * *pfVar18 + fVar4 * pfVar18[3] + fVar5 * pfVar18[6] +
                                   pfVar18[9]) * fVar8 +
                                   (fVar3 * *pfVar16 + fVar4 * pfVar16[3] + fVar5 * pfVar16[6] +
                                   pfVar16[9]) * fVar9 +
                                   (fVar3 * *pfVar14 + fVar4 * pfVar14[3] + fVar5 * pfVar14[6] +
                                   pfVar14[9]) * fVar6 +
                                   (fVar3 * *pfVar19 + fVar4 * pfVar19[3] + fVar5 * pfVar19[6] +
                                   pfVar19[9]) * fVar2;
                        pfVar11[1] = (fVar3 * pfVar19[1] + fVar4 * pfVar19[4] + fVar5 * pfVar19[7] +
                                     pfVar19[10]) * fVar2 +
                                     (fVar3 * pfVar18[1] + fVar4 * pfVar18[4] + fVar5 * pfVar18[7] +
                                     pfVar18[10]) * fVar8 +
                                     (fVar3 * pfVar16[1] + fVar4 * pfVar16[4] + fVar5 * pfVar16[7] +
                                     pfVar16[10]) * fVar9 +
                                     (fVar3 * pfVar14[1] + fVar4 * pfVar14[4] + fVar5 * pfVar14[7] +
                                     pfVar14[10]) * fVar6;
                        pfVar11[2] = (fVar3 * pfVar19[2] + fVar4 * pfVar19[5] + fVar5 * pfVar19[8] +
                                     pfVar19[0xb]) * fVar2 +
                                     (fVar3 * pfVar18[2] + fVar4 * pfVar18[5] + fVar5 * pfVar18[8] +
                                     pfVar18[0xb]) * fVar8 +
                                     (fVar3 * pfVar16[2] + fVar4 * pfVar16[5] + fVar5 * pfVar16[8] +
                                     pfVar16[0xb]) * fVar9 +
                                     (fVar3 * pfVar14[2] + fVar4 * pfVar14[5] + fVar5 * pfVar14[8] +
                                     pfVar14[0xb]) * fVar6;
                        goto LAB_00a6f4a3;
                      }
                      *pfVar11 = (fVar3 * *pfVar18 + fVar4 * pfVar18[3] + fVar5 * pfVar18[6] +
                                 pfVar18[9]) * fVar8 +
                                 (fVar3 * *pfVar16 + fVar4 * pfVar16[3] + fVar5 * pfVar16[6] +
                                 pfVar16[9]) * fVar9 +
                                 (fVar3 * *pfVar19 + fVar4 * pfVar19[3] + fVar5 * pfVar19[6] +
                                 pfVar19[9]) * fVar2;
                      pfVar11[1] = (fVar3 * pfVar19[1] + fVar4 * pfVar19[4] + fVar5 * pfVar19[7] +
                                   pfVar19[10]) * fVar2 +
                                   (fVar3 * pfVar18[1] + fVar4 * pfVar18[4] + fVar5 * pfVar18[7] +
                                   pfVar18[10]) * fVar8 +
                                   (fVar3 * pfVar16[1] + fVar4 * pfVar16[4] + fVar5 * pfVar16[7] +
                                   pfVar16[10]) * fVar9;
                      fVar8 = (fVar3 * pfVar18[2] + fVar4 * pfVar18[5] + fVar5 * pfVar18[8] +
                              pfVar18[0xb]) * fVar8 +
                              (fVar3 * pfVar16[2] + fVar4 * pfVar16[5] + fVar5 * pfVar16[8] +
                              pfVar16[0xb]) * fVar9;
                    }
                    pfVar11[2] = (fVar3 * pfVar19[2] + fVar4 * pfVar19[5] + fVar5 * pfVar19[8] +
                                 pfVar19[0xb]) * fVar2 + fVar8;
                  }
LAB_00a6f4a3:
                  local_28 = pfVar17[3];
                  local_24 = pfVar17[4];
                  local_20 = pfVar17[5];
                  FUN_00a42de0(pfVar19,&local_28);
                  FUN_00a42de0(this_00,&local_28);
                  fVar8 = local_20 * _DAT_0105c610;
                  fVar3 = local_24 * _DAT_0105c60c;
                  pfVar17 = pfVar17 + 8;
                  local_44 = local_44 + 5;
                  fVar2 = local_28 * _DAT_0105c608;
                  pfVar11[4] = 0.5;
                  pfVar11[3] = (fVar2 + fVar3 + fVar8 + 1.0) * 0.5;
                  local_34 = local_34 + 1;
                  pfVar11 = pfVar11 + 5;
                } while (local_34 < (int)local_1c);
              }
            }
            else if (0 < (int)local_1c) {
              _param_1 = pfVar17 + 3;
              local_44 = local_44 + 4;
              pfVar19 = pfVar11 + 3;
              do {
                bVar7 = *(byte *)local_44;
                FUN_004d52e0(puVar12 + (uint)bVar7 * 0xc,pfVar11,pfVar17);
                local_28 = *_param_1;
                local_24 = _param_1[1];
                local_20 = _param_1[2];
                FUN_00a42de0(puVar12 + (uint)bVar7 * 0xc,&local_28);
                FUN_00a42de0(this_00,&local_28);
                fVar8 = local_20 * _DAT_0105c610;
                fVar3 = local_24 * _DAT_0105c60c;
                local_34 = local_34 + 1;
                _param_1 = _param_1 + 8;
                pfVar11 = pfVar11 + 5;
                fVar2 = local_28 * _DAT_0105c608;
                pfVar19[1] = 0.5;
                local_44 = local_44 + 5;
                pfVar17 = pfVar17 + 8;
                *pfVar19 = (fVar2 + fVar3 + fVar8 + 1.0) * 0.5;
                pfVar19 = pfVar19 + 5;
              } while (local_34 < (int)local_1c);
            }
          }
        }
      }
      FUN_00a3a4e0();
      cVar10 = FUN_00a51200(local_4,'\x01',5);
      if (cVar10 != '\0') {
        uVar15 = *(uint *)((int)this + 8) & 0xff;
        uVar13 = *(uint *)(*(int *)(DAT_0105eb48 + 0x34) + 0x10 + uVar15 * 0x24);
        piVar1 = (int *)(*(int *)(DAT_0105eb48 + 0x34) + uVar15 * 0x24);
        *(undefined1 *)(piVar1 + 3) = 6;
        piVar1[4] = uVar13 & 0xfeffffff;
        LH_ApplyMeshMaterial(piVar1);
        (**(code **)(*g_pDirect3DDevice + 0x148))
                  (g_pDirect3DDevice,4,local_c,0,local_1c,local_10,local_18);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a6fad0 @ 00a6fad0 ////

void __fastcall FUN_00a6fad0(undefined4 *param_1)

{
  int *this;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  float fVar7;
  char cVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  undefined4 unaff_EDI;
  uint uVar15;
  float *pfVar16;
  undefined4 uStack_34;
  float local_2c;
  undefined4 *local_28;
  int local_24;
  int *local_1c;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  void *local_4;
  
  if (((((param_1[2] & 0x400000) != 0) && (DAT_01050c48 != 0)) &&
      ((*(uint *)(DAT_01050c48 + 0x9c) & 0x1c00) < 0x800)) && (DAT_0105be80 == '\0')) {
    FUN_00a6e300(param_1);
    return;
  }
  if (*(int *)(param_1[10] + 0x14) != 0) {
    FUN_00a6d8d0(param_1);
    return;
  }
  LH_GetPrimitiveDrawInfo_Impl(param_1,&local_1c);
  if (((local_8 != 0) && (local_18 != 0)) && (local_1c != (int *)0x0)) {
    cVar8 = FUN_00a50a10(local_8);
    if (cVar8 != '\0') {
      local_10 = *(undefined4 *)(local_8 + 0x24);
    }
    uStack_34 = CONCAT13(cVar8,(uint3)uStack_34);
    if (cVar8 != '\0') {
      this = (int *)(*(int *)(DAT_0105eb48 + 0x34) + (param_1[2] & 0xff) * 0x24);
      pfVar9 = (float *)FUN_00a3ac00(local_1c,(int)&local_c);
      if (pfVar9 != (float *)0x0) {
        pfVar13 = (float *)*param_1;
        pfVar14 = (float *)param_1[0xc];
        uVar15 = (uint)param_1[2] >> 8 & 3;
        if (pfVar13 == (float *)0x0) {
          uStack_34 = (uint)(uint3)uStack_34;
        }
        else {
          local_28 = FUN_009856c0();
          if (uVar15 == 1) {
            local_24 = 0;
            if (0 < (int)local_1c) {
              do {
                pfVar9[6] = pfVar14[6];
                pfVar9[7] = pfVar14[7];
                fVar7 = pfVar13[1];
                pfVar16 = (float *)(local_28 + (uint)*(byte *)(pfVar13 + 4) * 0xc);
                if (fVar7 == 0.0) {
                  FUN_004d52e0(pfVar16,pfVar9,pfVar14);
                }
                else {
                  fVar1 = *pfVar13;
                  fVar2 = *pfVar14;
                  fVar3 = pfVar14[1];
                  fVar4 = pfVar14[2];
                  pfVar11 = (float *)(local_28 + (uint)*(byte *)((int)pfVar13 + 0x11) * 0xc);
                  *pfVar9 = (fVar2 * *pfVar11 + fVar3 * pfVar11[3] + fVar4 * pfVar11[6] + pfVar11[9]
                            ) * fVar7 +
                            (fVar2 * *pfVar16 + fVar3 * pfVar16[3] + fVar4 * pfVar16[6] + pfVar16[9]
                            ) * fVar1;
                  pfVar9[1] = (fVar2 * pfVar16[1] + fVar3 * pfVar16[4] + fVar4 * pfVar16[7] +
                              pfVar16[10]) * fVar1 +
                              (fVar2 * pfVar11[1] + fVar3 * pfVar11[4] + fVar4 * pfVar11[7] +
                              pfVar11[10]) * fVar7;
                  pfVar9[2] = (fVar2 * pfVar16[2] + fVar3 * pfVar16[5] + fVar4 * pfVar16[8] +
                              pfVar16[0xb]) * fVar1 +
                              (fVar2 * pfVar11[2] + fVar3 * pfVar11[5] + fVar4 * pfVar11[8] +
                              pfVar11[0xb]) * fVar7;
                }
                FUN_00a6c3e0(pfVar16,pfVar9 + 3,pfVar14 + 3);
                local_24 = local_24 + 1;
                pfVar9 = pfVar9 + 8;
                pfVar14 = pfVar14 + 8;
                pfVar13 = pfVar13 + 5;
              } while (local_24 < (int)local_1c);
            }
          }
          else if (uVar15 == 2) {
            local_24 = 0;
            if (0 < (int)local_1c) {
              do {
                pfVar9[6] = pfVar14[6];
                pfVar9[7] = pfVar14[7];
                fVar7 = pfVar13[1];
                pfVar16 = (float *)(local_28 + (uint)*(byte *)(pfVar13 + 4) * 0xc);
                if (fVar7 == 0.0) {
                  FUN_004d52e0(pfVar16,pfVar9,pfVar14);
                }
                else {
                  fVar1 = *pfVar13;
                  fVar2 = *pfVar14;
                  fVar3 = pfVar14[1];
                  fVar4 = pfVar14[2];
                  pfVar11 = (float *)(local_28 + (uint)*(byte *)((int)pfVar13 + 0x11) * 0xc);
                  fVar5 = pfVar13[2];
                  if (fVar5 == 0.0) {
                    *pfVar9 = (fVar2 * *pfVar11 + fVar3 * pfVar11[3] + fVar4 * pfVar11[6] +
                              pfVar11[9]) * fVar7 +
                              (fVar2 * *pfVar16 + fVar3 * pfVar16[3] + fVar4 * pfVar16[6] +
                              pfVar16[9]) * fVar1;
                    pfVar9[1] = (fVar2 * pfVar16[1] + fVar3 * pfVar16[4] + fVar4 * pfVar16[7] +
                                pfVar16[10]) * fVar1 +
                                (fVar2 * pfVar11[1] + fVar3 * pfVar11[4] + fVar4 * pfVar11[7] +
                                pfVar11[10]) * fVar7;
                    pfVar9[2] = (fVar2 * pfVar16[2] + fVar3 * pfVar16[5] + fVar4 * pfVar16[8] +
                                pfVar16[0xb]) * fVar1 +
                                (fVar2 * pfVar11[2] + fVar3 * pfVar11[5] + fVar4 * pfVar11[8] +
                                pfVar11[0xb]) * fVar7;
                  }
                  else {
                    pfVar12 = (float *)(local_28 + (uint)*(byte *)((int)pfVar13 + 0x12) * 0xc);
                    *pfVar9 = (fVar2 * *pfVar11 + fVar3 * pfVar11[3] + fVar4 * pfVar11[6] +
                              pfVar11[9]) * fVar7 +
                              (fVar2 * *pfVar16 + fVar3 * pfVar16[3] + fVar4 * pfVar16[6] +
                              pfVar16[9]) * fVar1 +
                              (fVar2 * *pfVar12 + fVar3 * pfVar12[3] + fVar4 * pfVar12[6] +
                              pfVar12[9]) * fVar5;
                    pfVar9[1] = (fVar2 * pfVar16[1] + fVar3 * pfVar16[4] + fVar4 * pfVar16[7] +
                                pfVar16[10]) * fVar1 +
                                (fVar2 * pfVar11[1] + fVar3 * pfVar11[4] + fVar4 * pfVar11[7] +
                                pfVar11[10]) * fVar7 +
                                (fVar2 * pfVar12[1] + fVar3 * pfVar12[4] + fVar4 * pfVar12[7] +
                                pfVar12[10]) * fVar5;
                    pfVar9[2] = (fVar2 * pfVar16[2] + fVar3 * pfVar16[5] + fVar4 * pfVar16[8] +
                                pfVar16[0xb]) * fVar1 +
                                (fVar2 * pfVar11[2] + fVar3 * pfVar11[5] + fVar4 * pfVar11[8] +
                                pfVar11[0xb]) * fVar7 +
                                (fVar2 * pfVar12[2] + fVar3 * pfVar12[5] + fVar4 * pfVar12[8] +
                                pfVar12[0xb]) * fVar5;
                  }
                }
                FUN_00a6c3e0(pfVar16,pfVar9 + 3,pfVar14 + 3);
                local_24 = local_24 + 1;
                pfVar9 = pfVar9 + 8;
                pfVar14 = pfVar14 + 8;
                pfVar13 = pfVar13 + 5;
              } while (local_24 < (int)local_1c);
            }
          }
          else if (uVar15 == 3) {
            local_24 = 0;
            if (0 < (int)local_1c) {
              do {
                pfVar9[6] = pfVar14[6];
                pfVar9[7] = pfVar14[7];
                fVar7 = pfVar13[1];
                pfVar16 = (float *)(local_28 + (uint)*(byte *)(pfVar13 + 4) * 0xc);
                if (fVar7 == 0.0) {
                  FUN_004d52e0(pfVar16,pfVar9,pfVar14);
                }
                else {
                  fVar1 = *pfVar13;
                  fVar2 = *pfVar14;
                  fVar3 = pfVar14[1];
                  fVar4 = pfVar14[2];
                  pfVar11 = (float *)(local_28 + (uint)*(byte *)((int)pfVar13 + 0x11) * 0xc);
                  local_2c = pfVar13[2];
                  if (local_2c == 0.0) {
                    *pfVar9 = (fVar2 * *pfVar16 + fVar3 * pfVar16[3] + fVar4 * pfVar16[6] +
                              pfVar16[9]) * fVar1 +
                              (fVar2 * *pfVar11 + fVar3 * pfVar11[3] + fVar4 * pfVar11[6] +
                              pfVar11[9]) * fVar7;
                    pfVar9[1] = (fVar2 * pfVar11[1] + fVar3 * pfVar11[4] + fVar4 * pfVar11[7] +
                                pfVar11[10]) * fVar7 +
                                (fVar2 * pfVar16[1] + fVar3 * pfVar16[4] + fVar4 * pfVar16[7] +
                                pfVar16[10]) * fVar1;
                    fVar1 = (fVar2 * pfVar16[2] + fVar3 * pfVar16[5] + fVar4 * pfVar16[8] +
                            pfVar16[0xb]) * fVar1;
                  }
                  else {
                    fVar5 = pfVar13[3];
                    pfVar12 = (float *)(local_28 + (uint)*(byte *)((int)pfVar13 + 0x12) * 0xc);
                    if (fVar5 != 0.0) {
                      pfVar10 = (float *)(local_28 + (uint)*(byte *)((int)pfVar13 + 0x13) * 0xc);
                      *pfVar9 = (fVar2 * *pfVar16 + fVar3 * pfVar16[3] + fVar4 * pfVar16[6] +
                                pfVar16[9]) * fVar1 +
                                (fVar2 * *pfVar11 + fVar3 * pfVar11[3] + fVar4 * pfVar11[6] +
                                pfVar11[9]) * fVar7 +
                                (fVar2 * *pfVar12 + fVar3 * pfVar12[3] + fVar4 * pfVar12[6] +
                                pfVar12[9]) * local_2c +
                                (fVar2 * *pfVar10 + fVar3 * pfVar10[3] + fVar4 * pfVar10[6] +
                                pfVar10[9]) * fVar5;
                      pfVar9[1] = (fVar2 * pfVar11[1] + fVar3 * pfVar11[4] + fVar4 * pfVar11[7] +
                                  pfVar11[10]) * fVar7 +
                                  (fVar2 * pfVar12[1] + fVar3 * pfVar12[4] + fVar4 * pfVar12[7] +
                                  pfVar12[10]) * local_2c +
                                  (fVar2 * pfVar16[1] + fVar3 * pfVar16[4] + fVar4 * pfVar16[7] +
                                  pfVar16[10]) * fVar1 +
                                  (fVar2 * pfVar10[1] + fVar3 * pfVar10[4] + fVar4 * pfVar10[7] +
                                  pfVar10[10]) * fVar5;
                      pfVar9[2] = (fVar2 * pfVar11[2] + fVar3 * pfVar11[5] + fVar4 * pfVar11[8] +
                                  pfVar11[0xb]) * fVar7 +
                                  (fVar2 * pfVar12[2] + fVar3 * pfVar12[5] + fVar4 * pfVar12[8] +
                                  pfVar12[0xb]) * local_2c +
                                  (fVar2 * pfVar16[2] + fVar3 * pfVar16[5] + fVar4 * pfVar16[8] +
                                  pfVar16[0xb]) * fVar1 +
                                  (fVar2 * pfVar10[2] + fVar3 * pfVar10[5] + fVar4 * pfVar10[8] +
                                  pfVar10[0xb]) * fVar5;
                      goto LAB_00a6ffe1;
                    }
                    *pfVar9 = (fVar2 * *pfVar16 + fVar3 * pfVar16[3] + fVar4 * pfVar16[6] +
                              pfVar16[9]) * fVar1 +
                              (fVar2 * *pfVar11 + fVar3 * pfVar11[3] + fVar4 * pfVar11[6] +
                              pfVar11[9]) * fVar7 +
                              (fVar2 * *pfVar12 + fVar3 * pfVar12[3] + fVar4 * pfVar12[6] +
                              pfVar12[9]) * local_2c;
                    pfVar9[1] = (fVar2 * pfVar11[1] + fVar3 * pfVar11[4] + fVar4 * pfVar11[7] +
                                pfVar11[10]) * fVar7 +
                                (fVar2 * pfVar12[1] + fVar3 * pfVar12[4] + fVar4 * pfVar12[7] +
                                pfVar12[10]) * local_2c +
                                (fVar2 * pfVar16[1] + fVar3 * pfVar16[4] + fVar4 * pfVar16[7] +
                                pfVar16[10]) * fVar1;
                    fVar1 = (fVar2 * pfVar12[2] + fVar3 * pfVar12[5] + fVar4 * pfVar12[8] +
                            pfVar12[0xb]) * local_2c +
                            (fVar2 * pfVar16[2] + fVar3 * pfVar16[5] + fVar4 * pfVar16[8] +
                            pfVar16[0xb]) * fVar1;
                  }
                  pfVar9[2] = (fVar2 * pfVar11[2] + fVar3 * pfVar11[5] + fVar4 * pfVar11[8] +
                              pfVar11[0xb]) * fVar7 + fVar1;
                }
LAB_00a6ffe1:
                FUN_00a6c3e0(pfVar16,pfVar9 + 3,pfVar14 + 3);
                local_24 = local_24 + 1;
                pfVar9 = pfVar9 + 8;
                pfVar14 = pfVar14 + 8;
                pfVar13 = pfVar13 + 5;
              } while (local_24 < (int)local_1c);
            }
          }
          else {
            local_2c = 0.0;
            if (0 < (int)local_1c) {
              pfVar13 = pfVar13 + 4;
              do {
                pfVar9[6] = pfVar14[6];
                pfVar9[7] = pfVar14[7];
                bVar6 = *(byte *)pfVar13;
                FUN_004d52e0(local_28 + (uint)bVar6 * 0xc,pfVar9,pfVar14);
                FUN_00a6c3e0(local_28 + (uint)bVar6 * 0xc,pfVar9 + 3,pfVar14 + 3);
                local_2c = (float)((int)local_2c + 1);
                pfVar9 = pfVar9 + 8;
                pfVar14 = pfVar14 + 8;
                pfVar13 = pfVar13 + 5;
              } while ((int)local_2c < (int)local_1c);
            }
          }
        }
        if (pfVar9 != (float *)0x0) {
          FUN_00a3a4e0();
        }
        if ((uStack_34._3_1_ != '\0') && (cVar8 = FUN_00a51200(local_4,'\x01',-1), cVar8 != '\0')) {
          if ((*(byte *)(this + 5) & 2) != 0) {
            FUN_00a6c6e0(&local_1c);
            return;
          }
          LH_ApplyMeshMaterial(this);
          (**(code **)(*g_pDirect3DDevice + 0x148))
                    (g_pDirect3DDevice,4,local_c,0,local_1c,local_10,local_18);
          if ((this[8] != 0) && (*(char *)((int)this + 7) != '\0')) {
            FUN_00994c40(this,'\x01');
            LH_ApplyMeshMaterial(this);
            (**(code **)(*g_pDirect3DDevice + 0x148))
                      (g_pDirect3DDevice,4,local_28,0,unaff_EDI,local_2c,uStack_34);
            FUN_00994c40(this,'\0');
          }
          if ((DAT_00e67b8c != '\0') && (*(char *)((int)this + 9) != -1)) {
            FUN_00a6c6e0((undefined4 *)&stack0xffffffc8);
          }
        }
      }
    }
  }
  return;
}


//// FUNCTION LH_DrawMeshPrimitive_UVScrolled @ 00a704b0 ////

void __thiscall LH_DrawMeshPrimitive_UVScrolled(void *this,float *param_1,undefined4 param_2)

{
  void *this_00;
  float fVar1;
  float fVar2;
  void *pvVar3;
  float *pfVar4;
  void *pvVar5;
  char cVar6;
  byte bVar7;
  undefined3 extraout_var;
  float *pfVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  float *pfVar16;
  undefined4 *puVar17;
  float10 fVar18;
  void *local_60;
  float local_5c;
  float local_58;
  float local_54;
  float *local_50;
  float local_4c;
  float local_48;
  float local_44 [4];
  float local_34;
  float local_30;
  int *local_1c;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  void *local_4;
  
  pfVar4 = param_1;
  iVar15 = 0;
  if ((((*(int *)((int)this + 0x2c) != 0) && (*(int *)((int)this + 0x1c) != 0)) &&
      (local_60 = this, LH_GetPrimitiveDrawInfo_Impl(this,&local_1c), local_8 != 0)) &&
     (((local_18 != 0 && (local_1c != (int *)0x0)) &&
      (cVar6 = FUN_00a50a10(local_8), pvVar5 = local_4, cVar6 != '\0')))) {
    local_10 = *(undefined4 *)(local_8 + 0x24);
    puVar12 = *(undefined4 **)((int)local_4 + 0x10);
    bVar7 = FUN_00a4ca90((int)local_4);
    iVar13 = CONCAT31(extraout_var,bVar7);
    if (iVar13 == 0) {
      FUN_00a4cb40((int)pvVar5);
      puVar9 = (undefined4 *)FUN_00a3ac00(local_1c,(int)&local_c);
      if (puVar9 == (undefined4 *)0x0) {
        return;
      }
      if ((char)param_2 == '\0') {
        if ((DAT_01050c48 == 0) || ((*(uint *)(DAT_01050c48 + 0xa0) & 0x2000) == 0)) {
          param_1 = (float *)0x0;
          if (0 < (int)local_1c) {
            pfVar8 = (float *)(puVar9 + 6);
            do {
              puVar14 = puVar12;
              puVar17 = puVar9;
              for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
                *puVar17 = *puVar14;
                puVar14 = puVar14 + 1;
                puVar17 = puVar17 + 1;
              }
              local_4c = (float)puVar12[6] + *pfVar4;
              local_48 = (float)puVar12[7] + pfVar4[1];
              *pfVar8 = local_4c;
              pfVar8[1] = local_48;
              param_1 = (float *)((int)param_1 + 1);
              puVar9 = puVar9 + 8;
              pfVar8 = pfVar8 + 8;
              puVar12 = puVar12 + 8;
            } while ((int)param_1 < (int)local_1c);
          }
        }
        else {
          param_1 = (float *)0x0;
          if (0 < (int)local_1c) {
            pfVar8 = (float *)(puVar9 + 6);
            do {
              puVar14 = puVar12;
              puVar17 = puVar9;
              for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
                *puVar17 = *puVar14;
                puVar14 = puVar14 + 1;
                puVar17 = puVar17 + 1;
              }
              local_4c = (float)puVar12[6] - *pfVar4;
              local_48 = (float)puVar12[7] - pfVar4[1];
              *pfVar8 = local_4c;
              pfVar8[1] = local_48;
              param_1 = (float *)((int)param_1 + 1);
              puVar9 = puVar9 + 8;
              pfVar8 = pfVar8 + 8;
              puVar12 = puVar12 + 8;
            } while ((int)param_1 < (int)local_1c);
          }
        }
      }
      else {
        fVar18 = (float10)fcos((float10)*param_1);
        iVar15 = 0;
        local_4c = (float)fVar18;
        fVar18 = (float10)fsin((float10)*param_1);
        if (0 < (int)local_1c) {
          do {
            puVar14 = puVar12;
            puVar17 = puVar9;
            for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar17 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar17 = puVar17 + 1;
            }
            fVar1 = (float)puVar12[6];
            fVar2 = (float)puVar12[7];
            iVar15 = iVar15 + 1;
            puVar12 = puVar12 + 8;
            puVar9[6] = (fVar1 - 0.5) * local_4c + (float)fVar18 * (fVar2 - 0.5) + 0.5;
            puVar9[7] = ((fVar1 - 0.5) * (float)fVar18 - (fVar2 - 0.5) * local_4c) + 0.5;
            puVar9 = puVar9 + 8;
          } while (iVar15 < (int)local_1c);
        }
      }
    }
    else if (iVar13 == 4) {
      FUN_00a4cb40((int)pvVar5);
      pfVar8 = (float *)FUN_00a3ac00(local_1c,(int)&local_c);
      if (pfVar8 == (float *)0x0) {
        return;
      }
      if ((char)param_2 == '\0') {
        if ((DAT_01050c48 == 0) || ((*(uint *)(DAT_01050c48 + 0xa0) & 0x2000) == 0)) {
          if (*(int *)((int)local_4 + 0x18) == 0) {
            if (0 < (int)local_1c) {
              do {
                FUN_00a4caf0(local_44,puVar12);
                *pfVar8 = local_44[0];
                pfVar8[1] = local_44[1];
                pfVar8[2] = local_44[2];
                pfVar8[3] = local_44[3];
                pfVar8[4] = local_34;
                pfVar8[5] = local_30;
                local_4c = (float)puVar12[6] + *param_1;
                iVar15 = iVar15 + 1;
                local_48 = (float)puVar12[7] + param_1[1];
                pfVar8[4] = local_4c;
                pfVar8[3] = -NAN;
                pfVar8[5] = local_48;
                puVar12 = puVar12 + 8;
                pfVar8 = pfVar8 + 6;
              } while (iVar15 < (int)local_1c);
            }
          }
          else {
            iVar15 = 0;
            if (0 < (int)local_1c) {
              do {
                FUN_00a4caf0(local_44,puVar12);
                *pfVar8 = local_44[0];
                pfVar8[1] = local_44[1];
                pfVar8[2] = local_44[2];
                pfVar8[3] = local_44[3];
                pfVar8[4] = local_34;
                pfVar8[5] = local_30;
                local_4c = (float)puVar12[6] + *param_1;
                local_48 = (float)puVar12[7] + param_1[1];
                pfVar8[4] = local_4c;
                pfVar8[5] = local_48;
                pfVar8[3] = (float)((-(uint)((*(byte *)(iVar15 + *(int *)((int)local_4 + 0x18)) & 1)
                                            != 0) & 0xff000000) + 0xffffff);
                iVar15 = iVar15 + 1;
                pfVar8 = pfVar8 + 6;
                puVar12 = puVar12 + 8;
              } while (iVar15 < (int)local_1c);
            }
          }
        }
        else if (*(int *)((int)local_4 + 0x18) == 0) {
          if (0 < (int)local_1c) {
            do {
              FUN_00a4caf0(local_44,puVar12);
              *pfVar8 = local_44[0];
              pfVar8[1] = local_44[1];
              pfVar8[2] = local_44[2];
              pfVar8[3] = local_44[3];
              pfVar8[4] = local_34;
              pfVar8[5] = local_30;
              local_4c = (float)puVar12[6] - *param_1;
              iVar15 = iVar15 + 1;
              local_48 = (float)puVar12[7] - param_1[1];
              pfVar8[4] = local_4c;
              pfVar8[3] = -NAN;
              pfVar8[5] = local_48;
              puVar12 = puVar12 + 8;
              pfVar8 = pfVar8 + 6;
            } while (iVar15 < (int)local_1c);
          }
        }
        else if (0 < (int)local_1c) {
          do {
            FUN_00a4caf0(local_44,puVar12);
            *pfVar8 = local_44[0];
            pfVar8[1] = local_44[1];
            pfVar8[2] = local_44[2];
            pfVar8[3] = local_44[3];
            pfVar8[4] = local_34;
            pfVar8[5] = local_30;
            local_4c = (float)puVar12[6] - *param_1;
            local_48 = (float)puVar12[7] - param_1[1];
            pfVar8[4] = local_4c;
            pfVar8[5] = local_48;
            pfVar8[3] = (float)((-(uint)((*(byte *)(iVar15 + *(int *)((int)local_4 + 0x18)) & 1) !=
                                        0) & 0xff000000) + 0xffffff);
            iVar15 = iVar15 + 1;
            pfVar8 = pfVar8 + 6;
            puVar12 = puVar12 + 8;
          } while (iVar15 < (int)local_1c);
        }
      }
      else {
        fVar18 = (float10)fcos((float10)*param_1);
        local_4c = (float)fVar18;
        fVar18 = (float10)fsin((float10)*param_1);
        if (0 < (int)local_1c) {
          do {
            FUN_00a4caf0(local_44,puVar12);
            *pfVar8 = local_44[0];
            pfVar8[1] = local_44[1];
            pfVar8[2] = local_44[2];
            pfVar8[3] = local_44[3];
            pfVar8[4] = local_34;
            pfVar8[5] = local_30;
            fVar1 = (float)puVar12[6];
            iVar15 = iVar15 + 1;
            fVar2 = (float)puVar12[7];
            puVar12 = puVar12 + 8;
            pfVar8[4] = (fVar1 - 0.5) * local_4c + (float)fVar18 * (fVar2 - 0.5) + 0.5;
            pfVar8[5] = ((fVar1 - 0.5) * (float)fVar18 - (fVar2 - 0.5) * local_4c) + 0.5;
            pfVar8 = pfVar8 + 6;
          } while (iVar15 < (int)local_1c);
        }
      }
    }
    else if (iVar13 == 7) {
      FUN_00a4cb40((int)pvVar5);
      pfVar8 = (float *)FUN_00a3ac00(local_1c,(int)&local_c);
      if (pfVar8 == (float *)0x0) {
        return;
      }
      if ((char)param_2 == '\0') {
        if ((DAT_01050c48 == 0) || ((*(uint *)(DAT_01050c48 + 0xa0) & 0x2000) == 0)) {
          local_4c = 0.0;
          if (0 < (int)local_1c) {
            local_50 = pfVar8 + 8;
            param_1 = pfVar8;
            do {
              FUN_00a4cdb0(local_44,puVar12);
              pfVar8 = local_44;
              pfVar16 = param_1;
              for (iVar15 = 10; iVar15 != 0; iVar15 = iVar15 + -1) {
                *pfVar16 = *pfVar8;
                pfVar8 = pfVar8 + 1;
                pfVar16 = pfVar16 + 1;
              }
              local_58 = (float)puVar12[6] + *pfVar4;
              local_54 = (float)puVar12[7] + pfVar4[1];
              local_50[-2] = local_58;
              local_50[-1] = local_54;
              iVar15 = *(int *)(*(int *)((int)local_60 + 0x28) + 0x14);
              *local_50 = *(float *)(iVar15 + (int)local_4c * 8);
              local_50[1] = *(float *)(iVar15 + 4 + (int)local_4c * 8);
              local_50 = local_50 + 10;
              local_4c = (float)((int)local_4c + 1);
              param_1 = param_1 + 10;
              puVar12 = puVar12 + 8;
            } while ((int)local_4c < (int)local_1c);
          }
        }
        else {
          local_4c = 0.0;
          if (0 < (int)local_1c) {
            local_50 = pfVar8 + 8;
            param_1 = pfVar8;
            do {
              FUN_00a4cdb0(local_44,puVar12);
              pfVar8 = local_44;
              pfVar16 = param_1;
              for (iVar15 = 10; iVar15 != 0; iVar15 = iVar15 + -1) {
                *pfVar16 = *pfVar8;
                pfVar8 = pfVar8 + 1;
                pfVar16 = pfVar16 + 1;
              }
              local_58 = (float)puVar12[6] - *pfVar4;
              local_54 = (float)puVar12[7] - pfVar4[1];
              local_50[-2] = local_58;
              local_50[-1] = local_54;
              iVar15 = *(int *)(*(int *)((int)local_60 + 0x28) + 0x14);
              *local_50 = *(float *)(iVar15 + (int)local_4c * 8);
              local_50[1] = *(float *)(iVar15 + 4 + (int)local_4c * 8);
              local_50 = local_50 + 10;
              local_4c = (float)((int)local_4c + 1);
              param_1 = param_1 + 10;
              puVar12 = puVar12 + 8;
            } while ((int)local_4c < (int)local_1c);
          }
        }
      }
      else {
        fVar18 = (float10)fcos((float10)*param_1);
        local_4c = 0.0;
        local_58 = (float)fVar18;
        fVar18 = (float10)fsin((float10)*param_1);
        local_50 = (float *)(float)fVar18;
        param_1 = pfVar8;
        if (0 < (int)local_1c) {
          do {
            FUN_00a4cdb0(local_44,puVar12);
            pfVar8 = local_44;
            pfVar16 = param_1;
            for (iVar15 = 10; iVar15 != 0; iVar15 = iVar15 + -1) {
              *pfVar16 = *pfVar8;
              pfVar8 = pfVar8 + 1;
              pfVar16 = pfVar16 + 1;
            }
            fVar1 = (float)puVar12[6];
            fVar2 = (float)puVar12[7];
            puVar12 = puVar12 + 8;
            param_1[6] = (fVar1 - 0.5) * local_58 + (float)local_50 * (fVar2 - 0.5) + 0.5;
            param_1[7] = ((fVar2 - 0.5) * local_58 - (fVar1 - 0.5) * (float)local_50) + 0.5;
            iVar15 = *(int *)(*(int *)((int)local_60 + 0x28) + 0x14);
            param_1[8] = *(float *)(iVar15 + (int)local_4c * 8);
            param_1[9] = *(float *)(iVar15 + 4 + (int)local_4c * 8);
            local_4c = (float)((int)local_4c + 1);
            param_1 = param_1 + 10;
          } while ((int)local_4c < (int)local_1c);
        }
      }
    }
    FUN_00a3a4e0();
    pvVar5 = local_60;
    if (((((*(uint *)((int)local_60 + 8) & 0x80000) != 0) && (DAT_01050c48 != 0)) &&
        (iVar15 = *(int *)(DAT_01050c48 + 0xd0), iVar15 != 0)) &&
       ((local_4c = *(float *)(iVar15 + 0x1a8), local_4c != 0.0 &&
        ((*(uint *)(iVar15 + 0x1b0) & 1) == 0)))) {
      *(uint *)(iVar15 + 0x1b0) = *(uint *)(iVar15 + 0x1b0) | 1;
      iVar13 = 0;
      if (0 < (int)local_4c) {
        do {
          uVar10 = *(uint *)((int)pvVar5 + 8) & 0xff;
          pvVar3 = *(void **)(*(int *)(DAT_0105eb48 + 0x34) + 0x18 + uVar10 * 0x24);
          local_58 = (float)(uint)*(byte *)(*(int *)(DAT_0105eb48 + 0x34) + uVar10 * 0x24 + 0xc);
          if (pvVar3 != (void *)0x0) {
            *(int *)((int)pvVar3 + 0x30) = *(int *)((int)pvVar3 + 0x30) + 1;
            if (iVar13 != 0) {
              *(undefined1 *)
               (*(int *)(DAT_0105eb48 + 0x34) + 0xc + (*(uint *)((int)pvVar5 + 8) & 0xff) * 0x24) =
                   6;
            }
            iVar11 = FUN_00a6c110((void *)(iVar15 + 0x1a4),iVar13);
            this_00 = (void *)(*(int *)(DAT_0105eb48 + 0x34) +
                              (*(uint *)((int)pvVar5 + 8) & 0xff) * 0x24);
            if (*(int *)((int)this_00 + 0x18) != iVar11) {
              Engine_SetResourceReference(this_00,iVar11);
            }
            local_50 = (float *)(iVar13 + 1);
            local_60 = (void *)((float)(int)local_50 * *pfVar4);
            local_5c = (float)(int)local_50 * pfVar4[1];
            LH_DrawMeshPrimitive_UVScrolled(pvVar5,(float *)&local_60,param_2);
            uVar10 = *(uint *)((int)pvVar5 + 8) & 0xff;
            if (*(void **)(*(int *)(DAT_0105eb48 + 0x34) + 0x18 + uVar10 * 0x24) != pvVar3) {
              Engine_SetResourceReference
                        ((void *)(*(int *)(DAT_0105eb48 + 0x34) + uVar10 * 0x24),(int)pvVar3);
            }
            FUN_0099b400(pvVar3);
            *(undefined1 *)
             (*(int *)(DAT_0105eb48 + 0x34) + 0xc + (*(uint *)((int)pvVar5 + 8) & 0xff) * 0x24) =
                 local_58._0_1_;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)local_4c);
      }
      *(uint *)(iVar15 + 0x1b0) = *(uint *)(iVar15 + 0x1b0) & 0xfffffffe;
      return;
    }
    cVar6 = FUN_00a51200(local_4,'\x01',-1);
    if (cVar6 != '\0') {
      LH_ApplyMeshMaterial
                ((int *)(*(int *)(DAT_0105eb48 + 0x34) + (*(uint *)((int)pvVar5 + 8) & 0xff) * 0x24)
                );
      (**(code **)(*g_pDirect3DDevice + 0x148))
                (g_pDirect3DDevice,4,local_c,0,local_1c,local_10,local_18);
    }
  }
  return;
}


//// FUNCTION FUN_00a70e20 @ 00a70e20 ////

void __thiscall FUN_00a70e20(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  float *pfVar18;
  undefined4 *puVar19;
  float10 fVar20;
  float10 fVar21;
  undefined4 *local_4c;
  int *local_48;
  float *local_44;
  int local_40;
  uint local_3c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbe66;
  local_c = ExceptionList;
  if (((*(int *)((int)this + 0xc) != 0) && (*(int *)((int)this + 0x10) == 0)) &&
     (iVar17 = *(int *)((int)this + 0x1c), iVar17 != 0)) {
    ExceptionList = &local_c;
    local_4c = operator_new(iVar17 * 6);
    local_4 = 0;
    if (local_4c == (undefined4 *)0x0) {
      local_4c = (undefined4 *)0x0;
    }
    else {
      FUN_00401380(local_4c,6,iVar17,&LAB_009d72d0);
    }
    uVar12 = *(int *)((int)this + 0x1c) * 6;
    puVar10 = *(undefined4 **)(*(int *)((int)this + 0xc) + 0x14);
    puVar19 = local_4c;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar19 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar19 = puVar19 + 1;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar19 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar19 = (undefined4 *)((int)puVar19 + 1);
    }
    iVar17 = *(int *)((int)this + 0x1c);
    local_4 = 0xffffffff;
    local_44 = operator_new(iVar17 * 0xc);
    local_4 = 1;
    if (local_44 == (float *)0x0) {
      local_44 = (float *)0x0;
    }
    else {
      FUN_00401380(local_44,0xc,iVar17,&LAB_00403370);
    }
    local_4 = 0xffffffff;
    iVar17 = 0;
    if (0 < *(int *)((int)this + 0x1c)) {
      puVar16 = (ushort *)(local_4c + 1);
      pfVar18 = local_44;
      do {
        iVar15 = *(int *)((int)this + 0x30);
        pfVar8 = (float *)((uint)puVar16[-1] * 0x20 + iVar15);
        pfVar14 = (float *)((uint)puVar16[-2] * 0x20 + iVar15);
        fVar1 = pfVar8[1];
        fVar2 = pfVar14[1];
        fVar3 = pfVar8[2];
        fVar4 = pfVar14[2];
        pfVar9 = (float *)((uint)*puVar16 * 0x20 + iVar15);
        iVar17 = iVar17 + 1;
        fVar5 = pfVar9[1];
        fVar6 = pfVar9[2];
        *pfVar18 = (*pfVar8 + *pfVar14 + *pfVar9) * 0.33333334;
        pfVar18[1] = (fVar1 + fVar2 + fVar5) * 0.33333334;
        pfVar18[2] = (fVar3 + fVar4 + fVar6) * 0.33333334;
        puVar16 = puVar16 + 3;
        pfVar18 = pfVar18 + 3;
      } while (iVar17 < *(int *)((int)this + 0x1c));
    }
    local_48 = (int *)((int)this + 0xc);
    local_40 = 0;
    do {
      fVar1 = *(float *)(param_1 + 0xcc);
      fVar2 = *(float *)(param_1 + 0xe0) * 10.0 + *(float *)(param_1 + 200);
      fVar3 = *(float *)(param_1 + 0xe0) * 5.0 + *(float *)(param_1 + 0xd0);
      fVar20 = (float10)fcos((float10)local_40 * (float10)1.5707964);
      fVar21 = (float10)fsin((float10)local_40 * (float10)1.5707964);
      fVar4 = fVar3 * 0.0;
      if (local_40 != 0) {
        puVar10 = FUN_00a51010(*(undefined4 **)((int)this + 0xc));
        *local_48 = (int)puVar10;
      }
      FUN_00a51770();
      iVar17 = 0;
      if (0 < *(int *)((int)this + 0x1c)) {
        pfVar18 = local_44 + 2;
        puVar10 = local_4c;
        do {
          fVar5 = pfVar18[-2] -
                  (float)(fVar20 * (float10)fVar2 + -fVar21 * (float10)fVar1 + (float10)fVar4);
          fVar7 = pfVar18[-1] -
                  (float)(fVar21 * (float10)fVar2 + fVar20 * (float10)fVar1 + (float10)fVar4);
          fVar6 = *pfVar18 - ((fVar1 + fVar2) * 0.0 + fVar3);
          FUN_00a51840(puVar10,fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
          iVar17 = iVar17 + 1;
          pfVar18 = pfVar18 + 3;
          puVar10 = (undefined4 *)((int)puVar10 + 6);
        } while (iVar17 < *(int *)((int)this + 0x1c));
      }
      FUN_00a516e0();
      iVar17 = 0;
      local_3c = 0;
      do {
        piVar11 = *(int **)(local_3c + DAT_010bb4ec);
        if (piVar11 != (int *)0x0) {
          iVar15 = iVar17 * 6;
          do {
            puVar10 = (undefined4 *)*piVar11;
            puVar19 = (undefined4 *)(*(int *)(*local_48 + 0x14) + iVar15);
            *puVar19 = *puVar10;
            *(undefined2 *)(puVar19 + 1) = *(undefined2 *)(puVar10 + 1);
            piVar11 = (int *)piVar11[2];
            iVar17 = iVar17 + 1;
            iVar15 = iVar15 + 6;
          } while (piVar11 != (int *)0x0);
        }
        local_3c = local_3c + 4;
      } while (local_3c < 0x1000);
      local_40 = local_40 + 1;
      local_48 = local_48 + 1;
    } while (local_40 < 4);
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  return;
}


//// FUNCTION FUN_00a71180 @ 00a71180 ////

void __fastcall FUN_00a71180(void *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 unaff_EBX;
  float *pfVar7;
  int iVar8;
  undefined4 unaff_EBP;
  float *pfVar9;
  int unaff_ESI;
  float local_88;
  float local_84;
  float local_80;
  int *local_7c;
  int local_78;
  undefined4 local_70;
  uint local_6c;
  int local_68;
  int local_64;
  undefined1 auStack_60 [36];
  undefined4 local_3c [7];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbe78;
  local_c = ExceptionList;
  if ((((*(int *)((int)param_1 + 0x2c) != 0) && (*(int *)((int)param_1 + 0x1c) != 0)) &&
      ((*(uint *)((int)param_1 + 8) & 0x40000) != 0)) &&
     (((ExceptionList = &local_c, LH_GetPrimitiveDrawInfo_Impl(param_1,&local_7c), local_68 != 0 &&
       (local_78 != 0)) &&
      ((local_7c != (int *)0x0 && (cVar3 = FUN_00a50a10(local_68), cVar3 != '\0')))))) {
    local_70 = *(undefined4 *)(local_68 + 0x24);
    pfVar4 = (float *)FUN_00a3ac00(local_7c,(int)&local_6c);
    iVar8 = DAT_0105eb48;
    if (pfVar4 != (float *)0x0) {
      pfVar9 = *(float **)(local_64 + 0x10);
      pfVar7 = (float *)(DAT_0105eb48 + 200);
      FUN_0040b670(local_3c);
      puVar5 = (undefined4 *)FUN_00411ca0((float *)(iVar8 + 0xd4),&local_88,pfVar7);
      FUN_004d5340(local_3c,puVar5);
      fVar2 = *(float *)(iVar8 + 0xd8) + *(float *)(iVar8 + 0xd8);
      fVar1 = *(float *)(iVar8 + 0xd4);
      local_80 = 1.0 / (*(float *)(iVar8 + 0xdc) + *(float *)(iVar8 + 0xdc));
      local_84 = DAT_0105c404 / fVar2;
      local_88 = DAT_0105c400 / (fVar1 + fVar1);
      FUN_009dac90(local_3c,&local_88);
      pfVar7 = *(float **)(local_64 + 0x14);
      iVar8 = 0;
      if (0 < (int)local_7c) {
        do {
          *pfVar4 = *pfVar9;
          pfVar4[1] = pfVar9[1];
          pfVar4[2] = pfVar9[2];
          FUN_0040b490(local_3c,pfVar4);
          pfVar4[3] = 1.0;
          pfVar4[4] = -NAN;
          iVar8 = iVar8 + 1;
          pfVar4[2] = 1.0 - pfVar4[2];
          pfVar4[5] = *pfVar7;
          pfVar4[6] = pfVar7[1];
          pfVar4 = pfVar4 + 7;
          pfVar9 = pfVar9 + 8;
          pfVar7 = pfVar7 + 2;
        } while (iVar8 < (int)local_7c);
      }
      FUN_00a3a4e0();
      (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x144);
      if (DAT_010bb230 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(DAT_010bb230 + 4);
      }
      (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,uVar6,0,0x1c);
      iVar8 = *(int *)(DAT_0105eb48 + 0x34);
      FUN_009910f0(&local_7c);
      local_6c = local_6c & 0xfeffffff | 0x2000000;
      local_70 = CONCAT31(local_70._1_3_,5);
      iVar8 = *(int *)(iVar8 + unaff_ESI * 0x24 + 0x1c);
      uStack_20 = 0;
      if (local_64 != iVar8) {
        Engine_SetResourceReference(&local_7c,iVar8);
      }
      LH_ApplyMeshMaterial((int *)&local_7c);
      if (DAT_01058f28 != 1) {
        DAT_01058f28 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,6,1);
      }
      if (DAT_01058f24 != 1) {
        DAT_01058f24 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,5,1);
      }
      (**(code **)(*g_pDirect3DDevice + 0x148))
                (g_pDirect3DDevice,4,local_88,0,unaff_EBP,fVar2,unaff_EBX);
      if (DAT_01058f28 != 2) {
        DAT_01058f28 = 2;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,6,2);
      }
      if (DAT_01058f24 != 2) {
        DAT_01058f24 = 2;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,5,2);
      }
      uStack_4 = 0xffffffff;
      FUN_00990ec0((int)auStack_60);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_DrawMeshPrimitive @ 00a71490 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall LH_DrawMeshPrimitive(void *param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  int local_88;
  int *local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  float local_40 [16];
  
                    /* CONFIRMED: this is the PRIMARY/BASE per-primitive draw pass - the one that
                       reads and applies a primitive's REAL material (not a throwaway), found via
                       `piVar9 = *(int*)(DAT_0105eb48+0x34) + (primitiveFlags&0xff)*0x24` where
                       DAT_0105eb48 is the globally-cached "currently rendering mesh" pointer (its
                       +0x34 = mesh's MaterialArray, +0x38-equivalent material count not read here
                       since the index comes from the primitive itself), and (param_1+8 & 0xff) is
                       the confirmed per-primitive material-index byte. Ends with
                       `LH_ApplyMeshMaterial(piVar9)` followed by `DrawIndexedPrimitive`
                       (vtable+0x148) using a triangle count from FUN_00a6c360. This is the answer
                       to "where does the base textured mesh draw happen" - chased through
                       LH_ApplyMeshMaterial's callers, then through a skinning-method dispatcher
                       (FUN_00a71a80), to land here.
                       
                       Reached via FUN_00a71a80 (the per-primitive skinning-method dispatcher: picks
                       between this hardware/default path and FUN_00a6fad0 for single vs.
                       multi-bone-weighted primitives, with FUN_00a6c920/FUN_00a6cbd0 as
                       CPU-software-skinning debug/fallback alternates gated by DAT_0105eaf4). Most
                       ordinary static (non-skeletal) mesh primitives - e.g. everything in
                       Data\meshes\p_*.msh - land here as the default case.
                       
                       Contains additional unlabeled complexity not fully decoded: an early-out to
                       FUN_00a704b0 for LOD cross-fade blending (when param_1+0x54/+0x58/+0x5c hold
                       nonzero blend factors), and a large branch (primitive flags bit 0x1000
                       family) that accumulates up to 9 "area"/lightmap positions from the current
                       mesh-context global (DAT_0105eb48+0xcc/0xd0/0xd4/0xd8/0xdc/0xe0) before
                       drawing - likely a per-room dynamic lightmap/light-probe blending system,
                       consistent with the room/window metadata subsystem found in set_*.msh files.
                       Worth a deeper pass if that thread is revisited. */
  uVar5 = *(uint *)((int)param_1 + 8);
  piVar9 = (int *)(*(int *)(DAT_0105eb48 + 0x34) + (uVar5 & 0xff) * 0x24);
  local_84 = piVar9;
  if ((((uVar5 & 0x20000) == 0) || (DAT_01050c48 == 0)) ||
     ((*(float *)(DAT_01050c48 + 0xbc) == 0.0 && (*(float *)(DAT_01050c48 + 0xc0) == 0.0)))) {
    if ((*(float *)((int)param_1 + 0x54) != 0.0) || (*(float *)((int)param_1 + 0x58) != 0.0)) {
      local_84 = *(int **)((int)param_1 + 0x54);
      local_80 = *(float *)((int)param_1 + 0x58);
      LH_DrawMeshPrimitive_UVScrolled(param_1,(float *)&local_84,0);
      return;
    }
    if ((*(float *)((int)param_1 + 0x5c) != 0.0) || ((uVar5 & 0x300000) != 0)) {
      uVar5 = uVar5 >> 0x14 & 3;
      if (uVar5 == 1) {
        *(undefined4 *)((int)param_1 + 0x5c) = DAT_0105c8fc;
      }
      else if (uVar5 == 2) {
        *(undefined4 *)((int)param_1 + 0x5c) = DAT_0105c900;
      }
      else if (uVar5 == 3) {
        *(undefined4 *)((int)param_1 + 0x5c) = DAT_0105c904;
      }
      local_84 = *(int **)((int)param_1 + 0x5c);
      local_80 = 0.0;
      LH_DrawMeshPrimitive_UVScrolled(param_1,(float *)&local_84,1);
      return;
    }
    if (((((((uVar5 & 0x1000) == 0) || (DAT_0105eae8 != '\0')) ||
          ((*(byte *)(DAT_010bb254 + 0x28) & 8) != 0)) ||
         (((*(byte *)(piVar9 + 5) & 0x40) != 0 || ((*(uint *)(DAT_0105eb48 + 0xe4) & 0x800000) != 0)
          ))) || ((*(uint *)(DAT_01050c48 + 0x9c) & 0x200) != 0)) || ((uVar5 & 0x10000) != 0)) {
      cVar4 = LH_GetPrimitiveDrawInfo(param_1,&local_70,'\0');
      if (cVar4 != '\0') {
        if (((DAT_01050c48 != 0) && ((*(uint *)(DAT_01050c48 + 0xa0) & 0xff8) != 0)) &&
           ((DAT_0105eb48 != 0 &&
            ((((*(byte *)(DAT_0105eb48 + 0xe6) & 1) != 0 && (DAT_010bb254 != 0)) &&
             ((*(uint *)(DAT_010bb254 + 0x28) & 0x400) != 0)))))) {
          FUN_00401380(local_40,0x10,4,&LAB_00a4cda0);
          local_88 = 0;
          iVar7 = 0;
          pfVar8 = local_40 + 3;
          do {
            if ((*(uint *)(DAT_01050c48 + 0xa0) >> 3 & 1 << ((byte)iVar7 & 0x1f) & 0x1ff) != 0) {
              local_7c = *(float *)(DAT_0105eb48 + 200);
              local_78 = *(float *)(DAT_0105eb48 + 0xcc);
              local_74 = *(float *)(DAT_0105eb48 + 0xd0);
              switch(iVar7) {
              case 0:
              case 1:
              case 2:
                local_78 = local_78 - (_DAT_00e69ab8 + *(float *)(DAT_0105eb48 + 0xd8));
                break;
              case 3:
              case 4:
              case 5:
                local_74 = _DAT_00e69ab8 + *(float *)(DAT_0105eb48 + 0xdc) + local_74;
                break;
              case 6:
              case 7:
              case 8:
                local_78 = _DAT_00e69ab8 + *(float *)(DAT_0105eb48 + 0xd8) + local_78;
                break;
              default:
                goto switchD_00a7170a_default;
              }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch((&DAT_00a71a70)[iVar7]) {
              case 0:
                local_7c = _DAT_00e69ab8 + *(float *)(DAT_0105eb48 + 0xd4) + local_7c;
                break;
              case 1:
                local_7c = local_7c - (_DAT_00e69ab8 + *(float *)(DAT_0105eb48 + 0xd4));
              }
switchD_00a7170a_default:
              if (local_88 < 9) {
                pfVar8[-3] = local_7c;
                pfVar8[-2] = local_78;
                pfVar8[-1] = local_74;
                local_88 = local_88 + 1;
                *pfVar8 = _DAT_00e69ab4 * *(float *)(DAT_0105eb48 + 0xe0);
                pfVar8 = pfVar8 + 4;
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 9);
          FUN_00a4cea0(&local_54,&local_70,(int *)local_40,local_88);
          (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,local_4c);
          (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,local_4c,0,uStack_50);
          uStack_60 = 0;
          piVar9 = local_84;
        }
        if ((((*(byte *)(piVar9 + 5) & 2) == 0) || (DAT_01058f0d != '\0')) || (DAT_01058f0c != '\0')
           ) {
          LH_ApplyMeshMaterial(piVar9);
          (**(code **)(*g_pDirect3DDevice + 0x148))
                    (g_pDirect3DDevice,4,uStack_60,0,local_70,uStack_64,uStack_6c);
          if (((DAT_01058f0d != '\0') || (DAT_01058f0c != '\0')) ||
             ((DAT_00e67b8c == '\0' || (*(char *)((int)piVar9 + 9) == -1)))) goto LAB_00a7188d;
        }
        FUN_00a6c6e0(&local_70);
      }
LAB_00a7188d:
      if ((*(uint *)((int)param_1 + 8) & 0x80000) == 0) {
        return;
      }
      if (DAT_01050c48 == 0) {
        return;
      }
      iVar7 = *(int *)(DAT_01050c48 + 0xd0);
      if (iVar7 == 0) {
        return;
      }
      iVar2 = *(int *)(iVar7 + 0x1a8);
      if (iVar2 == 0) {
        return;
      }
      if ((*(uint *)(iVar7 + 0x1b0) & 1) != 0) {
        return;
      }
      iVar10 = 1;
      *(uint *)(iVar7 + 0x1b0) = *(uint *)(iVar7 + 0x1b0) | 1;
      if (1 < iVar2) {
        do {
          uVar5 = *(uint *)((int)param_1 + 8) & 0xff;
          pvVar3 = *(void **)(*(int *)(DAT_0105eb48 + 0x34) + 0x18 + uVar5 * 0x24);
          local_84 = (int *)(uint)*(byte *)(*(int *)(DAT_0105eb48 + 0x34) + uVar5 * 0x24 + 0xc);
          if (pvVar3 != (void *)0x0) {
            *(int *)((int)pvVar3 + 0x30) = *(int *)((int)pvVar3 + 0x30) + 1;
            *(undefined1 *)
             (*(int *)(DAT_0105eb48 + 0x34) + 0xc + (*(uint *)((int)param_1 + 8) & 0xff) * 0x24) = 6
            ;
            iVar6 = FUN_00a6c110((void *)(iVar7 + 0x1a4),iVar10);
            pvVar1 = (void *)(*(int *)(DAT_0105eb48 + 0x34) +
                             (*(uint *)((int)param_1 + 8) & 0xff) * 0x24);
            if (*(int *)((int)pvVar1 + 0x18) != iVar6) {
              Engine_SetResourceReference(pvVar1,iVar6);
            }
            LH_DrawMeshPrimitive(param_1);
            pvVar1 = (void *)(*(int *)(DAT_0105eb48 + 0x34) +
                             (*(uint *)((int)param_1 + 8) & 0xff) * 0x24);
            if (*(void **)((int)pvVar1 + 0x18) != pvVar3) {
              Engine_SetResourceReference(pvVar1,(int)pvVar3);
            }
            FUN_0099b400(pvVar3);
            *(undefined1 *)
             (*(int *)(DAT_0105eb48 + 0x34) + 0xc + (*(uint *)((int)param_1 + 8) & 0xff) * 0x24) =
                 local_84._0_1_;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar2);
      }
      *(uint *)(iVar7 + 0x1b0) = *(uint *)(iVar7 + 0x1b0) & 0xfffffffe;
      return;
    }
  }
  else if ((((((uVar5 & 0x6000000) == 0) || ((uVar5 & 0x1000) == 0)) || (DAT_0105eae8 != '\0')) ||
           (((*(byte *)(DAT_010bb254 + 0x28) & 8) != 0 || ((*(byte *)(piVar9 + 5) & 0x40) != 0))))
          || (((*(uint *)(DAT_0105eb48 + 0xe4) & 0x800000) != 0 ||
              (((*(uint *)(DAT_01050c48 + 0x9c) & 0x200) != 0 || ((uVar5 & 0x10000) != 0)))))) {
    local_84 = (int *)(*(float *)((int)param_1 + 0x60) * *(float *)(DAT_01050c48 + 0xbc));
    local_80 = *(float *)((int)param_1 + 0x60) * *(float *)(DAT_01050c48 + 0xc0);
    LH_DrawMeshPrimitive_UVScrolled(param_1,(float *)&local_84,0);
    return;
  }
  if ((*(int *)((int)param_1 + 0x2c) != 0) && (*(int *)((int)param_1 + 0x1c) != 0)) {
    FUN_009d5f00((int)param_1,DAT_01050c48);
    return;
  }
  return;
}


//// FUNCTION LH_DispatchPrimitiveDraw @ 00a71a80 ////

void __fastcall LH_DispatchPrimitiveDraw(undefined4 *param_1)

{
                    /* CONFIRMED: per-primitive skinning-method dispatcher, called once per
                       primitive during mesh rendering. Branches on (a) whether this primitive is
                       "smooth-skinned" (primitive+0xA bit0) AND the current mesh context has bones
                       (DAT_01050c48+0xa0 bit0), then within each branch picks one of three
                       implementations based on capability/debug flags:
                         - DAT_0105eaf4 (a debug/software-rendering toggle) set -> CPU software
                       skinning: FUN_00a6c920 (single-bone-per-vertex) or FUN_00a6cbd0 (1-4 weighted
                       bones per vertex, full software skin blend)
                         - else if the current mesh context's render-mode flags (DAT_01050c48+0x9c
                       bit18) indicate a specific alternate mode -> FUN_00a6ef20(primitive,
                       isSmoothSkinned)
                         - else (the normal/default case for most gameplay) -> FUN_00a71490
                       (single/no bone) or FUN_00a6fad0 (multi-bone) - these are the real
                       hardware-path draw functions; FUN_00a71490 is the one confirmed to read and
                       apply the primitive's REAL material and issue the actual DrawIndexedPrimitive
                       call (see its own comment).
                       
                       For an ordinary static (non-skeletal) mesh, both the primitive flag and the
                       mesh-context bone flag are false, so every primitive from a file like
                       Data\meshes\p_*.msh lands in FUN_00a71490 by default. */
  if (((*(byte *)((int)param_1 + 10) & 1) == 0) || ((*(byte *)(DAT_01050c48 + 0xa0) & 1) == 0)) {
    if (DAT_0105eaf4 != '\0') {
      LH_DrawPrimitive_SoftwareSkin_Single(param_1);
      return;
    }
    if ((*(uint *)(DAT_01050c48 + 0x9c) & 0x40000) != 0) {
      FUN_00a6ef20(param_1,'\0');
      return;
    }
    LH_DrawMeshPrimitive(param_1);
    return;
  }
  if (DAT_0105eaf4 != '\0') {
    LH_DrawPrimitive_SoftwareSkin_Multi(param_1);
    return;
  }
  if ((*(uint *)(DAT_01050c48 + 0x9c) & 0x40000) != 0) {
    FUN_00a6ef20(param_1,'\x01');
    return;
  }
  FUN_00a6fad0(param_1);
  return;
}


//// FUNCTION FUN_00a71b00 @ 00a71b00 ////

void FUN_00a71b00(void)

{
  if (DAT_010c9ad0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010c9ad0);
  }
  return;
}


//// FUNCTION FUN_00a71c60 @ 00a71c60 ////

void FUN_00a71c60(void)

{
  uint uVar1;
  undefined4 *_Memory;
  size_t sVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbec0;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x40;
  ExceptionList = &local_c;
  local_2c = _malloc(0x40);
  _strncpy(local_2c,"Data\\Costume\\Datas\\InfoTextures.fas",0x23);
  local_28 = 0x23;
  local_2c[0x23] = '\0';
  local_4 = 0;
  uVar1 = FUN_009d3720(&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (uVar1 != 0) {
    _Memory = operator_new(uVar1);
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x40;
    local_2c = _malloc(0x40);
    _strncpy(local_2c,"Data\\Costume\\Datas\\InfoTextures.fas",0x23);
    local_28 = 0x23;
    local_2c[0x23] = '\0';
    local_4 = 1;
    sVar2 = FUN_009d3ca0(&local_2c,_Memory,uVar1,(undefined1 *)0x0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    DAT_010c9ad0 = _Memory;
    _Memory[2] = _Memory + 3;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a71db0 @ 00a71db0 ////

void FUN_00a71db0(void)

{
  if (DAT_010c9ad0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010c9ad0);
  }
  DAT_010c9ad0 = (void *)0x0;
  FUN_00a71c60();
  return;
}


//// FUNCTION FUN_00a71de0 @ 00a71de0 ////

undefined4 * __thiscall FUN_00a71de0(void *this,int param_1,char *param_2)

{
  void *pvVar1;
  byte *pbVar2;
  int iVar3;
  char *_Format;
  char local_100 [256];
  
  *(undefined4 *)this = 1;
  *(void **)((int)this + 4) = DAT_010c9ad4;
  DAT_010c9ad4 = this;
  _sprintf((char *)((int)this + 8),param_2);
  *(int *)((int)this + 0x28) = param_1;
  pvVar1 = operator_new(param_1 * 4);
  *(void **)((int)this + 0x2c) = pvVar1;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x28)) {
    do {
      if (iVar3 < 0xb) {
        _Format = "aa_%s_v0%d.anm";
      }
      else {
        _Format = "aa_%s_v.anm";
      }
      _sprintf(local_100,_Format,param_2,iVar3);
      pbVar2 = Anim_LoadByName(local_100);
      *(byte **)(*(int *)((int)this + 0x2c) + iVar3 * 4) = pbVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x28));
  }
  return this;
}


