//// FUNCTION FUN_00538fc0 @ 00538fc0 ////

undefined4 __fastcall FUN_00538fc0(int param_1)

{
  undefined4 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)(param_1 + 0x88);
  local_8 = *(undefined4 *)(param_1 + 0x8c);
  local_4 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x447a0000;
  uVar1 = (**(code **)(*(int *)(param_1 + -0x78) + 0x28))(&local_c,param_1 + 0x4c);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00539050 @ 00539050 ////

void __thiscall FUN_00539050(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)this;
  if (puVar2 != param_1) {
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)this = param_1;
  }
  return;
}


//// FUNCTION FUN_00539100 @ 00539100 ////

void __thiscall FUN_00539100(void *this,undefined4 param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_00539140 @ 00539140 ////

void __fastcall FUN_00539140(int *param_1)

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
  puStack_8 = &LAB_00caeea8;
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


//// FUNCTION FUN_00539250 @ 00539250 ////

void __cdecl FUN_00539250(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
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
  
  local_24 = FUN_009b01a0(param_1);
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  pbVar1 = local_28;
  local_20 = 0xffffffff;
  local_4 = param_2;
  FUN_004f3b20();
  FUN_004f32c0(pbVar1);
  return;
}


//// FUNCTION FUN_005392c0 @ 005392c0 ////

void __cdecl FUN_005392c0(undefined4 param_1)

{
  void *this;
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
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
  local_24 = FUN_009b01a0(param_1);
  puVar4 = &DAT_00d17518;
  iVar3 = 0;
  pbVar2 = local_28;
  iVar1 = 2;
  this = (void *)FUN_004f3b20();
  FUN_004f3270(this,iVar1,pbVar2,iVar3,puVar4);
  return;
}


//// FUNCTION FUN_00539330 @ 00539330 ////

int __fastcall FUN_00539330(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1[0x51] == 0) {
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x9c))();
    puVar2 = (undefined4 *)param_1[0x51];
    if (puVar2 != puVar3) {
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      param_1[0x51] = (int)puVar3;
    }
    return param_1[0x51];
  }
  return param_1[0x51];
}


//// FUNCTION FUN_005393e0 @ 005393e0 ////

void __fastcall FUN_005393e0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00539430 @ 00539430 ////

void __fastcall FUN_00539430(int param_1)

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
  puStack_8 = &LAB_00caeed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMInWorld.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x46;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("Position");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x88),0xc);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMInWorld.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x47;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe519e0);
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
  uVar3 = FUN_0098b490("MyAngle");
  if ((char)uVar3 != '\0') {
    FUN_0098c520((float *)(param_1 + 0x4c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMInWorld.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x48;
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
  uVar3 = FUN_0098b490("GUID");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xc4),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00539710 @ 00539710 ////

undefined4 * __fastcall FUN_00539710(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  float10 fVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caef3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x1e);
  local_4._0_1_ = 1;
  FUN_0053cac0(param_1 + 0x28);
  param_1[0x1e] = &PTR_LAB_00d232d8;
  *param_1 = &PTR_FUN_00d23234;
  param_1[0x28] = &PTR_FUN_00d23218;
  fVar3 = FUN_004012c0(0.0);
  param_1[0x31] = (float)fVar3;
  param_1[0x32] = 0x3f800000;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 2;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x119) = 0;
  *(undefined1 *)((int)param_1 + 0x11a) = 0;
  *(undefined1 *)((int)param_1 + 0x11b) = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((int)param_1 + 0x141) = 0;
  param_1[0x51] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x36] = param_1;
  FUN_00acdb9e(0xe52884);
  iVar1 = FUN_0097dda0();
  param_1[0x37] = iVar1;
  if (DAT_00e52881 != '\0') {
    iVar1 = 0xd0;
    pcVar4 = "GroundLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe52884);
    FUN_0097df60(pcVar2,pcVar4,iVar1);
    DAT_00e52881 = '\0';
  }
  param_1[0x4a] = param_1;
  FUN_00acdb9e(0xe52884);
  iVar1 = FUN_0097dda0();
  param_1[0x4b] = iVar1;
  if (DAT_00e52880 != '\0') {
    iVar1 = 0x120;
    pcVar4 = "DrawLastLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe52884);
    FUN_0097df60(pcVar2,pcVar4,iVar1);
    DAT_00e52880 = '\0';
  }
  iVar1 = DAT_00e52870 + 1;
  param_1[0x4f] = DAT_00e52870;
  DAT_00e52870 = iVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00539940 @ 00539940 ////

void __fastcall FUN_00539940(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  LONG LVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00caefd2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d23234;
  param_1[0x1e] = &PTR_LAB_00d232d8;
  param_1[0x28] = &PTR_FUN_00d23218;
  puVar2 = (undefined4 *)param_1[0x47];
  local_4 = 5;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
    param_1[0x47] = 0;
  }
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if ((undefined4 *)param_1[0x49] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x49] = param_1[0x48];
  }
  if (param_1[0x48] != 0) {
    *(undefined4 *)(param_1[0x48] + 4) = param_1[0x49];
  }
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  puVar2 = (undefined4 *)param_1[0x51];
  local_4._0_1_ = 4;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x51] = 0;
  if ((undefined4 *)param_1[0x49] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x49] = param_1[0x48];
  }
  if (param_1[0x48] != 0) {
    *(undefined4 *)(param_1[0x48] + 4) = param_1[0x49];
  }
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  local_4._0_1_ = 1;
  FUN_0053cbd0(param_1 + 0x28);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0098a1c0(param_1 + 0x1e);
  local_4 = 0xffffffff;
  FUN_0053ddb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00539af0 @ 00539af0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00539af0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar6;
  
  if (*(char *)((int)param_1 + 0x11b) != '\0') {
    uVar4 = FUN_00553fd0(0x73);
    if ((char)uVar4 != '\0') {
      uVar6 = FUN_00990ae0(extraout_ECX,extraout_EDX);
      if ((uint)((int)uVar6 - _DAT_0104ccb4) < 0x15e) {
        (**(code **)(*param_1 + 0x94))();
      }
      *(undefined1 *)((int)param_1 + 0x11b) = 0;
    }
    cVar3 = FUN_00553f70(0x73);
    if (cVar3 == '\0') {
      *(undefined1 *)((int)param_1 + 0x11b) = 0;
    }
  }
  (**(code **)(*param_1 + 0x18))();
  if (param_1[0x51] == 0) {
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x9c))();
    puVar2 = (undefined4 *)param_1[0x51];
    if (puVar2 != puVar5) {
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      param_1[0x51] = (int)puVar5;
    }
  }
  return;
}


//// FUNCTION FUN_00539b90 @ 00539b90 ////

void FUN_00539b90(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_0104c5b8 != (int *)&DAT_0104c5c4) {
    do {
      piVar4 = DAT_0104c5b8;
      piVar2 = (int *)DAT_0104c5b8[2];
      piVar1 = DAT_0104c5b8 + 1;
      if ((int *)DAT_0104c5b8[1] != (int *)0x0) {
        *(int *)DAT_0104c5b8[1] = *DAT_0104c5b8;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      (**(code **)(*piVar2 + 0x24))();
    } while (DAT_0104c5b8 != (int *)&DAT_0104c5c4);
  }
  return;
}


//// FUNCTION FUN_00539be0 @ 00539be0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00539be0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  void *this;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar7;
  int iVar8;
  
  piVar2 = (int *)(param_1 + -0xa0);
  if (*(int *)(param_1 + 0xa4) == 0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x9c))();
    puVar3 = *(undefined4 **)(param_1 + 0xa4);
    if (puVar3 != puVar5) {
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = puVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
      *(undefined4 **)(param_1 + 0xa4) = puVar5;
    }
    if (*(int *)(param_1 + 0xa4) == 0) goto LAB_00539c4a;
  }
  uVar6 = FUN_00447cf0();
  if (uVar6 == param_1 - 0xa0U) {
    iVar8 = 2;
    this = (void *)FUN_00539330(piVar2);
    FUN_009021d0(this,iVar8);
  }
LAB_00539c4a:
  uVar6 = FUN_00553fd0(0x73);
  if ((char)uVar6 != '\0') {
    uVar7 = FUN_00990ae0(extraout_ECX,extraout_EDX);
    if ((uint)((int)uVar7 - _DAT_0104ccb4) < 0xfa) {
      *(undefined1 *)(param_1 + 0x7b) = 0;
      uVar6 = (**(code **)(*piVar2 + 0x94))();
      return uVar6 & 0xffffff00;
    }
  }
  uVar6 = FUN_00553fa0(0x73);
  if ((char)uVar6 == '\0') {
    cVar4 = FUN_00553f70(0x73);
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x7b) = 0;
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x7b) = 1;
  return 0;
}


//// FUNCTION FUN_00539cb0 @ 00539cb0 ////

void __fastcall FUN_00539cb0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x144);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x144) = 0;
  return;
}


//// FUNCTION FUN_00539ce0 @ 00539ce0 ////

undefined4 * __thiscall FUN_00539ce0(void *this,byte param_1)

