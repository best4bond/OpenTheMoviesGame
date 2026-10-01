//// FUNCTION FUN_004ef370 @ 004ef370 ////

undefined4 FUN_004ef370(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  char **ppcVar8;
  char *local_40;
  undefined4 local_3c;
  uint local_38;
  char local_34 [20];
  byte *local_20;
  undefined4 local_1c;
  uint local_18;
  byte local_14 [20];
  
  local_20 = local_14;
  local_14[0] = 0;
  local_1c = 0;
  local_18 = 0x14;
  _strncpy((char *)local_20,"play",4);
  local_1c = 4;
  local_20[4] = 0;
  pbVar3 = (byte *)*param_3;
  bVar2 = false;
  pbVar6 = local_20;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_004ef3f4:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_004ef3f9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_004ef3f4;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_004ef3f9:
  uVar5 = 0;
  if (iVar4 != 0) {
    local_40 = local_34;
    local_34[0] = '\0';
    local_3c = 0;
    local_38 = 0x14;
    _strncpy(local_40,"suppressfights",0xe);
    ppcVar8 = &local_40;
    local_3c = 0xe;
    local_40[0xe] = '\0';
    bVar2 = true;
    uVar5 = FUN_00401ec0(param_3,ppcVar8);
    bVar7 = false;
    if ((char)uVar5 == '\0') goto LAB_004ef452;
  }
  bVar7 = true;
LAB_004ef452:
  if ((bVar2) && (uVar5 = local_38, 0x14 < local_38)) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (!bVar7) {
    *param_1 = 0xbf800000;
    return uVar5 & 0xffffff00;
  }
  *param_1 = 0;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


//// FUNCTION LoadSkipFrontEndSetting @ 004ef4d0 ////

void LoadSkipFrontEndSetting(void)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa858;
  local_c = ExceptionList;
  if (g_skipFrontEndInitialized == '\0') {
    local_2c = local_20;
    g_skipFrontEndInitialized = '\x01';
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"Skip Front End",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    g_skipFrontEnd = Config_GetOrCreateInt(g_configRegistryPath,&local_2c,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION ShouldSkipFrontEnd @ 004ef580 ////

bool ShouldSkipFrontEnd(void)

{
                    /* ShouldSkipFrontEnd - gates WinMain's choice between LH_MasterGameLoop()
                       (the splash/intro sequence) and Game_MainLoop() directly. Backed by a config
                       value named literally "Skip Front End" (read via Config_GetOrCreateInt,
                       default 0 = show the splash), cached in g_skipFrontEnd on first call via
                       LoadSkipFrontEndSetting(). An internal dev/config toggle, same flavor as the
                       SITT_DebugConsoleCommandDispatch command list found 2026-10-01 - not exposed
                       in any in-game UI found so far, but trivially settable if the config file/key
                       it reads from (DAT_0104c7e4 - not yet identified, looks like a config-section
                       handle) is ever located. Confirmed 2026-10-01. */
  LoadSkipFrontEndSetting();
  return g_skipFrontEnd != 0;
}


//// FUNCTION FUN_004ef5a0 @ 004ef5a0 ////

bool FUN_004ef5a0(void)

{
  LoadSkipFrontEndSetting();
  return g_skipFrontEnd == 1;
}


//// FUNCTION FUN_004ef5c0 @ 004ef5c0 ////

bool FUN_004ef5c0(void)

{
  LoadSkipFrontEndSetting();
  return g_skipFrontEnd == 2;
}


//// FUNCTION FUN_004ef5e0 @ 004ef5e0 ////

bool FUN_004ef5e0(void)

{
  LoadSkipFrontEndSetting();
  return g_skipFrontEnd != 0;
}


//// FUNCTION FUN_004ef610 @ 004ef610 ////

undefined4 * FUN_004ef610(int *param_1)

{
  int *piVar1;
  void *this;
  float *pfVar2;
  int *piVar3;
  undefined4 *this_00;
  undefined4 unaff_retaddr;
  int iVar4;
  undefined1 local_38 [8];
  void *pvStack_30;
  char *local_2c;
  uint local_28;
  undefined4 local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_00caa88e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x2e0);
  local_4 = (void *)0x0;
  if (this == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar4 = param_1[0x31];
    pfVar2 = (float *)(**(code **)(*param_1 + 0x34))(local_38);
    piVar3 = FUN_00445f60(this,pfVar2,iVar4);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ai_1char_idle.flm",0x11);
  local_28 = 0x11;
  local_2c[0x11] = '\0';
  local_4 = (void *)0x1;
  (**(code **)(*piVar3 + 0xb0))(&local_2c);
  puStack_8 = (undefined1 *)0xffffffff;
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  (**(code **)(*piVar3 + 0xe8))(param_1);
  local_4 = operator_new(0x2b4);
  pvStack_c = (void *)0x2;
  if (local_4 == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_00402380(local_4,(int)param_1,piVar3);
  }
  pvStack_c = (void *)0xffffffff;
  FUN_00401a00(this_00,unaff_retaddr);
  piVar1 = piVar3 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  this_00[0x84] = this_00[0x84] & 0xfffffffe;
  ExceptionList = pvStack_14;
  return this_00;
}


//// FUNCTION FUN_004ef760 @ 004ef760 ////

/* WARNING: Removing unreachable block (ram,0x004ef7ec) */

bool FUN_004ef760(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *_Dest;
  bool bVar4;
  byte local_14 [9];
  undefined1 local_b;
  
  _Dest = local_14;
  local_14[0] = 0;
  _strncpy((char *)_Dest,"smalltalk",9);
  local_b = 0;
  pbVar2 = (byte *)*param_3;
  do {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *_Dest;
    if (bVar1 != *_Dest) {
LAB_004ef7d9:
      iVar3 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_004ef7de;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < _Dest[1];
    if (bVar1 != _Dest[1]) goto LAB_004ef7d9;
    pbVar2 = pbVar2 + 2;
    _Dest = _Dest + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004ef7de:
  return iVar3 == 0;
}


//// FUNCTION FUN_004ef870 @ 004ef870 ////

void __fastcall FUN_004ef870(int param_1)

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


//// FUNCTION FUN_004ef8a0 @ 004ef8a0 ////

int * __thiscall FUN_004ef8a0(void *this,int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 *puVar8;
  char *pcVar9;
  float local_24;
  int *local_20;
  undefined1 local_18 [8];
  undefined1 auStack_10 [16];
  
  local_24 = 9999.0;
  local_20 = (int *)0x0;
  piVar7 = (int *)0x0;
  puVar8 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      piVar7 = (int *)puVar8[2];
      if ((piVar7 != param_1) && (iVar3 = FUN_005998e0((int)piVar7), iVar3 != 0)) {
        pcVar9 = "smalltalk";
        iVar3 = FUN_005998e0((int)piVar7);
        iVar3 = FUN_00401c30(iVar3);
        bVar2 = FUN_00430950((undefined4 *)(iVar3 + 100),pcVar9);
        if (!bVar2) {
          for (piVar4 = *(int **)((int)this + 0xcc); piVar4 != *(int **)((int)this + 0xd0);
              piVar4 = piVar4 + 1) {
            if ((int *)*piVar4 == piVar7) goto LAB_004ef995;
          }
          pfVar5 = (float *)(**(code **)(*param_1 + 0x34))(local_18);
          pfVar6 = (float *)(**(code **)(*piVar7 + 0x34))(auStack_10);
          fVar1 = SQRT((*pfVar6 - *pfVar5) * (*pfVar6 - *pfVar5) +
                       (pfVar6[1] - pfVar5[1]) * (pfVar6[1] - pfVar5[1]) +
                       (pfVar6[2] - pfVar5[2]) * (pfVar6[2] - pfVar5[2]));
          if (fVar1 < local_24) {
            local_24 = fVar1;
            local_20 = piVar7;
          }
        }
      }
LAB_004ef995:
      puVar8 = (undefined4 *)puVar8[1];
      piVar7 = local_20;
    } while (puVar8 != &DAT_0104cfd4);
  }
  return piVar7;
}


//// FUNCTION FUN_004ef9c0 @ 004ef9c0 ////

void __thiscall FUN_004ef9c0(void *this,int param_1)

{
  int *_Src;
  int *_Dst;
  
  _Dst = *(int **)((int)this + 0xcc);
  if (_Dst != *(int **)((int)this + 0xd0)) {
    _Src = _Dst + 1;
    do {
      if (*_Dst == param_1) {
        _memmove(_Dst,_Src,(*(int *)((int)this + 0xd0) - (int)_Src >> 2) << 2);
        *(int *)((int)this + 0xd0) = *(int *)((int)this + 0xd0) + -4;
      }
      else {
        _Dst = _Dst + 1;
        _Src = _Src + 1;
      }
    } while (_Dst != *(int **)((int)this + 0xd0));
  }
  return;
}


//// FUNCTION FUN_004efa20 @ 004efa20 ////

void FUN_004efa20(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0104adfc;
  if (DAT_0104adfc != (undefined4 *)0x0) {
    if ((void *)DAT_0104adfc[0x33] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)DAT_0104adfc[0x33]);
    }
    DAT_0104adfc[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    if (DAT_0104adfc != (undefined4 *)0x0) {
      (**(code **)*DAT_0104adfc)(1);
    }
  }
  DAT_0104adfc = (undefined4 *)0x0;
  return;
}


//// FUNCTION FUN_004efa70 @ 004efa70 ////

undefined4 * __fastcall FUN_004efa70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00caa8a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008ab900(param_1);
  *param_1 = &PTR_FUN_00d203e8;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004efad0 @ 004efad0 ////

undefined4 * __thiscall FUN_004efad0(void *this,byte param_1)

{
  FUN_004efaf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004efaf0 @ 004efaf0 ////

void __fastcall FUN_004efaf0(undefined4 *param_1)

{
  if ((void *)param_1[0x33] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x33]);
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_008ab6b0(param_1);
  return;
}


//// FUNCTION FUN_004efb30 @ 004efb30 ////

void __thiscall FUN_004efb30(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0xd0) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0xd4) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 0xd0);
    *puVar2 = param_1;
    *(undefined4 **)((int)this + 0xd0) = puVar2 + 1;
    return;
  }
  FUN_004578c0((void *)((int)this + 200),*(undefined4 **)((int)this + 0xd0),1,&param_1);
  return;
}


//// FUNCTION FUN_004efb90 @ 004efb90 ////

void FUN_004efb90(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa8cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xd8);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_004efa70(puVar1);
  }
  DAT_0104adfc = puVar1;
  if ((void *)puVar1[0x33] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)puVar1[0x33]);
  }
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004efc10 @ 004efc10 ////

undefined4 * __thiscall FUN_004efc10(void *this,int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *this_00;
  undefined4 *puVar2;
  int *this_01;
  void *this_02;
  int *piVar3;
  void *unaff_EBP;
  undefined4 *puVar4;
  void *local_6c;
  undefined1 *local_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 uStack_5c;
  int iStack_58;
  char *pcStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  char acStack_48 [20];
  void *pvStack_34;
  uint local_2c [6];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00caa911;
  local_c = ExceptionList;
  local_68 = &stack0xffffff80;
  ExceptionList = &local_c;
  local_6c = this;
  bVar1 = FUN_0059c510((int)param_1);
  if (bVar1) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  this_00 = FUN_004ef8a0(this,param_1);
  puVar4 = (undefined4 *)0x0;
  if (this_00 != (int *)0x0) {
    FUN_00465550(&local_60,this_00,param_1);
    puVar2 = operator_new(0x31c);
    local_4 = (undefined4 *)0x0;
    if (puVar2 == (undefined4 *)0x0) {
      this_01 = (int *)0x0;
    }
    else {
      this_01 = FUN_004f1360(puVar2);
    }
    local_4 = (undefined4 *)0xffffffff;
    this_02 = operator_new(0x2b4);
    local_4 = (undefined4 *)0x1;
    if (this_02 != (void *)0x0) {
      puVar4 = FUN_00402380(this_02,(int)param_1,this_01);
    }
    local_4 = (undefined4 *)0xffffffff;
    FUN_00401a00(puVar4,param_2);
    puVar4[0x84] = puVar4[0x84] & 0xfffffffe;
    local_68 = operator_new(0x2b4);
    local_4 = (undefined4 *)0x2;
    if (local_68 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_00402380(local_68,(int)this_00,this_01);
    }
    local_4 = (undefined4 *)0xffffffff;
    FUN_00401a00(puVar4,param_2);
    puVar4[0x84] = puVar4[0x84] & 0xfffffffe;
    FUN_004f10e0(local_2c,param_1,this_00);
    local_4 = (undefined4 *)0x3;
    (**(code **)(*this_01 + 0xb0))();
    uStack_5c = uStack_64;
    iStack_58 = local_60;
    pcStack_54 = (char *)0x0;
    (**(code **)(*this_01 + 0x2c))(&uStack_5c);
    piVar3 = (int *)FUN_00ace790(param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
    pcStack_54 = acStack_48;
    acStack_48[0] = '\0';
    uStack_50 = 0;
    uStack_4c = 0x14;
    _strncpy(pcStack_54,"ai_chemistry",0xc);
    uStack_50 = 0xc;
    pcStack_54[0xc] = '\0';
    local_c._0_1_ = 4;
    puVar2 = FUN_0042e9a0(&local_6c,piVar3,this_00);
    FUN_00404790(this_01,&pcStack_54,*puVar2);
    local_c = (void *)CONCAT31(local_c._1_3_,3);
    if (uStack_4c < 0x15) {
      FUN_004462a0(this_01,0.0);
      piVar3 = this_01 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*this_01)(1);
      }
      TMCharacter_AddAction(this_00,(int)puVar4);
      FUN_004efb30(unaff_EBP,this_00);
      FUN_004efb30(unaff_EBP,param_1);
      if (local_2c[0] < 0x15) {
        ExceptionList = pvStack_14;
        return local_4;
      }
                    /* WARNING: Subroutine does not return */
      _free(pvStack_34);
    }
                    /* WARNING: Subroutine does not return */
    _free(pcStack_54);
  }
  puVar4 = FUN_004ef610(param_1);
  ExceptionList = local_c;
  return puVar4;
}


//// FUNCTION FUN_004eff10 @ 004eff10 ////

void __fastcall FUN_004eff10(int *param_1)

{
  float local_8 [2];
  
  if ((char)param_1[0xc5] != '\0') {
    FUN_009840b0(local_8,param_1 + 0x40);
    FUN_0046d8f0(local_8,param_1 + 0xaf,0,0x10,0);
    *(undefined1 *)(param_1 + 0xc5) = 0;
  }
  FUN_00404350(param_1);
  return;
}


//// FUNCTION FUN_004eff90 @ 004eff90 ////

void __fastcall FUN_004eff90(int *param_1)

{
  FUN_00446360(param_1);
  param_1[0xc6] = param_1[0xc6] + -1;
  return;
}


//// FUNCTION FUN_004effa0 @ 004effa0 ////

void FUN_004effa0(void)

{
  return;
}


//// FUNCTION FUN_004effb0 @ 004effb0 ////

uint __fastcall FUN_004effb0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  undefined1 auStack_10 [4];
  undefined1 local_c [12];
  undefined2 uVar9;
  
  iVar6 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x34))();
  fVar1 = *(float *)(iVar6 + 4) - *(float *)(param_1 + 0x104);
  fVar2 = *(float *)(iVar6 + 8) - *(float *)(param_1 + 0x108);
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x310) + 0x34))(auStack_10);
  fVar3 = *pfVar7 - *(float *)(param_1 + 0x100);
  fVar5 = pfVar7[1] - *(float *)(param_1 + 0x104);
  fVar4 = pfVar7[2] - *(float *)(param_1 + 0x108);
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2 + (float)local_c * (float)local_c;
  uVar9 = (undefined2)((uint)pfVar7 >> 0x10);
  uVar8 = CONCAT22(uVar9,(ushort)(fVar1 < 4.0) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 4.0) << 0xe);
  if (fVar1 >= 4.0) {
    fVar1 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
    uVar8 = CONCAT22(uVar9,(ushort)(fVar1 < 4.0) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 4.0) << 0xe);
    if (fVar1 >= 4.0) {
      return uVar8;
    }
  }
  return CONCAT31((int3)(uVar8 >> 8),1);
}


//// FUNCTION FUN_004f0080 @ 004f0080 ////

uint __fastcall FUN_004f0080(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_EAX;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float unaff_EDI;
  undefined1 local_18 [8];
  undefined1 auStack_10 [16];
  
  uVar7 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_1 + 0x2e0));
  if (*(char *)(param_1 + 0x2e0) == '\0') {
    piVar1 = *(int **)(param_1 + 0x310);
    iVar8 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x34))(local_18);
    fVar2 = *(float *)(iVar8 + 4) - *(float *)(param_1 + 0x104);
    fVar3 = *(float *)(iVar8 + 8) - *(float *)(param_1 + 0x108);
    pfVar9 = (float *)(**(code **)(*piVar1 + 0x34))(auStack_10);
    fVar4 = *pfVar9 - *(float *)(param_1 + 0x100);
    fVar6 = pfVar9[1] - *(float *)(param_1 + 0x104);
    fVar5 = pfVar9[2] - *(float *)(param_1 + 0x108);
    fVar2 = fVar2 * fVar2 +
            fVar3 * fVar3 + unaff_EDI * unaff_EDI + fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5;
    uVar7 = CONCAT22((short)((uint)pfVar9 >> 0x10),
                     (ushort)(fVar2 < 16.0) << 8 | (ushort)NAN(fVar2) << 10 |
                     (ushort)(fVar2 == 16.0) << 0xe);
    if (fVar2 < 16.0 || (fVar2 == 16.0) != 0) {
      return CONCAT31((int3)(uVar7 >> 8),1);
    }
  }
  return uVar7 & 0xffffff00;
}


//// FUNCTION FUN_004f0150 @ 004f0150 ////

undefined4 __cdecl FUN_004f0150(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x4a0) == 0) && (*(int *)(param_2 + 0x4a0) == 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x4a0) == 1) && (*(int *)(param_2 + 0x4a0) == 1)) {
    return 0;
  }
  return 2;
}


//// FUNCTION FUN_004f0190 @ 004f0190 ////

void __thiscall FUN_004f0190(void *this,char *param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  double dVar3;
  char local_40 [64];
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_40 + -(int)param_1)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = _strtok(local_40,",");
  dVar3 = _atof(pcVar2);
  *(float *)this = (float)dVar3;
  pcVar2 = _strtok((char *)0x0,",");
  dVar3 = _atof(pcVar2);
  *(float *)((int)this + 4) = (float)dVar3;
  pcVar2 = _strtok((char *)0x0,",");
  dVar3 = _atof(pcVar2);
  *(float *)((int)this + 8) = (float)dVar3;
  pcVar2 = _strtok((char *)0x0,",");
  dVar3 = _atof(pcVar2);
  *(float *)((int)this + 0xc) = (float)dVar3;
  pcVar2 = _strtok((char *)0x0,",");
  dVar3 = _atof(pcVar2);
  *(float *)((int)this + 0x10) = (float)dVar3;
  pcVar2 = _strtok((char *)0x0,",");
  dVar3 = _atof(pcVar2);
  *(float *)((int)this + 0x14) = (float)dVar3;
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004f0250 @ 004f0250 ////

void __fastcall FUN_004f0250(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 0x2e0) == '\0') || (*(char *)(param_1 + 0x2e1) == '\0')) {
    uVar3 = FUN_004effb0(param_1);
    if ((char)uVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x2e1) = 1;
      *(undefined1 *)(param_1 + 0x2e0) = 1;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1b4) + 4) + 8);
    cVar2 = FUN_00401bd0(*(int *)(*(int *)(param_1 + 0x1b4) + 8));
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x2e1) = 1;
      *(undefined1 *)(param_1 + 0x2e0) = 1;
    }
    cVar2 = FUN_00401bd0(iVar1);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x2e1) = 1;
      *(undefined1 *)(param_1 + 0x2e0) = 1;
    }
  }
  return;
}


//// FUNCTION FUN_004f02d0 @ 004f02d0 ////

undefined4 * __cdecl FUN_004f02d0(undefined4 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    FUN_00401de0(param_1,"LOT",0xffffffff);
    return param_1;
  case 1:
    FUN_00401de0(param_1,"BARNORMAL",0xffffffff);
    return param_1;
  case 2:
    FUN_00401de0(param_1,"BARVIP",0xffffffff);
    return param_1;
  case 3:
    FUN_00401de0(param_1,"CANTEENNORMAL",0xffffffff);
    return param_1;
  case 4:
    FUN_00401de0(param_1,"CANTEENVIP",0xffffffff);
    return param_1;
  case 5:
    FUN_00401de0(param_1,"TRAILER",0xffffffff);
    return param_1;
  case 6:
    FUN_00401de0(param_1,"REHEARSE",0xffffffff);
    return param_1;
  case 7:
    FUN_00401de0(param_1,"FILM",0xffffffff);
    return param_1;
  case 8:
    FUN_00401de0(param_1,"CASTING",0xffffffff);
    return param_1;
  default:
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    *param_1 = param_1 + 3;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"Unknown",7);
    return param_1;
  }
}


//// FUNCTION FUN_004f0410 @ 004f0410 ////

undefined4 * __cdecl FUN_004f0410(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_2) {
  case 0:
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar1 = FUN_00ace02d((short *)&DAT_00d20534);
    FUN_004036d0(param_1,L"LOT",uVar1);
    return param_1;
  case 1:
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar1 = FUN_00ace02d(L"BARNORMAL");
    FUN_004036d0(param_1,L"BARNORMAL",uVar1);
    return param_1;
  case 2:
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar1 = FUN_00ace02d(L"BARVIP");
    FUN_004036d0(param_1,L"BARVIP",uVar1);
    return param_1;
  case 3:
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar1 = FUN_00ace02d(L"CANTEENNORMAL");
    FUN_004036d0(param_1,L"CANTEENNORMAL",uVar1);
    return param_1;
  case 4:
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar1 = FUN_00ace02d(L"CANTEENVIP");
    FUN_004036d0(param_1,L"CANTEENVIP",uVar1);
    return param_1;
  case 5:
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar1 = FUN_00ace02d(L"TRAILER");
    FUN_004036d0(param_1,L"TRAILER",uVar1);
    return param_1;
  case 6:
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar1 = FUN_00ace02d(L"REHEARSE");
    FUN_004036d0(param_1,L"REHEARSE",uVar1);
    return param_1;
  case 7:
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar1 = FUN_00ace02d(L"FILM");
    FUN_004036d0(param_1,L"FILM",uVar1);
    return param_1;
  case 8:
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar1 = FUN_00ace02d(L"CASTING");
    FUN_004036d0(param_1,L"CASTING",uVar1);
    return param_1;
  default:
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar1 = FUN_00ace02d(L"Unknown");
    FUN_004036d0(param_1,L"Unknown",uVar1);
    return param_1;
  }
}


//// FUNCTION FUN_004f0670 @ 004f0670 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f0670(void)

{
  char cVar1;
  char *_Source;
  undefined4 uVar2;
  char *pcVar3;
  uint _Count;
  undefined *this;
  float10 fVar4;
  char *in_stack_fffffd40;
  undefined4 in_stack_fffffd44;
  uint uVar5;
  char *local_288;
  undefined4 local_284;
  uint local_280;
  char local_27c [20];
  char **local_268;
  char *local_264;
  uint local_260;
  uint local_25c;
  char local_258 [20];
  char *local_244;
  undefined4 local_240;
  uint local_23c;
  char local_238 [20];
  char *local_224;
  undefined4 local_220;
  uint local_21c;
  char local_218 [20];
  char *local_204;
  undefined4 local_200;
  uint local_1fc;
  char local_1f8 [20];
  char *local_1e4;
  undefined4 local_1e0;
  uint local_1dc;
  char local_1d8 [20];
  char *local_1c4;
  undefined4 local_1c0;
  uint local_1bc;
  char local_1b8 [20];
  char *local_1a4;
  undefined4 local_1a0;
  uint local_19c;
  char local_198 [20];
  char *local_184;
  undefined4 local_180;
  uint local_17c;
  char local_178 [20];
  char *local_164;
  undefined4 local_160;
  uint local_15c;
  char local_158 [20];
  char *local_144;
  undefined4 local_140;
  uint local_13c;
  char *local_124;
  undefined4 local_120;
  uint local_11c;
  char *local_104;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa9fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00559fb0(local_e4);
  local_264 = local_258;
  local_4 = 0;
  local_258[0] = '\0';
  local_260 = 0;
  local_25c = 0x14;
  _strncpy(local_264,"social",6);
  local_260 = 6;
  local_264[6] = '\0';
  local_4._0_1_ = 1;
  FUN_0055be10(local_e4,&local_264,'\0');
  local_4._0_1_ = 0;
  if (0x14 < local_25c) {
                    /* WARNING: Subroutine does not return */
    _free(local_264);
  }
  uVar5 = 0x4f0731;
  _eh_vector_constructor_iterator_(&local_144,0x20,3,FUN_00401dc0,FUN_00401490);
  if (local_13c < 3) {
    if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
      _free(local_144);
    }
    local_13c = 0x20;
    local_144 = _malloc(0x20);
  }
  _strncpy(local_144,"FF",2);
  local_140 = 2;
  local_144[2] = '\0';
  if (local_11c < 3) {
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_11c = 0x20;
    local_124 = _malloc(0x20);
  }
  _strncpy(local_124,"MM",2);
  local_120 = 2;
  local_124[2] = '\0';
  if (local_fc < 4) {
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104);
    }
    local_fc = 0x20;
    local_104 = _malloc(0x20);
  }
  _strncpy(local_104,"MIX",3);
  local_268 = &local_144;
  local_100 = 3;
  local_104[3] = '\0';
  this = &DAT_0104ae18;
  do {
    _Source = *local_268;
    local_264 = local_258;
    local_258[0] = '\0';
    local_260 = 0;
    local_25c = 0x14;
    pcVar3 = _Source;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _Count = (int)pcVar3 - (int)(_Source + 1);
    if (0x13 < _Count) {
      local_25c = _Count + 0x20 & 0xffffffe0;
      local_264 = _malloc(local_25c);
    }
    _strncpy(local_264,_Source,_Count);
    local_264[_Count] = '\0';
    local_4._0_1_ = 3;
    local_260 = _Count;
    uVar2 = FUN_00558a50(local_e4,&local_264,(undefined4 *)0x1);
    if (0x14 < local_25c) {
                    /* WARNING: Subroutine does not return */
      _free(local_264);
    }
    if ((char)uVar2 != '\0') {
      local_184 = local_178;
      local_178[0] = '\0';
      local_180 = 0;
      local_17c = 0x14;
      _strncpy(local_184,"LOT",3);
      local_180 = 3;
      local_184[3] = '\0';
      local_4._0_1_ = 4;
      FUN_005584e0(local_e4,(undefined4 *)&stack0xfffffd40,&local_184);
      FUN_004f0190(this + -0x18,in_stack_fffffd40,in_stack_fffffd44,uVar5);
      if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
        _free(local_184);
      }
      local_1a4 = local_198;
      local_198[0] = '\0';
      local_1a0 = 0;
      local_19c = 0x14;
      _strncpy(local_1a4,"BARNORMAL",9);
      local_1a0 = 9;
      local_1a4[9] = '\0';
      local_4._0_1_ = 5;
      FUN_005584e0(local_e4,(undefined4 *)&stack0xfffffd40,&local_1a4);
      FUN_004f0190(this,in_stack_fffffd40,in_stack_fffffd44,uVar5);
      if (0x14 < local_19c) {
                    /* WARNING: Subroutine does not return */
        _free(local_1a4);
      }
      local_204 = local_1f8;
      local_1f8[0] = '\0';
      local_200 = 0;
      local_1fc = 0x14;
      _strncpy(local_204,"BARVIP",6);
      local_200 = 6;
      local_204[6] = '\0';
      local_4._0_1_ = 6;
      FUN_005584e0(local_e4,(undefined4 *)&stack0xfffffd40,&local_204);
      FUN_004f0190(this + 0x18,in_stack_fffffd40,in_stack_fffffd44,uVar5);
      if (0x14 < local_1fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_204);
      }
      local_244 = local_238;
      local_238[0] = '\0';
      local_240 = 0;
      local_23c = 0x14;
      _strncpy(local_244,"CANTEENNORMAL",0xd);
      local_240 = 0xd;
      local_244[0xd] = '\0';
      local_4._0_1_ = 7;
      FUN_005584e0(local_e4,(undefined4 *)&stack0xfffffd40,&local_244);
      FUN_004f0190(this + 0x30,in_stack_fffffd40,in_stack_fffffd44,uVar5);
      if (0x14 < local_23c) {
                    /* WARNING: Subroutine does not return */
        _free(local_244);
      }
      local_1c4 = local_1b8;
      local_1b8[0] = '\0';
      local_1c0 = 0;
      local_1bc = 0x14;
      _strncpy(local_1c4,"CANTEENVIP",10);
      local_1c0 = 10;
      local_1c4[10] = '\0';
      local_4._0_1_ = 8;
      FUN_005584e0(local_e4,(undefined4 *)&stack0xfffffd40,&local_1c4);
      FUN_004f0190(this + 0x48,in_stack_fffffd40,in_stack_fffffd44,uVar5);
      if (0x14 < local_1bc) {
                    /* WARNING: Subroutine does not return */
        _free(local_1c4);
      }
      local_164 = local_158;
      local_158[0] = '\0';
      local_160 = 0;
      local_15c = 0x14;
      _strncpy(local_164,"TRAILER",7);
      local_160 = 7;
      local_164[7] = '\0';
      local_4._0_1_ = 9;
      FUN_005584e0(local_e4,(undefined4 *)&stack0xfffffd40,&local_164);
      FUN_004f0190(this + 0x60,in_stack_fffffd40,in_stack_fffffd44,uVar5);
      if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
        _free(local_164);
      }
      local_224 = local_218;
      local_218[0] = '\0';
      local_220 = 0;
      local_21c = 0x14;
      _strncpy(local_224,"REHEARSE",8);
      local_220 = 8;
      local_224[8] = '\0';
      local_4._0_1_ = 10;
      FUN_005584e0(local_e4,(undefined4 *)&stack0xfffffd40,&local_224);
      FUN_004f0190(this + 0x78,in_stack_fffffd40,in_stack_fffffd44,uVar5);
      if (0x14 < local_21c) {
                    /* WARNING: Subroutine does not return */
        _free(local_224);
      }
      local_1e4 = local_1d8;
      local_1d8[0] = '\0';
      local_1e0 = 0;
      local_1dc = 0x14;
      _strncpy(local_1e4,"FILM",4);
      local_1e0 = 4;
      local_1e4[4] = '\0';
      local_4._0_1_ = 0xb;
      FUN_005584e0(local_e4,(undefined4 *)&stack0xfffffd40,&local_1e4);
      FUN_004f0190(this + 0x90,in_stack_fffffd40,in_stack_fffffd44,uVar5);
      if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
        _free(local_1e4);
      }
      local_288 = local_27c;
      local_27c[0] = '\0';
      local_284 = 0;
      local_280 = 0x14;
      _strncpy(local_288,"CASTING",7);
      local_284 = 7;
      local_288[7] = '\0';
      local_4._0_1_ = 0xc;
      FUN_005584e0(local_e4,(undefined4 *)&stack0xfffffd40,&local_288);
      FUN_004f0190(this + 0xa8,in_stack_fffffd40,in_stack_fffffd44,uVar5);
      if (0x14 < local_280) {
                    /* WARNING: Subroutine does not return */
        _free(local_288);
      }
    }
    local_268 = local_268 + 8;
    this = this + 0xd8;
    if (0x104b09f < (int)this) {
      local_288 = local_27c;
      local_27c[0] = '\0';
      local_284 = 0;
      local_280 = 0x14;
      _strncpy(local_288,"blocks",6);
      local_284 = 6;
      local_288[6] = '\0';
      local_4._0_1_ = 0xd;
      uVar2 = FUN_00558a50(local_e4,&local_288,(undefined4 *)0x1);
      if (0x14 < local_280) {
                    /* WARNING: Subroutine does not return */
        _free(local_288);
      }
      if ((char)uVar2 != '\0') {
        local_288 = local_27c;
        local_27c[0] = '\0';
        local_284 = 0;
        local_280 = 0x14;
        _strncpy(local_288,"RelBlockFoodAddict",0x12);
        local_284 = 0x12;
        local_288[0x12] = '\0';
        local_4._0_1_ = 0xe;
        fVar4 = FUN_00558610(local_e4,&local_288,0.0);
        _DAT_0104b098 = (float)fVar4;
        if (0x14 < local_280) {
                    /* WARNING: Subroutine does not return */
          _free(local_288);
        }
        local_288 = local_27c;
        local_27c[0] = '\0';
        local_284 = 0;
        local_280 = 0x14;
        _strncpy(local_288,"RelBlockDrinkAddict",0x13);
        local_284 = 0x13;
        local_288[0x13] = '\0';
        local_4._0_1_ = 0xf;
        fVar4 = FUN_00558610(local_e4,&local_288,0.0);
        _DAT_0104b094 = (float)fVar4;
        if (0x14 < local_280) {
                    /* WARNING: Subroutine does not return */
          _free(local_288);
        }
        local_288 = local_27c;
        local_27c[0] = '\0';
        local_284 = 0;
        local_280 = 0x14;
        _strncpy(local_288,"RelBlockHighStress",0x12);
        local_284 = 0x12;
        local_288[0x12] = '\0';
        local_4._0_1_ = 0x10;
        fVar4 = FUN_00558610(local_e4,&local_288,0.0);
        _DAT_0104b090 = (float)fVar4;
        if (0x14 < local_280) {
                    /* WARNING: Subroutine does not return */
          _free(local_288);
        }
        local_288 = local_27c;
        local_27c[0] = '\0';
        local_284 = 0;
        local_280 = 0x20;
        local_288 = _malloc(0x20);
        _strncpy(local_288,"RelBlockUnhappySalary",0x15);
        local_284 = 0x15;
        local_288[0x15] = '\0';
        local_4._0_1_ = 0x11;
        fVar4 = FUN_00558610(local_e4,&local_288,0.0);
        _DAT_0104b08c = (float)fVar4;
        if (0x14 < local_280) {
                    /* WARNING: Subroutine does not return */
          _free(local_288);
        }
        local_288 = local_27c;
        local_27c[0] = '\0';
        local_284 = 0;
        local_280 = 0x20;
        local_288 = _malloc(0x20);
        _strncpy(local_288,"RelBlockUnhappyImage",0x14);
        local_284 = 0x14;
        local_288[0x14] = '\0';
        local_4._0_1_ = 0x12;
        fVar4 = FUN_00558610(local_e4,&local_288,0.0);
        _DAT_0104b088 = (float)fVar4;
        if (0x14 < local_280) {
                    /* WARNING: Subroutine does not return */
          _free(local_288);
        }
      }
      local_4 = (uint)local_4._1_3_ << 8;
      _eh_vector_destructor_iterator_(&local_144,0x20,3,FUN_00401490);
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_004f10e0 @ 004f10e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_004f10e0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_2;
  puStack_8 = &LAB_00caaa18;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar3 = FUN_00598ee0((int)param_2);
  piVar2 = param_3;
  if (((char)uVar3 == '\0') || (uVar3 = FUN_00598ee0((int)param_3), (char)uVar3 == '\0')) {
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"ai_2char_agree.flm",0x12);
  }
  else {
    uVar4 = FUN_0042edc0(piVar1,piVar2);
    if ((char)uVar4 == '\0') {
      pfVar7 = (float *)FUN_0042e9a0(&param_2,piVar1,piVar2);
      param_2 = (int *)*pfVar7;
      if (_DAT_00e51ca8 <= (float)param_2) {
        if (0.3 <= (float)param_2) {
          if (0.4 <= (float)param_2) {
            if (0.8 <= (float)param_2) {
              pcVar9 = "ai_2char_friends.flm";
            }
            else {
              pcVar9 = "ai_2char_agree.flm";
            }
          }
          else {
            pcVar9 = "ai_2char_disagree.flm";
          }
        }
        else {
          pcVar9 = "ai_2char_argue.flm";
        }
        FUN_00403e20(&local_4c,pcVar9);
      }
      else {
        puVar8 = FUN_008b7180(local_2c,(int)piVar1,(int)piVar2);
        FUN_004015d0(&local_4c,(char *)*puVar8,puVar8[1]);
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        param_2 = (int *)&stack0xffffff9c;
        iVar5 = FUN_0059c530((int)piVar1);
        param_2 = (int *)&stack0xffffff9c;
        iVar6 = FUN_0059c530((int)piVar2);
        if (iVar5 != 0) {
          *(undefined1 *)(iVar5 + 0x158) = 1;
        }
        if (iVar6 != 0) {
          *(undefined1 *)(iVar6 + 0x158) = 1;
        }
      }
    }
    else {
      if (local_44 < 0x14) {
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        local_44 = 0x20;
        local_4c = _malloc(0x20);
      }
      _strncpy(local_4c,"ai_2char_lovers.flm",0x13);
      local_48 = 0x13;
      param_2 = (int *)&stack0xffffff9c;
      local_4c[0x13] = '\0';
      iVar5 = FUN_0059c530((int)piVar1);
      param_2 = (int *)&stack0xffffff9c;
      iVar6 = FUN_0059c530((int)piVar2);
      if (iVar5 != 0) {
        *(undefined1 *)(iVar5 + 0x159) = 1;
      }
      if (iVar6 != 0) {
        *(undefined1 *)(iVar6 + 0x159) = 1;
      }
    }
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,local_4c,local_48);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004f1360 @ 004f1360 ////

undefined4 * __fastcall FUN_004f1360(undefined4 *param_1)

{
  float10 fVar1;
  float local_c [3];
  
  fVar1 = FUN_004012c0(0.0);
  local_c[0] = 0.0;
  local_c[1] = 0.0;
  local_c[2] = 0.0;
  FUN_00445f60(param_1,local_c,(float)fVar1);
  *param_1 = &PTR_FUN_00d20674;
  param_1[0x1e] = &PTR_LAB_00d20654;
  param_1[0x28] = &PTR_FUN_00d2063c;
  param_1[0xbc] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbe] = 0;
  param_1[0xb9] = &PTR_FUN_00d165ac;
  param_1[0xbc] = param_1 + 0xb9;
  param_1[0xc2] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc4] = 0;
  param_1[0xc2] = param_1 + 0xbf;
  param_1[0xbf] = &PTR_FUN_00d165ac;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)((int)param_1 + 0x2e1) = 0;
  param_1[0xc6] = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  param_1[0xaf] = 0x3fc00000;
  return param_1;
}


//// FUNCTION FUN_004f1430 @ 004f1430 ////

void __fastcall FUN_004f1430(undefined4 *param_1)

{
  float local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caaa54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d20674;
  param_1[0x1e] = &PTR_LAB_00d20654;
  param_1[0x28] = &PTR_FUN_00d2063c;
  local_4 = 2;
  if (*(char *)(param_1 + 0xc5) != '\0') {
    FUN_009840b0(local_14,param_1 + 0x40);
    FUN_0046d8f0(local_14,param_1 + 0xaf,0,0x10,0);
    *(undefined1 *)(param_1 + 0xc5) = 0;
  }
  param_1[0xbf] = &PTR_FUN_00d165ac;
  if ((undefined4 *)param_1[0xc1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xc1] = param_1[0xc0];
  }
  if (param_1[0xc0] != 0) {
    *(undefined4 *)(param_1[0xc0] + 4) = param_1[0xc1];
  }
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc4] = 0;
  if ((undefined4 *)param_1[0xc1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xc1] = param_1[0xc0];
  }
  if (param_1[0xc0] != 0) {
    *(undefined4 *)(param_1[0xc0] + 4) = param_1[0xc1];
  }
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xb9] = &PTR_FUN_00d165ac;
  if ((undefined4 *)param_1[0xbb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xbb] = param_1[0xba];
  }
  if (param_1[0xba] != 0) {
    *(undefined4 *)(param_1[0xba] + 4) = param_1[0xbb];
  }
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbe] = 0;
  if ((undefined4 *)param_1[0xbb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xbb] = param_1[0xba];
  }
  if (param_1[0xba] != 0) {
    *(undefined4 *)(param_1[0xba] + 4) = param_1[0xbb];
  }
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00d19d34;
  param_1[0x1e] = &PTR_LAB_00d19d10;
  param_1[0x28] = &PTR_FUN_00d19cf8;
  FUN_004064d0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f15d0 @ 004f15d0 ////

/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_004f15d0(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  int unaff_EBX;
  float10 fVar12;
  int iStack_50;
  float afStack_4c [3];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float *pfStack_8;
  
  iVar8 = *(int *)((int)this + 0x1b4);
  uVar11 = 0;
  if (iVar8 != (int)this + 0x1c0) {
    do {
      iVar8 = *(int *)(iVar8 + 4);
      uVar11 = uVar11 + 1;
    } while (iVar8 != (int)this + 0x1c0);
    if (1 < uVar11) {
      if (*(int *)((int)this + 0x2f8) == 0) {
        iVar8 = *(int *)((int)this + 0x1b4);
        iVar5 = *(int *)(iVar8 + 8);
        piVar1 = (int *)((int)this + 0x2e4);
        (**(code **)(*(int *)((int)this + 0x2e4) + 4))();
        *(undefined4 *)((int)this + 0x2f8) = *(undefined4 *)(iVar5 + 300);
        (**(code **)*piVar1)();
        iVar8 = *(int *)(*(int *)(iVar8 + 4) + 8);
        piVar2 = (int *)((int)this + 0x2fc);
        (**(code **)(*(int *)((int)this + 0x2fc) + 4))();
        *(undefined4 *)((int)this + 0x310) = *(undefined4 *)(iVar8 + 300);
        (**(code **)*piVar2)();
        iStack_50 = 0;
        fStack_3c = 0.0;
        (**(code **)(*(int *)this + 0xdc))(*(undefined4 *)((int)this + 0x2f8),&iStack_50,&fStack_3c)
        ;
        if (iStack_50 == 1) {
          uVar6 = *(undefined4 *)((int)this + 0x2f8);
          (**(code **)(*piVar1 + 4))();
          *(undefined4 *)((int)this + 0x2f8) = *(undefined4 *)((int)this + 0x310);
          (**(code **)*piVar1)();
          (**(code **)(*piVar2 + 4))();
          *(undefined4 *)((int)this + 0x310) = uVar6;
          (**(code **)*piVar2)();
        }
      }
      FUN_004f0250((int)this);
      uVar11 = FUN_004f0080((int)this);
      if ((char)uVar11 != '\0') {
        piVar1 = *(int **)((int)this + 0x310);
        pfVar9 = (float *)(**(code **)(**(int **)((int)this + 0x2f8) + 0x34))(&fStack_24);
        pfVar10 = (float *)(**(code **)(*piVar1 + 0x34))(&fStack_1c);
        fStack_34 = pfVar10[2] - pfVar9[2];
        fStack_38 = pfVar10[1] - pfVar9[1];
        fStack_3c = *pfVar10 - *pfVar9;
        FUN_009840b0(&iStack_50,&fStack_3c);
        pfVar9 = FUN_00984190(&iStack_50,&fStack_3c);
        fVar12 = FUN_004012c0(*pfVar9);
        FUN_004462a0(this,(float)fVar12);
      }
      if ((*(char *)((int)this + 0x2e1) == '\0') && (*(int *)((int)this + 0x318) < 1)) {
        if (*(char *)((int)this + 0x314) != '\0') {
          FUN_009840b0(&fStack_3c,(undefined4 *)((int)this + 0x100));
          FUN_0046d8f0(&fStack_3c,(int)this + 700,0,0x10,0);
        }
        *(undefined1 *)((int)this + 0x314) = 0;
        pfVar9 = FUN_00465550((int *)&fStack_3c,*(undefined4 *)((int)this + 0x2f8),
                              *(int **)((int)this + 0x310));
        fStack_24 = *pfVar9;
        fStack_20 = pfVar9[1];
        fStack_1c = 0.0;
        (**(code **)(*(int *)this + 0x2c))(&fStack_24);
        *(undefined4 *)((int)this + 0x318) = 0x14;
        FUN_009840b0(&local_40,(undefined4 *)((int)this + 0x100));
        FUN_0046d8f0(&local_40,(int)this + 700,0,0x10,1);
        piVar1 = *(int **)((int)this + 0x310);
        *(undefined1 *)((int)this + 0x314) = 1;
        pfVar9 = (float *)(**(code **)(**(int **)((int)this + 0x2f8) + 0x34))(&fStack_1c);
        pfVar10 = (float *)(**(code **)(*piVar1 + 0x34))(afStack_4c + 2);
        fStack_1c = pfVar10[2] - pfVar9[2];
        fStack_20 = pfVar10[1] - pfVar9[1];
        fStack_24 = *pfVar10 - *pfVar9;
        FUN_009840b0(&iStack_50,&fStack_24);
        pfVar9 = FUN_00984190(&iStack_50,&fStack_3c);
        fVar12 = FUN_004012c0(*pfVar9);
        FUN_004462a0(this,(float)fVar12);
      }
    }
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_40 = 0.0;
  afStack_4c[1] = 0.0;
  afStack_4c[2] = (float)FUN_004031a0();
  (**(code **)(*(int *)this + 0xdc))(param_2,afStack_4c + 1,afStack_4c + 2);
  cVar7 = FUN_009782d0(*(void **)((int)this + 0x214),iStack_50,unaff_EBX,&fStack_3c,afStack_4c);
  if (cVar7 == '\0') {
    fStack_3c = 0.0;
    fStack_38 = 0.0;
    fStack_34 = 0.0;
  }
  fVar3 = *(float *)((int)this + 0x230);
  fVar4 = *(float *)((int)this + 0x234);
  *pfStack_8 = fStack_3c + *(float *)((int)this + 0x22c);
  pfStack_8[1] = fStack_38 + fVar3;
  pfStack_8[2] = fStack_34 + fVar4;
  pfStack_8[3] = fStack_18;
  pfStack_8[4] = fStack_14;
  pfStack_8[5] = fStack_10;
  pfStack_8[3] = afStack_4c[0];
  return CONCAT31((int3)((uint)afStack_4c[0] >> 8),1);
}


//// FUNCTION FUN_004f1990 @ 004f1990 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004f1990(int *param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  int **ppiVar10;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caaab8;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_6c,"RELATIONSHIP_BLOCK_",0x13);
  local_68 = 0x13;
  local_6c[0x13] = '\0';
  piVar2 = param_1;
  local_4 = 0;
  iVar3 = (**(code **)(*param_1 + 0x294))();
  if (iVar3 == 0) {
LAB_004f1ba9:
    iVar3 = (**(code **)(*piVar2 + 0x27c))();
    uVar7 = 0;
    if (iVar3 == 0) {
LAB_004f1da3:
      if (local_64 < 0x15) {
        ExceptionList = pvStack_c;
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    puVar5 = &uStack_70;
    iVar3 = (**(code **)(*piVar2 + 0x27c))();
    pvVar4 = (void *)FUN_00473120(iVar3);
    puVar5 = (undefined4 *)FUN_004731e0(pvVar4,puVar5);
    param_1 = (int *)*puVar5;
    puVar5 = &uStack_74;
    iVar3 = (**(code **)(*piVar2 + 0x27c))();
    pvVar4 = (void *)FUN_00473120(iVar3);
    pfVar6 = (float *)FUN_004732e0(pvVar4,puVar5);
    if ((float)param_1 <= *pfVar6) {
      iVar3 = 1;
      ppiVar10 = &param_1;
      pvVar4 = (void *)(**(code **)(*piVar2 + 0x27c))();
      pfVar6 = (float *)FUN_00472ef0(pvVar4,ppiVar10,iVar3);
      if (_DAT_0104b088 <= *pfVar6) {
        iVar3 = 0;
        ppiVar10 = &param_1;
        pvVar4 = (void *)(**(code **)(*piVar2 + 0x27c))();
        pfVar6 = (float *)FUN_00472ef0(pvVar4,ppiVar10,iVar3);
        fVar1 = *pfVar6;
        uVar7 = CONCAT22((short)((uint)pfVar6 >> 0x10),
                         (ushort)(fVar1 < _DAT_0104b08c) << 8 |
                         (ushort)(NAN(fVar1) || NAN(_DAT_0104b08c)) << 10 |
                         (ushort)(fVar1 == _DAT_0104b08c) << 0xe);
        if (fVar1 >= _DAT_0104b08c) goto LAB_004f1da3;
        puVar5 = FUN_004312e0(apvStack_4c,&local_6c,"UNHAPPYSALARY");
        local_4._0_1_ = 9;
        puVar5 = FUN_009b7190(apvStack_2c,puVar5,'\0',0);
        local_4 = CONCAT31(local_4._1_3_,10);
        uVar7 = FUN_0053d7f0(piVar2 + 0x105,param_2,puVar5);
        bVar8 = uStack_24 < 10;
        bVar9 = uStack_24 == 10;
      }
      else {
        puVar5 = FUN_004312e0(apvStack_4c,&local_6c,"UNHAPPY_IMAGE");
        local_4._0_1_ = 7;
        puVar5 = FUN_009b7190(apvStack_2c,puVar5,'\0',0);
        local_4 = CONCAT31(local_4._1_3_,8);
        uVar7 = FUN_0053d7f0(piVar2 + 0x105,param_2,puVar5);
        bVar8 = uStack_24 < 10;
        bVar9 = uStack_24 == 10;
      }
    }
    else {
      puVar5 = FUN_004312e0(apvStack_4c,&local_6c,"TOOSTRESSED");
      local_4._0_1_ = 5;
      puVar5 = FUN_009b7190(apvStack_2c,puVar5,'\0',0);
      local_4 = CONCAT31(local_4._1_3_,6);
      uVar7 = FUN_0053d7f0(piVar2 + 0x105,param_2,puVar5);
      bVar8 = uStack_24 < 10;
      bVar9 = uStack_24 == 10;
    }
    if (!bVar8 && !bVar9) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  else {
    iVar3 = 0;
    puVar5 = &uStack_74;
    pvVar4 = (void *)(**(code **)(*piVar2 + 0x294))();
    puVar5 = (undefined4 *)FUN_00407250(pvVar4,puVar5,iVar3);
    param_1 = (int *)*puVar5;
    iVar3 = 0;
    puVar5 = &uStack_70;
    pvVar4 = (void *)(**(code **)(*piVar2 + 0x294))();
    pfVar6 = (float *)FUN_00407290(pvVar4,puVar5,iVar3);
    if ((float)param_1 <= *pfVar6) {
      iVar3 = 1;
      puVar5 = &uStack_70;
      pvVar4 = (void *)(**(code **)(*piVar2 + 0x294))();
      puVar5 = (undefined4 *)FUN_00407250(pvVar4,puVar5,iVar3);
      param_1 = (int *)*puVar5;
      iVar3 = 1;
      puVar5 = &uStack_74;
      pvVar4 = (void *)(**(code **)(*piVar2 + 0x294))();
      pfVar6 = (float *)FUN_00407290(pvVar4,puVar5,iVar3);
      if ((float)param_1 <= *pfVar6) goto LAB_004f1ba9;
      puVar5 = FUN_004312e0(apvStack_4c,&local_6c,"THEYAREDRUNK");
      local_4._0_1_ = 3;
      puVar5 = FUN_009b7190(apvStack_2c,puVar5,'\0',0);
      local_4 = CONCAT31(local_4._1_3_,4);
      uVar7 = FUN_0053d7f0((void *)(param_2 + 0x414),piVar2,puVar5);
      pvVar4 = apvStack_4c[0];
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
    }
    else {
      puVar5 = FUN_004312e0(apvStack_2c,&local_6c,"THEYAREFOODADDICTED");
      local_4._0_1_ = 1;
      puVar5 = FUN_009b7190(apvStack_4c,puVar5,'\0',0);
      local_4 = CONCAT31(local_4._1_3_,2);
      uVar7 = FUN_0053d7f0((void *)(param_2 + 0x414),piVar2,puVar5);
      bVar8 = 10 < uStack_44;
      pvVar4 = apvStack_2c[0];
      uStack_44 = uStack_24;
      if (bVar8) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
    }
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar4);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar7 >> 8),1);
}


//// FUNCTION FUN_004f1dd0 @ 004f1dd0 ////

undefined4 * __thiscall FUN_004f1dd0(void *this,byte param_1)

{
  FUN_004f1430(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004f1df0 @ 004f1df0 ////

bool __cdecl FUN_004f1df0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004f1990(param_1,(int)param_2);
  uVar2 = FUN_004f1990(param_2,(int)param_1);
  return (char)uVar2 != '\0' || (char)uVar1 != '\0';
}


//// FUNCTION FUN_004f1e30 @ 004f1e30 ////

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_004f1e30(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *this;
  ushort *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  ushort *local_bc [2];
  uint local_b4;
  ushort *local_9c;
  undefined4 local_98;
  uint local_94;
  undefined1 local_90 [20];
  ushort *local_7c;
  undefined4 local_78;
  uint local_74;
  ushort local_70 [10];
  float local_5c;
  float local_58;
  int local_54;
  ushort *local_50 [2];
  uint local_48;
  float local_30;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caac96;
  local_c = ExceptionList;
  local_7c = local_70;
  local_70[0] = 0;
  local_78 = 0;
  local_74 = 10;
  ExceptionList = &local_c;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_7c,(wchar_t *)&lpCaption_00d16918,uVar2);
  local_4 = 0;
  FUN_0053d7f0(param_2 + 0x105,param_3,&local_7c);
  if (10 < local_74) {
                    /* WARNING: Subroutine does not return */
    _free(local_7c);
  }
  local_7c = local_70;
  local_70[0] = 0;
  local_78 = 0;
  local_74 = 10;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_7c,(wchar_t *)&lpCaption_00d16918,uVar2);
  this = param_3 + 0x105;
  local_4 = 1;
  FUN_0053d7f0(this,param_2,&local_7c);
  local_4 = 0xffffffff;
  if (10 < local_74) {
                    /* WARNING: Subroutine does not return */
    _free(local_7c);
  }
  uVar3 = FUN_004f1990(param_2,(int)param_3);
  uVar4 = FUN_004f1990(param_3,(int)param_2);
  if (((char)uVar4 == '\0') && ((char)uVar3 == '\0')) {
    if ((param_2[0x128] == 0) && (param_3[0x128] == 0)) {
      local_54 = 1;
    }
    else if ((param_2[0x128] != 1) || (local_54 = 0, param_3[0x128] != 1)) {
      local_54 = 2;
    }
    pfVar7 = &local_30;
    piVar10 = param_3;
    pvVar6 = (void *)FUN_005873c0((int)param_2);
    pfVar7 = FUN_0042e910(pvVar6,pfVar7,(int)piVar10);
    local_5c = *pfVar7;
    pfVar7 = &local_58;
    piVar10 = param_2;
    pvVar6 = (void *)FUN_005873c0((int)param_3);
    pfVar7 = FUN_0042e910(pvVar6,pfVar7,(int)piVar10);
    local_58 = (*pfVar7 + local_5c) * 0.5;
    iVar9 = (param_4 + local_54 * 9) * 0x18;
    local_7c = local_70;
    local_70[0] = local_70[0] & 0xff00;
    local_78 = 0;
    local_5c = (*(float *)(&DAT_0104ae04 + iVar9) - *(float *)(&DAT_0104ae00 + iVar9)) * local_58 +
               *(float *)(&DAT_0104ae00 + iVar9);
    local_74 = 0x14;
    _strncpy((char *)local_7c,"ai_chemistry",0xc);
    local_78 = 0xc;
    *(char *)(local_7c + 6) = '\0';
    local_4 = 3;
    FUN_00404790(param_1,&local_7c,local_5c);
    local_4 = 0xffffffff;
    if (0x14 < local_74) {
                    /* WARNING: Subroutine does not return */
      _free(local_7c);
    }
    FUN_005ee250(param_1);
    local_98 = 0;
    local_90[0] = 0;
    local_9c = (ushort *)local_90;
    if (local_58 < *(float *)(&DAT_0104ae10 + iVar9)) {
      local_94 = 0x20;
      local_9c = _malloc(0x20);
      _strncpy((char *)local_9c,"RELATIONSHIPNEW_TOOINTIMATE_",0x1c);
      local_98 = 0x1c;
      *(char *)(local_9c + 0xe) = '\0';
      local_4 = 0x24;
      if (param_2[0x128] == param_3[0x128]) {
        puVar5 = FUN_004f02d0(local_bc,param_4);
        FUN_004073f0(&local_9c,(char *)&PTR_LAB_005f5350_3_00d207d8,3);
        FUN_004073f0(&local_9c,(char *)*puVar5,puVar5[1]);
        if (0x14 < local_b4) {
                    /* WARNING: Subroutine does not return */
          _free(local_bc[0]);
        }
        puVar5 = FUN_009b7190(local_bc,&local_9c,'\0',0);
        local_4._0_1_ = 0x25;
        FUN_0053d7f0(param_2 + 0x105,param_3,puVar5);
        local_4._0_1_ = 0x24;
        if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
          _free(local_bc[0]);
        }
        puVar5 = FUN_009b7190(local_bc,&local_9c,'\0',0);
        local_4 = CONCAT31(local_4._1_3_,0x26);
        FUN_0053d7f0(this,param_2,puVar5);
        puVar1 = local_9c;
        uVar2 = local_94;
        if (10 < local_b4) {
LAB_004f2deb:
                    /* WARNING: Subroutine does not return */
          _free(local_bc[0]);
        }
      }
      else {
        if (param_2[0x128] == 0) {
          FUN_00403de0(local_50,&local_9c);
          local_4._0_1_ = 0x27;
          puVar5 = FUN_004f02d0(local_bc,param_4);
          pvVar6 = FUN_00407630(local_50,(char *)&PTR_LAB_00d207d4);
          FUN_004073f0(pvVar6,(char *)*puVar5,puVar5[1]);
          if (0x14 < local_b4) {
                    /* WARNING: Subroutine does not return */
            _free(local_bc[0]);
          }
          puVar5 = FUN_009b7190(local_bc,local_50,'\0',0);
          local_4._0_1_ = 0x28;
          FUN_0053d7f0(param_2 + 0x105,param_3,puVar5);
          if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
            _free(local_bc[0]);
          }
          FUN_00403de0(&local_7c,&local_9c);
          local_4._0_1_ = 0x29;
          puVar5 = FUN_004f02d0(local_bc,param_4);
          pvVar6 = FUN_00407630(&local_7c,"FM_");
          FUN_004073f0(pvVar6,(char *)*puVar5,puVar5[1]);
          if (0x14 < local_b4) {
                    /* WARNING: Subroutine does not return */
            _free(local_bc[0]);
          }
          puVar5 = FUN_009b7190(local_bc,&local_7c,'\0',0);
          local_4 = CONCAT31(local_4._1_3_,0x2a);
          FUN_0053d7f0(this,param_2,puVar5);
          if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
            _free(local_bc[0]);
          }
          local_bc[0] = local_50[0];
          local_b4 = local_48;
          if (0x14 < local_74) {
                    /* WARNING: Subroutine does not return */
            _free(local_7c);
          }
        }
        else {
          FUN_00403de0(local_bc,&local_9c);
          local_4._0_1_ = 0x2b;
          puVar5 = FUN_004f02d0(&local_7c,param_4);
          pvVar6 = FUN_00407630(local_bc,"FM_");
          FUN_004073f0(pvVar6,(char *)*puVar5,puVar5[1]);
          if (0x14 < local_74) {
                    /* WARNING: Subroutine does not return */
            _free(local_7c);
          }
          puVar5 = FUN_009b7190(&local_7c,local_bc,'\0',0);
          local_4._0_1_ = 0x2c;
          FUN_0053d7f0(param_2 + 0x105,param_3,puVar5);
          if (10 < local_74) {
                    /* WARNING: Subroutine does not return */
            _free(local_7c);
          }
          FUN_00403de0(local_50,&local_9c);
          local_4._0_1_ = 0x2d;
          puVar5 = FUN_004f02d0(&local_7c,param_4);
          pvVar6 = FUN_00407630(local_50,(char *)&PTR_LAB_00d207d4);
          FUN_004073f0(pvVar6,(char *)*puVar5,puVar5[1]);
          if (0x14 < local_74) {
                    /* WARNING: Subroutine does not return */
            _free(local_7c);
          }
          puVar5 = FUN_009b7190(local_2c,local_50,'\0',0);
          local_4 = CONCAT31(local_4._1_3_,0x2e);
          FUN_0053d7f0(this,param_2,puVar5);
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
            _free(local_50[0]);
          }
        }
        puVar1 = local_9c;
        uVar2 = local_94;
        if (0x14 < local_b4) goto LAB_004f2deb;
      }
    }
    else {
      local_94 = 0x14;
      local_5c = (*(float *)(&DAT_0104ae0c + iVar9) - *(float *)(&DAT_0104ae08 + iVar9)) * local_58
                 + *(float *)(&DAT_0104ae08 + iVar9);
      _strncpy((char *)local_9c,"ai_effect",9);
      local_98 = 9;
      *(char *)((int)local_9c + 9) = '\0';
      local_4 = 4;
      FUN_00404790(param_1,&local_9c,local_5c);
      if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
        _free(local_9c);
      }
      local_30 = *(float *)(&DAT_0104ae14 + iVar9);
      puVar5 = FUN_004f0410(local_bc,param_4);
      local_4 = 5;
      FUN_00404840(param_1,local_5c,local_30,puVar5);
      local_4 = 0xffffffff;
      if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
        _free(local_bc[0]);
      }
      iVar8 = 0;
      pfVar7 = (float *)(&DAT_0104ae10 + local_54 * 0xd8);
      do {
        if (((*pfVar7 <= local_58) && (iVar8 != param_4)) &&
           (*(float *)(&DAT_0104ae10 + iVar9) < *pfVar7)) {
          uVar2 = FUN_0042edc0(param_2,param_3);
          local_9c = (ushort *)local_90;
          local_94 = 0x20;
          local_98 = 0;
          local_90[0] = 0;
          if ((char)uVar2 == '\0') {
            local_9c = _malloc(0x20);
            _strncpy((char *)local_9c,"RELATIONSHIPNEW_NEXTLEVEL_",0x1a);
            local_98 = 0x1a;
            *(char *)(local_9c + 0xd) = '\0';
            local_4 = 10;
            if (param_2[0x128] == param_3[0x128]) {
              puVar5 = FUN_004312e0(local_50,&local_9c,"SS");
              local_4._0_1_ = 0xb;
              puVar5 = FUN_009b7190(local_bc,puVar5,'\0',0);
              local_4._0_1_ = 0xc;
              FUN_0053d7f0(param_2 + 0x105,param_3,puVar5);
              if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
                _free(local_bc[0]);
              }
              if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
                _free(local_50[0]);
              }
              puVar5 = FUN_004312e0(local_50,&local_9c,"SS");
              local_4._0_1_ = 0xd;
              puVar5 = FUN_009b7190(local_bc,puVar5,'\0',0);
              local_4 = CONCAT31(local_4._1_3_,0xe);
              FUN_0053d7f0(this,param_2,puVar5);
              if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
                _free(local_bc[0]);
              }
            }
            else if (param_2[0x128] == 0) {
              puVar5 = FUN_004312e0(local_50,&local_9c,"MF");
              local_4._0_1_ = 0xf;
              puVar5 = FUN_009b7190(local_bc,puVar5,'\0',0);
              local_4._0_1_ = 0x10;
              FUN_0053d7f0(param_2 + 0x105,param_3,puVar5);
              if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
                _free(local_bc[0]);
              }
              if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
                _free(local_50[0]);
              }
              puVar5 = FUN_004312e0(local_50,&local_9c,"FM");
              local_4._0_1_ = 0x11;
              puVar5 = FUN_009b7190(local_bc,puVar5,'\0',0);
              local_4 = CONCAT31(local_4._1_3_,0x12);
              FUN_0053d7f0(this,param_2,puVar5);
              if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
                _free(local_bc[0]);
              }
            }
            else {
              puVar5 = FUN_004312e0(local_50,&local_9c,"FM");
              local_4._0_1_ = 0x13;
              puVar5 = FUN_009b7190(local_bc,puVar5,'\0',0);
              local_4._0_1_ = 0x14;
              FUN_0053d7f0(param_2 + 0x105,param_3,puVar5);
              if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
                _free(local_bc[0]);
              }
              if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
                _free(local_50[0]);
              }
              puVar5 = FUN_004312e0(local_50,&local_9c,"MF");
              local_4._0_1_ = 0x15;
              puVar5 = FUN_009b7190(local_bc,puVar5,'\0',0);
              local_4 = CONCAT31(local_4._1_3_,0x16);
              FUN_0053d7f0(this,param_2,puVar5);
              if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
                _free(local_bc[0]);
              }
            }
            puVar1 = local_9c;
            uVar2 = local_94;
            if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
              _free(local_50[0]);
            }
          }
          else {
            local_9c = _malloc(0x20);
            _strncpy((char *)local_9c,"RELATIONSHIPNEW_SS_LOVER",0x18);
            local_98 = 0x18;
            *(char *)(local_9c + 0xc) = '\0';
            local_4 = 6;
            puVar5 = FUN_009b7190(local_bc,&local_9c,'\0',0);
            local_4 = CONCAT31(local_4._1_3_,7);
            FUN_0053d7f0(param_2 + 0x105,param_3,puVar5);
            if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
              _free(local_bc[0]);
            }
            if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
              _free(local_9c);
            }
            local_9c = (ushort *)local_90;
            local_90[0] = 0;
            local_98 = 0;
            local_94 = 0x20;
            local_9c = _malloc(0x20);
            _strncpy((char *)local_9c,"RELATIONSHIPNEW_SS_LOVER",0x18);
            local_98 = 0x18;
            *(char *)(local_9c + 0xc) = '\0';
            local_4 = 8;
            puVar5 = FUN_009b7190(local_bc,&local_9c,'\0',0);
            local_4 = CONCAT31(local_4._1_3_,9);
            FUN_0053d7f0(this,param_2,puVar5);
            puVar1 = local_9c;
            uVar2 = local_94;
            if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
              _free(local_bc[0]);
            }
          }
          goto joined_r0x004f24c5;
        }
        iVar8 = iVar8 + 1;
        pfVar7 = pfVar7 + 6;
      } while (iVar8 < 9);
      local_7c = local_70;
      local_70[0] = local_70[0] & 0xff00;
      local_78 = 0;
      local_74 = 0x20;
      local_7c = _malloc(0x20);
      _strncpy((char *)local_7c,"RELATIONSHIPNEW_CONTENT_",0x18);
      local_78 = 0x18;
      *(char *)(local_7c + 0xc) = '\0';
      local_4 = 0x17;
      if (param_2[0x128] == param_3[0x128]) {
        puVar5 = FUN_004312e0(local_50,&local_7c,"SS");
        local_4._0_1_ = 0x18;
        puVar5 = FUN_009b7190(local_bc,puVar5,'\0',0);
        local_4._0_1_ = 0x19;
        FUN_0053d7f0(param_2 + 0x105,param_3,puVar5);
        if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
          _free(local_bc[0]);
        }
        if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
          _free(local_50[0]);
        }
        puVar5 = FUN_004312e0(local_50,&local_7c,"SS");
        local_4._0_1_ = 0x1a;
        puVar5 = FUN_009b7190(local_bc,puVar5,'\0',0);
        local_4 = CONCAT31(local_4._1_3_,0x1b);
        FUN_0053d7f0(this,param_2,puVar5);
        if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
          _free(local_bc[0]);
        }
      }
      else if (param_2[0x128] == 0) {
        puVar5 = FUN_004312e0(local_50,&local_7c,"MF");
        local_4._0_1_ = 0x1c;
        puVar5 = FUN_009b7190(local_bc,puVar5,'\0',0);
        local_4._0_1_ = 0x1d;
        FUN_0053d7f0(param_2 + 0x105,param_3,puVar5);
        if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
          _free(local_bc[0]);
        }
        if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
          _free(local_50[0]);
        }
        puVar5 = FUN_004312e0(local_50,&local_7c,"FM");
        local_4._0_1_ = 0x1e;
        puVar5 = FUN_009b7190(local_bc,puVar5,'\0',0);
        local_4 = CONCAT31(local_4._1_3_,0x1f);
        FUN_0053d7f0(this,param_2,puVar5);
        if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
          _free(local_bc[0]);
        }
      }
      else {
        puVar5 = FUN_004312e0(local_50,&local_7c,"FM");
        local_4._0_1_ = 0x20;
        puVar5 = FUN_009b7190(local_bc,puVar5,'\0',0);
        local_4._0_1_ = 0x21;
        FUN_0053d7f0(param_2 + 0x105,param_3,puVar5);
        if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
          _free(local_bc[0]);
        }
        if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
          _free(local_50[0]);
        }
        puVar5 = FUN_004312e0(local_50,&local_7c,"MF");
        local_4._0_1_ = 0x22;
        puVar5 = FUN_009b7190(local_bc,puVar5,'\0',0);
        local_4 = CONCAT31(local_4._1_3_,0x23);
        FUN_0053d7f0(this,param_2,puVar5);
        if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
          _free(local_bc[0]);
        }
      }
      puVar1 = local_7c;
      uVar2 = local_74;
      if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
        _free(local_50[0]);
      }
    }
joined_r0x004f24c5:
    local_bc[0] = puVar1;
    if (uVar2 < 0x15) {
      ExceptionList = local_c;
      return;
    }
  }
  else {
    puVar5 = FUN_004f0410(local_bc,param_4);
    local_4 = 2;
    FUN_00404840(param_1,DAT_00f87bd8,DAT_00f87bdc,puVar5);
    if (local_b4 < 0xb) {
      ExceptionList = local_c;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_bc[0]);
}


//// FUNCTION FUN_004f2e20 @ 004f2e20 ////

int * __cdecl FUN_004f2e20(int *param_1,int *param_2)

{
  undefined4 *_Memory;
  int *piVar1;
  undefined4 local_2c;
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caacb3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  _Memory = operator_new(0x31c);
  piVar1 = (int *)0x0;
  local_4 = 0;
  if (_Memory != (undefined4 *)0x0) {
    piVar1 = FUN_004f1360(_Memory);
  }
  local_4 = 0xffffffff;
  FUN_004f10e0(&local_2c,param_1,param_2);
  local_4 = 1;
  (**(code **)(*piVar1 + 0xb0))(&local_2c);
  FUN_004f1e30(piVar1,param_1,param_2,(int)param_2);
  if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_10;
  return piVar1;
}


//// FUNCTION FUN_004f2ed0 @ 004f2ed0 ////

void __fastcall FUN_004f2ed0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004f2f90 @ 004f2f90 ////

void __fastcall FUN_004f2f90(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x150)) {
    FUN_009b11d0(*(int *)(param_1 + 0x150));
  }
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  return;
}


//// FUNCTION FUN_004f2fc0 @ 004f2fc0 ////

void __cdecl FUN_004f2fc0(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x154) = 5;
    *(undefined4 *)(param_1 + 0x158) = 0xc;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x154) = 10;
    *(undefined4 *)(param_1 + 0x158) = 0x11;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x154) = 6;
    *(undefined4 *)(param_1 + 0x158) = 0xd;
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x154) = 7;
    *(undefined4 *)(param_1 + 0x158) = 0xe;
    return;
  case 4:
    *(undefined4 *)(param_1 + 0x154) = 8;
    *(undefined4 *)(param_1 + 0x158) = 0xf;
    return;
  case 5:
    *(undefined4 *)(param_1 + 0x154) = 9;
    *(undefined4 *)(param_1 + 0x158) = 0x10;
    return;
  case 6:
    *(undefined4 *)(param_1 + 0x154) = 0xb;
    *(undefined4 *)(param_1 + 0x158) = 0x12;
  }
  return;
}


//// FUNCTION FUN_004f30a0 @ 004f30a0 ////

float10 FUN_004f30a0(int param_1)

{
  return (float10)(float)(&DAT_0104b0ac)[param_1];
}


//// FUNCTION FUN_004f30b0 @ 004f30b0 ////

undefined4 __fastcall FUN_004f30b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xaa8);
}


//// FUNCTION FUN_004f30c0 @ 004f30c0 ////

void __thiscall FUN_004f30c0(void *this,float param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  undefined4 uVar4;
  
  fVar2 = param_1;
  if (param_1 == 0.0) {
    return;
  }
  iVar1 = *(int *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x230 + (int)this);
  if ((iVar1 < 0) || (bVar3 = FUN_009b1140(iVar1), !bVar3)) {
    iVar1 = *(int *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x22c + (int)this);
    if ((iVar1 < 0) || (bVar3 = FUN_009b1140(iVar1), !bVar3)) goto LAB_004f31a3;
    if (0.1 <= DAT_0104b0b4) {
      param_1 = 0.1;
    }
    else {
      param_1 = DAT_0104b0b4;
    }
    uVar4 = *(undefined4 *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x22c + (int)this);
  }
  else {
    if (0.1 <= DAT_0104b0b4) {
      param_1 = 0.1;
    }
    else {
      param_1 = DAT_0104b0b4;
    }
    uVar4 = *(undefined4 *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x230 + (int)this);
  }
  FUN_009b10a0(uVar4,param_1);
LAB_004f31a3:
  *(float *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x234 + (int)this) = fVar2;
  return;
}


//// FUNCTION FUN_004f31c0 @ 004f31c0 ////

void __thiscall FUN_004f31c0(void *this,int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 * 0x164 + param_2 + 0x238 + (int)this) = param_3;
  return;
}


//// FUNCTION FUN_004f31e0 @ 004f31e0 ////

undefined4 __thiscall FUN_004f31e0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x164 + param_2;
  return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar1 + 0x238 + (int)this));
}


//// FUNCTION FUN_004f3200 @ 004f3200 ////

void FUN_004f3200(undefined4 param_1,int param_2,undefined4 param_3)

{
  (&DAT_0104b09c)[param_2] = param_3;
  return;
}


//// FUNCTION FUN_004f3220 @ 004f3220 ////

undefined4 FUN_004f3220(undefined4 param_1,int param_2)

{
  return (&DAT_0104b09c)[param_2];
}


//// FUNCTION FUN_004f3230 @ 004f3230 ////

void __thiscall FUN_004f3230(void *this,int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 * 0x164 + 0x1a4 + (int)this) = param_2;
  return;
}


//// FUNCTION FUN_004f3250 @ 004f3250 ////

void __thiscall FUN_004f3250(void *this,int param_1)

{
  *(undefined1 *)(param_1 * 0x164 + 0x24c + (int)this) = 1;
  return;
}


//// FUNCTION FUN_004f3270 @ 004f3270 ////

undefined4 __thiscall
FUN_004f3270(void *this,int param_1,byte *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((*(int *)((int)this + (param_1 * 5 + 0x19) * 4) != 0) &&
     (param_1 == *(int *)((int)this + 0xaa8))) {
    uVar1 = FUN_009b1530(param_2,*(uint *)(param_1 * 0x164 + 0x240 + (int)this),param_3,'\0',param_4
                         ,'\0',0x3f800000,0.0);
    return uVar1;
  }
  return 0xffffffff;
}


//// FUNCTION FUN_004f32c0 @ 004f32c0 ////

void FUN_004f32c0(byte *param_1)

{
  FUN_009b1530(param_1,3,0,'\0',&DAT_00d17518,'\0',0x3f800000,0.0);
  return;
}


//// FUNCTION FUN_004f32f0 @ 004f32f0 ////

undefined1 __fastcall FUN_004f32f0(int param_1)

{
  return *(undefined1 *)(param_1 + 0xacc);
}


//// FUNCTION FUN_004f3300 @ 004f3300 ////

void __thiscall FUN_004f3300(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0xaf0) = param_1;
  return;
}


//// FUNCTION FUN_004f3310 @ 004f3310 ////

void __fastcall FUN_004f3310(int param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 3;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(undefined4 *)(param_1 + 0x8c) = 1;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x98) = 1;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 2;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 3;
  *(undefined4 *)(param_1 + 200) = 1;
  *(undefined4 *)(param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 3;
  *(undefined4 *)(param_1 + 0xdc) = 1;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}


//// FUNCTION FUN_004f3400 @ 004f3400 ////

void __fastcall FUN_004f3400(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x23c + param_1);
  if (-1 < iVar1) {
    bVar2 = FUN_009b1140(iVar1);
    if (!bVar2) {
      iVar3 = *(int *)(param_1 + 0xaa8) * 0x164;
      iVar1 = *(int *)(iVar3 + 0x23c + param_1);
      if (-1 < iVar1) {
        FUN_009b11d0(iVar1);
      }
      *(undefined4 *)(iVar3 + param_1 + 0x23c) = 0xffffffff;
    }
  }
  return;
}


//// FUNCTION FUN_004f3460 @ 004f3460 ////

void __fastcall FUN_004f3460(int param_1)

{
  if (-1 < *(int *)(param_1 + 0xad8)) {
    FUN_009b11d0(*(int *)(param_1 + 0xad8));
  }
  *(undefined4 *)(param_1 + 0xad8) = 0xffffffff;
  if (-1 < *(int *)(param_1 + 0xadc)) {
    FUN_009b11d0(*(int *)(param_1 + 0xadc));
  }
  *(undefined4 *)(param_1 + 0xadc) = 0xffffffff;
  if (-1 < *(int *)(param_1 + 0xae0)) {
    FUN_009b11d0(*(int *)(param_1 + 0xae0));
  }
  *(undefined4 *)(param_1 + 0xae0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xae8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xae4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xaec) = 0xbf800000;
  return;
}


//// FUNCTION FUN_004f34f0 @ 004f34f0 ////

int * __thiscall FUN_004f34f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004f35d0 @ 004f35d0 ////

int __fastcall FUN_004f35d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}


//// FUNCTION FUN_004f3870 @ 004f3870 ////

void __cdecl FUN_004f3870(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_004f3a50 @ 004f3a50 ////

void FUN_004f3a50(void)

{
  FUN_0098fc90("VolumeControl",&DAT_0104b0ac,4,3);
  FUN_0098fc90("MaxSpeechLevel",&DAT_0104b09c,4,4);
  FUN_0098fd30("CurrentOutputConfig",&DAT_0104b0bc,1);
  return;
}


//// FUNCTION FUN_004f3a90 @ 004f3a90 ////

void __fastcall FUN_004f3a90(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004f3aa0 @ 004f3aa0 ////

void __fastcall FUN_004f3aa0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004f3ab0 @ 004f3ab0 ////

void FUN_004f3ab0(void)

{
  bool bVar1;
  
  if (DAT_0104b0c4 != '\0') {
    bVar1 = FUN_009d34c0((int *)&DAT_0104b0e8);
    if (bVar1) {
      FUN_009d34d0((undefined4 *)&DAT_0104b0e8);
    }
  }
  if (DAT_0104b0e4 != (undefined4 *)0x0) {
    (**(code **)*DAT_0104b0e4)(1);
  }
  (*(code *)DAT_0104b0d0[1])();
  DAT_0104b0e4 = (undefined4 *)0x0;
  (*(code *)*DAT_0104b0d0)();
  FUN_00486c10();
  FUN_0043daa0();
  FUN_004465b0();
  FUN_0049ab30();
  return;
}


//// FUNCTION FUN_004f3b20 @ 004f3b20 ////

undefined4 FUN_004f3b20(void)

{
  return DAT_0104b0e4;
}


//// FUNCTION FUN_004f3b30 @ 004f3b30 ////

void __fastcall FUN_004f3b30(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_004f3b50 @ 004f3b50 ////

void __fastcall FUN_004f3b50(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004f3b80 @ 004f3b80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f3b80(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(DAT_00f87aa0 + 0xe0);
  if (-1 < *(int *)(param_1 + 0xad8)) {
    fVar2 = (fVar1 - _DAT_0104b0c8) / _DAT_00e51cdc;
    if (fVar2 < 1.0) {
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
    }
    else {
      fVar2 = 1.0;
    }
    fVar2 = DAT_0104b0b4 * fVar2;
    if (*(float *)(param_1 + 0xae4) != fVar2) {
      *(float *)(param_1 + 0xae4) = fVar2;
      FUN_009b10a0(*(int *)(param_1 + 0xad8),fVar2);
    }
  }
  if (-1 < *(int *)(param_1 + 0xadc)) {
    fVar1 = (_DAT_0104b0cc - fVar1) / _DAT_00e51cdc;
    if (fVar1 < 1.0) {
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
    }
    else {
      fVar1 = 1.0;
    }
    fVar1 = DAT_0104b0b4 * fVar1;
    if (*(float *)(param_1 + 0xae8) != fVar1) {
      *(float *)(param_1 + 0xae8) = fVar1;
      FUN_009b10a0(*(int *)(param_1 + 0xadc),fVar1);
    }
  }
  fVar1 = DAT_0104b0b4;
  if ((-1 < *(int *)(param_1 + 0xae0)) && (*(float *)(param_1 + 0xaec) != DAT_0104b0b4)) {
    *(float *)(param_1 + 0xaec) = DAT_0104b0b4;
    FUN_009b10a0(*(int *)(param_1 + 0xae0),fVar1);
  }
  return;
}


//// FUNCTION FUN_004f3ff0 @ 004f3ff0 ////

int __thiscall FUN_004f3ff0(void *this,int param_1)

{
  return *(int *)((int)this + 4) - *(int *)(param_1 + 4);
}


//// FUNCTION FUN_004f40c0 @ 004f40c0 ////

void __cdecl FUN_004f40c0(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


//// FUNCTION FUN_004f40f0 @ 004f40f0 ////

undefined4 * __thiscall FUN_004f40f0(void *this,byte param_1)

{
  FUN_004f3b50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004f4160 @ 004f4160 ////

void __cdecl FUN_004f4160(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004f4190 @ 004f4190 ////

void * __thiscall FUN_004f4190(void *this,byte param_1)

{
  FUN_004f3b30((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004f41b0 @ 004f41b0 ////

void __fastcall FUN_004f41b0(int *param_1)

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
  puStack_8 = &LAB_00caacc8;
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


//// FUNCTION FUN_004f4280 @ 004f4280 ////

void FUN_004f4280(void)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caace8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  ExceptionList = &local_c;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"c:\\Movies\\soundsoaktest.csv",0x1b);
  local_28 = 0x1b;
  local_2c[0x1b] = '\0';
  local_4 = 0;
  FUN_009d3b90(&DAT_0104b0e8,&local_2c,2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  DAT_0104b0c4 = 1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f4320 @ 004f4320 ////

void __thiscall FUN_004f4320(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)((int)this + 0x161) == '\0') {
    iVar1 = *(int *)((int)this + 0x150);
    if (-1 < iVar1) {
      if (-1 < iVar1) {
        FUN_009b11d0(iVar1);
      }
      *(undefined4 *)((int)this + 0x150) = 0xffffffff;
    }
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_20 = 0xffffffff;
    local_24 = FUN_009b01a0(*param_1);
    uVar2 = FUN_009b1530(local_28,*(uint *)((int)this + 0x154),0,'\0',&DAT_00d17518,'\0',0x3f800000,
                         0.0);
    *(undefined4 *)((int)this + 0x150) = uVar2;
  }
  return;
}


//// FUNCTION FUN_004f4490 @ 004f4490 ////

void __thiscall FUN_004f4490(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d208b0;
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


//// FUNCTION FUN_004f44e0 @ 004f44e0 ////

void __fastcall FUN_004f44e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d208b0;
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


//// FUNCTION FUN_004f4630 @ 004f4630 ////

undefined4 * __thiscall FUN_004f4630(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = (undefined1 *)((int)this + 0x2c);
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x20),(char *)param_1[8],param_1[9]);
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  return this;
}


//// FUNCTION FUN_004f46e0 @ 004f46e0 ////

void __cdecl FUN_004f46e0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004f4740 @ 004f4740 ////

undefined4 * __cdecl FUN_004f4740(int param_1,int param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = param_2 + -0x24;
    puVar3 = param_3 + -9;
    *puVar3 = *(undefined4 *)(param_2 + -0x24);
    _Count = *(uint *)(param_2 + -0x1c);
    _Source = *(char **)(param_2 + -0x20);
    if ((uint)param_3[-6] <= _Count) {
      if (0x14 < (uint)param_3[-6]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)param_3[-8]);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-6] = _Size;
      pvVar1 = _malloc(_Size);
      param_3[-8] = pvVar1;
    }
    _strncpy((char *)param_3[-8],_Source,_Count);
    param_3[-7] = _Count;
    *(undefined1 *)(_Count + param_3[-8]) = 0;
    param_2 = iVar2;
    param_3 = puVar3;
  } while (iVar2 != param_1);
  return puVar3;
}


//// FUNCTION RadioChannel_PlayClip @ 004f4860 ////

void __thiscall RadioChannel_PlayClip(void *this,undefined4 *param_1,int *param_2)

{
  char cVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  void **this_01;
  undefined4 uVar5;
  bool bVar6;
  undefined1 *puVar7;
  char *pcVar8;
  uint uVar9;
  char cVar10;
  float fVar11;
  char *local_e4;
  size_t local_e0;
  uint local_dc;
  char local_d8 [20];
  char *local_c4;
  undefined4 local_c0;
  uint local_bc;
  char local_b8 [20];
  void *local_a4 [2];
  uint local_9c;
  byte local_84 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  void *local_5c [2];
  uint local_54;
  void *local_34 [2];
  uint local_2c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caad29;
  local_c = ExceptionList;
  local_84[0] = 0;
  local_84[1] = 0;
  local_84[2] = 0;
  local_84[3] = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  uVar5 = 0xffffffff;
  local_60 = 0;
  local_7c = 0xffffffff;
  ExceptionList = &local_c;
  local_80 = FUN_009b01a0(*param_1);
  bVar6 = param_1[0x11] == 0;
  if (bVar6) {
    FUN_0049ab70();
    uVar5 = thunk_FUN_0043d2c0();
    cVar1 = (char)uVar5;
    this_00 = (void *)FUN_0049ab70();
    uVar5 = FUN_0049aa90(this_00,cVar1);
  }
  if (DAT_0104b0c4 == '\0') {
    iVar2 = FUN_009b1860(local_84,*(uint *)((int)this + 0x158),param_1[8],0,param_1[0x10],
                         DAT_0104b0c0,'\0',uVar5,'\0',bVar6);
    *param_2 = iVar2;
  }
  else {
    iVar2 = FUN_009b1860(local_84,*(uint *)((int)this + 0x158),param_1[8],0,param_1[0x10],
                         DAT_0104b0c0,'\x01',uVar5,'\0',bVar6);
    local_e4 = local_d8;
    *param_2 = iVar2;
    local_d8[0] = '\0';
    local_e0 = 0;
    local_dc = 0x14;
    iVar2 = param_1[0x11];
    local_4 = 0;
    if (iVar2 == 0) {
      _strncpy(local_d8,"DJ,",3);
      local_e0 = 3;
      local_e4[3] = '\0';
    }
    else if (iVar2 == 1) {
      _strncpy(local_d8,"News,",5);
      local_e0 = 5;
      local_e4[5] = '\0';
    }
    else if (iVar2 == 2) {
      _strncpy(local_d8,"Tannoy,",7);
      local_e0 = 7;
      local_e4[7] = '\0';
    }
    else {
      _strncpy(local_e4,"Speech,",7);
      local_e0 = 7;
      local_e4[7] = '\0';
    }
    puVar3 = FUN_0047aee0(local_a4,&local_e4,param_1);
    puVar3 = FUN_004312e0(&local_c4,puVar3,",");
    FUN_004015d0(&local_e4,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_bc) {
                    /* WARNING: Subroutine does not return */
      _free(local_c4);
    }
    if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4[0]);
    }
    puVar3 = FUN_0043c030(local_34);
    local_4._0_1_ = 1;
    puVar3 = FUN_00568870(local_5c,puVar3);
    puVar3 = FUN_0047aee0(&local_c4,&local_e4,puVar3);
    puVar3 = FUN_004312e0(local_a4,puVar3,",");
    FUN_004015d0(&local_e4,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4[0]);
    }
    if (0x14 < local_bc) {
                    /* WARNING: Subroutine does not return */
      _free(local_c4);
    }
    if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
      _free(local_5c[0]);
    }
    local_4._0_1_ = 0;
    if (10 < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_34[0]);
    }
    puVar3 = FUN_0043bb70(&local_c4);
    local_4._0_1_ = 2;
    puVar3 = FUN_00568870(local_a4,puVar3);
    puVar3 = FUN_0047aee0(local_5c,&local_e4,puVar3);
    puVar3 = FUN_004312e0(local_34,puVar3,",");
    FUN_004015d0(&local_e4,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_34[0]);
    }
    if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
      _free(local_5c[0]);
    }
    if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4[0]);
    }
    local_4._0_1_ = 0;
    if (10 < local_bc) {
                    /* WARNING: Subroutine does not return */
      _free(local_c4);
    }
    puVar3 = FUN_00569d60(local_a4,uVar5);
    puVar3 = FUN_0047aee0(local_5c,&local_e4,puVar3);
    puVar3 = FUN_004312e0(local_34,puVar3,"\r\n");
    FUN_004015d0(&local_e4,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_34[0]);
    }
    if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
      _free(local_5c[0]);
    }
    if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4[0]);
    }
    local_c4 = local_b8;
    local_b8[0] = '\0';
    local_c0 = 0;
    local_bc = 0x20;
    local_c4 = _malloc(0x20);
    _strncpy(local_c4,"c:\\Movies\\soundsoaktest.csv",0x1b);
    local_c0 = 0x1b;
    local_c4[0x1b] = '\0';
    local_4._0_1_ = 3;
    FUN_009d3b90(&DAT_0104b0e8,&local_c4,1);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_bc) {
                    /* WARNING: Subroutine does not return */
      _free(local_c4);
    }
    FUN_009d3530(&DAT_0104b0e8,local_e4,local_e0);
    FUN_009d34d0((undefined4 *)&DAT_0104b0e8);
    local_4 = 0xffffffff;
    if (0x14 < local_dc) {
                    /* WARNING: Subroutine does not return */
      _free(local_e4);
    }
  }
  if (-1 < *param_2) {
    if (param_1[0x11] == 1) {
      puVar7 = &stack0xfffffeec;
      uVar5 = 0;
      uVar9 = 0x14;
      FUN_004015d0(&stack0xfffffee0,(char *)*param_1,param_1[1]);
      Timeline_OnRadioClipFinished(puVar7,uVar5,uVar9);
      uVar9 = *(uint *)((int)this + 0x154);
      pcVar8 = "HUD_TIMELINE_EVENT_WORLDEVENT";
      this_01 = local_34;
    }
    else {
      if (param_1[0x11] != 2) {
        ExceptionList = local_c;
        return;
      }
      uVar9 = *(uint *)((int)this + 0x154);
      pcVar8 = "TANNOY_BINGBONG";
      this_01 = local_5c;
    }
    fVar11 = 0.0;
    uVar5 = 0x3f800000;
    cVar10 = '\0';
    puVar7 = &DAT_00d17518;
    cVar1 = '\0';
    iVar2 = 0;
    pbVar4 = (byte *)FUN_0041c9c0(this_01,pcVar8);
    FUN_009b1530(pbVar4,uVar9,iVar2,cVar1,puVar7,cVar10,uVar5,fVar11);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION AudioOptions_SaveMixerLevels @ 004f4e10 ////

void AudioOptions_SaveMixerLevels(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined3 extraout_var;
  int iVar4;
  char *local_ac;
  undefined4 local_a8;
  uint local_a4;
  char local_a0 [20];
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
  
  puStack_8 = &LAB_00caadc6;
  local_c = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_c;
  do {
    local_4 = 0xffffffff;
    puVar2 = FUN_00569c30(local_8c,(float)(&DAT_0104b0ac)[iVar4]);
    local_4 = 0;
    puVar3 = FUN_00569d60(local_6c,iVar4);
    puVar3 = FUN_0040d6b0(local_4c,"Volume ",puVar3);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_005417f0(g_configRegistryPath,puVar3,puVar2);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    local_4 = 0xffffffff;
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  local_ac = local_a0;
  local_a0[0] = '\0';
  local_a8 = 0;
  local_a4 = 0x14;
  _strncpy(local_ac,"DJLevel",7);
  local_a8 = 7;
  local_ac[7] = '\0';
  local_4 = 3;
  puVar2 = FUN_00569d60(local_8c,DAT_0104b09c);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_005417f0(g_configRegistryPath,&local_ac,puVar2);
  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c[0]);
  }
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  local_ac = local_a0;
  local_a0[0] = '\0';
  local_a8 = 0;
  local_a4 = 0x14;
  _strncpy(local_ac,"NewsLevel",9);
  local_a8 = 9;
  local_ac[9] = '\0';
  local_4 = 5;
  puVar2 = FUN_00569d60(local_8c,DAT_0104b0a0);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_005417f0(g_configRegistryPath,&local_ac,puVar2);
  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c[0]);
  }
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  local_ac = local_a0;
  local_a0[0] = '\0';
  local_a8 = 0;
  local_a4 = 0x14;
  _strncpy(local_ac,"TannoyLevel",0xb);
  local_a8 = 0xb;
  local_ac[0xb] = '\0';
  local_4 = 7;
  puVar2 = FUN_00569d60(local_8c,DAT_0104b0a4);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_005417f0(g_configRegistryPath,&local_ac,puVar2);
  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c[0]);
  }
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  local_ac = local_a0;
  local_a0[0] = '\0';
  local_a8 = 0;
  local_a4 = 0x14;
  _strncpy(local_ac,"OtherLevel",10);
  local_a8 = 10;
  local_ac[10] = '\0';
  local_4 = 9;
  puVar2 = FUN_00569d60(local_8c,DAT_0104b0a8);
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_005417f0(g_configRegistryPath,&local_ac,puVar2);
  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c[0]);
  }
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  local_ac = local_a0;
  local_a0[0] = '\0';
  local_a8 = 0;
  local_a4 = 0x14;
  _strncpy(local_ac,"Output Config",0xd);
  local_a8 = 0xd;
  local_ac[0xd] = '\0';
  local_4 = 0xb;
  bVar1 = FUN_009b0990();
  puVar2 = FUN_00569d60(local_2c,CONCAT31(extraout_var,bVar1));
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_005417f0(g_configRegistryPath,&local_ac,puVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f51d0 @ 004f51d0 ////

undefined4 * __thiscall FUN_004f51d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *local_40;
  uint local_3c;
  uint local_38;
  char local_34 [20];
  void *local_20 [2];
  uint local_18;
  
  iVar1 = *(int *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x198 + (int)this);
  if (iVar1 == 0) {
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"none",4);
  }
  else {
    local_40 = local_34;
    local_34[0] = '\0';
    local_3c = 0;
    local_38 = 0x14;
    FUN_004015d0(&local_40,*(char **)(iVar1 + 0x60),*(uint *)(iVar1 + 100));
    iVar1 = FUN_004302c0(&local_40,&DAT_00d1e524,0xffffffff,1);
    if (iVar1 != 0) {
      puVar2 = FUN_00430770(&local_40,local_20,iVar1 + 1,0xffffffff);
      FUN_004015d0(&local_40,(char *)*puVar2,puVar2[1]);
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
    }
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,local_40,local_3c);
    if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
  }
  return param_1;
}


//// FUNCTION AudioOptions_LoadMixerLevels @ 004f52e0 ////

void AudioOptions_LoadMixerLevels(void)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  float10 fVar4;
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
  puStack_8 = &LAB_00caae08;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  do {
    puVar1 = FUN_00569d60(local_2c,iVar3);
    local_4 = 0;
    puVar1 = FUN_0040d6b0(local_4c,"Volume ",puVar1);
    local_4 = CONCAT31(local_4._1_3_,1);
    fVar4 = FUN_00541ae0(g_configRegistryPath,puVar1,1.0);
    (&DAT_0104b0ac)[iVar3] = (float)fVar4;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    FUN_009b1000(iVar3,(&DAT_0104b0ac)[iVar3],0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"DJLevel",7);
  local_68 = 7;
  local_6c[7] = '\0';
  local_4 = 2;
  DAT_0104b09c = Config_GetOrCreateInt(g_configRegistryPath,&local_6c,3);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"NewsLevel",9);
  local_68 = 9;
  local_6c[9] = '\0';
  local_4 = 3;
  DAT_0104b0a0 = Config_GetOrCreateInt(g_configRegistryPath,&local_6c,3);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"TannoyLevel",0xb);
  local_68 = 0xb;
  local_6c[0xb] = '\0';
  local_4 = 4;
  DAT_0104b0a4 = Config_GetOrCreateInt(g_configRegistryPath,&local_6c,3);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"OtherLevel",10);
  local_68 = 10;
  local_6c[10] = '\0';
  local_4 = 5;
  DAT_0104b0a8 = Config_GetOrCreateInt(g_configRegistryPath,&local_6c,3);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"Output Config",0xd);
  local_68 = 0xd;
  local_6c[0xd] = '\0';
  local_4 = 6;
  lVar2 = Config_GetOrCreateInt(g_configRegistryPath,&local_6c,0);
  FUN_009b0930(lVar2);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f55b0 @ 004f55b0 ////

void __thiscall FUN_004f55b0(void *this,int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *local_8c;
  uint local_88;
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
  puStack_8 = &LAB_00caae2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = FUN_00569d60(local_4c,*(undefined4 *)((int)this + 0xad4));
  puVar3 = FUN_004312e0(local_6c,param_2,"_");
  FUN_0047aee0(&local_8c,puVar3,puVar2);
  local_4 = 0;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  cVar1 = FUN_009b09f0((int)local_8c);
  if (cVar1 == '\0') {
    puVar2 = FUN_004312e0(local_2c,param_2,"_2");
    FUN_004015d0(&local_8c,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  FUN_004015d0(param_1,local_8c,local_88);
  FUN_0045f450(param_1);
  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f56e0 @ 004f56e0 ////

void __fastcall FUN_004f56e0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_004f5720 @ 004f5720 ////

void __cdecl FUN_004f5720(void *param_1,undefined4 *param_2)

{
  if (param_1 != (void *)0x0) {
    FUN_004f4630(param_1,param_2);
  }
  return;
}


//// FUNCTION FUN_004f57a0 @ 004f57a0 ////

void __cdecl FUN_004f57a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    *param_1 = *param_3;
    _Count = param_3[2];
    _Source = (char *)param_3[1];
    if ((uint)param_1[3] <= _Count) {
      if (0x14 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)param_1[1]);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_1[3] = _Size;
      pvVar1 = _malloc(_Size);
      param_1[1] = pvVar1;
    }
    _strncpy((char *)param_1[1],_Source,_Count);
    param_1[2] = _Count;
    *(undefined1 *)(_Count + param_1[1]) = 0;
    param_1 = param_1 + 9;
  } while( true );
}


//// FUNCTION FUN_004f5840 @ 004f5840 ////

void __cdecl
FUN_004f5840(int *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7
            )

{
  undefined4 *puVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  
  while( true ) {
    if ((param_2 == param_4) && (param_3 == param_5)) break;
    param_5 = param_5 - 1;
    uVar6 = param_5;
    if (*(uint *)(param_4 + 8) <= param_5) {
      uVar6 = param_5 - *(uint *)(param_4 + 8);
    }
    param_7 = param_7 - 1;
    uVar4 = param_7;
    if (*(uint *)(param_6 + 8) <= param_7) {
      uVar4 = param_7 - *(uint *)(param_6 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(param_4 + 4) + uVar6 * 4);
    piVar2 = *(int **)(*(int *)(param_6 + 4) + uVar4 * 4);
    uVar6 = puVar1[1];
    pcVar3 = (char *)*puVar1;
    if ((uint)piVar2[2] <= uVar6) {
      if (0x14 < (uint)piVar2[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar2);
      }
      uVar4 = uVar6 + 0x20 & 0xffffffe0;
      piVar2[2] = uVar4;
      pvVar5 = _malloc(uVar4);
      *piVar2 = (int)pvVar5;
    }
    _strncpy((char *)*piVar2,pcVar3,uVar6);
    piVar2[1] = uVar6;
    *(undefined1 *)(uVar6 + *piVar2) = 0;
    uVar6 = puVar1[9];
    pcVar3 = (char *)puVar1[8];
    if ((uint)piVar2[10] <= uVar6) {
      if (0x14 < (uint)piVar2[10]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)piVar2[8]);
      }
      uVar4 = uVar6 + 0x20 & 0xffffffe0;
      piVar2[10] = uVar4;
      pvVar5 = _malloc(uVar4);
      piVar2[8] = (int)pvVar5;
    }
    _strncpy((char *)piVar2[8],pcVar3,uVar6);
    piVar2[9] = uVar6;
    *(undefined1 *)(uVar6 + piVar2[8]) = 0;
    piVar2[0x10] = puVar1[0x10];
    piVar2[0x11] = puVar1[0x11];
    piVar2[0x12] = puVar1[0x12];
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return;
}


//// FUNCTION FUN_004f5950 @ 004f5950 ////

void __cdecl
FUN_004f5950(int *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7
            )

{
  undefined4 *puVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  
  while( true ) {
    if ((param_2 == param_4) && (param_3 == param_5)) break;
    uVar6 = param_3;
    if (*(uint *)(param_2 + 8) <= param_3) {
      uVar6 = param_3 - *(uint *)(param_2 + 8);
    }
    uVar4 = param_7;
    if (*(uint *)(param_6 + 8) <= param_7) {
      uVar4 = param_7 - *(uint *)(param_6 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(param_2 + 4) + uVar6 * 4);
    piVar2 = *(int **)(*(int *)(param_6 + 4) + uVar4 * 4);
    uVar6 = puVar1[1];
    pcVar3 = (char *)*puVar1;
    if ((uint)piVar2[2] <= uVar6) {
      if (0x14 < (uint)piVar2[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar2);
      }
      uVar4 = uVar6 + 0x20 & 0xffffffe0;
      piVar2[2] = uVar4;
      pvVar5 = _malloc(uVar4);
      *piVar2 = (int)pvVar5;
    }
    _strncpy((char *)*piVar2,pcVar3,uVar6);
    piVar2[1] = uVar6;
    *(undefined1 *)(uVar6 + *piVar2) = 0;
    uVar6 = puVar1[9];
    pcVar3 = (char *)puVar1[8];
    if ((uint)piVar2[10] <= uVar6) {
      if (0x14 < (uint)piVar2[10]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)piVar2[8]);
      }
      uVar4 = uVar6 + 0x20 & 0xffffffe0;
      piVar2[10] = uVar4;
      pvVar5 = _malloc(uVar4);
      piVar2[8] = (int)pvVar5;
    }
    _strncpy((char *)piVar2[8],pcVar3,uVar6);
    piVar2[9] = uVar6;
    *(undefined1 *)(uVar6 + piVar2[8]) = 0;
    piVar2[0x10] = puVar1[0x10];
    piVar2[0x11] = puVar1[0x11];
    piVar2[0x12] = puVar1[0x12];
    param_7 = param_7 + 1;
    param_3 = param_3 + 1;
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return;
}


//// FUNCTION FUN_004f5aa0 @ 004f5aa0 ////

undefined4 * __cdecl FUN_004f5aa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  uint *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_3 + 3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        puVar2[-2] = (uint)(puVar2 + 1);
        *(undefined1 *)(puVar2 + 1) = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x14;
        _Count = param_1[2];
        _Source = (char *)param_1[1];
        if (0x13 < _Count) {
          _Size = _Count + 0x20 & 0xffffffe0;
          *puVar2 = _Size;
          pvVar1 = _malloc(_Size);
          puVar2[-2] = (uint)pvVar1;
        }
        _strncpy((char *)puVar2[-2],_Source,_Count);
        puVar2[-1] = _Count;
        *(undefined1 *)(_Count + puVar2[-2]) = 0;
      }
      param_1 = param_1 + 9;
      param_3 = param_3 + 9;
      puVar2 = puVar2 + 9;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_004f5b40 @ 004f5b40 ////

void __thiscall FUN_004f5b40(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  char *local_ec;
  undefined4 local_e8;
  uint local_e4;
  char local_e0 [20];
  void *local_cc;
  size_t local_c8;
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
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caae6c;
  local_c = ExceptionList;
  if ((*(int *)((int)this + 0xac) != 0) && (*(char *)((int)this + 0x162) == '\0')) {
    ExceptionList = &local_c;
    if (DAT_0104b0c4 != '\0') {
      ExceptionList = &local_c;
      puVar1 = FUN_004f51d0(DAT_0104b0e4,local_4c);
      puVar1 = FUN_0040d6b0(local_2c,"Music,",puVar1);
      FUN_004312e0(&local_cc,puVar1,",");
      local_4 = 0;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      puVar1 = FUN_0043c030(local_ac);
      local_4._0_1_ = 1;
      puVar1 = FUN_00568870(local_6c,puVar1);
      puVar1 = FUN_0047aee0(local_8c,&local_cc,puVar1);
      puVar1 = FUN_004312e0(&local_ec,puVar1,",");
      FUN_004015d0(&local_cc,(char *)*puVar1,puVar1[1]);
      if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec);
      }
      if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      local_4._0_1_ = 0;
      if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac[0]);
      }
      puVar1 = FUN_0043bb70(local_8c);
      local_4._0_1_ = 2;
      puVar1 = FUN_00568870(local_6c,puVar1);
      puVar1 = FUN_0047aee0(local_ac,&local_cc,puVar1);
      FUN_004015d0(&local_cc,(char *)*puVar1,puVar1[1]);
      if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac[0]);
      }
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
      puVar1 = FUN_004312e0(local_ac,&local_cc,"\r\n");
      FUN_004015d0(&local_cc,(char *)*puVar1,puVar1[1]);
      if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac[0]);
      }
      local_ec = local_e0;
      local_e0[0] = '\0';
      local_e8 = 0;
      local_e4 = 0x20;
      local_ec = _malloc(0x20);
      _strncpy(local_ec,"c:\\Movies\\soundsoaktest.csv",0x1b);
      local_e8 = 0x1b;
      local_ec[0x1b] = '\0';
      local_4._0_1_ = 3;
      FUN_009d3b90(&DAT_0104b0e8,&local_ec,1);
      local_4 = (uint)local_4._1_3_ << 8;
      if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec);
      }
      FUN_009d3530(&DAT_0104b0e8,local_cc,local_c8);
      FUN_009d34d0((undefined4 *)&DAT_0104b0e8);
      local_4 = 0xffffffff;
      if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_cc);
      }
    }
    local_4 = 0xffffffff;
    FUN_009b0730(*(undefined4 *)((int)this + 0xbc));
    FUN_009b05d0(*(undefined4 *)(*(int *)((int)this + 0xac) + 0x60),param_1,0,
                 *(undefined4 *)((int)this + 0xb4),*(undefined4 *)((int)this + 0xb0),
                 *(undefined4 *)(*(int *)((int)this + 0xac) + 0xbc),'\0');
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f5e80 @ 004f5e80 ////

void __fastcall FUN_004f5e80(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_004465f0();
  if (iVar2 == 0) {
    FUN_00446760();
  }
  iVar2 = *(int *)(param_1 + 0xaa8) * 0x164;
  if ((*(int *)(iVar2 + 0x198 + param_1) == 0) ||
     (bVar1 = FUN_009b0760(iVar2 + param_1 + 0x19c), !bVar1)) {
    FUN_00488fd0(*(int *)(param_1 + 0xaa8) * 0x164 + 0x124 + param_1,'\0');
    piVar3 = (int *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x184 + param_1);
    FUN_004465f0();
    FUN_00446600(piVar3);
    iVar2 = *(int *)(param_1 + 0xaa8) * 0x164;
    if (*(int *)(iVar2 + 0x198 + param_1) == 0) {
      return;
    }
    FUN_004f5b40((void *)(iVar2 + param_1 + 0xec),0);
  }
  iVar2 = *(int *)(param_1 + 0xaa8) * 0x164;
  if (*(float *)(*(int *)(iVar2 + 0x198 + param_1) + 0xb4) < *(float *)(iVar2 + 0x19c + param_1)) {
    FUN_009b07a0(*(undefined4 *)
                  (*(int *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x198 + param_1) + 0x8c));
    FUN_00488fd0(*(int *)(param_1 + 0xaa8) * 0x164 + 0x124 + param_1,'\x01');
  }
  return;
}


//// FUNCTION FUN_004f5f90 @ 004f5f90 ////

void __fastcall FUN_004f5f90(void *param_1)

{
  undefined4 uVar1;
  char *local_c4;
  undefined4 local_c0;
  uint local_bc;
  char local_b8 [20];
  undefined1 *local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_98 [20];
  byte local_84 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  byte local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  byte local_34 [4];
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
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caaeac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f3460((int)param_1);
  local_a4 = local_98;
  local_98[0] = 0;
  local_a0 = 0;
  local_9c = 0x14;
  local_c4 = local_b8;
  local_4 = 0;
  local_b8[0] = '\0';
  local_c0 = 0;
  local_bc = 0x14;
  _strncpy(local_c4,"LOT",3);
  local_c0 = 3;
  local_c4[3] = '\0';
  local_4._0_1_ = 1;
  FUN_004f55b0(param_1,(int *)&local_a4,&local_c4);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_bc) {
                    /* WARNING: Subroutine does not return */
    _free(local_c4);
  }
  local_84[0] = 0;
  local_84[1] = 0;
  local_84[2] = 0;
  local_84[3] = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_7c = 0xffffffff;
  local_80 = FUN_009b01a0(local_a4);
  if ((*(int *)((int)param_1 + 0x8c) == 0) || (*(int *)((int)param_1 + 0xaa8) != 2)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_009b1530(local_84,*(uint *)((int)param_1 + 0x508),-1,'\0',&DAT_00d17518,'\0',
                         0x3f800000,0.0);
  }
  local_c4 = local_b8;
  *(undefined4 *)((int)param_1 + 0xad8) = uVar1;
  local_b8[0] = '\0';
  local_c0 = 0;
  local_bc = 0x14;
  _strncpy(local_c4,"STREET",6);
  local_c0 = 6;
  local_c4[6] = '\0';
  local_4._0_1_ = 2;
  FUN_004f55b0(param_1,(int *)&local_a4,&local_c4);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_bc) {
                    /* WARNING: Subroutine does not return */
    _free(local_c4);
  }
  local_5c[0] = 0;
  local_5c[1] = 0;
  local_5c[2] = 0;
  local_5c[3] = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_54 = 0xffffffff;
  local_58 = FUN_009b01a0(local_a4);
  if ((*(int *)((int)param_1 + 0x8c) == 0) || (*(int *)((int)param_1 + 0xaa8) != 2)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_009b1530(local_5c,*(uint *)((int)param_1 + 0x508),-1,'\0',&DAT_00d17518,'\0',
                         0x3f800000,0.0);
  }
  *(undefined4 *)((int)param_1 + 0xadc) = uVar1;
  local_c4 = local_b8;
  local_b8[0] = '\0';
  local_c0 = 0;
  local_bc = 0x14;
  _strncpy(local_c4,"GLOBAL",6);
  local_c0 = 6;
  local_c4[6] = '\0';
  local_4._0_1_ = 3;
  FUN_004f55b0(param_1,(int *)&local_a4,&local_c4);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_bc) {
                    /* WARNING: Subroutine does not return */
    _free(local_c4);
  }
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_2c = 0xffffffff;
  local_30 = FUN_009b01a0(local_a4);
  if ((*(int *)((int)param_1 + 0x8c) == 0) || (*(int *)((int)param_1 + 0xaa8) != 2)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_009b1530(local_34,*(uint *)((int)param_1 + 0x508),-1,'\0',&DAT_00d17518,'\0',
                         0x3f800000,0.0);
  }
  *(undefined4 *)((int)param_1 + 0xae0) = uVar1;
  if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
    _free(local_a4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f6310 @ 004f6310 ////

void __fastcall FUN_004f6310(void *param_1)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  ulonglong uVar3;
  char cVar4;
  char *pcStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  char acStack_e0 [20];
  void *pvStack_cc;
  size_t sStack_c8;
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
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00caaeec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_0043b560();
  *(int *)((int)param_1 + 0xad0) = (int)uVar3;
  iVar1 = FUN_0049ab70();
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)param_1 + 0xad0);
    cVar4 = *(char *)((int)param_1 + 0xaf0);
    this = (void *)FUN_0049ab70();
    FUN_0049aa30(this,iVar1,cVar4);
    if (*(char *)((int)param_1 + 0xaf0) != '\0') {
      *(undefined1 *)((int)param_1 + 0xaf0) = 0;
    }
  }
  if (DAT_0105bea4 != (code *)0x0) {
    (*DAT_0105bea4)();
  }
  uVar3 = FUN_00acd42c();
  if (*(int *)((int)param_1 + 0xad4) != (int)uVar3) {
    if (DAT_0105bea4 != (code *)0x0) {
      (*DAT_0105bea4)();
    }
    uVar3 = FUN_00acd42c();
    *(int *)((int)param_1 + 0xad4) = (int)uVar3;
    FUN_004f3460((int)param_1);
    FUN_004f5f90(param_1);
  }
  if (DAT_0104b0c4 != '\0') {
    puVar2 = FUN_00569d60(apvStack_4c,*(undefined4 *)((int)param_1 + 0xad0));
    puVar2 = FUN_0040d6b0(apvStack_2c,"Year,",puVar2);
    FUN_004312e0(&pvStack_cc,puVar2,",");
    iStack_4 = 0;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
    puVar2 = FUN_0043c030(apvStack_ac);
    iStack_4._0_1_ = 1;
    puVar2 = FUN_00568870(apvStack_6c,puVar2);
    puVar2 = FUN_0047aee0(apvStack_8c,&pvStack_cc,puVar2);
    puVar2 = FUN_004312e0(&pcStack_ec,puVar2,",");
    FUN_004015d0(&pvStack_cc,(char *)*puVar2,puVar2[1]);
    if (0x14 < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_ec);
    }
    if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_8c[0]);
    }
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_6c[0]);
    }
    iStack_4._0_1_ = 0;
    if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_ac[0]);
    }
    puVar2 = FUN_0043bb70(apvStack_8c);
    iStack_4._0_1_ = 2;
    puVar2 = FUN_00568870(apvStack_6c,puVar2);
    puVar2 = FUN_0047aee0(apvStack_ac,&pvStack_cc,puVar2);
    FUN_004015d0(&pvStack_cc,(char *)*puVar2,puVar2[1]);
    if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_ac[0]);
    }
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_6c[0]);
    }
    if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_8c[0]);
    }
    puVar2 = FUN_004312e0(apvStack_ac,&pvStack_cc,"\r\n");
    FUN_004015d0(&pvStack_cc,(char *)*puVar2,puVar2[1]);
    if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_ac[0]);
    }
    pcStack_ec = acStack_e0;
    acStack_e0[0] = '\0';
    uStack_e8 = 0;
    uStack_e4 = 0x20;
    pcStack_ec = _malloc(0x20);
    _strncpy(pcStack_ec,"c:\\Movies\\soundsoaktest.csv",0x1b);
    uStack_e8 = 0x1b;
    pcStack_ec[0x1b] = '\0';
    iStack_4._0_1_ = 3;
    FUN_009d3b90(&DAT_0104b0e8,&pcStack_ec,1);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (0x14 < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_ec);
    }
    FUN_009d3530(&DAT_0104b0e8,pvStack_cc,sStack_c8);
    FUN_009d34d0((undefined4 *)&DAT_0104b0e8);
    if (0x14 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_cc);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004f6700 @ 004f6700 ////

void __fastcall FUN_004f6700(int param_1)

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


//// FUNCTION FUN_004f6730 @ 004f6730 ////

undefined4 * FUN_004f6730(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_004f46e0(param_1,param_2,param_3);
  return param_1 + param_2 * 2;
}


//// FUNCTION FUN_004f6760 @ 004f6760 ////

void __fastcall FUN_004f6760(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_004f3b50(*(undefined4 **)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4));
    uVar2 = *(int *)(param_1 + 0xc) + 1;
    *(uint *)(param_1 + 0xc) = uVar2;
    if (*(uint *)(param_1 + 8) <= uVar2) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    piVar1 = (int *)(param_1 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_004f67a0 @ 004f67a0 ////

void __fastcall FUN_004f67a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar2 = *(int *)(param_1 + 0x10) + -1 + *(int *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(param_1 + 8);
    }
    FUN_004f3b50(*(undefined4 **)(*(int *)(param_1 + 4) + uVar2 * 4));
    piVar1 = (int *)(param_1 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_004f6860 @ 004f6860 ////

void __cdecl FUN_004f6860(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  uint *puVar2;
  
  if (param_2 != 0) {
    puVar2 = param_1 + 3;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        puVar2[-2] = (uint)(puVar2 + 1);
        *(undefined1 *)(puVar2 + 1) = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x14;
        _Count = param_3[2];
        _Source = (char *)param_3[1];
        if (0x13 < _Count) {
          _Size = _Count + 0x20 & 0xffffffe0;
          *puVar2 = _Size;
          pvVar1 = _malloc(_Size);
          puVar2[-2] = (uint)pvVar1;
        }
        _strncpy((char *)puVar2[-2],_Source,_Count);
        puVar2[-1] = _Count;
        *(undefined1 *)(_Count + puVar2[-2]) = 0;
      }
      param_1 = param_1 + 9;
      puVar2 = puVar2 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_004f6960 @ 004f6960 ////

void __fastcall FUN_004f6960(void *param_1)

{
  bool bVar1;
  
  if (((-1 < *(int *)((int)param_1 + 0xad8)) && (-1 < *(int *)((int)param_1 + 0xadc))) &&
     (-1 < *(int *)((int)param_1 + 0xae0))) {
    bVar1 = FUN_009b1140(*(int *)((int)param_1 + 0xad8));
    if (bVar1) {
      bVar1 = FUN_009b1140(*(undefined4 *)((int)param_1 + 0xadc));
      if (bVar1) {
        bVar1 = FUN_009b1140(*(undefined4 *)((int)param_1 + 0xae0));
        if (bVar1) goto LAB_004f69bb;
      }
    }
  }
  FUN_004f5f90(param_1);
LAB_004f69bb:
  FUN_004f3b80((int)param_1);
  return;
}


//// FUNCTION FUN_004f69d0 @ 004f69d0 ////

void __fastcall FUN_004f69d0(int param_1)

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


//// FUNCTION FUN_004f6a40 @ 004f6a40 ////

void __thiscall
FUN_004f6a40(void *this,int *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = *(uint *)((int)this + 0xc);
  uVar3 = param_3 - uVar2;
  iVar4 = param_5 - param_3;
  uVar5 = *(int *)((int)this + 0x10) + uVar2;
  if (uVar3 < uVar5 - param_5) {
    FUN_004f5840(&param_2,(int)this,uVar2,param_2,param_3,param_4,param_5);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*(int *)((int)this + 0x10) != 0) {
        FUN_004f3b50(*(undefined4 **)(*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4));
        uVar5 = *(int *)((int)this + 0xc) + 1;
        *(uint *)((int)this + 0xc) = uVar5;
        if (*(uint *)((int)this + 8) <= uVar5) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        piVar1 = (int *)((int)this + 0x10);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
    }
  }
  else {
    FUN_004f5950(&param_2,param_4,param_5,(int)this,uVar5,param_2,param_3);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*(int *)((int)this + 0x10) != 0) {
        uVar5 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
        if (*(uint *)((int)this + 8) <= uVar5) {
          uVar5 = uVar5 - *(uint *)((int)this + 8);
        }
        FUN_004f3b50(*(undefined4 **)(*(int *)((int)this + 4) + uVar5 * 4));
        piVar1 = (int *)((int)this + 0x10);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
    }
  }
  iVar4 = *(int *)((int)this + 0xc);
  *param_1 = (int)this;
  param_1[1] = iVar4 + uVar3;
  return;
}


//// FUNCTION FUN_004f6b50 @ 004f6b50 ////

void __fastcall FUN_004f6b50(int param_1)

{
  int *piVar1;
  void *_Memory;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  while (iVar3 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar2 = *(int *)(param_1 + 0x10) + -1 + *(int *)(param_1 + 0xc);
      if (*(uint *)(param_1 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(param_1 + 8);
      }
      FUN_004f3b50(*(undefined4 **)(*(int *)(param_1 + 4) + uVar2 * 4));
      piVar1 = (int *)(param_1 + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
    iVar3 = *(int *)(param_1 + 0x10);
  }
  iVar3 = *(int *)(param_1 + 8);
  while (iVar3 != 0) {
    _Memory = *(void **)(*(int *)(param_1 + 4) + -4 + iVar3 * 4);
    iVar3 = iVar3 + -1;
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


//// FUNCTION FUN_004f6c90 @ 004f6c90 ////

undefined4 * FUN_004f6c90(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_004f6860(param_1,param_2,param_3);
  return param_1 + param_2 * 9;
}


//// FUNCTION FUN_004f6cc0 @ 004f6cc0 ////

void FUN_004f6cc0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    FUN_004f3b30(param_1);
  }
  return;
}


//// FUNCTION FUN_004f6cf0 @ 004f6cf0 ////

void __fastcall FUN_004f6cf0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00caaf21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d20978;
  local_4 = 2;
  _eh_vector_destructor_iterator_(param_1 + 0x37,0x14,5,thunk_FUN_004f6b50);
  if (0x14 < (uint)param_1[0x31]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2f]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00489bd0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f6d80 @ 004f6d80 ////

void __fastcall FUN_004f6d80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0xdc;
  iVar1 = 5;
  do {
    FUN_004f6b50(iVar2);
    iVar2 = iVar2 + 0x14;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x14c) = 0;
  if (-1 < *(int *)(param_1 + 0x140)) {
    FUN_009b11d0(*(int *)(param_1 + 0x140));
  }
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  if (-1 < *(int *)(param_1 + 0x144)) {
    FUN_009b11d0(*(int *)(param_1 + 0x144));
  }
  *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  if (-1 < *(int *)(param_1 + 0x148)) {
    FUN_009b11d0(*(int *)(param_1 + 0x148));
  }
  iVar2 = DAT_00e51cd4;
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  *(int *)(param_1 + 0x15c) = -iVar2;
  *(undefined1 *)(param_1 + 0x160) = 0;
  return;
}


//// FUNCTION FUN_004f6e10 @ 004f6e10 ////

void __thiscall FUN_004f6e10(void *this,int param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  void *this_00;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  int local_8 [2];
  
  this_00 = (void *)(param_1 * 0x164 + 0x1c8 + (int)this);
  param_1 = 5;
  do {
    uVar7 = *(uint *)((int)this_00 + 0xc);
    uVar5 = *(int *)((int)this_00 + 0x10) + uVar7;
    for (; uVar7 != uVar5; uVar7 = uVar7 + 1) {
      uVar2 = uVar7;
      if (*(uint *)((int)this_00 + 8) <= uVar7) {
        uVar2 = uVar7 - *(uint *)((int)this_00 + 8);
      }
      pbVar6 = (byte *)*param_2;
      pbVar3 = (byte *)**(undefined4 **)(*(int *)((int)this_00 + 4) + uVar2 * 4);
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_004f6e89:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004f6e8e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_004f6e89;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_004f6e8e:
      if (iVar4 == 0) {
        FUN_004f6a40(this_00,local_8,(int)this_00,uVar7,(int)this_00,uVar7 + 1);
        break;
      }
    }
    this_00 = (void *)((int)this_00 + 0x14);
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      return;
    }
  } while( true );
}


//// FUNCTION RadioChannel_SelectNextClip @ 004f6ed0 ////

void __fastcall RadioChannel_SelectNextClip(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulonglong uVar12;
  int local_18;
  float local_14;
  int local_8;
  uint local_4;
  
  uVar11 = *(uint *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x23c + param_1);
  if (uVar11 < 0x80000000) {
    return;
  }
  uVar12 = FUN_00990ae0(uVar11,param_2);
  iVar5 = *(int *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x234 + param_1);
  if (iVar5 < 0) {
LAB_004f6f26:
    bVar2 = false;
  }
  else {
    bVar3 = FUN_009b1140(iVar5);
    bVar2 = true;
    if (!bVar3) goto LAB_004f6f26;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x22c + param_1);
  if ((iVar5 < 0) || (bVar3 = FUN_009b1140(iVar5), !bVar3)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x230 + param_1);
  if (iVar5 < 0) {
LAB_004f6f7f:
    bVar1 = false;
  }
  else {
    bVar4 = FUN_009b1140(iVar5);
    bVar1 = true;
    if (!bVar4) goto LAB_004f6f7f;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x234 + param_1);
  if ((-1 < iVar5) && (!bVar2)) {
    if (-1 < iVar5) {
      FUN_009b11d0(iVar5);
    }
    *(undefined4 *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x234 + param_1) = 0xffffffff;
    bVar2 = false;
    if (bVar1) {
      uVar10 = *(undefined4 *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x230 + param_1);
    }
    else {
      if (!bVar3) goto LAB_004f700b;
      uVar10 = *(undefined4 *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x22c + param_1);
    }
    FUN_009b10a0(uVar10,DAT_0104b0b4);
  }
LAB_004f700b:
  if ((-1 < *(int *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x22c + param_1)) && (!bVar3)) {
    *(int *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x248 + param_1) = (int)uVar12;
    if (-1 < *(int *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x22c + param_1)) {
      FUN_009b11d0(*(undefined4 *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x22c + param_1));
    }
    *(undefined4 *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x22c + param_1) = 0xffffffff;
    bVar3 = false;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x230 + param_1);
  if ((-1 < iVar5) && (!bVar1)) {
    if (-1 < iVar5) {
      FUN_009b11d0(iVar5);
    }
    *(undefined4 *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x230 + param_1) = 0xffffffff;
    if (bVar3) {
      FUN_009b10a0(*(undefined4 *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x22c + param_1),DAT_0104b0b4
                  );
    }
  }
  if (0.1 <= DAT_0104b0b4) {
    local_14 = 0.1;
  }
  else {
    local_14 = DAT_0104b0b4;
  }
  iVar5 = *(int *)(param_1 + 0xaa8) * 0x164;
  if (*(int *)(iVar5 + 0x1d8 + param_1) == 0) {
    if ((DAT_00e51cd4 <= (int)uVar12 - *(int *)(iVar5 + 0x248 + param_1)) && (!bVar3)) {
      puVar7 = (uint *)(iVar5 + 0x1e8 + param_1);
      local_18 = 1;
      do {
        if (puVar7[1] != 0) {
          uVar11 = *puVar7;
          local_4 = puVar7[1] + uVar11;
          for (; uVar11 != local_4; uVar11 = uVar11 + 1) {
            uVar9 = puVar7[-1];
            uVar8 = uVar11;
            if (uVar9 <= uVar11) {
              uVar8 = uVar11 - uVar9;
            }
            if (*(char *)(*(int *)(*(int *)(puVar7[-2] + uVar8 * 4) + 0x44) + iVar5 + 0x238 +
                         param_1) == '\0') {
              uVar8 = uVar11;
              if (uVar9 <= uVar11) {
                uVar8 = uVar11 - uVar9;
              }
              if (local_18 <=
                  (int)(&DAT_0104b09c)[*(int *)(*(int *)(puVar7[-2] + uVar8 * 4) + 0x44)]) {
                iVar5 = *(int *)(iVar5 + 0x22c + param_1);
                if (-1 < iVar5) {
                  FUN_009b11d0(iVar5);
                }
                *(undefined4 *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x22c + param_1) = 0xffffffff;
                uVar9 = uVar11;
                if (puVar7[-1] <= uVar11) {
                  uVar9 = uVar11 - puVar7[-1];
                }
                iVar5 = *(int *)(param_1 + 0xaa8) * 0x164 + param_1;
                RadioChannel_PlayClip
                          ((void *)(iVar5 + 0xec),*(undefined4 **)(puVar7[-2] + uVar9 * 4),
                           (int *)(iVar5 + 0x22c));
                FUN_004f6a40((void *)(*(int *)(param_1 + 0xaa8) * 0x164 + param_1 + 0x1c8 +
                                     local_18 * 0x14),&local_8,(int)(puVar7 + -3),uVar11,
                             (int)(puVar7 + -3),uVar11 + 1);
                if (!bVar2) {
                  return;
                }
                FUN_009b10a0(*(undefined4 *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x22c + param_1),
                             local_14);
                return;
              }
            }
          }
        }
        local_18 = local_18 + 1;
        puVar7 = puVar7 + 5;
        if (4 < local_18) {
          return;
        }
      } while( true );
    }
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x230 + param_1);
    if (-1 < iVar5) {
      FUN_009b11d0(iVar5);
    }
    *(undefined4 *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x230 + param_1) = 0xffffffff;
    if (bVar3) {
      FUN_009b10a0(*(undefined4 *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x22c + param_1),local_14);
    }
    iVar5 = *(int *)(param_1 + 0xaa8) * 0x164;
    uVar11 = *(uint *)(iVar5 + 0x1d4 + param_1);
    iVar5 = iVar5 + 0x1c8 + param_1;
    uVar9 = uVar11;
    if (*(uint *)(iVar5 + 8) <= uVar11) {
      uVar9 = uVar11 - *(uint *)(iVar5 + 8);
    }
    iVar6 = *(int *)(param_1 + 0xaa8) * 0x164 + param_1;
    RadioChannel_PlayClip
              ((void *)(iVar6 + 0xec),*(undefined4 **)(*(int *)(iVar5 + 4) + uVar9 * 4),
               (int *)(iVar6 + 0x230));
    FUN_004f6a40((void *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x1c8 + param_1),&local_8,iVar5,uVar11
                 ,iVar5,uVar11 + 1);
    if (bVar2) {
      FUN_009b10a0(*(undefined4 *)(*(int *)(param_1 + 0xaa8) * 0x164 + 0x230 + param_1),local_14);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_004f7390 @ 004f7390 ////

void __fastcall FUN_004f7390(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    FUN_004f3b30(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004f73e0 @ 004f73e0 ////

void FUN_004f73e0(void)

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
  puStack_8 = &LAB_00caaf38;
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


//// FUNCTION FUN_004f7450 @ 004f7450 ////

void FUN_004f7450(void)

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
  puStack_8 = &LAB_00caaf58;
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


//// FUNCTION FUN_004f74c0 @ 004f74c0 ////

void FUN_004f74c0(void)

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
  puStack_8 = &LAB_00caaf78;
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


//// FUNCTION FUN_004f7530 @ 004f7530 ////

undefined4 * __thiscall FUN_004f7530(void *this,byte param_1)

{
  FUN_004f6cf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004f7550 @ 004f7550 ////

/* WARNING: Removing unreachable block (ram,0x004f766a) */

void __thiscall
FUN_004f7550(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,
            undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  byte local_20 [4];
  undefined1 local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caaf98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f2fc0((int)this,param_1);
  FUN_00488fd0((int)this + 0x38,'\0');
  pbVar4 = local_20;
  local_20[0] = 0;
  _strncpy((char *)pbVar4,"none",4);
  local_1c = 0;
  pbVar2 = (byte *)*param_2;
  local_4 = 0;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_004f75f4:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004f75f9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_004f75f4;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004f75f9:
  if (iVar3 == 0) {
    (**(code **)(*(int *)((int)this + 0x98) + 4))();
    *(undefined4 *)((int)this + 0xac) = 0;
  }
  else {
    pbVar4 = &stack0xffffffb0;
    uVar6 = 0;
    uVar7 = 0x14;
    FUN_004015d0(&stack0xffffffa4,(char *)*param_2,param_2[1]);
    uVar7 = FUN_00486820(pbVar4,uVar6,uVar7);
    (**(code **)(*(int *)((int)this + 0x98) + 4))();
    *(uint *)((int)this + 0xac) = uVar7;
  }
  (*(code *)**(undefined4 **)((int)this + 0x98))();
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0xb4) = param_3;
  FUN_004015d0((void *)((int)this + 0xbc),(char *)*param_4,param_4[1]);
  FUN_004f6d80((int)this);
  FUN_009b0f60(*(int *)((int)this + 0x154));
  if (-1 < *(int *)((int)this + 0x150)) {
    FUN_009b11d0(*(int *)((int)this + 0x150));
  }
  *(undefined4 *)((int)this + 0x150) = 0xffffffff;
  *(undefined1 *)((int)this + 0x161) = 0;
  *(undefined1 *)((int)this + 0x162) = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004f76f0 @ 004f76f0 ////

void __thiscall FUN_004f76f0(void *this,undefined4 param_1)

{
  FUN_009b07a0(param_1);
  FUN_004f6d80((int)this);
  FUN_009b0f60(*(int *)((int)this + 0x154));
  if (-1 < *(int *)((int)this + 0x150)) {
    FUN_009b11d0(*(int *)((int)this + 0x150));
  }
  *(undefined4 *)((int)this + 0x150) = 0xffffffff;
  *(undefined1 *)((int)this + 0x161) = 0;
  *(undefined1 *)((int)this + 0x162) = 0;
  return;
}


//// FUNCTION FUN_004f7750 @ 004f7750 ////

void __thiscall FUN_004f7750(void *this,char param_1)

{
  FUN_00488fd0((int)this + 0x38,param_1);
  FUN_004f6d80((int)this);
  if (-1 < *(int *)((int)this + 0x150)) {
    FUN_009b11d0(*(int *)((int)this + 0x150));
  }
  *(undefined4 *)((int)this + 0x150) = 0xffffffff;
  *(undefined1 *)((int)this + 0x161) = 0;
  *(undefined1 *)((int)this + 0x162) = 0;
  return;
}


//// FUNCTION FUN_004f77d0 @ 004f77d0 ////

void __thiscall FUN_004f77d0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 2) {
    iVar1 = FUN_0049ab70();
    if (iVar1 != 0) {
      FUN_0049ab70();
      FUN_0049aad0();
      FUN_004f7750((void *)((int)this + 0x3b4),'\x01');
      return;
    }
  }
  else if (param_1 == 4) {
    iVar1 = FUN_004465f0();
    if (iVar1 != 0) {
      FUN_004465f0();
      thunk_FUN_004872d0();
      FUN_004f7750((void *)((int)this + 0x67c),'\x01');
      return;
    }
  }
  iVar1 = param_1 * 0x164 + 0xec + (int)this;
  FUN_00488fd0(iVar1 + 0x38,'\0');
  FUN_004f6d80(iVar1);
  if (-1 < *(int *)(iVar1 + 0x150)) {
    FUN_009b11d0(*(int *)(iVar1 + 0x150));
  }
  *(undefined4 *)(iVar1 + 0x150) = 0xffffffff;
  *(undefined1 *)(iVar1 + 0x161) = 0;
  *(undefined1 *)(iVar1 + 0x162) = 0;
  return;
}


//// FUNCTION FUN_004f7890 @ 004f7890 ////

void __fastcall FUN_004f7890(int param_1)

{
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
  puStack_8 = &LAB_00cab020;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"none",4);
  local_28 = 4;
  local_2c[4] = '\0';
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"none",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004f7550((void *)(param_1 + 0xec),0,&local_4c,0xffffffff,&local_2c);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"none",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_2c = local_20;
  local_4 = 2;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"data/Audio/music/Tuning_Up.ogg",0x1e);
  local_28 = 0x1e;
  local_2c[0x1e] = '\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004f7550((void *)(param_1 + 0x250),1,&local_2c,0xffffffff,&local_4c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"radio",5);
  local_48 = 5;
  local_4c[5] = '\0';
  local_2c = local_20;
  local_4 = 4;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"none",4);
  local_28 = 4;
  local_2c[4] = '\0';
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004f7550((void *)(param_1 + 0x3b4),2,&local_2c,0,&local_4c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"none",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_2c = local_20;
  local_4 = 6;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"none",4);
  local_28 = 4;
  local_2c[4] = '\0';
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_004f7550((void *)(param_1 + 0x518),3,&local_2c,0xffffffff,&local_4c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"none",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_2c = local_20;
  local_4 = 8;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"none",4);
  local_28 = 4;
  local_2c[4] = '\0';
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_004f7550((void *)(param_1 + 0x67c),4,&local_2c,0,&local_4c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"none",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_2c = local_20;
  local_4 = 10;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x40;
  local_2c = _malloc(0x40);
  _strncpy(local_2c,"data/Audio/music/Relaxing_By_The_Sea.ogg",0x28);
  local_28 = 0x28;
  local_2c[0x28] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_004f7550((void *)(param_1 + 0x7e0),5,&local_2c,0xffffffff,&local_4c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"none",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_2c = local_20;
  local_4 = 0xc;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x40;
  local_2c = _malloc(0x40);
  _strncpy(local_2c,"data/Audio/music/Movies_Intro.ogg",0x21);
  local_28 = 0x21;
  local_2c[0x21] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0xd);
  FUN_004f7550((void *)(param_1 + 0x944),6,&local_2c,0xffffffff,&local_4c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f7da0 @ 004f7da0 ////

void __fastcall FUN_004f7da0(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    FUN_004f3b30(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004f7dc0 @ 004f7dc0 ////

void __thiscall FUN_004f7dc0(void *this,uint param_1)

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
  if (0x35e50d7 - uVar1 < param_1) {
    uVar1 = FUN_004f73e0();
  }
  uVar4 = uVar1 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  if ((param_1 < uVar4) && (uVar1 <= 0x35e50d7 - uVar4)) {
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


//// FUNCTION FUN_004f7fb0 @ 004f7fb0 ////

void __thiscall FUN_004f7fb0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cab030;
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
      uVar2 = FUN_004f7450();
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
      puVar5 = (undefined4 *)FUN_004f4160(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_004f46e0(puVar5,param_2,&local_20);
      FUN_004f4160(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
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
      FUN_004f4160(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_004f6730(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_004f3870(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_004f4160(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_004f40c0((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_004f3870(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004f8200 @ 004f8200 ////

void __thiscall FUN_004f8200(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  uint local_34;
  undefined1 local_30 [20];
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cab048;
  local_10 = ExceptionList;
  local_40 = *param_3;
  local_14 = &stack0xffffffb4;
  local_3c = local_30;
  local_30[0] = 0;
  local_38 = 0;
  local_34 = 0x14;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004015d0(&local_3c,(char *)param_3[1],param_3[2]);
  iVar2 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
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
      FUN_004f74c0();
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
        iVar2 = FUN_004f35d0((int)this);
        uVar5 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar5 * 0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar3;
      puVar4 = FUN_004f5aa0(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_004f6860(puVar4,param_2,&local_40);
      FUN_004f5aa0(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2 * 9);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x24;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_004f6cc0(*(int *)((int)this + 4),*(int *)((int)this + 8));
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
        FUN_004f5aa0(param_1,puVar3,param_1 + param_2 * 9);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_004f6c90(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x24,
                     &local_40);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x24;
        *(int *)((int)this + 8) = iVar2;
        FUN_004f57a0(param_1,(undefined4 *)(iVar2 + param_2 * -0x24),&local_40);
      }
      else {
        puVar4 = FUN_004f5aa0(puVar3 + param_2 * -9,puVar3,puVar3);
        *(undefined4 **)((int)this + 8) = puVar4;
        FUN_004f4740((int)param_1,(int)(puVar3 + param_2 * -9),puVar3);
        FUN_004f57a0(param_1,param_1 + param_2 * 9,&local_40);
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


//// FUNCTION FUN_004f8520 @ 004f8520 ////

void __fastcall FUN_004f8520(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cab08f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d20a18;
  param_1[0xe] = &PTR_LAB_00d209f8;
  local_4 = 1;
  FUN_004f7390((int)(param_1 + 0x2af));
  if ((void *)param_1[0x2ac] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2ac]);
  }
  param_1[0x2ac] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x3b,0x164,7,FUN_004f6cf0);
  local_4 = local_4 & 0xffffff00;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f85e0 @ 004f85e0 ////

void __fastcall FUN_004f85e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x23c);
  iVar2 = 7;
  do {
    FUN_009b07a0(0);
    FUN_004f6d80((int)(piVar1 + -0x54));
    FUN_009b0f60(piVar1[1]);
    if (-1 < *piVar1) {
      FUN_009b11d0(*piVar1);
    }
    *piVar1 = -1;
    *(undefined1 *)((int)piVar1 + 0x11) = 0;
    *(undefined1 *)((int)piVar1 + 0x12) = 0;
    FUN_009b0f60(4);
    piVar1 = piVar1 + 0x59;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_009b1190();
  return;
}


//// FUNCTION FUN_004f8650 @ 004f8650 ////

void __thiscall FUN_004f8650(void *this,undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    FUN_004f7dc0(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*(int *)(*(int *)((int)this + 4) + uVar2 * 4) == 0) {
    pvVar1 = operator_new(0x4c);
    *(void **)(*(int *)((int)this + 4) + uVar2 * 4) = pvVar1;
  }
  FUN_004f5720(*(void **)(*(int *)((int)this + 4) + uVar2 * 4),param_1);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}


//// FUNCTION FUN_004f8730 @ 004f8730 ////

void __thiscall FUN_004f8730(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x24 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x24;
      goto LAB_004f8775;
    }
  }
  iVar1 = 0;
LAB_004f8775:
  FUN_004f8200(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x24;
  return;
}


//// FUNCTION FUN_004f87a0 @ 004f87a0 ////

undefined4 * __thiscall FUN_004f87a0(void *this,byte param_1)

{
  FUN_004f8520(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004f87c0 @ 004f87c0 ////

void __thiscall
FUN_004f87c0(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
            undefined4 param_6)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *local_58;
  undefined4 local_54;
  uint local_50;
  undefined1 local_4c [20];
  undefined1 *local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c [20];
  undefined4 local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cab0a8;
  local_c = ExceptionList;
  if (*(int *)((int)this + param_1 * 0x14 + 0x68) == 0) {
    return;
  }
  if (*(char *)(*(int *)((int)this + 0xaa8) * 0x164 + param_5 + 0x238 + (int)this) != '\0') {
    return;
  }
  if ((&DAT_0104b09c)[param_5] == -1) {
    return;
  }
  if ((int)(&DAT_0104b09c)[param_5] < param_4) {
    return;
  }
  if (param_5 == 2) {
    iVar5 = *DAT_00f87b04;
  }
  else {
    if (param_5 != 1) goto LAB_004f8856;
    iVar5 = *DAT_00f87b04;
  }
  if (iVar5 < 300) {
    return;
  }
LAB_004f8856:
  iVar5 = param_1 * 0x164;
  param_1 = 0;
  puVar7 = (uint *)(iVar5 + 0x1d4 + (int)this);
  do {
    uVar9 = *puVar7;
    uVar6 = puVar7[1] + uVar9;
    for (; uVar9 != uVar6; uVar9 = uVar9 + 1) {
      uVar2 = uVar9;
      if (puVar7[-1] <= uVar9) {
        uVar2 = uVar9 - puVar7[-1];
      }
      pbVar8 = (byte *)*param_2;
      pbVar3 = (byte *)**(undefined4 **)(puVar7[-2] + uVar2 * 4);
      do {
        bVar1 = *pbVar3;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_004f88c9:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_004f88ce;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_004f88c9;
        pbVar3 = pbVar3 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_004f88ce:
      if (iVar4 == 0) {
        return;
      }
    }
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 5;
    if (4 < param_1) {
      local_58 = local_4c;
      local_38 = local_2c;
      local_4c[0] = 0;
      local_54 = 0;
      local_50 = 0x14;
      local_2c[0] = 0;
      local_34 = 0;
      local_30 = 0x14;
      local_4 = 0;
      ExceptionList = &local_c;
      FUN_004015d0(&local_58,(char *)*param_2,param_2[1]);
      FUN_004015d0(&local_38,(char *)*param_3,param_3[1]);
      local_18 = param_6;
      local_14 = param_5;
      uVar11 = FUN_00990ae0(param_6,param_5);
      uVar12 = FUN_00acd42c();
      local_10 = (int)uVar11 - (int)uVar12;
      if ((-1 < param_4) && (param_4 < 5)) {
        FUN_004f8650((void *)(iVar5 + param_4 * 0x14 + 0x1c8 + (int)this),&local_58);
      }
      if (local_30 < 0x15) {
        if (local_50 < 0x15) {
          ExceptionList = local_c;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_58);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_38);
    }
  } while( true );
}


//// FUNCTION FUN_004f8a00 @ 004f8a00 ////

void FUN_004f8a00(int param_1,undefined4 *param_2,int param_3)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab0c8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"tannoy",6);
  local_28 = 6;
  local_2c[6] = '\0';
  local_4 = 0;
  FUN_004f87c0(DAT_0104b0e4,param_1,param_2,&local_2c,param_3,2,0x3f000000);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f8ab0 @ 004f8ab0 ////

void __thiscall
FUN_004f8ab0(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
            undefined4 param_5)

{
  FUN_004f87c0(this,param_1,param_2,param_3,0,param_4,param_5);
  return;
}


//// FUNCTION FUN_004f8ae0 @ 004f8ae0 ////

void __fastcall FUN_004f8ae0(void *param_1)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  char cVar7;
  void **ppvVar8;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab0f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0049ab70();
  if (iVar2 == 0) {
    FUN_0049adf0();
  }
  FUN_0049ab70();
  FUN_0049aa00();
  uVar5 = FUN_0043b560();
  if (*(int *)((int)param_1 + 0xad0) != (int)uVar5) {
    FUN_004f6310(param_1);
  }
  bVar1 = FUN_009b0760(*(int *)((int)param_1 + 0xaa8) * 0x164 + 0x19c + (int)param_1);
  if ((*(int *)((int)param_1 + *(int *)((int)param_1 + 0xaa8) * 0x164 + 0x198) == 0) || (!bVar1)) {
    FUN_00488fd0((int)param_1 + *(int *)((int)param_1 + 0xaa8) * 0x164 + 0x124,'\0');
    cVar7 = *(char *)((int)param_1 + 0xaf0);
    piVar6 = (int *)(*(int *)((int)param_1 + 0xaa8) * 0x164 + 0x184 + (int)param_1);
    pvVar3 = (void *)FUN_0049ab70();
    FUN_0049ab80(pvVar3,piVar6,cVar7);
    if (*(char *)((int)param_1 + 0xaf0) != '\0') {
      *(undefined1 *)((int)param_1 + 0xaf0) = 0;
    }
    *(undefined1 *)(*(int *)((int)param_1 + 0xaa8) * 0x164 + 0x1a4 + (int)param_1) = 0;
    if (*(int *)((int)param_1 + *(int *)((int)param_1 + 0xaa8) * 0x164 + 0x198) == 0) {
      ExceptionList = local_c;
      return;
    }
    FUN_004f5b40((void *)((int)param_1 + *(int *)((int)param_1 + 0xaa8) * 0x164 + 0xec),0);
  }
  iVar4 = *(int *)((int)param_1 + 0xaa8) * 0x164;
  iVar2 = *(int *)(iVar4 + 0x198 + (int)param_1);
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return;
  }
  if (((*(char *)((int)param_1 + iVar4 + 0x1a4) == '\0') &&
      (*(float *)(iVar2 + 0xb8) < *(float *)((int)param_1 + iVar4 + 0x19c))) &&
     (*(float *)((int)param_1 + iVar4 + 0x19c) < 0.5)) {
    *(undefined1 *)((int)param_1 + iVar4 + 0x1a4) = 1;
    iVar2 = FUN_00990d30(0,6);
    if ((iVar2 < 5) &&
       (*(int *)(*(int *)((int)param_1 + 0xaa8) * 0x164 + 0x230 + (int)param_1) == -1)) {
      ppvVar8 = local_4c;
      pvVar3 = (void *)FUN_0049ab70();
      FUN_0049ac30(pvVar3,ppvVar8);
      local_4 = 0;
      if ((*(char *)(*(int *)((int)param_1 + 0xaa8) * 0x164 + 0x24c + (int)param_1) == '\0') ||
         (iVar2 = FUN_004155b0(local_4c,"_INTRO",0), iVar2 == -1)) {
        FUN_00401de0(local_2c,"radio",0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_004f87c0(param_1,2,local_4c,local_2c,1,0,0x3f800000);
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
      else {
        *(undefined1 *)(*(int *)((int)param_1 + 0xaa8) * 0x164 + 0x24c + (int)param_1) = 0;
      }
      local_4 = 0xffffffff;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
    }
  }
  iVar4 = *(int *)((int)param_1 + 0xaa8) * 0x164;
  iVar2 = *(int *)(iVar4 + 0x198 + (int)param_1);
  if (*(float *)(iVar2 + 0xb4) < *(float *)(iVar4 + 0x19c + (int)param_1)) {
    FUN_009b07a0(*(undefined4 *)(iVar2 + 0x8c));
    FUN_00488fd0(*(int *)((int)param_1 + 0xaa8) * 0x164 + 0x124 + (int)param_1,'\x01');
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f8da0 @ 004f8da0 ////

void __thiscall FUN_004f8da0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_004f46e0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_004f7fb0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_004f8e10 @ 004f8e10 ////

void __thiscall FUN_004f8e10(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x24) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x24))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_004f6860(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 9;
    return;
  }
  FUN_004f8730(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004f8ea0 @ 004f8ea0 ////

void __thiscall FUN_004f8ea0(void *this,float *param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  void *local_50 [2];
  uint local_48;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab108;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0xacc) == '\0') {
    if ((0.0 <= *param_1) && (*param_1 < 1.0 != (*param_1 == 1.0))) {
      fVar1 = *param_1;
      ExceptionList = &local_c;
      (&DAT_0104b0ac)[param_2] = fVar1;
      FUN_009b1000(param_2,fVar1,0);
    }
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = 0;
    local_30 = 6;
    ExceptionList = &local_c;
    puVar2 = FUN_00569c30(local_50,*param_1);
    FUN_004073f0(&local_2c,(char *)*puVar2,puVar2[1]);
    FUN_004073f0(&local_2c,",",1);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    puVar2 = FUN_00569d60(local_50,param_2);
    FUN_004073f0(&local_2c,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    FUN_004f8e10((void *)((int)this + 0xabc),&local_30);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f9000 @ 004f9000 ////

void __thiscall FUN_004f9000(void *this,float *param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  void *local_50 [2];
  uint local_48;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab128;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0xacc) == '\0') {
    if (*param_1 != 0.0) {
      fVar1 = (float)(&DAT_0104b0ac)[param_2] + *param_1;
      ExceptionList = &local_c;
      (&DAT_0104b0ac)[param_2] = fVar1;
      if (fVar1 <= 1.0) {
        if (fVar1 < 0.0) {
          (&DAT_0104b0ac)[param_2] = 0;
        }
      }
      else {
        (&DAT_0104b0ac)[param_2] = 0x3f800000;
      }
      FUN_009b1000(param_2,(&DAT_0104b0ac)[param_2],0);
    }
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = 0;
    local_30 = 7;
    ExceptionList = &local_c;
    puVar2 = FUN_00569c30(local_50,*param_1);
    FUN_004073f0(&local_2c,(char *)*puVar2,puVar2[1]);
    FUN_004073f0(&local_2c,",",1);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    puVar2 = FUN_00569d60(local_50,param_2);
    FUN_004073f0(&local_2c,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    FUN_004f8e10((void *)((int)this + 0xabc),&local_30);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f9190 @ 004f9190 ////

void __thiscall FUN_004f9190(void *this,int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  void *local_50 [2];
  uint local_48;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab148;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0xacc) == '\0') {
    cVar2 = (char)param_2;
    if ((cVar2 != '\0') || (*(int *)((int)this + 0xaa8) == param_1)) {
      ExceptionList = &local_c;
      *(char *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x24d + (int)this) = cVar2;
      *(char *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x24e + (int)this) = cVar2;
      if (cVar2 == '\0') {
        FUN_004f5b40((void *)(param_1 * 0x164 + 0xec + (int)this),param_3);
      }
      else {
        FUN_009b07a0(param_3);
      }
      FUN_009b0fb0(*(int *)((int)this + param_1 * 0x164 + 0x240),param_2);
      FUN_009b0fb0(*(int *)((int)this + param_1 * 0x164 + 0x244),param_2);
      if (cVar2 != '\0') {
        FUN_009b0f60(4);
      }
    }
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = 0;
    local_30 = 2;
    ExceptionList = &local_c;
    puVar1 = FUN_00569d60(local_50,param_1);
    FUN_004073f0(&local_2c,(char *)*puVar1,puVar1[1]);
    FUN_004073f0(&local_2c,",",1);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    puVar1 = FUN_00569d60(local_50,param_2 & 0xff);
    FUN_004073f0(&local_2c,(char *)*puVar1,puVar1[1]);
    FUN_004073f0(&local_2c,",",1);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    puVar1 = FUN_00569d60(local_50,param_3);
    FUN_004073f0(&local_2c,(char *)*puVar1,puVar1[1]);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    FUN_004f8e10((void *)((int)this + 0xabc),&local_30);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f9390 @ 004f9390 ////

void __thiscall FUN_004f9390(void *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  char cVar2;
  void *local_50 [2];
  uint local_48;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab168;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0xacc) == '\0') {
    cVar2 = (char)param_2;
    if ((cVar2 != '\0') || (*(int *)((int)this + 0xaa8) == param_1)) {
      ExceptionList = &local_c;
      *(char *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x24d + (int)this) = cVar2;
      FUN_009b0fb0(*(int *)((int)this + param_1 * 0x164 + 0x240),param_2);
      FUN_009b0fb0(*(int *)((int)this + param_1 * 0x164 + 0x244),param_2);
      if (cVar2 != '\0') {
        FUN_009b0f60(4);
      }
    }
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = 0;
    local_30 = 3;
    ExceptionList = &local_c;
    puVar1 = FUN_00569d60(local_50,param_1);
    FUN_004073f0(&local_2c,(char *)*puVar1,puVar1[1]);
    FUN_004073f0(&local_2c,",",1);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    puVar1 = FUN_00569d60(local_50,param_2 & 0xff);
    FUN_004073f0(&local_2c,(char *)*puVar1,puVar1[1]);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    FUN_004f8e10((void *)((int)this + 0xabc),&local_30);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f9510 @ 004f9510 ////

void __thiscall FUN_004f9510(void *this,uint param_1)

{
  undefined4 *puVar1;
  void *local_50 [2];
  uint local_48;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab188;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0xacc) == '\0') {
    if (*(int *)((int)this + 0xaa8) == 2) {
      ExceptionList = &local_c;
      FUN_009b1210(*(undefined4 *)((int)this + 0xad8),param_1);
      FUN_009b1210(*(undefined4 *)((int)this + 0xadc),param_1);
      FUN_009b1210(*(undefined4 *)((int)this + 0xae0),param_1);
    }
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = 0;
    local_30 = 4;
    ExceptionList = &local_c;
    puVar1 = FUN_00569d60(local_50,param_1 & 0xff);
    FUN_004073f0(&local_2c,(char *)*puVar1,puVar1[1]);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    FUN_004f8e10((void *)((int)this + 0xabc),&local_30);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f9620 @ 004f9620 ////

void __thiscall FUN_004f9620(void *this,int param_1,byte param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *local_50 [2];
  uint local_48;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab1a8;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0xacc) == '\0') {
    if ((param_2 != 0) || (*(int *)((int)this + 0xaa8) == param_1)) {
      ExceptionList = &local_c;
      *(byte *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x24e + (int)this) = param_2;
      if (param_2 != 0) {
        FUN_009b07a0(param_3);
        ExceptionList = local_c;
        return;
      }
      FUN_004f5b40((void *)(param_1 * 0x164 + 0xec + (int)this),param_3);
    }
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = 0;
    local_30 = 5;
    ExceptionList = &local_c;
    puVar1 = FUN_00569d60(local_50,param_1);
    FUN_004073f0(&local_2c,(char *)*puVar1,puVar1[1]);
    FUN_004073f0(&local_2c,",",1);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    puVar1 = FUN_00569d60(local_50,(uint)param_2);
    FUN_004073f0(&local_2c,(char *)*puVar1,puVar1[1]);
    FUN_004073f0(&local_2c,",",1);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    puVar1 = FUN_00569d60(local_50,param_3);
    FUN_004073f0(&local_2c,(char *)*puVar1,puVar1[1]);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    FUN_004f8e10((void *)((int)this + 0xabc),&local_30);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f97e0 @ 004f97e0 ////

void __thiscall FUN_004f97e0(void *this,undefined4 *param_1)

{
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab1c8;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0xacc) == '\0') {
    if (*(int *)((int)this + *(int *)((int)this + 0xaa8) * 0x14 + 0x6c) != 0) {
      ExceptionList = &local_c;
      FUN_004f4320((void *)(*(int *)((int)this + 0xaa8) * 0x164 + 0xec + (int)this),param_1);
    }
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = 0;
    local_30 = 8;
    ExceptionList = &local_c;
    FUN_004073f0(&local_2c,(char *)*param_1,param_1[1]);
    FUN_004f8e10((void *)((int)this + 0xabc),&local_30);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f98b0 @ 004f98b0 ////

void __fastcall FUN_004f98b0(void *param_1)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  pfVar1 = (float *)&DAT_0104b0ac;
  do {
    FUN_004f8ea0(param_1,pfVar1,iVar2);
    pfVar1 = pfVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar1 < 0x104b0b8);
  FUN_009b0930(DAT_0104b0bc);
  return;
}


//// FUNCTION FUN_004f98f0 @ 004f98f0 ////

void __thiscall FUN_004f98f0(void *this,int param_1,int param_2,byte param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_58;
  int local_54;
  void *local_50 [2];
  uint local_48;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab1e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)this + 0xacc) == '\0') {
    ExceptionList = &local_c;
    if (param_3 != 0) {
      ExceptionList = &local_c;
      bVar1 = FUN_005e9250(DAT_0104d82c);
      if (bVar1) goto LAB_004f9a47;
    }
    if (*(int *)((int)this + 0xaa8) != param_1) {
      FUN_004f9190(this,*(int *)((int)this + 0xaa8),1,DAT_00e51cd8);
      *(int *)((int)this + 0xaa8) = param_1;
      if ((param_1 != 2) || (*(char *)(DAT_00f87b04 + 9) == '\0')) {
        FUN_004f77d0(this,param_1);
        FUN_004f9190(this,*(int *)((int)this + 0xaa8),0,DAT_00e51cd8);
      }
      piVar2 = *(int **)((int)this + 0xab0);
      if (piVar2 != *(int **)((int)this + 0xab4)) {
        do {
          if ((piVar2[1] == param_2) && (*piVar2 == param_1)) goto LAB_004f99d1;
          piVar2 = piVar2 + 2;
        } while (piVar2 != *(int **)((int)this + 0xab4));
      }
      local_54 = param_2;
      local_58 = param_1;
      FUN_004f8da0((void *)((int)this + 0xaac),&local_58);
    }
LAB_004f99d1:
    DAT_00e67ec4 = *(undefined4 *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x240 + (int)this);
    DAT_00e67ec8 = *(undefined4 *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x244 + (int)this);
    DAT_0105cc38 = *(int *)((int)this + (*(int *)((int)this + 0xaa8) + 5) * 0x14) == 0;
    DAT_0105cc39 = *(int *)((int)this + *(int *)((int)this + 0xaa8) * 0x14 + 0x68) == 0;
    ExceptionList = local_c;
    return;
  }
LAB_004f9a47:
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  local_30 = 0;
  puVar3 = FUN_00569d60(local_50,param_1);
  FUN_004073f0(&local_2c,(char *)*puVar3,puVar3[1]);
  FUN_004073f0(&local_2c,",",1);
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50[0]);
  }
  puVar3 = FUN_00569d60(local_50,param_2);
  FUN_004073f0(&local_2c,(char *)*puVar3,puVar3[1]);
  FUN_004073f0(&local_2c,",",1);
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50[0]);
  }
  puVar3 = FUN_00569d60(local_50,(uint)param_3);
  FUN_004073f0(&local_2c,(char *)*puVar3,puVar3[1]);
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50[0]);
  }
  FUN_004f8e10((void *)((int)this + 0xabc),&local_30);
  *(undefined1 *)((int)this + 0xacc) = 1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f9b70 @ 004f9b70 ////

void __thiscall FUN_004f9b70(void *this,int param_1,int param_2,byte param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  void *local_50 [2];
  uint local_48;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(char *)((int)this + 0xacc) != '\0') ||
     ((ExceptionList = &local_c, param_3 != 0 &&
      (ExceptionList = &local_c, bVar5 = FUN_005e9250(DAT_0104d82c), bVar5)))) {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = 0;
    local_30 = 1;
    puVar7 = FUN_00569d60(local_50,param_1);
    FUN_004073f0(&local_2c,(char *)*puVar7,puVar7[1]);
    FUN_004073f0(&local_2c,",",1);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    puVar7 = FUN_00569d60(local_50,param_2);
    FUN_004073f0(&local_2c,(char *)*puVar7,puVar7[1]);
    FUN_004073f0(&local_2c,",",1);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    puVar7 = FUN_00569d60(local_50,(uint)param_3);
    FUN_004073f0(&local_2c,(char *)*puVar7,puVar7[1]);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    FUN_004f8e10((void *)((int)this + 0xabc),&local_30);
    *(undefined1 *)((int)this + 0xacc) = 1;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  else {
    piVar6 = *(int **)((int)this + 0xab0);
    if (piVar6 != *(int **)((int)this + 0xab4)) {
      while ((piVar6[1] != param_2 || (*piVar6 != param_1))) {
        piVar6 = piVar6 + 2;
        if (piVar6 == *(int **)((int)this + 0xab4)) {
          ExceptionList = local_c;
          return;
        }
      }
      iVar1 = *piVar6;
      piVar2 = *(int **)((int)this + 0xab4);
      piVar4 = piVar6;
      while (piVar4 = piVar4 + 2, piVar4 != piVar2) {
        *piVar6 = *piVar4;
        piVar6[1] = piVar4[1];
        piVar6 = piVar6 + 2;
      }
      *(int *)((int)this + 0xab4) = *(int *)((int)this + 0xab4) + -8;
      if (iVar1 != -1) {
        if (iVar1 == *(int *)((int)this + 0xaa8)) {
          if ((*(int *)((int)this + 0xab0) == 0) ||
             (*(int *)((int)this + 0xab4) - *(int *)((int)this + 0xab0) >> 3 == 0)) {
            FUN_004f76f0((void *)(*(int *)((int)this + 0xaa8) * 0x164 + 0xec + (int)this),
                         DAT_00e51cd8);
            FUN_009b0f60(4);
            *(undefined4 *)((int)this + 0xaa8) = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)((int)this + 0xab4) + -8);
            *(int *)((int)this + 0xaa8) = iVar3;
            if (iVar1 != iVar3) {
              FUN_004f76f0((void *)(iVar1 * 0x164 + 0xec + (int)this),DAT_00e51cd8);
              FUN_009b0f60(4);
              if ((*(int *)((int)this + 0xaa8) != 2) || (*(char *)(DAT_00f87b04 + 9) == '\0')) {
                FUN_004f9190(this,*(int *)((int)this + 0xaa8),0,DAT_00e51cd8);
              }
            }
          }
        }
        else {
          FUN_004f6d80((int)this + iVar1 * 0x164 + 0xec);
          FUN_009b0f60(*(int *)((int)this + iVar1 * 0x164 + 0x240));
          iVar3 = *(int *)((int)this + iVar1 * 0x164 + 0x23c);
          if (-1 < iVar3) {
            FUN_009b11d0(iVar3);
          }
          *(undefined4 *)((int)this + iVar1 * 0x164 + 0x23c) = 0xffffffff;
          *(undefined1 *)((int)this + iVar1 * 0x164 + 0x24d) = 0;
          *(undefined1 *)((int)this + iVar1 * 0x164 + 0x24e) = 0;
        }
        DAT_00e67ec4 = *(undefined4 *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x240 + (int)this);
        DAT_00e67ec8 = *(undefined4 *)(*(int *)((int)this + 0xaa8) * 0x164 + 0x244 + (int)this);
        DAT_0105cc38 = *(int *)((int)this + (*(int *)((int)this + 0xaa8) + 5) * 0x14) == 0;
        DAT_0105cc39 = *(int *)((int)this + *(int *)((int)this + 0xaa8) * 0x14 + 0x68) == 0;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004f9ee0 @ 004f9ee0 ////

void __fastcall FUN_004f9ee0(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  float fStack_2b4;
  void *local_2b0;
  undefined4 *local_2ac;
  bool bStack_2a8;
  undefined3 uStack_2a7;
  uint uStack_2a4;
  bool bStack_2a0;
  undefined3 uStack_29f;
  uint uStack_29c;
  uint uStack_298;
  bool bStack_294;
  undefined3 uStack_293;
  int iStack_290;
  void *local_28c [2];
  uint local_284;
  void *local_26c [2];
  uint uStack_264;
  void *local_24c [2];
  uint uStack_244;
  void *apvStack_22c [2];
  uint uStack_224;
  void *apvStack_20c [2];
  uint uStack_204;
  void *local_1ec [2];
  uint uStack_1e4;
  void *apvStack_1cc [2];
  uint uStack_1c4;
  void *local_1ac [2];
  uint uStack_1a4;
  void *local_18c [2];
  uint uStack_184;
  void *apvStack_16c [2];
  uint uStack_164;
  void *apvStack_14c [2];
  uint uStack_144;
  void *apvStack_12c [2];
  uint uStack_124;
  void *local_10c [2];
  uint uStack_104;
  void *local_ec [2];
  uint uStack_e4;
  void *apvStack_cc [2];
  uint uStack_c4;
  void *apvStack_ac [2];
  uint uStack_a4;
  void *apvStack_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab2f3;
  local_c = ExceptionList;
  local_2ac = *(undefined4 **)((int)param_1 + 0xac0);
  ExceptionList = &local_c;
  *(undefined1 *)((int)param_1 + 0xacc) = 0;
  local_2b0 = param_1;
  if (local_2ac != *(undefined4 **)((int)param_1 + 0xac4)) {
    puVar3 = local_2ac + 1;
    do {
      switch(*local_2ac) {
      case 0:
        piVar2 = FUN_0056b1a0((int *)local_10c,puVar3,0);
        local_4 = 0;
        fStack_2b4 = (float)FUN_00567d80(piVar2);
        local_4 = 0xffffffff;
        if (0x14 < uStack_104) {
                    /* WARNING: Subroutine does not return */
          _free(local_10c[0]);
        }
        piVar2 = FUN_0056b1a0((int *)apvStack_4c,puVar3,1);
        local_4 = 1;
        iStack_290 = FUN_00567d80(piVar2);
        local_4 = 0xffffffff;
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        piVar2 = FUN_0056b1a0((int *)apvStack_20c,puVar3,2);
        local_4 = 2;
        iVar4 = FUN_00567d80(piVar2);
        _bStack_2a0 = CONCAT31(uStack_29f,iVar4 != 0);
        local_4 = 0xffffffff;
        if (0x14 < uStack_204) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_20c[0]);
        }
        FUN_004f98f0(DAT_0104b0e4,(int)fStack_2b4,iStack_290,iVar4 != 0);
        break;
      case 1:
        piVar2 = FUN_0056b1a0((int *)local_26c,puVar3,0);
        local_4 = 3;
        fStack_2b4 = (float)FUN_00567d80(piVar2);
        local_4 = 0xffffffff;
        if (0x14 < uStack_264) {
                    /* WARNING: Subroutine does not return */
          _free(local_26c[0]);
        }
        piVar2 = FUN_0056b1a0((int *)apvStack_1cc,puVar3,1);
        local_4 = 4;
        iVar4 = FUN_00567d80(piVar2);
        local_4 = 0xffffffff;
        if (0x14 < uStack_1c4) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_1cc[0]);
        }
        piVar2 = FUN_0056b1a0((int *)apvStack_8c,puVar3,2);
        local_4 = 5;
        iVar1 = FUN_00567d80(piVar2);
        _bStack_2a8 = CONCAT31(uStack_2a7,iVar1 != 0);
        local_4 = 0xffffffff;
        if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_8c[0]);
        }
        FUN_004f9b70(DAT_0104b0e4,(int)fStack_2b4,iVar4,iVar1 != 0);
        param_1 = local_2b0;
        break;
      case 2:
        piVar2 = FUN_0056b1a0((int *)local_18c,puVar3,0);
        local_4 = 6;
        fStack_2b4 = (float)FUN_00567d80(piVar2);
        local_4 = 0xffffffff;
        if (0x14 < uStack_184) {
                    /* WARNING: Subroutine does not return */
          _free(local_18c[0]);
        }
        piVar2 = FUN_0056b1a0((int *)apvStack_cc,puVar3,1);
        local_4 = 7;
        iVar4 = FUN_00567d80(piVar2);
        uStack_298 = CONCAT31(uStack_298._1_3_,iVar4 != 0);
        local_4 = 0xffffffff;
        if (0x14 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_cc[0]);
        }
        piVar2 = FUN_0056b1a0((int *)apvStack_14c,puVar3,2);
        local_4 = 8;
        iVar4 = FUN_00567d80(piVar2);
        local_4 = 0xffffffff;
        if (0x14 < uStack_144) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_14c[0]);
        }
        FUN_004f9190(local_2b0,(int)fStack_2b4,uStack_298,(uint)(iVar4 != 0));
        param_1 = local_2b0;
        break;
      case 3:
        piVar2 = FUN_0056b1a0((int *)local_24c,puVar3,0);
        local_4 = 9;
        iVar4 = FUN_00567d80(piVar2);
        local_4 = 0xffffffff;
        if (0x14 < uStack_244) {
                    /* WARNING: Subroutine does not return */
          _free(local_24c[0]);
        }
        piVar2 = FUN_0056b1a0((int *)apvStack_22c,puVar3,1);
        local_4 = 10;
        iVar1 = FUN_00567d80(piVar2);
        uStack_2a4 = CONCAT31(uStack_2a4._1_3_,iVar1 != 0);
        local_4 = 0xffffffff;
        if (0x14 < uStack_224) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_22c[0]);
        }
        FUN_004f9390(local_2b0,iVar4,uStack_2a4);
        param_1 = local_2b0;
        break;
      case 4:
        piVar2 = FUN_0056b1a0((int *)local_1ec,puVar3,0);
        local_4 = 0xb;
        iVar4 = FUN_00567d80(piVar2);
        uStack_29c = CONCAT31(uStack_29c._1_3_,iVar4 != 0);
        local_4 = 0xffffffff;
        if (0x14 < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1ec[0]);
        }
        FUN_004f9510(param_1,uStack_29c);
        break;
      case 5:
        piVar2 = FUN_0056b1a0((int *)local_1ac,puVar3,0);
        local_4 = 0xc;
        fStack_2b4 = (float)FUN_00567d80(piVar2);
        local_4 = 0xffffffff;
        if (0x14 < uStack_1a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1ac[0]);
        }
        piVar2 = FUN_0056b1a0((int *)apvStack_16c,puVar3,1);
        local_4 = 0xd;
        iVar4 = FUN_00567d80(piVar2);
        _bStack_294 = CONCAT31(uStack_293,iVar4 != 0);
        local_4 = 0xffffffff;
        if (0x14 < uStack_164) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_16c[0]);
        }
        piVar2 = FUN_0056b1a0((int *)apvStack_12c,puVar3,2);
        local_4 = 0xe;
        iVar4 = FUN_00567d80(piVar2);
        local_4 = 0xffffffff;
        if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_12c[0]);
        }
        FUN_004f9620(local_2b0,(int)fStack_2b4,(byte)_bStack_294,(uint)(iVar4 != 0));
        param_1 = local_2b0;
        break;
      case 6:
        piVar2 = FUN_0056b1a0((int *)local_ec,puVar3,0);
        local_4 = 0xf;
        fVar5 = FUN_00567d60(piVar2);
        fStack_2b4 = (float)fVar5;
        local_4 = 0xffffffff;
        if (0x14 < uStack_e4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ec[0]);
        }
        piVar2 = FUN_0056b1a0((int *)apvStack_ac,puVar3,1);
        local_4 = 0x10;
        iVar4 = FUN_00567d80(piVar2);
        local_4 = 0xffffffff;
        if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_ac[0]);
        }
        FUN_004f8ea0(local_2b0,&fStack_2b4,iVar4);
        param_1 = local_2b0;
        break;
      case 7:
        piVar2 = FUN_0056b1a0((int *)local_6c,puVar3,0);
        local_4 = 0x11;
        fVar5 = FUN_00567d60(piVar2);
        fStack_2b4 = (float)fVar5;
        local_4 = 0xffffffff;
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        piVar2 = FUN_0056b1a0((int *)apvStack_2c,puVar3,1);
        local_4 = 0x12;
        iVar4 = FUN_00567d80(piVar2);
        local_4 = 0xffffffff;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        FUN_004f9000(local_2b0,&fStack_2b4,iVar4);
        param_1 = local_2b0;
        break;
      case 8:
        FUN_0056b1a0((int *)local_28c,puVar3,0);
        local_4 = 0x13;
        FUN_004f97e0(param_1,local_28c);
        local_4 = 0xffffffff;
        if (0x14 < local_284) {
                    /* WARNING: Subroutine does not return */
          _free(local_28c[0]);
        }
      }
      local_2ac = local_2ac + 9;
      puVar3 = puVar3 + 9;
    } while (local_2ac != *(undefined4 **)((int)param_1 + 0xac4));
  }
  iVar4 = *(int *)((int)param_1 + 0xac0);
  if (iVar4 == 0) {
    *(undefined4 *)((int)param_1 + 0xac0) = 0;
    *(undefined4 *)((int)param_1 + 0xac4) = 0;
    *(undefined4 *)((int)param_1 + 0xac8) = 0;
    ExceptionList = local_c;
    return;
  }
  while( true ) {
    if (iVar4 == *(int *)((int)param_1 + 0xac4)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)param_1 + 0xac0));
    }
    if (0x14 < *(uint *)(iVar4 + 0xc)) break;
    iVar4 = iVar4 + 0x24;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(iVar4 + 4));
}


//// FUNCTION FUN_004fa680 @ 004fa680 ////

undefined4 * __fastcall FUN_004fa680(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab321;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d20978;
  FUN_00489ca0(param_1 + 0xe);
  param_1[0x2f] = param_1 + 0x32;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x14;
  local_4 = CONCAT31(local_4._1_3_,2);
  _eh_vector_constructor_iterator_(param_1 + 0x37,0x14,5,FUN_004f56e0,thunk_FUN_004f6b50);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004fa710 @ 004fa710 ////

undefined4 * __fastcall FUN_004fa710(undefined4 *param_1)

{
  int extraout_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab37a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00d20a18;
  param_1[0xe] = &PTR_LAB_00d209f8;
  _eh_vector_constructor_iterator_(param_1 + 0x3b,0x164,7,FUN_004fa680,FUN_004f6cf0);
  param_1[0x2ac] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b2] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004f3310((int)param_1);
  FUN_004f7890(extraout_ECX);
  AudioOptions_LoadMixerLevels();
  param_1[0x2aa] = 0;
  *(undefined1 *)(param_1 + 0x2b3) = 0;
  *(undefined1 *)(param_1 + 700) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION SoundSoakTest_Constructor @ 004fa7e0 ////

void SoundSoakTest_Constructor(void)

{
  uint _Count;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  char *pcVar5;
  char *_Source;
  size_t _Count_00;
  char *local_2c8;
  undefined4 local_2c4;
  uint local_2c0;
  char local_2bc [20];
  char *local_2a8;
  undefined4 local_2a4;
  uint local_2a0;
  char local_29c [20];
  char *local_288;
  undefined4 uStack_284;
  uint uStack_280;
  char acStack_27c [20];
  char *pcStack_268;
  uint uStack_264;
  uint uStack_260;
  char acStack_25c [20];
  undefined4 uStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  char *pcStack_234;
  undefined4 uStack_230;
  uint uStack_22c;
  char acStack_228 [20];
  char *pcStack_214;
  undefined4 uStack_210;
  uint uStack_20c;
  char acStack_208 [20];
  char *pcStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  char acStack_1e8 [20];
  char *pcStack_1d4;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  char acStack_1c8 [20];
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 *puStack_1a8;
  void *apvStack_1a4 [2];
  uint uStack_19c;
  void *apvStack_184 [2];
  uint uStack_17c;
  void *apvStack_164 [2];
  uint uStack_15c;
  void *apvStack_144 [2];
  uint uStack_13c;
  void *apvStack_124 [2];
  uint uStack_11c;
  void *apvStack_104 [2];
  uint uStack_fc;
  undefined4 local_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab4bc;
  pvStack_c = ExceptionList;
  local_2a8 = local_29c;
  puVar3 = (undefined4 *)0x0;
  local_29c[0] = '\0';
  local_2a4 = 0;
  local_2a0 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2a8,"snd_startsoaktest",0x11);
  local_2a4 = 0x11;
  local_2a8[0x11] = '\0';
  local_4 = 0;
  FUN_005434b0();
  if (0x14 < local_2a0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2a8);
  }
  local_2a8 = local_29c;
  local_29c[0] = '\0';
  local_2a4 = 0;
  local_2a0 = 0x14;
  _strncpy(local_2a8,"snd_stopsoaktest",0x10);
  local_2a4 = 0x10;
  local_2a8[0x10] = '\0';
  local_4 = 1;
  FUN_005434b0();
  if (0x14 < local_2a0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2a8);
  }
  local_2a8 = local_29c;
  local_29c[0] = '\0';
  local_2a4 = 0;
  local_2a0 = 0x14;
  _strncpy(local_2a8,"Audio/radioeffect",0x11);
  local_2a4 = 0x11;
  local_2a8[0x11] = '\0';
  local_4 = 2;
  FUN_0055c540(local_e4,&local_2a8);
  if (0x14 < local_2a0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2a8);
  }
  local_2c8 = local_2bc;
  local_2bc[0] = '\0';
  local_2c4 = 0;
  local_2c0 = 0x14;
  _strncpy(local_2c8,"general",7);
  local_2c4 = 7;
  local_2c8[7] = '\0';
  local_4._0_1_ = 5;
  FUN_00558a50(local_e4,&local_2c8,(undefined4 *)0x1);
  if (0x14 < local_2c0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c8);
  }
  local_2c8 = local_2bc;
  local_2bc[0] = '\0';
  local_2c4 = 0;
  local_2c0 = 0x14;
  _strncpy(local_2c8,"fadetime",8);
  local_2c4 = 8;
  local_2c8[8] = '\0';
  local_4._0_1_ = 6;
  puVar2 = FUN_005584e0(local_e4,&local_288,&local_2c8);
  local_4._0_1_ = 7;
  fVar4 = FUN_00567d60(puVar2);
  DAT_0104b0c0 = (float)fVar4;
  if (0x14 < uStack_280) {
                    /* WARNING: Subroutine does not return */
    _free(local_288);
  }
  local_4._0_1_ = 4;
  if (0x14 < local_2c0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c8);
  }
  if (1 < DAT_0105be08) {
    local_2c8 = local_2bc;
    local_2bc[0] = '\0';
    local_2c4 = 0;
    local_2c0 = 0x14;
    _strncpy(local_2c8,"radio",5);
    local_2c4 = 5;
    local_2c8[5] = '\0';
    local_4._0_1_ = 8;
    FUN_00558a50(local_e4,&local_2c8,(undefined4 *)0x1);
    if (0x14 < local_2c0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c8);
    }
    pcStack_1d4 = acStack_1c8;
    acStack_1c8[0] = '\0';
    uStack_1d0 = 0;
    uStack_1cc = 0x14;
    _strncpy(pcStack_1d4,"radio",5);
    local_2c8 = local_2bc;
    _Count_00 = 9;
    _Source = "frequency";
    uStack_1d0 = 5;
    pcVar5 = local_2c8;
    pcStack_1d4[5] = '\0';
    local_2bc[0] = '\0';
    local_2c4 = 0;
    local_2c0 = 0x14;
    _strncpy(pcVar5,_Source,_Count_00);
    local_2c4 = 9;
    local_2c8[9] = '\0';
    local_4._0_1_ = 10;
    puVar2 = FUN_005584e0(local_e4,&local_288,&local_2c8);
    local_4._0_1_ = 0xb;
    fVar4 = FUN_00567d60(puVar2);
    fStack_1b4 = (float)fVar4;
    if (0x14 < uStack_280) {
                    /* WARNING: Subroutine does not return */
      _free(local_288);
    }
    if (0x14 < local_2c0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c8);
    }
    local_2c8 = local_2bc;
    local_2bc[0] = '\0';
    local_2c4 = 0;
    local_2c0 = 0x14;
    _strncpy(local_2c8,"q",1);
    local_2c4 = 1;
    local_2c8[1] = '\0';
    local_4._0_1_ = 0xc;
    puVar2 = FUN_005584e0(local_e4,&local_288,&local_2c8);
    local_4._0_1_ = 0xd;
    fVar4 = FUN_00567d60(puVar2);
    fStack_1b0 = (float)fVar4;
    if (0x14 < uStack_280) {
                    /* WARNING: Subroutine does not return */
      _free(local_288);
    }
    if (0x14 < local_2c0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c8);
    }
    local_2c8 = local_2bc;
    local_2bc[0] = '\0';
    local_2c4 = 0;
    local_2c0 = 0x14;
    _strncpy(local_2c8,"make_up_gain",0xc);
    local_2c4 = 0xc;
    local_2c8[0xc] = '\0';
    local_4._0_1_ = 0xe;
    puVar2 = FUN_005584e0(local_e4,&local_288,&local_2c8);
    local_4._0_1_ = 0xf;
    fVar4 = FUN_00567d60(puVar2);
    fStack_1ac = (float)fVar4;
    if (0x14 < uStack_280) {
                    /* WARNING: Subroutine does not return */
      _free(local_288);
    }
    local_4._0_1_ = 9;
    if (0x14 < local_2c0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c8);
    }
    FUN_009b0da0(&pcStack_1d4);
    pcStack_268 = acStack_25c;
    acStack_25c[0] = '\0';
    uStack_264 = 0;
    uStack_260 = 0x14;
    local_4 = CONCAT31(local_4._1_3_,0x10);
    cVar1 = FUN_00558bb0(local_e4,2);
    while (cVar1 != '\0') {
      puVar2 = FUN_005562f0(local_e4,apvStack_1a4,1);
      _Count = puVar2[1];
      pcVar5 = (char *)*puVar2;
      if (uStack_260 <= _Count) {
        if (0x14 < uStack_260) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_268);
        }
        uStack_260 = _Count + 0x20 & 0xffffffe0;
        pcStack_268 = _malloc(uStack_260);
      }
      _strncpy(pcStack_268,pcVar5,_Count);
      pcStack_268[_Count] = '\0';
      uStack_264 = _Count;
      if (0x14 < uStack_19c) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_1a4[0]);
      }
      local_2c8 = local_2bc;
      local_2bc[0] = '\0';
      local_2c4 = 0;
      local_2c0 = 0x14;
      _strncpy(local_2c8,"delay",5);
      local_2c4 = 5;
      local_2c8[5] = '\0';
      local_4._0_1_ = 0x11;
      puVar2 = FUN_005584e0(local_e4,apvStack_164,&local_2c8);
      local_4._0_1_ = 0x12;
      uStack_248 = FUN_00567d80(puVar2);
      if (0x14 < uStack_15c) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_164[0]);
      }
      if (0x14 < local_2c0) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c8);
      }
      pcStack_214 = acStack_208;
      acStack_208[0] = '\0';
      uStack_210 = 0;
      uStack_20c = 0x14;
      _strncpy(pcStack_214,"wet",3);
      uStack_210 = 3;
      pcStack_214[3] = '\0';
      local_4._0_1_ = 0x13;
      puVar2 = FUN_005584e0(local_e4,apvStack_124,&pcStack_214);
      local_4._0_1_ = 0x14;
      fVar4 = FUN_00567d60(puVar2);
      fStack_244 = (float)fVar4;
      if (0x14 < uStack_11c) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_124[0]);
      }
      if (0x14 < uStack_20c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_214);
      }
      pcStack_234 = acStack_228;
      acStack_228[0] = '\0';
      uStack_230 = 0;
      uStack_22c = 0x14;
      _strncpy(pcStack_234,"dry",3);
      uStack_230 = 3;
      pcStack_234[3] = '\0';
      local_4._0_1_ = 0x15;
      puVar2 = FUN_005584e0(local_e4,apvStack_104,&pcStack_234);
      local_4._0_1_ = 0x16;
      fVar4 = FUN_00567d60(puVar2);
      fStack_240 = (float)fVar4;
      if (0x14 < uStack_fc) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_104[0]);
      }
      if (0x14 < uStack_22c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_234);
      }
      pcStack_1f4 = acStack_1e8;
      acStack_1e8[0] = '\0';
      uStack_1f0 = 0;
      uStack_1ec = 0x14;
      _strncpy(pcStack_1f4,"frequency",9);
      uStack_1f0 = 9;
      pcStack_1f4[9] = '\0';
      local_4._0_1_ = 0x17;
      puVar2 = FUN_005584e0(local_e4,apvStack_144,&pcStack_1f4);
      local_4._0_1_ = 0x18;
      fVar4 = FUN_00567d60(puVar2);
      fStack_23c = (float)fVar4;
      if (0x14 < uStack_13c) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_144[0]);
      }
      if (0x14 < uStack_1ec) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_1f4);
      }
      local_288 = acStack_27c;
      acStack_27c[0] = '\0';
      uStack_284 = 0;
      uStack_280 = 0x14;
      _strncpy(local_288,"q",1);
      uStack_284 = 1;
      local_288[1] = '\0';
      local_4._0_1_ = 0x19;
      puVar2 = FUN_005584e0(local_e4,apvStack_184,&local_288);
      local_4._0_1_ = 0x1a;
      fVar4 = FUN_00567d60(puVar2);
      fStack_238 = (float)fVar4;
      if (0x14 < uStack_17c) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_184[0]);
      }
      local_4 = CONCAT31(local_4._1_3_,0x10);
      if (0x14 < uStack_280) {
                    /* WARNING: Subroutine does not return */
        _free(local_288);
      }
      FUN_009b0df0(&pcStack_268);
      cVar1 = FUN_00558bb0(local_e4,2);
    }
    if (0x14 < uStack_260) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_268);
    }
    local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
    local_4._0_1_ = 4;
    if (0x14 < uStack_1cc) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_1d4);
    }
  }
  local_4._0_1_ = 4;
  FUN_00488e70();
  FUN_0043e980();
  puStack_1a8 = operator_new(0xaf4);
  local_4._0_1_ = 0x1b;
  if (puStack_1a8 != (undefined4 *)0x0) {
    puVar3 = FUN_004fa710(puStack_1a8);
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  (*(code *)DAT_0104b0d0[1])();
  DAT_0104b0e4 = puVar3;
  (*(code *)*DAT_0104b0d0)();
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004fb1c0 @ 004fb1c0 ////

void __fastcall FUN_004fb1c0(void *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_0105cc29 == '\0') {
    if ((*(char *)((int)param_1 + 0xacc) != '\0') && (bVar2 = FUN_005e9250(DAT_0104d82c), !bVar2)) {
      FUN_004f9ee0(param_1);
    }
    if ((*(char *)(*(int *)((int)param_1 + 0xaa8) * 0x164 + 0x24d + (int)param_1) == '\0') &&
       (*(int *)((int)param_1 + *(int *)((int)param_1 + 0xaa8) * 0x14 + 0x6c) != 0)) {
      FUN_004f3400((int)param_1);
    }
    iVar1 = *(int *)((int)param_1 + 0xaa8);
    if (*(char *)(iVar1 * 0x164 + 0x24e + (int)param_1) == '\0') {
      if (*(int *)((int)param_1 + iVar1 * 0x14 + 0x60) == 1) {
        FUN_004f8ae0(param_1);
      }
      else if (*(int *)((int)param_1 + iVar1 * 0x14 + 0x60) == 2) {
        FUN_004f5e80((int)param_1);
      }
    }
    iVar1 = *(int *)((int)param_1 + 0xaa8);
    if ((*(char *)(iVar1 * 0x164 + 0x24d + (int)param_1) == '\0') &&
       (*(int *)((int)param_1 + iVar1 * 0x14 + 0x68) != 0)) {
      RadioChannel_SelectNextClip((int)param_1,iVar1 * 5);
    }
    if ((*(char *)(*(int *)((int)param_1 + 0xaa8) * 0x164 + 0x24d + (int)param_1) == '\0') &&
       (*(int *)((int)param_1 + *(int *)((int)param_1 + 0xaa8) * 0x14 + 0x70) != 0)) {
      FUN_004f6960(param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_004fb2c0 @ 004fb2c0 ////

void __fastcall FUN_004fb2c0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004fb300 @ 004fb300 ////

void FUN_004fb300(void)

{
  return;
}


//// FUNCTION FUN_004fb350 @ 004fb350 ////

int __fastcall FUN_004fb350(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}


//// FUNCTION FUN_004fb470 @ 004fb470 ////

void __thiscall FUN_004fb470(void *this,char *param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  undefined1 uVar2;
  char *_Str2;
  int iVar3;
  void *this_00;
  char in_stack_00000024;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = DAT_0105cc5c;
  puStack_8 = &LAB_00cab4e0;
  local_c = ExceptionList;
  DAT_0105cc5c = 0;
  iVar3 = *(int *)((int)*(void **)((int)this + 0x11c) + 0xb0);
  local_4 = 1;
  if ((((DAT_0105bec0 < iVar3) || (iVar3 == -1)) || (iVar3 < DAT_0105bec0 + -1)) ||
     (in_stack_00000024 != '\0')) {
    ExceptionList = &local_c;
    FUN_00981fc0(*(void **)((int)this + 0x11c),(byte *)"advert_chrysler_3.dds",param_1,-1);
    *(undefined1 *)((int)this + 0x4c8) = 0;
    bVar1 = true;
    this_00 = DAT_01050c4c;
    do {
      if (this_00 == (void *)0x0) break;
      _Str2 = (char *)FUN_0097e350(this_00,0);
      if ((_Str2 != (char *)0x0) && (iVar3 = _strncmp("fac_gate",_Str2,8), iVar3 == 0)) {
        iVar3 = *(int *)((int)this_00 + 0xb0);
        if ((DAT_0105bec0 < iVar3) || ((iVar3 == -1 || (iVar3 < DAT_0105bec0 + -1)))) {
          FUN_009dc300((int)_Str2);
          FUN_00981fc0(this_00,(byte *)"advert_chrysler_3.dds",param_1,-1);
        }
        bVar1 = false;
      }
      this_00 = *(void **)((int)this_00 + 0x10c);
    } while (bVar1);
    if (0x14 < param_3) {
      DAT_0105cc5c = uVar2;
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
  }
  else if (0x14 < param_3) {
    DAT_0105cc5c = uVar2;
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  DAT_0105cc5c = uVar2;
  return;
}


//// FUNCTION FUN_004fb6d0 @ 004fb6d0 ////

void __fastcall FUN_004fb6d0(int *param_1)

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
  puStack_8 = &LAB_00cab4f8;
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


//// FUNCTION FUN_004fb7a0 @ 004fb7a0 ////

undefined4 * __fastcall FUN_004fb7a0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab534;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048bc00(param_1);
  *param_1 = &PTR_FUN_00d20b24;
  param_1[0x1e] = &PTR_LAB_00d20b00;
  param_1[0x28] = &PTR_LAB_00d20ae8;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  local_4 = 0;
  param_1[0x126] = param_1 + 0x129;
  *(undefined1 *)(param_1 + 0x129) = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0x14;
  FUN_004015d0(param_1 + 0x126,"",0);
  piVar1 = param_1 + 0x12e;
  param_1[0x130] = 0;
  *piVar1 = 0;
  param_1[0x12f] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(param_1 + 0x132) = 1;
  param_1[0x130] = param_1;
  FUN_00acdb9e(0xe51d28);
  iVar2 = FUN_0097dda0();
  param_1[0x131] = iVar2;
  if (DAT_00e51d24 != '\0') {
    iVar2 = 0x4b8;
    pcVar4 = "BillboardLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe51d28);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e51d24 = '\0';
  }
  param_1[0x12f] = &DAT_0104b134;
  *piVar1 = (int)DAT_0104b134;
  *(int **)((int)DAT_0104b134 + 4) = piVar1;
  DAT_0104b134 = piVar1;
  param_1[0xb8] = param_1[0xb8] | 0x40;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004fb8f0 @ 004fb8f0 ////

/* WARNING: Removing unreachable block (ram,0x004fb943) */

void __fastcall FUN_004fb8f0(int *param_1)

{
  *param_1 = (int)&PTR_FUN_00d20b24;
  param_1[0x1e] = (int)&PTR_LAB_00d20b00;
  param_1[0x28] = (int)&PTR_LAB_00d20ae8;
  if ((int *)param_1[0x12f] != (int *)0x0) {
    *(int *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(int *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  if (param_1[0x12e] != 0) {
    *(int *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  if ((uint)param_1[0x128] < 0x15) {
    FUN_0048bdf0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x126]);
}


//// FUNCTION FUN_004fb990 @ 004fb990 ////

int * FUN_004fb990(void)

{
  undefined4 *puVar1;
  int *piVar2;
  void *unaff_EBX;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [4];
  void *pvStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab553;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x4cc);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_004fb7a0(puVar1);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ornament/p_billboard",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4 = 1;
  (**(code **)(*piVar2 + 0x1a4))(&local_2c,0);
  pvStack_c = (void *)0xffffffff;
  if (&DAT_00000014 < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  (**(code **)(*piVar2 + 0x28))(&local_4,&stack0x00000008);
  ExceptionList = pvStack_1c;
  return piVar2;
}


//// FUNCTION FUN_004fbac0 @ 004fbac0 ////

int * __thiscall FUN_004fbac0(void *this,byte param_1)

{
  FUN_004fb8f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004fbae0 @ 004fbae0 ////

void FUN_004fbae0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_0104b128 != &DAT_0104b134) {
    do {
      piVar4 = DAT_0104b128;
      puVar2 = (undefined4 *)DAT_0104b128[2];
      piVar1 = DAT_0104b128 + 1;
      if ((int *)DAT_0104b128[1] != (int *)0x0) {
        *(int *)DAT_0104b128[1] = *DAT_0104b128;
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
    } while (DAT_0104b128 != &DAT_0104b134);
  }
  return;
}


//// FUNCTION FUN_004fbb40 @ 004fbb40 ////

void __fastcall FUN_004fbb40(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  char local_54 [12];
  undefined4 uStack_48;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab568;
  local_c = ExceptionList;
  iVar1 = *(int *)((int)param_1 + 0x488);
  iVar2 = *(int *)(iVar1 + 8);
  if ((iVar2 != 0) && (*(int *)(iVar1 + 0xc) - iVar2 >> 5 != 0)) {
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(iVar1 + 0xc) - iVar2 >> 5;
    }
    ExceptionList = &local_c;
    if (uVar3 <= *(uint *)((int)param_1 + 0x494)) {
      ExceptionList = &local_c;
      *(undefined4 *)((int)param_1 + 0x494) = 0;
    }
    puVar4 = (undefined4 *)(*(int *)((int)param_1 + 0x494) * 0x20 + *(int *)(iVar1 + 8));
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    uStack_48 = 0x4fbbd4;
    FUN_004015d0(&local_2c,(char *)*puVar4,puVar4[1]);
    *(undefined4 *)((int)param_1 + 0x48c) = 0;
    local_4 = 0;
    *(undefined4 *)((int)param_1 + 0x490) =
         *(undefined4 *)
          (*(int *)(*(int *)((int)param_1 + 0x488) + 0x18) + *(int *)((int)param_1 + 0x494) * 4);
    uStack_48 = 0x4fbc0a;
    uVar5 = FUN_00479e80(&local_2c,(undefined4 *)((int)param_1 + 0x498));
    if ((char)uVar5 != '\0') {
      uStack_48 = 0x4fbc22;
      FUN_004015d0((undefined4 *)((int)param_1 + 0x498),local_2c,local_28);
      pcVar6 = local_54;
      local_54[0] = '\0';
      uVar5 = 0;
      uVar3 = 0x14;
      FUN_004015d0(&stack0xffffffa0,local_2c,local_28);
      FUN_004fb470(param_1,pcVar6,uVar5,uVar3);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004fbcb0 @ 004fbcb0 ////

void __fastcall FUN_004fbcb0(void *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)0x0;
  if (DAT_0104b114 != DAT_0104b118) {
    puVar1 = DAT_0104b114;
    do {
      if (*puVar1 <= *(uint *)((int)param_1 + 0x484)) {
        puVar2 = puVar1;
      }
      puVar1 = puVar1 + 9;
    } while (puVar1 != DAT_0104b118);
  }
  if ((puVar2 != *(uint **)((int)param_1 + 0x488)) && (puVar2 != (uint *)0x0)) {
    *(uint **)((int)param_1 + 0x488) = puVar2;
    *(undefined4 *)((int)param_1 + 0x48c) = 0;
    *(undefined4 *)((int)param_1 + 0x494) = 0;
    *(undefined4 *)((int)param_1 + 0x490) = 0;
    FUN_004fbb40(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_004fbd20 @ 004fbd20 ////

void __fastcall FUN_004fbd20(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  FUN_0048af00(param_1);
  uVar2 = FUN_0043b560();
  if ((int)uVar2 != param_1[0x121]) {
    param_1[0x121] = (int)uVar2;
    FUN_004fbcb0(param_1);
  }
  if ((param_1[0x124] != 0) &&
     (iVar1 = param_1[0x123], param_1[0x123] = iVar1 + 1U, (uint)param_1[0x124] <= iVar1 + 1U)) {
    param_1[0x125] = param_1[0x125] + 1;
    FUN_004fbb40(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_004fbd80 @ 004fbd80 ////

void __fastcall FUN_004fbd80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d20d14;
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


//// FUNCTION FUN_004fbdd0 @ 004fbdd0 ////

undefined4 * __thiscall FUN_004fbdd0(void *this,byte param_1)

{
  FUN_004fbd80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004fbdf0 @ 004fbdf0 ////

void FUN_004fbdf0(void)

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
  puStack_8 = &LAB_00cab588;
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


//// FUNCTION FUN_004fbeb0 @ 004fbeb0 ////

void * __thiscall FUN_004fbeb0(void *this,void *param_1)

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
    uVar1 = (int)*(undefined4 **)((int)param_1 + 8) - (int)puVar4 >> 5;
    if (uVar1 != 0) {
      piVar2 = *(int **)((int)this + 4);
      if (piVar2 == (int *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)((int)this + 8) - (int)piVar2 >> 5;
      }
      if (uVar1 <= uVar6) {
        piVar2 = FUN_004bee00(puVar4,*(undefined4 **)((int)param_1 + 8),piVar2);
        FUN_00405fe0(piVar2,*(undefined4 **)((int)this + 8));
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 5) * 0x20 +
             *(int *)((int)this + 4);
        return this;
      }
      if (piVar2 == (int *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)((int)this + 0xc) - (int)piVar2 >> 5;
      }
      if (uVar6 < uVar1) {
        if (piVar2 != (int *)0x0) {
          FUN_00405fe0(piVar2,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        if (*(int *)((int)param_1 + 4) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 5;
        }
        uVar5 = FUN_00406430(this,uVar1);
        if ((char)uVar5 == '\0') {
          return this;
        }
        uVar5 = FUN_00439f80(*(undefined4 **)((int)param_1 + 4),*(undefined4 **)((int)param_1 + 8),
                             *(int **)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar5;
        return this;
      }
      if (piVar2 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - (int)piVar2 >> 5;
      }
      puVar4 = *(undefined4 **)((int)param_1 + 4) + iVar3 * 8;
      FUN_004bee00(*(undefined4 **)((int)param_1 + 4),puVar4,piVar2);
      piVar2 = FUN_00439e00(puVar4,*(undefined4 **)((int)param_1 + 8),*(int **)((int)this + 8));
      *(int **)((int)this + 8) = piVar2;
      return this;
    }
  }
  FUN_004063f0((int)this);
  return this;
}


//// FUNCTION FUN_004fc010 @ 004fc010 ////

void * __thiscall FUN_004fc010(void *this,void *param_1)

{
  void *_Memory;
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (this == param_1) {
    return this;
  }
  pvVar2 = *(void **)((int)param_1 + 4);
  if (pvVar2 != (void *)0x0) {
    uVar4 = *(int *)((int)param_1 + 8) - (int)pvVar2 >> 2;
    if (uVar4 != 0) {
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      if (uVar4 <= uVar5) {
        _memmove(_Memory,pvVar2,(*(int *)((int)param_1 + 8) - (int)pvVar2 >> 2) << 2);
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) +
             (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 2) * 4;
        return this;
      }
      if (_Memory == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)((int)this + 0xc) - (int)_Memory >> 2;
      }
      if (uVar5 < uVar4) {
        if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (*(int *)((int)param_1 + 4) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 2;
        }
        uVar3 = FUN_004c0660(this,uVar4);
        if ((char)uVar3 == '\0') {
          return this;
        }
        pvVar2 = FUN_004bed80(*(void **)((int)param_1 + 4),*(int *)((int)param_1 + 8),
                              *(void **)((int)this + 4));
        *(void **)((int)this + 8) = pvVar2;
        return this;
      }
      if (_Memory == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      pvVar2 = (void *)((int)*(void **)((int)param_1 + 4) + iVar1 * 4);
      FUN_004be2d0(*(void **)((int)param_1 + 4),(int)pvVar2,_Memory);
      pvVar2 = FUN_004bed80(pvVar2,*(int *)((int)param_1 + 8),*(void **)((int)this + 8));
      *(void **)((int)this + 8) = pvVar2;
      return this;
    }
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return this;
}


//// FUNCTION FUN_004fc160 @ 004fc160 ////

void __fastcall FUN_004fc160(int param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    FUN_00405fe0(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_1 + 0xc));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_004fc1c0 @ 004fc1c0 ////

undefined4 * __thiscall FUN_004fc1c0(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab5ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *param_1;
  FUN_004c0f60((void *)((int)this + 4),(int)(param_1 + 1));
  local_4 = 0;
  FUN_004c1040((void *)((int)this + 0x14),(int)(param_1 + 5));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004fc250 @ 004fc250 ////

undefined4 * __cdecl FUN_004fc250(int param_1,int param_2,undefined4 *param_3)

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
    FUN_004fbeb0(param_3 + -8,(void *)(param_2 + -0x20));
    FUN_004fc010(param_3 + -4,(void *)(param_2 + -0x10));
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  return puVar2;
}


//// FUNCTION FUN_004fc2a0 @ 004fc2a0 ////

void __cdecl FUN_004fc2a0(void *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cab5d1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_004fc1c0(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004fc2f0 @ 004fc2f0 ////

void * __thiscall FUN_004fc2f0(void *this,byte param_1)

{
  FUN_004fc160((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004fc310 @ 004fc310 ////

void __fastcall FUN_004fc310(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


//// FUNCTION FUN_004fc350 @ 004fc350 ////

void __cdecl FUN_004fc350(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      FUN_004fbeb0(param_1 + 1,param_3 + 1);
      FUN_004fc010(param_1 + 5,param_3 + 5);
      param_1 = param_1 + 9;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_004fc3f0 @ 004fc3f0 ////

void __fastcall FUN_004fc3f0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d20d14;
  return;
}


//// FUNCTION FUN_004fc460 @ 004fc460 ////

undefined4 * __cdecl FUN_004fc460(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cab63c;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      FUN_004c0f60(param_3 + 1,(int)(param_1 + 1));
      local_8 = 2;
      FUN_004c1040(param_3 + 5,(int)(param_1 + 5));
    }
    param_3 = param_3 + 9;
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_004fc510 @ 004fc510 ////

void __cdecl FUN_004fc510(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cab66c;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      FUN_004c0f60(param_1 + 1,(int)(param_3 + 1));
      local_8 = 2;
      FUN_004c1040(param_1 + 5,(int)(param_3 + 5));
    }
    param_1 = param_1 + 9;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004fc6a0 @ 004fc6a0 ////

undefined4 * FUN_004fc6a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_004fc510(param_1,param_2,param_3);
  return param_1 + param_2 * 9;
}


//// FUNCTION FUN_004fc6d0 @ 004fc6d0 ////

void FUN_004fc6d0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    FUN_004fc160(param_1);
  }
  return;
}


//// FUNCTION FUN_004fc700 @ 004fc700 ////

void __thiscall FUN_004fc700(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 local_40 [9];
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cab688;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004fc1c0(local_40,param_3);
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
      FUN_004fbdf0();
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
        iVar2 = FUN_004fb350((int)this);
        uVar5 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar5 * 0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar3;
      puVar4 = FUN_004fc460(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_004fc510(puVar4,param_2,local_40);
      FUN_004fc460(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2 * 9);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x24;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_004fc6d0(*(int *)((int)this + 4),*(int *)((int)this + 8));
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
        FUN_004fc460(param_1,puVar3,param_1 + param_2 * 9);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_004fc6a0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x24,local_40
                    );
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x24;
        *(int *)((int)this + 8) = iVar2;
        local_8 = 0;
        FUN_004fc350(param_1,(undefined4 *)(iVar2 + param_2 * -0x24),local_40);
      }
      else {
        puVar4 = FUN_004fc460(puVar3 + param_2 * -9,puVar3,puVar3);
        *(undefined4 **)((int)this + 8) = puVar4;
        FUN_004fc250((int)param_1,(int)(puVar3 + param_2 * -9),puVar3);
        FUN_004fc350(param_1,param_1 + param_2 * 9,local_40);
      }
    }
  }
  FUN_004fc160((int)local_40);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004fc9f0 @ 004fc9f0 ////

void __thiscall FUN_004fc9f0(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x24 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x24;
      goto LAB_004fca35;
    }
  }
  iVar1 = 0;
LAB_004fca35:
  FUN_004fc700(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x24;
  return;
}


//// FUNCTION FUN_004fca60 @ 004fca60 ////

void __fastcall FUN_004fca60(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    FUN_004fc160(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004fcac0 @ 004fcac0 ////

void __thiscall FUN_004fcac0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x24) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x24))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_004fc510(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 9;
    return;
  }
  FUN_004fc9f0(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004fcb60 @ 004fcb60 ////

void FUN_004fcb60(void)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *_Memory;
  void *_Memory_00;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_f4 [4];
  int *local_f0;
  int *local_ec;
  int local_e8;
  undefined1 auStack_e4 [4];
  void *local_e0;
  undefined4 *local_dc;
  int local_d8;
  char *local_d4;
  int local_d0;
  uint local_cc;
  char local_c8 [20];
  undefined1 *local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a8 [20];
  char *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  char local_88 [20];
  undefined4 local_74;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  void *local_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cab6fa;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  local_94 = local_88;
  local_4 = 0;
  local_88[0] = '\0';
  local_90 = 0;
  local_8c = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_94,"",0);
  local_90 = 0;
  *local_94 = '\0';
  local_74 = 0;
  local_70 = 0;
  local_d4 = local_c8;
  local_c8[0] = '\0';
  local_d0 = 0;
  local_cc = 0x20;
  local_d4 = _malloc(0x20);
  _strncpy(local_d4,"data/rule/adverts.csv",0x15);
  local_d0 = 0x15;
  local_d4[0x15] = '\0';
  local_4._0_1_ = 2;
  FUN_00553a50(&local_94,&local_d4);
  if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
    _free(local_d4);
  }
  local_b4 = local_a8;
  local_a8[0] = 0;
  local_b0 = 0;
  local_ac = 0x14;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00552520(&local_94,&local_b4);
  uVar4 = FUN_00552520(&local_94,&local_b4);
  cVar3 = (char)uVar4;
  while( true ) {
    if (cVar3 == '\0') {
      if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
        _free(local_b4);
      }
      local_4 = local_4 & 0xffffff00;
      FUN_00552ce0(&local_94);
      if (local_64 < 0x15) {
        ExceptionList = pvStack_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    piVar6 = (int *)0x0;
    local_f0 = (int *)0x0;
    local_ec = (int *)0x0;
    local_e8 = 0;
    puVar7 = (undefined4 *)0x0;
    _Memory_00 = (void *)0x0;
    local_e0 = (void *)0x0;
    local_dc = (undefined4 *)0x0;
    local_d8 = 0;
    local_4._1_3_ = (undefined3)(local_4 >> 8);
    local_4._0_1_ = 5;
    puVar5 = FUN_0056ac50(local_4c,&local_b4);
    local_4._0_1_ = 6;
    uStack_f8 = FUN_00567d80(puVar5);
    local_4._0_1_ = 5;
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    bVar2 = false;
    _Memory = (int *)0x0;
    do {
      local_4._0_1_ = 5;
      FUN_0056ac50(&local_d4,&local_b4);
      local_4._0_1_ = 7;
      if (local_d0 == 0) {
        bVar2 = true;
      }
      else {
        puVar5 = FUN_0056ac50(apvStack_2c,&local_b4);
        local_4._0_1_ = 8;
        uStack_fc = FUN_00567d80(puVar5);
        local_4._0_1_ = 7;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        if ((_Memory == (int *)0x0) ||
           ((uint)(local_e8 - (int)_Memory >> 5) <= (uint)((int)piVar6 - (int)_Memory >> 5))) {
          FUN_00439fd0(auStack_f4,piVar6,1,&local_d4);
          _Memory = local_f0;
          _Memory_00 = local_e0;
          puVar7 = local_dc;
        }
        else {
          FUN_00439ea0(piVar6,1,&local_d4);
          local_ec = piVar6 + 8;
        }
        if ((_Memory_00 == (void *)0x0) ||
           ((uint)(local_d8 - (int)_Memory_00 >> 2) <= (uint)((int)puVar7 - (int)_Memory_00 >> 2)))
        {
          FUN_004c0700(auStack_e4,puVar7,1,&uStack_fc);
          _Memory = local_f0;
          _Memory_00 = local_e0;
          piVar6 = local_ec;
          puVar7 = local_dc;
        }
        else {
          *puVar7 = uStack_fc;
          local_dc = puVar7 + 1;
          piVar6 = local_ec;
          puVar7 = local_dc;
        }
      }
      local_4._0_1_ = 5;
      if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
        _free(local_d4);
      }
    } while (!bVar2);
    FUN_004fcac0(&DAT_0104b110,&uStack_f8);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (_Memory_00 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
    local_e0 = (void *)0x0;
    local_dc = (undefined4 *)0x0;
    local_d8 = 0;
    piVar1 = _Memory;
    if (_Memory != (int *)0x0) break;
    local_f0 = (int *)0x0;
    local_ec = (int *)0x0;
    local_e8 = 0;
    uVar4 = FUN_00552520(&local_94,&local_b4);
    cVar3 = (char)uVar4;
  }
  while( true ) {
    if (piVar1 == piVar6) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    if (0x14 < (uint)piVar1[2]) break;
    piVar1 = piVar1 + 8;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*piVar1);
}


//// FUNCTION FUN_004fcf60 @ 004fcf60 ////

void FUN_004fcf60(void)

{
  FUN_004fca60(0x104b110);
  return;
}


//// FUNCTION FUN_004fcf70 @ 004fcf70 ////

void __fastcall FUN_004fcf70(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004fcfa0 @ 004fcfa0 ////

void FUN_004fcfa0(void)

{
  return;
}


//// FUNCTION FUN_004fcfb0 @ 004fcfb0 ////

void FUN_004fcfb0(void)

{
  return;
}


//// FUNCTION FUN_004fcfc0 @ 004fcfc0 ////

undefined4 * __cdecl FUN_004fcfc0(undefined4 param_1)

{
  undefined4 *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab71b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xd0);
  local_4 = 0;
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_004af1d0(this);
    *this = &PTR_FUN_00d17b04;
    this[0xe] = &PTR_LAB_00d17ae0;
  }
  local_4 = 0xffffffff;
  FUN_004adf90(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004fd0f0 @ 004fd0f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004fd0f0(int param_1)

{
  int iVar1;
  void *this;
  float *pfVar2;
  float local_4;
  
  local_4 = 0.0;
  iVar1 = FUN_00577370(*(int *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    pfVar2 = &local_4;
    this = (void *)FUN_00577370(*(int *)(param_1 + 0xc0));
    pfVar2 = (float *)FUN_00441540(this,pfVar2);
    local_4 = *pfVar2;
  }
  return ((float10)_DAT_00e51d88 - (float10)_DAT_00e51d84) * (float10)local_4 * (float10)local_4 +
         (float10)_DAT_00e51d84;
}


//// FUNCTION FUN_004fd150 @ 004fd150 ////

longlong * __cdecl FUN_004fd150(longlong *param_1)

{
  *(undefined4 *)param_1 = DAT_0104b158;
  *(undefined4 *)((int)param_1 + 4) = DAT_0104b15c;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_004fd170 @ 004fd170 ////

void __fastcall FUN_004fd170(int *param_1)

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
  puStack_8 = &LAB_00cab738;
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


//// FUNCTION FUN_004fd240 @ 004fd240 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fd240(void)

{
  float10 fVar1;
  ulonglong uVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab770;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"staff",5);
  local_28 = 5;
  local_2c[5] = '\0';
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
  _strncpy(local_2c,"basic_staff_salary",0x12);
  local_28 = 0x12;
  local_2c[0x12] = '\0';
  local_4 = 1;
  FUN_00558610(DAT_00f88624,&local_2c,0.0);
  uVar2 = FUN_00acd42c();
  DAT_0104b15c = (undefined4)(uVar2 >> 0x20);
  DAT_0104b158 = (undefined4)uVar2;
  FUN_00471b10((longlong *)&DAT_0104b158);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x40;
  local_2c = _malloc(0x40);
  _strncpy(local_2c,"staff_min_ability_salary_multiplier",0x23);
  local_28 = 0x23;
  local_2c[0x23] = '\0';
  local_4 = 2;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e51d84 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x40;
  local_2c = _malloc(0x40);
  _strncpy(local_2c,"staff_max_ability_salary_multiplier",0x23);
  local_28 = 0x23;
  local_2c[0x23] = '\0';
  local_4 = 3;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e51d88 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004fd440 @ 004fd440 ////

longlong * __thiscall FUN_004fd440(void *this,longlong *param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined8 local_8;
  
  FUN_004ae5f0(this,(longlong *)&local_10);
  uVar1 = FUN_004ae4f0((int)this);
  if ((char)uVar1 == '\0') {
    FUN_004fd0f0((int)this);
    local_8 = FUN_00acd42c();
    FUN_00471b10(&local_8);
    local_10 = (undefined4)local_8;
    uStack_c = local_8._4_4_;
    FUN_00471b10((longlong *)&local_10);
  }
  *(undefined4 *)((int)param_1 + 4) = uStack_c;
  *(undefined4 *)param_1 = local_10;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_004fd4d0 @ 004fd4d0 ////

void __fastcall FUN_004fd4d0(int param_1)

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
  puStack_8 = &LAB_00cab790;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\StaffCosts.cpp";
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
    DAT_010581d4 = 0x20;
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
  uVar3 = FUN_0098b490("PStaff");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x74));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\StaffCosts.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("Salary");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x90),8);
  }
  FUN_004af0c0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004fd6d0 @ 004fd6d0 ////

void __fastcall FUN_004fd6d0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004fd700 @ 004fd700 ////

void FUN_004fd700(void)

{
  return;
}


//// FUNCTION FUN_004fd870 @ 004fd870 ////

ulonglong * FUN_004fd870(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *param_1 = uVar1;
  FUN_00471b10((longlong *)param_1);
  return param_1;
}


//// FUNCTION FUN_004fd8c0 @ 004fd8c0 ////

void __thiscall FUN_004fd8c0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 local_8;
  
  if (*(int *)((int)this + 0xf8) < 1) {
    puVar1 = (undefined4 *)(**(code **)(*(int *)this + 8))();
    *(undefined4 *)((int)this + 0xe8) = *puVar1;
    *(undefined4 *)((int)this + 0xec) = puVar1[1];
    FUN_00471b10((longlong *)((int)this + 0xe8));
  }
  *(undefined4 *)((int)this + 0xf8) = 300;
  if (((float)*(longlong *)((int)this + 0xf0) * 1.1920929e-07 == 0.0) &&
     ((float)CONCAT44(param_2,param_1) * 1.1920929e-07 != 0.0)) {
    local_8 = FUN_00acd42c();
    FUN_00471b10(&local_8);
    *(undefined4 *)((int)this + 0xf0) = (undefined4)local_8;
    *(undefined4 *)((int)this + 0xf4) = local_8._4_4_;
    FUN_00471b10((longlong *)((int)this + 0xf0));
  }
  FUN_00471b10((longlong *)&stack0xffffffe8);
  FUN_00526ca0(this,param_1,param_2);
  return;
}


//// FUNCTION FUN_004fd9a0 @ 004fd9a0 ////

uint * __thiscall FUN_004fd9a0(void *this,uint *param_1)

{
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  void *this_00;
  uint uVar4;
  ulonglong uVar5;
  undefined8 local_18;
  uint local_10;
  uint uStack_c;
  
  FUN_004ae720(this);
  if ((float)CONCAT44(uStack_c,local_10) * 1.1920929e-07 == 0.0) goto LAB_004fdad1;
  puVar1 = (ulonglong *)((int)this + 0xf0);
  uVar5 = FUN_00acd42c();
  *puVar1 = uVar5;
  FUN_00471b10((longlong *)puVar1);
  iVar3 = *(int *)((int)this + 0xf4);
  uVar4 = *(uint *)puVar1;
  if ((int)uStack_c < iVar3) {
LAB_004fda63:
    local_18 = FUN_00acd42c();
    FUN_00471b10(&local_18);
    if ((*(int *)((int)this + 0xf4) <= (int)local_18._4_4_) &&
       ((*(int *)((int)this + 0xf4) < (int)local_18._4_4_ || (*(uint *)puVar1 <= (uint)local_18))))
    {
LAB_004fdaa2:
      *(uint *)((int)this + 0xf4) = uStack_c;
      *(uint *)puVar1 = local_10;
      FUN_00471b10((longlong *)puVar1);
    }
  }
  else {
    if ((iVar3 < (int)uStack_c) || (uVar4 < local_10)) {
      local_18 = FUN_00acd42c();
      FUN_00471b10(&local_18);
      iVar3 = *(int *)((int)this + 0xf4);
      uVar4 = *(uint *)puVar1;
      if ((iVar3 <= (int)local_18._4_4_) &&
         ((iVar3 < (int)local_18._4_4_ || (uVar4 < (uint)local_18)))) goto LAB_004fda55;
      goto LAB_004fdaa2;
    }
LAB_004fda55:
    if (((int)uStack_c <= iVar3) && (((int)uStack_c < iVar3 || (local_10 < uVar4))))
    goto LAB_004fda63;
  }
  FUN_005892c0(*(int *)((int)this + 0xe4));
LAB_004fdad1:
  iVar3 = AwardBonusManager_Get();
  if (iVar3 != 0) {
    iVar3 = 0xd;
    this_00 = (void *)AwardBonusManager_Get();
    cVar2 = AwardBonusManager_IsBonusActive(this_00,iVar3);
    if (cVar2 != '\0') {
      local_18 = FUN_00acd42c();
      FUN_00471b10(&local_18);
      local_10 = (uint)local_18;
      uStack_c = local_18._4_4_;
      FUN_00471b10((longlong *)&local_10);
    }
  }
  local_18._0_4_ = local_10;
  local_18._4_4_ = uStack_c;
  FUN_00471b10(&local_18);
  param_1[1] = local_18._4_4_;
  *param_1 = (uint)local_18;
  FUN_00471b10((longlong *)param_1);
  param_1[2] = 1;
  return param_1;
}


//// FUNCTION FUN_004fdb80 @ 004fdb80 ////

void __thiscall FUN_004fdb80(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0xd0) + 4))();
  *(undefined4 *)((int)this + 0xe4) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xd0))();
  FUN_004adf90(this,param_1);
  return;
}


//// FUNCTION FUN_004fdc30 @ 004fdc30 ////

longlong * __thiscall FUN_004fdc30(void *this,longlong *param_1)

{
  int *piVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  int iVar5;
  
  if (*(int *)((int)this + 0xe4) != 0) {
    iVar5 = 0;
    pTVar4 = &TM::CHireRoom::RTTI_Type_Descriptor;
    pTVar3 = &TM::TMRoom::RTTI_Type_Descriptor;
    iVar2 = 0;
    piVar1 = (int *)FUN_0053ae00(*(int *)((int)this + 0xe4));
    iVar2 = FUN_00ace790(piVar1,iVar2,pTVar3,pTVar4,iVar5);
    if (iVar2 != 0) {
      iVar2 = FUN_005892b0(*(int *)((int)this + 0xe4));
      if (iVar2 != 0) {
        FUN_004fd150(param_1);
        return param_1;
      }
    }
  }
  *(undefined4 *)param_1 = DAT_0104b170;
  *(undefined4 *)((int)param_1 + 4) = DAT_0104b174;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_004fdca0 @ 004fdca0 ////

longlong * __cdecl FUN_004fdca0(longlong *param_1)

{
  *(undefined4 *)param_1 = DAT_0104b170;
  *(undefined4 *)((int)param_1 + 4) = DAT_0104b174;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_004fdcc0 @ 004fdcc0 ////

longlong * __cdecl FUN_004fdcc0(longlong *param_1)

{
  *(undefined4 *)param_1 = DAT_0104b178;
  *(undefined4 *)((int)param_1 + 4) = DAT_0104b17c;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_004fdce0 @ 004fdce0 ////

longlong * __cdecl FUN_004fdce0(longlong *param_1)

{
  *(undefined4 *)param_1 = DAT_0104b160;
  *(undefined4 *)((int)param_1 + 4) = DAT_0104b164;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_004fdd00 @ 004fdd00 ////

longlong * __cdecl FUN_004fdd00(longlong *param_1)

{
  *(undefined4 *)param_1 = DAT_0104b168;
  *(undefined4 *)((int)param_1 + 4) = DAT_0104b16c;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_004fdd20 @ 004fdd20 ////

longlong * __cdecl FUN_004fdd20(longlong *param_1)

{
  *(undefined4 *)param_1 = DAT_0104b190;
  *(undefined4 *)((int)param_1 + 4) = DAT_0104b194;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_004fdd40 @ 004fdd40 ////

void __fastcall FUN_004fdd40(int *param_1)

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
  puStack_8 = &LAB_00cab7a8;
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


//// FUNCTION FUN_004fde10 @ 004fde10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * __cdecl FUN_004fde10(longlong *param_1,void *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [12];
  
  local_20 = 0;
  local_3c = 0.0;
  local_34 = 0.0;
  local_38 = 0.0;
  local_30 = 0.0;
  local_28 = 0.0;
  iVar4 = GetPlayerStudio();
  iVar4 = *(int *)(iVar4 + 0x94);
  iVar5 = GetPlayerStudio();
  if (iVar4 != iVar5 + 0xa0) {
    do {
      piVar6 = (int *)(**(code **)(**(int **)(iVar4 + 8) + 0x1d4))();
      plVar7 = (longlong *)(**(code **)(*piVar6 + 0x4c))(auStack_18);
      if (((float)*plVar7 * 1.1920929e-07 != 0.0) && (*(void **)(iVar4 + 8) != param_2)) {
        pfVar8 = (float *)FUN_00585ff0(*(void **)(iVar4 + 8),&local_24);
        fVar1 = *pfVar8;
        piVar6 = (int *)(**(code **)(**(int **)(iVar4 + 8) + 0x1d4))();
        plVar7 = (longlong *)(**(code **)(*piVar6 + 0x4c))(auStack_10);
        fVar11 = (float10)log2((float10)*plVar7 * (float10)1.1920929e-07);
        local_3c = fVar1 + local_3c;
        local_38 = fVar1 * fVar1 + local_38;
        local_30 = (float)((float10)fVar1 * (float10)0.6931471805599453 * fVar11 + (float10)local_30
                          );
        local_34 = (float)((float10)0.6931471805599453 * fVar11 + (float10)local_34);
        local_28 = local_28 + 1.0;
      }
      iVar4 = *(int *)(iVar4 + 4);
      iVar5 = GetPlayerStudio();
    } while (iVar4 != iVar5 + 0xa0);
  }
  fVar11 = (float10)log2(((float10)_DAT_0104b188 / ((float10)_DAT_0104b180 * (float10)1.1920929e-07)
                         ) * (float10)1.1920929e-07);
  fVar9 = (float10)log2((float10)_DAT_0104b180 * (float10)1.1920929e-07);
  local_24 = (float)((float10)0.6931471805599453 * fVar9);
  fVar9 = (float10)local_28;
  fVar10 = (float10)1.0 + fVar9;
  if (fVar10 <= (float10)11.0) {
    fVar10 = (float10)11.0;
  }
  fVar1 = (float)((float10)1.0 / fVar10);
  fVar2 = fVar1;
  if (fVar1 < 1.0 != (fVar1 == 1.0)) {
    do {
      fVar3 = fVar2 * (float)((float10)0.6931471805599453 * fVar11) + local_24;
      local_3c = fVar2 + local_3c;
      local_38 = fVar2 * fVar2 + local_38;
      local_30 = fVar2 * fVar3 + local_30;
      local_34 = fVar3 + local_34;
      fVar9 = fVar9 + (float10)1.0;
      fVar2 = fVar2 + fVar1;
    } while (fVar2 < 1.0 != (fVar2 == 1.0));
  }
  fVar11 = (float10)1.0 / ((float10)local_38 * fVar9 - (float10)local_3c * (float10)local_3c);
  fVar9 = (float10)1.4426950408889634 *
          (((float10)local_38 * (float10)local_34 - (float10)local_30 * (float10)local_3c) * fVar11
          + (fVar9 * (float10)local_30 - (float10)local_34 * (float10)local_3c) * fVar11 *
            (float10)param_3);
  fVar11 = ROUND(fVar9);
  fVar9 = (float10)f2xm1(fVar9 - fVar11);
  fscale((float10)1 + fVar9,fVar11);
  local_20 = FUN_00acd42c();
  FUN_00471b10(&local_20);
  *(undefined4 *)param_1 = (undefined4)local_20;
  *(undefined4 *)((int)param_1 + 4) = local_20._4_4_;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_004fe310 @ 004fe310 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fe310(void)

{
  ulonglong uVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab830;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"star",4);
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
  _strncpy(local_2c,"min_star_salary",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4 = 1;
  FUN_00558610(DAT_00f88624,&local_2c,0.0);
  uVar1 = FUN_00acd42c();
  DAT_0104b164 = (undefined4)(uVar1 >> 0x20);
  DAT_0104b160 = (undefined4)uVar1;
  FUN_00471b10((longlong *)&DAT_0104b160);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"max_star_salary",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4 = 2;
  FUN_00558610(DAT_00f88624,&local_2c,0.0);
  uVar1 = FUN_00acd42c();
  DAT_0104b16c = (undefined4)(uVar1 >> 0x20);
  DAT_0104b168 = (undefined4)uVar1;
  FUN_00471b10((longlong *)&DAT_0104b168);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"starting_star_salary",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4 = 3;
  FUN_00558610(DAT_00f88624,&local_2c,0.0);
  uVar1 = FUN_00acd42c();
  DAT_0104b174 = (undefined4)(uVar1 >> 0x20);
  DAT_0104b170 = (undefined4)uVar1;
  FUN_00471b10((longlong *)&DAT_0104b170);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"starting_extra_salary",0x15);
  local_28 = 0x15;
  local_2c[0x15] = '\0';
  local_4 = 4;
  FUN_00558610(DAT_00f88624,&local_2c,0.0);
  uVar1 = FUN_00acd42c();
  DAT_0104b17c = (undefined4)(uVar1 >> 0x20);
  DAT_0104b178 = (undefined4)uVar1;
  FUN_00471b10((longlong *)&DAT_0104b178);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"min_desired_star_salary",0x17);
  local_28 = 0x17;
  local_2c[0x17] = '\0';
  local_4 = 5;
  FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_0104b180 = FUN_00acd42c();
  FUN_00471b10((longlong *)&DAT_0104b180);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"max_desired_star_salary",0x17);
  local_28 = 0x17;
  local_2c[0x17] = '\0';
  local_4 = 6;
  FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_0104b188 = FUN_00acd42c();
  FUN_00471b10((longlong *)&DAT_0104b188);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"rating_max_star_salary",0x16);
  local_28 = 0x16;
  local_2c[0x16] = '\0';
  local_4 = 7;
  FUN_00558610(DAT_00f88624,&local_2c,0.0);
  uVar1 = FUN_00acd42c();
  DAT_0104b194 = (undefined4)(uVar1 >> 0x20);
  DAT_0104b190 = (undefined4)uVar1;
  FUN_00471b10((longlong *)&DAT_0104b190);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004fe760 @ 004fe760 ////

longlong * __fastcall FUN_004fe760(int param_1)

{
  float *pfVar1;
  longlong *unaff_retaddr;
  undefined4 local_8 [2];
  
  (**(code **)(**(int **)(param_1 + 0xe4) + 0x230))(local_8);
  pfVar1 = (float *)FUN_00585ff0(*(void **)(param_1 + 0xe4),local_8);
  FUN_004fde10(unaff_retaddr,*(void **)(param_1 + 0xe4),*pfVar1);
  return unaff_retaddr;
}


//// FUNCTION FUN_004fe7c0 @ 004fe7c0 ////

void __fastcall FUN_004fe7c0(int param_1)

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
  puStack_8 = &LAB_00cab860;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\StarCosts.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x31;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x98));
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
  uVar3 = FUN_0098b490("PStar");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x98));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\StarCosts.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x32;
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
  uVar3 = FUN_0098b490("SalaryNostalgia");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xb0),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\StarCosts.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x33;
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
  uVar3 = FUN_0098b490("SalaryRecentDaily");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xb8),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\StarCosts.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x34;
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
  uVar3 = FUN_0098b490("SalarySettled");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xc0),4);
  }
  FUN_004af0c0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004feb80 @ 004feb80 ////

undefined4 * __fastcall FUN_004feb80(undefined4 *param_1)

{
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab886;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004af1d0(param_1);
  *param_1 = &PTR_FUN_00d20f1c;
  param_1[0xe] = &PTR_LAB_00d20ef8;
  param_1[0x37] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = param_1 + 0x34;
  param_1[0x34] = &PTR_FUN_00d16954;
  param_1[0x39] = 0;
  local_4 = 1;
  uVar1 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0x3a) = uVar1;
  FUN_00471b10((longlong *)(param_1 + 0x3a));
  *(ulonglong *)(param_1 + 0x3c) = uVar1;
  FUN_00471b10((longlong *)(param_1 + 0x3c));
  param_1[0x3e] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004fec40 @ 004fec40 ////

undefined4 * __cdecl FUN_004fec40(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab89b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x100);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_004feb80(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(this[0x34] + 4))();
  this[0x39] = param_1;
  (**(code **)this[0x34])();
  FUN_004adf90(this,param_1);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_004fecc0 @ 004fecc0 ////

undefined4 * __thiscall FUN_004fecc0(void *this,byte param_1)

{
  FUN_004fece0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004fece0 @ 004fece0 ////

void __fastcall FUN_004fece0(undefined4 *param_1)

{
  param_1[0x34] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x36] = param_1[0x35];
  }
  if (param_1[0x35] != 0) {
    *(undefined4 *)(param_1[0x35] + 4) = param_1[0x36];
  }
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x36] = param_1[0x35];
  }
  if (param_1[0x35] != 0) {
    *(undefined4 *)(param_1[0x35] + 4) = param_1[0x36];
  }
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  FUN_004af230(param_1);
  return;
}


//// FUNCTION FUN_004fed70 @ 004fed70 ////

void __fastcall FUN_004fed70(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004feda0 @ 004feda0 ////

void FUN_004feda0(void)

{
  return;
}


//// FUNCTION FUN_004fedb0 @ 004fedb0 ////

void FUN_004fedb0(void)

{
  return;
}


//// FUNCTION FUN_004fee80 @ 004fee80 ////

void __fastcall FUN_004fee80(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab8bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_0046f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(this,0x24d);
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


//// FUNCTION FUN_004fef30 @ 004fef30 ////

void __fastcall FUN_004fef30(void *param_1)

{
  void *this;
  
  this = *(void **)((int)param_1 + 0xec);
  FUN_00585ff0(this,(undefined4 *)&stack0xfffffff8);
  CBasicReview_SelectComments(param_1,(float)this);
  return;
}


//// FUNCTION FUN_004fefd0 @ 004fefd0 ////

void __fastcall FUN_004fefd0(int *param_1)

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
  puStack_8 = &LAB_00cab8d8;
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


//// FUNCTION FUN_004ff0a0 @ 004ff0a0 ////

void __fastcall FUN_004ff0a0(int param_1)

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
  puStack_8 = &LAB_00cab908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\StarReview.cpp";
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
    DAT_010581d4 = 0x2a;
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
  uVar3 = FUN_0098b490("StarName");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0xb8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\StarReview.cpp";
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
  uVar3 = FUN_0098b490("JobName");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0xd8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\StarReview.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2c;
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
  uVar3 = FUN_0098b490("PAssociatedStar");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xa0));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004ff390 @ 004ff390 ////

void __fastcall FUN_004ff390(int param_1)

{
  uint uVar1;
  
  FUN_00410060(param_1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0xf0),(wchar_t *)&lpCaption_00d16918,uVar1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0x110),(wchar_t *)&lpCaption_00d16918,uVar1);
  return;
}


//// FUNCTION FUN_004ff3e0 @ 004ff3e0 ////

void __fastcall FUN_004ff3e0(int param_1)

{
  undefined4 *puVar1;
  void *unaff_ESI;
  undefined1 local_20 [4];
  uint uStack_1c;
  
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0xec) + 0x5c))(local_20);
    FUN_004036d0((void *)(param_1 + 0xf0),(wchar_t *)*puVar1,puVar1[1]);
    if (10 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_ESI);
    }
  }
  return;
}


//// FUNCTION FUN_004ff430 @ 004ff430 ////

/* WARNING: Removing unreachable block (ram,0x004ff5e8) */
/* WARNING: Removing unreachable block (ram,0x004ff5ee) */
/* WARNING: Removing unreachable block (ram,0x004ff5fb) */
/* WARNING: Removing unreachable block (ram,0x004ff602) */

void __fastcall FUN_004ff430(int param_1)

{
  int iVar1;
  char *_Dest;
  char *_Dest_00;
  char *_Dest_01;
  undefined4 *puVar2;
  uint local_88;
  uint local_68;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab946;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xec) == 0) {
    return;
  }
  ExceptionList = &local_c;
  _Dest = _malloc(0x20);
  _strncpy(_Dest,"REV_FRONTEND_JOB_ACTOR",0x16);
  local_68 = 0x16;
  _Dest[0x16] = '\0';
  local_4 = 0;
  _Dest_00 = _malloc(0x20);
  _strncpy(_Dest_00,"REV_FRONTEND_JOB_DIRECTOR",0x19);
  local_88 = 0x19;
  _Dest_00[0x19] = '\0';
  _Dest_01 = _malloc(0x20);
  _strncpy(_Dest_01,"REV_FRONTEND_JOB_UNEMPLOYED",0x1b);
  _Dest_01[0x1b] = '\0';
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  iVar1 = *(int *)(*(int *)(param_1 + 0xec) + 0x814);
  local_4 = CONCAT31(local_4._1_3_,3);
  if ((iVar1 == 0) || ((iVar1 != 2 && (_Dest = _Dest_00, local_68 = local_88, iVar1 != 3)))) {
    local_68 = 0x1b;
    _Dest = _Dest_01;
  }
  FUN_004015d0(&local_4c,_Dest,local_68);
  puVar2 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0((void *)(param_1 + 0x110),(wchar_t *)*puVar2,puVar2[1]);
  if (local_24 < 0xb) {
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
                    /* WARNING: Subroutine does not return */
    _free(_Dest_01);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c[0]);
}


//// FUNCTION FUN_004ff630 @ 004ff630 ////

undefined4 * __thiscall FUN_004ff630(void *this,undefined4 *param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cab968;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  ppuVar1 = &PTR_DAT_00e51db0;
  if (*(int *)(*(int *)((int)this + 0xec) + 0x4a0) != 0) {
    ppuVar1 = &PTR_DAT_00e51d90;
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,*ppuVar1,(uint)ppuVar1[1]);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  FUN_004015d0(&local_4c,*(char **)(&DAT_0104b1d8 + param_2 * 0x48),
               *(uint *)(&DAT_0104b1dc + param_2 * 0x48));
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar2 = FUN_009b5f90(&local_4c,0xffffffff,&local_2c);
  if (iVar2 != 0) {
    FUN_004036d0(&local_6c,*(wchar_t **)(iVar2 + 0x40),*(uint *)(iVar2 + 0x44));
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_6c,local_68);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004ff7a0 @ 004ff7a0 ////

undefined4 * __thiscall
FUN_004ff7a0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  size_t sVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cab988;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  sVar1 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(&local_4c,L"<phrasebook>",sVar1);
  FUN_0040cae0(&local_4c,(wchar_t *)*param_2,param_2[1]);
  if (param_3 == (undefined4 *)0x0) {
    if (param_4 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(**(int **)((int)this + 0xec) + 0x5c))(local_2c);
      sVar1 = FUN_00ace02d(L"<phrase key=starname>");
      FUN_0040cae0(&local_4c,L"<phrase key=starname>",sVar1);
      FUN_0040cae0(&local_4c,(wchar_t *)*puVar2,puVar2[1]);
      sVar1 = FUN_00ace02d(L"</phrase>");
      FUN_0040cae0(&local_4c,L"</phrase>",sVar1);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      goto LAB_004ff901;
    }
    sVar1 = FUN_00ace02d(L"<phrase key=moviename>");
    FUN_0040cae0(&local_4c,L"<phrase key=moviename>",sVar1);
    sVar1 = param_4[1];
    pwVar3 = (wchar_t *)*param_4;
  }
  else {
    sVar1 = FUN_00ace02d(L"<phrase key=otherstarname>");
    FUN_0040cae0(&local_4c,L"<phrase key=otherstarname>",sVar1);
    sVar1 = param_3[1];
    pwVar3 = (wchar_t *)*param_3;
  }
  FUN_0040cae0(&local_4c,pwVar3,sVar1);
  sVar1 = FUN_00ace02d(L"</phrase>");
  FUN_0040cae0(&local_4c,L"</phrase>",sVar1);
LAB_004ff901:
  sVar1 = FUN_00ace02d(L"</phrasebook>");
  FUN_0040cae0(&local_4c,L"</phrasebook>",sVar1);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_4c,local_48);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004ff9d0 @ 004ff9d0 ////

int * __fastcall FUN_004ff9d0(int *param_1)

{
  FUN_00410910(param_1);
  *param_1 = (int)&PTR_FUN_00d21080;
  param_1[0xe] = (int)&PTR_LAB_00d21060;
  param_1[0x39] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = (int)(param_1 + 0x36);
  param_1[0x36] = (int)&PTR_FUN_00d16954;
  param_1[0x3b] = 0;
  param_1[0x3c] = (int)(param_1 + 0x3f);
  *(undefined2 *)(param_1 + 0x3f) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 10;
  param_1[0x44] = (int)(param_1 + 0x47);
  *(undefined2 *)(param_1 + 0x47) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 10;
  return param_1;
}


//// FUNCTION FUN_004ffa60 @ 004ffa60 ////

void __fastcall FUN_004ffa60(undefined4 *param_1)

{
  uint uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cab9d2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d21080;
  param_1[0xe] = &PTR_LAB_00d21060;
  local_4 = 3;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00410060((int)param_1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x3c,(wchar_t *)&lpCaption_00d16918,uVar1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x44,(wchar_t *)&lpCaption_00d16918,uVar1);
  (**(code **)(param_1[0x36] + 4))();
  param_1[0x3b] = 0;
  (**(code **)param_1[0x36])();
  if (10 < (uint)param_1[0x46]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x44]);
  }
  if (10 < (uint)param_1[0x3e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3c]);
  }
  param_1[0x36] = &PTR_FUN_00d16954;
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


//// FUNCTION FUN_004ffb90 @ 004ffb90 ////

int * __cdecl FUN_004ffb90(int param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cab9eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x130);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_004ff9d0(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar2[0x36] + 4))();
  piVar2[0x3b] = param_1;
  (**(code **)piVar2[0x36])();
  (**(code **)(*piVar2 + 8))();
  ExceptionList = pvStack_c;
  return piVar2;
}


//// FUNCTION FUN_004ffc10 @ 004ffc10 ////

void __fastcall FUN_004ffc10(int *param_1)

{
  void *this;
  
  (**(code **)(*param_1 + 4))();
  FUN_004ff3e0((int)param_1);
  FUN_004ff430((int)param_1);
  this = (void *)param_1[0x3b];
  FUN_00585ff0(this,(undefined4 *)&stack0xfffffff8);
  CBasicReview_SelectComments(param_1,(float)this);
  return;
}


//// FUNCTION FUN_004ffc40 @ 004ffc40 ////

void __thiscall FUN_004ffc40(void *this,float param_1,int param_2,undefined4 *param_3)

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
  puStack_8 = &LAB_00caba1b;
  local_c = ExceptionList;
  iVar4 = param_2 * 0x48;
  fVar1 = *(float *)(&DAT_0104b1c4 + iVar4);
  fVar2 = *(float *)(&DAT_0104b1c8 + iVar4);
  ExceptionList = &local_c;
  puVar3 = FUN_004312e0(local_2c,(undefined4 *)(&DAT_0104b1d8 + iVar4),"_TOOLTIP");
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
    FUN_00407070(&stack0xffffff9c,param_1);
    puVar3 = FUN_004aac60(this_00,((param_1 + param_1) - 1.0) * fVar1 + fVar2,param_3,local_4c,uVar5
                         );
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  CBasicReview_AddCommentToBin
            (this,param_1,*(float *)(&DAT_0104b1cc + iVar4),*(float *)(&DAT_0104b1d0 + iVar4),
             (int)puVar3,*(int *)(&DAT_0104b1c0 + iVar4),'\0');
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004ffd60 @ 004ffd60 ////

undefined4 * __thiscall FUN_004ffd60(void *this,undefined4 *param_1,float param_2,int param_3)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  wchar_t *local_90;
  uint local_8c;
  uint local_88;
  wchar_t local_84 [10];
  undefined1 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined1 local_64 [20];
  undefined4 local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caba4b;
  local_c = ExceptionList;
  local_90 = local_84;
  local_50 = 0;
  local_84[0] = L'\0';
  local_8c = 0;
  local_88 = 10;
  local_4 = 0;
  ppuVar1 = &PTR_DAT_00e51db0;
  if (*(int *)(*(int *)((int)this + 0xec) + 0x4a0) != 0) {
    ppuVar1 = &PTR_DAT_00e51d90;
  }
  local_70 = local_64;
  local_64[0] = 0;
  local_6c = 0;
  local_68 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_70,*ppuVar1,(uint)ppuVar1[1]);
  local_4._0_1_ = 1;
  piVar2 = FUN_0040e0c0((int *)local_2c,(int)(&DAT_0104b1f8 + param_3 * 0x48),param_2);
  FUN_0047aee0(local_4c,(undefined4 *)(&DAT_0104b1d8 + param_3 * 0x48),piVar2);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  iVar3 = FUN_009b5f90(local_4c,0xffffffff,&local_70);
  if (iVar3 != 0) {
    FUN_004036d0(&local_90,*(wchar_t **)(iVar3 + 0x40),*(uint *)(iVar3 + 0x44));
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_90,local_8c);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  if (10 < local_88) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004ffef0 @ 004ffef0 ////

void __fastcall FUN_004ffef0(void *param_1)

{
  float fVar1;
  float *pfVar2;
  float local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caba70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar2 = (float *)FUN_00587d40(*(void **)((int)param_1 + 0xec),&local_50);
  fVar1 = *pfVar2;
  FUN_004ffd60(param_1,local_2c,fVar1,3);
  local_4 = 0;
  FUN_004ff7a0(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004ffc40(param_1,fVar1,3,local_4c);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004fffb0 @ 004fffb0 ////

void __fastcall FUN_004fffb0(void *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caba90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005873c0(*(int *)((int)param_1 + 0xec));
  if (iVar2 != 0) {
    FUN_005873c0(*(int *)((int)param_1 + 0xec));
    if (DAT_0104c5ec != &DAT_0104c5f8) {
      pfVar3 = FUN_0058f9f0(*(void **)((int)param_1 + 0xec),&local_50);
      fVar1 = *pfVar3;
      FUN_004ffd60(param_1,local_2c,fVar1,4);
      local_4 = 0;
      FUN_004ff7a0(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004ffc40(param_1,fVar1,4,local_4c);
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


//// FUNCTION FUN_00500090 @ 00500090 ////

void __fastcall FUN_00500090(void *param_1)

{
  float10 fVar1;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cabab0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  fVar1 = FUN_005911a0(*(int **)((int)param_1 + 0xec));
  FUN_004ffd60(param_1,local_2c,(float)fVar1,7);
  local_4 = 0;
  FUN_004ff7a0(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004ffc40(param_1,(float)fVar1,7,local_4c);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00500140 @ 00500140 ////

void __fastcall FUN_00500140(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined *_Count;
  char *_Source;
  float fVar3;
  char cVar4;
  void *this;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  char *pcStack_90;
  undefined *puStack_8c;
  uint uStack_88;
  char acStack_84 [20];
  undefined2 *puStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined2 auStack_64 [10];
  undefined2 *apuStack_50 [2];
  uint uStack_48;
  float fStack_30;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabaf3;
  local_c = ExceptionList;
  puVar9 = DAT_0105086c;
  ExceptionList = &local_c;
  if (DAT_0105086c != &DAT_01050878) {
    do {
      piVar2 = (int *)puVar9[2];
      this = (void *)(**(code **)(*piVar2 + 8))();
      uVar5 = FUN_00413450(this,"trailer",0,7);
      if ((uVar5 != 0xffffffff) && (cVar4 = FUN_00960f30(piVar2), cVar4 != '\0')) {
        iVar6 = (**(code **)(**(int **)((int)param_1 + 0xec) + 0x270))();
        if (iVar6 == 0) {
          puStack_70 = auStack_64;
          auStack_64[0] = 0;
          uStack_6c = 0;
          uStack_68 = 10;
          uStack_4 = 0;
          ppuVar8 = &PTR_DAT_00e51db0;
          if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
            ppuVar8 = &PTR_DAT_00e51d90;
          }
          _Count = ppuVar8[1];
          _Source = *ppuVar8;
          pcStack_90 = acStack_84;
          acStack_84[0] = '\0';
          puStack_8c = (undefined *)0x0;
          uStack_88 = 0x14;
          if ((undefined *)0x13 < _Count) {
            uStack_88 = (uint)(_Count + 0x20) & 0xffffffe0;
            pcStack_90 = _malloc(uStack_88);
          }
          _strncpy(pcStack_90,_Source,(size_t)_Count);
          pcStack_90[(int)_Count] = '\0';
          puStack_8c = _Count;
          FUN_0047aee0(apvStack_2c,(undefined4 *)&DAT_0104b418,&PTR_DAT_00e51eb0);
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          iVar6 = FUN_009b5f90(apvStack_2c,0xffffffff,&pcStack_90);
          if (iVar6 != 0) {
            FUN_004036d0(&puStack_70,*(wchar_t **)(iVar6 + 0x40),*(uint *)(iVar6 + 0x44));
          }
          FUN_004ff7a0(param_1,apuStack_50,&puStack_70,(undefined4 *)0x0,(undefined4 *)0x0);
          uStack_4 = CONCAT31(uStack_4._1_3_,3);
          FUN_004ffc40(param_1,0.0,8,apuStack_50);
          if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
            _free(apuStack_50[0]);
          }
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          apuStack_50[0] = puStack_70;
          uStack_48 = uStack_68;
          if (0x14 < uStack_88) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_90);
          }
        }
        else {
          pfVar7 = (float *)FUN_00587ee0(*(void **)((int)param_1 + 0xec),&fStack_30);
          fVar3 = *pfVar7;
          FUN_004ffd60(param_1,apuStack_50,fVar3,8);
          uStack_4 = 4;
          FUN_004ff7a0(param_1,apvStack_2c,apuStack_50,(undefined4 *)0x0,(undefined4 *)0x0);
          uStack_4 = CONCAT31(uStack_4._1_3_,5);
          FUN_004ffc40(param_1,fVar3,8,apvStack_2c);
          if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
        }
        if (uStack_48 < 0xb) {
          ExceptionList = local_c;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(apuStack_50[0]);
      }
      puVar1 = puVar9 + 1;
      puVar9 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_01050878);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005003d0 @ 005003d0 ////

void __fastcall FUN_005003d0(void *param_1)

{
  void *this;
  float fVar1;
  char cVar2;
  undefined **ppuVar3;
  int iVar4;
  float *pfVar5;
  undefined1 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84 [20];
  undefined2 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined2 local_64 [10];
  undefined2 *local_50 [2];
  uint local_48;
  float local_30;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cabb33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = FUN_00472590(3);
  if (cVar2 != '\0') {
    this = *(void **)((int)param_1 + 0xec);
    if (*(int *)((int)this + 0xa50) == (int)this + 0xa5c) {
      local_70 = local_64;
      local_64[0] = 0;
      local_6c = 0;
      local_68 = 10;
      local_4 = 0;
      ppuVar3 = &PTR_DAT_00e51db0;
      if (*(int *)((int)this + 0x4a0) != 0) {
        ppuVar3 = &PTR_DAT_00e51d90;
      }
      local_90 = local_84;
      local_84[0] = 0;
      local_8c = 0;
      local_88 = 0x14;
      FUN_004015d0(&local_90,*ppuVar3,(uint)ppuVar3[1]);
      FUN_0047aee0(local_2c,(undefined4 *)&DAT_0104b460,&PTR_DAT_00e51eb0);
      local_4 = CONCAT31(local_4._1_3_,2);
      iVar4 = FUN_009b5f90(local_2c,0xffffffff,&local_90);
      if (iVar4 != 0) {
        FUN_004036d0(&local_70,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
      }
      FUN_004ff7a0(param_1,local_50,&local_70,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004ffc40(param_1,0.0,9,local_50);
      if (10 < local_48) {
                    /* WARNING: Subroutine does not return */
        _free(local_50[0]);
      }
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      local_50[0] = local_70;
      local_48 = local_68;
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
    }
    else {
      pfVar5 = (float *)FUN_00587e40(this,&local_30);
      fVar1 = *pfVar5;
      FUN_004ffd60(param_1,local_50,fVar1,9);
      local_4 = 4;
      FUN_004ff7a0(param_1,local_2c,local_50,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_004ffc40(param_1,fVar1,9,local_2c);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
    if (10 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005005e0 @ 005005e0 ////

void __fastcall FUN_005005e0(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_FUN_00d1aed0;
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00500630 @ 00500630 ////

void __thiscall FUN_00500630(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)this = *param_1;
  piVar1 = (int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = &PTR_FUN_00d1aed0;
  iVar2 = param_1[6];
  *(int *)((int)this + 0x18) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0xc) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(param_1 + 9);
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  return;
}


//// FUNCTION FUN_005006a0 @ 005006a0 ////

void __fastcall FUN_005006a0(void *param_1)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  float local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cabb50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_0057e2d0(*(int *)((int)param_1 + 0xec));
  if (DAT_0104b5c4 <= uVar2) {
    pfVar3 = FUN_00586190(*(void **)((int)param_1 + 0xec),&local_50);
    fVar1 = *pfVar3;
    FUN_004ffd60(param_1,local_2c,fVar1,0xe);
    local_4 = 0;
    FUN_004ff7a0(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004ffc40(param_1,fVar1,0xe,local_4c);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00500770 @ 00500770 ////

void __fastcall FUN_00500770(void *param_1)

{
  float fVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  undefined **ppuVar5;
  float *pfVar6;
  float10 extraout_ST0;
  undefined4 uStack_90;
  undefined2 *puStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined2 auStack_80 [10];
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined1 auStack_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabb93;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar3 = (void *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x27c))();
  if (pvVar3 == (void *)0x0) {
    ExceptionList = pvStack_c;
    return;
  }
  iVar4 = FUN_004725b0((int)pvVar3);
  FUN_00566e40(iVar4);
  fVar1 = (float)extraout_ST0;
  puStack_8c = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0;
  uStack_84 = 10;
  uStack_4 = 0;
  ppuVar5 = &PTR_DAT_00e51db0;
  if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
    ppuVar5 = &PTR_DAT_00e51d90;
  }
  puStack_6c = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0;
  uStack_64 = 0x14;
  FUN_004015d0(&puStack_6c,*ppuVar5,(uint)ppuVar5[1]);
  uStack_4._0_1_ = 1;
  pfVar6 = (float *)CProjectCastEffect_GetEffectiveLowerMoodThreshold(pvVar3,&uStack_90);
  if (*pfVar6 <= fVar1) {
    pfVar6 = (float *)CProjectCastEffect_GetEffectiveUpperMoodThreshold(pvVar3,&uStack_90);
    if (fVar1 <= *pfVar6) goto LAB_005009a9;
    FUN_0047aee0(apvStack_4c,(undefined4 *)&DAT_0104b6a0,&PTR_DAT_00e51df0);
    uStack_4 = CONCAT31(uStack_4._1_3_,4);
    iVar4 = FUN_009b5f90(apvStack_4c,0xffffffff,&puStack_6c);
    if (iVar4 != 0) {
      FUN_004036d0(&puStack_8c,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
    }
    FUN_004ff7a0(param_1,apvStack_2c,&puStack_8c,(undefined4 *)0x0,(undefined4 *)0x0);
    uStack_4._0_1_ = 5;
    FUN_004ffc40(param_1,fVar1,0x11,apvStack_2c);
    pvVar3 = apvStack_4c[0];
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
  }
  else {
    FUN_0047aee0(apvStack_2c,(undefined4 *)&DAT_0104b6a0,&PTR_DAT_00e51e10);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    iVar4 = FUN_009b5f90(apvStack_2c,0xffffffff,&puStack_6c);
    if (iVar4 != 0) {
      FUN_004036d0(&puStack_8c,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
    }
    FUN_004ff7a0(param_1,apvStack_4c,&puStack_8c,(undefined4 *)0x0,(undefined4 *)0x0);
    uStack_4._0_1_ = 3;
    FUN_004ffc40(param_1,fVar1,0x11,apvStack_4c);
    bVar2 = 10 < uStack_44;
    pvVar3 = apvStack_2c[0];
    uStack_44 = uStack_24;
    if (bVar2) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
  }
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
LAB_005009a9:
  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_6c);
  }
  if (uStack_84 < 0xb) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_8c);
}


//// FUNCTION FUN_005009f0 @ 005009f0 ////

void __fastcall FUN_005009f0(void *param_1)

{
  int iVar1;
  void *this;
  float *pfVar2;
  undefined **ppuVar3;
  float fStack_94;
  undefined2 *puStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined2 auStack_84 [10];
  undefined4 uStack_70;
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
  puStack_8 = &LAB_00cabbc3;
  local_c = ExceptionList;
  if ((*(int **)((int)param_1 + 0xec) != (int *)0x0) &&
     (ExceptionList = &local_c, iVar1 = (**(code **)(**(int **)((int)param_1 + 0xec) + 0x27c))(),
     iVar1 != 0)) {
    iVar1 = (**(code **)(**(int **)((int)param_1 + 0xec) + 0x27c))();
    this = (void *)FUN_00473120(iVar1);
    if (this != (void *)0x0) {
      pfVar2 = (float *)FUN_004731e0(this,&fStack_94);
      fStack_94 = *pfVar2;
      pfVar2 = (float *)FUN_004732e0(this,&uStack_70);
      if (*pfVar2 <= fStack_94) {
        puStack_90 = auStack_84;
        auStack_84[0] = 0;
        uStack_8c = 0;
        uStack_88 = 10;
        uStack_4 = 0;
        ppuVar3 = &PTR_DAT_00e51db0;
        if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
          ppuVar3 = &PTR_DAT_00e51d90;
        }
        FUN_00403de0(apvStack_2c,ppuVar3);
        FUN_00403de0(apvStack_4c,(undefined4 *)&DAT_0104b778);
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        iVar1 = FUN_009b5f90(apvStack_4c,0xffffffff,apvStack_2c);
        if (iVar1 != 0) {
          FUN_00403e70(&puStack_90,(undefined4 *)(iVar1 + 0x40));
        }
        FUN_004ff7a0(param_1,apvStack_6c,&puStack_90,(undefined4 *)0x0,(undefined4 *)0x0);
        uStack_4 = CONCAT31(uStack_4._1_3_,3);
        FUN_004ffc40(param_1,1.0 - fStack_94,0x14,apvStack_6c);
        if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_6c[0]);
        }
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        if (10 < uStack_88) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_90);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00500bb0 @ 00500bb0 ////

void __fastcall FUN_00500bb0(void *param_1)

{
  int iVar1;
  void *this;
  float *pfVar2;
  undefined **ppuVar3;
  float fStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined1 auStack_84 [20];
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined1 auStack_64 [20];
  undefined2 *puStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined2 auStack_44 [10];
  undefined4 uStack_30;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabbf3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(**(int **)((int)param_1 + 0xec) + 0x27c))();
  this = (void *)FUN_00473120(iVar1);
  if (this != (void *)0x0) {
    pfVar2 = (float *)FUN_00473210(this,&fStack_94);
    fStack_94 = *pfVar2;
    pfVar2 = (float *)FUN_00473370(this,&uStack_30);
    if (*pfVar2 <= fStack_94) {
      puStack_50 = auStack_44;
      auStack_44[0] = 0;
      uStack_4c = 0;
      uStack_48 = 10;
      uStack_4 = 0;
      ppuVar3 = &PTR_DAT_00e51db0;
      if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
        ppuVar3 = &PTR_DAT_00e51d90;
      }
      puStack_70 = auStack_64;
      auStack_64[0] = 0;
      uStack_6c = 0;
      uStack_68 = 0x14;
      FUN_004015d0(&puStack_70,*ppuVar3,(uint)ppuVar3[1]);
      puStack_90 = auStack_84;
      auStack_84[0] = 0;
      uStack_8c = 0;
      uStack_88 = 0x14;
      FUN_004015d0(&puStack_90,DAT_0104b808,DAT_0104b80c);
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      iVar1 = FUN_009b5f90(&puStack_90,0xffffffff,&puStack_70);
      if (iVar1 != 0) {
        FUN_004036d0(&puStack_50,*(wchar_t **)(iVar1 + 0x40),*(uint *)(iVar1 + 0x44));
      }
      FUN_004ff7a0(param_1,apvStack_2c,&puStack_50,(undefined4 *)0x0,(undefined4 *)0x0);
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      FUN_004ffc40(param_1,1.0 - fStack_94,0x16,apvStack_2c);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      if (0x14 < uStack_88) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_90);
      }
      if (0x14 < uStack_68) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_70);
      }
      if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_50);
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00500d90 @ 00500d90 ////

void __fastcall FUN_00500d90(void *param_1)

{
  void *this;
  undefined4 uVar1;
  float *pfVar2;
  undefined **ppuVar3;
  int iVar4;
  float fStack_90;
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined1 auStack_80 [20];
  undefined2 *puStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined2 auStack_60 [10];
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabc23;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = (void *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x294))();
  if (this != (void *)0x0) {
    uVar1 = FUN_00407190(this,0);
    if ((char)uVar1 != '\0') {
      pfVar2 = (float *)FUN_00407250(this,&fStack_90,0);
      fStack_90 = *pfVar2;
      puStack_6c = auStack_60;
      auStack_60[0] = 0;
      uStack_68 = 0;
      uStack_64 = 10;
      uStack_4 = 0;
      ppuVar3 = &PTR_DAT_00e51db0;
      if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
        ppuVar3 = &PTR_DAT_00e51d90;
      }
      puStack_8c = auStack_80;
      auStack_80[0] = 0;
      uStack_88 = 0;
      uStack_84 = 0x14;
      FUN_004015d0(&puStack_8c,*ppuVar3,(uint)ppuVar3[1]);
      puStack_4c = auStack_40;
      auStack_40[0] = 0;
      uStack_48 = 0;
      uStack_44 = 0x14;
      FUN_004015d0(&puStack_4c,DAT_0104b898,DAT_0104b89c);
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      iVar4 = FUN_009b5f90(&puStack_4c,0xffffffff,&puStack_8c);
      if (iVar4 != 0) {
        FUN_004036d0(&puStack_6c,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
      }
      FUN_004ff7a0(param_1,apvStack_2c,&puStack_6c,(undefined4 *)0x0,(undefined4 *)0x0);
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      FUN_004ffc40(param_1,1.0 - fStack_90,0x18,apvStack_2c);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_4c);
      }
      if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_8c);
      }
      if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_6c);
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00500f50 @ 00500f50 ////

void __fastcall FUN_00500f50(void *param_1)

{
  void *this;
  undefined4 uVar1;
  float *pfVar2;
  undefined **ppuVar3;
  int iVar4;
  float fStack_90;
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined1 auStack_80 [20];
  undefined2 *puStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined2 auStack_60 [10];
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabc53;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = (void *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x294))();
  if (this != (void *)0x0) {
    uVar1 = FUN_00407190(this,1);
    if ((char)uVar1 != '\0') {
      pfVar2 = (float *)FUN_00407250(this,&fStack_90,1);
      fStack_90 = *pfVar2;
      puStack_6c = auStack_60;
      auStack_60[0] = 0;
      uStack_68 = 0;
      uStack_64 = 10;
      uStack_4 = 0;
      ppuVar3 = &PTR_DAT_00e51db0;
      if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
        ppuVar3 = &PTR_DAT_00e51d90;
      }
      puStack_8c = auStack_80;
      auStack_80[0] = 0;
      uStack_88 = 0;
      uStack_84 = 0x14;
      FUN_004015d0(&puStack_8c,*ppuVar3,(uint)ppuVar3[1]);
      puStack_4c = auStack_40;
      auStack_40[0] = 0;
      uStack_48 = 0;
      uStack_44 = 0x14;
      FUN_004015d0(&puStack_4c,DAT_0104b928,DAT_0104b92c);
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      iVar4 = FUN_009b5f90(&puStack_4c,0xffffffff,&puStack_8c);
      if (iVar4 != 0) {
        FUN_004036d0(&puStack_6c,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
      }
      FUN_004ff7a0(param_1,apvStack_2c,&puStack_6c,(undefined4 *)0x0,(undefined4 *)0x0);
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      FUN_004ffc40(param_1,1.0 - fStack_90,0x1a,apvStack_2c);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_4c);
      }
      if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_8c);
      }
      if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_6c);
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00501110 @ 00501110 ////

void __fastcall FUN_00501110(void *param_1)

{
  ulonglong uVar1;
  float fVar2;
  void *local_50 [2];
  uint uStack_48;
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabc70;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)((int)param_1 + 0xec) + 0x1e0))(local_50);
  uVar1 = FUN_0043b560();
  fVar2 = ((float)(int)uVar1 - (float)DAT_0104b198) / (float)(DAT_00e51d8c - DAT_0104b198);
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  FUN_004ffd60(param_1,apvStack_30,fVar2,0x1f);
  puStack_8 = (undefined1 *)0x0;
  FUN_004ff7a0(param_1,local_50,apvStack_30,(undefined4 *)0x0,(undefined4 *)0x0);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  FUN_004ffc40(param_1,fVar2,0x1f,local_50);
  if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50[0]);
  }
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_30[0]);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00501230 @ 00501230 ////

void __fastcall FUN_00501230(void *param_1)

{
  float fVar1;
  float *pfVar2;
  void *local_50 [2];
  uint uStack_48;
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabc90;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pfVar2 = (float *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x238))(local_50);
  fVar1 = *pfVar2;
  FUN_004ffd60(param_1,apvStack_30,fVar1,0x20);
  puStack_8 = (undefined1 *)0x0;
  FUN_004ff7a0(param_1,local_50,apvStack_30,(undefined4 *)0x0,(undefined4 *)0x0);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  FUN_004ffc40(param_1,fVar1,0x20,local_50);
  if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50[0]);
  }
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_30[0]);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_005012f0 @ 005012f0 ////

void __fastcall FUN_005012f0(void *param_1)

{
  float fVar1;
  float *pfVar2;
  float local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cabcb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar2 = (float *)FUN_00587100(*(void **)((int)param_1 + 0xec),&local_50);
  fVar1 = *pfVar2;
  FUN_004ffd60(param_1,local_2c,fVar1,0x21);
  local_4 = 0;
  FUN_004ff7a0(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004ffc40(param_1,fVar1,0x21,local_4c);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005013b0 @ 005013b0 ////

undefined4 * __thiscall FUN_005013b0(void *this,byte param_1)

{
  FUN_004ffa60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005013d0 @ 005013d0 ////

void __fastcall FUN_005013d0(void *param_1)

{
  void *this;
  int iVar1;
  float *pfVar2;
  undefined **ppuVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  float local_9c;
  undefined2 *local_94;
  undefined4 local_90;
  uint local_8c;
  undefined2 local_88 [10];
  undefined1 *local_74;
  undefined4 local_70;
  uint local_6c;
  undefined1 local_68 [20];
  undefined1 *local_54;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48 [20];
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cabce3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = GetPlayerStudio();
  iVar4 = *(int *)(iVar1 + 0x94);
  uVar6 = 0;
  if (iVar4 != iVar1 + 0xa0) {
    do {
      iVar4 = *(int *)(iVar4 + 4);
      uVar6 = uVar6 + 1;
    } while (iVar4 != iVar1 + 0xa0);
    if (1 < uVar6) {
      iVar4 = *(int *)(iVar1 + 0x94);
      pvVar5 = (void *)0x0;
      local_9c = -3.4028235e+38;
      for (; iVar4 != iVar1 + 0xa0; iVar4 = *(int *)(iVar4 + 4)) {
        this = *(void **)(iVar4 + 8);
        pfVar2 = (float *)FUN_00585ff0(this,&local_30);
        if (local_9c < *pfVar2) {
          pfVar2 = (float *)FUN_00585ff0(this,&local_34);
          local_9c = *pfVar2;
          pvVar5 = this;
        }
      }
      if ((pvVar5 == *(void **)((int)param_1 + 0xec)) && (*DAT_0104b244 <= local_9c)) {
        local_94 = local_88;
        local_88[0] = 0;
        local_90 = 0;
        local_8c = 10;
        local_4 = 0;
        ppuVar3 = &PTR_DAT_00e51db0;
        if (*(int *)((int)*(void **)((int)param_1 + 0xec) + 0x4a0) != 0) {
          ppuVar3 = &PTR_DAT_00e51d90;
        }
        local_54 = local_48;
        local_48[0] = 0;
        local_50 = 0;
        local_4c = 0x14;
        FUN_004015d0(&local_54,*ppuVar3,(uint)ppuVar3[1]);
        local_74 = local_68;
        local_68[0] = 0;
        local_70 = 0;
        local_6c = 0x14;
        FUN_004015d0(&local_74,DAT_0104b220,DAT_0104b224);
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar4 = FUN_009b5f90(&local_74,0xffffffff,&local_54);
        if (iVar4 != 0) {
          FUN_004036d0(&local_94,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
        }
        FUN_004ff7a0(param_1,local_2c,&local_94,(undefined4 *)0x0,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_004ffc40(param_1,local_9c,1,local_2c);
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
          _free(local_74);
        }
        if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
          _free(local_54);
        }
        if (10 < local_8c) {
                    /* WARNING: Subroutine does not return */
          _free(local_94);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00501600 @ 00501600 ////

void __fastcall FUN_00501600(void *param_1)

{
  void *this;
  int iVar1;
  float *pfVar2;
  undefined **ppuVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  float local_9c;
  undefined2 *local_94;
  undefined4 local_90;
  uint local_8c;
  undefined2 local_88 [10];
  undefined1 *local_74;
  undefined4 local_70;
  uint local_6c;
  undefined1 local_68 [20];
  undefined1 *local_54;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48 [20];
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cabd13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = GetPlayerStudio();
  iVar4 = *(int *)(iVar1 + 0x94);
  uVar6 = 0;
  if (iVar4 != iVar1 + 0xa0) {
    do {
      iVar4 = *(int *)(iVar4 + 4);
      uVar6 = uVar6 + 1;
    } while (iVar4 != iVar1 + 0xa0);
    if (1 < uVar6) {
      iVar4 = *(int *)(iVar1 + 0x94);
      pvVar5 = (void *)0x0;
      local_9c = 3.4028235e+38;
      for (; iVar4 != iVar1 + 0xa0; iVar4 = *(int *)(iVar4 + 4)) {
        this = *(void **)(iVar4 + 8);
        pfVar2 = (float *)FUN_00585ff0(this,&local_30);
        if (*pfVar2 < local_9c) {
          pfVar2 = (float *)FUN_00585ff0(this,&local_34);
          local_9c = *pfVar2;
          pvVar5 = this;
        }
      }
      if ((pvVar5 == *(void **)((int)param_1 + 0xec)) &&
         (local_9c < *DAT_0104b28c != (local_9c == *DAT_0104b28c))) {
        local_94 = local_88;
        local_88[0] = 0;
        local_90 = 0;
        local_8c = 10;
        local_4 = 0;
        ppuVar3 = &PTR_DAT_00e51db0;
        if (*(int *)((int)*(void **)((int)param_1 + 0xec) + 0x4a0) != 0) {
          ppuVar3 = &PTR_DAT_00e51d90;
        }
        local_54 = local_48;
        local_48[0] = 0;
        local_50 = 0;
        local_4c = 0x14;
        FUN_004015d0(&local_54,*ppuVar3,(uint)ppuVar3[1]);
        local_74 = local_68;
        local_68[0] = 0;
        local_70 = 0;
        local_6c = 0x14;
        FUN_004015d0(&local_74,DAT_0104b268,DAT_0104b26c);
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar4 = FUN_009b5f90(&local_74,0xffffffff,&local_54);
        if (iVar4 != 0) {
          FUN_004036d0(&local_94,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
        }
        FUN_004ff7a0(param_1,local_2c,&local_94,(undefined4 *)0x0,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_004ffc40(param_1,local_9c,2,local_2c);
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
          _free(local_74);
        }
        if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
          _free(local_54);
        }
        if (10 < local_8c) {
                    /* WARNING: Subroutine does not return */
          _free(local_94);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00501830 @ 00501830 ////

void __fastcall FUN_00501830(void *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *this;
  float *pfVar7;
  undefined **ppuVar8;
  int *piVar9;
  char *pcVar10;
  size_t sVar11;
  float local_b8;
  undefined1 *puStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined1 auStack_a4 [20];
  undefined2 *puStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined2 auStack_84 [10];
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined1 auStack_64 [20];
  float fStack_50;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabd4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_005873c0(*(int *)((int)param_1 + 0xec));
  if (iVar4 != 0) {
    iVar5 = GetPlayerStudio();
    iVar4 = *(int *)(iVar5 + 0x94);
    local_b8 = -3.4028235e+38;
    if (iVar4 != iVar5 + 0xa0) {
      piVar9 = (int *)0x0;
      do {
        piVar1 = *(int **)(iVar4 + 8);
        if ((piVar1 != *(int **)((int)param_1 + 0xec)) &&
           (cVar2 = (**(code **)(*piVar1 + 0x13c))(), cVar2 != '\0')) {
          iVar6 = FUN_005873c0((int)piVar1);
          bVar3 = FUN_0042a720(iVar6);
          if (bVar3) {
            iVar6 = *(int *)((int)param_1 + 0xec);
            pfVar7 = &fStack_50;
            this = (void *)FUN_005873c0((int)piVar1);
            pfVar7 = FUN_0042e910(this,pfVar7,iVar6);
            if (local_b8 < *pfVar7) {
              piVar9 = piVar1;
              local_b8 = *pfVar7;
            }
          }
        }
        iVar4 = *(int *)(iVar4 + 4);
      } while (iVar4 != iVar5 + 0xa0);
      if ((piVar9 != (int *)0x0) && (*DAT_0104b364 <= local_b8)) {
        puStack_90 = auStack_84;
        auStack_84[0] = 0;
        uStack_8c = 0;
        uStack_88 = 10;
        uStack_4 = 0;
        ppuVar8 = &PTR_DAT_00e51db0;
        if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
          ppuVar8 = &PTR_DAT_00e51d90;
        }
        puStack_70 = auStack_64;
        auStack_64[0] = 0;
        uStack_6c = 0;
        uStack_68 = 0x14;
        FUN_004015d0(&puStack_70,*ppuVar8,(uint)ppuVar8[1]);
        puStack_b0 = auStack_a4;
        auStack_a4[0] = 0;
        uStack_ac = 0;
        uStack_a8 = 0x14;
        FUN_004015d0(&puStack_b0,DAT_0104b340,DAT_0104b344);
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        pcVar10 = PTR_DAT_00e51e90;
        sVar11 = DAT_00e51e94;
        if (piVar9[0x128] == 0) {
          pcVar10 = PTR_DAT_00e51e70;
          sVar11 = DAT_00e51e74;
        }
        FUN_004073f0(&puStack_b0,pcVar10,sVar11);
        iVar4 = FUN_009b5f90(&puStack_b0,0xffffffff,&puStack_70);
        if (iVar4 != 0) {
          FUN_004036d0(&puStack_90,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
        }
        (**(code **)(*piVar9 + 0x5c))(apvStack_2c);
        uStack_4._0_1_ = 3;
        FUN_004ff7a0(param_1,apvStack_4c,&puStack_90,apvStack_2c,(undefined4 *)0x0);
        uStack_4 = CONCAT31(uStack_4._1_3_,4);
        FUN_004ffc40(param_1,local_b8,5,apvStack_4c);
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        if (0x14 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_b0);
        }
        if (0x14 < uStack_68) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_70);
        }
        if (10 < uStack_88) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_90);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00501ae0 @ 00501ae0 ////

void __fastcall FUN_00501ae0(void *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *this;
  float *pfVar7;
  undefined **ppuVar8;
  int *piVar9;
  char *pcVar10;
  size_t sVar11;
  float local_b8;
  undefined1 *puStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined1 auStack_a4 [20];
  undefined2 *puStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined2 auStack_84 [10];
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined1 auStack_64 [20];
  float fStack_50;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabd8e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_005873c0(*(int *)((int)param_1 + 0xec));
  if (iVar4 != 0) {
    iVar5 = GetPlayerStudio();
    iVar4 = *(int *)(iVar5 + 0x94);
    local_b8 = 3.4028235e+38;
    if (iVar4 != iVar5 + 0xa0) {
      piVar9 = (int *)0x0;
      do {
        piVar1 = *(int **)(iVar4 + 8);
        if ((piVar1 != *(int **)((int)param_1 + 0xec)) &&
           (cVar2 = (**(code **)(*piVar1 + 0x13c))(), cVar2 != '\0')) {
          iVar6 = FUN_005873c0((int)piVar1);
          bVar3 = FUN_0042a720(iVar6);
          if (bVar3) {
            iVar6 = *(int *)((int)param_1 + 0xec);
            pfVar7 = &fStack_50;
            this = (void *)FUN_005873c0((int)piVar1);
            pfVar7 = FUN_0042e910(this,pfVar7,iVar6);
            if (*pfVar7 < local_b8) {
              piVar9 = piVar1;
              local_b8 = *pfVar7;
            }
          }
        }
        iVar4 = *(int *)(iVar4 + 4);
      } while (iVar4 != iVar5 + 0xa0);
      if ((piVar9 != (int *)0x0) && (local_b8 < *DAT_0104b3ac != (local_b8 == *DAT_0104b3ac))) {
        puStack_90 = auStack_84;
        auStack_84[0] = 0;
        uStack_8c = 0;
        uStack_88 = 10;
        uStack_4 = 0;
        ppuVar8 = &PTR_DAT_00e51db0;
        if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
          ppuVar8 = &PTR_DAT_00e51d90;
        }
        puStack_70 = auStack_64;
        auStack_64[0] = 0;
        uStack_6c = 0;
        uStack_68 = 0x14;
        FUN_004015d0(&puStack_70,*ppuVar8,(uint)ppuVar8[1]);
        puStack_b0 = auStack_a4;
        auStack_a4[0] = 0;
        uStack_ac = 0;
        uStack_a8 = 0x14;
        FUN_004015d0(&puStack_b0,DAT_0104b388,DAT_0104b38c);
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        pcVar10 = PTR_DAT_00e51e90;
        sVar11 = DAT_00e51e94;
        if (piVar9[0x128] == 0) {
          pcVar10 = PTR_DAT_00e51e70;
          sVar11 = DAT_00e51e74;
        }
        FUN_004073f0(&puStack_b0,pcVar10,sVar11);
        iVar4 = FUN_009b5f90(&puStack_b0,0xffffffff,&puStack_70);
        if (iVar4 != 0) {
          FUN_004036d0(&puStack_90,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
        }
        (**(code **)(*piVar9 + 0x5c))(apvStack_2c);
        uStack_4._0_1_ = 3;
        FUN_004ff7a0(param_1,apvStack_4c,&puStack_90,apvStack_2c,(undefined4 *)0x0);
        uStack_4 = CONCAT31(uStack_4._1_3_,4);
        FUN_004ffc40(param_1,local_b8,6,apvStack_4c);
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        if (0x14 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_b0);
        }
        if (0x14 < uStack_68) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_70);
        }
        if (10 < uStack_88) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_90);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00501d90 @ 00501d90 ////

void __fastcall FUN_00501d90(void *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  float local_d4;
  undefined1 *local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined1 local_c4 [20];
  undefined2 *local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined2 local_a4 [16];
  undefined2 *local_84 [2];
  uint local_7c;
  void *local_64 [2];
  uint local_5c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cabdf7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar7 = FUN_0043b560();
  iVar3 = FUN_0085bb00();
  if (iVar3 <= (int)uVar7) {
    pvVar4 = FUN_00857d80(&local_b0);
    local_4 = 0;
    pfVar5 = FUN_00857ae0(pvVar4,*(float *)((int)param_1 + 0xec));
    FUN_00500630(local_38,pfVar5);
    local_4._0_1_ = 2;
    FUN_005005e0((int)&local_b0);
    pvVar4 = FUN_00857bd0(local_64);
    local_4._0_1_ = 3;
    bVar2 = FUN_00856db0(local_38,(int)pvVar4);
    local_4._0_1_ = 2;
    FUN_005005e0((int)local_64);
    if (bVar2) {
      local_b0 = local_a4;
      local_a4[0] = 0;
      local_ac = 0;
      local_a8 = 10;
      ppuVar6 = &PTR_DAT_00e51db0;
      if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
        ppuVar6 = &PTR_DAT_00e51d90;
      }
      local_d0 = local_c4;
      local_c4[0] = 0;
      local_cc = 0;
      local_c8 = 0x14;
      FUN_004015d0(&local_d0,*ppuVar6,(uint)ppuVar6[1]);
      FUN_0047aee0(local_64,(undefined4 *)&DAT_0104b4a8,&PTR_DAT_00e51eb0);
      local_4 = CONCAT31(local_4._1_3_,6);
      iVar3 = FUN_009b5f90(local_64,0xffffffff,&local_d0);
      if (iVar3 != 0) {
        FUN_004036d0(&local_b0,*(wchar_t **)(iVar3 + 0x40),*(uint *)(iVar3 + 0x44));
      }
      FUN_004ff7a0(param_1,local_84,&local_b0,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,7);
      FUN_004ffc40(param_1,0.0,10,local_84);
      if (10 < local_7c) {
                    /* WARNING: Subroutine does not return */
        _free(local_84[0]);
      }
      if (0x14 < local_5c) {
                    /* WARNING: Subroutine does not return */
        _free(local_64[0]);
      }
      local_84[0] = local_b0;
      local_7c = local_a8;
      if (0x14 < local_c8) {
                    /* WARNING: Subroutine does not return */
        _free(local_d0);
      }
    }
    else {
      pfVar5 = CStar_GetAwardsRatingComponent(*(void **)((int)param_1 + 0xec),&local_d4);
      fVar1 = *pfVar5;
      local_d4 = fVar1;
      FUN_004ffd60(param_1,local_84,fVar1,10);
      local_4._0_1_ = 8;
      FUN_004ff7a0(param_1,local_64,local_84,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,9);
      FUN_004ffc40(param_1,fVar1,10,local_64);
      if (10 < local_5c) {
                    /* WARNING: Subroutine does not return */
        _free(local_64[0]);
      }
    }
    if (10 < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free(local_84[0]);
    }
    FUN_005005e0((int)local_38);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00502030 @ 00502030 ////

void __fastcall FUN_00502030(void *param_1)

{
  float fVar1;
  undefined *_Count;
  char *pcVar2;
  uint _Count_00;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  float local_b8;
  int local_b4;
  char *local_ac;
  uint local_a8;
  uint local_a4;
  char local_a0 [20];
  char *local_8c;
  undefined *local_88;
  uint local_84;
  char local_80 [20];
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
  
  puStack_8 = &LAB_00cabe3e;
  local_c = ExceptionList;
  iVar3 = *(int *)((int)param_1 + 0xec);
  iVar4 = *(int *)(iVar3 + 0x774);
  local_b8 = -3.4028235e+38;
  local_b4 = 0;
  if (iVar4 != *(int *)(iVar3 + 0x778)) {
    do {
      fVar1 = *(float *)(*(int *)(iVar4 + 0x14) + 0xbc);
      if (local_b8 < fVar1) {
        local_b8 = fVar1;
        local_b4 = *(int *)(iVar4 + 0x14);
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != *(int *)(iVar3 + 0x778));
    if ((local_b4 != 0) && (*DAT_0104b55c <= local_b8)) {
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 10;
      local_4 = 0;
      ppuVar5 = &PTR_DAT_00e51db0;
      if (*(int *)(iVar3 + 0x4a0) != 0) {
        ppuVar5 = &PTR_DAT_00e51d90;
      }
      _Count = ppuVar5[1];
      pcVar2 = *ppuVar5;
      local_8c = local_80;
      local_80[0] = '\0';
      local_88 = (undefined *)0x0;
      local_84 = 0x14;
      ExceptionList = &local_c;
      if ((undefined *)0x13 < _Count) {
        local_84 = (uint)(_Count + 0x20) & 0xffffffe0;
        ExceptionList = &local_c;
        local_8c = _malloc(local_84);
      }
      _strncpy(local_8c,pcVar2,(size_t)_Count);
      local_8c[(int)_Count] = '\0';
      _Count_00 = DAT_0104b53c;
      pcVar2 = DAT_0104b538;
      local_ac = local_a0;
      local_a0[0] = '\0';
      local_a8 = 0;
      local_a4 = 0x14;
      local_88 = _Count;
      if (0x13 < DAT_0104b53c) {
        local_a4 = DAT_0104b53c + 0x20 & 0xffffffe0;
        local_ac = _malloc(local_a4);
      }
      _strncpy(local_ac,pcVar2,_Count_00);
      local_a8 = _Count_00;
      local_ac[_Count_00] = '\0';
      local_4 = CONCAT31(local_4._1_3_,2);
      iVar3 = FUN_009b5f90(&local_ac,0xffffffff,&local_8c);
      if (iVar3 != 0) {
        FUN_004036d0(&local_4c,*(wchar_t **)(iVar3 + 0x40),*(uint *)(iVar3 + 0x44));
      }
      local_6c = local_60;
      local_60[0] = 0;
      local_68 = 0;
      local_64 = 10;
      FUN_004036d0(&local_6c,*(wchar_t **)(local_b4 + 0x70),*(uint *)(local_b4 + 0x74));
      local_4._0_1_ = 3;
      FUN_004ff7a0(param_1,local_2c,&local_4c,(undefined4 *)0x0,&local_6c);
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_004ffc40(param_1,local_b8,0xc,local_2c);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac);
      }
      if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c);
      }
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005022e0 @ 005022e0 ////

void __fastcall FUN_005022e0(void *param_1)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float local_b4;
  undefined1 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined1 local_a0 [20];
  undefined1 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 local_80 [20];
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
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cabe7e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_0057e2d0(*(int *)((int)param_1 + 0xec));
  if (DAT_0104b57c <= uVar2) {
    iVar4 = *(int *)((int)param_1 + 0xec);
    iVar5 = *(int *)(iVar4 + 0x774);
    iVar6 = 0;
    local_b4 = -3.4028235e+38;
    if (iVar5 != *(int *)(iVar4 + 0x778)) {
      do {
        iVar1 = *(int *)(iVar5 + 0x14);
        if ((iVar1 != 0) && (local_b4 < *(float *)(iVar1 + 0xb0))) {
          iVar6 = iVar1;
          local_b4 = *(float *)(iVar1 + 0xb0);
        }
        iVar5 = iVar5 + 0x18;
      } while (iVar5 != *(int *)(iVar4 + 0x778));
      if ((iVar6 != 0) && (*DAT_0104b5a4 <= local_b4)) {
        local_6c = local_60;
        local_60[0] = 0;
        local_68 = 0;
        local_64 = 10;
        local_4 = 0;
        ppuVar3 = &PTR_DAT_00e51db0;
        if (*(int *)(iVar4 + 0x4a0) != 0) {
          ppuVar3 = &PTR_DAT_00e51d90;
        }
        local_8c = local_80;
        local_80[0] = 0;
        local_88 = 0;
        local_84 = 0x14;
        FUN_004015d0(&local_8c,*ppuVar3,(uint)ppuVar3[1]);
        local_ac = local_a0;
        local_a0[0] = 0;
        local_a8 = 0;
        local_a4 = 0x14;
        FUN_004015d0(&local_ac,DAT_0104b580,DAT_0104b584);
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar4 = FUN_009b5f90(&local_ac,0xffffffff,&local_8c);
        if (iVar4 != 0) {
          FUN_004036d0(&local_6c,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
        }
        local_4c = local_40;
        local_40[0] = 0;
        local_48 = 0;
        local_44 = 10;
        FUN_004036d0(&local_4c,*(wchar_t **)(iVar6 + 0x70),*(uint *)(iVar6 + 0x74));
        local_4._0_1_ = 3;
        FUN_004ff7a0(param_1,local_2c,&local_6c,(undefined4 *)0x0,&local_4c);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_004ffc40(param_1,local_b4,0xd,local_2c);
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac);
        }
        if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c);
        }
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00502550 @ 00502550 ////

void __fastcall FUN_00502550(void *param_1)

{
  void *this;
  uint uVar1;
  float *pfVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  float local_b8;
  void *local_b4;
  undefined2 *local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined2 local_a4 [10];
  undefined1 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84 [20];
  undefined2 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined2 local_64 [10];
  undefined1 *local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44 [20];
  undefined4 local_30;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cabebe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_0057e2d0(*(int *)((int)param_1 + 0xec));
  if (DAT_0104b60c <= uVar1) {
    iVar4 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x778);
    iVar5 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x774);
    local_b8 = -3.4028235e+38;
    local_b4 = (void *)0x0;
    if (iVar5 != iVar4) {
      do {
        this = *(void **)(iVar5 + 0x14);
        if (this != (void *)0x0) {
          pfVar2 = (float *)FUN_005ced20(this,&local_30,*(int *)((int)param_1 + 0xec));
          if (local_b8 < *pfVar2) {
            local_b8 = *pfVar2;
            local_b4 = this;
          }
        }
        iVar5 = iVar5 + 0x18;
      } while (iVar5 != iVar4);
      if ((local_b4 != (void *)0x0) && (*DAT_0104b634 <= local_b8)) {
        local_70 = local_64;
        local_64[0] = 0;
        local_6c = 0;
        local_68 = 10;
        local_4 = 0;
        ppuVar3 = &PTR_DAT_00e51db0;
        if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
          ppuVar3 = &PTR_DAT_00e51d90;
        }
        local_8c = 0;
        local_90 = local_84;
        local_84[0] = 0;
        local_88 = 0x14;
        FUN_004015d0(&local_90,*ppuVar3,(uint)ppuVar3[1]);
        local_50 = local_44;
        local_44[0] = 0;
        local_4c = 0;
        local_48 = 0x14;
        FUN_004015d0(&local_50,DAT_0104b610,DAT_0104b614);
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar4 = FUN_009b5f90(&local_50,0xffffffff,&local_90);
        if (iVar4 != 0) {
          FUN_004036d0(&local_70,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
        }
        local_b0 = local_a4;
        local_a4[0] = 0;
        local_ac = 0;
        local_a8 = 10;
        FUN_004036d0(&local_b0,*(wchar_t **)((int)local_b4 + 0x70),*(uint *)((int)local_b4 + 0x74));
        local_4._0_1_ = 3;
        FUN_004ff7a0(param_1,local_2c,&local_70,(undefined4 *)0x0,&local_b0);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_004ffc40(param_1,local_b8,0xf,local_2c);
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_b0);
        }
        if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
          _free(local_50);
        }
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if (10 < local_68) {
                    /* WARNING: Subroutine does not return */
          _free(local_70);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005027e0 @ 005027e0 ////

void __fastcall FUN_005027e0(void *param_1)

{
  void *this;
  uint uVar1;
  float *pfVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  float local_b8;
  void *local_b4;
  undefined2 *local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined2 local_a4 [10];
  undefined1 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84 [20];
  undefined2 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined2 local_64 [10];
  undefined1 *local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44 [20];
  undefined4 local_30;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cabefe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_0057e2d0(*(int *)((int)param_1 + 0xec));
  if (DAT_0104b654 <= uVar1) {
    iVar4 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x778);
    iVar5 = *(int *)(*(int *)((int)param_1 + 0xec) + 0x774);
    local_b8 = 3.4028235e+38;
    local_b4 = (void *)0x0;
    if (iVar5 != iVar4) {
      do {
        this = *(void **)(iVar5 + 0x14);
        if (this != (void *)0x0) {
          pfVar2 = (float *)FUN_005ced20(this,&local_30,*(int *)((int)param_1 + 0xec));
          if (*pfVar2 < local_b8) {
            local_b8 = *pfVar2;
            local_b4 = this;
          }
        }
        iVar5 = iVar5 + 0x18;
      } while (iVar5 != iVar4);
      if ((local_b4 != (void *)0x0) && (local_b8 < *DAT_0104b67c != (local_b8 == *DAT_0104b67c))) {
        local_70 = local_64;
        local_64[0] = 0;
        local_6c = 0;
        local_68 = 10;
        local_4 = 0;
        ppuVar3 = &PTR_DAT_00e51db0;
        if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
          ppuVar3 = &PTR_DAT_00e51d90;
        }
        local_8c = 0;
        local_90 = local_84;
        local_84[0] = 0;
        local_88 = 0x14;
        FUN_004015d0(&local_90,*ppuVar3,(uint)ppuVar3[1]);
        local_50 = local_44;
        local_44[0] = 0;
        local_4c = 0;
        local_48 = 0x14;
        FUN_004015d0(&local_50,DAT_0104b658,DAT_0104b65c);
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar4 = FUN_009b5f90(&local_50,0xffffffff,&local_90);
        if (iVar4 != 0) {
          FUN_004036d0(&local_70,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
        }
        local_b0 = local_a4;
        local_a4[0] = 0;
        local_ac = 0;
        local_a8 = 10;
        FUN_004036d0(&local_b0,*(wchar_t **)((int)local_b4 + 0x70),*(uint *)((int)local_b4 + 0x74));
        local_4._0_1_ = 3;
        FUN_004ff7a0(param_1,local_2c,&local_70,(undefined4 *)0x0,&local_b0);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_004ffc40(param_1,local_b8,0x10,local_2c);
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_b0);
        }
        if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
          _free(local_50);
        }
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if (10 < local_68) {
                    /* WARNING: Subroutine does not return */
          _free(local_70);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00502a70 @ 00502a70 ////

void __fastcall FUN_00502a70(void *param_1)

{
  bool bVar1;
  void *pvVar2;
  float *pfVar3;
  undefined **ppuVar4;
  int iVar5;
  float fStack_90;
  undefined2 *puStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined2 auStack_80 [10];
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined1 auStack_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabf43;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = (void *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x27c))();
  if (pvVar2 == (void *)0x0) {
    ExceptionList = pvStack_c;
    return;
  }
  pfVar3 = (float *)CProjectCastEffect_GetEffectiveLowerMoodThreshold(pvVar2,&fStack_90);
  fStack_90 = *pfVar3;
  puStack_8c = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0;
  uStack_84 = 10;
  uStack_4 = 0;
  ppuVar4 = &PTR_DAT_00e51db0;
  if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
    ppuVar4 = &PTR_DAT_00e51d90;
  }
  puStack_6c = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0;
  uStack_64 = 0x14;
  FUN_004015d0(&puStack_6c,*ppuVar4,(uint)ppuVar4[1]);
  uStack_4._0_1_ = 1;
  if (fStack_90 < *DAT_0104b70c == (fStack_90 == *DAT_0104b70c)) {
    if (fStack_90 < DAT_0104b70c[1]) goto LAB_00502c99;
    FUN_0047aee0(apvStack_4c,(undefined4 *)&DAT_0104b6e8,&PTR_DAT_00e51e50);
    uStack_4 = CONCAT31(uStack_4._1_3_,4);
    iVar5 = FUN_009b5f90(apvStack_4c,0xffffffff,&puStack_6c);
    if (iVar5 != 0) {
      FUN_004036d0(&puStack_8c,*(wchar_t **)(iVar5 + 0x40),*(uint *)(iVar5 + 0x44));
    }
    FUN_004ff7a0(param_1,apvStack_2c,&puStack_8c,(undefined4 *)0x0,(undefined4 *)0x0);
    uStack_4._0_1_ = 5;
    FUN_004ffc40(param_1,1.0 - fStack_90,0x12,apvStack_2c);
    pvVar2 = apvStack_4c[0];
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
  }
  else {
    FUN_0047aee0(apvStack_2c,(undefined4 *)&DAT_0104b6e8,&PTR_DAT_00e51e30);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    iVar5 = FUN_009b5f90(apvStack_2c,0xffffffff,&puStack_6c);
    if (iVar5 != 0) {
      FUN_004036d0(&puStack_8c,*(wchar_t **)(iVar5 + 0x40),*(uint *)(iVar5 + 0x44));
    }
    FUN_004ff7a0(param_1,apvStack_4c,&puStack_8c,(undefined4 *)0x0,(undefined4 *)0x0);
    uStack_4._0_1_ = 3;
    FUN_004ffc40(param_1,1.0 - fStack_90,0x12,apvStack_4c);
    bVar1 = 10 < uStack_44;
    pvVar2 = apvStack_2c[0];
    uStack_44 = uStack_24;
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
  }
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
LAB_00502c99:
  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_6c);
  }
  if (uStack_84 < 0xb) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_8c);
}


//// FUNCTION FUN_00502ce0 @ 00502ce0 ////

void __fastcall FUN_00502ce0(void *param_1)

{
  bool bVar1;
  void *pvVar2;
  float *pfVar3;
  undefined **ppuVar4;
  int iVar5;
  float fStack_90;
  undefined2 *puStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined2 auStack_80 [10];
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined1 auStack_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabf83;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = (void *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x27c))();
  if (pvVar2 == (void *)0x0) {
    ExceptionList = pvStack_c;
    return;
  }
  pfVar3 = (float *)CProjectCastEffect_GetEffectiveUpperMoodThreshold(pvVar2,&fStack_90);
  fStack_90 = *pfVar3;
  puStack_8c = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0;
  uStack_84 = 10;
  uStack_4 = 0;
  ppuVar4 = &PTR_DAT_00e51db0;
  if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
    ppuVar4 = &PTR_DAT_00e51d90;
  }
  puStack_6c = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0;
  uStack_64 = 0x14;
  FUN_004015d0(&puStack_6c,*ppuVar4,(uint)ppuVar4[1]);
  uStack_4._0_1_ = 1;
  if (fStack_90 < *DAT_0104b754 == (fStack_90 == *DAT_0104b754)) {
    if (fStack_90 < DAT_0104b754[1]) goto LAB_00502f09;
    FUN_0047aee0(apvStack_4c,(undefined4 *)&DAT_0104b730,&PTR_DAT_00e51e50);
    uStack_4 = CONCAT31(uStack_4._1_3_,4);
    iVar5 = FUN_009b5f90(apvStack_4c,0xffffffff,&puStack_6c);
    if (iVar5 != 0) {
      FUN_004036d0(&puStack_8c,*(wchar_t **)(iVar5 + 0x40),*(uint *)(iVar5 + 0x44));
    }
    FUN_004ff7a0(param_1,apvStack_2c,&puStack_8c,(undefined4 *)0x0,(undefined4 *)0x0);
    uStack_4._0_1_ = 5;
    FUN_004ffc40(param_1,1.0 - fStack_90,0x13,apvStack_2c);
    pvVar2 = apvStack_4c[0];
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
  }
  else {
    FUN_0047aee0(apvStack_2c,(undefined4 *)&DAT_0104b730,&PTR_DAT_00e51e30);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    iVar5 = FUN_009b5f90(apvStack_2c,0xffffffff,&puStack_6c);
    if (iVar5 != 0) {
      FUN_004036d0(&puStack_8c,*(wchar_t **)(iVar5 + 0x40),*(uint *)(iVar5 + 0x44));
    }
    FUN_004ff7a0(param_1,apvStack_4c,&puStack_8c,(undefined4 *)0x0,(undefined4 *)0x0);
    uStack_4._0_1_ = 3;
    FUN_004ffc40(param_1,1.0 - fStack_90,0x13,apvStack_4c);
    bVar1 = 10 < uStack_44;
    pvVar2 = apvStack_2c[0];
    uStack_44 = uStack_24;
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
  }
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
LAB_00502f09:
  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_6c);
  }
  if (uStack_84 < 0xb) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_8c);
}


//// FUNCTION FUN_00502f50 @ 00502f50 ////

void __fastcall FUN_00502f50(void *param_1)

{
  int iVar1;
  void *this;
  float *pfVar2;
  undefined **ppuVar3;
  float fStack_90;
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined1 auStack_80 [20];
  undefined2 *puStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined2 auStack_60 [10];
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabfb3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(**(int **)((int)param_1 + 0xec) + 0x27c))();
  this = (void *)FUN_00473120(iVar1);
  if (this != (void *)0x0) {
    pfVar2 = (float *)FUN_004732e0(this,&fStack_90);
    fStack_90 = *pfVar2;
    if (fStack_90 < *DAT_0104b7e4 != (fStack_90 == *DAT_0104b7e4)) {
      puStack_6c = auStack_60;
      auStack_60[0] = 0;
      uStack_68 = 0;
      uStack_64 = 10;
      uStack_4 = 0;
      ppuVar3 = &PTR_DAT_00e51db0;
      if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
        ppuVar3 = &PTR_DAT_00e51d90;
      }
      puStack_8c = auStack_80;
      auStack_80[0] = 0;
      uStack_88 = 0;
      uStack_84 = 0x14;
      FUN_004015d0(&puStack_8c,*ppuVar3,(uint)ppuVar3[1]);
      puStack_4c = auStack_40;
      auStack_40[0] = 0;
      uStack_48 = 0;
      uStack_44 = 0x14;
      FUN_004015d0(&puStack_4c,DAT_0104b7c0,DAT_0104b7c4);
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      iVar1 = FUN_009b5f90(&puStack_4c,0xffffffff,&puStack_8c);
      if (iVar1 != 0) {
        FUN_004036d0(&puStack_6c,*(wchar_t **)(iVar1 + 0x40),*(uint *)(iVar1 + 0x44));
      }
      FUN_004ff7a0(param_1,apvStack_2c,&puStack_6c,(undefined4 *)0x0,(undefined4 *)0x0);
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      FUN_004ffc40(param_1,fStack_90,0x15,apvStack_2c);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_4c);
      }
      if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_8c);
      }
      if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_6c);
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00503110 @ 00503110 ////

void __fastcall FUN_00503110(void *param_1)

{
  int iVar1;
  void *this;
  float *pfVar2;
  undefined **ppuVar3;
  float fStack_90;
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined1 auStack_80 [20];
  undefined2 *puStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined2 auStack_60 [10];
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cabfe3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(**(int **)((int)param_1 + 0xec) + 0x27c))();
  this = (void *)FUN_00473120(iVar1);
  if (this != (void *)0x0) {
    pfVar2 = (float *)FUN_00473370(this,&fStack_90);
    fStack_90 = *pfVar2;
    if (fStack_90 < *DAT_0104b874 != (fStack_90 == *DAT_0104b874)) {
      puStack_6c = auStack_60;
      auStack_60[0] = 0;
      uStack_68 = 0;
      uStack_64 = 10;
      uStack_4 = 0;
      ppuVar3 = &PTR_DAT_00e51db0;
      if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
        ppuVar3 = &PTR_DAT_00e51d90;
      }
      puStack_8c = auStack_80;
      auStack_80[0] = 0;
      uStack_88 = 0;
      uStack_84 = 0x14;
      FUN_004015d0(&puStack_8c,*ppuVar3,(uint)ppuVar3[1]);
      puStack_4c = auStack_40;
      auStack_40[0] = 0;
      uStack_48 = 0;
      uStack_44 = 0x14;
      FUN_004015d0(&puStack_4c,DAT_0104b850,DAT_0104b854);
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      iVar1 = FUN_009b5f90(&puStack_4c,0xffffffff,&puStack_8c);
      if (iVar1 != 0) {
        FUN_004036d0(&puStack_6c,*(wchar_t **)(iVar1 + 0x40),*(uint *)(iVar1 + 0x44));
      }
      FUN_004ff7a0(param_1,apvStack_2c,&puStack_6c,(undefined4 *)0x0,(undefined4 *)0x0);
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      FUN_004ffc40(param_1,fStack_90,0x17,apvStack_2c);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_4c);
      }
      if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_8c);
      }
      if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_6c);
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005032d0 @ 005032d0 ////

void __fastcall FUN_005032d0(void *param_1)

{
  bool bVar1;
  void *pvVar2;
  float *pfVar3;
  undefined **ppuVar4;
  int iVar5;
  float fStack_90;
  undefined2 *puStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined2 auStack_80 [10];
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined1 auStack_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cac023;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = (void *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x294))();
  if (pvVar2 == (void *)0x0) {
    ExceptionList = pvStack_c;
    return;
  }
  pfVar3 = (float *)FUN_00407290(pvVar2,&fStack_90,0);
  fStack_90 = *pfVar3;
  puStack_8c = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0;
  uStack_84 = 10;
  uStack_4 = 0;
  ppuVar4 = &PTR_DAT_00e51db0;
  if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
    ppuVar4 = &PTR_DAT_00e51d90;
  }
  puStack_6c = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0;
  uStack_64 = 0x14;
  FUN_004015d0(&puStack_6c,*ppuVar4,(uint)ppuVar4[1]);
  uStack_4._0_1_ = 1;
  if (fStack_90 < *DAT_0104b904 == (fStack_90 == *DAT_0104b904)) {
    if (fStack_90 < DAT_0104b904[1]) goto LAB_005034e7;
    FUN_0047aee0(apvStack_4c,(undefined4 *)&DAT_0104b8e0,&PTR_DAT_00e51e50);
    uStack_4 = CONCAT31(uStack_4._1_3_,4);
    iVar5 = FUN_009b5f90(apvStack_4c,0xffffffff,&puStack_6c);
    if (iVar5 != 0) {
      FUN_004036d0(&puStack_8c,*(wchar_t **)(iVar5 + 0x40),*(uint *)(iVar5 + 0x44));
    }
    FUN_004ff7a0(param_1,apvStack_2c,&puStack_8c,(undefined4 *)0x0,(undefined4 *)0x0);
    uStack_4._0_1_ = 5;
    FUN_004ffc40(param_1,fStack_90,0x19,apvStack_2c);
    pvVar2 = apvStack_4c[0];
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
  }
  else {
    FUN_0047aee0(apvStack_2c,(undefined4 *)&DAT_0104b8e0,&PTR_DAT_00e51e30);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    iVar5 = FUN_009b5f90(apvStack_2c,0xffffffff,&puStack_6c);
    if (iVar5 != 0) {
      FUN_004036d0(&puStack_8c,*(wchar_t **)(iVar5 + 0x40),*(uint *)(iVar5 + 0x44));
    }
    FUN_004ff7a0(param_1,apvStack_4c,&puStack_8c,(undefined4 *)0x0,(undefined4 *)0x0);
    uStack_4._0_1_ = 3;
    FUN_004ffc40(param_1,fStack_90,0x19,apvStack_4c);
    bVar1 = 10 < uStack_44;
    pvVar2 = apvStack_2c[0];
    uStack_44 = uStack_24;
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
  }
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
LAB_005034e7:
  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_6c);
  }
  if (uStack_84 < 0xb) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_8c);
}


//// FUNCTION FUN_00503530 @ 00503530 ////

void __fastcall FUN_00503530(void *param_1)

{
  bool bVar1;
  void *pvVar2;
  float *pfVar3;
  undefined **ppuVar4;
  int iVar5;
  float fStack_90;
  undefined2 *puStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined2 auStack_80 [10];
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined1 auStack_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cac063;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = (void *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x294))();
  if (pvVar2 == (void *)0x0) {
    ExceptionList = pvStack_c;
    return;
  }
  pfVar3 = (float *)FUN_00407290(pvVar2,&fStack_90,1);
  fStack_90 = *pfVar3;
  puStack_8c = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0;
  uStack_84 = 10;
  uStack_4 = 0;
  ppuVar4 = &PTR_DAT_00e51db0;
  if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
    ppuVar4 = &PTR_DAT_00e51d90;
  }
  puStack_6c = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0;
  uStack_64 = 0x14;
  FUN_004015d0(&puStack_6c,*ppuVar4,(uint)ppuVar4[1]);
  uStack_4._0_1_ = 1;
  if (fStack_90 < *DAT_0104b994 == (fStack_90 == *DAT_0104b994)) {
    if (fStack_90 < DAT_0104b994[1]) goto LAB_00503748;
    FUN_0047aee0(apvStack_4c,(undefined4 *)&DAT_0104b970,&PTR_DAT_00e51e50);
    uStack_4 = CONCAT31(uStack_4._1_3_,4);
    iVar5 = FUN_009b5f90(apvStack_4c,0xffffffff,&puStack_6c);
    if (iVar5 != 0) {
      FUN_004036d0(&puStack_8c,*(wchar_t **)(iVar5 + 0x40),*(uint *)(iVar5 + 0x44));
    }
    FUN_004ff7a0(param_1,apvStack_2c,&puStack_8c,(undefined4 *)0x0,(undefined4 *)0x0);
    uStack_4._0_1_ = 5;
    FUN_004ffc40(param_1,fStack_90,0x1b,apvStack_2c);
    pvVar2 = apvStack_4c[0];
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
  }
  else {
    FUN_0047aee0(apvStack_2c,(undefined4 *)&DAT_0104b970,&PTR_DAT_00e51e30);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    iVar5 = FUN_009b5f90(apvStack_2c,0xffffffff,&puStack_6c);
    if (iVar5 != 0) {
      FUN_004036d0(&puStack_8c,*(wchar_t **)(iVar5 + 0x40),*(uint *)(iVar5 + 0x44));
    }
    FUN_004ff7a0(param_1,apvStack_4c,&puStack_8c,(undefined4 *)0x0,(undefined4 *)0x0);
    uStack_4._0_1_ = 3;
    FUN_004ffc40(param_1,fStack_90,0x1b,apvStack_4c);
    bVar1 = 10 < uStack_44;
    pvVar2 = apvStack_2c[0];
    uStack_44 = uStack_24;
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
  }
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
LAB_00503748:
  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_6c);
  }
  if (uStack_84 < 0xb) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_8c);
}


//// FUNCTION FUN_00503790 @ 00503790 ////

void __fastcall FUN_00503790(void *param_1)

{
  uint _Count;
  char *_Source;
  float fVar1;
  void **ppvVar2;
  void *this;
  float *pfVar3;
  undefined4 *puVar4;
  char **ppcVar5;
  float local_7c;
  int *local_78;
  int *local_74;
  undefined4 local_70;
  char *local_6c;
  uint local_68;
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
  puStack_8 = &LAB_00cac088;
  local_c = ExceptionList;
  local_78 = (int *)*DAT_00f88660;
  local_7c = 0.0;
  local_74 = DAT_00f88660;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (local_78 != DAT_00f88660) {
    do {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      _Count = local_78[4];
      _Source = (char *)local_78[3];
      if (0x13 < _Count) {
        local_64 = _Count + 0x20 & 0xffffffe0;
        local_6c = _malloc(local_64);
      }
      _strncpy(local_6c,_Source,_Count);
      local_6c[_Count] = '\0';
      ppcVar5 = &local_6c;
      puVar4 = &local_70;
      local_4 = 0;
      local_68 = _Count;
      this = (void *)FUN_00577370(*(int *)((int)param_1 + 0xec));
      pfVar3 = (float *)FUN_00441750(this,puVar4,ppcVar5);
      local_7c = *pfVar3 + local_7c;
      local_4 = 0xffffffff;
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      FUN_00449dd0((int *)&local_78);
      ppvVar2 = ExceptionList;
    } while (local_78 != local_74);
  }
  ExceptionList = ppvVar2;
  fVar1 = (float)DAT_00f88664;
  if (DAT_00f88664 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_004ffd60(param_1,local_2c,local_7c / fVar1,0x1c);
  local_4 = 1;
  FUN_004ff7a0(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004ffc40(param_1,local_7c / fVar1,0x1c,local_4c);
  if (local_44 < 0xb) {
    if (local_24 < 0xb) {
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c[0]);
}


//// FUNCTION FUN_00503930 @ 00503930 ////

void __fastcall FUN_00503930(void *param_1)

{
  float fVar1;
  void *this;
  float *pfVar2;
  undefined4 *puVar3;
  char **ppcVar4;
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
  puStack_8 = &LAB_00cac0b8;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0xec) != 0) {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_4c,"Stunts",6);
    local_48 = 6;
    local_4c[6] = '\0';
    ppcVar4 = &local_4c;
    puVar3 = &local_50;
    local_4 = 0;
    this = (void *)FUN_00577370(*(int *)((int)param_1 + 0xec));
    pfVar2 = (float *)FUN_00441750(this,puVar3,ppcVar4);
    fVar1 = *pfVar2;
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (*DAT_0104bbd4 < fVar1) {
      FUN_004ff630(param_1,local_2c,0x23);
      local_4 = 1;
      FUN_004ff7a0(param_1,&local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004ffc40(param_1,fVar1,0x23,&local_4c);
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


//// FUNCTION FUN_00503a70 @ 00503a70 ////

void __fastcall FUN_00503a70(void *param_1)

{
  float *pfVar1;
  float local_50;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cac0e0;
  local_c = ExceptionList;
  if (*(int **)((int)param_1 + 0xec) != (int *)0x0) {
    ExceptionList = &local_c;
    pfVar1 = (float *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x1e4))(&local_50);
    local_50 = *pfVar1;
    if (local_50 < *DAT_0104bc1c) {
      FUN_004ff630(param_1,apvStack_2c,0x24);
      uStack_4 = 0;
      FUN_004ff7a0(param_1,apvStack_4c,apvStack_2c,(undefined4 *)0x0,(undefined4 *)0x0);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FUN_004ffc40(param_1,local_50,0x24,apvStack_4c);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00503b40 @ 00503b40 ////

float10 FUN_00503b40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  ulonglong uVar5;
  
  uVar5 = FUN_0043b560();
  iVar1 = (int)uVar5;
  if (iVar1 <= *DAT_0104b1b0) {
    return (float10)(float)DAT_0104b1b0[1];
  }
  if (iVar1 < *(int *)(DAT_0104b1b4 + -8)) {
    fVar4 = (float10)1.0;
    iVar2 = 0;
    iVar3 = (DAT_0104b1b4 - (int)DAT_0104b1b0 >> 3) + -1;
    if (0 < iVar3) {
      while ((iVar1 < DAT_0104b1b0[iVar2 * 2] || (DAT_0104b1b0[iVar2 * 2 + 2] < iVar1))) {
        iVar2 = iVar2 + 1;
        if (iVar3 <= iVar2) {
          return fVar4;
        }
      }
      fVar4 = ((float10)(float)DAT_0104b1b0[iVar2 * 2 + 3] -
              (float10)(float)DAT_0104b1b0[iVar2 * 2 + 1]) *
              ((float10)(iVar1 - DAT_0104b1b0[iVar2 * 2]) /
              (float10)(DAT_0104b1b0[iVar2 * 2 + 2] - DAT_0104b1b0[iVar2 * 2])) +
              (float10)(float)DAT_0104b1b0[iVar2 * 2 + 1];
    }
    return fVar4;
  }
  return (float10)*(float *)(DAT_0104b1b4 + -4);
}


//// FUNCTION FUN_00503bd0 @ 00503bd0 ////

void __fastcall FUN_00503bd0(void *param_1)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  undefined4 local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac100;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar2 = (float *)FUN_00585ff0(*(void **)((int)param_1 + 0xec),&local_50);
  fVar1 = *pfVar2;
  fVar3 = FUN_00503b40();
  FUN_004ffd60(param_1,local_2c,(float)(fVar3 * (float10)fVar1),0);
  local_4 = 0;
  FUN_004ff7a0(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004ffc40(param_1,(float)(fVar3 * (float10)fVar1),0,local_4c);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00503ca0 @ 00503ca0 ////

void __fastcall FUN_00503ca0(void *param_1)

{
  float fVar1;
  uint uVar2;
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
  puStack_8 = &LAB_00cac120;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_0057e2d0(*(int *)((int)param_1 + 0xec));
  if (DAT_0104b4ec <= uVar2) {
    pfVar3 = (float *)FUN_00590cb0(*(void **)((int)param_1 + 0xec),&local_50);
    fVar1 = *pfVar3;
    fVar4 = FUN_00503b40();
    FUN_004ffd60(param_1,local_2c,(float)(fVar4 * (float10)fVar1),0xb);
    local_4 = 0;
    FUN_004ff7a0(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004ffc40(param_1,(float)(fVar4 * (float10)fVar1),0xb,local_4c);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00503d80 @ 00503d80 ////

void __fastcall FUN_00503d80(void *param_1)

{
  float fVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  uint *_Source;
  void *this;
  float *pfVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined4 *puVar8;
  uint **ppuVar9;
  float local_dc;
  uint *local_d8;
  int *local_d4;
  int *local_d0;
  uint local_cc [5];
  int *local_b8;
  char *local_b4;
  uint local_b0;
  uint local_ac;
  char local_a8 [20];
  undefined4 local_94;
  int *local_90;
  char *local_8c;
  undefined *local_88;
  uint local_84;
  char local_80 [20];
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac174;
  local_c = ExceptionList;
  local_b4 = local_a8;
  local_dc = -3.4028235e+38;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_b4,PTR_DAT_00e51dd0,DAT_00e51dd4);
  local_b8 = (int *)*DAT_00f88660;
  local_4 = 0;
  local_90 = DAT_00f88660;
  if (local_b8 != DAT_00f88660) {
    do {
      local_d8 = local_cc;
      local_cc[0] = local_cc[0] & 0xffffff00;
      local_d4 = (int *)0x0;
      local_d0 = (int *)0x14;
      uVar2 = local_b8[4];
      pcVar3 = (char *)local_b8[3];
      if (0x13 < uVar2) {
        local_d0 = (int *)(uVar2 + 0x20 & 0xffffffe0);
        local_d8 = _malloc((size_t)local_d0);
      }
      _strncpy((char *)local_d8,pcVar3,uVar2);
      *(char *)((int)local_d8 + uVar2) = '\0';
      ppuVar9 = &local_d8;
      puVar8 = &local_94;
      local_4 = CONCAT31(local_4._1_3_,1);
      local_d4 = (int *)uVar2;
      this = (void *)FUN_00577370(*(int *)((int)param_1 + 0xec));
      pfVar5 = (float *)FUN_00441750(this,puVar8,ppuVar9);
      piVar4 = local_d4;
      _Source = local_d8;
      fVar1 = *pfVar5;
      if (local_dc < fVar1) {
        if (local_ac <= local_d4) {
          if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
            _free(local_b4);
          }
          local_ac = (int)local_d4 + 0x20U & 0xffffffe0;
          local_b4 = _malloc(local_ac);
        }
        _strncpy(local_b4,(char *)_Source,(size_t)piVar4);
        local_b0 = (uint)piVar4;
        local_b4[(int)piVar4] = '\0';
        local_dc = fVar1;
      }
      local_4 = local_4 & 0xffffff00;
      if (0x14 < local_d0) {
                    /* WARNING: Subroutine does not return */
        _free(local_d8);
      }
      FUN_00449dd0((int *)&local_b8);
    } while (local_b8 != local_90);
  }
  if (*DAT_0104ba24 <= local_dc) {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_d4 = (int *)0x0;
    local_d0 = (int *)0x0;
    local_cc[0] = 0;
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_00439fd0(&local_d8,(int *)0x0,1,&local_b4);
    ppuVar7 = &PTR_DAT_00e51d90;
    if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
      ppuVar7 = &PTR_DAT_00e51db0;
    }
    puVar6 = ppuVar7[1];
    pcVar3 = *ppuVar7;
    local_8c = local_80;
    local_80[0] = '\0';
    local_88 = (undefined *)0x0;
    local_84 = 0x14;
    if ((undefined *)0x13 < puVar6) {
      local_84 = (uint)(puVar6 + 0x20) & 0xffffffe0;
      local_8c = _malloc(local_84);
    }
    _strncpy(local_8c,pcVar3,(size_t)puVar6);
    piVar4 = local_d0;
    local_8c[(int)puVar6] = '\0';
    local_4 = CONCAT31(local_4._1_3_,4);
    local_88 = puVar6;
    if ((local_d4 == (int *)0x0) ||
       ((uint)((int)(local_cc[0] - (int)local_d4) >> 5) <=
        (uint)((int)local_d0 - (int)local_d4 >> 5))) {
      FUN_00439fd0(&local_d8,local_d0,1,&local_8c);
    }
    else {
      FUN_00439ea0(local_d0,1,&local_8c);
      local_d0 = piVar4 + 8;
    }
    uVar2 = DAT_0104ba04;
    pcVar3 = DAT_0104ba00;
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    if (0x13 < DAT_0104ba04) {
      local_64 = DAT_0104ba04 + 0x20 & 0xffffffe0;
      local_6c = _malloc(local_64);
    }
    _strncpy(local_6c,pcVar3,uVar2);
    local_68 = uVar2;
    local_6c[uVar2] = '\0';
    local_4 = CONCAT31(local_4._1_3_,5);
    puVar6 = FUN_009b7330(&local_6c,0xffffffff,(int)&local_d8);
    if (puVar6 != (undefined *)0x0) {
      FUN_004036d0(&local_4c,*(wchar_t **)(puVar6 + 0x40),*(uint *)(puVar6 + 0x44));
    }
    FUN_004ff7a0(param_1,local_2c,&local_4c,(undefined4 *)0x0,(undefined4 *)0x0);
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_004ffc40(param_1,local_dc,0x1d,local_2c);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    piVar4 = local_d4;
    if (local_d4 != (int *)0x0) {
      while( true ) {
        if (piVar4 == local_d0) {
                    /* WARNING: Subroutine does not return */
          _free(local_d4);
        }
        if (0x14 < (uint)piVar4[2]) break;
        piVar4 = piVar4 + 8;
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar4);
    }
    local_d4 = (int *)0x0;
    local_d0 = (int *)0x0;
    local_cc[0] = 0;
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  if (local_ac < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_b4);
}


//// FUNCTION FUN_00504200 @ 00504200 ////

void __fastcall FUN_00504200(void *param_1)

{
  float fVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  uint *_Source;
  void *this;
  float *pfVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined4 *puVar8;
  uint **ppuVar9;
  float local_dc;
  uint *local_d8;
  int *local_d4;
  int *local_d0;
  uint local_cc [5];
  int *local_b8;
  char *local_b4;
  uint local_b0;
  uint local_ac;
  char local_a8 [20];
  undefined4 local_94;
  int *local_90;
  char *local_8c;
  undefined *local_88;
  uint local_84;
  char local_80 [20];
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac1c4;
  local_c = ExceptionList;
  local_b4 = local_a8;
  local_dc = 3.4028235e+38;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_b4,PTR_DAT_00e51dd0,DAT_00e51dd4);
  local_b8 = (int *)*DAT_00f88660;
  local_4 = 0;
  local_90 = DAT_00f88660;
  if (local_b8 != DAT_00f88660) {
    do {
      local_d8 = local_cc;
      local_cc[0] = local_cc[0] & 0xffffff00;
      local_d4 = (int *)0x0;
      local_d0 = (int *)0x14;
      uVar2 = local_b8[4];
      pcVar3 = (char *)local_b8[3];
      if (0x13 < uVar2) {
        local_d0 = (int *)(uVar2 + 0x20 & 0xffffffe0);
        local_d8 = _malloc((size_t)local_d0);
      }
      _strncpy((char *)local_d8,pcVar3,uVar2);
      *(char *)((int)local_d8 + uVar2) = '\0';
      ppuVar9 = &local_d8;
      puVar8 = &local_94;
      local_4 = CONCAT31(local_4._1_3_,1);
      local_d4 = (int *)uVar2;
      this = (void *)FUN_00577370(*(int *)((int)param_1 + 0xec));
      pfVar5 = (float *)FUN_00441750(this,puVar8,ppuVar9);
      piVar4 = local_d4;
      _Source = local_d8;
      fVar1 = *pfVar5;
      if (fVar1 < local_dc) {
        if (local_ac <= local_d4) {
          if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
            _free(local_b4);
          }
          local_ac = (int)local_d4 + 0x20U & 0xffffffe0;
          local_b4 = _malloc(local_ac);
        }
        _strncpy(local_b4,(char *)_Source,(size_t)piVar4);
        local_b0 = (uint)piVar4;
        local_b4[(int)piVar4] = '\0';
        local_dc = fVar1;
      }
      local_4 = local_4 & 0xffffff00;
      if (0x14 < local_d0) {
                    /* WARNING: Subroutine does not return */
        _free(local_d8);
      }
      FUN_00449dd0((int *)&local_b8);
    } while (local_b8 != local_90);
  }
  if (local_dc < *DAT_0104ba6c != (local_dc == *DAT_0104ba6c)) {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_d4 = (int *)0x0;
    local_d0 = (int *)0x0;
    local_cc[0] = 0;
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_00439fd0(&local_d8,(int *)0x0,1,&local_b4);
    ppuVar7 = &PTR_DAT_00e51d90;
    if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
      ppuVar7 = &PTR_DAT_00e51db0;
    }
    puVar6 = ppuVar7[1];
    pcVar3 = *ppuVar7;
    local_8c = local_80;
    local_80[0] = '\0';
    local_88 = (undefined *)0x0;
    local_84 = 0x14;
    if ((undefined *)0x13 < puVar6) {
      local_84 = (uint)(puVar6 + 0x20) & 0xffffffe0;
      local_8c = _malloc(local_84);
    }
    _strncpy(local_8c,pcVar3,(size_t)puVar6);
    piVar4 = local_d0;
    local_8c[(int)puVar6] = '\0';
    local_4 = CONCAT31(local_4._1_3_,4);
    local_88 = puVar6;
    if ((local_d4 == (int *)0x0) ||
       ((uint)((int)(local_cc[0] - (int)local_d4) >> 5) <=
        (uint)((int)local_d0 - (int)local_d4 >> 5))) {
      FUN_00439fd0(&local_d8,local_d0,1,&local_8c);
    }
    else {
      FUN_00439ea0(local_d0,1,&local_8c);
      local_d0 = piVar4 + 8;
    }
    uVar2 = DAT_0104ba4c;
    pcVar3 = DAT_0104ba48;
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    if (0x13 < DAT_0104ba4c) {
      local_64 = DAT_0104ba4c + 0x20 & 0xffffffe0;
      local_6c = _malloc(local_64);
    }
    _strncpy(local_6c,pcVar3,uVar2);
    local_68 = uVar2;
    local_6c[uVar2] = '\0';
    local_4 = CONCAT31(local_4._1_3_,5);
    puVar6 = FUN_009b7330(&local_6c,0xffffffff,(int)&local_d8);
    if (puVar6 != (undefined *)0x0) {
      FUN_004036d0(&local_4c,*(wchar_t **)(puVar6 + 0x40),*(uint *)(puVar6 + 0x44));
    }
    FUN_004ff7a0(param_1,local_2c,&local_4c,(undefined4 *)0x0,(undefined4 *)0x0);
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_004ffc40(param_1,local_dc,0x1e,local_2c);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    piVar4 = local_d4;
    if (local_d4 != (int *)0x0) {
      while( true ) {
        if (piVar4 == local_d0) {
                    /* WARNING: Subroutine does not return */
          _free(local_d4);
        }
        if (0x14 < (uint)piVar4[2]) break;
        piVar4 = piVar4 + 8;
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar4);
    }
    local_d4 = (int *)0x0;
    local_d0 = (int *)0x0;
    local_cc[0] = 0;
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  if (local_ac < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_b4);
}


//// FUNCTION FUN_00504680 @ 00504680 ////

void __fastcall FUN_00504680(void *param_1)

{
  int *piVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  int iVar6;
  float local_ac;
  undefined1 local_a8 [4];
  undefined4 *local_a4;
  undefined4 *local_a0;
  undefined4 local_9c;
  int *local_98;
  int *local_94;
  undefined1 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84 [20];
  undefined1 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined1 local_64 [20];
  undefined2 *local_50;
  undefined4 local_4c;
  uint local_48;
  undefined2 local_44 [10];
  undefined1 local_30 [4];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac1fe;
  local_c = ExceptionList;
  if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x814) != 3) {
    local_98 = (int *)*DAT_00f88660;
    iVar6 = 0;
    local_ac = -3.4028235e+38;
    local_94 = DAT_00f88660;
    ExceptionList = &local_c;
    if (local_98 != DAT_00f88660) {
      do {
        piVar1 = local_98;
        pfVar2 = (float *)FUN_005882e0(*(void **)((int)param_1 + 0xec),(float)local_30,
                                       (void *)local_98[0xb]);
        if (local_ac < *pfVar2) {
          iVar6 = piVar1[0xb];
          local_ac = *pfVar2;
        }
        FUN_00449dd0((int *)&local_98);
      } while (local_98 != local_94);
      if ((iVar6 != 0) && (*DAT_0104bb8c < local_ac)) {
        local_50 = local_44;
        local_44[0] = 0;
        local_4c = 0;
        local_48 = 10;
        local_a4 = (undefined4 *)0x0;
        local_a0 = (undefined4 *)0x0;
        local_9c = 0;
        local_4._0_1_ = 1;
        local_4._1_3_ = 0;
        puVar3 = (undefined4 *)FUN_00449b40(iVar6);
        FUN_0043a2d0(local_a8,puVar3);
        ppuVar4 = &PTR_DAT_00e51d90;
        if (*(int *)(*(int *)((int)param_1 + 0xec) + 0x4a0) != 0) {
          ppuVar4 = &PTR_DAT_00e51db0;
        }
        local_70 = local_64;
        local_64[0] = 0;
        local_6c = 0;
        local_68 = 0x14;
        FUN_004015d0(&local_70,*ppuVar4,(uint)ppuVar4[1]);
        local_4._0_1_ = 2;
        FUN_0043a2d0(local_a8,&local_70);
        local_90 = local_84;
        local_84[0] = 0;
        local_8c = 0;
        local_88 = 0x14;
        FUN_004015d0(&local_90,DAT_0104bb68,DAT_0104bb6c);
        local_4 = CONCAT31(local_4._1_3_,3);
        puVar5 = FUN_009b7330(&local_90,0xffffffff,(int)local_a8);
        if (puVar5 != (undefined *)0x0) {
          FUN_004036d0(&local_50,*(wchar_t **)(puVar5 + 0x40),*(uint *)(puVar5 + 0x44));
        }
        FUN_004ff7a0(param_1,local_2c,&local_50,(undefined4 *)0x0,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_004ffc40(param_1,local_ac,0x22,local_2c);
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
          _free(local_70);
        }
        if (local_a4 != (undefined4 *)0x0) {
          FUN_00405fe0(local_a4,local_a0);
                    /* WARNING: Subroutine does not return */
          _free(local_a4);
        }
        local_a4 = (undefined4 *)0x0;
        local_a0 = (undefined4 *)0x0;
        local_9c = 0;
        if (10 < local_48) {
                    /* WARNING: Subroutine does not return */
          _free(local_50);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00504910 @ 00504910 ////

void __cdecl FUN_00504910(void *param_1,undefined4 *param_2,int param_3)

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
  puStack_8 = &LAB_00cac25f;
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
                *(undefined4 *)(&DAT_0104b1c0 + iVar3) = uVar2;
                fVar4 = FUN_00567d60(&local_6c);
                *(float *)(&DAT_0104b1c4 + iVar3) = (float)fVar4;
                fVar4 = FUN_00567d60(&local_ac);
                *(float *)(&DAT_0104b1c8 + iVar3) = (float)fVar4;
                fVar4 = FUN_00567d60(&local_cc);
                *(float *)(&DAT_0104b1cc + iVar3) = (float)fVar4;
                fVar4 = FUN_00567d60(&local_8c);
                *(float *)(&DAT_0104b1d0 + iVar3) = (float)fVar4;
                uVar2 = FUN_00567d80(&local_4c);
                *(undefined4 *)(&DAT_0104b1d4 + iVar3) = uVar2;
                FUN_00401e30(&DAT_0104b1d8 + iVar3,&local_ec);
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
                    FUN_004823e0(&DAT_0104b1f8 + iVar3,&fStack_130);
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


//// FUNCTION FUN_00504d40 @ 00504d40 ////

void __fastcall FUN_00504d40(void *param_1)

{
  if (*(int *)((int)param_1 + 0xec) != 0) {
    FUN_00503bd0(param_1);
    FUN_005013d0(param_1);
    FUN_00501600(param_1);
    FUN_004ffef0(param_1);
    FUN_004fffb0(param_1);
    FUN_00501830(param_1);
    FUN_00501ae0(param_1);
    FUN_00500090(param_1);
    FUN_00500140(param_1);
    FUN_005003d0(param_1);
    FUN_00501d90(param_1);
    FUN_00503ca0(param_1);
    FUN_00502030(param_1);
    FUN_005022e0(param_1);
    FUN_005006a0(param_1);
    FUN_00502550(param_1);
    FUN_005027e0(param_1);
    FUN_00500770(param_1);
    FUN_00502a70(param_1);
    FUN_00502ce0(param_1);
    FUN_005009f0(param_1);
    FUN_00502f50(param_1);
    FUN_00500bb0(param_1);
    FUN_00503110(param_1);
    FUN_00500d90(param_1);
    FUN_005032d0(param_1);
    FUN_00500f50(param_1);
    FUN_00503530(param_1);
    FUN_00503790(param_1);
    FUN_00503d80(param_1);
    FUN_00504200(param_1);
    FUN_00501110(param_1);
    FUN_00501230(param_1);
    FUN_005012f0(param_1);
    FUN_00504680(param_1);
    if ((DAT_0104a974 == 0) || (*(float *)(DAT_0104a974 + 0x80) == 0.0)) {
      FUN_00503930(param_1);
      FUN_00503a70(param_1);
    }
    FUN_0040d9d0((int)param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00504e80 @ 00504e80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00504e80(void)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float *pfVar10;
  byte *pbVar11;
  byte *pbVar12;
  float10 fVar13;
  float local_274;
  undefined1 *local_270;
  undefined4 local_26c;
  uint local_268;
  undefined1 local_264 [20];
  char *local_250;
  undefined4 local_24c;
  undefined4 local_248;
  char local_244 [20];
  undefined4 local_230;
  undefined4 local_22c;
  byte *local_228;
  undefined4 local_224;
  uint local_220;
  byte local_21c [20];
  float local_208;
  undefined4 local_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 auStack_1f8 [4];
  float *local_1f4;
  float *local_1f0;
  int local_1ec;
  undefined1 auStack_1e8 [4];
  void *local_1e4;
  float *local_1e0;
  int local_1dc;
  byte *pbStack_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  byte abStack_1cc [20];
  undefined1 *puStack_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  undefined1 auStack_1ac [20];
  undefined1 *puStack_198;
  undefined4 uStack_194;
  uint uStack_190;
  undefined1 auStack_18c [20];
  char *local_178;
  undefined4 local_174;
  uint local_170;
  char local_16c [20];
  byte *local_158;
  undefined4 local_154;
  uint local_150;
  byte local_14c [20];
  byte *local_138;
  undefined4 local_134;
  uint local_130;
  byte local_12c [20];
  char *pcStack_118;
  uint uStack_114;
  uint uStack_110;
  char acStack_10c [20];
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
  puStack_10 = &LAB_00cac359;
  local_14 = ExceptionList;
  local_178 = local_16c;
  local_16c[0] = '\0';
  local_174 = 0;
  local_170 = 0x20;
  ExceptionList = &local_14;
  local_178 = _malloc(0x20);
  _strncpy(local_178,"data/reviews/starreview.csv",0x1b);
  local_174 = 0x1b;
  local_178[0x1b] = '\0';
  local_250 = local_244;
  local_c = 0;
  local_244[0] = '\0';
  local_24c = 0;
  local_248 = 0x14;
  _strncpy(local_250,"",0);
  local_24c = 0;
  *local_250 = '\0';
  local_230 = 0;
  local_22c = 0;
  local_c._0_1_ = 1;
  bVar3 = FUN_00553a50(&local_250,&local_178);
  if (bVar3) {
    local_270 = local_264;
    local_264[0] = 0;
    local_26c = 0;
    local_268 = 0x14;
    local_78 = local_6c;
    local_6c[0] = 0;
    local_74 = 0;
    local_70 = 0x14;
    local_c._0_1_ = 3;
    FUN_0040c920(&local_250,&local_270);
    pfVar10 = (float *)0x0;
    local_208 = 0.0;
    local_1f4 = (float *)0x0;
    local_1f0 = (float *)0x0;
    local_1ec = 0;
    local_138 = local_12c;
    local_12c[0] = 0;
    local_134 = 0;
    local_130 = 0x14;
    local_c = CONCAT31(local_c._1_3_,5);
    bVar3 = FUN_00547e50(&local_270,0,&local_138);
    if (bVar3) {
      do {
        local_228 = local_21c;
        local_21c[0] = 0;
        local_224 = 0;
        local_220 = 0x14;
        _strncpy((char *)local_228,"",0);
        local_224 = 0;
        *local_228 = 0;
        pbVar11 = local_138;
        pbVar12 = local_228;
        do {
          bVar1 = *pbVar11;
          bVar3 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_005050a4:
            iVar4 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
            goto LAB_005050a9;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar3 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_005050a4;
          pbVar11 = pbVar11 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_005050a9:
        if (0x14 < local_220) {
                    /* WARNING: Subroutine does not return */
          _free(local_228);
        }
        if (iVar4 == 0) break;
        local_274 = (float)FUN_00567d80(&local_138);
        if ((local_1f4 == (float *)0x0) ||
           ((uint)(local_1ec - (int)local_1f4 >> 2) <= (uint)((int)pfVar10 - (int)local_1f4 >> 2)))
        {
          FUN_0040ec60(auStack_1f8,pfVar10,1,&local_274);
        }
        else {
          *pfVar10 = local_274;
          local_1f0 = pfVar10 + 1;
        }
        pfVar10 = local_1f0;
        local_208 = (float)((int)local_208 + 1);
        bVar3 = FUN_00547e50(&local_270,(int)local_208,&local_138);
      } while (bVar3);
    }
    FUN_0040c920(&local_250,&local_270);
    pfVar10 = (float *)0x0;
    local_274 = 0.0;
    local_1e4 = (void *)0x0;
    local_1e0 = (float *)0x0;
    local_1dc = 0;
    local_158 = local_14c;
    local_14c[0] = 0;
    local_154 = 0;
    local_150 = 0x14;
    local_c._0_1_ = 7;
    bVar3 = FUN_00547e50(&local_270,0,&local_158);
    if (bVar3) {
      do {
        local_228 = local_21c;
        local_21c[0] = 0;
        local_224 = 0;
        local_220 = 0x14;
        _strncpy((char *)local_228,"",0);
        local_224 = 0;
        *local_228 = 0;
        pbVar11 = local_158;
        pbVar12 = local_228;
        do {
          bVar1 = *pbVar11;
          bVar3 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_00505234:
            iVar4 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
            goto LAB_00505239;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar3 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_00505234;
          pbVar11 = pbVar11 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00505239:
        if (0x14 < local_220) {
                    /* WARNING: Subroutine does not return */
          _free(local_228);
        }
        if (iVar4 == 0) break;
        fVar13 = FUN_00567d60(&local_158);
        local_208 = (float)fVar13;
        if ((local_1e4 == (void *)0x0) ||
           ((uint)(local_1dc - (int)local_1e4 >> 2) <= (uint)((int)pfVar10 - (int)local_1e4 >> 2)))
        {
          FUN_00481520(auStack_1e8,pfVar10,1,&local_208);
        }
        else {
          *pfVar10 = local_208;
          local_1e0 = pfVar10 + 1;
        }
        pfVar10 = local_1e0;
        local_274 = (float)((int)local_274 + 1);
        bVar3 = FUN_00547e50(&local_270,(int)local_274,&local_158);
      } while (bVar3);
    }
    if (local_1f4 == (float *)0x0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = (float)((int)local_1f0 - (int)local_1f4 >> 2);
    }
    if (local_1e4 == (void *)0x0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = (float)((int)pfVar10 - (int)local_1e4 >> 2);
    }
    if ((int)fVar9 < (int)fVar5) {
      fVar5 = fVar9;
    }
    if (0 < (int)fVar5) {
      iVar4 = (int)local_1e4 - (int)local_1f4;
      pfVar10 = local_1f4;
      local_274 = fVar5;
      do {
        puVar2 = DAT_0104b1b4;
        local_204 = *(undefined4 *)((int)pfVar10 + iVar4);
        local_208 = *pfVar10;
        if ((DAT_0104b1b0 == 0) ||
           ((uint)(DAT_0104b1b8 - DAT_0104b1b0 >> 3) <=
            (uint)((int)DAT_0104b1b4 - DAT_0104b1b0 >> 3))) {
          FUN_00481c20(&DAT_0104b1ac,DAT_0104b1b4,1,&local_208);
        }
        else {
          FUN_0047b040(DAT_0104b1b4,1,&local_208);
          DAT_0104b1b4 = puVar2 + 2;
        }
        pfVar10 = pfVar10 + 1;
        local_274 = (float)((int)local_274 + -1);
      } while (local_274 != 0.0);
    }
    FUN_0040c920(&local_250,&local_270);
    FUN_00547e50(&local_270,0,&local_78);
    fVar9 = (float)FUN_00567d80(&local_78);
    if (0 < (int)fVar9) {
      do {
        local_274 = fVar9;
        FUN_0040c920(&local_250,&local_270);
        puStack_198 = auStack_18c;
        auStack_18c[0] = 0;
        uStack_194 = 0;
        uStack_190 = 0x14;
        puStack_1b8 = auStack_1ac;
        auStack_1ac[0] = 0;
        uStack_1b4 = 0;
        uStack_1b0 = 0x14;
        local_228 = local_21c;
        local_21c[0] = 0;
        local_224 = 0;
        local_220 = 0x14;
        pbStack_1d8 = abStack_1cc;
        abStack_1cc[0] = 0;
        uStack_1d4 = 0;
        uStack_1d0 = 0x14;
        local_c = CONCAT31(local_c._1_3_,0xb);
        bVar3 = FUN_00547e50(&local_270,0,&puStack_198);
        if ((((bVar3) && (bVar3 = FUN_00547e50(&local_270,1,&puStack_1b8), bVar3)) &&
            (bVar3 = FUN_00547e50(&local_270,2,&local_228), bVar3)) &&
           (bVar3 = FUN_00547e50(&local_270,3,&pbStack_1d8), bVar3)) {
          uVar6 = FUN_00567d80(&pbStack_1d8);
          uVar7 = FUN_00567d80(&local_228);
          uVar8 = FUN_00567d80(&puStack_1b8);
          fVar13 = FUN_00567d60(&puStack_198);
          local_208 = (float)fVar13;
          local_204 = uVar8;
          uStack_200 = uVar7;
          uStack_1fc = uVar6;
          FUN_004824d0(&DAT_0104b19c,&local_208);
        }
        if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
          _free(pbStack_1d8);
        }
        if (0x14 < local_220) {
                    /* WARNING: Subroutine does not return */
          _free(local_228);
        }
        if (0x14 < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_1b8);
        }
        local_c._0_1_ = 7;
        if (0x14 < uStack_190) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_198);
        }
        local_274 = (float)((int)local_274 + -1);
        fVar9 = local_274;
      } while (local_274 != 0.0);
    }
    FUN_00504910(&local_250,&local_270,0);
    FUN_00504910(&local_250,&local_270,1);
    FUN_00504910(&local_250,&local_270,2);
    FUN_00504910(&local_250,&local_270,3);
    FUN_00504910(&local_250,&local_270,4);
    FUN_00504910(&local_250,&local_270,5);
    FUN_00504910(&local_250,&local_270,6);
    FUN_00504910(&local_250,&local_270,7);
    FUN_00504910(&local_250,&local_270,8);
    FUN_00504910(&local_250,&local_270,9);
    FUN_00504910(&local_250,&local_270,10);
    FUN_00504910(&local_250,&local_270,0xb);
    FUN_00504910(&local_250,&local_270,0xc);
    FUN_00504910(&local_250,&local_270,0xd);
    FUN_00504910(&local_250,&local_270,0xe);
    FUN_00504910(&local_250,&local_270,0xf);
    FUN_00504910(&local_250,&local_270,0x10);
    FUN_00504910(&local_250,&local_270,0x11);
    FUN_00504910(&local_250,&local_270,0x12);
    FUN_00504910(&local_250,&local_270,0x13);
    FUN_00504910(&local_250,&local_270,0x14);
    FUN_00504910(&local_250,&local_270,0x15);
    FUN_00504910(&local_250,&local_270,0x16);
    FUN_00504910(&local_250,&local_270,0x17);
    FUN_00504910(&local_250,&local_270,0x18);
    FUN_00504910(&local_250,&local_270,0x19);
    FUN_00504910(&local_250,&local_270,0x1a);
    FUN_00504910(&local_250,&local_270,0x1b);
    FUN_00504910(&local_250,&local_270,0x1c);
    FUN_00504910(&local_250,&local_270,0x1d);
    FUN_00504910(&local_250,&local_270,0x1e);
    FUN_0040c920(&local_250,&local_270);
    puStack_b8 = auStack_ac;
    auStack_ac[0] = 0;
    uStack_b4 = 0;
    uStack_b0 = 0x14;
    puStack_d8 = auStack_cc;
    auStack_cc[0] = 0;
    uStack_d4 = 0;
    uStack_d0 = 0x14;
    puStack_98 = auStack_8c;
    auStack_8c[0] = 0;
    uStack_94 = 0;
    uStack_90 = 0x14;
    puStack_58 = auStack_4c;
    auStack_4c[0] = 0;
    uStack_54 = 0;
    uStack_50 = 0x14;
    puStack_f8 = auStack_ec;
    auStack_ec[0] = 0;
    uStack_f4 = 0;
    uStack_f0 = 0x14;
    puStack_38 = auStack_2c;
    auStack_2c[0] = 0;
    uStack_34 = 0;
    uStack_30 = 0x14;
    pcStack_118 = acStack_10c;
    acStack_10c[0] = '\0';
    uStack_114 = 0;
    uStack_110 = 0x14;
    local_c._0_1_ = 0x12;
    bVar3 = FUN_00547e50(&local_270,0,&puStack_b8);
    if (((((bVar3) && (bVar3 = FUN_00547e50(&local_270,1,&puStack_d8), bVar3)) &&
         ((bVar3 = FUN_00547e50(&local_270,2,&puStack_98), bVar3 &&
          ((bVar3 = FUN_00547e50(&local_270,3,&puStack_58), bVar3 &&
           (bVar3 = FUN_00547e50(&local_270,4,&puStack_f8), bVar3)))))) &&
        (bVar3 = FUN_00547e50(&local_270,5,&puStack_38), bVar3)) &&
       (bVar3 = FUN_00547e50(&local_270,6,&pcStack_118), bVar3)) {
      _DAT_0104ba78 = FUN_00567d80(&puStack_b8);
      fVar13 = FUN_00567d60(&puStack_d8);
      _DAT_0104ba7c = (float)fVar13;
      fVar13 = FUN_00567d60(&puStack_98);
      _DAT_0104ba80 = (float)fVar13;
      fVar13 = FUN_00567d60(&puStack_58);
      _DAT_0104ba84 = (float)fVar13;
      fVar13 = FUN_00567d60(&puStack_f8);
      _DAT_0104ba88 = (float)fVar13;
      _DAT_0104ba8c = FUN_00567d80(&puStack_38);
      FUN_004015d0(&DAT_0104ba90,pcStack_118,uStack_114);
      puStack_1b8 = auStack_1ac;
      auStack_1ac[0] = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0x14;
      puStack_198 = auStack_18c;
      auStack_18c[0] = 0;
      uStack_194 = 0;
      uStack_190 = 0x14;
      local_c._0_1_ = 0x14;
      FUN_00547e50(&local_270,7,&puStack_1b8);
      FUN_00547e50(&local_270,8,&puStack_198);
      DAT_0104b198 = FUN_00567d80(&puStack_1b8);
      DAT_00e51d8c = FUN_00567d80(&puStack_198);
      local_228 = local_21c;
      local_208 = 1.26117e-44;
      local_21c[0] = 0;
      local_224 = 0;
      local_220 = 0x14;
      local_c = CONCAT31(local_c._1_3_,0x15);
      bVar3 = FUN_00547e50(&local_270,9,&local_228);
      if (bVar3) {
        do {
          pbStack_1d8 = abStack_1cc;
          abStack_1cc[0] = 0;
          uStack_1d4 = 0;
          uStack_1d0 = 0x14;
          _strncpy((char *)pbStack_1d8,"",0);
          uStack_1d4 = 0;
          *pbStack_1d8 = 0;
          pbVar11 = local_228;
          pbVar12 = pbStack_1d8;
          do {
            bVar1 = *pbVar11;
            bVar3 = bVar1 < *pbVar12;
            if (bVar1 != *pbVar12) {
LAB_00505c08:
              iVar4 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
              goto LAB_00505c0d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar11[1];
            bVar3 = bVar1 < pbVar12[1];
            if (bVar1 != pbVar12[1]) goto LAB_00505c08;
            pbVar11 = pbVar11 + 2;
            pbVar12 = pbVar12 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00505c0d:
          if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
            _free(pbStack_1d8);
          }
          if (iVar4 == 0) break;
          fVar13 = FUN_00567d60(&local_228);
          local_274 = (float)fVar13;
          if ((DAT_0104bab4 == 0) ||
             ((uint)(DAT_0104babc - DAT_0104bab4 >> 2) <=
              (uint)((int)DAT_0104bab8 - DAT_0104bab4 >> 2))) {
            FUN_00481520(&DAT_0104bab0,DAT_0104bab8,1,&local_274);
          }
          else {
            *DAT_0104bab8 = local_274;
            DAT_0104bab8 = DAT_0104bab8 + 1;
          }
          local_208 = (float)((int)local_208 + 1);
          bVar3 = FUN_00547e50(&local_270,(int)local_208,&local_228);
        } while (bVar3);
      }
      if (0x14 < local_220) {
                    /* WARNING: Subroutine does not return */
        _free(local_228);
      }
      if (0x14 < uStack_190) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_198);
      }
      local_c._0_1_ = 0x12;
      if (0x14 < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_1b8);
      }
    }
    FUN_00504910(&local_250,&local_270,0x20);
    FUN_00504910(&local_250,&local_270,0x21);
    FUN_00504910(&local_250,&local_270,0x22);
    FUN_00504910(&local_250,&local_270,0x23);
    FUN_00504910(&local_250,&local_270,0x24);
    if (0x14 < uStack_110) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_118);
    }
    if (0x14 < uStack_30) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_38);
    }
    if (0x14 < uStack_f0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_f8);
    }
    if (0x14 < uStack_50) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_58);
    }
    if (0x14 < uStack_90) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_98);
    }
    if (0x14 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_d8);
    }
    if (0x14 < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_b8);
    }
    if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    if (local_1e4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1e4);
    }
    if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
      _free(local_138);
    }
    if (local_1f4 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1f4);
    }
    if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
      _free(local_78);
    }
    if (0x14 < local_268) {
                    /* WARNING: Subroutine does not return */
      _free(local_270);
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00552ce0(&local_250);
  }
  else {
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00552ce0(&local_250);
  }
  if (0x14 < local_170) {
                    /* WARNING: Subroutine does not return */
    _free(local_178);
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_00505ef0 @ 00505ef0 ////

void __thiscall FUN_00505ef0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0xbc) = param_1;
  return;
}


//// FUNCTION FUN_00505f00 @ 00505f00 ////

void __thiscall FUN_00505f00(void *this,int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_2 + *(float *)((int)this + param_1 * 4 + 0x7c);
  if (fVar1 < -1.5) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x7c) = 0xbfc00000;
    return;
  }
  if (1.5 < fVar1) {
    fVar1 = 1.5;
  }
  *(float *)((int)this + param_1 * 4 + 0x7c) = fVar1;
  return;
}


//// FUNCTION FUN_00505f50 @ 00505f50 ////

int __fastcall FUN_00505f50(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00995d50(*(int *)(param_1 + 0x78));
  if (-1 < (int)uVar1) {
    return uVar1 * 0x34 + *(int *)(*(int *)(param_1 + 0x78) + 0x20);
  }
  return 0;
}


//// FUNCTION FUN_00505fb0 @ 00505fb0 ////

int * __thiscall FUN_00505fb0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00506030 @ 00506030 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00506030(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 uVar3;
  void *this;
  float10 fVar4;
  float10 extraout_ST0;
  ulonglong uVar5;
  float *pfVar6;
  undefined4 local_8;
  
  fVar4 = FUN_00566c00(DAT_0104cdf4);
  fVar4 = (fVar4 + (float10)*(int *)(param_1 + 0x78)) * (float10)0.05;
  if (fVar4 <= (float10)0.0) {
    fVar4 = (float10)0.0;
  }
  **(float **)(param_1 + 0x74) =
       (float)(fVar4 * (float10)*(float *)(param_1 + 0x88) + (float10)*(float *)(param_1 + 0x7c));
  *(float *)(*(int *)(param_1 + 0x74) + 4) =
       (float)(fVar4 * (float10)*(float *)(param_1 + 0x8c) + (float10)*(float *)(param_1 + 0x80));
  *(float *)(*(int *)(param_1 + 0x74) + 8) =
       (float)((((float10)-7.0 * fVar4 + (float10)*(float *)(param_1 + 0x90)) * fVar4 +
               (float10)*(float *)(param_1 + 0x84)) - (float10)0.1);
  if (*(float *)(*(int *)(param_1 + 0x74) + 8) <= 0.0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 8);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 8) = uVar1;
  uVar5 = FUN_00acd42c();
  if ((int)uVar5 < 0) {
    uVar3 = 0;
  }
  else if ((int)uVar5 < 0x100) {
    uVar3 = (undefined1)uVar5;
  }
  else {
    uVar3 = 0xff;
  }
  local_8 = (float)CONCAT13(uVar3,0xffffff);
  *(float *)(*(int *)(param_1 + 0x74) + 0x2c) = local_8;
  local_8 = 0.3;
  if ((extraout_ST0 < (float10)0.2) &&
     (fVar4 = extraout_ST0 * (float10)5.0 * (float10)0.3, local_8 = (float)fVar4,
     fVar4 <= (float10)0.03)) {
    local_8 = 0.03;
  }
  fVar2 = local_8;
  if (local_8 < 0.001) {
    fVar2 = 0.001;
  }
  *(float *)(*(int *)(param_1 + 0x74) + 0x24) = fVar2;
  if (_DAT_00f87a74 != 0.0) {
    pfVar6 = *(float **)(param_1 + 0x74);
    this = (void *)FUN_00412440();
    FUN_00412320(this,pfVar6,local_8);
  }
  return;
}


//// FUNCTION FUN_005061e0 @ 005061e0 ////

void FUN_005061e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0044f810();
  FUN_0043eb40();
  FUN_00412450();
  puVar2 = DAT_0104bc40;
  if (DAT_0104bc40 != (undefined4 *)0x0) {
    iVar1 = DAT_0104bc40[0x12];
    DAT_0104bc40[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104bc2c[1])();
    DAT_0104bc40 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0050622f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_0104bc2c)();
    return;
  }
  return;
}


//// FUNCTION FUN_00506240 @ 00506240 ////

undefined4 * __fastcall FUN_00506240(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac383;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d21128;
  puVar2 = FUN_0040a690(0x100,'\0');
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
  pvVar4 = FUN_0099bb50("ui/headicons02.dds",0,0,0,'\0');
  if (*(void **)((int)*(void **)(param_1[0x1e] + 0x18) + 0x18) != pvVar4) {
    Engine_SetResourceReference(*(void **)(param_1[0x1e] + 0x18),(int)pvVar4);
  }
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  puVar1 = (uint *)(*(int *)(param_1[0x1e] + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  FUN_0099a220((void *)param_1[0x1e],4);
  FUN_0040a6f0(param_1[0x1e]);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00506320 @ 00506320 ////

void __fastcall FUN_00506320(undefined4 *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cac398;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d21128;
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


//// FUNCTION FUN_00506460 @ 00506460 ////

undefined4 * __thiscall FUN_00506460(void *this,undefined4 *param_1,undefined4 param_2)

{
  float *pfVar1;
  int iVar2;
  char *pcVar3;
  float10 fVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac3c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  *(undefined ***)this = &PTR_FUN_00d21150;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x74) = param_2;
  *(undefined4 *)((int)this + 0x7c) = *param_1;
  *(undefined4 *)((int)this + 0x80) = param_1[1];
  *(undefined4 *)((int)this + 0x84) = param_1[2];
  local_4 = 1;
  *(void **)((int)this + 0x6c) = this;
  FUN_00acdb9e(0xe51f10);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0x70) = iVar2;
  if (s___AVCStatFloatie_TM___00e51ef8[0x16] != '\0') {
    iVar2 = 100;
    pcVar5 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe51f10);
    FUN_0097df60(pcVar3,pcVar5,iVar2);
    s___AVCStatFloatie_TM___00e51ef8[0x16] = '\0';
  }
  pfVar1 = (float *)((int)this + 0x88);
  fVar4 = FUN_00990e30(-1.0,1.0);
  *pfVar1 = (float)fVar4;
  fVar4 = FUN_00990e30(-1.0,1.0);
  *(float *)((int)this + 0x8c) = (float)fVar4;
  fVar4 = FUN_00990e30(3.0,4.0);
  *(float *)((int)this + 0x90) = (float)fVar4;
  FUN_00412e20(pfVar1);
  *pfVar1 = *pfVar1 * 7.0;
  *(float *)((int)this + 0x8c) = *(float *)((int)this + 0x8c) * 7.0;
  *(float *)((int)this + 0x90) = *(float *)((int)this + 0x90) * 7.0;
  *(undefined4 *)((int)this + 0x78) = 0;
  FUN_00506030((int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005065b0 @ 005065b0 ////

void __fastcall FUN_005065b0(undefined4 *param_1)

{
  uint *puVar1;
  
  *param_1 = &PTR_FUN_00d21150;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (((param_1[0x1d] != 0) && (DAT_0104bc40 != 0)) && (*(int *)(DAT_0104bc40 + 0x78) != 0)) {
    puVar1 = (uint *)(param_1[0x1d] + 0x30);
    *puVar1 = *puVar1 | 0x100;
    param_1[0x1d] = 0;
  }
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_005069f0 @ 005069f0 ////

void FUN_005069f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac41b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x7c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00506240(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104bc2c[1])();
  DAT_0104bc40 = puVar2;
  (*(code *)*DAT_0104bc2c)();
  IconShadowRenderer_Constructor();
  FUN_0043f2c0();
  FUN_0044f790();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00506a70 @ 00506a70 ////

undefined4 * __thiscall FUN_00506a70(void *this,byte param_1)

{
  FUN_00506320(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00506ac0 @ 00506ac0 ////

void __fastcall FUN_00506ac0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d21170;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00506b10 @ 00506b10 ////

void __fastcall FUN_00506b10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d21170;
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


//// FUNCTION FUN_00506b60 @ 00506b60 ////

undefined4 * __thiscall FUN_00506b60(void *this,byte param_1)

{
  FUN_005065b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00506b80 @ 00506b80 ////

void __fastcall FUN_00506b80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d21180;
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


//// FUNCTION FUN_00506bd0 @ 00506bd0 ////

undefined4 * __thiscall FUN_00506bd0(void *this,byte param_1)

{
  FUN_00506b80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00506bf0 @ 00506bf0 ////

void __fastcall FUN_00506bf0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cac451;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2118c;
  local_4 = 2;
  if ((undefined4 *)param_1[0x24] != param_1 + 0x27) {
    do {
      piVar1 = (int *)param_1[0x24];
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
    } while ((undefined4 *)param_1[0x24] != param_1 + 0x27);
  }
  FUN_00506b80(param_1 + 0x22);
  param_1[0x19] = &PTR_FUN_00d18c4c;
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


//// FUNCTION FUN_00506cf0 @ 00506cf0 ////

undefined4 * __thiscall FUN_00506cf0(void *this,byte param_1)

{
  FUN_00506bf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00506d10 @ 00506d10 ////

void __fastcall FUN_00506d10(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d21180;
  return;
}


//// FUNCTION FUN_00506d70 @ 00506d70 ////

undefined4 * __fastcall FUN_00506d70(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cac4a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d2118c;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_1 + 0x19;
  param_1[0x19] = &PTR_FUN_00d18c4c;
  param_1[0x1e] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  puVar1 = param_1 + 0x27;
  param_1[0x29] = 0;
  *puVar1 = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x24] = puVar1;
  *puVar1 = param_1 + 0x23;
  param_1[0x22] = &PTR_LAB_00d21180;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x30] = 0;
  *(undefined1 *)((int)param_1 + 0xc5) = 4;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00506e30 @ 00506e30 ////

undefined4 * __cdecl FUN_00506e30(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac4cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(200);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00506d70(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 4))();
  puVar2[0x1e] = param_1;
  (**(code **)puVar2[0x19])();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_00506f10 @ 00506f10 ////

int * __thiscall FUN_00506f10(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00507000 @ 00507000 ////

void __fastcall FUN_00507000(int *param_1)

{
  float fVar1;
  float *pfVar2;
  undefined4 local_c [2];
  float local_4;
  
  if ((((float)param_1[0x25] < (float)param_1[0x24]) && (param_1[0x32] != 0)) &&
     ((void *)param_1[0x22] != (void *)0x0)) {
    pfVar2 = (float *)FUN_00598e50((void *)param_1[0x22],local_c);
    fVar1 = pfVar2[1];
    local_4 = pfVar2[2] * 0.5;
    param_1[0x27] = (int)((float)param_1[0x27] * 0.5 + *pfVar2 * 0.5);
    param_1[0x28] = (int)((float)param_1[0x28] * 0.5 + fVar1 * 0.5);
    param_1[0x29] = (int)((float)param_1[0x29] * 0.5 + local_4);
    pfVar2 = (float *)FUN_00598e50((void *)param_1[0x32],local_c);
    fVar1 = pfVar2[1];
    local_4 = pfVar2[2] * 0.5;
    param_1[0x2a] = (int)((float)param_1[0x2a] * 0.5 + *pfVar2 * 0.5);
    param_1[0x2b] = (int)((float)param_1[0x2b] * 0.5 + fVar1 * 0.5);
    param_1[0x2c] = (int)((float)param_1[0x2c] * 0.5 + local_4);
    FUN_0053d480((int)param_1);
    return;
  }
  *(uint *)(param_1[0x23] + 0x30) = *(uint *)(param_1[0x23] + 0x30) | 0x100;
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 4))();
  return;
}


//// FUNCTION FUN_005071a0 @ 005071a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005071a0(int param_1)

{
  float *pfVar1;
  int iVar2;
  void *this;
  float10 fVar3;
  ulonglong uVar4;
  float fVar5;
  undefined1 local_51;
  float local_50;
  float local_4c;
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
  undefined4 local_c [2];
  float local_4;
  
  if ((*(int *)(param_1 + 200) == 0) || (*(int *)(param_1 + 0x88) == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x2f) = 0;
  }
  else {
    fVar3 = FUN_00990aa0();
    *(float *)(param_1 + 0x94) =
         (float)(fVar3 * (float10)10.0 + (float10)*(float *)(param_1 + 0x94));
    pfVar1 = (float *)FUN_00598e50(*(void **)(param_1 + 0x88),local_c);
    local_4 = pfVar1[2] * 0.75;
    local_34 = *(float *)(param_1 + 0xa0) * 0.25;
    local_30 = *(float *)(param_1 + 0xa4) * 0.25;
    local_24 = *(float *)(param_1 + 0x9c) * 0.25 + *pfVar1 * 0.75;
    local_20 = local_34 + pfVar1[1] * 0.75;
    local_1c = local_30 + local_4;
    pfVar1 = (float *)FUN_00598e50(*(void **)(param_1 + 200),local_c);
    local_4 = pfVar1[2] * 0.75;
    local_34 = *(float *)(param_1 + 0xac) * 0.25;
    local_30 = *(float *)(param_1 + 0xb0) * 0.25;
    local_18 = *(float *)(param_1 + 0xa8) * 0.25 + *pfVar1 * 0.75;
    local_14 = local_34 + pfVar1[1] * 0.75;
    local_10 = local_30 + local_4;
    FUN_009840b0(&local_40,&local_24);
    FUN_009840b0(&local_2c,&local_18);
    local_50 = SQRT((local_40 - local_2c) * (local_40 - local_2c) +
                    (local_3c - local_28) * (local_3c - local_28));
    local_4c = *(float *)(param_1 + 0x94) * 0.3;
    if (local_4c < local_50) {
      local_48 = (float)((float10)local_4c / (float10)local_50);
      fVar3 = (float10)fsin(((float10)local_4c / (float10)local_50) * (float10)3.1415927);
      local_44 = (float)(fVar3 * (float10)local_50);
      *(float *)(*(int *)(param_1 + 0x8c) + 8) =
           local_44 * 0.1 + local_48 * local_10 + (1.0 - local_48) * local_1c;
      local_38 = local_2c - local_40;
      local_34 = local_28 - local_3c;
      FUN_00412c90(&local_38);
      fVar5 = local_44;
      local_44 = 0.15;
      **(float **)(param_1 + 0x8c) = local_38 * local_4c + local_34 * fVar5 * 0.05 + local_40;
      *(float *)(*(int *)(param_1 + 0x8c) + 4) =
           (local_34 * local_4c + local_3c) - fVar5 * 0.05 * local_38;
      fVar5 = local_4c;
      if (0.5 < local_48) {
        fVar5 = local_50 - local_4c;
      }
      if (local_50 < 2.0) {
        fVar5 = (1.0 / (local_50 * 0.5)) * fVar5;
      }
      if (fVar5 < 1.0) {
        local_44 = fVar5 * 0.14 + 0.01;
      }
      fVar5 = local_44;
      if (local_44 < 0.001) {
        fVar5 = 0.001;
      }
      *(float *)(*(int *)(param_1 + 0x8c) + 0x24) = fVar5;
      if (local_50 < *(float *)(param_1 + 0x98) * 20.0) {
        uVar4 = FUN_00acd42c();
        FUN_0040a4f0(&local_51,(int)uVar4);
        *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x2f) = local_51;
      }
      else {
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x2f) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x2f) = 0;
    }
    local_44 = *(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x94);
    if (local_44 < 8.0) {
      if (0.0 < local_44) {
        local_48 = (float)(uint)*(byte *)(*(int *)(param_1 + 0x8c) + 0x2f);
      }
      uVar4 = FUN_00acd42c();
      iVar2 = (int)uVar4;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      *(char *)(*(int *)(param_1 + 0x8c) + 0x2f) = (char)iVar2;
    }
    if (_DAT_00f87a74 != 0.0) {
      pfVar1 = *(float **)(param_1 + 0x8c);
      fVar5 = pfVar1[9];
      this = (void *)FUN_00412440();
      FUN_00412320(this,pfVar1,fVar5);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00507590 @ 00507590 ////

void FUN_00507590(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104bc60;
  if (DAT_0104bc60 != (undefined4 *)0x0) {
    iVar1 = DAT_0104bc60[0x12];
    DAT_0104bc60[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104bc4c[1])();
    DAT_0104bc60 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x005075d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_0104bc4c)();
    return;
  }
  return;
}


//// FUNCTION FUN_005075e0 @ 005075e0 ////

float10 __thiscall FUN_005075e0(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int *this;
  undefined4 *puVar3;
  void *pvVar4;
  float *pfVar5;
  uint uVar6;
  int *piVar7;
  int *local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c [3];
  
  this = param_2;
  if (param_2 != *(int **)(param_1 + 0x78)) {
    puVar3 = FUN_00598e50(*(int **)(param_1 + 0x78),local_c);
    FUN_009840b0(&local_1c,puVar3);
    puVar3 = FUN_00598e50(this,local_c);
    FUN_009840b0(&local_14,puVar3);
    fVar2 = (local_1c - local_14) * (local_1c - local_14) +
            (local_18 - local_10) * (local_18 - local_10);
    if (fVar2 <= 400.0) {
      piVar7 = this;
      pvVar4 = (void *)FUN_005873c0(*(int *)(param_1 + 0x78));
      pvVar4 = (void *)FUN_0042e770(pvVar4,(int)piVar7);
      pfVar5 = (float *)FUN_0042b030(pvVar4,(float *)&param_2);
      fVar1 = *pfVar5;
      local_28 = 0.0;
      param_2 = (int *)0x0;
      local_2c = (int *)0x0;
      if (0.5 <= fVar1) {
        param_2 = (int *)((fVar1 - 0.5) + (fVar1 - 0.5));
      }
      else {
        local_28 = (0.5 - fVar1) + (0.5 - fVar1);
      }
      uVar6 = FUN_0042edc0(*(int **)(param_1 + 0x78),this);
      if ((char)uVar6 != '\0') {
        local_2c = param_2;
        param_2 = (int *)0x0;
      }
      pfVar5 = (float *)FUN_0045ed00(&local_20,*(int **)(param_1 + 0x78),this);
      return ((float10)(float)local_2c + (float10)*pfVar5 + (float10)(float)param_2 +
             (float10)local_28) / ((float10)fVar2 + (float10)1.0);
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00507710 @ 00507710 ////

void __fastcall FUN_00507710(undefined4 *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  int *piVar4;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cac4e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d211e4;
  local_4 = 0;
  piVar4 = param_1 + 0x1e;
  local_14 = 7;
  do {
    _Memory = *(void **)(*piVar4 + 0x18);
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)(*piVar4 + 0x18) = 0;
    puVar1 = (undefined4 *)*piVar4;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 4);
      uVar2 = DAT_0105b588;
      if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_0105b588 = uVar2;
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
                    /* WARNING: Subroutine does not return */
  _free(DAT_0104bc44);
}


//// FUNCTION FUN_00507820 @ 00507820 ////

void FUN_00507820(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  float *local_18;
  float *local_14;
  float *local_10;
  float *local_c;
  int local_8;
  
  while( true ) {
    iVar6 = 0;
    iVar9 = 0;
    for (puVar1 = DAT_0104bc6c; puVar1 != &DAT_0104bc78; puVar1 = (undefined4 *)puVar1[1]) {
      iVar9 = iVar9 + 1;
    }
    fVar2 = 0.0;
    if (iVar9 < 1) {
      return;
    }
    local_1c = iVar9 * 3;
    local_30 = 0;
    iVar4 = iVar9;
    local_8 = iVar9;
    do {
      local_8 = local_8 + -1;
      if (*(int *)(DAT_0104bc48 + iVar6 * 4) == -1) {
        iVar5 = iVar6 + 1;
        if (3 < local_8) {
          piVar7 = (int *)(DAT_0104bc48 + 0xc + iVar6 * 4);
          local_18 = (float *)(DAT_0104bc44 + (iVar4 + iVar6) * 4);
          local_c = (float *)(DAT_0104bc44 + (local_1c + iVar9 + iVar6) * 4);
          local_10 = (float *)(DAT_0104bc44 + (local_1c + iVar6) * 4);
          local_14 = (float *)(DAT_0104bc44 + (iVar4 + iVar9 + iVar6) * 4);
          do {
            if ((piVar7[-2] == -1) &&
               (fVar3 = *(float *)(DAT_0104bc44 + (local_30 + iVar5) * 4) + *local_18, fVar2 < fVar3
               )) {
              fVar2 = fVar3;
              local_2c = iVar5;
              local_28 = iVar6;
            }
            if ((piVar7[-1] == -1) &&
               (fVar3 = *(float *)(DAT_0104bc44 + 4 + (local_30 + iVar5) * 4) + *local_14,
               fVar2 < fVar3)) {
              local_2c = iVar5 + 1;
              fVar2 = fVar3;
              local_28 = iVar6;
            }
            if ((*piVar7 == -1) &&
               (fVar3 = *(float *)(DAT_0104bc44 + (iVar4 + 2 + -iVar9 + iVar5) * 4) + *local_10,
               fVar2 < fVar3)) {
              local_2c = iVar5 + 2;
              fVar2 = fVar3;
              local_28 = iVar6;
            }
            if ((piVar7[1] == -1) &&
               (fVar3 = *(float *)(DAT_0104bc44 + (iVar4 + 3 + -iVar9 + iVar5) * 4) + *local_c,
               fVar2 < fVar3)) {
              local_2c = iVar5 + 3;
              fVar2 = fVar3;
              local_28 = iVar6;
            }
            local_14 = local_14 + iVar9 * 4;
            local_18 = local_18 + iVar9 * 4;
            local_c = local_c + iVar9 * 4;
            local_10 = local_10 + iVar9 * 4;
            iVar5 = iVar5 + 4;
            piVar7 = piVar7 + 4;
          } while (iVar5 < iVar9 + -3);
        }
        if (iVar5 < iVar9) {
          pfVar8 = (float *)(DAT_0104bc44 + (iVar9 * iVar5 + iVar6) * 4);
          do {
            if ((*(int *)(DAT_0104bc48 + iVar5 * 4) == -1) &&
               (fVar3 = *(float *)(DAT_0104bc44 + (local_30 + iVar5) * 4) + *pfVar8, fVar2 < fVar3))
            {
              fVar2 = fVar3;
              local_2c = iVar5;
              local_28 = iVar6;
            }
            iVar5 = iVar5 + 1;
            pfVar8 = pfVar8 + iVar9;
          } while (iVar5 < iVar9);
        }
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + iVar9;
      local_1c = local_1c + iVar9;
      local_30 = local_30 + iVar9;
    } while (iVar6 < iVar9);
    if (fVar2 <= 0.0) break;
    *(int *)(DAT_0104bc48 + local_28 * 4) = local_2c;
    *(int *)(DAT_0104bc48 + local_2c * 4) = local_28;
  }
  return;
}


//// FUNCTION FUN_00507b90 @ 00507b90 ////

void __thiscall FUN_00507b90(void *this,undefined4 param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)((int)this + 0xc0) + 4))();
  *(undefined4 *)((int)this + 0xd4) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xc0))();
  if (*(int *)((int)this + 0xd4) != 0) {
    for (iVar1 = *(int *)((int)this + 0x94); iVar1 != (int)this + 0xa0; iVar1 = *(int *)(iVar1 + 4))
    {
      if ((*(int *)(*(int *)(iVar1 + 8) + 200) != *(int *)((int)this + 0xd4)) &&
         (*(float *)(*(int *)(iVar1 + 8) + 0x94) + 8.0 < *(float *)(*(int *)(iVar1 + 8) + 0x90))) {
        *(float *)(*(int *)(iVar1 + 8) + 0x90) = *(float *)(*(int *)(iVar1 + 8) + 0x94) + 8.0;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00507c20 @ 00507c20 ////

undefined4 * __thiscall FUN_00507c20(void *this,byte param_1)

{
  FUN_00507710(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00507da0 @ 00507da0 ////

void __fastcall FUN_00507da0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d2120c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00507df0 @ 00507df0 ////

void __fastcall FUN_00507df0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d2120c;
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


//// FUNCTION FUN_00507e40 @ 00507e40 ////

undefined4 * __thiscall
FUN_00507e40(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac52c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  *(undefined ***)this = &PTR_FUN_00d2121c;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  piVar1 = (int *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x80) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 **)((int)this + 0x80) = (undefined4 *)((int)this + 0x74);
  *(undefined4 *)((int)this + 0x74) = &PTR_FUN_00d16954;
  *(int *)((int)this + 0x88) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x7c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x8c) = param_3;
  *(undefined4 *)((int)this + 0x98) = param_4;
  piVar1 = (int *)((int)this + 0xb8);
  *(undefined4 *)((int)this + 0xc0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 **)((int)this + 0xc0) = (undefined4 *)((int)this + 0xb4);
  *(undefined4 *)((int)this + 0xb4) = &PTR_FUN_00d16954;
  *(int *)((int)this + 200) = param_2;
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x18);
    *(int **)((int)this + 0xbc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = 3;
  *(undefined1 *)((int)this + 0x60) = 0;
  *(void **)((int)this + 0x6c) = this;
  FUN_00acdb9e(0xe52018);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x70) = iVar3;
  if (s___AVCStatSeekie_TM___00e52000[0x15] != '\0') {
    iVar3 = 100;
    pcVar6 = "Link";
    pcVar4 = (char *)FUN_00acdb9e(0xe52018);
    FUN_0097df60(pcVar4,pcVar6,iVar3);
    s___AVCStatSeekie_TM___00e52000[0x15] = '\0';
  }
  *(undefined4 *)((int)this + 0x90) = 0x42c80000;
  *(undefined4 *)((int)this + 0x94) = 0;
  puVar5 = FUN_00598e50(*(void **)((int)this + 0x88),local_18);
  *(undefined4 *)((int)this + 0x9c) = *puVar5;
  *(undefined4 *)((int)this + 0xa0) = puVar5[1];
  *(undefined4 *)((int)this + 0xa4) = puVar5[2];
  puVar5 = FUN_00598e50(*(void **)((int)this + 200),local_18);
  *(undefined4 *)((int)this + 0xa8) = *puVar5;
  *(undefined4 *)((int)this + 0xac) = puVar5[1];
  *(undefined4 *)((int)this + 0xb0) = puVar5[2];
  FUN_005071a0((int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00507fe0 @ 00507fe0 ////

void __fastcall FUN_00507fe0(undefined4 *param_1)

{
  uint *puVar1;
  
  *param_1 = &PTR_FUN_00d2121c;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (((param_1[0x23] != 0) && (DAT_0104bc60 != 0)) && (DAT_0104bc60 != -0x78)) {
    puVar1 = (uint *)(param_1[0x23] + 0x30);
    *puVar1 = *puVar1 | 0x100;
    param_1[0x23] = 0;
  }
  param_1[0x2d] = &PTR_FUN_00d16954;
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
  param_1[0x1d] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1f] = param_1[0x1e];
  }
  if (param_1[0x1e] != 0) {
    *(undefined4 *)(param_1[0x1e] + 4) = param_1[0x1f];
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1f] = param_1[0x1e];
  }
  if (param_1[0x1e] != 0) {
    *(undefined4 *)(param_1[0x1e] + 4) = param_1[0x1f];
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_00508110 @ 00508110 ////

void __thiscall FUN_00508110(void *this,int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac54b;
  local_c = ExceptionList;
  if ((-1 < param_2) && (param_2 < 7)) {
    piVar1 = (int *)(DAT_0104bc60 + 0x78 + param_2 * 4);
    ExceptionList = &local_c;
    uVar2 = FUN_00995d50(*piVar1);
    if ((-1 < (int)uVar2) && (iVar3 = uVar2 * 0x34 + *(int *)(*piVar1 + 0x20), iVar3 != 0)) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) & 0xfffffeff;
      this_00 = operator_new(0xcc);
      local_4 = 0;
      if (this_00 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_00507e40(this_00,*(int *)((int)this + 0x78),param_1,iVar3,param_3);
      }
      piVar5 = puVar4 + 0x19;
      piVar1 = (int *)((int)this + 0xa0);
      puVar4[0x1a] = piVar1;
      *piVar5 = *piVar1;
      *(int **)(*piVar1 + 4) = piVar5;
      *piVar1 = (int)piVar5;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005081d0 @ 005081d0 ////

undefined4 * __fastcall FUN_005081d0(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  char *_Source;
  uint _Count;
  size_t sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *local_90;
  uint local_8c;
  uint local_88;
  char local_84 [20];
  undefined4 *local_70;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac594;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(param_1);
  local_6c = local_60;
  iVar8 = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00d211e4;
  *(undefined1 *)(param_1 + 0x18) = 0;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"ui/relate_",10);
  local_68 = 10;
  local_6c[10] = '\0';
  local_90 = local_84;
  local_84[0] = '\0';
  local_8c = 0;
  local_88 = 0x14;
  local_4 = CONCAT31(local_4._1_3_,2);
  piVar10 = param_1 + 0x1e;
  do {
    _Count = local_68;
    _Source = local_6c;
    if (local_88 <= local_68) {
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      local_88 = local_68 + 0x20 & 0xffffffe0;
      local_90 = _malloc(local_88);
    }
    _strncpy(local_90,_Source,_Count);
    iVar8 = iVar8 + 1;
    local_8c = _Count;
    local_90[_Count] = '\0';
    sVar3 = _sprintf(local_4c,(char *)&param_2_00d1b93c,iVar8);
    FUN_004073f0(&local_90,local_4c,sVar3);
    FUN_004073f0(&local_90,".dds",4);
    local_70 = operator_new(0x30);
    local_4._0_1_ = 3;
    if (local_70 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_00996b20(local_70,0x100,'\0');
    }
    local_4._0_1_ = 2;
    *piVar10 = (int)puVar4;
    local_70 = operator_new(0x24);
    local_4._0_1_ = 4;
    if (local_70 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_009910f0(local_70);
    }
    *(undefined4 *)(*piVar10 + 0x18) = uVar5;
    *(undefined1 *)(*(int *)(*piVar10 + 0x18) + 0xc) = 6;
    local_4 = CONCAT31(local_4._1_3_,2);
    pvVar6 = FUN_0099bb50(local_90,0,0,0,'\0');
    if (*(void **)((int)*(void **)(*piVar10 + 0x18) + 0x18) != pvVar6) {
      Engine_SetResourceReference(*(void **)(*piVar10 + 0x18),(int)pvVar6);
    }
    if (pvVar6 != (void *)0x0) {
      FUN_0099b400(pvVar6);
    }
    puVar1 = (uint *)(*(int *)(*piVar10 + 0x18) + 0x10);
    *puVar1 = *puVar1 & 0xbfffffff;
    FUN_0099a220((void *)*piVar10,1);
    iVar2 = *piVar10;
    if ((*(int *)(iVar2 + 0x20) != 0) && (iVar7 = 0, *(short *)(iVar2 + 0x1c) != 0)) {
      iVar9 = 0;
      do {
        *(uint *)(*(int *)(iVar2 + 0x20) + 0x30 + iVar9) =
             *(uint *)(*(int *)(iVar2 + 0x20) + 0x30 + iVar9) | 0x100;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 0x34;
      } while (iVar7 < (int)(uint)*(ushort *)(iVar2 + 0x1c));
    }
    piVar10 = piVar10 + 1;
  } while (iVar8 < 7);
  if (local_88 < 0x15) {
    if (local_64 < 0x15) {
      ExceptionList = local_c;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_90);
}


//// FUNCTION FUN_00508450 @ 00508450 ////

undefined4 * __thiscall FUN_00508450(void *this,byte param_1)

{
  FUN_00507fe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00508470 @ 00508470 ////

void FUN_00508470(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac5ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x94);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005081d0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104bc4c[1])();
  DAT_0104bc60 = puVar2;
  (*(code *)*DAT_0104bc4c)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005084f0 @ 005084f0 ////

undefined4 __thiscall FUN_005084f0(void *this,float param_1)

{
  float fVar1;
  void *pvVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  float fVar7;
  
  fVar1 = param_1;
  fVar7 = param_1;
  pvVar2 = (void *)FUN_005873c0(*(int *)((int)this + 0x78));
  pvVar2 = (void *)FUN_0042e770(pvVar2,(int)fVar7);
  pfVar3 = (float *)FUN_0042b030(pvVar2,&param_1);
  param_1 = *pfVar3;
  iVar4 = FUN_005eba90(param_1);
  param_1 = ABS(param_1 - 0.5) + 0.5;
  uVar6 = FUN_00acd42c();
  uVar5 = (undefined4)((ulonglong)*(uint *)((int)this + 0xd8) / (uVar6 & 0xffffffff));
  if ((int)((ulonglong)*(uint *)((int)this + 0xd8) % (uVar6 & 0xffffffff)) == 0) {
    uVar5 = FUN_00508110(this,(int)fVar1,iVar4,param_1);
  }
  return uVar5;
}


//// FUNCTION FUN_00508580 @ 00508580 ////

void __fastcall FUN_00508580(void *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined4 local_18 [3];
  undefined4 local_c [3];
  
  *(int *)((int)param_1 + 0xd8) = *(int *)((int)param_1 + 0xd8) + 1;
  if (*(int *)((int)param_1 + 0x78) != 0) {
    if ((DAT_0104d524 != (int *)0x0) &&
       (pvVar3 = (void *)FUN_00ace790(DAT_0104d524,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                                      &TM::CStar::RTTI_Type_Descriptor,0), pvVar3 != (void *)0x0)) {
      iVar4 = FUN_005773c0((int)pvVar3);
      iVar5 = GetPlayerStudio();
      if (iVar4 == iVar5) {
        if (pvVar3 != *(void **)((int)param_1 + 0x78)) {
          FUN_00598e50(*(void **)((int)param_1 + 0x78),local_c);
          FUN_00598e50(pvVar3,local_18);
          fVar9 = (float10)FUN_00412f50();
          if (fVar9 < (float10)400.0 == (fVar9 == (float10)400.0)) {
            return;
          }
          FUN_005084f0(param_1,(float)pvVar3);
          (**(code **)(**(int **)((int)param_1 + 0x78) + 0x188))(pvVar3);
          return;
        }
        puVar8 = DAT_0104bc6c;
        if (DAT_0104bc6c == &DAT_0104bc78) {
          return;
        }
        do {
          if ((void *)puVar8[2] != param_1) {
            pvVar3 = *(void **)((int)puVar8[2] + 0x78);
            pfVar6 = (float *)FUN_00598e50(*(void **)((int)param_1 + 0x78),local_18);
            pfVar7 = (float *)FUN_00598e50(pvVar3,local_c);
            fVar2 = (*pfVar7 - *pfVar6) * (*pfVar7 - *pfVar6) +
                    (pfVar7[1] - pfVar6[1]) * (pfVar7[1] - pfVar6[1]) +
                    (pfVar7[2] - pfVar6[2]) * (pfVar7[2] - pfVar6[2]);
            if (fVar2 < 400.0 != (fVar2 == 400.0)) {
              FUN_005084f0(param_1,*(float *)(puVar8[2] + 0x78));
            }
          }
          puVar1 = puVar8 + 1;
          puVar8 = (undefined4 *)*puVar1;
        } while ((undefined4 *)*puVar1 != &DAT_0104bc78);
        return;
      }
    }
    iVar4 = *(int *)((int)param_1 + 0xd4);
    if ((iVar4 != 0) && (iVar4 != *(int *)((int)param_1 + 0x78))) {
      iVar4 = FUN_005773c0(iVar4);
      iVar5 = GetPlayerStudio();
      if (iVar4 == iVar5) {
        FUN_005084f0(param_1,*(float *)((int)param_1 + 0xd4));
        (**(code **)(**(int **)((int)param_1 + 0x78) + 0x188))(*(undefined4 *)((int)param_1 + 0xd4))
        ;
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00508710 @ 00508710 ////

void __fastcall FUN_00508710(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d2124c;
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


//// FUNCTION FUN_00508760 @ 00508760 ////

void __fastcall FUN_00508760(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d21258;
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


//// FUNCTION FUN_005087b0 @ 005087b0 ////

undefined4 * __thiscall FUN_005087b0(void *this,byte param_1)

{
  FUN_00508710(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005087d0 @ 005087d0 ////

undefined4 * __thiscall FUN_005087d0(void *this,byte param_1)

{
  FUN_00508760(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005087f0 @ 005087f0 ////

void __fastcall FUN_005087f0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cac5fa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d21264;
  local_4 = 4;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if ((undefined4 *)param_1[0x25] != param_1 + 0x28) {
    do {
      piVar1 = (int *)param_1[0x25];
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
    } while ((undefined4 *)param_1[0x25] != param_1 + 0x28);
  }
  param_1[0x30] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x32] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x32] = param_1[0x31];
  }
  if (param_1[0x31] != 0) {
    *(undefined4 *)(param_1[0x31] + 4) = param_1[0x32];
  }
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  if ((undefined4 *)param_1[0x32] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x32] = param_1[0x31];
  }
  if (param_1[0x31] != 0) {
    *(undefined4 *)(param_1[0x31] + 4) = param_1[0x32];
  }
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_00508710(param_1 + 0x23);
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x19] = &PTR_FUN_00d16954;
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


//// FUNCTION FUN_005089b0 @ 005089b0 ////

undefined4 * __thiscall FUN_005089b0(void *this,byte param_1)

{
  FUN_005087f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005089d0 @ 005089d0 ////

void __fastcall FUN_005089d0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d2124c;
  return;
}


//// FUNCTION FUN_00508a30 @ 00508a30 ////

void __fastcall FUN_00508a30(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d21258;
  return;
}


//// FUNCTION FUN_00508a90 @ 00508a90 ////

undefined4 * __thiscall FUN_00508a90(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac6a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053c420(this);
  *(undefined ***)this = &PTR_FUN_00d21264;
  piVar1 = (int *)((int)this + 0x68);
  *(undefined4 *)((int)this + 0x70) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 **)((int)this + 0x70) = (undefined4 *)((int)this + 100);
  *(undefined4 *)((int)this + 100) = &PTR_FUN_00d16954;
  *(int *)((int)this + 0x78) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x6c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  puVar3 = (undefined4 *)((int)this + 0xa0);
  *(undefined4 *)((int)this + 0xa8) = 0;
  *puVar3 = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined ***)((int)this + 0x8c) = &PTR_LAB_00d2124c;
  *(undefined4 **)((int)this + 0x94) = puVar3;
  *puVar3 = (undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 **)((int)this + 0xcc) = (undefined4 *)((int)this + 0xc0);
  *(undefined4 *)((int)this + 0xc0) = &PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0xd4) = 0;
  local_4 = 6;
  *(void **)((int)this + 0x84) = this;
  FUN_00acdb9e(0xe520b0);
  iVar4 = FUN_0097dda0();
  *(int *)((int)this + 0x88) = iVar4;
  if (s___AVCStatSeeker_TM___00e52098[0x15] != '\0') {
    iVar4 = 0x7c;
    pcVar7 = "Link";
    pcVar5 = (char *)FUN_00acdb9e(0xe520b0);
    FUN_0097df60(pcVar5,pcVar7,iVar4);
    s___AVCStatSeeker_TM___00e52098[0x15] = '\0';
  }
  *(undefined1 *)((int)this + 0x60) = 0;
  uVar6 = (**(code **)(**(int **)((int)this + 0x78) + 0x80))();
  *(undefined4 *)((int)this + 0xd8) = uVar6;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00508bf0 @ 00508bf0 ////

void FUN_00508bf0(int param_1)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac6bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0xdc);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00508a90(this,param_1);
  }
  piVar1 = puVar2 + 0x1f;
  puVar2[0x20] = &DAT_0104bc78;
  *piVar1 = (int)DAT_0104bc78;
  *(int **)((int)DAT_0104bc78 + 4) = piVar1;
  local_4 = 0xffffffff;
  DAT_0104bc78 = piVar1;
                    /* WARNING: Subroutine does not return */
  _free(DAT_0104bc44);
}


//// FUNCTION FUN_00508cf0 @ 00508cf0 ////

undefined4 * __thiscall FUN_00508cf0(void *this,undefined4 param_1)

{
  FUN_0040a070(this);
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined ***)this = &PTR_FUN_00d21284;
  return this;
}


//// FUNCTION FUN_00508d10 @ 00508d10 ////

undefined4 * __thiscall FUN_00508d10(void *this,byte param_1)

{
  thunk_FUN_00526bb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00508d30 @ 00508d30 ////

undefined4 * __fastcall FUN_00508d30(undefined4 *param_1)

{
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d21284;
  param_1[0xe] = 5;
  return param_1;
}


//// FUNCTION FUN_00508d50 @ 00508d50 ////

void FUN_00508d50(void)

{
  return;
}


//// FUNCTION FUN_00508d60 @ 00508d60 ////

void FUN_00508d60(void)

{
  return;
}


//// FUNCTION FUN_00508e50 @ 00508e50 ////

void __fastcall FUN_00508e50(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x98) + 0x140))();
  if (2.0 <= *(float *)(param_1 + 0xbc)) {
    fVar2 = (float10)*(float *)(param_1 + 0x80) + (float10)*(float *)(param_1 + 0x7c);
    *(float *)(param_1 + 0x7c) = (float)fVar2;
    if (fVar1 < fVar2) {
      *(float *)(param_1 + 0x7c) = (float)fVar1;
      return;
    }
  }
  else {
    fVar1 = (float10)*(float *)(param_1 + 0xbc) * (float10)0.5 * (fVar1 - (float10)0.5 * fVar1) +
            (float10)0.5 * fVar1;
    *(float *)(param_1 + 0x7c) = (float)fVar1;
    if ((float10)*(float *)(param_1 + 0xbc) < fVar1) {
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xbc);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00508ed0 @ 00508ed0 ////

void __thiscall
FUN_00508ed0(void *this,float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = param_2 - *(float *)((int)this + 0xc0);
  fVar2 = param_3 - *(float *)((int)this + 0xc4);
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + param_4 * param_4);
  if (fVar1 < 1.5) {
    local_4 = param_4;
    fVar1 = (1.5 - fVar1) * 0.6666667;
    local_c = param_2 - *(float *)((int)this + 0xc0);
    local_8 = param_3 - *(float *)((int)this + 0xc4);
    FUN_009840b0(&param_2,&local_c);
    FUN_00412c90(&param_2);
    fVar4 = (float10)fpatan((float10)param_3,(float10)param_2);
    fVar4 = FUN_004012c0((float)(fVar4 + (float10)3.1415927));
    fVar3 = (float10)fcos(fVar4);
    param_4 = 0.0;
    fVar4 = (float10)fsin((float10)(float)fVar4);
    param_2 = (float)fVar3;
    param_3 = (float)fVar4;
    FUN_00412e20(&param_2);
    *param_1 = param_2 * fVar1 * param_5;
    param_1[1] = param_3 * fVar1 * param_5;
    param_1[2] = param_4 * fVar1 * param_5;
    return;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}


//// FUNCTION FUN_00509030 @ 00509030 ////

void __fastcall FUN_00509030(int param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fStack_18;
  float fStack_14;
  undefined1 local_c [12];
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x98) + 0x34))(local_c);
  FUN_009840b0(&fStack_18,puVar1);
  fStack_14 = *(float *)(param_1 + 0xb0) - fStack_14;
  fStack_18 = *(float *)(param_1 + 0xac) - fStack_18;
  FUN_00412c90(&fStack_18);
  fVar3 = (float10)fpatan((float10)fStack_14,(float10)fStack_18);
  fVar3 = FUN_004012c0((float)fVar3);
  fVar4 = (float)fVar3;
  fStack_18 = (float)(*(int **)(param_1 + 0x98))[0x31];
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x98) + 0x140))();
  fVar3 = (float10)0.5 - ((float10)*(float *)(param_1 + 0x7c) / fVar3) * (float10)0.5;
  fVar5 = (float)fVar3;
  if (fVar3 < (float10)0.2) {
    fVar5 = 0.2;
  }
  fVar3 = FUN_004012c0(fStack_18);
  pfVar2 = FUN_00429400(&fStack_18,(float)fVar3,fVar4,fVar5);
  *(float *)(param_1 + 0xb8) = *pfVar2;
  fVar3 = (float10)fcos((float10)*(float *)(param_1 + 0xb8));
  pfVar2 = (float *)(param_1 + 0x9c);
  fStack_18 = (float)fVar3;
  fVar3 = (float10)fsin((float10)*(float *)(param_1 + 0xb8));
  *pfVar2 = fStack_18;
  fStack_14 = (float)fVar3;
  *(float *)(param_1 + 0xa0) = fStack_14;
  FUN_00412c90(pfVar2);
  *pfVar2 = *(float *)(param_1 + 0x7c) * *pfVar2;
  *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0xa0);
  return;
}


//// FUNCTION FUN_00509180 @ 00509180 ////

void __fastcall FUN_00509180(void *param_1)

{
  void *pvVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float10 fVar8;
  float fVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  float fVar12;
  float fStack_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float local_14 [4];
  
  *(undefined4 *)((int)param_1 + 0xd8) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  *(undefined4 *)((int)param_1 + 0xa8) = 0;
  local_28 = 0.0;
  local_24 = 0.0;
  puVar6 = DAT_0104bca0;
  if (DAT_0104bca0 != &DAT_0104bcac) {
    do {
      pvVar1 = (void *)puVar6[2];
      if (pvVar1 != param_1) {
        puVar4 = (undefined4 *)
                 FUN_00508ed0(param_1,local_14,*(float *)((int)pvVar1 + 0xc0),
                              *(float *)((int)pvVar1 + 0xc4),0.0,0.3);
        FUN_009840b0(&local_38,puVar4);
        *(float *)((int)param_1 + 0xa4) = local_38 + *(float *)((int)param_1 + 0xa4);
        *(float *)((int)param_1 + 0xa8) = local_34 + *(float *)((int)param_1 + 0xa8);
      }
      puVar4 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar4;
    } while ((undefined4 *)*puVar4 != &DAT_0104bcac);
  }
  if ((*(int **)((int)param_1 + 0x98))[0x131] == 8) {
    pTVar11 = &TM::CStaff::RTTI_Type_Descriptor;
    pTVar10 = &TM::TMCharacter::RTTI_Type_Descriptor;
    fVar9 = 0.0;
    iVar5 = FUN_00ace790(*(int **)((int)param_1 + 0x98),0,&TM::TMCharacter::RTTI_Type_Descriptor,
                         &TM::CStaff::RTTI_Type_Descriptor,0);
    if (((*(int *)(iVar5 + 0x814) == 0xd) && (*(int *)(iVar5 + 0x7b8) != 0)) &&
       (piVar2 = *(int **)(*(int *)(iVar5 + 0x7b8) + 0x84), piVar2 != (int *)0x0)) {
      fVar12 = 1.0;
      (**(code **)(*piVar2 + 0x34))(&stack0xffffffa8);
      puVar6 = (undefined4 *)
               FUN_00508ed0(param_1,local_14,fVar9,(float)pTVar10,(float)pTVar11,fVar12);
      FUN_009840b0(&local_38,puVar6);
      *(float *)((int)param_1 + 0xa4) = local_38 + *(float *)((int)param_1 + 0xa4);
      *(float *)((int)param_1 + 0xa8) = local_34 + *(float *)((int)param_1 + 0xa8);
    }
  }
  puVar6 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0x98) + 0x34))();
  FUN_009840b0(&fStack_2c,puVar6);
  local_24 = 0.0;
  fStack_20 = 0.0;
  fStack_1c = 0.0;
  fVar9 = 0.0;
  fVar8 = FUN_0046bdd0();
  fStack_3c = (float)fVar8;
  local_34 = fStack_2c - 4.0;
  if (local_34 < fStack_2c + 4.0) {
    do {
      fStack_30 = local_28 - 4.0;
      if (fStack_30 < local_28 + 4.0) {
        do {
          cVar3 = FUN_0046d260(&local_34,1);
          if (cVar3 == '\0') {
            pfVar7 = (float *)FUN_00508ed0(param_1,&fStack_18,local_34,fStack_30,0.0,2.0);
            local_24 = local_24 + *pfVar7;
            fStack_20 = fStack_20 + pfVar7[1];
            fStack_1c = fStack_1c + pfVar7[2];
            if (((local_24 != 0.0) || (fStack_20 != 0.0)) || (fStack_1c != 0.0)) {
              fVar9 = fVar9 + 1.0;
            }
          }
          fStack_30 = fStack_30 + fStack_3c;
        } while (fStack_30 < local_28 + 4.0);
      }
      local_34 = local_34 + fStack_3c;
    } while (local_34 < fStack_2c + 4.0);
    if (0.0 < fVar9) {
      fVar9 = 1.0 / fVar9;
      local_24 = local_24 * fVar9;
      fStack_20 = fStack_20 * fVar9;
      fStack_1c = fStack_1c * fVar9;
      FUN_009840b0(&fStack_3c,&local_24);
      *(float *)((int)param_1 + 0xa4) = fStack_3c + *(float *)((int)param_1 + 0xa4);
      *(float *)((int)param_1 + 0xa8) = local_38 + *(float *)((int)param_1 + 0xa8);
    }
  }
  fVar8 = (float10)(**(code **)(**(int **)((int)param_1 + 0x98) + 0x140))();
  fVar8 = (float10)*(float *)((int)param_1 + 0x7c) / fVar8;
  *(float *)((int)param_1 + 0xa4) = (float)(fVar8 * (float10)*(float *)((int)param_1 + 0xa4));
  *(float *)((int)param_1 + 0xa8) = (float)(fVar8 * (float10)*(float *)((int)param_1 + 0xa8));
  return;
}


//// FUNCTION FUN_005094d0 @ 005094d0 ////

undefined4 * __thiscall FUN_005094d0(void *this,undefined4 param_1)

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
  puStack_8 = &LAB_00cac6f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(this);
  local_4 = 0;
  FUN_004aaea0((undefined4 *)((int)this + 0x78));
  *(undefined4 *)((int)this + 0x78) = &PTR_FUN_00d212c0;
  piVar1 = (int *)((int)this + 0x84);
  *(undefined ***)this = &PTR_FUN_00d21298;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(int **)((int)this + 0x90) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d165ac;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  piVar2 = (int *)((int)this + 200);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *piVar2 = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x98) = param_1;
  (**(code **)*piVar1)();
  *(void **)((int)this + 0xd0) = this;
  FUN_00acdb9e(0xe52134);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0xd4) = iVar3;
  if (s___AVCSteeringModule_TM___00e52118[0x19] != '\0') {
    iVar3 = 200;
    pcVar5 = "Link";
    pcVar4 = (char *)FUN_00acdb9e(0xe52134);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    s___AVCSteeringModule_TM___00e52118[0x19] = '\0';
  }
  *(int ***)((int)this + 0xcc) = &DAT_0104bcac;
  *piVar2 = (int)DAT_0104bcac;
  *(int **)((int)DAT_0104bcac + 4) = piVar2;
  DAT_0104bcac = piVar2;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00509660 @ 00509660 ////

/* WARNING: Removing unreachable block (ram,0x005096a7) */

void __fastcall FUN_00509660(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d21298;
  param_1[0x1e] = &PTR_FUN_00d212c0;
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x33] = param_1[0x32];
  }
  if (param_1[0x32] != 0) {
    *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  if (param_1[0x32] != 0) {
    *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x21] = &PTR_FUN_00d165ac;
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
  FUN_0053ddb0(param_1);
  return;
}


//// FUNCTION FUN_00509750 @ 00509750 ////

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00509750(int param_1)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float *unaff_retaddr;
  float *pfVar6;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  float afStack_1c [2];
  undefined1 auStack_14 [20];
  
  pfVar6 = afStack_1c + 1;
  pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0x20) + 0x34))(pfVar6);
  *(float *)(param_1 + 0x44) =
       SQRT((*unaff_retaddr - *pfVar4) * (*unaff_retaddr - *pfVar4) +
            (unaff_retaddr[1] - pfVar4[1]) * (unaff_retaddr[1] - pfVar4[1]) +
            (unaff_retaddr[2] - pfVar4[2]) * (unaff_retaddr[2] - pfVar4[2]));
  puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x20) + 0x34))(afStack_1c);
  FUN_009840b0(&stack0xffffffc8,puVar5);
  *(undefined4 *)(param_1 + 0x4c) = unaff_ESI;
  *(undefined4 *)(param_1 + 0x48) = unaff_EDI;
  *(float **)(param_1 + 0x3c) = unaff_retaddr;
  FUN_009840b0(&stack0xffffffc8,unaff_retaddr);
  *(undefined4 *)(param_1 + 0x38) = unaff_ESI;
  pvVar1 = (void *)(param_1 + -0x78);
  *(undefined4 *)(param_1 + 0x34) = unaff_EDI;
  FUN_00508e50((int)pvVar1);
  FUN_00509030((int)pvVar1);
  FUN_00509180(pvVar1);
  if ((*(float *)(param_1 + 4) * *(float *)(param_1 + 4) <= *(float *)(param_1 + 0x44)) &&
     (0.05 <= *(float *)(param_1 + 0x44))) {
    fVar2 = *(float *)(param_1 + 0x2c);
    fVar3 = *(float *)(param_1 + 0x24);
    pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0x20) + 0x34))(auStack_14);
    afStack_1c[0] = pfVar4[2];
    fStack_24 = (float)pfVar6 + *pfVar4 + fStack_30;
    fStack_20 = fVar3 + pfVar4[1] + fVar2;
    (**(code **)(**(int **)(param_1 + 0x20) + 0x28))(&fStack_24,param_1 + 0x40);
    return;
  }
  fStack_20 = *(float *)(param_1 + 0x34);
  afStack_1c[0] = *(float *)(param_1 + 0x38);
  afStack_1c[1] = 0.0;
  (**(code **)(**(int **)(param_1 + 0x20) + 0x28))(&fStack_20,param_1 + 0x40);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


//// FUNCTION FUN_005098c0 @ 005098c0 ////

undefined4 * __thiscall FUN_005098c0(void *this,byte param_1)

{
  FUN_00509660(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005098e0 @ 005098e0 ////

void __fastcall FUN_005098e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d212cc;
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


//// FUNCTION FUN_00509930 @ 00509930 ////

undefined4 * __thiscall FUN_00509930(void *this,byte param_1)

{
  FUN_005098e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00509950 @ 00509950 ////

void __fastcall FUN_00509950(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d212cc;
  return;
}


//// FUNCTION FUN_005099d0 @ 005099d0 ////

void __fastcall FUN_005099d0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00509aa0 @ 00509aa0 ////

undefined4 __fastcall FUN_00509aa0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x134);
}


//// FUNCTION FUN_00509ae0 @ 00509ae0 ////

int * __thiscall FUN_00509ae0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00509bb0 @ 00509bb0 ////

int * __thiscall FUN_00509bb0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0050a000 @ 0050a000 ////

void __thiscall FUN_0050a000(void *this,int *param_1)

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


//// FUNCTION FUN_0050a0a0 @ 0050a0a0 ////

void __thiscall FUN_0050a0a0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x41) == '\0') {
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


//// FUNCTION FUN_0050a240 @ 0050a240 ////

void __cdecl FUN_0050a240(int param_1)

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


//// FUNCTION FUN_0050a260 @ 0050a260 ////

void __cdecl FUN_0050a260(int *param_1)

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


//// FUNCTION FUN_0050a290 @ 0050a290 ////

void __cdecl FUN_0050a290(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x41);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x41);
  }
  return;
}


//// FUNCTION FUN_0050a2b0 @ 0050a2b0 ////

void __cdecl FUN_0050a2b0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x41);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x41);
  }
  return;
}


//// FUNCTION FUN_0050a2e0 @ 0050a2e0 ////

void __fastcall FUN_0050a2e0(int *param_1)

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


//// FUNCTION FUN_0050a340 @ 0050a340 ////

void __fastcall FUN_0050a340(int *param_1)

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


//// FUNCTION FUN_0050a3a0 @ 0050a3a0 ////

void __fastcall FUN_0050a3a0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x41) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x41) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x41);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x41);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x41) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x41) == '\0');
    if (*(char *)((int)piVar4 + 0x41) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_0050a400 @ 0050a400 ////

void __fastcall FUN_0050a400(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x41) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x41) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x41);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x41);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x41);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x41);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_0050a4d0 @ 0050a4d0 ////

void __cdecl FUN_0050a4d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0050a510 @ 0050a510 ////

void __cdecl FUN_0050a510(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0050a760 @ 0050a760 ////

void __thiscall FUN_0050a760(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  
  (**(code **)(*param_1 + 0x1a4))(this);
  if (param_1[0x131] == 0) {
    piVar2 = param_1 + 0x1e1;
    piVar1 = (int *)((int)this + 0xa0);
    param_1[0x1e2] = (int)piVar1;
    *piVar2 = *piVar1;
    *(int **)(*piVar1 + 4) = piVar2;
    *piVar1 = (int)piVar2;
    piVar2 = (int *)FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x284))();
      this_00 = (void *)FUN_007fd5d0();
      FUN_007fe860(this_00,(int)piVar2);
    }
  }
  return;
}


//// FUNCTION FUN_0050a7d0 @ 0050a7d0 ////

void __thiscall FUN_0050a7d0(void *this,int *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_005773c0((int)param_1);
  if (pvVar1 != this) {
    if ((int *)param_1[0x1e2] != (int *)0x0) {
      *(int *)param_1[0x1e2] = param_1[0x1e1];
    }
    if (param_1[0x1e1] != 0) {
      *(int *)(param_1[0x1e1] + 4) = param_1[0x1e2];
    }
    param_1[0x1e1] = 0;
    param_1[0x1e2] = 0;
    (**(code **)(*(int *)this + 0xa0))(param_1);
    FUN_0050a760(this,param_1);
  }
  return;
}


//// FUNCTION GetPlayerStudio @ 0050a830 ////

undefined4 GetPlayerStudio(void)

{
  return DAT_0104bce4;
}


//// FUNCTION FUN_0050a860 @ 0050a860 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050a860(void *this,float *param_1)

{
  float *pfVar1;
  float10 fVar2;
  float10 fVar3;
  void *local_4;
  
  local_4 = this;
  pfVar1 = (float *)FUN_0043b620(&DAT_00e4fa4c,(float *)&local_4,(float *)((int)this + 0x13c));
  fVar2 = FUN_0043b710(pfVar1);
  fVar3 = (float10)1.4426950408889634 * -((float10)_DAT_00e52188 * fVar2);
  fVar2 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(fVar3 - fVar2);
  fVar2 = (float10)fscale((float10)1 + fVar3,fVar2);
  fVar2 = fVar2 * (float10)*(float *)((int)this + 0x138);
  if (fVar2 < (float10)0.0) {
    *param_1 = 0.0;
    return;
  }
  if ((float10)1.0 < fVar2) {
    fVar2 = (float10)1.0;
  }
  *param_1 = (float)fVar2;
  return;
}


//// FUNCTION FUN_0050a9e0 @ 0050a9e0 ////

void __thiscall FUN_0050a9e0(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint local_18;
  int local_14;
  undefined4 uStack_10;
  
  uVar1 = *(uint *)((int)this + 0x180);
  *(uint *)((int)this + 0x180) = uVar1 + param_1;
  *(uint *)((int)this + 0x184) = *(int *)((int)this + 0x184) + param_2 + (uint)CARRY4(uVar1,param_1)
  ;
  uStack_10 = 0x50aa0d;
  FUN_00471b10((longlong *)((int)this + 0x180));
  uStack_10 = 0;
  local_18 = param_1;
  local_14 = param_2;
  FUN_00471b10((longlong *)&local_18);
  (**(code **)(*(int *)this + 0x28))();
  return;
}


//// FUNCTION FUN_0050aa30 @ 0050aa30 ////

void __thiscall FUN_0050aa30(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint local_18;
  int local_14;
  undefined4 uStack_10;
  
  uVar1 = *(uint *)((int)this + 0x170);
  *(uint *)((int)this + 0x170) = uVar1 + param_1;
  *(uint *)((int)this + 0x174) = *(int *)((int)this + 0x174) + param_2 + (uint)CARRY4(uVar1,param_1)
  ;
  uStack_10 = 0x50aa5d;
  FUN_00471b10((longlong *)((int)this + 0x170));
  uStack_10 = 1;
  local_18 = param_1;
  local_14 = param_2;
  FUN_00471b10((longlong *)&local_18);
  (**(code **)(*(int *)this + 0x28))();
  return;
}


//// FUNCTION FUN_0050aa80 @ 0050aa80 ////

void __thiscall FUN_0050aa80(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint local_18;
  int local_14;
  undefined4 uStack_10;
  
  uVar1 = *(uint *)((int)this + 0x178);
  *(uint *)((int)this + 0x178) = uVar1 + param_1;
  *(uint *)((int)this + 0x17c) = *(int *)((int)this + 0x17c) + param_2 + (uint)CARRY4(uVar1,param_1)
  ;
  uStack_10 = 0x50aaad;
  FUN_00471b10((longlong *)((int)this + 0x178));
  uStack_10 = 4;
  local_18 = param_1;
  local_14 = param_2;
  FUN_00471b10((longlong *)&local_18);
  (**(code **)(*(int *)this + 0x28))();
  return;
}


//// FUNCTION FUN_0050ab40 @ 0050ab40 ////

int __fastcall FUN_0050ab40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x94); iVar1 != param_1 + 0xa0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


//// FUNCTION CStudio_ComputeStarRating @ 0050ab70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CStudio_ComputeStarRating(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 *puVar3;
  float fVar4;
  undefined1 *puStack_10;
  float local_8 [2];
  
  puStack_10 = (undefined1 *)local_8;
  (**(code **)(*param_1 + 0x80))();
  FUN_0050a860(param_1,local_8);
  pfVar2 = local_8;
  pfVar1 = (float *)(**(code **)(*param_1 + 0x90))();
  puStack_10 = (undefined1 *)(_DAT_00e521b4 * *pfVar1 + (float)puStack_10);
  if (0.0 <= (float)puStack_10) {
    if (1.0 < (float)puStack_10) {
      puStack_10 = (undefined1 *)0x3f800000;
    }
  }
  else {
    puStack_10 = (undefined1 *)0x0;
  }
  puVar3 = &stack0xfffffff4;
  pfVar1 = (float *)(**(code **)(*param_1 + 0x94))();
  fVar4 = _DAT_00e521b8 * *pfVar1 + (float)pfVar2;
  if (0.0 <= fVar4) {
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.0;
  }
  pfVar2 = (float *)(**(code **)(*param_1 + 0x98))(&puStack_10,puVar3,fVar4);
  fVar4 = _DAT_00e521bc * *pfVar2 + (float)puVar3;
  if (fVar4 < 0.0) {
    param_1[0x4c] = 0;
    return;
  }
  if (1.0 < fVar4) {
    fVar4 = 1.0;
  }
  param_1[0x4c] = (int)fVar4;
  return;
}


//// FUNCTION FUN_0050ad20 @ 0050ad20 ////

undefined4 * __thiscall FUN_0050ad20(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  (**(code **)(*(int *)((int)this + 4) + 4))();
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  (*(code *)**(undefined4 **)((int)this + 4))();
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(param_1 + 9);
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  return this;
}


//// FUNCTION FUN_0050ad80 @ 0050ad80 ////

undefined4 __fastcall FUN_0050ad80(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1e0);
}


//// FUNCTION FUN_0050aef0 @ 0050aef0 ////

void __fastcall FUN_0050aef0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0050af20 @ 0050af20 ////

undefined4 FUN_0050af20(undefined4 *param_1,undefined4 *param_2)

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


//// FUNCTION FUN_0050b040 @ 0050b040 ////

undefined4 * __thiscall FUN_0050b040(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x41) == '\0') {
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
LAB_0050b084:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0050b089;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0050b084;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0050b089:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x41) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_0050b1d0 @ 0050b1d0 ////

void __thiscall FUN_0050b1d0(void *this,int param_1)

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


//// FUNCTION FUN_0050b240 @ 0050b240 ////

void __thiscall FUN_0050b240(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x41) == '\0') {
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


//// FUNCTION FUN_0050b2a0 @ 0050b2a0 ////

int * __fastcall FUN_0050b2a0(int *param_1)

{
  FUN_0050a340(param_1);
  return param_1;
}


//// FUNCTION FUN_0050b2b0 @ 0050b2b0 ////

int * __fastcall FUN_0050b2b0(int *param_1)

{
  FUN_0050a2e0(param_1);
  return param_1;
}


//// FUNCTION FUN_0050b2c0 @ 0050b2c0 ////

int * __fastcall FUN_0050b2c0(int *param_1)

{
  FUN_0050a400(param_1);
  return param_1;
}


//// FUNCTION FUN_0050b2d0 @ 0050b2d0 ////

int * __fastcall FUN_0050b2d0(int *param_1)

{
  FUN_0050a3a0(param_1);
  return param_1;
}


//// FUNCTION FUN_0050b410 @ 0050b410 ////

void __cdecl FUN_0050b410(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0050b440 @ 0050b440 ////

void __cdecl FUN_0050b440(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -4) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined4 *)(param_2 + -4);
  }
  return;
}


//// FUNCTION FUN_0050b470 @ 0050b470 ////

void __fastcall FUN_0050b470(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_0050b510 @ 0050b510 ////

void __cdecl FUN_0050b510(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_0050b560 @ 0050b560 ////

void __cdecl FUN_0050b560(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  float *pfVar3;
  size_t sVar4;
  float10 fVar5;
  float fStack_110;
  undefined1 *local_10c;
  int local_108;
  uint local_104;
  undefined1 local_100 [20];
  char *local_ec;
  undefined4 local_e8;
  uint local_e4;
  char local_e0 [20];
  char *local_cc;
  undefined4 local_c8;
  uint local_c4;
  char local_c0 [20];
  undefined2 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined2 local_a0 [10];
  wchar_t awStack_8c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac74c;
  pvStack_c = ExceptionList;
  local_10c = local_100;
  local_100[0] = 0;
  local_108 = 0;
  local_104 = 0x14;
  ExceptionList = &pvStack_c;
  FUN_004015d0(&local_10c,(char *)*param_1,param_1[1]);
  local_cc = local_c0;
  local_4 = 0;
  local_c0[0] = '\0';
  local_c8 = 0;
  local_c4 = 0x14;
  _strncpy(local_cc,"",0);
  local_c8 = 0;
  *local_cc = '\0';
  local_ec = local_e0;
  local_e0[0] = '\0';
  local_e8 = 0;
  local_e4 = 0x14;
  _strncpy(local_ec,"=",1);
  local_e8 = 1;
  local_ec[1] = '\0';
  local_4._0_1_ = 2;
  FUN_00569860((int *)&local_10c,&local_ec,&local_cc);
  if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  FUN_0056a1d0((int *)&local_10c);
  if (local_108 != 0) {
    fVar5 = FUN_00567d60(&local_10c);
    pvVar1 = DAT_0104bce4;
    if ((float10)0.0 <= fVar5) {
      if (fVar5 <= (float10)1.0) {
        fStack_110 = (float)fVar5;
      }
      else {
        fStack_110 = 1.0;
      }
    }
    else {
      fStack_110 = 0.0;
    }
    FUN_00407070(&fStack_110,fStack_110);
    *(float *)((int)pvVar1 + 0x138) = fStack_110;
    *(undefined4 *)((int)pvVar1 + 0x13c) = DAT_00e4fa4c;
  }
  local_ac = local_a0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 10;
  uVar2 = FUN_00ace02d(L"std_reputation = ");
  FUN_004036d0(&local_ac,L"std_reputation = ",uVar2);
  local_4 = CONCAT31(local_4._1_3_,3);
  pfVar3 = (float *)FUN_0050a860(DAT_0104bce4,&fStack_110);
  sVar4 = _swprintf(awStack_8c,0xd18f84,SUB84((double)*pfVar3,0));
  FUN_0040cae0(&local_ac,awStack_8c,sVar4);
  FUN_00544a20(DAT_0104c8f4,&local_ac);
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
    _free(local_10c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0050b7c0 @ 0050b7c0 ////

void FUN_0050b7c0(void)

{
  uint uVar1;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cac770;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d(L"Removed in favour of http://127.0.0.1:4321/leagues");
  FUN_004036d0(&local_4c,L"Removed in favour of http://127.0.0.1:4321/leagues",uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00544a20(DAT_0104c8f4,&local_4c);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0050b880 @ 0050b880 ////

void __fastcall FUN_0050b880(int *param_1)

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
  puStack_8 = &LAB_00cac788;
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


//// FUNCTION FUN_0050b950 @ 0050b950 ////

void __fastcall FUN_0050b950(int param_1)

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
  puStack_8 = &LAB_00cac848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
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
    DAT_010581d4 = 0x6d;
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
    FUN_0098c580((undefined4 *)(param_1 + 0x128));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x6e;
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
  uVar3 = FUN_0098b490("HassleRate");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xc4),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x6f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("Stars");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x28);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x70;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x5c));
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
  uVar3 = FUN_0098b490("BackCatalogue");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x5c);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x71;
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
  uVar3 = FUN_0098b490("(int&)(Personality)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x124),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x72;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xec));
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
  uVar3 = FUN_0098b490("PLogo");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xec));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x73;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
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
  uVar3 = FUN_0098b490("Scripts");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x90);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x74;
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
  uVar3 = FUN_0098b490("HassleRate");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xc4),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x75;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
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
  uVar3 = FUN_0098b490("LastRelease");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x104),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x76;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
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
  uVar3 = FUN_0098b490("StarProfit");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x10c),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x77;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 10;
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
  uVar3 = FUN_0098b490("TechProfit");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x114),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x78;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xb;
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
  uVar3 = FUN_0098b490("LatestTechnology");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x148));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x79;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xc;
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
  uVar3 = FUN_0098b490("ScriptProfit");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x11c),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x7a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xd;
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
  uVar3 = FUN_0098b490("ReputationLast");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xd4),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x7b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xe;
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
  uVar3 = FUN_0098b490("ReputationTouch");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xd8),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x7c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xf;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x168));
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
  uVar3 = FUN_0098b490("PLeagueTableEntry");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x168));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x7d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x10;
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
  uVar3 = FUN_0098b490("GUID");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xd0),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x7e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x11;
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
  uVar3 = FUN_0098b490("NumberOfMoviesReleased");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x180),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x7f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x12;
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
  uVar3 = FUN_0098b490("NumMSPlayed");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x188),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x80;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x13;
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
  uVar3 = FUN_0098b490("StarRating");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xcc));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Studio.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x81;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x14;
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
  uVar3 = FUN_0098b490("Prestige");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 200));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0050cc00 @ 0050cc00 ////

void __fastcall FUN_0050cc00(int *param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 auStack_10 [4];
  
  (**(code **)(*param_1 + 0x18))();
  if (0 < param_1[0x4a]) {
    param_1[0x4a] = param_1[0x4a] + -1;
  }
  CStudio_ComputeStarRating(param_1);
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  if ((int *)param_1[0x78] != (int *)0x0) {
    iVar1 = *(int *)param_1[0x78];
    (**(code **)(*param_1 + 0x84))(auStack_10);
    (**(code **)(iVar1 + 0x10))();
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  uVar4 = FUN_00990ae0(uVar2,uVar3);
  param_1[0x7b] = param_1[0x7b] + ((int)uVar4 - param_1[0x7a]);
  param_1[0x7a] = (int)uVar4;
  return;
}


//// FUNCTION FUN_0050cc70 @ 0050cc70 ////

void __thiscall FUN_0050cc70(void *this,undefined4 *param_1)

{
  FUN_004036d0((void *)((int)this + 0x18c),(wchar_t *)*param_1,param_1[1]);
  return;
}


//// FUNCTION FUN_0050ccd0 @ 0050ccd0 ////

void __thiscall FUN_0050ccd0(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x1ec))();
  if (iVar1 == 0) {
    iVar1 = FUN_005778f0((int)param_1);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x1a4))();
    }
  }
  this_00 = (void *)FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
  if (this_00 != (void *)0x0) {
    FUN_00589280(this_00,this);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x1d4))();
  FUN_00acd42c();
  FUN_00471b10((longlong *)&stack0xffffffe8);
  (**(code **)(*piVar2 + 4))();
  (**(code **)(*param_1 + 0x200))();
  if (this == DAT_0104bce4) {
    (**(code **)(*param_1 + 0x1a8))(0);
    return;
  }
  if ((int *)param_1[0x1e2] != (int *)0x0) {
    *(int *)param_1[0x1e2] = param_1[0x1e1];
  }
  if (param_1[0x1e1] != 0) {
    *(int *)(param_1[0x1e1] + 4) = param_1[0x1e2];
  }
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  return;
}


//// FUNCTION FUN_0050cf70 @ 0050cf70 ////

int FUN_0050cf70(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar7 = DAT_0104acbc;
  if (DAT_0104acbc != &DAT_0104acc8) {
    do {
      iVar2 = puVar7[2];
      puVar3 = (undefined4 *)FUN_00528450(iVar2);
      pbVar6 = (byte *)*puVar3;
      pbVar4 = (byte *)*param_1;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_0050cfb8:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0050cfbd;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0050cfb8;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0050cfbd:
      if (iVar5 == 0) {
        return iVar2;
      }
      puVar3 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar3;
    } while ((undefined4 *)*puVar3 != &DAT_0104acc8);
  }
  return 0;
}


//// FUNCTION CStudio_GetMoneyRatingComponent @ 0050cfe0 ////

void __fastcall CStudio_GetMoneyRatingComponent(int *param_1)

{
  int iVar1;
  float *unaff_retaddr;
  float fVar2;
  uint uStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  ulonglong uStack_c;
  
  (**(code **)(*param_1 + 0x24))(&local_20);
  fVar2 = -0.2;
  iVar1 = 0;
  while (((int)(&DAT_0104bd44)[iVar1 * 2] <= local_20 &&
         (((int)(&DAT_0104bd44)[iVar1 * 2] < local_20 ||
          ((uint)(&DAT_0104bd40)[iVar1 * 2] <= uStack_24))))) {
    fVar2 = fVar2 + 0.2;
    iVar1 = iVar1 + 1;
    if (5 < iVar1) {
LAB_0050d025:
      if (0.0 <= fVar2) {
        if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
        *unaff_retaddr = fVar2;
        return;
      }
LAB_0050d038:
      *unaff_retaddr = 0.0;
      return;
    }
  }
  if (iVar1 < 1) goto LAB_0050d038;
  iStack_14 = (&DAT_0104bd40)[iVar1 * 2] - (&DAT_0104bd38)[iVar1 * 2];
  iStack_10 = ((&DAT_0104bd44)[iVar1 * 2] - (&DAT_0104bd3c)[iVar1 * 2]) -
              (uint)((uint)(&DAT_0104bd40)[iVar1 * 2] < (uint)(&DAT_0104bd38)[iVar1 * 2]);
  FUN_00471b10((longlong *)&iStack_14);
  iStack_1c = uStack_24 - (&DAT_0104bd38)[iVar1 * 2];
  iStack_18 = (local_20 - (&DAT_0104bd3c)[iVar1 * 2]) -
              (uint)(uStack_24 < (uint)(&DAT_0104bd38)[iVar1 * 2]);
  FUN_00471b10((longlong *)&iStack_1c);
  uStack_c = FUN_00acd42c();
  FUN_00471b10((longlong *)&uStack_c);
  fVar2 = (float)(longlong)uStack_c * 1.1920929e-07 * 0.2 + fVar2;
  goto LAB_0050d025;
}


//// FUNCTION FUN_0050d160 @ 0050d160 ////

void __thiscall FUN_0050d160(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d2149c;
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


//// FUNCTION FUN_0050d1b0 @ 0050d1b0 ////

void __fastcall FUN_0050d1b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d2149c;
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


//// FUNCTION FUN_0050d2c0 @ 0050d2c0 ////

undefined4 * __thiscall FUN_0050d2c0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  *(undefined4 *)((int)this + 0x24) = param_2[1];
  *(undefined4 *)((int)this + 0x28) = param_2[2];
  *(undefined4 *)((int)this + 0x2c) = param_2[3];
  *(undefined4 *)((int)this + 0x30) = param_2[4];
  return this;
}


//// FUNCTION FUN_0050d350 @ 0050d350 ////

int * __fastcall FUN_0050d350(int *param_1)

{
  FUN_0050a340(param_1);
  return param_1;
}


//// FUNCTION FUN_0050d360 @ 0050d360 ////

int * __fastcall FUN_0050d360(int *param_1)

{
  FUN_0050a2e0(param_1);
  return param_1;
}


//// FUNCTION FUN_0050d370 @ 0050d370 ////

int * __fastcall FUN_0050d370(int *param_1)

{
  FUN_0050a400(param_1);
  return param_1;
}


//// FUNCTION FUN_0050d380 @ 0050d380 ////

int * __fastcall FUN_0050d380(int *param_1)

{
  FUN_0050a3a0(param_1);
  return param_1;
}


//// FUNCTION FUN_0050d390 @ 0050d390 ////

void FUN_0050d390(void)

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


//// FUNCTION FUN_0050d3d0 @ 0050d3d0 ////

void FUN_0050d3d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_0050d420 @ 0050d420 ////

void FUN_0050d420(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x44);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x10) = 1;
  *(undefined1 *)((int)puVar1 + 0x41) = 0;
  return;
}


//// FUNCTION FUN_0050d4b0 @ 0050d4b0 ////

void FUN_0050d4b0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_0050d4b0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0050d4f0 @ 0050d4f0 ////

undefined4 * __thiscall FUN_0050d4f0(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  return this;
}


//// FUNCTION FUN_0050d570 @ 0050d570 ////

void * FUN_0050d570(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0050d5a0 @ 0050d5a0 ////

void * __thiscall FUN_0050d5a0(void *this,byte param_1)

{
  FUN_0050b470((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0050d5d0 @ 0050d5d0 ////

void __cdecl FUN_0050d5d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_0050d630 @ 0050d630 ////

int FUN_0050d630(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cac868;
  local_c = ExceptionList;
  iVar3 = 0;
  puVar4 = DAT_0104bcf0;
  ExceptionList = &local_c;
  if (DAT_0104bcf0 != &DAT_0104bcfc) {
    do {
      local_10 = puVar4[2];
      local_18 = &local_24;
      local_20 = 0;
      local_1c = (int *)0x0;
      local_24 = &PTR_FUN_00d1e55c;
      if (local_10 != 0) {
        local_1c = (int *)(local_10 + 0x18);
        local_20 = *local_1c;
        *(int **)(*local_1c + 4) = &local_20;
        *local_1c = (int)&local_20;
      }
      local_4 = 0;
      if ((local_10 != DAT_0104bce4) && ((iVar3 == 0 || (iVar2 = FUN_00990d30(0,3), iVar2 == 0)))) {
        iVar3 = local_10;
      }
      if (local_1c != (int *)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != 0) {
        *(int **)(local_20 + 4) = local_1c;
      }
      puVar1 = puVar4 + 1;
      puVar4 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104bcfc);
  }
  ExceptionList = local_c;
  return iVar3;
}


//// FUNCTION FUN_0050d720 @ 0050d720 ////

void __fastcall FUN_0050d720(int param_1)

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


//// FUNCTION FUN_0050d750 @ 0050d750 ////

undefined4 * FUN_0050d750(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0050d780 @ 0050d780 ////

void __fastcall FUN_0050d780(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0050d390();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0050d7c0 @ 0050d7c0 ////

void __fastcall FUN_0050d7c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0050d420();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x41) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0050d800 @ 0050d800 ////

void __fastcall FUN_0050d800(int param_1)

{
  FUN_0050d4b0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION CStudio_GetAwardsRatingComponent @ 0050d8e0 ////

void __thiscall CStudio_GetAwardsRatingComponent(void *this,float *param_1)

{
  bool bVar1;
  void *pvVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 local_68;
  float local_64;
  undefined4 *local_60;
  int iStack_5c;
  int *piStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 uStack_40;
  float fStack_3c;
  undefined1 local_38 [4];
  undefined **ppuStack_34;
  int iStack_30;
  int *piStack_2c;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cac898;
  pvStack_c = ExceptionList;
  iVar5 = 0;
  local_68 = 0;
  ExceptionList = &pvStack_c;
  FUN_00857aa0(&local_64);
  local_4 = 0;
  pvVar2 = FUN_00857d80(local_38);
  fVar6 = 0.0;
  local_4._0_1_ = 1;
  pfVar3 = (float *)FUN_0085bae0(&local_68);
  pfVar3 = FUN_00857b60(pvVar2,pfVar3);
  pfVar3 = FUN_00857b90(pfVar3,fVar6);
  local_64 = *pfVar3;
  (*(code *)local_60[1])();
  fStack_4c = pfVar3[6];
  (*(code *)*local_60)();
  fStack_48 = pfVar3[7];
  fStack_44 = pfVar3[8];
  uStack_40 = *(undefined1 *)(pfVar3 + 9);
  fStack_3c = pfVar3[10];
  local_4._0_1_ = 0;
  if (piStack_2c != (int *)0x0) {
    *piStack_2c = iStack_30;
  }
  if (iStack_30 != 0) {
    *(int **)(iStack_30 + 4) = piStack_2c;
  }
  while( true ) {
    pvVar2 = FUN_00857bd0(local_38);
    local_4._0_1_ = 2;
    bVar1 = FUN_00856dd0(&local_64,(int)pvVar2);
    local_4._0_1_ = 0;
    ppuStack_34 = &PTR_FUN_00d1aed0;
    if (piStack_2c != (int *)0x0) {
      *piStack_2c = iStack_30;
    }
    if (iStack_30 != 0) {
      *(int **)(iStack_30 + 4) = piStack_2c;
    }
    uStack_20 = 0;
    iStack_30 = 0;
    piStack_2c = (int *)0x0;
    if (!bVar1) break;
    iVar4 = FUN_00856da0((int)&local_64);
    if (*(void **)(iVar4 + 0xb8) == this) {
      iVar5 = iVar5 + 1;
    }
    FUN_00857260(&local_64);
  }
  fVar6 = (float)iVar5 * 0.16949153;
  if (0.0 <= fVar6) {
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
  }
  else {
    fVar6 = 0.0;
  }
  *param_1 = fVar6;
  if (piStack_58 != (int *)0x0) {
    *piStack_58 = iStack_5c;
  }
  if (iStack_5c != 0) {
    *(int **)(iStack_5c + 4) = piStack_58;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0050da90 @ 0050da90 ////

void __fastcall FUN_0050da90(int param_1)

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


//// FUNCTION FUN_0050dac0 @ 0050dac0 ////

void __fastcall FUN_0050dac0(int param_1)

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


//// FUNCTION FUN_0050daf0 @ 0050daf0 ////

int __fastcall FUN_0050daf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0050d390();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0050db20 @ 0050db20 ////

int __fastcall FUN_0050db20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0050d420();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x41) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0050db60 @ 0050db60 ////

void __fastcall FUN_0050db60(int param_1)

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


//// FUNCTION FUN_0050db90 @ 0050db90 ////

undefined4 * FUN_0050db90(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0050d5d0(param_1,param_2,param_3);
  return param_1 + param_2;
}


//// FUNCTION FUN_0050dbc0 @ 0050dbc0 ////

undefined4 *
FUN_0050dbc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x44);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_0050d4f0(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0x10) = param_5;
    *(undefined1 *)((int)puVar1 + 0x41) = 0;
  }
  return puVar1;
}


//// FUNCTION FUN_0050dc20 @ 0050dc20 ////

void __fastcall FUN_0050dc20(int param_1)

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


//// FUNCTION FUN_0050dc90 @ 0050dc90 ////

void FUN_0050dc90(void *param_1)

{
  if (*(char *)((int)param_1 + 0x41) == '\0') {
    FUN_0050dc90(*(void **)((int)param_1 + 8));
    FUN_0050b470((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0050dcd0 @ 0050dcd0 ////

void __fastcall FUN_0050dcd0(int param_1)

{
  FUN_0050dc90(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0050dd00 @ 0050dd00 ////

void __fastcall FUN_0050dd00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d214b0;
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


//// FUNCTION FUN_0050dd50 @ 0050dd50 ////

void __fastcall FUN_0050dd50(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d214bc;
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


//// FUNCTION FUN_0050dda0 @ 0050dda0 ////

void __fastcall FUN_0050dda0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d214c8;
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


//// FUNCTION FUN_0050ddf0 @ 0050ddf0 ////

undefined4 * __thiscall FUN_0050ddf0(void *this,byte param_1)

{
  FUN_0050dd00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0050de10 @ 0050de10 ////

undefined4 * __thiscall FUN_0050de10(void *this,byte param_1)

{
  FUN_0050dd50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0050de30 @ 0050de30 ////

undefined4 * __thiscall FUN_0050de30(void *this,byte param_1)

{
  FUN_0050dda0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0050de50 @ 0050de50 ////

void __thiscall
FUN_0050de50(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cac8b8;
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
  piVar3 = (int *)FUN_0050d3d0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_0050df4b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0050b1d0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_0050a000(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_0050df4b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0050a000(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_0050b1d0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_0050e000 @ 0050e000 ////

void __thiscall
FUN_0050e000(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cac8d8;
  local_c = ExceptionList;
  if (0x4ec4ec2 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0050dbc0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x40);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x40) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x10] == '\0') {
LAB_0050e0fb:
        *(undefined1 *)(*piVar4 + 0x40) = 1;
        *(undefined1 *)(piVar5 + 0x10) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x40) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0050b240(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x40) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x40) = 0;
        FUN_0050a0a0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x10] == '\0') goto LAB_0050e0fb;
      if (piVar6 == (int *)*piVar2) {
        FUN_0050a0a0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x40) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x40) = 0;
      FUN_0050b240(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x40);
  } while( true );
}


//// FUNCTION FUN_0050e1b0 @ 0050e1b0 ////

void FUN_0050e1b0(void)

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
  puStack_8 = &LAB_00cac8f8;
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


//// FUNCTION FUN_0050e220 @ 0050e220 ////

void FUN_0050e220(void)

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
  puStack_8 = &LAB_00cac918;
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


//// FUNCTION FUN_0050e290 @ 0050e290 ////

void __thiscall FUN_0050e290(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cac938;
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
  FUN_0050a340((int *)&param_2);
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
      goto LAB_0050e401;
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
      piVar2 = (int *)FUN_0050a260(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_0050a240((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0050e401:
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
            FUN_0050b1d0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_0050a000(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_0050b1d0(this,(int)piVar5);
              break;
            }
LAB_0050e4c4:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_0050a000(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_0050e4c4;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_0050b1d0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_0050a000(this,piVar5);
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


//// FUNCTION FUN_0050e550 @ 0050e550 ////

void __thiscall FUN_0050e550(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cac958;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x41) != '\0') {
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
  FUN_0050a400((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x41) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x41) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x41) == '\0') {
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
      iVar1 = param_2[0x10];
      *(char *)(param_2 + 0x10) = (char)_Memory[0x10];
      *(char *)(_Memory + 0x10) = (char)iVar1;
      goto LAB_0050e6c1;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x41) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x41) == '\0') {
      piVar2 = (int *)FUN_0050a2b0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x41) == '\0') {
      uVar3 = FUN_0050a290((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0050e6c1:
  if ((char)_Memory[0x10] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0x10] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0x10] == '\0') {
            *(undefined1 *)(piVar4 + 0x10) = 1;
            *(undefined1 *)(piVar5 + 0x10) = 0;
            FUN_0050b240(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x41) == '\0') {
            if ((*(char *)(*piVar4 + 0x40) != '\x01') || (*(char *)(piVar4[2] + 0x40) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x40) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x40) = 1;
                *(undefined1 *)(piVar4 + 0x10) = 0;
                FUN_0050a0a0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0x10) = (char)piVar5[0x10];
              *(undefined1 *)(piVar5 + 0x10) = 1;
              *(undefined1 *)(piVar4[2] + 0x40) = 1;
              FUN_0050b240(this,(int)piVar5);
              break;
            }
LAB_0050e784:
            *(undefined1 *)(piVar4 + 0x10) = 0;
          }
        }
        else {
          if ((char)piVar4[0x10] == '\0') {
            *(undefined1 *)(piVar4 + 0x10) = 1;
            *(undefined1 *)(piVar5 + 0x10) = 0;
            FUN_0050a0a0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x41) == '\0') {
            if ((*(char *)(piVar4[2] + 0x40) == '\x01') && (*(char *)(*piVar4 + 0x40) == '\x01'))
            goto LAB_0050e784;
            if (*(char *)(*piVar4 + 0x40) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x40) = 1;
              *(undefined1 *)(piVar4 + 0x10) = 0;
              FUN_0050b240(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0x10) = (char)piVar5[0x10];
            *(undefined1 *)(piVar5 + 0x10) = 1;
            *(undefined1 *)(*piVar4 + 0x40) = 1;
            FUN_0050a0a0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0x10) = 1;
  }
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_0050e820 @ 0050e820 ////

void __fastcall FUN_0050e820(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00caca0f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d214f4;
  param_1[0x19] = &PTR_LAB_00d214d4;
  local_4 = 9;
  if ((undefined4 *)param_1[0x59] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x59])(1);
    (**(code **)(param_1[0x54] + 4))();
    param_1[0x59] = 0;
    (**(code **)param_1[0x54])();
  }
  if ((undefined4 *)param_1[0x3f] != param_1 + 0x42) {
    do {
      piVar1 = (int *)param_1[0x3f];
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
    } while ((undefined4 *)param_1[0x3f] != param_1 + 0x42);
  }
  if ((undefined4 *)param_1[0x78] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x78])(1);
  }
  (**(code **)(param_1[0x73] + 4))();
  param_1[0x78] = 0;
  (**(code **)param_1[0x73])();
  if ((undefined4 *)param_1[0x51] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x51] = param_1[0x50];
  }
  if (param_1[0x50] != 0) {
    *(undefined4 *)(param_1[0x50] + 4) = param_1[0x51];
  }
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x73] = &PTR_FUN_00d1aef0;
  if ((undefined4 *)param_1[0x75] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x75] = param_1[0x74];
  }
  if (param_1[0x74] != 0) {
    *(undefined4 *)(param_1[0x74] + 4) = param_1[0x75];
  }
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  if ((undefined4 *)param_1[0x75] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x75] = param_1[0x74];
  }
  if (param_1[0x74] != 0) {
    *(undefined4 *)(param_1[0x74] + 4) = param_1[0x75];
  }
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  if (0x14 < (uint)param_1[0x6d]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x6b]);
  }
  if (10 < (uint)param_1[0x65]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[99]);
  }
  param_1[0x54] = &PTR_LAB_00d2149c;
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
  if ((undefined4 *)param_1[0x51] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x51] = param_1[0x50];
  }
  if (param_1[0x50] != 0) {
    *(undefined4 *)(param_1[0x50] + 4) = param_1[0x51];
  }
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  FUN_004bfb00(param_1 + 0x3d);
  FUN_0050dda0(param_1 + 0x30);
  FUN_0050dd50(param_1 + 0x23);
  local_4 = local_4 & 0xffffff00;
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0050eb60 @ 0050eb60 ////

void __thiscall FUN_0050eb60(void *this,undefined4 *param_1,uint *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  param_2 = puVar5;
  if (local_4) {
    if (puVar5 == (uint *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_0050de50(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_0050a2e0((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_0050de50(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0050ec20 @ 0050ec20 ////

void __thiscall FUN_0050ec20(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0050d4b0((void *)piVar6[1]);
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
    FUN_0050e290(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0050ece0 @ 0050ece0 ////

void __thiscall FUN_0050ece0(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x41) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0050ed44:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0050ed49;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0050ed44;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0050ed49:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x41) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_0050e000(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_0050a3a0((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_0050af20(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_0050e000(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_0050ee00 @ 0050ee00 ////

void __thiscall FUN_0050ee00(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0050dc90((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x41) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x41) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x41);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x41);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x41);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x41);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0050e550(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0050eec0 @ 0050eec0 ////

void __thiscall FUN_0050eec0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0050e1b0();
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
      _Dst = FUN_0050d750((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0050d570(param_1,iVar5,param_1 + param_2);
      FUN_0050d750(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0050a4d0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0050d570(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0050b410(param_1,(int)pvVar3,iVar5);
    FUN_0050a4d0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0050f0a0 @ 0050f0a0 ////

void __thiscall FUN_0050f0a0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00caca20;
  local_10 = ExceptionList;
  iVar6 = *(int *)((int)this + 4);
  param_3 = (undefined4 *)*param_3;
  if (iVar6 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - iVar6 >> 2;
  }
  uVar7 = CONCAT44(iVar6,iVar1);
  if (param_2 != 0) {
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar6 >> 2;
    }
    ExceptionList = &local_10;
    if (0x3fffffffU - iVar6 < param_2) {
      ExceptionList = &local_10;
      uVar7 = FUN_0050e220();
    }
    iVar6 = (int)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)uVar7;
    if (iVar6 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 8) - iVar6 >> 2;
    }
    if (uVar2 < iVar1 + param_2) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar6 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - iVar6 >> 2;
      }
      if (uVar2 < iVar1 + param_2) {
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)((int)this + 8) - iVar6 >> 2;
        }
        uVar2 = iVar6 + param_2;
      }
      puVar3 = operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_0050b510(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_0050d5d0(puVar4,param_2,&param_3);
      FUN_0050b510(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar2;
      *(undefined4 **)((int)this + 8) = puVar3 + param_2 + iVar6;
      *(undefined4 **)((int)this + 4) = puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar3 - (int)param_1 >> 2) < param_2) {
      FUN_0050b510(param_1,puVar3,param_1 + param_2);
      local_8 = 2;
      FUN_0050db90(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar6 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar6;
      FUN_0050a510(param_1,(undefined4 *)(iVar6 + param_2 * -4),&param_3);
      ExceptionList = local_10;
      return;
    }
    uVar5 = FUN_0050b510(puVar3 + -param_2,puVar3,puVar3);
    *(undefined4 *)((int)this + 8) = uVar5;
    FUN_0050b440((int)param_1,(int)(puVar3 + -param_2),puVar3);
    FUN_0050a510(param_1,param_1 + param_2,&param_3);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0050f2e0 @ 0050f2e0 ////

undefined4 * __thiscall FUN_0050f2e0(void *this,byte param_1)

{
  FUN_0050e820(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0050f320 @ 0050f320 ////

undefined4 * __thiscall FUN_0050f320(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0050de50(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_0050de50(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_0050de50(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_0050a2e0((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_0050de50(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_0050de50(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_0050a340((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_0050de50(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_0050de50(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_0050eb60(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_0050f4c0 @ 0050f4c0 ////

undefined4 * __thiscall FUN_0050f4c0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0050e000(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_0050af20(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_0050e000(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_0050af20(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_0050e000(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_0050af20(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_0050a3a0((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_0050af20(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x41) != '\0') {
          FUN_0050e000(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_0050e000(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_0050af20(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_0050a400((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_0050af20(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_0050f642;
      }
      if (*(char *)(param_2[2] + 0x41) != '\0') {
        FUN_0050e000(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_0050e000(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_0050f642:
  puVar4 = (undefined4 *)FUN_0050ece0(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_0050f740 @ 0050f740 ////

uint * __thiscall FUN_0050f740(void *this,uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  uint local_8 [2];
  
  puVar4 = *(uint **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
    puVar1 = (uint *)puVar4[1];
    do {
      if (puVar1[3] < *param_1) {
        puVar2 = (uint *)puVar1[2];
      }
      else {
        puVar2 = (uint *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar4 != *(uint **)((int)this + 4)) && (puVar4[3] <= *param_1)) {
    return puVar4 + 4;
  }
  local_8[0] = *param_1;
  local_8[1] = 0;
  piVar3 = FUN_0050f320(this,&param_1,puVar4,local_8);
  return (uint *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_0050f7f0 @ 0050f7f0 ////

int * __thiscall FUN_0050f7f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_40 [2];
  uint local_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caca38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_0050b040(this,param_1);
  if (piVar2 != *(int **)((int)this + 4)) {
    uVar3 = FUN_0050af20(puVar1,piVar2 + 3);
    if ((char)uVar3 == '\0') {
      ExceptionList = local_c;
      return piVar2 + 0xb;
    }
  }
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  piVar4 = FUN_0050d2c0(local_40,puVar1,&local_54);
  local_4 = 0;
  piVar2 = FUN_0050f4c0(this,&param_1,piVar2,piVar4);
  if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40[0]);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_0050f980 @ 0050f980 ////

void __thiscall FUN_0050f980(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0050d5d0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_0050f0a0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0050f9f0 @ 0050f9f0 ////

void FUN_0050f9f0(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104bce8;
  if ((DAT_010584c8 == 0) ||
     ((uint)(DAT_010584d0 - DAT_010584c8 >> 2) <= (uint)((int)DAT_010584cc - DAT_010584c8 >> 2))) {
    FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  }
  else {
    *DAT_010584cc = &DAT_0104bce8;
    DAT_010584cc = DAT_010584cc + 1;
  }
  FUN_0098fdd0("PPlayerStudio",&DAT_0104bcd0);
  FUN_0098fd30("NextAIStudio",&DAT_0104bd28,3);
  return;
}


//// FUNCTION FUN_0050fa70 @ 0050fa70 ////

void __fastcall FUN_0050fa70(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0050ec20(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0050fc90 @ 0050fc90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_0050fc90(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *_Memory;
  float local_20;
  undefined1 local_1c [4];
  float *local_18;
  float *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caca78;
  _Memory = (float *)0x0;
  local_18 = (float *)0x0;
  local_14 = (float *)0x0;
  local_10 = 0;
  iVar6 = *(int *)((int)this + 0x94);
  local_4 = 0;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  pfVar8 = local_14;
  for (; ExceptionList = ppvVar3, local_14 = pfVar8, iVar6 != (int)this + 0xa0;
      iVar6 = *(int *)(iVar6 + 4)) {
    puVar4 = (undefined4 *)FUN_00585ff0(*(void **)(iVar6 + 8),&local_20);
    if ((_Memory == (float *)0x0) ||
       ((uint)(local_10 - (int)_Memory >> 2) <= (uint)((int)pfVar8 - (int)_Memory >> 2))) {
      FUN_0050f0a0(local_1c,pfVar8,1,puVar4);
      _Memory = local_18;
    }
    else {
      FUN_0050d5d0(pfVar8,1,puVar4);
      local_14 = pfVar8 + 1;
    }
    ppvVar3 = ExceptionList;
    pfVar8 = local_14;
  }
  fVar2 = 0.0;
  local_20 = DAT_00e521c0;
  for (; (_Memory != (float *)0x0 && ((int)pfVar8 - (int)_Memory >> 2 != 0)); pfVar8 = pfVar8 + -1)
  {
    fVar1 = 0.0;
    pfVar7 = _Memory;
    for (pfVar5 = _Memory; pfVar5 != pfVar8; pfVar5 = pfVar5 + 1) {
      if (fVar1 < *pfVar5) {
        fVar1 = *pfVar5;
        pfVar7 = pfVar5;
      }
    }
    fVar2 = fVar1 * local_20 + fVar2;
    if (0.0 <= fVar2) {
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = 0.0;
    }
    pfVar5 = pfVar7 + 1;
    local_20 = local_20 - _DAT_00e521c4;
    if (pfVar5 != pfVar8) {
      iVar6 = (int)pfVar7 - (int)pfVar5;
      do {
        *(float *)(iVar6 + (int)pfVar5) = *pfVar5;
        pfVar5 = pfVar5 + 1;
      } while (pfVar5 != pfVar8);
    }
  }
  *param_1 = fVar2;
  if (_Memory == (float *)0x0) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0050fe10 @ 0050fe10 ////

int __fastcall FUN_0050fe10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0050d390();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0050fe40 @ 0050fe40 ////

int __fastcall FUN_0050fe40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0050d420();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x41) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0050fe70 @ 0050fe70 ////

void __fastcall FUN_0050fe70(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d214b0;
  return;
}


//// FUNCTION FUN_0050fed0 @ 0050fed0 ////

void __fastcall FUN_0050fed0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d214bc;
  return;
}


//// FUNCTION FUN_0050ff30 @ 0050ff30 ////

void __fastcall FUN_0050ff30(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d214c8;
  return;
}


//// FUNCTION FUN_0050ff90 @ 0050ff90 ////

undefined4 * __fastcall FUN_0050ff90(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  ulonglong uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined8 local_20;
  undefined4 *local_18;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cacbb5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = param_1;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d214f4;
  param_1[0x19] = &PTR_LAB_00d214d4;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  puVar1 = param_1 + 0x28;
  param_1[0x2a] = 0;
  *puVar1 = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x23] = &PTR_LAB_00d214bc;
  param_1[0x25] = puVar1;
  *puVar1 = param_1 + 0x24;
  param_1[0x33] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  puVar1 = param_1 + 0x35;
  param_1[0x37] = 0;
  *puVar1 = 0;
  param_1[0x36] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x30] = &PTR_LAB_00d214c8;
  param_1[0x32] = puVar1;
  *puVar1 = param_1 + 0x31;
  param_1[0x40] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  puVar1 = param_1 + 0x42;
  param_1[0x44] = 0;
  *puVar1 = 0;
  param_1[0x43] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x3d] = &PTR_LAB_00d1e57c;
  param_1[0x3f] = puVar1;
  *puVar1 = param_1 + 0x3e;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  local_4._0_1_ = 10;
  param_1[0x4e] = 0;
  FUN_0043b520(param_1 + 0x4f,0.0);
  param_1[0x52] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x57] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = param_1 + 0x54;
  param_1[0x54] = &PTR_LAB_00d2149c;
  param_1[0x59] = 0;
  local_4._0_1_ = 0xc;
  FUN_0043b520(param_1 + 0x5a,1900.0);
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[99] = param_1 + 0x66;
  *(undefined2 *)(param_1 + 0x66) = 0;
  param_1[100] = 0;
  param_1[0x65] = 10;
  param_1[0x6b] = param_1 + 0x6e;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0x14;
  param_1[0x76] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = param_1 + 0x73;
  param_1[0x73] = &PTR_FUN_00d1aef0;
  param_1[0x78] = 0;
  local_4 = CONCAT31(local_4._1_3_,0xf);
  param_1[0x79] = 0;
  param_1[0x7b] = 0;
  param_1[0x52] = param_1;
  FUN_00acdb9e(0xe52268);
  local_20._0_4_ = (int *)&stack0xffffffc0;
  iVar3 = FUN_0097dda0();
  param_1[0x53] = iVar3;
  if (s___AV__InList_VCProject_TM___MV___00e52244[0x21] != '\0') {
    iVar7 = 0x140;
    local_20._0_4_ = (int *)&stack0xffffffb8;
    pcVar6 = "StudioLink";
    pcVar5 = extraout_ECX;
    iVar3 = FUN_00acdb9e(0xe52268);
    *(int *)local_20 = iVar3;
    FUN_0097df60(pcVar5,pcVar6,iVar7);
    s___AV__InList_VCProject_TM___MV___00e52244[0x21] = '\0';
  }
  uVar4 = FUN_00acd42c();
  local_10 = (undefined4)(uVar4 >> 0x20);
  local_20 = uVar4;
  FUN_00471b10(&local_20);
  param_1[0x5c] = (int *)local_20;
  param_1[0x5d] = local_20._4_4_;
  FUN_00471b10((longlong *)(param_1 + 0x5c));
  uVar2 = local_10;
  local_20._4_4_ = local_10;
  local_20._0_4_ = (int *)(int)uVar4;
  FUN_00471b10(&local_20);
  param_1[0x5e] = (int *)local_20;
  param_1[0x5f] = local_20._4_4_;
  FUN_00471b10((longlong *)(param_1 + 0x5e));
  local_20._4_4_ = uVar2;
  local_20._0_4_ = (int *)(int)uVar4;
  FUN_00471b10(&local_20);
  param_1[0x60] = (int *)local_20;
  param_1[0x61] = local_20._4_4_;
  FUN_00471b10((longlong *)(param_1 + 0x60));
  iVar3 = FUN_005389b0();
  param_1[0x4d] = iVar3;
  uVar4 = FUN_00990ae0(extraout_ECX_00,extraout_EDX);
  param_1[0x7a] = (int)uVar4;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005102c0 @ 005102c0 ////

void __fastcall FUN_005102c0(int param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cacbd3;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_0050ee00((void *)(param_1 + 0x7c),&local_10,(int *)**(int **)(param_1 + 0x80),
               *(int **)(param_1 + 0x80));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x80));
}


//// FUNCTION FUN_00510370 @ 00510370 ////

undefined4 * __fastcall FUN_00510370(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cacbf3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_4 = 0;
  param_1[0x14] = 0;
  iVar1 = FUN_0050d390();
  param_1[0x18] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0x18] + 4) = param_1[0x18];
  *(undefined4 *)param_1[0x18] = param_1[0x18];
  *(undefined4 *)(param_1[0x18] + 8) = param_1[0x18];
  param_1[0x19] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_0043b510(param_1 + 0x1e);
  iVar1 = FUN_0050d420();
  param_1[0x20] = iVar1;
  *(undefined1 *)(iVar1 + 0x41) = 1;
  *(undefined4 *)(param_1[0x20] + 4) = param_1[0x20];
  *(undefined4 *)param_1[0x20] = param_1[0x20];
  *(undefined4 *)(param_1[0x20] + 8) = param_1[0x20];
  param_1[0x21] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION CStudioAI_SpawnDueRivalsAndScheduleDates @ 00510440 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl CStudioAI_SpawnDueRivalsAndScheduleDates(char param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  byte *pbVar12;
  bool bVar13;
  float10 fVar14;
  float fVar15;
  float local_28;
  int *piVar16;
  int *piVar17;
  
  piVar10 = DAT_0104bd34;
  if (DAT_0104bd34 != DAT_0104bd38) {
    do {
      puVar2 = (undefined4 *)*piVar10;
      uVar6 = FUN_0043b6e0(puVar2 + 0x1e,(float *)&DAT_00e4fa4c);
      puVar3 = DAT_0104bcf0;
      if ((char)uVar6 != '\0') {
        for (; puVar3 != &DAT_0104bcfc; puVar3 = (undefined4 *)puVar3[1]) {
          local_28 = 7.440329e-39;
          iVar7 = FUN_00ace790((int *)puVar3[2],0,&TM::CStudio::RTTI_Type_Descriptor,
                               &TM::CStudioAI::RTTI_Type_Descriptor,0);
          if (iVar7 != 0) {
            pbVar12 = (byte *)*puVar2;
            pbVar8 = *(byte **)(iVar7 + 0x1f0);
            do {
              bVar1 = *pbVar8;
              bVar13 = bVar1 < *pbVar12;
              if (bVar1 != *pbVar12) {
LAB_005104d4:
                iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_005104d9;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar8[1];
              bVar13 = bVar1 < pbVar12[1];
              if (bVar1 != pbVar12[1]) goto LAB_005104d4;
              pbVar8 = pbVar8 + 2;
              pbVar12 = pbVar12 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_005104d9:
            if (iVar7 == 0) goto LAB_0051051a;
          }
        }
        piVar9 = CStudioAI_CreateFromTemplateWithAnnouncement(puVar2);
        if ((piVar9 != (int *)0x0) && (param_1 != '\0')) {
          iVar7 = FUN_00990d30(0,4);
          FUN_00515680(piVar9,iVar7);
          (**(code **)(*piVar9 + 0xc))();
        }
      }
LAB_0051051a:
      piVar10 = piVar10 + 1;
    } while (piVar10 != DAT_0104bd38);
  }
  pvVar4 = ExceptionList;
  ExceptionList = &stack0xfffffff4;
  FUN_0043b520(&local_28,3000.0);
  piVar11 = (int *)0x0;
  piVar9 = (int *)0x0;
  piVar16 = (int *)0x0;
  piVar17 = (int *)0x0;
  piVar10 = DAT_0104bd34;
  if (DAT_0104bd34 != DAT_0104bd38) {
    do {
      iVar7 = *piVar10;
      pfVar5 = (float *)(iVar7 + 0x78);
      uVar6 = FUN_0043b6c0(pfVar5,&local_28);
      if ((char)uVar6 == '\0') {
        uVar6 = FUN_0043b640(pfVar5,&local_28);
        if ((char)uVar6 != '\0') {
          if ((piVar9 == (int *)0x0) ||
             ((uint)(-(int)piVar9 >> 2) <= (uint)((int)piVar11 - (int)piVar9 >> 2))) {
            piVar9 = piVar16;
            FUN_0050eec0(&stack0xffffffe4,piVar11,1,(undefined4 *)&stack0xffffffe0);
            piVar11 = piVar17;
            piVar16 = piVar9;
            piVar17 = piVar11;
          }
          else {
            *piVar11 = iVar7;
            piVar11 = piVar11 + 1;
            piVar17 = piVar11;
          }
        }
      }
      else {
        if (piVar9 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(piVar9);
        }
        piVar9 = (int *)0x0;
        piVar11 = (int *)0x0;
        FUN_0050eec0(&stack0xffffffe4,(undefined4 *)0x0,1,(undefined4 *)&stack0xffffffe0);
        local_28 = *pfVar5;
        piVar16 = piVar9;
        piVar17 = piVar11;
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != DAT_0104bd38);
  }
  fVar14 = FUN_0043b710((float *)&DAT_0104bd2c);
  fVar15 = (float)fVar14;
  fVar14 = FUN_0043b710((float *)&DAT_0104bd2c);
  fVar14 = FUN_00990e30((float)-fVar14,fVar15);
  pfVar5 = (float *)FUN_0043b520(&stack0xffffffe0,(float)fVar14);
  FUN_0043b5e0(&local_28,pfVar5);
  uVar6 = FUN_0043b6e0(&local_28,(float *)&DAT_00e4fa4c);
  fVar15 = local_28;
  piVar10 = piVar9;
  if ((char)uVar6 != '\0') {
    fVar14 = FUN_0043b710((float *)&DAT_00e4fa4c);
    FUN_0043b700(&local_28,(float)(fVar14 + (float10)0.5));
    fVar15 = local_28;
  }
  for (; _DAT_0104bd28 = fVar15, piVar10 != piVar11; piVar10 = piVar10 + 1) {
    *(float *)(*piVar10 + 0x78) = local_28;
    fVar15 = _DAT_0104bd28;
  }
  if (piVar9 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(piVar9);
  }
  ExceptionList = pvVar4;
  return;
}


//// FUNCTION FUN_00510540 @ 00510540 ////

void * __thiscall FUN_00510540(void *this,byte param_1)

{
  FUN_005102c0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00510560 @ 00510560 ////

void __cdecl FUN_00510560(void *param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  void *_Memory;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  float *pfVar13;
  byte *pbVar14;
  byte *pbVar15;
  bool bVar16;
  float10 fVar17;
  void **ppvVar18;
  uint uVar19;
  int *local_b24;
  undefined1 *local_b20;
  uint local_b1c;
  uint local_b18;
  undefined1 local_b14 [20];
  int *local_b00;
  float fStack_afc;
  float fStack_af8;
  float fStack_af4;
  float fStack_af0;
  float fStack_aec;
  int iStack_ae8;
  int iStack_ae4;
  int iStack_ae0;
  uint uStack_adc;
  int iStack_ad8;
  int iStack_ad4;
  int iStack_ad0;
  int iStack_acc;
  int iStack_ac8;
  uint uStack_ac4;
  int iStack_ac0;
  int iStack_abc;
  int iStack_ab8;
  int iStack_ab4;
  int iStack_ab0;
  byte *local_aac;
  undefined4 local_aa8;
  uint local_aa4;
  byte local_aa0 [20];
  char *local_a8c;
  undefined4 local_a88;
  uint local_a84;
  char local_a80 [20];
  byte *local_a6c;
  undefined4 local_a68;
  uint local_a64;
  byte local_a60 [20];
  char *local_a4c;
  undefined4 local_a48;
  uint local_a44;
  char local_a40 [20];
  byte *local_a2c;
  undefined4 local_a28;
  uint local_a24;
  byte local_a20 [20];
  char *local_a0c;
  undefined4 local_a08;
  uint local_a04;
  char local_a00 [20];
  byte *local_9ec;
  undefined4 local_9e8;
  uint local_9e4;
  undefined1 local_9e0 [20];
  void *local_9cc [2];
  uint uStack_9c4;
  void *local_9ac [2];
  uint local_9a4;
  void *local_98c [2];
  uint local_984;
  void *local_96c [2];
  uint local_964;
  void *local_94c [2];
  uint local_944;
  void *local_92c [2];
  uint local_924;
  void *local_90c [2];
  uint local_904;
  void *local_8ec [2];
  uint local_8e4;
  void *local_8cc [2];
  uint local_8c4;
  void *local_8ac [2];
  uint local_8a4;
  void *local_88c [2];
  uint local_884;
  void *local_86c [2];
  uint local_864;
  void *local_84c [2];
  uint uStack_844;
  void *local_82c [2];
  uint local_824;
  void *local_80c [2];
  uint local_804;
  void *local_7ec [2];
  uint local_7e4;
  void *local_7cc [2];
  uint local_7c4;
  void *local_7ac [2];
  uint uStack_7a4;
  void *local_78c [2];
  uint uStack_784;
  void *local_76c [2];
  uint local_764;
  void *local_74c [2];
  uint local_744;
  void *local_72c [2];
  uint local_724;
  void *local_70c [2];
  uint local_704;
  void *local_6ec [2];
  uint uStack_6e4;
  void *local_6cc [2];
  uint uStack_6c4;
  void *local_6ac [2];
  uint local_6a4;
  void *local_68c [2];
  uint local_684;
  void *local_66c [2];
  uint local_664;
  void *local_64c [2];
  uint local_644;
  void *local_62c [2];
  uint uStack_624;
  void *local_60c [2];
  uint uStack_604;
  void *local_5ec [2];
  uint local_5e4;
  void *local_5cc [2];
  uint local_5c4;
  void *local_5ac [2];
  uint local_5a4;
  void *local_58c [2];
  uint local_584;
  void *local_56c [2];
  uint uStack_564;
  void *local_54c [2];
  uint uStack_544;
  void *local_52c [2];
  uint local_524;
  void *local_50c [2];
  uint local_504;
  void *local_4ec [2];
  uint local_4e4;
  void *local_4cc [2];
  uint local_4c4;
  void *local_4ac [2];
  uint uStack_4a4;
  void *local_48c [2];
  uint uStack_484;
  void *local_46c [2];
  uint local_464;
  void *local_44c [2];
  uint local_444;
  void *local_42c [2];
  uint local_424;
  void *local_40c [2];
  uint local_404;
  void *local_3ec [2];
  uint uStack_3e4;
  void *local_3cc [2];
  uint local_3c4;
  void *local_3ac [2];
  uint local_3a4;
  void *local_38c [2];
  uint local_384;
  void *local_36c [2];
  uint uStack_364;
  void *local_34c [2];
  uint uStack_344;
  void *local_32c [2];
  uint local_324;
  void *local_30c [2];
  uint local_304;
  void *local_2ec [2];
  uint uStack_2e4;
  void *apvStack_2cc [2];
  uint uStack_2c4;
  void *local_2ac [2];
  uint local_2a4;
  void *local_28c [2];
  uint uStack_284;
  void *local_26c [2];
  uint uStack_264;
  void *local_24c [2];
  uint local_244;
  void *local_22c [2];
  uint local_224;
  void *local_20c [2];
  uint local_204;
  void *local_1ec [2];
  uint uStack_1e4;
  void *local_1cc [2];
  uint local_1c4;
  void *local_1ac [2];
  uint local_1a4;
  void *local_18c [2];
  uint uStack_184;
  void *local_16c [2];
  uint uStack_164;
  void *local_14c [2];
  uint local_144;
  void *apvStack_12c [2];
  uint uStack_124;
  void *local_10c [2];
  uint uStack_104;
  void *apvStack_ec [2];
  uint uStack_e4;
  void *local_cc [2];
  uint local_c4;
  void *apvStack_ac [2];
  uint uStack_a4;
  void *local_8c [2];
  uint local_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cacd3f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_b00 = operator_new(0x88);
  local_4 = 0;
  if (local_b00 == (int *)0x0) {
    local_b24 = (int *)0x0;
  }
  else {
    local_b24 = FUN_00510370(local_b00);
  }
  local_b20 = local_b14;
  local_b00 = local_b24;
  local_b14[0] = 0;
  local_b1c = 0;
  local_b18 = 0x14;
  local_4 = 1;
  uVar6 = FUN_00552520(param_1,&local_b20);
  cVar5 = (char)uVar6;
  bVar16 = false;
  while (cVar5 != '\0') {
    if (local_b1c == 0) {
      bVar4 = false;
      if (bVar16) break;
    }
    else {
      uVar6 = 0;
      if (local_b1c != 0) {
        do {
          iVar7 = _tolower((int)(char)local_b20[uVar6]);
          local_b20[uVar6] = (char)iVar7;
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_b1c);
      }
      local_a6c = local_a60;
      local_a60[0] = 0;
      local_a68 = 0;
      local_a64 = 0x14;
      _strncpy((char *)local_a6c,"name",4);
      uVar19 = 4;
      uVar6 = 0;
      ppvVar18 = local_68c;
      local_a68 = 4;
      local_a6c[4] = 0;
      puVar8 = FUN_00430770(&local_b20,ppvVar18,uVar6,uVar19);
      pbVar14 = (byte *)*puVar8;
      pbVar15 = local_a6c;
      do {
        bVar1 = *pbVar14;
        bVar16 = bVar1 < *pbVar15;
        if (bVar1 != *pbVar15) {
LAB_005106d8:
          iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_005106dd;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar14[1];
        bVar16 = bVar1 < pbVar15[1];
        if (bVar1 != pbVar15[1]) goto LAB_005106d8;
        pbVar14 = pbVar14 + 2;
        pbVar15 = pbVar15 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_005106dd:
      if (0x14 < local_684) {
                    /* WARNING: Subroutine does not return */
        _free(local_68c[0]);
      }
      if (0x14 < local_a64) {
                    /* WARNING: Subroutine does not return */
        _free(local_a6c);
      }
      if (iVar7 == 0) {
        uVar19 = FUN_00413450(&local_b20,",",0,1);
        uVar6 = uVar19 + 1;
        puVar8 = FUN_00430770(&local_b20,local_4c,uVar6,0xffffffff);
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (puVar8[1] != 0) {
          uVar9 = FUN_00413450(&local_b20,",",uVar6,1);
          if (uVar9 == 0xffffffff) {
            puVar8 = FUN_00430770(&local_b20,local_40c,uVar6,0xffffffff);
            FUN_004015d0(local_b24,(char *)*puVar8,puVar8[1]);
            _Memory = local_40c[0];
            uVar6 = local_404;
          }
          else {
            puVar8 = FUN_00430770(&local_b20,local_80c,uVar6,(uVar9 - uVar19) - 1);
            FUN_004015d0(local_b24,(char *)*puVar8,puVar8[1]);
            _Memory = local_80c[0];
            uVar6 = local_804;
          }
          if (0x14 < uVar6) {
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
          pcVar2 = (char *)*local_b24;
          iVar7 = _toupper((int)*pcVar2);
          *pcVar2 = (char)iVar7;
          for (iVar7 = FUN_00448220(local_b24,&DAT_00d21764,0,1); iVar7 != -1;
              iVar7 = FUN_00448220(local_b24,&DAT_00d21764,iVar7 + 1,1)) {
            iVar3 = *local_b24;
            iVar10 = _toupper((int)*(char *)(iVar3 + 1 + iVar7));
            *(char *)(iVar3 + 1 + iVar7) = (char)iVar10;
          }
        }
      }
      else {
        local_aac = local_aa0;
        local_aa0[0] = 0;
        local_aa8 = 0;
        local_aa4 = 0x14;
        _strncpy((char *)local_aac,"appears",7);
        uVar19 = 7;
        local_aa8 = 7;
        uVar6 = 0;
        local_aac[7] = 0;
        puVar8 = FUN_00430770(&local_b20,local_7cc,uVar6,uVar19);
        pbVar14 = (byte *)*puVar8;
        pbVar15 = local_aac;
        do {
          bVar1 = *pbVar14;
          bVar16 = bVar1 < *pbVar15;
          if (bVar1 != *pbVar15) {
LAB_0051090b:
            iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_00510910;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar16 = bVar1 < pbVar15[1];
          if (bVar1 != pbVar15[1]) goto LAB_0051090b;
          pbVar14 = pbVar14 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00510910:
        if (0x14 < local_7c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_7cc[0]);
        }
        if (0x14 < local_aa4) {
                    /* WARNING: Subroutine does not return */
          _free(local_aac);
        }
        if (iVar7 == 0) {
          uVar6 = FUN_00413450(&local_b20,",",0,1);
          puVar8 = FUN_00430770(&local_b20,local_20c,uVar6 + 1,0xffffffff);
          if (0x14 < local_204) {
                    /* WARNING: Subroutine does not return */
            _free(local_20c[0]);
          }
          if (puVar8[1] != 0) {
            puVar8 = FUN_00430770(&local_b20,local_78c,uVar6 + 1,0xffffffff);
            local_4._0_1_ = 2;
            fVar17 = FUN_00567d60(puVar8);
            FUN_0043b700(local_b24 + 0x1e,(float)fVar17);
            local_4 = CONCAT31(local_4._1_3_,1);
            if (0x14 < uStack_784) {
                    /* WARNING: Subroutine does not return */
              _free(local_78c[0]);
            }
          }
        }
        else {
          local_9ec = local_9e0;
          local_9e0[0] = 0;
          local_9e8 = 0;
          local_9e4 = 0x20;
          local_9ec = _malloc(0x20);
          _strncpy((char *)local_9ec,"star wellbeing variance",0x17);
          local_9e8 = 0x17;
          local_9ec[0x17] = 0;
          puVar8 = FUN_00430770(&local_b20,local_3cc,0,0x17);
          pbVar14 = (byte *)*puVar8;
          pbVar15 = local_9ec;
          do {
            bVar1 = *pbVar14;
            bVar16 = bVar1 < *pbVar15;
            if (bVar1 != *pbVar15) {
LAB_00510aae:
              iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00510ab3;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar14[1];
            bVar16 = bVar1 < pbVar15[1];
            if (bVar1 != pbVar15[1]) goto LAB_00510aae;
            pbVar14 = pbVar14 + 2;
            pbVar15 = pbVar15 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00510ab3:
          if (0x14 < local_3c4) {
                    /* WARNING: Subroutine does not return */
            _free(local_3cc[0]);
          }
          if (0x14 < local_9e4) {
                    /* WARNING: Subroutine does not return */
            _free(local_9ec);
          }
          if (iVar7 == 0) {
            uVar6 = FUN_00413450(&local_b20,",",0,1);
            puVar8 = FUN_00430770(&local_b20,local_74c,uVar6 + 1,0xffffffff);
            if (0x14 < local_744) {
                    /* WARNING: Subroutine does not return */
              _free(local_74c[0]);
            }
            if (puVar8[1] != 0) {
              puVar8 = FUN_00430770(&local_b20,local_10c,uVar6 + 1,0xffffffff);
              local_4._0_1_ = 3;
              fVar17 = FUN_00567d60(puVar8);
              FUN_00407070(&iStack_ac0,(float)fVar17);
              local_b24[9] = iStack_ac0;
              local_4 = CONCAT31(local_4._1_3_,1);
              if (0x14 < uStack_104) {
                    /* WARNING: Subroutine does not return */
                _free(local_10c[0]);
              }
            }
          }
          else {
            local_a2c = local_a20;
            local_a20[0] = 0;
            local_a28 = 0;
            local_a24 = 0x14;
            _strncpy((char *)local_a2c,"star wellbeing",0xe);
            uVar19 = 0xe;
            local_a28 = 0xe;
            uVar6 = 0;
            local_a2c[0xe] = 0;
            puVar8 = FUN_00430770(&local_b20,local_70c,uVar6,uVar19);
            pbVar14 = (byte *)*puVar8;
            pbVar15 = local_a2c;
            do {
              bVar1 = *pbVar14;
              bVar16 = bVar1 < *pbVar15;
              if (bVar1 != *pbVar15) {
LAB_00510c49:
                iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                goto LAB_00510c4e;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar14[1];
              bVar16 = bVar1 < pbVar15[1];
              if (bVar1 != pbVar15[1]) goto LAB_00510c49;
              pbVar14 = pbVar14 + 2;
              pbVar15 = pbVar15 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_00510c4e:
            if (0x14 < local_704) {
                    /* WARNING: Subroutine does not return */
              _free(local_70c[0]);
            }
            if (0x14 < local_a24) {
                    /* WARNING: Subroutine does not return */
              _free(local_a2c);
            }
            if (iVar7 == 0) {
              uVar6 = FUN_00413450(&local_b20,",",0,1);
              puVar8 = FUN_00430770(&local_b20,local_38c,uVar6 + 1,0xffffffff);
              if (0x14 < local_384) {
                    /* WARNING: Subroutine does not return */
                _free(local_38c[0]);
              }
              if (puVar8[1] != 0) {
                puVar8 = FUN_00430770(&local_b20,local_6cc,uVar6 + 1,0xffffffff);
                local_4._0_1_ = 4;
                fVar17 = FUN_00567d60(puVar8);
                FUN_00407070(&iStack_ab8,(float)fVar17);
                local_b24[8] = iStack_ab8;
                local_4 = CONCAT31(local_4._1_3_,1);
                if (0x14 < uStack_6c4) {
                    /* WARNING: Subroutine does not return */
                  _free(local_6cc[0]);
                }
              }
            }
            else {
              local_a8c = local_a80;
              local_a80[0] = '\0';
              local_a88 = 0;
              local_a84 = 0x20;
              local_a8c = _malloc(0x20);
              _strncpy(local_a8c,"lot prestige variance",0x15);
              local_a88 = 0x15;
              local_a8c[0x15] = '\0';
              puVar8 = FUN_00430770(&local_b20,local_1cc,0,0x15);
              uVar11 = FUN_00401ec0(puVar8,&local_a8c);
              if (0x14 < local_1c4) {
                    /* WARNING: Subroutine does not return */
                _free(local_1cc[0]);
              }
              if (0x14 < local_a84) {
                    /* WARNING: Subroutine does not return */
                _free(local_a8c);
              }
              if ((char)uVar11 == '\0') {
                local_a4c = local_a40;
                local_a40[0] = '\0';
                local_a48 = 0;
                local_a44 = 0x14;
                _strncpy(local_a4c,"lot prestige",0xc);
                uVar19 = 0xc;
                local_a48 = 0xc;
                uVar6 = 0;
                local_a4c[0xc] = '\0';
                puVar8 = FUN_00430770(&local_b20,local_64c,uVar6,uVar19);
                uVar11 = FUN_00401ec0(puVar8,&local_a4c);
                if (0x14 < local_644) {
                    /* WARNING: Subroutine does not return */
                  _free(local_64c[0]);
                }
                if (0x14 < local_a44) {
                    /* WARNING: Subroutine does not return */
                  _free(local_a4c);
                }
                if ((char)uVar11 == '\0') {
                  local_a0c = local_a00;
                  local_a00[0] = '\0';
                  local_a08 = 0;
                  local_a04 = 0x20;
                  local_a0c = _malloc(0x20);
                  _strncpy(local_a0c,"popular genre propensity",0x18);
                  local_a08 = 0x18;
                  local_a0c[0x18] = '\0';
                  puVar8 = FUN_00430770(&local_b20,local_30c,0,0x18);
                  uVar11 = FUN_00401ec0(puVar8,&local_a0c);
                  if (0x14 < local_304) {
                    /* WARNING: Subroutine does not return */
                    _free(local_30c[0]);
                  }
                  if (0x14 < local_a04) {
                    /* WARNING: Subroutine does not return */
                    _free(local_a0c);
                  }
                  if ((char)uVar11 == '\0') {
                    iVar7 = FUN_004155b0(&local_b20,"genre_",0);
                    if (iVar7 == -1) {
                      FUN_00401de0(local_96c,"marketing variance",0xffffffff);
                      puVar8 = FUN_00430770(&local_b20,local_cc,0,0x12);
                      uVar11 = FUN_00401ec0(puVar8,local_96c);
                      if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
                        _free(local_cc[0]);
                      }
                      if (0x14 < local_964) {
                    /* WARNING: Subroutine does not return */
                        _free(local_96c[0]);
                      }
                      if ((char)uVar11 == '\0') {
                        FUN_00401de0(local_9ac,"marketing",0xffffffff);
                        puVar8 = FUN_00430770(&local_b20,local_4cc,0,9);
                        uVar11 = FUN_00401ec0(puVar8,local_9ac);
                        if (0x14 < local_4c4) {
                    /* WARNING: Subroutine does not return */
                          _free(local_4cc[0]);
                        }
                        if (0x14 < local_9a4) {
                    /* WARNING: Subroutine does not return */
                          _free(local_9ac[0]);
                        }
                        if ((char)uVar11 == '\0') {
                          FUN_00401de0(local_8ec,"minimum star genre experience",0xffffffff);
                          puVar8 = FUN_00430770(&local_b20,local_24c,0,0x1d);
                          uVar11 = FUN_00401ec0(puVar8,local_8ec);
                          if (0x14 < local_244) {
                    /* WARNING: Subroutine does not return */
                            _free(local_24c[0]);
                          }
                          if (0x14 < local_8e4) {
                    /* WARNING: Subroutine does not return */
                            _free(local_8ec[0]);
                          }
                          if ((char)uVar11 == '\0') {
                            FUN_00401de0(local_92c,"maximum star genre experience",0xffffffff);
                            puVar8 = FUN_00430770(&local_b20,local_82c,0,0x1d);
                            uVar11 = FUN_00401ec0(puVar8,local_92c);
                            if (0x14 < local_824) {
                    /* WARNING: Subroutine does not return */
                              _free(local_82c[0]);
                            }
                            if (0x14 < local_924) {
                    /* WARNING: Subroutine does not return */
                              _free(local_92c[0]);
                            }
                            if ((char)uVar11 == '\0') {
                              FUN_00401de0(local_8ac,"number stars",0xffffffff);
                              puVar8 = FUN_00430770(&local_b20,local_76c,0,0xc);
                              uVar11 = FUN_00401ec0(puVar8,local_8ac);
                              if (0x14 < local_764) {
                    /* WARNING: Subroutine does not return */
                                _free(local_76c[0]);
                              }
                              if (0x14 < local_8a4) {
                    /* WARNING: Subroutine does not return */
                                _free(local_8ac[0]);
                              }
                              if ((char)uVar11 == '\0') {
                                FUN_00401de0(local_98c,"multiple by end of game",0xffffffff);
                                puVar8 = FUN_00430770(&local_b20,local_6ac,0,0x17);
                                uVar11 = FUN_00401ec0(puVar8,local_98c);
                                if (0x14 < local_6a4) {
                    /* WARNING: Subroutine does not return */
                                  _free(local_6ac[0]);
                                }
                                if (0x14 < local_984) {
                    /* WARNING: Subroutine does not return */
                                  _free(local_98c[0]);
                                }
                                if ((char)uVar11 == '\0') {
                                  FUN_00401de0(local_94c,"initial money",0xffffffff);
                                  puVar8 = FUN_00430770(&local_b20,local_5ec,0,0xd);
                                  uVar11 = FUN_00401ec0(puVar8,local_94c);
                                  if (0x14 < local_5e4) {
                    /* WARNING: Subroutine does not return */
                                    _free(local_5ec[0]);
                                  }
                                  if (0x14 < local_944) {
                    /* WARNING: Subroutine does not return */
                                    _free(local_94c[0]);
                                  }
                                  if ((char)uVar11 == '\0') {
                                    FUN_00401de0(local_90c,"burn rate 1900",0xffffffff);
                                    puVar8 = FUN_00430770(&local_b20,local_52c,0,0xe);
                                    uVar11 = FUN_00401ec0(puVar8,local_90c);
                                    if (0x14 < local_524) {
                    /* WARNING: Subroutine does not return */
                                      _free(local_52c[0]);
                                    }
                                    if (0x14 < local_904) {
                    /* WARNING: Subroutine does not return */
                                      _free(local_90c[0]);
                                    }
                                    if ((char)uVar11 == '\0') {
                                      FUN_00401de0(local_8cc,"burn rate 2000",0xffffffff);
                                      puVar8 = FUN_00430770(&local_b20,local_46c,0,0xe);
                                      uVar11 = FUN_00401ec0(puVar8,local_8cc);
                                      if (0x14 < local_464) {
                    /* WARNING: Subroutine does not return */
                                        _free(local_46c[0]);
                                      }
                                      if (0x14 < local_8c4) {
                    /* WARNING: Subroutine does not return */
                                        _free(local_8cc[0]);
                                      }
                                      if ((char)uVar11 == '\0') {
                                        iVar7 = FUN_004155b0(&local_b20,"script quality 1900",0);
                                        if (iVar7 == -1) {
                                          iVar7 = FUN_004155b0(&local_b20,"script variation 1900",0)
                                          ;
                                          if (iVar7 == -1) {
                                            iVar7 = FUN_004155b0(&local_b20,"script quality 2000",0)
                                            ;
                                            if (iVar7 == -1) {
                                              iVar7 = FUN_004155b0(&local_b20,
                                                                   "script variation 2000",0);
                                              if (iVar7 == -1) {
                                                iVar7 = FUN_004155b0(&local_b20,"award_",0);
                                                if (iVar7 == -1) {
                                                  FUN_00401de0(local_88c,"end studio",0xffffffff);
                                                  puVar8 = FUN_00430770(&local_b20,local_2c,0,10);
                                                  uVar11 = FUN_00401ec0(puVar8,local_88c);
                                                  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
                                                    _free(local_2c[0]);
                                                  }
                                                  if (0x14 < local_884) {
                    /* WARNING: Subroutine does not return */
                                                    _free(local_88c[0]);
                                                  }
                                                  if ((char)uVar11 != '\0') break;
                                                }
                                                else {
                                                  FUN_0056ac50(local_9cc,&local_b20);
                                                  local_4._0_1_ = 0x17;
                                                  FUN_0045f450((int *)local_9cc);
                                                  uVar6 = 0xffffffff;
                                                  iVar7 = FUN_004155b0(local_9cc,"AWARD_",0);
                                                  puVar8 = FUN_00430770(local_9cc,local_1ac,
                                                                        iVar7 + 6,uVar6);
                                                  FUN_00401e30(local_9cc,puVar8);
                                                  if (0x14 < local_1a4) {
                    /* WARNING: Subroutine does not return */
                                                    _free(local_1ac[0]);
                                                  }
                                                  puVar8 = FUN_0056ac50(local_16c,&local_b20);
                                                  local_4._0_1_ = 0x18;
                                                  fVar17 = FUN_00567d60(puVar8);
                                                  fStack_afc = (float)fVar17;
                                                  local_4._0_1_ = 0x17;
                                                  if (0x14 < uStack_164) {
                    /* WARNING: Subroutine does not return */
                                                    _free(local_16c[0]);
                                                  }
                                                  puVar8 = FUN_0056ac50(apvStack_12c,&local_b20);
                                                  local_4._0_1_ = 0x19;
                                                  fVar17 = FUN_00567d60(puVar8);
                                                  fStack_af8 = (float)fVar17;
                                                  local_4._0_1_ = 0x17;
                                                  if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
                                                    _free(apvStack_12c[0]);
                                                  }
                                                  puVar8 = FUN_0056ac50(apvStack_ec,&local_b20);
                                                  local_4._0_1_ = 0x1a;
                                                  fVar17 = FUN_00567d60(puVar8);
                                                  fStack_af4 = (float)fVar17;
                                                  local_4._0_1_ = 0x17;
                                                  if (0x14 < uStack_e4) {
                    /* WARNING: Subroutine does not return */
                                                    _free(apvStack_ec[0]);
                                                  }
                                                  puVar8 = FUN_0056ac50(apvStack_ac,&local_b20);
                                                  local_4._0_1_ = 0x1b;
                                                  fVar17 = FUN_00567d60(puVar8);
                                                  fStack_af0 = (float)fVar17;
                                                  local_4._0_1_ = 0x17;
                                                  if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
                                                    _free(apvStack_ac[0]);
                                                  }
                                                  puVar8 = FUN_0056ac50(apvStack_6c,&local_b20);
                                                  local_4._0_1_ = 0x1c;
                                                  fVar17 = FUN_00567d60(puVar8);
                                                  fStack_aec = (float)fVar17;
                                                  local_4._0_1_ = 0x17;
                                                  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
                                                    _free(apvStack_6c[0]);
                                                  }
                                                  pfVar13 = (float *)FUN_0050f7f0(local_b24 + 0x1f,
                                                                                  local_9cc);
                                                  *pfVar13 = fStack_afc;
                                                  pfVar13[1] = fStack_af8;
                                                  pfVar13[2] = fStack_af4;
                                                  pfVar13[3] = fStack_af0;
                                                  pfVar13[4] = fStack_aec;
                                                  local_4 = CONCAT31(local_4._1_3_,1);
                                                  if (0x14 < uStack_9c4) {
                    /* WARNING: Subroutine does not return */
                                                    _free(local_9cc[0]);
                                                  }
                                                }
                                              }
                                              else {
                                                iVar7 = FUN_004155b0(&local_b20,",",0);
                                                puVar8 = FUN_00430770(&local_b20,local_22c,
                                                                      iVar7 + 1U,0xffffffff);
                                                if (0x14 < local_224) {
                    /* WARNING: Subroutine does not return */
                                                  _free(local_22c[0]);
                                                }
                                                if (puVar8[1] != 0) {
                                                  puVar8 = FUN_00430770(&local_b20,local_1ec,
                                                                        iVar7 + 1U,0xffffffff);
                                                  local_4._0_1_ = 0x16;
                                                  fVar17 = FUN_00567d60(puVar8);
                                                  FUN_00407070(&iStack_ac8,(float)fVar17);
                                                  local_b24[0x14] = iStack_ac8;
                                                  local_4 = CONCAT31(local_4._1_3_,1);
                                                  if (0x14 < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
                                                    _free(local_1ec[0]);
                                                  }
                                                }
                                              }
                                            }
                                            else {
                                              iVar7 = FUN_004155b0(&local_b20,",",0);
                                              puVar8 = FUN_00430770(&local_b20,local_2ac,iVar7 + 1U,
                                                                    0xffffffff);
                                              if (0x14 < local_2a4) {
                    /* WARNING: Subroutine does not return */
                                                _free(local_2ac[0]);
                                              }
                                              if (puVar8[1] != 0) {
                                                puVar8 = FUN_00430770(&local_b20,local_26c,
                                                                      iVar7 + 1U,0xffffffff);
                                                local_4._0_1_ = 0x15;
                                                fVar17 = FUN_00567d60(puVar8);
                                                FUN_00407070(&iStack_ad0,(float)fVar17);
                                                local_b24[0x13] = iStack_ad0;
                                                local_4 = CONCAT31(local_4._1_3_,1);
                                                if (0x14 < uStack_264) {
                    /* WARNING: Subroutine does not return */
                                                  _free(local_26c[0]);
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            iVar7 = FUN_004155b0(&local_b20,",",0);
                                            puVar8 = FUN_00430770(&local_b20,local_32c,iVar7 + 1U,
                                                                  0xffffffff);
                                            if (0x14 < local_324) {
                    /* WARNING: Subroutine does not return */
                                              _free(local_32c[0]);
                                            }
                                            if (puVar8[1] != 0) {
                                              puVar8 = FUN_00430770(&local_b20,local_2ec,iVar7 + 1U,
                                                                    0xffffffff);
                                              local_4._0_1_ = 0x14;
                                              fVar17 = FUN_00567d60(puVar8);
                                              FUN_00407070(&iStack_ad8,(float)fVar17);
                                              local_b24[0x12] = iStack_ad8;
                                              local_4 = CONCAT31(local_4._1_3_,1);
                                              if (0x14 < uStack_2e4) {
                    /* WARNING: Subroutine does not return */
                                                _free(local_2ec[0]);
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          iVar7 = FUN_004155b0(&local_b20,",",0);
                                          puVar8 = FUN_00430770(&local_b20,local_3ac,iVar7 + 1U,
                                                                0xffffffff);
                                          if (0x14 < local_3a4) {
                    /* WARNING: Subroutine does not return */
                                            _free(local_3ac[0]);
                                          }
                                          if (puVar8[1] != 0) {
                                            puVar8 = FUN_00430770(&local_b20,local_36c,iVar7 + 1U,
                                                                  0xffffffff);
                                            local_4._0_1_ = 0x13;
                                            fVar17 = FUN_00567d60(puVar8);
                                            FUN_00407070(&iStack_ae0,(float)fVar17);
                                            local_b24[0x11] = iStack_ae0;
                                            local_4 = CONCAT31(local_4._1_3_,1);
                                            if (0x14 < uStack_364) {
                    /* WARNING: Subroutine does not return */
                                              _free(local_36c[0]);
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        iVar7 = FUN_004155b0(&local_b20,",",0);
                                        puVar8 = FUN_00430770(&local_b20,local_42c,iVar7 + 1U,
                                                              0xffffffff);
                                        if (0x14 < local_424) {
                    /* WARNING: Subroutine does not return */
                                          _free(local_42c[0]);
                                        }
                                        if (puVar8[1] != 0) {
                                          puVar8 = FUN_00430770(&local_b20,local_3ec,iVar7 + 1U,
                                                                0xffffffff);
                                          local_4._0_1_ = 0x12;
                                          fVar17 = FUN_00567d60(puVar8);
                                          local_b24[0x16] = (int)(float)fVar17;
                                          local_4 = CONCAT31(local_4._1_3_,1);
                                          if (0x14 < uStack_3e4) {
                    /* WARNING: Subroutine does not return */
                                            _free(local_3ec[0]);
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      iVar7 = FUN_004155b0(&local_b20,",",0);
                                      puVar8 = FUN_00430770(&local_b20,local_4ec,iVar7 + 1U,
                                                            0xffffffff);
                                      if (0x14 < local_4e4) {
                    /* WARNING: Subroutine does not return */
                                        _free(local_4ec[0]);
                                      }
                                      if (puVar8[1] != 0) {
                                        puVar8 = FUN_00430770(&local_b20,local_4ac,iVar7 + 1U,
                                                              0xffffffff);
                                        local_4._0_1_ = 0x11;
                                        fVar17 = FUN_00567d60(puVar8);
                                        local_b24[0x15] = (int)(float)fVar17;
                                        local_4 = CONCAT31(local_4._1_3_,1);
                                        if (0x14 < uStack_4a4) {
                    /* WARNING: Subroutine does not return */
                                          _free(local_4ac[0]);
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    iVar7 = FUN_004155b0(&local_b20,",",0);
                                    puVar8 = FUN_00430770(&local_b20,local_5ac,iVar7 + 1U,0xffffffff
                                                         );
                                    if (0x14 < local_5a4) {
                    /* WARNING: Subroutine does not return */
                                      _free(local_5ac[0]);
                                    }
                                    if (puVar8[1] != 0) {
                                      puVar8 = FUN_00430770(&local_b20,local_56c,iVar7 + 1U,
                                                            0xffffffff);
                                      local_4._0_1_ = 0x10;
                                      FUN_00567d60(puVar8);
                                      FUN_00442920((ulonglong *)(local_b24 + 0x1c));
                                      local_4 = CONCAT31(local_4._1_3_,1);
                                      if (0x14 < uStack_564) {
                    /* WARNING: Subroutine does not return */
                                        _free(local_56c[0]);
                                      }
                                    }
                                  }
                                }
                                else {
                                  iVar7 = FUN_004155b0(&local_b20,",",0);
                                  puVar8 = FUN_00430770(&local_b20,local_66c,iVar7 + 1U,0xffffffff);
                                  if (0x14 < local_664) {
                    /* WARNING: Subroutine does not return */
                                    _free(local_66c[0]);
                                  }
                                  if (puVar8[1] != 0) {
                                    puVar8 = FUN_00430770(&local_b20,local_62c,iVar7 + 1U,0xffffffff
                                                         );
                                    local_4._0_1_ = 0xf;
                                    fVar17 = FUN_00567d60(puVar8);
                                    local_b24[0x1b] = (int)(float)fVar17;
                                    local_4 = CONCAT31(local_4._1_3_,1);
                                    if (0x14 < uStack_624) {
                    /* WARNING: Subroutine does not return */
                                      _free(local_62c[0]);
                                    }
                                  }
                                }
                              }
                              else {
                                iVar7 = FUN_004155b0(&local_b20,",",0);
                                puVar8 = FUN_00430770(&local_b20,local_72c,iVar7 + 1U,0xffffffff);
                                if (0x14 < local_724) {
                    /* WARNING: Subroutine does not return */
                                  _free(local_72c[0]);
                                }
                                if (puVar8[1] != 0) {
                                  puVar8 = FUN_00430770(&local_b20,local_6ec,iVar7 + 1U,0xffffffff);
                                  local_4._0_1_ = 0xe;
                                  iVar7 = FUN_00567d80(puVar8);
                                  local_b24[0x1a] = iVar7;
                                  local_4 = CONCAT31(local_4._1_3_,1);
                                  if (0x14 < uStack_6e4) {
                    /* WARNING: Subroutine does not return */
                                    _free(local_6ec[0]);
                                  }
                                }
                              }
                            }
                            else {
                              iVar7 = FUN_004155b0(&local_b20,",",0);
                              puVar8 = FUN_00430770(&local_b20,local_7ec,iVar7 + 1U,0xffffffff);
                              if (0x14 < local_7e4) {
                    /* WARNING: Subroutine does not return */
                                _free(local_7ec[0]);
                              }
                              if (puVar8[1] != 0) {
                                puVar8 = FUN_00430770(&local_b20,local_7ac,iVar7 + 1U,0xffffffff);
                                local_4._0_1_ = 0xd;
                                fVar17 = FUN_00567d60(puVar8);
                                FUN_00407070(&iStack_ae8,(float)fVar17);
                                local_b24[0x10] = iStack_ae8;
                                local_4 = CONCAT31(local_4._1_3_,1);
                                if (0x14 < uStack_7a4) {
                    /* WARNING: Subroutine does not return */
                                  _free(local_7ac[0]);
                                }
                              }
                            }
                          }
                          else {
                            iVar7 = FUN_004155b0(&local_b20,",",0);
                            puVar8 = FUN_00430770(&local_b20,local_44c,iVar7 + 1U,0xffffffff);
                            if (0x14 < local_444) {
                    /* WARNING: Subroutine does not return */
                              _free(local_44c[0]);
                            }
                            if (puVar8[1] != 0) {
                              puVar8 = FUN_00430770(&local_b20,local_84c,iVar7 + 1U,0xffffffff);
                              local_4._0_1_ = 0xc;
                              fVar17 = FUN_00567d60(puVar8);
                              FUN_00407070(&iStack_acc,(float)fVar17);
                              local_b24[0xf] = iStack_acc;
                              local_4 = CONCAT31(local_4._1_3_,1);
                              if (0x14 < uStack_844) {
                    /* WARNING: Subroutine does not return */
                                _free(local_84c[0]);
                              }
                            }
                          }
                        }
                        else {
                          iVar7 = FUN_004155b0(&local_b20,",",0);
                          puVar8 = FUN_00430770(&local_b20,local_14c,iVar7 + 1U,0xffffffff);
                          if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
                            _free(local_14c[0]);
                          }
                          if (puVar8[1] != 0) {
                            puVar8 = FUN_00430770(&local_b20,local_48c,iVar7 + 1U,0xffffffff);
                            local_4._0_1_ = 0xb;
                            fVar17 = FUN_00567d60(puVar8);
                            FUN_00407070(&iStack_ab4,(float)fVar17);
                            local_b24[0xd] = iStack_ab4;
                            local_4 = CONCAT31(local_4._1_3_,1);
                            if (0x14 < uStack_484) {
                    /* WARNING: Subroutine does not return */
                              _free(local_48c[0]);
                            }
                          }
                        }
                      }
                      else {
                        iVar7 = FUN_004155b0(&local_b20,",",0);
                        puVar8 = FUN_00430770(&local_b20,local_50c,iVar7 + 1U,0xffffffff);
                        if (0x14 < local_504) {
                    /* WARNING: Subroutine does not return */
                          _free(local_50c[0]);
                        }
                        if (puVar8[1] != 0) {
                          puVar8 = FUN_00430770(&local_b20,local_28c,iVar7 + 1U,0xffffffff);
                          local_4._0_1_ = 10;
                          fVar17 = FUN_00567d60(puVar8);
                          FUN_00407070(&iStack_ad4,(float)fVar17);
                          local_b24[0xe] = iStack_ad4;
                          local_4 = CONCAT31(local_4._1_3_,1);
                          if (0x14 < uStack_284) {
                    /* WARNING: Subroutine does not return */
                            _free(local_28c[0]);
                          }
                        }
                      }
                    }
                    else {
                      iVar7 = FUN_004155b0(&local_b20,",",0);
                      uVar6 = FUN_00448370(&local_b20," ",0);
                      puVar8 = FUN_00430770(&local_b20,local_58c,iVar7 + 1U,0xffffffff);
                      if (0x14 < local_584) {
                    /* WARNING: Subroutine does not return */
                        _free(local_58c[0]);
                      }
                      if (puVar8[1] != 0) {
                        puVar8 = FUN_00430770(&local_b20,local_54c,iVar7 + 1U,0xffffffff);
                        local_4._0_1_ = 8;
                        fVar17 = FUN_00567d60(puVar8);
                        FUN_00407070(&uStack_ac4,(float)fVar17);
                        puVar8 = FUN_00430770(&local_b20,apvStack_2cc,0,uVar6);
                        local_4._0_1_ = 9;
                        uStack_adc = GenreKey_ToEnum(puVar8);
                        puVar12 = FUN_0050f740(local_b24 + 0x17,&uStack_adc);
                        *puVar12 = uStack_ac4;
                        if (0x14 < uStack_2c4) {
                    /* WARNING: Subroutine does not return */
                          _free(apvStack_2cc[0]);
                        }
                        local_4 = CONCAT31(local_4._1_3_,1);
                        if (0x14 < uStack_544) {
                    /* WARNING: Subroutine does not return */
                          _free(local_54c[0]);
                        }
                      }
                    }
                  }
                  else {
                    iVar7 = FUN_004155b0(&local_b20,",",0);
                    puVar8 = FUN_00430770(&local_b20,local_5cc,iVar7 + 1U,0xffffffff);
                    if (0x14 < local_5c4) {
                    /* WARNING: Subroutine does not return */
                      _free(local_5cc[0]);
                    }
                    if (puVar8[1] != 0) {
                      puVar8 = FUN_00430770(&local_b20,local_18c,iVar7 + 1U,0xffffffff);
                      local_4._0_1_ = 7;
                      fVar17 = FUN_00567d60(puVar8);
                      FUN_00407070(&iStack_abc,(float)fVar17);
                      local_b24[0xc] = iStack_abc;
                      local_4 = CONCAT31(local_4._1_3_,1);
                      if (0x14 < uStack_184) {
                    /* WARNING: Subroutine does not return */
                        _free(local_18c[0]);
                      }
                    }
                  }
                }
                else {
                  uVar6 = FUN_00413450(&local_b20,",",0,1);
                  puVar8 = FUN_00430770(&local_b20,local_8c,uVar6 + 1,0xffffffff);
                  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
                    _free(local_8c[0]);
                  }
                  if (puVar8[1] != 0) {
                    puVar8 = FUN_00430770(&local_b20,local_60c,uVar6 + 1,0xffffffff);
                    local_4._0_1_ = 6;
                    fVar17 = FUN_00567d60(puVar8);
                    FUN_00407070(&iStack_ae4,(float)fVar17);
                    local_b24[10] = iStack_ae4;
                    local_4 = CONCAT31(local_4._1_3_,1);
                    if (0x14 < uStack_604) {
                    /* WARNING: Subroutine does not return */
                      _free(local_60c[0]);
                    }
                  }
                }
              }
              else {
                uVar6 = FUN_00413450(&local_b20,",",0,1);
                puVar8 = FUN_00430770(&local_b20,local_86c,uVar6 + 1,0xffffffff);
                if (0x14 < local_864) {
                    /* WARNING: Subroutine does not return */
                  _free(local_86c[0]);
                }
                if (puVar8[1] != 0) {
                  puVar8 = FUN_00430770(&local_b20,local_34c,uVar6 + 1,0xffffffff);
                  local_4._0_1_ = 5;
                  fVar17 = FUN_00567d60(puVar8);
                  FUN_00407070(&iStack_ab0,(float)fVar17);
                  local_b24[0xb] = iStack_ab0;
                  local_4 = CONCAT31(local_4._1_3_,1);
                  if (0x14 < uStack_344) {
                    /* WARNING: Subroutine does not return */
                    _free(local_34c[0]);
                  }
                }
              }
            }
          }
        }
      }
      bVar4 = true;
    }
    uVar6 = FUN_00552520(param_1,&local_b20);
    bVar16 = bVar4;
    cVar5 = (char)uVar6;
  }
  if ((DAT_0104bd34 == 0) ||
     ((uint)(DAT_0104bd3c - DAT_0104bd34 >> 2) <= (uint)((int)DAT_0104bd38 - DAT_0104bd34 >> 2))) {
    FUN_0050eec0(&DAT_0104bd30,DAT_0104bd38,1,&local_b00);
  }
  else {
    *DAT_0104bd38 = local_b24;
    DAT_0104bd38 = DAT_0104bd38 + 1;
  }
  if (0x14 < local_b18) {
                    /* WARNING: Subroutine does not return */
    _free(local_b20);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00512450 @ 00512450 ////

void FUN_00512450(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Memory;
  int *piVar4;
  
  puVar2 = DAT_0104bd34;
  if ((int **)DAT_0104bcf0 != &DAT_0104bcfc) {
    do {
      piVar4 = DAT_0104bcfc;
      puVar2 = (undefined4 *)DAT_0104bcfc[2];
      piVar1 = DAT_0104bcfc + 1;
      if ((int *)DAT_0104bcfc[1] != (int *)0x0) {
        *(int *)DAT_0104bcfc[1] = *DAT_0104bcfc;
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
      puVar2 = DAT_0104bd34;
    } while ((int **)DAT_0104bcf0 != &DAT_0104bcfc);
  }
  for (; puVar2 != DAT_0104bd38; puVar2 = puVar2 + 1) {
    _Memory = (void *)*puVar2;
    if (_Memory != (void *)0x0) {
      FUN_005102c0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if (DAT_0104bd34 == (undefined4 *)0x0) {
    DAT_0104bd34 = (undefined4 *)0x0;
    DAT_0104bd38 = (undefined4 *)0x0;
    DAT_0104bd3c = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_0104bd34);
}


//// FUNCTION AIStudios_LoadRuleCsv @ 00512510 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AIStudios_LoadRuleCsv(void)

{
  undefined1 *_Memory;
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  float10 fVar6;
  char *local_244;
  undefined4 local_240;
  uint local_23c;
  char local_238 [20];
  undefined1 *local_224;
  int local_220;
  uint local_21c;
  undefined1 local_218 [20];
  float fStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  char *local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  char local_1e8 [20];
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined1 *local_1cc;
  undefined4 local_1c8;
  uint local_1c4;
  undefined1 local_1c0 [20];
  undefined1 *local_1ac [2];
  uint uStack_1a4;
  undefined1 *local_18c [2];
  uint uStack_184;
  undefined1 *local_16c [2];
  uint uStack_164;
  undefined1 *local_14c [2];
  uint uStack_144;
  undefined1 *local_12c [2];
  uint uStack_124;
  undefined1 *local_10c [2];
  uint uStack_104;
  undefined1 *local_ec [2];
  uint uStack_e4;
  undefined1 *local_cc [2];
  uint uStack_c4;
  undefined1 *local_ac [2];
  uint uStack_a4;
  undefined1 *local_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint local_64;
  undefined1 *local_4c [2];
  uint uStack_44;
  undefined1 *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cace05;
  pvStack_c = ExceptionList;
  local_1f4 = local_1e8;
  local_1e8[0] = '\0';
  local_1f0 = 0;
  local_1ec = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_1f4,"",0);
  local_1f0 = 0;
  *local_1f4 = '\0';
  local_1d4 = 0;
  local_1d0 = 0;
  local_244 = local_238;
  local_4 = 0;
  local_238[0] = '\0';
  local_240 = 0;
  local_23c = 0x20;
  local_244 = _malloc(0x20);
  _strncpy(local_244,"data/rule/aistudios.csv",0x17);
  local_240 = 0x17;
  local_244[0x17] = '\0';
  local_4._0_1_ = 1;
  FUN_00553a50(&local_1f4,&local_244);
  if (0x14 < local_23c) {
                    /* WARNING: Subroutine does not return */
    _free(local_244);
  }
  local_224 = local_218;
  local_218[0] = 0;
  local_220 = 0;
  local_21c = 0x14;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar2 = FUN_00552520(&local_1f4,&local_224);
  cVar1 = (char)uVar2;
  do {
    if (cVar1 == '\0') {
      if (0x14 < local_21c) {
                    /* WARNING: Subroutine does not return */
        _free(local_224);
      }
      local_4 = 0xffffffff;
      FUN_00552ce0(&local_1f4);
      ExceptionList = pvStack_c;
      return;
    }
    if (local_220 != 0) {
      FUN_0056ac50(&local_244,&local_224);
      local_4._0_1_ = 3;
      uVar2 = FUN_00413450(&local_244,"Appearingvariance",0,0x11);
      if (uVar2 == 0xffffffff) {
        uVar2 = FUN_00413450(&local_244,"Studio",0,6);
        if (uVar2 == 0xffffffff) {
          uVar2 = FUN_00413450(&local_244,"Moviereleasedesire",0,0x12);
          if (uVar2 == 0xffffffff) {
            uVar2 = FUN_00413450(&local_244,"Successtarget",0,0xd);
            if (uVar2 == 0xffffffff) {
              uVar2 = FUN_00413450(&local_244,"Differencetarget",0,0x10);
              if (uVar2 == 0xffffffff) {
                uVar2 = FUN_00413450(&local_244,"Deviationtarget",0,0xf);
                if (uVar2 == 0xffffffff) {
                  iVar4 = FUN_004155b0(&local_244,"Differencemultiplier",0);
                  if (iVar4 == -1) {
                    iVar4 = FUN_004155b0(&local_244,"Deviationmultiplier",0);
                    if (iVar4 == -1) {
                      iVar4 = FUN_004155b0(&local_244,"Minimumtime",0);
                      if (iVar4 == -1) {
                        iVar4 = FUN_004155b0(&local_244,"Maximumtime",0);
                        if (iVar4 == -1) {
                          iVar4 = FUN_004155b0(&local_244,"Timebetween",0);
                          if (iVar4 == -1) {
                            iVar4 = FUN_004155b0(&local_244,"Rivalexperiencegainmultiplier",0);
                            if (iVar4 == -1) {
                              iVar4 = FUN_004155b0(&local_244,"Rivalexperiencegainconstant",0);
                              if (iVar4 == -1) {
                                iVar4 = FUN_004155b0(&local_244,"Researchprobabilitycurve:",0);
                                if (iVar4 == -1) goto LAB_00512bd9;
                                local_1cc = local_1c0;
                                local_1c0[0] = 0;
                                local_1c8 = 0;
                                local_1c4 = 0x14;
                                local_4._0_1_ = 0x10;
                                while( true ) {
                                  puVar3 = FUN_0056ac50(local_6c,&local_224);
                                  pvVar5 = FUN_00401e30(&local_1cc,puVar3);
                                  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
                                    _free(local_6c[0]);
                                  }
                                  _Memory = local_1cc;
                                  uVar2 = local_1c4;
                                  if (*(int *)((int)pvVar5 + 4) == 0) break;
                                  fVar6 = FUN_00567d60(&local_1cc);
                                  fStack_204 = (float)fVar6;
                                  FUN_004823e0(&DAT_00f87a64,&fStack_204);
                                }
                              }
                              else {
                                puVar3 = FUN_0056ac50(local_ac,&local_224);
                                local_4._0_1_ = 0xf;
                                fVar6 = FUN_00567d60(puVar3);
                                _DAT_0104bd80 = (float)fVar6;
                                _Memory = local_ac[0];
                                uVar2 = uStack_a4;
                              }
                            }
                            else {
                              puVar3 = FUN_0056ac50(local_ec,&local_224);
                              local_4._0_1_ = 0xe;
                              fVar6 = FUN_00567d60(puVar3);
                              _DAT_0104bd7c = (float)fVar6;
                              _Memory = local_ec[0];
                              uVar2 = uStack_e4;
                            }
                          }
                          else {
                            puVar3 = FUN_0056ac50(local_12c,&local_224);
                            local_4._0_1_ = 0xd;
                            fVar6 = FUN_00567d60(puVar3);
                            FUN_0043b700(&DAT_0104bda0,(float)fVar6);
                            _Memory = local_12c[0];
                            uVar2 = uStack_124;
                          }
                        }
                        else {
                          puVar3 = FUN_0056ac50(local_16c,&local_224);
                          local_4._0_1_ = 0xc;
                          fVar6 = FUN_00567d60(puVar3);
                          FUN_0043b700(&DAT_0104bd9c,(float)fVar6);
                          _Memory = local_16c[0];
                          uVar2 = uStack_164;
                        }
                      }
                      else {
                        puVar3 = FUN_0056ac50(local_18c,&local_224);
                        local_4._0_1_ = 0xb;
                        fVar6 = FUN_00567d60(puVar3);
                        FUN_0043b700(&DAT_0104bd98,(float)fVar6);
                        _Memory = local_18c[0];
                        uVar2 = uStack_184;
                      }
                    }
                    else {
                      puVar3 = FUN_0056ac50(local_8c,&local_224);
                      local_4._0_1_ = 10;
                      fVar6 = FUN_00567d60(puVar3);
                      _DAT_0104bd78 = (float)fVar6;
                      _Memory = local_8c[0];
                      uVar2 = uStack_84;
                    }
                  }
                  else {
                    puVar3 = FUN_0056ac50(local_10c,&local_224);
                    local_4._0_1_ = 9;
                    fVar6 = FUN_00567d60(puVar3);
                    _DAT_0104bd74 = (float)fVar6;
                    _Memory = local_10c[0];
                    uVar2 = uStack_104;
                  }
                }
                else {
                  puVar3 = FUN_0056ac50(local_4c,&local_224);
                  local_4._0_1_ = 8;
                  fVar6 = FUN_00567d60(puVar3);
                  FUN_00407070(&uStack_200,(float)fVar6);
                  _DAT_0104bd94 = uStack_200;
                  _Memory = local_4c[0];
                  uVar2 = uStack_44;
                }
              }
              else {
                puVar3 = FUN_0056ac50(local_1ac,&local_224);
                local_4._0_1_ = 7;
                fVar6 = FUN_00567d60(puVar3);
                FUN_00407070(&uStack_1f8,(float)fVar6);
                _DAT_0104bd90 = uStack_1f8;
                _Memory = local_1ac[0];
                uVar2 = uStack_1a4;
              }
            }
            else {
              puVar3 = FUN_0056ac50(local_cc,&local_224);
              local_4._0_1_ = 6;
              fVar6 = FUN_00567d60(puVar3);
              FUN_00407070(&uStack_1fc,(float)fVar6);
              _DAT_0104bd8c = uStack_1fc;
              _Memory = local_cc[0];
              uVar2 = uStack_c4;
            }
          }
          else {
            puVar3 = FUN_0056ac50(local_2c,&local_224);
            local_4._0_1_ = 5;
            fVar6 = FUN_00567d60(puVar3);
            if ((float10)0.0 <= fVar6) {
              if ((float10)1.0 < fVar6) {
                fVar6 = (float10)1.0;
              }
            }
            else {
              fVar6 = (float10)0.0;
            }
            _DAT_0104bd88 = (float)fVar6;
            _Memory = local_2c[0];
            uVar2 = uStack_24;
          }
          goto joined_r0x00512bc7;
        }
        FUN_00510560(&local_1f4);
      }
      else {
        puVar3 = FUN_0056ac50(local_14c,&local_224);
        local_4._0_1_ = 4;
        fVar6 = FUN_00567d60(puVar3);
        FUN_0043b700(&DAT_0104bd2c,(float)fVar6);
        _Memory = local_14c[0];
        uVar2 = uStack_144;
joined_r0x00512bc7:
        if (0x14 < uVar2) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
LAB_00512bd9:
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0x14 < local_23c) {
                    /* WARNING: Subroutine does not return */
        _free(local_244);
      }
    }
    uVar2 = FUN_00552520(&local_1f4,&local_224);
    cVar1 = (char)uVar2;
  } while( true );
}


//// FUNCTION StudioReputation_Constructor @ 00512c50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void StudioReputation_Constructor(void)

{
  float10 fVar1;
  int *piVar2;
  float10 fVar3;
  ulonglong uVar4;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cacec8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = FUN_0051c200();
  (*(code *)DAT_0104bcd0[1])();
  DAT_0104bce4 = piVar2;
  (*(code *)*DAT_0104bcd0)();
  FUN_0051b980(piVar2);
  if (DAT_0104dcf8 != '\0') {
    (**(code **)(*DAT_0104bce4 + 0x1c))(&PTR_DAT_00e57d2c);
    (**(code **)(*DAT_0104bce4 + 0x50))(DAT_0104dd34);
    FUN_004036d0(piVar2 + 0x8d,(wchar_t *)PTR_DAT_00e57d4c,DAT_00e57d50);
  }
  (**(code **)(*DAT_0104bce4 + 0xc))();
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"studio",6);
  uStack_28 = 6;
  pcStack_2c[6] = '\0';
  uStack_4 = 0;
  FUN_00558a50(DAT_00f88624,&pcStack_2c,(undefined4 *)0x1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"reputationinertia",0x11);
  uStack_28 = 0x11;
  pcStack_2c[0x11] = '\0';
  uStack_4 = 1;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  _DAT_00e5218c = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"reputationhalflife",0x12);
  uStack_28 = 0x12;
  pcStack_2c[0x12] = '\0';
  uStack_4 = 2;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  fVar1 = (float10)log2((float10)2.0);
  uStack_24 = 0x20;
  _DAT_00e52188 = (float)(((float10)0.6931471805599453 * fVar1) / (float10)(float)fVar3);
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"prestigeenvironmentfactor",0x19);
  uStack_28 = 0x19;
  pcStack_2c[0x19] = '\0';
  uStack_4 = 3;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  DAT_00e52190 = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x20;
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"prestigeconnectednessfactor",0x1b);
  uStack_28 = 0x1b;
  pcStack_2c[0x1b] = '\0';
  uStack_4 = 4;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  DAT_00e52194 = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x20;
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"prestigerepairfactor",0x14);
  uStack_28 = 0x14;
  pcStack_2c[0x14] = '\0';
  uStack_4 = 5;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  _DAT_00e52198 = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x20;
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"prestigecateringfactor",0x16);
  uStack_28 = 0x16;
  pcStack_2c[0x16] = '\0';
  uStack_4 = 6;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  DAT_00e5219c = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x20;
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"prestigetoiletfactor",0x14);
  uStack_28 = 0x14;
  pcStack_2c[0x14] = '\0';
  uStack_4 = 7;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  DAT_00e521a0 = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x20;
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"prestigeornamentfactor",0x16);
  uStack_28 = 0x16;
  pcStack_2c[0x16] = '\0';
  uStack_4 = 8;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  DAT_00e521a4 = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x20;
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"prestigelitterfactor",0x14);
  uStack_28 = 0x14;
  pcStack_2c[0x14] = '\0';
  uStack_4 = 9;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  _DAT_00e521a8 = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x20;
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"starratingprestigefactor",0x18);
  uStack_28 = 0x18;
  pcStack_2c[0x18] = '\0';
  uStack_4 = 10;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  _DAT_00e521ac = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x20;
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"starratingreputationfactor",0x1a);
  uStack_28 = 0x1a;
  pcStack_2c[0x1a] = '\0';
  uStack_4 = 0xb;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  _DAT_00e521b0 = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x20;
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"starratingmoneyfactor",0x15);
  uStack_28 = 0x15;
  pcStack_2c[0x15] = '\0';
  uStack_4 = 0xc;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  _DAT_00e521b4 = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x20;
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"starratingstarsfactor",0x15);
  uStack_28 = 0x15;
  pcStack_2c[0x15] = '\0';
  uStack_4 = 0xd;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  _DAT_00e521b8 = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x20;
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"starratingawardsfactor",0x16);
  uStack_28 = 0x16;
  pcStack_2c[0x16] = '\0';
  uStack_4 = 0xe;
  fVar3 = FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  _DAT_00e521bc = (float)fVar3;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"capital0star",0xc);
  uStack_28 = 0xc;
  pcStack_2c[0xc] = '\0';
  uStack_4 = 0xf;
  FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  uVar4 = FUN_00acd42c();
  DAT_0104bd44 = (undefined4)(uVar4 >> 0x20);
  DAT_0104bd40 = (undefined4)uVar4;
  FUN_00471b10((longlong *)&DAT_0104bd40);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"capital1star",0xc);
  uStack_28 = 0xc;
  pcStack_2c[0xc] = '\0';
  uStack_4 = 0x10;
  FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  uVar4 = FUN_00acd42c();
  DAT_0104bd4c = (undefined4)(uVar4 >> 0x20);
  DAT_0104bd48 = (undefined4)uVar4;
  FUN_00471b10((longlong *)&DAT_0104bd48);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"capital2star",0xc);
  uStack_28 = 0xc;
  pcStack_2c[0xc] = '\0';
  uStack_4 = 0x11;
  FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  _DAT_0104bd50 = FUN_00acd42c();
  FUN_00471b10((longlong *)&DAT_0104bd50);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"capital3star",0xc);
  uStack_28 = 0xc;
  pcStack_2c[0xc] = '\0';
  uStack_4 = 0x12;
  FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  _DAT_0104bd58 = FUN_00acd42c();
  FUN_00471b10((longlong *)&DAT_0104bd58);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"capital4star",0xc);
  uStack_28 = 0xc;
  pcStack_2c[0xc] = '\0';
  uStack_4 = 0x13;
  FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  _DAT_0104bd60 = FUN_00acd42c();
  FUN_00471b10((longlong *)&DAT_0104bd60);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"capital5star",0xc);
  uStack_28 = 0xc;
  pcStack_2c[0xc] = '\0';
  uStack_4 = 0x14;
  FUN_00558610(DAT_00f88624,&pcStack_2c,0.0);
  _DAT_0104bd68 = FUN_00acd42c();
  FUN_00471b10((longlong *)&DAT_0104bd68);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"stu_reputation",0xe);
  uStack_28 = 0xe;
  pcStack_2c[0xe] = '\0';
  uStack_4 = 0x15;
  FUN_005434b0();
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"stu_showprestige",0x10);
  uStack_28 = 0x10;
  pcStack_2c[0x10] = '\0';
  uStack_4 = 0x16;
  FUN_005434b0();
  uStack_4 = 0xffffffff;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  AIStudios_LoadRuleCsv();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION CStudioAI_PostLoadSetup @ 00513750 ////

void __fastcall CStudioAI_PostLoadSetup(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005137c0 @ 005137c0 ////

void __fastcall FUN_005137c0(int param_1)

{
  float *pfVar1;
  void *this;
  undefined4 *puVar2;
  float10 fVar3;
  float *pfVar4;
  float fVar5;
  undefined1 local_c [4];
  float local_8;
  float local_4;
  
  fVar3 = FUN_0043b710((float *)&DAT_0104bda0);
  fVar5 = (float)(fVar3 * (float10)0.2);
  fVar3 = FUN_0043b710((float *)&DAT_0104bda0);
  fVar3 = FUN_00990e30((float)-(fVar3 * (float10)0.2),fVar5);
  pfVar1 = (float *)FUN_0043b520(local_c,(float)fVar3);
  pfVar4 = &local_8;
  this = (void *)FUN_0043b600(&stack0x00000004,&local_4,(float *)&DAT_0104bda0);
  puVar2 = (undefined4 *)FUN_0043b600(this,pfVar4,pfVar1);
  *(undefined4 *)(param_1 + 0x2a4) = *puVar2;
  return;
}


//// FUNCTION FUN_00513890 @ 00513890 ////

void FUN_00513890(void)

{
  DAT_00e52284 = 1;
  return;
}


//// FUNCTION FUN_005138b0 @ 005138b0 ////

int * __thiscall FUN_005138b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005138f0 @ 005138f0 ////

int * __thiscall FUN_005138f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00513a50 @ 00513a50 ////

void __fastcall FUN_00513a50(int *param_1)

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


//// FUNCTION FUN_00513b20 @ 00513b20 ////

void FUN_00513b20(void)

{
  FUN_0098fd30("LogoNum",&DAT_00e52284,1);
  return;
}


//// FUNCTION CStudioAI_DriftPrestigeAndWellBeing @ 00513bf0 ////

void __fastcall CStudioAI_DriftPrestigeAndWellBeing(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_4;
  
  fVar1 = *(float *)(param_1 + 0x270) * 0.1;
  if (0.0 <= fVar1) {
    local_4 = fVar1;
    if (1.0 < fVar1) {
      local_4 = 1.0;
    }
  }
  else {
    local_4 = 0.0;
  }
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar3 = FUN_00990e30(-fVar1,local_4);
  fVar3 = fVar3 + (float10)*(float *)(param_1 + 300);
  if ((float10)0.0 <= fVar3) {
    if ((float10)1.0 < fVar3) {
      fVar3 = (float10)1.0;
    }
  }
  else {
    fVar3 = (float10)0.0;
  }
  *(float *)(param_1 + 300) = (float)fVar3;
  fVar1 = *(float *)(param_1 + 0x26c) + *(float *)(param_1 + 0x270);
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
    if (1.0 < fVar1) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  if (*(float *)(param_1 + 300) <= fVar2) {
    local_4 = *(float *)(param_1 + 0x26c) - *(float *)(param_1 + 0x270);
    if (0.0 <= local_4) {
      fVar1 = local_4;
      if (1.0 < local_4) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    if (*(float *)(param_1 + 300) < fVar1) {
      if (0.0 <= local_4) {
        if (1.0 < local_4) {
          local_4 = 1.0;
        }
      }
      else {
        local_4 = 0.0;
      }
      FUN_00407070(&local_4,local_4);
      *(float *)(param_1 + 300) = local_4;
    }
  }
  else if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
LAB_00513d78:
      fVar1 = 1.0;
    }
    else {
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_1 + 300) = 0;
        goto LAB_00513e2a;
      }
      if (1.0 < fVar1) goto LAB_00513d78;
    }
    *(float *)(param_1 + 300) = fVar1;
  }
  else {
    *(undefined4 *)(param_1 + 300) = 0;
  }
LAB_00513e2a:
  fVar1 = *(float *)(param_1 + 0x274) * 0.1;
  if (0.0 <= fVar1) {
    local_4 = fVar1;
    if (1.0 < fVar1) {
      local_4 = 1.0;
    }
  }
  else {
    local_4 = 0.0;
  }
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar3 = FUN_00990e30(-fVar1,local_4);
  fVar3 = fVar3 + (float10)*(float *)(param_1 + 0x264);
  if ((float10)0.0 <= fVar3) {
    if ((float10)1.0 < fVar3) {
      fVar3 = (float10)1.0;
    }
  }
  else {
    fVar3 = (float10)0.0;
  }
  *(float *)(param_1 + 0x264) = (float)fVar3;
  fVar1 = *(float *)(param_1 + 0x268) + *(float *)(param_1 + 0x274);
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
    if (1.0 < fVar1) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  if (*(float *)(param_1 + 0x264) <= fVar2) {
    local_4 = *(float *)(param_1 + 0x268) - *(float *)(param_1 + 0x274);
    if (0.0 <= local_4) {
      fVar1 = local_4;
      if (1.0 < local_4) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    if (*(float *)(param_1 + 0x264) < fVar1) {
      if (0.0 <= local_4) {
        if (1.0 < local_4) {
          local_4 = 1.0;
        }
      }
      else {
        local_4 = 0.0;
      }
      FUN_00407070(&local_4,local_4);
      *(float *)(param_1 + 0x264) = local_4;
    }
    return;
  }
  if (fVar1 < 0.0) {
LAB_00513f75:
    *(undefined4 *)(param_1 + 0x264) = 0;
    return;
  }
  if (fVar1 <= 1.0) {
    if (fVar1 < 0.0) goto LAB_00513f75;
    if (fVar1 <= 1.0) goto LAB_00513f9d;
  }
  fVar1 = 1.0;
LAB_00513f9d:
  *(float *)(param_1 + 0x264) = fVar1;
  return;
}


//// FUNCTION CStudioAI_ComputeSuccessDifference @ 00514050 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall CStudioAI_ComputeSuccessDifference(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  undefined1 local_8 [8];
  
  pfVar4 = (float *)(**(code **)(*DAT_0104bce4 + 0x84))(local_8);
  fVar1 = *pfVar4;
  fVar3 = (1.0 - _DAT_0104bd8c) * fVar1;
  fVar5 = (float10)fVar1;
  fVar2 = (_DAT_0104bd8c + fVar3) - fVar3;
  if (fVar2 != 0.0) {
    pfVar4 = (float *)(**(code **)(*param_1 + 0x84))(local_8);
    fVar5 = (float10)*pfVar4 - (float10)fVar3;
    if (fVar5 < (float10)0.0) {
      return (float10)0.0 / (float10)fVar2 - (float10)fVar1;
    }
    if ((float10)1.0 < fVar5) {
      fVar5 = (float10)1.0;
    }
    fVar5 = fVar5 / (float10)fVar2;
  }
  return fVar5 - (float10)fVar1;
}


//// FUNCTION FUN_00514110 @ 00514110 ////

void __fastcall FUN_00514110(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *this_00;
  float10 fVar6;
  float *pfVar7;
  float fVar8;
  float local_10;
  float local_c;
  float local_8;
  undefined1 local_4 [4];
  
  pfVar1 = (float *)FUN_0043b520(&local_c,2000.0);
  uVar2 = FUN_0043b680(&DAT_00e4fa4c,pfVar1);
  if ((char)uVar2 != '\0') goto LAB_0051418a;
  iVar3 = *(int *)(param_1 + 0x94);
  iVar5 = 0;
  if (iVar3 == param_1 + 0xa0) {
LAB_00514175:
    local_c = (float)(*(int *)(param_1 + 0x214) - *(int *)(param_1 + 0x210));
  }
  else {
    do {
      iVar3 = *(int *)(iVar3 + 4);
      iVar5 = iVar5 + 1;
    } while (iVar3 != param_1 + 0xa0);
    if (iVar5 == 0) goto LAB_00514175;
    iVar5 = 0;
    for (iVar3 = *(int *)(param_1 + 0x94); iVar3 != param_1 + 0xa0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar5 = iVar5 + 1;
    }
    local_c = (float)(*(int *)(param_1 + 0x214) - iVar5);
  }
  if (0 < (int)local_c) {
    pfVar7 = (float *)&DAT_00e4fa4c;
    pfVar1 = &local_8;
    this = (void *)FUN_0043b520(local_4,2005.0);
    pfVar1 = (float *)FUN_0043b620(this,pfVar1,pfVar7);
    fVar6 = FUN_0043b710(pfVar1);
    FUN_0043b520(&local_10,(float)(fVar6 / (float10)(int)local_c));
    this_00 = (undefined4 *)(param_1 + 0x2a0);
    fVar6 = FUN_0043b710(&local_10);
    fVar8 = (float)(fVar6 * (float10)0.1);
    fVar6 = FUN_0043b710(&local_10);
    fVar6 = FUN_00990e30((float)-(fVar6 * (float10)0.1),fVar8);
    local_c = (float)fVar6;
    fVar6 = FUN_0043b710((float *)&DAT_00e4fa4c);
    local_c = (float)(fVar6 + (float10)local_c);
    fVar6 = FUN_0043b710(&local_10);
    FUN_0043b700(this_00,(float)(fVar6 + (float10)local_c));
    pfVar1 = (float *)FUN_0043b520(local_4,2000.0);
    uVar2 = FUN_0043b680(this_00,pfVar1);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_0043b6c0(this_00,(float *)&DAT_00e4fa4c);
      if ((char)uVar2 != '\0') {
        pfVar1 = (float *)FUN_0043b520(local_4,0.02);
        puVar4 = (undefined4 *)FUN_0043b600(&DAT_00e4fa4c,&local_8,pfVar1);
        *this_00 = *puVar4;
      }
      return;
    }
    FUN_0043b700(this_00,2000.0);
    return;
  }
LAB_0051418a:
  FUN_0043b700((void *)(param_1 + 0x2a0),3000.0);
  return;
}


//// FUNCTION FUN_005142a0 @ 005142a0 ////

undefined4 __fastcall FUN_005142a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caceeb;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x2c0) == 0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x70);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_0040a0f0(puVar1);
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)(param_1 + 0x2ac) + 4))();
    *(undefined4 **)(param_1 + 0x2c0) = puVar2;
    (*(code *)**(undefined4 **)(param_1 + 0x2ac))();
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0x2c0);
}


//// FUNCTION FUN_00514320 @ 00514320 ////

undefined4 __fastcall FUN_00514320(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cacf0b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x2d8) == 0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x70);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_005a2450(puVar1);
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)(param_1 + 0x2c4) + 4))();
    *(undefined4 **)(param_1 + 0x2d8) = puVar2;
    (*(code *)**(undefined4 **)(param_1 + 0x2c4))();
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0x2d8);
}


//// FUNCTION FUN_005143a0 @ 005143a0 ////

undefined4 __fastcall FUN_005143a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cacf2b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x2f0) == 0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x70);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_005a2450(puVar1);
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)(param_1 + 0x2dc) + 4))();
    *(undefined4 **)(param_1 + 0x2f0) = puVar2;
    (*(code *)**(undefined4 **)(param_1 + 0x2dc))();
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0x2f0);
}


//// FUNCTION FUN_00514420 @ 00514420 ////

void __thiscall FUN_00514420(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x264);
  return;
}


//// FUNCTION FUN_00514430 @ 00514430 ////

undefined4 __fastcall FUN_00514430(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *unaff_ESI;
  undefined4 local_2c;
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cacf48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = FUN_009b5030(&local_2c,(undefined4 *)(param_1 + 0x18c));
  local_4 = 0;
  uVar2 = (**(code **)(*(int *)(param_1 + -100) + 0x1c))(puVar1);
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  ExceptionList = pvStack_10;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_005145d0 @ 005145d0 ////

undefined4 * __thiscall FUN_005145d0(void *this,undefined4 *param_1)

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
LAB_00514614:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00514619;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00514614;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00514619:
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


//// FUNCTION FUN_00514650 @ 00514650 ////

int * __fastcall FUN_00514650(int *param_1)

{
  FUN_00513a50(param_1);
  return param_1;
}


//// FUNCTION CStudioAI_DeserializeObject @ 00514660 ////

void __fastcall CStudioAI_DeserializeObject(int *param_1)

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
  puStack_8 = &LAB_00cacf68;
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


//// FUNCTION FUN_00514730 @ 00514730 ////

void __fastcall FUN_00514730(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  
  iVar2 = FUN_005143a0(param_1);
  FUN_005a1f10(iVar2);
  FUN_0043b970(0xe4fa4c);
  puVar3 = (uint *)(param_1 + 0x218);
  uVar4 = FUN_00acd42c();
  uVar1 = *puVar3;
  *puVar3 = uVar1 - (uint)uVar4;
  *(uint *)(param_1 + 0x21c) =
       (*(int *)(param_1 + 0x21c) - (int)(uVar4 >> 0x20)) - (uint)(uVar1 < (uint)uVar4);
  FUN_00471b10((longlong *)puVar3);
  return;
}


//// FUNCTION FUN_00514790 @ 00514790 ////

void __thiscall FUN_00514790(void *this,void *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int iStack_8;
  
  do {
    iVar2 = *(int *)((int)this + 0x94);
    uVar3 = 0;
    if (iVar2 != (int)this + 0xa0) {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        uVar3 = uVar3 + 1;
      } while (iVar2 != (int)this + 0xa0);
      if (1 < uVar3) {
        iVar4 = 0;
        for (iVar2 = *(int *)((int)this + 0x94); iVar2 != (int)this + 0xa0;
            iVar2 = *(int *)(iVar2 + 4)) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = FUN_00990d30(1,iVar4);
        iStack_8 = 0;
        for (iVar2 = *(int *)((int)this + 0x94); iVar2 != (int)this + 0xa0;
            iVar2 = *(int *)(iVar2 + 4)) {
          iStack_8 = iStack_8 + 1;
        }
        iStack_8 = iStack_8 + -1;
        uVar3 = 0;
        while( true ) {
          iVar2 = *(int *)((int)this + 0x94);
          uVar5 = 0;
          if (iVar2 == (int)this + 0xa0) {
            return;
          }
          do {
            iVar2 = *(int *)(iVar2 + 4);
            uVar5 = uVar5 + 1;
          } while (iVar2 != (int)this + 0xa0);
          if (uVar5 <= uVar3) break;
          if (uVar3 != param_2) {
            if (iVar4 != 0) {
              fVar6 = FUN_00990dc0(1.0);
              fVar7 = (float10)iVar4;
              if (iVar4 < 0) {
                fVar7 = fVar7 + (float10)4.2949673e+09;
              }
              fVar8 = (float10)iStack_8;
              if (iStack_8 < 0) {
                fVar8 = fVar8 + (float10)4.2949673e+09;
              }
              if (fVar6 < fVar7 / fVar8) {
                iVar2 = *(int *)((int)this + 0x94);
                uVar5 = uVar3;
                if (0 < (int)uVar3) {
                  do {
                    uVar5 = uVar5 - 1;
                    iVar2 = *(int *)(iVar2 + 4);
                  } while (uVar5 != 0);
                }
                FUN_005a2990(param_1,*(undefined4 *)(iVar2 + 8));
                iVar4 = iVar4 + -1;
              }
            }
            iStack_8 = iStack_8 + -1;
          }
          uVar3 = uVar3 + 1;
        }
        return;
      }
    }
    piVar1 = FUN_00595380((int *)0x2);
    (**(code **)(*(int *)this + 0x30))(piVar1);
    (**(code **)(*piVar1 + 0x120))(1);
  } while( true );
}


//// FUNCTION CStudioAI_MeanSuccessDifference @ 005148d0 ////

float10 CStudioAI_MeanSuccessDifference(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  float local_8;
  
  iVar3 = 0;
  local_8 = 0.0;
  puVar2 = DAT_0104bcf0;
  if (DAT_0104bcf0 != &DAT_0104bcfc) {
    do {
      iVar1 = FUN_00ace790((int *)puVar2[2],0,&TM::CStudio::RTTI_Type_Descriptor,
                           &TM::CStudioAI::RTTI_Type_Descriptor,0);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
        local_8 = local_8 + *(float *)(iVar1 + 0x298);
      }
      puVar2 = (undefined4 *)puVar2[1];
    } while (puVar2 != &DAT_0104bcfc);
    if (iVar3 != 0) {
      return (float10)local_8 / (float10)iVar3;
    }
  }
  return (float10)local_8;
}


//// FUNCTION CStudioAI_RmsSuccessDifference @ 00514950 ////

float10 CStudioAI_RmsSuccessDifference(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float local_8;
  
  iVar4 = 0;
  local_8 = 0.0;
  puVar3 = DAT_0104bcf0;
  if (DAT_0104bcf0 != &DAT_0104bcfc) {
    do {
      iVar2 = FUN_00ace790((int *)puVar3[2],0,&TM::CStudio::RTTI_Type_Descriptor,
                           &TM::CStudioAI::RTTI_Type_Descriptor,0);
      if (iVar2 != 0) {
        iVar4 = iVar4 + 1;
        local_8 = *(float *)(iVar2 + 0x298) * *(float *)(iVar2 + 0x298) + local_8;
      }
      puVar1 = puVar3 + 1;
      puVar3 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104bcfc);
    if (iVar4 != 0) {
      local_8 = local_8 / (float)iVar4;
    }
  }
  return SQRT((float10)local_8);
}


//// FUNCTION FUN_00514a10 @ 00514a10 ////

uint __fastcall FUN_00514a10(int *param_1)

{
  uint uVar1;
  void *this;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int *piVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  float10 fVar14;
  char **ppcVar15;
  int iVar16;
  int local_80;
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  char *pcStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  char acStack_60 [20];
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
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cacfc6;
  local_c = ExceptionList;
  bVar5 = false;
  bVar4 = false;
  iVar11 = 0;
  for (piVar7 = (int *)param_1[0x25]; piVar7 != param_1 + 0x28; piVar7 = (int *)piVar7[1]) {
    iVar11 = iVar11 + 1;
  }
  ExceptionList = &local_c;
  local_80 = FUN_00990d30(0,iVar11 + -1);
  uVar12 = 0;
  for (piVar7 = (int *)param_1[0x25]; piVar7 != param_1 + 0x28; piVar7 = (int *)piVar7[1]) {
    uVar12 = uVar12 + 1;
  }
  uVar1 = param_1[0x85];
  if (uVar1 < uVar12) {
    iVar11 = 0;
    for (piVar7 = (int *)param_1[0x25]; piVar7 != param_1 + 0x28; piVar7 = (int *)piVar7[1]) {
      iVar11 = iVar11 + 1;
    }
    if (local_80 <= (int)(iVar11 - uVar1)) {
      local_80 = 0;
      for (piVar7 = (int *)param_1[0x25]; piVar7 != param_1 + 0x28; piVar7 = (int *)piVar7[1]) {
        local_80 = local_80 + 1;
      }
      local_80 = local_80 - uVar1;
    }
  }
  if (local_80 < 1) {
LAB_00514e54:
    uVar12 = (uint)piVar7 & 0xffffff00;
  }
  else {
    iVar11 = 0;
    while( true ) {
      iVar13 = 0;
      for (piVar7 = (int *)param_1[0x25]; piVar7 != param_1 + 0x28; piVar7 = (int *)piVar7[1]) {
        iVar13 = iVar13 + 1;
      }
      if (iVar13 <= iVar11) break;
      iVar13 = 0;
      for (piVar7 = (int *)param_1[0x25]; piVar7 != param_1 + 0x28; piVar7 = (int *)piVar7[1]) {
        iVar13 = iVar13 + 1;
      }
      fVar2 = (float)(iVar13 - iVar11);
      if (iVar13 - iVar11 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      fVar14 = FUN_00990dc0(1.0);
      if (fVar14 <= (float10)((float)local_80 / fVar2)) {
        piVar7 = (int *)param_1[0x25];
        iVar13 = iVar11;
        if (0 < iVar11) {
          do {
            iVar13 = iVar13 + -1;
            piVar7 = (int *)piVar7[1];
          } while (iVar13 != 0);
        }
        this = (void *)piVar7[2];
        if (this == (void *)0x0) goto LAB_00514e54;
        (**(code **)(*param_1 + 0x34))();
        if (DAT_0104bd84 == '\0') {
LAB_00514bd7:
          bVar3 = false;
        }
        else {
          pcStack_6c = acStack_60;
          acStack_60[0] = '\0';
          uStack_68 = 0;
          uStack_64 = 0x14;
          _strncpy(pcStack_6c,"facility_stage",0xe);
          uStack_68 = 0xe;
          pcStack_6c[0xe] = '\0';
          uStack_4 = 0;
          bVar4 = true;
          iVar13 = FUN_00845f70(&pcStack_6c);
          if (iVar13 == 0) goto LAB_00514bd7;
          bVar3 = true;
        }
        uStack_4 = 0xffffffff;
        if ((bVar4) && (bVar4 = false, 0x14 < uStack_64)) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_6c);
        }
        if (bVar3) {
          piVar7 = (int *)GetPlayerStudio();
          DAT_0104bd84 = '\0';
        }
        else {
          do {
            uStack_4 = 0xffffffff;
            iVar13 = 0;
            for (puVar9 = DAT_0104bcf0; puVar9 != &DAT_0104bcfc; puVar9 = (undefined4 *)puVar9[1]) {
              iVar13 = iVar13 + 1;
            }
            iVar13 = FUN_00990d30(0,iVar13);
            puVar9 = DAT_0104bcf0;
            if (0 < iVar13) {
              do {
                iVar13 = iVar13 + -1;
                puVar9 = (undefined4 *)puVar9[1];
              } while (iVar13 != 0);
            }
            piVar7 = (int *)puVar9[2];
            if (piVar7 == param_1) {
LAB_00514cd3:
              bVar3 = true;
            }
            else {
              cVar6 = (**(code **)(*piVar7 + 0x3c))();
              if (cVar6 == '\0') {
                pcStack_4c = acStack_40;
                uStack_48 = 0;
                uStack_44 = 0x14;
                acStack_40[0] = cVar6;
                _strncpy(pcStack_4c,"facility_stage",0xe);
                uStack_48 = 0xe;
                pcStack_4c[0xe] = '\0';
                bVar5 = true;
                uStack_4 = 1;
                iVar13 = FUN_00845f70(&pcStack_4c);
                if (iVar13 == 0) goto LAB_00514cd3;
              }
              bVar3 = false;
            }
            uStack_4 = 0xffffffff;
            if ((bVar5) && (bVar5 = false, 0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_4c);
            }
          } while (bVar3);
        }
        piVar7 = (int *)FUN_00ace790(piVar7,0,&TM::CStudio::RTTI_Type_Descriptor,
                                     &TM::CStudioAI::RTTI_Type_Descriptor,0);
        pfVar8 = (float *)FUN_0043b520(auStack_74,70.0);
        puVar9 = FUN_00585500(this,&uStack_70);
        uVar10 = FUN_0043b6a0(puVar9,pfVar8);
        if ((char)uVar10 == '\0') {
          if (piVar7 == (int *)0x0) {
            FUN_00588e40(this,param_1[0x99]);
            if (300 < *DAT_00f87b04) {
              pcStack_2c = acStack_20;
              acStack_20[0] = '\0';
              uStack_28 = 0;
              uStack_24 = 0x20;
              pcStack_2c = _malloc(0x20);
              _strncpy(pcStack_2c,"TANNOY_STAR_JOINEDQUEUE",0x17);
              uStack_28 = 0x17;
              pcStack_2c[0x17] = '\0';
              iVar16 = 2;
              ppcVar15 = &pcStack_2c;
              iVar13 = 2;
              uStack_4 = 2;
              FUN_004f3b20();
              FUN_004f8a00(iVar13,ppcVar15,iVar16);
              uStack_4 = 0xffffffff;
              if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
                _free(pcStack_2c);
              }
            }
            local_80 = local_80 + -1;
            goto LAB_00514e4e;
          }
          (**(code **)(*piVar7 + 0x30))();
          local_80 = local_80 + -1;
          iVar11 = iVar11 + 1;
        }
        else {
          FUN_00599050(this,1);
          local_80 = local_80 + -1;
          iVar11 = iVar11 + 1;
        }
      }
      else {
LAB_00514e4e:
        iVar11 = iVar11 + 1;
      }
    }
    uVar12 = CONCAT31((int3)((uint)piVar7 >> 8),1);
  }
  ExceptionList = local_c;
  return uVar12;
}


//// FUNCTION FUN_00514f00 @ 00514f00 ////

void __fastcall FUN_00514f00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d21ab8;
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


//// FUNCTION FUN_00514fa0 @ 00514fa0 ////

void __fastcall FUN_00514fa0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d21ac8;
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


//// FUNCTION FUN_00515020 @ 00515020 ////

undefined4 * __thiscall FUN_00515020(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00515060 @ 00515060 ////

int * __fastcall FUN_00515060(int *param_1)

{
  FUN_00513a50(param_1);
  return param_1;
}


//// FUNCTION FUN_00515070 @ 00515070 ////

undefined4 * __thiscall FUN_00515070(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_005150b0 @ 005150b0 ////

undefined4 __fastcall FUN_005150b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((*(int *)(param_1 + 0x2a8) == 0) && (puVar2 = DAT_0104bd34, DAT_0104bd34 != DAT_0104bd38)) {
    while (iVar1 = __stricmp(*(char **)(param_1 + 0x1f0),*(char **)*puVar2), iVar1 != 0) {
      puVar2 = puVar2 + 1;
      if (puVar2 == DAT_0104bd38) {
        return *(undefined4 *)(param_1 + 0x2a8);
      }
    }
    *(undefined4 *)(param_1 + 0x2a8) = *puVar2;
  }
  return *(undefined4 *)(param_1 + 0x2a8);
}


//// FUNCTION FUN_00515120 @ 00515120 ////

undefined4 * __thiscall
FUN_00515120(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