{
  FUN_00539940(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00539d00 @ 00539d00 ////

void __fastcall FUN_00539d00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d232f8;
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


//// FUNCTION FUN_00539d50 @ 00539d50 ////

undefined4 * __thiscall FUN_00539d50(void *this,byte param_1)

{
  FUN_00539d00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00539d70 @ 00539d70 ////

void __fastcall FUN_00539d70(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d232f8;
  return;
}


//// FUNCTION FUN_00539dd0 @ 00539dd0 ////

void __fastcall FUN_00539dd0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00539e00 @ 00539e00 ////

void FUN_00539e00(void)

{
  return;
}


//// FUNCTION FUN_00539e10 @ 00539e10 ////

void __cdecl FUN_00539e10(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (DAT_010583e0 == 0) {
    FUN_009e5510(param_1);
    FUN_009894f0((int)param_1);
    FUN_0098a3a0((undefined4 *)&stack0x00000000);
    uVar1 = FUN_009894f0((int)param_1);
    puVar2 = (undefined4 *)FUN_009894d0(param_1);
    FUN_009897e0(puVar2,uVar1);
  }
  if (DAT_010583e0 == 1) {
    SLVAR_LoadUint((undefined4 *)&stack0x00000000);
    puVar2 = operator_new(0);
    FUN_00989810(puVar2,0);
    FUN_00989500(param_1,puVar2,0);
    FUN_009e6060(param_1);
                    /* WARNING: Subroutine does not return */
    _free(puVar2);
  }
  FUN_009894b0(param_1);
  return;
}


//// FUNCTION FUN_00539ed0 @ 00539ed0 ////

void __fastcall FUN_00539ed0(int *param_1)

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
  puStack_8 = &LAB_00caf008;
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


//// FUNCTION FUN_0053a0f0 @ 0053a0f0 ////

void __fastcall FUN_0053a0f0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0053a130 @ 0053a130 ////

void FUN_0053a130(void)

{
  return;
}


//// FUNCTION FUN_0053a140 @ 0053a140 ////

void __fastcall FUN_0053a140(int *param_1)

{
  if (param_1[0x47] != 0) {
    (**(code **)(*param_1 + 0xd0))();
                    /* WARNING: Could not recover jumptable at 0x0053a15e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[0x47] + 8))();
    return;
  }
  return;
}


//// FUNCTION FUN_0053a170 @ 0053a170 ////

void __thiscall FUN_0053a170(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x15c) = param_1;
  return;
}


//// FUNCTION FUN_0053a180 @ 0053a180 ////

void __fastcall FUN_0053a180(int param_1)

{
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x108);
  return;
}


//// FUNCTION FUN_0053a1b0 @ 0053a1b0 ////

void __thiscall FUN_0053a1b0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x14c) = *param_1;
  *(undefined4 *)((int)this + 0x150) = param_1[1];
  *(undefined4 *)((int)this + 0x154) = param_1[2];
  FUN_00538800(this,param_1);
  return;
}


//// FUNCTION FUN_0053a1e0 @ 0053a1e0 ////

void __thiscall FUN_0053a1e0(void *this,int *param_1,int *param_2)

{
  *(int *)((int)this + 0x14c) = *param_1;
  *(int *)((int)this + 0x150) = param_1[1];
  *(int *)((int)this + 0x154) = param_1[2];
  *(int *)((int)this + 0x158) = *param_2;
  FUN_00538840(this,param_1,param_2);
  return;
}


//// FUNCTION FUN_0053a230 @ 0053a230 ////

void __thiscall FUN_0053a230(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x15e) = param_1;
  return;
}


//// FUNCTION FUN_0053a240 @ 0053a240 ////

void __fastcall FUN_0053a240(int param_1)

{
  FUN_005392c0("UI_INHAND_OBJECT_DELETE");
  *(undefined1 *)(param_1 + 0x148) = 0;
  return;
}


//// FUNCTION FUN_0053a270 @ 0053a270 ////

void __thiscall FUN_0053a270(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1dc) = param_1;
  return;
}


//// FUNCTION FUN_0053a280 @ 0053a280 ////

undefined4 __fastcall FUN_0053a280(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00538fc0(param_1);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_00ace790((int *)(param_1 + -0x78),0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::TMCharacter::RTTI_Type_Descriptor,0);
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_0053a2b0 @ 0053a2b0 ////

int * __thiscall FUN_0053a2b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0053a340 @ 0053a340 ////

void __fastcall FUN_0053a340(int param_1)

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


//// FUNCTION FUN_0053a360 @ 0053a360 ////

void __fastcall FUN_0053a360(int param_1)

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


//// FUNCTION FUN_0053a3a0 @ 0053a3a0 ////

void __fastcall FUN_0053a3a0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((char)param_1[0x57] == '\0') {
    (**(code **)(*param_1 + 0xa0))();
    (**(code **)(*param_1 + 0xa4))();
    if ((param_1[0x7e] == 1) || (param_1[0x7e] == 2)) {
      bVar3 = FUN_005e9250(DAT_0104d82c);
      if (!bVar3) {
        pfVar1 = (float *)(param_1 + 0x4c);
        fVar2 = SQRT(((float)param_1[0x40] - *pfVar1) * ((float)param_1[0x40] - *pfVar1) +
                     ((float)param_1[0x41] - (float)param_1[0x4d]) *
                     ((float)param_1[0x41] - (float)param_1[0x4d]) +
                     ((float)param_1[0x42] - (float)param_1[0x4e]) *
                     ((float)param_1[0x42] - (float)param_1[0x4e]));
        if (2.0 <= fVar2) {
          fStack_18 = *pfVar1 - (float)param_1[0x40];
          fStack_14 = (float)param_1[0x4d] - (float)param_1[0x41];
          fStack_10 = (float)param_1[0x4e] - (float)param_1[0x42];
          FUN_00412e20(&fStack_18);
          if (11.0 <= fVar2) {
            fStack_c = fStack_18 * 10.0;
            fStack_8 = fStack_14 * 10.0;
            fStack_10 = fStack_10 * 10.0;
          }
          else {
            fStack_c = fStack_18 * fVar2;
            fStack_8 = fStack_14 * fVar2;
            fStack_10 = fStack_10 * fVar2;
          }
          fStack_18 = fStack_c;
          fStack_c = fStack_c + (float)param_1[0x40];
          fStack_14 = fStack_8;
          fStack_8 = fStack_8 + (float)param_1[0x41];
          fStack_4 = fStack_10 + (float)param_1[0x42];
          (**(code **)(*param_1 + 0x28))(&fStack_c,param_1 + 0x31);
        }
        else {
          (**(code **)(*param_1 + 0xa8))(pfVar1,param_1 + 0x31);
          param_1[0x7e] = 0;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0xc0))(0);
  FUN_00539af0(param_1);
  return;
}


//// FUNCTION FUN_0053a560 @ 0053a560 ////

undefined1 __cdecl FUN_0053a560(int *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined1 local_e;
  undefined1 local_c [12];
  
  local_e = 1;
  bVar1 = false;
  piVar3 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::TMCharacter::RTTI_Type_Descriptor,0);
  piVar9 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    piVar9 = FUN_008b80f0(piVar3);
  }
  piVar5 = piVar9;
  piVar10 = (int *)0x0;
  if (piVar9 == (int *)0x0) {
    pfVar4 = (float *)(**(code **)(*param_1 + 0x34))(local_c);
    piVar5 = (int *)FUN_009325e0(pfVar4);
    if ((piVar5 == (int *)0x0) ||
       (cVar2 = (**(code **)(*piVar5 + 0x74))(), piVar10 = piVar5, cVar2 == '\0'))
    goto LAB_0053a610;
  }
  bVar1 = true;
  iVar6 = FUN_00ace790(piVar5,0,&TM::TMForceExplainer::RTTI_Type_Descriptor,
                       &TM::CDropIconExplainer::RTTI_Type_Descriptor,0);
  if ((iVar6 != 0) && (uVar7 = FUN_008c08b0(iVar6), (char)uVar7 == '\0')) {
    local_e = 0;
  }
  piVar9 = piVar5;
  if ((piVar10 != (int *)0x0) && (cVar2 = (**(code **)(*piVar10 + 0x7c))(param_1), cVar2 == '\0')) {
    local_e = 0;
  }
LAB_0053a610:
  if ((((piVar3 != (int *)0x0) && (DAT_0104c518 != 0)) && (piVar9 != (int *)0x0)) &&
     (cVar2 = (**(code **)(*piVar9 + 0x1c))(piVar3), cVar2 == '\0')) {
    local_e = 0;
  }
  if ((!bVar1) && (*(char *)(DAT_0104c6c8 + 0x15f) == '\0')) {
    uVar8 = FUN_0052d7c0(param_1);
    local_e = (undefined1)uVar8;
  }
  iVar6 = FUN_0071b2a0();
  iVar6 = FUN_0071b930(iVar6);
  if (iVar6 == 0) {
    return local_e;
  }
  return 0;
}


//// FUNCTION FUN_0053a680 @ 0053a680 ////

void __fastcall FUN_0053a680(int param_1)

{
  if (param_1 + -0xa0 == DAT_0104c6c8) {
    (*(code *)DAT_0104c6b4[1])();
    DAT_0104c6c8 = 0;
    (*(code *)*DAT_0104c6b4)();
    (**(code **)(*(int *)(param_1 + -0xa0) + 0x2c))(param_1 + 0x90);
    if (DAT_010504c4 != (void *)0x0) {
      FUN_0091ee70(DAT_010504c4,(int *)0x0);
    }
    (**(code **)(*(int *)(param_1 + -0xa0) + 0xc4))(0);
    FUN_00932560(0);
    FUN_00418a40(DAT_00f87aa0,'\0');
    FUN_005392c0("UI_INHAND_OBJECT_DELETE");
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}


//// FUNCTION FUN_0053a760 @ 0053a760 ////

void __thiscall FUN_0053a760(void *this,char param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (*(char *)((int)this + 0x15e) == '\0') {
    if (param_1 == '\0') {
      return;
    }
  }
  else if (param_1 == '\0') goto LAB_0053a7c8;
  if (DAT_0104c518 == (int *)0x0) {
    (**(code **)(*(int *)((int)this + 0x16c) + 4))();
    *(undefined4 *)((int)this + 0x180) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x16c))();
    (**(code **)(*(int *)((int)this + 0x184) + 4))();
    *(undefined4 *)((int)this + 0x198) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x184))();
    return;
  }
LAB_0053a7c8:
  piVar4 = *(int **)((int)this + 0x180);
  if ((*(int **)((int)this + 0x180) != (int *)0x0) ||
     (piVar4 = DAT_0104c518, DAT_0104c518 != (int *)0x0)) {
    iVar2 = FUN_005295b0(piVar4);
    if (iVar2 != 0) {
      iVar2 = FUN_005295b0(piVar4);
      uVar3 = *(undefined4 *)(iVar2 + 0x210);
      piVar1 = (int *)((int)this + 0x184);
      (**(code **)(*(int *)((int)this + 0x184) + 4))();
      *(undefined4 *)((int)this + 0x198) = uVar3;
      (**(code **)*piVar1)();
      if (*(int *)((int)this + 0x198) == 0) {
        iVar2 = FUN_005295b0(piVar4);
        uVar3 = FUN_00938cf0(iVar2);
        (**(code **)(*piVar1 + 4))();
        *(undefined4 *)((int)this + 0x198) = uVar3;
        (**(code **)*piVar1)();
      }
    }
    if ((piVar4 != (int *)0x0) && (*(int *)((int)this + 0x198) != 0)) {
      (**(code **)(*(int *)((int)this + 0x16c) + 4))();
      *(int **)((int)this + 0x180) = piVar4;
      (*(code *)**(undefined4 **)((int)this + 0x16c))();
      FUN_00528390(*(int *)((int)this + 0x180));
      *(undefined4 *)((int)this + 0x1e0) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
    }
  }
  return;
}


//// FUNCTION FUN_0053a8b0 @ 0053a8b0 ////

void __thiscall FUN_0053a8b0(void *this,void *param_1)

{
  int *piVar1;
  void *this_00;
  int iVar2;
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  
  if (((((*(char *)((int)this + 0x15e) != '\0') &&
        (piVar1 = *(int **)((int)this + 0x180), piVar1 != (int *)0x0)) &&
       (*(int *)((int)this + 0x198) != 0)) &&
      ((DAT_0104c6c8 != this &&
       (((char)param_1 != '\0' ||
        (DAT_00e52874 < (uint)(*(int *)(DAT_0104cdf4 + 0x3c) - *(int *)((int)this + 0x1e0)))))))) &&
     (piVar1[0x47] != 0)) {
    iVar2 = FUN_005295b0(piVar1);
    if (iVar2 != 0) {
      piVar1 = *(int **)((int)this + 0x180);
      FUN_00403380(auStack_14,(undefined4 *)((int)this + 0x100));
      iVar2 = FUN_005295b0(piVar1);
      param_1 = (void *)FUN_00938cf0(iVar2);
    }
    this_00 = *(void **)((int)this + 0x198);
    if (param_1 != this_00) {
      if (this_00 != (void *)0x0) {
        uStack_10 = 0x53a967;
        FUN_0093e3a0(this_00,(int)this);
      }
      if (param_1 != (void *)0x0) {
        uStack_10 = 0x53a973;
        TMRoom_RegisterOccupant(param_1,this);
      }
      uStack_10 = 0x53a97f;
      FUN_0053a2b0((void *)((int)this + 0x184),(int)param_1);
    }
    if (*(int *)((int)this + 0x198) == 0) {
      uStack_10 = 0x53a9ce;
      FUN_00413170((void *)((int)this + 0x16c),0);
    }
    else if (DAT_0104c6e0 == this) {
      FUN_00528390(*(int *)((int)this + 0x180));
      uStack_10 = 0x53a9ad;
      FUN_005287e0(&DAT_0104c504,(int)this + 0x16c);
      *(undefined4 *)((int)this + 0x1e0) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0053a9e0 @ 0053a9e0 ////

void __fastcall FUN_0053a9e0(int *param_1)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float afStack_1c [2];
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  cVar2 = (**(code **)(*param_1 + 0xbc))();
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0xd4))();
    fStack_28 = (float)FUN_00566c70();
    fVar4 = (float10)(int)fStack_28;
    if ((int)fStack_28 < 0) {
      fVar4 = fVar4 + (float10)4.2949673e+09;
    }
    fStack_20 = (float)param_1[0x41];
    fStack_24 = (float)param_1[0x40];
    fVar4 = (float10)fsin(fVar4 * (float10)0.0025);
    fVar4 = fVar4 * (float10)0.25 + (float10)(float)param_1[0x42] + (float10)0.25;
    param_1[0x42] = (int)(float)fVar4;
    afStack_1c[0] = (float)fVar4;
    fVar4 = FUN_004012c0(0.0);
    fStack_28 = (float)fVar4;
    (**(code **)(*param_1 + 0xa8))(&fStack_24,&fStack_28);
    pfVar1 = (float *)(param_1 + 0x31);
    (**(code **)(*param_1 + 0xb4))(&fStack_14,pfVar1);
    fStack_14 = (float)param_1[0x42];
    iVar3 = FUN_00566c70();
    fVar4 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar4 = fVar4 + (float10)4.2949673e+09;
    }
    fVar4 = (float10)fsin(fVar4 * (float10)0.0016);
    fVar4 = FUN_004012c0((float)(fVar4 * (float10)0.3));
    fVar4 = FUN_004012c0((float)(fVar4 + (float10)*pfVar1));
    *pfVar1 = (float)fVar4;
    (**(code **)(*param_1 + 0xa8))(afStack_1c,pfVar1);
  }
  if ((char)param_1[0x7d] != '\0') {
    fStack_24 = (float)param_1[0x7a];
    fStack_20 = (float)param_1[0x7b];
    afStack_1c[0] = (float)param_1[0x42];
    (**(code **)(*param_1 + 0xac))(&fStack_24);
    *(undefined1 *)(param_1 + 0x7d) = 0;
  }
  if ((param_1[0x7e] == 1) || (param_1[0x7e] == 2)) {
    fVar4 = FUN_00566c00(DAT_0104cdf4);
    fStack_14 = (float)(fVar4 * (float10)(float)param_1[0x41]);
    fStack_10 = (float)(fVar4 * (float10)(float)param_1[0x42]);
    fVar5 = (float10)1.0 - fVar4;
    fStack_24 = (float)(fVar5 * (float10)(float)param_1[0x53]);
    fStack_20 = (float)(fVar5 * (float10)(float)param_1[0x54]);
    afStack_1c[0] = (float)(fVar5 * (float10)(float)param_1[0x55]);
    fStack_c = (float)((float10)fStack_24 + fVar4 * (float10)(float)param_1[0x40]);
    fStack_8 = fStack_20 + fStack_14;
    fStack_4 = afStack_1c[0] + fStack_10;
    (**(code **)(*(int *)param_1[0x47] + 0x20))(&fStack_c,param_1[0x31],param_1[0x32]);
  }
  return;
}


//// FUNCTION FUN_0053abe0 @ 0053abe0 ////

void __fastcall FUN_0053abe0(int *param_1)

{
  bool bVar1;
  float fVar2;
  bool bVar3;
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
  
  FUN_009a1a20(&DAT_0105c2e8,(float *)&DAT_0104cce0,&local_18,0.0);
  local_c = local_18 - DAT_0105c3a8;
  local_4 = local_10 - DAT_0105c3b0;
  bVar1 = 0.0 <= local_4;
  if (!bVar1) {
    fVar2 = -(DAT_0105c3b0 / local_4);
    local_20 = (local_14 - DAT_0105c3ac) * fVar2;
    local_1c = fVar2 * local_4;
    local_18 = local_c * fVar2 + DAT_0105c3a8;
    local_14 = local_20 + DAT_0105c3ac;
    local_10 = local_1c + DAT_0105c3b0;
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
  }
  fVar2 = SQRT(DAT_0105c3c0 * DAT_0105c3c0 + DAT_0105c3c4 * DAT_0105c3c4);
  if (0.0 < fVar2) {
    local_20 = -DAT_0105c3c8;
    if (local_20 <= 0.0) {
      local_20 = 0.0;
    }
    local_24 = fVar2;
    FUN_00412c90(&local_24);
    local_28 = 3.4028235e+38;
    bVar3 = FUN_00413cc0(DAT_00f87aa0);
    if (!bVar3) {
      local_28 = (local_20 / local_24) * 100.0 + 30.0;
    }
    local_c = local_18;
    local_8 = local_14;
    local_4 = 2.5;
    if (((bVar1) ||
        (local_28 <=
         SQRT((DAT_0105c3a8 - local_18) * (DAT_0105c3a8 - local_18) +
              (DAT_0105c3ac - local_14) * (DAT_0105c3ac - local_14) +
              (DAT_0105c3b0 - 2.5) * (DAT_0105c3b0 - 2.5)))) &&
       (FUN_009a1a20(&DAT_0105c2e8,(float *)&DAT_0104cce0,&local_c,local_28), local_4 < 2.5)) {
      local_4 = 2.5;
    }
    local_10 = local_4 - 2.5;
    local_18 = local_c;
    local_14 = local_8;
  }
  (**(code **)(*param_1 + 0xa8))(&local_18,param_1 + 0x31);
  return;
}


//// FUNCTION FUN_0053ae00 @ 0053ae00 ////

undefined4 __fastcall FUN_0053ae00(int param_1)

{
  if (DAT_0104c6c8 == param_1) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x198);
}


//// FUNCTION FUN_0053ae20 @ 0053ae20 ////

void __thiscall FUN_0053ae20(void *this,int param_1,char param_2)

{
  if (param_2 != '\0') {
    if ((param_1 != *(int *)((int)this + 0x1f8)) && ((param_1 == 1 || (param_1 == 2)))) {
      FUN_005392c0(*(undefined4 *)((int)this + 0x1bc));
    }
    *(int *)((int)this + 0x1f8) = param_1;
    return;
  }
  *(int *)((int)this + 0x1f8) = param_1;
  return;
}


//// FUNCTION FUN_0053ae70 @ 0053ae70 ////

void __fastcall FUN_0053ae70(int *param_1)

{
  void *this;
  int iVar1;
  undefined1 auStack_10 [4];
  undefined1 local_c [12];
  
  (**(code **)(*param_1 + 0x34))(local_c);
  iVar1 = 0x32;
  do {
    this = (void *)FUN_009af7b0(DAT_0105cbec,auStack_10,(int *)&lpType_0000000a,0xf,(undefined *)0x0
                               );
    if (this != (void *)0x0) {
      FUN_00990e30(-1.0,1.0);
      FUN_00990e30(-1.0,1.0);
      FUN_00990e30(-1.0,1.0);
      *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffffd;
      FUN_009ae120(this,(undefined4 *)&stack0xffffffe4);
      *(undefined4 *)((int)this + 0x58) = 0x3cb851ec;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


//// FUNCTION FUN_0053af30 @ 0053af30 ////

void __fastcall FUN_0053af30(int *param_1)

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
  puStack_8 = &LAB_00caf048;
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


//// FUNCTION FUN_0053b000 @ 0053b000 ////

void __fastcall FUN_0053b000(int param_1)

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
  puStack_8 = &LAB_00caf098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMMobile.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x25;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("LastPosition");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xd4),0xc);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMMobile.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x26;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe519e0);
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
  uVar3 = FUN_0098b490("LastAngle");
  if ((char)uVar3 != '\0') {
    FUN_0098c520((float *)(param_1 + 0xe0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMMobile.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x27;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xf4));
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
  uVar3 = FUN_0098b490("PInBuilding");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xf4));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMMobile.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x28;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x10c));
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
  uVar3 = FUN_0098b490("PInRoom");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x10c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMMobile.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x29;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("InRoomName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x124));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMMobile.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x2a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
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
  uVar3 = FUN_0098b490("InRoomIdx");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x164),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMMobile.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x2b;
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
  uVar3 = FUN_0098b490("BPlaceAnywhere");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xe5),1);
  }
  FUN_00539430(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0053b650 @ 0053b650 ////

void __thiscall FUN_0053b650(void *this,undefined4 param_1,void *param_2)

{
  void *this_00;
  undefined4 *puVar1;
  void *apvStack_20 [2];
  uint uStack_18;
  
  (**(code **)(*(int *)((int)this + 0x16c) + 4))();
  *(undefined4 *)((int)this + 0x180) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x16c))();
  this_00 = *(void **)((int)this + 0x198);
  if ((this_00 != (void *)0x0) && (this_00 != param_2)) {
    FUN_0093e3a0(this_00,(int)this);
  }
  (**(code **)(*(int *)((int)this + 0x184) + 4))();
  *(void **)((int)this + 0x198) = param_2;
  (*(code *)**(undefined4 **)((int)this + 0x184))();
  if (param_2 == (void *)0x0) {
    FUN_004015d0((void *)((int)this + 0x19c),"",0);
  }
  else {
    puVar1 = FUN_0093c060(param_2,apvStack_20);
    FUN_004015d0((void *)((int)this + 0x19c),(char *)*puVar1,puVar1[1]);
    if (0x14 < uStack_18) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_20[0]);
    }
  }
  return;
}


//// FUNCTION FUN_0053b750 @ 0053b750 ////

void __fastcall FUN_0053b750(int *param_1)

{
  undefined4 *puVar1;
  int *unaff_retaddr;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [16];
  void *pvStack_30;
  void *local_2c;
  uint uStack_28;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf0b8;
  local_c = ExceptionList;
  if ((char)param_1[0x52] == '\0') {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_4c,"PLACE_",6);
    local_48 = 6;
    local_4c[6] = '\0';
    local_4 = 0;
    puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xd8))(&local_2c);
    FUN_004073f0(&stack0xffffffb0,(char *)*puVar1,puVar1[1]);
    if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_30);
    }
    puVar1 = (undefined4 *)(**(code **)(*unaff_retaddr + 0x48))(&pvStack_30);
    FUN_004073f0(&local_4c,";",1);
    FUN_004073f0(&local_4c,(char *)*puVar1,puVar1[1]);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    FUN_005392c0(local_4c);
    *(undefined1 *)(param_1 + 0x52) = 1;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0053b870 @ 0053b870 ////

void __fastcall FUN_0053b870(int *param_1)

{
  undefined4 *puVar1;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00caf0d8;
  pvStack_c = ExceptionList;
  if ((DAT_0104e110 == '\0') && (DAT_0104ea64 == '\0')) {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    ExceptionList = &pvStack_c;
    _strncpy(pcStack_4c,"PICKUP_",7);
    uStack_48 = 7;
    pcStack_4c[7] = '\0';
    uStack_4 = 0;
    puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xd8))(apvStack_2c);
    FUN_004073f0(&pcStack_4c,(char *)*puVar1,puVar1[1]);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    FUN_005392c0(pcStack_4c);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
  }
  *(undefined1 *)(param_1 + 0x52) = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0053b892 @ 0053b892 ////

void __thiscall FUN_0053b892(void *this)

{
  undefined4 *puVar1;
  char unaff_BL;
  bool in_ZF;
  char *pcStack00000004;
  uint uStack0000000c;
  void *in_stack_00000024;
  uint in_stack_0000002c;
  void *in_stack_00000044;
  
  if ((in_ZF) && (DAT_0104ea64 == unaff_BL)) {
    pcStack00000004 = &stack0x00000010;
    uStack0000000c = 0x14;
    _strncpy(pcStack00000004,"PICKUP_",7);
    pcStack00000004[7] = unaff_BL;
    puVar1 = (undefined4 *)(**(code **)(*(int *)this + 0xd8))(&stack0x00000024);
    FUN_004073f0(&stack0x00000004,(char *)*puVar1,puVar1[1]);
    if (0x14 < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
      _free(in_stack_00000024);
    }
    FUN_005392c0(pcStack00000004);
    if (0x14 < uStack0000000c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack00000004);
    }
  }
  *(char *)((int)this + 0x148) = unaff_BL;
  ExceptionList = in_stack_00000044;
  return;
}


//// FUNCTION FUN_0053b960 @ 0053b960 ////

void __thiscall FUN_0053b960(void *this,void *param_1)

{
  undefined4 *puVar1;
  void *apvStack_20 [2];
  uint uStack_18;
  
  (**(code **)(*(int *)((int)this + 0x184) + 4))();
  *(void **)((int)this + 0x198) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x184))();
  if (param_1 == (void *)0x0) {
    FUN_004015d0((void *)((int)this + 0x19c),"",0);
  }
  else {
    puVar1 = FUN_0093c060(param_1,apvStack_20);
    FUN_004015d0((void *)((int)this + 0x19c),(char *)*puVar1,puVar1[1]);
    if (0x14 < uStack_18) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_20[0]);
    }
  }
  return;
}


//// FUNCTION FUN_0053b9e0 @ 0053b9e0 ////

void __thiscall FUN_0053b9e0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d23400;
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


//// FUNCTION FUN_0053ba30 @ 0053ba30 ////

void __fastcall FUN_0053ba30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d23400;
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


//// FUNCTION FUN_0053ba80 @ 0053ba80 ////

undefined4 * __fastcall FUN_0053ba80(undefined4 *param_1)

{
  FUN_00539710(param_1);
  *param_1 = &PTR_FUN_00d23464;
  param_1[0x1e] = &PTR_LAB_00d23440;
  param_1[0x28] = &PTR_FUN_00d23428;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x5e] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5b] = &PTR_FUN_00d16bec;
  param_1[0x60] = 0;
  param_1[0x5e] = param_1 + 0x5b;
  param_1[100] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x61] = &PTR_FUN_00d23400;
  param_1[0x66] = 0;
  param_1[100] = param_1 + 0x61;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x68] = 0;
  param_1[0x67] = param_1 + 0x6a;
  param_1[0x69] = 0x14;
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0x71] = 0x14;
  param_1[0x70] = 0;
  param_1[0x6f] = param_1 + 0x72;
  param_1[0x77] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x79) = 0xff;
  param_1[0x53] = param_1[0x40];
  param_1[0x54] = param_1[0x41];
  param_1[0x55] = param_1[0x42];
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  param_1[0x56] = param_1[0x31];
  *(undefined1 *)((int)param_1 + 0x15d) = 0;
  *(undefined1 *)((int)param_1 + 0x15f) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)((int)param_1 + 0x15e) = 1;
  FUN_004015d0(param_1 + 0x6f,"PROJECT_FLY_TO_LOCATION",0x17);
  return param_1;
}


//// FUNCTION FUN_0053bbe0 @ 0053bbe0 ////

void __fastcall FUN_0053bbe0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caf130;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d23464;
  param_1[0x1e] = &PTR_LAB_00d23440;
  param_1[0x28] = &PTR_FUN_00d23428;
  local_4 = 4;
  if ((param_1[0x60] != 0) && ((void *)param_1[0x66] != (void *)0x0)) {
    FUN_0093e3a0((void *)param_1[0x66],(int)param_1);
  }
  if (0x14 < (uint)param_1[0x71]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x6f]);
  }
  if (0x14 < (uint)param_1[0x69]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x67]);
  }
  param_1[0x61] = &PTR_FUN_00d23400;
  if ((undefined4 *)param_1[99] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[99] = param_1[0x62];
  }
  if (param_1[0x62] != 0) {
    *(undefined4 *)(param_1[0x62] + 4) = param_1[99];
  }
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x66] = 0;
  if ((undefined4 *)param_1[99] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[99] = param_1[0x62];
  }
  if (param_1[0x62] != 0) {
    *(undefined4 *)(param_1[0x62] + 4) = param_1[99];
  }
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x5b] = &PTR_FUN_00d16bec;
  if ((undefined4 *)param_1[0x5d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5d] = param_1[0x5c];
  }
  if (param_1[0x5c] != 0) {
    *(undefined4 *)(param_1[0x5c] + 4) = param_1[0x5d];
  }
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  if ((undefined4 *)param_1[0x5d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5d] = param_1[0x5c];
  }
  if (param_1[0x5c] != 0) {
    *(undefined4 *)(param_1[0x5c] + 4) = param_1[0x5d];
  }
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  local_4 = 0xffffffff;
  FUN_00539940(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0053bd70 @ 0053bd70 ////

undefined4 __fastcall FUN_0053bd70(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *this;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_c [12];
  
  piVar1 = (int *)(param_1 + -0xa0);
  uVar2 = (**(code **)(*(int *)(param_1 + -0xa0) + 0xb8))();
  if (((((char)uVar2 == '\0') || (DAT_0104c6c8 == (int *)0x0)) ||
      (uVar2 = *(uint *)(param_1 + 0x158), uVar2 == 1)) || (uVar2 == 2)) {
    return uVar2 & 0xffffff00;
  }
  if (DAT_010504c4 != (void *)0x0) {
    FUN_0091ee70(DAT_010504c4,DAT_0104c6c8);
  }
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x34))(auStack_c);
  *(undefined4 *)(param_1 + 0x90) = *puVar3;
  *(undefined4 *)(param_1 + 0x94) = puVar3[1];
  *(undefined4 *)(param_1 + 0x98) = puVar3[2];
  if (*(char *)(param_1 + 0xbd) == '\0') goto LAB_0053bee3;
  if (*(int *)(param_1 + 0xe0) != 0) {
    if (*(int *)(param_1 + 0xf8) == 0) {
      (**(code **)(*piVar1 + 0xc4))(0);
      if (*(int *)(param_1 + 0xf8) == 0) goto LAB_0053bed6;
    }
    iVar4 = FUN_005295b0(*(int **)(param_1 + 0xe0));
    if ((*(char *)(iVar4 + 0x255) != '\0') ||
       ((iVar4 = *(int *)(*(int *)(param_1 + 0xf8) + 0xa4), iVar4 != 0 &&
        ((*(byte *)(iVar4 + 0x6c) & 1) != 0)))) {
      iVar4 = FUN_0093c970(*(void **)(param_1 + 0xf8));
      if (iVar4 != 0) {
        piVar6 = piVar1;
        this = (void *)FUN_0093c970(*(void **)(param_1 + 0xf8));
        uVar2 = FUN_00944da0(this,(int)piVar6);
        if (-1 < (int)uVar2) {
          FUN_0093e340(*(void **)(param_1 + 0xf8),uVar2);
        }
      }
      uVar5 = FUN_0093e3a0(*(void **)(param_1 + 0xf8),(int)piVar1);
      if ((char)uVar5 != '\0') {
        (**(code **)(**(int **)(param_1 + 0xf8) + 0x20))(piVar1);
        if (*(char *)((int)*(int **)(param_1 + 0xf8) + 0x1c9) == '\0') {
          (**(code **)(**(int **)(param_1 + 0xf8) + 0x50))(0);
        }
      }
      FUN_0053a2b0((void *)(param_1 + 0xe4),0);
      *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
    }
  }
LAB_0053bed6:
  FUN_00413170((void *)(param_1 + 0xcc),0);
LAB_0053bee3:
  FUN_00932560((int)piVar1);
  FUN_00418a40(DAT_00f87aa0,'\x01');
  (*(code *)DAT_00f885f8[1])();
  DAT_00f8860c = 0;
  (*(code *)*DAT_00f885f8)();
  uVar5 = FUN_0053b870(piVar1);
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_0053bf40 @ 0053bf40 ////

void __thiscall FUN_0053bf40(void *this,int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  size_t sStack_48;
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf148;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0x148) == '\0') {
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_6c,"PLACE_",6);
    local_68 = 6;
    local_6c[6] = '\0';
    local_4 = 0;
    puVar1 = (undefined4 *)(**(code **)(*(int *)this + 0xd8))(&local_4c);
    FUN_004073f0(&local_6c,(char *)*puVar1,puVar1[1]);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x40))(&local_4c);
      uVar3 = 0xffffffff;
      uVar2 = FUN_00413450(&local_4c,"_",0,1);
      puVar1 = FUN_00430770(&local_4c,apvStack_2c,uVar2 + 1,uVar3);
      FUN_004015d0(&local_4c,(char *)*puVar1,puVar1[1]);
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      FUN_0045f450((int *)&local_4c);
      FUN_004073f0(&local_6c,";",1);
      FUN_004073f0(&local_6c,local_4c,sStack_48);
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
    }
    FUN_005392c0(local_6c);
    *(undefined1 *)((int)this + 0x148) = 1;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0053c240 @ 0053c240 ////

undefined4 * __thiscall FUN_0053c240(void *this,byte param_1)

{
  FUN_0053bbe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0053c260 @ 0053c260 ////

void __fastcall FUN_0053c260(int param_1)

{
  int *this;
  char cVar1;
  
  if (param_1 + -0xa0 == DAT_0104c6c8) {
    (*(code *)DAT_0104c6b4[1])();
    DAT_0104c6c8 = 0;
    (*(code *)*DAT_0104c6b4)();
    FUN_00418a40(DAT_00f87aa0,'\0');
    cVar1 = '\0';
    if (DAT_010504c4 != (void *)0x0) {
      FUN_0091ee70(DAT_010504c4,(int *)0x0);
    }
    this = (int *)(param_1 + -0xa0);
    (**(code **)(*(int *)(param_1 + -0xa0) + 0xc4))(1);
    if (*(int *)(param_1 + 0xe0) != 0) {
      if (*(int **)(param_1 + 0xf8) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xf8) + 0x5c))(this);
      }
      cVar1 = (**(code **)(**(int **)(param_1 + 0xe0) + 0x18c))(this);
    }
    FUN_00932560(0);
    FUN_0053bf40(this,*(int **)(param_1 + 0xf8));
    *(undefined1 *)(param_1 + 0xa8) = 0;
    if ((cVar1 == '\0') && (*(char *)(param_1 + 0xbd) == '\0')) {
      (**(code **)(*this + 0xcc))(1,1);
    }
  }
  return;
}


//// FUNCTION FUN_0053c360 @ 0053c360 ////

void FUN_0053c360(void)

{
  return;
}


//// FUNCTION FUN_0053c370 @ 0053c370 ////

void __fastcall FUN_0053c370(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00470470(DAT_0104917c,(int)param_1);
  while (iVar1 != 0) {
    (**(code **)(*param_1 + 0x14))(iVar1);
    iVar1 = FUN_00470470(DAT_0104917c,(int)param_1);
  }
  return;
}


//// FUNCTION FUN_0053c3a0 @ 0053c3a0 ////

void FUN_0053c3a0(void)

{
  FUN_00471840("MT_OBJECT_SELECT",-0x7ffffd7b);
  FUN_00471840("MT_OBJECT_DESELECT",-0x7ffffd53);
  FUN_00471840("MT_OBJECT_LOCKOUTLINE",-0x7ffffd2b);
  FUN_00471840("MT_OBJECT_UNLOCKOUTLINE",-0x7ffffd03);
  return;
}


//// FUNCTION FUN_0053c3e0 @ 0053c3e0 ////

void FUN_0053c3e0(void)

{
  return;
}


//// FUNCTION FUN_0053c420 @ 0053c420 ////

undefined4 * __fastcall FUN_0053c420(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf1a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  piVar1 = param_1 + 0x14;
  *param_1 = &PTR_FUN_00d235a8;
  param_1[0x16] = 0;
  *piVar1 = 0;
  param_1[0x15] = 0;
  local_4 = 1;
  param_1[0x16] = param_1;
  FUN_00acdb9e(0xe52958);
  iVar2 = FUN_0097dda0();
  param_1[0x17] = iVar2;
  if (s___AV__CP_VTMRoom_TM___TM___00e5293c[0x1b] != '\0') {
    iVar2 = 0x50;
    pcVar4 = "ObjectLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe52958);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AV__CP_VTMRoom_TM___TM___00e5293c[0x1b] = '\0';
  }
  param_1[0x15] = &DAT_0104c5f8;
  *piVar1 = (int)DAT_0104c5f8;
  *(int **)((int)DAT_0104c5f8 + 4) = piVar1;
  DAT_0104c5f8 = piVar1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0053c500 @ 0053c500 ////

/* WARNING: Removing unreachable block (ram,0x0053c52e) */

void __fastcall FUN_0053c500(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d235a8;
  if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x15] = param_1[0x14];
  }
  if (param_1[0x14] != 0) {
    *(undefined4 *)(param_1[0x14] + 4) = param_1[0x15];
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (param_1[0x14] != 0) {
    *(undefined4 *)(param_1[0x14] + 4) = param_1[0x15];
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION SimObjectQueue_TickPending @ 0053c550 ////

void SimObjectQueue_TickPending(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = DAT_0104c5ec;
  if (DAT_0104c5ec != &DAT_0104c5f8) {
    *(int *)(DAT_0104c5ec[2] + 0x48) = *(int *)(DAT_0104c5ec[2] + 0x48) + 1;
    while (puVar4 != &DAT_0104c5f8) {
      if (1 < ((int *)puVar4[2])[0x12]) {
        (**(code **)(*(int *)puVar4[2] + 0xc))();
      }
      puVar2 = (undefined4 *)puVar4[1];
      if (puVar2 != &DAT_0104c5f8) {
        *(int *)(puVar2[2] + 0x48) = *(int *)(puVar2[2] + 0x48) + 1;
      }
      puVar3 = (undefined4 *)puVar4[2];
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      puVar4 = puVar2;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0053c5b0 @ 0053c5b0 ////

void FUN_0053c5b0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  
  puVar4 = DAT_0104c5ec;
  if (DAT_0104c5ec != &DAT_0104c5f8) {
    *(int *)(DAT_0104c5ec[2] + 0x48) = *(int *)(DAT_0104c5ec[2] + 0x48) + 1;
    while (puVar4 != &DAT_0104c5f8) {
      cVar5 = (**(code **)(*(int *)puVar4[2] + 0x10))();
      if ((cVar5 != '\0') && (1 < ((int *)puVar4[2])[0x12])) {
        (**(code **)(*(int *)puVar4[2] + 0xc))();
      }
      puVar2 = (undefined4 *)puVar4[1];
      if (puVar2 != &DAT_0104c5f8) {
        *(int *)(puVar2[2] + 0x48) = *(int *)(puVar2[2] + 0x48) + 1;
      }
      puVar3 = (undefined4 *)puVar4[2];
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      puVar4 = puVar2;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0053c620 @ 0053c620 ////

undefined4 * __thiscall FUN_0053c620(void *this,byte param_1)

{
  FUN_0053c500(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0053c640 @ 0053c640 ////

void __fastcall FUN_0053c640(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d235c8;
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


//// FUNCTION FUN_0053c690 @ 0053c690 ////

undefined4 * __thiscall FUN_0053c690(void *this,byte param_1)

{
  FUN_0053c640(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0053c6b0 @ 0053c6b0 ////

void __fastcall FUN_0053c6b0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d235c8;
  return;
}


//// FUNCTION FUN_0053c740 @ 0053c740 ////

int * __thiscall FUN_0053c740(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0053c7f0 @ 0053c7f0 ////

void __fastcall FUN_0053c7f0(int param_1)

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


//// FUNCTION FUN_0053c820 @ 0053c820 ////

void __fastcall FUN_0053c820(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 4);
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    **(int **)(param_1 + 8) = *piVar1;
  }
  if (*piVar1 != 0) {
    *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(param_1 + 8);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(int ***)(param_1 + 8) = &DAT_0104c648;
  *piVar1 = (int)DAT_0104c648;
  *(int **)((int)DAT_0104c648 + 4) = piVar1;
  DAT_0104c648 = piVar1;
  return;
}


//// FUNCTION FUN_0053c870 @ 0053c870 ////

void __fastcall FUN_0053c870(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 4);
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    **(int **)(param_1 + 8) = *piVar1;
  }
  if (*piVar1 != 0) {
    *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(param_1 + 8);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *piVar1 = (int)&DAT_0104c638;
  *(int **)(param_1 + 8) = DAT_0104c63c;
  *DAT_0104c63c = (int)piVar1;
  DAT_0104c63c = piVar1;
  return;
}


//// FUNCTION FUN_0053c8c0 @ 0053c8c0 ////

void FUN_0053c8c0(void)

{
  if ((undefined **)DAT_0104c63c != &DAT_0104c648) {
    do {
      *DAT_0104c63c = 0;
      DAT_0104c63c = (int *)DAT_0104c63c[1];
      *(undefined4 *)(*DAT_0104c63c + 4) = 0;
    } while ((undefined **)DAT_0104c63c != &DAT_0104c648);
  }
  DAT_0104c63c = (int *)&DAT_0104c648;
  DAT_0104c648 = &DAT_0104c638;
  return;
}


//// FUNCTION FUN_0053c900 @ 0053c900 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0053c900(int param_1)

{
  char cVar1;
  
  if (DAT_0104c6c8 != param_1) {
    if (DAT_0104c6c8 != 0) {
      (**(code **)(*(int *)(DAT_0104c6c8 + 0xa0) + 0x10))();
    }
    (*(code *)DAT_0104c6b4[1])();
    DAT_0104c6c8 = param_1;
    (*(code *)*DAT_0104c6b4)();
    cVar1 = (**(code **)(*(int *)(DAT_0104c6c8 + 0xa0) + 8))();
    if (cVar1 == '\0') {
      (*(code *)DAT_0104c6b4[1])();
      DAT_0104c6c8 = 0;
                    /* WARNING: Could not recover jumptable at 0x0053c9d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*DAT_0104c6b4)();
      return;
    }
    if (_DAT_0104c620 != 0.0) {
      FUN_00424130(DAT_00f87b04,4,0,0);
    }
    (*(code *)DAT_0104c69c[1])();
    DAT_0104c6b0 = 0;
    (*(code *)*DAT_0104c69c)();
    DAT_0104c61c = 1;
    DAT_0104e110 = 0;
  }
  return;
}


//// FUNCTION FUN_0053c9e0 @ 0053c9e0 ////

bool FUN_0053c9e0(void)

{
  return DAT_0104c6c8 != 0;
}


//// FUNCTION FUN_0053c9f0 @ 0053c9f0 ////

undefined4 FUN_0053c9f0(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (DAT_0104c6c8 == 0) {
    bVar1 = FUN_005e0150();
    if (!bVar1) {
      uVar2 = FUN_0048ad10();
      if ((char)uVar2 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}


//// FUNCTION FUN_0053ca20 @ 0053ca20 ////

int FUN_0053ca20(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_0104c6c8;
  if (DAT_0104c6c8 == 0) {
    bVar1 = FUN_005e0150();
    if (bVar1) {
      iVar2 = FUN_005e16b0();
      return iVar2;
    }
    uVar3 = FUN_0048ad10();
    if ((char)uVar3 != '\0') {
      iVar2 = FUN_0048ad30();
      return iVar2;
    }
    iVar2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_0053ca50 @ 0053ca50 ////

void FUN_0053ca50(void)

{
  bool bVar1;
  
  if (DAT_0104c6c8 != 0) {
    (**(code **)(*(int *)(DAT_0104c6c8 + 0xa0) + 0xc))();
    (*(code *)DAT_0104c6b4[1])();
    DAT_0104c6c8 = 0;
    (*(code *)*DAT_0104c6b4)();
  }
  bVar1 = FUN_005e0150();
  if (bVar1) {
    FUN_005e16d0();
    return;
  }
  return;
}


//// FUNCTION FUN_0053cac0 @ 0053cac0 ////

undefined4 * __fastcall FUN_0053cac0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caf1e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d23604;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_4 = 1;
  param_1[3] = param_1;
  FUN_00acdb9e(0xe529a0);
  iVar1 = FUN_0097dda0();
  param_1[4] = iVar1;
  if (s___AV__InList_VTMObject_TM___MV___00e5297c[0x22] != '\0') {
    iVar1 = 4;
    pcVar3 = "ProcessInputLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe529a0);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__InList_VTMObject_TM___MV___00e5297c[0x22] = '\0';
  }
  param_1[7] = param_1;
  FUN_00acdb9e(0xe529a0);
  iVar1 = FUN_0097dda0();
  param_1[8] = iVar1;
  if (s___AV__InList_VTMObject_TM___MV___00e5297c[0x21] != '\0') {
    iVar1 = 0x14;
    pcVar3 = "CheckResponseLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe529a0);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__InList_VTMObject_TM___MV___00e5297c[0x21] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0053cbd0 @ 0053cbd0 ////

/* WARNING: Removing unreachable block (ram,0x0053cc1d) */

void __fastcall FUN_0053cbd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d23604;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
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


//// FUNCTION FUN_0053cc60 @ 0053cc60 ////

void FUN_0053cc60(void)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar9;
  ulonglong uVar10;
  
  bVar2 = false;
  if (DAT_0104c6c8 != (int *)0x0) {
    FUN_009cc3c0(1);
    if (DAT_0104c61c == '\0') {
      uVar5 = FUN_00553fd0(0x73);
      if (((char)uVar5 != '\0') && (cVar4 = FUN_0053a560(DAT_0104c6c8), cVar4 != '\0')) {
        (**(code **)(DAT_0104c6c8[0x28] + 0x10))();
        (*(code *)DAT_0104c6b4[1])();
        DAT_0104c6c8 = (int *)0x0;
        (*(code *)*DAT_0104c6b4)();
        bVar2 = true;
      }
    }
    else {
      DAT_0104c61c = FUN_00553f70(0x73);
    }
    if (DAT_0104c6c8 != (int *)0x0) {
      uVar5 = FUN_00553fd0(0x74);
      if (((char)uVar5 != '\0') && ((DAT_0104c518 == 0 || ((char)DAT_0104c6c8[0x58] != '\0')))) {
        (**(code **)(DAT_0104c6c8[0x28] + 0xc))();
        (*(code *)DAT_0104c6b4[1])();
        DAT_0104c6c8 = (int *)0x0;
        (*(code *)*DAT_0104c6b4)();
        bVar2 = true;
      }
      if (DAT_0104c6c8 != (int *)0x0) goto LAB_0053cd5c;
    }
  }
  FUN_009cc3c0(0);
LAB_0053cd5c:
  if (!bVar2) {
    while ((undefined4 **)DAT_0104c670 != &DAT_0104c67c) {
      *DAT_0104c670 = 0;
      DAT_0104c670 = (int *)DAT_0104c670[1];
      *(undefined4 *)(*DAT_0104c670 + 4) = 0;
    }
    DAT_0104c670 = (int *)&DAT_0104c67c;
    DAT_0104c67c = (undefined4 *)&DAT_0104c66c;
    for (piVar1 = DAT_0104c63c; piVar3 = DAT_0104c63c, (undefined **)piVar1 != &DAT_0104c648;
        piVar1 = (int *)piVar1[1]) {
      puVar6 = (undefined4 *)(piVar1[2] + 0x14);
      *(undefined4 ***)(piVar1[2] + 0x18) = &DAT_0104c67c;
      *puVar6 = DAT_0104c67c;
      DAT_0104c67c[1] = puVar6;
      DAT_0104c67c = puVar6;
    }
    for (; (undefined **)piVar3 != &DAT_0104c648; piVar3 = (int *)piVar3[1]) {
      cVar4 = (*(code *)**(undefined4 **)piVar3[2])();
      if (cVar4 != '\0') goto LAB_0053ce09;
    }
    iVar7 = FUN_00423320(DAT_00f87b04);
    if (iVar7 == 0) {
      (**(code **)(*DAT_00f88720 + 0x1c))();
    }
  }
LAB_0053ce09:
  cVar4 = FUN_00553f70(0x73);
  uVar8 = extraout_ECX;
  uVar9 = extraout_EDX;
  if (((cVar4 != '\0') ||
      (cVar4 = FUN_00553f70(0x74), uVar8 = extraout_ECX_00, uVar9 = extraout_EDX_00, cVar4 != '\0'))
     || (cVar4 = FUN_00553f70(0x75), uVar8 = extraout_ECX_01, uVar9 = extraout_EDX_01, cVar4 != '\0'
        )) {
    uVar10 = FUN_00990ae0(uVar8,uVar9);
    DAT_0104c628 = (undefined4)uVar10;
  }
  if ((undefined **)DAT_0104c63c != &DAT_0104c648) {
    do {
      *DAT_0104c63c = 0;
      DAT_0104c63c = (int *)DAT_0104c63c[1];
      *(undefined4 *)(*DAT_0104c63c + 4) = 0;
    } while ((undefined **)DAT_0104c63c != &DAT_0104c648);
  }
  DAT_0104c63c = (int *)&DAT_0104c648;
  DAT_0104c648 = &DAT_0104c638;
  return;
}


//// FUNCTION FUN_0053ce80 @ 0053ce80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053ce80(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *puVar7;
  ulonglong uVar8;
  byte *pbVar9;
  char local_29;
  byte abStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_29 = '\0';
  (*(code *)DAT_0104c6cc[1])();
  DAT_0104c6e0 = (int *)0x0;
  (*(code *)*DAT_0104c6cc)();
  (*(code *)DAT_00f885c8[1])();
  DAT_00f885dc = (int *)0x0;
  (*(code *)*DAT_00f885c8)();
  cVar1 = FUN_00553f60();
  if ((cVar1 == '\0') || (DAT_0104c6c8 != 0)) {
LAB_0053d09c:
    (*(code *)DAT_0104c69c[1])();
    DAT_0104c6b0 = 0;
    (*(code *)*DAT_0104c69c)();
  }
  else {
    puVar7 = DAT_0104c670;
    if (DAT_0104c670 != &DAT_0104c67c) {
      do {
        cVar1 = (**(code **)(*(int *)puVar7[2] + 4))(&local_29);
        if (cVar1 != '\0') {
          piVar5 = (int *)FUN_00ace790((int *)puVar7[2],0,&TM::TMProcessInput::RTTI_Type_Descriptor,
                                       &TM::TMBase::RTTI_Type_Descriptor,0);
          (*(code *)DAT_00f885c8[1])();
          DAT_00f885dc = piVar5;
          (*(code *)*DAT_00f885c8)();
          piVar5 = (int *)FUN_00ace790((int *)puVar7[2],0,&TM::TMProcessInput::RTTI_Type_Descriptor,
                                       &TM::TMMobile::RTTI_Type_Descriptor,0);
          (*(code *)DAT_0104c6cc[1])();
          DAT_0104c6e0 = piVar5;
          (*(code *)*DAT_0104c6cc)();
          break;
        }
        puVar7 = (undefined4 *)puVar7[1];
      } while (puVar7 != &DAT_0104c67c);
    }
    if (DAT_0104c6b0 != 0) {
      cVar1 = FUN_00553f70(0x73);
      if ((cVar1 != '\0') && (uVar4 = FUN_00553fd0(0x73), (char)uVar4 == '\0')) {
        uVar8 = FUN_00990ae0(extraout_ECX,extraout_EDX);
        if (((uint)((int)uVar8 - _DAT_0104c618) < 0xc9) &&
           ((_DAT_0104c62c - DAT_0104cce0) * (_DAT_0104c62c - DAT_0104cce0) +
            (_DAT_0104c630 - DAT_0104cce4) * (_DAT_0104c630 - DAT_0104cce4) <= 256.0))
        goto LAB_0053d0bc;
        FUN_0053c900(DAT_0104c6b0);
      }
      goto LAB_0053d09c;
    }
    if (((((DAT_0104c6e0 != (int *)0x0) && (uVar3 = FUN_0048ad10(), (char)uVar3 == '\0')) &&
         (bVar2 = FUN_005e0150(), !bVar2)) &&
        ((uVar4 = FUN_00553fa0(0x73), (char)uVar4 != '\0' &&
         (cVar1 = FUN_00553f70(0x73), cVar1 != '\0')))) &&
       (cVar1 = (**(code **)(*DAT_0104c6e0 + 0xb8))(), cVar1 != '\0')) {
      FUN_0053c740(&DAT_0104c69c,0x104c6cc);
      _DAT_0104c62c = DAT_0104cce0;
      _DAT_0104c630 = DAT_0104cce4;
      uVar8 = FUN_00990ae0(DAT_0104cce0,DAT_0104cce4);
      _DAT_0104c618 = (int)uVar8;
    }
  }
LAB_0053d0bc:
  if (local_29 == '\0') {
    uVar3 = FUN_00412700();
    if ((char)uVar3 == '\0') {
      FUN_009abd50(0);
    }
    DAT_0104c624 = 0;
  }
  else {
    if (DAT_0104c624 == '\0') {
      abStack_28[0] = 0;
      abStack_28[1] = 0;
      abStack_28[2] = 0;
      abStack_28[3] = 0;
      uStack_24 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      uStack_4 = 0;
      uStack_20 = 0xffffffff;
      uStack_24 = FUN_009b01a0("UI_MOUSE_OVER_01");
      pbVar9 = abStack_28;
      FUN_004f3b20();
      FUN_004f32c0(pbVar9);
    }
    uVar3 = FUN_00412700();
    if ((char)uVar3 == '\0') {
      piVar5 = (int *)FUN_00ace790(DAT_00f885dc,0,&TM::TMBase::RTTI_Type_Descriptor,
                                   &TM::CSet::RTTI_Type_Descriptor,0);
      if ((piVar5 != (int *)0x0) && (cVar1 = (**(code **)(*piVar5 + 0x110))(), cVar1 != '\0')) {
        FUN_009abd50(3);
        DAT_0104c624 = 1;
        goto LAB_0053d195;
      }
      FUN_009abd50(1);
    }
    DAT_0104c624 = 1;
  }
LAB_0053d195:
  cVar1 = FUN_004129c0(DAT_00f87aa0);
  if ((cVar1 != '\0') && (iVar6 = FUN_00423320(DAT_00f87b04), iVar6 == 0)) {
    FUN_009abd50(2);
  }
  return;
}


//// FUNCTION FUN_0053d1d0 @ 0053d1d0 ////

undefined4 FUN_0053d1d0(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar5;
  
  if ((((DAT_0104c6c8 == 0) && (bVar1 = FUN_005e0150(), !bVar1)) &&
      (uVar3 = FUN_0048ad10(), (char)uVar3 == '\0')) &&
     (uVar5 = FUN_00990ae0(extraout_ECX,extraout_EDX), DAT_0104c628 + 2000U < (uint)uVar5)) {
    if (DAT_00f87b04 == 0) {
      return 1;
    }
    cVar2 = FUN_004201b0(DAT_00f87b04);
    if ((cVar2 == '\0') && (iVar4 = FUN_00423320(DAT_00f87b04), iVar4 == 0)) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_0053d230 @ 0053d230 ////

void __fastcall FUN_0053d230(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d23630;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0053d250 @ 0053d250 ////

void __fastcall FUN_0053d250(int param_1)

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


//// FUNCTION FUN_0053d280 @ 0053d280 ////

void __fastcall FUN_0053d280(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d23630;
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


//// FUNCTION FUN_0053d2d0 @ 0053d2d0 ////

void __fastcall FUN_0053d2d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d23640;
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


//// FUNCTION FUN_0053d320 @ 0053d320 ////

undefined4 * __thiscall FUN_0053d320(void *this,byte param_1)

{
  FUN_0053d2d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0053d340 @ 0053d340 ////

void __fastcall FUN_0053d340(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d23640;
  return;
}


//// FUNCTION FUN_0053d3a0 @ 0053d3a0 ////

void FUN_0053d3a0(void)

{
  return;
}


//// FUNCTION FUN_0053d440 @ 0053d440 ////

void FUN_0053d440(void)

{
  if ((undefined **)DAT_0104c6ec != &DAT_0104c6f8) {
    do {
      *DAT_0104c6ec = 0;
      DAT_0104c6ec = (int *)DAT_0104c6ec[1];
      *(undefined4 *)(*DAT_0104c6ec + 4) = 0;
    } while ((undefined **)DAT_0104c6ec != &DAT_0104c6f8);
  }
  DAT_0104c6ec = (int *)&DAT_0104c6f8;
  DAT_0104c6f8 = &DAT_0104c6e8;
  return;
}


//// FUNCTION FUN_0053d480 @ 0053d480 ////

void __fastcall FUN_0053d480(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x38);
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    **(int **)(param_1 + 0x3c) = *piVar1;
  }
  if (*piVar1 != 0) {
    *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(param_1 + 0x3c);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(int ***)(param_1 + 0x3c) = &DAT_0104c6f8;
  *piVar1 = (int)DAT_0104c6f8;
  *(int **)((int)DAT_0104c6f8 + 4) = piVar1;
  DAT_0104c6f8 = piVar1;
  return;
}


//// FUNCTION FUN_0053d4f0 @ 0053d4f0 ////

/* WARNING: Removing unreachable block (ram,0x0053d51e) */

void __fastcall FUN_0053d4f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2364c;
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf] = param_1[0xe];
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1[0xe] + 4) = param_1[0xf];
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1[0xe] + 4) = param_1[0xf];
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_0053d540 @ 0053d540 ////

undefined4 * __thiscall FUN_0053d540(void *this,byte param_1)

{
  FUN_0053d4f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0053d560 @ 0053d560 ////

void FUN_0053d560(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = DAT_0104c6ec;
  if (DAT_0104c6ec != &DAT_0104c6f8) {
    *(int *)(DAT_0104c6ec[2] + 0x48) = *(int *)(DAT_0104c6ec[2] + 0x48) + 1;
    while (puVar4 != &DAT_0104c6f8) {
      if (1 < ((int *)puVar4[2])[0x12]) {
        (**(code **)(*(int *)puVar4[2] + 8))();
      }
      puVar2 = (undefined4 *)puVar4[1];
      if (puVar2 != &DAT_0104c6f8) {
        *(int *)(puVar2[2] + 0x48) = *(int *)(puVar2[2] + 0x48) + 1;
      }
      puVar3 = (undefined4 *)puVar4[2];
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      puVar4 = puVar2;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0053d5c0 @ 0053d5c0 ////

void __fastcall FUN_0053d5c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d2365c;
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


//// FUNCTION FUN_0053d610 @ 0053d610 ////

undefined4 * __thiscall FUN_0053d610(void *this,byte param_1)

{
  FUN_0053d5c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0053d630 @ 0053d630 ////

void __fastcall FUN_0053d630(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d2365c;
  return;
}


//// FUNCTION FUN_0053d690 @ 0053d690 ////

undefined4 * __fastcall FUN_0053d690(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf243;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d2364c;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_4 = 1;
  param_1[0x12] = 1;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x10] = param_1;
  FUN_00acdb9e(0xe52a48);
  iVar1 = FUN_0097dda0();
  param_1[0x11] = iVar1;
  if (s___AV__InList_VTMRefCounted_TM____00e52a20[0x25] != '\0') {
    iVar1 = 0x38;
    pcVar3 = "ProcessFrameLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe52a48);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__InList_VTMRefCounted_TM____00e52a20[0x25] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0053d760 @ 0053d760 ////

void FUN_0053d760(void)

{
  return;
}


//// FUNCTION FUN_0053d770 @ 0053d770 ////

void __fastcall FUN_0053d770(int param_1)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  return;
}


//// FUNCTION FUN_0053d7f0 @ 0053d7f0 ////

void __thiscall FUN_0053d7f0(void *this,undefined4 param_1,undefined4 *param_2)

{
  FUN_004036d0((void *)((int)this + 0x10),(wchar_t *)*param_2,param_2[1]);
  (**(code **)(*(int *)((int)this + 0x30) + 4))();
  *(undefined4 *)((int)this + 0x44) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x30))();
  return;
}


//// FUNCTION FUN_0053d830 @ 0053d830 ////

void __fastcall FUN_0053d830(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_0053d880 @ 0053d880 ////

int * __fastcall FUN_0053d880(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caf26e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[4] = (int)(param_1 + 7);
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[6] = 10;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = (int)(param_1 + 0xc);
  param_1[0xc] = (int)&PTR_FUN_00d165ac;
  param_1[0x11] = 0;
  puVar2 = (undefined4 *)*param_1;
  local_4 = 2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0053d910 @ 0053d910 ////

void __fastcall FUN_0053d910(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caf29e;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  if ((int *)*param_1 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)*param_1 + 0xc))(0);
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *param_1 = 0;
  }
  param_1[0xc] = (int)&PTR_FUN_00d165ac;
  if ((int *)param_1[0xe] != (int *)0x0) {
    *(int *)param_1[0xe] = param_1[0xd];
  }
  if (param_1[0xd] != 0) {
    *(int *)(param_1[0xd] + 4) = param_1[0xe];
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  if ((int *)param_1[0xe] != (int *)0x0) {
    *(int *)param_1[0xe] = param_1[0xd];
  }
  if (param_1[0xd] != 0) {
    *(int *)(param_1[0xd] + 4) = param_1[0xe];
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (10 < (uint)param_1[6]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  puVar2 = (undefined4 *)*param_1;
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_1 = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0053d9e0 @ 0053d9e0 ////

void __thiscall FUN_0053d9e0(void *this,char param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  char cVar4;
  
  *(char *)((int)this + 0xc) = param_1;
  if (param_1 != '\0') {
    cVar4 = '\0';
    pvVar3 = (void *)FUN_00539330(param_2);
    FUN_00902d40(pvVar3,cVar4);
    return;
  }
  cVar4 = '\x01';
  pvVar3 = (void *)FUN_00539330(param_2);
  FUN_00902d40(pvVar3,cVar4);
  if (*(int **)this != (int *)0x0) {
    (**(code **)(**(int **)this + 0xc))(0);
    puVar2 = *(undefined4 **)this;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 *)this = 0;
  }
  return;
}


//// FUNCTION FUN_0053da40 @ 0053da40 ////

void __thiscall FUN_0053da40(void *this,int param_1)

{
  int *piVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined2 auStack_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00caf2ce;
  pvStack_c = ExceptionList;
  puVar3 = *(undefined4 **)this;
  ExceptionList = &pvStack_c;
  if ((puVar3 != (undefined4 *)0x0) &&
     (ExceptionList = &pvStack_c, *(char *)(puVar3 + 0x2d) != '\0')) {
    ExceptionList = &pvStack_c;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      ExceptionList = &pvStack_c;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 *)this = 0;
  }
  if ((*(char *)((int)this + 0xc) != '\0') && (*(int *)((int)this + 0x14) != 0)) {
    if (*(int *)this != 0) {
      FUN_008de590();
      ExceptionList = pvStack_c;
      return;
    }
    puStack_2c = auStack_20;
    auStack_20[0] = 0;
    uStack_28 = 0;
    uStack_24 = 10;
    iStack_4 = 0;
    sVar2 = FUN_00ace02d(L"<P><T2>");
    FUN_0040cae0(&puStack_2c,L"<P><T2>",sVar2);
    FUN_0040cae0(&puStack_2c,*(wchar_t **)((int)this + 0x10),*(size_t *)((int)this + 0x14));
    sVar2 = FUN_00ace02d(L"</T2></p>");
    FUN_0040cae0(&puStack_2c,L"</T2></p>",sVar2);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
    puVar3 = operator_new(0xe0);
    iStack_4._0_1_ = 1;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x80);
      iStack_4._0_1_ = 2;
      if (pvVar4 != (void *)0x0) {
        FUN_008f9ea0(pvVar4,param_1,*(int *)((int)this + 0x44));
      }
      iStack_4._0_1_ = 1;
      puVar3 = FUN_008debc0(puVar3);
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    puVar6 = puVar3;
    iVar5 = FUN_0071b2a0();
    pvVar4 = (void *)FUN_0071b920(iVar5);
    FUN_00640700(pvVar4,puVar6);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[0x12] = puVar3[0x12] + 1;
    }
    puVar6 = *(undefined4 **)this;
    if (puVar6 != (undefined4 *)0x0) {
      piVar1 = puVar6 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(1);
      }
    }
    *(undefined4 **)this = puVar3;
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_2c);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0053dbf0 @ 0053dbf0 ////

undefined1 __fastcall FUN_0053dbf0(int param_1)

{
  return *(undefined1 *)(param_1 + 100);
}


//// FUNCTION FUN_0053dcd0 @ 0053dcd0 ////

undefined4 * __fastcall FUN_0053dcd0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf2f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  piVar1 = param_1 + 0x1a;
  *param_1 = &PTR_FUN_00d236b0;
  param_1[0x1c] = 0;
  *piVar1 = 0;
  param_1[0x1b] = 0;
  local_4 = 1;
  param_1[0x1c] = param_1;
  FUN_00acdb9e(0xe52a68);
  iVar2 = FUN_0097dda0();
  param_1[0x1d] = iVar2;
  if (s__PAVTMRefCounted_TM___00e52a50[0x16] != '\0') {
    iVar2 = 0x68;
    pcVar4 = "VisibleLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe52a68);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s__PAVTMRefCounted_TM___00e52a50[0x16] = '\0';
  }
  param_1[0x1b] = &DAT_0104c730;
  *piVar1 = (int)DAT_0104c730;
  *(int **)((int)DAT_0104c730 + 4) = piVar1;
  DAT_0104c730 = piVar1;
  *(undefined1 *)(param_1 + 0x19) = 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0053ddb0 @ 0053ddb0 ////

/* WARNING: Removing unreachable block (ram,0x0053ddde) */

void __fastcall FUN_0053ddb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d236b0;
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b] = param_1[0x1a];
  }
  if (param_1[0x1a] != 0) {
    *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1b];
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (param_1[0x1a] != 0) {
    *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1b];
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_0053de00 @ 0053de00 ////

void FUN_0053de00(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0104c724; puVar1 != &DAT_0104c730; puVar1 = (undefined4 *)puVar1[1]) {
    (**(code **)(*(int *)puVar1[2] + 0x1c))();
  }
  return;
}


//// FUNCTION FUN_0053de30 @ 0053de30 ////

undefined4 * __thiscall FUN_0053de30(void *this,byte param_1)

{
  FUN_0053ddb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0053de50 @ 0053de50 ////

void __fastcall FUN_0053de50(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d236d8;
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


//// FUNCTION FUN_0053dea0 @ 0053dea0 ////

undefined4 * __thiscall FUN_0053dea0(void *this,byte param_1)

{
  FUN_0053de50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0053dec0 @ 0053dec0 ////

void __fastcall FUN_0053dec0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d236d8;
  return;
}


//// FUNCTION FUN_0053df20 @ 0053df20 ////

void __fastcall FUN_0053df20(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)param_1);
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0053df60 @ 0053df60 ////

void FUN_0053df60(void)

{
  return;
}


//// FUNCTION FUN_0053df80 @ 0053df80 ////

void FUN_0053df80(void)

{
  return;
}


//// FUNCTION FUN_0053df90 @ 0053df90 ////

void FUN_0053df90(void)

{
  DAT_0104c750 = 1;
  return;
}


//// FUNCTION FUN_0053e690 @ 0053e690 ////

void __cdecl FUN_0053e690(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0053e6c0 @ 0053e6c0 ////

void __cdecl FUN_0053e6c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0053eac0 @ 0053eac0 ////

void __fastcall FUN_0053eac0(int param_1)

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


//// FUNCTION FUN_0053ee00 @ 0053ee00 ////

void __cdecl FUN_0053ee00(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -4) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined4 *)(param_2 + -4);
  }
  return;
}


//// FUNCTION FUN_0053ee60 @ 0053ee60 ////

void __cdecl FUN_0053ee60(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -4) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined4 *)(param_2 + -4);
  }
  return;
}


//// FUNCTION FUN_0053ef30 @ 0053ef30 ////

void __cdecl FUN_0053ef30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_0053ef60 @ 0053ef60 ////

void __cdecl FUN_0053ef60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_0053ef90 @ 0053ef90 ////

void __fastcall FUN_0053ef90(int *param_1)

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
  puStack_8 = &LAB_00caf328;
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


//// FUNCTION FUN_0053f080 @ 0053f080 ////

undefined4 * __fastcall FUN_0053f080(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf353;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0098a100(param_1);
  piVar1 = param_1 + 10;
  *param_1 = &PTR_FUN_00d236e4;
  param_1[0xc] = 0;
  *piVar1 = 0;
  param_1[0xb] = 0;
  local_4 = 1;
  param_1[0xc] = param_1;
  FUN_00acdb9e(0xe52ab0);
  iVar2 = FUN_0097dda0();
  param_1[0xd] = iVar2;
  if (s___AV__InList_VTMVisible_TM___MV__00e52a8c[0x22] != '\0') {
    iVar2 = 0x28;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe52ab0);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AV__InList_VTMVisible_TM___MV__00e52a8c[0x22] = '\0';
  }
  param_1[0xb] = &DAT_0104c7b8;
  *piVar1 = (int)DAT_0104c7b8;
  *(int **)((int)DAT_0104c7b8 + 4) = piVar1;
  DAT_0104c7b8 = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0053f150 @ 0053f150 ////

/* WARNING: Removing unreachable block (ram,0x0053f17e) */

void __fastcall FUN_0053f150(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d236e4;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb] = param_1[10];
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1[10] + 4) = param_1[0xb];
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1[10] + 4) = param_1[0xb];
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0098a1c0(param_1);
  return;
}


//// FUNCTION FUN_0053f260 @ 0053f260 ////

void __fastcall FUN_0053f260(int param_1)

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


//// FUNCTION FUN_0053f2d0 @ 0053f2d0 ////

void __fastcall FUN_0053f2d0(int param_1)

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


//// FUNCTION FUN_0053f310 @ 0053f310 ////

void __fastcall FUN_0053f310(int param_1)

{
  FUN_0053eac0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0053f360 @ 0053f360 ////

void __fastcall FUN_0053f360(int param_1)

{
  FUN_0053f260(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0053f3a0 @ 0053f3a0 ////

void __fastcall FUN_0053f3a0(int param_1)

{
  FUN_0053f2d0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0053f450 @ 0053f450 ////

void FUN_0053f450(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_0053f4b0 @ 0053f4b0 ////

void FUN_0053f4b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_0053f5e0 @ 0053f5e0 ////

void __cdecl FUN_0053f5e0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_0053f610 @ 0053f610 ////

void __cdecl FUN_0053f610(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_0053f640 @ 0053f640 ////

undefined4 * __thiscall FUN_0053f640(void *this,byte param_1)

{
  FUN_0053f150(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0053f6b0 @ 0053f6b0 ////

void __fastcall FUN_0053f6b0(int param_1)

{
  FUN_0053eac0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0053f700 @ 0053f700 ////

void __fastcall FUN_0053f700(int param_1)

{
  FUN_0053f260(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0053f740 @ 0053f740 ////

void __fastcall FUN_0053f740(int param_1)

{
  FUN_0053f2d0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0053f770 @ 0053f770 ////

void FUN_0053f770(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xc);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_0053f7a0 @ 0053f7a0 ////

void FUN_0053f7a0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_0053f7d0 @ 0053f7d0 ////

void FUN_0053f7d0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_0053f800 @ 0053f800 ////

void __thiscall FUN_0053f800(void *this,int *param_1,int *param_2)

{
  if (param_2 != *(int **)((int)this + 4)) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  *param_1 = *param_2;
  return;
}


//// FUNCTION FUN_0053f840 @ 0053f840 ////

void __thiscall FUN_0053f840(void *this,int *param_1,int *param_2)

{
  if (param_2 != *(int **)((int)this + 4)) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  *param_1 = *param_2;
  return;
}


//// FUNCTION FUN_0053f940 @ 0053f940 ////

void __thiscall FUN_0053f940(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar2 = *param_2;
  uVar5 = (uVar2 ^ 0xdeadbeef) & *(uint *)((int)this + 0x20);
  if (*(uint *)((int)this + 0x24) <= uVar5) {
    uVar5 = uVar5 + (-1 - (*(uint *)((int)this + 0x20) >> 1));
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x14) + uVar5 * 4);
  for (puVar3 = (undefined4 *)*puVar1;
      puVar3 != *(undefined4 **)(*(int *)((int)this + 0x14) + 4 + uVar5 * 4);
      puVar3 = (undefined4 *)*puVar3) {
    if (uVar2 <= (uint)puVar3[2]) {
      puVar1 = (undefined4 *)puVar1[1];
      puVar6 = puVar3;
      if (puVar3 != puVar1) goto LAB_0053f9a0;
      break;
    }
  }
  goto LAB_0053f980;
  while (puVar6 = (undefined4 *)*puVar6, puVar6 != puVar1) {
LAB_0053f9a0:
    if (uVar2 < (uint)puVar6[2]) break;
  }
  if (puVar3 != puVar6) {
    *param_1 = puVar3;
    param_1[1] = puVar6;
    return;
  }
LAB_0053f980:
  uVar4 = *(undefined4 *)((int)this + 8);
  *param_1 = uVar4;
  param_1[1] = uVar4;
  return;
}


//// FUNCTION FUN_0053f9c0 @ 0053f9c0 ////

void __thiscall FUN_0053f9c0(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar2 = *param_2;
  uVar5 = (uVar2 ^ 0xdeadbeef) & *(uint *)((int)this + 0x20);
  if (*(uint *)((int)this + 0x24) <= uVar5) {
    uVar5 = uVar5 + (-1 - (*(uint *)((int)this + 0x20) >> 1));
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x14) + uVar5 * 4);
  for (puVar3 = (undefined4 *)*puVar1;
      puVar3 != *(undefined4 **)(*(int *)((int)this + 0x14) + 4 + uVar5 * 4);
      puVar3 = (undefined4 *)*puVar3) {
    if (uVar2 <= (uint)puVar3[2]) {
      puVar1 = (undefined4 *)puVar1[1];
      puVar6 = puVar3;
      if (puVar3 != puVar1) goto LAB_0053fa20;
      break;
    }
  }
  goto LAB_0053fa00;
  while (puVar6 = (undefined4 *)*puVar6, puVar6 != puVar1) {
LAB_0053fa20:
    if (uVar2 < (uint)puVar6[2]) break;
  }
  if (puVar3 != puVar6) {
    *param_1 = puVar3;
    param_1[1] = puVar6;
    return;
  }
LAB_0053fa00:
  uVar4 = *(undefined4 *)((int)this + 8);
  *param_1 = uVar4;
  param_1[1] = uVar4;
  return;
}


//// FUNCTION FUN_0053fa40 @ 0053fa40 ////

int __fastcall FUN_0053fa40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0053f770();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0053fa60 @ 0053fa60 ////

int __fastcall FUN_0053fa60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0053f7a0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0053fa80 @ 0053fa80 ////

int __fastcall FUN_0053fa80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0053f7d0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0053fba0 @ 0053fba0 ////

undefined4 * FUN_0053fba0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0053f5e0(param_1,param_2,param_3);
  return param_1 + param_2;
}


//// FUNCTION FUN_0053fbd0 @ 0053fbd0 ////

undefined4 * FUN_0053fbd0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0053f610(param_1,param_2,param_3);
  return param_1 + param_2;
}


//// FUNCTION FUN_0053fc00 @ 0053fc00 ////

undefined4 * __cdecl FUN_0053fc00(undefined4 *param_1)

{
  undefined4 uVar1;
  int **ppiVar2;
  int *local_c;
  int *local_8;
  int *local_4;
  
  FUN_0043b520(&local_c,9999.0);
  FUN_0053f940(&DAT_0104c754,&local_8,(uint *)&stack0x00000008);
  if (local_8 != local_4) {
    do {
      (**(code **)(*(int *)local_8[3] + 0x1c))(&local_8);
      uVar1 = FUN_0043b6c0(&local_c,(float *)&local_8);
      ppiVar2 = &local_c;
      if ((char)uVar1 == '\0') {
        ppiVar2 = &local_8;
      }
      local_c = *ppiVar2;
      local_8 = (int *)*local_8;
    } while (local_8 != local_4);
    *param_1 = local_c;
    return param_1;
  }
  *param_1 = local_c;
  return param_1;
}


//// FUNCTION FUN_0053fc90 @ 0053fc90 ////

undefined4 __cdecl FUN_0053fc90(undefined4 param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int *local_8;
  int *local_4;
  
  bVar1 = false;
  FUN_0053f940(&DAT_0104c754,&local_8,&param_1);
  piVar2 = param_2;
  if (local_8 != local_4) {
    do {
      if ((int *)local_8[3] != piVar2) {
        bVar1 = true;
        cVar3 = (**(code **)(*(int *)local_8[3] + 0x20))();
        if (cVar3 != '\0') {
          return 1;
        }
      }
      local_8 = (int *)*local_8;
    } while (local_8 != local_4);
    if (bVar1) {
      return 0;
    }
  }
  return 1;
}


//// FUNCTION ContentUnlock_Constructor @ 0053fd10 ////

/* WARNING: Removing unreachable block (ram,0x0053fd95) */

void ContentUnlock_Constructor(void)

{
  char local_20 [6];
  undefined1 local_1a;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00960ed0(FUN_0053fc00);
  FUN_00960ec0(&LAB_0053fd00);
  local_20[0] = '\0';
  _strncpy(local_20,"unlock",6);
  local_1a = 0;
  local_4 = 0;
  FUN_005434b0();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0053fdb0 @ 0053fdb0 ////

void __thiscall FUN_0053fdb0(void *this,undefined4 param_1)

{
  FUN_0053fc90(param_1,this);
  return;
}


//// FUNCTION FUN_0053fdd0 @ 0053fdd0 ////

void FUN_0053fdd0(void)

{
  int *piVar1;
  int *piVar2;
  uint local_c;
  int *local_8;
  int *local_4;
  
  FUN_0053f9c0(&DAT_0104c77c,&local_8,&local_c);
  piVar1 = DAT_0104c7dc;
  for (; local_8 != local_4; local_8 = (int *)*local_8) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != piVar1) {
      do {
        (*(code *)**(undefined4 **)piVar2[2])(local_8[3]);
        piVar2 = (int *)*piVar2;
        piVar1 = DAT_0104c7dc;
      } while (piVar2 != DAT_0104c7dc);
    }
  }
  return;
}


//// FUNCTION FUN_0053fe30 @ 0053fe30 ////

void __fastcall FUN_0053fe30(int param_1)

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


//// FUNCTION FUN_0053fe60 @ 0053fe60 ////

void __fastcall FUN_0053fe60(int param_1)

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


//// FUNCTION FUN_0053fe90 @ 0053fe90 ////

void __thiscall FUN_0053fe90(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 **)((int)this + 8);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 1) {
      *puVar2 = *param_3;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0053fed0 @ 0053fed0 ////

void __thiscall FUN_0053fed0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 **)((int)this + 8);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 1) {
      *puVar2 = *param_3;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0053ff10 @ 0053ff10 ////

void __fastcall FUN_0053ff10(int param_1)

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


//// FUNCTION FUN_0053ff40 @ 0053ff40 ////

void __fastcall FUN_0053ff40(int param_1)

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


//// FUNCTION FUN_0053ff70 @ 0053ff70 ////

void __fastcall FUN_0053ff70(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_0053f260(param_1 + 4);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_0053ffb0 @ 0053ffb0 ////

void __fastcall FUN_0053ffb0(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_0053f2d0(param_1 + 4);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_0053fff0 @ 0053fff0 ////

void __fastcall FUN_0053fff0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d23718;
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


//// FUNCTION FUN_00540040 @ 00540040 ////

undefined4 * __thiscall FUN_00540040(void *this,byte param_1)

{
  FUN_0053fff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00540100 @ 00540100 ////

void __thiscall FUN_00540100(void *this,uint param_1)

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
  puStack_8 = &LAB_00caf3a8;
  local_c = ExceptionList;
  if (0x1fffffffU - *(int *)((int)this + 8) < param_1) {
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


//// FUNCTION FUN_005401a0 @ 005401a0 ////

void __thiscall FUN_005401a0(void *this,uint param_1)

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
  puStack_8 = &LAB_00caf3c8;
  local_c = ExceptionList;
  if (0x1fffffffU - *(int *)((int)this + 8) < param_1) {
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


//// FUNCTION FUN_00540240 @ 00540240 ////

void FUN_00540240(void)

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
  puStack_8 = &LAB_00caf3e8;
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


//// FUNCTION FUN_005402b0 @ 005402b0 ////

void FUN_005402b0(void)

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
  puStack_8 = &LAB_00caf408;
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


//// FUNCTION FUN_00540320 @ 00540320 ////

void __fastcall FUN_00540320(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_0053f260(param_1 + 4);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_00540360 @ 00540360 ////

void __fastcall FUN_00540360(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_0053f2d0(param_1 + 4);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_00540420 @ 00540420 ////

void __thiscall FUN_00540420(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00caf420;
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
      uVar7 = FUN_00540240();
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
      puVar4 = (undefined4 *)FUN_0053ef30(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_0053f5e0(puVar4,param_2,&param_3);
      FUN_0053ef30(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2);
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
      FUN_0053ef30(param_1,puVar3,param_1 + param_2);
      local_8 = 2;
      FUN_0053fba0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar6 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar6;
      FUN_0053e690(param_1,(undefined4 *)(iVar6 + param_2 * -4),&param_3);
      ExceptionList = local_10;
      return;
    }
    uVar5 = FUN_0053ef30(puVar3 + -param_2,puVar3,puVar3);
    *(undefined4 *)((int)this + 8) = uVar5;
    FUN_0053ee00((int)param_1,(int)(puVar3 + -param_2),puVar3);
    FUN_0053e690(param_1,param_1 + param_2,&param_3);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_005406a0 @ 005406a0 ////

void __thiscall FUN_005406a0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00caf430;
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
      uVar7 = FUN_005402b0();
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
      puVar4 = (undefined4 *)FUN_0053ef60(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_0053f610(puVar4,param_2,&param_3);
      FUN_0053ef60(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2);
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
      FUN_0053ef60(param_1,puVar3,param_1 + param_2);
      local_8 = 2;
      FUN_0053fbd0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar6 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar6;
      FUN_0053e6c0(param_1,(undefined4 *)(iVar6 + param_2 * -4),&param_3);
      ExceptionList = local_10;
      return;
    }
    uVar5 = FUN_0053ef60(puVar3 + -param_2,puVar3,puVar3);
    *(undefined4 *)((int)this + 8) = uVar5;
    FUN_0053ee60((int)param_1,(int)(puVar3 + -param_2),puVar3);
    FUN_0053e6c0(param_1,param_1 + param_2,&param_3);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00540980 @ 00540980 ////

void __thiscall FUN_00540980(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00caf440;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    iVar1 = FUN_0053f450(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    FUN_00540100(this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00540a30 @ 00540a30 ////

void __thiscall FUN_00540a30(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00caf450;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    iVar1 = FUN_0053f4b0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    FUN_005401a0(this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00540b60 @ 00540b60 ////

void __thiscall FUN_00540b60(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2 >> 2;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2 >> 2;
    }
    FUN_00540420(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if ((iVar2 != 0) && (param_1 < (uint)((int)*(undefined4 **)((int)this + 8) - iVar2 >> 2))) {
    FUN_0053fe90(this,&param_1,(undefined4 *)(iVar2 + param_1 * 4),*(undefined4 **)((int)this + 8));
  }
  return;
}


//// FUNCTION FUN_00540c10 @ 00540c10 ////

void __thiscall FUN_00540c10(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2 >> 2;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2 >> 2;
    }
    FUN_005406a0(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if ((iVar2 != 0) && (param_1 < (uint)((int)*(undefined4 **)((int)this + 8) - iVar2 >> 2))) {
    FUN_0053fed0(this,&param_1,(undefined4 *)(iVar2 + param_1 * 4),*(undefined4 **)((int)this + 8));
  }
  return;
}


//// FUNCTION FUN_00540c80 @ 00540c80 ////

void __thiscall FUN_00540c80(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00caf460;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    uVar1 = param_1;
    if (0x3fffffff < param_1) {
      uVar1 = FUN_00540240();
    }
    puVar2 = operator_new(uVar1 * 4);
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1;
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    local_8 = 0;
    FUN_0053f5e0(puVar2,param_1,param_2);
    *(undefined4 **)((int)this + 8) = puVar2 + uVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00540d40 @ 00540d40 ////

void __thiscall FUN_00540d40(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00caf470;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    uVar1 = param_1;
    if (0x3fffffff < param_1) {
      uVar1 = FUN_005402b0();
    }
    puVar2 = operator_new(uVar1 * 4);
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1;
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    local_8 = 0;
    FUN_0053f610(puVar2,param_1,param_2);
    *(undefined4 **)((int)this + 8) = puVar2 + uVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00540ef0 @ 00540ef0 ////

/* WARNING: Removing unreachable block (ram,0x00540f0b) */
/* WARNING: Removing unreachable block (ram,0x00540f10) */
/* WARNING: Removing unreachable block (ram,0x00540f1e) */

void __thiscall FUN_00540ef0(void *this,uint param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)*param_2;
  if (*(int *)((int)this + 4) != *(int *)((int)this + 8)) {
    *(int *)((int)this + 8) = *(int *)((int)this + 4);
  }
  FUN_00540420(this,*(undefined4 **)((int)this + 4),param_1,&param_2);
  return;
}


//// FUNCTION FUN_00540fb0 @ 00540fb0 ////

/* WARNING: Removing unreachable block (ram,0x00540fcb) */
/* WARNING: Removing unreachable block (ram,0x00540fd0) */
/* WARNING: Removing unreachable block (ram,0x00540fde) */

void __thiscall FUN_00540fb0(void *this,uint param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)*param_2;
  if (*(int *)((int)this + 4) != *(int *)((int)this + 8)) {
    *(int *)((int)this + 8) = *(int *)((int)this + 4);
  }
  FUN_005406a0(this,*(undefined4 **)((int)this + 4),param_1,&param_2);
  return;
}


//// FUNCTION FUN_00541000 @ 00541000 ////

void __fastcall FUN_00541000(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d23718;
  return;
}


//// FUNCTION FUN_00541060 @ 00541060 ////

undefined1 * __thiscall FUN_00541060(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf4ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)this = *param_1;
  uVar1 = FUN_0053f7a0();
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  param_1 = *(undefined1 **)((int)this + 8);
  local_4 = 0;
  FUN_00540c80((void *)((int)this + 0x10),9,&param_1);
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined4 *)((int)this + 0x24) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005410e0 @ 005410e0 ////

/* WARNING: Removing unreachable block (ram,0x005411c4) */

void __thiscall FUN_005410e0(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar6 = *(uint *)((int)this + 0x24);
  if (uVar6 <= *(uint *)((int)this + 0xc) >> 2) {
    if (*(int *)((int)this + 0x14) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
    }
    if (uVar6 < iVar3 - 1U) {
      if (*(uint *)((int)this + 0x20) < uVar6) {
        *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) * 2 + 1;
      }
    }
    else {
      if (*(int *)((int)this + 0x14) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
      }
      *(int *)((int)this + 0x20) = iVar3 * 2 + -3;
      FUN_00540b60((void *)((int)this + 0x10),iVar3 * 2 - 1);
    }
    uVar6 = (*(int *)((int)this + 0x24) - (*(uint *)((int)this + 0x20) >> 1)) - 1;
    puVar7 = *(undefined4 **)(uVar6 * 4 + *(int *)((int)this + 0x14));
    if (puVar7 != *(undefined4 **)(uVar6 * 4 + *(int *)((int)this + 0x14) + 4)) {
      do {
        if (((puVar7[2] ^ 0xdeadbeef) & *(uint *)((int)this + 0x20)) == uVar6) {
          puVar8 = (undefined4 *)*puVar7;
        }
        else {
          puVar8 = (undefined4 *)*puVar7;
          if (puVar8 != *(undefined4 **)((int)this + 8)) {
            puVar1 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar6 * 4);
            uVar4 = uVar6;
            while ((puVar7 == puVar1 &&
                   (*(undefined4 **)(*(int *)((int)this + 0x14) + uVar4 * 4) = puVar8, uVar4 != 0)))
            {
              uVar4 = uVar4 - 1;
              puVar1 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar4 * 4);
            }
            iVar3 = *(int *)((int)this + 8);
            *(undefined4 **)puVar7[1] = puVar8;
            *(int *)puVar8[1] = iVar3;
            **(undefined4 **)(iVar3 + 4) = puVar7;
            uVar2 = *(undefined4 *)(iVar3 + 4);
            *(undefined4 *)(iVar3 + 4) = puVar8[1];
            puVar8[1] = puVar7[1];
            puVar7[1] = uVar2;
            puVar7 = *(undefined4 **)(*(int *)((int)this + 8) + 4);
            *(int *)(*(int *)((int)this + 0x14) + 4 + *(int *)((int)this + 0x24) * 4) =
                 *(int *)((int)this + 8);
          }
          for (uVar4 = *(uint *)((int)this + 0x24);
              (uVar6 < uVar4 &&
              (*(int *)(*(int *)((int)this + 0x14) + uVar4 * 4) == *(int *)((int)this + 8)));
              uVar4 = uVar4 - 1) {
            *(undefined4 **)(*(int *)((int)this + 0x14) + uVar4 * 4) = puVar7;
          }
          if (puVar8 == *(undefined4 **)((int)this + 8)) break;
        }
        puVar7 = puVar8;
      } while (puVar8 != *(undefined4 **)(uVar6 * 4 + 4 + *(int *)((int)this + 0x14)));
    }
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  }
  uVar6 = *param_2;
  uVar4 = (uVar6 ^ 0xdeadbeef) & *(uint *)((int)this + 0x20);
  if (*(uint *)((int)this + 0x24) <= uVar4) {
    uVar4 = uVar4 + (-1 - (*(uint *)((int)this + 0x20) >> 1));
  }
  iVar3 = uVar4 * 4;
  puVar7 = *(undefined4 **)(*(int *)((int)this + 0x14) + 4 + iVar3);
  if (puVar7 != *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3)) {
    do {
      puVar7 = (undefined4 *)puVar7[1];
      if ((uint)puVar7[2] <= uVar6) {
        if ((uint)puVar7[2] < uVar6) {
          puVar7 = (undefined4 *)*puVar7;
        }
        break;
      }
    } while (puVar7 != *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3));
  }
  iVar5 = FUN_0053f450(puVar7,puVar7[1],param_2);
  FUN_00540100((void *)((int)this + 4),1);
  puVar7[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  puVar8 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3);
  uVar2 = puVar7[1];
  while ((puVar7 == puVar8 &&
         (*(undefined4 *)(*(int *)((int)this + 0x14) + iVar3) = uVar2, uVar4 != 0))) {
    uVar4 = uVar4 - 1;
    iVar3 = uVar4 * 4;
    puVar8 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3);
  }
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00541320 @ 00541320 ////

undefined1 * __thiscall FUN_00541320(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf4cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)this = *param_1;
  uVar1 = FUN_0053f7d0();
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  param_1 = *(undefined1 **)((int)this + 8);
  local_4 = 0;
  FUN_00540d40((void *)((int)this + 0x10),9,&param_1);
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined4 *)((int)this + 0x24) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005413a0 @ 005413a0 ////

/* WARNING: Removing unreachable block (ram,0x00541484) */

void __thiscall FUN_005413a0(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar6 = *(uint *)((int)this + 0x24);
  if (uVar6 <= *(uint *)((int)this + 0xc) >> 2) {
    if (*(int *)((int)this + 0x14) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
    }
    if (uVar6 < iVar3 - 1U) {
      if (*(uint *)((int)this + 0x20) < uVar6) {
        *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) * 2 + 1;
      }
    }
    else {
      if (*(int *)((int)this + 0x14) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
      }
      *(int *)((int)this + 0x20) = iVar3 * 2 + -3;
      FUN_00540c10((void *)((int)this + 0x10),iVar3 * 2 - 1);
    }
    uVar6 = (*(int *)((int)this + 0x24) - (*(uint *)((int)this + 0x20) >> 1)) - 1;
    puVar7 = *(undefined4 **)(uVar6 * 4 + *(int *)((int)this + 0x14));
    if (puVar7 != *(undefined4 **)(uVar6 * 4 + *(int *)((int)this + 0x14) + 4)) {
      do {
        if (((puVar7[2] ^ 0xdeadbeef) & *(uint *)((int)this + 0x20)) == uVar6) {
          puVar8 = (undefined4 *)*puVar7;
        }
        else {
          puVar8 = (undefined4 *)*puVar7;
          if (puVar8 != *(undefined4 **)((int)this + 8)) {
            puVar1 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar6 * 4);
            uVar4 = uVar6;
            while ((puVar7 == puVar1 &&
                   (*(undefined4 **)(*(int *)((int)this + 0x14) + uVar4 * 4) = puVar8, uVar4 != 0)))
            {
              uVar4 = uVar4 - 1;
              puVar1 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar4 * 4);
            }
            iVar3 = *(int *)((int)this + 8);
            *(undefined4 **)puVar7[1] = puVar8;
            *(int *)puVar8[1] = iVar3;
            **(undefined4 **)(iVar3 + 4) = puVar7;
            uVar2 = *(undefined4 *)(iVar3 + 4);
            *(undefined4 *)(iVar3 + 4) = puVar8[1];
            puVar8[1] = puVar7[1];
            puVar7[1] = uVar2;
            puVar7 = *(undefined4 **)(*(int *)((int)this + 8) + 4);
            *(int *)(*(int *)((int)this + 0x14) + 4 + *(int *)((int)this + 0x24) * 4) =
                 *(int *)((int)this + 8);
          }
          for (uVar4 = *(uint *)((int)this + 0x24);
              (uVar6 < uVar4 &&
              (*(int *)(*(int *)((int)this + 0x14) + uVar4 * 4) == *(int *)((int)this + 8)));
              uVar4 = uVar4 - 1) {
            *(undefined4 **)(*(int *)((int)this + 0x14) + uVar4 * 4) = puVar7;
          }
          if (puVar8 == *(undefined4 **)((int)this + 8)) break;
        }
        puVar7 = puVar8;
      } while (puVar8 != *(undefined4 **)(uVar6 * 4 + 4 + *(int *)((int)this + 0x14)));
    }
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  }
  uVar6 = *param_2;
  uVar4 = (uVar6 ^ 0xdeadbeef) & *(uint *)((int)this + 0x20);
  if (*(uint *)((int)this + 0x24) <= uVar4) {
    uVar4 = uVar4 + (-1 - (*(uint *)((int)this + 0x20) >> 1));
  }
  iVar3 = uVar4 * 4;
  puVar7 = *(undefined4 **)(*(int *)((int)this + 0x14) + 4 + iVar3);
  if (puVar7 != *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3)) {
    do {
      puVar7 = (undefined4 *)puVar7[1];
      if ((uint)puVar7[2] <= uVar6) {
        if ((uint)puVar7[2] < uVar6) {
          puVar7 = (undefined4 *)*puVar7;
        }
        break;
      }
    } while (puVar7 != *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3));
  }
  iVar5 = FUN_0053f4b0(puVar7,puVar7[1],param_2);
  FUN_005401a0((void *)((int)this + 4),1);
  puVar7[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  puVar8 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3);
  uVar2 = puVar7[1];
  while ((puVar7 == puVar8 &&
         (*(undefined4 *)(*(int *)((int)this + 0x14) + iVar3) = uVar2, uVar4 != 0))) {
    uVar4 = uVar4 - 1;
    iVar3 = uVar4 * 4;
    puVar8 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3);
  }
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_005415e0 @ 005415e0 ////

void * __fastcall FUN_005415e0(void *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00541060(param_1,(undefined1 *)((int)&uStack_4 + 3));
  return param_1;
}


//// FUNCTION FUN_00541650 @ 00541650 ////

void * __fastcall FUN_00541650(void *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00541320(param_1,(undefined1 *)((int)&uStack_4 + 3));
  return param_1;
}


//// FUNCTION FUN_005416c0 @ 005416c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005416c0(void)

{
  undefined4 local_4;
  
  DAT_0104c750 = 0;
  FUN_0053f260(0x104c758);
  local_4 = DAT_0104c75c;
  FUN_00540ef0(&DAT_0104c764,9,&local_4);
  _DAT_0104c774 = 1;
  _DAT_0104c778 = 1;
  FUN_0053f2d0(0x104c780);
  local_4 = DAT_0104c784;
  FUN_00540fb0(&DAT_0104c78c,9,&local_4);
  _DAT_0104c79c = 1;
  _DAT_0104c7a0 = 1;
  return;
}


//// FUNCTION FUN_00541740 @ 00541740 ////

void __cdecl FUN_00541740(uint param_1,uint param_2)

{
  uint local_18;
  uint local_14;
  undefined4 local_10 [2];
  undefined4 local_8 [2];
  
  local_18 = param_2;
  local_14 = param_1;
  FUN_005410e0(&DAT_0104c754,local_10,&local_18);
  local_18 = param_1;
  local_14 = param_2;
  FUN_005413a0(&DAT_0104c77c,local_8,&local_18);
  return;
}


//// FUNCTION FUN_005417f0 @ 005417f0 ////

void __thiscall FUN_005417f0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf4e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a05ff0(local_14,this,0);
  local_4 = 0;
  FUN_00a061a0(local_14,param_1,param_2);
  local_4 = 0xffffffff;
  FUN_00a05fe0((int)local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00541870 @ 00541870 ////

void __fastcall FUN_00541870(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00541880 @ 00541880 ////

undefined4 * __thiscall FUN_00541880(void *this,byte param_1)

{
  FUN_00541870(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005418a0 @ 005418a0 ////

undefined4 * __fastcall FUN_005418a0(undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  return param_1;
}


//// FUNCTION FUN_005418d0 @ 005418d0 ////

undefined4 * __thiscall FUN_005418d0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined1 local_34 [8];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf529;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a05ff0(local_34,this,0);
  local_2c = local_20;
  local_4 = 1;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"",0);
  local_28 = 0;
  *local_2c = '\0';
  local_4._0_1_ = 2;
  FUN_00a06260(local_34,param_1,param_2,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00a05fe0((int)local_34);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION InitConfigRegistryPath @ 005419e0 ////

void InitConfigRegistryPath(void)

{
  undefined4 *this;
  
                    /* InitConfigRegistryPath - constructs the global CBasicString holding the
                       literal registry subkey path "Software\\Lionhead Studios Ltd\\TheMovies"
                       (classic HKCU\Software\<Company>\<Product> convention), stored in
                       g_configRegistryPath. This string is passed as the first argument to
                       Config_GetOrCreateInt (and presumably sibling Config_GetOrCreate* functions)
                       throughout the whole codebase - 50+ confirmed call sites across audio
                       options, autosave, tutorial system, trailer editor, movie maker, sandbox
                       decade-unlock, and more (see get_xrefs_to on g_configRegistryPath). Confirms
                       the game's settings/options are stored in the Windows Registry under this
                       key, not an INI/config file. Called once from WinMain during startup;
                       cleaned up by ShutdownConfigRegistryPath during shutdown. Confirmed
                       2026-10-01. */
  this = operator_new(0x20);
  if (this != (undefined4 *)0x0) {
    *this = this + 3;
    *(undefined1 *)(this + 3) = 0;
    this[1] = 0;
    this[2] = 0x14;
    FUN_004015d0(this,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
    g_configRegistryPath = this;
    return;
  }
  g_configRegistryPath = (undefined4 *)0x0;
  return;
}


//// FUNCTION ShutdownConfigRegistryPath @ 00541a30 ////

void ShutdownConfigRegistryPath(void)

{
  undefined4 *_Memory;
  
  _Memory = g_configRegistryPath;
  if (g_configRegistryPath != (undefined4 *)0x0) {
    FUN_00541870(g_configRegistryPath);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  g_configRegistryPath = (undefined4 *)0x0;
  return;
}


//// FUNCTION FUN_00541a60 @ 00541a60 ////

undefined4 * __fastcall FUN_00541a60(undefined4 *param_1)

{
  char *local_20;
  size_t local_1c;
  uint local_18;
  
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  FUN_004073f0(param_1,"\\",1);
  FUN_0048f010(&stack0x00000004,&local_20);
  FUN_004073f0(param_1,local_20,local_1c);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_00541ae0 @ 00541ae0 ////

float10 __thiscall FUN_00541ae0(void *param_1,undefined4 *param_2,float param_3)

{
  size_t sVar1;
  double dVar2;
  undefined1 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 local_80 [20];
  char *local_6c;
  int local_68;
  uint local_64;
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf553;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005418d0(param_1,&local_6c,param_2);
  local_4 = 0;
  if (local_68 == 0) {
    local_8c = local_80;
    local_80[0] = 0;
    local_88 = 0;
    local_84 = 0x14;
    local_4 = 1;
    sVar1 = _sprintf(local_4c,"%.2f",(double)param_3);
    FUN_004073f0(&local_8c,local_4c,sVar1);
    FUN_005417f0(param_1,param_2,&local_8c);
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  else {
    dVar2 = _atof(local_6c);
    param_3 = (float)dVar2;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return (float10)param_3;
}


//// FUNCTION Config_GetOrCreateInt @ 00541c00 ////

long __thiscall Config_GetOrCreateInt(void *this,undefined4 *param_1,long param_2)

{
  size_t sVar1;
  undefined1 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 local_80 [20];
  char *local_6c;
  int local_68;
  uint local_64;
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf573;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005418d0(this,&local_6c,param_1);
  local_4 = 0;
  if (local_68 == 0) {
    local_8c = local_80;
    local_80[0] = 0;
    local_88 = 0;
    local_84 = 0x14;
    local_4 = 1;
    sVar1 = _sprintf(local_4c,(char *)&param_2_00d1b93c,param_2);
    FUN_004073f0(&local_8c,local_4c,sVar1);
    FUN_005417f0(this,param_1,&local_8c);
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  else {
    param_2 = _atol(local_6c);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return param_2;
}


//// FUNCTION FUN_00541d10 @ 00541d10 ////

undefined4 * __thiscall
FUN_00541d10(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf588;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005418d0(this,&local_2c,param_2);
  local_4 = 0;
  if (local_28 == 0) {
    FUN_005417f0(this,param_2,param_3);
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    *param_1 = param_1 + 3;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,(char *)*param_3,param_3[1]);
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    *param_1 = param_1 + 3;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,local_2c,local_28);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00541de0 @ 00541de0 ////

undefined1 __thiscall FUN_00541de0(void *this,undefined4 *param_1,undefined1 param_2)

{
  long lVar1;
  char *local_20;
  int local_1c;
  uint local_18;
  
  FUN_005418d0(this,&local_20,param_1);
  if (local_1c != 0) {
    lVar1 = _atol(local_20);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    return lVar1 != 0;
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_2;
}


//// FUNCTION FUN_00541e50 @ 00541e50 ////

byte __thiscall FUN_00541e50(void *this,undefined4 *param_1,byte param_2)

{
  size_t sVar1;
  long lVar2;
  undefined1 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 local_80 [20];
  char *local_6c;
  int local_68;
  uint local_64;
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf5b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005418d0(this,&local_6c,param_1);
  local_4 = 0;
  if (local_68 == 0) {
    local_8c = local_80;
    local_80[0] = 0;
    local_88 = 0;
    local_84 = 0x14;
    local_4 = 1;
    sVar1 = _sprintf(local_4c,(char *)&param_2_00d1b93c,(uint)param_2);
    FUN_004073f0(&local_8c,local_4c,sVar1);
    FUN_005417f0(this,param_1,&local_8c);
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
  }
  else {
    lVar2 = _atol(local_6c);
    param_2 = lVar2 != 0;
  }
  if (local_64 < 0x15) {
    ExceptionList = local_c;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_00541f60 @ 00541f60 ////

bool __cdecl FUN_00541f60(int param_1)

{
  return param_1 == 0;
}


//// FUNCTION FUN_005420c0 @ 005420c0 ////

void __thiscall FUN_005420c0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == *(int *)this) {
    *(undefined4 *)this = *(undefined4 *)(*param_2 + 0x10);
  }
  if (*param_2 == *(int *)((int)this + 4)) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(*param_2 + 0x14);
  }
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*param_2 + 0x14);
  }
  iVar1 = *(int *)(*param_2 + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*param_2 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_2);
}


//// FUNCTION FUN_00542210 @ 00542210 ////

void __fastcall FUN_00542210(int *param_1)

{
  int local_8;
  undefined1 local_4 [4];
  
  local_8 = *param_1;
  FUN_005420c0(param_1,local_4,&local_8);
  return;
}


//// FUNCTION FUN_00542230 @ 00542230 ////

void __fastcall FUN_00542230(void *param_1)

{
  int local_8;
  undefined1 local_4 [4];
  
  local_8 = *(int *)((int)param_1 + 4);
  FUN_005420c0(param_1,local_4,&local_8);
  return;
}


//// FUNCTION FUN_005422a0 @ 005422a0 ////

void __fastcall FUN_005422a0(int *param_1)

{
  void *_Memory;
  
  if (*param_1 != 0) {
    _Memory = (void *)*param_1;
    *param_1 = *(int *)((int)_Memory + 0x10);
    if (_Memory == (void *)param_1[1]) {
      param_1[1] = *(int *)((int)_Memory + 0x14);
    }
    if (*(int *)((int)_Memory + 0x10) != 0) {
      *(undefined4 *)(*(int *)((int)_Memory + 0x10) + 0x14) = *(undefined4 *)((int)_Memory + 0x14);
    }
    if (*(int *)((int)_Memory + 0x14) != 0) {
      *(undefined4 *)(*(int *)((int)_Memory + 0x14) + 0x10) = *(undefined4 *)((int)_Memory + 0x10);
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_005422b0 @ 005422b0 ////

undefined1 FUN_005422b0(void)

{
  int iVar1;
  undefined1 uVar2;
  tagMSG local_1c;
  
  uVar2 = 0;
  iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  while (iVar1 != 0) {
    if ((local_1c.message == 0x10) || (local_1c.message == 0x12)) {
      uVar2 = 1;
    }
    else if ((local_1c.message != 0x105) || (DAT_0105be92 != '\0')) {
      TranslateMessage(&local_1c);
      DispatchMessageA(&local_1c);
    }
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  }
  return uVar2;
}


//// FUNCTION FUN_00542760 @ 00542760 ////

void FUN_00542760(void)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  void *this;
  undefined1 *local_144;
  undefined4 local_140;
  uint local_13c;
  undefined1 local_138 [20];
  undefined1 *local_124;
  undefined4 local_120;
  uint local_11c;
  undefined1 local_118 [20];
  undefined1 *local_104;
  undefined4 local_100;
  uint local_fc;
  undefined1 local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf63a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar4 = FUN_00a0e9d0();
  if (piVar4 == (int *)0x0) {
    ExceptionList = local_c;
    return;
  }
  local_144 = local_138;
  local_138[0] = 0;
  local_140 = 0;
  local_13c = 0x14;
  pcVar2 = "servicepack";
  do {
    pcVar6 = pcVar2;
    pcVar2 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  FUN_004015d0(&local_144,"servicepack",(uint)(pcVar6 + -0xd23b6c));
  local_4 = 0;
  FUN_0055c540(local_e4,&local_144);
  if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
    _free(local_144);
  }
  local_124 = local_118;
  local_118[0] = 0;
  local_120 = 0;
  local_11c = 0x14;
  pcVar2 = "servicepack";
  do {
    pcVar6 = pcVar2;
    pcVar2 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  FUN_004015d0(&local_124,"servicepack",(uint)(pcVar6 + -0xd23b6c));
  bVar1 = false;
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar5 = FUN_00558490(local_e4,&local_124);
  if ((char)uVar5 != '\0') {
    local_104 = local_f8;
    local_f8[0] = 0;
    local_100 = 0;
    local_fc = 0x14;
    pcVar2 = "servicepack";
    do {
      pcVar6 = pcVar2;
      pcVar2 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    FUN_004015d0(&local_104,"servicepack",(uint)(pcVar6 + -0xd23b6c));
    bVar1 = true;
    local_4 = 4;
    uVar5 = FUN_00558750(local_e4,&local_104,0);
    if (uVar5 == 1) {
      uVar5 = 1;
      goto LAB_005428bb;
    }
  }
  uVar5 = uVar5 & 0xffffff00;
LAB_005428bb:
  cVar3 = (**(code **)(*piVar4 + 4))(uVar5);
  if ((bVar1) && (0x14 < local_fc)) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_4 = 2;
  if (local_11c < 0x15) {
    if (cVar3 == '\0') {
      (**(code **)*piVar4)(1);
    }
    else {
      this = (void *)FUN_00a0b210();
      FUN_00a0a9b0(this,piVar4);
    }
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_124);
}


//// FUNCTION FUN_00542960 @ 00542960 ////

void __cdecl FUN_00542960(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  LPCWSTR local_4c [2];
  uint local_44;
  LPCWSTR local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Game_InitUserDataFolders();
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_6c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_009b5030(local_2c,&local_6c);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"ERROR_TITLE",0xb);
  local_68 = 0xb;
  local_6c[0xb] = '\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_009b5030(local_4c,&local_6c);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  MessageBoxW((HWND)0x0,local_2c[0],local_4c[0],0x11010);
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


//// FUNCTION FUN_00542aa0 @ 00542aa0 ////

uint FUN_00542aa0(void)

{
  DWORD DVar1;
  uint uVar2;
  WINBOOL WVar3;
  
  DAT_00e52b0c = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,"LionheadStudiosTheStarMaker");
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    uVar2 = FUN_00542960("ERROR_CANNOTSTART_STARMAKERRUNNING");
    return uVar2 & 0xffffff00;
  }
  DAT_00e52b10 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,"LionheadStudiosTheMovies");
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    CloseHandle(DAT_00e52b0c);
    uVar2 = FUN_00542960("ERROR_CANNOTSTART_GAMEALREADYRUNNING");
    return uVar2 & 0xffffff00;
  }
  WVar3 = CloseHandle(DAT_00e52b0c);
  return CONCAT31((int3)((uint)WVar3 >> 8),1);
}


//// FUNCTION WinMain @ 00542b20 ////

undefined4 WinMain(HINSTANCE param_1,undefined4 param_2,byte *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  size_t sVar7;
  HWND hWnd;
  HANDLE hEvent;
  HANDLE hHandle;
  int iVar8;
  DWORD dwStyle;
  DWORD dwExStyle;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  void **ppvVar12;
  WCHAR **ppWVar13;
  WCHAR **ppWVar14;
  long lVar15;
  undefined1 **ppuVar16;
  WCHAR *local_16c;
  undefined4 local_168;
  uint local_164;
  WCHAR local_160 [10];
  WCHAR *local_14c;
  undefined4 local_148;
  uint local_144;
  char local_140 [20];
  undefined1 *local_12c;
  long local_128;
  long local_124;
  int local_120;
  tagRECT local_11c;
  WCHAR *local_10c;
  undefined4 local_108;
  uint local_104;
  WCHAR local_100 [10];
  undefined1 *local_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined1 local_e0 [20];
  WNDCLASSA local_cc;
  void *local_a4 [2];
  uint local_9c;
  byte local_64 [100];
  
  puVar6 = &DAT_0104c7f0;
                    /* WinMain - confirmed as the true Win32 entry point's only call target (xref
                       from `entry`, Ghidra's auto-detected CRT startup), 2026-10-01.
                       
                       Does the game's full bootstrap in order: zero a large static block, load
                       stringdatabase.lhts, show first-run/safe-mode message boxes via
                       Config_GetOrCreateInt-backed settings ("Open Count", "Fullscreen", "Audio
                       Off"), parse a "safemode" command-line flag (forces 800x600 if present),
                       register the "The Movies" window class and create the window
                       (AdjustWindowRect/CreateWindowExA), init the 3D layer, then branch:
                         - if FUN_004ef580() is true: calls Game_MainLoop(param_3) directly
                         - else: tries LH_MasterGameLoop() first, falling back to
                       Game_MainLoop(param_3) if that returns false
                       
                       Game_MainLoop is the one and only callee that matters for the gameplay/UI
                       Tick
                       hierarchy traced via the debugger DLL this session - everything from
                       Game_TickOneFrame's screen-state switch down through
                       SimObjectQueue_TickPending
                       ultimately runs inside that call. LH_MasterGameLoop (not yet traced) looks
                       like
                       an alternate/legacy entry path - worth checking later whether it's dead code,
                       a different game mode, or an older build artifact.
                       
                       Param signature (HINSTANCE, undefined4, byte*) is short one argument vs a
                       textbook WinMain(hInstance, hPrevInstance, lpCmdLine, nCmdShow) - nCmdShow
                       may have been folded away by the optimizer since ShowWindow() here uses a
                       locally-computed value instead, not left unverified as a 4th argument. */
  for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_009b7b80();
  local_12c = &stack0xfffffe60;
  pcVar9 = &stack0xfffffe6c;
  uVar10 = 0;
  uVar11 = 0x14;
  FUN_004015d0(&stack0xfffffe60,"stringdatabase.lhts",0x13);
  iVar8 = FUN_009b4900();
  FUN_009b5cd0(iVar8,pcVar9,uVar10,uVar11);
  uVar5 = FUN_00542aa0();
  if ((char)uVar5 == '\0') {
LAB_00542e58:
    FUN_009b4640();
    return 0;
  }
  if (DAT_0105be04 != '\0') {
    local_16c = local_160;
    local_160[0] = L'\0';
    local_168 = 0;
    local_164 = 10;
    if (DAT_0105be08 == 0) {
      local_14c = (WCHAR *)local_140;
      local_140[0] = '\0';
      local_148 = 0;
      local_144 = 0x14;
      _strncpy((char *)local_14c,"SM_FIRST_TIME_LOW",0x11);
      ppWVar14 = &local_14c;
      ppvVar12 = local_a4;
      local_148 = 0x11;
      *(char *)((int)local_14c + 0x11) = '\0';
      puVar6 = FUN_009b5030(ppvVar12,ppWVar14);
      FUN_004036d0(&local_16c,(wchar_t *)*puVar6,puVar6[1]);
      if (10 < local_9c) {
                    /* WARNING: Subroutine does not return */
        _free(local_a4[0]);
      }
      if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
        _free(local_14c);
      }
    }
    if (DAT_0105be08 == 1) {
      local_14c = (WCHAR *)local_140;
      local_140[0] = '\0';
      local_148 = 0;
      local_144 = 0x20;
      local_14c = _malloc(0x20);
      _strncpy((char *)local_14c,"SM_FIRST_TIME_MEDIUM",0x14);
      local_148 = 0x14;
      *(char *)(local_14c + 10) = '\0';
      puVar6 = FUN_009b5030(local_a4,&local_14c);
      FUN_004036d0(&local_16c,(wchar_t *)*puVar6,puVar6[1]);
      if (10 < local_9c) {
                    /* WARNING: Subroutine does not return */
        _free(local_a4[0]);
      }
      if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
        _free(local_14c);
      }
    }
    if (DAT_0105be08 == 2) {
      local_14c = (WCHAR *)local_140;
      local_140[0] = '\0';
      local_148 = 0;
      local_144 = 0x14;
      _strncpy((char *)local_14c,"SM_FIRST_TIME_HIGH",0x12);
      ppWVar14 = &local_14c;
      ppvVar12 = local_a4;
      local_148 = 0x12;
      *(char *)(local_14c + 9) = '\0';
      puVar6 = FUN_009b5030(ppvVar12,ppWVar14);
      FUN_004036d0(&local_16c,(wchar_t *)*puVar6,puVar6[1]);
      if (10 < local_9c) {
                    /* WARNING: Subroutine does not return */
        _free(local_a4[0]);
      }
      if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
        _free(local_14c);
      }
    }
    local_14c = (WCHAR *)local_140;
    local_10c = local_100;
    local_100[0] = L'\0';
    local_108 = 0;
    local_104 = 10;
    local_140[0] = '\0';
    local_148 = 0;
    local_144 = 0x14;
    _strncpy((char *)local_14c,"THE_MOVIES_TM",0xd);
    ppWVar14 = &local_14c;
    ppvVar12 = local_a4;
    local_148 = 0xd;
    *(char *)((int)local_14c + 0xd) = '\0';
    puVar6 = FUN_009b5030(ppvVar12,ppWVar14);
    FUN_004036d0(&local_10c,(wchar_t *)*puVar6,puVar6[1]);
    if (10 < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4[0]);
    }
    if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
      _free(local_14c);
    }
    MessageBoxW((HWND)0x0,local_16c,local_10c,0x1000);
    if (10 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    if (10 < local_164) {
                    /* WARNING: Subroutine does not return */
      _free(local_16c);
    }
  }
  InitConfigRegistryPath();
  bVar1 = FUN_004ef5e0();
  if (!bVar1) {
    uVar5 = FUN_00a0f240();
    if ((char)uVar5 == '\0') goto LAB_00542e58;
  }
  FUN_00ad0479();
  FUN_00ad037e(0x800);
  Game_InitUserDataFolders();
  DAT_0105be88 = 1;
  FUN_00a10480();
  FUN_00542760();
  local_16c = local_160;
  local_160[0] = local_160[0] & 0xff00;
  local_168 = 0;
  local_164 = 0x14;
  _strncpy((char *)local_16c,"Open Count",10);
  lVar15 = 0;
  local_168 = 10;
  *(char *)(local_16c + 5) = '\0';
  Config_GetOrCreateInt(g_configRegistryPath,&local_16c,lVar15);
  if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
    _free(local_16c);
  }
  local_ec = local_e0;
  local_e0[0] = 0;
  local_e8 = 0;
  local_e4 = 0x14;
  sVar7 = _sprintf((char *)local_a4,(char *)&param_2_00d1b93c);
  FUN_004073f0(&local_ec,(char *)local_a4,sVar7);
  local_16c = local_160;
  local_160[0] = local_160[0] & 0xff00;
  local_168 = 0;
  local_164 = 0x14;
  _strncpy((char *)local_16c,"Open Count",10);
  ppuVar16 = &local_ec;
  local_168 = 10;
  *(char *)(local_16c + 5) = '\0';
  FUN_005417f0(g_configRegistryPath,&local_16c,ppuVar16);
  if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
    _free(local_16c);
  }
  FUN_0099cff0(&local_120,&local_124,&local_128);
  local_16c = local_160;
  local_160[0] = local_160[0] & 0xff00;
  local_168 = 0;
  local_164 = 0x14;
  _strncpy((char *)local_16c,"Fullscreen",10);
  local_168 = 10;
  uVar2 = 1;
  *(char *)(local_16c + 5) = '\0';
  uVar2 = FUN_00541de0(g_configRegistryPath,&local_16c,uVar2);
  local_12c = (undefined1 *)CONCAT31(local_12c._1_3_,uVar2);
  if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
    _free(local_16c);
  }
  local_16c = local_160;
  dwExStyle = 9;
  local_160[0] = local_160[0] & 0xff00;
  local_168 = 0;
  local_164 = 0x14;
  _strncpy((char *)local_16c,"Audio Off",9);
  local_168 = 9;
  bVar3 = 0;
  *(char *)((int)local_16c + 9) = '\0';
  bVar3 = FUN_00541e50(g_configRegistryPath,&local_16c,bVar3);
  if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
    _free(local_16c);
  }
  cVar4 = FUN_00567860(param_3,(byte *)"safemode",local_64,100);
  if (cVar4 != '\0') {
    local_124 = 800;
    local_128 = 600;
  }
  DAT_0105cc29 = bVar3;
  local_cc.hIcon = LoadIconA((HINSTANCE)param_1,&lpIconName_000003f3);
  local_cc.style = 0;
  local_cc.lpfnWndProc = (WNDPROC)&LAB_00542380;
  local_cc.cbClsExtra = 0;
  local_cc.cbWndExtra = 0;
  local_cc.hInstance = (HINSTANCE)param_1;
  local_cc.hCursor = LoadCursorA((HINSTANCE)0x0,&lpCursorName_00007f00);
  local_cc.hbrBackground = GetStockObject(0);
  local_cc.lpszMenuName = (LPCSTR)0x0;
  local_cc.lpszClassName = "The Movies";
  RegisterClassA(&local_cc);
  SetRect(&local_11c,0,0,local_124,local_128);
  if ((char)local_12c == '\0') {
    dwStyle = 0xca0000;
    dwExStyle = 0;
    iVar8 = 0xc;
    AdjustWindowRect(&local_11c,0xca0000,0);
  }
  else {
    dwStyle = 0x80000000;
    iVar8 = 0;
  }
  hWnd = CreateWindowExA(dwExStyle,"The Movies","The Movies",dwStyle,iVar8,iVar8,
                         local_11c.right - local_11c.left,local_11c.bottom - local_11c.top,(HWND)0x0
                         ,(HMENU)0x0,(HINSTANCE)param_1,(LPVOID)0x0);
  GetClientRect(hWnd,&local_11c);
  ShowWindow(hWnd,(uint)((char)local_12c != '\0') * 2 + 1);
  SetCursor((HCURSOR)0x0);
  uVar5 = FUN_009a6960();
  if ((char)uVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
    _exit(1);
  }
  FUN_00a0a6e0();
  FUN_00a10020();
  DAT_0105eb3a = 1;
  DAT_0105be88 = 1;
  bVar1 = false;
  uVar5 = FUN_009a3480(local_124,local_128,hWnd,(char)local_12c,local_120 == 1);
  if ((char)uVar5 == '\0') {
    ShowWindow(hWnd,7);
    FUN_009a67d0();
    local_16c = local_160;
    local_160[0] = local_160[0] & 0xff00;
    local_168 = 0;
    local_164 = 0x20;
    local_16c = _malloc(0x20);
    _strncpy((char *)local_16c,"ERROR_CANNOTSTART_3D",0x14);
    local_168 = 0x14;
    *(char *)(local_16c + 10) = '\0';
    FUN_009b5030(&local_14c,&local_16c);
    if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
      _free(local_16c);
    }
    local_16c = local_160;
    local_160[0] = local_160[0] & 0xff00;
    local_168 = 0;
    local_164 = 0x14;
    _strncpy((char *)local_16c,"ERROR_TITLE",0xb);
    ppWVar14 = &local_16c;
    ppWVar13 = &local_10c;
    local_168 = 0xb;
    *(char *)((int)local_16c + 0xb) = '\0';
    FUN_009b5030(ppWVar13,ppWVar14);
    if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
      _free(local_16c);
    }
    MessageBoxW((HWND)0x0,local_14c,local_10c,0x11010);
    if (10 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c);
    }
    if (10 < local_144) {
                    /* WARNING: Subroutine does not return */
      _free(local_14c);
    }
  }
  else {
    bVar1 = true;
  }
  DAT_0105cc5c = DAT_00e52b08;
  hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  hHandle = FUN_00acfa09((LPSECURITY_ATTRIBUTES)0x0,0,0x542330,hEvent,0,(LPDWORD)0x0);
  if (!bVar1) goto LAB_0054339a;
  FUN_00a0a1a0(hWnd);
  FUN_0082d0e0();
  FUN_009b2de0();
  bVar1 = ShouldSkipFrontEnd();
  if (bVar1) {
LAB_00543380:
    Game_MainLoop(param_3);
  }
  else {
    uVar10 = LH_MasterGameLoop();
    if ((char)uVar10 == '\0') goto LAB_00543380;
  }
  FUN_009b27d0();
  FUN_00a09770();
LAB_0054339a:
  FUN_009b4640();
  FUN_009a3ba0();
  FUN_00a0ef90();
  SetEvent(hEvent);
  WaitForSingleObject(hHandle,2000);
  CloseHandle(hHandle);
  FUN_009b3730();
  ShutdownConfigRegistryPath();
  if (DAT_00e52b10 != (HANDLE)0xffffffff) {
    CloseHandle(DAT_00e52b10);
  }
  if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
  return 1;
}


//// FUNCTION FUN_00543420 @ 00543420 ////

void FUN_00543420(void)

{
  FUN_009cc160((char *)0x0);
  return;
}


//// FUNCTION FUN_00543440 @ 00543440 ////

void FUN_00543440(void)

{
  FUN_009cae10();
  DAT_0105f8cc = 1;
  FUN_009cba50();
  return;
}


//// FUNCTION CVarSystem_Register_STUBBED @ 005434a0 ////

void CVarSystem_Register_STUBBED(void)

{
                    /* STUBBED IN RETAIL — single RET instruction, no body. ~58+ call sites across
                       the binary register named console VARIABLES through here (cam_allowfreecam,
                       dbg_money, gnd_showterrain, sitt_tutorial, sbx_instantbuild, etc.) but none
                       take effect since this does nothing. Sibling stubs: FUN_005434b0 (registers
                       COMMANDS instead of variables, ~52+ call sites), FUN_005434c0 (a third
                       sibling, same pattern). Together these three functions gate 100+ disabled
                       debug commands/cvars spanning nearly every game subsystem (camera, sandbox
                       cheats, achievements, terrain, tutorial UI, easter eggs, etc.) — see
                       Camera_RegisterDebugStates (0x0041c240) and Camera_StateMachine_Transition
                       (0x0041a610) for one fully-implemented example (FREECAM/DEBUG camera modes)
                       that this silently disables. No in-game console UI (text input overlay,
                       toggle key, or command-line flag) was found anywhere in this binary — the
                       entire dev console appears to have been compiled out of this retail build via
                       a source-level build flag, not just this registration step. */
  return;
}


//// FUNCTION FUN_005434b0 @ 005434b0 ////

void FUN_005434b0(void)

{
                    /* STUBBED IN RETAIL — single RET, sibling of CVarSystem_Register_STUBBED
                       (0x005434a0). ~52+ call sites register named console COMMANDS (actions, no
                       value) through here — cam_store/cam_recall/cam_reload,
                       quit/save/load/version/deb_reload, the 7 ee_* easter eggs, and most of the
                       ass_*/awd_*/sitt_* families. All inert. */
  return;
}


//// FUNCTION FUN_005434c0 @ 005434c0 ////

void FUN_005434c0(void)

{
                    /* STUBBED IN RETAIL — single RET, third sibling in this registration family
                       (see 0x005434a0 for the full writeup). Confirmed used for ass_build /
                       ass_buildabit; likely a third registration variant (e.g. a different value
                       type). */
  return;
}


//// FUNCTION FUN_005434e0 @ 005434e0 ////

void FUN_005434e0(void)

{
  return;
}


//// FUNCTION FUN_00543500 @ 00543500 ////

void FUN_00543500(void)

{
  FUN_00549e40();
  if (DAT_0104c8f4 != (undefined4 *)0x0) {
    (**(code **)*DAT_0104c8f4)(1);
  }
  DAT_0104c8f4 = (undefined4 *)0x0;
  return;
}


//// FUNCTION FUN_00543830 @ 00543830 ////

void __cdecl FUN_00543830(int *param_1)

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


//// FUNCTION FUN_00543890 @ 00543890 ////

void __cdecl FUN_00543890(int *param_1)

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


//// FUNCTION FUN_00543960 @ 00543960 ////

void __thiscall FUN_00543960(void *this,int param_1)

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


//// FUNCTION FUN_005439c0 @ 005439c0 ////

void __cdecl FUN_005439c0(int param_1)

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


//// FUNCTION FUN_005439e0 @ 005439e0 ////

void __cdecl FUN_005439e0(int *param_1)

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


//// FUNCTION FUN_00543a00 @ 00543a00 ////

void __thiscall FUN_00543a00(void *this,int *param_1)

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


//// FUNCTION FUN_00543a70 @ 00543a70 ////

void __thiscall FUN_00543a70(void *this,int param_1)

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


//// FUNCTION FUN_00543ad0 @ 00543ad0 ////

void __cdecl FUN_00543ad0(int param_1)

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


//// FUNCTION FUN_00543af0 @ 00543af0 ////

void __thiscall FUN_00543af0(void *this,int *param_1)

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


//// FUNCTION FUN_00543b60 @ 00543b60 ////

void __thiscall FUN_00543b60(void *this,int param_1)

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


//// FUNCTION FUN_00543bc0 @ 00543bc0 ////

void __cdecl FUN_00543bc0(int param_1)

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


//// FUNCTION FUN_00543be0 @ 00543be0 ////

void __thiscall FUN_00543be0(void *this,int *param_1)

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


//// FUNCTION FUN_00543c50 @ 00543c50 ////

void __thiscall FUN_00543c50(void *this,int param_1)

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


//// FUNCTION FUN_00543cb0 @ 00543cb0 ////

void __cdecl FUN_00543cb0(int param_1)

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


//// FUNCTION FUN_00543cd0 @ 00543cd0 ////

void __cdecl FUN_00543cd0(int *param_1)

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


//// FUNCTION FUN_00543cf0 @ 00543cf0 ////

void __thiscall FUN_00543cf0(void *this,int *param_1)

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


//// FUNCTION FUN_00543db0 @ 00543db0 ////

void __fastcall FUN_00543db0(int *param_1)

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


//// FUNCTION FUN_00543e10 @ 00543e10 ////

void __fastcall FUN_00543e10(int *param_1)

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


//// FUNCTION FUN_00544030 @ 00544030 ////

undefined4 __fastcall FUN_00544030(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((*(byte *)(param_1 + 0x4c0) & 1) == 0) || (*(int *)(param_1 + 0x4c4) != 0x3f800000)) {
    uVar1 = 0;
  }
  return uVar1;
}


//// FUNCTION FUN_005441b0 @ 005441b0 ////

void __fastcall FUN_005441b0(int *param_1)

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


//// FUNCTION FUN_00544210 @ 00544210 ////

void __fastcall FUN_00544210(int *param_1)

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


//// FUNCTION FUN_005443c0 @ 005443c0 ////

int * __fastcall FUN_005443c0(int *param_1)

{
  FUN_00543db0(param_1);
  return param_1;
}


//// FUNCTION FUN_005443d0 @ 005443d0 ////

int * __fastcall FUN_005443d0(int *param_1)

{
  FUN_00543e10(param_1);
  return param_1;
}


//// FUNCTION FUN_00544420 @ 00544420 ////

void __thiscall FUN_00544420(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  FUN_004036d0((void *)(*(int *)((int)this + 0x4bc) * 0x20 + 0xb8 + (int)this),(wchar_t *)*param_1,
               param_1[1]);
  uVar1 = *(int *)((int)this + 0x4bc) + 1U & 0x8000001f;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffffffe0) + 1;
  }
  *(uint *)((int)this + 0x4bc) = uVar1;
  *(uint *)((int)this + 0x4b8) = uVar1;
  return;
}


//// FUNCTION FUN_00544470 @ 00544470 ////

void __fastcall FUN_00544470(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  void *_Memory_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caf6d2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d23cac;
  _Memory = (int *)param_1[0x1d];
  local_4 = 5;
  if (_Memory != (int *)0x0) {
    iVar1 = _Memory[1];
    _Memory[1] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_009a7db0(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    param_1[0x1d] = 0;
  }
  if (param_1[0x133] != 0) {
    _Memory_00 = *(void **)(param_1[0x133] + 4);
    if (_Memory_00 != (void *)0x0) {
      FUN_00990ec0((int)_Memory_00);
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x133]);
  }
  if (0x14 < (uint)param_1[0x136]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x134]);
  }
  local_4 = 3;
  _eh_vector_destructor_iterator_(param_1 + 0x2e,0x20,0x20,FUN_00403650);
  if (10 < (uint)param_1[0x28]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x26]);
  }
  if (10 < (uint)param_1[0x20]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1e]);
  }
  if (0x14 < (uint)param_1[0x11]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf]);
  }
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00544630 @ 00544630 ////

int * __fastcall FUN_00544630(int *param_1)

{
  FUN_005441b0(param_1);
  return param_1;
}


//// FUNCTION FUN_00544640 @ 00544640 ////

int * __fastcall FUN_00544640(int *param_1)

{
  FUN_00544210(param_1);
  return param_1;
}


//// FUNCTION FUN_00544650 @ 00544650 ////

undefined4 * __thiscall FUN_00544650(void *this,undefined4 *param_1)

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
LAB_00544694:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00544699;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00544694;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00544699:
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


//// FUNCTION FUN_005446c0 @ 005446c0 ////

undefined4 * __thiscall FUN_005446c0(void *this,undefined4 *param_1)

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
LAB_00544704:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00544709;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00544704;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00544709:
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


//// FUNCTION FUN_00544730 @ 00544730 ////

undefined4 * __thiscall FUN_00544730(void *this,undefined4 *param_1)

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
LAB_00544774:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00544779;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00544774;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00544779:
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


//// FUNCTION FUN_005447c0 @ 005447c0 ////

void FUN_005447c0(void)

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


//// FUNCTION FUN_00544810 @ 00544810 ////

void FUN_00544810(void)

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


//// FUNCTION FUN_00544860 @ 00544860 ////

void FUN_00544860(void)

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


//// FUNCTION FUN_005448b0 @ 005448b0 ////

void FUN_005448b0(void)

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


//// FUNCTION FUN_00544900 @ 00544900 ////

int * __fastcall FUN_00544900(int *param_1)

{
  FUN_00543db0(param_1);
  return param_1;
}


//// FUNCTION FUN_00544910 @ 00544910 ////

int * __fastcall FUN_00544910(int *param_1)

{
  FUN_00543e10(param_1);
  return param_1;
}


//// FUNCTION FUN_00544920 @ 00544920 ////

void __fastcall FUN_00544920(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00544940 @ 00544940 ////

void __fastcall FUN_00544940(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00544960 @ 00544960 ////

void __fastcall FUN_00544960(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00544980 @ 00544980 ////

void __fastcall FUN_00544980(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00544a00 @ 00544a00 ////

undefined4 * __thiscall FUN_00544a00(void *this,byte param_1)

{
  FUN_00544470(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00544a20 @ 00544a20 ////

void __thiscall FUN_00544a20(void *this,undefined4 *param_1)

{
  void *this_00;
  size_t sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  void *local_20 [2];
  uint local_18;
  
  this_00 = (void *)((int)this + 0x78);
  FUN_0040cae0(this_00,(wchar_t *)*param_1,param_1[1]);
  sVar1 = FUN_00ace02d((short *)&DAT_00d1966c);
  FUN_0040cae0(this_00,L"\n",sVar1);
  iVar4 = *(int *)((int)this + 0x7c);
  iVar6 = 0;
  if (0x20 < iVar4) {
    iVar2 = FUN_00ace02d((short *)&DAT_00d1966c);
    uVar3 = FUN_00420300(this_00,(short *)&DAT_00d1966c,iVar4 - 1,iVar2);
    if (uVar3 != 0xffffffff) {
      while (iVar6 = iVar6 + 1, iVar6 < 0x20) {
        iVar4 = FUN_00ace02d((short *)&DAT_00d1966c);
        uVar3 = FUN_00420300(this_00,(short *)&DAT_00d1966c,uVar3 - 1,iVar4);
        if (uVar3 == 0xffffffff) {
          return;
        }
      }
      puVar5 = FUN_004211c0(this_00,local_20,uVar3,0xffffffff);
      FUN_004036d0(this_00,(wchar_t *)*puVar5,puVar5[1]);
      if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00544b00 @ 00544b00 ////

int * __fastcall FUN_00544b00(int *param_1)

{
  FUN_005441b0(param_1);
  return param_1;
}


//// FUNCTION FUN_00544b10 @ 00544b10 ////

int * __fastcall FUN_00544b10(int *param_1)

{
  FUN_00544210(param_1);
  return param_1;
}


//// FUNCTION FUN_00544b80 @ 00544b80 ////

void __fastcall FUN_00544b80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005447c0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00544bc0 @ 00544bc0 ////

void __fastcall FUN_00544bc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00544810();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00544c00 @ 00544c00 ////

void __fastcall FUN_00544c00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00544860();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00544c40 @ 00544c40 ////

void __fastcall FUN_00544c40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005448b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00544d00 @ 00544d00 ////

void * __thiscall FUN_00544d00(void *this,byte param_1)

{
  FUN_00544920((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00544d20 @ 00544d20 ////

void * __thiscall FUN_00544d20(void *this,byte param_1)

{
  FUN_00544940((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00544d40 @ 00544d40 ////

void * __thiscall FUN_00544d40(void *this,byte param_1)

{
  FUN_00544960((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00544d60 @ 00544d60 ////

void * __thiscall FUN_00544d60(void *this,byte param_1)

{
  FUN_00544980((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00544d80 @ 00544d80 ////

void __thiscall FUN_00544d80(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_005145d0(this,param_2);
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


//// FUNCTION FUN_00544e40 @ 00544e40 ////

void __thiscall FUN_00544e40(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_005446c0(this,param_2);
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


//// FUNCTION FUN_00544ea0 @ 00544ea0 ////

void __thiscall FUN_00544ea0(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00544730(this,param_2);
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


//// FUNCTION FUN_00544f00 @ 00544f00 ////

int __fastcall FUN_00544f00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005447c0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00544f30 @ 00544f30 ////

int __fastcall FUN_00544f30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00544810();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00544f60 @ 00544f60 ////

int __fastcall FUN_00544f60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00544860();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00544f90 @ 00544f90 ////

int __fastcall FUN_00544f90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005448b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00545000 @ 00545000 ////

bool __cdecl FUN_00545000(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_005145d0(&DAT_0104c8f8,param_1);
  puVar1 = DAT_0104c8fc;
  if (puVar2 != DAT_0104c8fc) {
    uVar3 = FUN_00441060(param_1,puVar2 + 3);
    if ((char)uVar3 == '\0') {
      return puVar2 != puVar1;
    }
  }
  return false;
}


//// FUNCTION FUN_005450b0 @ 005450b0 ////

void FUN_005450b0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_005450b0(*(void **)((int)param_1 + 8));
    FUN_00544920((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_005450f0 @ 005450f0 ////

void FUN_005450f0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_005450f0(*(void **)((int)param_1 + 8));
    FUN_00544940((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00545130 @ 00545130 ////

void FUN_00545130(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00545130(*(void **)((int)param_1 + 8));
    FUN_00544960((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00545170 @ 00545170 ////

void FUN_00545170(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00545170(*(void **)((int)param_1 + 8));
    FUN_00544980((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_005451b0 @ 005451b0 ////

void __thiscall FUN_005451b0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00caf6e8;
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
  FUN_00543db0((int *)&param_2);
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
      goto LAB_00545321;
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
      piVar2 = (int *)FUN_005439e0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_005439c0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00545321:
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
            FUN_00543960(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00543a00(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00543960(this,(int)piVar5);
              break;
            }
LAB_005453e4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00543a00(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_005453e4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00543960(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00543a00(this,piVar5);
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


//// FUNCTION FUN_00545480 @ 00545480 ////

void __fastcall FUN_00545480(int param_1)

{
  FUN_005450b0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_005454b0 @ 005454b0 ////

void __thiscall FUN_005454b0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00caf708;
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
  FUN_005441b0((int *)&param_2);
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
      goto LAB_00545621;
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
      piVar2 = (int *)FUN_00543830(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00543ad0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00545621:
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
            FUN_00543a70(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00543af0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00543a70(this,(int)piVar5);
              break;
            }
LAB_005456e4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00543af0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_005456e4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00543a70(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00543af0(this,piVar5);
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


//// FUNCTION FUN_00545780 @ 00545780 ////

void __fastcall FUN_00545780(int param_1)

{
  FUN_005450f0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_005457b0 @ 005457b0 ////

void __thiscall FUN_005457b0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00caf728;
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
  FUN_00544210((int *)&param_2);
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
      goto LAB_00545921;
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
      piVar2 = (int *)FUN_00543890(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00543bc0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00545921:
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
            FUN_00543b60(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00543be0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00543b60(this,(int)piVar5);
              break;
            }
LAB_005459e4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00543be0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_005459e4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00543b60(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00543be0(this,piVar5);
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


//// FUNCTION FUN_00545a80 @ 00545a80 ////

void __fastcall FUN_00545a80(int param_1)

{
  FUN_00545130(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00545ab0 @ 00545ab0 ////

void __thiscall FUN_00545ab0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00caf748;
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
  FUN_00543e10((int *)&param_2);
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
      goto LAB_00545c21;
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
      piVar2 = (int *)FUN_00543cd0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00543cb0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00545c21:
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
            FUN_00543c50(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00543cf0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00543c50(this,(int)piVar5);
              break;
            }
LAB_00545ce4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00543cf0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00545ce4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00543c50(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00543cf0(this,piVar5);
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


//// FUNCTION FUN_00545d80 @ 00545d80 ////

void __fastcall FUN_00545d80(int param_1)

{
  FUN_00545170(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00545db0 @ 00545db0 ////

void __thiscall FUN_00545db0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_005450b0((void *)piVar6[1]);
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
    FUN_005451b0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00545e70 @ 00545e70 ////

void __thiscall FUN_00545e70(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_005450f0((void *)piVar6[1]);
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
    FUN_005454b0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00545f30 @ 00545f30 ////

void __thiscall FUN_00545f30(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00545130((void *)piVar6[1]);
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
    FUN_005457b0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00545ff0 @ 00545ff0 ////

void __thiscall FUN_00545ff0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00545170((void *)piVar6[1]);
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
    FUN_00545ab0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00546230 @ 00546230 ////

void __fastcall FUN_00546230(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00545db0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00546260 @ 00546260 ////

void __fastcall FUN_00546260(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00545e70(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00546290 @ 00546290 ////

void __fastcall FUN_00546290(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00545f30(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_005462c0 @ 005462c0 ////

void __fastcall FUN_005462c0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00545ff0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_005462f0 @ 005462f0 ////

float10 __cdecl FUN_005462f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  float *pfVar4;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_8 = FUN_00544650(&DAT_0104c904,param_1);
  puVar1 = DAT_0104c908;
  if (local_8 != DAT_0104c908) {
    uVar2 = FUN_00441060(param_1,local_8 + 3);
    if ((char)uVar2 == '\0') {
      ppuVar3 = &local_8;
      goto LAB_00546333;
    }
  }
  local_4 = puVar1;
  ppuVar3 = &local_4;
LAB_00546333:
  if (*ppuVar3 != puVar1) {
    return (float10)*(float *)(*ppuVar3)[0xb];
  }
  pfVar4 = (float *)FUN_00515d20(&DAT_0104c8f8,param_1);
  return (float10)*pfVar4;
}


//// FUNCTION FUN_00546360 @ 00546360 ////

int __fastcall FUN_00546360(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005447c0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00546390 @ 00546390 ////

int __fastcall FUN_00546390(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00544810();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005463c0 @ 005463c0 ////

int __fastcall FUN_005463c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00544860();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005463f0 @ 005463f0 ////

int __fastcall FUN_005463f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005448b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00546420 @ 00546420 ////

void __thiscall FUN_00546420(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  float10 fVar3;
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
  puStack_8 = &LAB_00caf77b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = FUN_00545000(param_1);
  if (bVar1) {
    fVar3 = FUN_005462f0(param_1);
    FUN_00569c30(local_8c,(float)fVar3);
    local_4 = 0;
    puVar2 = FUN_004312e0(local_2c,param_1," = ");
    puVar2 = FUN_0047aee0(local_4c,puVar2,local_8c);
    local_4 = CONCAT31(local_4._1_3_,2);
    puVar2 = FUN_00568790(local_6c,puVar2);
    FUN_00544a20(this,puVar2);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_2c[0] = local_8c[0];
    if (local_84 < 0x15) {
      ExceptionList = local_c;
      return;
    }
  }
  else {
    puVar2 = FUN_00568790(local_2c,param_1);
    FUN_00544a20(this,puVar2);
    if (local_24 < 0xb) {
      ExceptionList = local_c;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c[0]);
}


//// FUNCTION FUN_00546550 @ 00546550 ////

void __thiscall FUN_00546550(void *this,undefined4 *param_1,int *param_2)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  wchar_t *_Source;
  bool bVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  size_t sVar10;
  bool bVar11;
  byte *pbVar12;
  bool bVar13;
  int *local_c4;
  uint local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  char *local_b4;
  uint local_b0;
  uint local_ac;
  char local_a8 [20];
  char *local_94;
  uint local_90;
  uint local_8c;
  char local_88 [20];
  char *local_74;
  uint local_70;
  uint local_6c;
  char local_68 [20];
  uint local_54;
  void *local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caf7ae;
  local_c = ExceptionList;
  local_b4 = local_a8;
  bVar11 = false;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x14;
  local_74 = local_68;
  local_68[0] = '\0';
  local_70 = 0;
  local_6c = 0x14;
  local_94 = local_88;
  local_88[0] = '\0';
  local_90 = 0;
  local_8c = 0x14;
  local_54 = param_1[1];
  local_c4 = (int *)*DAT_0104c914;
  local_b8 = (undefined4 *)*DAT_0104c8fc;
  local_bc = (undefined4 *)*DAT_0104c920;
  ExceptionList = &local_c;
  param_2[1] = 0;
  local_4 = 2;
  local_c0 = 0;
  bVar4 = true;
  *(undefined2 *)*param_2 = 0;
  local_50 = this;
  do {
    uVar3 = local_54;
    if (local_b8 == DAT_0104c8fc) {
      if (local_c4 == DAT_0104c914) {
        if (local_bc == DAT_0104c920) {
          if (local_c0 == 1) {
            puVar5 = FUN_00568790(local_4c,&local_b4);
            uVar3 = puVar5[1];
            _Source = (wchar_t *)*puVar5;
            if ((uint)param_2[2] <= uVar3) {
              if (10 < (uint)param_2[2]) {
                    /* WARNING: Subroutine does not return */
                _free((void *)*param_2);
              }
              uVar8 = uVar3 + 0x20 >> 5;
              param_2[2] = uVar8 << 5;
              pvVar9 = _malloc(uVar8 * 0x40);
              *param_2 = (int)pvVar9;
            }
            _wcsncpy((wchar_t *)*param_2,_Source,uVar3);
            param_2[1] = uVar3;
            *(undefined2 *)(*param_2 + uVar3 * 2) = 0;
            if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c[0]);
            }
            if (bVar4) {
              sVar10 = FUN_00ace02d((short *)&DAT_00d23cc0);
              FUN_0040cae0(param_2,L" = ",sVar10);
            }
            else {
              sVar10 = FUN_00ace02d((short *)&DAT_00d184c4);
              FUN_0040cae0(param_2,L" ",sVar10);
            }
          }
          else if (1 < local_c0) {
            FUN_00546420(local_50,&local_b4);
            puVar5 = FUN_00568790(local_4c,&local_74);
            FUN_004036d0(param_2,(wchar_t *)*puVar5,puVar5[1]);
            if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c[0]);
            }
          }
          if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
            _free(local_94);
          }
          if (local_6c < 0x15) {
            if (local_ac < 0x15) {
              ExceptionList = local_c;
              return;
            }
                    /* WARNING: Subroutine does not return */
            _free(local_b4);
          }
                    /* WARNING: Subroutine does not return */
          _free(local_74);
        }
        FUN_004015d0(&local_94,(char *)local_bc[3],local_bc[4]);
        FUN_00544210((int *)&local_bc);
      }
      else {
        uVar8 = local_c4[4];
        pcVar2 = (char *)local_c4[3];
        if (local_8c <= uVar8) {
          if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
            _free(local_94);
          }
          local_8c = uVar8 + 0x20 & 0xffffffe0;
          local_94 = _malloc(local_8c);
        }
        _strncpy(local_94,pcVar2,uVar8);
        local_94[uVar8] = '\0';
        local_90 = uVar8;
        FUN_005441b0((int *)&local_c4);
      }
    }
    else {
      uVar8 = local_b8[4];
      pcVar2 = (char *)local_b8[3];
      if (local_8c <= uVar8) {
        if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
          _free(local_94);
        }
        local_8c = uVar8 + 0x20 & 0xffffffe0;
        local_94 = _malloc(local_8c);
      }
      _strncpy(local_94,pcVar2,uVar8);
      local_94[uVar8] = '\0';
      local_90 = uVar8;
      FUN_004dea90((int *)&local_b8);
    }
    if (uVar3 == 0) {
LAB_00546795:
      bVar13 = true;
    }
    else {
      if (uVar3 <= local_90) {
        puVar5 = FUN_00430770(&local_94,local_2c,0,uVar3);
        pbVar6 = (byte *)*puVar5;
        bVar11 = true;
        pbVar12 = (byte *)*param_1;
        do {
          bVar1 = *pbVar6;
          bVar13 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_00546788:
            iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_0054678d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar13 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_00546788;
          pbVar6 = pbVar6 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_0054678d:
        if (iVar7 == 0) goto LAB_00546795;
      }
      bVar13 = false;
    }
    uVar3 = local_90;
    pcVar2 = local_94;
    if ((bVar11) && (bVar11 = false, 0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (bVar13) {
      if (local_c0 == 0) {
        if (local_ac <= local_90) {
          if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
            _free(local_b4);
          }
          local_ac = local_90 + 0x20 & 0xffffffe0;
          local_b4 = _malloc(local_ac);
        }
        _strncpy(local_b4,pcVar2,uVar3);
        pcVar2 = local_b4;
        local_b0 = uVar3;
        local_b4[uVar3] = '\0';
        if (local_6c <= uVar3) {
          if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
            _free(local_74);
          }
          local_6c = uVar3 + 0x20 & 0xffffffe0;
          local_74 = _malloc(local_6c);
        }
        _strncpy(local_74,pcVar2,uVar3);
        local_70 = uVar3;
        local_74[uVar3] = '\0';
      }
      else {
        FUN_00546420(local_50,&local_b4);
        uVar3 = local_90;
        pcVar2 = local_94;
        if (local_ac <= local_90) {
          if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
            _free(local_b4);
          }
          local_ac = local_90 + 0x20 & 0xffffffe0;
          local_b4 = _malloc(local_ac);
        }
        _strncpy(local_b4,pcVar2,uVar3);
        local_b0 = uVar3;
        local_b4[uVar3] = '\0';
        uVar8 = 0;
        if (local_70 != 0) {
          do {
            if ((uVar3 <= uVar8) ||
               ((local_b4 + uVar8)[(int)local_74 - (int)local_b4] != local_b4[uVar8])) {
              puVar5 = FUN_00430770(&local_74,local_4c,0,uVar8);
              uVar3 = puVar5[1];
              pcVar2 = (char *)*puVar5;
              if (local_6c <= uVar3) {
                if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
                  _free(local_74);
                }
                local_6c = uVar3 + 0x20 & 0xffffffe0;
                local_74 = _malloc(local_6c);
              }
              _strncpy(local_74,pcVar2,uVar3);
              local_74[uVar3] = '\0';
              local_70 = uVar3;
              if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
                _free(local_4c[0]);
              }
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_70);
        }
      }
      if (local_c4 != (int *)*DAT_0104c914) {
        bVar4 = false;
      }
      local_c0 = local_c0 + 1;
    }
  } while( true );
}


//// FUNCTION FUN_00546b74 @ 00546b74 ////

/* WARNING: Variable defined which should be unmapped: param_3 */
/* WARNING: Removing unreachable block (ram,0x00546ef4) */

void __thiscall
FUN_00546b74(void *this,int param_1,undefined2 *param_2,uint param_3,uint param_4,undefined2 param_5
            )

{
  code *pcVar1;
  bool bVar2;
  char *in_EAX;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uVar7;
  uint unaff_EBX;
  bool in_ZF;
  undefined1 *puStack00000028;
  uint uStack00000030;
  char cStack00000034;
  char *pcStack00000048;
  uint uStack00000050;
  char cStack00000054;
  char *in_stack_00000068;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  void *in_stack_00000088;
  uint in_stack_00000090;
  void *in_stack_000000a8;
  
  if (!in_ZF) {
    puVar3 = FUN_005686a0(&param_2,in_EAX);
    FUN_004036d0((void *)((int)this + 0x98),(wchar_t *)*puVar3,puVar3[1]);
    if (10 < param_4) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
  }
  if (*(uint *)((int)this + 0x9c) == unaff_EBX) {
    ExceptionList = in_stack_000000a8;
    return;
  }
  puVar3 = (undefined4 *)((int)this + 0x98);
  if (**(short **)((int)this + 0x98) == 0x23) {
    ExceptionList = in_stack_000000a8;
    return;
  }
  if (**(short **)((int)this + 0x98) == 0x3b) {
    ExceptionList = in_stack_000000a8;
    return;
  }
  FUN_00568870(&stack0x00000068,puVar3);
  FUN_0056a140(&stack0x00000068);
  pcStack00000048 = &stack0x00000054;
  cStack00000034 = (char)unaff_EBX;
  uStack00000050 = 0x14;
  puStack00000028 = &stack0x00000034;
  uStack00000030 = 0x14;
  cStack00000054 = cStack00000034;
  uVar4 = FUN_00448220(&stack0x00000068,&DAT_00d23ccc,unaff_EBX,3);
  if (uVar4 == 0xffffffff) {
    FUN_004015d0(&stack0x00000048,in_stack_00000068,in_stack_0000006c);
  }
  else {
    puVar5 = FUN_00430770(&stack0x00000068,&param_2,unaff_EBX,uVar4);
    FUN_004015d0(&stack0x00000048,(char *)*puVar5,puVar5[1]);
    if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    puVar5 = FUN_00430770(&stack0x00000068,&param_2,uVar4,0xffffffff);
    FUN_004015d0(&stack0x00000028,(char *)*puVar5,puVar5[1]);
    if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    FUN_004015d0((void *)((int)this + 0x4d0),pcStack00000048,unaff_EBX);
    FUN_0056a140(&stack0x00000028);
  }
  FUN_00544e40(&DAT_0104c910,&param_1,&stack0x00000048);
  uVar7 = (undefined2)unaff_EBX;
  if (param_1 == DAT_0104c914) {
    FUN_00544ea0(&DAT_0104c91c,&param_1,&stack0x00000048);
    if (param_1 != DAT_0104c920) {
      *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x2c);
      FUN_00401e30((void *)((int)this + 0x3c),&stack0x00000028);
      puVar5 = FUN_00568790(&param_2,&stack0x00000068);
      FUN_00544a20(this,puVar5);
      if (10 < param_4) {
                    /* WARNING: Subroutine does not return */
        _free(param_2);
      }
LAB_00546e07:
      FUN_00544420(this,puVar3);
      *(uint *)((int)this + 0x9c) = unaff_EBX;
      *(undefined2 *)*puVar3 = uVar7;
      goto LAB_00546f1f;
    }
    iVar6 = FUN_004307c0(&stack0x00000028,"=",0xffffffff);
    if (iVar6 == -1) {
      bVar2 = FUN_00545000(&stack0x00000048);
      if (bVar2) {
        FUN_00546420(this,&stack0x00000048);
        goto LAB_00546e07;
      }
      puVar5 = FUN_00568790(&param_2,&stack0x00000068);
      FUN_00544a20(this,puVar5);
      if (10 < param_4) {
                    /* WARNING: Subroutine does not return */
        _free(param_2);
      }
      param_2 = &param_5;
      param_4 = 10;
      param_3 = unaff_EBX;
      param_5 = uVar7;
      uVar4 = FUN_00ace02d((short *)&DAT_00d23cc8);
      FUN_004036d0(&param_2,L"?",uVar4);
      FUN_00544a20(this,&param_2);
      if (10 < param_4) {
                    /* WARNING: Subroutine does not return */
        _free(param_2);
      }
    }
    else {
      puVar5 = FUN_00430770(&stack0x00000028,&stack0x00000088,iVar6 + 1,0xffffffff);
      FUN_00401e30(&stack0x00000028,puVar5);
      if (0x14 < in_stack_00000090) {
                    /* WARNING: Subroutine does not return */
        _free(in_stack_00000088);
      }
      FUN_0056a1d0((int *)&stack0x00000028);
      FUN_00546420(this,&stack0x00000048);
      FUN_00544420(this,puVar3);
    }
  }
  else {
    pcVar1 = *(code **)(param_1 + 0x2c);
    puVar5 = FUN_00568790(&param_2,&stack0x00000068);
    FUN_00544a20(this,puVar5);
    if (10 < param_4) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    (*pcVar1)(&stack0x00000028);
    FUN_00544420(this,puVar3);
  }
  *(uint *)((int)this + 0x9c) = unaff_EBX;
  *(undefined2 *)*puVar3 = uVar7;
LAB_00546f1f:
  if (0x14 < uStack00000030) {
                    /* WARNING: Subroutine does not return */
    _free(puStack00000028);
  }
  if (uStack00000050 < 0x15) {
    if (in_stack_00000070 < 0x15) {
      ExceptionList = in_stack_000000a8;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000068);
  }
                    /* WARNING: Subroutine does not return */
  _free(pcStack00000048);
}


//// FUNCTION FUN_00546f80 @ 00546f80 ////

undefined4 * __fastcall FUN_00546f80(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  void *this;
  int *this_00;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar7;
  float local_54;
  float local_50;
  ushort *local_4c;
  undefined4 local_48;
  uint local_44;
  ushort local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf860;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d23cac;
  param_1[0xf] = param_1 + 0x12;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x14;
  *(undefined1 *)(param_1 + 0x19) = 0xff;
  *(undefined1 *)((int)param_1 + 0x65) = 0xff;
  *(undefined1 *)((int)param_1 + 0x66) = 0xff;
  *(undefined1 *)((int)param_1 + 0x67) = 0xff;
  param_1[0x19] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x69) = 0xff;
  *(undefined1 *)((int)param_1 + 0x6a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x6b) = 0xff;
  param_1[0x1a] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1b) = 0xff;
  *(undefined1 *)((int)param_1 + 0x6d) = 0xff;
  *(undefined1 *)((int)param_1 + 0x6e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x6f) = 0xff;
  param_1[0x1b] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1c) = 0xff;
  *(undefined1 *)((int)param_1 + 0x71) = 0xff;
  *(undefined1 *)((int)param_1 + 0x72) = 0xff;
  *(undefined1 *)((int)param_1 + 0x73) = 0xff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1e] = param_1 + 0x21;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 10;
  param_1[0x26] = param_1 + 0x29;
  *(undefined2 *)(param_1 + 0x29) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 10;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x2e,0x20,0x20,FUN_00403e50,FUN_00403650);
  param_1[0x131] = 0;
  param_1[0x134] = param_1 + 0x137;
  *(undefined1 *)(param_1 + 0x137) = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0x14;
  local_4._0_1_ = 5;
  param_1[0xe] = 0;
  param_1[0x130] = param_1[0x130] & 0xfffffffc;
  FUN_004015d0(param_1 + 0x134,"",0);
  param_1[0x131] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x17] = 0x40800000;
  param_1[0x18] = 0x40800000;
  param_1[0x19] = 0xc8000000;
  param_1[0x1a] = 0xff008000;
  param_1[0x1b] = 0xff00ff00;
  param_1[0x1c] = 0xff0000ff;
  this = operator_new(0x7c);
  local_4._0_1_ = 6;
  if (this == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = FUN_009a8a00(this,"default",0xb,0,0);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x1d] = this_00;
  FUN_009a8180(this_00,&local_54,
               (ushort *)
               L"12345678901234567890123456789012345678901234567890123456789012345678901234567890");
  puVar3 = operator_new(0x3c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0041f350(puVar3);
  }
  param_1[0x133] = puVar3;
  puVar3[4] = param_1[0x17];
  puVar3[5] = param_1[0x18];
  puVar3[6] = 0;
  iVar2 = param_1[0x133];
  *(float *)(iVar2 + 0x1c) = local_54 + *(float *)(iVar2 + 0x10);
  *(float *)(iVar2 + 0x20) = (local_50 + 1.0) * 32.0 + *(float *)(iVar2 + 0x14);
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar2 + 0x18);
  puVar3 = operator_new(0x24);
  local_4._0_1_ = 7;
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_009910f0(puVar3);
  }
  *(undefined4 *)(param_1[0x133] + 4) = uVar4;
  *(undefined1 *)(*(int *)(param_1[0x133] + 4) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(param_1[0x133] + 4) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  local_4._0_1_ = 5;
  *(uint *)(*(int *)(param_1[0x133] + 4) + 0x10) =
       *(uint *)(*(int *)(param_1[0x133] + 4) + 0x10) & 0x7fffffff;
  uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x1e,(wchar_t *)&lpCaption_00d16918,uVar5);
  uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x26,(wchar_t *)&lpCaption_00d16918,uVar5);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  uVar5 = FUN_00ace02d(L"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  FUN_004036d0(&local_4c,L"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",uVar5
              );
  FUN_00544a20(param_1,&local_4c);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  puVar3 = FUN_00421700();
  FUN_00544a20(param_1,puVar3);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  uVar5 = FUN_00ace02d((short *)&DAT_00d1966c);
  FUN_004036d0(&local_4c,L"\n",uVar5);
  FUN_00544a20(param_1,&local_4c);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  pcVar6 = FUN_00565670();
  FUN_005686a0(local_2c,pcVar6);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00544a20(param_1,local_2c);
  uVar7 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  local_4c = local_40;
  param_1[0x132] = (int)uVar7;
  local_48 = 0;
  local_40[0] = local_40[0] & 0xff00;
  local_44 = 0x14;
  _strncpy((char *)local_4c,"call",4);
  local_48 = 4;
  *(char *)(local_4c + 2) = '\0';
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00547400 @ 00547400 ////

void FUN_00547400(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf87b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x4f0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    DAT_0104c8f4 = FUN_00546f80(puVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_0104c8f4 = (undefined4 *)0x0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00547470 @ 00547470 ////

void __fastcall FUN_00547470(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


//// FUNCTION FUN_00547480 @ 00547480 ////

void __fastcall FUN_00547480(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


//// FUNCTION FUN_005474a0 @ 005474a0 ////

void __fastcall FUN_005474a0(float *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 2) == '\0') {
    uVar3 = FUN_00990ae0(param_1,param_2);
    fVar1 = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar2 = (float)(int)param_1[1];
    if ((int)param_1[1] < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = (fVar1 - fVar2) + *param_1;
  }
  return;
}


//// FUNCTION FUN_005474e0 @ 005474e0 ////

void __fastcall FUN_005474e0(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    uVar1 = FUN_00990ae0(param_1,param_2);
    *(int *)(param_1 + 4) = (int)uVar1;
  }
  return;
}


//// FUNCTION FUN_00547500 @ 00547500 ////

float10 __fastcall FUN_00547500(float *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 2) == '\0') {
    uVar3 = FUN_00990ae0(param_1,param_2);
    iVar2 = (int)(float)uVar3 - (int)param_1[1];
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    param_1[1] = (float)uVar3;
    *param_1 = fVar1 + *param_1;
  }
  return (float10)*param_1 * (float10)0.001;
}


//// FUNCTION FUN_00547550 @ 00547550 ////

int __fastcall FUN_00547550(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}


//// FUNCTION FUN_00547710 @ 00547710 ////

void __thiscall FUN_00547710(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x3d) == '\0') {
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


//// FUNCTION FUN_00547810 @ 00547810 ////

void __cdecl FUN_00547810(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x3d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x3d);
  }
  return;
}


//// FUNCTION FUN_00547830 @ 00547830 ////

void __cdecl FUN_00547830(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x3d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x3d);
  }
  return;
}


//// FUNCTION FUN_00547860 @ 00547860 ////

void __fastcall FUN_00547860(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x3d) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x3d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x3d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x3d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x3d) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x3d) == '\0');
    if (*(char *)((int)piVar4 + 0x3d) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_005478c0 @ 005478c0 ////

void __fastcall FUN_005478c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x3d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x3d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x3d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x3d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x3d);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x3d);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_005479b0 @ 005479b0 ////

void __fastcall FUN_005479b0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00547ad0 @ 00547ad0 ////

void __thiscall FUN_00547ad0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x3d) == '\0') {
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


//// FUNCTION FUN_00547b30 @ 00547b30 ////

int * __fastcall FUN_00547b30(int *param_1)

{
  FUN_005478c0(param_1);
  return param_1;
}


//// FUNCTION FUN_00547b40 @ 00547b40 ////

int * __fastcall FUN_00547b40(int *param_1)

{
  FUN_00547860(param_1);
  return param_1;
}


//// FUNCTION FUN_00547ba0 @ 00547ba0 ////

undefined4 * __thiscall FUN_00547ba0(void *this,byte param_1)

{
  FUN_005479b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00547bc0 @ 00547bc0 ////

bool __fastcall FUN_00547bc0(int param_1)

{
  return *(int *)(param_1 + 0x40) == 0;
}


//// FUNCTION FUN_00547c30 @ 00547c30 ////

undefined4 * __thiscall FUN_00547c30(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x3d) == '\0') {
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
LAB_00547c74:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00547c79;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00547c74;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00547c79:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x3d) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_00547ca0 @ 00547ca0 ////

int * __fastcall FUN_00547ca0(int *param_1)

{
  FUN_005478c0(param_1);
  return param_1;
}


//// FUNCTION FUN_00547cb0 @ 00547cb0 ////

int * __fastcall FUN_00547cb0(int *param_1)

{
  FUN_00547860(param_1);
  return param_1;
}


//// FUNCTION FUN_00547cc0 @ 00547cc0 ////

undefined4 * __thiscall FUN_00547cc0(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00547d80 @ 00547d80 ////

int * __cdecl FUN_00547d80(int param_1,int param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = *(uint *)(param_2 + -0x20);
    _Source = *(char **)(param_2 + -0x24);
    iVar2 = param_2 + -0x24;
    piVar3 = param_3 + -9;
    if ((uint)param_3[-7] <= _Count) {
      if (0x14 < (uint)param_3[-7]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar3);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-7] = _Size;
      pvVar1 = _malloc(_Size);
      *piVar3 = (int)pvVar1;
    }
    _strncpy((char *)*piVar3,_Source,_Count);
    param_3[-8] = _Count;
    *(undefined1 *)(_Count + *piVar3) = 0;
    param_3[-1] = *(int *)(param_2 + -4);
    param_2 = iVar2;
    param_3 = piVar3;
  } while (iVar2 != param_1);
  return piVar3;
}


//// FUNCTION FUN_00547e50 @ 00547e50 ////

bool __cdecl FUN_00547e50(undefined4 *param_1,int param_2,void *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_20 [2];
  uint local_18;
  
  if (param_1[1] == 0) {
    FUN_004015d0(param_3,"",0);
    return param_2 == 0;
  }
  if (param_2 == 0) {
    uVar1 = FUN_00413450(param_1,",",0,1);
    if (uVar1 == 0xffffffff) {
      FUN_004015d0(param_3,(char *)*param_1,param_1[1]);
      return true;
    }
    puVar2 = FUN_00430770(param_1,local_20,0,uVar1);
    FUN_004015d0(param_3,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  else {
    puVar2 = (undefined4 *)0xffffffff;
    iVar3 = 0;
    puVar4 = param_1;
    if (-1 < param_2) {
      do {
        puVar4 = puVar2;
        puVar2 = (undefined4 *)FUN_00413450(param_1,",",(int)puVar4 + 1,1);
        if (puVar2 == (undefined4 *)0xffffffff) {
          if (iVar3 != param_2) goto LAB_00547f32;
          puVar2 = (undefined4 *)(param_1[1] + 1);
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= param_2);
    }
    if ((int)puVar4 < 0) {
LAB_00547f32:
      FUN_004015d0(param_3,"",0);
      return false;
    }
    puVar2 = FUN_00430770(param_1,local_20,(int)puVar4 + 1,(int)puVar2 + (-1 - (int)puVar4));
    FUN_004015d0(param_3,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  return true;
}


//// FUNCTION FUN_00547fd0 @ 00547fd0 ////

void FUN_00547fd0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xf) = 1;
  *(undefined1 *)((int)puVar1 + 0x3d) = 0;
  return;
}


//// FUNCTION FUN_00548010 @ 00548010 ////

void __cdecl FUN_00548010(int *param_1,int *param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
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
      pvVar1 = _malloc(_Size);
      *param_1 = (int)pvVar1;
    }
    _strncpy((char *)*param_1,_Source,_Count);
    param_1[1] = _Count;
    *(undefined1 *)(_Count + *param_1) = 0;
    param_1[8] = param_3[8];
    param_1 = param_1 + 9;
  } while( true );
}


//// FUNCTION FUN_005480e0 @ 005480e0 ////

int * __cdecl FUN_005480e0(undefined4 *param_1,undefined4 *param_2,int *param_3)

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
      param_3[8] = param_1[8];
    }
    param_1 = param_1 + 9;
    param_3 = param_3 + 9;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00548170 @ 00548170 ////

void __fastcall FUN_00548170(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00547fd0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_005481a0 @ 005481a0 ////

void __cdecl FUN_005481a0(int *param_1,int param_2,undefined4 *param_3)

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
      param_1[8] = param_3[8];
    }
    param_1 = param_1 + 9;
  }
  return;
}


//// FUNCTION FUN_00548290 @ 00548290 ////

int __fastcall FUN_00548290(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00547fd0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00548340 @ 00548340 ////

int * FUN_00548340(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_005481a0(param_1,param_2,param_3);
  return param_1 + param_2 * 9;
}


//// FUNCTION FUN_00548370 @ 00548370 ////

void FUN_00548370(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    FUN_005479b0(param_1);
  }
  return;
}


//// FUNCTION FUN_005483a0 @ 005483a0 ////

void __fastcall FUN_005483a0(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 9) {
    FUN_005479b0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005483f0 @ 005483f0 ////

void FUN_005483f0(void)

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
  puStack_8 = &LAB_00caf898;
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


//// FUNCTION FUN_00548460 @ 00548460 ////

void __fastcall FUN_00548460(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 9) {
    FUN_005479b0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005484c0 @ 005484c0 ////

void __thiscall FUN_005484c0(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined1 *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_34 [20];
  undefined4 local_20;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00caf8b8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_40 = local_34;
  local_34[0] = 0;
  local_3c = 0;
  local_38 = 0x14;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004015d0(&local_40,(char *)*param_3,param_3[1]);
  local_20 = param_3[8];
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
      FUN_005483f0();
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
        iVar2 = FUN_00547550((int)this);
        uVar5 = iVar2 + param_2;
      }
      piVar3 = operator_new(uVar5 * 0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar3;
      piVar4 = FUN_005480e0(*(undefined4 **)((int)this + 4),param_1,piVar3);
      FUN_005481a0(piVar4,param_2,&local_40);
      FUN_005480e0(param_1,*(undefined4 **)((int)this + 8),piVar4 + param_2 * 9);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x24;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_00548370(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar3 + uVar5 * 9;
      *(int **)((int)this + 8) = piVar3 + (param_2 + iVar2) * 9;
      *(int **)((int)this + 4) = piVar3;
    }
    else {
      piVar3 = *(int **)((int)this + 8);
      if ((uint)(((int)piVar3 - (int)param_1) / 0x24) < param_2) {
        FUN_005480e0(param_1,piVar3,param_1 + param_2 * 9);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00548340(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x24,&local_40);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x24;
        *(int *)((int)this + 8) = iVar2;
        FUN_00548010(param_1,(int *)(iVar2 + param_2 * -0x24),&local_40);
      }
      else {
        piVar4 = FUN_005480e0(piVar3 + param_2 * -9,piVar3,piVar3);
        *(int **)((int)this + 8) = piVar4;
        FUN_00547d80((int)param_1,(int)(piVar3 + param_2 * -9),piVar3);
        FUN_00548010(param_1,param_1 + param_2 * 9,&local_40);
      }
    }
  }
  if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_005487f0 @ 005487f0 ////

void __fastcall FUN_005487f0(undefined4 *param_1)

{
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[9],(undefined4 *)param_1[10]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00548840 @ 00548840 ////

void __thiscall FUN_00548840(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x24 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x24;
      goto LAB_00548885;
    }
  }
  iVar1 = 0;
LAB_00548885:
  FUN_005484c0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x24;
  return;
}


//// FUNCTION FUN_005488b0 @ 005488b0 ////

undefined4 * __thiscall FUN_005488b0(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf8d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_004c0f60((void *)((int)this + 0x20),(int)(param_1 + 8));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00548920 @ 00548920 ////

void __fastcall FUN_00548920(int param_1)

{
  FUN_005487f0((undefined4 *)(param_1 + 0xc));
  return;
}


//// FUNCTION FUN_00548930 @ 00548930 ////

void __thiscall FUN_00548930(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x24) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x24))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_005481a0(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 9;
    return;
  }
  FUN_00548840(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_005489c0 @ 005489c0 ////

undefined4 * __thiscall FUN_005489c0(void *this,undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf8f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_004c0f60((void *)((int)this + 0x20),param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00548a70 @ 00548a70 ////

void * __thiscall FUN_00548a70(void *this,byte param_1)

{
  FUN_00548920((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00548a90 @ 00548a90 ////

undefined4 *
FUN_00548a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00caf921;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x40);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_005488b0(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0xf) = param_5;
    *(undefined1 *)((int)puVar1 + 0x3d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_00548b40 @ 00548b40 ////

void __thiscall
FUN_00548b40(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00caf938;
  local_c = ExceptionList;
  if (0x5555553 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_00548a90(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x3c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x3c) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0xf] == '\0') {
LAB_00548c3b:
        *(undefined1 *)(*piVar4 + 0x3c) = 1;
        *(undefined1 *)(piVar5 + 0xf) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x3c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00547ad0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x3c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x3c) = 0;
        FUN_00547710(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xf] == '\0') goto LAB_00548c3b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00547710(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x3c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x3c) = 0;
      FUN_00547ad0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x3c);
  } while( true );
}


//// FUNCTION FUN_00548d00 @ 00548d00 ////

void __thiscall FUN_00548d00(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x3d) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00548d64:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00548d69;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00548d64;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00548d69:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x3d) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_00548b40(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00547860((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00548b40(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00548e20 @ 00548e20 ////

void __thiscall FUN_00548e20(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
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
  puStack_8 = &LAB_00caf958;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x3d) != '\0') {
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
  FUN_005478c0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x3d) == '\0') {
    piVar7 = piVar4;
    if ((*(char *)(_Memory[2] + 0x3d) == '\0') && (piVar7 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0x3d) == '\0') {
          piVar7[1] = (int)piVar4;
        }
        *piVar4 = (int)piVar7;
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
      iVar1 = param_2[0xf];
      *(char *)(param_2 + 0xf) = (char)_Memory[0xf];
      *(char *)(_Memory + 0xf) = (char)iVar1;
      goto LAB_00548f8f;
    }
  }
  else {
    piVar7 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar7 + 0x3d) == '\0') {
    piVar7[1] = (int)piVar4;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar4 == _Memory) {
    *piVar4 = (int)piVar7;
  }
  else {
    piVar4[2] = (int)piVar7;
  }
  piVar5 = *(int **)((int)this + 4);
  if ((int *)*piVar5 == _Memory) {
    piVar2 = piVar4;
    if (*(char *)((int)piVar7 + 0x3d) == '\0') {
      piVar2 = (int *)FUN_00547830(piVar7);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar7 + 0x3d) == '\0') {
      uVar3 = FUN_00547810((int)piVar7);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00548f8f:
  if ((char)_Memory[0xf] == '\x01') {
    if (piVar7 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar7[0xf] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar7 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0xf] == '\0') {
            *(undefined1 *)(piVar4 + 0xf) = 1;
            *(undefined1 *)(piVar5 + 0xf) = 0;
            FUN_00547ad0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x3d) == '\0') {
            if ((*(char *)(*piVar4 + 0x3c) != '\x01') || (*(char *)(piVar4[2] + 0x3c) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x3c) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x3c) = 1;
                *(undefined1 *)(piVar4 + 0xf) = 0;
                FUN_00547710(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xf) = (char)piVar5[0xf];
              *(undefined1 *)(piVar5 + 0xf) = 1;
              *(undefined1 *)(piVar4[2] + 0x3c) = 1;
              FUN_00547ad0(this,(int)piVar5);
              break;
            }
LAB_00549058:
            *(undefined1 *)(piVar4 + 0xf) = 0;
          }
        }
        else {
          if ((char)piVar4[0xf] == '\0') {
            *(undefined1 *)(piVar4 + 0xf) = 1;
            *(undefined1 *)(piVar5 + 0xf) = 0;
            FUN_00547710(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x3d) == '\0') {
            if ((*(char *)(piVar4[2] + 0x3c) == '\x01') && (*(char *)(*piVar4 + 0x3c) == '\x01'))
            goto LAB_00549058;
            if (*(char *)(*piVar4 + 0x3c) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x3c) = 1;
              *(undefined1 *)(piVar4 + 0xf) = 0;
              FUN_00547ad0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xf) = (char)piVar5[0xf];
            *(undefined1 *)(piVar5 + 0xf) = 1;
            *(undefined1 *)(*piVar4 + 0x3c) = 1;
            FUN_00547710(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar7 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 0xf) = 1;
  }
  puVar6 = (undefined4 *)_Memory[0xc];
  if (puVar6 == (undefined4 *)0x0) {
    _Memory[0xc] = 0;
    _Memory[0xd] = 0;
    _Memory[0xe] = 0;
    if (0x14 < (uint)_Memory[5]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)_Memory[3]);
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  while( true ) {
    if (puVar6 == (undefined4 *)_Memory[0xd]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)_Memory[0xc]);
    }
    if (0x14 < (uint)puVar6[2]) break;
    puVar6 = puVar6 + 8;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*puVar6);
}


//// FUNCTION FUN_00549130 @ 00549130 ////

void FUN_00549130(void *param_1)

{
  if (*(char *)((int)param_1 + 0x3d) == '\0') {
    FUN_00549130(*(void **)((int)param_1 + 8));
    FUN_00548920((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00549170 @ 00549170 ////

undefined4 * __thiscall FUN_00549170(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00548b40(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_00548b40(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_00548b40(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00547860((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x3d) != '\0') {
          FUN_00548b40(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00548b40(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_005478c0((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_005492f2;
      }
      if (*(char *)(param_2[2] + 0x3d) != '\0') {
        FUN_00548b40(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00548b40(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_005492f2:
  puVar4 = (undefined4 *)FUN_00548d00(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00549320 @ 00549320 ////

void __fastcall FUN_00549320(int param_1)

{
  FUN_00549130(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00549350 @ 00549350 ////

int * __thiscall FUN_00549350(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf980;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar3 = FUN_00547c30(this,param_1);
  if (piVar3 != *(int **)((int)this + 4)) {
    uVar4 = FUN_00441060(puVar2,piVar3 + 3);
    if ((char)uVar4 == '\0') {
      ExceptionList = local_c;
      return piVar3 + 0xb;
    }
  }
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_4 = 0;
  piVar5 = FUN_005489c0(local_3c,puVar2,(int)local_4c);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar3 = FUN_00549170(this,&param_1,piVar3,piVar5);
  iVar1 = *piVar3;
  FUN_005487f0(local_3c);
  ExceptionList = local_c;
  return (int *)(iVar1 + 0x2c);
}


//// FUNCTION FUN_00549400 @ 00549400 ////

void __thiscall FUN_00549400(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00549130((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x3d) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x3d) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x3d);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x3d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x3d);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x3d);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00548e20(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_005494c0 @ 005494c0 ////

undefined4 __thiscall FUN_005494c0(void *this,void *param_1)

{
  int *piVar1;
  char *_Source;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *this_00;
  int iVar5;
  undefined4 *_Memory;
  undefined4 *puVar6;
  undefined1 local_80 [4];
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  char *local_70;
  uint local_6c;
  uint local_68;
  char local_64 [20];
  undefined1 *local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44 [20];
  char *local_30;
  uint local_2c;
  uint local_28;
  char local_24 [20];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00caf9b0;
  local_c = ExceptionList;
  local_50 = local_44;
  _Memory = (undefined4 *)0x0;
  local_44[0] = 0;
  local_4c = 0;
  local_48 = 0x14;
  local_70 = local_64;
  local_64[0] = '\0';
  local_6c = 0;
  local_68 = 0x14;
  local_4 = 1;
  uStack_3 = 0;
  ExceptionList = &local_c;
  uVar4 = FUN_00552520(param_1,&local_50);
  if ((char)uVar4 != '\0') {
    local_7c = (undefined4 *)0x0;
    local_78 = (undefined4 *)0x0;
    local_74 = 0;
    local_4 = 2;
    iVar5 = 0;
    bVar2 = FUN_00547e50(&local_50,0,&local_70);
    if (bVar2) {
      do {
        uVar4 = local_6c;
        _Source = local_70;
        if (local_6c != 0) {
          local_30 = local_24;
          local_24[0] = '\0';
          local_2c = 0;
          local_28 = 0x14;
          local_4 = 3;
          if (0x13 < local_6c) {
            local_28 = local_6c + 0x20 & 0xffffffe0;
            local_30 = _malloc(local_28);
          }
          _strncpy(local_30,_Source,uVar4);
          local_2c = uVar4;
          local_30[uVar4] = '\0';
          local_10 = iVar5;
          FUN_00548930(local_80,&local_30);
          local_4 = 2;
          _Memory = local_7c;
          if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
            _free(local_30);
          }
        }
        iVar5 = iVar5 + 1;
        bVar2 = FUN_00547e50(&local_50,iVar5,&local_70);
      } while (bVar2);
    }
    uVar4 = FUN_00552520(param_1,&local_50);
    cVar3 = (char)uVar4;
    while (cVar3 != '\0') {
      uVar4 = 0;
      puVar6 = _Memory;
      while ((puVar6 != (undefined4 *)0x0 && (uVar4 < (uint)(((int)local_78 - (int)puVar6) / 0x24)))
            ) {
        FUN_00547e50(&local_50,_Memory[8],&local_70);
        this_00 = FUN_00549350((void *)((int)this + 0x38),_Memory);
        iVar5 = this_00[1];
        if ((iVar5 == 0) || ((uint)(this_00[3] - iVar5 >> 5) <= (uint)(this_00[2] - iVar5 >> 5))) {
          FUN_00439fd0(this_00,(int *)this_00[2],1,&local_70);
          uVar4 = uVar4 + 1;
          _Memory = _Memory + 9;
        }
        else {
          piVar1 = (int *)this_00[2];
          FUN_00439ea0(piVar1,1,&local_70);
          this_00[2] = (int)(piVar1 + 8);
          uVar4 = uVar4 + 1;
          _Memory = _Memory + 9;
          puVar6 = local_7c;
        }
      }
      uVar4 = FUN_00552520(param_1,&local_50);
      _Memory = puVar6;
      cVar3 = (char)uVar4;
    }
    puVar6 = _Memory;
    if (_Memory != (undefined4 *)0x0) {
      while( true ) {
        if (puVar6 == local_78) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (0x14 < (uint)puVar6[2]) break;
        puVar6 = puVar6 + 9;
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)*puVar6);
    }
  }
  if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(local_48 >> 8),1);
}


//// FUNCTION FUN_005497a0 @ 005497a0 ////

void __thiscall FUN_005497a0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  
  *(undefined4 *)((int)this + 0x44) = 0;
  piVar3 = FUN_00549350((void *)((int)this + 0x38),param_1);
  puVar2 = (undefined4 *)piVar3[1];
  uVar7 = 0;
  puVar4 = puVar2;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    if ((uint)(piVar3[2] - (int)puVar2 >> 5) <= uVar7) {
      return;
    }
    pbVar8 = (byte *)*param_2;
    pbVar5 = (byte *)*puVar4;
    do {
      bVar1 = *pbVar5;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_0054980c:
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00549811;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_0054980c;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_00549811:
    if (iVar6 == 0) {
      *(uint *)((int)this + 0x44) = uVar7;
      return;
    }
    uVar7 = uVar7 + 1;
    puVar4 = puVar4 + 8;
  } while( true );
}


//// FUNCTION FUN_00549830 @ 00549830 ////

undefined4 * __thiscall FUN_00549830(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)((int)this + 0x44);
  piVar2 = FUN_00549350((void *)((int)this + 0x38),param_2);
  puVar3 = (undefined4 *)(iVar1 * 0x20 + piVar2[1]);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,(char *)*puVar3,puVar3[1]);
  return param_1;
}


//// FUNCTION FUN_00549890 @ 00549890 ////

void __fastcall FUN_00549890(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00549400(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_005498c0 @ 005498c0 ////

uint __thiscall FUN_005498c0(void *this,undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28 [20];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caf9c8;
  local_c = ExceptionList;
  local_34 = local_28;
  local_28[0] = '\0';
  local_30 = 0;
  local_2c = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_34,"",0);
  local_30 = 0;
  *local_34 = '\0';
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  bVar1 = FUN_00553a50(&local_34,param_1);
  if (!bVar1) {
    local_4 = 0xffffffff;
    uVar2 = FUN_00552ce0(&local_34);
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  uVar3 = FUN_005494c0(this,&local_34);
  local_4 = 0xffffffff;
  uVar4 = FUN_00552ce0(&local_34);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar4 >> 8),(char)uVar3);
}


//// FUNCTION FUN_005499c0 @ 005499c0 ////

void __fastcall FUN_005499c0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00549400(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_005499f0 @ 005499f0 ////

void __fastcall FUN_005499f0(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caf9e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d23dc8;
  local_4 = 0;
  FUN_00549400(param_1 + 0xe,&local_10,*(int **)param_1[0xf],(int *)param_1[0xf]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xf]);
}


//// FUNCTION FUN_00549a70 @ 00549a70 ////

int __fastcall FUN_00549a70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00547fd0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00549aa0 @ 00549aa0 ////

undefined4 * __fastcall FUN_00549aa0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cafa08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d23dc8;
  iVar1 = FUN_00547fd0();
  param_1[0xf] = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(undefined4 *)(param_1[0xf] + 4) = param_1[0xf];
  *(undefined4 *)param_1[0xf] = param_1[0xf];
  *(undefined4 *)(param_1[0xf] + 8) = param_1[0xf];
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00549b20 @ 00549b20 ////

undefined4 * __thiscall FUN_00549b20(void *this,byte param_1)

{
  FUN_005499f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00549b40 @ 00549b40 ////

undefined4 * __thiscall FUN_00549b40(void *this,undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cafa33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d23dc8;
  iVar1 = FUN_00547fd0();
  *(int *)((int)this + 0x3c) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)((int)this + 0x3c) + 4) = *(int *)((int)this + 0x3c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x3c);
  *(int *)(*(int *)((int)this + 0x3c) + 8) = *(int *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x40) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0x44) = 0;
  FUN_005498c0(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00549be0 @ 00549be0 ////

int __fastcall FUN_00549be0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00549c00 @ 00549c00 ////

int * __thiscall FUN_00549c00(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00549d10 @ 00549d10 ////

void __cdecl FUN_00549d10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
    param_1[5] = param_3[5];
  }
  return;
}


//// FUNCTION FUN_00549d70 @ 00549d70 ////

void __cdecl FUN_00549d70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    param_3[4] = param_1[4];
    param_3[5] = param_1[5];
    param_3 = param_3 + 6;
  }
  return;
}


//// FUNCTION FUN_00549dc0 @ 00549dc0 ////

void __cdecl FUN_00549dc0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-6] = param_2[-6];
    param_3[-5] = param_2[-5];
    param_3[-4] = param_2[-4];
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -6;
    param_3 = param_3 + -6;
  }
  return;
}


//// FUNCTION FUN_00549e40 @ 00549e40 ////

void FUN_00549e40(void)

{
  if (DAT_0104c948 != (undefined4 *)0x0) {
    (**(code **)*DAT_0104c948)(1);
  }
  (*(code *)DAT_0104c934[1])();
  DAT_0104c948 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00549e72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104c934)();
  return;
}


//// FUNCTION FUN_0054a040 @ 0054a040 ////

void __fastcall FUN_0054a040(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d23dd4;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0054a090 @ 0054a090 ////

void __fastcall FUN_0054a090(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d23dd4;
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


//// FUNCTION FUN_0054a130 @ 0054a130 ////

void __cdecl FUN_0054a130(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
    }
    param_3 = param_3 + 6;
  }
  return;
}


//// FUNCTION FUN_0054a180 @ 0054a180 ////

void __cdecl FUN_0054a180(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
    }
    param_3 = param_3 + 6;
  }
  return;
}


//// FUNCTION FUN_0054a250 @ 0054a250 ////

void __cdecl FUN_0054a250(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      param_1[4] = param_3[4];
      param_1[5] = param_3[5];
    }
    param_1 = param_1 + 6;
  }
  return;
}


//// FUNCTION FUN_0054a2a0 @ 0054a2a0 ////

void __fastcall FUN_0054a2a0(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  uVar6 = 0;
  local_24 = 0;
  iVar5 = 0;
  do {
    if ((((*(uint *)(DAT_0104cdf4 + 0x3c) <= *(uint *)(*(int *)(param_1 + 0x48) + 0x14 + iVar5)) &&
         (uVar4 = FUN_009a1b30(&DAT_0105c2e8,(float *)(*(int *)(param_1 + 0x48) + iVar5),&local_20),
         local_24 = uVar6, (char)uVar4 != '\0')) && (0.0 <= local_20)) &&
       (((0.0 <= local_1c && (local_20 < DAT_0105c400)) && (local_1c < DAT_0105c404)))) {
      pfVar1 = (float *)(iVar5 + *(int *)(param_1 + 0x48));
      fVar7 = FUN_00412f80((float *)&DAT_0105c3a8,pfVar1);
      if ((float10)DAT_0105c3e0 < fVar7) {
        fVar2 = pfVar1[3];
        fVar8 = (float10)DAT_0105c3dc;
        *(float *)(*(int *)(param_1 + 0x54) + 8) = pfVar1[4];
        iVar3 = *(int *)(param_1 + 0x54);
        fVar7 = ((float10)fVar2 * (float10)200.0) / (fVar8 * fVar7);
        local_10 = 0;
        local_4 = 0;
        local_18 = (float)((float10)local_20 - fVar7);
        *(float *)(iVar3 + 0x10) = local_18;
        local_14 = (float)((float10)local_1c - fVar7);
        *(float *)(iVar3 + 0x14) = local_14;
        *(undefined4 *)(iVar3 + 0x18) = 0;
        iVar3 = *(int *)(param_1 + 0x54);
        local_c = (float)((float10)local_20 + fVar7);
        *(float *)(iVar3 + 0x1c) = local_c;
        local_8 = (float)(fVar7 + (float10)local_1c);
        *(float *)(iVar3 + 0x20) = local_8;
        *(undefined4 *)(iVar3 + 0x24) = 0;
        BuildAndDrawPrimitive(*(int *)(param_1 + 0x54));
      }
    }
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + 0x18;
  } while (uVar6 <= *(uint *)(param_1 + 0x40));
  *(uint *)(param_1 + 0x40) = local_24;
  return;
}


//// FUNCTION FUN_0054a410 @ 0054a410 ////

void FUN_0054a410(void)

{
  if (DAT_0104c948 != 0) {
    FUN_0054a2a0(DAT_0104c948);
    return;
  }
  return;
}


//// FUNCTION FUN_0054a430 @ 0054a430 ////

void __fastcall FUN_0054a430(int param_1)

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


//// FUNCTION FUN_0054a510 @ 0054a510 ////

void __fastcall FUN_0054a510(int param_1)

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


//// FUNCTION FUN_0054a540 @ 0054a540 ////

undefined4 * FUN_0054a540(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0054a250(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0054a570 @ 0054a570 ////

void __fastcall FUN_0054a570(undefined4 *param_1)

{
  void *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cafa53;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d23de4;
  _Memory = *(void **)(param_1[0x15] + 4);
  local_4 = 1;
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1[0x15] + 4) = 0;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x15]);
}


//// FUNCTION FUN_0054a610 @ 0054a610 ////

undefined4 * __thiscall FUN_0054a610(void *this,byte param_1)

{
  FUN_0054a570(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0054a630 @ 0054a630 ////

void FUN_0054a630(void)

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
  puStack_8 = &LAB_00cafa68;
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


//// FUNCTION FUN_0054a6a0 @ 0054a6a0 ////

void __thiscall FUN_0054a6a0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cafa80;
  local_10 = ExceptionList;
  iVar3 = *(int *)((int)this + 4);
  local_2c = *param_3;
  local_28 = param_3[1];
  local_24 = param_3[2];
  local_20 = param_3[3];
  local_1c = param_3[4];
  local_18 = param_3[5];
  local_14 = &stack0xffffffc8;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x18;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffc8;
    if (0xaaaaaaaU - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_0054a630();
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
        iVar3 = FUN_00549be0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_0054a180(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0054a250(puVar5,param_2,&local_2c);
      FUN_0054a180(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 6);
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x18;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 6;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 6;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 0x18) < param_2) {
      FUN_0054a180(param_1,puVar4,param_1 + param_2 * 6);
      local_8 = 2;
      FUN_0054a540(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,&local_2c)
      ;
      iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
      *(int *)((int)this + 8) = iVar3;
      FUN_00549d10(param_1,(undefined4 *)(iVar3 + param_2 * -0x18),&local_2c);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0054a180(puVar4 + param_2 * -6,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00549dc0(param_1,puVar4 + param_2 * -6,puVar4);
    FUN_00549d10(param_1,param_1 + param_2 * 6,&local_2c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0054a970 @ 0054a970 ////

void __thiscall FUN_0054a970(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cafa90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0xaaaaaaa < param_1) {
    ExceptionList = &local_10;
    FUN_0054a630();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x18;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 0x18);
    local_8 = 0;
    FUN_0054a130(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
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


//// FUNCTION FUN_0054aa60 @ 0054aa60 ////

void __thiscall FUN_0054aa60(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)((int)this + 4);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)((int)this + 8) - iVar4) / 0x18;
  }
  if (param_1 <= uVar3) {
    if (((iVar4 != 0) &&
        (puVar2 = *(undefined4 **)((int)this + 8), param_1 < (uint)(((int)puVar2 - iVar4) / 0x18)))
       && (puVar1 = (undefined4 *)(iVar4 + param_1 * 0x18), puVar1 != puVar2)) {
      uVar5 = FUN_00549d70(puVar2,puVar2,puVar1);
      *(undefined4 *)((int)this + 8) = uVar5;
    }
    return;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)((int)this + 8) - iVar4) / 0x18;
  }
  FUN_0054a6a0(this,*(undefined4 **)((int)this + 8),param_1 - iVar4,(undefined4 *)&stack0x00000008);
  return;
}


//// FUNCTION FUN_0054ab70 @ 0054ab70 ////

void __thiscall FUN_0054ab70(void *this,uint param_1)

{
  FUN_0054aa60(this,param_1);
  return;
}


//// FUNCTION FUN_0054aba0 @ 0054aba0 ////

void __thiscall
FUN_0054aba0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_4 != 0) {
    if (*(uint *)((int)this + 0x3c) < *(uint *)(DAT_0104cdf4 + 0x3c)) {
      *(undefined4 *)((int)this + 0x38) = 0;
      *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
    }
    if (*(int *)((int)this + 0x48) != 0) {
      uVar5 = (*(int *)((int)this + 0x4c) - *(int *)((int)this + 0x48)) / 0x18;
    }
    uVar1 = *(uint *)((int)this + 0x38);
    if (uVar1 < uVar5) {
      puVar4 = (uint *)(*(int *)((int)this + 0x48) + 0x14 + uVar1 * 0x18);
      do {
        if (*puVar4 < *(uint *)(DAT_0104cdf4 + 0x3c)) {
          if (-1 < (int)uVar1) goto LAB_0054ac47;
          break;
        }
        uVar1 = uVar1 + 1;
        puVar4 = puVar4 + 6;
      } while (uVar1 < uVar5);
    }
    FUN_0054aa60((void *)((int)this + 0x44),uVar5 + 1);
    uVar1 = uVar5;
LAB_0054ac47:
    if (*(int *)((int)this + 0x40) < (int)uVar1) {
      *(uint *)((int)this + 0x40) = uVar1;
    }
    *(uint *)((int)this + 0x38) = uVar1 + 1;
    iVar3 = *(int *)((int)this + 0x48);
    iVar2 = uVar1 * 0x18;
    *(undefined4 *)(iVar3 + iVar2) = *param_1;
    iVar3 = iVar3 + iVar2;
    *(undefined4 *)(iVar3 + 4) = param_1[1];
    *(undefined4 *)(iVar3 + 8) = param_1[2];
    *(undefined4 *)(*(int *)((int)this + 0x48) + 0xc + iVar2) = param_3;
    *(undefined4 *)(*(int *)((int)this + 0x48) + iVar2 + 0x10) = *param_2;
    *(int *)(*(int *)((int)this + 0x48) + iVar2 + 0x14) = *(int *)(DAT_0104cdf4 + 0x3c) + param_4;
  }
  return;
}


//// FUNCTION FUN_0054acb0 @ 0054acb0 ////

/* WARNING: Removing unreachable block (ram,0x0054ad72) */
/* WARNING: Removing unreachable block (ram,0x0054ad89) */
/* WARNING: Removing unreachable block (ram,0x0054ad80) */
/* WARNING: Removing unreachable block (ram,0x0054ad8b) */
/* WARNING: Removing unreachable block (ram,0x0054adae) */
/* WARNING: Removing unreachable block (ram,0x0054ada5) */
/* WARNING: Removing unreachable block (ram,0x0054adb0) */
/* WARNING: Removing unreachable block (ram,0x0054adf7) */
/* WARNING: Removing unreachable block (ram,0x0054adfd) */
/* WARNING: Removing unreachable block (ram,0x0054ae5f) */
/* WARNING: Removing unreachable block (ram,0x0054ae66) */

undefined4 * __fastcall FUN_0054acb0(undefined4 *param_1)

{
  char *_Dest;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cafac6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d23de4;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0054a970(param_1 + 0x11,0x400);
  param_1[0x10] = 0;
  _Dest = _malloc(0x20);
  _strncpy(_Dest,"ui/button_blank_h.dds",0x15);
  _Dest[0x15] = '\0';
  local_4._0_1_ = 2;
  FUN_0099bb50(_Dest,0,0,0,'\0');
  local_4 = CONCAT31(local_4._1_3_,1);
                    /* WARNING: Subroutine does not return */
  _free(_Dest);
}


//// FUNCTION FUN_0054ae80 @ 0054ae80 ////

undefined4 * FUN_0054ae80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cafadb;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  if (DAT_0104c948 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x58);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_0054acb0(puVar1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104c934[1])();
    DAT_0104c948 = puVar2;
    (*(code *)*DAT_0104c934)();
  }
  ExceptionList = local_c;
  return DAT_0104c948;
}


//// FUNCTION FUN_0054af10 @ 0054af10 ////

void __fastcall FUN_0054af10(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0054af40 @ 0054af40 ////

undefined4 * __thiscall FUN_0054af40(void *this,byte param_1)

{
  FUN_009d3750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0054af60 @ 0054af60 ////

undefined1 FUN_0054af60(void)

{
  return 0;
}


//// FUNCTION FUN_0054af70 @ 0054af70 ////

undefined1 FUN_0054af70(void)

{
  return 0;
}


//// FUNCTION FUN_0054af80 @ 0054af80 ////

undefined1 FUN_0054af80(void)

{
  return 0;
}


//// FUNCTION FUN_0054af90 @ 0054af90 ////

undefined1 FUN_0054af90(void)

{
  return 0;
}


//// FUNCTION FUN_0054b030 @ 0054b030 ////

int * __thiscall FUN_0054b030(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0054b0c0 @ 0054b0c0 ////

void FUN_0054b0c0(void)

{
  FUN_0098fdd0("PDataLog",&DAT_0104c94c);
  return;
}


//// FUNCTION FUN_0054b0e0 @ 0054b0e0 ////

void FUN_0054b0e0(void)

{
  if (DAT_0104c960 != (undefined4 *)0x0) {
    (**(code **)*DAT_0104c960)(1);
  }
  (*(code *)DAT_0104c94c[1])();
  DAT_0104c960 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0054b112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104c94c)();
  return;
}


//// FUNCTION FUN_0054b120 @ 0054b120 ////

undefined4 FUN_0054b120(void)

{
  return DAT_0104c960;
}


//// FUNCTION FUN_0054b130 @ 0054b130 ////

undefined4 * FUN_0054b130(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cafaf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_0043bb70(local_2c);
  local_4 = 0;
  FUN_00568870(param_1,puVar1);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0054b1a0 @ 0054b1a0 ////

undefined4 * FUN_0054b1a0(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *unaff_retaddr;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  piVar1 = (int *)GetPlayerStudio();
  plVar2 = (longlong *)(**(code **)(*piVar1 + 0x24))(local_8);
  FUN_00569c30(unaff_retaddr,(float)*plVar2 * 1.1920929e-07);
  return unaff_retaddr;
}


//// FUNCTION FUN_0054b2e0 @ 0054b2e0 ////

void __fastcall FUN_0054b2e0(int *param_1)

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
  puStack_8 = &LAB_00cafb18;
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


//// FUNCTION FUN_0054b3b0 @ 0054b3b0 ////

void __fastcall FUN_0054b3b0(int param_1)

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
  puStack_8 = &LAB_00cafb50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Utility\\DebugDataLog.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x2d;
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
  uVar3 = FUN_0098b490("LastTotalStars");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x68),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Utility\\DebugDataLog.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x2e;
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
  uVar3 = FUN_0098b490("LastTotalStaff");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x70),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Utility\\DebugDataLog.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x2f;
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
  uVar3 = FUN_0098b490("LastTotalFacilitiesAndSets");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x78),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Utility\\DebugDataLog.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x30;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("LastTotalLotPrettying");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x80),8);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0054b760 @ 0054b760 ////

void FUN_0054b760(void *param_1)

{
  tm *ptVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 local_134;
  void *local_12c [2];
  uint local_124;
  void *local_10c [2];
  uint local_104;
  void *local_ec [2];
  uint local_e4;
  void *local_cc [2];
  uint local_c4;
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cafb8c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _time(&local_134);
  ptVar1 = _localtime(&local_134);
  FUN_00acfa94(local_8c,0x40,(short *)&DAT_00d1e0e0,ptVar1);
  lVar2 = __wtol(local_8c);
  FUN_00acfa94(local_8c,0x40,(short *)&DAT_00d1e0d8,ptVar1);
  local_134._4_4_ = __wtol(local_8c);
  FUN_00acfa94(local_8c,0x40,(short *)&DAT_00d1e0d0,ptVar1);
  __wtol(local_8c);
  FUN_00acfa94(local_8c,0x40,(short *)&DAT_00d18f7c,ptVar1);
  lVar3 = __wtol(local_8c);
  FUN_00acfa94(local_8c,0x40,(short *)&PTR_DAT_00d1e0c8,ptVar1);
  lVar4 = __wtol(local_8c);
  FUN_00acfa94(local_8c,0x40,(short *)&DAT_00d1e0c0,ptVar1);
  lVar5 = __wtol(local_8c);
  puVar6 = FUN_00569d60(local_cc,lVar5);
  local_4 = 0;
  puVar7 = FUN_00569d60(local_10c,lVar4);
  local_4._0_1_ = 1;
  puVar8 = FUN_00569d60(local_ac,lVar3);
  local_4._0_1_ = 2;
  puVar9 = FUN_00569d60(local_12c,lVar2);
  local_4 = CONCAT31(local_4._1_3_,3);
  puVar10 = FUN_00569d60(local_ec,local_134._4_4_);
  FUN_004073f0(param_1,(char *)*puVar10,puVar10[1]);
  FUN_004073f0(param_1,":",1);
  FUN_004073f0(param_1,(char *)*puVar9,puVar9[1]);
  FUN_004073f0(param_1,":",1);
  FUN_004073f0(param_1,(char *)*puVar8,puVar8[1]);
  FUN_004073f0(param_1,":",1);
  FUN_004073f0(param_1,(char *)*puVar7,puVar7[1]);
  FUN_004073f0(param_1,":",1);
  FUN_004073f0(param_1,(char *)*puVar6,puVar6[1]);
  if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec[0]);
  }
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c[0]);
  }
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac[0]);
  }
  if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
    _free(local_10c[0]);
  }
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0054ba10 @ 0054ba10 ////

undefined4 * __thiscall FUN_0054ba10(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cafba8;
  local_c = ExceptionList;
  if (*(void **)((int)this + 0x84) == (void *)0x0) {
    ExceptionList = &local_c;
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"",0);
  }
  else {
    ExceptionList = &local_c;
    puVar1 = FUN_0045f620(*(void **)((int)this + 0x84),local_2c);
    local_4 = 0;
    FUN_00568870(param_1,puVar1);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0054bca0 @ 0054bca0 ////

undefined4 * __thiscall FUN_0054bca0(void *this,undefined4 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *unaff_retaddr;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  if (*(int *)((int)this + 0x84) != 0) {
    piVar1 = (int *)FUN_005b2330(*(int *)((int)this + 0x84));
    plVar2 = (longlong *)(**(code **)(*piVar1 + 0x30))(local_8);
    FUN_00569c30(unaff_retaddr,(float)*plVar2 * 1.1920929e-07);
    return unaff_retaddr;
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,"",0);
  return param_1;
}


//// FUNCTION FUN_0054bd20 @ 0054bd20 ////

undefined4 * __thiscall FUN_0054bd20(void *this,undefined4 *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  iVar1 = *(int *)((int)this + 0x84);
  if (iVar1 != 0) {
    FUN_005b0ff0(iVar1);
    plVar2 = (longlong *)local_8;
    FUN_005b2330(iVar1);
    plVar2 = FUN_005c8b90(plVar2);
    FUN_00569c30(param_1,(float)*plVar2 * 1.1920929e-07);
    return param_1;
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,"",0);
  return param_1;
}


//// FUNCTION FUN_0054bda0 @ 0054bda0 ////

undefined4 * __thiscall FUN_0054bda0(void *this,undefined4 *param_1)

{
  int iVar1;
  void *this_00;
  longlong *plVar2;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  if (*(int *)((int)this + 0x84) != 0) {
    iVar1 = FUN_005b2bc0(*(int *)((int)this + 0x84));
    if (iVar1 != 0) {
      plVar2 = (longlong *)local_8;
      this_00 = (void *)FUN_005b2bc0(*(int *)((int)this + 0x84));
      plVar2 = FUN_005ccd10(this_00,plVar2);
      FUN_00569c30(param_1,(float)*plVar2 * 1.1920929e-07);
      return param_1;
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,"",0);
  return param_1;
}


//// FUNCTION FUN_0054be30 @ 0054be30 ////

undefined4 * __thiscall FUN_0054be30(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cafbc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(int *)((int)this + 0x9c) != 0) &&
     (ExceptionList = &local_c, iVar1 = FUN_005a2aa0(*(int *)((int)this + 0x9c)), iVar1 != 0)) {
    piVar2 = (int *)FUN_005a2aa0(*(int *)((int)this + 0x9c));
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x20))(local_2c);
    uStack_4 = 0;
    FUN_00568870(param_1,puVar3);
    if (uStack_24 < 0xb) {
      ExceptionList = local_c;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,"",0);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0054bf00 @ 0054bf00 ////

undefined4 * __thiscall FUN_0054bf00(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cafbe8;
  local_c = ExceptionList;
  if (*(void **)((int)this + 0x9c) == (void *)0x0) {
    ExceptionList = &local_c;
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"",0);
  }
  else {
    ExceptionList = &local_c;
    puVar1 = FUN_005a3200(*(void **)((int)this + 0x9c),local_2c);
    local_4 = 0;
    FUN_00568870(param_1,puVar1);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0054c210 @ 0054c210 ////

undefined4 * __thiscall FUN_0054c210(void *this,undefined4 *param_1)

{
  int iVar1;
  void *this_00;
  longlong *plVar2;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  if (*(int *)((int)this + 0x9c) != 0) {
    iVar1 = FUN_005a2c50(*(int *)((int)this + 0x9c));
    if (iVar1 != 0) {
      plVar2 = (longlong *)local_8;
      this_00 = (void *)FUN_005a2c50(*(int *)((int)this + 0x9c));
      plVar2 = FUN_005ccd10(this_00,plVar2);
      FUN_00569c30(param_1,(float)*plVar2 * 1.1920929e-07);
      return param_1;
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,"",0);
  return param_1;
}


//// FUNCTION FUN_0054c2a0 @ 0054c2a0 ////

undefined4 * __thiscall FUN_0054c2a0(void *this,undefined4 *param_1)

{
  uint local_10;
  int local_c;
  int local_8;
  int iStack_4;
  
  local_10 = *(uint *)(DAT_00f87ed8 + 0xe0);
  local_c = *(int *)(DAT_00f87ed8 + 0xe4);
  FUN_00471b10((longlong *)&local_10);
  local_8 = local_10 - *(uint *)((int)this + 0xa0);
  iStack_4 = (local_c - *(int *)((int)this + 0xa4)) - (uint)(local_10 < *(uint *)((int)this + 0xa0))
  ;
  FUN_00471b10((longlong *)&local_8);
  local_10 = *(uint *)(DAT_00f87ed8 + 0xe0);
  local_c = *(undefined4 *)(DAT_00f87ed8 + 0xe4);
  FUN_00471b10((longlong *)&local_10);
  *(uint *)((int)this + 0xa0) = local_10;
  *(int *)((int)this + 0xa4) = local_c;
  FUN_00471b10((longlong *)((int)this + 0xa0));
  FUN_00569c30(param_1,(float)CONCAT44(iStack_4,local_8) * 1.1920929e-07);
  return param_1;
}


//// FUNCTION FUN_0054c360 @ 0054c360 ////

undefined4 * __thiscall FUN_0054c360(void *this,undefined4 *param_1)

{
  uint local_10;
  int local_c;
  int local_8;
  int iStack_4;
  
  local_10 = *(uint *)(DAT_00f87ed8 + 0xe8);
  local_c = *(int *)(DAT_00f87ed8 + 0xec);
  FUN_00471b10((longlong *)&local_10);
  local_8 = local_10 - *(uint *)((int)this + 0xa8);
  iStack_4 = (local_c - *(int *)((int)this + 0xac)) - (uint)(local_10 < *(uint *)((int)this + 0xa8))
  ;
  FUN_00471b10((longlong *)&local_8);
  local_10 = *(uint *)(DAT_00f87ed8 + 0xe8);
  local_c = *(undefined4 *)(DAT_00f87ed8 + 0xec);
  FUN_00471b10((longlong *)&local_10);
  *(uint *)((int)this + 0xa8) = local_10;
  *(int *)((int)this + 0xac) = local_c;
  FUN_00471b10((longlong *)((int)this + 0xa8));
  FUN_00569c30(param_1,(float)CONCAT44(iStack_4,local_8) * 1.1920929e-07);
  return param_1;
}


//// FUNCTION FUN_0054c420 @ 0054c420 ////

undefined4 * __thiscall FUN_0054c420(void *this,undefined4 *param_1)

{
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  int iStack_4;
  
  local_20 = 0;
  local_18 = *(uint *)(DAT_00f87ed8 + 0xf8);
  local_14 = *(int *)(DAT_00f87ed8 + 0xfc);
  FUN_00471b10((longlong *)&local_18);
  local_20 = *(uint *)(DAT_00f87ed8 + 0xf0);
  local_1c = *(int *)(DAT_00f87ed8 + 0xf4);
  FUN_00471b10((longlong *)&local_20);
  local_10 = local_20 + local_18;
  local_c = local_1c + local_14 + (uint)CARRY4(local_20,local_18);
  FUN_00471b10((longlong *)&local_10);
  local_8 = local_10 - *(uint *)((int)this + 0xb0);
  iStack_4 = (local_c - *(int *)((int)this + 0xb4)) - (uint)(local_10 < *(uint *)((int)this + 0xb0))
  ;
  FUN_00471b10((longlong *)&local_8);
  local_10 = local_20 + local_18;
  local_c = local_1c + local_14 + (uint)CARRY4(local_20,local_18);
  FUN_00471b10((longlong *)&local_10);
  *(int *)((int)this + 0xb4) = local_c;
  *(uint *)((int)this + 0xb0) = local_10;
  FUN_00471b10((longlong *)((int)this + 0xb0));
  FUN_00569c30(param_1,(float)CONCAT44(iStack_4,local_8) * 1.1920929e-07);
  return param_1;
}


//// FUNCTION FUN_0054c530 @ 0054c530 ////

undefined4 * __thiscall FUN_0054c530(void *this,undefined4 *param_1)

{
  uint local_10;
  int local_c;
  int local_8;
  int iStack_4;
  
  local_10 = *(uint *)(DAT_00f87ed8 + 0x100);
  local_c = *(int *)(DAT_00f87ed8 + 0x104);
  FUN_00471b10((longlong *)&local_10);
  local_8 = local_10 - *(uint *)((int)this + 0xb8);
  iStack_4 = (local_c - *(int *)((int)this + 0xbc)) - (uint)(local_10 < *(uint *)((int)this + 0xb8))
  ;
  FUN_00471b10((longlong *)&local_8);
  local_10 = *(uint *)(DAT_00f87ed8 + 0x100);
  local_c = *(undefined4 *)(DAT_00f87ed8 + 0x104);
  FUN_00471b10((longlong *)&local_10);
  *(uint *)((int)this + 0xb8) = local_10;
  *(int *)((int)this + 0xbc) = local_c;
  FUN_00471b10((longlong *)((int)this + 0xb8));
  FUN_00569c30(param_1,(float)CONCAT44(iStack_4,local_8) * 1.1920929e-07);
  return param_1;
}


//// FUNCTION FUN_0054c5f0 @ 0054c5f0 ////

undefined4 * FUN_0054c5f0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cafc20;
  local_c = ExceptionList;
  if (param_2 == (int *)0x0) {
    ExceptionList = &local_c;
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"",0);
    ExceptionList = local_c;
    return param_1;
  }
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00ace790(param_2,0,&TM::TMObject::RTTI_Type_Descriptor,
                               &TM::CStudio::RTTI_Type_Descriptor,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_00ace790(param_2,0,&TM::TMObject::RTTI_Type_Descriptor,
                                 &TM::TMCharacter::RTTI_Type_Descriptor,0);
    if (piVar1 == (int *)0x0) {
      pvVar3 = (void *)FUN_00ace790(param_2,0,&TM::TMObject::RTTI_Type_Descriptor,
                                    &TM::CProject::RTTI_Type_Descriptor,0);
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)FUN_00ace790(param_2,0,&TM::TMObject::RTTI_Type_Descriptor,
                                      &TM::CProjectAI::RTTI_Type_Descriptor,0);
        if (pvVar3 == (void *)0x0) {
          FUN_00401de0(param_1,"",0xffffffff);
        }
        else {
          puVar2 = FUN_005a3200(pvVar3,local_2c);
          local_4 = 3;
          FUN_00568870(param_1,puVar2);
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
        }
      }
      else {
        puVar2 = FUN_0045f620(pvVar3,local_4c);
        local_4 = 2;
        FUN_00568870(param_1,puVar2);
        if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
      }
    }
    else {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x5c))(local_4c);
      local_4 = 1;
      FUN_00568870(param_1,puVar2);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
    }
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x20))(local_4c);
    local_4 = 0;
    FUN_00568870(param_1,puVar2);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0054c830 @ 0054c830 ////

undefined4 * FUN_0054c830(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_retaddr;
  undefined1 local_2c [4];
  uint uStack_28;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cafc38;
  local_c = ExceptionList;
  if (param_2 == (int *)0x0) {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    *param_1 = param_1 + 3;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"",0);
    ExceptionList = local_c;
    return param_1;
  }
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 0x20))(local_2c);
  puStack_8 = (undefined1 *)0x0;
  FUN_00568870(unaff_retaddr,puVar1);
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x0);
  }
  ExceptionList = pvStack_10;
  return unaff_retaddr;
}


//// FUNCTION FUN_0054c930 @ 0054c930 ////

void __fastcall FUN_0054c930(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d23ea0;
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


//// FUNCTION FUN_0054c980 @ 0054c980 ////

void __thiscall FUN_0054c980(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d23eb0;
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


//// FUNCTION FUN_0054c9d0 @ 0054c9d0 ////

void __fastcall FUN_0054c9d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d23eb0;
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


//// FUNCTION FUN_0054ca40 @ 0054ca40 ////

void __fastcall FUN_0054ca40(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cafc98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d23ee0;
  param_1[0xe] = &PTR_LAB_00d23ec0;
  puVar1 = (undefined4 *)param_1[0x18];
  local_4 = 3;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_009d3750(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  puVar1 = (undefined4 *)param_1[0x19];
  param_1[0x18] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_009d3750(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  puVar1 = (undefined4 *)param_1[0x1a];
  param_1[0x19] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_009d3750(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  puVar1 = (undefined4 *)param_1[0x1b];
  param_1[0x1a] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_009d3750(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  param_1[0x1b] = 0;
  param_1[0x22] = &PTR_LAB_00d23ea0;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x24] = param_1[0x23];
  }
  if (param_1[0x23] != 0) {
    *(undefined4 *)(param_1[0x23] + 4) = param_1[0x24];
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x24] = param_1[0x23];
  }
  if (param_1[0x23] != 0) {
    *(undefined4 *)(param_1[0x23] + 4) = param_1[0x24];
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x1c] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1e] = param_1[0x1d];
  }
  if (param_1[0x1d] != 0) {
    *(undefined4 *)(param_1[0x1d] + 4) = param_1[0x1e];
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1e] = param_1[0x1d];
  }
  if (param_1[0x1d] != 0) {
    *(undefined4 *)(param_1[0x1d] + 4) = param_1[0x1e];
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  local_4 = 0;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0054cbe0 @ 0054cbe0 ////

void __fastcall FUN_0054cbe0(int param_1)

{
  undefined1 *local_2c;
  size_t local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cafcb8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004073f0(&local_2c,"Name,",5);
  FUN_004073f0(&local_2c,"Date Released,",0xe);
  FUN_004073f0(&local_2c,"Script Quality,",0xf);
  FUN_004073f0(&local_2c,"Final Quality,",0xe);
  FUN_004073f0(&local_2c,"Success,",8);
  FUN_004073f0(&local_2c,"Cost,",5);
  FUN_004073f0(&local_2c,"Marketing Spend,",0x10);
  FUN_004073f0(&local_2c,"Takings,",8);
  FUN_004073f0(&local_2c,"Av Stunt Difficulty,",0x14);
  FUN_004073f0(&local_2c,"Stunt Success %,",0x10);
  FUN_0054b760(&local_2c);
  FUN_004073f0(&local_2c,"\r\n",2);
  if (*(void **)(param_1 + 100) != (void *)0x0) {
    FUN_009d3530(*(void **)(param_1 + 100),local_2c,local_28);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0054cd20 @ 0054cd20 ////

void __fastcall FUN_0054cd20(int param_1)

{
  undefined1 *local_2c;
  size_t local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cafcd8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004073f0(&local_2c,"Studio,",7);
  FUN_004073f0(&local_2c,"Name,",5);
  FUN_004073f0(&local_2c,"Date Released,",0xe);
  FUN_004073f0(&local_2c,"Script Quality,",0xf);
  FUN_004073f0(&local_2c,"Final Quality,",0xe);
  FUN_004073f0(&local_2c,"Success,",8);
  FUN_004073f0(&local_2c,"Cost,",5);
  FUN_004073f0(&local_2c,"PR and Marketing,",0x11);
  FUN_004073f0(&local_2c,"Takings,",8);
  FUN_0054b760(&local_2c);
  FUN_004073f0(&local_2c,"\r\n",2);
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    FUN_009d3530(*(void **)(param_1 + 0x68),local_2c,local_28);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0054ce50 @ 0054ce50 ////

void __fastcall FUN_0054ce50(int param_1)

{
  undefined1 *local_2c;
  size_t local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cafcf8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004073f0(&local_2c,"Year,",5);
  FUN_004073f0(&local_2c,"Star Salaries,",0xe);
  FUN_004073f0(&local_2c,"Staff Salaries,",0xf);
  FUN_004073f0(&local_2c,"Facilities and Sets,",0x14);
  FUN_004073f0(&local_2c,"Lot Prettying,",0xe);
  FUN_004073f0(&local_2c,"Balance,",8);
  FUN_004073f0(&local_2c,"Avg Stunt Skill,",0x10);
  FUN_004073f0(&local_2c,"Num Stunt Staff,",0x10);
  FUN_0054b760(&local_2c);
  FUN_004073f0(&local_2c,"\r\n",2);
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    FUN_009d3530(*(void **)(param_1 + 0x60),local_2c,local_28);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0054cf70 @ 0054cf70 ////

void __fastcall FUN_0054cf70(int param_1)

{
  undefined1 *local_2c;
  size_t local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cafd18;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004073f0(&local_2c,"Year,",5);
  FUN_004073f0(&local_2c,"Type,",5);
  FUN_004073f0(&local_2c,"Winner,",7);
  FUN_004073f0(&local_2c,"Studio,",7);
  FUN_0054b760(&local_2c);
  FUN_004073f0(&local_2c,"\r\n",2);
  if (*(void **)(param_1 + 0x6c) != (void *)0x0) {
    FUN_009d3530(*(void **)(param_1 + 0x6c),local_2c,local_28);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0054d190 @ 0054d190 ////

undefined4 * __thiscall FUN_0054d190(void *this,byte param_1)

{
  FUN_0054ca40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0054d510 @ 0054d510 ////

void __fastcall FUN_0054d510(int param_1)

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


//// FUNCTION FUN_0054d540 @ 0054d540 ////

void __cdecl FUN_0054d540(float param_1,void *param_2,int *param_3)

{
  int iVar1;
  void *this;
  int *piVar2;
  char cVar3;
  undefined2 uVar4;
  void *this_00;
  undefined4 *puVar5;
  int *piVar6;
  float *pfVar7;
  
  piVar2 = param_3;
  this = param_2;
  if (*(void **)((int)param_2 + 4) == (void *)0x0) {
    *(undefined4 *)((int)param_2 + 4) = 0;
    *(undefined4 *)((int)param_2 + 8) = 0;
    *(undefined4 *)((int)param_2 + 0xc) = 0;
    *param_3 = 0;
    piVar6 = *(int **)((int)param_1 + 0xac);
    param_3 = (int *)((int)param_1 + 0xb8);
    if (piVar6 != param_3) {
      do {
        uVar4 = FUN_004e0fd0((float)piVar6[2]);
        if ((char)uVar4 != '\0') {
          *piVar2 = *piVar2 + 1;
          cVar3 = FUN_004de210(piVar6[2]);
          if (cVar3 == '\0') {
            pfVar7 = &param_1;
            this_00 = (void *)FUN_004df4a0(piVar6[2]);
            puVar5 = (undefined4 *)FUN_004b58b0(this_00,pfVar7);
            param_2 = (void *)*puVar5;
            iVar1 = *(int *)((int)this + 4);
            if ((iVar1 == 0) ||
               ((uint)(*(int *)((int)this + 0xc) - iVar1 >> 2) <=
                (uint)(*(int *)((int)this + 8) - iVar1 >> 2))) {
              FUN_00481520(this,*(undefined4 **)((int)this + 8),1,&param_2);
            }
            else {
              puVar5 = *(undefined4 **)((int)this + 8);
              *puVar5 = param_2;
              *(undefined4 **)((int)this + 8) = puVar5 + 1;
            }
          }
        }
        piVar6 = (int *)piVar6[1];
      } while (piVar6 != param_3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_2 + 4));
}


//// FUNCTION FUN_0054d620 @ 0054d620 ////

undefined4 * __cdecl FUN_0054d620(undefined4 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *_Memory;
  float *pfVar3;
  undefined4 *puVar4;
  int local_60;
  undefined1 local_5c [4];
  float *local_58;
  float *local_54;
  undefined4 local_50;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cafdf0;
  local_c = ExceptionList;
  local_60 = 0;
  local_58 = (float *)0x0;
  local_54 = (float *)0x0;
  local_50 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0054d540(param_2,local_5c,&local_60);
  _Memory = local_58;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_60 < 1) {
    _strncpy(local_40,"n/a",3);
    local_48 = 3;
    local_4c[3] = '\0';
  }
  else {
    fVar1 = 0.0;
    for (pfVar3 = local_58; pfVar3 != local_54; pfVar3 = pfVar3 + 1) {
      fVar1 = fVar1 + *pfVar3;
    }
    if (local_58 == (float *)0x0) {
      local_60 = 0;
    }
    else {
      local_60 = (int)local_54 - (int)local_58 >> 2;
    }
    fVar2 = (float)local_60;
    if (local_60 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    puVar4 = FUN_00569c30(local_2c,fVar1 / fVar2);
    FUN_004015d0(&local_4c,(char *)*puVar4,puVar4[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_4c,local_48);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (_Memory == (float *)0x0) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0054d780 @ 0054d780 ////

undefined4 * __cdecl FUN_0054d780(undefined4 *param_1,float param_2)

{
  float fVar1;
  void *_Memory;
  undefined4 *puVar2;
  int local_84;
  int local_80;
  undefined1 local_7c [4];
  void *local_78;
  int local_74;
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
  
  puStack_8 = &LAB_00cafe10;
  local_c = ExceptionList;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_74 = 0;
  local_70 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0054d540(param_2,local_7c,&local_84);
  _Memory = local_78;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_84 < 1) {
    _strncpy(local_60,"n/a",3);
    local_68 = 3;
    local_6c[3] = '\0';
  }
  else {
    if (local_78 == (void *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = local_74 - (int)local_78 >> 2;
    }
    fVar1 = (float)local_80;
    if (local_80 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    puVar2 = FUN_00569c30(local_2c,fVar1 / (float)local_84);
    puVar2 = FUN_004312e0(local_4c,puVar2,"%");
    FUN_004015d0(&local_6c,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_6c,local_68);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0054d910 @ 0054d910 ////

void __cdecl FUN_0054d910(void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *this;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char **ppcVar7;
  float fStack_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cafe28;
  local_c = ExceptionList;
  puVar5 = DAT_0104cfc8;
  ExceptionList = &local_c;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      cVar1 = (**(code **)(*(int *)puVar5[2] + 0x204))();
      if (cVar1 != '\0') {
        iVar2 = FUN_005773c0(puVar5[2]);
        iVar3 = GetPlayerStudio();
        if (iVar2 == iVar3) {
          pcStack_2c = acStack_20;
          acStack_20[0] = '\0';
          uStack_28 = 0;
          uStack_24 = 0x14;
          _strncpy(pcStack_2c,"Stunts",6);
          uStack_28 = 6;
          pcStack_2c[6] = '\0';
          ppcVar7 = &pcStack_2c;
          puVar6 = &uStack_30;
          uStack_4 = 0;
          this = (void *)FUN_00577370(puVar5[2]);
          pfVar4 = (float *)FUN_00441750(this,puVar6,ppcVar7);
          fStack_34 = *pfVar4;
          uStack_4 = 0xffffffff;
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_2c);
          }
          if (0.0 < fStack_34) {
            FUN_004823e0(param_1,&fStack_34);
          }
        }
      }
      puVar6 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar6;
    } while ((undefined4 *)*puVar6 != &DAT_0104cfd4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0054da30 @ 0054da30 ////

undefined4 * __cdecl FUN_0054da30(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float *_Memory;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_5c [4];
  float *local_58;
  float *local_54;
  undefined4 local_50;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cafe50;
  local_c = ExceptionList;
  local_58 = (float *)0x0;
  local_54 = (float *)0x0;
  local_50 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0054d910(local_5c);
  _Memory = local_58;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((local_58 == (float *)0x0) || (iVar5 = (int)local_54 - (int)local_58 >> 2, iVar5 == 0)) {
    _strncpy(local_40,"n/a",3);
    local_48 = 3;
    local_4c[3] = '\0';
  }
  else {
    fVar1 = 0.0;
    for (pfVar3 = local_58; pfVar3 != local_54; pfVar3 = pfVar3 + 1) {
      fVar1 = fVar1 + *pfVar3;
    }
    fVar2 = (float)iVar5;
    if (iVar5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    puVar4 = FUN_00569c30(local_2c,fVar1 / fVar2);
    FUN_004015d0(&local_4c,(char *)*puVar4,puVar4[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_4c,local_48);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (_Memory == (float *)0x0) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0054db80 @ 0054db80 ////

undefined4 * __cdecl FUN_0054db80(undefined4 *param_1)

{
  void *_Memory;
  int iVar1;
  undefined1 local_1c [4];
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cafe68;
  local_c = ExceptionList;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0054d910(local_1c);
  _Memory = local_18;
  if (local_18 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = local_14 - (int)local_18 >> 2;
  }
  FUN_00569d60(param_1,iVar1);
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0054dc10 @ 0054dc10 ////

undefined4 * __fastcall FUN_0054dc10(undefined4 *param_1)

{
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cafeac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d23ee0;
  param_1[0xe] = &PTR_LAB_00d23ec0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = param_1 + 0x1c;
  param_1[0x1c] = &PTR_FUN_00d18c3c;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = param_1 + 0x22;
  param_1[0x22] = &PTR_LAB_00d23ea0;
  param_1[0x27] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar1 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0x28) = uVar1;
  FUN_00471b10((longlong *)(param_1 + 0x28));
  *(ulonglong *)(param_1 + 0x2a) = uVar1;
  FUN_00471b10((longlong *)(param_1 + 0x2a));
  *(ulonglong *)(param_1 + 0x2c) = uVar1;
  FUN_00471b10((longlong *)(param_1 + 0x2c));
  *(ulonglong *)(param_1 + 0x2e) = uVar1;
  FUN_00471b10((longlong *)(param_1 + 0x2e));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0054dd00 @ 0054dd00 ////

void FUN_0054dd00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cafecb;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  if (DAT_0104c960 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)*DAT_0104c960)(1);
    (*(code *)DAT_0104c94c[1])();
    DAT_0104c960 = (undefined4 *)0x0;
    (*(code *)*DAT_0104c94c)();
  }
  puVar1 = operator_new(0xc0);
  uStack_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0054dc10(puVar1);
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104c94c[1])();
  DAT_0104c960 = puVar2;
  (*(code *)*DAT_0104c94c)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0054ddb0 @ 0054ddb0 ////

/* WARNING: Removing unreachable block (ram,0x0054dddc) */

undefined4 * __fastcall FUN_0054ddb0(undefined4 *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  
  _eh_vector_constructor_iterator_(param_1,0x20,0x10,FUN_00401dc0,FUN_00401490);
  iVar4 = 0x10;
  puVar3 = param_1;
  do {
    if (puVar3[2] == 0) {
      puVar3[2] = 0x20;
      pvVar2 = _malloc(0x20);
      *puVar3 = pvVar2;
    }
    _strncpy((char *)*puVar3,"",0);
    puVar1 = (undefined1 *)*puVar3;
    puVar3[1] = 0;
    puVar3 = puVar3 + 8;
    iVar4 = iVar4 + -1;
    *puVar1 = 0;
  } while (iVar4 != 0);
  return param_1;
}


//// FUNCTION FUN_0054de30 @ 0054de30 ////

void __thiscall FUN_0054de30(void *this,char *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  char *pcVar2;
  size_t sVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  uint *puVar7;
  int local_64;
  char *local_60;
  uint local_5c;
  uint local_58;
  char local_54 [20];
  char local_40 [64];
  
  local_60 = local_54;
  local_54[0] = '\0';
  local_5c = 0;
  local_58 = 0x14;
  FUN_004015d0(&local_60,param_1,param_2);
  FUN_004073f0(&local_60," ",1);
  sVar3 = _sprintf(local_40,(char *)&param_2_00d1b93c,*(undefined4 *)(DAT_0104cdf4 + 0x3c));
  FUN_004073f0(&local_60,local_40,sVar3);
  puVar7 = (uint *)((int)this + 0x1e8);
  local_64 = 0xf;
  do {
    uVar6 = puVar7[-9];
    pcVar2 = (char *)puVar7[-10];
    if (*puVar7 <= uVar6) {
      if (0x14 < *puVar7) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar7[-2]);
      }
      uVar4 = uVar6 + 0x20 & 0xffffffe0;
      *puVar7 = uVar4;
      pvVar5 = _malloc(uVar4);
      puVar7[-2] = (uint)pvVar5;
    }
    _strncpy((char *)puVar7[-2],pcVar2,uVar6);
    uVar4 = local_5c;
    pcVar2 = local_60;
    puVar1 = puVar7 + -2;
    puVar7[-1] = uVar6;
    puVar7 = puVar7 + -8;
    local_64 = local_64 + -1;
    *(undefined1 *)(uVar6 + *puVar1) = 0;
  } while (local_64 != 0);
  if (*(uint *)((int)this + 8) <= local_5c) {
    if (0x14 < *(uint *)((int)this + 8)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    uVar6 = local_5c + 0x20 & 0xffffffe0;
    *(uint *)((int)this + 8) = uVar6;
    pvVar5 = _malloc(uVar6);
    *(void **)this = pvVar5;
  }
  _strncpy(*(char **)this,pcVar2,uVar4);
  *(uint *)((int)this + 4) = uVar4;
  *(undefined1 *)(uVar4 + *(int *)this) = 0;
  if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0054dfa0 @ 0054dfa0 ////

undefined1 FUN_0054dfa0(char param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_00d24084)[uVar1] == param_1) {
      return 1;
    }
  } while (((&DAT_00d24084)[uVar1] != param_2) && (uVar1 = uVar1 + 1, uVar1 < 0xc));
  return 0;
}


//// FUNCTION FUN_0054e110 @ 0054e110 ////

void __thiscall FUN_0054e110(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x75) == '\0') {
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


//// FUNCTION FUN_0054e1d0 @ 0054e1d0 ////

void __cdecl FUN_0054e1d0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x75);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x75);
  }
  return;
}


//// FUNCTION FUN_0054e1f0 @ 0054e1f0 ////

void __cdecl FUN_0054e1f0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x75);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x75);
  }
  return;
}


//// FUNCTION FUN_0054e220 @ 0054e220 ////

void __fastcall FUN_0054e220(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x75) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x75) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x75);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x75);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x75) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x75) == '\0');
    if (*(char *)((int)piVar4 + 0x75) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_0054e280 @ 0054e280 ////

void __fastcall FUN_0054e280(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x75) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x75) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x75);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x75);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x75);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x75);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_0054e360 @ 0054e360 ////

int FUN_0054e360(int *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  pcVar2 = (char *)*param_1;
  iVar5 = 0;
  *param_2 = 0;
  cVar1 = *pcVar2;
  iVar3 = -1;
  local_8 = 0;
  do {
    if (cVar1 == '\0') {
      return iVar3;
    }
    if (cVar1 == '(') {
      local_8 = local_8 + 1;
    }
    else if (cVar1 == ')') {
      local_8 = local_8 + -1;
    }
    else if (local_8 == 0) {
      switch(cVar1) {
      case '!':
      case '<':
      case '=':
      case '>':
        if (pcVar2[1] != '=') goto switchD_0054e3cf_caseD_25;
        iVar4 = iVar5;
        if ((iVar3 < 0) || (cVar1 = FUN_0054dfa0('=',*(char *)(*param_1 + iVar3)), cVar1 != '\0'))
        goto LAB_0054e44d;
LAB_0054e453:
        iVar5 = iVar5 + 1;
        pcVar2 = pcVar2 + 1;
        break;
      case '%':
      case '*':
      case '+':
      case '-':
      case '/':
switchD_0054e3cf_caseD_25:
        if ((iVar3 < 0) || (cVar1 = FUN_0054dfa0(cVar1,*(char *)(*param_1 + iVar3)), cVar1 != '\0'))
        {
          *param_2 = 1;
          iVar3 = iVar5;
        }
        break;
      case '&':
      case '|':
        if ((iVar3 < 0) || (cVar1 = FUN_0054dfa0(cVar1,*(char *)(*param_1 + iVar3)), cVar1 != '\0'))
        {
          *param_2 = 1;
          iVar3 = iVar5;
        }
        iVar4 = iVar3;
        if (pcVar2[1] == *pcVar2) {
LAB_0054e44d:
          *param_2 = 2;
          iVar3 = iVar4;
          goto LAB_0054e453;
        }
      }
    }
    cVar1 = pcVar2[1];
    iVar5 = iVar5 + 1;
    pcVar2 = pcVar2 + 1;
  } while( true );
}


//// FUNCTION FUN_0054e4e0 @ 0054e4e0 ////

int FUN_0054e4e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    do {
      switch(*(undefined1 *)(*param_1 + iVar1)) {
      case 0x21:
      case 0x25:
      case 0x26:
      case 0x2a:
      case 0x2b:
      case 0x2d:
      case 0x2f:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x7c:
        if (iVar2 == 0) {
          return iVar1 + 1;
        }
        break;
      case 0x28:
        iVar2 = iVar2 + -1;
        break;
      case 0x29:
        iVar2 = iVar2 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}


//// FUNCTION FUN_0054e590 @ 0054e590 ////

int FUN_0054e590(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  iVar3 = 0;
  param_2 = param_2 + 1;
  if (param_2 < iVar1) {
    iVar2 = param_2;
    do {
      switch(*(undefined1 *)(*param_1 + iVar2)) {
      case 0x21:
      case 0x25:
      case 0x26:
      case 0x2a:
      case 0x2b:
      case 0x2f:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x7c:
        if (iVar3 == 0) {
          return iVar2;
        }
        break;
      case 0x28:
        iVar3 = iVar3 + 1;
        break;
      case 0x29:
        iVar3 = iVar3 + -1;
        break;
      case 0x2d:
        if ((iVar3 == 0) && (param_2 < iVar2)) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return iVar1;
}


//// FUNCTION FUN_0054e660 @ 0054e660 ////

void __fastcall FUN_0054e660(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caff08;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_005499f0(param_1 + 8);
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0054e6b0 @ 0054e6b0 ////

int __thiscall FUN_0054e6b0(void *this,void *param_1,uint param_2,size_t param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  if (param_2 < uVar1) {
    iVar2 = *(int *)this;
    for (pcVar4 = (char *)(iVar2 + param_2); pcVar4 < (char *)(iVar2 + uVar1); pcVar4 = pcVar4 + 1)
    {
      pvVar3 = _memchr(param_1,(int)*pcVar4,param_3);
      if (pvVar3 == (void *)0x0) {
        return (int)pcVar4 - *(int *)this;
      }
    }
  }
  return -1;
}


//// FUNCTION FUN_0054e780 @ 0054e780 ////

void __thiscall FUN_0054e780(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x75) == '\0') {
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


//// FUNCTION FUN_0054e7e0 @ 0054e7e0 ////

int * __fastcall FUN_0054e7e0(int *param_1)

{
  FUN_0054e280(param_1);
  return param_1;
}


//// FUNCTION FUN_0054e7f0 @ 0054e7f0 ////

int * __fastcall FUN_0054e7f0(int *param_1)

{
  FUN_0054e220(param_1);
  return param_1;
}


//// FUNCTION FUN_0054e850 @ 0054e850 ////

void __fastcall FUN_0054e850(int param_1)

{
  FUN_0054e660((undefined4 *)(param_1 + 0xc));
  return;
}


//// FUNCTION FUN_0054e8b0 @ 0054e8b0 ////

undefined4 * __thiscall FUN_0054e8b0(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x75) == '\0') {
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
LAB_0054e8f4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0054e8f9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0054e8f4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0054e8f9:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x75) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_0054e920 @ 0054e920 ////

int * __fastcall FUN_0054e920(int *param_1)

{
  FUN_0054e280(param_1);
  return param_1;
}


//// FUNCTION FUN_0054e930 @ 0054e930 ////

int * __fastcall FUN_0054e930(int *param_1)

{
  FUN_0054e220(param_1);
  return param_1;
}


//// FUNCTION FUN_0054e940 @ 0054e940 ////

void FUN_0054e940(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x1d) = 1;
  *(undefined1 *)((int)puVar1 + 0x75) = 0;
  return;
}


//// FUNCTION FUN_0054e9b0 @ 0054e9b0 ////

void * __thiscall FUN_0054e9b0(void *this,byte param_1)

{
  FUN_0054e850((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0054e9d0 @ 0054e9d0 ////

bool FUN_0054e9d0(undefined4 *param_1,int param_2,void *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  void *local_20 [2];
  uint local_18;
  
  if (param_1[1] == 0) {
    FUN_004015d0(param_3,"",0);
    return param_2 == 0;
  }
  if (param_2 == 0) {
    uVar1 = FUN_00413450(param_1,",",0,1);
    if (uVar1 == 0xffffffff) {
      FUN_004015d0(param_3,(char *)*param_1,param_1[1]);
      return true;
    }
    puVar2 = FUN_00430770(param_1,local_20,0,uVar1);
    FUN_004015d0(param_3,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  else {
    pvVar3 = (void *)0xffffffff;
    pvVar5 = param_3;
    if (-1 < param_2) {
      iVar4 = param_2 + 1;
      do {
        pvVar5 = pvVar3;
        pvVar3 = (void *)FUN_00413450(param_1,",",(int)pvVar5 + 1,1);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((int)pvVar5 < 0) {
      FUN_004015d0(param_3,"",0);
      return false;
    }
    if (pvVar3 == (void *)0xffffffff) {
      pvVar3 = (void *)(param_1[1] + 1);
    }
    puVar2 = FUN_00430770(param_1,local_20,(int)pvVar5 + 1,(int)pvVar3 + (-1 - (int)pvVar5));
    FUN_004015d0(param_3,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  return true;
}


//// FUNCTION FUN_0054eb10 @ 0054eb10 ////

undefined4 FUN_0054eb10(int *param_1)

{
  char *_Source;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint _Size;
  void *pvVar4;
  int iVar5;
  int iVar6;
  void *local_60 [2];
  uint local_58;
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  uVar1 = FUN_00448220(param_1,&DAT_00d24090,0,2);
  while( true ) {
    if (uVar1 == 0xffffffff) {
      iVar6 = 0;
      iVar5 = 0;
      if (0 < param_1[1]) {
        do {
          if (*(char *)(*param_1 + iVar5) == '(') {
            iVar6 = iVar6 + 1;
          }
          else if (*(char *)(*param_1 + iVar5) == ')') {
            iVar6 = iVar6 + -1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_1[1]);
        if (iVar6 != 0) {
          return 3;
        }
      }
      return 0;
    }
    puVar2 = FUN_00430770(param_1,local_20,uVar1 + 1,param_1[1]);
    puVar3 = FUN_00430770(param_1,local_40,0,uVar1);
    puVar2 = FUN_0047aee0(local_60,puVar3,puVar2);
    uVar1 = puVar2[1];
    _Source = (char *)*puVar2;
    if ((uint)param_1[2] <= uVar1) {
      if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      _Size = uVar1 + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar4 = _malloc(_Size);
      *param_1 = (int)pvVar4;
    }
    _strncpy((char *)*param_1,_Source,uVar1);
    param_1[1] = uVar1;
    *(undefined1 *)(uVar1 + *param_1) = 0;
    if (0x14 < local_58) break;
    if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
      _free(local_40[0]);
    }
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    uVar1 = FUN_00448220(param_1,&DAT_00d24090,0,2);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_60[0]);
}


//// FUNCTION FUN_0054ec60 @ 0054ec60 ////

uint FUN_0054ec60(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  void *local_20 [2];
  uint local_18;
  
  pcVar2 = (char *)*param_1;
  if ((*pcVar2 == '(') && (pcVar2[param_1[1] + -1] == ')')) {
    pcVar5 = pcVar2 + 1;
    cVar1 = *pcVar5;
    iVar6 = 1;
    do {
      if (cVar1 == '\0') {
        puVar3 = FUN_00430770(param_1,local_20,1,param_1[1] - 2);
        uVar4 = FUN_004015d0(param_1,(char *)*puVar3,puVar3[1]);
        if (local_18 < 0x15) {
          return CONCAT31((int3)((uint)uVar4 >> 8),1);
        }
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
      if (cVar1 == 0x28) {
        pcVar2 = (char *)0x0;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + 1;
      }
      else {
        pcVar2 = (char *)(cVar1 + -0x29);
        if (pcVar2 == (char *)0x0) {
          iVar6 = iVar6 + -1;
        }
        else if (iVar6 == 0) break;
      }
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    } while( true );
  }
  return (uint)pcVar2 & 0xffffff00;
}


//// FUNCTION FUN_0054ecf0 @ 0054ecf0 ////

float10 __thiscall FUN_0054ecf0(int param_1,char *param_2,uint param_3,uint param_4)

{
  char *_Memory;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  char local_80 [4];
  undefined4 uStack_7c;
  float local_58;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caff38;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 2;
  ExceptionList = &local_c;
  do {
    uVar4 = FUN_0054ec60(&param_2);
  } while ((char)uVar4 != '\0');
  uStack_7c = 0x54ed69;
  bVar1 = FUN_0054e9d0(&param_2,1,&local_2c);
  uStack_7c = 0x54ed80;
  bVar2 = FUN_0054e9d0(&param_2,2,&local_4c);
  uStack_7c = 0x54ed94;
  bVar3 = FUN_0054e9d0(&param_2,0,&param_2);
  _Memory = param_2;
  if ((!bVar1 || !bVar2) || !bVar3) {
    *(undefined4 *)(param_1 + 0x70) = 3;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (local_24 < 0x15) {
      if (param_4 < 0x15) {
        ExceptionList = local_c;
        return (float10)0.0;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pcVar8 = local_80;
  local_80[0] = '\0';
  uVar9 = 0;
  uVar10 = 0x14;
  FUN_004015d0(&stack0xffffff74,param_2,param_3);
  fVar5 = FUN_005515c0(param_1,pcVar8,uVar9,uVar10);
  pcVar8 = local_80;
  local_80[0] = '\0';
  uVar9 = 0;
  uVar10 = 0x14;
  FUN_004015d0(&stack0xffffff74,local_2c,local_28);
  fVar6 = FUN_005515c0(param_1,pcVar8,uVar9,uVar10);
  pcVar8 = local_80;
  local_80[0] = '\0';
  uVar9 = 0;
  uVar10 = 0x14;
  FUN_004015d0(&stack0xffffff74,local_4c,local_48);
  fVar7 = FUN_005515c0(param_1,pcVar8,uVar9,uVar10);
  local_58 = (float)fVar5;
  if ((float)fVar5 < (float)fVar6) {
    local_58 = (float)fVar6;
  }
  if (fVar7 < (float10)local_58) {
    local_58 = (float)fVar7;
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (param_4 < 0x15) {
    ExceptionList = local_c;
    return (float10)local_58;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0054ef00 @ 0054ef00 ////

float10 __thiscall FUN_0054ef00(int param_1,char *param_2,uint param_3,uint param_4)

{
  char *_Memory;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  float10 fVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char local_78 [4];
  undefined4 uStack_74;
  float local_50;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caff68;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 2;
  ExceptionList = &local_c;
  do {
    uVar4 = FUN_0054ec60(&param_2);
  } while ((char)uVar4 != '\0');
  uStack_74 = 0x54ef79;
  bVar1 = FUN_0054e9d0(&param_2,1,&local_2c);
  uStack_74 = 0x54ef90;
  bVar2 = FUN_0054e9d0(&param_2,2,&local_4c);
  uStack_74 = 0x54efa4;
  bVar3 = FUN_0054e9d0(&param_2,0,&param_2);
  _Memory = param_2;
  if ((!bVar1 || !bVar2) || !bVar3) {
    *(undefined4 *)(param_1 + 0x70) = 3;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (local_24 < 0x15) {
      if (param_4 < 0x15) {
        ExceptionList = local_c;
        return (float10)0.0;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pcVar6 = local_78;
  local_78[0] = '\0';
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xffffff7c,param_2,param_3);
  fVar5 = FUN_005515c0(param_1,pcVar6,uVar7,uVar8);
  uVar8 = 0x14;
  uVar7 = 0;
  local_78[0] = '\0';
  pcVar6 = local_78;
  if (fVar5 == (float10)0.0) {
    FUN_004015d0(&stack0xffffff7c,local_4c,local_48);
    fVar5 = FUN_005515c0(param_1,pcVar6,uVar7,uVar8);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  else {
    FUN_004015d0(&stack0xffffff7c,local_2c,local_28);
    fVar5 = FUN_005515c0(param_1,pcVar6,uVar7,uVar8);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  if (local_24 < 0x15) {
    local_50 = (float)fVar5;
    if (param_4 < 0x15) {
      ExceptionList = local_c;
      return (float10)local_50;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_0054f100 @ 0054f100 ////

float10 FUN_0054f100(void *param_1,undefined4 param_2,uint param_3)

{
  char *_Source;
  uint _Count;
  bool bVar1;
  undefined4 uVar2;
  char *_Dest;
  int in_ECX;
  float10 fVar3;
  uint _Size;
  char local_5c [4];
  undefined4 uStack_58;
  int local_38;
  float local_34;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caff90;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  do {
    uVar2 = FUN_0054ec60(&param_1);
    local_20[0] = (char)uVar2;
  } while (local_20[0] != '\0');
  local_2c = local_20;
  local_38 = 0;
  local_34 = 0.0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = CONCAT31(local_4._1_3_,1);
  uStack_58 = 0x54f170;
  bVar1 = FUN_0054e9d0(&param_1,0,&local_2c);
  if (bVar1) {
    do {
      _Count = local_28;
      _Source = local_2c;
      _Dest = local_5c;
      local_5c[0] = '\0';
      _Size = 0x14;
      if (0x13 < local_28) {
        _Size = local_28 + 0x20 & 0xffffffe0;
        _Dest = _malloc(_Size);
      }
      _strncpy(_Dest,_Source,_Count);
      _Dest[_Count] = '\0';
      fVar3 = FUN_005515c0(in_ECX,_Dest,_Count,_Size);
      local_34 = (float)(fVar3 + (float10)local_34);
      local_38 = local_38 + 1;
      uStack_58 = 0x54f1fc;
      bVar1 = FUN_0054e9d0(&param_1,local_38,&local_2c);
    } while (bVar1);
    if (local_38 != 0) {
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (param_3 < 0x15) {
        ExceptionList = local_c;
        return (float10)(local_34 / (float)local_38);
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (param_3 < 0x15) {
    ExceptionList = local_c;
    return (float10)0.0;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_0054f2b0 @ 0054f2b0 ////

float10 __thiscall FUN_0054f2b0(int param_1,void *param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 unaff_EDI;
  float10 fVar4;
  float10 fVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char acStack_78 [4];
  undefined4 uStack_74;
  undefined2 uVar9;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caffb8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 2;
  ExceptionList = &local_c;
  do {
    uVar3 = FUN_0054ec60(&param_2);
    uVar9 = (undefined2)unaff_EDI;
  } while ((char)uVar3 != '\0');
  uStack_74 = 0x54f327;
  bVar1 = FUN_0054e9d0(&param_2,0,&local_2c);
  uStack_74 = 0x54f33e;
  bVar2 = FUN_0054e9d0(&param_2,1,&local_4c);
  if (bVar1 && bVar2) {
    pcVar6 = acStack_78;
    acStack_78[0] = '\0';
    uVar7 = 0;
    uVar8 = 0x14;
    FUN_004015d0(&stack0xffffff7c,local_2c,local_28);
    fVar4 = FUN_005515c0(param_1,pcVar6,uVar7,uVar8);
    pcVar6 = acStack_78;
    acStack_78[0] = '\0';
    uVar7 = 0;
    uVar8 = 0x14;
    FUN_004015d0(&stack0xffffff7c,local_4c,local_48);
    FUN_005515c0(param_1,pcVar6,uVar7,uVar8);
    fVar5 = (float10)FUN_00ace9b0();
    fVar4 = FUN_00acf400((double)(fVar5 * (float10)(float)fVar4 + (float10)0.5),uVar9);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    ExceptionList = local_c;
    return (float10)(float)(fVar4 / (float10)(float)fVar5);
  }
  *(undefined4 *)(param_1 + 0x70) = 3;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return (float10)0.0;
}


//// FUNCTION FUN_0054f3a0 @ 0054f3a0 ////

float10 FUN_0054f3a0(void)

{
  uint unaff_EBX;
  int unaff_ESI;
  uint unaff_EDI;
  float10 fVar1;
  undefined2 unaff_retaddr;
  undefined1 *puStack00000010;
  undefined1 *puStack00000014;
  char *in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  char *in_stack_00000038;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  void *in_stack_00000058;
  void *in_stack_00000068;
  uint in_stack_00000070;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_14 [8];
  undefined4 uStack_c;
  
  puStack00000014 = &stack0xffffffe0;
  pcVar2 = local_14;
  uVar3 = unaff_EBX;
  uVar4 = unaff_EDI;
  local_14[0] = (char)unaff_EBX;
  FUN_004015d0(&stack0xffffffe0,in_stack_00000038,in_stack_0000003c);
  fVar1 = FUN_005515c0(unaff_ESI,pcVar2,uVar3,uVar4);
  puStack00000014 = (undefined1 *)(float)fVar1;
  puStack00000010 = &stack0xffffffe0;
  pcVar2 = local_14;
  uVar3 = unaff_EDI;
  local_14[0] = (char)unaff_EBX;
  FUN_004015d0(&stack0xffffffe0,in_stack_00000018,in_stack_0000001c);
  fVar1 = FUN_005515c0(unaff_ESI,pcVar2,unaff_EBX,uVar3);
  puStack00000010 = (undefined1 *)(float)fVar1;
  fVar1 = (float10)FUN_00ace9b0();
  puStack00000010 = (undefined1 *)(float)fVar1;
  uStack_c = 0x54f428;
  fVar1 = FUN_00acf400((double)(fVar1 * (float10)(float)puStack00000014 + (float10)0.5),
                       unaff_retaddr);
  puStack00000014 = (undefined1 *)(float)(fVar1 / (float10)(float)puStack00000010);
  if (unaff_EDI < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000018);
  }
  if (unaff_EDI < in_stack_00000040) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000038);
  }
  if (unaff_EDI < in_stack_00000070) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000068);
  }
  ExceptionList = in_stack_00000058;
  return (float10)(float)puStack00000014;
}


//// FUNCTION FUN_0054f490 @ 0054f490 ////

float10 __thiscall FUN_0054f490(int param_1,char *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  char *_Memory;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined2 unaff_DI;
  bool bVar9;
  float10 fVar10;
  char *in_stack_ffffff58;
  char *pcVar11;
  uint in_stack_ffffff5c;
  uint uVar12;
  byte **ppbVar13;
  byte **ppbVar14;
  float local_70;
  byte *local_6c [2];
  uint local_64;
  byte *local_4c;
  undefined4 local_48;
  uint local_44;
  byte local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caffe0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar3 = FUN_00413450(&param_2,"(",0,1);
  if ((int)uVar3 < 1) {
    *(undefined4 *)(param_1 + 0x70) = 3;
    goto joined_r0x0054f4e9;
  }
  FUN_00430770(&param_2,local_6c,0,uVar3);
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar4 = FUN_00430770(&param_2,local_2c,uVar3,param_3);
  FUN_004015d0(&param_2,(char *)*puVar4,puVar4[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  _strncpy((char *)local_4c,"abs",3);
  local_48 = 3;
  local_4c[3] = 0;
  _Memory = param_2;
  pbVar5 = local_6c[0];
  pbVar8 = local_4c;
  do {
    bVar1 = *pbVar5;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_0054f5c4:
      iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0054f5c9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_0054f5c4;
    pbVar5 = pbVar5 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_0054f5c9:
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (iVar6 == 0) {
    pcVar11 = &stack0xffffff64;
    uVar3 = 0;
    uVar12 = 0x14;
    FUN_004015d0(&stack0xffffff58,param_2,param_3);
    fVar10 = FUN_005515c0(param_1,pcVar11,uVar3,uVar12);
    fVar10 = ABS(fVar10);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    goto LAB_0054f646;
  }
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  _strncpy((char *)local_4c,"int",3);
  ppbVar14 = &local_4c;
  ppbVar13 = local_6c;
  local_48 = 3;
  local_4c[3] = 0;
  uVar3 = 0x54f6a0;
  uVar7 = FUN_00401ec0(ppbVar13,ppbVar14);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((char)uVar7 == '\0') {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    _strncpy((char *)local_4c,"clamp",5);
    ppbVar14 = &local_4c;
    ppbVar13 = local_6c;
    local_48 = 5;
    local_4c[5] = 0;
    uVar3 = 0x54f789;
    uVar7 = FUN_00401ec0(ppbVar13,ppbVar14);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if ((char)uVar7 == '\0') {
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 0x14;
      _strncpy((char *)local_4c,"choose",6);
      ppbVar14 = &local_4c;
      ppbVar13 = local_6c;
      local_48 = 6;
      local_4c[6] = 0;
      uVar3 = 0x54f810;
      uVar7 = FUN_00401ec0(ppbVar13,ppbVar14);
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      if ((char)uVar7 == '\0') {
        FUN_00401de0(local_2c,"average",0xffffffff);
        bVar9 = false;
        uVar7 = FUN_00401ec0(local_6c,local_2c);
        if ((char)uVar7 == '\0') {
          FUN_00401de0(&local_4c,"avg",0xffffffff);
          bVar9 = true;
          uVar7 = FUN_00401ec0(local_6c,&local_4c);
          bVar2 = false;
          if ((char)uVar7 != '\0') goto LAB_0054f8b2;
        }
        else {
LAB_0054f8b2:
          bVar2 = true;
        }
        if ((bVar9) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (bVar2) {
          FUN_00403de0(&stack0xffffff58,&param_2);
          fVar10 = FUN_0054f100(in_stack_ffffff58,in_stack_ffffff5c,uVar3);
        }
        else {
          FUN_00401de0(local_2c,"round",0xffffffff);
          uVar7 = FUN_00401ec0(local_6c,local_2c);
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if ((char)uVar7 == '\0') {
            *(undefined4 *)(param_1 + 0x70) = 3;
            if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
              _free(local_6c[0]);
            }
joined_r0x0054f4e9:
            if (param_4 < 0x15) {
              ExceptionList = local_c;
              return (float10)0.0;
            }
                    /* WARNING: Subroutine does not return */
            _free(param_2);
          }
          FUN_00403de0(&stack0xffffff58,&param_2);
          fVar10 = FUN_0054f2b0(param_1,in_stack_ffffff58,in_stack_ffffff5c,uVar3);
        }
      }
      else {
        FUN_00403de0(&stack0xffffff58,&param_2);
        fVar10 = FUN_0054ef00(param_1,in_stack_ffffff58,in_stack_ffffff5c,uVar3);
      }
    }
    else {
      FUN_00403de0(&stack0xffffff58,&param_2);
      fVar10 = FUN_0054ecf0(param_1,in_stack_ffffff58,in_stack_ffffff5c,uVar3);
    }
  }
  else {
    FUN_00403de0(&stack0xffffff58,&param_2);
    fVar10 = FUN_005515c0(param_1,in_stack_ffffff58,in_stack_ffffff5c,uVar3);
    fVar10 = FUN_00acf400((double)(fVar10 + (float10)0.5),unaff_DI);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
LAB_0054f646:
  local_70 = (float)fVar10;
  ExceptionList = local_c;
  return (float10)local_70;
}


//// FUNCTION FUN_0054fa00 @ 0054fa00 ////

void __fastcall FUN_0054fa00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054e940();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x75) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0054fa50 @ 0054fa50 ////

int __fastcall FUN_0054fa50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054e940();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x75) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0054fa90 @ 0054fa90 ////

void FUN_0054fa90(void *param_1)

{
  if (*(char *)((int)param_1 + 0x75) == '\0') {
    FUN_0054fa90(*(void **)((int)param_1 + 8));
    FUN_0054e850((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0054fad0 @ 0054fad0 ////

void __fastcall FUN_0054fad0(int param_1)

{
  FUN_0054fa90(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0054fb00 @ 0054fb00 ////

void __thiscall FUN_0054fb00(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cb0000;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x75) != '\0') {
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
  FUN_0054e280((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x75) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x75) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x75) == '\0') {
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
      iVar1 = param_2[0x1d];
      *(char *)(param_2 + 0x1d) = (char)_Memory[0x1d];
      *(char *)(_Memory + 0x1d) = (char)iVar1;
      goto LAB_0054fc71;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x75) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x75) == '\0') {
      piVar2 = (int *)FUN_0054e1f0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x75) == '\0') {
      uVar3 = FUN_0054e1d0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0054fc71:
  if ((char)_Memory[0x1d] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0x1d] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0x1d] == '\0') {
            *(undefined1 *)(piVar4 + 0x1d) = 1;
            *(undefined1 *)(piVar5 + 0x1d) = 0;
            FUN_0054e780(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x75) == '\0') {
            if ((*(char *)(*piVar4 + 0x74) != '\x01') || (*(char *)(piVar4[2] + 0x74) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x74) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x74) = 1;
                *(undefined1 *)(piVar4 + 0x1d) = 0;
                FUN_0054e110(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0x1d) = (char)piVar5[0x1d];
              *(undefined1 *)(piVar5 + 0x1d) = 1;
              *(undefined1 *)(piVar4[2] + 0x74) = 1;
              FUN_0054e780(this,(int)piVar5);
              break;
            }
LAB_0054fd35:
            *(undefined1 *)(piVar4 + 0x1d) = 0;
          }
        }
        else {
          if ((char)piVar4[0x1d] == '\0') {
            *(undefined1 *)(piVar4 + 0x1d) = 1;
            *(undefined1 *)(piVar5 + 0x1d) = 0;
            FUN_0054e110(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x75) == '\0') {
            if ((*(char *)(piVar4[2] + 0x74) == '\x01') && (*(char *)(*piVar4 + 0x74) == '\x01'))
            goto LAB_0054fd35;
            if (*(char *)(*piVar4 + 0x74) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x74) = 1;
              *(undefined1 *)(piVar4 + 0x1d) = 0;
              FUN_0054e780(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0x1d) = (char)piVar5[0x1d];
            *(undefined1 *)(piVar5 + 0x1d) = 1;
            *(undefined1 *)(*piVar4 + 0x74) = 1;
            FUN_0054e110(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0x1d) = 1;
  }
  local_4 = 1;
  FUN_005499f0(_Memory + 0xb);
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_0054fdf0 @ 0054fdf0 ////

void __thiscall FUN_0054fdf0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0054fa90((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x75) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x75) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x75);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x75);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x75);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x75);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0054fb00(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0054ff40 @ 0054ff40 ////

void __fastcall FUN_0054ff40(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb002e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d240d0;
  local_4 = 2;
  if (0x14 < (uint)param_1[0x20]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1e]);
  }
  FUN_0054fdf0(param_1 + 0x19,&local_10,*(int **)param_1[0x1a],(int *)param_1[0x1a]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1a]);
}


//// FUNCTION FUN_00550010 @ 00550010 ////

void __thiscall FUN_00550010(void *this,undefined4 *param_1,float param_2)

{
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  byte *local_d4;
  undefined4 local_d0;
  uint local_cc;
  byte local_c8 [20];
  char *local_b4;
  undefined4 local_b0;
  uint local_ac;
  char local_a8 [20];
  uint local_94;
  void *local_90;
  byte *local_8c [2];
  uint local_84;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  byte *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0084;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_90 = this;
  uVar3 = FUN_00413450(param_1,":",0,1);
  local_94 = uVar3;
  if (uVar3 == 0xffffffff) {
    pfVar4 = (float *)FUN_00515d20((void *)((int)this + 0x58),param_1);
    *pfVar4 = param_2;
  }
  FUN_00430770(param_1,local_8c,0,uVar3);
  local_d4 = local_c8;
  local_4 = 0;
  local_c8[0] = 0;
  local_d0 = 0;
  local_cc = 0x14;
  _strncpy((char *)local_d4,"this",4);
  local_d0 = 4;
  local_d4[4] = 0;
  pvVar2 = local_90;
  pbVar6 = local_8c[0];
  pbVar7 = local_d4;
  do {
    bVar1 = *pbVar6;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_005500e7:
      iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_005500ec;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_005500e7;
    pbVar6 = pbVar6 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_005500ec:
  if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
    _free(local_d4);
  }
  if (iVar5 == 0) {
    if (*(void **)((int)local_90 + 0x74) == (void *)0x0) goto LAB_00550348;
    FUN_005562f0(*(void **)((int)local_90 + 0x74),local_2c,0);
    local_4._0_1_ = 1;
    FUN_00558de0(*(void **)((int)pvVar2 + 0x74),local_4c);
    local_b4 = local_a8;
    local_a8[0] = '\0';
    local_b0 = 0;
    local_ac = 0x14;
    _strncpy(local_b4,"",0);
    local_b0 = 0;
    *local_b4 = '\0';
    local_4._0_1_ = 3;
    FUN_00558a50(*(void **)((int)pvVar2 + 0x74),&local_b4,(undefined4 *)0x1);
    if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
      _free(local_b4);
    }
    FUN_00430770(param_1,local_6c,local_94 + 1,param_1[1]);
    local_d4 = local_c8;
    local_c8[0] = 0;
    local_d0 = 0;
    local_cc = 0x14;
    _strncpy((char *)local_d4,"/",1);
    local_d0 = 1;
    local_d4[1] = 0;
    local_b4 = local_a8;
    local_a8[0] = '\0';
    local_b0 = 0;
    local_ac = 0x14;
    _strncpy(local_b4,".",1);
    local_b0 = 1;
    local_b4[1] = '\0';
    local_4._0_1_ = 6;
    FUN_00569860((int *)local_6c,&local_b4,&local_d4);
    if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
      _free(local_b4);
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
      _free(local_d4);
    }
    FUN_00557fe0(*(void **)((int)pvVar2 + 0x74),local_6c,param_2);
    FUN_00558a50(*(void **)((int)pvVar2 + 0x74),local_2c,(undefined4 *)0x1);
    FUN_005584e0(*(void **)((int)pvVar2 + 0x74),&local_d4,local_4c);
    if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
      _free(local_d4);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
  }
  else {
    local_d4 = local_c8;
    local_c8[0] = 0;
    local_d0 = 0;
    local_cc = 0x14;
    _strncpy((char *)local_d4,"csv",3);
    local_d0 = 3;
    local_d4[3] = 0;
    local_2c[0] = local_d4;
    local_24 = local_cc;
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
LAB_00550348:
  if (local_84 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_8c[0]);
}


//// FUNCTION FUN_005503a0 @ 005503a0 ////

int __fastcall FUN_005503a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054e940();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x75) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005503d0 @ 005503d0 ////

undefined4 * __thiscall FUN_005503d0(void *this,byte param_1)

{
  FUN_0054ff40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005503f0 @ 005503f0 ////

undefined4 * __fastcall FUN_005503f0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb00ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d240d0;
  local_4 = 0;
  param_1[0xe] = param_1 + 0x11;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x14;
  FUN_004015d0(param_1 + 0xe,"",0);
  local_4._0_1_ = 1;
  iVar1 = FUN_004e12f0();
  param_1[0x17] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x17] + 4) = param_1[0x17];
  *(undefined4 *)param_1[0x17] = param_1[0x17];
  *(undefined4 *)(param_1[0x17] + 8) = param_1[0x17];
  param_1[0x18] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar1 = FUN_0054e940();
  param_1[0x1a] = iVar1;
  *(undefined1 *)(iVar1 + 0x75) = 1;
  *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1a];
  *(undefined4 *)param_1[0x1a] = param_1[0x1a];
  *(undefined4 *)(param_1[0x1a] + 8) = param_1[0x1a];
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = param_1 + 0x21;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x14;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005504d0 @ 005504d0 ////

undefined4 * __thiscall FUN_005504d0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cb00c0;
  local_10 = ExceptionList;
  local_18 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)param_1 + 0x3d) == '\0') {
    ExceptionList = &local_10;
    puVar1 = FUN_00548a90(*(undefined4 *)((int)this + 4),param_2,*(undefined4 *)((int)this + 4),
                          param_1 + 3,*(undefined1 *)(param_1 + 0xf));
    if (*(char *)((int)local_18 + 0x3d) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_005504d0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_005504d0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}


//// FUNCTION FUN_00550580 @ 00550580 ////

void __thiscall FUN_00550580(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)((int)this + 4);
  puVar7 = FUN_005504d0(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),iVar2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar3 = *(int **)((int)this + 4);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x3d) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x3d);
    piVar6 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0x3d);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar3 = (int)piVar4;
    iVar2 = *(int *)(*(int *)((int)this + 4) + 4);
    iVar5 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar5 + 0x3d);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x3d);
      iVar2 = iVar5;
      iVar5 = *(int *)(iVar5 + 8);
    }
    *(int *)(*(int *)((int)this + 4) + 8) = iVar2;
    return;
  }
  *piVar3 = (int)piVar3;
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00550610 @ 00550610 ////

void * __thiscall FUN_00550610(void *this,int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cb00d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00547fd0();
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  FUN_00550580(this,param_1);
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_005506c0 @ 005506c0 ////

undefined4 * __thiscall FUN_005506c0(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb00e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043dd00(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d23dc8;
  FUN_00550610((void *)((int)this + 0x38),param_1 + 0x38);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  ExceptionList = local_c;
  return this;
}


